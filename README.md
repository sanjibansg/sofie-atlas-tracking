
# sofie-atlas-tracking

Repository containing implementations on inferring the ATLAS GNN Tracking model using SOFIE


## Requirements
1. CMake (v3.16)
2. C++20
3. BLAS

## Experimentation

```bash
git clone https://github.com/sanjibansg/sofie-atlas-tracking.git
cd sofie-atlas-tracking/
mkdir build && cd build
```
We have CMake options to configure the implementation to test. The default option builds the small GNN. The large GNN can be selected with the appropriate CMake flag.

```bash
cmake .. -DUSE_LARGE=ON  -DNEVTS=10
make
```
This shall build the `gnn_test` executible that can be ran with parameters for number of edges and hits. So, if we have num_edges = 200, and num_hits = 300, then the test runs with the following command.

```bash
./gnn_test 200 300
```
Default values of number of edges is 100000, and number of hits is 300000.  
  
To run in Debug mode, that switches off all the optimizations and allows debugging options, following change is needed in the CMake build command.
```bash
cmake .. -DUSE_LARGE=ON -DDO_DEBUG=ON  -DNEVTS=10
```
    