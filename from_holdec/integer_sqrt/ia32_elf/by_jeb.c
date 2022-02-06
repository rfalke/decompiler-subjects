
void __i686.get_pc_thunk.bx() {
}

int integer_sqrt_in_asm(unsigned short param0, int param1) {
    short v0;
    short v1;
    short v2;
    unsigned short v3;
    short v4;
    short v5;
    short v6;
    short v7;
    short v8;
    short v9;
    *(int*)&v0 = (unsigned int)v7;
    *(int*)&v2 = (unsigned int)v6;
    *(int*)&v4 = (unsigned int)v8;
    *(int*)&v5 = (unsigned int)v9;
    int v10 = (unsigned int)(v3 - 0x4000);
    unsigned short v11 = v3 < 0x4000 ? 0xffff: 0;
    short v12 = v1;
    v1 *= 2;
    short v13 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v12) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v14 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v13) + v11 + v11);
    unsigned short v15 = (unsigned short)__carry__(v11, v14);
    short v16 = v1;
    v1 *= 2;
    short v17 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v16) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v18 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v17) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v18) + v15 + v15);
    unsigned short v19 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v20 = v11;
    v11 -= (unsigned short)(v19 < 0x4000) + 1;
    unsigned short v21 = v15;
    v15 -= (unsigned short)(v20 < 1);
    char v22 = v21 < 0;
    if(v22) {
        unsigned short v23 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v24 = v11;
        v11 = (unsigned short)((unsigned short)(v23 >= 0xc000) + v11 + 1);
        unsigned short v25 = v15;
        v15 = (unsigned short)((unsigned short)(v24 >= 0xffff) + v15);
        v22 = v25 >= 0;
    }
    unsigned short v26 = (unsigned short)((unsigned short)~v22 + 2);
    short v27 = v1;
    v1 *= 2;
    short v28 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v27) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v29 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v28) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v29) + v15 + v15);
    short v30 = v1;
    v1 *= 2;
    short v31 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v30) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v32 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v31) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v32) + v15 + v15);
    unsigned short v33 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v34 = v11;
    v11 -= (unsigned short)(v33 < 0x4000) + v26;
    unsigned short v35 = v15;
    v15 -= (unsigned short)(v26 > v34);
    char v36 = v35 < 0;
    if(v36) {
        unsigned short v37 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v38 = v11;
        v11 = (unsigned short)((unsigned short)(v37 >= 0xc000) + v11 + v26);
        unsigned short v39 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v38) + v15);
        v36 = v39 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v36 + v26 + v26);
    short v40 = v1;
    v1 *= 2;
    short v41 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v40) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v42 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v41) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v42) + v15 + v15);
    short v43 = v1;
    v1 *= 2;
    short v44 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v43) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v45 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v44) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v45) + v15 + v15);
    unsigned short v46 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v47 = v11;
    v11 -= (unsigned short)(v46 < 0x4000) + v26;
    unsigned short v48 = v15;
    v15 -= (unsigned short)(v26 > v47);
    char v49 = v48 < 0;
    if(v49) {
        unsigned short v50 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v51 = v11;
        v11 = (unsigned short)((unsigned short)(v50 >= 0xc000) + v11 + v26);
        unsigned short v52 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v51) + v15);
        v49 = v52 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v49 + v26 + v26);
    short v53 = v1;
    v1 *= 2;
    short v54 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v53) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v55 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v54) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v55) + v15 + v15);
    short v56 = v1;
    v1 *= 2;
    short v57 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v56) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v58 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v57) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v58) + v15 + v15);
    unsigned short v59 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v60 = v11;
    v11 -= (unsigned short)(v59 < 0x4000) + v26;
    unsigned short v61 = v15;
    v15 -= (unsigned short)(v26 > v60);
    char v62 = v61 < 0;
    if(v62) {
        unsigned short v63 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v64 = v11;
        v11 = (unsigned short)((unsigned short)(v63 >= 0xc000) + v11 + v26);
        unsigned short v65 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v64) + v15);
        v62 = v65 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v62 + v26 + v26);
    short v66 = v1;
    v1 *= 2;
    short v67 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v66) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v68 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v67) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v68) + v15 + v15);
    short v69 = v1;
    v1 *= 2;
    short v70 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v69) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v71 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v70) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v71) + v15 + v15);
    unsigned short v72 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v73 = v11;
    v11 -= (unsigned short)(v72 < 0x4000) + v26;
    unsigned short v74 = v15;
    v15 -= (unsigned short)(v26 > v73);
    char v75 = v74 < 0;
    if(v75) {
        unsigned short v76 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v77 = v11;
        v11 = (unsigned short)((unsigned short)(v76 >= 0xc000) + v11 + v26);
        unsigned short v78 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v77) + v15);
        v75 = v78 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v75 + v26 + v26);
    short v79 = v1;
    v1 *= 2;
    short v80 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v79) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v81 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v80) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v81) + v15 + v15);
    short v82 = v1;
    v1 *= 2;
    short v83 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v82) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v84 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v83) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v84) + v15 + v15);
    unsigned short v85 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v86 = v11;
    v11 -= (unsigned short)(v85 < 0x4000) + v26;
    unsigned short v87 = v15;
    v15 -= (unsigned short)(v26 > v86);
    char v88 = v87 < 0;
    if(v88) {
        unsigned short v89 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v90 = v11;
        v11 = (unsigned short)((unsigned short)(v89 >= 0xc000) + v11 + v26);
        unsigned short v91 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v90) + v15);
        v88 = v91 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v88 + v26 + v26);
    short v92 = v1;
    v1 *= 2;
    short v93 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v92) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v94 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v93) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v94) + v15 + v15);
    short v95 = v1;
    v1 *= 2;
    short v96 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v95) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v97 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v96) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v97) + v15 + v15);
    unsigned short v98 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v99 = v11;
    v11 -= (unsigned short)(v98 < 0x4000) + v26;
    unsigned short v100 = v15;
    v15 -= (unsigned short)(v26 > v99);
    char v101 = v100 < 0;
    if(v101) {
        unsigned short v102 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v103 = v11;
        v11 = (unsigned short)((unsigned short)(v102 >= 0xc000) + v11 + v26);
        unsigned short v104 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v103) + v15);
        v101 = v104 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v101 + v26 + v26);
    short v105 = v1;
    v1 *= 2;
    short v106 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v105) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v107 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v106) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v107) + v15 + v15);
    short v108 = v1;
    v1 *= 2;
    short v109 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v108) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v110 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v109) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v110) + v15 + v15);
    unsigned short v111 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v112 = v11;
    v11 -= (unsigned short)(v111 < 0x4000) + v26;
    unsigned short v113 = v15;
    v15 -= (unsigned short)(v26 > v112);
    char v114 = v113 < 0;
    if(v114) {
        unsigned short v115 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v116 = v11;
        v11 = (unsigned short)((unsigned short)(v115 >= 0xc000) + v11 + v26);
        unsigned short v117 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v116) + v15);
        v114 = v117 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v114 + v26 + v26);
    short v118 = v1;
    v1 *= 2;
    short v119 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v118) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v120 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v119) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v120) + v15 + v15);
    short v121 = v1;
    v1 *= 2;
    short v122 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v121) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v123 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v122) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v123) + v15 + v15);
    unsigned short v124 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v125 = v11;
    v11 -= (unsigned short)(v124 < 0x4000) + v26;
    unsigned short v126 = v15;
    v15 -= (unsigned short)(v26 > v125);
    char v127 = v126 < 0;
    if(v127) {
        unsigned short v128 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v129 = v11;
        v11 = (unsigned short)((unsigned short)(v128 >= 0xc000) + v11 + v26);
        unsigned short v130 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v129) + v15);
        v127 = v130 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v127 + v26 + v26);
    short v131 = v1;
    v1 *= 2;
    short v132 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v131) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v133 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v132) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v133) + v15 + v15);
    short v134 = v1;
    v1 *= 2;
    short v135 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v134) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v136 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v135) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v136) + v15 + v15);
    unsigned short v137 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v138 = v11;
    v11 -= (unsigned short)(v137 < 0x4000) + v26;
    unsigned short v139 = v15;
    v15 -= (unsigned short)(v26 > v138);
    char v140 = v139 < 0;
    if(v140) {
        unsigned short v141 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v142 = v11;
        v11 = (unsigned short)((unsigned short)(v141 >= 0xc000) + v11 + v26);
        unsigned short v143 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v142) + v15);
        v140 = v143 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v140 + v26 + v26);
    short v144 = v1;
    v1 *= 2;
    short v145 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v144) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v146 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v145) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v146) + v15 + v15);
    short v147 = v1;
    v1 *= 2;
    short v148 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v147) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v149 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v148) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v149) + v15 + v15);
    unsigned short v150 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v151 = v11;
    v11 -= (unsigned short)(v150 < 0x4000) + v26;
    unsigned short v152 = v15;
    v15 -= (unsigned short)(v26 > v151);
    char v153 = v152 < 0;
    if(v153) {
        unsigned short v154 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v155 = v11;
        v11 = (unsigned short)((unsigned short)(v154 >= 0xc000) + v11 + v26);
        unsigned short v156 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v155) + v15);
        v153 = v156 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v153 + v26 + v26);
    short v157 = v1;
    v1 *= 2;
    short v158 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v157) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v159 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v158) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v159) + v15 + v15);
    short v160 = v1;
    v1 *= 2;
    short v161 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v160) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v162 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v161) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v162) + v15 + v15);
    unsigned short v163 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v164 = v11;
    v11 -= (unsigned short)(v163 < 0x4000) + v26;
    unsigned short v165 = v15;
    v15 -= (unsigned short)(v26 > v164);
    char v166 = v165 < 0;
    if(v166) {
        unsigned short v167 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v168 = v11;
        v11 = (unsigned short)((unsigned short)(v167 >= 0xc000) + v11 + v26);
        unsigned short v169 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v168) + v15);
        v166 = v169 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v166 + v26 + v26);
    short v170 = v1;
    v1 *= 2;
    short v171 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v170) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v172 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v171) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v172) + v15 + v15);
    short v173 = v1;
    v1 *= 2;
    short v174 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v173) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v175 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v174) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v175) + v15 + v15);
    unsigned short v176 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v177 = v11;
    v11 -= (unsigned short)(v176 < 0x4000) + v26;
    unsigned short v178 = v15;
    v15 -= (unsigned short)(v26 > v177);
    char v179 = v178 < 0;
    if(v179) {
        unsigned short v180 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v181 = v11;
        v11 = (unsigned short)((unsigned short)(v180 >= 0xc000) + v11 + v26);
        unsigned short v182 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v181) + v15);
        v179 = v182 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v179 + v26 + v26);
    short v183 = v1;
    v1 *= 2;
    short v184 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v183) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v185 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v184) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v185) + v15 + v15);
    short v186 = v1;
    v1 *= 2;
    short v187 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)__carry__(v1, v186) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v188 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)v10, v187) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v188) + v15 + v15);
    unsigned short v189 = (unsigned short)v10;
    v10 = (unsigned int)((unsigned short)v10 - 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    unsigned short v190 = v11;
    v11 -= (unsigned short)(v189 < 0x4000) + v26;
    unsigned short v191 = v15;
    v15 -= (unsigned short)(v26 > v190);
    char v192 = v191 < 0;
    if(v192) {
        unsigned short v193 = (unsigned short)v10;
        v10 = (unsigned int)((unsigned short)v10 + 0x4000) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        unsigned short v194 = v11;
        v11 = (unsigned short)((unsigned short)(v193 >= 0xc000) + v11 + v26);
        unsigned short v195 = v15;
        v15 = (unsigned short)((unsigned short)__carry__(v26, v194) + v15);
        v192 = v195 >= 0;
    }
    v26 = (unsigned short)((unsigned short)~v192 + v26 + v26);
    short v196 = v1;
    v1 *= 2;
    unsigned short v197 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)__carry__(v1, v196) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)), (unsigned short)v10) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v197) + v15 + v15);
    unsigned short v198 = v11;
    v11 = (unsigned short)((unsigned short)__carry__((unsigned short)__carry__(v1 * 2, v1) + (unsigned short)((unsigned int)((unsigned short)__carry__(v1, v196) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) + (unsigned short)((unsigned int)((unsigned short)__carry__(v1, v196) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)), (unsigned short)((unsigned int)((unsigned short)__carry__(v1, v196) + (unsigned short)v10 + (unsigned short)v10) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16))) + v11 + v11);
    v15 = (unsigned short)((unsigned short)__carry__(v11, v198) + v15 + v15);
    unsigned short v199 = v15;
    v15 -= (unsigned short)(v11 < v26);
    char v200 = v199 < 0;
    if(v200) {
        v200 = v15 >= 0;
    }
    return (unsigned int)(unsigned short)((unsigned short)~v200 + v26 + v26);
}

