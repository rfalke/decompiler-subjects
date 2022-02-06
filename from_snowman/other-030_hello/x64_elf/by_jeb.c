
// Stale decompilation - Refresh this view to re-decompile this code
long long __tls_callback_0(long long param0, long long param1, long long param2, long long param3) {
    if(gvar_403050 != 2) {
        gvar_403050 = 2;
    }
    if((unsigned int)param2 != 2 && (unsigned int)param2 == 1) {
        sub_402A90(param3, param2);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long __tls_callback_1(long long param0, long long param1) {
    if((!(unsigned int)param1 || (unsigned int)param1 == 3)) {
        sub_402A90(param0, param1);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long start(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    gvar_407080 = 0;
    sub_402730(param0, param1);
    return sub_401180(param0, param1, v0, v1, v2);
}

long long sub_401180(long long param0, long long param1) {
    char v0;
    char v1;
    unsigned long long v2;
    void* ptr0;
    long long v3;
    size_t v4;
    long long v5;
    long long v6;
    unsigned long long v7;
    char v8;
    char v9;
    short v10;
    char v11;
    char v12;
    char v13;
    char v14;
    char v15;
    char v16;
    size_t v17 = v4;
    unsigned long long v18 = v7;
    long long* ptr1 = &v18;
    char v19 = &v2 == 184L;
    char v20 = (long long)&v13 < 0L;
    char v21 = __parity__((unsigned char)&v2 - 184);
    char v22 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)&v18 ^ 0x90L) ^ (long long)&v13) >>> 4L) & 0x1L);
    char v23 = (unsigned long long)&v18 < 144L;
    char v24 = (long long)(long long*)((long long)(long long*)((long long)&v18 ^ (long long)&v13) & (long long)(long long*)((long long)&v18 ^ 0x90L)) < 0L;
    unsigned int v25 = gvar_407080;
    int v26 = 0;
    long long v27 = 0L;
    char v28 = 1;
    char v29 = 0;
    char v30 = 1;
    char v31 = 0;
    char v32 = 0;
    long long v33 = 13L;
    LPSTARTUPINFOA v34 = &v9;
    char v35 = v25 ? 0: 1;
    char v36 = v25 >= 0x80000000;
    char v37 = __parity__((unsigned char)v25);
    char v38 = 0;
    char v39 = 0;
    long long v40 = (long long)&v9;
    while(v33 != 0L) {
        *(long long*)v40 = 0L;
        v40 += 8L;
        --v33;
    }
    if(!v35) {
        LPSTARTUPINFOA v41 = &v9;
        GetStartupInfoA(&v9);
    }
    long long v42 = *(long long*)(__GS_BASE + (long long)(long long*)0x30);
    unsigned long long v43 = *(unsigned long long*)(v42 + 8L);
    unsigned long long v44 = 0L;
    char v45 = 1;
    char v46 = 0;
    char v47 = 1;
    char v48 = 0;
    char v49 = 0;
    char v50 = gvar_4079C0 == 0L;
    char v51 = (long long)gvar_4079C0 > 0L;
    char v52 = __parity__(0 - (unsigned char)gvar_4079C0);
    char v53 = gvar_4079C0 > 0L;
    char v54 = ((0L - gvar_4079C0) & gvar_4079C0) < 0L;
    char v55 = (((0L - gvar_4079C0) ^ gvar_4079C0) >>> 4L) & 0x1L;
    if(v50 != 0) {
        gvar_4079C0 = v43;
    }
    else {
        v44 = gvar_4079C0;
    }
    long long v56 = 0L;
    char v57 = v44 ? 0: 1;
    char v58 = v44 >= 0x8000000000000000L;
    char v59 = __parity__((unsigned char)v44);
    char v60 = 0;
    char v61 = 0;
    if(!v57) {
        char v62 = v44 == v43;
        char v63 = (long long)v44 > (long long)v43;
        char v64 = __parity__((unsigned char)v43 - (unsigned char)v44);
        char v65 = v44 > v43;
        char v66 = (long long)(((v43 - v44) ^ v43) & (v44 ^ v43)) < 0L;
        char v67 = (((v43 - v44) ^ (v44 ^ v43)) >>> 4L) & 0x1L;
        v56 = 1L;
        if(v62) {
            goto loc_401204;
        }
        else {
            v40 = 34294L;
            long long v68 = 0L;
            char v69 = 1;
            char v70 = 0;
            char v71 = 1;
            char v72 = 0;
            char v73 = 0;
            do {
                long long v74 = 1000L;
                Sleep(1000);
                unsigned long long v75 = 0L;
                char v76 = gvar_4079C0 == 0L;
                char v77 = (long long)gvar_4079C0 > 0L;
                char v78 = __parity__(0 - (unsigned char)gvar_4079C0);
                char v79 = gvar_4079C0 > 0L;
                char v80 = ((0L - gvar_4079C0) & gvar_4079C0) < 0L;
                char v81 = (((0L - gvar_4079C0) ^ gvar_4079C0) >>> 4L) & 0x1L;
                if(v76 != 0) {
                    gvar_4079C0 = v43;
                }
                else {
                    v75 = gvar_4079C0;
                }
                char v82 = v75 ? 0: 1;
                char v83 = v75 >= 0x8000000000000000L;
                char v84 = __parity__((unsigned char)v75);
                char v85 = 0;
                char v86 = 0;
                if(v82) {
                    v56 = 0L;
                    char v87 = 1;
                    char v88 = 0;
                    char v89 = 1;
                    char v90 = 0;
                    char v91 = 0;
                    goto loc_401204;
                }
                else {
                    v12 = v75 == v43;
                    char v92 = (long long)v75 > (long long)v43;
                    char v93 = __parity__((unsigned char)v43 - (unsigned char)v75);
                    char v94 = v75 > v43;
                    char v95 = (long long)(((v43 - v75) ^ v43) & (v75 ^ v43)) < 0L;
                    char v96 = (((v43 - v75) ^ (v75 ^ v43)) >>> 4L) & 0x1L;
                }
            }
            while(v12);
            unsigned int v97 = gvar_4079B8;
            int v98 = 0;
            v56 = 1L;
            char v99 = v97 == 1;
            char v100 = (int)v97 < 1;
            char v101 = __parity__((unsigned char)v97 - 1);
            char v102 = v97 < 1;
            char v103 = (((v97 - 1) ^ v97) & (v97 ^ 0x1)) < 0;
            v1 = (((v97 - 1) ^ (v97 ^ 0x1)) >>> 4) & 0x1;
            if(!v99) {
                goto loc_401213;
            }
            else {
                goto loc_401434;
            }
        }
    }
    else {
    loc_401204:
        unsigned int v104 = gvar_4079B8;
        int v105 = 0;
        char v106 = gvar_4079B8 == 1;
        char v107 = (int)v104 < 1;
        char v108 = __parity__((unsigned char)v104 - 1);
        char v109 = v104 < 1;
        char v110 = (((v104 - 1) ^ v104) & (v104 ^ 0x1)) < 0;
        v1 = (((v104 - 1) ^ (v104 ^ 0x1)) >>> 4) & 0x1;
        if(v106) {
        loc_401434:
            long long v111 = 31L;
            /*NO_RETURN*/ →msvcrt.dll!_amsg_exit(31);
        }
    loc_401213:
        unsigned int v112 = gvar_4079B8;
        int v113 = 0;
        char v114 = gvar_4079B8 ? 0: 1;
        char v115 = v112 >= 0x80000000;
        char v116 = __parity__((unsigned char)v112);
        char v117 = 0;
        char v118 = 0;
        if(!v114) {
            gvar_407000 = 1;
        }
        else {
            long long v119 = &gvar_409030;
            long long v120 = &gvar_409018;
            gvar_4079B8 = 1;
            →msvcrt.dll!_initterm((_PVFV*)&gvar_409018, (_PVFV*)&gvar_409030);
        }
        unsigned int v121 = gvar_4079B8;
        int v122 = 0;
        char v123 = gvar_4079B8 == 1;
        char v124 = (int)v121 < 1;
        char v125 = __parity__((unsigned char)v121 - 1);
        char v126 = v121 < 1;
        char v127 = (((v121 - 1) ^ v121) & (v121 ^ 0x1)) < 0;
        v1 = (((v121 - 1) ^ (v121 ^ 0x1)) >>> 4) & 0x1;
        if(v123) {
            long long v128 = &gvar_409010;
            long long v129 = &gvar_409000;
            →msvcrt.dll!_initterm((_PVFV*)&gvar_409000, (_PVFV*)&gvar_409010);
            gvar_4079B8 = 2;
        }
    }
    char v130 = (unsigned int)v56 ? 0: 1;
    char v131 = (unsigned int)v56 < 0;
    char v132 = __parity__((unsigned char)v56);
    char v133 = 0;
    char v134 = 0;
    if(v130) {
        long long v135 = 0L;
        char v136 = 1;
        char v137 = 0;
        char v138 = 1;
        char v139 = 0;
        char v140 = 0;
        unsigned long long v141 = gvar_4079C0;
        gvar_4079C0 = 0L;
        unsigned long long v142 = v141;
    }
    unsigned long long v143 = gvar_403000;
    char v144 = v143 ? 0: 1;
    char v145 = v143 >= 0x8000000000000000L;
    char v146 = __parity__((unsigned char)v143);
    char v147 = 0;
    char v148 = 0;
    if(!v144) {
        long long v149 = 0L;
        char v150 = 1;
        char v151 = 0;
        char v152 = 1;
        char v153 = 0;
        char v154 = 0;
        long long v155 = 2L;
        long long v156 = 0L;
        char v157 = 1;
        char v158 = 0;
        char v159 = 1;
        char v160 = 0;
        char v161 = 0;
        long long v162 = v143{__tls_callback_0}(v40, v56, 2L, 0L);
    }
    BOOL v163 = sub_401F60(v40, v56);
    long long v164 = &gvar_401A30;
    LPTOP_LEVEL_EXCEPTION_FILTER v165 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&gvar_401A30);
    gvar_4070A0 = v165;
    long long v166 = sub_401920(v3, v5);
    HMODULE v167 = sub_402590(v3, v5, v6);
    long long v168 = "_set_invalid_parameter_handler";
    HMODULE hModule = v167;
    FARPROC v169 = GetProcAddress(hModule, "_set_invalid_parameter_handler");
    char v170 = v169 ? 0: 1;
    char v171 = (long long)v169 < 0L;
    char v172 = __parity__((unsigned char)v169);
    char v173 = 0;
    char v174 = 0;
    if(!v170) {
        long long v175 = &gvar_401000;
        INT_PTR v176 = v169(&gvar_401000);
    }
    sub_402660();
    unsigned int v177 = gvar_407080;
    int v178 = 0;
    char v179 = gvar_407080 ? 0: 1;
    char v180 = v177 >= 0x80000000;
    char v181 = __parity__((unsigned char)v177);
    char v182 = 0;
    char v183 = 0;
    if(!v179) {
        long long v184 = 34532L;
        int v185 = 0;
        int v186 = 0;
        char v187 = 1;
        char v188 = 0;
        char v189 = 1;
        char v190 = 0;
        char v191 = 0;
        unsigned char* ptr2 = *(unsigned long long*)0x86E4;
        while(1) {
            unsigned char v192 = *ptr2;
            long long v193 = 0L;
            char v194 = *ptr2 == 32;
            char v195 = (char)v192 < 32;
            char v196 = __parity__(v192 - 32);
            char v197 = v192 < 32;
            char v198 = (((v192 - 32) ^ v192) & (v192 ^ 0x20)) < 0;
            v1 = (((v192 - 32) ^ (v192 ^ 0x20)) >>> 4) & 0x1;
            if(!v194 && v195 == v198) {
                long long v199 = (unsigned long long)v185;
                int v200 = v185 ^ 0x1;
                int v201 = 0;
                char v202 = v192 == 34;
                char v203 = (char)v192 < 34;
                char v204 = __parity__(v192 - 34);
                char v205 = v192 < 34;
                char v206 = (((v192 - 34) ^ v192) & (v192 ^ 0x22)) < 0;
                char v207 = (((v192 - 34) ^ (v192 ^ 0x22)) >>> 4) & 0x1;
                v185 = v202 ? v200: v185;
                v186 = 0;
                goto loc_4012C8;
            }
            else {
                v0 = v192 ? 0: 1;
                char v208 = v192 >= 128;
                char v209 = __parity__(v192);
                char v210 = 0;
                char v211 = 0;
            }
            if(v0) {
                goto loc_4012F4;
            }
            else {
                char v212 = (unsigned char)v185 ? 0: 1;
                char v213 = (unsigned char)v185 < 0;
                char v214 = __parity__((unsigned char)v185);
                char v215 = 0;
                char v216 = 0;
                if(v212) {
                    break;
                }
                else {
                loc_4012C8:
                    unsigned char* ptr3 = ptr2;
                    ++ptr2;
                    char v217 = ptr2 ? 0: 1;
                    char v218 = (long long)ptr2 < 0L;
                    char v219 = __parity__((unsigned char)ptr2);
                    char v220 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr3 ^ 0x1L) ^ (long long)ptr2) >>> 4L) & 0x1L);
                    char v221 = (unsigned long long)ptr3 >= 18446744073709551615L;
                    char v222 = (long long)(long long*)((long long)(long long*)((long long)ptr2 ^ (long long)ptr3) & (long long*)~(long long)(long long*)((long long)ptr3 ^ 0x1L)) < 0L;
                }
            }
        }
        do {
            unsigned char* ptr4 = ptr2;
            ++ptr2;
            char v223 = ptr2 ? 0: 1;
            char v224 = (long long)ptr2 < 0L;
            char v225 = __parity__((unsigned char)ptr2);
            char v226 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr4 ^ 0x1L) ^ (long long)ptr2) >>> 4L) & 0x1L);
            char v227 = (unsigned long long)ptr4 >= 18446744073709551615L;
            char v228 = (long long)(long long*)((long long)(long long*)((long long)ptr2 ^ (long long)ptr4) & (long long*)~(long long)(long long*)((long long)ptr4 ^ 0x1L)) < 0L;
            unsigned char v229 = *ptr2;
            long long v230 = 0L;
            char v231 = *ptr2 == 32;
            char v232 = (char)v229 < 32;
            char v233 = __parity__(v229 - 32);
            char v234 = v229 < 32;
            char v235 = (((v229 - 32) ^ v229) & (v229 ^ 0x20)) < 0;
            v1 = (((v229 - 32) ^ (v229 ^ 0x20)) >>> 4) & 0x1;
            if(!v231 && v232 == v235) {
                break;
            }
            else {
                v8 = v229 ? 0: 1;
                char v236 = v229 >= 128;
                char v237 = __parity__(v229);
                char v238 = 0;
                char v239 = 0;
            }
        }
        while(v8);
    loc_4012F4:
        v179 = v11 & 0x1 ? 0: 1;
        v180 = (v11 & 0x1) < 0;
        v181 = __parity__(v11 & 0x1);
        v182 = 0;
        v183 = 0;
        long long v240 = &MZHeader;
        gvar_407990 = ptr2;
        long long v241 = 10L;
        gvar_4079A0 = &MZHeader;
        if(!v179) {
            v241 = (unsigned long long)v10;
        }
        gvar_407998 = (unsigned int)v241;
    }
    long long v242 = (long long)gvar_407004;
    long long v243 = (unsigned long long)(gvar_407004 + 1);
    unsigned long long v244 = (unsigned long long)(gvar_407004 + 1) | ((unsigned long long)((v243 >>> 31L) & 0x1L ? -1: 0) << 32);
    unsigned long long v245 = (unsigned long long)(gvar_407004 + 1) | ((unsigned long long)((v243 >>> 31L) & 0x1L ? -1: 0) << 32);
    size_t _Size = (size_t)(v244 * 8L);
    char v246 = (v245 >>> 61L) & 0x1L;
    char v247 = 0;
    char v248 = _Size ? 0: 1;
    char v249 = _Size >= 0x8000000000000000L;
    char v250 = __parity__((unsigned char)_Size);
    void* ptr5 = →msvcrt.dll!malloc(_Size);
    void* ptr6 = ptr5;
    long long v251 = 0L;
    char v252 = (unsigned int)v242 ? 0: 1;
    char v253 = (unsigned int)v242 < 0;
    char v254 = __parity__((unsigned char)v242);
    char v255 = 0;
    char v256 = 0;
    long long v257 = gvar_407008;
    if(!v252 && v253 == 0) {
        v43 = 0L;
        char v258 = 1;
        char v259 = 0;
        char v260 = 1;
        char v261 = 0;
        char v262 = 0;
        do {
            char* _Str = *(char**)(v43 * 8L + v257);
            size_t v263 = →msvcrt.dll!strlen(_Str);
            long long v264 = (unsigned long long)((unsigned int)v263 + 1);
            v4 = (unsigned long long)((unsigned int)v263 + 1) | ((unsigned long long)((v264 >>> 31L) & 0x1L ? -1: 0) << 32);
            size_t _Size1 = (unsigned long long)((unsigned int)v263 + 1) | ((unsigned long long)((v264 >>> 31L) & 0x1L ? -1: 0) << 32);
            void* ptr7 = →msvcrt.dll!malloc(_Size1);
            *(void**)(v43 * 8L + (long long)ptr6) = ptr7;
            void* _Src = *(void**)(v43 * 8L + v257);
            size_t _Size2 = v4;
            void* _Dst = ptr7;
            v245 = v43;
            ++v43;
            char v265 = v43 ? 0: 1;
            char v266 = v43 >= 0x8000000000000000L;
            char v267 = __parity__((unsigned char)v43);
            char v268 = (((v245 ^ 0x1L) ^ v43) >>> 4L) & 0x1L;
            char v269 = v245 >= 18446744073709551615L;
            char v270 = (long long)((v43 ^ v245) & ~(v245 ^ 0x1L)) < 0L;
            void* ptr8 = →msvcrt.dll!memcpy(_Dst, _Src, _Size2);
            v15 = (unsigned int)v43 == (unsigned int)v242;
            v14 = (unsigned int)v43 > (unsigned int)v242;
            char v271 = __parity__((unsigned char)v242 - (unsigned char)v43);
            char v272 = (unsigned int)v43 > (unsigned int)v242;
            v16 = ((((unsigned int)v242 - (unsigned int)v43) ^ (unsigned int)v242) & ((unsigned int)v43 ^ (unsigned int)v242)) < 0;
            v1 = ((((unsigned int)v242 - (unsigned int)v43) ^ ((unsigned int)v43 ^ (unsigned int)v242)) >>> 4) & 0x1;
        }
        while(!v15 && v14 == v16);
        v242 = (long long)(unsigned int)v242;
        v251 = v242 * 8L;
    }
    *(long long*)(v251 + (long long)ptr6) = 0L;
    gvar_407008 = ptr6;
    int v273 = sub_402710();
    unsigned long long v274 = gvar_407010;
    long long v275 = 34452L;
    long long v276 = (unsigned long long)gvar_407004;
    *(unsigned long long*)0x8694 = v274;
    unsigned long long v277 = gvar_407010;
    unsigned long long v278 = gvar_407008;
    long long result = sub_4014F0();
    unsigned int v279 = gvar_40701C;
    int v280 = 0;
    gvar_407018 = (unsigned int)result;
    char v281 = v279 ? 0: 1;
    char v282 = (int)v279 < 0;
    char v283 = __parity__((unsigned char)v279);
    char v284 = 0;
    char v285 = 0;
    if(v281) {
        int _Code = (int)result;
        int v286 = 0;
        long long* ptr9 = &ptr0;
        /*NO_RETURN*/ →msvcrt.dll!exit(_Code);
    }
    if(!gvar_407000) {
        →msvcrt.dll!_cexit();
        result = (long long)gvar_407018;
    }
    return result;
}

