#include <string>
#include <cstdio>
#include <fstream>
#include <sstream>

double check_mem(std::string s = "", bool verbose=true){

   double mem_resident = 0.0;
   double mem_virtual = 0.0;

   // Read from /proc/self/status on Linux
   std::ifstream status_file("/proc/self/status");
   if (status_file.is_open()) {
      std::string line;
      while (std::getline(status_file, line)) {
         if (line.find("VmRSS:") == 0) {
            std::istringstream iss(line);
            std::string label;
            long value;
            iss >> label >> value;
            mem_resident = value / 1024.0; // Convert from kB to MB
         }
         else if (line.find("VmSize:") == 0) {
            std::istringstream iss(line);
            std::string label;
            long value;
            iss >> label >> value;
            mem_virtual = value / 1024.0; // Convert from kB to MB
         }
      }
      status_file.close();
   }

   if (verbose) {
      printf("%s - Rmem = %8.3f MB, Vmem = %8.3f MB\n",
             s.c_str(),
             mem_resident,
             mem_virtual);
   }

   return mem_resident;
}