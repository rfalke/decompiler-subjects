
long start() {
    gvar_440668 = 8;
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
    long* ptr2 = (long*)&gvar_406018;
    long v5 = 0x4060b8L;
    long v6 = 0x4060b8L;
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
    /*NO_RETURN*/ sub_4015D7();
}

long sub_4012F0(long param0, long param1, long param2) {
    char* ptr0;
    long v0;
    char v1;
    long v2;
    long v3;
    long v4;
    char v5;
    long v6;
    long v7;
    char v8;
    char v9;
    long v10;
    long v11;
    long* ptr1;
    long v12;
    long* ptr2;
    long v13;
    char v14;
    unsigned long* ptr3;
    long v15;
    long v16;
    long v17;
    long* ptr4 = &v2;
    long v18 = &gvar_440000;
    char* ptr5 = (char*)&gvar_4058F0;
    (long v17, long v6) = rdtsc();
    *(int*)&gvar_440000 = (unsigned int)v17;
    int* ptr6 = (int*)0x440004;
    int v19 = (unsigned int)v17;
    int v20 = (unsigned int)v6;
    int v21 = 0;
    long v22 = (unsigned long)v19;
    *(int*)((char*)&gvar_440000 + 4) = v20;
    unsigned char* ptr7 = (unsigned char*)&gvar_440008;
    long v23 = v12;
    long v24 = 0L;
    long v25 = 22L;
    long v26 = 0xffffffff80000007L;
    long v27 = 0xffffffff80000001L;
    long v28 = 7L;
    long v29 = 2L;
    long* ptr8 = &v3;
    v3 = 1L;
    unsigned char* ptr9 = (unsigned char*)&gvar_440008;
    long v30 = 0L;
    char v31 = 1;
    char v32 = 0;
    char v33 = 1;
    char v34 = 0;
    char v35 = 0;
    do {
        long v36 = 0L;
        char v37 = 1;
        char v38 = 0;
        char v39 = 1;
        char v40 = 0;
        char v41 = 0;
        (long v11, long v10, long v13, long v16) = cpuid(v30, 0L);
        *(int*)ptr7 = (unsigned int)v11;
        int* ptr10 = (int*)(ptr7 + 4L);
        int v42 = (unsigned int)v11;
        int v43 = (unsigned int)v10;
        int v44 = 0;
        long v45 = (unsigned long)v42;
        *ptr10 = v43;
        int* ptr11 = ptr10 + 1;
        int v46 = v43;
        int v47 = (unsigned int)v13;
        int v48 = 0;
        long v49 = (unsigned long)v46;
        *ptr11 = v47;
        int* ptr12 = ptr11 + 1;
        int v50 = v47;
        int v51 = (unsigned int)v16;
        int v52 = 0;
        long v53 = (unsigned long)v50;
        *ptr12 = v51;
        ptr7 = (unsigned char*)(ptr12 + 1);
    loc_401328:
        while(1) {
            v30 = *ptr8;
            ++ptr8;
            char v54 = (unsigned int)v30 ? 0: 1;
            char v55 = (unsigned int)v30 < 0;
            char v56 = __parity__((unsigned char)v30);
            char v57 = 0;
            char v58 = 0;
            if(v54) {
                long v59 = *ptr8;
                ++ptr8;
                long v60 = &gvar_404F07;
                long v61 = (unsigned long)(unsigned char)v49 | ((unsigned long)17 << 8) | ((unsigned long)((v49 >>> 16L) & 0xffffffffffffL) << 16);
                do {
                    char v62 = 1;
                    char v63 = 0;
                    char v64 = 1;
                    char v65 = 0;
                    char v66 = 0;
                    unsigned long v67 = (unsigned long)*ptr5;
                    char* ptr13 = ptr5 + 1L;
                    v61 = (unsigned long)(unsigned char)v67 | ((unsigned long)((v61 >>> 8L) & 0xffffffffffffffL) << 8);
                    v67 = (unsigned long)*ptr13 | ((unsigned long)((v67 >>> 8L) & 0xffffffffffffffL) << 8);
                    ptr5 = ptr13 + 1L;
                    unsigned long v68 = v67;
                    v30 = (long)(v67 + &gvar_404F07);
                    char v69 = v30 ? 0: 1;
                    char v70 = v30 < 0L;
                    char v71 = __parity__((unsigned char)v30);
                    char v72 = (((v68 ^ &gvar_404F07) ^ v30) >>> 4L) & 0x1L;
                    char v73 = v68 >= 0xffffffffffbfb0f9L;
                    char v74 = ((v30 ^ v68) & ~(v68 ^ &gvar_404F07)) < 0L;
                    do {
                        *(long*)ptr7 = v30;
                        ptr7 += 8L;
                        char v75 = (unsigned char)v61;
                        v61 = (unsigned long)((unsigned char)v61 + 0xff) | ((unsigned long)((v61 >>> 8L) & 0xffffffffffffffL) << 8);
                        v1 = (unsigned char)v61 ? 0: 1;
                        char v76 = (v61 >>> 7L) & 0x1L;
                        char v77 = __parity__((unsigned char)v61);
                        char v78 = ((~(unsigned char)v61 ^ ~v75) >>> 4) & 0x1;
                        char v79 = (((unsigned char)v61 ^ v75) & v75) < 0;
                    }
                    while(!v1);
                    char v80 = (unsigned char)(v61 >>> 8L);
                    v61 = (unsigned long)(unsigned char)v61 | ((unsigned long)((unsigned char)(v61 >>> 8L) + 0xff) << 8) | ((unsigned long)((v61 >>> 16L) & 0xffffffffffffL) << 16);
                    v5 = (unsigned char)(v61 >>> 8L) ? 0: 1;
                    char v81 = (v61 >>> 15L) & 0x1L;
                    char v82 = __parity__((unsigned char)(v61 >>> 8L));
                    char v83 = ((~(unsigned char)(v61 >>> 8L) ^ ~v80) >>> 4) & 0x1;
                    char v84 = (((unsigned char)(v61 >>> 8L) ^ v80) & v80) < 0;
                }
                while(!v5);
                char* ptr14 = ptr5;
                long* ptr15 = (long*)(ptr5 + 6L);
                char v85 = ptr15 ? 0: 1;
                char v86 = (long)ptr15 < 0L;
                char v87 = __parity__((unsigned char)ptr15);
                char v88 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr14 ^ 0x6L) ^ (long)ptr15) >>> 4L) & 0x1L);
                char v89 = (unsigned long)ptr14 >= 18446744073709551610L;
                char v90 = (long)(long*)((long)(long*)((long)ptr15 ^ (long)ptr14) & (long*)~(long)(long*)((long)ptr14 ^ 0x6L)) < 0L;
                unsigned long* ptr16 = ptr3;
                *(unsigned long**)ptr7 = ptr3;
                long* ptr17 = (long*)(ptr7 + 8L);
                --ptr8;
                *ptr8 = &loc_401362;
                long v91 = /*BAD_CALL!*/ sub_40161F((long)ptr17, (long)ptr15);
                --ptr8;
                *ptr8 = &loc_401367;
                long v92 = /*BAD_CALL!*/ sub_40189D((long)ptr2, v4, v0, v15);
                long v93 = -1L;
                char v94 = 0;
                char v95 = 1;
                char v96 = 1;
                char v97 = 0;
                char v98 = 0;
                *ptr2 = -1L;
                long* ptr18 = ptr2 + 1;
                *ptr18 = -1L;
                long* ptr19 = ptr18 + 1;
                long v99 = &gvar_40517E;
                *ptr19 = &gvar_40517E;
                long* ptr20 = ptr19 + 1;
                --ptr8;
                *ptr8 = 32L;
                long v100 = *ptr8;
                long v101 = &gvar_404F84;
                char v102 = gvar_440023 & 0x10 ? 0: 1;
                char v103 = (char)(gvar_440023 & 0x10) < 0;
                char v104 = __parity__(gvar_440023 & 0x10);
                char v105 = 0;
                char v106 = 0;
                *ptr8 = &loc_40138A;
                long v107 = /*BAD_CALL!*/ sub_40186F((long)ptr20, v4, &gvar_404F84, v100, v7);
                --ptr8;
                *ptr8 = 32L;
                long v108 = *ptr8;
                long v109 = &gvar_4050CC;
                char v110 = gvar_44003C & 0x20 ? 0: 1;
                char v111 = (char)(gvar_44003C & 0x20) < 0;
                char v112 = __parity__(gvar_44003C & 0x20);
                char v113 = 0;
                char v114 = 0;
                *ptr8 = &loc_40139E;
                long v115 = /*BAD_CALL!*/ sub_40186F((long)ptr2, v4, &gvar_4050CC, v108, v7);
                long v116 = *ptr1;
                *ptr2 = *ptr1;
                long* ptr21 = ptr2 + 1;
                long v117 = &gvar_4051E0;
                *ptr21 = &gvar_4051E0;
                char* ptr22 = (char*)(ptr21 + 1);
                --ptr8;
                *ptr8 = v59;
                --ptr8;
                *ptr8 = v4;
                char v118 = *ptr22 & 0x8 ? 0: 1;
                char v119 = (*ptr22 & 0x8) < 0;
                char v120 = __parity__(*ptr22 & 0x8);
                char v121 = 0;
                char v122 = 0;
                if(v118) {
                    char v123 = *ptr22 & 0x20 ? 0: 1;
                    char v124 = (*ptr22 & 0x20) < 0;
                    char v125 = __parity__(*ptr22 & 0x20);
                    char v126 = 0;
                    char v127 = 0;
                    if(v123) {
                        char v128 = *ptr22 & 0x4 ? 0: 1;
                        char v129 = (*ptr22 & 0x4) < 0;
                        char v130 = __parity__(*ptr22 & 0x4);
                        char v131 = 0;
                        char v132 = 0;
                        if(v128) {
                            char v133 = *ptr3 ? 0: 1;
                            char v134 = *ptr3 < 0L;
                            char v135 = __parity__((unsigned char)*ptr3);
                            char v136 = *ptr3 < 0L;
                            char v137 = 0;
                            char v138 = 0;
                            --ptr8;
                            if(!v133) {
                                *ptr8 = 0L;
                                --ptr8;
                                *ptr8 = 1L;
                                ptr0 = (char*)&gvar_4059B6;
                            }
                            else {
                                *ptr8 = 42L;
                                --ptr8;
                                *ptr8 = 16L;
                                ptr0 = (char*)&gvar_4059E1;
                            }
                        }
                        else {
                            --ptr8;
                            *ptr8 = 34L;
                            --ptr8;
                            *ptr8 = 4L;
                            ptr0 = (char*)&gvar_405A0D;
                        }
                    }
                    else {
                        --ptr8;
                        *ptr8 = 48L;
                        --ptr8;
                        *ptr8 = 32L;
                        ptr0 = (char*)&gvar_405989;
                    }
                }
                else {
                    --ptr8;
                    *ptr8 = 69L;
                    --ptr8;
                    *ptr8 = 8L;
                    ptr0 = (char*)&gvar_405A52;
                }
                long v139 = &gvar_404DF0;
                long v140 = *ptr8;
                ++ptr8;
                *(long*)ptr22 = v140;
                long* ptr23 = (long*)(ptr22 + 8L);
                long v141 = *ptr8;
                unsigned long v142 = *ptr8;
                long v143 = v141 + &gvar_404DF0;
                char v144 = v143 ? 0: 1;
                char v145 = v143 < 0L;
                char v146 = __parity__((unsigned char)v143);
                char v147 = (((v142 ^ &gvar_404DF0) ^ v143) >>> 4L) & 0x1L;
                char v148 = v142 >= 0xffffffffffbfb210L;
                char v149 = ((v143 ^ v142) & ~(v142 ^ &gvar_404DF0)) < 0L;
                *ptr23 = v143;
                long* ptr24 = ptr23 + 1;
                *ptr8 = ptr23 + 1;
                unsigned long* ptr25 = (unsigned long*)&gvar_440698;
                long v150 = -1L;
                char v151 = 0;
                char v152 = 1;
                char v153 = 1;
                char v154 = 0;
                char v155 = 0;
                long v156 = 4458400L;
                while(1) {
                    char v157 = ptr25 == 4458400L;
                    char v158 = (long)ptr25 < 4458400L;
                    char v159 = __parity__((unsigned char)ptr25 - 160);
                    char v160 = (unsigned long)ptr25 < 4458400L;
                    char v161 = (long)(long*)((long)(long*)((long)(long*)(ptr25 - 557300) ^ (long)ptr25) & (long)(long*)((long)ptr25 ^ 0x4407a0L)) < 0L;
                    char v162 = (long*)((long)(long*)((long)(long*)((long)(long*)(ptr25 - 557300) ^ (long)(long*)((long)ptr25 ^ 0x4407a0L)) >>> 4L) & 0x1L);
                    if(!v160) {
                    loc_40144E:
                        long* ptr26 = *ptr8;
                        ++ptr8;
                        long v163 = *ptr8;
                        ++ptr8;
                        ++ptr8;
                        long* ptr27 = ptr8;
                        ptr8 -= 4;
                        --ptr8;
                        *ptr8 = &loc_401463;
                        /*BAD_CALL!*/ gvar_406088(0x443c40L, param1, param2, -1L);
                        long* ptr28 = ptr8;
                        ptr8 += 4;
                        --ptr8;
                        *ptr8 = 1L;
                        gvar_44200C = *ptr8;
                        gvar_442004 = gvar_440798;
                        gvar_442018 = &gvar_441000;
                        gvar_442020 = 0x1000;
                        char v164 = gvar_440668 & 0x2 ? 0: 1;
                        gvar_442030 = v164 ? &sub_4021BE: &gvar_402250;
                        gvar_442038 = &gvar_442000;
                        *ptr26 = &sub_403FED;
                        long* ptr29 = ptr26 + 1;
                        *ptr8 = 4199614L;
                        /*NO_RETURN*/ sub_4015CB((long)ptr29, v163);
                    }
                    v139 = 0L;
                    param1 = 0L;
                    char v165 = 1;
                    char v166 = 0;
                    char v167 = 1;
                    char v168 = 0;
                    char v169 = 0;
                    do {
                        v143 = (unsigned long)*ptr0 | ((unsigned long)((v143 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        long v170 = v143;
                        long v171 = (unsigned long)((unsigned int)v170 & 0x7f);
                        char v172 = (unsigned int)v170 & 0x7f ? 0: 1;
                        char v173 = (v171 >>> 31L) & 0x1L;
                        char v174 = __parity__((unsigned char)v171);
                        char v175 = 0;
                        char v176 = 0;
                        long v177 = v171;
                        param2 = v171 << (v139 & 0x3fL);
                        char v178 = (unsigned long)(v139 & 0x3fL) < 64L && (v139 & 0x3fL) ? v177 << ((v139 & 0x3fL) - 1L) < 0L: 0;
                        char v179 = (v139 & 0x3fL) == 1L ? v177 < 0L ^ ((v177 >>> 62L) & 0x1L): 0;
                        char v180 = v139 & 0x3fL ? param2 ? 0: 1: v172;
                        char v181 = v139 & 0x3fL ? param2 < 0L: v173;
                        char v182 = v139 & 0x3fL ? __parity__((unsigned char)param2): v174;
                        v139 = (unsigned long)((unsigned int)v139 + 7);
                        param1 |= param2;
                        char v183 = (unsigned char)v143 ? 0: 1;
                        v14 = (unsigned char)v143 < 0;
                        char v184 = __parity__((unsigned char)v143);
                        char v185 = 0;
                        char v186 = 0;
                    }
                    while(v14);
                    char v187 = (unsigned char)v143 & 0x40 ? 0: 1;
                    char v188 = ((unsigned char)v143 & 0x40) < 0;
                    char v189 = __parity__((unsigned char)v143 & 0x40);
                    char v190 = 0;
                    char v191 = 0;
                    if(!v187) {
                        long v192 = -1L;
                        long v193 = -1L;
                        long v194 = -1L << (v139 & 0x3fL);
                        char v195 = (unsigned long)(v139 & 0x3fL) < 64L && (v139 & 0x3fL) ? -1L << ((v139 & 0x3fL) - 1L) < 0L: 0;
                        char v196 = 0;
                        char v197 = v139 & 0x3fL ? v194 ? 0: 1: 0;
                        char v198 = v139 & 0x3fL ? v194 < 0L: v188;
                        char v199 = v139 & 0x3fL ? __parity__((unsigned char)v194): v189;
                        param1 |= v194;
                        char v200 = param1 ? 0: 1;
                        char v201 = param1 < 0L;
                        char v202 = __parity__((unsigned char)param1);
                        char v203 = 0;
                        char v204 = 0;
                    }
                    long v205 = param1;
                    char v206 = *ptr25 ? 0: 1;
                    char v207 = *ptr25 < 0L;
                    char v208 = __parity__((unsigned char)*ptr25);
                    char v209 = *ptr25 < 0L;
                    char v210 = 0;
                    char v211 = 0;
                    v143 = v206 ? v205: *ptr25;
                    *ptr25 = v206 ? v205: *ptr25;
                    ++ptr25;
                }
                goto loc_40144E;
            }
            else {
                v8 = (unsigned char)v30 == *(char*)&gvar_440008;
                char v212 = (unsigned char)v30 < *(char*)&gvar_440008;
                char v213 = __parity__((unsigned char)v30 - *(char*)&gvar_440008);
                v9 = (unsigned char)v30 < *(char*)&gvar_440008;
                char v214 = ((((unsigned char)v30 - *(char*)&gvar_440008) ^ (unsigned char)v30) & ((unsigned char)v30 ^ *(char*)&gvar_440008)) < 0;
                char v215 = ((((unsigned char)v30 - *(char*)&gvar_440008) ^ ((unsigned char)v30 ^ *(char*)&gvar_440008)) >>> 4) & 0x1;
            }
        }
    }
    while(v9 || v8);
    unsigned char* ptr30 = ptr7;
    ptr7 += 16L;
    char v216 = ptr7 ? 0: 1;
    char v217 = (long)ptr7 < 0L;
    char v218 = __parity__((unsigned char)ptr7);
    char v219 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr30 ^ 0x10L) ^ (long)ptr7) >>> 4L) & 0x1L);
    char v220 = (unsigned long)ptr30 >= 18446744073709551600L;
    char v221 = (long)(long*)((long)(long*)((long)ptr7 ^ (long)ptr30) & (long*)~(long)(long*)((long)ptr30 ^ 0x10L)) < 0L;
    goto loc_401328;
}

