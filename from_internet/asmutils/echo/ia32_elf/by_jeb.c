
int start(int param0, int param1) {
    int v0;
    int v1;
    char v2;
    int v3;
    char* ptr0 = (char*)&gvar_804816B;
    int v4 = &gvar_804816B;
    int v5 = v1;
    unsigned int* ptr1 = &param0;
    int v6 = v5;
    int v7 = v5 - 1;
    char v8 = v7 ? 0: 1;
    char v9 = v7 < 0;
    char v10 = __parity__((unsigned char)v7);
    char v11 = ((~v7 ^ ~v6) >>> 4) & 0x1;
    char v12 = ((v7 ^ v6) & v6) < 0;
    if(!v8) {
        int v13 = param0;
        ptr1 = &param1;
    loc_8048068:
        while(1) {
            char* ptr2 = *ptr1;
            ++ptr1;
            char* ptr3 = ptr2;
            char* ptr4 = ptr2;
            char v14 = ptr4 ? 0: 1;
            char v15 = (int)ptr4 < 0;
            char v16 = __parity__((unsigned char)ptr4);
            char v17 = 0;
            char v18 = 0;
            if(v14) {
                break;
            }
            else {
                v0 = (unsigned int)*ptr4 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                char* ptr5 = ptr4 + 1;
                char v19 = (unsigned char)v0 == 45;
                char v20 = (unsigned char)v0 < 45;
                char v21 = __parity__((unsigned char)v0 - 45);
                char v22 = (unsigned char)v0 < 45;
                char v23 = ((((unsigned char)v0 - 45) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x2d)) < 0;
                char v24 = ((((unsigned char)v0 - 45) ^ ((unsigned char)v0 ^ 0x2d)) >>> 4) & 0x1;
                if(v19) {
                    int v25 = v3 & 0xffff00ff;
                    char v26 = (unsigned char)(v25 >>> 8) ? 0: 1;
                    char v27 = (v25 >>> 15) & 0x1;
                    char v28 = __parity__((unsigned char)(v25 >>> 8));
                    char v29 = 0;
                    char v30 = 0;
                    while(1) {
                        v0 = (unsigned int)*ptr5 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                        ++ptr5;
                        char v31 = (unsigned char)v0 ? 0: 1;
                        char v32 = (v0 >>> 7) & 0x1;
                        char v33 = __parity__((unsigned char)v0);
                        char v34 = 0;
                        char v35 = 0;
                        if(v31) {
                            break;
                        }
                        else {
                            v25 = (unsigned int)1 | ((unsigned int)((v25 >>> 8) & 0xffffff) << 8);
                            char v36 = (unsigned char)v0 == 110;
                            char v37 = (unsigned char)v0 < 110;
                            char v38 = __parity__((unsigned char)v0 - 110);
                            char v39 = (unsigned char)v0 < 110;
                            char v40 = ((((unsigned char)v0 - 110) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x6e)) < 0;
                            char v41 = ((((unsigned char)v0 - 110) ^ ((unsigned char)v0 ^ 0x6e)) >>> 4) & 0x1;
                            if(!v36) {
                                v25 = (unsigned int)2 | ((unsigned int)((v25 >>> 8) & 0xffffff) << 8);
                                char v42 = (unsigned char)v0 == 101;
                                char v43 = (unsigned char)v0 < 101;
                                char v44 = __parity__((unsigned char)v0 - 101);
                                char v45 = (unsigned char)v0 < 101;
                                char v46 = ((((unsigned char)v0 - 101) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x65)) < 0;
                                char v47 = ((((unsigned char)v0 - 101) ^ ((unsigned char)v0 ^ 0x65)) >>> 4) & 0x1;
                                if(!v42) {
                                    v25 = (unsigned int)4 | ((unsigned int)((v25 >>> 8) & 0xffffff) << 8);
                                    char v48 = (unsigned char)v0 == 69;
                                    char v49 = (unsigned char)v0 < 69;
                                    char v50 = __parity__((unsigned char)v0 - 69);
                                    char v51 = (unsigned char)v0 < 69;
                                    char v52 = ((((unsigned char)v0 - 69) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x45)) < 0;
                                    char v53 = ((((unsigned char)v0 - 69) ^ ((unsigned char)v0 ^ 0x45)) >>> 4) & 0x1;
                                    if(!v48) {
                                        v3 = v25 & 0xffff00ff;
                                        char v54 = (unsigned char)(v3 >>> 8) ? 0: 1;
                                        char v55 = (v3 >>> 15) & 0x1;
                                        char v56 = __parity__((unsigned char)(v3 >>> 8));
                                        char v57 = 0;
                                        char v58 = 0;
                                        goto loc_80480CB;
                                    }
                                }
                            }
                            v25 = (unsigned int)(unsigned char)v25 | ((unsigned int)((unsigned char)(v25 >>> 8) | (unsigned char)v25) << 8) | ((unsigned int)(unsigned short)(v25 >>> 16) << 16);
                            char v59 = (unsigned char)(v25 >>> 8) ? 0: 1;
                            char v60 = (v25 >>> 15) & 0x1;
                            char v61 = __parity__((unsigned char)(v25 >>> 8));
                            char v62 = 0;
                            char v63 = 0;
                        }
                    }
                    v3 = v25;
                    char v64 = (unsigned char)(v3 >>> 8) ? 0: 1;
                    char v65 = (v3 >>> 15) & 0x1;
                    char v66 = __parity__((unsigned char)(v3 >>> 8));
                    char v67 = 0;
                    char v68 = 0;
                    if(!v64) {
                        gvar_804816A = (unsigned char)((unsigned char)(v3 >>> 8) | gvar_804816A);
                        char v69 = gvar_804816A ? 0: 1;
                        char v70 = gvar_804816A >= 128;
                        char v71 = __parity__(gvar_804816A);
                        char v72 = 0;
                        char v73 = 0;
                        continue;
                    }
                }
            loc_80480CB:
                while(1) {
                    char* ptr6 = ptr2;
                    ptr4 = ptr2;
                    char v74 = ptr4 ? 0: 1;
                    char v75 = (int)ptr4 < 0;
                    char v76 = __parity__((unsigned char)ptr4);
                    char v77 = 0;
                    char v78 = 0;
                    if(v74) {
                        break loc_8048068;
                    }
                    else {
                    loc_80480D1:
                        do {
                            while(1) {
                                v0 = (unsigned int)*ptr4 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                ++ptr4;
                                ptr2 = NULL;
                                char v79 = 1;
                                char v80 = 0;
                                char v81 = 1;
                                char v82 = 0;
                                char v83 = 0;
                                v3 = (unsigned int)gvar_804816A | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                                char v84 = gvar_804816A & 0x4 ? 0: 1;
                                char v85 = ((unsigned char)v3 & 0x4) < 0;
                                char v86 = __parity__((unsigned char)v3 & 0x4);
                                char v87 = 0;
                                char v88 = 0;
                                if(v84) {
                                    char v89 = (unsigned char)v3 & 0x2 ? 0: 1;
                                    char v90 = ((unsigned char)v3 & 0x2) < 0;
                                    char v91 = __parity__((unsigned char)v3 & 0x2);
                                    char v92 = 0;
                                    char v93 = 0;
                                    if(!v89) {
                                        char v94 = (unsigned char)v0 == 92;
                                        char v95 = (unsigned char)v0 < 92;
                                        char v96 = __parity__((unsigned char)v0 - 92);
                                        char v97 = (unsigned char)v0 < 92;
                                        char v98 = ((((unsigned char)v0 - 92) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x5c)) < 0;
                                        char v99 = ((((unsigned char)v0 - 92) ^ ((unsigned char)v0 ^ 0x5c)) >>> 4) & 0x1;
                                        if(v94) {
                                            v0 = (unsigned int)*ptr4 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                            ++ptr4;
                                            char v100 = (unsigned char)v0 == 92;
                                            char v101 = (unsigned char)v0 < 92;
                                            char v102 = __parity__((unsigned char)v0 - 92);
                                            char v103 = (unsigned char)v0 < 92;
                                            char v104 = ((((unsigned char)v0 - 92) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x5c)) < 0;
                                            char v105 = ((((unsigned char)v0 - 92) ^ ((unsigned char)v0 ^ 0x5c)) >>> 4) & 0x1;
                                            if(!v100) {
                                                char v106 = (unsigned char)v0 == 99;
                                                char v107 = (unsigned char)v0 < 99;
                                                char v108 = __parity__((unsigned char)v0 - 99);
                                                char v109 = (unsigned char)v0 < 99;
                                                char v110 = ((((unsigned char)v0 - 99) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x63)) < 0;
                                                char v111 = ((((unsigned char)v0 - 99) ^ ((unsigned char)v0 ^ 0x63)) >>> 4) & 0x1;
                                                if(v106) {
                                                    gvar_804816A |= 1;
                                                    char v112 = gvar_804816A ? 0: 1;
                                                    char v113 = gvar_804816A >= 128;
                                                    char v114 = __parity__(gvar_804816A);
                                                    char v115 = 0;
                                                    char v116 = 0;
                                                    goto loc_80480D1;
                                                }
                                                else {
                                                    --ptr1;
                                                    *ptr1 = ptr0;
                                                    int v117 = 8;
                                                    int v118 = 8;
                                                    unsigned char* ptr7 = (unsigned char*)&gvar_804804C;
                                                    while(v117 != 0) {
                                                        v106 = (unsigned char)v0 == *ptr7;
                                                        char v119 = (unsigned char)v0 < *ptr7;
                                                        char v120 = __parity__((unsigned char)v0 - *ptr7);
                                                        char v121 = (unsigned char)v0 < *ptr7;
                                                        char v122 = ((((unsigned char)v0 - *ptr7) ^ (unsigned char)v0) & ((unsigned char)v0 ^ *ptr7)) < 0;
                                                        char v123 = ((((unsigned char)v0 - *ptr7) ^ ((unsigned char)v0 ^ *ptr7)) >>> 4) & 0x1;
                                                        ++ptr7;
                                                        --v117;
                                                        if(!~v106) {
                                                            break;
                                                        }
                                                    }
                                                    if(v106) {
                                                        unsigned int v124 = (unsigned int)(v117 + 1);
                                                        int v125 = 8;
                                                        v3 = 8 - v124;
                                                        char v126 = v3 ? 0: 1;
                                                        char v127 = v3 < 0;
                                                        char v128 = __parity__((unsigned char)v3);
                                                        char v129 = (((v124 ^ 0x8) ^ v3) >>> 4) & 0x1;
                                                        char v130 = v124 > 8;
                                                        char v131 = ((v124 ^ 0x8) & (v3 ^ 0x8)) < 0;
                                                        v0 = (unsigned int)*(char*)(v3 + 134512724) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                                        ptr0 = *ptr1;
                                                        ++ptr1;
                                                    }
                                                    else {
                                                        ptr0 = *ptr1;
                                                        *ptr1 = v0;
                                                        v3 = 0;
                                                        char v132 = 1;
                                                        char v133 = 0;
                                                        char v134 = 1;
                                                        char v135 = 0;
                                                        char v136 = 0;
                                                        v117 = (unsigned int)0x800 | ((unsigned int)(unsigned short)(v117 >>> 16) << 16);
                                                        while(1) {
                                                            char v137 = (unsigned char)v0 == 48;
                                                            char v138 = (unsigned char)v0 < 48;
                                                            char v139 = __parity__((unsigned char)v0 - 48);
                                                            char v140 = (unsigned char)v0 < 48;
                                                            char v141 = ((((unsigned char)v0 - 48) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x30)) < 0;
                                                            char v142 = ((((unsigned char)v0 - 48) ^ ((unsigned char)v0 ^ 0x30)) >>> 4) & 0x1;
                                                            if(v140) {
                                                                break;
                                                            }
                                                            else {
                                                                char v143 = (unsigned char)v0 == 55;
                                                                char v144 = (unsigned char)v0 < 55;
                                                                char v145 = __parity__((unsigned char)v0 - 55);
                                                                char v146 = (unsigned char)v0 < 55;
                                                                char v147 = ((((unsigned char)v0 - 55) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x37)) < 0;
                                                                char v148 = ((((unsigned char)v0 - 55) ^ ((unsigned char)v0 ^ 0x37)) >>> 4) & 0x1;
                                                                if(!v146 && !v143) {
                                                                    break;
                                                                }
                                                                else {
                                                                    unsigned char v149 = (unsigned char)v0;
                                                                    v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                                                    char v150 = (unsigned char)v0 ? 0: 1;
                                                                    char v151 = (v0 >>> 7) & 0x1;
                                                                    char v152 = __parity__((unsigned char)v0);
                                                                    char v153 = (((v149 ^ 0x30) ^ (unsigned char)v0) >>> 4) & 0x1;
                                                                    char v154 = v149 < 48;
                                                                    char v155 = (((unsigned char)v0 ^ v149) & (v149 ^ 0x30)) < 0;
                                                                    v3 = (unsigned int)(unsigned char)v3 | ((unsigned int)(unsigned char)v0 << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
                                                                    v0 = (unsigned int)((unsigned short)(unsigned char)(v117 >>> 8) * (unsigned short)(unsigned char)v3) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                                                                    char v156 = (unsigned char)(v0 >>> 8) ? 1: 0;
                                                                    char v157 = (unsigned char)(v0 >>> 8) ? 1: 0;
                                                                    v3 = (unsigned int)((unsigned char)(v3 >>> 8) + (unsigned char)v0) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                                                                    char v158 = (unsigned char)v117 == 2;
                                                                    char v159 = (unsigned char)v117 < 2;
                                                                    char v160 = __parity__((unsigned char)v117 - 2);
                                                                    char v161 = (unsigned char)v117 < 2;
                                                                    char v162 = ((((unsigned char)v117 - 2) ^ (unsigned char)v117) & ((unsigned char)v117 ^ 0x2)) < 0;
                                                                    char v163 = ((((unsigned char)v117 - 2) ^ ((unsigned char)v117 ^ 0x2)) >>> 4) & 0x1;
                                                                    if(v158) {
                                                                        v117 = (unsigned int)0xff | ((unsigned int)((v117 >>> 8) & 0xffffff) << 8);
                                                                        break;
                                                                    }
                                                                    else {
                                                                        v0 = (unsigned int)*ptr4 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                                                        ++ptr4;
                                                                        int v164 = v117;
                                                                        ++v117;
                                                                        char v165 = v117 ? 0: 1;
                                                                        char v166 = v117 < 0;
                                                                        char v167 = __parity__((unsigned char)v117);
                                                                        char v168 = (((v164 ^ 0x1) ^ v117) >>> 4) & 0x1;
                                                                        char v169 = ((v117 ^ v164) & ~(v164 ^ 0x1)) < 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        v0 = *ptr1;
                                                        ++ptr1;
                                                        char v170 = (unsigned char)v117 ? 0: 1;
                                                        char v171 = (v117 >>> 7) & 0x1;
                                                        char v172 = __parity__((unsigned char)v117);
                                                        char v173 = 0;
                                                        char v174 = 0;
                                                        if(!v170) {
                                                            char v175 = (unsigned char)v117 == 0xff;
                                                            char v176 = (unsigned char)v117 < -1;
                                                            char v177 = __parity__((unsigned char)v117 - 0xff);
                                                            char v178 = (unsigned char)v117 < 0xff;
                                                            char v179 = ((((unsigned char)v117 - 0xff) ^ (unsigned char)v117) & ~(unsigned char)v117) < 0;
                                                            char v180 = ((((unsigned char)v117 - 0xff) ^ ~(unsigned char)v117) >>> 4) & 0x1;
                                                            if(!v175) {
                                                                char* ptr8 = ptr4;
                                                                --ptr4;
                                                                char v181 = ptr4 ? 0: 1;
                                                                char v182 = (int)ptr4 < 0;
                                                                char v183 = __parity__((unsigned char)ptr4);
                                                                char v184 = (((char*)~(int)ptr4 ^ (char*)~(int)ptr8) >>> 4) & 0x1;
                                                                char v185 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr8) & (int)ptr8) < 0;
                                                            }
                                                            v0 = (unsigned int)(unsigned char)v3 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                                            char v186 = (unsigned char)v3 ? 0: 1;
                                                            char v187 = (v0 >>> 7) & 0x1;
                                                            char v188 = __parity__((unsigned char)v0);
                                                            char v189 = 0;
                                                            char v190 = 0;
                                                            if(v186) {
                                                                int v191 = 0;
                                                                ptr2 = (char*)0x1;
                                                                char v192 = 0;
                                                                char v193 = 0;
                                                                char v194 = 0;
                                                                char v195 = 0;
                                                                char v196 = 0;
                                                            }
                                                        }
                                                        else {
                                                            --ptr1;
                                                            *ptr1 = v0;
                                                            *ptr0 = 92;
                                                            ++ptr0;
                                                            v0 = *ptr1;
                                                            ++ptr1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                break;
                            }
                            *ptr0 = (unsigned char)v0;
                            ++ptr0;
                            char v197 = (unsigned char)v0 ? 0: 1;
                            char v198 = (v0 >>> 7) & 0x1;
                            char v199 = __parity__((unsigned char)v0);
                            char v200 = 0;
                            char v201 = 0;
                            if(!v197) {
                                goto loc_80480D1;
                            }
                            else {
                                v2 = ptr2 ? 0: 1;
                                char v202 = (int)ptr2 < 0;
                                char v203 = __parity__((unsigned char)ptr2);
                                char v204 = 0;
                                char v205 = 0;
                            }
                        }
                        while(!v2);
                        v0 = (unsigned int)32 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                        *ptr0 = 32;
                        ++ptr0;
                        ptr2 = *ptr1;
                        ++ptr1;
                    }
                }
            }
        }
    }
    char* ptr9 = ptr0;
    char* ptr10 = ptr0 - 1;
    char v206 = ptr10 ? 0: 1;
    char v207 = (int)ptr10 < 0;
    char v208 = __parity__((unsigned char)ptr10);
    char v209 = (((char*)~(int)ptr10 ^ (char*)~(int)ptr9) >>> 4) & 0x1;
    char v210 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr9) & (int)ptr9) < 0;
    char* ptr11 = ptr10;
    char* ptr12 = ptr11 - &gvar_804816B;
    char* ptr13 = ptr11 - &gvar_804816B;
    char v211 = ptr13 ? 0: 1;
    char v212 = (int)ptr13 < 0;
    char v213 = __parity__((unsigned char)ptr13);
    char v214 = 0;
    char v215 = 0;
    if(!v211) {
        --ptr10;
        ptr9 = ptr13;
        --ptr13;
        char v216 = ptr13 ? 0: 1;
        char v217 = (int)ptr13 < 0;
        char v218 = __parity__((unsigned char)ptr13);
        v209 = (((char*)~(int)ptr13 ^ (char*)~(int)ptr9) >>> 4) & 0x1;
        char v219 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr9) & (int)ptr9) < 0;
    }
    char v220 = gvar_804816A & 0x1 ? 0: 1;
    char v221 = (char)(gvar_804816A & 0x1) < 0;
    char v222 = __parity__(gvar_804816A & 0x1);
    char v223 = 0;
    char v224 = 0;
    if(v220) {
        v0 = (unsigned int)10 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        *ptr10 = 10;
        ++ptr10;
        ptr9 = ptr13;
        ++ptr13;
        v220 = ptr13 ? 0: 1;
        v221 = (int)ptr13 < 0;
        v222 = __parity__((unsigned char)ptr13);
        v209 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 0x1) ^ (int)ptr13) >>> 4) & 0x1);
        v223 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 0x1)) < 0;
    }
    int v225 = &gvar_804816B;
    --ptr1;
    *ptr1 = 1;
    int v226 = 1;
    *ptr1 = 4;
    int v227 = *ptr1;
    ++ptr1;
    interrupt(128);
}
