
void __get_GOT() {
}

int __start_main(int param0) {
    int v0;
    int v1;
    char v2;
    char v3;
    int v4 = v0;
    int v5 = param0;
    int* ptr0 = (int*)(v5 * 4 + (int)&v2);
    int v6 = &..@198.get_GOT;
    int v7 = &..@198.get_GOT;
    int v8 = &_GLOBAL_OFFSET_TABLE_;
    char v9 = 0;
    char v10 = 0;
    char v11 = 1;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    int v15 = &_end2;
    _end2 = ptr0;
    int* ptr1 = &v3;
    int __status = v4(v5, (int)&v3, (int)ptr0);
    int* ptr2 = &v1;
    /*NO_RETURN*/ exit(__status);
}

int __system_call(int param0, int param1, unsigned int* param2, unsigned int* param3, int param4, unsigned int* param5, unsigned int* param6) {
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v0;
    char v1;
    unsigned int* ptr2;
    int v2;
    int v3;
    unsigned int* ptr3;
    unsigned int* ptr4;
    unsigned int* ptr5 = &v1;
    int v4 = v3;
    unsigned int* ptr6 = ptr3;
    unsigned int* ptr7 = ptr4;
    int v5 = v2;
    unsigned int* ptr8 = &v1;
    int* ptr9 = &ptr2;
    unsigned int* ptr10 = ptr8;
    char* ptr11 = *ptr10;
    char v6 = *ptr11;
    int v7 = 0;
    char v8 = *ptr11 ? 0: 1;
    char v9 = v6 < 0;
    char v10 = __parity__(v6);
    char v11 = 0;
    char v12 = 0;
    if(!v8) {
        if(!v9) {
            int v13 = &..@109.get_GOT;
            ptr5 = (unsigned int*)&..@109.get_GOT;
            int v14 = &_GLOBAL_OFFSET_TABLE_;
            char v15 = 0;
            char v16 = 0;
            char v17 = 1;
            char v18 = 1;
            char v19 = 0;
            char v20 = 0;
            int v21 = &__cc;
            v8 = __cc ? 0: 1;
            v9 = __cc >= 128;
            v10 = __parity__(__cc);
            v12 = __cc < 0;
            v11 = 0;
            char v22 = 0;
            if(v8) {
                goto __system_call.cdecl;
            }
            else {
                v2 = v4;
                ptr5 = ptr4;
                ptr4 = ptr3;
                ptr3 = ptr5;
                v0 = param1;
                ptr1 = param2;
                ptr0 = param3;
            }
        }
        else {
        __system_call.cdecl:
            v2 = param1;
            ptr3 = param2;
            ptr4 = param3;
            v0 = param4;
            ptr1 = param5;
            ptr0 = param6;
        }
    }
    unsigned int* ptr12 = ptr8;
    int v23 = *ptr12;
    int v24 = (unsigned int)*(char*)(v23 + 1);
    interrupt(128);
}

unsigned char _fastcall() {
    unsigned char result;
    *(int*)&__cc = result;
    return result;
}

int close(int __fd) {
    int v0;
    int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2;
    int v1;
    unsigned int* ptr3;
    unsigned int* ptr4;
    int v2 = __system_call(v0, __fd, ptr1, ptr2, v1, ptr3, ptr4);
    *ptr0 = *ptr0 + v2;
}

void exit(int __status) {
    int v0;
    int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2;
    int v1;
    unsigned int* ptr3;
    unsigned int* ptr4;
    int v2 = __system_call(v0, __status, ptr1, ptr2, v1, ptr3, ptr4);
    *ptr0 = *ptr0 + v2;
}

__pid_t fork() {
    int v0;
    int v1;
    unsigned int* ptr0;
    unsigned int* ptr1;
    char* ptr2;
    unsigned int* ptr3;
    int v2;
    unsigned int* ptr4;
    int v3 = /*BAD_CALL!*/ __system_call(v0, v1, ptr3, ptr0, v2, ptr1, ptr4);
    char v4 = (unsigned char)v3;
    char v5 = *ptr2;
    *ptr2 = *ptr2 + v4;
    __system_call(v0, v1, ptr3, ptr0, v2, ptr1, ptr4);
}

