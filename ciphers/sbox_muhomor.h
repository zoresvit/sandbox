
BYTE sbox0[256] = {
0xf9, 0xca, 0x14, 0x61, 0xe4, 0x1c, 0x43, 0x20, 0x4e, 0x54, 0x58, 0xa0, 0xfc, 0xdb, 0xc0, 0x72,
0x22, 0x74, 0xfe, 0xb5, 0x65, 0xa8, 0x25, 0xed, 0x69, 0x33, 0xf1, 0xb1, 0x36, 0x09, 0x06, 0x9a,
0x8e, 0x90, 0xcf, 0xf6, 0xea, 0x27, 0xbc, 0x07, 0x7f, 0xd7, 0x3c, 0x7c, 0x44, 0x45, 0x21, 0x6b, 
0x1a, 0x52, 0x62, 0x29, 0x13, 0x9b, 0xcc, 0x99, 0x4b, 0x42, 0xb6, 0x1d, 0xc7, 0x91, 0x76, 0x16, 
0x92, 0x4f, 0x47, 0x70, 0x98, 0x66, 0xc2, 0x48, 0x96, 0x0b, 0x2f, 0xc9, 0xc6, 0x38, 0x8c, 0x63, 
0x10, 0xf2, 0xa9, 0x37, 0xa7, 0xd3, 0x55, 0x3d, 0x2c, 0x7a, 0xaf, 0xee, 0x3e, 0xf5, 0x67, 0x0c, 
0x77, 0x84, 0xc1, 0xc5, 0xde, 0xa4, 0xdd, 0xb4, 0xe3, 0xb3, 0xef, 0x49, 0xe2, 0x71, 0x4c, 0xad, 
0xdf, 0x03, 0x12, 0x19, 0x9c, 0xd9, 0xd2, 0x78, 0x50, 0xdc, 0xaa, 0x15, 0x04, 0x39, 0x9d, 0xd1, 
0x2d, 0x11, 0x24, 0x2e, 0xf7, 0x59, 0xfa, 0x1e, 0x68, 0x3a, 0x7e, 0xcb, 0xae, 0xd6, 0xa5, 0xfd, 
0x5f, 0x05, 0x0f, 0x6a, 0xa6, 0xe7, 0xec, 0x30, 0x5c, 0x6f, 0x83, 0xcd, 0xb2, 0xbb, 0xeb, 0x02, 
0x28, 0x73, 0x4d, 0x18, 0xa3, 0x86, 0x9f, 0x5b, 0x3f, 0x81, 0xab, 0x75, 0x1b, 0x6c, 0x0e, 0x53, 
0x64, 0xfb, 0x26, 0x40, 0x7d, 0xe1, 0x95, 0x34, 0xbf, 0x0a, 0xbd, 0x31, 0x2b, 0xb0, 0xf4, 0x8d, 
0xe0, 0x01, 0x87, 0x56, 0xce, 0xff, 0x5d, 0x6d, 0xa2, 0x6e, 0x88, 0x9e, 0x94, 0x89, 0x46, 0x35, 
0x4a, 0xb9, 0xda, 0xc3, 0xf3, 0x5e, 0x8f, 0x97, 0xb7, 0xd4, 0x51, 0x60, 0xd5, 0x23, 0x57, 0xd0, 
0x79, 0x3b, 0x17, 0xc4, 0xb8, 0xc8, 0x7b, 0x2a, 0x0d, 0x8b, 0xd8, 0x00, 0xe8, 0xba, 0xe6, 0xf8, 
0x41, 0x85, 0x32, 0xf0, 0x80, 0x93, 0x08, 0xe5, 0x82, 0xbe, 0xe9, 0x1f, 0xa1, 0x8a, 0xac, 0x5a};

