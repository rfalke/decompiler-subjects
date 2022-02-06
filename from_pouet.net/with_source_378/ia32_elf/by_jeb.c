
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, int param1) {
    void* ptr0;
    char v0;
    int v1 = sub_8048714(param0, param1);
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 49;
    int v8 = 49;
    int v9 = →SDL_Init();
    int v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    int v16 = 0;
    int v17 = &gvar_804A734;
    int v18 = &gvar_804A734;
    int v19 = →SDL_OpenAudio();
    int v20 = 0x80000003;
    int v21 = 0x80000003;
    char v22 = 1;
    char v23 = 0;
    char v24 = 1;
    char v25 = 0;
    char v26 = 0;
    int v27 = 32;
    int v28 = 480;
    int v29 = 640;
    int v30 = 640;
    int v31 = →SDL_SetVideoMode();
    int v32 = sub_80491C0(param0, param1);
    int v33 = 0;
    char v34 = 1;
    char v35 = 0;
    char v36 = 1;
    char v37 = 0;
    char v38 = 0;
    int v39 = 0;
    int v40 = →SDL_ShowCursor();
    int v41 = →SDL_PauseAudio();
    int v42 = →SDL_GetTicks();
    gvar_87CABE8 = v42;
    do {
        int v43 = →SDL_GetTicks();
        int v44 = v43;
        int v45 = v43 - gvar_87CABE8;
        char v46 = v45 ? 0: 1;
        char v47 = v45 < 0;
        char v48 = __parity__((unsigned char)v45);
        char v49 = (((gvar_87CABE8 ^ v44) ^ v45) >>> 4) & 0x1;
        char v50 = gvar_87CABE8 > (unsigned int)v44;
        char v51 = ((gvar_87CABE8 ^ v44) & (v45 ^ v44)) < 0;
        int v52 = sub_8048E99(v45);
        void* ptr1 = ptr0;
        int v53 = →SDL_GL_SwapBuffers();
        char v54 = gvar_804A74C ? 0: 1;
        char v55 = gvar_804A74C >= 128;
        char v56 = __parity__(gvar_804A74C);
        char v57 = gvar_804A74C < 0;
        char v58 = 0;
        char v59 = 0;
        if(!v54) {
            break;
        }
        else {
            int v60 = &gvar_87CABEC;
            ptr0 = (void*)&gvar_87CABEC;
            int v61 = →SDL_PollEvent();
            void* ptr2 = (void*)&gvar_87CABEC;
            v0 = gvar_87CABEC == 2;
            char v62 = (char)gvar_87CABEC < 2;
            char v63 = __parity__(gvar_87CABEC - 2);
            char v64 = gvar_87CABEC < 2;
            char v65 = (((gvar_87CABEC - 2) ^ gvar_87CABEC) & (gvar_87CABEC ^ 0x2)) < 0;
            v59 = (((gvar_87CABEC - 2) ^ (gvar_87CABEC ^ 0x2)) >>> 4) & 0x1;
        }
    }
    while(!v0);
    int* ptr3 = &ptr0;
    int v66 = →SDL_Quit();
    char v67 = 1;
    char v68 = 0;
    char v69 = 1;
    char v70 = 0;
    char v71 = 0;
    int v72 = 1;
    int v73 = 0;
    char v74 = 1;
    char v75 = 0;
    char v76 = 1;
    char v77 = 0;
    char v78 = 0;
    interrupt(128);
}

int sub_8048446() {
    return gvar_804AAF4();
}

