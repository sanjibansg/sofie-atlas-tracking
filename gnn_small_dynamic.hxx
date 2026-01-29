//Code generated automatically by TMVA for Inference of Model file [gnn.onnx] at [Thu Jan 29 14:39:29 2026] 

#ifndef ROOT_TMVA_SOFIE_GNN
#define ROOT_TMVA_SOFIE_GNN

#include <algorithm>
#include <cmath>
#include <vector>
#include "TMVA/SOFIE_common.hxx"
#include <fstream>

namespace TMVA_SOFIE_gnn{
namespace BLAS{
	extern "C" void saxpy_(const int * n, const float * alpha, const float * x,
	                         const int * incx, float * y, const int * incy);
	extern "C" void sgemv_(const char * trans, const int * m, const int * n, const float * alpha, const float * A,
	                       const int * lda, const float * X, const int * incx, const float * beta, const float * Y, const int * incy);
	extern "C" void sgemm_(const char * transa, const char * transb, const int * m, const int * n, const int * k,
	                       const float * alpha, const float * A, const int * lda, const float * B, const int * ldb,
	                       const float * beta, float * C, const int * ldc);
}//BLAS
struct Session {
// initialized (weights and constant) tensors
float tensor_edge_output_transformedge_output_transform1Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_network7edge_network71Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network6node_network61Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Mul_13_output_0[2] = { -1, -1};
int64_t tensor_Unsqueeze_55_output_0[1] = { 32};
int64_t tensor_Constant_84_output_0[1] = { 1};
int64_t tensor_Constant_83_output_0[1] = { 0};
int64_t tensor_Constant_82_output_0[1] = { 0};
float tensor_edge_network6edge_network64Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_edge_network6edge_network64Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_network6edge_network61Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network5node_network54Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network5node_network51Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network5node_network51Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Mul_11_output_0[2] = { -1, -1};
int64_t tensor_Unsqueeze_49_output_0[1] = { 32};
int64_t tensor_Unsqueeze_45_output_0[1] = { 32};
int64_t tensor_Mul_10_output_0[2] = { -1, -1};
float tensor_edge_network7edge_network74Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Constant_93_output_0[1] = { -1};
int64_t tensor_Constant_75_output_0[1] = { -1};
int64_t tensor_Unsqueeze_43_output_0[1] = { 32};
int64_t tensor_Gather_31_output_0[1] = { 32};
int64_t tensor_Constant_71_output_0[1] = { 1};
int64_t tensor_Constant_69_output_0[1] = { 0};
float tensor_edge_network5edge_network54Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network4node_network44Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network4node_network41Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network4node_network41Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Constant_68_output_0[2] = { 0, 0};
int64_t tensor_Mul_9_output_0[2] = { -1, -1};
int64_t tensor_Shape_33_output_0[1] = { 2};
int64_t tensor_Constant_89_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_41_output_0[1] = { 32};
int64_t tensor_Constant_63_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_39_output_0[1] = { 32};
int64_t tensor_Unsqueeze_37_output_0[1] = { 32};
int64_t tensor_Constant_62_output_0[1] = { -1};
int64_t tensor_Shape_31_output_0[1] = { 2};
int64_t tensor_Unsqueeze_35_output_0[1] = { 32};
int64_t tensor_Gather_26_output_0[1] = { 32};
int64_t tensor_Constant_58_output_0[1] = { 1};
int64_t tensor_Constant_56_output_0[1] = { 0};
float tensor_edge_network4edge_network44Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_network4edge_network41Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network3node_network34Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network3node_network34Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Constant_55_output_0[2] = { 0, 0};
float tensor_edge_network5edge_network51Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Unsqueeze_33_output_0[1] = { 32};
int64_t tensor_Constant_50_output_0[2] = { 0, 0};
float tensor_node_network5node_network54Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Unsqueeze_31_output_0[1] = { 32};
float tensor_edge_network7edge_network74Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_encoderedge_encoder4Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_edge_encoderedge_encoder1Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Shape_5_output_0[1] = { 2};
float tensor_node_encodernode_encoder4Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network6node_network61Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_encodernode_encoder1Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Unsqueeze_53_output_0[1] = { 32};
std::vector<float> fTensor_node_network36weight = std::vector<float>(1024);
float * tensor_node_network36weight = fTensor_node_network36weight.data();
int64_t tensor_Constant_output_0[1] = { 0};
int64_t tensor_Gather_6_output_0[1] = { 32};
std::vector<float> fTensor_edge_decoder0bias = std::vector<float>(32);
float * tensor_edge_decoder0bias = fTensor_edge_decoder0bias.data();
float tensor_node_encodernode_encoder1Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_network56weight = std::vector<float>(1024);
float * tensor_edge_network56weight = fTensor_edge_network56weight.data();
std::vector<float> fTensor_edge_output_transform3weight = std::vector<float>(32);
float * tensor_edge_output_transform3weight = fTensor_edge_output_transform3weight.data();
int64_t tensor_Mul_7_output_0[2] = { -1, -1};
std::vector<float> fTensor_node_network56weight = std::vector<float>(1024);
float * tensor_node_network56weight = fTensor_node_network56weight.data();
std::vector<float> fTensor_node_network03bias = std::vector<float>(32);
float * tensor_node_network03bias = fTensor_node_network03bias.data();
std::vector<float> fTensor_node_network53bias = std::vector<float>(32);
float * tensor_node_network53bias = fTensor_node_network53bias.data();
std::vector<float> fTensor_node_network50bias = std::vector<float>(32);
float * tensor_node_network50bias = fTensor_node_network50bias.data();
float tensor_edge_network0edge_network04Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_network10weight = std::vector<float>(6144);
float * tensor_edge_network10weight = fTensor_edge_network10weight.data();
int64_t tensor_Shape_45_output_0[1] = { 2};
int64_t tensor_Constant_80_output_0[1] = { -1};
std::vector<float> fTensor_node_network46bias = std::vector<float>(32);
float * tensor_node_network46bias = fTensor_node_network46bias.data();
float tensor_node_network2node_network24Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_decoder0weight = std::vector<float>(1024);
float * tensor_edge_decoder0weight = fTensor_edge_decoder0weight.data();
int64_t tensor_Unsqueeze_47_output_0[1] = { 32};
std::vector<float> fTensor_node_network20bias = std::vector<float>(32);
float * tensor_node_network20bias = fTensor_node_network20bias.data();
float tensor_node_network6node_network64Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_node_network50weight = std::vector<float>(4096);
float * tensor_node_network50weight = fTensor_node_network50weight.data();
std::vector<float> fTensor_node_network33bias = std::vector<float>(32);
float * tensor_node_network33bias = fTensor_node_network33bias.data();
float tensor_edge_network0edge_network01Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_node_network43weight = std::vector<float>(1024);
float * tensor_node_network43weight = fTensor_node_network43weight.data();
std::vector<float> fTensor_edge_network63weight = std::vector<float>(1024);
float * tensor_edge_network63weight = fTensor_edge_network63weight.data();
float tensor_edge_network5edge_network51Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_node_network26bias = std::vector<float>(32);
float * tensor_node_network26bias = fTensor_node_network26bias.data();
std::vector<float> fTensor_node_network26weight = std::vector<float>(1024);
float * tensor_node_network26weight = fTensor_node_network26weight.data();
float tensor_edge_network3edge_network31Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network1node_network14Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Unsqueeze_6_output_0[1] = { 32};
std::vector<float> fTensor_node_network36bias = std::vector<float>(32);
float * tensor_node_network36bias = fTensor_node_network36bias.data();
std::vector<float> fTensor_node_network10bias = std::vector<float>(32);
float * tensor_node_network10bias = fTensor_node_network10bias.data();
float tensor_edge_network3edge_network31Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_node_network10weight = std::vector<float>(4096);
float * tensor_node_network10weight = fTensor_node_network10weight.data();
std::vector<float> fTensor_node_encoder6bias = std::vector<float>(32);
float * tensor_node_encoder6bias = fTensor_node_encoder6bias.data();
float tensor_edge_output_transformedge_output_transform1Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_edge_network0edge_network04Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Constant_19_output_0[1] = { 1};
std::vector<float> fTensor_node_network06weight = std::vector<float>(1024);
float * tensor_node_network06weight = fTensor_node_network06weight.data();
std::vector<float> fTensor_node_network66weight = std::vector<float>(1024);
float * tensor_node_network66weight = fTensor_node_network66weight.data();
std::vector<float> fTensor_node_network53weight = std::vector<float>(1024);
float * tensor_node_network53weight = fTensor_node_network53weight.data();
std::vector<float> fTensor_node_network03weight = std::vector<float>(1024);
float * tensor_node_network03weight = fTensor_node_network03weight.data();
std::vector<float> fTensor_node_network00bias = std::vector<float>(32);
float * tensor_node_network00bias = fTensor_node_network00bias.data();
float tensor_edge_network4edge_network41Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Constant_4_output_0[1] = { 0};
std::vector<float> fTensor_node_network63bias = std::vector<float>(32);
float * tensor_node_network63bias = fTensor_node_network63bias.data();
std::vector<float> fTensor_edge_network03weight = std::vector<float>(1024);
float * tensor_edge_network03weight = fTensor_edge_network03weight.data();
std::vector<float> fTensor_edge_network76bias = std::vector<float>(32);
float * tensor_edge_network76bias = fTensor_edge_network76bias.data();
std::vector<float> fTensor_node_network13bias = std::vector<float>(32);
float * tensor_node_network13bias = fTensor_node_network13bias.data();
std::vector<float> fTensor_node_network23weight = std::vector<float>(1024);
float * tensor_node_network23weight = fTensor_node_network23weight.data();
std::vector<float> fTensor_edge_network60bias = std::vector<float>(32);
float * tensor_edge_network60bias = fTensor_edge_network60bias.data();
float tensor_node_network0node_network04Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network3node_network31Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_edge_encoder6bias = std::vector<float>(32);
float * tensor_edge_encoder6bias = fTensor_edge_encoder6bias.data();
std::vector<float> fTensor_node_network40bias = std::vector<float>(32);
float * tensor_node_network40bias = fTensor_node_network40bias.data();
std::vector<float> fTensor_edge_network20weight = std::vector<float>(6144);
float * tensor_edge_network20weight = fTensor_edge_network20weight.data();
std::vector<float> fTensor_edge_network23weight = std::vector<float>(1024);
float * tensor_edge_network23weight = fTensor_edge_network23weight.data();
std::vector<float> fTensor_edge_network13weight = std::vector<float>(1024);
float * tensor_edge_network13weight = fTensor_edge_network13weight.data();
float tensor_edge_encoderedge_encoder1Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_edge_network30weight = std::vector<float>(6144);
float * tensor_edge_network30weight = fTensor_edge_network30weight.data();
std::vector<float> fTensor_node_network43bias = std::vector<float>(32);
float * tensor_node_network43bias = fTensor_node_network43bias.data();
std::vector<float> fTensor_edge_network33bias = std::vector<float>(32);
float * tensor_edge_network33bias = fTensor_edge_network33bias.data();
int64_t tensor_Constant_5_output_0[1] = { 1};
std::vector<float> fTensor_edge_network36bias = std::vector<float>(32);
float * tensor_edge_network36bias = fTensor_edge_network36bias.data();
int64_t tensor_Gather_36_output_0[1] = { 32};
std::vector<float> fTensor_edge_network06bias = std::vector<float>(32);
float * tensor_edge_network06bias = fTensor_edge_network06bias.data();
int64_t tensor_Constant_2_output_0[1] = { 0};
int64_t tensor_Unsqueeze_13_output_0[1] = { 32};
std::vector<float> fTensor_edge_network06weight = std::vector<float>(1024);
float * tensor_edge_network06weight = fTensor_edge_network06weight.data();
float tensor_edge_network0edge_network01Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_network00bias = std::vector<float>(32);
float * tensor_edge_network00bias = fTensor_edge_network00bias.data();
int64_t tensor_Shape_40_output_0[1] = { 2};
std::vector<float> fTensor_edge_network73bias = std::vector<float>(32);
float * tensor_edge_network73bias = fTensor_edge_network73bias.data();
std::vector<float> fTensor_edge_network66weight = std::vector<float>(1024);
float * tensor_edge_network66weight = fTensor_edge_network66weight.data();
std::vector<float> fTensor_node_network16weight = std::vector<float>(1024);
float * tensor_node_network16weight = fTensor_node_network16weight.data();
int64_t tensor_Constant_76_output_0[2] = { 0, 0};
float tensor_edge_network2edge_network24Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_node_network60weight = std::vector<float>(4096);
float * tensor_node_network60weight = fTensor_node_network60weight.data();
std::vector<float> fTensor_edge_encoder6weight = std::vector<float>(1024);
float * tensor_edge_encoder6weight = fTensor_edge_encoder6weight.data();
std::vector<float> fTensor_edge_network73weight = std::vector<float>(1024);
float * tensor_edge_network73weight = fTensor_edge_network73weight.data();
std::vector<float> fTensor_node_encoder3bias = std::vector<float>(32);
float * tensor_node_encoder3bias = fTensor_node_encoder3bias.data();
std::vector<float> fTensor_edge_output_transform0weight = std::vector<float>(1024);
float * tensor_edge_output_transform0weight = fTensor_edge_output_transform0weight.data();
std::vector<float> fTensor_edge_network60weight = std::vector<float>(6144);
float * tensor_edge_network60weight = fTensor_edge_network60weight.data();
int64_t tensor_Shape_19_output_0[1] = { 2};
std::vector<float> fTensor_node_encoder3weight = std::vector<float>(1024);
float * tensor_node_encoder3weight = fTensor_node_encoder3weight.data();
float tensor_node_network3node_network31Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_network20bias = std::vector<float>(32);
float * tensor_edge_network20bias = fTensor_edge_network20bias.data();
std::vector<float> fTensor_node_network63weight = std::vector<float>(1024);
float * tensor_node_network63weight = fTensor_node_network63weight.data();
int64_t tensor_Constant_57_output_0[1] = { 0};
std::vector<float> fTensor_node_network46weight = std::vector<float>(1024);
float * tensor_node_network46weight = fTensor_node_network46weight.data();
std::vector<float> fTensor_edge_network63bias = std::vector<float>(32);
float * tensor_edge_network63bias = fTensor_edge_network63bias.data();
int64_t tensor_Constant_1_output_0[1] = { 1};
std::vector<float> fTensor_node_network06bias = std::vector<float>(32);
float * tensor_node_network06bias = fTensor_node_network06bias.data();
int64_t tensor_Constant_43_output_0[1] = { 0};
std::vector<float> fTensor_edge_network00weight = std::vector<float>(6144);
float * tensor_edge_network00weight = fTensor_edge_network00weight.data();
std::vector<float> fTensor_edge_encoder0bias = std::vector<float>(32);
float * tensor_edge_encoder0bias = fTensor_edge_encoder0bias.data();
int64_t tensor_Unsqueeze_9_output_0[1] = { 32};
std::vector<float> fTensor_edge_network10bias = std::vector<float>(32);
float * tensor_edge_network10bias = fTensor_edge_network10bias.data();
std::vector<float> fTensor_edge_network13bias = std::vector<float>(32);
float * tensor_edge_network13bias = fTensor_edge_network13bias.data();
std::vector<float> fTensor_edge_encoder0weight = std::vector<float>(192);
float * tensor_edge_encoder0weight = fTensor_edge_encoder0weight.data();
float tensor_edge_network1edge_network11Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_edge_network53weight = std::vector<float>(1024);
float * tensor_edge_network53weight = fTensor_edge_network53weight.data();
std::vector<float> fTensor_edge_network16bias = std::vector<float>(32);
float * tensor_edge_network16bias = fTensor_edge_network16bias.data();
std::vector<float> fTensor_edge_encoder3weight = std::vector<float>(1024);
float * tensor_edge_encoder3weight = fTensor_edge_encoder3weight.data();
std::vector<float> fTensor_edge_network76weight = std::vector<float>(1024);
float * tensor_edge_network76weight = fTensor_edge_network76weight.data();
int64_t tensor_Shape_26_output_0[1] = { 2};
int64_t tensor_Mul_output_0[2] = { -1, -1};
int64_t tensor_Mul_2_output_0[2] = { -1, -1};
int64_t tensor_Mul_5_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network66bias = std::vector<float>(32);
float * tensor_edge_network66bias = fTensor_edge_network66bias.data();
std::vector<float> fTensor_node_encoder0bias = std::vector<float>(32);
float * tensor_node_encoder0bias = fTensor_node_encoder0bias.data();
std::vector<float> fTensor_node_encoder6weight = std::vector<float>(1024);
float * tensor_node_encoder6weight = fTensor_node_encoder6weight.data();
std::vector<float> fTensor_edge_network30bias = std::vector<float>(32);
float * tensor_edge_network30bias = fTensor_edge_network30bias.data();
int64_t tensor_Shape_38_output_0[1] = { 2};
int64_t tensor_Constant_67_output_0[1] = { -1};
float tensor_node_network0node_network01Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network4node_network44Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Constant_54_output_0[1] = { -1};
int64_t tensor_Mul_8_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network70weight = std::vector<float>(6144);
float * tensor_edge_network70weight = fTensor_edge_network70weight.data();
std::vector<float> fTensor_edge_encoder3bias = std::vector<float>(32);
float * tensor_edge_encoder3bias = fTensor_edge_encoder3bias.data();
std::vector<float> fTensor_edge_network40bias = std::vector<float>(32);
float * tensor_edge_network40bias = fTensor_edge_network40bias.data();
std::vector<float> fTensor_node_network23bias = std::vector<float>(32);
float * tensor_node_network23bias = fTensor_node_network23bias.data();
float tensor_edge_network2edge_network24Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_edge_network43weight = std::vector<float>(1024);
float * tensor_edge_network43weight = fTensor_edge_network43weight.data();
std::vector<float> fTensor_edge_output_transform3bias = std::vector<float>(1);
float * tensor_edge_output_transform3bias = fTensor_edge_output_transform3bias.data();
std::vector<float> fTensor_node_network00weight = std::vector<float>(4096);
float * tensor_node_network00weight = fTensor_node_network00weight.data();
std::vector<float> fTensor_edge_network53bias = std::vector<float>(32);
float * tensor_edge_network53bias = fTensor_edge_network53bias.data();
int64_t tensor_Constant_70_output_0[1] = { 0};
int64_t tensor_Unsqueeze_15_output_0[1] = { 32};
int64_t tensor_Shape_47_output_0[1] = { 2};
std::vector<float> fTensor_edge_network43bias = std::vector<float>(32);
float * tensor_edge_network43bias = fTensor_edge_network43bias.data();
std::vector<float> fTensor_node_network30bias = std::vector<float>(32);
float * tensor_node_network30bias = fTensor_node_network30bias.data();
std::vector<float> fTensor_node_network40weight = std::vector<float>(4096);
float * tensor_node_network40weight = fTensor_node_network40weight.data();
std::vector<float> fTensor_edge_network46bias = std::vector<float>(32);
float * tensor_edge_network46bias = fTensor_edge_network46bias.data();
int64_t tensor_Unsqueeze_29_output_0[1] = { 32};
std::vector<float> fTensor_node_network33weight = std::vector<float>(1024);
float * tensor_node_network33weight = fTensor_node_network33weight.data();
std::vector<float> fTensor_edge_network50bias = std::vector<float>(32);
float * tensor_edge_network50bias = fTensor_edge_network50bias.data();
std::vector<float> fTensor_edge_network03bias = std::vector<float>(32);
float * tensor_edge_network03bias = fTensor_edge_network03bias.data();
std::vector<float> fTensor_edge_network46weight = std::vector<float>(1024);
float * tensor_edge_network46weight = fTensor_edge_network46weight.data();
std::vector<float> fTensor_node_network56bias = std::vector<float>(32);
float * tensor_node_network56bias = fTensor_node_network56bias.data();
std::vector<float> fTensor_node_encoder0weight = std::vector<float>(384);
float * tensor_node_encoder0weight = fTensor_node_encoder0weight.data();
std::vector<float> fTensor_edge_network40weight = std::vector<float>(6144);
float * tensor_edge_network40weight = fTensor_edge_network40weight.data();
std::vector<float> fTensor_node_network16bias = std::vector<float>(32);
float * tensor_node_network16bias = fTensor_node_network16bias.data();
std::vector<float> fTensor_edge_network16weight = std::vector<float>(1024);
float * tensor_edge_network16weight = fTensor_edge_network16weight.data();
int64_t tensor_Mul_4_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network56bias = std::vector<float>(32);
float * tensor_edge_network56bias = fTensor_edge_network56bias.data();
std::vector<float> fTensor_edge_network23bias = std::vector<float>(32);
float * tensor_edge_network23bias = fTensor_edge_network23bias.data();
std::vector<float> fTensor_edge_network33weight = std::vector<float>(1024);
float * tensor_edge_network33weight = fTensor_edge_network33weight.data();
float tensor_edge_network1edge_network11Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Mul_6_output_0[2] = { -1, -1};
int64_t tensor_Shape_3_output_0[1] = { 2};
int64_t tensor_Constant_9_output_0[1] = { -1};
int64_t tensor_Constant_42_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_4_output_0[1] = { 32};
int64_t tensor_Unsqueeze_17_output_0[1] = { 32};
std::vector<float> fTensor_edge_network26weight = std::vector<float>(1024);
float * tensor_edge_network26weight = fTensor_edge_network26weight.data();
int64_t tensor_Constant_10_output_0[2] = { 0, 0};
float tensor_node_encodernode_encoder4Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Constant_15_output_0[1] = { -1};
int64_t tensor_Constant_36_output_0[1] = { -1};
float tensor_edge_encoderedge_encoder4Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Constant_18_output_0[1] = { 0};
int64_t tensor_Gather_21_output_0[1] = { 32};
int64_t tensor_Mul_1_output_0[2] = { -1, -1};
float tensor_edge_network4edge_network44Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Constant_16_output_0[2] = { 0, 0};
std::vector<float> fTensor_node_network66bias = std::vector<float>(32);
float * tensor_node_network66bias = fTensor_node_network66bias.data();
int64_t tensor_Constant_24_output_0[2] = { 0, 0};
float tensor_node_network0node_network01Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network0node_network04Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_network1edge_network14Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_output_transform0bias = std::vector<float>(32);
float * tensor_edge_output_transform0bias = fTensor_edge_output_transform0bias.data();
int64_t tensor_Gather_11_output_0[1] = { 32};
int64_t tensor_Unsqueeze_11_output_0[1] = { 32};
std::vector<float> fTensor_edge_network26bias = std::vector<float>(32);
float * tensor_edge_network26bias = fTensor_edge_network26bias.data();
int64_t tensor_Shape_10_output_0[1] = { 2};
int64_t tensor_Constant_23_output_0[1] = { -1};
std::vector<float> fTensor_edge_network36weight = std::vector<float>(1024);
float * tensor_edge_network36weight = fTensor_edge_network36weight.data();
float tensor_node_network2node_network21Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Constant_17_output_0[1] = { 0};
int64_t tensor_Unsqueeze_27_output_0[1] = { 32};
std::vector<float> fTensor_node_network30weight = std::vector<float>(4096);
float * tensor_node_network30weight = fTensor_node_network30weight.data();
int64_t tensor_Mul_3_output_0[2] = { -1, -1};
int64_t tensor_Unsqueeze_21_output_0[1] = { 32};
int64_t tensor_Constant_94_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_51_output_0[1] = { 32};
int64_t tensor_Shape_12_output_0[1] = { 2};
int64_t tensor_Unsqueeze_57_output_0[1] = { 32};
int64_t tensor_Constant_28_output_0[1] = { -1};
float tensor_node_network6node_network64Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_edge_network6edge_network61Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_node_network60bias = std::vector<float>(32);
float * tensor_node_network60bias = fTensor_node_network60bias.data();
int64_t tensor_Constant_29_output_0[2] = { 0, 0};
float tensor_node_network1node_network11Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
float tensor_node_network1node_network14Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Mul_12_output_0[2] = { -1, -1};
float tensor_edge_network2edge_network21Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_network2edge_network21Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_node_network20weight = std::vector<float>(4096);
float * tensor_node_network20weight = fTensor_node_network20weight.data();
int64_t tensor_Unsqueeze_2_output_0[1] = { 32};
int64_t tensor_Constant_30_output_0[1] = { 0};
int64_t tensor_Constant_88_output_0[1] = { -1};
float tensor_node_network1node_network11Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Constant_31_output_0[1] = { 0};
int64_t tensor_Constant_32_output_0[1] = { 1};
int64_t tensor_Gather_16_output_0[1] = { 32};
int64_t tensor_Unsqueeze_19_output_0[1] = { 32};
int64_t tensor_Shape_17_output_0[1] = { 2};
float tensor_edge_network5edge_network54Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int64_t tensor_Unsqueeze_23_output_0[1] = { 32};
float tensor_edge_network7edge_network71Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_node_network13weight = std::vector<float>(1024);
float * tensor_node_network13weight = fTensor_node_network13weight.data();
int64_t tensor_Constant_37_output_0[2] = { 0, 0};
int64_t tensor_Constant_81_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_25_output_0[1] = { 32};
float tensor_edge_network1edge_network14Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int64_t tensor_Constant_41_output_0[1] = { -1};
float tensor_node_network2node_network21Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_node_network2node_network24Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
std::vector<float> fTensor_edge_network50weight = std::vector<float>(6144);
float * tensor_edge_network50weight = fTensor_edge_network50weight.data();
float tensor_edge_network3edge_network34Constant_output_0[32] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
float tensor_edge_network3edge_network34Constant_1_output_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
std::vector<float> fTensor_edge_network70bias = std::vector<float>(32);
float * tensor_edge_network70bias = fTensor_edge_network70bias.data();
int64_t tensor_Constant_44_output_0[1] = { 0};
int64_t tensor_Constant_45_output_0[1] = { 1};
int64_t tensor_Shape_24_output_0[1] = { 2};
int64_t tensor_Constant_49_output_0[1] = { -1};

//--- Allocating session memory pool to be used for allocating intermediate tensors
std::vector<char> fIntermediateMemoryPool = std::vector<char>(480);


// --- Positioning intermediate tensor memory --
 // Allocating memory for intermediate tensor Shape_output_0 with size 16 bytes
int64_t* tensor_Shape_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Gather_4_output_0 with size 8 bytes
int64_t* tensor_Gather_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 16);

