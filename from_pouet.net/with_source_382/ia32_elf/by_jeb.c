
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    __SyntheticTypeUnknownF v0;
    __int128 v1;
    __int128 v2;
    __SyntheticTypeUnknownF v3;
    char v4;
    char v5;
    int v6;
    unsigned int v7;
    char v8;
    __SyntheticTypeUnknownF v9;
    int v10;
    __SyntheticTypeUnknownF v11;
    char* ptr0;
    int v12;
    float* ptr1;
    __SyntheticTypeUnknownF v13;
    char v14;
    unsigned char v15;
    char v16;
    char* ptr2;
    char v17;
    void* ptr3;
    char v18;
    char v19;
    __SyntheticTypeUnknownF v20;
    __SyntheticTypeUnknownF v21;
    __SyntheticTypeUnknownF v22;
    int v23;
    unsigned int v24 = 0;
    char v25 = 1;
    char v26 = 0;
    char v27 = 1;
    char v28 = 0;
    char v29 = 0;
    int v30 = v10;
    int* ptr4 = &v30;
    char v31 = &v8 == 262364;
    char v32 = (int)&ptr2 < 0;
    char v33 = __parity__((unsigned char)&v8 - 220);
    char v34 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v30 ^ 0x400cc) ^ (int)&ptr2) >>> 4) & 0x1);
    char v35 = (unsigned int)&v30 < 262348;
    char v36 = (int)(int*)((int)(int*)((int)&v30 ^ (int)&ptr2) & (int)(int*)((int)&v30 ^ 0x400cc)) < 0;
    int v37 = 384;
    char* ptr5 = (char*)0x200;
    →SDL_SetVideoMode();
    ptr2 = ptr0;
    int v38 = *(int*)(ptr0 + 20);
    ptr5 = NULL;
    int v39 = v38;
    →SDL_ShowCursor();
    unsigned int v40 = &gvar_964CD20;
    int v41 = -192;
    int* ptr6 = &ptr5;
    char v42 = &v8 == 262364;
    char v43 = (int)&ptr2 < 0;
    char v44 = __parity__((unsigned char)&v8 - 220);
    char v45 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
    char v46 = (unsigned int)&ptr5 >= 0xfffffff0;
    char v47 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr5 ^ 0x10)) < 0;
    gvar_824A514 = 0xc2f00000;
    do {
        float* ptr7 = ptr1;
        int v48 = v24 * 12;
        char v49 = (long long)v24 * 12L != (long long)v48;
        char v50 = (long long)v24 * 12L != (long long)v48;
        unsigned int v51 = v40;
        v7 = 0xffffff00;
        v6 = v48 + &gvar_964CD20;
        do {
            unsigned int v52 = v51;
            char v53 = 6;
            __SyntheticTypeUnknownF v54 = (double)v7;
            int* ptr8 = &ptr3;
            char v55 = &v8 == 262364;
            char v56 = (int)&ptr2 < 0;
            char v57 = __parity__((unsigned char)&v8 - 220);
            char v58 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x4) ^ (int)&ptr2) >>> 4) & 0x1);
            char v59 = (unsigned int)&ptr3 >= 0xfffffffc;
            char v60 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr3 ^ 0x4)) < 0;
            unsigned int v61 = v7;
            ++v7;
            char v62 = v7 ? 0: 1;
            char v63 = v7 >= 0x80000000;
            char v64 = __parity__((unsigned char)v7);
            char v65 = (((v61 ^ 0x1) ^ v7) >>> 4) & 0x1;
            char v66 = (int)((v7 ^ v61) & ~(v61 ^ 0x1)) < 0;
            *(int*)v6 = v54;
            char v67 = 7;
            unsigned int v68 = v51;
            v51 += 12;
            char v69 = v51 ? 0: 1;
            char v70 = (int)v51 < 0;
            char v71 = __parity__((unsigned char)v51);
            char v72 = (((v68 ^ 0xc) ^ v51) >>> 4) & 0x1;
            char v73 = v68 >= 0xfffffff4;
            char v74 = (int)((v51 ^ v68) & ~(v68 ^ 0xc)) < 0;
            char v75 = 6;
            __SyntheticTypeUnknownF v76 = (double)v41;
            *(int*)(v6 + 4) = v76;
            char v77 = 7;
            *(int*)(v6 + 8) = 0x44000000;
            int v78 = v6;
            v6 += 12;
            char v79 = v6 ? 0: 1;
            char v80 = v6 < 0;
            char v81 = __parity__((unsigned char)v6);
            char v82 = (int*)((int)(int*)((int)(int*)((int)(int*)(v78 ^ 0xc) ^ v6) >>> 4) & 0x1);
            char v83 = (unsigned int)v78 >= 0xfffffff4;
            char v84 = (int)(int*)((int)(int*)(v6 ^ v78) & (int*)~(int)(int*)(v78 ^ 0xc)) < 0;
            ptr1 = sub_80484A2(v12);
            v14 = v7 == 0x100;
            char v85 = (int)v7 < 0x100;
            char v86 = __parity__((unsigned char)v7);
            char v87 = v7 < 0x100;
            char v88 = (((v7 - 0x100) ^ v7) & (v7 ^ 0x100)) < 0;
            char v89 = (((v7 - 0x100) ^ (v7 ^ 0x100)) >>> 4) & 0x1;
        }
        while(!v14);
        v24 += 0x200;
        unsigned int v90 = v40;
        v40 += 0x1800;
        char v91 = v40 ? 0: 1;
        char v92 = (int)v40 < 0;
        char v93 = __parity__((unsigned char)v40);
        char v94 = (((v90 ^ 0x1800) ^ v40) >>> 4) & 0x1;
        char v95 = v90 >= 0xffffe800;
        char v96 = (int)((v90 ^ v40) & ~(v90 ^ 0x1800)) < 0;
        ++v41;
        v5 = v24 == 0x30000;
        char v97 = (int)v24 < 0x30000;
        char v98 = __parity__((unsigned char)v24);
        char v99 = v24 < 0x30000;
        char v100 = (((v24 - 0x30000) ^ v24) & (v24 ^ 0x30000)) < 0;
        char v101 = (((v24 - 0x30000) ^ (v24 ^ 0x30000)) >>> 4) & 0x1;
    }
    while(!v5);
    int v102 = 0;
    void* ptr9 = (void*)0xFFFFFFF6;
    unsigned int v103 = 0;
    do {
        ptr3 = ptr9;
        unsigned int v104 = 0xffffffd3;
        char v105 = 6;
        int* ptr10 = &ptr3;
        char v106 = &v8 == 262364;
        char v107 = (int)&ptr2 < 0;
        char v108 = __parity__((unsigned char)&v8 - 220);
        char v109 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x4) ^ (int)&ptr2) >>> 4) & 0x1);
        char v110 = (unsigned int)&ptr3 >= 0xfffffffc;
        char v111 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr3 ^ 0x4)) < 0;
        unsigned int v112 = v103;
        int v113 = (float)ptr3;
        v4 = 7;
        unsigned int v114 = v112;
        unsigned char* ptr11 = (unsigned char*)(v112 + &gvar_8049A40);
        char v115 = ptr11 ? 0: 1;
        char v116 = (int)ptr11 < 0;
        char v117 = __parity__((unsigned char)ptr11);
        char v118 = (int*)((int)(int*)((int)(int*)((v114 ^ &gvar_8049A40) ^ (int)ptr11) >>> 4) & 0x1);
        char v119 = v114 >= 4160447936;
        char v120 = (int)(int*)((int)(int*)((int)ptr11 ^ v114) & ~(v114 ^ &gvar_8049A40)) < 0;
        unsigned char* ptr12 = ptr11;
        do {
            unsigned char* ptr13 = ptr12;
            char v121 = *ptr13 == 1;
            char v122 = *ptr13 < 1;
            char v123 = __parity__(*ptr13 - 1);
            char v124 = *ptr13 < 1;
            char v125 = (((*ptr13 - 1) ^ *ptr13) & (*ptr13 ^ 0x1)) < 0;
            char v126 = (((*ptr13 - 1) ^ (*ptr13 ^ 0x1)) >>> 4) & 0x1;
            if(v121) {
                unsigned int v127 = v7;
                v7 = (unsigned int)(v102 * 262272);
                char v128 = (long long)v102 * 262272L != (long long)v7;
                char v129 = (long long)v102 * 262272L != (long long)v7;
                int v130 = 1;
                v6 = &v16;
                int v131 = &v16;
                int v132 = v113;
                char v133 = 6;
                v4 = 7;
                int v134 = sub_8048775((float)v104, v132, 0xc1c80000, 0x40000000);
                int* ptr14 = &ptr5;
                char v135 = &v8 == 0x400e0;
                char v136 = (int)&ptr3 < 0;
                char v137 = __parity__((unsigned char)&v8 - 224);
                char v138 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0xc) ^ (int)&ptr3) >>> 4) & 0x1);
                char v139 = (unsigned int)&ptr5 >= 0xfffffff4;
                char v140 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr5) & (int*)~(int)(int*)((int)&ptr5 ^ 0xc)) < 0;
                int v141 = (int)(v7 + 136619296);
                →memcpy(v141, &v16, 262272);
                ++v102;
                int* ptr15 = &ptr5;
                char v142 = &v8 == 262364;
                char v143 = (int)&ptr2 < 0;
                char v144 = __parity__((unsigned char)&v8 - 220);
                char v145 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
                char v146 = (unsigned int)&ptr5 >= 0xfffffff0;
                char v147 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr5 ^ 0x10)) < 0;
                *(unsigned char*)((int)&gvar_824A59D + v7) = 0;
            }
            unsigned int v148 = v104;
            v104 += 4;
            char v149 = v104 ? 0: 1;
            char v150 = v104 >= 0x80000000;
            char v151 = __parity__((unsigned char)v104);
            char v152 = (((v148 ^ 0x4) ^ v104) >>> 4) & 0x1;
            char v153 = v148 >= 0xfffffffc;
            char v154 = (int)((v104 ^ v148) & ~(v148 ^ 0x4)) < 0;
            ++ptr12;
            v18 = v104 == 47;
            char v155 = (int)v104 < 47;
            char v156 = __parity__((unsigned char)v104 - 47);
            char v157 = v104 < 47;
            char v158 = (((v104 - 47) ^ v104) & (v104 ^ 0x2f)) < 0;
            char v159 = (((v104 - 47) ^ (v104 ^ 0x2f)) >>> 4) & 0x1;
        }
        while(!v18);
        ptr9 = (void*)((int)ptr9 + 4);
        v103 += 23;
        v19 = ptr9 == 14;
        char v160 = (int)ptr9 < 14;
        char v161 = __parity__((unsigned char)ptr9 - 14);
        char v162 = (unsigned int)ptr9 < 14;
        char v163 = (int)(int*)((int)(int*)((int)(int*)((int)ptr9 - 14) ^ (int)ptr9) & (int)(int*)((int)ptr9 ^ 0xe)) < 0;
        char v164 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 - 14) ^ (int)(int*)((int)ptr9 ^ 0xe)) >>> 4) & 0x1);
    }
    while(!v19);
    int v165 = &v16;
    int v166 = 0;
    char v167 = 1;
    char v168 = 0;
    char v169 = 1;
    char v170 = 0;
    char v171 = 0;
    int v172 = 0;
    char v173 = 1;
    char v174 = 0;
    char v175 = 1;
    char v176 = 0;
    char v177 = 0;
    int v178 = &v16;
    int v179 = 0xc1a00000;
    int v180 = sub_80486BA(0, 0, 0xc1200000, 0.0, 0, 0xbf800000);
    int* ptr16 = &v23;
    char v181 = &v8 == 0x400e0;
    char v182 = (int)&ptr3 < 0;
    char v183 = __parity__((unsigned char)&v8 - 224);
    char v184 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v185 = (unsigned int)&v23 >= 0xffffffe4;
    char v186 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(154716064, &v16, 262272);
    int v187 = 0;
    char v188 = 1;
    char v189 = 0;
    char v190 = 1;
    char v191 = 0;
    char v192 = 0;
    int v193 = &v16;
    int v194 = sub_8048775(0, 0x41f00000, 0xc20c0000, 0x41700000);
    int* ptr17 = &v23;
    char v195 = &v8 == 0x400e0;
    char v196 = (int)&ptr3 < 0;
    char v197 = __parity__((unsigned char)&v8 - 224);
    char v198 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v199 = (unsigned int)&v23 >= 0xffffffe4;
    char v200 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(0x93cc820, &v16, 262272);
    int v201 = 0;
    char v202 = 1;
    char v203 = 0;
    char v204 = 1;
    char v205 = 0;
    char v206 = 0;
    int v207 = 1;
    int v208 = 15;
    int v209 = sub_804881D(0, 0xc2c80000, 0xc1f00000, 0);
    int v210 = 0;
    char v211 = 1;
    char v212 = 0;
    char v213 = 1;
    char v214 = 0;
    char v215 = 0;
    int v216 = &v16;
    int v217 = sub_80486BA(0, 0x41f00000, 0, 0.0, 0xbf800000, 0);
    int* ptr18 = &v23;
    char v218 = &v8 == 0x400e0;
    char v219 = (int)&ptr3 < 0;
    char v220 = __parity__((unsigned char)&v8 - 224);
    char v221 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v222 = (unsigned int)&v23 >= 0xffffffe4;
    char v223 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(134521088, &v16, 262272);
    int v224 = 0;
    char v225 = 1;
    char v226 = 0;
    char v227 = 1;
    char v228 = 0;
    char v229 = 0;
    int v230 = &v16;
    char* ptr19 = ptr5;
    int v231 = v37;
    int v232 = 0x3f800000;
    int v233 = sub_80486BA(0, 0xc1a00000, 0, 0.0, 0x3f800000, 0);
    int* ptr20 = &v23;
    char v234 = &v8 == 0x400e0;
    char v235 = (int)&ptr3 < 0;
    char v236 = __parity__((unsigned char)&v8 - 224);
    char v237 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v238 = (unsigned int)&v23 >= 0xffffffe4;
    char v239 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(0x808a180, &v16, 262272);
    char* ptr21 = ptr5;
    int v240 = &v16;
    int v241 = v37;
    int v242 = 0;
    char v243 = 1;
    char v244 = 0;
    char v245 = 1;
    char v246 = 0;
    char v247 = 0;
    int v248 = sub_80486BA(0xc2480000, 0, 0, 1.0, 0, 0);
    int* ptr22 = &v23;
    char v249 = &v8 == 0x400e0;
    char v250 = (int)&ptr3 < 0;
    char v251 = __parity__((unsigned char)&v8 - 224);
    char v252 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v253 = (unsigned int)&v23 >= 0xffffffe4;
    char v254 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(135045632, &v16, 262272);
    int v255 = 0;
    char v256 = 1;
    char v257 = 0;
    char v258 = 1;
    char v259 = 0;
    char v260 = 0;
    int v261 = &v16;
    char* ptr23 = ptr5;
    int v262 = v37;
    int v263 = 0x41200000;
    int v264 = sub_80486BA(0x42480000, 0, 0, -1.0, 0, 0);
    int* ptr24 = &v23;
    char v265 = &v8 == 0x400e0;
    char v266 = (int)&ptr3 < 0;
    char v267 = __parity__((unsigned char)&v8 - 224);
    char v268 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v269 = (unsigned int)&v23 >= 0xffffffe4;
    char v270 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(0x810a280, &v16, 262272);
    char* ptr25 = ptr5;
    int v271 = &v16;
    int v272 = v37;
    int v273 = 0;
    char v274 = 1;
    char v275 = 0;
    char v276 = 1;
    char v277 = 0;
    char v278 = 0;
    int v279 = sub_80486BA(0, 0, 0x42200000, 0.0, 0, 0xbf800000);
    int* ptr26 = &v23;
    char v280 = &v8 == 0x400e0;
    char v281 = (int)&ptr3 < 0;
    char v282 = __parity__((unsigned char)&v8 - 224);
    char v283 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v284 = (unsigned int)&v23 >= 0xffffffe4;
    char v285 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(135570176, &v16, 262272);
    int v286 = 4;
    int v287 = &v16;
    int v288 = sub_8048775(0, 0x41800000, 0xc1a00000, 0x41700000);
    int* ptr27 = &v23;
    char v289 = &v8 == 0x400e0;
    char v290 = (int)&ptr3 < 0;
    char v291 = __parity__((unsigned char)&v8 - 224);
    char v292 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v293 = (unsigned int)&v23 >= 0xffffffe4;
    char v294 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(135832448, &v16, 262272);
    int* ptr28 = &ptr5;
    char v295 = &v8 == 0x400e0;
    char v296 = (int)&ptr3 < 0;
    char v297 = __parity__((unsigned char)&v8 - 224);
    char v298 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0xc) ^ (int)&ptr3) >>> 4) & 0x1);
    char v299 = (unsigned int)&ptr5 >= 0xfffffff4;
    char v300 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr5) & (int*)~(int)(int*)((int)&ptr5 ^ 0xc)) < 0;
    int v301 = 3;
    int v302 = &v16;
    int v303 = sub_8048613(-30.0, 0x41f00000, 0xc1a00000, 0x41200000, 0, 0xbf800000, 0);
    int* ptr29 = &v23;
    char v304 = &v8 == 0x400e0;
    char v305 = (int)&ptr3 < 0;
    char v306 = __parity__((unsigned char)&v8 - 224);
    char v307 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v308 = (unsigned int)&v23 >= 0xffffffe4;
    char v309 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    →memcpy(0x81ca400, &v16, 262272);
    int* ptr30 = &ptr5;
    char v310 = &v8 == 0x400e0;
    char v311 = (int)&ptr3 < 0;
    char v312 = __parity__((unsigned char)&v8 - 224);
    char v313 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0xc) ^ (int)&ptr3) >>> 4) & 0x1);
    char v314 = (unsigned int)&ptr5 >= 0xfffffff4;
    char v315 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr5) & (int*)~(int)(int*)((int)&ptr5 ^ 0xc)) < 0;
    int v316 = 3;
    int v317 = &v16;
    void* ptr31 = NULL;
    char v318 = 1;
    char v319 = 0;
    char v320 = 1;
    char v321 = 0;
    char v322 = 0;
    int v323 = sub_8048613(30.0, 0x41f00000, 0xc1a00000, 0x41200000, 0, 0xbf800000, 0);
    int* ptr32 = &v23;
    char v324 = &v8 == 0x400e0;
    char v325 = (int)&ptr3 < 0;
    char v326 = __parity__((unsigned char)&v8 - 224);
    char v327 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0x1c) ^ (int)&ptr3) >>> 4) & 0x1);
    char v328 = (unsigned int)&v23 >= 0xffffffe4;
    char v329 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0x1c)) < 0;
    unsigned int v330 = 0;
    char v331 = 1;
    char v332 = 0;
    char v333 = 1;
    char v334 = 0;
    char v335 = 0;
    →memcpy(136356992, &v16, 262272);
    gvar_824A508 = 0xc2f00000;
    →SDL_GetTicks();
    int* ptr33 = &ptr5;
    char v336 = &v8 == 262364;
    char v337 = (int)&ptr2 < 0;
    char v338 = __parity__((unsigned char)&v8 - 220);
    char v339 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
    char v340 = (unsigned int)&ptr5 >= 0xfffffff0;
    char v341 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr5 ^ 0x10)) < 0;
    char* ptr34 = ptr0;
    while(1) {
        →SDL_GetTicks();
        int* ptr35 = (int*)((int)ptr0 - (int)ptr34);
        char v342 = ptr35 == 13999;
        char v343 = (int)ptr35 < 13999;
        char v344 = __parity__((unsigned char)ptr35 - 175);
        char v345 = (unsigned int)ptr35 < 13999;
        char v346 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr35 - 13999) ^ (int)ptr35) & (int)(int*)((int)ptr35 ^ 0x36af)) < 0;
        char v347 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr35 - 13999) ^ (int)(int*)((int)ptr35 ^ 0x36af)) >>> 4) & 0x1);
        if(!v345 && !v342) {
            break;
        }
        else {
            char v348 = v15 == 2;
            char v349 = (char)v15 < 2;
            char v350 = __parity__(v15 - 2);
            char v351 = v15 < 2;
            char v352 = (((v15 - 2) ^ v15) & (v15 ^ 0x2)) < 0;
            char v353 = (((v15 - 2) ^ (v15 ^ 0x2)) >>> 4) & 0x1;
            if(v348) {
                break;
            }
            else {
                char v354 = 6;
                __SyntheticTypeUnknownF v355 = (double)ptr31;
                char v356 = v330 == 49;
                char v357 = (int)v330 < 49;
                char v358 = __parity__((unsigned char)v330 - 49);
                char v359 = v330 < 49;
                char v360 = (((v330 - 49) ^ v330) & (v330 ^ 0x31)) < 0;
                char v361 = (((v330 - 49) ^ (v330 ^ 0x31)) >>> 4) & 0x1;
                __SyntheticTypeUnknownF v362 = v355 * 0.017453279346227646;
                v521[v522] = fsincos(v362);
                char v363 = 5;
                char v364 = 4;
                __int128 v365 = 30.0;
                v3 = v21 * 30.0;
                v2 = 30.0;
                __int128 v366 = 30.0;
                v1 = 30.0;
                gvar_824A500 = (unsigned int)0x41f00000;
                char v367 = 5;
                v0 = v9 * v3;
                char v368 = 6;
                gvar_824A504 = v0;
                v4 = 7;
                if((v356 || v357 != v360)) {
                    unsigned int v369 = 0;
                    char v370 = 1;
                    char v371 = 0;
                    char v372 = 1;
                    char v373 = 0;
                    char v374 = 0;
                    char v375 = 6;
                    __int128 v376 = 2.0;
                    do {
                        char v377 = 5;
                        __SyntheticTypeUnknownF v378 = *(float*)((int)&gvar_940C8A4 + v369);
                        v3 = v378 + 2.0;
                        *(unsigned int*)((int)&gvar_940C8A4 + v369) = v3;
                        char v379 = 6;
                        v369 += 262272;
                        v17 = v369 == 0x1c0380;
                        char v380 = (int)v369 < 0x1c0380;
                        char v381 = __parity__((unsigned char)v369 - 128);
                        char v382 = v369 < 0x1c0380;
                        char v383 = (((v369 - 0x1c0380) ^ v369) & (v369 ^ 0x1c0380)) < 0;
                        char v384 = (((v369 - 0x1c0380) ^ (v369 ^ 0x1c0380)) >>> 4) & 0x1;
                    }
                    while(!v17);
                    v0 = 2.0;
                    v4 = 7;
                }
                int v385 = v39;
                int v386 = 9;
                int v387 = 155240608;
                ++v330;
                void* ptr36 = ptr31;
                ptr31 = (void*)((int)ptr31 + 4);
                char v388 = ptr31 ? 0: 1;
                char v389 = (int)ptr31 < 0;
                char v390 = __parity__((unsigned char)ptr31);
                char v391 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr36 ^ 0x4) ^ (int)ptr31) >>> 4) & 0x1);
                char v392 = (unsigned int)ptr36 >= 0xfffffffc;
                char v393 = (int)(int*)((int)(int*)((int)ptr31 ^ (int)ptr36) & (int*)~(int)(int*)((int)ptr36 ^ 0x4)) < 0;
                int v394 = sub_804938F(v385, 9);
                int* ptr37 = &ptr2;
                char v395 = &v8 == 262376;
                char v396 = (int)&v37 < 0;
                char v397 = __parity__((unsigned char)&v8 - 232);
                char v398 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v37) >>> 4) & 0x1);
                char v399 = (unsigned int)&ptr2 < 12;
                char v400 = (int)(int*)((int)(int*)((int)&v37 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
                char* ptr38 = ptr2;
                →SDL_Flip();
                char* ptr39 = ptr2;
                char* ptr40 = &v15;
                ptr5 = &v15;
                →SDL_PollEvent();
                ptr33 = &ptr5;
                char v401 = &v8 == 262364;
                char v402 = (int)&ptr2 < 0;
                char v403 = __parity__((unsigned char)&v8 - 220);
                char v404 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
                char v405 = (unsigned int)&ptr5 >= 0xfffffff0;
                char v406 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr5 ^ 0x10)) < 0;
            }
        }
    }
    →SDL_GetTicks();
    unsigned int v407 = v330 * 2;
    char* ptr41 = ptr0;
    while(1) {
        →SDL_GetTicks();
        int* ptr42 = (int*)((int)ptr0 - (int)ptr41);
        char v408 = ptr42 == 13999;
        char v409 = (int)ptr42 < 13999;
        char v410 = __parity__((unsigned char)ptr42 - 175);
        char v411 = (unsigned int)ptr42 < 13999;
        char v412 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr42 - 13999) ^ (int)ptr42) & (int)(int*)((int)ptr42 ^ 0x36af)) < 0;
        char v413 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr42 - 13999) ^ (int)(int*)((int)ptr42 ^ 0x36af)) >>> 4) & 0x1);
        if(!v411 && !v408) {
            break;
        }
        else {
            char v414 = v15 == 2;
            char v415 = (char)v15 < 2;
            char v416 = __parity__(v15 - 2);
            char v417 = v15 < 2;
            char v418 = (((v15 - 2) ^ v15) & (v15 ^ 0x2)) < 0;
            char v419 = (((v15 - 2) ^ (v15 ^ 0x2)) >>> 4) & 0x1;
            if(v414) {
                break;
            }
            else {
                int v420 = 8;
                char v421 = 6;
                __SyntheticTypeUnknownF v422 = (double)v407;
                int* ptr43 = &ptr3;
                char v423 = &v8 == 262364;
                char v424 = (int)&ptr2 < 0;
                char v425 = __parity__((unsigned char)&v8 - 220);
                char v426 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x4) ^ (int)&ptr2) >>> 4) & 0x1);
                char v427 = (unsigned int)&ptr3 >= 0xfffffffc;
                char v428 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr3 ^ 0x4)) < 0;
                int v429 = 134521088;
                __SyntheticTypeUnknownF v430 = v422 * 0.017453279346227646;
                unsigned int v431 = v330;
                ++v330;
                char v432 = v330 ? 0: 1;
                char v433 = v330 >= 0x80000000;
                char v434 = __parity__((unsigned char)v330);
                char v435 = (((v431 ^ 0x1) ^ v330) >>> 4) & 0x1;
                char v436 = (int)((v330 ^ v431) & ~(v431 ^ 0x1)) < 0;
                int v437 = v39;
                unsigned int v438 = v407;
                v407 += 2;
                char v439 = v407 ? 0: 1;
                char v440 = (int)v407 < 0;
                char v441 = __parity__((unsigned char)v407);
                char v442 = (((v438 ^ 0x2) ^ v407) >>> 4) & 0x1;
                char v443 = v438 >= 0xfffffffe;
                char v444 = (int)((v407 ^ v438) & ~(v438 ^ 0x2)) < 0;
                gvar_824A504 = 0xc1200000;
                v521[v522] = fsincos(v430);
                char v445 = 5;
                char v446 = 4;
                __int128 v447 = 20.0;
                v3 = v20 * 20.0;
                v2 = 20.0;
                __int128 v448 = 20.0;
                v1 = 20.0;
                gvar_824A500 = (unsigned int)1101004800;
                char v449 = 5;
                v0 = v22 * v3;
                char v450 = 6;
                gvar_824A508 = v0;
                v4 = 7;
                int v451 = sub_804938F(v437, 8);
                int* ptr44 = &ptr2;
                char v452 = &v8 == 262376;
                char v453 = (int)&v37 < 0;
                char v454 = __parity__((unsigned char)&v8 - 232);
                char v455 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v37) >>> 4) & 0x1);
                char v456 = (unsigned int)&ptr2 < 12;
                char v457 = (int)(int*)((int)(int*)((int)&v37 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
                char* ptr45 = ptr2;
                →SDL_Flip();
                char* ptr46 = ptr2;
                char* ptr47 = &v15;
                ptr5 = &v15;
                →SDL_PollEvent();
                ptr33 = &ptr5;
                char v458 = &v8 == 262364;
                char v459 = (int)&ptr2 < 0;
                char v460 = __parity__((unsigned char)&v8 - 220);
                char v461 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
                char v462 = (unsigned int)&ptr5 >= 0xfffffff0;
                char v463 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr5 ^ 0x10)) < 0;
            }
        }
    }
    →SDL_GetTicks();
    unsigned int v464 = v330 * 4;
    gvar_824A508 = 0xc2f00000;
    char* ptr48 = ptr0;
    while(1) {
        →SDL_GetTicks();
        int* ptr49 = (int*)((int)ptr0 - (int)ptr48);
        char v465 = ptr49 == 13999;
        char v466 = (int)ptr49 < 13999;
        char v467 = __parity__((unsigned char)ptr49 - 175);
        char v468 = (unsigned int)ptr49 < 13999;
        char v469 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr49 - 13999) ^ (int)ptr49) & (int)(int*)((int)ptr49 ^ 0x36af)) < 0;
        char v470 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr49 - 13999) ^ (int)(int*)((int)ptr49 ^ 0x36af)) >>> 4) & 0x1);
        if(!v468 && !v465) {
            break;
        }
        else {
            char v471 = v15 == 2;
            char v472 = (char)v15 < 2;
            char v473 = __parity__(v15 - 2);
            char v474 = v15 < 2;
            char v475 = (((v15 - 2) ^ v15) & (v15 ^ 0x2)) < 0;
            v470 = (((v15 - 2) ^ (v15 ^ 0x2)) >>> 4) & 0x1;
            if(v471) {
                break;
            }
            else {
                int v476 = 71;
                char v477 = 6;
                __SyntheticTypeUnknownF v478 = (double)v464;
                int* ptr50 = &ptr3;
                char v479 = &v8 == 262364;
                char v480 = (int)&ptr2 < 0;
                char v481 = __parity__((unsigned char)&v8 - 220);
                char v482 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x4) ^ (int)&ptr2) >>> 4) & 0x1);
                char v483 = (unsigned int)&ptr3 >= 0xfffffffc;
                char v484 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr3 ^ 0x4)) < 0;
                int v485 = 136619296;
                __SyntheticTypeUnknownF v486 = v478 * 0.017453279346227646;
                unsigned int v487 = v464;
                v464 += 4;
                char v488 = v464 ? 0: 1;
                char v489 = (int)v464 < 0;
                char v490 = __parity__((unsigned char)v464);
                char v491 = (((v487 ^ 0x4) ^ v464) >>> 4) & 0x1;
                char v492 = v487 >= 0xfffffffc;
                char v493 = (int)((v464 ^ v487) & ~(v487 ^ 0x4)) < 0;
                int v494 = v39;
                v521[v522] = fsincos(v486);
                char v495 = 5;
                char v496 = 4;
                __int128 v497 = 30.0;
                v3 = v11 * 30.0;
                v2 = 30.0;
                __int128 v498 = 30.0;
                v1 = 30.0;
                gvar_824A500 = (unsigned int)0x41f00000;
                char v499 = 5;
                v0 = v13 * v3;
                char v500 = 6;
                gvar_824A504 = v0;
                v4 = 7;
                int v501 = sub_804938F(v494, 71);
                int* ptr51 = &ptr2;
                char v502 = &v8 == 262376;
                char v503 = (int)&v37 < 0;
                char v504 = __parity__((unsigned char)&v8 - 232);
                char v505 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v37) >>> 4) & 0x1);
                char v506 = (unsigned int)&ptr2 < 12;
                char v507 = (int)(int*)((int)(int*)((int)&v37 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
                char* ptr52 = ptr2;
                →SDL_Flip();
                char* ptr53 = ptr2;
                char* ptr54 = &v15;
                ptr5 = &v15;
                →SDL_PollEvent();
                ptr33 = &ptr5;
                char v508 = &v8 == 262364;
                char v509 = (int)&ptr2 < 0;
                char v510 = __parity__((unsigned char)&v8 - 220);
                char v511 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr5 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
                char v512 = (unsigned int)&ptr5 >= 0xfffffff0;
                char v513 = (int)(int*)((int)(int*)((int)&ptr5 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr5 ^ 0x10)) < 0;
            }
        }
    }
    int* ptr55 = &ptr3;
    →SDL_Quit();
    int v514 = 1;
    int v515 = 0;
    char v516 = 1;
    char v517 = 0;
    char v518 = 1;
    char v519 = 0;
    char v520 = 0;
    interrupt(128);
}

