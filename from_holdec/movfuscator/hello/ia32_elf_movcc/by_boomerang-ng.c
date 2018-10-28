__size32 R0 = 0;// 4 bytes
__size32 R1 = 0;// 4 bytes
__size32 R2 = 0;// 4 bytes
__size32 R3 = 0;// 4 bytes
__size32 F0 = 0;// 4 bytes
__size32 F1 = 0;// 4 bytes
__size32 D0 = 0;// 4 bytes
__size32 global_0x0804b054 = 0;// 4 bytes
__size32 D1 = 0;// 4 bytes
__size32 global_0x0804b05c = 0;// 4 bytes
union { __size16; union { __size32 *; unsigned int; }[]; } and;
union { unsigned char; __size32[]; } alu_eq;
unsigned char alu_x = 0;
__size32 alu_y = 0;// 4 bytes
__size32 target = 0;// 4 bytes
int main(int argc, char *argv[]);

/** address: 0x08048764 */
int main(int argc, char *argv[])
{
    unsigned char al; 		// r8
    unsigned char al_1; 		// r8{216}
    unsigned short ax_1; 		// r0{164}
    unsigned short ax_4; 		// r0{172}
    unsigned short cx; 		// r1
    unsigned short cx_1; 		// r1{165}
    unsigned char dl; 		// r10
    unsigned char dl_1; 		// r10{6}
    unsigned char dl_2; 		// r10{217}
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
    int edx_22; 		// r26{151}
    __size32 edx_23; 		// r26{153}
    int edx_24; 		// r26{157}
    int edx_25; 		// r26{183}
    __size32 edx_26; 		// r26{185}
    int edx_27; 		// r26{189}
    int edx_28; 		// r26{200}
    __size32 edx_29; 		// r26{202}
    int edx_3; 		// r26{82}
    int edx_30; 		// r26{208}
    int edx_31; 		// r26{285}
    int edx_32; 		// r26{294}
    __size32 edx_33; 		// r26{296}
    __size32 edx_34; 		// r26{297}
    int edx_35; 		// r26{300}
    __size32 edx_36; 		// r26{302}
    int edx_37; 		// r26{309}
    __size32 edx_38; 		// r26{311}
    int edx_39; 		// r26{314}
    int edx_4; 		// r26{87}
    int edx_40; 		// r26{321}
    __size32 edx_41; 		// r26{323}
    int edx_42; 		// r26{326}
    int edx_43; 		// r26{333}
    __size32 edx_44; 		// r26{335}
    int edx_45; 		// r26{338}
    int edx_46; 		// r26{345}
    __size32 edx_47; 		// r26{347}
    int edx_48; 		// r26{350}
    int edx_49; 		// r26{357}
    __size32 edx_5; 		// r26{89}
    __size32 edx_50; 		// r26{359}
    int edx_51; 		// r26{362}
    int edx_52; 		// r26{369}
    __size32 edx_53; 		// r26{371}
    int edx_6; 		// r26{93}
    int edx_7; 		// r26{98}
    __size32 edx_8; 		// r26{100}
    int edx_9; 		// r26{104}

    alu_x = target;
    alu_y = 0x88048764;
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
    *(__size32*)(&and + 0x3a90d4) = 0x804b030;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b034;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b038;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b03c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b040;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b044;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b050;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b058;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    eax = *(&and + 0x3a9094);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_1 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_14 = *(&and + 0x3a9090);
    edx = *(edx_14 - 0x200068);
    *(__size32*)and[edx_13] = edx;
    eax = *(&and + 0x3a9090);
    edx_15 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_15] = edx;
    *(__size32*)(&and + 0x1a9070) = D1;
    *(__size32*)(&and + 0x1a9074) = global_0x0804b05c;
    edx_16 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
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
    *(__size32*)(&and + 0x3a90d4) = 0x83f4114;
    edx = *(&and + 0x3a9090);
    *(__size32*)and[edx_21] = edx;
    R3 = 0x804b020;
    *(__size32*)(&and + 0x1a9070) = R3;
    edx_22 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_23 = *(&and + 0x3a9090);
    edx = *(edx_23 - 0x200068);
    *(__size32*)and[edx_22] = edx;
    eax = *(&and + 0x3a9090);
    edx_24 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_24] = edx;
    *(__size32*)(&and + 0x1a8f50) = 0x88048ca4;
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
    edx_25 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_26 = *(&and + 0x3a9090);
    edx = *(edx_26 - 0x200068);
    *(__size32*)and[edx_25] = edx;
    eax = *(&and + 0x3a9090);
    edx_27 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = eax;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_27] = edx;
    *(__size32*)(&and + 0x5a9124) = 0x8048200;
    eax = *(&and + 0x3a90b8);
    eax = *and[eax];
    R0 = eax;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_28 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_29 = *(&and + 0x3a9090);
    edx = *(edx_29 - 0x200060);
    *(__size32*)and[edx_28] = edx;
    eax = *(&and + 0x3a9090);
    eax = *(eax - 0x200060);
    *(__size32*)(&and + 0x1a9070) = eax;
    edx_30 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_30] = edx;
    R0 = 0;
    eax = *(&and + 0x3a90c8);
    *(__size32*)(&and + 0x1a8f50) = eax;
    *(__size32*)(&and + 0x1a8f54) = 0x88048d1c;
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
    *(__size32*)(&and + 0x3a90d4) = 0x804b030;
    edx = *(&and + 0x5a90f0);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b034;
    edx = *(&and + 0x5a90f4);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b038;
    edx = *(&and + 0x5a90f8);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b03c;
    edx = *(&and + 0x5a90fc);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b040;
    edx = *(&and + 0x5a9100);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b044;
    edx = *(&and + 0x5a9104);
    *(__size32*)and[ecx] = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b050;
    edx = *(&and + 0x5a9108);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a910c);
    *(__size32*)(and[ecx] + 4) = edx;
    *(__size32*)(&and + 0x3a90d4) = 0x804b058;
    edx = *(&and + 0x5a9110);
    *(__size32*)and[ecx] = edx;
    edx = *(&and + 0x5a9114);
    *(__size32*)(and[ecx] + 4) = edx;
    eax = *(&and + 0x1a8f40);
    *(__size32*)and[eax] = 1;
    edx_31 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx = *(&and + 0x3a9094);
    *(__size32*)and[edx_31] = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx = *(eax + 4);
    *(__size32*)(&and + 0x1a9074) = edx;
    edx_32 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_33 = *(&and + 0x3a9090);
    edx_34 = *(edx_33 - 0x200060);
    edx = *(edx_34 - 0x200060);
    *(__size32*)and[edx_32] = edx;
    edx_35 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x804b058;
    edx_36 = *(&and + 0x1a9070);
    *(__size32*)and[edx_35] = edx_36;
    edx = *(&and + 0x1a9074);
    *(__size32*)(and[edx_35] + 4) = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_37 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_38 = *(&and + 0x3a9090);
    edx = *(edx_38 - 0x200060);
    *(__size32*)and[edx_37] = edx;
    edx_39 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x804b044;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_39] = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_40 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_41 = *(&and + 0x3a9090);
    edx = *(edx_41 - 0x200060);
    *(__size32*)and[edx_40] = edx;
    edx_42 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x804b03c;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_42] = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_43 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_44 = *(&and + 0x3a9090);
    edx = *(edx_44 - 0x200060);
    *(__size32*)and[edx_43] = edx;
    edx_45 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x804b038;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_45] = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_46 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_47 = *(&and + 0x3a9090);
    edx = *(edx_47 - 0x200060);
    *(__size32*)and[edx_46] = edx;
    edx_48 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x804b034;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_48] = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_49 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_50 = *(&and + 0x3a9090);
    edx = *(edx_50 - 0x200060);
    *(__size32*)and[edx_49] = edx;
    edx_51 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4114;
    edx = *(&and + 0x1a9070);
    *(__size32*)and[edx_51] = edx;
    eax = *0x83f4110;
    edx = *eax;
    *(__size32*)(&and + 0x1a9070) = edx;
    edx_52 = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x83f4110;
    edx_53 = *(&and + 0x3a9090);
    edx = *(edx_53 - 0x200060);
    *(__size32*)and[edx_52] = edx;
    edx = *(&and + 0x1a9070);
    *(__size32*)(&and + 0x1a9060) = edx;
    eax = *(&and + 0x3a90b8);
    edx = *(&and + 0x1a9060);
    *(__size32*)and[eax] = edx;
    ecx = *(&and + 0x3a90b8);
    *(__size32*)(&and + 0x3a90d4) = 0x85f4170;
    *(__size32*)and[ecx] = R0;
    *(__size32*)(and[ecx] + 4) = R1;
    *(__size32*)(and[ecx] + 8) = R2;
    *(__size32*)(and[ecx] + 12) = R3;
    *(__size32*)(&and + 0x3a90d4) = 0x85f4180;
    *(__size32*)and[ecx] = F0;
    *(__size32*)(and[ecx] + 4) = F1;
    *(__size32*)(&and + 0x3a90d4) = 0x85f4188;
    *(__size32*)and[ecx] = D0;
    *(__size32*)(and[ecx] + 4) = global_0x0804b054;
    *(__size32*)(and[ecx] + 8) = D1;
    *(__size32*)(and[ecx] + 12) = global_0x0804b05c;
    eax = *(&and + 0x3a90b8);
    *(__size32*)and[eax] = 0;
}