int sub_8048500(int param0, short* param1, unsigned int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int* ptr0;
    int result = v3;
    int v4 = v0;
    unsigned int* ptr1 = ptr0;
    int v5 = v2;
    int* ptr2 = &v1;
    int* ptr3 = &v1;
    short* ptr4 = param1;
    do {
        unsigned int v6 = gvar_804A72E % 5292;
        if(!v6) {
            int v7 = 4;
            do {
                int v8 = *(int*)(v7 + 134522598);
                if(v8 != -2) {
                    *(int*)(v7 + 142388120) = *(int*)(v7 + 142388120) + 1;
                    if(v8 != -1) {
                        int v9 = /*BAD_CALL!*/ sub_80486E2(v7);
                        unsigned char v10 = (unsigned char)v9;
                        if(v10 == 254) {
                            goto loc_804854A;
                        }
                    }
                    else {
                    loc_804854A:
                        *(int*)(v7 + 134522598) = *(int*)(v7 + 134522598) + 1;
                        char v11 = *(char*)(*(int*)(v7 + 134521998) + *(int*)(v7 + 134522598));
                        if(v11 == 253) {
                            *(int*)(v7 + 134522598) = 0;
                        }
                        if(v11 == 254) {
                            *(int*)(v7 + 134522598) = -2;
                        }
                        *(int*)(v7 + 142388120) = 0;
                    }
                    v8 = sub_80486E2(v7);
                    if((unsigned char)v8) {
                        char v12 = (unsigned char)v8 == 250;
                        if(v12) {
                            *(int*)(v0 + 134522554) = -1;
                            if(!v12) {
                                goto loc_8048599;
                            }
                        }
                        else {
                        loc_8048599:
                            char v13 = (unsigned char)v8 == 252;
                            if(v13) {
                                *(char*)(v0 + 0x87cabc0) = (unsigned char)v8;
                                if(!v13) {
                                    goto loc_80485A7;
                                }
                            }
                            else {
                            loc_80485A7:
                                if((unsigned char)v8 == 251) {
                                    v6 &= 0xffffff00;
                                    *(char*)(v0 + 0x87cabc0) = (unsigned char)v6;
                                }
                                else {
                                    int v14 = v8 * 2;
                                    unsigned int v15 = (unsigned int)(((unsigned int)*(short*)((char*)((int)&gvar_804A626 + v14) + 2) | ((unsigned int)(unsigned short)(v14 >>> 16) << 16)) * 0x10000);
                                    v8 = (int)(v15 / 262);
                                    *(int*)(v0 + 142388080) = (int)(v15 / 262);
                                    v6 = v8 < 0 ? 0xffffffff: 0;
                                    *(int*)(v0 + 134522554) = v8 < 0 ? -1: 0;
                                }
                            }
                        }
                    }
                }
                v7 += 4;
            }
            while(v7 != 40);
        }
        gvar_804AB58 = 0;
        int v16 = 140028784;
        do {
            sub_8048706();
            int v17 = *ptr0;
            gvar_804AB58 += v17;
            void* ptr5 = (void*)(v17 >> 1);
            sub_8048706();
            *ptr0 = ptr5;
            gvar_804AB5C = ptr0;
            unsigned int v18 = *(unsigned int*)(v0 + 134522554);
            if(v18 != -1) {
                int v19 = *(int*)((v18 >>> 16) * 4 + v0 * 0x10000 + 137145200);
                gvar_804AB58 += v19;
                if(*(char*)(v0 + 0x87cabc0)) {
                    *gvar_804AB5C = v19 / 5;
                }
                unsigned int v20 = (unsigned int)(*(int*)(v0 + 142388080) + *(int*)(v0 + 134522554));
                if(v20 >= 0xac440000) {
                    v20 = 0xffffffff;
                }
                *(unsigned int*)(v0 + 134522554) = v20;
            }
            v16 += 0x40000;
        }
        while(v0 != 36);
        unsigned int v21 = gvar_804AB58;
        if((int)v21 < 0xfffe8003) {
            v21 = 0xfffe8003;
        }
        else if((int)v21 > 0x17ffd) {
            v21 = 0x17ffd;
        }
        *ptr4 = (unsigned short)v21 / 3;
        ++ptr4;
        ++gvar_804A72E;
        param2 -= 2;
    }
    while(param2);
    sub_80489C8(40);
    return result;
}

int sub_80486E2(int param0) {
    return (unsigned int)*(char*)(*(int*)((unsigned int)*(char*)(*(int*)(param0 + 134522598) + *(int*)(param0 + 134521998)) * 4 + 134522338) + *(int*)(param0 + 142388120)) | ((unsigned int)(((unsigned int)*(char*)(*(int*)(param0 + 134522598) + *(int*)(param0 + 134521998)) >>> 6) & 0xffffff) << 8);
}

