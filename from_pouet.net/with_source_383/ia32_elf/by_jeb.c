
int start() {
    int result;
    int v0;
    char v1;
    int v2;
    void* ptr0;
    →SDL_SetVideoMode();
    →SDL_ShowCursor();
    →glShadeModel();
    →glClearColor();
    →glClearDepth();
    →glEnable();
    →glDepthFunc();
    →glHint();
    →glViewport();
    →glMatrixMode();
    →glLoadIdentity();
    int v3 = 0;
    int v4 = 0xbff00000;
    int v5 = 0;
    int v6 = 1073039278;
    int v7 = 343597384;
    int v8 = -1074444370;
    int v9 = 343597384;
    →glFrustum();
    →glMatrixMode();
    →glLoadIdentity();
    →glClear();
    →glLoadIdentity();
    int v10 = 0;
    →glTranslated();
    int v11 = 0x3f800000;
    →glRotatef();
    int v12 = 0x3f800000;
    int v13 = 0;
    int v14 = 0x42700000;
    →glRotatef();
    int v15 = sub_8049394();
    →srand(100000000);
    int v16 = 0;
    int* ptr1 = &v1;
    do {
        int v17 = 5;
        int* ptr2 = ptr1;
        int* ptr3 = &v14;
        while(v17 != 0) {
            *ptr3 = *ptr2;
            ++ptr2;
            ++ptr3;
            --v17;
        }
        int v18 = sub_8049330((char)v14, v13, v12);
        if(!(v18 - 1)) {
            →SDL_Quit();
            return result;
        }
        int v19 = →rand();
        int v20 = v19 % 3 + 1;
        int v21 = →rand();
        if(v19 % 3 + 1 == v16) {
            --v10;
        }
        else {
            void* ptr4 = ptr0;
            void* ptr5 = sub_8049363(v19 % 3 + 1, v21 % 3);
            *(void**)(v10 * 4 + (int)&v2) = ptr5;
            sub_80492D1(v15, (int)ptr5, 90);
            v16 = v19 % 3 + 1;
        }
        ++v10;
    }
    while(v10 <= 59);
    int v22 = 0;
    sub_804993D(v15);
    →SDL_GL_SwapBuffers();
    int* ptr6 = &v1;
    do {
        int v23 = 5;
        int* ptr7 = ptr6;
        int* ptr8 = &v14;
        while(v23 != 0) {
            *ptr8 = *ptr7;
            ++ptr7;
            ++ptr8;
            --v23;
        }
        int v24 = sub_8049330((char)v14, v13, v12);
        if(!(v24 - 1)) {
            →SDL_Quit();
            return result;
        }
        ++v22;
        v11 = 0;
        →glRotatef();
        →glClear();
        →glFlush();
        sub_804993D(v15);
        →SDL_GL_SwapBuffers();
        v0 = 20;
        →SDL_Delay();
    }
    while(v22 != 200);
    v22 = 59;
    int* ptr9 = &v1;
    do {
        v16 = 0;
        do {
            int v25 = 5;
            int* ptr10 = ptr9;
            int* ptr11 = &v14;
            while(v25 != 0) {
                *ptr11 = *ptr10;
                ++ptr10;
                ++ptr11;
                --v25;
            }
            int v26 = sub_8049330((char)v14, v13, v12);
            if(!(v26 - 1)) {
                →SDL_Quit();
                return result;
            }
            v11 = 0;
            v0 = 0x40000000;
            →glRotatef();
            sub_80492D1(v15, *(int*)(v22 * 4 + (int)&v2), -5);
            →glClear();
            →glFlush();
            sub_804993D(v15);
            →SDL_GL_SwapBuffers();
            v0 = 20;
            result = →SDL_Delay();
            ++v16;
        }
        while(v16 != 18);
        --v22;
    }
    while(v22 == -1);
    int v27 = 0;
    int* ptr12 = &v1;
    do {
        int v28 = 5;
        int* ptr13 = ptr12;
        int* ptr14 = &v14;
        while(v28 != 0) {
            *ptr14 = *ptr13;
            ++ptr13;
            ++ptr14;
            --v28;
        }
        int v29 = sub_8049330((char)v14, v13, v12);
        if(!(v29 - 1)) {
            →SDL_Quit();
            return result;
        }
        ++v27;
        v11 = 0;
        →glRotatef();
        →glClear();
        →glFlush();
        sub_804993D(v15);
        →SDL_GL_SwapBuffers();
        v0 = 20;
        →SDL_Delay();
    }
    while(v27 != 350);
    →SDL_Quit();
    128 = int(128);
    →SDL_Quit();
    return result;
}

void sub_80486F2() {
    jump gvar_804A0C0;
}

int sub_8048903(int param0, int param1, int param2) {
    unsigned int v0;
    int result = param0;
    int v1 = param1;
    switch((unsigned int)(param2 - 1)) {
        case 0: {
            v0 = (unsigned int)(v1 * 12 + result);
            *(int*)(v0 + 8) = 0x3f800000;
            goto loc_8048993;
        }
        case 1: {
            v0 = (unsigned int)(v1 * 12 + result);
            *(int*)(v0 + 8) = 0;
            *(int*)(v1 * 12 + result + 12) = 0;
            *(int*)(v0 + 16) = 0x3f800000;
            return result;
        }
        case 2: {
            v0 = (unsigned int)(v1 * 12 + result);
            *(int*)(v0 + 8) = 0x3f800000;
            *(int*)(v1 * 12 + result + 12) = 0;
            break;
        }
        case 3: {
            v0 = (unsigned int)(v1 * 12 + result);
            *(int*)(v0 + 8) = 0x3f800000;
            *(int*)(v1 * 12 + result + 12) = 0x3f000000;
            break;
        }
        case 4: {
            v0 = (unsigned int)(v1 * 12 + result);
            *(int*)(v0 + 8) = 0;
        loc_8048993:
            *(int*)(v1 * 12 + result + 12) = 0x3f800000;
            break;
        }
        case 5: {
            v0 = (unsigned int)(v1 * 12 + result);
            *(int*)(v0 + 8) = 0x3f800000;
            *(int*)(v1 * 12 + result + 12) = 0x3f800000;
            *(int*)(v0 + 16) = 0x3f800000;
        }
        default: {
            return result;
        }
    }
    *(int*)(v0 + 16) = 0;
    return result;
}

