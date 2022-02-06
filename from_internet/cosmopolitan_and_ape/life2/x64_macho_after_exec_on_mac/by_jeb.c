
long start() {
    gvar_4362B8 = 8;
    /*NO_RETURN*/ sub_4012B7();
}

long sub_401158(long param0, unsigned int param1, long param2, unsigned long* param3) {
    long v0;
    long v1 = 39L;
    while(1) {
        --param1;
        v0 = (unsigned long)((unsigned int)(param0 >>> (v1 & 0x3fL)) & 0x1ff);
        if(param1 == -1) {
            break;
        }
        else {
            unsigned long* ptr0 = (unsigned long*)(v0 * 8L + param2);
            if(!*ptr0) {
                long v2 = *param3 - 0x1000L;
                *param3 = *param3 - 0x1000L;
                *ptr0 = v2 | 0x3L;
            }
            v1 = (unsigned long)((unsigned int)v1 - 9);
            param2 = *ptr0 & 0x3fffffffff000L;
        }
    }
    return v0 * 8L + param2;
}

unsigned long* sub_4011FE(long param0, unsigned long* param1, long param2, long param3) {
    unsigned long* result;
    long v0;
    long v1;
    unsigned int v2;
    unsigned int v3;
    long v4;
    long v5;
    long v6 = v4;
    long v7 = v0;
    long v8 = v5;
    long v9 = v1;
    do {
        unsigned long v10 = *param1;
        long v11 = *(long*)(param1 + 1);
        unsigned long* ptr0 = param1;
        int v12 = *(int*)(param1 + 2);
        int v13 = *(int*)((char*)param1 + 20L);
        long v14 = (unsigned long)v3;
        do {
            long v15 = (unsigned long)(unsigned int)v14;
            v14 = (unsigned long)((unsigned int)v14 - 1);
            if(*(long*)(ptr0 - 3) != v10) {
                int* ptr1 = (int*)(ptr0 - 3);
                unsigned long* ptr2 = ptr0;
                ptr0 -= 3;
                v15 = 6L;
                do {
                    *(int*)ptr2 = *ptr1;
                    ++ptr1;
                    ptr2 = (unsigned long*)((char*)ptr2 + 4L);
                    --v15;
                }
                while(v15 == 0L);
            }
            else {
                v14 = (unsigned long)(unsigned int)v15;
            }
            break;
        }
        while((unsigned int)v14);
        ++v3;
        param1 += 3;
        result = (unsigned long*)(v14 * 24L + param3);
        *result = v10;
        *(long*)(result + 1) = v11;
        *(int*)(result + 2) = v12;
        *(int*)((char*)result + 20L) = v13;
    }
    while(v2 > v3);
    return result;
}

void sub_401270() {
    char v0;
    long v1;
    int v2;
    int v3;
    long v4 = (unsigned long)((unsigned int)&v0 - 8);
    long v5 = (unsigned long)v3 | ((unsigned long)v2 << 32);
    int v6 = v3;
    long v7 = (unsigned long)v3;
    long v8 = (unsigned long)v6;
    long v9 = v5;
    long* ptr0 = &v1;
    interrupt(3);
}

void sub_40127E() {
    char v0;
    char* ptr0 = (char*)((unsigned int)&v0 - 16);
    long v1 = 8L;
    long v2 = 8L;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v2;
    }
    while(v2 == 0L);
    while(1) {
        lidt(*(void*)((unsigned long)((unsigned int)&v0 - 8) - 8L));
        ud2();
    }
}

void sub_401299() {
}

long sub_4012B7() {
    int v0;
    char v1;
    char v2;
    long v3 = (long)v0;
    long* ptr0 = &v1;
    unsigned long* ptr1 = (unsigned long*)(v3 * 8L + (long)&v2);
    long v4 = &gvar_40126D;
    long* ptr2 = (long*)&gvar_405010;
    long v5 = 0x4050b0L;
    long v6 = 0x4050b0L;
    long v7 = 160L;
    char v8 = 0;
    char v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 0;
    char v13 = 0;
    int v14 = 160;
    long v15 = 20L;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    char v20 = 1;
    while(v15 != 0L) {
        *ptr2 = &gvar_40126D;
        ++ptr2;
        --v15;
    }
    long v21 = 0L;
    long v22 = 0xffffffffL;
    char v23 = 0;
    char v24 = 1;
    char v25 = 1;
    char v26 = 0;
    char v27 = 0;
    unsigned long* ptr3 = ptr1;
    while(v22 != 0L) {
        v23 = *ptr3 == 0L;
        v24 = *ptr3 > 0L;
        v25 = __parity__(0 - (unsigned char)*ptr3);
        v27 = *ptr3 > 0L;
        v26 = ((0L - *ptr3) & *ptr3) < 0L;
        v11 = (((0L - *ptr3) ^ *ptr3) >>> 4L) & 0x1L;
        ++ptr3;
        --v22;
        if(!~v23) {
            break;
        }
    }
    /*NO_RETURN*/ sub_401472();
}