int sub_804838E() {
    return gvar_804A0B8();
}

float* sub_8048438(int param0, float* param1) {
    float* result;
    return result;
}

float* sub_804844D(int* param0, float* param1) {
    float* result;
    __SyntheticTypeUnknownF v0 = *(result + 2);
    __SyntheticTypeUnknownF v1 = *(result + 1) * *(param1 + 2) - *(param1 + 1) * v0;
    *param0 = v0;
    __SyntheticTypeUnknownF v2 = *result;
    __SyntheticTypeUnknownF v3 = v1 * *param1 - *(param1 + 2) * v2;
    *(param0 + 1) = v2;
    *(param0 + 2) = v3 * *(param1 + 1) - *(result + 1) * *param1;
    return result;
}

float* sub_804847F(int* param0, float* param1) {
    float* result;
    *param0 = *result - *param1;
    *(param0 + 1) = *(result + 1) - *(param1 + 1);
    *(param0 + 2) = *(result + 2) - *(param1 + 2);
    return result;
}

float* sub_8048498(int param0) {
    float* ptr0;
    __int128 v0;
    float* result = sub_8048438(param0, ptr0);
    v1[v2] = fsqrt(v0);
    return result;
}

float* sub_80484A2(int param0) {
    float* ptr0;
    __int128 v0;
    __SyntheticTypeUnknownF v1;
    float* result = sub_8048438(param0, ptr0);
    v2[v3] = fsqrt(v0);
    ptr0[0] *= 1.0 / v1;
    ptr0[1] *= 1.0 / v1;
    ptr0[2] *= 1.0 / v1;
    return result;
}

