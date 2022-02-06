
int CPtoLCID(int param0) {
    unsigned int v0;
    if(v0 == 932) {
        return 0x411;
    }
    else if(!(v0 - 936)) {
        return 2052;
    }
    else if((v0 - 949)) {
        return v0 - 950 ? 0: 0x404;
    }
    return 1042;
}

void _SEH_epilog(int param0, int param1, int param2) {
    int v0;
    int* ptr0;
    int v1 = *(ptr0 - 4);
    *(int*)__FS_BASE = *(ptr0 - 4);
    int v2 = v0;
    int v3 = param0;
    int v4 = param1;
    int v5 = param2;
    int v6 = *ptr0;
    *ptr0 = v2;
    int v7 = *ptr0;
    int* ptr1 = ptr0 + 1;
    jump v7;
}

int _allmul(int param0, int param1, int param2, int param3) {
    return param0 * param2;
}

int _aulldvrm(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    if(!param3) {
        v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % param2) << 32)) / param2;
    }
    else {
        unsigned int v1 = param3;
        unsigned int v2 = param2;
        unsigned int v3 = param1;
        unsigned int v4 = param0;
        do {
            v2 = (unsigned int)__ror__((unsigned long long)v2 | ((unsigned long long)(v1 & 0x1) << 32), 1);
            unsigned int v5 = v3;
            v3 >>>= 1;
            v4 = (unsigned int)__ror__((unsigned long long)v4 | ((unsigned long long)(v5 & 0x1) << 32), 1);
            v1 >>>= 1;
        }
        while(v1);
        v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v3 << 32)) / v2;
        unsigned int v6 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v3 << 32)) / v2 * param3;
        unsigned int v7 = v0 * param2;
        int v8 = (unsigned int)(((unsigned long long)v0 * (unsigned long long)param2) >>> 32L);
        unsigned int v9 = v6 + v8;
        if(!__carry__(v6, v8)) {
            char v10 = v9 < param1;
            if((!v10 && v9 != param1) || (!v10 && v7 > param0)) {
                --v0;
                return (int)v0;
            }
        }
        else {
            --v0;
        }
    }
    return (int)v0;
}

int _global_unwind2(PVOID TargetFrame) {
    int v0;
    int v1;
    int result;
    int v2 = v1;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_406878, NULL, NULL);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, unsigned int param1) {
    char v0;
    char v1;
    char v2;
    unsigned int v3;
    int* ptr0;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8 = SEH_prolog(&gvar_4090D8, 24);
    int v9 = 148;
    int v10 = 148;
    int v11 = sub_403D30(v7);
    *(LPOSVERSIONINFOA*)(ptr0 - 6) = &v5;
    LPOSVERSIONINFOA v12 = &v5;
    v5 = 148;
    BOOL v13 = GetVersionExA(&v5);
    unsigned int v14 = param1;
    gvar_40BA5C = param1;
    unsigned int v15 = v4;
    gvar_40BA68 = v4;
    unsigned int v16 = v3;
    gvar_40BA6C = v3;
    int v17 = param0;
    unsigned int v18 = (unsigned int)(v17 & 0x7fff);
    char v19 = v18 ? 0: 1;
    char v20 = v18 >= 0x80000000;
    char v21 = __parity__((unsigned char)v18);
    char v22 = 0;
    char v23 = 0;
    gvar_40BA60 = v18;
    char v24 = v14 == 2;
    char v25 = (int)v14 < 2;
    char v26 = __parity__((unsigned char)v14 - 2);
    char v27 = v14 < 2;
    char v28 = (((v14 - 2) ^ v14) & (v14 ^ 0x2)) < 0;
    char v29 = (((v14 - 2) ^ (v14 ^ 0x2)) >>> 4) & 0x1;
    if(!v24) {
        unsigned int v30 = v18 | 0x8000;
        v24 = v30 ? 0: 1;
        v25 = v30 >= 0x80000000;
        v26 = __parity__((unsigned char)v30);
        v28 = 0;
        v27 = 0;
        gvar_40BA60 = v30;
    }
    unsigned int v31 = v15;
    int v32 = (int)(v15 * 0x100);
    char v33 = (v31 >>> 24) & 0x1;
    char v34 = v28;
    char v35 = v32 ? 0: 1;
    char v36 = v32 < 0;
    char v37 = __parity__((unsigned char)v32);
    int v38 = v32;
    unsigned int v39 = (unsigned int)(v32 + v16);
    char v40 = v39 ? 0: 1;
    char v41 = v39 >= 0x80000000;
    char v42 = __parity__((unsigned char)v39);
    char v43 = (((v16 ^ v38) ^ v39) >>> 4) & 0x1;
    char v44 = __carry__(v16, v38);
    char v45 = ((v39 ^ v38) & ~(v16 ^ v38)) < 0;
    gvar_40BA64 = v39;
    int v46 = 0;
    char v47 = 1;
    char v48 = 0;
    char v49 = 1;
    char v50 = 0;
    char v51 = 0;
    HMODULE v52 = GetModuleHandleA(NULL);
    char v53 = *(short*)&v52->unused == 23117;
    char v54 = *(short*)&v52->unused < 23117;
    char v55 = __parity__((unsigned char)*(short*)&v52->unused - 77);
    char v56 = *(short*)&v52->unused < 23117;
    char v57 = (((*(short*)&v52->unused - 23117) ^ *(short*)&v52->unused) & (*(short*)&v52->unused ^ 0x5a4d)) < 0;
    char v58 = (((*(short*)&v52->unused - 23117) ^ (*(short*)&v52->unused ^ 0x5a4d)) >>> 4) & 0x1;
    if(v53) {
        int v59 = v52[15].unused;
        unsigned int* ptr1 = (unsigned int*)((int)v52 + v59);
        char v60 = *ptr1 == 0x4550;
        char v61 = *ptr1 < 0x4550;
        char v62 = __parity__((unsigned char)*ptr1 - 80);
        char v63 = *ptr1 < 0x4550;
        char v64 = (((*ptr1 - 0x4550) ^ *ptr1) & (*ptr1 ^ 0x4550)) < 0;
        char v65 = (((*ptr1 - 0x4550) ^ (*ptr1 ^ 0x4550)) >>> 4) & 0x1;
        if(!v60) {
            goto loc_401240;
        }
        else {
            unsigned int v66 = (unsigned int)*(short*)(ptr1 + 6);
            char v67 = v66 == 267;
            char v68 = (int)v66 < 267;
            char v69 = __parity__((unsigned char)v66 - 11);
            char v70 = v66 < 267;
            char v71 = (((v66 - 267) ^ v66) & (v66 ^ 0x10b)) < 0;
            char v72 = (((v66 - 267) ^ (v66 ^ 0x10b)) >>> 4) & 0x1;
            if(!v67) {
                char v73 = v66 == 523;
                char v74 = (int)v66 < 523;
                char v75 = __parity__((unsigned char)v66 - 11);
                char v76 = v66 < 523;
                char v77 = (((v66 - 523) ^ v66) & (v66 ^ 0x20b)) < 0;
                char v78 = (((v66 - 523) ^ (v66 ^ 0x20b)) >>> 4) & 0x1;
                if(!v73) {
                    goto loc_401240;
                }
                else {
                    char v79 = *(int*)(ptr1 + 33) == 14;
                    char v80 = *(int*)(ptr1 + 33) < 14;
                    char v81 = __parity__((unsigned char)*(int*)(ptr1 + 33) - 14);
                    char v82 = *(ptr1 + 33) < 14;
                    char v83 = (((*(int*)(ptr1 + 33) - 14) ^ *(int*)(ptr1 + 33)) & (*(int*)(ptr1 + 33) ^ 0xe)) < 0;
                    char v84 = (((*(int*)(ptr1 + 33) - 14) ^ (*(int*)(ptr1 + 33) ^ 0xe)) >>> 4) & 0x1;
                    if(v82 || v79) {
                        goto loc_401240;
                    }
                    else {
                        v2 = *(int*)(ptr1 + 62) == 0;
                        char v85 = *(int*)(ptr1 + 62) < 0;
                        char v86 = __parity__((unsigned char)*(int*)(ptr1 + 62));
                        char v87 = *(ptr1 + 62) < 0;
                        char v88 = 0;
                        char v89 = 0;
                        goto loc_401266;
                    }
                }
            }
            else {
                v1 = *(int*)(ptr1 + 29) == 14;
                char v90 = *(int*)(ptr1 + 29) < 14;
                char v91 = __parity__((unsigned char)*(int*)(ptr1 + 29) - 14);
                v0 = *(ptr1 + 29) < 14;
                char v92 = (((*(int*)(ptr1 + 29) - 14) ^ *(int*)(ptr1 + 29)) & (*(int*)(ptr1 + 29) ^ 0xe)) < 0;
                char v93 = (((*(int*)(ptr1 + 29) - 14) ^ (*(int*)(ptr1 + 29) ^ 0xe)) >>> 4) & 0x1;
            }
            if(v0 || v1) {
                goto loc_401240;
            }
            else {
                v2 = *(int*)(ptr1 + 58) == 0;
                char v94 = *(int*)(ptr1 + 58) < 0;
                char v95 = __parity__((unsigned char)*(int*)(ptr1 + 58));
                char v96 = *(ptr1 + 58) < 0;
                char v97 = 0;
                char v98 = 0;
            loc_401266:
                int v99 = v2 ? 0: 1;
                *(ptr0 - 7) = v2 ? 0: 1;
            }
        }
    }
    else {
    loc_401240:
        *(ptr0 - 7) = 0;
    }
    int v100 = sub_403B7F(0);
    int v101 = v6;
    char v102 = v100 ? 0: 1;
    char v103 = v100 < 0;
    char v104 = __parity__((unsigned char)v100);
    char v105 = 0;
    char v106 = 0;
    if(v102) {
        char v107 = gvar_40BA30 == 2;
        char v108 = (int)gvar_40BA30 < 2;
        char v109 = __parity__((unsigned char)gvar_40BA30 - 2);
        char v110 = gvar_40BA30 < 2;
        char v111 = (((gvar_40BA30 - 2) ^ gvar_40BA30) & (gvar_40BA30 ^ 0x2)) < 0;
        char v112 = (((gvar_40BA30 - 2) ^ (gvar_40BA30 ^ 0x2)) >>> 4) & 0x1;
        if(!v107) {
            int v113 = sub_403391();
        }
        int v114 = sub_40321A(28);
        int v115 = /*NO_RETURN*/ sub_40307F(0xff);
    }
    int v116 = sub_403ADD();
    *(ptr0 - 1) = 0;  // __try{ (see __except:401348h)
    int v117 = sub_403932();
    char v118 = v117 ? 0: 1;
    char v119 = v117 < 0;
    char v120 = __parity__((unsigned char)v117);
    char v121 = 0;
    char v122 = 0;
    if(v119 != 0) {
        sub_401182();
        int v123 = 27;
    }
    LPSTR v124 = GetCommandLineA();
    gvar_40D004 = v124;
    int v125 = sub_403810(v7);
    gvar_40BA28 = v125;
    int v126 = sub_40376E(v7);
    char v127 = v126 ? 0: 1;
    char v128 = v126 < 0;
    char v129 = __parity__((unsigned char)v126);
    char v130 = 0;
    char v131 = 0;
    if(v128 != 0) {
        sub_401182();
        int v132 = 8;
    }
    int v133 = sub_40353B();
    char v134 = v133 ? 0: 1;
    char v135 = v133 < 0;
    char v136 = __parity__((unsigned char)v133);
    char v137 = 0;
    char v138 = 0;
    if(v135 != 0) {
        sub_401182();
        int v139 = 9;
    }
    int v140 = sub_4030AF();
    int v141 = 1;
    *(ptr0 - 9) = v140;
    char v142 = v140 == 0;
    char v143 = v140 < 0;
    char v144 = __parity__((unsigned char)v140);
    char v145 = (unsigned int)v140 < 0;
    char v146 = 0;
    char v147 = 0;
    if(!v142) {
        sub_401182();
        int v148 = v140;
    }
    int v149 = gvar_40BA7C;
    gvar_40BA80 = gvar_40BA7C;
    v6 = v149;
    void* ptr2 = gvar_40BA74;
    unsigned int v150 = gvar_40BA70;
    int v151 = sub_401000();
    int* ptr3 = &v150;
    LPOSVERSIONINFOA v152 = &v5;
    char v153 = &v3 == 8;
    char v154 = (int)&v5 < 0;
    char v155 = __parity__((unsigned char)&v3 - 8);
    char v156 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v150 ^ 0xc) ^ (int)&v5) >>> 4) & 0x1);
    char v157 = (unsigned int)&v150 >= 0xfffffff4;
    char v158 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v150) & (int*)~(int)(int*)((int)&v150 ^ 0xc)) < 0;
    int v159 = v151;
    *(ptr0 - 10) = v151;
    char v160 = *(ptr0 - 7) == 0;
    char v161 = *(ptr0 - 7) < 0;
    char v162 = __parity__((unsigned char)*(ptr0 - 7));
    char v163 = *(unsigned int*)(ptr0 - 7) < 0;
    char v164 = 0;
    char v165 = 0;
    if(v160) {
        v152 = &ptr2;
        int v166 = sub_4031DA(v159);
    }
    --v152;
    v152->dwOSVersionInfoSize = &loc_401332;
    int v167 = /*BAD_CALL!*/ sub_4031FC();
    *(ptr0 - 1) = -1;  // } (starts at 40129Dh)
    char v168 = *(ptr0 - 1) ? 0: 1;  // } (starts at 40129Dh)
    char v169 = *(ptr0 - 1) < 0;  // } (starts at 40129Dh)
    char v170 = __parity__((unsigned char)*(ptr0 - 1));  // } (starts at 40129Dh)
    char v171 = 0;  // } (starts at 40129Dh)
    char v172 = 0;  // } (starts at 40129Dh)
    int v173 = v159;
    int v174 = *(ptr0 - 13);
    int v175 = *(ptr0 - 12);
    int v176 = *(ptr0 - 11);
    int v177 = *ptr0;
    int v178 = *(ptr0 + 1);
    v152 = (LPOSVERSIONINFOA)(ptr0 + 2);
    jump v178;
}

int sub_401000() {
    void* ptr0;
    float v0;
    char v1;
    sub_401114(&gvar_40B040);
    *(long long*)&ptr0 = v0;
    *(long long*)&v1 = 0x4014000000000000L;
    int v2 = /*BAD_CALL!*/ sub_4010E3("a is %f, b is %f\n");
    short v3 = (unsigned short)v2;
    fucompp(5.0, v0);
    fnstsw(v3);
    if(!__parity__((unsigned char)(v3 >>> 8) & 0x44)) {
        int v4 = /*BAD_CALL!*/ sub_4010E3("Equal\n");
        v3 = (unsigned short)v4;
    }
    fucompp(5.0, v0);
    fnstsw(v3);
    if(__parity__((unsigned char)(v3 >>> 8) & 0x44)) {
        int v5 = /*BAD_CALL!*/ sub_4010E3("Not Equal\n");
        v3 = (unsigned short)v5;
    }
    fcomp(5.0, v0);
    fnstsw(v3);
    if(!((unsigned char)(v3 >>> 8) & 0x41)) {
        int v6 = /*BAD_CALL!*/ sub_4010E3("Greater\n");
        v3 = (unsigned short)v6;
    }
    fcomp(5.0, v0);
    fnstsw(v3);
    if(!__parity__((unsigned char)(v3 >>> 8) & 0x41)) {
        int v7 = /*BAD_CALL!*/ sub_4010E3("Less or Equal\n");
        v3 = (unsigned short)v7;
    }
    fcomp(5.0, v0);
    fnstsw(v3);
    if(!((unsigned char)(v3 >>> 8) & 0x1)) {
        int v8 = /*BAD_CALL!*/ sub_4010E3("Greater or Equal\n");
        v3 = (unsigned short)v8;
    }
    fcomp(5.0, v0);
    fnstsw(v3);
    if(!__parity__((unsigned char)(v3 >>> 8) & 0x5)) {
        int v9 = sub_4010E3("Less\n");
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4010E3(int param0) {
    char v0;
    unsigned int v1 = (unsigned int)sub_40136E((unsigned int*)0x40B0E8);
    int result = sub_4014C0(4239592, param0, (int)&v0);
    sub_4013F6(v1, (int*)0x40B0E8);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401114(int param0) {
    return sub_401DBC();
}

void sub_401182() {
    char v0 = gvar_40BA30 == 2;
    char v1 = (int)gvar_40BA30 < 2;
    char v2 = __parity__((unsigned char)gvar_40BA30 - 2);
    char v3 = gvar_40BA30 < 2;
    char v4 = (((gvar_40BA30 - 2) ^ gvar_40BA30) & (gvar_40BA30 ^ 0x2)) < 0;
    char v5 = (((gvar_40BA30 - 2) ^ (gvar_40BA30 ^ 0x2)) >>> 4) & 0x1;
    jump v0 ? &sub_401190: &sub_40118B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40118B() {
    /*BAD_CALL!*/ sub_403391();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401190(int param0) {
    sub_40321A(param0);
    return gvar_40B0B8{sub_4031EB}(0xFF);
}

int sub_40136E(unsigned int* param0) {
    int v0;
    unsigned int* ptr0 = param0;
    int v1 = sub_403DF1(*(ptr0 + 4));
    if(v1) {
        if(ptr0 == 4239592) {
            v1 = 0;
            goto loc_401397;
        }
        else if(ptr0 == 4239624) {
            v1 = 1;
        loc_401397:
            ++gvar_40BA3C;
            if(!(*(short*)(ptr0 + 3) & 0x10c)) {
                int v2 = v0;
                unsigned int* ptr1 = (unsigned int*)(v1 * 4 + &gvar_40BA34);
                if(!*ptr1) {
                    v1 = sub_403DDF(0x1000);
                    *ptr1 = v1;
                    if(v1) {
                        goto loc_4013D8;
                    }
                    else {
                        int v3 = 2;
                        *(ptr0 + 2) = (int*)(ptr0 + 5);
                        *ptr0 = (int*)(ptr0 + 5);
                        v1 = v3;
                        *(int*)(ptr0 + 6) = v3;
                        *(int*)(ptr0 + 1) = v1;
                    }
                }
                else {
                loc_4013D8:
                    int v4 = *ptr1;
                    *(int*)(ptr0 + 2) = *ptr1;
                    *ptr0 = v4;
                    *(int*)(ptr0 + 6) = 0x1000;
                    *(int*)(ptr0 + 1) = 0x1000;
                }
                *(short*)(ptr0 + 3) = *(short*)(ptr0 + 3) | 0x1102;
                return 1;
            }
        }
    }
    return 0;
}

int sub_4013F6(unsigned int param0, int* param1) {
    int result;
    if(param0) {
        int* ptr0 = param1;
        if((*((char*)&ptr0[3] + 1) & 0x10)) {
            result = sub_403E18(ptr0);
            *((char*)&ptr0[3] + 1) = *((char*)&ptr0[3] + 1) & 0xee;
            ptr0[6] = 0;
            ptr0[0] = 0;
            ptr0[2] = 0;
        }
    }
    else {
        result = (int)param1;
        if((*(char*)(result + 13) & 0x10)) {
            result = sub_403E18((int*)result);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_401432(unsigned int* param0) {
    int* ptr0;
    unsigned int result;
    if(!(*(char*)(param0 + 3) & 0x40) || *(int*)(param0 + 2)) {
        *(int*)(param0 + 1) = *(int*)(param0 + 1) - 1;
        if(*(int*)(param0 + 1) >= 0) {
            **param0 = (unsigned char)result;
            *param0 = *param0 + 1;
            result = (unsigned int)(unsigned char)result;
        }
        else {
            result = (unsigned int)sub_403F26((int)(unsigned char)result, (int)param0);
        }
        if(result == -1) {
            *ptr0 = -1;
            return -1;
        }
    }
    *ptr0 = *ptr0 + 1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_401465(int param0, unsigned int param1, int param2) {
    unsigned int* result;
    unsigned int* ptr0 = result;
    do {
        if((int)param1 <= 0) {
            return result;
        }
        --param1;
        result = (unsigned int*)sub_401432(param2);
    }
    while(*ptr0 != -1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_401489(unsigned int* param0) {
    int v0;
    int v1;
    int v2;
    unsigned int* result;
    char v3 = *(char*)(v1 + 12) & 0x40 ? 0: 1;
    int v4 = v0;
    unsigned int* ptr0 = result;
    int v5 = v2;
    if(!v3 && !*(int*)(v1 + 8)) {
        result = param0;
        *ptr0 = (int*)(*ptr0 + (int)result);
    }
    else {
        do {
            if((int)param0 <= 0) {
                return result;
            }
            param0 = (unsigned int*)((char*)param0 - 1);
            result = (unsigned int*)sub_401432(v1);
            ++v5;
        }
        while(*ptr0 != -1);
    }
    return result;
}

int sub_4014C0(unsigned int* param0, unsigned int param1, unsigned int* param2) {
    LPSTR v0;
    char v1;
    unsigned int v2;
    unsigned int v3;
    char v4;
    LPSTR v5;
    unsigned int v6;
    unsigned int v7;
    char v8;
    char v9;
    unsigned int v10;
    int v11;
    unsigned int v12;
    unsigned int v13;
    int v14;
    unsigned int v15;
    char v16;
    short v17;
    int v18;
    short v19;
    char v20;
    int result;
    unsigned char v21;
    char v22;
    char v23;
    unsigned int v24;
    char v25;
    unsigned int v26;
    int v27;
    unsigned int v28 = gvar_40B498;
    LPSTR v29 = NULL;
    *(int*)&v17 = 0;
    int v30 = 0;
    unsigned int v31 = param1;
    unsigned int v32 = v26;
    v26 = (unsigned int)*(char*)v31 | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
    unsigned int v33 = 0;
    if((unsigned char)v26) {
        unsigned int v34 = v31;
        while(1) {
            unsigned int v35 = v34 + 1;
            char v36 = *(int*)&v17 < 0;
            param1 = v35;
            if(v36 != 0) {
                break;
            }
            else {
                int v37 = (int)*(unsigned char*)((int)(int*)(((unsigned char)v26 < 32 || (unsigned char)v26 > 120 ? 0: (int)*(char*)((int)(unsigned char)v26 + (int)&ptr_KERNEL32.dll!SetStdHandle) & 0xf) * 8 + (int)&gvar_4090E8) + v33);
                *(int*)&v19 = 7;
                v31 = (unsigned int)(v37 >> 4);
                unsigned int v38 = *(unsigned int*)&v19;
                char v39 = v31 == v38;
                char v40 = v31 < v38;
                unsigned int v41 = v31;
                if((v40 || v39)) {
                    switch(v31) {
                        case 0: {
                        loc_4016DC:
                            unsigned int v42 = gvar_40B490;
                            v10 = 0;
                            unsigned int v43 = (unsigned int)(unsigned char)v26;
                            if((*(char*)(v43 * 2 + v42 + 1) & 0x80)) {
                                unsigned int* ptr0 = param0;
                                *(int*)&v19 = &loc_401700;
                                v43 = /*BAD_CALL!*/ sub_401432(ptr0);
                                v26 = (unsigned int)*(char*)v35 | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                                param1 = v35 + 1;
                            }
                            unsigned int* ptr1 = param0;
                            v43 = (unsigned int)(unsigned char)v26 | ((unsigned int)((v43 >>> 8) & 0xffffff) << 8);
                            *(int*)&v19 = &loc_401719;
                            /*BAD_CALL!*/ sub_401432(ptr1);
                            break;
                        }
                        case 1: {
                            v15 = 0xffffffff;
                            v14 = 0;
                            v13 = 0;
                            v12 = 0;
                            v11 = 0;
                            *(int*)&v25 = 0;
                            v10 = 0;
                            break;
                        }
                        case 2: {
                            v31 = (unsigned int)(unsigned char)v26 - 32;
                            if(v31) {
                                v31 -= 3;
                                if(v31) {
                                    v31 -= 8;
                                    if(v31) {
                                        v31 -= 2;
                                        if(!v31) {
                                            *(int*)&v25 = *(int*)&v25 | 0x4;
                                        }
                                        else if(v31 == 3) {
                                            *(int*)&v25 = *(int*)&v25 | 0x8;
                                        }
                                    }
                                    else {
                                        *(int*)&v25 = *(int*)&v25 | 0x1;
                                    }
                                }
                                else {
                                    v25 |= 128;
                                }
                            }
                            else {
                                *(int*)&v25 = *(int*)&v25 | 0x2;
                            }
                            break;
                        }
                        case 3: {
                            if((unsigned char)v26 == 42) {
                                ++param2;
                                unsigned int* ptr2 = param2;
                                v31 = *(ptr2 - 1);
                                char v44 = v31 >= 0x80000000;
                                v12 = v31;
                                if(v44 != 0) {
                                    *(int*)&v25 = *(int*)&v25 | 0x4;
                                    v12 = (unsigned int)(0 - v12);
                                }
                            }
                            else {
                                v12 = (unsigned int)(v12 * 10 + (int)(unsigned char)v26 - 48);
                            }
                            break;
                        }
                        case 4: {
                            v15 = 0;
                            break;
                        }
                        case 5: {
                            if((unsigned char)v26 == 42) {
                                ++param2;
                                unsigned int* ptr3 = param2;
                                v31 = *(ptr3 - 1);
                                char v45 = v31 >= 0x80000000;
                                v15 = v31;
                                if(v45 != 0) {
                                    v15 = 0xffffffff;
                                }
                            }
                            else {
                                v15 = (unsigned int)(v15 * 10 + (int)(unsigned char)v26 - 48);
                            }
                            break;
                        }
                        case 6: {
                            if((unsigned char)v26 == 73) {
                                v31 = (unsigned int)*(char*)v35 | ((unsigned int)((v31 >>> 8) & 0xffffff) << 8);
                                if(*(char*)v35 == 54 && *(char*)(v35 + 1) == 52) {
                                    unsigned int v46 = v35 + 2;
                                    v9 |= 128;
                                    param1 = v46;
                                    break;
                                }
                                else if((unsigned char)v31 == 51 && *(char*)(v35 + 1) == 50) {
                                    unsigned int v47 = v35 + 2;
                                    v9 &= 127;
                                    param1 = v47;
                                    break;
                                }
                                else if((unsigned char)v31 == 100 || (unsigned char)v31 == 105 || (unsigned char)v31 == 111 || (unsigned char)v31 == 117 || (unsigned char)v31 == 120 || (unsigned char)v31 == 88) {
                                    break;
                                }
                                else {
                                    v41 = 0;
                                    goto loc_4016DC;
                                }
                            }
                            else {
                                switch((unsigned char)v26) {
                                    case 104: {
                                        *(int*)&v25 = *(int*)&v25 | 0x20;
                                        break;
                                    }
                                    case 108: {
                                        *(int*)&v25 = *(int*)&v25 | 0x10;
                                        break;
                                    }
                                    case 119: {
                                        v9 = v9 | 0x8;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        case 7: {
                            v31 = (unsigned int)(unsigned char)v26;
                            if((int)v31 <= 103) {
                                if((int)v31 >= 101) {
                                loc_4017B9:
                                    *(int*)&v25 = *(int*)&v25 | 0x40;
                                    char v48 = v15 ? 0: 1;
                                    char v49 = v15 >= 0x80000000;
                                    LPSTR v50 = &v21;
                                    v5 = &v21;
                                    if(v49 != 0) {
                                        v15 = 6;
                                    }
                                    else if(v48) {
                                        if((unsigned char)v26 == 103) {
                                            v15 = 1;
                                        }
                                    }
                                    else if((int)v15 > 0x200) {
                                        v15 = 0x200;
                                        goto loc_4018F5;
                                    }
                                    else if((int)v15 > 163) {
                                    loc_4018F5:
                                        *(int*)&v19 = v15 + 349;
                                        int v51 = sub_403DDF(*(int*)&v19);
                                        char v52 = v51 ? 0: 1;
                                        v30 = v51;
                                        if(!v52) {
                                            v5 = (LPSTR)v51;
                                            v50 = (LPSTR)v51;
                                        }
                                        else {
                                            v15 = 163;
                                        }
                                    }
                                    unsigned int* ptr4 = param2;
                                    int v53 = *ptr4;
                                    *(int*)&v19 = v14;
                                    unsigned int* ptr5 = ptr4 + 2;
                                    unsigned int v54 = v15;
                                    param2 = ptr5;
                                    int v55 = *(int*)(ptr5 - 1);
                                    int v56 = (int)(unsigned char)v26;
                                    LPSTR v57 = &v21;
                                    int* ptr6 = &v27;
                                    v27 = v53;
                                    gvar_40B348{sub_4051BD}();
                                    int v58 = *(int*)&v25 & 0x80;
                                    char v59 = v58 ? 0: 1;
                                    if(!v59 && !v15) {
                                        *(LPSTR*)&v19 = &v21;
                                        gvar_40B354{sub_4051BD}();
                                    }
                                    if((unsigned char)v26 == 103 && !v58) {
                                        *(LPSTR*)&v19 = &v21;
                                        gvar_40B34C{sub_4051BD}();
                                    }
                                    if(v21 == 45) {
                                        v9 |= 1;
                                        v50 = &v20;
                                        v5 = &v20;
                                    }
                                    *(LPSTR*)&v19 = v50;
                                    v31 = strlen(*(char**)&v19);
                                    goto loc_401B5A;
                                }
                                else {
                                    char v60 = v31 == 88;
                                    if(!v60 && (int)v31 >= 88) {
                                        goto loc_40181A;
                                    }
                                    else if(v60) {
                                    loc_401A03:
                                        *(unsigned int*)&v16 = v38;
                                    loc_401A06:
                                        char v61 = v25 & 0x80 ? 0: 1;
                                        v29 = (LPSTR)0x10;
                                        if(!v61) {
                                            v8 = 48;
                                            char v62 = v16 + 81;
                                            v11 = 2;
                                        loc_401836:
                                            int v63 = *(int*)&v25;
                                            char v64 = v63 & 0x8000 ? 0: 1;
                                            if(!v64) {
                                                unsigned int* ptr7 = param2;
                                                v7 = *ptr7;
                                                v3 = *(ptr7 + 1);
                                                param2 = ptr7 + 2;
                                            }
                                            else {
                                                ++param2;
                                                char v65 = (unsigned char)v63 & 0x20 ? 0: 1;
                                                unsigned int* ptr8 = param2;
                                                if(!v65) {
                                                    v7 = (unsigned int)*(short*)(ptr8 - 1);
                                                    goto loc_401A94;
                                                }
                                                else {
                                                    char v66 = (unsigned char)v63 & 0x40 ? 0: 1;
                                                    v7 = *(ptr8 - 1);
                                                    if(v66) {
                                                        v3 = 0;
                                                    }
                                                    else {
                                                    loc_401A94:
                                                        v3 = v7 >= 0x80000000 ? 0xffffffff: 0;
                                                    }
                                                }
                                            }
                                            if(((unsigned char)v63 & 0x40)) {
                                                char v67 = v3 ? 0: 1;
                                                char v68 = v3 >= 0x80000000;
                                                if((v67 || v68 != 0) && v68 != 0) {
                                                    unsigned int v69 = v7;
                                                    v7 = (unsigned int)(0 - v7);
                                                    v3 = (unsigned int)(0 - ((unsigned int)(v69 > 0) + v3));
                                                    v9 |= 1;
                                                }
                                            }
                                            char v70 = *(int*)&v25 & 0x8000 ? 0: 1;
                                            v26 = v7;
                                            unsigned int v71 = v70 ? 0: v3;
                                            if(v15 >= 0x80000000) {
                                                v15 = 1;
                                            }
                                            else {
                                                *(int*)&v25 = *(int*)&v25 & 0xfffffff7;
                                                if((int)v15 > 0x200) {
                                                    v15 = 0x200;
                                                }
                                            }
                                            if(!(v26 | v71)) {
                                                v11 = 0;
                                            }
                                            char* ptr9 = &v23;
                                            while(1) {
                                                unsigned int v72 = v15;
                                                --v15;
                                                if((int)v72 <= 0 && !(v26 | v71)) {
                                                loc_401B36:
                                                    v31 = (unsigned int)((int)&v23 - (int)ptr9);
                                                    LPSTR v73 = (LPSTR)(ptr9 + 1);
                                                    char v74 = v9 & 0x2 ? 0: 1;
                                                    v29 = (LPSTR)v31;
                                                    v5 = v73;
                                                    if(v74) {
                                                        goto loc_401B61;
                                                    }
                                                    else {
                                                        LPSTR v75 = v73;
                                                        if(v75[0] == 48 && v31) {
                                                            goto loc_401B61;
                                                        }
                                                        else {
                                                            --v5;
                                                            v5[0] = 48;
                                                            ++v31;
                                                        }
                                                    }
                                                    goto loc_401B5A;
                                                }
                                                else {
                                                    unsigned int v76 = (unsigned int)v29;
                                                    *(int*)&v19 = v76 >= 0x80000000 ? -1: 0;
                                                    int v77 = _aulldvrm(v26, v71, v76, *(unsigned int*)&v19);
                                                    unsigned int v78 = (unsigned int)(v18 + 48);
                                                    char v79 = v78 == 57;
                                                    char v80 = (int)v78 < 57;
                                                    char v81 = (((v78 - 57) ^ v78) & (v78 ^ 0x39)) < 0;
                                                    v6 = v26;
                                                    v26 = (unsigned int)v77;
                                                    v71 = v24;
                                                    if(!v79 && v80 == v81) {
                                                        v78 = (unsigned int)(*(int*)&v16 + v78);
                                                    }
                                                    *ptr9 = (unsigned char)v78;
                                                    --ptr9;
                                                }
                                            }
                                            goto loc_401B36;
                                        }
                                        else {
                                            goto loc_401836;
                                        }
                                    }
                                    else {
                                        int v82 = v31 - 67;
                                        char v83 = v82 ? 0: 1;
                                        if(v83) {
                                            if(!(*(short*)&v25 & 0x830)) {
                                                v9 |= 8;
                                                goto loc_4017E5;
                                            loc_40181A:
                                                unsigned int v84 = v31 - 90;
                                                char v85 = v84 ? 0: 1;
                                                if(!v85) {
                                                    int v86 = v84 - 9;
                                                    char v87 = v86 ? 0: 1;
                                                    if(v87) {
                                                        goto loc_4017E5;
                                                    }
                                                    else {
                                                        v31 = (unsigned int)(v86 - 1);
                                                        if(v31) {
                                                            goto loc_401B61;
                                                        }
                                                        else {
                                                            *(int*)&v25 = *(int*)&v25 | 0x40;
                                                            v29 = (LPSTR)0xA;
                                                            goto loc_401836;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                            loc_4017E5:
                                                ++param2;
                                                char v88 = *(short*)&v25 & 0x810 ? 0: 1;
                                                unsigned int* ptr10 = param2;
                                                if(!v88) {
                                                    *(int*)&v19 = (int)*(short*)(ptr10 - 1);
                                                    LPSTR v89 = sub_40410B(&v21, v19);
                                                    char v90 = (int)v89 < 0;
                                                    v29 = v89;
                                                    if(v90 != 0) {
                                                        v13 = 1;
                                                    }
                                                }
                                                else {
                                                    ptr10 = (unsigned int)*(char*)(ptr10 - 1) | ((unsigned int)(int*)((int)(int*)((int)ptr10 >>> 8) & 0xffffff) << 8);
                                                    v21 = (unsigned char)ptr10;
                                                    v29 = (LPSTR)0x1;
                                                }
                                                v5 = &v21;
                                                goto loc_401B61;
                                            }
                                            ++param2;
                                            unsigned int* ptr11 = param2;
                                            short* ptr12 = *(ptr11 - 1);
                                            char v91 = ptr12 ? 0: 1;
                                            if(v91) {
                                                LPSTR v92 = gvar_40B0C0;
                                                v5 = gvar_40B0C0;
                                                *(LPSTR*)&v19 = v92;
                                                v31 = strlen(*(char**)&v19);
                                                goto loc_401B5A;
                                            }
                                            else {
                                                LPSTR v93 = *(LPSTR*)(ptr12 + 2);
                                                char v94 = v93 ? 0: 1;
                                                if(v94) {
                                                    LPSTR v92 = gvar_40B0C0;
                                                    v5 = gvar_40B0C0;
                                                    *(LPSTR*)&v19 = v92;
                                                    v31 = strlen(*(char**)&v19);
                                                    goto loc_401B5A;
                                                }
                                                else {
                                                    v4 = v9 & 0x8 ? 0: 1;
                                                    v31 = (unsigned int)*ptr12;
                                                    v5 = v93;
                                                }
                                            }
                                            if(!v4) {
                                                v3 = v31 >= 0x80000000 ? 0xffffffff: 0;
                                                unsigned int v95 = v31 - v3;
                                                v31 = v95 >> 1;
                                                v10 = 1;
                                            }
                                            else {
                                                v10 = 0;
                                            }
                                            goto loc_401B5A;
                                        }
                                        else {
                                            int v96 = v82 - 2;
                                            if(!v96) {
                                                v14 = 1;
                                                v26 = (unsigned int)((unsigned char)v26 + 32) | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                                                goto loc_4017B9;
                                            }
                                            else {
                                                unsigned int v97 = (unsigned int)(v96 - 2);
                                                if(!v97) {
                                                    v14 = 1;
                                                    v26 = (unsigned int)((unsigned char)v26 + 32) | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                                                    goto loc_4017B9;
                                                }
                                                else if(v97 != 12) {
                                                    goto loc_401B61;
                                                }
                                            }
                                        }
                                    }
                                }
                                if(!(*(short*)&v25 & 0x830)) {
                                    v9 |= 8;
                                }
                                goto loc_401768;
                            }
                            else {
                                unsigned int v98 = v31 - 105;
                                char v99 = v98 ? 0: 1;
                                if(v99) {
                                    *(int*)&v25 = *(int*)&v25 | 0x40;
                                    v29 = (LPSTR)0xA;
                                    goto loc_401836;
                                }
                                else {
                                    int v100 = v98 - 5;
                                    char v101 = v100 ? 0: 1;
                                    if(v101) {
                                        ++param2;
                                        char v102 = v25 & 0x20 ? 0: 1;
                                        unsigned int* ptr13 = param2;
                                        v31 = *(ptr13 - 1);
                                        if(!v102) {
                                            *(short*)v31 = v17;
                                        }
                                        else {
                                            *(int*)v31 = *(int*)&v17;
                                        }
                                        v13 = 1;
                                        goto loc_401C62;
                                    }
                                    else {
                                        int v103 = v100 - 1;
                                        char v104 = v103 ? 0: 1;
                                        if(v104) {
                                            char v105 = v25 & 0x80 ? 0: 1;
                                            v29 = (LPSTR)0x8;
                                            if(!v105) {
                                                v9 |= 2;
                                            }
                                            goto loc_401836;
                                        }
                                        else {
                                            v31 = (unsigned int)(v103 - 1);
                                            if(!v31) {
                                                v15 = 8;
                                                goto loc_401A03;
                                            }
                                            else {
                                                int v106 = v31 - 3;
                                                char v107 = v106 ? 0: 1;
                                                if(!v107) {
                                                    unsigned int v108 = (unsigned int)(v106 - 2);
                                                    if(!v108) {
                                                        v29 = (LPSTR)0xA;
                                                        goto loc_401836;
                                                    }
                                                    else {
                                                        v31 = v108 - 3;
                                                        if(v31) {
                                                            goto loc_401B61;
                                                        }
                                                        else {
                                                            *(int*)&v16 = 39;
                                                            goto loc_401A06;
                                                        }
                                                    }
                                                }
                                                else {
                                                loc_401768:
                                                    v2 = v15;
                                                    char v109 = v2 == -1;
                                                    if(v109) {
                                                        v2 = 0x7fffffff;
                                                    }
                                                    ++param2;
                                                    v1 = *(short*)&v25 & 0x810 ? 0: 1;
                                                    unsigned int* ptr14 = param2;
                                                    v0 = *(LPSTR*)(ptr14 - 1);
                                                    v5 = *(LPSTR*)(ptr14 - 1);
                                                }
                                            }
                                        }
                                    }
                                }
                                if(!v1) {
                                    if(!v0) {
                                        v5 = gvar_40B0C4;
                                    }
                                    LPSTR v110 = v5;
                                    v10 = 1;
                                    while(v2) {
                                        --v2;
                                        if(!*(short*)&v110[0]) {
                                            break;
                                        }
                                        else {
                                            v110 += 2;
                                        }
                                    }
                                    v31 = (unsigned int)((int)(int*)((int)v110 - (int)v5) >> 1);
                                }
                                else {
                                    if(!v0) {
                                        v5 = gvar_40B0C0;
                                    }
                                    LPSTR v111 = v5;
                                    while(v2) {
                                        --v2;
                                        if(!v111[0]) {
                                            break;
                                        }
                                        else {
                                            ++v111;
                                        }
                                    }
                                    v31 = (unsigned int)((int)v111 - (int)v5);
                                }
                            loc_401B5A:
                                v29 = (LPSTR)v31;
                            loc_401B61:
                                if(!v13) {
                                    v26 = *(unsigned int*)&v25;
                                    if(((unsigned char)v26 & 0x40)) {
                                        if(((unsigned char)(v26 >>> 8) & 0x1)) {
                                            v8 = 45;
                                            goto loc_401B8E;
                                        }
                                        else {
                                            if(((unsigned char)v26 & 0x1)) {
                                                v8 = 43;
                                                goto loc_401B8E;
                                            }
                                            if(((unsigned char)v26 & 0x2)) {
                                                v8 = 32;
                                            loc_401B8E:
                                                v11 = 1;
                                            }
                                        }
                                    }
                                    unsigned int v112 = (unsigned int)(v12 - v11 - (int)v29);
                                    if(!((unsigned char)v26 & 0xc)) {
                                        *(unsigned int**)&v19 = param0;
                                        sub_401465(32, v112, *(int*)&v19);
                                    }
                                    *(int*)&v19 = v11;
                                    unsigned int* ptr15 = param0;
                                    sub_401489(*(unsigned int**)&v19);
                                    if(((unsigned char)v26 & 0x8) && !((unsigned char)v26 & 0x4)) {
                                        *(unsigned int**)&v19 = ptr15;
                                        sub_401465(48, v112, *(int*)&v19);
                                    }
                                    if(v10 && (int)v29 > 0) {
                                        v26 = (unsigned int)v5;
                                        v6 = (unsigned int)v29;
                                        do {
                                            --v6;
                                            *(int*)&v19 = (unsigned int)*(short*)v26;
                                            v31 = (unsigned int)sub_40410B(&v22, v19);
                                            v26 += 2;
                                            if((int)v31 <= 0) {
                                                break;
                                            }
                                            else {
                                                *(unsigned int*)&v19 = v31;
                                                sub_401489(*(unsigned int**)&v19);
                                            }
                                        }
                                        while(v6);
                                    }
                                    else {
                                        *(LPSTR*)&v19 = v29;
                                        sub_401489(*(unsigned int**)&v19);
                                    }
                                    if((v25 & 0x4)) {
                                        *(unsigned int**)&v19 = param0;
                                        sub_401465(32, v112, *(int*)&v19);
                                    }
                                }
                            }
                        loc_401C62:
                            if(v30) {
                                *(int*)&v19 = v30;
                                sub_40403C(*(int*)&v19);
                                v30 = 0;
                            }
                            break;
                        }
                        default: {
                            throw 0;
                        }
                    }
                }
                v34 = param1;
                v26 = (unsigned int)*(char*)v34 | ((unsigned int)((v26 >>> 8) & 0xffffff) << 8);
                if(!*(char*)v34) {
                    break;
                }
                else {
                    v33 = v41;
                }
            }
        }
    }
    sub_4041A2((int)v28);
    return result;
}

int sub_401D74() {
    int v0;
    int result = v0;
    int v1 = (int)gvar_40B4A0 > 1 ? sub_404318(result, 4): (unsigned int)*(char*)(result * 2 + gvar_40B490) & 0x4;
    if(!v1) {
        result = (int)((unsigned int)(result & 0xffffffdf) - 7);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401DA6(int param0, unsigned int* param1) {
    int result;
    *(int*)(param1 + 1) = *(int*)(param1 + 1) - 1;
    if(*(int*)(param1 + 1) >= 0) {
        char* ptr0 = *param1;
        result = (unsigned int)*ptr0;
        *param1 = (int*)(ptr0 + 1);
    }
    else {
        result = sub_404396((int)param1);
    }
    return result;
}

int sub_401DBC(int param0) {
    char v0;
    char v1;
    char v2;
    int v3;
    unsigned char* ptr0;
    long long v4;
    char v5;
    int v6;
    unsigned char v7;
    char* ptr1;
    char* ptr2;
    unsigned char* ptr3;
    int v8;
    int v9;
    short* ptr4;
    char v10;
    int v11;
    int v12;
    char v13;
    int v14;
    unsigned int* ptr5;
    int v15;
    int v16;
    char v17;
    int v18;
    void* ptr6;
    char v19;
    int v20;
    char v21;
    int v22;
    char v23;
    char v24;
    int v25;
    int* ptr7;
    int v26;
    char v27;
    char v28;
    char v29;
    char v30;
    char* ptr8 = &ptr6;
    int v31 = SEH_prolog(&gvar_409160, 0x1cc);
    unsigned int v32 = gvar_40B498;
    *(unsigned int*)(ptr7 - 7) = gvar_40B498;
    int v33 = 0;
    char v34 = 1;
    char v35 = 0;
    char v36 = 1;
    char v37 = 0;
    char v38 = 0;
    *(ptr7 - 111) = 0;
    *(ptr7 - 118) = 0;
    *(ptr7 - 108) = 0;
    *(ptr7 - 101) = 0;
    *(char*)((char*)ptr7 - 405) = 0;
    *(ptr7 - 97) = 0;
    *(ptr7 - 110) = 0;
loc_401DFF:
    unsigned char* ptr9 = *(unsigned int*)(ptr7 + 3);
loc_401E02:
    v33 = (unsigned int)*ptr9 | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
    char v39 = *ptr9 ? 0: 1;
    char v40 = (unsigned char)v33 < 0;
    char v41 = __parity__((unsigned char)v33);
    char v42 = 0;
    char v43 = 0;
    if(!v39) {
        int v44 = (unsigned int)(unsigned char)v33;
        char v45 = gvar_40B4A0 == 1;
        char v46 = (int)gvar_40B4A0 < 1;
        char v47 = __parity__((unsigned char)gvar_40B4A0 - 1);
        char v48 = gvar_40B4A0 < 1;
        char v49 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
        char v50 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
        if(!v45 && v46 == v49) {
            *(int*)&v19 = v44;
            v16 = sub_404318(*(int*)&v19, 8);
            int v51 = *(int*)&v19;
            v15 = (int)ptr6;
            ptr8 = &v18;
        }
        else {
            v15 = gvar_40B490;
            int v52 = (unsigned int)*(char*)(v44 * 2 + v15);
            v16 = v52 & 0x8;
            char v53 = v16 ? 0: 1;
            char v54 = v16 < 0;
            char v55 = __parity__((unsigned char)v16);
            char v56 = 0;
            char v57 = 0;
        }
        ptr5 = NULL;
        char v58 = v16 == 0;
        char v59 = v16 < 0;
        char v60 = __parity__((unsigned char)v16);
        char v61 = (unsigned int)v16 < 0;
        char v62 = 0;
        char v63 = 0;
        if(!v58) {
            int v64 = *(ptr7 - 97);
            *(ptr7 - 97) = *(ptr7 - 97) - 1;
            char v65 = *(ptr7 - 97) ? 0: 1;
            char v66 = *(ptr7 - 97) < 0;
            char v67 = __parity__((unsigned char)*(ptr7 - 97));
            char v68 = ((~*(ptr7 - 97) ^ ~v64) >>> 4) & 0x1;
            char v69 = ((*(ptr7 - 97) ^ v64) & v64) < 0;
        }
        else {
            v14 = *(ptr7 + 3);
            char v70 = *(char*)v14 == 37;
            char v71 = *(char*)v14 < 37;
            char v72 = __parity__(*(char*)v14 - 37);
            char v73 = *(unsigned char*)v14 < 37;
            char v74 = (((*(char*)v14 - 37) ^ *(char*)v14) & (*(char*)v14 ^ 0x25)) < 0;
            char v75 = (((*(char*)v14 - 37) ^ (*(char*)v14 ^ 0x25)) >>> 4) & 0x1;
            if(v70) {
                *(ptr7 - 104) = 0;
                *(char*)(ptr7 - 102) = 0;
                *(ptr7 - 103) = 0;
                *(ptr7 - 109) = 0;
                *(ptr7 - 99) = 0;
                *(char*)((char*)ptr7 - 0x1a1) = 0;
                *(char*)((char*)ptr7 - 407) = 0;
                *(char*)((char*)ptr7 - 398) = 0;
                *(char*)((char*)ptr7 - 381) = 0;
                *(char*)((char*)ptr7 - 406) = 0;
                *(char*)((char*)ptr7 - 389) = 0;
                *(char*)((char*)ptr7 - 397) = 1;
                *(ptr7 - 114) = 0;
                goto loc_401EE0;
            }
            else {
                int v76 = *(ptr7 - 97);
                *(ptr7 - 97) = *(ptr7 - 97) + 1;
                char v77 = *(ptr7 - 97) ? 0: 1;
                char v78 = *(ptr7 - 97) < 0;
                char v79 = __parity__((unsigned char)*(ptr7 - 97));
                char v80 = (((v76 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                char v81 = ((*(ptr7 - 97) ^ v76) & ~(v76 ^ 0x1)) < 0;
                unsigned int* ptr10 = *(unsigned int**)(ptr7 + 2);
                ptr8 = &ptr6;
                int v82 = sub_401DA6(v15, ptr10);
                int v83 = v82;
                *(ptr7 - 101) = v82;
                unsigned int v84 = (unsigned int)*(char*)v14;
                int v85 = v14;
                ptr9 = (unsigned char*)(v14 + 1);
                char v86 = ptr9 ? 0: 1;
                char v87 = (int)ptr9 < 0;
                char v88 = __parity__((unsigned char)ptr9);
                char v89 = (int*)((int)(int*)((int)(int*)((v85 ^ 0x1) ^ (int)ptr9) >>> 4) & 0x1);
                char v90 = (int)(int*)((int)(int*)((int)ptr9 ^ v85) & ~(v85 ^ 0x1)) < 0;
                *(unsigned int*)(ptr7 + 3) = ptr9;
                char v91 = v84 == v83;
                char v92 = (int)v84 < v83;
                char v93 = __parity__((unsigned char)v84 - (unsigned char)v83);
                char v94 = v84 < (unsigned int)v83;
                char v95 = (((v84 - v83) ^ v84) & (v84 ^ v83)) < 0;
                char v96 = (((v84 - v83) ^ (v84 ^ v83)) >>> 4) & 0x1;
                if(v91) {
                    v33 = (int)(unsigned char)v83;
                    int v97 = gvar_40B490;
                    char v98 = *(char*)(v33 * 2 + v97 + 1) & 0x80 ? 0: 1;
                    char v99 = (*(char*)(v33 * 2 + v97 + 1) & 0x80) < 0;
                    char v100 = __parity__(*(char*)(v33 * 2 + v97 + 1) & 0x80);
                    char v101 = 0;
                    char v102 = 0;
                    if(v98) {
                    loc_402BBD:
                        char v103 = *(ptr7 - 101) == -1;
                        char v104 = *(ptr7 - 101) < -1;
                        char v105 = __parity__((unsigned char)*(ptr7 - 101) - 0xFF);
                        char v106 = *(unsigned int*)(ptr7 - 101) < 0xffffffff;
                        char v107 = (((*(ptr7 - 101) + 1) ^ *(ptr7 - 101)) & ~*(ptr7 - 101)) < 0;
                        char v108 = (((*(ptr7 - 101) + 1) ^ ~*(ptr7 - 101)) >>> 4) & 0x1;
                        if(!v103) {
                            goto loc_401E02;
                        }
                        else {
                            char v109 = *ptr9 == 37;
                            char v110 = *ptr9 < 37;
                            char v111 = __parity__(*ptr9 - 37);
                            char v112 = *ptr9 < 37;
                            char v113 = (((*ptr9 - 37) ^ *ptr9) & (*ptr9 ^ 0x25)) < 0;
                            char v114 = (((*ptr9 - 37) ^ (*ptr9 ^ 0x25)) >>> 4) & 0x1;
                            if(v109) {
                                v33 = *(ptr7 + 3);
                                char v115 = *(char*)(v33 + 1) == 110;
                                char v116 = *(char*)(v33 + 1) < 110;
                                char v117 = __parity__(*(char*)(v33 + 1) - 110);
                                char v118 = *(unsigned char*)(v33 + 1) < 110;
                                char v119 = (((*(char*)(v33 + 1) - 110) ^ *(char*)(v33 + 1)) & (*(char*)(v33 + 1) ^ 0x6e)) < 0;
                                char v120 = (((*(char*)(v33 + 1) - 110) ^ (*(char*)(v33 + 1) ^ 0x6e)) >>> 4) & 0x1;
                                if(v115) {
                                    goto loc_401DFF;
                                }
                            }
                        }
                        goto loc_402BDC;
                    }
                    else {
                        int v121 = *(ptr7 - 97);
                        *(ptr7 - 97) = *(ptr7 - 97) + 1;
                        char v122 = *(ptr7 - 97) ? 0: 1;
                        char v123 = *(ptr7 - 97) < 0;
                        char v124 = __parity__((unsigned char)*(ptr7 - 97));
                        char v125 = (((v121 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                        char v126 = ((*(ptr7 - 97) ^ v121) & ~(v121 ^ 0x1)) < 0;
                        unsigned int* ptr11 = *(unsigned int**)(ptr7 + 2);
                        ptr8 = &ptr6;
                        v33 = sub_401DA6(v97, ptr11);
                        unsigned int v127 = (unsigned int)*ptr9;
                        unsigned char* ptr12 = ptr9;
                        ++ptr9;
                        char v128 = ptr9 ? 0: 1;
                        char v129 = (int)ptr9 < 0;
                        char v130 = __parity__((unsigned char)ptr9);
                        char v131 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 ^ 0x1) ^ (int)ptr9) >>> 4) & 0x1);
                        char v132 = (int)(int*)((int)(int*)((int)ptr9 ^ (int)ptr12) & (int*)~(int)(int*)((int)ptr12 ^ 0x1)) < 0;
                        *(unsigned int*)(ptr7 + 3) = ptr9;
                        char v133 = v33 == v127;
                        char v134 = v33 > (int)v127;
                        char v135 = __parity__((unsigned char)v127 - (unsigned char)v33);
                        char v136 = (unsigned int)v33 > v127;
                        char v137 = (((v127 - v33) ^ v127) & (v33 ^ v127)) < 0;
                        char v138 = (((v127 - v33) ^ (v33 ^ v127)) >>> 4) & 0x1;
                        if(v133) {
                            int v139 = *(ptr7 - 97);
                            *(ptr7 - 97) = *(ptr7 - 97) - 1;
                            char v140 = *(ptr7 - 97) ? 0: 1;
                            char v141 = *(ptr7 - 97) < 0;
                            char v142 = __parity__((unsigned char)*(ptr7 - 97));
                            char v143 = ((~*(ptr7 - 97) ^ ~v139) >>> 4) & 0x1;
                            char v144 = ((*(ptr7 - 97) ^ v139) & v139) < 0;
                            goto loc_402BBD;
                        }
                        else {
                            char v145 = v33 == -1;
                            char v146 = v33 < -1;
                            char v147 = __parity__((unsigned char)v33 - 0xFF);
                            char v148 = (unsigned int)v33 < 0xffffffff;
                            char v149 = (((v33 + 1) ^ v33) & ~v33) < 0;
                            char v150 = (((v33 + 1) ^ ~v33) >>> 4) & 0x1;
                            if(!v145) {
                                ptr6 = *(void**)(ptr7 + 2);
                                *(int*)&v19 = v33;
                                int v151 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
                                int v152 = *(int*)&v19;
                                void* ptr13 = ptr6;
                            }
                        }
                    }
                }
                v13 = v83 == -1;
                char v153 = v83 < -1;
                char v154 = __parity__((unsigned char)v83 - 0xFF);
                char v155 = (unsigned int)v83 < 0xffffffff;
                char v156 = (((v83 + 1) ^ v83) & ~v83) < 0;
                char v157 = (((v83 + 1) ^ ~v83) >>> 4) & 0x1;
            loc_402BA3:
                if(!v13) {
                    ptr6 = *(void**)(ptr7 + 2);
                    *(int*)&v19 = *(ptr7 - 101);
                    int v158 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
                    int v159 = *(int*)&v19;
                    void* ptr14 = ptr6;
                }
                goto loc_402BDC;
            }
        }
        do {
            int v160 = *(ptr7 - 97);
            *(ptr7 - 97) = *(ptr7 - 97) + 1;
            char v161 = *(ptr7 - 97) ? 0: 1;
            char v162 = *(ptr7 - 97) < 0;
            char v163 = __parity__((unsigned char)*(ptr7 - 97));
            char v164 = (((v160 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
            char v165 = ((*(ptr7 - 97) ^ v160) & ~(v160 ^ 0x1)) < 0;
            unsigned int* ptr15 = *(unsigned int**)(ptr7 + 2);
            int v166 = sub_401DA6(v15, ptr15);
            v12 = v166;
            ptr6 = (void*)v166;
            *(int*)&v19 = &loc_401E53;
            /*BAD_CALL!*/ sub_4044E0();
            v15 = (int)ptr6;
            v21 = v26 ? 0: 1;
            char v167 = v26 < 0;
            char v168 = __parity__((unsigned char)v26);
            char v169 = 0;
            char v170 = 0;
        }
        while(!v21);
        char v171 = v12 == -1;
        char v172 = v12 < -1;
        char v173 = __parity__((unsigned char)v12 - 0xFF);
        char v174 = (unsigned int)v12 < 0xffffffff;
        char v175 = (((v12 + 1) ^ v12) & ~v12) < 0;
        char v176 = (((v12 + 1) ^ ~v12) >>> 4) & 0x1;
        if(!v171) {
            ptr6 = *(void**)(ptr7 + 2);
            *(int*)&v19 = v12;
            int v177 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
            int v178 = *(int*)&v19;
            void* ptr16 = ptr6;
            goto loc_401E68;
        loc_401EE0:
            do {
                int v179 = v14;
                ++v14;
                char v180 = v14 ? 0: 1;
                char v181 = v14 < 0;
                char v182 = __parity__((unsigned char)v14);
                char v183 = (int*)((int)(int*)((int)(int*)((int)(int*)(v179 ^ 0x1) ^ v14) >>> 4) & 0x1);
                char v184 = (int)(int*)((int)(int*)(v14 ^ v179) & (int*)~(int)(int*)(v179 ^ 0x1)) < 0;
                unsigned int v185 = (unsigned int)*(char*)v14;
                int v186 = (unsigned int)*(char*)v14;
                char v187 = gvar_40B4A0 == 1;
                char v188 = (int)gvar_40B4A0 < 1;
                char v189 = __parity__((unsigned char)gvar_40B4A0 - 1);
                char v190 = gvar_40B4A0 < 1;
                char v191 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                char v192 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                if(!v187 && v188 == v191) {
                    *(int*)&v19 = v186;
                    v33 = sub_404318(*(int*)&v19, 4);
                    int v193 = *(int*)&v19;
                    v11 = (int)ptr6;
                    ptr8 = &v18;
                }
                else {
                    v11 = gvar_40B490;
                    int v194 = (unsigned int)*(char*)(v186 * 2 + v11);
                    v33 = v194 & 0x4;
                    char v195 = v33 ? 0: 1;
                    char v196 = v33 < 0;
                    char v197 = __parity__((unsigned char)v33);
                    char v198 = 0;
                    char v199 = 0;
                }
                char v200 = v33 ? 0: 1;
                char v201 = v33 < 0;
                char v202 = __parity__((unsigned char)v33);
                char v203 = 0;
                char v204 = 0;
                if(!v200) {
                    int v205 = *(ptr7 - 109);
                    *(ptr7 - 109) = *(ptr7 - 109) + 1;
                    char v206 = *(ptr7 - 109) ? 0: 1;
                    char v207 = *(ptr7 - 109) < 0;
                    char v208 = __parity__((unsigned char)*(ptr7 - 109));
                    char v209 = (((v205 ^ 0x1) ^ *(ptr7 - 109)) >>> 4) & 0x1;
                    char v210 = ((*(ptr7 - 109) ^ v205) & ~(v205 ^ 0x1)) < 0;
                    v33 = (int)ptr5 * 5;
                    ptr5 = (unsigned int*)(v33 * 2 + v185 - 48);
                }
                else {
                    char v211 = v185 == 78;
                    char v212 = (int)v185 < 78;
                    char v213 = __parity__((unsigned char)v185 - 78);
                    char v214 = v185 < 78;
                    char v215 = (((v185 - 78) ^ v185) & (v185 ^ 0x4e)) < 0;
                    char v216 = (((v185 - 78) ^ (v185 ^ 0x4e)) >>> 4) & 0x1;
                    if(!v211 && v212 == v215) {
                        char v217 = v185 == 104;
                        char v218 = (int)v185 < 104;
                        char v219 = __parity__((unsigned char)v185 - 104);
                        char v220 = v185 < 104;
                        char v221 = (((v185 - 104) ^ v185) & (v185 ^ 0x68)) < 0;
                        char v222 = (((v185 - 104) ^ (v185 ^ 0x68)) >>> 4) & 0x1;
                        if(!v217) {
                            char v223 = v185 == 108;
                            char v224 = (int)v185 < 108;
                            char v225 = __parity__((unsigned char)v185 - 108);
                            char v226 = v185 < 108;
                            char v227 = (((v185 - 108) ^ v185) & (v185 ^ 0x6c)) < 0;
                            char v228 = (((v185 - 108) ^ (v185 ^ 0x6c)) >>> 4) & 0x1;
                            if(!v223) {
                                char v229 = v185 == 119;
                                char v230 = (int)v185 < 119;
                                char v231 = __parity__((unsigned char)v185 - 119);
                                char v232 = v185 < 119;
                                char v233 = (((v185 - 119) ^ v185) & (v185 ^ 0x77)) < 0;
                                char v234 = (((v185 - 119) ^ (v185 ^ 0x77)) >>> 4) & 0x1;
                                if(!v229) {
                                loc_401FBC:
                                    v10 = *(char*)((char*)ptr7 - 381);
                                    *(char*)((char*)ptr7 - 381) = *(char*)((char*)ptr7 - 381) + 1;
                                    char v235 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                    char v236 = *(char*)((char*)ptr7 - 381) < 0;
                                    char v237 = __parity__(*(char*)((char*)ptr7 - 381));
                                    char v238 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 381)) >>> 4) & 0x1;
                                    char v239 = ((*(char*)((char*)ptr7 - 381) ^ v10) & ~(v10 ^ 0x1)) < 0;
                                    goto loc_401FDE;
                                }
                            }
                            else {
                                char v240 = *(char*)((char*)ptr7 - 397);
                                *(char*)((char*)ptr7 - 397) = *(char*)((char*)ptr7 - 397) + 1;
                                char v241 = *(char*)((char*)ptr7 - 397) ? 0: 1;
                                char v242 = *(char*)((char*)ptr7 - 397) < 0;
                                char v243 = __parity__(*(char*)((char*)ptr7 - 397));
                                char v244 = (((v240 ^ 0x1) ^ *(char*)((char*)ptr7 - 397)) >>> 4) & 0x1;
                                char v245 = ((*(char*)((char*)ptr7 - 397) ^ v240) & ~(v240 ^ 0x1)) < 0;
                            }
                            v10 = *(char*)((char*)ptr7 - 389);
                            *(char*)((char*)ptr7 - 389) = *(char*)((char*)ptr7 - 389) + 1;
                            char v246 = *(char*)((char*)ptr7 - 389) ? 0: 1;
                            char v247 = *(char*)((char*)ptr7 - 389) < 0;
                            char v248 = __parity__(*(char*)((char*)ptr7 - 389));
                            char v249 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 389)) >>> 4) & 0x1;
                            char v250 = ((*(char*)((char*)ptr7 - 389) ^ v10) & ~(v10 ^ 0x1)) < 0;
                        }
                        else {
                            *(char*)((char*)ptr7 - 397) = *(char*)((char*)ptr7 - 397) + 0xFF;
                            v10 = *(char*)((char*)ptr7 - 389);
                            *(char*)((char*)ptr7 - 389) = *(char*)((char*)ptr7 - 389) + 0xFF;
                            char v251 = *(char*)((char*)ptr7 - 389) ? 0: 1;
                            char v252 = *(char*)((char*)ptr7 - 389) < 0;
                            char v253 = __parity__(*(char*)((char*)ptr7 - 389));
                            char v254 = ((~*(char*)((char*)ptr7 - 389) ^ ~v10) >>> 4) & 0x1;
                            char v255 = ((*(char*)((char*)ptr7 - 389) ^ v10) & v10) < 0;
                        }
                    }
                    else if(!v211) {
                        char v256 = v185 == 42;
                        char v257 = (int)v185 < 42;
                        char v258 = __parity__((unsigned char)v185 - 42);
                        char v259 = v185 < 42;
                        char v260 = (((v185 - 42) ^ v185) & (v185 ^ 0x2a)) < 0;
                        char v261 = (((v185 - 42) ^ (v185 ^ 0x2a)) >>> 4) & 0x1;
                        if(!v256) {
                            char v262 = v185 == 70;
                            char v263 = (int)v185 < 70;
                            char v264 = __parity__((unsigned char)v185 - 70);
                            char v265 = v185 < 70;
                            char v266 = (((v185 - 70) ^ v185) & (v185 ^ 0x46)) < 0;
                            char v267 = (((v185 - 70) ^ (v185 ^ 0x46)) >>> 4) & 0x1;
                            if(!v262) {
                                char v268 = v185 == 73;
                                char v269 = (int)v185 < 73;
                                char v270 = __parity__((unsigned char)v185 - 73);
                                char v271 = v185 < 73;
                                char v272 = (((v185 - 73) ^ v185) & (v185 ^ 0x49)) < 0;
                                char v273 = (((v185 - 73) ^ (v185 ^ 0x49)) >>> 4) & 0x1;
                                if(!v268) {
                                    char v274 = v185 == 76;
                                    char v275 = (int)v185 < 76;
                                    char v276 = __parity__((unsigned char)v185 - 76);
                                    char v277 = v185 < 76;
                                    char v278 = (((v185 - 76) ^ v185) & (v185 ^ 0x4c)) < 0;
                                    char v279 = (((v185 - 76) ^ (v185 ^ 0x4c)) >>> 4) & 0x1;
                                    if(!v274) {
                                        goto loc_401FBC;
                                    }
                                    else {
                                        v10 = *(char*)((char*)ptr7 - 397);
                                        *(char*)((char*)ptr7 - 397) = *(char*)((char*)ptr7 - 397) + 1;
                                        char v280 = *(char*)((char*)ptr7 - 397) ? 0: 1;
                                        char v281 = *(char*)((char*)ptr7 - 397) < 0;
                                        char v282 = __parity__(*(char*)((char*)ptr7 - 397));
                                        char v283 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 397)) >>> 4) & 0x1;
                                        char v284 = ((*(char*)((char*)ptr7 - 397) ^ v10) & ~(v10 ^ 0x1)) < 0;
                                    }
                                }
                                else {
                                    v11 = (unsigned int)*(char*)(v14 + 1) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                                    char v285 = *(char*)(v14 + 1) == 54;
                                    char v286 = (unsigned char)v11 < 54;
                                    char v287 = __parity__((unsigned char)v11 - 54);
                                    char v288 = (unsigned char)v11 < 54;
                                    char v289 = ((((unsigned char)v11 - 54) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x36)) < 0;
                                    char v290 = ((((unsigned char)v11 - 54) ^ ((unsigned char)v11 ^ 0x36)) >>> 4) & 0x1;
                                    if(v285) {
                                        v33 = v14 + 2;
                                        char v291 = *(char*)v33 == 52;
                                        char v292 = *(char*)v33 < 52;
                                        char v293 = __parity__(*(char*)v33 - 52);
                                        char v294 = *(unsigned char*)v33 < 52;
                                        char v295 = (((*(char*)v33 - 52) ^ *(char*)v33) & (*(char*)v33 ^ 0x34)) < 0;
                                        char v296 = (((*(char*)v33 - 52) ^ (*(char*)v33 ^ 0x34)) >>> 4) & 0x1;
                                        if(v291) {
                                            v14 = v33;
                                            *(ptr7 - 114) = *(ptr7 - 114) + 1;
                                            *(ptr7 - 107) = 0;
                                            *(ptr7 - 106) = 0;
                                            char v297 = *(ptr7 - 106) ? 0: 1;
                                            char v298 = *(ptr7 - 106) < 0;
                                            char v299 = __parity__((unsigned char)*(ptr7 - 106));
                                            char v300 = 0;
                                            char v301 = 0;
                                            goto loc_401FDE;
                                        }
                                    }
                                    char v302 = (unsigned char)v11 == 51;
                                    char v303 = (unsigned char)v11 < 51;
                                    char v304 = __parity__((unsigned char)v11 - 51);
                                    char v305 = (unsigned char)v11 < 51;
                                    char v306 = ((((unsigned char)v11 - 51) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x33)) < 0;
                                    char v307 = ((((unsigned char)v11 - 51) ^ ((unsigned char)v11 ^ 0x33)) >>> 4) & 0x1;
                                    if(v302) {
                                        v33 = v14 + 2;
                                        char v308 = *(char*)v33 == 50;
                                        char v309 = *(char*)v33 < 50;
                                        char v310 = __parity__(*(char*)v33 - 50);
                                        char v311 = *(unsigned char*)v33 < 50;
                                        char v312 = (((*(char*)v33 - 50) ^ *(char*)v33) & (*(char*)v33 ^ 0x32)) < 0;
                                        char v313 = (((*(char*)v33 - 50) ^ (*(char*)v33 ^ 0x32)) >>> 4) & 0x1;
                                        if(v308) {
                                            v14 = v33;
                                            goto loc_401FDE;
                                        }
                                    }
                                    char v314 = (unsigned char)v11 == 100;
                                    char v315 = (unsigned char)v11 < 100;
                                    char v316 = __parity__((unsigned char)v11 - 100);
                                    char v317 = (unsigned char)v11 < 100;
                                    char v318 = ((((unsigned char)v11 - 100) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x64)) < 0;
                                    char v319 = ((((unsigned char)v11 - 100) ^ ((unsigned char)v11 ^ 0x64)) >>> 4) & 0x1;
                                    if(!v314) {
                                        char v320 = (unsigned char)v11 == 105;
                                        char v321 = (unsigned char)v11 < 105;
                                        char v322 = __parity__((unsigned char)v11 - 105);
                                        char v323 = (unsigned char)v11 < 105;
                                        char v324 = ((((unsigned char)v11 - 105) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x69)) < 0;
                                        char v325 = ((((unsigned char)v11 - 105) ^ ((unsigned char)v11 ^ 0x69)) >>> 4) & 0x1;
                                        if(!v320) {
                                            char v326 = (unsigned char)v11 == 111;
                                            char v327 = (unsigned char)v11 < 111;
                                            char v328 = __parity__((unsigned char)v11 - 111);
                                            char v329 = (unsigned char)v11 < 111;
                                            char v330 = ((((unsigned char)v11 - 111) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x6f)) < 0;
                                            char v331 = ((((unsigned char)v11 - 111) ^ ((unsigned char)v11 ^ 0x6f)) >>> 4) & 0x1;
                                            if(!v326) {
                                                char v332 = (unsigned char)v11 == 120;
                                                char v333 = (unsigned char)v11 < 120;
                                                char v334 = __parity__((unsigned char)v11 - 120);
                                                char v335 = (unsigned char)v11 < 120;
                                                char v336 = ((((unsigned char)v11 - 120) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x78)) < 0;
                                                char v337 = ((((unsigned char)v11 - 120) ^ ((unsigned char)v11 ^ 0x78)) >>> 4) & 0x1;
                                                if(!v332) {
                                                    char v338 = (unsigned char)v11 == 88;
                                                    char v339 = (unsigned char)v11 < 88;
                                                    char v340 = __parity__((unsigned char)v11 - 88);
                                                    char v341 = (unsigned char)v11 < 88;
                                                    char v342 = ((((unsigned char)v11 - 88) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x58)) < 0;
                                                    char v343 = ((((unsigned char)v11 - 88) ^ ((unsigned char)v11 ^ 0x58)) >>> 4) & 0x1;
                                                    if(!v338) {
                                                        goto loc_401FBC;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            v10 = *(char*)((char*)ptr7 - 398);
                            *(char*)((char*)ptr7 - 398) = *(char*)((char*)ptr7 - 398) + 1;
                            char v344 = *(char*)((char*)ptr7 - 398) ? 0: 1;
                            char v345 = *(char*)((char*)ptr7 - 398) < 0;
                            char v346 = __parity__(*(char*)((char*)ptr7 - 398));
                            char v347 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 398)) >>> 4) & 0x1;
                            char v348 = ((*(char*)((char*)ptr7 - 398) ^ v10) & ~(v10 ^ 0x1)) < 0;
                        }
                    }
                }
            loc_401FDE:
                v24 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                char v349 = *(char*)((char*)ptr7 - 381) < 0;
                char v350 = __parity__(*(char*)((char*)ptr7 - 381));
                char v351 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                char v352 = 0;
                char v353 = 0;
            }
            while(v24);
            *(unsigned int**)(ptr7 - 99) = ptr5;
            *(ptr7 + 3) = v14;
            char v354 = *(char*)((char*)ptr7 - 398) ? 0: 1;
            char v355 = *(char*)((char*)ptr7 - 398) < 0;
            char v356 = __parity__(*(char*)((char*)ptr7 - 398));
            char v357 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
            char v358 = 0;
            char v359 = 0;
            if(v354) {
                unsigned int v360 = *(unsigned int*)(ptr7 + 4);
                *(ptr7 - 119) = *(ptr7 + 4);
                unsigned int v361 = v360;
                v33 = (int)(v360 + 4);
                char v362 = v33 ? 0: 1;
                char v363 = v33 < 0;
                char v364 = __parity__((unsigned char)v33);
                char v365 = (((v361 ^ 0x4) ^ v33) >>> 4) & 0x1;
                char v366 = v361 >= 0xfffffffc;
                char v367 = ((v33 ^ v361) & ~(v361 ^ 0x4)) < 0;
                *(ptr7 + 4) = v33;
                ptr4 = *(unsigned int*)(v33 - 4);
                *(unsigned int*)(ptr7 - 108) = *(unsigned int*)(v33 - 4);
            }
            else {
                ptr4 = *(unsigned int*)(ptr7 - 108);
            }
            *(char*)((char*)ptr7 - 381) = 0;
            char v368 = *(char*)((char*)ptr7 - 389) ? 0: 1;
            char v369 = *(char*)((char*)ptr7 - 389) < 0;
            char v370 = __parity__(*(char*)((char*)ptr7 - 389));
            char v371 = *(unsigned char*)((unsigned char*)ptr7 - 389) < 0;
            char v372 = 0;
            char v373 = 0;
            if(v368) {
                v33 = (unsigned int)*(char*)v14 | ((unsigned int)((v33 >>> 8) & 0xffffff) << 8);
                char v374 = *(char*)v14 == 83;
                char v375 = (unsigned char)v33 < 83;
                char v376 = __parity__((unsigned char)v33 - 83);
                char v377 = (unsigned char)v33 < 83;
                char v378 = ((((unsigned char)v33 - 83) ^ (unsigned char)v33) & ((unsigned char)v33 ^ 0x53)) < 0;
                char v379 = ((((unsigned char)v33 - 83) ^ ((unsigned char)v33 ^ 0x53)) >>> 4) & 0x1;
                if(!v374) {
                    char v380 = (unsigned char)v33 == 67;
                    char v381 = (unsigned char)v33 < 67;
                    char v382 = __parity__((unsigned char)v33 - 67);
                    char v383 = (unsigned char)v33 < 67;
                    char v384 = ((((unsigned char)v33 - 67) ^ (unsigned char)v33) & ((unsigned char)v33 ^ 0x43)) < 0;
                    char v385 = ((((unsigned char)v33 - 67) ^ ((unsigned char)v33 ^ 0x43)) >>> 4) & 0x1;
                    *(char*)((char*)ptr7 - 389) = 0xFF;
                    if(v380) {
                        goto loc_40203E;
                    }
                }
                else {
                loc_40203E:
                    *(char*)((char*)ptr7 - 389) = 1;
                }
            }
            int v386 = (unsigned int)*(char*)v14;
            ptr5 = (unsigned int*)(v386 | 0x20);
            char v387 = ptr5 ? 0: 1;
            char v388 = (int)ptr5 < 0;
            char v389 = __parity__((unsigned char)ptr5);
            char v390 = 0;
            char v391 = 0;
            *(unsigned int**)(ptr7 - 112) = ptr5;
            char v392 = ptr5 == 110;
            char v393 = (int)ptr5 < 110;
            char v394 = __parity__((unsigned char)ptr5 - 110);
            char v395 = (unsigned int)ptr5 < 110;
            char v396 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 110) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x6e)) < 0;
            char v397 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 110) ^ (int)(int*)((int)ptr5 ^ 0x6e)) >>> 4) & 0x1);
            if(!v392) {
                char v398 = ptr5 == 99;
                char v399 = (int)ptr5 < 99;
                char v400 = __parity__((unsigned char)ptr5 - 99);
                char v401 = (unsigned int)ptr5 < 99;
                char v402 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 99) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x63)) < 0;
                char v403 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 99) ^ (int)(int*)((int)ptr5 ^ 0x63)) >>> 4) & 0x1);
                if(!v398) {
                    char v404 = ptr5 == 123;
                    char v405 = (int)ptr5 < 123;
                    char v406 = __parity__((unsigned char)ptr5 - 123);
                    char v407 = (unsigned int)ptr5 < 123;
                    char v408 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 123) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x7b)) < 0;
                    char v409 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 123) ^ (int)(int*)((int)ptr5 ^ 0x7b)) >>> 4) & 0x1);
                    if(v404) {
                        goto loc_402086;
                    }
                    else {
                        goto loc_402060;
                    }
                }
                else {
                loc_402086:
                    int v410 = *(ptr7 - 97);
                    *(ptr7 - 97) = *(ptr7 - 97) + 1;
                    char v411 = *(ptr7 - 97) ? 0: 1;
                    char v412 = *(ptr7 - 97) < 0;
                    char v413 = __parity__((unsigned char)*(ptr7 - 97));
                    char v414 = (((v410 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                    char v415 = ((*(ptr7 - 97) ^ v410) & ~(v410 ^ 0x1)) < 0;
                    unsigned int* ptr17 = *(unsigned int**)(ptr7 + 2);
                    ptr8 = &ptr6;
                    v33 = sub_401DA6(v11, ptr17);
                    *(ptr7 - 101) = v33;
                }
            }
        }
        else {
        loc_401E68:
            do {
                int v416 = *(ptr7 + 3);
                *(ptr7 + 3) = *(ptr7 + 3) + 1;
                char v417 = *(ptr7 + 3) ? 0: 1;
                char v418 = *(ptr7 + 3) < 0;
                char v419 = __parity__((unsigned char)*(ptr7 + 3));
                char v420 = (((v416 ^ 0x1) ^ *(ptr7 + 3)) >>> 4) & 0x1;
                char v421 = ((*(ptr7 + 3) ^ v416) & ~(v416 ^ 0x1)) < 0;
                char* ptr18 = *(unsigned int*)(ptr7 + 3);
                void* ptr19 = (void*)*ptr18;
                ptr6 = (void*)*ptr18;
                *(int*)&v19 = &loc_401E77;
                /*BAD_CALL!*/ sub_4044E0();
                void* ptr20 = ptr6;
                ptr8 = &v18;
                v23 = v26 ? 0: 1;
                char v422 = v26 < 0;
                char v423 = __parity__((unsigned char)v26);
                char v424 = 0;
                char v425 = 0;
            }
            while(!v23);
            goto loc_401DFF;
        loc_402060:
            do {
                int v426 = *(ptr7 - 97);
                *(ptr7 - 97) = *(ptr7 - 97) + 1;
                char v427 = *(ptr7 - 97) ? 0: 1;
                char v428 = *(ptr7 - 97) < 0;
                char v429 = __parity__((unsigned char)*(ptr7 - 97));
                char v430 = (((v426 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                char v431 = ((*(ptr7 - 97) ^ v426) & ~(v426 ^ 0x1)) < 0;
                unsigned int* ptr21 = *(unsigned int**)(ptr7 + 2);
                int v432 = sub_401DA6(v11, ptr21);
                v9 = v432;
                ptr6 = (void*)v432;
                *(int*)&v19 = &loc_402076;
                /*BAD_CALL!*/ sub_4044E0();
                v11 = (int)ptr6;
                ptr8 = &v18;
                v27 = v26 ? 0: 1;
                char v433 = v26 < 0;
                char v434 = __parity__((unsigned char)v26);
                char v435 = 0;
                char v436 = 0;
            }
            while(!v27);
            *(ptr7 - 101) = v9;
            v14 = *(ptr7 + 3);
        }
        v8 = *(ptr7 - 109);
        char v437 = v8 ? 0: 1;
        char v438 = v8 < 0;
        char v439 = __parity__((unsigned char)v8);
        char v440 = 0;
        char v441 = 0;
        if(!v437) {
            char v442 = *(ptr7 - 99) ? 0: 1;
            char v443 = *(ptr7 - 99) < 0;
            char v444 = __parity__((unsigned char)*(ptr7 - 99));
            char v445 = *(unsigned int*)(ptr7 - 99) < 0;
            char v446 = 0;
            char v447 = 0;
            if(v442) {
                goto loc_4023DD;
            }
        }
        char v448 = ptr5 == 111;
        char v449 = (int)ptr5 < 111;
        char v450 = __parity__((unsigned char)ptr5 - 111);
        char v451 = (unsigned int)ptr5 < 111;
        char v452 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 111) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x6f)) < 0;
        char v453 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 111) ^ (int)(int*)((int)ptr5 ^ 0x6f)) >>> 4) & 0x1);
        if(!v448 && v449 == v452) {
            unsigned int* ptr22 = ptr5;
            unsigned int* ptr23 = ptr5;
            v33 = (int)(ptr22 - 28);
            char v454 = v33 ? 0: 1;
            char v455 = v33 < 0;
            char v456 = __parity__((unsigned char)v33);
            char v457 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr23 ^ 0x70) ^ v33) >>> 4) & 0x1);
            char v458 = (unsigned int)ptr23 < 112;
            char v459 = (int)(int*)((int)(int*)(v33 ^ (int)ptr23) & (int)(int*)((int)ptr23 ^ 0x70)) < 0;
            if(!v454) {
                int v460 = v33;
                int v461 = v33 - 3;
                char v462 = v461 ? 0: 1;
                char v463 = v461 < 0;
                char v464 = __parity__((unsigned char)v461);
                char v465 = (((v460 ^ 0x3) ^ v461) >>> 4) & 0x1;
                char v466 = (unsigned int)v460 < 3;
                char v467 = ((v461 ^ v460) & (v460 ^ 0x3)) < 0;
                if(v462) {
                    goto loc_402393;
                }
                else {
                    int v468 = v461 - 1;
                    int v469 = v461 - 1;
                    v33 = v468 - 1;
                    char v470 = v33 ? 0: 1;
                    char v471 = v33 < 0;
                    char v472 = __parity__((unsigned char)v33);
                    char v473 = ((~v33 ^ ~v469) >>> 4) & 0x1;
                    char v474 = ((v33 ^ v469) & v469) < 0;
                    if(!v470) {
                        int v475 = v33;
                        v33 -= 3;
                        char v476 = v33 ? 0: 1;
                        char v477 = v33 < 0;
                        char v478 = __parity__((unsigned char)v33);
                        char v479 = (((v475 ^ 0x3) ^ v33) >>> 4) & 0x1;
                        char v480 = (unsigned int)v475 < 3;
                        char v481 = ((v33 ^ v475) & (v475 ^ 0x3)) < 0;
                        if(v476) {
                            goto loc_402106;
                        }
                        else {
                            int v482 = v33;
                            int v483 = v33 - 3;
                            char v484 = v483 ? 0: 1;
                            char v485 = v483 < 0;
                            char v486 = __parity__((unsigned char)v483);
                            char v487 = (((v482 ^ 0x3) ^ v483) >>> 4) & 0x1;
                            char v488 = (unsigned int)v482 < 3;
                            char v489 = ((v483 ^ v482) & (v482 ^ 0x3)) < 0;
                            if(!v484) {
                            loc_4023D2:
                                v33 = (int)*(char*)v14;
                                char v490 = *(ptr7 - 101) == v33;
                                char v491 = *(ptr7 - 101) > v33;
                                char v492 = __parity__((unsigned char)v33 - (unsigned char)*(ptr7 - 101));
                                char v493 = *(unsigned int*)(ptr7 - 101) > (unsigned int)v33;
                                char v494 = (((v33 - *(ptr7 - 101)) ^ v33) & (*(ptr7 - 101) ^ v33)) < 0;
                                char v495 = (((v33 - *(ptr7 - 101)) ^ (*(ptr7 - 101) ^ v33)) >>> 4) & 0x1;
                                if(!v490) {
                                loc_4023DD:
                                    v13 = *(ptr7 - 101) == -1;
                                    char v496 = *(ptr7 - 101) < -1;
                                    char v497 = __parity__((unsigned char)*(ptr7 - 101) - 0xFF);
                                    char v498 = *(unsigned int*)(ptr7 - 101) < 0xffffffff;
                                    char v499 = (((*(ptr7 - 101) + 1) ^ *(ptr7 - 101)) & ~*(ptr7 - 101)) < 0;
                                    char v500 = (((*(ptr7 - 101) + 1) ^ ~*(ptr7 - 101)) >>> 4) & 0x1;
                                    goto loc_402BA3;
                                }
                                else {
                                    *(char*)((char*)ptr7 - 405) = *(char*)((char*)ptr7 - 405) + 0xFF;
                                    char v501 = *(char*)((char*)ptr7 - 398) ? 0: 1;
                                    char v502 = *(char*)((char*)ptr7 - 398) < 0;
                                    char v503 = __parity__(*(char*)((char*)ptr7 - 398));
                                    char v504 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
                                    char v505 = 0;
                                    char v506 = 0;
                                    if(v501) {
                                        v33 = *(ptr7 - 119);
                                        *(ptr7 + 4) = *(ptr7 - 119);
                                    }
                                    goto loc_402B38;
                                }
                            }
                            else {
                                char v507 = *(char*)((char*)ptr7 - 389) ? 0: 1;
                                char v508 = *(char*)((char*)ptr7 - 389) < 0;
                                char v509 = __parity__(*(char*)((char*)ptr7 - 389));
                                char v510 = *(unsigned char*)((unsigned char*)ptr7 - 389) < 0;
                                char v511 = 0;
                                char v512 = 0;
                                if(!v507 && v508 == 0) {
                                    *(char*)((char*)ptr7 - 406) = 1;
                                }
                                int v513 = *(ptr7 + 3);
                                int v514 = *(ptr7 + 3);
                                ptr3 = (unsigned char*)(v513 + 1);
                                char v515 = ptr3 ? 0: 1;
                                char v516 = (int)ptr3 < 0;
                                char v517 = __parity__((unsigned char)ptr3);
                                char v518 = (int*)((int)(int*)((int)(int*)((v514 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                                char v519 = (int)(int*)((int)(int*)((int)ptr3 ^ v514) & ~(v514 ^ 0x1)) < 0;
                                *(unsigned int*)(ptr7 + 3) = ptr3;
                                *(unsigned int*)(ptr7 - 116) = ptr3;
                                char v520 = *ptr3 == 94;
                                char v521 = *ptr3 < 94;
                                char v522 = __parity__(*ptr3 - 94);
                                char v523 = *ptr3 < 94;
                                char v524 = (((*ptr3 - 94) ^ *ptr3) & (*ptr3 ^ 0x5e)) < 0;
                                char v525 = (((*ptr3 - 94) ^ (*ptr3 ^ 0x5e)) >>> 4) & 0x1;
                                if(v520) {
                                    unsigned char* ptr24 = ptr3;
                                    ++ptr3;
                                    char v526 = ptr3 ? 0: 1;
                                    char v527 = (int)ptr3 < 0;
                                    char v528 = __parity__((unsigned char)ptr3);
                                    char v529 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr24 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                                    char v530 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr24) & (int*)~(int)(int*)((int)ptr24 ^ 0x1)) < 0;
                                    *(unsigned int*)(ptr7 - 116) = ptr3;
                                    *(char*)((char*)ptr7 - 0x1a1) = 0xFF;
                                }
                                ptr2 = *(char**)(ptr7 - 111);
                                char v531 = ptr2 ? 0: 1;
                                char v532 = (int)ptr2 < 0;
                                char v533 = __parity__((unsigned char)ptr2);
                                char v534 = 0;
                                char v535 = 0;
                                if(v531) {
                                    *(unsigned int*)(ptr7 - 1) = (int*)(*(ptr7 - 1) & (int)ptr2);  // __try{ (see __except:402464h)
                                    char v536 = *(ptr7 - 1) ? 0: 1;  // __try{ (see __except:402464h)
                                    char v537 = *(ptr7 - 1) < 0;  // __try{ (see __except:402464h)
                                    char v538 = __parity__((unsigned char)*(ptr7 - 1));  // __try{ (see __except:402464h)
                                    char v539 = 0;  // __try{ (see __except:402464h)
                                    char v540 = 0;  // __try{ (see __except:402464h)
                                    int v541 = 32;
                                    int v542 = sub_403D30(v8);
                                    *(char**)(ptr7 - 6) = &v18;
                                    ptr2 = &v18;
                                    *(char**)(ptr7 - 111) = &v18;
                                    *(ptr7 - 1) = -1;  // } (starts at 402444h)
                                    char v543 = *(ptr7 - 1) ? 0: 1;  // } (starts at 402444h)
                                    char v544 = *(ptr7 - 1) < 0;  // } (starts at 402444h)
                                    char v545 = __parity__((unsigned char)*(ptr7 - 1));  // } (starts at 402444h)
                                    char v546 = 0;  // } (starts at 402444h)
                                    char v547 = 0;  // } (starts at 402444h)
                                }
                                *(int*)&v19 = 0;
                                ptr1 = sub_4045E0(ptr2, 0, (int*)0x20);
                                ptr8 = &v18;
                                char v548 = *(ptr7 - 112) == 123;
                                char v549 = *(ptr7 - 112) < 123;
                                char v550 = __parity__((unsigned char)*(ptr7 - 112) - 123);
                                char v551 = *(unsigned int*)(ptr7 - 112) < 123;
                                char v552 = (((*(ptr7 - 112) - 123) ^ *(ptr7 - 112)) & (*(ptr7 - 112) ^ 0x7b)) < 0;
                                char v553 = (((*(ptr7 - 112) - 123) ^ (*(ptr7 - 112) ^ 0x7b)) >>> 4) & 0x1;
                                if(!v548) {
                                    goto loc_40252E;
                                }
                                else {
                                    char v554 = *ptr3 == 93;
                                    char v555 = *ptr3 < 93;
                                    char v556 = __parity__(*ptr3 - 93);
                                    char v557 = *ptr3 < 93;
                                    char v558 = (((*ptr3 - 93) ^ *ptr3) & (*ptr3 ^ 0x5d)) < 0;
                                    char v559 = (((*ptr3 - 93) ^ (*ptr3 ^ 0x5d)) >>> 4) & 0x1;
                                    if(!v554) {
                                        goto loc_40252E;
                                    }
                                    else {
                                        v7 = 93;
                                        unsigned char* ptr25 = ptr3;
                                        ++ptr3;
                                        char v560 = ptr3 ? 0: 1;
                                        char v561 = (int)ptr3 < 0;
                                        char v562 = __parity__((unsigned char)ptr3);
                                        char v563 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr25 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                                        char v564 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr25) & (int*)~(int)(int*)((int)ptr25 ^ 0x1)) < 0;
                                        ptr2[11] = ' ';
                                        goto loc_402534;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else {
                *(char*)((char*)ptr7 - 397) = 1;
            }
            goto loc_4027CF;
        }
        else if(v448) {
            goto loc_4027CF;
        }
        else {
            char v565 = ptr5 == 99;
            char v566 = (int)ptr5 < 99;
            char v567 = __parity__((unsigned char)ptr5 - 99);
            char v568 = (unsigned int)ptr5 < 99;
            char v569 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 99) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x63)) < 0;
            char v570 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 99) ^ (int)(int*)((int)ptr5 ^ 0x63)) >>> 4) & 0x1);
            if(v565) {
                char v571 = v8 ? 0: 1;
                char v572 = v8 < 0;
                char v573 = __parity__((unsigned char)v8);
                char v574 = 0;
                char v575 = 0;
                if(v571) {
                    *(ptr7 - 109) = 1;
                    int v576 = *(ptr7 - 99);
                    *(ptr7 - 99) = *(ptr7 - 99) + 1;
                    char v577 = *(ptr7 - 99) ? 0: 1;
                    char v578 = *(ptr7 - 99) < 0;
                    char v579 = __parity__((unsigned char)*(ptr7 - 99));
                    char v580 = (((v576 ^ 0x1) ^ *(ptr7 - 99)) >>> 4) & 0x1;
                    char v581 = ((*(ptr7 - 99) ^ v576) & ~(v576 ^ 0x1)) < 0;
                    goto loc_402393;
                loc_4027CF:
                    v6 = *(ptr7 - 101);
                    char v582 = v6 == 45;
                    char v583 = v6 < 45;
                    char v584 = __parity__((unsigned char)v6 - 45);
                    char v585 = (unsigned int)v6 < 45;
                    char v586 = (((v6 - 45) ^ v6) & (v6 ^ 0x2d)) < 0;
                    char v587 = (((v6 - 45) ^ (v6 ^ 0x2d)) >>> 4) & 0x1;
                    if(v582) {
                        *(char*)((char*)ptr7 - 407) = 1;
                        goto loc_4027E8;
                    }
                    else {
                        v5 = v6 == 43;
                        char v588 = v6 < 43;
                        char v589 = __parity__((unsigned char)v6 - 43);
                        char v590 = (unsigned int)v6 < 43;
                        char v591 = (((v6 - 43) ^ v6) & (v6 ^ 0x2b)) < 0;
                        char v592 = (((v6 - 43) ^ (v6 ^ 0x2b)) >>> 4) & 0x1;
                    }
                    if(!v5) {
                    loc_402813:
                        char v593 = *(ptr7 - 114) ? 0: 1;
                        char v594 = *(ptr7 - 114) < 0;
                        char v595 = __parity__((unsigned char)*(ptr7 - 114));
                        char v596 = *(unsigned int*)(ptr7 - 114) < 0;
                        char v597 = 0;
                        char v598 = 0;
                        if(!v593) {
                            char v599 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                            char v600 = *(char*)((char*)ptr7 - 381) < 0;
                            char v601 = __parity__(*(char*)((char*)ptr7 - 381));
                            char v602 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                            char v603 = 0;
                            char v604 = 0;
                            if(v599) {
                                int v605 = 128;
                                do {
                                    char v606 = ptr5 == 120;
                                    char v607 = (int)ptr5 < 120;
                                    char v608 = __parity__((unsigned char)ptr5 - 120);
                                    char v609 = (unsigned int)ptr5 < 120;
                                    char v610 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 30) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x78)) < 0;
                                    char v611 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr5 - 30) ^ (int)(int*)((int)ptr5 ^ 0x78)) >>> 4) & 0x1);
                                    if(!v606) {
                                        char v612 = ptr5 == 112;
                                        char v613 = (int)ptr5 < 112;
                                        char v614 = __parity__((unsigned char)ptr5 - 112);
                                        char v615 = (unsigned int)ptr5 < 112;
                                        char v616 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 28) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x70)) < 0;
                                        char v617 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr5 - 28) ^ (int)(int*)((int)ptr5 ^ 0x70)) >>> 4) & 0x1);
                                        if(v612) {
                                            goto loc_4028BB;
                                        }
                                        else {
                                            char v618 = gvar_40B4A0 == 1;
                                            char v619 = (int)gvar_40B4A0 < 1;
                                            char v620 = __parity__((unsigned char)gvar_40B4A0 - 1);
                                            char v621 = gvar_40B4A0 < 1;
                                            char v622 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                                            char v623 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                                            if(!v618 && v619 == v622) {
                                                *(int*)&v19 = v6;
                                                v33 = sub_404318(*(int*)&v19, 4);
                                                int v624 = *(int*)&v19;
                                                v8 = (int)ptr6;
                                                ptr8 = &v18;
                                            }
                                            else {
                                                unsigned int v625 = gvar_40B490;
                                                int v626 = (unsigned int)*(char*)(v6 * 2 + v625);
                                                v33 = v626 & 0x4;
                                                char v627 = v33 ? 0: 1;
                                                char v628 = v33 < 0;
                                                char v629 = __parity__((unsigned char)v33);
                                                char v630 = 0;
                                                char v631 = 0;
                                            }
                                            char v632 = v33 ? 0: 1;
                                            char v633 = v33 < 0;
                                            char v634 = __parity__((unsigned char)v33);
                                            char v635 = 0;
                                            char v636 = 0;
                                            if(v632) {
                                                goto loc_402908;
                                            }
                                            else {
                                                char v637 = ptr5 == 111;
                                                char v638 = (int)ptr5 < 111;
                                                char v639 = __parity__((unsigned char)ptr5 - 111);
                                                char v640 = (unsigned int)ptr5 < 111;
                                                char v641 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 111) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x6f)) < 0;
                                                char v642 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 111) ^ (int)(int*)((int)ptr5 ^ 0x6f)) >>> 4) & 0x1);
                                                if(v637) {
                                                    char v643 = v6 == 56;
                                                    char v644 = v6 < 56;
                                                    char v645 = __parity__((unsigned char)v6 - 56);
                                                    char v646 = (unsigned int)v6 < 56;
                                                    char v647 = (((v6 - 56) ^ v6) & (v6 ^ 0x38)) < 0;
                                                    char v648 = (((v6 - 56) ^ (v6 ^ 0x38)) >>> 4) & 0x1;
                                                    if(v644 == v647) {
                                                        goto loc_402908;
                                                    }
                                                    else {
                                                        int v649 = *(ptr7 - 107);
                                                        int v650 = *(ptr7 - 106);
                                                        int v651 = *(ptr7 - 106);
                                                        long long v652 = (unsigned long long)v649 | ((unsigned long long)v650 << 32);
                                                        v4 = v652 * 8L;
                                                        v8 = (int)(v4 >>> 32L);
                                                        char v653 = (v651 >>> 29) & 0x1;
                                                        char v654 = v647;
                                                        char v655 = v8 ? 0: 1;
                                                        char v656 = v8 < 0;
                                                        char v657 = __parity__((unsigned char)v8);
                                                        int v658 = v649;
                                                        v33 = v649 * 8;
                                                        char v659 = (v658 >>> 29) & 0x1;
                                                        char v660 = v654;
                                                        char v661 = v33 ? 0: 1;
                                                        char v662 = v33 < 0;
                                                        char v663 = __parity__((unsigned char)v33);
                                                        *(ptr7 - 107) = v33;
                                                        *(ptr7 - 106) = v8;
                                                    }
                                                }
                                                else {
                                                    *(int*)&v19 = 10;
                                                    v33 = _allmul(*(ptr7 - 107), *(ptr7 - 106), *(int*)&v19, 0);
                                                    *(ptr7 - 107) = v33;
                                                    *(ptr7 - 106) = v22;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                    loc_4028BB:
                                        char v664 = gvar_40B4A0 == 1;
                                        char v665 = (int)gvar_40B4A0 < 1;
                                        char v666 = __parity__((unsigned char)gvar_40B4A0 - 1);
                                        char v667 = gvar_40B4A0 < 1;
                                        char v668 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                                        char v669 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                                        if(!v664 && v665 == v668) {
                                            *(int*)&v19 = v6;
                                            v33 = sub_404318(*(int*)&v19, 128);
                                            int v670 = *(int*)&v19;
                                            v8 = (int)ptr6;
                                            ptr8 = &v18;
                                        }
                                        else {
                                            unsigned int v671 = gvar_40B490;
                                            int v672 = (unsigned int)*(char*)(v6 * 2 + v671);
                                            v33 = v672 & 0x80;
                                            char v673 = v33 ? 0: 1;
                                            char v674 = v33 < 0;
                                            char v675 = __parity__((unsigned char)v33);
                                            char v676 = 0;
                                            char v677 = 0;
                                        }
                                        char v678 = v33 ? 0: 1;
                                        char v679 = v33 < 0;
                                        char v680 = __parity__((unsigned char)v33);
                                        char v681 = 0;
                                        char v682 = 0;
                                        if(!v678) {
                                            int v683 = *(ptr7 - 107);
                                            int v684 = *(ptr7 - 106);
                                            int v685 = *(ptr7 - 106);
                                            long long v686 = (unsigned long long)v683 | ((unsigned long long)v684 << 32);
                                            v4 = v686 * 16L;
                                            int v687 = (unsigned int)(v4 >>> 32L);
                                            char v688 = (v685 >>> 28) & 0x1;
                                            char v689 = 0;
                                            char v690 = v687 ? 0: 1;
                                            char v691 = v687 < 0;
                                            char v692 = __parity__((unsigned char)v687);
                                            int v693 = v683;
                                            int v694 = v683 * 16;
                                            char v695 = (v693 >>> 28) & 0x1;
                                            char v696 = 0;
                                            char v697 = v694 ? 0: 1;
                                            char v698 = v694 < 0;
                                            char v699 = __parity__((unsigned char)v694);
                                            *(ptr7 - 107) = v694;
                                            *(ptr7 - 106) = v687;
                                            int v700 = v6;
                                            ptr8 = &ptr6;
                                            v33 = sub_401D74();
                                            v6 = v33;
                                        }
                                        else {
                                        loc_402908:
                                            v10 = *(char*)((char*)ptr7 - 381);
                                            *(char*)((char*)ptr7 - 381) = *(char*)((char*)ptr7 - 381) + 1;
                                            char v701 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                            char v702 = *(char*)((char*)ptr7 - 381) < 0;
                                            char v703 = __parity__(*(char*)((char*)ptr7 - 381));
                                            char v704 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 381)) >>> 4) & 0x1;
                                            char v705 = ((*(char*)((char*)ptr7 - 381) ^ v10) & ~(v10 ^ 0x1)) < 0;
                                        }
                                    }
                                    char v706 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                    char v707 = *(char*)((char*)ptr7 - 381) < 0;
                                    char v708 = __parity__(*(char*)((char*)ptr7 - 381));
                                    char v709 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                                    char v710 = 0;
                                    char v711 = 0;
                                    if(v706) {
                                        int v712 = *(ptr7 - 103);
                                        *(ptr7 - 103) = *(ptr7 - 103) + 1;
                                        char v713 = *(ptr7 - 103) ? 0: 1;
                                        char v714 = *(ptr7 - 103) < 0;
                                        char v715 = __parity__((unsigned char)*(ptr7 - 103));
                                        char v716 = (((v712 ^ 0x1) ^ *(ptr7 - 103)) >>> 4) & 0x1;
                                        char v717 = ((*(ptr7 - 103) ^ v712) & ~(v712 ^ 0x1)) < 0;
                                        v33 = v6 - 48;
                                        int v718 = v33 < 0 ? -1: 0;
                                        int v719 = *(ptr7 - 107);
                                        *(ptr7 - 107) = *(ptr7 - 107) + v33;
                                        char v720 = *(ptr7 - 107) ? 0: 1;
                                        char v721 = *(ptr7 - 107) < 0;
                                        char v722 = __parity__((unsigned char)*(ptr7 - 107));
                                        char v723 = (((v33 ^ v719) ^ *(ptr7 - 107)) >>> 4) & 0x1;
                                        char v724 = __carry__(v33, v719);
                                        char v725 = ((*(ptr7 - 107) ^ v719) & ~(v33 ^ v719)) < 0;
                                        *(ptr7 - 106) = (unsigned int)v724 + *(ptr7 - 106) + v718;
                                        char v726 = *(ptr7 - 109) ? 0: 1;
                                        char v727 = *(ptr7 - 109) < 0;
                                        char v728 = __parity__((unsigned char)*(ptr7 - 109));
                                        char v729 = *(unsigned int*)(ptr7 - 109) < 0;
                                        char v730 = 0;
                                        char v731 = 0;
                                        if(!v726) {
                                            int v732 = *(ptr7 - 99);
                                            *(ptr7 - 99) = *(ptr7 - 99) - 1;
                                            char v733 = *(ptr7 - 99) ? 0: 1;
                                            char v734 = *(ptr7 - 99) < 0;
                                            char v735 = __parity__((unsigned char)*(ptr7 - 99));
                                            char v736 = ((~*(ptr7 - 99) ^ ~v732) >>> 4) & 0x1;
                                            char v737 = ((*(ptr7 - 99) ^ v732) & v732) < 0;
                                            if(!v733) {
                                                goto loc_402947;
                                            }
                                            else {
                                                *(char*)((char*)ptr7 - 381) = 1;
                                            }
                                        }
                                        else {
                                        loc_402947:
                                            int v738 = *(ptr7 - 97);
                                            *(ptr7 - 97) = *(ptr7 - 97) + 1;
                                            char v739 = *(ptr7 - 97) ? 0: 1;
                                            char v740 = *(ptr7 - 97) < 0;
                                            char v741 = __parity__((unsigned char)*(ptr7 - 97));
                                            char v742 = (((v738 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                                            char v743 = ((*(ptr7 - 97) ^ v738) & ~(v738 ^ 0x1)) < 0;
                                            unsigned int* ptr26 = *(unsigned int**)(ptr7 + 2);
                                            ptr8 = &ptr6;
                                            v33 = sub_401DA6(v8, ptr26);
                                            v6 = v33;
                                        }
                                    }
                                    else {
                                        *(ptr7 - 97) = *(ptr7 - 97) - 1;
                                        char v744 = v6 == -1;
                                        char v745 = v6 < -1;
                                        char v746 = __parity__((unsigned char)v6 - 0xFF);
                                        char v747 = (unsigned int)v6 < 0xffffffff;
                                        char v748 = (((v6 + 1) ^ v6) & ~v6) < 0;
                                        char v749 = (((v6 + 1) ^ ~v6) >>> 4) & 0x1;
                                        if(!v744) {
                                            ptr6 = *(void**)(ptr7 + 2);
                                            *(int*)&v19 = v6;
                                            v33 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
                                            int v750 = *(int*)&v19;
                                            v8 = (int)ptr6;
                                            ptr8 = &v18;
                                        }
                                    }
                                    v28 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                    char v751 = *(char*)((char*)ptr7 - 381) < 0;
                                    char v752 = __parity__(*(char*)((char*)ptr7 - 381));
                                    char v753 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                                    char v754 = 0;
                                    char v755 = 0;
                                }
                                while(v28);
                                *(ptr7 - 101) = v6;
                            loc_402982:
                                char v756 = *(char*)((char*)ptr7 - 407) ? 0: 1;
                                char v757 = *(char*)((char*)ptr7 - 407) < 0;
                                char v758 = __parity__(*(char*)((char*)ptr7 - 407));
                                char v759 = *(unsigned char*)((unsigned char*)ptr7 - 407) < 0;
                                char v760 = 0;
                                char v761 = 0;
                                if(!v756) {
                                    unsigned int v762 = *(unsigned int*)(ptr7 - 107);
                                    unsigned int v763 = *(unsigned int*)(ptr7 - 107);
                                    v33 = 0 - v762;
                                    char v764 = v33 ? 0: 1;
                                    char v765 = v33 < 0;
                                    char v766 = __parity__((unsigned char)v33);
                                    char v767 = v763 > 0;
                                    char v768 = (v33 & v763) < 0;
                                    char v769 = ((v33 ^ v763) >>> 4) & 0x1;
                                    int v770 = *(ptr7 - 106);
                                    unsigned int v771 = (unsigned int)((unsigned int)v767 + v770);
                                    unsigned int v772 = (unsigned int)((unsigned int)v767 + v770);
                                    int v773 = 0 - v771;
                                    char v774 = v773 ? 0: 1;
                                    char v775 = v773 < 0;
                                    char v776 = __parity__((unsigned char)v773);
                                    char v777 = v772 > 0;
                                    char v778 = (v773 & v772) < 0;
                                    char v779 = ((v773 ^ v772) >>> 4) & 0x1;
                                    *(ptr7 - 107) = v33;
                                    *(ptr7 - 106) = v773;
                                loc_402AD8:
                                    char v780 = ptr5 == 70;
                                    char v781 = (int)ptr5 < 70;
                                    char v782 = __parity__((unsigned char)ptr5 - 70);
                                    char v783 = (unsigned int)ptr5 < 70;
                                    char v784 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 70) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x46)) < 0;
                                    char v785 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 70) ^ (int)(int*)((int)ptr5 ^ 0x46)) >>> 4) & 0x1);
                                    if(v780) {
                                        *(ptr7 - 103) = 0;
                                        char v786 = *(ptr7 - 103) ? 0: 1;
                                        char v787 = *(ptr7 - 103) < 0;
                                        char v788 = __parity__((unsigned char)*(ptr7 - 103));
                                        char v789 = 0;
                                        char v790 = 0;
                                    }
                                    char v791 = *(ptr7 - 103) ? 0: 1;
                                    char v792 = *(ptr7 - 103) < 0;
                                    char v793 = __parity__((unsigned char)*(ptr7 - 103));
                                    char v794 = *(unsigned int*)(ptr7 - 103) < 0;
                                    char v795 = 0;
                                    char v796 = 0;
                                    if(!v791) {
                                        char v797 = *(char*)((char*)ptr7 - 398) ? 0: 1;
                                        char v798 = *(char*)((char*)ptr7 - 398) < 0;
                                        char v799 = __parity__(*(char*)((char*)ptr7 - 398));
                                        char v800 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
                                        char v801 = 0;
                                        char v802 = 0;
                                        if(!v797) {
                                            goto loc_402B38;
                                        }
                                        else {
                                            int v803 = *(ptr7 - 110);
                                            *(ptr7 - 110) = *(ptr7 - 110) + 1;
                                            char v804 = *(ptr7 - 110) ? 0: 1;
                                            char v805 = *(ptr7 - 110) < 0;
                                            char v806 = __parity__((unsigned char)*(ptr7 - 110));
                                            char v807 = (((v803 ^ 0x1) ^ *(ptr7 - 110)) >>> 4) & 0x1;
                                            char v808 = ((*(ptr7 - 110) ^ v803) & ~(v803 ^ 0x1)) < 0;
                                            ptr4 = *(unsigned int*)(ptr7 - 108);
                                            v33 = *(ptr7 - 104);
                                            goto loc_402B0C;
                                        }
                                    }
                                    else {
                                        goto loc_402BDC;
                                    }
                                }
                                else {
                                    goto loc_402AD8;
                                }
                            }
                            else {
                                goto loc_402982;
                            }
                        }
                        else {
                            char v809 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                            char v810 = *(char*)((char*)ptr7 - 381) < 0;
                            char v811 = __parity__(*(char*)((char*)ptr7 - 381));
                            char v812 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                            char v813 = 0;
                            char v814 = 0;
                            if(v809) {
                                int v815 = 128;
                                do {
                                    char v816 = ptr5 == 120;
                                    char v817 = (int)ptr5 < 120;
                                    char v818 = __parity__((unsigned char)ptr5 - 120);
                                    char v819 = (unsigned int)ptr5 < 120;
                                    char v820 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 30) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x78)) < 0;
                                    char v821 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr5 - 30) ^ (int)(int*)((int)ptr5 ^ 0x78)) >>> 4) & 0x1);
                                    if(!v816) {
                                        char v822 = ptr5 == 112;
                                        char v823 = (int)ptr5 < 112;
                                        char v824 = __parity__((unsigned char)ptr5 - 112);
                                        char v825 = (unsigned int)ptr5 < 112;
                                        char v826 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 28) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x70)) < 0;
                                        char v827 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr5 - 28) ^ (int)(int*)((int)ptr5 ^ 0x70)) >>> 4) & 0x1);
                                        if(v822) {
                                            goto loc_402A1A;
                                        }
                                        else {
                                            char v828 = gvar_40B4A0 == 1;
                                            char v829 = (int)gvar_40B4A0 < 1;
                                            char v830 = __parity__((unsigned char)gvar_40B4A0 - 1);
                                            char v831 = gvar_40B4A0 < 1;
                                            char v832 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                                            char v833 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                                            if(!v828 && v829 == v832) {
                                                *(int*)&v19 = v6;
                                                v33 = sub_404318(*(int*)&v19, 4);
                                                int v834 = *(int*)&v19;
                                                v8 = (int)ptr6;
                                                ptr8 = &v18;
                                            }
                                            else {
                                                unsigned int v835 = gvar_40B490;
                                                int v836 = (unsigned int)*(char*)(v6 * 2 + v835);
                                                v33 = v836 & 0x4;
                                                char v837 = v33 ? 0: 1;
                                                char v838 = v33 < 0;
                                                char v839 = __parity__((unsigned char)v33);
                                                char v840 = 0;
                                                char v841 = 0;
                                            }
                                            char v842 = v33 ? 0: 1;
                                            char v843 = v33 < 0;
                                            char v844 = __parity__((unsigned char)v33);
                                            char v845 = 0;
                                            char v846 = 0;
                                            if(v842) {
                                                goto loc_402A4F;
                                            }
                                            else {
                                                char v847 = ptr5 == 111;
                                                char v848 = (int)ptr5 < 111;
                                                char v849 = __parity__((unsigned char)ptr5 - 111);
                                                char v850 = (unsigned int)ptr5 < 111;
                                                char v851 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 111) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x6f)) < 0;
                                                char v852 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 111) ^ (int)(int*)((int)ptr5 ^ 0x6f)) >>> 4) & 0x1);
                                                if(v847) {
                                                    char v853 = v6 == 56;
                                                    char v854 = v6 < 56;
                                                    char v855 = __parity__((unsigned char)v6 - 56);
                                                    char v856 = (unsigned int)v6 < 56;
                                                    char v857 = (((v6 - 56) ^ v6) & (v6 ^ 0x38)) < 0;
                                                    char v858 = (((v6 - 56) ^ (v6 ^ 0x38)) >>> 4) & 0x1;
                                                    if(v854 == v857) {
                                                        goto loc_402A4F;
                                                    }
                                                    else {
                                                        int v859 = *(ptr7 - 104);
                                                        *(ptr7 - 104) = *(ptr7 - 104) * 8;
                                                        char v860 = (v859 >>> 29) & 0x1;
                                                        char v861 = v857;
                                                        char v862 = *(ptr7 - 104) ? 0: 1;
                                                        char v863 = *(ptr7 - 104) < 0;
                                                        char v864 = __parity__((unsigned char)*(ptr7 - 104));
                                                    }
                                                }
                                                else {
                                                    int v865 = *(ptr7 - 104);
                                                    int v866 = v865 * 5;
                                                    int v867 = v865 * 5;
                                                    v33 = v866 * 2;
                                                    char v868 = v867 < 0;
                                                    char v869 = v867 < 0 ^ ((v867 >>> 30) & 0x1);
                                                    char v870 = v33 ? 0: 1;
                                                    char v871 = v33 < 0;
                                                    char v872 = __parity__((unsigned char)v33);
                                                    *(ptr7 - 104) = v33;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                    loc_402A1A:
                                        char v873 = gvar_40B4A0 == 1;
                                        char v874 = (int)gvar_40B4A0 < 1;
                                        char v875 = __parity__((unsigned char)gvar_40B4A0 - 1);
                                        char v876 = gvar_40B4A0 < 1;
                                        char v877 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                                        char v878 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                                        if(!v873 && v874 == v877) {
                                            *(int*)&v19 = v6;
                                            v33 = sub_404318(*(int*)&v19, 128);
                                            int v879 = *(int*)&v19;
                                            v8 = (int)ptr6;
                                            ptr8 = &v18;
                                        }
                                        else {
                                            unsigned int v880 = gvar_40B490;
                                            int v881 = (unsigned int)*(char*)(v6 * 2 + v880);
                                            v33 = v881 & 0x80;
                                            char v882 = v33 ? 0: 1;
                                            char v883 = v33 < 0;
                                            char v884 = __parity__((unsigned char)v33);
                                            char v885 = 0;
                                            char v886 = 0;
                                        }
                                        char v887 = v33 ? 0: 1;
                                        char v888 = v33 < 0;
                                        char v889 = __parity__((unsigned char)v33);
                                        char v890 = 0;
                                        char v891 = 0;
                                        if(!v887) {
                                            int v892 = *(ptr7 - 104);
                                            *(ptr7 - 104) = *(ptr7 - 104) * 16;
                                            char v893 = (v892 >>> 28) & 0x1;
                                            char v894 = 0;
                                            char v895 = *(ptr7 - 104) ? 0: 1;
                                            char v896 = *(ptr7 - 104) < 0;
                                            char v897 = __parity__((unsigned char)*(ptr7 - 104));
                                            int v898 = v6;
                                            ptr8 = &ptr6;
                                            v33 = sub_401D74();
                                            v6 = v33;
                                        }
                                        else {
                                        loc_402A4F:
                                            v10 = *(char*)((char*)ptr7 - 381);
                                            *(char*)((char*)ptr7 - 381) = *(char*)((char*)ptr7 - 381) + 1;
                                            char v899 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                            char v900 = *(char*)((char*)ptr7 - 381) < 0;
                                            char v901 = __parity__(*(char*)((char*)ptr7 - 381));
                                            char v902 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 381)) >>> 4) & 0x1;
                                            char v903 = ((*(char*)((char*)ptr7 - 381) ^ v10) & ~(v10 ^ 0x1)) < 0;
                                        }
                                    }
                                    char v904 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                    char v905 = *(char*)((char*)ptr7 - 381) < 0;
                                    char v906 = __parity__(*(char*)((char*)ptr7 - 381));
                                    char v907 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                                    char v908 = 0;
                                    char v909 = 0;
                                    if(v904) {
                                        int v910 = *(ptr7 - 103);
                                        *(ptr7 - 103) = *(ptr7 - 103) + 1;
                                        char v911 = *(ptr7 - 103) ? 0: 1;
                                        char v912 = *(ptr7 - 103) < 0;
                                        char v913 = __parity__((unsigned char)*(ptr7 - 103));
                                        char v914 = (((v910 ^ 0x1) ^ *(ptr7 - 103)) >>> 4) & 0x1;
                                        char v915 = ((*(ptr7 - 103) ^ v910) & ~(v910 ^ 0x1)) < 0;
                                        int v916 = *(ptr7 - 104);
                                        v33 = v916 + v6 - 48;
                                        *(ptr7 - 104) = v916 + v6 - 48;
                                        char v917 = *(ptr7 - 109) ? 0: 1;
                                        char v918 = *(ptr7 - 109) < 0;
                                        char v919 = __parity__((unsigned char)*(ptr7 - 109));
                                        char v920 = *(unsigned int*)(ptr7 - 109) < 0;
                                        char v921 = 0;
                                        char v922 = 0;
                                        if(!v917) {
                                            int v923 = *(ptr7 - 99);
                                            *(ptr7 - 99) = *(ptr7 - 99) - 1;
                                            char v924 = *(ptr7 - 99) ? 0: 1;
                                            char v925 = *(ptr7 - 99) < 0;
                                            char v926 = __parity__((unsigned char)*(ptr7 - 99));
                                            char v927 = ((~*(ptr7 - 99) ^ ~v923) >>> 4) & 0x1;
                                            char v928 = ((*(ptr7 - 99) ^ v923) & v923) < 0;
                                            if(!v924) {
                                                goto loc_402A8E;
                                            }
                                            else {
                                                *(char*)((char*)ptr7 - 381) = 1;
                                            }
                                        }
                                        else {
                                        loc_402A8E:
                                            int v929 = *(ptr7 - 97);
                                            *(ptr7 - 97) = *(ptr7 - 97) + 1;
                                            char v930 = *(ptr7 - 97) ? 0: 1;
                                            char v931 = *(ptr7 - 97) < 0;
                                            char v932 = __parity__((unsigned char)*(ptr7 - 97));
                                            char v933 = (((v929 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                                            char v934 = ((*(ptr7 - 97) ^ v929) & ~(v929 ^ 0x1)) < 0;
                                            unsigned int* ptr27 = *(unsigned int**)(ptr7 + 2);
                                            ptr8 = &ptr6;
                                            v33 = sub_401DA6(v8, ptr27);
                                            v6 = v33;
                                        }
                                    }
                                    else {
                                        *(ptr7 - 97) = *(ptr7 - 97) - 1;
                                        char v935 = v6 == -1;
                                        char v936 = v6 < -1;
                                        char v937 = __parity__((unsigned char)v6 - 0xFF);
                                        char v938 = (unsigned int)v6 < 0xffffffff;
                                        char v939 = (((v6 + 1) ^ v6) & ~v6) < 0;
                                        char v940 = (((v6 + 1) ^ ~v6) >>> 4) & 0x1;
                                        if(!v935) {
                                            ptr6 = *(void**)(ptr7 + 2);
                                            *(int*)&v19 = v6;
                                            v33 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
                                            int v941 = *(int*)&v19;
                                            v8 = (int)ptr6;
                                            ptr8 = &v18;
                                        }
                                    }
                                    v30 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                    char v942 = *(char*)((char*)ptr7 - 381) < 0;
                                    char v943 = __parity__(*(char*)((char*)ptr7 - 381));
                                    char v944 = *(unsigned char*)((unsigned char*)ptr7 - 381) < 0;
                                    char v945 = 0;
                                    char v946 = 0;
                                }
                                while(v30);
                                *(ptr7 - 101) = v6;
                            loc_402AC9:
                                char v947 = *(char*)((char*)ptr7 - 407) ? 0: 1;
                                char v948 = *(char*)((char*)ptr7 - 407) < 0;
                                char v949 = __parity__(*(char*)((char*)ptr7 - 407));
                                char v950 = *(unsigned char*)((unsigned char*)ptr7 - 407) < 0;
                                char v951 = 0;
                                char v952 = 0;
                                if(!v947) {
                                    unsigned int v953 = *(unsigned int*)(ptr7 - 104);
                                    *(ptr7 - 104) = 0 - *(ptr7 - 104);
                                    char v954 = *(ptr7 - 104) ? 0: 1;
                                    char v955 = *(ptr7 - 104) < 0;
                                    char v956 = __parity__((unsigned char)*(ptr7 - 104));
                                    char v957 = v953 > 0;
                                    char v958 = (*(ptr7 - 104) & v953) < 0;
                                    char v959 = ((*(ptr7 - 104) ^ v953) >>> 4) & 0x1;
                                }
                                goto loc_402AD8;
                            }
                            else {
                                goto loc_402AC9;
                            }
                        }
                    }
                    else {
                    loc_4027E8:
                        int v960 = *(ptr7 - 99);
                        *(ptr7 - 99) = *(ptr7 - 99) - 1;
                        char v961 = *(ptr7 - 99) ? 0: 1;
                        char v962 = *(ptr7 - 99) < 0;
                        char v963 = __parity__((unsigned char)*(ptr7 - 99));
                        char v964 = ((~*(ptr7 - 99) ^ ~v960) >>> 4) & 0x1;
                        char v965 = ((*(ptr7 - 99) ^ v960) & v960) < 0;
                        if(v961) {
                            char v966 = v8 ? 0: 1;
                            char v967 = v8 < 0;
                            char v968 = __parity__((unsigned char)v8);
                            char v969 = 0;
                            char v970 = 0;
                            if(!v966) {
                                *(char*)((char*)ptr7 - 381) = 1;
                                goto loc_402813;
                            }
                        }
                        int v971 = *(ptr7 - 97);
                        *(ptr7 - 97) = *(ptr7 - 97) + 1;
                        char v972 = *(ptr7 - 97) ? 0: 1;
                        char v973 = *(ptr7 - 97) < 0;
                        char v974 = __parity__((unsigned char)*(ptr7 - 97));
                        char v975 = (((v971 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                        char v976 = ((*(ptr7 - 97) ^ v971) & ~(v971 ^ 0x1)) < 0;
                        unsigned int* ptr28 = *(unsigned int**)(ptr7 + 2);
                        ptr8 = &ptr6;
                        v33 = sub_401DA6(v8, ptr28);
                        v6 = v33;
                        *(ptr7 - 101) = v6;
                        goto loc_402813;
                    loc_402106:
                        v6 = *(ptr7 - 101);
                        char v977 = v6 == 45;
                        char v978 = v6 < 45;
                        char v979 = __parity__((unsigned char)v6 - 45);
                        char v980 = (unsigned int)v6 < 45;
                        char v981 = (((v6 - 45) ^ v6) & (v6 ^ 0x2d)) < 0;
                        char v982 = (((v6 - 45) ^ (v6 ^ 0x2d)) >>> 4) & 0x1;
                        if(v977) {
                            *(char*)((char*)ptr7 - 407) = 1;
                            goto loc_40267D;
                        }
                    }
                }
                else {
                loc_402393:
                    char v983 = *(char*)((char*)ptr7 - 389) ? 0: 1;
                    char v984 = *(char*)((char*)ptr7 - 389) < 0;
                    char v985 = __parity__(*(char*)((char*)ptr7 - 389));
                    char v986 = *(unsigned char*)((unsigned char*)ptr7 - 389) < 0;
                    char v987 = 0;
                    char v988 = 0;
                    if(!v983 && v984 == 0) {
                        *(char*)((char*)ptr7 - 406) = 1;
                    }
                    goto loc_40255A;
                }
                char v989 = v6 == 43;
                char v990 = v6 < 43;
                char v991 = __parity__((unsigned char)v6 - 43);
                char v992 = (unsigned int)v6 < 43;
                char v993 = (((v6 - 43) ^ v6) & (v6 ^ 0x2b)) < 0;
                char v994 = (((v6 - 43) ^ (v6 ^ 0x2b)) >>> 4) & 0x1;
                if(v989) {
                loc_40267D:
                    int v995 = *(ptr7 - 99);
                    *(ptr7 - 99) = *(ptr7 - 99) - 1;
                    char v996 = *(ptr7 - 99) ? 0: 1;
                    char v997 = *(ptr7 - 99) < 0;
                    char v998 = __parity__((unsigned char)*(ptr7 - 99));
                    char v999 = ((~*(ptr7 - 99) ^ ~v995) >>> 4) & 0x1;
                    char v1000 = ((*(ptr7 - 99) ^ v995) & v995) < 0;
                    if(v996) {
                        char v1001 = v8 ? 0: 1;
                        char v1002 = v8 < 0;
                        char v1003 = __parity__((unsigned char)v8);
                        char v1004 = 0;
                        char v1005 = 0;
                        if(v1001) {
                            goto loc_402692;
                        }
                        else {
                            *(char*)((char*)ptr7 - 381) = 1;
                        }
                    }
                    else {
                    loc_402692:
                        int v1006 = *(ptr7 - 97);
                        *(ptr7 - 97) = *(ptr7 - 97) + 1;
                        char v1007 = *(ptr7 - 97) ? 0: 1;
                        char v1008 = *(ptr7 - 97) < 0;
                        char v1009 = __parity__((unsigned char)*(ptr7 - 97));
                        char v1010 = (((v1006 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                        char v1011 = ((*(ptr7 - 97) ^ v1006) & ~(v1006 ^ 0x1)) < 0;
                        unsigned int* ptr29 = *(unsigned int**)(ptr7 + 2);
                        ptr8 = &ptr6;
                        v33 = sub_401DA6(v8, ptr29);
                        v6 = v33;
                        *(ptr7 - 101) = v33;
                    }
                }
                char v1012 = v6 == 48;
                char v1013 = v6 < 48;
                char v1014 = __parity__((unsigned char)v6 - 48);
                char v1015 = (unsigned int)v6 < 48;
                char v1016 = (((v6 - 48) ^ v6) & (v6 ^ 0x30)) < 0;
                char v1017 = (((v6 - 48) ^ (v6 ^ 0x30)) >>> 4) & 0x1;
                if(v1012) {
                    int v1018 = *(ptr7 - 97);
                    *(ptr7 - 97) = *(ptr7 - 97) + 1;
                    char v1019 = *(ptr7 - 97) ? 0: 1;
                    char v1020 = *(ptr7 - 97) < 0;
                    char v1021 = __parity__((unsigned char)*(ptr7 - 97));
                    char v1022 = (((v1018 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                    char v1023 = ((*(ptr7 - 97) ^ v1018) & ~(v1018 ^ 0x1)) < 0;
                    unsigned int* ptr30 = *(unsigned int**)(ptr7 + 2);
                    v33 = sub_401DA6(v8, ptr30);
                    v6 = v33;
                    *(ptr7 - 101) = v33;
                    char v1024 = (unsigned char)v6 == 120;
                    char v1025 = (unsigned char)v6 < 120;
                    char v1026 = __parity__((unsigned char)v6 - 120);
                    char v1027 = (unsigned char)v6 < 120;
                    char v1028 = ((((unsigned char)v6 - 120) ^ (unsigned char)v6) & ((unsigned char)v6 ^ 0x78)) < 0;
                    char v1029 = ((((unsigned char)v6 - 120) ^ ((unsigned char)v6 ^ 0x78)) >>> 4) & 0x1;
                    if(!v1024) {
                        char v1030 = (unsigned char)v6 == 88;
                        char v1031 = (unsigned char)v6 < 88;
                        char v1032 = __parity__((unsigned char)v6 - 88);
                        char v1033 = (unsigned char)v6 < 88;
                        char v1034 = ((((unsigned char)v6 - 88) ^ (unsigned char)v6) & ((unsigned char)v6 ^ 0x58)) < 0;
                        char v1035 = ((((unsigned char)v6 - 88) ^ ((unsigned char)v6 ^ 0x58)) >>> 4) & 0x1;
                        if(!v1030) {
                            *(ptr7 - 103) = 1;
                            char v1036 = ptr5 == 120;
                            char v1037 = (int)ptr5 < 120;
                            char v1038 = __parity__((unsigned char)ptr5 - 120);
                            char v1039 = (unsigned int)ptr5 < 120;
                            char v1040 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 30) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x78)) < 0;
                            char v1041 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr5 - 30) ^ (int)(int*)((int)ptr5 ^ 0x78)) >>> 4) & 0x1);
                            if(!v1036) {
                                char v1042 = *(ptr7 - 109) ? 0: 1;
                                char v1043 = *(ptr7 - 109) < 0;
                                char v1044 = __parity__((unsigned char)*(ptr7 - 109));
                                char v1045 = *(unsigned int*)(ptr7 - 109) < 0;
                                char v1046 = 0;
                                char v1047 = 0;
                                if(!v1042) {
                                    int v1048 = *(ptr7 - 99);
                                    *(ptr7 - 99) = *(ptr7 - 99) - 1;
                                    char v1049 = *(ptr7 - 99) ? 0: 1;
                                    char v1050 = *(ptr7 - 99) < 0;
                                    char v1051 = __parity__((unsigned char)*(ptr7 - 99));
                                    char v1052 = ((~*(ptr7 - 99) ^ ~v1048) >>> 4) & 0x1;
                                    char v1053 = ((*(ptr7 - 99) ^ v1048) & v1048) < 0;
                                    if(v1049) {
                                        v10 = *(char*)((char*)ptr7 - 381);
                                        *(char*)((char*)ptr7 - 381) = *(char*)((char*)ptr7 - 381) + 1;
                                        char v1054 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                                        char v1055 = *(char*)((char*)ptr7 - 381) < 0;
                                        char v1056 = __parity__(*(char*)((char*)ptr7 - 381));
                                        char v1057 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 381)) >>> 4) & 0x1;
                                        char v1058 = ((*(char*)((char*)ptr7 - 381) ^ v10) & ~(v10 ^ 0x1)) < 0;
                                    }
                                }
                                ptr6 = (void*)0x6F;
                                ptr5 = (unsigned int*)ptr6;
                                ptr8 = &v18;
                            }
                            else {
                                *(ptr7 - 97) = *(ptr7 - 97) - 1;
                                char v1059 = v6 == -1;
                                char v1060 = v6 < -1;
                                char v1061 = __parity__((unsigned char)v6 - 0xFF);
                                char v1062 = (unsigned int)v6 < 0xffffffff;
                                char v1063 = (((v6 + 1) ^ v6) & ~v6) < 0;
                                char v1064 = (((v6 + 1) ^ ~v6) >>> 4) & 0x1;
                                if(!v1059) {
                                    ptr6 = *(void**)(ptr7 + 2);
                                    *(int*)&v19 = v6;
                                    v33 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
                                    int v1065 = *(int*)&v19;
                                    v8 = (int)ptr6;
                                }
                                v6 = (int)(void*)0x30;
                                ptr8 = &v18;
                                *(ptr7 - 101) = v6;
                            }
                            goto loc_402813;
                        }
                    }
                    int v1066 = *(ptr7 - 97);
                    *(ptr7 - 97) = *(ptr7 - 97) + 1;
                    char v1067 = *(ptr7 - 97) ? 0: 1;
                    char v1068 = *(ptr7 - 97) < 0;
                    char v1069 = __parity__((unsigned char)*(ptr7 - 97));
                    char v1070 = (((v1066 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                    char v1071 = ((*(ptr7 - 97) ^ v1066) & ~(v1066 ^ 0x1)) < 0;
                    unsigned int* ptr31 = *(unsigned int**)(ptr7 + 2);
                    v33 = sub_401DA6(v25, ptr31);
                    v6 = v33;
                    *(ptr7 - 101) = v33;
                    char v1072 = *(ptr7 - 109) ? 0: 1;
                    char v1073 = *(ptr7 - 109) < 0;
                    char v1074 = __parity__((unsigned char)*(ptr7 - 109));
                    char v1075 = *(unsigned int*)(ptr7 - 109) < 0;
                    char v1076 = 0;
                    char v1077 = 0;
                    if(!v1072) {
                        *(ptr7 - 99) = *(ptr7 - 99) - 2;
                        char v1078 = *(ptr7 - 99) == 1;
                        char v1079 = *(ptr7 - 99) < 1;
                        char v1080 = __parity__((unsigned char)*(ptr7 - 99) - 1);
                        char v1081 = *(unsigned int*)(ptr7 - 99) < 1;
                        char v1082 = (((*(ptr7 - 99) - 1) ^ *(ptr7 - 99)) & (*(ptr7 - 99) ^ 0x1)) < 0;
                        char v1083 = (((*(ptr7 - 99) - 1) ^ (*(ptr7 - 99) ^ 0x1)) >>> 4) & 0x1;
                        if(v1079 != v1082) {
                            v10 = *(char*)((char*)ptr7 - 381);
                            *(char*)((char*)ptr7 - 381) = *(char*)((char*)ptr7 - 381) + 1;
                            char v1084 = *(char*)((char*)ptr7 - 381) ? 0: 1;
                            char v1085 = *(char*)((char*)ptr7 - 381) < 0;
                            char v1086 = __parity__(*(char*)((char*)ptr7 - 381));
                            char v1087 = (((v10 ^ 0x1) ^ *(char*)((char*)ptr7 - 381)) >>> 4) & 0x1;
                            char v1088 = ((*(char*)((char*)ptr7 - 381) ^ v10) & ~(v10 ^ 0x1)) < 0;
                        }
                    }
                    ptr6 = (void*)0x78;
                    ptr5 = (unsigned int*)ptr6;
                    ptr8 = &v18;
                }
                goto loc_402813;
            }
            else {
                char v1089 = ptr5 == 100;
                char v1090 = (int)ptr5 < 100;
                char v1091 = __parity__((unsigned char)ptr5 - 100);
                char v1092 = (unsigned int)ptr5 < 100;
                char v1093 = (int)(int*)((int)(int*)((int)(int*)(ptr5 - 25) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x64)) < 0;
                char v1094 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr5 - 25) ^ (int)(int*)((int)ptr5 ^ 0x64)) >>> 4) & 0x1);
                if(v1089) {
                    goto loc_4027CF;
                }
                else if(v1090 != v1093) {
                    goto loc_4023D2;
                }
                else {
                    char v1095 = ptr5 == 103;
                    char v1096 = (int)ptr5 < 103;
                    char v1097 = __parity__((unsigned char)ptr5 - 103);
                    char v1098 = (unsigned int)ptr5 < 103;
                    char v1099 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 103) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x67)) < 0;
                    char v1100 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 103) ^ (int)(int*)((int)ptr5 ^ 0x67)) >>> 4) & 0x1);
                    if(!v1095 && v1096 == v1099) {
                        char v1101 = ptr5 == 105;
                        char v1102 = (int)ptr5 < 105;
                        char v1103 = __parity__((unsigned char)ptr5 - 105);
                        char v1104 = (unsigned int)ptr5 < 105;
                        char v1105 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 105) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x69)) < 0;
                        char v1106 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 105) ^ (int)(int*)((int)ptr5 ^ 0x69)) >>> 4) & 0x1);
                        if(!v1101) {
                            char v1107 = ptr5 == 110;
                            char v1108 = (int)ptr5 < 110;
                            char v1109 = __parity__((unsigned char)ptr5 - 110);
                            char v1110 = (unsigned int)ptr5 < 110;
                            char v1111 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 110) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x6e)) < 0;
                            char v1112 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 110) ^ (int)(int*)((int)ptr5 ^ 0x6e)) >>> 4) & 0x1);
                            if(!v1107) {
                                goto loc_4023D2;
                            }
                            else {
                                v33 = *(ptr7 - 97);
                                char v1113 = *(char*)((char*)ptr7 - 398) ? 0: 1;
                                char v1114 = *(char*)((char*)ptr7 - 398) < 0;
                                char v1115 = __parity__(*(char*)((char*)ptr7 - 398));
                                char v1116 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
                                char v1117 = 0;
                                char v1118 = 0;
                                if(v1113) {
                                loc_402B0C:
                                    char v1119 = *(ptr7 - 114) ? 0: 1;
                                    char v1120 = *(ptr7 - 114) < 0;
                                    char v1121 = __parity__((unsigned char)*(ptr7 - 114));
                                    char v1122 = *(unsigned int*)(ptr7 - 114) < 0;
                                    char v1123 = 0;
                                    char v1124 = 0;
                                    if(!v1119) {
                                        int v1125 = *(ptr7 - 107);
                                        *(int*)ptr4 = *(ptr7 - 107);
                                        v33 = *(ptr7 - 106);
                                        *(int*)(ptr4 + 2) = *(ptr7 - 106);
                                    }
                                    else {
                                        char v1126 = *(char*)((char*)ptr7 - 397) ? 0: 1;
                                        char v1127 = *(char*)((char*)ptr7 - 397) < 0;
                                        char v1128 = __parity__(*(char*)((char*)ptr7 - 397));
                                        char v1129 = *(unsigned char*)((unsigned char*)ptr7 - 397) < 0;
                                        char v1130 = 0;
                                        char v1131 = 0;
                                        if(!v1126) {
                                            *(int*)ptr4 = v33;
                                        }
                                        else {
                                            *ptr4 = (unsigned short)v33;
                                        }
                                    }
                                }
                                goto loc_402B38;
                            }
                        }
                        else {
                            ptr5 = (unsigned int*)0x64;
                            ptr8 = &v18;
                            goto loc_402106;
                        }
                    }
                    else {
                        ptr0 = (unsigned char*)(ptr7 - 95);
                        v3 = *(ptr7 - 101);
                        char v1132 = v3 == 45;
                        char v1133 = v3 < 45;
                        char v1134 = __parity__((unsigned char)v3 - 45);
                        char v1135 = (unsigned int)v3 < 45;
                        char v1136 = (((v3 - 45) ^ v3) & (v3 ^ 0x2d)) < 0;
                        char v1137 = (((v3 - 45) ^ (v3 ^ 0x2d)) >>> 4) & 0x1;
                        if(v1132) {
                            *(char*)(ptr7 - 95) = (unsigned char)v3;
                            ptr0 = (unsigned char*)((unsigned char*)ptr7 - 379);
                            goto loc_402145;
                        }
                        else {
                            char v1138 = v3 == 43;
                            char v1139 = v3 < 43;
                            char v1140 = __parity__((unsigned char)v3 - 43);
                            char v1141 = (unsigned int)v3 < 43;
                            char v1142 = (((v3 - 43) ^ v3) & (v3 ^ 0x2b)) < 0;
                            char v1143 = (((v3 - 43) ^ (v3 ^ 0x2b)) >>> 4) & 0x1;
                            if(v1138) {
                            loc_402145:
                                *(ptr7 - 99) = *(ptr7 - 99) - 1;
                                int v1144 = *(ptr7 - 97);
                                *(ptr7 - 97) = *(ptr7 - 97) + 1;
                                char v1145 = *(ptr7 - 97) ? 0: 1;
                                char v1146 = *(ptr7 - 97) < 0;
                                char v1147 = __parity__((unsigned char)*(ptr7 - 97));
                                char v1148 = (((v1144 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                                char v1149 = ((*(ptr7 - 97) ^ v1144) & ~(v1144 ^ 0x1)) < 0;
                                ptr5 = *(unsigned int**)(ptr7 + 2);
                                unsigned int* ptr32 = *(unsigned int**)(ptr7 + 2);
                                ptr8 = &ptr6;
                                int v1150 = sub_401DA6(v8, ptr32);
                                v3 = v1150;
                                *(ptr7 - 101) = v1150;
                            }
                            else {
                                ptr5 = *(unsigned int**)(ptr7 + 2);
                            }
                        }
                        v2 = *(ptr7 - 109) ? 0: 1;
                        char v1151 = *(ptr7 - 109) < 0;
                        char v1152 = __parity__((unsigned char)*(ptr7 - 109));
                        char v1153 = *(unsigned int*)(ptr7 - 109) < 0;
                        char v1154 = 0;
                        char v1155 = 0;
                    }
                }
            }
        }
        if(!v2) {
            char v1156 = *(ptr7 - 99) == 349;
            char v1157 = *(ptr7 - 99) < 349;
            char v1158 = __parity__((unsigned char)*(ptr7 - 99) - 93);
            char v1159 = *(unsigned int*)(ptr7 - 99) < 349;
            char v1160 = (((*(ptr7 - 99) - 349) ^ *(ptr7 - 99)) & (*(ptr7 - 99) ^ 0x15d)) < 0;
            char v1161 = (((*(ptr7 - 99) - 349) ^ (*(ptr7 - 99) ^ 0x15d)) >>> 4) & 0x1;
            if(!v1156 && v1157 == v1160) {
                goto loc_40217D;
            }
        }
        else {
        loc_40217D:
            *(ptr7 - 99) = 349;
        }
        while(1) {
            char v1162 = gvar_40B4A0 == 1;
            char v1163 = (int)gvar_40B4A0 < 1;
            char v1164 = __parity__((unsigned char)gvar_40B4A0 - 1);
            char v1165 = gvar_40B4A0 < 1;
            char v1166 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
            char v1167 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
            if(!v1162 && v1163 == v1166) {
                *(int*)&v19 = v3;
                v33 = sub_404318(*(int*)&v19, 4);
                int v1168 = *(int*)&v19;
                v8 = (int)ptr6;
                ptr8 = &v18;
            }
            else {
                unsigned int v1169 = gvar_40B490;
                int v1170 = (unsigned int)*(char*)(v3 * 2 + v1169);
                v33 = v1170 & 0x4;
                char v1171 = v33 ? 0: 1;
                char v1172 = v33 < 0;
                char v1173 = __parity__((unsigned char)v33);
                char v1174 = 0;
                char v1175 = 0;
            }
            char v1176 = v33 ? 0: 1;
            char v1177 = v33 < 0;
            char v1178 = __parity__((unsigned char)v33);
            char v1179 = 0;
            char v1180 = 0;
            if(v1176) {
                break;
            }
            else {
                v33 = *(ptr7 - 99);
                *(ptr7 - 99) = *(ptr7 - 99) - 1;
                char v1181 = v33 ? 0: 1;
                char v1182 = v33 < 0;
                char v1183 = __parity__((unsigned char)v33);
                char v1184 = 0;
                char v1185 = 0;
                if(v1181) {
                    break;
                }
                else {
                    int v1186 = *(ptr7 - 103);
                    *(ptr7 - 103) = *(ptr7 - 103) + 1;
                    char v1187 = *(ptr7 - 103) ? 0: 1;
                    char v1188 = *(ptr7 - 103) < 0;
                    char v1189 = __parity__((unsigned char)*(ptr7 - 103));
                    char v1190 = (((v1186 ^ 0x1) ^ *(ptr7 - 103)) >>> 4) & 0x1;
                    char v1191 = ((*(ptr7 - 103) ^ v1186) & ~(v1186 ^ 0x1)) < 0;
                    *ptr0 = (unsigned char)v3;
                    ++ptr0;
                    int v1192 = *(ptr7 - 97);
                    *(ptr7 - 97) = *(ptr7 - 97) + 1;
                    char v1193 = *(ptr7 - 97) ? 0: 1;
                    char v1194 = *(ptr7 - 97) < 0;
                    char v1195 = __parity__((unsigned char)*(ptr7 - 97));
                    char v1196 = (((v1192 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                    char v1197 = ((*(ptr7 - 97) ^ v1192) & ~(v1192 ^ 0x1)) < 0;
                    unsigned int* ptr33 = ptr5;
                    ptr8 = &ptr6;
                    int v1198 = sub_401DA6(v8, ptr33);
                    v3 = v1198;
                    *(ptr7 - 101) = v1198;
                }
            }
        }
        char v1199 = (unsigned char)v3 == gvar_40B4A4;
        char v1200 = (unsigned char)v3 > (char)gvar_40B4A4;
        char v1201 = __parity__(gvar_40B4A4 - (unsigned char)v3);
        char v1202 = (unsigned char)v3 > gvar_40B4A4;
        char v1203 = (((gvar_40B4A4 - (unsigned char)v3) ^ gvar_40B4A4) & ((unsigned char)v3 ^ gvar_40B4A4)) < 0;
        char v1204 = (((gvar_40B4A4 - (unsigned char)v3) ^ ((unsigned char)v3 ^ gvar_40B4A4)) >>> 4) & 0x1;
        if(v1199) {
            v33 = *(ptr7 - 99);
            *(ptr7 - 99) = *(ptr7 - 99) - 1;
            char v1205 = v33 ? 0: 1;
            char v1206 = v33 < 0;
            char v1207 = __parity__((unsigned char)v33);
            char v1208 = 0;
            char v1209 = 0;
            if(!v1205) {
                int v1210 = *(ptr7 - 97);
                *(ptr7 - 97) = *(ptr7 - 97) + 1;
                char v1211 = *(ptr7 - 97) ? 0: 1;
                char v1212 = *(ptr7 - 97) < 0;
                char v1213 = __parity__((unsigned char)*(ptr7 - 97));
                char v1214 = (((v1210 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                char v1215 = ((*(ptr7 - 97) ^ v1210) & ~(v1210 ^ 0x1)) < 0;
                unsigned int* ptr34 = ptr5;
                ptr8 = &ptr6;
                int v1216 = sub_401DA6(v8, ptr34);
                v3 = v1216;
                v1216 = (unsigned int)gvar_40B4A4 | ((unsigned int)((v1216 >>> 8) & 0xffffff) << 8);
                *ptr0 = gvar_40B4A4;
                unsigned char* ptr35 = ptr0;
                ++ptr0;
                char v1217 = ptr0 ? 0: 1;
                char v1218 = (int)ptr0 < 0;
                char v1219 = __parity__((unsigned char)ptr0);
                char v1220 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr35 ^ 0x1) ^ (int)ptr0) >>> 4) & 0x1);
                char v1221 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr35) & (int*)~(int)(int*)((int)ptr35 ^ 0x1)) < 0;
                while(1) {
                    *(ptr7 - 101) = v3;
                    char v1222 = gvar_40B4A0 == 1;
                    char v1223 = (int)gvar_40B4A0 < 1;
                    char v1224 = __parity__((unsigned char)gvar_40B4A0 - 1);
                    char v1225 = gvar_40B4A0 < 1;
                    char v1226 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                    char v1227 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                    if(!v1222 && v1223 == v1226) {
                        *(int*)&v19 = v3;
                        v33 = sub_404318(*(int*)&v19, 4);
                        int v1228 = *(int*)&v19;
                        v8 = (int)ptr6;
                        ptr8 = &v18;
                    }
                    else {
                        unsigned int v1229 = gvar_40B490;
                        int v1230 = (unsigned int)*(char*)(v3 * 2 + v1229);
                        v33 = v1230 & 0x4;
                        char v1231 = v33 ? 0: 1;
                        char v1232 = v33 < 0;
                        char v1233 = __parity__((unsigned char)v33);
                        char v1234 = 0;
                        char v1235 = 0;
                    }
                    char v1236 = v33 ? 0: 1;
                    char v1237 = v33 < 0;
                    char v1238 = __parity__((unsigned char)v33);
                    char v1239 = 0;
                    char v1240 = 0;
                    if(v1236) {
                        goto loc_402260;
                    }
                    else {
                        v33 = *(ptr7 - 99);
                        *(ptr7 - 99) = *(ptr7 - 99) - 1;
                        char v1241 = v33 ? 0: 1;
                        char v1242 = v33 < 0;
                        char v1243 = __parity__((unsigned char)v33);
                        char v1244 = 0;
                        char v1245 = 0;
                        if(v1241) {
                            goto loc_402260;
                        }
                        else {
                            int v1246 = *(ptr7 - 103);
                            *(ptr7 - 103) = *(ptr7 - 103) + 1;
                            char v1247 = *(ptr7 - 103) ? 0: 1;
                            char v1248 = *(ptr7 - 103) < 0;
                            char v1249 = __parity__((unsigned char)*(ptr7 - 103));
                            char v1250 = (((v1246 ^ 0x1) ^ *(ptr7 - 103)) >>> 4) & 0x1;
                            char v1251 = ((*(ptr7 - 103) ^ v1246) & ~(v1246 ^ 0x1)) < 0;
                            *ptr0 = (unsigned char)v3;
                            ++ptr0;
                            int v1252 = *(ptr7 - 97);
                            *(ptr7 - 97) = *(ptr7 - 97) + 1;
                            char v1253 = *(ptr7 - 97) ? 0: 1;
                            char v1254 = *(ptr7 - 97) < 0;
                            char v1255 = __parity__((unsigned char)*(ptr7 - 97));
                            char v1256 = (((v1252 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                            char v1257 = ((*(ptr7 - 97) ^ v1252) & ~(v1252 ^ 0x1)) < 0;
                            unsigned int* ptr36 = ptr5;
                            ptr8 = &ptr6;
                            int v1258 = sub_401DA6(v8, ptr36);
                            v3 = v1258;
                        }
                    }
                }
                goto loc_402AD8;
            }
        }
    loc_402260:
        char v1259 = *(ptr7 - 103) ? 0: 1;
        char v1260 = *(ptr7 - 103) < 0;
        char v1261 = __parity__((unsigned char)*(ptr7 - 103));
        char v1262 = *(unsigned int*)(ptr7 - 103) < 0;
        char v1263 = 0;
        char v1264 = 0;
        if(v1259) {
        loc_402324:
            *(ptr7 - 97) = *(ptr7 - 97) - 1;
            char v1265 = v3 == -1;
            char v1266 = v3 < -1;
            char v1267 = __parity__((unsigned char)v3 - 0xFF);
            char v1268 = (unsigned int)v3 < 0xffffffff;
            char v1269 = (((v3 + 1) ^ v3) & ~v3) < 0;
            char v1270 = (((v3 + 1) ^ ~v3) >>> 4) & 0x1;
            if(!v1265) {
                *(int*)&v19 = v3;
                v33 = sub_404474(*(unsigned int*)&v19, ptr5);
                int v1271 = *(int*)&v19;
                void* ptr37 = ptr6;
                ptr8 = &v18;
            }
            char v1272 = *(ptr7 - 103) ? 0: 1;
            char v1273 = *(ptr7 - 103) < 0;
            char v1274 = __parity__((unsigned char)*(ptr7 - 103));
            char v1275 = *(unsigned int*)(ptr7 - 103) < 0;
            char v1276 = 0;
            char v1277 = 0;
            if(!v1272) {
                char v1278 = *(char*)((char*)ptr7 - 398) ? 0: 1;
                char v1279 = *(char*)((char*)ptr7 - 398) < 0;
                char v1280 = __parity__(*(char*)((char*)ptr7 - 398));
                char v1281 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
                char v1282 = 0;
                char v1283 = 0;
                if(v1278) {
                    int v1284 = *(ptr7 - 110);
                    *(ptr7 - 110) = *(ptr7 - 110) + 1;
                    char v1285 = *(ptr7 - 110) ? 0: 1;
                    char v1286 = *(ptr7 - 110) < 0;
                    char v1287 = __parity__((unsigned char)*(ptr7 - 110));
                    char v1288 = (((v1284 ^ 0x1) ^ *(ptr7 - 110)) >>> 4) & 0x1;
                    char v1289 = ((*(ptr7 - 110) ^ v1284) & ~(v1284 ^ 0x1)) < 0;
                    *ptr0 = 0;
                    void* ptr38 = (void*)(ptr7 - 95);
                    ptr6 = (void*)(ptr7 - 95);
                    *(int*)&v19 = *(ptr7 - 108);
                    int v1290 = (int)*(char*)((char*)ptr7 - 397);
                    int v1291 = (int)*(char*)((char*)ptr7 - 397);
                    int v1292 = v1290 - 1;
                    char v1293 = v1292 ? 0: 1;
                    char v1294 = v1292 < 0;
                    char v1295 = __parity__((unsigned char)v1292);
                    char v1296 = ((~v1292 ^ ~v1291) >>> 4) & 0x1;
                    char v1297 = ((v1292 ^ v1291) & v1291) < 0;
                    v20 = v1292;
                    v33 = gvar_40B350{sub_4051BD}();
                    int* ptr39 = &v20;
                    ptr8 = &v18;
                    char v1298 = &v17 == 8;
                    char v1299 = (int)&v18 < 0;
                    char v1300 = __parity__((unsigned char)&v17 - 8);
                    char v1301 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v20 ^ 0xc) ^ (int)&v18) >>> 4) & 0x1);
                    char v1302 = (unsigned int)&v20 >= 0xfffffff4;
                    char v1303 = (int)(int*)((int)(int*)((int)&v18 ^ (int)&v20) & (int*)~(int)(int*)((int)&v20 ^ 0xc)) < 0;
                }
                goto loc_402B38;
            }
        }
        else {
            char v1304 = v3 == 101;
            char v1305 = v3 < 101;
            char v1306 = __parity__((unsigned char)v3 - 101);
            char v1307 = (unsigned int)v3 < 101;
            char v1308 = (((v3 - 101) ^ v3) & (v3 ^ 0x65)) < 0;
            char v1309 = (((v3 - 101) ^ (v3 ^ 0x65)) >>> 4) & 0x1;
            if(!v1304) {
                char v1310 = v3 == 69;
                char v1311 = v3 < 69;
                char v1312 = __parity__((unsigned char)v3 - 69);
                char v1313 = (unsigned int)v3 < 69;
                char v1314 = (((v3 - 69) ^ v3) & (v3 ^ 0x45)) < 0;
                char v1315 = (((v3 - 69) ^ (v3 ^ 0x45)) >>> 4) & 0x1;
                if(!v1310) {
                    goto loc_402324;
                }
            }
            v33 = *(ptr7 - 99);
            *(ptr7 - 99) = *(ptr7 - 99) - 1;
            char v1316 = v33 ? 0: 1;
            char v1317 = v33 < 0;
            char v1318 = __parity__((unsigned char)v33);
            char v1319 = 0;
            char v1320 = 0;
            if(v1316) {
                goto loc_402324;
            }
            else {
                *ptr0 = 101;
                ++ptr0;
                int v1321 = *(ptr7 - 97);
                *(ptr7 - 97) = *(ptr7 - 97) + 1;
                char v1322 = *(ptr7 - 97) ? 0: 1;
                char v1323 = *(ptr7 - 97) < 0;
                char v1324 = __parity__((unsigned char)*(ptr7 - 97));
                char v1325 = (((v1321 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                char v1326 = ((*(ptr7 - 97) ^ v1321) & ~(v1321 ^ 0x1)) < 0;
                unsigned int* ptr40 = ptr5;
                ptr8 = &ptr6;
                int v1327 = sub_401DA6(v8, ptr40);
                v3 = v1327;
                *(ptr7 - 101) = v1327;
                char v1328 = v3 == 45;
                char v1329 = v3 < 45;
                char v1330 = __parity__((unsigned char)v3 - 45);
                char v1331 = (unsigned int)v3 < 45;
                char v1332 = (((v3 - 45) ^ v3) & (v3 ^ 0x2d)) < 0;
                char v1333 = (((v3 - 45) ^ (v3 ^ 0x2d)) >>> 4) & 0x1;
                if(v1328) {
                    *ptr0 = (unsigned char)v1327;
                    unsigned char* ptr41 = ptr0;
                    ++ptr0;
                    char v1334 = ptr0 ? 0: 1;
                    char v1335 = (int)ptr0 < 0;
                    char v1336 = __parity__((unsigned char)ptr0);
                    char v1337 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr41 ^ 0x1) ^ (int)ptr0) >>> 4) & 0x1);
                    char v1338 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr41) & (int*)~(int)(int*)((int)ptr41 ^ 0x1)) < 0;
                    goto loc_4022B7;
                }
                else {
                    v1 = v3 == 43;
                    char v1339 = v3 < 43;
                    char v1340 = __parity__((unsigned char)v3 - 43);
                    char v1341 = (unsigned int)v3 < 43;
                    char v1342 = (((v3 - 43) ^ v3) & (v3 ^ 0x2b)) < 0;
                    char v1343 = (((v3 - 43) ^ (v3 ^ 0x2b)) >>> 4) & 0x1;
                }
                if(!v1) {
                loc_4022E4:
                    char v1344 = gvar_40B4A0 == 1;
                    char v1345 = (int)gvar_40B4A0 < 1;
                    char v1346 = __parity__((unsigned char)gvar_40B4A0 - 1);
                    char v1347 = gvar_40B4A0 < 1;
                    char v1348 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                    char v1349 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
                    if(!v1344 && v1345 == v1348) {
                        *(int*)&v19 = v3;
                        v33 = sub_404318(*(int*)&v19, 4);
                        int v1350 = *(int*)&v19;
                        param0 = (int)ptr6;
                        ptr8 = &v18;
                    }
                    else {
                        unsigned int v1351 = gvar_40B490;
                        int v1352 = (unsigned int)*(char*)(v3 * 2 + v1351);
                        v33 = v1352 & 0x4;
                        char v1353 = v33 ? 0: 1;
                        char v1354 = v33 < 0;
                        char v1355 = __parity__((unsigned char)v33);
                        char v1356 = 0;
                        char v1357 = 0;
                    }
                    char v1358 = v33 ? 0: 1;
                    char v1359 = v33 < 0;
                    char v1360 = __parity__((unsigned char)v33);
                    char v1361 = 0;
                    char v1362 = 0;
                    if(!v1358) {
                        v33 = *(ptr7 - 99);
                        *(ptr7 - 99) = *(ptr7 - 99) - 1;
                        char v1363 = v33 ? 0: 1;
                        char v1364 = v33 < 0;
                        char v1365 = __parity__((unsigned char)v33);
                        char v1366 = 0;
                        char v1367 = 0;
                        if(!v1363) {
                            int v1368 = *(ptr7 - 103);
                            *(ptr7 - 103) = *(ptr7 - 103) + 1;
                            char v1369 = *(ptr7 - 103) ? 0: 1;
                            char v1370 = *(ptr7 - 103) < 0;
                            char v1371 = __parity__((unsigned char)*(ptr7 - 103));
                            char v1372 = (((v1368 ^ 0x1) ^ *(ptr7 - 103)) >>> 4) & 0x1;
                            char v1373 = ((*(ptr7 - 103) ^ v1368) & ~(v1368 ^ 0x1)) < 0;
                            *ptr0 = (unsigned char)v3;
                            unsigned char* ptr42 = ptr0;
                            ++ptr0;
                            char v1374 = ptr0 ? 0: 1;
                            char v1375 = (int)ptr0 < 0;
                            char v1376 = __parity__((unsigned char)ptr0);
                            char v1377 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr42 ^ 0x1) ^ (int)ptr0) >>> 4) & 0x1);
                            char v1378 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr42) & (int*)~(int)(int*)((int)ptr42 ^ 0x1)) < 0;
                            goto loc_4022CF;
                        }
                    }
                    goto loc_402324;
                }
                else {
                loc_4022B7:
                    int v1379 = *(ptr7 - 99);
                    *(ptr7 - 99) = *(ptr7 - 99) - 1;
                    char v1380 = v1379 ? 0: 1;
                    char v1381 = v1379 < 0;
                    char v1382 = __parity__((unsigned char)v1379);
                    char v1383 = 0;
                    char v1384 = 0;
                    if(!v1380) {
                    loc_4022CF:
                        unsigned int* ptr43 = ptr5;
                        int v1385 = *(ptr7 - 97);
                        *(ptr7 - 97) = *(ptr7 - 97) + 1;
                        char v1386 = *(ptr7 - 97) ? 0: 1;
                        char v1387 = *(ptr7 - 97) < 0;
                        char v1388 = __parity__((unsigned char)*(ptr7 - 97));
                        char v1389 = (((v1385 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                        char v1390 = ((*(ptr7 - 97) ^ v1385) & ~(v1385 ^ 0x1)) < 0;
                        ptr8 = &ptr6;
                        int v1391 = sub_401DA6(param0, ptr43);
                        v3 = v1391;
                        *(ptr7 - 101) = v1391;
                    }
                    else {
                        *(ptr7 - 99) = *(ptr7 - 99) & v1379;
                        char v1392 = *(ptr7 - 99) ? 0: 1;
                        char v1393 = *(ptr7 - 99) < 0;
                        char v1394 = __parity__((unsigned char)*(ptr7 - 99));
                        char v1395 = 0;
                        char v1396 = 0;
                    }
                    goto loc_4022E4;
                }
            }
        }
    }
loc_402BDC:
    char v1397 = *(ptr7 - 118) == 1;
    char v1398 = *(ptr7 - 118) < 1;
    char v1399 = __parity__((unsigned char)*(ptr7 - 118) - 1);
    char v1400 = *(unsigned int*)(ptr7 - 118) < 1;
    char v1401 = (((*(ptr7 - 118) - 1) ^ *(ptr7 - 118)) & (*(ptr7 - 118) ^ 0x1)) < 0;
    char v1402 = (((*(ptr7 - 118) - 1) ^ (*(ptr7 - 118) ^ 0x1)) >>> 4) & 0x1;
    if(v1397) {
        ptr6 = *(void**)(ptr7 - 111);
        *(int*)&v19 = &loc_402BF0;
        unsigned int* ptr44 = /*BAD_CALL!*/ sub_40403C((int)ptr6);
        void* ptr45 = ptr6;
    }
    int v1403 = *(ptr7 - 110);
    char v1404 = *(ptr7 - 101) == -1;
    char v1405 = *(ptr7 - 101) < -1;
    char v1406 = __parity__((unsigned char)*(ptr7 - 101) - 0xFF);
    char v1407 = *(unsigned int*)(ptr7 - 101) < 0xffffffff;
    char v1408 = (((*(ptr7 - 101) + 1) ^ *(ptr7 - 101)) & ~*(ptr7 - 101)) < 0;
    char v1409 = (((*(ptr7 - 101) + 1) ^ ~*(ptr7 - 101)) >>> 4) & 0x1;
    if(v1404) {
        v1404 = v1403 ? 0: 1;
        v1405 = v1403 < 0;
        v1406 = __parity__((unsigned char)v1403);
        v1408 = 0;
        v1407 = 0;
        if(v1404) {
            v1404 = (unsigned char)v1403 == *(char*)((char*)ptr7 - 405);
            v1405 = (unsigned char)v1403 > *(char*)((char*)ptr7 - 405);
            v1406 = __parity__(*(char*)((char*)ptr7 - 405) - (unsigned char)v1403);
            v1407 = (unsigned char)v1403 > *(unsigned char*)((unsigned char*)ptr7 - 405);
            v1408 = (((*(char*)((char*)ptr7 - 405) - (unsigned char)v1403) ^ *(char*)((char*)ptr7 - 405)) & ((unsigned char)v1403 ^ *(char*)((char*)ptr7 - 405))) < 0;
            v1409 = (((*(char*)((char*)ptr7 - 405) - (unsigned char)v1403) ^ ((unsigned char)v1403 ^ *(char*)((char*)ptr7 - 405))) >>> 4) & 0x1;
            if(v1404) {
                int v1410 = -1;
                v1404 = 0;
                v1405 = 1;
                v1406 = 1;
                v1408 = 0;
                v1407 = 0;
            }
        }
    }
    int v1411 = *(ptr7 - 7);
    ptr8 = (char*)(ptr7 - 123);
    *(int*)&ptr8[0] = 29;
    /*BAD_CALL!*/ sub_4041A2(v1411);
    char v1412 = *(int*)&ptr8[0];
    int v1413 = *(int*)&ptr8[4];
    int v1414 = *(int*)&ptr8[8];
    int v1415 = *ptr7;
    ptr8 = (char*)(ptr7 + 1);
    char v1416 = *(int*)&ptr8[0];
    ptr8 += 4;
    jump v1416;
loc_40252E:
    v7 = *(unsigned char*)(ptr7 - 102);
loc_402534:
    do {
        ptr1 = (unsigned int)*ptr3 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        v0 = *ptr3 == 93;
        char v1417 = (unsigned char)ptr1 < 93;
        char v1418 = __parity__((unsigned char)ptr1 - 93);
        char v1419 = (unsigned char)ptr1 < 93;
        char v1420 = ((((unsigned char)ptr1 - 93) ^ (unsigned char)ptr1) & ((unsigned char)ptr1 ^ 0x5d)) < 0;
        char v1421 = ((((unsigned char)ptr1 - 93) ^ ((unsigned char)ptr1 ^ 0x5d)) >>> 4) & 0x1;
        if(!v0) {
            ++ptr3;
            char v1422 = (unsigned char)ptr1 == 45;
            char v1423 = (unsigned char)ptr1 < 45;
            char v1424 = __parity__((unsigned char)ptr1 - 45);
            char v1425 = (unsigned char)ptr1 < 45;
            char v1426 = ((((unsigned char)ptr1 - 45) ^ (unsigned char)ptr1) & ((unsigned char)ptr1 ^ 0x2d)) < 0;
            char v1427 = ((((unsigned char)ptr1 - 45) ^ ((unsigned char)ptr1 ^ 0x2d)) >>> 4) & 0x1;
            if(v1422) {
                v1422 = v7 ? 0: 1;
                v1423 = v7 >= 128;
                v1424 = __parity__(v7);
                v1426 = 0;
                v1425 = 0;
                if(!v1422) {
                    v8 = (unsigned int)*ptr3 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                    v1422 = *ptr3 == 93;
                    v1423 = (unsigned char)v8 < 93;
                    v1424 = __parity__((unsigned char)v8 - 93);
                    v1425 = (unsigned char)v8 < 93;
                    v1426 = ((((unsigned char)v8 - 93) ^ (unsigned char)v8) & ((unsigned char)v8 ^ 0x5d)) < 0;
                    char v1428 = ((((unsigned char)v8 - 93) ^ ((unsigned char)v8 ^ 0x5d)) >>> 4) & 0x1;
                    if(!v1422) {
                        ++ptr3;
                        char v1429 = (unsigned char)v8 == v7;
                        char v1430 = (unsigned char)v8 > (char)v7;
                        char v1431 = __parity__(v7 - (unsigned char)v8);
                        char v1432 = (unsigned char)v8 > v7;
                        char v1433 = (((v7 - (unsigned char)v8) ^ v7) & ((unsigned char)v8 ^ v7)) < 0;
                        char v1434 = (((v7 - (unsigned char)v8) ^ ((unsigned char)v8 ^ v7)) >>> 4) & 0x1;
                        if(v1432) {
                            ptr1 = (unsigned int)(unsigned char)v8 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                        }
                        else {
                            ptr1 = (unsigned int)v7 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                            v7 = (unsigned char)v8;
                        }
                        char v1435 = (unsigned char)ptr1 == v7;
                        char v1436 = (unsigned char)ptr1 > (char)v7;
                        char v1437 = __parity__(v7 - (unsigned char)ptr1);
                        char v1438 = (unsigned char)ptr1 > v7;
                        char v1439 = (((v7 - (unsigned char)ptr1) ^ v7) & ((unsigned char)ptr1 ^ v7)) < 0;
                        char v1440 = (((v7 - (unsigned char)ptr1) ^ ((unsigned char)ptr1 ^ v7)) >>> 4) & 0x1;
                        if((v1438 || v1435)) {
                            int v1441 = (unsigned int)v7;
                            char v1442 = (unsigned char)ptr1;
                            ptr1 = (unsigned int)((unsigned char)ptr1 - v7) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                            char v1443 = (unsigned char)ptr1 ? 0: 1;
                            char v1444 = (int*)((int)(int*)((int)ptr1 >>> 7) & 0x1);
                            char v1445 = __parity__((unsigned char)ptr1);
                            char v1446 = (((v7 ^ v1442) ^ (unsigned char)ptr1) >>> 4) & 0x1;
                            char v1447 = (((unsigned char)ptr1 ^ v1442) & (v7 ^ v1442)) < 0;
                            char v1448 = (unsigned char)ptr1;
                            ptr1 = (unsigned int)((unsigned char)ptr1 + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                            char v1449 = (((v1448 ^ 0x1) ^ (unsigned char)ptr1) >>> 4) & 0x1;
                            char v1450 = (((unsigned char)ptr1 ^ v1448) & ~(v1448 ^ 0x1)) < 0;
                            int v1451 = (unsigned int)(unsigned char)ptr1;
                            *(ptr7 - 117) = (unsigned int)(unsigned char)ptr1;
                            do {
                                int v1452 = v1441;
                                int v1453 = v1441;
                                int v1454 = v1452 >>> 3;
                                char v1455 = (v1453 >>> 2) & 0x1;
                                char v1456 = v1450;
                                char v1457 = v1454 ? 0: 1;
                                char v1458 = v1454 < 0;
                                char v1459 = __parity__((unsigned char)v1454);
                                int v1460 = v1454;
                                ptr1 = &ptr2[v1454];
                                char v1461 = ptr1 ? 0: 1;
                                char v1462 = (int)ptr1 < 0;
                                char v1463 = __parity__((unsigned char)ptr1);
                                char v1464 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 ^ v1460) ^ (int)ptr1) >>> 4) & 0x1);
                                char v1465 = (char*)__carry__((int)ptr2, v1460);
                                char v1466 = (int)(int*)((int)(int*)((int)ptr1 ^ v1460) & (int*)~(int)(int*)((int)ptr2 ^ v1460)) < 0;
                                int v1467 = v1441;
                                v8 = v1467 & 0x7;
                                char v1468 = v8 ? 0: 1;
                                char v1469 = v8 < 0;
                                char v1470 = __parity__((unsigned char)v8);
                                char v1471 = 0;
                                char v1472 = 0;
                                v10 = 1;
                                v7 = (unsigned char)(1 << (v8 & 0x1f));
                                char v1473 = (unsigned int)(v8 & 0x1f) < 8 && (v8 & 0x1f) ? 1 << ((v8 & 0x1f) - 1) < 0: 0;
                                char v1474 = 0;
                                char v1475 = v8 & 0x1f ? v7 ? 0: 1: v1468;
                                char v1476 = v8 & 0x1f ? v7 >= 128: v1469;
                                char v1477 = v8 & 0x1f ? __parity__(v7): v1470;
                                ptr1[0] |= v7;
                                char v1478 = ptr1[0] ? 0: 1;
                                char v1479 = ptr1[0] < 0;
                                char v1480 = __parity__(ptr1[0]);
                                char v1481 = 0;
                                char v1482 = 0;
                                ++v1441;
                                int v1483 = *(ptr7 - 117);
                                *(ptr7 - 117) = *(ptr7 - 117) - 1;
                                v29 = *(ptr7 - 117) ? 0: 1;
                                char v1484 = *(ptr7 - 117) < 0;
                                char v1485 = __parity__((unsigned char)*(ptr7 - 117));
                                char v1486 = ((~*(ptr7 - 117) ^ ~v1483) >>> 4) & 0x1;
                                v1450 = ((*(ptr7 - 117) ^ v1483) & v1483) < 0;
                            }
                            while(!v29);
                        }
                        v7 = 0;
                        char v1487 = 1;
                        char v1488 = 0;
                        char v1489 = 1;
                        char v1490 = 0;
                        char v1491 = 0;
                        goto loc_402534;
                    }
                }
            }
            *(char*)(ptr7 - 102) = (unsigned char)ptr1;
            int v1492 = (unsigned int)(unsigned char)ptr1;
            int v1493 = (unsigned int)(unsigned char)ptr1;
            int v1494 = (unsigned int)(unsigned char)ptr1;
            int v1495 = v1493 >>> 3;
            char v1496 = (v1494 >>> 2) & 0x1;
            char v1497 = v1426;
            char v1498 = v1495 ? 0: 1;
            char v1499 = v1495 < 0;
            char v1500 = __parity__((unsigned char)v1495);
            ptr1 = &ptr2[v1495];
            v8 = v1492 & 0x7;
            char v1501 = v8 ? 0: 1;
            char v1502 = v8 < 0;
            char v1503 = __parity__((unsigned char)v8);
            char v1504 = 0;
            char v1505 = 0;
            v10 = 1;
            v7 = (unsigned char)(1 << (v8 & 0x1f));
            char v1506 = (unsigned int)(v8 & 0x1f) < 8 && (v8 & 0x1f) ? 1 << ((v8 & 0x1f) - 1) < 0: 0;
            char v1507 = 0;
            char v1508 = v8 & 0x1f ? v7 ? 0: 1: v1501;
            char v1509 = v8 & 0x1f ? v7 >= 128: v1502;
            char v1510 = v8 & 0x1f ? __parity__(v7): v1503;
            ptr1[0] |= v7;
            char v1511 = ptr1[0] ? 0: 1;
            char v1512 = ptr1[0] < 0;
            char v1513 = __parity__(ptr1[0]);
            char v1514 = 0;
            char v1515 = 0;
            goto loc_40252E;
        }
    }
    while(!v0);
    char v1516 = (unsigned char)ptr1 ? 0: 1;
    char v1517 = (unsigned char)ptr1 < 0;
    char v1518 = __parity__((unsigned char)ptr1);
    char v1519 = 0;
    char v1520 = 0;
    if(v1516) {
        goto loc_402BDC;
    }
    else {
        ptr4 = *(unsigned int*)(ptr7 - 108);
        char v1521 = *(ptr7 - 112) == 123;
        char v1522 = *(ptr7 - 112) < 123;
        char v1523 = __parity__((unsigned char)*(ptr7 - 112) - 123);
        char v1524 = *(unsigned int*)(ptr7 - 112) < 123;
        char v1525 = (((*(ptr7 - 112) - 123) ^ *(ptr7 - 112)) & (*(ptr7 - 112) ^ 0x7b)) < 0;
        char v1526 = (((*(ptr7 - 112) - 123) ^ (*(ptr7 - 112) ^ 0x7b)) >>> 4) & 0x1;
        if(v1521) {
            *(unsigned int*)(ptr7 + 3) = ptr3;
        }
        ptr5 = *(unsigned int**)(ptr7 - 112);
    loc_40255A:
        short* ptr46 = ptr4;
        *(ptr7 - 97) = *(ptr7 - 97) - 1;
        char v1527 = *(ptr7 - 101) == -1;
        char v1528 = *(ptr7 - 101) < -1;
        char v1529 = __parity__((unsigned char)*(ptr7 - 101) - 0xFF);
        char v1530 = *(unsigned int*)(ptr7 - 101) < 0xffffffff;
        char v1531 = (((*(ptr7 - 101) + 1) ^ *(ptr7 - 101)) & ~*(ptr7 - 101)) < 0;
        char v1532 = (((*(ptr7 - 101) + 1) ^ ~*(ptr7 - 101)) >>> 4) & 0x1;
        if(!v1527) {
            ptr6 = *(void**)(ptr7 + 2);
            *(int*)&v19 = *(ptr7 - 101);
            int v1533 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
            int v1534 = *(int*)&v19;
            v8 = (int)ptr6;
            ptr8 = &v18;
        }
        while(1) {
            char v1535 = *(ptr7 - 109) ? 0: 1;
            char v1536 = *(ptr7 - 109) < 0;
            char v1537 = __parity__((unsigned char)*(ptr7 - 109));
            char v1538 = *(unsigned int*)(ptr7 - 109) < 0;
            char v1539 = 0;
            char v1540 = 0;
            if(!v1535) {
                v33 = *(ptr7 - 99);
                *(ptr7 - 99) = *(ptr7 - 99) - 1;
                char v1541 = v33 ? 0: 1;
                char v1542 = v33 < 0;
                char v1543 = __parity__((unsigned char)v33);
                char v1544 = 0;
                char v1545 = 0;
                if(v1541) {
                    goto loc_402780;
                }
            }
            int v1546 = *(ptr7 - 97);
            *(ptr7 - 97) = *(ptr7 - 97) + 1;
            char v1547 = *(ptr7 - 97) ? 0: 1;
            char v1548 = *(ptr7 - 97) < 0;
            char v1549 = __parity__((unsigned char)*(ptr7 - 97));
            char v1550 = (((v1546 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
            char v1551 = ((*(ptr7 - 97) ^ v1546) & ~(v1546 ^ 0x1)) < 0;
            unsigned int* ptr47 = *(unsigned int**)(ptr7 + 2);
            ptr8 = &ptr6;
            v33 = sub_401DA6(v8, ptr47);
            *(ptr7 - 101) = v33;
            char v1552 = v33 == -1;
            char v1553 = v33 < -1;
            char v1554 = __parity__((unsigned char)v33 - 0xFF);
            char v1555 = (unsigned int)v33 < 0xffffffff;
            char v1556 = (((v33 + 1) ^ v33) & ~v33) < 0;
            char v1557 = (((v33 + 1) ^ ~v33) >>> 4) & 0x1;
            if(v1552) {
                break;
            }
            else {
                char v1558 = ptr5 == 99;
                char v1559 = (int)ptr5 < 99;
                char v1560 = __parity__((unsigned char)ptr5 - 99);
                char v1561 = (unsigned int)ptr5 < 99;
                char v1562 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 99) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x63)) < 0;
                char v1563 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 99) ^ (int)(int*)((int)ptr5 ^ 0x63)) >>> 4) & 0x1);
                if(!v1558) {
                    char v1564 = ptr5 == 115;
                    char v1565 = (int)ptr5 < 115;
                    char v1566 = __parity__((unsigned char)ptr5 - 115);
                    char v1567 = (unsigned int)ptr5 < 115;
                    char v1568 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 115) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x73)) < 0;
                    char v1569 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 115) ^ (int)(int*)((int)ptr5 ^ 0x73)) >>> 4) & 0x1);
                    if(v1564) {
                        char v1570 = v33 == 9;
                        char v1571 = v33 < 9;
                        char v1572 = __parity__((unsigned char)v33 - 9);
                        char v1573 = (unsigned int)v33 < 9;
                        char v1574 = (((v33 - 9) ^ v33) & (v33 ^ 0x9)) < 0;
                        char v1575 = (((v33 - 9) ^ (v33 ^ 0x9)) >>> 4) & 0x1;
                        if(v1571 == v1574) {
                            char v1576 = v33 == 13;
                            char v1577 = v33 < 13;
                            char v1578 = __parity__((unsigned char)v33 - 13);
                            char v1579 = (unsigned int)v33 < 13;
                            char v1580 = (((v33 - 13) ^ v33) & (v33 ^ 0xd)) < 0;
                            char v1581 = (((v33 - 13) ^ (v33 ^ 0xd)) >>> 4) & 0x1;
                            if(v1576 || v1577 != v1580) {
                                goto loc_4025CE;
                            }
                        }
                        char v1582 = v33 == 32;
                        char v1583 = v33 < 32;
                        char v1584 = __parity__((unsigned char)v33 - 32);
                        char v1585 = (unsigned int)v33 < 32;
                        char v1586 = (((v33 - 32) ^ v33) & (v33 ^ 0x20)) < 0;
                        char v1587 = (((v33 - 32) ^ (v33 ^ 0x20)) >>> 4) & 0x1;
                        if(!v1582) {
                            goto loc_402607;
                        }
                    }
                loc_4025CE:
                    char v1588 = ptr5 == 123;
                    char v1589 = (int)ptr5 < 123;
                    char v1590 = __parity__((unsigned char)ptr5 - 123);
                    char v1591 = (unsigned int)ptr5 < 123;
                    char v1592 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 123) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ 0x7b)) < 0;
                    char v1593 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr5 - 123) ^ (int)(int*)((int)ptr5 ^ 0x7b)) >>> 4) & 0x1);
                    if(!v1588) {
                        break;
                    }
                    else {
                        int v1594 = v33;
                        int v1595 = v1594 & 0x7;
                        int v1596 = 0;
                        char v1597 = 1;
                        char v1598 = 0;
                        char v1599 = 1;
                        char v1600 = 0;
                        char v1601 = 0;
                        int v1602 = 0;
                        int v1603 = 1;
                        char v1604 = 0;
                        char v1605 = 0;
                        char v1606 = 0;
                        char v1607 = 0;
                        char v1608 = 0;
                        int v1609 = 1;
                        int v1610 = 1 << (v1595 & 0x1f);
                        char v1611 = (unsigned int)(v1595 & 0x1f) < 32 && (v1595 & 0x1f) ? 1 << ((v1595 & 0x1f) - 1) < 0: 0;
                        char v1612 = 0;
                        char v1613 = v1595 & 0x1f ? v1610 ? 0: 1: 0;
                        char v1614 = v1595 & 0x1f ? v1610 < 0: 0;
                        char v1615 = v1595 & 0x1f ? __parity__((unsigned char)v1610): 0;
                        int v1616 = v33;
                        int v1617 = v33;
                        int v1618 = v1616 >> 3;
                        char v1619 = (v1617 >>> 2) & 0x1;
                        char v1620 = 0;
                        char v1621 = v1618 ? 0: 1;
                        char v1622 = v1618 < 0;
                        char v1623 = __parity__((unsigned char)v1618);
                        int v1624 = *(ptr7 - 111);
                        int v1625 = (int)*(char*)(v1618 + v1624);
                        ptr5 = (unsigned int*)*(char*)((char*)ptr7 - 0x1a1);
                        v8 = v1625 ^ (int)ptr5;
                        char v1626 = v8 & v1610 ? 0: 1;
                        char v1627 = (v8 & v1610) < 0;
                        char v1628 = __parity__((unsigned char)(v8 & v1610));
                        char v1629 = 0;
                        char v1630 = 0;
                        if(v1626) {
                            break;
                        }
                        else {
                            ptr5 = *(unsigned int**)(ptr7 - 112);
                        }
                    }
                }
            loc_402607:
                char v1631 = *(char*)((char*)ptr7 - 398) ? 0: 1;
                char v1632 = *(char*)((char*)ptr7 - 398) < 0;
                char v1633 = __parity__(*(char*)((char*)ptr7 - 398));
                char v1634 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
                char v1635 = 0;
                char v1636 = 0;
                if(v1631) {
                    char v1637 = *(char*)((char*)ptr7 - 406) ? 0: 1;
                    char v1638 = *(char*)((char*)ptr7 - 406) < 0;
                    char v1639 = __parity__(*(char*)((char*)ptr7 - 406));
                    char v1640 = *(unsigned char*)((unsigned char*)ptr7 - 406) < 0;
                    char v1641 = 0;
                    char v1642 = 0;
                    if(!v1637) {
                        *(char*)(ptr7 - 113) = (unsigned char)v33;
                        int v1643 = (unsigned int)(unsigned char)v33;
                        int v1644 = gvar_40B490;
                        char v1645 = *(char*)(v1643 * 2 + v1644 + 1) & 0x80 ? 0: 1;
                        char v1646 = (*(char*)(v1643 * 2 + v1644 + 1) & 0x80) < 0;
                        char v1647 = __parity__(*(char*)(v1643 * 2 + v1644 + 1) & 0x80);
                        char v1648 = 0;
                        char v1649 = 0;
                        if(!v1645) {
                            int v1650 = *(ptr7 - 97);
                            *(ptr7 - 97) = *(ptr7 - 97) + 1;
                            char v1651 = *(ptr7 - 97) ? 0: 1;
                            char v1652 = *(ptr7 - 97) < 0;
                            char v1653 = __parity__((unsigned char)*(ptr7 - 97));
                            char v1654 = (((v1650 ^ 0x1) ^ *(ptr7 - 97)) >>> 4) & 0x1;
                            char v1655 = ((*(ptr7 - 97) ^ v1650) & ~(v1650 ^ 0x1)) < 0;
                            unsigned int* ptr48 = *(unsigned int**)(ptr7 + 2);
                            int v1656 = sub_401DA6(v1644, ptr48);
                            *(char*)((char*)ptr7 - 451) = (unsigned char)v1656;
                        }
                        ptr6 = gvar_40B4A0;
                        int* ptr49 = ptr7 - 113;
                        *(int**)&v19 = ptr7 - 113;
                        LPWSTR lpWideCharStr = (LPWSTR)(ptr7 - 115);
                        int v1657 = sub_404509(lpWideCharStr, *(LPCCH*)&v19, (unsigned int)ptr6);
                        int* ptr50 = &v20;
                        ptr8 = &v18;
                        char v1658 = &v17 == 8;
                        char v1659 = (int)&v18 < 0;
                        char v1660 = __parity__((unsigned char)&v17 - 8);
                        char v1661 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v20 ^ 0xc) ^ (int)&v18) >>> 4) & 0x1);
                        char v1662 = (unsigned int)&v20 >= 0xfffffff4;
                        char v1663 = (int)(int*)((int)(int*)((int)&v18 ^ (int)&v20) & (int*)~(int)(int*)((int)&v20 ^ 0xc)) < 0;
                        v1657 = (unsigned int)*(short*)(ptr7 - 115) | ((unsigned int)(unsigned short)(v1657 >>> 16) << 16);
                        *ptr4 = *(short*)(ptr7 - 115);
                        int* ptr51 = (int*)((char*)ptr4 + 1);
                        int* ptr52 = (int*)((char*)ptr4 + 1);
                        ptr4 = (short*)((char*)ptr51 + 1);
                        char v1664 = ptr4 ? 0: 1;
                        char v1665 = (int)ptr4 < 0;
                        char v1666 = __parity__((unsigned char)ptr4);
                        char v1667 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr52 ^ 0x1) ^ (int)ptr4) >>> 4) & 0x1);
                        char v1668 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr52) & (int*)~(int)(int*)((int)ptr52 ^ 0x1)) < 0;
                    }
                    else {
                        *(char*)ptr4 = (unsigned char)v33;
                        short* ptr53 = ptr4;
                        ptr4 = (short*)((char*)ptr4 + 1);
                        char v1669 = ptr4 ? 0: 1;
                        char v1670 = (int)ptr4 < 0;
                        char v1671 = __parity__((unsigned char)ptr4);
                        char v1672 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr53 ^ 0x1) ^ (int)ptr4) >>> 4) & 0x1);
                        char v1673 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr53) & (int*)~(int)(int*)((int)ptr53 ^ 0x1)) < 0;
                    }
                    *(unsigned int*)(ptr7 - 108) = ptr4;
                }
                else {
                    short* ptr54 = ptr46;
                    ptr46 = (short*)((char*)ptr46 + 1);
                    char v1674 = ptr46 ? 0: 1;
                    char v1675 = (int)ptr46 < 0;
                    char v1676 = __parity__((unsigned char)ptr46);
                    char v1677 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr54 ^ 0x1) ^ (int)ptr46) >>> 4) & 0x1);
                    char v1678 = (int)(int*)((int)(int*)((int)ptr46 ^ (int)ptr54) & (int*)~(int)(int*)((int)ptr54 ^ 0x1)) < 0;
                }
            }
        }
        *(ptr7 - 97) = *(ptr7 - 97) - 1;
        char v1679 = v33 == -1;
        char v1680 = v33 < -1;
        char v1681 = __parity__((unsigned char)v33 - 0xFF);
        char v1682 = (unsigned int)v33 < 0xffffffff;
        char v1683 = (((v33 + 1) ^ v33) & ~v33) < 0;
        char v1684 = (((v33 + 1) ^ ~v33) >>> 4) & 0x1;
        if(!v1679) {
            ptr6 = *(void**)(ptr7 + 2);
            *(int*)&v19 = v33;
            v33 = sub_404474(*(unsigned int*)&v19, (unsigned int*)ptr6);
            int v1685 = *(int*)&v19;
            void* ptr55 = ptr6;
            ptr8 = &v18;
        }
    loc_402780:
        char v1686 = ptr4 == ptr46;
        char v1687 = (int)ptr4 > (int)ptr46;
        char v1688 = __parity__((unsigned char)ptr46 - (unsigned char)ptr4);
        char v1689 = ptr4 > ptr46;
        char v1690 = (int)(int*)((int)(int*)((int)(int*)((int)ptr46 - (int)ptr4) ^ (int)ptr46) & (int)(int*)((int)ptr4 ^ (int)ptr46)) < 0;
        char v1691 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr46 - (int)ptr4) ^ (int)(int*)((int)ptr4 ^ (int)ptr46)) >>> 4) & 0x1);
        if(v1686) {
            goto loc_402BDC;
        }
        else {
            char v1692 = *(char*)((char*)ptr7 - 398) ? 0: 1;
            char v1693 = *(char*)((char*)ptr7 - 398) < 0;
            char v1694 = __parity__(*(char*)((char*)ptr7 - 398));
            char v1695 = *(unsigned char*)((unsigned char*)ptr7 - 398) < 0;
            char v1696 = 0;
            char v1697 = 0;
            if(v1692) {
                *(ptr7 - 110) = *(ptr7 - 110) + 1;
                char v1698 = *(ptr7 - 112) == 99;
                char v1699 = *(ptr7 - 112) < 99;
                char v1700 = __parity__((unsigned char)*(ptr7 - 112) - 99);
                char v1701 = *(unsigned int*)(ptr7 - 112) < 99;
                char v1702 = (((*(ptr7 - 112) - 99) ^ *(ptr7 - 112)) & (*(ptr7 - 112) ^ 0x63)) < 0;
                char v1703 = (((*(ptr7 - 112) - 99) ^ (*(ptr7 - 112) ^ 0x63)) >>> 4) & 0x1;
                if(!v1698) {
                    v33 = *(ptr7 - 108);
                    char v1704 = *(char*)((char*)ptr7 - 406) ? 0: 1;
                    char v1705 = *(char*)((char*)ptr7 - 406) < 0;
                    char v1706 = __parity__(*(char*)((char*)ptr7 - 406));
                    char v1707 = *(unsigned char*)((unsigned char*)ptr7 - 406) < 0;
                    char v1708 = 0;
                    char v1709 = 0;
                    if(!v1704) {
                        *(short*)v33 = 0;
                        char v1710 = *(short*)v33 ? 0: 1;
                        char v1711 = *(short*)v33 < 0;
                        char v1712 = __parity__((unsigned char)*(short*)v33);
                        char v1713 = 0;
                        char v1714 = 0;
                    }
                    else {
                        *(char*)v33 = 0;
                    }
                }
            }
        loc_402B38:
            *(char*)((char*)ptr7 - 405) = *(char*)((char*)ptr7 - 405) + 1;
            int v1715 = *(ptr7 + 3);
            *(ptr7 + 3) = *(ptr7 + 3) + 1;
            char v1716 = *(ptr7 + 3) ? 0: 1;
            char v1717 = *(ptr7 + 3) < 0;
            char v1718 = __parity__((unsigned char)*(ptr7 + 3));
            char v1719 = (((v1715 ^ 0x1) ^ *(ptr7 + 3)) >>> 4) & 0x1;
            char v1720 = ((*(ptr7 + 3) ^ v1715) & ~(v1715 ^ 0x1)) < 0;
            ptr9 = *(unsigned int*)(ptr7 + 3);
            goto loc_402BBD;
        }
    }
}

unsigned int* sub_402CE0(unsigned int param0, unsigned int* param1, char* param2) {
    unsigned int* result;
    unsigned int v0;
    unsigned int v1 = v0;
    unsigned int v2 = v0;
    if(param0) {
        sub_404B5D(&v2, param2);
        result = param1;
        *result = v2;
        *(result + 1) = v1;
    }
    else {
        sub_404B9A(&param0, param2);
        result = param1;
        *result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_402D1E() {
    int* result;
    int v0;
    if(v0) {
        size_t v1 = strlen((char*)result);
        result = unk_lib_sub((int*)((int)result + v0), result, (int*)(v1 + 1));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned char* sub_402D3B(int* param0, unsigned char* param1, int param2, unsigned int param3) {
    int v0;
    int v1;
    int v2;
    char v3 = gvar_40BA44 ? 0: 1;
    int v4 = v2;
    if(!v3) {
        v1 = param2;
        v0 = gvar_40BA40;
        sub_402D1E();
    }
    else {
        void* ptr0 = *(void**)(param0 + 1);
        int v5 = *param0;
        int v6 = sub_405149();
        v1 = param2;
        v0 = v6;
        int* ptr1 = (int*)(v1 + 1);
        sub_405018((int*)((int)(*(int*)v0 == 45 ? (int*)(param1 + 1): param1) + (v1 <= 0 ? 0: 1)), (int*)(v1 + 1), v0);
    }
    unsigned char* ptr2 = param1;
    if(*(int*)v0 == 45) {
        *ptr2 = 45;
        ++ptr2;
    }
    if(v1 > 0) {
        *ptr2 = *(ptr2 + 1);
        ++ptr2;
        *ptr2 = gvar_40B4A4;
    }
    char* ptr3 = strcpy((char*)((int)(gvar_40BA44 == 0 ? (int*)(ptr2 + 1): ptr2) + v1), "e+000");
    if(param3) {
        ptr3[0] = 'E';
    }
    if(**(unsigned int*)(v0 + 12) != 48) {
        unsigned int v7 = (unsigned int)(*(int*)(v0 + 4) - 1);
        if(v7 >= 0x80000000) {
            v7 = (unsigned int)(0 - v7);
            ptr3[1] = '-';
        }
        if((int)v7 >= 100) {
            ptr3[2] += (unsigned char)v7 / 100;
            v7 = (int)v7 % 100;
        }
        if((int)v7 >= 10) {
            ptr3[3] += (unsigned char)v7 / 10;
            v7 = (int)v7 % 10;
        }
        ptr3[4] += (unsigned char)v7;
    }
    return param1;
}

char* sub_402E2C(int* param0, int* param1, int* param2) {
    unsigned char* ptr0;
    int v0;
    char v1;
    int v2;
    char v3 = gvar_40BA44 ? 0: 1;
    int v4 = v2;
    int* ptr1 = param1;
    if(!v3) {
        unsigned int v5 = gvar_40BA48;
        v0 = gvar_40BA40;
        if(v5 == param2) {
            char* ptr2 = (char*)((*(int*)v0 == 45 ? v5 + 1: v5) + (int)ptr1);
            *ptr2 = 48;
            *(ptr2 + 1) = 0;
        }
    }
    else {
        void* ptr3 = *(void**)(param0 + 1);
        *(int*)&v1 = *param0;
        v0 = sub_405149();
        int* ptr4 = (int*)(*(int*)(v0 + 4) + (int)param2);
        int* ptr5 = (int*)(*(int*)(v0 + 4) + (int)param2);
        sub_405018(*(int*)v0 == 45 ? (int*)((char*)ptr1 + 1): ptr1, ptr4, v0);
    }
    int* ptr6 = ptr1;
    if(*(int*)v0 == 45) {
        *(char*)&ptr1[0] = 45;
        ptr6 = (int*)((char*)ptr1 + 1);
    }
    int v6 = *(int*)(v0 + 4);
    if(v6 <= 0) {
        sub_402D1E();
        *(char*)&ptr6[0] = 48;
        ptr0 = (unsigned char*)((unsigned char*)ptr6 + 1);
    }
    else {
        ptr0 = (unsigned char*)(v6 + (int)ptr6);
    }
    if((int)param2 > 0) {
        int* ptr7 = sub_402D1E();
        *ptr0 = gvar_40B4A4;
        int v7 = *(int*)(v0 + 4);
        if(v7 < 0) {
            if(gvar_40BA44 || (int)(int*)(0 - v7) <= (int)param2) {
                param2 = (int*)(0 - v7);
            }
            sub_402D1E();
            *(int*)&v1 = 48;
            sub_4045E0((char*)(ptr0 + 1), '0', param2);
        }
    }
    return (char*)ptr1;
}

char* sub_402F09(int* param0, char* param1, int* param2, unsigned int param3) {
    char* result;
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int v2 = ptr0[1];
    int v3 = ptr0[0];
    int v4 = sub_405149();
    int* ptr1 = param2;
    gvar_40BA48 = (unsigned int)(*(int*)(v4 + 4) - 1);
    int v5 = *(int*)v4 != 45 ? 0: 1;
    gvar_40BA40 = v4;
    int* ptr2 = (int*)&param1[v5];
    sub_405018(ptr2, ptr1, v4);
    unsigned int v6 = (unsigned int)(*(int*)(gvar_40BA40 + 4) - 1);
    char v7 = (int)gvar_40BA48 < (int)v6;
    char v8 = (int)(((gvar_40BA48 - v6) ^ gvar_40BA48) & (gvar_40BA48 ^ v6)) < 0;
    gvar_40BA48 = v6;
    unsigned char v9 = v7 == v8 ? 0: 1;
    gvar_40BA4C = v7 == v8 ? 0: 1;
    if((int)v6 >= -4 && (int)v6 < (int)ptr1) {
        if(v9) {
            do {
                v6 = (unsigned int)*(char*)&ptr2[0] | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
                ptr2 = (int*)((char*)ptr2 + 1);
            }
            while((unsigned char)v6);
            *((char*)&ptr2[0] - 2) = (unsigned char)v6;
        }
        gvar_40BA44 = 1;
        result = sub_402E2C(ptr0, param1, ptr1);
    }
    else {
        gvar_40BA44 = 1;
        result = (char*)sub_402D3B(ptr0, (unsigned char*)param1, (int)ptr1, param3);
    }
    gvar_40BA44 = 0;
    return result;
}

char* sub_402FB3(int* param0, char* param1, unsigned int param2, int* param3, unsigned int param4) {
    char* result;
    if((param2 == 101 || param2 == 69)) {
        result = (char*)sub_402D3B(param0, (unsigned char*)param1, (int)param3, param4);
    }
    else if(param2 == 102) {
        result = sub_402E2C(param0, param1, param3);
    }
    else {
        result = sub_402F09(param0, param1, param3, param4);
    }
    return result;
}

int sub_403016() {
    short v0;
    fcomp(0.0, 0x3ff0000000000000L);
    fnstsw(v0);
    return (unsigned char)(v0 >>> 8) & 0x41 ? 0: 1;
}

int sub_40307F(UINT param0) {
    void* ptr0;
    HMODULE hModule = GetModuleHandleA("mscoree.dll");
    char v0 = hModule ? 0: 1;
    char v1 = (int)hModule < 0;
    char v2 = __parity__((unsigned char)hModule);
    char v3 = 0;
    char v4 = 0;
    if(!v0) {
        FARPROC v5 = GetProcAddress(hModule, "CorExitProcess");
        v0 = v5 ? 0: 1;
        v1 = (int)v5 < 0;
        v2 = __parity__((unsigned char)v5);
        v3 = 0;
        v4 = 0;
        if(!v0) {
            UINT v6 = param0;
            int v7 = v5(v6);
        }
    }
    UINT v8 = param0;
    UINT v9 = param0;
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ sub_4030AE();
}

int sub_4030AF() {
    unsigned int v0 = gvar_40B0AC;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_4030BF: &sub_4030B8;
}

int sub_4030B8(int param0) {
    int v0;
    int v1 = param0;
    v0(v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4030BF() {
    int result = 0;
    unsigned int* ptr0 = (unsigned int*)&gvar_40B00C;
    while(!result) {
        void* ptr1 = *ptr0;
        if(ptr1) {
            result = ptr1();
        }
        ++ptr0;
        if((unsigned int)ptr0 >= 4239388) {
            if(!result) {
                sub_4053B0(&sub_403B21);
                int* ptr2 = (int*)&gvar_40B000;
                do {
                    int v0 = *ptr2;
                    if(v0) {
                        v0();
                    }
                    ++ptr2;
                }
                while((unsigned int)ptr2 < 0x40b008);
                result = 0;
            }
            return result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403119(UINT uExitCode, unsigned int param1, unsigned char param2) {
    int result;
    UINT v0;
    if(gvar_40BA9C == 1) {
        HANDLE hProcess = GetCurrentProcess();
        BOOL v1 = TerminateProcess(hProcess, uExitCode);
    }
    gvar_40BA98 = 1;
    gvar_40BA94 = param2;
    if(!param1) {
        unsigned int v2 = gvar_40BFE8;
        if(v2) {
            int* ptr0 = (int*)(gvar_40BFE4 - 4);
            char v3 = (unsigned int)ptr0 < v2;
            for(gvar_40BFE4 = ptr0; !v3; gvar_40BFE4 = ptr0) {
                int v4 = *ptr0;
                if(v4) {
                    v0 = &loc_40316B;
                    v4();
                }
                ptr0 = (int*)(gvar_40BFE4 - 4);
                v3 = gvar_40BFE8 > (unsigned int)ptr0;
            }
        }
        int* ptr1 = (int*)&gvar_40B020;
        do {
            int v5 = *ptr1;
            if(v5) {
                v0 = &loc_403198;
                v5();
            }
            ++ptr1;
        }
        while((unsigned int)ptr1 < 4239400);
    }
    int* ptr2 = (int*)&gvar_40B02C;
    do {
        result = *ptr2;
        if(result) {
            v0 = &loc_4031B7;
            result = result();
        }
        ++ptr2;
    }
    while((unsigned int)ptr2 < 0x40b030);
    if(!*(int*)&param2) {
        gvar_40BA9C = 1;
        result = /*NO_RETURN*/ sub_40307F();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4031DA(int param0) {
    return sub_403119(param0, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4031FC() {
    return sub_403119(0, 0, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40320B() {
    return sub_403119(0, 1, 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40320D(int param0) {
    int v0;
    int v1;
    char v2;
    int v3 = sub_403119(0, 1, v0);
    int* ptr0 = &v1;
    char v4 = &param0 ? 0: 1;
    char v5 = (int)&param0 < 0;
    char v6 = __parity__((unsigned char)&v0 + 4);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0xc) ^ (int)&param0) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 >= 0xfffffff4;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&param0) & (int*)~(int)(int*)((int)&v1 ^ 0xc)) < 0;
    int v10 = param0;
    int* ptr1 = &v2;
    jump v10;
}

int sub_40321A(unsigned int param0) {
    char v0;
    LPOVERLAPPED lpOverlapped;
    char v1;
    int result;
    int v2;
    int v3;
    unsigned int v4 = gvar_40B498;
    int v5 = v3;
    unsigned int v6 = v4;
    unsigned int v7 = 0;
    while(*(unsigned int*)(v7 * 8 + (int)&gvar_40B360) != param0) {
        ++v7;
        if(v7 >= 19) {
            break;
        }
    }
    if(*(unsigned int*)(v7 * 8 + (int)&gvar_40B360) == param0) {
        unsigned int v8 = gvar_40BA30;
        if((v8 == 1 || (v8 == 0 && gvar_40B0BC == 1))) {
            lpOverlapped = NULL;
            void* ptr0 = &param0;
            void* ptr1 = (void*)strlen(*(char**)(v7 * 8 + (int)&ptr_aR6002____floati));
            void* lpBuffer = *(char**)(v7 * 8 + (int)&ptr_aR6002____floati);
            HANDLE hFile = GetStdHandle(0xfffffff4);
            WriteFile(hFile, lpBuffer, (DWORD)ptr1, (LPDWORD)ptr0, lpOverlapped);
        }
        else if(param0 != 252) {
            char v9 = 0;
            DWORD v10 = GetModuleFileNameA(NULL, &v0, 260);
            if(!v10) {
                strcpy((char*)&v0, "<program name unknown>");
            }
            size_t v11 = strlen((char*)&v0);
            if((unsigned int)(v11 + 1) > 60) {
                size_t v12 = strlen((char*)&v0);
                strncpy(&v1, (char*)&gvar_4095C8, 3);
            }
            size_t v13 = strlen((char*)&v0);
            size_t v14 = strlen(*(char**)(v7 * 8 + (int)&ptr_aR6002____floati));
            sub_403D30((int)lpOverlapped);
            strcpy(&v2, "Runtime Error!\n\nProgram: ");
            strcat(&v2, (char*)&v0);
            strcat(&v2, (char*)&gvar_4095A8);
            strcat(&v2, *(char**)(v7 * 8 + (int)&ptr_aR6002____floati));
            sub_4053EA((int)&v2, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }
    sub_4041A2((int)v6);
    return result;
}

int sub_403391() {
    unsigned int v0 = gvar_40BA30;
    char v1 = v0 == 1;
    char v2 = (int)v0 < 1;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1;
    char v5 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    char v6 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
    jump v1 ? &sub_4033A8: &sub_40339B;
}

int sub_40339B() {
    int v0;
    char v1 = v0 ? 0: 1;
    char v2 = v0 < 0;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    char v6 = gvar_40B0BC == 1;
    char v7 = (int)gvar_40B0BC < 1;
    char v8 = __parity__((unsigned char)gvar_40B0BC - 1);
    char v9 = gvar_40B0BC < 1;
    char v10 = (((gvar_40B0BC - 1) ^ gvar_40B0BC) & (gvar_40B0BC ^ 0x1)) < 0;
    char v11 = (((gvar_40B0BC - 1) ^ (gvar_40B0BC ^ 0x1)) >>> 4) & 0x1;
    jump v6 ? &sub_4033A8: &sub_4033C9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4033A8() {
    int v0;
    char v1;
    int v2 = sub_40321A(252);
    unsigned int v3 = gvar_40BAA0;
    char v4 = v3 ? 0: 1;
    char v5 = v3 >= 0x80000000;
    char v6 = __parity__((unsigned char)v3);
    char v7 = 0;
    char v8 = 0;
    int v9 = v0;
    int* ptr0 = &v1;
    jump v4 ? &sub_4033BE: &sub_4033BC;
}

LONG sub_4033CA(unsigned int param0, _EXCEPTION_POINTERS* ExceptionInfo) {
    LONG result;
    int v0;
    unsigned int v1 = gvar_40B478;
    int v2 = v0;
    unsigned int* ptr0 = (unsigned int*)&gvar_40B3F8;
    while(*ptr0 != param0) {
        ptr0 += 3;
        if((unsigned int)(v1 * 12 + &gvar_40B3F8) <= (unsigned int)ptr0) {
            break;
        }
    }
    if((unsigned int)(v1 * 12 + &gvar_40B3F8) > (unsigned int)ptr0 && *ptr0 == param0 && ptr0) {
        unsigned int v3 = *(ptr0 + 2);
        if(!v3) {
            return UnhandledExceptionFilter(ExceptionInfo);
        }
        else if(v3 == 5) {
            *(int*)(ptr0 + 2) = 0;
            result = 1;
        }
        else if(v3 != 1) {
            param0 = gvar_40BAA4;
            gvar_40BAA4 = ExceptionInfo;
            unsigned int v4 = *(ptr0 + 1);
            if(v4 == 8) {
                unsigned int v5 = gvar_40B470;
                unsigned int v6 = gvar_40B474 + v5;
                if((int)v5 < (int)v6) {
                    int* ptr1 = (int*)(v5 * 12 + &gvar_40B400);
                    unsigned int counter = v6 - v5;
                    do {
                        *ptr1 = 0;
                        ptr1 += 3;
                        --counter;
                    }
                    while(counter);
                loc_40347C:
                    unsigned int v7 = gvar_40B47C;
                    switch(*ptr0) {
                        case -1073741682: {
                            gvar_40B47C = 131;
                            v3(8, (int)gvar_40B47C);
                            gvar_40B47C = v7;
                            gvar_40BAA4 = param0;
                            return -1;
                        }
                        case -1073741683: {
                            gvar_40B47C = 130;
                            break;
                        }
                        case -1073741677: {
                            gvar_40B47C = 133;
                            break;
                        }
                        case -1073741678: {
                            gvar_40B47C = 138;
                            break;
                        }
                        case -1073741679: {
                            gvar_40B47C = 132;
                            break;
                        }
                        case -1073741680: {
                            gvar_40B47C = 129;
                            break;
                        }
                        case -1073741681: {
                            gvar_40B47C = 134;
                        }
                    }
                    v3(8, (int)gvar_40B47C);
                    gvar_40B47C = v7;
                    gvar_40BAA4 = param0;
                    return -1;
                }
                goto loc_40347C;
            }
            else {
                *(int*)(ptr0 + 2) = 0;
                v3((int)v4);
                gvar_40BAA4 = param0;
                return -1;
            }
        }
        else {
            return -1;
        }
    }
    else {
        result = UnhandledExceptionFilter(ExceptionInfo);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40353B() {
    int result;
    if(gvar_40BFEC == 0) {
        sub_4059DE();
    }
    char* _Str = gvar_40BA28;
    int v0 = 0;
    if(_Str == 0) {
        result = -1;
    }
    else {
        for(size_t i = (unsigned int)_Str[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8); _Str[0] != 0; i = (unsigned int)_Str[0] | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
            if((unsigned char)i != 61) {
                ++v0;
            }
            i = strlen(_Str);
            _Str = (char*)(i + (int)_Str) + 1;
        }
        size_t v1 = (size_t)sub_403DDF(v0 * 4 + 4);
        gvar_40BA7C = v1;
        if(v1 != 0) {
            char* _Str1 = gvar_40BA28;
            while(_Str1[0] != 0) {
                size_t v2 = strlen(_Str1);
                if(_Str1[0] != 61) {
                    int v3 = sub_403DDF((int)(v2 + 1));
                    *(int*)v1 = v3;
                    if(v3 != 0) {
                        strcpy((char*)v3, _Str1);
                        v1 += 4;
                        goto loc_4035C1;
                    }
                    else {
                        sub_40403C(gvar_40BA7C);
                        gvar_40BA7C = 0;
                        return -1;
                    }
                }
                else {
                loc_4035C1:
                    _Str1 = (char*)(v2 + (int)_Str1) + 1;
                }
            }
            sub_40403C(gvar_40BA28);
            gvar_40BA28 = 0;
            *(int*)v1 = 0;
            gvar_40BFE0 = 1;
            result = 0;
        }
        else {
            result = -1;
        }
    }
    return result;
}

unsigned int* sub_403602(unsigned int* param0, int* param1) {
    int v0;
    unsigned int* i;
    int* ptr0;
    unsigned char* ptr1;
    unsigned int* ptr2 = i;
    int v1 = v0;
    int* ptr3 = param1;
    unsigned int* j = NULL;
    char v2 = param0 == 0;
    *ptr0 = 0;
    unsigned int* ptr4 = i;
    *ptr3 = 1;
    if(!v2) {
        i = param0;
        ++param0;
        *i = ptr4;
    }
    do {
        if(*ptr1 == 34) {
            i = j ? NULL: (unsigned int*)0x1;
            ++ptr1;
            j = i;
            i = (unsigned int)34 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        }
        else {
            *ptr0 = *ptr0 + 1;
            if(ptr4) {
                i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                *(char*)ptr4 = *ptr1;
                ptr4 = (unsigned int*)((char*)ptr4 + 1);
            }
            i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
            int v3 = (unsigned int)*ptr1;
            ++ptr1;
            if((*(char*)((char*)((int)&gvar_40BCA0 + v3) + 1) & 0x4)) {
                *ptr0 = *ptr0 + 1;
                if(ptr4) {
                    v3 = (unsigned int)*ptr1 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                    *(char*)ptr4 = *ptr1;
                    ptr4 = (unsigned int*)((char*)ptr4 + 1);
                }
                ++ptr1;
            }
            char v4 = (unsigned char)i ? 0: 1;
            ptr3 = param1;
            if(v4) {
                --ptr1;
                goto loc_40367B;
            }
        }
    }
    while(j || ((unsigned char)i != 32 && (unsigned char)i != 9));
    if(ptr4) {
        *(char*)((char*)ptr4 - 1) = 0;
    }
loc_40367B:
    ptr2 = NULL;
    while(*ptr1) {
        for(i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8); *ptr1 == 32 || *ptr1 == 9; i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8)) {
            ++ptr1;
        }
        if(!*ptr1) {
            break;
        }
        else {
            if(param0) {
                i = param0;
                ++param0;
                *i = ptr4;
            }
            *ptr3 = *ptr3 + 1;
            while(1) {
                ptr3 = (int*)0x1;
                for(j = NULL; *ptr1 == 92; j = (unsigned int*)((char*)j + 1)) {
                    ++ptr1;
                }
                if(*ptr1 == 34) {
                    if(!((unsigned char)j & 0x1)) {
                        if(ptr2) {
                            i = (unsigned int*)(ptr1 + 1);
                            if(*(char*)i != 34) {
                                goto loc_4036DE;
                            }
                            else {
                                ptr1 = (unsigned char*)i;
                            }
                        }
                        else {
                        loc_4036DE:
                            ptr3 = NULL;
                        }
                        i = ptr2 != 0 ? NULL: (unsigned int*)0x1;
                        ptr2 = ptr2 != 0 ? NULL: (unsigned int*)0x1;
                    }
                    j = (unsigned int*)((int)j >>> 1);
                }
                if(j) {
                    do {
                        if(ptr4) {
                            *(char*)ptr4 = 92;
                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                        }
                        *ptr0 = *ptr0 + 1;
                        j = (unsigned int*)((char*)j - 1);
                    }
                    while(j);
                }
                i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                if(!*ptr1 || (!ptr2 && (*ptr1 == 32 || *ptr1 == 9))) {
                    break;
                }
                else {
                    if(ptr3) {
                        if(ptr4) {
                            if((*(char*)((char*)(unsigned char)i + 4242593) & 0x4)) {
                                *(char*)ptr4 = (unsigned char)i;
                                ptr4 = (unsigned int*)((char*)ptr4 + 1);
                                ++ptr1;
                                *ptr0 = *ptr0 + 1;
                            }
                            i = (unsigned int)*ptr1 | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
                            *(char*)ptr4 = *ptr1;
                            ptr4 = (unsigned int*)((char*)ptr4 + 1);
                        }
                        else {
                            i = (unsigned int*)(unsigned char)i;
                            if((*(char*)((char*)i + 4242593) & 0x4)) {
                                ++ptr1;
                                *ptr0 = *ptr0 + 1;
                            }
                        }
                        *ptr0 = *ptr0 + 1;
                    }
                    ++ptr1;
                }
            }
            if(ptr4) {
                *(char*)ptr4 = 0;
                ptr4 = (unsigned int*)((char*)ptr4 + 1);
            }
            *ptr0 = *ptr0 + 1;
            ptr3 = param1;
        }
    }
    unsigned int* result = param0;
    if(result) {
        *result = 0;
    }
    *ptr3 = *ptr3 + 1;
    return result;
}

int sub_40376E(int param0) {
    int result;
    int v0;
    int v1 = param0;
    int v2 = param0;
    int v3 = v0;
    if(gvar_40BFEC == 0) {
        sub_4059DE();
    }
    gvar_40BBAC = 0;
    GetModuleFileNameA(NULL, (LPSTR)0x40BAA8, 260);
    gvar_40BA8C = 0x40baa8;
    sub_403602(NULL, &v1);
    unsigned int* ptr0 = (unsigned int*)sub_403DDF(v1 * 4 + param0);
    if(!ptr0) {
        result = -1;
    }
    else {
        sub_403602(ptr0, &v1);
        gvar_40BA70 = (unsigned int)(v1 - 1);
        gvar_40BA74 = ptr0;
        result = 0;
    }
    return result;
}

int sub_403810(int param0) {
    int result;
    int v0;
    int cchWideChar = param0;
    int v1 = param0;
    LPWCH v2 = gvar_40BBB0;
    int v3 = v0;
    int v4 = 0;
    LPCWCH lpWideCharStr = NULL;
    if(v2 == 0) {
        lpWideCharStr = GetEnvironmentStringsW();
        if(lpWideCharStr != 0) {
            gvar_40BBB0 = 1;
            goto loc_403860;
        }
        else {
            DWORD v5 = GetLastError();
            if(v5 == 120) {
                v2 = (LPWCH)0x2;
                gvar_40BBB0 = (LPWCH)0x2;
            }
            else {
                v2 = gvar_40BBB0;
            }
            goto loc_40385C;
        }
    }
    else {
    loc_40385C:
        if(v2 == 1) {
        loc_403860:
            if(lpWideCharStr == 0) {
                lpWideCharStr = GetEnvironmentStringsW();
                if(lpWideCharStr == 0) {
                    return 0;
                }
            }
            LPCWCH v6 = lpWideCharStr;
            if(lpWideCharStr[0] != 0) {
            loc_403871:
                do {
                    ++v6;
                    if(v6[0] != 0) {
                        goto loc_403871;
                    }
                    else {
                        ++v6;
                    }
                }
                while(v6[0] != 0);
            }
            cchWideChar = (int)((char*)((int)(int*)((int)v6 - (int)lpWideCharStr) >> 1) + 1);
            int cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, (int)((char*)((int)(int*)((int)v6 - (int)lpWideCharStr) >> 1) + 1), NULL, 0, NULL, NULL);
            if(cbMultiByte != 0) {
                int v7 = sub_403DDF(cbMultiByte);
                v1 = v7;
                if(v7 != 0) {
                    int v8 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, (LPSTR)v7, cbMultiByte, NULL, NULL);
                    if(!v8) {
                        sub_40403C(v1);
                        v1 = 0;
                    }
                    v4 = v1;
                }
            }
            FreeEnvironmentStringsW(lpWideCharStr);
            result = v4;
        }
        else {
            if((v2 == (void*)0x2 || v2 == 0)) {
                v2 = (LPWCH)GetEnvironmentStrings();
                int* ptr0 = (int*)v2;
                if(ptr0 != 0) {
                    if(*(char*)&ptr0[0] != 0) {
                    loc_4038F7:
                        do {
                            v2 = (LPWCH)((char*)v2 + 1);
                            if(*(char*)&v2[0] != 0) {
                                goto loc_4038F7;
                            }
                            else {
                                v2 = (LPWCH)((char*)v2 + 1);
                            }
                        }
                        while(*(char*)&v2[0] != 0);
                    }
                    int v9 = (int)((char*)((int)v2 - (int)ptr0) + 1);
                    int* ptr1 = (int*)sub_403DDF(v9);
                    if(ptr1 == 0) {
                        ptr1 = NULL;
                    }
                    else {
                        unk_lib_sub2(ptr1, ptr0, (int*)v9);
                    }
                    FreeEnvironmentStringsA((LPCH)ptr0);
                    return (int)ptr1;
                }
            }
            result = 0;
        }
    }
    return result;
}

int sub_403932(void* j) {
    int v0;
    int result;
    unsigned int* ptr0;
    unsigned short v1;
    char v2;
    unsigned int* ptr1;
    int v3 = sub_403DDF(0x100);
    if(!v3) {
        result = -1;
    }
    else {
        gvar_40BEE0 = v3;
        gvar_40BEC8 = 32;
        for(unsigned int i = (unsigned int)(v3 + 0x100); i > (unsigned int)v3; i = gvar_40BEE0 + 0x100) {
            *(int*)v3 = -1;
            *(char*)(v3 + 4) = 0;
            *(char*)(v3 + 5) = 10;
            v3 += 8;
        }
        unsigned int* ptr2 = ptr1;
        void* ptr3 = (void*)&loc_40398F;
        GetStartupInfoA(&v2);
        if(v1) {
            unsigned int* ptr4 = ptr0;
            if(ptr4) {
                unsigned int v4 = *ptr4;
                char* ptr5 = (char*)(ptr4 + 1);
                ptr1 = (unsigned int*)((int)ptr5 + v4);
                if((int)v4 >= 0x800) {
                    v4 = 0x800;
                }
                if((int)gvar_40BEC8 < (int)v4) {
                    int* ptr6 = (int*)&gvar_40BEE4;
                loc_4039CD:
                    do {
                        v0 = sub_403DDF(0x100);
                        j = ptr3;
                        if(v0) {
                            gvar_40BEC8 += 32;
                            *ptr6 = v0;
                            for(j = (void*)(v0 + 0x100); (unsigned int)v0 < (unsigned int)j; j = (void*)(*ptr6 + 0x100)) {
                                *(int*)v0 = -1;
                                *(char*)(v0 + 4) = 0;
                                *(char*)(v0 + 5) = 10;
                                v0 += 8;
                            }
                            ++ptr6;
                            if((int)gvar_40BEC8 < (int)v4) {
                                goto loc_4039CD;
                            }
                            else {
                                goto loc_403A15;
                            }
                        }
                    }
                    while(v0);
                    v4 = gvar_40BEC8;
                }
            loc_403A15:
                unsigned int v5 = 0;
                if((int)v4 > 0) {
                    do {
                        HANDLE hFile = *ptr1;
                        if(hFile != -1) {
                            j = (unsigned int)*ptr5 | ((unsigned int)(int*)((int)(int*)((int)j >>> 8) & 0xffffff) << 8);
                            if((*ptr5 & 0x1)) {
                                if(!((unsigned char)j & 0x8)) {
                                    DWORD v6 = GetFileType(hFile);
                                    if(v6) {
                                        goto loc_403A4B;
                                    }
                                }
                                else {
                                loc_403A4B:
                                    unsigned int* ptr7 = (unsigned int*)((v5 & 0x1f) * 8 + *(unsigned int*)((v5 >> 5) * 4 + (int)&gvar_40BEE0));
                                    j = *ptr1;
                                    *ptr7 = *ptr1;
                                    j = (unsigned int)*ptr5 | ((unsigned int)(int*)((int)(int*)((int)j >>> 8) & 0xffffff) << 8);
                                    *(char*)(ptr7 + 1) = *ptr5;
                                }
                            }
                        }
                        ++v5;
                        ++ptr5;
                        ++ptr1;
                    }
                    while((int)v4 > (int)v5);
                }
            }
        }
        unsigned int v7 = 0;
        do {
            unsigned int* ptr8 = (unsigned int*)(v7 * 8 + gvar_40BEE0);
            if(*ptr8 == -1) {
                *(char*)(ptr8 + 1) = 129;
                DWORD nStdHandle = !v7 ? 0xfffffff6: v7 - 1 > 0 ? 0xfffffff4: 0xfffffff5;
                HANDLE hFile1 = GetStdHandle(nStdHandle);
                if(hFile1 != -1) {
                    DWORD v8 = GetFileType(hFile1);
                    if(!v8) {
                        goto loc_403AAD;
                    }
                    else {
                        unsigned int v9 = (unsigned int)(unsigned char)v8;
                        *ptr8 = hFile1;
                        if(v9 == 2) {
                            goto loc_403AAD;
                        }
                        else if(v9 == 3) {
                            *(char*)(ptr8 + 1) = *(char*)(ptr8 + 1) | 0x8;
                        }
                    }
                }
                else {
                loc_403AAD:
                    *(char*)(ptr8 + 1) = *(char*)(ptr8 + 1) | 0x40;
                }
            }
            else {
                *(char*)(ptr8 + 1) = *(char*)(ptr8 + 1) | 0x80;
            }
            ++v7;
        }
        while((int)v7 < 3);
        SetHandleCount(gvar_40BEC8);
        result = 0;
    }
    return result;
}

int sub_403ADD() {
    return 12;
}

int sub_403B21() {
    return 12;
}

void sub_403B65() {
    char v0 = gvar_40BA5C == 2;
    char v1 = (int)gvar_40BA5C < 2;
    char v2 = __parity__((unsigned char)gvar_40BA5C - 2);
    char v3 = gvar_40BA5C < 2;
    char v4 = (((gvar_40BA5C - 2) ^ gvar_40BA5C) & (gvar_40BA5C ^ 0x2)) < 0;
    char v5 = (((gvar_40BA5C - 2) ^ (gvar_40BA5C ^ 0x2)) >>> 4) & 0x1;
    jump v0 ? &sub_403B6E: &sub_403B7B;
}

void sub_403B6E() {
    char v0 = gvar_40BA68 == 5;
    char v1 = (int)gvar_40BA68 < 5;
    char v2 = __parity__((unsigned char)gvar_40BA68 - 5);
    char v3 = gvar_40BA68 < 5;
    char v4 = (((gvar_40BA68 - 5) ^ gvar_40BA68) & (gvar_40BA68 ^ 0x5)) < 0;
    char v5 = (((gvar_40BA68 - 5) ^ (gvar_40BA68 ^ 0x5)) >>> 4) & 0x1;
    jump v3 ? &sub_403B7B: &sub_403B77;
}

int sub_403B7F(unsigned int param0) {
    unsigned int v0;
    HANDLE v1 = HeapCreate(param0 != 0 ? 0: 1, 0x1000, 0);
    gvar_40BEC0 = v1;
    if(v1) {
        sub_403B65();
        gvar_40BEC4 = v0;
        if(v0 == 3) {
            LPVOID v2 = sub_405D3D(1016);
            if(!v2) {
                HeapDestroy(gvar_40BEC0);
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403C24(int param0, PVOID param1, int param2) {
    int v0;
    void* ptr0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    int v8;
    int v9;
    void* ptr1;
    int v10;
    int v11;
    int v12;
    void* ptr2 = &v8;
    void* ptr3 = &v8;
    char v13 = &v6 == 12;
    char v14 = (int)&v11 < 0;
    char v15 = __parity__((unsigned char)&v6 - 12);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x8) ^ (int)&v11) >>> 4) & 0x1);
    char v17 = (unsigned int)&v8 < 8;
    char v18 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v11) & (int)(int*)((int)&v8 ^ 0x8)) < 0;
    int v19 = v7;
    int v20 = v9;
    int v21 = v10;
    void* ptr4 = &v8;
    char v22 = 0;
    PVOID TargetFrame = param1;
    int v23 = param0;
    char v24 = *(int*)(v23 + 4) & 0x6 ? 0: 1;
    char v25 = (*(int*)(v23 + 4) & 0x6) < 0;
    char v26 = __parity__((unsigned char)*(int*)(v23 + 4) & 0x6);
    char v27 = 0;
    char v28 = 0;
    if(v24) {
        v11 = v23;
        int v29 = param2;
        int v30 = param2;
        int* ptr5 = &v11;
        *(unsigned int*)((int)TargetFrame - 4) = &v11;
        unsigned int v31 = *(unsigned int*)((int)TargetFrame + 12);
        int v32 = *(int*)((int)TargetFrame + 8);
        int v33 = sub_40694E((int)TargetFrame);
        int v34 = v33;
        char v35 = v34 ? 0: 1;
        char v36 = v34 < 0;
        char v37 = __parity__((unsigned char)v34);
        char v38 = 0;
        char v39 = 0;
        if(!v35) {
            while(1) {
                v5 = v31 == -1;
                v4 = (int)v31 < -1;
                v3 = __parity__((unsigned char)v31 - 0xFF);
                v2 = v31 < 0xffffffff;
                v1 = (((v31 + 1) ^ v31) & ~v31) < 0;
                v16 = (((v31 + 1) ^ ~v31) >>> 4) & 0x1;
                if(v5) {
                    goto loc_403CE6;
                }
                else {
                    int v40 = v31 * 3;
                    int v41 = *(int*)(v40 * 4 + v32 + 4);
                    int v42 = *(int*)(v40 * 4 + v32 + 4);
                    char v43 = v42 ? 0: 1;
                    char v44 = v42 < 0;
                    char v45 = __parity__((unsigned char)v42);
                    char v46 = 0;
                    char v47 = 0;
                    if(!v43) {
                        ptr0 = (void*)v31;
                        void* ptr6 = ptr2;
                        int* ptr7 = (int*)((int)TargetFrame + 16);
                        int v48 = 0;
                        int v49 = 0;
                        int v50 = 0;
                        int v51 = 0;
                        int v52 = 0;
                        char v53 = 1;
                        char v54 = 0;
                        char v55 = 1;
                        char v56 = 0;
                        char v57 = 0;
                        int v58 = v42();
                        ptr2 = ptr6;
                        v31 = (unsigned int)ptr0;
                        TargetFrame = *(PVOID*)((int)ptr2 + 12);
                        int v59 = v58;
                        v5 = v59 ? 0: 1;
                        v4 = v59 < 0;
                        v3 = __parity__((unsigned char)v59);
                        v1 = 0;
                        v2 = 0;
                        if(!v5) {
                            if(!v4) {
                                int v60 = *(int*)((int)TargetFrame + 8);
                                int v61 = _global_unwind2(TargetFrame);
                                int* ptr8 = &ptr0;
                                char v62 = &v6 == 28;
                                char v63 = (int)&ptr4 < 0;
                                char v64 = __parity__((unsigned char)&v6 - 28);
                                char v65 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&ptr4) >>> 4) & 0x1);
                                char v66 = (unsigned int)&ptr0 >= 0xfffffffc;
                                char v67 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
                                ptr2 = (void*)((int)TargetFrame + 16);
                                int v68 = sub_4068A2((int)TargetFrame, v31);
                                int* ptr9 = &ptr6;
                                char v69 = &v6 == 28;
                                char v70 = (int)&ptr4 < 0;
                                char v71 = __parity__((unsigned char)&v6 - 28);
                                char v72 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr6 ^ 0x8) ^ (int)&ptr4) >>> 4) & 0x1);
                                char v73 = (unsigned int)&ptr6 >= 0xfffffff8;
                                char v74 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr6) & (int*)~(int)(int*)((int)&ptr6 ^ 0x8)) < 0;
                                int v75 = (int)(v31 * 3);
                                int v76 = *(int*)(v75 * 4 + v60 + 8);
                                unsigned int v77 = sub_406936(v75, 1);
                                int v78 = *(int*)(v12 * 4 + v60);
                                *(int*)((int)TargetFrame + 12) = *(int*)(v12 * 4 + v60);
                                int v79 = *(int*)(v12 * 4 + v60 + 8);
                                TargetFrame = NULL;
                                int v80 = 0;
                                int v81 = 0;
                                v31 = 0;
                                int v82 = 0;
                                char v83 = 1;
                                char v84 = 0;
                                char v85 = 1;
                                char v86 = 0;
                                char v87 = 0;
                                v79();
                            }
                            else {
                                v0 = 0;
                                break;
                            }
                        }
                    }
                    v32 = *(int*)((int)TargetFrame + 8);
                    v12 = v31 * 3;
                    v31 = *(unsigned int*)(v12 * 4 + v32);
                }
            }
        }
        else {
            int v88 = param0;
            *(int*)(v88 + 4) = *(int*)(v88 + 4) | 0x8;
            v5 = *(int*)(v88 + 4) ? 0: 1;
            v4 = *(int*)(v88 + 4) < 0;
            v3 = __parity__((unsigned char)*(int*)(v88 + 4));
            v1 = 0;
            v2 = 0;
        loc_403CE6:
            v0 = 1;
        }
    }
    else {
        ptr0 = &v8;
        int* ptr10 = (int*)((int)TargetFrame + 16);
        int v89 = sub_4068A2((int)TargetFrame, 0xffffffff);
        int* ptr11 = &ptr1;
        v5 = &v6 == 32;
        v4 = (int)&ptr0 < 0;
        v3 = __parity__((unsigned char)&v6 - 32);
        v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
        v2 = (unsigned int)&ptr1 >= 0xfffffff8;
        v1 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0x8)) < 0;
        void* ptr12 = ptr0;
        v0 = 1;
    }
    void* ptr13 = ptr4;
    int v90 = v21;
    int v91 = v20;
    int v92 = v19;
    int v93 = *(int*)ptr13;
    int v94 = v20;
    int* ptr14 = &v19;
    jump v94;
}

int* sub_403D6D(int param0) {
    int* result;
    int i = param0;
    if(gvar_40BEC4 == 3 && gvar_40BC84 >= (unsigned int)i) {
        result = sub_406564(i);
        if(!result) {
            goto loc_403D90;
        }
    }
    else {
    loc_403D90:
        if(!i) {
            i = 1;
        }
        if(gvar_40BEC4 != 1) {
            i = (i + 15) & 0xfffffff0;
        }
        result = (int*)HeapAlloc(gvar_40BEC0, 0, (SIZE_T)i);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_403DB3(unsigned int param0, unsigned int param1) {
    unsigned int result;
    int v0;
    if(param0 <= 0xffffffe0) {
        do {
            result = (unsigned int)sub_403D6D((int)param0);
            if(result || result == param1) {
                return result;
            }
            v0 = sub_406B77();
        }
        while(v0);
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403DDF(int param0) {
    return sub_403DB3(param0, (int)gvar_40BC48);
}

int sub_403DF1(unsigned int param0) {
    return gvar_40BEC8 > param0 ? (int)*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_40BEE0) + 4) & 0x40: 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403E18(int* param0) {
    int* ptr0 = param0;
    short v0 = (unsigned short)*(ptr0 + 3);
    int result = 0;
    if(((unsigned char)v0 & 0x3) == 2 && (v0 & 0x108)) {
        int v1 = *(ptr0 + 2);
        unsigned int v2 = (unsigned int)(*ptr0 - v1);
        if((int)v2 > 0) {
            int v3 = v1;
            unsigned int v4 = (unsigned int)sub_406B92(*(ptr0 + 4), v1, (int)v2);
            if(v4 == v2) {
                int v5 = *(ptr0 + 3);
                if((unsigned char)v5 < 0) {
                    *(ptr0 + 3) = v5 & 0xfffffffd;
                }
            }
            else {
                *(ptr0 + 3) = *(ptr0 + 3) | 0x20;
                result = -1;
            }
        }
    }
    int v6 = *(ptr0 + 2);
    *(ptr0 + 1) = 0;
    *ptr0 = v6;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403F26(int param0, int* param1) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int* ptr0 = param1;
    int v3 = ptr0[3];
    unsigned int v4 = (unsigned int)ptr0[4];
    if(((unsigned char)v3 & 0x82) && !((unsigned char)v3 & 0x40)) {
        if(((unsigned char)v3 & 0x1)) {
            ptr0[1] = 0;
            if(!((unsigned char)v3 & 0x10)) {
                ptr0[3] = v3 | 0x20;
                return -1;
            }
            ptr0[0] = ptr0[2];
            ptr0[3] = v3 & 0xfffffffe;
        }
        int v5 = ptr0[3];
        ptr0[1] = 0;
        param1 = NULL;
        ptr0[3] = (v5 & 0xffffffef) | 0x2;
        if(!((((unsigned short)v5 & 0xffef) | 0x2) & 0x10c)) {
            if(ptr0 == 4239592 || ptr0 == 4239624) {
                int v6 = sub_403DF1(v4);
                if(!v6) {
                    goto loc_403F95;
                }
            }
            else {
            loc_403F95:
                sub_406E65(ptr0);
            }
        }
        if((*(short*)&ptr0[3] & 0x108)) {
            int v7 = ptr0[2];
            int v8 = ptr0[0];
            ptr0[0] = v7 + 1;
            v0 = v8 - v7;
            ptr0[1] = ptr0[6] - 1;
            if(v0 > 0) {
                param1 = (int*)sub_406B92((int)v4, v7, v0);
            }
            else if((*(char*)((v4 != -1 ? (int)(v4 & 0x1f) * 8 + *(unsigned int*)((v4 >> 5) * 4 + (int)&gvar_40BEE0): &gvar_40B480) + 4) & 0x20)) {
                sub_406DD9((int*)v4, 0, 2);
            }
            *(char*)ptr0[2] = (unsigned char)param0;
        }
        else {
            v0 = 1;
            param1 = (int*)sub_406B92((int)v4, (int)&param0, 1);
        }
        if(v0 != param1) {
            ptr0[3] |= 32;
            return -1;
        }
        result = (unsigned int)(unsigned char)param0;
    }
    else {
        ptr0[3] = v3 | 0x20;
        result = -1;
    }
    return result;
}

unsigned int* sub_40403C(int param0) {
    unsigned int* result;
    if(param0) {
        char v0 = gvar_40BEC4 == 3;
        int v1 = param0;
        if(v0) {
            int v2 = sub_405D85(v1);
            v1 = param0;
            if(v2) {
                return sub_405DB0((unsigned int*)v2, (unsigned int*)v1);
            }
        }
        result = (unsigned int*)HeapFree(gvar_40BEC0, 0, (LPVOID)v1);
    }
    return result;
}

LPSTR sub_40410B(LPSTR lpMultiByteStr, unsigned short param1) {
    LPSTR result;
    if(lpMultiByteStr == 0) {
        result = NULL;
    }
    else if(gvar_40BC54 != 0) {
        result = (LPSTR)WideCharToMultiByte(gvar_40BC64, 0, &param1, 1, lpMultiByteStr, gvar_40B4A0, NULL, &lpMultiByteStr);
        if(result == 0) {
        loc_404161:
            gvar_40BA50 = 42;
            result = (LPSTR)0xFFFFFFFF;
        }
    }
    else if(param1 > 0xff) {
        goto loc_404161;
    }
    else {
        lpMultiByteStr[0] = (CHAR)param1;
        result = (LPSTR)0x1;
    }
    return result;
}

int sub_404245(int param0, int param1) {
    char v0;
    int result;
    SIZE_T dwBytes = (SIZE_T)(param0 * param1);
    int i = (int)(SIZE_T)(param0 * param1);
    if(!dwBytes) {
        dwBytes = 1;
    }
    do {
        char* ptr0 = NULL;
        if(dwBytes <= 0xffffffe0) {
            if(gvar_40BEC4 == 3) {
                dwBytes = (SIZE_T)((dwBytes + 15) & 0xfffffff0);
                if(gvar_40BC84 >= (unsigned int)i) {
                    *(int*)&v0 = &loc_40427C;
                    ptr0 = (char*)/*BAD_CALL!*/ sub_406564(i);
                    if(ptr0) {
                        *(int*)&v0 = 0;
                        sub_4045E0(ptr0, 0, (int*)i);
                        return (int)ptr0;
                    }
                }
            }
            *(int*)&v0 = 8;
            ptr0 = (char*)HeapAlloc(gvar_40BEC0, *(DWORD*)&v0, dwBytes);
            if(ptr0) {
                return (int)ptr0;
            }
            goto loc_40429F;
        }
        else {
        loc_40429F:
            if(!gvar_40BC48) {
                return (int)ptr0;
            }
            *(int*)&v0 = &loc_4042A7;
            result = /*BAD_CALL!*/ sub_406B77();
        }
        return result;
    }
    while(result);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404318(int param0, int param1) {
    int v0;
    char v1;
    int v2;
    char v3;
    unsigned int v4;
    *(unsigned int*)&v3 = v4;
    if((unsigned int)(param0 + 1) <= 0x100) {
        v2 = (unsigned int)*(short*)(param0 * 2 + gvar_40B490);
    }
    else {
        if((*(char*)((unsigned int)(unsigned char)(param0 >>> 8) * 2 + gvar_40B490 + 1) & 0x80)) {
            v1 = (unsigned char)param0;
            v3 = (unsigned char)(param0 >>> 8);
            char v5 = 0;
            v0 = 2;
        }
        else {
            v3 = (unsigned char)param0;
            v1 = 0;
            v0 = 1;
        }
        int v6 = sub_4070AD(1, (int)&v3, v0, (int)(int*)((char*)&param0 + 2), (int)gvar_40BC64, (int)gvar_40BC54, 1);
        if(!v6) {
            return 0;
        }
        v2 = param0 >>> 16;
    }
    return v2 & param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404396(int* param0) {
    int* ptr0 = param0;
    int v0 = ptr0[3];
    if(((unsigned char)v0 & 0x83) && !((unsigned char)v0 & 0x40)) {
        if(((unsigned char)v0 & 0x2)) {
            ptr0[3] = v0 | 0x20;
        }
        else {
            ptr0[3] = v0 | 0x1;
            if(!(((unsigned short)v0 | 0x1) & 0x10c)) {
                sub_406E65(ptr0);
            }
            else {
                ptr0[0] = ptr0[2];
            }
            int v1 = sub_407267(ptr0[4], ptr0[2], ptr0[6]);
            ptr0[1] = v1;
            if(v1 && v1 != -1) {
                int v2 = ptr0[3];
                if(!((unsigned char)v2 & 0x82)) {
                    int v3 = ptr0[4];
                    if((*(char*)((v3 != -1 ? (v3 & 0x1f) * 8 + *(unsigned int*)((v3 >> 5) * 4 + (int)&gvar_40BEE0): &gvar_40B480) + 4) & 0x82) == 130) {
                        ptr0[3] = v2 | 0x2000;
                    }
                }
                if(ptr0[6] == 0x200) {
                    int v4 = ptr0[3];
                    if(((unsigned char)v4 & 0x8) && !((unsigned char)(v4 >>> 8) & 0x4)) {
                        ptr0[6] = 0x1000;
                    }
                }
                int v5 = ptr0[0];
                ptr0[1] = v1 - 1;
                int result = (unsigned int)*(char*)v5;
                ptr0[0] = v5 + 1;
                return result;
            }
            ptr0[3] |= (unsigned int)v1 <= 0 ? 16: 32;
            ptr0[1] = 0;
        }
    }
    return -1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404474(unsigned int param0, unsigned int* param1) {
    int result;
    unsigned int v0 = param0;
    if(v0 != -1) {
        unsigned int* ptr0 = param1;
        int* ptr1 = *(ptr0 + 3);
        if(!((unsigned char)ptr1 & 0x1) && ((unsigned char)ptr1 >= 0 || ((unsigned char)ptr1 & 0x2))) {
            return -1;
        }
        if(!*(int*)(ptr0 + 2)) {
            sub_406E65((int)ptr0);
        }
        ptr1 = *ptr0;
        if(*(int*)(ptr0 + 2) == ptr1) {
            if(*(int*)(ptr0 + 1)) {
                return -1;
            }
            *ptr0 = (int*)((char*)ptr1 + 1);
        }
        *ptr0 = *ptr0 - 1;
        unsigned char* ptr2 = *ptr0;
        if(!(*(char*)(ptr0 + 3) & 0x40)) {
            *ptr2 = (unsigned char)v0;
        }
        else if((unsigned char)v0 != *ptr2) {
            *ptr0 = (int*)(ptr2 + 1);
            return -1;
        }
        int v1 = *(int*)(ptr0 + 3);
        *(int*)(ptr0 + 1) = *(int*)(ptr0 + 1) + 1;
        *(int*)(ptr0 + 3) = (v1 & 0xffffffef) | 0x1;
        result = (unsigned int)(unsigned char)v0;
    }
    else {
        result = -1;
    }
    return result;
}

void sub_4044E0() {
    char v0 = gvar_40B4A0 == 1;
    char v1 = (int)gvar_40B4A0 < 1;
    char v2 = __parity__((unsigned char)gvar_40B4A0 - 1);
    char v3 = gvar_40B4A0 < 1;
    char v4 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
    char v5 = (((gvar_40B4A0 - 1) ^ (gvar_40B4A0 ^ 0x1)) >>> 4) & 0x1;
    jump v0 || v1 != v4 ? &sub_4044F7: &sub_4044E9;
}

int sub_4044E9(int param0) {
    return sub_404318(param0, 8);
}

int sub_4044F7(int param0) {
    return (unsigned int)*(char*)(param0 * 2 + gvar_40B490) & 0x8;
}

int sub_404509(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int param2) {
    char v0;
    int cbMultiByte;
    int v1;
    int v2 = v1;
    if(lpMultiByteStr != 0 && param2 != 0) {
        CHAR v3 = lpMultiByteStr[0];
        if(lpMultiByteStr[0] == 0) {
            if(lpWideCharStr != 0) {
                lpWideCharStr[0] = 0;
            }
            return 0;
        }
        else if(gvar_40BC54 == 0) {
            if(lpWideCharStr != 0) {
                lpWideCharStr[0] = (WCHAR)v3;
            }
            goto loc_40454A;
        }
        else {
            if((*(char*)((char*)((unsigned int)v3 * 2 + (int)gvar_40B490) + 1) & 0x80)) {
                cbMultiByte = gvar_40B4A0;
                if(cbMultiByte > 1) {
                    v0 = (unsigned int)cbMultiByte > param2;
                    if(cbMultiByte > (int)param2) {
                        goto loc_404594;
                    }
                    else {
                        int v4 = MultiByteToWideChar(gvar_40BC64, 9, lpMultiByteStr, cbMultiByte, lpWideCharStr, lpWideCharStr == 0 ? 0: 1);
                        cbMultiByte = gvar_40B4A0;
                        if(v4) {
                            return cbMultiByte;
                        }
                    }
                }
                v0 = (unsigned int)cbMultiByte > param2;
            loc_404594:
                if(!v0 && lpMultiByteStr[1] != 0) {
                    return cbMultiByte;
                }
                goto loc_40459B;
            }
            else {
                cbMultiByte = MultiByteToWideChar(gvar_40BC64, 9, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr == 0 ? 0: 1);
            }
            if(!cbMultiByte) {
            loc_40459B:
                gvar_40BA50 = 42;
                cbMultiByte = -1;
            }
            else {
            loc_40454A:
                cbMultiByte = 1;
            }
        }
    }
    else {
        cbMultiByte = 0;
    }
    return cbMultiByte;
}

char* sub_4045E0(char* param0, char param1, int* param2) {
    int* ptr0 = param2;
    if(ptr0) {
        int v0 = (unsigned int)param1;
        char* ptr1 = param0;
        if((unsigned int)ptr0 >= 4) {
            int* ptr2 = (int*)((int)(int*)(0 - (int)param0) & 0x3);
            if(ptr2) {
                ptr0 = (int*)((int)ptr0 - (int)ptr2);
                do {
                    *ptr1 = (unsigned char)v0;
                    ++ptr1;
                    ptr2 = (int*)((char*)ptr2 - 1);
                }
                while(ptr2);
            }
            v0 *= 0x1010101;
            int* ptr3 = ptr0;
            ptr0 = (int*)((int)ptr0 & 0x3);
            char* ptr4 = (char*)((int)ptr3 >>> 2);
            if(ptr4) {
                while(ptr4 != 0) {
                    *(int*)ptr1 = v0;
                    ptr1 += 4;
                    --ptr4;
                }
                if(!ptr0) {
                    return param0;
                }
            }
            goto loc_40462B;
        }
        else {
        loc_40462B:
            do {
                *ptr1 = (unsigned char)v0;
                ++ptr1;
                ptr0 = (int*)((char*)ptr0 - 1);
            }
            while(ptr0);
        }
    }
    return param0;
}

BOOL sub_404640(SIZE_T param0) {
    BOOL result;
    LPCVOID lpAddress;
    LPCVOID v0;
    char v1;
    int v2;
    char v3;
    int v4;
    int v5;
    SIZE_T v6;
    SIZE_T v7;
    int v8;
    char v9;
    int v10 = v4;
    sub_403D30((int)param0);
    SIZE_T v11 = VirtualQuery(&v5, &v6, 28);
    if(v11) {
        LPCVOID v12 = v0;
        GetSystemInfo(&v1);
        v11 = gvar_40BA5C;
        LPCVOID v13 = (LPCVOID)((int)(int*)(~(v7 - 1) & (int)&v5) - v7);
        LPCVOID v14 = (LPCVOID)(((unsigned int)(v11 - 1) > 0 ? v7 * 2: v7 * 17) + (int)v12);
        SIZE_T dwSize = v7;
        if(v14 > v13) {
            return 0;
        }
        if(v11 != 1) {
            lpAddress = v12;
            do {
                v11 = VirtualQuery(lpAddress, &v6, 28);
                if(!v11) {
                    return 0;
                }
                lpAddress = (LPCVOID)(v2 + (int)lpAddress);
            }
            while(!(v8 & 0x1000));
            lpAddress = (LPCVOID)v6;
            if((v9 & 0x1)) {
                return 1;
            }
            else if((unsigned int)v13 < v6) {
                return 0;
            }
            if((unsigned int)v14 > v6) {
                lpAddress = v14;
            }
            VirtualAlloc(lpAddress, dwSize, 0x1000, 4);
            v11 = gvar_40BA5C;
        }
        else {
            lpAddress = v13;
        }
        result = VirtualProtect(lpAddress, dwSize, (unsigned int)(v11 - 1) <= 0 ? 1: 260, &v3);
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404764(int param0) {
    int result;
    char v0;
    char v1;
    char v2;
    int v3;
    *(int*)&v0 = v3;
    *(int*)&v1 = v3;
    if(!(gvar_40BC54 ? 0: 1) && (!gvar_40B5F0 || (unsigned int)param0 > 127)) {
        if((unsigned int)param0 < 0x100) {
            int v4 = (int)gvar_40B4A0 > 1 ? sub_404318(param0, 1): (unsigned int)*(char*)(param0 * 2 + gvar_40B490) & 0x1;
            if(!v4) {
                return param0;
            }
        }
        unsigned int v5 = (unsigned int)sub_407455();
        if(!v5) {
            return param0;
        }
        else if(v5 == 1) {
            result = (int)v1;
        }
        else {
            result = ((unsigned int)v1 * 4) | (unsigned int)v2;
        }
    }
    else {
        if(param0 >= 65) {
            result = param0 + 32;
            if(result <= 122) {
                return result;
            }
        }
        result = param0;
    }
    return result;
}

int sub_404839(int param0, int param1) {
    unsigned int v0 = (unsigned int)(param1 / 32);
    int v1 = 31;
    if(!(~(-1 << ((31 - param1 % 32) & 0x1f)) & *(int*)(v0 * 4 + param0))) {
    loc_404861:
        do {
            ++v0;
            if((int)v0 >= 3) {
                return 1;
            }
            else if(!*(int*)(v0 * 4 + param0)) {
                goto loc_404861;
            }
        }
        while(!*(int*)(v0 * 4 + param0));
    }
    return 0;
}

int sub_40486B(int param0, int param1) {
    unsigned int* ptr0 = (unsigned int*)(param1 / 32 * 4 + param0);
    unsigned int* ptr1 = (unsigned int*)(param1 / 32 * 4 + param0);
    unsigned int v0 = (unsigned int)(1 << ((31 - param1 % 32) & 0x1f));
    int result = sub_407811(ptr0[0], (unsigned int)(1 << ((31 - param1 % 32) & 0x1f)), ptr0);
    int v1 = param1 / 32 - 1;
    if(v1 >= 0) {
        unsigned int* ptr2 = (unsigned int*)(v1 * 4 + param0);
        while(result) {
            v0 = 1;
            result = sub_407811(ptr2[0], 1, ptr2);
            --v1;
            --ptr2;
            if(v1 < 0) {
                return result;
            }
        }
    }
    return result;
}

int sub_4048B8(int param0, int param1) {
    int v0;
    int result = 0;
    int v1 = v0;
    unsigned int v2 = 31;
    int v3 = param1 / 32;
    int v4 = param0;
    if(((1 << ((31 - param1 % 32) & 0x1f)) & *(int*)(v3 * 4 + v4))) {
        int v5 = sub_404839(v4, param1);
        if(!v5) {
            result = sub_40486B(param0, param1 - 1);
        }
        v4 = param0;
    }
    v2 = 3;
    *(int*)(v3 * 4 + v4) = (-1 << ((31 - param1 % 32) & 0x1f)) & *(int*)(v3 * 4 + v4);
    if((int)(unsigned int)(v3 + 1) < 3) {
        int* ptr0 = (int*)((unsigned int)(v3 + 1) * 4 + v4);
        for(unsigned int i = 3 - (unsigned int)(v3 + 1); i != 0; --i) {
            *ptr0 = 0;
            ++ptr0;
        }
    }
    return result;
}

int* sub_40492A(unsigned int param0, int* param1) {
    int* result = param1;
    int counter = 3;
    int* ptr0 = (int*)(param0 - (int)result);
    do {
        *(int*)((int)result + (int)ptr0) = *result;
        ++result;
        --counter;
    }
    while(counter);
    return result;
}

int sub_404945(unsigned int* param0) {
    while(!*param0) {
    }
    return 0;
}

int sub_404957() {
    return 1;
}

unsigned int sub_40495E(int param0, unsigned int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = 32;
    unsigned int v3 = (int)param1 % 32;
    int v4 = param0;
    unsigned int v5 = (int)param1 / 32;
    unsigned int v6 = 0;
    param1 = 32 - v3;
    int v7 = 0;
    do {
        int v8 = *(int*)(v6 * 4 + v4);
        int v9 = ~(-1 << (v3 & 0x1f)) & v8;
        unsigned int v10 = param1;
        *(int*)(v6 * 4 + v4) = (v8 >>> (v3 & 0x1f)) | v7;
        ++v6;
        v7 = v9 << (v10 & 0x1f);
    }
    while((int)v6 < 3);
    v2 = 2;
    unsigned int result = 2;
    unsigned int* ptr0 = (unsigned int*)((2 - v5) * 4 + v4);
    do {
        if((int)result >= (int)v5) {
            *(unsigned int*)(result * 4 + v4) = *ptr0;
        }
        else {
            *(int*)(result * 4 + v4) = 0;
        }
        --result;
        --ptr0;
    }
    while(result < 0x80000000);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4049D9(short* param0, unsigned int* param1, unsigned int* param2) {
    char v0;
    int result;
    int v1;
    char v2;
    int v3;
    char v4;
    short* ptr0 = param0;
    int v5 = (unsigned int)*(ptr0 + 5);
    int v6 = v3;
    param0 = (short*)(v5 & 0x8000);
    *(int*)&v2 = *(int*)(ptr0 + 3);
    int v7 = *(int*)(ptr0 + 1);
    unsigned int v8 = (unsigned int)((v5 & 0x7fff) - 0x3fff);
    int v9 = (unsigned int)*ptr0 * 0x10000;
    int v10 = v7;
    int* ptr1 = (int*)&v2;
    if(v8 == 0xffffc001) {
        v1 = 0;
        unsigned int v11 = (unsigned int)sub_404945((int)ptr1);
        if(v11) {
            goto loc_404AF1;
        }
        else {
            *(unsigned int*)&v2 = 0;
            *&v10 = 0;
            *(&v10 + 1) = 0;
            goto loc_404A3C;
        }
    }
    else {
        sub_40492A(&v4, ptr1);
        int v12 = sub_4048B8(&v2, *(int*)(param2 + 2));
        if(v12) {
            ++v8;
        }
        unsigned int v13 = *(param2 + 1);
        if((int)(v13 - *(int*)(param2 + 2)) > (int)v8) {
            *(int*)&v2 = 0;
            *&v10 = 0;
            *(int*)(&v10 + 1) = 0;
            goto loc_404AB1;
        }
        if((int)v13 >= (int)v8) {
            sub_40492A((unsigned int)&v2, (int*)&v4);
            sub_40495E(&v2, v13 - v8);
            sub_4048B8(&v2, *(int*)(param2 + 2));
            sub_40495E(&v2, (unsigned int)(*(int*)(param2 + 3) + 1));
        loc_404AB1:
            v1 = 0;
        loc_404A3C:
            result = 2;
        }
        else {
            char v14 = *param2 > (int)v8;
            char v15 = (((v8 - *param2) ^ v8) & (*param2 ^ v8)) < 0;
            ptr1 = *(int**)(param2 + 3);
            if(v14 == v15) {
                *(int*)&v2 = 0;
                *&v10 = 0;
                *(int*)(&v10 + 1) = 0;
                v0 = v0 | 0x80;
                sub_40495E(&v2, (unsigned int)ptr1);
                v1 = *(int*)(param2 + 5) + *param2;
                result = 1;
            }
            else {
                int v16 = *(int*)(param2 + 5);
                v0 &= 127;
                v1 = v16 + v8;
                sub_40495E(&v2, (unsigned int)ptr1);
            loc_404AF1:
                result = 0;
            }
        }
    }
    ptr1 = (int*)0x1F;
    unsigned int v17 = *(param2 + 4);
    int* ptr2 = (int*)((int)(int*)((int)(int*)(v1 << (int)(int*)((int)(int*)((int)(int*)0x1F - *(int*)(param2 + 3)) & 0x1f)) | (int)((unsigned int)(short*)(v5 & 0x8000) > 0 ? (unsigned int*)0x80000000: NULL)) | *(int*)&v2);
    if(v17 == 32) {
        *param1 = ptr2;
    }
    else if(v17 == 64) {
        unsigned int* ptr3 = param1;
        int v18 = v10;
        *(ptr3 + 1) = ptr2;
        *ptr3 = v18;
    }
    return result;
}

int sub_404B31(short* param0, unsigned int* param1) {
    return sub_4049D9(param0, param1, (unsigned int*)&gvar_40B4B0);
}

int sub_404B47(short* param0, unsigned int* param1) {
    return sub_4049D9(param0, param1, (unsigned int*)&gvar_40B4C8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404B5D(unsigned int* param0, char* param1) {
    char v0;
    char v1;
    int result;
    unsigned int v2 = gvar_40B498;
    sub_4079C9(&v0, &v1, param1, 0, 0, 0, 0);
    sub_404B31(&v0, param0);
    sub_4041A2(v2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404B9A(unsigned int* param0, char* param1) {
    char v0;
    char v1;
    int result;
    unsigned int v2 = gvar_40B498;
    sub_4079C9(&v0, &v1, param1, 0, 0, 0, 0);
    sub_404B47(&v0, param0);
    sub_4041A2(v2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405018(int* param0, int* param1, int param2) {
    int v0;
    int v1 = param2;
    unsigned char* ptr0 = *(unsigned int*)(v1 + 12);
    int v2 = v0;
    int* ptr1 = param1;
    int* ptr2 = param0;
    *(char*)&ptr2[0] = 48;
    int* i = (int*)((char*)ptr2 + 1);
    if((int)ptr1 > 0) {
        param0 = ptr1;
        ptr1 = NULL;
        do {
            v1 = (unsigned int)*ptr0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            if(*ptr0) {
                v1 = (int)(unsigned char)v1;
                ++ptr0;
            }
            else {
                int v3 = 48;
                v1 = 48;
            }
            *(char*)&i[0] = (unsigned char)v1;
            i = (int*)((char*)i + 1);
            param0 = (int*)((char*)param0 - 1);
        }
        while(param0);
        v1 = param2;
    }
    *(char*)&i[0] = 0;
    if((int)ptr1 >= 0 && *ptr0 >= 53) {
        for(i = (int*)((char*)i - 1); *(char*)&i[0] == 57; i = (int*)((char*)i - 1)) {
            *(char*)&i[0] = 48;
        }
        *(char*)&i[0] = *(char*)&i[0] + 1;
    }
    if(*(char*)&ptr2[0] == 49) {
        *(int*)(v1 + 4) = *(int*)(v1 + 4) + 1;
    }
    else {
        size_t v4 = strlen((char*)ptr2 + 1);
        i = unk_lib_sub(ptr2, (int*)((char*)ptr2 + 1), (int*)(v4 + 1));
    }
    return i;
}

unsigned int* sub_40508F(unsigned int* param0, unsigned int* param1) {
    unsigned int* result;
    int* ptr0;
    int v0;
    unsigned int* ptr1 = param1;
    int v1 = (unsigned int)*(short*)((char*)ptr1 + 6);
    int v2 = v0;
    v7 = 0x80000000;
    param1 = (unsigned int*)(v1 & 0x8000);
    unsigned int v3 = *ptr1;
    int v4 = *(int*)(ptr1 + 1) & 0xfffff;
    if(((unsigned short)(v1 >>> 4) & 0x7ff)) {
        ptr0 = ((unsigned short)(v1 >>> 4) & 0x7ff) != 0x7ff ? (int*)((v1 >>> 4) & 0x7ff) + 0xf00: (int*)0x7FFF;
        goto loc_40510A;
    }
    else if(v4 == 0 && v3 == 0) {
        result = param0;
        *(int*)(result + 1) = 0;
        *result = 0;
        *(short*)(result + 2) = 0;
    }
    else {
        ptr0 = (int*)((char*)((v1 >>> 4) & 0x7ff) + 15361);
        v7 = 0;
    loc_40510A:
        int v5 = (v4 * 0x800) | (v3 >>> 21) | v7;
        result = param0;
        *(int*)(result + 1) = v5;
        *result = v3 * 0x800;
        if(!(v5 & 0x80000000)) {
            do {
                int v6 = *result;
                v3 = (unsigned int)((*(int*)(result + 1) * 2) | (v6 >>> 31));
                ptr0 = (int*)((char*)ptr0 + 0xffff);
                *(result + 1) = v3;
                *result = v6 * 2;
            }
            while(!(v3 & 0x80000000));
        }
        *(short*)(result + 2) = (unsigned short)(int*)((int)ptr0 | (int)param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_405149() {
    char v0;
    unsigned int v1;
    unsigned int v2;
    char v3;
    char* ptr0;
    int result;
    char v4;
    unsigned int v5 = gvar_40B498;
    *(int**)&v0 = &v1;
    sub_40508F(*(unsigned int**)&v0, &v4);
    *(int*)&v0 = 0;
    *&v2 = *&v3;
    *(short*)(&v2 + 1) = *(short*)(&v3 + 1);
    int v6 = sub_407E50(v1, v2, ptr0, (int*)0x11, 0, (short*)&gvar_40BBB4);
    gvar_40BBD8 = v6;
    gvar_40BBD0 = (unsigned int)gvar_40BBB6;
    gvar_40BBD4 = (unsigned int)gvar_40BBB4;
    gvar_40BBDC = 0x40bbb8;
    sub_4041A2(v5);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4051BD() {
    int result;
    sub_401182();
    return result;
}

int sub_4051C6() {
    short v0;
    int result = (unsigned char)v0 & 0x1 ? 16: 0;
    if(((unsigned char)v0 & 0x4)) {
        result |= 8;
    }
    if(((unsigned char)v0 & 0x8)) {
        result |= 4;
    }
    if(((unsigned char)v0 & 0x10)) {
        result |= 2;
    }
    if(((unsigned char)v0 & 0x20)) {
        result |= 1;
    }
    if(((unsigned char)v0 & 0x2)) {
        result |= 0x80000;
    }
    if((unsigned int)((unsigned int)v0 & 0xc00)) {
        switch((unsigned int)((unsigned int)v0 & 0xc00)) {
            case 1024: {
                result |= 0x100;
                break;
            }
            case 2048: {
                result |= 0x200;
                break;
            }
            case 3072: {
                result |= 0x300;
                break;
            }
        }
    }
    if(!(unsigned int)((unsigned int)v0 & 0x300)) {
        result |= 0x20000;
    }
    else if((unsigned int)((unsigned int)v0 & 0x300) == 0x200) {
        result |= 0x10000;
    }
    if(((unsigned char)(v0 >>> 8) & 0x10)) {
        result |= 0x40000;
    }
    return result;
}

int sub_405258() {
    int v0;
    int result = (unsigned char)v0 & 0x10 ? 1: 0;
    if(((unsigned char)v0 & 0x8)) {
        result |= 4;
    }
    if(((unsigned char)v0 & 0x4)) {
        result |= 8;
    }
    if(((unsigned char)v0 & 0x2)) {
        result |= 16;
    }
    if(((unsigned char)v0 & 0x1)) {
        result |= 32;
    }
    if((v0 & 0x80000)) {
        result |= 2;
    }
    if((unsigned int)(v0 & 0x300)) {
        switch((unsigned int)(v0 & 0x300)) {
            case 256: {
                result |= 0x400;
                break;
            }
            case 512: {
                result |= 0x800;
                break;
            }
            case 768: {
                result |= 0xc00;
                break;
            }
        }
    }
    if(!(unsigned int)(v0 & 0x30000)) {
        result |= 0x300;
    }
    else if((unsigned int)(v0 & 0x30000) == 0x10000) {
        result |= 0x200;
    }
    if((v0 & 0x40000)) {
        result |= 0x1000;
    }
    return result;
}

int sub_4052E6(int param0, short param1) {
    short v0;
    int v1;
    *(int*)&v0 = v1;
    v0 = fnstcw();
    int v2 = sub_4051C6();
    int result = (~*(int*)&param1 & v2) | (*(int*)&param1 & param0);
    int v3 = sub_405258();
    *(int*)&param1 = v3;
    fldcw(param1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_40532E(unsigned int param0) {
    unsigned int result;
    SIZE_T v0 = sub_408240(gvar_40BFE8);
    unsigned int* ptr0 = gvar_40BFE4;
    unsigned int v1 = gvar_40BFE8;
    if((unsigned int)((int*)((int)ptr0 - v1) + 1) > v0) {
        result = (unsigned int)sub_4080DE((int)v1, (int)(unsigned int)((v0 < 0x800 ? v0: 0x800) + v0));
        if(!result) {
            result = (unsigned int)sub_4080DE((int)gvar_40BFE8, v0 + 16);
            if(!result) {
                return 0;
            }
        }
        unsigned int v2 = gvar_40BFE4 - gvar_40BFE8;
        gvar_40BFE8 = result;
        ptr0 = (unsigned int*)((v2 >> 2) * 4 + result);
        gvar_40BFE4 = (unsigned int*)((v2 >> 2) * 4 + result);
    }
    result = param0;
    *ptr0 = param0;
    gvar_40BFE4 += 4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4053B0(int param0) {
    unsigned int v0 = (unsigned int)sub_40532E(param0);
    return -1 - (v0 > 0 ? 0xffffffff: 0);
}

int sub_4053EA(int param0, int param1, int param2) {
    char v0;
    int result;
    int result;
    int v1;
    int v2;
    char v3;
    void* ptr0;
    int v4;
    void* ptr1;
    char v5;
    char v6;
    int v7 = v4;
    int v8 = 0;
    unsigned int* ptr2 = &v1;
    if(gvar_40BBE0 == 0) {
        HMODULE hModule = LoadLibraryA("user32.dll");
        if(hModule == 0) {
            return 0;
        }
        HMODULE v9 = (HMODULE)GetProcAddress(hModule, "MessageBoxA");
        gvar_40BBE0 = v9;
        if(!v9) {
            return 0;
        }
        FARPROC v10 = GetProcAddress(hModule, "GetActiveWindow");
        gvar_40BBE4 = v10;
        FARPROC v11 = GetProcAddress(hModule, "GetLastActivePopup");
        v0 = gvar_40BA5C == 2;
        gvar_40BBE8 = v11;
        if(v0) {
            FARPROC v12 = GetProcAddress(hModule, "GetUserObjectInformationA");
            gvar_40BBF0 = v12;
            if(v12) {
                FARPROC v13 = GetProcAddress(hModule, "GetProcessWindowStation");
                gvar_40BBEC = v13;
            }
        }
        goto loc_40546A;
    }
    else {
    loc_40546A:
        unsigned int v14 = gvar_40BBEC;
        if(v14) {
            ptr2 = &ptr1;
            int v15 = v14();
            if(v15) {
                ptr2 = &v2;
                int v16 = gvar_40BBF0(v15, 1, (int)&v5, 12, (int)&v3);
                if(v16 && (v6 & 0x1)) {
                    goto loc_4054AF;
                }
            }
            (param2 >>> 16) & 0xFF = gvar_40BA68 >= 4 ? (unsigned char)(param2 >>> 16) | 0x20: (unsigned char)(param2 >>> 16) | 0x4;
        }
        else {
        loc_4054AF:
            unsigned int v17 = gvar_40BBE4;
            if(v17) {
                ptr2 = &ptr1;
                v8 = v17();
                if(v8) {
                    unsigned int v18 = gvar_40BBE8;
                    if(v18) {
                        ptr2 = &ptr0;
                        v8 = v18(v8);
                    }
                }
            }
        }
        --ptr2;
        *ptr2 = param2;
        --ptr2;
        *ptr2 = param1;
        --ptr2;
        *ptr2 = param0;
        --ptr2;
        *ptr2 = v8;
        --ptr2;
        *ptr2 = &loc_4054DE;
        result = /*BAD_CALL!*/ gvar_40BBE0(*(int*)(ptr2 + 1), *(int*)(ptr2 + 2), *(int*)(ptr2 + 3), *(int*)(ptr2 + 4));
    }
    return result;
}

int sub_405643() {
    int v0 = 64;
    int* ptr0 = (int*)&gvar_40BCA0;
    while(v0 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    *(char*)ptr0 = 0;
    gvar_40BDA4 = 0;
    gvar_40BC98 = 0;
    gvar_40BC94 = 0;
    gvar_40BDB0 = 0;
    gvar_40BDB4 = 0;
    gvar_40BDB8 = 0;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40566C(int param0) {
    unsigned char v0;
    char v1;
    char v2;
    short v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int v8;
    int result;
    unsigned int v9 = gvar_40B498;
    BOOL v10 = GetCPInfo(gvar_40BDA4, &v1);
    if(v10 == 1) {
        unsigned int v11 = 0;
        do {
            *(char*)(v11 + (int)&v2) = (unsigned char)v11;
            ++v11;
        }
        while(v11 < 0x100);
        v11 = (unsigned int)v7 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
        v2 = 32;
        if(v7) {
            int v12 = v8;
            char* ptr0 = &v6;
            do {
                unsigned int v13 = (unsigned int)*ptr0;
                v11 = (unsigned int)(unsigned char)v11;
                if(v11 <= v13) {
                    int v14 = v13 - v11 + 1;
                    int v15 = (v13 - v11 + 1) >>> 2;
                    int* ptr1 = (int*)(v11 + (int)&v2);
                    v11 = 0x20202020;
                    while(v15 != 0) {
                        *ptr1 = 0x20202020;
                        ++ptr1;
                        --v15;
                    }
                    for(int i = v14 & 0x3; i != 0; --i) {
                        *(char*)ptr1 = 32;
                        ptr1 = (int*)((char*)ptr1 + 1);
                    }
                }
                char* ptr2 = ptr0 + 1;
                v11 = (unsigned int)*ptr2 | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                ptr0 = ptr2 + 1;
            }
            while((unsigned char)v11);
        }
        sub_4070AD(1, (int)&v2, 0x100, (int)&v3, (int)gvar_40BDA4, (int)gvar_40BC94, 0);
        int v16 = 0;
        unsigned int v17 = gvar_40BDA4;
        int v18 = 0x100;
        char* ptr3 = &v4;
        int v19 = 0x100;
        char* ptr4 = &v2;
        int v20 = 0x100;
        unsigned int v21 = gvar_40BC94;
        sub_407455();
        int v22 = 0;
        unsigned int v23 = gvar_40BDA4;
        int v24 = 0x100;
        char* ptr5 = &v5;
        int v25 = 0x100;
        char* ptr6 = &v2;
        int v26 = 0x200;
        unsigned int v27 = gvar_40BC94;
        sub_407455();
        unsigned int v28 = 0;
        do {
            param0 = (unsigned int)*(short*)(v28 * 2 + (int)&v3) | ((unsigned int)(unsigned short)(param0 >>> 16) << 16);
            if(((unsigned char)param0 & 0x1)) {
                *(char*)((char*)((int)&gvar_40BCA0 + v28) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v28) + 1) | 0x10;
                param0 = (unsigned int)*(char*)(v28 + (int)&v4) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
                goto loc_40577E;
            }
            else if(((unsigned char)param0 & 0x2)) {
                *(char*)((char*)((int)&gvar_40BCA0 + v28) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v28) + 1) | 0x20;
                param0 = (unsigned int)*(char*)(v28 + (int)&v5) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
            loc_40577E:
                *(unsigned char*)((int)&gvar_40BDC0 + v28) = (unsigned char)param0;
            }
            else {
                *(unsigned char*)((int)&gvar_40BDC0 + v28) = 0;
            }
            ++v28;
        }
        while(v28 < 0x100);
    }
    else {
        unsigned int v29 = 0;
        do {
            *(unsigned char*)((int)&gvar_40BDC0 + v29) = 0;
        loc_4057E8:
            while(1) {
                ++v29;
                if(v29 >= 0x100) {
                    sub_4041A2((int)v9);
                    return result;
                }
                else if(v29 >= 65 && v29 <= 90) {
                    *(char*)((char*)((int)&gvar_40BCA0 + v29) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v29) + 1) | 0x10;
                    v0 = (unsigned char)((unsigned char)v29 + 32);
                    *(unsigned char*)((int)&gvar_40BDC0 + v29) = v0;
                }
            }
        }
        while(v29 < 97 || v29 > 122);
        *(char*)((char*)((int)&gvar_40BCA0 + v29) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v29) + 1) | 0x20;
        v0 = (unsigned char)((unsigned char)v29 - 32);
        *(unsigned char*)((int)&gvar_40BDC0 + v29) = v0;
        goto loc_4057E8;
    }
    sub_4041A2((int)v9);
    return result;
}

int sub_4057F8(UINT param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    char v5;
    unsigned char v6;
    int result;
    UINT v7 = gvar_40B498;
    int v8 = v2;
    UINT CodePage = param0;
    UINT v9 = v7;
    int v10 = v3;
    gvar_40BBF4 = 0;
    switch(CodePage) {
        case -4: {
            v7 = gvar_40BC64;
            gvar_40BBF4 = 1;
        loc_405856:
            param0 = v7;
            CodePage = v7;
            break;
        }
        case -3: {
            gvar_40BBF4 = 1;
            v7 = GetACP();
            goto loc_405856;
        }
        case -2: {
            gvar_40BBF4 = 1;
            v7 = GetOEMCP();
            goto loc_405856;
        }
    }
    if(gvar_40BDA4 != CodePage) {
        if(CodePage != 0) {
            int v11 = 0;
            unsigned int v12 = 0;
            while(*(unsigned int*)((int)&gvar_40B4E8 + v12) != CodePage) {
                v12 += 48;
                ++v11;
                if(v12 >= 240) {
                    BOOL v13 = GetCPInfo(CodePage, &v4);
                    if(v13 == 1) {
                        v0 = (int)(void*)0x40;
                        int* ptr0 = (int*)&gvar_40BCA0;
                        while(v0 != 0) {
                            *ptr0 = 0;
                            ++ptr0;
                            --v0;
                        }
                        *(char*)ptr0 = 0;
                        gvar_40BDA4 = CodePage;
                        gvar_40BC94 = 0;
                        if(v4 <= 1) {
                            gvar_40BC98 = 0;
                            gvar_40BDB0 = 0;
                            gvar_40BDB4 = 0;
                            gvar_40BDB8 = 0;
                            sub_40566C(v0);
                            sub_4041A2((int)v9);
                            return result;
                        loc_405981:
                            unsigned int v14 = 1;
                            do {
                                *(char*)((char*)((int)&gvar_40BCA0 + v14) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v14) + 1) | 0x8;
                                ++v14;
                            }
                            while(v14 < 0xff);
                            int v15 = CPtoLCID(v10);
                            gvar_40BC94 = v15;
                            gvar_40BC98 = 1;
                        }
                        else if(v6) {
                            char* ptr1 = &v5;
                            while(1) {
                                unsigned int v16 = (unsigned int)*ptr1 | ((unsigned int)((v16 >>> 8) & 0xffffff) << 8);
                                if(*ptr1) {
                                    unsigned int v17 = (unsigned int)*(ptr1 - 1);
                                    v16 = (unsigned int)(unsigned char)v16;
                                    while(v17 <= v16) {
                                        *(char*)((char*)((int)&gvar_40BCA0 + v17) + 1) = *(char*)((char*)((int)&gvar_40BCA0 + v17) + 1) | 0x4;
                                        ++v17;
                                    }
                                    ptr1 += 2;
                                    if(*(ptr1 - 1)) {
                                        continue;
                                    }
                                }
                                break;
                            }
                            goto loc_405981;
                        }
                        else {
                            goto loc_405981;
                        }
                        gvar_40BDB0 = 0;
                        gvar_40BDB4 = 0;
                        gvar_40BDB8 = 0;
                        sub_40566C(v0);
                    }
                    else if(gvar_40BBF4 != 0) {
                        sub_405643();
                        sub_40566C(v0);
                    }
                    sub_4041A2((int)v9);
                    return result;
                }
            }
            unsigned int v18 = 0;
            void* ptr2 = (void*)0x40;
            int* ptr3 = (int*)&gvar_40BCA0;
            while(ptr2 != 0) {
                *ptr3 = 0;
                ++ptr3;
                ptr2 = (void*)((int)ptr2 - 1);
            }
            unsigned int v19 = 0;
            *(char*)ptr3 = 0;
            char* ptr4 = (char*)(v11 * 3 * 16 + &gvar_40B4F8);
            do {
                v18 = (unsigned int)*ptr4 | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
                char* ptr5 = ptr4;
                while((unsigned char)v18) {
                    v11 = (unsigned int)*(ptr5 + 1) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                    if(!*(ptr5 + 1)) {
                        break;
                    }
                    else {
                        v18 = (unsigned int)(unsigned char)v18;
                        unsigned int v20 = (unsigned int)(unsigned char)v11;
                        if(v18 <= v20) {
                            v11 = (unsigned int)*(unsigned char*)((int)&gvar_40B4E0 + v19) | ((unsigned int)((v19 >>> 8) & 0xffffff) << 8);
                            do {
                                *(char*)((char*)((int)&gvar_40BCA0 + v18) + 1) = (unsigned char)v11 | *(char*)((char*)((int)&gvar_40BCA0 + v18) + 1);
                                ++v18;
                            }
                            while(v18 <= v20);
                        }
                        ptr5 += 2;
                        v18 = (unsigned int)*ptr5 | ((unsigned int)((v18 >>> 8) & 0xffffff) << 8);
                    }
                }
                ++v19;
                ptr4 += 8;
            }
            while(v19 < 4);
            gvar_40BDA4 = param0;
            gvar_40BC98 = 1;
            int v21 = CPtoLCID(v10);
            unsigned int* ptr6 = (unsigned int*)(v1 + 4240620);
            gvar_40BDB0 = *ptr6;
            unsigned int* ptr7 = ptr6 + 1;
            gvar_40BDB4 = *ptr7;
            gvar_40BC94 = v21;
            gvar_40BDB8 = *(ptr7 + 1);
            sub_40566C(v0);
            sub_4041A2((int)v9);
            return result;
        }
        sub_405643();
        sub_40566C(v0);
    }
    sub_4041A2((int)v9);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_4059DE() {
    char v0 = gvar_40BFEC ? 0: 1;
    char v1 = gvar_40BFEC >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_40BFEC);
    char v3 = gvar_40BFEC < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_4059E7: &sub_4059F9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4059E7() {
    sub_4057F8(-3);
    gvar_40BFEC = 1;
}

int sub_4059F9() {
    return 0;
}

LPVOID sub_405D3D(unsigned int param0) {
    LPVOID v0 = HeapAlloc(gvar_40BEC0, 0, 320);
    gvar_40BC80 = v0;
    if(!v0) {
        return 0;
    }
    gvar_40BC78 = 0;
    gvar_40BC7C = 0;
    gvar_40BC88 = v0;
    gvar_40BC84 = param0;
    gvar_40BC8C = 16;
    return (LPVOID)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_405D85(int param0) {
    return sub_405DA9(param0);
}

unsigned int sub_405DA9(int param0) {
    unsigned int v0;
    unsigned int result;
    while(result < v0) {
        if((unsigned int)(param0 - *(int*)(result + 12)) < 0x100000) {
            return result;
        }
        result += 20;
    }
    return 0;
}

unsigned int* sub_405DB0(unsigned int* param0, unsigned int* param1) {
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v0;
    unsigned int* result = *(param0 + 4);
    int* ptr2 = (int*)((int)param1 - *(int*)(param0 + 3));
    unsigned int* ptr3 = param1 - 1;
    int* ptr4 = (int*)((int)ptr2 >>> 15);
    unsigned int* ptr5 = (unsigned int*)((int*)((int)(int*)((int)(int*)((int)ptr2 >>> 15) * 516) + (int)result) + 81);
    unsigned int* ptr6 = (unsigned int*)(*ptr3 - 1);
    unsigned int* ptr7 = (unsigned int*)(*ptr3 - 1);
    if(!((unsigned char)ptr6 & 0x1)) {
        int v1 = v0;
        unsigned int* ptr8 = (unsigned int*)((int)ptr6 + (int)ptr3);
        unsigned int v2 = *ptr8;
        unsigned int v3 = *(ptr3 - 1);
        unsigned int v4 = v2;
        param1 = ptr8;
        if(!((unsigned char)v4 & 0x1)) {
            unsigned int* ptr9 = (unsigned int*)((v4 >> 4) - 1);
            if((unsigned int)ptr9 > 63) {
                ptr1 = (unsigned int*)0x3F;
                ptr9 = (unsigned int*)0x3F;
            }
            if(*(int*)(ptr8 + 2) == *(ptr8 + 1)) {
                if((unsigned int)ptr9 < 32) {
                    char* ptr10 = (char*)((int*)((int)result + (int)ptr9) + 1);
                    int v5 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr9 & 0x1f));
                    *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 17) = *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 17) & v5;
                    *ptr10 = *ptr10 + 0xFF;
                    if(!*ptr10) {
                        *param0 = *param0 & v5;
                    }
                }
                else {
                    char* ptr11 = (char*)((int*)((int)result + (int)ptr9) + 1);
                    int v6 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr9 - 8) & 0x1f));
                    *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 49) = *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 49) & v6;
                    *ptr11 = *ptr11 + 0xFF;
                    if(!*ptr11) {
                        *(int*)(param0 + 1) = *(int*)(param0 + 1) & v6;
                    }
                }
                ptr8 = param1;
            }
            ptr6 = (unsigned int*)(v2 + (int)ptr7);
            *(int*)(*(int*)(ptr8 + 2) + 4) = *(int*)(ptr8 + 1);
            *(int*)(*(int*)(param1 + 1) + 8) = *(int*)(param1 + 2);
            ptr7 = ptr6;
        }
        unsigned int* ptr12 = (unsigned int*)((char*)((int)ptr6 >> 4) - 1);
        if((unsigned int)ptr12 > 63) {
            ptr1 = (unsigned int*)0x3F;
            ptr12 = (unsigned int*)0x3F;
        }
        v2 = v3 & 0x1;
        if(!(v3 & 0x1)) {
            ptr1 = (unsigned int*)0x3F;
            param1 = (unsigned int*)((int)ptr3 - v3);
            ptr0 = (unsigned int*)((v3 >> 4) - 1);
            if(ptr0 > (unsigned int*)0x3F) {
                ptr0 = (unsigned int*)0x3F;
            }
            ptr6 = (unsigned int*)((int)ptr6 + v3);
            ptr12 = (unsigned int*)((char*)((int)ptr6 >> 4) - 1);
            ptr7 = ptr6;
            if(ptr12 > (unsigned int*)0x3F) {
                ptr12 = (unsigned int*)0x3F;
            }
            if(ptr12 != ptr0) {
                if(*(int*)(param1 + 2) == *(param1 + 1)) {
                    if((unsigned int)ptr0 < 32) {
                        int v7 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr0 & 0x1f));
                        *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 17) = *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 17) & v7;
                        *(char*)((int*)((int)result + (int)ptr0) + 1) = *(char*)((int*)((int)result + (int)ptr0) + 1) + 0xFF;
                        if(!*(char*)((int*)((int)result + (int)ptr0) + 1)) {
                            *param0 = *param0 & v7;
                        }
                    }
                    else {
                        int v8 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr0 - 8) & 0x1f));
                        *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 49) = *((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 49) & v8;
                        *(char*)((int*)((int)result + (int)ptr0) + 1) = *(char*)((int*)((int)result + (int)ptr0) + 1) + 0xFF;
                        if(!*(char*)((int*)((int)result + (int)ptr0) + 1)) {
                            *(int*)(param0 + 1) = *(int*)(param0 + 1) & v8;
                        }
                    }
                }
                *(int*)(*(int*)(param1 + 2) + 4) = *(int*)(param1 + 1);
                *(unsigned int*)(*(int*)(param1 + 1) + 8) = *(param1 + 2);
            }
            ptr3 = param1;
        }
        else {
            ptr0 = param0;
        }
        if(v2 || ptr12 != ptr0) {
            int* ptr13 = (int*)((int)(int*)((int)ptr12 * 8) + (int)ptr5);
            int v9 = *(ptr13 + 1);
            *(ptr3 + 2) = ptr13;
            *(int*)(ptr3 + 1) = v9;
            *(unsigned int*)(ptr13 + 1) = ptr3;
            *(unsigned int*)(*(int*)(ptr3 + 1) + 8) = ptr3;
            ptr6 = *(ptr3 + 1);
            if(*(int*)(ptr3 + 2) == ptr6) {
                ptr6 = (unsigned int)*(char*)((int*)((int)result + (int)ptr12) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xffffff) << 8);
                (unsigned int*)((param1 >>> 24) & 0xFF) = *(char*)((int*)((int)result + (int)ptr12) + 1);
                *(char*)((int*)((int)result + (int)ptr12) + 1) = (unsigned char)ptr6 + 1;
                if((unsigned int)ptr12 < 32) {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr12 & 0x1f)) | *param0);
                    }
                    unsigned int* ptr14 = (unsigned int*)((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 17);
                    *ptr14 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr12 & 0x1f)) | *ptr14);
                }
                else {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)(ptr12 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    unsigned int* ptr15 = (unsigned int*)((int*)((int)(int*)((int)ptr4 * 4) + (int)result) + 49);
                    *ptr15 = (int*)((int)(unsigned int*)(0x80000000 >>> (int)(int*)((int)(ptr12 - 8) & 0x1f)) | *ptr15);
                }
            }
        }
        unsigned int* ptr16 = ptr7;
        *ptr3 = ptr7;
        *(unsigned int*)((int*)((int)ptr16 + (int)ptr3) - 1) = ptr16;
        result = ptr5;
        *result = *result - 1;
        if(!*result) {
            unsigned int v10 = gvar_40BC78;
            if(v10) {
                unsigned int v11 = gvar_40BC90;
                ptr1 = (unsigned int*)0x4000;
                VirtualFree((LPVOID)(v11 * 0x8000 + *(int*)(v10 + 12)), 0x8000, 0x4000);
                unsigned int v12 = gvar_40BC78;
                *(unsigned int*)(v12 + 8) = (int*)((int)(unsigned int*)(0x80000000 >>> (gvar_40BC90 & 0x1f)) | *(int*)(v12 + 8));
                *(int*)(gvar_40BC90 * 4 + *(int*)(gvar_40BC78 + 16) + 196) = 0;
                int v13 = *(int*)(gvar_40BC78 + 16);
                *(char*)(v13 + 67) = *(char*)(v13 + 67) + 0xFF;
                unsigned int v14 = gvar_40BC78;
                if(!*(char*)((char*)*(unsigned int*)(v14 + 16) + 67)) {
                    *(int*)(v14 + 4) = *(int*)(v14 + 4) & 0xfffffffe;
                    v14 = gvar_40BC78;
                }
                if(*(int*)(v14 + 8) == -1) {
                    ptr1 = (unsigned int*)0x8000;
                    int v15 = 0;
                    VirtualFree(*(LPVOID*)(v14 + 12), 0, 0x8000);
                    HeapFree(gvar_40BEC0, 0, *(LPVOID*)(gvar_40BC78 + 16));
                    int* ptr17 = gvar_40BC78;
                    unk_lib_sub(ptr17, ptr17 + 5, (int*)((int)(int*)((unsigned int)(gvar_40BC7C * 5 * 4) - (int)ptr17) + gvar_40BC80) - 5);
                    --gvar_40BC7C;
                    if(gvar_40BC78 < (unsigned int)param0) {
                        param0 -= 5;
                    }
                    gvar_40BC88 = gvar_40BC80;
                }
            }
            result = param0;
            gvar_40BC78 = param0;
            gvar_40BC90 = ptr4;
        }
    }
    return result;
}

int* sub_4060C8() {
    int* result;
    int* result;
    unsigned int v0 = gvar_40BC7C;
    unsigned int v1 = gvar_40BC8C;
    if(v0 == v1) {
        LPVOID v2 = HeapReAlloc(gvar_40BEC0, 0, gvar_40BC80, (SIZE_T)((v1 * 5 + 80) * 4));
        if(v2 == 0) {
            return NULL;
        }
        gvar_40BC8C += 16;
        gvar_40BC80 = v2;
        v0 = gvar_40BC7C;
    }
    int* ptr0 = (int*)(v0 * 20 + gvar_40BC80);
    LPVOID v3 = HeapAlloc(gvar_40BEC0, 8, 0x41c4);
    *(LPVOID*)(ptr0 + 4) = v3;
    if(v3 != 0) {
        LPVOID v4 = VirtualAlloc(NULL, 0x100000, 0x2000, 4);
        *(LPVOID*)(ptr0 + 3) = v4;
        if(v4 != 0) {
            *(ptr0 + 2) = -1;
            *ptr0 = 0;
            *(ptr0 + 1) = 0;
            ++gvar_40BC7C;
            **(unsigned int*)(ptr0 + 4) = -1;
            result = ptr0;
        }
        else {
            HeapFree(gvar_40BEC0, 0, *(LPVOID*)(ptr0 + 4));
            return NULL;
        }
    }
    else {
        result = NULL;
    }
    return result;
}

int* sub_40617F(int param0) {
    int* result;
    int v0;
    int* ptr0;
    int* ptr1 = ptr0;
    int* ptr2 = ptr0;
    int v1 = param0;
    int v2 = *(int*)(v1 + 8);
    int v3 = v0;
    int v4 = *(int*)(v1 + 16);
    int* i;
    for(i = NULL; v2 >= 0; i = (int*)((char*)i + 1)) {
        v2 *= 2;
    }
    int* ptr3 = (int*)((int)(int*)((int)i * 516) + v4) + 81;
    ptr2 = (int*)((int)(int*)((int)i * 516) + v4) + 81;
    int counter = 63;
    do {
        *(unsigned int*)(ptr3 + 2) = ptr3;
        *(unsigned int*)(ptr3 + 1) = ptr3;
        ptr3 += 2;
        --counter;
    }
    while(counter);
    int v5 = 4;
    int v6 = 0x1000;
    LPVOID lpAddress = (LPVOID)((int)(int*)((int)i * 0x8000) + *(int*)(v1 + 12));
    LPVOID v7 = VirtualAlloc(lpAddress, 0x8000, 0x1000, 4);
    if(!v7) {
        result = (int*)0xFFFFFFFF;
    }
    else {
        int* ptr4 = (int*)((int)lpAddress + 0x7000);
        ptr1 = (int*)((int)lpAddress + 0x7000);
        if((unsigned int)ptr4 >= (unsigned int)lpAddress) {
            unsigned int* ptr5 = (unsigned int*)((int)lpAddress + 16);
            int* ptr6 = (int*)((char*)((int)(int*)((int)ptr4 - (int)lpAddress) >>> 12) + 1);
            do {
                *(int*)(ptr5 - 2) = -1;
                *(int*)(ptr5 + 1019) = -1;
                *ptr5 = (int*)(ptr5 + 0x3ff);
                *(int*)(ptr5 - 1) = 0xff0;
                *(ptr5 + 1) = (int*)(ptr5 - 1025);
                *(int*)(ptr5 + 1018) = 0xff0;
                ptr5 += 0x400;
                ptr6 = (int*)((char*)ptr6 - 1);
            }
            while(ptr6);
            ptr4 = ptr1;
        }
        int* ptr7 = ptr2 + 126;
        *(unsigned int*)(ptr7 + 1) = (int*)((int)lpAddress + 12);
        *(unsigned int*)((int)lpAddress + 20) = ptr7;
        *(unsigned int*)(ptr7 + 2) = ptr4 + 3;
        *(unsigned int*)(ptr4 + 4) = ptr7;
        *((int*)((int)(int*)((int)i * 4) + v4) + 17) = 0;
        *((int*)((int)(int*)((int)i * 4) + v4) + 49) = 1;
        char v8 = *(char*)(v4 + 67) ? 0: 1;
        int v9 = param0;
        *(char*)(v4 + 67) = *(char*)(v4 + 67) + 1;
        if(v8) {
            *(int*)(v9 + 4) = *(int*)(v9 + 4) | 0x1;
        }
        *(int*)(v9 + 8) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)i & 0x1f)) & *(int*)(v9 + 8);
        result = i;
    }
    return result;
}

int sub_406285(unsigned int* param0, unsigned int* param1, int* param2) {
    int result;
    int* ptr0;
    unsigned int* ptr1;
    int* ptr2;
    unsigned int* ptr3;
    char v0;
    int v1;
    unsigned int* ptr4 = param0;
    int* ptr5 = *(ptr4 + 4);
    int v2 = v1;
    int* ptr6 = param2;
    unsigned int* ptr7 = param1;
    unsigned int* ptr8 = param1;
    int* ptr9 = (int*)((int)ptr8 - *(int*)(ptr4 + 3));
    int* ptr10 = (int*)((char*)ptr6 + 23);
    unsigned int* ptr11 = (unsigned int*)((int)ptr9 >>> 15);
    int* ptr12 = (int*)((int)(int*)((int)(unsigned int*)((int)ptr9 >>> 15) * 516) + (int)ptr5) + 81;
    int v3 = *(int*)(ptr7 - 1);
    int* ptr13 = (int*)((int)ptr10 & 0xfffffff0);
    int* ptr14 = (int*)(v3 - 1);
    char v4 = ptr14 == ptr13;
    char v5 = (int)ptr14 > (int)ptr13;
    char v6 = (int)(int*)((int)(int*)((int)(int*)((int)ptr13 - (int)ptr14) ^ (int)ptr13) & (int)(int*)((int)ptr14 ^ (int)ptr13)) < 0;
    int* ptr15 = (int*)((int)ptr14 + (int)ptr7) - 1;
    int v7 = *ptr15;
    param2 = ptr14;
    *(int*)&v0 = v7;
    if((v4 || v5 != v6)) {
        if(v5 != v6) {
            unsigned int* ptr16 = param1;
            param2 = (int*)((int)param2 - (int)ptr13);
            *(ptr16 - 1) = (int*)((char*)ptr13 + 1);
            unsigned int* ptr17 = (unsigned int*)((int*)((int)ptr16 + (int)ptr13) - 1);
            int* ptr18 = (int*)((char*)((int)param2 >> 4) - 1);
            param1 = ptr17;
            *(ptr17 - 1) = (int*)((char*)ptr13 + 1);
            if((unsigned int)ptr18 > 63) {
                ptr2 = (int*)0x3F;
                ptr18 = (int*)0x3F;
            }
            if(!(v0 & 0x1)) {
                int* ptr19 = (int*)((*(int*)&v0 >> 4) - 1);
                if((unsigned int)ptr19 > 63) {
                    ptr2 = (int*)0x3F;
                    ptr19 = (int*)0x3F;
                }
                if(*(ptr15 + 2) == *(unsigned int*)(ptr15 + 1)) {
                    if((unsigned int)ptr19 < 32) {
                        char* ptr20 = (char*)((int*)((int)ptr5 + (int)ptr19) + 1);
                        int v8 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr19 & 0x1f));
                        *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 17) = *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 17) & v8;
                        *ptr20 = *ptr20 + 0xFF;
                        if(!*ptr20) {
                            *param0 = *param0 & v8;
                        }
                    }
                    else {
                        char* ptr21 = (char*)((int*)((int)ptr5 + (int)ptr19) + 1);
                        int v9 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr19 - 8) & 0x1f));
                        *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 49) = *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 49) & v9;
                        *ptr21 = *ptr21 + 0xFF;
                        if(!*ptr21) {
                            *(int*)(param0 + 1) = *(int*)(param0 + 1) & v9;
                        }
                    }
                    ptr17 = param1;
                }
                *(int*)(*(ptr15 + 2) + 4) = *(ptr15 + 1);
                *(int*)(*(ptr15 + 1) + 8) = *(ptr15 + 2);
                int* ptr22 = (int*)(*(int*)&v0 + (int)param2);
                param2 = (int*)(*(int*)&v0 + (int)param2);
                ptr18 = (int*)((char*)((int)ptr22 >> 4) - 1);
                if((unsigned int)ptr18 > 63) {
                    ptr2 = (int*)0x3F;
                    ptr18 = (int*)0x3F;
                }
            }
            int* ptr23 = (int*)((int)(int*)((int)ptr18 * 8) + (int)ptr12);
            int v10 = *(ptr23 + 1);
            *(ptr17 + 2) = ptr23;
            *(int*)(ptr17 + 1) = v10;
            *(unsigned int*)(ptr23 + 1) = ptr17;
            *(unsigned int*)(*(int*)(ptr17 + 1) + 8) = ptr17;
            ptr14 = *(ptr17 + 1);
            if(*(int*)(ptr17 + 2) == ptr14) {
                ptr14 = (unsigned int)*(char*)((int*)((int)ptr5 + (int)ptr18) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr14 >>> 8) & 0xffffff) << 8);
                (unsigned int*)((param1 >>> 24) & 0xFF) = *(char*)((int*)((int)ptr5 + (int)ptr18) + 1);
                *(char*)((int*)((int)ptr5 + (int)ptr18) + 1) = (unsigned char)ptr14 + 1;
                if((unsigned int)ptr18 < 32) {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr18 & 0x1f)) | *param0);
                    }
                    ptr3 = (unsigned int*)((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 17);
                    ptr14 = ptr18;
                }
                else {
                    if(!(unsigned char)(int*)((int)param1 >>> 24)) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr18 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    ptr3 = (unsigned int*)((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 49);
                    ptr14 = ptr18 - 8;
                }
                *ptr3 = (int*)((int)(unsigned int*)(0x80000000 >>> (int)(int*)((int)ptr14 & 0x1f)) | *ptr3);
            }
            ptr5 = param2;
            *ptr17 = param2;
            *(unsigned int*)((int*)((int)ptr5 + (int)ptr17) - 1) = ptr5;
        }
    loc_40655E:
        result = 1;
    }
    else if(!((unsigned char)v7 & 0x1) && (int)(int*)((int)ptr14 + v7) >= (int)ptr13) {
        int* ptr24 = (int*)((*(int*)&v0 >> 4) - 1);
        int* ptr25 = (int*)((*(int*)&v0 >> 4) - 1);
        if((unsigned int)ptr24 > 63) {
            ptr2 = (int*)0x3F;
            ptr24 = (int*)0x3F;
            ptr25 = (int*)0x3F;
        }
        if(*(ptr15 + 2) == *(unsigned int*)(ptr15 + 1)) {
            if((unsigned int)ptr24 < 32) {
                char* ptr26 = (char*)((int*)((int)ptr5 + (int)ptr25) + 1);
                int v11 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr24 & 0x1f));
                *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 17) = *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 17) & v11;
                *ptr26 = *ptr26 + 0xFF;
                if(!*ptr26) {
                    *param0 = *param0 & v11;
                }
            }
            else {
                char* ptr27 = (char*)((int*)((int)ptr5 + (int)ptr25) + 1);
                int v12 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr24 - 8) & 0x1f));
                *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 49) = *((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 49) & v12;
                *ptr27 = *ptr27 + 0xFF;
                if(!*ptr27) {
                    *(int*)(param0 + 1) = *(int*)(param0 + 1) & v12;
                }
            }
        }
        *(int*)(*(ptr15 + 2) + 4) = *(ptr15 + 1);
        *(int*)(*(ptr15 + 1) + 8) = *(ptr15 + 2);
        *(int**)&v0 = (int*)((int)(int*)((int)param2 - (int)ptr13) + *(int*)&v0);
        if(!(*(int*)&v0 ? 0: 1) && *(int*)&v0 >= 0) {
            int* ptr28 = (int*)((*(int*)&v0 >> 4) - 1);
            int* ptr29 = (int*)((int)ptr13 + (int)param1) - 1;
            if((unsigned int)ptr28 > 63) {
                ptr2 = (int*)0x3F;
                ptr28 = (int*)0x3F;
            }
            param2 = (int*)((int)(int*)((int)ptr28 * 8) + (int)ptr12);
            *(ptr29 + 1) = *((int*)((int)(int*)((int)ptr28 * 8) + (int)ptr12) + 1);
            int* ptr30 = param2;
            *(unsigned int*)(ptr29 + 2) = param2;
            *(unsigned int*)(ptr30 + 1) = ptr29;
            *(unsigned int*)(*(ptr29 + 1) + 8) = ptr29;
            if(*(ptr29 + 2) == *(unsigned int*)(ptr29 + 1)) {
                ptr29 = (unsigned int)*(char*)((int*)((int)ptr5 + (int)ptr28) + 1) | ((unsigned int)(int*)((int)(int*)((int)ptr29 >>> 8) & 0xffffff) << 8);
                (int*)((param2 >>> 24) & 0xFF) = *(char*)((int*)((int)ptr5 + (int)ptr28) + 1);
                *(char*)((int*)((int)ptr5 + (int)ptr28) + 1) = (unsigned char)ptr29 + 1;
                if((unsigned int)ptr28 < 32) {
                    if(!(unsigned char)(int*)((int)param2 >>> 24)) {
                        *param0 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr28 & 0x1f)) | *param0);
                    }
                    ptr1 = (unsigned int*)((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 17);
                    ptr0 = ptr28;
                }
                else {
                    if(!(unsigned char)(int*)((int)param2 >>> 24)) {
                        *(param0 + 1) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(ptr28 - 8) & 0x1f)) | *(int*)(param0 + 1));
                    }
                    ptr1 = (unsigned int*)((int*)((int)(int*)((int)ptr11 * 4) + (int)ptr5) + 49);
                    ptr0 = ptr28 - 8;
                }
                *ptr1 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr0 & 0x1f)) | *ptr1);
            }
            ptr11 = param1;
            ptr14 = *(int**)&v0;
            unsigned int* ptr31 = (unsigned int*)((int*)((int)ptr11 + (int)ptr13) - 1);
            *ptr31 = ptr14;
            *(unsigned int*)((int*)((int)ptr31 + (int)ptr14) - 1) = ptr14;
        }
        else {
            ptr11 = param1;
        }
        *(ptr11 - 1) = (int*)((char*)ptr13 + 1);
        *(unsigned int*)((int*)((int)ptr11 + (int)ptr13) - 2) = (int*)((char*)ptr13 + 1);
        goto loc_40655E;
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_406564(int i) {
    int v0;
    int* result;
    unsigned int v1;
    int* ptr0;
    int v2;
    int v3;
    int v4 = i;
    unsigned int v5 = gvar_40BC7C;
    int v6 = gvar_40BC80;
    unsigned int v7 = (unsigned int)((v4 + 23) & 0xfffffff0);
    int v8 = v3;
    unsigned int v9 = v7;
    int v10 = v7 >> 4;
    int v11 = v5 * 5;
    unsigned int v12 = (unsigned int)(v10 - 1);
    char v13 = (int)v12 < 32;
    char v14 = (((v12 - 32) ^ v12) & (v12 ^ 0x20)) < 0;
    unsigned int* ptr1 = (unsigned int*)(v11 * 4 + v6);
    unsigned int* ptr2 = (unsigned int*)(v11 * 4 + v6);
    if(v13 != v14) {
        ptr0 = (int*)(-1 >>> (v12 & 0x1f));
        v1 = 0xffffffff;
    }
    else {
        int v15 = v12 - 32;
        ptr0 = NULL;
        v1 = (unsigned int)(-1 >>> (v15 & 0x1f));
    }
    int v16 = gvar_40BC88;
    int v17 = gvar_40BC88;
    int* ptr3 = ptr0;
    char v18 = (unsigned int)v17 < (unsigned int)ptr1;
    for(i = v17; v18; i = v17) {
        int v19 = *(int*)(v17 + 4);
        int v20 = *(int*)v17;
        int v21 = v19 & v1;
        ptr1 = (unsigned int*)((int)ptr0 & v20);
        if((int*)(v21 | (int)ptr1)) {
            break;
        }
        else {
            v17 += 20;
            v18 = (unsigned int)v17 < (unsigned int)ptr2;
        }
    }
    if(v17 == ptr2) {
        v17 = v6;
        while(1) {
            char v22 = (unsigned int)v16 > (unsigned int)v17;
            i = v17;
            if(!v22) {
                break;
            }
            else {
                int v23 = *(int*)(v17 + 4);
                int v24 = *(int*)v17;
                int v25 = v23 & v1;
                ptr1 = (unsigned int*)((int)ptr0 & v24);
                if((int*)(v25 | (int)ptr1)) {
                    break;
                }
                else {
                    v17 += 20;
                }
            }
        }
        if(v16 != v17) {
            goto loc_4065FE;
        }
        else {
            while((unsigned int)v17 < (unsigned int)ptr2 && !*(int*)(v17 + 8)) {
                v17 += 20;
                i = v17;
            }
            if(v17 == ptr2) {
                v17 = v6;
                for(i = v17; (unsigned int)v16 > (unsigned int)v17 && !*(int*)(v17 + 8); i = v17) {
                    v17 += 20;
                }
                if(v16 == v17) {
                    v17 = sub_4060C8();
                    i = v17;
                    if(!v17) {
                        goto loc_4066DA;
                    }
                }
            }
            int* ptr4 = sub_40617F(v17);
            **(int***)(v17 + 16) = ptr4;
            if(*(int*)*(int*)(v17 + 16) != -1) {
                goto loc_4065FE;
            }
            else {
            loc_4066DA:
                result = NULL;
            }
        }
    }
    else {
    loc_4065FE:
        gvar_40BC88 = v17;
        unsigned int* ptr5 = *(unsigned int*)(v17 + 16);
        unsigned int* ptr6 = *ptr5;
        ptr2 = *ptr5;
        if(ptr6 == -1 || !(int*)((int)(int*)(*((int*)((int)(int*)((int)ptr6 * 4) + (int)ptr5) + 17) & (int)ptr0) | (*((int*)((int)(int*)((int)ptr6 * 4) + (int)ptr5) + 49) & v1))) {
            int v26 = *(int*)(ptr5 + 49) & v1;
            ptr2 = NULL;
            int* ptr7 = (int*)(ptr5 + 17);
            ptr0 = ptr3;
            if(!(int*)((int)(int*)(*ptr7 & (int)ptr3) | v26)) {
                do {
                    v2 = *(ptr7 + 33) & v1;
                    ptr2 = (unsigned int*)((char*)ptr2 + 1);
                    ++ptr7;
                }
                while(!(int*)((int)(int*)(*ptr7 & (int)ptr0) | v2));
            }
            ptr6 = ptr2;
        }
        ptr3 = (int*)((int)(int*)((int)ptr6 * 516) + (int)ptr5) + 81;
        void* ptr8 = NULL;
        int* ptr9 = (int*)(*((int*)((int)(int*)((int)ptr6 * 4) + (int)ptr5) + 17) & (int)ptr0);
        if(!ptr9) {
            ptr9 = (int*)(*((int*)((int)(int*)((int)ptr6 * 4) + (int)ptr5) + 49) & v1);
            ptr8 = (void*)0x20;
        }
        while((int)ptr9 >= 0) {
            ptr9 = (int*)((int)ptr9 * 2);
            ptr8 = (void*)((int)ptr8 + 1);
        }
        unsigned int* ptr10 = *(unsigned int*)((int*)((int)(int*)((int)ptr8 * 8) + (int)ptr3) + 1);
        unsigned int v27 = *ptr10 - v9;
        void* ptr11 = (void*)((v27 >> 4) - 1);
        v1 = v27;
        if((int)ptr11 > 63) {
            ptr11 = (void*)0x3F;
        }
        if(ptr11 != ptr8) {
            if(*(int*)(ptr10 + 2) == *(ptr10 + 1)) {
                if((int)ptr8 < 32) {
                    char* ptr12 = (char*)((int*)((int)ptr5 + (int)ptr8) + 1);
                    v0 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr8 & 0x1f));
                    *((int*)((int)(int*)((int)ptr2 * 4) + (int)ptr5) + 17) = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)ptr8 & 0x1f)) & *((int*)((int)(int*)((int)ptr2 * 4) + (int)ptr5) + 17);
                    *ptr12 = *ptr12 + 0xFF;
                    if(*ptr12) {
                        goto loc_40676E;
                    }
                    else {
                        v17 = i;
                        *(int*)v17 = *(int*)v17 & v0;
                    }
                }
                else {
                    int* ptr13 = (int*)((int)(int*)((int)ptr2 * 4) + (int)ptr5) + 49;
                    char* ptr14 = (char*)((int*)((int)ptr5 + (int)ptr8) + 1);
                    int v28 = (int*)~(int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr8 - 32) & 0x1f));
                    *ptr13 = *ptr13 & v28;
                    *ptr14 = *ptr14 + 0xFF;
                    char v29 = *ptr14 ? 0: 1;
                    v0 = v28;
                    if(v29) {
                        v17 = i;
                        *(int*)(v17 + 4) = *(int*)(v17 + 4) & v0;
                    }
                    else {
                    loc_40676E:
                        v17 = i;
                    }
                }
            }
            char v30 = v1 ? 0: 1;
            *(int*)(*(int*)(ptr10 + 2) + 4) = *(int*)(ptr10 + 1);
            *(int*)(*(int*)(ptr10 + 1) + 8) = *(int*)(ptr10 + 2);
            if(!v30) {
                int* ptr15 = (int*)((int)(int*)((int)ptr11 * 8) + (int)ptr3);
                int v31 = *(ptr15 + 1);
                *(ptr10 + 2) = ptr15;
                *(int*)(ptr10 + 1) = v31;
                *(unsigned int*)(ptr15 + 1) = ptr10;
                *(unsigned int*)(*(int*)(ptr10 + 1) + 8) = ptr10;
                unsigned int v32 = *(ptr10 + 1);
                if(*(int*)(ptr10 + 2) == v32) {
                    v32 = (unsigned int)*(char*)((int*)((int)ptr5 + (int)ptr11) + 1) | ((unsigned int)((v32 >>> 8) & 0xffffff) << 8);
                    (i >>> 24) & 0xFF = *(char*)((int*)((int)ptr5 + (int)ptr11) + 1);
                    *(char*)((int*)((int)ptr5 + (int)ptr11) + 1) = (unsigned char)v32 + 1;
                    if((int)ptr11 < 32) {
                        if(!(unsigned char)(i >>> 24)) {
                            *(int**)v17 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr11 & 0x1f)) | *(int*)v17);
                        }
                        *(unsigned int*)((int*)((int)(int*)((int)ptr2 * 4) + (int)ptr5) + 17) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)ptr11 & 0x1f)) | *((int*)((int)(int*)((int)ptr2 * 4) + (int)ptr5) + 17));
                    }
                    else {
                        if(!(unsigned char)(i >>> 24)) {
                            *(unsigned int*)(v17 + 4) = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr11 - 32) & 0x1f)) | *(int*)(v17 + 4));
                        }
                        unsigned int* ptr16 = (unsigned int*)((int*)((int)(int*)((int)ptr2 * 4) + (int)ptr5) + 49);
                        *ptr16 = (int*)((int)(int*)(0x80000000 >>> (int)(int*)((int)(int*)((int)ptr11 - 32) & 0x1f)) | *ptr16);
                    }
                }
                v27 = v1;
                goto loc_406810;
            }
            else {
                v27 = v1;
            }
        }
        else {
        loc_406810:
            if(v27) {
                *ptr10 = v27;
                *(unsigned int*)((int*)(v27 + (int)ptr10) - 1) = v27;
            }
        }
        unsigned int v33 = v9;
        int* ptr17 = (int*)(v27 + (int)ptr10);
        *ptr17 = v33 + 1;
        *((int*)((int)ptr17 + v33) - 1) = v33 + 1;
        int v34 = *ptr3;
        *ptr3 = v34 + 1;
        if(!v34 && gvar_40BC78 == v17 && gvar_40BC90 == ptr2) {
            gvar_40BC78 = 0;
        }
        *ptr5 = ptr2;
        result = ptr17 + 1;
    }
    return result;
}

int sub_406880(int param0, int param1, int param2, int* param3) {
    int result = 1;
    if((*(int*)(param0 + 4) & 0x6)) {
        *param3 = param1;
        result = 3;
    }
    return result;
}

int sub_4068A2(int param0, unsigned int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &sub_406880;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    while(1) {
        result = param0;
        int v4 = *(int*)(result + 8);
        unsigned int v5 = *(unsigned int*)(result + 12);
        if(v5 == -1 || v5 == param1) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(result + 12) = v6;
            if(!*(int*)(v5 * 12 + v4 + 4)) {
                sub_406936(v6, 0x101);
                *(int*)(v5 * 12 + v4 + 8)();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

unsigned int sub_406936(int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_40B5E8 = *(unsigned int*)(v0 + 8);
    gvar_40B5E4 = result;
    gvar_40B5EC = v0;
    return result;
}

int sub_40694E(LONG param0) {
    int result;
    int result;
    char v0;
    unsigned short* ptr0;
    int v1;
    char v2;
    unsigned int v3;
    int v4 = v1;
    LONG v5 = param0;
    LPCVOID lpAddress = *(LPCVOID*)(v5 + 8);
    if(!((unsigned char)lpAddress & 0x3)) {
        param0 = *(LONG*)(__FS_BASE + (int)(LONG*)0x18);
        unsigned short* ptr1 = *(unsigned int*)(param0 + 8);
        unsigned short* ptr2 = *(unsigned int*)(param0 + 8);
        if((unsigned int)ptr1 <= (unsigned int)lpAddress && *(unsigned int*)(param0 + 4) > (unsigned int)lpAddress) {
            result = 0;
        }
        else {
            unsigned int v6 = *(unsigned int*)(v5 + 12);
            if(v6 != -1) {
                int* ptr3 = NULL;
                param0 = 0;
                LPCVOID v7 = lpAddress;
                do {
                    ptr1 = *(unsigned short**)v7;
                    if(ptr1 != -1 && (unsigned int)ptr1 >= (unsigned int)ptr3) {
                        return 0;
                    }
                    if(*(int*)((int)v7 + 4)) {
                        ++param0;
                    }
                    ptr3 = (int*)((char*)ptr3 + 1);
                    v7 = (LPCVOID)((int)v7 + 12);
                }
                while((unsigned int)ptr3 <= v6);
                if(param0) {
                    v7 = *(LPCVOID*)(v5 - 8);
                    if((unsigned int)v7 < (unsigned int)ptr2 || (unsigned int)v7 >= (unsigned int)v5) {
                        return 0;
                    }
                }
                LONG v8 = gvar_40BBF8;
                int* ptr4 = (int*)((int)lpAddress & 0xfffff000);
                unsigned int v9 = 0;
                if(v8 <= 0) {
                loc_406A01:
                    SIZE_T v10 = VirtualQuery(lpAddress, &v2, 28);
                    if(!v10 || v3 != 0x1000000) {
                        return -1;
                    }
                    if((v0 & 0xcc)) {
                        ptr1 = ptr0;
                        if(*ptr1 != 23117) {
                            return -1;
                        }
                        v10 = (SIZE_T)(*(int*)(ptr1 + 30) + (int)ptr1);
                        if(*(int*)v10 != 0x4550 || *(short*)(v10 + 24) != 267) {
                            return -1;
                        }
                        int* ptr5 = (int*)((int)lpAddress - (int)ptr1);
                        ptr1 = (unsigned short*)((unsigned int)*(short*)(v10 + 20) + v10 + 24);
                        if(*(unsigned short*)(v10 + 6) < 0 || (*(short*)(v10 + 6) ? 0: 1)) {
                            return -1;
                        }
                        v7 = *(LPCVOID*)(ptr1 + 6);
                        if((unsigned int)v7 <= (unsigned int)ptr5 && (int*)(*(int*)(ptr1 + 4) + (int)v7) > ptr5 && (*(char*)((char*)ptr1 + 39) & 0x80)) {
                            return 0;
                        }
                    }
                    v8 = InterlockedExchange((LONG*)0x40BC40, 1);
                    if(!v8) {
                        void* ptr6 = gvar_40BBF8;
                        void* ptr7 = gvar_40BBF8;
                        if((int)ptr6 > 0) {
                            unsigned int* ptr8 = (unsigned int*)((int*)((int)ptr6 * 4) + 0x102eff);
                            while(*ptr8 != ptr4) {
                                ptr7 = (void*)((int)ptr7 - 1);
                                --ptr8;
                                if((int)ptr7 <= 0) {
                                    break;
                                }
                            }
                        }
                        if(!ptr7) {
                            void* ptr9 = (int)ptr6 <= (int)(void*)0xF ? ptr6: (void*)0xF;
                            unsigned int v11 = 0;
                            if((int)ptr9 >= 0) {
                                do {
                                    unsigned int* ptr10 = (unsigned int*)(v11 * 4 + &gvar_40BC00);
                                    int* ptr11 = *ptr10;
                                    ++v11;
                                    *ptr10 = ptr4;
                                    ptr4 = ptr11;
                                }
                                while((int)v11 <= (int)ptr9);
                            }
                            if((int)ptr6 < 16) {
                                gvar_40BBF8 = (int*)((int)ptr6 + 1);
                            }
                        }
                        InterlockedExchange((LONG*)0x40BC40, 0);
                    }
                    return 1;
                }
                while(*(unsigned int*)(v9 * 4 + (int)&gvar_40BC00) != ptr4) {
                    ++v9;
                    if(v8 <= (int)v9) {
                        goto loc_406A01;
                    }
                }
                if((int)v9 > 0) {
                    v8 = InterlockedExchange((LONG*)0x40BC40, 1);
                    if(!v8) {
                        if(*(unsigned int*)(v9 * 4 + (int)&gvar_40BC00) != ptr4) {
                            unsigned int v12 = gvar_40BBF8;
                            v9 = v12 - 1;
                            if(v9 < 0x80000000) {
                                while(*(unsigned int*)(v9 * 4 + (int)&gvar_40BC00) != ptr4) {
                                    --v9;
                                    if(v9 >= 0x80000000) {
                                        break;
                                    }
                                }
                                char v13 = v9 ? 0: 1;
                                if(v9 >= 0x80000000) {
                                    goto loc_406B3A;
                                }
                                else if(!v13) {
                                    goto loc_406B49;
                                }
                            }
                            else {
                            loc_406B3A:
                                if((int)v12 < 16) {
                                    ++v12;
                                    gvar_40BBF8 = v12;
                                }
                                v9 = v12 - 1;
                                goto loc_406B49;
                            }
                        }
                        else {
                        loc_406B49:
                            unsigned int v14 = 0;
                            if(v9 < 0x80000000) {
                                do {
                                    unsigned int* ptr12 = (unsigned int*)(v14 * 4 + &gvar_40BC00);
                                    int* ptr13 = *ptr12;
                                    ++v14;
                                    *ptr12 = ptr4;
                                    ptr4 = ptr13;
                                }
                                while((int)v14 <= (int)v9);
                            }
                        }
                        InterlockedExchange((LONG*)0x40BC40, 0);
                    }
                }
            }
            result = 1;
        }
    }
    else {
        result = 0;
    }
    return result;
}

int sub_406B77() {
    unsigned int v0 = gvar_40BC44;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_406B8F: &sub_406B80;
}

int sub_406B80(int param0) {
    int v0;
    v0(param0);
    return 1;
}

int sub_406B8F() {
    return 0;
}

int sub_406B92(unsigned int param0, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite1) {
    LPCVOID v0;
    LPDWORD v1;
    unsigned int v2;
    int v3;
    char v4;
    int result;
    int* ptr0 = (int*)param0;
    char v5 = gvar_40BEC8 > (unsigned int)ptr0;
    unsigned int v6 = gvar_40B498;
    int v7 = v3;
    unsigned int v8 = v6;
    if(v5) {
        unsigned int* ptr1 = (unsigned int*)((int*)((int)(int*)((int)ptr0 >> 5) * 4) + 1060792);
        v6 = *ptr1;
        int* ptr2 = (int*)((int)(int*)((int)ptr0 & 0x1f) * 8);
        v6 = (unsigned int)*(char*)((int*)(v6 + (int)ptr2) + 1) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
        unsigned int* ptr3 = ptr1;
        if(!((unsigned char)v6 & 0x1)) {
            gvar_40BA54 = 0;
            gvar_40BA50 = 9;
            sub_4041A2((int)v8);
            return result;
        }
        unsigned int v9 = 0;
        unsigned int v10 = 0;
        unsigned int v11 = 0;
        if(nNumberOfBytesToWrite1 != 0) {
            if(((unsigned char)v6 & 0x20)) {
                sub_4082D7(ptr0, 0, 0, 2);
            }
            unsigned int* ptr4 = (unsigned int*)(*ptr1 + (int)ptr2);
            if((*(char*)(ptr4 + 1) & 0x80)) {
                LPCVOID v12 = lpBuffer;
                param0 = 0;
                if(nNumberOfBytesToWrite1 <= 0) {
                    goto loc_406D30;
                }
                else {
                    do {
                        int* ptr5 = (int*)((int)v12 - (int)lpBuffer);
                        LPCVOID v13 = &v4;
                        while((unsigned int)ptr5 < nNumberOfBytesToWrite1) {
                            LPCVOID v14 = v12;
                            v12 = (LPCVOID)((int)v12 + 1);
                            v14 = (unsigned int)*(char*)v14 | ((unsigned int)(int*)((int)(int*)((int)v14 >>> 8) & 0xffffff) << 8);
                            ptr5 = (int*)((char*)ptr5 + 1);
                            if((unsigned char)v14 == 10) {
                                ++v11;
                                *(char*)v13 = 13;
                                v13 = (LPCVOID)((int)v13 + 1);
                                ++v9;
                            }
                            ptr1 = ptr3;
                            *(char*)v13 = (unsigned char)v14;
                            v13 = (LPCVOID)((int)v13 + 1);
                            ++v9;
                            if((int)v9 >= 0x400) {
                                break;
                            }
                        }
                        DWORD nNumberOfBytesToWrite = (DWORD)((int)v13 - (int)&v4);
                        v1 = &v2;
                        v0 = &v4;
                        BOOL v15 = WriteFile(*(HANDLE*)(*ptr1 + (int)ptr2), &v4, nNumberOfBytesToWrite, &v2, NULL);
                        if(!v15) {
                            param0 = (unsigned int)GetLastError();
                            break;
                        }
                        else {
                            v10 += v2;
                            if((int)nNumberOfBytesToWrite > (int)v2) {
                                break;
                            }
                            else {
                                v9 = 0;
                            }
                        }
                    }
                    while((unsigned int)(int*)((int)v12 - (int)lpBuffer) < nNumberOfBytesToWrite1);
                }
            }
            else {
                v1 = &v2;
                DWORD v16 = nNumberOfBytesToWrite1;
                v0 = lpBuffer;
                BOOL v17 = WriteFile(*ptr4, lpBuffer, nNumberOfBytesToWrite1, &v2, NULL);
                if(v17) {
                    param0 = 0;
                    v10 = v2;
                }
                else {
                    param0 = (unsigned int)GetLastError();
                }
            }
            if(v10 == 0) {
                switch(param0) {
                    case 0: {
                    loc_406D30:
                        if(!(*(char*)((int*)(*ptr1 + (int)ptr2) + 1) & 0x40) || *(char*)lpBuffer != 26) {
                            gvar_40BA50 = 28;
                            gvar_40BA54 = 0;
                        }
                        break;
                    }
                    case 5: {
                        gvar_40BA54 = 5;
                        gvar_40BA50 = 9;
                        sub_4041A2((int)v8);
                        return result;
                    }
                    default: {
                        sub_408278(param0);
                        break;
                    }
                }
            }
        }
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
    }
    sub_4041A2((int)v8);
    return result;
}

DWORD sub_406DD9(int* param0, LONG lDistanceToMove, DWORD dwMoveMethod) {
    DWORD result;
    int v0;
    char v1 = gvar_40BEC8 > (unsigned int)param0;
    int v2 = v0;
    if(v1 && (*(char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + (int)*(void**)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1) & 0x1)) {
        int* hFile = (int*)sub_4083F0(param0);
        if(hFile == -1) {
            gvar_40BA50 = 9;
            return 0xffffffff;
        }
        DWORD v3 = SetFilePointer(hFile, lDistanceToMove, NULL, dwMoveMethod);
        if(v3 == -1) {
            DWORD v4 = GetLastError();
            if(v4) {
                sub_408278((unsigned int)v4);
                return 0xffffffff;
            }
        }
        char* ptr0 = (char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1);
        *ptr0 = *ptr0 & 0xfd;
        result = v3;
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = 0xffffffff;
    }
    return result;
}

int sub_406E65(int* param0) {
    ++gvar_40BA3C;
    int v0 = sub_403DDF(0x1000);
    int* ptr0 = param0;
    *(ptr0 + 2) = v0;
    if(v0) {
        *(ptr0 + 3) = *(ptr0 + 3) | 0x8;
        *(ptr0 + 6) = 0x1000;
    }
    else {
        *(ptr0 + 3) = *(ptr0 + 3) | 0x4;
        *(unsigned int*)(ptr0 + 2) = ptr0 + 5;
        *(ptr0 + 6) = 2;
    }
    int result = *(ptr0 + 2);
    *(ptr0 + 1) = 0;
    *ptr0 = result;
    return result;
}

unsigned int sub_406EA9() {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int result = gvar_40B498;
    if(!result || result == -1153374642) {
        /*BAD_CALL!*/ GetSystemTimeAsFileTime(&v0);
        DWORD v4 = /*BAD_CALL!*/ GetCurrentProcessId();
        DWORD v5 = /*BAD_CALL!*/ GetCurrentThreadId();
        DWORD v6 = GetTickCount();
        int v7 = (((v0 ^ v1) ^ v4) ^ v5) ^ v6;
        QueryPerformanceCounter(&v2);
        result = (unsigned int)(v2 ^ v3);
        gvar_40B498 = result ^ v7;
        if(!(result ^ v7)) {
            gvar_40B498 = 3141592654;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406F0F() {
    int v0;
    char* _Source;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    int v8;
    int v9;
    void* ptr0;
    void* ptr1;
    int v10;
    int v11 = SEH_prolog(&gvar_409D30, 0x118);
    unsigned int v12 = gvar_40B498;
    *(unsigned int*)(v8 - 28) = gvar_40B498;
    unsigned int v13 = gvar_40BC6C;
    int v14 = 0;
    char v15 = v13 == 0;
    char v16 = v13 >= 0x80000000;
    char v17 = __parity__((unsigned char)v13);
    char v18 = v13 < 0;
    char v19 = 0;
    char v20 = 0;
    if(!v15) {
        *(int*)(v8 - 4) = 0;
        v13(*(int*)(v8 + 8), *(int*)(v8 + 12));
        void* ptr2 = ptr1;
        void* ptr3 = ptr0;
        *(int*)(v8 - 4) = -1;
        v5 = *(int*)(v8 - 4) ? 0: 1;
        v4 = *(int*)(v8 - 4) < 0;
        v3 = __parity__((unsigned char)*(int*)(v8 - 4));
        v2 = 0;
        v1 = 0;
    }
    else {
        int v21 = *(int*)(v8 + 8);
        int v22 = *(int*)(v8 + 8);
        int v23 = v21 - 1;
        char v24 = v23 ? 0: 1;
        char v25 = v23 < 0;
        char v26 = __parity__((unsigned char)v23);
        char v27 = ((~v23 ^ ~v22) >>> 4) & 0x1;
        char v28 = ((v23 ^ v22) & v22) < 0;
        if(!v24) {
            _Source = "Unknown security failure detected!";
            *(int*)(v8 - 296) = "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
            v0 = 212;
        }
        else {
            _Source = "Buffer overrun detected!";
            *(int*)(v8 - 296) = "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
            v0 = 185;
        }
        *(char*)(v8 - 32) = 0;
        LPSTR lpFilename = (LPSTR)(v8 - 292);
        DWORD v29 = GetModuleFileNameA(NULL, lpFilename, 260);
        char v30 = v29 ? 0: 1;
        char v31 = v29 >= 0x80000000;
        char v32 = __parity__((unsigned char)v29);
        char v33 = 0;
        char v34 = 0;
        if(v30) {
            char* _Destination = (char*)(v8 - 292);
            char* ptr4 = strcpy(_Destination, "<program name unknown>");
            void* ptr5 = ptr1;
            void* ptr6 = ptr0;
        }
        char* _Destination1 = (char*)(v8 - 292);
        char* _Str = (char*)(v8 - 292);
        size_t v35 = strlen(_Str);
        void* ptr7 = ptr0;
        unsigned int v36 = (unsigned int)(v35 + 11);
        char v37 = v36 == 60;
        char v38 = (int)v36 < 60;
        char v39 = __parity__((unsigned char)v36 - 60);
        char v40 = v36 < 60;
        char v41 = (((v36 - 60) ^ v36) & (v36 ^ 0x3c)) < 0;
        char v42 = (((v36 - 60) ^ (v36 ^ 0x3c)) >>> 4) & 0x1;
        if(!v40 && !v37) {
            char* _Str1 = _Destination1;
            size_t v43 = strlen(_Str1);
            size_t v44 = v43;
            int v45 = v8 - 292;
            int v46 = v45 - 49;
            size_t v47 = v44;
            _Destination1 = (char*)(v46 + v44);
            char v48 = _Destination1 ? 0: 1;
            char v49 = (int)_Destination1 < 0;
            char v50 = __parity__((unsigned char)_Destination1);
            char v51 = (int*)((int)(int*)((int)(int*)((v46 ^ v47) ^ (int)_Destination1) >>> 4) & 0x1);
            char v52 = __carry__(v46, v47);
            char v53 = (int)(int*)((int)(int*)((int)_Destination1 ^ v47) & ~(v46 ^ v47)) < 0;
            char* ptr8 = strncpy(_Destination1, (char*)&gvar_4095C8, 3);
            int* ptr9 = &v10;
            char v54 = &v6 == 8;
            char v55 = (int)&v9 < 0;
            char v56 = __parity__((unsigned char)&v6 - 8);
            char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v9) >>> 4) & 0x1);
            char v58 = (unsigned int)&v10 >= 0xfffffff0;
            char v59 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v10) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
        }
        size_t v60 = strlen(_Destination1);
        void* ptr10 = ptr0;
        int v61 = v60 + v0 + 12;
        int v62 = v61 + 3;
        int v63 = v62 & 0xfffffffc;
        char v64 = v63 ? 0: 1;
        char v65 = v63 < 0;
        char v66 = __parity__((unsigned char)v63);
        char v67 = 0;
        char v68 = 0;
        int v69 = sub_403D30((int)ptr10);
        *(char**)(v8 - 24) = &v9;
        char* ptr11 = &v9;
        char* ptr12 = strcpy(&v9, _Source);
        int v70 = &gvar_4095A8;
        char* ptr13 = strcat(&v9, (char*)&gvar_4095A8);
        char* ptr14 = strcat(&v9, "Program: ");
        char* ptr15 = strcat(&v9, _Destination1);
        char* ptr16 = strcat(&v9, (char*)&gvar_4095A8);
        char* ptr17 = strcat(&v9, *(char**)(v8 - 296));
        int v71 = sub_4053EA((int)&v9, "Microsoft Visual C++ Runtime Library", 0x12010);
        int* ptr18 = &v7;
        v5 = &v6 == 8;
        v4 = (int)&v9 < 0;
        v3 = __parity__((unsigned char)&v6 - 8);
        v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x3c) ^ (int)&v9) >>> 4) & 0x1);
        v1 = (unsigned int)&v7 >= 0xffffffc4;
        v2 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v7) & (int*)~(int)(int*)((int)&v7 ^ 0x3c)) < 0;
    }
    int* ptr19 = &ptr1;
    int v72 = sub_4031EB(3);
    interrupt(3);
}

int sub_4070AD(int param0, int param1, int param2, int param3, int param4, int param5) {
    char v0;
    BOOL v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    DWORD v7;
    LPCCH lpMultiByteStr;
    int cbMultiByte;
    char v8;
    char v9;
    unsigned int v10;
    void* ptr0;
    int v11;
    int* ptr1;
    char v12;
    void* ptr2 = (void*)&loc_4070B9;
    int v13 = SEH_prolog(&gvar_409D40, 28);
    int v14 = 0;
    char v15 = gvar_40BC70 == 0;
    char v16 = gvar_40BC70 >= 0x80000000;
    char v17 = __parity__((unsigned char)gvar_40BC70);
    char v18 = gvar_40BC70 < 0;
    char v19 = 0;
    char v20 = 0;
    if(v15) {
        LPWORD lpCharType = (LPWORD)(ptr1 - 7);
        int v21 = 0;
        char v22 = 1;
        char v23 = 0;
        char v24 = 1;
        char v25 = 0;
        char v26 = 0;
        int v27 = 0;
        int v28 = 1;
        char v29 = 0;
        char v30 = 0;
        char v31 = 0;
        char v32 = 0;
        char v33 = 0;
        *(int*)&v12 = 1;
        BOOL v34 = GetStringTypeW(1, (LPCWCH)0x409D3C, *(int*)&v12, lpCharType);
        char v35 = v34 ? 0: 1;
        char v36 = v34 < 0;
        char v37 = __parity__((unsigned char)v34);
        char v38 = 0;
        char v39 = 0;
        if(!v35) {
            gvar_40BC70 = 1;
        }
        else {
            ptr2 = (void*)&loc_4070E9;
            DWORD v40 = GetLastError();
            char v41 = v40 == 120;
            char v42 = (int)v40 < 120;
            char v43 = __parity__((unsigned char)v40 - 120);
            char v44 = v40 < 120;
            char v45 = (((v40 - 120) ^ v40) & (v40 ^ 0x78)) < 0;
            char v46 = (((v40 - 120) ^ (v40 ^ 0x78)) >>> 4) & 0x1;
            if(v41) {
                gvar_40BC70 = 2;
            }
        }
    }
    int v47 = gvar_40BC70;
    char v48 = v47 == 2;
    char v49 = v47 < 2;
    char v50 = __parity__((unsigned char)v47 - 2);
    char v51 = (unsigned int)v47 < 2;
    char v52 = (((v47 - 2) ^ v47) & (v47 ^ 0x2)) < 0;
    char v53 = (((v47 - 2) ^ (v47 ^ 0x2)) >>> 4) & 0x1;
    if(!v48) {
        char v54 = v47 == 0;
        char v55 = v47 < 0;
        char v56 = __parity__((unsigned char)v47);
        char v57 = (unsigned int)v47 < 0;
        char v58 = 0;
        char v59 = 0;
        if(v54) {
            goto loc_4071F0;
        }
        else {
            char v60 = v47 == 1;
            char v61 = v47 < 1;
            char v62 = __parity__((unsigned char)v47 - 1);
            char v63 = (unsigned int)v47 < 1;
            char v64 = (((v47 - 1) ^ v47) & (v47 ^ 0x1)) < 0;
            v8 = (((v47 - 1) ^ (v47 ^ 0x1)) >>> 4) & 0x1;
            if(!v60) {
                goto loc_407216;
            }
            else {
                *(ptr1 - 9) = 0;
                *(ptr1 - 8) = 0;
                char v65 = *(ptr1 + 6) == 0;
                char v66 = *(ptr1 + 6) < 0;
                char v67 = __parity__((unsigned char)*(ptr1 + 6));
                char v68 = *(unsigned int*)(ptr1 + 6) < 0;
                char v69 = 0;
                char v70 = 0;
                if(v65) {
                    *(unsigned int*)(ptr1 + 6) = gvar_40BC64;
                }
                *(int*)&v12 = 0;
                cbMultiByte = *(ptr1 + 4);
                lpMultiByteStr = *(LPCCH*)(ptr1 + 3);
                char v71 = *(ptr1 + 8) == 0;
                char v72 = *(ptr1 + 8) < 0;
                char v73 = __parity__((unsigned char)*(ptr1 + 8));
                char v74 = *(unsigned int*)(ptr1 + 8) < 0;
                char v75 = 0;
                v8 = 0;
                int v76 = v71 ? 0: 1;
                DWORD dwFlags = (DWORD)(v76 * 8 + 1);
                v7 = (DWORD)(v76 * 8 + 1);
                v47 = MultiByteToWideChar(*(UINT*)(ptr1 + 6), dwFlags, lpMultiByteStr, cbMultiByte, *(LPWSTR*)&v12, 0);
                int cchWideChar = v47;
                *(ptr1 - 10) = v47;
                char v77 = cchWideChar ? 0: 1;
                char v78 = cchWideChar < 0;
                char v79 = __parity__((unsigned char)cchWideChar);
                char v80 = 0;
                char v81 = 0;
                if(v77) {
                    goto loc_407216;
                }
                else {
                    *(ptr1 - 1) = 0;  // __try{ (see __except:40718Ah)
                    char v82 = *(ptr1 - 1) ? 0: 1;  // __try{ (see __except:40718Ah)
                    char v83 = *(ptr1 - 1) < 0;  // __try{ (see __except:40718Ah)
                    char v84 = __parity__((unsigned char)*(ptr1 - 1));  // __try{ (see __except:40718Ah)
                    char v85 = 0;  // __try{ (see __except:40718Ah)
                    char v86 = 0;  // __try{ (see __except:40718Ah)
                    int* ptr3 = (int*)(cchWideChar * 2);
                    int* ptr4 = (int*)(cchWideChar * 2);
                    int* ptr5 = (int*)((char*)ptr4 + 3);
                    int* ptr6 = (int*)((int)ptr5 & 0xfffffffc);
                    char v87 = ptr6 ? 0: 1;
                    char v88 = (int)ptr6 < 0;
                    char v89 = __parity__((unsigned char)ptr6);
                    char v90 = 0;
                    char v91 = 0;
                    int v92 = sub_403D30((int)ptr0);
                    *(char**)(ptr1 - 6) = &v11;
                    char* ptr7 = &v11;
                    *(char**)(ptr1 - 11) = &v11;
                    *(int*)&v12 = 0;
                    char* ptr8 = sub_4045E0(&v11, 0, ptr3);
                    *(ptr1 - 1) = -1;  // } (starts at 407158h)
                    char v93 = *(ptr1 - 1) ? 0: 1;  // } (starts at 407158h)
                    char v94 = *(ptr1 - 1) < 0;  // } (starts at 407158h)
                    char v95 = __parity__((unsigned char)*(ptr1 - 1));  // } (starts at 407158h)
                    char v96 = 0;  // } (starts at 407158h)
                    char v97 = 0;  // } (starts at 407158h)
                    char v98 = &v9 == 8;
                    char v99 = (int)&v11 < 0;
                    char v100 = __parity__((unsigned char)&v9 - 8);
                    char v101 = 0;
                    char v102 = 0;
                    if(v98) {
                        *(int*)&v12 = 2;
                        v47 = sub_404245(*(int*)&v12, cchWideChar);
                        int v103 = *(int*)&v12;
                        ptr0 = ptr2;
                        ptr7 = (char*)v47;
                        char v104 = ptr7 ? 0: 1;
                        char v105 = (int)ptr7 < 0;
                        char v106 = __parity__((unsigned char)ptr7);
                        char v107 = 0;
                        char v108 = 0;
                        if(v104) {
                            goto loc_407216;
                        }
                        else {
                            *(ptr1 - 8) = 1;
                        }
                    }
                    *(char**)&v12 = &v11;
                    cbMultiByte = *(ptr1 + 4);
                    lpMultiByteStr = *(LPCCH*)(ptr1 + 3);
                    v7 = 1;
                    int v109 = MultiByteToWideChar(*(UINT*)(ptr1 + 6), 1, lpMultiByteStr, cbMultiByte, *(LPWSTR*)&v12, cchWideChar);
                    char v110 = v109 ? 0: 1;
                    char v111 = v109 < 0;
                    char v112 = __parity__((unsigned char)v109);
                    char v113 = 0;
                    char v114 = 0;
                    if(!v110) {
                        ptr2 = *(void**)(ptr1 + 5);
                        *(int*)&v12 = v109;
                        cbMultiByte = (int)&v11;
                        BOOL v115 = GetStringTypeW(*(DWORD*)(ptr1 + 2), (LPCWCH)&v11, *(int*)&v12, (LPWORD)ptr2);
                        *(BOOL*)(ptr1 - 9) = v115;
                    }
                    v6 = *(ptr1 - 8) ? 0: 1;
                    v5 = *(ptr1 - 8) < 0;
                    v4 = __parity__((unsigned char)*(ptr1 - 8));
                    v3 = *(unsigned int*)(ptr1 - 8) < 0;
                    v2 = 0;
                    v8 = 0;
                    if(!v6) {
                        *(int*)&v12 = &loc_4071EA;
                        unsigned int* ptr9 = /*BAD_CALL!*/ sub_40403C((int)&v11);
                        ptr0 = ptr2;
                    }
                    v1 = *(BOOL*)(ptr1 - 9);
                }
            }
        }
    }
    else {
    loc_4071F0:
        LCID Locale = *(LCID*)(ptr1 + 7);
        char v116 = Locale == 0;
        char v117 = Locale >= 0x80000000;
        char v118 = __parity__((unsigned char)Locale);
        char v119 = Locale < 0;
        char v120 = 0;
        char v121 = 0;
        if(v116) {
            Locale = gvar_40BC54;
        }
        unsigned int v122 = *(unsigned int*)(ptr1 + 6);
        char v123 = v122 ? 0: 1;
        char v124 = v122 >= 0x80000000;
        char v125 = __parity__((unsigned char)v122);
        char v126 = 0;
        char v127 = 0;
        if(v123) {
            v122 = gvar_40BC64;
        }
        *(int*)&v12 = &loc_407210;
        v47 = /*BAD_CALL!*/ sub_40850A(Locale);
        ptr0 = ptr2;
        char v128 = v47 == -1;
        char v129 = v47 < -1;
        char v130 = __parity__((unsigned char)v47 - 0xFF);
        char v131 = (unsigned int)v47 < 0xffffffff;
        char v132 = (((v47 + 1) ^ v47) & ~v47) < 0;
        v8 = (((v47 + 1) ^ ~v47) >>> 4) & 0x1;
        if(v128) {
            goto loc_407216;
        }
        else {
            v0 = v47 == v122;
            char v133 = v47 < (int)v122;
            char v134 = __parity__((unsigned char)v47 - (unsigned char)v122);
            char v135 = (unsigned int)v47 < v122;
            char v136 = (((v47 - v122) ^ v47) & (v47 ^ v122)) < 0;
            v8 = (((v47 - v122) ^ (v47 ^ v122)) >>> 4) & 0x1;
        }
        if(!v0) {
            *(int*)&v12 = 0;
            void* ptr10 = (void*)(ptr1 + 4);
            cbMultiByte = (int)(void*)(ptr1 + 4);
            lpMultiByteStr = *(LPCCH*)(ptr1 + 3);
            v7 = (DWORD)v47;
            v47 = sub_40854D(ptr10);
            int* ptr11 = &v10;
            char v137 = &v9 == 8;
            char v138 = (int)&v11 < 0;
            char v139 = __parity__((unsigned char)&v9 - 8);
            v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x18) ^ (int)&v11) >>> 4) & 0x1);
            char v140 = (unsigned int)&v10 >= 0xffffffe8;
            char v141 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&v10) & (int*)~(int)(int*)((int)&v10 ^ 0x18)) < 0;
            v14 = v47;
            char v142 = v14 ? 0: 1;
            char v143 = v14 < 0;
            char v144 = __parity__((unsigned char)v14);
            char v145 = 0;
            char v146 = 0;
            if(!v142) {
                *(ptr1 + 3) = v14;
                goto loc_40723C;
            }
            else {
            loc_407216:
                v1 = 0;
                v6 = 1;
                v5 = 0;
                v4 = 1;
                v2 = 0;
                v3 = 0;
            }
        }
        else {
        loc_40723C:
            ptr2 = *(void**)(ptr1 + 5);
            *(int*)&v12 = *(ptr1 + 4);
            BOOL v147 = GetStringTypeA(Locale, *(DWORD*)(ptr1 + 2), *(LPCSTR*)(ptr1 + 3), *(int*)&v12, (LPWORD)ptr2);
            BOOL v148 = v147;
            v6 = v14 ? 0: 1;
            v5 = v14 < 0;
            v4 = __parity__((unsigned char)v14);
            v2 = 0;
            v3 = 0;
            if(!v6) {
                *(int*)&v12 = &loc_40725B;
                unsigned int* ptr12 = /*BAD_CALL!*/ sub_40403C(v14);
                ptr0 = ptr2;
            }
            v1 = v148;
        }
    }
    int* ptr13 = ptr1 - 14;
    int v149 = *ptr13;
    int v150 = *(ptr13 + 1);
    int v151 = *(ptr13 + 2);
    int v152 = *ptr1;
    ptr13 = ptr1 + 1;
    int v153 = *ptr13;
    ++ptr13;
    jump v153;
}

LPVOID sub_407267(int* param0, LPVOID param1, DWORD nNumberOfBytesToRead) {
    LPVOID result;
    unsigned int v0;
    unsigned char v1;
    int v2;
    int v3 = v2;
    int* ptr0 = param0;
    if(gvar_40BEC8 > (unsigned int)ptr0) {
        unsigned int* ptr1 = (unsigned int*)((int*)((int)(int*)((int)ptr0 >> 5) * 4) + 1060792);
        int* ptr2 = (int*)((int)(int*)((int)ptr0 & 0x1f) * 8);
        DWORD v4 = (DWORD)(*ptr1 + (int)ptr2);
        char v5 = *(char*)(v4 + 4);
        if(!(*(char*)(v4 + 4) & 0x1)) {
            gvar_40BA54 = 0;
            gvar_40BA50 = 9;
            return (LPVOID)0xFFFFFFFF;
        }
        LPVOID v6 = NULL;
        LPVOID v7 = param1;
        LPVOID lpBuffer = param1;
        if(!(nNumberOfBytesToRead ? 0: 1) && !(v5 & 0x2)) {
            if((v5 & 0x48) && *(char*)(v4 + 5) != 10) {
                char v8 = *(char*)((char*)(*ptr1 + (int)ptr2) + 5);
                --nNumberOfBytesToRead;
                *(char*)v7 = v8;
                int v9 = *ptr1;
                lpBuffer = (LPVOID)((int)v7 + 1);
                v6 = (LPVOID)0x1;
                *(char*)((char*)(v9 + (int)ptr2) + 5) = 10;
            }
            LPDWORD v10 = &v0;
            DWORD v11 = nNumberOfBytesToRead;
            int v12 = *ptr1;
            LPVOID v13 = lpBuffer;
            BOOL v14 = ReadFile(*(HANDLE*)(v12 + (int)ptr2), lpBuffer, nNumberOfBytesToRead, &v0, NULL);
            if(!v14) {
                v4 = GetLastError();
                if(v4 == (LPVOID)0x5) {
                    gvar_40BA54 = (LPVOID)0x5;
                    gvar_40BA50 = 9;
                    return (LPVOID)0xFFFFFFFF;
                }
                else if(v4 == 109) {
                    goto loc_407312;
                }
                else {
                    sub_408278((unsigned int)v4);
                    return (LPVOID)0xFFFFFFFF;
                }
            }
            else {
                unsigned int v15 = v0;
                lpBuffer = *ptr1;
                v6 = (LPVOID)(v15 + (int)v6);
                if((*(char*)((int*)((int)lpBuffer + (int)ptr2) + 1) & 0x80)) {
                    if(v15 && *(char*)v7 == 10) {
                        char* ptr3 = (char*)((int*)((int)lpBuffer + (int)ptr2) + 1);
                        *ptr3 = *ptr3 | 0x4;
                    }
                    else {
                        char* ptr4 = (char*)((int*)(*ptr1 + (int)ptr2) + 1);
                        *ptr4 = *ptr4 & 0xfb;
                    }
                    lpBuffer = (LPVOID)((int)v6 + (int)param1);
                    LPVOID v16 = param1;
                    v6 = lpBuffer;
                    if(lpBuffer > param1) {
                        do {
                            unsigned char v17 = *(unsigned char*)v16;
                            if(v17 != 26) {
                                if(v17 != 13) {
                                    *(unsigned char*)v7 = v17;
                                    v7 = (LPVOID)((int)v7 + 1);
                                    v16 = (LPVOID)((int)v16 + 1);
                                }
                                else if((unsigned int)(int*)((int)lpBuffer - 1) > (unsigned int)v16) {
                                    LPVOID v18 = (LPVOID)((int)v16 + 1);
                                    if(*(char*)v18 == 10) {
                                        v16 = (LPVOID)((int)v16 + 2);
                                        *(char*)v7 = 10;
                                        goto loc_407412;
                                    }
                                    else {
                                        v16 = v18;
                                        goto loc_40740F;
                                    }
                                }
                                else {
                                    v16 = (LPVOID)((int)v16 + 1);
                                    v10 = &v0;
                                    v11 = 1;
                                    v13 = &v1;
                                    BOOL v19 = ReadFile(*(HANDLE*)(*ptr1 + (int)ptr2), &v1, 1, &v0, NULL);
                                    if(!v19) {
                                        DWORD v20 = GetLastError();
                                        if(v20) {
                                            goto loc_40740F;
                                        }
                                    }
                                    if(v0) {
                                        int v21 = *ptr1;
                                        if((*(char*)((int*)(v21 + (int)ptr2) + 1) & 0x48)) {
                                            v21 = (unsigned int)v1 | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
                                            if(v1 == 10) {
                                                *(char*)v7 = 10;
                                            }
                                            else {
                                                *(char*)v7 = 13;
                                                *(char*)((char*)(*ptr1 + (int)ptr2) + 5) = (unsigned char)v21;
                                            }
                                            goto loc_407412;
                                        }
                                        else if(v7 == param1 && v1 == 10) {
                                            *(char*)v7 = 10;
                                            goto loc_407412;
                                        }
                                        else {
                                            sub_406DD9(param0, -1, 1);
                                            if(v1 == 10) {
                                                goto loc_407413;
                                            }
                                        }
                                    }
                                loc_40740F:
                                    *(char*)v7 = 13;
                                loc_407412:
                                    v7 = (LPVOID)((int)v7 + 1);
                                }
                            loc_407413:
                                lpBuffer = v6;
                            }
                            else {
                                int v22 = *ptr1;
                                if(!(*(char*)((int*)(v22 + (int)ptr2) + 1) & 0x40)) {
                                    char* ptr5 = (char*)((int*)(v22 + (int)ptr2) + 1);
                                    *ptr5 = *ptr5 | 0x2;
                                }
                            }
                            break;
                        }
                        while(lpBuffer > v16);
                    }
                    v6 = (LPVOID)((int)v7 - (int)param1);
                }
                result = v6;
            }
        }
        else {
        loc_407312:
            result = NULL;
        }
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = (LPVOID)0xFFFFFFFF;
    }
    return result;
}

int sub_407455() {
    char v0;
    int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    LPCWCH lpWideCharStr;
    DWORD v8;
    LPCCH lpMultiByteStr;
    int cbMultiByte;
    char v9;
    void* ptr0;
    char v10;
    int v11;
    void* ptr1;
    char v12;
    char v13;
    int* ptr2;
    int v14 = SEH_prolog(&gvar_409D50, 56);
    int v15 = 0;
    char v16 = gvar_40BC74 == 0;
    char v17 = gvar_40BC74 >= 0x80000000;
    char v18 = __parity__((unsigned char)gvar_40BC74);
    char v19 = gvar_40BC74 < 0;
    char v20 = 0;
    char v21 = 0;
    if(v16) {
        *(int*)&v12 = 0;
        int v22 = 0;
        char v23 = 1;
        char v24 = 0;
        char v25 = 1;
        char v26 = 0;
        char v27 = 0;
        int v28 = 0;
        int v29 = 1;
        char v30 = 0;
        char v31 = 0;
        char v32 = 0;
        char v33 = 0;
        char v34 = 0;
        int v35 = LCMapStringW(0, 0x100, (LPCWSTR)0x409D3C, 1, *(LPWSTR*)&v12, 0);
        char v36 = v35 ? 0: 1;
        char v37 = v35 < 0;
        char v38 = __parity__((unsigned char)v35);
        char v39 = 0;
        char v40 = 0;
        if(!v36) {
            gvar_40BC74 = 1;
        }
        else {
            DWORD v41 = GetLastError();
            char v42 = v41 == 120;
            char v43 = (int)v41 < 120;
            char v44 = __parity__((unsigned char)v41 - 120);
            char v45 = v41 < 120;
            char v46 = (((v41 - 120) ^ v41) & (v41 ^ 0x78)) < 0;
            char v47 = (((v41 - 120) ^ (v41 ^ 0x78)) >>> 4) & 0x1;
            if(v42) {
                gvar_40BC74 = 2;
            }
        }
    }
    char v48 = *(ptr2 + 5) == 0;
    char v49 = *(ptr2 + 5) < 0;
    char v50 = __parity__((unsigned char)*(ptr2 + 5));
    char v51 = *(unsigned int*)(ptr2 + 5) < 0;
    char v52 = 0;
    char v53 = 0;
    if(!v48 && v49 == 0) {
        ptr0 = *(void**)(ptr2 + 5);
        unsigned char* ptr3 = *(unsigned int*)(ptr2 + 4);
        do {
            ptr0 = (void*)((int)ptr0 - 1);
            char v54 = *ptr3 == 0;
            char v55 = *ptr3 < 0;
            char v56 = __parity__(*ptr3);
            char v57 = *ptr3 < 0;
            char v58 = 0;
            char v59 = 0;
            if(v54) {
                goto loc_4074BB;
            }
            else {
                ++ptr3;
                v13 = ptr0 == 0;
                char v60 = (int)ptr0 < 0;
                char v61 = __parity__((unsigned char)ptr0);
                char v62 = (unsigned int)ptr0 < 0;
                char v63 = 0;
                char v64 = 0;
            }
        }
        while(!v13);
        ptr0 = (void*)0xFFFFFFFF;
        char v65 = 0;
        char v66 = 1;
        char v67 = 1;
        char v68 = 0;
        char v69 = 0;
    loc_4074BB:
        int v70 = -1;
        int* ptr4 = (int*)(-1 - (int)ptr0);
        int v71 = *(ptr2 + 5);
        *(unsigned int*)(ptr2 + 5) = (int*)(*(ptr2 + 5) + (int)ptr4);
        char v72 = *(ptr2 + 5) ? 0: 1;
        char v73 = *(ptr2 + 5) < 0;
        char v74 = __parity__((unsigned char)*(ptr2 + 5));
        char v75 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ v71) ^ *(ptr2 + 5)) >>> 4) & 0x1);
        char v76 = (int*)__carry__((int)ptr4, v71);
        char v77 = ((*(ptr2 + 5) ^ v71) & (int*)~(int)(int*)((int)ptr4 ^ v71)) < 0;
    }
    int v78 = gvar_40BC74;
    char v79 = v78 == 2;
    char v80 = v78 < 2;
    char v81 = __parity__((unsigned char)v78 - 2);
    char v82 = (unsigned int)v78 < 2;
    char v83 = (((v78 - 2) ^ v78) & (v78 ^ 0x2)) < 0;
    char v84 = (((v78 - 2) ^ (v78 ^ 0x2)) >>> 4) & 0x1;
    if(!v79) {
        char v85 = v78 == 0;
        char v86 = v78 < 0;
        char v87 = __parity__((unsigned char)v78);
        char v88 = (unsigned int)v78 < 0;
        char v89 = 0;
        char v90 = 0;
        if(v85) {
            goto loc_4076AD;
        }
        else {
            char v91 = v78 == 1;
            char v92 = v78 < 1;
            char v93 = __parity__((unsigned char)v78 - 1);
            char v94 = (unsigned int)v78 < 1;
            char v95 = (((v78 - 1) ^ v78) & (v78 ^ 0x1)) < 0;
            v9 = (((v78 - 1) ^ (v78 ^ 0x1)) >>> 4) & 0x1;
            if(!v91) {
            loc_4076E0:
                v2 = 0;
                v7 = 1;
                v6 = 0;
                v5 = 1;
                v3 = 0;
                v4 = 0;
            }
            else {
                int cchDest = 0;
                char v96 = 1;
                char v97 = 0;
                char v98 = 1;
                char v99 = 0;
                char v100 = 0;
                *(ptr2 - 11) = 0;
                *(ptr2 - 14) = 0;
                *(ptr2 - 13) = 0;
                char v101 = *(ptr2 + 8) == 0;
                char v102 = *(ptr2 + 8) < 0;
                char v103 = __parity__((unsigned char)*(ptr2 + 8));
                char v104 = *(unsigned int*)(ptr2 + 8) < 0;
                char v105 = 0;
                char v106 = 0;
                if(v101) {
                    *(unsigned int*)(ptr2 + 8) = gvar_40BC64;
                }
                *(int*)&v12 = 0;
                cbMultiByte = *(ptr2 + 5);
                lpMultiByteStr = *(LPCCH*)(ptr2 + 4);
                char v107 = *(ptr2 + 9) == 0;
                char v108 = *(ptr2 + 9) < 0;
                char v109 = __parity__((unsigned char)*(ptr2 + 9));
                char v110 = *(unsigned int*)(ptr2 + 9) < 0;
                char v111 = 0;
                char v112 = 0;
                int v113 = v107 ? 0: 1;
                DWORD dwFlags = (DWORD)(v113 * 8 + 1);
                v8 = (DWORD)(v113 * 8 + 1);
                v78 = MultiByteToWideChar(*(UINT*)(ptr2 + 8), dwFlags, lpMultiByteStr, cbMultiByte, *(LPWSTR*)&v12, 0);
                int cchWideChar = v78;
                *(ptr2 - 12) = v78;
                char v114 = cchWideChar == 0;
                char v115 = cchWideChar < 0;
                char v116 = __parity__((unsigned char)cchWideChar);
                char v117 = (unsigned int)cchWideChar < 0;
                char v118 = 0;
                v9 = 0;
                if(v114) {
                    goto loc_4076E0;
                }
                else {
                    *(ptr2 - 1) = 1;  // __try{ (see __except:40754Fh)
                    int v119 = cchWideChar * 2;
                    int v120 = v119 + 3;
                    int v121 = v120 & 0xfffffffc;
                    char v122 = v121 ? 0: 1;
                    char v123 = v121 < 0;
                    char v124 = __parity__((unsigned char)v121);
                    char v125 = 0;
                    char v126 = 0;
                    int v127 = sub_403D30((int)ptr0);
                    *(char**)(ptr2 - 6) = &v11;
                    char* ptr5 = &v11;
                    *(char**)(ptr2 - 7) = &v11;
                    *(ptr2 - 1) = -1;  // } (starts at 407528h)
                    char v128 = *(ptr2 - 1) ? 0: 1;  // } (starts at 407528h)
                    char v129 = *(ptr2 - 1) < 0;  // } (starts at 407528h)
                    char v130 = __parity__((unsigned char)*(ptr2 - 1));  // } (starts at 407528h)
                    char v131 = 0;  // } (starts at 407528h)
                    char v132 = 0;  // } (starts at 407528h)
                    char v133 = *(ptr2 - 7) == 0;
                    char v134 = *(ptr2 - 7) < 0;
                    char v135 = __parity__((unsigned char)*(ptr2 - 7));
                    char v136 = *(unsigned int*)(ptr2 - 7) < 0;
                    char v137 = 0;
                    char v138 = 0;
                    if(v133) {
                        int v139 = cchWideChar * 2;
                        *(int*)&v12 = &loc_407574;
                        v78 = /*BAD_CALL!*/ sub_403DDF(v139);
                        ptr0 = ptr1;
                        *(ptr2 - 7) = v78;
                        char v140 = v78 == 0;
                        char v141 = v78 < 0;
                        char v142 = __parity__((unsigned char)v78);
                        char v143 = (unsigned int)v78 < 0;
                        char v144 = 0;
                        v9 = 0;
                        if(v140) {
                            goto loc_4076E0;
                        }
                        else {
                            *(ptr2 - 14) = 1;
                        }
                    }
                    *(int*)&v12 = *(ptr2 - 7);
                    cbMultiByte = *(ptr2 + 5);
                    lpMultiByteStr = *(LPCCH*)(ptr2 + 4);
                    v8 = 1;
                    int v145 = MultiByteToWideChar(*(UINT*)(ptr2 + 8), 1, lpMultiByteStr, cbMultiByte, *(LPWSTR*)&v12, cchWideChar);
                    char v146 = v145 ? 0: 1;
                    char v147 = v145 < 0;
                    char v148 = __parity__((unsigned char)v145);
                    char v149 = 0;
                    char v150 = 0;
                    if(!v146) {
                        *(int*)&v12 = 0;
                        int v151 = LCMapStringW(*(LCID*)(ptr2 + 2), *(DWORD*)(ptr2 + 3), *(LPCWSTR*)(ptr2 - 7), cchWideChar, *(LPWSTR*)&v12, 0);
                        cchDest = v151;
                        *(ptr2 - 11) = v151;
                        char v152 = cchDest == 0;
                        char v153 = cchDest < 0;
                        char v154 = __parity__((unsigned char)cchDest);
                        char v155 = (unsigned int)cchDest < 0;
                        char v156 = 0;
                        char v157 = 0;
                        if(!v152) {
                            char v158 = *(char*)((char*)ptr2 + 13) & 0x4 ? 0: 1;
                            char v159 = (*(char*)((char*)ptr2 + 13) & 0x4) < 0;
                            char v160 = __parity__(*(char*)((char*)ptr2 + 13) & 0x4);
                            char v161 = 0;
                            char v162 = 0;
                            if(!v158) {
                                char v163 = *(ptr2 + 7) == 0;
                                char v164 = *(ptr2 + 7) < 0;
                                char v165 = __parity__((unsigned char)*(ptr2 + 7));
                                char v166 = *(unsigned int*)(ptr2 + 7) < 0;
                                char v167 = 0;
                                char v168 = 0;
                                if(!v163) {
                                    char v169 = *(ptr2 + 7) == cchDest;
                                    char v170 = *(ptr2 + 7) > cchDest;
                                    char v171 = __parity__((unsigned char)cchDest - (unsigned char)*(ptr2 + 7));
                                    char v172 = *(unsigned int*)(ptr2 + 7) > (unsigned int)cchDest;
                                    char v173 = (((cchDest - *(ptr2 + 7)) ^ cchDest) & (*(ptr2 + 7) ^ cchDest)) < 0;
                                    char v174 = (((cchDest - *(ptr2 + 7)) ^ (*(ptr2 + 7) ^ cchDest)) >>> 4) & 0x1;
                                    if((v169 || v170 != v173)) {
                                        ptr1 = *(void**)(ptr2 + 7);
                                        *(int*)&v12 = *(ptr2 + 6);
                                        int v175 = LCMapStringW(*(LCID*)(ptr2 + 2), *(DWORD*)(ptr2 + 3), *(LPCWSTR*)(ptr2 - 7), cchWideChar, *(LPWSTR*)&v12, (int)ptr1);
                                    }
                                }
                            }
                            else {
                                *(ptr2 - 1) = 2;  // __try{ (see __except:40761Dh)
                                int v176 = cchDest * 2;
                                int v177 = v176 + 3;
                                int v178 = v177 & 0xfffffffc;
                                char v179 = v178 ? 0: 1;
                                char v180 = v178 < 0;
                                char v181 = __parity__((unsigned char)v178);
                                char v182 = 0;
                                char v183 = 0;
                                int v184 = sub_403D30((int)ptr0);
                                *(char**)(ptr2 - 6) = &v11;
                                char* ptr6 = &v11;
                                *(char**)(ptr2 - 8) = &v11;
                                *(ptr2 - 1) = -1;  // } (starts at 4075F6h)
                                char v185 = *(ptr2 - 1) ? 0: 1;  // } (starts at 4075F6h)
                                char v186 = *(ptr2 - 1) < 0;  // } (starts at 4075F6h)
                                char v187 = __parity__((unsigned char)*(ptr2 - 1));  // } (starts at 4075F6h)
                                char v188 = 0;  // } (starts at 4075F6h)
                                char v189 = 0;  // } (starts at 4075F6h)
                                char v190 = *(ptr2 - 8) == 0;
                                char v191 = *(ptr2 - 8) < 0;
                                char v192 = __parity__((unsigned char)*(ptr2 - 8));
                                char v193 = *(unsigned int*)(ptr2 - 8) < 0;
                                char v194 = 0;
                                char v195 = 0;
                                if(v190) {
                                    int v196 = cchDest * 2;
                                    *(int*)&v12 = &loc_407642;
                                    int v197 = /*BAD_CALL!*/ sub_403DDF(v196);
                                    ptr0 = ptr1;
                                    *(ptr2 - 8) = v197;
                                    char v198 = v197 == 0;
                                    char v199 = v197 < 0;
                                    char v200 = __parity__((unsigned char)v197);
                                    char v201 = (unsigned int)v197 < 0;
                                    char v202 = 0;
                                    char v203 = 0;
                                    if(!v198) {
                                        *(ptr2 - 13) = 1;
                                        goto loc_407652;
                                    }
                                }
                                else {
                                loc_407652:
                                    *(int*)&v12 = *(ptr2 - 8);
                                    int v204 = LCMapStringW(*(LCID*)(ptr2 + 2), *(DWORD*)(ptr2 + 3), *(LPCWSTR*)(ptr2 - 7), cchWideChar, *(LPWSTR*)&v12, cchDest);
                                    char v205 = v204 ? 0: 1;
                                    char v206 = v204 < 0;
                                    char v207 = __parity__((unsigned char)v204);
                                    char v208 = 0;
                                    char v209 = 0;
                                    if(!v205) {
                                        *(int*)&v12 = 0;
                                        char v210 = *(ptr2 + 7) == 0;
                                        char v211 = *(ptr2 + 7) < 0;
                                        char v212 = __parity__((unsigned char)*(ptr2 + 7));
                                        char v213 = *(unsigned int*)(ptr2 + 7) < 0;
                                        char v214 = 0;
                                        char v215 = 0;
                                        if(v210) {
                                            cbMultiByte = 0;
                                            lpMultiByteStr = NULL;
                                        }
                                        else {
                                            cbMultiByte = *(ptr2 + 7);
                                            lpMultiByteStr = *(LPCCH*)(ptr2 + 6);
                                        }
                                        lpWideCharStr = *(LPCWCH*)(ptr2 - 8);
                                        int v216 = 0;
                                        int v217 = WideCharToMultiByte(*(UINT*)(ptr2 + 8), 0, lpWideCharStr, cchDest, lpMultiByteStr, cbMultiByte, *(LPCCH*)&v12, NULL);
                                        cchDest = v217;
                                    }
                                }
                            }
                        }
                    }
                    char v218 = *(ptr2 - 13) == 0;
                    char v219 = *(ptr2 - 13) < 0;
                    char v220 = __parity__((unsigned char)*(ptr2 - 13));
                    char v221 = *(unsigned int*)(ptr2 - 13) < 0;
                    char v222 = 0;
                    char v223 = 0;
                    if(!v218) {
                        ptr1 = *(void**)(ptr2 - 8);
                        *(int*)&v12 = &loc_407697;
                        unsigned int* ptr7 = /*BAD_CALL!*/ sub_40403C((int)ptr1);
                        ptr0 = ptr1;
                    }
                    v7 = *(ptr2 - 14) == 0;
                    v6 = *(ptr2 - 14) < 0;
                    v5 = __parity__((unsigned char)*(ptr2 - 14));
                    v4 = *(unsigned int*)(ptr2 - 14) < 0;
                    v3 = 0;
                    v9 = 0;
                    if(!v7) {
                        ptr1 = *(void**)(ptr2 - 7);
                        *(int*)&v12 = &loc_4076A5;
                        unsigned int* ptr8 = /*BAD_CALL!*/ sub_40403C((int)ptr1);
                        ptr0 = ptr1;
                    }
                    v2 = cchDest;
                }
            }
        }
    }
    else {
    loc_4076AD:
        *(ptr2 - 10) = 0;
        char* ptr9 = NULL;
        char v224 = 1;
        char v225 = 0;
        char v226 = 1;
        char v227 = 0;
        char v228 = 0;
        *(ptr2 - 15) = 0;
        char v229 = *(ptr2 + 2) == 0;
        char v230 = *(ptr2 + 2) < 0;
        char v231 = __parity__((unsigned char)*(ptr2 + 2));
        char v232 = *(unsigned int*)(ptr2 + 2) < 0;
        char v233 = 0;
        char v234 = 0;
        if(v229) {
            unsigned int v235 = gvar_40BC54;
            *(unsigned int*)(ptr2 + 2) = gvar_40BC54;
        }
        char v236 = *(ptr2 + 8) == 0;
        char v237 = *(ptr2 + 8) < 0;
        char v238 = __parity__((unsigned char)*(ptr2 + 8));
        char v239 = *(unsigned int*)(ptr2 + 8) < 0;
        char v240 = 0;
        char v241 = 0;
        if(v236) {
            unsigned int v242 = gvar_40BC64;
            *(unsigned int*)(ptr2 + 8) = gvar_40BC64;
        }
        ptr1 = *(void**)(ptr2 + 2);
        *(int*)&v12 = &loc_4076D7;
        v78 = /*BAD_CALL!*/ sub_40850A((LCID)ptr1);
        ptr0 = ptr1;
        *(ptr2 - 16) = v78;
        char v243 = v78 == -1;
        char v244 = v78 < -1;
        char v245 = __parity__((unsigned char)v78 - 0xFF);
        char v246 = (unsigned int)v78 < 0xffffffff;
        char v247 = (((v78 + 1) ^ v78) & ~v78) < 0;
        v9 = (((v78 + 1) ^ ~v78) >>> 4) & 0x1;
        if(v243) {
            goto loc_4076E0;
        }
        else {
            char v248 = *(ptr2 + 8) == v78;
            char v249 = *(ptr2 + 8) > v78;
            char v250 = __parity__((unsigned char)v78 - (unsigned char)*(ptr2 + 8));
            char v251 = *(unsigned int*)(ptr2 + 8) > (unsigned int)v78;
            char v252 = (((v78 - *(ptr2 + 8)) ^ v78) & (*(ptr2 + 8) ^ v78)) < 0;
            char v253 = (((v78 - *(ptr2 + 8)) ^ (*(ptr2 + 8) ^ v78)) >>> 4) & 0x1;
            if(v248) {
                ptr1 = *(void**)(ptr2 + 7);
                *(int*)&v12 = *(ptr2 + 6);
                int v254 = LCMapStringA(*(LCID*)(ptr2 + 2), *(DWORD*)(ptr2 + 3), *(LPCSTR*)(ptr2 + 4), *(ptr2 + 5), *(LPSTR*)&v12, (int)ptr1);
                v1 = v254;
                goto loc_4077F8;
            }
            else {
                *(int*)&v12 = 0;
                void* ptr10 = (void*)(ptr2 + 5);
                cbMultiByte = (int)(void*)(ptr2 + 5);
                lpMultiByteStr = *(LPCCH*)(ptr2 + 4);
                v8 = (DWORD)v78;
                lpWideCharStr = *(LPCWCH*)(ptr2 + 8);
                v78 = sub_40854D(ptr10);
                int* ptr11 = &lpWideCharStr;
                char v255 = &v10 == 8;
                char v256 = (int)&v11 < 0;
                char v257 = __parity__((unsigned char)&v10 - 8);
                char v258 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&lpWideCharStr ^ 0x18) ^ (int)&v11) >>> 4) & 0x1);
                char v259 = (unsigned int)&lpWideCharStr >= 0xffffffe8;
                char v260 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&lpWideCharStr) & (int*)~(int)(int*)((int)&lpWideCharStr ^ 0x18)) < 0;
                *(ptr2 - 10) = v78;
                char v261 = v78 == 0;
                char v262 = v78 < 0;
                char v263 = __parity__((unsigned char)v78);
                char v264 = (unsigned int)v78 < 0;
                char v265 = 0;
                v9 = 0;
                if(v261) {
                    goto loc_4076E0;
                }
                else {
                    *(int*)&v12 = 0;
                    cbMultiByte = *(ptr2 + 5);
                    lpMultiByteStr = (LPCCH)v78;
                    int v266 = LCMapStringA(*(LCID*)(ptr2 + 2), *(DWORD*)(ptr2 + 3), (LPCSTR)v78, cbMultiByte, *(LPSTR*)&v12, 0);
                    int* ptr12 = (int*)v266;
                    *(int**)(ptr2 - 9) = (int*)v266;
                    char v267 = ptr12 == 0;
                    char v268 = (int)ptr12 < 0;
                    char v269 = __parity__((unsigned char)ptr12);
                    char v270 = (unsigned int)ptr12 < 0;
                    char v271 = 0;
                    char v272 = 0;
                    if(!v267) {
                        *(ptr2 - 1) = 0;  // __try{ (see __except:407752h)
                        int v273 = v266 + 3;
                        int v274 = v273 & 0xfffffffc;
                        char v275 = v274 ? 0: 1;
                        char v276 = v274 < 0;
                        char v277 = __parity__((unsigned char)v274);
                        char v278 = 0;
                        char v279 = 0;
                        int v280 = sub_403D30((int)ptr0);
                        *(char**)(ptr2 - 6) = &v11;
                        ptr9 = &v11;
                        *(char**)(ptr2 - 17) = &v11;
                        *(int*)&v12 = 0;
                        char* ptr13 = sub_4045E0(&v11, 0, ptr12);
                        int* ptr14 = &cbMultiByte;
                        char v281 = &v10 == 8;
                        char v282 = (int)&v11 < 0;
                        char v283 = __parity__((unsigned char)&v10 - 8);
                        char v284 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&cbMultiByte ^ 0xc) ^ (int)&v11) >>> 4) & 0x1);
                        char v285 = (unsigned int)&cbMultiByte >= 0xfffffff4;
                        char v286 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&cbMultiByte) & (int*)~(int)(int*)((int)&cbMultiByte ^ 0xc)) < 0;
                        *(ptr2 - 1) = -1;  // } (starts at 40772Bh)
                        char v287 = &v10 == 8;
                        char v288 = (int)&v11 < 0;
                        char v289 = __parity__((unsigned char)&v10 - 8);
                        char v290 = (unsigned int)&v10 < 8;
                        char v291 = 0;
                        char v292 = 0;
                        if(v287) {
                            ptr1 = *(void**)(ptr2 - 9);
                            *(int*)&v12 = &loc_40776E;
                            int v293 = /*BAD_CALL!*/ sub_403DDF((int)ptr1);
                            ptr0 = ptr1;
                            ptr9 = (char*)v293;
                            char v294 = ptr9 == 0;
                            char v295 = (int)ptr9 < 0;
                            char v296 = __parity__((unsigned char)ptr9);
                            char v297 = (unsigned int)ptr9 < 0;
                            char v298 = 0;
                            char v299 = 0;
                            if(v294) {
                                goto loc_4077A6;
                            }
                            else {
                                ptr1 = *(void**)(ptr2 - 9);
                                *(int*)&v12 = 0;
                                char* ptr15 = sub_4045E0(ptr9, 0, (int*)ptr1);
                                int* ptr16 = &cbMultiByte;
                                char v300 = &v10 == 8;
                                char v301 = (int)&v11 < 0;
                                char v302 = __parity__((unsigned char)&v10 - 8);
                                char v303 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&cbMultiByte ^ 0xc) ^ (int)&v11) >>> 4) & 0x1);
                                char v304 = (unsigned int)&cbMultiByte >= 0xfffffff4;
                                char v305 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&cbMultiByte) & (int*)~(int)(int*)((int)&cbMultiByte ^ 0xc)) < 0;
                                *(ptr2 - 15) = 1;
                                goto loc_407789;
                            }
                        }
                        else {
                        loc_407789:
                            ptr1 = *(void**)(ptr2 - 9);
                            *(char**)&v12 = &v11;
                            int v306 = LCMapStringA(*(LCID*)(ptr2 + 2), *(DWORD*)(ptr2 + 3), *(LPCSTR*)(ptr2 - 10), *(ptr2 + 5), *(LPSTR*)&v12, (int)ptr1);
                            *(ptr2 - 9) = v306;
                            char v307 = v306 == 0;
                            char v308 = v306 < 0;
                            char v309 = __parity__((unsigned char)v306);
                            char v310 = (unsigned int)v306 < 0;
                            char v311 = 0;
                            char v312 = 0;
                            if(v307) {
                            loc_4077A6:
                                v1 = 0;
                                char v313 = 1;
                                char v314 = 0;
                                char v315 = 1;
                                char v316 = 0;
                                char v317 = 0;
                            }
                            else {
                                ptr1 = *(void**)(ptr2 + 7);
                                *(int*)&v12 = *(ptr2 + 6);
                                int v318 = (int)(ptr2 - 9);
                                cbMultiByte = (int)(ptr2 - 9);
                                lpMultiByteStr = (LPCCH)&v11;
                                v8 = *(DWORD*)(ptr2 + 8);
                                lpWideCharStr = *(LPCWCH*)(ptr2 - 16);
                                int v319 = sub_40854D(ptr0);
                                int* ptr17 = &lpWideCharStr;
                                char v320 = &v10 == 8;
                                char v321 = (int)&v11 < 0;
                                char v322 = __parity__((unsigned char)&v10 - 8);
                                char v323 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&lpWideCharStr ^ 0x18) ^ (int)&v11) >>> 4) & 0x1);
                                char v324 = (unsigned int)&lpWideCharStr >= 0xffffffe8;
                                char v325 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&lpWideCharStr) & (int*)~(int)(int*)((int)&lpWideCharStr ^ 0x18)) < 0;
                                int v326 = v319;
                                int v327 = v319;
                                int v328 = 0 - v326;
                                char v329 = v328 ? 0: 1;
                                char v330 = v328 < 0;
                                char v331 = __parity__((unsigned char)v328);
                                char v332 = (unsigned int)v327 > 0;
                                char v333 = (v328 & v327) < 0;
                                char v334 = ((v328 ^ v327) >>> 4) & 0x1;
                                unsigned int v335 = v332 ? 0xffffffff: 0;
                                unsigned int v336 = v332 ? 0xffffffff: 0;
                                v1 = 0 - v335;
                                char v337 = v1 ? 0: 1;
                                char v338 = v1 < 0;
                                char v339 = __parity__((unsigned char)v1);
                                char v340 = v336 > 0;
                                char v341 = (v1 & v336) < 0;
                                char v342 = ((v1 ^ v336) >>> 4) & 0x1;
                            }
                        }
                    }
                    else {
                        v1 = *(ptr2 - 18);
                    }
                    v0 = *(ptr2 - 15) == 0;
                    char v343 = *(ptr2 - 15) < 0;
                    char v344 = __parity__((unsigned char)*(ptr2 - 15));
                    char v345 = *(unsigned int*)(ptr2 - 15) < 0;
                    char v346 = 0;
                    char v347 = 0;
                }
            }
        }
        if(!v0) {
            *(int*)&v12 = &loc_4077DB;
            unsigned int* ptr18 = /*BAD_CALL!*/ sub_40403C((int)ptr9);
            ptr0 = ptr1;
        }
    loc_4077F8:
        v7 = *(ptr2 - 10) == 0;
        v6 = *(ptr2 - 10) < 0;
        v5 = __parity__((unsigned char)*(ptr2 - 10));
        v4 = *(unsigned int*)(ptr2 - 10) < 0;
        v3 = 0;
        v9 = 0;
        if(!v7) {
            ptr1 = *(void**)(ptr2 - 10);
            *(int*)&v12 = &loc_407805;
            unsigned int* ptr19 = /*BAD_CALL!*/ sub_40403C((int)ptr1);
            ptr0 = ptr1;
        }
        v2 = v1;
    }
    int* ptr20 = ptr2 - 21;
    int v348 = *ptr20;
    int v349 = *(ptr20 + 1);
    int v350 = *(ptr20 + 2);
    int v351 = *ptr2;
    ptr20 = ptr2 + 1;
    int v352 = *ptr20;
    ++ptr20;
    jump v352;
}

int sub_407811(unsigned int param0, unsigned int param1, unsigned int* param2) {
    unsigned int v0 = param0 + param1;
    int result = v0 >= param0 && v0 >= param1 ? 0: 1;
    *param2 = v0;
    return result;
}

int sub_407832(unsigned int* param0, unsigned int* param1) {
    unsigned int* ptr0;
    unsigned int* ptr1 = param0;
    unsigned int* ptr2 = param1;
    int v0 = sub_407811(ptr1[0], ptr2[0], ptr1);
    if(v0) {
        ptr0 = ptr1 + 1;
        int v1 = 1;
        int v2 = sub_407811(ptr1[1], 1, ptr1 + 1);
        if(v2) {
            ++ptr1[2];
        }
    }
    ptr0 = ptr1 + 1;
    int v3 = sub_407811(ptr1[1], ptr2[1], ptr1 + 1);
    if(v3) {
        ++ptr1[2];
    }
    ptr0 = ptr1 + 2;
    return sub_407811(ptr1[2], ptr2[2], ptr1 + 2);
}

int* sub_407890(int* param0) {
    int* result = param0;
    int v0 = *result;
    int v1 = *(result + 1);
    *result = v0 * 2;
    int v2 = (*(result + 2) * 2) | (v1 >>> 31);
    *(result + 1) = (v1 * 2) | (v0 >>> 31);
    *(result + 2) = v2;
    return result;
}

int* sub_4078BE(int* param0) {
    int* result = param0;
    int v0 = *(result + 2);
    int v1 = *(result + 1);
    *(result + 1) = (v0 * 0x80000000) | (v1 >>> 1);
    int v2 = (v1 * 0x80000000) | (*result >>> 1);
    *(result + 2) = v0 >>> 1;
    *result = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4078EB(char* param0, int param1, int* param2) {
    short v0;
    int v1;
    int result;
    int v2;
    int v3;
    unsigned int v4 = gvar_40B498;
    int v5 = v2;
    int* ptr0 = param2;
    unsigned int v6 = v4;
    int v7 = param1;
    *(int*)&v0 = 0x404e;
    ptr0[0] = 0;
    ptr0[1] = 0;
    ptr0[2] = 0;
    if((unsigned int)v7 > 0) {
        param2 = (int*)v7;
        do {
            int v8 = ptr0[0];
            *&v1 = ptr0[1];
            int* ptr1 = ptr0;
            *(&v1 + 1) = ptr0[2];
            sub_407890(ptr0);
            sub_407890(ptr0);
            sub_407832((unsigned int*)ptr0, &v8);
            sub_407890(ptr0);
            int v9 = (int)*param0;
            v1 = 0;
            int v10 = 0;
            v8 = v9;
            v7 = sub_407832((unsigned int*)ptr0, &v8);
            ++param0;
            param2 = (int*)((char*)param2 - 1);
        }
        while(param2);
    }
    if(ptr0[2] == 0) {
        do {
            v3 = ptr0[1];
            *(int*)&v0 = *(int*)&v0 + 0xfff0;
            int v11 = ptr0[0];
            ptr0[1] = (v3 * 0x10000) | (v11 >>> 16);
            ptr0[0] = v11 * 0x10000;
        }
        while(v3 >>> 16 == 0);
        ptr0[2] = v3 >>> 16;
    }
    while(!(ptr0[2] & 0x8000)) {
        v7 = (int)sub_407890(ptr0);
        *(int*)&v0 = *(int*)&v0 + 0xffff;
    }
    unsigned int v12 = v6;
    *(short*)((char*)&ptr0[2] + 2) = v0;
    sub_4041A2(v12);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4079C9(short* param0, unsigned int param1, char* param2, unsigned int param3, int param4, unsigned int param5, unsigned int param6) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    char* ptr0;
    int v5;
    int v6;
    int v7;
    char v8;
    int v9;
    char v10;
    int result;
    int v11;
    int v12;
    char v13;
    char v14;
    int v15;
    unsigned int v16 = gvar_40B498;
    int v17 = (unsigned int)v8 | ((unsigned int)v11 << 8);
    char* ptr1 = &v10;
    int v18 = 0;
    char* ptr2 = param2;
    int v19 = 0;
    unsigned int v20 = 1;
    int v21 = 0;
    unsigned int v22 = 0;
    unsigned int v23 = 0;
    unsigned int v24 = 0;
    int v25 = 0;
    int v26 = 0;
    int v27 = 0;
    char* ptr3 = ptr2;
    for(unsigned char i = *ptr2; *ptr2 == 32 || i == 9 || i == 10 || i == 13; i = *ptr2) {
        ++ptr2;
    }
    int v28 = 4;
    int v29 = 4;
loc_407A22:
    do {
        v8 = *ptr2;
        ++ptr2;
        switch(v18) {
            case 0: {
                if(v8 >= 49 && v8 <= 57) {
                    v28 = 3;
                    v18 = v28;
                    --ptr2;
                    goto loc_407A22;
                }
                else if(gvar_40B4A4 == v8) {
                    v28 = 5;
                    goto loc_407C8C;
                }
                else {
                    int v30 = (unsigned int)v8 - 43;
                    if(v30) {
                        unsigned int v31 = (unsigned int)(v30 - 2);
                        if(!v31) {
                            v28 = 2;
                            v18 = 2;
                            v19 = 0x8000;
                            goto loc_407A22;
                        }
                        else if(v31 == 3) {
                            v18 = 1;
                            goto loc_407A22;
                        }
                        else {
                            goto loc_407A6A;
                        }
                    }
                    else {
                        v19 = 0;
                        v28 = 2;
                        v18 = 2;
                        goto loc_407A22;
                    }
                }
            }
            case 1: {
                char v32 = v8 < 49;
                char v33 = (((v8 - 49) ^ v8) & (v8 ^ 0x31)) < 0;
                v22 = 1;
                if((v32 == v33 && v8 <= 57)) {
                    v28 = 3;
                    v18 = v28;
                    --ptr2;
                    goto loc_407A22;
                }
                else if(gvar_40B4A4 == v8) {
                    v18 = 4;
                    goto loc_407A22;
                }
                else if(v8 == 43 || v8 == 45) {
                    goto loc_407AC8;
                }
                else if(v8 != 48) {
                    goto loc_407AB0;
                }
                else {
                    v18 = 1;
                    goto loc_407A22;
                }
            }
            case 2: {
                if(v8 >= 49 && v8 <= 57) {
                    v28 = 3;
                    v18 = v28;
                    --ptr2;
                    goto loc_407A22;
                }
                else if(gvar_40B4A4 == v8) {
                    v28 = 5;
                    goto loc_407C8C;
                }
                else if(v8 == 48) {
                    v18 = 1;
                    goto loc_407A22;
                }
                else {
                loc_407C5A:
                    ptr2 = ptr3;
                    break loc_407A22;
                }
            }
            case 3: {
                v22 = 1;
            loc_407AFD:
                while(1) {
                    char v34 = gvar_40B4A0 == 1;
                    char v35 = (int)gvar_40B4A0 < 1;
                    char v36 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                    int v37 = (int)v8;
                    if(!v34 && v35 == v36) {
                        v7 = sub_404318(v37, 4);
                    }
                    else {
                        unsigned int v38 = gvar_40B490;
                        v7 = (unsigned int)*(char*)(v37 * 2 + v38) & 0x4;
                    }
                    if(!v7) {
                    loc_407B4A:
                        if(gvar_40B4A4 != v8) {
                        loc_407BB4:
                            if(v8 != 43 && v8 != 45) {
                            loc_407AB0:
                                if(v8 <= 67 || (v8 > 69 && (v8 <= 99 || v8 > 101))) {
                                    goto loc_407A6A;
                                }
                                else {
                                    v28 = 6;
                                }
                            }
                            else {
                            loc_407AC8:
                                --ptr2;
                                v28 = 11;
                            }
                        loc_407C8C:
                            v18 = v28;
                        }
                        else {
                            v18 = 4;
                        }
                        goto loc_407A22;
                    }
                    else {
                        if((unsigned int)v21 < 25) {
                            char* ptr4 = ptr1;
                            ++v21;
                            ++ptr1;
                            ptr4[0] = v8 - 48;
                        }
                        else {
                            ++v26;
                        }
                        v8 = *ptr2;
                        ++ptr2;
                    }
                }
                goto loc_407B4A;
            }
            case 4: {
                char v39 = v21 ? 0: 1;
                v22 = 1;
                v23 = 1;
                if(v39) {
                    while(v8 == 48) {
                        --v26;
                        v8 = *ptr2;
                        ++ptr2;
                    }
                loc_407B6C:
                    while(1) {
                        char v40 = gvar_40B4A0 == 1;
                        char v41 = (int)gvar_40B4A0 < 1;
                        char v42 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                        int v43 = (int)v8;
                        if(!v40 && v41 == v42) {
                            v6 = sub_404318(v43, 4);
                        }
                        else {
                            unsigned int v44 = gvar_40B490;
                            v6 = (unsigned int)*(char*)(v43 * 2 + v44) & 0x4;
                        }
                        if(!v6) {
                            goto loc_407BB4;
                        }
                        else {
                            if((unsigned int)v21 < 25) {
                                ++v21;
                                char* ptr5 = ptr1;
                                ++ptr1;
                                --v26;
                                ptr5[0] = v8 - 48;
                            }
                            v8 = *ptr2;
                            ++ptr2;
                        }
                    }
                    goto loc_407AFD;
                }
                else {
                    goto loc_407B6C;
                }
            }
            case 5: {
                char v45 = gvar_40B4A0 == 1;
                char v46 = (int)gvar_40B4A0 < 1;
                char v47 = (((gvar_40B4A0 - 1) ^ gvar_40B4A0) & (gvar_40B4A0 ^ 0x1)) < 0;
                v23 = 1;
                int v48 = (int)v8;
                if(!v45 && v46 == v47) {
                    v5 = sub_404318(v48, 4);
                }
                else {
                    unsigned int v49 = gvar_40B490;
                    v5 = (unsigned int)*(char*)(v48 * 2 + v49) & 0x4;
                }
                if(!v5) {
                    goto loc_407C5A;
                }
                else {
                    v18 = 4;
                    --ptr2;
                    goto loc_407A22;
                }
            }
            case 6: {
                char v50 = v8 < 49;
                char v51 = (((v8 - 49) ^ v8) & (v8 ^ 0x31)) < 0;
                ptr0 = ptr2 - 2;
                ptr3 = ptr2 - 2;
                if(v50 == v51 && v8 <= 57) {
                    v28 = 9;
                    v18 = v28;
                    --ptr2;
                    goto loc_407A22;
                }
                else {
                    int v52 = (unsigned int)v8 - 43;
                    if(!v52) {
                        v28 = 7;
                        goto loc_407C8C;
                    }
                    else {
                        unsigned int v53 = (unsigned int)(v52 - 2);
                        if(!v53) {
                            v20 = 0xffffffff;
                            v28 = 7;
                            v18 = 7;
                            goto loc_407A22;
                        }
                        else if(v53 != 3) {
                            goto loc_407D27;
                        }
                        else {
                            v28 = 8;
                            goto loc_407C8C;
                        }
                    }
                }
            }
            case 7: {
                if(v8 >= 49 && v8 <= 57) {
                    v28 = 9;
                    v18 = v28;
                    --ptr2;
                    goto loc_407A22;
                }
                else if(v8 != 48) {
                    goto loc_407C5A;
                }
                else {
                    v28 = 8;
                    goto loc_407C8C;
                }
            }
            case 8: {
                v24 = 1;
            loc_407C2C:
                while(v8 == 48) {
                    v8 = *ptr2;
                    ++ptr2;
                }
                if(v8 >= 49 && v8 <= 57) {
                    v28 = 9;
                    v18 = v28;
                    --ptr2;
                    goto loc_407A22;
                }
                else {
                loc_407A6A:
                    --ptr2;
                    break loc_407A22;
                }
            }
            case 9: {
                v24 = 1;
                v29 = 0;
                while(1) {
                    int v54 = (int)v8;
                    int v55 = (int)gvar_40B4A0 > 1 ? sub_404318(v54, 4): (unsigned int)*(char*)(v54 * 2 + gvar_40B490) & 0x4;
                    if(!v55) {
                    loc_407CF2:
                        v25 = v29;
                        while(1) {
                            int v56 = (int)v8;
                            int v57 = (int)gvar_40B4A0 > 1 ? sub_404318(v56, 4): (unsigned int)*(char*)(v56 * 2 + gvar_40B490) & 0x4;
                            if(!v57) {
                                goto loc_407A6A;
                            }
                            else {
                                v8 = *ptr2;
                                ++ptr2;
                            }
                        }
                        goto loc_407C2C;
                    }
                    else {
                        v29 = v29 * 10 + (int)v8 - 48;
                        if(v29 > 5200) {
                            v29 = 0x1451;
                            goto loc_407CF2;
                        }
                        else {
                            v8 = *ptr2;
                            ++ptr2;
                        }
                    }
                }
                v29 = 0x1451;
                goto loc_407CF2;
            }
            case 10: 
            case 11: {
                if(param6) {
                    int v58 = (unsigned int)v8 - 43;
                    char v59 = v58 ? 0: 1;
                    ptr0 = ptr2 - 1;
                    ptr3 = ptr2 - 1;
                    if(v59) {
                        v28 = 7;
                        goto loc_407C8C;
                    }
                    else if(!(v58 - 2)) {
                        v20 = 0xffffffff;
                        v28 = 7;
                        v18 = 7;
                        goto loc_407A22;
                    }
                    else {
                    loc_407D27:
                        ptr2 = ptr0;
                        break loc_407A22;
                    }
                }
                else {
                    v28 = 10;
                    v18 = 10;
                    --ptr2;
                }
            }
        }
    }
    while(v18 != 10);
    char v60 = v22 ? 0: 1;
    *(char**)param1 = ptr2;
    if(!v60) {
        v28 = 24;
        if((unsigned int)v21 > 24) {
            if(v14 >= 5) {
                ++v14;
            }
            v21 = 24;
            v4 = (unsigned int)(ptr1 - 1);
            ++v26;
        }
        else {
            v4 = (unsigned int)ptr1;
        }
        if((unsigned int)v21 < 0 || (v21 ? 0: 1)) {
            goto loc_407DF5;
        }
        else {
            --v4;
            while(!*(char*)v4) {
                --v21;
                ++v26;
                --v4;
            }
            sub_4078EB(&v10, v21, &v13);
            int v61 = v25;
            if(v20 >= 0x80000000) {
                v61 = 0 - v61;
            }
            v4 = (unsigned int)(v61 + v26);
            if(v24 == 0) {
                v4 += param4;
            }
            if(v23 == 0) {
                v4 -= param5;
            }
            if((int)v4 > 5200) {
                v2 = 0;
                v0 = 0x7fff;
                v1 = 0x80000000;
                v3 = 0;
            }
            else if((int)v4 < -5200) {
                goto loc_407DF5;
            }
            else {
                sub_408948((short*)&v13, v4, param3);
                v3 = v13;
                v2 = v12;
                v1 = v9;
                v0 = v15;
            }
        }
    }
    else {
    loc_407DF5:
        v3 = 0;
        v0 = 0;
        v1 = 0;
        v2 = 0;
    }
    short* ptr6 = param0;
    int v62 = v0 | v19;
    *(int*)(ptr6 + 3) = v1;
    *(int*)(ptr6 + 1) = v2;
    *(ptr6 + 5) = (unsigned short)v62;
    *ptr6 = (unsigned short)v3;
    sub_4041A2(v16);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407E50(unsigned int param0, unsigned int param1, char* param2, int* param3, char param4, short* param5) {
    char* _Source;
    int result;
    unsigned short v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    unsigned int v6 = gvar_40B498;
    int v7 = v5;
    short* ptr0 = param5;
    int* ptr1 = (int*)((int)param2 & 0x8000);
    char v8 = 0xcc;
    char v9 = 0xcc;
    char v10 = 0xcc;
    char v11 = 0xcc;
    char v12 = 0xcc;
    char v13 = 0xcc;
    char v14 = 0xcc;
    char v15 = 0xcc;
    char v16 = 0xcc;
    char v17 = 0xcc;
    char v18 = 251;
    char v19 = 63;
    int v20 = 1;
    unsigned char* ptr2 = (unsigned char*)((int)param2 & 0x7fff);
    *(char*)(ptr0 + 1) = (unsigned short)ptr1 ? 45: 32;
    unsigned int v21 = param1;
    if(!((unsigned short)ptr2 ? 0: 1) || v21 || v21 != param0) {
        if((unsigned short)ptr2 != 0x7fff) {
            int v22 = (unsigned int)(unsigned short)ptr2;
            short v23 = 0;
            unsigned int v24 = param0;
            int v25 = (((v21 >>> 24) * 2 + (v22 >>> 8)) * 77 + v22 * 19728 - 0x134312f4) >> 16;
            *(int*)&v0 = 0 - (unsigned int)(unsigned short)v25;
            *(short*)&v3 = (unsigned short)ptr2;
            sub_408948(&v23, *(unsigned int*)&v0, 1);
            if(*(unsigned short*)&v3 >= 0x3fff) {
                *(short**)&v0 = &v23;
                ++v25;
                sub_408716(v0, &v8);
            }
            char v26 = param4 & 0x1 ? 0: 1;
            int* ptr3 = param3;
            *ptr0 = (unsigned short)v25;
            if(!v26) {
                ptr3 = (int*)((int)(unsigned char*)(unsigned short)v25 + (int)ptr3);
                if((int)ptr3 <= 0) {
                    goto loc_407FC6;
                }
            }
            if((int)ptr3 > 21) {
                ptr3 = (int*)0x15;
            }
            int v27 = (unsigned int)*(short*)&v3 - 0x3ffe;
            *(short*)&v3 = 0;
            param2 = (char*)0x8;
            do {
                *(int*)&v0 = &loc_407FF6;
                /*BAD_CALL!*/ sub_407890((int*)&v23);
                --param2;
            }
            while(param2);
            if(v27 < 0) {
                int counter = (unsigned int)(0 - (unsigned char)v27);
                if(counter > 0) {
                    do {
                        *(int*)&v0 = &loc_408013;
                        /*BAD_CALL!*/ sub_4078BE((int*)&v23);
                        --counter;
                    }
                    while(counter);
                }
            }
            char* ptr4 = (char*)((char*)ptr3 + 1);
            char* ptr5 = (char*)(ptr0 + 2);
            char* ptr6 = (char*)(ptr0 + 2);
            if((int)ptr4 > 0) {
                param2 = ptr4;
                do {
                    short v28 = *(int*)&v23;
                    char* ptr7 = (char*)((char*)&v24 + 2);
                    *&v1 = *(int*)ptr7;
                    _Source = (char*)&v23;
                    *(&v1 + 1) = *(int*)(ptr7 + 4);
                    *(int*)&v0 = &loc_408039;
                    /*BAD_CALL!*/ sub_407890((int*)&v23);
                    *(short**)&v0 = &v23;
                    sub_407890(*(int**)&v0);
                    sub_407832((unsigned int*)&v23, &v28);
                    int* ptr8 = /*BAD_CALL!*/ sub_407890((int*)&v23);
                    ptr4 = ptr6;
                    ++ptr6;
                    --param2;
                    v4 = param2 ? 0: 1;
                    *ptr4 = v2 + 48;
                    v2 = 0;
                }
                while(!v4);
                ptr5 = ptr6;
            }
            char* ptr9 = ptr5 - 1;
            unsigned char* ptr10 = (unsigned char*)(ptr9 - 1);
            char* ptr11 = (char*)(ptr0 + 2);
            if(*ptr9 >= 53) {
                while((unsigned int)ptr10 >= (unsigned int)ptr11 && *ptr10 == 57) {
                    *ptr10 = 48;
                    --ptr10;
                }
                if((unsigned int)ptr10 < (unsigned int)ptr11) {
                    ++ptr10;
                    *ptr0 = *ptr0 + 1;
                }
                *ptr10 = *ptr10 + 1;
            }
            else {
                while((unsigned int)ptr10 >= (unsigned int)ptr11 && *ptr10 == 48) {
                    --ptr10;
                }
                if((unsigned int)ptr10 < (unsigned int)ptr11) {
                    *ptr11 = 48;
                    *ptr0 = 0;
                    *(char*)(ptr0 + 1) = 32;
                    *(char*)((char*)ptr0 + 3) = 1;
                    *(char*)((char*)ptr0 + 5) = 0;
                    sub_4041A2(v6);
                    return result;
                }
            }
            ptr10 = (unsigned int)((unsigned char)ptr10 - (unsigned char)ptr0 - 3) | ((unsigned int)(int*)((int)(int*)((int)ptr10 >>> 8) & 0xffffff) << 8);
            *(char*)((char*)ptr0 + 3) = (unsigned char)ptr10;
            *(char*)((int*)((int)(unsigned char)ptr10 + (int)ptr0) + 1) = 0;
            sub_4041A2(v6);
            return result;
        }
        *ptr0 = 1;
        if((v21 != 0x80000000 || param0) && !(v21 & 0x40000000)) {
            _Source = "1#SNAN";
            goto loc_407F44;
        }
        else {
            if((unsigned short)ptr1 && v21 == 0xc0000000) {
                if(param0) {
                    goto loc_407F3C;
                }
                else {
                    _Source = "1#IND";
                    goto loc_407F27;
                }
            }
            if(v21 == 0x80000000 && !param0) {
                _Source = "1#INF";
            loc_407F27:
                *(int**)&v0 = (int*)(ptr0 + 2);
                strcpy(*(char**)&v0, _Source);
                *(char*)((char*)ptr0 + 3) = 5;
            }
            else {
            loc_407F3C:
                _Source = "1#QNAN";
            loc_407F44:
                *(int**)&v0 = (int*)(ptr0 + 2);
                strcpy(*(char**)&v0, _Source);
                *(char*)((char*)ptr0 + 3) = 6;
            }
        }
    }
    else {
    loc_407FC6:
        *(char*)(ptr0 + 2) = 48;
        *ptr0 = 0;
        *(char*)(ptr0 + 1) = 32;
        *(char*)((char*)ptr0 + 3) = 1;
        *(char*)((char*)ptr0 + 5) = 0;
    }
    sub_4041A2(v6);
    return result;
}

int sub_4080DE(int param0, int param1) {
    int result;
    unsigned int* ptr0;
    int v0 = param0;
    if(!v0) {
        result = sub_403DDF(param1);
    }
    else {
        int* ptr1 = (int*)param1;
        if(!ptr1) {
            sub_40403C(v0);
            return 0;
        }
        else if(gvar_40BEC4 == 3) {
            do {
                int* ptr2 = NULL;
                if((unsigned int)ptr1 <= 0xffffffe0) {
                    unsigned int* ptr3 = (unsigned int*)sub_405D85(v0);
                    if(ptr3) {
                        if(gvar_40BC84 >= (unsigned int)ptr1) {
                            int v1 = sub_406285(ptr3, (unsigned int*)v0, ptr1);
                            if(v1) {
                                ptr2 = (int*)v0;
                                goto loc_408184;
                            }
                            else {
                                ptr2 = sub_406564((int)ptr1);
                            }
                            if(ptr2) {
                                int* ptr4 = (int*)(*(int*)(v0 - 4) - 1);
                                if(ptr4 >= ptr1) {
                                    ptr4 = ptr1;
                                }
                                unk_lib_sub2(ptr2, (int*)v0, ptr4);
                                ptr3 = (unsigned int*)sub_405D85(v0);
                                sub_405DB0(ptr3, (unsigned int*)v0);
                            loc_408184:
                                if(ptr2) {
                                    goto loc_4081C4;
                                }
                            }
                            goto loc_408188;
                        }
                        else {
                        loc_408188:
                            if(!ptr1) {
                                ptr1 = (int*)0x1;
                            }
                            ptr1 = (int*)((int)(int*)((char*)ptr1 + 15) & 0xfffffff0);
                            ptr2 = (int*)HeapAlloc(gvar_40BEC0, 0, (SIZE_T)ptr1);
                            if(ptr2) {
                                int* ptr5 = (int*)(*(int*)(v0 - 4) - 1);
                                if(ptr5 >= ptr1) {
                                    ptr5 = ptr1;
                                }
                                unk_lib_sub2(ptr2, (int*)v0, ptr5);
                                sub_405DB0(ptr3, (unsigned int*)v0);
                            }
                        }
                    loc_4081C4:
                        if(!ptr3) {
                            goto loc_4081C8;
                        }
                    }
                    else {
                    loc_4081C8:
                        if(!ptr1) {
                            ptr1 = (int*)0x1;
                        }
                        ptr1 = (int*)((int)(int*)((char*)ptr1 + 15) & 0xfffffff0);
                        ptr2 = (int*)HeapReAlloc(gvar_40BEC0, 0, (LPVOID)v0, (SIZE_T)ptr1);
                    }
                    if(ptr2) {
                        return (int)ptr2;
                    }
                }
                if(!gvar_40BC48) {
                    return (int)ptr2;
                }
                ptr0 = (unsigned int*)sub_406B77();
            }
            while(ptr0);
            return 0;
        }
        do {
            result = 0;
            if((unsigned int)ptr1 <= 0xffffffe0) {
                if(!ptr1) {
                    ptr1 = (int*)0x1;
                }
                result = (int)HeapReAlloc(gvar_40BEC0, 0, (LPVOID)v0, (SIZE_T)ptr1);
                if(result) {
                    return result;
                }
            }
            if(!gvar_40BC48) {
                return result;
            }
            ptr0 = (unsigned int*)sub_406B77();
        }
        while(ptr0);
        result = 0;
    }
    return result;
}

SIZE_T sub_408240(int param0) {
    if(gvar_40BEC4 == 3) {
        int v0 = sub_405D85(param0);
        if(v0) {
            return (SIZE_T)(*(unsigned int*)(param0 - 4) - 9);
        }
    }
    return HeapSize(gvar_40BEC0, 0, (LPCVOID)param0);
}

unsigned int sub_408278(unsigned int param0) {
    unsigned int v0 = param0;
    gvar_40BA54 = param0;
    char v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 0;
    if(gvar_40B5F8 != v0) {
        int v5 = 1;
    loc_40828D:
        char v6 = 0;
        char v7 = 1;
        char v8 = 1;
        char v9 = 1;
        char v10 = 0;
        char v11 = 1;
    }
    else {
        goto loc_40828D;
    }
}

unsigned int sub_408292() {
    unsigned int result;
    if(result >= 19 && result <= 36) {
        gvar_40BA50 = 13;
    }
    else if(result >= 188) {
        gvar_40BA50 = 8;
        if(result > 202) {
            gvar_40BA50 = 22;
            return result;
        }
    }
    else {
        gvar_40BA50 = 22;
    }
    return result;
}

LONG sub_4082D7(int* param0, LONG param1, LONG param2, DWORD dwMoveMethod) {
    LONG result;
    if(gvar_40BEC8 > (unsigned int)param0 && (*(char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(LONG*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1) & 0x1)) {
        LONG lDistanceToMove = param1;
        LONG v0 = param2;
        int* hFile = (int*)sub_4083F0(param0);
        if(hFile == -1) {
            gvar_40BA50 = 9;
            return -1;
        }
        DWORD v1 = SetFilePointer(hFile, lDistanceToMove, &v0, dwMoveMethod);
        lDistanceToMove = (LONG)v1;
        if(v1 == -1) {
            DWORD v2 = GetLastError();
            if(v2) {
                sub_408278((unsigned int)v2);
                return -1;
            }
        }
        char* ptr0 = (char*)((int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0)) + 1);
        *ptr0 = *ptr0 & 0xfd;
        result = lDistanceToMove;
    }
    else {
        gvar_40BA54 = 0;
        gvar_40BA50 = 9;
        result = -1;
    }
    return result;
}

int sub_4083F0(int* param0) {
    if(gvar_40BEC8 > (unsigned int)param0) {
        int* ptr0 = (int*)((int)(int*)((int)(int*)((int)param0 & 0x1f) * 8) + *(unsigned int*)((int)(int*)((int)(int*)((int)param0 >> 5) * 4) + (int)&gvar_40BEE0));
        if((*(char*)(ptr0 + 1) & 0x1)) {
            return *ptr0;
        }
    }
    gvar_40BA54 = 0;
    gvar_40BA50 = 9;
    return -1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40850A(LCID Locale) {
    char v0;
    int result;
    unsigned int v1 = gvar_40B498;
    char v2 = 0;
    int v3 = GetLocaleInfoA(Locale, 0x1004, &v0, 6);
    if(v3) {
        sub_4089CE((char*)&v0);
    }
    sub_4041A2((int)v1);
    return result;
}

int sub_40854D(void* param0) {
    int v0;
    char* ptr0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    char v7;
    int v8;
    int v9;
    LPCCH lpMultiByteStr;
    int cbMultiByte1;
    int cchWideChar;
    char v10;
    int v11;
    char v12;
    int* ptr1;
    void* ptr2 = (void*)&loc_408559;
    int v13 = SEH_prolog(&gvar_409D98, 56);
    unsigned int v14 = gvar_40B498;
    *(unsigned int*)(ptr1 - 7) = gvar_40B498;
    int v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 1;
    char v19 = 0;
    char v20 = 0;
    *(ptr1 - 13) = 0;
    *(ptr1 - 17) = 0;
    int* ptr3 = *(unsigned int*)(ptr1 + 5);
    int cbMultiByte = *ptr3;
    *(ptr1 - 16) = *ptr3;
    *(ptr1 - 15) = 0;
    unsigned int v21 = *(unsigned int*)(ptr1 + 2);
    char v22 = *(ptr1 + 3) == v21;
    char v23 = *(ptr1 + 3) > (int)v21;
    char v24 = __parity__((unsigned char)v21 - (unsigned char)*(ptr1 + 3));
    char v25 = *(unsigned int*)(ptr1 + 3) > v21;
    char v26 = (((v21 - *(ptr1 + 3)) ^ v21) & (*(ptr1 + 3) ^ v21)) < 0;
    char v27 = (((v21 - *(ptr1 + 3)) ^ (*(ptr1 + 3) ^ v21)) >>> 4) & 0x1;
    if(!v22) {
        LPCPINFO lpCPInfo = (LPCPINFO)(ptr1 - 12);
        *(unsigned int*)&v12 = v21;
        int v28 = 41298;
        BOOL v29 = GetCPInfo(*(UINT*)&v12, lpCPInfo);
        char v30 = v29 ? 0: 1;
        char v31 = v29 < 0;
        char v32 = __parity__((unsigned char)v29);
        char v33 = 0;
        char v34 = 0;
        if(!v30) {
            char v35 = *(ptr1 - 12) == 1;
            char v36 = *(ptr1 - 12) < 1;
            char v37 = __parity__((unsigned char)*(ptr1 - 12) - 1);
            char v38 = *(unsigned int*)(ptr1 - 12) < 1;
            char v39 = (((*(ptr1 - 12) - 1) ^ *(ptr1 - 12)) & (*(ptr1 - 12) ^ 0x1)) < 0;
            char v40 = (((*(ptr1 - 12) - 1) ^ (*(ptr1 - 12) ^ 0x1)) >>> 4) & 0x1;
            if(v35) {
                LPCPINFO lpCPInfo1 = (LPCPINFO)(ptr1 - 12);
                ptr2 = (LPCPINFO)(ptr1 - 12);
                *(int*)&v12 = *(ptr1 + 3);
                BOOL v41 = GetCPInfo(*(UINT*)&v12, lpCPInfo1);
                char v42 = v41 ? 0: 1;
                char v43 = v41 < 0;
                char v44 = __parity__((unsigned char)v41);
                char v45 = 0;
                char v46 = 0;
                if(!v42) {
                    char v47 = *(ptr1 - 12) == 1;
                    char v48 = *(ptr1 - 12) < 1;
                    char v49 = __parity__((unsigned char)*(ptr1 - 12) - 1);
                    char v50 = *(unsigned int*)(ptr1 - 12) < 1;
                    char v51 = (((*(ptr1 - 12) - 1) ^ *(ptr1 - 12)) & (*(ptr1 - 12) ^ 0x1)) < 0;
                    char v52 = (((*(ptr1 - 12) - 1) ^ (*(ptr1 - 12) ^ 0x1)) >>> 4) & 0x1;
                    if(v47) {
                        *(ptr1 - 15) = 1;
                    }
                }
            }
        }
        char v53 = *(ptr1 - 15) == 0;
        char v54 = *(ptr1 - 15) < 0;
        char v55 = __parity__((unsigned char)*(ptr1 - 15));
        char v56 = *(unsigned int*)(ptr1 - 15) < 0;
        char v57 = 0;
        char v58 = 0;
        if(!v53) {
            char v59 = cbMultiByte == -1;
            char v60 = cbMultiByte < -1;
            char v61 = __parity__((unsigned char)cbMultiByte - 0xFF);
            char v62 = (unsigned int)cbMultiByte < 0xffffffff;
            char v63 = (((cbMultiByte + 1) ^ cbMultiByte) & ~cbMultiByte) < 0;
            char v64 = (((cbMultiByte + 1) ^ ~cbMultiByte) >>> 4) & 0x1;
            if(!v59) {
                cchWideChar = cbMultiByte;
            }
            else {
                ptr2 = *(void**)(ptr1 + 4);
                *(int*)&v12 = &loc_4085C7;
                size_t v65 = /*BAD_CALL!*/ strlen((char*)ptr2);
                param0 = ptr2;
                size_t v66 = v65;
                size_t v67 = v65;
                cchWideChar = (int)(v66 + 1);
                char v68 = cchWideChar ? 0: 1;
                char v69 = cchWideChar < 0;
                char v70 = __parity__((unsigned char)cchWideChar);
                char v71 = (((v67 ^ 0x1) ^ cchWideChar) >>> 4) & 0x1;
                char v72 = ((cchWideChar ^ v67) & ~(v67 ^ 0x1)) < 0;
            }
            *(ptr1 - 14) = cchWideChar;
        }
        else {
            cchWideChar = *(ptr1 - 14);
        }
        char v73 = *(ptr1 - 15) == 0;
        char v74 = *(ptr1 - 15) < 0;
        char v75 = __parity__((unsigned char)*(ptr1 - 15));
        char v76 = *(unsigned int*)(ptr1 - 15) < 0;
        char v77 = 0;
        char v78 = 0;
        if(v73) {
            *(int*)&v12 = 0;
            cbMultiByte1 = cbMultiByte;
            lpMultiByteStr = *(LPCCH*)(ptr1 + 4);
            v9 = 1;
            v8 = MultiByteToWideChar(*(UINT*)(ptr1 + 2), 1, lpMultiByteStr, cbMultiByte, *(LPWSTR*)&v12, 0);
            cchWideChar = v8;
            *(ptr1 - 14) = v8;
            char v79 = cchWideChar == 0;
            char v80 = cchWideChar < 0;
            char v81 = __parity__((unsigned char)cchWideChar);
            char v82 = (unsigned int)cchWideChar < 0;
            char v83 = 0;
            v7 = 0;
            if(v79) {
                goto loc_40864A;
            }
        }
        *(ptr1 - 1) = 0;  // __try{ (see __except:408623h)
        int v84 = cchWideChar * 2;
        int v85 = v84 + 3;
        int v86 = v85 & 0xfffffffc;
        char v87 = v86 ? 0: 1;
        char v88 = v86 < 0;
        char v89 = __parity__((unsigned char)v86);
        char v90 = 0;
        char v91 = 0;
        int v92 = sub_403D30((int)param0);
        *(char**)(ptr1 - 6) = &v11;
        v6 = (int)&v11;
        *(char**)(ptr1 - 18) = &v11;
        int* ptr4 = (int*)(cchWideChar * 2);
        *(int*)&v12 = 0;
        char* ptr5 = sub_4045E0(&v11, 0, ptr4);
        *(ptr1 - 1) = -1;  // } (starts at 4085F2h)
        char v93 = *(ptr1 - 1) ? 0: 1;  // } (starts at 4085F2h)
        char v94 = *(ptr1 - 1) < 0;  // } (starts at 4085F2h)
        char v95 = __parity__((unsigned char)*(ptr1 - 1));  // } (starts at 4085F2h)
        char v96 = 0;  // } (starts at 4085F2h)
        char v97 = 0;  // } (starts at 4085F2h)
        char v98 = &v10 == 8;
        char v99 = (int)&v11 < 0;
        char v100 = __parity__((unsigned char)&v10 - 8);
        char v101 = (unsigned int)&v10 < 8;
        char v102 = 0;
        char v103 = 0;
        if(v98) {
            *(int*)&v12 = 2;
            v8 = sub_404245(*(int*)&v12, cchWideChar);
            int v104 = *(int*)&v12;
            void* ptr6 = ptr2;
            v6 = v8;
            char v105 = v6 == 0;
            char v106 = v6 < 0;
            char v107 = __parity__((unsigned char)v6);
            char v108 = (unsigned int)v6 < 0;
            char v109 = 0;
            v7 = 0;
            if(v105) {
            loc_40864A:
                int v110 = 0;
                v5 = 1;
                v4 = 0;
                v3 = 1;
                v2 = 0;
                v1 = 0;
                goto loc_408708;
            }
            else {
                *(ptr1 - 17) = 1;
            }
        }
        *(char**)&v12 = &v11;
        cbMultiByte1 = *(ptr1 - 16);
        lpMultiByteStr = *(LPCCH*)(ptr1 + 4);
        v9 = 1;
        int v111 = MultiByteToWideChar(*(UINT*)(ptr1 + 2), 1, lpMultiByteStr, cbMultiByte1, *(LPWSTR*)&v12, cchWideChar);
        char v112 = v111 ? 0: 1;
        char v113 = v111 < 0;
        char v114 = __parity__((unsigned char)v111);
        char v115 = 0;
        char v116 = 0;
        if(!v112) {
            char v117 = *(ptr1 + 6) == 0;
            char v118 = *(ptr1 + 6) < 0;
            char v119 = __parity__((unsigned char)*(ptr1 + 6));
            char v120 = *(unsigned int*)(ptr1 + 6) < 0;
            char v121 = 0;
            char v122 = 0;
            if(!v117) {
                *(int*)&v12 = 0;
                cbMultiByte1 = *(ptr1 + 7);
                lpMultiByteStr = *(LPCCH*)(ptr1 + 6);
                ptr0 = &v11;
                v0 = 0;
                int v123 = WideCharToMultiByte(*(UINT*)(ptr1 + 3), 0, (LPCWCH)&v11, cchWideChar, lpMultiByteStr, cbMultiByte1, *(LPCCH*)&v12, NULL);
                char v124 = v123 ? 0: 1;
                char v125 = v123 < 0;
                char v126 = __parity__((unsigned char)v123);
                char v127 = 0;
                char v128 = 0;
                if(!v124) {
                    int v129 = *(ptr1 + 6);
                    *(ptr1 - 13) = *(ptr1 + 6);
                }
            }
            else {
                char v130 = *(ptr1 - 15) == 0;
                char v131 = *(ptr1 - 15) < 0;
                char v132 = __parity__((unsigned char)*(ptr1 - 15));
                char v133 = *(unsigned int*)(ptr1 - 15) < 0;
                char v134 = 0;
                char v135 = 0;
                if(v130) {
                    *(int*)&v12 = 0;
                    cbMultiByte1 = 0;
                    lpMultiByteStr = NULL;
                    ptr0 = &v11;
                    v0 = 0;
                    int v136 = WideCharToMultiByte(*(UINT*)(ptr1 + 3), 0, (LPCWCH)&v11, cchWideChar, NULL, 0, *(LPCCH*)&v12, NULL);
                    cchWideChar = v136;
                    char v137 = cchWideChar == 0;
                    char v138 = cchWideChar < 0;
                    char v139 = __parity__((unsigned char)cchWideChar);
                    char v140 = (unsigned int)cchWideChar < 0;
                    char v141 = 0;
                    char v142 = 0;
                    if(!v137) {
                        goto loc_4086B4;
                    }
                }
                else {
                loc_4086B4:
                    *(int*)&v12 = 1;
                    int v143 = sub_404245(*(int*)&v12, cchWideChar);
                    int v144 = *(int*)&v12;
                    void* ptr7 = ptr2;
                    *(ptr1 - 13) = v143;
                    char v145 = v143 == 0;
                    char v146 = v143 < 0;
                    char v147 = __parity__((unsigned char)v143);
                    char v148 = (unsigned int)v143 < 0;
                    char v149 = 0;
                    char v150 = 0;
                    if(!v145) {
                        *(int*)&v12 = 0;
                        lpMultiByteStr = (LPCCH)v143;
                        ptr0 = &v11;
                        v0 = 0;
                        int v151 = WideCharToMultiByte(*(UINT*)(ptr1 + 3), 0, (LPCWCH)&v11, cchWideChar, (LPSTR)v143, cchWideChar, *(LPCCH*)&v12, NULL);
                        char v152 = v151 == 0;
                        char v153 = v151 < 0;
                        char v154 = __parity__((unsigned char)v151);
                        char v155 = (unsigned int)v151 < 0;
                        char v156 = 0;
                        char v157 = 0;
                        if(v152) {
                            ptr2 = *(void**)(ptr1 - 13);
                            *(int*)&v12 = &loc_4086E0;
                            unsigned int* ptr8 = /*BAD_CALL!*/ sub_40403C((int)ptr2);
                            void* ptr9 = ptr2;
                            *(ptr1 - 13) = 0;
                        }
                        else {
                            char v158 = *(ptr1 - 16) == -1;
                            char v159 = *(ptr1 - 16) < -1;
                            char v160 = __parity__((unsigned char)*(ptr1 - 16) - 0xFF);
                            char v161 = *(unsigned int*)(ptr1 - 16) < 0xffffffff;
                            char v162 = (((*(ptr1 - 16) + 1) ^ *(ptr1 - 16)) & ~*(ptr1 - 16)) < 0;
                            char v163 = (((*(ptr1 - 16) + 1) ^ ~*(ptr1 - 16)) >>> 4) & 0x1;
                            if(!v158) {
                                int* ptr10 = *(unsigned int*)(ptr1 + 5);
                                *ptr10 = v151;
                            }
                        }
                    }
                }
            }
        }
        goto loc_4086F6;
    }
    else {
        v6 = *(ptr1 - 18);
    loc_4086F6:
        v5 = *(ptr1 - 17) == 0;
        v4 = *(ptr1 - 17) < 0;
        v3 = __parity__((unsigned char)*(ptr1 - 17));
        v1 = *(unsigned int*)(ptr1 - 17) < 0;
        v2 = 0;
        v7 = 0;
        if(!v5) {
            *(int*)&v12 = &loc_408701;
            unsigned int* ptr11 = /*BAD_CALL!*/ sub_40403C(v6);
            void* ptr12 = ptr2;
        }
        int v164 = *(ptr1 - 13);
    }
loc_408708:
    int v165 = *(ptr1 - 7);
    unsigned int* ptr13 = (unsigned int*)(ptr1 - 22);
    *ptr13 = &loc_408710;
    /*BAD_CALL!*/ sub_4041A2(v165);
    int v166 = *ptr13;
    int v167 = *(int*)(ptr13 + 1);
    int v168 = *(int*)(ptr13 + 2);
    int v169 = *ptr1;
    ptr13 = (unsigned int*)(ptr1 + 1);
    int v170 = *ptr13;
    ++ptr13;
    jump v170;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408716(unsigned short param0, unsigned int* param1) {
    int v0;
    char v1;
    char v2;
    short v3;
    char v4;
    int result;
    char v5;
    char v6;
    char v7;
    int v8;
    unsigned int v9 = gvar_40B498;
    int v10 = v8;
    unsigned int* ptr0 = param1;
    unsigned int v11 = v9;
    int v12 = (unsigned int)*(short*)((char*)ptr0 + 10);
    unsigned int* ptr1 = *(unsigned int**)&param0;
    unsigned int v13 = 0;
    v5 = 0;
    *(int*)&v1 = 0;
    *(int*)&v6 = 0;
    int v14 = (unsigned int)*(short*)((char*)ptr1 + 10);
    unsigned int* ptr2 = (unsigned int*)(v12 & 0x7fff);
    int v15 = v14 & 0x7fff;
    int v16 = (v14 ^ v12) & 0x8000;
    int* ptr3 = (int*)(v15 + (int)ptr2);
    *(int**)&param0 = (int*)(v15 + (int)ptr2);
    if(((unsigned short)v15 >= 0x7fff || (unsigned short)ptr2 >= 0x7fff || (unsigned short)ptr3 > 49149)) {
    loc_408925:
        *(int*)(ptr1 + 1) = 0;
        *ptr1 = 0;
        *(int*)(ptr1 + 2) = (unsigned short)v16 > 0 ? 0xffff8000: 0x7fff8000;
    }
    else if((unsigned short)ptr3 > 0x3fbf) {
        if(!(unsigned short)v15) {
            *(int*)&param0 = *(int*)&param0 + 1;
            v0 = 0;
            if(!(*(int*)(ptr1 + 2) & 0x7fffffff) && *(int*)(ptr1 + 1) == 0 && *ptr1 == 0) {
                goto loc_40891A;
            }
        }
        if((unsigned short)ptr2 == 0) {
            *(int*)&param0 = *(int*)&param0 + 1;
            if(!(*(int*)(ptr0 + 2) & 0x7fffffff) && *(int*)(ptr0 + 1) == 0 && *ptr0 == 0) {
                *(int*)(ptr1 + 2) = 0;
                *(int*)(ptr1 + 1) = 0;
                *ptr1 = 0;
                sub_4041A2(v11);
                return result;
            }
        }
        int v17 = 0;
        unsigned char* ptr4 = &v1;
        param1 = (unsigned int*)0x5;
        do {
            int v18 = v17 * 2;
            if((int)param1 > 0) {
                short* ptr5 = (short*)(v18 + (int)ptr1);
                short* ptr6 = (short*)(ptr0 + 2);
                unsigned int* ptr7 = param1;
                do {
                    unsigned int v19 = (unsigned int)((unsigned int)*ptr5 * (unsigned int)*ptr6);
                    unsigned int* ptr8 = (unsigned int*)(ptr4 - 4);
                    unsigned int* ptr9 = (unsigned int*)(ptr4 - 4);
                    void* ptr10 = (void*)v19;
                    int v20 = sub_407811(ptr8[0], v19, ptr8);
                    if(v20) {
                        *(short*)ptr4 = *(short*)ptr4 + 1;
                    }
                    ++ptr5;
                    --ptr6;
                    ptr7 = (unsigned int*)((char*)ptr7 - 1);
                }
                while(ptr7);
            }
            ptr4 += 2;
            ++v17;
            param1 = (unsigned int*)((char*)param1 - 1);
        }
        while((int)param1 > 0);
        *(int*)&param0 = *(int*)&param0 + 0xc002;
        if((short)param0 > 0) {
            while(!(v2 & 0x80)) {
                sub_407890(&v5);
                *(int*)&param0 = *(int*)&param0 + 0xffff;
                if((short)param0 <= 0) {
                    break;
                }
            }
            if((short)param0 <= 0) {
                goto loc_408877;
            }
        }
        else {
        loc_408877:
            *(int*)&param0 = *(int*)&param0 + 0xffff;
            if(param0 >= 0x8000) {
                int counter = (unsigned int)(0 - (unsigned short)*(unsigned int*)&param0);
                *(int*)&param0 = *(int*)&param0 + counter;
                do {
                    if((v5 & 0x1)) {
                        ++v13;
                    }
                    sub_4078BE(&v5);
                    --counter;
                }
                while(counter);
                if(v13) {
                    v5 |= 1;
                }
            }
        }
        if(*(short*)&v5 > 0x8000 || (unsigned int)(v5 & 0x1ffff) == 0x18000) {
            if(*(int*)&v3 == -1) {
                *(int*)&v3 = 0;
                if(*(int*)&v7 == -1) {
                    *(int*)&v7 = 0;
                    if(*(short*)&v4 == 0xffff) {
                        *(int*)&param0 = *(int*)&param0 + 1;
                        *(short*)&v4 = 0x8000;
                    }
                    else {
                        *(short*)&v4 = *(short*)&v4 + 1;
                    }
                }
                else {
                    *(int*)&v7 = *(int*)&v7 + 1;
                }
            }
            else {
                *(int*)&v3 = *(int*)&v3 + 1;
            }
        }
        int v21 = *(int*)&param0;
        if((unsigned short)v21 >= 0x7fff) {
            goto loc_408925;
        }
        else {
            *(short*)ptr1 = v3;
            *(int*)((char*)ptr1 + 2) = *(int*)&v1;
            *(int*)((char*)ptr1 + 6) = *(int*)&v6;
            v0 = v21 | v16;
        loc_40891A:
            *(short*)((char*)ptr1 + 10) = (unsigned short)v0;
        }
    }
    else {
        *(int*)(ptr1 + 2) = 0;
        *(int*)(ptr1 + 1) = 0;
        *ptr1 = 0;
    }
    sub_4041A2(v11);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408948(short* param0, unsigned int param1, unsigned int param2) {
    char v0;
    unsigned short v1;
    int v2;
    int v3;
    int result;
    unsigned int v4 = gvar_40B498;
    int v5 = v3;
    int v6 = 4241152;
    unsigned int v7 = v4;
    if(param1 != 0) {
        if(param1 >= 0x80000000) {
            param1 = (unsigned int)(0 - param1);
            v6 = 4241504;
        }
        if(param2 == 0) {
            *param0 = 0;
        }
        while(param1 != 0) {
            unsigned int v8 = param1;
            param1 >>= 3;
            v6 += 84;
            if((v8 & 0x7) != 0) {
                unsigned int* ptr0 = (unsigned int*)((v8 & 0x7) * 12 + v6);
                if(*(short*)&ptr0[0] >= 0x8000) {
                    v0 = ptr0[0];
                    *(unsigned int*)((char*)&v2 + 2) = ptr0[1];
                    *(unsigned int*)((char*)&v2 + 6) = ptr0[2];
                    --v2;
                    ptr0 = &v0;
                }
                *(short**)&v1 = param0;
                sub_408716(v1, ptr0);
            }
        }
    }
    sub_4041A2(v7);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4089CE(char* param0) {
    char* ptr0 = param0;
    for(int i = sub_408A26((unsigned int)*ptr0); i; i = sub_408A26((unsigned int)*ptr0)) {
        ++ptr0;
    }
    unsigned int v0 = (unsigned int)*ptr0;
    char* ptr1 = ptr0 + 1;
    unsigned int v1 = v0;
    if(v0 == 45 || v0 == 43) {
        v0 = (unsigned int)*ptr1;
        ++ptr1;
    }
    unsigned int result = 0;
    while(((int)v0 < 48 || (int)v0 > 57 ? 0xffffffff: v0 - 48) != -1) {
        result = (unsigned int)(result * 10 + ((int)v0 < 48 || (int)v0 > 57 ? 0xffffffff: v0 - 48));
        v0 = (unsigned int)*ptr1;
        ++ptr1;
    }
    if(v1 == 45) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408A26(int param0) {
    char v0;
    int v1;
    *(int*)&v0 = v1;
    if((unsigned int)param0 > 0xff) {
        *(short*)&v0 = 0;
        unsigned short v2 = 0;
        if(!gvar_40BC98) {
            return 0;
        }
        int v3 = sub_4070AD(1, (int)(int*)((char*)&param0 + 2), 2, (int)&v0, (int)gvar_40BDA4, (int)gvar_40BC94, 1);
        return !v3 || v2 || !(v0 & 0x8) ? 0: 1;
    }
    else if((int)gvar_40B4A0 > 1) {
        return sub_404318(param0, 8);
    }
    return (unsigned int)*(char*)(param0 * 2 + gvar_40B490) & 0x8;
}

int* unk_lib_sub(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param2;
    int* ptr4 = param0;
    int* ptr5 = ptr3;
    int* ptr6 = ptr3;
    if(ptr2 >= ptr4 || (int*)((int)ptr5 + (int)ptr2) <= ptr4) {
        if(!(int*)((int)ptr4 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 < 8) {
            loc_404C3C:
                switch(ptr3) {
                    case 0: {
                    loc_404D23:
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                                return param0;
                            }
                        }
                    }
                    case 1: {
                    loc_404D14:
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 1);
                        ptr0 = (int*)((int)ptr3 * 4);
                        ptr2 = (int*)((int)ptr0 + (int)ptr2);
                        ptr4 = (int*)((int)ptr0 + (int)ptr4);
                        break;
                    }
                    case 2: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 3: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 4: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_404D14;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_404D23;
            }
            else {
                while(ptr3 != 0) {
                    *ptr4 = *ptr2;
                    ++ptr2;
                    ++ptr4;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)ptr4 = *(char*)ptr2;
                        return param0;
                    }
                    case 2: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        return param0;
                    }
                    case 3: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        }
        ptr0 = ptr4;
        int* ptr7 = ptr3;
        --ptr3;
        if((unsigned int)ptr7 >= 4) {
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr8 = (int*)((int)ptr0 + (int)ptr3);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr8 & 0x3);
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    ptr3 = (int*)((int)ptr8 >>> 2);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    ptr2 = (int*)((char*)ptr2 + 3);
                    ptr4 = (int*)((char*)ptr4 + 3);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr4 = *ptr2;
                            ++ptr2;
                            ++ptr4;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_404C7C:
                        ptr1 = (int*)((int)ptr8 & 0x3);
                        *(char*)ptr4 = *(char*)ptr2;
                        ptr3 = (int*)((int)ptr8 >>> 2);
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        ptr2 = (int*)((char*)ptr2 + 2);
                        ptr4 = (int*)((char*)ptr4 + 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr4 = *ptr2;
                                ++ptr2;
                                ++ptr4;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    return param0;
                                }
                                case 2: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_404CA0:
                            ptr1 = (int*)((int)ptr8 & 0x3);
                            *(char*)ptr4 = *(char*)ptr2;
                            ptr2 = (int*)((char*)ptr2 + 1);
                            ptr3 = (int*)((int)ptr8 >>> 2);
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr4 = *ptr2;
                                    ++ptr2;
                                    ++ptr4;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                                goto loc_404D14;
                            }
                        }
                    }
                    goto loc_404C3C;
                }
                case 2: {
                    goto loc_404C7C;
                }
                case 3: {
                    goto loc_404CA0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_404C34;
        }
        else {
        loc_404C34:
            switch(ptr3) {
                case -4: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    return param0;
                }
                case -3: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    return param0;
                }
                case -2: {
                    *(char*)ptr4 = *(char*)ptr2;
                    return param0;
                }
                case -1: {
                    return param0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_404C3C;
        }
    }
    else {
        int* ptr9 = (int*)((int)ptr3 + (int)ptr2) - 1;
        int* ptr10 = (int*)((int)ptr3 + (int)ptr4) - 1;
        if(!(int*)((int)ptr10 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 >= 8) {
                while(ptr3 != 0) {
                    *ptr10 = *ptr9;
                    --ptr9;
                    --ptr10;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        return param0;
                    }
                    case 2: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        return param0;
                    }
                    case 3: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            ptr3 = (int*)(0 - (int)ptr3);
            jump gvar_404E68[ptr3 + 1];
        }
        else {
            ptr0 = ptr10;
        loc_404DC8:
            switch(ptr3) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    return param0;
                }
                case 2: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    return param0;
                }
                case 3: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                    return param0;
                }
            }
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr11 = (int*)((int)ptr3 - (int)ptr0);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr11 & 0x3);
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    ptr9 = (int*)((char*)ptr9 - 1);
                    ptr3 = (int*)((int)ptr11 >>> 2);
                    ptr10 = (int*)((char*)ptr10 - 1);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr10 = *ptr9;
                            --ptr9;
                            --ptr10;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_404E03:
                        ptr1 = (int*)((int)ptr11 & 0x3);
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        ptr3 = (int*)((int)ptr11 >>> 2);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        ptr9 = (int*)((char*)ptr9 - 2);
                        ptr10 = (int*)((char*)ptr10 - 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr10 = *ptr9;
                                --ptr9;
                                --ptr10;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    return param0;
                                }
                                case 2: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_404E2B:
                            ptr1 = (int*)((int)ptr11 & 0x3);
                            *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                            *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                            ptr3 = (int*)((int)ptr11 >>> 2);
                            *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                            ptr9 = (int*)((char*)ptr9 - 3);
                            ptr10 = (int*)((char*)ptr10 - 3);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr10 = *ptr9;
                                    --ptr9;
                                    --ptr10;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 2);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 1);
                                ptr0 = (int*)((int)ptr3 * 4);
                                ptr9 = (int*)((int)ptr0 + (int)ptr9);
                                ptr10 = (int*)((int)ptr0 + (int)ptr10);
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                        return param0;
                                    }
                                }
                            }
                        }
                    }
                    ptr3 = (int*)(0 - (int)ptr3);
                    jump gvar_404E68[ptr3 + 1];
                }
                case 2: {
                    goto loc_404E03;
                }
                case 3: {
                    goto loc_404E2B;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_404DC8;
        }
    }
}

int* unk_lib_sub2(int* param0, int* param1, int* param2) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = param1;
    int* ptr3 = param2;
    int* ptr4 = param0;
    int* ptr5 = ptr3;
    int* ptr6 = ptr3;
    if(ptr2 >= ptr4 || (int*)((int)ptr5 + (int)ptr2) <= ptr4) {
        if(!(int*)((int)ptr4 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 < 8) {
            loc_405A5C:
                switch(ptr3) {
                    case 0: {
                    loc_405B43:
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                                return param0;
                            }
                        }
                    }
                    case 1: {
                    loc_405B34:
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 1);
                        ptr0 = (int*)((int)ptr3 * 4);
                        ptr2 = (int*)((int)ptr0 + (int)ptr2);
                        ptr4 = (int*)((int)ptr0 + (int)ptr4);
                        break;
                    }
                    case 2: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 3: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 4: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 5: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 6: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    case 7: {
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                        *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                        goto loc_405B34;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_405B43;
            }
            else {
                while(ptr3 != 0) {
                    *ptr4 = *ptr2;
                    ++ptr2;
                    ++ptr4;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)ptr4 = *(char*)ptr2;
                        return param0;
                    }
                    case 2: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        return param0;
                    }
                    case 3: {
                        *(char*)ptr4 = *(char*)ptr2;
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
        }
        ptr0 = ptr4;
        int* ptr7 = ptr3;
        --ptr3;
        if((unsigned int)ptr7 >= 4) {
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr8 = (int*)((int)ptr0 + (int)ptr3);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr8 & 0x3);
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    ptr3 = (int*)((int)ptr8 >>> 2);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    ptr2 = (int*)((char*)ptr2 + 3);
                    ptr4 = (int*)((char*)ptr4 + 3);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr4 = *ptr2;
                            ++ptr2;
                            ++ptr4;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)ptr4 = *(char*)ptr2;
                                return param0;
                            }
                            case 2: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                return param0;
                            }
                            case 3: {
                                *(char*)ptr4 = *(char*)ptr2;
                                *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_405A9C:
                        ptr1 = (int*)((int)ptr8 & 0x3);
                        *(char*)ptr4 = *(char*)ptr2;
                        ptr3 = (int*)((int)ptr8 >>> 2);
                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                        ptr2 = (int*)((char*)ptr2 + 2);
                        ptr4 = (int*)((char*)ptr4 + 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr4 = *ptr2;
                                ++ptr2;
                                ++ptr4;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    return param0;
                                }
                                case 2: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)ptr4 = *(char*)ptr2;
                                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_405AC0:
                            ptr1 = (int*)((int)ptr8 & 0x3);
                            *(char*)ptr4 = *(char*)ptr2;
                            ptr2 = (int*)((char*)ptr2 + 1);
                            ptr3 = (int*)((int)ptr8 >>> 2);
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr4 = *ptr2;
                                    ++ptr2;
                                    ++ptr4;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)ptr4 = *(char*)ptr2;
                                        *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                                        *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr4) - 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr2) - 2);
                                goto loc_405B34;
                            }
                        }
                    }
                    goto loc_405A5C;
                }
                case 2: {
                    goto loc_405A9C;
                }
                case 3: {
                    goto loc_405AC0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_405A54;
        }
        else {
        loc_405A54:
            switch(ptr3) {
                case -4: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    *(char*)((char*)ptr4 + 2) = *(char*)((char*)ptr2 + 2);
                    return param0;
                }
                case -3: {
                    *(char*)ptr4 = *(char*)ptr2;
                    *(char*)((char*)ptr4 + 1) = *(char*)((char*)ptr2 + 1);
                    return param0;
                }
                case -2: {
                    *(char*)ptr4 = *(char*)ptr2;
                    return param0;
                }
                case -1: {
                    return param0;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_405A5C;
        }
    }
    else {
        int* ptr9 = (int*)((int)ptr3 + (int)ptr2) - 1;
        int* ptr10 = (int*)((int)ptr3 + (int)ptr4) - 1;
        if(!(int*)((int)ptr10 & 0x3)) {
            ptr3 = (int*)((int)ptr3 >>> 2);
            ptr1 = (int*)((int)ptr6 & 0x3);
            if((unsigned int)ptr3 >= 8) {
                while(ptr3 != 0) {
                    *ptr10 = *ptr9;
                    --ptr9;
                    --ptr10;
                    ptr3 = (int*)((char*)ptr3 - 1);
                }
                switch(ptr1) {
                    case 0: {
                        return param0;
                    }
                    case 1: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        return param0;
                    }
                    case 2: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        return param0;
                    }
                    case 3: {
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                        return param0;
                    }
                    default: {
                        throw 0;
                    }
                }
            }
            ptr3 = (int*)(0 - (int)ptr3);
            jump gvar_405C80[(int*)((char*)ptr3 + 6)];
        }
        else {
            ptr0 = ptr10;
        loc_405BE8:
            switch(ptr3) {
                case 0: {
                    return param0;
                }
                case 1: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    return param0;
                }
                case 2: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    return param0;
                }
                case 3: {
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                    return param0;
                }
            }
            ptr0 = (int*)((int)ptr0 & 0x3);
            int* ptr11 = (int*)((int)ptr3 - (int)ptr0);
            switch(ptr0) {
                case 1: {
                    ptr1 = (int*)((int)ptr11 & 0x3);
                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                    ptr9 = (int*)((char*)ptr9 - 1);
                    ptr3 = (int*)((int)ptr11 >>> 2);
                    ptr10 = (int*)((char*)ptr10 - 1);
                    if((unsigned int)ptr3 >= 8) {
                        while(ptr3 != 0) {
                            *ptr10 = *ptr9;
                            --ptr9;
                            --ptr10;
                            ptr3 = (int*)((char*)ptr3 - 1);
                        }
                        switch(ptr1) {
                            case 0: {
                                return param0;
                            }
                            case 1: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                return param0;
                            }
                            case 2: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                return param0;
                            }
                            case 3: {
                                *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                return param0;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    loc_405C23:
                        ptr1 = (int*)((int)ptr11 & 0x3);
                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                        ptr3 = (int*)((int)ptr11 >>> 2);
                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                        ptr9 = (int*)((char*)ptr9 - 2);
                        ptr10 = (int*)((char*)ptr10 - 2);
                        if((unsigned int)ptr3 >= 8) {
                            while(ptr3 != 0) {
                                *ptr10 = *ptr9;
                                --ptr9;
                                --ptr10;
                                ptr3 = (int*)((char*)ptr3 - 1);
                            }
                            switch(ptr1) {
                                case 0: {
                                    return param0;
                                }
                                case 1: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    return param0;
                                }
                                case 2: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    return param0;
                                }
                                case 3: {
                                    *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                    *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                    *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                    return param0;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_405C4B:
                            ptr1 = (int*)((int)ptr11 & 0x3);
                            *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                            *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                            ptr3 = (int*)((int)ptr11 >>> 2);
                            *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                            ptr9 = (int*)((char*)ptr9 - 3);
                            ptr10 = (int*)((char*)ptr10 - 3);
                            if((unsigned int)ptr3 >= 8) {
                                while(ptr3 != 0) {
                                    *ptr10 = *ptr9;
                                    --ptr9;
                                    --ptr10;
                                    ptr3 = (int*)((char*)ptr3 - 1);
                                }
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 7) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 7);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 6) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 6);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 5) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 5);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 4) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 4);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 3) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 3);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 2) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 2);
                                *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr10) + 1) = *((int*)((int)(int*)((int)ptr3 * 4) + (int)ptr9) + 1);
                                ptr0 = (int*)((int)ptr3 * 4);
                                ptr9 = (int*)((int)ptr0 + (int)ptr9);
                                ptr10 = (int*)((int)ptr0 + (int)ptr10);
                                switch(ptr1) {
                                    case 0: {
                                        return param0;
                                    }
                                    case 1: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        return param0;
                                    }
                                    case 2: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        return param0;
                                    }
                                    case 3: {
                                        *(char*)((char*)ptr10 + 3) = *(char*)((char*)ptr9 + 3);
                                        *(char*)((char*)ptr10 + 2) = *(char*)((char*)ptr9 + 2);
                                        *(char*)((char*)ptr10 + 1) = *(char*)((char*)ptr9 + 1);
                                        return param0;
                                    }
                                    default: {
                                        throw 0;
                                        return param0;
                                    }
                                }
                            }
                        }
                    }
                    ptr3 = (int*)(0 - (int)ptr3);
                    jump gvar_405C80[(int*)((char*)ptr3 + 6)];
                }
                case 2: {
                    goto loc_405C23;
                }
                case 3: {
                    goto loc_405C4B;
                }
                default: {
                    throw 0;
                }
            }
            goto loc_405BE8;
        }
    }
}