long sub_4012F0(long param0, long param1, long param2) {
    char* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    char v4;
    char v5;
    long v6;
    long v7;
    long v8;
    long* ptr1;
    char v9;
    long v10;
    long v11;
    unsigned long* ptr2;
    long v12;
    long* ptr3;
    long v13;
    long* ptr4 = &v0;
    long v14 = &gvar_436000;
    long v15 = &gvar_404D28;
    (long v13, long v2) = rdtsc();
    *(int*)&gvar_436000 = (unsigned int)v13;
    int* ptr5 = (int*)0x436004;
    int v16 = (unsigned int)v13;
    int v17 = (unsigned int)v2;
    int v18 = 0;
    long v19 = (unsigned long)v16;
    *(int*)((char*)&gvar_436000 + 4) = v17;
    unsigned char* ptr6 = (unsigned char*)&gvar_436008;
    long v20 = v11;
    long v21 = 0L;
    long v22 = 22L;
    long v23 = 0xffffffff80000007L;
    long v24 = 0xffffffff80000001L;
    long v25 = 7L;
    long v26 = 2L;
    unsigned long* ptr7 = &v1;
    v1 = 1L;
    unsigned char* ptr8 = (unsigned char*)&gvar_436008;
    long v27 = 0L;
    char v28 = 1;
    char v29 = 0;
    char v30 = 1;
    char v31 = 0;
    char v32 = 0;
    do {
        long v33 = 0L;
        char v34 = 1;
        char v35 = 0;
        char v36 = 1;
        char v37 = 0;
        char v38 = 0;
        (long v8, long v6, long v10, long v12) = cpuid(v27, 0L);
        *(int*)ptr6 = (unsigned int)v8;
        int* ptr9 = (int*)(ptr6 + 4L);
        int v39 = (unsigned int)v8;
        int v40 = (unsigned int)v6;
        int v41 = 0;
        long v42 = (unsigned long)v39;
        *ptr9 = v40;
        int* ptr10 = ptr9 + 1;
        int v43 = v40;
        int v44 = (unsigned int)v10;
        int v45 = 0;
        long v46 = (unsigned long)v43;
        *ptr10 = v44;
        int* ptr11 = ptr10 + 1;
        int v47 = v44;
        int v48 = (unsigned int)v12;
        int v49 = 0;
        long v50 = (unsigned long)v47;
        *ptr11 = v48;
        ptr6 = (unsigned char*)(ptr11 + 1);
    loc_401328:
        while(1) {
            v27 = *ptr7;
            ++ptr7;
            char v51 = (unsigned int)v27 ? 0: 1;
            char v52 = (unsigned int)v27 < 0;
            char v53 = __parity__((unsigned char)v27);
            char v54 = 0;
            char v55 = 0;
            if(v51) {
                long v56 = *ptr7;
                unsigned long* ptr12 = ptr2;
                *(unsigned long**)ptr6 = ptr2;
                long* ptr13 = (long*)(ptr6 + 8L);
                *ptr7 = &loc_401344;
                long v57 = /*BAD_CALL!*/ sub_4014BA((long)ptr13, &gvar_404D28);
                long v58 = -1L;
                char v59 = 0;
                char v60 = 1;
                char v61 = 1;
                char v62 = 0;
                char v63 = 0;
                *ptr3 = -1L;
                long* ptr14 = ptr3 + 1;
                *ptr14 = -1L;
                long* ptr15 = ptr14 + 1;
                long v64 = &gvar_40462E;
                *ptr15 = &gvar_40462E;
                long* ptr16 = ptr15 + 1;
                --ptr7;
                *ptr7 = 32L;
                long v65 = *ptr7;
                long v66 = &gvar_404434;
                char v67 = gvar_436023 & 0x10 ? 0: 1;
                char v68 = (char)(gvar_436023 & 0x10) < 0;
                char v69 = __parity__(gvar_436023 & 0x10);
                char v70 = 0;
                char v71 = 0;
                *ptr7 = &loc_401367;
                long v72 = /*BAD_CALL!*/ sub_40150F((long)ptr16, v3, &gvar_404434, v65, v7);
                --ptr7;
                *ptr7 = 32L;
                long v73 = *ptr7;
                long v74 = &gvar_40457C;
                char v75 = gvar_43603C & 0x20 ? 0: 1;
                char v76 = (char)(gvar_43603C & 0x20) < 0;
                char v77 = __parity__(gvar_43603C & 0x20);
                char v78 = 0;
                char v79 = 0;
                *ptr7 = &loc_40137B;
                long v80 = /*BAD_CALL!*/ sub_40150F((long)ptr3, v3, &gvar_40457C, v73, v7);
                long v81 = *ptr1;
                *ptr3 = *ptr1;
                long* ptr17 = ptr3 + 1;
                long v82 = &gvar_404690;
                *ptr17 = &gvar_404690;
                char* ptr18 = (char*)(ptr17 + 1);
                --ptr7;
                *ptr7 = v56;
                --ptr7;
                *ptr7 = v3;
                char v83 = *ptr18 & 0x8 ? 0: 1;
                char v84 = (*ptr18 & 0x8) < 0;
                char v85 = __parity__(*ptr18 & 0x8);
                char v86 = 0;
                char v87 = 0;
                if(v83) {
                    char v88 = *ptr18 & 0x20 ? 0: 1;
                    char v89 = (*ptr18 & 0x20) < 0;
                    char v90 = __parity__(*ptr18 & 0x20);
                    char v91 = 0;
                    char v92 = 0;
                    if(v88) {
                        char v93 = *ptr18 & 0x4 ? 0: 1;
                        char v94 = (*ptr18 & 0x4) < 0;
                        char v95 = __parity__(*ptr18 & 0x4);
                        char v96 = 0;
                        char v97 = 0;
                        if(v93) {
                            char v98 = *ptr2 ? 0: 1;
                            char v99 = *ptr2 < 0L;
                            char v100 = __parity__((unsigned char)*ptr2);
                            char v101 = *ptr2 < 0L;
                            char v102 = 0;
                            char v103 = 0;
                            --ptr7;
                            if(!v98) {
                                *ptr7 = 0L;
                                --ptr7;
                                *ptr7 = 1L;
                                ptr0 = (char*)&gvar_404DA2;
                            }
                            else {
                                *ptr7 = 42L;
                                --ptr7;
                                *ptr7 = 16L;
                                ptr0 = (char*)&gvar_404DC9;
                            }
                        }
                        else {
                            --ptr7;
                            *ptr7 = 34L;
                            --ptr7;
                            *ptr7 = 4L;
                            ptr0 = (char*)&gvar_404DF1;
                        }
                    }
                    else {
                        --ptr7;
                        *ptr7 = 48L;
                        --ptr7;
                        *ptr7 = 32L;
                        ptr0 = (char*)&gvar_404D79;
                    }
                }
                else {
                    --ptr7;
                    *ptr7 = 69L;
                    --ptr7;
                    *ptr7 = 8L;
                    ptr0 = (char*)&gvar_404E30;
                }
                long v104 = &gvar_404310;
                long v105 = *ptr7;
                ++ptr7;
                *(long*)ptr18 = v105;
                long* ptr19 = (long*)(ptr18 + 8L);
                long v106 = *ptr7;
                unsigned long v107 = *ptr7;
                long v108 = v106 + &gvar_404310;
                char v109 = v108 ? 0: 1;
                char v110 = v108 < 0L;
                char v111 = __parity__((unsigned char)v108);
                char v112 = (((v107 ^ &gvar_404310) ^ v108) >>> 4L) & 0x1L;
                char v113 = v107 >= 18446744073705340144L;
                char v114 = ((v108 ^ v107) & ~(v107 ^ &gvar_404310)) < 0L;
                *ptr19 = v108;
                long* ptr20 = ptr19 + 1;
                *ptr7 = ptr19 + 1;
                unsigned long* ptr21 = (unsigned long*)&gvar_4362E8;
                long v115 = -1L;
                char v116 = 0;
                char v117 = 1;
                char v118 = 1;
                char v119 = 0;
                char v120 = 0;
                long v121 = 4416472L;
                while(1) {
                    char v122 = ptr21 == 4416472L;
                    char v123 = (long)ptr21 < 4416472L;
                    char v124 = __parity__((unsigned char)ptr21 - 216);
                    char v125 = (unsigned long)ptr21 < 4416472L;
                    char v126 = (long)(long*)((long)(long*)((long)(long*)(ptr21 - 552059) ^ (long)ptr21) & (long)(long*)((long)ptr21 ^ 0x4363d8L)) < 0L;
                    char v127 = (long*)((long)(long*)((long)(long*)((long)(long*)(ptr21 - 552059) ^ (long)(long*)((long)ptr21 ^ 0x4363d8L)) >>> 4L) & 0x1L);
                    if(!v125) {
                    loc_40142B:
                        long* ptr22 = *ptr7;
                        ++ptr7;
                        long v128 = *ptr7;
                        ++ptr7;
                        ++ptr7;
                        unsigned long* ptr23 = ptr7;
                        ptr7 -= 4;
                        --ptr7;
                        *ptr7 = &loc_401440;
                        /*BAD_CALL!*/ gvar_405080(4423552L, param1, param2, -1L);
                        unsigned long* ptr24 = ptr7;
                        ptr7 += 4;
                        *ptr22 = &sub_403817;
                        long* ptr25 = ptr22 + 1;
                        --ptr7;
                        *ptr7 = 0x401450L;
                        /*NO_RETURN*/ sub_401466((long)ptr25, v128);
                    }
                    v104 = 0L;
                    param1 = 0L;
                    char v129 = 1;
                    char v130 = 0;
                    char v131 = 1;
                    char v132 = 0;
                    char v133 = 0;
                    do {
                        v108 = (unsigned long)*ptr0 | ((unsigned long)((v108 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        long v134 = v108;
                        long v135 = (unsigned long)((unsigned int)v134 & 0x7f);
                        char v136 = (unsigned int)v134 & 0x7f ? 0: 1;
                        char v137 = (v135 >>> 31L) & 0x1L;
                        char v138 = __parity__((unsigned char)v135);
                        char v139 = 0;
                        char v140 = 0;
                        long v141 = v135;
                        param2 = v135 << (v104 & 0x3fL);
                        char v142 = (unsigned long)(v104 & 0x3fL) < 64L && (v104 & 0x3fL) ? v141 << ((v104 & 0x3fL) - 1L) < 0L: 0;
                        char v143 = (v104 & 0x3fL) == 1L ? v141 < 0L ^ ((v141 >>> 62L) & 0x1L): 0;
                        char v144 = v104 & 0x3fL ? param2 ? 0: 1: v136;
                        char v145 = v104 & 0x3fL ? param2 < 0L: v137;
                        char v146 = v104 & 0x3fL ? __parity__((unsigned char)param2): v138;
                        v104 = (unsigned long)((unsigned int)v104 + 7);
                        param1 |= param2;
                        char v147 = (unsigned char)v108 ? 0: 1;
                        v9 = (unsigned char)v108 < 0;
                        char v148 = __parity__((unsigned char)v108);
                        char v149 = 0;
                        char v150 = 0;
                    }
                    while(v9);
                    char v151 = (unsigned char)v108 & 0x40 ? 0: 1;
                    char v152 = ((unsigned char)v108 & 0x40) < 0;
                    char v153 = __parity__((unsigned char)v108 & 0x40);
                    char v154 = 0;
                    char v155 = 0;
                    if(!v151) {
                        long v156 = -1L;
                        long v157 = -1L;
                        long v158 = -1L << (v104 & 0x3fL);
                        char v159 = (unsigned long)(v104 & 0x3fL) < 64L && (v104 & 0x3fL) ? -1L << ((v104 & 0x3fL) - 1L) < 0L: 0;
                        char v160 = 0;
                        char v161 = v104 & 0x3fL ? v158 ? 0: 1: 0;
                        char v162 = v104 & 0x3fL ? v158 < 0L: v152;
                        char v163 = v104 & 0x3fL ? __parity__((unsigned char)v158): v153;
                        param1 |= v158;
                        char v164 = param1 ? 0: 1;
                        char v165 = param1 < 0L;
                        char v166 = __parity__((unsigned char)param1);
                        char v167 = 0;
                        char v168 = 0;
                    }
                    long v169 = param1;
                    char v170 = *ptr21 ? 0: 1;
                    char v171 = *ptr21 < 0L;
                    char v172 = __parity__((unsigned char)*ptr21);
                    char v173 = *ptr21 < 0L;
                    char v174 = 0;
                    char v175 = 0;
                    v108 = v170 ? v169: *ptr21;
                    *ptr21 = v170 ? v169: *ptr21;
                    ++ptr21;
                }
                goto loc_40142B;
            }
            else {
                v4 = (unsigned char)v27 == *(char*)&gvar_436008;
                char v176 = (unsigned char)v27 < *(char*)&gvar_436008;
                char v177 = __parity__((unsigned char)v27 - *(char*)&gvar_436008);
                v5 = (unsigned char)v27 < *(char*)&gvar_436008;
                char v178 = ((((unsigned char)v27 - *(char*)&gvar_436008) ^ (unsigned char)v27) & ((unsigned char)v27 ^ *(char*)&gvar_436008)) < 0;
                char v179 = ((((unsigned char)v27 - *(char*)&gvar_436008) ^ ((unsigned char)v27 ^ *(char*)&gvar_436008)) >>> 4) & 0x1;
            }
        }
    }
    while(v5 || v4);
    unsigned char* ptr26 = ptr6;
    ptr6 += 16L;
    char v180 = ptr6 ? 0: 1;
    char v181 = (long)ptr6 < 0L;
    char v182 = __parity__((unsigned char)ptr6);
    char v183 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr26 ^ 0x10L) ^ (long)ptr6) >>> 4L) & 0x1L);
    char v184 = (unsigned long)ptr26 >= 18446744073709551600L;
    char v185 = (long)(long*)((long)(long*)((long)ptr6 ^ (long)ptr26) & (long*)~(long)(long*)((long)ptr26 ^ 0x10L)) < 0L;
    goto loc_401328;
}

