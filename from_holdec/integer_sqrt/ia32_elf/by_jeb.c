
void __i686.get_pc_thunk.bx() {
}

int integer_sqrt_in_asm(unsigned short param0, int param1) {
    int v0;
    int v1 = (unsigned int)((unsigned short)(v0 >>> 16) - 0x4000) | ((unsigned int)(unsigned short)((v0 >>> 16) >>> 16) << 16);
    unsigned short v2 = (unsigned short)(v0 >>> 16) < 0x4000 ? 0xffff: 0;
    short v3 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v4 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v3) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v5 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v4) + v2 + v2);
    unsigned short v6 = (unsigned short)__carry__(v2, v5);
    short v7 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v8 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v7) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v9 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v8) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v9) + v6 + v6);
    unsigned short v10 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v11 = v2;
    v2 -= (unsigned short)(v10 < 0x4000) + 1;
    unsigned short v12 = v6;
    v6 -= (unsigned short)(v11 < 1);
    char v13 = v12 < 0;
    if(v13) {
        unsigned short v14 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v15 = v2;
        v2 = (unsigned short)((unsigned short)(v14 >= 0xc000) + v2 + 1);
        unsigned short v16 = v6;
        v6 = (unsigned short)((unsigned short)(v15 >= 0xffff) + v6);
        v13 = v16 >= 0;
    }
    short v17 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v18 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v17) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v19 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v18) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v19) + v6 + v6);
    short v20 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v21 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v20) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v22 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v21) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v22) + v6 + v6);
    unsigned short v23 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v24 = v2;
    v2 -= (unsigned short)~v13 + (unsigned short)(v23 < 0x4000) + 2;
    unsigned short v25 = v6;
    v6 -= (unsigned short)((unsigned short)((unsigned short)~v13 + 2) > v24);
    char v26 = v25 < 0;
    if(v26) {
        unsigned short v27 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v28 = v2;
        v2 = (unsigned short)((unsigned short)~v13 + (unsigned short)(v27 >= 0xc000) + (v2 + 2));
        unsigned short v29 = v6;
        v6 = (unsigned short)((unsigned short)__carry__((unsigned short)((unsigned short)~v13 + 2), v28) + v6);
        v26 = v29 >= 0;
    }
    unsigned short v30 = (unsigned short)((unsigned short)~v13 * 2 + (unsigned short)~v26 + 4);
    short v31 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v32 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v31) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v33 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v32) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v33) + v6 + v6);
    short v34 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v35 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v34) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v36 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v35) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v36) + v6 + v6);
    unsigned short v37 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v38 = v2;
    v2 -= (unsigned short)(v37 < 0x4000) + v30;
    unsigned short v39 = v6;
    v6 -= (unsigned short)(v30 > v38);
    char v40 = v39 < 0;
    if(v40) {
        unsigned short v41 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v42 = v2;
        v2 = (unsigned short)((unsigned short)(v41 >= 0xc000) + v2 + v30);
        unsigned short v43 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v42) + v6);
        v40 = v43 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v40 + v30 + v30);
    short v44 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v45 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v44) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v46 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v45) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v46) + v6 + v6);
    short v47 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v48 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v47) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v49 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v48) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v49) + v6 + v6);
    unsigned short v50 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v51 = v2;
    v2 -= (unsigned short)(v50 < 0x4000) + v30;
    unsigned short v52 = v6;
    v6 -= (unsigned short)(v30 > v51);
    char v53 = v52 < 0;
    if(v53) {
        unsigned short v54 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v55 = v2;
        v2 = (unsigned short)((unsigned short)(v54 >= 0xc000) + v2 + v30);
        unsigned short v56 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v55) + v6);
        v53 = v56 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v53 + v30 + v30);
    short v57 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v58 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v57) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v59 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v58) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v59) + v6 + v6);
    short v60 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v61 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v60) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v62 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v61) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v62) + v6 + v6);
    unsigned short v63 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v64 = v2;
    v2 -= (unsigned short)(v63 < 0x4000) + v30;
    unsigned short v65 = v6;
    v6 -= (unsigned short)(v30 > v64);
    char v66 = v65 < 0;
    if(v66) {
        unsigned short v67 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v68 = v2;
        v2 = (unsigned short)((unsigned short)(v67 >= 0xc000) + v2 + v30);
        unsigned short v69 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v68) + v6);
        v66 = v69 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v66 + v30 + v30);
    short v70 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v71 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v70) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v72 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v71) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v72) + v6 + v6);
    short v73 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v74 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v73) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v75 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v74) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v75) + v6 + v6);
    unsigned short v76 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v77 = v2;
    v2 -= (unsigned short)(v76 < 0x4000) + v30;
    unsigned short v78 = v6;
    v6 -= (unsigned short)(v30 > v77);
    char v79 = v78 < 0;
    if(v79) {
        unsigned short v80 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v81 = v2;
        v2 = (unsigned short)((unsigned short)(v80 >= 0xc000) + v2 + v30);
        unsigned short v82 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v81) + v6);
        v79 = v82 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v79 + v30 + v30);
    short v83 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v84 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v83) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v85 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v84) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v85) + v6 + v6);
    short v86 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v87 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v86) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v88 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v87) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v88) + v6 + v6);
    unsigned short v89 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v90 = v2;
    v2 -= (unsigned short)(v89 < 0x4000) + v30;
    unsigned short v91 = v6;
    v6 -= (unsigned short)(v30 > v90);
    char v92 = v91 < 0;
    if(v92) {
        unsigned short v93 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v94 = v2;
        v2 = (unsigned short)((unsigned short)(v93 >= 0xc000) + v2 + v30);
        unsigned short v95 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v94) + v6);
        v92 = v95 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v92 + v30 + v30);
    short v96 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v97 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v96) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v98 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v97) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v98) + v6 + v6);
    short v99 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v100 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v99) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v101 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v100) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v101) + v6 + v6);
    unsigned short v102 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v103 = v2;
    v2 -= (unsigned short)(v102 < 0x4000) + v30;
    unsigned short v104 = v6;
    v6 -= (unsigned short)(v30 > v103);
    char v105 = v104 < 0;
    if(v105) {
        unsigned short v106 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v107 = v2;
        v2 = (unsigned short)((unsigned short)(v106 >= 0xc000) + v2 + v30);
        unsigned short v108 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v107) + v6);
        v105 = v108 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v105 + v30 + v30);
    short v109 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v110 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v109) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v111 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v110) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v111) + v6 + v6);
    short v112 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v113 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v112) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v114 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v113) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v114) + v6 + v6);
    unsigned short v115 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v116 = v2;
    v2 -= (unsigned short)(v115 < 0x4000) + v30;
    unsigned short v117 = v6;
    v6 -= (unsigned short)(v30 > v116);
    char v118 = v117 < 0;
    if(v118) {
        unsigned short v119 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v120 = v2;
        v2 = (unsigned short)((unsigned short)(v119 >= 0xc000) + v2 + v30);
        unsigned short v121 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v120) + v6);
        v118 = v121 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v118 + v30 + v30);
    short v122 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v123 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v122) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v124 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v123) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v124) + v6 + v6);
    short v125 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v126 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v125) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v127 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v126) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v127) + v6 + v6);
    unsigned short v128 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v129 = v2;
    v2 -= (unsigned short)(v128 < 0x4000) + v30;
    unsigned short v130 = v6;
    v6 -= (unsigned short)(v30 > v129);
    char v131 = v130 < 0;
    if(v131) {
        unsigned short v132 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v133 = v2;
        v2 = (unsigned short)((unsigned short)(v132 >= 0xc000) + v2 + v30);
        unsigned short v134 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v133) + v6);
        v131 = v134 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v131 + v30 + v30);
    short v135 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v136 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v135) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v137 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v136) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v137) + v6 + v6);
    short v138 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v139 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v138) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v140 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v139) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v140) + v6 + v6);
    unsigned short v141 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v142 = v2;
    v2 -= (unsigned short)(v141 < 0x4000) + v30;
    unsigned short v143 = v6;
    v6 -= (unsigned short)(v30 > v142);
    char v144 = v143 < 0;
    if(v144) {
        unsigned short v145 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v146 = v2;
        v2 = (unsigned short)((unsigned short)(v145 >= 0xc000) + v2 + v30);
        unsigned short v147 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v146) + v6);
        v144 = v147 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v144 + v30 + v30);
    short v148 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v149 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v148) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v150 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v149) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v150) + v6 + v6);
    short v151 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v152 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v151) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v153 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v152) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v153) + v6 + v6);
    unsigned short v154 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v155 = v2;
    v2 -= (unsigned short)(v154 < 0x4000) + v30;
    unsigned short v156 = v6;
    v6 -= (unsigned short)(v30 > v155);
    char v157 = v156 < 0;
    if(v157) {
        unsigned short v158 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v159 = v2;
        v2 = (unsigned short)((unsigned short)(v158 >= 0xc000) + v2 + v30);
        unsigned short v160 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v159) + v6);
        v157 = v160 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v157 + v30 + v30);
    short v161 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v162 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v161) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v163 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v162) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v163) + v6 + v6);
    short v164 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v165 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v164) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v166 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v165) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v166) + v6 + v6);
    unsigned short v167 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v168 = v2;
    v2 -= (unsigned short)(v167 < 0x4000) + v30;
    unsigned short v169 = v6;
    v6 -= (unsigned short)(v30 > v168);
    char v170 = v169 < 0;
    if(v170) {
        unsigned short v171 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v172 = v2;
        v2 = (unsigned short)((unsigned short)(v171 >= 0xc000) + v2 + v30);
        unsigned short v173 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v172) + v6);
        v170 = v173 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v170 + v30 + v30);
    short v174 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v175 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v174) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v176 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v175) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v176) + v6 + v6);
    short v177 = (unsigned short)v0;
    v0 = (unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    short v178 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)__carry__((unsigned short)v0, v177) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v179 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)v1, v178) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v179) + v6 + v6);
    unsigned short v180 = (unsigned short)v1;
    v1 = (unsigned int)((unsigned short)v1 - 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
    unsigned short v181 = v2;
    v2 -= (unsigned short)(v180 < 0x4000) + v30;
    unsigned short v182 = v6;
    v6 -= (unsigned short)(v30 > v181);
    char v183 = v182 < 0;
    if(v183) {
        unsigned short v184 = (unsigned short)v1;
        v1 = (unsigned int)((unsigned short)v1 + 0x4000) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        unsigned short v185 = v2;
        v2 = (unsigned short)((unsigned short)(v184 >= 0xc000) + v2 + v30);
        unsigned short v186 = v6;
        v6 = (unsigned short)((unsigned short)__carry__(v30, v185) + v6);
        v183 = v186 >= 0;
    }
    v30 = (unsigned short)((unsigned short)~v183 + v30 + v30);
    unsigned short v187 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)), (unsigned short)v0) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)), (unsigned short)v1) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v187) + v6 + v6);
    unsigned short v188 = v2;
    v2 = (unsigned short)((unsigned short)__carry__((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) * 2, (unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16))) + (unsigned short)((unsigned int)((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)), (unsigned short)v0) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) + (unsigned short)((unsigned int)((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)), (unsigned short)v0) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)), (unsigned short)((unsigned int)((unsigned short)__carry__((unsigned short)((unsigned int)((unsigned short)v0 * 2) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)), (unsigned short)v0) + (unsigned short)v1 + (unsigned short)v1) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16))) + v2 + v2);
    v6 = (unsigned short)((unsigned short)__carry__(v2, v188) + v6 + v6);
    unsigned short v189 = v6;
    v6 -= (unsigned short)(v2 < v30);
    char v190 = v189 < 0;
    if(v190) {
        v190 = v6 >= 0;
    }
    return (unsigned int)((unsigned short)~v190 + v30 + v30);
}