char* getenv(char* __name) {
    char* result;
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char* ptr0;
    char* ptr1 = ptr0;
    int v5 = v3;
    int v6 = v2;
    int v7 = v4;
    int* ptr2 = &v1;
    char* ptr3 = ptr0;
    int v8 = v4;
    if(!__cc) {
        ptr3 = __name;
    }
    unsigned int* ptr4 = _end2;
    char* ptr5 = ptr3;
    int v9 = -1;
    do {
        v0 = ptr3[0] == 0;
        ++ptr3;
        --v9;
    }
    while(~v0 && v9 == 0);
    while(1) {
        int v10 = -2 - v9;
        char* ptr6 = ptr5;
        result = *ptr4;
        char v11 = result ? 0: 1;
        if(!v11) {
            while(v10 != 0) {
                v11 = ptr6[0] == result[0];
                ++ptr6;
                ++result;
                --v10;
                if(!v11) {
                    break;
                }
            }
            if(!v11) {
                ++ptr4;
                continue;
            }
            else {
                ++result;
            }
        }
        return result;
    }
    return result;
}

__gid_t getgid() {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    unsigned int* ptr1;
    unsigned int* ptr2;
    int v3;
    unsigned int* ptr3;
    unsigned int* ptr4;
    __gid_t v4 = (__gid_t)__system_call(v0, v2, ptr1, ptr2, v3, ptr3, ptr4);
    *ptr0 = (unsigned char)(v1 >>> 8) + *ptr0;
}

int itoa(int param0, char* param1, unsigned int param2) {
    unsigned int v0;
    int v1;
    char* ptr0;
    int result = v1;
    char* ptr1 = ptr0;
    if(!__cc) {
        ptr1 = param1;
        v0 = param2;
    }
    itoa.printB(v0);
    *ptr1 = 0;
    return result;
}

unsigned int itoa.printB(unsigned int param0) {
    unsigned int v0;
    unsigned int v1;
    char* ptr0;
    unsigned int result = v1 / param0;
    unsigned int v2 = v1 % param0;
    if(result) {
        result = (unsigned int)itoa.printB((int)v2);
        v2 = v0;
    }
    v2 = (unsigned int)((unsigned char)v2 + 48) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    if((unsigned char)v2 > 57) {
        v2 = (unsigned int)((unsigned char)v2 + 39) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    }
    *ptr0 = (unsigned char)v2;
    return result;
}