BYTE sbox1[256] = {
0x0c, 0x68, 0xde, 0x9f, 0x42, 0xc0, 0xaa, 0x55, 0xcc, 0x1b, 0x24, 0x16, 0x27, 0xc9, 0x21, 0xac,
0x97, 0xa9, 0xa5, 0x7c, 0xfc, 0x04, 0xd7, 0xe1, 0xbc, 0xc3, 0x51, 0xd9, 0xf1, 0xb6, 0xd1, 0x74,
0x2f, 0x0a, 0x6a, 0x3e, 0x83, 0x71, 0x9a, 0x6d, 0xd0, 0xdb, 0x25, 0x02, 0xa6, 0x8a, 0xdc, 0xb3,
0xfb, 0x9d, 0xe4, 0x4a, 0x69, 0x89, 0x7f, 0xe0, 0xb9, 0xf2, 0xa0, 0xa8, 0xd3, 0x77, 0x10, 0x57,
0xad, 0x54, 0x6c, 0xc7, 0x11, 0xc5, 0x86, 0xb5, 0x36, 0x00, 0x14, 0xe3, 0xbf, 0x5c, 0x52, 0x18,
0x92, 0x33, 0xd2, 0x8c, 0xe5, 0x1a, 0x34, 0x50, 0x56, 0x87, 0xf3, 0x78, 0x29, 0x22, 0x9e, 0xd8,
0xfa, 0x2e, 0x75, 0x2d, 0xe9, 0xc1, 0xb2, 0xab, 0xc2, 0xdf, 0xd5, 0x7d, 0xfd, 0xa1, 0xcd, 0x31,
0xaf, 0x0f, 0xd6, 0xf7, 0x88, 0xbe, 0x5f, 0x4e, 0x5a, 0x7b, 0xc6, 0x67, 0x6e, 0x05, 0x1e, 0x40,
0x70, 0xb0, 0xf4, 0x60, 0x98, 0x76, 0x07, 0x0e, 0x19, 0xf5, 0x8d, 0x28, 0x95, 0x2a, 0x44, 0x32,
0x23, 0x1c, 0x2c, 0xd4, 0xe8, 0x06, 0x91, 0x6b, 0xed, 0x66, 0x94, 0x93, 0xbd, 0x20, 0xbb, 0xba,
0x1f, 0xe7, 0x82, 0x3c, 0xeb, 0xfe, 0xca, 0x30, 0x80, 0xee, 0x5b, 0x46, 0x8e, 0x9b, 0x7a, 0xf9,
0x17, 0x61, 0xda, 0xe2, 0xa3, 0xea, 0x58, 0x9c, 0xb7, 0x99, 0x3a, 0x73, 0x35, 0xff, 0xce, 0xb4,
0x8f, 0xcb, 0x90, 0x4c, 0x5d, 0xa7, 0x62, 0xdd, 0x64, 0xf6, 0x37, 0x8b, 0xe6, 0x15, 0x0d, 0x4d,
0x2b, 0xae, 0x53, 0x1d, 0x3b, 0x85, 0xf0, 0x39, 0x81, 0x48, 0x84, 0xf8, 0x45, 0x59, 0x13, 0x38,
0x08, 0x63, 0x6f, 0xef, 0x01, 0xa2, 0x96, 0xb8, 0x43, 0x79, 0xa4, 0xc8, 0x0b, 0xc4, 0x5e, 0x4f,
0x3d, 0x3f, 0xec, 0x12, 0x7e, 0x49, 0x4b, 0x47, 0x09, 0x72, 0x03, 0x41, 0xb1, 0x26, 0x65, 0xcf};