int sub_80489C3(int param0, char param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result = param0;
    int v4 = param3;
    int v5 = ((unsigned int)param1 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8)) - 66;
    if((unsigned char)v5 <= 18) {
        switch(v5) {
            case 0: {
                break;
            }
            case 2: {
                v1 = 0;
                v2 = ((param2 - 2) ^ ((param2 - 2) >> 31)) - ((param2 - 2) >> 31);
                v0 = 4;
                int v6 = v1 * 2 + v4 * 8 + (v1 + v4) + (v2 + 12);
                int v7 = sub_8048903(*(int*)(v6 * 4 + result + 4), v0, param4);
                *(int*)(v6 * 4 + result + 4) = v7;
                return result;
            }
            case 4: {
                v2 = 2;
                v1 = ((param2 - 2) ^ ((param2 - 2) >> 31)) - ((param2 - 2) >> 31);
                v0 = 2;
                int v6 = v1 * 2 + v4 * 8 + (v1 + v4) + (v2 + 12);
                int v7 = sub_8048903(*(int*)(v6 * 4 + result + 4), v0, param4);
                *(int*)(v6 * 4 + result + 4) = v7;
                return result;
            }
            case 10: {
                v2 = v4;
                v1 = ((param2 - 2) ^ ((param2 - 2) >> 31)) - ((param2 - 2) >> 31);
                v0 = 5;
                v4 = 0;
                int v6 = v1 * 2 + v4 * 8 + (v1 + v4) + (v2 + 12);
                int v7 = sub_8048903(*(int*)(v6 * 4 + result + 4), v0, param4);
                *(int*)(v6 * 4 + result + 4) = v7;
                return result;
            }
            case 1: 
            case 3: 
            case 5: 
            case 6: 
            case 7: 
            case 8: 
            case 9: 
            case 11: 
            case 12: 
            case 13: 
            case 14: 
            case 15: {
                goto loc_80489F5;
            }
            default: {
                throw 0;
            }
        }
        v4 = ((v4 - 2) ^ ((v4 - 2) >> 31)) - ((v4 - 2) >> 31);
        v2 = 0;
        v1 = ((param2 - 2) ^ ((param2 - 2) >> 31)) - ((param2 - 2) >> 31);
        v0 = 3;
    }
    else {
    loc_80489F5:
        v0 = 0;
        v2 = 0;
        v1 = 0;
        v4 = 0;
    }
    int v6 = v1 * 2 + v4 * 8 + (v1 + v4) + (v2 + 12);
    int v7 = sub_8048903(*(int*)(v6 * 4 + result + 4), v0, param4);
    *(int*)(v6 * 4 + result + 4) = v7;
    return result;
}

int sub_8048AA8(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = 0;
    int v5 = v3;
    int result = param0;
    do {
        v3 = 0;
        int v6 = v4 * 36;
        do {
            v2 = 0;
            v1 = v3 * 12 + result + (v6 + 4) + 48;
            do {
                int v7 = *(int*)v1;
                v0 = 0;
                do {
                    *(int*)(v0 + v7 + 16) = 0x3e800000;
                    *(int*)(v0 + v7 + 12) = 0x3e800000;
                    *(int*)(v0 + v7 + 8) = 0x3e800000;
                    v0 += 12;
                }
                while(v0 != 72);
                ++v2;
                v1 += 4;
            }
            while(v2 != 3);
            ++v3;
        }
        while(v3 == 3);
        ++v4;
    }
    while(v4 != 3);
    int v8 = 1;
    v0 = 84;
loc_8048B38:
    while(1) {
        v2 = 0;
        do {
            v1 = 0;
            do {
                int v9 = v1;
                ++v1;
                result = sub_80489C3(result, (char)v0, v2, v9, v8);
            }
            while(v1 != 3);
            ++v2;
        }
        while(v2 == 3);
        ++v8;
        if(v8 == 7) {
            return result;
        }
        v0 = (unsigned int)84 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        switch((unsigned int)(v8 - 2)) {
            case 0: {
                break;
            }
            case 1: {
                goto loc_8048B2A;
            }
            case 2: {
                v0 = (unsigned int)76 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                continue loc_8048B38;
            }
            case 3: {
                v0 = (unsigned int)66 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                continue loc_8048B38;
            }
            case 4: {
                v0 = (unsigned int)68 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            }
            default: {
                continue loc_8048B38;
            }
        }
        v0 = (unsigned int)70 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        continue;
    loc_8048B2A:
        v0 = (unsigned int)82 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
    }
}

