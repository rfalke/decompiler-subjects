
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    __SyntheticTypeUnknownF v0;
    void* ptr0;
    void* ptr1;
    char v1;
    char v2;
    int v3;
    int v4;
    int v5 = 0;
    int v6 = v3;
    int v7 = 384;
    char* ptr2 = (char*)0x200;
    int v8 = →SDL_SetVideoMode();
    int v9 = v8;
    int v10 = *(int*)(v8 + 20);
    ptr2 = NULL;
    int v11 = v10;
    →SDL_ShowCursor();
    int v12 = &gvar_964CD20;
    int v13 = -192;
    gvar_824A514 = 0xc2f00000;
    do {
        int v14 = v12;
        ptr1 = (void*)0xFFFFFF00;
        float* ptr3 = (float*)(v5 * 12 + &gvar_964CD20);
        do {
            ptr0 = ptr1;
            ptr1 = (void*)((int)ptr1 + 1);
            *ptr3 = (float)ptr0;
            v14 += 12;
            *(ptr3 + 1) = (float)v13;
            *(int*)(ptr3 + 2) = 0x44000000;
            ptr3 += 3;
            sub_80484A2(v4);
        }
        while(ptr1 != 0x100);
        v5 += 0x200;
        v12 += 0x1800;
        ++v13;
    }
    while(v5 != 0x30000);
    int v15 = 0;
    void* ptr4 = (void*)0xFFFFFFF6;
    int v16 = 0;
    do {
        ptr0 = ptr4;
        int v17 = -45;
        int v18 = (float)ptr0;
        char* ptr5 = (char*)(v16 + &gvar_8049A40);
        do {
            if(*ptr5 == 1) {
                ptr1 = (void*)(v15 * 262272);
                sub_8048775((float)v17, v18, 0xc1c80000, 0x40000000);
                →memcpy((void*)((int)ptr1 + 136619296), &v1, 262272);
                ++v15;
                *(char*)((int)ptr1 + &gvar_824A59D) = 0;
            }
            v17 += 4;
            ++ptr5;
        }
        while(v17 != 47);
        ptr4 = (void*)((int)ptr4 + 4);
        v16 += 23;
    }
    while(ptr4 != 14);
    sub_80486BA(0, 0, 0xc1200000, 0.0, 0, 0xbf800000);
    →memcpy((void*)0x938C7A0, &v1, 262272);
    sub_8048775(0, 0x41f00000, 0xc20c0000, 0x41700000);
    →memcpy((void*)0x93CC820, &v1, 262272);
    sub_804881D(0, 0xc2c80000, 0xc1f00000, 0);
    sub_80486BA(0, 0x41f00000, 0, 0.0, 0xbf800000, 0);
    →memcpy((void*)0x804A100, &v1, 262272);
    sub_80486BA(0, 0xc1a00000, 0, 0.0, 0x3f800000, 0);
    →memcpy((void*)0x808A180, &v1, 262272);
    sub_80486BA(0xc2480000, 0, 0, 1.0, 0, 0);
    →memcpy((void*)0x80CA200, &v1, 262272);
    sub_80486BA(0x42480000, 0, 0, -1.0, 0, 0);
    →memcpy((void*)0x810A280, &v1, 262272);
    sub_80486BA(0, 0, 0x42200000, 0.0, 0, 0xbf800000);
    →memcpy((void*)0x814A300, &v1, 262272);
    sub_8048775(0, 0x41800000, 0xc1a00000, 0x41700000);
    →memcpy((void*)0x818A380, &v1, 262272);
    sub_8048613(-30.0, 0x41f00000, 0xc1a00000, 0x41200000, 0, 0xbf800000, 0);
    →memcpy((void*)0x81CA400, &v1, 262272);
    void* ptr6 = NULL;
    sub_8048613(30.0, 0x41f00000, 0xc1a00000, 0x41200000, 0, 0xbf800000, 0);
    int v19 = 0;
    →memcpy((void*)0x820A480, &v1, 262272);
    gvar_824A508 = 0xc2f00000;
    int v20 = →SDL_GetTicks();
    for(int i = →SDL_GetTicks(); ((unsigned int)(i - v20) <= 13999 && v2 != 2); i = →SDL_GetTicks()) {
        fsincos();
        gvar_824A500 = (unsigned int)0x41f00000;
        v0 = v0 * ((double)ptr6 * 0.017453279346227646 * 30.0);
        gvar_824A504 = v0;
        if(v19 <= 49) {
            int v21 = 0;
            do {
                *(unsigned int*)((int)&gvar_940C8A4 + v21) = *(float*)((int)&gvar_940C8A4 + v21) + 2.0;
                v21 += 262272;
            }
            while(v21 != 0x1c0380);
            v0 = 2.0;
        }
        ++v19;
        ptr6 = (void*)((int)ptr6 + 4);
        sub_804938F(v11, 9);
        →SDL_Flip();
        →SDL_PollEvent();
    }
    int v22 = →SDL_GetTicks();
    int v23 = v19 * 2;
    for(int j = →SDL_GetTicks(); ((unsigned int)(j - v22) <= 13999 && v2 != 2); j = →SDL_GetTicks()) {
        __SyntheticTypeUnknownF v24 = (double)v23;
        ++v19;
        v23 += 2;
        gvar_824A504 = 0xc1200000;
        fsincos();
        gvar_824A500 = (unsigned int)1101004800;
        v0 *= v24 * 0.017453279346227646 * 20.0;
        gvar_824A508 = v0;
        sub_804938F(v11, 8);
        →SDL_Flip();
        →SDL_PollEvent();
    }
    int v25 = →SDL_GetTicks();
    void* ptr7 = (void*)(v19 * 4);
    gvar_824A508 = 0xc2f00000;
    for(int k = →SDL_GetTicks(); ((unsigned int)(k - v25) <= 13999 && v2 != 2); k = →SDL_GetTicks()) {
        ptr0 = ptr7;
        ptr7 = (void*)((int)ptr7 + 4);
        fsincos();
        gvar_824A500 = (unsigned int)0x41f00000;
        v0 *= (double)ptr0 * 0.017453279346227646 * 30.0;
        gvar_824A504 = v0;
        sub_804938F(v11, 71);
        →SDL_Flip();
        →SDL_PollEvent();
    }
    →SDL_Quit();
    128 = int(128);
}