int sub_80484CA(int param0, unsigned int param1) {
    int result;
    int v0;
    int* ptr0;
    char v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4 = 0;
    unsigned int v5 = v2;
    →srand(1337);
    do {
        int v6 = 0;
        unsigned int v7 = (int)v4 % 20;
        do {
            ptr0 = (int*)((v4 * 0x100 + v6) * 4 + v5);
            *ptr0 = 0xffffff;
            if(!(unsigned char)v3) {
                v0 = (v6 + 100) ^ v4;
                goto loc_804855E;
            }
            else {
                if((unsigned char)v3 + 0xff) {
                    result = v3 - 2;
                    if((unsigned char)result > 1) {
                        goto loc_8048566;
                    }
                    else {
                        →rand();
                        v0 = (int)v2 % 64 + 192;
                        if((unsigned char)v3 == 2) {
                            result = v0 * 0x100;
                        }
                        else {
                        loc_804855E:
                            result = v0 * 0x10101;
                        }
                    }
                }
                else if((int)(unsigned int)(v6 % 20) <= 9) {
                    result = 0xff0000;
                    if((int)v7 > 9) {
                        goto loc_804852F;
                    }
                }
                else {
                loc_804852F:
                    result = 0xff00ff;
                }
                *ptr0 = result;
            }
        loc_8048566:
            ++v6;
        }
        while(v6 != 0x100);
        ++v4;
    }
    while(v4 != 0x100);
    if((unsigned char)v3 == 4) {
        unsigned int v8 = 0;
        do {
            v4 = 0;
            do {
                unsigned int v9 = v8;
                ptr0 = NULL;
                do {
                    unsigned int v10 = v4;
                    int v11 = 0;
                    do {
                        unsigned int v12 = v5;
                        ++v11;
                        *(int*)((v9 * 0x100 + v10) * 4 + v12) = 0xff0000;
                        result = v9 * 0x100 + v10 + 0x1000;
                        ++v10;
                        v1 = v11 == 16;
                        *(int*)(result * 4 + v12 + 64) = 0xff0000;
                    }
                    while(!v1);
                    ptr0 = (int*)((char*)ptr0 + 1);
                    ++v9;
                }
                while(ptr0 != 16);
                v4 += 32;
            }
            while(v4 != 0x100);
            v8 += 32;
        }
        while(v8 != 0x100);
    }
    return result;
}

