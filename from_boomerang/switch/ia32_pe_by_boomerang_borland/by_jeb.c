
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, unsigned int param1) {
    void* ptr0;
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    unsigned char v7;
    char v8;
    char v9;
    char v10;
    unsigned int v11;
    char v12;
    int v13;
    int v14;
    unsigned int v15;
    int v16;
    unsigned int v17;
    int v18;
    int v19;
    unsigned int v20 = gvar_40A10F;
    unsigned int v21 = gvar_40A10F;
    unsigned int v22 = v20 * 4;
    char v23 = (v21 >>> 30) & 0x1;
    char v24 = v12;
    char v25 = v22 ? 0: 1;
    char v26 = v22 >= 0x80000000;
    char v27 = __parity__((unsigned char)v22);
    gvar_40A113 = v22;
    HMODULE v28 = →KERNEL32.DLL!GetModuleHandleA(NULL);
    HMODULE v29 = v28;
    sub_402134();
    unsigned int v30 = v17;
    sub_4014D0();
    sub_402138();
    int v31 = sub_402D50(NULL);
    unsigned int v32 = v17;
    unsigned int v33 = &gvar_40A0B8;
    HMODULE v34 = →KERNEL32.DLL!GetModuleHandleA(NULL);
    gvar_40A117 = v34;
    int v35 = 0;
    int v36 = v13;
    int* ptr1 = &v36;
    int* ptr2 = &v36;
    char v37 = &v9 == 24;
    char v38 = (int)&v11 < 0;
    char v39 = __parity__((unsigned char)&v9 - 24);
    char v40 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v36 ^ 0xfffffff4) ^ (int)&v11) >>> 4) & 0x1);
    char v41 = (unsigned int)&v36 >= 12;
    char v42 = (int)(int*)((int)(int*)((int)&v36 ^ (int)&v11) & (int*)~(int)(int*)((int)&v36 ^ 0xfffffff4)) < 0;
    int v43 = v14;
    int v44 = v16;
    int v45 = v18;
    unsigned int v46 = &gvar_40A0B8;
    unsigned int v47 = gvar_40A0C8;
    unsigned int v48 = v47 & 0x1;
    char v49 = v48 ? 0: 1;
    char v50 = v48 >= 0x80000000;
    char v51 = __parity__((unsigned char)v48);
    char v52 = 0;
    char v53 = 0;
    gvar_40BBF4 = v48;
    int v54 = sub_405010();
    unsigned int v55 = gvar_40A0D8;
    void* ptr3 = (void*)gvar_40A0D8;
    unsigned int v56 = gvar_40A0D4;
    unsigned int v57 = sub_405348(v56, v55);
    int* ptr4 = &v15;
    char v58 = &v9 == 36;
    char v59 = (int)&v45 < 0;
    char v60 = __parity__((unsigned char)&v9 - 36);
    char v61 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v15 ^ 0x8) ^ (int)&v45) >>> 4) & 0x1);
    char v62 = (unsigned int)&v15 >= 0xfffffff8;
    char v63 = (int)(int*)((int)(int*)((int)&v45 ^ (int)&v15) & (int*)~(int)(int*)((int)&v15 ^ 0x8)) < 0;
    unsigned int v64 = gvar_40A0E0;
    unsigned int v65 = sub_4033A0(v64);
    void* ptr5 = ptr3;
    unsigned int* ptr6 = ptr_gvar_40A6B4;
    unsigned int* ptr7 = sub_4033B0(ptr6);
    void* ptr8 = ptr3;
    gvar_40CCD4 = 1;
    gvar_40CCD8 = &gvar_40A0B8;
    int* ptr9 = &v10;
    gvar_40CCC0 = &v10;
    int v66 = sub_402F38();
    LPCH v67 = →KERNEL32.DLL!GetEnvironmentStrings();
    gvar_40CCB0 = v67;
    LPSTR v68 = →KERNEL32.DLL!GetCommandLineA();
    gvar_40CCAC = v68;
    unsigned int* ptr10 = ptr_gvar_40BB1C;
    unsigned int* ptr11 = ptr_gvar_40BB18;
    unsigned int v69 = sub_406F78(ptr11, ptr10);
    int* ptr12 = &v15;
    char v70 = &v9 == 36;
    char v71 = (int)&v45 < 0;
    char v72 = __parity__((unsigned char)&v9 - 36);
    char v73 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v15 ^ 0x8) ^ (int)&v45) >>> 4) & 0x1);
    char v74 = (unsigned int)&v15 >= 0xfffffff8;
    char v75 = (int)(int*)((int)(int*)((int)&v45 ^ (int)&v15) & (int*)~(int)(int*)((int)&v15 ^ 0x8)) < 0;
    unsigned int v76 = gvar_40A0F8;
    unsigned int v77 = gvar_40A0F4;
    v15 = gvar_40A0F4;
    unsigned int v78 = gvar_40A0F0;
    void* ptr13 = (void*)gvar_40A0F0;
    unsigned int v79 = gvar_40A0EC;
    unsigned int v80 = sub_406FBC(v79, v78, v77, v76);
    int* ptr14 = &v19;
    char v81 = &v9 == 36;
    char v82 = (int)&v45 < 0;
    char v83 = __parity__((unsigned char)&v9 - 36);
    char v84 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x10) ^ (int)&v45) >>> 4) & 0x1);
    char v85 = (unsigned int)&v19 >= 0xfffffff0;
    char v86 = (int)(int*)((int)(int*)((int)&v45 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x10)) < 0;
    int v87 = sub_407A50();
    unsigned int* ptr15 = (unsigned int*)v87;
    char v88 = v87 ? 0: 1;
    char v89 = v87 < 0;
    char v90 = __parity__((unsigned char)v87);
    char v91 = 0;
    char v92 = 0;
    if(!v88) {
        unsigned int v93 = ptr15[0];
        ptr15[v93 + 1] = 0xffffffff;
        unsigned int* ptr16 = sub_407A58(ptr15, 0);
        int v94 = 0;
        char v95 = 1;
        char v96 = 0;
        char v97 = 1;
        char v98 = 0;
        char v99 = 0;
        v11 = 0;
        int* ptr17 = (int*)(ptr15 + 1);
        while(1) {
            unsigned int v100 = ptr15[0];
            char v101 = v100 == v11;
            char v102 = (int)v100 < (int)v11;
            char v103 = __parity__((unsigned char)v100 - (unsigned char)v11);
            char v104 = v100 < v11;
            char v105 = (int)(((v100 - v11) ^ v100) & (v100 ^ v11)) < 0;
            char v106 = (((v100 - v11) ^ (v100 ^ v11)) >>> 4) & 0x1;
            if((v101 || v102 != v105)) {
                break;
            }
            else {
                int v107 = *ptr17;
                int v108 = *(int*)(v107 + 20);
                *(int*)(v107 + 24)(0, v108);
                int* ptr18 = &v15;
                char v109 = &v9 == 36;
                char v110 = (int)&v45 < 0;
                char v111 = __parity__((unsigned char)&v9 - 36);
                char v112 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v15 ^ 0x8) ^ (int)&v45) >>> 4) & 0x1);
                char v113 = (unsigned int)&v15 >= 0xfffffff8;
                char v114 = (int)(int*)((int)(int*)((int)&v45 ^ (int)&v15) & (int*)~(int)(int*)((int)&v15 ^ 0x8)) < 0;
                ++v11;
                int* ptr19 = ptr17;
                ++ptr17;
                char v115 = ptr17 ? 0: 1;
                char v116 = (int)ptr17 < 0;
                char v117 = __parity__((unsigned char)ptr17);
                char v118 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr19 ^ 0x4) ^ (int)ptr17) >>> 4) & 0x1);
                char v119 = (unsigned int)ptr19 >= 0xfffffffc;
                char v120 = (int)(int*)((int)(int*)((int)ptr17 ^ (int)ptr19) & (int*)~(int)(int*)((int)ptr19 ^ 0x4)) < 0;
            }
        }
    }
    unsigned int* ptr20 = /*BAD_CALL!*/ sub_407A58((unsigned int*)&gvar_40CCD4, 0);
    unsigned char v121 = (unsigned char)ptr20;
    int v122 = (unsigned int)(int*)((int)(int*)((int)ptr20 >>> 8) & 0xffffff);
    char v123 = *(char*)&gvar_40A0C8 & 0x1 ? 0: 1;
    char v124 = (*(char*)&gvar_40A0C8 & 0x1) < 0;
    char v125 = __parity__(*(char*)&gvar_40A0C8 & 0x1);
    char v126 = 0;
    char v127 = 0;
    if(!v123) {
        unsigned int v128 = gvar_40CCAC;
        while(1) {
            v121 = *(unsigned char*)v128;
            char v129 = *(char*)v128 == 32;
            char v130 = (char)v121 < 32;
            char v131 = __parity__(v121 - 32);
            char v132 = v121 < 32;
            char v133 = (((v121 - 32) ^ v121) & (v121 ^ 0x20)) < 0;
            char v134 = (((v121 - 32) ^ (v121 ^ 0x20)) >>> 4) & 0x1;
            if(v129) {
                goto loc_407C94;
            }
            else {
                char v135 = v121 == 9;
                char v136 = (char)v121 < 9;
                char v137 = __parity__(v121 - 9);
                char v138 = v121 < 9;
                char v139 = (((v121 - 9) ^ v121) & (v121 ^ 0x9)) < 0;
                char v140 = (((v121 - 9) ^ (v121 ^ 0x9)) >>> 4) & 0x1;
                if(v135) {
                    goto loc_407C94;
                }
                else {
                    v8 = *(char*)v128 == 34;
                    char v141 = *(char*)v128 < 34;
                    char v142 = __parity__(*(char*)v128 - 34);
                    char v143 = *(unsigned char*)v128 < 34;
                    char v144 = (((*(char*)v128 - 34) ^ *(char*)v128) & (*(char*)v128 ^ 0x22)) < 0;
                    char v145 = (((*(char*)v128 - 34) ^ (*(char*)v128 ^ 0x22)) >>> 4) & 0x1;
                }
            }
            if(v8) {
                v7 = 34;
                unsigned int v146 = v128;
                ++v128;
                char v147 = v128 ? 0: 1;
                char v148 = v128 >= 0x80000000;
                char v149 = __parity__((unsigned char)v128);
                char v150 = (int*)((int)(int*)((int)(int*)((int)(int*)(v146 ^ 0x1) ^ v128) >>> 4) & 0x1);
                char v151 = (int)(int*)((int)(int*)(v128 ^ v146) & (int*)~(int)(int*)(v146 ^ 0x1)) < 0;
                break;
            }
            else {
                v7 = 32;
                break;
            loc_407C94:
                unsigned int v152 = v128;
                ++v128;
                char v153 = v128 ? 0: 1;
                char v154 = v128 >= 0x80000000;
                char v155 = __parity__((unsigned char)v128);
                char v156 = (((v152 ^ 0x1) ^ v128) >>> 4) & 0x1;
                char v157 = (int)((v128 ^ v152) & ~(v152 ^ 0x1)) < 0;
            }
        }
        while(1) {
            v121 = *(unsigned char*)v128;
            char v158 = *(char*)v128 ? 0: 1;
            char v159 = v121 >= 128;
            char v160 = __parity__(v121);
            char v161 = 0;
            char v162 = 0;
            if(v158) {
                break;
            }
            else {
                char v163 = v121 == v7;
                char v164 = (char)v121 > (char)v7;
                char v165 = __parity__(v7 - v121);
                char v166 = v121 > v7;
                char v167 = (char)(((v7 - v121) ^ v7) & (v121 ^ v7)) < 0;
                char v168 = (((v7 - v121) ^ (v121 ^ v7)) >>> 4) & 0x1;
                if(v163) {
                    break;
                }
                else {
                    char v169 = v121 == 9;
                    char v170 = (char)v121 < 9;
                    char v171 = __parity__(v121 - 9);
                    char v172 = v121 < 9;
                    char v173 = (((v121 - 9) ^ v121) & (v121 ^ 0x9)) < 0;
                    char v174 = (((v121 - 9) ^ (v121 ^ 0x9)) >>> 4) & 0x1;
                    if(v169) {
                        break;
                    }
                    else {
                        unsigned int v175 = v128;
                        ++v128;
                        char v176 = v128 ? 0: 1;
                        char v177 = v128 >= 0x80000000;
                        char v178 = __parity__((unsigned char)v128);
                        char v179 = (int*)((int)(int*)((int)(int*)((int)(int*)(v175 ^ 0x1) ^ v128) >>> 4) & 0x1);
                        char v180 = (int)(int*)((int)(int*)(v128 ^ v175) & (int*)~(int)(int*)(v175 ^ 0x1)) < 0;
                    }
                }
            }
        }
        char v181 = *(char*)v128 == 34;
        char v182 = *(char*)v128 < 34;
        char v183 = __parity__(*(char*)v128 - 34);
        char v184 = *(unsigned char*)v128 < 34;
        char v185 = (((*(char*)v128 - 34) ^ *(char*)v128) & (*(char*)v128 ^ 0x22)) < 0;
        char v186 = (((*(char*)v128 - 34) ^ (*(char*)v128 ^ 0x22)) >>> 4) & 0x1;
        if(v181) {
            unsigned int v187 = v128;
            ++v128;
            char v188 = v128 ? 0: 1;
            char v189 = v128 >= 0x80000000;
            char v190 = __parity__((unsigned char)v128);
            char v191 = (int*)((int)(int*)((int)(int*)((int)(int*)(v187 ^ 0x1) ^ v128) >>> 4) & 0x1);
            char v192 = (int)(int*)((int)(int*)(v128 ^ v187) & (int*)~(int)(int*)(v187 ^ 0x1)) < 0;
        }
        while(1) {
            v121 = *(unsigned char*)v128;
            char v193 = *(char*)v128 ? 0: 1;
            char v194 = v121 >= 128;
            char v195 = __parity__(v121);
            char v196 = 0;
            char v197 = 0;
            if(!v193) {
                char v198 = v121 == 32;
                char v199 = (char)v121 < 32;
                char v200 = __parity__(v121 - 32);
                char v201 = v121 < 32;
                char v202 = (((v121 - 32) ^ v121) & (v121 ^ 0x20)) < 0;
                char v203 = (((v121 - 32) ^ (v121 ^ 0x20)) >>> 4) & 0x1;
                if(v198) {
                    goto loc_407CC4;
                }
            }
            char v204 = v121 == 9;
            char v205 = (char)v121 < 9;
            char v206 = __parity__(v121 - 9);
            char v207 = v121 < 9;
            char v208 = (((v121 - 9) ^ v121) & (v121 ^ 0x9)) < 0;
            char v209 = (((v121 - 9) ^ (v121 ^ 0x9)) >>> 4) & 0x1;
            if(!v204) {
                int v210 = sub_407D1C();
                ptr3 = (void*)v210;
                v15 = v128;
                HMODULE v211 = →KERNEL32.DLL!GetModuleHandleA(NULL);
                int v212 = gvar_40A0D0{sub_401150}((unsigned int)v211);
                int* ptr21 = &v19;
                v6 = &v9 == 36;
                v5 = (int)&v45 < 0;
                v4 = __parity__((unsigned char)&v9 - 36);
                v3 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x10) ^ (int)&v45) >>> 4) & 0x1);
                v2 = (unsigned int)&v19 >= 0xfffffff0;
                v1 = (int)(int*)((int)(int*)((int)&v45 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x10)) < 0;
                v0 = sub_406F28(v212);
                ptr0 = ptr3;
                break;
            }
            else {
            loc_407CC4:
                unsigned int v213 = v128;
                ++v128;
                char v214 = v128 ? 0: 1;
                char v215 = v128 >= 0x80000000;
                char v216 = __parity__((unsigned char)v128);
                char v217 = (int*)((int)(int*)((int)(int*)((int)(int*)(v213 ^ 0x1) ^ v128) >>> 4) & 0x1);
                char v218 = (int)(int*)((int)(int*)(v128 ^ v213) & (int*)~(int)(int*)(v213 ^ 0x1)) < 0;
            }
        }
    }
    else {
        void* ptr22 = gvar_40CCA8;
        ptr3 = gvar_40CCA8;
        unsigned int v219 = gvar_40CCA4;
        v15 = gvar_40CCA4;
        unsigned int v220 = gvar_40CCA0;
        int v221 = gvar_40A0D0{sub_401150}(v220);
        int* ptr23 = &ptr13;
        v6 = &v9 == 36;
        v5 = (int)&v45 < 0;
        v4 = __parity__((unsigned char)&v9 - 36);
        v3 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr13 ^ 0xc) ^ (int)&v45) >>> 4) & 0x1);
        v2 = (unsigned int)&ptr13 >= 0xfffffff4;
        v1 = (int)(int*)((int)(int*)((int)&v45 ^ (int)&ptr13) & (int*)~(int)(int*)((int)&ptr13 ^ 0xc)) < 0;
        v0 = sub_406F28(v221);
        ptr0 = ptr3;
    }
    int v222 = v45;
    int v223 = v44;
    int v224 = v43;
    int v225 = v36;
    int v226 = v35;
    int* ptr24 = &v33;
    jump v226;
}

int sub_401150(unsigned int param0) {
    switch(param0) {
        case 2: {
            sub_4038E4("Two!\n");
            return 0;
        }
        case 3: {
            sub_4038E4("Three!\n");
            return 0;
        }
        case 4: {
            sub_4038E4("Four!\n");
            return 0;
        }
        case 5: {
            sub_4038E4("Five!\n");
            return 0;
        }
        case 6: {
            sub_4038E4("Six!\n");
            return 0;
        }
        case 7: {
            sub_4038E4("Seven!\n");
            return 0;
        }
        default: {
            sub_4038E4("Other!\n");
            return 0;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
short* sub_4011E0(int param0, int param1) {
    char v0;
    int v1;
    int v2 = v1;
    int v3 = param0 * param1;
    *(int*)&v0 = &loc_4011F2;
    short* result = (short*)/*BAD_CALL!*/ sub_4013E0(v3);
    if(result) {
        *(int*)&v0 = 0;
        sub_4021AC(result, 0, v3);
    }
    return result;
}

int sub_40122C(unsigned int* param0, unsigned int* param1) {
    int result;
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    unsigned int v1 = gvar_40A15C;
    SIZE_T dwSize = (SIZE_T)((v0 + v1 - 1) & ~(v1 - 1));
    LPVOID v2 = →KERNEL32.DLL!VirtualAlloc(NULL, dwSize, 0x2000, 1);
    *ptr0 = v2;
    if(!v2) {
        result = 0;
    }
    else {
        *ptr1 = dwSize;
        result = 1;
    }
    return result;
}

int* sub_401298(int param0, SIZE_T dwSize) {
    unsigned int* ptr0;
    int v0 = 4;
    int v1 = 0x1000;
    SIZE_T v2 = dwSize;
    LPVOID v3 = →KERNEL32.DLL!VirtualAlloc(*ptr0, dwSize, 0x1000, 4);
    *ptr0 = v3;
    return (int*)((int)((unsigned int)(v3 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)v3 >>> 8) & 0xffffff) << 8)) & 0x1);
}

int sub_4012C0(int param0, int param1) {
    int result;
    LPVOID v0;
    int v1;
    int v2 = param1;
    LPVOID lpAddress = v0;
    if(v2) {
        do {
            LPVOID v3 = →KERNEL32.DLL!VirtualAlloc(lpAddress, 0x1000, 0x1000, 4);
            if(!v3) {
                sub_40130C(v1, (SIZE_T)((int)lpAddress - (int)v0));
                return 0;
            }
            lpAddress = (LPVOID)((int)lpAddress + 0x1000);
            v2 -= 0x1000;
            if(!v2) {
                return 1;
            }
        }
        while(1);
    }
    else {
        result = 1;
    }
    return result;
}

int sub_40130C(int param0, SIZE_T dwSize) {
    LPVOID lpAddress;
    BOOL v0 = →KERNEL32.DLL!VirtualFree(lpAddress, dwSize, 0x4000);
    return v0 - 1 ? 0: 1;
}

int sub_401324() {
    LPVOID lpAddress;
    BOOL v0 = →KERNEL32.DLL!VirtualFree(lpAddress, 0, 0x8000);
    return v0 - 1 ? 0: 1;
}