void sub_804838E() {
    jump gvar_804A0B8;
}

float* sub_8048438(int param0, float* param1) {
    float* result;
    return result;
}

float* sub_804844D(int* param0, float* param1) {
    float* result;
    __SyntheticTypeUnknownF v0 = *(result + 2);
    __SyntheticTypeUnknownF v1 = *(result + 1) * *(param1 + 2) - *(param1 + 1) * v0;
    *param0 = v0;
    __SyntheticTypeUnknownF v2 = *result;
    __SyntheticTypeUnknownF v3 = v1 * *param1 - *(param1 + 2) * v2;
    *(param0 + 1) = v2;
    *(param0 + 2) = v3 * *(param1 + 1) - *(result + 1) * *param1;
    return result;
}

float* sub_804847F(int* param0, float* param1) {
    float* result;
    *param0 = *result - *param1;
    *(param0 + 1) = *(result + 1) - *(param1 + 1);
    *(param0 + 2) = *(result + 2) - *(param1 + 2);
    return result;
}

float* sub_8048498(int param0) {
    float* ptr0;
    float* result = sub_8048438(param0, ptr0);
    fsqrt();
    return result;
}

float* sub_80484A2(int param0) {
    float* ptr0;
    __SyntheticTypeUnknownF v0;
    float* result = sub_8048438(param0, ptr0);
    fsqrt();
    0x3f800000 = fdivr(0x3f800000);
    ptr0[0] *= v0;
    ptr0[1] *= v0;
    ptr0[2] *= v0;
    return result;
}