int integer_sqrt_in_c(int param0) {
    int v0;
    int v1 = 0;
    int v2 = 0;
    unsigned int v3 = 0;
    unsigned short v4 = 0;
    unsigned short v5 = 0;
    int v6 = param0;
    int v7 = param0 >>> 16;
    while(1) {
        int v8 = ((unsigned int)((unsigned short)v7 > 0x3fff ? 0: 1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) + v2;
        unsigned short v9 = (unsigned short)v8 <= v5 ? 0: 1;
        int v10 = (unsigned int)(v4 - v9);
        unsigned short v11 = v5 - (unsigned short)v8;
        v5 = (unsigned short)v10;
        if(v9 > v4) {
            unsigned short v12 = v11;
            v11 = (unsigned short)((unsigned short)v8 + v11);
            int v13 = (unsigned int)(__carry__((unsigned short)v8, v12) ? 1: 0) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
            unsigned short v14 = v5;
            v5 = (unsigned short)((unsigned short)v13 + v5);
            char v15 = __carry__((unsigned short)v13, v14);
            v10 = (unsigned int)(v15 ? 1: 0) | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
            v0 = (unsigned int)(v15 ? 1: 0) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
        }
        else {
            v7 = (unsigned int)((unsigned short)v7 - 0x4000) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
            v0 = 0;
        }
        v2 = v2 * 2 + 1;
        ++v3;
        v2 = (unsigned int)((unsigned short)v2 - (unsigned short)v0) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        if(v3 == 16) {
            break;
        }
        else {
            int v16 = v6 * 2;
            int v17 = ((unsigned int)((unsigned short)v6 <= (unsigned short)v16 ? 0: 1) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16)) + v7;
            short v18 = (unsigned short)v7;
            v7 = (unsigned int)((unsigned short)v7 + (unsigned short)v17) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
            v4 = (unsigned short)v7;
            int v19 = (unsigned int)(__carry__((unsigned short)v17, v18) ? v11 + 1: v11) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
            v6 *= 4;
            int v20 = (unsigned int)v11 + v19;
            int v21 = (unsigned int)((unsigned short)v6 < (unsigned short)v16 ? v4 + 1: v4) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
            v7 = (unsigned int)(((unsigned short)v6 < (unsigned short)v16 ? v4 + 1: v4) + v4);
            v1 = (unsigned int)((unsigned short)v20 + (__carry__((unsigned short)v21, v4) ? (unsigned short)v20 + 1: (unsigned short)v20));
            char v22 = __carry__((unsigned short)v20, __carry__((unsigned short)v21, v4) ? (unsigned short)v20 + 1: (unsigned short)v20);
            int v23 = (unsigned int)v5 * 2 + ((unsigned int)((unsigned short)v20 >= (unsigned short)v19 ? 0: 1) | ((unsigned int)(unsigned short)(v20 >>> 16) << 16));
            v5 = (unsigned short)v1;
            v1 = (unsigned int)(v22 ? 1: 0) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            v4 = (unsigned short)((unsigned short)v23 * 2 + (unsigned short)((unsigned int)(v22 ? 1: 0) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)));
        }
    }
    return (unsigned int)(unsigned short)v2;
}

