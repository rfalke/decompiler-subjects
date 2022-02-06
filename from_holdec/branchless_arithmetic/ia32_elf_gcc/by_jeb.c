
unsigned int __divdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0;
    unsigned int v1;
    int v2 = 0;
    unsigned int v3 = param2;
    unsigned int v4 = param0;
    unsigned int v5 = param1;
    if(param1 >= 0x80000000) {
        v2 = -1;
        v4 = (unsigned int)(0 - param0);
        v5 = (unsigned int)(0 - (unsigned int)((unsigned int)(param0 > 0) + param1));
    }
    unsigned int v6 = param3;
    if(param3 >= 0x80000000) {
        unsigned int v7 = v3;
        v3 = (unsigned int)(0 - v3);
        v2 = ~v2;
        v6 = (unsigned int)(0 - (unsigned int)((unsigned int)(v7 > 0) + param3));
    }
    unsigned int v8 = v3;
    if(!v6) {
        if(v5 < v8) {
            v1 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v5 << 32)) / v8;
        }
        else {
            if(!v8) {
                v8 = 1 / 0;
            }
            v1 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)(v5 % v8) << 32)) / v8;
        }
    }
    else if(v6 > v5) {
        v1 = 0;
    }
    else {
        if(v6 != 0) {
            int i;
            for(i = 31; !(v6 >>> i); --i) {
            }
            v0 = i;
        }
        if((unsigned int)(v0 ^ 0x1f)) {
            int v9 = v8 << ((unsigned int)(v0 ^ 0x1f) & 0x1f);
            unsigned int v10 = (unsigned int)((v6 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (v8 >>> ((32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f)));
            int v11 = v5 >>> ((32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f);
            int v12 = (v5 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (v4 >>> ((32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f));
            unsigned int v13 = (unsigned int)((unsigned long long)v12 | ((unsigned long long)v11 << 32)) / v10;
            unsigned int v14 = (unsigned int)((unsigned long long)v12 | ((unsigned long long)v11 << 32)) % v10;
            v1 = v13;
            unsigned int v15 = (unsigned int)(((unsigned long long)v13 * (unsigned long long)v9) >>> 32L);
            if(v15 > v14 || (v13 * v9 > v4 << ((unsigned int)(v0 ^ 0x1f) & 0x1f) && v15 == v14)) {
                --v1;
            }
        }
        else if(v6 >= v5) {
            v1 = 0;
            if(v8 <= v4) {
                goto loc_80497F3;
            }
        }
        else {
        loc_80497F3:
            v1 = 1;
        }
    }
    unsigned int result = v1;
    if(v2) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int __udivdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0;
    unsigned int v1;
    if(!param3) {
        return (int)(param1 >= param2 ? (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % (!param2 ? 1 / param2: param2)) << 32)) / (unsigned int)(!param2 ? (unsigned long long)(1 / param2): (unsigned long long)param2): (unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) / param2);
    }
    if(param1 < param3) {
        v1 = 0;
    }
    else {
        if(param3 != 0) {
            int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            v0 = i;
        }
        if((unsigned int)(v0 ^ 0x1f)) {
            unsigned int v2 = (unsigned int)((param3 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (param2 >>> ((unsigned int)(32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f)));
            int v3 = param2 << ((unsigned int)(v0 ^ 0x1f) & 0x1f);
            int v4 = param1 >>> ((unsigned int)(32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f);
            int v5 = (param1 << ((unsigned int)(v0 ^ 0x1f) & 0x1f)) | (param0 >>> ((unsigned int)(32 - (unsigned int)(v0 ^ 0x1f)) & 0x1f));
            unsigned int v6 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v4 << 32)) / v2;
            unsigned int v7 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v4 << 32)) % v2;
            unsigned int v8 = (unsigned int)(((unsigned long long)v6 * (unsigned long long)v3) >>> 32L);
            v1 = v8 <= v7 && (v6 * v3 <= param0 << ((unsigned int)(v0 ^ 0x1f) & 0x1f) || v8 != v7) ? v6: v6 - 1;
        }
        else if(param1 <= param3) {
            v1 = 0;
            if(param0 >= param2) {
                v1 = 1;
                return (int)v1;
            }
        }
        else {
            v1 = 1;
        }
    }
    return (int)v1;
}

void __x86.get_pc_thunk.bp() {
}

unsigned int abs32(unsigned int param0) {
    return (int)param0 <= 0 ? (unsigned int)(0 - param0): param0;
}

unsigned int abs64(unsigned int param0, int param1) {
    return (int)(unsigned int)((unsigned int)(param0 > 0) + param1) <= 0 ? (unsigned int)(0 - param0): param0;
}

int main() {
    int v0;
    int v1;
    char v2;
    int v3;
    int v4;
    int v5;
    char v6;
    int v7;
    int v8;
    unsigned int v9;
    int v10;
    int* ptr0 = &v2;
    char v11 = &v0 ? 0: 1;
    char v12 = (int)&v0 < 0;
    char v13 = __parity__((unsigned char)&v0);
    char v14 = 0;
    char v15 = 0;
    int v16 = v0;
    int v17 = v3;
    int* ptr1 = &v17;
    int v18 = v4;
    int v19 = v5;
    int* ptr2 = &v2;
    int* ptr3 = &ptr2;
    char v20 = &v0 == 32;
    char v21 = (int)&v6 < 0;
    char v22 = __parity__((unsigned char)&v0 - 32);
    char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
    char v24 = (unsigned int)&ptr2 < 12;
    char v25 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v6) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
    int v26 = sat_addu32b(-1, 3);
    unsigned int v27 = v9;
    int v28 = v8;
    →printf("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    int v29 = v10;
    int v30 = -1;
    int v31 = sat_subu32b(1, 3);
    int* ptr4 = &v10;
    char v32 = &v0 == 32;
    char v33 = (int)&v6 < 0;
    char v34 = __parity__((unsigned char)&v0 - 32);
    char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
    char v36 = (unsigned int)&v10 >= 0xfffffff0;
    char v37 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    →printf("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    int v38 = v10;
    int v39 = 1;
    int v40 = sat_mulu32b(-1, 3);
    int* ptr5 = &v10;
    char v41 = &v0 == 32;
    char v42 = (int)&v6 < 0;
    char v43 = __parity__((unsigned char)&v0 - 32);
    char v44 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
    char v45 = (unsigned int)&v10 >= 0xfffffff0;
    char v46 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    →printf("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    int v47 = v10;
    int v48 = -1;
    unsigned int v49 = sat_divu32b(0xffffffff, 3);
    int* ptr6 = &v10;
    char v50 = &v0 == 32;
    char v51 = (int)&v6 < 0;
    char v52 = __parity__((unsigned char)&v0 - 32);
    char v53 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
    char v54 = (unsigned int)&v10 >= 0xfffffff0;
    char v55 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    →printf("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    int v56 = v10;
    int v57 = -1;
    int v58 = sat_adds32b_var3(0x7fffffff, 2);
    int v59 = v10;
    int v60 = -1;
    int v61 = v58;
    int v62 = sat_adds32b_var2(0x7fffffff, 2);
    int v63 = v10;
    int v64 = -1;
    int v65 = v62;
    unsigned int v66 = sat_adds32b_var1(0x7fffffff, 2);
    int v67 = v10;
    int v68 = -1;
    v10 = v65;
    int v69 = 2;
    int v70 = 0x7fffffff;
    →printf("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    int* ptr7 = &v1;
    char v71 = &v0 == 40;
    char v72 = (int)&v9 < 0;
    char v73 = __parity__((unsigned char)&v0 - 40);
    char v74 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x18) ^ (int)&v9) >>> 4) & 0x1);
    char v75 = (unsigned int)&v1 >= 0xffffffe8;
    char v76 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x18)) < 0;
    int v77 = sat_subs32b(0x80000000, 2);
    int* ptr8 = &v10;
    char v78 = &v0 == 32;
    char v79 = (int)&v6 < 0;
    char v80 = __parity__((unsigned char)&v0 - 32);
    char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
    char v82 = (unsigned int)&v10 >= 0xfffffff0;
    char v83 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    →printf("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    int v84 = v10;
    int v85 = 0x80000000;
    int v86 = sat_muls32b(0x7fffffff, 2);
    int* ptr9 = &v10;
    char v87 = &v0 == 32;
    char v88 = (int)&v6 < 0;
    char v89 = __parity__((unsigned char)&v0 - 32);
    char v90 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
    char v91 = (unsigned int)&v10 >= 0xfffffff0;
    char v92 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    →printf("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    int v93 = v10;
    int v94 = 0x7fffffff;
    int v95 = sat_divs32b(0x80000000, -1);
    int* ptr10 = &v10;
    char v96 = &v0 == 32;
    char v97 = (int)&v6 < 0;
    char v98 = __parity__((unsigned char)&v0 - 32);
    char v99 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
    char v100 = (unsigned int)&v10 >= 0xfffffff0;
    char v101 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    v8 = v95;
    →printf("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    unsigned int v102 = abs32(0xfffffff0);
    int* ptr11 = &v10;
    char v103 = &v0 == 36;
    char v104 = (int)&v8 < 0;
    char v105 = __parity__((unsigned char)&v0 - 36);
    char v106 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
    char v107 = (unsigned int)&v10 >= 0xfffffff4;
    char v108 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v10) & (int*)~(int)(int*)((int)&v10 ^ 0xc)) < 0;
    →printf("abs32(0x%08x) = 0x%08x\n");
    unsigned int v109 = sgn32(3);
    int* ptr12 = &v10;
    char v110 = &v0 == 36;
    char v111 = (int)&v8 < 0;
    char v112 = __parity__((unsigned char)&v0 - 36);
    char v113 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0xc) ^ (int)&v8) >>> 4) & 0x1);
    char v114 = (unsigned int)&v10 >= 0xfffffff4;
    char v115 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&v10) & (int*)~(int)(int*)((int)&v10 ^ 0xc)) < 0;
    v9 = v109;
    int v116 = 3;
    →printf("sgn32(0x%08x) = 0x%08x\n");
    int v117 = sat_addu64b(0, 0, 0, 0);
    int* ptr13 = &v1;
    char v118 = &v0 == 48;
    char v119 = (int)&v10 < 0;
    char v120 = __parity__((unsigned char)&v0 - 48);
    char v121 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v10) >>> 4) & 0x1);
    char v122 = (unsigned int)&v1 >= 0xfffffff0;
    char v123 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v124 = v117;
    int v125 = v7;
    int v126 = sat_subu64b(0, 0, 0, 0);
    int* ptr14 = &v1;
    char v127 = &v0 == 48;
    char v128 = (int)&v10 < 0;
    char v129 = __parity__((unsigned char)&v0 - 48);
    char v130 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v10) >>> 4) & 0x1);
    char v131 = (unsigned int)&v1 >= 0xfffffff0;
    char v132 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v133 = v124;
    int v134 = v126 + v124;
    char v135 = v134 ? 0: 1;
    char v136 = v134 < 0;
    char v137 = __parity__((unsigned char)v134);
    char v138 = (((v126 ^ v133) ^ v134) >>> 4) & 0x1;
    char v139 = __carry__(v126, v133);
    char v140 = ((v134 ^ v133) & ~(v126 ^ v133)) < 0;
    int v141 = v125;
    int v142 = (unsigned int)v139 + v7 + v125;
    char v143 = v142 ? 0: 1;
    char v144 = v142 < 0;
    char v145 = __parity__((unsigned char)v142);
    char v146 = (((v7 ^ v141) ^ v142) >>> 4) & 0x1;
    char v147 = __carry__(v7, v141);
    char v148 = ((v142 ^ v141) & ~(v7 ^ v141)) < 0;
    int v149 = sat_divu64b(0, 0, 1, 0);
    int* ptr15 = &v1;
    char v150 = &v0 == 48;
    char v151 = (int)&v10 < 0;
    char v152 = __parity__((unsigned char)&v0 - 48);
    char v153 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v10) >>> 4) & 0x1);
    char v154 = (unsigned int)&v1 >= 0xfffffff0;
    char v155 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v156 = v134;
    int v157 = v149 + v134;
    char v158 = v157 ? 0: 1;
    char v159 = v157 < 0;
    char v160 = __parity__((unsigned char)v157);
    char v161 = (((v149 ^ v156) ^ v157) >>> 4) & 0x1;
    char v162 = __carry__(v149, v156);
    char v163 = ((v157 ^ v156) & ~(v149 ^ v156)) < 0;
    int v164 = v142;
    int v165 = (unsigned int)v162 + v7 + v142;
    char v166 = v165 ? 0: 1;
    char v167 = v165 < 0;
    char v168 = __parity__((unsigned char)v165);
    char v169 = (((v7 ^ v164) ^ v165) >>> 4) & 0x1;
    char v170 = __carry__(v7, v164);
    char v171 = ((v165 ^ v164) & ~(v7 ^ v164)) < 0;
    int v172 = sat_adds64b(0, 0, 0, 0);
    int* ptr16 = &v1;
    char v173 = &v0 == 48;
    char v174 = (int)&v10 < 0;
    char v175 = __parity__((unsigned char)&v0 - 48);
    char v176 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v10) >>> 4) & 0x1);
    char v177 = (unsigned int)&v1 >= 0xfffffff0;
    char v178 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v179 = v157;
    int v180 = v172 + v157;
    char v181 = v180 ? 0: 1;
    char v182 = v180 < 0;
    char v183 = __parity__((unsigned char)v180);
    char v184 = (((v172 ^ v179) ^ v180) >>> 4) & 0x1;
    char v185 = __carry__(v172, v179);
    char v186 = ((v180 ^ v179) & ~(v172 ^ v179)) < 0;
    int v187 = v165;
    int v188 = (unsigned int)v185 + v7 + v165;
    char v189 = v188 ? 0: 1;
    char v190 = v188 < 0;
    char v191 = __parity__((unsigned char)v188);
    char v192 = (((v7 ^ v187) ^ v188) >>> 4) & 0x1;
    char v193 = __carry__(v7, v187);
    char v194 = ((v188 ^ v187) & ~(v7 ^ v187)) < 0;
    unsigned int v195 = sat_subs64b(0, 0, 0, 0);
    int* ptr17 = &v1;
    char v196 = &v0 == 48;
    char v197 = (int)&v10 < 0;
    char v198 = __parity__((unsigned char)&v0 - 48);
    char v199 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v10) >>> 4) & 0x1);
    char v200 = (unsigned int)&v1 >= 0xfffffff0;
    char v201 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v202 = v180;
    int v203 = (int)(v195 + v180);
    char v204 = v203 ? 0: 1;
    char v205 = v203 < 0;
    char v206 = __parity__((unsigned char)v203);
    char v207 = (((v195 ^ v202) ^ v203) >>> 4) & 0x1;
    char v208 = __carry__(v195, v202);
    char v209 = ((v203 ^ v202) & ~(v195 ^ v202)) < 0;
    int v210 = v188;
    int v211 = (unsigned int)v208 + v7 + v188;
    char v212 = v211 ? 0: 1;
    char v213 = v211 < 0;
    char v214 = __parity__((unsigned char)v211);
    char v215 = (((v7 ^ v210) ^ v211) >>> 4) & 0x1;
    char v216 = __carry__(v7, v210);
    char v217 = ((v211 ^ v210) & ~(v7 ^ v210)) < 0;
    unsigned int v218 = sat_divs64b(0, 0, 1, 0);
    int v219 = v203;
    int v220 = (int)(v218 + v203);
    char v221 = v220 ? 0: 1;
    char v222 = v220 < 0;
    char v223 = __parity__((unsigned char)v220);
    char v224 = (((v218 ^ v219) ^ v220) >>> 4) & 0x1;
    char v225 = __carry__(v218, v219);
    char v226 = ((v220 ^ v219) & ~(v218 ^ v219)) < 0;
    int v227 = (unsigned int)v225 + v7 + v211;
    int* ptr18 = &v1;
    char v228 = &v0 == 40;
    char v229 = (int)&v9 < 0;
    char v230 = __parity__((unsigned char)&v0 - 40);
    char v231 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x18) ^ (int)&v9) >>> 4) & 0x1);
    char v232 = (unsigned int)&v1 >= 0xffffffe8;
    char v233 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x18)) < 0;
    unsigned int v234 = abs64(0, 0);
    int* ptr19 = &v10;
    char v235 = &v0 == 40;
    char v236 = (int)&v9 < 0;
    char v237 = __parity__((unsigned char)&v0 - 40);
    char v238 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x8) ^ (int)&v9) >>> 4) & 0x1);
    char v239 = (unsigned int)&v10 >= 0xfffffff8;
    char v240 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v10) & (int*)~(int)(int*)((int)&v10 ^ 0x8)) < 0;
    int v241 = v220;
    int v242 = (int)(v234 + v220);
    char v243 = v242 ? 0: 1;
    char v244 = v242 < 0;
    char v245 = __parity__((unsigned char)v242);
    char v246 = (((v234 ^ v241) ^ v242) >>> 4) & 0x1;
    char v247 = __carry__(v234, v241);
    char v248 = ((v242 ^ v241) & ~(v234 ^ v241)) < 0;
    int v249 = v227;
    int v250 = (unsigned int)v247 + v7 + v227;
    char v251 = v250 ? 0: 1;
    char v252 = v250 < 0;
    char v253 = __parity__((unsigned char)v250);
    char v254 = (((v7 ^ v249) ^ v250) >>> 4) & 0x1;
    char v255 = __carry__(v7, v249);
    char v256 = ((v250 ^ v249) & ~(v7 ^ v249)) < 0;
    unsigned int v257 = sgn64(0, 0);
    unsigned int v258 = v257;
    int v259 = (int)(v257 + v242);
    char v260 = v259 ? 0: 1;
    char v261 = v259 < 0;
    char v262 = __parity__((unsigned char)v259);
    char v263 = (((v242 ^ v258) ^ v259) >>> 4) & 0x1;
    char v264 = __carry__(v242, v258);
    char v265 = ((v259 ^ v258) & ~(v242 ^ v258)) < 0;
    int v266 = v7;
    v7 = (unsigned int)v264 + v7 + v250;
    char v267 = v7 ? 0: 1;
    char v268 = v7 < 0;
    char v269 = __parity__((unsigned char)v7);
    char v270 = (((v250 ^ v266) ^ v7) >>> 4) & 0x1;
    char v271 = __carry__(v250, v266);
    char v272 = ((v7 ^ v266) & ~(v250 ^ v266)) < 0;
    int v273 = v259;
    int v274 = v273 ^ 0x2a;
    char v275 = v274 ? 0: 1;
    char v276 = v274 < 0;
    char v277 = __parity__((unsigned char)v274);
    char v278 = 0;
    char v279 = 0;
    int v280 = v7;
    int v281 = v280 | v274;
    char v282 = v281 ? 0: 1;
    char v283 = v281 < 0;
    char v284 = __parity__((unsigned char)v281);
    char v285 = 0;
    char v286 = 0;
    if(v282) {
        int* ptr20 = &v6;
        char v287 = &v0 == 44;
        char v288 = (int)&v116 < 0;
        char v289 = __parity__((unsigned char)&v0 - 44);
        char v290 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0xc) ^ (int)&v116) >>> 4) & 0x1);
        char v291 = (unsigned int)&v6 < 12;
        char v292 = (int)(int*)((int)(int*)((int)&v116 ^ (int)&v6) & (int)(int*)((int)&v6 ^ 0xc)) < 0;
        →puts("not reached");
        int* ptr21 = &v10;
        char v293 = &v0 == 32;
        char v294 = (int)&v6 < 0;
        char v295 = __parity__((unsigned char)&v0 - 32);
        v270 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v6) >>> 4) & 0x1);
        char v296 = (unsigned int)&v10 >= 0xfffffff0;
        char v297 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    }
    int v298 = 0;
    char v299 = 1;
    char v300 = 0;
    char v301 = 1;
    char v302 = 0;
    char v303 = 0;
    int* ptr22 = ptr2;
    int v304 = v19;
    int v305 = v18;
    int v306 = v17;
    int v307 = v18;
    int* ptr23 = &v17;
    jump v307;
}