int sub_401360(unsigned int* param0, unsigned int* param1, unsigned int* param2) {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = param1;
    unsigned int* ptr1 = param0;
    if(!ptr1 || !ptr0 || !param2) {
        result = 0;
    }
    else {
        HMODULE hModule = →KERNEL32.DLL!GetModuleHandleA("borlndmm");
        if(!hModule) {
            result = 0;
        }
        else {
            FARPROC v2 = →KERNEL32.DLL!GetProcAddress(hModule, "@Borlndmm@SysGetMem$qqri");
            *ptr1 = v2;
            FARPROC v3 = →KERNEL32.DLL!GetProcAddress(hModule, "@Borlndmm@SysFreeMem$qqrpv");
            *ptr0 = v3;
            FARPROC v4 = →KERNEL32.DLL!GetProcAddress(hModule, "@Borlndmm@SysReallocMem$qqrpvi");
            *param2 = v4;
            result = *ptr1 && *ptr0 && *param2 ? 1: 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4013E0(int param0) {
    return gvar_40A20C{sub_401478}(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4013F0(int param0) {
    return gvar_40A208{sub_401460}(param0);
}

int sub_401400(int param0, int param1) {
    return gvar_40A210{sub_401490}(param0, param1);
}

int sub_401460(int param0) {
    sub_401418(1);
    return gvar_40A208{sub_401460}(param0);
}

int sub_401478(int param0) {
    sub_401418(1);
    return gvar_40A20C{sub_401478}(param0);
}

int sub_401490(int param0, int param1) {
    sub_401418(1);
    return gvar_40A210{sub_401490}(param0, param1);
}

void sub_4014D0() {
}

int sub_4014D4(int param0) {
    return sub_4014F1(param0, 12);
}

int sub_4014F1(int param0, unsigned int param1) {
    while((int)gvar_40A228 > (int)param1) {
        int v0 = param1 * 2 + gvar_40A23C - 12;
        *(int*)(v0 + 4) = param1 * 2 + gvar_40A23C - 12;
        *(int*)(v0 + 8) = v0;
        param1 += 4;
    }
    int result = gvar_40A228 * 2 + gvar_40A23C - 12;
    *(int*)(result + 4) = 0;
    *(int*)(result + 8) = 0;
    return result;
}

int sub_401514(unsigned int* param0, unsigned int param1, int param2) {
    int result;
    int v0;
    int v1 = v0;
    unsigned int v2 = param1;
    unsigned int* ptr0 = param0;
    unsigned int v3 = 0;
    if(v2 < 0x1000) {
        result = -1;
    }
    else {
        *(int*)(ptr0 + 2) = 1;
        *(ptr0 + 3) = ptr0;
        *ptr0 = v2;
        *(int*)(ptr0 + 1) = param2;
        int v4 = gvar_40A234;
        *(int*)(ptr0 + 35) = gvar_40A234;
        *(int*)(ptr0 + 36) = 0;
        unsigned int v5 = gvar_40A234;
        if(v5) {
            *(unsigned int*)(v5 + 144) = ptr0;
        }
        else {
            gvar_40A238 = ptr0;
        }
        gvar_40A234 = ptr0;
        *(int*)(ptr0 + 37) = 0;
        int* ptr1 = (int*)(ptr0 + 38);
        if(!gvar_40A23C) {
            int v6 = (gvar_40A228 * 2 + 3) & 0xfffffffc;
            gvar_40A23C = ptr1 + 1;
            *ptr1 = v6;
            ptr1 = (int*)((v6 & 0xfffffffc) + (int)ptr1) + 1;
            sub_4014D4(v4);
            v3 = (unsigned int)(v6 + 4);
        }
        unsigned int v7 = v2 - 160 - v3;
        *ptr1 = v7 + 1;
        *((int*)(((v7 + 1) & 0xfffffffc) + (int)ptr1) + 1) = 2;
        unsigned int v8 = gvar_40A228 > v7 ? (unsigned int)(v7 * 2 + gvar_40A23C - 12): gvar_40A24C;
        *(ptr1 + 1) = *(int*)(v8 + 4);
        *(unsigned int*)(ptr1 + 2) = v8;
        *(unsigned int*)(*(ptr1 + 1) + 8) = ptr1;
        *(unsigned int*)(v8 + 4) = ptr1;
        *(unsigned int*)(v7 + (int)ptr1) = (unsigned int*)(v7 + 4);
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401614(unsigned int* param0, int param1) {
    unsigned int* ptr0;
    int v0;
    int v1 = v0;
    unsigned int* ptr1 = param0;
    unsigned int v2 = *ptr1;
    char* ptr2 = (char*)((int*)(v2 + (int)ptr1) - 1);
    if((unsigned int)(param1 & 0xfffff000) < v2) {
        if(!(*ptr2 & 0x2)) {
            return -1;
        }
        ptr0 = (unsigned int*)((int)ptr2 - *(int*)(ptr2 - 4));
        unsigned int v3 = v2 - (unsigned int)(param1 & 0xfffff000);
        if((unsigned int)((*ptr0 & 0xfffffffc) - 12) < v3) {
            return -1;
        }
        *ptr0 = *ptr0 - v3;
        int v4 = *ptr0 & 0xfffffffc;
        *(int*)((int)ptr0 + v4) = v4 + 4;
        *((int*)((unsigned int)(*ptr0 & 0xfffffffc) + (int)ptr0) + 1) = 2;
        if((unsigned int)(*ptr0 & 0xfffffffc) < gvar_40A228) {
            int v5 = *(int*)(ptr0 + 1);
            *(int*)(v5 + 8) = *(int*)(ptr0 + 2);
            *(int*)(*(int*)(ptr0 + 2) + 4) = v5;
            *(int*)(ptr0 + 1) = *(int*)((*ptr0 & 0xfffffffc) * 2 + gvar_40A23C - 8);
            *(int*)(ptr0 + 2) = (*ptr0 & 0xfffffffc) * 2 + gvar_40A23C - 12;
            *(unsigned int*)(*(int*)(ptr0 + 1) + 8) = ptr0;
            *(unsigned int*)((unsigned int)((*ptr0 & 0xfffffffc) * 2) + gvar_40A23C - 8) = ptr0;
        }
    }
    else {
        int v6 = (unsigned int)(param1 & 0xfffff000) - *ptr1;
        *(int*)ptr2 = v6 - 4 + *(int*)ptr2;
        *((int*)((*(int*)ptr2 & 0xfffffffc) + (int)ptr2) + 1) = 0;
        sub_401AE4((int)(int*)(ptr2 + 4));
        *ptr1 = *ptr1 + v6;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401700(int param0) {
    int result;
    unsigned int v0;
    unsigned int* ptr0;
    int v1;
    int v2;
    int v3;
    int v4 = v3;
    unsigned int v5 = (unsigned int)((param0 + 0xfff) & 0xfffff000);
    if(!gvar_40A250) {
        int v6 = sub_401E28();
        gvar_40A250 = v6;
    }
    if(!gvar_40A23C) {
        v5 = (unsigned int)(((gvar_40A228 * 2 + 4255) & 0xfffff000) + v5);
    }
    unsigned int* ptr1 = gvar_40A234;
    if(ptr1) {
        do {
            unsigned int v7 = ptr1[1];
            if(v7 - ptr1[0] > v5) {
                int v8 = ~((gvar_40A254 + *(int*)&gvar_40A21C < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
                if((unsigned int)((((unsigned int)((gvar_40A254 + *(int*)&gvar_40A21C < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) + v5) - 1) & v8) + ptr1[0]) > v7) {
                    v0 = ptr1[1];
                }
                else {
                    v8 = ~((gvar_40A254 + *(int*)&gvar_40A21C < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
                    v0 = (unsigned int)((((unsigned int)((gvar_40A254 + *(int*)&gvar_40A21C < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) + v5) - 1) & v8) + ptr1[0]);
                }
                int v9 = (int)v0;
                int v10 = sub_4012C0(v8, v9 - ptr1[0]);
                if(v10) {
                    gvar_40A254 = (unsigned int)(v9 - ptr1[0] + gvar_40A254);
                    sub_401614(ptr1, v9);
                    result = 0;
                }
                else {
                    int v11 = sub_4012C0(v1, 0x1000);
                    if(v11) {
                        gvar_40A254 += 0x1000;
                        sub_401614(ptr1, (int)(ptr1[0] + 0x1000));
                        result = 0;
                    }
                    else {
                        result = -1;
                    }
                }
                return result;
            }
            ptr1 = (unsigned int*)ptr1[35];
            if(!ptr1) {
                goto loc_401887;
            }
        }
        while(1);
    }
    else {
    loc_401887:
        int v12 = sub_40122C(&v2, &ptr0);
        if(!v12) {
            result = -1;
        }
        else {
            int v13 = (int)((gvar_40A254 + *(int*)&gvar_40A21C < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
            unsigned int* ptr2 = gvar_40A234;
            unsigned int v14 = (unsigned int)((v13 + v5 + 0x1000) & ~((gvar_40A254 + *(int*)&gvar_40A21C < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1));
            if(ptr2) {
                do {
                    unsigned int v15 = ptr2[1];
                    if((int*)(v15 + (int)ptr2) == ptr0 && (int)ptr2[2] < 32) {
                        int v16 = (int)(v15 - ptr2[0]);
                        if(v16) {
                            int v17 = sub_4012C0(v13, v16);
                            if(v17) {
                                gvar_40A254 += v16;
                                sub_401614(ptr2, (int)ptr2[1]);
                                goto loc_40193C;
                            }
                            else {
                                result = -1;
                            }
                        }
                        else {
                        loc_40193C:
                            int v18 = sub_4012C0(v13, (int)(v14 - v16));
                            if(v18) {
                                gvar_40A254 = (unsigned int)(v14 - v16 + gvar_40A254);
                                unsigned int v19 = ptr2[2];
                                ++ptr2[2];
                                ptr2[v19 + 3] = (unsigned int)ptr0;
                                ptr2[1] += v2;
                                sub_401614(ptr2, (int)(ptr2[0] + v14 - v16));
                                result = 0;
                            }
                            else {
                                result = -1;
                            }
                        }
                        return result;
                    }
                    ptr2 = (unsigned int*)ptr2[35];
                    if(!ptr2) {
                        goto loc_40198C;
                    }
                }
                while(1);
            }
            else {
            loc_40198C:
                int v20 = sub_4012C0(v13, (int)v14);
                if(!v20) {
                    sub_401324();
                    result = -1;
                }
                else {
                    gvar_40A254 += v14;
                    sub_401514(ptr0, v14, v2);
                    result = 0;
                }
            }
        }
    }
    return result;
}

int sub_4019C4(unsigned int param0) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int* ptr0 = (int*)((*(int*)param0 & 0xfffffffc) + param0) + 1;
    unsigned int v3 = gvar_40A250 <= gvar_40A254 ? gvar_40A230: gvar_40A22C;
    unsigned int v4 = (unsigned int)(*(int*)param0 - 12);
    if(v3 > v4) {
        result = 0;
    }
    else {
        v3 = (unsigned int)(~(v3 - 1) & v4);
        unsigned int* ptr1 = gvar_40A234;
        if(ptr1) {
            do {
                unsigned int v5 = ptr1[0];
                if((int*)(v5 + (int)ptr1) - 1 == ptr0) {
                    int v6 = (int)(v5 - v3);
                    sub_401614(ptr1, v6);
                    while((unsigned int)(int*)((int)ptr1 + v6) <= ptr1[ptr1[2] + 2]) {
                        --ptr1[2];
                        SIZE_T dwSize = (SIZE_T)(ptr1[0] - (int)(int*)(ptr1[ptr1[2] + 3] - (int)ptr1));
                        sub_40130C(v0, dwSize);
                        gvar_40A254 -= dwSize;
                        sub_401324();
                        v0 = (int)(ptr1[ptr1[2] + 3] - (int)ptr1);
                        ptr1[1] = (unsigned int)(int)(ptr1[ptr1[2] + 3] - (int)ptr1);
                        ptr1[0] = (unsigned int)v0;
                    }
                    sub_40130C(v0, (SIZE_T)(ptr1[0] - v6));
                    gvar_40A254 -= ptr1[0] - v6;
                    ptr1[0] = (unsigned int)v6;
                    return 1;
                }
                ptr1 = (unsigned int*)ptr1[35];
                if(!ptr1) {
                    return 0;
                }
            }
            while(1);
        }
        else {
            result = 0;
        }
    }
    return result;
}

int sub_401AB8(int param0) {
    int result = param0;
    if(result) {
        if((unsigned int)(*(int*)(result - 4) & 0xfffffffc) >= 0x100000) {
            return sub_401324();
        }
        result = (int)sub_401AE4((unsigned int)result);
    }
    return result;
}

unsigned int sub_401AE4(unsigned int param0) {
    int v0;
    int v1 = v0;
    unsigned int result = param0;
    if(result) {
        result -= 4;
        int v2 = *(int*)result;
        if(((unsigned char)v2 & 0x2)) {
            unsigned int v3 = result - *(int*)(result - 4);
            *(int*)v3 = (v2 & 0xfffffffc) + *(int*)v3 + 4;
            result = v3;
            unsigned int v4 = gvar_40A24C;
            if(result == v4) {
                gvar_40A24C = *(unsigned int*)(v4 + 4);
            }
            int v5 = *(int*)(result + 4);
            *(int*)(v5 + 8) = *(int*)(result + 8);
            *(int*)(*(int*)(result + 8) + 4) = v5;
        }
        else {
            *(int*)result = *(int*)result | 0x1;
        }
        char* ptr0 = (char*)((*(int*)result & 0xfffffffc) + result + 4);
        if((*ptr0 & 0x1)) {
            *(int*)result = (*(int*)ptr0 & 0xfffffffc) + *(int*)result + 4;
            if(gvar_40A24C == ptr0) {
                gvar_40A24C = *(unsigned int*)(ptr0 + 4);
            }
            int v6 = *(int*)(ptr0 + 4);
            *(int*)(v6 + 8) = *(int*)(ptr0 + 8);
            *(int*)(*(int*)(ptr0 + 8) + 4) = v6;
        }
        int v7 = *(int*)result & 0xfffffffc;
        *(int*)(result + v7 + 4) = *(int*)(result + v7 + 4) | 0x2;
        unsigned int v8 = (unsigned int)(*(int*)result & 0xfffffffc);
        int v9 = gvar_40A228 > v8 ? v8 * 2 + gvar_40A23C - 12: *(int*)(gvar_40A24C + 4);
        *(int*)(result + 4) = *(int*)(v9 + 4);
        *(int*)(result + 8) = v9;
        *(unsigned int*)(*(int*)(result + 4) + 8) = result;
        *(unsigned int*)(v9 + 4) = result;
        *(int*)(result + v8) = v8 + 4;
        unsigned int v10 = *(unsigned int*)result;
        if(*(int*)((v10 & 0xfffffffc) + result + 4) == 2 && (gvar_40A250 <= gvar_40A254 ? gvar_40A230: gvar_40A22C) < v10) {
            result = (unsigned int)sub_4019C4(result);
        }
    }
    return result;
}

int sub_401BEC(int param0) {
    int v0;
    int result = 0;
    int* ptr0 = sub_401298(v0, (SIZE_T)((param0 + 0x1003) & 0xfffff000));
    if(ptr0) {
        result = 4;
        *NULL = (SIZE_T)((param0 + 0x1003) & 0xfffff000) - 4;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401C28(int param0) {
    if(!param0) {
        return 0;
    }
    return (unsigned int)param0 >= 0x100000 ? sub_401BEC(param0): sub_401C50(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_401C50(unsigned int param0) {
    unsigned int v0;
    unsigned int v1;
    unsigned int* j;
    int* ptr0;
    int* result;
    int v2;
    int v3 = v2;
    unsigned int v4 = param0;
    if(!v4) {
        result = NULL;
    }
    else {
        unsigned int v5 = v4 >= 12 ? (unsigned int)((v4 + 3) & 0xfffffffc): 12;
        if(!gvar_40A23C) {
            sub_401700(1);
        }
        if(gvar_40A228 > v5) {
            int v6 = v5 * 2;
            unsigned int v7 = (unsigned int)(gvar_40A23C + v6 - 12);
            int* ptr1 = *(unsigned int*)(v7 + 4);
            if(v7 != ptr1) {
                *ptr1 = *ptr1 & 0xfffffffe;
                int v8 = *ptr1 & 0xfffffffc;
                *((int*)((int)ptr1 + v8) + 1) = *((int*)((int)ptr1 + v8) + 1) & 0xfffffffd;
                ptr0 = *(unsigned int*)(ptr1 + 1);
                *(ptr0 + 2) = *(ptr1 + 2);
                result = ptr1 + 1;
                *(unsigned int*)(*(ptr1 + 2) + 4) = ptr0;
            }
            else {
                j = gvar_40A244;
                if(gvar_40A244 == &gvar_40A240) {
                    unsigned int i;
                    for(i = (unsigned int)(gvar_40A23C + v6 - 4); i == *(int*)(i + 4); i += 8) {
                    }
                    unsigned int* ptr2 = *(unsigned int*)(i + 4);
                    j = ptr2 ? ptr2: gvar_40A24C;
                }
                goto loc_401D3E;
            }
        }
        else {
            unsigned int* ptr3 = gvar_40A24C;
            j = gvar_40A24C;
            unsigned int v9 = *ptr3;
            if(v9 < v5) {
                *ptr3 = -3;
                for(j = *(j + 1); *j < v5; j = *(j + 1)) {
                }
                *gvar_40A24C = v9;
                if(gvar_40A24C == j) {
                    int v10 = sub_401700((int)(v4 + 64));
                    return !v10 ? (int*)sub_401C50((int)v4): NULL;
                }
            }
        loc_401D3E:
            if(j == &gvar_40A240) {
                int v10 = sub_401700((int)(v4 + 64));
                return !v10 ? (int*)sub_401C50((int)v4): NULL;
            }
            v1 = (unsigned int)(*j & 0xfffffffc);
            v0 = v1 - v5;
            if(v0 < 16) {
                *j = *j & 0xfffffffe;
                int v11 = *j & 0xfffffffc;
                *((int*)((int)j + v11) + 1) = *((int*)((int)j + v11) + 1) & 0xfffffffd;
                if(gvar_40A228 <= v1) {
                    gvar_40A24C = *(j + 1);
                }
                ptr0 = *(j + 1);
                *(ptr0 + 2) = *(int*)(j + 2);
                result = (int*)(j + 1);
                *(unsigned int*)(*(int*)(j + 2) + 4) = ptr0;
            }
            else {
                *j = v5;
                unsigned int v12 = v0 - 4;
                ptr0 = (int*)((v5 & 0xfffffffc) + (int)j) + 1;
                *ptr0 = v12 + 1;
                *(int*)(v12 + (int)ptr0) = v12 + 4;
                if(gvar_40A228 > v12) {
                    int v13 = v12 * 2 + gvar_40A23C - 12;
                    *(ptr0 + 1) = *(int*)(v13 + 4);
                    *(ptr0 + 2) = v13;
                    *(unsigned int*)(*(ptr0 + 1) + 8) = ptr0;
                    *(unsigned int*)(v13 + 4) = ptr0;
                    if(gvar_40A24C == j) {
                        gvar_40A24C = *(j + 1);
                    }
                    ptr0 = *(j + 1);
                    *(ptr0 + 2) = *(int*)(j + 2);
                    *(unsigned int*)(*(int*)(j + 2) + 4) = ptr0;
                }
                else {
                    int v14 = *(int*)(j + 2);
                    *(unsigned int*)(v14 + 4) = ptr0;
                    *(ptr0 + 2) = v14;
                    int v15 = *(int*)(j + 1);
                    *(unsigned int*)(v15 + 8) = ptr0;
                    *(ptr0 + 1) = v15;
                    gvar_40A24C = ptr0;
                }
                return (int*)(j + 1);
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401E28() {
    int result;
    int v0 = 32;
    →KERNEL32.DLL!GlobalMemoryStatus(&v0);
    return result;
}

int sub_401EA0(int param0, unsigned int param1) {
    int result;
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = v0;
    int* ptr2 = (int*)(param0 - 4);
    int* ptr3 = (int*)((*ptr2 & 0xfffffffc) + (int)ptr2) + 1;
    unsigned int v2 = param1 >= 12 ? (unsigned int)((param1 + 3) & 0xfffffffc): 12;
    unsigned int v3 = (unsigned int)(*ptr2 & 0xfffffffc);
    if(v2 == v3) {
        result = param0;
    }
    else {
        int v4 = *ptr3 & 0x1;
        if(v4) {
            v3 = (unsigned int)((*ptr3 & 0xfffffffc) + v3 + 4);
        }
        if(v2 <= v3) {
            ptr1 = NULL;
            if(v4) {
                if((unsigned int)(*ptr3 & 0xfffffffc) >= gvar_40A228) {
                    ptr1 = *(unsigned int*)(ptr3 + 2);
                }
                if(gvar_40A24C == ptr3) {
                    gvar_40A24C = *(unsigned int*)(ptr3 + 1);
                }
                *(int*)(*(ptr3 + 1) + 8) = *(ptr3 + 2);
                *(int*)(*(ptr3 + 2) + 4) = *(ptr3 + 1);
                int v5 = *ptr3 & 0xfffffffc;
                *((int*)((int)ptr3 + v5) + 1) = *((int*)((int)ptr3 + v5) + 1) & 0xfffffffd;
                *ptr2 = (*ptr2 & 0x2) + v3;
            }
            int* ptr4 = (int*)(v3 - v2);
            if((unsigned int)ptr4 >= 16) {
                int v6 = (*ptr2 & 0x2) + v2;
                *ptr2 = (*ptr2 & 0x2) + v2;
                unsigned int* ptr5 = (unsigned int*)((int*)((v6 & 0xfffffffc) + (int)ptr2) + 1);
                *ptr5 = (int*)((char*)ptr4 - 3);
                *((int*)((int)(int*)((int)(int*)((char*)ptr4 - 3) & 0xfffffffc) + (int)ptr5) + 1) = *((int*)((int)(int*)((int)(int*)((char*)ptr4 - 3) & 0xfffffffc) + (int)ptr5) + 1) | 0x2;
                int* ptr6 = (unsigned int)(ptr4 - 1) < gvar_40A228 ? (int*)((int)(int*)((int)(ptr4 - 1) * 2) + gvar_40A23C) - 3: !ptr1 ? *(unsigned int*)(gvar_40A24C + 4): ptr1;
                *(int*)(ptr5 + 1) = *(ptr6 + 1);
                *(ptr5 + 2) = ptr6;
                *(unsigned int*)(*(int*)(ptr5 + 1) + 8) = ptr5;
                *(unsigned int*)(ptr6 + 1) = ptr5;
                *(unsigned int*)((int)(ptr4 - 1) + (int)ptr5) = ptr4;
            }
            result = param0;
        }
        else {
            result = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_401FC8(int* param0, int param1) {
    int* result;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = param0[-1] & 0xfffffffc;
    if((unsigned int)((param1 + 0x1003) & 0xfffff000) - 4 == v3) {
        result = param0;
    }
    else if((unsigned int)((param1 + 0x1003) & 0xfffff000) - 4 > (unsigned int)v3) {
        int* ptr0 = (int*)sub_401C28(param1);
        if(ptr0) {
            sub_40213C(ptr0, param0, v3);
            sub_401AB8((int)param0);
        }
        result = ptr0;
    }
    else if((unsigned int)((param1 + 0x1003) & 0xfffff000) - 4 < 0x100000) {
        int* ptr1 = (int*)sub_401C28(param1);
        if(ptr1) {
            sub_40213C(ptr1, param0, param1);
            sub_401AB8((int)param0);
        }
        result = ptr1;
    }
    else {
        sub_40130C(v1, (SIZE_T)(v3 + 4 - (unsigned int)((param1 + 0x1003) & 0xfffff000)));
        result = param0;
        param0[-1] = (int)((unsigned int)((param1 + 0x1003) & 0xfffff000) - 4);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402080(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = v0;
    int v2 = param1;
    if(!v2) {
        sub_401AB8(param0);
        result = 0;
    }
    else if(!param0) {
        result = sub_401C28(v2);
    }
    else if((unsigned int)(*(int*)(param0 - 4) & 0xfffffffc) >= 0x100000) {
        result = (int)sub_401FC8((int*)param0, v2);
    }
    else {
        int v3 = sub_401EA0(param0, (unsigned int)v2);
        if(v3) {
            result = param0;
        }
        else {
            ptr1 = (int*)(param0 - 4);
            int v4 = sub_401C28(v2);
            if(v4) {
                if((unsigned int)(*(int*)(param0 - 4) & 0xfffffffc) <= (unsigned int)v2) {
                    v2 = *(int*)(param0 - 4) & 0xfffffffc;
                }
                sub_402160((int*)v4, (int*)param0, v2);
                sub_401AB8(param0);
            }
            result = v4;
        }
    }
    return result;
}

int sub_402118(int param0) {
    return param0 ? *(int*)(param0 - 4) & 0xfffffffc: 0;
}

void sub_402134() {
}

void sub_402138() {
}

int* sub_402160(int* param0, int* param1, int param2) {
    int j;
    int* ptr0 = param0;
    int* ptr1 = param1;
    int v0 = param2;
    char v1 = ptr1 == ptr0;
    if(ptr1 > ptr0) {
        for(int i = (param2 >>> 1) >>> 1; i != 0; --i) {
            *ptr0 = *ptr1;
            ++ptr1;
            ++ptr0;
        }
        for(j = v0 & 0x3; j != 0; --j) {
            *(char*)ptr0 = *(char*)ptr1;
            ptr1 = (int*)((char*)ptr1 + 1);
            ptr0 = (int*)((char*)ptr0 + 1);
        }
    }
    else if(!v1) {
        char* ptr2 = (char*)((char*)((int)ptr1 + param2) - 1);
        char* ptr3 = (char*)((char*)((int)ptr0 + param2) - 1);
        for(int k = param2 & 0x3; k != 0; --k) {
            *ptr3 = *ptr2;
            --ptr2;
            --ptr3;
        }
        j = (v0 >>> 1) >>> 1;
        int* ptr4 = (int*)(ptr2 - 3);
        int* ptr5 = (int*)(ptr3 - 3);
        while(j != 0) {
            *ptr5 = *ptr4;
            --ptr4;
            --ptr5;
            --j;
        }
    }
    return param0;
}

short* sub_402238(short* param0, short param1, int param2) {
    short* ptr0 = param0;
    short v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        ++ptr0;
    }
    return param0;
}

int* sub_402250(int* param0) {
    int v0;
    int* ptr0 = param0;
    if((unsigned char)ptr0 & 0x3) {
        ++ptr0;
        if(!*(char*)(ptr0 - 1)) {
            goto loc_40229F;
        }
        else if(!*(char*)((char*)ptr0 - 3)) {
            ptr0 = (int*)((char*)ptr0 - 1);
            return (int*)((int)(int*)((char*)ptr0 - 1) - (int)param0);
        }
        else if(!*(char*)((char*)ptr0 - 2)) {
            ptr0 = (int*)((char*)ptr0 - 1);
            return (int*)((int)(int*)((char*)ptr0 - 1) - (int)param0);
        }
        else {
            ptr0 = (int*)((char*)ptr0 - 1);
            ptr0 = (unsigned int)((unsigned char)ptr0 & 0xfc) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            goto loc_402258;
        }
    }
    else {
    loc_402258:
        do {
            v0 = *ptr0;
            ++ptr0;
            if(!((v0 - 0x1010101) & 0x80808080)) {
                goto loc_402258;
            }
        }
        while(!((v0 - 0x1010101) & ~v0 & 0x80808080));
        if(((unsigned char)((v0 - 0x1010101) & ~v0) & 0x80)) {
        loc_40229F:
            ptr0 = (int*)((char*)ptr0 - 1);
        }
        else if(!(unsigned char)(((v0 - 0x1010101) & ~v0 & 0x80808080) >>> 8) && ((v0 - 0x1010101) & ~v0 & 0x800000)) {
            ptr0 = (int*)((char*)ptr0 - 1);
            return (int*)((int)(int*)((char*)ptr0 - 1) - (int)param0);
        }
        else if(!(unsigned char)(((v0 - 0x1010101) & ~v0 & 0x80808080) >>> 8)) {
            return (int*)((int)(int*)((char*)ptr0 - 1) - (int)param0);
        }
        ptr0 = (int*)((char*)ptr0 - 1);
    }
    return (int*)((int)(int*)((char*)ptr0 - 1) - (int)param0);
}

unsigned char* sub_40231C(unsigned char* param0, unsigned char* param1, unsigned int param2) {
    unsigned char v0;
    unsigned char v1;
    unsigned char* result;
    unsigned int v2 = param2;
    unsigned char* ptr0 = param0;
    unsigned char* ptr1 = param1;
    while((int)v2 >= 4 && *ptr0 == *ptr1 && *(ptr0 + 1) == *(char*)(ptr1 + 1) && *(ptr0 + 2) == *(char*)(ptr1 + 2) && *(ptr0 + 3) == *(char*)(ptr1 + 3)) {
        v2 -= 4;
        ptr0 += 4;
        ptr1 += 4;
        if((int)v2 < 4) {
            break;
        }
    }
    if(!v2) {
        result = NULL;
    }
    else {
        do {
            v1 = *ptr0;
            v0 = *ptr1;
            if(*ptr1 != v1) {
                break;
            }
            else {
                ++ptr0;
                ++ptr1;
                --v2;
            }
        }
        while(v2);
        result = (unsigned char*)((unsigned int)v1 - (unsigned int)v0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402388(int* param0) {
    int v0;
    int v1 = v0;
    int* ptr0 = sub_402250(param0);
    int result = sub_4013E0((int)(int*)((char*)ptr0 + 1));
    if(result) {
        sub_40213C(result, (int)param0, (int)(int*)((char*)ptr0 + 1));
    }
    return result;
}

int sub_4023BC(unsigned short* param0) {
    int result = 0;
    for(unsigned short* i = param0; *i; ++i) {
        ++result;
    }
    return result;
}

unsigned short* sub_4023D4(unsigned short* param0, unsigned short* param1) {
    int v0;
    int v1 = v0;
    unsigned short* ptr0 = param1;
    int v2 = sub_4023BC(ptr0);
    unsigned int v3 = 0;
    unsigned short* ptr1 = param0;
    unsigned short* ptr2 = ptr0;
    if((unsigned int)v2 > 0) {
        do {
            ptr0 = (unsigned int)ptr2[0] | ((unsigned int)(unsigned short)(int*)((int)ptr0 >>> 16) << 16);
            *ptr1 = ptr2[0];
            ++v3;
            ++ptr1;
            ++ptr2;
        }
        while(v3 < (unsigned int)v2);
    }
    *(short*)(v2 * 2 + (int)param0) = 0;
    return param0;
}

int sub_402484(int param0, int param1, int param2, unsigned int param3) {
    int v0;
    int v1;
    int v2 = v1;
    if(!(*(char*)(param1 + 4) & 0x1)) {
        sub_406B6C("IS_STRUC(base->tpMask)", "xxtype.cpp", 315);
    }
    if(!(*(char*)(param0 + 4) & 0x1)) {
        sub_406B6C("IS_STRUC(derv->tpMask)", "xxtype.cpp", 316);
    }
    if(!(*(char*)(param0 + 12) & 0x4)) {
        sub_406B6C("derv->tpClass.tpcFlags & CF_HAS_BASES", "xxtype.cpp", 318);
    }
    int* ptr0 = (int*)((unsigned int)*(short*)(param0 + 18) + param0);
    for(int i = *ptr0; i; i = *ptr0) {
        if(!(*(char*)(ptr0 + 2) & 0x8)) {
            unsigned int v3 = param3 && (unsigned int)(*(ptr0 + 2) & 0x3) == 3 ? 1: 0;
            v0 = sub_402970(param1, i);
            if(v0 && v3) {
                return 1;
            }
            else if((*(char*)(i + 12) & 0x4)) {
                v0 = sub_402484(i, param1, param2, (int)v3);
                if(v0) {
                    return 1;
                }
            }
        }
        ptr0 += 3;
    }
    int* ptr1 = (int*)((unsigned int)*(short*)(param0 + 16) + param0);
    int v4 = *ptr1;
    while(v4) {
        unsigned int v5 = param3 && (unsigned int)(*(ptr1 + 2) & 0x3) == 3 ? 1: 0;
        v0 = sub_402970(param1, v4);
        if(v0 && v5) {
            return 1;
        }
        if((*(char*)(v4 + 12) & 0x4)) {
            v0 = sub_402484(v4, param1, param2, (int)v5);
            if(v0) {
                return 1;
            }
        }
        ptr1 += 3;
        v4 = *ptr1;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_4025DB() {
    unsigned int* result;
    int v0;
    int v1;
    int v2 = v1;
    sub_402414();
    unsigned int v3 = 0;
    do {
        result = *(unsigned int*)(v3 * 4 + (int)&gvar_40C4A8);
        if(result && result) {
            do {
                unsigned int* ptr0 = *(result + 3);
                if(result) {
                    unsigned int* ptr1 = result;
                    **result((int)result, 3);
                }
                result = ptr0;
            }
            while(result);
        }
        ++v3;
    }
    while((int)v3 < 0x100);
    *(int*)__FS_BASE = v0;
    return result;
}

unsigned int* sub_40262E(int param0, unsigned int param1, unsigned int param2, unsigned int param3, unsigned int param4, unsigned int param5, unsigned int* param6, unsigned int param7, int param8) {
    unsigned int v0;
    int v1;
    unsigned int* result1;
    int v2;
    int v3 = v2;
    unsigned int v4 = 0;
    unsigned int* ptr0 = NULL;
    unsigned int v5 = 0;
    if(!param1 || !(*(char*)(param1 + 4) & 0x1)) {
        sub_406B6C("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)", "xxtype.cpp", 847);
    }
    if(!param3 || !(*(char*)(param3 + 4) & 0x1)) {
        sub_406B6C("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)", "xxtype.cpp", 848);
    }
    if(param5 && !(*(char*)(param5 + 4) & 0x1)) {
        sub_406B6C("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)", "xxtype.cpp", 849);
    }
    if(param5) {
        int v6 = sub_402970((int)param5, (int)param3);
        if(v6) {
            sub_406B6C("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 0x355);
        }
        int v7 = sub_402970((int)param5, (int)param1);
        if(!v7) {
            goto loc_402704;
        }
        else {
            result1 = NULL;
        }
    }
    else {
    loc_402704:
        if(param3) {
            int v8 = sub_402970((int)param1, (int)param3);
            if(v8) {
                goto loc_402727;
            }
        }
        else {
        loc_402727:
            sub_406B6C("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 859);
        }
        if(!(*(char*)(param1 + 12) & 0x4)) {
            result1 = NULL;
        }
        else {
            unsigned int v9 = 0;
            int* ptr1 = (int*)((unsigned int)*(short*)(param1 + 18) + param1);
            while(1) {
                int v10 = *ptr1;
                if(v10) {
                    if(!(*(char*)(ptr1 + 2) & 0x8)) {
                        unsigned int v11 = param7 && (unsigned int)(*(ptr1 + 2) & 0x3) == 3 ? 1: 0;
                        unsigned int* result = (unsigned int*)(*(ptr1 + 1) + param0);
                        int v12 = param8;
                        if((*(char*)(ptr1 + 2) & 0x4)) {
                            result = *result;
                            v12 = v10;
                        }
                        int v13 = sub_402970((int)param3, v10);
                        if(v13) {
                            if(param2) {
                                if(result != param2) {
                                    goto loc_402858;
                                }
                                else {
                                    return result;
                                }
                            }
                            else if(param4) {
                                if(!param5) {
                                    sub_406B6C("srcTypPtr", "xxtype.cpp", 976);
                                }
                                v1 = 0;
                                v0 = 0;
                                int v14 = sub_40262E((int)result, v10, (int)param4, (int)param5, 0, 0, (int)param6);
                                if(!v14) {
                                    goto loc_402858;
                                }
                            }
                        }
                        else if(!(*(char*)(v10 + 12) & 0x4)) {
                            goto loc_402858;
                        }
                        else {
                            v1 = v12;
                            v0 = v11;
                            unsigned int* ptr2 = (unsigned int*)sub_40262E((int)result, v10, (int)param2, (int)param3, (int)param4, (int)param5, (int)param6);
                            if(!ptr2) {
                                goto loc_402858;
                            }
                            else {
                                result = ptr2;
                                v11 = *param6;
                            }
                        }
                        if(v5 && result == ptr0) {
                            v4 |= v11;
                        }
                        else {
                            ++v5;
                            ptr0 = result;
                            v4 = v11;
                        }
                    }
                loc_402858:
                    ptr1 += 3;
                }
                else if(v9) {
                    break;
                }
                else {
                    v9 = 1;
                    ptr1 = (int*)((unsigned int)*(short*)(param1 + 16) + param1);
                }
            }
            *param6 = v4;
            if(v5 != 1) {
                ptr0 = NULL;
            }
            result1 = ptr0;
        }
    }
    return result1;
}

void sub_402BD8() {
    char v0 = gvar_40A57C ? 0: 1;
    char v1 = gvar_40A57C >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_40A57C);
    char v3 = gvar_40A57C < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_402BE1: &sub_402BEB;
}

void sub_402BE1() {
    gvar_40A57C = &sub_402C00;
}

void sub_402BEB() {
    char v0 = gvar_40A580 ? 0: 1;
    char v1 = gvar_40A580 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_40A580);
    char v3 = gvar_40A580 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_402BF4: &sub_402BFE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402C00() {
    int v0;
    sub_402414();
    if(gvar_40A57C != &sub_402C00) {
        gvar_40A57C();
    }
    int result = sub_406EC0();
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402CA4() {
    int v0;
    int v1;
    int v2 = v1;
    sub_402414();
    int v3 = sub_401140();
    *(int*)(v3 + 4) = *(int*)(v3 + 4) & 0xfffffffd;
    if(*gvar_40C8B4 == 2) {
        sub_408021(4, 1);
    }
    sub_4031A8();
    gvar_40A57C();
    int result = sub_406EC0();
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402D50(int* param0) {
    int v0;
    int* ptr0;
    int v1;
    int result;
    int v2 = v1;
    int* ptr1 = param0;
    if(!ptr1 && !ptr1) {
        sub_402D9C(&v0);
        ptr1 = ptr0;
    }
    int v3 = sub_401140();
    sub_40213C((int*)v3, ptr1, 156);
    sub_402BD8();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_402D9C(int* param0) {
    int* ptr0 = param0;
    int v0 = sub_401140();
    gvar_40A5CC = (unsigned int)(v0 + 28);
    *ptr0 = -2106428599;
    *(ptr0 + 1) = 4236728;
    return (unsigned int)(v0 + 28);
}

int sub_402DC4() {
    return 1;
}

LONG sub_402DD0(void* param0, int param1, void* param2, int param3) {
    LONG result;
    int v0;
    int v1;
    int v2 = v0;
    if(*(int*)param0 == 0xeedfae6) {
        result = 0;
    }
    else {
        unsigned int v3 = *(unsigned int*)param0;
        if(v3 == 0xeefface || v3 == 0xeedface) {
            sub_402F9A(v1, (int)param0);
            sub_402CA4();
        }
        if(*(int*)param0 == 0xc00000fd && gvar_40A69C) {
            sub_406E08("Stack Overflow!");
        }
        if(gvar_40C8BC) {
            int v4 = gvar_40C8BC((int)param0, param1, (int)param2, param3);
            if(v4) {
                goto loc_402E53;
            }
            else {
                result = 0;
            }
        }
        else {
        loc_402E53:
            if(gvar_40C8B8) {
                int v5 = gvar_40C8B8((int)param0, param1, (int)param2, param3);
                if(v5) {
                    goto loc_402E74;
                }
                else {
                    result = 0;
                }
            }
            else {
            loc_402E74:
                if(gvar_40CCE4) {
                    unsigned int v6 = *gvar_40CCE4;
                    if(v6 == 1 || v6 == 2) {
                        unsigned int v7 = *(unsigned int*)param0;
                        if(v7 < 0xeedface || v7 > 0xeefface) {
                            sub_408021(2, 3);
                        }
                    }
                }
                void* ptr0 = param0;
                result = →KERNEL32.DLL!UnhandledExceptionFilter(&ptr0);
            }
        }
    }
    return result;
}

int* sub_402EC0(int* param0) {
    int* ptr0 = param0;
    ptr0[0] = 0;
    ptr0[1] = &sub_402DD0;
    return sub_402F4C(ptr0);
}

unsigned int* sub_402EDC(unsigned int* param0) {
    return sub_402F61(param0);
}

unsigned int sub_402EEC(unsigned int param0) {
    unsigned int result = gvar_40C8BC;
    gvar_40C8BC = param0;
    return result;
}

int sub_402F38() {
    unsigned int v0 = gvar_40CCC0;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_402F48: &sub_402F41;
}

int sub_402F41() {
    int* ptr0;
    sub_402EC0(ptr0);
}

void sub_402F48() {
}

int* sub_402F4C(int* param0) {
    int* result = param0;
    *result = *(int*)0;
    *(int**)0 = result;
    return result;
}

unsigned int* sub_402F61(unsigned int* param0) {
    unsigned int* result = param0;
    unsigned int* ptr0 = *(unsigned int**)0;
    if(result == ptr0) {
        result = *result;
        *(unsigned int**)0 = result;
    }
    else {
        while(ptr0 != -1) {
            if(*ptr0 != result) {
                ptr0 = *ptr0;
            }
            else {
                result = *result;
                *ptr0 = result;
                return result;
            }
        }
    }
    return result;
}

int sub_402FB8(unsigned int param0) {
    int v0;
    int v1 = v0;
    if(gvar_40AB68 <= param0) {
        return 0;
    }
    DWORD v2 = →KERNEL32.DLL!GetFileType(*(HANDLE*)(param0 * 4 + (int)&gvar_40C988));
    return ((unsigned int)(v2 != 2 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_402FE8(HANDLE hFile) {
    DWORD v0 = →KERNEL32.DLL!GetFileType(hFile);
    return ((unsigned int)(v0 != 2 ? 0: 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_403000(unsigned int param0, LONG lDistanceToMove, unsigned int param2) {
    DWORD dwMoveMethod;
    int result;
    int v0;
    int v1 = v0;
    if(gvar_40AB68 <= param0) {
        result = sub_40375C(6);
    }
    else if(param2 >= 1) {
        if(param2 == 1) {
            dwMoveMethod = 1;
        }
        else if((param2 - 2)) {
            return sub_40375C(1);
        }
        else {
            dwMoveMethod = 2;
        }
        goto loc_403046;
    }
    else {
        dwMoveMethod = 0;
    loc_403046:
        *(int*)(param0 * 4 + (int)&gvar_40AB6C) = *(int*)(param0 * 4 + (int)&gvar_40AB6C) & 0xfffffdff;
        DWORD v2 = →KERNEL32.DLL!SetFilePointer(*(HANDLE*)(param0 * 4 + (int)&gvar_40C988), lDistanceToMove, NULL, dwMoveMethod);
        if(!(v2 + 1)) {
            sub_4037C0();
        }
        result = (int)v2;
    }
    return result;
}

int sub_403078(unsigned int param0, LPCVOID param1, DWORD nNumberOfBytesToWrite) {
    int result;
    char v0;
    int v1;
    int v2 = v1;
    LPCVOID lpBuffer = param1;
    if(gvar_40AB68 <= param0) {
        result = sub_40375C(0xfffffffa);
    }
    else if(nNumberOfBytesToWrite < 1) {
        result = 0;
    }
    else {
        if((*(unsigned char*)(param0 * 4 + (int)&gvar_40AB6D) & 0x8)) {
            sub_403000(param0, 0, 2);
        }
        if(!(*(unsigned char*)(param0 * 4 + (int)&gvar_40AB6D) & 0x40)) {
            result = sub_4031E0(param0, lpBuffer, nNumberOfBytesToWrite);
        }
        else {
            LPCVOID v3 = lpBuffer;
            unsigned int v4 = 0;
            unsigned int v5 = 0;
            while((unsigned int)(int*)((int)v3 - (int)lpBuffer) < nNumberOfBytesToWrite) {
                LPCVOID v6 = &v0;
                while((int)(int*)((int)v6 - (int)&v0) < 0x1ff) {
                    int* ptr0 = (int*)((int)v3 - (int)lpBuffer);
                    if((unsigned int)ptr0 >= nNumberOfBytesToWrite) {
                        break;
                    }
                    else {
                        ptr0 = (unsigned int)*(char*)v3 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
                        v3 = (LPCVOID)((int)v3 + 1);
                        if((unsigned char)ptr0 == 10) {
                            ++v4;
                            *(char*)v6 = 13;
                            *(char*)((int)v6 + 1) = 10;
                            v6 = (LPCVOID)((int)v6 + 2);
                        }
                        else {
                            *(char*)v6 = (unsigned char)ptr0;
                            v6 = (LPCVOID)((int)v6 + 1);
                        }
                    }
                }
                int v7 = sub_4031E0(param0, &v0, (DWORD)((int)v6 - (int)&v0));
                if((int*)((int)v6 - (int)&v0) != v7) {
                    return v7 != -1 ? (int)(v5 - v4 + v7): -1;
                }
                v5 = (unsigned int)(v7 + v5);
            }
            result = (int)(v5 - v4);
        }
    }
    return result;
}

int sub_403194(char* param0) {
    if(param0) {
        *param0 = 0;
    }
    return 0;
}

int sub_4031A8() {
    int result = 0;
    unsigned int v0 = gvar_40AB68;
    unsigned int* ptr0 = (unsigned int*)&gvar_40A6B8;
    while(1) {
        unsigned int v1 = v0;
        --v0;
        if(!v1) {
            return result;
        }
        if((*((char*)&ptr0[4] + 2) & 0x3) && ptr0[2]) {
            sub_4032C4(ptr0);
            ++result;
        }
        ptr0 += 6;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4031E0(unsigned int param0, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite) {
    int v0;
    int result = v0;
    if(gvar_40AB68 <= param0) {
        return sub_40375C(6);
    }
    BOOL v1 = →KERNEL32.DLL!WriteFile(*(HANDLE*)(param0 * 4 + (int)&gvar_40C988), lpBuffer, nNumberOfBytesToWrite, &result, NULL);
    if((v1 - 1)) {
        return sub_4037C0();
    }
    return result;
}

int sub_403228(unsigned int param0, LPCVOID param1, DWORD nNumberOfBytesToWrite) {
    return sub_403078(param0, param1, nNumberOfBytesToWrite);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403244(int* param0, int param1, unsigned int param2, int param3) {
    int result;
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int v2 = param3;
    int v3 = param1;
    if((*(char*)((char*)ptr0 + 18) & 0x4)) {
        sub_4013F0(*(ptr0 + 1));
    }
    *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) & 0xfff3;
    *(ptr0 + 3) = 0;
    *(unsigned int*)(ptr0 + 1) = ptr0 + 5;
    *ptr0 = ptr0 + 5;
    if(param2 != 2 && v2 != 0) {
        gvar_40BA5C = &gvar_40440C;
        if(!v3) {
            int v4 = sub_4013E0(v2);
            v3 = v4;
            if(v4) {
                *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) | 0x4;
                goto loc_4032A7;
            }
            else {
                result = -1;
            }
        }
        else {
        loc_4032A7:
            *ptr0 = v3;
            *(ptr0 + 1) = v3;
            *(ptr0 + 3) = v2;
            if(param2 == 1) {
                *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) | 0x8;
            }
            return 0;
        }
    }
    else {
        result = 0;
    }
    return result;
}

int sub_4032C4(unsigned int* param0) {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = param0;
    if(!ptr0) {
        sub_403344();
        result = 0;
    }
    else if((unsigned char)ptr0 != *(char*)((char*)ptr0 + 23)) {
        result = -1;
    }
    else if(*(int*)(ptr0 + 2) >= 0) {
        if((*(char*)((char*)ptr0 + 18) & 0x8) || (int*)(ptr0 + 5) == *ptr0) {
            *(int*)(ptr0 + 2) = 0;
            if((int*)(ptr0 + 5) == *ptr0) {
                *ptr0 = *(ptr0 + 1);
            }
        }
        result = 0;
    }
    else {
        void* ptr1 = (void*)(*(int*)(ptr0 + 2) + *(int*)(ptr0 + 3) + 1);
        *(ptr0 + 2) = (int*)(*(int*)(ptr0 + 2) - (int)ptr1);
        void* ptr2 = ptr1;
        LPCVOID v2 = *(LPCVOID*)(ptr0 + 1);
        *ptr0 = *(LPCVOID*)(ptr0 + 1);
        LPCVOID v3 = v2;
        int v4 = sub_403078((unsigned int)*(char*)((char*)ptr0 + 22), v2, (DWORD)ptr2);
        if(v4 != ptr1 && !(*(char*)((char*)ptr0 + 19) & 0x2)) {
            *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) | 0x10;
            result = -1;
        }
        else {
            result = 0;
        }
    }
    return result;
}

int sub_403344() {
    int result = 0;
    unsigned int v0 = gvar_40AB68;
    unsigned int* ptr0 = (unsigned int*)&gvar_40A6B8;
    while(1) {
        unsigned int v1 = v0;
        --v0;
        if(!v1) {
            return result;
        }
        int v2 = *(int*)(ptr0 + 2);
        if(v2 < 0) {
            DWORD v3 = (DWORD)(*(int*)(ptr0 + 3) + v2 + 1);
            *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) - v3;
            DWORD nNumberOfBytesToWrite = v3;
            LPCVOID v4 = *(LPCVOID*)(ptr0 + 1);
            *ptr0 = *(LPCVOID*)(ptr0 + 1);
            LPCVOID v5 = v4;
            int v6 = sub_403078((unsigned int)*(char*)((char*)ptr0 + 22), v4, nNumberOfBytesToWrite);
            if(v6 != v3 && !(*(char*)((char*)ptr0 + 19) & 0x2)) {
                *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) | 0x10;
            }
            ++result;
        }
        ptr0 += 6;
    }
    return result;
}

unsigned int sub_4033A0(unsigned int param0) {
    gvar_40AC38 = param0;
    return param0;
}

unsigned int* sub_4033B0(unsigned int* param0) {
    unsigned int* result = param0;
    if(result) {
        result = *result;
        gvar_40A6B4 = result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4033C4(char* param0, int param1, unsigned int* param2) {
    int result;
    unsigned char v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = v1;
    unsigned int* ptr0 = param2;
    int v5 = param1;
    char* ptr1 = param0;
    if((*((char*)&ptr0[4] + 2) & 0x8)) {
        v3 = v5;
        if(v3) {
            do {
                unsigned int* ptr2 = ptr0;
                *(int*)&v0 = (int)*ptr1;
                int v6 = sub_4037D4(v0, ptr0);
                if(!(v6 + 1)) {
                    return 0;
                }
                --v3;
                ++ptr1;
                if(!v3) {
                    goto loc_403404;
                }
            }
            while(1);
        }
        else {
        loc_403404:
            result = v5;
        }
    }
    else {
        unsigned int v7 = ptr0[3];
        if(v7 && v7 >= (unsigned int)v5) {
            unsigned int v8 = ptr0[2];
            if((int)(v8 + v5) < 0) {
            loc_403444:
                *(char**)&v0 = ptr1;
                sub_40213C((int*)ptr0[0], *(int**)&v0, v5);
                ptr0[2] += v5;
                result = v5;
                ptr0[0] += v5;
            }
            else if(!v8) {
                ptr0[2] = (unsigned int)(-1 - v7);
                goto loc_403444;
            }
            else {
                *(int*)&v0 = &loc_40343A;
                int v9 = /*BAD_CALL!*/ sub_4032C4(ptr0);
                if(!v9) {
                    goto loc_403444;
                }
                else {
                    result = 0;
                }
            }
        }
        else if(ptr0[3] && ptr0[2]) {
            *(int*)&v0 = &loc_403470;
            int v10 = /*BAD_CALL!*/ sub_4032C4(ptr0);
            if(!v10) {
                *(char**)&v0 = ptr1;
                int v11 = sub_403078((unsigned int)*((char*)&ptr0[5] + 2), *(LPCVOID*)&v0, (DWORD)v5);
                return v11 != -1 && (unsigned int)v11 >= (unsigned int)v5 ? v5: 0;
            }
            result = 0;
        }
        else {
            *(char**)&v0 = ptr1;
            int v11 = sub_403078((unsigned int)*((char*)&ptr0[5] + 2), *(LPCVOID*)&v0, (DWORD)v5);
            result = v11 != -1 && (unsigned int)v11 >= (unsigned int)v5 ? v5: 0;
        }
    }
    return result;
}

unsigned int sub_4034A0(unsigned int param0, unsigned int* param1) {
    unsigned int result = 0;
    for(unsigned int* i = (unsigned int*)&gvar_40AB6C; (int)gvar_40AB68 > (int)result && *i; ++i) {
        ++result;
    }
    if(gvar_40AB68 == result) {
        return 0xffffffff;
    }
    *(unsigned int*)(result * 4 + (int)&gvar_40AB6C) = param1;
    *(unsigned int*)(result * 4 + (int)&gvar_40C988) = param0;
    return result;
}

unsigned int sub_4034E0(unsigned int param0, unsigned int param1, unsigned int param2) {
    unsigned int result = param1;
    if(result == -1) {
        result = 0;
        for(unsigned int* i = (unsigned int*)&gvar_40AB6C; ((int)gvar_40AB68 > (int)result && *i); ++i) {
            ++result;
        }
    }
    unsigned int v0 = gvar_40AB68;
    if(v0 <= param0 || result >= v0) {
        return 0xffffffff;
    }
    v0 = *(unsigned int*)(param0 * 4 + (int)&gvar_40AB6C);
    if(!v0 || *(int*)(result * 4 + (int)&gvar_40AB6C)) {
        return 0xffffffff;
    }
    *(unsigned int*)(result * 4 + (int)&gvar_40AB6C) = v0;
    *(unsigned int*)(result * 4 + (int)&gvar_40C988) = param2;
    return result;
}

unsigned int sub_403548(unsigned int param0) {
    if(gvar_40AB68 > param0) {
        *(int*)(param0 * 4 + (int)&gvar_40AB6C) = 0;
    }
    return param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_403564(unsigned int* param0) {
    unsigned int* result;
    unsigned int v0 = gvar_40AB68;
    unsigned int* ptr0 = param0;
    unsigned int* ptr1 = (unsigned int*)(v0 * 4 + &gvar_40AB68);
    if(v0) {
        while(!*ptr1) {
            --v0;
            --ptr1;
            if(!v0) {
                break;
            }
        }
    }
    if(ptr0) {
        *ptr0 = v0;
        unsigned int v1 = 0;
        int* ptr2 = (int*)(ptr0 + 1);
        int* ptr3 = (int*)&gvar_40AB6C;
        if((int)v0 > 0) {
            do {
                char v2 = 1;
                int v3 = *ptr3;
                if(((unsigned char)(v3 >>> 8) & 0x8)) {
                    v2 = 33;
                }
                if(!((unsigned char)(v3 >>> 8) & 0x80)) {
                    v2 |= 128;
                }
                if(((unsigned char)(v3 >>> 8) & 0x20)) {
                    v2 |= 64;
                }
                *(char*)&ptr2[0] = v2;
                ptr2 = (int*)((char*)ptr2 + 1);
                ++v1;
                ++ptr3;
            }
            while((int)v0 > (int)v1);
        }
        sub_40213C(ptr2, (int*)&gvar_40C988, (int)(v0 * 4));
        result = NULL;
    }
    else if(!v0) {
        result = NULL;
    }
    else {
        result = (unsigned int*)(v0 * 5 + 4);
    }
    return result;
}

int sub_40375C(unsigned int param0) {
    unsigned int v0;
    unsigned int v1 = param0;
    if(v1 >= 0x80000000) {
        v0 = (unsigned int)(0 - v1);
        if((int)gvar_40AE2C > (int)v0) {
            gvar_40CA50 = 0xffffffff;
        }
        else {
        loc_40376D:
            v1 = 1;
        loc_403772:
            gvar_40CA50 = v1;
            v0 = (unsigned int)*(char*)(v1 + 0x40ac3c);
        }
    }
    else if((int)v1 <= 298) {
        goto loc_403772;
    }
    else {
        goto loc_40376D;
    }
    gvar_40B9FC = v0;
    return -1;
}

int sub_4037C0() {
    DWORD v0 = →KERNEL32.DLL!GetLastError();
    return sub_40375C((unsigned int)(unsigned short)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4037D4(unsigned char param0, unsigned int* param1) {
    int result;
    int* ptr0;
    int v0;
    char v1;
    unsigned char v2;
    int v3;
    int v4;
    *(int*)&v1 = v4;
    int v5 = (unsigned int)v2 | ((unsigned int)v3 << 8);
    unsigned int* ptr1 = param1;
    v2 = param0;
    unsigned char v6 = param0;
    if(ptr1[2] != -1 && (~(-1 - ptr1[2]) & ~ptr1[2]) < 0 == (int)ptr1[2] > -1) {
        v0 = 1;
        ptr0 = &v6;
        sub_40213C((int*)ptr1[0], &v6, 1);
        ++ptr1[2];
        ++ptr1[0];
        if((*((char*)&ptr1[4] + 2) & 0x8) && (v2 == 10 || v2 == 13)) {
            int* ptr2 = (int*)sub_4032C4(ptr1);
            if(!ptr2) {
                goto loc_40382C;
            }
            else {
                result = -1;
            }
        }
        else {
        loc_40382C:
            result = (unsigned int)v2;
        }
    }
    else {
        int v7 = (unsigned int)*(short*)((char*)&ptr1[4] + 2) | ((unsigned int)0xffff << 16);
        if(((unsigned char)v7 & 0x90) || !((unsigned char)v7 & 0x2)) {
            *(short*)((char*)&ptr1[4] + 2) = *(short*)((char*)&ptr1[4] + 2) | 0x10;
            result = -1;
        }
        else {
            *(short*)((char*)&ptr1[4] + 2) = *(short*)((char*)&ptr1[4] + 2) | 0x100;
            if(!ptr1[3]) {
                v0 = 1;
                ptr0 = &v6;
                int v8 = sub_403078((unsigned int)*((char*)&ptr1[5] + 2), &v6, 1);
                if(v8 != 1 && !(*((char*)&ptr1[4] + 3) & 0x2)) {
                    *(short*)((char*)&ptr1[4] + 2) = *(short*)((char*)&ptr1[4] + 2) | 0x10;
                    result = -1;
                }
                else {
                    result = (unsigned int)v2;
                }
            }
            else if(ptr1[2]) {
                int v9 = sub_4032C4(ptr1);
                if(!v9) {
                    goto loc_403876;
                }
                else {
                    result = -1;
                }
            }
            else {
            loc_403876:
                ptr1[2] = (unsigned int)(0 - ptr1[3]);
                v0 = 1;
                ptr0 = &v6;
                sub_40213C((int*)ptr1[0], &v6, 1);
                ++ptr1[0];
                if((*((char*)&ptr1[4] + 2) & 0x8) && (v2 == 10 || v2 == 13)) {
                    int* ptr3 = (int*)sub_4032C4(ptr1);
                    if(!ptr3) {
                        return (unsigned int)v2;
                    }
                    result = -1;
                }
                else {
                    result = (unsigned int)v2;
                }
            }
        }
    }
    return result;
}

char* sub_403A9C(int param0, int param1) {
    int v0 = 7;
    int v1 = param0;
    char* result = (char*)(param1 + 7);
    do {
        *result = (int)(unsigned int)(v1 & 0xf) < 10 ? ((unsigned char)v1 & 0xf) + 48: ((unsigned char)v1 & 0xf) + 55;
        v1 >>>= 4;
        --v0;
        --result;
    }
    while(v0 >= 0);
    return result;
}

int sub_404434(unsigned int param0) {
    unsigned int v0 = gvar_40B59C;
    if((int)param0 <= 16) {
        if(param0 == 14) {
            return *(int*)(*(int*)(v0 + 24) + 4);
        }
        else if(param0 == 16) {
            return *(int*)(*(int*)(v0 + 24) + 8);
        }
        else if((param0 - 15)) {
            return 0;
        }
        return **(unsigned int*)(v0 + 24);
    }
    else if(param0 == 80) {
        return *(int*)(*(int*)(v0 + 24) + 12);
    }
    else if((param0 - 81)) {
        return 0;
    }
    return *(int*)(*(int*)(v0 + 24) + 16);
}

int sub_404488(unsigned int param0) {
    return sub_404690(param0, 260);
}

int sub_4044A0(unsigned int param0) {
    int v0;
    return ((unsigned int)(param0 >= 128 ? 0: 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_4044B4(unsigned int param0) {
    return sub_404690(param0, 0x100);
}

int sub_4044CC(unsigned int param0) {
    return sub_404690(param0, 32);
}

int sub_4044E0(unsigned int param0) {
    return sub_404690(param0, 4);
}

int sub_4044F4(unsigned int param0) {
    return sub_404690(param0, 404);
}

int sub_40450C(unsigned int param0) {
    return sub_404690(param0, 2);
}

int sub_404520(unsigned int param0) {
    return sub_404690(param0, 468);
}

int sub_404538(unsigned int param0) {
    return sub_404690(param0, 16);
}

int sub_40454C(unsigned int param0) {
    return sub_404690(param0, 8);
}

int sub_404560(unsigned int param0) {
    return sub_404690(param0, 1);
}

int sub_404574(unsigned int param0) {
    return sub_404690(param0, 128);
}

int sub_40458C(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 260);
}

int sub_4045A4(unsigned short param0) {
    return ((unsigned int)(param0 >= 128 ? 0: 1) | ((unsigned int)(((unsigned int)param0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_4045B8(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 0x100);
}

int sub_4045D0(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 32);
}

int sub_4045E4(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 4);
}

int sub_4045F8(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 404);
}

int sub_404610(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 2);
}

int sub_404624(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 468);
}

int sub_40463C(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 16);
}

int sub_404650(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 8);
}

int sub_404664(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 1);
}

int sub_404678(short param0) {
    short v0;
    *(int*)&v0 = (unsigned int)param0;
    return sub_4046D4(v0, 128);
}

int sub_404690(unsigned int param0, int param1) {
    if(param0 > 0xff) {
        return 0;
    }
    unsigned int v0 = gvar_40B59C;
    return !*(int*)(v0 + 8) && *(int*)(v0 + 16) ? (unsigned int)*(short*)(param0 * 2 + *(int*)(v0 + 16) + 2) & param1: (unsigned int)*(unsigned short*)((unsigned int)(unsigned short)param0 * 2 + (int)&gvar_40B25E) & param1;
}

int sub_4046D4(short param0, int param1) {
    int result;
    char v0;
    short v1;
    int v2;
    *(int*)&v0 = v2;
    int v3 = param1;
    if(*(int*)&param0 == 0xffff) {
        result = 0;
    }
    else if(*(int*)(gvar_40B59C + 8) && (short)*(int*)&param0 < 0x100) {
        result = (unsigned int)*(unsigned short*)((int)param0 * 2 + (int)&gvar_40B25E) & v3;
    }
    else {
        →KERNEL32.DLL!GetStringTypeW(1, &param0, 1, &v1);
        result = (unsigned int)v1 & v3;
    }
    return result;
}

int sub_40472C(LPCCH lpMultiByteStr, unsigned int param1) {
    int v0;
    LPCCH v1;
    int v2;
    int v3;
    int v4;
    if(!lpMultiByteStr || !lpMultiByteStr[0] || !param1) {
        return 0;
    }
    else if(!(*(char*)((unsigned int)lpMultiByteStr[0] + 4246101) & 0x4)) {
        v4 = 0;
        v3 = 0;
        unsigned int* ptr0 = gvar_40B59C;
        v2 = 1;
        v1 = lpMultiByteStr;
        v0 = 9;
        int v5 = →KERNEL32.DLL!MultiByteToWideChar(*ptr0, 9, lpMultiByteStr, 1, NULL, 0);
        return !v5 ? -1: 1;
    }
    else if((int)param1 >= 2) {
        v4 = 0;
        v3 = 0;
        unsigned int* ptr1 = gvar_40B59C;
        v2 = 2;
        v1 = lpMultiByteStr;
        v0 = 9;
        LPCCH v6 = (LPCCH)→KERNEL32.DLL!MultiByteToWideChar(*ptr1, 9, lpMultiByteStr, 2, NULL, 0);
        return !v6 ? -1: 2;
    }
    return -1;
}

int sub_4047A8(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int param2) {
    int v0;
    LPCCH v1;
    int v2;
    LPWSTR v3;
    int v4;
    int result;
    int v5;
    int v6 = v5;
    if(!lpMultiByteStr || !param2) {
        result = 0;
    }
    else if(!lpMultiByteStr[0]) {
        if(lpWideCharStr) {
            lpWideCharStr[0] = 0;
        }
        result = 0;
    }
    else if(*(int*)(gvar_40B59C + 8)) {
        if(lpWideCharStr) {
            lpWideCharStr[0] = (WCHAR)lpMultiByteStr[0];
        }
        result = 1;
    }
    else if(!(*(char*)((unsigned int)lpMultiByteStr[0] + 4246101) & 0x4)) {
        v4 = !lpWideCharStr ? 0: 1;
        v3 = lpWideCharStr;
        unsigned int* ptr0 = gvar_40B59C;
        v2 = 1;
        v1 = lpMultiByteStr;
        v0 = 9;
        int v7 = →KERNEL32.DLL!MultiByteToWideChar(*ptr0, 9, lpMultiByteStr, 1, lpWideCharStr, !lpWideCharStr ? 0: 1);
        result = v7 ? 1: -1;
    }
    else if((int)param2 >= 2) {
        v4 = !lpWideCharStr ? 0: 1;
        v3 = lpWideCharStr;
        unsigned int* ptr1 = gvar_40B59C;
        v2 = 2;
        v1 = lpMultiByteStr;
        v0 = 9;
        LPWSTR v8 = (LPWSTR)→KERNEL32.DLL!MultiByteToWideChar(*ptr1, 9, lpMultiByteStr, 2, lpWideCharStr, !lpWideCharStr ? 0: 1);
        result = v8 ? 2: (int)param2 < 2 || !lpMultiByteStr[1] ? -1: 2;
    }
    else {
        result = (int)param2 < 2 || !lpMultiByteStr[1] ? -1: 2;
    }
    return result;
}

int sub_40487C(LPSTR lpMultiByteStr, CHAR param1) {
    if(!lpMultiByteStr) {
        return 0;
    }
    else if(!*(int*)(gvar_40B59C + 8)) {
        unsigned int v0 = 0;
        LPBOOL v1 = &v0;
        int v2 = 0;
        int v3 = 2;
        LPSTR v4 = lpMultiByteStr;
        unsigned int* ptr0 = gvar_40B59C;
        int v5 = 1;
        LPCWCH v6 = &param1;
        int v7 = 544;
        int v8 = →KERNEL32.DLL!WideCharToMultiByte(*ptr0, 544, &param1, 1, lpMultiByteStr, 2, NULL, &v0);
        return v8 && !v0 ? v8: -1;
    }
    else if(param1 > 0xff) {
        return -1;
    }
    lpMultiByteStr[0] = param1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4048F0(LPWSTR param0, LPCCH param1, int cchWideChar) {
    int v0;
    int v1;
    int result1;
    int v2;
    int v3;
    int v4 = v3;
    int v5 = v2;
    LPCCH lpMultiByteStr = param1;
    LPWSTR lpWideCharStr = param0;
    int result = 0;
    if(lpWideCharStr && !cchWideChar) {
        result1 = 0;
    }
    else if(lpWideCharStr) {
        if(!*(int*)(gvar_40B59C + 8)) {
            unsigned int* ptr0 = gvar_40B59C;
            void* ptr1 = (void*)cchWideChar;
            v1 = -1;
            v0 = 9;
            int v6 = /*BAD_CALL!*/ →KERNEL32.DLL!MultiByteToWideChar(*ptr0, 9, lpMultiByteStr, -1, lpWideCharStr, cchWideChar);
            if(v6) {
                result1 = v6 - 1;
            }
            else {
                DWORD v7 = →KERNEL32.DLL!GetLastError();
                if(v7 != 122) {
                    result1 = -1;
                }
                else {
                    int v8 = cchWideChar;
                    LPCCH v9 = lpMultiByteStr;
                    while(1) {
                        int v10 = v8;
                        --v8;
                        if(!v10 || !v9[0]) {
                            break;
                        }
                        else {
                            if((*(char*)((unsigned int)v9[0] + 4246101) & 0x4)) {
                                ++v9;
                            }
                            ++v9;
                        }
                    }
                    v4 = (int)v9 - (int)lpMultiByteStr;
                    ptr1 = (void*)cchWideChar;
                    int cbMultiByte = (int)v9 - (int)lpMultiByteStr;
                    unsigned int* ptr2 = gvar_40B59C;
                    v1 = cbMultiByte;
                    v0 = 1;
                    int v11 = /*BAD_CALL!*/ →KERNEL32.DLL!MultiByteToWideChar(*ptr2, 1, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
                    result1 = !v11 ? -1: v11;
                }
            }
        }
        else if((unsigned int)cchWideChar > 0) {
            do {
                lpWideCharStr[0] = (WCHAR)lpMultiByteStr[result];
                if(!lpMultiByteStr[result]) {
                    return result;
                }
                ++result;
                ++lpWideCharStr;
                if((unsigned int)result >= (unsigned int)cchWideChar) {
                    goto loc_404947;
                }
            }
            while(1);
        }
        else {
        loc_404947:
            result1 = result;
        }
    }
    else if(*(int*)(gvar_40B59C + 8)) {
        result1 = sub_402250((int)lpMultiByteStr);
    }
    else {
        LPWSTR v12 = NULL;
        unsigned int* ptr3 = gvar_40B59C;
        v1 = -1;
        v0 = 9;
        int v13 = →KERNEL32.DLL!MultiByteToWideChar(*ptr3, 9, lpMultiByteStr, -1, NULL, 0);
        result1 = v13 ? v13 - 1: -1;
    }
    return result1;
}

int* sub_404A1C(unsigned short* param0, int* param1) {
    int v0;
    int v1 = v0;
    int* ptr0 = (int*)((char*)param1 + 1);
    unsigned short* ptr1 = param0;
    while(1) {
        ptr0 = (int*)((char*)ptr0 - 1);
        if(ptr0) {
            if(*ptr1) {
                ++ptr1;
                continue;
            }
            else if(!*ptr1) {
                int* ptr2 = (int*)((int)ptr1 - (int)param0);
                int* ptr3 = (int*)((int)ptr2 >> 1);
                if((int)ptr3 < 0) {
                    ptr3 = (int*)((unsigned int)(int*)((int)ptr2 & 0x1) + (int)ptr3);
                }
                return (int*)((char*)ptr3 + 1);
            }
        }
        return param1;
    }
    return param1;
}

int sub_404A58(LPSTR lpMultiByteStr, LPCWCH lpWideCharStr, int cbMultiByte) {
    LPCWCH v0;
    int v1;
    LPCWCH v2;
    int v3;
    LPSTR v4;
    int v5;
    int v6;
    void* ptr0;
    int result2;
    char v7;
    int v8;
    int v9 = v8;
    unsigned int v10 = 0;
    int result1 = 0;
    if(lpMultiByteStr && !cbMultiByte) {
        result2 = 0;
    }
    else if(lpMultiByteStr) {
        if(!*(int*)(gvar_40B59C + 4)) {
            ptr0 = &v10;
            v6 = 0;
            v5 = cbMultiByte;
            unsigned int* ptr1 = gvar_40B59C;
            v4 = lpMultiByteStr;
            v3 = -1;
            v2 = lpWideCharStr;
            v1 = 544;
            int result = →KERNEL32.DLL!WideCharToMultiByte(*ptr1, 544, lpWideCharStr, -1, lpMultiByteStr, cbMultiByte, NULL, &v10);
            if(result && !v10) {
                result2 = result - 1;
            }
            else if(!v10) {
                int v11 = (int)→KERNEL32.DLL!GetLastError();
                if(v11 != 122) {
                    goto loc_404B1E;
                }
                else if((unsigned int)result < (unsigned int)cbMultiByte) {
                    while(1) {
                        ptr0 = &v10;
                        v6 = 0;
                        v5 = 2;
                        v4 = &v7;
                        v3 = 1;
                        unsigned int* ptr2 = gvar_40B59C;
                        v2 = lpWideCharStr;
                        v1 = 0;
                        int v12 = →KERNEL32.DLL!WideCharToMultiByte(*ptr2, 0, lpWideCharStr, 1, &v7, 2, NULL, &v10);
                        if(!v12 || v10) {
                            break;
                        }
                        else if((unsigned int)(LPCWCH)(result + v12) > (unsigned int)cbMultiByte) {
                            return result;
                        }
                        else {
                            unsigned int v13 = 0;
                            v0 = (short*)&lpMultiByteStr[result];
                            LPSTR v14 = &v7;
                            if(((0 - v12) & v12) < 0 != v12 > 0) {
                                do {
                                    void* ptr3 = (unsigned int)v14[0] | ((unsigned int)(int*)((int)(int*)((int)ptr3 >>> 8) & 0xffffff) << 8);
                                    *(char*)&v0[0] = v14[0];
                                    if(!(unsigned char)ptr3) {
                                        return result;
                                    }
                                    ++v14;
                                    ++v13;
                                    v0 = (LPCWCH)((char*)v0 + 1);
                                    ++result;
                                }
                                while((int)v13 < v12);
                            }
                            ++lpWideCharStr;
                            if((unsigned int)result >= (unsigned int)cbMultiByte) {
                                goto loc_404BA3;
                            }
                        }
                    }
                    result2 = -1;
                }
                else {
                loc_404BA3:
                    result2 = result;
                }
            }
            else {
            loc_404B1E:
                result2 = -1;
            }
        }
        else if((unsigned int)cbMultiByte > 0) {
            while(lpWideCharStr[0] <= 0xff) {
                lpMultiByteStr[result1] = *(char*)&lpWideCharStr[0];
                v0 = lpWideCharStr;
                ++lpWideCharStr;
                if(!v0[0]) {
                    return result1;
                }
                ++result1;
                if((unsigned int)result1 >= (unsigned int)cbMultiByte) {
                    goto loc_404ACC;
                }
            }
            result2 = -1;
        }
        else {
        loc_404ACC:
            result2 = result1;
        }
    }
    else if(*(int*)(gvar_40B59C + 8)) {
        result2 = sub_4023BC((unsigned short*)lpWideCharStr);
    }
    else {
        unsigned int* ptr4 = gvar_40B59C;
        ptr0 = &v10;
        v6 = 0;
        v5 = 0;
        v4 = NULL;
        v3 = -1;
        v2 = lpWideCharStr;
        v1 = 544;
        int v15 = →KERNEL32.DLL!WideCharToMultiByte(*ptr4, 544, lpWideCharStr, -1, NULL, 0, NULL, &v10);
        result2 = v15 && !v10 ? v15 - 1: -1;
    }
    return result2;
}

int sub_404DFC(unsigned int param0) {
    int result;
    if((int)param0 >= 0xffffecbc) {
        if((int)param0 > 0x1344) {
            result = 0x40b776;
        }
        else if(param0) {
            unsigned int v0 = *(unsigned int*)(((param0 >= 0x80000000 ? (unsigned int)(0 - param0): param0) & 0x7) * 10 + (int)&gvar_40B6C0);
            unsigned int v1 = *(unsigned int*)(((param0 >= 0x80000000 ? (unsigned int)(0 - param0): param0) & 0x7) * 10 + (int)&gvar_40B6C4);
            unsigned short v2 = *(unsigned short*)(((param0 >= 0x80000000 ? (unsigned int)(0 - param0): param0) & 0x7) * 10 + (int)&gvar_40B6C8);
            if(((unsigned char)((param0 >= 0x80000000 ? (unsigned int)(0 - param0): param0) >>> 3) & 0x1)) {
                *(void*)&v0 = *(void*)0x40B710 * *(void*)&v0;
            }
            result = ((param0 >= 0x80000000 ? (unsigned int)(0 - param0): param0) >> 3) >> 1;
            if(result) {
                if(((unsigned char)result & 0x1)) {
                    *(void*)&v0 = *(void*)0x40B71C * *(void*)&v0;
                }
                if(((unsigned char)(result >>> 1) & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B726 * *(void*)&v0;
                }
                if(((unsigned char)(result >>> 2) & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B730 * *(void*)&v0;
                }
                if(((unsigned char)(result >>> 3) & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B73A * *(void*)&v0;
                }
                if(((unsigned char)(result >>> 4) & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B744 * *(void*)&v0;
                }
                if(((unsigned char)(result >>> 5) & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B74E * *(void*)&v0;
                }
                int v3 = (((((result >> 1) >> 1) >> 1) >> 1) >> 1) >> 1;
                if(((unsigned char)v3 & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B758 * *(void*)&v0;
                }
                if(((unsigned char)(v3 >>> 1) & 0x1)) {
                    *(void*)&v0 = *(void*)&gvar_40B762 * *(void*)&v0;
                }
                result = (v3 >> 1) >> 1;
                if(((unsigned char)result & 0x1)) {
                    result = &gvar_40B76C;
                    *(void*)&v0 = *(void*)&gvar_40B76C * *(void*)&v0;
                }
            }
        }
    }
    return result;
}

int sub_404FC8(int param0) {
    int result;
    gvar_40B780();
    return result;
}

int sub_404FCE(int param0) {
    int result;
    gvar_40B784();
    return result;
}

int sub_404FD4(int param0) {
    int result;
    gvar_40B788();
    return result;
}

int sub_404FDA(int param0) {
    int result;
    gvar_40B78C();
    return result;
}

long long* sub_405028(long long* param0) {
    return param0;
}

long long* sub_405058(long long* param0, void* param1) {
    long long* result = param0;
    void* ptr0 = param1;
    if(*(short*)((int)ptr0 + 8) != 16446) {
        *result = (long long)*ptr0;
    }
    else {
        *(int*)result = *(int*)ptr0;
        *(int*)((char*)result + 4) = *(int*)((int)ptr0 + 4);
    }
    return result;
}

int sub_40507C(void* param0) {
    fxam(*param0);
    fnstsw(0);
    return 0;
}

char* sub_405090(unsigned int param0, unsigned int param1, char* param2, unsigned int param3, unsigned char param4, char param5) {
    char v0;
    int v1;
    unsigned int v2;
    int v3;
    unsigned int v4;
    int v5 = v1;
    unsigned int v6 = param3;
    char* ptr0 = param2;
    if((int)v6 >= 2 && (int)v6 <= 36) {
        if(!param1) {
            if(param0 < 0) {
                goto loc_4050C5;
            }
        }
        else if(param1 >= 0x80000000) {
        loc_4050C5:
            if(param4) {
                *ptr0 = 45;
                ++ptr0;
                param1 = (unsigned int)(0 - (unsigned int)((unsigned int)(param0 > 0) + param1));
            }
        }
        char* ptr1 = &v0;
        do {
            int v7 = sub_404D5A(v3, (int)param1, (int)v6, v6 >= 0x80000000 ? -1: 0);
            *ptr1 = (unsigned char)v7;
            ++ptr1;
            v4 = (unsigned int)sub_404C97(v3, (int)param1, (int)v6, v6 >= 0x80000000 ? -1: 0);
            param0 = v4;
            param1 = v2;
        }
        while(v2 || v4);
        while(ptr1 != &v0) {
            --ptr1;
            v4 = (unsigned int)*ptr1 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            if(*ptr1 < 10) {
                v4 += 48;
            }
            else {
                v4 = (unsigned int)((unsigned char)v4 + param5 + 246) | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            }
            *ptr0 = (unsigned char)v4;
            ++ptr0;
        }
    }
    *ptr0 = 0;
    return param2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_405144(int param0, int param1, int param2, short param3, int param4, int param5) {
    int v0;
    int v1;
    unsigned short v2;
    unsigned short v3;
    if(!param0) {
        v3 = 16510;
        v2 = 16234;
    }
    else {
        v3 = 17406;
        v2 = 0x3bcd;
    }
    int result = &param1;
    if((param3 & 0x7fff) != 0x7fff) {
        if((unsigned short)(param3 & 0x7fff) > v3) {
            v1 = param4;
            result = param5;
            v0 = param5;
            goto loc_40522D;
        }
        else if((param3 & 0x7fff) == v3) {
            int v4 = sub_404F98(0, 0);
            sub_404F98(0xc00, 0xc00);
            *(long long*)&v1 = *(void*)&param1;
            result = sub_404F98((unsigned int)v4, 0xc00);
        }
        else if(((param3 & 0x7fff) | (unsigned short)(param1 >>> 16) | (unsigned short)(param2 >>> 16) | (unsigned short)param1 | (unsigned short)param2) && (unsigned short)(param3 & 0x7fff) < v2) {
            result = 0;
            v1 = 0;
            v0 = 0;
        loc_40522D:
            gvar_40B9FC = 34;
            if((param3 & 0x8000)) {
                v5[v6] = fchs(*(double*)&v1);
            }
        }
    }
    return result;
}

int sub_4052EC(unsigned int* param0) {
    unsigned int* ptr0 = param0;
    if(*ptr0 == 4) {
        *(int*)(ptr0 + 6) = 0;
        *(int*)(ptr0 + 7) = 0;
        return 1;
    }
    return *ptr0 != 5 ? 0: 1;
}

int sub_405318(unsigned int* param0) {
    unsigned int* ptr0 = param0;
    if(*ptr0 == 4) {
        *(int*)(ptr0 + 7) = 0;
        *(int*)(ptr0 + 8) = 0;
        *(short*)(ptr0 + 9) = 0;
        return 1;
    }
    return *ptr0 != 5 ? 0: 1;
}

unsigned int sub_405348(unsigned int param0, unsigned int param1) {
    gvar_40B8D8 = param0;
    gvar_40B8DC = param1;
    return param0;
}

int sub_405360(unsigned int* param0) {
    unsigned int* ptr0 = param0;
    unsigned int v0 = 0;
    unsigned int v1 = *(ptr0 + 1);
    if(v1) {
        v0 = v1 % 10;
        *(ptr0 + 1) = v1 / 10;
    }
    int v2 = *ptr0;
    *ptr0 = (unsigned int)((unsigned long long)v2 | ((unsigned long long)v0 << 32)) / 10;
    return (int)((unsigned int)((unsigned long long)v2 | ((unsigned long long)v0 << 32)) % 10);
}

int sub_405388(int* param0, int param1) {
    int* ptr0 = param0;
    int v0 = *ptr0;
    int v1 = (unsigned int)(((unsigned long long)v0 * 10L) >>> 32L) + (unsigned int)__carry__(v0 * 10, param1);
    *ptr0 = v0 * 10 + param1;
    int v2 = *(ptr0 + 1);
    *(ptr0 + 1) = v2 * 10 + v1;
    return (unsigned int)(((unsigned long long)v2 * 10L) >>> 32L) + (unsigned int)__carry__(v2 * 10, v1);
}

unsigned int sub_4053B8(int param0, unsigned int param1, unsigned int param2) {
    unsigned int result;
    int v0;
    int v1 = v0;
    unsigned int v2 = param2;
    int v3 = sub_404434(14);
    if((unsigned char)param0 == 71 || (unsigned char)param0 == 103) {
        while(1) {
            if(*(char*)(v2 - 1) != 48) {
                goto loc_4053EF;
            }
            else {
                --v2;
                if(v2 <= param1) {
                    return param1;
                }
            }
        }
    }
    else {
    loc_4053EF:
        if(*(char*)(v2 - 1) == *(char*)v3) {
            --v2;
        }
        result = v2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
short* sub_4053FC(float* param0, int param1, short* param2, char param3, unsigned char param4, unsigned int param5) {
    int* ptr0;
    int i;
    short* result;
    unsigned int j;
    int v0;
    char v1;
    int v2;
    unsigned int v3;
    char v4;
    char v5;
    char v6;
    int v7 = v2;
    *(int*)&v1 = &loc_40540C;
    int v8 = /*BAD_CALL!*/ sub_404434(14);
    v8 = (unsigned int)*(char*)v8 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
    char v9 = (unsigned char)v8;
    if(param1 > 40) {
        param1 = 40;
    }
    int v10 = param1;
    unsigned char v11 = (unsigned char)(param3 & 0xdf);
    unsigned char v12 = (unsigned char)(param3 & 0xdf);
    if(v11 == 70) {
        v0 = 0 - v10;
        char v13 = v0 ? 0: 1;
        if(!v13 && v0 >= 0) {
            v0 = 0;
            param1 = 0;
        }
    }
    else {
        v0 = v10;
        if(v0 <= 0) {
            v0 = 1;
        }
        else if(v12 == 69) {
            ++v0;
            ++param1;
        }
    }
    unsigned int v14 = param5;
    *(short**)&v1 = &v6;
    float* ptr1 = param0;
    unsigned int counter = sub_4063AC(ptr1, v0, &v3, *(short**)&v1, v14);
    short* ptr2 = param2;
    switch(counter) {
        case 32766: {
            unsigned char* ptr3 = v3 ? "-NAN": "+NAN";
            int v15 = -1;
            short* ptr4 = ptr2;
            while(v15 != 0) {
                char v16 = *ptr3 == 0;
                ++ptr3;
                --v15;
                if(!~v16) {
                    break;
                }
            }
            unsigned int v17 = (unsigned int)~v15;
            j = (unsigned int)~v15;
            short* ptr5 = ptr4;
            int* ptr6 = (int*)((int)ptr3 - v17);
            int v18 = v17 >>> 2;
            result = ptr5;
            while(v18 != 0) {
                *(int*)&ptr5[0] = *ptr6;
                ++ptr6;
                ptr5 += 2;
                --v18;
            }
            for(i = j & 0x3; i != 0; --i) {
                *(char*)&ptr5[0] = *(char*)ptr6;
                ptr6 = (int*)((char*)ptr6 + 1);
                ptr5 = (short*)((char*)ptr5 + 1);
            }
            return result;
        }
        case 32767: {
            unsigned char* ptr7 = v3 ? "-INF": "+INF";
            int v19 = -1;
            short* ptr8 = ptr2;
            while(v19 != 0) {
                char v20 = *ptr7 == 0;
                ++ptr7;
                --v19;
                if(!~v20) {
                    break;
                }
            }
            unsigned int v21 = (unsigned int)~v19;
            j = (unsigned int)~v19;
            short* ptr9 = ptr8;
            int* ptr10 = (int*)((int)ptr7 - v21);
            int v22 = v21 >>> 2;
            result = ptr9;
            while(v22 != 0) {
                *(int*)&ptr9[0] = *ptr10;
                ++ptr10;
                ptr9 += 2;
                --v22;
            }
            for(i = j & 0x3; i != 0; --i) {
                *(char*)&ptr9[0] = *(char*)ptr10;
                ptr10 = (int*)((char*)ptr10 + 1);
                ptr9 = (short*)((char*)ptr9 + 1);
            }
            return result;
        }
        default: {
            if(v3) {
                *(char*)&ptr2[0] = 45;
                ptr2 = (short*)((char*)ptr2 + 1);
            }
            if((v12 == 70 || (v12 == 71 && (int)counter >= -3 && (int)(!(param1 ? 0: 1) ? param1: 1) >= (int)counter)) && (int)counter <= 40) {
                if((int)counter <= 0) {
                    *(char*)&ptr2[0] = 48;
                    char* ptr11 = (char*)((char*)ptr2 + 1);
                    j = (unsigned int)v9 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                    *ptr11 = v9;
                    ptr2 = (short*)(ptr11 + 1);
                    if(counter) {
                        do {
                            *(char*)&ptr2[0] = 48;
                            ptr2 = (short*)((char*)ptr2 + 1);
                            ++counter;
                        }
                        while(counter);
                    }
                }
                int v23 = 0;
                result = &v6;
                for(j = (unsigned int)*(char*)&result[0] | ((unsigned int)((j >>> 8) & 0xffffff) << 8); *(char*)&result[0]; j = (unsigned int)*(char*)&result[0] | ((unsigned int)((j >>> 8) & 0xffffff) << 8)) {
                    *(char*)&ptr2[0] = (unsigned char)j;
                    ptr2 = (short*)((char*)ptr2 + 1);
                    --counter;
                    if(!counter) {
                        j = (unsigned int)v9 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                        *(char*)&ptr2[0] = v9;
                        ptr2 = (short*)((char*)ptr2 + 1);
                        ++v23;
                    }
                    result = (short*)((char*)result + 1);
                }
                unsigned int v24 = (unsigned int)(v23 + v10);
                if((int)v24 < param1) {
                    int v25 = param1 - v24;
                    *(int*)&v1 = 48;
                    result = sub_4021AC(ptr2, '0', v25);
                    ptr2 = (short*)((int)ptr2 + v25);
                }
                else if((counter - 1) && !param4) {
                    *(short**)&v1 = param2;
                    result = (short*)sub_4053B8((unsigned int)param3 | ((unsigned int)((j >>> 8) & 0xffffff) << 8), *(unsigned int*)&v1, (unsigned int)ptr2);
                    ptr2 = result;
                }
                if(ptr2 == param2) {
                    *(char*)&ptr2[0] = 48;
                    ptr2 = (short*)((char*)ptr2 + 1);
                }
                *(char*)&ptr2[0] = 0;
            }
            else {
                j = (unsigned int)v6 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                *(char*)&ptr2[0] = v6;
                unsigned int v26 = (unsigned int)((char*)ptr2 + 1);
                j = (unsigned int)v5 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                char* ptr12 = &v4;
                if((unsigned char)j) {
                    i = (unsigned int)v9 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                    *(char*)v26 = v9;
                    ++v26;
                    if((unsigned char)j) {
                        do {
                            *(char*)v26 = (unsigned char)j;
                            ++v26;
                            j = (unsigned int)*ptr12 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                            ++ptr12;
                        }
                        while((unsigned char)j);
                    }
                    if(!param4) {
                        *(short**)&v1 = param2;
                        v26 = sub_4053B8((unsigned int)param3 | ((unsigned int)((i >>> 8) & 0xffffff) << 8), *(unsigned int*)&v1, v26);
                    }
                }
                else if(param4) {
                    *(char*)v26 = v9;
                    ++v26;
                }
                *(char*)v26 = (param3 & 0x20) | 0x45;
                char* ptr13 = (char*)(v26 + 1);
                short* ptr14 = (short*)(counter - 1);
                if((int)ptr14 < 0) {
                    ptr14 = (short*)(0 - (int)ptr14);
                    *ptr13 = 45;
                    ptr0 = (int*)(ptr13 + 1);
                }
                else {
                    *ptr13 = 43;
                    ptr0 = (int*)(ptr13 + 1);
                }
                int v27 = (int)ptr14 >= 1000 ? 4: (int)ptr14 < 100 ? 2: 3;
                *(char*)((int)ptr0 + v27) = 0;
                result = (short*)((int)ptr0 + v27);
                short* ptr15 = (short*)((int)ptr0 + v27);
                if(v27) {
                    do {
                        ptr15 = (short*)((char*)ptr15 - 1);
                        *(char*)&ptr15[0] = (unsigned char)ptr14 % 10 + 48;
                        --v27;
                        result = (short*)((int)ptr14 / 10);
                        ptr14 = (short*)((int)ptr14 / 10);
                    }
                    while(v27);
                }
            }
            return result;
        }
    }
}

int sub_405684(int param0, unsigned int param1) {
    return !param1 ? param0 + 8: param0 + 12;
}

unsigned int sub_4056B4(int param0, unsigned int param1, unsigned int param2) {
    unsigned int result;
    int v0;
    int v1 = v0;
    unsigned int v2 = param2;
    int v3 = sub_404434(14);
    if((unsigned short)param0 == 71 || (unsigned short)param0 == 103) {
        while(1) {
            if(*(short*)(v2 - 2) != 48) {
                goto loc_4056F2;
            }
            else {
                v2 -= 2;
                if(v2 <= param1) {
                    return param1;
                }
            }
        }
    }
    else {
    loc_4056F2:
        if(*(short*)(v2 - 2) == *(short*)v3) {
            v2 -= 2;
        }
        result = v2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned short* sub_405700(float* param0, int param1, short* param2, short param3, unsigned short param4, unsigned int param5) {
    int* ptr0;
    int i;
    unsigned short* result;
    int v0;
    short v1;
    unsigned int v2;
    char v3;
    char v4;
    short v5;
    int v6;
    int v7 = v6;
    *(int*)&v3 = &loc_405710;
    int v8 = /*BAD_CALL!*/ sub_404434(14);
    short v9 = (short)((unsigned int)*(short*)v8 | ((unsigned int)(unsigned short)(v8 >>> 16) << 16));
    if(param1 > 40) {
        param1 = 40;
    }
    int v10 = param1;
    unsigned short v11 = (unsigned short)(param3 & 0xdf);
    if((unsigned short)(param3 & 0xdf) == 70) {
        v0 = 0 - v10;
        if(v0 > 0) {
            v0 = 0;
            param1 = 0;
        }
    }
    else {
        v0 = v10;
        if(v0 <= 0) {
            v0 = 1;
        }
        else if(v11 == 69) {
            ++v0;
            ++param1;
        }
    }
    *(unsigned short**)&v3 = &v1;
    unsigned int counter = sub_406680(param0, v0, &v2, *(short**)&v3, param5);
    short* ptr1 = param2;
    switch(counter) {
        case 32766: {
            *(short**)&v3 = ptr1;
            return sub_4023D4(*(unsigned short**)&v3, v2 ? "-NAN": "+NAN");
        }
        case 32767: {
            *(short**)&v3 = ptr1;
            return sub_4023D4(*(unsigned short**)&v3, v2 ? "-INF": "+INF");
        }
        default: {
            if(v2) {
                ptr1[0] = 45;
                ++ptr1;
            }
            if((v11 == 70 || (v11 == 71 && (int)counter >= -3 && (int)(!(param1 ? 0: 1) ? param1: 1) >= (int)counter)) && (int)counter <= 40) {
                if((int)counter <= 0) {
                    ptr1[0] = 48;
                    short* ptr2 = ptr1 + 1;
                    i = (unsigned int)v9 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                    *ptr2 = v9;
                    ptr1 = ptr2 + 1;
                    if(counter) {
                        do {
                            ptr1[0] = 48;
                            ++ptr1;
                            ++counter;
                        }
                        while(counter);
                    }
                }
                int v12 = 0;
                result = &v1;
                for(i = (unsigned int)result[0] | ((unsigned int)(unsigned short)(i >>> 16) << 16); result[0]; i = (unsigned int)result[0] | ((unsigned int)(unsigned short)(i >>> 16) << 16)) {
                    ptr1[0] = (short)i;
                    ++ptr1;
                    --counter;
                    if(!counter) {
                        i = (unsigned int)v9 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                        ptr1[0] = v9;
                        ++ptr1;
                        ++v12;
                    }
                    ++result;
                }
                unsigned int v13 = (unsigned int)(v12 + v10);
                if((int)v13 < param1) {
                    int v14 = param1 - v13;
                    *(int*)&v3 = 48;
                    result = (unsigned short*)sub_4021AC(ptr1, '0', v14);
                    ptr1 = &ptr1[v14];
                }
                else if((counter - 1) && !param4) {
                    *(short**)&v3 = param2;
                    result = (unsigned short*)sub_4056B4((unsigned int)param3 | ((unsigned int)(unsigned short)(i >>> 16) << 16), *(unsigned int*)&v3, (unsigned int)ptr1);
                    ptr1 = (short*)result;
                }
                if(ptr1 == param2) {
                    ptr1[0] = 48;
                    ++ptr1;
                }
                ptr1[0] = 0;
            }
            else {
                ptr1[0] = v1;
                unsigned int v15 = (unsigned int)(ptr1 + 1);
                short v16 = v5;
                short* ptr3 = &v4;
                if(v16) {
                    int v17 = (unsigned int)v9 | ((unsigned int)(unsigned short)(v17 >>> 16) << 16);
                    *(short*)v15 = v9;
                    v15 += 2;
                    if(v16) {
                        do {
                            *(short*)v15 = v16;
                            v15 += 2;
                            v16 = *ptr3;
                            ++ptr3;
                        }
                        while(v16);
                    }
                    if(!param4) {
                        *(short**)&v3 = param2;
                        v15 = sub_4056B4((unsigned int)param3 | ((unsigned int)(unsigned short)(v17 >>> 16) << 16), *(unsigned int*)&v3, v15);
                    }
                }
                else if(param4) {
                    *(short*)v15 = v9;
                    v15 += 2;
                }
                *(short*)v15 = (param3 & 0x20) | 0x45;
                short* ptr4 = (short*)(v15 + 2);
                unsigned short* ptr5 = (unsigned short*)(counter - 1);
                if((int)ptr5 < 0) {
                    ptr5 = (unsigned short*)(0 - (int)ptr5);
                    *ptr4 = 45;
                    ptr0 = (int*)(ptr4 + 1);
                }
                else {
                    *ptr4 = 43;
                    ptr0 = (int*)(ptr4 + 1);
                }
                int v18 = (int)ptr5 >= 1000 ? 4: (int)ptr5 < 100 ? 2: 3;
                *(short*)(v18 * 2 + (int)ptr0) = 0;
                result = (unsigned short*)(v18 * 2 + (int)ptr0);
                unsigned short* ptr6 = (unsigned short*)(v18 * 2 + (int)ptr0);
                if(v18) {
                    do {
                        --ptr6;
                        ptr6[0] = (unsigned short)((unsigned short)ptr5 % 10 + 48);
                        --v18;
                        result = (unsigned short*)((int)ptr5 / 10);
                        ptr5 = (unsigned short*)((int)ptr5 / 10);
                    }
                    while(v18);
                }
            }
            return result;
        }
    }
}

int sub_4059B8(int param0, unsigned int param1) {
    return !param1 ? param0 + 8: param0 + 12;
}

int sub_4059E8(int* param0, int param1, int param2, int param3, unsigned int param4, int* param5, int* param6) {
    unsigned int v0;
    char v1;
    unsigned int v2;
    __SyntheticTypeUnknown v3;
    int v4;
    int v5;
    long long v6;
    int v7 = v4;
    unsigned int v8 = 0x8000;
    unsigned int v9 = 19;
    unsigned char v10 = 0;
    unsigned char v11 = 1;
    unsigned char v12 = 0;
    unsigned char v13 = 0;
    unsigned char v14 = 0;
    int v15 = 0;
    unsigned int v16 = 0xfffffffe;
    int v17 = 1;
    int v18 = 0;
    int v19 = 0;
    unsigned short v20 = 0;
    long long* ptr0 = &v18;
    int v21 = sub_404434(14);
    v21 = (unsigned int)*(char*)v21 | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
    char v22 = (unsigned char)v21;
    do {
        ++v15;
        int v23 = param3;
        unsigned int v24 = (unsigned int)param1(v23);
        v2 = v24;
        v5 = (int)(v24 + 1);
        char v25 = v5 ? 0: 1;
        if(v25) {
            v17 = -1;
        loc_405D20:
            if(param4 < 0x80000000) {
                param2((int)v2, param3);
                --v15;
            }
            v18 = 0;
            v19 = 0;
            v20 = 0;
        loc_405CE1:
            if(v10) {
                char v26 = v1 - 1;
                v3[v26] = *(long long*)&v18;
                v3[v37] = fchs(v3[v26]);
                *(long long*)&v18 = v3[v26];
            }
        }
        else if((unsigned char)v2 & 0x80) {
            break;
        }
        else {
            v5 = sub_406AB0(v2);
        }
        goto loc_405CF2;
    }
    while(v5);
    --param4;
    if(param4 >= 0x80000000) {
    loc_405B8A:
        v2 = 101;
    loc_405B92:
        if(v16 == -2) {
            v17 = 0;
            goto loc_405D20;
        }
        else {
            if(v8 == 0x8000) {
                v8 = v16;
            }
            unsigned int v27 = 0;
            if(v2 == 101 || v2 == 69) {
                unsigned int v28 = 1;
            loc_405BB7:
                --param4;
                while(param4 < 0x80000000) {
                    ++v15;
                    v5 = param1(param3);
                    v2 = (unsigned int)v5;
                    if(v28) {
                        v5 = 0;
                        v28 = 0;
                        if(v2 == 43) {
                            goto loc_405BB7;
                        }
                        else if(v2 == 45) {
                            v13 = 1;
                            goto loc_405BB7;
                        }
                    }
                    if((int)v2 < 48 || (int)v2 > 57) {
                        goto loc_405C0F;
                    }
                    else {
                        unsigned int v29 = (unsigned int)(v27 * 10 + v2 - 48);
                        v27 = (unsigned int)(v27 * 10 + v2 - 48);
                        if((int)v29 <= 0x1344) {
                            goto loc_405BB7;
                        }
                        else {
                            v14 = 1;
                            --param4;
                        }
                    }
                }
            }
            else {
            loc_405C0F:
                v5 = param2((int)v2, param3);
                --v15;
            }
            if(v13) {
                v27 = (unsigned int)(0 - v27);
                v14 = (unsigned char)(0 - v14);
            }
            if(v16 >= 0x80000000) {
                v18 = 0;
                v19 = 0;
                v20 = 0;
            }
            else if(v14) {
                if(v14 == 1) {
                    v5 = (unsigned int)0xffff | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
                    ptr0[0] = (unsigned long long)(unsigned short)v5 | ((unsigned long long)(unsigned short)v5 << 16) | ((unsigned long long)(unsigned short)v5 << 32) | ((unsigned long long)0xffff << 48);
                    *(short*)&ptr0[1] = 0x7ffe;
                }
                else {
                    v18 = 0;
                    v19 = 0;
                    v20 = 0;
                }
                v17 = 2;
            }
            else {
                unsigned int v30 = v8 - ((int)v16 <= (int)v9 ? v16: v9) + v27;
                sub_405028(&v18);
                *(long long*)&v18 = v6;
                v1 = 0;
                if(v30) {
                    sub_404DFC((int)v30 <= 0 ? (unsigned int)(0 - v30): v30);
                    long long v31 = v6;
                    *(long long*)&v18 = v30 >= 0x80000000 ? *(long long*)&v18 / v31: *(long long*)&v18 * v31;
                    v1 = 0;
                }
            }
            goto loc_405CE1;
        }
    }
    else if(v2 == 43) {
        v12 = 1;
        goto loc_405A93;
    }
    else {
        if(v2 == 45) {
            v0 = (unsigned int)1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            v12 = 1;
            v10 = (unsigned char)v0;
        loc_405A93:
            --param4;
            if(param4 >= 0x80000000) {
                goto loc_405B8A;
            }
            else {
                ++v15;
                int v32 = param3;
                v2 = (unsigned int)param1(v32);
            }
        }
        if(v11 == 1 && v12) {
            if(v2 == 73) {
                goto loc_405D3E;
            }
            else if(v2 == 78) {
                ++v15;
                v2 = (unsigned int)param1(param3);
                --param4;
                if(param4 >= 0x80000000 || v2 != 65) {
                    v17 = 0;
                    goto loc_405D20;
                }
                else {
                    ++v15;
                    v2 = (unsigned int)param1(param3);
                    --param4;
                    if(param4 >= 0x80000000 || v2 != 78) {
                        v17 = 0;
                        goto loc_405D20;
                    }
                    else if(v10) {
                        v18 = *(int*)&gvar_40B93A;
                        v19 = gvar_40B93E;
                        v20 = gvar_40B942;
                    }
                    else {
                        v18 = *(int*)&gvar_40B930;
                        v19 = gvar_40B934;
                        v20 = gvar_40B938;
                    }
                }
                goto loc_405CF2;
            }
        }
        v11 = 0;
        v5 = (int)v22;
        if(v5 == v2) {
            if(v8 != 0x8000) {
                goto loc_405B92;
            }
            else {
                v0 = (int)v16 > 0 ? v16: 0;
                v8 = (int)v16 > 0 ? v16: 0;
                goto loc_405A93;
            }
        }
        else if((int)v2 < 48 || (int)v2 > 57) {
            goto loc_405B92;
        }
        else {
            int v33 = (int)(v2 - 48);
            ++v16;
            if((int)v16 <= 0) {
                v5 = (int)ptr0;
                char v34 = v33 ? 0: 1;
                *(short*)v5 = (unsigned short)v33;
                if(!v34) {
                    v16 = 1;
                }
                else {
                    v16 = 0xffffffff;
                    if(v8 != 0x8000) {
                        --v8;
                    }
                }
                goto loc_405A93;
            }
            else if((int)v16 <= 9) {
                v5 = v18 * 10 + v33;
                v18 = v18 * 10 + v33;
                goto loc_405A93;
            }
            else if((int)v16 > (int)v9) {
                goto loc_405A93;
            }
            else {
                int v35 = v18;
                int v36 = v19;
                v5 = sub_405388(&v35, v33);
                if(v5) {
                    v0 = v16 - 1;
                    v9 = v16 - 1;
                    goto loc_405A93;
                }
                else {
                    v18 = v35;
                    v5 = v36;
                    v19 = v36;
                    goto loc_405A93;
                loc_405D3E:
                    ++v15;
                    v2 = (unsigned int)param1(param3);
                    --param4;
                    if(param4 >= 0x80000000 || v2 != 78) {
                        v17 = 0;
                        goto loc_405D20;
                    }
                    else {
                        ++v15;
                        v2 = (unsigned int)param1(param3);
                        --param4;
                        if(param4 >= 0x80000000 || v2 != 70) {
                            v17 = 0;
                            goto loc_405D20;
                        }
                    }
                }
            }
        }
    }
    if(v10) {
        v18 = gvar_40B926;
        v19 = gvar_40B92A;
        v20 = gvar_40B92E;
    }
    else {
        v18 = gvar_40B91C;
        v19 = gvar_40B920;
        v20 = gvar_40B924;
    }
loc_405CF2:
    *param5 = *param5 + v15;
    *param6 = v17;
    int* ptr1 = param0;
    *ptr1 = v18;
    int result = v19;
    *(ptr1 + 1) = v19;
    result = (unsigned int)v20 | ((unsigned int)(unsigned short)(result >>> 16) << 16);
    *(unsigned short*)(ptr1 + 2) = v20;
    return result;
}

char sub_405E34(int* param0, long long* param1, int param2) {
    int v0;
    int v1;
    short v2;
    int v3;
    int v4;
    int v5;
    __SyntheticTypeUnknownF v6;
    short v7;
    int v8;
    int v9 = v5;
    char result = (unsigned char)param2;
    long long* ptr0 = param1;
    int* ptr1 = param0;
    if((result & 0x4)) {
        v1 = gvar_40B85C;
        v0 = gvar_40B858;
        *(int*)&v2 = (unsigned int)*(short*)&ptr1[2] | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
        int v10 = /*BAD_CALL!*/ sub_405144(1, ptr1[0], ptr1[1], v2, v0, v1);
        result = (unsigned char)v10;
        *ptr0 = v6;
    }
    else if((result & 0x8)) {
        *(int*)ptr0 = ptr1[0];
        *(int*)((char*)ptr0 + 4) = ptr1[1];
        *(short*)(ptr0 + 1) = *(short*)&ptr1[2];
    }
    else {
        v6 = *(void*)&gvar_40B91C;
        *(long long*)&v3 = v6;
        v1 = v4;
        v0 = v3;
        *(int*)&v2 = (unsigned int)*(short*)&ptr1[2] | ((unsigned int)v7 << 16);
        int v11 = /*BAD_CALL!*/ sub_405144(0, ptr1[0], ptr1[1], v2, v3, v4);
        result = (unsigned char)v11;
        *(int*)ptr0 = v6;
    }
    return result;
}

int sub_405ECC(int* param0, int param1, int param2, int param3, unsigned int param4, int* param5, int* param6) {
    unsigned int v0;
    char v1;
    int v2;
    short v3;
    __SyntheticTypeUnknown v4;
    int v5;
    int v6;
    __SyntheticTypeUnknownF v7;
    int v8 = v5;
    unsigned int v9 = 0x8000;
    unsigned int v10 = 19;
    unsigned char v11 = 0;
    unsigned char v12 = 1;
    unsigned char v13 = 0;
    unsigned char v14 = 0;
    unsigned char v15 = 0;
    int v16 = 0;
    unsigned int v17 = 0xfffffffe;
    int v18 = 1;
    int v19 = 0;
    int v20 = 0;
    unsigned short v21 = 0;
    int v22 = &v19;
    *(int*)&v3 = 14;
    int v23 = sub_404434(*(unsigned int*)&v3);
    v23 = (unsigned int)*(short*)v23 | ((unsigned int)(unsigned short)(v23 >>> 16) << 16);
    short v24 = (unsigned short)v23;
    do {
        ++v16;
        *(int*)&v3 = param3;
        int v25 = param1(*(int*)&v3);
        v2 = v25;
        if(v25 + 1) {
            *(int*)&v3 = v2;
            v6 = sub_404650(v3);
        }
        else {
            v18 = -1;
        loc_406201:
            if(param4 < 0x80000000) {
                *(int*)&v3 = param3;
                param2(v2, *(int*)&v3);
                --v16;
            }
            v19 = 0;
            v20 = 0;
            v21 = 0;
        loc_4061C2:
            if(v11) {
                char v26 = v1 - 1;
                v4[v26] = *(void*)&v19;
                v4[v36] = fchs(v4[v26]);
                *(void*)&v19 = v4[v26];
            }
        }
        goto loc_4061D3;
    }
    while(v6);
    --param4;
    if(param4 >= 0x80000000) {
    loc_40606B:
        v2 = 101;
    loc_406073:
        if(v17 == -2) {
            v18 = 0;
            goto loc_406201;
        }
        else {
            if(v9 == 0x8000) {
                v9 = v17;
            }
            unsigned int v27 = 0;
            if(v2 == 101 || v2 == 69) {
                unsigned int v28 = 1;
            loc_406098:
                --param4;
                while(param4 < 0x80000000) {
                    ++v16;
                    *(int*)&v3 = param3;
                    v6 = param1(*(int*)&v3);
                    v2 = v6;
                    if(v28) {
                        v6 = 0;
                        v28 = 0;
                        if(v2 == 43) {
                            goto loc_406098;
                        }
                        else if(v2 == 45) {
                            v14 = 1;
                            goto loc_406098;
                        }
                    }
                    if(v2 < 48 || v2 > 57) {
                        goto loc_4060EE;
                    }
                    else {
                        unsigned int v29 = (unsigned int)(v27 * 10 + v2 - 48);
                        v27 = (unsigned int)(v27 * 10 + v2 - 48);
                        if((int)v29 <= 0x1344) {
                            goto loc_406098;
                        }
                        else {
                            v15 = 1;
                            --param4;
                        }
                    }
                }
            }
            else {
            loc_4060EE:
                *(int*)&v3 = param3;
                v6 = param2(v2, *(int*)&v3);
                --v16;
            }
            if(v14) {
                v27 = (unsigned int)(0 - v27);
                v15 = (unsigned char)(0 - v15);
            }
            if(v17 >= 0x80000000) {
                v19 = 0;
                v20 = 0;
                v21 = 0;
            }
            else if(v15) {
                if(v15 == 1) {
                    v6 = (unsigned int)0xffff | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
                    *(short*)(v22 + 6) = 0xffff;
                    *(short*)(v22 + 4) = (unsigned short)v6;
                    *(short*)(v22 + 2) = (unsigned short)v6;
                    *(short*)v22 = (unsigned short)v6;
                    *(short*)(v22 + 8) = 0x7ffe;
                }
                else {
                    v19 = 0;
                    v20 = 0;
                    v21 = 0;
                }
                v18 = 2;
            }
            else {
                *(int*)&v3 = &v19;
                unsigned int v30 = v9 - ((int)v17 <= (int)v10 ? v17: v10) + v27;
                sub_405028(*(long long**)&v3);
                *(void*)&v19 = v7;
                v1 = 0;
                if(v30) {
                    *(unsigned int*)&v3 = (int)v30 <= 0 ? (unsigned int)(0 - v30): v30;
                    sub_404DFC(*(unsigned int*)&v3);
                    __SyntheticTypeUnknownF v31 = v7;
                    *(void*)&v19 = v30 >= 0x80000000 ? *(void*)&v19 / v31: *(void*)&v19 * v31;
                    v1 = 0;
                }
            }
            goto loc_4061C2;
        }
    }
    else if(v2 == 43) {
        v13 = 1;
        goto loc_405F74;
    }
    else {
        if(v2 == 45) {
            v0 = (unsigned int)1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            v13 = 1;
            v11 = (unsigned char)v0;
        loc_405F74:
            --param4;
            if(param4 >= 0x80000000) {
                goto loc_40606B;
            }
            else {
                ++v16;
                *(int*)&v3 = param3;
                v2 = param1(*(int*)&v3);
            }
        }
        if(v12 == 1 && v13) {
            if(v2 == 73) {
                goto loc_40621F;
            }
            else if(v2 == 78) {
                ++v16;
                *(int*)&v3 = param3;
                v2 = param1(*(int*)&v3);
                --param4;
                if(param4 >= 0x80000000 || v2 != 65) {
                    v18 = 0;
                    goto loc_406201;
                }
                else {
                    ++v16;
                    *(int*)&v3 = param3;
                    v2 = param1(*(int*)&v3);
                    --param4;
                    if(param4 >= 0x80000000 || v2 != 78) {
                        v18 = 0;
                        goto loc_406201;
                    }
                    else if(v11) {
                        v19 = *(int*)&gvar_40B962;
                        v20 = gvar_40B966;
                        v21 = gvar_40B96A;
                    }
                    else {
                        v19 = *(int*)&gvar_40B958;
                        v20 = gvar_40B95C;
                        v21 = gvar_40B960;
                    }
                }
                goto loc_4061D3;
            }
        }
        v12 = 0;
        v6 = (int)v24;
        if(v6 == v2) {
            if(v9 != 0x8000) {
                goto loc_406073;
            }
            else {
                v0 = (int)v17 > 0 ? v17: 0;
                v9 = (int)v17 > 0 ? v17: 0;
                goto loc_405F74;
            }
        }
        else if(v2 < 48 || v2 > 57) {
            goto loc_406073;
        }
        else {
            int v32 = v2 - 48;
            ++v17;
            if((int)v17 <= 0) {
                v6 = v22;
                char v33 = v32 ? 0: 1;
                *(short*)v6 = (unsigned short)v32;
                if(!v33) {
                    v17 = 1;
                }
                else {
                    v17 = 0xffffffff;
                    if(v9 != 0x8000) {
                        --v9;
                    }
                }
                goto loc_405F74;
            }
            else if((int)v17 <= 9) {
                v6 = v19 * 10 + v32;
                v19 = v19 * 10 + v32;
                goto loc_405F74;
            }
            else if((int)v17 > (int)v10) {
                goto loc_405F74;
            }
            else {
                int v34 = v19;
                int v35 = v20;
                *(int*)&v3 = v32;
                v6 = sub_405388(&v34, *(int*)&v3);
                if(v6) {
                    v0 = v17 - 1;
                    v10 = v17 - 1;
                    goto loc_405F74;
                }
                else {
                    v19 = v34;
                    v6 = v35;
                    v20 = v35;
                    goto loc_405F74;
                loc_40621F:
                    ++v16;
                    *(int*)&v3 = param3;
                    v2 = param1(*(int*)&v3);
                    --param4;
                    if(param4 >= 0x80000000 || v2 != 78) {
                        v18 = 0;
                        goto loc_406201;
                    }
                    else {
                        ++v16;
                        *(int*)&v3 = param3;
                        v2 = param1(*(int*)&v3);
                        --param4;
                        if(param4 >= 0x80000000 || v2 != 70) {
                            v18 = 0;
                            goto loc_406201;
                        }
                    }
                }
            }
        }
    }
    if(v11) {
        v19 = gvar_40B94E;
        v20 = gvar_40B952;
        v21 = gvar_40B956;
    }
    else {
        v19 = gvar_40B944;
        v20 = gvar_40B948;
        v21 = gvar_40B94C;
    }
loc_4061D3:
    *param5 = *param5 + v16;
    *param6 = v18;
    int* ptr0 = param0;
    *ptr0 = v19;
    int result = v20;
    *(ptr0 + 1) = v20;
    result = (unsigned int)v21 | ((unsigned int)(unsigned short)(result >>> 16) << 16);
    *(unsigned short*)(ptr0 + 2) = v21;
    return result;
}

char sub_406314(int* param0, long long* param1, int param2) {
    int v0;
    int v1;
    short v2;
    int v3;
    int v4;
    int v5;
    __SyntheticTypeUnknownF v6;
    short v7;
    int v8;
    int v9 = v5;
    char result = (unsigned char)param2;
    long long* ptr0 = param1;
    int* ptr1 = param0;
    if((result & 0x4)) {
        v1 = gvar_40B85C;
        v0 = gvar_40B858;
        *(int*)&v2 = (unsigned int)*(short*)&ptr1[2] | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
        int v10 = /*BAD_CALL!*/ sub_405144(1, ptr1[0], ptr1[1], v2, v0, v1);
        result = (unsigned char)v10;
        *ptr0 = v6;
    }
    else if((result & 0x8)) {
        *(int*)ptr0 = ptr1[0];
        *(int*)((char*)ptr0 + 4) = ptr1[1];
        *(short*)(ptr0 + 1) = *(short*)&ptr1[2];
    }
    else {
        v6 = *(void*)&gvar_40B944;
        *(long long*)&v3 = v6;
        v1 = v4;
        v0 = v3;
        *(int*)&v2 = (unsigned int)*(short*)&ptr1[2] | ((unsigned int)v7 << 16);
        int v11 = /*BAD_CALL!*/ sub_405144(0, ptr1[0], ptr1[1], v2, v3, v4);
        result = (unsigned char)v11;
        *(int*)ptr0 = v6;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4063AC(float* param0, int param1, int* param2, short* param3, unsigned int param4) {
    int v0;
    __SyntheticTypeUnknownF v1;
    unsigned int result;
    short v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    char v5;
    int v6;
    int v7 = v6;
    short v8 = 10;
    unsigned int v9 = param4 - 2;
    if(v9) {
        unsigned int v10 = v9 - 4;
        char v11 = v10 ? 0: 1;
        if(v11) {
            v4 = *(double*)param0;
            *(void*)&v3 = *(double*)param0;
        }
        else if(v10 == 2) {
            v3 = *param0;
            int v12 = *(int*)(param0 + 1);
            v2 = *(short*)(param0 + 2);
        }
    }
    else {
        v4 = *param0;
        *(void*)&v3 = *param0;
    }
    void* ptr0 = &v3;
    v6 = (unsigned int)v2 | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
    v2 &= 0x7fff;
    *param2 = ((unsigned int)((unsigned char)(v6 >>> 8) & 0x80 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)&v3 >>> 8) & 0xffffff) << 8)) & 0x1;
    *(int*)&v5 = &loc_40642A;
    int v13 = /*BAD_CALL!*/ sub_40507C(&v3);
    unsigned short v14 = (unsigned short)v13;
    v14 &= 0x4700;
    switch(v14) {
        case 256: {
            return 0x7ffe;
        }
        case 1280: {
            return 0x7fff;
        }
        case 16384: {
        loc_406435:
            int v15 = param1;
            if(v15 <= 0) {
                v15 = 1 - v15;
            }
            if(v15 > 40) {
                v15 = 40;
            }
            *(int*)&v5 = 48;
            sub_4021AC(param3, '0', v15);
            *(char*)(v15 + (int)param3) = 0;
            return 1;
        }
        default: {
            int v16 = (((unsigned int)(unsigned short)v6 & 0x7fff) - 0x3fff) * 19728 + (unsigned int)((unsigned short)(*(char*)((int)ptr0 + 7) * 2) * 77);
            unsigned int v17 = (unsigned int)(v16 >> 16);
            if((unsigned short)v16) {
                ++v17;
            }
            unsigned int counter = (unsigned int)param1;
            if((int)counter <= 0) {
                counter = v17 - param1;
                if(counter >= 0x80000000) {
                    goto loc_406435;
                }
            }
            if((int)counter > 19) {
                counter = 19;
            }
            unsigned int v18 = counter - v17;
            if(v18) {
                do {
                    unsigned int v19 = v18 >= 0x80000000 ? (unsigned int)(0 - v18): v18;
                    if((int)v19 > 0x1344) {
                        v19 = 0x1344;
                    }
                    *(int*)&v5 = &loc_40651B;
                    /*BAD_CALL!*/ sub_404DFC(v19);
                    v1 = v4;
                    if(v18 >= 0x80000000) {
                        v4 = *(void*)&v3 / v1;
                        *(void*)&v3 = *(void*)&v3 / v1;
                        v18 += v19;
                    }
                    else {
                        v4 = v1 * *(void*)&v3;
                        *(void*)&v3 = v1 * *(void*)&v3;
                        v18 -= v19;
                    }
                }
                while(v18);
            }
            *(int*)&v5 = &loc_40654C;
            int v20 = /*BAD_CALL!*/ sub_404DFC(counter);
            short v21 = (unsigned short)v20;
            v1 = v4;
            v4 = *(void*)&v3;
            fcompp(v1, v4);
            fnstsw(v21);
            if(((v21 >>> 8) & 0x1)) {
                ++v17;
                ++counter;
                if((int)counter <= 19 && param1 > 0) {
                    v0 = (int)v8;
                    *(void*)&v3 = *(void*)&v3 / (double)v0;
                    --counter;
                }
            }
            else {
                *(int*)&v5 = &loc_40658C;
                int v22 = /*BAD_CALL!*/ sub_404DFC(counter - 1);
                short v23 = (unsigned short)v22;
                v1 = v4;
                fcompp(v1, *(void*)&v3);
                fnstsw(v23);
                if(!((v23 >>> 8) & 0x1) && !((v23 >>> 14) & 0x1)) {
                    --v17;
                    --counter;
                    if(param1 > 0) {
                        v0 = (int)v8;
                        *(void*)&v3 = (double)v0 * *(void*)&v3;
                        ++counter;
                    }
                }
            }
            if(counter >= 0x80000000) {
                goto loc_406435;
            }
            else {
                *(void**)&v5 = &v3;
                sub_405058(*(long long**)&v5, &v3);
                short* ptr1 = (short*)(counter + (int)param3);
                int v24 = 0;
                short* ptr2 = ptr1;
                *(char*)&ptr1[0] = 0;
                char* ptr3 = (char*)((char*)ptr1 - 1);
                if(!counter) {
                    v24 = (unsigned int)*(char*)ptr0 ^ 0x1;
                    if(v24) {
                        goto loc_406435;
                    }
                }
                else {
                    do {
                        *(int*)&v5 = &loc_40660A;
                        int v25 = /*BAD_CALL!*/ sub_405360((int*)&v3);
                        v24 |= (int)(unsigned char)v25;
                        *ptr3 = (unsigned char)v25 + 48;
                        --ptr3;
                        --counter;
                    }
                    while(counter);
                }
                if(!v24) {
                    ++v17;
                    if(param1 <= 0) {
                        *(char*)&ptr2[0] = 48;
                    }
                    ptr2 = (short*)((char*)ptr2 + 1);
                    *(ptr3 + 1) = 49;
                }
                int v26 = param1;
                if(v26 <= 0) {
                    v26 = (int)(v17 - param1);
                }
                if(v26 > 40) {
                    v26 = 40;
                }
                *(char*)&ptr2[0] = 0;
                int v27 = v26 - (int)(short*)((int)ptr2 - (int)param3);
                if(v27 > 0) {
                    *(int*)&v5 = 48;
                    sub_4021AC(ptr2, '0', v27);
                    *(char*)(v27 + (int)ptr2) = 0;
                }
                result = v17;
            }
            return result;
        }
    }
}

unsigned int sub_406680(float* param0, int param1, int* param2, short* param3, unsigned int param4) {
    int v0;
    __SyntheticTypeUnknownF v1;
    unsigned int result;
    short v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    short v5;
    int v6;
    int v7 = v6;
    short v8 = 10;
    unsigned int v9 = param4 - 2;
    if(v9) {
        unsigned int v10 = v9 - 4;
        char v11 = v10 ? 0: 1;
        if(v11) {
            v4 = *(double*)param0;
            *(void*)&v3 = *(double*)param0;
        }
        else if(v10 == 2) {
            v3 = *param0;
            int v12 = *(int*)(param0 + 1);
            v2 = *(short*)(param0 + 2);
        }
    }
    else {
        v4 = *param0;
        *(void*)&v3 = *param0;
    }
    void* ptr0 = &v3;
    v6 = (unsigned int)v2 | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
    v2 &= 0x7fff;
    *param2 = ((unsigned int)((unsigned char)(v6 >>> 8) & 0x80 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)&v3 >>> 8) & 0xffffff) << 8)) & 0x1;
    *(int*)&v5 = &loc_4066FE;
    int v13 = /*BAD_CALL!*/ sub_40507C(&v3);
    unsigned short v14 = (unsigned short)v13;
    v14 &= 0x4700;
    switch(v14) {
        case 256: {
            return 0x7ffe;
        }
        case 1280: {
            return 0x7fff;
        }
        case 16384: {
        loc_406709:
            int v15 = param1;
            if(v15 <= 0) {
                v15 = 1 - v15;
            }
            if(v15 > 40) {
                v15 = 40;
            }
            *(int*)&v5 = 48;
            sub_402238(param3, 48, v15);
            result = 1;
            param3[v15] = 0;
            return result;
        }
        default: {
            int v16 = (((unsigned int)(unsigned short)v6 & 0x7fff) - 0x3fff) * 19728 + (unsigned int)((unsigned short)(*(char*)((int)ptr0 + 7) * 2) * 77);
            unsigned int v17 = (unsigned int)(v16 >> 16);
            if((unsigned short)v16) {
                ++v17;
            }
            unsigned int counter = (unsigned int)param1;
            if((int)counter <= 0) {
                counter = v17 - param1;
                if(counter >= 0x80000000) {
                    goto loc_406709;
                }
            }
            if((int)counter > 19) {
                counter = 19;
            }
            unsigned int v18 = counter - v17;
            if(v18) {
                do {
                    unsigned int v19 = v18 >= 0x80000000 ? (unsigned int)(0 - v18): v18;
                    if((int)v19 > 0x1344) {
                        v19 = 0x1344;
                    }
                    *(int*)&v5 = &loc_4067F1;
                    /*BAD_CALL!*/ sub_404DFC(v19);
                    v1 = v4;
                    if(v18 >= 0x80000000) {
                        v4 = *(void*)&v3 / v1;
                        *(void*)&v3 = *(void*)&v3 / v1;
                        v18 += v19;
                    }
                    else {
                        v4 = v1 * *(void*)&v3;
                        *(void*)&v3 = v1 * *(void*)&v3;
                        v18 -= v19;
                    }
                }
                while(v18);
            }
            *(int*)&v5 = &loc_406822;
            int v20 = /*BAD_CALL!*/ sub_404DFC(counter);
            short v21 = (unsigned short)v20;
            v1 = v4;
            v4 = *(void*)&v3;
            fcompp(v1, v4);
            fnstsw(v21);
            if(((v21 >>> 8) & 0x1)) {
                ++v17;
                ++counter;
                if((int)counter <= 19 && param1 > 0) {
                    v0 = (int)v8;
                    *(void*)&v3 = *(void*)&v3 / (double)v0;
                    --counter;
                }
            }
            else {
                *(int*)&v5 = &loc_406862;
                int v22 = /*BAD_CALL!*/ sub_404DFC(counter - 1);
                short v23 = (unsigned short)v22;
                v1 = v4;
                fcompp(v1, *(void*)&v3);
                fnstsw(v23);
                if(!((v23 >>> 8) & 0x1) && !((v23 >>> 14) & 0x1)) {
                    --v17;
                    --counter;
                    if(param1 > 0) {
                        v0 = (int)v8;
                        *(void*)&v3 = (double)v0 * *(void*)&v3;
                        ++counter;
                    }
                }
            }
            if(counter >= 0x80000000) {
                goto loc_406709;
            }
            else {
                *(void**)&v5 = &v3;
                sub_405058(*(long long**)&v5, &v3);
                int v24 = 0;
                short* ptr1 = &param3[counter];
                short* ptr2 = &param3[counter];
                ptr1[0] = 0;
                short* ptr3 = ptr1 - 1;
                if(!counter) {
                    v24 = (unsigned int)*(char*)ptr0 ^ 0x1;
                    if(v24) {
                        goto loc_406709;
                    }
                }
                else {
                    do {
                        *(int*)&v5 = &loc_4068E6;
                        int v25 = /*BAD_CALL!*/ sub_405360((int*)&v3);
                        char v26 = (unsigned char)v25;
                        v24 |= (int)v26;
                        *ptr3 = (short)v26 + 48;
                        --ptr3;
                        --counter;
                    }
                    while(counter);
                }
                if(!v24) {
                    ++v17;
                    if(param1 <= 0) {
                        ptr2[0] = 48;
                    }
                    ++ptr2;
                    *(ptr3 + 1) = 49;
                }
                int v27 = param1;
                if(v27 <= 0) {
                    v27 = (int)(v17 - param1);
                }
                if(v27 > 40) {
                    v27 = 40;
                }
                ptr2[0] = 0;
                int* ptr4 = (int*)((int)ptr2 - (int)param3);
                short* ptr5 = (short*)((int)ptr4 >> 1);
                char v28 = (int*)((int)ptr4 & 0x1);
                if((int)ptr5 < 0) {
                    ptr5 = (short*)((unsigned int)v28 + (int)ptr5);
                }
                int v29 = v27 - (int)ptr5;
                if(v29 > 0) {
                    *(int*)&v5 = 48;
                    sub_402238(ptr2, 48, v29);
                    ptr2[v29] = 0;
                }
                result = v17;
            }
            return result;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406974(UINT param0) {
    int result;
    unsigned int v0;
    char v1;
    unsigned int v2;
    unsigned int v3 = v2;
    UINT CodePage = param0;
    switch(CodePage) {
        case -4: {
            CodePage = *(UINT*)gvar_40B59C;
            break;
        }
        case -3: {
            CodePage = →KERNEL32.DLL!GetACP();
            break;
        }
        case -2: {
            CodePage = →KERNEL32.DLL!GetOEMCP();
            break;
        }
    }
    if(CodePage) {
        UINT v4 = (UINT)→KERNEL32.DLL!GetCPInfo(CodePage, &v0);
        if(v4) {
            goto loc_4069CC;
        }
        else {
            sub_406CDC("Error: system code page access failure; MBCS table not initialized");
            result = -1;
        }
    }
    else {
    loc_4069CC:
        unsigned int i = 0;
        char* counter = (char*)&gvar_40CA54;
        do {
            *counter = 0;
            ++i;
            ++counter;
        }
        while((int)i < 0x101);
        if(CodePage && v0 > 1) {
            void* ptr0 = &v1;
            for(i = (unsigned int)*(char*)ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); (*(char*)ptr0 && *(char*)((int)ptr0 + 1)); i = (unsigned int)*(char*)ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
                i = (unsigned int)(unsigned char)i;
                for(char* j = (char*)(i + 4246101); (int)(unsigned int)*(char*)((int)ptr0 + 1) >= (int)i; ++j) {
                    *j = 4;
                    ++i;
                }
                ptr0 = (void*)((int)ptr0 + 2);
            }
            unsigned int v5 = 1;
            counter = (char*)&gvar_40CA56;
            do {
                *counter = *counter | 0x8;
                ++v5;
                ++counter;
            }
            while((int)v5 < 0xff);
            if(CodePage == 932) {
                unsigned int v6 = (unsigned int)gvar_40B96C;
                for(char* k = (char*)(v6 + 4246101); (int)(void*)gvar_40B96D >= (int)v6; ++k) {
                    *k = *k | 0x1;
                    ++v6;
                }
                v5 = (unsigned int)gvar_40B96E;
                for(counter = (char*)(v5 + 4246101); (int)(void*)gvar_40B96F >= (int)v5; ++counter) {
                    *counter = *counter | 0x2;
                    ++v5;
                }
            }
            gvar_40CB58 = CodePage;
        }
        else {
            gvar_40CB58 = 0;
        }
        result = 0;
    }
    return result;
}

int sub_406AB0(unsigned int param0) {
    if(param0 > 0xff) {
        return 0;
    }
    return sub_40454C(param0);
}

HANDLE sub_406C1C(LPCSTR lpFileName, int* lpBuffer1) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    HANDLE hFile = →KERNEL32.DLL!CreateFileA(lpFileName, 0xc0000000, 0, NULL, 2, 128, NULL);
    if(hFile) {
        int* lpBuffer = (int*)sub_406BCC();
        LPOVERLAPPED lpOverlapped = NULL;
        LPDWORD lpNumberOfBytesWritten = &v2;
        int* ptr0 = sub_402250(lpBuffer);
        →KERNEL32.DLL!WriteFile(hFile, lpBuffer, (DWORD)ptr0, lpNumberOfBytesWritten, lpOverlapped);
        lpOverlapped = NULL;
        lpNumberOfBytesWritten = &v2;
        int* ptr1 = sub_402250(lpBuffer1);
        →KERNEL32.DLL!WriteFile(hFile, lpBuffer1, (DWORD)ptr1, lpNumberOfBytesWritten, lpOverlapped);
        hFile = (HANDLE)→KERNEL32.DLL!CloseHandle(hFile);
    }
    return hFile;
}

int sub_406C84(int param0, int* param1) {
    *param1 = 1;
    return 0;
}

int sub_406CDC(LPCSTR lpText) {
    int result;
    LPCSTR lpCaption;
    char v0;
    char v1;
    int v2;
    LPOVERLAPPED v3;
    char v4 = gvar_40BA04 ? 0: 1;
    int v5 = v2;
    if(v4 && !gvar_40BA00) {
        if(gvar_40BBF4) {
            →KERNEL32.DLL!GetModuleFileNameA(NULL, &v0, 128);
            int v6 = sub_406ACC((int)&v0, 92);
            int v7 = v6;
            if(!v6) {
                int v8 = sub_406ACC((int)&v0, 58);
                v7 = v8;
                if(v8) {
                    goto loc_406D56;
                }
                else {
                    lpCaption = &v0;
                }
            }
            else {
            loc_406D56:
                lpCaption = (LPCSTR)(v7 + 1);
            }
            int v9 = sub_406C98((int)v3);
            result = →USER32.DLL!MessageBoxA(NULL, lpText, lpCaption, (UINT)(v9 | 0x10010));
        }
        else {
            HANDLE hFile = →KERNEL32.DLL!GetStdHandle(0xfffffff4);
            →KERNEL32.DLL!WriteFile(hFile, (LPCVOID)&gvar_40BA08, 2, &v1, NULL);
            LPOVERLAPPED lpOverlapped = NULL;
            LPDWORD lpNumberOfBytesWritten = &v1;
            int* ptr0 = sub_402250((int*)lpText);
            →KERNEL32.DLL!WriteFile(hFile, lpText, (DWORD)ptr0, lpNumberOfBytesWritten, lpOverlapped);
            result = →KERNEL32.DLL!WriteFile(hFile, (LPCVOID)&gvar_40BA0B, 2, &v1, NULL);
        }
    }
    else if(!gvar_40BA00) {
    loc_406DD0:
        result = gvar_40BA04;
        if(result && gvar_40BA04 != -1 && *(char*)result) {
            result = (int)sub_406C1C((LPCSTR)result, (int*)lpText);
        }
    }
    else if(gvar_40BA00 != -1) {
        gvar_40BA00((int)lpText);
        goto loc_406DD0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406DF8(int param0) {
    return sub_406CDC(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406E08(int param0) {
    sub_406CDC(param0);
    return sub_406F40(1);
}

int sub_406ED4(int param0, unsigned int param1, int param2) {
    int result;
    int v0;
    int v1 = v0;
    if(!param0) {
        if(gvar_40BA58) {
            gvar_40BA58();
        }
        sub_407B2C();
        gvar_40BA5C{sub_406ED0}();
    }
    else {
        result = 0;
        gvar_40BA58 = 0;
    }
    if(!param1) {
        if(!param0) {
            gvar_40BA60{sub_406ED0}();
            gvar_40BA64{sub_406ED0}();
        }
        result = /*NO_RETURN*/ sub_407A40(param2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406F28(int param0) {
    return sub_406ED4(0, 0, param0);
}

unsigned int sub_406F78(unsigned int* param0, unsigned int* param1) {
    gvar_40BB18 = *param0;
    unsigned int result = *param1;
    gvar_40BB1C = *param1;
    return result;
}

int sub_406F94(int param0, int param1) {
    int v0;
    return param1(param0, 0, v0);
}

int sub_406FA8(int param0, int param1) {
    int v0;
    return param1(param0, 0, v0);
}

unsigned int sub_406FBC(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    gvar_40BA68 = param0;
    gvar_40BA6C = param1;
    gvar_40BA70 = param2;
    gvar_40BA74 = param3;
    return param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4070A0(int* param0, unsigned int param1) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    if(gvar_40CCB4 == gvar_40CC80) {
        gvar_40CC80 += 16;
        unsigned int v4 = (unsigned int)sub_401400((int)gvar_40CC7C, gvar_40CC80 * 4);
        gvar_40CC7C = v4;
        if(!v4) {
            sub_406E08("No space for command line argument vector");
        }
    }
    if(param1) {
        int* ptr0 = sub_402250(param0);
        int v5 = sub_4013E0((int)((char*)ptr0 + 1));
        v1 = v5;
        if(!v5) {
            sub_406E08("No space for command line argument");
        }
        int* ptr1 = param0;
        int v6 = -1;
        do {
            v0 = *(char*)&ptr1[0] == 0;
            ptr1 = (int*)((char*)ptr1 + 1);
            --v6;
        }
        while(~v0 && v6 == 0);
        int v7 = v1;
        int* ptr2 = (int*)((int)ptr1 - (unsigned int)~v6);
        for(int i = (unsigned int)~v6 >>> 2; i != 0; --i) {
            *(int*)v7 = *ptr2;
            ++ptr2;
            v7 += 4;
        }
        for(int* j = (int*)((unsigned int)~v6 & 0x3); j != 0; j = (int*)((char*)j - 1)) {
            *(char*)v7 = *(char*)ptr2;
            ptr2 = (int*)((char*)ptr2 + 1);
            ++v7;
        }
    }
    else {
        v1 = (int)param0;
    }
    unsigned int result = gvar_40CC7C;
    *(int*)(gvar_40CCB4 * 4 + result) = v1;
    ++gvar_40CCB4;
    return result;
}

int sub_407150(int param0, int* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int* i = param1;
    int v3 = param2(param0, 0, v0, v1, v2);
    while((*(char*)&i[0] == 32 || *(char*)&i[0] == 9)) {
        i = (int*)((char*)i + 1);
    }
    if(*(char*)&i[0] == 34) {
        for(i = (int*)((char*)i + 1); (*(char*)&i[0] != 34 && *(char*)&i[0]); i = (int*)((char*)i + 1)) {
        }
        if(*(char*)&i[0] == 34) {
            i = (int*)((char*)i + 1);
        }
    }
    else {
        for(unsigned char j = *(char*)&i[0]; (*(char*)&i[0] != 32 && j != 9 && j); j = *(char*)&i[0]) {
            i = (int*)((char*)i + 1);
        }
    }
    int* ptr0 = sub_402250(i);
    int v4 = sub_4013E0((int)((char*)ptr0 + 1));
    int v5 = v4;
    gvar_40CC88 = v4;
    if(!v4) {
        sub_406E08("No space for copy of command line");
    }
loc_407296:
    do {
        if(!*(char*)&i[0]) {
            return 1;
        }
        v0 = 0;
        for(unsigned char k = *(char*)&i[0]; (k == 32 || k == 9); k = *(char*)&i[0]) {
            i = (int*)((char*)i + 1);
        }
        if(*(char*)&i[0]) {
            int v6 = v5;
        loc_407250:
            unsigned char v7 = *(char*)&i[0];
            while((v7 != 32 && v7 != 9 && v7)) {
                if(v7 == 34) {
                    i = (int*)((char*)i + 1);
                    for(unsigned char counter = *(char*)&i[0]; (counter != 34 && counter); counter = *(char*)&i[0]) {
                        sub_4072C4(&v5, &i);
                    }
                    if(*(char*)&i[0] == 34) {
                        i = (int*)((char*)i + 1);
                    }
                    goto loc_407250;
                }
                else {
                    if(*(char*)&i[0] == 42 || *(char*)&i[0] == 63) {
                        v0 = 1;
                    }
                    sub_4072C4(&v5, &i);
                    v7 = *(char*)&i[0];
                }
            }
            *(char*)v5 = 0;
            ++v5;
            if(v0) {
                gvar_40BB18{sub_406F94}(v6, param2);
            }
            else {
                param2(v6, 0);
            }
            if(!*(char*)&i[0]) {
                return 1;
            }
            i = (int*)((char*)i + 1);
            goto loc_407296;
        }
    }
    while(*(char*)&i[0]);
    return 1;
}

unsigned int* sub_4072C4(unsigned int* param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    unsigned int* result = param1;
    unsigned int* ptr0 = param0;
    unsigned char* ptr1 = *result;
    if(*ptr1 == 92 && *(char*)(ptr1 + 1) == 34) {
        **ptr0 = 34;
        *result = *result + 2;
    }
    else if(gvar_40BACC) {
        ptr1 = *result;
        if(*ptr1 != 92 || *(char*)(ptr1 + 1) != 92) {
            goto loc_407306;
        }
        else {
            **ptr0 = 92;
            *result = *result + 2;
        }
    }
    else {
    loc_407306:
        char* ptr2 = *result;
        ptr1 = (unsigned int)*ptr2 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        if((*(char*)((unsigned int)*ptr2 + 4246101) & 0x4) && *(ptr2 + 1)) {
            **ptr0 = (unsigned char)ptr1;
            *result = *result + 1;
            *ptr0 = *ptr0 + 1;
        }
        **ptr0 = **result;
        *result = *result + 1;
    }
    *ptr0 = *ptr0 + 1;
    return result;
}

int sub_407338(int param0, unsigned short* param1, int param2) {
    int v0;
    int v1;
    int v2;
    unsigned short* ptr0 = param1;
    int v3 = param2(param0, 0, v0, v1, v2);
    while((ptr0[0] == 32 || ptr0[0] == 9)) {
        ++ptr0;
    }
    if(ptr0[0] == 34) {
        ++ptr0;
        while((ptr0[0] != 34 && ptr0[0])) {
            ++ptr0;
        }
        if(ptr0[0] == 34) {
            ++ptr0;
        }
    }
    else {
        for(unsigned short i = ptr0[0]; (ptr0[0] != 32 && i != 9 && i); i = ptr0[0]) {
            ++ptr0;
        }
    }
    int v4 = sub_4023BC(ptr0);
    int v5 = sub_4013E0(v4 * 2 + 2);
    int v6 = v5;
    gvar_40CC8C = v5;
    if(!v5) {
        sub_406E08("No space for copy of command line");
    }
loc_4074B9:
    do {
        if(!ptr0[0]) {
            return 1;
        }
        v0 = 0;
        for(unsigned short j = ptr0[0]; (j == 32 || j == 9); j = ptr0[0]) {
            ++ptr0;
        }
        if(ptr0[0]) {
            int v7 = v6;
        loc_407467:
            unsigned short v8 = ptr0[0];
            while((v8 != 32 && v8 != 9 && v8)) {
                if(v8 == 34) {
                    ++ptr0;
                    for(unsigned short k = ptr0[0]; (k != 34 && k); k = ptr0[0]) {
                        sub_4074E8(&v6, &ptr0);
                    }
                    if(ptr0[0] == 34) {
                        ++ptr0;
                    }
                    goto loc_407467;
                }
                else {
                    if(ptr0[0] == 42 || ptr0[0] == 63) {
                        v0 = 1;
                    }
                    sub_4074E8(&v6, &ptr0);
                    v8 = ptr0[0];
                }
            }
            *(short*)v6 = 0;
            v6 += 2;
            if(v0) {
                gvar_40BB1C{sub_406FA8}(v7, param2);
            }
            else {
                param2(v7, 0);
            }
            if(!ptr0[0]) {
                return 1;
            }
            ++ptr0;
            goto loc_4074B9;
        }
    }
    while(ptr0[0]);
    return 1;
}

unsigned int* sub_4074E8(unsigned int* param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    unsigned int* result = param1;
    unsigned int* ptr0 = param0;
    unsigned short* ptr1 = *result;
    if(*ptr1 == 92 && *(short*)(ptr1 + 1) == 34) {
        **ptr0 = 34;
        *result = *result + 4;
    }
    else if(gvar_40BACC) {
        unsigned short* ptr2 = *result;
        if(*ptr2 != 92 || *(short*)(ptr2 + 1) != 92) {
            **ptr0 = **result;
            *result = *result + 2;
            *ptr0 = *ptr0 + 2;
            return result;
        }
        **ptr0 = 92;
        *result = *result + 4;
    }
    else {
        **ptr0 = **result;
        *result = *result + 2;
    }
    *ptr0 = *ptr0 + 2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407768(unsigned int* param0, int param1, int param2) {
    int result1;
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v3;
    int v5 = 0;
    unsigned int* ptr0 = param0;
    int v6 = param2;
    int result = 0;
    unsigned int v7 = *param0;
    char v8 = v7 == 0xc0000090;
    if((v8 || (int)v7 < 0xc0000090)) {
        if(!v8) {
            char v9 = v7 == 0xc0000005;
            if(!v9 && (int)v7 >= 0xc0000005) {
                v7 -= 0xc000001d;
                if(!v7) {
                    v2 = 20;
                    v1 = 1;
                }
                else if(v7 != 113) {
                    return 1;
                }
                else {
                    v1 = 2;
                    v2 = 131;
                    v5 = 4;
                }
            }
            else if(!v9) {
                v7 -= 0x80000003;
                if(!v7) {
                    v2 = 23;
                    v1 = 1;
                }
                else if((v7 - 1)) {
                    return 1;
                }
                else {
                    v2 = 24;
                    v1 = 1;
                }
            }
            else {
                v2 = 12;
                v1 = 3;
            }
        }
        else {
            v1 = 2;
            v2 = 129;
            v5 = 1;
        }
        goto loc_4078BF;
    }
    else {
        v7 += 0x3fffff6f;
        if((unsigned int)(0xbfffbc99 + (v7 + 0x3fffff6f)) > 5) {
            return 1;
        }
        jump *(int*)((unsigned int)(0xbfffbc99 + (v7 + 0x3fffff6f)) * 4 + 4224993);
    loc_4078BF:
        v0 = *(unsigned int*)(v1 * 4 + (int)&gvar_40BB98);
        if(v0 == 1) {
            result1 = 0;
        }
        else if(v0) {
            *(unsigned int*)(v1 * 4 + (int)&gvar_40BB98) = 0;
            sub_404F84();
            sub_404F98((int)gvar_40B850, 7999);
            v0(*(int*)(v1 * 4 + (int)&gvar_40BBC0), v2, (int)&ptr0);
            *(int*)(param2 + 32) = ~v5 & *(int*)(param2 + 32);
            return result;
        }
        else {
            result1 = 1;
        }
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407948(unsigned int param0) {
    sub_4079D0(param0 ? 21: 2);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_407970(unsigned int param0, unsigned int param1) {
    if(!gvar_40BB94) {
        gvar_40C8B8 = &sub_407768;
        →KERNEL32.DLL!SetConsoleCtrlHandler((PHANDLER_ROUTINE)&sub_407948, 1);
        gvar_40BB94 = 1;
    }
    unsigned int v0 = sub_407748(param0);
    if(!(v0 + 1)) {
        gvar_40B9FC = 19;
        return 0xffffffff;
    }
    unsigned int result = *(unsigned int*)(v0 * 4 + (int)&gvar_40BB98);
    *(unsigned int*)(v0 * 4 + (int)&gvar_40BB98) = param1;
    return result;
}

int sub_407A50() {
    return 0;
}

int sub_407D1C() {
    char v0;
    char v1;
    short v2;
    →KERNEL32.DLL!GetStartupInfoA(&v0);
    return v1 & 0x1 ? (unsigned int)v2: 10;
}

BOOL sub_407D44(DWORD dwTlsIndex) {
    return →KERNEL32.DLL!TlsFree(dwTlsIndex);
}

LPVOID sub_407D54(DWORD dwTlsIndex) {
    return →KERNEL32.DLL!TlsGetValue(dwTlsIndex);
}

BOOL sub_407D64(DWORD dwTlsIndex, LPVOID lpTlsValue) {
    return →KERNEL32.DLL!TlsSetValue(dwTlsIndex, lpTlsValue);
}

void sub_407D78(int param0) {
}

void sub_407D80(int param0) {
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407DBE(unsigned int param0) {
    int v0;
    int v1 = v0;
    int result = sub_4013E0((int)param0);
    if(!result) {
        if(param0 <= 128) {
            int v2 = sub_401140();
            if((*(char*)(v2 + 4) & 0x1)) {
                sub_406EC0();
                int v3 = sub_401140();
                *(int*)(v3 + 4) = *(int*)(v3 + 4) | 0x1;
                int v4 = sub_401140();
                return *(int*)(v4 + 20);
            }
        }
        else {
            sub_406EC0();
        }
        int v3 = sub_401140();
        *(int*)(v3 + 4) = *(int*)(v3 + 4) | 0x1;
        int v4 = sub_401140();
        return *(int*)(v4 + 20);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407E08(unsigned int param0) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = sub_401140();
    if(*(int*)(v2 + 20) == param0) {
        result = sub_401140();
        *(int*)(result + 4) = *(int*)(result + 4) & 0xfffffffe;
    }
    else {
        result = sub_4013F0((int)param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40818C(int param0, int* param1, int param2, int param3, int param4, int param5, int param6, int param7, unsigned int param8, int param9, int param10, int* param11) {
    char v0;
    int result;
    int v1;
    int v2 = v1;
    sub_402414();
    int v3 = param0;
    int v4 = sub_401140();
    *(int*)(v4 + 4) = *(int*)(v4 + 4) | 0x2;
    int v5 = sub_401140();
    *(int*)(v5 + 16) = v3 ? (unsigned int)*(short*)(v3 + 6) + v3: 0;
    int v6 = sub_401140();
    *(int*)(v6 + 12) = param6;
    int v7 = sub_401140();
    *(int*)(v7 + 8) = param7;
    int v8 = v3;
    int v9 = (unsigned int)*(short*)(v3 + 4);
    int v10 = *(int*)v3;
    *(int*)&v0 = v9 & 0x2 ? *(int*)(v3 + 12): 0;
    if((v9 & 0x30)) {
        v8 = *(int*)(v8 + 8);
    }
    int v11 = sub_407DBE((unsigned int)(v10 + 82));
    *(int*)v11 = 0;
    *(int*)(v11 + 4) = v3;
    *(int*)(v11 + 12) = param5;
    *(int*)(v11 + 16) = v10;
    *(short*)(v11 + 24) = (unsigned short)v9;
    *(short*)(v11 + 26) = *(short*)&v0;
    *(int*)(v11 + 20) = v8;
    *(int*)(v11 + 8) = param2;
    *(int*)(v11 + 40) = 0;
    *(int*)(v11 + 44) = 0;
    *(int*)(v11 + 28) = &sub_407E08;
    *(int*)(v11 + 52) = param6;
    *(int*)(v11 + 56) = param7;
    *(int*)(v11 + 32) = param3;
    *(int*)(v11 + 36) = param4;
    *(char*)(v11 + 69) = 0;
    *(char*)(v11 + 68) = 1;
    sub_40213C((int*)(v11 + 82), param1, v10);
    if(*gvar_40CCE4 == 1 || *gvar_40CCE4 == 2) {
        char* ptr0 = (char*)sub_402938(v3);
        void* ptr1 = *(void**)(param11 + 6);
        int v12 = *(param11 + 5);
        int v13 = *(param11 + 4);
        int v14 = *(param11 + 3);
        void* ptr2 = *(void**)(param11 + 2);
        int v15 = *(param11 + 1);
        int v16 = *param11;
        int v17 = *(char*)(v11 + 68) ? v11 + 82: *(int*)(v11 + 64);
        int v18 = sub_408009(ptr0);
        char* ptr3 = ptr0;
        int v19 = param8 - 5;
        sub_408021(1, 11);
    }
    if((v0 & 0x1)) {
        if(!param3) {
            sub_406B6C("cctrAddr", "xx.cpp", 0x445);
        }
        unsigned int v20 = gvar_40CCE0;
        short v21 = 8;
        sub_407EFB(v11 + 82, (int)param1, param3, param4);
        v21 = 0;
        gvar_40CCE0 = v20;
    }
    int v22 = sub_401140();
    int v23 = *(int*)(v22 + 16);
    unsigned int v24 = param8;
    int v25 = v11;
    →KERNEL32.DLL!RaiseException(0xeefface, 1, 3, &v23);
    *(int*)0 = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408411(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8 = v5;
    int* ptr0 = &v8;
    int v9 = v3;
    int* ptr1 = &v8;
    int* ptr2 = &v8;
    int* ptr3 = &param0;
    char v10 = &param0 ? 0: 1;
    char v11 = (int)&param0 < 0;
    char v12 = __parity__((unsigned char)&v0 + 4);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x8) ^ (int)&param0) >>> 4) & 0x1);
    char v14 = (unsigned int)&v8 >= 0xfffffff8;
    char v15 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&param0) & (int*)~(int)(int*)((int)&v8 ^ 0x8)) < 0;
    int* ptr4 = &param0;
    int v16 = v8;
    int v17 = v4;
    int v18 = v6;
    int v19 = v7;
    int v20 = v3;
    int v21 = v2;
    void* ptr5 = &v21;
    int* ptr6 = &v8;
    int v22 = v0;
    int v23 = sub_401140();
    int v24 = *(int*)v23;
    char v25 = v24 ? 0: 1;
    char v26 = v24 < 0;
    char v27 = __parity__((unsigned char)v24);
    char v28 = 0;
    char v29 = 0;
    if(v25) {
        int v30 = sub_402CA4();
    }
    char v31 = *(char*)(v24 + 68) ? 0: 1;
    char v32 = *(char*)(v24 + 68) < 0;
    char v33 = __parity__(*(char*)(v24 + 68));
    char v34 = *(unsigned char*)(v24 + 68) < 0;
    char v35 = 0;
    char v36 = 0;
    int v37 = v31 ? *(int*)(v24 + 64): v24 + 82;
    void* ptr7 = ptr5;
    int v38 = 0;
    int v39 = 1;
    int v40 = param1;
    int v41 = param0;
    int v42 = *(int*)(v24 + 12);
    int v43 = *(int*)(v24 + 36);
    int v44 = *(int*)(v24 + 32);
    int v45 = *(int*)(v24 + 8);
    int v46 = v37;
    int v47 = sub_40818C(*(int*)(v24 + 4), v37, v45, v44, v43, v42, param0, param1, v22, 1, 0, (int)ptr5);
    int* ptr8 = &v1;
    char v48 = &v0 == 48;
    char v49 = (int)&v21 < 0;
    char v50 = __parity__((unsigned char)&v0 - 48);
    char v51 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x30) ^ (int)&v21) >>> 4) & 0x1);
    char v52 = (unsigned int)&v1 >= 0xffffffd0;
    char v53 = (int)(int*)((int)(int*)((int)&v21 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x30)) < 0;
    int v54 = v21;
    int v55 = v20;
    int v56 = v19;
    int v57 = v18;
    int v58 = v17;
    int v59 = v16;
    int* ptr9 = &ptr4;
    jump v59;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* sub_4085B8() {
    void* result;
    int v0;
    int v1 = v0;
    int v2 = v0;
    int v3 = sub_401140();
    if(!*(int*)v3) {
        sub_406B6C("__CPPexceptionList", "xx.cpp", 1577);
    }
    int v4 = sub_401140();
    int v5 = *(int*)v4;
    int v6 = sub_401140();
    *(int*)v6 = *(int*)v5;
    int v7 = *(int*)(v5 + 40);
    unsigned int v8 = *(unsigned int*)0;
    if(!v8) {
        sub_406B6C(&gvar_40BE14, "xx.cpp", 1591);
    }
    if(*(int*)(v5 + 40) != v8) {
        sub_406B6C("xdrPtr->xdERRaddr == xl", "xx.cpp", 1592);
    }
    *(short*)(v7 + 16) = *(short*)((unsigned int)*(short*)(v7 + 16) + *(int*)(v7 + 8));
    sub_408530(v5);
    *(int*)(v5 + 28)(v5);
    if(*gvar_40CCE4 == 2) {
        sub_408021(6, 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408AE8(int param0, int param1) {
    return sub_40897D(param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408AFB(int* param0) {
    int v0;
    int v1 = v0;
    sub_40897D((int)param0, 0);
    int result = *param0;
    *(int*)0 = *param0;
    return result;
}

int sub_408B5C(unsigned int* param0, unsigned int* param1, int param2) {
    void* ptr0;
    int* ptr1;
    void* ptr2;
    void* ptr3;
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    char v7;
    int* ptr4;
    int v8;
    int v9;
    void* ptr5;
    int v10;
    int v11;
    int v12;
    char v13;
    int* ptr6 = &v8;
    int* ptr7 = &v8;
    char v14 = &v7 == 44;
    char v15 = (int)&v13 < 0;
    char v16 = __parity__((unsigned char)&v7 - 44);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0xffffffd8) ^ (int)&v13) >>> 4) & 0x1);
    char v18 = (unsigned int)&v8 >= 40;
    char v19 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v13) & (int*)~(int)(int*)((int)&v8 ^ 0xffffffd8)) < 0;
    int v20 = v10;
    int v21 = v11;
    int v22 = v12;
    unsigned int* ptr8 = param0;
    int v23 = *(int*)(ptr8 + 7);
    int v24 = *(int*)(ptr8 + 7);
    unsigned int* ptr9 = param1;
    void* ptr10 = *(void**)(ptr9 + 2);
    unsigned int* ptr11 = param1;
    unsigned int* ptr12 = param1;
    int* ptr13 = (int*)((int)ptr11 - *(int*)((int)ptr10 + 4));
    char v25 = ptr13 ? 0: 1;
    char v26 = (int)ptr13 < 0;
    char v27 = __parity__((unsigned char)ptr13);
    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)(*(int*)((int)ptr10 + 4) ^ (int)ptr12) ^ (int)ptr13) >>> 4) & 0x1);
    char v29 = *(unsigned int*)((int)ptr10 + 4) > (unsigned int)ptr12;
    char v30 = (int)(int*)((int)(int*)(*(int*)((int)ptr10 + 4) ^ (int)ptr12) & (int)(int*)((int)ptr13 ^ (int)ptr12)) < 0;
    int* ptr14 = ptr13;
    unsigned int* ptr15 = param1;
    unsigned int* ptr16 = *(ptr15 + 3);
    unsigned int* ptr17 = *(ptr15 + 3);
    unsigned int* ptr18 = param0;
    char v31 = *ptr18 == 0xeedfae6;
    char v32 = *ptr18 < 0xeedfae6;
    char v33 = __parity__((unsigned char)*ptr18 - 230);
    char v34 = *ptr18 < 0xeedfae6;
    char v35 = (((*ptr18 - 0xeedfae6) ^ *ptr18) & (*ptr18 ^ 0xeedfae6)) < 0;
    char v36 = (((*ptr18 - 0xeedfae6) ^ (*ptr18 ^ 0xeedfae6)) >>> 4) & 0x1;
    if(v31) {
        v6 = 0;
        v5 = 1;
        v4 = 0;
        v3 = 1;
        v2 = 0;
        v1 = 0;
    }
    else {
        int v37 = sub_405010();
        unsigned int* ptr19 = param0;
        char v38 = *(char*)(ptr19 + 1) & 0x6 ? 0: 1;
        char v39 = (*(char*)(ptr19 + 1) & 0x6) < 0;
        char v40 = __parity__(*(char*)(ptr19 + 1) & 0x6);
        char v41 = 0;
        char v42 = 0;
        if(!v38) {
            int v43 = sub_40897D((int)param1, 0);
            int* ptr20 = &ptr4;
            char v44 = &v7 == 56;
            char v45 = (int)&v22 < 0;
            char v46 = __parity__((unsigned char)&v7 - 56);
            char v47 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x8) ^ (int)&v22) >>> 4) & 0x1);
            char v48 = (unsigned int)&ptr4 >= 0xfffffff8;
            char v49 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&ptr4) & (int*)~(int)(int*)((int)&ptr4 ^ 0x8)) < 0;
            ptr16 = param0;
            v5 = *ptr16 == 0xeefface;
            v4 = *ptr16 < 0xeefface;
            v3 = __parity__((unsigned char)*ptr16 - 206);
            v1 = *ptr16 < 0xeefface;
            v2 = (((*ptr16 - 0xeefface) ^ *ptr16) & (*ptr16 ^ 0xeefface)) < 0;
            v36 = (((*ptr16 - 0xeefface) ^ (*ptr16 ^ 0xeefface)) >>> 4) & 0x1;
            if(v5) {
                unsigned int* ptr21 = *(unsigned int**)ptr10;
                v5 = ptr21 ? 0: 1;
                v4 = (int)ptr21 < 0;
                v3 = __parity__((unsigned char)ptr21);
                v2 = 0;
                v1 = 0;
                if(!v5) {
                    while(1) {
                        v5 = *ptr21 ? 0: 1;
                        v4 = *ptr21 < 0;
                        v3 = __parity__((unsigned char)*ptr21);
                        v1 = *ptr21 < 0;
                        v2 = 0;
                        v36 = 0;
                        if(v5) {
                            break;
                        }
                        else {
                            int v50 = v24;
                            int v51 = v24;
                            int v52 = v24;
                            int v53 = sub_407E35(*(int*)(v52 + 4), *(int*)(v51 + 8), *ptr21, *(int*)(v50 + 12));
                            v5 = v53 ? 0: 1;
                            v4 = v53 < 0;
                            v3 = __parity__((unsigned char)v53);
                            v2 = 0;
                            v1 = 0;
                            if(!v5) {
                                goto loc_408C0C;
                            }
                            else {
                                unsigned int* ptr22 = ptr21;
                                ++ptr21;
                                char v54 = ptr21 ? 0: 1;
                                char v55 = (int)ptr21 < 0;
                                char v56 = __parity__((unsigned char)ptr21);
                                char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr22 ^ 0x4) ^ (int)ptr21) >>> 4) & 0x1);
                                char v58 = (unsigned int)ptr22 >= 0xfffffffc;
                                char v59 = (int)(int*)((int)(int*)((int)ptr21 ^ (int)ptr22) & (int*)~(int)(int*)((int)ptr22 ^ 0x4)) < 0;
                            }
                        }
                    }
                    int v60 = *(int*)0;
                    unsigned int* ptr23 = param1;
                    int v61 = *ptr23;
                    *(int*)0 = *ptr23;
                    int v62 = sub_402D18();
                    *(int*)0 = v60;
                }
            }
        loc_408C0C:
            v6 = 1;
        }
        else {
            ptr15 = param1;
            void* ptr24 = (void*)*(short*)(ptr15 + 4);
            v5 = ptr24 ? 0: 1;
            v4 = (int)ptr24 < 0;
            v3 = __parity__((unsigned char)ptr24);
            v2 = 0;
            v1 = 0;
            if(!v5) {
            alab1:
                do {
                    void* ptr25 = ptr24;
                    int v63 = (unsigned int)*(short*)((int)ptr25 + (int)ptr10);
                    *(ptr6 - 2) = (unsigned int)*(short*)((int)ptr25 + (int)ptr10);
                    void* ptr26 = ptr25;
                    int* ptr27 = (int*)((int)ptr25 + 2);
                    char v64 = ptr27 ? 0: 1;
                    char v65 = (int)ptr27 < 0;
                    char v66 = __parity__((unsigned char)ptr27);
                    char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr26 ^ 0x2) ^ (int)ptr27) >>> 4) & 0x1);
                    char v68 = (unsigned int)ptr26 >= 0xfffffffe;
                    char v69 = (int)(int*)((int)(int*)((int)ptr27 ^ (int)ptr26) & (int*)~(int)(int*)((int)ptr26 ^ 0x2)) < 0;
                    ptr15 = (unsigned int*)*(short*)((int)ptr27 + (int)ptr10);
                    *(unsigned int*)(ptr6 - 5) = (unsigned int*)*(short*)((int)ptr27 + (int)ptr10);
                    int* ptr28 = ptr27;
                    int* ptr29 = (int*)((char*)ptr27 + 2);
                    char v70 = ptr29 ? 0: 1;
                    char v71 = (int)ptr29 < 0;
                    char v72 = __parity__((unsigned char)ptr29);
                    char v73 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr28 ^ 0x2) ^ (int)ptr29) >>> 4) & 0x1);
                    char v74 = (unsigned int)ptr28 >= 0xfffffffe;
                    char v75 = (int)(int*)((int)(int*)((int)ptr29 ^ (int)ptr28) & (int*)~(int)(int*)((int)ptr28 ^ 0x2)) < 0;
                    ptr16 = *(unsigned int*)(ptr6 - 5);
                    char v76 = ptr16 == 5;
                    char v77 = (int)ptr16 < 5;
                    char v78 = __parity__((unsigned char)ptr16 - 5);
                    char v79 = (unsigned int)ptr16 < 5;
                    char v80 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 5) ^ (int)ptr16) & (int)(int*)((int)ptr16 ^ 0x5)) < 0;
                    v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 5) ^ (int)(int*)((int)ptr16 ^ 0x5)) >>> 4) & 0x1);
                    if((v79 || v76)) {
                        switch(ptr16) {
                            case 0: 
                            case 4: 
                            case 5: {
                                goto loc_408EA2;
                            }
                            case 1: {
                                unsigned int* ptr30 = *(unsigned int*)(ptr6 + 2);
                                char v81 = *ptr30 == 0xeefface;
                                char v82 = *ptr30 < 0xeefface;
                                char v83 = __parity__((unsigned char)*ptr30 - 206);
                                char v84 = *ptr30 < 0xeefface;
                                char v85 = (((*ptr30 - 0xeefface) ^ *ptr30) & (*ptr30 ^ 0xeefface)) < 0;
                                v36 = (((*ptr30 - 0xeefface) ^ (*ptr30 ^ 0xeefface)) >>> 4) & 0x1;
                                if(!v81) {
                                    int v86 = *(ptr6 + 2);
                                    *(ptr6 - 10) = *(ptr6 + 2);
                                    int v87 = *(ptr6 + 4);
                                    *(ptr6 - 9) = *(ptr6 + 4);
                                    int* ptr31 = *(unsigned int*)(ptr6 + 2);
                                    int v88 = *(ptr6 + 3);
                                    int v89 = *ptr31;
                                    int* ptr32 = ptr6 - 10;
                                    *(int*)(v88 + 20) = v89;
                                    int v90 = *(ptr6 + 3);
                                    *(unsigned int*)(v90 + 24) = ptr32;
                                    unsigned int v91 = *(unsigned int*)((int)ptr29 + (int)ptr10);
                                    gvar_40CCEC = *(unsigned int*)((int)ptr29 + (int)ptr10);
                                    ptr2 = ptr24;
                                    ptr4 = ptr6;
                                    ptr1 = ptr29;
                                    void* ptr33 = ptr10;
                                    int v92 = 123;
                                    int v93 = 123;
                                    int v94 = *(ptr6 - 3);
                                    int v95 = &gvar_40CCEC;
                                    v0 = sub_402FAF(v94);
                                    ptr10 = ptr33;
                                    ptr29 = ptr1;
                                    ptr6 = ptr4;
                                    void* ptr34 = ptr2;
                                    goto loc_408E47;
                                }
                                else {
                                    goto loc_408EA2;
                                }
                            }
                            case 2: {
                                ptr15 = *(unsigned int*)(ptr6 + 2);
                                char v96 = *ptr15 == 0xeefface;
                                char v97 = *ptr15 < 0xeefface;
                                char v98 = __parity__((unsigned char)*ptr15 - 206);
                                char v99 = *ptr15 < 0xeefface;
                                char v100 = (((*ptr15 - 0xeefface) ^ *ptr15) & (*ptr15 ^ 0xeefface)) < 0;
                                v36 = (((*ptr15 - 0xeefface) ^ (*ptr15 ^ 0xeefface)) >>> 4) & 0x1;
                                if(!v96) {
                                    ptr16 = *(unsigned int*)(ptr6 + 2);
                                    ptr15 = *(unsigned int*)(ptr6 + 3);
                                    int v101 = *ptr16;
                                    *(int*)(ptr15 + 5) = *ptr16;
                                    v0 = *(int*)((int)ptr29 + (int)ptr10);
                                loc_408E47:
                                    char v102 = v0 ? 0: 1;
                                    char v103 = v0 < 0;
                                    char v104 = __parity__((unsigned char)v0);
                                    char v105 = 0;
                                    char v106 = 0;
                                    if(v103 != 0) {
                                        ptr15 = *(unsigned int*)(ptr6 + 2);
                                        char v107 = *(char*)(ptr15 + 1) & 0x1 ? 0: 1;
                                        char v108 = (*(char*)(ptr15 + 1) & 0x1) < 0;
                                        char v109 = __parity__(*(char*)(ptr15 + 1) & 0x1);
                                        char v110 = 0;
                                        char v111 = 0;
                                        if(!v107) {
                                            ptr16 = *(unsigned int*)(ptr6 + 3);
                                            v0 = (unsigned int)*(short*)(ptr6 - 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                            *(short*)(ptr16 + 4) = *(short*)(ptr6 - 2);
                                        }
                                        v6 = 0;
                                        v5 = 1;
                                        v4 = 0;
                                        v3 = 1;
                                        v2 = 0;
                                        v1 = 0;
                                        break alab1;
                                    }
                                    else {
                                        char v112 = v0 ? 0: 1;
                                        char v113 = v0 < 0;
                                        char v114 = __parity__((unsigned char)v0);
                                        char v115 = 0;
                                        char v116 = 0;
                                        if(!v112) {
                                            int v117 = *(ptr6 + 3);
                                            int v118 = 0;
                                            char v119 = 1;
                                            char v120 = 0;
                                            char v121 = 1;
                                            char v122 = 0;
                                            char v123 = 0;
                                            *(int*)(v117 + 24) = 0;
                                            int* ptr35 = ptr29;
                                            int* ptr36 = ptr29 + 1;
                                            char v124 = ptr36 ? 0: 1;
                                            char v125 = (int)ptr36 < 0;
                                            char v126 = __parity__((unsigned char)ptr36);
                                            char v127 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr35 ^ 0x4) ^ (int)ptr36) >>> 4) & 0x1);
                                            char v128 = (unsigned int)ptr35 >= 0xfffffffc;
                                            char v129 = (int)(int*)((int)(int*)((int)ptr36 ^ (int)ptr35) & (int*)~(int)(int*)((int)ptr35 ^ 0x4)) < 0;
                                            void* ptr37 = *(void**)(ptr6 - 2);
                                            *(void**)(ptr6 - 8) = *(void**)(ptr6 - 2);
                                            ptr24 = ptr37;
                                            ptr0 = *(void**)((int)ptr36 + (int)ptr10);
                                        loc_408D20:
                                            int v130 = sub_40847C(*(ptr6 + 3), *(ptr6 + 2));
                                            int* ptr38 = &ptr4;
                                            char v131 = &v7 == 56;
                                            char v132 = (int)&v22 < 0;
                                            char v133 = __parity__((unsigned char)&v7 - 56);
                                            char v134 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x8) ^ (int)&v22) >>> 4) & 0x1);
                                            char v135 = (unsigned int)&ptr4 >= 0xfffffff8;
                                            char v136 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&ptr4) & (int*)~(int)(int*)((int)&ptr4 ^ 0x8)) < 0;
                                            ptr2 = ptr24;
                                            int v137 = sub_40897D(*(ptr6 + 3), (int)ptr24);
                                            int* ptr39 = &ptr4;
                                            char v138 = &v7 == 56;
                                            char v139 = (int)&v22 < 0;
                                            char v140 = __parity__((unsigned char)&v7 - 56);
                                            char v141 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x8) ^ (int)&v22) >>> 4) & 0x1);
                                            char v142 = (unsigned int)&ptr4 >= 0xfffffff8;
                                            char v143 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&ptr4) & (int*)~(int)(int*)((int)&ptr4 ^ 0x8)) < 0;
                                            int v144 = *(ptr6 + 3);
                                            short v145 = *(short*)(ptr6 - 8);
                                            *(short*)(v144 + 16) = *(short*)(ptr6 - 8);
                                            char v146 = *(ptr6 - 5) == 3;
                                            char v147 = *(ptr6 - 5) < 3;
                                            char v148 = __parity__((unsigned char)*(ptr6 - 5) - 3);
                                            char v149 = *(unsigned int*)(ptr6 - 5) < 3;
                                            char v150 = (((*(ptr6 - 5) - 3) ^ *(ptr6 - 5)) & (*(ptr6 - 5) ^ 0x3)) < 0;
                                            char v151 = (((*(ptr6 - 5) - 3) ^ (*(ptr6 - 5) ^ 0x3)) >>> 4) & 0x1;
                                            if(v146) {
                                                int v152 = sub_4086A9(*(ptr6 - 6), *(ptr6 + 3), *(ptr6 - 1), *(ptr6 - 7), *(ptr6 - 3));
                                                int* ptr40 = &v9;
                                                char v153 = &v7 == 56;
                                                char v154 = (int)&v22 < 0;
                                                char v155 = __parity__((unsigned char)&v7 - 56);
                                                char v156 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x14) ^ (int)&v22) >>> 4) & 0x1);
                                                char v157 = (unsigned int)&v9 >= 0xffffffec;
                                                char v158 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&v9) & (int*)~(int)(int*)((int)&v9 ^ 0x14)) < 0;
                                            }
                                            int v159 = sub_401140();
                                            *(int*)(v159 + 4) = *(int*)(v159 + 4) & 0xfffffffd;
                                            char v160 = *(int*)(v159 + 4) ? 0: 1;
                                            char v161 = *(int*)(v159 + 4) < 0;
                                            char v162 = __parity__((unsigned char)*(int*)(v159 + 4));
                                            char v163 = 0;
                                            char v164 = 0;
                                            unsigned int* ptr41 = gvar_40CCE4;
                                            char v165 = *ptr41 == 2;
                                            char v166 = *ptr41 < 2;
                                            char v167 = __parity__((unsigned char)*ptr41 - 2);
                                            char v168 = *ptr41 < 2;
                                            char v169 = (((*ptr41 - 2) ^ *ptr41) & (*ptr41 ^ 0x2)) < 0;
                                            v36 = (((*ptr41 - 2) ^ (*ptr41 ^ 0x2)) >>> 4) & 0x1;
                                            if(v165) {
                                                char v170 = *(ptr6 - 5) == 3;
                                                char v171 = *(ptr6 - 5) < 3;
                                                char v172 = __parity__((unsigned char)*(ptr6 - 5) - 3);
                                                char v173 = *(unsigned int*)(ptr6 - 5) < 3;
                                                char v174 = (((*(ptr6 - 5) - 3) ^ *(ptr6 - 5)) & (*(ptr6 - 5) ^ 0x3)) < 0;
                                                v36 = (((*(ptr6 - 5) - 3) ^ (*(ptr6 - 5) ^ 0x3)) >>> 4) & 0x1;
                                                if(v170) {
                                                    int v175 = *(ptr6 - 1);
                                                    int* ptr42 = (int*)sub_402938(*(int*)(v175 + 4));
                                                    int* ptr43 = ptr42;
                                                    int v176 = *(ptr6 - 1);
                                                    void* ptr44 = ptr2;
                                                    char v177 = *(char*)(v176 + 68) ? 0: 1;
                                                    char v178 = *(char*)(v176 + 68) < 0;
                                                    char v179 = __parity__(*(char*)(v176 + 68));
                                                    char v180 = *(unsigned char*)(v176 + 68) < 0;
                                                    char v181 = 0;
                                                    char v182 = 0;
                                                    if(!v177) {
                                                        int v183 = *(ptr6 - 1);
                                                        unsigned int v184 = *(unsigned int*)(ptr6 - 1);
                                                        ptr3 = (void*)(v183 + 82);
                                                        char v185 = ptr3 ? 0: 1;
                                                        char v186 = (int)ptr3 < 0;
                                                        char v187 = __parity__((unsigned char)ptr3);
                                                        char v188 = (int*)((int)(int*)((int)(int*)((v184 ^ 0x52) ^ (int)ptr3) >>> 4) & 0x1);
                                                        char v189 = v184 >= 0xffffffae;
                                                        char v190 = (int)(int*)((int)(int*)((int)ptr3 ^ v184) & ~(v184 ^ 0x52)) < 0;
                                                    }
                                                    else {
                                                        int v191 = *(ptr6 - 1);
                                                        ptr3 = *(void**)(v191 + 64);
                                                    }
                                                    ptr2 = ptr3;
                                                    int* ptr45 = (int*)sub_408009((int)ptr43);
                                                    int* ptr46 = ptr4;
                                                    ptr4 = ptr45;
                                                    ptr1 = ptr43;
                                                    int v192 = sub_408021(3, 5);
                                                    int* ptr47 = &ptr5;
                                                    char v193 = &v7 == 56;
                                                    char v194 = (int)&v22 < 0;
                                                    char v195 = __parity__((unsigned char)&v7 - 56);
                                                    v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x18) ^ (int)&v22) >>> 4) & 0x1);
                                                    char v196 = (unsigned int)&ptr5 >= 0xffffffe8;
                                                    char v197 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&ptr5) & (int*)~(int)(int*)((int)&ptr5 ^ 0x18)) < 0;
                                                }
                                            }
                                            int v198 = 123;
                                            int v199 = 123;
                                            int v200 = 123;
                                            void* ptr48 = ptr0;
                                            int v201 = *(ptr6 - 4);
                                            int v202 = *(ptr6 - 3);
                                            int v203 = sub_407DB7(v202);
                                        }
                                    }
                                }
                                goto loc_408EA2;
                            }
                            case 3: {
                                break;
                            }
                            default: {
                                throw 0;
                            }
                        }
                        unsigned int* ptr49 = *(unsigned int*)(ptr6 + 2);
                        unsigned int v204 = *ptr49;
                        unsigned int v205 = *ptr49;
                        ptr15 = (unsigned int*)(v204 - 0xeefface);
                        char v206 = ptr15 ? 0: 1;
                        char v207 = (int)ptr15 < 0;
                        char v208 = __parity__((unsigned char)ptr15);
                        v36 = (int*)((int)(int*)((int)(int*)((v205 ^ 0xeefface) ^ (int)ptr15) >>> 4) & 0x1);
                        char v209 = v205 < 0xeefface;
                        char v210 = (int)(int*)((int)(int*)((int)ptr15 ^ v205) & (v205 ^ 0xeefface)) < 0;
                        if(v206) {
                            int v211 = *(int*)((int)ptr29 + (int)ptr10);
                            *(ptr6 - 7) = *(int*)((int)ptr29 + (int)ptr10);
                            int* ptr50 = ptr29;
                            int* ptr51 = ptr29 + 1;
                            char v212 = ptr51 ? 0: 1;
                            char v213 = (int)ptr51 < 0;
                            char v214 = __parity__((unsigned char)ptr51);
                            char v215 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr50 ^ 0x4) ^ (int)ptr51) >>> 4) & 0x1);
                            char v216 = (unsigned int)ptr50 >= 0xfffffffc;
                            char v217 = (int)(int*)((int)(int*)((int)ptr51 ^ (int)ptr50) & (int*)~(int)(int*)((int)ptr50 ^ 0x4)) < 0;
                            int v218 = sub_408B17(*(ptr6 - 7), *(ptr6 - 1));
                            int* ptr52 = &ptr4;
                            char v219 = &v7 == 56;
                            char v220 = (int)&v22 < 0;
                            char v221 = __parity__((unsigned char)&v7 - 56);
                            char v222 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x8) ^ (int)&v22) >>> 4) & 0x1);
                            char v223 = (unsigned int)&ptr4 >= 0xfffffff8;
                            char v224 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&ptr4) & (int*)~(int)(int*)((int)&ptr4 ^ 0x8)) < 0;
                            *(ptr6 - 6) = v218;
                            char v225 = *(ptr6 - 6) ? 0: 1;
                            char v226 = *(ptr6 - 6) < 0;
                            char v227 = __parity__((unsigned char)*(ptr6 - 6));
                            char v228 = *(unsigned int*)(ptr6 - 6) < 0;
                            char v229 = 0;
                            v36 = 0;
                            if(!v225) {
                                unsigned int* ptr53 = gvar_40CCE4;
                                char v230 = *ptr53 == 1;
                                char v231 = *ptr53 < 1;
                                char v232 = __parity__((unsigned char)*ptr53 - 1);
                                char v233 = *ptr53 < 1;
                                char v234 = (((*ptr53 - 1) ^ *ptr53) & (*ptr53 ^ 0x1)) < 0;
                                char v235 = (((*ptr53 - 1) ^ (*ptr53 ^ 0x1)) >>> 4) & 0x1;
                                if(!v230) {
                                    unsigned int* ptr54 = gvar_40CCE4;
                                    char v236 = *ptr54 == 2;
                                    char v237 = *ptr54 < 2;
                                    char v238 = __parity__((unsigned char)*ptr54 - 2);
                                    char v239 = *ptr54 < 2;
                                    char v240 = (((*ptr54 - 2) ^ *ptr54) & (*ptr54 ^ 0x2)) < 0;
                                    char v241 = (((*ptr54 - 2) ^ (*ptr54 ^ 0x2)) >>> 4) & 0x1;
                                    if(v236) {
                                        goto loc_408CB1;
                                    }
                                }
                                else {
                                loc_408CB1:
                                    unsigned int* ptr55 = *(unsigned int*)(ptr6 + 2);
                                    char v242 = *ptr55 == 0xeedface;
                                    char v243 = *ptr55 < 0xeedface;
                                    char v244 = __parity__((unsigned char)*ptr55 - 206);
                                    char v245 = *ptr55 < 0xeedface;
                                    char v246 = (((*ptr55 - 0xeedface) ^ *ptr55) & (*ptr55 ^ 0xeedface)) < 0;
                                    char v247 = (((*ptr55 - 0xeedface) ^ (*ptr55 ^ 0xeedface)) >>> 4) & 0x1;
                                    if(!v245) {
                                        unsigned int* ptr56 = *(unsigned int*)(ptr6 + 2);
                                        char v248 = *ptr56 == 0xeefface;
                                        char v249 = *ptr56 < 0xeefface;
                                        char v250 = __parity__((unsigned char)*ptr56 - 206);
                                        char v251 = *ptr56 < 0xeefface;
                                        char v252 = (((*ptr56 - 0xeefface) ^ *ptr56) & (*ptr56 ^ 0xeefface)) < 0;
                                        char v253 = (((*ptr56 - 0xeefface) ^ (*ptr56 ^ 0xeefface)) >>> 4) & 0x1;
                                        if(!v251 && !v248) {
                                            goto loc_408CC7;
                                        }
                                    }
                                    else {
                                    loc_408CC7:
                                        ptr2 = *(void**)(ptr6 + 4);
                                        ptr4 = *(unsigned int*)(ptr6 + 2);
                                        ptr1 = *(unsigned int*)(ptr6 + 3);
                                        int v254 = sub_408021(2, 3);
                                        int* ptr57 = &v9;
                                        char v255 = &v7 == 56;
                                        char v256 = (int)&v22 < 0;
                                        char v257 = __parity__((unsigned char)&v7 - 56);
                                        char v258 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x14) ^ (int)&v22) >>> 4) & 0x1);
                                        char v259 = (unsigned int)&v9 >= 0xffffffec;
                                        char v260 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&v9) & (int*)~(int)(int*)((int)&v9 ^ 0x14)) < 0;
                                    }
                                }
                                int* ptr58 = (int*)sub_401140();
                                int v261 = *ptr58;
                                int* ptr59 = *(unsigned int*)(ptr6 - 1);
                                *ptr59 = v261;
                                int* ptr60 = (int*)sub_401140();
                                int v262 = *(ptr6 - 1);
                                *ptr60 = *(ptr6 - 1);
                                int v263 = *(ptr6 - 1);
                                int v264 = *(ptr6 + 3);
                                *(int*)(v263 + 40) = *(ptr6 + 3);
                                int v265 = *(ptr6 - 1);
                                int v266 = *(ptr6 - 6);
                                *(int*)(v265 + 44) = *(ptr6 - 6);
                                int v267 = *(ptr6 - 1);
                                *(unsigned int*)(v267 + 48) = ptr51;
                                *(unsigned int*)(ptr6 - 8) = ptr51;
                                unsigned int* ptr61 = *(unsigned int*)(ptr6 - 6);
                                ptr0 = *ptr61;
                                goto loc_408D20;
                            }
                        }
                    }
                    else {
                        int v268 = "bogus context in _ExceptionHandler()";
                        char v269 = 0;
                        char v270 = 0;
                        char v271 = 0;
                        char v272 = 0;
                        char v273 = 0;
                        int v274 = sub_406B6C("!\"bogus context in _ExceptionHandler()\"", "xx.cpp", 0xc00);
                        int* ptr62 = &ptr1;
                        char v275 = &v7 == 56;
                        char v276 = (int)&v22 < 0;
                        char v277 = __parity__((unsigned char)&v7 - 56);
                        v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0xc) ^ (int)&v22) >>> 4) & 0x1);
                        char v278 = (unsigned int)&ptr1 >= 0xfffffff4;
                        char v279 = (int)(int*)((int)(int*)((int)&v22 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0xc)) < 0;
                    }
                loc_408EA2:
                    ptr24 = *(void**)(ptr6 - 2);
                    v5 = ptr24 ? 0: 1;
                    v4 = (int)ptr24 < 0;
                    v3 = __parity__((unsigned char)ptr24);
                    v2 = 0;
                    v1 = 0;
                }
                while(!v5);
            }
            else {
                v6 = 1;
            }
        }
    }
    int v280 = v22;
    int v281 = v21;
    int v282 = v20;
    int v283 = *ptr6;
    int v284 = v21;
    int* ptr63 = &v20;
    jump v284;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408FFB(int param0, int param1, int param2, unsigned int param3, unsigned int param4, int param5, int param6) {
    unsigned int v0;
    int v1;
    int result;
    int v2;
    int v3 = v2;
    unsigned int v4 = param3;
    if(!(*(char*)(param1 + 12) & 0x2)) {
        sub_406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3251);
    }
    unsigned int v5 = !param4 ? *(unsigned int*)(param1 + 36): *(unsigned int*)(param1 + 32);
    if(!v4 || v5 <= v4) {
        result = sub_408EB9(param0, param1, param2, (int)param4, param6);
    }
    else {
        if(v5 <= v4) {
            sub_406B6C("dtorCnt < varCount", "xx.cpp", 3309);
        }
        unsigned int v6 = v4;
        int* ptr0 = (int*)((unsigned int)*(short*)(param1 + 18) + param1);
        int* ptr1 = (int*)((unsigned int)*(short*)(param1 + 18) + param1);
        int* ptr2 = ptr0;
        if(param4) {
            while(1) {
                int v7 = *ptr1;
                if(!v7) {
                    goto loc_4090FA;
                }
                else {
                    if(!(*(char*)(v7 + 4) & 0x1)) {
                        sub_406B6C("IS_STRUC(blType->tpMask)", "xx.cpp", 3352);
                    }
                    if((*(char*)(v7 + 12) & 0x2)) {
                        unsigned int v8 = *(unsigned int*)(v7 + 36);
                        if(v8 >= v6) {
                            return sub_408FB0(param0, param2, (int)(ptr1 + 3), (int)ptr2, (int)v6, 1, param5, param6);
                        }
                        v6 -= v8;
                    }
                    ptr1 += 3;
                }
            }
        }
        else {
        loc_4090FA:
            int* ptr3 = (int*)((unsigned int)*(short*)(param1 + 16) + param1);
            int* ptr4 = (int*)((unsigned int)*(short*)(param1 + 16) + param1);
            int* ptr5 = ptr3;
        loc_409106:
            do {
                v1 = *ptr4;
                if(v1) {
                    if(!(*(char*)(v1 + 4) & 0x1)) {
                        sub_406B6C("IS_STRUC(blType->tpMask)", "xx.cpp", 3391);
                    }
                    if(!(*(char*)(v1 + 12) & 0x2)) {
                        ptr4 += 3;
                        goto loc_409106;
                    }
                    else {
                        unsigned int v9 = *(unsigned int*)(v1 + 36);
                        if(v9 < v6) {
                            v6 -= v9;
                            ptr4 += 3;
                            goto loc_409106;
                        }
                        else {
                            result = sub_408FB0(param0, param2, (int)(ptr4 + 3), (int)ptr5, (int)v6, 0, param5, param6);
                        }
                    }
                    if(param4) {
                        result = sub_408FB0(param0, param2, (int)ptr1, (int)ptr2, 0, 1, param5, param6);
                    }
                    return result;
                }
            }
            while(v1);
            int* ptr6 = (int*)((unsigned int)*(short*)(param1 + 46) + param1);
            int* ptr7 = (int*)((unsigned int)*(short*)(param1 + 46) + param1);
            while(1) {
                int v10 = *ptr6;
                if(!v10) {
                    sub_406B6C("memType", "xx.cpp", 3429);
                }
                v0 = 1;
                if((*(char*)(v10 + 5) & 0x4)) {
                    v0 = *(unsigned int*)(v10 + 12);
                    v10 = *(int*)(v10 + 8);
                }
                if(!(*(char*)(v10 + 12) & 0x2)) {
                    sub_406B6C("memType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3443);
                }
                unsigned int v11 = (unsigned int)(*(int*)(v10 + 32) * v0);
                if(v11 >= v6) {
                    break;
                }
                else {
                    v6 -= v11;
                    ptr6 += 2;
                }
            }
            do {
                int v12 = *(ptr6 + 1) + param0;
                int v13 = *ptr6;
                v0 = 1;
                if((*(char*)(v13 + 5) & 0x4)) {
                    v0 = *(unsigned int*)(v13 + 12);
                    v13 = *(int*)(v13 + 8);
                }
                if(v0 > 1) {
                    int v14 = param6;
                    int v15 = param5;
                    unsigned int v16 = v6;
                    sub_4092AB(v12, *ptr6, (int)v6, param5, param6);
                }
                else {
                    sub_408FFB(v12, v13, 0, (int)v6, 1, param5, param6);
                }
                v6 = 0;
                ptr6 -= 2;
            }
            while(ptr6 >= ptr7);
            result = sub_408FB0(param0, param2, (int)ptr4, (int)ptr5, 0, 0, param5, param6);
            if(param4) {
                result = sub_408FB0(param0, param2, (int)ptr1, (int)ptr2, 0, 1, param5, param6);
            }
        }
    }
    return result;
}

