
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

int main(void* param0, size_t param1) {
    int v0;
    int* ptr0;
    char v1;
    int v2;
    unsigned int v3;
    int __fd;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    char v9;
    char v10;
    char v11;
    int* ptr1 = &v1;
    char v12 = &v0 == 16;
    char v13 = (int)&v4 < 0;
    char v14 = __parity__((unsigned char)&v0 - 16);
    char v15 = 0;
    char v16 = 0;
    int v17 = v0;
    int v18 = v2;
    int* ptr2 = &v18;
    int* ptr3 = &v1;
    int* ptr4 = &ptr3;
    char v19 = &v0 == 80;
    char v20 = (int)&__fd < 0;
    char v21 = __parity__((unsigned char)&v0 - 80);
    char v22 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x34) ^ (int)&__fd) >>> 4) & 0x1);
    char v23 = (unsigned int)&ptr3 < 52;
    char v24 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&__fd) & (int)(int*)((int)&ptr3 ^ 0x34)) < 0;
    unsigned int v25 = v3;
    size_t __nbytes = param1;
    void* __buf = param0;
    int v26 = 3;
    unsigned char v27 = _fastcall();
    int v28 = printf("\n\tprintf() test\nhex: %x, octal: %o, decimal: %d\n", 16, 8, 10);
    int* ptr5 = &__fd;
    char v29 = &v0 == 92;
    char v30 = (int)&v7 < 0;
    char v31 = __parity__((unsigned char)&v0 - 92);
    char v32 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v33 = (unsigned int)&__fd < 12;
    char v34 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0xc)) < 0;
    int v35 = printf("\n\tstrtol() test\nInput some decimal number: ", v7, v6, v5);
    int* ptr6 = &v8;
    char v36 = &v0 == 80;
    char v37 = (int)&__fd < 0;
    char v38 = __parity__((unsigned char)&v0 - 80);
    char v39 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
    char v40 = (unsigned int)&v8 >= 0xfffffff0;
    char v41 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
    int* ptr7 = &v9;
    int v42 = 10;
    int* ptr8 = &v9;
    int v43 = 0;
    ssize_t v44 = read(__fd, __buf, __nbytes);
    ssize_t v45 = v44;
    ssize_t v46 = v44;
    int* ptr9 = &v9;
    int* ptr10 = &v11;
    void* ptr11 = memcpy((void*)__fd, __buf, __nbytes);
    ssize_t v47 = v45;
    int v48 = v47 - 1;
    int* ptr12 = &v11;
    int* ptr13 = &v11;
    int* ptr14 = (int*)(v48 + (int)&v11);
    char v49 = &v0 == 61;
    char v50 = (int)(int*)((char*)&ptr0 + 3) < 0;
    char v51 = __parity__((unsigned char)&v0 - 61);
    char v52 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)&ptr0 + 3) ^ (int)(int*)(v48 ^ (int)&v11)) >>> 4) & 0x1);
    char v53 = __carry__(v48, (int)&v11);
    char v54 = (int)(int*)((int)(int*)((int)(int*)((char*)&ptr0 + 3) ^ (int)&v11) & (int*)~(int)(int*)(v48 ^ (int)&v11)) < 0;
    ptr0 = (int*)((char*)&ptr0 + 3);
    int* ptr15 = &ptr0;
    int* ptr16 = &v11;
    int v55 = 10;
    long v56 = strtol((char*)__fd, (char**)__buf, (int)__nbytes);
    int* ptr17 = &__fd;
    char v57 = &v0 == 88;
    char v58 = (int)&v6 < 0;
    char v59 = __parity__((unsigned char)&v0 - 88);
    char v60 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
    char v61 = (unsigned int)&__fd < 8;
    char v62 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0x8)) < 0;
    int v63 = printf("You have entered %d\n", v56);
    int* ptr18 = &__fd;
    char v64 = &v0 == 92;
    char v65 = (int)&v7 < 0;
    char v66 = __parity__((unsigned char)&v0 - 92);
    char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v68 = (unsigned int)&__fd < 12;
    char v69 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0xc)) < 0;
    int v70 = printf("\n\tmemset() test\n", v7, v6, v5);
    int* ptr19 = &v8;
    char v71 = &v0 == 80;
    char v72 = (int)&__fd < 0;
    char v73 = __parity__((unsigned char)&v0 - 80);
    char v74 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
    char v75 = (unsigned int)&v8 >= 0xfffffff0;
    char v76 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
    int* ptr20 = &v11;
    int v77 = 10;
    int v78 = 0;
    void* ptr21 = memset((void*)__fd, (int)__buf, __nbytes);
    int* ptr22 = &v11;
    int* ptr23 = &v11;
    int* ptr24 = &v10;
    char v79 = &v0 == 55;
    char v80 = (int)&v10 < 0;
    char v81 = __parity__((unsigned char)&v0 - 55);
    char v82 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0x5) ^ (int)&v10) >>> 4) & 0x1);
    char v83 = (unsigned int)&v11 >= 0xfffffffb;
    char v84 = (int)(int*)((int)(int*)((int)&v11 ^ (int)&v10) & (int*)~(int)(int*)((int)&v11 ^ 0x5)) < 0;
    ptr0 = &v10;
    v45 = 9;
    while(1) {
        char v85 = v45 ? 0: 1;
        char v86 = v45 < 0;
        char v87 = __parity__((unsigned char)v45);
        char v88 = (unsigned int)v45 < 0;
        char v89 = 0;
        char v90 = 0;
        if((v85 || v86 != 0)) {
            break;
        }
        else {
            ssize_t v91 = v45;
            int v92 = v91 + 48;
            int* ptr25 = &v11;
            int v93 = 5;
            void* ptr26 = memset((void*)__fd, (int)__buf, __nbytes);
            int* ptr27 = &ptr0;
            int* ptr28 = &v11;
            int v94 = 10;
            long v95 = strtol((char*)__fd, (char**)__buf, (int)__nbytes);
            int* ptr29 = &__fd;
            char v96 = &v0 == 88;
            char v97 = (int)&v6 < 0;
            char v98 = __parity__((unsigned char)&v0 - 88);
            char v99 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
            char v100 = (unsigned int)&__fd < 8;
            char v101 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0x8)) < 0;
            int v102 = printf((char*)&gvar_804A086, v95, v6, v5);
            int* ptr30 = &v8;
            char v103 = &v0 == 80;
            char v104 = (int)&__fd < 0;
            char v105 = __parity__((unsigned char)&v0 - 80);
            char v106 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
            char v107 = (unsigned int)&v8 >= 0xfffffff0;
            char v108 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
            ssize_t v109 = v45;
            --v45;
            char v110 = v45 ? 0: 1;
            char v111 = v45 < 0;
            char v112 = __parity__((unsigned char)v45);
            char v113 = (((int)~v109 ^ (int)~v45) >>> 4) & 0x1;
            char v114 = ((int)(v109 ^ v45) & v109) < 0;
        }
    }
    int* ptr31 = &__fd;
    char v115 = &v0 == 92;
    char v116 = (int)&v7 < 0;
    char v117 = __parity__((unsigned char)&v0 - 92);
    char v118 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v119 = (unsigned int)&__fd < 12;
    char v120 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0xc)) < 0;
    int v121 = printf("\n\n\tvariable test\n", v7, v6, v5);
    int* ptr32 = &v8;
    char v122 = &v0 == 80;
    char v123 = (int)&__fd < 0;
    char v124 = __parity__((unsigned char)&v0 - 80);
    char v125 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
    char v126 = (unsigned int)&v8 >= 0xfffffff0;
    char v127 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
    int v128 = 0;
    int v129 = 0;
    int v130 = -1;
    ssize_t v131 = write(__fd, __buf, __nbytes);
    unsigned int v132 = errno;
    int* ptr33 = &__fd;
    char v133 = &v0 == 88;
    char v134 = (int)&v6 < 0;
    char v135 = __parity__((unsigned char)&v0 - 88);
    char v136 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
    char v137 = (unsigned int)&__fd < 8;
    char v138 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0x8)) < 0;
    int v139 = printf("errno: %d\n", v132);
    int* ptr34 = &__fd;
    char v140 = &v0 == 92;
    char v141 = (int)&v7 < 0;
    char v142 = __parity__((unsigned char)&v0 - 92);
    char v143 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v144 = (unsigned int)&__fd < 12;
    char v145 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0xc)) < 0;
    int v146 = printf("\n\tenvironment test\nPress ENTER to print envrionment\n", v7, v6, v5);
    int* ptr35 = &v8;
    char v147 = &v0 == 80;
    char v148 = (int)&__fd < 0;
    char v149 = __parity__((unsigned char)&v0 - 80);
    char v150 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
    char v151 = (unsigned int)&v8 >= 0xfffffff0;
    char v152 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
    int* ptr36 = &v9;
    int v153 = 1;
    int* ptr37 = &v9;
    int v154 = 0;
    ssize_t v155 = read(__fd, __buf, __nbytes);
    v45 = 0;
    while(1) {
        ssize_t v156 = v45;
        int v157 = v156 * 4;
        void* ptr38 = __buf;
        void* ptr39 = __buf;
        int* ptr40 = (int*)((int)ptr38 + v157);
        char v158 = ptr40 ? 0: 1;
        char v159 = (int)ptr40 < 0;
        char v160 = __parity__((unsigned char)ptr40);
        char v161 = (int*)((int)(int*)((int)(int*)((int)(int*)(v157 ^ (int)ptr39) ^ (int)ptr40) >>> 4) & 0x1);
        char v162 = __carry__(v157, (int)ptr39);
        char v163 = (int)(int*)((int)(int*)((int)ptr40 ^ (int)ptr39) & (int*)~(int)(int*)(v157 ^ (int)ptr39)) < 0;
        int v164 = *ptr40;
        char v165 = v164 ? 0: 1;
        char v166 = v164 < 0;
        char v167 = __parity__((unsigned char)v164);
        char v168 = 0;
        char v169 = 0;
        if(v165) {
            break;
        }
        else {
            ssize_t v170 = v45;
            int v171 = v170 * 4;
            void* ptr41 = __buf;
            void* ptr42 = __buf;
            int* ptr43 = (int*)((int)ptr41 + v171);
            char v172 = ptr43 ? 0: 1;
            char v173 = (int)ptr43 < 0;
            char v174 = __parity__((unsigned char)ptr43);
            char v175 = (int*)((int)(int*)((int)(int*)((int)(int*)(v171 ^ (int)ptr42) ^ (int)ptr43) >>> 4) & 0x1);
            char v176 = __carry__(v171, (int)ptr42);
            char v177 = (int)(int*)((int)(int*)((int)ptr43 ^ (int)ptr42) & (int*)~(int)(int*)(v171 ^ (int)ptr42)) < 0;
            int v178 = *ptr43;
            int* ptr44 = &__fd;
            char v179 = &v0 == 88;
            char v180 = (int)&v6 < 0;
            char v181 = __parity__((unsigned char)&v0 - 88);
            char v182 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
            char v183 = (unsigned int)&__fd < 8;
            char v184 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0x8)) < 0;
            int v185 = printf((char*)&gvar_804A0DD, v178, v6, v5);
            int* ptr45 = &v8;
            char v186 = &v0 == 80;
            char v187 = (int)&__fd < 0;
            char v188 = __parity__((unsigned char)&v0 - 80);
            char v189 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
            char v190 = (unsigned int)&v8 >= 0xfffffff0;
            char v191 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
            ssize_t v192 = v45;
            ++v45;
            char v193 = v45 ? 0: 1;
            char v194 = v45 < 0;
            char v195 = __parity__((unsigned char)v45);
            char v196 = (((v192 ^ 0x1) ^ v45) >>> 4) & 0x1;
            char v197 = ((int)(v192 ^ v45) & ~(v192 ^ 0x1)) < 0;
        }
    }
    int v198 = "HOME";
    char* ptr46 = getenv((char*)__fd);
    int* ptr47 = &__fd;
    char v199 = &v0 == 88;
    char v200 = (int)&v6 < 0;
    char v201 = __parity__((unsigned char)&v0 - 88);
    char v202 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
    char v203 = (unsigned int)&__fd < 8;
    char v204 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0x8)) < 0;
    int v205 = printf("\n\tgetenv(\"HOME\") test\n%s\n", ptr46);
    char v206 = v25 == 1;
    char v207 = (int)v25 < 1;
    char v208 = __parity__((unsigned char)v25 - 1);
    char v209 = v25 < 1;
    char v210 = (((v25 - 1) ^ v25) & (v25 ^ 0x1)) < 0;
    char v211 = (((v25 - 1) ^ (v25 ^ 0x1)) >>> 4) & 0x1;
    if(!v206 && v207 == v210) {
        int* ptr48 = &__fd;
        char v212 = &v0 == 92;
        char v213 = (int)&v7 < 0;
        char v214 = __parity__((unsigned char)&v0 - 92);
        char v215 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
        char v216 = (unsigned int)&__fd < 12;
        char v217 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0xc)) < 0;
        int v218 = printf("\n\targuments test\n", v7, v6, v5);
        int* ptr49 = &v8;
        char v219 = &v0 == 80;
        char v220 = (int)&__fd < 0;
        char v221 = __parity__((unsigned char)&v0 - 80);
        char v222 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
        char v223 = (unsigned int)&v8 >= 0xfffffff0;
        char v224 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
        unsigned int v225 = 0;
        while(1) {
            unsigned int v226 = v225;
            char v227 = v226 == v25;
            char v228 = (int)v226 < (int)v25;
            char v229 = __parity__((unsigned char)v226 - (unsigned char)v25);
            char v230 = v226 < v25;
            char v231 = (int)(((v226 - v25) ^ v226) & (v226 ^ v25)) < 0;
            char v232 = (((v226 - v25) ^ (v226 ^ v25)) >>> 4) & 0x1;
            if(v228 == v231) {
                break;
            }
            else {
                unsigned int v233 = v225;
                int v234 = v233 * 4;
                size_t v235 = __nbytes;
                size_t v236 = __nbytes;
                int* ptr50 = (int*)(v235 + v234);
                char v237 = ptr50 ? 0: 1;
                char v238 = (int)ptr50 < 0;
                char v239 = __parity__((unsigned char)ptr50);
                char v240 = (int*)((int)(int*)((int)(int*)((v234 ^ v236) ^ (int)ptr50) >>> 4) & 0x1);
                char v241 = __carry__(v234, v236);
                char v242 = (int)(int*)((int)(int*)((int)ptr50 ^ v236) & ~(v234 ^ v236)) < 0;
                int v243 = *ptr50;
                int* ptr51 = &__fd;
                char v244 = &v0 == 88;
                char v245 = (int)&v6 < 0;
                char v246 = __parity__((unsigned char)&v0 - 88);
                char v247 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
                char v248 = (unsigned int)&__fd < 8;
                char v249 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0x8)) < 0;
                int v250 = printf((char*)&gvar_804A0DD, v243, v6, v5);
                int* ptr52 = &v8;
                char v251 = &v0 == 80;
                char v252 = (int)&__fd < 0;
                char v253 = __parity__((unsigned char)&v0 - 80);
                char v254 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
                char v255 = (unsigned int)&v8 >= 0xfffffff0;
                char v256 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
                unsigned int v257 = v225;
                ++v225;
                char v258 = v225 ? 0: 1;
                char v259 = v225 >= 0x80000000;
                char v260 = __parity__((unsigned char)v225);
                char v261 = (((v257 ^ 0x1) ^ v225) >>> 4) & 0x1;
                char v262 = (int)((v257 ^ v225) & ~(v257 ^ 0x1)) < 0;
            }
        }
    }
    int* ptr53 = &__fd;
    char v263 = &v0 == 92;
    char v264 = (int)&v7 < 0;
    char v265 = __parity__((unsigned char)&v0 - 92);
    char v266 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&__fd ^ 0xc) ^ (int)&v7) >>> 4) & 0x1);
    char v267 = (unsigned int)&__fd < 12;
    char v268 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&__fd) & (int)(int*)((int)&__fd ^ 0xc)) < 0;
    int v269 = printf("\n\tall tests done\n", v7, v6, v5);
    int* ptr54 = &v8;
    char v270 = &v0 == 80;
    char v271 = (int)&__fd < 0;
    char v272 = __parity__((unsigned char)&v0 - 80);
    char v273 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0x10) ^ (int)&__fd) >>> 4) & 0x1);
    char v274 = (unsigned int)&v8 >= 0xfffffff0;
    char v275 = (int)(int*)((int)(int*)((int)&v8 ^ (int)&__fd) & (int*)~(int)(int*)((int)&v8 ^ 0x10)) < 0;
    int v276 = 0;
    int* ptr55 = ptr3;
    int v277 = v18;
    int v278 = __fd;
    void* ptr56 = __buf;
    int* ptr57 = &__nbytes;
    jump ptr56;
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