long sub_401AC6() {
    return gvar_4362C8();
}

unsigned long sub_401AD2(long param0, long param1, unsigned long param2) {
    unsigned long v0 = (unsigned int)param1 & 0xf ? (unsigned long)((0 - ((unsigned int)param1 + 16)) & 0xf): (unsigned long)((unsigned int)param1 & 0xf);
    long v1 = v0 + param1;
    unsigned long v2 = param2 - v0;
    *(long*)(param0 + 40L) = v1;
    *(unsigned long*)(param0 + 16L) = v2;
    *(long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long result = gvar_4367C0;
    *(long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long*)(param0 + 48L) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_401B19(long param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6 = v1;
    long v7 = v2;
    long result = 0L;
    long v8 = v5;
    long v9 = v3;
    long v10 = param0;
    long v11 = v4;
    long* ptr0 = *(unsigned long*)(param0 + 0x388L);
    char v12 = ptr0 ? 0: 1;
    if(!v12) {
        int v13 = *(int*)(ptr0 + 3);
        char v14 = (unsigned char)v13 & 0x1 ? 0: 1;
        if(!v14) {
            int v15 = v13 & 0x8;
            if(!(v13 & 0x8)) {
                param0 = *ptr0;
                unsigned long v16 = (unsigned long)(((unsigned int)param0 & 0xf ? (unsigned long)((0 - ((unsigned int)param0 + 16)) & 0xf): (unsigned long)((unsigned int)param0 & 0xf)) + param0);
                result = 0L;
                long v17 = *(long*)(v16 + 8L);
                if(!((unsigned long)((unsigned int)v17 & 0x3) - 1L)) {
                    result = *(ptr0 + 1);
                    unsigned long v18 = (unsigned long)(v17 & 0xfffffffffffffff8L);
                    long v19 = (long)(v16 + v18);
                    long v20 = param0 + result - 80L;
                    if((unsigned long)v19 >= (unsigned long)v20) {
                        long v21 = *(ptr0 + 2);
                        if(*(long*)(v10 + 32L) == v16) {
                            *(long*)(v10 + 32L) = 0L;
                            *(long*)(v10 + 8L) = 0L;
                        }
                        else {
                            long v22 = *(long*)(v16 + 24L);
                            long v23 = *(long*)(v16 + 48L);
                            if(v22 != v16) {
                                v20 = *(long*)(v16 + 16L);
                                *(long*)(v20 + 24L) = v22;
                                *(long*)(v22 + 16L) = v20;
                            }
                            else {
                                v22 = *(long*)(v22 + 40L);
                                v19 = (long)(v16 + 40L);
                                if(!v22) {
                                    v22 = *(long*)(v16 + 32L);
                                    if(v22) {
                                        v19 = (long)(v16 + 32L);
                                        goto loc_401BFB;
                                    }
                                }
                                else {
                                loc_401BFB:
                                    v20 = v22;
                                loc_401BFE:
                                    do {
                                        v0 = v19;
                                        v22 = v20;
                                        v19 = v20 + 40L;
                                        v20 = *(long*)(v20 + 40L);
                                        if(v20) {
                                            goto loc_401BFE;
                                        }
                                        else {
                                            v20 = *(long*)(v22 + 32L);
                                            v19 = v22 + 32L;
                                        }
                                    }
                                    while(v20);
                                    *(long*)v0 = 0L;
                                }
                            }
                            if(v23) {
                                v19 = (long)*(int*)(v16 + 56L);
                                v20 = (long)*(int*)(v16 + 56L) * 8L + v10;
                                if(*(long*)(v20 + 600L) == v16) {
                                    *(long*)(v20 + 600L) = v22;
                                    if(v22) {
                                        goto loc_401C49;
                                    }
                                    else {
                                        *(int*)(v10 + 4L) = (__rol__(-2, v19 & 0x1fL)) & *(int*)(v10 + 4L);
                                    }
                                }
                                else {
                                    if(*(long*)(v23 + 32L) == v16) {
                                        *(long*)(v23 + 32L) = v22;
                                    }
                                    else {
                                        *(long*)(v23 + 40L) = v22;
                                    }
                                    if(v22) {
                                    loc_401C49:
                                        long v24 = *(long*)(v16 + 32L);
                                        *(long*)(v22 + 48L) = v23;
                                        if(v24) {
                                            *(long*)(v22 + 32L) = v24;
                                            *(long*)(v24 + 48L) = v22;
                                        }
                                        v20 = *(long*)(v16 + 40L);
                                        if(v20) {
                                            *(long*)(v22 + 40L) = v20;
                                            *(long*)(v20 + 48L) = v22;
                                        }
                                    }
                                }
                            }
                        }
                        long v25 = v21;
                        long v26 = /*BAD_CALL!*/ sub_403D56(param0, result, v20, v19);
                        int v27 = (unsigned int)v26;
                        if(!v27) {
                            long v28 = v25;
                            *(long*)(v10 + 856L) = *(long*)(v10 + 856L) - result;
                            *(long*)(v10 + 0x388L) = v28;
                        }
                        else {
                            long v29 = v18 >>> 8;
                            unsigned int v30 = (unsigned int)v29;
                            if((unsigned int)v29) {
                                v30 = 31;
                                if((unsigned int)v29 <= 0xffff) {
                                    if((unsigned int)v29 != 0) {
                                        int i;
                                        for(i = 31; !((unsigned int)v29 >>> i); --i) {
                                        }
                                        v29 = (unsigned long)i | ((unsigned long)(unsigned int)(v29 >>> 32L) << 32);
                                    }
                                    v30 = (unsigned int)((31 - (unsigned int)((unsigned int)v29 ^ 0x1f)) * 2 + ((unsigned int)(long)(v18 >>> ((unsigned long)(38 - ((unsigned int)v29 ^ 0x1f)) & 0x3fL)) & 0x1));
                                }
                            }
                            int v31 = *(int*)(v10 + 4L);
                            int v32 = 1 << ((unsigned long)v30 & 0x1fL);
                            *(unsigned int*)(v16 + 56L) = v30;
                            *(long*)(v16 + 40L) = 0L;
                            v19 = (long)v32;
                            *(long*)(v16 + 32L) = 0L;
                            long v33 = (long)v30;
                            if(!(v31 & v32)) {
                                *(int*)(v10 + 4L) = (unsigned int)v19 | v31;
                                *(unsigned long*)(v33 * 8L + v10 + 600L) = v16;
                                *(long*)(v16 + 48L) = v33 * 8L + v10 + 600L;
                            loc_401D92:
                                *(unsigned long*)(v16 + 24L) = v16;
                                *(unsigned long*)(v16 + 16L) = v16;
                            }
                            else {
                                v20 = *(long*)(v33 * 8L + v10 + 600L);
                                if(v30 != 31) {
                                    v15 = 57 - (v30 >>> 1);
                                }
                                v19 = (long)(v18 << ((unsigned long)v15 & 0x3fL));
                                while((unsigned long)(*(long*)(v20 + 8L) & 0xfffffffffffffff8L) != v18) {
                                    long v34 = v19;
                                    v19 *= 2L;
                                    long v35 = 4L - (v34 >> 63);
                                    v33 = *(long*)(v35 * 8L + v20);
                                    if(v33) {
                                        v20 = v33;
                                    }
                                    else {
                                        *(unsigned long*)(v35 * 8L + v20) = v16;
                                        *(long*)(v16 + 48L) = v20;
                                        goto loc_401D92;
                                    }
                                }
                                long v36 = *(long*)(v20 + 16L);
                                *(unsigned long*)(v36 + 24L) = v16;
                                *(unsigned long*)(v20 + 16L) = v16;
                                *(long*)(v16 + 16L) = v36;
                                *(long*)(v16 + 24L) = v20;
                                *(long*)(v16 + 48L) = 0L;
                            }
                            result = 0L;
                            *(long*)(v10 + 56L) = 128L;
                            return result;
                        }
                    }
                    else {
                        result = 0L;
                    }
                }
            }
        }
    }
    *(long*)(v10 + 56L) = 128L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_401DD6(long param0, unsigned long param1, long param2, long param3, unsigned long param4, unsigned long param5) {
    unsigned long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7 = v2;
    long v8 = v1;
    long v9 = v5;
    long v10 = v6;
    if(param1 <= 18446744073709551487L) {
        long v11 = *(long*)(param0 + 40L);
        if(!v11) {
            v6 = 0L;
            return v6 ? 1L: 0L;
        }
        unsigned long v12 = *(unsigned long*)(param0 + 16L);
        if(param1 + 80L < v12) {
            unsigned long* ptr0 = (unsigned long*)(param0 + 888L);
            unsigned long* ptr1 = (unsigned long*)(param0 + 888L);
            do {
                v0 = *ptr1;
                if((unsigned long)v11 >= v0) {
                    param5 = *(ptr1 + 1);
                    param4 = v0 + param5;
                    if((unsigned long)v11 >= param4) {
                        ptr1 = *(ptr1 + 2);
                    }
                }
                else {
                    ptr1 = *(ptr1 + 2);
                }
                goto loc_401E43;
            }
            while(ptr1);
            ud2();
        loc_401E43:
            long v13 = (unsigned long)*(int*)(ptr1 + 3);
            if(((unsigned char)v13 & 0x8) || !((unsigned char)v13 & 0x1)) {
                goto loc_401E0A;
            }
            else {
                unsigned long v14 = gvar_4367B0;
                v6 = ((unsigned long)(v12 + v14 - 81L - param1) / v14 - 1L) * v14;
                if((unsigned long)v6 > param5) {
                    goto loc_401E0A;
                }
                else {
                    while(1) {
                        if((unsigned long)ptr0 >= v0 && (unsigned long)ptr0 < param4) {
                            goto loc_401E0A;
                        }
                        else {
                            ptr0 = *(ptr0 + 2);
                            if(!ptr0) {
                                unsigned long v15 = param5 - v6;
                                long v16 = sub_404008();
                                if(!(v16 + 1L)) {
                                    long v17 = /*BAD_CALL!*/ sub_403D56(*ptr1 + v15, v6, v4, v3);
                                    if((unsigned int)v17) {
                                        goto loc_401E0A;
                                    }
                                }
                                if(v6) {
                                    *(long*)(ptr1 + 1) = *(long*)(ptr1 + 1) - v6;
                                    unsigned long v18 = *(unsigned long*)(param0 + 16L);
                                    *(long*)(param0 + 856L) = *(long*)(param0 + 856L) - v6;
                                    sub_401AD2(param0, *(long*)(param0 + 40L), v18 - v6);
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
        else {
        loc_401E0A:
            v6 = 0L;
        }
        v11 = sub_401B19(param0);
        v6 += v11;
        if(!v6) {
            if(*(unsigned long*)(param0 + 16L) <= (unsigned long)*(long*)(param0 + 48L)) {
                v6 = 0L;
                return v6 ? 1L: 0L;
            }
            *(long*)(param0 + 48L) = -1L;
        }
    }
    else {
        v6 = 0L;
    }
    return v6 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_401F12(long param0, long param1, long param2, long param3) {
    long* ptr0;
    long v0;
    long* ptr1;
    long* ptr2;
    long v1;
    long v2;
    long v3;
    long v4 = v2;
    long v5 = v3;
    long v6 = param0;
    param0 = param1;
    long result = *(long*)(param0 + 8L);
    param1 += param2;
    if(!((unsigned char)result & 0x1)) {
        v1 = *(long*)param0;
        param0 -= v1;
        if((unsigned char)result & 0x3) {
            param2 += v1;
            if(*(long*)(v6 + 32L) == param0) {
                result = *(long*)(param1 + 8L);
                if(((unsigned int)result & 0x3) == 3) {
                    *(long*)(v6 + 8L) = param2;
                    *(long*)(param1 + 8L) = result & 0xfffffffffffffffeL;
                    result = param2 | 0x1L;
                    *(long*)(param0 + 8L) = param2 | 0x1L;
                    *(long*)param1 = param2;
                    return result;
                }
                goto loc_40209E;
            }
            else {
                long v7 = v1;
                result = *(long*)(param0 + 24L);
                param3 = v7 >>> 3;
            }
            if((unsigned long)v1 <= 0xffL) {
                unsigned long v8 = *(unsigned long*)(param0 + 16L);
                char v9 = result == v8;
                if(v9) {
                    result = (long)__rol__(-2, param3 & 0x1fL);
                    *(int*)v6 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v6;
                }
                else {
                    *(long*)(v8 + 24L) = result;
                    *(unsigned long*)(result + 16L) = v8;
                }
            }
            else {
                char v10 = result == param0;
                long v11 = *(long*)(param0 + 48L);
                if(!v10) {
                    param3 = *(long*)(param0 + 16L);
                    *(long*)(param3 + 24L) = result;
                    *(long*)(result + 16L) = param3;
                }
                else {
                    result = *(long*)(param0 + 40L);
                    ptr2 = (long*)(param0 + 40L);
                    if(!result) {
                        result = *(long*)(param0 + 32L);
                        if(result) {
                            ptr2 = (long*)(param0 + 32L);
                            goto loc_401FCF;
                        }
                    }
                    else {
                    loc_401FCF:
                        param3 = result;
                    loc_401FD2:
                        do {
                            ptr1 = ptr2;
                            result = param3;
                            ptr2 = (long*)(param3 + 40L);
                            param3 = *(long*)(param3 + 40L);
                            if(param3) {
                                goto loc_401FD2;
                            }
                            else {
                                param3 = *(long*)(result + 32L);
                                ptr2 = (long*)(result + 32L);
                            }
                        }
                        while(param3);
                        *ptr1 = 0L;
                    }
                }
                if(v11) {
                    long v12 = (long)*(int*)(param0 + 56L);
                    param3 = (long)*(int*)(param0 + 56L);
                    ptr2 = (long*)(v12 * 8L + v6);
                    if(*(ptr2 + 75) == param0) {
                        char v13 = result ? 0: 1;
                        *(ptr2 + 75) = result;
                        if(!v13) {
                            goto loc_402022;
                        }
                        else {
                            result = (long)__rol__(-2, param3 & 0x1fL);
                            *(int*)(v6 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v6 + 4L);
                        }
                    }
                    else {
                        if(*(long*)(v11 + 32L) == param0) {
                            *(long*)(v11 + 32L) = result;
                        }
                        else {
                            *(long*)(v11 + 40L) = result;
                        }
                        if(result) {
                        loc_402022:
                            long v14 = *(long*)(param0 + 32L);
                            *(long*)(result + 48L) = v11;
                            if(v14) {
                                *(long*)(result + 32L) = v14;
                                *(long*)(v14 + 48L) = result;
                            }
                            param3 = *(long*)(param0 + 40L);
                            if(param3) {
                                *(long*)(result + 40L) = param3;
                                *(long*)(param3 + 48L) = result;
                            }
                        }
                    }
                }
            }
            goto loc_40209E;
        }
        else {
            v0 = param2 + v1 + 32L;
            result = sub_403D56(param0, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long*)(v6 + 856L) = *(long*)(v6 + 856L) - v0;
            return result;
        }
    }
    else {
    loc_40209E:
        v1 = *(long*)(param1 + 8L);
        if(!((unsigned char)v1 & 0x2)) {
            char v15 = *(long*)(v6 + 40L) == param1;
            ptr1 = *(unsigned long*)(v6 + 32L);
            if(!v15) {
                if(param1 == ptr1) {
                    param2 += *(long*)(v6 + 8L);
                    *(long*)(v6 + 32L) = param0;
                    *(long*)(v6 + 8L) = param2;
                    result = param2 | 0x1L;
                    *(long*)(param0 + 8L) = param2 | 0x1L;
                    *(long*)(param2 + param0) = param2;
                }
                else {
                    v1 &= -8L;
                    long v16 = *(long*)(param1 + 24L);
                    long v17 = v1;
                    param2 += v1;
                    param3 = v17 >>> 3;
                    if((unsigned long)v1 <= 248L) {
                        param1 = *(long*)(param1 + 16L);
                        if(v16 == param1) {
                            *(int*)v6 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v6;
                        }
                        else {
                            *(long*)(param1 + 24L) = v16;
                            *(long*)(v16 + 16L) = param1;
                        }
                    }
                    else {
                        v1 = *(long*)(param1 + 48L);
                        if(v16 != param1) {
                            param3 = *(long*)(param1 + 16L);
                            *(long*)(param3 + 24L) = v16;
                            *(long*)(v16 + 16L) = param3;
                        }
                        else {
                            v16 = *(long*)(param1 + 40L);
                            ptr2 = (long*)(param1 + 40L);
                            if(!v16) {
                                v16 = *(long*)(param1 + 32L);
                                if(v16) {
                                    ptr2 = (long*)(param1 + 32L);
                                    goto loc_40217D;
                                }
                            }
                            else {
                            loc_40217D:
                                param3 = v16;
                            loc_402180:
                                do {
                                    ptr0 = ptr2;
                                    v16 = param3;
                                    ptr2 = (long*)(param3 + 40L);
                                    param3 = *(long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_402180;
                                    }
                                    else {
                                        param3 = *(long*)(v16 + 32L);
                                        ptr2 = (long*)(v16 + 32L);
                                    }
                                }
                                while(param3);
                                *ptr0 = 0L;
                            }
                        }
                        if(v1) {
                            param3 = (long)*(int*)(param1 + 56L);
                            ptr2 = (long*)((long)*(int*)(param1 + 56L) * 8L + v6);
                            if(*(ptr2 + 75) == param1) {
                                *(ptr2 + 75) = v16;
                                if(v16) {
                                    goto loc_4021CC;
                                }
                                else {
                                    *(int*)(v6 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v6 + 4L);
                                }
                            }
                            else {
                                if(*(long*)(v1 + 32L) == param1) {
                                    *(long*)(v1 + 32L) = v16;
                                }
                                else {
                                    *(long*)(v1 + 40L) = v16;
                                }
                                if(v16) {
                                loc_4021CC:
                                    long v18 = *(long*)(param1 + 32L);
                                    *(long*)(v16 + 48L) = v1;
                                    if(v18) {
                                        *(long*)(v16 + 32L) = v18;
                                        *(long*)(v18 + 48L) = v16;
                                    }
                                    param3 = *(long*)(param1 + 40L);
                                    if(param3) {
                                        *(long*)(v16 + 40L) = param3;
                                        *(long*)(param3 + 48L) = v16;
                                    }
                                }
                            }
                        }
                    }
                    result = param2 | 0x1L;
                    *(long*)(param0 + 8L) = param2 | 0x1L;
                    *(long*)(param2 + param0) = param2;
                    if(param0 != ptr1) {
                        goto loc_40224E;
                    }
                    else {
                        *(long*)(v6 + 8L) = param2;
                    }
                }
                return result;
            }
            long v19 = *(long*)(v6 + 16L) + param2;
            *(long*)(v6 + 40L) = param0;
            *(long*)(v6 + 16L) = v19;
            *(long*)(param0 + 8L) = v19 | 0x1L;
            if(param0 == ptr1) {
                *(long*)(v6 + 32L) = 0L;
                *(long*)(v6 + 8L) = 0L;
                return result;
            }
        }
        else {
            *(long*)(param1 + 8L) = v1 & 0xfffffffffffffffeL;
            *(long*)(param0 + 8L) = param2 | 0x1L;
            *(long*)(param2 + param0) = param2;
        loc_40224E:
            param3 = param2 >>> 3;
            if((unsigned long)param2 <= 0xffL) {
                int v20 = *(int*)v6;
                param1 = (long)(1 << (param3 & 0x1fL));
                result = (unsigned long)((unsigned int)param3 * 2) * 8L + v6 + 72L;
                if(!((unsigned int)param1 & v20)) {
                    *(int*)v6 = (unsigned int)param1 | v20;
                    param2 = result;
                }
                else {
                    param2 = *(long*)(result + 16L);
                }
                *(long*)(result + 16L) = param0;
                *(long*)(param2 + 24L) = param0;
                *(long*)(param0 + 16L) = param2;
                *(long*)(param0 + 24L) = result;
            }
            else {
                long v21 = param2 >>> 8;
                unsigned int v22 = (unsigned int)v21;
                if((unsigned int)v21) {
                    v22 = 31;
                    if((unsigned int)v21 <= 0xffff) {
                        if((unsigned int)v21 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v21 >>> i); --i) {
                            }
                            v21 = (unsigned long)i | ((unsigned long)(unsigned int)(v21 >>> 32L) << 32);
                        }
                        v22 = (unsigned int)((31 - (unsigned int)((unsigned int)v21 ^ 0x1f)) * 2 + ((unsigned int)(long*)(param2 >>> ((unsigned long)(38 - ((unsigned int)v21 ^ 0x1f)) & 0x3fL)) & 0x1));
                    }
                }
                int v23 = *(int*)(v6 + 4L);
                int v24 = 1 << ((unsigned long)v22 & 0x1fL);
                *(unsigned int*)(param0 + 56L) = v22;
                *(long*)(param0 + 40L) = 0L;
                param3 = (long)v24;
                *(long*)(param0 + 32L) = 0L;
                v1 = (long)v22;
                if(!(v23 & v24)) {
                    result = v1 * 8L + v6 + 600L;
                    *(int*)(v6 + 4L) = (unsigned int)param3 | v23;
                    *(long*)(v1 * 8L + v6 + 600L) = param0;
                    *(long*)(param0 + 48L) = result;
                loc_402363:
                    *(long*)(param0 + 24L) = param0;
                    *(long*)(param0 + 16L) = param0;
                }
                else {
                    long v25 = 0L;
                    param1 = *(long*)(v1 * 8L + v6 + 600L);
                    if(v22 != 31) {
                        v25 = (unsigned long)(57 - (v22 >>> 1));
                    }
                    param3 = param2 << (v25 & 0x3fL);
                    while((unsigned long)(*(long*)(param1 + 8L) & 0xfffffffffffffff8L) != param2) {
                        long v26 = param3;
                        param3 *= 2L;
                        result = 4L - (v26 >> 63);
                        v1 = *(long*)(result * 8L + param1);
                        if(v1) {
                            param1 = v1;
                        }
                        else {
                            *(long*)(result * 8L + param1) = param0;
                            *(long*)(param0 + 48L) = param1;
                            goto loc_402363;
                        }
                    }
                    result = *(long*)(param1 + 16L);
                    *(long*)(result + 24L) = param0;
                    *(long*)(param1 + 16L) = param0;
                    *(long*)(param0 + 16L) = result;
                    *(long*)(param0 + 24L) = param1;
                    *(long*)(param0 + 48L) = 0L;
                    return result;
                }
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40238E() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_403312(long param0, unsigned long param1, long param2, long param3, long param4, unsigned long param5) {
    int v0;
    long v1;
    unsigned long v2;
    long v3;
    unsigned long v4;
    unsigned long v5;
    long v6;
    long v7;
    if(param0) {
        long v8 = param0;
        param0 -= 16L;
        long v9 = v7;
        long v10 = (long)param1;
        long v11 = *(long*)(v8 - 8L);
        void* ptr0 = (void*)(*(long*)(v8 - 8L) & 0xfffffffffffffff8L);
        char v12 = (unsigned char)v11 & 0x1 ? 0: 1;
        param1 = (unsigned long)((long)ptr0 + param0);
        if(!v12) {
        loc_4034C1:
            v4 = *(unsigned long*)(param1 + 8L);
            if(!((unsigned char)v4 & 0x2)) {
                char v13 = gvar_436408 == param1;
                v2 = gvar_436400;
                if(v13) {
                    long* ptr1 = (long*)(gvar_4363F0 + (long)ptr0);
                    gvar_436408 = param0;
                    gvar_4363F0 = ptr1;
                    v6 = (long)((long)ptr1 | 0x1L);
                    *(long*)(param0 + 8L) = (long)((long)ptr1 | 0x1L);
                    if(param0 == v2) {
                        gvar_436400 = 0L;
                        gvar_4363E8 = 0L;
                    }
                    if(gvar_436410 >= (unsigned long)ptr1) {
                        goto loc_403815;
                    }
                    else {
                        sub_401DD6(&gvar_4363E0, 0L, v6, v10, v4, param5);
                        return;
                    }
                }
                else if(param1 == v2) {
                    long* ptr2 = (long*)(gvar_4363E8 + (long)ptr0);
                    gvar_436400 = param0;
                    gvar_4363E8 = ptr2;
                    *(long*)(param0 + 8L) = (long)((long)ptr2 | 0x1L);
                    *(unsigned long*)((long)ptr2 + param0) = ptr2;
                    goto loc_403815;
                }
                else {
                    v4 &= -8L;
                    long v14 = *(long*)(param1 + 24L);
                    unsigned long v15 = v4;
                    ptr0 = (void*)((long)ptr0 + v4);
                    v11 = (long)(v15 >>> 3);
                    if(v4 <= 248L) {
                        param1 = *(unsigned long*)(param1 + 16L);
                        if(v14 == param1) {
                            gvar_4363E0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E0);
                        }
                        else {
                            *(long*)(param1 + 24L) = v14;
                            *(unsigned long*)(v14 + 16L) = param1;
                        }
                    }
                    else {
                        char v16 = v14 == param1;
                        v4 = *(unsigned long*)(param1 + 48L);
                        if(!v16) {
                            v11 = *(long*)(param1 + 16L);
                            *(long*)(v11 + 24L) = v14;
                            *(long*)(v14 + 16L) = v11;
                        }
                        else {
                            v14 = *(long*)(param1 + 40L);
                            param5 = param1 + 40L;
                            if(!v14) {
                                v14 = *(long*)(param1 + 32L);
                                if(v14) {
                                    param5 = param1 + 32L;
                                    goto loc_4035D8;
                                }
                            }
                            else {
                            loc_4035D8:
                                v11 = v14;
                            loc_4035DB:
                                do {
                                    v5 = param5;
                                    v14 = v11;
                                    param5 = (unsigned long)(v11 + 40L);
                                    v11 = *(long*)(v11 + 40L);
                                    if(v11) {
                                        goto loc_4035DB;
                                    }
                                    else {
                                        v11 = *(long*)(v14 + 32L);
                                        param5 = (unsigned long)(v14 + 32L);
                                    }
                                }
                                while(v11);
                                *(long*)v5 = 0L;
                            }
                        }
                        if(v4) {
                            param5 = (unsigned long)*(int*)(param1 + 56L);
                            v5 = param5 + 74L;
                            v11 = (long)param5;
                            if(*(unsigned long*)(param5 * 8L + (long)&gvar_436638) == param1) {
                                *(long*)(v5 * 8L + (long)&gvar_4363E8) = v14;
                                if(v14) {
                                    goto loc_403629;
                                }
                                else {
                                    gvar_4363E4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E4);
                                }
                            }
                            else {
                                if(*(long*)(v4 + 32L) == param1) {
                                    *(long*)(v4 + 32L) = v14;
                                }
                                else {
                                    *(long*)(v4 + 40L) = v14;
                                }
                                if(v14) {
                                loc_403629:
                                    long v17 = *(long*)(param1 + 32L);
                                    *(unsigned long*)(v14 + 48L) = v4;
                                    if(v17) {
                                        *(long*)(v14 + 32L) = v17;
                                        *(long*)(v17 + 48L) = v14;
                                    }
                                    v11 = *(long*)(param1 + 40L);
                                    if(v11) {
                                        *(long*)(v14 + 40L) = v11;
                                        *(long*)(v11 + 48L) = v14;
                                    }
                                }
                            }
                        }
                    }
                    *(long*)(param0 + 8L) = (long)((long)ptr0 | 0x1L);
                    *(void**)((long)ptr0 + param0) = ptr0;
                    if(param0 == v2) {
                        gvar_4363E8 = ptr0;
                        goto loc_403815;
                    }
                }
            }
            else {
                *(unsigned long*)(param1 + 8L) = v4 & 0xfffffffffffffffeL;
                *(unsigned long*)(param0 + 8L) = (long*)((long)ptr0 | 0x1L);
                *(void**)((long)ptr0 + param0) = ptr0;
            }
            v11 = (long)((long)ptr0 >>> 3);
            if((unsigned long)ptr0 <= 0xffL) {
                unsigned int v18 = gvar_4363E0;
                param1 = (unsigned long)(1 << (v11 & 0x1fL));
                long v19 = (unsigned long)((unsigned int)v11 * 2) * 8L + &gvar_436428;
                if(!((unsigned int)param1 & v18)) {
                    gvar_4363E0 = (unsigned int)((unsigned int)param1 | v18);
                    v6 = v19;
                }
                else {
                    v6 = *(long*)(v19 + 16L);
                }
                *(long*)(v19 + 16L) = param0;
                *(long*)(v6 + 24L) = param0;
                *(long*)(param0 + 16L) = v6;
                *(long*)(param0 + 24L) = v19;
            }
            else {
                long* ptr3 = (long*)((long)ptr0 >>> 8);
                v6 = (long)(unsigned int)ptr3;
                if((unsigned int)ptr3) {
                    v6 = 31L;
                    if((unsigned int)ptr3 <= 0xffff) {
                        if((unsigned int)ptr3 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)ptr3 >>> i); --i) {
                            }
                            ptr3 = (unsigned long)i | ((unsigned long)(unsigned int)(long*)((long)ptr3 >>> 32L) << 32);
                        }
                        v6 = (long)((31 - (unsigned int)((unsigned int)ptr3 ^ 0x1f)) * 2 + ((unsigned int)(long*)((long)ptr0 >>> ((unsigned long)(38 - ((unsigned int)ptr3 ^ 0x1f)) & 0x3fL)) & 0x1));
                    }
                }
                unsigned int v20 = gvar_4363E4;
                int v21 = 1 << ((unsigned long)(unsigned int)v6 & 0x1fL);
                *(int*)(param0 + 56L) = (unsigned int)v6;
                *(long*)(param0 + 40L) = 0L;
                v11 = (long)v21;
                *(long*)(param0 + 32L) = 0L;
                v4 = (unsigned long)(unsigned int)v6;
                if(!(v20 & v21)) {
                    *(long*)(v4 * 8L + (long)&gvar_436638) = param0;
                    gvar_4363E4 = (unsigned int)((unsigned int)v11 | v20);
                    *(long*)(param0 + 48L) = v4 * 8L + &gvar_436638;
                loc_4037D6:
                    *(long*)(param0 + 24L) = param0;
                    *(long*)(param0 + 16L) = param0;
                }
                else {
                    long v22 = 0L;
                    param1 = *(unsigned long*)(v4 * 8L + (long)&gvar_436638);
                    if((unsigned int)v6 != 31) {
                        v22 = (unsigned long)(57 - (unsigned int)((unsigned int)v6 >>> 1));
                    }
                    v11 = (long)((long)ptr0 << (v22 & 0x3fL));
                    while((*(long*)(param1 + 8L) & 0xfffffffffffffff8L) != ptr0) {
                        long v23 = v11;
                        v11 *= 2L;
                        v6 = 4L - (v23 >> 63);
                        v4 = *(unsigned long*)(v6 * 8L + param1);
                        if(v4) {
                            param1 = v4;
                        }
                        else {
                            *(long*)(v6 * 8L + param1) = param0;
                            *(unsigned long*)(param0 + 48L) = param1;
                            goto loc_4037D6;
                        }
                    }
                    long v24 = *(long*)(param1 + 16L);
                    *(long*)(v24 + 24L) = param0;
                    *(long*)(param1 + 16L) = param0;
                    *(long*)(param0 + 16L) = v24;
                    *(unsigned long*)(param0 + 24L) = param1;
                    *(long*)(param0 + 48L) = 0L;
                }
                --gvar_436418;
                if(!gvar_436418) {
                    sub_401B19(&gvar_4363E0);
                    return;
                }
            }
            goto loc_403815;
        }
        else {
            v4 = *(unsigned long*)(v8 - 16L);
            param0 -= v4;
            v11 = (unsigned long)((unsigned char)v11 & 0x3) | ((unsigned long)((v11 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v11) {
                ptr0 = (void*)((long)ptr0 + v4);
                if(gvar_436400 == param0) {
                    long v25 = *(long*)(param1 + 8L);
                    if(((unsigned int)*(long*)(param1 + 8L) & 0x3) == 3) {
                        gvar_4363E8 = ptr0;
                        *(long*)(param1 + 8L) = v25 & 0xfffffffffffffffeL;
                        *(long*)(param0 + 8L) = (long)((long)ptr0 | 0x1L);
                        *(void**)param1 = ptr0;
                        goto loc_403815;
                    }
                    else {
                        goto loc_4034C1;
                    }
                }
                else {
                    unsigned long v26 = v4;
                    v3 = *(long*)(param0 + 24L);
                    v11 = (long)(v26 >>> 3);
                }
                if(v4 <= 0xffL) {
                    unsigned long v27 = *(unsigned long*)(param0 + 16L);
                    char v28 = v3 == v27;
                    if(v28) {
                        gvar_4363E0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E0);
                    }
                    else {
                        *(long*)(v27 + 24L) = v3;
                        *(unsigned long*)(v3 + 16L) = v27;
                    }
                }
                else {
                    char v29 = v3 == param0;
                    long v30 = *(long*)(param0 + 48L);
                    if(!v29) {
                        v11 = *(long*)(param0 + 16L);
                        *(long*)(v11 + 24L) = v3;
                        *(long*)(v3 + 16L) = v11;
                    }
                    else {
                        v3 = *(long*)(param0 + 40L);
                        param5 = (unsigned long)(param0 + 40L);
                        if(!v3) {
                            v3 = *(long*)(param0 + 32L);
                            if(v3) {
                                param5 = (unsigned long)(param0 + 32L);
                                goto loc_4033EA;
                            }
                        }
                        else {
                        loc_4033EA:
                            v11 = v3;
                        loc_4033ED:
                            do {
                                v2 = param5;
                                v3 = v11;
                                param5 = (unsigned long)(v11 + 40L);
                                v11 = *(long*)(v11 + 40L);
                                if(v11) {
                                    goto loc_4033ED;
                                }
                                else {
                                    v11 = *(long*)(v3 + 32L);
                                    param5 = (unsigned long)(v3 + 32L);
                                }
                            }
                            while(v11);
                            *(long*)v2 = 0L;
                        }
                    }
                    if(v30) {
                        param5 = (unsigned long)*(int*)(param0 + 56L);
                        char v31 = *(unsigned long*)(param5 * 8L + (long)&gvar_436638) == param0;
                        v2 = param5 + 74L;
                        v11 = (long)param5;
                        if(v31) {
                            char v32 = v3 ? 0: 1;
                            *(long*)(v2 * 8L + (long)&gvar_4363E8) = v3;
                            if(!v32) {
                                goto loc_40343F;
                            }
                            else {
                                gvar_4363E4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E4);
                            }
                        }
                        else {
                            if(*(long*)(v30 + 32L) == param0) {
                                *(long*)(v30 + 32L) = v3;
                            }
                            else {
                                *(long*)(v30 + 40L) = v3;
                            }
                            if(v3) {
                            loc_40343F:
                                long v33 = *(long*)(param0 + 32L);
                                *(long*)(v3 + 48L) = v30;
                                if(v33) {
                                    *(long*)(v3 + 32L) = v33;
                                    *(long*)(v33 + 48L) = v3;
                                }
                                v11 = *(long*)(param0 + 40L);
                                if(v11) {
                                    *(long*)(v3 + 40L) = v11;
                                    *(long*)(v11 + 48L) = v3;
                                }
                            }
                        }
                    }
                }
                goto loc_4034C1;
            }
            else {
                v1 = (long)((long*)((long)ptr0 + v4) + 4);
                long v34 = /*BAD_CALL!*/ sub_403D56(param0, v1, v8, v11);
                v0 = (unsigned int)v34;
            }
        }
        if(!v0) {
            gvar_436738 -= v1;
        }
    }
loc_403815:
}

long sub_403817(unsigned long param0, unsigned long param1, unsigned long param2, long $rcx$2) {
    long v0;
    long v1 = v0;
    unsigned long $rdx = 0L;
    long v2 = $rcx$2;
    if(param0) {
        $rdx = param1 * param0;
        if(((param1 | param0) & 0xffffffffffff0000L)) {
            param2 = $rdx % param0;
            $rdx = $rdx / param0 == param1 ? $rdx: 18446744073709551615L;
        }
    }
    long $rdi$1 = sub_40238E((long)$rdx, (long)param1, (long)param2, $rcx$2);
    if($rdi$1 && (*(char*)($rdi$1 - 8L) & 0x3)) {
        sub_404562($rdi$1, 0L, $rdx, $rcx$2);
    }
    return $rdi$1;
}

unsigned long* sub_403873(long param0, unsigned long* param1, long param2, long param3, long* param4) {
    unsigned long* ptr0;
    unsigned long* ptr1;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8 = v3;
    long v9 = v4;
    long v10 = v5;
    unsigned long* result = param1;
    long v11 = v6;
    long v12 = param0;
    param0 = param2;
    long v13 = v7;
    long* ptr2 = param4;
    param1 = *(param1 + 1);
    long* ptr3 = (long*)((long)param1 & 0xfffffffffffffff8L);
    if(((unsigned char)param1 & 0x3)) {
        long* ptr4 = (long*)((long)ptr3 + (long)result);
        if((long*)(param0 + (long)result) <= ptr4) {
            v2 = (long)((long)ptr3 - param0);
            if((unsigned long)v2 > 31L) {
                v1 = param0 + (long)result;
                *(result + 1) = (long*)((long)(long*)((unsigned long)((unsigned int)param1 & 0x1) | param0) | 0x2L);
                *(long*)(param0 + (long)result + 8L) = v2 | 0x3L;
                *(ptr4 + 1) = *(ptr4 + 1) | 0x1L;
                sub_401F12(v12, v1, v2, param3);
            }
            return result;
        }
        else if(*(long*)(v12 + 40L) == ptr4) {
            ptr4 = (long*)(*(long*)(v12 + 16L) + (long)ptr3);
            if((unsigned long)(long*)(*(long*)(v12 + 16L) + (long)ptr3) <= (unsigned long)param0) {
            loc_4038A9:
                result = NULL;
            }
            else {
                ptr4 = (long*)((long)ptr4 - param0);
                long* ptr5 = (long*)(param0 + (long)result);
                *(result + 1) = (long*)((long)(long*)((long)(unsigned long*)((unsigned int)param1 & 0x1) | param0) | 0x2L);
                *(unsigned long*)(ptr5 + 1) = (long*)((long)ptr4 | 0x1L);
                *(unsigned long*)(v12 + 40L) = ptr5;
                *(unsigned long*)(v12 + 16L) = ptr4;
            }
            return result;
        }
        else if(*(long*)(v12 + 32L) != ptr4) {
            unsigned long v14 = *(unsigned long*)(ptr4 + 1);
            if(!((unsigned char)v14 & 0x2)) {
                v14 &= -8L;
                param4 = (long*)((long)ptr3 + v14);
                if((unsigned long)param0 <= (unsigned long)param4) {
                    unsigned long v15 = *(unsigned long*)(ptr4 + 3);
                    long v16 = (long)((long)param4 - param0);
                    param3 = (long)(v14 >>> 3);
                    if(v14 <= 248L) {
                        unsigned long v17 = *(unsigned long*)(ptr4 + 2);
                        if(v15 == v17) {
                            *(int*)v12 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v12;
                        }
                        else {
                            *(unsigned long*)(v17 + 24L) = v15;
                            *(unsigned long*)(v15 + 16L) = v17;
                        }
                    }
                    else {
                        v14 = *(unsigned long*)(ptr4 + 6);
                        if(v15 != ptr4) {
                            long v18 = *(ptr4 + 2);
                            *(unsigned long*)(v18 + 24L) = v15;
                            *(long*)(v15 + 16L) = v18;
                        }
                        else {
                            v15 = *(unsigned long*)(ptr4 + 5);
                            param3 = (long)(ptr4 + 5);
                            if(!v15) {
                                v15 = *(unsigned long*)(ptr4 + 4);
                                if(v15) {
                                    param3 = (long)(ptr4 + 4);
                                    goto loc_403B09;
                                }
                            }
                            else {
                            loc_403B09:
                                unsigned long v19 = v15;
                            loc_403B0C:
                                do {
                                    v0 = param3;
                                    v15 = v19;
                                    param3 = (long)(v19 + 40L);
                                    v19 = *(unsigned long*)(v19 + 40L);
                                    if(v19) {
                                        goto loc_403B0C;
                                    }
                                    else {
                                        v19 = *(unsigned long*)(v15 + 32L);
                                        param3 = (long)(v15 + 32L);
                                    }
                                }
                                while(v19);
                                *(long*)v0 = 0L;
                            }
                        }
                        if(v14) {
                            param3 = (long)*(int*)(ptr4 + 7);
                            long* ptr6 = (long*)((long)*(int*)(ptr4 + 7) * 8L + v12);
                            if(*(ptr6 + 75) == ptr4) {
                                *(unsigned long*)(ptr6 + 75) = v15;
                                if(v15) {
                                    goto loc_403B58;
                                }
                                else {
                                    *(int*)(v12 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v12 + 4L);
                                }
                            }
                            else {
                                if(*(long*)(v14 + 32L) == ptr4) {
                                    *(unsigned long*)(v14 + 32L) = v15;
                                }
                                else {
                                    *(unsigned long*)(v14 + 40L) = v15;
                                }
                                if(v15) {
                                loc_403B58:
                                    long v20 = *(ptr4 + 4);
                                    *(unsigned long*)(v15 + 48L) = v14;
                                    if(v20) {
                                        *(long*)(v15 + 32L) = v20;
                                        *(unsigned long*)(v20 + 48L) = v15;
                                    }
                                    long v21 = *(ptr4 + 5);
                                    if(v21) {
                                        *(long*)(v15 + 40L) = v21;
                                        *(unsigned long*)(v21 + 48L) = v15;
                                    }
                                }
                            }
                        }
                    }
                    long* ptr7 = (long*)((long)param4 + (long)result);
                    unsigned long* ptr8 = (unsigned long*)((unsigned int)param1 & 0x1);
                    if((unsigned long)v16 <= 31L) {
                        *(result + 1) = (long*)((long)(long*)((long)ptr8 | (long)param4) | 0x2L);
                        *(ptr7 + 1) = *(ptr7 + 1) | 0x1L;
                    }
                    else {
                        v1 = param0 + (long)result;
                        *(result + 1) = (long*)((long)(long*)((long)ptr8 | param0) | 0x2L);
                        *(unsigned long*)(v1 + 8L) = (long*)(v16 | 0x3L);
                        *(ptr7 + 1) = *(ptr7 + 1) | 0x1L;
                        v2 = v16;
                        sub_401F12(v12, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_4038A9;
        }
        else {
            param3 = *(long*)(v12 + 8L) + (long)ptr3;
            if((unsigned long)param3 < (unsigned long)param0) {
                goto loc_4038A9;
            }
            else {
                param1 = (unsigned long*)((unsigned int)param1 & 0x1);
                ptr1 = (unsigned long*)(param3 + (long)result);
                param4 = (long*)(param3 - param0);
                ptr0 = param1;
            }
        }
        if((unsigned long)param4 > 31L) {
            param3 = param0 + (long)result;
            *(result + 1) = (long*)((long)(long*)((long)ptr0 | param0) | 0x2L);
            *(unsigned long*)(param3 + 8L) = (long*)((long)param4 | 0x1L);
            *ptr1 = param4;
            *(long*)(ptr1 + 1) = *(long*)(ptr1 + 1) & 0xfffffffffffffffeL;
            *(unsigned long*)(v12 + 8L) = param4;
            *(long*)(v12 + 32L) = param3;
        }
        else {
            *(long*)(result + 1) = (long)((long)(long*)(param3 | (long)param1) | 0x2L);
            *(long*)(ptr1 + 1) = *(long*)(ptr1 + 1) | 0x1L;
            *(long*)(v12 + 8L) = 0L;
            *(long*)(v12 + 32L) = 0L;
            return result;
        }
    }
    else if((unsigned long)param0 <= 0xffL) {
        goto loc_4038A9;
    }
    else {
        unsigned long v22 = gvar_4367B0;
        if((unsigned long)(param0 + 8L) > (unsigned long)ptr3 || (unsigned long)(long*)((long)ptr3 - param0) > (unsigned long)(unsigned long*)(v22 * 2L)) {
            unsigned long v23 = *result;
            long v24 = (v22 + param0 + 62L) & (0L - v22);
            unsigned long* ptr9 = (unsigned long*)((long*)((long)ptr3 + v23) + 4);
            long v25 = sub_404008();
            if(v25 == -1L) {
                goto loc_4038A9;
            }
            else {
                result = (unsigned long*)(v25 + v23);
                long v26 = v24 - v23;
                char v27 = *(unsigned long*)(v12 + 24L) > (unsigned long)v25;
                *(long*)(result + 1) = v26 - 32L;
                *((long*)(v26 + (long)result) - 3) = 11L;
                *((long*)(v26 + (long)result) - 2) = 0L;
                if(v27) {
                    *(long*)(v12 + 24L) = v25;
                }
                long* ptr10 = (long*)(*(long*)(v12 + 856L) + v24 - (long)ptr9);
                char v28 = *(long*)(v12 + 864L) == ptr10;
                char v29 = *(unsigned long*)(v12 + 864L) > (unsigned long)ptr10;
                *(unsigned long*)(v12 + 856L) = ptr10;
                if(!v29 && !v28) {
                    *(unsigned long*)(v12 + 864L) = ptr10;
                }
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_403C02(long param0, unsigned long param1, long param2, long param3, long param4, unsigned long param5) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    if(!param0) {
        result = sub_40238E((long)param1, v0, param2, param3);
    }
    else if(param1 > 18446744073709551487L) {
        sub_401556();
        goto loc_403C43;
    }
    else if(!param1) {
        sub_403312(param0, 0L, param2, param3, param4, param5);
    loc_403C43:
        result = 0L;
    }
    else {
        unsigned long* ptr0 = sub_403873(&gvar_4363E0, (unsigned long*)(param0 - 16L), param1 > 14L ? (param1 + 31L) & 0xfffffffffffffff0L: 32L, 1L, (long*)param4);
        if(ptr0) {
            result = (long)(ptr0 + 2);
        }
        else {
            result = sub_40238E((long)param1, (long)param1, param2, param3);
            if(result) {
                long v5 = *(long*)(param0 - 8L);
                sub_404420(param3, (unsigned long)((v5 & 0xfffffffffffffff8L) - 16L) <= param1 ? (unsigned long)((v5 & 0xfffffffffffffff8L) - 16L): param1);
                sub_403312(param0, (unsigned long)param0, param2, param3, param4, param5);
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_403D42(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1 = v0;
    long v2 = v0;
    return sub_403D6A(param0, param1, param2, param3, param4, param5);
}

long sub_403D6A(long param0) {
    return sub_403D90(0L, param0, 3L, (unsigned long)((unsigned int)gvar_436360 | gvar_436368 | 0x2), 0xffffffffL, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_404008() {
    return sub_401566();
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_404151(long param0, long param1, long param2) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4 = v0;
    long v5 = param2;
    long v6 = v2;
    long v7 = v3;
    long v8 = v1;
    long v9 = gvar_4367E0;
    if(!v9) {
        gvar_4367E0 = 4417512L;
        v9 = 4417512L;
    }
    if(*(int*)v9 == -1) {
        long v10 = sub_401AC6();
        if(v10) {
            *(long*)(v10 + 8L) = v9;
            gvar_4367E0 = v10;
            v9 = v10;
            goto loc_4041B8;
        }
        else {
            result = sub_401556();
        }
    }
    else {
    loc_4041B8:
        param2 = (unsigned long)*(int*)v9;
        unsigned int v11 = (unsigned int)~*(int*)v9;
        if(~*(int*)v9 != 0) {
            unsigned int i;
            for(i = 31; !(v11 >>> i); --i) {
            }
            v11 = i;
        }
        *(int*)v9 = (~(1 << (v11 % 32)) & (unsigned int)param2) | (1 << (v11 % 32));
        long v12 = (unsigned long)v11 * 24L + v9;
        result = 0L;
        *(long*)(v12 + 16L) = param0;
        *(long*)(v12 + 24L) = param1;
        *(long*)(v12 + 32L) = v5;
    }
    return result;
}

long sub_40436D(long param0, int* param1, long param2, long param3) {
    return sub_4043AF(param0, param1, param2, param3);
}

long sub_4043AF(long param0, int* param1, long param2, long param3) {
    long v0;
    long v1;
    int v2;
    long v3;
    long v4;
    long result = 0L;
    long v5 = v3;
    long v6 = param3;
    long v7 = param2;
    do {
        v4 = (unsigned long)(unsigned int)result;
        v2 = (unsigned int)result;
        result = (unsigned long)((unsigned int)result + 1);
        v1 = (unsigned long)*(short*)(v4 * 2L + param0);
        v0 = (unsigned long)(*(short*)(v4 * 2L + param0) & 0xfc00) | ((unsigned long)(((unsigned long)(unsigned int)v1 >>> 16L) & 0xffffffffffffL) << 16);
    }
    while((*(short*)(v4 * 2L + param0) & 0xfc00) == 0xdc00);
    if((unsigned short)v0 != 0xd800) {
        *param1 = (unsigned int)v1;
    }
    else {
        long v8 = (unsigned long)*(short*)(result * 2L + param0);
        if((*(short*)(result * 2L + param0) & 0xfc00) != 0xdc00) {
            *param1 = 0xfffd;
            result = 0xffffffffL;
        }
        else {
            *param1 = (unsigned int)v1 * 0x400 + (unsigned int)v8 - 56613888;
            result = (unsigned long)(v2 + 2);
        }
    }
    return result;
}

void sub_404420(long param0, unsigned long param1) {
    long v0;
    long* ptr0 = &v0;
    v0 = param0;
    long v1 = 32L;
    char v2 = param1 == 32L;
    char v3 = (long)param1 < 32L;
    char v4 = __parity__((unsigned char)param1 - 32);
    char v5 = param1 < 32L;
    char v6 = (((param1 - 32L) ^ param1) & (param1 ^ 0x20L)) < 0L;
    char v7 = (((param1 - 32L) ^ (param1 ^ 0x20L)) >>> 4L) & 0x1L;
    unsigned long v8 = v5 ? param1: 32L;
    jump *(long*)(v8 * 8L + 4415640L);
}

void sub_404562(long $rdi$1, int $esi, unsigned long $rdx, long $rcx$2) {
    // Decompilation error
}

long sub_4046FA(int param0, unsigned long param1) {
    int v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_436360;
            v0 = (unsigned long)((long)v1 & param1) == param1 ? 64: 128;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long v2 = gvar_436360;
            v0 = (unsigned long)((long)(unsigned int)param1 & v2) == v2 ? 4: 8;
        }
    }
    else {
        v0 = 32;
        if((param0 & 0x5) != 5) {
            v0 = 16;
            if(!((unsigned char)param0 & 0x4)) {
                v0 = (param0 & 0x1) + 1;
            }
        }
    }
    return (unsigned long)(((v1 | param0) & 0xdd000000) | v0);
}
