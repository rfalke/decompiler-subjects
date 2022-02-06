
long sub_400846() {
    return gvar_105E010();
}

long sub_4009D7(unsigned long* param0) {
    long result;
    if(!param0 || !*param0) {
        result = 0L;
    }
    else {
        unsigned long* ptr0 = *param0;
        *param0 = **param0;
        int v0 = *(int*)(ptr0 + 1);
        *(int*)(ptr0 + 1) = 0;
        *ptr0 = 0L;
        →free();
        result = (unsigned long)v0;
    }
    return result;
}

long sub_400A52(unsigned long* param0) {
    unsigned long* ptr0 = param0;
    unsigned long* ptr1 = *ptr0;
    unsigned long* ptr2 = NULL;
    while(ptr1) {
        unsigned long* ptr3 = *ptr1;
        *ptr1 = ptr2;
        ptr2 = ptr1;
        ptr1 = ptr3;
    }
    *ptr0 = ptr2;
    return 0L;
}

long sub_400AAE(unsigned long* param0, int param1) {
    long result;
    long* ptr0;
    unsigned long* ptr1 = param0;
    if(!ptr1) {
        result = 0xffffffffL;
    }
    else {
        →malloc();
        long* ptr2 = ptr0;
        if(!ptr2) {
            /*NO_RETURN*/ →exit();
        }
        *(int*)(ptr2 + 1) = param1;
        *ptr2 = *ptr1;
        *ptr1 = ptr2;
        result = 0L;
    }
    return result;
}

long sub_400B14(unsigned long* param0, long param1) {
    long* ptr0;
    long result;
    long v0;
    long* ptr1;
    long v1 = v0;
    unsigned long* ptr2 = param0;
    int v2 = (unsigned int)param1;
    if(!ptr2) {
        result = 0L;
    }
    else {
        if(!*ptr2) {
            →malloc();
            ptr0 = ptr1;
            if(!ptr0) {
                /*NO_RETURN*/ →exit();
            }
            *(int*)(ptr0 + 1) = (unsigned int)param1;
            *ptr0 = *ptr2;
        }
        else {
            long v3 = *ptr2;
            long* ptr3 = *ptr2;
            long v4 = sub_400B14(v3, (unsigned long)(unsigned int)param1, v3);
            *ptr3 = v4;
            ptr0 = *ptr2;
        }
        *ptr2 = ptr0;
        result = *ptr2;
    }
    return result;
}

unsigned long* sub_400BBF(unsigned long* param0) {
    unsigned long* result;
    unsigned long* ptr0 = param0;
    if(ptr0) {
        unsigned long* ptr1 = *ptr0;
        unsigned long* ptr2 = NULL;
        while(ptr1) {
            ptr2 = *ptr1;
            *(int*)(ptr1 + 1) = 0;
            *ptr1 = 0L;
            →free();
            ptr1 = ptr2;
        }
        result = ptr0;
        *result = 0L;
    }
    return result;
}

long sub_400C33(unsigned long* param0, unsigned int param1) {
    unsigned long* ptr0 = param0;
    unsigned int v0 = param1;
    while(*ptr0) {
        unsigned long* ptr1 = *ptr0;
        if(*(int*)(*ptr0 + 8L) == v0) {
            *ptr0 = **ptr0;
            *(int*)(ptr1 + 1) = 0;
            *ptr1 = 0L;
            →free();
            ptr1 = NULL;
        }
        else {
            ptr0 = *ptr0;
        }
    }
    return 0L;
}

long sub_400CB5(long* param0, long param1) {
    int v0 = (unsigned int)param1;
    return param0 ? sub_400CB5(*param0, (unsigned long)((unsigned int)param1 + 1), (unsigned long)((unsigned int)param1 + 1)): (unsigned long)(unsigned int)param1;
}

long sub_400CE9(long* param0) {
    return sub_400CB5(param0, 0L);
}

long sub_400D08(long* param0, unsigned int param1) {
    long* ptr0 = param0;
    unsigned int v0 = param1;
    long v1 = /*BAD_CALL!*/ sub_400CE9(ptr0);
    int v2 = (unsigned int)v1 - 1;
    for(unsigned int i = 0; (unsigned int)v1 - 1 - i != v0; ++i) {
        ptr0 = (long*)ptr0[0];
    }
    return (unsigned long)*(int*)&ptr0[1];
}

