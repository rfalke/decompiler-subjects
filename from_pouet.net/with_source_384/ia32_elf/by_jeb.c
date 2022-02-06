
int start(int param0, int param1) {
    int v0;
    char v1;
    void* ptr0;
    int v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = v0;
    int* ptr1 = &v1;
    char v10 = &v0 ? 0: 1;
    char v11 = (int)&v0 < 0;
    char v12 = __parity__((unsigned char)&v0);
    char v13 = 0;
    char v14 = 0;
    int v15 = v2;
    int* ptr2 = &v15;
    int* ptr3 = &v15;
    int v16 = param1;
    int v17 = &sub_80493A0;
    int v18 = &sub_80493B0;
    int* ptr4 = &v1;
    int v19 = &gvar_804922C;
    int* ptr5 = &ptr0;
    →__libc_start_main();
    hlt();
}

int sub_80487AA() {
    return gvar_804A110();
}

int* sub_8048990() {
    int* result;
    if(!gvar_804A188) {
        while(1) {
            result = gvar_804A184;
            int v0 = *result;
            if(!v0) {
                break;
            }
            else {
                gvar_804A184 = result + 1;
                v0{sub_804A00C}();
            }
        }
        gvar_804A188 = 1;
    }
    return result;
}

unsigned int sub_80489C0() {
    return 0;
}

