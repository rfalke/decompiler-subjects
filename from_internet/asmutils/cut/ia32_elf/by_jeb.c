
int start(int param0, int param1) {
    unsigned int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    char v7;
    char v8;
    int v9;
    char v10;
    unsigned int v11;
    int v12;
    char v13;
    int v14;
    char v15;
    char v16;
    char v17;
    int v18 = v12;
    int v19 = param0;
    unsigned int* ptr0 = &param1;
    gvar_8048337 = 9;
loc_8048055:
    do {
        unsigned int v20 = *ptr0;
        ++ptr0;
        v11 = v20;
        v10 = v11 ? 0: 1;
        char v21 = v11 >= 0x80000000;
        char v22 = __parity__((unsigned char)v11);
        char v23 = 0;
        char v24 = 0;
        if(!v10) {
            char v25 = *(short*)v11 == 25389;
            char v26 = *(short*)v11 < 25389;
            char v27 = __parity__((unsigned char)*(short*)v11 - 45);
            char v28 = *(unsigned short*)v11 < 25389;
            char v29 = (((*(short*)v11 - 25389) ^ *(short*)v11) & (*(short*)v11 ^ 0x632d)) < 0;
            char v30 = (((*(short*)v11 - 25389) ^ (*(short*)v11 ^ 0x632d)) >>> 4) & 0x1;
            if(v25) {
                v11 += 2;
                char v31 = *(char*)v11 ? 0: 1;
                char v32 = *(char*)v11 < 0;
                char v33 = __parity__(*(char*)v11);
                char v34 = *(unsigned char*)v11 < 0;
                char v35 = 0;
                v7 = 0;
                if(v31) {
                    unsigned int v36 = *ptr0;
                    ++ptr0;
                    v11 = v36;
                    v5 = v11 ? 0: 1;
                    v4 = v11 >= 0x80000000;
                    v3 = __parity__((unsigned char)v11);
                    v2 = 0;
                    v1 = 0;
                    if(v5) {
                        goto loc_8048242;
                    }
                }
                --ptr0;
                *ptr0 = &loc_80480B3;
                v9 = /*BAD_CALL!*/ sub_8048298();
                int v37 = 0;
                char v38 = 1;
                char v39 = 0;
                char v40 = 1;
                char v41 = 0;
                char v42 = 0;
                unsigned int v43 = 0;
                v6 = 1;
                char v44 = 0;
                char v45 = 0;
                char v46 = 0;
                char v47 = 0;
                char v48 = 0;
                gvar_8048439 = v0;
                gvar_804843D = 1;
                char v49 = *(char*)v11 == 45;
                char v50 = *(char*)v11 < 45;
                char v51 = __parity__(*(char*)v11 - 45);
                char v52 = *(unsigned char*)v11 < 45;
                char v53 = (((*(char*)v11 - 45) ^ *(char*)v11) & (*(char*)v11 ^ 0x2d)) < 0;
                char v54 = (((*(char*)v11 - 45) ^ (*(char*)v11 ^ 0x2d)) >>> 4) & 0x1;
                if(v49) {
                    unsigned int v55 = v11;
                    ++v11;
                    char v56 = v11 ? 0: 1;
                    char v57 = v11 >= 0x80000000;
                    char v58 = __parity__((unsigned char)v11);
                    char v59 = (int*)((int)(int*)((int)(int*)((int)(int*)(v55 ^ 0x1) ^ v11) >>> 4) & 0x1);
                    char v60 = (int)(int*)((int)(int*)(v11 ^ v55) & (int*)~(int)(int*)(v55 ^ 0x1)) < 0;
                    --ptr0;
                    *ptr0 = &loc_80480CE;
                    v9 = /*BAD_CALL!*/ sub_8048298();
                    v43 = v0;
                    v0 -= gvar_8048439;
                    v5 = v0 ? 0: 1;
                    v4 = v0 >= 0x80000000;
                    v3 = __parity__((unsigned char)v0);
                    v7 = (((gvar_8048439 ^ v43) ^ v0) >>> 4) & 0x1;
                    v1 = gvar_8048439 > v43;
                    v2 = (int)((gvar_8048439 ^ v43) & (v0 ^ v43)) < 0;
                    if(v4) {
                        goto loc_8048242;
                    }
                    else {
                        v43 = v0;
                        ++v0;
                        char v61 = v0 ? 0: 1;
                        char v62 = v0 >= 0x80000000;
                        char v63 = __parity__((unsigned char)v0);
                        char v64 = (((v43 ^ 0x1) ^ v0) >>> 4) & 0x1;
                        char v65 = (int)((v0 ^ v43) & ~(v43 ^ 0x1)) < 0;
                        gvar_804843D = v0;
                    }
                }
                goto loc_8048055;
            }
            else {
                char v66 = *(short*)v11 == 31277;
                char v67 = *(short*)v11 < 31277;
                char v68 = __parity__((unsigned char)*(short*)v11 - 45);
                char v69 = *(unsigned short*)v11 < 31277;
                char v70 = (((*(short*)v11 - 31277) ^ *(short*)v11) & (*(short*)v11 ^ 0x7a2d)) < 0;
                char v71 = (((*(short*)v11 - 31277) ^ (*(short*)v11 ^ 0x7a2d)) >>> 4) & 0x1;
                if(v66) {
                    gvar_8048338 = 1;
                    goto loc_8048055;
                }
                else {
                    char v72 = *(short*)v11 == 25645;
                    char v73 = *(short*)v11 < 25645;
                    char v74 = __parity__((unsigned char)*(short*)v11 - 45);
                    char v75 = *(unsigned short*)v11 < 25645;
                    char v76 = (((*(short*)v11 - 25645) ^ *(short*)v11) & (*(short*)v11 ^ 0x642d)) < 0;
                    char v77 = (((*(short*)v11 - 25645) ^ (*(short*)v11 ^ 0x642d)) >>> 4) & 0x1;
                    if(v72) {
                        unsigned char* ptr1 = (unsigned char*)(v11 + 2);
                        char v78 = *ptr1 ? 0: 1;
                        char v79 = *ptr1 < 0;
                        char v80 = __parity__(*ptr1);
                        char v81 = *ptr1 < 0;
                        char v82 = 0;
                        v7 = 0;
                        if(v78) {
                            unsigned int v83 = *ptr0;
                            ++ptr0;
                            v11 = v83;
                            v5 = v11 ? 0: 1;
                            v4 = v11 >= 0x80000000;
                            v3 = __parity__((unsigned char)v11);
                            v2 = 0;
                            v1 = 0;
                            if(v5) {
                                goto loc_8048242;
                            }
                        }
                        --ptr0;
                        *ptr0 = &loc_80480FD;
                        v9 = /*BAD_CALL!*/ sub_80482BC(v6);
                        gvar_8048337 = (unsigned char)v9;
                        goto loc_8048055;
                    }
                    else {
                        char v84 = *(short*)v11 == 0x662d;
                        char v85 = *(short*)v11 < 0x662d;
                        char v86 = __parity__((unsigned char)*(short*)v11 - 45);
                        char v87 = *(unsigned short*)v11 < 0x662d;
                        char v88 = (((*(short*)v11 - 0x662d) ^ *(short*)v11) & (*(short*)v11 ^ 0x662d)) < 0;
                        char v89 = (((*(short*)v11 - 0x662d) ^ (*(short*)v11 ^ 0x662d)) >>> 4) & 0x1;
                        if(v84) {
                            goto loc_8048107;
                        }
                        else {
                            char v90 = *(short*)v11 == 11565;
                            char v91 = *(short*)v11 < 11565;
                            char v92 = __parity__((unsigned char)*(short*)v11 - 45);
                            char v93 = *(unsigned short*)v11 < 11565;
                            char v94 = (((*(short*)v11 - 11565) ^ *(short*)v11) & (*(short*)v11 ^ 0x2d2d)) < 0;
                            char v95 = (((*(short*)v11 - 11565) ^ (*(short*)v11 ^ 0x2d2d)) >>> 4) & 0x1;
                            if(v90) {
                                unsigned int v96 = *ptr0;
                                ++ptr0;
                                v11 = v96;
                                char v97 = v11 ? 0: 1;
                                char v98 = v11 >= 0x80000000;
                                char v99 = __parity__((unsigned char)v11);
                                char v100 = 0;
                                char v101 = 0;
                                if(v97) {
                                    break;
                                }
                            }
                            v8 = *(short*)v11 == 45;
                            char v102 = *(short*)v11 < 45;
                            char v103 = __parity__((unsigned char)*(short*)v11 - 45);
                            char v104 = *(unsigned short*)v11 < 45;
                            char v105 = (((*(short*)v11 - 45) ^ *(short*)v11) & (*(short*)v11 ^ 0x2d)) < 0;
                            v7 = (((*(short*)v11 - 45) ^ (*(short*)v11 ^ 0x2d)) >>> 4) & 0x1;
                        }
                    }
                }
            }
            if(!v8) {
                v6 = 0;
                v5 = 1;
                v4 = 0;
                v3 = 1;
                v2 = 0;
                v1 = 0;
                v0 = v11;
                --ptr0;
                *ptr0 = 5;
                int v106 = *ptr0;
                ++ptr0;
                interrupt(128);
            loc_8048107:
                gvar_8048336 = 1;
                v11 += 2;
                char v107 = *(char*)v11 ? 0: 1;
                char v108 = *(char*)v11 < 0;
                char v109 = __parity__(*(char*)v11);
                char v110 = *(unsigned char*)v11 < 0;
                char v111 = 0;
                v7 = 0;
                if(!v107) {
                loc_8048120:
                    do {
                        --ptr0;
                        *ptr0 = &loc_8048125;
                        v9 = /*BAD_CALL!*/ sub_8048298();
                        char v112 = v0 == 0xff;
                        char v113 = (int)v0 < 0xff;
                        char v114 = __parity__((unsigned char)v0 - 0xff);
                        char v115 = v0 < 0xff;
                        char v116 = (((v0 - 0xff) ^ v0) & (v0 ^ 0xff)) < 0;
                        char v117 = (((v0 - 0xff) ^ (v0 ^ 0xff)) >>> 4) & 0x1;
                        if((v112 || v113 != v116)) {
                            *(char*)(v0 + 134513465) = 1;
                        }
                        ++v11;
                        v15 = *(char*)(v11 - 1) == 44;
                        char v118 = *(char*)(v11 - 1) < 44;
                        char v119 = __parity__(*(char*)(v11 - 1) - 44);
                        char v120 = *(unsigned char*)(v11 - 1) < 44;
                        char v121 = (((*(char*)(v11 - 1) - 44) ^ *(char*)(v11 - 1)) & (*(char*)(v11 - 1) ^ 0x2c)) < 0;
                        char v122 = (((*(char*)(v11 - 1) - 44) ^ (*(char*)(v11 - 1) ^ 0x2c)) >>> 4) & 0x1;
                    }
                    while(v15);
                    goto loc_8048055;
                }
                else {
                    unsigned int v123 = *ptr0;
                    ++ptr0;
                    v11 = v123;
                    v5 = v11 ? 0: 1;
                    v4 = v11 >= 0x80000000;
                    v3 = __parity__((unsigned char)v11);
                    v2 = 0;
                    v1 = 0;
                    if(!v5) {
                        goto loc_8048120;
                    }
                    else {
                    loc_8048242:
                        v0 = (unsigned int)1 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                        --ptr0;
                        *ptr0 = 1;
                        v106 = *ptr0;
                        ++ptr0;
                        interrupt(128);
                    }
                }
            }
            goto loc_8048162;
        }
    }
    while(!v10);
    --ptr0;
    *ptr0 = v11;
loc_8048162:
    gvar_8048441 = 0;
    unsigned int v124 = v0;
loc_8048174:
    while(1) {
        unsigned int v125 = gvar_8048439;
        char v126 = v125 ? 0: 1;
        if(!v126) {
            --v125;
            char v127 = v125 ? 0: 1;
            if(!v127) {
                gvar_8048335 = 0;
                do {
                    --ptr0;
                    *ptr0 = &loc_8048187;
                    char v128 = /*BAD_CALL!*/ sub_8048246(v6, v124);
                    char v129 = (unsigned char)v128 == 10;
                    if(v129) {
                        continue loc_8048174;
                    }
                    else {
                        --v125;
                        v16 = v125 ? 0: 1;
                    }
                }
                while(!v16);
            }
        }
        gvar_8048335 = 0;
        int v130 = 1;
        unsigned int v131 = gvar_804843D;
        do {
            --ptr0;
            *ptr0 = &loc_80481A3;
            char v132 = /*BAD_CALL!*/ sub_8048246(v6, v124);
            char v133 = (unsigned char)v132 == 10;
            if(v133) {
                goto loc_8048214;
            }
            else {
                char v134 = gvar_8048336 ? 0: 1;
                if(!v134) {
                    char v135 = (unsigned char)v132 == gvar_8048337;
                    if(!v135) {
                        char v136 = v130 == 0xff;
                        char v137 = v130 < 0xff;
                        char v138 = (((v130 - 0xff) ^ v130) & (v130 ^ 0xff)) < 0;
                        if(!v136 && v137 == v138) {
                            break;
                        }
                        else {
                            char v139 = *(char*)(v130 + 134513465) ? 0: 1;
                            if(!v139) {
                                char v140 = gvar_8048335 == 1;
                                if(v140) {
                                    --ptr0;
                                    *ptr0 = v132;
                                    --ptr0;
                                    *ptr0 = &loc_80481DD;
                                    /*BAD_CALL!*/ sub_8048275(v6, v14);
                                    ++ptr0;
                                }
                                goto loc_80481DE;
                            }
                        }
                    }
                    else {
                        ++v130;
                        char v141 = gvar_8048338 == 1;
                        if(!v141) {
                            char v142 = gvar_8048335 == 2;
                            if(v142) {
                                gvar_8048335 = 1;
                            }
                        }
                    }
                }
                else {
                loc_80481DE:
                    gvar_8048335 = 2;
                    --ptr0;
                    *ptr0 = &loc_80481EA;
                    /*BAD_CALL!*/ sub_8048275(v6, v14);
                }
                --v131;
                v13 = v131 ? 0: 1;
            }
        }
        while(!v13);
        do {
            --ptr0;
            *ptr0 = &loc_8048210;
            char v143 = /*BAD_CALL!*/ sub_8048246(v6, (unsigned int)v14);
            v17 = (unsigned char)v143 == 10;
        }
        while(!v17);
    loc_8048214:
        --ptr0;
        *ptr0 = &loc_8048219;
        /*BAD_CALL!*/ sub_8048275(v6, v14);
    }
}

