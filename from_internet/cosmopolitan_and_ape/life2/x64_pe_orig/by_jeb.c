
void start(long long param0, long long param1) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long* ptr0;
    long long v5;
    long long v6;
    char v7;
    long long v8;
    long long* ptr1;
    char v9;
    long long v10;
    long long v11;
    void* ptr2;
    long long* ptr3;
    char v12;
    unsigned int v13;
    long long* ptr4;
    while(1) {
        long long* ptr5 = ptr0;
        long long* ptr6 = ptr4;
        long long* ptr7 = ptr3;
        long long v14 = v5;
        long long v15 = v6;
        long long v16 = 0L;
        long long v17 = 0L;
        BOOL v18 = SetDefaultDllDirectories(0x800);
        if(!(unsigned int)v18) {
            HANDLE hFile = GetStdHandle(0xfffffff4);
            LPOVERLAPPED v19 = NULL;
            WriteFile(hFile, "nodll\n", 6, &v9, NULL);
            /*NO_RETURN*/ ExitProcess(1);
        }
        gvar_4362B8 = 4;
        LPWSTR v20 = GetCommandLineW();
        LPWCH v21 = GetEnvironmentStringsW();
        long long v22 = (long long)v20;
        LPWCH v23 = v21;
        long long v24 = sub_40180C(v22, &v7, 0x3fffL, (long long)&v10, 0x200L);
        v5 = (unsigned long long)(unsigned int)v24;
        long long v25 = 0L;
        while(1) {
            v3 = v25 + v10;
            param1 = (unsigned long long)*(char*)v3 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!*(char*)v3) {
                break;
            }
            else {
                if((unsigned char)param1 == 92) {
                    *(char*)v3 = 47;
                }
                ++v25;
            }
        }
        long long v26 = (unsigned long long)v23[0];
        if(v23[0] <= 55295) {
            v2 = (unsigned int)v26;
            v1 = 1L;
        }
        else {
            long long v27 = (long long)v23;
            v1 = sub_40436D(v27, &v2, param1, v3);
        }
        long long v28 = (unsigned long long)(unsigned int)v1;
        long long v29 = (long long)&v9;
        long long v30 = v28 * 2L;
        unsigned long long v31 = 0L;
        long long v32 = v30 + (long long)v23;
        while(v2) {
            ++v31;
            if(v31 <= 0x1ffL) {
                *(long long*)(v31 * 8L + (long long)&v17) = (unsigned long long)v29 < (unsigned long long)&v12 ? v29: 0L;
            }
            do {
                v13 = v2;
                char v33 = v2 == 127;
                char v34 = v13 < 127;
                long long v35 = (long long)v13;
                if(!v34 && !v33) {
                    long long v36 = (long long)v13;
                    v35 = sub_40437C(v36, (long long)&v2, v32, v29);
                }
                while((unsigned long long)v29 < (unsigned long long)&v12) {
                    ++v29;
                    *(char*)(v29 - 1L) = (unsigned char)v35;
                    v35 >>>= 8;
                    if(!v35) {
                        break;
                    }
                }
                long long v37 = (unsigned long long)*(short*)v32;
                if(*(unsigned short*)v32 <= 55295) {
                    v2 = (unsigned int)v37;
                    v0 = 1L;
                }
                else {
                    long long v38 = v32;
                    v0 = sub_40436D(v38, &v2, v32, v29);
                }
                v32 += (unsigned long long)(unsigned int)v0 * 2L;
            }
            while(v13);
            long long* ptr8 = (long long*)(v29 - (long long)&v9);
            char v39 = ptr8 == 32765L;
            *(char*)((long long*)((long long)((unsigned long long)ptr8 < 32765L || v39 ? ptr8: (long long*)0x7FFD) + (long long)&v8) - 0x1006) = 0;
        }
        if((unsigned long long)v29 < (unsigned long long)&v12) {
            *(char*)v29 = 0;
            ++v29;
        }
        long long* ptr9 = (long long*)(v29 - (long long)&v9);
        ptr4 = &v11;
        char v40 = ptr9 == 0x7ffeL;
        char v41 = (unsigned long long)ptr9 < 0x7ffeL;
        ptr0 = &v16;
        long long* ptr10 = v41 || v40 ? ptr9: (long long*)0x7FFE;
        unsigned long long v42 = v31 <= 0x1ffL ? v31: 0x1ffL;
        *(char*)((long long)ptr10 + (long long)&v9) = 0;
        LPWCH penv = v23;
        *(long long*)(v42 * 8L + (long long)&v11) = 0L;
        ptr3 = &v10;
        FreeEnvironmentStringsW(penv);
        v6 = &MZHeader;
        unsigned long long* ptr11 = (unsigned long long*)((long long*)((long long)&ptr2 & 0xfffffffffffffff0L) - 1);
        sub_4012F0();
        gvar_437FB4 |= 1;
        long long* ptr12 = (long long*)&gvar_405008;
        long long v43 = &gvar_405008;
        while(ptr12 != v43) {
            --ptr11;
            *ptr11 = ptr12;
            --ptr11;
            *ptr11 = v43;
            --ptr11;
            *ptr11 = &loc_40149C;
            /*BAD_CALL!*/ *ptr12(v43);
            v43 = *ptr11;
            ++ptr11;
            long long v44 = *ptr11;
            ++ptr11;
            ptr12 = (long long*)(v44 + 8L);
        }
        --ptr11;
        *ptr11 = &loc_4014B3;
        long long v45 = /*BAD_CALL!*/ sub_401460();
        long long v46 = (long long)(unsigned int)v45;
        --ptr11;
        *ptr11 = &sub_4014BA;
        /*NO_RETURN*/ sub_40153D(v46, &v10, v4, ptr1);
    }
}

long long sub_401158(long long param0, unsigned int param1, long long param2, unsigned long long* param3) {
    long long v0;
    long long v1 = 39L;
    while(1) {
        --param1;
        v0 = (unsigned long long)((unsigned int)(param0 >>> (v1 & 0x3fL)) & 0x1ff);
        if(param1 == -1) {
            break;
        }
        else {
            unsigned long long* ptr0 = (unsigned long long*)(v0 * 8L + param2);
            if(!*ptr0) {
                long long v2 = *param3 - 0x1000L;
                *param3 = *param3 - 0x1000L;
                *ptr0 = v2 | 0x3L;
            }
            v1 = (unsigned long long)((unsigned int)v1 - 9);
            param2 = *ptr0 & 0x3fffffffff000L;
        }
    }
    return v0 * 8L + param2;
}

unsigned long long* sub_4011FE(long long param0, unsigned long long* param1, long long param2, long long param3) {
    unsigned long long* result;
    long long v0;
    long long v1;
    unsigned int v2;
    unsigned int v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    long long v7 = v0;
    long long v8 = v5;
    long long v9 = v1;
    do {
        unsigned long long v10 = *param1;
        long long v11 = *(long long*)(param1 + 1);
        unsigned long long* ptr0 = param1;
        int v12 = *(int*)(param1 + 2);
        int v13 = *(int*)((char*)param1 + 20L);
        long long v14 = (unsigned long long)v3;
        do {
            long long v15 = (unsigned long long)(unsigned int)v14;
            v14 = (unsigned long long)((unsigned int)v14 - 1);
            if(*(long long*)(ptr0 - 3) != v10) {
                int* ptr1 = (int*)(ptr0 - 3);
                unsigned long long* ptr2 = ptr0;
                ptr0 -= 3;
                v15 = 6L;
                do {
                    *(int*)ptr2 = *ptr1;
                    ++ptr1;
                    ptr2 = (unsigned long long*)((char*)ptr2 + 4L);
                    --v15;
                }
                while(v15 == 0L);
            }
            else {
                v14 = (unsigned long long)(unsigned int)v15;
            }
            break;
        }
        while((unsigned int)v14);
        ++v3;
        param1 += 3;
        result = (unsigned long long*)(v14 * 24L + param3);
        *result = v10;
        *(long long*)(result + 1) = v11;
        *(int*)(result + 2) = v12;
        *(int*)((char*)result + 20L) = v13;
    }
    while(v2 > v3);
    return result;
}

void sub_401270() {
    char v0;
    long long v1;
    int v2;
    int v3;
    long long v4 = (unsigned long long)((unsigned int)&v0 - 8);
    long long v5 = (unsigned long long)v3 | ((unsigned long long)v2 << 32);
    int v6 = v3;
    long long v7 = (unsigned long long)v3;
    long long v8 = (unsigned long long)v6;
    long long v9 = v5;
    long long* ptr0 = &v1;
    interrupt(3);
}

void sub_40127E() {
    char v0;
    char* ptr0 = (char*)((unsigned int)&v0 - 16);
    long long v1 = 8L;
    long long v2 = 8L;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v2;
    }
    while(v2 == 0L);
    while(1) {
        lidt(*(void*)((unsigned long long)((unsigned int)&v0 - 8) - 8L));
        ud2();
    }
}

void sub_401299() {
}

