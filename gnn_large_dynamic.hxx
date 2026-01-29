//Code generated automatically by TMVA for Inference of Model file [gnn_large.onnx] at [Thu Jan 29 14:50:44 2026] 

#ifndef ROOT_TMVA_SOFIE_GNN_LARGE
#define ROOT_TMVA_SOFIE_GNN_LARGE

#include <algorithm>
#include <cmath>
#include <vector>
#include "TMVA/SOFIE_common.hxx"
#include <fstream>

namespace TMVA_SOFIE_gnn_large{
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
std::vector<float> fTensor_edge_output_transformedge_output_transform1Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_output_transformedge_output_transform1Constant_output_0 = fTensor_edge_output_transformedge_output_transform1Constant_output_0.data();
std::vector<float> fTensor_edge_network7edge_network71Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network7edge_network71Constant_1_output_0 = fTensor_edge_network7edge_network71Constant_1_output_0.data();
std::vector<float> fTensor_node_network6node_network61Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network6node_network61Constant_output_0 = fTensor_node_network6node_network61Constant_output_0.data();
int64_t tensor_Mul_13_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_decoderedge_decoder1Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_decoderedge_decoder1Constant_output_0 = fTensor_edge_decoderedge_decoder1Constant_output_0.data();
int64_t tensor_Unsqueeze_55_output_0[1] = { 128};
int64_t tensor_Constant_84_output_0[1] = { 1};
int64_t tensor_Constant_83_output_0[1] = { 0};
int64_t tensor_Constant_82_output_0[1] = { 0};
std::vector<float> fTensor_edge_network6edge_network64Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network6edge_network64Constant_1_output_0 = fTensor_edge_network6edge_network64Constant_1_output_0.data();
std::vector<float> fTensor_edge_network6edge_network64Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network6edge_network64Constant_output_0 = fTensor_edge_network6edge_network64Constant_output_0.data();
std::vector<float> fTensor_edge_network6edge_network61Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network6edge_network61Constant_1_output_0 = fTensor_edge_network6edge_network61Constant_1_output_0.data();
std::vector<float> fTensor_node_network5node_network54Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network5node_network54Constant_output_0 = fTensor_node_network5node_network54Constant_output_0.data();
std::vector<float> fTensor_node_network5node_network51Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network5node_network51Constant_1_output_0 = fTensor_node_network5node_network51Constant_1_output_0.data();
std::vector<float> fTensor_node_network5node_network51Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network5node_network51Constant_output_0 = fTensor_node_network5node_network51Constant_output_0.data();
int64_t tensor_Mul_11_output_0[2] = { -1, -1};
int64_t tensor_Unsqueeze_49_output_0[1] = { 128};
int64_t tensor_Unsqueeze_45_output_0[1] = { 128};
int64_t tensor_Mul_10_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network7edge_network74Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network7edge_network74Constant_1_output_0 = fTensor_edge_network7edge_network74Constant_1_output_0.data();
int64_t tensor_Constant_93_output_0[1] = { -1};
int64_t tensor_Constant_75_output_0[1] = { -1};
int64_t tensor_Unsqueeze_43_output_0[1] = { 128};
std::vector<float> fTensor_edge_decoderedge_decoder1Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_decoderedge_decoder1Constant_1_output_0 = fTensor_edge_decoderedge_decoder1Constant_1_output_0.data();
int64_t tensor_Constant_71_output_0[1] = { 1};
int64_t tensor_Constant_69_output_0[1] = { 0};
std::vector<float> fTensor_edge_network5edge_network54Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network5edge_network54Constant_output_0 = fTensor_edge_network5edge_network54Constant_output_0.data();
std::vector<float> fTensor_node_network4node_network44Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network4node_network44Constant_output_0 = fTensor_node_network4node_network44Constant_output_0.data();
std::vector<float> fTensor_node_network4node_network41Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network4node_network41Constant_1_output_0 = fTensor_node_network4node_network41Constant_1_output_0.data();
std::vector<float> fTensor_node_network4node_network41Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network4node_network41Constant_output_0 = fTensor_node_network4node_network41Constant_output_0.data();
int64_t tensor_Constant_68_output_0[2] = { 0, 0};
int64_t tensor_Mul_9_output_0[2] = { -1, -1};
int64_t tensor_Shape_33_output_0[1] = { 2};
int64_t tensor_Constant_89_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_41_output_0[1] = { 128};
int64_t tensor_Constant_63_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_39_output_0[1] = { 128};
int64_t tensor_Gather_31_output_0[1] = { 128};
int64_t tensor_Unsqueeze_37_output_0[1] = { 128};
int64_t tensor_Constant_62_output_0[1] = { -1};
int64_t tensor_Shape_31_output_0[1] = { 2};
int64_t tensor_Unsqueeze_35_output_0[1] = { 128};
int64_t tensor_Gather_26_output_0[1] = { 128};
int64_t tensor_Constant_58_output_0[1] = { 1};
int64_t tensor_Constant_56_output_0[1] = { 0};
std::vector<float> fTensor_edge_network4edge_network44Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network4edge_network44Constant_output_0 = fTensor_edge_network4edge_network44Constant_output_0.data();
std::vector<float> fTensor_edge_network4edge_network41Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network4edge_network41Constant_output_0 = fTensor_edge_network4edge_network41Constant_output_0.data();
std::vector<float> fTensor_node_network3node_network34Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network3node_network34Constant_1_output_0 = fTensor_node_network3node_network34Constant_1_output_0.data();
std::vector<float> fTensor_node_network3node_network34Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network3node_network34Constant_output_0 = fTensor_node_network3node_network34Constant_output_0.data();
std::vector<float> fTensor_node_network3node_network31Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network3node_network31Constant_output_0 = fTensor_node_network3node_network31Constant_output_0.data();
int64_t tensor_Constant_55_output_0[2] = { 0, 0};
std::vector<float> fTensor_edge_network5edge_network51Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network5edge_network51Constant_output_0 = fTensor_edge_network5edge_network51Constant_output_0.data();
int64_t tensor_Unsqueeze_33_output_0[1] = { 128};
int64_t tensor_Constant_50_output_0[2] = { 0, 0};
std::vector<float> fTensor_node_network5node_network54Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network5node_network54Constant_1_output_0 = fTensor_node_network5node_network54Constant_1_output_0.data();
int64_t tensor_Unsqueeze_31_output_0[1] = { 128};
std::vector<float> fTensor_edge_network7edge_network74Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network7edge_network74Constant_output_0 = fTensor_edge_network7edge_network74Constant_output_0.data();
int64_t tensor_Mul_6_output_0[2] = { -1, -1};
int64_t tensor_Constant_49_output_0[1] = { -1};
std::vector<float> fTensor_edge_encoderedge_encoder4Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_encoderedge_encoder4Constant_1_output_0 = fTensor_edge_encoderedge_encoder4Constant_1_output_0.data();
std::vector<float> fTensor_edge_encoderedge_encoder1Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_encoderedge_encoder1Constant_1_output_0 = fTensor_edge_encoderedge_encoder1Constant_1_output_0.data();
int64_t tensor_Shape_5_output_0[1] = { 2};
std::vector<float> fTensor_node_encodernode_encoder4Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_encodernode_encoder4Constant_output_0 = fTensor_node_encodernode_encoder4Constant_output_0.data();
std::vector<float> fTensor_node_network6node_network61Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network6node_network61Constant_1_output_0 = fTensor_node_network6node_network61Constant_1_output_0.data();
std::vector<float> fTensor_node_encodernode_encoder1Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_encodernode_encoder1Constant_output_0 = fTensor_node_encodernode_encoder1Constant_output_0.data();
int64_t tensor_Constant_output_0[1] = { 0};
int64_t tensor_Gather_6_output_0[1] = { 128};
std::vector<float> fTensor_edge_decoder3weight = std::vector<float>(16384);
float * tensor_edge_decoder3weight = fTensor_edge_decoder3weight.data();
std::vector<float> fTensor_edge_decoder0bias = std::vector<float>(128);
float * tensor_edge_decoder0bias = fTensor_edge_decoder0bias.data();
std::vector<float> fTensor_node_encodernode_encoder1Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_encodernode_encoder1Constant_1_output_0 = fTensor_node_encodernode_encoder1Constant_1_output_0.data();
std::vector<float> fTensor_edge_network56weight = std::vector<float>(16384);
float * tensor_edge_network56weight = fTensor_edge_network56weight.data();
std::vector<float> fTensor_edge_output_transform3weight = std::vector<float>(128);
float * tensor_edge_output_transform3weight = fTensor_edge_output_transform3weight.data();
int64_t tensor_Mul_7_output_0[2] = { -1, -1};
std::vector<float> fTensor_node_network56weight = std::vector<float>(16384);
float * tensor_node_network56weight = fTensor_node_network56weight.data();
std::vector<float> fTensor_node_network03bias = std::vector<float>(128);
float * tensor_node_network03bias = fTensor_node_network03bias.data();
std::vector<float> fTensor_node_network53bias = std::vector<float>(128);
float * tensor_node_network53bias = fTensor_node_network53bias.data();
std::vector<float> fTensor_node_network50bias = std::vector<float>(128);
float * tensor_node_network50bias = fTensor_node_network50bias.data();
std::vector<float> fTensor_edge_network0edge_network04Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network0edge_network04Constant_1_output_0 = fTensor_edge_network0edge_network04Constant_1_output_0.data();
std::vector<float> fTensor_edge_network10weight = std::vector<float>(49152);
float * tensor_edge_network10weight = fTensor_edge_network10weight.data();
int64_t tensor_Shape_45_output_0[1] = { 2};
int64_t tensor_Constant_80_output_0[1] = { -1};
std::vector<float> fTensor_node_network46bias = std::vector<float>(128);
float * tensor_node_network46bias = fTensor_node_network46bias.data();
std::vector<float> fTensor_node_network2node_network24Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network2node_network24Constant_1_output_0 = fTensor_node_network2node_network24Constant_1_output_0.data();
std::vector<float> fTensor_edge_decoder6bias = std::vector<float>(128);
float * tensor_edge_decoder6bias = fTensor_edge_decoder6bias.data();
std::vector<float> fTensor_edge_network16bias = std::vector<float>(128);
float * tensor_edge_network16bias = fTensor_edge_network16bias.data();
std::vector<float> fTensor_edge_decoder0weight = std::vector<float>(16384);
float * tensor_edge_decoder0weight = fTensor_edge_decoder0weight.data();
int64_t tensor_Unsqueeze_47_output_0[1] = { 128};
std::vector<float> fTensor_node_network20bias = std::vector<float>(128);
float * tensor_node_network20bias = fTensor_node_network20bias.data();
std::vector<float> fTensor_node_network6node_network64Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network6node_network64Constant_output_0 = fTensor_node_network6node_network64Constant_output_0.data();
std::vector<float> fTensor_node_network50weight = std::vector<float>(49152);
float * tensor_node_network50weight = fTensor_node_network50weight.data();
std::vector<float> fTensor_node_network33bias = std::vector<float>(128);
float * tensor_node_network33bias = fTensor_node_network33bias.data();
std::vector<float> fTensor_edge_network0edge_network01Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network0edge_network01Constant_output_0 = fTensor_edge_network0edge_network01Constant_output_0.data();
std::vector<float> fTensor_node_network43weight = std::vector<float>(16384);
float * tensor_node_network43weight = fTensor_node_network43weight.data();
std::vector<float> fTensor_edge_network63weight = std::vector<float>(16384);
float * tensor_edge_network63weight = fTensor_edge_network63weight.data();
std::vector<float> fTensor_edge_network5edge_network51Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network5edge_network51Constant_1_output_0 = fTensor_edge_network5edge_network51Constant_1_output_0.data();
std::vector<float> fTensor_node_network26bias = std::vector<float>(128);
float * tensor_node_network26bias = fTensor_node_network26bias.data();
std::vector<float> fTensor_node_network26weight = std::vector<float>(16384);
float * tensor_node_network26weight = fTensor_node_network26weight.data();
std::vector<float> fTensor_edge_network3edge_network31Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network3edge_network31Constant_1_output_0 = fTensor_edge_network3edge_network31Constant_1_output_0.data();
std::vector<float> fTensor_node_network1node_network14Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network1node_network14Constant_output_0 = fTensor_node_network1node_network14Constant_output_0.data();
std::vector<float> fTensor_node_network10bias = std::vector<float>(128);
float * tensor_node_network10bias = fTensor_node_network10bias.data();
std::vector<float> fTensor_edge_network3edge_network31Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network3edge_network31Constant_output_0 = fTensor_edge_network3edge_network31Constant_output_0.data();
std::vector<float> fTensor_node_network10weight = std::vector<float>(49152);
float * tensor_node_network10weight = fTensor_node_network10weight.data();
std::vector<float> fTensor_edge_output_transformedge_output_transform1Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_output_transformedge_output_transform1Constant_1_output_0 = fTensor_edge_output_transformedge_output_transform1Constant_1_output_0.data();
std::vector<float> fTensor_edge_network0edge_network04Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network0edge_network04Constant_output_0 = fTensor_edge_network0edge_network04Constant_output_0.data();
int64_t tensor_Constant_19_output_0[1] = { 1};
std::vector<float> fTensor_node_network06weight = std::vector<float>(16384);
float * tensor_node_network06weight = fTensor_node_network06weight.data();
std::vector<float> fTensor_node_network66weight = std::vector<float>(16384);
float * tensor_node_network66weight = fTensor_node_network66weight.data();
std::vector<float> fTensor_node_network53weight = std::vector<float>(16384);
float * tensor_node_network53weight = fTensor_node_network53weight.data();
std::vector<float> fTensor_node_network03weight = std::vector<float>(16384);
float * tensor_node_network03weight = fTensor_node_network03weight.data();
std::vector<float> fTensor_node_encoder6bias = std::vector<float>(128);
float * tensor_node_encoder6bias = fTensor_node_encoder6bias.data();
std::vector<float> fTensor_edge_decoder3bias = std::vector<float>(128);
float * tensor_edge_decoder3bias = fTensor_edge_decoder3bias.data();
std::vector<float> fTensor_node_network00bias = std::vector<float>(128);
float * tensor_node_network00bias = fTensor_node_network00bias.data();
std::vector<float> fTensor_edge_network03weight = std::vector<float>(16384);
float * tensor_edge_network03weight = fTensor_edge_network03weight.data();
std::vector<float> fTensor_edge_network76bias = std::vector<float>(128);
float * tensor_edge_network76bias = fTensor_edge_network76bias.data();
std::vector<float> fTensor_node_network13bias = std::vector<float>(128);
float * tensor_node_network13bias = fTensor_node_network13bias.data();
std::vector<float> fTensor_node_network23weight = std::vector<float>(16384);
float * tensor_node_network23weight = fTensor_node_network23weight.data();
std::vector<float> fTensor_edge_network60bias = std::vector<float>(128);
float * tensor_edge_network60bias = fTensor_edge_network60bias.data();
std::vector<float> fTensor_node_network0node_network04Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network0node_network04Constant_1_output_0 = fTensor_node_network0node_network04Constant_1_output_0.data();
std::vector<float> fTensor_edge_encoder6bias = std::vector<float>(128);
float * tensor_edge_encoder6bias = fTensor_edge_encoder6bias.data();
std::vector<float> fTensor_edge_decoderedge_decoder4Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_decoderedge_decoder4Constant_output_0 = fTensor_edge_decoderedge_decoder4Constant_output_0.data();
std::vector<float> fTensor_edge_network36weight = std::vector<float>(16384);
float * tensor_edge_network36weight = fTensor_edge_network36weight.data();
std::vector<float> fTensor_node_network40bias = std::vector<float>(128);
float * tensor_node_network40bias = fTensor_node_network40bias.data();
std::vector<float> fTensor_edge_network20weight = std::vector<float>(49152);
float * tensor_edge_network20weight = fTensor_edge_network20weight.data();
std::vector<float> fTensor_edge_network23weight = std::vector<float>(16384);
float * tensor_edge_network23weight = fTensor_edge_network23weight.data();
std::vector<float> fTensor_edge_network13weight = std::vector<float>(16384);
float * tensor_edge_network13weight = fTensor_edge_network13weight.data();
std::vector<float> fTensor_edge_encoderedge_encoder1Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_encoderedge_encoder1Constant_output_0 = fTensor_edge_encoderedge_encoder1Constant_output_0.data();
std::vector<float> fTensor_edge_network30weight = std::vector<float>(49152);
float * tensor_edge_network30weight = fTensor_edge_network30weight.data();
std::vector<float> fTensor_node_network43bias = std::vector<float>(128);
float * tensor_node_network43bias = fTensor_node_network43bias.data();
std::vector<float> fTensor_edge_network33bias = std::vector<float>(128);
float * tensor_edge_network33bias = fTensor_edge_network33bias.data();
std::vector<float> fTensor_edge_network36bias = std::vector<float>(128);
float * tensor_edge_network36bias = fTensor_edge_network36bias.data();
int64_t tensor_Gather_36_output_0[1] = { 128};
std::vector<float> fTensor_edge_network06bias = std::vector<float>(128);
float * tensor_edge_network06bias = fTensor_edge_network06bias.data();
int64_t tensor_Constant_2_output_0[1] = { 0};
int64_t tensor_Unsqueeze_13_output_0[1] = { 128};
std::vector<float> fTensor_edge_network06weight = std::vector<float>(16384);
float * tensor_edge_network06weight = fTensor_edge_network06weight.data();
std::vector<float> fTensor_edge_network0edge_network01Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network0edge_network01Constant_1_output_0 = fTensor_edge_network0edge_network01Constant_1_output_0.data();
std::vector<float> fTensor_edge_network00bias = std::vector<float>(128);
float * tensor_edge_network00bias = fTensor_edge_network00bias.data();
int64_t tensor_Shape_40_output_0[1] = { 2};
std::vector<float> fTensor_edge_network73bias = std::vector<float>(128);
float * tensor_edge_network73bias = fTensor_edge_network73bias.data();
std::vector<float> fTensor_edge_network66weight = std::vector<float>(16384);
float * tensor_edge_network66weight = fTensor_edge_network66weight.data();
std::vector<float> fTensor_node_network16weight = std::vector<float>(16384);
float * tensor_node_network16weight = fTensor_node_network16weight.data();
int64_t tensor_Constant_76_output_0[2] = { 0, 0};
std::vector<float> fTensor_edge_network2edge_network24Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network2edge_network24Constant_1_output_0 = fTensor_edge_network2edge_network24Constant_1_output_0.data();
std::vector<float> fTensor_node_network60weight = std::vector<float>(49152);
float * tensor_node_network60weight = fTensor_node_network60weight.data();
std::vector<float> fTensor_edge_encoder6weight = std::vector<float>(16384);
float * tensor_edge_encoder6weight = fTensor_edge_encoder6weight.data();
std::vector<float> fTensor_edge_network73weight = std::vector<float>(16384);
float * tensor_edge_network73weight = fTensor_edge_network73weight.data();
std::vector<float> fTensor_node_encoder3bias = std::vector<float>(128);
float * tensor_node_encoder3bias = fTensor_node_encoder3bias.data();
int64_t tensor_Unsqueeze_6_output_0[1] = { 128};
std::vector<float> fTensor_node_network36bias = std::vector<float>(128);
float * tensor_node_network36bias = fTensor_node_network36bias.data();
std::vector<float> fTensor_edge_network4edge_network41Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network4edge_network41Constant_1_output_0 = fTensor_edge_network4edge_network41Constant_1_output_0.data();
std::vector<float> fTensor_node_network63bias = std::vector<float>(128);
float * tensor_node_network63bias = fTensor_node_network63bias.data();
int64_t tensor_Constant_4_output_0[1] = { 0};
std::vector<float> fTensor_edge_output_transform0weight = std::vector<float>(16384);
float * tensor_edge_output_transform0weight = fTensor_edge_output_transform0weight.data();
std::vector<float> fTensor_edge_network60weight = std::vector<float>(49152);
float * tensor_edge_network60weight = fTensor_edge_network60weight.data();
int64_t tensor_Shape_19_output_0[1] = { 2};
std::vector<float> fTensor_node_encoder3weight = std::vector<float>(16384);
float * tensor_node_encoder3weight = fTensor_node_encoder3weight.data();
std::vector<float> fTensor_node_network3node_network31Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network3node_network31Constant_1_output_0 = fTensor_node_network3node_network31Constant_1_output_0.data();
std::vector<float> fTensor_edge_network20bias = std::vector<float>(128);
float * tensor_edge_network20bias = fTensor_edge_network20bias.data();
std::vector<float> fTensor_node_network63weight = std::vector<float>(16384);
float * tensor_node_network63weight = fTensor_node_network63weight.data();
int64_t tensor_Constant_57_output_0[1] = { 0};
std::vector<float> fTensor_node_network46weight = std::vector<float>(16384);
float * tensor_node_network46weight = fTensor_node_network46weight.data();
std::vector<float> fTensor_edge_network63bias = std::vector<float>(128);
float * tensor_edge_network63bias = fTensor_edge_network63bias.data();
int64_t tensor_Constant_1_output_0[1] = { 1};
int64_t tensor_Unsqueeze_53_output_0[1] = { 128};
std::vector<float> fTensor_node_network36weight = std::vector<float>(16384);
float * tensor_node_network36weight = fTensor_node_network36weight.data();
std::vector<float> fTensor_edge_decoder6weight = std::vector<float>(16384);
float * tensor_edge_decoder6weight = fTensor_edge_decoder6weight.data();
std::vector<float> fTensor_node_network06bias = std::vector<float>(128);
float * tensor_node_network06bias = fTensor_node_network06bias.data();
int64_t tensor_Constant_43_output_0[1] = { 0};
std::vector<float> fTensor_edge_network00weight = std::vector<float>(49152);
float * tensor_edge_network00weight = fTensor_edge_network00weight.data();
std::vector<float> fTensor_edge_encoder0bias = std::vector<float>(128);
float * tensor_edge_encoder0bias = fTensor_edge_encoder0bias.data();
int64_t tensor_Unsqueeze_9_output_0[1] = { 128};
std::vector<float> fTensor_edge_network10bias = std::vector<float>(128);
float * tensor_edge_network10bias = fTensor_edge_network10bias.data();
std::vector<float> fTensor_edge_network13bias = std::vector<float>(128);
float * tensor_edge_network13bias = fTensor_edge_network13bias.data();
std::vector<float> fTensor_edge_encoder0weight = std::vector<float>(768);
float * tensor_edge_encoder0weight = fTensor_edge_encoder0weight.data();
std::vector<float> fTensor_edge_network1edge_network11Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network1edge_network11Constant_output_0 = fTensor_edge_network1edge_network11Constant_output_0.data();
std::vector<float> fTensor_edge_network53weight = std::vector<float>(16384);
float * tensor_edge_network53weight = fTensor_edge_network53weight.data();
std::vector<float> fTensor_edge_encoder3weight = std::vector<float>(16384);
float * tensor_edge_encoder3weight = fTensor_edge_encoder3weight.data();
std::vector<float> fTensor_edge_network76weight = std::vector<float>(16384);
float * tensor_edge_network76weight = fTensor_edge_network76weight.data();
int64_t tensor_Shape_26_output_0[1] = { 2};
int64_t tensor_Mul_output_0[2] = { -1, -1};
int64_t tensor_Mul_2_output_0[2] = { -1, -1};
int64_t tensor_Mul_5_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network66bias = std::vector<float>(128);
float * tensor_edge_network66bias = fTensor_edge_network66bias.data();
std::vector<float> fTensor_node_encoder0bias = std::vector<float>(128);
float * tensor_node_encoder0bias = fTensor_node_encoder0bias.data();
std::vector<float> fTensor_node_encoder6weight = std::vector<float>(16384);
float * tensor_node_encoder6weight = fTensor_node_encoder6weight.data();
std::vector<float> fTensor_edge_network30bias = std::vector<float>(128);
float * tensor_edge_network30bias = fTensor_edge_network30bias.data();
int64_t tensor_Shape_38_output_0[1] = { 2};
int64_t tensor_Constant_67_output_0[1] = { -1};
std::vector<float> fTensor_node_network0node_network01Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network0node_network01Constant_output_0 = fTensor_node_network0node_network01Constant_output_0.data();
std::vector<float> fTensor_node_network4node_network44Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network4node_network44Constant_1_output_0 = fTensor_node_network4node_network44Constant_1_output_0.data();
int64_t tensor_Constant_54_output_0[1] = { -1};
int64_t tensor_Mul_8_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network70weight = std::vector<float>(49152);
float * tensor_edge_network70weight = fTensor_edge_network70weight.data();
std::vector<float> fTensor_edge_encoder3bias = std::vector<float>(128);
float * tensor_edge_encoder3bias = fTensor_edge_encoder3bias.data();
std::vector<float> fTensor_edge_network40bias = std::vector<float>(128);
float * tensor_edge_network40bias = fTensor_edge_network40bias.data();
std::vector<float> fTensor_node_network23bias = std::vector<float>(128);
float * tensor_node_network23bias = fTensor_node_network23bias.data();
std::vector<float> fTensor_edge_network2edge_network24Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network2edge_network24Constant_output_0 = fTensor_edge_network2edge_network24Constant_output_0.data();
std::vector<float> fTensor_edge_network43weight = std::vector<float>(16384);
float * tensor_edge_network43weight = fTensor_edge_network43weight.data();
std::vector<float> fTensor_edge_output_transform3bias = std::vector<float>(1);
float * tensor_edge_output_transform3bias = fTensor_edge_output_transform3bias.data();
std::vector<float> fTensor_node_network00weight = std::vector<float>(49152);
float * tensor_node_network00weight = fTensor_node_network00weight.data();
std::vector<float> fTensor_edge_network53bias = std::vector<float>(128);
float * tensor_edge_network53bias = fTensor_edge_network53bias.data();
int64_t tensor_Constant_70_output_0[1] = { 0};
int64_t tensor_Unsqueeze_15_output_0[1] = { 128};
int64_t tensor_Shape_47_output_0[1] = { 2};
std::vector<float> fTensor_edge_network43bias = std::vector<float>(128);
float * tensor_edge_network43bias = fTensor_edge_network43bias.data();
std::vector<float> fTensor_node_network30bias = std::vector<float>(128);
float * tensor_node_network30bias = fTensor_node_network30bias.data();
std::vector<float> fTensor_node_network40weight = std::vector<float>(49152);
float * tensor_node_network40weight = fTensor_node_network40weight.data();
std::vector<float> fTensor_edge_network46bias = std::vector<float>(128);
float * tensor_edge_network46bias = fTensor_edge_network46bias.data();
int64_t tensor_Unsqueeze_29_output_0[1] = { 128};
std::vector<float> fTensor_node_network33weight = std::vector<float>(16384);
float * tensor_node_network33weight = fTensor_node_network33weight.data();
std::vector<float> fTensor_edge_network50bias = std::vector<float>(128);
float * tensor_edge_network50bias = fTensor_edge_network50bias.data();
std::vector<float> fTensor_edge_network03bias = std::vector<float>(128);
float * tensor_edge_network03bias = fTensor_edge_network03bias.data();
std::vector<float> fTensor_edge_network46weight = std::vector<float>(16384);
float * tensor_edge_network46weight = fTensor_edge_network46weight.data();
std::vector<float> fTensor_node_network56bias = std::vector<float>(128);
float * tensor_node_network56bias = fTensor_node_network56bias.data();
std::vector<float> fTensor_node_encoder0weight = std::vector<float>(1536);
float * tensor_node_encoder0weight = fTensor_node_encoder0weight.data();
std::vector<float> fTensor_edge_network40weight = std::vector<float>(49152);
float * tensor_edge_network40weight = fTensor_edge_network40weight.data();
std::vector<float> fTensor_node_network16bias = std::vector<float>(128);
float * tensor_node_network16bias = fTensor_node_network16bias.data();
int64_t tensor_Mul_4_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network56bias = std::vector<float>(128);
float * tensor_edge_network56bias = fTensor_edge_network56bias.data();
std::vector<float> fTensor_edge_network23bias = std::vector<float>(128);
float * tensor_edge_network23bias = fTensor_edge_network23bias.data();
std::vector<float> fTensor_edge_network33weight = std::vector<float>(16384);
float * tensor_edge_network33weight = fTensor_edge_network33weight.data();
int64_t tensor_Constant_5_output_0[1] = { 1};
std::vector<float> fTensor_edge_network1edge_network11Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network1edge_network11Constant_1_output_0 = fTensor_edge_network1edge_network11Constant_1_output_0.data();
int64_t tensor_Shape_3_output_0[1] = { 2};
int64_t tensor_Constant_9_output_0[1] = { -1};
int64_t tensor_Constant_42_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_4_output_0[1] = { 128};
std::vector<float> fTensor_node_network6node_network64Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network6node_network64Constant_1_output_0 = fTensor_node_network6node_network64Constant_1_output_0.data();
int64_t tensor_Unsqueeze_17_output_0[1] = { 128};
std::vector<float> fTensor_edge_network26weight = std::vector<float>(16384);
float * tensor_edge_network26weight = fTensor_edge_network26weight.data();
int64_t tensor_Constant_10_output_0[2] = { 0, 0};
std::vector<float> fTensor_edge_decoderedge_decoder4Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_decoderedge_decoder4Constant_1_output_0 = fTensor_edge_decoderedge_decoder4Constant_1_output_0.data();
std::vector<float> fTensor_node_encodernode_encoder4Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_encodernode_encoder4Constant_1_output_0 = fTensor_node_encodernode_encoder4Constant_1_output_0.data();
int64_t tensor_Constant_15_output_0[1] = { -1};
std::vector<float> fTensor_edge_encoderedge_encoder4Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_encoderedge_encoder4Constant_output_0 = fTensor_edge_encoderedge_encoder4Constant_output_0.data();
int64_t tensor_Constant_18_output_0[1] = { 0};
int64_t tensor_Gather_21_output_0[1] = { 128};
int64_t tensor_Mul_1_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network4edge_network44Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network4edge_network44Constant_1_output_0 = fTensor_edge_network4edge_network44Constant_1_output_0.data();
int64_t tensor_Constant_16_output_0[2] = { 0, 0};
std::vector<float> fTensor_node_network66bias = std::vector<float>(128);
float * tensor_node_network66bias = fTensor_node_network66bias.data();
int64_t tensor_Constant_24_output_0[2] = { 0, 0};
std::vector<float> fTensor_node_network0node_network01Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network0node_network01Constant_1_output_0 = fTensor_node_network0node_network01Constant_1_output_0.data();
std::vector<float> fTensor_node_network0node_network04Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network0node_network04Constant_output_0 = fTensor_node_network0node_network04Constant_output_0.data();
std::vector<float> fTensor_edge_network1edge_network14Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network1edge_network14Constant_1_output_0 = fTensor_edge_network1edge_network14Constant_1_output_0.data();
std::vector<float> fTensor_edge_output_transform0bias = std::vector<float>(128);
float * tensor_edge_output_transform0bias = fTensor_edge_output_transform0bias.data();
int64_t tensor_Gather_11_output_0[1] = { 128};
int64_t tensor_Unsqueeze_11_output_0[1] = { 128};
std::vector<float> fTensor_edge_network26bias = std::vector<float>(128);
float * tensor_edge_network26bias = fTensor_edge_network26bias.data();
int64_t tensor_Shape_10_output_0[1] = { 2};
int64_t tensor_Constant_23_output_0[1] = { -1};
std::vector<float> fTensor_edge_network50weight = std::vector<float>(49152);
float * tensor_edge_network50weight = fTensor_edge_network50weight.data();
std::vector<float> fTensor_edge_network3edge_network34Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network3edge_network34Constant_output_0 = fTensor_edge_network3edge_network34Constant_output_0.data();
std::vector<float> fTensor_node_network2node_network21Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network2node_network21Constant_1_output_0 = fTensor_node_network2node_network21Constant_1_output_0.data();
int64_t tensor_Constant_17_output_0[1] = { 0};
int64_t tensor_Unsqueeze_27_output_0[1] = { 128};
std::vector<float> fTensor_node_network30weight = std::vector<float>(49152);
float * tensor_node_network30weight = fTensor_node_network30weight.data();
int64_t tensor_Mul_3_output_0[2] = { -1, -1};
int64_t tensor_Unsqueeze_21_output_0[1] = { 128};
int64_t tensor_Constant_94_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_51_output_0[1] = { 128};
int64_t tensor_Shape_12_output_0[1] = { 2};
int64_t tensor_Unsqueeze_57_output_0[1] = { 128};
int64_t tensor_Constant_28_output_0[1] = { -1};
std::vector<float> fTensor_edge_network16weight = std::vector<float>(16384);
float * tensor_edge_network16weight = fTensor_edge_network16weight.data();
std::vector<float> fTensor_edge_network6edge_network61Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network6edge_network61Constant_output_0 = fTensor_edge_network6edge_network61Constant_output_0.data();
std::vector<float> fTensor_node_network60bias = std::vector<float>(128);
float * tensor_node_network60bias = fTensor_node_network60bias.data();
int64_t tensor_Constant_29_output_0[2] = { 0, 0};
std::vector<float> fTensor_node_network1node_network11Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network1node_network11Constant_1_output_0 = fTensor_node_network1node_network11Constant_1_output_0.data();
std::vector<float> fTensor_node_network1node_network14Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_node_network1node_network14Constant_1_output_0 = fTensor_node_network1node_network14Constant_1_output_0.data();
int64_t tensor_Mul_12_output_0[2] = { -1, -1};
std::vector<float> fTensor_edge_network2edge_network21Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network2edge_network21Constant_output_0 = fTensor_edge_network2edge_network21Constant_output_0.data();
std::vector<float> fTensor_edge_network2edge_network21Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network2edge_network21Constant_1_output_0 = fTensor_edge_network2edge_network21Constant_1_output_0.data();
std::vector<float> fTensor_node_network20weight = std::vector<float>(49152);
float * tensor_node_network20weight = fTensor_node_network20weight.data();
int64_t tensor_Unsqueeze_2_output_0[1] = { 128};
int64_t tensor_Constant_30_output_0[1] = { 0};
int64_t tensor_Constant_88_output_0[1] = { -1};
std::vector<float> fTensor_node_network1node_network11Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network1node_network11Constant_output_0 = fTensor_node_network1node_network11Constant_output_0.data();
int64_t tensor_Constant_31_output_0[1] = { 0};
int64_t tensor_Constant_32_output_0[1] = { 1};
int64_t tensor_Gather_16_output_0[1] = { 128};
int64_t tensor_Unsqueeze_19_output_0[1] = { 128};
int64_t tensor_Shape_17_output_0[1] = { 2};
std::vector<float> fTensor_edge_network5edge_network54Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network5edge_network54Constant_1_output_0 = fTensor_edge_network5edge_network54Constant_1_output_0.data();
int64_t tensor_Constant_36_output_0[1] = { -1};
int64_t tensor_Unsqueeze_23_output_0[1] = { 128};
std::vector<float> fTensor_edge_network7edge_network71Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network7edge_network71Constant_output_0 = fTensor_edge_network7edge_network71Constant_output_0.data();
std::vector<float> fTensor_node_network13weight = std::vector<float>(16384);
float * tensor_node_network13weight = fTensor_node_network13weight.data();
int64_t tensor_Constant_37_output_0[2] = { 0, 0};
int64_t tensor_Constant_81_output_0[2] = { 0, 0};
int64_t tensor_Unsqueeze_25_output_0[1] = { 128};
std::vector<float> fTensor_edge_network1edge_network14Constant_output_0 = std::vector<float>(128, 1);
float * tensor_edge_network1edge_network14Constant_output_0 = fTensor_edge_network1edge_network14Constant_output_0.data();
int64_t tensor_Constant_41_output_0[1] = { -1};
std::vector<float> fTensor_node_network2node_network21Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network2node_network21Constant_output_0 = fTensor_node_network2node_network21Constant_output_0.data();
std::vector<float> fTensor_node_network2node_network24Constant_output_0 = std::vector<float>(128, 1);
float * tensor_node_network2node_network24Constant_output_0 = fTensor_node_network2node_network24Constant_output_0.data();
std::vector<float> fTensor_edge_network3edge_network34Constant_1_output_0 = std::vector<float>(128, 0);
float * tensor_edge_network3edge_network34Constant_1_output_0 = fTensor_edge_network3edge_network34Constant_1_output_0.data();
std::vector<float> fTensor_edge_network70bias = std::vector<float>(128);
float * tensor_edge_network70bias = fTensor_edge_network70bias.data();
int64_t tensor_Constant_44_output_0[1] = { 0};
int64_t tensor_Constant_45_output_0[1] = { 1};
int64_t tensor_Shape_24_output_0[1] = { 2};

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