BYTE sbox2[256] = {
0xdd, 0xd2, 0xdb, 0x7b, 0xae, 0xb4, 0x07, 0x2e, 0xaa, 0xe8, 0x13, 0xc3, 0x1a, 0x6d, 0x94, 0xc0,
0x5e, 0x1e, 0x23, 0x26, 0x61, 0x55, 0x9b, 0xcf, 0x8b, 0x67, 0x22, 0xc7, 0xd6, 0x92, 0x75, 0x42, 
0x87, 0xb1, 0x34, 0xb7, 0x02, 0xe7, 0xeb, 0x3e, 0x6c, 0x9d, 0xe5, 0xcc, 0x88, 0x43, 0xf3, 0x37, 
0x17, 0xa9, 0xe1, 0x44, 0xff, 0xe0, 0x6a, 0xfb, 0x29, 0x49, 0x5d, 0xa1, 0xfe, 0x3b, 0x0f, 0x53, 
0x3c, 0xf4, 0x65, 0x86, 0xb0, 0x68, 0x71, 0xf7, 0xf2, 0xef, 0x95, 0xf5, 0xd5, 0x15, 0x04, 0xa3, 
0x08, 0x30, 0xd9, 0x8c, 0xf9, 0xf6, 0x4b, 0x28, 0xce, 0x7f, 0x50, 0x9a, 0x31, 0x9f, 0x3a, 0xec, 
0xbc, 0x90, 0x73, 0xd7, 0x41, 0x9e, 0x00, 0x46, 0x06, 0xd3, 0x80, 0xa0, 0xe3, 0x59, 0xe4, 0x97,
0x09, 0x8d, 0x7e, 0xa6, 0xc6, 0x33, 0xb9, 0x36, 0xa7, 0x40, 0xb6, 0x52, 0xb5, 0xd1, 0xcd, 0x14, 
0xb3, 0x93, 0x56, 0x60, 0xc4, 0x1c, 0x83, 0x0a, 0x63, 0x19, 0xac, 0xc2, 0xcb, 0x10, 0x21, 0x91, 
0xe2, 0xc8, 0xa5, 0xf0, 0x5c, 0xdc, 0x38, 0x16, 0x2d, 0x1b, 0x6e, 0x76, 0x70, 0xfc, 0xed, 0xb2, 
0x96, 0x18, 0x98, 0x74, 0x32, 0x27, 0x2b, 0xbf, 0xc9, 0xea, 0x69, 0xc5, 0x77, 0x25, 0xde, 0x81, 
0x64, 0x85, 0x84, 0x4f, 0x3f, 0x9c, 0xba, 0xca, 0x82, 0x1f, 0xa8, 0xf8, 0x3d, 0x57, 0x5f, 0x4a, 
0x58, 0x8f, 0x6f, 0x51, 0xee, 0x8a, 0xda, 0x4d, 0xa2, 0x0b, 0x54, 0x35, 0xb8, 0xd8, 0x72, 0x03, 
0x20, 0x99, 0xab, 0x6b, 0x79, 0x7c, 0x0e, 0x39, 0x5b, 0xf1, 0x0c, 0xa4, 0xfa, 0x48, 0xd0, 0x2a, 
0x78, 0x12, 0x5a, 0xd4, 0xaf, 0x05, 0x24, 0x89, 0x01, 0x2c, 0x0d, 0x7d, 0x11, 0xbb, 0x4e, 0x47, 
0x62, 0xbe, 0x4c, 0x2f, 0xfd, 0xe9, 0x1d, 0xbd, 0xad, 0x8e, 0xdf, 0x45, 0x7a, 0xc1, 0x66, 0xe6};