int sub_8048B68(int param0, int param1, int param2, int param3, int param4) {
    int result = param0;
    int* ptr0 = (int*)(param1 * 12 + result + 8);
    int v0 = *ptr0;
    int v1 = *(ptr0 + 1);
    int v2 = *(ptr0 + 2);
    int* ptr1 = (int*)(param2 * 12 + result + 8);
    *ptr0 = *ptr1;
    *(ptr0 + 1) = *(ptr1 + 1);
    *(ptr0 + 2) = *(ptr1 + 2);
    int* ptr2 = (int*)(param3 * 12 + result + 8);
    *ptr1 = *ptr2;
    *(ptr1 + 1) = *(ptr2 + 1);
    *(ptr1 + 2) = *(ptr2 + 2);
    int* ptr3 = (int*)(param4 * 12 + result + 8);
    *ptr2 = *ptr3;
    *(ptr2 + 1) = *(ptr3 + 1);
    *(ptr2 + 2) = *(ptr3 + 2);
    *ptr3 = v0;
    *(ptr3 + 1) = v1;
    *(ptr3 + 2) = v2;
    return result;
}

int sub_8048BE1(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result = param0;
    if(param1 != 2) {
        if(param1 == 3) {
            result = sub_8048B68(result, 1, 5, 4, 0);
        }
        else if(!(param1 - 1)) {
            v3 = 3;
            v2 = 4;
            v1 = 2;
            v0 = 1;
            result = sub_8048B68(result, v0, v1, v2, v3);
        }
        return result;
    }
    v3 = 0;
    v2 = 2;
    v1 = 5;
    v0 = 3;
    return sub_8048B68(result, v0, v1, v2, v3);
}

int sub_8048C24(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result = param0;
    if(param1 != 2) {
        if(param1 == 3) {
            result = sub_8048B68(result, 0, 4, 5, 1);
        }
        else if(!(param1 - 1)) {
            v3 = 1;
            v2 = 2;
            v1 = 4;
            v0 = 3;
            result = sub_8048B68(result, v0, v1, v2, v3);
        }
        return result;
    }
    v3 = 3;
    v2 = 5;
    v1 = 2;
    v0 = 0;
    return sub_8048B68(result, v0, v1, v2, v3);
}

int sub_8048C67(int param0, int param1, int param2) {
    char v0;
    char v1;
    __SyntheticTypeUnknown v2;
    int v3;
    short v4;
    short v5;
    short v6;
    int v7 = param2;
    int v8 = param1;
    int result = param0;
    int v9 = v7;
    *(int*)((v8 + 8) * 4 + result + 8) = (double)v9 + *(float*)((v8 + 8) * 4 + result + 8);
    if(v7 < 0) {
        v1 = 6;
        fucompp();
        (unsigned short)v21 = fnstsw((unsigned short)v7);
        if(((v7 >>> 14) & 0x1) && !((v7 >>> 10) & 0x1)) {
            *(int*)((v8 + 8) * 4 + result + 8) = 0;
            int v10 = *(int*)((v8 + 12) * 4 + result + 4);
            *(int*)((v8 + 12) * 4 + result + 4) = *(int*)((v8 + 30) * 4 + result + 4);
            *(int*)((v8 + 30) * 4 + result + 4) = *(int*)((v8 + 36) * 4 + result + 4);
            *(int*)((v8 + 36) * 4 + result + 4) = *(int*)((v8 + 18) * 4 + result + 4);
            *(int*)((v8 + 18) * 4 + result + 4) = v10;
            int v11 = *(int*)((v8 + 21) * 4 + result + 4);
            *(int*)((v8 + 21) * 4 + result + 4) = *(int*)((v8 + 33) * 4 + result + 4);
            *(int*)((v8 + 33) * 4 + result + 4) = *(int*)((v8 + 27) * 4 + result + 4);
            *(int*)((v8 + 27) * 4 + result + 4) = *(int*)((v8 + 15) * 4 + result + 4);
            int* ptr0 = (int*)((v8 + 12) * 4 + result + 4);
            *(int*)((v8 + 15) * 4 + result + 4) = v11;
            int v12 = 0;
            do {
                ++v12;
                int v13 = sub_8048BE1(ptr0[0], 3);
                ptr0[0] = v13;
                int v14 = sub_8048BE1(ptr0[3], 3);
                ptr0[3] = v14;
                v7 = sub_8048BE1(ptr0[6], 3);
                ptr0[6] = v7;
                ptr0 += 9;
            }
            while(v12 != 3);
        }
    }
    else if(v7) {
        v1 = 6;
        fucompp();
        (unsigned short)v21 = fnstsw((unsigned short)v7);
        if(((v7 >>> 14) & 0x1) && !((v7 >>> 10) & 0x1)) {
            int v15 = *(int*)((v8 + 36) * 4 + result + 4);
            *(int*)((v8 + 8) * 4 + result + 8) = 0;
            int v16 = *(int*)((v8 + 18) * 4 + result + 4);
            *(int*)((v8 + 18) * 4 + result + 4) = v15;
            *(int*)((v8 + 36) * 4 + result + 4) = *(int*)((v8 + 30) * 4 + result + 4);
            *(int*)((v8 + 30) * 4 + result + 4) = *(int*)((v8 + 12) * 4 + result + 4);
            *(int*)((v8 + 12) * 4 + result + 4) = v16;
            int v17 = *(int*)((v8 + 15) * 4 + result + 4);
            *(int*)((v8 + 15) * 4 + result + 4) = *(int*)((v8 + 27) * 4 + result + 4);
            *(int*)((v8 + 27) * 4 + result + 4) = *(int*)((v8 + 33) * 4 + result + 4);
            *(int*)((v8 + 33) * 4 + result + 4) = *(int*)((v8 + 21) * 4 + result + 4);
            int* ptr1 = (int*)((v8 + 12) * 4 + result + 4);
            *(int*)((v8 + 21) * 4 + result + 4) = v17;
            int v18 = 0;
            do {
                ++v18;
                int v19 = sub_8048C24(ptr1[0], 3);
                ptr1[0] = v19;
                int v20 = sub_8048C24(ptr1[3], 3);
                ptr1[3] = v20;
                v7 = sub_8048C24(ptr1[6], 3);
                ptr1[6] = v7;
                ptr1 += 9;
            }
            while(v18 != 3);
        }
    }
    else {
        v1 = 0;
    }
    v2[v1 - 1] = *(float*)(result + 40);
    v2[v1 - 2] = *(float*)(result + 44);
    v2[v22 + 1] = fucom(v2[v1 - 1], v2[v1 - 2]);
    (unsigned short)v21 = fnstsw((unsigned short)v7);
    if(((v6 >>> 10) & 0x1) || !((v6 >>> 14) & 0x1)) {
        v2[v1 - 3] = 90.0;
        v2[v1 - 4] = v2[v1 - 1];
        v2[v1 - 4] -= v2[v1 - 3];
        v2[v22 + 2] = fucom(v2[v1 - 2], v2[v1 - 4]);
        (unsigned short)v21 = fnstsw(v6);
        v2[v1 - 2] = v2[v1 - 4];
        if(!((v6 >>> 10) & 0x1) && ((v6 >>> 14) & 0x1)) {
            goto loc_8048E3E;
        }
        else {
            v2[v1 - 3] += v2[v1 - 1];
            v2[v22 + 1] = fucom(v2[v1 - 2], v2[v1 - 3]);
            (unsigned short)v21 = fnstsw(v6);
            v2[v1 - 2] = v2[v1 - 3];
            if(((v6 >>> 14) & 0x1) && !((v6 >>> 10) & 0x1)) {
                goto loc_8048E3E;
            }
        }
    }
    else {
    loc_8048E3E:
        v2[v1 - 3] = *(float*)(result + 48);
        v2[v22 + 2] = fucom(v2[v1 - 1], v2[v1 - 3]);
        (unsigned short)v21 = fnstsw(v6);
        if(((v4 >>> 10) & 0x1) || !((v4 >>> 14) & 0x1)) {
            v2[v1 - 4] = 90.0;
            v2[v1 + 3] = v2[v1 - 1];
            v2[v1 + 3] -= v2[v1 - 4];
            v2[v22 + 2] = fucom(v2[v1 - 3], v2[v1 + 3]);
            (unsigned short)v21 = fnstsw(v4);
            v2[v1 - 3] = v2[v1 + 3];
            if(((v5 >>> 10) & 0x1) || !((v5 >>> 14) & 0x1)) {
                v2[v1 - 1] += v2[v1 - 4];
                v2[v22 + 2] = fucomp(v2[v1 - 1], v2[v1 - 3]);
                (unsigned short)v21 = fnstsw(v5);
                v2[v1 - 2] = v2[v1 - 3];
                v0 = v1 - 2;
                if(((v3 >>> 14) & 0x1) && !((v3 >>> 10) & 0x1)) {
                    v2[v0] += *(float*)(result + 12);
                    *(int*)(result + 48) = 0;
                    *(int*)(result + 44) = 0;
                    *(int*)(result + 40) = 0;
                    *(int*)(result + 12) = v2[v0];
                    return result;
                }
            }
            else {
                v2[v1 - 1] = v2[v1 - 2];
                v0 = v1 - 1;
                v2[v0] += *(float*)(result + 12);
                *(int*)(result + 48) = 0;
                *(int*)(result + 44) = 0;
                *(int*)(result + 40) = 0;
                *(int*)(result + 12) = v2[v0];
                return result;
            }
        }
        else {
            v2[v1 - 1] = v2[v1 - 2];
            v0 = v1 - 1;
            v2[v0] += *(float*)(result + 12);
            *(int*)(result + 48) = 0;
            *(int*)(result + 44) = 0;
            *(int*)(result + 40) = 0;
            *(int*)(result + 12) = v2[v0];
        }
    }
    return result;
}