int sub_80484CA(int param0, int param1) {
    int result;
    int v0;
    int* ptr0;
    int v1;
    int v2;
    int v3 = 0;
    int v4 = v2;
    →srand(1337);
    do {
        int v5 = 0;
        int v6 = v3 % 20;
        do {
            ptr0 = (int*)((v3 * 0x100 + v5) * 4 + v4);
            *ptr0 = 0xffffff;
            if(!(unsigned char)v1) {
                v0 = (v5 + 100) ^ v3;
                goto loc_804855E;
            }
            else {
                if((unsigned char)v1 + 0xFF) {
                    result = v1 - 2;
                    if((unsigned char)result > 1) {
                        goto loc_8048566;
                    }
                    else {
                        int v7 = →rand();
                        v0 = v7 % 64 + 192;
                        if((unsigned char)v1 == 2) {
                            result = v0 * 0x100;
                        }
                        else {
                        loc_804855E:
                            result = v0 * 0x10101;
                        }
                    }
                }
                else if(v5 % 20 <= 9) {
                    result = 0xff0000;
                    if(v6 > 9) {
                        goto loc_804852F;
                    }
                }
                else {
                loc_804852F:
                    result = 0xff00ff;
                }
                *ptr0 = result;
            }
        loc_8048566:
            ++v5;
        }
        while(v5 != 0x100);
        ++v3;
    }
    while(v3 != 0x100);
    if((unsigned char)v1 == 4) {
        int v8 = 0;
        do {
            v3 = 0;
            do {
                int v9 = v8;
                ptr0 = NULL;
                do {
                    int v10 = v3;
                    int v11 = 0;
                    do {
                        ++v11;
                        *(int*)((v9 * 0x100 + v10) * 4 + v4) = 0xff0000;
                        result = v9 * 0x100 + v10 + 0x1000;
                        ++v10;
                        *(int*)(result * 4 + v4 + 64) = 0xff0000;
                    }
                    while(v11 != 16);
                    ptr0 = (int*)((char*)ptr0 + 1);
                    ++v9;
                }
                while(ptr0 != 16);
                v3 += 32;
            }
            while(v3 != 0x100);
            v8 += 32;
        }
        while(v8 != 0x100);
    }
    return result;
}

void* sub_8048613(float param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    char v0;
    void* __dest;
    char v1;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = param4;
    int v6 = param0;
    int v7 = param1;
    fchs();
    int v8 = param1;
    int v9 = param0;
    int v10 = param5;
    char v11 = 2;
    int v12 = param6;
    int v13 = param3;
    sub_804844D(&v0, &v6);
    int v14 = sub_80484CA(v3, (int)v1);
    →memcpy(__dest, &v6, 262272);
    return __dest;
}

void* sub_80486BA(int param0, int param1, int param2, float param3, int param4, int param5) {
    char v0;
    void* __dest;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5 = v2;
    int v6 = param0;
    int v7 = param3;
    int v8 = param4;
    fchs();
    int v9 = param4;
    int v10 = param3;
    int v11 = param1;
    char v12 = 1;
    int v13 = param2;
    char v14 = 0;
    int v15 = 1061620285;
    int v16 = 1049314198;
    int v17 = 12;
    sub_804844D(&v0, &v7);
    sub_80484CA(v3, (int)v1);
    int v18 = v4;
    →memcpy(__dest, &v6, 262272);
    return __dest;
}

void* sub_8048775(int param0, int param1, int param2, int param3) {
    void* __dest;
    char v0;
    int v1;
    int v2;
    int v3 = v1;
    int v4 = 0x3f800000;
    int v5 = 0x3f800000;
    char v6 = 0;
    int v7 = param3;
    int v8 = 0;
    int v9 = 0;
    int v10 = 0;
    int v11 = 0;
    char v12 = 1;
    int v13 = 1059942564;
    int v14 = 1061528011;
    int v15 = param0;
    int v16 = 82;
    int v17 = param1;
    int v18 = param2;
    sub_80484CA(0x3f800000, (int)v0);
    int v19 = v2;
    →memcpy(__dest, &v15, 262272);
    return __dest;
}