long long sub_4012F0() {
    char* ptr0;
    long long v0;
    long long v1;
    long long v2;
    char v3;
    char v4;
    long long v5;
    long long v6;
    long long v7;
    long long* ptr1;
    long long* ptr2;
    char v8;
    long long v9;
    unsigned long long* ptr3;
    long long v10;
    char* ptr4;
    long long v11;
    long long* ptr5 = &v0;
    long long v12 = &gvar_436000;
    long long v13 = &gvar_404D28;
    (long long v11, long long v2) = rdtsc();
    *(int*)&gvar_436000 = (unsigned int)v11;
    int* ptr6 = (int*)0x436004;
    int v14 = (unsigned int)v11;
    int v15 = (unsigned int)v2;
    int v16 = 0;
    long long v17 = (unsigned long long)v14;
    *(int*)((char*)&gvar_436000 + 4) = v15;
    unsigned char* ptr7 = (unsigned char*)&gvar_436008;
    long long v18 = v6;
    long long v19 = 0L;
    long long v20 = 22L;
    long long v21 = 0xffffffff80000007L;
    long long v22 = 0xffffffff80000001L;
    long long v23 = 7L;
    long long v24 = 2L;
    unsigned long long* ptr8 = &v1;
    v1 = 1L;
    unsigned char* ptr9 = (unsigned char*)&gvar_436008;
    long long v25 = 0L;
    char v26 = 1;
    char v27 = 0;
    char v28 = 1;
    char v29 = 0;
    char v30 = 0;
    do {
        long long v31 = 0L;
        char v32 = 1;
        char v33 = 0;
        char v34 = 1;
        char v35 = 0;
        char v36 = 0;
        (long long v7, long long v5, long long v9, long long v10) = cpuid(v25, 0L);
        *(int*)ptr7 = (unsigned int)v7;
        int* ptr10 = (int*)(ptr7 + 4L);
        int v37 = (unsigned int)v7;
        int v38 = (unsigned int)v5;
        int v39 = 0;
        long long v40 = (unsigned long long)v37;
        *ptr10 = v38;
        int* ptr11 = ptr10 + 1;
        int v41 = v38;
        int v42 = (unsigned int)v9;
        int v43 = 0;
        long long v44 = (unsigned long long)v41;
        *ptr11 = v42;
        int* ptr12 = ptr11 + 1;
        int v45 = v42;
        int v46 = (unsigned int)v10;
        int v47 = 0;
        long long v48 = (unsigned long long)v45;
        *ptr12 = v46;
        ptr7 = (unsigned char*)(ptr12 + 1);
    loc_401328:
        while(1) {
            v25 = *ptr8;
            ++ptr8;
            char v49 = (unsigned int)v25 ? 0: 1;
            char v50 = (unsigned int)v25 < 0;
            char v51 = __parity__((unsigned char)v25);
            char v52 = 0;
            char v53 = 0;
            if(v49) {
                long long v54 = *ptr8;
                unsigned long long* ptr13 = ptr3;
                *(unsigned long long**)ptr7 = ptr3;
                long long v55 = (long long)(ptr7 + 8L);
                *ptr8 = &loc_401344;
                HANDLE v56 = /*BAD_CALL!*/ sub_4014BA(v55, &gvar_404D28);
                long long v57 = -1L;
                char v58 = 0;
                char v59 = 1;
                char v60 = 1;
                char v61 = 0;
                char v62 = 0;
                ptr1[0] = -1L;
                long long* ptr14 = ptr1 + 1;
                *ptr14 = -1L;
                long long* ptr15 = ptr14 + 1;
                long long v63 = &gvar_40462E;
                *ptr15 = &gvar_40462E;
                long long* ptr16 = ptr15 + 1;
                --ptr8;
                *ptr8 = 32L;
                long long v64 = 32L;
                long long v65 = &gvar_404434;
                char v66 = gvar_436023 & 0x10 ? 0: 1;
                char v67 = (char)(gvar_436023 & 0x10) < 0;
                char v68 = __parity__(gvar_436023 & 0x10);
                char v69 = 0;
                char v70 = 0;
                *ptr8 = &loc_401367;
                long long v71 = /*BAD_CALL!*/ sub_40150F(ptr16, ptr4, &gvar_404434, 32);
                --ptr8;
                *ptr8 = 32L;
                long long v72 = 32L;
                long long v73 = &gvar_40457C;
                char v74 = gvar_43603C & 0x20 ? 0: 1;
                char v75 = (char)(gvar_43603C & 0x20) < 0;
                char v76 = __parity__(gvar_43603C & 0x20);
                char v77 = 0;
                char v78 = 0;
                *ptr8 = &loc_40137B;
                long long v79 = /*BAD_CALL!*/ sub_40150F(ptr1, ptr4, &gvar_40457C, 32);
                long long v80 = *ptr2;
                ptr1[0] = *ptr2;
                long long* ptr17 = ptr1 + 1;
                long long v81 = &gvar_404690;
                *ptr17 = &gvar_404690;
                char* ptr18 = (char*)(ptr17 + 1);
                --ptr8;
                *ptr8 = v54;
                --ptr8;
                *ptr8 = ptr4;
                char v82 = *ptr18 & 0x8 ? 0: 1;
                char v83 = (*ptr18 & 0x8) < 0;
                char v84 = __parity__(*ptr18 & 0x8);
                char v85 = 0;
                char v86 = 0;
                if(v82) {
                    char v87 = *ptr18 & 0x20 ? 0: 1;
                    char v88 = (*ptr18 & 0x20) < 0;
                    char v89 = __parity__(*ptr18 & 0x20);
                    char v90 = 0;
                    char v91 = 0;
                    if(v87) {
                        char v92 = *ptr18 & 0x4 ? 0: 1;
                        char v93 = (*ptr18 & 0x4) < 0;
                        char v94 = __parity__(*ptr18 & 0x4);
                        char v95 = 0;
                        char v96 = 0;
                        if(v92) {
                            char v97 = *ptr3 ? 0: 1;
                            char v98 = *ptr3 < 0L;
                            char v99 = __parity__((unsigned char)*ptr3);
                            char v100 = *ptr3 < 0L;
                            char v101 = 0;
                            char v102 = 0;
                            --ptr8;
                            if(!v97) {
                                *ptr8 = 0L;
                                --ptr8;
                                *ptr8 = 1L;
                                ptr0 = (char*)&gvar_404DA2;
                            }
                            else {
                                *ptr8 = 42L;
                                --ptr8;
                                *ptr8 = 16L;
                                ptr0 = (char*)&gvar_404DC9;
                            }
                        }
                        else {
                            --ptr8;
                            *ptr8 = 34L;
                            --ptr8;
                            *ptr8 = 4L;
                            ptr0 = (char*)&gvar_404DF1;
                        }
                    }
                    else {
                        --ptr8;
                        *ptr8 = 48L;
                        --ptr8;
                        *ptr8 = 32L;
                        ptr0 = (char*)&gvar_404D79;
                    }
                }
                else {
                    --ptr8;
                    *ptr8 = 69L;
                    --ptr8;
                    *ptr8 = 8L;
                    ptr0 = (char*)&gvar_404E30;
                }
                long long v103 = &gvar_404310;
                long long v104 = *ptr8;
                ++ptr8;
                *(long long*)ptr18 = v104;
                long long* ptr19 = (long long*)(ptr18 + 8L);
                long long v105 = *ptr8;
                unsigned long long v106 = *ptr8;
                long long v107 = v105 + &gvar_404310;
                char v108 = v107 ? 0: 1;
                char v109 = v107 < 0L;
                char v110 = __parity__((unsigned char)v107);
                char v111 = (((v106 ^ &gvar_404310) ^ v107) >>> 4L) & 0x1L;
                char v112 = v106 >= 18446744073705340144L;
                char v113 = ((v107 ^ v106) & ~(v106 ^ &gvar_404310)) < 0L;
                *ptr19 = v107;
                long long* ptr20 = ptr19 + 1;
                *ptr8 = ptr19 + 1;
                unsigned long long* ptr21 = (unsigned long long*)&gvar_4362E8;
                long long v114 = -1L;
                char v115 = 0;
                char v116 = 1;
                char v117 = 1;
                char v118 = 0;
                char v119 = 0;
                long long v120 = 4416472L;
                while(1) {
                    char v121 = ptr21 == 4416472L;
                    char v122 = (long long)ptr21 < 4416472L;
                    char v123 = __parity__((unsigned char)ptr21 - 216);
                    char v124 = (unsigned long long)ptr21 < 4416472L;
                    char v125 = (long long)(long long*)((long long)(long long*)((long long)(long long*)(ptr21 - 552059) ^ (long long)ptr21) & (long long)(long long*)((long long)ptr21 ^ 0x4363d8L)) < 0L;
                    char v126 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(ptr21 - 552059) ^ (long long)(long long*)((long long)ptr21 ^ 0x4363d8L)) >>> 4L) & 0x1L);
                    if(!v124) {
                    loc_40142B:
                        long long* ptr22 = *ptr8;
                        ++ptr8;
                        long long v127 = *ptr8;
                        ++ptr8;
                        long long v128 = *ptr8;
                        ++ptr8;
                        long long v129 = 4423552L;
                        unsigned long long* ptr23 = ptr8;
                        unsigned long long* ptr24 = ptr8;
                        ptr8 -= 4;
                        char v130 = ptr8 ? 0: 1;
                        char v131 = (long long)ptr8 < 0L;
                        char v132 = __parity__((unsigned char)ptr8);
                        char v133 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr24 ^ 0x20L) ^ (long long)ptr8) >>> 4L) & 0x1L);
                        char v134 = (unsigned long long)ptr24 < 32L;
                        char v135 = (long long)(long long*)((long long)(long long*)((long long)ptr8 ^ (long long)ptr24) & (long long)(long long*)((long long)ptr24 ^ 0x20L)) < 0L;
                        --ptr8;
                        *ptr8 = &loc_401440;
                        /*BAD_CALL!*/ GetSystemInfo((LPSYSTEM_INFO)0x437F80);
                        unsigned long long* ptr25 = ptr8;
                        ptr8 += 4;
                        char v136 = ptr8 ? 0: 1;
                        char v137 = (long long)ptr8 < 0L;
                        char v138 = __parity__((unsigned char)ptr8);
                        char v139 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr25 ^ 0x20L) ^ (long long)ptr8) >>> 4L) & 0x1L);
                        char v140 = (unsigned long long)ptr25 >= 18446744073709551584L;
                        char v141 = (long long)(long long*)((long long)(long long*)((long long)ptr8 ^ (long long)ptr25) & (long long*)~(long long)(long long*)((long long)ptr25 ^ 0x20L)) < 0L;
                        long long v142 = &sub_403817;
                        *ptr22 = &sub_403817;
                        long long v143 = (long long)(ptr22 + 1);
                        --ptr8;
                        *ptr8 = &loc_401450;
                        long long v144 = /*BAD_CALL!*/ sub_401466(v143, v127);
                        long long v145 = &sub_403312;
                        ptr1[0] = &sub_403312;
                        long long* ptr26 = ptr1 + 1;
                        long long v146 = &sub_403C02;
                        *ptr26 = &sub_403C02;
                        long long* ptr27 = ptr26 + 1;
                        long long v147 = *ptr23;
                        long long v148 = *(long long*)(ptr23 + 1);
                        ptr8 = ptr23 + 2;
                        jump v148;
                    }
                    else {
                        v103 = 0L;
                        long long v149 = 0L;
                        char v150 = 1;
                        char v151 = 0;
                        char v152 = 1;
                        char v153 = 0;
                        char v154 = 0;
                        do {
                            v107 = (unsigned long long)*ptr0 | ((unsigned long long)((v107 >>> 8L) & 0xffffffffffffffL) << 8);
                            ++ptr0;
                            long long v155 = v107;
                            long long v156 = (unsigned long long)((unsigned int)v155 & 0x7f);
                            char v157 = (unsigned int)v155 & 0x7f ? 0: 1;
                            char v158 = (v156 >>> 31L) & 0x1L;
                            char v159 = __parity__((unsigned char)v156);
                            char v160 = 0;
                            char v161 = 0;
                            long long v162 = v156;
                            long long v163 = v156 << (v103 & 0x3fL);
                            char v164 = (unsigned long long)(v103 & 0x3fL) < 64L && (v103 & 0x3fL) ? v162 << ((v103 & 0x3fL) - 1L) < 0L: 0;
                            char v165 = (v103 & 0x3fL) == 1L ? v162 < 0L ^ ((v162 >>> 62L) & 0x1L): 0;
                            char v166 = v103 & 0x3fL ? v163 ? 0: 1: v157;
                            char v167 = v103 & 0x3fL ? v163 < 0L: v158;
                            char v168 = v103 & 0x3fL ? __parity__((unsigned char)v163): v159;
                            v103 = (unsigned long long)((unsigned int)v103 + 7);
                            v149 |= v163;
                            char v169 = (unsigned char)v107 ? 0: 1;
                            v8 = (unsigned char)v107 < 0;
                            char v170 = __parity__((unsigned char)v107);
                            char v171 = 0;
                            char v172 = 0;
                        }
                        while(v8);
                        char v173 = (unsigned char)v107 & 0x40 ? 0: 1;
                        char v174 = ((unsigned char)v107 & 0x40) < 0;
                        char v175 = __parity__((unsigned char)v107 & 0x40);
                        char v176 = 0;
                        char v177 = 0;
                        if(!v173) {
                            long long v178 = -1L;
                            long long v179 = -1L;
                            long long v180 = -1L << (v103 & 0x3fL);
                            char v181 = (unsigned long long)(v103 & 0x3fL) < 64L && (v103 & 0x3fL) ? -1L << ((v103 & 0x3fL) - 1L) < 0L: 0;
                            char v182 = 0;
                            char v183 = v103 & 0x3fL ? v180 ? 0: 1: 0;
                            char v184 = v103 & 0x3fL ? v180 < 0L: v174;
                            char v185 = v103 & 0x3fL ? __parity__((unsigned char)v180): v175;
                            v149 |= v180;
                            char v186 = v149 ? 0: 1;
                            char v187 = v149 < 0L;
                            char v188 = __parity__((unsigned char)v149);
                            char v189 = 0;
                            char v190 = 0;
                        }
                        long long v191 = v149;
                        char v192 = *ptr21 ? 0: 1;
                        char v193 = *ptr21 < 0L;
                        char v194 = __parity__((unsigned char)*ptr21);
                        char v195 = *ptr21 < 0L;
                        char v196 = 0;
                        char v197 = 0;
                        v107 = v192 ? v191: *ptr21;
                        *ptr21 = v192 ? v191: *ptr21;
                        ++ptr21;
                    }
                }
                goto loc_40142B;
            }
            else {
                v3 = (unsigned char)v25 == *(char*)&gvar_436008;
                char v198 = (unsigned char)v25 < *(char*)&gvar_436008;
                char v199 = __parity__((unsigned char)v25 - *(char*)&gvar_436008);
                v4 = (unsigned char)v25 < *(char*)&gvar_436008;
                char v200 = ((((unsigned char)v25 - *(char*)&gvar_436008) ^ (unsigned char)v25) & ((unsigned char)v25 ^ *(char*)&gvar_436008)) < 0;
                char v201 = ((((unsigned char)v25 - *(char*)&gvar_436008) ^ ((unsigned char)v25 ^ *(char*)&gvar_436008)) >>> 4) & 0x1;
            }
        }
    }
    while(v4 || v3);
    unsigned char* ptr28 = ptr7;
    ptr7 += 16L;
    char v202 = ptr7 ? 0: 1;
    char v203 = (long long)ptr7 < 0L;
    char v204 = __parity__((unsigned char)ptr7);
    char v205 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr28 ^ 0x10L) ^ (long long)ptr7) >>> 4L) & 0x1L);
    char v206 = (unsigned long long)ptr28 >= 18446744073709551600L;
    char v207 = (long long)(long long*)((long long)(long long*)((long long)ptr7 ^ (long long)ptr28) & (long long*)~(long long)(long long*)((long long)ptr28 ^ 0x10L)) < 0L;
    goto loc_401328;
}