int sub_8048706() {
    unsigned int v0;
    return (int)(v0 / 15876);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048714(int param0, int param1) {
    int v0;
    short v1;
    __SyntheticTypeUnknownF v2;
    short v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    int result = (unsigned int)v1 | ((unsigned int)v3 << 16);
    int v6 = param0;
    int v7 = param1;
    int v8 = v4;
    int* ptr0 = &v0;
    short* ptr1 = (short*)&gvar_804A6B8;
    short* ptr2 = (short*)&gvar_804A6A0;
    int counter = 60;
    do {
        v1 = *ptr1;
        --ptr1;
        *ptr2 = v1 >>> 1;
        --ptr2;
        --counter;
    }
    while(counter);
    int* ptr3 = (int*)&gvar_804AB70;
    unsigned int v9 = 0;
    do {
        *ptr3 = ((unsigned char)((unsigned long long)(v9 * 2) | ((unsigned long long)((v9 >>> 30) & 0x1 ? -1: 0) << 32)) / 168) & 0x1 ? 0xffff8001: 0x7fff;
        ++ptr3;
        *(ptr3 + 0x1ffff) = v9 % 168 * 0x10000 / 168 - 0x8000;
        unsigned int v10 = sub_804890C();
        *(ptr3 + 0x2ffff) = (unsigned int)(unsigned short)v10 - 0x8000;
        v12[v13] = fsin(gvar_804A71E);
        gvar_804A712 = (int)(v2 * gvar_804A726);
        gvar_804A71E = v5 + gvar_804A716;
        *(unsigned int*)(ptr3 + 0xffff) = gvar_804A712;
        ++v9;
    }
    while(param0 != 1);
    int v11 = &gvar_804A200;
    int counter1 = 9;
    do {
        sub_80487CB();
        v11 += 32;
        --counter1;
    }
    while(counter1);
    return result;
}

int sub_80487CB() {
    int* ptr0;
    gvar_804AB40 = 0;
    gvar_804AB44 = 0;
    gvar_804AB48 = 0;
    gvar_804AB4C = 0;
    gvar_804AB50 = 0;
    gvar_804AB60 = 0;
    gvar_804AB64 = 0x10000;
    gvar_804AB68 = (unsigned int)(*(ptr0 + 7) * 0x10000 / 168000);
    unsigned int v0 = *(unsigned int*)(ptr0 + 6);
    if(v0) {
        gvar_804AB40 = v0 / 103;
        gvar_804AB44 = v0 % 103 * 41698711;
    }
    else {
        gvar_804AB48 = 42;
    }
    sub_804888C();
    gvar_804AB54 = (unsigned int)(0 - gvar_804AB54);
    sub_8048891(*(ptr0 + 3));
    sub_804888C();
    return sub_804888C();
}

int sub_804888C() {
    unsigned int v0;
    gvar_804AB54 = v0;
}

unsigned int sub_8048891(int param0) {
    unsigned int result;
    int* ptr0;
    int v0;
    while(param0) {
        gvar_804AB60 += gvar_804AB64;
        gvar_804AB64 += gvar_804AB68;
        *ptr0 = ((((gvar_804AB50 >> 10) * *(int*)((gvar_804AB60 >>> 16) * 4 + v0)) >> 11) * (*(unsigned int*)((unsigned int)(unsigned short)gvar_804AB48 * 4 + (int)&gvar_808AB70) >> 4)) >> 12;
        ++ptr0;
        gvar_804AB50 += gvar_804AB54;
        unsigned int v1 = gvar_804AB44;
        unsigned int v2 = gvar_804AB4C;
        gvar_804AB4C += v1;
        result = gvar_804AB40;
        gvar_804AB48 = (unsigned int)((unsigned int)__carry__(v1, v2) + gvar_804AB48 + result);
        --param0;
        if(!param0) {
            return result;
        }
    }
    return result;
}

unsigned int sub_804890C() {
    unsigned int result = (unsigned int)__ror__((gvar_804A626 - 216562994) ^ 0xf31782ce, 1);
    gvar_804A626 = (unsigned int)__ror__((gvar_804A626 - 216562994) ^ 0xf31782ce, 1);
    return result;
}

void sub_80489C8(int param0) {
    short v0;
    short v1;
    short* ptr0;
    while(1) {
        *(int*)&v0 = (unsigned int)*ptr0 | ((unsigned int)v1 << 16);
        gvar_87D55E0 = (double)v0 * gvar_804A8C8;
    }
}

void sub_80489FC() {
    char v0;
    short v1;
    int v2;
    *(int*)&v1 = v2;
    char v3 = 7;
    __SyntheticTypeUnknownF v4 = (double)v1;
    short* ptr0 = &v1;
    int* ptr1 = &v0;
    char v5 = &v0 ? 0: 1;
    char v6 = (int)&v0 < 0;
    char v7 = __parity__((unsigned char)&v0);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
    char v9 = (unsigned int)&v1 >= 0xfffffffc;
    char v10 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x4)) < 0;
    __SyntheticTypeUnknownF v11 = v4 * gvar_804A8CC;
    char v12 = 6;
    __SyntheticTypeUnknownF v13 = gvar_804A8D0;
    __SyntheticTypeUnknownF v14 = v13 * gvar_87D55C0;
    __SyntheticTypeUnknownF v15 = v11 + v14;
    char v16 = 7;
    gvar_87D55C0 = v15;
    char v17 = 0;
    char v18 = gvar_87D55C4 == 47;
    char v19 = (int)gvar_87D55C4 < 47;
    char v20 = __parity__((unsigned char)gvar_87D55C4 - 47);
    char v21 = gvar_87D55C4 < 47;
    char v22 = (((gvar_87D55C4 - 47) ^ gvar_87D55C4) & (gvar_87D55C4 ^ 0x2f)) < 0;
    char v23 = (((gvar_87D55C4 - 47) ^ (gvar_87D55C4 ^ 0x2f)) >>> 4) & 0x1;
    jump v18 || v19 != v22 ? &sub_8048A30: &sub_8048A26;
}

