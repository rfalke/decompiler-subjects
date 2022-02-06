
int start(unsigned short* param0, int param1) {
    unsigned char v0;
    int v1;
    int v2;
    unsigned int v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    unsigned char* ptr0;
    int v9;
    char v10;
    int v11;
    int v12;
    char v13;
    char v14;
    int v15 = 0;
    int v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 0;
    int v22 = v11;
    int v23 = v11;
    int v24 = v22 - 1;
    char v25 = v24 ? 0: 1;
    char v26 = v24 < 0;
    char v27 = __parity__((unsigned char)v24);
    char v28 = ((~v24 ^ ~v23) >>> 4) & 0x1;
    char v29 = ((v24 ^ v23) & v23) < 0;
    unsigned short* ptr1 = param0;
    unsigned int* ptr2 = &param1;
    if(!v25) {
    loc_8048059:
        do {
            unsigned short* ptr3 = *ptr2;
            ++ptr2;
            ptr1 = ptr3;
            v10 = ptr1 ? 0: 1;
            char v30 = (int)ptr1 < 0;
            char v31 = __parity__((unsigned char)ptr1);
            char v32 = 0;
            char v33 = 0;
            if(!v10) {
                unsigned short* ptr4 = ptr1;
                v9 = (unsigned int)*(char*)ptr4 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                ptr0 = (unsigned char*)((unsigned char*)ptr4 + 1);
                char v34 = (unsigned char)v9 == 45;
                char v35 = (unsigned char)v9 < 45;
                char v36 = __parity__((unsigned char)v9 - 45);
                char v37 = (unsigned char)v9 < 45;
                char v38 = ((((unsigned char)v9 - 45) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x2d)) < 0;
                v28 = ((((unsigned char)v9 - 45) ^ ((unsigned char)v9 ^ 0x2d)) >>> 4) & 0x1;
                if(v34) {
                    char v39 = *ptr0 ? 0: 1;
                    char v40 = *ptr0 < 0;
                    char v41 = __parity__(*ptr0);
                    char v42 = *ptr0 < 0;
                    char v43 = 0;
                    v28 = 0;
                    if(!v39) {
                        do {
                            v9 = (unsigned int)*ptr0 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                            ++ptr0;
                            char v44 = (unsigned char)v9 ? 0: 1;
                            char v45 = (unsigned char)v9 < 0;
                            char v46 = __parity__((unsigned char)v9);
                            char v47 = (unsigned char)v9 < 0;
                            char v48 = 0;
                            v28 = 0;
                            if(v44) {
                                goto loc_8048059;
                            }
                            else {
                                char v49 = (unsigned char)v9 == 65;
                                char v50 = (unsigned char)v9 < 65;
                                char v51 = __parity__((unsigned char)v9 - 65);
                                char v52 = (unsigned char)v9 < 65;
                                char v53 = ((((unsigned char)v9 - 65) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x41)) < 0;
                                char v54 = ((((unsigned char)v9 - 65) ^ ((unsigned char)v9 ^ 0x41)) >>> 4) & 0x1;
                                if(v49) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x7) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v55 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v56 = (v9 >>> 15) & 0x1;
                                    char v57 = __parity__((unsigned char)(v9 >>> 8));
                                    char v58 = 0;
                                    char v59 = 0;
                                }
                                char v60 = (unsigned char)v9 == 98;
                                char v61 = (unsigned char)v9 < 98;
                                char v62 = __parity__((unsigned char)v9 - 98);
                                char v63 = (unsigned char)v9 < 98;
                                char v64 = ((((unsigned char)v9 - 98) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x62)) < 0;
                                char v65 = ((((unsigned char)v9 - 98) ^ ((unsigned char)v9 ^ 0x62)) >>> 4) & 0x1;
                                if(v60) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x30) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v66 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v67 = (v9 >>> 15) & 0x1;
                                    char v68 = __parity__((unsigned char)(v9 >>> 8));
                                    char v69 = 0;
                                    char v70 = 0;
                                }
                                char v71 = (unsigned char)v9 == 101;
                                char v72 = (unsigned char)v9 < 101;
                                char v73 = __parity__((unsigned char)v9 - 101);
                                char v74 = (unsigned char)v9 < 101;
                                char v75 = ((((unsigned char)v9 - 101) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x65)) < 0;
                                char v76 = ((((unsigned char)v9 - 101) ^ ((unsigned char)v9 ^ 0x65)) >>> 4) & 0x1;
                                if(v71) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x6) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v77 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v78 = (v9 >>> 15) & 0x1;
                                    char v79 = __parity__((unsigned char)(v9 >>> 8));
                                    char v80 = 0;
                                    char v81 = 0;
                                }
                                char v82 = (unsigned char)v9 == 69;
                                char v83 = (unsigned char)v9 < 69;
                                char v84 = __parity__((unsigned char)v9 - 69);
                                char v85 = (unsigned char)v9 < 69;
                                char v86 = ((((unsigned char)v9 - 69) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x45)) < 0;
                                char v87 = ((((unsigned char)v9 - 69) ^ ((unsigned char)v9 ^ 0x45)) >>> 4) & 0x1;
                                if(v82) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x2) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v88 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v89 = (v9 >>> 15) & 0x1;
                                    char v90 = __parity__((unsigned char)(v9 >>> 8));
                                    char v91 = 0;
                                    char v92 = 0;
                                }
                                char v93 = (unsigned char)v9 == 110;
                                char v94 = (unsigned char)v9 < 110;
                                char v95 = __parity__((unsigned char)v9 - 110);
                                char v96 = (unsigned char)v9 < 110;
                                char v97 = ((((unsigned char)v9 - 110) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x6e)) < 0;
                                char v98 = ((((unsigned char)v9 - 110) ^ ((unsigned char)v9 ^ 0x6e)) >>> 4) & 0x1;
                                if(v93) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x10) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v99 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v100 = (v9 >>> 15) & 0x1;
                                    char v101 = __parity__((unsigned char)(v9 >>> 8));
                                    char v102 = 0;
                                    char v103 = 0;
                                }
                                char v104 = (unsigned char)v9 == 115;
                                char v105 = (unsigned char)v9 < 115;
                                char v106 = __parity__((unsigned char)v9 - 115);
                                char v107 = (unsigned char)v9 < 115;
                                char v108 = ((((unsigned char)v9 - 115) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x73)) < 0;
                                char v109 = ((((unsigned char)v9 - 115) ^ ((unsigned char)v9 ^ 0x73)) >>> 4) & 0x1;
                                if(v104) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x8) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v110 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v111 = (v9 >>> 15) & 0x1;
                                    char v112 = __parity__((unsigned char)(v9 >>> 8));
                                    char v113 = 0;
                                    char v114 = 0;
                                }
                                char v115 = (unsigned char)v9 == 116;
                                char v116 = (unsigned char)v9 < 116;
                                char v117 = __parity__((unsigned char)v9 - 116);
                                char v118 = (unsigned char)v9 < 116;
                                char v119 = ((((unsigned char)v9 - 116) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x74)) < 0;
                                char v120 = ((((unsigned char)v9 - 116) ^ ((unsigned char)v9 ^ 0x74)) >>> 4) & 0x1;
                                if(v115) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x5) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v121 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v122 = (v9 >>> 15) & 0x1;
                                    char v123 = __parity__((unsigned char)(v9 >>> 8));
                                    char v124 = 0;
                                    char v125 = 0;
                                }
                                char v126 = (unsigned char)v9 == 84;
                                char v127 = (unsigned char)v9 < 84;
                                char v128 = __parity__((unsigned char)v9 - 84);
                                char v129 = (unsigned char)v9 < 84;
                                char v130 = ((((unsigned char)v9 - 84) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x54)) < 0;
                                char v131 = ((((unsigned char)v9 - 84) ^ ((unsigned char)v9 ^ 0x54)) >>> 4) & 0x1;
                                if(v126) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x1) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v132 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v133 = (v9 >>> 15) & 0x1;
                                    char v134 = __parity__((unsigned char)(v9 >>> 8));
                                    char v135 = 0;
                                    char v136 = 0;
                                }
                                char v137 = (unsigned char)v9 == 118;
                                char v138 = (unsigned char)v9 < 118;
                                char v139 = __parity__((unsigned char)v9 - 118);
                                char v140 = (unsigned char)v9 < 118;
                                char v141 = ((((unsigned char)v9 - 118) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x76)) < 0;
                                char v142 = ((((unsigned char)v9 - 118) ^ ((unsigned char)v9 ^ 0x76)) >>> 4) & 0x1;
                                if(v137) {
                                    v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)((unsigned char)(v9 >>> 8) | 0x4) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                                    char v143 = (unsigned char)(v9 >>> 8) ? 0: 1;
                                    char v144 = (v9 >>> 15) & 0x1;
                                    char v145 = __parity__((unsigned char)(v9 >>> 8));
                                    char v146 = 0;
                                    char v147 = 0;
                                }
                                v13 = (unsigned char)v9 == 45;
                                char v148 = (unsigned char)v9 < 45;
                                char v149 = __parity__((unsigned char)v9 - 45);
                                char v150 = (unsigned char)v9 < 45;
                                char v151 = ((((unsigned char)v9 - 45) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x2d)) < 0;
                                v28 = ((((unsigned char)v9 - 45) ^ ((unsigned char)v9 ^ 0x2d)) >>> 4) & 0x1;
                            }
                        }
                        while(!v13);
                        gvar_804C2B8 = (unsigned char)(v9 >>> 8);
                        goto loc_80480CA;
                    }
                }
                --ptr2;
                *ptr2 = ptr1;
                gvar_804C2B8 = (unsigned char)(v9 >>> 8);
                goto loc_80480CA;
            }
        }
        while(!v10);
        --ptr2;
        *ptr2 = ptr1;
        gvar_804C2B8 = (unsigned char)(v9 >>> 8);
    }
