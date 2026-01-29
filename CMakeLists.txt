cmake_minimum_required(VERSION 3.16)
project(gnn_test LANGUAGES CXX)

# ----------------------------------------
# C++ standard
# ----------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ----------------------------------------
# Options
# ----------------------------------------
option(USE_LARGE "Use large GNN model" OFF)
option(DO_DEBUG "Enable debug mode" OFF)

# Default NEVTS value (can be overridden)
set(NEVTS 10 CACHE STRING "Default number of events")

# ----------------------------------------
# Find ROOT
# ----------------------------------------
find_package(ROOT REQUIRED COMPONENTS TMVA)
include(${ROOT_USE_FILE})

# ----------------------------------------
# Find BLAS
# ----------------------------------------
find_package(BLAS)
if (BLAS_FOUND)
    message(STATUS "Found BLAS (libraries: ${BLAS_LIBRARIES})")
endif()

# ----------------------------------------
# Executable
# ----------------------------------------
add_executable(gnn_test
    run_inference_tracking_dynamic.C
)

# ----------------------------------------
# Include paths
# ----------------------------------------
target_include_directories(gnn_test PRIVATE
    ${ROOT_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# ----------------------------------------
# Compile definitions (macros)
# ----------------------------------------
target_compile_definitions(gnn_test PRIVATE
    NEVTS=${NEVTS}
)

if (USE_LARGE)
    target_compile_definitions(gnn_test PRIVATE USE_LARGE)
endif()

if (DO_DEBUG)
    target_compile_definitions(gnn_test PRIVATE DO_DEBUG)
endif()

# ----------------------------------------
# Optimization flags
# ----------------------------------------
if (NOT DO_DEBUG)
    if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(gnn_test PRIVATE
            -O3
            -ffast-math
            -funroll-loops
            -fomit-frame-pointer
            -march=native
            -mtune=native
        )
    elseif (CMAKE_CXX_COMPILER_ID MATCHES "Intel")
        target_compile_options(gnn_test PRIVATE
            -O3
            -fast
        )
    endif()
else()
    target_compile_options(gnn_test PRIVATE
        -O0
        -g
    )
endif()

# ----------------------------------------
# Link libraries
# ----------------------------------------
target_link_libraries(gnn_test PRIVATE
    ${ROOT_LIBRARIES}
    ROOTTMVASofie
    ${BLAS_LIBRARIES}
)

# ----------------------------------------
# Model data file selection & copy
# ----------------------------------------
if (USE_LARGE)
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