int integer_sqrt_in_c(int param0) {
    int v0;
    int v1 = 0;
    int v2 = 0;
    int v3 = param0;
    int v4 = 0;
    unsigned short v5 = 0;
    unsigned short v6 = 0;
    int v7 = param0;
    int v8 = param0 >>> 16;
    while(1) {
        int v9 = ((unsigned int)((unsigned short)v8 <= 0x3fff ? 1: 0) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) + v2;
        unsigned short v10 = (unsigned short)v9 > v6 ? 1: 0;
        v29 = (unsigned int)((unsigned short)(unsigned int)v5 - v10) | ((unsigned int)(unsigned short)((unsigned int)v5 >>> 16) << 16);
        unsigned short v11 = v6 - (unsigned short)v9;
        char v12 = v10 == v5;
        char v13 = v10 < v5;
        v6 = (unsigned short)v29;
        if(!v13 && !v12) {
            unsigned short v14 = v11;
            v11 = (unsigned short)((unsigned short)v9 + v11);
            int v15 = (unsigned int)(__carry__((unsigned short)v9, v14) ? 1: 0) | ((unsigned int)(unsigned short)(v29 >>> 16) << 16);
            unsigned short v16 = v6;
            v6 = (unsigned short)((unsigned short)v15 + v6);
            v29 = (unsigned int)(__carry__((unsigned short)v15, v16) ? 1: 0) | ((unsigned int)((v29 >>> 8) & 0xffffff) << 8);
            v0 = v29 & 0xffff00ff;
        }
        else {
            v8 = (unsigned int)((unsigned short)v8 - 0x4000) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
            v0 = 0;
        }
        v2 = v2 * 2 + 1;
        ++v4;
        v2 = (unsigned int)((unsigned short)v2 - (unsigned short)v0) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        if(v4 == 16) {
            break;
        }
        else {
            int v17 = v7 * 2;
            int v18 = (unsigned int)v11;
            int v19 = ((unsigned int)((unsigned short)v7 <= (unsigned short)v17 ? 0: 1) | ((unsigned int)(unsigned short)(v29 >>> 16) << 16)) + v8;
            short v20 = (unsigned short)v8;
            v8 = (unsigned int)((unsigned short)v8 + (unsigned short)v19) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
            v5 = (unsigned short)v8;
            int v21 = (unsigned int)((__carry__((unsigned short)v19, v20) ? 1: 0) + v11) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
            v7 *= 4;
            int v22 = (unsigned int)v11 + v21;
            int v23 = (unsigned int)((unsigned short)v7 >= (unsigned short)v17 ? 0: 1) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
            v23 = (unsigned int)((unsigned short)(unsigned char)v23 + v5) | ((unsigned int)(unsigned short)(v23 >>> 16) << 16);
            v11 = (unsigned short)v22;
            short v24 = (unsigned short)(unsigned int)v5;
            v8 = (unsigned int)((unsigned short)(unsigned int)v5 + (unsigned short)v23) | ((unsigned int)(unsigned short)((unsigned int)v5 >>> 16) << 16);
            char v25 = (unsigned short)v21 > (unsigned short)v22;
            int v26 = (unsigned int)v6;
            v5 = (unsigned short)((__carry__((unsigned short)v23, (unsigned short)(unsigned int)v5) ? 1: 0) + (unsigned short)v22);
            short v27 = (unsigned short)(unsigned int)(unsigned short)v22;
            v1 = (unsigned int)((unsigned short)(unsigned int)(unsigned short)v22 + v5) | ((unsigned int)(unsigned short)((unsigned int)(unsigned short)v22 >>> 16) << 16);
            char v28 = __carry__((unsigned short)(unsigned int)(unsigned short)v22, v5);
            v6 = (unsigned short)v1;
            v1 = (unsigned int)(v28 ? 1: 0) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            v5 = (unsigned short)(((unsigned short)v26 * 2 + (unsigned short)((unsigned int)(v25 ? 1: 0) | ((unsigned int)(unsigned short)(v22 >>> 16) << 16))) * 2 + (unsigned short)(v1 & 0xffff00ff));
        }
    }
    return (unsigned int)(unsigned short)v2;
}