 // Allocating memory for intermediate tensor Concat_1_output_0 with size 16 bytes
int64_t* tensor_Concat_1_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 32);

 // Allocating memory for intermediate tensor Reshape_output_0 with size 16 bytes
int64_t* tensor_Reshape_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Unsqueeze_3_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_3_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Concat_2_output_0 with size 16 bytes
int64_t* tensor_Concat_2_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 32);

 // Allocating memory for intermediate tensor Unsqueeze_5_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_5_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Concat_3_output_0 with size 16 bytes
int64_t* tensor_Concat_3_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 48);

 // Allocating memory for intermediate tensor Shape_4_output_0 with size 16 bytes
int64_t* tensor_Shape_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 8);

 // Allocating memory for intermediate tensor Unsqueeze_8_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_8_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_4_output_0 with size 16 bytes
int64_t* tensor_Concat_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

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

 // Allocating memory for intermediate tensor Concat_7_output_0 with size 16 bytes
int64_t* tensor_Concat_7_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 96);

 // Allocating memory for intermediate tensor Reshape_2_output_0 with size 16 bytes
int64_t* tensor_Reshape_2_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Unsqueeze_12_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_12_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 72);

 // Allocating memory for intermediate tensor Concat_8_output_0 with size 16 bytes
int64_t* tensor_Concat_8_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 96);

 // Allocating memory for intermediate tensor Unsqueeze_14_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_14_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 72);

 // Allocating memory for intermediate tensor Concat_9_output_0 with size 16 bytes
int64_t* tensor_Concat_9_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 112);

 // Allocating memory for intermediate tensor Shape_11_output_0 with size 16 bytes
int64_t* tensor_Shape_11_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 64);

 // Allocating memory for intermediate tensor Unsqueeze_16_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_16_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_10_output_0 with size 16 bytes
int64_t* tensor_Concat_10_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

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

 // Allocating memory for intermediate tensor Concat_13_output_0 with size 16 bytes
int64_t* tensor_Concat_13_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 160);

 // Allocating memory for intermediate tensor Reshape_4_output_0 with size 16 bytes
int64_t* tensor_Reshape_4_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Unsqueeze_20_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_20_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 136);

 // Allocating memory for intermediate tensor Concat_14_output_0 with size 16 bytes
int64_t* tensor_Concat_14_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 160);

 // Allocating memory for intermediate tensor Unsqueeze_22_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_22_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 136);

 // Allocating memory for intermediate tensor Concat_15_output_0 with size 16 bytes
int64_t* tensor_Concat_15_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 176);

 // Allocating memory for intermediate tensor Shape_18_output_0 with size 16 bytes
int64_t* tensor_Shape_18_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 128);

 // Allocating memory for intermediate tensor Unsqueeze_24_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_24_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_16_output_0 with size 16 bytes
int64_t* tensor_Concat_16_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

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

 // Allocating memory for intermediate tensor Concat_19_output_0 with size 16 bytes
int64_t* tensor_Concat_19_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 224);

 // Allocating memory for intermediate tensor Reshape_6_output_0 with size 16 bytes
int64_t* tensor_Reshape_6_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Unsqueeze_28_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_28_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 200);

 // Allocating memory for intermediate tensor Concat_20_output_0 with size 16 bytes
