#include <g3dvtk/ColorMapViridis.h>

using namespace g3dvtk;

const int NumberOfViridisColors_ = 1024;
unsigned char ViridisColors_[NumberOfViridisColors_][3] = {
	72, 0, 84,
	72, 0, 85,
	72, 0, 85,
	72, 0, 86,
	73, 0, 86,
	73, 0, 86,
	73, 0, 87,
	73, 0, 87,
	73, 0, 87,
	73, 0, 88,
	73, 0, 88,
	73, 0, 89,
	74, 0, 89,
	74, 0, 89,
	74, 0, 90,
	74, 0, 90,
	74, 1, 90,
	74, 1, 91,
	74, 1, 91,
	74, 2, 92,
	74, 2, 92,
	75, 2, 92,
	75, 3, 93,
	75, 3, 93,
	75, 3, 93,
	75, 4, 94,
	75, 4, 94,
	75, 5, 94,
	75, 5, 95,
	75, 5, 95,
	75, 6, 95,
	76, 6, 96,
	76, 7, 96,
	76, 7, 97,
	76, 7, 97,
	76, 8, 97,
	76, 8, 98,
	76, 9, 98,
	76, 9, 98,
	76, 10, 99,
	76, 10, 99,
	77, 10, 99,
	77, 11, 100,
	77, 11, 100,
	77, 12, 100,
	77, 12, 101,
	77, 13, 101,
	77, 13, 101,
	77, 13, 102,
	77, 14, 102,
	77, 14, 102,
	77, 15, 103,
	77, 15, 103,
	77, 15, 103,
	78, 16, 104,
	78, 16, 104,
	78, 17, 104,
	78, 17, 105,
	78, 17, 105,
	78, 18, 105,
	78, 18, 106,
	78, 19, 106,
	78, 19, 106,
	78, 19, 106,
	78, 20, 107,
	78, 20, 107,
	78, 20, 107,
	78, 21, 108,
	78, 21, 108,
	79, 22, 108,
	79, 22, 109,
	79, 22, 109,
	79, 23, 109,
	79, 23, 110,
	79, 23, 110,
	79, 24, 110,
	79, 24, 110,
	79, 24, 111,
	79, 25, 111,
	79, 25, 111,
	79, 26, 112,
	79, 26, 112,
	79, 26, 112,
	79, 27, 112,
	79, 27, 113,
	79, 27, 113,
	79, 28, 113,
	79, 28, 114,
	79, 28, 114,
	79, 29, 114,
	79, 29, 114,
	79, 29, 115,
	79, 30, 115,
	80, 30, 115,
	80, 30, 115,
	80, 31, 116,
	80, 31, 116,
	80, 31, 116,
	80, 32, 117,
	80, 32, 117,
	80, 32, 117,
	80, 33, 117,
	80, 33, 118,
	80, 33, 118,
	80, 34, 118,
	80, 34, 118,
	80, 34, 119,
	80, 35, 119,
	80, 35, 119,
	80, 35, 119,
	80, 36, 120,
	80, 36, 120,
	80, 36, 120,
	80, 37, 120,
	80, 37, 120,
	80, 37, 121,
	80, 38, 121,
	80, 38, 121,
	80, 38, 121,
	80, 39, 122,
	80, 39, 122,
	80, 39, 122,
	80, 40, 122,
	80, 40, 123,
	80, 40, 123,
	80, 41, 123,
	80, 41, 123,
	80, 41, 123,
	80, 42, 124,
	80, 42, 124,
	80, 42, 124,
	80, 43, 124,
	80, 43, 124,
	80, 43, 125,
	80, 44, 125,
	80, 44, 125,
	80, 44, 125,
	80, 45, 125,
	80, 45, 126,
	80, 45, 126,
	79, 46, 126,
	79, 46, 126,
	79, 46, 126,
	79, 47, 127,
	79, 47, 127,
	79, 47, 127,
	79, 48, 127,
	79, 48, 127,
	79, 48, 128,
	79, 49, 128,
	79, 49, 128,
	79, 49, 128,
	79, 49, 128,
	79, 50, 128,
	79, 50, 129,
	79, 50, 129,
	79, 51, 129,
	79, 51, 129,
	79, 51, 129,
	79, 52, 129,
	79, 52, 130,
	79, 52, 130,
	79, 53, 130,
	79, 53, 130,
	79, 53, 130,
	78, 54, 130,
	78, 54, 131,
	78, 54, 131,
	78, 55, 131,
	78, 55, 131,
	78, 55, 131,
	78, 55, 131,
	78, 56, 132,
	78, 56, 132,
	78, 56, 132,
	78, 57, 132,
	78, 57, 132,
	78, 57, 132,
	78, 58, 132,
	78, 58, 133,
	78, 58, 133,
	78, 59, 133,
	77, 59, 133,
	77, 59, 133,
	77, 60, 133,
	77, 60, 133,
	77, 60, 133,
	77, 60, 134,
	77, 61, 134,
	77, 61, 134,
	77, 61, 134,
	77, 62, 134,
	77, 62, 134,
	77, 62, 134,
	77, 63, 134,
	77, 63, 135,
	76, 63, 135,
	76, 63, 135,
	76, 64, 135,
	76, 64, 135,
	76, 64, 135,
	76, 65, 135,
	76, 65, 135,
	76, 65, 135,
	76, 66, 135,
	76, 66, 136,
	76, 66, 136,
	76, 66, 136,
	76, 67, 136,
	75, 67, 136,
	75, 67, 136,
	75, 68, 136,
	75, 68, 136,
	75, 68, 136,
	75, 69, 136,
	75, 69, 137,
	75, 69, 137,
	75, 69, 137,
	75, 70, 137,
	75, 70, 137,
	74, 70, 137,
	74, 71, 137,
	74, 71, 137,
	74, 71, 137,
	74, 71, 137,
	74, 72, 137,
	74, 72, 137,
	74, 72, 138,
	74, 73, 138,
	74, 73, 138,
	74, 73, 138,
	73, 74, 138,
	73, 74, 138,
	73, 74, 138,
	73, 74, 138,
	73, 75, 138,
	73, 75, 138,
	73, 75, 138,
	73, 76, 138,
	73, 76, 138,
	73, 76, 139,
	72, 76, 139,
	72, 77, 139,
	72, 77, 139,
	72, 77, 139,
	72, 78, 139,
	72, 78, 139,
	72, 78, 139,
	72, 78, 139,
	72, 79, 139,
	72, 79, 139,
	71, 79, 139,
	71, 80, 139,
	71, 80, 139,
	71, 80, 139,
	71, 80, 139,
	71, 81, 139,
	71, 81, 140,
	71, 81, 140,
	71, 81, 140,
	71, 82, 140,
	70, 82, 140,
	70, 82, 140,
	70, 83, 140,
	70, 83, 140,
	70, 83, 140,
	70, 83, 140,
	70, 84, 140,
	70, 84, 140,
	70, 84, 140,
	70, 84, 140,
	69, 85, 140,
	69, 85, 140,
	69, 85, 140,
	69, 86, 140,
	69, 86, 140,
	69, 86, 140,
	69, 86, 140,
	69, 87, 140,
	69, 87, 141,
	68, 87, 141,
	68, 87, 141,
	68, 88, 141,
	68, 88, 141,
	68, 88, 141,
	68, 89, 141,
	68, 89, 141,
	68, 89, 141,
	68, 89, 141,
	68, 90, 141,
	67, 90, 141,
	67, 90, 141,
	67, 90, 141,
	67, 91, 141,
	67, 91, 141,
	67, 91, 141,
	67, 91, 141,
	67, 92, 141,
	67, 92, 141,
	66, 92, 141,
	66, 93, 141,
	66, 93, 141,
	66, 93, 141,
	66, 93, 141,
	66, 94, 141,
	66, 94, 141,
	66, 94, 141,
	66, 94, 141,
	65, 95, 141,
	65, 95, 141,
	65, 95, 141,
	65, 95, 141,
	65, 96, 142,
	65, 96, 142,
	65, 96, 142,
	65, 96, 142,
	65, 97, 142,
	65, 97, 142,
	64, 97, 142,
	64, 97, 142,
	64, 98, 142,
	64, 98, 142,
	64, 98, 142,
	64, 99, 142,
	64, 99, 142,
	64, 99, 142,
	64, 99, 142,
	63, 100, 142,
	63, 100, 142,
	63, 100, 142,
	63, 100, 142,
	63, 101, 142,
	63, 101, 142,
	63, 101, 142,
	63, 101, 142,
	63, 102, 142,
	63, 102, 142,
	62, 102, 142,
	62, 102, 142,
	62, 103, 142,
	62, 103, 142,
	62, 103, 142,
	62, 103, 142,
	62, 104, 142,
	62, 104, 142,
	62, 104, 142,
	61, 104, 142,
	61, 105, 142,
	61, 105, 142,
	61, 105, 142,
	61, 105, 142,
	61, 106, 142,
	61, 106, 142,
	61, 106, 142,
	61, 106, 142,
	61, 107, 142,
	60, 107, 142,
	60, 107, 142,
	60, 107, 142,
	60, 108, 142,
	60, 108, 142,
	60, 108, 142,
	60, 108, 142,
	60, 109, 142,
	60, 109, 142,
	60, 109, 142,
	59, 109, 142,
	59, 110, 142,
	59, 110, 142,
	59, 110, 142,
	59, 110, 142,
	59, 111, 142,
	59, 111, 142,
	59, 111, 142,
	59, 111, 142,
	58, 111, 142,
	58, 112, 142,
	58, 112, 142,
	58, 112, 142,
	58, 112, 142,
	58, 113, 142,
	58, 113, 142,
	58, 113, 142,
	58, 113, 142,
	58, 114, 142,
	57, 114, 142,
	57, 114, 142,
	57, 114, 142,
	57, 115, 142,
	57, 115, 142,
	57, 115, 142,
	57, 115, 142,
	57, 116, 142,
	57, 116, 142,
	57, 116, 142,
	56, 116, 142,
	56, 117, 142,
	56, 117, 142,
	56, 117, 142,
	56, 117, 142,
	56, 118, 142,
	56, 118, 142,
	56, 118, 142,
	56, 118, 142,
	55, 119, 142,
	55, 119, 142,
	55, 119, 142,
	55, 119, 142,
	55, 120, 142,
	55, 120, 142,
	55, 120, 142,
	55, 120, 142,
	55, 120, 142,
	55, 121, 142,
	54, 121, 142,
	54, 121, 142,
	54, 121, 142,
	54, 122, 142,
	54, 122, 142,
	54, 122, 142,
	54, 122, 142,
	54, 123, 142,
	54, 123, 142,
	53, 123, 142,
	53, 123, 142,
	53, 124, 142,
	53, 124, 142,
	53, 124, 142,
	53, 124, 142,
	53, 125, 142,
	53, 125, 142,
	53, 125, 142,
	52, 125, 142,
	52, 126, 142,
	52, 126, 142,
	52, 126, 142,
	52, 126, 142,
	52, 126, 142,
	52, 127, 142,
	52, 127, 142,
	52, 127, 142,
	51, 127, 142,
	51, 128, 142,
	51, 128, 142,
	51, 128, 142,
	51, 128, 142,
	51, 129, 142,
	51, 129, 142,
	51, 129, 142,
	51, 129, 142,
	50, 130, 142,
	50, 130, 142,
	50, 130, 142,
	50, 130, 142,
	50, 131, 142,
	50, 131, 142,
	50, 131, 142,
	50, 131, 142,
	50, 131, 142,
	49, 132, 142,
	49, 132, 142,
	49, 132, 142,
	49, 132, 142,
	49, 133, 142,
	49, 133, 142,
	49, 133, 142,
	49, 133, 142,
	48, 134, 142,
	48, 134, 142,
	48, 134, 142,
	48, 134, 142,
	48, 135, 142,
	48, 135, 142,
	48, 135, 142,
	48, 135, 142,
	47, 136, 142,
	47, 136, 142,
	47, 136, 142,
	47, 136, 142,
	47, 136, 141,
	47, 137, 141,
	47, 137, 141,
	47, 137, 141,
	46, 137, 141,
	46, 138, 141,
	46, 138, 141,
	46, 138, 141,
	46, 138, 141,
	46, 139, 141,
	46, 139, 141,
	46, 139, 141,
	45, 139, 141,
	45, 140, 141,
	45, 140, 141,
	45, 140, 141,
	45, 140, 141,
	45, 141, 141,
	45, 141, 141,
	45, 141, 141,
	44, 141, 141,
	44, 142, 141,
	44, 142, 141,
	44, 142, 141,
	44, 142, 141,
	44, 142, 141,
	44, 143, 141,
	43, 143, 141,
	43, 143, 141,
	43, 143, 140,
	43, 144, 140,
	43, 144, 140,
	43, 144, 140,
	43, 144, 140,
	43, 145, 140,
	42, 145, 140,
	42, 145, 140,
	42, 145, 140,
	42, 146, 140,
	42, 146, 140,
	42, 146, 140,
	42, 146, 140,
	41, 147, 140,
	41, 147, 140,
	41, 147, 140,
	41, 147, 140,
	41, 147, 140,
	41, 148, 140,
	41, 148, 140,
	41, 148, 139,
	40, 148, 139,
	40, 149, 139,
	40, 149, 139,
	40, 149, 139,
	40, 149, 139,
	40, 150, 139,
	40, 150, 139,
	39, 150, 139,
	39, 150, 139,
	39, 151, 139,
	39, 151, 139,
	39, 151, 139,
	39, 151, 139,
	39, 152, 139,
	38, 152, 139,
	38, 152, 138,
	38, 152, 138,
	38, 152, 138,
	38, 153, 138,
	38, 153, 138,
	38, 153, 138,
	38, 153, 138,
	37, 154, 138,
	37, 154, 138,
	37, 154, 138,
	37, 154, 138,
	37, 155, 138,
	37, 155, 138,
	37, 155, 137,
	37, 155, 137,
	36, 156, 137,
	36, 156, 137,
	36, 156, 137,
	36, 156, 137,
	36, 157, 137,
	36, 157, 137,
	36, 157, 137,
	36, 157, 137,
	35, 158, 137,
	35, 158, 137,
	35, 158, 136,
	35, 158, 136,
	35, 158, 136,
	35, 159, 136,
	35, 159, 136,
	35, 159, 136,
	35, 159, 136,
	34, 160, 136,
	34, 160, 136,
	34, 160, 136,
	34, 160, 136,
	34, 161, 135,
	34, 161, 135,
	34, 161, 135,
	34, 161, 135,
	34, 162, 135,
	34, 162, 135,
	33, 162, 135,
	33, 162, 135,
	33, 162, 135,
	33, 163, 134,
	33, 163, 134,
	33, 163, 134,
	33, 163, 134,
	33, 164, 134,
	33, 164, 134,
	33, 164, 134,
	33, 164, 134,
	33, 165, 134,
	33, 165, 133,
	33, 165, 133,
	33, 165, 133,
	32, 166, 133,
	32, 166, 133,
	32, 166, 133,
	32, 166, 133,
	32, 167, 133,
	32, 167, 132,
	32, 167, 132,
	32, 167, 132,
	32, 167, 132,
	32, 168, 132,
	32, 168, 132,
	32, 168, 132,
	32, 168, 132,
	32, 169, 131,
	32, 169, 131,
	32, 169, 131,
	32, 169, 131,
	32, 170, 131,
	32, 170, 131,
	32, 170, 131,
	32, 170, 130,
	32, 171, 130,
	32, 171, 130,
	32, 171, 130,
	32, 171, 130,
	32, 171, 130,
	32, 172, 130,
	33, 172, 129,
	33, 172, 129,
	33, 172, 129,
	33, 173, 129,
	33, 173, 129,
	33, 173, 129,
	33, 173, 128,
	33, 174, 128,
	33, 174, 128,
	33, 174, 128,
	33, 174, 128,
	33, 174, 128,
	34, 175, 128,
	34, 175, 127,
	34, 175, 127,
	34, 175, 127,
	34, 176, 127,
	34, 176, 127,
	34, 176, 127,
	34, 176, 126,
	35, 177, 126,
	35, 177, 126,
	35, 177, 126,
	35, 177, 126,
	35, 177, 125,
	35, 178, 125,
	36, 178, 125,
	36, 178, 125,
	36, 178, 125,
	36, 179, 125,
	36, 179, 124,
	37, 179, 124,
	37, 179, 124,
	37, 179, 124,
	37, 180, 124,
	37, 180, 123,
	38, 180, 123,
	38, 180, 123,
	38, 181, 123,
	38, 181, 123,
	39, 181, 122,
	39, 181, 122,
	39, 182, 122,
	39, 182, 122,
	40, 182, 122,
	40, 182, 121,
	40, 182, 121,
	40, 183, 121,
	41, 183, 121,
	41, 183, 121,
	41, 183, 120,
	42, 184, 120,
	42, 184, 120,
	42, 184, 120,
	42, 184, 120,
	43, 184, 119,
	43, 185, 119,
	43, 185, 119,
	44, 185, 119,
	44, 185, 118,
	44, 186, 118,
	45, 186, 118,
	45, 186, 118,
	45, 186, 118,
	46, 186, 117,
	46, 187, 117,
	46, 187, 117,
	47, 187, 117,
	47, 187, 116,
	47, 188, 116,
	48, 188, 116,
	48, 188, 116,
	49, 188, 116,
	49, 188, 115,
	49, 189, 115,
	50, 189, 115,
	50, 189, 115,
	50, 189, 114,
	51, 189, 114,
	51, 190, 114,
	52, 190, 114,
	52, 190, 113,
	52, 190, 113,
	53, 191, 113,
	53, 191, 113,
	54, 191, 112,
	54, 191, 112,
	55, 191, 112,
	55, 192, 112,
	55, 192, 111,
	56, 192, 111,
	56, 192, 111,
	57, 192, 111,
	57, 193, 110,
	58, 193, 110,
	58, 193, 110,
	58, 193, 109,
	59, 193, 109,
	59, 194, 109,
	60, 194, 109,
	60, 194, 108,
	61, 194, 108,
	61, 195, 108,
	62, 195, 108,
	62, 195, 107,
	62, 195, 107,
	63, 195, 107,
	63, 196, 106,
	64, 196, 106,
	64, 196, 106,
	65, 196, 106,
	65, 196, 105,
	66, 197, 105,
	66, 197, 105,
	67, 197, 104,
	67, 197, 104,
	68, 197, 104,
	68, 198, 104,
	69, 198, 103,
	69, 198, 103,
	70, 198, 103,
	70, 198, 102,
	71, 199, 102,
	71, 199, 102,
	72, 199, 101,
	72, 199, 101,
	73, 199, 101,
	73, 200, 101,
	74, 200, 100,
	74, 200, 100,
	75, 200, 100,
	75, 200, 99,
	76, 201, 99,
	76, 201, 99,
	77, 201, 98,
	77, 201, 98,
	78, 201, 98,
	79, 201, 97,
	79, 202, 97,
	80, 202, 97,
	80, 202, 96,
	81, 202, 96,
	81, 202, 96,
	82, 203, 95,
	82, 203, 95,
	83, 203, 95,
	83, 203, 94,
	84, 203, 94,
	85, 204, 94,
	85, 204, 93,
	86, 204, 93,
	86, 204, 93,
	87, 204, 92,
	87, 204, 92,
	88, 205, 92,
	88, 205, 91,
	89, 205, 91,
	90, 205, 91,
	90, 205, 90,
	91, 206, 90,
	91, 206, 90,
	92, 206, 89,
	92, 206, 89,
	93, 206, 89,
	94, 206, 88,
	94, 207, 88,
	95, 207, 88,
	95, 207, 87,
	96, 207, 87,
	96, 207, 86,
	97, 207, 86,
	98, 208, 86,
	98, 208, 85,
	99, 208, 85,
	99, 208, 85,
	100, 208, 84,
	101, 209, 84,
	101, 209, 83,
	102, 209, 83,
	102, 209, 83,
	103, 209, 82,
	104, 209, 82,
	104, 210, 82,
	105, 210, 81,
	105, 210, 81,
	106, 210, 80,
	107, 210, 80,
	107, 210, 80,
	108, 211, 79,
	108, 211, 79,
	109, 211, 78,
	110, 211, 78,
	110, 211, 78,
	111, 211, 77,
	111, 212, 77,
	112, 212, 76,
	113, 212, 76,
	113, 212, 76,
	114, 212, 75,
	115, 212, 75,
	115, 212, 74,
	116, 213, 74,
	116, 213, 74,
	117, 213, 73,
	118, 213, 73,
	118, 213, 72,
	119, 213, 72,
	120, 214, 72,
	120, 214, 71,
	121, 214, 71,
	122, 214, 70,
	122, 214, 70,
	123, 214, 69,
	123, 214, 69,
	124, 215, 69,
	125, 215, 68,
	125, 215, 68,
	126, 215, 67,
	127, 215, 67,
	127, 215, 66,
	128, 215, 66,
	129, 216, 66,
	129, 216, 65,
	130, 216, 65,
	130, 216, 64,
	131, 216, 64,
	132, 216, 63,
	132, 216, 63,
	133, 217, 62,
	134, 217, 62,
	134, 217, 62,
	135, 217, 61,
	136, 217, 61,
	136, 217, 60,
	137, 217, 60,
	138, 218, 59,
	138, 218, 59,
	139, 218, 58,
	140, 218, 58,
	140, 218, 57,
	141, 218, 57,
	142, 218, 57,
	142, 218, 56,
	143, 219, 56,
	144, 219, 55,
	144, 219, 55,
	145, 219, 54,
	146, 219, 54,
	146, 219, 53,
	147, 219, 53,
	148, 219, 52,
	148, 220, 52,
	149, 220, 51,
	150, 220, 51,
	150, 220, 50,
	151, 220, 50,
	152, 220, 49,
	152, 220, 49,
	153, 220, 48,
	154, 221, 48,
	154, 221, 47,
	155, 221, 47,
	156, 221, 46,
	156, 221, 46,
	157, 221, 46,
	158, 221, 45,
	158, 221, 45,
	159, 221, 44,
	160, 222, 44,
	160, 222, 43,
	161, 222, 43,
	162, 222, 42,
	162, 222, 41,
	163, 222, 41,
	164, 222, 40,
	164, 222, 40,
	165, 222, 39,
	166, 223, 39,
	166, 223, 38,
	167, 223, 38,
	168, 223, 37,
	168, 223, 37,
	169, 223, 36,
	170, 223, 36,
	171, 223, 35,
	171, 223, 35,
	172, 224, 34,
	173, 224, 34,
	173, 224, 33,
	174, 224, 33,
	175, 224, 32,
	175, 224, 32,
	176, 224, 31,
	177, 224, 31,
	177, 224, 30,
	178, 224, 30,
	179, 225, 29,
	179, 225, 29,
	180, 225, 28,
	181, 225, 27,
	181, 225, 27,
	182, 225, 26,
	183, 225, 26,
	183, 225, 25,
	184, 225, 25,
	185, 225, 24,
	185, 225, 24,
	186, 226, 23,
	187, 226, 23,
	187, 226, 22,
	188, 226, 22,
	189, 226, 21,
	190, 226, 21,
	190, 226, 20,
	191, 226, 20,
	192, 226, 19,
	192, 226, 19,
	193, 226, 18,
	194, 227, 18,
	194, 227, 17,
	195, 227, 17,
	196, 227, 16,
	196, 227, 16,
	197, 227, 15,
	198, 227, 15,
	198, 227, 15,
	199, 227, 14,
	200, 227, 14,
	200, 227, 13,
	201, 227, 13,
	202, 228, 12,
	202, 228, 12,
	203, 228, 12,
	204, 228, 11,
	204, 228, 11,
	205, 228, 11,
	206, 228, 10,
	206, 228, 10,
	207, 228, 10,
	208, 228, 10,
	208, 228, 9,
	209, 228, 9,
	210, 229, 9,
	210, 229, 9,
	211, 229, 9,
	212, 229, 9,
	212, 229, 9,
	213, 229, 9,
	213, 229, 9,
	214, 229, 9,
	215, 229, 9,
	215, 229, 9,
	216, 229, 9,
	217, 229, 9,
	217, 229, 9,
	218, 230, 9,
	219, 230, 9,
	219, 230, 10,
	220, 230, 10,
	221, 230, 10,
	221, 230, 11,
	222, 230, 11,
	223, 230, 11,
	223, 230, 12,
	224, 230, 12,
	224, 230, 12,
	225, 230, 13,
	226, 230, 13,
	226, 231, 14,
	227, 231, 14,
	228, 231, 14,
	228, 231, 15,
	229, 231, 15,
	229, 231, 16,
	230, 231, 16,
	231, 231, 17,
	231, 231, 17,
	232, 231, 18,
	233, 231, 19,
	233, 231, 19,
	234, 231, 20,
	234, 232, 20,
	235, 232, 21,
	236, 232, 21,
	236, 232, 22,
	237, 232, 22,
	238, 232, 23,
	238, 232, 24,
	239, 232, 24,
	239, 232, 25,
	240, 232, 25,
	241, 232, 26,
	241, 232, 26,
	242, 233, 27,
	242, 233, 28,
	243, 233, 28
};

ColorMapViridis::ColorMapViridis() {

}

ColorMapViridis::~ColorMapViridis() {

}

std::string ColorMapViridis::Name() const {
	return "Viridis";
}

int ColorMapViridis::Size() const {
	return NumberOfViridisColors_;
}

void ColorMapViridis::ColorAt(int i, unsigned char& r, unsigned char& g, unsigned char& b) const {
	int index = i;
	if (index < 0) {
		index = 0;
	}
	if (index >= NumberOfViridisColors_) {
		index = NumberOfViridisColors_ - 1;
	}
	r = ViridisColors_[index][0];
	g = ViridisColors_[index][1];
	b = ViridisColors_[index][2];
}

void ColorMapViridis::ColorAt(int i, double& r, double& g, double& b) const {
	unsigned char bR = 0, bG = 0, bB = 0;
	ColorAt(i, bR, bG, bB);
	r = bR / 255.0f;
	g = bG / 255.0f;
	b = bB / 255.0f;
}