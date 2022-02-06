
int start(int param0, unsigned char* param1) {
    unsigned char* ptr0;
    int v0;
    unsigned char v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int v5 = v2;
    unsigned int* ptr1 = &param0;
    char v6 = v5 == 3;
    char v7 = (int)v5 < 3;
    char v8 = __parity__((unsigned char)v5 - 3);
    char v9 = v5 < 3;
    char v10 = (((v5 - 3) ^ v5) & (v5 ^ 0x3)) < 0;
    char v11 = (((v5 - 3) ^ (v5 ^ 0x3)) >>> 4) & 0x1;
    if(!v9) {
        int v12 = param0;
        unsigned char* ptr2 = param1;
        ptr1 = &v4;
        v6 = *ptr2 == 45;
        v7 = *ptr2 < 45;
        v8 = __parity__(*ptr2 - 45);
        v9 = *ptr2 < 45;
        v10 = (((*ptr2 - 45) ^ *ptr2) & (*ptr2 ^ 0x2d)) < 0;
        v11 = (((*ptr2 - 45) ^ (*ptr2 ^ 0x2d)) >>> 4) & 0x1;
        if(v6) {
            char v13 = *(char*)(ptr2 + 1) == 72;
            char v14 = *(char*)(ptr2 + 1) < 72;
            char v15 = __parity__(*(char*)(ptr2 + 1) - 72);
            char v16 = *(ptr2 + 1) < 72;
            char v17 = (((*(char*)(ptr2 + 1) - 72) ^ *(char*)(ptr2 + 1)) & (*(char*)(ptr2 + 1) ^ 0x48)) < 0;
            char v18 = (((*(char*)(ptr2 + 1) - 72) ^ (*(char*)(ptr2 + 1) ^ 0x48)) >>> 4) & 0x1;
            if(v13) {
                v1 = gvar_8049615;
                ++gvar_8049615;
                char v19 = gvar_8049615 ? 0: 1;
                char v20 = gvar_8049615 >= 128;
                char v21 = __parity__(gvar_8049615);
                char v22 = (((v1 ^ 0x1) ^ gvar_8049615) >>> 4) & 0x1;
                char v23 = (char)((gvar_8049615 ^ v1) & ~(v1 ^ 0x1)) < 0;
            }
            char v24 = *(char*)(ptr2 + 1) == 83;
            char v25 = *(char*)(ptr2 + 1) < 83;
            char v26 = __parity__(*(char*)(ptr2 + 1) - 83);
            char v27 = *(ptr2 + 1) < 83;
            char v28 = (((*(char*)(ptr2 + 1) - 83) ^ *(char*)(ptr2 + 1)) & (*(char*)(ptr2 + 1) ^ 0x53)) < 0;
            char v29 = (((*(char*)(ptr2 + 1) - 83) ^ (*(char*)(ptr2 + 1) ^ 0x53)) >>> 4) & 0x1;
            if(v24) {
                v1 = gvar_8049616;
                ++gvar_8049616;
                char v30 = gvar_8049616 ? 0: 1;
                char v31 = gvar_8049616 >= 128;
                char v32 = __parity__(gvar_8049616);
                char v33 = (((v1 ^ 0x1) ^ gvar_8049616) >>> 4) & 0x1;
                char v34 = (char)((gvar_8049616 ^ v1) & ~(v1 ^ 0x1)) < 0;
            }
            char v35 = *(char*)(ptr2 + 1) == 80;
            char v36 = *(char*)(ptr2 + 1) < 80;
            char v37 = __parity__(*(char*)(ptr2 + 1) - 80);
            char v38 = *(ptr2 + 1) < 80;
            char v39 = (((*(char*)(ptr2 + 1) - 80) ^ *(char*)(ptr2 + 1)) & (*(char*)(ptr2 + 1) ^ 0x50)) < 0;
            char v40 = (((*(char*)(ptr2 + 1) - 80) ^ (*(char*)(ptr2 + 1) ^ 0x50)) >>> 4) & 0x1;
            if(v35) {
                v1 = gvar_8049617;
                ++gvar_8049617;
                char v41 = gvar_8049617 ? 0: 1;
                char v42 = gvar_8049617 >= 128;
                char v43 = __parity__(gvar_8049617);
                char v44 = (((v1 ^ 0x1) ^ gvar_8049617) >>> 4) & 0x1;
                char v45 = (char)((gvar_8049617 ^ v1) & ~(v1 ^ 0x1)) < 0;
            }
            char v46 = *(char*)(ptr2 + 1) == 65;
            char v47 = *(char*)(ptr2 + 1) < 65;
            char v48 = __parity__(*(char*)(ptr2 + 1) - 65);
            char v49 = *(ptr2 + 1) < 65;
            char v50 = (((*(char*)(ptr2 + 1) - 65) ^ *(char*)(ptr2 + 1)) & (*(char*)(ptr2 + 1) ^ 0x41)) < 0;
            v11 = (((*(char*)(ptr2 + 1) - 65) ^ (*(char*)(ptr2 + 1) ^ 0x41)) >>> 4) & 0x1;
            if(v46) {
                ++gvar_8049617;
                ++gvar_8049616;
                v1 = gvar_8049615;
                ++gvar_8049615;
                char v51 = gvar_8049615 ? 0: 1;
                char v52 = gvar_8049615 >= 128;
                char v53 = __parity__(gvar_8049615);
                v11 = (((v1 ^ 0x1) ^ gvar_8049615) >>> 4) & 0x1;
                char v54 = (char)((gvar_8049615 ^ v1) & ~(v1 ^ 0x1)) < 0;
            }
            int v55 = v4;
            int v56 = v4;
            int v57 = v55;
            int v58 = v3;
            v3 = v57;
            v0 = 0;
            v6 = 1;
            v7 = 0;
            v8 = 1;
            v10 = 0;
            v9 = 0;
            param1 = (unsigned char*)0x5;
            ptr0 = (unsigned char*)0x5;
            ptr1 = &v4;
            interrupt(128);
        }
    }
    int v59 = 345;
    v0 = &gvar_804804C;
    --ptr1;
    *ptr1 = 4;
    ptr0 = *ptr1;
    ++ptr1;
    interrupt(128);
}