unsigned int sat_adds32b_var1(int param0, int param1) {
    unsigned int v0 = (unsigned int)(param0 + param1);
    unsigned int v1 = (unsigned int)((param1 >> 31) + (unsigned int)__carry__(param0, param1) + (param0 < 0 ? -1: 0));
    int v2 = 0 - ((unsigned int)(v0 > 0x7fffffff) + v1);
    char v3 = (int)(v1 & v2) < 0;
    unsigned int v4 = v2 < 0 == v3 ? v0: 0x7fffffff;
    unsigned int v5 = v2 < 0 == v3 ? v1: 0;
    int v6 = (int)(v5 - ((unsigned int)(v4 < 0x80000000) - 1));
    return ((v5 ^ v6) & ~v5) < 0 == v6 < 0 ? v4: 0x80000000;
}

int sat_adds32b_var2(int param0, int param1) {
    int v0 = param0 + param1;
    return (param0 ^ param1) >= 0 && (v0 ^ param0) < 0 ? 0x7fffffff - (param0 >> 31): v0;
}

int sat_adds32b_var3(int param0, int param1) {
    int v0 = param0 + param1;
    return (((0x7fffffff - (param0 >> 31)) ^ param1) | ~(v0 ^ param1)) >= 0 ? 0x7fffffff - (param0 >> 31): v0;
}