long long sub_401460() {
    return 42L;
}

long long sub_401466(long long param0, long long param1) {
    long long result;
    sub_403CBB();
    return result;
}

HANDLE sub_4014BA(long long param0, long long param1) {
    gvar_437DE0 = 3L;
    gvar_437DF0 = &gvar_437DF8;
    gvar_437DE8 = 16L;
    gvar_437E08 = 1;
    gvar_437E20 = 1;
    gvar_437E38 = 1;
    HANDLE v0 = GetStdHandle(0xfffffff6);
    gvar_437DF8 = v0;
    HANDLE v1 = GetStdHandle(0xfffffff5);
    gvar_437E10 = v1;
    HANDLE result = GetStdHandle(0xfffffff4);
    gvar_437E28 = result;
    return result;
}

long long sub_40150F(long long* param0, char* param1, long long param2, unsigned int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((gvar_43603D & 0x2 ? v0 ? 1L: 3L: v0 ? 0L: 2L) + (long long)param1) + param2;
    return *(long long*)param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40153D(long long param0, long long* param1, long long param2, long long* param3) {
    long long v0;
    void* ptr0;
    long long v1;
    long long v2;
    long long* ptr1 = &v0;
    long long v3 = v2;
    int v4 = (unsigned int)param0;
    int v5 = 0;
    long long v6 = 0L;
    char v7 = 1;
    char v8 = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 0;
    long long v12 = v1;
    long long v13 = sub_4041E6(0L, param1, param2, param3);
    long long v14 = (unsigned long long)v4;
    long long* ptr2 = &ptr0;
    /*NO_RETURN*/ sub_4046C1();
}

long long sub_4017B1(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = param0;
    param0 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)param0;
    if(*(unsigned short*)param0 <= 55295) {
        *(int*)(v1 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_40436D(param0, (int*)(v1 + 24L), v1, param3);
    }
    *(long long*)v1 = (unsigned long long)(unsigned int)v0 * 2L + *(long long*)v1;
    return (unsigned long long)(unsigned int)v0 * 2L;
}

long long sub_4017DC(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_40437C((long long)(unsigned int)param1, param1, param0, param3);
    }
    do {
        char* ptr0 = *(unsigned long long*)(param0 + 8L);
        if((unsigned long long)ptr0 >= v0) {
            return result;
        }
        *(long long*)(param0 + 8L) = (long long)(ptr0 + 1L);
        *ptr0 = (unsigned char)result;
        result >>>= 8;
    }
    while(result);
    return result;
}

long long sub_40180C(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    unsigned long long v6;
    unsigned long long v7;
    long long v8;
    unsigned long long v9;
    unsigned long long v10;
    long long v11;
    long long v12 = v8;
    unsigned long long v13 = v9;
    long long v14 = v3;
    long long v15 = param1;
    unsigned long long v16 = v7;
    long long v17 = v4;
    unsigned long long v18 = 0L;
    long long v19 = param3;
    long long v20 = param1;
    long long v21 = param2 + param1;
    sub_4017B1(&v1, param1, param2, param3);
loc_401853:
    while(v2) {
    loc_401855:
        do {
            unsigned long long v22 = (unsigned long long)v2;
            if(v2) {
                if((unsigned int)v22 <= 32 && ((0x100002600L >>> (v22 % 64L)) & 0x1L)) {
                    sub_4017B1(&v1, param1, param2, param3);
                    goto loc_401855;
                }
                else {
                    ++v18;
                    if(v18 < v6) {
                        long long v23 = v20;
                        if((unsigned long long)v23 >= (unsigned long long)v21) {
                            v23 = 0L;
                        }
                        v0 = v19;
                        *(long long*)(v18 * 8L + v0 - 8L) = v23;
                    }
                    v9 = 0L;
                loc_4018DD:
                    for(long long i = (long long)v2; v2; i = (long long)v2) {
                        if(!(unsigned char)v9 && (unsigned int)i <= 32) {
                            if(((0x100002600L >>> ((unsigned long long)i % 64L)) & 0x1L)) {
                                break;
                            }
                        }
                        else if((unsigned int)i == 34 || (unsigned int)i == 92) {
                            v7 = 0L;
                            while(v2 == 92) {
                                ++v7;
                                sub_4017B1(&v1, i, v0, v11);
                            }
                            unsigned long long j;
                            for(j = 0L; v2 == 34; j = (unsigned long long)(v5 + 1L)) {
                                sub_4017B1(&v1, i, v0, v11);
                            }
                            unsigned long long v24 = v7;
                            if(!j) {
                                while(1) {
                                    --v7;
                                    if(v7 == -1L) {
                                        goto loc_4018DD;
                                    }
                                    else {
                                        sub_4017DC(&v1, 92L, v0, v11);
                                    }
                                }
                            }
                            while(v24 > 1L) {
                                sub_4017DC(&v1, 92L, v0, v11);
                                v24 -= 2L;
                            }
                            if(((unsigned char)v7 & 0x1)) {
                                sub_4017DC(&v1, 34L, v0, v11);
                                j = (unsigned long long)(v5 - 1L);
                                if(!j) {
                                    goto loc_4018DD;
                                }
                            }
                            char v25 = (unsigned char)v9 < 1;
                            v9 = 3L;
                            j -= (unsigned long long)v25;
                            v7 = j + 1L;
                            while(v7 >= v9) {
                                v9 += 3L;
                                sub_4017DC(&v1, 34L, v0, v11);
                            }
                            v11 = 3L;
                            v0 = (long long)(j % 3L);
                            v9 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v9 >>> 8L) & 0xffffffffffffffL) << 8);
                            goto loc_4018DD;
                        }
                        sub_4017DC(&v1, i, v0, v11);
                        sub_4017B1(&v1, param1, param2, param3);
                    }
                    sub_4017DC(&v1, 0L, v0, v11);
                    continue loc_401853;
                }
            }
        }
        while(v2);
    }
    sub_4017DC(&v1, 0L, param2, param3);
    if(v10) {
        --v10;
        long long v26 = v20 - v15;
        *(char*)(((unsigned long long)v26 <= v10 ? v26: v10) + v15) = 0;
    }
    if(v6) {
        unsigned long long v27 = v6 - 1L;
        *(long long*)((v18 < v27 ? v18: v27) * 8L + v19) = 0L;
    }
    return (unsigned long long)(unsigned int)v18;
}

long long sub_401AC6() {
    return gvar_4362C8();
}

long long sub_401ACC() {
    return gvar_4362D0();
}

