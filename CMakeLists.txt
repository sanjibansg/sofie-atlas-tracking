cmake_minimum_required(VERSION 3.16)
project(gnn_test LANGUAGES CXX)

# ----------------------------------------
# Options
# ----------------------------------------
option(SOFIE_GNN_USE_LARGE "Use large GNN model" OFF)
option(SOFIE_GNN_DEBUG "Enable debug mode" OFF)

# Default NEVTS value (can be overridden)
set(SOFIE_GNN_NEVTS 10 CACHE STRING "Default number of events")

# ----------------------------------------
# Find BLAS
# ----------------------------------------
find_package(BLAS REQUIRED)
if (BLAS_FOUND)
    message(STATUS "Found BLAS (libraries: ${BLAS_LIBRARIES})")
endif()

# ----------------------------------------
# Interface library for headers
# ----------------------------------------
add_library(sofie_gnn STATIC utils/SOFIE_common.cxx)
add_library(sofie_gnn::sofie_gnn ALIAS sofie_gnn)

target_include_directories(sofie_gnn PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/utils>
    $<INSTALL_INTERFACE:include>
)
set_target_properties(sofie_gnn PROPERTIES POSITION_INDEPENDENT_CODE ON)

# Require C++20 via the interface library
target_compile_features(sofie_gnn PUBLIC cxx_std_20)

target_link_libraries(sofie_gnn PUBLIC ${BLAS_LIBRARIES})


# ----------------------------------------
# Optimization flags
# ----------------------------------------
if (NOT SOFIE_GNN_DEBUG)
    if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(sofie_gnn PUBLIC 
            -O3
            -ffast-math
            -funroll-loops
            -fomit-frame-pointer
            -march=native
            -mtune=native
        )
    elseif (CMAKE_CXX_COMPILER_ID MATCHES "Intel")
        target_compile_options(sofie_gnn PUBLIC
            -O3
            -fast
        )
    endif()
else()
    target_compile_options(sofie_gnn PUBLIC 
        -O0
        -g
    )
endif()


# ----------------------------------------
# Executable
# ----------------------------------------
add_executable(gnn_test
    run_inference_tracking.cxx
)

# ----------------------------------------
# Link to interface library
# ----------------------------------------
target_link_libraries(gnn_test PRIVATE sofie_gnn)

# ----------------------------------------
# Compile definitions (macros)
# ----------------------------------------
target_compile_definitions(gnn_test PRIVATE
    NEVTS=${SOFIE_GNN_NEVTS}
)

if (SOFIE_GNN_USE_LARGE)
    target_compile_definitions(gnn_test PRIVATE USE_LARGE)
endif()

if (SOFIE_GNN_DEBUG)
    target_compile_definitions(gnn_test PRIVATE DO_DEBUG)
endif()


# ----------------------------------------
# Model data file selection & copy
# ----------------------------------------
if (SOFIE_GNN_USE_LARGE)
    set(GNN_MODEL_FILE gnn_large_dynamic.dat)
else()
    set(GNN_MODEL_FILE gnn_small_dynamic.dat)
endif()

add_custom_command(
    TARGET gnn_test POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${CMAKE_CURRENT_SOURCE_DIR}/${GNN_MODEL_FILE}
            $<TARGET_FILE_DIR:gnn_test>/${GNN_MODEL_FILE}
    COMMENT "Copying ${GNN_MODEL_FILE} to build directory"
)

target_compile_definitions(gnn_test PRIVATE
    GNN_MODEL_FILE_NAME="${GNN_MODEL_FILE}"
)