int sub_4092AB(int param0, int param1, unsigned int param2, int param3, int param4) {
    int v0;
    int v1 = v0;
    if(!(*(char*)(param1 + 5) & 0x4)) {
        sub_406B6C("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xdcc);
    }
    if(!(*(char*)(*(int*)(param1 + 8) + 12) & 0x2)) {
        sub_406B6C("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xdcd);
    }
    unsigned int v2 = *(unsigned int*)(param1 + 12);
    int v3 = *(int*)(param1 + 8);
    unsigned int v4 = *(unsigned int*)(v3 + 32);
    if(!v4) {
        sub_406B6C("vdtCount", "xx.cpp", 0xdd6);
    }
    if(!param2) {
        param2 = v4 * v2;
    }
    unsigned int v5 = param2 / v4;
    if(v5 > v2 && v2) {
        sub_406B6C("etdCount <= elemCount || elemCount == 0", "xx.cpp", 0xddf);
    }
    int result = (int)(v4 * v5);
    param2 -= result;
    if(v4 < param2) {
        result = sub_406B6C("dtrCount <= vdtCount", "xx.cpp", 3552);
    }
    int v6 = *(int*)v3 * v5 + param0;
    if(param2) {
        result = sub_408FFB(v6, v3, 0, param2, 1, param3, param4);
    }
    while(1) {
        unsigned int v7 = v5;
        --v5;
        if(!v7) {
            return result;
        }
        v6 -= *(int*)v3;
        result = sub_408FFB(v6, v3, 0, v4, 1, param3, param4);
    }
    return result;
}

int sub_409456(unsigned int* param0, unsigned int param1, int param2, int param3) {
    void* ptr0;
    int v0;
    unsigned int v1;
    int v2;
    int* ptr1;
    unsigned int* ptr2;
    int v3;
    int v4;
    unsigned int* ptr3;
    int result;
    int v5;
    unsigned int* ptr4;
    int v6 = v5;
    unsigned int v7 = 0;
    if(!param0) {
        result = 0;
    }
    else {
        int v8 = param2;
        unsigned int v9 = *(unsigned int*)(v8 + 28) - param1;
        unsigned int* ptr5 = param0;
        if((*(char*)(ptr5 + 1) & 0x20)) {
            unsigned int* ptr6 = param0;
            if(!(*(char*)(ptr6 + 1) & 0x11)) {
                sub_406B6C("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)", "xx.cpp", 3704);
            }
            unsigned int* ptr7 = param0;
            int v10 = *ptr7;
            if(!(*(char*)(v10 + 4) & 0x10)) {
                sub_406B6C("dttPtr->dttType->tpMask & TM_IS_PTR", "xx.cpp", 3708);
            }
            unsigned int* ptr8 = param0;
            int v11 = *ptr8;
            int v12 = *(int*)(v11 + 8);
            if(!(*(char*)(v12 + 12) & 0x2)) {
                sub_406B6C("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3709);
            }
            unsigned int* ptr9 = param0;
            int v13 = *ptr9;
            int v14 = *(int*)(v13 + 8);
            v9 = *(unsigned int*)(v14 + 32);
        }
        unsigned int* ptr10 = param0;
        if((*(char*)((char*)ptr10 + 5) & 0x1)) {
            if(!(*(char*)(*param0 + 4) & 0x2) || !(*(char*)(*param0 + 3) & 0x2)) {
                sub_406B6C("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)", "xx.cpp", 3723);
            }
            result = *(int*)(*param0 + 9);
        }
        else {
            if((int)v9 <= 0) {
                unsigned int* ptr11 = param0;
                if(*(char*)((char*)ptr11 + 5) & 0x4) {
                    goto loc_409570;
                }
                else if((unsigned int)(*(int*)(param0 + 1) & 0x3) == 3) {
                    ptr3 = param0;
                    v7 = 1;
                    goto loc_409693;
                }
            }
            else {
            loc_409570:
                ptr3 = param0;
                while(*ptr3) {
                    if((*(char*)((char*)ptr3 + 5) & 0x10)) {
                        int v15 = *ptr3;
                        if(!(*(char*)(v15 + 5) & 0x4)) {
                            sub_406B6C("dtvtPtr->dttType->tpMask & TM_IS_ARRAY", "xx.cpp", 3799);
                        }
                        int v16 = *ptr3;
                        v4 = *(int*)(v16 + 8);
                        v3 = *(int*)(v16 + 8);
                    }
                    else {
                        v4 = *ptr3;
                        v3 = *ptr3;
                    }
                    int v17 = 1;
                    int v18 = v3;
                    if((*(char*)(v18 + 4) & 0x10)) {
                        int v19 = v3;
                        v4 = *(int*)(v19 + 8);
                        v3 = *(int*)(v19 + 8);
                        int v20 = *(int*)(v19 + 8);
                        if((*(char*)(v20 + 4) & 0x2)) {
                            int v21 = v3;
                            if((*(char*)(v21 + 12) & 0x20) && (*(char*)(ptr3 + 1) & 0x8)) {
                                int v22 = 0;
                                int v23 = v3;
                                if(!(*(char*)(v23 + 12) & 0x2)) {
                                    sub_406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3831);
                                }
                                if((*(char*)(ptr3 + 1) & 0x4)) {
                                    int v24 = param3;
                                    ptr2 = (unsigned int*)(*(int*)(ptr3 + 2) + v24);
                                }
                                else {
                                    ptr2 = *(ptr3 + 2);
                                }
                                unsigned int* ptr12 = ptr2;
                                ptr2 = *ptr12;
                                if((*(char*)((char*)ptr3 + 5) & 0x10)) {
                                    v22 = *(int*)(ptr12 + 1);
                                }
                                if((*(char*)(ptr3 + 1) & 0x40)) {
                                    ++ptr2;
                                }
                                ptr2 = (unsigned int*)sub_4093CF((int)ptr2, (int)&v3, v22);
                                v4 = v3;
                            }
                        }
                    }
                    int v25 = v3;
                    if((*(char*)(v25 + 5) & 0x4)) {
                        v17 = *(int*)(v4 + 12);
                        v4 = *(int*)(v4 + 8);
                    }
                    if(!(*(char*)(v4 + 12) & 0x2)) {
                        sub_406B6C("elemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xf22);
                    }
                    ptr1 = (int*)(*(int*)(v4 + 32) * v17);
                    char v26 = (unsigned int)ptr1 < v9;
                    if(!v26) {
                        goto loc_409693;
                    }
                    else {
                        v9 -= (int)ptr1;
                        ptr3 += 3;
                    }
                }
                ptr3 -= 3;
            loc_409693:
                do {
                    int v27 = *ptr3;
                    int v28 = *(int*)(ptr3 + 1);
                    int v29 = v28 & 0x4 ? *(int*)(ptr3 + 2) + param3: *(int*)(ptr3 + 2);
                    if((v28 & 0x1000)) {
                        if(!(*(char*)(v27 + 5) & 0x4)) {
                            sub_406B6C("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 3922);
                        }
                        v27 = *(int*)(v27 + 8);
                    }
                    if((v28 & 0x11)) {
                        ptr1 = NULL;
                        if(!(*(char*)(v27 + 4) & 0x10)) {
                            sub_406B6C("varType->tpMask & TM_IS_PTR", "xx.cpp", 3932);
                        }
                        v27 = *(int*)(v27 + 8);
                        int v30 = v29;
                        v29 = *(int*)v30;
                        if((v28 & 0x1000)) {
                            ptr1 = *(unsigned int*)(v30 + 4);
                        }
                        v2 = v29;
                        if((unsigned int)(v28 & 0x48) == 64) {
                            v29 += 4;
                        }
                        if((*(char*)(v27 + 4) & 0x2) && (*(char*)(v27 + 12) & 0x20) && (v28 & 0x8)) {
                            v29 = sub_4093CF(v29, (int)&v27, (int)ptr1);
                            v2 = v29;
                        }
                    }
                    if(!v7) {
                        if((v28 & 0x400)) {
                            if(*(short*)(v27 + 16)) {
                                ptr1 = (int*)((unsigned int)*(short*)(v27 + 16) + v27);
                                if(!ptr1) {
                                    sub_406B6C(&gvar_40C475, "xx.cpp", 3986);
                                }
                                v1 = *(unsigned int*)(*ptr1 + 32);
                            }
                            else {
                                v1 = 0;
                            }
                            v0 = v1 <= v9 ? 1: 2;
                        }
                        else {
                            v0 = 0;
                        }
                        if((*(char*)(v27 + 5) & 0x4)) {
                            sub_4092AB(v29, v27, v9, param3, param2);
                        }
                        else {
                            sub_408FFB(v29, v27, v0, v9, 1, param3, param2);
                        }
                        if((v28 & 0x400) && (*(char*)(param2 + 32) & 0x1) && *(char*)(param2 + 32) != 0xff) {
                            *(unsigned int*)(*(int*)v29 - 8)();
                        }
                    }
                    if((unsigned int)(v28 & 0x3) == 3) {
                        if((unsigned int)(v28 & 0x48) == 72) {
                            v2 -= 4;
                        }
                        if((*(char*)(v27 + 5) & 0x4)) {
                            int v31 = v27;
                            v27 = *(int*)(v31 + 8);
                            if(*(int*)(*(int*)(v31 + 8) + 28)) {
                                void* ptr13 = (void*)*(short*)(v27 + 26);
                                ptr0 = (void*)*(short*)(v27 + 26);
                                sub_40810E(v2, *(int*)(v27 + 28), (int)ptr13);
                            }
                            else {
                                sub_40121C(v2);
                            }
                        }
                        else if(*(int*)(v27 + 20)) {
                            void* ptr14 = (void*)*(short*)(v27 + 24);
                            ptr0 = (void*)*(short*)(v27 + 24);
                            sub_40810E(v2, *(int*)(v27 + 20), (int)ptr14);
                        }
                        else {
                            sub_40120C(v2);
                        }
                    }
                    v9 = 0;
                    ptr4 = ptr3;
                    ptr3 -= 3;
                }
                while(ptr4 > param0);
            }
            result = 0;
        }
    }
    return result;
}

int sub_4098DA(unsigned int param0) {
    int v0;
    int v1 = v0;
    if(param0 == -1) {
        return -1;
    }
    unsigned char* ptr0 = sub_40231C(**(unsigned int*)(param0 + 4) != 0x25ff ? (unsigned char*)(*(int*)(param0 + 4) - 8): (unsigned char*)(**(unsigned int*)(*(int*)(param0 + 4) + 2) - 8), "**BCCxh1", 8);
    return ptr0 ? -1: (unsigned int)*(short*)(param0 + 16);
}
