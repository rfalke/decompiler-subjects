
int start(int param0, void* param1, void* param2) {
    void* ptr0;
    void* ptr1;
    int v0;
    void* ptr2;
    unsigned int v1;
    int v2;
    char v3;
    unsigned int v4 = v1;
    unsigned int* ptr3 = &param0;
    char v5 = v4 == 1;
    char v6 = (int)v4 < 1;
    char v7 = __parity__((unsigned char)v4 - 1);
    char v8 = v4 < 1;
    char v9 = (((v4 - 1) ^ v4) & (v4 ^ 0x1)) < 0;
    char v10 = (((v4 - 1) ^ (v4 ^ 0x1)) >>> 4) & 0x1;
    if(!v5) {
        unsigned int v11 = 0;
        char v12 = 1;
        char v13 = 0;
        char v14 = 1;
        char v15 = 0;
        char v16 = 0;
        int v17 = param0;
        void* ptr4 = param1;
        ptr3 = &param2;
        char v18 = *(char*)ptr4 == 45;
        char v19 = *(char*)ptr4 < 45;
        char v20 = __parity__(*(char*)ptr4 - 45);
        char v21 = *(unsigned char*)ptr4 < 45;
        char v22 = (((*(char*)ptr4 - 45) ^ *(char*)ptr4) & (*(char*)ptr4 ^ 0x2d)) < 0;
        v10 = (((*(char*)ptr4 - 45) ^ (*(char*)ptr4 ^ 0x2d)) >>> 4) & 0x1;
        if(!v18) {
            v5 = *(char*)ptr4 == 33;
            v6 = *(char*)ptr4 < 33;
            v7 = __parity__(*(char*)ptr4 - 33);
            v8 = *(unsigned char*)ptr4 < 33;
            v9 = (((*(char*)ptr4 - 33) ^ *(char*)ptr4) & (*(char*)ptr4 ^ 0x21)) < 0;
            v10 = (((*(char*)ptr4 - 33) ^ (*(char*)ptr4 ^ 0x21)) >>> 4) & 0x1;
            if(!v5) {
                void* ptr5 = param2;
                ptr3 = &v2;
                ptr2 = ptr5;
                v5 = ptr2 ? 0: 1;
                v6 = (int)ptr2 < 0;
                v7 = __parity__((unsigned char)ptr2);
                v9 = 0;
                v8 = 0;
                if(!v5) {
                    char v23 = *(char*)ptr2 == 61;
                    char v24 = *(char*)ptr2 < 61;
                    char v25 = __parity__(*(char*)ptr2 - 61);
                    char v26 = *(unsigned char*)ptr2 < 61;
                    char v27 = (((*(char*)ptr2 - 61) ^ *(char*)ptr2) & (*(char*)ptr2 ^ 0x3d)) < 0;
                    char v28 = (((*(char*)ptr2 - 61) ^ (*(char*)ptr2 ^ 0x3d)) >>> 4) & 0x1;
                    if(!v23) {
                        char v29 = *(short*)ptr2 == 15649;
                        char v30 = *(short*)ptr2 < 15649;
                        char v31 = __parity__((unsigned char)*(short*)ptr2 - 33);
                        char v32 = *(unsigned short*)ptr2 < 15649;
                        char v33 = (((*(short*)ptr2 - 15649) ^ *(short*)ptr2) & (*(short*)ptr2 ^ 0x3d21)) < 0;
                        char v34 = (((*(short*)ptr2 - 15649) ^ (*(short*)ptr2 ^ 0x3d21)) >>> 4) & 0x1;
                        if(!v29) {
                            int v35 = (unsigned int)*(char*)ptr2 | ((unsigned int)((v35 >>> 8) & 0xffffff) << 8);
                            ptr2 = (void*)((int)ptr2 + 1);
                            v5 = (unsigned char)v35 == 45;
                            v6 = (unsigned char)v35 < 45;
                            v7 = __parity__((unsigned char)v35 - 45);
                            v8 = (unsigned char)v35 < 45;
                            v9 = ((((unsigned char)v35 - 45) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x2d)) < 0;
                            v10 = ((((unsigned char)v35 - 45) ^ ((unsigned char)v35 ^ 0x2d)) >>> 4) & 0x1;
                            if(!v5) {
                                goto loc_8048054;
                            }
                            else {
                                v35 = (unsigned int)*(short*)ptr2 | ((unsigned int)(unsigned short)(v35 >>> 16) << 16);
                                ptr2 = (void*)((int)ptr2 + 2);
                                v5 = *(char*)ptr2 ? 0: 1;
                                v6 = *(char*)ptr2 < 0;
                                v7 = __parity__(*(char*)ptr2);
                                v8 = *(unsigned char*)ptr2 < 0;
                                v9 = 0;
                                v10 = 0;
                                if(!v5) {
                                    goto loc_804804E;
                                }
                                else {
                                    char v36 = (unsigned short)v35 == 29029;
                                    char v37 = (unsigned short)v35 < 29029;
                                    char v38 = __parity__((unsigned char)v35 - 101);
                                    char v39 = (unsigned short)v35 < 29029;
                                    char v40 = ((((unsigned short)v35 - 29029) ^ (unsigned short)v35) & ((unsigned short)v35 ^ 0x7165)) < 0;
                                    char v41 = ((((unsigned short)v35 - 29029) ^ ((unsigned short)v35 ^ 0x7165)) >>> 4) & 0x1;
                                    if(!v36) {
                                        char v42 = (unsigned short)v35 == 0x656e;
                                        char v43 = (unsigned short)v35 < 0x656e;
                                        char v44 = __parity__((unsigned char)v35 - 110);
                                        char v45 = (unsigned short)v35 < 0x656e;
                                        char v46 = ((((unsigned short)v35 - 0x656e) ^ (unsigned short)v35) & ((unsigned short)v35 ^ 0x656e)) < 0;
                                        char v47 = ((((unsigned short)v35 - 0x656e) ^ ((unsigned short)v35 ^ 0x656e)) >>> 4) & 0x1;
                                        if(v42) {
                                            goto loc_804823B;
                                        }
                                        else {
                                            char v48 = (unsigned short)v35 == 29799;
                                            char v49 = (unsigned short)v35 < 29799;
                                            char v50 = __parity__((unsigned char)v35 - 103);
                                            char v51 = (unsigned short)v35 < 29799;
                                            char v52 = ((((unsigned short)v35 - 29799) ^ (unsigned short)v35) & ((unsigned short)v35 ^ 0x7467)) < 0;
                                            char v53 = ((((unsigned short)v35 - 29799) ^ ((unsigned short)v35 ^ 0x7467)) >>> 4) & 0x1;
                                            if(!v48) {
                                                char v54 = (unsigned short)v35 == 0x6567;
                                                char v55 = (unsigned short)v35 < 0x6567;
                                                char v56 = __parity__((unsigned char)v35 - 103);
                                                char v57 = (unsigned short)v35 < 0x6567;
                                                char v58 = ((((unsigned short)v35 - 0x6567) ^ (unsigned short)v35) & ((unsigned short)v35 ^ 0x6567)) < 0;
                                                char v59 = ((((unsigned short)v35 - 0x6567) ^ ((unsigned short)v35 ^ 0x6567)) >>> 4) & 0x1;
                                                if(!v54) {
                                                    char v60 = (unsigned short)v35 == 29804;
                                                    char v61 = (unsigned short)v35 < 29804;
                                                    char v62 = __parity__((unsigned char)v35 - 108);
                                                    char v63 = (unsigned short)v35 < 29804;
                                                    char v64 = ((((unsigned short)v35 - 29804) ^ (unsigned short)v35) & ((unsigned short)v35 ^ 0x746c)) < 0;
                                                    char v65 = ((((unsigned short)v35 - 29804) ^ ((unsigned short)v35 ^ 0x746c)) >>> 4) & 0x1;
                                                    if(!v60) {
                                                        v5 = (unsigned short)v35 == 0x656c;
                                                        v6 = (unsigned short)v35 < 0x656c;
                                                        v7 = __parity__((unsigned char)v35 - 108);
                                                        v8 = (unsigned short)v35 < 0x656c;
                                                        v9 = ((((unsigned short)v35 - 0x656c) ^ (unsigned short)v35) & ((unsigned short)v35 ^ 0x656c)) < 0;
                                                        v10 = ((((unsigned short)v35 - 0x656c) ^ ((unsigned short)v35 ^ 0x656c)) >>> 4) & 0x1;
                                                        if(!v5) {
                                                            goto loc_804804E;
                                                        }
                                                        else {
                                                            v11 = 2;
                                                        }
                                                    }
                                                    int v66 = 0;
                                                    char v67 = 1;
                                                    char v68 = 0;
                                                    char v69 = 1;
                                                    char v70 = 0;
                                                    char v71 = 0;
                                                    int v72 = v2;
                                                    int v73 = sub_804805C();
                                                    v2 = v73;
                                                    ptr2 = ptr4;
                                                    int v74 = sub_804805C();
                                                    v0 = v2;
                                                    ptr3 = &v3;
                                                    char v75 = v11 == 2;
                                                    char v76 = (int)v11 < 2;
                                                    char v77 = __parity__((unsigned char)v11 - 2);
                                                    char v78 = v11 < 2;
                                                    char v79 = (((v11 - 2) ^ v11) & (v11 ^ 0x2)) < 0;
                                                    char v80 = (((v11 - 2) ^ (v11 ^ 0x2)) >>> 4) & 0x1;
                                                    v5 = v74 == v0;
                                                    v6 = v74 < v0;
                                                    v7 = __parity__((unsigned char)v74 - (unsigned char)v0);
                                                    v8 = (unsigned int)v74 < (unsigned int)v0;
                                                    v9 = (((v74 - v0) ^ v74) & (v74 ^ v0)) < 0;
                                                    v10 = (((v74 - v0) ^ (v74 ^ v0)) >>> 4) & 0x1;
                                                    if(!v75) {
                                                        if(v6 != v9) {
                                                            goto loc_804825D;
                                                        }
                                                        else {
                                                            goto loc_8048264;
                                                        }
                                                    }
                                                    else if(v5 || v6 != v9) {
                                                        goto loc_804825D;
                                                    }
                                                    else {
                                                        goto loc_8048264;
                                                    }
                                                }
                                                else {
                                                    v11 = 2;
                                                }
                                            }
                                            int v81 = 0;
                                            char v82 = 1;
                                            char v83 = 0;
                                            char v84 = 1;
                                            char v85 = 0;
                                            char v86 = 0;
                                            int v87 = v2;
                                            int v88 = sub_804805C();
                                            v2 = v88;
                                            ptr2 = ptr4;
                                            int v89 = sub_804805C();
                                            v0 = v2;
                                            ptr3 = &v3;
                                            char v90 = v11 == 2;
                                            char v91 = (int)v11 < 2;
                                            char v92 = __parity__((unsigned char)v11 - 2);
                                            char v93 = v11 < 2;
                                            char v94 = (((v11 - 2) ^ v11) & (v11 ^ 0x2)) < 0;
                                            char v95 = (((v11 - 2) ^ (v11 ^ 0x2)) >>> 4) & 0x1;
                                            v5 = v89 == v0;
                                            v6 = v89 < v0;
                                            v7 = __parity__((unsigned char)v89 - (unsigned char)v0);
                                            v8 = (unsigned int)v89 < (unsigned int)v0;
                                            v9 = (((v89 - v0) ^ v89) & (v89 ^ v0)) < 0;
                                            v10 = (((v89 - v0) ^ (v89 ^ v0)) >>> 4) & 0x1;
                                            if(!v90) {
                                                if(!v5 && v6 == v9) {
                                                    goto loc_804825D;
                                                }
                                                else {
                                                    goto loc_8048264;
                                                }
                                            }
                                            else if(v6 == v9) {
                                                goto loc_804825D;
                                            }
                                            else {
                                                goto loc_8048264;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                        loc_804823B:
                            v11 = 1;
                            char v96 = 0;
                            char v97 = 0;
                            char v98 = 0;
                            char v99 = 0;
                            char v100 = 0;
                        }
                    }
                    int v101 = 0;
                    int v102 = 0;
                    char v103 = 1;
                    char v104 = 0;
                    char v105 = 1;
                    char v106 = 0;
                    char v107 = 0;
                    int v108 = 0;
                    int v109 = -1;
                    char v110 = 0;
                    char v111 = 1;
                    char v112 = 1;
                    char v113 = 1;
                    char v114 = 0;
                    ptr2 = (void*)v2;
                    v2 = (int)ptr4;
                    while(v109 != 0) {
                        char v115 = *(char*)ptr4 == 0;
                        char v116 = *(char*)ptr4 > 0;
                        char v117 = __parity__(0 - *(char*)ptr4);
                        char v118 = *(unsigned char*)ptr4 > 0;
                        char v119 = ((0 - *(char*)ptr4) & *(char*)ptr4) < 0;
                        char v120 = (((0 - *(char*)ptr4) ^ *(char*)ptr4) >>> 4) & 0x1;
                        ptr4 = (void*)((int)ptr4 + 1);
                        --v109;
                        if(!~v115) {
                            break;
                        }
                    }
                    v4 = (unsigned int)~v109;
                    ptr4 = (void*)v2;
                    ptr3 = &v3;
                    while(v4 != 0) {
                        char v121 = *(char*)ptr2 == *(char*)ptr4;
                        char v122 = *(char*)ptr2 < *(char*)ptr4;
                        char v123 = __parity__(*(char*)ptr2 - *(char*)ptr4);
                        char v124 = *(unsigned char*)ptr2 < *(unsigned char*)ptr4;
                        char v125 = (((*(char*)ptr2 - *(char*)ptr4) ^ *(char*)ptr2) & (*(char*)ptr2 ^ *(char*)ptr4)) < 0;
                        char v126 = (((*(char*)ptr2 - *(char*)ptr4) ^ (*(char*)ptr2 ^ *(char*)ptr4)) >>> 4) & 0x1;
                        ptr2 = (void*)((int)ptr2 + 1);
                        ptr4 = (void*)((int)ptr4 + 1);
                        --v4;
                        if(!v121) {
                            break;
                        }
                    }
                    char v127 = *(char*)((int)ptr4 - 1) ? 0: 1;
                    char v128 = *(char*)((int)ptr4 - 1) < 0;
                    char v129 = __parity__(*(char*)((int)ptr4 - 1));
                    char v130 = *(unsigned char*)((int)ptr4 - 1) < 0;
                    char v131 = 0;
                    v10 = 0;
                    if(v127) {
                        char v132 = *(char*)((int)ptr2 - 1) ? 0: 1;
                        char v133 = *(char*)((int)ptr2 - 1) < 0;
                        char v134 = __parity__(*(char*)((int)ptr2 - 1));
                        char v135 = *(unsigned char*)((int)ptr2 - 1) < 0;
                        char v136 = 0;
                        v10 = 0;
                        if(v132) {
                            v108 = 0;
                            v101 = 1;
                            char v137 = 0;
                            char v138 = 0;
                            char v139 = 0;
                            v10 = 0;
                            char v140 = 0;
                        }
                    }
                    int v141 = v101 ^ v11;
                    v5 = v141 ? 0: 1;
                    v6 = v141 < 0;
                    v7 = __parity__((unsigned char)v141);
                    v9 = 0;
                    v8 = 0;
                    if(v5) {
                        goto loc_8048264;
                    }
                    else {
                        goto loc_804825D;
                    }
                }
                else {
                loc_804804E:
                    ptr1 = (void*)0x2;
                    ptr0 = (void*)0x1;
                    ptr3 = &v2;
                    interrupt(128);
                }
            }
        loc_8048054:
            --ptr3;
            *ptr3 = 3;
            ptr1 = *ptr3;
            *ptr3 = 1;
            ptr0 = *ptr3;
            ++ptr3;
            interrupt(128);
        }
        else {
            v0 = (unsigned int)*(char*)((int)ptr4 + 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            void* ptr6 = param2;
            ptr3 = &v2;
            void* ptr7 = ptr6;
            v5 = ptr7 ? 0: 1;
            v6 = (int)ptr7 < 0;
            v7 = __parity__((unsigned char)ptr7);
            v9 = 0;
            v8 = 0;
            if(!v5) {
                char v142 = (unsigned char)v0 == 122;
                char v143 = (unsigned char)v0 < 122;
                char v144 = __parity__((unsigned char)v0 - 122);
                char v145 = (unsigned char)v0 < 122;
                char v146 = ((((unsigned char)v0 - 122) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x7a)) < 0;
                v10 = ((((unsigned char)v0 - 122) ^ ((unsigned char)v0 ^ 0x7a)) >>> 4) & 0x1;
                if(!v142) {
                    char v147 = (unsigned char)v0 == 110;
                    char v148 = (unsigned char)v0 < 110;
                    char v149 = __parity__((unsigned char)v0 - 110);
                    char v150 = (unsigned char)v0 < 110;
                    char v151 = ((((unsigned char)v0 - 110) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x6e)) < 0;
                    v10 = ((((unsigned char)v0 - 110) ^ ((unsigned char)v0 ^ 0x6e)) >>> 4) & 0x1;
                    if(!v147) {
                        v5 = (unsigned char)v0 == 116;
                        v6 = (unsigned char)v0 < 116;
                        v7 = __parity__((unsigned char)v0 - 116);
                        v8 = (unsigned char)v0 < 116;
                        v9 = ((((unsigned char)v0 - 116) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x74)) < 0;
                        v10 = ((((unsigned char)v0 - 116) ^ ((unsigned char)v0 ^ 0x74)) >>> 4) & 0x1;
                        if(!v5) {
                            v4 = 134513307;
                            ptr1 = ptr7;
                            ptr0 = (void*)0x6B;
                            ptr3 = &v2;
                            interrupt(128);
                        }
                        ptr2 = ptr7;
                        int v152 = sub_804805C();
                        ptr7 = (void*)0x80482DB;
                        v4 = 21505;
                        ptr1 = (void*)v152;
                        ptr0 = (void*)0x36;
                        ptr3 = &v2;
                        interrupt(128);
                    }
                    v11 = 1;
                    char v153 = 0;
                    char v154 = 0;
                    char v155 = 0;
                    char v156 = 0;
                    char v157 = 0;
                }
                int v158 = 0;
                v5 = v11 ? 0: 1;
                v6 = v11 >= 0x80000000;
                v7 = __parity__((unsigned char)v11);
                v9 = 0;
                v8 = 0;
                if(v5) {
                loc_804825D:
                    ptr1 = NULL;
                    v5 = 1;
                    v6 = 0;
                    v7 = 1;
                    v9 = 0;
                    v8 = 0;
                    --ptr3;
                    *ptr3 = 1;
                    ptr0 = *ptr3;
                    ++ptr3;
                    interrupt(128);
                }
            }
        }
    }
loc_8048264:
    --ptr3;
    *ptr3 = 1;
    ptr1 = *ptr3;
    *ptr3 = 1;
    ptr0 = *ptr3;
    ++ptr3;
    interrupt(128);
}

int sub_804805C() {
    char* ptr0;
    int v0 = 0;
    int result = 0;
    do {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
    }
    while((unsigned char)v0 <= 33);
    while((unsigned char)v0 > 47 && (unsigned char)v0 <= 58) {
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        result += v0;
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if((unsigned char)v0 <= 47 || (unsigned char)v0 > 58) {
            return result;
        }
        result *= 10;
    }
    return result;
}
