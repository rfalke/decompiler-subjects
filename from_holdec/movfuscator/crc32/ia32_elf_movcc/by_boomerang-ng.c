__size32 R0 = 0;// 4 bytes
__size32 R1 = 0;// 4 bytes
__size32 R2 = 0;// 4 bytes
__size32 R3 = 0;// 4 bytes
__size32 F0 = 0;// 4 bytes
__size32 F1 = 0;// 4 bytes
__size32 D0 = 0;// 4 bytes
__size32 global_0x08050084 = 0;// 4 bytes
__size32 D1 = 0;// 4 bytes
__size32 global_0x0805008c = 0;// 4 bytes
union { __size16; union { unsigned int; __size32 *; }[]; } and;
union { unsigned char; __size32[]; } alu_eq;
unsigned char alu_x = 0;
__size32 alu_y = 0;// 4 bytes
__size32 target = 0;// 4 bytes
int main(int argc, char *argv[]);

/** address: 0x0804d158 */
int main(int argc, char *argv[])
{
    unsigned char al; 		// r8
    unsigned char al_1; 		// r8{307}
    unsigned char al_2; 		// r8{465}
    unsigned short ax_1; 		// r0{183}
    unsigned short ax_4; 		// r0{191}
    unsigned short ax_6; 		// r0{412}
    unsigned short ax_9; 		// r0{420}
    unsigned short cx; 		// r1
    unsigned short cx_1; 		// r1{184}
    unsigned short cx_2; 		// r1{413}
    unsigned char dl; 		// r10
    unsigned char dl_1; 		// r10{6}
    unsigned char dl_2; 		// r10{308}
    unsigned char dl_3; 		// r10{466}
    int eax; 		// r24
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
    int edx_23; 		// r26{170}
    __size32 edx_24; 		// r26{172}
    int edx_25; 		// r26{176}
    int edx_26; 		// r26{202}
    __size32 edx_27; 		// r26{204}
    int edx_28; 		// r26{208}
    int edx_29; 		// r26{219}
    int edx_3; 		// r26{82}
    __size32 edx_30; 		// r26{221}
    int edx_31; 		// r26{227}
    int edx_32; 		// r26{233}
    __size32 edx_33; 		// r26{235}
    int edx_34; 		// r26{239}
    int edx_35; 		// r26{251}
    __size32 edx_36; 		// r26{253}
    int edx_37; 		// r26{257}
    int edx_38; 		// r26{263}
    __size32 edx_39; 		// r26{265}
    int edx_4; 		// r26{87}
    int edx_40; 		// r26{269}
    int edx_41; 		// r26{274}
    __size32 edx_42; 		// r26{276}
    int edx_43; 		// r26{280}
    int edx_44; 		// r26{381}
    int edx_45; 		// r26{387}
    __size32 edx_46; 		// r26{389}
    int edx_47; 		// r26{393}
    int edx_48; 		// r26{399}
    __size32 edx_49; 		// r26{401}
    __size32 edx_5; 		// r26{89}
    int edx_50; 		// r26{405}
    int edx_51; 		// r26{431}
    __size32 edx_52; 		// r26{433}
    int edx_53; 		// r26{437}
    int edx_54; 		// r26{448}
    __size32 edx_55; 		// r26{450}
    int edx_56; 		// r26{457}
    int edx_57; 		// r26{534}
    int edx_58; 		// r26{543}
    __size32 edx_59; 		// r26{545}
    int edx_6; 		// r26{93}
    __size32 edx_60; 		// r26{546}
    int edx_61; 		// r26{549}
    __size32 edx_62; 		// r26{551}
    int edx_63; 		// r26{558}
    __size32 edx_64; 		// r26{560}
    int edx_65; 		// r26{563}
    int edx_66; 		// r26{570}
    __size32 edx_67; 		// r26{572}
    int edx_68; 		// r26{575}
    int edx_69; 		// r26{582}
    int edx_7; 		// r26{98}
    __size32 edx_70; 		// r26{584}
    int edx_71; 		// r26{587}
    int edx_72; 		// r26{594}
    __size32 edx_73; 		// r26{596}
    int edx_74; 		// r26{599}
    int edx_75; 		// r26{606}
    __size32 edx_76; 		// r26{608}
    int edx_77; 		// r26{611}
    int edx_78; 		// r26{618}
    __size32 edx_79; 		// r26{620}
    __size32 edx_8; 		// r26{100}
    int edx_9; 		// r26{104}

    alu_x = target;
    alu_y = 0x8804d158;
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
    *(__size32*)(&and + 0x3a90d4) = 0x8050060;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050064;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050068;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805006c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050070;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050074;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050080;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050088;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9094);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_1 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_14 = *(&and + 0x3a9090);
    edx = *(edx_14 - 0x200068);
    *(__size32*)and[edx_13] = edx;
    eax = *(&and + 0x3a9090);
    edx_15 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_15] = edx;
    *(__size32*)(&and + 0x1a9070) = D1;
    *(__size32*)(&and + 0x1a9074) = global_0x0805008c;
    edx_16 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f9144;
    edx = *(&and + 0x3a9090);
    *(__size32*)and[edx_21] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200068);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_22 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_22] = edx;
    R3 = 0x8050028;
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
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_23 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_24 = *(&and + 0x3a9090);
    edx = *(edx_24 - 0x200068);
    *(__size32*)and[edx_23] = edx;
    eax = *(&and + 0x3a9090);
    edx_25 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_25] = edx;
    *(__size32*)(&and + 0x1a8f50) = 0x8804d71a;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_27 = *(&and + 0x3a9090);
    edx = *(edx_27 - 0x200068);
    *(__size32*)and[edx_26] = edx;
    eax = *(&and + 0x3a9090);
    edx_28 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_28] = edx;
    *(__size32*)(&and + 0x5a9124) = 0x8048240;
    eax = *(&and + 0x3a90b8);
    eax = *and[eax];
    R0 = eax;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_29 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_30 = *(&and + 0x3a9090);
    edx = *(edx_30 - 0x200060);
    *(__size32*)and[edx_29] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_31 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_31] = edx;
    R3 = R0;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_32 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_33 = *(&and + 0x3a9090);
    edx = *(edx_33 - 0x200068);
    *(__size32*)and[edx_32] = edx;
    eax = *(&and + 0x3a9090);
    edx_34 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_34] = edx;
    eax = *(&and + 0x3a9094);
    eax = *(eax - 0x200068);
    R3 = eax;
    edx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = R3;
    eax = *and[edx];
    R3 = eax;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_35 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_36 = *(&and + 0x3a9090);
    edx = *(edx_36 - 0x200068);
    *(__size32*)and[edx_35] = edx;
    eax = *(&and + 0x3a9090);
    edx_37 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_37] = edx;
    R3 = 0;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_38 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_39 = *(&and + 0x3a9090);
    edx = *(edx_39 - 0x200068);
    *(__size32*)and[edx_38] = edx;
    eax = *(&and + 0x3a9090);
    edx_40 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_40] = edx;
    *(__size32*)(&and + 0x1a9070) = 0x8804d9ca;
    edx_41 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_42 = *(&and + 0x3a9090);
    edx = *(edx_42 - 0x200068);
    *(__size32*)and[edx_41] = edx;
    eax = *(&and + 0x3a9090);
    edx_43 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_43] = edx;
    *(__size32*)(&and + 0x1a9060) = 0x88048794;
    eax = *(&and + 0x3a90b8);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x85f91a0;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85f91b0;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85f91b8;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x08050084;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0805008c;
    eax = *(&and + 0x3a90b8);
    *(__size32*)and[eax] = 0;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x8804d9ca;
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
    *(__size32*)(&and + 0x3a90d4) = 0x8050060;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050064;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050068;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805006c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050070;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050074;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050080;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050088;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    eax = *(eax - 0x200060);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_44 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_44] = edx;
    R3 = R0;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_45 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_46 = *(&and + 0x3a9090);
    edx = *(edx_46 - 0x200068);
    *(__size32*)and[edx_45] = edx;
    eax = *(&and + 0x3a9090);
    edx_47 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_47] = edx;
    R3 = 0x8050024;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_48 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_49 = *(&and + 0x3a9090);
    edx = *(edx_49 - 0x200068);
    *(__size32*)and[edx_48] = edx;
    eax = *(&and + 0x3a9090);
    edx_50 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_50] = edx;
    *(__size32*)(&and + 0x1a8f50) = 0x8804dd93;
    *(__size32*)(&and + 0x1a8f54) = 0x80000000;
    *(__size32*)(&and + 0x1a8f60) = 0;
    ax_6 = *(&and + 0x1a8f50);
    cx_2 = *(&and + 0x1a8f54);
    edx = *(and[(ax_6)] + (cx_2) * 4);
    cx = *(&and + 0x1a8f62);
    ecx = (cx_2) & ~0xffff | (cx);
    edx = *(and[edx] + ecx * 4);
    *(__size16*)(&and + 0x1a8f58) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    ax_9 = *(&and + 0x1a8f52);
    cx = *(&and + 0x1a8f56);
    ecx = ecx & ~0xffff | (cx);
    edx = and[((ax_6) & ~0xffff | (ax_9))];
    edx = *(and[((ax_6) & ~0xffff | (ax_9))] + ecx * 4);
    cx = *(&and + 0x1a8f62);
    edx = *(and[edx] + (ecx & ~0xffff | (cx)) * 4);
    *(__size16*)(&and + 0x1a8f5a) = (unsigned short) edx;
    *(__size32*)(&and + 0x1a8f60) = edx;
    eax = *(&and + 0x1a8f58);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_51 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_52 = *(&and + 0x3a9090);
    edx = *(edx_52 - 0x200068);
    *(__size32*)and[edx_51] = edx;
    eax = *(&and + 0x3a9090);
    edx_53 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_53] = edx;
    *(__size32*)(&and + 0x5a9124) = 0x8048220;
    eax = *(&and + 0x3a90b8);
    eax = *and[eax];
    R0 = eax;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_54 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_55 = *(&and + 0x3a9090);
    edx = *(edx_55 - 0x200060);
    *(__size32*)and[edx_54] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_56 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_56] = edx;
    R0 = 0;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x8804de11;
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
    *(__size32*)(&and + 0x3a90d4) = 0x8050060;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050064;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050068;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x805006c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050070;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050074;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050080;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x8050088;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    edx_57 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx = *(&and + 0x3a9094);
    *(__size32*)and[edx_57] = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx = *(eax + 4);
    *(__size32*)(&and + 0x1a9074) = edx;
    edx_58 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_59 = *(&and + 0x3a9090);
    edx_60 = *(edx_59 - 0x200060);
    edx = *(edx_60 - 0x200060);
    *(__size32*)and[edx_58] = edx;
    edx_61 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8050088;
    edx_62 = *(&and + 0x1a9070);
    *(__size32*)and[edx_61] = edx_62;
    edx = *(&and + 0x1a9074);
    *(__size32*)(and[edx_61] + 4) = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_63 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_64 = *(&and + 0x3a9090);
    edx = *(edx_64 - 0x200060);
    *(__size32*)and[edx_63] = edx;
    edx_65 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8050074;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_65] = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_66 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_67 = *(&and + 0x3a9090);
    edx = *(edx_67 - 0x200060);
    *(__size32*)and[edx_66] = edx;
    edx_68 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x805006c;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_68] = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_69 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_70 = *(&and + 0x3a9090);
    edx = *(edx_70 - 0x200060);
    *(__size32*)and[edx_69] = edx;
    edx_71 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8050068;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_71] = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_72 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_73 = *(&and + 0x3a9090);
    edx = *(edx_73 - 0x200060);
    *(__size32*)and[edx_72] = edx;
    edx_74 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x8050064;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_74] = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_75 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_76 = *(&and + 0x3a9090);
    edx = *(edx_76 - 0x200060);
    *(__size32*)and[edx_75] = edx;
    edx_77 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9144;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_77] = edx;
    eax = *0x83f9140;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_78 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f9140;
    edx_79 = *(&and + 0x3a9090);
    edx = *(edx_79 - 0x200060);
    *(__size32*)and[edx_78] = edx;
    edx = *(&and + 0x1a9070);
    *(__size32*)(&and + 0x1a9060) = edx;
    eax = *(&and + 0x3a90b8);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x85f91a0;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85f91b0;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85f91b8;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x08050084;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0805008c;
    eax = *(&and + 0x3a90b8);
    *(__size32*)and[eax] = 0;
}