long long sub_4014F0() {
    sub_402710();
    long long v0 = →libstdc++-6.dll!_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc();
    →libstdc++-6.dll!_ZNSolsEPFRSoS_E();
    return 0L;
}

long long sub_40152A() {
    return →libstdc++-6.dll!_ZNSt8ios_base4InitD1Ev();
}

long long sub_401545(long long param0, long long param1) {
    long long result;
    if((unsigned int)param0 == 1 && (unsigned int)param1 == 0xffff) {
        →libstdc++-6.dll!_ZNSt8ios_base4InitC1Ev();
        result = sub_401760();
    }
    return result;
}

long long sub_401581() {
    return sub_401545(1L, 0xffffL);
}

_onexit_t sub_4016B0(_onexit_t param0) {
    _onexit_t _Func;
    unsigned long long v0 = (unsigned long long)sub_401690((long long)gvar_4079A8);
    unsigned long long v1 = v0;
    if(v0 != -1L) {
        →msvcrt.dll!_lock(8L);
        unsigned long long v2 = (unsigned long long)sub_401690((long long)gvar_4079A8);
        unsigned long long v3 = gvar_4079B0;
        v1 = v2;
        long long v4 = sub_401690((long long)v3);
        _onexit_t result = (_onexit_t)→msvcrt.dll!__dllonexit((long long)_Func, (long long)&v1, (long long)&v4);
        unsigned long long v5 = (unsigned long long)sub_4016A0((long long)v1);
        gvar_4079A8 = v5;
        unsigned long long v6 = (unsigned long long)sub_4016A0(v4);
        gvar_4079B0 = v6;
        →msvcrt.dll!_unlock(8L);
        return result;
    }
    return _onexit(_Func);
}

