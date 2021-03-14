
int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_80487A4() {
    jump gvar_804A110;
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

int sub_80489E4(float param0, float param1, float param2, float param3, float param4, float param5, int param6, int param7, int param8) {
    int result;
    unsigned int v0;
    double v1;
    unsigned int v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknownF v4;
    char v5;
    __SyntheticTypeUnknownF v6;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    __SyntheticTypeUnknownF v9;
    __SyntheticTypeUnknownF v10;
    __SyntheticTypeUnknownF v11;
    __SyntheticTypeUnknownF v12;
    __SyntheticTypeUnknownF v13;
    __SyntheticTypeUnknownF v14;
    __SyntheticTypeUnknownF v15;
    __SyntheticTypeUnknownF v16;
    __SyntheticTypeUnknownF v17;
    __SyntheticTypeUnknownF v18;
    __SyntheticTypeUnknownF v19;
    __SyntheticTypeUnknownF v20;
    __SyntheticTypeUnknownF v21;
    __SyntheticTypeUnknownF v22;
    __SyntheticTypeUnknownF v23;
    if(param6 >= 0) {
        float v24 = 180.0;
        v3[v5 + 1] = fdivrp(3.141592653589793, 3.141592653589793 * param3 / 180.0 * param4);
        float __x = v20;
        v3[v5] = →sinf(__x);
        float v25 = v8 * param5;
        v3[v5] = →cosf(180.0);
        float v26 = v13 * v25 + param0;
        v3[v5] = →sinf(180.0);
        float v27 = v7 * v25 + param1;
        v3[v5] = →cosf(__x);
        float v28 = v19 * param5 + param2;
        float v29 = param5 * 0.5 * 1.4142135;
        float v30 = param5 * 0.5 * 1.4142135 * 0.800000011920929;
        if(param8 == 1) {
            unsigned int v31 = gvar_804A194;
            unsigned int v32 = gvar_804A18C;
            int v33 = v32 * 4 + &gvar_8084B18;
            int v34 = v31 * 4 + &gvar_80D2D18;
            float v35 = (float)-1.5707964;
            int v36 = 0;
            while(1) {
                v2 = (unsigned int)(v36 + v31);
                double v37 = v35;
                v36 += 6;
                unsigned int v38 = v32 + 6;
                v33 += 24;
                v34 += 24;
                if(v36 == 18) {
                    break;
                }
                else {
                    double v39 = __x;
                    float __x1 = (double)(0.7853981633974483 + v39);
                    v3[v5] = →sinf(__x1);
                    float v40 = v9;
                    float v41 = v9 * v29;
                    __SyntheticTypeUnknownF __x2 = v24 + v35;
                    float __x3 = __x2;
                    v3[v5] = →cosf(__x2);
                    float v42 = v14;
                    *(int*)(v33 - 24) = v41 * v42 + param0;
                    v3[v5] = →sinf(__x3);
                    float v43 = v6;
                    *(int*)(v33 - 20) = v6 * v41 + param1;
                    v3[v5] = →cosf(__x1);
                    *(int*)(v33 - 16) = v29 * v18 + param2;
                    double v44 = param0;
                    fld1();
                    __SyntheticTypeUnknownF v45 = v18 + v29;
                    __SyntheticTypeUnknownF v46 = v45 * v40;
                    double v47 = v42;
                    *(int*)(v34 - 24) = v47 * v46 + v44;
                    double v48 = param1;
                    double v49 = v43;
                    *(int*)(v34 - 20) = v46 * v49 + v48;
                    double v50 = param2;
                    *(int*)(v34 - 16) = v45 + v50;
                    v39 = fsubr(v39);
                    float __x4 = 0.7853982;
                    v1 = v23 * v45;
                    v3[v5] = →sinf(0.7853982);
                    float v51 = v21;
                    __SyntheticTypeUnknownF v52 = v29 * v51;
                    *(int*)(v33 - 12) = v42 * v52 + param0;
                    *(int*)(v33 - 8) = v52 * v43 + param1;
                    v3[v5] = →cosf(__x4);
                    *(int*)(v33 - 4) = v29 * v10 + param2;
                    __SyntheticTypeUnknownF v53 = v1 * v51;
                    v47 *= v53;
                    *(int*)(v34 - 12) = v44 + v47;
                    *(int*)(v34 - 8) = v53 * v49 + v48;
                    __SyntheticTypeUnknownF v54 = v10 * v1 + v50;
                    v50 = v54;
                    *(int*)(v34 - 4) = v54;
                    v35 = v37 + 3.141592653589793;
                    v32 = v38;
                }
            }
            gvar_804A194 = v2;
            gvar_804A18C = v32;
        }
        unsigned int v55 = gvar_804A194;
        unsigned int v56 = gvar_804A194;
        unsigned int v57 = gvar_804A18C;
        int v58 = v57 * 4 + &gvar_8084B18;
        int v59 = v55 * 4 + &gvar_80D2D18;
        float v60 = (float)-1.5707964;
        int v61 = 0;
        while(1) {
            v0 = (unsigned int)(v61 + v56);
            double v62 = v60;
            v61 += 6;
            unsigned int v63 = v57 + 6;
            v58 += 24;
            v59 += 24;
            if(v61 == 18) {
                break;
            }
            else {
                double v64 = __x;
                float __x5 = (double)(0.7853981633974483 + v64);
                v3[v5] = →sinf(__x5);
                float v65 = v4;
                float v66 = v4 * v30;
                __SyntheticTypeUnknownF __x6 = v24 + v60;
                float __x7 = __x6;
                v3[v5] = →cosf(__x6);
                float v67 = v15;
                *(int*)(v58 - 24) = v66 * v67 + v26;
                v3[v5] = →sinf(__x7);
                float v68 = v12;
                *(int*)(v58 - 20) = v12 * v66 + v27;
                v3[v5] = →cosf(__x5);
                *(int*)(v58 - 16) = v30 * v17 + v28;
                double v69 = v26;
                fld1();
                __SyntheticTypeUnknownF v70 = v17 + v30;
                __SyntheticTypeUnknownF v71 = v70 * v65;
                double v72 = v67;
                *(int*)(v59 - 24) = v72 * v71 + v69;
                double v73 = v27;
                double v74 = v68;
                *(int*)(v59 - 20) = v71 * v74 + v73;
                double v75 = v28;
                *(int*)(v59 - 16) = v70 + v75;
                v64 = fsubr(v64);
                float __x8 = 0.7853982;
                v1 = v22 * v70;
                v3[v5] = →sinf(0.7853982);
                float v76 = v11;
                __SyntheticTypeUnknownF v77 = v30 * v76;
                *(int*)(v58 - 12) = v67 * v77 + v26;
                *(int*)(v58 - 8) = v77 * v68 + v27;
                v3[v5] = →cosf(__x8);
                *(int*)(v58 - 4) = v30 * v16 + v28;
                __SyntheticTypeUnknownF v78 = v1 * v76;
                v72 *= v78;
                *(int*)(v59 - 12) = v69 + v72;
                *(int*)(v59 - 8) = v78 * v74 + v73;
                __SyntheticTypeUnknownF v79 = v16 * v1 + v75;
                v75 = v79;
                *(int*)(v59 - 4) = v79;
                v60 = v62 + 3.141592653589793;
                v57 = v63;
            }
        }
        gvar_804A194 = v0;
        gvar_804A18C = v57;
        unsigned int v80 = v57 / 3;
        unsigned int v81 = v57 / 3 - 8;
        unsigned int v82 = gvar_804A190;
        *(unsigned int*)(v82 * 4 + (int)&gvar_804A198) = v57 / 3 - 8;
        *(unsigned int*)(v82 * 4 + (int)&gvar_804A19C) = v80 - 7;
        *(unsigned int*)(v82 * 4 + (int)&gvar_804A1A0) = v80 - 3;
        unsigned int v83 = v80 - 4;
        *(unsigned int*)(v82 * 4 + (int)&gvar_804A1A4) = v80 - 4;
        unsigned int v84 = v80 - 6;
        *(unsigned int*)(v82 * 4 + (int)&gvar_804A1A8) = v80 - 6;
        *(unsigned int*)(v82 * 4 + (int)&gvar_804A1AC) = v80 - 5;
        *(unsigned int*)(gvar_804A190 * 4 + (int)&gvar_804A1B0) = v80 - 1;
        unsigned int v85 = gvar_804A190;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1B4) = v80 - 2;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1B8) = v80 - 7;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1BC) = v80 - 3;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1C0) = v80 - 1;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1C4) = v80 - 5;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1C8) = v81;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1CC) = v83;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1D0) = v80 - 2;
        *(unsigned int*)(v85 * 4 + (int)&gvar_804A1D4) = v84;
        gvar_804A190 = v85 + 16;
        int v86 = (v30 + v30) / 1.4142135381698608;
        float v87 = (float)0.0;
        int v88 = param7;
        result = sub_80489E4((int)v26, (int)v27, (int)v28, (int)param3, param4 + 10.0, (v30 + v30) / 1.4142135381698608, param6 - 1);
        if(param7) {
            float v89 = (float)-90.0;
            int v90 = 0;
            do {
                v87 = (float)1.4E-45;
                v88 = 0;
                sub_80489E4((int)v26, (int)v27, (int)v28, param3 + v89, (int)param4, v86, param6 - 1);
                v87 = (float)1.4E-45;
                v88 = 0;
                result = sub_80489E4((int)v26, (int)v27, (int)v28, (int)param3, param4 + v89, v86, param6 - 1);
                v89 += 180.0;
                ++v90;
            }
            while(v90 != 2);
        }
    }
    return result;
}