int64_t* tensor_Concat_20_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 224);

 // Allocating memory for intermediate tensor Unsqueeze_30_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_30_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 200);

 // Allocating memory for intermediate tensor Concat_21_output_0 with size 16 bytes
int64_t* tensor_Concat_21_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 240);

 // Allocating memory for intermediate tensor Shape_25_output_0 with size 16 bytes
int64_t* tensor_Shape_25_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 192);

 // Allocating memory for intermediate tensor Unsqueeze_32_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_32_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_22_output_0 with size 16 bytes
int64_t* tensor_Concat_22_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

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

 // Allocating memory for intermediate tensor Concat_25_output_0 with size 16 bytes
int64_t* tensor_Concat_25_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 288);

 // Allocating memory for intermediate tensor Reshape_8_output_0 with size 16 bytes
int64_t* tensor_Reshape_8_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Unsqueeze_36_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_36_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 264);

 // Allocating memory for intermediate tensor Concat_26_output_0 with size 16 bytes
int64_t* tensor_Concat_26_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 288);

 // Allocating memory for intermediate tensor Unsqueeze_38_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_38_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 264);

 // Allocating memory for intermediate tensor Concat_27_output_0 with size 16 bytes
int64_t* tensor_Concat_27_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 304);

 // Allocating memory for intermediate tensor Shape_32_output_0 with size 16 bytes
int64_t* tensor_Shape_32_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 256);

 // Allocating memory for intermediate tensor Unsqueeze_40_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_40_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_28_output_0 with size 16 bytes
int64_t* tensor_Concat_28_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

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

 // Allocating memory for intermediate tensor Concat_31_output_0 with size 16 bytes
int64_t* tensor_Concat_31_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 352);

 // Allocating memory for intermediate tensor Reshape_10_output_0 with size 16 bytes
int64_t* tensor_Reshape_10_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Unsqueeze_44_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_44_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 328);

 // Allocating memory for intermediate tensor Concat_32_output_0 with size 16 bytes
int64_t* tensor_Concat_32_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 352);

 // Allocating memory for intermediate tensor Unsqueeze_46_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_46_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 328);

 // Allocating memory for intermediate tensor Concat_33_output_0 with size 16 bytes
int64_t* tensor_Concat_33_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 368);

 // Allocating memory for intermediate tensor Shape_39_output_0 with size 16 bytes
int64_t* tensor_Shape_39_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 320);

 // Allocating memory for intermediate tensor Unsqueeze_48_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_48_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_34_output_0 with size 16 bytes
int64_t* tensor_Concat_34_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

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

 // Allocating memory for intermediate tensor Concat_37_output_0 with size 16 bytes
int64_t* tensor_Concat_37_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 416);

 // Allocating memory for intermediate tensor Reshape_12_output_0 with size 16 bytes
int64_t* tensor_Reshape_12_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Unsqueeze_52_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_52_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 392);

 // Allocating memory for intermediate tensor Concat_38_output_0 with size 16 bytes
int64_t* tensor_Concat_38_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 416);

 // Allocating memory for intermediate tensor Unsqueeze_54_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_54_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 392);

 // Allocating memory for intermediate tensor Concat_39_output_0 with size 16 bytes
int64_t* tensor_Concat_39_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 432);

 // Allocating memory for intermediate tensor Shape_46_output_0 with size 16 bytes
int64_t* tensor_Shape_46_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 384);

 // Allocating memory for intermediate tensor Unsqueeze_56_output_0 with size 8 bytes
int64_t* tensor_Unsqueeze_56_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 0);

 // Allocating memory for intermediate tensor Concat_40_output_0 with size 16 bytes
int64_t* tensor_Concat_40_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 448);

 // Allocating memory for intermediate tensor Reshape_13_output_0 with size 16 bytes
int64_t* tensor_Reshape_13_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 464);

 // Allocating memory for intermediate tensor Shape_48_output_0 with size 16 bytes
int64_t* tensor_Shape_48_output_0 = reinterpret_cast<int64_t*>(fIntermediateMemoryPool.data() + 464);
//--- declare the dynamic tensors
float * tensor_output = nullptr;
float * tensor_edge_output_transformedge_output_transform0Gemm_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder4LayerNormalization_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder2Relu_output_0 = nullptr;
float * tensor_edge_network7edge_network74LayerNormalization_output_0 = nullptr;
float * tensor_edge_network7edge_network73Gemm_output_0 = nullptr;
float * tensor_edge_network7edge_network72Relu_output_0 = nullptr;
float * tensor_edge_network7edge_network70Gemm_output_0 = nullptr;
float * tensor_Gather_38_output_0 = nullptr;
float * tensor_Gather_37_output_0 = nullptr;
float * tensor_node_network6node_network64LayerNormalization_output_0 = nullptr;
float * tensor_Concat_41_output_0 = nullptr;
float * tensor_Slice_13_output_0 = nullptr;
int64_t * tensor_Expand_13_output_0 = nullptr;
float * tensor_ConstantOfShape_25_output_0 = nullptr;
int64_t * tensor_Expand_12_output_0 = nullptr;
float * tensor_edge_network6edge_network63Gemm_output_0 = nullptr;
float * tensor_node_network6node_network65Relu_output_0 = nullptr;
float * tensor_edge_network6edge_network62Relu_output_0 = nullptr;
float * tensor_Concat_36_output_0 = nullptr;
float * tensor_Gather_32_output_0 = nullptr;
float * tensor_node_network5node_network55Relu_output_0 = nullptr;
float * tensor_node_network5node_network54LayerNormalization_output_0 = nullptr;
float * tensor_node_network5node_network51LayerNormalization_output_0 = nullptr;
float * tensor_node_network5node_network50Gemm_output_0 = nullptr;
float * tensor_Concat_35_output_0 = nullptr;
float * tensor_edge_network6edge_network61LayerNormalization_output_0 = nullptr;
float * tensor_ScatterElements_11_output_0 = nullptr;
float * tensor_ConstantOfShape_21_output_0 = nullptr;
int64_t * tensor_Expand_10_output_0 = nullptr;
float * tensor_edge_network5edge_network55Relu_output_0 = nullptr;
float * tensor_edge_network5edge_network54LayerNormalization_output_0 = nullptr;
float * tensor_edge_network5edge_network53Gemm_output_0 = nullptr;
float * tensor_edge_network5edge_network51LayerNormalization_output_0 = nullptr;
float * tensor_edge_network5edge_network50Gemm_output_0 = nullptr;
float * tensor_Gather_27_output_0 = nullptr;
float * tensor_node_network4node_network47Relu_output_0 = nullptr;
float * tensor_ConstantOfShape_27_output_0 = nullptr;
float * tensor_node_network4node_network41LayerNormalization_output_0 = nullptr;
float * tensor_edge_network5edge_network57Relu_output_0 = nullptr;
float * tensor_Concat_29_output_0 = nullptr;
float * tensor_edge_output_transformedge_output_transform3Gemm_output_0 = nullptr;
float * tensor_ScatterElements_9_output_0 = nullptr;
float * tensor_Slice_9_output_0 = nullptr;
float * tensor_ConstantOfShape_19_output_0 = nullptr;
int64_t * tensor_Expand_11_output_0 = nullptr;
float * tensor_Slice_8_output_0 = nullptr;
int64_t * tensor_Expand_8_output_0 = nullptr;
float * tensor_edge_network4edge_network45Relu_output_0 = nullptr;
float * tensor_edge_network4edge_network43Gemm_output_0 = nullptr;
float * tensor_node_network6node_network60Gemm_output_0 = nullptr;
float * tensor_Slice_2_output_0 = nullptr;
float * tensor_ConstantOfShape_5_output_0 = nullptr;
float * tensor_edge_network1edge_network12Relu_output_0 = nullptr;
int64_t * tensor_Expand_7_output_0 = nullptr;
float * tensor_Gather_8_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder3Gemm_output_0 = nullptr;
float * tensor_Concat_42_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder2Relu_output_0 = nullptr;
float * tensor_edge_network2edge_network20Gemm_output_0 = nullptr;
float * tensor_edge_network7edge_network75Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network17Relu_output_0 = nullptr;
float * tensor_edge_network5edge_network52Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network10Gemm_output_0 = nullptr;
float * tensor_node_network0node_network05Relu_output_0 = nullptr;
float * tensor_Gather_7_output_0 = nullptr;
float * tensor_Concat_17_output_0 = nullptr;
float * tensor_ScatterElements_10_output_0 = nullptr;
float * tensor_ScatterElements_6_output_0 = nullptr;
float * tensor_node_network0node_network03Gemm_output_0 = nullptr;
float * tensor_node_network4node_network45Relu_output_0 = nullptr;
float * tensor_node_network0node_network01LayerNormalization_output_0 = nullptr;
float * tensor_edge_network7edge_network77Relu_output_0 = nullptr;
float * tensor_node_network0node_network00Gemm_output_0 = nullptr;
float * tensor_node_network4node_network43Gemm_output_0 = nullptr;
float * tensor_node_network2node_network24LayerNormalization_output_0 = nullptr;
float * tensor_edge_network1edge_network15Relu_output_0 = nullptr;
int64_t * tensor_Unsqueeze_7_output_0 = nullptr;
float * tensor_edge_network4edge_network44LayerNormalization_output_0 = nullptr;
float * tensor_edge_network1edge_network14LayerNormalization_output_0 = nullptr;
float * tensor_Concat_30_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder3Gemm_output_0 = nullptr;
float * tensor_node_network0node_network04LayerNormalization_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder1LayerNormalization_output_0 = nullptr;
int64_t * tensor_Gather_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder0Gemm_output_0 = nullptr;
float * tensor_node_network4node_network42Relu_output_0 = nullptr;
float * tensor_edge_network4edge_network40Gemm_output_0 = nullptr;
float * tensor_ScatterElements_output_0 = nullptr;
float * tensor_node_encodernode_encoder2Relu_output_0 = nullptr;
float * tensor_node_encodernode_encoder1LayerNormalization_output_0 = nullptr;
float * tensor_edge_network0edge_network01LayerNormalization_output_0 = nullptr;
float * tensor_ConstantOfShape_13_output_0 = nullptr;
float * tensor_edge_network6edge_network60Gemm_output_0 = nullptr;
float * tensor_edge_network3edge_network35Relu_output_0 = nullptr;
float * tensor_node_network6node_network61LayerNormalization_output_0 = nullptr;
float * tensor_Concat_6_output_0 = nullptr;
float * tensor_node_network0node_network02Relu_output_0 = nullptr;
float * tensor_edge_network6edge_network67Relu_output_0 = nullptr;
float * tensor_ScatterElements_1_output_0 = nullptr;
float * tensor_ConstantOfShape_17_output_0 = nullptr;
float * tensor_ScatterElements_3_output_0 = nullptr;
float * tensor_edge_network6edge_network64LayerNormalization_output_0 = nullptr;
float * tensor_Slice_6_output_0 = nullptr;
float * tensor_edge_network4edge_network41LayerNormalization_output_0 = nullptr;
float * tensor_ScatterElements_2_output_0 = nullptr;
int64_t * tensor_Expand_9_output_0 = nullptr;
float * tensor_Concat_18_output_0 = nullptr;
float * tensor_node_encodernode_encoder4LayerNormalization_output_0 = nullptr;
float * tensor_node_encodernode_encoder3Gemm_output_0 = nullptr;
int64_t * tensor_Expand_1_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder7Relu_output_0 = nullptr;
float * tensor_ConstantOfShape_11_output_0 = nullptr;
float * tensor_edge_network0edge_network02Relu_output_0 = nullptr;
float * tensor_Concat_output_0 = nullptr;
float * tensor_Gather_12_output_0 = nullptr;
float * tensor_edge_network0edge_network00Gemm_output_0 = nullptr;
float * tensor_node_encodernode_encoder7Relu_output_0 = nullptr;
float * tensor_edge_network1edge_network13Gemm_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder7Relu_output_0 = nullptr;
float * tensor_ConstantOfShape_3_output_0 = nullptr;
float * tensor_edge_network0edge_network03Gemm_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder1LayerNormalization_output_0 = nullptr;
float * tensor_edge_network0edge_network04LayerNormalization_output_0 = nullptr;
float * tensor_Slice_output_0 = nullptr;
float * tensor_Gather_3_output_0 = nullptr;
float * tensor_edge_network6edge_network65Relu_output_0 = nullptr;
float * tensor_edge_network0edge_network05Relu_output_0 = nullptr;
int64_t * tensor_Expand_output_0 = nullptr;
float * tensor_ScatterElements_12_output_0 = nullptr;
int64_t * tensor_Expand_6_output_0 = nullptr;
int64_t * tensor_Expand_3_output_0 = nullptr;
float * tensor_Gather_17_output_0 = nullptr;
float * tensor_Squeeze_output_0 = nullptr;
float * tensor_Concat_12_output_0 = nullptr;
float * tensor_ConstantOfShape_1_output_0 = nullptr;
float * tensor_node_network0node_network07Relu_output_0 = nullptr;
float * tensor_node_network3node_network31LayerNormalization_output_0 = nullptr;
float * tensor_node_network3node_network32Relu_output_0 = nullptr;
float * tensor_Concat_5_output_0 = nullptr;
float * tensor_edge_network1edge_network11LayerNormalization_output_0 = nullptr;
float * tensor_ConstantOfShape_15_output_0 = nullptr;
float * tensor_Slice_1_output_0 = nullptr;
int64_t * tensor_Unsqueeze_output_0 = nullptr;
float * tensor_ConstantOfShape_7_output_0 = nullptr;
float * tensor_node_encodernode_encoder0Gemm_output_0 = nullptr;
float * tensor_Slice_3_output_0 = nullptr;
int64_t * tensor_Expand_2_output_0 = nullptr;
float * tensor_Concat_11_output_0 = nullptr;
float * tensor_Gather_33_output_0 = nullptr;
float * tensor_edge_encoderedge_encoder5Relu_output_0 = nullptr;
float * tensor_node_network1node_network10Gemm_output_0 = nullptr;
float * tensor_edge_network4edge_network47Relu_output_0 = nullptr;
float * tensor_Slice_4_output_0 = nullptr;
float * tensor_edge_output_transformedge_output_transform2Relu_output_0 = nullptr;
float * tensor_node_network6node_network62Relu_output_0 = nullptr;
float * tensor_edge_network0edge_network07Relu_output_0 = nullptr;
float * tensor_node_network1node_network11LayerNormalization_output_0 = nullptr;
int64_t * tensor_Gather_1_output_0 = nullptr;
float * tensor_Gather_22_output_0 = nullptr;
float * tensor_node_network1node_network12Relu_output_0 = nullptr;
float * tensor_Slice_10_output_0 = nullptr;
float * tensor_node_network2node_network22Relu_output_0 = nullptr;
float * tensor_node_network4node_network40Gemm_output_0 = nullptr;
float * tensor_node_network1node_network13Gemm_output_0 = nullptr;
float * tensor_node_network1node_network14LayerNormalization_output_0 = nullptr;
float * tensor_Gather_13_output_0 = nullptr;
float * tensor_edge_network7edge_network71LayerNormalization_output_0 = nullptr;
float * tensor_edge_network3edge_network32Relu_output_0 = nullptr;
float * tensor_node_network2node_network21LayerNormalization_output_0 = nullptr;
float * tensor_node_network2node_network25Relu_output_0 = nullptr;
float * tensor_node_network1node_network17Relu_output_0 = nullptr;
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
float * tensor_edge_network3edge_network37Relu_output_0 = nullptr;
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
float * tensor_edge_decoderedge_decoder0Gemm_output_0 = nullptr;
float * tensor_Gather_2_output_0 = nullptr;
float * tensor_Slice_7_output_0 = nullptr;
float * tensor_Concat_23_output_0 = nullptr;
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
float * tensor_node_network5node_network52Relu_output_0 = nullptr;
float * tensor_Gather_23_output_0 = nullptr;
float * tensor_edge_decoderedge_decoder5Relu_output_0 = nullptr;
float * tensor_Concat_24_output_0 = nullptr;
//--- dynamic tensors pool
std::vector<char> fDynamicMemoryPool;


size_t fNum_edges;
size_t fNum_spacepoints;