int sat_adds64b(int param0, int param1, int param2, int param3) {
    return (((unsigned int)((unsigned int)(param1 >>> 31) >= 0x80000001) ^ param3) | ~(((unsigned int)__carry__(param0, param2) + param1 + param3) ^ param3)) < 0 ? param0 + param2: 0x7fffffff - (param1 >> 31);
}

int sat_addu32b(int param0, int param1) {
    return (param0 + param1) | (__carry__(param0, param1) ? -1: 0);
}

int sat_addu64b(int param0, int param1, int param2, int param3) {
    return (unsigned int)(param0 + param2) | (__carry__(param1, param3) ? -1: 0);
}

int sat_divs32b(int param0, int param1) {
    return ((unsigned int)((unsigned int)((param0 + 0x80000000) | (param1 + 1)) < 1) + param0) / param1;
}

unsigned int sat_divs64b(unsigned int param0, int param1, unsigned int param2, unsigned int param3) {
    int v0 = ((unsigned int)(param0 >= 0x80000000) + param1 - 1) | ((unsigned int)(param2 >= 0xffffffff) + param3) | (param0 + 0x80000000) | (param2 + 1) ? 0: 1;
    return __divdi3((unsigned int)(v0 + param0), (unsigned int)((unsigned int)__carry__(v0, param0) + param1), param2, param3);
}

