
int advanced_1_boolean_minization(unsigned int param0, unsigned int param1, unsigned int param2) {
    return (param0 || param1 || !param2) && (param0 || !param1 || !param2) && (!param0 || param1) ? 0: 1;
}

int intermediate_1_cmp_with_are_constant(unsigned int param0) {
    if(0) {
        →puts("not reached");
    }
    if(param0 == 1 && (int)param0 > 2) {
        →puts("not reached");
    }
    if(param0 >= 0x80000000 && (int)param0 > 0) {
        →puts("not reached");
    }
    return 0;
}

int intermediate_2_cmp_with_extra(unsigned int param0) {
    if((int)param0 > 10 && (int)param0 <= 19 && param0 != 30) {
        →puts("!=30 is always true");
    }
    if(param0 == 1) {
        →puts("!=2 is always true");
    }
    if((int)param0 > 10 && (int)param0 > 9) {
        →puts(">9 is always true");
    }
    return 0;
}

int intermediate_3_division_by_multiplication(int param0) {
    →putchar(param0 / 7);
    return 0;
}

int intermediate_4_swap_with_xor(int param0, int param1) {
    int v0 = param0 ^ param1;
    int v1 = v0 ^ param1;
    →putchar(v0 ^ v1);
    →putchar(v1);
    return 0;
}

