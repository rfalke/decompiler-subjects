
void start(long long param0, long long param1) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    long long* ptr0;
    long long v4;
    long long v5;
    long long* ptr1;
    char v6;
    long long v7;
    char v8;
    long long v9;
    long long v10;
    void* ptr2;
    char v11;
    unsigned int v12;
    long long v13;
    long long v14;
    long long v15;
    long long* ptr3;
    while(1) {
        long long* ptr4 = ptr1;
        long long v16 = v14;
        long long v17 = v4;
        long long v18 = v15;
        long long v19 = v5;
        long long v20 = 0L;
        long long v21 = 0L;
        BOOL v22 = SetDefaultDllDirectories(0x800);
        if(!(unsigned int)v22) {
            HANDLE hFile = GetStdHandle(0xfffffff4);
            LPOVERLAPPED v23 = NULL;
            WriteFile(hFile, "nodll\n", 6, &v8, NULL);
            /*NO_RETURN*/ ExitProcess(1);
        }
        gvar_440668 = 4;
        LPWSTR v24 = GetCommandLineW();
        LPWCH v25 = GetEnvironmentStringsW();
        long long v26 = (long long)v24;
        LPWCH v27 = v25;
        long long v28 = sub_401BAD(v26, &v6, 0x3fffL, &v9, 0x200L);
        v15 = (long long)(unsigned int)v28;
        long long v29 = 0L;
        while(1) {
            v3 = v29 + v9;
            param1 = (unsigned long long)*(char*)v3 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!*(char*)v3) {
                break;
            }
            else {
                if((unsigned char)param1 == 92) {
                    *(char*)v3 = 47;
                }
                ++v29;
            }
        }
        long long v30 = (unsigned long long)v27[0];
        if(v27[0] <= 55295) {
            v2 = (unsigned int)v30;
            v1 = 1L;
        }
        else {
            long long v31 = (long long)v27;
            v1 = sub_404E4D(v31, &v2, param1, v3);
        }
        long long v32 = (unsigned long long)(unsigned int)v1;
        long long v33 = (long long)&v8;
        long long v34 = v32 * 2L;
        unsigned long long v35 = 0L;
        long long v36 = v34 + (long long)v27;
        while(v2) {
            ++v35;
            if(v35 <= 0x1ffL) {
                *(long long*)(v35 * 8L + (long long)&v21) = (unsigned long long)v33 < (unsigned long long)&v11 ? v33: 0L;
            }
            do {
                v12 = v2;
                char v37 = v2 == 127;
                char v38 = v12 < 127;
                long long v39 = (long long)v12;
                if(!v38 && !v37) {
                    long long v40 = (long long)v12;
                    v39 = sub_404E5C(v40, (long long)&v2, v36, v33);
                }
                while((unsigned long long)v33 < (unsigned long long)&v11) {
                    ++v33;
                    *(char*)(v33 - 1L) = (unsigned char)v39;
                    v39 >>>= 8;
                    if(!v39) {
                        break;
                    }
                }
                long long v41 = (unsigned long long)*(short*)v36;
                if(*(unsigned short*)v36 <= 55295) {
                    v2 = (unsigned int)v41;
                    v0 = 1L;
                }
                else {
                    long long v42 = v36;
                    v0 = sub_404E4D(v42, &v2, v36, v33);
                }
                v36 += (unsigned long long)(unsigned int)v0 * 2L;
            }
            while(v12);
            long long* ptr5 = (long long*)(v33 - (long long)&v8);
            char v43 = ptr5 == 32765L;
            *(char*)((long long*)((long long)((unsigned long long)ptr5 < 32765L || v43 ? ptr5: (long long*)0x7FFD) + (long long)&v7) - 0x1006) = 0;
        }
        if((unsigned long long)v33 < (unsigned long long)&v11) {
            *(char*)v33 = 0;
            ++v33;
        }
        long long* ptr6 = (long long*)(v33 - (long long)&v8);
        v14 = &v10;
        char v44 = ptr6 == 0x7ffeL;
        char v45 = (unsigned long long)ptr6 < 0x7ffeL;
        ptr1 = &v20;
        long long* ptr7 = v45 || v44 ? ptr6: (long long*)0x7FFE;
        unsigned long long v46 = v35 <= 0x1ffL ? v35: 0x1ffL;
        *(char*)((long long)ptr7 + (long long)&v8) = 0;
        LPWCH penv = v27;
        *(long long*)(v46 * 8L + &v10) = 0L;
        v4 = &v9;
        FreeEnvironmentStringsW(penv);
        v5 = &MZHeader;
        unsigned long long* ptr8 = (unsigned long long*)((long long*)((long long)&ptr2 & 0xfffffffffffffff0L) - 1);
        sub_4012F0();
        gvar_443C74 |= 1;
        long long* ptr9 = (long long*)&gvar_406008;
        long long v47 = 0x406010L;
        while(ptr9 != v47) {
            --ptr8;
            *ptr8 = ptr9;
            --ptr8;
            *ptr8 = v47;
            --ptr8;
            *ptr8 = &loc_401601;
            /*BAD_CALL!*/ *ptr9{sub_4014E0}(v47, v13);
            v47 = *ptr8;
            ++ptr8;
            long long v48 = *ptr8;
            ++ptr8;
            ptr9 = (long long*)(v48 + 8L);
        }
        long long v49 = v15;
        --ptr8;
        *ptr8 = &loc_401618;
        long long v50 = /*BAD_CALL!*/ sub_4014CE(v49, &v9, &v10);
        long long v51 = (long long)(unsigned int)v50;
        --ptr8;
        *ptr8 = &sub_40161F;
        /*NO_RETURN*/ sub_4018AE(v51, ptr3, v13, ptr0);
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
    char v0;
    long long v1;
    long long v2;
    char v3;
    long long v4;
    long long v5;
    char v6;
    char v7;
    long long v8;
    char* ptr1;
    long long v9;
    long long* ptr2;
    char* ptr3;
    long long v10;
    char v11;
    unsigned long long* ptr4;
    long long v12;
    long long v13;
    long long* ptr5 = &v1;
    long long v14 = &gvar_440000;
    char* ptr6 = (char*)&gvar_4058F0;
    (long long v13, long long v4) = rdtsc();
    *(int*)&gvar_440000 = (unsigned int)v13;
    int* ptr7 = (int*)0x440004;
    int v15 = (unsigned int)v13;
    int v16 = (unsigned int)v4;
    int v17 = 0;
    long long v18 = (unsigned long long)v15;
    *(int*)((char*)&gvar_440000 + 4) = v16;
    unsigned char* ptr8 = (unsigned char*)&gvar_440008;
    long long v19 = v5;
    long long v20 = 0L;
    long long v21 = 22L;
    long long v22 = 0xffffffff80000007L;
    long long v23 = 0xffffffff80000001L;
    long long v24 = 7L;
    long long v25 = 2L;
    long long* ptr9 = &v2;
    v2 = 1L;
    unsigned char* ptr10 = (unsigned char*)&gvar_440008;
    long long v26 = 0L;
    char v27 = 1;
    char v28 = 0;
    char v29 = 1;
    char v30 = 0;
    char v31 = 0;
    do {
        long long v32 = 0L;
        char v33 = 1;
        char v34 = 0;
        char v35 = 1;
        char v36 = 0;
        char v37 = 0;
        (long long v9, long long v8, long long v10, long long v12) = cpuid(v26, 0L);
        *(int*)ptr8 = (unsigned int)v9;
        int* ptr11 = (int*)(ptr8 + 4L);
        int v38 = (unsigned int)v9;
        int v39 = (unsigned int)v8;
        int v40 = 0;
        long long v41 = (unsigned long long)v38;
        *ptr11 = v39;
        int* ptr12 = ptr11 + 1;
        int v42 = v39;
        int v43 = (unsigned int)v10;
        int v44 = 0;
        long long v45 = (unsigned long long)v42;
        *ptr12 = v43;
        int* ptr13 = ptr12 + 1;
        int v46 = v43;
        int v47 = (unsigned int)v12;
        int v48 = 0;
        long long v49 = (unsigned long long)v46;
        *ptr13 = v47;
        ptr8 = (unsigned char*)(ptr13 + 1);
    loc_401328:
        while(1) {
            v26 = *ptr9;
            ++ptr9;
            char v50 = (unsigned int)v26 ? 0: 1;
            char v51 = (unsigned int)v26 < 0;
            char v52 = __parity__((unsigned char)v26);
            char v53 = 0;
            char v54 = 0;
            if(v50) {
                long long v55 = *ptr9;
                ++ptr9;
                long long v56 = &gvar_404F07;
                long long v57 = (unsigned long long)(unsigned char)v45 | ((unsigned long long)17 << 8) | ((unsigned long long)((v45 >>> 16L) & 0xffffffffffffL) << 16);
                do {
                    char v58 = 1;
                    char v59 = 0;
                    char v60 = 1;
                    char v61 = 0;
                    char v62 = 0;
                    unsigned long long v63 = (unsigned long long)*ptr6;
                    char* ptr14 = ptr6 + 1L;
                    v57 = (unsigned long long)(unsigned char)v63 | ((unsigned long long)((v57 >>> 8L) & 0xffffffffffffffL) << 8);
                    v63 = (unsigned long long)*ptr14 | ((unsigned long long)((v63 >>> 8L) & 0xffffffffffffffL) << 8);
                    ptr6 = ptr14 + 1L;
                    unsigned long long v64 = v63;
                    v26 = (long long)(v63 + &gvar_404F07);
                    char v65 = v26 ? 0: 1;
                    char v66 = v26 < 0L;
                    char v67 = __parity__((unsigned char)v26);
                    char v68 = (((v64 ^ &gvar_404F07) ^ v26) >>> 4L) & 0x1L;
                    char v69 = v64 >= 0xffffffffffbfb0f9L;
                    char v70 = ((v26 ^ v64) & ~(v64 ^ &gvar_404F07)) < 0L;
                    do {
                        *(long long*)ptr8 = v26;
                        ptr8 += 8L;
                        char v71 = (unsigned char)v57;
                        v57 = (unsigned long long)((unsigned char)v57 + 0xff) | ((unsigned long long)((v57 >>> 8L) & 0xffffffffffffffL) << 8);
                        v0 = (unsigned char)v57 ? 0: 1;
                        char v72 = (v57 >>> 7L) & 0x1L;
                        char v73 = __parity__((unsigned char)v57);
                        char v74 = ((~(unsigned char)v57 ^ ~v71) >>> 4) & 0x1;
                        char v75 = (((unsigned char)v57 ^ v71) & v71) < 0;
                    }
                    while(!v0);
                    char v76 = (unsigned char)(v57 >>> 8L);
                    v57 = (unsigned long long)(unsigned char)v57 | ((unsigned long long)((unsigned char)(v57 >>> 8L) + 0xff) << 8) | ((unsigned long long)((v57 >>> 16L) & 0xffffffffffffL) << 16);
                    v3 = (unsigned char)(v57 >>> 8L) ? 0: 1;
                    char v77 = (v57 >>> 15L) & 0x1L;
                    char v78 = __parity__((unsigned char)(v57 >>> 8L));
                    char v79 = ((~(unsigned char)(v57 >>> 8L) ^ ~v76) >>> 4) & 0x1;
                    char v80 = (((unsigned char)(v57 >>> 8L) ^ v76) & v76) < 0;
                }
                while(!v3);
                char* ptr15 = ptr6;
                long long v81 = (long long)(ptr6 + 6L);
                char v82 = v81 ? 0: 1;
                char v83 = v81 < 0L;
                char v84 = __parity__((unsigned char)v81);
                char v85 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr15 ^ 0x6L) ^ v81) >>> 4L) & 0x1L);
                char v86 = (unsigned long long)ptr15 >= 18446744073709551610L;
                char v87 = (long long)(long long*)((long long)(long long*)(v81 ^ (long long)ptr15) & (long long*)~(long long)(long long*)((long long)ptr15 ^ 0x6L)) < 0L;
                unsigned long long* ptr16 = ptr4;
                *(unsigned long long**)ptr8 = ptr4;
                long long v88 = (long long)(ptr8 + 8L);
                --ptr9;
                *ptr9 = &loc_401362;
                HANDLE v89 = /*BAD_CALL!*/ sub_40161F(v88, v81);
                --ptr9;
                *ptr9 = &loc_401367;
                char v90 = /*BAD_CALL!*/ sub_40189D(ptr1, ptr3);
                long long v91 = -1L;
                char v92 = 0;
                char v93 = 1;
                char v94 = 1;
                char v95 = 0;
                char v96 = 0;
                *(long long*)&ptr1[0] = 0xffff;
                long long* ptr17 = (long long*)(ptr1 + 8L);
                *ptr17 = -1L;
                long long* ptr18 = ptr17 + 1;
                long long v97 = &gvar_40517E;
                *ptr18 = &gvar_40517E;
                long long* ptr19 = ptr18 + 1;
                --ptr9;
                *ptr9 = 32L;
                long long v98 = 32L;
                long long v99 = &gvar_404F84;
                char v100 = gvar_440023 & 0x10 ? 0: 1;
                char v101 = (char)(gvar_440023 & 0x10) < 0;
                char v102 = __parity__(gvar_440023 & 0x10);
                char v103 = 0;
                char v104 = 0;
                *ptr9 = &loc_40138A;
                long long v105 = /*BAD_CALL!*/ sub_40186F(ptr19, ptr3, &gvar_404F84, 32);
                --ptr9;
                *ptr9 = 32L;
                long long v106 = 32L;
                long long v107 = &gvar_4050CC;
                char v108 = gvar_44003C & 0x20 ? 0: 1;
                char v109 = (char)(gvar_44003C & 0x20) < 0;
                char v110 = __parity__(gvar_44003C & 0x20);
                char v111 = 0;
                char v112 = 0;
                *ptr9 = &loc_40139E;
                long long v113 = /*BAD_CALL!*/ sub_40186F((long long*)ptr1, ptr3, &gvar_4050CC, 32);
                char v114 = *ptr2;
                *(long long*)&ptr1[0] = *ptr2;
                long long* ptr20 = (long long*)(ptr1 + 8L);
                long long v115 = &gvar_4051E0;
                *ptr20 = &gvar_4051E0;
                char* ptr21 = (char*)(ptr20 + 1);
                --ptr9;
                *ptr9 = v55;
                --ptr9;
                *ptr9 = ptr3;
                char v116 = *ptr21 & 0x8 ? 0: 1;
                char v117 = (*ptr21 & 0x8) < 0;
                char v118 = __parity__(*ptr21 & 0x8);
                char v119 = 0;
                char v120 = 0;
                if(v116) {
                    char v121 = *ptr21 & 0x20 ? 0: 1;
                    char v122 = (*ptr21 & 0x20) < 0;
                    char v123 = __parity__(*ptr21 & 0x20);
                    char v124 = 0;
                    char v125 = 0;
                    if(v121) {
                        char v126 = *ptr21 & 0x4 ? 0: 1;
                        char v127 = (*ptr21 & 0x4) < 0;
                        char v128 = __parity__(*ptr21 & 0x4);
                        char v129 = 0;
                        char v130 = 0;
                        if(v126) {
                            char v131 = *ptr4 ? 0: 1;
                            char v132 = *ptr4 < 0L;
                            char v133 = __parity__((unsigned char)*ptr4);
                            char v134 = *ptr4 < 0L;
                            char v135 = 0;
                            char v136 = 0;
                            --ptr9;
                            if(!v131) {
                                *ptr9 = 0L;
                                --ptr9;
                                *ptr9 = 1L;
                                ptr0 = (char*)&gvar_4059B6;
                            }
                            else {
                                *ptr9 = 42L;
                                --ptr9;
                                *ptr9 = 16L;
                                ptr0 = (char*)&gvar_4059E1;
                            }
                        }
                        else {
                            --ptr9;
                            *ptr9 = 34L;
                            --ptr9;
                            *ptr9 = 4L;
                            ptr0 = (char*)&gvar_405A0D;
                        }
                    }
                    else {
                        --ptr9;
                        *ptr9 = 48L;
                        --ptr9;
                        *ptr9 = 32L;
                        ptr0 = (char*)&gvar_405989;
                    }
                }
                else {
                    --ptr9;
                    *ptr9 = 69L;
                    --ptr9;
                    *ptr9 = 8L;
                    ptr0 = (char*)&gvar_405A52;
                }
                long long v137 = &gvar_404DF0;
                long long v138 = *ptr9;
                ++ptr9;
                *(long long*)ptr21 = v138;
                long long* ptr22 = (long long*)(ptr21 + 8L);
                long long v139 = *ptr9;
                unsigned long long v140 = *ptr9;
                long long v141 = v139 + &gvar_404DF0;
                char v142 = v141 ? 0: 1;
                char v143 = v141 < 0L;
                char v144 = __parity__((unsigned char)v141);
                char v145 = (((v140 ^ &gvar_404DF0) ^ v141) >>> 4L) & 0x1L;
                char v146 = v140 >= 0xffffffffffbfb210L;
                char v147 = ((v141 ^ v140) & ~(v140 ^ &gvar_404DF0)) < 0L;
                *ptr22 = v141;
                long long* ptr23 = ptr22 + 1;
                *ptr9 = ptr22 + 1;
                unsigned long long* ptr24 = (unsigned long long*)&gvar_440698;
                long long v148 = -1L;
                char v149 = 0;
                char v150 = 1;
                char v151 = 1;
                char v152 = 0;
                char v153 = 0;
                long long v154 = 4458400L;
                while(1) {
                    char v155 = ptr24 == 4458400L;
                    char v156 = (long long)ptr24 < 4458400L;
                    char v157 = __parity__((unsigned char)ptr24 - 160);
                    char v158 = (unsigned long long)ptr24 < 4458400L;
                    char v159 = (long long)(long long*)((long long)(long long*)((long long)(long long*)(ptr24 - 557300) ^ (long long)ptr24) & (long long)(long long*)((long long)ptr24 ^ 0x4407a0L)) < 0L;
                    char v160 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(ptr24 - 557300) ^ (long long)(long long*)((long long)ptr24 ^ 0x4407a0L)) >>> 4L) & 0x1L);
                    if(!v158) {
                    loc_40144E:
                        long long* ptr25 = *ptr9;
                        ++ptr9;
                        long long v161 = *ptr9;
                        ++ptr9;
                        long long v162 = *ptr9;
                        ++ptr9;
                        long long v163 = 0x443c40L;
                        long long* ptr26 = ptr9;
                        long long* ptr27 = ptr9;
                        ptr9 -= 4;
                        char v164 = ptr9 ? 0: 1;
                        char v165 = (long long)ptr9 < 0L;
                        char v166 = __parity__((unsigned char)ptr9);
                        char v167 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr27 ^ 0x20L) ^ (long long)ptr9) >>> 4L) & 0x1L);
                        char v168 = (unsigned long long)ptr27 < 32L;
                        char v169 = (long long)(long long*)((long long)(long long*)((long long)ptr9 ^ (long long)ptr27) & (long long)(long long*)((long long)ptr27 ^ 0x20L)) < 0L;
                        --ptr9;
                        *ptr9 = &loc_401463;
                        /*BAD_CALL!*/ GetSystemInfo((LPSYSTEM_INFO)0x443C40);
                        long long* ptr28 = ptr9;
                        ptr9 += 4;
                        char v170 = ptr9 ? 0: 1;
                        char v171 = (long long)ptr9 < 0L;
                        char v172 = __parity__((unsigned char)ptr9);
                        char v173 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr28 ^ 0x20L) ^ (long long)ptr9) >>> 4L) & 0x1L);
                        char v174 = (unsigned long long)ptr28 >= 18446744073709551584L;
                        char v175 = (long long)(long long*)((long long)(long long*)((long long)ptr9 ^ (long long)ptr28) & (long long*)~(long long)(long long*)((long long)ptr28 ^ 0x20L)) < 0L;
                        long long v176 = &gvar_442000;
                        --ptr9;
                        *ptr9 = 1L;
                        gvar_44200C = *ptr9;
                        long long v177 = (unsigned long long)gvar_440798;
                        gvar_442004 = gvar_440798;
                        long long v178 = &gvar_441000;
                        gvar_442018 = &gvar_441000;
                        gvar_442020 = 0x1000;
                        long long v179 = &sub_4021BE;
                        long long v180 = &gvar_402250;
                        char v181 = *(char*)&gvar_440668 & 0x2 ? 0: 1;
                        char v182 = (*(char*)&gvar_440668 & 0x2) < 0;
                        char v183 = __parity__(*(char*)&gvar_440668 & 0x2);
                        char v184 = 0;
                        char v185 = 0;
                        unsigned long long v186 = v181 ? &sub_4021BE: &gvar_402250;
                        gvar_442030 = v181 ? &sub_4021BE: &gvar_402250;
                        gvar_442038 = &gvar_442000;
                        long long v187 = &sub_403FED;
                        *ptr25 = &sub_403FED;
                        long long v188 = (long long)(ptr25 + 1);
                        *ptr9 = &loc_4014BE;
                        long long v189 = /*BAD_CALL!*/ sub_4015CB(v188, v161);
                        long long v190 = &sub_403AE8;
                        *(long long*)&ptr1[0] = 0xffe8;
                        long long* ptr29 = (long long*)(ptr1 + 8L);
                        long long v191 = &sub_4043D8;
                        *ptr29 = &sub_4043D8;
                        long long* ptr30 = ptr29 + 1;
                        long long v192 = *ptr26;
                        long long v193 = *(ptr26 + 1);
                        ptr9 = ptr26 + 2;
                        jump v193;
                    }
                    else {
                        v137 = 0L;
                        long long v194 = 0L;
                        char v195 = 1;
                        char v196 = 0;
                        char v197 = 1;
                        char v198 = 0;
                        char v199 = 0;
                        do {
                            v141 = (unsigned long long)*ptr0 | ((unsigned long long)((v141 >>> 8L) & 0xffffffffffffffL) << 8);
                            ++ptr0;
                            long long v200 = v141;
                            long long v201 = (unsigned long long)((unsigned int)v200 & 0x7f);
                            char v202 = (unsigned int)v200 & 0x7f ? 0: 1;
                            char v203 = (v201 >>> 31L) & 0x1L;
                            char v204 = __parity__((unsigned char)v201);
                            char v205 = 0;
                            char v206 = 0;
                            long long v207 = v201;
                            long long v208 = v201 << (v137 & 0x3fL);
                            char v209 = (unsigned long long)(v137 & 0x3fL) < 64L && (v137 & 0x3fL) ? v207 << ((v137 & 0x3fL) - 1L) < 0L: 0;
                            char v210 = (v137 & 0x3fL) == 1L ? v207 < 0L ^ ((v207 >>> 62L) & 0x1L): 0;
                            char v211 = v137 & 0x3fL ? v208 ? 0: 1: v202;
                            char v212 = v137 & 0x3fL ? v208 < 0L: v203;
                            char v213 = v137 & 0x3fL ? __parity__((unsigned char)v208): v204;
                            v137 = (unsigned long long)((unsigned int)v137 + 7);
                            v194 |= v208;
                            char v214 = (unsigned char)v141 ? 0: 1;
                            v11 = (unsigned char)v141 < 0;
                            char v215 = __parity__((unsigned char)v141);
                            char v216 = 0;
                            char v217 = 0;
                        }
                        while(v11);
                        char v218 = (unsigned char)v141 & 0x40 ? 0: 1;
                        char v219 = ((unsigned char)v141 & 0x40) < 0;
                        char v220 = __parity__((unsigned char)v141 & 0x40);
                        char v221 = 0;
                        char v222 = 0;
                        if(!v218) {
                            long long v223 = -1L;
                            long long v224 = -1L;
                            long long v225 = -1L << (v137 & 0x3fL);
                            char v226 = (unsigned long long)(v137 & 0x3fL) < 64L && (v137 & 0x3fL) ? -1L << ((v137 & 0x3fL) - 1L) < 0L: 0;
                            char v227 = 0;
                            char v228 = v137 & 0x3fL ? v225 ? 0: 1: 0;
                            char v229 = v137 & 0x3fL ? v225 < 0L: v219;
                            char v230 = v137 & 0x3fL ? __parity__((unsigned char)v225): v220;
                            v194 |= v225;
                            char v231 = v194 ? 0: 1;
                            char v232 = v194 < 0L;
                            char v233 = __parity__((unsigned char)v194);
                            char v234 = 0;
                            char v235 = 0;
                        }
                        long long v236 = v194;
                        char v237 = *ptr24 ? 0: 1;
                        char v238 = *ptr24 < 0L;
                        char v239 = __parity__((unsigned char)*ptr24);
                        char v240 = *ptr24 < 0L;
                        char v241 = 0;
                        char v242 = 0;
                        v141 = v237 ? v236: *ptr24;
                        *ptr24 = v237 ? v236: *ptr24;
                        ++ptr24;
                    }
                }
                goto loc_40144E;
            }
            else {
                v6 = (unsigned char)v26 == *(char*)&gvar_440008;
                char v243 = (unsigned char)v26 < *(char*)&gvar_440008;
                char v244 = __parity__((unsigned char)v26 - *(char*)&gvar_440008);
                v7 = (unsigned char)v26 < *(char*)&gvar_440008;
                char v245 = ((((unsigned char)v26 - *(char*)&gvar_440008) ^ (unsigned char)v26) & ((unsigned char)v26 ^ *(char*)&gvar_440008)) < 0;
                char v246 = ((((unsigned char)v26 - *(char*)&gvar_440008) ^ ((unsigned char)v26 ^ *(char*)&gvar_440008)) >>> 4) & 0x1;
            }
        }
    }
    while(v7 || v6);
    unsigned char* ptr31 = ptr8;
    ptr8 += 16L;
    char v247 = ptr8 ? 0: 1;
    char v248 = (long long)ptr8 < 0L;
    char v249 = __parity__((unsigned char)ptr8);
    char v250 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr31 ^ 0x10L) ^ (long long)ptr8) >>> 4L) & 0x1L);
    char v251 = (unsigned long long)ptr31 >= 18446744073709551600L;
    char v252 = (long long)(long long*)((long long)(long long*)((long long)ptr8 ^ (long long)ptr31) & (long long*)~(long long)(long long*)((long long)ptr31 ^ 0x10L)) < 0L;
    goto loc_401328;
}