int sub_8048613(float param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    char v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    int result;
    int v3;
    int v4;
    int v5 = v3;
    int v6 = param4;
    int v7 = param0;
    int v8 = param1;
    v18[v19] = fchs(param0);
    int v9 = param1;
    int v10 = v2;
    int v11 = param5;
    int v12 = param2;
    int v13 = param2;
    char v14 = 2;
    int v15 = param6;
    int v16 = param3;
    sub_804844D(&v0, &v7);
    int v17 = sub_80484CA(v4, (unsigned int)v1);
    →memcpy(result, (int)&v7, 262272);
    return result;
}

int sub_80486BA(int param0, int param1, int param2, float param3, int param4, int param5) {
    char v0;
    __SyntheticTypeUnknownF v1;
    int result;
    int v2;
    int v3;
    int v4;
    int v5 = v2;
    int v6 = param0;
    int v7 = param3;
    int v8 = param4;
    v20[v21] = fchs(param3);
    int v9 = param4;
    int v10 = v1;
    int v11 = param1;
    int v12 = param5;
    int v13 = param5;
    char v14 = 1;
    int v15 = param2;
    char v16 = 0;
    int v17 = 1061620285;
    int v18 = 1049314198;
    int v19 = 12;
    sub_804844D(&v0, &v7);
    sub_80484CA(v3, (unsigned int)(unsigned char)v4);
    →memcpy(result, &v6, 262272);
    return result;
}