long long sub_401920(long long param0, long long param1) {
    long long v0;
    long long v1;
    int v2 = sub_402480();
    long long result = (unsigned long long)gvar_4070A8;
    if(v2 && !(unsigned int)result) {
        gvar_4070A8 = 1;
        char* ptr0 = sub_4022F0(param0, param1, v1, ".pdata");
        result = 1L;
        if(!ptr0) {
            long long v3 = 48L;
            unsigned long long* ptr1 = (unsigned long long*)&gvar_4070C0;
            int* ptr2 = (int*)&gvar_4070C0;
            while(v3 != 0L) {
                *ptr1 = NULL;
                ++ptr1;
                --v3;
            }
            unsigned long long* ptr3 = (unsigned long long*)&gvar_407240;
            v3 = 32L;
            do {
                *ptr3 = NULL;
                ++ptr3;
                --v3;
            }
            while(v3 == 0L);
            unsigned long long v4 = 0L;
            do {
                unsigned long long v5 = sub_402400(v4);
                if(v5) {
                    *(unsigned char*)(v4 * 8L + (long long)&gvar_407240) = 9;
                    *(int*)(v4 * 8L + (long long)&gvar_407244) = &gvar_401780 - (unsigned int)v2;
                    int v6 = *(int*)(v5 + 12L);
                    *ptr2 = *(int*)(v5 + 12L);
                    int v7 = *(int*)(v5 + 8L) + v6;
                    unsigned long long v8 = (unsigned long long)(v4 * 8L + &gvar_407240);
                    ++v4;
                    *(ptr2 + 2) = (unsigned int)v8 - (unsigned int)v2;
                    *(ptr2 + 1) = v7;
                    ptr2 += 3;
                }
                else {
                    if(v4) {
                        v0 = (unsigned long long)(unsigned int)v4;
                        RtlAddFunctionTable((PRUNTIME_FUNCTION)&gvar_4070C0, (DWORD)v0, (DWORD64)v2);
                    }
                    result = 1L;
                }
                return result;
            }
            while(v4 == 32L);
            v0 = 32L;
            RtlAddFunctionTable((PRUNTIME_FUNCTION)&gvar_4070C0, (DWORD)v0, (DWORD64)v2);
            return 1L;
        }
    }
    return result;
}

