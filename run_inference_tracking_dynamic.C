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


#include "TRandom.h"
#include "TStopwatch.h"
#include "TH2.h"
#include "TCanvas.h"


// number of edges needs to be less or equal than number of hits
void test_model(int nevts = 1000, int ne = 0, int nh= 20) {
   TStopwatch tw;

   int nprint = nevts/10;

   std::cout << "creating session..." << std::endl;
   check_mem("initial");

#ifdef USE_LARGE
   TMVA_SOFIE_gnn_large::Session s("gnn_large_dynamic.dat",ne, nh);
#else
   TMVA_SOFIE_gnn_small::Session s("gnn_small_dynamic.dat",ne, nh);
#endif


   std::vector<float> x(nh*12);
   std::vector<int64_t> eidx(ne*2);
   std::vector<float> ea(ne*6);

   auto h2 = new TH2D("h2","Result",10,0,10,100,0,1);
   check_mem("before looping");
   tw.Start();

   gRandom->SetSeed(111);
   std::cout << "using random inputs" << std::endl;


   for (int i = 0; i < nevts; i++) {

      std::generate(x.begin(), x.end(), []{return gRandom->Gaus(0,3);});
      std::generate(eidx.begin(), eidx.end(), [&]{return gRandom->Integer(nh);});
      std::generate(ea.begin(), ea.end(), []{return gRandom->Gaus(0,5);});

      if (i % nprint == 0) {
         std::cout << "inputr for i = " << i << " : ";
         std::cout << x[0] << "   " << eidx[0] << "   " << ea[0] << "....." << std::endl;
      }

      auto result = s.infer(nh, x.data(), ne, eidx.data(), ea.data());

      if (i % nprint == 0) {
         std::cout << "output for i = " << i << " : ";
         std::cout << " result: "  << result[0] << std::endl;
         std::cout  << std::endl;
         check_mem("at current event");
      }

      float ires = 0.5;
      for (auto & r : result) {
         h2->Fill(ires,r);
         ires++;
      }
   }


   tw.Print();
   check_mem("memory at the end");
   auto c1 = new TCanvas();
   c1->Divide(2,5);
   for (int i = 0; i < 10; i++) {
      c1->cd(i+1);
      std::string pname = std::string("py_") + std::to_string(i); 
      auto p = h2->ProjectionY(pname.c_str(),i+1,i+1);
      p->Draw();
   }
   c1->SaveAs("model_tracking.pdf");
}

int main(int argc, char **argv) {
   
   int ne = 300000;
   int nh = 100000;
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