int sub_80489E4(float param0, float param1, float param2, float param3, float param4, float param5, unsigned int param6, unsigned int param7, unsigned int param8) {
    int result;
    unsigned int v0;
    __SyntheticTypeUnknownF v1;
    double v2;
    unsigned int v3;
    int v4;
    int v5 = v4;
    if(param6 < 0x80000000) {
        int v6 = (int)0x43340000;
        __SyntheticTypeUnknownF v7 = 3.141592653589793 * param3 / 180.0 * param4 / 3.141592653589793;
        int v8 = v7;
        →sinf(v8);
        __SyntheticTypeUnknownF v9 = v7 * param5;
        float v10 = v9;
        →cosf(0x43340000);
        __SyntheticTypeUnknownF v11 = v9 * v9 + param0;
        float v12 = v11;
        →sinf(0x43340000);
        __SyntheticTypeUnknownF v13 = v11 * v9 + param1;
        float v14 = v13;
        →cosf(v8);
        float v15 = v13 * param5 + param2;
        float v16 = param5 * 0.5 * 1.4142135381698608;
        float v17 = param5 * 0.5 * 1.4142135381698608 * 0.800000011920929;
        if(param8 == 1) {
            unsigned int v18 = gvar_804A194;
            unsigned int v19 = gvar_804A18C;
            int v20 = v19 * 4 + &gvar_8084B18;
            int v21 = v18 * 4 + &gvar_80D2D18;
            float v22 = -1.5707964;
            unsigned int v23 = 0;
            while(1) {
                v3 = v23 + v18;
                double v24 = v22;
                v23 += 6;
                unsigned int v25 = v19 + 6;
                v20 += 24;
                v21 += 24;
                if(v23 == 18) {
                    break;
                }
                else {
                    double v26 = (double)v8;
                    int v27 = 0.7853981633974483 + v26;
                    →sinf(v27);
                    float v28 = 0.7853981633974483 + v26;
                    float v29 = (0.7853981633974483 + v26) * v16;
                    __SyntheticTypeUnknownF v30 = (float)(v6 + v22);
                    int v31 = v30;
                    →cosf(v30);
                    float v32 = v30;
                    __SyntheticTypeUnknownF v33 = v29 * v32 + param0;
                    *(int*)(v20 - 24) = v33;
                    →sinf(v31);
                    float v34 = v33;
                    __SyntheticTypeUnknownF v35 = v33 * v29 + param1;
                    *(int*)(v20 - 20) = v35;
                    →cosf(v27);
                    *(int*)(v20 - 16) = v16 * v35 + param2;
                    double v36 = param0;
                    __SyntheticTypeUnknownF v37 = 1.0 + v16;
                    __SyntheticTypeUnknownF v38 = v37 * v28;
                    double v39 = v32;
                    *(int*)(v21 - 24) = v39 * v38 + v36;
                    double v40 = param1;
                    double v41 = v34;
                    *(int*)(v21 - 20) = v38 * v41 + v40;
                    double v42 = param2;
                    __SyntheticTypeUnknownF v43 = v35 * v37;
                    *(int*)(v21 - 16) = v37 + v42;
                    int v44 = v26 - 0.7853981633974483;
                    v2 = v43;
                    →sinf(v44);
                    float v45 = v43;
                    __SyntheticTypeUnknownF v46 = v16 * v45;
                    *(int*)(v20 - 12) = v32 * v46 + param0;
                    __SyntheticTypeUnknownF v47 = v46 * v34 + param1;
                    *(int*)(v20 - 8) = v47;
                    →cosf(v44);
                    *(int*)(v20 - 4) = v16 * v47 + param2;
                    v1 = v2;
                    __SyntheticTypeUnknownF v48 = v1 * v45;
                    v39 *= v48;
                    *(int*)(v21 - 12) = v36 + v39;
                    *(int*)(v21 - 8) = v48 * v41 + v40;
                    __SyntheticTypeUnknownF v49 = v47 * v1 + v42;
                    v42 = v49;
                    *(int*)(v21 - 4) = v49;
                    v22 = v24 + 3.141592653589793;
                    v19 = v25;
                }
            }
            gvar_804A194 = v3;
            gvar_804A18C = v19;
        }
        unsigned int v50 = gvar_804A194;
        unsigned int v51 = gvar_804A194;
        unsigned int v52 = gvar_804A18C;
        int v53 = v52 * 4 + &gvar_8084B18;
        int v54 = v50 * 4 + &gvar_80D2D18;
        float v55 = -1.5707964;
        unsigned int v56 = 0;
        while(1) {
            v0 = v56 + v51;
            double v57 = v55;
            v56 += 6;
            unsigned int v58 = v52 + 6;
            v53 += 24;
            v54 += 24;
            if(v56 == 18) {
                break;
            }
            else {
                double v59 = (double)v8;
                int v60 = 0.7853981633974483 + v59;
                →sinf(v60);
                float v61 = 0.7853981633974483 + v59;
                float v62 = (0.7853981633974483 + v59) * v17;
                __SyntheticTypeUnknownF v63 = (float)(v6 + v55);
                int v64 = v63;
                →cosf(v63);
                float v65 = v63;
                __SyntheticTypeUnknownF v66 = v62 * v65 + v12;
                *(int*)(v53 - 24) = v66;
                →sinf(v64);
                float v67 = v66;
                __SyntheticTypeUnknownF v68 = v66 * v62 + v14;
                *(int*)(v53 - 20) = v68;
                →cosf(v60);
                *(int*)(v53 - 16) = v17 * v68 + v15;
                double v69 = v12;
                __SyntheticTypeUnknownF v70 = 1.0 + v17;
                __SyntheticTypeUnknownF v71 = v70 * v61;
                double v72 = v65;
                *(int*)(v54 - 24) = v72 * v71 + v69;
                double v73 = v14;
                double v74 = v67;
                *(int*)(v54 - 20) = v71 * v74 + v73;
                double v75 = v15;
                __SyntheticTypeUnknownF v76 = v68 * v70;
                *(int*)(v54 - 16) = v70 + v75;
                int v77 = v59 - 0.7853981633974483;
                v2 = v76;
                →sinf(v77);
                float v78 = v76;
                __SyntheticTypeUnknownF v79 = v17 * v78;
                *(int*)(v53 - 12) = v65 * v79 + v12;
                __SyntheticTypeUnknownF v80 = v79 * v67 + v14;
                *(int*)(v53 - 8) = v80;
                →cosf(v77);
                *(int*)(v53 - 4) = v17 * v80 + v15;
                v1 = v2;
                __SyntheticTypeUnknownF v81 = v1 * v78;
                v72 *= v81;
                *(int*)(v54 - 12) = v69 + v72;
                *(int*)(v54 - 8) = v81 * v74 + v73;
                __SyntheticTypeUnknownF v82 = v80 * v1 + v75;
                v75 = v82;
                *(int*)(v54 - 4) = v82;
                v55 = v57 + 3.141592653589793;
                v52 = v58;
            }
        }
        gvar_804A194 = v0;
        gvar_804A18C = v52;
        unsigned int v83 = v52 / 3;
        unsigned int v84 = v52 / 3 - 8;
        unsigned int v85 = gvar_804A190;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A198) = v52 / 3 - 8;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A19C) = v52 / 3 - 7;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1A0) = v52 / 3 - 3;
        unsigned int v86 = v52 / 3 - 4;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1A4) = v52 / 3 - 4;
        unsigned int v87 = v52 / 3 - 6;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1A8) = v52 / 3 - 6;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1AC) = v52 / 3 - 5;
        *(unsigned int*)(gvar_804A190 * 4 + (int)&gvar_804A1B0) = v52 / 3 - 1;
        unsigned int v88 = gvar_804A190;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1B4) = v52 / 3 - 2;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1B8) = v52 / 3 - 7;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1BC) = v52 / 3 - 3;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1C0) = v52 / 3 - 1;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1C4) = v52 / 3 - 5;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1C8) = v52 / 3 - 8;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1CC) = v52 / 3 - 4;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1D0) = v52 / 3 - 2;
        *(unsigned int*)(v88 * 4 + (int)&gvar_804A1D4) = v52 / 3 - 6;
        gvar_804A190 = v88 + 16;
        int v89 = (v17 + v17) / 1.4142135381698608;
        result = sub_80489E4((int)v12, (int)v14, (int)v15, (int)param3, param4 + 10.0, (v17 + v17) / 1.4142135381698608, param6 - 1);
        if(param7) {
            float v90 = -90.0;
            unsigned int v91 = 0;
            do {
                int v92 = 1;
                unsigned int v93 = 0;
                sub_80489E4((int)v12, (int)v14, (int)v15, param3 + v90, (int)param4, v89, param6 - 1);
                v92 = 1;
                v93 = 0;
                result = sub_80489E4((int)v12, (int)v14, (int)v15, (int)param3, param4 + v90, v89, param6 - 1);
                v90 += 180.0;
                ++v91;
            }
            while(v91 != 2);
        }
    }
    return result;
}