loc_80480E6:
    char v152 = gvar_804C2B8 ? 0: 1;
    char v153 = gvar_804C2B8 >= 128;
    char v154 = __parity__(gvar_804C2B8);
    char v155 = 0;
    char v156 = 0;
    if(v152) {
        int v157 = 0;
        v8 = 1;
        v7 = 0;
        v6 = 1;
        v5 = 0;
        v4 = 0;
        v3 = 0x2000;
        v2 = 134513324;
        ptr1 = NULL;
        --ptr2;
        *ptr2 = 3;
        v1 = *ptr2;
        ++ptr2;
        interrupt(128);
    }
    ptr0 = (unsigned char*)0x80482AC;
    while(1) {
        --ptr2;
        *ptr2 = &loc_8048139;
        /*BAD_CALL!*/ sub_80481E2();
        if(v153) {
            break;
        }
        else {
            int v158 = (unsigned int)(unsigned char)v12 | ((unsigned int)gvar_804C2B8 << 8) | ((unsigned int)(unsigned short)(v12 >>> 16) << 16);
            char v159 = v14 == 10;
            char v160 = (unsigned char)v158 < 10;
            char v161 = __parity__((unsigned char)v158 - 10);
            char v162 = (unsigned char)v158 < 10;
            char v163 = ((((unsigned char)v158 - 10) ^ (unsigned char)v158) & ((unsigned char)v158 ^ 0xa)) < 0;
            char v164 = ((((unsigned char)v158 - 10) ^ ((unsigned char)v158 ^ 0xa)) >>> 4) & 0x1;
            if(!v159) {
                char v165 = (unsigned char)v158 == 9;
                char v166 = (unsigned char)v158 < 9;
                char v167 = __parity__((unsigned char)v158 - 9);
                char v168 = (unsigned char)v158 < 9;
                char v169 = ((((unsigned char)v158 - 9) ^ (unsigned char)v158) & ((unsigned char)v158 ^ 0x9)) < 0;
                v28 = ((((unsigned char)v158 - 9) ^ ((unsigned char)v158 ^ 0x9)) >>> 4) & 0x1;
                if(!v165) {
                    char v170 = (unsigned char)(v158 >>> 8) & 0x4 ? 0: 1;
                    v153 = ((unsigned char)(v158 >>> 8) & 0x4) < 0;
                    char v171 = __parity__((unsigned char)(v158 >>> 8) & 0x4);
                    char v172 = 0;
                    char v173 = 0;
                    if(!v170) {
                        char v174 = (unsigned char)v158 == 128;
                        char v175 = (unsigned char)v158 < -128;
                        char v176 = __parity__((unsigned char)v158 - 128);
                        char v177 = (unsigned char)v158 < 128;
                        char v178 = ((((unsigned char)v158 - 128) ^ (unsigned char)v158) & ((unsigned char)v158 ^ 0x80)) < 0;
                        char v179 = ((((unsigned char)v158 - 128) ^ ((unsigned char)v158 ^ 0x80)) >>> 4) & 0x1;
                        if(!v177) {
                            --ptr2;
                            *ptr2 = v158;
                            --ptr2;
                            *ptr2 = &loc_804815E;
                            int v180 = /*BAD_CALL!*/ sub_8048202();
                            v180 = (unsigned int)45 | ((unsigned int)((v180 >>> 8) & 0xffffff) << 8);
                            --ptr2;
                            *ptr2 = &loc_8048165;
                            int v181 = /*BAD_CALL!*/ sub_8048202();
                            v158 = *ptr2;
                            ++ptr2;
                            v158 = (unsigned int)((unsigned char)v158 & 0x7f) | ((unsigned int)((v158 >>> 8) & 0xffffff) << 8);
                            char v182 = (unsigned char)v158 ? 0: 1;
                            char v183 = (v158 >>> 7) & 0x1;
                            char v184 = __parity__((unsigned char)v158);
                            char v185 = 0;
                            char v186 = 0;
                        }
                        char v187 = (unsigned char)v158 == 32;
                        v153 = (unsigned char)v158 < 32;
                        char v188 = __parity__((unsigned char)v158 - 32);
                        char v189 = (unsigned char)v158 < 32;
                        char v190 = ((((unsigned char)v158 - 32) ^ (unsigned char)v158) & ((unsigned char)v158 ^ 0x20)) < 0;
                        v28 = ((((unsigned char)v158 - 32) ^ ((unsigned char)v158 ^ 0x20)) >>> 4) & 0x1;
                        if(v189) {
                            goto loc_8048178;
                        }
                    }
                }
                else {
                    char v191 = (unsigned char)(v158 >>> 8) & 0x1 ? 0: 1;
                    v153 = ((unsigned char)(v158 >>> 8) & 0x1) < 0;
                    char v192 = __parity__((unsigned char)(v158 >>> 8) & 0x1);
                    char v193 = 0;
                    char v194 = 0;
                    if(!v191) {
                    loc_8048178:
                        --ptr2;
                        *ptr2 = v158;
                        v158 = (unsigned int)94 | ((unsigned int)((v158 >>> 8) & 0xffffff) << 8);
                        --ptr2;
                        *ptr2 = &loc_8048180;
                        int v195 = /*BAD_CALL!*/ sub_8048202();
                        unsigned char v196 = (unsigned char)*ptr2;
                        int v197 = (unsigned int)((*ptr2 >>> 8) & 0xffffff);
                        ++ptr2;
                        v0 = v196;
                        v196 += 64;
                        char v198 = v196 ? 0: 1;
                        v153 = v196 >= 128;
                        char v199 = __parity__(v196);
                        v28 = (((v0 ^ 0x40) ^ v196) >>> 4) & 0x1;
                        char v200 = v0 >= 192;
                        char v201 = (char)((v196 ^ v0) & ~(v0 ^ 0x40)) < 0;
                    }
                }
                --ptr2;
                *ptr2 = &loc_8048171;
                int v202 = /*BAD_CALL!*/ sub_8048202();
            }
            else {
                char v203 = (unsigned char)(v158 >>> 8) & 0x8 ? 0: 1;
                char v204 = ((unsigned char)(v158 >>> 8) & 0x8) < 0;
                char v205 = __parity__((unsigned char)(v158 >>> 8) & 0x8);
                char v206 = 0;
                char v207 = 0;
                if(!v203) {
                    char v208 = gvar_804C2BA == 10;
                    char v209 = (char)gvar_804C2BA < 10;
                    char v210 = __parity__(gvar_804C2BA - 10);
                    char v211 = gvar_804C2BA < 10;
                    char v212 = (((gvar_804C2BA - 10) ^ gvar_804C2BA) & (gvar_804C2BA ^ 0xa)) < 0;
                    char v213 = (((gvar_804C2BA - 10) ^ (gvar_804C2BA ^ 0xa)) >>> 4) & 0x1;
                    if(v208) {
                        char v214 = gvar_804C2BB == 10;
                        v153 = (char)gvar_804C2BB < 10;
                        char v215 = __parity__(gvar_804C2BB - 10);
                        char v216 = gvar_804C2BB < 10;
                        char v217 = (((gvar_804C2BB - 10) ^ gvar_804C2BB) & (gvar_804C2BB ^ 0xa)) < 0;
                        v28 = (((gvar_804C2BB - 10) ^ (gvar_804C2BB ^ 0xa)) >>> 4) & 0x1;
                        if(v214) {
                            continue;
                        }
                    }
                }
                char v218 = (unsigned char)(v158 >>> 8) & 0x2 ? 0: 1;
                char v219 = ((unsigned char)(v158 >>> 8) & 0x2) < 0;
                char v220 = __parity__((unsigned char)(v158 >>> 8) & 0x2);
                char v221 = 0;
                char v222 = 0;
                if(!v218) {
                    ptr1 = (unsigned int)gvar_804C2BA | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                    --ptr2;
                    *ptr2 = &loc_80481B0;
                    v158 = /*BAD_CALL!*/ sub_8048202();
                    gvar_804C2BA = (unsigned char)ptr1;
                    v158 = (unsigned int)10 | ((unsigned int)((v158 >>> 8) & 0xffffff) << 8);
                }
                char v223 = (unsigned char)(v158 >>> 8) & 0x20 ? 0: 1;
                char v224 = ((unsigned char)(v158 >>> 8) & 0x20) < 0;
                char v225 = __parity__((unsigned char)(v158 >>> 8) & 0x20);
                char v226 = 0;
                char v227 = 0;
                if(!v223) {
                    char v228 = (unsigned char)v158 == gvar_804C2BA;
                    char v229 = (unsigned char)v158 > (char)gvar_804C2BA;
                    char v230 = __parity__(gvar_804C2BA - (unsigned char)v158);
                    char v231 = (unsigned char)v158 > gvar_804C2BA;
                    char v232 = (((gvar_804C2BA - (unsigned char)v158) ^ gvar_804C2BA) & ((unsigned char)v158 ^ gvar_804C2BA)) < 0;
                    char v233 = (((gvar_804C2BA - (unsigned char)v158) ^ ((unsigned char)v158 ^ gvar_804C2BA)) >>> 4) & 0x1;
                    if(v228) {
                        unsigned char v234 = gvar_804C2B9;
                        ++gvar_804C2B9;
                        char v235 = gvar_804C2B9 ? 0: 1;
                        char v236 = gvar_804C2B9 >= 128;
                        char v237 = __parity__(gvar_804C2B9);
                        char v238 = (((v234 ^ 0x1) ^ gvar_804C2B9) >>> 4) & 0x1;
                        char v239 = (char)((gvar_804C2B9 ^ v234) & ~(v234 ^ 0x1)) < 0;
                    }
                }
                --ptr2;
                *ptr2 = &loc_80481D0;
                int v240 = /*BAD_CALL!*/ sub_8048202();
                v0 = gvar_804C2B9;
                gvar_804C2B9 += 0xff;
                char v241 = gvar_804C2B9 ? 0: 1;
                v153 = gvar_804C2B9 >= 128;
                char v242 = __parity__(gvar_804C2B9);
                v28 = ((~gvar_804C2B9 ^ ~v0) >>> 4) & 0x1;
                char v243 = (char)((gvar_804C2B9 ^ v0) & v0) < 0;
            }
        }
    }