unsigned long long sub_401AD2(long long param0, long long param1, unsigned long long param2) {
    unsigned long long v0 = (unsigned int)param1 & 0xf ? (unsigned long long)((0 - ((unsigned int)param1 + 16)) & 0xf): (unsigned long long)((unsigned int)param1 & 0xf);
    long long v1 = v0 + param1;
    unsigned long long v2 = param2 - v0;
    *(long long*)(param0 + 40L) = v1;
    *(unsigned long long*)(param0 + 16L) = v2;
    *(long long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long long result = gvar_4367C0;
    *(long long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long long*)(param0 + 48L) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401B19(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long result = 0L;
    long long v8 = v5;
    long long v9 = v3;
    long long v10 = param0;
    long long v11 = v4;
    long long* ptr0 = *(unsigned long long*)(param0 + 0x388L);
    char v12 = ptr0 ? 0: 1;
    if(!v12) {
        int v13 = *(int*)(ptr0 + 3);
        char v14 = (unsigned char)v13 & 0x1 ? 0: 1;
        if(!v14) {
            int v15 = v13 & 0x8;
            if(!(v13 & 0x8)) {
                param0 = *ptr0;
                unsigned long long v16 = (unsigned long long)(((unsigned int)param0 & 0xf ? (unsigned long long)((0 - ((unsigned int)param0 + 16)) & 0xf): (unsigned long long)((unsigned int)param0 & 0xf)) + param0);
                result = 0L;
                long long v17 = *(long long*)(v16 + 8L);
                if(!((unsigned long long)((unsigned int)v17 & 0x3) - 1L)) {
                    result = *(ptr0 + 1);
                    unsigned long long v18 = (unsigned long long)(v17 & 0xfffffffffffffff8L);
                    long long v19 = (long long)(v16 + v18);
                    long long v20 = param0 + result - 80L;
                    if((unsigned long long)v19 >= (unsigned long long)v20) {
                        long long v21 = *(ptr0 + 2);
                        if(*(long long*)(v10 + 32L) == v16) {
                            *(long long*)(v10 + 32L) = 0L;
                            *(long long*)(v10 + 8L) = 0L;
                        }
                        else {
                            long long v22 = *(long long*)(v16 + 24L);
                            long long v23 = *(long long*)(v16 + 48L);
                            if(v22 != v16) {
                                v20 = *(long long*)(v16 + 16L);
                                *(long long*)(v20 + 24L) = v22;
                                *(long long*)(v22 + 16L) = v20;
                            }
                            else {
                                v22 = *(long long*)(v22 + 40L);
                                v19 = (long long)(v16 + 40L);
                                if(!v22) {
                                    v22 = *(long long*)(v16 + 32L);
                                    if(v22) {
                                        v19 = (long long)(v16 + 32L);
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
                                        v20 = *(long long*)(v20 + 40L);
                                        if(v20) {
                                            goto loc_401BFE;
                                        }
                                        else {
                                            v20 = *(long long*)(v22 + 32L);
                                            v19 = v22 + 32L;
                                        }
                                    }
                                    while(v20);
                                    *(long long*)v0 = 0L;
                                }
                            }
                            if(v23) {
                                v19 = (long long)*(int*)(v16 + 56L);
                                v20 = (long long)*(int*)(v16 + 56L) * 8L + v10;
                                if(*(long long*)(v20 + 600L) == v16) {
                                    *(long long*)(v20 + 600L) = v22;
                                    if(v22) {
                                        goto loc_401C49;
                                    }
                                    else {
                                        *(int*)(v10 + 4L) = (__rol__(-2, v19 & 0x1fL)) & *(int*)(v10 + 4L);
                                    }
                                }
                                else {
                                    if(*(long long*)(v23 + 32L) == v16) {
                                        *(long long*)(v23 + 32L) = v22;
                                    }
                                    else {
                                        *(long long*)(v23 + 40L) = v22;
                                    }
                                    if(v22) {
                                    loc_401C49:
                                        long long v24 = *(long long*)(v16 + 32L);
                                        *(long long*)(v22 + 48L) = v23;
                                        if(v24) {
                                            *(long long*)(v22 + 32L) = v24;
                                            *(long long*)(v24 + 48L) = v22;
                                        }
                                        v20 = *(long long*)(v16 + 40L);
                                        if(v20) {
                                            *(long long*)(v22 + 40L) = v20;
                                            *(long long*)(v20 + 48L) = v22;
                                        }
                                    }
                                }
                            }
                        }
                        long long v25 = v21;
                        long long v26 = /*BAD_CALL!*/ sub_403D56(param0, result, v20, v19);
                        int v27 = (unsigned int)v26;
                        if(!v27) {
                            long long v28 = v25;
                            *(long long*)(v10 + 856L) = *(long long*)(v10 + 856L) - result;
                            *(long long*)(v10 + 0x388L) = v28;
                        }
                        else {
                            long long v29 = v18 >>> 8;
                            unsigned int v30 = (unsigned int)v29;
                            if((unsigned int)v29) {
                                v30 = 31;
                                if((unsigned int)v29 <= 0xffff) {
                                    if((unsigned int)v29 != 0) {
                                        int i;
                                        for(i = 31; !((unsigned int)v29 >>> i); --i) {
                                        }
                                        v29 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v29 >>> 32L) << 32);
                                    }
                                    v30 = (unsigned int)((31 - (unsigned int)((unsigned int)v29 ^ 0x1f)) * 2 + ((unsigned int)(long long)(v18 >>> ((unsigned long long)(38 - ((unsigned int)v29 ^ 0x1f)) & 0x3fL)) & 0x1));
                                }
                            }
                            int v31 = *(int*)(v10 + 4L);
                            int v32 = 1 << ((unsigned long long)v30 & 0x1fL);
                            *(unsigned int*)(v16 + 56L) = v30;
                            *(long long*)(v16 + 40L) = 0L;
                            v19 = (long long)v32;
                            *(long long*)(v16 + 32L) = 0L;
                            long long v33 = (long long)v30;
                            if(!(v31 & v32)) {
                                *(int*)(v10 + 4L) = (unsigned int)v19 | v31;
                                *(unsigned long long*)(v33 * 8L + v10 + 600L) = v16;
                                *(long long*)(v16 + 48L) = v33 * 8L + v10 + 600L;
                            loc_401D92:
                                *(unsigned long long*)(v16 + 24L) = v16;
                                *(unsigned long long*)(v16 + 16L) = v16;
                            }
                            else {
                                v20 = *(long long*)(v33 * 8L + v10 + 600L);
                                if(v30 != 31) {
                                    v15 = 57 - (v30 >>> 1);
                                }
                                v19 = (long long)(v18 << ((unsigned long long)v15 & 0x3fL));
                                while((unsigned long long)(*(long long*)(v20 + 8L) & 0xfffffffffffffff8L) != v18) {
                                    long long v34 = v19;
                                    v19 *= 2L;
                                    long long v35 = 4L - (v34 >> 63);
                                    v33 = *(long long*)(v35 * 8L + v20);
                                    if(v33) {
                                        v20 = v33;
                                    }
                                    else {
                                        *(unsigned long long*)(v35 * 8L + v20) = v16;
                                        *(long long*)(v16 + 48L) = v20;
                                        goto loc_401D92;
                                    }
                                }
                                long long v36 = *(long long*)(v20 + 16L);
                                *(unsigned long long*)(v36 + 24L) = v16;
                                *(unsigned long long*)(v20 + 16L) = v16;
                                *(long long*)(v16 + 16L) = v36;
                                *(long long*)(v16 + 24L) = v20;
                                *(long long*)(v16 + 48L) = 0L;
                            }
                            result = 0L;
                            *(long long*)(v10 + 56L) = 128L;
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
    *(long long*)(v10 + 56L) = 128L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401DD6(long long param0, unsigned long long param1, long long param2, long long param3, unsigned long long param4, unsigned long long param5) {
    unsigned long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v2;
    long long v8 = v1;
    long long v9 = v5;
    long long v10 = v6;
    if(param1 <= 18446744073709551487L) {
        long long v11 = *(long long*)(param0 + 40L);
        if(!v11) {
            v6 = 0L;
            return v6 ? 1L: 0L;
        }
        unsigned long long v12 = *(unsigned long long*)(param0 + 16L);
        if(param1 + 80L < v12) {
            unsigned long long* ptr0 = (unsigned long long*)(param0 + 888L);
            unsigned long long* ptr1 = (unsigned long long*)(param0 + 888L);
            do {
                v0 = *ptr1;
                if((unsigned long long)v11 >= v0) {
                    param5 = *(ptr1 + 1);
                    param4 = v0 + param5;
                    if((unsigned long long)v11 >= param4) {
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
            long long v13 = (unsigned long long)*(int*)(ptr1 + 3);
            if(((unsigned char)v13 & 0x8) || !((unsigned char)v13 & 0x1)) {
                goto loc_401E0A;
            }
            else {
                unsigned long long v14 = gvar_4367B0;
                v6 = ((unsigned long long)(v12 + v14 - 81L - param1) / v14 - 1L) * v14;
                if((unsigned long long)v6 > param5) {
                    goto loc_401E0A;
                }
                else {
                    while(1) {
                        if((unsigned long long)ptr0 >= v0 && (unsigned long long)ptr0 < param4) {
                            goto loc_401E0A;
                        }
                        else {
                            ptr0 = *(ptr0 + 2);
                            if(!ptr0) {
                                unsigned long long v15 = param5 - v6;
                                long long v16 = sub_404008();
                                if(!(v16 + 1L)) {
                                    long long v17 = /*BAD_CALL!*/ sub_403D56(*ptr1 + v15, v6, v4, v3);
                                    if((unsigned int)v17) {
                                        goto loc_401E0A;
                                    }
                                }
                                if(v6) {
                                    *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) - v6;
                                    unsigned long long v18 = *(unsigned long long*)(param0 + 16L);
                                    *(long long*)(param0 + 856L) = *(long long*)(param0 + 856L) - v6;
                                    sub_401AD2(param0, *(long long*)(param0 + 40L), v18 - v6);
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
            if(*(unsigned long long*)(param0 + 16L) <= (unsigned long long)*(long long*)(param0 + 48L)) {
                v6 = 0L;
                return v6 ? 1L: 0L;
            }
            *(long long*)(param0 + 48L) = -1L;
        }
    }
    else {
        v6 = 0L;
    }
    return v6 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401F12(long long param0, long long param1, long long param2, long long param3) {
    long long* ptr0;
    long long v0;
    long long* ptr1;
    long long* ptr2;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v3;
    long long v6 = param0;
    param0 = param1;
    long long result = *(long long*)(param0 + 8L);
    param1 += param2;
    if(!((unsigned char)result & 0x1)) {
        v1 = *(long long*)param0;
        param0 -= v1;
        if((unsigned char)result & 0x3) {
            param2 += v1;
            if(*(long long*)(v6 + 32L) == param0) {
                result = *(long long*)(param1 + 8L);
                if(((unsigned int)result & 0x3) == 3) {
                    *(long long*)(v6 + 8L) = param2;
                    *(long long*)(param1 + 8L) = result & 0xfffffffffffffffeL;
                    result = param2 | 0x1L;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)param1 = param2;
                    return result;
                }
                goto loc_40209E;
            }
            else {
                long long v7 = v1;
                result = *(long long*)(param0 + 24L);
                param3 = v7 >>> 3;
            }
            if((unsigned long long)v1 <= 0xffL) {
                unsigned long long v8 = *(unsigned long long*)(param0 + 16L);
                char v9 = result == v8;
                if(v9) {
                    result = (long long)__rol__(-2, param3 & 0x1fL);
                    *(int*)v6 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v6;
                }
                else {
                    *(long long*)(v8 + 24L) = result;
                    *(unsigned long long*)(result + 16L) = v8;
                }
            }
            else {
                char v10 = result == param0;
                long long v11 = *(long long*)(param0 + 48L);
                if(!v10) {
                    param3 = *(long long*)(param0 + 16L);
                    *(long long*)(param3 + 24L) = result;
                    *(long long*)(result + 16L) = param3;
                }
                else {
                    result = *(long long*)(param0 + 40L);
                    ptr2 = (long long*)(param0 + 40L);
                    if(!result) {
                        result = *(long long*)(param0 + 32L);
                        if(result) {
                            ptr2 = (long long*)(param0 + 32L);
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
                            ptr2 = (long long*)(param3 + 40L);
                            param3 = *(long long*)(param3 + 40L);
                            if(param3) {
                                goto loc_401FD2;
                            }
                            else {
                                param3 = *(long long*)(result + 32L);
                                ptr2 = (long long*)(result + 32L);
                            }
                        }
                        while(param3);
                        *ptr1 = 0L;
                    }
                }
                if(v11) {
                    long long v12 = (long long)*(int*)(param0 + 56L);
                    param3 = (long long)*(int*)(param0 + 56L);
                    ptr2 = (long long*)(v12 * 8L + v6);
                    if(*(ptr2 + 75) == param0) {
                        char v13 = result ? 0: 1;
                        *(ptr2 + 75) = result;
                        if(!v13) {
                            goto loc_402022;
                        }
                        else {
                            result = (long long)__rol__(-2, param3 & 0x1fL);
                            *(int*)(v6 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v6 + 4L);
                        }
                    }
                    else {
                        if(*(long long*)(v11 + 32L) == param0) {
                            *(long long*)(v11 + 32L) = result;
                        }
                        else {
                            *(long long*)(v11 + 40L) = result;
                        }
                        if(result) {
                        loc_402022:
                            long long v14 = *(long long*)(param0 + 32L);
                            *(long long*)(result + 48L) = v11;
                            if(v14) {
                                *(long long*)(result + 32L) = v14;
                                *(long long*)(v14 + 48L) = result;
                            }
                            param3 = *(long long*)(param0 + 40L);
                            if(param3) {
                                *(long long*)(result + 40L) = param3;
                                *(long long*)(param3 + 48L) = result;
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
            *(long long*)(v6 + 856L) = *(long long*)(v6 + 856L) - v0;
            return result;
        }
    }
    else {
    loc_40209E:
        v1 = *(long long*)(param1 + 8L);
        if(!((unsigned char)v1 & 0x2)) {
            char v15 = *(long long*)(v6 + 40L) == param1;
            ptr1 = *(unsigned long long*)(v6 + 32L);
            if(!v15) {
                if(param1 == ptr1) {
                    param2 += *(long long*)(v6 + 8L);
                    *(long long*)(v6 + 32L) = param0;
                    *(long long*)(v6 + 8L) = param2;
                    result = param2 | 0x1L;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + param0) = param2;
                }
                else {
                    v1 &= -8L;
                    long long v16 = *(long long*)(param1 + 24L);
                    long long v17 = v1;
                    param2 += v1;
                    param3 = v17 >>> 3;
                    if((unsigned long long)v1 <= 248L) {
                        param1 = *(long long*)(param1 + 16L);
                        if(v16 == param1) {
                            *(int*)v6 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v6;
                        }
                        else {
                            *(long long*)(param1 + 24L) = v16;
                            *(long long*)(v16 + 16L) = param1;
                        }
                    }
                    else {
                        v1 = *(long long*)(param1 + 48L);
                        if(v16 != param1) {
                            param3 = *(long long*)(param1 + 16L);
                            *(long long*)(param3 + 24L) = v16;
                            *(long long*)(v16 + 16L) = param3;
                        }
                        else {
                            v16 = *(long long*)(param1 + 40L);
                            ptr2 = (long long*)(param1 + 40L);
                            if(!v16) {
                                v16 = *(long long*)(param1 + 32L);
                                if(v16) {
                                    ptr2 = (long long*)(param1 + 32L);
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
                                    ptr2 = (long long*)(param3 + 40L);
                                    param3 = *(long long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_402180;
                                    }
                                    else {
                                        param3 = *(long long*)(v16 + 32L);
                                        ptr2 = (long long*)(v16 + 32L);
                                    }
                                }
                                while(param3);
                                *ptr0 = 0L;
                            }
                        }
                        if(v1) {
                            param3 = (long long)*(int*)(param1 + 56L);
                            ptr2 = (long long*)((long long)*(int*)(param1 + 56L) * 8L + v6);
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
                                if(*(long long*)(v1 + 32L) == param1) {
                                    *(long long*)(v1 + 32L) = v16;
                                }
                                else {
                                    *(long long*)(v1 + 40L) = v16;
                                }
                                if(v16) {
                                loc_4021CC:
                                    long long v18 = *(long long*)(param1 + 32L);
                                    *(long long*)(v16 + 48L) = v1;
                                    if(v18) {
                                        *(long long*)(v16 + 32L) = v18;
                                        *(long long*)(v18 + 48L) = v16;
                                    }
                                    param3 = *(long long*)(param1 + 40L);
                                    if(param3) {
                                        *(long long*)(v16 + 40L) = param3;
                                        *(long long*)(param3 + 48L) = v16;
                                    }
                                }
                            }
                        }
                    }
                    result = param2 | 0x1L;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + param0) = param2;
                    if(param0 != ptr1) {
                        goto loc_40224E;
                    }
                    else {
                        *(long long*)(v6 + 8L) = param2;
                    }
                }
                return result;
            }
            long long v19 = *(long long*)(v6 + 16L) + param2;
            *(long long*)(v6 + 40L) = param0;
            *(long long*)(v6 + 16L) = v19;
            *(long long*)(param0 + 8L) = v19 | 0x1L;
            if(param0 == ptr1) {
                *(long long*)(v6 + 32L) = 0L;
                *(long long*)(v6 + 8L) = 0L;
                return result;
            }
        }
        else {
            *(long long*)(param1 + 8L) = v1 & 0xfffffffffffffffeL;
            *(long long*)(param0 + 8L) = param2 | 0x1L;
            *(long long*)(param2 + param0) = param2;
        loc_40224E:
            param3 = param2 >>> 3;
            if((unsigned long long)param2 <= 0xffL) {
                int v20 = *(int*)v6;
                param1 = (long long)(1 << (param3 & 0x1fL));
                result = (unsigned long long)((unsigned int)param3 * 2) * 8L + v6 + 72L;
                if(!((unsigned int)param1 & v20)) {
                    *(int*)v6 = (unsigned int)param1 | v20;
                    param2 = result;
                }
                else {
                    param2 = *(long long*)(result + 16L);
                }
                *(long long*)(result + 16L) = param0;
                *(long long*)(param2 + 24L) = param0;
                *(long long*)(param0 + 16L) = param2;
                *(long long*)(param0 + 24L) = result;
            }
            else {
                long long v21 = param2 >>> 8;
                unsigned int v22 = (unsigned int)v21;
                if((unsigned int)v21) {
                    v22 = 31;
                    if((unsigned int)v21 <= 0xffff) {
                        if((unsigned int)v21 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v21 >>> i); --i) {
                            }
                            v21 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v21 >>> 32L) << 32);
                        }
                        v22 = (unsigned int)((31 - (unsigned int)((unsigned int)v21 ^ 0x1f)) * 2 + ((unsigned int)(long long*)(param2 >>> ((unsigned long long)(38 - ((unsigned int)v21 ^ 0x1f)) & 0x3fL)) & 0x1));
                    }
                }
                int v23 = *(int*)(v6 + 4L);
                int v24 = 1 << ((unsigned long long)v22 & 0x1fL);
                *(unsigned int*)(param0 + 56L) = v22;
                *(long long*)(param0 + 40L) = 0L;
                param3 = (long long)v24;
                *(long long*)(param0 + 32L) = 0L;
                v1 = (long long)v22;
                if(!(v23 & v24)) {
                    result = v1 * 8L + v6 + 600L;
                    *(int*)(v6 + 4L) = (unsigned int)param3 | v23;
                    *(long long*)(v1 * 8L + v6 + 600L) = param0;
                    *(long long*)(param0 + 48L) = result;
                loc_402363:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v25 = 0L;
                    param1 = *(long long*)(v1 * 8L + v6 + 600L);
                    if(v22 != 31) {
                        v25 = (unsigned long long)(57 - (v22 >>> 1));
                    }
                    param3 = param2 << (v25 & 0x3fL);
                    while((unsigned long long)(*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != param2) {
                        long long v26 = param3;
                        param3 *= 2L;
                        result = 4L - (v26 >> 63);
                        v1 = *(long long*)(result * 8L + param1);
                        if(v1) {
                            param1 = v1;
                        }
                        else {
                            *(long long*)(result * 8L + param1) = param0;
                            *(long long*)(param0 + 48L) = param1;
                            goto loc_402363;
                        }
                    }
                    result = *(long long*)(param1 + 16L);
                    *(long long*)(result + 24L) = param0;
                    *(long long*)(param1 + 16L) = param0;
                    *(long long*)(param0 + 16L) = result;
                    *(long long*)(param0 + 24L) = param1;
                    *(long long*)(param0 + 48L) = 0L;
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
void sub_403312(long long param0, unsigned long long param1, long long param2, long long param3, long long param4, unsigned long long param5) {
    int v0;
    long long v1;
    unsigned long long v2;
    long long v3;
    unsigned long long v4;
    unsigned long long v5;
    long long v6;
    long long v7;
    if(param0) {
        long long v8 = param0;
        param0 -= 16L;
        long long v9 = v7;
        long long v10 = (long long)param1;
        long long v11 = *(long long*)(v8 - 8L);
        void* ptr0 = (void*)(*(long long*)(v8 - 8L) & 0xfffffffffffffff8L);
        char v12 = (unsigned char)v11 & 0x1 ? 0: 1;
        param1 = (unsigned long long)((long long)ptr0 + param0);
        if(!v12) {
        loc_4034C1:
            v4 = *(unsigned long long*)(param1 + 8L);
            if(!((unsigned char)v4 & 0x2)) {
                char v13 = gvar_436408 == param1;
                v2 = gvar_436400;
                if(v13) {
                    long long* ptr1 = (long long*)(gvar_4363F0 + (long long)ptr0);
                    gvar_436408 = param0;
                    gvar_4363F0 = ptr1;
                    v6 = (long long)((long long)ptr1 | 0x1L);
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr1 | 0x1L);
                    if(param0 == v2) {
                        gvar_436400 = 0L;
                        gvar_4363E8 = 0L;
                    }
                    if(gvar_436410 >= (unsigned long long)ptr1) {
                        goto loc_403815;
                    }
                    else {
                        sub_401DD6(&gvar_4363E0, 0L, v6, v10, v4, param5);
                        return;
                    }
                }
                else if(param1 == v2) {
                    long long* ptr2 = (long long*)(gvar_4363E8 + (long long)ptr0);
                    gvar_436400 = param0;
                    gvar_4363E8 = ptr2;
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr2 | 0x1L);
                    *(unsigned long long*)((long long)ptr2 + param0) = ptr2;
                    goto loc_403815;
                }
                else {
                    v4 &= -8L;
                    long long v14 = *(long long*)(param1 + 24L);
                    unsigned long long v15 = v4;
                    ptr0 = (void*)((long long)ptr0 + v4);
                    v11 = (long long)(v15 >>> 3);
                    if(v4 <= 248L) {
                        param1 = *(unsigned long long*)(param1 + 16L);
                        if(v14 == param1) {
                            gvar_4363E0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E0);
                        }
                        else {
                            *(long long*)(param1 + 24L) = v14;
                            *(unsigned long long*)(v14 + 16L) = param1;
                        }
                    }
                    else {
                        char v16 = v14 == param1;
                        v4 = *(unsigned long long*)(param1 + 48L);
                        if(!v16) {
                            v11 = *(long long*)(param1 + 16L);
                            *(long long*)(v11 + 24L) = v14;
                            *(long long*)(v14 + 16L) = v11;
                        }
                        else {
                            v14 = *(long long*)(param1 + 40L);
                            param5 = param1 + 40L;
                            if(!v14) {
                                v14 = *(long long*)(param1 + 32L);
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
                                    param5 = (unsigned long long)(v11 + 40L);
                                    v11 = *(long long*)(v11 + 40L);
                                    if(v11) {
                                        goto loc_4035DB;
                                    }
                                    else {
                                        v11 = *(long long*)(v14 + 32L);
                                        param5 = (unsigned long long)(v14 + 32L);
                                    }
                                }
                                while(v11);
                                *(long long*)v5 = 0L;
                            }
                        }
                        if(v4) {
                            param5 = (unsigned long long)*(int*)(param1 + 56L);
                            v5 = param5 + 74L;
                            v11 = (long long)param5;
                            if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_436638) == param1) {
                                *(long long*)(v5 * 8L + (long long)&gvar_4363E8) = v14;
                                if(v14) {
                                    goto loc_403629;
                                }
                                else {
                                    gvar_4363E4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E4);
                                }
                            }
                            else {
                                if(*(long long*)(v4 + 32L) == param1) {
                                    *(long long*)(v4 + 32L) = v14;
                                }
                                else {
                                    *(long long*)(v4 + 40L) = v14;
                                }
                                if(v14) {
                                loc_403629:
                                    long long v17 = *(long long*)(param1 + 32L);
                                    *(unsigned long long*)(v14 + 48L) = v4;
                                    if(v17) {
                                        *(long long*)(v14 + 32L) = v17;
                                        *(long long*)(v17 + 48L) = v14;
                                    }
                                    v11 = *(long long*)(param1 + 40L);
                                    if(v11) {
                                        *(long long*)(v14 + 40L) = v11;
                                        *(long long*)(v11 + 48L) = v14;
                                    }
                                }
                            }
                        }
                    }
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr0 | 0x1L);
                    *(void**)((long long)ptr0 + param0) = ptr0;
                    if(param0 == v2) {
                        gvar_4363E8 = ptr0;
                        goto loc_403815;
                    }
                }
            }
            else {
                *(unsigned long long*)(param1 + 8L) = v4 & 0xfffffffffffffffeL;
                *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr0 | 0x1L);
                *(void**)((long long)ptr0 + param0) = ptr0;
            }
            v11 = (long long)((long long)ptr0 >>> 3);
            if((unsigned long long)ptr0 <= 0xffL) {
                unsigned int v18 = gvar_4363E0;
                param1 = (unsigned long long)(1 << (v11 & 0x1fL));
                long long v19 = (unsigned long long)((unsigned int)v11 * 2) * 8L + &gvar_436428;
                if(!((unsigned int)param1 & v18)) {
                    gvar_4363E0 = (unsigned int)((unsigned int)param1 | v18);
                    v6 = v19;
                }
                else {
                    v6 = *(long long*)(v19 + 16L);
                }
                *(long long*)(v19 + 16L) = param0;
                *(long long*)(v6 + 24L) = param0;
                *(long long*)(param0 + 16L) = v6;
                *(long long*)(param0 + 24L) = v19;
            }
            else {
                long long* ptr3 = (long long*)((long long)ptr0 >>> 8);
                v6 = (long long)(unsigned int)ptr3;
                if((unsigned int)ptr3) {
                    v6 = 31L;
                    if((unsigned int)ptr3 <= 0xffff) {
                        if((unsigned int)ptr3 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)ptr3 >>> i); --i) {
                            }
                            ptr3 = (unsigned long long)i | ((unsigned long long)(unsigned int)(long long*)((long long)ptr3 >>> 32L) << 32);
                        }
                        v6 = (long long)((31 - (unsigned int)((unsigned int)ptr3 ^ 0x1f)) * 2 + ((unsigned int)(long long*)((long long)ptr0 >>> ((unsigned long long)(38 - ((unsigned int)ptr3 ^ 0x1f)) & 0x3fL)) & 0x1));
                    }
                }
                unsigned int v20 = gvar_4363E4;
                int v21 = 1 << ((unsigned long long)(unsigned int)v6 & 0x1fL);
                *(int*)(param0 + 56L) = (unsigned int)v6;
                *(long long*)(param0 + 40L) = 0L;
                v11 = (long long)v21;
                *(long long*)(param0 + 32L) = 0L;
                v4 = (unsigned long long)(unsigned int)v6;
                if(!(v20 & v21)) {
                    *(long long*)(v4 * 8L + (long long)&gvar_436638) = param0;
                    gvar_4363E4 = (unsigned int)((unsigned int)v11 | v20);
                    *(long long*)(param0 + 48L) = v4 * 8L + &gvar_436638;
                loc_4037D6:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v22 = 0L;
                    param1 = *(unsigned long long*)(v4 * 8L + (long long)&gvar_436638);
                    if((unsigned int)v6 != 31) {
                        v22 = (unsigned long long)(57 - (unsigned int)((unsigned int)v6 >>> 1));
                    }
                    v11 = (long long)((long long)ptr0 << (v22 & 0x3fL));
                    while((*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != ptr0) {
                        long long v23 = v11;
                        v11 *= 2L;
                        v6 = 4L - (v23 >> 63);
                        v4 = *(unsigned long long*)(v6 * 8L + param1);
                        if(v4) {
                            param1 = v4;
                        }
                        else {
                            *(long long*)(v6 * 8L + param1) = param0;
                            *(unsigned long long*)(param0 + 48L) = param1;
                            goto loc_4037D6;
                        }
                    }
                    long long v24 = *(long long*)(param1 + 16L);
                    *(long long*)(v24 + 24L) = param0;
                    *(long long*)(param1 + 16L) = param0;
                    *(long long*)(param0 + 16L) = v24;
                    *(unsigned long long*)(param0 + 24L) = param1;
                    *(long long*)(param0 + 48L) = 0L;
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
            v4 = *(unsigned long long*)(v8 - 16L);
            param0 -= v4;
            v11 = (unsigned long long)((unsigned char)v11 & 0x3) | ((unsigned long long)((v11 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v11) {
                ptr0 = (void*)((long long)ptr0 + v4);
                if(gvar_436400 == param0) {
                    long long v25 = *(long long*)(param1 + 8L);
                    if(((unsigned int)*(long long*)(param1 + 8L) & 0x3) == 3) {
                        gvar_4363E8 = ptr0;
                        *(long long*)(param1 + 8L) = v25 & 0xfffffffffffffffeL;
                        *(long long*)(param0 + 8L) = (long long)((long long)ptr0 | 0x1L);
                        *(void**)param1 = ptr0;
                        goto loc_403815;
                    }
                    else {
                        goto loc_4034C1;
                    }
                }
                else {
                    unsigned long long v26 = v4;
                    v3 = *(long long*)(param0 + 24L);
                    v11 = (long long)(v26 >>> 3);
                }
                if(v4 <= 0xffL) {
                    unsigned long long v27 = *(unsigned long long*)(param0 + 16L);
                    char v28 = v3 == v27;
                    if(v28) {
                        gvar_4363E0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E0);
                    }
                    else {
                        *(long long*)(v27 + 24L) = v3;
                        *(unsigned long long*)(v3 + 16L) = v27;
                    }
                }
                else {
                    char v29 = v3 == param0;
                    long long v30 = *(long long*)(param0 + 48L);
                    if(!v29) {
                        v11 = *(long long*)(param0 + 16L);
                        *(long long*)(v11 + 24L) = v3;
                        *(long long*)(v3 + 16L) = v11;
                    }
                    else {
                        v3 = *(long long*)(param0 + 40L);
                        param5 = (unsigned long long)(param0 + 40L);
                        if(!v3) {
                            v3 = *(long long*)(param0 + 32L);
                            if(v3) {
                                param5 = (unsigned long long)(param0 + 32L);
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
                                param5 = (unsigned long long)(v11 + 40L);
                                v11 = *(long long*)(v11 + 40L);
                                if(v11) {
                                    goto loc_4033ED;
                                }
                                else {
                                    v11 = *(long long*)(v3 + 32L);
                                    param5 = (unsigned long long)(v3 + 32L);
                                }
                            }
                            while(v11);
                            *(long long*)v2 = 0L;
                        }
                    }
                    if(v30) {
                        param5 = (unsigned long long)*(int*)(param0 + 56L);
                        char v31 = *(unsigned long long*)(param5 * 8L + (long long)&gvar_436638) == param0;
                        v2 = param5 + 74L;
                        v11 = (long long)param5;
                        if(v31) {
                            char v32 = v3 ? 0: 1;
                            *(long long*)(v2 * 8L + (long long)&gvar_4363E8) = v3;
                            if(!v32) {
                                goto loc_40343F;
                            }
                            else {
                                gvar_4363E4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4363E4);
                            }
                        }
                        else {
                            if(*(long long*)(v30 + 32L) == param0) {
                                *(long long*)(v30 + 32L) = v3;
                            }
                            else {
                                *(long long*)(v30 + 40L) = v3;
                            }
                            if(v3) {
                            loc_40343F:
                                long long v33 = *(long long*)(param0 + 32L);
                                *(long long*)(v3 + 48L) = v30;
                                if(v33) {
                                    *(long long*)(v3 + 32L) = v33;
                                    *(long long*)(v33 + 48L) = v3;
                                }
                                v11 = *(long long*)(param0 + 40L);
                                if(v11) {
                                    *(long long*)(v3 + 40L) = v11;
                                    *(long long*)(v11 + 48L) = v3;
                                }
                            }
                        }
                    }
                }
                goto loc_4034C1;
            }
            else {
                v1 = (long long)((long long*)((long long)ptr0 + v4) + 4);
                long long v34 = /*BAD_CALL!*/ sub_403D56(param0, v1, v8, v11);
                v0 = (unsigned int)v34;
            }
        }
        if(!v0) {
            gvar_436738 -= v1;
        }
    }
loc_403815:
}

long long sub_403817(unsigned long long param0, unsigned long long param1, unsigned long long param2, long long $rcx$2) {
    long long v0;
    long long v1 = v0;
    unsigned long long $rdx = 0L;
    long long v2 = $rcx$2;
    if(param0) {
        $rdx = param1 * param0;
        if(((param1 | param0) & 0xffffffffffff0000L)) {
            param2 = $rdx % param0;
            $rdx = $rdx / param0 == param1 ? $rdx: 18446744073709551615L;
        }
    }
    long long $rdi$1 = sub_40238E((long long)$rdx, (long long)param1, (long long)param2, $rcx$2);
    if($rdi$1 && (*(char*)($rdi$1 - 8L) & 0x3)) {
        sub_404562($rdi$1, 0L, $rdx, $rcx$2);
    }
    return $rdi$1;
}

unsigned long long* sub_403873(long long param0, unsigned long long* param1, long long param2, long long param3, long long* param4) {
    unsigned long long* ptr0;
    unsigned long long* ptr1;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v3;
    long long v9 = v4;
    long long v10 = v5;
    unsigned long long* result = param1;
    long long v11 = v6;
    long long v12 = param0;
    param0 = param2;
    long long v13 = v7;
    long long* ptr2 = param4;
    param1 = *(param1 + 1);
    long long* ptr3 = (long long*)((long long)param1 & 0xfffffffffffffff8L);
    if(((unsigned char)param1 & 0x3)) {
        long long* ptr4 = (long long*)((long long)ptr3 + (long long)result);
        if((long long*)(param0 + (long long)result) <= ptr4) {
            v2 = (long long)((long long)ptr3 - param0);
            if((unsigned long long)v2 > 31L) {
                v1 = param0 + (long long)result;
                *(result + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)param1 & 0x1) | param0) | 0x2L);
                *(long long*)(param0 + (long long)result + 8L) = v2 | 0x3L;
                *(ptr4 + 1) = *(ptr4 + 1) | 0x1L;
                sub_401F12(v12, v1, v2, param3);
            }
            return result;
        }
        else if(*(long long*)(v12 + 40L) == ptr4) {
            ptr4 = (long long*)(*(long long*)(v12 + 16L) + (long long)ptr3);
            if((unsigned long long)(long long*)(*(long long*)(v12 + 16L) + (long long)ptr3) <= (unsigned long long)param0) {
            loc_4038A9:
                result = NULL;
            }
            else {
                ptr4 = (long long*)((long long)ptr4 - param0);
                long long* ptr5 = (long long*)(param0 + (long long)result);
                *(result + 1) = (long long*)((long long)(long long*)((long long)(unsigned long long*)((unsigned int)param1 & 0x1) | param0) | 0x2L);
                *(unsigned long long*)(ptr5 + 1) = (long long*)((long long)ptr4 | 0x1L);
                *(unsigned long long*)(v12 + 40L) = ptr5;
                *(unsigned long long*)(v12 + 16L) = ptr4;
            }
            return result;
        }
        else if(*(long long*)(v12 + 32L) != ptr4) {
            unsigned long long v14 = *(unsigned long long*)(ptr4 + 1);
            if(!((unsigned char)v14 & 0x2)) {
                v14 &= -8L;
                param4 = (long long*)((long long)ptr3 + v14);
                if((unsigned long long)param0 <= (unsigned long long)param4) {
                    unsigned long long v15 = *(unsigned long long*)(ptr4 + 3);
                    long long v16 = (long long)((long long)param4 - param0);
                    param3 = (long long)(v14 >>> 3);
                    if(v14 <= 248L) {
                        unsigned long long v17 = *(unsigned long long*)(ptr4 + 2);
                        if(v15 == v17) {
                            *(int*)v12 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v12;
                        }
                        else {
                            *(unsigned long long*)(v17 + 24L) = v15;
                            *(unsigned long long*)(v15 + 16L) = v17;
                        }
                    }
                    else {
                        v14 = *(unsigned long long*)(ptr4 + 6);
                        if(v15 != ptr4) {
                            long long v18 = *(ptr4 + 2);
                            *(unsigned long long*)(v18 + 24L) = v15;
                            *(long long*)(v15 + 16L) = v18;
                        }
                        else {
                            v15 = *(unsigned long long*)(ptr4 + 5);
                            param3 = (long long)(ptr4 + 5);
                            if(!v15) {
                                v15 = *(unsigned long long*)(ptr4 + 4);
                                if(v15) {
                                    param3 = (long long)(ptr4 + 4);
                                    goto loc_403B09;
                                }
                            }
                            else {
                            loc_403B09:
                                unsigned long long v19 = v15;
                            loc_403B0C:
                                do {
                                    v0 = param3;
                                    v15 = v19;
                                    param3 = (long long)(v19 + 40L);
                                    v19 = *(unsigned long long*)(v19 + 40L);
                                    if(v19) {
                                        goto loc_403B0C;
                                    }
                                    else {
                                        v19 = *(unsigned long long*)(v15 + 32L);
                                        param3 = (long long)(v15 + 32L);
                                    }
                                }
                                while(v19);
                                *(long long*)v0 = 0L;
                            }
                        }
                        if(v14) {
                            param3 = (long long)*(int*)(ptr4 + 7);
                            long long* ptr6 = (long long*)((long long)*(int*)(ptr4 + 7) * 8L + v12);
                            if(*(ptr6 + 75) == ptr4) {
                                *(unsigned long long*)(ptr6 + 75) = v15;
                                if(v15) {
                                    goto loc_403B58;
                                }
                                else {
                                    *(int*)(v12 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v12 + 4L);
                                }
                            }
                            else {
                                if(*(long long*)(v14 + 32L) == ptr4) {
                                    *(unsigned long long*)(v14 + 32L) = v15;
                                }
                                else {
                                    *(unsigned long long*)(v14 + 40L) = v15;
                                }
                                if(v15) {
                                loc_403B58:
                                    long long v20 = *(ptr4 + 4);
                                    *(unsigned long long*)(v15 + 48L) = v14;
                                    if(v20) {
                                        *(long long*)(v15 + 32L) = v20;
                                        *(unsigned long long*)(v20 + 48L) = v15;
                                    }
                                    long long v21 = *(ptr4 + 5);
                                    if(v21) {
                                        *(long long*)(v15 + 40L) = v21;
                                        *(unsigned long long*)(v21 + 48L) = v15;
                                    }
                                }
                            }
                        }
                    }
                    long long* ptr7 = (long long*)((long long)param4 + (long long)result);
                    unsigned long long* ptr8 = (unsigned long long*)((unsigned int)param1 & 0x1);
                    if((unsigned long long)v16 <= 31L) {
                        *(result + 1) = (long long*)((long long)(long long*)((long long)ptr8 | (long long)param4) | 0x2L);
                        *(ptr7 + 1) = *(ptr7 + 1) | 0x1L;
                    }
                    else {
                        v1 = param0 + (long long)result;
                        *(result + 1) = (long long*)((long long)(long long*)((long long)ptr8 | param0) | 0x2L);
                        *(unsigned long long*)(v1 + 8L) = (long long*)(v16 | 0x3L);
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
            param3 = *(long long*)(v12 + 8L) + (long long)ptr3;
            if((unsigned long long)param3 < (unsigned long long)param0) {
                goto loc_4038A9;
            }
            else {
                param1 = (unsigned long long*)((unsigned int)param1 & 0x1);
                ptr1 = (unsigned long long*)(param3 + (long long)result);
                param4 = (long long*)(param3 - param0);
                ptr0 = param1;
            }
        }
        if((unsigned long long)param4 > 31L) {
            param3 = param0 + (long long)result;
            *(result + 1) = (long long*)((long long)(long long*)((long long)ptr0 | param0) | 0x2L);
            *(unsigned long long*)(param3 + 8L) = (long long*)((long long)param4 | 0x1L);
            *ptr1 = param4;
            *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) & 0xfffffffffffffffeL;
            *(unsigned long long*)(v12 + 8L) = param4;
            *(long long*)(v12 + 32L) = param3;
        }
        else {
            *(long long*)(result + 1) = (long long)((long long)(long long*)(param3 | (long long)param1) | 0x2L);
            *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) | 0x1L;
            *(long long*)(v12 + 8L) = 0L;
            *(long long*)(v12 + 32L) = 0L;
            return result;
        }
    }
    else if((unsigned long long)param0 <= 0xffL) {
        goto loc_4038A9;
    }
    else {
        unsigned long long v22 = gvar_4367B0;
        if((unsigned long long)(param0 + 8L) > (unsigned long long)ptr3 || (unsigned long long)(long long*)((long long)ptr3 - param0) > (unsigned long long)(unsigned long long*)(v22 * 2L)) {
            unsigned long long v23 = *result;
            long long v24 = (v22 + param0 + 62L) & (0L - v22);
            unsigned long long* ptr9 = (unsigned long long*)((long long*)((long long)ptr3 + v23) + 4);
            long long v25 = sub_404008();
            if(v25 == -1L) {
                goto loc_4038A9;
            }
            else {
                result = (unsigned long long*)(v25 + v23);
                long long v26 = v24 - v23;
                char v27 = *(unsigned long long*)(v12 + 24L) > (unsigned long long)v25;
                *(long long*)(result + 1) = v26 - 32L;
                *((long long*)(v26 + (long long)result) - 3) = 11L;
                *((long long*)(v26 + (long long)result) - 2) = 0L;
                if(v27) {
                    *(long long*)(v12 + 24L) = v25;
                }
                long long* ptr10 = (long long*)(*(long long*)(v12 + 856L) + v24 - (long long)ptr9);
                char v28 = *(long long*)(v12 + 864L) == ptr10;
                char v29 = *(unsigned long long*)(v12 + 864L) > (unsigned long long)ptr10;
                *(unsigned long long*)(v12 + 856L) = ptr10;
                if(!v29 && !v28) {
                    *(unsigned long long*)(v12 + 864L) = ptr10;
                }
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C02(long long param0, unsigned long long param1, long long param2, long long param3, long long param4, unsigned long long param5) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    if(!param0) {
        result = sub_40238E((long long)param1, v0, param2, param3);
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
        unsigned long long* ptr0 = sub_403873(&gvar_4363E0, (unsigned long long*)(param0 - 16L), param1 > 14L ? (param1 + 31L) & 0xfffffffffffffff0L: 32L, 1L, (long long*)param4);
        if(ptr0) {
            result = (long long)(ptr0 + 2);
        }
        else {
            result = sub_40238E((long long)param1, (long long)param1, param2, param3);
            if(result) {
                long long v5 = *(long long*)(param0 - 8L);
                sub_404420(param3, (unsigned long long)((v5 & 0xfffffffffffffff8L) - 16L) <= param1 ? (unsigned long long)((v5 & 0xfffffffffffffff8L) - 16L): param1);
                sub_403312(param0, (unsigned long long)param0, param2, param3, param4, param5);
            }
        }
    }
    return result;
}

void sub_403CBB() {
    char v0 = gvar_4367A0 ? 0: 1;
    char v1 = gvar_4367A0 >= 0x8000000000000000L;
    char v2 = __parity__((unsigned char)gvar_4367A0);
    char v3 = gvar_4367A0 < 0L;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_403CC5: &sub_403D41;
}

long long sub_403CC5() {
    char v0 = gvar_437FA8 == 0x10000;
    char v1 = (int)gvar_437FA8 < 0x10000;
    char v2 = __parity__((unsigned char)gvar_437FA8);
    char v3 = gvar_437FA8 < 0x10000;
    char v4 = (((gvar_437FA8 - 0x10000) ^ gvar_437FA8) & (gvar_437FA8 ^ 0x10000)) < 0;
    char v5 = (((gvar_437FA8 - 0x10000) ^ (gvar_437FA8 ^ 0x10000)) >>> 4) & 0x1;
    long long v6 = 0x10000L;
    long long v7 = v3 ? 0x10000L: (unsigned long long)gvar_437FA8;
    long long v8 = v3 ? 0x10000L: (unsigned long long)gvar_437FA8;
    long long v9 = v8 - 1L;
    char v10 = v8 & v9 ? 0: 1;
    char v11 = (v8 & v9) < 0L;
    char v12 = __parity__((unsigned char)(v8 & v9));
    char v13 = 0;
    char v14 = 0;
    jump v10 ? &sub_403CEF: &sub_403CE6;
}

void sub_403D41() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403D42(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1 = v0;
    long long v2 = v0;
    return sub_403D6A(param0, param1, param2, param3, param4, param5);
}

long long sub_403D6A(long long param0) {
    return sub_403D90(0L, param0, 3L, (unsigned long long)((unsigned int)gvar_436360 | gvar_436368 | 0x2), 0xffffffffL, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404008() {
    return sub_401566();
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404151(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = param2;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v1;
    long long v9 = gvar_4367E0;
    if(!v9) {
        gvar_4367E0 = 4417512L;
        v9 = 4417512L;
    }
    if(*(int*)v9 == -1) {
        long long v10 = sub_401AC6();
        if(v10) {
            *(long long*)(v10 + 8L) = v9;
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
        param2 = (unsigned long long)*(int*)v9;
        unsigned int v11 = (unsigned int)~*(int*)v9;
        if(~*(int*)v9 != 0) {
            unsigned int i;
            for(i = 31; !(v11 >>> i); --i) {
            }
            v11 = i;
        }
        *(int*)v9 = (~(1 << (v11 % 32)) & (unsigned int)param2) | (1 << (v11 % 32));
        long long v12 = (unsigned long long)v11 * 24L + v9;
        result = 0L;
        *(long long*)(v12 + 16L) = param0;
        *(long long*)(v12 + 24L) = param1;
        *(long long*)(v12 + 32L) = v5;
    }
    return result;
}

long long sub_4041E6(unsigned long long param0, long long* param1, long long param2, long long* param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = v2;
    long long result = param2;
loc_4041F8:
    for(int* i = gvar_4367E0; i; i = gvar_4367E0) {
        while(1) {
            long long v6 = (unsigned long long)*i;
            while(v6) {
                if((unsigned int)v6 != 0) {
                    int j;
                    for(j = 0; !(((unsigned int)v6 >>> j) & 0x1); ++j) {
                    }
                    param3 = (unsigned long long)j | ((unsigned long long)(unsigned int)(long long*)((long long)param3 >>> 32L) << 32);
                }
                int v7 = 1 << (long long)(long long*)((long long)param3 & 0x1fL);
                param3 = (long long*)(unsigned int)param3;
                v6 &= (unsigned long long)~v7;
                if(!param0 || *((long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i) + 4) == param0) {
                    *i = ~v7 & *i;
                    param3 = (long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i);
                    param2 = *(param3 + 2);
                    if(param2) {
                        param2((long long)param3);
                        goto loc_4041F8;
                    }
                }
            }
            int* ptr0 = *(unsigned long long*)(i + 2);
            if(!param0) {
                if(ptr0) {
                    sub_401ACC();
                }
                gvar_4367E0 = ptr0;
                goto loc_4041F8;
            }
            else if(!ptr0) {
                return result;
            }
            else {
                i = ptr0;
            }
        }
    }
    return result;
}

long long sub_40436D(long long param0, int* param1, long long param2, long long param3) {
    return sub_4043AF(param0, param1, param2, param3);
}

long long sub_40437C(int param0, long long param1, long long param2, long long param3) {
    long long v0 = (unsigned long long)param0;
    long long v1 = 0L;
    if((unsigned int)v0 > 127) {
        if((unsigned int)v0 != 0) {
            int i;
            for(i = 31; !((unsigned int)v0 >>> i); --i) {
            }
            param3 = (unsigned long long)i | ((unsigned long long)(unsigned int)(param3 >>> 32L) << 32);
        }
        long long v2 = (unsigned long long)*(int*)&aKernelBase_dll[param3 * 2L + 1L];
        do {
            long long v3 = (unsigned long long)(unsigned int)v0;
            v0 = (unsigned long long)((unsigned int)v0 >>> 6);
            v1 = ((unsigned long long)(((unsigned char)v3 & 0x3f) | (unsigned char)v1 | 0x80) | ((unsigned long long)((v1 >>> 8L) & 0xffffffffffffffL) << 8)) * 0x100L;
            v2 = (unsigned long long)((unsigned char)v2 + 0xff) | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
        }
        while((unsigned char)v2);
        v1 = (unsigned long long)((unsigned char)(v2 >>> 8L) | (unsigned char)v1) | ((unsigned long long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    return v1 | v0;
}

long long sub_4043AF(long long param0, int* param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    int v2;
    long long v3;
    long long v4;
    long long result = 0L;
    long long v5 = v3;
    long long v6 = param3;
    long long v7 = param2;
    do {
        v4 = (unsigned long long)(unsigned int)result;
        v2 = (unsigned int)result;
        result = (unsigned long long)((unsigned int)result + 1);
        v1 = (unsigned long long)*(short*)(v4 * 2L + param0);
        v0 = (unsigned long long)(*(short*)(v4 * 2L + param0) & 0xfc00) | ((unsigned long long)(((unsigned long long)(unsigned int)v1 >>> 16L) & 0xffffffffffffL) << 16);
    }
    while((*(short*)(v4 * 2L + param0) & 0xfc00) == 0xdc00);
    if((unsigned short)v0 != 0xd800) {
        *param1 = (unsigned int)v1;
    }
    else {
        long long v8 = (unsigned long long)*(short*)(result * 2L + param0);
        if((*(short*)(result * 2L + param0) & 0xfc00) != 0xdc00) {
            *param1 = 0xfffd;
            result = 0xffffffffL;
        }
        else {
            *param1 = (unsigned int)v1 * 0x400 + (unsigned int)v8 - 56613888;
            result = (unsigned long long)(v2 + 2);
        }
    }
    return result;
}

void sub_404420(long long param0, unsigned long long param1) {
    long long v0;
    long long* ptr0 = &v0;
    v0 = param0;
    long long v1 = 32L;
    char v2 = param1 == 32L;
    char v3 = (long long)param1 < 32L;
    char v4 = __parity__((unsigned char)param1 - 32);
    char v5 = param1 < 32L;
    char v6 = (((param1 - 32L) ^ param1) & (param1 ^ 0x20L)) < 0L;
    char v7 = (((param1 - 32L) ^ (param1 ^ 0x20L)) >>> 4L) & 0x1L;
    unsigned long long v8 = v5 ? param1: 32L;
    jump *(long long*)(v8 * 8L + 4415640L);
}

void sub_404562(long long $rdi$1, int $esi, unsigned long long $rdx, long long $rcx$2) {
    // Decompilation error
}

void sub_4046D1(char param0) {
    while(1) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
}

long long sub_4046FA(int param0, unsigned long long param1) {
    int v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_436360;
            v0 = (unsigned long long)((long long)v1 & param1) == param1 ? 64: 128;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long long v2 = gvar_436360;
            v0 = (unsigned long long)((long long)(unsigned int)param1 & v2) == v2 ? 4: 8;
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
    return (unsigned long long)(((v1 | param0) & 0xdd000000) | v0);
}