int sub_804908A() {
    int result;
    gvar_804A190 = 0;
    gvar_804A18C = 0;
    gvar_804A194 = 0;
    float v0 = 0.0;
    unsigned int v1 = 0;
    do {
        sub_80489E4(0.0, 0.0, 0.0, 0.0, v0, 0.1, 14, 1, 1);
        v0 += 90.0;
        ++v1;
    }
    while(v1 != 4);
    sub_80489E4(0.0, 0.0, 0.0, 90.0, 90.0, 0.1, 14, 1, 1);
    sub_80489E4(0.0, 0.0, 0.0, 270.0, 90.0, 0.1, 14, 1, 1);
    →glNormalPointer();
    →glColor4f();
    →glVertexPointer();
    →glPushMatrix();
    →glRotatef();
    →glDrawElements();
    →glPopMatrix();
    gvar_8084B18 = 0xbf000000;
    gvar_8084B1C = 0xbf000000;
    gvar_8084B20 = 0xbf000000;
    gvar_804A198 = 0;
    gvar_8084B24 = 0x3f000000;
    gvar_8084B28 = 0xbf000000;
    gvar_8084B2C = 0xbf000000;
    gvar_804A19C = 1;
    gvar_8084B30 = 0x3f000000;
    gvar_8084B34 = 0x3f000000;
    gvar_8084B38 = 0xbf000000;
    gvar_804A1A0 = 2;
    gvar_8084B3C = 0xbf000000;
    gvar_8084B40 = 0x3f000000;
    gvar_8084B44 = 0xbf000000;
    gvar_804A1A4 = 3;
    →glDrawElements();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049236(int param0) {
    char v0;
    void* ptr0;
    char v1;
    int v2;
    char v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    char v8;
    int v9;
    int v10;
    unsigned char v11;
    int v12;
    char v13;
    int v14;
    long long v15;
    char v16;
    char v17;
    int v18 = v2;
    int* ptr1 = &v18;
    int v19 = v5;
    int v20 = v9;
    int v21 = param0;
    int* ptr2 = &v21;
    char v22 = &v0 == 64;
    char v23 = (int)&ptr0 < 0;
    char v24 = __parity__((unsigned char)&v0 - 64);
    char v25 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x30) ^ (int)&ptr0) >>> 4) & 0x1);
    char v26 = (unsigned int)&v21 < 48;
    char v27 = (int)(int*)((int)(int*)((int)&v21 ^ (int)&ptr0) & (int)(int*)((int)&v21 ^ 0x30)) < 0;
    int v28 = &v13;
    →memcpy(&v13, &gvar_8049460, 12);
    →SDL_Init();
    →SDL_SetVideoMode();
    int* ptr3 = &v14;
    char v29 = &v0 == 72;
    char v30 = (int)&v6 < 0;
    char v31 = __parity__((unsigned char)&v0 - 72);
    char v32 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v14 ^ 0x14) ^ (int)&v6) >>> 4) & 0x1);
    char v33 = (unsigned int)&v14 >= 0xffffffec;
    char v34 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v14) & (int*)~(int)(int*)((int)&v14 ^ 0x14)) < 0;
    →SDL_ShowCursor();
    int v35 = 0;
    char v36 = 1;
    char v37 = 0;
    char v38 = 1;
    char v39 = 0;
    char v40 = 0;
    →glClearColor();
    int* ptr4 = &v14;
    char v41 = &v0 == 72;
    char v42 = (int)&v6 < 0;
    char v43 = __parity__((unsigned char)&v0 - 72);
    char v44 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v14 ^ 0x14) ^ (int)&v6) >>> 4) & 0x1);
    char v45 = (unsigned int)&v14 >= 0xffffffec;
    char v46 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v14) & (int*)~(int)(int*)((int)&v14 ^ 0x14)) < 0;
    →glMatrixMode();
    →glLoadIdentity();
    →glEnable();
    →glEnable();
    →glEnable();
    →glEnable();
    →glEnableClientState();
    →glEnableClientState();
    char v47 = 6;
    __int128 v48 = 0.5;
    int* ptr5 = &v14;
    char v49 = &v0 == 124;
    char v50 = (int)&v15 < 0;
    char v51 = __parity__((unsigned char)&v0 - 124);
    char v52 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v14 ^ 0x20) ^ (int)&v15) >>> 4) & 0x1);
    char v53 = (unsigned int)&v14 < 32;
    char v54 = (int)(int*)((int)(int*)((int)&v14 ^ (int)&v15) & (int)(int*)((int)&v14 ^ 0x20)) < 0;
    *(long long*)&v3 = 0.5;
    char v55 = 5;
    __int128 v56 = -0.5;
    long long v57 = 0xbfe0000000000000L;
    __int128 v58 = -0.5;
    __int128 v59 = -0.5;
    __int128 v60 = -0.5;
    long long v61 = 0xbfe0000000000000L;
    char v62 = 6;
    v15 = 0x3fe0000000000000L;
    char v63 = 7;
    →glOrtho();
    long long* ptr6 = &v15;
    char v64 = &v0 == 64;
    char v65 = (int)&ptr0 < 0;
    char v66 = __parity__((unsigned char)&v0 - 64);
    char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v15 ^ 0x3c) ^ (int)&ptr0) >>> 4) & 0x1);
    char v68 = (unsigned int)&v15 >= 0xffffffc4;
    char v69 = (int)(int*)((int)(int*)((int)&v15 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v15 ^ 0x3c)) < 0;
    int v70 = &v13;
    v6 = 4611;
    →glLightfv();
    int v71 = 0;
    int* ptr7 = &v10;
    char v72 = &v0 == 60;
    char v73 = (int)&v16 < 0;
    char v74 = __parity__((unsigned char)&v0 - 60);
    char v75 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x10) ^ (int)&v16) >>> 4) & 0x1);
    char v76 = (unsigned int)&v10 >= 0xfffffff0;
    char v77 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v16) & (int*)~(int)(int*)((int)&v10 ^ 0x10)) < 0;
    char* ptr8 = &v11;
