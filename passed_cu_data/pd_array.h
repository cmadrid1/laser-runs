#include <vector>

// {CU,RBX,Run,pd_ch,uhtr_ch,shunt,max_adc,max_fc,result}
std::vector< std::vector<double> > pd_array = {
{6, 0, 1, 0, 0, 31, 185, 33393.60, 1},
{6, 0, 1, 1, 1, 31, 169, 20264.80, 1},
{6, 0, 2, 0, 0, 31, 185, 33393.60, 1},
{6, 0, 2, 1, 1, 31, 170, 21058.40, 1},
{6, 0, 3, 0, 0, 31, 186, 34980.80, 1},
{6, 0, 3, 1, 1, 31, 171, 21852.00, 1},
{6, 3, 4, 2, 98, 31, 197, 47629.60, 1},
{6, 3, 5, 3, 99, 31, 201, 53978.40, 1},
{6, 3, 6, 4, 100, 31, 200, 52391.20, 1},
{6, 3, 7, 5, 101, 31, 201, 53978.40, 1},
{7, 0, 1, 0, 0, 31, 145, 8555.20, 1},
{7, 0, 1, 1, 1, 31, 117, 3646.00, 1},
{7, 0, 2, 0, 0, 31, 137, 6664.80, 1},
{7, 0, 2, 1, 1, 31, 114, 3348.40, 1},
{7, 0, 3, 0, 0, 31, 138, 6863.20, 1},
{7, 0, 3, 1, 1, 31, 114, 3348.40, 1},
{7, 0, 4, 2, 2, 31, 141, 7458.40, 1},
{7, 0, 5, 3, 3, 31, 255, 343534.40, 1},
{7, 0, 6, 4, 4, 31, 255, 343534.40, 1},
{7, 0, 7, 5, 5, 31, 255, 343534.40, 1},
{9, 0, 1, 0, 0, 31, 8, 24.75, 0},
{9, 0, 1, 1, 1, 31, 8, 24.75, 0},
{9, 0, 2, 0, 0, 31, 7, 21.65, 0},
{9, 0, 2, 1, 1, 31, 6, 18.55, 0},
{9, 0, 3, 0, 0, 31, 153, 11729.60, 1},
{9, 0, 3, 1, 1, 31, 141, 7458.40, 1},
{9, 0, 4, 2, 2, 31, 44, 277.80, 0},
{9, 0, 5, 3, 3, 31, 108, 2753.20, 1},
{11, 0, 1, 0, 0, 31, 195, 44455.20, 1},
{11, 0, 1, 1, 1, 31, 181, 29788.00, 1},
{11, 0, 2, 0, 0, 31, 195, 44455.20, 1},
{11, 0, 2, 1, 1, 31, 181, 29788.00, 1},
{11, 0, 3, 0, 0, 31, 195, 44455.20, 1},
{11, 0, 3, 1, 1, 31, 182, 30581.60, 1},
{11, 0, 4, 2, 2, 31, 214, 84933.60, 1},
{11, 0, 5, 3, 3, 31, 215, 88108.00, 1},
{11, 0, 6, 4, 4, 31, 62, 569.80, 0},
{11, 4, 4, 2, 110, 31, 199, 50804.00, 1},
{11, 4, 5, 3, 111, 31, 201, 53978.40, 1},
{11, 4, 6, 4, 112, 31, 198, 49216.80, 1},
{11, 4, 7, 5, 113, 31, 200, 52391.20, 1},
{12, 0, 1, 0, 0, 31, 200, 52391.20, 1},
{12, 0, 1, 1, 1, 31, 198, 49216.80, 1},
{12, 0, 2, 0, 0, 31, 200, 52391.20, 1},
{12, 0, 2, 1, 1, 31, 198, 49216.80, 1},
{12, 0, 3, 0, 0, 31, 200, 52391.20, 1},
{12, 0, 3, 1, 1, 31, 197, 47629.60, 1},
{12, 0, 4, 2, 2, 31, 212, 78584.80, 1},
{12, 0, 5, 3, 3, 31, 14, 43.35, 0},
{12, 0, 6, 4, 4, 31, 8, 24.75, 0},
{12, 5, 4, 2, 122, 31, 199, 50804.00, 1},
{12, 5, 5, 3, 123, 31, 201, 53978.40, 1},
{12, 5, 6, 4, 124, 31, 200, 52391.20, 1},
{12, 5, 7, 5, 125, 31, 199, 50804.00, 1},
{13, 0, 1, 0, 0, 31, 201, 53978.40, 1},
{13, 0, 1, 1, 1, 31, 200, 52391.20, 1},
{13, 0, 2, 0, 0, 31, 201, 53978.40, 1},
{13, 0, 2, 1, 1, 31, 200, 52391.20, 1},
{13, 0, 3, 0, 0, 31, 201, 53978.40, 1},
{13, 0, 3, 1, 1, 31, 199, 50804.00, 1},
{13, 0, 4, 2, 2, 31, 217, 94456.80, 1},
{13, 0, 5, 3, 3, 31, 219, 100805.60, 1},
{13, 0, 6, 4, 4, 31, 67, 603.80, 0},
{13, 0, 7, 5, 5, 31, 219, 100805.60, 1},
{13, 6, 4, 2, 134, 31, 199, 50804.00, 1},
{13, 6, 5, 3, 135, 31, 202, 55565.60, 1},
{13, 6, 6, 4, 136, 31, 203, 57152.80, 1},
{13, 6, 7, 5, 137, 31, 201, 53978.40, 1},
{14, 0, 1, 0, 0, 31, 199, 50804.00, 1},
{14, 0, 1, 1, 1, 31, 195, 44455.20, 1},
{14, 0, 2, 0, 0, 31, 199, 50804.00, 1},
{14, 0, 2, 1, 1, 31, 194, 42868.00, 1},
{14, 0, 3, 0, 0, 31, 199, 50804.00, 1},
{14, 0, 3, 1, 1, 31, 194, 42868.00, 1},
{14, 0, 4, 2, 2, 31, 205, 60327.20, 1},
{14, 0, 5, 3, 3, 31, 212, 78584.80, 1},
{14, 8, 4, 2, 14, 31, 200, 52391.20, 1},
{14, 8, 5, 3, 15, 31, 200, 52391.20, 1},
{14, 8, 6, 4, 16, 31, 200, 52391.20, 1},
{14, 8, 7, 5, 17, 31, 200, 52391.20, 1},
{15, 0, 1, 0, 0, 31, 170, 21058.40, 1},
{15, 0, 1, 1, 1, 31, 154, 12126.40, 1},
{15, 0, 2, 0, 0, 31, 189, 39742.40, 1},
{15, 0, 2, 1, 1, 31, 158, 13713.60, 1},
{15, 0, 3, 0, 0, 31, 189, 39742.40, 1},
{15, 0, 3, 1, 1, 31, 160, 14507.20, 1},
{15, 2, 1, 0, 84, 31, 106, 2554.80, 1},
{15, 2, 1, 1, 85, 31, 90, 1435.80, 0},
{15, 2, 2, 0, 84, 31, 104, 2356.40, 1},
{15, 2, 2, 1, 85, 31, 89, 1386.20, 0},
{15, 2, 3, 0, 84, 31, 108, 2753.20, 1},
{15, 2, 3, 1, 85, 31, 93, 1584.60, 0},
{15, 2, 4, 2, 86, 31, 195, 44455.20, 1},
{15, 2, 5, 3, 87, 31, 198, 49216.80, 1},
{15, 2, 6, 4, 88, 31, 199, 50804.00, 1},
{15, 2, 7, 5, 89, 31, 197, 47629.60, 1},
{18, 0, 1, 0, 0, 31, 201, 53978.40, 1},
{18, 0, 1, 1, 1, 31, 199, 50804.00, 1},
{18, 0, 2, 0, 0, 31, 201, 53978.40, 1},
{18, 0, 2, 1, 1, 31, 199, 50804.00, 1},
{18, 0, 3, 0, 0, 31, 201, 53978.40, 1},
{18, 0, 3, 1, 1, 31, 199, 50804.00, 1},
{18, 1, 1, 0, 72, 31, 156, 12920.00, 1},
{18, 1, 1, 1, 73, 31, 142, 7656.80, 1},
{18, 1, 2, 0, 72, 31, 158, 13713.60, 1},
{18, 1, 2, 1, 73, 31, 145, 8555.20, 1},
{18, 1, 3, 0, 72, 31, 157, 13316.80, 1},
{18, 1, 3, 1, 73, 31, 144, 8158.40, 1},
{18, 1, 4, 2, 74, 31, 198, 49216.80, 1},
{18, 1, 5, 3, 75, 31, 199, 50804.00, 1},
{18, 1, 6, 4, 76, 31, 197, 47629.60, 1},
{18, 1, 7, 5, 77, 31, 196, 46042.40, 1},
{20, 0, 1, 0, 0, 31, 179, 28200.80, 1},
{20, 0, 1, 1, 1, 31, 167, 18677.60, 1},
{20, 0, 2, 0, 0, 31, 182, 30581.60, 1},
{20, 0, 2, 1, 1, 31, 167, 18677.60, 1},
{20, 0, 3, 0, 0, 31, 178, 27407.20, 1},
{20, 0, 3, 1, 1, 31, 165, 17090.40, 1},
{20, 0, 4, 2, 2, 31, 255, 343534.40, 1},
{20, 0, 5, 3, 3, 31, 255, 343534.40, 1},
{20, 0, 6, 4, 4, 31, 255, 343534.40, 1},
{20, 0, 7, 5, 5, 31, 255, 343534.40, 1},
{23, 0, 1, 0, 0, 31, 201, 53978.40, 1},
{23, 0, 1, 1, 1, 31, 199, 50804.00, 1},
{23, 0, 2, 0, 0, 31, 201, 53978.40, 1},
{23, 0, 2, 1, 1, 31, 200, 52391.20, 1},
{23, 0, 3, 0, 0, 31, 201, 53978.40, 1},
{23, 0, 3, 1, 1, 31, 200, 52391.20, 1},
{23, 0, 4, 2, 2, 31, 211, 75410.40, 1},
{23, 0, 5, 3, 3, 31, 212, 78584.80, 1},
{23, 0, 6, 4, 4, 31, 67, 603.80, 0},
{23, 0, 7, 5, 5, 31, 213, 81759.20, 1},
{23, 11, 4, 2, 50, 31, 199, 50804.00, 1},
{23, 11, 5, 3, 51, 31, 200, 52391.20, 1},
{23, 11, 6, 4, 52, 31, 200, 52391.20, 1},
{23, 11, 7, 5, 53, 31, 200, 52391.20, 1},
{24, 0, 1, 0, 0, 31, 201, 53978.40, 1},
{24, 0, 1, 1, 1, 31, 198, 49216.80, 1},
{24, 0, 2, 0, 0, 31, 201, 53978.40, 1},
{24, 0, 2, 1, 1, 31, 198, 49216.80, 1},
{24, 0, 3, 0, 0, 31, 201, 53978.40, 1},
{24, 0, 3, 1, 1, 31, 198, 49216.80, 1},
{24, 0, 4, 2, 2, 31, 207, 63501.60, 1},
{24, 0, 5, 3, 3, 31, 208, 65887.20, 1},
{24, 0, 6, 4, 4, 31, 208, 65887.20, 1},
{24, 0, 7, 5, 5, 31, 209, 69061.60, 1},
{25, 0, 1, 0, 0, 31, 199, 50804.00, 1},
{25, 0, 1, 1, 1, 31, 198, 49216.80, 1},
{25, 0, 2, 0, 0, 31, 199, 50804.00, 1},
{25, 0, 2, 1, 1, 31, 198, 49216.80, 1},
{25, 0, 3, 0, 0, 31, 200, 52391.20, 1},
{25, 0, 3, 1, 1, 31, 198, 49216.80, 1},
{25, 0, 4, 2, 2, 31, 209, 69061.60, 1},
{25, 0, 5, 3, 3, 31, 210, 72236.00, 1},
{25, 0, 6, 4, 4, 31, 211, 75410.40, 1},
{25, 0, 7, 5, 5, 31, 210, 72236.00, 1},
{27, 0, 1, 0, 0, 31, 27, 119.70, 0},
{27, 0, 1, 1, 1, 31, 21, 82.50, 0},
{27, 0, 2, 0, 0, 31, 17, 57.70, 0},
{27, 0, 2, 1, 1, 31, 13, 40.25, 0},
{27, 0, 3, 0, 0, 31, 17, 57.70, 0},
{27, 0, 3, 1, 1, 31, 13, 40.25, 0},
{27, 0, 4, 2, 2, 31, 169, 20264.80, 1},
{27, 0, 5, 3, 3, 31, 218, 97631.20, 1},
{27, 0, 6, 4, 4, 31, 66, 579.00, 0},
{27, 0, 7, 5, 5, 31, 215, 88108.00, 1},
{29, 0, 1, 0, 0, 31, 165, 17090.40, 1},
{29, 0, 1, 1, 1, 31, 148, 9745.60, 1},
{29, 0, 2, 0, 0, 31, 166, 17884.00, 1},
{29, 0, 2, 1, 1, 31, 149, 10142.40, 1},
{29, 0, 3, 0, 0, 31, 163, 15697.60, 1},
{29, 0, 3, 1, 1, 31, 147, 9348.80, 1},
{29, 0, 4, 2, 2, 31, 210, 72236.00, 1},
{29, 0, 5, 3, 3, 31, 210, 72236.00, 1},
{29, 0, 6, 4, 4, 31, 210, 72236.00, 1},
{29, 0, 7, 5, 5, 31, 210, 72236.00, 1},
{30, 0, 1, 0, 0, 31, 200, 52391.20, 1},
{30, 0, 1, 1, 1, 31, 194, 42868.00, 1},
{30, 0, 2, 0, 0, 31, 200, 52391.20, 1},
{30, 0, 2, 1, 1, 31, 191, 42916.80, 1},
{30, 0, 3, 0, 0, 31, 199, 50804.00, 1},
{30, 0, 3, 1, 1, 31, 189, 39742.40, 1},
{30, 0, 4, 2, 2, 31, 211, 75410.40, 1},
{30, 0, 5, 3, 3, 31, 212, 78584.80, 1},
{30, 0, 6, 4, 4, 31, 212, 78584.80, 1},
{30, 0, 7, 5, 5, 31, 213, 81759.20, 1},
{32, 0, 1, 0, 0, 31, 166, 17884.00, 1},
{32, 0, 1, 1, 1, 31, 148, 9745.60, 1},
{32, 0, 2, 0, 0, 31, 165, 17090.40, 1},
{32, 0, 2, 1, 1, 31, 147, 9348.80, 1},
{32, 0, 3, 0, 0, 31, 168, 19471.20, 1},
{32, 0, 3, 1, 1, 31, 149, 10142.40, 1},
{32, 0, 4, 2, 2, 31, 209, 69061.60, 1},
{32, 0, 5, 3, 3, 31, 213, 81759.20, 1},
{32, 0, 6, 4, 4, 31, 212, 78584.80, 1},
{32, 0, 7, 5, 5, 31, 211, 75410.40, 1},
{33, 0, 1, 0, 0, 31, 170, 21058.40, 1},
{33, 0, 1, 1, 1, 31, 158, 13713.60, 1},
{33, 0, 2, 0, 0, 31, 9, 27.85, 0},
{33, 0, 2, 1, 1, 31, 7, 21.65, 0},
{33, 0, 3, 0, 0, 31, 9, 27.85, 0},
{33, 0, 3, 1, 1, 31, 7, 21.65, 0},
{33, 0, 4, 2, 2, 31, 7, 21.65, 0},
{33, 0, 5, 3, 3, 31, 7, 21.65, 0},
{33, 0, 6, 4, 4, 31, 66, 579.00, 0},
{34, 0, 1, 0, 0, 31, 209, 69061.60, 1},
{34, 0, 1, 1, 1, 31, 191, 42916.80, 1},
{34, 0, 2, 0, 0, 31, 205, 60327.20, 1},
{34, 0, 2, 1, 1, 31, 188, 38155.20, 1},
{34, 0, 3, 0, 0, 31, 205, 60327.20, 1},
{34, 0, 3, 1, 1, 31, 188, 38155.20, 1},
{34, 0, 4, 2, 2, 31, 255, 343534.40, 1},
{34, 0, 5, 3, 3, 31, 255, 343534.40, 1},
{34, 0, 6, 4, 4, 31, 255, 343534.40, 1},
{34, 0, 7, 5, 5, 31, 255, 343534.40, 1},
{36, 0, 4, 2, 2, 31, 213, 81759.20, 1},
{36, 0, 5, 3, 3, 31, 213, 81759.20, 1},
{36, 0, 6, 4, 4, 31, 214, 84933.60, 1},
{36, 0, 7, 5, 5, 31, 212, 78584.80, 1},
{37, 0, 1, 0, 0, 31, 188, 38155.20, 1},
{37, 0, 1, 1, 1, 31, 173, 23439.20, 1},
{37, 0, 2, 0, 0, 31, 189, 39742.40, 1},
{37, 0, 2, 1, 1, 31, 173, 23439.20, 1},
{37, 0, 3, 0, 0, 31, 189, 39742.40, 1},
{37, 0, 3, 1, 1, 31, 173, 23439.20, 1},
{37, 0, 4, 2, 2, 31, 211, 75410.40, 1},
{37, 0, 5, 3, 3, 31, 210, 72236.00, 1},
{37, 0, 6, 4, 4, 31, 211, 75410.40, 1},
{37, 0, 7, 5, 5, 31, 211, 75410.40, 1},
{38, 0, 1, 0, 0, 31, 217, 94456.80, 1},
{38, 0, 1, 1, 1, 31, 203, 57152.80, 1},
{38, 0, 2, 0, 0, 31, 218, 97631.20, 1},
{38, 0, 2, 1, 1, 31, 203, 57152.80, 1},
{38, 0, 3, 0, 0, 31, 215, 88108.00, 1},
{38, 0, 3, 1, 1, 31, 202, 55565.60, 1},
{38, 0, 4, 2, 2, 31, 255, 343534.40, 1},
{38, 0, 5, 3, 3, 31, 255, 343534.40, 1},
{38, 0, 6, 4, 4, 31, 255, 343534.40, 1},
{38, 0, 7, 5, 5, 31, 255, 343534.40, 1},
{39, 0, 1, 0, 0, 31, 212, 78584.80, 1},
{39, 0, 1, 1, 1, 31, 197, 47629.60, 1},
{39, 0, 2, 0, 0, 31, 213, 81759.20, 1},
{39, 0, 2, 1, 1, 31, 198, 49216.80, 1},
{39, 0, 3, 0, 0, 31, 211, 75410.40, 1},
{39, 0, 3, 1, 1, 31, 197, 47629.60, 1},
{39, 0, 4, 2, 2, 31, 255, 343534.40, 1},
{39, 0, 5, 3, 3, 31, 255, 343534.40, 1},
{39, 0, 6, 4, 4, 31, 255, 343534.40, 1},
{39, 0, 7, 5, 5, 31, 255, 343534.40, 1},
{41, 0, 1, 0, 0, 31, 171, 21852.00, 1},
{41, 0, 1, 1, 1, 31, 155, 12523.20, 1},
{41, 0, 2, 0, 0, 31, 170, 21058.40, 1},
{41, 0, 2, 1, 1, 31, 155, 12523.20, 1},
{41, 0, 3, 0, 0, 31, 169, 20264.80, 1},
{41, 0, 3, 1, 1, 31, 153, 11729.60, 1},
{41, 0, 4, 2, 2, 31, 212, 78584.80, 1},
{41, 0, 5, 3, 3, 31, 213, 81759.20, 1},
{41, 0, 6, 4, 4, 31, 67, 603.80, 0},
{41, 0, 7, 5, 5, 31, 212, 78584.80, 1},
{42, 0, 1, 0, 0, 31, 106, 2554.80, 1},
{42, 0, 1, 1, 1, 31, 95, 1683.80, 0},
{42, 0, 2, 0, 0, 31, 168, 19471.20, 1},
{42, 0, 2, 1, 1, 31, 156, 12920.00, 1},
{42, 0, 3, 0, 0, 31, 199, 50804.00, 1},
{42, 0, 3, 1, 1, 31, 195, 44455.20, 1},
{42, 0, 4, 2, 2, 31, 216, 91282.40, 1},
{42, 0, 5, 3, 3, 31, 215, 88108.00, 1},
{42, 0, 6, 4, 4, 31, 214, 84933.60, 1},
{42, 0, 7, 5, 5, 31, 215, 88108.00, 1},
{43, 0, 1, 0, 0, 31, 202, 55565.60, 1},
{43, 0, 1, 1, 1, 31, 201, 53978.40, 1},
{43, 0, 2, 0, 0, 31, 201, 53978.40, 1},
{43, 0, 2, 1, 1, 31, 200, 52391.20, 1},
{43, 0, 3, 0, 0, 31, 201, 53978.40, 1},
{43, 0, 3, 1, 1, 31, 200, 52391.20, 1},
{43, 0, 4, 2, 2, 31, 215, 88108.00, 1},
{43, 0, 5, 3, 3, 31, 214, 84933.60, 1},
{43, 0, 6, 4, 4, 31, 213, 81759.20, 1},
{43, 0, 7, 5, 5, 31, 212, 78584.80, 1},
{44, 0, 1, 0, 0, 31, 201, 53978.40, 1},
{44, 0, 1, 1, 1, 31, 195, 44455.20, 1},
{44, 0, 2, 0, 0, 31, 201, 53978.40, 1},
{44, 0, 2, 1, 1, 31, 194, 42868.00, 1},
{44, 0, 3, 0, 0, 31, 201, 53978.40, 1},
{44, 0, 3, 1, 1, 31, 194, 42868.00, 1},
{44, 0, 4, 2, 2, 31, 212, 78584.80, 1},
{44, 0, 5, 3, 3, 31, 213, 81759.20, 1},
{44, 0, 6, 4, 4, 31, 214, 84933.60, 1},
{44, 0, 7, 5, 5, 31, 213, 81759.20, 1}
};