int sub_8048EB5(int param0, int param1, int param2) {
    char v0;
    char v1;
    __SyntheticTypeUnknown v2;
    int v3;
    short v4;
    short v5;
    short v6;
    int v7 = param2;
    int v8 = param1;
    int result = param0;
    int v9 = v7;
    *(int*)((v8 + 4) * 4 + result + 12) = (double)v9 + *(float*)((v8 + 4) * 4 + result + 12);
    if(v7 < 0) {
        v1 = 6;
        fucompp();
        (unsigned short)v26 = fnstsw((unsigned short)v7);
        if(((v7 >>> 14) & 0x1) && !((v7 >>> 10) & 0x1)) {
            int v10 = 0;
            *(int*)((v8 + 4) * 4 + result + 12) = 0;
            int v11 = v8 * 12 + result;
            int v12 = *(int*)(v11 + 60);
            *(int*)(v11 + 60) = *(int*)(v11 + 132);
            *(int*)(v11 + 132) = *(int*)(v11 + 124);
            int v13 = *(int*)(v11 + 52);
            *(int*)(v11 + 52) = v12;
            int v14 = *(int*)(v11 + 56);
            *(int*)(v11 + 124) = v13;
            *(int*)(v11 + 56) = *(int*)(v11 + 96);
            *(int*)(v11 + 96) = *(int*)(v11 + 128);
            int v15 = *(int*)(v11 + 88);
            *(int*)(v11 + 88) = v14;
            *(int*)(v11 + 128) = v15;
            int* ptr0 = (int*)(v8 * 12 + result + 52);
            do {
                ++v10;
                int v16 = sub_8048BE1(ptr0[0], 2);
                ptr0[0] = v16;
                int v17 = sub_8048BE1(ptr0[1], 2);
                ptr0[1] = v17;
                v7 = sub_8048BE1(ptr0[2], 2);
                ptr0[2] = v7;
                ptr0 += 9;
            }
            while(v10 != 3);
        }
    }
    else if(v7) {
        v1 = 6;
        fucompp();
        (unsigned short)v26 = fnstsw((unsigned short)v7);
        if(((v7 >>> 14) & 0x1) && !((v7 >>> 10) & 0x1)) {
            int v18 = 0;
            *(int*)((v8 + 4) * 4 + result + 12) = 0;
            int v19 = v8 * 12 + result;
            int v20 = *(int*)(v19 + 52);
            *(int*)(v19 + 52) = *(int*)(v19 + 124);
            *(int*)(v19 + 124) = *(int*)(v19 + 132);
            int v21 = *(int*)(v19 + 60);
            *(int*)(v19 + 60) = v20;
            int v22 = *(int*)(v19 + 88);
            *(int*)(v19 + 132) = v21;
            *(int*)(v19 + 88) = *(int*)(v19 + 128);
            *(int*)(v19 + 128) = *(int*)(v19 + 96);
            int v23 = *(int*)(v19 + 56);
            *(int*)(v19 + 56) = v22;
            *(int*)(v19 + 96) = v23;
            int* ptr1 = (int*)(v8 * 12 + result + 52);
            do {
                ++v18;
                int v24 = sub_8048C24(ptr1[0], 2);
                ptr1[0] = v24;
                int v25 = sub_8048C24(ptr1[1], 2);
                ptr1[1] = v25;
                v7 = sub_8048C24(ptr1[2], 2);
                ptr1[2] = v7;
                ptr1 += 9;
            }
            while(v18 != 3);
        }
    }
    else {
        v1 = 0;
    }
    v2[v1 - 1] = *(float*)(result + 28);
    v2[v1 - 2] = *(float*)(result + 32);
    v2[v27 + 1] = fucom(v2[v1 - 1], v2[v1 - 2]);
    (unsigned short)v26 = fnstsw((unsigned short)v7);
    if(((v6 >>> 10) & 0x1) || !((v6 >>> 14) & 0x1)) {
        v2[v1 - 3] = 90.0;
        v2[v1 - 4] = v2[v1 - 1];
        v2[v1 - 4] -= v2[v1 - 3];
        v2[v27 + 2] = fucom(v2[v1 - 2], v2[v1 - 4]);
        (unsigned short)v26 = fnstsw(v6);
        v2[v1 - 2] = v2[v1 - 4];
        if(!((v6 >>> 10) & 0x1) && ((v6 >>> 14) & 0x1)) {
            goto loc_804905F;
        }
        else {
            v2[v1 - 3] += v2[v1 - 1];
            v2[v27 + 1] = fucom(v2[v1 - 2], v2[v1 - 3]);
            (unsigned short)v26 = fnstsw(v6);
            v2[v1 - 2] = v2[v1 - 3];
            if(((v6 >>> 14) & 0x1) && !((v6 >>> 10) & 0x1)) {
                goto loc_804905F;
            }
        }
    }
    else {
    loc_804905F:
        v2[v1 - 3] = *(float*)(result + 36);
        v2[v27 + 2] = fucom(v2[v1 - 1], v2[v1 - 3]);
        (unsigned short)v26 = fnstsw(v6);
        if(((v4 >>> 10) & 0x1) || !((v4 >>> 14) & 0x1)) {
            v2[v1 - 4] = 90.0;
            v2[v1 + 3] = v2[v1 - 1];
            v2[v1 + 3] -= v2[v1 - 4];
            v2[v27 + 2] = fucom(v2[v1 - 3], v2[v1 + 3]);
            (unsigned short)v26 = fnstsw(v4);
            v2[v1 - 3] = v2[v1 + 3];
            if(((v5 >>> 10) & 0x1) || !((v5 >>> 14) & 0x1)) {
                v2[v1 - 1] += v2[v1 - 4];
                v2[v27 + 2] = fucomp(v2[v1 - 1], v2[v1 - 3]);
                (unsigned short)v26 = fnstsw(v5);
                v2[v1 - 2] = v2[v1 - 3];
                v0 = v1 - 2;
                if(((v3 >>> 14) & 0x1) && !((v3 >>> 10) & 0x1)) {
                    v2[v0] += *(float*)(result + 8);
                    *(int*)(result + 36) = 0;
                    *(int*)(result + 32) = 0;
                    *(int*)(result + 28) = 0;
                    *(int*)(result + 8) = v2[v0];
                    return result;
                }
            }
            else {
                v2[v1 - 1] = v2[v1 - 2];
                v0 = v1 - 1;
                v2[v0] += *(float*)(result + 8);
                *(int*)(result + 36) = 0;
                *(int*)(result + 32) = 0;
                *(int*)(result + 28) = 0;
                *(int*)(result + 8) = v2[v0];
                return result;
            }
        }
        else {
            v2[v1 - 1] = v2[v1 - 2];
            v0 = v1 - 1;
            v2[v0] += *(float*)(result + 8);
            *(int*)(result + 36) = 0;
            *(int*)(result + 32) = 0;
            *(int*)(result + 28) = 0;
            *(int*)(result + 8) = v2[v0];
        }
    }
    return result;
}

