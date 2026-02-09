#ifndef NEVTS
#define NEVTS 10
#endif

#include "check_mem.h"


#ifdef USE_LARGE
#include "gnn_large_dynamic.hxx"
#else
#include "gnn_small_dynamic.hxx"
#endif

#define RANDOM

#include <random>
#include <chrono>
#include <vector>
#include <algorithm>
#include <iostream>


// number of edges needs to be less or equal than number of hits
void test_model(int nevts = 1000, int ne = 0, int nh= 20) {
   auto start_time = std::chrono::high_resolution_clock::now();

   int nprint = nevts/10;

   std::cout << "creating session..." << std::endl;
   check_mem("initial");

#ifdef USE_LARGE
   TMVA_SOFIE_gnn_large::Session s("gnn_large_dynamic.dat",ne, nh);
#else
   TMVA_SOFIE_gnn::Session s("gnn_small_dynamic.dat",ne, nh);
#endif


   std::vector<float> x(nh*12);
   std::vector<int64_t> eidx(ne*2);
   std::vector<float> ea(ne*6);
   
   check_mem("before looping");

   // Random number generator setup
   std::mt19937 gen(111);
   std::normal_distribution<float> gauss_3(0.0, 3.0);
   std::normal_distribution<float> gauss_5(0.0, 5.0);
   std::uniform_int_distribution<int64_t> uniform_nh(0, nh-1);
   
   std::cout << "using random inputs" << std::endl;


   for (int i = 0; i < nevts; i++) {

      std::generate(x.begin(), x.end(), [&]{return gauss_3(gen);});
      std::generate(eidx.begin(), eidx.end(), [&]{return uniform_nh(gen);});
      std::generate(ea.begin(), ea.end(), [&]{return gauss_5(gen);});

      if (i % nprint == 0) {
         std::cout << "input for i = " << i << " : ";
         std::cout << x[0] << "   " << eidx[0] << "   " << ea[0] << "....." << std::endl;
      }

      auto result = s.infer(nh, x.data(), ne, eidx.data(), ea.data());

      if (i % nprint == 0) {
         std::cout << "output for i = " << i << " : ";
         std::cout << " result: "  << result[0] << std::endl;
         std::cout  << std::endl;
         check_mem("at current event");
      }
   }

   auto end_time = std::chrono::high_resolution_clock::now();
   auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
   std::cout << "\n\nElapsed time: " << duration.count() / 1000.0 << " seconds" << std::endl;
   
   check_mem("memory at the end");
}

int main(int argc, char **argv) {
   
   int ne = 100000;
   int nh = 300000;
   int nevts = NEVTS;
   if (argc > 2) {
      ne = std::atoi(argv[1]);
      nh = std::atoi(argv[2]);
   }
   if (argc > 3) 
      nevts = std::atoi(argv[3]);
   
   std::cout << "testing model with nedges: " << ne << " nhits:  " << nh << std::endl;
      test_model(nevts, ne, nh);
}