BYTE sbox3[256] = {
0xe9, 0x86, 0x04, 0x93, 0xad, 0x7c, 0x27, 0xfd, 0x36, 0xab, 0x8c, 0xb1, 0x8a, 0x2a, 0xa6, 0x19, 
0xc4, 0x7a, 0x96, 0x63, 0xd3, 0x73, 0x78, 0x90, 0xaf, 0x6e, 0x81, 0x79, 0xbb, 0xa4, 0xb8, 0x4a, 
0x7d, 0x58, 0xf8, 0xa8, 0xc3, 0x4b, 0x40, 0xaa, 0xda, 0xd7, 0xd2, 0xed, 0x43, 0x5c, 0x44, 0x7f, 
0x91, 0xf5, 0xbe, 0x6a, 0xc8, 0xf3, 0x20, 0x94, 0xcc, 0x61, 0x0c, 0x89, 0xb6, 0x1c, 0x47, 0xbf, 
0x9c, 0x26, 0xd8, 0x9d, 0xba, 0xc6, 0xa2, 0x38, 0x9e, 0x92, 0xe0, 0x9b, 0xe1, 0xfa, 0x66, 0x3a, 
0x23, 0x08, 0x34, 0xbc, 0xf4, 0x68, 0x77, 0x3e, 0xb0, 0xa5, 0xd6, 0xc9, 0x46, 0x56, 0xf6, 0xe2, 
0x5d, 0x74, 0xdf, 0xfe, 0x1a, 0xf9, 0xe8, 0x98, 0xa0, 0x3f, 0xd0, 0x67, 0x0a, 0x83, 0x3b, 0xde, 
0x4e, 0x01, 0x30, 0x33, 0xdc, 0xbd, 0xdd, 0x54, 0xb4, 0x0d, 0xe3, 0xe4, 0x4c, 0xe5, 0x29, 0x13, 
0xcb, 0x99, 0xc5, 0x53, 0x35, 0x00, 0x3c, 0x57, 0x5b, 0xc1, 0xd5, 0x18, 0x5a, 0xf1, 0x75, 0x2b, 
0x9a, 0xe7, 0x2c, 0x21, 0xc2, 0xce, 0x2e, 0xcf, 0x8e, 0x07, 0x2d, 0x6d, 0x59, 0xfc, 0x51, 0x6b, 
0x37, 0x14, 0x32, 0xff, 0x6c, 0x0f, 0xb7, 0x1b, 0x8b, 0xf2, 0x31, 0xeb, 0x52, 0xb2, 0x4d, 0x03, 
0xae, 0xa1, 0x48, 0xf7, 0xd1, 0xc0, 0x50, 0x12, 0xec, 0xcd, 0x9f, 0x71, 0xb5, 0x65, 0x7b, 0x42, 
0x60, 0x97, 0x22, 0x82, 0x49, 0x87, 0x69, 0x28, 0x72, 0xa7, 0xd4, 0x5e, 0x05, 0x2f, 0x1f, 0xef, 
0x80, 0x0e, 0x55, 0x5f, 0x0b, 0x8d, 0x06, 0x41, 0x62, 0xf0, 0x1d, 0x6f, 0xc7, 0xb3, 0x88, 0x95, 
0x02, 0x09, 0x15, 0xa9, 0x39, 0x24, 0x8f, 0xee, 0x16, 0x85, 0xfb, 0x1e, 0x10, 0xe6, 0x25, 0xac, 
0x70, 0xb9, 0xca, 0x4f, 0x64, 0x84, 0x45, 0x7e, 0x17, 0x76, 0xa3, 0xdb, 0xd9, 0xea, 0x11, 0x3d};

BYTE C0_128[16] = {0x11, 0x11, 0x11, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x11, 0x11, 0x11, 0x13};
BYTE C1_128[16] = {0x22, 0x22, 0x22, 0x20, 0x22, 0x22, 0x22, 0x21, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23};
BYTE C2_128[16] = {0x33, 0x33, 0x33, 0x30, 0x33, 0x33, 0x33, 0x31, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x33};
BYTE C3_128[16] = {0x44, 0x44, 0x44, 0x40, 0x44, 0x44, 0x44, 0x41, 0x44, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x43};
BYTE C4_128[16] = {0x55, 0x55, 0x55, 0x50, 0x55, 0x55, 0x55, 0x51, 0x55, 0x55, 0x55, 0x52, 0x55, 0x55, 0x55, 0x53};
BYTE C5_128[16] = {0x66, 0x66, 0x66, 0x60, 0x66, 0x66, 0x66, 0x61, 0x66, 0x66, 0x66, 0x62, 0x66, 0x66, 0x66, 0x63};
BYTE C6_128[16] = {0x77, 0x77, 0x77, 0x70, 0x77, 0x77, 0x77, 0x71, 0x77, 0x77, 0x77, 0x72, 0x77, 0x77, 0x77, 0x73};
BYTE C7_128[16] = {0x88, 0x88, 0x88, 0x80, 0x88, 0x88, 0x88, 0x81, 0x88, 0x88, 0x88, 0x82, 0x88, 0x88, 0x88, 0x83};