int main(unsigned int param0, int param1, int param2) {
    int v0;
    char v1;
    char v2;
    char v3;
    int* ptr0;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int* ptr1 = &param0;
    char v10 = &v0 ? 0: 1;
    char v11 = (int)&v0 < 0;
    char v12 = __parity__((unsigned char)&v0);
    char v13 = 0;
    char v14 = 0;
    int v15 = v0;
    int v16 = v6;
    int* ptr2 = &v16;
    int v17 = v8;
    int* ptr3 = &param0;
    int* ptr4 = &ptr3;
    char v18 = &v0 == 48;
    char v19 = (int)&ptr0 < 0;
    char v20 = __parity__((unsigned char)&v0 - 48);
    char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x20) ^ (int)&ptr0) >>> 4) & 0x1);
    char v22 = (unsigned int)&ptr3 < 32;
    char v23 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr0) & (int)(int*)((int)&ptr3 ^ 0x20)) < 0;
    int* ptr5 = &param0;
    int v24 = 0;
    unsigned char v25 = _fastcall();
    int v26 = printf("\n\tprintf() test\nhex: %x, octal: %o, decimal: %d\n", 16, 8, 10);
    char** ptr6 = &ptr0;
    char v27 = &v0 == 60;
    char v28 = (int)&v7 < 0;
    char v29 = __parity__((unsigned char)&v0 - 60);
    char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v31 = (unsigned int)&ptr0 < 12;
    char v32 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    int v33 = printf("\n\tstrtol() test\nInput some decimal number: ", v7, v5, v4);
    char** ptr7 = &ptr0;
    char v34 = &v0 == 52;
    char v35 = (int)&v4 < 0;
    char v36 = __parity__((unsigned char)&v0 - 52);
    char v37 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v38 = (unsigned int)&ptr0 < 4;
    char v39 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    void* ptr8 = &v1;
    ssize_t v40 = read(0, &v1, 10);
    int* ptr9 = &v9;
    char v41 = &v0 == 48;
    char v42 = (int)&ptr0 < 0;
    char v43 = __parity__((unsigned char)&v0 - 48);
    char v44 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v45 = (unsigned int)&v9 >= 0xfffffff0;
    char v46 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
    ssize_t v47 = v40;
    size_t __n = (size_t)v40;
    char** ptr10 = &ptr0;
    char v48 = &v0 == 52;
    char v49 = (int)&v4 < 0;
    char v50 = __parity__((unsigned char)&v0 - 52);
    char v51 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v52 = (unsigned int)&ptr0 < 4;
    char v53 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    void* ptr11 = &v1;
    void* ptr12 = &v3;
    void* ptr13 = memcpy(&v3, &v1, __n);
    int* ptr14 = &v9;
    char v54 = &v0 == 48;
    char v55 = (int)&ptr0 < 0;
    char v56 = __parity__((unsigned char)&v0 - 48);
    char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v58 = (unsigned int)&v9 >= 0xfffffff0;
    char v59 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
    ssize_t v60 = v47;
    int v61 = v60 - 1;
    void* ptr15 = &v3;
    void* ptr16 = &v3;
    int* ptr17 = (int*)(v61 + (int)&v3);
    char v62 = &v0 == 45;
    char v63 = (int)(int*)((char*)&ptr0 + 3) < 0;
    char v64 = __parity__((unsigned char)&v0 - 45);
    char v65 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)&ptr0 + 3) ^ (int)(int*)(v61 ^ (int)&v3)) >>> 4) & 0x1);
    char v66 = __carry__(v61, (int)&v3);
    char v67 = (int)(int*)((int)(int*)((int)(int*)((char*)&ptr0 + 3) ^ (int)&v3) & (int*)~(int)(int*)(v61 ^ (int)&v3)) < 0;
    ptr0 = (int*)((char*)&ptr0 + 3);
    char** ptr18 = &ptr0;
    char v68 = &v0 == 52;
    char v69 = (int)&v4 < 0;
    char v70 = __parity__((unsigned char)&v0 - 52);
    char v71 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v72 = (unsigned int)&ptr0 < 4;
    char v73 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    char** ptr19 = &ptr0;
    void* ptr20 = &v3;
    long v74 = strtol((char*)&v3, &ptr0, 10);
    char** ptr21 = &ptr0;
    char v75 = &v0 == 56;
    char v76 = (int)&v5 < 0;
    char v77 = __parity__((unsigned char)&v0 - 56);
    char v78 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
    char v79 = (unsigned int)&ptr0 < 8;
    char v80 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v81 = printf("You have entered %d\n", v74);
    char** ptr22 = &ptr0;
    char v82 = &v0 == 60;
    char v83 = (int)&v7 < 0;
    char v84 = __parity__((unsigned char)&v0 - 60);
    char v85 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v86 = (unsigned int)&ptr0 < 12;
    char v87 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    int v88 = printf("\n\tmemset() test\n", v7, v5, v4);
    char** ptr23 = &ptr0;
    char v89 = &v0 == 52;
    char v90 = (int)&v4 < 0;
    char v91 = __parity__((unsigned char)&v0 - 52);
    char v92 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v93 = (unsigned int)&ptr0 < 4;
    char v94 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    void* ptr24 = &v3;
    void* ptr25 = memset(&v3, 0, 10);
    int* ptr26 = &v9;
    char v95 = &v0 == 48;
    char v96 = (int)&ptr0 < 0;
    char v97 = __parity__((unsigned char)&v0 - 48);
    char v98 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v99 = (unsigned int)&v9 >= 0xfffffff0;
    char v100 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
    void* ptr27 = &v3;
    void* ptr28 = &v3;
    int* ptr29 = &v2;
    char v101 = &v0 == 39;
    char v102 = (int)&v2 < 0;
    char v103 = __parity__((unsigned char)&v0 - 39);
    char v104 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x5) ^ (int)&v2) >>> 4) & 0x1);
    char v105 = (unsigned int)&v3 >= 0xfffffffb;
    char v106 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int*)~(int)(int*)((int)&v3 ^ 0x5)) < 0;
    ptr0 = &v2;
    v47 = 9;
    while(1) {
        char v107 = v47 ? 0: 1;
        char v108 = v47 < 0;
        char v109 = __parity__((unsigned char)v47);
        char v110 = (unsigned int)v47 < 0;
        char v111 = 0;
        char v112 = 0;
        if((v107 || v108 != 0)) {
            break;
        }
        else {
            ssize_t v113 = v47;
            int __c = (int)(v113 + 48);
            char** ptr30 = &ptr0;
            char v114 = &v0 == 52;
            char v115 = (int)&v4 < 0;
            char v116 = __parity__((unsigned char)&v0 - 52);
            char v117 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
            char v118 = (unsigned int)&ptr0 < 4;
            char v119 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
            void* ptr31 = &v3;
            void* ptr32 = memset(&v3, __c, 5);
            char** ptr33 = &ptr0;
            char v120 = &v0 == 52;
            char v121 = (int)&v4 < 0;
            char v122 = __parity__((unsigned char)&v0 - 52);
            char v123 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
            char v124 = (unsigned int)&ptr0 < 4;
            char v125 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
            char** ptr34 = &ptr0;
            void* ptr35 = &v3;
            long v126 = strtol((char*)&v3, &ptr0, 10);
            char** ptr36 = &ptr0;
            char v127 = &v0 == 56;
            char v128 = (int)&v5 < 0;
            char v129 = __parity__((unsigned char)&v0 - 56);
            char v130 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
            char v131 = (unsigned int)&ptr0 < 8;
            char v132 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
            int v133 = printf((char*)&gvar_804A086, v126, v5, v4);
            int* ptr37 = &v9;
            char v134 = &v0 == 48;
            char v135 = (int)&ptr0 < 0;
            char v136 = __parity__((unsigned char)&v0 - 48);
            char v137 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
            char v138 = (unsigned int)&v9 >= 0xfffffff0;
            char v139 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
            ssize_t v140 = v47;
            --v47;
            char v141 = v47 ? 0: 1;
            char v142 = v47 < 0;
            char v143 = __parity__((unsigned char)v47);
            char v144 = (((int)~v140 ^ (int)~v47) >>> 4) & 0x1;
            char v145 = ((int)(v140 ^ v47) & v140) < 0;
        }
    }
    char** ptr38 = &ptr0;
    char v146 = &v0 == 60;
    char v147 = (int)&v7 < 0;
    char v148 = __parity__((unsigned char)&v0 - 60);
    char v149 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v150 = (unsigned int)&ptr0 < 12;
    char v151 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    int v152 = printf("\n\n\tvariable test\n", v7, v5, v4);
    char** ptr39 = &ptr0;
    char v153 = &v0 == 52;
    char v154 = (int)&v4 < 0;
    char v155 = __parity__((unsigned char)&v0 - 52);
    char v156 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v157 = (unsigned int)&ptr0 < 4;
    char v158 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    ssize_t v159 = write(-1, NULL, 0);
    int* ptr40 = &v9;
    char v160 = &v0 == 48;
    char v161 = (int)&ptr0 < 0;
    char v162 = __parity__((unsigned char)&v0 - 48);
    char v163 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v164 = (unsigned int)&v9 >= 0xfffffff0;
    char v165 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
    unsigned int v166 = errno;
    char** ptr41 = &ptr0;
    char v167 = &v0 == 56;
    char v168 = (int)&v5 < 0;
    char v169 = __parity__((unsigned char)&v0 - 56);
    char v170 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
    char v171 = (unsigned int)&ptr0 < 8;
    char v172 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v173 = printf("errno: %d\n", v166);
    char** ptr42 = &ptr0;
    char v174 = &v0 == 60;
    char v175 = (int)&v7 < 0;
    char v176 = __parity__((unsigned char)&v0 - 60);
    char v177 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v178 = (unsigned int)&ptr0 < 12;
    char v179 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    int v180 = printf("\n\tenvironment test\nPress ENTER to print envrionment\n", v7, v5, v4);
    char** ptr43 = &ptr0;
    char v181 = &v0 == 52;
    char v182 = (int)&v4 < 0;
    char v183 = __parity__((unsigned char)&v0 - 52);
    char v184 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v185 = (unsigned int)&ptr0 < 4;
    char v186 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    void* ptr44 = &v1;
    ssize_t v187 = read(0, &v1, 1);
    int* ptr45 = &v9;
    char v188 = &v0 == 48;
    char v189 = (int)&ptr0 < 0;
    char v190 = __parity__((unsigned char)&v0 - 48);
    char v191 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v192 = (unsigned int)&v9 >= 0xfffffff0;
    char v193 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
    v47 = 0;
    while(1) {
        ssize_t v194 = v47;
        int v195 = v194 * 4;
        int v196 = param2;
        int v197 = param2;
        int* ptr46 = (int*)(v196 + v195);
        char v198 = ptr46 ? 0: 1;
        char v199 = (int)ptr46 < 0;
        char v200 = __parity__((unsigned char)ptr46);
        char v201 = (int*)((int)(int*)((int)(int*)((v195 ^ v197) ^ (int)ptr46) >>> 4) & 0x1);
        char v202 = __carry__(v195, v197);
        char v203 = (int)(int*)((int)(int*)((int)ptr46 ^ v197) & ~(v195 ^ v197)) < 0;
        int v204 = *ptr46;
        char v205 = v204 ? 0: 1;
        char v206 = v204 < 0;
        char v207 = __parity__((unsigned char)v204);
        char v208 = 0;
        char v209 = 0;
        if(v205) {
            break;
        }
        else {
            ssize_t v210 = v47;
            int v211 = v210 * 4;
            int v212 = param2;
            int v213 = param2;
            int* ptr47 = (int*)(v212 + v211);
            char v214 = ptr47 ? 0: 1;
            char v215 = (int)ptr47 < 0;
            char v216 = __parity__((unsigned char)ptr47);
            char v217 = (int*)((int)(int*)((int)(int*)((v211 ^ v213) ^ (int)ptr47) >>> 4) & 0x1);
            char v218 = __carry__(v211, v213);
            char v219 = (int)(int*)((int)(int*)((int)ptr47 ^ v213) & ~(v211 ^ v213)) < 0;
            int v220 = *ptr47;
            char** ptr48 = &ptr0;
            char v221 = &v0 == 56;
            char v222 = (int)&v5 < 0;
            char v223 = __parity__((unsigned char)&v0 - 56);
            char v224 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
            char v225 = (unsigned int)&ptr0 < 8;
            char v226 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
            int v227 = printf((char*)&gvar_804A0DD, v220, v5, v4);
            int* ptr49 = &v9;
            char v228 = &v0 == 48;
            char v229 = (int)&ptr0 < 0;
            char v230 = __parity__((unsigned char)&v0 - 48);
            char v231 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
            char v232 = (unsigned int)&v9 >= 0xfffffff0;
            char v233 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
            ssize_t v234 = v47;
            ++v47;
            char v235 = v47 ? 0: 1;
            char v236 = v47 < 0;
            char v237 = __parity__((unsigned char)v47);
            char v238 = (((v234 ^ 0x1) ^ v47) >>> 4) & 0x1;
            char v239 = ((int)(v234 ^ v47) & ~(v234 ^ 0x1)) < 0;
        }
    }
    char** ptr50 = &ptr0;
    char v240 = &v0 == 60;
    char v241 = (int)&v7 < 0;
    char v242 = __parity__((unsigned char)&v0 - 60);
    char v243 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v244 = (unsigned int)&ptr0 < 12;
    char v245 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    char* ptr51 = getenv("HOME");
    char** ptr52 = &ptr0;
    char v246 = &v0 == 56;
    char v247 = (int)&v5 < 0;
    char v248 = __parity__((unsigned char)&v0 - 56);
    char v249 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
    char v250 = (unsigned int)&ptr0 < 8;
    char v251 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v252 = printf("\n\tgetenv(\"HOME\") test\n%s\n", ptr51);
    char v253 = param0 == 1;
    char v254 = (int)param0 < 1;
    char v255 = __parity__((unsigned char)param0 - 1);
    char v256 = param0 < 1;
    char v257 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    char v258 = (((param0 - 1) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
    if(!v253 && v254 == v257) {
        char** ptr53 = &ptr0;
        char v259 = &v0 == 60;
        char v260 = (int)&v7 < 0;
        char v261 = __parity__((unsigned char)&v0 - 60);
        char v262 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
        char v263 = (unsigned int)&ptr0 < 12;
        char v264 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
        int v265 = printf("\n\targuments test\n", v7, v5, v4);
        int* ptr54 = &v9;
        char v266 = &v0 == 48;
        char v267 = (int)&ptr0 < 0;
        char v268 = __parity__((unsigned char)&v0 - 48);
        char v269 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
        char v270 = (unsigned int)&v9 >= 0xfffffff0;
        char v271 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
        unsigned int v272 = 0;
        while(1) {
            unsigned int v273 = v272;
            char v274 = v273 == param0;
            char v275 = (int)v273 < (int)param0;
            char v276 = __parity__((unsigned char)v273 - (unsigned char)param0);
            char v277 = v273 < param0;
            char v278 = (int)(((v273 - param0) ^ v273) & (v273 ^ param0)) < 0;
            char v279 = (((v273 - param0) ^ (v273 ^ param0)) >>> 4) & 0x1;
            if(v275 == v278) {
                break;
            }
            else {
                unsigned int v280 = v272;
                int v281 = v280 * 4;
                int v282 = param1;
                int v283 = param1;
                int* ptr55 = (int*)(v282 + v281);
                char v284 = ptr55 ? 0: 1;
                char v285 = (int)ptr55 < 0;
                char v286 = __parity__((unsigned char)ptr55);
                char v287 = (int*)((int)(int*)((int)(int*)((v281 ^ v283) ^ (int)ptr55) >>> 4) & 0x1);
                char v288 = __carry__(v281, v283);
                char v289 = (int)(int*)((int)(int*)((int)ptr55 ^ v283) & ~(v281 ^ v283)) < 0;
                int v290 = *ptr55;
                char** ptr56 = &ptr0;
                char v291 = &v0 == 56;
                char v292 = (int)&v5 < 0;
                char v293 = __parity__((unsigned char)&v0 - 56);
                char v294 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
                char v295 = (unsigned int)&ptr0 < 8;
                char v296 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
                int v297 = printf((char*)&gvar_804A0DD, v290, v5, v4);
                int* ptr57 = &v9;
                char v298 = &v0 == 48;
                char v299 = (int)&ptr0 < 0;
                char v300 = __parity__((unsigned char)&v0 - 48);
                char v301 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
                char v302 = (unsigned int)&v9 >= 0xfffffff0;
                char v303 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
                unsigned int v304 = v272;
                ++v272;
                char v305 = v272 ? 0: 1;
                char v306 = v272 >= 0x80000000;
                char v307 = __parity__((unsigned char)v272);
                char v308 = (((v304 ^ 0x1) ^ v272) >>> 4) & 0x1;
                char v309 = (int)((v304 ^ v272) & ~(v304 ^ 0x1)) < 0;
            }
        }
    }
    char** ptr58 = &ptr0;
    char v310 = &v0 == 60;
    char v311 = (int)&v7 < 0;
    char v312 = __parity__((unsigned char)&v0 - 60);
    char v313 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v314 = (unsigned int)&ptr0 < 12;
    char v315 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    int v316 = printf("\n\tall tests done\n", v7, v5, v4);
    int* ptr59 = &v9;
    char v317 = &v0 == 48;
    char v318 = (int)&ptr0 < 0;
    char v319 = __parity__((unsigned char)&v0 - 48);
    char v320 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v321 = (unsigned int)&v9 >= 0xfffffff0;
    char v322 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v9 ^ 0x10)) < 0;
    int v323 = 0;
    int* ptr60 = ptr3;
    int v324 = v17;
    int v325 = v16;
    int v326 = v17;
    int* ptr61 = &v16;
    jump v326;
}