int sub_80490D5(int param0, int param1, int param2) {
    char v0;
    char v1;
    __SyntheticTypeUnknown v2;
    int v3;
    short v4;
    short v5;
    short v6;
    int v7 = param2;
    int v8 = param1;
    int result = param0;
    int v9 = v7;
    *(int*)((v8 + 4) * 4 + result) = (double)v9 + *(float*)((v8 + 4) * 4 + result);
    if(v7 < 0) {
        v1 = 6;
        fucompp();
        (unsigned short)v26 = fnstsw((unsigned short)v7);
        if(((v7 >>> 14) & 0x1) && !((v7 >>> 10) & 0x1)) {
            int v10 = 0;
            *(int*)((v8 + 4) * 4 + result) = 0;
            int v11 = v8 * 36 + result;
            int v12 = *(int*)(v11 + 52);
            *(int*)(v11 + 52) = *(int*)(v11 + 76);
            *(int*)(v11 + 76) = *(int*)(v11 + 84);
            int v13 = *(int*)(v11 + 60);
            *(int*)(v11 + 60) = v12;
            int v14 = *(int*)(v11 + 64);
            *(int*)(v11 + 84) = v13;
            *(int*)(v11 + 64) = *(int*)(v11 + 80);
            *(int*)(v11 + 80) = *(int*)(v11 + 72);
            int v15 = *(int*)(v11 + 56);
            *(int*)(v11 + 56) = v14;
            *(int*)(v11 + 72) = v15;
            int* ptr0 = (int*)(v8 * 36 + result + 52);
            do {
                ++v10;
                int v16 = sub_8048BE1(ptr0[0], 1);
                ptr0[0] = v16;
                int v17 = sub_8048BE1(ptr0[1], 1);
                ptr0[1] = v17;
                v7 = sub_8048BE1(ptr0[2], 1);
                ptr0[2] = v7;
                ptr0 += 3;
            }
            while(v10 != 3);
        }
    }
    else if(v7) {
        v1 = 6;
        fucompp();
        (unsigned short)v26 = fnstsw((unsigned short)v7);
        if(((v7 >>> 14) & 0x1) && !((v7 >>> 10) & 0x1)) {
            int v18 = 0;
            *(int*)((v8 + 4) * 4 + result) = 0;
            int v19 = v8 * 36 + result;
            int v20 = *(int*)(v19 + 60);
            *(int*)(v19 + 60) = *(int*)(v19 + 84);
            *(int*)(v19 + 84) = *(int*)(v19 + 76);
            int v21 = *(int*)(v19 + 52);
            *(int*)(v19 + 52) = v20;
            int v22 = *(int*)(v19 + 56);
            *(int*)(v19 + 76) = v21;
            *(int*)(v19 + 56) = *(int*)(v19 + 72);
            *(int*)(v19 + 72) = *(int*)(v19 + 80);
            int v23 = *(int*)(v19 + 64);
            *(int*)(v19 + 64) = v22;
            *(int*)(v19 + 80) = v23;
            int* ptr1 = (int*)(v8 * 36 + result + 52);
            do {
                ++v18;
                int v24 = sub_8048C24(ptr1[0], 1);
                ptr1[0] = v24;
                int v25 = sub_8048C24(ptr1[1], 1);
                ptr1[1] = v25;
                v7 = sub_8048C24(ptr1[2], 1);
                ptr1[2] = v7;
                ptr1 += 3;
            }
            while(v18 != 3);
        }
    }
    else {
        v1 = 0;
    }
    v2[v1 - 1] = *(float*)(result + 16);
    v2[v1 - 2] = *(float*)(result + 20);
    v2[v27 + 1] = fucom(v2[v1 - 1], v2[v1 - 2]);
    (unsigned short)v26 = fnstsw((unsigned short)v7);
    if(((v6 >>> 10) & 0x1) || !((v6 >>> 14) & 0x1)) {
        v2[v1 - 3] = 90.0;
        v2[v1 - 4] = v2[v1 - 1];
        v2[v1 - 4] -= v2[v1 - 3];
        v2[v27 + 2] = fucom(v2[v1 - 2], v2[v1 - 4]);
        (unsigned short)v26 = fnstsw(v6);
        v2[v1 - 2] = v2[v1 - 4];
        if(!((v6 >>> 10) & 0x1) && ((v6 >>> 14) & 0x1)) {
            goto loc_804925B;
        }
        else {
            v2[v1 - 3] += v2[v1 - 1];
            v2[v27 + 1] = fucom(v2[v1 - 2], v2[v1 - 3]);
            (unsigned short)v26 = fnstsw(v6);
            v2[v1 - 2] = v2[v1 - 3];
            if(((v6 >>> 14) & 0x1) && !((v6 >>> 10) & 0x1)) {
                goto loc_804925B;
            }
        }
    }
    else {
    loc_804925B:
        v2[v1 - 3] = *(float*)(result + 24);
        v2[v27 + 2] = fucom(v2[v1 - 1], v2[v1 - 3]);
        (unsigned short)v26 = fnstsw(v6);
        if(((v4 >>> 10) & 0x1) || !((v4 >>> 14) & 0x1)) {
            v2[v1 - 4] = 90.0;
            v2[v1 + 3] = v2[v1 - 1];
            v2[v1 + 3] -= v2[v1 - 4];
            v2[v27 + 2] = fucom(v2[v1 - 3], v2[v1 + 3]);
            (unsigned short)v26 = fnstsw(v4);
            v2[v1 - 3] = v2[v1 + 3];
            if(((v5 >>> 10) & 0x1) || !((v5 >>> 14) & 0x1)) {
                v2[v1 - 1] += v2[v1 - 4];
                v2[v27 + 2] = fucomp(v2[v1 - 1], v2[v1 - 3]);
                (unsigned short)v26 = fnstsw(v5);
                v2[v1 - 2] = v2[v1 - 3];
                v0 = v1 - 2;
                if(((v3 >>> 14) & 0x1) && !((v3 >>> 10) & 0x1)) {
                    v2[v0] += *(float*)(result + 4);
                    *(int*)(result + 24) = 0;
                    *(int*)(result + 20) = 0;
                    *(int*)(result + 16) = 0;
                    *(int*)(result + 4) = v2[v0];
                    return result;
                }
            }
            else {
                v2[v1 - 1] = v2[v1 - 2];
                v0 = v1 - 1;
                v2[v0] += *(float*)(result + 4);
                *(int*)(result + 24) = 0;
                *(int*)(result + 20) = 0;
                *(int*)(result + 16) = 0;
                *(int*)(result + 4) = v2[v0];
                return result;
            }
        }
        else {
            v2[v1 - 1] = v2[v1 - 2];
            v0 = v1 - 1;
            v2[v0] += *(float*)(result + 4);
            *(int*)(result + 24) = 0;
            *(int*)(result + 20) = 0;
            *(int*)(result + 16) = 0;
            *(int*)(result + 4) = v2[v0];
        }
    }
    return result;
}

