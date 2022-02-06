
long start(long param0, int* param1) {
    long v0;
    long v1;
    long v2;
    int* ptr0;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8 = sub_7F6AC0();
    int* ptr1 = param1;
    unsigned long v9 = (unsigned long)((long)param1 + param0);
    char v10 = v9 ? 0: 1;
    char v11 = v9 >= 0x8000000000000000L;
    char v12 = __parity__((unsigned char)v9);
    char v13 = (long*)((long)(long*)((long)(long*)((long)(long*)(param0 ^ (long)ptr1) ^ v9) >>> 4L) & 0x1L);
    char v14 = __carry__(param0, (long)ptr1);
    char v15 = (long)(long*)((long)(long*)(v9 ^ (long)ptr1) & (long*)~(long)(long*)(param0 ^ (long)ptr1)) < 0L;
    long v16 = param0;
    char* ptr2 = (char*)v6;
    long v17 = 0L;
    long v18 = 0L;
    long v19 = -1L;
    char v20 = 0;
    char v21 = 1;
    char v22 = 1;
    char v23 = 0;
    char v24 = 0;
    long v25 = sub_7F68B0(ptr2, v16, v6, 0L, v7, v3, v9, (unsigned long)v6, ptr0, v2, v5, v0);
    int v26 = *param1;
    int v27 = 0;
    int* ptr3 = param1;
    ++param1;
    char v28 = param1 ? 0: 1;
    char v29 = (long)param1 < 0L;
    char v30 = __parity__((unsigned char)param1);
    char v31 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr3 ^ 0xfffffffffffffffcL) ^ (long)param1) >>> 4L) & 0x1L);
    char v32 = (unsigned long)ptr3 < 18446744073709551612L;
    char v33 = (long)(long*)((long)(long*)((long)param1 ^ (long)ptr3) & (long)(long*)((long)ptr3 ^ 0xfffffffffffffffcL)) < 0L;
    int v34 = v26;
    int v35 = (unsigned int)v32 + v26 + v26;
    int v36 = 0;
    char v37 = (unsigned int)v32 + v26 + v26 ? 0: 1;
    char v38 = v35 < 0;
    char v39 = __parity__((unsigned char)v35);
    char v40 = (((v35 ^ v34) ^ v35) >>> 4) & 0x1;
    char v41 = __carry__(v35, v34);
    char v42 = ((v35 ^ v34) & ~(v35 ^ v34)) < 0;
    char v43 = *(char*)param1;
    long v44 = v4;
    long* ptr4 = &v1;
    jump v44;
}

char* sub_7F6872(int* param0, long param1, long param2, unsigned int param3) {
    unsigned int v0;
    unsigned long v1;
    char* result = (char*)(v1 + (long)param0);
    param2 = (unsigned long)*result | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
    if(param3 > 5 && v1 <= 18446744073709551612L) {
        unsigned int v2 = param3 - 4;
        do {
            param2 = (unsigned long)*(int*)result;
            result += 4L;
            v0 = v2;
            v2 -= 4;
            *param0 = (unsigned int)param2;
            ++param0;
        }
        while(v0 >= 4);
        param3 = v2 + 4;
        param2 = (unsigned long)*result | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if((v2 + 4)) {
            goto loc_7F689E;
        }
    }
    else {
    loc_7F689E:
        do {
            ++result;
            *(char*)param0 = (unsigned char)param2;
            --param3;
            param2 = (unsigned long)*result | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            param0 = (int*)((char*)param0 + 1L);
        }
        while(param3);
    }
    return result;
}