BYTE C0_256[32] = {0x11, 0x11, 0x11, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x11, 0x11, 0x11, 0x13,
				   0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 0x11, 0x15, 0x11, 0x11, 0x11, 0x16, 0x11, 0x11, 0x11, 0x17};
BYTE C1_256[32] = {0x22, 0x22, 0x22, 0x20, 0x22, 0x22, 0x22, 0x21, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23,
				   0x22, 0x22, 0x22, 0x24, 0x22, 0x22, 0x22, 0x25, 0x22, 0x22, 0x22, 0x26, 0x22, 0x22, 0x22, 0x27};
BYTE C2_256[32] = {0x33, 0x33, 0x33, 0x30, 0x33, 0x33, 0x33, 0x31, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x33,
				   0x33, 0x33, 0x33, 0x34, 0x33, 0x33, 0x33, 0x35, 0x33, 0x33, 0x33, 0x36, 0x33, 0x33, 0x33, 0x37};
BYTE C3_256[32] = {0x44, 0x44, 0x44, 0x40, 0x44, 0x44, 0x44, 0x41, 0x44, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x43,
				   0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 0x44, 0x44, 0x44, 0x46, 0x44, 0x44, 0x44, 0x47};
BYTE C4_256[32] = {0x55, 0x55, 0x55, 0x50, 0x55, 0x55, 0x55, 0x51, 0x55, 0x55, 0x55, 0x52, 0x55, 0x55, 0x55, 0x53,
				   0x55, 0x55, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x55, 0x55, 0x55, 0x57};
BYTE C5_256[32] = {0x66, 0x66, 0x66, 0x60, 0x66, 0x66, 0x66, 0x61, 0x66, 0x66, 0x66, 0x62, 0x66, 0x66, 0x66, 0x63,
				   0x66, 0x66, 0x66, 0x64, 0x66, 0x66, 0x66, 0x65, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x67};
BYTE C6_256[32] = {0x77, 0x77, 0x77, 0x70, 0x77, 0x77, 0x77, 0x71, 0x77, 0x77, 0x77, 0x72, 0x77, 0x77, 0x77, 0x73,
				   0x77, 0x77, 0x77, 0x74, 0x77, 0x77, 0x77, 0x75, 0x77, 0x77, 0x77, 0x76, 0x77, 0x77, 0x77, 0x77};
BYTE C7_256[32] = {0x88, 0x88, 0x88, 0x80, 0x88, 0x88, 0x88, 0x81, 0x88, 0x88, 0x88, 0x82, 0x88, 0x88, 0x88, 0x83,
				   0x88, 0x88, 0x88, 0x84, 0x88, 0x88, 0x88, 0x85, 0x88, 0x88, 0x88, 0x86, 0x88, 0x88, 0x88, 0x87};
BYTE C8_256[32] = {0x99, 0x99, 0x99, 0x90, 0x99, 0x99, 0x99, 0x91, 0x99, 0x99, 0x99, 0x92, 0x99, 0x99, 0x99, 0x93,
				   0x99, 0x99, 0x99, 0x94, 0x99, 0x99, 0x99, 0x95, 0x99, 0x99, 0x99, 0x96, 0x99, 0x99, 0x99, 0x97};
BYTE C0_512[64] = {0x11, 0x11, 0x11, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x11, 0x11, 0x11, 0x13,
				   0x11, 0x11, 0x11, 0x14, 0x11, 0x11, 0x11, 0x15, 0x11, 0x11, 0x11, 0x16, 0x11, 0x11, 0x11, 0x17,
				   0x11, 0x11, 0x11, 0x18, 0x11, 0x11, 0x11, 0x19, 0x11, 0x11, 0x11, 0x1a, 0x11, 0x11, 0x11, 0x1b,
				   0x11, 0x11, 0x11, 0x1c, 0x11, 0x11, 0x11, 0x1d, 0x11, 0x11, 0x11, 0x1e, 0x11, 0x11, 0x11, 0x1f};