int memcmp(void* __s1, void* __s2, size_t __n) {
    int result;
    void* ptr0;
    void* ptr1;
    size_t v0;
    int v1;
    size_t v2 = v0;
    int v3 = v1;
    char v4 = __cc ? 0: 1;
    char v5 = __cc < 0;
    if(v4) {
        ptr1 = __s1;
        ptr0 = __s2;
        v0 = __n;
    }
    while(v0 != 0) {
        v4 = *(char*)ptr1 == *(char*)ptr0;
        v5 = *(unsigned char*)ptr1 < *(unsigned char*)ptr0;
        ptr1 = (void*)((int)ptr1 + 1);
        ptr0 = (void*)((int)ptr0 + 1);
        --v0;
        if(!v4) {
            break;
        }
    }
    if(!v4) {
        result = v5 ? -1: 1;
    }
    return result;
}

void* memcpy(void* __dest, void* __src, size_t __n) {
    int v0;
    size_t v1;
    void* ptr0;
    int v2;
    void* ptr1;
    void* result = ptr1;
    size_t v3 = v1;
    void* ptr2 = ptr0;
    int v4 = v2;
    int* ptr3 = &v0;
    void* ptr4 = ptr1;
    void* ptr5 = ptr0;
    int v5 = v2;
    if(!__cc) {
        ptr4 = __dest;
        ptr5 = __src;
        v1 = __n;
    }
    while(v1 != 0) {
        *(char*)ptr4 = *(char*)ptr5;
        ptr5 = (void*)((int)ptr5 + 1);
        ptr4 = (void*)((int)ptr4 + 1);
        --v1;
    }
    return result;
}