unsigned int sub_8048A31(float param0, int param1, int param2) {
    int v0 = param1;
    int v1 = param2;
    unsigned int result = 0;
    do {
        float v2 = param0 * param0;
        __SyntheticTypeUnknownF v3 = param0 * param0 * gvar_804A8D4;
        __SyntheticTypeUnknownF v4 = v3 * *(float*)(result * 4 + v0 + 12) + param0 * param0 * param0 * *(float*)(result * 4 + v0 + 24) - (param0 + param0) * param0;
        __SyntheticTypeUnknownF v5 = param0 * ((param0 + param0) * param0) - v3 + 1.0 + param0 * param0 * param0 * gvar_804A8D8 + param0;
        float v6 = 1.0 - gvar_87D4844;
        __SyntheticTypeUnknownF v7 = 1.0 + gvar_87D484C;
        __SyntheticTypeUnknownF v8 = 1.0 - gvar_87D4848;
        float v9 = v8;
        __SyntheticTypeUnknownF v10 = 1.0 - gvar_87D484C;
        __SyntheticTypeUnknownF v11 = 1.0 + gvar_87D4848;
        __SyntheticTypeUnknownF v12 = *(float*)(result * 4 + v0 + 24) - *(float*)(result * 4 + v0 + 12);
        __SyntheticTypeUnknownF v13 = gvar_804A8DC;
        *(int*)(result * 4 + v1) = v4 * (v7 * ((v8 * v7 * (*(float*)(result * 4 + v0 + 12) - *(float*)(result * 4 + v0)) * (v11 * ((param0 - 1.0) * (param0 * param0))) + v10 * v8 * (*(float*)(result * 4 + v0 + 36) - *(float*)(result * 4 + v0 + 24))) * v6)) + (v5 * ((v10 * v11 * v12 + v12) * v6) * v13 + v13);
        ++result;
    }
    while((int)result <= 1);
    return result;
}