BYTE C1_512[64] = {0x22, 0x22, 0x22, 0x20, 0x22, 0x22, 0x22, 0x21, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23,
				   0x22, 0x22, 0x22, 0x24, 0x22, 0x22, 0x22, 0x25, 0x22, 0x22, 0x22, 0x26, 0x22, 0x22, 0x22, 0x27,
				   0x22, 0x22, 0x22, 0x28, 0x22, 0x22, 0x22, 0x29, 0x22, 0x22, 0x22, 0x2a, 0x22, 0x22, 0x22, 0x2b, 
				   0x22, 0x22, 0x22, 0x2c, 0x22, 0x22, 0x22, 0x2d, 0x22, 0x22, 0x22, 0x2e, 0x22, 0x22, 0x22, 0x2f};
BYTE C2_512[64] = {0x33, 0x33, 0x33, 0x30, 0x33, 0x33, 0x33, 0x31, 0x33, 0x33, 0x33, 0x32, 0x33, 0x33, 0x33, 0x33, 
				   0x33, 0x33, 0x33, 0x34, 0x33, 0x33, 0x33, 0x35, 0x33, 0x33, 0x33, 0x36, 0x33, 0x33, 0x33, 0x37, 
				   0x33, 0x33, 0x33, 0x38, 0x33, 0x33, 0x33, 0x39, 0x33, 0x33, 0x33, 0x3a, 0x33, 0x33, 0x33, 0x3b, 
				   0x33, 0x33, 0x33, 0x3c, 0x33, 0x33, 0x33, 0x3d, 0x33, 0x33, 0x33, 0x3e, 0x33, 0x33, 0x33, 0x3f};
BYTE C3_512[64] = {0x44, 0x44, 0x44, 0x40, 0x44, 0x44, 0x44, 0x41, 0x44, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x43, 
				   0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 0x44, 0x44, 0x44, 0x46, 0x44, 0x44, 0x44, 0x47, 
				   0x44, 0x44, 0x44, 0x48, 0x44, 0x44, 0x44, 0x49, 0x44, 0x44, 0x44, 0x4a, 0x44, 0x44, 0x44, 0x4b, 
				   0x44, 0x44, 0x44, 0x4c, 0x44, 0x44, 0x44, 0x4d, 0x44, 0x44, 0x44, 0x4e, 0x44, 0x44, 0x44, 0x4f};
BYTE C4_512[64] = {0x55, 0x55, 0x55, 0x50, 0x55, 0x55, 0x55, 0x51, 0x55, 0x55, 0x55, 0x52, 0x55, 0x55, 0x55, 0x53, 
				   0x55, 0x55, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x55, 0x55, 0x55, 0x57, 
				   0x55, 0x55, 0x55, 0x58, 0x55, 0x55, 0x55, 0x59, 0x55, 0x55, 0x55, 0x5a, 0x55, 0x55, 0x55, 0x5b, 
				   0x55, 0x55, 0x55, 0x5c, 0x55, 0x55, 0x55, 0x5d, 0x55, 0x55, 0x55, 0x5e, 0x55, 0x55, 0x55, 0x5f};
BYTE C5_512[64] = {0x66, 0x66, 0x66, 0x60, 0x66, 0x66, 0x66, 0x61, 0x66, 0x66, 0x66, 0x62, 0x66, 0x66, 0x66, 0x63, 
				   0x66, 0x66, 0x66, 0x64, 0x66, 0x66, 0x66, 0x65, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x67, 
				   0x66, 0x66, 0x66, 0x68, 0x66, 0x66, 0x66, 0x69, 0x66, 0x66, 0x66, 0x6a, 0x66, 0x66, 0x66, 0x6b, 
				   0x66, 0x66, 0x66, 0x6c, 0x66, 0x66, 0x66, 0x6d, 0x66, 0x66, 0x66, 0x6e, 0x66, 0x66, 0x66, 0x6f};