long long sub_401D80(long long param0, long long param1, long long param2, char* param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9) {
    char v0;
    char v1;
    void* ptr0;
    long long v2;
    long long v3 = v2;
    long long* ptr1 = &v3;
    char v4 = &v0 == 72L;
    char v5 = (long long)&v1 < 0L;
    char v6 = __parity__((unsigned char)&v0 - 72);
    char v7 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)&v3 ^ 0x38L) ^ (long long)&v1) >>> 4L) & 0x1L);
    char v8 = (unsigned long long)&v3 < 56L;
    char v9 = (long long)(long long*)((long long)(long long*)((long long)&v3 ^ (long long)&v1) & (long long)(long long*)((long long)&v3 ^ 0x38L)) < 0L;
    va_list v10 = &param7;
    char* ptr2 = param3;
    param7 = param2;
    param8 = param4;
    param9 = param5;
    va_list v11 = &param7;
    long long v12 = →msvcrt.dll!__iob_func();
    long long v13 = "Mingw-w64 runtime failure:\n";
    FILE* _Stream = (FILE*)(v12 + 96L);
    long long v14 = 27L;
    long long v15 = 1L;
    size_t v16 = →msvcrt.dll!fwrite("Mingw-w64 runtime failure:\n", 1L, 27L, _Stream);
    va_list v17 = v11;
    long long v18 = →msvcrt.dll!__iob_func();
    FILE* _Stream1 = (FILE*)(v18 + 96L);
    char* _Format = ptr2;
    va_list _ArgList = v17;
    int v19 = →msvcrt.dll!vfprintf(_Stream1, _Format, _ArgList);
    long long* ptr3 = &ptr0;
    /*NO_RETURN*/ →msvcrt.dll!abort();
}

void sub_401DF0(long long param0, long long param1, long long param2, long long param3, long long param4) {
    char v0;
    char v1;
    long long v2;
    unsigned long long v3;
    long long v4;
    unsigned int v5;
    int* ptr0;
    long long v6;
    LPVOID lpAddress1;
    long long v7;
    long long v8;
    long long v9;
    SIZE_T dwSize;
    long long v10;
    void* ptr1;
    long long v11;
    int* ptr2 = ptr0;
    long long v12 = v8;
    long long v13 = v9;
    char v14 = param4 ? 0: 1;
    char v15 = param4 < 0L;
    char v16 = __parity__((unsigned char)param4);
    char v17 = 0;
    char v18 = 0;
    long long v19 = param3;
    long long v20 = param2;
    long long v21 = param4;
    if(v14) {
        return;
    }
    unsigned int v22 = gvar_407360;
    int v23 = 0;
    char v24 = gvar_407360 ? 0: 1;
    char v25 = v22 >= 0x80000000;
    char v26 = __parity__((unsigned char)v22);
    char v27 = 0;
    char v28 = 0;
    if(v24 || v25 != 0) {
        v2 = 0L;
        char v29 = 1;
        char v30 = 0;
        char v31 = 1;
        char v32 = 0;
        char v33 = 0;
        goto loc_401E6A;
    }
    else {
        v3 = gvar_407358;
        v2 = 0L;
        char v34 = 1;
        char v35 = 0;
        char v36 = 1;
        char v37 = 0;
        char v38 = 0;
    }
    do {
        unsigned long long v39 = *(unsigned long long*)(v3 + 8L);
        char v40 = v39 == v19;
        char v41 = (long long)v39 > v19;
        char v42 = __parity__((unsigned char)v19 - (unsigned char)v39);
        char v43 = v39 > (unsigned long long)v19;
        char v44 = (long long)(((unsigned long long)(v19 - v39) ^ v19) & (v39 ^ v19)) < 0L;
        char v45 = (((unsigned long long)(v19 - v39) ^ (v39 ^ v19)) >>> 4L) & 0x1L;
        if(!v43) {
            long long v46 = *(long long*)(v3 + 16L);
            long long v47 = (unsigned long long)*(int*)(v46 + 8L);
            unsigned long long v48 = v39 + v47;
            char v49 = v48 == v19;
            char v50 = (long long)v48 > v19;
            char v51 = __parity__((unsigned char)v19 - (unsigned char)v48);
            char v52 = v48 > (unsigned long long)v19;
            char v53 = (long long)(((unsigned long long)(v19 - v48) ^ v19) & (v48 ^ v19)) < 0L;
            char v54 = (((unsigned long long)(v19 - v48) ^ (v48 ^ v19)) >>> 4L) & 0x1L;
            if(v52) {
                →msvcrt.dll!memcpy((void*)v19, (void*)v20, (size_t)v21);
                return;
            }
        }
        v2 = (unsigned long long)((unsigned int)v2 + 1);
        v3 += 24L;
        v1 = (unsigned int)v2 == v22;
        char v55 = (unsigned int)v2 < (int)v22;
        char v56 = __parity__((unsigned char)v2 - (unsigned char)v22);
        char v57 = (unsigned int)v2 < v22;
        char v58 = ((((unsigned int)v2 - v22) ^ (unsigned int)v2) & ((unsigned int)v2 ^ v22)) < 0;
        v0 = ((((unsigned int)v2 - v22) ^ ((unsigned int)v2 ^ v22)) >>> 4) & 0x1;
    }
    while(!v1);
loc_401E6A:
    long long v59 = v19;
    unsigned long long v60 = sub_402390(v59);
    char v61 = v60 ? 0: 1;
    char v62 = v60 >= 0x8000000000000000L;
    char v63 = __parity__((unsigned char)v60);
    char v64 = 0;
    char v65 = 0;
    unsigned long long v66 = v60;
    if(!v61) {
        long long v67 = (long long)(unsigned int)v2;
        long long v68 = v67 * 3L;
        long long v69 = v67 * 3L;
        v2 = v68 * 8L;
        char v70 = (v69 >>> 61L) & 0x1L;
        char v71 = 0;
        char v72 = v2 ? 0: 1;
        char v73 = v2 < 0L;
        char v74 = __parity__((unsigned char)v2);
        long long v75 = v2;
        long long v76 = v2;
        ptr0 = (int*)(gvar_407358 + v75);
        char v77 = ptr0 ? 0: 1;
        char v78 = (long long)ptr0 < 0L;
        char v79 = __parity__((unsigned char)ptr0);
        char v80 = (long long*)((long long)(long long*)((long long)(long long*)((gvar_407358 ^ v76) ^ (long long)ptr0) >>> 4L) & 0x1L);
        char v81 = __carry__(gvar_407358, v76);
        char v82 = (long long)(long long*)((long long)(long long*)((long long)ptr0 ^ v76) & ~(gvar_407358 ^ v76)) < 0L;
        *(unsigned long long*)(ptr0 + 4) = v60;
        *ptr0 = 0;
        int v83 = sub_402480();
        long long v84 = (unsigned long long)*(int*)(v66 + 12L);
        long long v85 = 48L;
        void* ptr3 = (void*)v83;
        long long v86 = (long long)(v83 + v84);
        char v87 = v86 ? 0: 1;
        char v88 = v86 < 0L;
        char v89 = __parity__((unsigned char)v86);
        v0 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(v84 ^ (long long)ptr3) ^ v86) >>> 4L) & 0x1L);
        char v90 = __carry__(v84, (long long)ptr3);
        char v91 = (long long)(long long*)((long long)(long long*)(v86 ^ (long long)ptr3) & (long long*)~(long long)(long long*)(v84 ^ (long long)ptr3)) < 0L;
        PMEMORY_BASIC_INFORMATION v92 = &lpAddress1;
        *(long long*)(ptr0 + 2) = v86;
        unsigned long long v93 = gvar_407358;
        LPCVOID lpAddress = *(LPCVOID*)(v93 + v2 + 8L);
        SIZE_T v94 = VirtualQuery(lpAddress, &lpAddress1, 48L);
        v61 = v94 ? 0: 1;
        v62 = v94 >= 0x8000000000000000L;
        v63 = __parity__((unsigned char)v94);
        v64 = 0;
        v65 = 0;
        if(!v61) {
            if(v5 != 4 && v5 != 64) {
                VirtualProtect(lpAddress1, dwSize, 64, (PDWORD)(gvar_407358 + v2));
            }
            ++gvar_407360;
            →msvcrt.dll!memcpy((void*)v19, (void*)v20, (size_t)v21);
            return;
        }
    }
    else {
        long long v95 = "Address %p has no image-section";
        long long v96 = v19;
        long long v97 = /*NO_RETURN*/ sub_401D80(v20, v21, v96, "Address %p has no image-section", param4, v6, v7, v4, v11, v10);
    }
    unsigned long long v98 = gvar_407358;
    long long v99 = (long long)*(int*)(v66 + 8L);
    long long v100 = "  VirtualQuery failed for %d bytes at address %p";
    long long v101 = *(long long*)(v98 + v2 + 8L);
    long long* ptr4 = &ptr1;
    void* ptr5 = (void*)/*NO_RETURN*/ sub_401D80(v20, v21, v99, "  VirtualQuery failed for %d bytes at address %p", v101, v6, v7, v4, v11, v10);
}