char sub_8048246(int param0, unsigned int param1) {
    int v0;
    char* ptr0;
    char v1 = param1 == ptr0;
    char v2 = (int)param1 > (int)ptr0;
    char v3 = __parity__((unsigned char)ptr0 - (unsigned char)param1);
    char v4 = param1 > (unsigned int)ptr0;
    char v5 = (int)(int*)((int)(int*)((int)(int*)((int)ptr0 - param1) ^ (int)ptr0) & (int)(int*)(param1 ^ (int)ptr0)) < 0;
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 - param1) ^ (int)(int*)(param1 ^ (int)ptr0)) >>> 4) & 0x1);
    if(v2 == v5) {
        int* ptr1 = gvar_8048441;
        int v7 = 0x8048445;
        param1 = 0x800;
        int v8 = 3;
        char v9 = 3;
        int v10 = 0;
        int* ptr2 = &v0;
        interrupt(128);
    }
    return *ptr0;
}

int sub_8048275(int param0, int param1) {
    char* ptr0;
    int v0;
    int result;
    *ptr0 = (unsigned char)result;
    int* ptr1 = (int*)(ptr0 + 1);
    char v1 = ptr1 == 0x8049445;
    char v2 = (int)ptr1 < 0x8049445;
    char v3 = __parity__((unsigned char)ptr1 - 69);
    char v4 = (unsigned int)ptr1 < 0x8049445;
    char v5 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 0x8049445) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x8049445)) < 0;
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 0x8049445) ^ (int)(int*)((int)ptr1 ^ 0x8049445)) >>> 4) & 0x1);
    if(v1) {
        int v7 = v0;
        int v8 = param1;
        param1 = 0x800;
        int v9 = 134515781;
        v0 = 1;
        int v10 = 4;
        result = 4;
        int* ptr2 = &v8;
        interrupt(128);
    }
    return result;
}