void* sub_804881D(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8 = v5;
    int v9 = v6;
    int v10 = param3;
    int v11 = v7;
    sub_8048775(param0, param1, param2, (float)v4);
    →memcpy((void*)(v10 * 262272 + 155240608), &v3, 262272);
    if(v9 > 0) {
        int v12 = v9 - 1;
        if(v11 != 1) {
            float v13 = (float)(v4 * 3 / 2);
            sub_804881D((float)(param0 + v13), param1, param2, v10 + 1);
            int v14 = v10 + 2;
            if(v11 != 2) {
                sub_804881D((float)(param0 - v13), param1, param2, v14);
                int v15 = v10 + 3;
                if(v11 != 3) {
                    v2 = v15;
                    sub_804881D(param0, (float)(param1 + v13), param2, v15);
                    if(v11 != 4) {
                        goto loc_8048994;
                    }
                    else {
                        v10 += 4;
                        v1 = v10;
                        __SyntheticTypeUnknownF v16 = (float)(param2 + v13);
                        v13 = v16;
                        sub_804881D(param0, param1, v16, v1);
                    }
                }
                else {
                    v10 += 4;
                    sub_804881D(param0, (float)(param1 - v13), param2, v15);
                    __SyntheticTypeUnknownF v17 = (float)(param2 + v13);
                    v13 = v17;
                    sub_804881D(param0, param1, v17, v10);
                }
                goto loc_8048A3C;
            }
            else {
                v10 += 3;
                sub_804881D(param0, (float)(param1 + v13), param2, v14);
                sub_804881D(param0, (float)(param1 - v13), param2, v10);
                goto loc_80489E8;
            }
        }
        else {
            v1 = v10 + 1;
            v2 = v10 + 2;
            __SyntheticTypeUnknownF v18 = (double)(v4 * 3 / 2);
            int v19 = (double)param0 - (double)(v4 * 3 / 2);
            float v20 = (double)(v4 * 3 / 2);
            sub_804881D(v19, param1, param2, v1);
            sub_804881D(param0, v20 + param1, param2, v2);
        loc_8048994:
            v10 = v2 + 1;
            param1 = fsubr(param1);
            sub_804881D(param0, (int)(float)(v4 * 3 / 2), param2, v10);
            if(v11 != 5) {
            loc_80489E8:
                ++v10;
                v0 = v4 / 2;
                sub_804881D(param0, param1, (double)(v4 * 3 / 2) + (double)param2, v10);
                if(v11 == 6) {
                    sub_80486BA(0, 0x42200000, 0, 0.0, 0xbf800000, 0);
                    return →memcpy((void*)(v10 * 262272 + 155502880), &v3, 262272);
                }
            }
        loc_8048A3C:
            ++v10;
            v0 = v4 / 2;
            param2 = fsubr(param2);
            sub_804881D(param0, param1, (int)(float)(v4 * 3 / 2), v10);
        }
    }
    sub_80486BA(0, 0x42200000, 0, 0.0, 0xbf800000, 0);
    return →memcpy((void*)(v10 * 262272 + 155502880), &v3, 262272);
}