BOOL sub_401F60(long long param0, long long param1) {
    long long v0;
    int* ptr0;
    long long v1;
    long long v2;
    long long* ptr1;
    long long v3;
    long long v4;
    SIZE_T v5;
    void* ptr2;
    LPVOID v6;
    char v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    int* ptr3;
    BOOL result;
    long long* ptr4 = &ptr1;
    long long v12 = v8;
    int* ptr5 = ptr3;
    long long* ptr6 = &ptr5;
    char v13 = &v1 == 0x88L;
    char v14 = (long long)&v3 < 0L;
    char v15 = __parity__((unsigned char)&v1 - 0x88);
    char v16 = (unsigned long long)&ptr5 < 96L;
    char v17 = (long long)(long long*)((long long)(long long*)((long long)&ptr5 ^ (long long)&v3) & (long long)(long long*)((long long)&ptr5 ^ 0x60L)) < 0L;
    unsigned int v18 = gvar_407350;
    int v19 = 0;
    if(!gvar_407350) {
        gvar_407350 = 1;
        int v20 = sub_4023D0();
        long long v21 = (long long)(unsigned int)v20;
        long long v22 = v21 * 3L;
        long long v23 = v22 * 8L + 30L;
        long long v24 = v23 & 0xfffffffffffffff0L;
        char v25 = v24 ? 0: 1;
        char v26 = v24 < 0L;
        char v27 = __parity__((unsigned char)v24);
        char v28 = 0;
        char v29 = 0;
        unsigned long long v30 = sub_402B30(v10);
        long long v31 = &gvar_4042A0;
        gvar_407360 = 0;
        char v32 = &v1 == 0x88L;
        char v33 = (long long)&v3 < 0L;
        char v34 = __parity__((unsigned char)&v1 - 0x88);
        char v35 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(v30 ^ (long long)&v3) ^ (long long)&v3) >>> 4L) & 0x1L);
        char v36 = v30 > (unsigned long long)&v3;
        char v37 = 0;
        PMEMORY_BASIC_INFORMATION v38 = &v6;
        gvar_407358 = &v6;
        long long v39 = &gvar_4042A0;
        char v40 = 0;
        char v41 = 0;
        char v42 = 0;
        char v43 = 0;
        char v44 = 0;
        char v45 = 1;
        long long v46 = 0L;
        char v47 = 1;
        char v48 = 0;
        char v49 = 1;
        char v50 = 0;
        char v51 = 0;
        char v52 = 1;
        char v53 = 0;
        char v54 = 1;
        char v55 = 0;
        char v56 = 0;
        char v57 = 0;
        char v58 = 0;
        char v59 = 0;
        char v60 = 0;
        char v61 = 0;
        ptr0 = (int*)&gvar_404294;
        long long v62 = &MZHeader;
        long long v63 = 0xffffffff00000000L;
    }
    else {
        return result;
    }