unsigned int sub_8048B1E(float param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    __SyntheticTypeUnknownF v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    char v7;
    int v8;
    __SyntheticTypeUnknownF v9;
    __SyntheticTypeUnknownF v10;
    __SyntheticTypeUnknownF v11;
    int v12 = v3;
    int v13 = 0;
    unsigned int v14 = 0;
    do {
        unsigned int v15 = 0;
        do {
            v0[v7 - 1] = gvar_804A8E0;
            v0[v7 - 1] *= (double)v15;
            float v16 = v0[v7 - 1];
            sub_8048A31(v0[v7 - 1], v14 * 3 * 4 + 134522880, &gvar_87D4864);
            sub_8048A31(v16, v14 * 3 * 4 + 134522976, &gvar_87D4870);
            unsigned int v17 = 0;
            do {
                *(unsigned int*)((v13 * 3 + v17) * 4 + (int)&gvar_87D48A0) = (gvar_804A8E4 - param0) * *(float*)(v17 * 4 + (int)&gvar_87D4864) + param0 * *(float*)(v17 * 4 + (int)&gvar_87D4870);
                ++v17;
            }
            while((int)v17 <= 2);
            __SyntheticTypeUnknownF v18 = gvar_804A8E8;
            int v19 = v13;
            v0[v23] = fsin(v18 * (double)v19);
            *(unsigned int*)(v13 * 12 + (int)&gvar_87D48A8) = v2 * gvar_804A8EC;
            v7 = 7;
            ++v13;
            ++v15;
        }
        while((int)v15 <= 15);
        ++v14;
    }
    while(v14 <= 3);
    v14 = 0;
    unsigned int result = (unsigned int)(v13 - 1);
    if((int)((0 - result) & result) < 0 != (int)result > 0) {
        do {
            int v20 = v14 * 3 * 4;
            gvar_87D487C = *(float*)((int)&gvar_87D48B4 + v20) - *(float*)((int)&gvar_87D48A8 + v20);
            gvar_87D4880 = *(float*)((int)&gvar_87D48A0 + v20) - *(float*)((int)&gvar_87D48AC + v20);
            gvar_87D4884 = *(float*)((int)&gvar_87D48B0 + v20) - *(float*)((int)&gvar_87D48A4 + v20);
            v0[v23] = fsin(gvar_804A8F0);
            *(unsigned int*)((int)&gvar_87D48A4 + v20) = v9 * gvar_87D55C0 + *(float*)((int)&gvar_87D48A4 + v20);
            v0[v23] = fsin(v11 + v6 * gvar_804A8F8 * gvar_804A8FC);
            *(unsigned int*)((int)&gvar_87D48A8 + v20) = v10 * (v4 + v5 * gvar_87D55C0) * gvar_804A900 + *(float*)((int)&gvar_87D48A8 + v20);
            gvar_87D558C(2896);
            gvar_87D558C(2977);
            gvar_87D558C(2929);
            __SyntheticTypeUnknownF v21 = gvar_87D4850;
            gvar_87D5580(v21 * gvar_804A90C, v21 * gvar_804A908, v21 * gvar_804A904);
            gvar_87D5598(&gvar_87D487C, v1);
            gvar_87D5564(9);
            int v22 = *(float*)((int)&gvar_87D48A4 + v20) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48A0 + v20), *(unsigned int*)((int)&gvar_87D48A8 + v20) ^ 0x80000000);
            v22 = *(float*)((int)&gvar_87D48B0 + v20) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48AC + v20), *(unsigned int*)((int)&gvar_87D48B4 + v20) ^ 0x80000000);
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48AC + v20), (int)*(unsigned int*)((int)&gvar_87D48B4 + v20), *(float*)((int)&gvar_87D48B0 + v20) * gvar_804A910);
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48A0 + v20), (int)*(unsigned int*)((int)&gvar_87D48A8 + v20), *(float*)((int)&gvar_87D48A4 + v20) * gvar_804A910);
            gvar_87D5568(v8, v1, v22);
            gvar_87D5580(0, 0, 0);
            gvar_87D5590(2896, v1, v22);
            gvar_87D5564(1);
            v22 = *(float*)((int)&gvar_87D48A4 + v20) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48A0 + v20), *(unsigned int*)((int)&gvar_87D48A8 + v20) ^ 0x80000000);
            v22 = *(float*)((int)&gvar_87D48B0 + v20) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48AC + v20), *(unsigned int*)((int)&gvar_87D48B4 + v20) ^ 0x80000000);
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48AC + v20), (int)*(unsigned int*)((int)&gvar_87D48B4 + v20), *(float*)((int)&gvar_87D48B0 + v20) * gvar_804A910);
            gvar_87D556C((int)*(unsigned int*)((int)&gvar_87D48A0 + v20), (int)*(unsigned int*)((int)&gvar_87D48A8 + v20), *(float*)((int)&gvar_87D48A4 + v20) * gvar_804A910);
            gvar_87D5568(v8, v1, v22);
            ++v14;
            result = (unsigned int)(v13 - 1);
        }
        while((int)result > (int)v14);
    }
    return result;
}