float* sub_8048C66(float* param0, int param1) {
    float* ptr0;
    float v0;
    char v1;
    float* result;
    int v2;
    char v3;
    float v4;
    float v5;
    int v6;
    __SyntheticTypeUnknown v7;
    __SyntheticTypeUnknownF v8;
    __int128 v9;
    int v10;
    float v11;
    int v12;
    char v13;
    int v14;
    short v15;
    int v16;
    int v17;
    int v18;
    float* ptr1;
    int v19 = v17;
    float* ptr2 = &ptr1[v14 * 65568];
    ptr1 = (unsigned int)*(char*)&ptr2[31] | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
    if(!(unsigned char)ptr1) {
        if(!param1) {
            v2 = ptr2[25];
            result = sub_8048438(0, param0);
            ftst();
            (unsigned short)v28 = fnstsw((unsigned short)result);
            v1 = 7;
            if(!(int*)((int)(int*)((int)ptr1 >>> 8) & 0x1)) {
                goto loc_8048D01;
            }
            else {
                ++v1;
                v7[v1 - 1] = -1.0;
                return result;
            }
        }
        else {
            sub_804847F(&v3, (float*)v18);
            float* ptr3 = sub_8048438(v18, param0);
            ftst();
            (unsigned short)v28 = fnstsw((unsigned short)ptr3);
            v1 = 7;
        }
        if(!(int*)((int)(int*)((int)ptr1 >>> 8) & 0x1)) {
            __SyntheticTypeUnknownF v20 = ptr2[24];
            v2 = v20 * v20;
            v0 = v8;
            ptr1 = sub_8048438(v18, (float*)&v3);
            v2 = fsubr(v2);
        loc_8048D01:
            ftst();
            (unsigned short)v28 = fnstsw((unsigned short)ptr1);
            if(!(int*)((int)(int*)((int)ptr1 >>> 8) & 0x1) && !(int*)((int)(int*)((int)ptr1 >>> 14) & 0x1)) {
                fsqrt();
                return result;
            }
            v1 = 7;
        }
        ++v1;
        v7[v1 - 1] = -1.0;
    }
    else {
        if((unsigned char)ptr1 != 1) {
            if((unsigned char)ptr1 != 2) {
                v7[v1 - 1] = -1.0;
                return result;
            }
            sub_804847F(&v10, ptr2);
            float* ptr4 = sub_804844D(&v4, ptr2 + 21);
            fsqrt();
            float v21 = v11 + v4 * v4 * (v4 * v4) + v5 * v5;
            ftst();
            (unsigned short)v28 = fnstsw((unsigned short)ptr4);
            if(!((v15 >>> 8) & 0x1) && !((v15 >>> 14) & 0x1)) {
                0x3b449ba6 = fcomp(0x3b449ba6);
                (unsigned short)v28 = fnstsw(v15);
                if(((v16 >>> 8) & 0x1)) {
                    float* ptr5 = sub_8048438(v18, ptr2 + 21);
                    v10 = fsubr(v10);
                    v6 = fsubr(v6);
                    v12 = fsubr(v12);
                    fsqrt();
                    v1 = 6;
                    ptr2[24] = fcomp(ptr2[24]);
                    (unsigned short)v28 = fnstsw((unsigned short)ptr5);
                    if(!(int*)((int)(int*)((int)ptr1 >>> 8) & 0x1) && !(int*)((int)(int*)((int)ptr1 >>> 14) & 0x1)) {
                        ++v1;
                        v7[v1 - 1] = -1.0;
                    }
                    return result;
                }
            }
            sub_80484A2(v18);
            float* ptr6 = sub_8048438(v18, (float*)&v4);
            float v22 = v8;
            (float)((v22 >>> 24) & 0xFF) = (unsigned char)(v8 >>> 24) & 0x7f;
            v1 = 7;
            __SyntheticTypeUnknownF v23 = v22;
            ptr2[24] = fcomp(ptr2[24]);
            (unsigned short)v28 = fnstsw((unsigned short)ptr6);
            if(!(int*)((int)(int*)((int)ptr1 >>> 8) & 0x1) && !(int*)((int)(int*)((int)ptr1 >>> 14) & 0x1)) {
                v7[v1 - 1] = -1.0;
                return result;
            }
            sub_804844D(&v13, ptr2 + 21);
            sub_8048438(v18, (float*)&v4);
            float v24 = v23;
            (float)((v24 >>> 24) & 0xFF) = (unsigned char)(v23 >>> 24) ^ 0x80;
            __SyntheticTypeUnknownF v25 = v24 / v21;
            v24 = v25;
            sub_804844D(&v13, ptr2 + 21);
            sub_80484A2(v18);
            __SyntheticTypeUnknownF v26 = ptr2[24];
            fsqrt();
            v0 = v26 * v26 - v22 * v22;
            ptr0 = sub_8048438(v18, (float*)&v13);
            v7[v29 + 1] = fdivrp(v25, v0);
            fabs();
            v1 = 5;
            v7[v29 + 1] = fsubrp(v9, v24);
        }
        else if(!param1) {
            ptr0 = sub_8048438(0, param0);
            ptr2[27] = fdivr(ptr2[27]);
        }
        else {
            sub_8048438(param1, (float*)v18);
            float* ptr7 = param0;
            ptr2[26] = fsubr(ptr2[26]);
            int v27 = v8;
            v1 = 0;
            ptr0 = sub_8048438(v18, ptr7);
            v27 = fdivr(v27);
        }
        0x3b449ba6 = fcom(0x3b449ba6);
        (unsigned short)v28 = fnstsw((unsigned short)ptr0);
        if(((int*)((int)(int*)((int)ptr1 >>> 8) & 0x1) || (int*)((int)(int*)((int)ptr1 >>> 14) & 0x1))) {
            ++v1;
            v7[v1 - 1] = -1.0;
        }
    }
    return result;
}