void* memset(void* __s, int __c, size_t __n) {
    size_t v0;
    void* ptr0;
    int v1;
    void* result = ptr0;
    int v2 = v1;
    void* ptr1 = ptr0;
    if(!__cc) {
        ptr1 = __s;
        v2 = __c;
        v0 = __n;
    }
    void* ptr2 = ptr1;
    while(v0 != 0) {
        *(char*)ptr2 = (unsigned char)v2;
        ptr2 = (void*)((int)ptr2 + 1);
        --v0;
    }
    return result;
}

int mkdir(char* __path, __mode_t __mode) {
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v1;
    unsigned int* ptr2;
    unsigned int* ptr3;
    __system_call(v0, (int)__path, (unsigned int*)__mode, ptr1, v1, ptr2, ptr3);
    *ptr0 = (int*)(*ptr0 + (int)&v0);
}

int printf(char* __format, ...) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr0 = &v0;
    char v7 = &v0 == 0x1000;
    char v8 = (int)&v1 < 0;
    char v9 = __parity__((unsigned char)&v0);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x1000) ^ (int)&v1) >>> 4) & 0x1);
    char v11 = (unsigned int)&v0 < 0x1000;
    char v12 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v1) & (int)(int*)((int)&v0 ^ 0x1000)) < 0;
    char* ptr1 = &v1;
    int v13 = v3;
    int v14 = v5;
    int v15 = v4;
    int v16 = v6;
    char* ptr2 = &v1;
    int v17 = v0;
    char* ptr3 = &v1;
    int* ptr4 = &v2;
    char v18 = &v0 ? 0: 1;
    char v19 = (int)&v0 < 0;
    char v20 = __parity__((unsigned char)&v0);
    char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x1020) ^ (int)&v0) >>> 4) & 0x1);
    char v22 = (unsigned int)&v2 >= 0xffffefe0;
    char v23 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int*)~(int)(int*)((int)&v2 ^ 0x1020)) < 0;
    int v24 = sprintf(&v1, __format);
    int* ptr5 = &v0;
    char v25 = &v0 == 0x1020;
    char v26 = (int)&v2 < 0;
    char v27 = __parity__((unsigned char)&v0 - 32);
    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x1020) ^ (int)&v2) >>> 4) & 0x1);
    char v29 = (unsigned int)&v0 < 0x1020;
    char v30 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x1020)) < 0;
    int v31 = v24;
    char* ptr6 = &v1;
    int v32 = 1;
    int v33 = 4;
    int v34 = 4;
    int* ptr7 = &v2;
    interrupt(128);
}