 // Allocating memory for intermediate tensor Shape_1_output_0 with size 16 bytes
int64_t* tensor_Shape_1_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Gather_5_output_0 with size 8 bytes
int64_t* tensor_Gather_5_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_2_output_0 with size 16 bytes
int64_t* tensor_Shape_2_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Unsqueeze_1_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_1_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Concat_2_output_0 with size 16 bytes
int64_t* tensor_Concat_2_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 32);

 // Allocating memory for intermediate tensor Reshape_output_0 with size 16 bytes
int64_t* tensor_Reshape_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Unsqueeze_3_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_3_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Concat_3_output_0 with size 16 bytes
int64_t* tensor_Concat_3_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 32);

 // Allocating memory for intermediate tensor Unsqueeze_5_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_5_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Concat_4_output_0 with size 16 bytes
int64_t* tensor_Concat_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 48);

 // Allocating memory for intermediate tensor Shape_4_output_0 with size 16 bytes
int64_t* tensor_Shape_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Unsqueeze_8_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_8_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_5_output_0 with size 16 bytes
int64_t* tensor_Concat_5_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Reshape_1_output_0 with size 16 bytes
int64_t* tensor_Reshape_1_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 80);

 // Allocating memory for intermediate tensor Shape_6_output_0 with size 16 bytes
int64_t* tensor_Shape_6_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 80);

 // Allocating memory for intermediate tensor Shape_7_output_0 with size 16 bytes
int64_t* tensor_Shape_7_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Gather_9_output_0 with size 8 bytes
int64_t* tensor_Gather_9_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Shape_8_output_0 with size 16 bytes
int64_t* tensor_Shape_8_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Gather_10_output_0 with size 8 bytes
int64_t* tensor_Gather_10_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_9_output_0 with size 16 bytes
int64_t* tensor_Shape_9_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Unsqueeze_10_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_10_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 72);

 // Allocating memory for intermediate tensor Concat_9_output_0 with size 16 bytes
int64_t* tensor_Concat_9_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 96);

 // Allocating memory for intermediate tensor Reshape_2_output_0 with size 16 bytes
int64_t* tensor_Reshape_2_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Unsqueeze_12_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_12_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 72);

 // Allocating memory for intermediate tensor Concat_10_output_0 with size 16 bytes
int64_t* tensor_Concat_10_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 96);

 // Allocating memory for intermediate tensor Unsqueeze_14_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_14_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 72);

 // Allocating memory for intermediate tensor Concat_11_output_0 with size 16 bytes
int64_t* tensor_Concat_11_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 112);

 // Allocating memory for intermediate tensor Shape_11_output_0 with size 16 bytes
int64_t* tensor_Shape_11_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Unsqueeze_16_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_16_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_12_output_0 with size 16 bytes
int64_t* tensor_Concat_12_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Reshape_3_output_0 with size 16 bytes
int64_t* tensor_Reshape_3_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 144);

 // Allocating memory for intermediate tensor Shape_13_output_0 with size 16 bytes
int64_t* tensor_Shape_13_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 144);

 // Allocating memory for intermediate tensor Shape_14_output_0 with size 16 bytes
int64_t* tensor_Shape_14_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Gather_14_output_0 with size 8 bytes
int64_t* tensor_Gather_14_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Shape_15_output_0 with size 16 bytes
int64_t* tensor_Shape_15_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Gather_15_output_0 with size 8 bytes
int64_t* tensor_Gather_15_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_16_output_0 with size 16 bytes
int64_t* tensor_Shape_16_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Unsqueeze_18_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_18_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 136);

 // Allocating memory for intermediate tensor Concat_16_output_0 with size 16 bytes
int64_t* tensor_Concat_16_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 160);

 // Allocating memory for intermediate tensor Reshape_4_output_0 with size 16 bytes
int64_t* tensor_Reshape_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Unsqueeze_20_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_20_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 136);

 // Allocating memory for intermediate tensor Concat_17_output_0 with size 16 bytes
int64_t* tensor_Concat_17_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 160);

 // Allocating memory for intermediate tensor Unsqueeze_22_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_22_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 136);

 // Allocating memory for intermediate tensor Concat_18_output_0 with size 16 bytes
int64_t* tensor_Concat_18_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 176);

 // Allocating memory for intermediate tensor Shape_18_output_0 with size 16 bytes
int64_t* tensor_Shape_18_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Unsqueeze_24_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_24_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_19_output_0 with size 16 bytes
int64_t* tensor_Concat_19_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Reshape_5_output_0 with size 16 bytes
int64_t* tensor_Reshape_5_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 208);

 // Allocating memory for intermediate tensor Shape_20_output_0 with size 16 bytes
int64_t* tensor_Shape_20_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 208);

 // Allocating memory for intermediate tensor Shape_21_output_0 with size 16 bytes
int64_t* tensor_Shape_21_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Gather_19_output_0 with size 8 bytes
int64_t* tensor_Gather_19_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Shape_22_output_0 with size 16 bytes
int64_t* tensor_Shape_22_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Gather_20_output_0 with size 8 bytes
int64_t* tensor_Gather_20_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_23_output_0 with size 16 bytes
int64_t* tensor_Shape_23_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Unsqueeze_26_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_26_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 200);

 // Allocating memory for intermediate tensor Concat_23_output_0 with size 16 bytes
int64_t* tensor_Concat_23_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 224);

 // Allocating memory for intermediate tensor Reshape_6_output_0 with size 16 bytes
int64_t* tensor_Reshape_6_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Unsqueeze_28_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_28_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 200);

 // Allocating memory for intermediate tensor Concat_24_output_0 with size 16 bytes
int64_t* tensor_Concat_24_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 224);

 // Allocating memory for intermediate tensor Unsqueeze_30_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_30_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 200);

 // Allocating memory for intermediate tensor Concat_25_output_0 with size 16 bytes
int64_t* tensor_Concat_25_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 240);

 // Allocating memory for intermediate tensor Shape_25_output_0 with size 16 bytes
int64_t* tensor_Shape_25_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Unsqueeze_32_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_32_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_26_output_0 with size 16 bytes
int64_t* tensor_Concat_26_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Reshape_7_output_0 with size 16 bytes
int64_t* tensor_Reshape_7_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 272);

 // Allocating memory for intermediate tensor Shape_27_output_0 with size 16 bytes
int64_t* tensor_Shape_27_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 272);

 // Allocating memory for intermediate tensor Shape_28_output_0 with size 16 bytes
int64_t* tensor_Shape_28_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Gather_24_output_0 with size 8 bytes
int64_t* tensor_Gather_24_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Shape_29_output_0 with size 16 bytes
int64_t* tensor_Shape_29_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Gather_25_output_0 with size 8 bytes
int64_t* tensor_Gather_25_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_30_output_0 with size 16 bytes
int64_t* tensor_Shape_30_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Unsqueeze_34_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_34_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 264);

 // Allocating memory for intermediate tensor Concat_30_output_0 with size 16 bytes
int64_t* tensor_Concat_30_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 288);

 // Allocating memory for intermediate tensor Reshape_8_output_0 with size 16 bytes
int64_t* tensor_Reshape_8_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Unsqueeze_36_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_36_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 264);

 // Allocating memory for intermediate tensor Concat_31_output_0 with size 16 bytes
int64_t* tensor_Concat_31_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 288);

 // Allocating memory for intermediate tensor Unsqueeze_38_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_38_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 264);

 // Allocating memory for intermediate tensor Concat_32_output_0 with size 16 bytes
int64_t* tensor_Concat_32_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 304);

 // Allocating memory for intermediate tensor Shape_32_output_0 with size 16 bytes
int64_t* tensor_Shape_32_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Unsqueeze_40_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_40_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_33_output_0 with size 16 bytes
int64_t* tensor_Concat_33_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Reshape_9_output_0 with size 16 bytes
int64_t* tensor_Reshape_9_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 336);

 // Allocating memory for intermediate tensor Shape_34_output_0 with size 16 bytes
int64_t* tensor_Shape_34_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 336);

 // Allocating memory for intermediate tensor Shape_35_output_0 with size 16 bytes
int64_t* tensor_Shape_35_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Gather_29_output_0 with size 8 bytes
int64_t* tensor_Gather_29_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Shape_36_output_0 with size 16 bytes
int64_t* tensor_Shape_36_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Gather_30_output_0 with size 8 bytes
int64_t* tensor_Gather_30_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_37_output_0 with size 16 bytes
int64_t* tensor_Shape_37_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Unsqueeze_42_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_42_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 328);

 // Allocating memory for intermediate tensor Concat_37_output_0 with size 16 bytes
int64_t* tensor_Concat_37_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 352);

 // Allocating memory for intermediate tensor Reshape_10_output_0 with size 16 bytes
int64_t* tensor_Reshape_10_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Unsqueeze_44_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_44_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 328);

 // Allocating memory for intermediate tensor Concat_38_output_0 with size 16 bytes
int64_t* tensor_Concat_38_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 352);

 // Allocating memory for intermediate tensor Unsqueeze_46_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_46_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 328);

 // Allocating memory for intermediate tensor Concat_39_output_0 with size 16 bytes
int64_t* tensor_Concat_39_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 368);

 // Allocating memory for intermediate tensor Shape_39_output_0 with size 16 bytes
int64_t* tensor_Shape_39_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Unsqueeze_48_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_48_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_40_output_0 with size 16 bytes
int64_t* tensor_Concat_40_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Reshape_11_output_0 with size 16 bytes
int64_t* tensor_Reshape_11_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 400);

 // Allocating memory for intermediate tensor Shape_41_output_0 with size 16 bytes
int64_t* tensor_Shape_41_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 400);

 // Allocating memory for intermediate tensor Shape_42_output_0 with size 16 bytes
int64_t* tensor_Shape_42_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Gather_34_output_0 with size 8 bytes
int64_t* tensor_Gather_34_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Shape_43_output_0 with size 16 bytes
int64_t* tensor_Shape_43_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Gather_35_output_0 with size 8 bytes
int64_t* tensor_Gather_35_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 24);

 // Allocating memory for intermediate tensor Shape_44_output_0 with size 16 bytes
int64_t* tensor_Shape_44_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Unsqueeze_50_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_50_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 392);

 // Allocating memory for intermediate tensor Concat_44_output_0 with size 16 bytes
int64_t* tensor_Concat_44_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 416);

 // Allocating memory for intermediate tensor Reshape_12_output_0 with size 16 bytes
int64_t* tensor_Reshape_12_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Unsqueeze_52_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_52_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 392);

 // Allocating memory for intermediate tensor Concat_45_output_0 with size 16 bytes
int64_t* tensor_Concat_45_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 416);

 // Allocating memory for intermediate tensor Unsqueeze_54_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_54_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 392);

 // Allocating memory for intermediate tensor Concat_46_output_0 with size 16 bytes
int64_t* tensor_Concat_46_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 432);

 // Allocating memory for intermediate tensor Shape_46_output_0 with size 16 bytes
int64_t* tensor_Shape_46_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Unsqueeze_56_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_56_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_47_output_0 with size 16 bytes
int64_t* tensor_Concat_47_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 448);

 // Allocating memory for intermediate tensor Reshape_13_output_0 with size 16 bytes
int64_t* tensor_Reshape_13_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 464);

 // Allocating memory for intermediate tensor Shape_48_output_0 with size 16 bytes