int sub_80492D1(int param0, int param1, int param2) {
    int v0 = *(int*)(param1 + 4);
    if(v0 == 2) {
        sub_8048EB5(param0, *(int*)(param1 + 8), param2);
    }
    else if(v0 == 3) {
        sub_8048C67(param0, *(int*)(param1 + 8), param2);
    }
    else if(!(v0 - 1)) {
        sub_80490D5(param0, *(int*)(param1 + 8), param2);
    }
    return param0;
}

int sub_8049330(char param0, int param1, int param2) {
    int result;
    do {
        result = →SDL_PollEvent();
        if(!result) {
            return result;
        }
    }
    while(param0 != 2 || param2 != 27);
    return 1;
}

void* sub_8049363(int param0, int param1) {
    void* result = →malloc(12);
    *(int*)((int)result + 4) = param0;
    *(int*)((int)result + 8) = param1;
    return result;
}

void* sub_804937F() {
    void* result = →malloc(80);
    *(int*)((int)result + 4) = 0x3f4ccccd;
    return result;
}

int sub_8049394() {
    int v0 = 0;
    void* ptr0 = →malloc(160);
    int v1 = (int)ptr0;
    *(int*)((int)ptr0 + 4) = 0;
    *(int*)((int)ptr0 + 8) = 0;
    *(int*)((int)ptr0 + 12) = 0;
    *(int*)((int)ptr0 + 16) = 0;
    *(int*)((int)ptr0 + 28) = 0;
    *(int*)((int)ptr0 + 40) = 0;
    *(int*)((int)ptr0 + 20) = 0;
    *(int*)((int)ptr0 + 32) = 0;
    *(int*)((int)ptr0 + 44) = 0;
    *(int*)((int)ptr0 + 24) = 0;
    *(int*)((int)ptr0 + 36) = 0;
    *(int*)((int)ptr0 + 48) = 0;
    do {
        int v2 = 0;
        unsigned int* ptr1 = (unsigned int*)(v0 * 36 + v1 + 52);
        do {
            void* ptr2 = sub_804937F();
            ++v2;
            *ptr1 = ptr2;
            void* ptr3 = sub_804937F();
            *(void**)(ptr1 + 1) = ptr3;
            ptr0 = sub_804937F();
            *(void**)(ptr1 + 2) = ptr0;
            ptr1 += 3;
        }
        while(v2 != 3);
        ++v0;
    }
    while(v0 == 3);
    return sub_8048AA8(v1);
}