short sub_804838D() {
    char v0 = 1;
    char v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 0;
    unsigned short v5 = gvar_8049877;
    short v6 = 0;
    char v7 = gvar_8049877 ? 0: 1;
    char v8 = v5 >= 0x8000;
    char v9 = __parity__((unsigned char)v5);
    char v10 = v5 < 0;
    char v11 = 0;
    char v12 = 0;
    jump v7 ? &sub_804839B: &sub_80483AC;
}

int sub_804839B() {
    char v0;
    int v1 = 45;
    int v2 = &gvar_8048256;
    int v3 = 1;
    int v4 = 4;
    int v5 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_80483AC(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    unsigned int v6;
    int v7;
    int* ptr0 = &v0;
    int v8 = 10;
    int v9 = "   program headers, starting at offset      ";
    int v10 = sub_8048D11(10);
    gvar_8049D23 = v6;
    int v11 = v2;
    unsigned int v12 = v6;
    int v13 = v3;
    int v14 = v7;
    int v15 = v1;
    int v16 = v5;
    int v17 = v4;
    int* ptr1 = &v0;
    int v18 = v16;
    int v19 = v15;
    int v20 = v14;
    int* ptr2 = &v0;
    int v21 = v13;
    unsigned int v22 = v12;
    int v23 = v11;
    unsigned int v24 = gvar_8049867;
    int v25 = 16;
    int v26 = "     ";
    int v27 = sub_8048D11(16);
    gvar_8049D23 = v12;
    int v28 = v23;
    unsigned int v29 = v22;
    int v30 = v21;
    int v31 = v20;
    int v32 = v19;
    int v33 = v18;
    int v34 = v17;
    int v35 = 55;
    int v36 = &gvar_8049814;
    int v37 = 1;
    int v38 = 4;
    int v39 = 4;
    int* ptr3 = &v0;
    interrupt(128);
}

int sub_8048445(int param0, int param1) {
    char* ptr0;
    char v0;
    char v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int* ptr1 = &v1;
    int v6 = v4;
    int v7 = param0;
    int v8 = param1;
    int v9 = v5;
    int* ptr2 = &v1;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    char* ptr3 = (char*)&gvar_80498C7;
    int v15 = 32;
    int v16 = 80;
    do {
        *ptr3 = 32;
        ++ptr3;
        --v16;
    }
    while(v16 == 0);
    unsigned int v17 = v2;
    unsigned int v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 1;
    char v22 = 0;
    char v23 = 0;
    unsigned int v24 = gvar_80498A7;
loc_804845E:
    do {
        char v25 = *(int*)&aPSHT_MIPS_UCODE[v18 + 18] == v24;
        char v26 = *(int*)&aPSHT_MIPS_UCODE[v18 + 18] > (int)v24;
        char v27 = __parity__((unsigned char)v24 - (unsigned char)*(int*)&aPSHT_MIPS_UCODE[v18 + 18]);
        char v28 = *(int*)&aPSHT_MIPS_UCODE[v18 + 18] > v24;
        char v29 = (((v24 - *(int*)&aPSHT_MIPS_UCODE[v18 + 18]) ^ v24) & (*(int*)&aPSHT_MIPS_UCODE[v18 + 18] ^ v24)) < 0;
        char v30 = (((v24 - *(int*)&aPSHT_MIPS_UCODE[v18 + 18]) ^ (*(int*)&aPSHT_MIPS_UCODE[v18 + 18] ^ v24)) >>> 4) & 0x1;
        if(!v25) {
            v18 += 19;
            char v31 = v18 == 190;
            char v32 = (int)v18 < 190;
            char v33 = __parity__((unsigned char)v18 - 190);
            char v34 = v18 < 190;
            char v35 = (((v18 - 190) ^ v18) & (v18 ^ 0xbe)) < 0;
            v0 = (((v18 - 190) ^ (v18 ^ 0xbe)) >>> 4) & 0x1;
            if(!v31) {
                goto loc_804845E;
            }
        }
        else {
            int v36 = &gvar_804955B;
            int v37 = &gvar_804955B;
            ptr0 = (char*)(v18 + &gvar_804955B);
            char v38 = ptr0 ? 0: 1;
            char v39 = (int)ptr0 < 0;
            char v40 = __parity__((unsigned char)ptr0);
            v0 = (int*)((int)(int*)((int)(int*)((v18 ^ &gvar_804955B) ^ (int)ptr0) >>> 4) & 0x1);
            char v41 = v18 >= 4160449189;
            char v42 = (int)(int*)((int)(int*)((int)ptr0 ^ &gvar_804955B) & ~(v18 ^ &gvar_804955B)) < 0;
            v16 = 15;
            char* ptr4 = (char*)&gvar_80498C9;
            while(v16 != 0) {
                *ptr4 = *ptr0;
                ++ptr0;
                ++ptr4;
                --v16;
            }
        }
        break;
    }
    while(1);
    unsigned int v43 = v17;
    gvar_80498D8 = 30768;
    unsigned int v44 = gvar_80498AB;
    int v45 = 6;
    int v46 = 134519002;
    int v47 = sub_8048D34(0, param1);
    gvar_80498E1 = 30768;
    unsigned int v48 = gvar_80498AF;
    int v49 = 8;
    int v50 = 134519011;
    int v51 = sub_8048D34(param0, param1);
    gvar_80498EC = 30768;
    unsigned int v52 = gvar_80498B3;
    int v53 = 8;
    int v54 = 134519022;
    int v55 = sub_8048D34(param0, param1);
    gvar_80498F7 = 30768;
    unsigned int v56 = gvar_80498B7;
    int v57 = 5;
    int v58 = 134519033;
    int v59 = sub_8048D34(param0, param1);
    gvar_80498FF = 30768;
    unsigned int v60 = gvar_80498BB;
    int v61 = 5;
    int v62 = 134519041;
    int v63 = sub_8048D34(param0, param1);
    int v64 = &gvar_8049907;
    unsigned int v65 = gvar_80498BF;
    char v66 = v65 & 0x4 ? 0: 1;
    char v67 = (int)(v65 & 0x4) < 0;
    char v68 = __parity__((unsigned char)v65 & 0x4);
    char v69 = 0;
    char v70 = 0;
    if(!v66) {
        gvar_8049907 = 82;
    }
    int v71 = &gvar_8049908;
    char v72 = v65 & 0x2 ? 0: 1;
    char v73 = (int)(v65 & 0x2) < 0;
    char v74 = __parity__((unsigned char)v65 & 0x2);
    char v75 = 0;
    char v76 = 0;
    if(!v72) {
        gvar_8049908 = 87;
    }
    int v77 = &gvar_8049909;
    char v78 = v65 & 0x1 ? 0: 1;
    char v79 = (int)(v65 & 0x1) < 0;
    char v80 = __parity__((unsigned char)v65 & 0x1);
    char v81 = 0;
    char v82 = 0;
    if(!v78) {
        gvar_8049909 = 88;
    }
    gvar_804990B = 30768;
    int* ptr5 = &v3;
    int v83 = param0;
    int v84 = param1;
    int v85 = 5;
    int* ptr6 = &v3;
    unsigned int v86 = v43;
    char* ptr7 = ptr0;
    int v87 = &gvar_8049909;
    unsigned int v88 = gvar_80498C3;
    int v89 = 16;
    int v90 = 134519053;
    int v91 = sub_8048D11(16);
    gvar_8049D23 = ptr0;
    int v92 = &gvar_8049909;
    char* ptr8 = ptr7;
    unsigned int v93 = v86;
    int v94 = 5;
    int v95 = v84;
    int v96 = v83;
    unsigned int v97 = v65;
    gvar_8049917 = 10;
    int v98 = 81;
    int v99 = &gvar_80498C7;
    int v100 = 1;
    v17 = 4;
    unsigned int v101 = 4;
    int* ptr9 = &v3;
    interrupt(128);
}

short sub_8048580() {
    char v0 = 1;
    char v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 0;
    unsigned short v5 = gvar_804987B;
    short v6 = 0;
    char v7 = gvar_804987B ? 0: 1;
    char v8 = v5 >= 0x8000;
    char v9 = __parity__((unsigned char)v5);
    char v10 = v5 < 0;
    char v11 = 0;
    char v12 = 0;
    jump v7 ? &sub_804858E: &sub_804859F;
}

int sub_804858E() {
    char v0;
    int v1 = 38;
    int v2 = &gvar_8048230;
    int v3 = 1;
    int v4 = 4;
    int v5 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_804859F(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    unsigned int v6;
    int v7;
    int* ptr0 = &v0;
    int v8 = 10;
    int v9 = &gvar_80497E6;
    int v10 = sub_8048D11(10);
    gvar_8049D23 = v6;
    int v11 = v2;
    unsigned int v12 = v6;
    int v13 = v3;
    int v14 = v7;
    int v15 = v1;
    int v16 = v5;
    int v17 = v4;
    int* ptr1 = &v0;
    int v18 = v16;
    int v19 = v15;
    int v20 = v14;
    int* ptr2 = &v0;
    int v21 = v13;
    unsigned int v22 = v12;
    int v23 = v11;
    unsigned int v24 = gvar_804986B;
    int v25 = 16;
    int v26 = &gvar_804980F;
    int v27 = sub_8048D11(16);
    gvar_8049D23 = v12;
    int v28 = v23;
    unsigned int v29 = v22;
    int v30 = v21;
    int v31 = v20;
    int v32 = v19;
    int v33 = v18;
    int v34 = v17;
    int v35 = 57;
    int v36 = &gvar_80497DB;
    int v37 = 1;
    int v38 = 4;
    int v39 = 4;
    int* ptr3 = &v0;
    interrupt(128);
}

int sub_8048689(unsigned char param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char* ptr0;
    int v6;
    char v7;
    int* ptr1 = &v0;
    int v8 = v4;
    int v9 = (unsigned int)param0 | ((unsigned int)v1 << 8);
    int v10 = param1;
    int v11 = v3;
    int* ptr2 = &v0;
    int v12 = &gvar_804973C;
    char v13 = param0 == 9;
    char v14 = (char)param0 < 9;
    char v15 = __parity__(param0 - 9);
    char v16 = param0 < 9;
    char v17 = (((param0 - 9) ^ param0) & (param0 ^ 0x9)) < 0;
    char v18 = (((param0 - 9) ^ (param0 ^ 0x9)) >>> 4) & 0x1;
    if((v16 || v13)) {
        int v19 = &gvar_804973C;
        v12 = " ]                                                                          \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
        char v20 = 0;
        char v21 = 0;
        char v22 = 0;
        char v23 = 0;
        char v24 = 0;
    }
    int* ptr3 = &v6;
    int v25 = v4;
    int v26 = (unsigned int)param0 | ((unsigned int)v1 << 8);
    int v27 = param1;
    int v28 = v3;
    int* ptr4 = &v6;
    int v29 = (unsigned int)param0 | ((unsigned int)v1 << 8);
    int v30 = 10;
    int v31 = sub_8048D11(10);
    gvar_8049D23 = ptr0;
    int v32 = v12;
    char* ptr5 = ptr0;
    int v33 = v5;
    int v34 = v3;
    int v35 = param1;
    int v36 = v26;
    int v37 = v4;
    char v38 = 1;
    char v39 = 0;
    char v40 = 1;
    char v41 = 0;
    char v42 = 0;
    char* ptr6 = (char*)&gvar_804973F;
    int v43 = 32;
    int v44 = 74;
    do {
        *ptr6 = 32;
        ++ptr6;
        --v44;
    }
    while(v44 == 0);
    int v45 = &gvar_8049918;
    int v46 = &gvar_8049918;
    char* ptr7 = (char*)(*(int*)((char*)&gvar_804987D + 2) + &gvar_8049918);
    char v47 = ptr7 ? 0: 1;
    char v48 = (int)ptr7 < 0;
    char v49 = __parity__((unsigned char)ptr7);
    char v50 = (int*)((int)(int*)((int)(int*)((*(int*)((char*)&gvar_804987D + 2) ^ &gvar_8049918) ^ (int)ptr7) >>> 4) & 0x1);
    char v51 = *(int*)((char*)&gvar_804987D + 2) >= 4160448232;
    char v52 = (int)(int*)((int)(int*)((int)ptr7 ^ &gvar_8049918) & ~(*(int*)((char*)&gvar_804987D + 2) ^ &gvar_8049918)) < 0;
    char* ptr8 = ptr7;
    char* ptr9 = (char*)&gvar_8049740;
    do {
        ptr7 = (unsigned int)*ptr8 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
        ++ptr8;
        *ptr9 = (unsigned char)ptr7;
        ++ptr9;
        v7 = (unsigned char)ptr7 ? 0: 1;
        char v53 = (unsigned char)ptr7 < 0;
        char v54 = __parity__((unsigned char)ptr7);
        char v55 = 0;
        char v56 = 0;
    }
    while(!v7);
    ptr7 = (unsigned int)32 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
    char* ptr10 = ptr9;
    char* ptr11 = ptr9 - 1;
    char v57 = ptr11 ? 0: 1;
    char v58 = (int)ptr11 < 0;
    char v59 = __parity__((unsigned char)ptr11);
    char v60 = (((char*)~(int)ptr11 ^ (char*)~(int)ptr10) >>> 4) & 0x1;
    char v61 = (int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr10) & (int)ptr10) < 0;
    *ptr11 = (unsigned char)ptr7;
    int* ptr12 = (int*)(ptr11 + 1);
    v25 = v33;
    unsigned int v62 = 0;
    char v63 = 1;
    char v64 = 0;
    char v65 = 1;
    char v66 = 0;
    char v67 = 0;
    unsigned int v68 = gvar_8049883;
loc_80486DD:
    do {
        char v69 = *(int*)&a__Magic______Cl[v62 + 759] == v68;
        char v70 = *(int*)&a__Magic______Cl[v62 + 759] > (int)v68;
        char v71 = __parity__((unsigned char)v68 - (unsigned char)*(int*)&a__Magic______Cl[v62 + 759]);
        char v72 = *(int*)&a__Magic______Cl[v62 + 759] > v68;
        char v73 = (((v68 - *(int*)&a__Magic______Cl[v62 + 759]) ^ v68) & (*(int*)&a__Magic______Cl[v62 + 759] ^ v68)) < 0;
        char v74 = (((v68 - *(int*)&a__Magic______Cl[v62 + 759]) ^ (*(int*)&a__Magic______Cl[v62 + 759] ^ v68)) >>> 4) & 0x1;
        if(!v69) {
            v62 += 21;
            char v75 = v62 == 420;
            char v76 = (int)v62 < 420;
            char v77 = __parity__((unsigned char)v62 - 164);
            char v78 = v62 < 420;
            char v79 = (((v62 - 420) ^ v62) & (v62 ^ 0x1a4)) < 0;
            char v80 = (((v62 - 420) ^ (v62 ^ 0x1a4)) >>> 4) & 0x1;
            if(!v75) {
                goto loc_80486DD;
            }
        }
        else {
            int v81 = &gvar_80493B7;
            int v82 = &gvar_80493B7;
            ptr8 = (char*)(v62 + &gvar_80493B7);
            char v83 = ptr8 ? 0: 1;
            char v84 = (int)ptr8 < 0;
            char v85 = __parity__((unsigned char)ptr8);
            char v86 = (int*)((int)(int*)((int)(int*)((v62 ^ &gvar_80493B7) ^ (int)ptr8) >>> 4) & 0x1);
            char v87 = v62 >= 4160449609;
            char v88 = (int)(int*)((int)(int*)((int)ptr8 ^ &gvar_80493B7) & ~(v62 ^ &gvar_80493B7)) < 0;
            v44 = 17;
            char* ptr13 = (char*)&gvar_8049752;
            while(v44 != 0) {
                *ptr13 = *ptr8;
                ++ptr8;
                ++ptr13;
                --v44;
            }
        }
        break;
    }
    while(1);
    int v89 = v25;
    unsigned int v90 = gvar_804988B;
    int v91 = 8;
    int v92 = &gvar_8049762;
    int v93 = sub_8048D34(0, v35);
    unsigned int v94 = gvar_804988F;
    int v95 = 6;
    int v96 = &gvar_804976B;
    int v97 = sub_8048D34(v2, param1);
    unsigned int v98 = gvar_8049893;
    int v99 = &gvar_8049772;
    int v100 = sub_8048D34(v2, param1);
    int v101 = &gvar_8049779;
    unsigned char v102 = (unsigned char)gvar_80498A3;
    int v103 = (unsigned int)((gvar_80498A3 >>> 8) & 0xffffff);
    char v104 = v102 == 15;
    char v105 = (char)v102 < 15;
    char v106 = __parity__(v102 - 15);
    char v107 = v102 < 15;
    char v108 = (((v102 - 15) ^ v102) & (v102 ^ 0xf)) < 0;
    char v109 = (((v102 - 15) ^ (v102 ^ 0xf)) >>> 4) & 0x1;
    if((v107 || v104)) {
        gvar_8049779 = 48;
        int v110 = &gvar_8049779;
        v101 = "               \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
        char v111 = 0;
        char v112 = 0;
        char v113 = 0;
        char v114 = 0;
        char v115 = 0;
    }
    int* ptr14 = &v6;
    int v116 = 16;
    int v117 = sub_8048D11(16);
    gvar_8049D23 = ptr8;
    int v118 = v101;
    char* ptr15 = ptr8;
    int v119 = v89;
    int v120 = 6;
    int v121 = param1;
    int v122 = v2;
    int v123 = (unsigned int)v102 | ((unsigned int)v103 << 8);
    int v124 = &gvar_804977C;
    unsigned int v125 = gvar_8049887;
    char v126 = v125 & 0x1 ? 0: 1;
    char v127 = (int)(v125 & 0x1) < 0;
    char v128 = __parity__((unsigned char)v125 & 0x1);
    char v129 = 0;
    char v130 = 0;
    if(!v126) {
        gvar_804977C = 87;
    }
    int v131 = &gvar_804977D;
    char v132 = v125 & 0x2 ? 0: 1;
    char v133 = (int)(v125 & 0x2) < 0;
    char v134 = __parity__((unsigned char)v125 & 0x2);
    char v135 = 0;
    char v136 = 0;
    if(!v132) {
        gvar_804977D = 65;
    }
    int v137 = &gvar_804977E;
    char v138 = v125 & 0x4 ? 0: 1;
    char v139 = (int)(v125 & 0x4) < 0;
    char v140 = __parity__((unsigned char)v125 & 0x4);
    char v141 = 0;
    char v142 = 0;
    if(!v138) {
        gvar_804977E = 88;
    }
    int v143 = &gvar_8049780;
    unsigned char v144 = (unsigned char)gvar_8049897;
    int v145 = (unsigned int)((gvar_8049897 >>> 8) & 0xffffff);
    char v146 = v144 == 9;
    char v147 = (char)v144 < 9;
    char v148 = __parity__(v144 - 9);
    char v149 = v144 < 9;
    char v150 = (((v144 - 9) ^ v144) & (v144 ^ 0x9)) < 0;
    char v151 = (((v144 - 9) ^ (v144 ^ 0x9)) >>> 4) & 0x1;
    if((v149 || v146)) {
        int v152 = &gvar_8049780;
        v143 = "        \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
        char v153 = 0;
        char v154 = 0;
        char v155 = 1;
        char v156 = 0;
        char v157 = 0;
    }
    int* ptr16 = &v6;
    int v158 = 10;
    int v159 = sub_8048D11(10);
    gvar_8049D23 = ptr15;
    int v160 = v143;
    char* ptr17 = ptr15;
    int v161 = v119;
    int v162 = 6;
    int v163 = v121;
    int v164 = v122;
    int v165 = (unsigned int)v144 | ((unsigned int)v145 << 8);
    int v166 = &gvar_8049784;
    unsigned char v167 = (unsigned char)gvar_804989B;
    int v168 = (unsigned int)((gvar_804989B >>> 8) & 0xffffff);
    char v169 = v167 == 15;
    char v170 = (char)v167 < 15;
    char v171 = __parity__(v167 - 15);
    char v172 = v167 < 15;
    char v173 = (((v167 - 15) ^ v167) & (v167 ^ 0xf)) < 0;
    char v174 = (((v167 - 15) ^ (v167 ^ 0xf)) >>> 4) & 0x1;
    if((v172 || v169)) {
        int v175 = &gvar_8049784;
        v166 = "    \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
        v169 = 0;
        v170 = 0;
        v171 = 0;
        v174 = 0;
        v173 = 0;
    }
    int* ptr18 = &v6;
    int v176 = 16;
    int v177 = sub_8048D11(16);
    gvar_8049D23 = ptr17;
    int v178 = v166;
    char* ptr19 = ptr17;
    int v179 = v161;
    int v180 = 6;
    int v181 = v163;
    int v182 = v164;
    int v183 = (unsigned int)v167 | ((unsigned int)v168 << 8);
    int* ptr20 = &v6;
    v26 = v182;
    v27 = v181;
    v28 = 6;
    ptr4 = &v6;
    int v184 = v179;
    char* ptr21 = ptr19;
    int v185 = v178;
    unsigned int v186 = gvar_804989F;
    int v187 = 10;
    int v188 = &gvar_8049787;
    int v189 = sub_8048D11(10);
    gvar_8049D23 = ptr19;
    int v190 = v185;
    char* ptr22 = ptr21;
    int v191 = v184;
    int v192 = 6;
    int v193 = v27;
    int v194 = v26;
    int v195 = v183;
    int v196 = 81;
    int v197 = &gvar_8049739;
    int v198 = 1;
    v25 = 4;
    int v199 = 4;
    int* ptr23 = &v6;
    interrupt(128);
}

int sub_80487FB(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v2;
    int v5 = param0;
    int v6 = param1;
    int v7 = v3;
    int* ptr1 = &v0;
    int v8 = 13;
    int v9 = &gvar_80481F4;
    int v10 = 4;
    int v11 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_8048CC6() {
    char v0;
    int v1 = &gvar_8049D23;
    int v2 = &gvar_8049D18;
    int v3 = 4;
    int v4 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048CE3() {
    char v0;
    int v1 = &gvar_8049D23;
    int v2 = &gvar_8049D18;
    int v3 = 4;
    int v4 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048D00(int param0, int param1) {
    int v0;
    int result = v0;
    char* ptr0 = (char*)&gvar_8049D18;
    int v1 = 11;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v1;
    }
    while(v1 == 0);
    return result;
}

int sub_8048D11(unsigned int param0) {
    unsigned int* ptr0;
    char* ptr1;
    unsigned int v0;
    int v1 = 0;
    do {
        unsigned int v2 = v0 % param0;
        v0 /= param0;
        ptr0 = ptr0 - 1;
        *ptr0 = (unsigned int)((unsigned char)v2 < 10 ? (unsigned char)v2 + 48: (unsigned char)v2 + 55) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        ++v1;
    }
    while(v0);
    while(1) {
        int v3 = *ptr0;
        ++ptr0;
        *ptr1 = (unsigned char)v3;
        jump v1 - 1 ? &loc_8048D2C: &sub_8048D33;
    }
}

void sub_8048D33() {
}

int sub_8048D34(int param0, int param1) {
    int v0;
    unsigned int v1;
    char* ptr0;
    int v2;
    int result = v0;
    sub_8048D11(16);
    gvar_8049D23 = v1;
    char* ptr1 = ptr0;
    unsigned int v3 = v1;
    if(*(char*)&gvar_8049D23 < 8) {
        int counter = v2 - gvar_8049D23;
        if(counter) {
            unsigned int v4 = v3;
            do {
                *ptr1 = 48;
                ++ptr1;
                --counter;
            }
            while(counter);
            v3 = v4;
        }
        sub_8048D11(16);
        gvar_8049D23 = v3;
    }
    return result;
}