int sub_8048775(int param0, int param1, int param2, int param3) {
    char v0;
    int result;
    int v1;
    int v2 = v1;
    int v3 = 0x3f800000;
    int v4 = 0x3f800000;
    char v5 = 0;
    int v6 = param3;
    int v7 = 0;
    int v8 = 0;
    int v9 = 0;
    int v10 = 0;
    char v11 = 1;
    int v12 = 1059942564;
    int v13 = 1061528011;
    int v14 = param0;
    int v15 = 82;
    int v16 = param1;
    int v17 = param2;
    sub_80484CA(0x3f800000, (unsigned int)v0);
    →memcpy(result, &v14, 262272);
    return result;
}

int sub_804881D(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    char v2;
    int result;
    int v3;
    unsigned int v4;
    unsigned int v5;
    int v6 = v3;
    unsigned int v7 = v4;
    int v8 = param3;
    unsigned int v9 = v5;
    sub_8048775(param0, param1, param2, (float)result);
    →memcpy(v8 * 262272 + 155240608, &v2, 262272);
    if((int)v4 > 0) {
        int v10 = v4 - 1;
        if(v9 != 1) {
            float v11 = (float)(result * 3 / 2);
            sub_804881D((float)(param0 + v11), param1, param2, v8 + 1);
            int v12 = v8 + 2;
            if(v9 != 2) {
                sub_804881D((float)(param0 - v11), param1, param2, v12);
                int v13 = v8 + 3;
                if(v9 != 3) {
                    v1 = v13;
                    sub_804881D(param0, (float)(param1 + v11), param2, v13);
                    if(v9 != 4) {
                        goto loc_8048994;
                    }
                    else {
                        v8 += 4;
                        __SyntheticTypeUnknownF v14 = (float)(param2 + v11);
                        v11 = v14;
                        sub_804881D(param0, param1, v14, v8);
                    }
                }
                else {
                    v8 += 4;
                    sub_804881D(param0, (float)(param1 - v11), param2, v13);
                    __SyntheticTypeUnknownF v15 = (float)(param2 + v11);
                    v11 = v15;
                    sub_804881D(param0, param1, v15, v8);
                }
                ++v8;
                v0 = result / 2;
                sub_804881D(param0, param1, (double)param2 - (double)(result * 3 / 2), v8);
                sub_80486BA(0, 0x42200000, 0, 0.0, 0xbf800000, 0);
                →memcpy(v8 * 262272 + 155502880, &v2, 262272);
                return result;
            }
            v8 += 3;
            sub_804881D(param0, (float)(param1 + v11), param2, v12);
            sub_804881D(param0, (float)(param1 - v11), param2, v8);
            goto loc_80489E8;
        }
        else {
            v1 = v8 + 2;
            float v16 = (float)(result * 3 / 2);
            sub_804881D((double)param0 - (double)(result * 3 / 2), param1, param2, v8 + 1);
            sub_804881D(param0, (float)(result * 3 / 2) + param1, param2, v1);
        loc_8048994:
            v8 = v1 + 1;
            v0 = result / 2;
            sub_804881D(param0, (double)param1 - (double)(result * 3 / 2), param2, v8);
            if(v9 != 5) {
            loc_80489E8:
                ++v8;
                v0 = result / 2;
                sub_804881D(param0, param1, (double)(result * 3 / 2) + (double)param2, v8);
                if(v9 == 6) {
                    sub_80486BA(0, 0x42200000, 0, 0.0, 0xbf800000, 0);
                    →memcpy(v8 * 262272 + 155502880, &v2, 262272);
                    return result;
                }
            }
            ++v8;
            v0 = result / 2;
            sub_804881D(param0, param1, (double)param2 - (double)(result * 3 / 2), v8);
        }
    }
    sub_80486BA(0, 0x42200000, 0, 0.0, 0xbf800000, 0);
    →memcpy(v8 * 262272 + 155502880, &v2, 262272);
    return result;
}