loc_80480CA:
    unsigned short* ptr5 = *ptr2;
    ++ptr2;
    ptr1 = ptr5;
    char v244 = ptr1 ? 0: 1;
    char v245 = (int)ptr1 < 0;
    char v246 = __parity__((unsigned char)ptr1);
    char v247 = 0;
    char v248 = 0;
    if(!v244) {
        v16 = 0;
        char v249 = *ptr1 == 45;
        char v250 = *ptr1 < 45;
        char v251 = __parity__((unsigned char)*ptr1 - 45);
        char v252 = *ptr1 < 45;
        char v253 = (((*ptr1 - 45) ^ *ptr1) & (*ptr1 ^ 0x2d)) < 0;
        v28 = (((*ptr1 - 45) ^ (*ptr1 ^ 0x2d)) >>> 4) & 0x1;
        if(v249) {
            goto loc_80480E6;
        }
        else {
            v2 = 0;
            v8 = 1;
            v7 = 0;
            v6 = 1;
            v5 = 0;
            v4 = 0;
            --ptr2;
            *ptr2 = 5;
            v1 = *ptr2;
            ++ptr2;
            interrupt(128);
        }
    }
    unsigned int v254 = gvar_804C2B0;
    v3 = gvar_804C2B0;
    v8 = v3 ? 0: 1;
    v7 = v3 >= 0x80000000;
    v6 = __parity__((unsigned char)v3);
    v5 = 0;
    v4 = 0;
    if(!v8) {
        v2 = &gvar_804A2AC;
        --ptr2;
        *ptr2 = 1;
        ptr1 = *ptr2;
        *ptr2 = 4;
        v1 = *ptr2;
        ++ptr2;
        interrupt(128);
    }
    ptr1 = NULL;
    --ptr2;
    *ptr2 = 1;
    v1 = *ptr2;
    ++ptr2;
    interrupt(128);
}