int64_t* tensor_Shape_48_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 464);
//--- declare the dynamic tensors
float * tensor_output = nullptr;
float * tensor_edge_output_transformedge_output_transform0Gemm_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder1Relu_output_0 = nullptr;
float * tensor_edge_network7edge_network74LayerNormalization_output_0 = nullptr;
float * tensor_edge_network7edge_network73Gemm_output_0 = nullptr;
float * tensor_edge_network7edge_network72Relu_output_0 = nullptr;
float * tensor_edge_network7edge_network70Gemm_output_0 = nullptr;
float * tensor_Gather_38_output_0 = nullptr;
float * tensor_Gather_37_output_0 = nullptr;
float * tensor_Concat_49_output_0 = nullptr;
float * tensor_node_network6node_network64LayerNormalization_output_0 = nullptr;
float * tensor_Slice_13_output_0 = nullptr;
int64_t * tensor_Expand_13_output_0 = nullptr;
float * tensor_ConstantOfShape_25_output_0 = nullptr;
int64_t * tensor_Expand_12_output_0 = nullptr;
float * tensor_edge_network6edge_network63Gemm_output_0 = nullptr;
float * tensor_node_network6node_network65Relu_output_0 = nullptr;
float * tensor_edge_network6edge_network62Relu_output_0 = nullptr;
float * tensor_Concat_43_output_0 = nullptr;
float * tensor_Gather_32_output_0 = nullptr;
float * tensor_node_network5node_network55Relu_output_0 = nullptr;
float * tensor_node_network5node_network54LayerNormalization_output_0 = nullptr;
float * tensor_node_network5node_network51LayerNormalization_output_0 = nullptr;
float * tensor_node_network5node_network50Gemm_output_0 = nullptr;
float * tensor_Concat_41_output_0 = nullptr;
float * tensor_edge_network6edge_network61LayerNormalization_output_0 = nullptr;
float * tensor_ScatterElements_11_output_0 = nullptr;
float * tensor_ConstantOfShape_21_output_0 = nullptr;
int64_t * tensor_Expand_10_output_0 = nullptr;
float * tensor_edge_network5edge_network55Relu_output_0 = nullptr;
float * tensor_edge_network5edge_network54LayerNormalization_output_0 = nullptr;
float * tensor_edge_network5edge_network53Gemm_output_0 = nullptr;
float * tensor_edge_network5edge_network51LayerNormalization_output_0 = nullptr;
float * tensor_edge_network5edge_network50Gemm_output_0 = nullptr;
float * tensor_Concat_36_output_0 = nullptr;
float * tensor_Gather_27_output_0 = nullptr;
float * tensor_Concat_35_output_0 = nullptr;
float * tensor_node_network4node_network47Relu_output_0 = nullptr;
float * tensor_ConstantOfShape_27_output_0 = nullptr;
float * tensor_node_network4node_network41LayerNormalization_output_0 = nullptr;
float * tensor_Concat_34_output_0 = nullptr;
float * tensor_edge_output_transformedge_output_transform3Gemm_output_0 = nullptr;
float * tensor_ScatterElements_9_output_0 = nullptr;
float * tensor_Slice_9_output_0 = nullptr;
float * tensor_ConstantOfShape_19_output_0 = nullptr;
int64_t * tensor_Expand_11_output_0 = nullptr;
float * tensor_Slice_8_output_0 = nullptr;
float * tensor_edge_network4edge_network45Relu_output_0 = nullptr;
float * tensor_edge_network4edge_network43Gemm_output_0 = nullptr;
float * tensor_edge_network4edge_network41LayerNormalization_output_0 = nullptr;
float * tensor_node_network4node_network42Relu_output_0 = nullptr;
float * tensor_edge_network4edge_network40Gemm_output_0 = nullptr;
float * tensor_edge_network5edge_network57Relu_output_0 = nullptr;
float * tensor_Concat_29_output_0 = nullptr;
float * tensor_node_network5node_network52Relu_output_0 = nullptr;
float * tensor_Gather_23_output_0 = nullptr;
float * tensor_node_network6node_network60Gemm_output_0 = nullptr;
float * tensor_Slice_2_output_0 = nullptr;
float * tensor_ConstantOfShape_5_output_0 = nullptr;
float * tensor_edge_network1edge_network12Relu_output_0 = nullptr;
int64_t * tensor_Expand_7_output_0 = nullptr;
float * tensor_Gather_8_output_0 = nullptr;
float * tensor_Concat_42_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder2Relu_output_0 = nullptr;
float * tensor_edge_network2edge_network20Gemm_output_0 = nullptr;
float * tensor_edge_network7edge_network75Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network17Relu_output_0 = nullptr;
float * tensor_edge_network5edge_network52Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network10Gemm_output_0 = nullptr;
float * tensor_node_network0node_network05Relu_output_0 = nullptr;
float * tensor_Gather_7_output_0 = nullptr;
float * tensor_ScatterElements_10_output_0 = nullptr;
float * tensor_ScatterElements_6_output_0 = nullptr;
float * tensor_Concat_7_output_0 = nullptr;
float * tensor_edge_network6edge_network67Relu_output_0 = nullptr;
float * tensor_ScatterElements_1_output_0 = nullptr;
float * tensor_ConstantOfShape_17_output_0 = nullptr;
float * tensor_ScatterElements_3_output_0 = nullptr;
float * tensor_edge_network6edge_network64LayerNormalization_output_0 = nullptr;
float * tensor_Slice_6_output_0 = nullptr;
float * tensor_node_network0node_network03Gemm_output_0 = nullptr;
float * tensor_node_network4node_network45Relu_output_0 = nullptr;
float * tensor_node_network0node_network01LayerNormalization_output_0 = nullptr;
float * tensor_edge_network7edge_network77Relu_output_0 = nullptr;
float * tensor_node_network0node_network00Gemm_output_0 = nullptr;
int64_t * tensor_Expand_2_output_0 = nullptr;
float * tensor_node_network4node_network43Gemm_output_0 = nullptr;
float * tensor_node_network2node_network24LayerNormalization_output_0 = nullptr;
float * tensor_edge_network1edge_network15Relu_output_0 = nullptr;
int64_t * tensor_Unsqueeze_7_output_0 = nullptr;
float * tensor_edge_network4edge_network44LayerNormalization_output_0 = nullptr;
float * tensor_edge_network1edge_network14LayerNormalization_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder3Gemm_output_0 = nullptr;
float * tensor_node_network0node_network04LayerNormalization_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder1LayerNormalization_output_0 = nullptr;
int64_t * tensor_Gather_output_0 = nullptr;
float * tensor_Concat_28_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder0Gemm_output_0 = nullptr;
float * tensor_ScatterElements_output_0 = nullptr;
float * tensor_node_encodernode_encoder2Relu_output_0 = nullptr;
float * tensor_node_encodernode_encoder1LayerNormalization_output_0 = nullptr;
float * tensor_edge_network0edge_network01LayerNormalization_output_0 = nullptr;
float * tensor_ConstantOfShape_13_output_0 = nullptr;
float * tensor_edge_network6edge_network60Gemm_output_0 = nullptr;
float * tensor_edge_network3edge_network35Relu_output_0 = nullptr;
float * tensor_node_network6node_network61LayerNormalization_output_0 = nullptr;
float * tensor_Concat_6_output_0 = nullptr;
float * tensor_Concat_1_output_0 = nullptr;
float * tensor_Gather_22_output_0 = nullptr;
int64_t * tensor_Gather_1_output_0 = nullptr;
int64_t * tensor_Expand_9_output_0 = nullptr;
float * tensor_node_encodernode_encoder4LayerNormalization_output_0 = nullptr;
float * tensor_node_encodernode_encoder3Gemm_output_0 = nullptr;
float * tensor_ScatterElements_12_output_0 = nullptr;
int64_t * tensor_Expand_6_output_0 = nullptr;
int64_t * tensor_Expand_1_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder7Relu_output_0 = nullptr;
float * tensor_Concat_14_output_0 = nullptr;
float * tensor_Concat_22_output_0 = nullptr;
float * tensor_ConstantOfShape_11_output_0 = nullptr;
float * tensor_Concat_output_0 = nullptr;
float * tensor_Gather_12_output_0 = nullptr;
float * tensor_edge_network0edge_network02Relu_output_0 = nullptr;
float * tensor_edge_network0edge_network00Gemm_output_0 = nullptr;
float * tensor_node_encodernode_encoder7Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network13Gemm_output_0 = nullptr;
float * tensor_ConstantOfShape_3_output_0 = nullptr;
float * tensor_edge_network0edge_network03Gemm_output_0 = nullptr;
float * tensor_edge_network0edge_network04LayerNormalization_output_0 = nullptr;
float * tensor_Slice_output_0 = nullptr;
float * tensor_Gather_3_output_0 = nullptr;
float * tensor_edge_network6edge_network65Relu_output_0 = nullptr;
int64_t * tensor_Expand_output_0 = nullptr;
float * tensor_edge_network0edge_network05Relu_output_0 = nullptr;
float * tensor_Squeeze_output_0 = nullptr;
float * tensor_ConstantOfShape_1_output_0 = nullptr;
float * tensor_node_network0node_network07Relu_output_0 = nullptr;
float * tensor_node_network3node_network31LayerNormalization_output_0 = nullptr;
float * tensor_node_network3node_network32Relu_output_0 = nullptr;
float * tensor_Slice_1_output_0 = nullptr;
int64_t * tensor_Unsqueeze_output_0 = nullptr;
float * tensor_ScatterElements_2_output_0 = nullptr;
int64_t * tensor_Expand_3_output_0 = nullptr;
float * tensor_ConstantOfShape_7_output_0 = nullptr;
float * tensor_node_encodernode_encoder0Gemm_output_0 = nullptr;
float * tensor_Slice_3_output_0 = nullptr;
float * tensor_node_network0node_network02Relu_output_0 = nullptr;
float * tensor_Concat_13_output_0 = nullptr;
float * tensor_Gather_33_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder5Relu_output_0 = nullptr;
float * tensor_node_network1node_network10Gemm_output_0 = nullptr;
float * tensor_edge_network4edge_network47Relu_output_0 = nullptr;
float * tensor_Slice_4_output_0 = nullptr;
int64_t * tensor_Expand_8_output_0 = nullptr;
float * tensor_Concat_21_output_0 = nullptr;
float * tensor_edge_output_transformedge_output_transform2Relu_output_0 = nullptr;
float * tensor_node_network6node_network62Relu_output_0 = nullptr;
float * tensor_edge_network0edge_network07Relu_output_0 = nullptr;
float * tensor_node_network1node_network11LayerNormalization_output_0 = nullptr;
float * tensor_node_network1node_network12Relu_output_0 = nullptr;
float * tensor_Concat_15_output_0 = nullptr;
float * tensor_Slice_10_output_0 = nullptr;
float * tensor_node_network2node_network22Relu_output_0 = nullptr;
float * tensor_node_network4node_network40Gemm_output_0 = nullptr;
float * tensor_node_network1node_network13Gemm_output_0 = nullptr;
float * tensor_Gather_17_output_0 = nullptr;
float * tensor_Concat_27_output_0 = nullptr;
float * tensor_node_network1node_network14LayerNormalization_output_0 = nullptr;
float * tensor_Gather_13_output_0 = nullptr;
float * tensor_edge_network7edge_network71LayerNormalization_output_0 = nullptr;
float * tensor_edge_network3edge_network32Relu_output_0 = nullptr;
float * tensor_node_network2node_network21LayerNormalization_output_0 = nullptr;
float * tensor_node_network2node_network25Relu_output_0 = nullptr;
float * tensor_Concat_48_output_0 = nullptr;
float * tensor_node_network1node_network17Relu_output_0 = nullptr;
float * tensor_Concat_8_output_0 = nullptr;
float * tensor_edge_network2edge_network24LayerNormalization_output_0 = nullptr;
float * tensor_Slice_11_output_0 = nullptr;
float * tensor_edge_network2edge_network21LayerNormalization_output_0 = nullptr;
float * tensor_ScatterElements_13_output_0 = nullptr;
float * tensor_node_encodernode_encoder5Relu_output_0 = nullptr;
float * tensor_edge_network2edge_network22Relu_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder4LayerNormalization_output_0 = nullptr;
float * tensor_node_network2node_network23Gemm_output_0 = nullptr;
float * tensor_ScatterElements_8_output_0 = nullptr;
float * tensor_edge_network2edge_network23Gemm_output_0 = nullptr;
float * tensor_Gather_28_output_0 = nullptr;
float * tensor_ScatterElements_7_output_0 = nullptr;
float * tensor_edge_network2edge_network25Relu_output_0 = nullptr;
float * tensor_Concat_50_output_0 = nullptr;
float * tensor_edge_network3edge_network37Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network11LayerNormalization_output_0 = nullptr;
float * tensor_Concat_20_output_0 = nullptr;
float * tensor_ConstantOfShape_15_output_0 = nullptr;
float * tensor_Slice_12_output_0 = nullptr;
float * tensor_edge_network3edge_network31LayerNormalization_output_0 = nullptr;
int64_t * tensor_Expand_4_output_0 = nullptr;
float * tensor_node_network2node_network20Gemm_output_0 = nullptr;
float * tensor_ConstantOfShape_9_output_0 = nullptr;
float * tensor_ScatterElements_4_output_0 = nullptr;
float * tensor_edge_network2edge_network27Relu_output_0 = nullptr;
float * tensor_node_network2node_network27Relu_output_0 = nullptr;
float * tensor_node_network6node_network67Relu_output_0 = nullptr;
float * tensor_Slice_5_output_0 = nullptr;
float * tensor_ScatterElements_5_output_0 = nullptr;
float * tensor_node_network4node_network44LayerNormalization_output_0 = nullptr;
int64_t * tensor_Expand_5_output_0 = nullptr;
float * tensor_Gather_18_output_0 = nullptr;
float * tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0 = nullptr;
float * tensor_edge_network3edge_network30Gemm_output_0 = nullptr;
float * tensor_edge_network3edge_network33Gemm_output_0 = nullptr;
float * tensor_node_network5node_network57Relu_output_0 = nullptr;
float * tensor_edge_network3edge_network34LayerNormalization_output_0 = nullptr;
float * tensor_Gather_2_output_0 = nullptr;
float * tensor_Slice_7_output_0 = nullptr;
float * tensor_edge_network4edge_network42Relu_output_0 = nullptr;
float * tensor_node_network3node_network30Gemm_output_0 = nullptr;
float * tensor_node_network1node_network15Relu_output_0 = nullptr;
float * tensor_node_network3node_network33Gemm_output_0 = nullptr;
float * tensor_node_network3node_network34LayerNormalization_output_0 = nullptr;
float * tensor_node_network5node_network53Gemm_output_0 = nullptr;
float * tensor_ConstantOfShape_23_output_0 = nullptr;
float * tensor_node_network3node_network35Relu_output_0 = nullptr;
float * tensor_node_network6node_network63Gemm_output_0 = nullptr;
float * tensor_node_network3node_network37Relu_output_0 = nullptr;
//--- dynamic tensors pool
std::vector<char> fDynamicMemoryPool;


size_t fNum_edges;
size_t fNum_spacepoints;