int* sub_8048EBE(float* param0, float* param1, int param2, int param3) {
    char v0;
    int v1;
    int v2;
    float v3;
    __SyntheticTypeUnknownF v4;
    float v5;
    int v6;
    int v7;
    int v8;
    __SyntheticTypeUnknown v9;
    float v10;
    short v11;
    float v12;
    short v13;
    int v14;
    short v15;
    int v16;
    float v17;
    short v18;
    int v19;
    int v20;
    short v21;
    int v22;
    int v23;
    float v24;
    short v25;
    int v26;
    char v27;
    __SyntheticTypeUnknownF v28;
    short v29;
    short v30;
    char v31;
    __SyntheticTypeUnknownF v32;
    __SyntheticTypeUnknownF v33;
    __SyntheticTypeUnknownF v34;
    __SyntheticTypeUnknownF v35;
    int v36 = -1;
    int v37 = v14;
    int v38 = 0;
    float* ptr0 = param0;
    __SyntheticTypeUnknownF v39 = 1.0000000200408773E20;
    int* result = (unsigned int)v29 | ((unsigned int)v15 << 16);
    int v40 = v26;
    int v41 = v22;
    while(v38 < v41) {
        v8 = (unsigned int)v29 | ((unsigned int)v15 << 16);
        v7 = (unsigned int)v29 | ((unsigned int)v15 << 16);
        v6 = param3;
        float* ptr1 = param1;
        v5 = v39;
        float* ptr2 = sub_8048C66(ptr1, v6);
        __SyntheticTypeUnknownF v42 = v5;
        ftst();
        (unsigned short)v64 = fnstsw((unsigned short)ptr2);
        if(!((v29 >>> 8) & 0x1) && !((v29 >>> 14) & 0x1)) {
            v9[v31] = fcom(v42, v39);
            (unsigned short)v64 = fnstsw(v29);
            if(((v29 >>> 8) & 0x1)) {
                v39 = v42;
                v36 = v38;
            }
        }
        ++v38;
    }
    if(v36 == -1) {
        *result = 0;
        *(result + 1) = 0;
        *(result + 2) = 0;
    }
    else {
        float* ptr3 = (float*)(v36 * 262272 + v40);
        float* ptr4 = param1;
        char v43 = *(char*)&ptr3[31] ? 0: 1;
        __SyntheticTypeUnknownF v44 = v39 * ptr4[0] + *ptr0;
        ptr3[3] = v44;
        __SyntheticTypeUnknownF v45 = ptr4[1] * v39 + *(ptr0 + 1);
        ptr3[4] = v45;
        __SyntheticTypeUnknownF v46 = v45 * ptr4[2] + *(ptr0 + 2);
        ptr3[5] = v46;
        if(v43) {
            ptr3[6] = (v46 - ptr3[0]) / ptr3[24];
            ptr3[7] = (v44 - ptr3[1]) / ptr3[24];
            v4 = (v39 - ptr3[2]) / ptr3[24];
            ptr3[8] = v4;
        }
        else {
            v4 = v39;
        }
        if(*(char*)&ptr3[31] == 2) {
            sub_804847F((int*)(ptr3 + 6), ptr3);
            sub_80484A2(v22);
        }
        float* ptr5 = ptr3 + 3;
        sub_804847F(&v10, ptr3 + 3);
        sub_8048498(v22);
        int v47 = v4;
        sub_80484A2(v22);
        int v48 = 0;
        float* ptr6 = sub_8048438(v22, (float*)&v10);
        float v49 = v4;
        ftst();
        (unsigned short)v64 = fnstsw((unsigned short)ptr6);
        __SyntheticTypeUnknownF v50 = v4;
        if(((v13 >>> 8) & 0x1)) {
        loc_804904A:
            fldz();
        }
        else {
            while(v48 < v41) {
                v8 = (unsigned int)v13 | ((unsigned int)v21 << 16);
                v7 = (unsigned int)v13 | ((unsigned int)v21 << 16);
                float* ptr7 = sub_8048C66((float*)&v10, 1);
                981668463 = fcom(981668463);
                (unsigned short)v64 = fnstsw((unsigned short)ptr7);
                if(!((v13 >>> 8) & 0x1) && !((v13 >>> 14) & 0x1)) {
                    v47 = fcomp(v47);
                    (unsigned short)v64 = fnstsw(v13);
                    if((v13 >>> 8) & 0x1) {
                        goto loc_804904A;
                    }
                }
                ++v48;
            }
            sub_804847F(&v27, (float*)&v10);
            sub_8048498(v22);
            v10 /= v50;
            float v51 = v51 / v50;
            v23 = fdivr(v23);
            v23 = v50;
            v3 = v49 * ptr3[28];
            __SyntheticTypeUnknownF __x = ptr3[30];
            v6 = __x;
            sub_8048438(v22, (float*)&v10);
            v9[v31] = →powf(__x, (float)v6);
            v50 = v33 * ptr3[29] + v3;
        }
        v3 = (float)result;
        if(!*(char*)&ptr3[31]) {
            sub_8048438(v22, ptr3 + 15);
            fchs();
            fld1();
            v30 = fnstcw(v30);
            v9[v31] = fsubr(v35 * v35, v50);
            fsqrt();
            fpatan();
            short v11 = fldcw((unsigned short)(unsigned char)v30 | ((unsigned short)((unsigned char)(v30 >>> 8) | 0xc) << 8));
            fistp();
            v30 = fldcw(v30);
            v2 = v16;
            *(__int128*)&v5 = 81.48739624023438 * v34;
            float v52 = v34;
            sub_8048438(v22, ptr3 + 6);
            fsin();
            v30 = fnstcw(v30);
            v11 = (unsigned short)(unsigned char)v30 | ((unsigned short)((unsigned char)(v30 >>> 8) | 0xc) << 8);
            __SyntheticTypeUnknownF v53 = v32 / v52;
            v9[v31 + 1] = fsubrp(v53 * v53, *(__int128*)&v5);
            fsqrt();
            fpatan();
            v11 = fldcw((unsigned short)(unsigned char)v30 | ((unsigned short)((unsigned char)(v30 >>> 8) | 0xc) << 8));
            fistp();
            v30 = fldcw(v30);
            v1 = v16;
            float* ptr8 = sub_8048438(v22, ptr3 + 6);
            ftst();
            (unsigned short)v64 = fnstsw((unsigned short)ptr8);
            v0 = 0;
            if(!((v19 >>> 8) & 0x1) && !((v19 >>> 14) & 0x1)) {
                v1 = 0x100 - v1;
            }
        }
        else {
            float* ptr9 = sub_8048438(v22, ptr3 + 15);
            do {
                fprem();
                (unsigned short)v64 = fnstsw((unsigned short)ptr9);
            }
            while((int*)((int)(int*)((int)ptr9 >>> 10) & 0x1));
            v30 = fnstcw(v30);
            v11 = fldcw((unsigned short)(unsigned char)v30 | ((unsigned short)((unsigned char)(v30 >>> 8) | 0xc) << 8));
            fistp();
            v30 = fldcw(v30);
            v1 = ((v16 < 0 ? -1: 0) ^ v16) - (v16 < 0 ? -1: 0);
            float* ptr10 = sub_8048438(v22, ptr3 + 18);
            do {
                fprem();
                (unsigned short)v64 = fnstsw((unsigned short)ptr10);
            }
            while((int*)((int)(int*)((int)ptr10 >>> 10) & 0x1));
            v0 = 7;
            v30 = fnstcw(v30);
            v11 = fldcw((unsigned short)(unsigned char)v30 | ((unsigned short)((unsigned char)(v30 >>> 8) | 0xc) << 8));
            fistp();
            v30 = fldcw(v30);
            v2 = ((v16 < 0 ? -1: 0) ^ v16) - (v16 < 0 ? -1: 0);
        }
        int v54 = v2 * 0x100 + v1;
        v9[v0 - 1] = (double)(unsigned int)*((char*)&ptr3[v54 + 32] + 2);
        int v55 = (unsigned int)*(char*)&ptr3[v54 + 32];
        v9[v0 - 2] = (double)(unsigned int)*((char*)&ptr3[v54 + 32] + 1);
        v8 = v55;
        v9[v0 - 3] = (double)v8;
        ptr3[11] = v9[v0 - 3];
        v9[v0 - 3] = v3;
        v9[v0 - 3] += 0.30000001192092896;
        v9[v0 - 1] *= v9[v0 - 3];
        ptr3[9] = v9[v0 - 3];
        v9[v0 - 3] *= v9[v0 - 1];
        ptr3[10] = v9[v0 - 3];
        v9[v0 - 3] *= ptr3[11];
        float v56 = v9[v0 - 3];
        ptr3[11] = v9[v0 - 3];
        float v57 = v9[v0 - 2];
        float v58 = v9[v0 - 1];
        char v59 = v0;
        if(param2 > 0 && *((char*)&ptr3[31] + 1) == 1) {
            sub_8048438(v22, param1);
            __SyntheticTypeUnknownF v60 = ptr3[7] * (v28 + v28);
            param1[0] = fsubr(param1[0]);
            int v61 = ptr3[8] * (v28 + v28) * ptr3[6];
            param1[1] = fsubr(param1[1]);
            int v62 = v60;
            param1[2] = fsubr(param1[2]);
            int v63 = v28 + v28;
            sub_80484A2(v22);
            v55 = sub_8048EBE((int)ptr5, (int)&v61, param2 - 1, 1);
            v57 += v24 * 0.6000000238418579;
            v58 += v17 * 0.6000000238418579;
            v56 += 0.6000000238418579 * v12;
            v59 = 7;
        }
        v9[v59 - 1] = v57;
        1132396544 = fcom(1132396544);
        (unsigned short)v64 = fnstsw((unsigned short)v55);
        if(!((v18 >>> 8) & 0x1) && !((v18 >>> 14) & 0x1)) {
            v9[v59 - 1] = 255.0;
        }
        *result = v9[v59 - 1];
        v9[v59 - 1] = v58;
        1132396544 = fcom(1132396544);
        (unsigned short)v64 = fnstsw(v18);
        if(!((v25 >>> 8) & 0x1) && !((v25 >>> 14) & 0x1)) {
            v9[v59 - 1] = 255.0;
        }
        *(result + 1) = v9[v59 - 1];
        v9[v59 - 1] = v56;
        1132396544 = fcom(1132396544);
        (unsigned short)v64 = fnstsw(v25);
        if(!((v20 >>> 8) & 0x1) && !((v20 >>> 14) & 0x1)) {
            v9[v59 - 1] = 255.0;
        }
        *(result + 2) = v9[v59 - 1];
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804938F(int param0, int param1) {
    short v0;
    float* ptr0;
    int v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    short v4;
    int v5;
    int v6 = 0;
    float* ptr1 = ptr0;
    int v7 = v5;
    float* ptr2 = ptr0;
    int v8 = param1;
    int result = param0;
    while(v6 < v8) {
        int* ptr3 = (int*)(ptr1 + 12);
        sub_804847F(ptr3, (float*)0x824A50C);
        if(!*(char*)&ptr1[31]) {
            __SyntheticTypeUnknownF v9 = ptr1[24];
            float v10 = v9 * v9;
            sub_8048438(param0, (float*)ptr3);
            v14[v15 + 1] = fsubrp(v3, v10);
            ptr1[25] = v2;
        }
        if(*(char*)&ptr1[31] == 1) {
            sub_8048438(param0, ptr1 + 6);
            ptr1[27] = v3;
            sub_8048438(param0, ptr1);
            ptr1[26] = v3;
        }
        ++v6;
        ptr1 += 65568;
    }
    int v11 = 0;
    int v12 = &gvar_964CD20;
    do {
        int v13 = v12;
        v12 += 24;
        sub_8048EBE(136619276, v13, 2, 0);
        v4 = fnstcw(v4);
        short v0 = fldcw((unsigned short)(unsigned char)v4 | ((unsigned short)((unsigned char)(v4 >>> 8) | 0xc) << 8));
        fistp();
        v4 = fldcw(v4);
        v0 = fldcw(v0);
        fistp();
        v4 = fldcw(v4);
        v0 = fldcw(v0);
        fistp();
        v4 = fldcw(v4);
        *(int*)(v11 * 4 + result + 4) = v1 * 0x10101;
        *(int*)(v11 * 4 + result) = v1 * 0x10101;
        v11 += 2;
    }
    while(v11 != 0x30000);
    return result;
}