long* sub_400D55(long* param0, unsigned int param1, int param2) {
    long* ptr0 = param0;
    unsigned int v0 = param1;
    int v1 = param2;
    long v2 = /*BAD_CALL!*/ sub_400CE9(ptr0);
    int v3 = (unsigned int)v2 - 1;
    for(unsigned int i = 0; (unsigned int)v2 - 1 - i != v0; ++i) {
        ptr0 = (long*)ptr0[0];
    }
    long* result = ptr0;
    *(int*)&result[1] = v1;
    return result;
}

long sub_400DA9(int param0) {
    char v0;
    long v1;
    char v2;
    char v3;
    long v4;
    char v5;
    char v6;
    long v7;
    char v8;
    int v9;
    long* ptr0 = &v1;
    long v10 = v4;
    long* ptr1 = &v10;
    char v11 = &v0 == 0xba4b8L;
    char v12 = (long)&v6 < 0L;
    char v13 = __parity__((unsigned char)&v0 - 184);
    char v14 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v10 ^ 0xba4a8L) ^ (long)&v6) >>> 4L) & 0x1L);
    char v15 = (unsigned long)&v10 < 0xba4a8L;
    char v16 = (long)(long*)((long)(long*)((long)&v10 ^ (long)&v6) & (long)(long*)((long)&v10 ^ 0xba4a8L)) < 0L;
    long v17 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v18 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v19 = 0L;
    char v20 = 1;
    char v21 = 0;
    char v22 = 1;
    char v23 = 0;
    char v24 = 0;
    long v25 = 0L;
    →time();
    long v26 = (unsigned long)v9;
    →srand();
    char v27 = 0;
    int v28 = 0;
    long v29 = 0L;
    int* ptr2 = &v3;
    long v30 = &gvar_E4DC00;
    long v31 = 9532L;
    long v32 = &gvar_E4DC00;
    int* ptr3 = &v3;
    →memcpy();
    long* ptr4 = &v8;
    long v33 = &gvar_E50140;
    long v34 = 9532L;
    long v35 = &gvar_E50140;
    long* ptr5 = &v8;
    →memcpy();
    long* ptr6 = &v2;
    long v36 = &gvar_E52680;
    long v37 = 11100L;
    long v38 = &gvar_E52680;
    long* ptr7 = &v2;
    →memcpy();
    long* ptr8 = &v5;
    long v39 = &gvar_E551E0;
    long v40 = 11100L;
    long v41 = &gvar_E551E0;
    long* ptr9 = &v5;
    →memcpy();
    long* ptr10 = &v7;
    long v42 = &gvar_E57D40;
    long v43 = 22200L;
    long v44 = &gvar_E57D40;
    long* ptr11 = &v7;
    →memcpy();
    long v45 = 0L;
    int v46 = 0;
    int v47 = 0;
    long* ptr12 = &v8;
    long* ptr13 = &v8;
    int* ptr14 = &v3;
    int* ptr15 = &v3;
    int v48 = 0;
    int* ptr16 = ptr15;
    int* ptr17 = ptr15;
    long v49 = 0L;
    int v50 = 0;
    int v51 = 0;
    int v52 = 0;
    int v53 = param0;
    unsigned int v54 = 0;
    int v55 = 0;
    char v56 = 0;
    char v57 = 0;
    long v58 = 0x3700c083L;
    long v59 = 0L;
    long v60 = 0L;
    int v61 = 0;
    int v62 = 0;
    int v63 = 0;
    int v64 = 0;
    char v65 = 0;
    char v66 = 0;
    int v67 = 0;
    unsigned int v68 = 0;
    int v69 = 0;
    char v70 = 0;
    char v71 = 0;
    char v72 = 1;
    char v73 = 0;
    char v74 = 1;
    unsigned int v75 = 0;
    int v76 = 0;
    unsigned int v77 = 0;
    unsigned int v78 = 0;
    int v79 = 0;
    char v80 = 0;
    char v81 = 0;
    char v82 = 1;
    char v83 = 0;
    char v84 = 1;
    unsigned int v85 = 0;
    unsigned int v86 = 0;
    int v87 = 0;
    char v88 = 1;
    char v89 = 0;
    char v90 = 1;
    char v91 = 0;
    char v92 = 0;
    char v93 = 0;
    unsigned int v94 = 0;
    int v95 = 0;
    unsigned int v96 = 0;
    unsigned int v97 = 0;
    int v98 = 0;
    unsigned int v99 = 0;
    unsigned int v100 = 0;
    int v101 = 0;
    char v102 = 1;
    char v103 = 0;
    char v104 = 1;
    char v105 = 0;
    char v106 = 0;
    char v107 = 0;
    long v108 = 0L;
    long v109 = 0L;
    long v110 = 0L;
    int* ptr18 = ptr17;
    int* ptr19 = ptr17;
    int* ptr20 = ptr18;
    char v111 = ptr20 ? 0: 1;
    char v112 = (long)ptr20 < 0L;
    char v113 = __parity__((unsigned char)ptr20);
    char v114 = (long*)((long)(long*)((long)(long*)((long)ptr20 ^ (long)ptr19) >>> 4L) & 0x1L);
    char v115 = (unsigned long)ptr19 >= 0L;
    char v116 = (long)(long*)((long)(long*)((long)ptr20 ^ (long)ptr19) & (int*)~(long)ptr19) < 0L;
    int v117 = *ptr20;
    int v118 = 0;
    long* ptr21 = ptr13;
    long* ptr22 = ptr13;
    int v119 = v117;
    int v120 = v117;
    int v121 = 0;
    unsigned int v122 = 0;
    unsigned int v123 = (unsigned int)(v120 * 1445);
    int v124 = 0;
    char v125 = (long)v120 * 1445L != ((unsigned long)(v120 * 1445) | ((unsigned long)(v123 >= 0x80000000 ? -1: 0) << 32));
    char v126 = (long)v120 * 1445L != (long)v123;
    long v127 = 0x3700c083L;
    unsigned int v128 = v123;
    int v129 = 0;
    unsigned int v130 = v123;
    int v131 = 0;
    int v132 = v128 * 0x3700c083;
    int v133 = 0;
    int v134 = (unsigned int)(((long)v130 * 0x3700c083L) >>> 32L);
    int v135 = 0;
    char v136 = (long)v132 != ((unsigned long)v132 | ((unsigned long)(unsigned int)(((long)v130 * 0x3700c083L) >>> 32L) << 32));
    char v137 = (long)v132 != ((unsigned long)v132 | ((unsigned long)v134 << 32));
    int v138 = v134;
    unsigned int v139 = (unsigned int)(v134 >> 9);
    int v140 = 0;
    char v141 = (v138 >>> 8) & 0x1;
    char v142 = v137;
    char v143 = v139 ? 0: 1;
    char v144 = v139 >= 0x80000000;
    char v145 = __parity__((unsigned char)v139);
    unsigned int v146 = v123;
    int v147 = 0;
    unsigned int v148 = v123;
    unsigned int v149 = v146 >> 31;
    int v150 = 0;
    char v151 = (v148 >>> 30) & 0x1;
    char v152 = v142;
    char v153 = v149 ? 0: 1;
    char v154 = v149 >= 0x80000000;
    char v155 = __parity__((unsigned char)v149);
    unsigned int v156 = v139;
    unsigned int v157 = v139 - v149;
    int v158 = 0;
    char v159 = v149 == v139;
    char v160 = v157 >= 0x80000000;
    char v161 = __parity__((unsigned char)v157);
    char v162 = (((v149 ^ v156) ^ v157) >>> 4) & 0x1;
    char v163 = v149 > v156;
    char v164 = (int)((v149 ^ v156) & (v157 ^ v156)) < 0;
    unsigned int v165 = v157;
    int v166 = 0;
    unsigned int v167 = v157;
    unsigned int v168 = v165 * 2383;
    int v169 = 0;
    unsigned int v170 = v123;
    unsigned int v171 = v123 - v168;
    int v172 = 0;
    char v173 = v168 == v123;
    char v174 = v171 >= 0x80000000;
    char v175 = __parity__((unsigned char)v171);
    char v176 = (((v168 ^ v170) ^ v171) >>> 4) & 0x1;
    char v177 = v168 > v170;
    char v178 = (int)((v168 ^ v170) & (v171 ^ v170)) < 0;
    long v179 = (unsigned long)v171;
    long v180 = (unsigned long)v171 | ((unsigned long)((v179 >>> 31L) & 0x1L ? -1: 0) << 32);
    long v181 = v180 * 4L;
    long* ptr23 = ptr22;
    long* ptr24 = ptr22;
    int* ptr25 = (int*)((long)ptr23 + v181);
    char v182 = ptr25 ? 0: 1;
    char v183 = (long)ptr25 < 0L;
    char v184 = __parity__((unsigned char)ptr25);
    char v185 = (long*)((long)(long*)((long)(long*)((long)(long*)(v181 ^ (long)ptr24) ^ (long)ptr25) >>> 4L) & 0x1L);
    char v186 = __carry__(v181, (long)ptr24);
    char v187 = (long)(long*)((long)(long*)((long)ptr25 ^ (long)ptr24) & (long*)~(long)(long*)(v181 ^ (long)ptr24)) < 0L;
    int v188 = *ptr25;
    int v189 = 0;
    long* ptr26 = &v5;
    long* ptr27 = &v5;
    long* ptr28 = &v2;
    long* ptr29 = &v2;
    int v190 = v188;
    long* ptr30 = ptr29;
    long* ptr31 = ptr29;
    long v191 = (unsigned long)v190;
    int v192 = v190;
    int v193 = v190;
    int v194 = 0;
    unsigned int v195 = v171;
    unsigned int v196 = (unsigned int)(v193 * 601);
    int v197 = 0;
    char v198 = (long)v193 * 601L != ((unsigned long)(v193 * 601) | ((unsigned long)(v196 >= 0x80000000 ? -1: 0) << 32));
    char v199 = (long)v193 * 601L != (long)v196;
    long v200 = 0x2f3bafedL;
    unsigned int v201 = v196;
    int v202 = 0;
    unsigned int v203 = v196;
    int v204 = 0;
    int v205 = v201 * 0x2f3bafed;
    int v206 = 0;
    int v207 = (unsigned int)(((long)v203 * 0x2f3bafedL) >>> 32L);
    int v208 = 0;
    char v209 = (long)v205 != ((unsigned long)v205 | ((unsigned long)(unsigned int)(((long)v203 * 0x2f3bafedL) >>> 32L) << 32));
    char v210 = (long)v205 != ((unsigned long)v205 | ((unsigned long)v207 << 32));
    int v211 = v207;
    unsigned int v212 = (unsigned int)(v207 >> 9);
    int v213 = 0;
    char v214 = (v211 >>> 8) & 0x1;
    char v215 = v210;
    char v216 = v212 ? 0: 1;
    char v217 = v212 >= 0x80000000;
    char v218 = __parity__((unsigned char)v212);
    unsigned int v219 = v196;
    int v220 = 0;
    unsigned int v221 = v196;
    unsigned int v222 = v219 >> 31;
    int v223 = 0;
    char v224 = (v221 >>> 30) & 0x1;
    char v225 = v215;
    char v226 = v222 ? 0: 1;
    char v227 = v222 >= 0x80000000;
    char v228 = __parity__((unsigned char)v222);
    unsigned int v229 = v212;
    unsigned int v230 = v212 - v222;
    int v231 = 0;
    char v232 = v222 == v212;
    char v233 = v230 >= 0x80000000;
    char v234 = __parity__((unsigned char)v230);
    char v235 = (((v222 ^ v229) ^ v230) >>> 4) & 0x1;
    char v236 = v222 > v229;
    char v237 = (int)((v222 ^ v229) & (v230 ^ v229)) < 0;
    unsigned int v238 = v230;
    int v239 = 0;
    unsigned int v240 = v230;
    unsigned int v241 = v238 * 2775;
    int v242 = 0;
    unsigned int v243 = v196;
    unsigned int v244 = v196 - v241;
    int v245 = 0;
    char v246 = v241 == v196;
    char v247 = v244 >= 0x80000000;
    char v248 = __parity__((unsigned char)v244);
    char v249 = (((v241 ^ v243) ^ v244) >>> 4) & 0x1;
    char v250 = v241 > v243;
    char v251 = (int)((v241 ^ v243) & (v244 ^ v243)) < 0;
    long v252 = (unsigned long)v244;
    long v253 = (unsigned long)v244 | ((unsigned long)((v252 >>> 31L) & 0x1L ? -1: 0) << 32);
    long v254 = v253 * 4L;
    long* ptr32 = ptr31;
    long* ptr33 = ptr31;
    int* ptr34 = (int*)((long)ptr32 + v254);
    char v255 = ptr34 ? 0: 1;
    char v256 = (long)ptr34 < 0L;
    char v257 = __parity__((unsigned char)ptr34);
    char v258 = (long*)((long)(long*)((long)(long*)((long)(long*)(v254 ^ (long)ptr33) ^ (long)ptr34) >>> 4L) & 0x1L);
    char v259 = __carry__(v254, (long)ptr33);
    char v260 = (long)(long*)((long)(long*)((long)ptr34 ^ (long)ptr33) & (long*)~(long)(long*)(v254 ^ (long)ptr33)) < 0L;
    int v261 = *ptr34;
    int v262 = 0;
    long* ptr35 = ptr27;
    long* ptr36 = ptr27;
    int v263 = v261;
    int v264 = v261;
    int v265 = 0;
    unsigned int v266 = v244;
    unsigned int v267 = (unsigned int)(v264 * 469);
    int v268 = 0;
    char v269 = (long)v264 * 469L != ((unsigned long)(v264 * 469) | ((unsigned long)(v267 >= 0x80000000 ? -1: 0) << 32));
    char v270 = (long)v264 * 469L != (long)v267;
    long v271 = 0x2f3bafedL;
    unsigned int v272 = v267;
    int v273 = 0;
    unsigned int v274 = v267;
    int v275 = 0;
    int v276 = v272 * 0x2f3bafed;
    int v277 = 0;
    int v278 = (unsigned int)(((long)v274 * 0x2f3bafedL) >>> 32L);
    int v279 = 0;
    char v280 = (long)v276 != ((unsigned long)v276 | ((unsigned long)(unsigned int)(((long)v274 * 0x2f3bafedL) >>> 32L) << 32));
    char v281 = (long)v276 != ((unsigned long)v276 | ((unsigned long)v278 << 32));
    int v282 = v278;
    unsigned int v283 = (unsigned int)(v278 >> 9);
    int v284 = 0;
    char v285 = (v282 >>> 8) & 0x1;
    char v286 = v281;
    char v287 = v283 ? 0: 1;
    char v288 = v283 >= 0x80000000;
    char v289 = __parity__((unsigned char)v283);
    unsigned int v290 = v267;
    int v291 = 0;
    unsigned int v292 = v267;
    unsigned int v293 = v290 >> 31;
    int v294 = 0;
    char v295 = (v292 >>> 30) & 0x1;
    char v296 = v286;
    char v297 = v293 ? 0: 1;
    char v298 = v293 >= 0x80000000;
    char v299 = __parity__((unsigned char)v293);
    unsigned int v300 = v283;
    unsigned int v301 = v283 - v293;
    int v302 = 0;
    char v303 = v293 == v283;
    char v304 = v301 >= 0x80000000;
    char v305 = __parity__((unsigned char)v301);
    char v306 = (((v293 ^ v300) ^ v301) >>> 4) & 0x1;
    char v307 = v293 > v300;
    char v308 = (int)((v293 ^ v300) & (v301 ^ v300)) < 0;
    unsigned int v309 = v301;
    int v310 = 0;
    unsigned int v311 = v301;
    unsigned int v312 = v309 * 2775;
    int v313 = 0;
    unsigned int v314 = v267;
    unsigned int v315 = v267 - v312;
    int v316 = 0;
    char v317 = v312 == v267;
    char v318 = v315 >= 0x80000000;
    char v319 = __parity__((unsigned char)v315);
    char v320 = (((v312 ^ v314) ^ v315) >>> 4) & 0x1;
    char v321 = v312 > v314;
    char v322 = (int)((v312 ^ v314) & (v315 ^ v314)) < 0;
    long v323 = (unsigned long)v315;
    long v324 = (unsigned long)v315 | ((unsigned long)((v323 >>> 31L) & 0x1L ? -1: 0) << 32);
    long v325 = v324 * 4L;
    long* ptr37 = ptr36;
    long* ptr38 = ptr36;
    int* ptr39 = (int*)((long)ptr37 + v325);
    char v326 = ptr39 ? 0: 1;
    char v327 = (long)ptr39 < 0L;
    char v328 = __parity__((unsigned char)ptr39);
    char v329 = (long*)((long)(long*)((long)(long*)((long)(long*)(v325 ^ (long)ptr38) ^ (long)ptr39) >>> 4L) & 0x1L);
    char v330 = __carry__(v325, (long)ptr38);
    char v331 = (long)(long*)((long)(long*)((long)ptr39 ^ (long)ptr38) & (long*)~(long)(long*)(v325 ^ (long)ptr38)) < 0L;
    int v332 = *ptr39;
    int v333 = 0;
    long v334 = 0L;
    long v335 = 1L;
    v493 = 1L;
    int v336 = 0;
    int v337 = 0;
    long* ptr40 = &v8;
    long* ptr41 = &v8;
    int* ptr42 = &v3;
    int* ptr43 = &v3;
    int v338 = 0;
    int* ptr44 = ptr43;
    int* ptr45 = ptr43;
    long v339 = 0L;
    int v340 = 0;
    int v341 = 0;
    int v342 = 0;
    unsigned int v343 = v315;
    unsigned int v344 = 0;
    int v345 = 0;
    char v346 = 0;
    char v347 = 0;
    long v348 = 0x3700c083L;
    long v349 = 0L;
    long v350 = 0L;
    int v351 = 0;
    int v352 = 0;
    int v353 = 0;
    int v354 = 0;
    char v355 = 0;
    char v356 = 0;
    int v357 = 0;
    unsigned int v358 = 0;
    int v359 = 0;
    char v360 = 0;
    char v361 = 0;
    char v362 = 1;
    char v363 = 0;
    char v364 = 1;
    unsigned int v365 = 0;
    int v366 = 0;
    unsigned int v367 = 0;
    unsigned int v368 = 0;
    int v369 = 0;
    char v370 = 0;
    char v371 = 0;
    char v372 = 1;
    char v373 = 0;
    char v374 = 1;
    unsigned int v375 = 0;
    unsigned int v376 = 0;
    int v377 = 0;
    char v378 = 1;
    char v379 = 0;
    char v380 = 1;
    char v381 = 0;
    char v382 = 0;
    char v383 = 0;
    unsigned int v384 = 0;
    int v385 = 0;
    unsigned int v386 = 0;
    unsigned int v387 = 0;
    int v388 = 0;
    unsigned int v389 = 0;
    unsigned int v390 = 0;
    int v391 = 0;
    char v392 = 1;
    char v393 = 0;
    char v394 = 1;
    char v395 = 0;
    char v396 = 0;
    char v397 = 0;
    long v398 = 0L;
    long v399 = 0L;
    long v400 = 0L;
    int* ptr46 = ptr45;
    int* ptr47 = ptr45;
    int* ptr48 = ptr46;
    char v401 = ptr48 ? 0: 1;
    char v402 = (long)ptr48 < 0L;
    char v403 = __parity__((unsigned char)ptr48);
    char v404 = (long*)((long)(long*)((long)(long*)((long)ptr48 ^ (long)ptr47) >>> 4L) & 0x1L);
    char v405 = (unsigned long)ptr47 >= 0L;
    char v406 = (long)(long*)((long)(long*)((long)ptr48 ^ (long)ptr47) & (int*)~(long)ptr47) < 0L;
    int v407 = *ptr48;
    int v408 = 0;
    long* ptr49 = ptr41;
    long* ptr50 = ptr41;
    int v409 = v407;
    int v410 = v407;
    int v411 = 0;
    unsigned int v412 = 0;
    unsigned int v413 = (unsigned int)(v410 * 1445);
    int v414 = 0;
    char v415 = (long)v410 * 1445L != ((unsigned long)(v410 * 1445) | ((unsigned long)(v413 >= 0x80000000 ? -1: 0) << 32));
    char v416 = (long)v410 * 1445L != (long)v413;
    long v417 = 0x3700c083L;
    unsigned int v418 = v413;
    int v419 = 0;
    unsigned int v420 = v413;
    int v421 = 0;
    int v422 = v418 * 0x3700c083;
    int v423 = 0;
    int v424 = (unsigned int)(((long)v420 * 0x3700c083L) >>> 32L);
    int v425 = 0;
    char v426 = (long)v422 != ((unsigned long)v422 | ((unsigned long)(unsigned int)(((long)v420 * 0x3700c083L) >>> 32L) << 32));
    char v427 = (long)v422 != ((unsigned long)v422 | ((unsigned long)v424 << 32));
    int v428 = v424;
    unsigned int v429 = (unsigned int)(v424 >> 9);
    int v430 = 0;
    char v431 = (v428 >>> 8) & 0x1;
    char v432 = v427;
    char v433 = v429 ? 0: 1;
    char v434 = v429 >= 0x80000000;
    char v435 = __parity__((unsigned char)v429);
    unsigned int v436 = v413;
    int v437 = 0;
    unsigned int v438 = v413;
    unsigned int v439 = v436 >> 31;
    int v440 = 0;
    char v441 = (v438 >>> 30) & 0x1;
    char v442 = v432;
    char v443 = v439 ? 0: 1;
    char v444 = v439 >= 0x80000000;
    char v445 = __parity__((unsigned char)v439);
    unsigned int v446 = v429;
    unsigned int v447 = v429 - v439;
    int v448 = 0;
    char v449 = v439 == v429;
    char v450 = v447 >= 0x80000000;
    char v451 = __parity__((unsigned char)v447);
    char v452 = (((v439 ^ v446) ^ v447) >>> 4) & 0x1;
    char v453 = v439 > v446;
    char v454 = (int)((v439 ^ v446) & (v447 ^ v446)) < 0;
    unsigned int v455 = v447;
    int v456 = 0;
    unsigned int v457 = v447;
    unsigned int v458 = v455 * 2383;
    int v459 = 0;
    unsigned int v460 = v413;
    unsigned int v461 = v413 - v458;
    int v462 = 0;
    char v463 = v458 == v413;
    char v464 = v461 >= 0x80000000;
    char v465 = __parity__((unsigned char)v461);
    char v466 = (((v458 ^ v460) ^ v461) >>> 4) & 0x1;
    char v467 = v458 > v460;
    char v468 = (int)((v458 ^ v460) & (v461 ^ v460)) < 0;
    long v469 = (unsigned long)v461;
    long v470 = (unsigned long)v461 | ((unsigned long)((v469 >>> 31L) & 0x1L ? -1: 0) << 32);
    long v471 = v470 * 4L;
    long* ptr51 = ptr50;
    long* ptr52 = ptr50;
    int* ptr53 = (int*)((long)ptr51 + v471);
    char v472 = ptr53 ? 0: 1;
    char v473 = (long)ptr53 < 0L;
    char v474 = __parity__((unsigned char)ptr53);
    char v475 = (long*)((long)(long*)((long)(long*)((long)(long*)(v471 ^ (long)ptr52) ^ (long)ptr53) >>> 4L) & 0x1L);
    char v476 = __carry__(v471, (long)ptr52);
    char v477 = (long)(long*)((long)(long*)((long)ptr53 ^ (long)ptr52) & (long*)~(long)(long*)(v471 ^ (long)ptr52)) < 0L;
    long v478 = (unsigned long)*ptr53;
    long v479 = (unsigned long)*ptr53 | ((unsigned long)((v478 >>> 31L) & 0x1L ? -1: 0) << 32);
    long v480 = *(long*)(v479 * 8L + (long)&v7);
    long v481 = *(long*)(v479 * 8L + (long)&v7);
    int v482 = v332;
    long v483 = (unsigned long)v482;
    long v484 = (unsigned long)v482 | ((unsigned long)((v483 >>> 31L) & 0x1L ? -1: 0) << 32);
    long v485 = v481;
    long v486 = v481;
    void* ptr54 = (void*)(v485 + v484);
    char v487 = ptr54 ? 0: 1;
    char v488 = (long)ptr54 < 0L;
    char v489 = __parity__((unsigned char)ptr54);
    char v490 = (long*)((long)(long*)((long)(long*)((v484 ^ v486) ^ (long)ptr54) >>> 4L) & 0x1L);
    char v491 = __carry__(v484, v486);
    char v492 = (long)(long*)((long)(long*)((long)ptr54 ^ v486) & ~(v484 ^ v486)) < 0L;
    void* ptr55 = ptr54;
    void* ptr56 = ptr54;
    long* ptr57 = &v6;
    jump ptr56;
}