int sub_8048298() {
    unsigned char* ptr0;
    int result;
    int v0 = 0;
    int i = 0;
    for(i = (unsigned int)(*ptr0 - 48) | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *ptr0 >= 48 && *ptr0 - 48 <= 9; i = (unsigned int)(*ptr0 - 48) | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
        ++ptr0;
        v0 = gvar_80482B8 * v0 + i;
    }
    return result;
}

int sub_80482BC(int param0) {
    char* ptr0;
    int result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
    if(*ptr0 == 92) {
        result = (unsigned int)*(unsigned char*)(ptr0 + 1) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        if(*(unsigned char*)(ptr0 + 1) == 97) {
            return (unsigned int)7 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        }
        else if((unsigned char)result == 98) {
            return (unsigned int)8 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        }
        else if((unsigned char)result == 116) {
            return (unsigned int)9 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        }
        else if((unsigned char)result == 114) {
            return (unsigned int)13 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        }
        else if((unsigned char)result == 110) {
            return (unsigned int)10 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        }
        else if((unsigned char)result >= 48 && (unsigned char)result <= 55) {
            param0 = (unsigned int)3 | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
            result = (unsigned int)(*(unsigned char*)(ptr0 + 2) - 48) | ((unsigned int)((unsigned char)result - 48) << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
            if(*(unsigned char*)(ptr0 + 2) >= 48 && *(unsigned char*)(ptr0 + 2) - 48 <= 7) {
                result = (unsigned int)(*(unsigned char*)(ptr0 + 3) - 48) | ((unsigned int)(((unsigned char)(result >>> 8) << (param0 & 0x1f)) ^ (unsigned char)result) << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
                if(*(unsigned char*)(ptr0 + 3) >= 48 && *(unsigned char*)(ptr0 + 3) - 48 <= 7) {
                    result = (unsigned int)(unsigned char)result | ((unsigned int)(((unsigned char)(result >>> 8) << (param0 & 0x1f)) ^ (unsigned char)result) << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
                }
            }
            return (unsigned int)(unsigned char)(result >>> 8) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        }
    }
    return result;
}