Session(std::string filename ="gnn.dat",
        size_t num_edges = 0,
        size_t num_spacepoints = 0) {


   fNum_edges = num_edges;
   fNum_spacepoints = num_spacepoints;

//--- reading weights from file
   std::ifstream f;
   f.open(filename);
   if (!f.is_open()) {
      throw std::runtime_error("tmva-sofie failed to open file " + filename + " for input weights");
   }
   using TMVA::Experimental::SOFIE::ReadTensorFromStream;
   ReadTensorFromStream(f, tensor_node_network36weight, "tensor_node_network36weight", 1024);
   ReadTensorFromStream(f, tensor_edge_decoder0bias, "tensor_edge_decoder0bias", 32);
   ReadTensorFromStream(f, tensor_edge_network56weight, "tensor_edge_network56weight", 1024);
   ReadTensorFromStream(f, tensor_edge_output_transform3weight, "tensor_edge_output_transform3weight", 32);
   ReadTensorFromStream(f, tensor_node_network56weight, "tensor_node_network56weight", 1024);
   ReadTensorFromStream(f, tensor_node_network03bias, "tensor_node_network03bias", 32);
   ReadTensorFromStream(f, tensor_node_network53bias, "tensor_node_network53bias", 32);
   ReadTensorFromStream(f, tensor_node_network50bias, "tensor_node_network50bias", 32);
   ReadTensorFromStream(f, tensor_edge_network10weight, "tensor_edge_network10weight", 6144);
   ReadTensorFromStream(f, tensor_node_network46bias, "tensor_node_network46bias", 32);
   ReadTensorFromStream(f, tensor_edge_decoder0weight, "tensor_edge_decoder0weight", 1024);
   ReadTensorFromStream(f, tensor_node_network20bias, "tensor_node_network20bias", 32);
   ReadTensorFromStream(f, tensor_node_network50weight, "tensor_node_network50weight", 4096);
   ReadTensorFromStream(f, tensor_node_network33bias, "tensor_node_network33bias", 32);
   ReadTensorFromStream(f, tensor_node_network43weight, "tensor_node_network43weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network63weight, "tensor_edge_network63weight", 1024);
   ReadTensorFromStream(f, tensor_node_network26bias, "tensor_node_network26bias", 32);
   ReadTensorFromStream(f, tensor_node_network26weight, "tensor_node_network26weight", 1024);
   ReadTensorFromStream(f, tensor_node_network36bias, "tensor_node_network36bias", 32);
   ReadTensorFromStream(f, tensor_node_network10bias, "tensor_node_network10bias", 32);
   ReadTensorFromStream(f, tensor_node_network10weight, "tensor_node_network10weight", 4096);
   ReadTensorFromStream(f, tensor_node_encoder6bias, "tensor_node_encoder6bias", 32);
   ReadTensorFromStream(f, tensor_node_network06weight, "tensor_node_network06weight", 1024);
   ReadTensorFromStream(f, tensor_node_network66weight, "tensor_node_network66weight", 1024);
   ReadTensorFromStream(f, tensor_node_network53weight, "tensor_node_network53weight", 1024);
   ReadTensorFromStream(f, tensor_node_network03weight, "tensor_node_network03weight", 1024);
   ReadTensorFromStream(f, tensor_node_network00bias, "tensor_node_network00bias", 32);
   ReadTensorFromStream(f, tensor_node_network63bias, "tensor_node_network63bias", 32);
   ReadTensorFromStream(f, tensor_edge_network03weight, "tensor_edge_network03weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network76bias, "tensor_edge_network76bias", 32);
   ReadTensorFromStream(f, tensor_node_network13bias, "tensor_node_network13bias", 32);
   ReadTensorFromStream(f, tensor_node_network23weight, "tensor_node_network23weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network60bias, "tensor_edge_network60bias", 32);
   ReadTensorFromStream(f, tensor_edge_encoder6bias, "tensor_edge_encoder6bias", 32);
   ReadTensorFromStream(f, tensor_node_network40bias, "tensor_node_network40bias", 32);
   ReadTensorFromStream(f, tensor_edge_network20weight, "tensor_edge_network20weight", 6144);
   ReadTensorFromStream(f, tensor_edge_network23weight, "tensor_edge_network23weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network13weight, "tensor_edge_network13weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network30weight, "tensor_edge_network30weight", 6144);
   ReadTensorFromStream(f, tensor_node_network43bias, "tensor_node_network43bias", 32);
   ReadTensorFromStream(f, tensor_edge_network33bias, "tensor_edge_network33bias", 32);
   ReadTensorFromStream(f, tensor_edge_network36bias, "tensor_edge_network36bias", 32);
   ReadTensorFromStream(f, tensor_edge_network06bias, "tensor_edge_network06bias", 32);
   ReadTensorFromStream(f, tensor_edge_network06weight, "tensor_edge_network06weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network00bias, "tensor_edge_network00bias", 32);
   ReadTensorFromStream(f, tensor_edge_network73bias, "tensor_edge_network73bias", 32);
   ReadTensorFromStream(f, tensor_edge_network66weight, "tensor_edge_network66weight", 1024);
   ReadTensorFromStream(f, tensor_node_network16weight, "tensor_node_network16weight", 1024);
   ReadTensorFromStream(f, tensor_node_network60weight, "tensor_node_network60weight", 4096);
   ReadTensorFromStream(f, tensor_edge_encoder6weight, "tensor_edge_encoder6weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network73weight, "tensor_edge_network73weight", 1024);
   ReadTensorFromStream(f, tensor_node_encoder3bias, "tensor_node_encoder3bias", 32);
   ReadTensorFromStream(f, tensor_edge_output_transform0weight, "tensor_edge_output_transform0weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network60weight, "tensor_edge_network60weight", 6144);
   ReadTensorFromStream(f, tensor_node_encoder3weight, "tensor_node_encoder3weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network20bias, "tensor_edge_network20bias", 32);
   ReadTensorFromStream(f, tensor_node_network63weight, "tensor_node_network63weight", 1024);
   ReadTensorFromStream(f, tensor_node_network46weight, "tensor_node_network46weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network63bias, "tensor_edge_network63bias", 32);
   ReadTensorFromStream(f, tensor_node_network06bias, "tensor_node_network06bias", 32);
   ReadTensorFromStream(f, tensor_edge_network00weight, "tensor_edge_network00weight", 6144);
   ReadTensorFromStream(f, tensor_edge_encoder0bias, "tensor_edge_encoder0bias", 32);
   ReadTensorFromStream(f, tensor_edge_network10bias, "tensor_edge_network10bias", 32);
   ReadTensorFromStream(f, tensor_edge_network13bias, "tensor_edge_network13bias", 32);
   ReadTensorFromStream(f, tensor_edge_encoder0weight, "tensor_edge_encoder0weight", 192);
   ReadTensorFromStream(f, tensor_edge_network53weight, "tensor_edge_network53weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network16bias, "tensor_edge_network16bias", 32);
   ReadTensorFromStream(f, tensor_edge_encoder3weight, "tensor_edge_encoder3weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network76weight, "tensor_edge_network76weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network66bias, "tensor_edge_network66bias", 32);
   ReadTensorFromStream(f, tensor_node_encoder0bias, "tensor_node_encoder0bias", 32);
   ReadTensorFromStream(f, tensor_node_encoder6weight, "tensor_node_encoder6weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network30bias, "tensor_edge_network30bias", 32);
   ReadTensorFromStream(f, tensor_edge_network70weight, "tensor_edge_network70weight", 6144);
   ReadTensorFromStream(f, tensor_edge_encoder3bias, "tensor_edge_encoder3bias", 32);
   ReadTensorFromStream(f, tensor_edge_network40bias, "tensor_edge_network40bias", 32);
   ReadTensorFromStream(f, tensor_node_network23bias, "tensor_node_network23bias", 32);
   ReadTensorFromStream(f, tensor_edge_network43weight, "tensor_edge_network43weight", 1024);
   ReadTensorFromStream(f, tensor_edge_output_transform3bias, "tensor_edge_output_transform3bias", 1);
   ReadTensorFromStream(f, tensor_node_network00weight, "tensor_node_network00weight", 4096);
   ReadTensorFromStream(f, tensor_edge_network53bias, "tensor_edge_network53bias", 32);
   ReadTensorFromStream(f, tensor_edge_network43bias, "tensor_edge_network43bias", 32);
   ReadTensorFromStream(f, tensor_node_network30bias, "tensor_node_network30bias", 32);
   ReadTensorFromStream(f, tensor_node_network40weight, "tensor_node_network40weight", 4096);
   ReadTensorFromStream(f, tensor_edge_network46bias, "tensor_edge_network46bias", 32);
   ReadTensorFromStream(f, tensor_node_network33weight, "tensor_node_network33weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network50bias, "tensor_edge_network50bias", 32);
   ReadTensorFromStream(f, tensor_edge_network03bias, "tensor_edge_network03bias", 32);
   ReadTensorFromStream(f, tensor_edge_network46weight, "tensor_edge_network46weight", 1024);
   ReadTensorFromStream(f, tensor_node_network56bias, "tensor_node_network56bias", 32);
   ReadTensorFromStream(f, tensor_node_encoder0weight, "tensor_node_encoder0weight", 384);
   ReadTensorFromStream(f, tensor_edge_network40weight, "tensor_edge_network40weight", 6144);
   ReadTensorFromStream(f, tensor_node_network16bias, "tensor_node_network16bias", 32);
   ReadTensorFromStream(f, tensor_edge_network16weight, "tensor_edge_network16weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network56bias, "tensor_edge_network56bias", 32);
   ReadTensorFromStream(f, tensor_edge_network23bias, "tensor_edge_network23bias", 32);
   ReadTensorFromStream(f, tensor_edge_network33weight, "tensor_edge_network33weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network26weight, "tensor_edge_network26weight", 1024);
   ReadTensorFromStream(f, tensor_node_network66bias, "tensor_node_network66bias", 32);
   ReadTensorFromStream(f, tensor_edge_output_transform0bias, "tensor_edge_output_transform0bias", 32);
   ReadTensorFromStream(f, tensor_edge_network26bias, "tensor_edge_network26bias", 32);
   ReadTensorFromStream(f, tensor_edge_network36weight, "tensor_edge_network36weight", 1024);
   ReadTensorFromStream(f, tensor_node_network30weight, "tensor_node_network30weight", 4096);
   ReadTensorFromStream(f, tensor_node_network60bias, "tensor_node_network60bias", 32);
   ReadTensorFromStream(f, tensor_node_network20weight, "tensor_node_network20weight", 4096);
   ReadTensorFromStream(f, tensor_node_network13weight, "tensor_node_network13weight", 1024);
   ReadTensorFromStream(f, tensor_edge_network50weight, "tensor_edge_network50weight", 6144);
   ReadTensorFromStream(f, tensor_edge_network70bias, "tensor_edge_network70bias", 32);
   f.close();

//  dynamic tensor memory management
   std::vector<TMVA::Experimental::SOFIE::TensorLifeInfo> dynamicTensorInfos;
   dynamicTensorInfos.reserve(225);
   dynamicTensorInfos.push_back( {1, 620, 8* (num_edges) }); // tensor_Gather_output_0
   dynamicTensorInfos.push_back( {3, 621, 8* (num_edges) }); // tensor_Gather_1_output_0
   dynamicTensorInfos.push_back( {4, 8, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder0Gemm_output_0
   dynamicTensorInfos.push_back( {7, 9, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {8, 10, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder2Relu_output_0
   dynamicTensorInfos.push_back( {9, 13, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder3Gemm_output_0
   dynamicTensorInfos.push_back( {12, 14, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder4LayerNormalization_output_0
   dynamicTensorInfos.push_back( {13, 15, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder5Relu_output_0
   dynamicTensorInfos.push_back( {14, 619, 4* (num_spacepoints * 32) }); // tensor_node_encodernode_encoder7Relu_output_0
   dynamicTensorInfos.push_back( {15, 19, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder0Gemm_output_0
   dynamicTensorInfos.push_back( {18, 20, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {19, 21, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder2Relu_output_0
   dynamicTensorInfos.push_back( {20, 24, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder3Gemm_output_0
   dynamicTensorInfos.push_back( {23, 25, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder4LayerNormalization_output_0
   dynamicTensorInfos.push_back( {24, 26, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder5Relu_output_0
   dynamicTensorInfos.push_back( {25, 622, 4* (num_edges * 32) }); // tensor_edge_encoderedge_encoder7Relu_output_0
   dynamicTensorInfos.push_back( {26, 103, 4* (num_spacepoints * 64) }); // tensor_Concat_output_0
   dynamicTensorInfos.push_back( {27, 30, 4* (num_edges * 64) }); // tensor_Gather_2_output_0
   dynamicTensorInfos.push_back( {28, 30, 4* (num_edges * 64) }); // tensor_Gather_3_output_0
   dynamicTensorInfos.push_back( {29, 31, 4* (num_edges * 192) }); // tensor_Concat_1_output_0
   dynamicTensorInfos.push_back( {30, 34, 4* (num_edges * 32) }); // tensor_edge_network0edge_network00Gemm_output_0
   dynamicTensorInfos.push_back( {33, 35, 4* (num_edges * 32) }); // tensor_edge_network0edge_network01LayerNormalization_output_0
   dynamicTensorInfos.push_back( {34, 36, 4* (num_edges * 32) }); // tensor_edge_network0edge_network02Relu_output_0
   dynamicTensorInfos.push_back( {35, 39, 4* (num_edges * 32) }); // tensor_edge_network0edge_network03Gemm_output_0
   dynamicTensorInfos.push_back( {38, 40, 4* (num_edges * 32) }); // tensor_edge_network0edge_network04LayerNormalization_output_0
   dynamicTensorInfos.push_back( {39, 41, 4* (num_edges * 32) }); // tensor_edge_network0edge_network05Relu_output_0
   dynamicTensorInfos.push_back( {40, 118, 4* (num_edges * 32) }); // tensor_edge_network0edge_network07Relu_output_0
   dynamicTensorInfos.push_back( {45, 572, 8* (num_edges) }); // tensor_Unsqueeze_output_0
   dynamicTensorInfos.push_back( {65, 81, 8* (num_edges * 32) }); // tensor_Expand_output_0
   dynamicTensorInfos.push_back( {76, 81, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_1_output_0
   dynamicTensorInfos.push_back( {80, 103, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_output_0
   dynamicTensorInfos.push_back( {82, 601, 8* (num_edges) }); // tensor_Unsqueeze_7_output_0
   dynamicTensorInfos.push_back( {96, 102, 8* (num_edges * 32) }); // tensor_Expand_1_output_0
   dynamicTensorInfos.push_back( {97, 102, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_3_output_0
   dynamicTensorInfos.push_back( {101, 103, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_1_output_0
   dynamicTensorInfos.push_back( {102, 104, 4* (num_spacepoints * 128) }); // tensor_Concat_6_output_0
   dynamicTensorInfos.push_back( {103, 107, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network00Gemm_output_0
   dynamicTensorInfos.push_back( {106, 108, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network01LayerNormalization_output_0
   dynamicTensorInfos.push_back( {107, 109, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network02Relu_output_0
   dynamicTensorInfos.push_back( {108, 112, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network03Gemm_output_0
   dynamicTensorInfos.push_back( {111, 113, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network04LayerNormalization_output_0
   dynamicTensorInfos.push_back( {112, 114, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network05Relu_output_0
   dynamicTensorInfos.push_back( {113, 115, 4* (num_spacepoints * 32) }); // tensor_node_network0node_network07Relu_output_0
   dynamicTensorInfos.push_back( {114, 187, 4* (num_spacepoints * 64) }); // tensor_Concat_7_output_0
   dynamicTensorInfos.push_back( {115, 118, 4* (num_edges * 64) }); // tensor_Gather_7_output_0
   dynamicTensorInfos.push_back( {116, 118, 4* (num_edges * 64) }); // tensor_Gather_8_output_0
   dynamicTensorInfos.push_back( {117, 119, 4* (num_edges * 192) }); // tensor_Concat_8_output_0
   dynamicTensorInfos.push_back( {118, 122, 4* (num_edges * 32) }); // tensor_edge_network1edge_network10Gemm_output_0
   dynamicTensorInfos.push_back( {121, 123, 4* (num_edges * 32) }); // tensor_edge_network1edge_network11LayerNormalization_output_0
   dynamicTensorInfos.push_back( {122, 124, 4* (num_edges * 32) }); // tensor_edge_network1edge_network12Relu_output_0
   dynamicTensorInfos.push_back( {123, 127, 4* (num_edges * 32) }); // tensor_edge_network1edge_network13Gemm_output_0
   dynamicTensorInfos.push_back( {126, 128, 4* (num_edges * 32) }); // tensor_edge_network1edge_network14LayerNormalization_output_0
   dynamicTensorInfos.push_back( {127, 129, 4* (num_edges * 32) }); // tensor_edge_network1edge_network15Relu_output_0
   dynamicTensorInfos.push_back( {128, 202, 4* (num_edges * 32) }); // tensor_edge_network1edge_network17Relu_output_0
   dynamicTensorInfos.push_back( {151, 167, 8* (num_edges * 32) }); // tensor_Expand_2_output_0
   dynamicTensorInfos.push_back( {162, 167, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_5_output_0
   dynamicTensorInfos.push_back( {166, 187, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_2_output_0
   dynamicTensorInfos.push_back( {180, 186, 8* (num_edges * 32) }); // tensor_Expand_3_output_0
   dynamicTensorInfos.push_back( {181, 186, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_7_output_0
   dynamicTensorInfos.push_back( {185, 187, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_3_output_0
   dynamicTensorInfos.push_back( {186, 188, 4* (num_spacepoints * 128) }); // tensor_Concat_13_output_0
   dynamicTensorInfos.push_back( {187, 191, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network10Gemm_output_0
   dynamicTensorInfos.push_back( {190, 192, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network11LayerNormalization_output_0
   dynamicTensorInfos.push_back( {191, 193, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network12Relu_output_0
   dynamicTensorInfos.push_back( {192, 196, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network13Gemm_output_0
   dynamicTensorInfos.push_back( {195, 197, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network14LayerNormalization_output_0
   dynamicTensorInfos.push_back( {196, 198, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network15Relu_output_0
   dynamicTensorInfos.push_back( {197, 199, 4* (num_spacepoints * 32) }); // tensor_node_network1node_network17Relu_output_0
   dynamicTensorInfos.push_back( {198, 271, 4* (num_spacepoints * 64) }); // tensor_Concat_14_output_0
   dynamicTensorInfos.push_back( {199, 202, 4* (num_edges * 64) }); // tensor_Gather_12_output_0
   dynamicTensorInfos.push_back( {200, 202, 4* (num_edges * 64) }); // tensor_Gather_13_output_0
   dynamicTensorInfos.push_back( {201, 203, 4* (num_edges * 192) }); // tensor_Concat_15_output_0
   dynamicTensorInfos.push_back( {202, 206, 4* (num_edges * 32) }); // tensor_edge_network2edge_network20Gemm_output_0
   dynamicTensorInfos.push_back( {205, 207, 4* (num_edges * 32) }); // tensor_edge_network2edge_network21LayerNormalization_output_0
   dynamicTensorInfos.push_back( {206, 208, 4* (num_edges * 32) }); // tensor_edge_network2edge_network22Relu_output_0
   dynamicTensorInfos.push_back( {207, 211, 4* (num_edges * 32) }); // tensor_edge_network2edge_network23Gemm_output_0
   dynamicTensorInfos.push_back( {210, 212, 4* (num_edges * 32) }); // tensor_edge_network2edge_network24LayerNormalization_output_0
   dynamicTensorInfos.push_back( {211, 213, 4* (num_edges * 32) }); // tensor_edge_network2edge_network25Relu_output_0
   dynamicTensorInfos.push_back( {212, 286, 4* (num_edges * 32) }); // tensor_edge_network2edge_network27Relu_output_0
   dynamicTensorInfos.push_back( {235, 251, 8* (num_edges * 32) }); // tensor_Expand_4_output_0
   dynamicTensorInfos.push_back( {246, 251, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_9_output_0
   dynamicTensorInfos.push_back( {250, 271, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_4_output_0
   dynamicTensorInfos.push_back( {264, 270, 8* (num_edges * 32) }); // tensor_Expand_5_output_0
   dynamicTensorInfos.push_back( {265, 270, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_11_output_0
   dynamicTensorInfos.push_back( {269, 271, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_5_output_0
   dynamicTensorInfos.push_back( {270, 272, 4* (num_spacepoints * 128) }); // tensor_Concat_20_output_0
   dynamicTensorInfos.push_back( {271, 275, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network20Gemm_output_0
   dynamicTensorInfos.push_back( {274, 276, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network21LayerNormalization_output_0
   dynamicTensorInfos.push_back( {275, 277, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network22Relu_output_0
   dynamicTensorInfos.push_back( {276, 280, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network23Gemm_output_0
   dynamicTensorInfos.push_back( {279, 281, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network24LayerNormalization_output_0
   dynamicTensorInfos.push_back( {280, 282, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network25Relu_output_0
   dynamicTensorInfos.push_back( {281, 283, 4* (num_spacepoints * 32) }); // tensor_node_network2node_network27Relu_output_0
   dynamicTensorInfos.push_back( {282, 355, 4* (num_spacepoints * 64) }); // tensor_Concat_21_output_0
   dynamicTensorInfos.push_back( {283, 286, 4* (num_edges * 64) }); // tensor_Gather_17_output_0
   dynamicTensorInfos.push_back( {284, 286, 4* (num_edges * 64) }); // tensor_Gather_18_output_0
   dynamicTensorInfos.push_back( {285, 287, 4* (num_edges * 192) }); // tensor_Concat_22_output_0
   dynamicTensorInfos.push_back( {286, 290, 4* (num_edges * 32) }); // tensor_edge_network3edge_network30Gemm_output_0
   dynamicTensorInfos.push_back( {289, 291, 4* (num_edges * 32) }); // tensor_edge_network3edge_network31LayerNormalization_output_0
   dynamicTensorInfos.push_back( {290, 292, 4* (num_edges * 32) }); // tensor_edge_network3edge_network32Relu_output_0
   dynamicTensorInfos.push_back( {291, 295, 4* (num_edges * 32) }); // tensor_edge_network3edge_network33Gemm_output_0
   dynamicTensorInfos.push_back( {294, 296, 4* (num_edges * 32) }); // tensor_edge_network3edge_network34LayerNormalization_output_0
   dynamicTensorInfos.push_back( {295, 297, 4* (num_edges * 32) }); // tensor_edge_network3edge_network35Relu_output_0
   dynamicTensorInfos.push_back( {296, 370, 4* (num_edges * 32) }); // tensor_edge_network3edge_network37Relu_output_0
   dynamicTensorInfos.push_back( {319, 335, 8* (num_edges * 32) }); // tensor_Expand_6_output_0
   dynamicTensorInfos.push_back( {330, 335, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_13_output_0
   dynamicTensorInfos.push_back( {334, 355, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_6_output_0
   dynamicTensorInfos.push_back( {348, 354, 8* (num_edges * 32) }); // tensor_Expand_7_output_0
   dynamicTensorInfos.push_back( {349, 354, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_15_output_0
   dynamicTensorInfos.push_back( {353, 355, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_7_output_0
   dynamicTensorInfos.push_back( {354, 356, 4* (num_spacepoints * 128) }); // tensor_Concat_27_output_0
   dynamicTensorInfos.push_back( {355, 359, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network30Gemm_output_0
   dynamicTensorInfos.push_back( {358, 360, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network31LayerNormalization_output_0
   dynamicTensorInfos.push_back( {359, 361, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network32Relu_output_0
   dynamicTensorInfos.push_back( {360, 364, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network33Gemm_output_0
   dynamicTensorInfos.push_back( {363, 365, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network34LayerNormalization_output_0
   dynamicTensorInfos.push_back( {364, 366, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network35Relu_output_0
   dynamicTensorInfos.push_back( {365, 367, 4* (num_spacepoints * 32) }); // tensor_node_network3node_network37Relu_output_0
   dynamicTensorInfos.push_back( {366, 439, 4* (num_spacepoints * 64) }); // tensor_Concat_28_output_0
   dynamicTensorInfos.push_back( {367, 370, 4* (num_edges * 64) }); // tensor_Gather_22_output_0
   dynamicTensorInfos.push_back( {368, 370, 4* (num_edges * 64) }); // tensor_Gather_23_output_0
   dynamicTensorInfos.push_back( {369, 371, 4* (num_edges * 192) }); // tensor_Concat_29_output_0
   dynamicTensorInfos.push_back( {370, 374, 4* (num_edges * 32) }); // tensor_edge_network4edge_network40Gemm_output_0
   dynamicTensorInfos.push_back( {373, 375, 4* (num_edges * 32) }); // tensor_edge_network4edge_network41LayerNormalization_output_0
   dynamicTensorInfos.push_back( {374, 376, 4* (num_edges * 32) }); // tensor_edge_network4edge_network42Relu_output_0
   dynamicTensorInfos.push_back( {375, 379, 4* (num_edges * 32) }); // tensor_edge_network4edge_network43Gemm_output_0
   dynamicTensorInfos.push_back( {378, 380, 4* (num_edges * 32) }); // tensor_edge_network4edge_network44LayerNormalization_output_0
   dynamicTensorInfos.push_back( {379, 381, 4* (num_edges * 32) }); // tensor_edge_network4edge_network45Relu_output_0
   dynamicTensorInfos.push_back( {380, 454, 4* (num_edges * 32) }); // tensor_edge_network4edge_network47Relu_output_0
   dynamicTensorInfos.push_back( {403, 419, 8* (num_edges * 32) }); // tensor_Expand_8_output_0
   dynamicTensorInfos.push_back( {414, 419, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_17_output_0
   dynamicTensorInfos.push_back( {418, 439, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_8_output_0
   dynamicTensorInfos.push_back( {432, 438, 8* (num_edges * 32) }); // tensor_Expand_9_output_0
   dynamicTensorInfos.push_back( {433, 438, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_19_output_0
   dynamicTensorInfos.push_back( {437, 439, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_9_output_0
   dynamicTensorInfos.push_back( {438, 440, 4* (num_spacepoints * 128) }); // tensor_Concat_34_output_0
   dynamicTensorInfos.push_back( {439, 443, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network40Gemm_output_0
   dynamicTensorInfos.push_back( {442, 444, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network41LayerNormalization_output_0
   dynamicTensorInfos.push_back( {443, 445, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network42Relu_output_0
   dynamicTensorInfos.push_back( {444, 448, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network43Gemm_output_0
   dynamicTensorInfos.push_back( {447, 449, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network44LayerNormalization_output_0
   dynamicTensorInfos.push_back( {448, 450, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network45Relu_output_0
   dynamicTensorInfos.push_back( {449, 451, 4* (num_spacepoints * 32) }); // tensor_node_network4node_network47Relu_output_0
   dynamicTensorInfos.push_back( {450, 523, 4* (num_spacepoints * 64) }); // tensor_Concat_35_output_0
   dynamicTensorInfos.push_back( {451, 454, 4* (num_edges * 64) }); // tensor_Gather_27_output_0
   dynamicTensorInfos.push_back( {452, 454, 4* (num_edges * 64) }); // tensor_Gather_28_output_0
   dynamicTensorInfos.push_back( {453, 455, 4* (num_edges * 192) }); // tensor_Concat_36_output_0
   dynamicTensorInfos.push_back( {454, 458, 4* (num_edges * 32) }); // tensor_edge_network5edge_network50Gemm_output_0
   dynamicTensorInfos.push_back( {457, 459, 4* (num_edges * 32) }); // tensor_edge_network5edge_network51LayerNormalization_output_0
   dynamicTensorInfos.push_back( {458, 460, 4* (num_edges * 32) }); // tensor_edge_network5edge_network52Relu_output_0
   dynamicTensorInfos.push_back( {459, 463, 4* (num_edges * 32) }); // tensor_edge_network5edge_network53Gemm_output_0
   dynamicTensorInfos.push_back( {462, 464, 4* (num_edges * 32) }); // tensor_edge_network5edge_network54LayerNormalization_output_0
   dynamicTensorInfos.push_back( {463, 465, 4* (num_edges * 32) }); // tensor_edge_network5edge_network55Relu_output_0
   dynamicTensorInfos.push_back( {464, 538, 4* (num_edges * 32) }); // tensor_edge_network5edge_network57Relu_output_0
   dynamicTensorInfos.push_back( {487, 503, 8* (num_edges * 32) }); // tensor_Expand_10_output_0
   dynamicTensorInfos.push_back( {498, 503, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_21_output_0
   dynamicTensorInfos.push_back( {502, 523, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_10_output_0
   dynamicTensorInfos.push_back( {516, 522, 8* (num_edges * 32) }); // tensor_Expand_11_output_0
   dynamicTensorInfos.push_back( {517, 522, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_23_output_0
   dynamicTensorInfos.push_back( {521, 523, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_11_output_0
   dynamicTensorInfos.push_back( {522, 524, 4* (num_spacepoints * 128) }); // tensor_Concat_41_output_0
   dynamicTensorInfos.push_back( {523, 527, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network50Gemm_output_0
   dynamicTensorInfos.push_back( {526, 528, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network51LayerNormalization_output_0
   dynamicTensorInfos.push_back( {527, 529, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network52Relu_output_0
   dynamicTensorInfos.push_back( {528, 532, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network53Gemm_output_0
   dynamicTensorInfos.push_back( {531, 533, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network54LayerNormalization_output_0
   dynamicTensorInfos.push_back( {532, 534, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network55Relu_output_0
   dynamicTensorInfos.push_back( {533, 535, 4* (num_spacepoints * 32) }); // tensor_node_network5node_network57Relu_output_0
   dynamicTensorInfos.push_back( {534, 607, 4* (num_spacepoints * 64) }); // tensor_Concat_42_output_0
   dynamicTensorInfos.push_back( {535, 538, 4* (num_edges * 64) }); // tensor_Gather_32_output_0
   dynamicTensorInfos.push_back( {536, 538, 4* (num_edges * 64) }); // tensor_Gather_33_output_0
   dynamicTensorInfos.push_back( {537, 539, 4* (num_edges * 192) }); // tensor_Concat_43_output_0
   dynamicTensorInfos.push_back( {538, 542, 4* (num_edges * 32) }); // tensor_edge_network6edge_network60Gemm_output_0
   dynamicTensorInfos.push_back( {541, 543, 4* (num_edges * 32) }); // tensor_edge_network6edge_network61LayerNormalization_output_0
   dynamicTensorInfos.push_back( {542, 544, 4* (num_edges * 32) }); // tensor_edge_network6edge_network62Relu_output_0
   dynamicTensorInfos.push_back( {543, 547, 4* (num_edges * 32) }); // tensor_edge_network6edge_network63Gemm_output_0
   dynamicTensorInfos.push_back( {546, 548, 4* (num_edges * 32) }); // tensor_edge_network6edge_network64LayerNormalization_output_0
   dynamicTensorInfos.push_back( {547, 549, 4* (num_edges * 32) }); // tensor_edge_network6edge_network65Relu_output_0
   dynamicTensorInfos.push_back( {548, 622, 4* (num_edges * 32) }); // tensor_edge_network6edge_network67Relu_output_0
   dynamicTensorInfos.push_back( {571, 587, 8* (num_edges * 32) }); // tensor_Expand_12_output_0
   dynamicTensorInfos.push_back( {582, 587, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_25_output_0
   dynamicTensorInfos.push_back( {586, 607, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_12_output_0
   dynamicTensorInfos.push_back( {600, 606, 8* (num_edges * 32) }); // tensor_Expand_13_output_0
   dynamicTensorInfos.push_back( {601, 606, 4* (num_spacepoints * 32) }); // tensor_ConstantOfShape_27_output_0
   dynamicTensorInfos.push_back( {605, 607, 4* (num_spacepoints * 32) }); // tensor_ScatterElements_13_output_0
   dynamicTensorInfos.push_back( {606, 608, 4* (num_spacepoints * 128) }); // tensor_Concat_48_output_0
   dynamicTensorInfos.push_back( {607, 611, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network60Gemm_output_0
   dynamicTensorInfos.push_back( {610, 612, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network61LayerNormalization_output_0
   dynamicTensorInfos.push_back( {611, 613, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network62Relu_output_0
   dynamicTensorInfos.push_back( {612, 616, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network63Gemm_output_0
   dynamicTensorInfos.push_back( {615, 617, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network64LayerNormalization_output_0
   dynamicTensorInfos.push_back( {616, 618, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network65Relu_output_0
   dynamicTensorInfos.push_back( {617, 619, 4* (num_spacepoints * 32) }); // tensor_node_network6node_network67Relu_output_0
   dynamicTensorInfos.push_back( {618, 621, 4* (num_spacepoints * 64) }); // tensor_Concat_49_output_0
   dynamicTensorInfos.push_back( {619, 622, 4* (num_edges * 64) }); // tensor_Gather_37_output_0
   dynamicTensorInfos.push_back( {620, 622, 4* (num_edges * 64) }); // tensor_Gather_38_output_0
   dynamicTensorInfos.push_back( {621, 623, 4* (num_edges * 192) }); // tensor_Concat_50_output_0
   dynamicTensorInfos.push_back( {622, 626, 4* (num_edges * 32) }); // tensor_edge_network7edge_network70Gemm_output_0
   dynamicTensorInfos.push_back( {625, 627, 4* (num_edges * 32) }); // tensor_edge_network7edge_network71LayerNormalization_output_0
   dynamicTensorInfos.push_back( {626, 628, 4* (num_edges * 32) }); // tensor_edge_network7edge_network72Relu_output_0
   dynamicTensorInfos.push_back( {627, 631, 4* (num_edges * 32) }); // tensor_edge_network7edge_network73Gemm_output_0
   dynamicTensorInfos.push_back( {630, 632, 4* (num_edges * 32) }); // tensor_edge_network7edge_network74LayerNormalization_output_0
   dynamicTensorInfos.push_back( {631, 633, 4* (num_edges * 32) }); // tensor_edge_network7edge_network75Relu_output_0
   dynamicTensorInfos.push_back( {632, 634, 4* (num_edges * 32) }); // tensor_edge_network7edge_network77Relu_output_0
   dynamicTensorInfos.push_back( {633, 635, 4* (num_edges * 32) }); // tensor_edge_decoderedge_decoder1Relu_output_0
   dynamicTensorInfos.push_back( {634, 638, 4* (num_edges * 32) }); // tensor_edge_output_transformedge_output_transform0Gemm_output_0
   dynamicTensorInfos.push_back( {637, 639, 4* (num_edges * 32) }); // tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {638, 640, 4* (num_edges * 32) }); // tensor_edge_output_transformedge_output_transform2Relu_output_0
   dynamicTensorInfos.push_back( {639, 642, 4* (num_edges) }); // tensor_edge_output_transformedge_output_transform3Gemm_output_0
   dynamicTensorInfos.push_back( {641, 643, 4* (num_edges) }); // tensor_Squeeze_output_0
   dynamicTensorInfos.push_back( {642, 643, 4* (num_edges) }); // tensor_output

   auto memory_result = OrganizeMemory(dynamicTensorInfos);

//  allocating now the memory
   fDynamicMemoryPool = std::vector<char>(memory_result.total_bytes);
   int idx = 0;
   tensor_Gather_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_1_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder0Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder1LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder2Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder3Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder4LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder5Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_encodernode_encoder7Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder0Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder1LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder2Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder3Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder4LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder5Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_encoderedge_encoder7Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_2_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_3_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_1_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network00Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network01LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network02Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network03Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network04LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network05Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network0edge_network07Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Unsqueeze_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_1_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Unsqueeze_7_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_1_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_3_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_1_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_6_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network00Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network01LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network02Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network03Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network04LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network05Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network07Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_7_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_7_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_8_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_8_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network10Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network11LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network12Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network13Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network14LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network15Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network1edge_network17Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_2_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_5_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_2_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_3_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_7_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_3_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_13_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network10Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network11LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network12Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network13Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network14LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network15Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network17Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_14_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_12_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_13_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_15_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network20Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network21LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network22Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network23Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network24LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network25Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network2edge_network27Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_4_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_9_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_4_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_5_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_11_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_5_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_20_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network20Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network21LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network22Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network23Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network24LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network25Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network27Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_21_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_17_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_18_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_22_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network30Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network31LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network32Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network33Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network34LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network35Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network3edge_network37Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_6_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_13_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_6_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_7_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_15_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_7_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_27_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network30Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network31LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network32Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network33Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network34LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network35Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network37Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_28_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_22_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_23_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_29_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network40Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network41LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network42Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network43Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network44LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network45Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network4edge_network47Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_8_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_17_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_8_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_9_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_19_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_9_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_34_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network40Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network41LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network42Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network43Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network44LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network45Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network47Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_35_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_27_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_28_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_36_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network50Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network51LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network52Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network53Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network54LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network55Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network5edge_network57Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_10_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_21_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_10_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_11_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_23_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_11_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_41_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network50Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network51LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network52Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network53Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network54LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network55Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network57Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_42_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_32_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_33_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_43_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network60Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network61LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network62Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network63Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network64LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network65Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network6edge_network67Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_12_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_25_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_12_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Expand_13_output_0 = reinterpret_cast<int64_t *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ConstantOfShape_27_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_ScatterElements_13_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_48_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network60Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network61LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network62Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network63Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network64LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network65Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network67Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_49_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_37_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_38_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_50_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network70Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network71LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network72Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network73Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network74LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network75Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network77Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder1Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_output_transformedge_output_transform0Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_output_transformedge_output_transform2Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_output_transformedge_output_transform3Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Squeeze_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_output = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
}

void doInfer(size_t num_spacepoints,float const* tensor_x,size_t num_edges,int64_t const* tensor_edge_index,float const* tensor_edge_attr,  std::vector<float> &output_tensor_output ){

// ---- Constant (no-op) 0 --> Constant_output_0 {  }
//--------- Gather op_1 --> Gather_output_0  { num_edges }
   for (size_t j_0 = 0; j_0 < num_edges; j_0++) {
      size_t y_index = j_0;
      size_t i_index = 0;
      size_t k = static_cast<size_t>(tensor_Constant_output_0[i_index]);
      size_t x_index = k * num_edges +  j_0;
      tensor_Gather_output_0[y_index] = tensor_edge_index[x_index];
   }
// ---- Constant (no-op) 2 --> Constant_1_output_0 {  }
//--------- Gather op_3 --> Gather_1_output_0  { num_edges }
   for (size_t j_0 = 0; j_0 < num_edges; j_0++) {
      size_t y_index = j_0;
      size_t i_index = 0;
      size_t k = static_cast<size_t>(tensor_Constant_1_output_0[i_index]);
      size_t x_index = k * num_edges +  j_0;
      tensor_Gather_1_output_0[y_index] = tensor_edge_index[x_index];
   }

//--------- Gemm op_4 { num_spacepoints , 12 } * { 32 , 12 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_encodernode_encoder0Gemm_output_0[y_index + k] = tensor_node_encoder0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_encodernode_encoder0Gemm_output_0, true, false, 32, num_spacepoints, 12, 1, tensor_node_encoder0weight, tensor_x, 1,nullptr);
// ---- Constant (no-op) 5 --> node_encodernode_encoder1Constant_output_0 {  }
// ---- Constant (no-op) 6 --> node_encodernode_encoder1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_7
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_encodernode_encoder0Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_encodernode_encoder0Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_encodernode_encoder1LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_encodernode_encoder1Constant_output_0[axis_1] * invStdDev * (tensor_node_encodernode_encoder0Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_encodernode_encoder1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_encodernode_encoder2Relu_output_0[id] = ((tensor_node_encodernode_encoder1LayerNormalization_output_0[id] > 0 )? tensor_node_encodernode_encoder1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_9 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_encodernode_encoder3Gemm_output_0[y_index + k] = tensor_node_encoder3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_encodernode_encoder3Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_encoder3weight, tensor_node_encodernode_encoder2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 10 --> node_encodernode_encoder4Constant_output_0 {  }
// ---- Constant (no-op) 11 --> node_encodernode_encoder4Constant_1_output_0 {  }
//---- Layer Normalization  operator op_12
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_encodernode_encoder3Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_encodernode_encoder3Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_encodernode_encoder4LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_encodernode_encoder4Constant_output_0[axis_1] * invStdDev * (tensor_node_encodernode_encoder3Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_encodernode_encoder4Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_encodernode_encoder5Relu_output_0[id] = ((tensor_node_encodernode_encoder4LayerNormalization_output_0[id] > 0 )? tensor_node_encodernode_encoder4LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_14 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_encodernode_encoder7Relu_output_0[y_index + k] = tensor_node_encoder6bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_encodernode_encoder7Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_encoder6weight, tensor_node_encodernode_encoder5Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_encodernode_encoder7Relu_output_0[id] = ((tensor_node_encodernode_encoder7Relu_output_0[id] > 0 )? tensor_node_encodernode_encoder7Relu_output_0[id] : 0);
   }

//--------- Gemm op_15 { num_edges , 6 } * { 32 , 6 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_encoderedge_encoder0Gemm_output_0[y_index + k] = tensor_edge_encoder0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_encoderedge_encoder0Gemm_output_0, true, false, 32, num_edges, 6, 1, tensor_edge_encoder0weight, tensor_edge_attr, 1,nullptr);
// ---- Constant (no-op) 16 --> edge_encoderedge_encoder1Constant_output_0 {  }
// ---- Constant (no-op) 17 --> edge_encoderedge_encoder1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_18
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_encoderedge_encoder0Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_encoderedge_encoder0Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_encoderedge_encoder1LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_encoderedge_encoder1Constant_output_0[axis_1] * invStdDev * (tensor_edge_encoderedge_encoder0Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_encoderedge_encoder1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_encoderedge_encoder2Relu_output_0[id] = ((tensor_edge_encoderedge_encoder1LayerNormalization_output_0[id] > 0 )? tensor_edge_encoderedge_encoder1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_20 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_encoderedge_encoder3Gemm_output_0[y_index + k] = tensor_edge_encoder3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_encoderedge_encoder3Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_encoder3weight, tensor_edge_encoderedge_encoder2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 21 --> edge_encoderedge_encoder4Constant_output_0 {  }
// ---- Constant (no-op) 22 --> edge_encoderedge_encoder4Constant_1_output_0 {  }
//---- Layer Normalization  operator op_23
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_encoderedge_encoder3Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_encoderedge_encoder3Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_encoderedge_encoder4LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_encoderedge_encoder4Constant_output_0[axis_1] * invStdDev * (tensor_edge_encoderedge_encoder3Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_encoderedge_encoder4Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_encoderedge_encoder5Relu_output_0[id] = ((tensor_edge_encoderedge_encoder4LayerNormalization_output_0[id] > 0 )? tensor_edge_encoderedge_encoder4LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_25 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_encoderedge_encoder7Relu_output_0[y_index + k] = tensor_edge_encoder6bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_encoderedge_encoder7Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_encoder6weight, tensor_edge_encoderedge_encoder5Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_encoderedge_encoder7Relu_output_0[id] = ((tensor_edge_encoderedge_encoder7Relu_output_0[id] > 0 )? tensor_edge_encoderedge_encoder7Relu_output_0[id] : 0);
   }

//--------- Concat op_26 --> Concat_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_27 --> Gather_2_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_2_output_0[y_index] = tensor_Concat_output_0[x_index];
      }
   }
//--------- Gather op_28 --> Gather_3_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_3_output_0[y_index] = tensor_Concat_output_0[x_index];
      }
   }

//--------- Concat op_29 --> Concat_1_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_1_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_1_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_1_output_0[idxOut+iC] = tensor_Gather_2_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_1_output_0[idxOut+iC] = tensor_Gather_3_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_30 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network0edge_network00Gemm_output_0[y_index + k] = tensor_edge_network00bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network0edge_network00Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network00weight, tensor_Concat_1_output_0, 1,nullptr);
// ---- Constant (no-op) 31 --> edge_network0edge_network01Constant_output_0 {  }
// ---- Constant (no-op) 32 --> edge_network0edge_network01Constant_1_output_0 {  }
//---- Layer Normalization  operator op_33
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network0edge_network00Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network0edge_network00Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network0edge_network01LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network0edge_network01Constant_output_0[axis_1] * invStdDev * (tensor_edge_network0edge_network00Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network0edge_network01Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network0edge_network02Relu_output_0[id] = ((tensor_edge_network0edge_network01LayerNormalization_output_0[id] > 0 )? tensor_edge_network0edge_network01LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_35 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network0edge_network03Gemm_output_0[y_index + k] = tensor_edge_network03bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network0edge_network03Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network03weight, tensor_edge_network0edge_network02Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 36 --> edge_network0edge_network04Constant_output_0 {  }
// ---- Constant (no-op) 37 --> edge_network0edge_network04Constant_1_output_0 {  }
//---- Layer Normalization  operator op_38
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network0edge_network03Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network0edge_network03Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network0edge_network04LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network0edge_network04Constant_output_0[axis_1] * invStdDev * (tensor_edge_network0edge_network03Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network0edge_network04Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network0edge_network05Relu_output_0[id] = ((tensor_edge_network0edge_network04LayerNormalization_output_0[id] > 0 )? tensor_edge_network0edge_network04LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_40 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network0edge_network07Relu_output_0[y_index + k] = tensor_edge_network06bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network0edge_network07Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network06weight, tensor_edge_network0edge_network05Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network0edge_network07Relu_output_0[id] = ((tensor_edge_network0edge_network07Relu_output_0[id] > 0 )? tensor_edge_network0edge_network07Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 42 --> Constant_2_output_0 {  }
//--------- Gather op_43 --> Gather_4_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 44 --> Constant_3_output_0 {  }
   ///--------Unsquueze operator 45 --> { num_edges , 1 }
   std::copy( tensor_Gather_1_output_0, tensor_Gather_1_output_0 + num_edges, tensor_Unsqueeze_output_0);
// ---- Constant (no-op) 47 --> Constant_4_output_0 {  }
//--------- Gather op_48 --> Gather_5_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 50 --> Constant_5_output_0 {  }
//--------- Gather op_51 --> Gather_6_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 52 --> Constant_6_output_0 {  }
// ---- Constant (no-op) 54 --> Constant_7_output_0 {  }

//--------- Concat op_56 --> Concat_2_output_0  { 2 }
// ---- Constant (no-op) 57 --> Constant_8_output_0 {  }
// ---- ConstantOfShape (no-op) 60 --> ConstantOfShape_output_0 {  }
// ---- Constant (no-op) 61 --> Constant_9_output_0 {  }
   
//------ Expand op_65 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_output_0, num_edges * 32));
// ---- Constant (no-op) 66 --> onnxUnsqueeze_186 {  }
// ---- Constant (no-op) 68 --> onnxUnsqueeze_188 {  }

//--------- Concat op_70 --> Concat_3_output_0  { 2 }
// ---- Constant (no-op) 71 --> onnxUnsqueeze_191 {  }
// ---- Constant (no-op) 73 --> onnxUnsqueeze_193 {  }

//--------- Concat op_75 --> Concat_4_output_0  { 2 }

//--------- ConstantOfShape 76 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_1_output_0, tensor_ConstantOfShape_1_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 78 --> Constant_10_output_0 {  }
///------- Slice operator 79---> Slice_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_output_0 = tensor_edge_network0edge_network07Relu_output_0;
   
//-------- ScatterElements  --- 80
   std::copy(tensor_ConstantOfShape_1_output_0, tensor_ConstantOfShape_1_output_0 + num_spacepoints * 32, tensor_ScatterElements_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_output_0[outIndex] = tensor_ScatterElements_output_0[outIndex] + tensor_Slice_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 81 --> Constant_11_output_0 {  }
   ///--------Unsquueze operator 82 --> { num_edges , 1 }
   std::copy( tensor_Gather_output_0, tensor_Gather_output_0 + num_edges, tensor_Unsqueeze_7_output_0);
// ---- Constant (no-op) 83 --> Constant_12_output_0 {  }
// ---- Constant (no-op) 85 --> Constant_13_output_0 {  }

//--------- Concat op_87 --> Concat_5_output_0  { 2 }
// ---- Constant (no-op) 88 --> Constant_14_output_0 {  }
// ---- ConstantOfShape (no-op) 91 --> ConstantOfShape_2_output_0 {  }
// ---- Constant (no-op) 92 --> Constant_15_output_0 {  }
   
//------ Expand op_96 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_1_output_0, num_edges * 32));

//--------- ConstantOfShape 97 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_3_output_0, tensor_ConstantOfShape_3_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 99 --> Constant_16_output_0 {  }
///------- Slice operator 100---> Slice_1_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_1_output_0 = tensor_edge_network0edge_network07Relu_output_0;
   
//-------- ScatterElements  --- 101
   std::copy(tensor_ConstantOfShape_3_output_0, tensor_ConstantOfShape_3_output_0 + num_spacepoints * 32, tensor_ScatterElements_1_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_1_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_1_output_0[outIndex] = tensor_ScatterElements_1_output_0[outIndex] + tensor_Slice_1_output_0[updateIndex];
      }
   }

//--------- Concat op_102 --> Concat_6_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_6_output_0[idxOut+iC] = tensor_ScatterElements_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_6_output_0[idxOut+iC] = tensor_ScatterElements_1_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_6_output_0[idxOut+iC] = tensor_Concat_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_103 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network0node_network00Gemm_output_0[y_index + k] = tensor_node_network00bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network0node_network00Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network00weight, tensor_Concat_6_output_0, 1,nullptr);
// ---- Constant (no-op) 104 --> node_network0node_network01Constant_output_0 {  }
// ---- Constant (no-op) 105 --> node_network0node_network01Constant_1_output_0 {  }
//---- Layer Normalization  operator op_106
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network0node_network00Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network0node_network00Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network0node_network01LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network0node_network01Constant_output_0[axis_1] * invStdDev * (tensor_node_network0node_network00Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network0node_network01Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network0node_network02Relu_output_0[id] = ((tensor_node_network0node_network01LayerNormalization_output_0[id] > 0 )? tensor_node_network0node_network01LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_108 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network0node_network03Gemm_output_0[y_index + k] = tensor_node_network03bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network0node_network03Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network03weight, tensor_node_network0node_network02Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 109 --> node_network0node_network04Constant_output_0 {  }
// ---- Constant (no-op) 110 --> node_network0node_network04Constant_1_output_0 {  }
//---- Layer Normalization  operator op_111
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network0node_network03Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network0node_network03Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network0node_network04LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network0node_network04Constant_output_0[axis_1] * invStdDev * (tensor_node_network0node_network03Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network0node_network04Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network0node_network05Relu_output_0[id] = ((tensor_node_network0node_network04LayerNormalization_output_0[id] > 0 )? tensor_node_network0node_network04LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_113 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network0node_network07Relu_output_0[y_index + k] = tensor_node_network06bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network0node_network07Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network06weight, tensor_node_network0node_network05Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network0node_network07Relu_output_0[id] = ((tensor_node_network0node_network07Relu_output_0[id] > 0 )? tensor_node_network0node_network07Relu_output_0[id] : 0);
   }

//--------- Concat op_114 --> Concat_7_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_7_output_0[idxOut+iC] = tensor_node_network0node_network07Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_7_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_115 --> Gather_7_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_7_output_0[y_index] = tensor_Concat_7_output_0[x_index];
      }
   }
//--------- Gather op_116 --> Gather_8_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_8_output_0[y_index] = tensor_Concat_7_output_0[x_index];
      }
   }

//--------- Concat op_117 --> Concat_8_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_8_output_0[idxOut+iC] = tensor_edge_network0edge_network07Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_8_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_8_output_0[idxOut+iC] = tensor_Gather_7_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_8_output_0[idxOut+iC] = tensor_Gather_8_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_118 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network1edge_network10Gemm_output_0[y_index + k] = tensor_edge_network10bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network1edge_network10Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network10weight, tensor_Concat_8_output_0, 1,nullptr);
// ---- Constant (no-op) 119 --> edge_network1edge_network11Constant_output_0 {  }
// ---- Constant (no-op) 120 --> edge_network1edge_network11Constant_1_output_0 {  }
//---- Layer Normalization  operator op_121
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network1edge_network10Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network1edge_network10Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network1edge_network11LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network1edge_network11Constant_output_0[axis_1] * invStdDev * (tensor_edge_network1edge_network10Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network1edge_network11Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network1edge_network12Relu_output_0[id] = ((tensor_edge_network1edge_network11LayerNormalization_output_0[id] > 0 )? tensor_edge_network1edge_network11LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_123 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network1edge_network13Gemm_output_0[y_index + k] = tensor_edge_network13bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network1edge_network13Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network13weight, tensor_edge_network1edge_network12Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 124 --> edge_network1edge_network14Constant_output_0 {  }
// ---- Constant (no-op) 125 --> edge_network1edge_network14Constant_1_output_0 {  }
//---- Layer Normalization  operator op_126
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network1edge_network13Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network1edge_network13Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network1edge_network14LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network1edge_network14Constant_output_0[axis_1] * invStdDev * (tensor_edge_network1edge_network13Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network1edge_network14Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network1edge_network15Relu_output_0[id] = ((tensor_edge_network1edge_network14LayerNormalization_output_0[id] > 0 )? tensor_edge_network1edge_network14LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_128 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network1edge_network17Relu_output_0[y_index + k] = tensor_edge_network16bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network1edge_network17Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network16weight, tensor_edge_network1edge_network15Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network1edge_network17Relu_output_0[id] = ((tensor_edge_network1edge_network17Relu_output_0[id] > 0 )? tensor_edge_network1edge_network17Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 130 --> Constant_17_output_0 {  }
//--------- Gather op_131 --> Gather_9_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 133 --> Constant_18_output_0 {  }
//--------- Gather op_134 --> Gather_10_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 136 --> Constant_19_output_0 {  }
//--------- Gather op_137 --> Gather_11_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 138 --> Constant_20_output_0 {  }
// ---- Constant (no-op) 140 --> Constant_21_output_0 {  }

//--------- Concat op_142 --> Concat_9_output_0  { 2 }
// ---- Constant (no-op) 143 --> Constant_22_output_0 {  }
// ---- ConstantOfShape (no-op) 146 --> ConstantOfShape_4_output_0 {  }
// ---- Constant (no-op) 147 --> Constant_23_output_0 {  }
   
//------ Expand op_151 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_2_output_0, num_edges * 32));
// ---- Constant (no-op) 152 --> onnxUnsqueeze_274 {  }
// ---- Constant (no-op) 154 --> onnxUnsqueeze_276 {  }

//--------- Concat op_156 --> Concat_10_output_0  { 2 }
// ---- Constant (no-op) 157 --> onnxUnsqueeze_279 {  }
// ---- Constant (no-op) 159 --> onnxUnsqueeze_281 {  }

//--------- Concat op_161 --> Concat_11_output_0  { 2 }

//--------- ConstantOfShape 162 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_5_output_0, tensor_ConstantOfShape_5_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 164 --> Constant_24_output_0 {  }
///------- Slice operator 165---> Slice_2_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_2_output_0 = tensor_edge_network1edge_network17Relu_output_0;
   
//-------- ScatterElements  --- 166
   std::copy(tensor_ConstantOfShape_5_output_0, tensor_ConstantOfShape_5_output_0 + num_spacepoints * 32, tensor_ScatterElements_2_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_2_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_2_output_0[outIndex] = tensor_ScatterElements_2_output_0[outIndex] + tensor_Slice_2_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 167 --> Constant_25_output_0 {  }
// ---- Constant (no-op) 169 --> Constant_26_output_0 {  }

//--------- Concat op_171 --> Concat_12_output_0  { 2 }
// ---- Constant (no-op) 172 --> Constant_27_output_0 {  }
// ---- ConstantOfShape (no-op) 175 --> ConstantOfShape_6_output_0 {  }
// ---- Constant (no-op) 176 --> Constant_28_output_0 {  }
   
//------ Expand op_180 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_3_output_0, num_edges * 32));

//--------- ConstantOfShape 181 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_7_output_0, tensor_ConstantOfShape_7_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 183 --> Constant_29_output_0 {  }
///------- Slice operator 184---> Slice_3_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_3_output_0 = tensor_edge_network1edge_network17Relu_output_0;
   
//-------- ScatterElements  --- 185
   std::copy(tensor_ConstantOfShape_7_output_0, tensor_ConstantOfShape_7_output_0 + num_spacepoints * 32, tensor_ScatterElements_3_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_3_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_3_output_0[outIndex] = tensor_ScatterElements_3_output_0[outIndex] + tensor_Slice_3_output_0[updateIndex];
      }
   }

//--------- Concat op_186 --> Concat_13_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_13_output_0[idxOut+iC] = tensor_ScatterElements_2_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_13_output_0[idxOut+iC] = tensor_ScatterElements_3_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_13_output_0[idxOut+iC] = tensor_Concat_7_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_187 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network1node_network10Gemm_output_0[y_index + k] = tensor_node_network10bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network1node_network10Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network10weight, tensor_Concat_13_output_0, 1,nullptr);
// ---- Constant (no-op) 188 --> node_network1node_network11Constant_output_0 {  }
// ---- Constant (no-op) 189 --> node_network1node_network11Constant_1_output_0 {  }
//---- Layer Normalization  operator op_190
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network1node_network10Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network1node_network10Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network1node_network11LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network1node_network11Constant_output_0[axis_1] * invStdDev * (tensor_node_network1node_network10Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network1node_network11Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network1node_network12Relu_output_0[id] = ((tensor_node_network1node_network11LayerNormalization_output_0[id] > 0 )? tensor_node_network1node_network11LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_192 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network1node_network13Gemm_output_0[y_index + k] = tensor_node_network13bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network1node_network13Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network13weight, tensor_node_network1node_network12Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 193 --> node_network1node_network14Constant_output_0 {  }
// ---- Constant (no-op) 194 --> node_network1node_network14Constant_1_output_0 {  }
//---- Layer Normalization  operator op_195
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network1node_network13Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network1node_network13Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network1node_network14LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network1node_network14Constant_output_0[axis_1] * invStdDev * (tensor_node_network1node_network13Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network1node_network14Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network1node_network15Relu_output_0[id] = ((tensor_node_network1node_network14LayerNormalization_output_0[id] > 0 )? tensor_node_network1node_network14LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_197 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network1node_network17Relu_output_0[y_index + k] = tensor_node_network16bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network1node_network17Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network16weight, tensor_node_network1node_network15Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network1node_network17Relu_output_0[id] = ((tensor_node_network1node_network17Relu_output_0[id] > 0 )? tensor_node_network1node_network17Relu_output_0[id] : 0);
   }

//--------- Concat op_198 --> Concat_14_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_14_output_0[idxOut+iC] = tensor_node_network1node_network17Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_14_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_199 --> Gather_12_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_12_output_0[y_index] = tensor_Concat_14_output_0[x_index];
      }
   }
//--------- Gather op_200 --> Gather_13_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_13_output_0[y_index] = tensor_Concat_14_output_0[x_index];
      }
   }

//--------- Concat op_201 --> Concat_15_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_15_output_0[idxOut+iC] = tensor_edge_network1edge_network17Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_15_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_15_output_0[idxOut+iC] = tensor_Gather_12_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_15_output_0[idxOut+iC] = tensor_Gather_13_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_202 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network2edge_network20Gemm_output_0[y_index + k] = tensor_edge_network20bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network2edge_network20Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network20weight, tensor_Concat_15_output_0, 1,nullptr);
// ---- Constant (no-op) 203 --> edge_network2edge_network21Constant_output_0 {  }
// ---- Constant (no-op) 204 --> edge_network2edge_network21Constant_1_output_0 {  }
//---- Layer Normalization  operator op_205
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network2edge_network20Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network2edge_network20Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network2edge_network21LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network2edge_network21Constant_output_0[axis_1] * invStdDev * (tensor_edge_network2edge_network20Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network2edge_network21Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network2edge_network22Relu_output_0[id] = ((tensor_edge_network2edge_network21LayerNormalization_output_0[id] > 0 )? tensor_edge_network2edge_network21LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_207 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network2edge_network23Gemm_output_0[y_index + k] = tensor_edge_network23bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network2edge_network23Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network23weight, tensor_edge_network2edge_network22Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 208 --> edge_network2edge_network24Constant_output_0 {  }
// ---- Constant (no-op) 209 --> edge_network2edge_network24Constant_1_output_0 {  }
//---- Layer Normalization  operator op_210
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network2edge_network23Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network2edge_network23Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network2edge_network24LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network2edge_network24Constant_output_0[axis_1] * invStdDev * (tensor_edge_network2edge_network23Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network2edge_network24Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network2edge_network25Relu_output_0[id] = ((tensor_edge_network2edge_network24LayerNormalization_output_0[id] > 0 )? tensor_edge_network2edge_network24LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_212 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network2edge_network27Relu_output_0[y_index + k] = tensor_edge_network26bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network2edge_network27Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network26weight, tensor_edge_network2edge_network25Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network2edge_network27Relu_output_0[id] = ((tensor_edge_network2edge_network27Relu_output_0[id] > 0 )? tensor_edge_network2edge_network27Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 214 --> Constant_30_output_0 {  }
//--------- Gather op_215 --> Gather_14_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 217 --> Constant_31_output_0 {  }
//--------- Gather op_218 --> Gather_15_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 220 --> Constant_32_output_0 {  }
//--------- Gather op_221 --> Gather_16_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 222 --> Constant_33_output_0 {  }
// ---- Constant (no-op) 224 --> Constant_34_output_0 {  }

//--------- Concat op_226 --> Concat_16_output_0  { 2 }
// ---- Constant (no-op) 227 --> Constant_35_output_0 {  }
// ---- ConstantOfShape (no-op) 230 --> ConstantOfShape_8_output_0 {  }
// ---- Constant (no-op) 231 --> Constant_36_output_0 {  }
   
//------ Expand op_235 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_4_output_0, num_edges * 32));
// ---- Constant (no-op) 236 --> onnxUnsqueeze_360 {  }
// ---- Constant (no-op) 238 --> onnxUnsqueeze_362 {  }

//--------- Concat op_240 --> Concat_17_output_0  { 2 }
// ---- Constant (no-op) 241 --> onnxUnsqueeze_365 {  }
// ---- Constant (no-op) 243 --> onnxUnsqueeze_367 {  }

//--------- Concat op_245 --> Concat_18_output_0  { 2 }

//--------- ConstantOfShape 246 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_9_output_0, tensor_ConstantOfShape_9_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 248 --> Constant_37_output_0 {  }
///------- Slice operator 249---> Slice_4_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_4_output_0 = tensor_edge_network2edge_network27Relu_output_0;
   
//-------- ScatterElements  --- 250
   std::copy(tensor_ConstantOfShape_9_output_0, tensor_ConstantOfShape_9_output_0 + num_spacepoints * 32, tensor_ScatterElements_4_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_4_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_4_output_0[outIndex] = tensor_ScatterElements_4_output_0[outIndex] + tensor_Slice_4_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 251 --> Constant_38_output_0 {  }
// ---- Constant (no-op) 253 --> Constant_39_output_0 {  }

//--------- Concat op_255 --> Concat_19_output_0  { 2 }
// ---- Constant (no-op) 256 --> Constant_40_output_0 {  }
// ---- ConstantOfShape (no-op) 259 --> ConstantOfShape_10_output_0 {  }
// ---- Constant (no-op) 260 --> Constant_41_output_0 {  }
   
//------ Expand op_264 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_5_output_0, num_edges * 32));

//--------- ConstantOfShape 265 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_11_output_0, tensor_ConstantOfShape_11_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 267 --> Constant_42_output_0 {  }
///------- Slice operator 268---> Slice_5_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_5_output_0 = tensor_edge_network2edge_network27Relu_output_0;
   
//-------- ScatterElements  --- 269
   std::copy(tensor_ConstantOfShape_11_output_0, tensor_ConstantOfShape_11_output_0 + num_spacepoints * 32, tensor_ScatterElements_5_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_5_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_5_output_0[outIndex] = tensor_ScatterElements_5_output_0[outIndex] + tensor_Slice_5_output_0[updateIndex];
      }
   }

//--------- Concat op_270 --> Concat_20_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_20_output_0[idxOut+iC] = tensor_ScatterElements_4_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_20_output_0[idxOut+iC] = tensor_ScatterElements_5_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_20_output_0[idxOut+iC] = tensor_Concat_14_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_271 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network2node_network20Gemm_output_0[y_index + k] = tensor_node_network20bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network2node_network20Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network20weight, tensor_Concat_20_output_0, 1,nullptr);
// ---- Constant (no-op) 272 --> node_network2node_network21Constant_output_0 {  }
// ---- Constant (no-op) 273 --> node_network2node_network21Constant_1_output_0 {  }
//---- Layer Normalization  operator op_274
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network2node_network20Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network2node_network20Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network2node_network21LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network2node_network21Constant_output_0[axis_1] * invStdDev * (tensor_node_network2node_network20Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network2node_network21Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network2node_network22Relu_output_0[id] = ((tensor_node_network2node_network21LayerNormalization_output_0[id] > 0 )? tensor_node_network2node_network21LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_276 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network2node_network23Gemm_output_0[y_index + k] = tensor_node_network23bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network2node_network23Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network23weight, tensor_node_network2node_network22Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 277 --> node_network2node_network24Constant_output_0 {  }
// ---- Constant (no-op) 278 --> node_network2node_network24Constant_1_output_0 {  }
//---- Layer Normalization  operator op_279
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network2node_network23Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network2node_network23Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network2node_network24LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network2node_network24Constant_output_0[axis_1] * invStdDev * (tensor_node_network2node_network23Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network2node_network24Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network2node_network25Relu_output_0[id] = ((tensor_node_network2node_network24LayerNormalization_output_0[id] > 0 )? tensor_node_network2node_network24LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_281 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network2node_network27Relu_output_0[y_index + k] = tensor_node_network26bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network2node_network27Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network26weight, tensor_node_network2node_network25Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network2node_network27Relu_output_0[id] = ((tensor_node_network2node_network27Relu_output_0[id] > 0 )? tensor_node_network2node_network27Relu_output_0[id] : 0);
   }

//--------- Concat op_282 --> Concat_21_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_21_output_0[idxOut+iC] = tensor_node_network2node_network27Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_21_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_283 --> Gather_17_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_17_output_0[y_index] = tensor_Concat_21_output_0[x_index];
      }
   }
//--------- Gather op_284 --> Gather_18_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_18_output_0[y_index] = tensor_Concat_21_output_0[x_index];
      }
   }

//--------- Concat op_285 --> Concat_22_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_22_output_0[idxOut+iC] = tensor_edge_network2edge_network27Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_22_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_22_output_0[idxOut+iC] = tensor_Gather_17_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_22_output_0[idxOut+iC] = tensor_Gather_18_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_286 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network3edge_network30Gemm_output_0[y_index + k] = tensor_edge_network30bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network3edge_network30Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network30weight, tensor_Concat_22_output_0, 1,nullptr);
// ---- Constant (no-op) 287 --> edge_network3edge_network31Constant_output_0 {  }
// ---- Constant (no-op) 288 --> edge_network3edge_network31Constant_1_output_0 {  }
//---- Layer Normalization  operator op_289
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network3edge_network30Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network3edge_network30Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network3edge_network31LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network3edge_network31Constant_output_0[axis_1] * invStdDev * (tensor_edge_network3edge_network30Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network3edge_network31Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network3edge_network32Relu_output_0[id] = ((tensor_edge_network3edge_network31LayerNormalization_output_0[id] > 0 )? tensor_edge_network3edge_network31LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_291 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network3edge_network33Gemm_output_0[y_index + k] = tensor_edge_network33bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network3edge_network33Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network33weight, tensor_edge_network3edge_network32Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 292 --> edge_network3edge_network34Constant_output_0 {  }
// ---- Constant (no-op) 293 --> edge_network3edge_network34Constant_1_output_0 {  }
//---- Layer Normalization  operator op_294
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network3edge_network33Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network3edge_network33Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network3edge_network34LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network3edge_network34Constant_output_0[axis_1] * invStdDev * (tensor_edge_network3edge_network33Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network3edge_network34Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network3edge_network35Relu_output_0[id] = ((tensor_edge_network3edge_network34LayerNormalization_output_0[id] > 0 )? tensor_edge_network3edge_network34LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_296 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network3edge_network37Relu_output_0[y_index + k] = tensor_edge_network36bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network3edge_network37Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network36weight, tensor_edge_network3edge_network35Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network3edge_network37Relu_output_0[id] = ((tensor_edge_network3edge_network37Relu_output_0[id] > 0 )? tensor_edge_network3edge_network37Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 298 --> Constant_43_output_0 {  }
//--------- Gather op_299 --> Gather_19_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 301 --> Constant_44_output_0 {  }
//--------- Gather op_302 --> Gather_20_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 304 --> Constant_45_output_0 {  }
//--------- Gather op_305 --> Gather_21_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 306 --> Constant_46_output_0 {  }
// ---- Constant (no-op) 308 --> Constant_47_output_0 {  }

//--------- Concat op_310 --> Concat_23_output_0  { 2 }
// ---- Constant (no-op) 311 --> Constant_48_output_0 {  }
// ---- ConstantOfShape (no-op) 314 --> ConstantOfShape_12_output_0 {  }
// ---- Constant (no-op) 315 --> Constant_49_output_0 {  }
   
//------ Expand op_319 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_6_output_0, num_edges * 32));
// ---- Constant (no-op) 320 --> onnxUnsqueeze_446 {  }
// ---- Constant (no-op) 322 --> onnxUnsqueeze_448 {  }

//--------- Concat op_324 --> Concat_24_output_0  { 2 }
// ---- Constant (no-op) 325 --> onnxUnsqueeze_451 {  }
// ---- Constant (no-op) 327 --> onnxUnsqueeze_453 {  }

//--------- Concat op_329 --> Concat_25_output_0  { 2 }

//--------- ConstantOfShape 330 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_13_output_0, tensor_ConstantOfShape_13_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 332 --> Constant_50_output_0 {  }
///------- Slice operator 333---> Slice_6_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_6_output_0 = tensor_edge_network3edge_network37Relu_output_0;
   
//-------- ScatterElements  --- 334
   std::copy(tensor_ConstantOfShape_13_output_0, tensor_ConstantOfShape_13_output_0 + num_spacepoints * 32, tensor_ScatterElements_6_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_6_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_6_output_0[outIndex] = tensor_ScatterElements_6_output_0[outIndex] + tensor_Slice_6_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 335 --> Constant_51_output_0 {  }
// ---- Constant (no-op) 337 --> Constant_52_output_0 {  }

//--------- Concat op_339 --> Concat_26_output_0  { 2 }
// ---- Constant (no-op) 340 --> Constant_53_output_0 {  }
// ---- ConstantOfShape (no-op) 343 --> ConstantOfShape_14_output_0 {  }
// ---- Constant (no-op) 344 --> Constant_54_output_0 {  }
   
//------ Expand op_348 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_7_output_0, num_edges * 32));

//--------- ConstantOfShape 349 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_15_output_0, tensor_ConstantOfShape_15_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 351 --> Constant_55_output_0 {  }
///------- Slice operator 352---> Slice_7_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_7_output_0 = tensor_edge_network3edge_network37Relu_output_0;
   
//-------- ScatterElements  --- 353
   std::copy(tensor_ConstantOfShape_15_output_0, tensor_ConstantOfShape_15_output_0 + num_spacepoints * 32, tensor_ScatterElements_7_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_7_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_7_output_0[outIndex] = tensor_ScatterElements_7_output_0[outIndex] + tensor_Slice_7_output_0[updateIndex];
      }
   }

//--------- Concat op_354 --> Concat_27_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_27_output_0[idxOut+iC] = tensor_ScatterElements_6_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_27_output_0[idxOut+iC] = tensor_ScatterElements_7_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_27_output_0[idxOut+iC] = tensor_Concat_21_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_355 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network3node_network30Gemm_output_0[y_index + k] = tensor_node_network30bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network3node_network30Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network30weight, tensor_Concat_27_output_0, 1,nullptr);
// ---- Constant (no-op) 356 --> node_network3node_network31Constant_output_0 {  }
// ---- Constant (no-op) 357 --> node_network3node_network31Constant_1_output_0 {  }
//---- Layer Normalization  operator op_358
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network3node_network30Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network3node_network30Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network3node_network31LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network3node_network31Constant_output_0[axis_1] * invStdDev * (tensor_node_network3node_network30Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network3node_network31Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network3node_network32Relu_output_0[id] = ((tensor_node_network3node_network31LayerNormalization_output_0[id] > 0 )? tensor_node_network3node_network31LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_360 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network3node_network33Gemm_output_0[y_index + k] = tensor_node_network33bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network3node_network33Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network33weight, tensor_node_network3node_network32Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 361 --> node_network3node_network34Constant_output_0 {  }
// ---- Constant (no-op) 362 --> node_network3node_network34Constant_1_output_0 {  }
//---- Layer Normalization  operator op_363
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network3node_network33Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network3node_network33Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network3node_network34LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network3node_network34Constant_output_0[axis_1] * invStdDev * (tensor_node_network3node_network33Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network3node_network34Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network3node_network35Relu_output_0[id] = ((tensor_node_network3node_network34LayerNormalization_output_0[id] > 0 )? tensor_node_network3node_network34LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_365 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network3node_network37Relu_output_0[y_index + k] = tensor_node_network36bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network3node_network37Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network36weight, tensor_node_network3node_network35Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network3node_network37Relu_output_0[id] = ((tensor_node_network3node_network37Relu_output_0[id] > 0 )? tensor_node_network3node_network37Relu_output_0[id] : 0);
   }

//--------- Concat op_366 --> Concat_28_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_28_output_0[idxOut+iC] = tensor_node_network3node_network37Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_28_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_367 --> Gather_22_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_22_output_0[y_index] = tensor_Concat_28_output_0[x_index];
      }
   }
//--------- Gather op_368 --> Gather_23_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_23_output_0[y_index] = tensor_Concat_28_output_0[x_index];
      }
   }

//--------- Concat op_369 --> Concat_29_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_edge_network3edge_network37Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_Gather_22_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_Gather_23_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_370 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network4edge_network40Gemm_output_0[y_index + k] = tensor_edge_network40bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network4edge_network40Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network40weight, tensor_Concat_29_output_0, 1,nullptr);
// ---- Constant (no-op) 371 --> edge_network4edge_network41Constant_output_0 {  }
// ---- Constant (no-op) 372 --> edge_network4edge_network41Constant_1_output_0 {  }
//---- Layer Normalization  operator op_373
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network4edge_network40Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network4edge_network40Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network4edge_network41LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network4edge_network41Constant_output_0[axis_1] * invStdDev * (tensor_edge_network4edge_network40Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network4edge_network41Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network4edge_network42Relu_output_0[id] = ((tensor_edge_network4edge_network41LayerNormalization_output_0[id] > 0 )? tensor_edge_network4edge_network41LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_375 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network4edge_network43Gemm_output_0[y_index + k] = tensor_edge_network43bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network4edge_network43Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network43weight, tensor_edge_network4edge_network42Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 376 --> edge_network4edge_network44Constant_output_0 {  }
// ---- Constant (no-op) 377 --> edge_network4edge_network44Constant_1_output_0 {  }
//---- Layer Normalization  operator op_378
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network4edge_network43Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network4edge_network43Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network4edge_network44LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network4edge_network44Constant_output_0[axis_1] * invStdDev * (tensor_edge_network4edge_network43Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network4edge_network44Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network4edge_network45Relu_output_0[id] = ((tensor_edge_network4edge_network44LayerNormalization_output_0[id] > 0 )? tensor_edge_network4edge_network44LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_380 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network4edge_network47Relu_output_0[y_index + k] = tensor_edge_network46bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network4edge_network47Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network46weight, tensor_edge_network4edge_network45Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network4edge_network47Relu_output_0[id] = ((tensor_edge_network4edge_network47Relu_output_0[id] > 0 )? tensor_edge_network4edge_network47Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 382 --> Constant_56_output_0 {  }
//--------- Gather op_383 --> Gather_24_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 385 --> Constant_57_output_0 {  }
//--------- Gather op_386 --> Gather_25_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 388 --> Constant_58_output_0 {  }
//--------- Gather op_389 --> Gather_26_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 390 --> Constant_59_output_0 {  }
// ---- Constant (no-op) 392 --> Constant_60_output_0 {  }

//--------- Concat op_394 --> Concat_30_output_0  { 2 }
// ---- Constant (no-op) 395 --> Constant_61_output_0 {  }
// ---- ConstantOfShape (no-op) 398 --> ConstantOfShape_16_output_0 {  }
// ---- Constant (no-op) 399 --> Constant_62_output_0 {  }
   
//------ Expand op_403 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_8_output_0, num_edges * 32));
// ---- Constant (no-op) 404 --> onnxUnsqueeze_532 {  }
// ---- Constant (no-op) 406 --> onnxUnsqueeze_534 {  }

//--------- Concat op_408 --> Concat_31_output_0  { 2 }
// ---- Constant (no-op) 409 --> onnxUnsqueeze_537 {  }
// ---- Constant (no-op) 411 --> onnxUnsqueeze_539 {  }

//--------- Concat op_413 --> Concat_32_output_0  { 2 }

//--------- ConstantOfShape 414 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_17_output_0, tensor_ConstantOfShape_17_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 416 --> Constant_63_output_0 {  }
///------- Slice operator 417---> Slice_8_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_8_output_0 = tensor_edge_network4edge_network47Relu_output_0;
   
//-------- ScatterElements  --- 418
   std::copy(tensor_ConstantOfShape_17_output_0, tensor_ConstantOfShape_17_output_0 + num_spacepoints * 32, tensor_ScatterElements_8_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_8_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_8_output_0[outIndex] = tensor_ScatterElements_8_output_0[outIndex] + tensor_Slice_8_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 419 --> Constant_64_output_0 {  }
// ---- Constant (no-op) 421 --> Constant_65_output_0 {  }

//--------- Concat op_423 --> Concat_33_output_0  { 2 }
// ---- Constant (no-op) 424 --> Constant_66_output_0 {  }
// ---- ConstantOfShape (no-op) 427 --> ConstantOfShape_18_output_0 {  }
// ---- Constant (no-op) 428 --> Constant_67_output_0 {  }
   
//------ Expand op_432 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_9_output_0, num_edges * 32));

//--------- ConstantOfShape 433 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_19_output_0, tensor_ConstantOfShape_19_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 435 --> Constant_68_output_0 {  }
///------- Slice operator 436---> Slice_9_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_9_output_0 = tensor_edge_network4edge_network47Relu_output_0;
   
//-------- ScatterElements  --- 437
   std::copy(tensor_ConstantOfShape_19_output_0, tensor_ConstantOfShape_19_output_0 + num_spacepoints * 32, tensor_ScatterElements_9_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_9_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_9_output_0[outIndex] = tensor_ScatterElements_9_output_0[outIndex] + tensor_Slice_9_output_0[updateIndex];
      }
   }

//--------- Concat op_438 --> Concat_34_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_34_output_0[idxOut+iC] = tensor_ScatterElements_8_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_34_output_0[idxOut+iC] = tensor_ScatterElements_9_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_34_output_0[idxOut+iC] = tensor_Concat_28_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_439 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network4node_network40Gemm_output_0[y_index + k] = tensor_node_network40bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network4node_network40Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network40weight, tensor_Concat_34_output_0, 1,nullptr);
// ---- Constant (no-op) 440 --> node_network4node_network41Constant_output_0 {  }
// ---- Constant (no-op) 441 --> node_network4node_network41Constant_1_output_0 {  }
//---- Layer Normalization  operator op_442
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network4node_network40Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network4node_network40Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network4node_network41LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network4node_network41Constant_output_0[axis_1] * invStdDev * (tensor_node_network4node_network40Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network4node_network41Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network4node_network42Relu_output_0[id] = ((tensor_node_network4node_network41LayerNormalization_output_0[id] > 0 )? tensor_node_network4node_network41LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_444 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network4node_network43Gemm_output_0[y_index + k] = tensor_node_network43bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network4node_network43Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network43weight, tensor_node_network4node_network42Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 445 --> node_network4node_network44Constant_output_0 {  }
// ---- Constant (no-op) 446 --> node_network4node_network44Constant_1_output_0 {  }
//---- Layer Normalization  operator op_447
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network4node_network43Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network4node_network43Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network4node_network44LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network4node_network44Constant_output_0[axis_1] * invStdDev * (tensor_node_network4node_network43Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network4node_network44Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network4node_network45Relu_output_0[id] = ((tensor_node_network4node_network44LayerNormalization_output_0[id] > 0 )? tensor_node_network4node_network44LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_449 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network4node_network47Relu_output_0[y_index + k] = tensor_node_network46bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network4node_network47Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network46weight, tensor_node_network4node_network45Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network4node_network47Relu_output_0[id] = ((tensor_node_network4node_network47Relu_output_0[id] > 0 )? tensor_node_network4node_network47Relu_output_0[id] : 0);
   }

//--------- Concat op_450 --> Concat_35_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_35_output_0[idxOut+iC] = tensor_node_network4node_network47Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_35_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_451 --> Gather_27_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_27_output_0[y_index] = tensor_Concat_35_output_0[x_index];
      }
   }
//--------- Gather op_452 --> Gather_28_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_28_output_0[y_index] = tensor_Concat_35_output_0[x_index];
      }
   }

//--------- Concat op_453 --> Concat_36_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_edge_network4edge_network47Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_Gather_27_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_Gather_28_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_454 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network5edge_network50Gemm_output_0[y_index + k] = tensor_edge_network50bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network5edge_network50Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network50weight, tensor_Concat_36_output_0, 1,nullptr);
// ---- Constant (no-op) 455 --> edge_network5edge_network51Constant_output_0 {  }
// ---- Constant (no-op) 456 --> edge_network5edge_network51Constant_1_output_0 {  }
//---- Layer Normalization  operator op_457
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network5edge_network50Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network5edge_network50Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network5edge_network51LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network5edge_network51Constant_output_0[axis_1] * invStdDev * (tensor_edge_network5edge_network50Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network5edge_network51Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network5edge_network52Relu_output_0[id] = ((tensor_edge_network5edge_network51LayerNormalization_output_0[id] > 0 )? tensor_edge_network5edge_network51LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_459 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network5edge_network53Gemm_output_0[y_index + k] = tensor_edge_network53bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network5edge_network53Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network53weight, tensor_edge_network5edge_network52Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 460 --> edge_network5edge_network54Constant_output_0 {  }
// ---- Constant (no-op) 461 --> edge_network5edge_network54Constant_1_output_0 {  }
//---- Layer Normalization  operator op_462
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network5edge_network53Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network5edge_network53Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network5edge_network54LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network5edge_network54Constant_output_0[axis_1] * invStdDev * (tensor_edge_network5edge_network53Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network5edge_network54Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network5edge_network55Relu_output_0[id] = ((tensor_edge_network5edge_network54LayerNormalization_output_0[id] > 0 )? tensor_edge_network5edge_network54LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_464 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network5edge_network57Relu_output_0[y_index + k] = tensor_edge_network56bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network5edge_network57Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network56weight, tensor_edge_network5edge_network55Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network5edge_network57Relu_output_0[id] = ((tensor_edge_network5edge_network57Relu_output_0[id] > 0 )? tensor_edge_network5edge_network57Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 466 --> Constant_69_output_0 {  }
//--------- Gather op_467 --> Gather_29_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 469 --> Constant_70_output_0 {  }
//--------- Gather op_470 --> Gather_30_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 472 --> Constant_71_output_0 {  }
//--------- Gather op_473 --> Gather_31_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 474 --> Constant_72_output_0 {  }
// ---- Constant (no-op) 476 --> Constant_73_output_0 {  }

//--------- Concat op_478 --> Concat_37_output_0  { 2 }
// ---- Constant (no-op) 479 --> Constant_74_output_0 {  }
// ---- ConstantOfShape (no-op) 482 --> ConstantOfShape_20_output_0 {  }
// ---- Constant (no-op) 483 --> Constant_75_output_0 {  }
   
//------ Expand op_487 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_10_output_0, num_edges * 32));
// ---- Constant (no-op) 488 --> onnxUnsqueeze_618 {  }
// ---- Constant (no-op) 490 --> onnxUnsqueeze_620 {  }

//--------- Concat op_492 --> Concat_38_output_0  { 2 }
// ---- Constant (no-op) 493 --> onnxUnsqueeze_623 {  }
// ---- Constant (no-op) 495 --> onnxUnsqueeze_625 {  }

//--------- Concat op_497 --> Concat_39_output_0  { 2 }

//--------- ConstantOfShape 498 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_21_output_0, tensor_ConstantOfShape_21_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 500 --> Constant_76_output_0 {  }
///------- Slice operator 501---> Slice_10_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_10_output_0 = tensor_edge_network5edge_network57Relu_output_0;
   
//-------- ScatterElements  --- 502
   std::copy(tensor_ConstantOfShape_21_output_0, tensor_ConstantOfShape_21_output_0 + num_spacepoints * 32, tensor_ScatterElements_10_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_10_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_10_output_0[outIndex] = tensor_ScatterElements_10_output_0[outIndex] + tensor_Slice_10_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 503 --> Constant_77_output_0 {  }
// ---- Constant (no-op) 505 --> Constant_78_output_0 {  }

//--------- Concat op_507 --> Concat_40_output_0  { 2 }
// ---- Constant (no-op) 508 --> Constant_79_output_0 {  }
// ---- ConstantOfShape (no-op) 511 --> ConstantOfShape_22_output_0 {  }
// ---- Constant (no-op) 512 --> Constant_80_output_0 {  }
   
//------ Expand op_516 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_11_output_0, num_edges * 32));

//--------- ConstantOfShape 517 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_23_output_0, tensor_ConstantOfShape_23_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 519 --> Constant_81_output_0 {  }
///------- Slice operator 520---> Slice_11_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_11_output_0 = tensor_edge_network5edge_network57Relu_output_0;
   
//-------- ScatterElements  --- 521
   std::copy(tensor_ConstantOfShape_23_output_0, tensor_ConstantOfShape_23_output_0 + num_spacepoints * 32, tensor_ScatterElements_11_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_11_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_11_output_0[outIndex] = tensor_ScatterElements_11_output_0[outIndex] + tensor_Slice_11_output_0[updateIndex];
      }
   }

//--------- Concat op_522 --> Concat_41_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_41_output_0[idxOut+iC] = tensor_ScatterElements_10_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_41_output_0[idxOut+iC] = tensor_ScatterElements_11_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_41_output_0[idxOut+iC] = tensor_Concat_35_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_523 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network5node_network50Gemm_output_0[y_index + k] = tensor_node_network50bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network5node_network50Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network50weight, tensor_Concat_41_output_0, 1,nullptr);
// ---- Constant (no-op) 524 --> node_network5node_network51Constant_output_0 {  }
// ---- Constant (no-op) 525 --> node_network5node_network51Constant_1_output_0 {  }
//---- Layer Normalization  operator op_526
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network5node_network50Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network5node_network50Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network5node_network51LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network5node_network51Constant_output_0[axis_1] * invStdDev * (tensor_node_network5node_network50Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network5node_network51Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network5node_network52Relu_output_0[id] = ((tensor_node_network5node_network51LayerNormalization_output_0[id] > 0 )? tensor_node_network5node_network51LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_528 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network5node_network53Gemm_output_0[y_index + k] = tensor_node_network53bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network5node_network53Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network53weight, tensor_node_network5node_network52Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 529 --> node_network5node_network54Constant_output_0 {  }
// ---- Constant (no-op) 530 --> node_network5node_network54Constant_1_output_0 {  }
//---- Layer Normalization  operator op_531
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network5node_network53Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network5node_network53Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network5node_network54LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network5node_network54Constant_output_0[axis_1] * invStdDev * (tensor_node_network5node_network53Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network5node_network54Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network5node_network55Relu_output_0[id] = ((tensor_node_network5node_network54LayerNormalization_output_0[id] > 0 )? tensor_node_network5node_network54LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_533 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network5node_network57Relu_output_0[y_index + k] = tensor_node_network56bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network5node_network57Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network56weight, tensor_node_network5node_network55Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network5node_network57Relu_output_0[id] = ((tensor_node_network5node_network57Relu_output_0[id] > 0 )? tensor_node_network5node_network57Relu_output_0[id] : 0);
   }

//--------- Concat op_534 --> Concat_42_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_42_output_0[idxOut+iC] = tensor_node_network5node_network57Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_42_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_535 --> Gather_32_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_32_output_0[y_index] = tensor_Concat_42_output_0[x_index];
      }
   }
//--------- Gather op_536 --> Gather_33_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_33_output_0[y_index] = tensor_Concat_42_output_0[x_index];
      }
   }

//--------- Concat op_537 --> Concat_43_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_43_output_0[idxOut+iC] = tensor_edge_network5edge_network57Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_43_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_43_output_0[idxOut+iC] = tensor_Gather_32_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_43_output_0[idxOut+iC] = tensor_Gather_33_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_538 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network6edge_network60Gemm_output_0[y_index + k] = tensor_edge_network60bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network6edge_network60Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network60weight, tensor_Concat_43_output_0, 1,nullptr);
// ---- Constant (no-op) 539 --> edge_network6edge_network61Constant_output_0 {  }
// ---- Constant (no-op) 540 --> edge_network6edge_network61Constant_1_output_0 {  }
//---- Layer Normalization  operator op_541
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network6edge_network60Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network6edge_network60Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network6edge_network61LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network6edge_network61Constant_output_0[axis_1] * invStdDev * (tensor_edge_network6edge_network60Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network6edge_network61Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network6edge_network62Relu_output_0[id] = ((tensor_edge_network6edge_network61LayerNormalization_output_0[id] > 0 )? tensor_edge_network6edge_network61LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_543 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network6edge_network63Gemm_output_0[y_index + k] = tensor_edge_network63bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network6edge_network63Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network63weight, tensor_edge_network6edge_network62Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 544 --> edge_network6edge_network64Constant_output_0 {  }
// ---- Constant (no-op) 545 --> edge_network6edge_network64Constant_1_output_0 {  }
//---- Layer Normalization  operator op_546
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network6edge_network63Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network6edge_network63Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network6edge_network64LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network6edge_network64Constant_output_0[axis_1] * invStdDev * (tensor_edge_network6edge_network63Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network6edge_network64Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network6edge_network65Relu_output_0[id] = ((tensor_edge_network6edge_network64LayerNormalization_output_0[id] > 0 )? tensor_edge_network6edge_network64LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_548 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network6edge_network67Relu_output_0[y_index + k] = tensor_edge_network66bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network6edge_network67Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network66weight, tensor_edge_network6edge_network65Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network6edge_network67Relu_output_0[id] = ((tensor_edge_network6edge_network67Relu_output_0[id] > 0 )? tensor_edge_network6edge_network67Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 550 --> Constant_82_output_0 {  }
//--------- Gather op_551 --> Gather_34_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 553 --> Constant_83_output_0 {  }
//--------- Gather op_554 --> Gather_35_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 556 --> Constant_84_output_0 {  }
//--------- Gather op_557 --> Gather_36_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 558 --> Constant_85_output_0 {  }
// ---- Constant (no-op) 560 --> Constant_86_output_0 {  }

//--------- Concat op_562 --> Concat_44_output_0  { 2 }
// ---- Constant (no-op) 563 --> Constant_87_output_0 {  }
// ---- ConstantOfShape (no-op) 566 --> ConstantOfShape_24_output_0 {  }
// ---- Constant (no-op) 567 --> Constant_88_output_0 {  }
   
//------ Expand op_571 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_12_output_0, num_edges * 32));
// ---- Constant (no-op) 572 --> onnxUnsqueeze_704 {  }
// ---- Constant (no-op) 574 --> onnxUnsqueeze_706 {  }

//--------- Concat op_576 --> Concat_45_output_0  { 2 }
// ---- Constant (no-op) 577 --> onnxUnsqueeze_709 {  }
// ---- Constant (no-op) 579 --> onnxUnsqueeze_711 {  }

//--------- Concat op_581 --> Concat_46_output_0  { 2 }

//--------- ConstantOfShape 582 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_25_output_0, tensor_ConstantOfShape_25_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 584 --> Constant_89_output_0 {  }
///------- Slice operator 585---> Slice_12_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_12_output_0 = tensor_edge_network6edge_network67Relu_output_0;
   
//-------- ScatterElements  --- 586
   std::copy(tensor_ConstantOfShape_25_output_0, tensor_ConstantOfShape_25_output_0 + num_spacepoints * 32, tensor_ScatterElements_12_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_12_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_12_output_0[outIndex] = tensor_ScatterElements_12_output_0[outIndex] + tensor_Slice_12_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 587 --> Constant_90_output_0 {  }
// ---- Constant (no-op) 589 --> Constant_91_output_0 {  }

//--------- Concat op_591 --> Concat_47_output_0  { 2 }
// ---- Constant (no-op) 592 --> Constant_92_output_0 {  }
// ---- ConstantOfShape (no-op) 595 --> ConstantOfShape_26_output_0 {  }
// ---- Constant (no-op) 596 --> Constant_93_output_0 {  }
   
//------ Expand op_600 --> { num_edges , 32 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 32 }, std::span<int64_t>(tensor_Expand_13_output_0, num_edges * 32));

//--------- ConstantOfShape 601 --> { num_spacepoints , 32 }
   std::fill(tensor_ConstantOfShape_27_output_0, tensor_ConstantOfShape_27_output_0 + num_spacepoints * 32, 0);
// ---- Constant (no-op) 603 --> Constant_94_output_0 {  }
///------- Slice operator 604---> Slice_13_output_0 { num_edges , 32 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_13_output_0 = tensor_edge_network6edge_network67Relu_output_0;
   
//-------- ScatterElements  --- 605
   std::copy(tensor_ConstantOfShape_27_output_0, tensor_ConstantOfShape_27_output_0 + num_spacepoints * 32, tensor_ScatterElements_13_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 32 * i0;
      for (int i1 = 0; i1 < 32; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_13_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 32*iAxis + i1;
         tensor_ScatterElements_13_output_0[outIndex] = tensor_ScatterElements_13_output_0[outIndex] + tensor_Slice_13_output_0[updateIndex];
      }
   }

//--------- Concat op_606 --> Concat_48_output_0  { num_spacepoints , 128 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 128*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_48_output_0[idxOut+iC] = tensor_ScatterElements_12_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_48_output_0[idxOut+iC] = tensor_ScatterElements_13_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_48_output_0[idxOut+iC] = tensor_Concat_42_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_607 { num_spacepoints , 128 } * { 32 , 128 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network6node_network60Gemm_output_0[y_index + k] = tensor_node_network60bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network6node_network60Gemm_output_0, true, false, 32, num_spacepoints, 128, 1, tensor_node_network60weight, tensor_Concat_48_output_0, 1,nullptr);
// ---- Constant (no-op) 608 --> node_network6node_network61Constant_output_0 {  }
// ---- Constant (no-op) 609 --> node_network6node_network61Constant_1_output_0 {  }
//---- Layer Normalization  operator op_610
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network6node_network60Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network6node_network60Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network6node_network61LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network6node_network61Constant_output_0[axis_1] * invStdDev * (tensor_node_network6node_network60Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network6node_network61Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network6node_network62Relu_output_0[id] = ((tensor_node_network6node_network61LayerNormalization_output_0[id] > 0 )? tensor_node_network6node_network61LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_612 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network6node_network63Gemm_output_0[y_index + k] = tensor_node_network63bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network6node_network63Gemm_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network63weight, tensor_node_network6node_network62Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 613 --> node_network6node_network64Constant_output_0 {  }
// ---- Constant (no-op) 614 --> node_network6node_network64Constant_1_output_0 {  }
//---- Layer Normalization  operator op_615
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_node_network6node_network63Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_node_network6node_network63Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_node_network6node_network64LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_node_network6node_network64Constant_output_0[axis_1] * invStdDev * (tensor_node_network6node_network63Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_node_network6node_network64Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network6node_network65Relu_output_0[id] = ((tensor_node_network6node_network64LayerNormalization_output_0[id] > 0 )? tensor_node_network6node_network64LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_617 { num_spacepoints , 32 } * { 32 , 32 } -> { num_spacepoints , 32 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_node_network6node_network67Relu_output_0[y_index + k] = tensor_node_network66bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network6node_network67Relu_output_0, true, false, 32, num_spacepoints, 32, 1, tensor_node_network66weight, tensor_node_network6node_network65Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 32 ; id++){
      tensor_node_network6node_network67Relu_output_0[id] = ((tensor_node_network6node_network67Relu_output_0[id] > 0 )? tensor_node_network6node_network67Relu_output_0[id] : 0);
   }

//--------- Concat op_618 --> Concat_49_output_0  { num_spacepoints , 64 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 64*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_49_output_0[idxOut+iC] = tensor_node_network6node_network67Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_49_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn1+iC];
         }
   }
//--------- Gather op_619 --> Gather_37_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_37_output_0[y_index] = tensor_Concat_49_output_0[x_index];
      }
   }
//--------- Gather op_620 --> Gather_38_output_0  { num_edges , 64 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 64; j_1++) {
         size_t y_index = i_0 * 64 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 64 +  j_1;
         tensor_Gather_38_output_0[y_index] = tensor_Concat_49_output_0[x_index];
      }
   }

//--------- Concat op_621 --> Concat_50_output_0  { num_edges , 192 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 192*i0;
         int idxIn0 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_50_output_0[idxOut+iC] = tensor_edge_network6edge_network67Relu_output_0[idxIn0+iC];
         }
         idxOut += 32;
         int idxIn1 = 32*i0;
         for (size_t iC = 0; iC < 32; ++iC) {
            tensor_Concat_50_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn1+iC];
         }
         idxOut += 32;
         int idxIn2 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_50_output_0[idxOut+iC] = tensor_Gather_37_output_0[idxIn2+iC];
         }
         idxOut += 64;
         int idxIn3 = 64*i0;
         for (size_t iC = 0; iC < 64; ++iC) {
            tensor_Concat_50_output_0[idxOut+iC] = tensor_Gather_38_output_0[idxIn3+iC];
         }
   }

//--------- Gemm op_622 { num_edges , 192 } * { 32 , 192 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network7edge_network70Gemm_output_0[y_index + k] = tensor_edge_network70bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network7edge_network70Gemm_output_0, true, false, 32, num_edges, 192, 1, tensor_edge_network70weight, tensor_Concat_50_output_0, 1,nullptr);
// ---- Constant (no-op) 623 --> edge_network7edge_network71Constant_output_0 {  }
// ---- Constant (no-op) 624 --> edge_network7edge_network71Constant_1_output_0 {  }
//---- Layer Normalization  operator op_625
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network7edge_network70Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network7edge_network70Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network7edge_network71LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network7edge_network71Constant_output_0[axis_1] * invStdDev * (tensor_edge_network7edge_network70Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network7edge_network71Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network7edge_network72Relu_output_0[id] = ((tensor_edge_network7edge_network71LayerNormalization_output_0[id] > 0 )? tensor_edge_network7edge_network71LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_627 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network7edge_network73Gemm_output_0[y_index + k] = tensor_edge_network73bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network7edge_network73Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network73weight, tensor_edge_network7edge_network72Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 628 --> edge_network7edge_network74Constant_output_0 {  }
// ---- Constant (no-op) 629 --> edge_network7edge_network74Constant_1_output_0 {  }
//---- Layer Normalization  operator op_630
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_network7edge_network73Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_network7edge_network73Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_network7edge_network74LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_network7edge_network74Constant_output_0[axis_1] * invStdDev * (tensor_edge_network7edge_network73Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_network7edge_network74Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network7edge_network75Relu_output_0[id] = ((tensor_edge_network7edge_network74LayerNormalization_output_0[id] > 0 )? tensor_edge_network7edge_network74LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_632 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_network7edge_network77Relu_output_0[y_index + k] = tensor_edge_network76bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network7edge_network77Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_network76weight, tensor_edge_network7edge_network75Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_network7edge_network77Relu_output_0[id] = ((tensor_edge_network7edge_network77Relu_output_0[id] > 0 )? tensor_edge_network7edge_network77Relu_output_0[id] : 0);
   }

//--------- Gemm op_633 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_decoderedge_decoder1Relu_output_0[y_index + k] = tensor_edge_decoder0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_decoderedge_decoder1Relu_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_decoder0weight, tensor_edge_network7edge_network77Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_decoderedge_decoder1Relu_output_0[id] = ((tensor_edge_decoderedge_decoder1Relu_output_0[id] > 0 )? tensor_edge_decoderedge_decoder1Relu_output_0[id] : 0);
   }

//--------- Gemm op_634 { num_edges , 32 } * { 32 , 32 } -> { num_edges , 32 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 32 * j;
      for (size_t k = 0; k < 32; k++) { 
         tensor_edge_output_transformedge_output_transform0Gemm_output_0[y_index + k] = tensor_edge_output_transform0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_output_transformedge_output_transform0Gemm_output_0, true, false, 32, num_edges, 32, 1, tensor_edge_output_transform0weight, tensor_edge_decoderedge_decoder1Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 635 --> edge_output_transformedge_output_transform1Constant_output_0 {  }
// ---- Constant (no-op) 636 --> edge_output_transformedge_output_transform1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_637
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++) {
         mean += tensor_edge_output_transformedge_output_transform0Gemm_output_0[axis_0 * 32 + axis_1];
      }
      mean  /= float(32);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         float tmp = tensor_edge_output_transformedge_output_transform0Gemm_output_0[axis_0 * 32 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(32) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 32; axis_1++){
         tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0[axis_0 * 32 + axis_1] = tensor_edge_output_transformedge_output_transform1Constant_output_0[axis_1] * invStdDev * (tensor_edge_output_transformedge_output_transform0Gemm_output_0[axis_0 * 32 + axis_1] - mean) + tensor_edge_output_transformedge_output_transform1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 32 ; id++){
      tensor_edge_output_transformedge_output_transform2Relu_output_0[id] = ((tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0[id] > 0 )? tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_639 { num_edges , 32 } * { 1 , 32 } -> { num_edges , 1 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = j;
      for (size_t k = 0; k < 1; k++) { 
         tensor_edge_output_transformedge_output_transform3Gemm_output_0[y_index + k] = tensor_edge_output_transform3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_output_transformedge_output_transform3Gemm_output_0, true, false, 1, num_edges, 32, 1, tensor_edge_output_transform3weight, tensor_edge_output_transformedge_output_transform2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 640 --> Constant_95_output_0 {  }
   ///--------Squeeze operator 641 --> { num_edges }
   std::copy( tensor_edge_output_transformedge_output_transform3Gemm_output_0, tensor_edge_output_transformedge_output_transform3Gemm_output_0 + num_edges, tensor_Squeeze_output_0);

//------ CAST 642 ---> output  { num_edges }
   for (int id = 0; id < num_edges ; id++){
      tensor_output[id] = static_cast<float>(tensor_Squeeze_output_0[id]);
   }
   using TMVA::Experimental::SOFIE::UTILITY::FillOutput;

   FillOutput(tensor_output, output_tensor_output, num_edges);
}



std::vector<float> infer(size_t num_spacepoints,float const* tensor_x,size_t num_edges,int64_t const* tensor_edge_index,float const* tensor_edge_attr){
   std::vector<float > output_tensor_output;

   if (num_spacepoints > fNum_spacepoints || num_edges > fNum_edges   ) {
      throw std::runtime_error("TMVA-SOFIE: dynamic input tensor shape parameters exceed the initialized maximum allowed shape.");
   }
   doInfer(num_spacepoints,tensor_x,num_edges,tensor_edge_index,tensor_edge_attr, output_tensor_output );
   return {output_tensor_output};
}
};   // end of Session

} //TMVA_SOFIE_gnn

#endif  // ROOT_TMVA_SOFIE_GNN