int sub_8049444(int param0) {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    int v6;
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
    __SyntheticTypeUnknownF v24;
    __SyntheticTypeUnknownF v25;
    __SyntheticTypeUnknownF v26;
    int v27 = v6;
    int v28 = param0;
    →glPushMatrix();
    →glBegin();
    int v29 = v28 + 8;
    →glColor3fv();
    *(int*)(v28 + 4) = fdivr(*(int*)(v28 + 4));
    float v30 = 1.8;
    int v31 = 0x3fe66666;
    int v32 = 0x3fe66666;
    v29 = 0x3fe66666;
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    fchs();
    v30 = v4 / 1.8;
    v31 = v4 / 1.8;
    v32 = v10;
    v29 = v10;
    →glVertex3f();
    __SyntheticTypeUnknownF v33 = *(float*)(v28 + 4);
    fchs();
    v31 = 0x3fe66666;
    v32 = 0x3fe66666;
    v30 = v33 / (v33 / 1.8);
    v29 = v33 / (v33 / 1.8);
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    v31 = v24;
    fchs();
    v30 = v24 / 1.8;
    v32 = v24 / 1.8;
    →glVertex3f();
    v29 = v28 + 20;
    →glColor3fv();
    fchs();
    __SyntheticTypeUnknownF v34 = *(float*)(v28 + 4) / 1.8;
    v31 = 0x3fe66666;
    v39[v40 + 1] = fdivrp(v34, 1.7999999523162842);
    v30 = v26;
    v32 = v26;
    v29 = v18;
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    v31 = v25;
    v32 = v25;
    fchs();
    v30 = v13 / 1.8;
    v29 = v13 / 1.8;
    →glVertex3f();
    *(int*)(v28 + 4) = fdivr(*(int*)(v28 + 4));
    v30 = 1.8;
    v31 = 0x3fe66666;
    v32 = 0x3fe66666;
    v29 = 0x3fe66666;
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    fchs();
    v30 = v11 / 1.8;
    v31 = v30;
    v32 = v1;
    →glVertex3f();
    v29 = v28 + 32;
    →glColor3fv();
    *(int*)(v28 + 4) = fdivr(*(int*)(v28 + 4));
    v30 = 1.8;
    v31 = 0x3fe66666;
    v32 = 0x3fe66666;
    v29 = 0x3fe66666;
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    v31 = v21;
    v32 = v21;
    fchs();
    v30 = v19 / 1.8;
    v29 = v30;
    →glVertex3f();
    fchs();
    v39[v40 + 1] = fdivrp(*(float*)(v28 + 4) / 1.8, 1.7999999523162842);
    v30 = v5;
    v31 = v5;
    v32 = v7;
    v29 = v7;
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    v31 = v23;
    fchs();
    v30 = v23 / 1.8;
    v32 = v23 / 1.8;
    →glVertex3f();
    v29 = v28 + 44;
    →glColor3fv();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    fchs();
    v30 = v20 / 1.8;
    v31 = v20 / 1.8;
    v32 = v2;
    v29 = v2;
    →glVertex3f();
    fchs();
    __SyntheticTypeUnknownF v35 = *(float*)(v28 + 4) / 1.8;
    v31 = 0x3fe66666;
    v39[v40 + 1] = fdivrp(v35, 1.7999999523162842);
    v30 = v15;
    v32 = v15;
    v29 = v0;
    →glVertex3f();
    fchs();
    v30 = *(float*)(v28 + 4) / 1.8;
    v31 = v30;
    v32 = v30;
    v29 = v30;
    →glVertex3f();
    __SyntheticTypeUnknownF v36 = *(float*)(v28 + 4);
    fchs();
    v31 = 0x3fe66666;
    v32 = 0x3fe66666;
    v30 = v36 / (v36 / 1.8);
    →glVertex3f();
    v29 = v28 + 56;
    →glColor3fv();
    fchs();
    v30 = *(float*)(v28 + 4) / 1.8;
    v31 = v30;
    v32 = v30;
    v29 = v30;
    →glVertex3f();
    fchs();
    v39[v40 + 1] = fdivrp(*(float*)(v28 + 4) / 1.8, 1.7999999523162842);
    v30 = v8;
    v31 = v8;
    v32 = v14;
    v29 = v14;
    →glVertex3f();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    v31 = v22;
    fchs();
    v30 = v22 / 1.8;
    v32 = v22 / 1.8;
    v29 = v12;
    →glVertex3f();
    __SyntheticTypeUnknownF v37 = *(float*)(v28 + 4);
    fchs();
    v31 = 0x3fe66666;
    v32 = 0x3fe66666;
    v30 = v37 / (v37 / 1.8);
    →glVertex3f();
    v29 = v28 + 68;
    →glColor3fv();
    v39[v40] = fdivr(1.8, *(float*)(v28 + 4));
    v31 = v9;
    v32 = v9;
    fchs();
    v30 = v17 / 1.8;
    v29 = v17 / 1.8;
    →glVertex3f();
    fchs();
    __SyntheticTypeUnknownF v38 = *(float*)(v28 + 4) / 1.8;
    v31 = 0x3fe66666;
    v39[v40 + 1] = fdivrp(v38, 1.7999999523162842);
    v30 = v16;
    v32 = v16;
    v29 = v3;
    →glVertex3f();
    fchs();
    v30 = *(float*)(v28 + 4) / 1.8;
    v31 = v30;
    v32 = v30;
    v29 = v30;
    →glVertex3f();
    fchs();
    v39[v40 + 1] = fdivrp(*(float*)(v28 + 4) / 1.8, 1.7999999523162842);
    →glVertex3f();
    int result = →glEnd();
    glPopMatrix();
    return result;
}