float* sub_8048C66(float* param0, int param1) {
    float v0;
    __SyntheticTypeUnknownF v1;
    float v2;
    char v3;
    float v4;
    float v5;
    char v6;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    float v10;
    float v11;
    float v12;
    char v13;
    char v14;
    __SyntheticTypeUnknownF v15;
    __SyntheticTypeUnknownF v16;
    int v17;
    int v18;
    int v19;
    float* result;
    int v20 = v17;
    float* ptr0 = &result[v18 * 65568];
    result = (unsigned int)*(char*)&ptr0[31] | ((unsigned int)(int*)((int)(int*)((int)result >>> 8) & 0xffffff) << 8);
    if(!(unsigned char)result) {
        if(!param1) {
            v1 = ptr0[25];
            v0 = v1;
            result = sub_8048438(0, param0);
            ftst(v1);
            fnstsw((unsigned short)result);
            if(!(int*)((int)(int*)((int)result >>> 8) & 0x1)) {
                goto loc_8048CFD;
            }
        }
        else {
            sub_804847F(&v3, (float*)v19);
            result = sub_8048438(param1, param0);
            ftst(v1);
            fnstsw((unsigned short)result);
            if(!(int*)((int)(int*)((int)result >>> 8) & 0x1)) {
                __SyntheticTypeUnknownF v21 = ptr0[24];
                result = sub_8048438(param1, (float*)&v3);
                v0 = v21 * v21 - v1;
                v1 = v1;
            loc_8048CFD:
                __SyntheticTypeUnknownF v22 = v1 * v1 + v0;
                ftst(v22);
                fnstsw((unsigned short)result);
                if(!(int*)((int)(int*)((int)result >>> 8) & 0x1) && !(int*)((int)(int*)((int)result >>> 14) & 0x1)) {
                    v33[v34] = fsqrt(v22);
                }
            }
        }
    }
    else if((unsigned char)result == 1) {
        if(!param1) {
            result = sub_8048438(0, param0);
            v1 = ptr0[27] / v1;
        }
        else {
            sub_8048438(param1, (float*)v19);
            __SyntheticTypeUnknownF v23 = ptr0[26] - v1;
            float v24 = v23;
            result = sub_8048438(param1, param0);
            v1 = v24 / v23;
        }
        fcom(v1, 0x3b449ba6);
        fnstsw((unsigned short)result);
    }
    else if((unsigned char)result == 2) {
        /*BAD_CALL!*/ sub_804847F(&v10, ptr0);
        float* ptr1 = /*BAD_CALL!*/ sub_804844D(&v2, ptr0 + 21);
        v33[v34] = fsqrt(v11 + v2 * v2 * (v2 * v2) + v4 * v4);
        float v25 = v9;
        ftst(v9);
        fnstsw((unsigned short)ptr1);
        if(!(((unsigned short)ptr1 >>> 8) & 0x1) && !(((unsigned short)ptr1 >>> 14) & 0x1)) {
            fcomp(v9, 0x3b449ba6);
            fnstsw((unsigned short)ptr1);
            if((((unsigned short)ptr1 >>> 8) & 0x1)) {
                result = sub_8048438(param1, ptr0 + 21);
                __SyntheticTypeUnknownF v26 = v10 - ptr0[21] * v8;
                __SyntheticTypeUnknownF v27 = v12 - (v5 - ptr0[22] * v8) * ptr0[23];
                v33[v34] = fsqrt(v8 + v27 * v27 * (v27 * v27) + v26 * v26);
                fcomp(v1, ptr0[24]);
                fnstsw((unsigned short)result);
                return result;
            }
        }
        sub_80484A2(param1);
        result = sub_8048438(param1, (float*)&v2);
        *(int*)&v6 = v8;
        char v28 = v28 & 0x7f;
        __SyntheticTypeUnknownF v29 = *(float*)&v6;
        fcomp(v29, ptr0[24]);
        fnstsw((unsigned short)result);
        if(((int*)((int)(int*)((int)result >>> 8) & 0x1) || (int*)((int)(int*)((int)result >>> 14) & 0x1))) {
            sub_804844D(&v13, ptr0 + 21);
            sub_8048438(param1, (float*)&v2);
            *(int*)&v14 = v29;
            char v30 = v30 ^ 0x80;
            *(int*)&v14 = *(float*)&v14 / v25;
            sub_804844D(&v13, ptr0 + 21);
            sub_80484A2(param1);
            __SyntheticTypeUnknownF v31 = ptr0[24];
            __SyntheticTypeUnknownF v32 = *(float*)&v6;
            v33[v34] = fsqrt(v31 * v31 - v32 * v32);
            result = sub_8048438(param1, (float*)&v13);
            v33[v34] = fabs(v16 / v7);
            v1 = *(float*)&v14 - v15;
            fcom(v1, 0x3b449ba6);
            fnstsw((unsigned short)result);
        }
    }
    return result;
}