loc_402113:
    long long v64 = (unsigned long long)*(ptr0 + 1);
    long long v65 = (unsigned long long)*ptr0;
    long long v66 = (long long)*(ptr0 + 2);
    result = (BOOL)(unsigned char)v66;
    long long* ptr7 = (long long*)(v65 + &MZHeader);
    long long v67 = v64 + &MZHeader;
    char v68 = (unsigned int)result == 16;
    char v69 = (unsigned int)result < 16;
    char v70 = __parity__((unsigned char)result - 16);
    char v71 = (unsigned int)result < 16;
    char v72 = ((((unsigned int)result - 16) ^ (unsigned int)result) & ((unsigned int)result ^ 0x10)) < 0;
    char v73 = ((((unsigned int)result - 16) ^ ((unsigned int)result ^ 0x10)) >>> 4) & 0x1;
    long long v74 = *ptr7;
    if(v68) {
        long long v75 = (unsigned long long)*(short*)v67;
        char v76 = (unsigned int)v75 & 0x8000 ? 0: 1;
        char v77 = ((unsigned int)v75 & 0x8000) < 0;
        char v78 = 1;
        char v79 = 0;
        char v80 = 0;
        if(!v76) {
            long long v81 = v75 | 0xffffffffffff0000L;
            long long* ptr8 = (long long*)(v81 - (long long)ptr7);
            long long* ptr9 = (long long*)(v81 - (long long)ptr7);
            long long v82 = (long long)((long long)ptr8 + v74);
            char v83 = v82 ? 0: 1;
            char v84 = v82 < 0L;
            char v85 = __parity__((unsigned char)v82);
            char v86 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(v74 ^ (long long)ptr9) ^ v82) >>> 4L) & 0x1L);
            char v87 = __carry__(v74, (long long)ptr9);
            char v88 = (long long)(long long*)((long long)(long long*)(v82 ^ (long long)ptr9) & (long long*)~(long long)(long long*)(v74 ^ (long long)ptr9)) < 0L;
            v0 = v82;
            long long v89 = &v0;
            long long v90 = 2L;
            sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 2L);
            goto loc_402178;
        loc_402209:
            v75 = (unsigned long long)*(char*)v67;
            char v91 = *(char*)v67 & 0x80 ? 0: 1;
            char v92 = ((unsigned char)v75 & 0x80) < 0;
            char v93 = __parity__((unsigned char)v75 & 0x80);
            char v94 = 0;
            char v95 = 0;
            if(!v91) {
                long long v96 = v75 | 0xffffffffffffff00L;
                long long* ptr10 = (long long*)(v96 - (long long)ptr7);
                long long* ptr11 = (long long*)(v96 - (long long)ptr7);
                long long v97 = (long long)((long long)ptr10 + v74);
                char v98 = v97 ? 0: 1;
                char v99 = v97 < 0L;
                char v100 = __parity__((unsigned char)v97);
                char v101 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(v74 ^ (long long)ptr11) ^ v97) >>> 4L) & 0x1L);
                char v102 = __carry__(v74, (long long)ptr11);
                char v103 = (long long)(long long*)((long long)(long long*)(v97 ^ (long long)ptr11) & (long long*)~(long long)(long long*)(v74 ^ (long long)ptr11)) < 0L;
                v0 = v97;
                long long v104 = &v0;
                long long v105 = 1L;
                sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 1L);
                goto loc_402178;
            loc_402151:
                char v106 = (unsigned int)result == 32;
                char v107 = (unsigned int)result < 32;
                char v108 = __parity__((unsigned char)result - 32);
                char v109 = (unsigned int)result < 32;
                char v110 = ((((unsigned int)result - 32) ^ (unsigned int)result) & ((unsigned int)result ^ 0x20)) < 0;
                char v111 = ((((unsigned int)result - 32) ^ ((unsigned int)result ^ 0x20)) >>> 4) & 0x1;
                if(!v106) {
                    char v112 = (unsigned int)result == 64;
                    char v113 = (unsigned int)result < 64;
                    char v114 = __parity__((unsigned char)result - 64);
                    char v115 = (unsigned int)result < 64;
                    char v116 = ((((unsigned int)result - 64) ^ (unsigned int)result) & ((unsigned int)result ^ 0x40)) < 0;
                    char v117 = ((((unsigned int)result - 64) ^ ((unsigned int)result ^ 0x40)) >>> 4) & 0x1;
                    if(!v112) {
                        long long v118 = "  Unknown pseudo relocation bit size %d.\n";
                        long long v119 = (long long)(unsigned char)v66;
                        v0 = 0L;
                        result = (BOOL)/*NO_RETURN*/ sub_401D80(&MZHeader, &gvar_4042A0, v119, "  Unknown pseudo relocation bit size %d.\n", v66, v74, v3, v2, v11, v9);
                        goto loc_402151;
                    }
                    else {
                        long long* ptr12 = (long long*)(v74 - (long long)ptr7);
                        long long* ptr13 = (long long*)(v74 - (long long)ptr7);
                        long long v120 = *(long long*)v67 + (long long)ptr12;
                        char v121 = v120 ? 0: 1;
                        char v122 = v120 < 0L;
                        char v123 = __parity__((unsigned char)v120);
                        char v124 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(*(long long*)v67 ^ (long long)ptr13) ^ v120) >>> 4L) & 0x1L);
                        char v125 = __carry__(*(long long*)v67, (long long)ptr13);
                        char v126 = (long long)(long long*)((long long)(long long*)(v120 ^ (long long)ptr13) & (long long*)~(long long)(long long*)(*(long long*)v67 ^ (long long)ptr13)) < 0L;
                        v0 = v120;
                        long long v127 = &v0;
                        long long v128 = 8L;
                        sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 8L);
                        goto loc_402178;
                    }
                }
                else {
                    v75 = (unsigned long long)*(int*)v67;
                    char v129 = *(int*)v67 & 0x80000000 ? 0: 1;
                    char v130 = ((unsigned int)v75 & 0x80000000) < 0;
                    char v131 = 1;
                    char v132 = 0;
                    char v133 = 0;
                    if(!v129) {
                        long long v134 = v75 | 0xffffffff00000000L;
                        long long* ptr14 = (long long*)(v134 - (long long)ptr7);
                        long long* ptr15 = (long long*)(v134 - (long long)ptr7);
                        long long v135 = (long long)((long long)ptr14 + v74);
                        char v136 = v135 ? 0: 1;
                        char v137 = v135 < 0L;
                        char v138 = __parity__((unsigned char)v135);
                        char v139 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)(v74 ^ (long long)ptr15) ^ v135) >>> 4L) & 0x1L);
                        char v140 = __carry__(v74, (long long)ptr15);
                        char v141 = (long long)(long long*)((long long)(long long*)(v135 ^ (long long)ptr15) & (long long*)~(long long)(long long*)(v74 ^ (long long)ptr15)) < 0L;
                        v0 = v135;
                        goto loc_4021F5;
                    }
                }
            }
        }
        char v142 = (unsigned int)result == 16;
        char v143 = (unsigned int)result < 16;
        char v144 = __parity__((unsigned char)result - 16);
        char v145 = (unsigned int)result < 16;
        char v146 = ((((unsigned int)result - 16) ^ (unsigned int)result) & ((unsigned int)result ^ 0x10)) < 0;
        char v147 = ((((unsigned int)result - 16) ^ ((unsigned int)result ^ 0x10)) >>> 4) & 0x1;
        v0 = (long long)((long long)(long long*)(v75 - (long long)ptr7) + v74);
        if(v142) {
            long long v89 = &v0;
            long long v90 = 2L;
            sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 2L);
        }
        else if(v145 != 0) {
            char v148 = (unsigned int)result == 8;
            char v149 = (unsigned int)result < 8;
            char v150 = __parity__((unsigned char)result - 8);
            char v151 = (unsigned int)result < 8;
            char v152 = ((((unsigned int)result - 8) ^ (unsigned int)result) & ((unsigned int)result ^ 0x8)) < 0;
            char v153 = ((((unsigned int)result - 8) ^ ((unsigned int)result ^ 0x8)) >>> 4) & 0x1;
            if(v148) {
                long long v104 = &v0;
                long long v105 = 1L;
                sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 1L);
            }
        }
        else {
            char v154 = (unsigned int)result == 32;
            char v155 = (unsigned int)result < 32;
            char v156 = __parity__((unsigned char)result - 32);
            char v157 = (unsigned int)result < 32;
            char v158 = ((((unsigned int)result - 32) ^ (unsigned int)result) & ((unsigned int)result ^ 0x20)) < 0;
            char v159 = ((((unsigned int)result - 32) ^ ((unsigned int)result ^ 0x20)) >>> 4) & 0x1;
            if(!v154) {
                char v160 = (unsigned int)result == 64;
                char v161 = (unsigned int)result < 64;
                char v162 = __parity__((unsigned char)result - 64);
                char v163 = (unsigned int)result < 64;
                char v164 = ((((unsigned int)result - 64) ^ (unsigned int)result) & ((unsigned int)result ^ 0x40)) < 0;
                char v165 = ((((unsigned int)result - 64) ^ ((unsigned int)result ^ 0x40)) >>> 4) & 0x1;
                if(v160) {
                    long long v127 = &v0;
                    long long v128 = 8L;
                    sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 8L);
                }
            }
            else {
            loc_4021F5:
                long long v166 = &v0;
                long long v167 = 4L;
                sub_401DF0(&MZHeader, &gvar_4042A0, &v0, v67, 4L);
            }
        }
    }
    else if(v71 == 0) {
        goto loc_402151;
    }
    else {
        char v168 = (unsigned int)result == 8;
        char v169 = (unsigned int)result < 8;
        char v170 = __parity__((unsigned char)result - 8);
        char v171 = (unsigned int)result < 8;
        char v172 = ((((unsigned int)result - 8) ^ (unsigned int)result) & ((unsigned int)result ^ 0x8)) < 0;
        char v173 = ((((unsigned int)result - 8) ^ ((unsigned int)result ^ 0x8)) >>> 4) & 0x1;
        if(v168) {
            goto loc_402209;
        }
        else {
            long long v118 = "  Unknown pseudo relocation bit size %d.\n";
            long long v119 = (long long)(unsigned char)v66;
            v0 = 0L;
            result = (BOOL)/*NO_RETURN*/ sub_401D80(&MZHeader, &gvar_4042A0, v119, "  Unknown pseudo relocation bit size %d.\n", v66, v74, v3, v2, v11, v9);
            goto loc_402151;
        }
    }