unsigned int sat_divu32b(unsigned int param0, unsigned int param1) {
    return param0 / param1;
}

int sat_divu64b(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    return __udivdi3(param0, param1, param2, param3);
}

int sat_muls32b(int param0, int param1) {
    int v0 = param0 * param1;
    return (unsigned int)(v0 >> 31) != (unsigned int)(((long long)param0 * (long long)param1) >>> 32L) ? 0x7fffffff - ((param0 ^ param1) >> 31): v0;
}

int sat_mulu32b(int param0, int param1) {
    return (param0 * param1) | ((unsigned int)(((unsigned long long)param0 * (unsigned long long)param1) >>> 32L) > 0 ? -1: 0);
}

int sat_subs32b(int param0, int param1) {
    int v0 = param0 - param1;
    return (((0x7fffffff - (param0 >> 31)) ^ param1) & ((0x7fffffff - (param0 >> 31)) ^ v0)) < 0 ? 0x7fffffff - (param0 >> 31): v0;
}

unsigned int sat_subs64b(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    return (((param1 - ((unsigned int)(param0 < param2) + param3)) ^ (unsigned int)(param1 >>> 31 >= 0x80000001)) & ((unsigned int)(param1 >>> 31 >= 0x80000001) ^ param3)) >= 0 ? param0 - param2: (unsigned int)(0x7fffffff - (param1 >> 31));
}

int sat_subu32b(unsigned int param0, unsigned int param1) {
    return (param0 - param1) & (0 - (param0 < param1 ? 0: 1));
}

int sat_subu64b(unsigned int param0, unsigned int param1, unsigned int param2, int param3) {
    return (param0 - param2) & (0 - (param1 - ((unsigned int)(param0 < param2) + param3) > param1 ? 0: 1));
}

unsigned int sgn32(int param0) {
    return (param0 <= 0 ? 0: 1) - (unsigned int)(param0 >>> 31);
}

unsigned int sgn64(unsigned int param0, unsigned int param1) {
    return (unsigned int)(((param1 >> 31) - ((unsigned int)(param1 >> 31 < param0) + param1)) >>> 31) - (param1 >>> 31);
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_80492D7() {
}

int sub_804930C() {
    return 0;
}

void sub_8049358() {
}

int sub_804938D() {
    int result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_80493A8() {
}