void sub_80481E2() {
    unsigned int v0 = gvar_804C2AC;
    --gvar_804C2AC;
    char v1 = gvar_804C2AC ? 0: 1;
    char v2 = gvar_804C2AC >= 0x80000000;
    char v3 = __parity__((unsigned char)gvar_804C2AC);
    char v4 = ((~gvar_804C2AC ^ ~v0) >>> 4) & 0x1;
    char v5 = (int)((gvar_804C2AC ^ v0) & v0) < 0;
    jump v2 ? &sub_80481EC: &sub_80481EA;
}

char sub_80481EA() {
    char* ptr0;
    return *ptr0;
}

int sub_80481EC() {
    char v0;
    int v1;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = 0x2000;
    int v9 = 134513324;
    int v10 = v1;
    int v11 = 3;
    int v12 = 3;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048202() {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    char v4;
    char v5;
    char v6;
    int v7;
    unsigned int* ptr0 = &v3;
    char v8 = (unsigned char)(v7 >>> 8) & 0x10 ? 0: 1;
    char v9 = ((unsigned char)(v7 >>> 8) & 0x10) < 0;
    char v10 = __parity__((unsigned char)(v7 >>> 8) & 0x10);
    char v11 = 0;
    char v12 = 0;
    if(!v8) {
        char v13 = gvar_804C2B9 ? 0: 1;
        char v14 = gvar_804C2B9 >= 128;
        char v15 = __parity__(gvar_804C2B9);
        char v16 = 0;
        char v17 = 0;
        if(v13) {
            int v18 = (unsigned int)(unsigned char)v7 | ((unsigned int)gvar_804C2BA << 8) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
            int v19 = (unsigned int)(unsigned char)v7 | ((unsigned int)gvar_804C2BA << 8) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
            unsigned char v20 = gvar_804C2B9;
            ++gvar_804C2B9;
            char v21 = gvar_804C2B9 ? 0: 1;
            char v22 = gvar_804C2B9 >= 128;
            char v23 = __parity__(gvar_804C2B9);
            char v24 = (((v20 ^ 0x1) ^ gvar_804C2B9) >>> 4) & 0x1;
            char v25 = (char)((gvar_804C2B9 ^ v20) & ~(v20 ^ 0x1)) < 0;
            unsigned int v26 = gvar_804C2B4;
            unsigned int v27 = gvar_804C2B4;
            unsigned int v28 = v26 + 1;
            char v29 = v28 ? 0: 1;
            char v30 = v28 >= 0x80000000;
            char v31 = __parity__((unsigned char)v28);
            char v32 = (((v27 ^ 0x1) ^ v28) >>> 4) & 0x1;
            char v33 = (int)((v28 ^ v27) & ~(v27 ^ 0x1)) < 0;
            gvar_804C2B4 = v28;
            unsigned int v34 = 10;
            unsigned int v35 = 10;
            ptr0 = &v19;
            unsigned int v36 = 0;
            char v37 = 1;
            char v38 = 0;
            char v39 = 1;
            char v40 = 0;
            char v41 = 0;
            do {
                int v42 = 0;
                unsigned int v43 = v28 % 10;
                unsigned int v44 = v28 / 10;
                unsigned char v45 = (unsigned char)v43;
                v2 = (unsigned int)((unsigned char)v43 + 48) | ((unsigned int)((v43 >>> 8) & 0xffffff) << 8);
                char v46 = (unsigned char)v43 + 48 ? 0: 1;
                char v47 = (v2 >>> 7) & 0x1;
                char v48 = __parity__((unsigned char)v2);
                char v49 = (((v45 ^ 0x30) ^ (unsigned char)v2) >>> 4) & 0x1;
                char v50 = v45 >= 208;
                char v51 = (((unsigned char)v2 ^ v45) & ~(v45 ^ 0x30)) < 0;
                --ptr0;
                *ptr0 = v2;
                ++v36;
                v28 = v44;
                v5 = v28 ? 0: 1;
                char v52 = v28 >= 0x80000000;
                char v53 = __parity__((unsigned char)v28);
                char v54 = 0;
                char v55 = 0;
            }
            while(!v5);
            --ptr0;
            *ptr0 = 6;
            unsigned int v56 = *ptr0;
            ++ptr0;
            unsigned int v57 = v56;
            v1 = v56 - v36;
            char v58 = v1 ? 0: 1;
            char v59 = v1 >= 0x80000000;
            char v60 = __parity__((unsigned char)v1);
            char v61 = (((v36 ^ v57) ^ v1) >>> 4) & 0x1;
            char v62 = v36 > v57;
            char v63 = (int)((v1 ^ v57) & (v36 ^ v57)) < 0;
            if(!v62 && !v58) {
                do {
                    --ptr0;
                    *ptr0 = v1;
                    --ptr0;
                    *ptr0 = &loc_804824A;
                    v28 = (unsigned int)/*BAD_CALL!*/ sub_8048202(*(int*)(ptr0 + 1));
                    int v64 = *ptr0;
                    ++ptr0;
                    int v65 = v64;
                    v1 = (unsigned int)(v64 - 1);
                    v4 = v1 ? 0: 1;
                    char v66 = v1 >= 0x80000000;
                    char v67 = __parity__((unsigned char)v1);
                    char v68 = ((~v1 ^ ~v65) >>> 4) & 0x1;
                    char v69 = ((v1 ^ v65) & v65) < 0;
                }
                while(!v4);
            }
            do {
                int v70 = *ptr0;
                *ptr0 = &loc_8048254;
                v0 = /*BAD_CALL!*/ sub_8048202(*(int*)(ptr0 + 1));
                unsigned int v71 = v36;
                --v36;
                v6 = v36 ? 0: 1;
                char v72 = v36 >= 0x80000000;
                char v73 = __parity__((unsigned char)v36);
                char v74 = ((~v36 ^ ~v71) >>> 4) & 0x1;
                char v75 = (int)((v36 ^ v71) & v71) < 0;
            }
            while(!v6);
            v0 = (unsigned int)32 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            --ptr0;
            *ptr0 = &loc_804825E;
            int v76 = /*BAD_CALL!*/ sub_8048202(*(int*)(ptr0 + 1));
            v76 = (unsigned int)32 | ((unsigned int)((v76 >>> 8) & 0xffffff) << 8);
            --ptr0;
            *ptr0 = &loc_8048265;
            int v77 = /*BAD_CALL!*/ sub_8048202(*(int*)(ptr0 + 1));
            v7 = *ptr0;
            ++ptr0;
            gvar_804C2BA = (unsigned char)(v7 >>> 8);
        }
    }
    unsigned int v78 = gvar_804C2B0;
    unsigned int v79 = gvar_804C2B0;
    char* ptr1 = (char*)(v78 + &gvar_804A2AC);
    char v80 = ptr1 ? 0: 1;
    char v81 = (int)ptr1 < 0;
    char v82 = __parity__((unsigned char)ptr1);
    char v83 = (int*)((int)(int*)((int)(int*)((v79 ^ &gvar_804A2AC) ^ (int)ptr1) >>> 4) & 0x1);
    char v84 = v79 >= 4160445780;
    char v85 = (int)(int*)((int)(int*)((int)ptr1 ^ v79) & ~(v79 ^ &gvar_804A2AC)) < 0;
    *ptr1 = (unsigned char)v7;
    int* ptr2 = (int*)(ptr1 + 1);
    unsigned int v86 = gvar_804C2B0;
    ++gvar_804C2B0;
    char v87 = gvar_804C2B0 ? 0: 1;
    char v88 = gvar_804C2B0 >= 0x80000000;
    char v89 = __parity__((unsigned char)gvar_804C2B0);
    char v90 = (((v86 ^ 0x1) ^ gvar_804C2B0) >>> 4) & 0x1;
    char v91 = (int)((gvar_804C2B0 ^ v86) & ~(v86 ^ 0x1)) < 0;
    unsigned char v92 = gvar_804C2BA;
    gvar_804C2BA = (unsigned char)v7;
    v7 = (unsigned int)v92 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    gvar_804C2BB = v92;
    char v93 = ptr2 == &gvar_804C2AC;
    char v94 = (int)ptr2 < &gvar_804C2AC;
    char v95 = __parity__((unsigned char)ptr2 - 172);
    char v96 = (unsigned int)ptr2 < &gvar_804C2AC;
    char v97 = (int)(int*)((int)(int*)((int)(ptr2 - 33632427) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ &gvar_804C2AC)) < 0;
    char v98 = (int*)((int)(int*)((int)(int*)((int)(ptr2 - 33632427) ^ (int)(int*)((int)ptr2 ^ &gvar_804C2AC)) >>> 4) & 0x1);
    if(!v96) {
        int v99 = 0;
        v93 = 1;
        v94 = 0;
        v95 = 1;
        v97 = 0;
        v96 = 0;
        v2 = 0x2000;
        int v100 = &gvar_804A2AC;
        --ptr0;
        *ptr0 = 1;
        v1 = *ptr0;
        *ptr0 = 4;
        v7 = *ptr0;
        ++ptr0;
        interrupt(128);
    }
    ptr2 = *ptr0;
    ++ptr0;
    v86 = *ptr0;
    ++ptr0;
    jump v86;
}