int* sub_8048EBE(float* param0, float* param1, unsigned int param2, int param3) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    short v3;
    __SyntheticTypeUnknownF v4;
    float v5;
    __SyntheticTypeUnknownF v6;
    float v7;
    int v8;
    int v9;
    float v10;
    __SyntheticTypeUnknown v11;
    float v12;
    int v13;
    __int128 v14;
    short v15;
    float v16;
    int v17;
    float v18;
    char v19;
    __SyntheticTypeUnknownF v20;
    short v21;
    __int128 v22;
    __SyntheticTypeUnknownF v23;
    __SyntheticTypeUnknownF v24;
    __int128 v25;
    __SyntheticTypeUnknownF v26;
    short v27;
    __SyntheticTypeUnknownF v28;
    __int128 v29;
    __SyntheticTypeUnknownF v30;
    unsigned int v31 = 0xffffffff;
    unsigned int v32 = 0;
    float* ptr0 = param0;
    int v33 = param3;
    __SyntheticTypeUnknownF v34 = 1.0000000200408773E20;
    int* result = (unsigned int)v27 | ((unsigned int)v15 << 16);
    int v35 = v13;
    int v36 = v17;
    while((int)v32 < v36) {
        v9 = (unsigned int)v27 | ((unsigned int)v15 << 16);
        v8 = (unsigned int)v27 | ((unsigned int)v15 << 16);
        v7 = v34;
        float* ptr1 = /*BAD_CALL!*/ sub_8048C66(param1, v33);
        v27 = (unsigned short)ptr1;
        v15 = (unsigned short)(int*)((int)ptr1 >>> 16);
        __SyntheticTypeUnknownF v37 = v7;
        ftst(v37);
        fnstsw(v27);
        if(!((v27 >>> 8) & 0x1) && !((v27 >>> 14) & 0x1)) {
            fcom(v37, v34);
            fnstsw(v27);
            if(((v27 >>> 8) & 0x1)) {
                v34 = v37;
                v31 = v32;
            }
        }
        ++v32;
    }
    if(v31 == -1) {
        int* ptr2 = result;
        *ptr2 = 0;
        *(ptr2 + 1) = 0;
        *(ptr2 + 2) = 0;
    }
    else {
        float* ptr3 = (float*)(v31 * 262272 + v35);
        float* ptr4 = param1;
        char v38 = *(char*)&ptr3[31] ? 0: 1;
        __SyntheticTypeUnknownF v39 = v34 * ptr4[0] + *ptr0;
        ptr3[3] = v39;
        __SyntheticTypeUnknownF v40 = ptr4[1] * v34 + *(ptr0 + 1);
        ptr3[4] = v40;
        __SyntheticTypeUnknownF v41 = v40 * ptr4[2] + *(ptr0 + 2);
        ptr3[5] = v41;
        if(v38) {
            ptr3[6] = (v41 - ptr3[0]) / ptr3[24];
            ptr3[7] = (v39 - ptr3[1]) / ptr3[24];
            v6 = (v34 - ptr3[2]) / ptr3[24];
            ptr3[8] = v6;
        }
        else {
            v6 = v34;
        }
        if(*(char*)&ptr3[31] == 2) {
            sub_804847F((int*)(ptr3 + 6), ptr3);
            sub_80484A2(v17);
        }
        float* ptr5 = ptr3 + 3;
        float* ptr6 = ptr3 + 6;
        sub_804847F(&v10, ptr3 + 3);
        sub_8048498(v17);
        int v42 = v6;
        sub_80484A2(v17);
        unsigned int v43 = 0;
        float* ptr7 = /*BAD_CALL!*/ sub_8048438(v17, (float*)&v10);
        short v44 = (unsigned short)ptr7;
        short v45 = (unsigned short)(int*)((int)ptr7 >>> 16);
        float v46 = v6;
        ftst(v6);
        fnstsw(v44);
        __SyntheticTypeUnknownF v47 = v6;
        if(((v44 >>> 8) & 0x1)) {
        loc_804904A:
            v4 = 0.0;
        }
        else {
            while((int)v43 < v36) {
                v9 = (unsigned int)v44 | ((unsigned int)v45 << 16);
                v8 = (unsigned int)v44 | ((unsigned int)v45 << 16);
                float* ptr8 = /*BAD_CALL!*/ sub_8048C66((float*)&v10, 1);
                v44 = (unsigned short)ptr8;
                v45 = (unsigned short)(int*)((int)ptr8 >>> 16);
                fcom(v47, 981668463);
                fnstsw(v44);
                if(!((v44 >>> 8) & 0x1) && !((v44 >>> 14) & 0x1)) {
                    fcomp(v47, v42);
                    fnstsw(v44);
                    if((v44 >>> 8) & 0x1) {
                        goto loc_804904A;
                    }
                }
                ++v43;
            }
            sub_804847F(&v19, (float*)&v10);
            sub_8048498(v17);
            v10 /= v47;
            float v48 = v48 / v47;
            float v49 = v49 / v47;
            v5 = v46 * ptr3[28];
            __SyntheticTypeUnknownF v50 = ptr3[30];
            int v51 = v50;
            sub_8048438(v17, (float*)&v10);
            →powf(v50, v51);
            v4 = v50 * ptr3[29] + v5;
        }
        v5 = v4;
        float* ptr9 = ptr3 + 15;
        if(!*(char*)&ptr3[31]) {
            float* ptr10 = sub_8048438(v17, ptr9);
            v11[v84] = fchs(v4);
            short v21 = fnstcw();
            v11[v84] = fsqrt(1.0 - v28 * v28);
            int v52 = (unsigned int)(unsigned char)v21 | ((unsigned int)((unsigned char)(v21 >>> 8) | 0xc) << 8) | ((unsigned int)(unsigned short)(int*)((int)ptr10 >>> 16) << 16);
            v3 = (unsigned short)v52;
            v11[v84 + 1] = fpatan(v22, v25);
            __SyntheticTypeUnknownF v53 = 81.48739624023438 * v30;
            fldcw((unsigned short)v52);
            v2 = (int)v53;
            fldcw(v21);
            v1 = (int)v53;
            *(__int128*)&v7 = v30;
            float v54 = v20;
            float* ptr11 = sub_8048438(v17, ptr6);
            v11[v84] = fsin(v54);
            v21 = fnstcw();
            v3 = (unsigned short)(unsigned char)v21 | ((unsigned short)((unsigned char)(v21 >>> 8) | 0xc) << 8);
            __SyntheticTypeUnknownF v55 = v23 / v26;
            v11[v84] = fsqrt(*(__int128*)&v7 - v55 * v55);
            v11[v84 + 1] = fpatan(v29, v14);
            __SyntheticTypeUnknownF v56 = v24 * 40.7436637878418;
            fldcw(v3);
            v2 = (int)v56;
            fldcw(v21);
            v0 = v2;
            float* ptr12 = /*BAD_CALL!*/ sub_8048438(v17, ptr6);
            short v57 = (unsigned short)ptr12;
            ftst(v56);
            fnstsw(v57);
            if(!((v57 >>> 8) & 0x1) && !((v57 >>> 14) & 0x1)) {
                v0 = (unsigned int)(0x100 - v0);
            }
        }
        else {
            float* ptr13 = sub_8048438(v17, ptr9);
            do {
                v11[v84] = fprem(256.0, v4);
                fnstsw((unsigned short)ptr13);
            }
            while((int*)((int)(int*)((int)ptr13 >>> 10) & 0x1));
            v21 = fnstcw();
            int v58 = (unsigned int)(unsigned char)v21 | ((unsigned int)((unsigned char)(v21 >>> 8) | 0xc) << 8) | ((unsigned int)(unsigned short)(int*)((int)ptr13 >>> 16) << 16);
            v3 = (unsigned short)v58;
            fldcw((unsigned short)v58);
            v2 = (int)256.0;
            fldcw(v21);
            int v59 = (int)256.0;
            unsigned int v60 = v59 < 0 ? 0xffffffff: 0;
            v0 = (unsigned int)(v59 ^ v60) - v60;
            float* ptr14 = sub_8048438(v17, ptr3 + 18);
            do {
                v11[v84] = fprem(256.0, 256.0);
                fnstsw((unsigned short)ptr14);
            }
            while((int*)((int)(int*)((int)ptr14 >>> 10) & 0x1));
            v21 = fnstcw();
            v3 = (unsigned short)(unsigned char)v21 | ((unsigned short)((unsigned char)(v21 >>> 8) | 0xc) << 8);
            fldcw(v3);
            v2 = (int)256.0;
            fldcw(v21);
            unsigned int v61 = v2 >= 0x80000000 ? 0xffffffff: 0;
            v1 = (v61 ^ v2) - v61;
        }
        int v62 = v1 * 0x100 + v0;
        int v63 = (unsigned int)*((char*)&ptr3[v62 + 32] + 2);
        int v64 = (unsigned int)*((char*)&ptr3[v62 + 32] + 1);
        int v65 = (unsigned int)*(char*)&ptr3[v62 + 32];
        v9 = (unsigned int)*(char*)&ptr3[v62 + 32];
        ptr3[11] = (float)v65;
        __SyntheticTypeUnknownF v66 = v5 + 0.30000001192092896;
        char v67 = param2 ? 0: 1;
        char v68 = param2 >= 0x80000000;
        __SyntheticTypeUnknownF v69 = (double)v63 * v66;
        ptr3[9] = v66;
        __SyntheticTypeUnknownF v70 = v66 * v69;
        ptr3[10] = v70;
        __SyntheticTypeUnknownF v71 = v70 * ptr3[11];
        float v72 = v71;
        ptr3[11] = v71;
        float v73 = (float)v64;
        float v74 = v69;
        char v75 = 0;
        if(!v67 && v68 == 0 && *((char*)&ptr3[31] + 1) == 1) {
            sub_8048438(v17, param1);
            __SyntheticTypeUnknownF v76 = v69 + v69;
            __SyntheticTypeUnknownF v77 = ptr3[7] * v76;
            int v78 = param1[0] - ptr3[8] * v76 * ptr3[6];
            int v79 = param1[1] - v77;
            int v80 = param1[2] - v76;
            sub_80484A2(v17);
            v65 = sub_8048EBE((int)ptr5, (int)&v78, param2 - 1, 1);
            v73 += v18 * 0.6000000238418579;
            v74 += v16 * 0.6000000238418579;
            v72 += 0.6000000238418579 * v12;
            v75 = 7;
        }
        char v81 = v75 - 1;
        v11[v81] = v73;
        fcom(v11[v81], 1132396544);
        fnstsw((unsigned short)v65);
        if(!((v65 >>> 8) & 0x1) && !((v65 >>> 14) & 0x1)) {
            v11[v81] = 255.0;
        }
        *result = v11[v81];
        char v82 = v81;
        v11[v82] = v74;
        fcom(v11[v82], 1132396544);
        fnstsw((unsigned short)v65);
        if(!((v65 >>> 8) & 0x1) && !((v65 >>> 14) & 0x1)) {
            v11[v82] = 255.0;
        }
        *(result + 1) = v11[v82];
        char v83 = v82;
        v11[v83] = v72;
        fcom(v11[v83], 1132396544);
        fnstsw((unsigned short)v65);
        if(!((v65 >>> 8) & 0x1) && !((v65 >>> 14) & 0x1)) {
            v11[v83] = 255.0;
        }
        *(result + 2) = v11[v83];
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804938F(int param0, unsigned int param1) {
    int result;
    __SyntheticTypeUnknownF v0;
    float v1;
    float v2;
    float v3;
    short v4;
    float* ptr0;
    float* ptr1;
    unsigned int v5 = 0;
    float* ptr2 = ptr1;
    float* ptr3 = ptr0;
    float* ptr4 = ptr1;
    unsigned int v6 = param1;
    int v7 = param0;
    while((int)v5 < (int)v6) {
        sub_804847F((int*)(ptr2 + 12), (float*)0x824A50C);
        if(!*(char*)&ptr2[31]) {
            __SyntheticTypeUnknownF v8 = ptr2[24];
            float v9 = v8 * v8;
            sub_8048438(param0, (float*)(ptr2 + 12));
            v0 = v9 - v0;
            ptr2[25] = v0;
        }
        if(*(char*)&ptr2[31] == 1) {
            sub_8048438(param0, ptr2 + 6);
            ptr2[27] = v0;
            sub_8048438(param0, ptr2);
            ptr2[26] = v0;
        }
        ++v5;
        ptr2 += 65568;
    }
    unsigned int v10 = 0;
    int v11 = &gvar_964CD20;
    do {
        int v12 = v11;
        v11 += 24;
        int v13 = sub_8048EBE(136619276, v12, 2, 0);
        short v4 = fnstcw();
        short v14 = (unsigned short)(unsigned char)v4 | ((unsigned short)((unsigned char)(v4 >>> 8) | 0xc) << 8);
        fldcw(v14);
        fldcw(v4);
        fldcw(v14);
        fldcw(v4);
        fldcw(v14);
        int v15 = (int)v1;
        fldcw(v4);
        int v16 = (int)v2 * 0x10000 + (int)v3 * 0x100 + (int)v1;
        result = v7;
        *(int*)(v10 * 4 + result + 4) = v16;
        *(int*)(v10 * 4 + result) = v16;
        v10 += 2;
    }
    while(v10 != 0x30000);
    return result;
}