BYTE C6_512[64] = {0x77, 0x77, 0x77, 0x70, 0x77, 0x77, 0x77, 0x71, 0x77, 0x77, 0x77, 0x72, 0x77, 0x77, 0x77, 0x73, 
				   0x77, 0x77, 0x77, 0x74, 0x77, 0x77, 0x77, 0x75, 0x77, 0x77, 0x77, 0x76, 0x77, 0x77, 0x77, 0x77, 
				   0x77, 0x77, 0x77, 0x78, 0x77, 0x77, 0x77, 0x79, 0x77, 0x77, 0x77, 0x7a, 0x77, 0x77, 0x77, 0x7b, 
				   0x77, 0x77, 0x77, 0x7c, 0x77, 0x77, 0x77, 0x7d, 0x77, 0x77, 0x77, 0x7e, 0x77, 0x77, 0x77, 0x7f};
BYTE C7_512[64] = {0x88, 0x88, 0x88, 0x80, 0x88, 0x88, 0x88, 0x81, 0x88, 0x88, 0x88, 0x82, 0x88, 0x88, 0x88, 0x83, 
				   0x88, 0x88, 0x88, 0x84, 0x88, 0x88, 0x88, 0x85, 0x88, 0x88, 0x88, 0x86, 0x88, 0x88, 0x88, 0x87, 
				   0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0x88, 0x88, 0x88, 0x8a, 0x88, 0x88, 0x88, 0x8b, 
				   0x88, 0x88, 0x88, 0x8c, 0x88, 0x88, 0x88, 0x8d, 0x88, 0x88, 0x88, 0x8e, 0x88, 0x88, 0x88, 0x8f};
BYTE C8_512[64] = {0x99, 0x99, 0x99, 0x90, 0x99, 0x99, 0x99, 0x91, 0x99, 0x99, 0x99, 0x92, 0x99, 0x99, 0x99, 0x93, 
				   0x99, 0x99, 0x99, 0x94, 0x99, 0x99, 0x99, 0x95, 0x99, 0x99, 0x99, 0x96, 0x99, 0x99, 0x99, 0x97, 
				   0x99, 0x99, 0x99, 0x98, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9a, 0x99, 0x99, 0x99, 0x9b, 
				   0x99, 0x99, 0x99, 0x9c, 0x99, 0x99, 0x99, 0x9d, 0x99, 0x99, 0x99, 0x9e, 0x99, 0x99, 0x99, 0x9f};
BYTE C9_512[64] = {0xaa, 0xaa, 0xaa, 0xa0, 0xaa, 0xaa, 0xaa, 0xa1, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0xa3, 
				   0xaa, 0xaa, 0xaa, 0xa4, 0xaa, 0xaa, 0xaa, 0xa5, 0xaa, 0xaa, 0xaa, 0xa6, 0xaa, 0xaa, 0xaa, 0xa7, 
				   0xaa, 0xaa, 0xaa, 0xa8, 0xaa, 0xaa, 0xaa, 0xa9, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xab, 
				   0xaa, 0xaa, 0xaa, 0xac, 0xaa, 0xaa, 0xaa, 0xad, 0xaa, 0xaa, 0xaa, 0xae, 0xaa, 0xaa, 0xaa, 0xaf};
BYTE C10_512[64] = {0xbb, 0xbb, 0xbb, 0xb0, 0xbb, 0xbb, 0xbb, 0xb1, 0xbb, 0xbb, 0xbb, 0xb2, 0xbb, 0xbb, 0xbb, 0xb3, 
					0xbb, 0xbb, 0xbb, 0xb4, 0xbb, 0xbb, 0xbb, 0xb5, 0xbb, 0xbb, 0xbb, 0xb6, 0xbb, 0xbb, 0xbb, 0xb7, 
					0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xb9, 0xbb, 0xbb, 0xbb, 0xba, 0xbb, 0xbb, 0xbb, 0xbb, 
					0xbb, 0xbb, 0xbb, 0xbc, 0xbb, 0xbb, 0xbb, 0xbd, 0xbb, 0xbb, 0xbb, 0xbe, 0xbb, 0xbb, 0xbb, 0xbf};