Session(std::string filename ="gnn_large.dat",
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
   ReadTensorFromStream(f, tensor_edge_decoder3weight, "tensor_edge_decoder3weight", 16384);
   ReadTensorFromStream(f, tensor_edge_decoder0bias, "tensor_edge_decoder0bias", 128);
   ReadTensorFromStream(f, tensor_edge_network56weight, "tensor_edge_network56weight", 16384);
   ReadTensorFromStream(f, tensor_edge_output_transform3weight, "tensor_edge_output_transform3weight", 128);
   ReadTensorFromStream(f, tensor_node_network56weight, "tensor_node_network56weight", 16384);
   ReadTensorFromStream(f, tensor_node_network03bias, "tensor_node_network03bias", 128);
   ReadTensorFromStream(f, tensor_node_network53bias, "tensor_node_network53bias", 128);
   ReadTensorFromStream(f, tensor_node_network50bias, "tensor_node_network50bias", 128);
   ReadTensorFromStream(f, tensor_edge_network10weight, "tensor_edge_network10weight", 49152);
   ReadTensorFromStream(f, tensor_node_network46bias, "tensor_node_network46bias", 128);
   ReadTensorFromStream(f, tensor_edge_decoder6bias, "tensor_edge_decoder6bias", 128);
   ReadTensorFromStream(f, tensor_edge_network16bias, "tensor_edge_network16bias", 128);
   ReadTensorFromStream(f, tensor_edge_decoder0weight, "tensor_edge_decoder0weight", 16384);
   ReadTensorFromStream(f, tensor_node_network20bias, "tensor_node_network20bias", 128);
   ReadTensorFromStream(f, tensor_node_network50weight, "tensor_node_network50weight", 49152);
   ReadTensorFromStream(f, tensor_node_network33bias, "tensor_node_network33bias", 128);
   ReadTensorFromStream(f, tensor_node_network43weight, "tensor_node_network43weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network63weight, "tensor_edge_network63weight", 16384);
   ReadTensorFromStream(f, tensor_node_network26bias, "tensor_node_network26bias", 128);
   ReadTensorFromStream(f, tensor_node_network26weight, "tensor_node_network26weight", 16384);
   ReadTensorFromStream(f, tensor_node_network10bias, "tensor_node_network10bias", 128);
   ReadTensorFromStream(f, tensor_node_network10weight, "tensor_node_network10weight", 49152);
   ReadTensorFromStream(f, tensor_node_network06weight, "tensor_node_network06weight", 16384);
   ReadTensorFromStream(f, tensor_node_network66weight, "tensor_node_network66weight", 16384);
   ReadTensorFromStream(f, tensor_node_network53weight, "tensor_node_network53weight", 16384);
   ReadTensorFromStream(f, tensor_node_network03weight, "tensor_node_network03weight", 16384);
   ReadTensorFromStream(f, tensor_node_encoder6bias, "tensor_node_encoder6bias", 128);
   ReadTensorFromStream(f, tensor_edge_decoder3bias, "tensor_edge_decoder3bias", 128);
   ReadTensorFromStream(f, tensor_node_network00bias, "tensor_node_network00bias", 128);
   ReadTensorFromStream(f, tensor_edge_network03weight, "tensor_edge_network03weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network76bias, "tensor_edge_network76bias", 128);
   ReadTensorFromStream(f, tensor_node_network13bias, "tensor_node_network13bias", 128);
   ReadTensorFromStream(f, tensor_node_network23weight, "tensor_node_network23weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network60bias, "tensor_edge_network60bias", 128);
   ReadTensorFromStream(f, tensor_edge_encoder6bias, "tensor_edge_encoder6bias", 128);
   ReadTensorFromStream(f, tensor_edge_network36weight, "tensor_edge_network36weight", 16384);
   ReadTensorFromStream(f, tensor_node_network40bias, "tensor_node_network40bias", 128);
   ReadTensorFromStream(f, tensor_edge_network20weight, "tensor_edge_network20weight", 49152);
   ReadTensorFromStream(f, tensor_edge_network23weight, "tensor_edge_network23weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network13weight, "tensor_edge_network13weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network30weight, "tensor_edge_network30weight", 49152);
   ReadTensorFromStream(f, tensor_node_network43bias, "tensor_node_network43bias", 128);
   ReadTensorFromStream(f, tensor_edge_network33bias, "tensor_edge_network33bias", 128);
   ReadTensorFromStream(f, tensor_edge_network36bias, "tensor_edge_network36bias", 128);
   ReadTensorFromStream(f, tensor_edge_network06bias, "tensor_edge_network06bias", 128);
   ReadTensorFromStream(f, tensor_edge_network06weight, "tensor_edge_network06weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network00bias, "tensor_edge_network00bias", 128);
   ReadTensorFromStream(f, tensor_edge_network73bias, "tensor_edge_network73bias", 128);
   ReadTensorFromStream(f, tensor_edge_network66weight, "tensor_edge_network66weight", 16384);
   ReadTensorFromStream(f, tensor_node_network16weight, "tensor_node_network16weight", 16384);
   ReadTensorFromStream(f, tensor_node_network60weight, "tensor_node_network60weight", 49152);
   ReadTensorFromStream(f, tensor_edge_encoder6weight, "tensor_edge_encoder6weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network73weight, "tensor_edge_network73weight", 16384);
   ReadTensorFromStream(f, tensor_node_encoder3bias, "tensor_node_encoder3bias", 128);
   ReadTensorFromStream(f, tensor_node_network36bias, "tensor_node_network36bias", 128);
   ReadTensorFromStream(f, tensor_node_network63bias, "tensor_node_network63bias", 128);
   ReadTensorFromStream(f, tensor_edge_output_transform0weight, "tensor_edge_output_transform0weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network60weight, "tensor_edge_network60weight", 49152);
   ReadTensorFromStream(f, tensor_node_encoder3weight, "tensor_node_encoder3weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network20bias, "tensor_edge_network20bias", 128);
   ReadTensorFromStream(f, tensor_node_network63weight, "tensor_node_network63weight", 16384);
   ReadTensorFromStream(f, tensor_node_network46weight, "tensor_node_network46weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network63bias, "tensor_edge_network63bias", 128);
   ReadTensorFromStream(f, tensor_node_network36weight, "tensor_node_network36weight", 16384);
   ReadTensorFromStream(f, tensor_edge_decoder6weight, "tensor_edge_decoder6weight", 16384);
   ReadTensorFromStream(f, tensor_node_network06bias, "tensor_node_network06bias", 128);
   ReadTensorFromStream(f, tensor_edge_network00weight, "tensor_edge_network00weight", 49152);
   ReadTensorFromStream(f, tensor_edge_encoder0bias, "tensor_edge_encoder0bias", 128);
   ReadTensorFromStream(f, tensor_edge_network10bias, "tensor_edge_network10bias", 128);
   ReadTensorFromStream(f, tensor_edge_network13bias, "tensor_edge_network13bias", 128);
   ReadTensorFromStream(f, tensor_edge_encoder0weight, "tensor_edge_encoder0weight", 768);
   ReadTensorFromStream(f, tensor_edge_network53weight, "tensor_edge_network53weight", 16384);
   ReadTensorFromStream(f, tensor_edge_encoder3weight, "tensor_edge_encoder3weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network76weight, "tensor_edge_network76weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network66bias, "tensor_edge_network66bias", 128);
   ReadTensorFromStream(f, tensor_node_encoder0bias, "tensor_node_encoder0bias", 128);
   ReadTensorFromStream(f, tensor_node_encoder6weight, "tensor_node_encoder6weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network30bias, "tensor_edge_network30bias", 128);
   ReadTensorFromStream(f, tensor_edge_network70weight, "tensor_edge_network70weight", 49152);
   ReadTensorFromStream(f, tensor_edge_encoder3bias, "tensor_edge_encoder3bias", 128);
   ReadTensorFromStream(f, tensor_edge_network40bias, "tensor_edge_network40bias", 128);
   ReadTensorFromStream(f, tensor_node_network23bias, "tensor_node_network23bias", 128);
   ReadTensorFromStream(f, tensor_edge_network43weight, "tensor_edge_network43weight", 16384);
   ReadTensorFromStream(f, tensor_edge_output_transform3bias, "tensor_edge_output_transform3bias", 1);
   ReadTensorFromStream(f, tensor_node_network00weight, "tensor_node_network00weight", 49152);
   ReadTensorFromStream(f, tensor_edge_network53bias, "tensor_edge_network53bias", 128);
   ReadTensorFromStream(f, tensor_edge_network43bias, "tensor_edge_network43bias", 128);
   ReadTensorFromStream(f, tensor_node_network30bias, "tensor_node_network30bias", 128);
   ReadTensorFromStream(f, tensor_node_network40weight, "tensor_node_network40weight", 49152);
   ReadTensorFromStream(f, tensor_edge_network46bias, "tensor_edge_network46bias", 128);
   ReadTensorFromStream(f, tensor_node_network33weight, "tensor_node_network33weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network50bias, "tensor_edge_network50bias", 128);
   ReadTensorFromStream(f, tensor_edge_network03bias, "tensor_edge_network03bias", 128);
   ReadTensorFromStream(f, tensor_edge_network46weight, "tensor_edge_network46weight", 16384);
   ReadTensorFromStream(f, tensor_node_network56bias, "tensor_node_network56bias", 128);
   ReadTensorFromStream(f, tensor_node_encoder0weight, "tensor_node_encoder0weight", 1536);
   ReadTensorFromStream(f, tensor_edge_network40weight, "tensor_edge_network40weight", 49152);
   ReadTensorFromStream(f, tensor_node_network16bias, "tensor_node_network16bias", 128);
   ReadTensorFromStream(f, tensor_edge_network56bias, "tensor_edge_network56bias", 128);
   ReadTensorFromStream(f, tensor_edge_network23bias, "tensor_edge_network23bias", 128);
   ReadTensorFromStream(f, tensor_edge_network33weight, "tensor_edge_network33weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network26weight, "tensor_edge_network26weight", 16384);
   ReadTensorFromStream(f, tensor_node_network66bias, "tensor_node_network66bias", 128);
   ReadTensorFromStream(f, tensor_edge_output_transform0bias, "tensor_edge_output_transform0bias", 128);
   ReadTensorFromStream(f, tensor_edge_network26bias, "tensor_edge_network26bias", 128);
   ReadTensorFromStream(f, tensor_edge_network50weight, "tensor_edge_network50weight", 49152);
   ReadTensorFromStream(f, tensor_node_network30weight, "tensor_node_network30weight", 49152);
   ReadTensorFromStream(f, tensor_edge_network16weight, "tensor_edge_network16weight", 16384);
   ReadTensorFromStream(f, tensor_node_network60bias, "tensor_node_network60bias", 128);
   ReadTensorFromStream(f, tensor_node_network20weight, "tensor_node_network20weight", 49152);
   ReadTensorFromStream(f, tensor_node_network13weight, "tensor_node_network13weight", 16384);
   ReadTensorFromStream(f, tensor_edge_network70bias, "tensor_edge_network70bias", 128);
   f.close();

//  dynamic tensor memory management
   std::vector<TMVA::Experimental::SOFIE::TensorLifeInfo> dynamicTensorInfos;
   dynamicTensorInfos.reserve(223);
   dynamicTensorInfos.push_back( {1, 612, 8* (num_edges) }); // tensor_Gather_output_0
   dynamicTensorInfos.push_back( {3, 613, 8* (num_edges) }); // tensor_Gather_1_output_0
   dynamicTensorInfos.push_back( {4, 8, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder0Gemm_output_0
   dynamicTensorInfos.push_back( {7, 9, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {8, 10, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder2Relu_output_0
   dynamicTensorInfos.push_back( {9, 13, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder3Gemm_output_0
   dynamicTensorInfos.push_back( {12, 14, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder4LayerNormalization_output_0
   dynamicTensorInfos.push_back( {13, 15, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder5Relu_output_0
   dynamicTensorInfos.push_back( {14, 102, 4* (num_spacepoints * 128) }); // tensor_node_encodernode_encoder7Relu_output_0
   dynamicTensorInfos.push_back( {15, 19, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder0Gemm_output_0
   dynamicTensorInfos.push_back( {18, 20, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {19, 21, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder2Relu_output_0
   dynamicTensorInfos.push_back( {20, 24, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder3Gemm_output_0
   dynamicTensorInfos.push_back( {23, 25, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder4LayerNormalization_output_0
   dynamicTensorInfos.push_back( {24, 26, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder5Relu_output_0
   dynamicTensorInfos.push_back( {25, 29, 4* (num_edges * 128) }); // tensor_edge_encoderedge_encoder7Relu_output_0
   dynamicTensorInfos.push_back( {26, 29, 4* (num_edges * 128) }); // tensor_Gather_2_output_0
   dynamicTensorInfos.push_back( {27, 29, 4* (num_edges * 128) }); // tensor_Gather_3_output_0
   dynamicTensorInfos.push_back( {28, 30, 4* (num_edges * 384) }); // tensor_Concat_output_0
   dynamicTensorInfos.push_back( {29, 33, 4* (num_edges * 128) }); // tensor_edge_network0edge_network00Gemm_output_0
   dynamicTensorInfos.push_back( {32, 34, 4* (num_edges * 128) }); // tensor_edge_network0edge_network01LayerNormalization_output_0
   dynamicTensorInfos.push_back( {33, 35, 4* (num_edges * 128) }); // tensor_edge_network0edge_network02Relu_output_0
   dynamicTensorInfos.push_back( {34, 38, 4* (num_edges * 128) }); // tensor_edge_network0edge_network03Gemm_output_0
   dynamicTensorInfos.push_back( {37, 39, 4* (num_edges * 128) }); // tensor_edge_network0edge_network04LayerNormalization_output_0
   dynamicTensorInfos.push_back( {38, 40, 4* (num_edges * 128) }); // tensor_edge_network0edge_network05Relu_output_0
   dynamicTensorInfos.push_back( {39, 116, 4* (num_edges * 128) }); // tensor_edge_network0edge_network07Relu_output_0
   dynamicTensorInfos.push_back( {44, 565, 8* (num_edges) }); // tensor_Unsqueeze_output_0
   dynamicTensorInfos.push_back( {64, 80, 8* (num_edges * 128) }); // tensor_Expand_output_0
   dynamicTensorInfos.push_back( {75, 80, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_1_output_0
   dynamicTensorInfos.push_back( {79, 102, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_output_0
   dynamicTensorInfos.push_back( {81, 594, 8* (num_edges) }); // tensor_Unsqueeze_7_output_0
   dynamicTensorInfos.push_back( {95, 101, 8* (num_edges * 128) }); // tensor_Expand_1_output_0
   dynamicTensorInfos.push_back( {96, 101, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_3_output_0
   dynamicTensorInfos.push_back( {100, 102, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_1_output_0
   dynamicTensorInfos.push_back( {101, 103, 4* (num_spacepoints * 384) }); // tensor_Concat_5_output_0
   dynamicTensorInfos.push_back( {102, 106, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network00Gemm_output_0
   dynamicTensorInfos.push_back( {105, 107, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network01LayerNormalization_output_0
   dynamicTensorInfos.push_back( {106, 108, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network02Relu_output_0
   dynamicTensorInfos.push_back( {107, 111, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network03Gemm_output_0
   dynamicTensorInfos.push_back( {110, 112, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network04LayerNormalization_output_0
   dynamicTensorInfos.push_back( {111, 113, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network05Relu_output_0
   dynamicTensorInfos.push_back( {112, 185, 4* (num_spacepoints * 128) }); // tensor_node_network0node_network07Relu_output_0
   dynamicTensorInfos.push_back( {113, 116, 4* (num_edges * 128) }); // tensor_Gather_7_output_0
   dynamicTensorInfos.push_back( {114, 116, 4* (num_edges * 128) }); // tensor_Gather_8_output_0
   dynamicTensorInfos.push_back( {115, 117, 4* (num_edges * 384) }); // tensor_Concat_6_output_0
   dynamicTensorInfos.push_back( {116, 120, 4* (num_edges * 128) }); // tensor_edge_network1edge_network10Gemm_output_0
   dynamicTensorInfos.push_back( {119, 121, 4* (num_edges * 128) }); // tensor_edge_network1edge_network11LayerNormalization_output_0
   dynamicTensorInfos.push_back( {120, 122, 4* (num_edges * 128) }); // tensor_edge_network1edge_network12Relu_output_0
   dynamicTensorInfos.push_back( {121, 125, 4* (num_edges * 128) }); // tensor_edge_network1edge_network13Gemm_output_0
   dynamicTensorInfos.push_back( {124, 126, 4* (num_edges * 128) }); // tensor_edge_network1edge_network14LayerNormalization_output_0
   dynamicTensorInfos.push_back( {125, 127, 4* (num_edges * 128) }); // tensor_edge_network1edge_network15Relu_output_0
   dynamicTensorInfos.push_back( {126, 199, 4* (num_edges * 128) }); // tensor_edge_network1edge_network17Relu_output_0
   dynamicTensorInfos.push_back( {149, 165, 8* (num_edges * 128) }); // tensor_Expand_2_output_0
   dynamicTensorInfos.push_back( {160, 165, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_5_output_0
   dynamicTensorInfos.push_back( {164, 185, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_2_output_0
   dynamicTensorInfos.push_back( {178, 184, 8* (num_edges * 128) }); // tensor_Expand_3_output_0
   dynamicTensorInfos.push_back( {179, 184, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_7_output_0
   dynamicTensorInfos.push_back( {183, 185, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_3_output_0
   dynamicTensorInfos.push_back( {184, 186, 4* (num_spacepoints * 384) }); // tensor_Concat_11_output_0
   dynamicTensorInfos.push_back( {185, 189, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network10Gemm_output_0
   dynamicTensorInfos.push_back( {188, 190, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network11LayerNormalization_output_0
   dynamicTensorInfos.push_back( {189, 191, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network12Relu_output_0
   dynamicTensorInfos.push_back( {190, 194, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network13Gemm_output_0
   dynamicTensorInfos.push_back( {193, 195, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network14LayerNormalization_output_0
   dynamicTensorInfos.push_back( {194, 196, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network15Relu_output_0
   dynamicTensorInfos.push_back( {195, 268, 4* (num_spacepoints * 128) }); // tensor_node_network1node_network17Relu_output_0
   dynamicTensorInfos.push_back( {196, 199, 4* (num_edges * 128) }); // tensor_Gather_12_output_0
   dynamicTensorInfos.push_back( {197, 199, 4* (num_edges * 128) }); // tensor_Gather_13_output_0
   dynamicTensorInfos.push_back( {198, 200, 4* (num_edges * 384) }); // tensor_Concat_12_output_0
   dynamicTensorInfos.push_back( {199, 203, 4* (num_edges * 128) }); // tensor_edge_network2edge_network20Gemm_output_0
   dynamicTensorInfos.push_back( {202, 204, 4* (num_edges * 128) }); // tensor_edge_network2edge_network21LayerNormalization_output_0
   dynamicTensorInfos.push_back( {203, 205, 4* (num_edges * 128) }); // tensor_edge_network2edge_network22Relu_output_0
   dynamicTensorInfos.push_back( {204, 208, 4* (num_edges * 128) }); // tensor_edge_network2edge_network23Gemm_output_0
   dynamicTensorInfos.push_back( {207, 209, 4* (num_edges * 128) }); // tensor_edge_network2edge_network24LayerNormalization_output_0
   dynamicTensorInfos.push_back( {208, 210, 4* (num_edges * 128) }); // tensor_edge_network2edge_network25Relu_output_0
   dynamicTensorInfos.push_back( {209, 282, 4* (num_edges * 128) }); // tensor_edge_network2edge_network27Relu_output_0
   dynamicTensorInfos.push_back( {232, 248, 8* (num_edges * 128) }); // tensor_Expand_4_output_0
   dynamicTensorInfos.push_back( {243, 248, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_9_output_0
   dynamicTensorInfos.push_back( {247, 268, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_4_output_0
   dynamicTensorInfos.push_back( {261, 267, 8* (num_edges * 128) }); // tensor_Expand_5_output_0
   dynamicTensorInfos.push_back( {262, 267, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_11_output_0
   dynamicTensorInfos.push_back( {266, 268, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_5_output_0
   dynamicTensorInfos.push_back( {267, 269, 4* (num_spacepoints * 384) }); // tensor_Concat_17_output_0
   dynamicTensorInfos.push_back( {268, 272, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network20Gemm_output_0
   dynamicTensorInfos.push_back( {271, 273, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network21LayerNormalization_output_0
   dynamicTensorInfos.push_back( {272, 274, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network22Relu_output_0
   dynamicTensorInfos.push_back( {273, 277, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network23Gemm_output_0
   dynamicTensorInfos.push_back( {276, 278, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network24LayerNormalization_output_0
   dynamicTensorInfos.push_back( {277, 279, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network25Relu_output_0
   dynamicTensorInfos.push_back( {278, 351, 4* (num_spacepoints * 128) }); // tensor_node_network2node_network27Relu_output_0
   dynamicTensorInfos.push_back( {279, 282, 4* (num_edges * 128) }); // tensor_Gather_17_output_0
   dynamicTensorInfos.push_back( {280, 282, 4* (num_edges * 128) }); // tensor_Gather_18_output_0
   dynamicTensorInfos.push_back( {281, 283, 4* (num_edges * 384) }); // tensor_Concat_18_output_0
   dynamicTensorInfos.push_back( {282, 286, 4* (num_edges * 128) }); // tensor_edge_network3edge_network30Gemm_output_0
   dynamicTensorInfos.push_back( {285, 287, 4* (num_edges * 128) }); // tensor_edge_network3edge_network31LayerNormalization_output_0
   dynamicTensorInfos.push_back( {286, 288, 4* (num_edges * 128) }); // tensor_edge_network3edge_network32Relu_output_0
   dynamicTensorInfos.push_back( {287, 291, 4* (num_edges * 128) }); // tensor_edge_network3edge_network33Gemm_output_0
   dynamicTensorInfos.push_back( {290, 292, 4* (num_edges * 128) }); // tensor_edge_network3edge_network34LayerNormalization_output_0
   dynamicTensorInfos.push_back( {291, 293, 4* (num_edges * 128) }); // tensor_edge_network3edge_network35Relu_output_0
   dynamicTensorInfos.push_back( {292, 365, 4* (num_edges * 128) }); // tensor_edge_network3edge_network37Relu_output_0
   dynamicTensorInfos.push_back( {315, 331, 8* (num_edges * 128) }); // tensor_Expand_6_output_0
   dynamicTensorInfos.push_back( {326, 331, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_13_output_0
   dynamicTensorInfos.push_back( {330, 351, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_6_output_0
   dynamicTensorInfos.push_back( {344, 350, 8* (num_edges * 128) }); // tensor_Expand_7_output_0
   dynamicTensorInfos.push_back( {345, 350, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_15_output_0
   dynamicTensorInfos.push_back( {349, 351, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_7_output_0
   dynamicTensorInfos.push_back( {350, 352, 4* (num_spacepoints * 384) }); // tensor_Concat_23_output_0
   dynamicTensorInfos.push_back( {351, 355, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network30Gemm_output_0
   dynamicTensorInfos.push_back( {354, 356, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network31LayerNormalization_output_0
   dynamicTensorInfos.push_back( {355, 357, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network32Relu_output_0
   dynamicTensorInfos.push_back( {356, 360, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network33Gemm_output_0
   dynamicTensorInfos.push_back( {359, 361, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network34LayerNormalization_output_0
   dynamicTensorInfos.push_back( {360, 362, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network35Relu_output_0
   dynamicTensorInfos.push_back( {361, 434, 4* (num_spacepoints * 128) }); // tensor_node_network3node_network37Relu_output_0
   dynamicTensorInfos.push_back( {362, 365, 4* (num_edges * 128) }); // tensor_Gather_22_output_0
   dynamicTensorInfos.push_back( {363, 365, 4* (num_edges * 128) }); // tensor_Gather_23_output_0
   dynamicTensorInfos.push_back( {364, 366, 4* (num_edges * 384) }); // tensor_Concat_24_output_0
   dynamicTensorInfos.push_back( {365, 369, 4* (num_edges * 128) }); // tensor_edge_network4edge_network40Gemm_output_0
   dynamicTensorInfos.push_back( {368, 370, 4* (num_edges * 128) }); // tensor_edge_network4edge_network41LayerNormalization_output_0
   dynamicTensorInfos.push_back( {369, 371, 4* (num_edges * 128) }); // tensor_edge_network4edge_network42Relu_output_0
   dynamicTensorInfos.push_back( {370, 374, 4* (num_edges * 128) }); // tensor_edge_network4edge_network43Gemm_output_0
   dynamicTensorInfos.push_back( {373, 375, 4* (num_edges * 128) }); // tensor_edge_network4edge_network44LayerNormalization_output_0
   dynamicTensorInfos.push_back( {374, 376, 4* (num_edges * 128) }); // tensor_edge_network4edge_network45Relu_output_0
   dynamicTensorInfos.push_back( {375, 448, 4* (num_edges * 128) }); // tensor_edge_network4edge_network47Relu_output_0
   dynamicTensorInfos.push_back( {398, 414, 8* (num_edges * 128) }); // tensor_Expand_8_output_0
   dynamicTensorInfos.push_back( {409, 414, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_17_output_0
   dynamicTensorInfos.push_back( {413, 434, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_8_output_0
   dynamicTensorInfos.push_back( {427, 433, 8* (num_edges * 128) }); // tensor_Expand_9_output_0
   dynamicTensorInfos.push_back( {428, 433, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_19_output_0
   dynamicTensorInfos.push_back( {432, 434, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_9_output_0
   dynamicTensorInfos.push_back( {433, 435, 4* (num_spacepoints * 384) }); // tensor_Concat_29_output_0
   dynamicTensorInfos.push_back( {434, 438, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network40Gemm_output_0
   dynamicTensorInfos.push_back( {437, 439, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network41LayerNormalization_output_0
   dynamicTensorInfos.push_back( {438, 440, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network42Relu_output_0
   dynamicTensorInfos.push_back( {439, 443, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network43Gemm_output_0
   dynamicTensorInfos.push_back( {442, 444, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network44LayerNormalization_output_0
   dynamicTensorInfos.push_back( {443, 445, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network45Relu_output_0
   dynamicTensorInfos.push_back( {444, 517, 4* (num_spacepoints * 128) }); // tensor_node_network4node_network47Relu_output_0
   dynamicTensorInfos.push_back( {445, 448, 4* (num_edges * 128) }); // tensor_Gather_27_output_0
   dynamicTensorInfos.push_back( {446, 448, 4* (num_edges * 128) }); // tensor_Gather_28_output_0
   dynamicTensorInfos.push_back( {447, 449, 4* (num_edges * 384) }); // tensor_Concat_30_output_0
   dynamicTensorInfos.push_back( {448, 452, 4* (num_edges * 128) }); // tensor_edge_network5edge_network50Gemm_output_0
   dynamicTensorInfos.push_back( {451, 453, 4* (num_edges * 128) }); // tensor_edge_network5edge_network51LayerNormalization_output_0
   dynamicTensorInfos.push_back( {452, 454, 4* (num_edges * 128) }); // tensor_edge_network5edge_network52Relu_output_0
   dynamicTensorInfos.push_back( {453, 457, 4* (num_edges * 128) }); // tensor_edge_network5edge_network53Gemm_output_0
   dynamicTensorInfos.push_back( {456, 458, 4* (num_edges * 128) }); // tensor_edge_network5edge_network54LayerNormalization_output_0
   dynamicTensorInfos.push_back( {457, 459, 4* (num_edges * 128) }); // tensor_edge_network5edge_network55Relu_output_0
   dynamicTensorInfos.push_back( {458, 531, 4* (num_edges * 128) }); // tensor_edge_network5edge_network57Relu_output_0
   dynamicTensorInfos.push_back( {481, 497, 8* (num_edges * 128) }); // tensor_Expand_10_output_0
   dynamicTensorInfos.push_back( {492, 497, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_21_output_0
   dynamicTensorInfos.push_back( {496, 517, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_10_output_0
   dynamicTensorInfos.push_back( {510, 516, 8* (num_edges * 128) }); // tensor_Expand_11_output_0
   dynamicTensorInfos.push_back( {511, 516, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_23_output_0
   dynamicTensorInfos.push_back( {515, 517, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_11_output_0
   dynamicTensorInfos.push_back( {516, 518, 4* (num_spacepoints * 384) }); // tensor_Concat_35_output_0
   dynamicTensorInfos.push_back( {517, 521, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network50Gemm_output_0
   dynamicTensorInfos.push_back( {520, 522, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network51LayerNormalization_output_0
   dynamicTensorInfos.push_back( {521, 523, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network52Relu_output_0
   dynamicTensorInfos.push_back( {522, 526, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network53Gemm_output_0
   dynamicTensorInfos.push_back( {525, 527, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network54LayerNormalization_output_0
   dynamicTensorInfos.push_back( {526, 528, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network55Relu_output_0
   dynamicTensorInfos.push_back( {527, 600, 4* (num_spacepoints * 128) }); // tensor_node_network5node_network57Relu_output_0
   dynamicTensorInfos.push_back( {528, 531, 4* (num_edges * 128) }); // tensor_Gather_32_output_0
   dynamicTensorInfos.push_back( {529, 531, 4* (num_edges * 128) }); // tensor_Gather_33_output_0
   dynamicTensorInfos.push_back( {530, 532, 4* (num_edges * 384) }); // tensor_Concat_36_output_0
   dynamicTensorInfos.push_back( {531, 535, 4* (num_edges * 128) }); // tensor_edge_network6edge_network60Gemm_output_0
   dynamicTensorInfos.push_back( {534, 536, 4* (num_edges * 128) }); // tensor_edge_network6edge_network61LayerNormalization_output_0
   dynamicTensorInfos.push_back( {535, 537, 4* (num_edges * 128) }); // tensor_edge_network6edge_network62Relu_output_0
   dynamicTensorInfos.push_back( {536, 540, 4* (num_edges * 128) }); // tensor_edge_network6edge_network63Gemm_output_0
   dynamicTensorInfos.push_back( {539, 541, 4* (num_edges * 128) }); // tensor_edge_network6edge_network64LayerNormalization_output_0
   dynamicTensorInfos.push_back( {540, 542, 4* (num_edges * 128) }); // tensor_edge_network6edge_network65Relu_output_0
   dynamicTensorInfos.push_back( {541, 614, 4* (num_edges * 128) }); // tensor_edge_network6edge_network67Relu_output_0
   dynamicTensorInfos.push_back( {564, 580, 8* (num_edges * 128) }); // tensor_Expand_12_output_0
   dynamicTensorInfos.push_back( {575, 580, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_25_output_0
   dynamicTensorInfos.push_back( {579, 600, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_12_output_0
   dynamicTensorInfos.push_back( {593, 599, 8* (num_edges * 128) }); // tensor_Expand_13_output_0
   dynamicTensorInfos.push_back( {594, 599, 4* (num_spacepoints * 128) }); // tensor_ConstantOfShape_27_output_0
   dynamicTensorInfos.push_back( {598, 600, 4* (num_spacepoints * 128) }); // tensor_ScatterElements_13_output_0
   dynamicTensorInfos.push_back( {599, 601, 4* (num_spacepoints * 384) }); // tensor_Concat_41_output_0
   dynamicTensorInfos.push_back( {600, 604, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network60Gemm_output_0
   dynamicTensorInfos.push_back( {603, 605, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network61LayerNormalization_output_0
   dynamicTensorInfos.push_back( {604, 606, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network62Relu_output_0
   dynamicTensorInfos.push_back( {605, 609, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network63Gemm_output_0
   dynamicTensorInfos.push_back( {608, 610, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network64LayerNormalization_output_0
   dynamicTensorInfos.push_back( {609, 611, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network65Relu_output_0
   dynamicTensorInfos.push_back( {610, 613, 4* (num_spacepoints * 128) }); // tensor_node_network6node_network67Relu_output_0
   dynamicTensorInfos.push_back( {611, 614, 4* (num_edges * 128) }); // tensor_Gather_37_output_0
   dynamicTensorInfos.push_back( {612, 614, 4* (num_edges * 128) }); // tensor_Gather_38_output_0
   dynamicTensorInfos.push_back( {613, 615, 4* (num_edges * 384) }); // tensor_Concat_42_output_0
   dynamicTensorInfos.push_back( {614, 618, 4* (num_edges * 128) }); // tensor_edge_network7edge_network70Gemm_output_0
   dynamicTensorInfos.push_back( {617, 619, 4* (num_edges * 128) }); // tensor_edge_network7edge_network71LayerNormalization_output_0
   dynamicTensorInfos.push_back( {618, 620, 4* (num_edges * 128) }); // tensor_edge_network7edge_network72Relu_output_0
   dynamicTensorInfos.push_back( {619, 623, 4* (num_edges * 128) }); // tensor_edge_network7edge_network73Gemm_output_0
   dynamicTensorInfos.push_back( {622, 624, 4* (num_edges * 128) }); // tensor_edge_network7edge_network74LayerNormalization_output_0
   dynamicTensorInfos.push_back( {623, 625, 4* (num_edges * 128) }); // tensor_edge_network7edge_network75Relu_output_0
   dynamicTensorInfos.push_back( {624, 626, 4* (num_edges * 128) }); // tensor_edge_network7edge_network77Relu_output_0
   dynamicTensorInfos.push_back( {625, 629, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder0Gemm_output_0
   dynamicTensorInfos.push_back( {628, 630, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {629, 631, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder2Relu_output_0
   dynamicTensorInfos.push_back( {630, 634, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder3Gemm_output_0
   dynamicTensorInfos.push_back( {633, 635, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder4LayerNormalization_output_0
   dynamicTensorInfos.push_back( {634, 636, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder5Relu_output_0
   dynamicTensorInfos.push_back( {635, 637, 4* (num_edges * 128) }); // tensor_edge_decoderedge_decoder7Relu_output_0
   dynamicTensorInfos.push_back( {636, 640, 4* (num_edges * 128) }); // tensor_edge_output_transformedge_output_transform0Gemm_output_0
   dynamicTensorInfos.push_back( {639, 641, 4* (num_edges * 128) }); // tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0
   dynamicTensorInfos.push_back( {640, 642, 4* (num_edges * 128) }); // tensor_edge_output_transformedge_output_transform2Relu_output_0
   dynamicTensorInfos.push_back( {641, 644, 4* (num_edges) }); // tensor_edge_output_transformedge_output_transform3Gemm_output_0
   dynamicTensorInfos.push_back( {643, 645, 4* (num_edges) }); // tensor_Squeeze_output_0
   dynamicTensorInfos.push_back( {644, 645, 4* (num_edges) }); // tensor_output

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
   tensor_Gather_2_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_3_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_5_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network00Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network01LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network02Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network03Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network04LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network05Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network0node_network07Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_7_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_8_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_6_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_11_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network10Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network11LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network12Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network13Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network14LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network15Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network1node_network17Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_12_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_13_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_12_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_17_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network20Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network21LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network22Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network23Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network24LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network25Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network2node_network27Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_17_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_18_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_18_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_23_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network30Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network31LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network32Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network33Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network34LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network35Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network3node_network37Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_22_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_23_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_24_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_29_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network40Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network41LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network42Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network43Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network44LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network45Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network4node_network47Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_27_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_28_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_30_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_35_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network50Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network51LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network52Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network53Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network54LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network55Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network5node_network57Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_32_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_33_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_36_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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
   tensor_Concat_41_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network60Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network61LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network62Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network63Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network64LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network65Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_node_network6node_network67Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_37_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Gather_38_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_Concat_42_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network70Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network71LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network72Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network73Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network74LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network75Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_network7edge_network77Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder0Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder1LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder2Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder3Gemm_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder4LayerNormalization_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder5Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
   tensor_edge_decoderedge_decoder7Relu_output_0 = reinterpret_cast<float *>(fDynamicMemoryPool.data() + memory_result.offsets[idx++]);
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

//--------- Gemm op_4 { num_spacepoints , 12 } * { 128 , 12 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_encodernode_encoder0Gemm_output_0[y_index + k] = tensor_node_encoder0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_encodernode_encoder0Gemm_output_0, true, false, 128, num_spacepoints, 12, 1, tensor_node_encoder0weight, tensor_x, 1,nullptr);
// ---- Constant (no-op) 5 --> node_encodernode_encoder1Constant_output_0 {  }
// ---- Constant (no-op) 6 --> node_encodernode_encoder1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_7
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_encodernode_encoder0Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_encodernode_encoder0Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_encodernode_encoder1LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_encodernode_encoder1Constant_output_0[axis_1] * invStdDev * (tensor_node_encodernode_encoder0Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_encodernode_encoder1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_encodernode_encoder2Relu_output_0[id] = ((tensor_node_encodernode_encoder1LayerNormalization_output_0[id] > 0 )? tensor_node_encodernode_encoder1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_9 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_encodernode_encoder3Gemm_output_0[y_index + k] = tensor_node_encoder3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_encodernode_encoder3Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_encoder3weight, tensor_node_encodernode_encoder2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 10 --> node_encodernode_encoder4Constant_output_0 {  }
// ---- Constant (no-op) 11 --> node_encodernode_encoder4Constant_1_output_0 {  }
//---- Layer Normalization  operator op_12
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_encodernode_encoder3Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_encodernode_encoder3Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_encodernode_encoder4LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_encodernode_encoder4Constant_output_0[axis_1] * invStdDev * (tensor_node_encodernode_encoder3Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_encodernode_encoder4Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_encodernode_encoder5Relu_output_0[id] = ((tensor_node_encodernode_encoder4LayerNormalization_output_0[id] > 0 )? tensor_node_encodernode_encoder4LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_14 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_encodernode_encoder7Relu_output_0[y_index + k] = tensor_node_encoder6bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_encodernode_encoder7Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_encoder6weight, tensor_node_encodernode_encoder5Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_encodernode_encoder7Relu_output_0[id] = ((tensor_node_encodernode_encoder7Relu_output_0[id] > 0 )? tensor_node_encodernode_encoder7Relu_output_0[id] : 0);
   }

//--------- Gemm op_15 { num_edges , 6 } * { 128 , 6 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_encoderedge_encoder0Gemm_output_0[y_index + k] = tensor_edge_encoder0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_encoderedge_encoder0Gemm_output_0, true, false, 128, num_edges, 6, 1, tensor_edge_encoder0weight, tensor_edge_attr, 1,nullptr);
// ---- Constant (no-op) 16 --> edge_encoderedge_encoder1Constant_output_0 {  }
// ---- Constant (no-op) 17 --> edge_encoderedge_encoder1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_18
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_encoderedge_encoder0Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_encoderedge_encoder0Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_encoderedge_encoder1LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_encoderedge_encoder1Constant_output_0[axis_1] * invStdDev * (tensor_edge_encoderedge_encoder0Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_encoderedge_encoder1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_encoderedge_encoder2Relu_output_0[id] = ((tensor_edge_encoderedge_encoder1LayerNormalization_output_0[id] > 0 )? tensor_edge_encoderedge_encoder1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_20 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_encoderedge_encoder3Gemm_output_0[y_index + k] = tensor_edge_encoder3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_encoderedge_encoder3Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_encoder3weight, tensor_edge_encoderedge_encoder2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 21 --> edge_encoderedge_encoder4Constant_output_0 {  }
// ---- Constant (no-op) 22 --> edge_encoderedge_encoder4Constant_1_output_0 {  }
//---- Layer Normalization  operator op_23
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_encoderedge_encoder3Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_encoderedge_encoder3Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_encoderedge_encoder4LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_encoderedge_encoder4Constant_output_0[axis_1] * invStdDev * (tensor_edge_encoderedge_encoder3Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_encoderedge_encoder4Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_encoderedge_encoder5Relu_output_0[id] = ((tensor_edge_encoderedge_encoder4LayerNormalization_output_0[id] > 0 )? tensor_edge_encoderedge_encoder4LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_25 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_encoderedge_encoder7Relu_output_0[y_index + k] = tensor_edge_encoder6bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_encoderedge_encoder7Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_encoder6weight, tensor_edge_encoderedge_encoder5Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_encoderedge_encoder7Relu_output_0[id] = ((tensor_edge_encoderedge_encoder7Relu_output_0[id] > 0 )? tensor_edge_encoderedge_encoder7Relu_output_0[id] : 0);
   }
//--------- Gather op_26 --> Gather_2_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_2_output_0[y_index] = tensor_node_encodernode_encoder7Relu_output_0[x_index];
      }
   }
//--------- Gather op_27 --> Gather_3_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_3_output_0[y_index] = tensor_node_encodernode_encoder7Relu_output_0[x_index];
      }
   }

//--------- Concat op_28 --> Concat_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_output_0[idxOut+iC] = tensor_edge_encoderedge_encoder7Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_output_0[idxOut+iC] = tensor_Gather_2_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_output_0[idxOut+iC] = tensor_Gather_3_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_29 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network0edge_network00Gemm_output_0[y_index + k] = tensor_edge_network00bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network0edge_network00Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network00weight, tensor_Concat_output_0, 1,nullptr);
// ---- Constant (no-op) 30 --> edge_network0edge_network01Constant_output_0 {  }
// ---- Constant (no-op) 31 --> edge_network0edge_network01Constant_1_output_0 {  }
//---- Layer Normalization  operator op_32
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network0edge_network00Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network0edge_network00Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network0edge_network01LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network0edge_network01Constant_output_0[axis_1] * invStdDev * (tensor_edge_network0edge_network00Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network0edge_network01Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network0edge_network02Relu_output_0[id] = ((tensor_edge_network0edge_network01LayerNormalization_output_0[id] > 0 )? tensor_edge_network0edge_network01LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_34 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network0edge_network03Gemm_output_0[y_index + k] = tensor_edge_network03bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network0edge_network03Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network03weight, tensor_edge_network0edge_network02Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 35 --> edge_network0edge_network04Constant_output_0 {  }
// ---- Constant (no-op) 36 --> edge_network0edge_network04Constant_1_output_0 {  }
//---- Layer Normalization  operator op_37
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network0edge_network03Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network0edge_network03Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network0edge_network04LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network0edge_network04Constant_output_0[axis_1] * invStdDev * (tensor_edge_network0edge_network03Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network0edge_network04Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network0edge_network05Relu_output_0[id] = ((tensor_edge_network0edge_network04LayerNormalization_output_0[id] > 0 )? tensor_edge_network0edge_network04LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_39 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network0edge_network07Relu_output_0[y_index + k] = tensor_edge_network06bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network0edge_network07Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network06weight, tensor_edge_network0edge_network05Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network0edge_network07Relu_output_0[id] = ((tensor_edge_network0edge_network07Relu_output_0[id] > 0 )? tensor_edge_network0edge_network07Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 41 --> Constant_2_output_0 {  }
//--------- Gather op_42 --> Gather_4_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 43 --> Constant_3_output_0 {  }
   ///--------Unsquueze operator 44 --> { num_edges , 1 }
   std::copy( tensor_Gather_1_output_0, tensor_Gather_1_output_0 + num_edges, tensor_Unsqueeze_output_0);
// ---- Constant (no-op) 46 --> Constant_4_output_0 {  }
//--------- Gather op_47 --> Gather_5_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 49 --> Constant_5_output_0 {  }
//--------- Gather op_50 --> Gather_6_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 51 --> Constant_6_output_0 {  }
// ---- Constant (no-op) 53 --> Constant_7_output_0 {  }

//--------- Concat op_55 --> Concat_1_output_0  { 2 }
// ---- Constant (no-op) 56 --> Constant_8_output_0 {  }
// ---- ConstantOfShape (no-op) 59 --> ConstantOfShape_output_0 {  }
// ---- Constant (no-op) 60 --> Constant_9_output_0 {  }
   
//------ Expand op_64 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_output_0, num_edges * 128));
// ---- Constant (no-op) 65 --> onnxUnsqueeze_189 {  }
// ---- Constant (no-op) 67 --> onnxUnsqueeze_191 {  }

//--------- Concat op_69 --> Concat_2_output_0  { 2 }
// ---- Constant (no-op) 70 --> onnxUnsqueeze_194 {  }
// ---- Constant (no-op) 72 --> onnxUnsqueeze_196 {  }

//--------- Concat op_74 --> Concat_3_output_0  { 2 }

//--------- ConstantOfShape 75 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_1_output_0, tensor_ConstantOfShape_1_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 77 --> Constant_10_output_0 {  }
///------- Slice operator 78---> Slice_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_output_0 = tensor_edge_network0edge_network07Relu_output_0;
   
//-------- ScatterElements  --- 79
   std::copy(tensor_ConstantOfShape_1_output_0, tensor_ConstantOfShape_1_output_0 + num_spacepoints * 128, tensor_ScatterElements_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_output_0[outIndex] = tensor_ScatterElements_output_0[outIndex] + tensor_Slice_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 80 --> Constant_11_output_0 {  }
   ///--------Unsquueze operator 81 --> { num_edges , 1 }
   std::copy( tensor_Gather_output_0, tensor_Gather_output_0 + num_edges, tensor_Unsqueeze_7_output_0);
// ---- Constant (no-op) 82 --> Constant_12_output_0 {  }
// ---- Constant (no-op) 84 --> Constant_13_output_0 {  }

//--------- Concat op_86 --> Concat_4_output_0  { 2 }
// ---- Constant (no-op) 87 --> Constant_14_output_0 {  }
// ---- ConstantOfShape (no-op) 90 --> ConstantOfShape_2_output_0 {  }
// ---- Constant (no-op) 91 --> Constant_15_output_0 {  }
   
//------ Expand op_95 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_1_output_0, num_edges * 128));

//--------- ConstantOfShape 96 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_3_output_0, tensor_ConstantOfShape_3_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 98 --> Constant_16_output_0 {  }
///------- Slice operator 99---> Slice_1_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_1_output_0 = tensor_edge_network0edge_network07Relu_output_0;
   
//-------- ScatterElements  --- 100
   std::copy(tensor_ConstantOfShape_3_output_0, tensor_ConstantOfShape_3_output_0 + num_spacepoints * 128, tensor_ScatterElements_1_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_1_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_1_output_0[outIndex] = tensor_ScatterElements_1_output_0[outIndex] + tensor_Slice_1_output_0[updateIndex];
      }
   }

//--------- Concat op_101 --> Concat_5_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_5_output_0[idxOut+iC] = tensor_ScatterElements_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_5_output_0[idxOut+iC] = tensor_ScatterElements_1_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_5_output_0[idxOut+iC] = tensor_node_encodernode_encoder7Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_102 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network0node_network00Gemm_output_0[y_index + k] = tensor_node_network00bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network0node_network00Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network00weight, tensor_Concat_5_output_0, 1,nullptr);
// ---- Constant (no-op) 103 --> node_network0node_network01Constant_output_0 {  }
// ---- Constant (no-op) 104 --> node_network0node_network01Constant_1_output_0 {  }
//---- Layer Normalization  operator op_105
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network0node_network00Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network0node_network00Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network0node_network01LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network0node_network01Constant_output_0[axis_1] * invStdDev * (tensor_node_network0node_network00Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network0node_network01Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network0node_network02Relu_output_0[id] = ((tensor_node_network0node_network01LayerNormalization_output_0[id] > 0 )? tensor_node_network0node_network01LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_107 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network0node_network03Gemm_output_0[y_index + k] = tensor_node_network03bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network0node_network03Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network03weight, tensor_node_network0node_network02Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 108 --> node_network0node_network04Constant_output_0 {  }
// ---- Constant (no-op) 109 --> node_network0node_network04Constant_1_output_0 {  }
//---- Layer Normalization  operator op_110
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network0node_network03Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network0node_network03Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network0node_network04LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network0node_network04Constant_output_0[axis_1] * invStdDev * (tensor_node_network0node_network03Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network0node_network04Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network0node_network05Relu_output_0[id] = ((tensor_node_network0node_network04LayerNormalization_output_0[id] > 0 )? tensor_node_network0node_network04LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_112 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network0node_network07Relu_output_0[y_index + k] = tensor_node_network06bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network0node_network07Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network06weight, tensor_node_network0node_network05Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network0node_network07Relu_output_0[id] = ((tensor_node_network0node_network07Relu_output_0[id] > 0 )? tensor_node_network0node_network07Relu_output_0[id] : 0);
   }
//--------- Gather op_113 --> Gather_7_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_7_output_0[y_index] = tensor_node_network0node_network07Relu_output_0[x_index];
      }
   }
//--------- Gather op_114 --> Gather_8_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_8_output_0[y_index] = tensor_node_network0node_network07Relu_output_0[x_index];
      }
   }

//--------- Concat op_115 --> Concat_6_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_6_output_0[idxOut+iC] = tensor_edge_network0edge_network07Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_6_output_0[idxOut+iC] = tensor_Gather_7_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_6_output_0[idxOut+iC] = tensor_Gather_8_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_116 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network1edge_network10Gemm_output_0[y_index + k] = tensor_edge_network10bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network1edge_network10Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network10weight, tensor_Concat_6_output_0, 1,nullptr);
// ---- Constant (no-op) 117 --> edge_network1edge_network11Constant_output_0 {  }
// ---- Constant (no-op) 118 --> edge_network1edge_network11Constant_1_output_0 {  }
//---- Layer Normalization  operator op_119
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network1edge_network10Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network1edge_network10Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network1edge_network11LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network1edge_network11Constant_output_0[axis_1] * invStdDev * (tensor_edge_network1edge_network10Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network1edge_network11Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network1edge_network12Relu_output_0[id] = ((tensor_edge_network1edge_network11LayerNormalization_output_0[id] > 0 )? tensor_edge_network1edge_network11LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_121 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network1edge_network13Gemm_output_0[y_index + k] = tensor_edge_network13bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network1edge_network13Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network13weight, tensor_edge_network1edge_network12Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 122 --> edge_network1edge_network14Constant_output_0 {  }
// ---- Constant (no-op) 123 --> edge_network1edge_network14Constant_1_output_0 {  }
//---- Layer Normalization  operator op_124
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network1edge_network13Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network1edge_network13Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network1edge_network14LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network1edge_network14Constant_output_0[axis_1] * invStdDev * (tensor_edge_network1edge_network13Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network1edge_network14Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network1edge_network15Relu_output_0[id] = ((tensor_edge_network1edge_network14LayerNormalization_output_0[id] > 0 )? tensor_edge_network1edge_network14LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_126 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network1edge_network17Relu_output_0[y_index + k] = tensor_edge_network16bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network1edge_network17Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network16weight, tensor_edge_network1edge_network15Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network1edge_network17Relu_output_0[id] = ((tensor_edge_network1edge_network17Relu_output_0[id] > 0 )? tensor_edge_network1edge_network17Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 128 --> Constant_17_output_0 {  }
//--------- Gather op_129 --> Gather_9_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 131 --> Constant_18_output_0 {  }
//--------- Gather op_132 --> Gather_10_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 134 --> Constant_19_output_0 {  }
//--------- Gather op_135 --> Gather_11_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 136 --> Constant_20_output_0 {  }
// ---- Constant (no-op) 138 --> Constant_21_output_0 {  }

//--------- Concat op_140 --> Concat_7_output_0  { 2 }
// ---- Constant (no-op) 141 --> Constant_22_output_0 {  }
// ---- ConstantOfShape (no-op) 144 --> ConstantOfShape_4_output_0 {  }
// ---- Constant (no-op) 145 --> Constant_23_output_0 {  }
   
//------ Expand op_149 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_2_output_0, num_edges * 128));
// ---- Constant (no-op) 150 --> onnxUnsqueeze_276 {  }
// ---- Constant (no-op) 152 --> onnxUnsqueeze_278 {  }

//--------- Concat op_154 --> Concat_8_output_0  { 2 }
// ---- Constant (no-op) 155 --> onnxUnsqueeze_281 {  }
// ---- Constant (no-op) 157 --> onnxUnsqueeze_283 {  }

//--------- Concat op_159 --> Concat_9_output_0  { 2 }

//--------- ConstantOfShape 160 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_5_output_0, tensor_ConstantOfShape_5_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 162 --> Constant_24_output_0 {  }
///------- Slice operator 163---> Slice_2_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_2_output_0 = tensor_edge_network1edge_network17Relu_output_0;
   
//-------- ScatterElements  --- 164
   std::copy(tensor_ConstantOfShape_5_output_0, tensor_ConstantOfShape_5_output_0 + num_spacepoints * 128, tensor_ScatterElements_2_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_2_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_2_output_0[outIndex] = tensor_ScatterElements_2_output_0[outIndex] + tensor_Slice_2_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 165 --> Constant_25_output_0 {  }
// ---- Constant (no-op) 167 --> Constant_26_output_0 {  }

//--------- Concat op_169 --> Concat_10_output_0  { 2 }
// ---- Constant (no-op) 170 --> Constant_27_output_0 {  }
// ---- ConstantOfShape (no-op) 173 --> ConstantOfShape_6_output_0 {  }
// ---- Constant (no-op) 174 --> Constant_28_output_0 {  }
   
//------ Expand op_178 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_3_output_0, num_edges * 128));

//--------- ConstantOfShape 179 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_7_output_0, tensor_ConstantOfShape_7_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 181 --> Constant_29_output_0 {  }
///------- Slice operator 182---> Slice_3_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_3_output_0 = tensor_edge_network1edge_network17Relu_output_0;
   
//-------- ScatterElements  --- 183
   std::copy(tensor_ConstantOfShape_7_output_0, tensor_ConstantOfShape_7_output_0 + num_spacepoints * 128, tensor_ScatterElements_3_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_3_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_3_output_0[outIndex] = tensor_ScatterElements_3_output_0[outIndex] + tensor_Slice_3_output_0[updateIndex];
      }
   }

//--------- Concat op_184 --> Concat_11_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_11_output_0[idxOut+iC] = tensor_ScatterElements_2_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_11_output_0[idxOut+iC] = tensor_ScatterElements_3_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_11_output_0[idxOut+iC] = tensor_node_network0node_network07Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_185 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network1node_network10Gemm_output_0[y_index + k] = tensor_node_network10bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network1node_network10Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network10weight, tensor_Concat_11_output_0, 1,nullptr);
// ---- Constant (no-op) 186 --> node_network1node_network11Constant_output_0 {  }
// ---- Constant (no-op) 187 --> node_network1node_network11Constant_1_output_0 {  }
//---- Layer Normalization  operator op_188
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network1node_network10Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network1node_network10Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network1node_network11LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network1node_network11Constant_output_0[axis_1] * invStdDev * (tensor_node_network1node_network10Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network1node_network11Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network1node_network12Relu_output_0[id] = ((tensor_node_network1node_network11LayerNormalization_output_0[id] > 0 )? tensor_node_network1node_network11LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_190 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network1node_network13Gemm_output_0[y_index + k] = tensor_node_network13bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network1node_network13Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network13weight, tensor_node_network1node_network12Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 191 --> node_network1node_network14Constant_output_0 {  }
// ---- Constant (no-op) 192 --> node_network1node_network14Constant_1_output_0 {  }
//---- Layer Normalization  operator op_193
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network1node_network13Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network1node_network13Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network1node_network14LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network1node_network14Constant_output_0[axis_1] * invStdDev * (tensor_node_network1node_network13Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network1node_network14Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network1node_network15Relu_output_0[id] = ((tensor_node_network1node_network14LayerNormalization_output_0[id] > 0 )? tensor_node_network1node_network14LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_195 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network1node_network17Relu_output_0[y_index + k] = tensor_node_network16bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network1node_network17Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network16weight, tensor_node_network1node_network15Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network1node_network17Relu_output_0[id] = ((tensor_node_network1node_network17Relu_output_0[id] > 0 )? tensor_node_network1node_network17Relu_output_0[id] : 0);
   }
//--------- Gather op_196 --> Gather_12_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_12_output_0[y_index] = tensor_node_network1node_network17Relu_output_0[x_index];
      }
   }
//--------- Gather op_197 --> Gather_13_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_13_output_0[y_index] = tensor_node_network1node_network17Relu_output_0[x_index];
      }
   }

//--------- Concat op_198 --> Concat_12_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_12_output_0[idxOut+iC] = tensor_edge_network1edge_network17Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_12_output_0[idxOut+iC] = tensor_Gather_12_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_12_output_0[idxOut+iC] = tensor_Gather_13_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_199 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network2edge_network20Gemm_output_0[y_index + k] = tensor_edge_network20bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network2edge_network20Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network20weight, tensor_Concat_12_output_0, 1,nullptr);
// ---- Constant (no-op) 200 --> edge_network2edge_network21Constant_output_0 {  }
// ---- Constant (no-op) 201 --> edge_network2edge_network21Constant_1_output_0 {  }
//---- Layer Normalization  operator op_202
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network2edge_network20Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network2edge_network20Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network2edge_network21LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network2edge_network21Constant_output_0[axis_1] * invStdDev * (tensor_edge_network2edge_network20Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network2edge_network21Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network2edge_network22Relu_output_0[id] = ((tensor_edge_network2edge_network21LayerNormalization_output_0[id] > 0 )? tensor_edge_network2edge_network21LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_204 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network2edge_network23Gemm_output_0[y_index + k] = tensor_edge_network23bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network2edge_network23Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network23weight, tensor_edge_network2edge_network22Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 205 --> edge_network2edge_network24Constant_output_0 {  }
// ---- Constant (no-op) 206 --> edge_network2edge_network24Constant_1_output_0 {  }
//---- Layer Normalization  operator op_207
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network2edge_network23Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network2edge_network23Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network2edge_network24LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network2edge_network24Constant_output_0[axis_1] * invStdDev * (tensor_edge_network2edge_network23Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network2edge_network24Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network2edge_network25Relu_output_0[id] = ((tensor_edge_network2edge_network24LayerNormalization_output_0[id] > 0 )? tensor_edge_network2edge_network24LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_209 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network2edge_network27Relu_output_0[y_index + k] = tensor_edge_network26bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network2edge_network27Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network26weight, tensor_edge_network2edge_network25Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network2edge_network27Relu_output_0[id] = ((tensor_edge_network2edge_network27Relu_output_0[id] > 0 )? tensor_edge_network2edge_network27Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 211 --> Constant_30_output_0 {  }
//--------- Gather op_212 --> Gather_14_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 214 --> Constant_31_output_0 {  }
//--------- Gather op_215 --> Gather_15_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 217 --> Constant_32_output_0 {  }
//--------- Gather op_218 --> Gather_16_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 219 --> Constant_33_output_0 {  }
// ---- Constant (no-op) 221 --> Constant_34_output_0 {  }

//--------- Concat op_223 --> Concat_13_output_0  { 2 }
// ---- Constant (no-op) 224 --> Constant_35_output_0 {  }
// ---- ConstantOfShape (no-op) 227 --> ConstantOfShape_8_output_0 {  }
// ---- Constant (no-op) 228 --> Constant_36_output_0 {  }
   
//------ Expand op_232 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_4_output_0, num_edges * 128));
// ---- Constant (no-op) 233 --> onnxUnsqueeze_361 {  }
// ---- Constant (no-op) 235 --> onnxUnsqueeze_363 {  }

//--------- Concat op_237 --> Concat_14_output_0  { 2 }
// ---- Constant (no-op) 238 --> onnxUnsqueeze_366 {  }
// ---- Constant (no-op) 240 --> onnxUnsqueeze_368 {  }

//--------- Concat op_242 --> Concat_15_output_0  { 2 }

//--------- ConstantOfShape 243 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_9_output_0, tensor_ConstantOfShape_9_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 245 --> Constant_37_output_0 {  }
///------- Slice operator 246---> Slice_4_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_4_output_0 = tensor_edge_network2edge_network27Relu_output_0;
   
//-------- ScatterElements  --- 247
   std::copy(tensor_ConstantOfShape_9_output_0, tensor_ConstantOfShape_9_output_0 + num_spacepoints * 128, tensor_ScatterElements_4_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_4_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_4_output_0[outIndex] = tensor_ScatterElements_4_output_0[outIndex] + tensor_Slice_4_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 248 --> Constant_38_output_0 {  }
// ---- Constant (no-op) 250 --> Constant_39_output_0 {  }

//--------- Concat op_252 --> Concat_16_output_0  { 2 }
// ---- Constant (no-op) 253 --> Constant_40_output_0 {  }
// ---- ConstantOfShape (no-op) 256 --> ConstantOfShape_10_output_0 {  }
// ---- Constant (no-op) 257 --> Constant_41_output_0 {  }
   
//------ Expand op_261 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_5_output_0, num_edges * 128));

//--------- ConstantOfShape 262 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_11_output_0, tensor_ConstantOfShape_11_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 264 --> Constant_42_output_0 {  }
///------- Slice operator 265---> Slice_5_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_5_output_0 = tensor_edge_network2edge_network27Relu_output_0;
   
//-------- ScatterElements  --- 266
   std::copy(tensor_ConstantOfShape_11_output_0, tensor_ConstantOfShape_11_output_0 + num_spacepoints * 128, tensor_ScatterElements_5_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_5_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_5_output_0[outIndex] = tensor_ScatterElements_5_output_0[outIndex] + tensor_Slice_5_output_0[updateIndex];
      }
   }

//--------- Concat op_267 --> Concat_17_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_17_output_0[idxOut+iC] = tensor_ScatterElements_4_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_17_output_0[idxOut+iC] = tensor_ScatterElements_5_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_17_output_0[idxOut+iC] = tensor_node_network1node_network17Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_268 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network2node_network20Gemm_output_0[y_index + k] = tensor_node_network20bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network2node_network20Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network20weight, tensor_Concat_17_output_0, 1,nullptr);
// ---- Constant (no-op) 269 --> node_network2node_network21Constant_output_0 {  }
// ---- Constant (no-op) 270 --> node_network2node_network21Constant_1_output_0 {  }
//---- Layer Normalization  operator op_271
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network2node_network20Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network2node_network20Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network2node_network21LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network2node_network21Constant_output_0[axis_1] * invStdDev * (tensor_node_network2node_network20Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network2node_network21Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network2node_network22Relu_output_0[id] = ((tensor_node_network2node_network21LayerNormalization_output_0[id] > 0 )? tensor_node_network2node_network21LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_273 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network2node_network23Gemm_output_0[y_index + k] = tensor_node_network23bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network2node_network23Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network23weight, tensor_node_network2node_network22Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 274 --> node_network2node_network24Constant_output_0 {  }
// ---- Constant (no-op) 275 --> node_network2node_network24Constant_1_output_0 {  }
//---- Layer Normalization  operator op_276
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network2node_network23Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network2node_network23Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network2node_network24LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network2node_network24Constant_output_0[axis_1] * invStdDev * (tensor_node_network2node_network23Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network2node_network24Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network2node_network25Relu_output_0[id] = ((tensor_node_network2node_network24LayerNormalization_output_0[id] > 0 )? tensor_node_network2node_network24LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_278 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network2node_network27Relu_output_0[y_index + k] = tensor_node_network26bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network2node_network27Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network26weight, tensor_node_network2node_network25Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network2node_network27Relu_output_0[id] = ((tensor_node_network2node_network27Relu_output_0[id] > 0 )? tensor_node_network2node_network27Relu_output_0[id] : 0);
   }
//--------- Gather op_279 --> Gather_17_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_17_output_0[y_index] = tensor_node_network2node_network27Relu_output_0[x_index];
      }
   }
//--------- Gather op_280 --> Gather_18_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_18_output_0[y_index] = tensor_node_network2node_network27Relu_output_0[x_index];
      }
   }

//--------- Concat op_281 --> Concat_18_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_18_output_0[idxOut+iC] = tensor_edge_network2edge_network27Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_18_output_0[idxOut+iC] = tensor_Gather_17_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_18_output_0[idxOut+iC] = tensor_Gather_18_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_282 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network3edge_network30Gemm_output_0[y_index + k] = tensor_edge_network30bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network3edge_network30Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network30weight, tensor_Concat_18_output_0, 1,nullptr);
// ---- Constant (no-op) 283 --> edge_network3edge_network31Constant_output_0 {  }
// ---- Constant (no-op) 284 --> edge_network3edge_network31Constant_1_output_0 {  }
//---- Layer Normalization  operator op_285
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network3edge_network30Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network3edge_network30Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network3edge_network31LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network3edge_network31Constant_output_0[axis_1] * invStdDev * (tensor_edge_network3edge_network30Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network3edge_network31Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network3edge_network32Relu_output_0[id] = ((tensor_edge_network3edge_network31LayerNormalization_output_0[id] > 0 )? tensor_edge_network3edge_network31LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_287 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network3edge_network33Gemm_output_0[y_index + k] = tensor_edge_network33bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network3edge_network33Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network33weight, tensor_edge_network3edge_network32Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 288 --> edge_network3edge_network34Constant_output_0 {  }
// ---- Constant (no-op) 289 --> edge_network3edge_network34Constant_1_output_0 {  }
//---- Layer Normalization  operator op_290
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network3edge_network33Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network3edge_network33Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network3edge_network34LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network3edge_network34Constant_output_0[axis_1] * invStdDev * (tensor_edge_network3edge_network33Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network3edge_network34Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network3edge_network35Relu_output_0[id] = ((tensor_edge_network3edge_network34LayerNormalization_output_0[id] > 0 )? tensor_edge_network3edge_network34LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_292 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network3edge_network37Relu_output_0[y_index + k] = tensor_edge_network36bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network3edge_network37Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network36weight, tensor_edge_network3edge_network35Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network3edge_network37Relu_output_0[id] = ((tensor_edge_network3edge_network37Relu_output_0[id] > 0 )? tensor_edge_network3edge_network37Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 294 --> Constant_43_output_0 {  }
//--------- Gather op_295 --> Gather_19_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 297 --> Constant_44_output_0 {  }
//--------- Gather op_298 --> Gather_20_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 300 --> Constant_45_output_0 {  }
//--------- Gather op_301 --> Gather_21_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 302 --> Constant_46_output_0 {  }
// ---- Constant (no-op) 304 --> Constant_47_output_0 {  }

//--------- Concat op_306 --> Concat_19_output_0  { 2 }
// ---- Constant (no-op) 307 --> Constant_48_output_0 {  }
// ---- ConstantOfShape (no-op) 310 --> ConstantOfShape_12_output_0 {  }
// ---- Constant (no-op) 311 --> Constant_49_output_0 {  }
   
//------ Expand op_315 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_6_output_0, num_edges * 128));
// ---- Constant (no-op) 316 --> onnxUnsqueeze_446 {  }
// ---- Constant (no-op) 318 --> onnxUnsqueeze_448 {  }

//--------- Concat op_320 --> Concat_20_output_0  { 2 }
// ---- Constant (no-op) 321 --> onnxUnsqueeze_451 {  }
// ---- Constant (no-op) 323 --> onnxUnsqueeze_453 {  }

//--------- Concat op_325 --> Concat_21_output_0  { 2 }

//--------- ConstantOfShape 326 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_13_output_0, tensor_ConstantOfShape_13_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 328 --> Constant_50_output_0 {  }
///------- Slice operator 329---> Slice_6_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_6_output_0 = tensor_edge_network3edge_network37Relu_output_0;
   
//-------- ScatterElements  --- 330
   std::copy(tensor_ConstantOfShape_13_output_0, tensor_ConstantOfShape_13_output_0 + num_spacepoints * 128, tensor_ScatterElements_6_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_6_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_6_output_0[outIndex] = tensor_ScatterElements_6_output_0[outIndex] + tensor_Slice_6_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 331 --> Constant_51_output_0 {  }
// ---- Constant (no-op) 333 --> Constant_52_output_0 {  }

//--------- Concat op_335 --> Concat_22_output_0  { 2 }
// ---- Constant (no-op) 336 --> Constant_53_output_0 {  }
// ---- ConstantOfShape (no-op) 339 --> ConstantOfShape_14_output_0 {  }
// ---- Constant (no-op) 340 --> Constant_54_output_0 {  }
   
//------ Expand op_344 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_7_output_0, num_edges * 128));

//--------- ConstantOfShape 345 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_15_output_0, tensor_ConstantOfShape_15_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 347 --> Constant_55_output_0 {  }
///------- Slice operator 348---> Slice_7_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_7_output_0 = tensor_edge_network3edge_network37Relu_output_0;
   
//-------- ScatterElements  --- 349
   std::copy(tensor_ConstantOfShape_15_output_0, tensor_ConstantOfShape_15_output_0 + num_spacepoints * 128, tensor_ScatterElements_7_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_7_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_7_output_0[outIndex] = tensor_ScatterElements_7_output_0[outIndex] + tensor_Slice_7_output_0[updateIndex];
      }
   }

//--------- Concat op_350 --> Concat_23_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_23_output_0[idxOut+iC] = tensor_ScatterElements_6_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_23_output_0[idxOut+iC] = tensor_ScatterElements_7_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_23_output_0[idxOut+iC] = tensor_node_network2node_network27Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_351 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network3node_network30Gemm_output_0[y_index + k] = tensor_node_network30bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network3node_network30Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network30weight, tensor_Concat_23_output_0, 1,nullptr);
// ---- Constant (no-op) 352 --> node_network3node_network31Constant_output_0 {  }
// ---- Constant (no-op) 353 --> node_network3node_network31Constant_1_output_0 {  }
//---- Layer Normalization  operator op_354
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network3node_network30Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network3node_network30Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network3node_network31LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network3node_network31Constant_output_0[axis_1] * invStdDev * (tensor_node_network3node_network30Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network3node_network31Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network3node_network32Relu_output_0[id] = ((tensor_node_network3node_network31LayerNormalization_output_0[id] > 0 )? tensor_node_network3node_network31LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_356 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network3node_network33Gemm_output_0[y_index + k] = tensor_node_network33bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network3node_network33Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network33weight, tensor_node_network3node_network32Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 357 --> node_network3node_network34Constant_output_0 {  }
// ---- Constant (no-op) 358 --> node_network3node_network34Constant_1_output_0 {  }
//---- Layer Normalization  operator op_359
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network3node_network33Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network3node_network33Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network3node_network34LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network3node_network34Constant_output_0[axis_1] * invStdDev * (tensor_node_network3node_network33Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network3node_network34Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network3node_network35Relu_output_0[id] = ((tensor_node_network3node_network34LayerNormalization_output_0[id] > 0 )? tensor_node_network3node_network34LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_361 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network3node_network37Relu_output_0[y_index + k] = tensor_node_network36bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network3node_network37Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network36weight, tensor_node_network3node_network35Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network3node_network37Relu_output_0[id] = ((tensor_node_network3node_network37Relu_output_0[id] > 0 )? tensor_node_network3node_network37Relu_output_0[id] : 0);
   }
//--------- Gather op_362 --> Gather_22_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_22_output_0[y_index] = tensor_node_network3node_network37Relu_output_0[x_index];
      }
   }
//--------- Gather op_363 --> Gather_23_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_23_output_0[y_index] = tensor_node_network3node_network37Relu_output_0[x_index];
      }
   }

//--------- Concat op_364 --> Concat_24_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_24_output_0[idxOut+iC] = tensor_edge_network3edge_network37Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_24_output_0[idxOut+iC] = tensor_Gather_22_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_24_output_0[idxOut+iC] = tensor_Gather_23_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_365 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network4edge_network40Gemm_output_0[y_index + k] = tensor_edge_network40bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network4edge_network40Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network40weight, tensor_Concat_24_output_0, 1,nullptr);
// ---- Constant (no-op) 366 --> edge_network4edge_network41Constant_output_0 {  }
// ---- Constant (no-op) 367 --> edge_network4edge_network41Constant_1_output_0 {  }
//---- Layer Normalization  operator op_368
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network4edge_network40Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network4edge_network40Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network4edge_network41LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network4edge_network41Constant_output_0[axis_1] * invStdDev * (tensor_edge_network4edge_network40Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network4edge_network41Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network4edge_network42Relu_output_0[id] = ((tensor_edge_network4edge_network41LayerNormalization_output_0[id] > 0 )? tensor_edge_network4edge_network41LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_370 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network4edge_network43Gemm_output_0[y_index + k] = tensor_edge_network43bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network4edge_network43Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network43weight, tensor_edge_network4edge_network42Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 371 --> edge_network4edge_network44Constant_output_0 {  }
// ---- Constant (no-op) 372 --> edge_network4edge_network44Constant_1_output_0 {  }
//---- Layer Normalization  operator op_373
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network4edge_network43Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network4edge_network43Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network4edge_network44LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network4edge_network44Constant_output_0[axis_1] * invStdDev * (tensor_edge_network4edge_network43Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network4edge_network44Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network4edge_network45Relu_output_0[id] = ((tensor_edge_network4edge_network44LayerNormalization_output_0[id] > 0 )? tensor_edge_network4edge_network44LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_375 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network4edge_network47Relu_output_0[y_index + k] = tensor_edge_network46bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network4edge_network47Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network46weight, tensor_edge_network4edge_network45Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network4edge_network47Relu_output_0[id] = ((tensor_edge_network4edge_network47Relu_output_0[id] > 0 )? tensor_edge_network4edge_network47Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 377 --> Constant_56_output_0 {  }
//--------- Gather op_378 --> Gather_24_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 380 --> Constant_57_output_0 {  }
//--------- Gather op_381 --> Gather_25_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 383 --> Constant_58_output_0 {  }
//--------- Gather op_384 --> Gather_26_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 385 --> Constant_59_output_0 {  }
// ---- Constant (no-op) 387 --> Constant_60_output_0 {  }

//--------- Concat op_389 --> Concat_25_output_0  { 2 }
// ---- Constant (no-op) 390 --> Constant_61_output_0 {  }
// ---- ConstantOfShape (no-op) 393 --> ConstantOfShape_16_output_0 {  }
// ---- Constant (no-op) 394 --> Constant_62_output_0 {  }
   
//------ Expand op_398 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_8_output_0, num_edges * 128));
// ---- Constant (no-op) 399 --> onnxUnsqueeze_531 {  }
// ---- Constant (no-op) 401 --> onnxUnsqueeze_533 {  }

//--------- Concat op_403 --> Concat_26_output_0  { 2 }
// ---- Constant (no-op) 404 --> onnxUnsqueeze_536 {  }
// ---- Constant (no-op) 406 --> onnxUnsqueeze_538 {  }

//--------- Concat op_408 --> Concat_27_output_0  { 2 }

//--------- ConstantOfShape 409 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_17_output_0, tensor_ConstantOfShape_17_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 411 --> Constant_63_output_0 {  }
///------- Slice operator 412---> Slice_8_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_8_output_0 = tensor_edge_network4edge_network47Relu_output_0;
   
//-------- ScatterElements  --- 413
   std::copy(tensor_ConstantOfShape_17_output_0, tensor_ConstantOfShape_17_output_0 + num_spacepoints * 128, tensor_ScatterElements_8_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_8_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_8_output_0[outIndex] = tensor_ScatterElements_8_output_0[outIndex] + tensor_Slice_8_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 414 --> Constant_64_output_0 {  }
// ---- Constant (no-op) 416 --> Constant_65_output_0 {  }

//--------- Concat op_418 --> Concat_28_output_0  { 2 }
// ---- Constant (no-op) 419 --> Constant_66_output_0 {  }
// ---- ConstantOfShape (no-op) 422 --> ConstantOfShape_18_output_0 {  }
// ---- Constant (no-op) 423 --> Constant_67_output_0 {  }
   
//------ Expand op_427 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_9_output_0, num_edges * 128));

//--------- ConstantOfShape 428 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_19_output_0, tensor_ConstantOfShape_19_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 430 --> Constant_68_output_0 {  }
///------- Slice operator 431---> Slice_9_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_9_output_0 = tensor_edge_network4edge_network47Relu_output_0;
   
//-------- ScatterElements  --- 432
   std::copy(tensor_ConstantOfShape_19_output_0, tensor_ConstantOfShape_19_output_0 + num_spacepoints * 128, tensor_ScatterElements_9_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_9_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_9_output_0[outIndex] = tensor_ScatterElements_9_output_0[outIndex] + tensor_Slice_9_output_0[updateIndex];
      }
   }

//--------- Concat op_433 --> Concat_29_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_ScatterElements_8_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_ScatterElements_9_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_29_output_0[idxOut+iC] = tensor_node_network3node_network37Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_434 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network4node_network40Gemm_output_0[y_index + k] = tensor_node_network40bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network4node_network40Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network40weight, tensor_Concat_29_output_0, 1,nullptr);
// ---- Constant (no-op) 435 --> node_network4node_network41Constant_output_0 {  }
// ---- Constant (no-op) 436 --> node_network4node_network41Constant_1_output_0 {  }
//---- Layer Normalization  operator op_437
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network4node_network40Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network4node_network40Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network4node_network41LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network4node_network41Constant_output_0[axis_1] * invStdDev * (tensor_node_network4node_network40Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network4node_network41Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network4node_network42Relu_output_0[id] = ((tensor_node_network4node_network41LayerNormalization_output_0[id] > 0 )? tensor_node_network4node_network41LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_439 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network4node_network43Gemm_output_0[y_index + k] = tensor_node_network43bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network4node_network43Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network43weight, tensor_node_network4node_network42Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 440 --> node_network4node_network44Constant_output_0 {  }
// ---- Constant (no-op) 441 --> node_network4node_network44Constant_1_output_0 {  }
//---- Layer Normalization  operator op_442
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network4node_network43Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network4node_network43Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network4node_network44LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network4node_network44Constant_output_0[axis_1] * invStdDev * (tensor_node_network4node_network43Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network4node_network44Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network4node_network45Relu_output_0[id] = ((tensor_node_network4node_network44LayerNormalization_output_0[id] > 0 )? tensor_node_network4node_network44LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_444 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network4node_network47Relu_output_0[y_index + k] = tensor_node_network46bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network4node_network47Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network46weight, tensor_node_network4node_network45Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network4node_network47Relu_output_0[id] = ((tensor_node_network4node_network47Relu_output_0[id] > 0 )? tensor_node_network4node_network47Relu_output_0[id] : 0);
   }
//--------- Gather op_445 --> Gather_27_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_27_output_0[y_index] = tensor_node_network4node_network47Relu_output_0[x_index];
      }
   }
//--------- Gather op_446 --> Gather_28_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_28_output_0[y_index] = tensor_node_network4node_network47Relu_output_0[x_index];
      }
   }

//--------- Concat op_447 --> Concat_30_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_30_output_0[idxOut+iC] = tensor_edge_network4edge_network47Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_30_output_0[idxOut+iC] = tensor_Gather_27_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_30_output_0[idxOut+iC] = tensor_Gather_28_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_448 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network5edge_network50Gemm_output_0[y_index + k] = tensor_edge_network50bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network5edge_network50Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network50weight, tensor_Concat_30_output_0, 1,nullptr);
// ---- Constant (no-op) 449 --> edge_network5edge_network51Constant_output_0 {  }
// ---- Constant (no-op) 450 --> edge_network5edge_network51Constant_1_output_0 {  }
//---- Layer Normalization  operator op_451
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network5edge_network50Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network5edge_network50Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network5edge_network51LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network5edge_network51Constant_output_0[axis_1] * invStdDev * (tensor_edge_network5edge_network50Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network5edge_network51Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network5edge_network52Relu_output_0[id] = ((tensor_edge_network5edge_network51LayerNormalization_output_0[id] > 0 )? tensor_edge_network5edge_network51LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_453 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network5edge_network53Gemm_output_0[y_index + k] = tensor_edge_network53bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network5edge_network53Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network53weight, tensor_edge_network5edge_network52Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 454 --> edge_network5edge_network54Constant_output_0 {  }
// ---- Constant (no-op) 455 --> edge_network5edge_network54Constant_1_output_0 {  }
//---- Layer Normalization  operator op_456
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network5edge_network53Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network5edge_network53Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network5edge_network54LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network5edge_network54Constant_output_0[axis_1] * invStdDev * (tensor_edge_network5edge_network53Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network5edge_network54Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network5edge_network55Relu_output_0[id] = ((tensor_edge_network5edge_network54LayerNormalization_output_0[id] > 0 )? tensor_edge_network5edge_network54LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_458 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network5edge_network57Relu_output_0[y_index + k] = tensor_edge_network56bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network5edge_network57Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network56weight, tensor_edge_network5edge_network55Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network5edge_network57Relu_output_0[id] = ((tensor_edge_network5edge_network57Relu_output_0[id] > 0 )? tensor_edge_network5edge_network57Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 460 --> Constant_69_output_0 {  }
//--------- Gather op_461 --> Gather_29_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 463 --> Constant_70_output_0 {  }
//--------- Gather op_464 --> Gather_30_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 466 --> Constant_71_output_0 {  }
//--------- Gather op_467 --> Gather_31_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 468 --> Constant_72_output_0 {  }
// ---- Constant (no-op) 470 --> Constant_73_output_0 {  }

//--------- Concat op_472 --> Concat_31_output_0  { 2 }
// ---- Constant (no-op) 473 --> Constant_74_output_0 {  }
// ---- ConstantOfShape (no-op) 476 --> ConstantOfShape_20_output_0 {  }
// ---- Constant (no-op) 477 --> Constant_75_output_0 {  }
   
//------ Expand op_481 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_10_output_0, num_edges * 128));
// ---- Constant (no-op) 482 --> onnxUnsqueeze_616 {  }
// ---- Constant (no-op) 484 --> onnxUnsqueeze_618 {  }

//--------- Concat op_486 --> Concat_32_output_0  { 2 }
// ---- Constant (no-op) 487 --> onnxUnsqueeze_621 {  }
// ---- Constant (no-op) 489 --> onnxUnsqueeze_623 {  }

//--------- Concat op_491 --> Concat_33_output_0  { 2 }

//--------- ConstantOfShape 492 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_21_output_0, tensor_ConstantOfShape_21_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 494 --> Constant_76_output_0 {  }
///------- Slice operator 495---> Slice_10_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_10_output_0 = tensor_edge_network5edge_network57Relu_output_0;
   
//-------- ScatterElements  --- 496
   std::copy(tensor_ConstantOfShape_21_output_0, tensor_ConstantOfShape_21_output_0 + num_spacepoints * 128, tensor_ScatterElements_10_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_10_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_10_output_0[outIndex] = tensor_ScatterElements_10_output_0[outIndex] + tensor_Slice_10_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 497 --> Constant_77_output_0 {  }
// ---- Constant (no-op) 499 --> Constant_78_output_0 {  }

//--------- Concat op_501 --> Concat_34_output_0  { 2 }
// ---- Constant (no-op) 502 --> Constant_79_output_0 {  }
// ---- ConstantOfShape (no-op) 505 --> ConstantOfShape_22_output_0 {  }
// ---- Constant (no-op) 506 --> Constant_80_output_0 {  }
   
//------ Expand op_510 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_11_output_0, num_edges * 128));

//--------- ConstantOfShape 511 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_23_output_0, tensor_ConstantOfShape_23_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 513 --> Constant_81_output_0 {  }
///------- Slice operator 514---> Slice_11_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_11_output_0 = tensor_edge_network5edge_network57Relu_output_0;
   
//-------- ScatterElements  --- 515
   std::copy(tensor_ConstantOfShape_23_output_0, tensor_ConstantOfShape_23_output_0 + num_spacepoints * 128, tensor_ScatterElements_11_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_11_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_11_output_0[outIndex] = tensor_ScatterElements_11_output_0[outIndex] + tensor_Slice_11_output_0[updateIndex];
      }
   }

//--------- Concat op_516 --> Concat_35_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_35_output_0[idxOut+iC] = tensor_ScatterElements_10_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_35_output_0[idxOut+iC] = tensor_ScatterElements_11_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_35_output_0[idxOut+iC] = tensor_node_network4node_network47Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_517 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network5node_network50Gemm_output_0[y_index + k] = tensor_node_network50bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network5node_network50Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network50weight, tensor_Concat_35_output_0, 1,nullptr);
// ---- Constant (no-op) 518 --> node_network5node_network51Constant_output_0 {  }
// ---- Constant (no-op) 519 --> node_network5node_network51Constant_1_output_0 {  }
//---- Layer Normalization  operator op_520
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network5node_network50Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network5node_network50Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network5node_network51LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network5node_network51Constant_output_0[axis_1] * invStdDev * (tensor_node_network5node_network50Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network5node_network51Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network5node_network52Relu_output_0[id] = ((tensor_node_network5node_network51LayerNormalization_output_0[id] > 0 )? tensor_node_network5node_network51LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_522 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network5node_network53Gemm_output_0[y_index + k] = tensor_node_network53bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network5node_network53Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network53weight, tensor_node_network5node_network52Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 523 --> node_network5node_network54Constant_output_0 {  }
// ---- Constant (no-op) 524 --> node_network5node_network54Constant_1_output_0 {  }
//---- Layer Normalization  operator op_525
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network5node_network53Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network5node_network53Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network5node_network54LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network5node_network54Constant_output_0[axis_1] * invStdDev * (tensor_node_network5node_network53Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network5node_network54Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network5node_network55Relu_output_0[id] = ((tensor_node_network5node_network54LayerNormalization_output_0[id] > 0 )? tensor_node_network5node_network54LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_527 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network5node_network57Relu_output_0[y_index + k] = tensor_node_network56bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network5node_network57Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network56weight, tensor_node_network5node_network55Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network5node_network57Relu_output_0[id] = ((tensor_node_network5node_network57Relu_output_0[id] > 0 )? tensor_node_network5node_network57Relu_output_0[id] : 0);
   }
//--------- Gather op_528 --> Gather_32_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_32_output_0[y_index] = tensor_node_network5node_network57Relu_output_0[x_index];
      }
   }
//--------- Gather op_529 --> Gather_33_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_33_output_0[y_index] = tensor_node_network5node_network57Relu_output_0[x_index];
      }
   }

//--------- Concat op_530 --> Concat_36_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_edge_network5edge_network57Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_Gather_32_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_36_output_0[idxOut+iC] = tensor_Gather_33_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_531 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network6edge_network60Gemm_output_0[y_index + k] = tensor_edge_network60bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network6edge_network60Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network60weight, tensor_Concat_36_output_0, 1,nullptr);
// ---- Constant (no-op) 532 --> edge_network6edge_network61Constant_output_0 {  }
// ---- Constant (no-op) 533 --> edge_network6edge_network61Constant_1_output_0 {  }
//---- Layer Normalization  operator op_534
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network6edge_network60Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network6edge_network60Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network6edge_network61LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network6edge_network61Constant_output_0[axis_1] * invStdDev * (tensor_edge_network6edge_network60Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network6edge_network61Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network6edge_network62Relu_output_0[id] = ((tensor_edge_network6edge_network61LayerNormalization_output_0[id] > 0 )? tensor_edge_network6edge_network61LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_536 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network6edge_network63Gemm_output_0[y_index + k] = tensor_edge_network63bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network6edge_network63Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network63weight, tensor_edge_network6edge_network62Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 537 --> edge_network6edge_network64Constant_output_0 {  }
// ---- Constant (no-op) 538 --> edge_network6edge_network64Constant_1_output_0 {  }
//---- Layer Normalization  operator op_539
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network6edge_network63Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network6edge_network63Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network6edge_network64LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network6edge_network64Constant_output_0[axis_1] * invStdDev * (tensor_edge_network6edge_network63Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network6edge_network64Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network6edge_network65Relu_output_0[id] = ((tensor_edge_network6edge_network64LayerNormalization_output_0[id] > 0 )? tensor_edge_network6edge_network64LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_541 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network6edge_network67Relu_output_0[y_index + k] = tensor_edge_network66bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network6edge_network67Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network66weight, tensor_edge_network6edge_network65Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network6edge_network67Relu_output_0[id] = ((tensor_edge_network6edge_network67Relu_output_0[id] > 0 )? tensor_edge_network6edge_network67Relu_output_0[id] : 0);
   }
// ---- Constant (no-op) 543 --> Constant_82_output_0 {  }
//--------- Gather op_544 --> Gather_34_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 546 --> Constant_83_output_0 {  }
//--------- Gather op_547 --> Gather_35_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 549 --> Constant_84_output_0 {  }
//--------- Gather op_550 --> Gather_36_output_0  {  }
//--------------------(constant)----------
// ---- Constant (no-op) 551 --> Constant_85_output_0 {  }
// ---- Constant (no-op) 553 --> Constant_86_output_0 {  }

//--------- Concat op_555 --> Concat_37_output_0  { 2 }
// ---- Constant (no-op) 556 --> Constant_87_output_0 {  }
// ---- ConstantOfShape (no-op) 559 --> ConstantOfShape_24_output_0 {  }
// ---- Constant (no-op) 560 --> Constant_88_output_0 {  }
   
//------ Expand op_564 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_12_output_0, num_edges * 128));
// ---- Constant (no-op) 565 --> onnxUnsqueeze_701 {  }
// ---- Constant (no-op) 567 --> onnxUnsqueeze_703 {  }

//--------- Concat op_569 --> Concat_38_output_0  { 2 }
// ---- Constant (no-op) 570 --> onnxUnsqueeze_706 {  }
// ---- Constant (no-op) 572 --> onnxUnsqueeze_708 {  }

//--------- Concat op_574 --> Concat_39_output_0  { 2 }

//--------- ConstantOfShape 575 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_25_output_0, tensor_ConstantOfShape_25_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 577 --> Constant_89_output_0 {  }
///------- Slice operator 578---> Slice_12_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_12_output_0 = tensor_edge_network6edge_network67Relu_output_0;
   
//-------- ScatterElements  --- 579
   std::copy(tensor_ConstantOfShape_25_output_0, tensor_ConstantOfShape_25_output_0 + num_spacepoints * 128, tensor_ScatterElements_12_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_12_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_12_output_0[outIndex] = tensor_ScatterElements_12_output_0[outIndex] + tensor_Slice_12_output_0[updateIndex];
      }
   }
// ---- Constant (no-op) 580 --> Constant_90_output_0 {  }
// ---- Constant (no-op) 582 --> Constant_91_output_0 {  }

//--------- Concat op_584 --> Concat_40_output_0  { 2 }
// ---- Constant (no-op) 585 --> Constant_92_output_0 {  }
// ---- ConstantOfShape (no-op) 588 --> ConstantOfShape_26_output_0 {  }
// ---- Constant (no-op) 589 --> Constant_93_output_0 {  }
   
//------ Expand op_593 --> { num_edges , 128 }
   // Broadcasting uninitialized tensor Unsqueeze_7_output_0
   TMVA::Experimental::SOFIE::UTILITY::UnidirectionalBroadcast<int64_t>(tensor_Unsqueeze_7_output_0, { num_edges , 1 }, { num_edges , 128 }, std::span<int64_t>(tensor_Expand_13_output_0, num_edges * 128));

//--------- ConstantOfShape 594 --> { num_spacepoints , 128 }
   std::fill(tensor_ConstantOfShape_27_output_0, tensor_ConstantOfShape_27_output_0 + num_spacepoints * 128, 0);
// ---- Constant (no-op) 596 --> Constant_94_output_0 {  }
///------- Slice operator 597---> Slice_13_output_0 { num_edges , 128 }

/// Slice is just an identity (copy pointers) 
   tensor_Slice_13_output_0 = tensor_edge_network6edge_network67Relu_output_0;
   
//-------- ScatterElements  --- 598
   std::copy(tensor_ConstantOfShape_27_output_0, tensor_ConstantOfShape_27_output_0 + num_spacepoints * 128, tensor_ScatterElements_13_output_0);
   for (int i0 = 0; i0 < num_edges; i0++) {
      int s0 = 128 * i0;
      for (int i1 = 0; i1 < 128; i1++) {
         int updateIndex = s0 + i1;
         int iAxis = tensor_Expand_13_output_0[updateIndex];
         if (iAxis < 0) iAxis += num_spacepoints;
         int  outIndex = 128*iAxis + i1;
         tensor_ScatterElements_13_output_0[outIndex] = tensor_ScatterElements_13_output_0[outIndex] + tensor_Slice_13_output_0[updateIndex];
      }
   }

//--------- Concat op_599 --> Concat_41_output_0  { num_spacepoints , 384 }
   for (size_t i0 = 0; i0 < num_spacepoints; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_41_output_0[idxOut+iC] = tensor_ScatterElements_12_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_41_output_0[idxOut+iC] = tensor_ScatterElements_13_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_41_output_0[idxOut+iC] = tensor_node_network5node_network57Relu_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_600 { num_spacepoints , 384 } * { 128 , 384 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network6node_network60Gemm_output_0[y_index + k] = tensor_node_network60bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network6node_network60Gemm_output_0, true, false, 128, num_spacepoints, 384, 1, tensor_node_network60weight, tensor_Concat_41_output_0, 1,nullptr);
// ---- Constant (no-op) 601 --> node_network6node_network61Constant_output_0 {  }
// ---- Constant (no-op) 602 --> node_network6node_network61Constant_1_output_0 {  }
//---- Layer Normalization  operator op_603
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network6node_network60Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network6node_network60Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network6node_network61LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network6node_network61Constant_output_0[axis_1] * invStdDev * (tensor_node_network6node_network60Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network6node_network61Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network6node_network62Relu_output_0[id] = ((tensor_node_network6node_network61LayerNormalization_output_0[id] > 0 )? tensor_node_network6node_network61LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_605 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network6node_network63Gemm_output_0[y_index + k] = tensor_node_network63bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network6node_network63Gemm_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network63weight, tensor_node_network6node_network62Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 606 --> node_network6node_network64Constant_output_0 {  }
// ---- Constant (no-op) 607 --> node_network6node_network64Constant_1_output_0 {  }
//---- Layer Normalization  operator op_608
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_spacepoints; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_node_network6node_network63Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_node_network6node_network63Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_node_network6node_network64LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_node_network6node_network64Constant_output_0[axis_1] * invStdDev * (tensor_node_network6node_network63Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_node_network6node_network64Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network6node_network65Relu_output_0[id] = ((tensor_node_network6node_network64LayerNormalization_output_0[id] > 0 )? tensor_node_network6node_network64LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_610 { num_spacepoints , 128 } * { 128 , 128 } -> { num_spacepoints , 128 }
   for (size_t j = 0; j < num_spacepoints; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_node_network6node_network67Relu_output_0[y_index + k] = tensor_node_network66bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_node_network6node_network67Relu_output_0, true, false, 128, num_spacepoints, 128, 1, tensor_node_network66weight, tensor_node_network6node_network65Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_spacepoints * 128 ; id++){
      tensor_node_network6node_network67Relu_output_0[id] = ((tensor_node_network6node_network67Relu_output_0[id] > 0 )? tensor_node_network6node_network67Relu_output_0[id] : 0);
   }
//--------- Gather op_611 --> Gather_37_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_output_0[i] < 0)
         tensor_Gather_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_37_output_0[y_index] = tensor_node_network6node_network67Relu_output_0[x_index];
      }
   }
//--------- Gather op_612 --> Gather_38_output_0  { num_edges , 128 }
   // correct in case of negative gather indices
   for (size_t i = 0; i < num_edges; i++){
      if (tensor_Gather_1_output_0[i] < 0)
         tensor_Gather_1_output_0[i] += num_spacepoints;
   }
   for (size_t i_0 = 0; i_0 < num_edges; i_0++) {
      for (size_t j_1 = 0; j_1 < 128; j_1++) {
         size_t y_index = i_0 * 128 + j_1;
         size_t i_index = i_0;
         size_t k = static_cast<size_t>(tensor_Gather_1_output_0[i_index]);
         size_t x_index = k * 128 +  j_1;
         tensor_Gather_38_output_0[y_index] = tensor_node_network6node_network67Relu_output_0[x_index];
      }
   }

//--------- Concat op_613 --> Concat_42_output_0  { num_edges , 384 }
   for (size_t i0 = 0; i0 < num_edges; ++i0) {
         int idxOut = 384*i0;
         int idxIn0 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_42_output_0[idxOut+iC] = tensor_edge_network6edge_network67Relu_output_0[idxIn0+iC];
         }
         idxOut += 128;
         int idxIn1 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_42_output_0[idxOut+iC] = tensor_Gather_37_output_0[idxIn1+iC];
         }
         idxOut += 128;
         int idxIn2 = 128*i0;
         for (size_t iC = 0; iC < 128; ++iC) {
            tensor_Concat_42_output_0[idxOut+iC] = tensor_Gather_38_output_0[idxIn2+iC];
         }
   }

//--------- Gemm op_614 { num_edges , 384 } * { 128 , 384 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network7edge_network70Gemm_output_0[y_index + k] = tensor_edge_network70bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network7edge_network70Gemm_output_0, true, false, 128, num_edges, 384, 1, tensor_edge_network70weight, tensor_Concat_42_output_0, 1,nullptr);
// ---- Constant (no-op) 615 --> edge_network7edge_network71Constant_output_0 {  }
// ---- Constant (no-op) 616 --> edge_network7edge_network71Constant_1_output_0 {  }
//---- Layer Normalization  operator op_617
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network7edge_network70Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network7edge_network70Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network7edge_network71LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network7edge_network71Constant_output_0[axis_1] * invStdDev * (tensor_edge_network7edge_network70Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network7edge_network71Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network7edge_network72Relu_output_0[id] = ((tensor_edge_network7edge_network71LayerNormalization_output_0[id] > 0 )? tensor_edge_network7edge_network71LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_619 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network7edge_network73Gemm_output_0[y_index + k] = tensor_edge_network73bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network7edge_network73Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network73weight, tensor_edge_network7edge_network72Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 620 --> edge_network7edge_network74Constant_output_0 {  }
// ---- Constant (no-op) 621 --> edge_network7edge_network74Constant_1_output_0 {  }
//---- Layer Normalization  operator op_622
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_network7edge_network73Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_network7edge_network73Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_network7edge_network74LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_network7edge_network74Constant_output_0[axis_1] * invStdDev * (tensor_edge_network7edge_network73Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_network7edge_network74Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network7edge_network75Relu_output_0[id] = ((tensor_edge_network7edge_network74LayerNormalization_output_0[id] > 0 )? tensor_edge_network7edge_network74LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_624 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_network7edge_network77Relu_output_0[y_index + k] = tensor_edge_network76bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_network7edge_network77Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_network76weight, tensor_edge_network7edge_network75Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_network7edge_network77Relu_output_0[id] = ((tensor_edge_network7edge_network77Relu_output_0[id] > 0 )? tensor_edge_network7edge_network77Relu_output_0[id] : 0);
   }

//--------- Gemm op_625 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_decoderedge_decoder0Gemm_output_0[y_index + k] = tensor_edge_decoder0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_decoderedge_decoder0Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_decoder0weight, tensor_edge_network7edge_network77Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 626 --> edge_decoderedge_decoder1Constant_output_0 {  }
// ---- Constant (no-op) 627 --> edge_decoderedge_decoder1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_628
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_decoderedge_decoder0Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_decoderedge_decoder0Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_decoderedge_decoder1LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_decoderedge_decoder1Constant_output_0[axis_1] * invStdDev * (tensor_edge_decoderedge_decoder0Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_decoderedge_decoder1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_decoderedge_decoder2Relu_output_0[id] = ((tensor_edge_decoderedge_decoder1LayerNormalization_output_0[id] > 0 )? tensor_edge_decoderedge_decoder1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_630 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_decoderedge_decoder3Gemm_output_0[y_index + k] = tensor_edge_decoder3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_decoderedge_decoder3Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_decoder3weight, tensor_edge_decoderedge_decoder2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 631 --> edge_decoderedge_decoder4Constant_output_0 {  }
// ---- Constant (no-op) 632 --> edge_decoderedge_decoder4Constant_1_output_0 {  }
//---- Layer Normalization  operator op_633
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_decoderedge_decoder3Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_decoderedge_decoder3Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_decoderedge_decoder4LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_decoderedge_decoder4Constant_output_0[axis_1] * invStdDev * (tensor_edge_decoderedge_decoder3Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_decoderedge_decoder4Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_decoderedge_decoder5Relu_output_0[id] = ((tensor_edge_decoderedge_decoder4LayerNormalization_output_0[id] > 0 )? tensor_edge_decoderedge_decoder4LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_635 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_decoderedge_decoder7Relu_output_0[y_index + k] = tensor_edge_decoder6bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_decoderedge_decoder7Relu_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_decoder6weight, tensor_edge_decoderedge_decoder5Relu_output_0, 1,nullptr);
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_decoderedge_decoder7Relu_output_0[id] = ((tensor_edge_decoderedge_decoder7Relu_output_0[id] > 0 )? tensor_edge_decoderedge_decoder7Relu_output_0[id] : 0);
   }

//--------- Gemm op_636 { num_edges , 128 } * { 128 , 128 } -> { num_edges , 128 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = 128 * j;
      for (size_t k = 0; k < 128; k++) { 
         tensor_edge_output_transformedge_output_transform0Gemm_output_0[y_index + k] = tensor_edge_output_transform0bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_output_transformedge_output_transform0Gemm_output_0, true, false, 128, num_edges, 128, 1, tensor_edge_output_transform0weight, tensor_edge_decoderedge_decoder7Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 637 --> edge_output_transformedge_output_transform1Constant_output_0 {  }
// ---- Constant (no-op) 638 --> edge_output_transformedge_output_transform1Constant_1_output_0 {  }
//---- Layer Normalization  operator op_639
   // Compute the mean
   for (size_t axis_0 = 0; axis_0 < num_edges; axis_0++) {
      float mean = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++) {
         mean += tensor_edge_output_transformedge_output_transform0Gemm_output_0[axis_0 * 128 + axis_1];
      }
      mean  /= float(128);
   // Compute the inverse Standard Deviation
      float sum = 0.;
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         float tmp = tensor_edge_output_transformedge_output_transform0Gemm_output_0[axis_0 * 128 + axis_1] - mean;
         sum += tmp*tmp;
      }
      float invStdDev = 1 / std::sqrt(sum / float(128) + 1e-05);
   // Y = Scale o InvStdDev (X - Mean)
      for (size_t axis_1 = 0; axis_1 < 128; axis_1++){
         tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0[axis_0 * 128 + axis_1] = tensor_edge_output_transformedge_output_transform1Constant_output_0[axis_1] * invStdDev * (tensor_edge_output_transformedge_output_transform0Gemm_output_0[axis_0 * 128 + axis_1] - mean) + tensor_edge_output_transformedge_output_transform1Constant_1_output_0[axis_1];
      }
   }

//------ RELU
   for (int id = 0; id < num_edges * 128 ; id++){
      tensor_edge_output_transformedge_output_transform2Relu_output_0[id] = ((tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0[id] > 0 )? tensor_edge_output_transformedge_output_transform1LayerNormalization_output_0[id] : 0);
   }

//--------- Gemm op_641 { num_edges , 128 } * { 1 , 128 } -> { num_edges , 1 }
   for (size_t j = 0; j < num_edges; j++) { 
      size_t y_index = j;
      for (size_t k = 0; k < 1; k++) { 
         tensor_edge_output_transformedge_output_transform3Gemm_output_0[y_index + k] = tensor_edge_output_transform3bias[k];
      }
   }
   TMVA::Experimental::SOFIE::Gemm_Call(tensor_edge_output_transformedge_output_transform3Gemm_output_0, true, false, 1, num_edges, 128, 1, tensor_edge_output_transform3weight, tensor_edge_output_transformedge_output_transform2Relu_output_0, 1,nullptr);
// ---- Constant (no-op) 642 --> Constant_95_output_0 {  }
   ///--------Squeeze operator 643 --> { num_edges }
   std::copy( tensor_edge_output_transformedge_output_transform3Gemm_output_0, tensor_edge_output_transformedge_output_transform3Gemm_output_0 + num_edges, tensor_Squeeze_output_0);

//------ CAST 644 ---> output  { num_edges }
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

} //TMVA_SOFIE_gnn_large

#endif  // ROOT_TMVA_SOFIE_GNN_LARGE