long long sub_4014CE(long long param0, long long param1, long long param2) {
    sub_401F47("hello world", param1, param2);
    return 0L;
}

long long sub_4014E0(long long param0, long long param1) {
    long long v0;
    long long v1 = v0;
    long long v2 = param1;
    long long v3 = gvar_442038;
    if(!(*(char*)&gvar_440668 & 0x4)) {
        int v4 = /*BAD_CALL!*/ sub_401674((long long)*(int*)(v3 + 12L));
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

long long sub_401516(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    char v4 = gvar_442050 ? 0: 1;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = v0;
    long long v8 = v1;
    if(v4) {
        gvar_442050 = 4464728L;
        gvar_442048 = 8L;
        sub_404540(&sub_4020EC, 0L, 0L);
    }
    unsigned long long v9 = gvar_442040;
    unsigned long long v10 = gvar_442050;
    unsigned long long v11 = v9 - 1L;
    while(v11 != -1L) {
        long long* ptr0 = (long long*)(v11 * 8L + v10);
        --v11;
        if(!*(long long*)(v11 * 8L + v10 + 8L)) {
            *ptr0 = param0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_442048) {
        long long v12 = /*BAD_CALL!*/ sub_40466A((long long*)&gvar_442050, &gvar_442048, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *(long long*)(v9 * 8L + gvar_442050) = param0;
            gvar_442040 = v9 + 1L;
            return (unsigned long long)(unsigned int)v11;
        }
    }
    else {
        v11 = v9;
        *(long long*)(v9 * 8L + gvar_442050) = param0;
        gvar_442040 = v9 + 1L;
    }
    return (unsigned long long)(unsigned int)v11;
}

long long sub_4015CB(long long param0, long long param1) {
    long long result;
    sub_404491();
    return result;
}

HANDLE sub_40161F(long long param0, long long param1) {
    gvar_443AA0 = 3L;
    gvar_443AB0 = &gvar_443AB8;
    gvar_443AA8 = 16L;
    gvar_443AC8 = 1;
    gvar_443AE0 = 1;
    gvar_443AF8 = 1;
    HANDLE v0 = GetStdHandle(0xfffffff6);
    gvar_443AB8 = v0;
    HANDLE v1 = GetStdHandle(0xfffffff5);
    gvar_443AD0 = v1;
    HANDLE result = GetStdHandle(0xfffffff4);
    gvar_443AE8 = result;
    return result;
}

int sub_401674(long long param0) {
    char v0;
    char v1;
    int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v3;
    long long v7 = v4;
    long long v8 = v5;
    int result = gvar_440668 & 0x4;
    if(!(gvar_440668 & 0x4)) {
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
        long long v12 = /*BAD_CALL!*/ sub_404C6C(param0, 1);
        if((unsigned char)v12) {
            DWORD v13 = sub_401EB0(*(HANDLE*)((long long)(unsigned int)param0 * 24L + gvar_443AB0));
            v0 = (unsigned int)v13 == 2;
            result = v0 ? 1: 0;
        }
    }
    return result;
}

unsigned int sub_401711(long long param0, int* param1) {
    long long v0;
    long long v1 = v0;
    long long v2 = /*BAD_CALL!*/ sub_404DB0();
    unsigned int result = (unsigned int)v2;
    if(result != -1) {
        unsigned int v3 = result;
        sub_40173E(param1);
        result = v3;
    }
    return result;
}

void sub_40173E(int* param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12;
    if(param0) {
        long long v13 = (unsigned long long)gvar_440668;
        long long v14 = v8;
        long long v15 = v9;
        long long v16 = v10;
        long long v17 = v11;
        long long v18 = v12;
        if(((unsigned char)v13 & 0x8)) {
            long long v19 = (unsigned long long)*(short*)((char*)param0 + 6L);
            long long v20 = (unsigned long long)*(short*)(param0 + 1);
            v7 = (long long)*(param0 + 28);
            long long v21 = (long long)*param0;
            long long v22 = *(long long*)(param0 + 4);
            v6 = *(long long*)(param0 + 24);
            v5 = *(long long*)(param0 + 10);
            *(long long*)(param0 + 10) = (long long)*(param0 + 6);
            long long v23 = *(long long*)(param0 + 26);
            v4 = *(long long*)(param0 + 8);
            v3 = *(long long*)(param0 + 12);
            v2 = *(long long*)(param0 + 14);
            v1 = *(long long*)(param0 + 16);
            v13 = *(long long*)(param0 + 18);
            *(long long*)param0 = v21;
            *(long long*)(param0 + 4) = v19;
            *(param0 + 6) = (unsigned int)v20;
            *(long long*)(param0 + 7) = v22;
            *(long long*)(param0 + 12) = v6;
            *(long long*)(param0 + 14) = v7;
            *(long long*)(param0 + 16) = v23;
            goto loc_40184B;
        }
        else {
            if(((unsigned char)v13 & 0x20)) {
                v6 = (long long)*(param0 + 32);
                v0 = *(long long*)(param0 + 28);
                v7 = *(long long*)(param0 + 30);
                v4 = *(long long*)(param0 + 12);
                v5 = *(long long*)(param0 + 14);
                v3 = *(long long*)(param0 + 16);
                v2 = *(long long*)(param0 + 18);
                v1 = *(long long*)(param0 + 20);
                v13 = *(long long*)(param0 + 22);
                *(param0 + 6) = (unsigned int)*(short*)(param0 + 6);
                goto loc_40183F;
            }
            if(((unsigned char)v13 & 0x10)) {
                long long v24 = (long long)*(param0 + 7);
                int v25 = *param0;
                long long v26 = *(long long*)(param0 + 5);
                v6 = (long long)*(param0 + 24);
                v0 = *(long long*)(param0 + 20);
                v7 = *(long long*)(param0 + 22);
                v3 = *(long long*)(param0 + 12);
                *(long long*)param0 = (long long)*(param0 + 1);
                long long v27 = (unsigned long long)*(param0 + 4);
                v2 = *(long long*)(param0 + 14);
                v1 = *(long long*)(param0 + 16);
                v13 = *(long long*)(param0 + 18);
                v4 = *(long long*)(param0 + 8);
                v5 = *(long long*)(param0 + 10);
                *(param0 + 6) = v25;
                *(long long*)(param0 + 4) = v27;
                *(long long*)(param0 + 7) = v26;
                *(long long*)(param0 + 10) = v24;
            loc_40183F:
                *(long long*)(param0 + 12) = v0;
                *(long long*)(param0 + 14) = v6;
                *(long long*)(param0 + 16) = v7;
            loc_40184B:
                *(long long*)(param0 + 18) = v4;
                *(long long*)(param0 + 20) = v5;
                *(long long*)(param0 + 22) = v3;
                *(long long*)(param0 + 24) = v2;
                *(long long*)(param0 + 26) = v1;
                *(long long*)(param0 + 28) = v13;
            }
        }
    }
}

long long sub_40186F(long long* param0, char* param1, long long param2, unsigned int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((gvar_44003D & 0x2 ? v0 ? 1L: 3L: v0 ? 0L: 2L) + (long long)param1) + param2;
    return *(long long*)param1;
}

char sub_40189D(char* param0, char* param1) {
    char result;
    long long v0 = 0L;
    while(1) {
        v0 = (unsigned long long)*param1 | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        result = *(param1 + 1L);
        param1 += 2L;
        if(!v0) {
            return result;
        }
        do {
            *param0 = result;
            ++param0;
            v0 = (unsigned long long)((unsigned int)v0 - 1);
        }
        while((unsigned int)v0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4018AE(long long param0, long long* param1, long long param2, long long* param3) {
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
    long long v13 = sub_4045D5(0L, param1, param2, param3);
    long long v14 = (unsigned long long)v4;
    long long* ptr2 = &ptr0;
    /*NO_RETURN*/ sub_405211();
}

long long sub_4018C7() {
    gvar_443C70 = gvar_4406A8;
    return -1L;
}

long long sub_4018D7() {
    gvar_443C70 = gvar_4406C0;
    return -1L;
}

long long sub_401907() {
    gvar_443C70 = gvar_440708;
    return -1L;
}

long long sub_401B52(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = param0;
    param0 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)param0;
    if(*(unsigned short*)param0 <= 55295) {
        *(int*)(v1 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_404E4D(param0, (int*)(v1 + 24L), v1, param3);
    }
    *(long long*)v1 = (unsigned long long)(unsigned int)v0 * 2L + *(long long*)v1;
    return (unsigned long long)(unsigned int)v0 * 2L;
}

long long sub_401B7D(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_404E5C((long long)(unsigned int)param1, param1, param0, param3);
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

long long sub_401BAD(long long param0, long long param1, long long param2, long long param3, long long param4) {
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
    sub_401B52(&v1, param1, param2, param3);
loc_401BF4:
    while(v2) {
    loc_401BF6:
        do {
            unsigned long long v22 = (unsigned long long)v2;
            if(v2) {
                if((unsigned int)v22 <= 32 && ((0x100002600L >>> (v22 % 64L)) & 0x1L)) {
                    sub_401B52(&v1, param1, param2, param3);
                    goto loc_401BF6;
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
                loc_401C7E:
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
                                sub_401B52(&v1, i, v0, v11);
                            }
                            unsigned long long j;
                            for(j = 0L; v2 == 34; j = (unsigned long long)(v5 + 1L)) {
                                sub_401B52(&v1, i, v0, v11);
                            }
                            unsigned long long v24 = v7;
                            if(!j) {
                                while(1) {
                                    --v7;
                                    if(v7 == -1L) {
                                        goto loc_401C7E;
                                    }
                                    else {
                                        sub_401B7D(&v1, 92L, v0, v11);
                                    }
                                }
                            }
                            while(v24 > 1L) {
                                sub_401B7D(&v1, 92L, v0, v11);
                                v24 -= 2L;
                            }
                            if(((unsigned char)v7 & 0x1)) {
                                sub_401B7D(&v1, 34L, v0, v11);
                                j = (unsigned long long)(v5 - 1L);
                                if(!j) {
                                    goto loc_401C7E;
                                }
                            }
                            char v25 = (unsigned char)v9 < 1;
                            v9 = 3L;
                            j -= (unsigned long long)v25;
                            v7 = j + 1L;
                            while(v7 >= v9) {
                                v9 += 3L;
                                sub_401B7D(&v1, 34L, v0, v11);
                            }
                            v11 = 3L;
                            v0 = (long long)(j % 3L);
                            v9 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v9 >>> 8L) & 0xffffffffffffffL) << 8);
                            goto loc_401C7E;
                        }
                        sub_401B7D(&v1, i, v0, v11);
                        sub_401B52(&v1, param1, param2, param3);
                    }
                    sub_401B7D(&v1, 0L, v0, v11);
                    continue loc_401BF4;
                }
            }
        }
        while(v2);
    }
    sub_401B7D(&v1, 0L, param2, param3);
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

long long sub_401DBA(unsigned long long* param0, unsigned long long* param1, unsigned long long param2, int* param3) {
    long long result;
    LPCVOID lpBuffer;
    long long v0;
    char v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    unsigned long long* ptr0;
    long long v6 = v5;
    long long v7 = v3;
    unsigned long long* ptr1 = param1;
    long long v8 = v4;
    unsigned long long i;
    for(i = param2; i && !*(long long*)(ptr1 + 1); --i) {
        ptr1 += 2;
    }
    int* ptr2 = sub_401E5C(param3, &v1);
    if(i) {
        v0 = (unsigned long long)*(int*)(ptr1 + 1);
        lpBuffer = *ptr1;
    }
    else {
        v0 = 0L;
        lpBuffer = NULL;
    }
    void* ptr3 = param3;
    HANDLE hFile = *ptr0;
    LPOVERLAPPED v9 = (LPOVERLAPPED)ptr2;
    BOOL v10 = /*BAD_CALL!*/ WriteFile(hFile, lpBuffer, (DWORD)v0, &v2, (LPOVERLAPPED)ptr2);
    if(!(unsigned int)v10) {
        sub_4052D6();
    }
    else if(!v2) {
        for(unsigned long long j = 0L; j != i; ++j) {
        }
    loc_401E3D:
        FlushFileBuffers(*ptr0);
        result = (unsigned long long)v2;
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
        long long v0 = 8L;
        param0 = param1;
        while(v0 != 0L) {
            *param0 = 0;
            ++param0;
            --v0;
        }
        *(unsigned long long*)(param1 + 4) = ptr0;
    }
    else {
        result = NULL;
    }
    return result;
}

DWORD sub_401EB0(HANDLE hFile) {
    return GetFileType(hFile);
}

long long sub_401F47(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1 = gvar_442038;
    long long v2 = /*BAD_CALL!*/ sub_401FE7(param0, v1, param2);
    if((unsigned int)v2 != -1) {
        int v3 = /*BAD_CALL!*/ sub_401F82(10L, v1, param2, v0);
        if(!((unsigned int)v3 + 1)) {
            return 0xffffffffL;
        }
        result = (unsigned long long)((unsigned int)v2 + 1);
    }
    else {
        result = 0xffffffffL;
    }
    return result;
}

int sub_401F82(long long param0, long long param1, long long param2, long long param3) {
    int result;
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = param1;
    long long* ptr0 = &v2;
    if((unsigned int)param0 != -1) {
        long long v4 = (unsigned long long)*(int*)(param1 + 20L);
        long long v5 = *(long long*)(param1 + 24L);
        *(char*)(v4 + v5) = (unsigned char)param0;
        int v6 = *(int*)(param1 + 20L);
        int v7 = 0;
        param1 = (long long)*(int*)(param1 + 32L);
        int v8 = v6;
        int v9 = v6 + 1;
        int v10 = 0;
        char v11 = v6 + 1 ? 0: 1;
        char v12 = v9 < 0;
        char v13 = __parity__((unsigned char)v9);
        char v14 = (((v8 ^ 0x1) ^ v9) >>> 4) & 0x1;
        char v15 = ((v9 ^ v8) & ~(v8 ^ 0x1)) < 0;
        long long v16 = (unsigned long long)((unsigned int)param1 - 1);
        int v17 = ((unsigned int)param1 - 1) & v9;
        int v18 = 0;
        char v19 = ((unsigned int)param1 - 1) & v9 ? 0: 1;
        char v20 = v17 < 0;
        char v21 = __parity__((unsigned char)v17);
        char v22 = 0;
        char v23 = 0;
        int v24 = *(int*)(v3 + 16L);
        int v25 = 0;
        *(int*)(v3 + 20L) = v17;
        char v26 = v17 == v24;
        char v27 = v17 < v24;
        char v28 = __parity__((unsigned char)v17 - (unsigned char)v24);
        char v29 = (unsigned int)v17 < (unsigned int)v24;
        char v30 = (((v17 - v24) ^ v17) & (v17 ^ v24)) < 0;
        char v31 = (((v17 - v24) ^ (v17 ^ v24)) >>> 4) & 0x1;
        if(!v26) {
            param3 = (unsigned long long)*(char*)v3 | ((unsigned long long)((param3 >>> 8L) & 0xffffffffffffffL) << 8);
            char v32 = *(char*)v3 == 2;
            char v33 = (unsigned char)param3 < 2;
            char v34 = __parity__((unsigned char)param3 - 2);
            char v35 = ((((unsigned char)param3 - 2) ^ (unsigned char)param3) & ((unsigned char)param3 ^ 0x2)) < 0;
            v31 = ((((unsigned char)param3 - 2) ^ ((unsigned char)param3 ^ 0x2)) >>> 4) & 0x1;
            if(!v32) {
                char v36 = (unsigned char)param3;
                if((unsigned char)param3 + 0xff) {
                    goto loc_401FD7;
                }
                else {
                    v31 = ((((unsigned char)param0 - 10) ^ ((unsigned char)param0 ^ 0xa)) >>> 4) & 0x1;
                    if((unsigned char)param0 != 10) {
                        goto loc_401FD7;
                    }
                }
            }
        }
        param3 = *(long long*)(v3 + 48L);
        char v37 = param3 ? 0: 1;
        char v38 = param3 < 0L;
        char v39 = __parity__((unsigned char)param3);
        char v40 = 0;
        char v41 = 0;
        if(!v37) {
            long long v42 = v2;
            long long* ptr1 = &v0;
            param0 = v3;
            jump param3;
        }
        if(v17 == v24) {
            return sub_4020AB(v3);
        }
    loc_401FD7:
        result = (int)(unsigned char)param0;
    }
    else {
        result = sub_4020AB(v3);
    }
    return result;
}

long long sub_401FE7(long long param0, long long param1, long long param2) {
    long long v0;
    unsigned int v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v4;
    int v8 = 0;
    long long v9 = v3;
    long long v10 = param0;
    long long v11 = v5;
    long long v12 = v6;
loc_401FFB:
    do {
        param2 = (unsigned long long)*(char*)v10 | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if(*(char*)v10) {
            ++v10;
            *(char*)((unsigned long long)*(int*)(param1 + 20L) + *(long long*)(param1 + 24L)) = (unsigned char)param2;
            unsigned int v13 = (unsigned int)((*(int*)(param1 + 32L) - 1) & (*(int*)(param1 + 20L) + 1));
            long long v14 = (unsigned long long)*(int*)(param1 + 16L);
            *(unsigned int*)(param1 + 20L) = v13;
            if((unsigned int)v14 != v13 && *(char*)param1 != 2 && ((*(char*)param1 + 0xff) || (unsigned char)param2 != 10)) {
                ++v8;
                goto loc_401FFB;
            }
            else {
                param2 = *(long long*)(param1 + 48L);
                if(param2) {
                    long long v15 = /*BAD_CALL!*/ param2(v14);
                    v2 = (unsigned int)v15;
                    goto loc_40205D;
                }
                if((unsigned int)v14 != v13) {
                    ++v8;
                    goto loc_401FFB;
                }
                else {
                    int v16 = /*BAD_CALL!*/ sub_4020AB(param1);
                    v2 = (unsigned int)v16;
                loc_40205D:
                    v1 = v2;
                    if(v2 != -1) {
                        ++v8;
                        goto loc_401FFB;
                    }
                    else {
                        long long v17 = sub_4020DE(param1);
                        if((unsigned long long)(unsigned int)v17 == gvar_4406B8) {
                            goto loc_401FFB;
                        }
                        else {
                            v0 = /*BAD_CALL!*/ sub_4020D4(param1);
                        }
                    }
                }
            }
            if((unsigned int)v0) {
                unsigned int v18 = (unsigned int)gvar_440710;
                *(unsigned int*)(param1 + 8L) = (unsigned int)gvar_440710;
                gvar_443C70 = v18;
            }
            return (unsigned long long)v1;
        }
    }
    while(*(char*)v10);
    v1 = (unsigned int)(v8 + 1);
    return (unsigned long long)v1;
}

int sub_4020AB(long long param0) {
    return sub_4020B3(param0, 0xffffffff);
}

int sub_4020B3(long long param0, unsigned int param1) {
    if(!param1) {
        param1 = 0xffffffff;
    }
    unsigned int v0 = *(unsigned int*)(param0 + 8L);
    *(unsigned int*)(param0 + 8L) = (*(int*)(param0 + 8L) ? 0: 1) || v0 >= 0x80000000 ? param1: v0;
    if((int)param1 > 0) {
        gvar_443C70 = param1;
    }
    return -1;
}

long long sub_4020D4(long long param0) {
    return *(int*)(param0 + 8L) != -1 ? 0L: 1L;
}

long long sub_4020DE(long long param0) {
    return *(int*)(param0 + 8L) >= 0 ? (unsigned long long)*(int*)(param0 + 8L): 0L;
}

long long sub_4020EC(long long param0) {
    unsigned int v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    if(!param0) {
        v0 = 0;
        for(unsigned long long i = gvar_442040 - 1L; i != -1L; --i) {
            if(*(long long*)(i * 8L + gvar_442050)) {
                long long v5 = /*BAD_CALL!*/ sub_4020EC();
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
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long long)*(int*)(param0 + 4L) & *(long long*)&gvar_440798)) {
            v0 = *(unsigned int*)(param0 + 8L);
            if(!*(int*)(param0 + 8L)) {
                while(*(int*)(param0 + 20L) != *(int*)(param0 + 16L)) {
                    long long v6 = param0;
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
                int v8 = sub_4020B3(param0, v0);
                v0 = (unsigned int)v8;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long long)v0;
}

int sub_4021BE(long long param0) {
    int result;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long v4 = (unsigned long long)*(int*)(param0 + 16L);
    unsigned int v5 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v4 >= v5) {
        v5 = *(unsigned int*)(param0 + 32L);
    }
    int v6 = v5 - (unsigned int)v4;
    long long v7 = sub_404C87((long long)*(int*)(param0 + 12L), (long long*)(*(long long*)(param0 + 24L) + v4), (long long)v6);
    if(v7 == -1L) {
        result = sub_40228B(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v7 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (int)v6;
    }
    return result;
}

int sub_40228B(long long param0) {
    return sub_4020B3(param0, gvar_443C70);
}

long long sub_402296() {
    return gvar_440678();
}

long long sub_40229C() {
    return gvar_440680();
}

long long sub_4022A2() {
    return gvar_440688();
}

unsigned long long sub_4022A8(long long param0, long long param1, unsigned long long param2) {
    unsigned long long v0 = (unsigned int)param1 & 0xf ? (unsigned long long)((0 - ((unsigned int)param1 + 16)) & 0xf): (unsigned long long)((unsigned int)param1 & 0xf);
    long long v1 = v0 + param1;
    unsigned long long v2 = param2 - v0;
    *(long long*)(param0 + 40L) = v1;
    *(unsigned long long*)(param0 + 16L) = v2;
    *(long long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long long result = gvar_442480;
    *(long long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long long*)(param0 + 48L) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4022EF(long long param0) {
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
                                        v20 = *(long long*)(v20 + 40L);
                                        if(v20) {
                                            goto loc_4023D4;
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
                                        goto loc_40241F;
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
                                    loc_40241F:
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
                        long long v26 = /*BAD_CALL!*/ sub_40452C(param0, result, v20, v19);
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
                            loc_402568:
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
                                        goto loc_402568;
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
long long sub_4025AC(long long param0, unsigned long long param1, long long param2, long long param3, unsigned long long param4, unsigned long long param5) {
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
                goto loc_402619;
            }
            while(ptr1);
            ud2();
        loc_402619:
            long long v13 = (unsigned long long)*(int*)(ptr1 + 3);
            if(((unsigned char)v13 & 0x8) || !((unsigned char)v13 & 0x1)) {
                goto loc_4025E0;
            }
            else {
                unsigned long long v14 = gvar_442470;
                v6 = ((unsigned long long)(v12 + v14 - 81L - param1) / v14 - 1L) * v14;
                if((unsigned long long)v6 > param5) {
                    goto loc_4025E0;
                }
                else {
                    while(1) {
                        if((unsigned long long)ptr0 >= v0 && (unsigned long long)ptr0 < param4) {
                            goto loc_4025E0;
                        }
                        else {
                            ptr0 = *(ptr0 + 2);
                            if(!ptr0) {
                                unsigned long long v15 = param5 - v6;
                                long long v16 = sub_404ABB();
                                if(!(v16 + 1L)) {
                                    long long v17 = /*BAD_CALL!*/ sub_40452C(*ptr1 + v15, v6, v4, v3);
                                    if((unsigned int)v17) {
                                        goto loc_4025E0;
                                    }
                                }
                                if(v6) {
                                    *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) - v6;
                                    unsigned long long v18 = *(unsigned long long*)(param0 + 16L);
                                    *(long long*)(param0 + 856L) = *(long long*)(param0 + 856L) - v6;
                                    sub_4022A8(param0, *(long long*)(param0 + 40L), v18 - v6);
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
long long sub_4026E8(long long param0, long long param1, long long param2, long long param3) {
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
                goto loc_402874;
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
                            ptr2 = (long long*)(param3 + 40L);
                            param3 = *(long long*)(param3 + 40L);
                            if(param3) {
                                goto loc_4027A8;
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
                            goto loc_4027F8;
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
                        loc_4027F8:
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
            goto loc_402874;
        }
        else {
            v0 = param2 + v1 + 32L;
            result = sub_40452C(param0, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long long*)(v6 + 856L) = *(long long*)(v6 + 856L) - v0;
            return result;
        }
    }
    else {
    loc_402874:
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
                                    ptr2 = (long long*)(param3 + 40L);
                                    param3 = *(long long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_402956;
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
                                    goto loc_4029A2;
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
                                loc_4029A2:
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
                        goto loc_402A24;
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
        loc_402A24:
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
                loc_402B39:
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
                            goto loc_402B39;
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
void sub_402B64() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_403AE8(long long param0, unsigned long long param1, long long param2, long long param3, long long param4, unsigned long long param5) {
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
        loc_403C97:
            v4 = *(unsigned long long*)(param1 + 8L);
            if(!((unsigned char)v4 & 0x2)) {
                char v13 = gvar_4420C8 == param1;
                v2 = gvar_4420C0;
                if(v13) {
                    long long* ptr1 = (long long*)(gvar_4420B0 + (long long)ptr0);
                    gvar_4420C8 = param0;
                    gvar_4420B0 = ptr1;
                    v6 = (long long)((long long)ptr1 | 0x1L);
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr1 | 0x1L);
                    if(param0 == v2) {
                        gvar_4420C0 = 0L;
                        gvar_4420A8 = 0L;
                    }
                    if(gvar_4420D0 >= (unsigned long long)ptr1) {
                        goto loc_403FEB;
                    }
                    else {
                        sub_4025AC(&gvar_4420A0, 0L, v6, v10, v4, param5);
                        return;
                    }
                }
                else if(param1 == v2) {
                    long long* ptr2 = (long long*)(gvar_4420A8 + (long long)ptr0);
                    gvar_4420C0 = param0;
                    gvar_4420A8 = ptr2;
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr2 | 0x1L);
                    *(unsigned long long*)((long long)ptr2 + param0) = ptr2;
                    goto loc_403FEB;
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
                            gvar_4420A0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A0);
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
                                    param5 = (unsigned long long)(v11 + 40L);
                                    v11 = *(long long*)(v11 + 40L);
                                    if(v11) {
                                        goto loc_403DB1;
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
                            if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_4422F8) == param1) {
                                *(long long*)(v5 * 8L + (long long)&gvar_4420A8) = v14;
                                if(v14) {
                                    goto loc_403DFF;
                                }
                                else {
                                    gvar_4420A4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A4);
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
                                loc_403DFF:
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
                        gvar_4420A8 = ptr0;
                        goto loc_403FEB;
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
                unsigned int v18 = gvar_4420A0;
                param1 = (unsigned long long)(1 << (v11 & 0x1fL));
                long long v19 = (unsigned long long)((unsigned int)v11 * 2) * 8L + &gvar_4420E8;
                if(!((unsigned int)param1 & v18)) {
                    gvar_4420A0 = (unsigned int)((unsigned int)param1 | v18);
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
                unsigned int v20 = gvar_4420A4;
                int v21 = 1 << ((unsigned long long)(unsigned int)v6 & 0x1fL);
                *(int*)(param0 + 56L) = (unsigned int)v6;
                *(long long*)(param0 + 40L) = 0L;
                v11 = (long long)v21;
                *(long long*)(param0 + 32L) = 0L;
                v4 = (unsigned long long)(unsigned int)v6;
                if(!(v20 & v21)) {
                    *(long long*)(v4 * 8L + (long long)&gvar_4422F8) = param0;
                    gvar_4420A4 = (unsigned int)((unsigned int)v11 | v20);
                    *(long long*)(param0 + 48L) = v4 * 8L + &gvar_4422F8;
                loc_403FAC:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v22 = 0L;
                    param1 = *(unsigned long long*)(v4 * 8L + (long long)&gvar_4422F8);
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
                            goto loc_403FAC;
                        }
                    }
                    long long v24 = *(long long*)(param1 + 16L);
                    *(long long*)(v24 + 24L) = param0;
                    *(long long*)(param1 + 16L) = param0;
                    *(long long*)(param0 + 16L) = v24;
                    *(unsigned long long*)(param0 + 24L) = param1;
                    *(long long*)(param0 + 48L) = 0L;
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
            v4 = *(unsigned long long*)(v8 - 16L);
            param0 -= v4;
            v11 = (unsigned long long)((unsigned char)v11 & 0x3) | ((unsigned long long)((v11 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v11) {
                ptr0 = (void*)((long long)ptr0 + v4);
                if(gvar_4420C0 == param0) {
                    long long v25 = *(long long*)(param1 + 8L);
                    if(((unsigned int)*(long long*)(param1 + 8L) & 0x3) == 3) {
                        gvar_4420A8 = ptr0;
                        *(long long*)(param1 + 8L) = v25 & 0xfffffffffffffffeL;
                        *(long long*)(param0 + 8L) = (long long)((long long)ptr0 | 0x1L);
                        *(void**)param1 = ptr0;
                        goto loc_403FEB;
                    }
                    else {
                        goto loc_403C97;
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
                        gvar_4420A0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A0);
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
                                param5 = (unsigned long long)(v11 + 40L);
                                v11 = *(long long*)(v11 + 40L);
                                if(v11) {
                                    goto loc_403BC3;
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
                        char v31 = *(unsigned long long*)(param5 * 8L + (long long)&gvar_4422F8) == param0;
                        v2 = param5 + 74L;
                        v11 = (long long)param5;
                        if(v31) {
                            char v32 = v3 ? 0: 1;
                            *(long long*)(v2 * 8L + (long long)&gvar_4420A8) = v3;
                            if(!v32) {
                                goto loc_403C15;
                            }
                            else {
                                gvar_4420A4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4420A4);
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
                            loc_403C15:
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
                goto loc_403C97;
            }
            else {
                v1 = (long long)((long long*)((long long)ptr0 + v4) + 4);
                long long v34 = /*BAD_CALL!*/ sub_40452C(param0, v1, v8, v11);
                v0 = (unsigned int)v34;
            }
        }
        if(!v0) {
            gvar_4423F8 -= v1;
        }
    }
loc_403FEB:
}

long long sub_403FED(unsigned long long param0, unsigned long long param1, unsigned long long param2, long long $rcx$2) {
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
    long long $rdi$1 = sub_402B64((long long)$rdx, (long long)param1, (long long)param2, $rcx$2);
    if($rdi$1 && (*(char*)($rdi$1 - 8L) & 0x3)) {
        sub_4050B2($rdi$1, 0L, $rdx, $rcx$2);
    }
    return $rdi$1;
}

unsigned long long* sub_404049(long long param0, unsigned long long* param1, long long param2, long long param3, long long* param4) {
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
                sub_4026E8(v12, v1, v2, param3);
            }
            return result;
        }
        else if(*(long long*)(v12 + 40L) == ptr4) {
            ptr4 = (long long*)(*(long long*)(v12 + 16L) + (long long)ptr3);
            if((unsigned long long)(long long*)(*(long long*)(v12 + 16L) + (long long)ptr3) <= (unsigned long long)param0) {
            loc_40407F:
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
                                    goto loc_4042DF;
                                }
                            }
                            else {
                            loc_4042DF:
                                unsigned long long v19 = v15;
                            loc_4042E2:
                                do {
                                    v0 = param3;
                                    v15 = v19;
                                    param3 = (long long)(v19 + 40L);
                                    v19 = *(unsigned long long*)(v19 + 40L);
                                    if(v19) {
                                        goto loc_4042E2;
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
                                    goto loc_40432E;
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
                                loc_40432E:
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
                        sub_4026E8(v12, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_40407F;
        }
        else {
            param3 = *(long long*)(v12 + 8L) + (long long)ptr3;
            if((unsigned long long)param3 < (unsigned long long)param0) {
                goto loc_40407F;
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
        goto loc_40407F;
    }
    else {
        unsigned long long v22 = gvar_442470;
        if((unsigned long long)(param0 + 8L) > (unsigned long long)ptr3 || (unsigned long long)(long long*)((long long)ptr3 - param0) > (unsigned long long)(unsigned long long*)(v22 * 2L)) {
            unsigned long long v23 = *result;
            long long v24 = (v22 + param0 + 62L) & (0L - v22);
            unsigned long long* ptr9 = (unsigned long long*)((long long*)((long long)ptr3 + v23) + 4);
            long long v25 = sub_404ABB();
            if(v25 == -1L) {
                goto loc_40407F;
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
long long sub_4043D8(long long param0, unsigned long long param1, long long param2, long long param3, long long param4, unsigned long long param5) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    if(!param0) {
        result = sub_402B64((long long)param1, v0, param2, param3);
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
        unsigned long long* ptr0 = sub_404049(&gvar_4420A0, (unsigned long long*)(param0 - 16L), param1 > 14L ? (param1 + 31L) & 0xfffffffffffffff0L: 32L, 1L, (long long*)param4);
        if(ptr0) {
            result = (long long)(ptr0 + 2);
        }
        else {
            result = sub_402B64((long long)param1, (long long)param1, param2, param3);
            if(result) {
                long long v5 = *(long long*)(param0 - 8L);
                sub_404F70(param3, (unsigned long long)((v5 & 0xfffffffffffffff8L) - 16L) <= param1 ? (unsigned long long)((v5 & 0xfffffffffffffff8L) - 16L): param1);
                sub_403AE8(param0, (unsigned long long)param0, param2, param3, param4, param5);
            }
        }
    }
    return result;
}

void sub_404491() {
    char v0 = gvar_442460 ? 0: 1;
    char v1 = gvar_442460 >= 0x8000000000000000L;
    char v2 = __parity__((unsigned char)gvar_442460);
    char v3 = gvar_442460 < 0L;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_40449B: &sub_404517;
}

long long sub_40449B() {
    char v0 = gvar_443C68 == 0x10000;
    char v1 = (int)gvar_443C68 < 0x10000;
    char v2 = __parity__((unsigned char)gvar_443C68);
    char v3 = gvar_443C68 < 0x10000;
    char v4 = (((gvar_443C68 - 0x10000) ^ gvar_443C68) & (gvar_443C68 ^ 0x10000)) < 0;
    char v5 = (((gvar_443C68 - 0x10000) ^ (gvar_443C68 ^ 0x10000)) >>> 4) & 0x1;
    long long v6 = 0x10000L;
    long long v7 = v3 ? 0x10000L: (unsigned long long)gvar_443C68;
    long long v8 = v3 ? 0x10000L: (unsigned long long)gvar_443C68;
    long long v9 = v8 - 1L;
    char v10 = v8 & v9 ? 0: 1;
    char v11 = (v8 & v9) < 0L;
    char v12 = __parity__((unsigned char)(v8 & v9));
    char v13 = 0;
    char v14 = 0;
    jump v10 ? &sub_4044C5: &sub_4044BC;
}

void sub_404517() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404518(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1 = v0;
    long long v2 = v0;
    return sub_40481D(param0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404540(long long param0, long long param1, long long param2) {
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
    long long v9 = gvar_4424A0;
    if(!v9) {
        gvar_4424A0 = 0x4424a8L;
        v9 = 0x4424a8L;
    }
    if(*(int*)v9 == -1) {
        long long v10 = sub_402296();
        if(v10) {
            *(long long*)(v10 + 8L) = v9;
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

long long sub_4045D5(unsigned long long param0, long long* param1, long long param2, long long* param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = v2;
    long long result = param2;
loc_4045E7:
    for(int* i = gvar_4424A0; i; i = gvar_4424A0) {
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
                        goto loc_4045E7;
                    }
                }
            }
            int* ptr0 = *(unsigned long long*)(i + 2);
            if(!param0) {
                if(ptr0) {
                    sub_40229C();
                }
                gvar_4424A0 = ptr0;
                goto loc_4045E7;
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

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40466A(long long* param0, long long param1, long long param2, long long param3) {
    char result;
    unsigned long long v0;
    unsigned long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v2;
    long long* ptr0 = NULL;
    long long v9 = v5;
    long long v10 = v3;
    long long* ptr1 = param0;
    long long v11 = v4;
    long long v12 = param1;
    long long v13 = v7;
    sub_4047B0(*param0, param1, param2, param3);
    long long v14 = /*BAD_CALL!*/ sub_4047B0(*ptr1, param1, param2, param3);
    if((unsigned char)v14) {
        ptr0 = *ptr1;
    }
    param0 = *(long long**)v12;
    param1 = *ptr1 ? (long long)((long long)(long long*)((long long)param0 >>> 1) + (long long)param0): (unsigned long long)(long long)(31L / (unsigned long long)param2) >= 4L ? (long long)(31L / (unsigned long long)param2): 4L;
    if(param0) {
        v1 = (unsigned long long)(param2 * (long long)param0);
        if((long long*)((long long)(long long*)(param2 | (long long)param0) & 0xffffffffffff0000L) && (long long*)(v1 / (long long)(unsigned long long)param0) != param2) {
            goto loc_40479A;
        }
        else {
            goto loc_404700;
        }
    }
    else {
        v1 = 0L;
    loc_404700:
        long long $rcx$2 = param3 + param1 + 1L;
        if($rcx$2) {
            v0 = (unsigned long long)($rcx$2 * param2);
            if(!(($rcx$2 | param2) & 0xffffffffffff0000L) || v0 / (unsigned long long)$rcx$2 == param2) {
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
            unsigned long long v15 = v1;
            long long v16 = $rcx$2;
            long long v17 = sub_4022A2();
            if(v17) {
                if(!ptr0 && *ptr1) {
                    sub_404F70($rcx$2, v1);
                }
                sub_4050B2(v17 + v1, 0L, v0 - v1, $rcx$2);
                *(long long*)v12 = param3;
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
long long sub_4047B0(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    if((unsigned long long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        long long v1 = v0;
        long long v2 = param3;
        long long v3 = sub_404C04((unsigned long long)(unsigned int)(param0 >>> 16L), &gvar_4427C8, (long long)gvar_4427C0);
        long long result = 0L;
        if(v3) {
            long long v4 = 1L;
            if((unsigned int)(param0 >>> 16L) != *(int*)(v3 * 8L + (long long)&gvar_4427C0)) {
                v4 = (unsigned int)(param0 >>> 16L) != *(unsigned int*)((v3 - 1L) * 8L + (long long)&gvar_4427CC) ? 0L: 1L;
            }
            result = (unsigned long long)((unsigned int)v4 & 0x1);
        }
        return result;
    }
    return 0L;
}

long long sub_40481D(long long param0) {
    return sub_404843(0L, param0, 3L, (unsigned long long)((unsigned int)gvar_440728 | gvar_440730 | 0x2), 0xffffffffL, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404ABB() {
    return sub_4018F7();
}

long long sub_404C6C(long long param0, unsigned int param1) {
    long long result = 0L;
    if((unsigned int)param0) {
        result = *(int*)((long long)(unsigned int)param0 * 24L + gvar_443AB0 + 16L) != param1 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404C87(long long param0, long long* param1, long long param2) {
    long long result;
    long long* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    if((unsigned int)param0 == -1) {
        long long v8 = sub_4018D7();
        result = (long long)(unsigned int)v8;
    }
    else {
        long long v9 = /*BAD_CALL!*/ sub_404C6C((long long)(unsigned int)param0, 5);
        if((unsigned char)v9) {
            result = 0L(-1L, 1L);
        }
        else if(!(*(char*)&gvar_440668 & 0x4)) {
            result = sub_404DE0();
        }
        else {
            long long v10 = /*BAD_CALL!*/ sub_404C6C((long long)(unsigned int)param0, 2);
            if((unsigned char)v10) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long long v11 = /*BAD_CALL!*/ sub_404C6C((long long)(unsigned int)param0, 1);
                if(!(unsigned char)v11) {
                    long long v12 = /*BAD_CALL!*/ sub_404C6C((long long)(unsigned int)param0, 4);
                    if((unsigned char)v12) {
                        long long v13 = (long long)(unsigned int)param0 * 24L + gvar_443AB0;
                        long long v14 = v3;
                        return sub_401DBA(v13, (long long)&ptr0, 1L, -1L, v4);
                    }
                    result = sub_4018C7();
                }
                else {
                    long long v13 = (long long)(unsigned int)param0 * 24L + gvar_443AB0;
                    long long v14 = v3;
                    result = sub_401DBA(v13, (long long)&ptr0, 1L, -1L, v4);
                }
            }
        }
    }
    return result;
}

long long sub_404DB0() {
    return gvar_440670();
}

long long sub_404DE0() {
    return gvar_440670();
}

long long sub_404E4D(long long param0, int* param1, long long param2, long long param3) {
    return sub_404E8F(param0, param1, param2, param3);
}

long long sub_404E5C(int param0, long long param1, long long param2, long long param3) {
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

long long sub_404E8F(long long param0, int* param1, long long param2, long long param3) {
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

void sub_404F70(long long param0, unsigned long long param1) {
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
    jump *(long long*)(v8 * 8L + 4457544L);
}

void sub_4050B2(long long $rdi$1, int $esi, unsigned long long $rdx, long long $rcx$2) {
    // Decompilation error
}

void sub_405221(char param0) {
    while(1) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
}

long long sub_40524A(int param0, unsigned long long param1) {
    int v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_440728;
            v0 = (unsigned long long)((long long)v1 & param1) == param1 ? 64: 128;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long long v2 = gvar_440728;
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