int sub_804908A() {
    __SyntheticTypeUnknownF v0;
    gvar_804A190 = 0;
    gvar_804A18C = 0;
    gvar_804A194 = 0;
    fldz();
    float v1 = v0;
    int v2 = 0;
    do {
        sub_80489E4(0.0, 0.0, 0.0, 0.0, v1, 0.1, 14, 1, 1);
        v1 += 90.0;
        ++v2;
    }
    while(v2 != 4);
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
    return →glDrawElements();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804922C() {
    int v0;
    char v1;
    int v2;
    char v3;
    int v4;
    int v5;
    char v6;
    int v7 = v0;
    int v8 = v5;
    int* ptr0 = &v6;
    →memcpy(&v1, (void*)&gvar_8049460, 12);
    →SDL_Init();
    →SDL_SetVideoMode();
    →SDL_ShowCursor();
    →glClearColor();
    →glMatrixMode();
    →glLoadIdentity();
    →glEnable();
    →glEnable();
    →glEnable();
    →glEnable();
    →glEnableClientState();
    →glEnableClientState();
    *(long long*)&v2 = 0.5;
    →glOrtho();
    →glLightfv();
    int v9 = 0;
loc_8049345:
    do {
        int v10 = →SDL_PollEvent();
        if(v10) {
            if(v3 == 2 && v4 == 27) {
                v9 = 1;
            }
            goto loc_8049345;
        }
        else {
            →glClear();
            →glColor4f();
            sub_804908A();
            →SDL_GL_SwapBuffers();
        }
    }
    while(!v9);
    →SDL_ShowCursor();
    →SDL_Quit();
    return 0;
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
    unsigned int v0 = gvar_804A000;
    if(v0 != -1) {
        int v1 = 0;
        do {
            v0();
            v0 = *(unsigned int*)(v1 + 134520828);
            v1 -= 4;
        }
        while(v0 != -1);
    }
    return -1;
}
