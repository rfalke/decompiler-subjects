
int .b2_1() {
    return .b2_2();
}

int .b5_j() {
    →putchar();
    return 0;
}

int .i5_j() {
    →putchar();
    return 0;
}

int advanced_1_writes_can_be_omitted_for_non_mem_access_calls(int param0) {
    int v0;
    global_var = 1;
    →abs(param0);
    global_var = 2;
    return global_var + v0;
}

int advanced_2_mem_values_can_be_propagated_for_non_write_calls(int param0) {
    int v0;
    global_var = 1;
    →strlen(param0);
    return global_var + v0;
}

int advanced_3_value_range_analysis(unsigned int param0) {
    if((int)param0 > 10) {
        →putchar();
        →putchar();
        →putchar();
        if((int)param0 > 8) {
            →puts(&gvar_8048964);
        }
    }
    if(param0 == 42) {
        →putchar();
        →putchar();
        →putchar();
        →puts("= 42");
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int basic_1_reg_in_block(int param0) {
    →putchar(param0 + 48);
    return 0;
}

int basic_2_reg_in_prev_block(int param0) {
    return .b2_1();
}

int basic_3_reg_cond_overwrite(unsigned int param0) {
    →putchar();
    return 0;
}

int basic_4_reg_cond_change(unsigned int param0) {
    →putchar();
    return 0;
}

int basic_5_reg_different_values(int param0) {
    int v0 = param0;
    char v1 = v0 == 42;
    if(!v1) {
        return .b5_j();
    }
}

int basic_6_reg_overwrite_in_block(int param0) {
    →putchar();
    return 0;
}

int intermediate_10_subregs() {
    →putchar();
    return 0;
}

int intermediate_1_mem_in_block(int param0) {
    global_var = 48;
    →putchar();
    return 0;
}

int intermediate_2_mem_in_prev_block(int param0) {
    global_var = 48;
    →putchar();
    return 0;
}

int intermediate_3_mem_cond_overwrite(unsigned int param0) {
    global_var = 65;
    if(param0 != 42) {
        global_var = 97;
    }
    →putchar();
    return 0;
}

int intermediate_4_mem_cond_change(unsigned int param0) {
    global_var = 65;
    if(param0 != 42) {
        global_var += 32;
    }
    →putchar();
    return 0;
}

int intermediate_5_mem_different_values(int param0) {
    int v0 = param0;
    char v1 = v0 == 42;
    if(!v1) {
        global_var = 65;
        return .i5_j();
    }
    global_var = 97;
}

int intermediate_6_mem_overwrite_in_block(int param0) {
    global_var = 48;
    →putchar();
    return 0;
}

int main(int param0, int* param1) {
    int v0;
    int v1;
    char v2;
    int v3;
    int v4;
    int v5;
    int* ptr0 = &param0;
    char v6 = &v0 ? 0: 1;
    char v7 = (int)&v0 < 0;
    char v8 = __parity__((unsigned char)&v0);
    char v9 = 0;
    char v10 = 0;
    int v11 = v0;
    int* ptr1 = &v1;
    int v12 = v5;
    int* ptr2 = &param0;
    int* ptr3 = &ptr2;
    char v13 = &v0 == 44;
    char v14 = (int)&v2 < 0;
    char v15 = __parity__((unsigned char)&v0 - 44);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x14) ^ (int)&v2) >>> 4) & 0x1);
    char v17 = (unsigned int)&ptr2 < 20;
    char v18 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v2) & (int)(int*)((int)&ptr2 ^ 0x14)) < 0;
    int v19 = param0;
    int* ptr4 = param1;
    int v20 = basic_1_reg_in_block(v19);
    int v21 = v20;
    int v22 = basic_2_reg_in_prev_block(v19);
    int v23 = v21;
    int v24 = v22 + v21;
    char v25 = v24 ? 0: 1;
    char v26 = v24 < 0;
    char v27 = __parity__((unsigned char)v24);
    char v28 = (((v22 ^ v23) ^ v24) >>> 4) & 0x1;
    char v29 = __carry__(v22, v23);
    char v30 = ((v24 ^ v23) & ~(v22 ^ v23)) < 0;
    int v31 = basic_3_reg_cond_overwrite((unsigned int)v19);
    int v32 = v24;
    int v33 = v31 + v24;
    char v34 = v33 ? 0: 1;
    char v35 = v33 < 0;
    char v36 = __parity__((unsigned char)v33);
    char v37 = (((v31 ^ v32) ^ v33) >>> 4) & 0x1;
    char v38 = __carry__(v31, v32);
    char v39 = ((v33 ^ v32) & ~(v31 ^ v32)) < 0;
    int v40 = basic_4_reg_cond_change((unsigned int)v19);
    int v41 = v33;
    int v42 = v40 + v33;
    char v43 = v42 ? 0: 1;
    char v44 = v42 < 0;
    char v45 = __parity__((unsigned char)v42);
    char v46 = (((v40 ^ v41) ^ v42) >>> 4) & 0x1;
    char v47 = __carry__(v40, v41);
    char v48 = ((v42 ^ v41) & ~(v40 ^ v41)) < 0;
    int v49 = basic_5_reg_different_values(v19);
    int v50 = v42;
    int v51 = v49 + v42;
    char v52 = v51 ? 0: 1;
    char v53 = v51 < 0;
    char v54 = __parity__((unsigned char)v51);
    char v55 = (((v49 ^ v50) ^ v51) >>> 4) & 0x1;
    char v56 = __carry__(v49, v50);
    char v57 = ((v51 ^ v50) & ~(v49 ^ v50)) < 0;
    int v58 = basic_6_reg_overwrite_in_block(v19);
    int v59 = v51;
    int v60 = v58 + v51;
    char v61 = v60 ? 0: 1;
    char v62 = v60 < 0;
    char v63 = __parity__((unsigned char)v60);
    char v64 = (((v58 ^ v59) ^ v60) >>> 4) & 0x1;
    char v65 = __carry__(v58, v59);
    char v66 = ((v60 ^ v59) & ~(v58 ^ v59)) < 0;
    int v67 = intermediate_1_mem_in_block(v19);
    int v68 = v60;
    int v69 = v67 + v60;
    char v70 = v69 ? 0: 1;
    char v71 = v69 < 0;
    char v72 = __parity__((unsigned char)v69);
    char v73 = (((v67 ^ v68) ^ v69) >>> 4) & 0x1;
    char v74 = __carry__(v67, v68);
    char v75 = ((v69 ^ v68) & ~(v67 ^ v68)) < 0;
    int v76 = intermediate_2_mem_in_prev_block(v19);
    int v77 = v69;
    int v78 = v76 + v69;
    char v79 = v78 ? 0: 1;
    char v80 = v78 < 0;
    char v81 = __parity__((unsigned char)v78);
    char v82 = (((v76 ^ v77) ^ v78) >>> 4) & 0x1;
    char v83 = __carry__(v76, v77);
    char v84 = ((v78 ^ v77) & ~(v76 ^ v77)) < 0;
    int v85 = intermediate_3_mem_cond_overwrite((unsigned int)v19);
    int v86 = v78;
    int v87 = v85 + v78;
    char v88 = v87 ? 0: 1;
    char v89 = v87 < 0;
    char v90 = __parity__((unsigned char)v87);
    char v91 = (((v85 ^ v86) ^ v87) >>> 4) & 0x1;
    char v92 = __carry__(v85, v86);
    char v93 = ((v87 ^ v86) & ~(v85 ^ v86)) < 0;
    int v94 = intermediate_4_mem_cond_change((unsigned int)v19);
    int v95 = v87;
    int v96 = v94 + v87;
    char v97 = v96 ? 0: 1;
    char v98 = v96 < 0;
    char v99 = __parity__((unsigned char)v96);
    char v100 = (((v94 ^ v95) ^ v96) >>> 4) & 0x1;
    char v101 = __carry__(v94, v95);
    char v102 = ((v96 ^ v95) & ~(v94 ^ v95)) < 0;
    int v103 = intermediate_5_mem_different_values(v19);
    int v104 = v96;
    int v105 = v103 + v96;
    char v106 = v105 ? 0: 1;
    char v107 = v105 < 0;
    char v108 = __parity__((unsigned char)v105);
    char v109 = (((v103 ^ v104) ^ v105) >>> 4) & 0x1;
    char v110 = __carry__(v103, v104);
    char v111 = ((v105 ^ v104) & ~(v103 ^ v104)) < 0;
    int v112 = intermediate_6_mem_overwrite_in_block(v19);
    int v113 = v105;
    int v114 = v112 + v105;
    char v115 = v114 ? 0: 1;
    char v116 = v114 < 0;
    char v117 = __parity__((unsigned char)v114);
    char v118 = (((v112 ^ v113) ^ v114) >>> 4) & 0x1;
    char v119 = __carry__(v112, v113);
    char v120 = ((v114 ^ v113) & ~(v112 ^ v113)) < 0;
    int v121 = intermediate_10_subregs();
    int v122 = v114;
    int v123 = v121 + v114;
    char v124 = v123 ? 0: 1;
    char v125 = v123 < 0;
    char v126 = __parity__((unsigned char)v123);
    char v127 = (((v121 ^ v122) ^ v123) >>> 4) & 0x1;
    char v128 = __carry__(v121, v122);
    char v129 = ((v123 ^ v122) & ~(v121 ^ v122)) < 0;
    int v130 = advanced_1_writes_can_be_omitted_for_non_mem_access_calls(v19);
    int v131 = v123;
    int v132 = v130 + v123;
    char v133 = v132 ? 0: 1;
    char v134 = v132 < 0;
    char v135 = __parity__((unsigned char)v132);
    char v136 = (((v130 ^ v131) ^ v132) >>> 4) & 0x1;
    char v137 = __carry__(v130, v131);
    char v138 = ((v132 ^ v131) & ~(v130 ^ v131)) < 0;
    int v139 = v3;
    int v140 = advanced_2_mem_values_can_be_propagated_for_non_write_calls(ptr4[0]);
    int v141 = v132;
    int v142 = v140 + v132;
    char v143 = v142 ? 0: 1;
    char v144 = v142 < 0;
    char v145 = __parity__((unsigned char)v142);
    char v146 = (((v140 ^ v141) ^ v142) >>> 4) & 0x1;
    char v147 = __carry__(v140, v141);
    char v148 = ((v142 ^ v141) & ~(v140 ^ v141)) < 0;
    int v149 = advanced_3_value_range_analysis((unsigned int)v19);
    int v150 = ptr4[0];
    int v151 = v142;
    int v152 = v149 + v142;
    char v153 = v152 ? 0: 1;
    char v154 = v152 < 0;
    char v155 = __parity__((unsigned char)v152);
    char v156 = (((v149 ^ v151) ^ v152) >>> 4) & 0x1;
    char v157 = __carry__(v149, v151);
    char v158 = ((v152 ^ v151) & ~(v149 ^ v151)) < 0;
    int v159 = (int)*(char*)v150;
    int v160 = v152;
    int __status = v159 + v152;
    char v161 = __status ? 0: 1;
    char v162 = __status < 0;
    char v163 = __parity__((unsigned char)__status);
    char v164 = (((v159 ^ v160) ^ __status) >>> 4) & 0x1;
    char v165 = __carry__(v159, v160);
    char v166 = ((__status ^ v160) & ~(v159 ^ v160)) < 0;
    int* ptr5 = &v4;
    /*NO_RETURN*/ →exit(__status);
}

int sub_8048356() {
    return gvar_804A008();
}

int sub_80483C0() {
    return __gmon_start__();
}

int sub_80484DF() {
    return 0;
}

void sub_8048518() {
}

int sub_8048549() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804855C() {
}

int sub_8048570() {
    return register_tm_clones();
}