long sub_4014E0(long param0, long param1) {
    long v0;
    long v1 = v0;
    long v2 = param1;
    long v3 = gvar_442038;
    if(!(gvar_440668 & 0x4)) {
        int v4 = /*BAD_CALL!*/ sub_401674((long)*(int*)(v3 + 12L));
        if((unsigned int)v4) {
            *(char*)v3 = 1;
            return sub_401516(v3);
        }
    }
    else {
        *(char*)v3 = 1;
    }
    return sub_401516(v3);
}

long sub_401516(long param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    char v4 = gvar_442050 ? 0: 1;
    long v5 = v2;
    long v6 = v3;
    long v7 = v0;
    long v8 = v1;
    if(v4) {
        gvar_442050 = 4464728L;
        gvar_442048 = 8L;
        sub_404540(&sub_4020EC, 0L, 0L);
    }
    unsigned long v9 = gvar_442040;
    unsigned long v10 = gvar_442050;
    unsigned long v11 = v9 - 1L;
    while(v11 != -1L) {
        long* ptr0 = (long*)(v11 * 8L + v10);
        --v11;
        if(!*(long*)(v11 * 8L + v10 + 8L)) {
            *ptr0 = param0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_442048) {
        long v12 = /*BAD_CALL!*/ sub_40466A((long*)&gvar_442050, &gvar_442048, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *(long*)(v9 * 8L + gvar_442050) = param0;
            gvar_442040 = v9 + 1L;
            return (unsigned long)(unsigned int)v11;
        }
    }
    else {
        v11 = v9;
        *(long*)(v9 * 8L + gvar_442050) = param0;
        gvar_442040 = v9 + 1L;
    }
    return (unsigned long)(unsigned int)v11;
}

int sub_401674(long param0) {
    char v0;
    char v1;
    int v2;
    long v3;
    long v4;
    long v5;
    long v6 = v3;
    long v7 = v4;
    long v8 = v5;
    int result = *(int*)&gvar_440668 & 0x4;
    if(!(*(int*)&gvar_440668 & 0x4)) {
        unsigned int v9 = gvar_443C70;
        unsigned int v10 = /*BAD_CALL!*/ sub_401711(param0, &v1);
        if(((unsigned int)v10 + 1)) {
            v0 = (v2 & 0xf000) == 0x2000;
            return v0 ? 1: 0;
        }
        gvar_443C70 = v9;
    }
    else {
        int v11 = (unsigned int)param0;
        result = 0;
        long v12 = /*BAD_CALL!*/ sub_404C6C(param0, 1);
        if((unsigned char)v12) {
            long v13 = sub_401EB0(*(long*)((long)(unsigned int)param0 * 24L + gvar_443AB0));
            v0 = (unsigned int)v13 == 2;
            result = v0 ? 1: 0;
        }
    }
    return result;
}

unsigned int sub_401711(long param0, int* param1) {
    long v0;
    long v1 = v0;
    long v2 = /*BAD_CALL!*/ sub_404DB0();
    unsigned int result = (unsigned int)v2;
    if(result != -1) {
        unsigned int v3 = result;
        sub_40173E(param1);
        result = v3;
    }
    return result;
}

void sub_40173E(int* param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9;
    long v10;
    long v11;
    long v12;
    if(param0) {
        long v13 = (unsigned long)*(int*)&gvar_440668;
        long v14 = v8;
        long v15 = v9;
        long v16 = v10;
        long v17 = v11;
        long v18 = v12;
        if(((unsigned char)v13 & 0x8)) {
            long v19 = (unsigned long)*(short*)((char*)param0 + 6L);
            long v20 = (unsigned long)*(short*)(param0 + 1);
            v7 = (long)*(param0 + 28);
            long v21 = (long)*param0;
            long v22 = *(long*)(param0 + 4);
            v6 = *(long*)(param0 + 24);
            v5 = *(long*)(param0 + 10);
            *(long*)(param0 + 10) = (long)*(param0 + 6);
            long v23 = *(long*)(param0 + 26);
            v4 = *(long*)(param0 + 8);
            v3 = *(long*)(param0 + 12);
            v2 = *(long*)(param0 + 14);
            v1 = *(long*)(param0 + 16);
            v13 = *(long*)(param0 + 18);
            *(long*)param0 = v21;
            *(long*)(param0 + 4) = v19;
            *(param0 + 6) = (unsigned int)v20;
            *(long*)(param0 + 7) = v22;
            *(long*)(param0 + 12) = v6;
            *(long*)(param0 + 14) = v7;
            *(long*)(param0 + 16) = v23;
            goto loc_40184B;
        }
        else {
            if(((unsigned char)v13 & 0x20)) {
                v6 = (long)*(param0 + 32);
                v0 = *(long*)(param0 + 28);
                v7 = *(long*)(param0 + 30);
                v4 = *(long*)(param0 + 12);
                v5 = *(long*)(param0 + 14);
                v3 = *(long*)(param0 + 16);
                v2 = *(long*)(param0 + 18);
                v1 = *(long*)(param0 + 20);
                v13 = *(long*)(param0 + 22);
                *(param0 + 6) = (unsigned int)*(short*)(param0 + 6);
                goto loc_40183F;
            }
            if(((unsigned char)v13 & 0x10)) {
                long v24 = (long)*(param0 + 7);
                int v25 = *param0;
                long v26 = *(long*)(param0 + 5);
                v6 = (long)*(param0 + 24);
                v0 = *(long*)(param0 + 20);
                v7 = *(long*)(param0 + 22);
                v3 = *(long*)(param0 + 12);
                *(long*)param0 = (long)*(param0 + 1);
                long v27 = (unsigned long)*(param0 + 4);
                v2 = *(long*)(param0 + 14);
                v1 = *(long*)(param0 + 16);
                v13 = *(long*)(param0 + 18);
                v4 = *(long*)(param0 + 8);
                v5 = *(long*)(param0 + 10);
                *(param0 + 6) = v25;
                *(long*)(param0 + 4) = v27;
                *(long*)(param0 + 7) = v26;
                *(long*)(param0 + 10) = v24;
            loc_40183F:
                *(long*)(param0 + 12) = v0;
                *(long*)(param0 + 14) = v6;
                *(long*)(param0 + 16) = v7;
            loc_40184B:
                *(long*)(param0 + 18) = v4;
                *(long*)(param0 + 20) = v5;
                *(long*)(param0 + 22) = v3;
                *(long*)(param0 + 24) = v2;
                *(long*)(param0 + 26) = v1;
                *(long*)(param0 + 28) = v13;
            }
        }
    }
}

long sub_4018D7() {
    gvar_443C70 = gvar_4406C0;
    return -1L;
}

long sub_401907() {
    gvar_443C70 = gvar_440708;
    return -1L;
}

long sub_401DBA(long* param0, long* param1, unsigned long param2, int* param3) {
    long result;
    long v0;
    long v1;
    char v2;
    unsigned int v3;
    long v4;
    long v5;
    long v6;
    long* ptr0;
    long v7 = v6;
    long v8 = v4;
    long* ptr1 = param1;
    long v9 = v5;
    unsigned long i;
    for(i = param2; i && !*(ptr1 + 1); --i) {
        ptr1 += 2;
    }
    int* ptr2 = sub_401E5C(param3, &v2);
    if(i) {
        v1 = (unsigned long)*(int*)(ptr1 + 1);
        v0 = *ptr1;
    }
    else {
        v1 = 0L;
        v0 = 0L;
    }
    void* ptr3 = param3;
    long v10 = *ptr0;
    int* ptr4 = ptr2;
    long v11 = /*BAD_CALL!*/ gvar_4060A8(v10, v0, v1, (long)&v3);
    if(!(unsigned int)v11) {
        sub_4052D6();
    }
    else if(!v3) {
        for(unsigned long j = 0L; j != i; ++j) {
        }
    loc_401E3D:
        gvar_406040(*ptr0);
        result = (unsigned long)v3;
    }
    else {
        goto loc_401E3D;
    }
    return result;
}

int* sub_401E5C(int* param0, int* param1) {
    int* ptr0 = param0;
    int* result = param1;
    if(param0 != -1L) {
        long v0 = 8L;
        param0 = param1;
        while(v0 != 0L) {
            *param0 = 0;
            ++param0;
            --v0;
        }
        *(unsigned long*)(param1 + 4) = ptr0;
    }
    else {
        result = NULL;
    }
    return result;
}

long sub_401EB0(long param0) {
    return gvar_406070(param0);
}

long sub_4020EC(long param0) {
    unsigned int v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    if(!param0) {
        v0 = 0;
        for(unsigned long i = gvar_442040 - 1L; i != -1L; --i) {
            if(*(long*)(i * 8L + gvar_442050)) {
                long v5 = /*BAD_CALL!*/ sub_4020EC();
                if((unsigned int)v5 == -1) {
                    goto loc_40212B;
                }
                else {
                    v0 += (unsigned int)v5;
                }
            }
        }
    }
    else {
        v0 = 0;
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long)*(int*)(param0 + 4L) & *(long*)&gvar_440798)) {
            v0 = *(unsigned int*)(param0 + 8L);
            if(!*(int*)(param0 + 8L)) {
                while(*(int*)(param0 + 20L) != *(int*)(param0 + 16L)) {
                    long v6 = param0;
                    int v7 = /*BAD_CALL!*/ sub_4021BE(param0);
                    if((unsigned int)v7 != -1) {
                        param0 = v6;
                        v0 += (unsigned int)v7;
                    }
                    else {
                    loc_40212B:
                        v0 = 0xffffffff;
                        break;
                    }
                }
            }
            else if(v0 != -1) {
                long v8 = sub_4020B3(param0, (unsigned long)v0);
                v0 = (unsigned int)v8;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long)v0;
}