unsigned int sub_8048E99(int param0) {
    short v0;
    unsigned int v1;
    short v2;
    __SyntheticTypeUnknownF v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    int v7;
    int v8;
    int v9 = v4;
    int v10 = param0;
    *(int*)&v0 = param0;
    gvar_87D55C8 = (float)*(int*)&v0;
    __SyntheticTypeUnknownF v11 = (gvar_804A914 * (double)gvar_804A72E - gvar_804A918) * gvar_804A91C;
    short v2 = fnstcw();
    short v12 = (unsigned short)(unsigned char)v2 | ((unsigned short)12 << 8);
    fldcw(v12);
    gvar_87D55C4 = (int)v11;
    fldcw(v2);
    if((int)gvar_87D55C4 > 58) {
        gvar_804A74C = 1;
    }
    __SyntheticTypeUnknownF v13 = gvar_804A920;
    *(int*)&v0 = v10;
    fldcw(v12);
    unsigned int v14 = (int)(v13 * (double)*(int*)&v0);
    fldcw(v2);
    unsigned int result = v14;
    if(gvar_804A8B4 != result) {
        gvar_804A8B4 = result;
        unsigned int v15 = 0;
        while((int)(unsigned int)*(unsigned char*)(v15 * 9 + (int)&gvar_804A769) <= (int)gvar_87D55C4) {
            ++v15;
            if(v15 > 15) {
                goto loc_8048F70;
            }
        }
        unsigned int v16 = 1;
        do {
            __SyntheticTypeUnknownF v17 = gvar_804A924 * *(float*)(v16 * 4 + 142428224);
            *(int*)&v0 = (unsigned int)(short)*(char*)(v15 * 9 + v16 + 134522720) | ((unsigned int)(unsigned short)((v15 * 9) >>> 16) << 16);
            *(int*)(v16 * 4 + 142428224) = v17 + (double)v0 * gvar_804A928;
            ++v16;
        }
        while((int)v16 <= 9);
    loc_8048F70:
        __SyntheticTypeUnknownF v18 = gvar_87D4860;
        *(int*)&v0 = 0x3f800000;
        gvar_87D5578(v18, v18, v18, *(int*)&v0);
        gvar_87D557C(0x4100, (int)v1, v7);
        gvar_87D5570(5889);
        gvar_87D5574(v8);
        gvar_87D55A0(0x47ae147b, -1081836831, 0x47ae147b, 1065646817, -343597384, -1082214319, -343597384);
        gvar_87D5570(5888);
        gvar_87D5574(v8);
        gvar_87D5588(0, 0, (int)gvar_87D4854);
        v28[v29] = fchs(gvar_87D4858);
        gvar_87D5584(v5 * gvar_804A92C);
        __SyntheticTypeUnknownF v19 = gvar_804A930 * gvar_87D485C + gvar_87D5560;
        gvar_87D5560 = v19;
        *(int*)&v0 = 0x3f800000;
        int v20 = gvar_87D5584(v19);
        if((int)gvar_87D55C4 <= 47) {
            gvar_87D5590(2896);
            gvar_87D559C(0x40400000);
            unsigned int v21 = 0;
            do {
                gvar_87D5564(3);
                unsigned int v22 = 0;
                do {
                    *(unsigned int*)&v0 = v22;
                    __SyntheticTypeUnknownF v23 = (double)*(int*)&v0;
                    float v24 = v23;
                    v28[v29] = fsin(v23 * gvar_804A934);
                    __SyntheticTypeUnknownF v25 = gvar_804A8E4 - v3;
                    gvar_87D5580(v25, v25, v25);
                    __SyntheticTypeUnknownF v26 = v24 * gvar_804A938 - gvar_804A8DC;
                    gvar_87D556C(v26 + v26);
                    ++v22;
                }
                while((int)v22 <= 0x3ff);
                *(int*)&v0 = &loc_8049101;
                /*BAD_CALL!*/ gvar_87D5568();
                *(int*)&v0 = 0x3f800000;
                v20 = gvar_87D5584(0x42b40000, 0, 0, *(int*)&v0);
                ++v21;
            }
            while((int)v21 <= 1);
        }
        *(int*)&v0 = v20;
        gvar_87D5594(0x4000, 0x1200, &gvar_804A8B8, *(int*)&v0);
        gvar_87D558C(0x4000, (int)v1, v7, *(int*)&v0);
        gvar_87D558C(2903);
        gvar_87D5584(0x41700000, 0, 0, 0x3f800000, v8);
        unsigned int v27 = 0;
        do {
            *(int*)&v0 = 0x3f800000;
            gvar_87D5584(0x41f00000, 0, 0, *(int*)&v0);
            v28[v29] = fsin(gvar_804A900 * (double)v10);
            result = sub_8048B1E(v6 * gvar_804A8DC + gvar_804A8DC);
            ++v27;
        }
        while((int)v27 <= 11);
    }
    return result;
}

int sub_80491C0(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int result = v1;
    int v3 = param0;
    int v4 = param1;
    int v5 = v2;
    int* ptr0 = &v0;
    void* __handle = →dlopen("libGL.so", 0);
    unsigned int* ptr1 = (unsigned int*)&gvar_87D5564;
    unsigned int* ptr2 = (unsigned int*)&gvar_804A945;
    while(1) {
        char* __name = *ptr2;
        ++ptr2;
        if(!__name) {
            return result;
        }
        void* ptr3 = →dlsym(__handle, __name);
        *ptr1 = ptr3;
        ++ptr1;
    }
    return result;
}