int main(unsigned int param0, unsigned int* param1) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr0 = &param0;
    char v7 = &v0 ? 0: 1;
    char v8 = (int)&v0 < 0;
    char v9 = __parity__((unsigned char)&v0);
    char v10 = 0;
    char v11 = 0;
    int v12 = v0;
    int* ptr1 = &v2;
    int v13 = v6;
    int* ptr2 = &param0;
    int* ptr3 = &ptr2;
    char v14 = &v0 == 44;
    char v15 = (int)&v3 < 0;
    char v16 = __parity__((unsigned char)&v0 - 44);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x14) ^ (int)&v3) >>> 4) & 0x1);
    char v18 = (unsigned int)&ptr2 < 20;
    char v19 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v3) & (int)(int*)((int)&ptr2 ^ 0x14)) < 0;
    unsigned int v20 = param0;
    unsigned int* ptr4 = param1;
    int v21 = intermediate_1_cmp_with_are_constant(v20);
    int v22 = v21;
    int v23 = intermediate_2_cmp_with_extra(v20);
    int v24 = v22;
    int v25 = v23 + v22;
    char v26 = v25 ? 0: 1;
    char v27 = v25 < 0;
    char v28 = __parity__((unsigned char)v25);
    char v29 = (((v23 ^ v24) ^ v25) >>> 4) & 0x1;
    char v30 = __carry__(v23, v24);
    char v31 = ((v25 ^ v24) & ~(v23 ^ v24)) < 0;
    int v32 = intermediate_3_division_by_multiplication((int)v20);
    int v33 = v25;
    int v34 = v32 + v25;
    char v35 = v34 ? 0: 1;
    char v36 = v34 < 0;
    char v37 = __parity__((unsigned char)v34);
    char v38 = (((v32 ^ v33) ^ v34) >>> 4) & 0x1;
    char v39 = __carry__(v32, v33);
    char v40 = ((v34 ^ v33) & ~(v32 ^ v33)) < 0;
    int v41 = v4;
    int v42 = v3;
    int v43 = intermediate_4_swap_with_xor(48, 97);
    int v44 = 0x55555556;
    int v45 = v34;
    int v46 = v43 + v34;
    char v47 = v46 ? 0: 1;
    char v48 = v46 < 0;
    char v49 = __parity__((unsigned char)v46);
    char v50 = (((v43 ^ v45) ^ v46) >>> 4) & 0x1;
    char v51 = __carry__(v43, v45);
    char v52 = ((v46 ^ v45) & ~(v43 ^ v45)) < 0;
    unsigned int v53 = v20;
    unsigned int v54 = v20;
    int v55 = v53 * 0x55555556;
    unsigned int v56 = (unsigned int)(((long long)v54 * 0x55555556L) >>> 32L);
    char v57 = (long long)v55 != ((unsigned long long)v55 | ((unsigned long long)v56 << 32));
    char v58 = (long long)v55 != ((unsigned long long)v55 | ((unsigned long long)v56 << 32));
    unsigned int v59 = v20;
    int* ptr5 = &v4;
    char v60 = &v0 == 36;
    char v61 = (int)&v1 < 0;
    char v62 = __parity__((unsigned char)&v0 - 36);
    char v63 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0xc) ^ (int)&v1) >>> 4) & 0x1);
    char v64 = (unsigned int)&v4 >= 0xfffffff4;
    char v65 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v1) & (int*)~(int)(int*)((int)&v4 ^ 0xc)) < 0;
    unsigned int v66 = v59;
    unsigned int v67 = v59 >> 31;
    char v68 = (v66 >>> 30) & 0x1;
    char v69 = v65;
    char v70 = v67 ? 0: 1;
    char v71 = v67 >= 0x80000000;
    char v72 = __parity__((unsigned char)v67);
    unsigned int v73 = v56;
    unsigned int v74 = v56 - v67;
    char v75 = v74 ? 0: 1;
    char v76 = v74 >= 0x80000000;
    char v77 = __parity__((unsigned char)v74);
    char v78 = (((v67 ^ v73) ^ v74) >>> 4) & 0x1;
    char v79 = v67 > v73;
    char v80 = (int)((v67 ^ v73) & (v74 ^ v73)) < 0;
    char v81 = v74 * 3 == v20;
    char v82 = (int)(v74 * 3) > (int)v20;
    char v83 = __parity__((unsigned char)v20 - (unsigned char)v74 * 3);
    char v84 = v74 * 3 > v20;
    char v85 = (int)(((v20 - v74 * 3) ^ v20) & ((v74 * 3) ^ v20)) < 0;
    char v86 = (((v20 - v74 * 3) ^ ((v74 * 3) ^ v20)) >>> 4) & 0x1;
    unsigned int v87 = (unsigned int)(v81 ? 1: 0) | ((unsigned int)(((v74 * 3) >>> 8) & 0xffffff) << 8);
    unsigned int v88 = v81 ? 1: 0;
    unsigned int v89 = v20;
    unsigned int v90 = ~v89;
    unsigned int v91 = v90 & 0x1;
    char v92 = v91 ? 0: 1;
    char v93 = v91 >= 0x80000000;
    char v94 = __parity__((unsigned char)v91);
    char v95 = 0;
    char v96 = 0;
    char v97 = v20 ? 0: 1;
    char v98 = v20 >= 0x80000000;
    char v99 = __parity__((unsigned char)v20);
    char v100 = 0;
    char v101 = 0;
    unsigned int v102 = v97 ? 1: 0;
    int v103 = advanced_1_boolean_minization(v102, v91, v88);
    char* ptr6 = *ptr4;
    int v104 = v46;
    int v105 = v103 + v46;
    char v106 = v105 ? 0: 1;
    char v107 = v105 < 0;
    char v108 = __parity__((unsigned char)v105);
    char v109 = (((v103 ^ v104) ^ v105) >>> 4) & 0x1;
    char v110 = __carry__(v103, v104);
    char v111 = ((v105 ^ v104) & ~(v103 ^ v104)) < 0;
    int v112 = (int)*ptr6;
    int v113 = v105;
    int __status = v112 + v105;
    char v114 = __status ? 0: 1;
    char v115 = __status < 0;
    char v116 = __parity__((unsigned char)__status);
    char v117 = (((v112 ^ v113) ^ __status) >>> 4) & 0x1;
    char v118 = __carry__(v112, v113);
    char v119 = ((__status ^ v113) & ~(v112 ^ v113)) < 0;
    int* ptr7 = &v5;
    /*NO_RETURN*/ →exit(__status);
}

int sub_8048316() {
    return gvar_804A008();
}

int sub_8048360() {
    return __gmon_start__();
}

int sub_804843F() {
    return 0;
}

void sub_8048478() {
}

int sub_80484A9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_80484BC() {
}

int sub_80484D0() {
    return register_tm_clones();
}