loc_402178:
    ptr0 += 3;
    char v174 = ptr0 == &gvar_4042A0;
    char v175 = (long long)ptr0 < &gvar_4042A0;
    char v176 = __parity__((unsigned char)ptr0 - 160);
    char v177 = (unsigned long long)ptr0 < &gvar_4042A0;
    char v178 = (long long)(long long*)((long long)(long long*)((long long)(long long*)(ptr0 - 0x1010a8) ^ (long long)ptr0) & (long long)(long long*)((long long)ptr0 ^ &gvar_4042A0)) < 0L;
    if(v177) {
        goto loc_402113;
    }
    else if((gvar_407360 ? 0: 1) || gvar_407360 >= 0x80000000) {
        return result;
    }
    else {
        long long v179 = 0L;
        long long v180 = 0L;
        char v181 = 1;
        char v182 = 0;
        char v183 = 1;
        char v184 = 0;
        char v185 = 0;
        long long v186 = 34382L;
        long long v187 = 34364L;
        do {
            long long v188 = v179;
            long long v189 = v179;
            result = (BOOL)(gvar_407358 + v188);
            char v190 = result ? 0: 1;
            char v191 = result < 0L;
            char v192 = __parity__((unsigned char)result);
            char v193 = (((gvar_407358 ^ v189) ^ result) >>> 4L) & 0x1L;
            char v194 = __carry__(gvar_407358, v189);
            char v195 = ((result ^ v189) & ~(gvar_407358 ^ v189)) < 0L;
            ptr7 = (long long*)*(int*)result;
            char v196 = *(int*)result ? 0: 1;
            char v197 = (unsigned int)ptr7 < 0;
            char v198 = __parity__((unsigned char)ptr7);
            char v199 = 0;
            char v200 = 0;
            if(!v196) {
                LPCVOID lpAddress = *(LPCVOID*)(result + 8L);
                long long v201 = 48L;
                PMEMORY_BASIC_INFORMATION v202 = &v6;
                SIZE_T v203 = VirtualQuery(lpAddress, &v6, 48L);
                char v204 = v203 ? 0: 1;
                char v205 = v203 >= 0x8000000000000000L;
                char v206 = __parity__((unsigned char)v203);
                char v207 = 0;
                char v208 = 0;
                if(!v204) {
                    unsigned long long v209 = gvar_407358;
                    PDWORD v210 = &v7;
                    SIZE_T dwSize = v5;
                    LPVOID lpAddress1 = v6;
                    DWORD flNewProtect = *(DWORD*)(v209 + v179);
                    int v211 = 0;
                    result = VirtualProtect(lpAddress1, dwSize, flNewProtect, &v7);
                }
                else {
                    long long v212 = v179;
                    ptr0 = (int*)(gvar_407358 + v179);
                    char v213 = ptr0 ? 0: 1;
                    char v214 = (long long)ptr0 < 0L;
                    char v215 = __parity__((unsigned char)ptr0);
                    char v216 = (long long*)((long long)(long long*)((long long)(long long*)((gvar_407358 ^ v212) ^ (long long)ptr0) >>> 4L) & 0x1L);
                    char v217 = __carry__(gvar_407358, v212);
                    char v218 = (long long)(long long*)((long long)(long long*)((long long)ptr0 ^ v212) & ~(gvar_407358 ^ v212)) < 0L;
                    long long v219 = "  VirtualQuery failed for %d bytes at address %p";
                    long long v220 = *(long long*)(ptr0 + 4);
                    long long v221 = *(long long*)(ptr0 + 2);
                    long long v222 = (long long)*(int*)(v220 + 8L);
                    long long v223 = /*NO_RETURN*/ sub_401D80(34364L, v180, v222, "  VirtualQuery failed for %d bytes at address %p", v221, v4, v3, v2, v11, v9);
                    long long v224 = "  Unknown pseudo relocation protocol version %d.\n";
                    unsigned long long* ptr16 = (unsigned long long*)(&ptr2 - 1);
                    *ptr16 = 0x402263L;
                    result = (BOOL)/*NO_RETURN*/ sub_401D80(0L, &gvar_4042A0, 1L, "  Unknown pseudo relocation protocol version %d.\n", 5383L, 33824L, *(long long*)(ptr16 + 1), *(long long*)(ptr16 + 2), *(long long*)(ptr16 + 3), *(long long*)(ptr16 + 4));
                }
            }
            v180 = (long long)((unsigned int)v180 + 1);
            v179 += 24L;
        }
        while((unsigned int)v180 >= (int)gvar_407360);
    }
}

long long sub_402270(unsigned short* param0) {
    if(*param0 == 23117) {
        param0 = (unsigned short*)((long long)*(int*)(param0 + 30) + (long long)param0);
        if(*(int*)param0 == 0x4550) {
            return *(short*)(param0 + 12) != 523 ? 0L: 1L;
        }
    }
    return 0L;
}

unsigned long long sub_4022A0(long long param0, unsigned long long param1) {
    unsigned long long v0 = (unsigned long long)((long long)*(int*)(param0 + 60L) + param0);
    unsigned long long result = 0L;
    unsigned long long v1 = (unsigned long long)*(short*)(v0 + 6L);
    unsigned long long v2 = (unsigned long long)*(short*)(v0 + 20L);
    if((unsigned int)v1) {
        result = (unsigned long long)((unsigned long long)(unsigned short)v2 + v0 + 24L);
        v2 = (unsigned long long)((unsigned long long)((unsigned int)v1 - 1) * 40L + result + 40L);
        while((unsigned long long)*(int*)(result + 12L) > param1 || (unsigned long long)(*(int*)(result + 12L) + *(int*)(result + 8L)) <= param1) {
            result += 40L;
            if(result == v2) {
                return 0L;
            }
        }
    }
    return result;
}

char* sub_4022F0(long long param0, long long param1, long long param2, char* _Str) {
    char* _Str1 = NULL;
    size_t v0 = →msvcrt.dll!strlen(_Str);
    if(v0 <= 8L) {
        long long v1 = /*BAD_CALL!*/ sub_402270((unsigned short*)&MZHeader);
        if((unsigned int)v1) {
            _Str1 = (char*)&SectionHeader00;
            do {
                int v2 = /*BAD_CALL!*/ →msvcrt.dll!strncmp(_Str1, _Str, 8L);
                if(!(unsigned int)v2) {
                    return _Str1;
                }
                _Str1 += 40L;
            }
            while(_Str1 == 0x400430L);
            return NULL;
        }
    }
    return _Str1;
}

unsigned long long sub_402390(long long param0) {
    long long v0;
    long long v1 = /*BAD_CALL!*/ sub_402270((unsigned short*)&MZHeader);
    if((unsigned int)v1) {
        return sub_4022A0(&MZHeader, (unsigned long long)(v0 - &MZHeader));
    }
    return 0L;
}

int sub_4023D0() {
    long long v0 = /*BAD_CALL!*/ sub_402270((unsigned short*)&MZHeader);
    return (unsigned int)v0 ? 17: 0;
}