int integer_sqrt_in_c_cleaned_up(unsigned int param0) {
    unsigned int v0 = 0;
    int v1 = 0;
    int v2 = 0;
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
    int v0;
    long long v1;
    short v2;
    int v3 = 1000;
    int v4 = 0;
    do {
        int v5 = integer_sqrt_in_asm((unsigned short)param0, param1);
        int v6 = integer_sqrt_in_c(v4);
        unsigned int v7 = 0;
        int v8 = 0;
        int v9 = v4;
        int v10 = 0;
        while(1) {
            (v1 >>> 32L) & 0xFFFFFFFFL = (unsigned int)(unsigned short)v8;
            v1 & 0xFFFFFFFFL = 0;
            v8 *= 2;
            char v11 = (unsigned int)((v1 + 0x40000000L) >>> 32L) < v7;
            if((v11 || (unsigned int)((v1 + 0x40000000L) >>> 32L) == v7) && (v11 || (unsigned int)(v9 & 0xffff0000) >= (unsigned int)((unsigned int)v1 + (unsigned int)0x40000000L))) {
                ++v8;
                int v12 = v9;
                v9 -= (unsigned int)v1 + (unsigned int)0x40000000L;
                v7 -= (unsigned int)((unsigned int)((unsigned int)v1 + (unsigned int)0x40000000L) > (unsigned int)v12) + (unsigned int)((v1 + 0x40000000L) >>> 32L);
            }
            ++v10;
            if(v10 != 16) {
                v7 = (unsigned int)((unsigned long long)((v9 >>> 30) & 3) | ((unsigned long long)v7 << 2) | ((unsigned long long)0 << 34));
                v9 *= 4;
            }
            else {
                v2 = fnstcw(v2);
                fsqrt();
                short v13 = fldcw((unsigned short)(unsigned char)v2 | ((unsigned short)12 << 8));
                fistp();
                v2 = fldcw(v2);
                →printf("f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n", v4, v5, v6, (unsigned int)(unsigned short)v8, v0);
                if(v5 != v0) {
                    /*NO_RETURN*/ →__assert_fail("check == y", "source/main.c", 79, (char*)&__PRETTY_FUNCTION__.2969);
                    /*NO_RETURN*/ →__assert_fail("check == c1", "source/main.c", 80, (char*)&__PRETTY_FUNCTION__.2969);
                    /*NO_RETURN*/ →__assert_fail("check == c2", "source/main.c", 81, (char*)&__PRETTY_FUNCTION__.2969);
                }
                else if(v6 != v5) {
                    /*NO_RETURN*/ →__assert_fail("check == c1", "source/main.c", 80, (char*)&__PRETTY_FUNCTION__.2969);
                    /*NO_RETURN*/ →__assert_fail("check == c2", "source/main.c", 81, (char*)&__PRETTY_FUNCTION__.2969);
                }
                else if((unsigned int)(unsigned short)v8 != v6) {
                    /*NO_RETURN*/ →__assert_fail("check == c2", "source/main.c", 81, (char*)&__PRETTY_FUNCTION__.2969);
                }
                ++v4;
                --v3;
            }
        }
    }
    while(v3);
    return 0;
}

void sub_804831C() {
    jump gvar_8049DFC;
}