long sub_7F68B0(char* param0, long param1, long param2, long param3, long param4, long param5, unsigned long param6, unsigned long param7, int* param8, long param9, long param10, long param11) {
    int v0;
    int v1;
    long v2;
    unsigned long v3;
    char v4;
    long v5;
    char v6;
    void* ptr0;
    int* ptr1;
    long v7;
    int v8;
    int* ptr2;
    int v9;
    int v10;
    int v11;
    int v12;
    char v13;
    int v14;
    char v15 = 0;
    void* ptr3 = ptr0;
    char v16 = (unsigned char)param4 == 8;
    char v17 = (unsigned char)param4 < 8;
    char v18 = __parity__((unsigned char)param4 - 8);
    char v19 = (unsigned char)param4 < 8;
    char v20 = ((((unsigned char)param4 - 8) ^ (unsigned char)param4) & ((unsigned char)param4 ^ 0x8)) < 0;
    char v21 = ((((unsigned char)param4 - 8) ^ ((unsigned char)param4 ^ 0x8)) >>> 4) & 0x1;
    if(v16) {
    loc_7F68C6:
        while(1) {
            param2 = (unsigned long)*(char*)param1 | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            int v22 = v14;
            v14 *= 2;
            char v23 = v14 ? 0: 1;
            char v24 = v14 < 0;
            char v25 = __parity__((unsigned char)v14);
            char v26 = (((v14 ^ v22) ^ v14) >>> 4) & 0x1;
            v6 = __carry__(v14, v22);
            char v27 = ((v14 ^ v22) & ~(v14 ^ v22)) < 0;
            if(v23) {
                int v28 = *(int*)param1;
                int v29 = 0;
                long v30 = param1;
                param1 -= -4L;
                char v31 = param1 ? 0: 1;
                char v32 = param1 < 0L;
                char v33 = __parity__((unsigned char)param1);
                char v34 = (((v30 ^ 0xfffffffffffffffcL) ^ param1) >>> 4L) & 0x1L;
                char v35 = (unsigned long)v30 < 18446744073709551612L;
                char v36 = ((param1 ^ v30) & (v30 ^ 0xfffffffffffffffcL)) < 0L;
                int v37 = v28;
                v14 = (unsigned int)v35 + v28 + v28;
                char v38 = (unsigned int)v35 + v28 + v28 ? 0: 1;
                char v39 = v14 < 0;
                char v40 = __parity__((unsigned char)v14);
                char v41 = (((v14 ^ v37) ^ v14) >>> 4) & 0x1;
                v6 = __carry__(v14, v37);
                char v42 = ((v14 ^ v37) & ~(v14 ^ v37)) < 0;
                param2 = (unsigned long)*(char*)param1 | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            if(!v6) {
                long v43 = (unsigned long)((unsigned int)param3 + 1);
                break;
            }
            else {
                long v44 = param1;
                ++param1;
                char v45 = param1 ? 0: 1;
                char v46 = param1 < 0L;
                char v47 = __parity__((unsigned char)param1);
                char v48 = (((v44 ^ 0x1L) ^ param1) >>> 4L) & 0x1L;
                char v49 = ((param1 ^ v44) & ~(v44 ^ 0x1L)) < 0L;
                *param0 = (unsigned char)param2;
                char* ptr4 = param0;
                ++param0;
                char v50 = param0 ? 0: 1;
                char v51 = (long)param0 < 0L;
                char v52 = __parity__((unsigned char)param0);
                char v53 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr4 ^ 0x1L) ^ (long)param0) >>> 4L) & 0x1L);
                char v54 = (long)(long*)((long)(long*)((long)param0 ^ (long)ptr4) & (long*)~(long)(long*)((long)ptr4 ^ 0x1L)) < 0L;
            }
        }
        while(1) {
            long v55 = ptr3((long)param0, param1, param2, param3, param4);
            unsigned int v56 = (unsigned int)((unsigned int)v55 * 2 + (unsigned int)v6);
            int v57 = 0;
            int v58 = v14;
            v14 *= 2;
            int v59 = 0;
            char v60 = v14 ? 0: 1;
            char v61 = v14 < 0;
            char v62 = __parity__((unsigned char)v14);
            char v63 = (((v14 ^ v58) ^ v14) >>> 4) & 0x1;
            char v64 = __carry__(v14, v58);
            char v65 = ((v14 ^ v58) & ~(v14 ^ v58)) < 0;
            if(v60) {
                int v66 = *ptr2;
                int v67 = 0;
                int* ptr5 = ptr2;
                param1 = (long)(ptr2 + 1);
                char v68 = param1 ? 0: 1;
                char v69 = param1 < 0L;
                char v70 = __parity__((unsigned char)param1);
                char v71 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr5 ^ 0xfffffffffffffffcL) ^ param1) >>> 4L) & 0x1L);
                char v72 = (unsigned long)ptr5 < 18446744073709551612L;
                char v73 = (long)(long*)((long)(long*)(param1 ^ (long)ptr5) & (long)(long*)((long)ptr5 ^ 0xfffffffffffffffcL)) < 0L;
                int v74 = v66;
                v14 = (unsigned int)v72 + v66 + v66;
                v59 = 0;
                char v75 = (unsigned int)v72 + v66 + v66 ? 0: 1;
                char v76 = v14 < 0;
                char v77 = __parity__((unsigned char)v14);
                char v78 = (((v14 ^ v74) ^ v14) >>> 4) & 0x1;
                v64 = __carry__(v14, v74);
                char v79 = ((v14 ^ v74) & ~(v14 ^ v74)) < 0;
                v5 = (unsigned long)*(char*)param1 | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            if(v64) {
                unsigned int v80 = v56;
                int v81 = (int)(v56 - 3);
                int v82 = 0;
                char v83 = v56 == 3;
                char v84 = v81 < 0;
                char v85 = __parity__((unsigned char)v81);
                char v86 = (((v80 ^ 0x3) ^ v81) >>> 4) & 0x1;
                char v87 = v80 < 3;
                char v88 = ((v81 ^ v80) & (v80 ^ 0x3)) < 0;
                if(!v87) {
                    int v89 = v81;
                    int v90 = v81 * 0x100;
                    int v91 = 0;
                    char v92 = (v89 >>> 24) & 0x1;
                    char v93 = v88;
                    char v94 = v90 ? 0: 1;
                    char v95 = v90 < 0;
                    char v96 = __parity__((unsigned char)v90);
                    v5 = (unsigned long)(unsigned char)v5;
                    int v97 = (unsigned int)v5 | v90;
                    int v98 = 0;
                    char v99 = (unsigned int)v5 | v90 ? 0: 1;
                    char v100 = v97 < 0;
                    char v101 = __parity__((unsigned char)v97);
                    char v102 = 0;
                    char v103 = 0;
                    ++param1;
                    int v104 = ~v97;
                    int v105 = 0;
                    char v106 = ~v97 ? 0: 1;
                    char v107 = v104 < 0;
                    char v108 = __parity__((unsigned char)v104);
                    char v109 = 0;
                    char v110 = 0;
                    if(v106) {
                        goto loc_7F696A;
                    }
                    else {
                        int v111 = v104;
                        int v112 = v104 >> 1;
                        int v113 = 0;
                        v4 = v111 & 0x1;
                        char v114 = 0;
                        char v115 = v112 ? 0: 1;
                        char v116 = v112 < 0;
                        char v117 = __parity__((unsigned char)v112);
                        v3 = (unsigned long)v112;
                        if(v4) {
                            goto loc_7F6951;
                        }
                        else {
                            goto loc_7F6929;
                        }
                    }
                }
                else {
                    int v118 = v14;
                    v14 *= 2;
                    char v119 = v14 ? 0: 1;
                    char v120 = v14 < 0;
                    char v121 = __parity__((unsigned char)v14);
                    char v122 = (((v14 ^ v118) ^ v14) >>> 4) & 0x1;
                    v4 = __carry__(v14, v118);
                    char v123 = ((v14 ^ v118) & ~(v14 ^ v118)) < 0;
                    if(v119) {
                        int v124 = *(int*)param1;
                        int v125 = 0;
                        long v126 = param1;
                        param1 -= -4L;
                        char v127 = param1 ? 0: 1;
                        char v128 = param1 < 0L;
                        char v129 = __parity__((unsigned char)param1);
                        char v130 = (((v126 ^ 0xfffffffffffffffcL) ^ param1) >>> 4L) & 0x1L;
                        char v131 = (unsigned long)v126 < 18446744073709551612L;
                        char v132 = ((param1 ^ v126) & (v126 ^ 0xfffffffffffffffcL)) < 0L;
                        int v133 = v124;
                        v14 = (unsigned int)v131 + v124 + v124;
                        char v134 = (unsigned int)v131 + v124 + v124 ? 0: 1;
                        char v135 = v14 < 0;
                        char v136 = __parity__((unsigned char)v14);
                        char v137 = (((v14 ^ v133) ^ v14) >>> 4) & 0x1;
                        v4 = __carry__(v14, v133);
                        char v138 = ((v14 ^ v133) & ~(v14 ^ v133)) < 0;
                    }
                }
                if(!v4) {
                loc_7F6929:
                    v2 = (unsigned long)(v11 + 1);
                    int v139 = v14;
                    v14 *= 2;
                    char v140 = v14 ? 0: 1;
                    char v141 = v14 < 0;
                    char v142 = __parity__((unsigned char)v14);
                    char v143 = (((v14 ^ v139) ^ v14) >>> 4) & 0x1;
                    v4 = __carry__(v14, v139);
                    char v144 = ((v14 ^ v139) & ~(v14 ^ v139)) < 0;
                    if(v140) {
                        int v145 = *(int*)param1;
                        int v146 = 0;
                        long v147 = param1;
                        param1 -= -4L;
                        char v148 = param1 ? 0: 1;
                        char v149 = param1 < 0L;
                        char v150 = __parity__((unsigned char)param1);
                        char v151 = (((v147 ^ 0xfffffffffffffffcL) ^ param1) >>> 4L) & 0x1L;
                        char v152 = (unsigned long)v147 < 18446744073709551612L;
                        char v153 = ((param1 ^ v147) & (v147 ^ 0xfffffffffffffffcL)) < 0L;
                        int v154 = v145;
                        v14 = (unsigned int)v152 + v145 + v145;
                        char v155 = (unsigned int)v152 + v145 + v145 ? 0: 1;
                        char v156 = v14 < 0;
                        char v157 = __parity__((unsigned char)v14);
                        char v158 = (((v14 ^ v154) ^ v14) >>> 4) & 0x1;
                        v4 = __carry__(v14, v154);
                        char v159 = ((v14 ^ v154) & ~(v14 ^ v154)) < 0;
                    }
                    if(!v4) {
                        break;
                    }
                }
            loc_7F6951:
                ptr3((long)ptr1, param1, v5, v2, param4);
                int v160 = v8;
                v1 = (unsigned int)v4 + v9 + v9;
                v0 = 0;
                char v161 = (unsigned int)v4 + v10 + v10 ? 0: 1;
                char v162 = v1 < 0;
                char v163 = __parity__((unsigned char)v1);
                char v164 = (((v1 ^ v160) ^ v1) >>> 4) & 0x1;
                char v165 = __carry__(v1, v160);
                char v166 = ((v1 ^ v160) & ~(v1 ^ v160)) < 0;
                goto loc_7F6956;
            }
            else {
                unsigned int v167 = v56;
                int v168 = (int)(v56 - 1);
                int v169 = 0;
                char v170 = v56 - 1 ? 0: 1;
                char v171 = v168 < 0;
                char v172 = __parity__((unsigned char)v168);
                char v173 = ((~v168 ^ ~v167) >>> 4) & 0x1;
                char v174 = ((v168 ^ v167) & v167) < 0;
                long v175 = /*BAD_CALL!*/ ptr3((long)ptr1, param1, v5);
                int v176 = (unsigned int)v175;
                int v177 = (unsigned int)(v175 >>> 32L);
                int v178 = v176;
                int v179 = v176 * 2;
                int v180 = 0;
                char v181 = v176 * 2 ? 0: 1;
                char v182 = v179 < 0;
                char v183 = __parity__((unsigned char)v179);
                char v184 = (((v179 ^ v178) ^ v179) >>> 4) & 0x1;
                v6 = __carry__(v179, v178);
                char v185 = ((v179 ^ v178) & ~(v179 ^ v178)) < 0;
            }
        }
        do {
            ptr3((long)ptr1, param1, v5, v2, param4);
            v2 = (unsigned long)(v12 * 2);
            int v186 = v14;
            v14 *= 2;
            char v187 = v14 ? 0: 1;
            char v188 = v14 < 0;
            char v189 = __parity__((unsigned char)v14);
            char v190 = (((v14 ^ v186) ^ v14) >>> 4) & 0x1;
            v4 = __carry__(v14, v186);
            char v191 = ((v14 ^ v186) & ~(v14 ^ v186)) < 0;
            if(v187) {
                int v192 = *ptr2;
                int v193 = 0;
                int* ptr6 = ptr2;
                param1 = (long)(ptr2 + 1);
                char v194 = param1 ? 0: 1;
                char v195 = param1 < 0L;
                char v196 = __parity__((unsigned char)param1);
                char v197 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr6 ^ 0xfffffffffffffffcL) ^ param1) >>> 4L) & 0x1L);
                char v198 = (unsigned long)ptr6 < 18446744073709551612L;
                char v199 = (long)(long*)((long)(long*)(param1 ^ (long)ptr6) & (long)(long*)((long)ptr6 ^ 0xfffffffffffffffcL)) < 0L;
                int v200 = v192;
                v14 = (unsigned int)v198 + v192 + v192;
                char v201 = (unsigned int)v198 + v192 + v192 ? 0: 1;
                char v202 = v14 < 0;
                char v203 = __parity__((unsigned char)v14);
                char v204 = (((v14 ^ v200) ^ v14) >>> 4) & 0x1;
                v4 = __carry__(v14, v200);
                char v205 = ((v14 ^ v200) & ~(v14 ^ v200)) < 0;
            }
        }
        while(!v4);
        unsigned int v206 = (unsigned int)v2;
        v1 = (unsigned int)v2 + 2;
        v0 = 0;
        char v207 = (unsigned int)v2 + 2 ? 0: 1;
        char v208 = v1 < 0;
        char v209 = __parity__((unsigned char)v1);
        char v210 = (((v206 ^ 0x2) ^ v1) >>> 4) & 0x1;
        char v211 = v206 >= 0xfffffffe;
        char v212 = ((v1 ^ v206) & ~(v206 ^ 0x2)) < 0;
    loc_7F6956:
        char v213 = v3 == 0xfffffffffffffb00L;
        char v214 = (long)v3 < 0xfffffffffffffb00L;
        char v215 = __parity__((unsigned char)v3);
        char v216 = v3 < 0xfffffffffffffb00L;
        char v217 = (((v3 + 0x500L) ^ v3) & (v3 ^ 0xfffffffffffffb00L)) < 0L;
        char v218 = (((v3 + 0x500L) ^ (v3 ^ 0xfffffffffffffb00L)) >>> 4L) & 0x1L;
        int v219 = v1;
        unsigned int v220 = (unsigned int)((unsigned int)v216 + v1 + 2);
        int v221 = 0;
        char v222 = (unsigned int)v216 + v1 + 2 ? 0: 1;
        char v223 = v220 >= 0x80000000;
        char v224 = __parity__((unsigned char)v220);
        char v225 = (((v219 ^ 0x2) ^ v220) >>> 4) & 0x1;
        char v226 = (unsigned int)v219 >= 0xfffffffe;
        char v227 = ((v220 ^ v219) & ~(v219 ^ 0x2)) < 0;
        char* ptr7 = sub_7F6872(ptr1, param1, v7, v220);
        goto loc_7F68C6;
    }
    else {
    loc_7F696A:
        unsigned long v228 = param6;
        long v229 = param1;
        long v230 = param1;
        long v231 = v229 - v228;
        char v232 = v231 ? 0: 1;
        char v233 = v231 < 0L;
        char v234 = __parity__((unsigned char)v231);
        char v235 = (((v228 ^ v230) ^ v231) >>> 4L) & 0x1L;
        char v236 = v228 > (unsigned long)v230;
        char v237 = ((v231 ^ v230) & (v228 ^ v230)) < 0L;
        unsigned long v238 = param7;
        char* ptr8 = param0;
        long* ptr9 = (long*)((long)param0 - v238);
        char v239 = ptr9 ? 0: 1;
        char v240 = (long)ptr9 < 0L;
        char v241 = __parity__((unsigned char)ptr9);
        char v242 = (long*)((long)(long*)((long)(long*)((long)(long*)(v238 ^ (long)ptr8) ^ (long)ptr9) >>> 4L) & 0x1L);
        char v243 = v238 > (unsigned long)ptr8;
        char v244 = (long)(long*)((long)(long*)(v238 ^ (long)ptr8) & (long)(long*)((long)ptr9 ^ (long)ptr8)) < 0L;
        int* ptr10 = param8;
        *ptr10 = (unsigned int)ptr9;
        long v245 = param9;
        long v246 = param10;
        long v247 = param11;
        long* ptr11 = &v13;
        jump v247;
    }
}

long sub_7F6AC0() {
    void* ptr0;
    void* ptr1 = ptr0;
    int* ptr2 = (int*)((long)ptr1 - 9L);
    unsigned long v0 = (unsigned long)*ptr2;
    long* ptr3 = (long*)((long)ptr2 - v0);
    long v1 = (unsigned long)*(short*)(ptr3 + 7);
    &loc_7F6A55();
}