unsigned long long sub_402400(unsigned long long param0) {
    unsigned long long v0 = param0;
    long long v1 = sub_402270((unsigned short*)&MZHeader);
    unsigned long long result = 0L;
    if((unsigned int)v1) {
        result = &SectionHeader00;
        do {
            if(!(*(char*)(result + 39L) & 0x20)) {
            loc_40245F:
                result += 40L;
            }
            else if(v0) {
                --v0;
                goto loc_40245F;
            }
            return result;
        }
        while(result != 0x400430L);
        result = 0L;
    }
    return result;
}

int sub_402480() {
    long long v0 = /*BAD_CALL!*/ sub_402270((unsigned short*)&MZHeader);
    return (unsigned int)v0 ? &MZHeader: 0;
}

int sub_402500(long long param0, long long param1, long long param2, int param3) {
    int result = 0;
    int v0 = param3;
    long long v1 = /*BAD_CALL!*/ sub_402270((unsigned short*)&MZHeader);
    if((unsigned int)v1) {
        unsigned long long v2 = sub_4022A0(&MZHeader, 0x8000L);
        if(v2) {
            long long v3 = &ImportDirectory_KERNEL32.dll;
            while(*(int*)(v3 + 4L) || *(int*)(v3 + 12L)) {
                if(v0 <= 0) {
                    return (int)((unsigned long long)*(int*)(v3 + 12L) + &MZHeader);
                }
                --v0;
                v3 += 20L;
            }
            return 0;
        }
    }
    return result;
}

HMODULE sub_402590(long long param0, long long param1, long long param2) {
    HMODULE result = gvar_407370;
    if(!result) {
        long long v0 = 0L;
        for(int i = sub_402500(param0, param1, param2, v0); i; i = sub_402500(param0, param1, param2, v0)) {
            param2 = (long long)*(char*)i;
            if(*(char*)i == 77 || *(char*)i == 109) {
                param2 = (long long)*(char*)(i + 1L);
                if(*(char*)(i + 1L) == 83 || *(char*)(i + 1L) == 115) {
                    param2 = (long long)*(char*)(i + 2L);
                    if(*(char*)(i + 2L) == 86 || *(char*)(i + 2L) == 118) {
                        param2 = (long long)*(char*)(i + 3L);
                        if(*(char*)(i + 3L) == 67 || *(char*)(i + 3L) == 99) {
                            param2 = (long long)*(char*)(i + 4L);
                            if(*(char*)(i + 4L) == 82 || *(char*)(i + 4L) == 114) {
                                long long v1 = (unsigned long long)*(char*)(i + 5L);
                                if(*(char*)(i + 5L) != 84 && *(char*)(i + 5L) != 116) {
                                    param2 = (long long)((unsigned int)v1 - 48);
                                    if((unsigned char)param2 > 9) {
                                        goto loc_402620;
                                    }
                                }
                                result = GetModuleHandleA((LPCSTR)i);
                                gvar_407370 = result;
                                if(result) {
                                    return result;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        loc_402620:
            v0 = (long long)((unsigned int)v0 + 1);
        }
        result = LoadLibraryW("msvcrt.dll");
        gvar_407370 = result;
    }
    return result;
}

void sub_402660() {
    fninit();
}

int sub_402710() {
    unsigned int v0 = gvar_407380;
    int v1 = 0;
    char v2 = gvar_407380 ? 0: 1;
    char v3 = v0 >= 0x80000000;
    char v4 = __parity__((unsigned char)v0);
    char v5 = 0;
    char v6 = 0;
    jump v2 ? &sub_402720: &sub_40271A;
}

void sub_40271A() {
}

long long sub_402720(long long param0, long long param1) {
    gvar_407380 = 1;
    return sub_4026B0(param0, param1);
}

unsigned long long sub_402730(long long param0, long long param1) {
    long long v0;
    unsigned long long v1 = gvar_403070;
    long long v2 = 0L;
    if(v1 != 0x2b992ddfa232L) {
        gvar_403080 = ~v1;
        return 0x2b992ddfa232L;
    }
    GetSystemTimeAsFileTime(&v2);
    DWORD v3 = GetCurrentProcessId();
    DWORD v4 = GetCurrentThreadId();
    DWORD v5 = GetTickCount();
    QueryPerformanceCounter(&v0);
    unsigned long long v6 = (unsigned long long)(((((v2 ^ v0) ^ (unsigned long long)(unsigned int)v3) ^ (unsigned long long)(unsigned int)v4) ^ (unsigned long long)(unsigned int)v5) & 0xffffffffffffL);
    unsigned long long result = ~v6;
    if(v6 == 0x2b992ddfa232L) {
        result = 18446696136809930188L;
        v6 = 0x2b992ddfa233L;
    }
    gvar_403070 = v6;
    gvar_403080 = result;
    return result;
}

void sub_402800(long long param0, long long param1, long long param2, unsigned long long param3) {
    DWORD64 ImageBase;
    char v0;
    char v1;
    unsigned long long v2;
    unsigned long long v3;
    RtlCaptureContext((PCONTEXT)&gvar_4073A0);
    DWORD64 ControlPc = gvar_407498;
    PRUNTIME_FUNCTION FunctionEntry = RtlLookupFunctionEntry(ControlPc, &ImageBase, NULL);
    if(FunctionEntry) {
        PKNONVOLATILE_CONTEXT_POINTERS v4 = NULL;
        PDWORD64 v5 = &v0;
        PVOID* ptr0 = &v1;
        PCONTEXT v6 = (PCONTEXT)&gvar_4073A0;
        RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, (PCONTEXT)&gvar_4073A0, &v1, &v0, NULL);
    loc_402873:
        unsigned long long v7 = gvar_407498;
        gvar_407420 = v3;
        gvar_407880 = 3221226505;
        gvar_407884 = 1;
        gvar_407890 = v7;
        unsigned long long v8 = gvar_403070;
        unsigned long long v9 = gvar_403080;
        SetUnhandledExceptionFilter(NULL);
        UnhandledExceptionFilter((_EXCEPTION_POINTERS*)&gvar_403040);
        HANDLE hProcess = GetCurrentProcess();
        TerminateProcess(hProcess, 3221226505);
        /*NO_RETURN*/ →msvcrt.dll!abort();
    }
    gvar_407498 = v2;
    gvar_407438 = &v2;
    goto loc_402873;
}

long long sub_402900(long long param0, long long param1) {
    long long result;
    EnterCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
    unsigned int* ptr0 = gvar_407968;
    if(ptr0) {
        do {
            LPVOID v0 = TlsGetValue(*ptr0);
            DWORD v1 = /*BAD_CALL!*/ GetLastError();
            if(!(unsigned int)v1 && v0) {
                *(long long*)(ptr0 + 2)((long long)v0);
            }
            ptr0 = *(unsigned long long*)(ptr0 + 4);
        }
        while(ptr0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
    return result;
}

long long sub_402A90(long long param0, long long param1, long long param2) {
    if((unsigned int)param2 == 1) {
        if(!gvar_407920) {
            InitializeCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
        }
        gvar_407920 = 1;
    }
    else if((unsigned int)param2 < 1) {
        if(gvar_407920) {
            sub_402900(param0, param1);
        }
        if(gvar_407920 == 1) {
            gvar_407920 = 0;
            DeleteCriticalSection((LPCRITICAL_SECTION)&gvar_407940);
        }
    }
    else if((unsigned int)param2 == 3 && gvar_407920) {
        sub_402900(param0, param1);
    }
    return 1L;
}

unsigned long long sub_402B30(long long param0) {
    unsigned long long v0;
    char v1;
    unsigned long long result = v0;
    long long* ptr0 = &v1;
    if(v0 >= 0x1000L) {
        do {
            ptr0 -= 0x200;
            v0 -= 0x1000L;
        }
        while(v0 > 0x1000L);
    }
    return result;
}