int integer_sqrt_in_c_cleaned_up(unsigned int param0) {
    unsigned int v0 = 0;
    int v1 = 0;
    unsigned int v2 = 0;
    unsigned int v3 = param0;
    while(1) {
        unsigned int v4 = (unsigned int)(unsigned short)v1;
        v1 *= 2;
        char v5 = v0 > v4;
        if((v5 || v0 == v4) && (v5 || (v3 & 0xffff0000) >= 0x40000000)) {
            ++v1;
            unsigned int v6 = v3;
            v3 -= 0x40000000;
            v0 -= (unsigned int)(v6 < 0x40000000) + v4;
        }
        ++v2;
        if(v2 == 16) {
            return (unsigned int)(unsigned short)v1;
        }
        v0 = (unsigned int)((unsigned long long)(unsigned int)((v3 >>> 30) & 3) | ((unsigned long long)v0 << 2) | ((unsigned long long)0 << 34));
        v3 *= 4;
    }
}

int main(int param0, int param1) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    int* ptr0;
    void* ptr1;
    short v3;
    char v4;
    __SyntheticTypeUnknownF v5;
    char v6;
    int v7;
    int* ptr2 = &ptr0;
    char v8 = &v0 == 16;
    char v9 = (int)&v4 < 0;
    char v10 = __parity__((unsigned char)&v0 - 16);
    char v11 = 0;
    char v12 = 0;
    unsigned int v13 = v2;
    int* ptr3 = &v13;
    char v14 = &v0 == 128;
    char v15 = (int)&v1 < 0;
    char v16 = __parity__((unsigned char)&v0 - 128);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x64) ^ (int)&v1) >>> 4) & 0x1);
    char v18 = (unsigned int)&v13 < 100;
    char v19 = (int)(int*)((int)(int*)((int)&v13 ^ (int)&v1) & (int)(int*)((int)&v13 ^ 0x64)) < 0;
    unsigned int v20 = 1000;
    int v21 = 0;
    int v22 = v7;
    do {
        int v23 = v21;
        int v24 = v21;
        int v25 = integer_sqrt_in_asm((unsigned short)param0, param1);
        int v26 = v25;
        int v27 = integer_sqrt_in_c(v23);
        unsigned int v28 = 0;
        int v29 = 0;
        char v30 = 1;
        char v31 = 0;
        char v32 = 1;
        char v33 = 0;
        char v34 = 0;
        int v35 = v27;
        int v36 = v23;
        int v37 = 0;
        char v38 = 1;
        char v39 = 0;
        char v40 = 1;
        char v41 = 0;
        char v42 = 0;
        unsigned int v43 = 0;
        while(1) {
            int v44 = (unsigned int)(unsigned short)v29;
            int v45 = (unsigned int)(unsigned short)v29;
            unsigned int v46 = (unsigned int)(unsigned short)v29;
            unsigned int v47 = 0;
            unsigned int v48 = 0;
            unsigned int v49 = 0;
            unsigned int v50 = 0x40000000;
            char v51 = 0;
            char v52 = 0;
            char v53 = 1;
            char v54 = 0;
            char v55 = 0;
            char v56 = 0;
            unsigned int v57 = v46;
            unsigned int v58 = (unsigned int)(v36 & 0xffff0000);
            v29 *= 2;
            char v59 = v28 == v57;
            char v60 = (int)v28 > (int)v57;
            char v61 = __parity__((unsigned char)v57 - (unsigned char)v28);
            char v62 = v28 > v57;
            char v63 = (int)(((v57 - v28) ^ v57) & (v28 ^ v57)) < 0;
            char v64 = (((v57 - v28) ^ (v28 ^ v57)) >>> 4) & 0x1;
            unsigned int v65 = v58;
            if((v62 || v59) && !v62) {
                char v66 = v65 == 0x40000000;
                char v67 = (int)v65 > 0x40000000;
                char v68 = __parity__(0 - (unsigned char)v65);
                char v69 = v65 > 0x40000000;
                char v70 = (int)(((0x40000000 - v65) ^ 0x40000000) & (v65 ^ 0x40000000)) < 0;
                char v71 = (((0x40000000 - v65) ^ (v65 ^ 0x40000000)) >>> 4) & 0x1;
                if((v69 || v66)) {
                    goto loc_8048A1E;
                }
            }
            else if((v62 || v59)) {
            loc_8048A1E:
                ++v29;
                int v72 = v36;
                v36 -= 0x40000000;
                char v73 = v36 ? 0: 1;
                char v74 = v36 < 0;
                char v75 = __parity__((unsigned char)v36);
                char v76 = (((v72 ^ 0x40000000) ^ v36) >>> 4) & 0x1;
                char v77 = (unsigned int)v72 < 0x40000000;
                char v78 = ((v36 ^ v72) & (v72 ^ 0x40000000)) < 0;
                v49 = v28;
                v28 -= (unsigned int)v77 + v57;
                char v79 = v28 ? 0: 1;
                char v80 = v28 >= 0x80000000;
                char v81 = __parity__((unsigned char)v28);
                char v82 = (((v57 ^ v49) ^ v28) >>> 4) & 0x1;
                char v83 = v57 > v49;
                char v84 = (int)((v28 ^ v49) & (v57 ^ v49)) < 0;
            }
            ++v43;
            char v85 = v43 == 16;
            char v86 = (int)v43 < 16;
            char v87 = __parity__((unsigned char)v43 - 16);
            char v88 = v43 < 16;
            char v89 = (((v43 - 16) ^ v43) & (v43 ^ 0x10)) < 0;
            char v90 = (((v43 - 16) ^ (v43 ^ 0x10)) >>> 4) & 0x1;
            if(!v85) {
                unsigned int v91 = v28;
                long long v92 = (unsigned long long)v36 | ((unsigned long long)v28 << 32);
                long long v93 = v92 * 4L;
                v28 = (unsigned int)(v93 >>> 32L);
                char v94 = (v91 >>> 30) & 0x1;
                char v95 = v89;
                char v96 = v28 ? 0: 1;
                char v97 = v28 >= 0x80000000;
                char v98 = __parity__((unsigned char)v28);
                int v99 = v36;
                v36 *= 4;
                char v100 = (v99 >>> 30) & 0x1;
                char v101 = v95;
                char v102 = v36 ? 0: 1;
                char v103 = v36 < 0;
                char v104 = __parity__((unsigned char)v36);
            }
            else {
                int v105 = v21;
                int v106 = 0;
                char v107 = 1;
                char v108 = 0;
                char v109 = 1;
                char v110 = 0;
                char v111 = 0;
                unsigned int v112 = (unsigned int)(unsigned short)v29;
                int v113 = 0;
                short v3 = fnstcw();
                unsigned int v114 = v112;
                int v115 = v105;
                char v116 = 6;
                __SyntheticTypeUnknownF v117 = (double)*(long long*)&v115;
                v141[v142] = fsqrt(v117);
                int v118 = (unsigned int)v3;
                int v119 = (unsigned int)(unsigned char)v118 | ((unsigned int)12 << 8) | ((unsigned int)(unsigned short)(v118 >>> 16) << 16);
                short v120 = (unsigned short)v119;
                int v121 = v35;
                int v122 = v35;
                int v123 = v26;
                int v124 = v26;
                int v125 = v21;
                int v126 = v21;
                fldcw(v120);
                int v127 = (int)v5;
                char v128 = 7;
                fldcw(v3);
                int v129 = v127;
                →printf("f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n");
                char v130 = v129 == v26;
                char v131 = v129 < v26;
                char v132 = __parity__((unsigned char)v129 - (unsigned char)v26);
                char v133 = (unsigned int)v129 < (unsigned int)v26;
                char v134 = (((v129 - v26) ^ v129) & (v129 ^ v26)) < 0;
                char v135 = (((v129 - v26) ^ (v129 ^ v26)) >>> 4) & 0x1;
                if(!v130) {
                    /*NO_RETURN*/ →__assert_fail("check == y", "source/main.c", 79, (char*)&__PRETTY_FUNCTION__.2969);
                    /*NO_RETURN*/ →__assert_fail("check == c1", "source/main.c", 80, (char*)&__PRETTY_FUNCTION__.2969);
                    int* ptr4 = &ptr1;
                    /*NO_RETURN*/ →__assert_fail("check == c2", "source/main.c", 81, (char*)&__PRETTY_FUNCTION__.2969);
                }
                v129 = v26;
                v130 = v129 == v35;
                v131 = v129 > v35;
                v132 = __parity__((unsigned char)v35 - (unsigned char)v129);
                v133 = (unsigned int)v129 > (unsigned int)v35;
                v134 = (((v35 - v129) ^ v35) & (v129 ^ v35)) < 0;
                v135 = (((v35 - v129) ^ (v129 ^ v35)) >>> 4) & 0x1;
                if(!v130) {
                    /*NO_RETURN*/ →__assert_fail("check == c1", "source/main.c", 80, (char*)&__PRETTY_FUNCTION__.2969);
                    int* ptr4 = &ptr1;
                    /*NO_RETURN*/ →__assert_fail("check == c2", "source/main.c", 81, (char*)&__PRETTY_FUNCTION__.2969);
                }
                v130 = v112 == v35;
                v131 = (int)v112 > v35;
                v132 = __parity__((unsigned char)v35 - (unsigned char)v112);
                v133 = v112 > (unsigned int)v35;
                v134 = (((v35 - v112) ^ v35) & (v112 ^ v35)) < 0;
                v135 = (((v35 - v112) ^ (v112 ^ v35)) >>> 4) & 0x1;
                if(!v130) {
                    int* ptr4 = &ptr1;
                    /*NO_RETURN*/ →__assert_fail("check == c2", "source/main.c", 81, (char*)&__PRETTY_FUNCTION__.2969);
                }
                ++v21;
                unsigned int v136 = v20;
                --v20;
                v6 = v20 ? 0: 1;
                char v137 = v20 >= 0x80000000;
                char v138 = __parity__((unsigned char)v20);
                char v139 = v136 < 1;
                char v140 = (int)((v136 ^ v20) & (v136 ^ 0x1)) < 0;
            }
        }
    }
    while(!v6);
    return 0;
}

int sub_8048322() {
    return gvar_8049DFC();
}