int sub_4021BE(long param0) {
    int result;
    long v0;
    long v1;
    long v2 = v0;
    long v3 = v1;
    long v4 = (unsigned long)*(int*)(param0 + 16L);
    unsigned int v5 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v4 >= v5) {
        v5 = *(unsigned int*)(param0 + 32L);
    }
    int v6 = v5 - (unsigned int)v4;
    long v7 = sub_404C87((long)*(int*)(param0 + 12L), (long*)(*(long*)(param0 + 24L) + v4), (long)v6);
    if(v7 == -1L) {
        result = sub_40228B(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v7 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (int)v6;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40228B(long param0) {
    return sub_4020B3(param0, gvar_443C70);
}

long sub_402296() {
    return gvar_440678();
}

long sub_4022A2() {
    return gvar_440688();
}

unsigned long sub_4022A8(long param0, long param1, unsigned long param2) {
    unsigned long v0 = (unsigned int)param1 & 0xf ? (unsigned long)((0 - ((unsigned int)param1 + 16)) & 0xf): (unsigned long)((unsigned int)param1 & 0xf);
    long v1 = v0 + param1;
    unsigned long v2 = param2 - v0;
    *(long*)(param0 + 40L) = v1;
    *(unsigned long*)(param0 + 16L) = v2;
    *(long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long result = gvar_442480;
    *(long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long*)(param0 + 48L) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_4022EF(long param0) {
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
                                        goto loc_4023D1;
                                    }
                                }
                                else {
                                loc_4023D1:
                                    v20 = v22;
                                loc_4023D4:
                                    do {
                                        v0 = v19;
                                        v22 = v20;
                                        v19 = v20 + 40L;
                                        v20 = *(long*)(v20 + 40L);
                                        if(v20) {
                                            goto loc_4023D4;
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
                                        goto loc_40241F;
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
                                    loc_40241F:
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
                        long v26 = /*BAD_CALL!*/ sub_40452C(param0, result, v20, v19);
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
                            loc_402568:
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
                                        goto loc_402568;
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
long sub_4025AC(long param0, unsigned long param1, long param2, long param3, unsigned long param4, unsigned long param5) {
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
                goto loc_402619;
            }
            while(ptr1);
            ud2();
        loc_402619:
            long v13 = (unsigned long)*(int*)(ptr1 + 3);
            if(((unsigned char)v13 & 0x8) || !((unsigned char)v13 & 0x1)) {
                goto loc_4025E0;
            }
            else {
                unsigned long v14 = gvar_442470;
                v6 = ((unsigned long)(v12 + v14 - 81L - param1) / v14 - 1L) * v14;
                if((unsigned long)v6 > param5) {
                    goto loc_4025E0;
                }
                else {
                    while(1) {
                        if((unsigned long)ptr0 >= v0 && (unsigned long)ptr0 < param4) {
                            goto loc_4025E0;
                        }
                        else {
                            ptr0 = *(ptr0 + 2);
                            if(!ptr0) {
                                unsigned long v15 = param5 - v6;
                                long v16 = sub_404ABB();
                                if(!(v16 + 1L)) {
                                    long v17 = /*BAD_CALL!*/ sub_40452C(*ptr1 + v15, v6, v4, v3);
                                    if((unsigned int)v17) {
                                        goto loc_4025E0;
                                    }
                                }
                                if(v6) {
                                    *(long*)(ptr1 + 1) = *(long*)(ptr1 + 1) - v6;
                                    unsigned long v18 = *(unsigned long*)(param0 + 16L);
                                    *(long*)(param0 + 856L) = *(long*)(param0 + 856L) - v6;
                                    sub_4022A8(param0, *(long*)(param0 + 40L), v18 - v6);
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
        else {
        loc_4025E0:
            v6 = 0L;
        }
        v11 = sub_4022EF(param0);
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
long sub_4026E8(long param0, long param1, long param2, long param3) {
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
                goto loc_402874;
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
                            goto loc_4027A5;
                        }
                    }
                    else {
                    loc_4027A5:
                        param3 = result;
                    loc_4027A8:
                        do {
                            ptr1 = ptr2;
                            result = param3;
                            ptr2 = (long*)(param3 + 40L);
                            param3 = *(long*)(param3 + 40L);
                            if(param3) {
                                goto loc_4027A8;
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
                            goto loc_4027F8;
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
                        loc_4027F8:
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
            goto loc_402874;
        }
        else {
            v0 = param2 + v1 + 32L;
            result = sub_40452C(param0, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long*)(v6 + 856L) = *(long*)(v6 + 856L) - v0;
            return result;
        }
    }
    else {
    loc_402874:
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
                                    goto loc_402953;
                                }
                            }
                            else {
                            loc_402953:
                                param3 = v16;
                            loc_402956:
                                do {
                                    ptr0 = ptr2;
                                    v16 = param3;
                                    ptr2 = (long*)(param3 + 40L);
                                    param3 = *(long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_402956;
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
                                    goto loc_4029A2;
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
                                loc_4029A2:
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
                        goto loc_402A24;
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
        loc_402A24:
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
                loc_402B39:
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
                            goto loc_402B39;
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
void sub_402B64() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_403AE8(long param0, unsigned long param1, long param2, long param3, long param4, unsigned long param5) {
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
        loc_403C97:
            v4 = *(unsigned long*)(param1 + 8L);
            if(!((unsigned char)v4 & 0x2)) {
                char v13 = gvar_4420C8 == param1;
                v2 = gvar_4420C0;
                if(v13) {
                    long* ptr1 = (long*)(gvar_4420B0 + (long)ptr0);
                    gvar_4420C8 = param0;
                    gvar_4420B0 = ptr1;
                    v6 = (long)((long)ptr1 | 0x1L);
                    *(long*)(param0 + 8L) = (long)((long)ptr1 | 0x1L);
                    if(param0 == v2) {
                        gvar_4420C0 = 0L;
                        gvar_4420A8 = 0L;
                    }
                    if(gvar_4420D0 >= (unsigned long)ptr1) {
                        goto loc_403FEB;
                    }
                    else {
                        sub_4025AC(&gvar_4420A0, 0L, v6, v10, v4, param5);
                        return;
                    }
                }
                else if(param1 == v2) {
                    long* ptr2 = (long*)(gvar_4420A8 + (long)ptr0);
                    gvar_4420C0 = param0;
                    gvar_4420A8 = ptr2;
                    *(long*)(param0 + 8L) = (long)((long)ptr2 | 0x1L);
                    *(unsigned long*)((long)ptr2 + param0) = ptr2;
                    goto loc_403FEB;
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
                            gvar_4420A0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A0);
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
                                    goto loc_403DAE;
                                }
                            }
                            else {
                            loc_403DAE:
                                v11 = v14;
                            loc_403DB1:
                                do {
                                    v5 = param5;
                                    v14 = v11;
                                    param5 = (unsigned long)(v11 + 40L);
                                    v11 = *(long*)(v11 + 40L);
                                    if(v11) {
                                        goto loc_403DB1;
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
                            if(*(unsigned long*)(param5 * 8L + (long)&gvar_4422F8) == param1) {
                                *(long*)(v5 * 8L + (long)&gvar_4420A8) = v14;
                                if(v14) {
                                    goto loc_403DFF;
                                }
                                else {
                                    gvar_4420A4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A4);
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
                                loc_403DFF:
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
                        gvar_4420A8 = ptr0;
                        goto loc_403FEB;
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
                unsigned int v18 = gvar_4420A0;
                param1 = (unsigned long)(1 << (v11 & 0x1fL));
                long v19 = (unsigned long)((unsigned int)v11 * 2) * 8L + &gvar_4420E8;
                if(!((unsigned int)param1 & v18)) {
                    gvar_4420A0 = (unsigned int)((unsigned int)param1 | v18);
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
                unsigned int v20 = gvar_4420A4;
                int v21 = 1 << ((unsigned long)(unsigned int)v6 & 0x1fL);
                *(int*)(param0 + 56L) = (unsigned int)v6;
                *(long*)(param0 + 40L) = 0L;
                v11 = (long)v21;
                *(long*)(param0 + 32L) = 0L;
                v4 = (unsigned long)(unsigned int)v6;
                if(!(v20 & v21)) {
                    *(long*)(v4 * 8L + (long)&gvar_4422F8) = param0;
                    gvar_4420A4 = (unsigned int)((unsigned int)v11 | v20);
                    *(long*)(param0 + 48L) = v4 * 8L + &gvar_4422F8;
                loc_403FAC:
                    *(long*)(param0 + 24L) = param0;
                    *(long*)(param0 + 16L) = param0;
                }
                else {
                    long v22 = 0L;
                    param1 = *(unsigned long*)(v4 * 8L + (long)&gvar_4422F8);
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
                            goto loc_403FAC;
                        }
                    }
                    long v24 = *(long*)(param1 + 16L);
                    *(long*)(v24 + 24L) = param0;
                    *(long*)(param1 + 16L) = param0;
                    *(long*)(param0 + 16L) = v24;
                    *(unsigned long*)(param0 + 24L) = param1;
                    *(long*)(param0 + 48L) = 0L;
                }
                --gvar_4420D8;
                if(!gvar_4420D8) {
                    sub_4022EF(&gvar_4420A0);
                    return;
                }
            }
            goto loc_403FEB;
        }
        else {
            v4 = *(unsigned long*)(v8 - 16L);
            param0 -= v4;
            v11 = (unsigned long)((unsigned char)v11 & 0x3) | ((unsigned long)((v11 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v11) {
                ptr0 = (void*)((long)ptr0 + v4);
                if(gvar_4420C0 == param0) {
                    long v25 = *(long*)(param1 + 8L);
                    if(((unsigned int)*(long*)(param1 + 8L) & 0x3) == 3) {
                        gvar_4420A8 = ptr0;
                        *(long*)(param1 + 8L) = v25 & 0xfffffffffffffffeL;
                        *(long*)(param0 + 8L) = (long)((long)ptr0 | 0x1L);
                        *(void**)param1 = ptr0;
                        goto loc_403FEB;
                    }
                    else {
                        goto loc_403C97;
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
                        gvar_4420A0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A0);
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
                                goto loc_403BC0;
                            }
                        }
                        else {
                        loc_403BC0:
                            v11 = v3;
                        loc_403BC3:
                            do {
                                v2 = param5;
                                v3 = v11;
                                param5 = (unsigned long)(v11 + 40L);
                                v11 = *(long*)(v11 + 40L);
                                if(v11) {
                                    goto loc_403BC3;
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
                        char v31 = *(unsigned long*)(param5 * 8L + (long)&gvar_4422F8) == param0;
                        v2 = param5 + 74L;
                        v11 = (long)param5;
                        if(v31) {
                            char v32 = v3 ? 0: 1;
                            *(long*)(v2 * 8L + (long)&gvar_4420A8) = v3;
                            if(!v32) {
                                goto loc_403C15;
                            }
                            else {
                                gvar_4420A4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A4);
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
                            loc_403C15:
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
                goto loc_403C97;
            }
            else {
                v1 = (long)((long*)((long)ptr0 + v4) + 4);
                long v34 = /*BAD_CALL!*/ sub_40452C(param0, v1, v8, v11);
                v0 = (unsigned int)v34;
            }
        }
        if(!v0) {
            gvar_4423F8 -= v1;
        }
    }
loc_403FEB:
}

long sub_403FED(unsigned long param0, unsigned long param1, unsigned long param2, long $rcx$2) {
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
    long $rdi$1 = sub_402B64((long)$rdx, (long)param1, (long)param2, $rcx$2);
    if($rdi$1 && (*(char*)($rdi$1 - 8L) & 0x3)) {
        sub_4050B2($rdi$1, 0L, $rdx, $rcx$2);
    }
    return $rdi$1;
}

unsigned long* sub_404049(long param0, unsigned long* param1, long param2, long param3, long* param4) {
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
                sub_4026E8(v12, v1, v2, param3);
            }
            return result;
        }
        else if(*(long*)(v12 + 40L) == ptr4) {
            ptr4 = (long*)(*(long*)(v12 + 16L) + (long)ptr3);
            if((unsigned long)(long*)(*(long*)(v12 + 16L) + (long)ptr3) <= (unsigned long)param0) {
            loc_40407F:
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
                                    goto loc_4042DF;
                                }
                            }
                            else {
                            loc_4042DF:
                                unsigned long v19 = v15;
                            loc_4042E2:
                                do {
                                    v0 = param3;
                                    v15 = v19;
                                    param3 = (long)(v19 + 40L);
                                    v19 = *(unsigned long*)(v19 + 40L);
                                    if(v19) {
                                        goto loc_4042E2;
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
                                    goto loc_40432E;
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
                                loc_40432E:
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
                        sub_4026E8(v12, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_40407F;
        }
        else {
            param3 = *(long*)(v12 + 8L) + (long)ptr3;
            if((unsigned long)param3 < (unsigned long)param0) {
                goto loc_40407F;
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
        goto loc_40407F;
    }
    else {
        unsigned long v22 = gvar_442470;
        if((unsigned long)(param0 + 8L) > (unsigned long)ptr3 || (unsigned long)(long*)((long)ptr3 - param0) > (unsigned long)(unsigned long*)(v22 * 2L)) {
            unsigned long v23 = *result;
            long v24 = (v22 + param0 + 62L) & (0L - v22);
            unsigned long* ptr9 = (unsigned long*)((long*)((long)ptr3 + v23) + 4);
            long v25 = sub_404ABB();
            if(v25 == -1L) {
                goto loc_40407F;
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
long sub_4043D8(long param0, unsigned long param1, long param2, long param3, long param4, unsigned long param5) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    if(!param0) {
        result = sub_402B64((long)param1, v0, param2, param3);
    }
    else if(param1 > 18446744073709551487L) {
        sub_4018E7();
        goto loc_404419;
    }
    else if(!param1) {
        sub_403AE8(param0, 0L, param2, param3, param4, param5);
    loc_404419:
        result = 0L;
    }
    else {
        unsigned long* ptr0 = sub_404049(&gvar_4420A0, (unsigned long*)(param0 - 16L), param1 > 14L ? (param1 + 31L) & 0xfffffffffffffff0L: 32L, 1L, (long*)param4);
        if(ptr0) {
            result = (long)(ptr0 + 2);
        }
        else {
            result = sub_402B64((long)param1, (long)param1, param2, param3);
            if(result) {
                long v5 = *(long*)(param0 - 8L);
                sub_404F70(param3, (unsigned long)((v5 & 0xfffffffffffffff8L) - 16L) <= param1 ? (unsigned long)((v5 & 0xfffffffffffffff8L) - 16L): param1);
                sub_403AE8(param0, (unsigned long)param0, param2, param3, param4, param5);
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_404518(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1 = v0;
    long v2 = v0;
    return sub_40481D(param0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_404540(long param0, long param1, long param2) {
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
    long v9 = gvar_4424A0;
    if(!v9) {
        gvar_4424A0 = 0x4424a8L;
        v9 = 0x4424a8L;
    }
    if(*(int*)v9 == -1) {
        long v10 = sub_402296();
        if(v10) {
            *(long*)(v10 + 8L) = v9;
            gvar_4424A0 = v10;
            v9 = v10;
            goto loc_4045A7;
        }
        else {
            result = sub_4018E7();
        }
    }
    else {
    loc_4045A7:
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

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40466A(long* param0, long param1, long param2, long param3) {
    char result;
    unsigned long v0;
    unsigned long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8 = v2;
    long* ptr0 = NULL;
    long v9 = v5;
    long v10 = v3;
    long* ptr1 = param0;
    long v11 = v4;
    long v12 = param1;
    long v13 = v7;
    sub_4047B0(*param0, param1, param2, param3);
    long v14 = /*BAD_CALL!*/ sub_4047B0(*ptr1, param1, param2, param3);
    if((unsigned char)v14) {
        ptr0 = *ptr1;
    }
    param0 = *(long**)v12;
    param1 = *ptr1 ? (long)((long)(long*)((long)param0 >>> 1) + (long)param0): (unsigned long)(long)(31L / (unsigned long)param2) >= 4L ? (long)(31L / (unsigned long)param2): 4L;
    if(param0) {
        v1 = (unsigned long)(param2 * (long)param0);
        if((long*)((long)(long*)(param2 | (long)param0) & 0xffffffffffff0000L) && (long*)(v1 / (long)(unsigned long)param0) != param2) {
            goto loc_40479A;
        }
        else {
            goto loc_404700;
        }
    }
    else {
        v1 = 0L;
    loc_404700:
        long $rcx$2 = param3 + param1 + 1L;
        if($rcx$2) {
            v0 = (unsigned long)($rcx$2 * param2);
            if(!(($rcx$2 | param2) & 0xffffffffffff0000L) || v0 / (unsigned long)$rcx$2 == param2) {
                goto loc_404739;
            }
            else {
            loc_40479A:
                sub_401907();
            }
        }
        else {
            v0 = 0L;
        loc_404739:
            unsigned long v15 = v1;
            long v16 = $rcx$2;
            long v17 = sub_4022A2();
            if(v17) {
                if(!ptr0 && *ptr1) {
                    sub_404F70($rcx$2, v1);
                }
                sub_4050B2(v17 + v1, 0L, v0 - v1, $rcx$2);
                *(long*)v12 = param3;
                *ptr1 = v6;
                return 1;
            }
            sub_4018E7();
        }
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_4047B0(long param0, long param1, long param2, long param3) {
    long v0;
    if((unsigned long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        long v1 = v0;
        long v2 = param3;
        long v3 = sub_404C04((unsigned long)(unsigned int)(param0 >>> 16L), &gvar_4427C8, (long)gvar_4427C0);
        long result = 0L;
        if(v3) {
            long v4 = 1L;
            if((unsigned int)(param0 >>> 16L) != *(int*)(v3 * 8L + (long)&gvar_4427C0)) {
                v4 = (unsigned int)(param0 >>> 16L) != *(unsigned int*)((v3 - 1L) * 8L + (long)&gvar_4427CC) ? 0L: 1L;
            }
            result = (unsigned long)((unsigned int)v4 & 0x1);
        }
        return result;
    }
    return 0L;
}

long sub_40481D(long param0) {
    return sub_404843(0L, param0, 3L, (unsigned long)((unsigned int)gvar_440728 | gvar_440730 | 0x2), 0xffffffffL, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_404ABB() {
    return sub_4018F7();
}

long sub_404C6C(long param0, unsigned int param1) {
    long result = 0L;
    if((unsigned int)param0) {
        result = *(int*)((long)(unsigned int)param0 * 24L + gvar_443AB0 + 16L) != param1 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_404C87(long param0, long* param1, long param2) {
    long result;
    long* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5 = v0;
    long v6 = v1;
    long v7 = v2;
    if((unsigned int)param0 == -1) {
        long v8 = sub_4018D7();
        result = (long)(unsigned int)v8;
    }
    else {
        long v9 = /*BAD_CALL!*/ sub_404C6C((long)(unsigned int)param0, 5);
        if((unsigned char)v9) {
            result = 0L(-1L, 1L);
        }
        else if(!(gvar_440668 & 0x4)) {
            result = sub_404DE0();
        }
        else {
            long v10 = /*BAD_CALL!*/ sub_404C6C((long)(unsigned int)param0, 2);
            if((unsigned char)v10) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long v11 = /*BAD_CALL!*/ sub_404C6C((long)(unsigned int)param0, 1);
                if(!(unsigned char)v11) {
                    long v12 = /*BAD_CALL!*/ sub_404C6C((long)(unsigned int)param0, 4);
                    if((unsigned char)v12) {
                        long v13 = (long)(unsigned int)param0 * 24L + gvar_443AB0;
                        long v14 = v3;
                        return sub_401DBA(v13, (long)&ptr0, 1L, -1L, v4);
                    }
                    result = sub_4018C7();
                }
                else {
                    long v13 = (long)(unsigned int)param0 * 24L + gvar_443AB0;
                    long v14 = v3;
                    result = sub_401DBA(v13, (long)&ptr0, 1L, -1L, v4);
                }
            }
        }
    }
    return result;
}

long sub_404DB0() {
    return gvar_440670();
}

long sub_404DE0() {
    return gvar_440670();
}

long sub_404E4D(long param0, int* param1, long param2, long param3) {
    return sub_404E8F(param0, param1, param2, param3);
}

long sub_404E8F(long param0, int* param1, long param2, long param3) {
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

void sub_404F70(long param0, unsigned long param1) {
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
    jump *(long*)(v8 * 8L + 4457544L);
}

void sub_4050B2(long $rdi$1, int $esi, unsigned long $rdx, long $rcx$2) {
    // Decompilation error
}

long sub_40524A(int param0, unsigned long param1) {
    int v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_440728;
            v0 = (unsigned long)((long)v1 & param1) == param1 ? 64: 128;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long v2 = gvar_440728;
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
