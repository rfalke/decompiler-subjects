__size32 R0 = 0;// 4 bytes
__size32 R1 = 0;// 4 bytes
__size32 R2 = 0;// 4 bytes
__size32 R3 = 0;// 4 bytes
__size32 F0 = 0;// 4 bytes
__size32 F1 = 0;// 4 bytes
__size32 D0 = 0;// 4 bytes
__size32 global_0x08054064 = 0;// 4 bytes
__size32 D1 = 0;// 4 bytes
__size32 global_0x0805406c = 0;// 4 bytes
union { __size8 x1; union { unsigned int; __size32 *; }[]; __size16; } and;
union { unsigned char; __size32[]; } alu_eq;
unsigned char alu_x = 0;
__size32 alu_y = 0;// 4 bytes
__size32 target = 0;// 4 bytes
int main(int argc, char *argv[]);

/** address: 0x08050641 */
int main(int argc, char *argv[])
{
    unsigned char al; 		// r8
    unsigned char al_1; 		// r8{228}
    unsigned char al_11; 		// r8{457}
    unsigned char al_12; 		// r8{469}
    unsigned char al_13; 		// r8{589}
    unsigned char al_14; 		// r8{661}
    unsigned char al_15; 		// r8{796}
    unsigned char al_18; 		// r8{797}
    unsigned char al_2; 		// r8{349}
    unsigned char al_21; 		// r8{799}
    unsigned char al_23; 		// r8{803}
    unsigned char al_24; 		// r8{815}
    unsigned char al_25; 		// r8{921}
    unsigned char al_3; 		// r8{450}
    unsigned char al_6; 		// r8{451}
    unsigned char al_9; 		// r8{453}
    unsigned short ax_1; 		// r0{171}
    unsigned short ax_11; 		// r0{537}
    unsigned short ax_14; 		// r0{545}
    unsigned short ax_16; 		// r0{741}
    unsigned short ax_19; 		// r0{749}
    unsigned short ax_21; 		// r0{778}
    unsigned short ax_24; 		// r0{785}
    unsigned short ax_26; 		// r0{869}
    unsigned short ax_29; 		// r0{877}
    unsigned short ax_4; 		// r0{179}
    unsigned short ax_6; 		// r0{432}
    unsigned short ax_9; 		// r0{439}
    unsigned short cx; 		// r1
    unsigned short cx_1; 		// r1{172}
    unsigned short cx_2; 		// r1{538}
    unsigned short cx_3; 		// r1{742}
    unsigned short cx_4; 		// r1{870}
    unsigned char dl; 		// r10
    unsigned char dl_1; 		// r10{6}
    unsigned char dl_2; 		// r10{229}
    unsigned char dl_3; 		// r10{350}
    unsigned char dl_4; 		// r10{456}
    unsigned char dl_5; 		// r10{590}
    unsigned char dl_6; 		// r10{662}
    unsigned char dl_7; 		// r10{802}
    unsigned char dl_8; 		// r10{922}
    int eax; 		// r24
    int eax_1; 		// r24{472}
    unsigned int eax_4; 		// r24{474}
    int eax_6; 		// r24{818}
    unsigned int eax_9; 		// r24{820}
    int ecx; 		// r25
    int edx; 		// r26
    int edx_1; 		// r26{76}
    int edx_10; 		// r26{109}
    __size32 edx_11; 		// r26{111}
    int edx_12; 		// r26{115}
    int edx_13; 		// r26{120}
    __size32 edx_14; 		// r26{122}
    int edx_15; 		// r26{126}
    int edx_16; 		// r26{132}
    __size32 edx_17; 		// r26{134}
    __size32 edx_18; 		// r26{135}
    int edx_19; 		// r26{139}
    __size32 edx_2; 		// r26{78}
    __size32 edx_20; 		// r26{141}
    int edx_21; 		// r26{145}
    int edx_22; 		// r26{152}
    int edx_23; 		// r26{158}
    __size32 edx_24; 		// r26{160}
    int edx_25; 		// r26{164}
    int edx_26; 		// r26{190}
    __size32 edx_27; 		// r26{192}
    int edx_28; 		// r26{196}
    int edx_29; 		// r26{207}
    int edx_3; 		// r26{82}
    __size32 edx_30; 		// r26{209}
    int edx_31; 		// r26{215}
    int edx_32; 		// r26{305}
    __size32 edx_33; 		// r26{307}
    int edx_34; 		// r26{311}
    int edx_35; 		// r26{316}
    __size32 edx_36; 		// r26{318}
    int edx_37; 		// r26{322}
    int edx_38; 		// r26{421}
    int edx_39; 		// r26{512}
    int edx_4; 		// r26{87}
    __size32 edx_40; 		// r26{514}
    int edx_41; 		// r26{518}
    int edx_42; 		// r26{524}
    __size32 edx_43; 		// r26{526}
    int edx_44; 		// r26{530}
    int edx_45; 		// r26{556}
    __size32 edx_46; 		// r26{558}
    int edx_47; 		// r26{562}
    int edx_48; 		// r26{573}
    __size32 edx_49; 		// r26{575}
    __size32 edx_5; 		// r26{89}
    int edx_50; 		// r26{582}
    int edx_51; 		// r26{856}
    __size32 edx_52; 		// r26{858}
    int edx_53; 		// r26{862}
    int edx_54; 		// r26{888}
    __size32 edx_55; 		// r26{890}
    int edx_56; 		// r26{894}
    int edx_57; 		// r26{905}
    __size32 edx_58; 		// r26{907}
    int edx_59; 		// r26{913}
    int edx_6; 		// r26{93}
    int edx_60; 		// r26{990}
    int edx_61; 		// r26{999}
    __size32 edx_62; 		// r26{1001}
    __size32 edx_63; 		// r26{1002}
    int edx_64; 		// r26{1005}
    __size32 edx_65; 		// r26{1007}
    int edx_66; 		// r26{1014}
    __size32 edx_67; 		// r26{1016}
    int edx_68; 		// r26{1019}
    int edx_69; 		// r26{1026}
    int edx_7; 		// r26{98}
    __size32 edx_70; 		// r26{1028}
    int edx_71; 		// r26{1031}
    int edx_72; 		// r26{1038}
    __size32 edx_73; 		// r26{1040}
    int edx_74; 		// r26{1043}
    int edx_75; 		// r26{1050}
    __size32 edx_76; 		// r26{1052}
    int edx_77; 		// r26{1055}
    int edx_78; 		// r26{1062}
    __size32 edx_79; 		// r26{1064}
    __size32 edx_8; 		// r26{100}
    int edx_80; 		// r26{1067}
    int edx_81; 		// r26{1074}
    __size32 edx_82; 		// r26{1076}
    int edx_9; 		// r26{104}

    alu_x = target;
    alu_y = 0x88050641;
    dl_1 = *(&alu_eq + 0x1a59f4);
    dl = *(alu_eq[(alu_x)] + (dl_1));
    edx = (dl_1) & ~0xff | (dl);
    *(int*)(&alu_eq + 0x1a59e0) = edx;
    al = *(&alu_eq + 0x1a59f1);
    eax = (alu_x) & ~0xff | (al);
    dl = *(&alu_eq + 0x1a59f5);
    edx = edx & ~0xff | (dl);
    dl = *(alu_eq[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&alu_eq + 0x1a59e4) = edx;
    al = *(&alu_eq + 0x1a59f2);
    eax = eax & ~0xff | (al);
    dl = *(&alu_eq + 0x1a59f6);
    edx = edx & ~0xff | (dl);
    dl = *(alu_eq[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&alu_eq + 0x1a59e8) = edx;
    al = *(&alu_eq + 0x1a59f3);
    dl = *(&alu_eq + 0x1a59f7);
    edx = edx & ~0xff | (dl);
    dl = *(alu_eq[(eax & ~0xff | (al))] + edx);
    *(int*)(&alu_eq + 0x1a59ec) = edx & ~0xff | (dl);
    eax = *(&alu_eq + 0x1a59e0);
    edx = *(&alu_eq + 0x1a59e4);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f48);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f4c);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x1a8f40) = eax;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x8054040;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054050;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054060;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9094);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_1 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_2 = *(&and + 0x3a9090);
    edx = *(edx_2 - 0x200068);
    *(__size32*)and[edx_1] = edx;
    eax = *(&and + 0x3a9090);
    edx_3 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_3] = edx;
    *(__size32*)(&and + 0x1a9070) = R1;
    edx_4 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_5 = *(&and + 0x3a9090);
    edx = *(edx_5 - 0x200068);
    *(__size32*)and[edx_4] = edx;
    eax = *(&and + 0x3a9090);
    edx_6 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_6] = edx;
    *(__size32*)(&and + 0x1a9070) = R2;
    edx_7 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_8 = *(&and + 0x3a9090);
    edx = *(edx_8 - 0x200068);
    *(__size32*)and[edx_7] = edx;
    eax = *(&and + 0x3a9090);
    edx_9 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_9] = edx;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_10 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_11 = *(&and + 0x3a9090);
    edx = *(edx_11 - 0x200068);
    *(__size32*)and[edx_10] = edx;
    eax = *(&and + 0x3a9090);
    edx_12 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_12] = edx;
    *(__size32*)(&and + 0x1a9070) = F1;
    edx_13 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_14 = *(&and + 0x3a9090);
    edx = *(edx_14 - 0x200068);
    *(__size32*)and[edx_13] = edx;
    eax = *(&and + 0x3a9090);
    edx_15 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_15] = edx;
    *(__size32*)(&and + 0x1a9070) = D1;
    *(__size32*)(&and + 0x1a9074) = global_0x0805406c;
    edx_16 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_17 = *(&and + 0x3a9090);
    edx_18 = *(edx_17 - 0x200068);
    edx = *(edx_18 - 0x200068);
    *(__size32*)and[edx_16] = edx;
    eax = *(&and + 0x3a9090);
    edx_19 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx_20 = *(&and + 0x1a9070);
    *(__size32*)and[edx_19] = edx_20;
    edx = *(&and + 0x1a9074);
    *(__size32*)(and[edx_19] + 4) = edx;
    edx_21 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd124;
    edx = *(&and + 0x3a9090);
    *(__size32*)and[edx_21] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200068);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_22 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_22] = edx;
    R3 = 0x8054026;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_23 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_24 = *(&and + 0x3a9090);
    edx = *(edx_24 - 0x200068);
    *(__size32*)and[edx_23] = edx;
    eax = *(&and + 0x3a9090);
    edx_25 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_25] = edx;
    *(__size32*)(&and + 0x1a8f50) = 0x88050bb0;
    *(__size32*)(&and + 0x1a8f54) = 0x80000000;
    *(__size32*)(&and + 0x1a8f60) = 0;
    ax_1 = *(&and + 0x1a8f50);
    cx_1 = *(&and + 0x1a8f54);
    edx = *(and[(ax_1)] + (cx_1) * 4);
    cx = *(&and + 0x1a8f62);
    ecx = (cx_1) & ~0xffff | (cx);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    ax_4 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_1) & ~0xffff | (ax_4))];
    edx = *(and[((ax_1) & ~0xffff | (ax_4))] + ecx * 4);
    cx = *(&and + 0x1a8f62);
    edx = *(and[edx] + (ecx & ~0xffff | (cx)) * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    eax = *(&and + 0x1a8f58);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_26 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_27 = *(&and + 0x3a9090);
    edx = *(edx_27 - 0x200068);
    *(__size32*)and[edx_26] = edx;
    eax = *(&and + 0x3a9090);
    edx_28 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_28] = edx;
    *(__size32*)(&and + 0x5a9124) = 0x8048200;
    eax = *(&and + 0x3a90b8);
    eax = *and[eax];
    R0 = eax;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_29 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_30 = *(&and + 0x3a9090);
    edx = *(edx_30 - 0x200060);
    *(__size32*)and[edx_29] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_31 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_31] = edx;
    R3 = 1;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    *(__size32*)and[edx] = R3;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x88050c4d;
    al_1 = *(&and + 0x1a8f50);
    dl_2 = *(&and + 0x1a8f54);
    dl = *(and[(al_1)] + (dl_2));
    edx = (dl_2) & ~0xff | (dl);
    *(int*)(&and + 0x1a8f40) = edx;
    al = *(&and + 0x1a8f51);
    eax = (al_1) & ~0xff | (al);
    dl = *(&and + 0x1a8f55);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f44) = edx;
    al = *(&and + 0x1a8f52);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f56);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f48) = edx;
    al = *(&and + 0x1a8f53);
    dl = *(&and + 0x1a8f57);
    edx = edx & ~0xff | (dl);
    dl = *(and[(eax & ~0xff | (al))] + edx);
    *(int*)(&and + 0x1a8f4c) = edx & ~0xff | (dl);
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f44);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f48);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f4c);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x1a8f40) = eax;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x8054040;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054050;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054060;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    R3 = eax;
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = R3;
    eax = *and[edx];
    R3 = eax;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_32 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_33 = *(&and + 0x3a9090);
    edx = *(edx_33 - 0x200068);
    *(__size32*)and[edx_32] = edx;
    eax = *(&and + 0x3a9090);
    edx_34 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_34] = edx;
    *(__size32*)(&and + 0x1a9070) = 0x88050fb5;
    edx_35 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_36 = *(&and + 0x3a9090);
    edx = *(edx_36 - 0x200068);
    *(__size32*)and[edx_35] = edx;
    eax = *(&and + 0x3a9090);
    edx_37 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_37] = edx;
    *(__size32*)(&and + 0x1a9060) = 0x88048764;
    eax = *(&and + 0x3a90b8);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x85fd180;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd190;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd198;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x08054064;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0805406c;
    eax = *(&and + 0x3a90b8);
    *(__size32*)and[eax] = 0;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x88050fb5;
    al_2 = *(&and + 0x1a8f50);
    dl_3 = *(&and + 0x1a8f54);
    dl = *(and[(al_2)] + (dl_3));
    edx = (dl_3) & ~0xff | (dl);
    *(int*)(&and + 0x1a8f40) = edx;
    al = *(&and + 0x1a8f51);
    eax = (al_2) & ~0xff | (al);
    dl = *(&and + 0x1a8f55);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f44) = edx;
    al = *(&and + 0x1a8f52);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f56);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f48) = edx;
    al = *(&and + 0x1a8f53);
    dl = *(&and + 0x1a8f57);
    edx = edx & ~0xff | (dl);
    dl = *(and[(eax & ~0xff | (al))] + edx);
    *(int*)(&and + 0x1a8f4c) = edx & ~0xff | (dl);
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f44);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f48);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f4c);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x1a8f40) = eax;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x8054040;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054050;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054060;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_38 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_38] = edx;
    R3 = R0;
    R2 = 0;
    *(__size32*)(&and + 0x1a9060) = 0x88051654;
    *(__size32*)(&and + 0x1a8f50) = R3;
    *(__size32*)(&and + 0x1a8f54) = R2;
    *(__size32*)(&and + 0x1a8ff0) = R2;
    *(__size32*)(&and + 0x1a8f60) = 1;
    ax_6 = *(&and + 0x1a8f50);
    cx = *(&and + 0x1a8f54);
    edx = *(and[(ax_6)] + ((cx) & ~0xffff | (and[(cx)])) * 4);
    ecx = *(&and + 0x1a8f60);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f5e) = edx;
    ax_9 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_6) & ~0xffff | (ax_9))];
    edx = *(and[((ax_6) & ~0xffff | (ax_9))] + (ecx & ~0xffff | (and[ecx])) * 4);
    ecx = *(&and + 0x1a8f60);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f5e) = edx;
    eax = *(&and + 0x1a8ff0);
    *(__size32*)(&and + 0x1a8f54) = eax;
    al_3 = *(&and + 0x1a8f60);
    al_6 = *((al_3) + 0x8054300);
    *(unsigned char*)(&and + 0x1a905c) = al_6;
    al_9 = *(&and + 0x1a8f5b);
    eax = and[(((al_3) & ~0xff | (al_6)) & ~0xff | (al_9))];
    *(__size8*)(&and + 0x1a9054) = (unsigned char) and[(((al_3) & ~0xff | (al_6)) & ~0xff | (al_9))];
    dl_4 = *(&and + 0x1a8f58);
    al_11 = *((dl_4) + 0x80540f0);
    dl = *(&and + 0x1a8f59);
    edx = (dl_4) & ~0xff | (dl);
    al = *(edx + (al_11) + 0x80540f0);
    eax = (al_11) & ~0xff | (al);
    dl = *(&and + 0x1a8f5a);
    edx = edx & ~0xff | (dl);
    al = *(edx + eax + 0x80540f0);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f5b);
    al = *((edx & ~0xff | (dl)) + eax + 0x80540f0);
    eax = eax & ~0xff | (al);
    al_12 = *(eax + 0x8054300);
    *(unsigned char*)(&and + 0x1a9050) = al_12;
    al = *(&and + 0x1a8f53);
    eax_1 = and[((eax & ~0xff | (al_12)) & ~0xff | (al))];
    al = *(&and + 0x1a8f57);
    eax_4 = and[(eax_1 & ~0xff | (al))];
    edx = *(and[eax_1] + eax_4 * 4);
    al = *(&and + 0x1a8f5b);
    eax = and[(eax_4 & ~0xff | (al))];
    edx = *(edx + and[(eax_4 & ~0xff | (al))] * 4);
    edx = *edx;
    *(__size8*)(&and + 0x1a9058) = (unsigned char) edx;
    eax = *(&and + 0x1a9050);
    edx = *(&and + 0x3a90b8);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x85fd180;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd190;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd198;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x08054064;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0805406c;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 0;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    R3 = eax;
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = R3;
    eax = *and[edx];
    R3 = eax;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_39 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_40 = *(&and + 0x3a9090);
    edx = *(edx_40 - 0x200068);
    *(__size32*)and[edx_39] = edx;
    eax = *(&and + 0x3a9090);
    edx_41 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_41] = edx;
    R3 = 0x8054022;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_42 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_43 = *(&and + 0x3a9090);
    edx = *(edx_43 - 0x200068);
    *(__size32*)and[edx_42] = edx;
    eax = *(&and + 0x3a9090);
    edx_44 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_44] = edx;
    *(__size32*)(&and + 0x1a8f50) = 0x880515e0;
    *(__size32*)(&and + 0x1a8f54) = 0x80000000;
    *(__size32*)(&and + 0x1a8f60) = 0;
    ax_11 = *(&and + 0x1a8f50);
    cx_2 = *(&and + 0x1a8f54);
    edx = *(and[(ax_11)] + (cx_2) * 4);
    cx = *(&and + 0x1a8f62);
    ecx = (cx_2) & ~0xffff | (cx);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    ax_14 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_11) & ~0xffff | (ax_14))];
    edx = *(and[((ax_11) & ~0xffff | (ax_14))] + ecx * 4);
    cx = *(&and + 0x1a8f62);
    edx = *(and[edx] + (ecx & ~0xffff | (cx)) * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    eax = *(&and + 0x1a8f58);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_45 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_46 = *(&and + 0x3a9090);
    edx = *(edx_46 - 0x200068);
    *(__size32*)and[edx_45] = edx;
    eax = *(&and + 0x3a9090);
    edx_47 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_47] = edx;
    *(__size32*)(&and + 0x5a9124) = 0x8048200;
    eax = *(&and + 0x3a90b8);
    eax = *and[eax];
    R0 = eax;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_48 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_49 = *(&and + 0x3a9090);
    edx = *(edx_49 - 0x200060);
    *(__size32*)and[edx_48] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_50 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_50] = edx;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x88051654;
    al_13 = *(&and + 0x1a8f50);
    dl_5 = *(&and + 0x1a8f54);
    dl = *(and[(al_13)] + (dl_5));
    edx = (dl_5) & ~0xff | (dl);
    *(int*)(&and + 0x1a8f40) = edx;
    al = *(&and + 0x1a8f51);
    eax = (al_13) & ~0xff | (al);
    dl = *(&and + 0x1a8f55);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f44) = edx;
    al = *(&and + 0x1a8f52);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f56);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f48) = edx;
    al = *(&and + 0x1a8f53);
    dl = *(&and + 0x1a8f57);
    edx = edx & ~0xff | (dl);
    dl = *(and[(eax & ~0xff | (al))] + edx);
    *(int*)(&and + 0x1a8f4c) = edx & ~0xff | (dl);
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f44);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f48);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f4c);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x1a8f40) = eax;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x8054040;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054050;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054060;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x8805182e;
    al_14 = *(&and + 0x1a8f50);
    dl_6 = *(&and + 0x1a8f54);
    dl = *(and[(al_14)] + (dl_6));
    edx = (dl_6) & ~0xff | (dl);
    *(int*)(&and + 0x1a8f40) = edx;
    al = *(&and + 0x1a8f51);
    eax = (al_14) & ~0xff | (al);
    dl = *(&and + 0x1a8f55);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f44) = edx;
    al = *(&and + 0x1a8f52);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f56);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f48) = edx;
    al = *(&and + 0x1a8f53);
    dl = *(&and + 0x1a8f57);
    edx = edx & ~0xff | (dl);
    dl = *(and[(eax & ~0xff | (al))] + edx);
    *(int*)(&and + 0x1a8f4c) = edx & ~0xff | (dl);
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f44);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f48);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f4c);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x1a8f40) = eax;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x8054040;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054050;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054060;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    R3 = eax;
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = R3;
    eax = *and[edx];
    R3 = eax;
    R2 = 1;
    *(__size32*)(&and + 0x1a8f50) = R3;
    *(__size32*)(&and + 0x1a8f54) = R2;
    *(__size32*)(&and + 0x1a8f60) = 0;
    ax_16 = *(&and + 0x1a8f50);
    cx_3 = *(&and + 0x1a8f54);
    edx = *(and[(ax_16)] + (cx_3) * 4);
    cx = *(&and + 0x1a8f62);
    ecx = (cx_3) & ~0xffff | (cx);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    ax_19 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_16) & ~0xffff | (ax_19))];
    edx = *(and[((ax_16) & ~0xffff | (ax_19))] + ecx * 4);
    cx = *(&and + 0x1a8f62);
    edx = *(and[edx] + (ecx & ~0xffff | (cx)) * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    eax = *(&and + 0x1a8f58);
    R3 = eax;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    *(__size32*)and[edx] = R3;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    R3 = eax;
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = R3;
    eax = *and[edx];
    R3 = eax;
    R2 = 0x2710;
    *(__size32*)(&and + 0x1a9060) = 0x88050c4d;
    *(__size32*)(&and + 0x1a8f50) = R3;
    *(__size32*)(&and + 0x1a8f54) = R2;
    *(__size32*)(&and + 0x1a8ff0) = R2;
    *(__size32*)(&and + 0x1a8f60) = 1;
    ax_21 = *(&and + 0x1a8f50);
    cx = *(&and + 0x1a8f54);
    edx = *(and[(ax_21)] + ((cx) & ~0xffff | (and[(cx)])) * 4);
    ecx = *(&and + 0x1a8f60);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f5e) = edx;
    ax_24 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_21) & ~0xffff | (ax_24))];
    edx = *(and[((ax_21) & ~0xffff | (ax_24))] + (ecx & ~0xffff | (and[ecx])) * 4);
    ecx = *(&and + 0x1a8f60);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f5e) = edx;
    eax = *(&and + 0x1a8ff0);
    *(__size32*)(&and + 0x1a8f54) = eax;
    al_15 = *(&and + 0x1a8f60);
    al_18 = *((al_15) + 0x8054300);
    *(unsigned char*)(&and + 0x1a905c) = al_18;
    al_21 = *(&and + 0x1a8f5b);
    eax = and[(((al_15) & ~0xff | (al_18)) & ~0xff | (al_21))];
    *(__size8*)(&and + 0x1a9054) = (unsigned char) and[(((al_15) & ~0xff | (al_18)) & ~0xff | (al_21))];
    dl_7 = *(&and + 0x1a8f58);
    al_23 = *((dl_7) + 0x80540f0);
    dl = *(&and + 0x1a8f59);
    edx = (dl_7) & ~0xff | (dl);
    al = *(edx + (al_23) + 0x80540f0);
    eax = (al_23) & ~0xff | (al);
    dl = *(&and + 0x1a8f5a);
    edx = edx & ~0xff | (dl);
    al = *(edx + eax + 0x80540f0);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f5b);
    al = *((edx & ~0xff | (dl)) + eax + 0x80540f0);
    eax = eax & ~0xff | (al);
    al_24 = *(eax + 0x8054300);
    *(unsigned char*)(&and + 0x1a9050) = al_24;
    al = *(&and + 0x1a8f53);
    eax_6 = and[((eax & ~0xff | (al_24)) & ~0xff | (al))];
    al = *(&and + 0x1a8f57);
    eax_9 = and[(eax_6 & ~0xff | (al))];
    edx = *(and[eax_6] + eax_9 * 4);
    al = *(&and + 0x1a8f5b);
    eax = and[(eax_9 & ~0xff | (al))];
    edx = *(edx + and[(eax_9 & ~0xff | (al))] * 4);
    edx = *edx;
    *(__size8*)(&and + 0x1a9058) = (unsigned char) edx;
    eax = *(&and + 0x1a9054);
    edx = *(&and + 0x1a9058);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x3a90b8);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x85fd180;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd190;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd198;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x08054064;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0805406c;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 0;
    R3 = 0x8054020;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_51 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_52 = *(&and + 0x3a9090);
    edx = *(edx_52 - 0x200068);
    *(__size32*)and[edx_51] = edx;
    eax = *(&and + 0x3a9090);
    edx_53 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_53] = edx;
    *(__size32*)(&and + 0x1a8f50) = 0x88051ee5;
    *(__size32*)(&and + 0x1a8f54) = 0x80000000;
    *(__size32*)(&and + 0x1a8f60) = 0;
    ax_26 = *(&and + 0x1a8f50);
    cx_4 = *(&and + 0x1a8f54);
    edx = *(and[(ax_26)] + (cx_4) * 4);
    cx = *(&and + 0x1a8f62);
    ecx = (cx_4) & ~0xffff | (cx);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    ax_29 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_26) & ~0xffff | (ax_29))];
    edx = *(and[((ax_26) & ~0xffff | (ax_29))] + ecx * 4);
    cx = *(&and + 0x1a8f62);
    edx = *(and[edx] + (ecx & ~0xffff | (cx)) * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    eax = *(&and + 0x1a8f58);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_54 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_55 = *(&and + 0x3a9090);
    edx = *(edx_55 - 0x200068);
    *(__size32*)and[edx_54] = edx;
    eax = *(&and + 0x3a9090);
    edx_56 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_56] = edx;
    *(__size32*)(&and + 0x5a9124) = 0x8048200;
    eax = *(&and + 0x3a90b8);
    eax = *and[eax];
    R0 = eax;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_57 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_58 = *(&and + 0x3a9090);
    edx = *(edx_58 - 0x200060);
    *(__size32*)and[edx_57] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_59 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_59] = edx;
    R0 = 0;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x88051f5d;
    al_25 = *(&and + 0x1a8f50);
    dl_8 = *(&and + 0x1a8f54);
    dl = *(and[(al_25)] + (dl_8));
    edx = (dl_8) & ~0xff | (dl);
    *(int*)(&and + 0x1a8f40) = edx;
    al = *(&and + 0x1a8f51);
    eax = (al_25) & ~0xff | (al);
    dl = *(&and + 0x1a8f55);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f44) = edx;
    al = *(&and + 0x1a8f52);
    eax = eax & ~0xff | (al);
    dl = *(&and + 0x1a8f56);
    edx = edx & ~0xff | (dl);
    dl = *(and[eax] + edx);
    edx = edx & ~0xff | (dl);
    *(int*)(&and + 0x1a8f48) = edx;
    al = *(&and + 0x1a8f53);
    dl = *(&and + 0x1a8f57);
    edx = edx & ~0xff | (dl);
    dl = *(and[(eax & ~0xff | (al))] + edx);
    *(int*)(&and + 0x1a8f4c) = edx & ~0xff | (dl);
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f44);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f48);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    edx = *(&and + 0x1a8f4c);
    eax = *(and[eax] + edx * 4);
    *(__size32*)(&and + 0x1a8f40) = eax;
    eax = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x1a8f40) = eax;
    ecx = *(&and + 0x1a8f40);
    *(__size32*)(&and + 0x3a90d4) = 0x8054040;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054050;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054060;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    edx_60 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx = *(&and + 0x3a9094);
    *(__size32*)and[edx_60] = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx = *(eax + 4);
    *(__size32*)(&and + 0x1a9074) = edx;
    edx_61 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_62 = *(&and + 0x3a9090);
    edx_63 = *(edx_62 - 0x200060);
    edx = *(edx_63 - 0x200060);
    *(__size32*)and[edx_61] = edx;
    edx_64 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8054068;
    edx_65 = *(&and + 0x1a9070);
    *(__size32*)and[edx_64] = edx_65;
    edx = *(&and + 0x1a9074);
    *(__size32*)(and[edx_64] + 4) = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_66 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_67 = *(&and + 0x3a9090);
    edx = *(edx_67 - 0x200060);
    *(__size32*)and[edx_66] = edx;
    edx_68 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8054054;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_68] = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_69 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_70 = *(&and + 0x3a9090);
    edx = *(edx_70 - 0x200060);
    *(__size32*)and[edx_69] = edx;
    edx_71 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x805404c;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_71] = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_72 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_73 = *(&and + 0x3a9090);
    edx = *(edx_73 - 0x200060);
    *(__size32*)and[edx_72] = edx;
    edx_74 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8054048;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_74] = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_75 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_76 = *(&and + 0x3a9090);
    edx = *(edx_76 - 0x200060);
    *(__size32*)and[edx_75] = edx;
    edx_77 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8054044;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_77] = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_78 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_79 = *(&and + 0x3a9090);
    edx = *(edx_79 - 0x200060);
    *(__size32*)and[edx_78] = edx;
    edx_80 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd124;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_80] = edx;
    eax = *0x83fd120;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_81 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83fd120;
    edx_82 = *(&and + 0x3a9090);
    edx = *(edx_82 - 0x200060);
    *(__size32*)and[edx_81] = edx;
    edx = *(&and + 0x1a9070);
    *(__size32*)(&and + 0x1a9060) = edx;
    eax = *(&and + 0x3a90b8);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x85fd180;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd190;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85fd198;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x08054064;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0805406c;
    eax = *(&and + 0x3a90b8);
    *(__size32*)and[eax] = 0;
}