ssize_t read(int __fd, void* __buf, size_t __nbytes) {
    int v0;
    int v1;
    unsigned int* ptr0;
    unsigned int* ptr1;
    __system_call(v0, __fd, (unsigned int*)__buf, (unsigned int*)__nbytes, v1, ptr0, ptr1);
}

int rmdir(char* __path) {
    int v0;
    int v1;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v2;
    unsigned int* ptr2;
    unsigned int* ptr3;
    int v3 = __system_call(v0, (int)__path, ptr0, ptr1, v2, ptr2, ptr3);
    *(int*)v3 = *(int*)v3 + v1;
}

__sighandler_t signal(int __sig, __sighandler_t __handler) {
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v1;
    unsigned int* ptr2;
    __system_call(v0, __sig, (unsigned int*)__handler, ptr0, v1, ptr1, ptr2);
    /*BAD_CALL!*/ __system_call(v0, __sig, (unsigned int*)__handler, ptr0, v1, ptr1, ptr2);
    __sighandler_t v2 = (__sighandler_t)__system_call(v0, __sig, (unsigned int*)__handler, ptr0, v1, ptr1, ptr2);
}

int sprintf(char* __s, char* __format, ...) {
    unsigned int v0;
    unsigned int v1;
    char* ptr0;
    int v2;
    int v3;
    int v4;
    char v5;
    char i;
    int v6;
    int v7;
    int v8;
    char v9;
    int v10 = (unsigned int)i | ((unsigned int)v3 << 8);
    int v11 = v7;
    int v12 = v6;
    int v13 = v4;
    int* ptr1 = &v2;
    unsigned int* ptr2 = &v5;
    char* ptr3 = __format;
    char* ptr4 = __s;
    char* ptr5 = __s;
sprintf.boucle:
    do {
        i = ptr3[0];
        ++ptr3;
        if(i) {
            if(i != 37) {
                ptr4[0] = i;
                ++ptr4;
                goto sprintf.boucle;
            }
            else {
                ptr0 = *ptr2;
                i = ptr3[0];
                ++ptr3;
                v1 = 10;
            }
            if(i != 100) {
                v1 = 16;
                if(i != 120) {
                    v1 = 8;
                    if(i != 111) {
                        v0 = 2;
                        v1 = 2;
                        if(i != 98) {
                            if(i == 99) {
                                ptr4[0] = i;
                                ++ptr4;
                            }
                            else if(i == 115 && !ptr0) {
                                ++ptr2;
                            }
                            else if(i == 115) {
                                for(i = *ptr0; *ptr0; i = *ptr0) {
                                    ptr4[0] = i;
                                    ++ptr4;
                                    ++ptr0;
                                }
                                ++ptr2;
                            }
                            goto sprintf.boucle;
                        }
                    }
                }
            }
            v0 = (unsigned int)i | ((unsigned int)v3 << 8);
            unsigned int v14 = v1;
            unsigned int* ptr6 = ptr2;
            char* ptr7 = ptr0;
            int* ptr8 = &ptr5;
            int v15 = v8;
            char* ptr9 = ptr3;
            char* ptr10 = ptr4;
            itoa.printB(v1);
            ptr4[0] = 0;
            char* ptr11 = ptr10;
            ptr3 = ptr9;
            v8 = v15;
            ptr2 = ptr6;
            v3 = (unsigned int)((v0 >>> 8) & 0xffffff);
            do {
                v9 = (unsigned char)ptr11[0] < 1;
                ++ptr11;
            }
            while(!v9);
            ptr4 = ptr11 - 1;
            ++ptr2;
            goto sprintf.boucle;
        }
    }
    while(i);
    ptr4[0] = 0;
    return (int)((char*)((int)(int*)(ptr4 + 1) - (int)ptr5) - 1);
}