loc_8049341:
    do {
        int* ptr9 = &v16;
        char v78 = &v0 == 72;
        char v79 = (int)&v6 < 0;
        char v80 = __parity__((unsigned char)&v0 - 72);
        char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v16 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
        char v82 = (unsigned int)&v16 < 12;
        char v83 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v16) & (int)(int*)((int)&v16 ^ 0xc)) < 0;
        →SDL_PollEvent();
        char v84 = v12 ? 0: 1;
        char v85 = v12 < 0;
        char v86 = __parity__(v17);
        char v87 = 0;
        char v88 = 0;
        if(!v84) {
            char v89 = v11 == 2;
            char v90 = (char)v11 < 2;
            char v91 = __parity__(v11 - 2);
            char v92 = v11 < 2;
            char v93 = (((v11 - 2) ^ v11) & (v11 ^ 0x2)) < 0;
            char v94 = (((v11 - 2) ^ (v11 ^ 0x2)) >>> 4) & 0x1;
            if(v89) {
                char v95 = v7 == 27;
                char v96 = (int)v7 < 27;
                char v97 = __parity__((unsigned char)v7 - 27);
                char v98 = v7 < 27;
                char v99 = (((v7 - 27) ^ v7) & (v7 ^ 0x1b)) < 0;
                char v100 = (((v7 - 27) ^ (v7 ^ 0x1b)) >>> 4) & 0x1;
                if(v95) {
                    v71 = 1;
                }
            }
            goto loc_8049341;
        }
        else {
            int* ptr10 = &v16;
            char v101 = &v0 == 72;
            char v102 = (int)&v6 < 0;
            char v103 = __parity__((unsigned char)&v0 - 72);
            char v104 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v16 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
            char v105 = (unsigned int)&v16 < 12;
            char v106 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v16) & (int)(int*)((int)&v16 ^ 0xc)) < 0;
            →glClear();
            int v107 = 0x3f800000;
            int v108 = 0x3f800000;
            int v109 = 0x3f800000;
            v14 = 0x3f800000;
            →glColor4f();
            int* ptr11 = &v14;
            char v110 = &v0 == 60;
            char v111 = (int)&v16 < 0;
            char v112 = __parity__((unsigned char)&v0 - 60);
            char v113 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v14 ^ 0x20) ^ (int)&v16) >>> 4) & 0x1);
            char v114 = (unsigned int)&v14 >= 0xffffffe0;
            char v115 = (int)(int*)((int)(int*)((int)&v14 ^ (int)&v16) & (int*)~(int)(int*)((int)&v14 ^ 0x20)) < 0;
            int v116 = sub_804908A();
            →SDL_GL_SwapBuffers();
            v8 = v71 ? 0: 1;
            char v117 = v71 < 0;
            char v118 = __parity__((unsigned char)v71);
            char v119 = 0;
            char v120 = 0;
        }
    }
    while(v8);
    int* ptr12 = &v16;
    char v121 = &v0 == 72;
    char v122 = (int)&v6 < 0;
    char v123 = __parity__((unsigned char)&v0 - 72);
    char v124 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v16 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
    char v125 = (unsigned int)&v16 < 12;
    char v126 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v16) & (int)(int*)((int)&v16 ^ 0xc)) < 0;
    v10 = 1;
    →SDL_ShowCursor();
    →SDL_Quit();
    int v127 = 0;
    char v128 = 1;
    char v129 = 0;
    char v130 = 1;
    char v131 = 0;
    char v132 = 0;
    int v133 = v21;
    int v134 = v20;
    int v135 = v19;
    int v136 = v18;
    int v137 = v4;
    int* ptr13 = &v1;
    jump v137;
}

void sub_80493A0() {
}

int sub_80493B0() {
    initializer_0();
    return &gvar_804A000;
}

void sub_804940A() {
}

unsigned int sub_8049410() {
    int v0;
    int v1 = v0;
    unsigned int v2 = gvar_804A000;
    if(v2 != -1) {
        int v3 = 0;
        do {
            v2();
            v2 = *(unsigned int*)(v3 + 134520828);
            v3 -= 4;
        }
        while(v2 != -1);
    }
    return -1;
}