int sub_804993D(int param0) {
    __SyntheticTypeUnknownF v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    __int128 v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF v6;
    __int128 v7;
    __SyntheticTypeUnknownF v8;
    __int128 v9;
    __int128 v10;
    __SyntheticTypeUnknownF v11;
    int v12;
    __SyntheticTypeUnknownF v13;
    __SyntheticTypeUnknownF v14;
    __SyntheticTypeUnknownF v15;
    int v16 = 0;
    int v17 = v12;
    int v18 = 0;
    int v19 = 0;
    int v20 = 0x3f800000;
    int v21 = *(int*)(param0 + 4);
    →glRotatef();
    int v22 = 0x3f800000;
    int v23 = 0;
    int v24 = *(int*)(param0 + 8);
    →glRotatef();
    →glRotatef();
    int v25 = param0;
    do {
        int v26 = 0;
        →glRotatef();
        int v27 = v25;
        do {
            int v28 = 0;
            →glRotatef();
            do {
                v18 = 0x3f800000;
                →glRotatef();
                int v29 = v16;
                fld1();
                v34[v35] = fsubr((double)v29, v2);
                v19 = v13;
                fld1();
                v34[v35] = fsubr(v3, v9);
                v20 = v15;
                fld1();
                v34[v35] = fsubr(v7, v1);
                v21 = v5;
                float v30 = v6;
                float v31 = v14;
                float v32 = v4;
                →glTranslatef();
                sub_8049444(*(int*)(v28 * 4 + v27 + 52));
                fld1();
                v34[v35 + 1] = fsubr(v6, v32);
                v19 = v11;
                v34[v35] = fsubr(v31, v10);
                v20 = v0;
                v2 = v8 - v30;
                v21 = v2;
                →glTranslatef();
                v22 = 0;
                __SyntheticTypeUnknownF v33 = *(float*)(v28 * 4 + param0 + 40);
                ++v28;
                fchs();
                v24 = v33;
                →glRotatef();
            }
            while(v28 != 3);
            ++v26;
            fchs();
            →glRotatef();
            v27 += 12;
        }
        while(v26 != 3);
        ++v16;
        fchs();
        →glRotatef();
        v25 += 36;
    }
    while(v16 != 3);
    fchs();
    →glRotatef();
    fchs();
    →glRotatef();
    fchs();
    return →glRotatef();
}