int start() {
    int v0;
    /*NO_RETURN*/ __start_main(v0);
}

size_t strlen(char* __s) {
    char* ptr0;
    int v0;
    char v1;
    int v2 = v0;
    if(!__cc) {
        ptr0 = __s;
    }
    int v3 = 0;
    do {
        v1 = (unsigned char)ptr0[v3] < 1;
        ++v3;
    }
    while(!v1);
    return (size_t)(v3 - 1);
}

long strtol(char* __nptr, char** __endptr, int __base) {
    int v0;
    char* ptr0;
    int v1;
    char** ptr1;
    int v2 = v0;
    int v3 = v1;
    char* ptr2 = ptr0;
    char** ptr3 = ptr1;
    int v4 = v0;
    if(!__cc) {
        ptr2 = __nptr;
        ptr3 = __endptr;
        v1 = __base;
    }
    if(!v1) {
        v4 = 10;
        v1 = 10;
    }
    long result = 0;
    int v5 = 0;
    while(ptr2[0] == 32) {
        ++ptr2;
    }
    if(*(short*)&ptr2[0] == 30768) {
        v4 = 16;
        v1 = 16;
        ptr2 += 2;
    }
    do {
        v5 = (unsigned int)(ptr2[0] - 48) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        if((unsigned char)ptr2[0] < 48) {
            return result;
        }
        if((unsigned char)v5 > 9) {
            v5 = (unsigned int)((unsigned char)v5 - 7) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
            if((unsigned char)v5 > 35) {
                v5 = (unsigned int)((unsigned char)v5 - 32) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
            }
        }
        result = (long)((int)(result * v1) + v5);
        ++ptr2;
    }
    while(ptr3 != ptr2);
    return result;
}

int uname(int param0, unsigned int* param1, unsigned int* param2, int param3, unsigned int* param4, unsigned int* param5) {
    int v0;
    int v1;
    int v2;
    __system_call(v0, param0, param1, param2, param3, param4, param5);
    *(int*)(v1 - 24) = *(int*)(v1 - 24) + v2;
}

ssize_t write(int __fd, void* __buf, size_t __n) {
    int v0;
    int v1;
    unsigned int* ptr0;
    unsigned int* ptr1;
    __system_call(v0, __fd, (unsigned int*)__buf, (unsigned int*)__n, v1, ptr0, ptr1);
}
