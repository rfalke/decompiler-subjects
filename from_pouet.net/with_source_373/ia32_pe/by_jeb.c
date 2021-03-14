
int sub_41D3EC(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17) {
    char* ptr0;
    char v0;
    unsigned int* ptr1;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    __SyntheticTypeUnknown v9;
    short v10;
    unsigned int* ptr2;
    char* ptr3;
    int v11;
    short v12;
    int v13;
    int* ptr4;
    int v14;
    __SyntheticTypeUnknown v15;
    char* ptr5;
    int v16;
    short v17;
    while(1) {
        ptr1 = ptr1 - 1;
        *ptr1 = ptr2;
        ptr2 = ptr1;
        v0 = *(int*)((char*)ptr2 + 75) == -73;
        char v18 = (((*(int*)((char*)ptr2 + 75) + 73) ^ (*(int*)((char*)ptr2 + 75) ^ 0xffffffb7)) >>> 4) & 0x1;
        if(*(unsigned int*)((char*)ptr2 + 75) < 0xffffffb7 || v0) {
            break;
        }
        else {
            --ptr1;
            *ptr1 = (unsigned int)2 | ((unsigned int)__parity__((unsigned char)(unsigned int)((unsigned int)((unsigned char)ptr4 | 0xe7) | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8) | 0xc18ff6a)) << 2) | ((unsigned int)0 << 3) | ((unsigned int)v18 << 4) | ((unsigned int)0 << 5) | ((unsigned int)((unsigned int)((unsigned int)((unsigned char)ptr4 | 0xe7) | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8) | 0xc18ff6a) ? 0: 1) << 6) | ((unsigned int)((unsigned int)((unsigned int)((unsigned char)ptr4 | 0xe7) | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8) | 0xc18ff6a) >= 0x80000000) << 7) | ((unsigned int)v1 << 8) | ((unsigned int)v2 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v3 << 12) | ((unsigned int)v4 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v5 << 18) | ((unsigned int)v7 << 19) | ((unsigned int)v6 << 20) | ((unsigned int)v8 << 21) | ((unsigned int)0 << 22);
            char* ptr6 = (char*)((unsigned int)((unsigned int)((unsigned char)ptr4 | 0xe7) | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8) | 0xc18ff6a) + 710910775);
            v23[v24] = fcmovb(v15, v9);
            char v19 = *(char*)((char*)ptr2 + 0x7544d012);
            *(char*)((char*)ptr2 + 0x7544d012) = (unsigned char)((unsigned int)((unsigned int)((unsigned char)ptr4 | 0xe7) | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8) | 0xc18ff6a) < 3584056521) + (unsigned char)ptr6 + *(char*)((char*)ptr2 + 0x7544d012);
            int v20 = *(int*)(ptr5 - 2068627889);
            *(unsigned int*)(ptr5 - 2068627889) = (int*)((unsigned int)__carry__((unsigned char)ptr6, v19) + *(int*)(ptr5 - 2068627889) + (int)ptr5);
            *(unsigned int*)(ptr6 - 1) = (int*)(*(int*)(ptr6 - 1) - (int)(int*)((unsigned int)(char*)__carry__((int)ptr5, v20) + (int)ptr3));
            if(!*(int*)(ptr6 - 1)) {
                *ptr5 = ((unsigned char)v16 + *ptr6) | *ptr5;
                ptr6 = (char*)0xEEB9867C;
                ptr0 = (char*)((int)ptr0 & 0xffffff00);
            }
            *(char*)0xF3C0322E = (unsigned char)ptr6;
            ptr3 = (char*)0xF3C0322F;
            --ptr5;
            v16 = 420446371;
            *(char*)0xF3C0322F = *(char*)0xF3C0322F | 0x19;
            ptr0 = (char*)((int)ptr0 ^ (int)ptr2);
            char* ptr7 = (unsigned int)(unsigned char)v11 | ((unsigned int)199 << 8) | ((unsigned int)(unsigned short)(v11 >>> 16) << 16);
            wait();
            ptr4 = (int*)(ptr6 + 742398206);
            --ptr1;
            *ptr1 = (unsigned int)v10;
            *(char*)0xF3C0322F = 0;
            if(*(char*)0xF3C0322F) {
                *(char*)0xF3C03238 = (unsigned char)(int*)((int)ptr0 >>> 8) + *(char*)0xF3C03238;
                ptr0 = *ptr1;
                ++ptr1;
                int* ptr8 = (int*)(*(int*)0x841FB1E4 ^ (int)ptr7);
                char v21 = *(char*)((char*)((int)(int*)((int)ptr8 * 4) + (int)(int*)((int)ptr4 ^ 0x18c80900)) - 0x296aea5e);
                *(char*)((char*)((int)(int*)((int)ptr8 * 4) + (int)(int*)((int)ptr4 ^ 0x18c80900)) - 0x296aea5e) = (unsigned char)(*(unsigned int*)((char*)ptr2 - 91) < 0xffffff84) + (unsigned char)(int*)((int)(int*)((int)ptr4 ^ 0x18c80900) >>> 8) + *(char*)((char*)((int)(int*)((int)ptr8 * 4) + (int)(int*)((int)ptr4 ^ 0x18c80900)) - 0x296aea5e);
                char v22 = __carry__((unsigned char)(int*)((int)(int*)((int)ptr4 ^ 0x18c80900) >>> 8), v21);
                int v13 = in((int*)((int)ptr4 ^ 0x18c80900), 32932);
                if(!v22 && !(*(char*)((char*)((int)(int*)((int)ptr8 * 4) + (int)(int*)((int)ptr4 ^ 0x18c80900)) - 0x296aea5e) ? 0: 1)) {
                    --ptr1;
                    *ptr1 = ptr5;
                    --ptr1;
                    *ptr1 = 1;
                    --ptr1;
                    *ptr1 = 1080575728;
                    *(int*)0xF3C0322F = v13;
                    --ptr1;
                    *ptr1 = 15;
                    *(int*)(ptr5 + 1276147645) = 0 - *(int*)(ptr5 + 1276147645);
                    --ptr1;
                    *ptr1 = ptr8;
                    *ptr1 = (unsigned int)v17;
                    iretd();
                }
                v13 = (unsigned int)((unsigned char)v13 - ((unsigned char)v22 + 139)) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                v13 = (unsigned int)(unsigned char)__ror__((unsigned short)((unsigned char)v13 + 35) | ((unsigned short)((unsigned char)v13 >= 221) << 8), 1) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                ++ptr5;
                *(char*)(v13 * 9 - 607847261) = (unsigned char)(v13 >>> 8) ^ *(char*)(v13 * 9 - 607847261);
                if(ptr8) {
                    --ptr1;
                    *ptr1 = &loc_41D4E3;
                    /*BAD_CALL!*/ 0x887257f9();
                    *(int*)(ptr5 - 1692175357) = *(int*)(ptr5 - 1692175357) | v14;
                    int3();
                }
                *(unsigned int*)((char*)ptr2 - 1) = (int*)(*(int*)((char*)ptr2 - 1) ^ (int)ptr2);
                --ptr1;
                *ptr1 = (unsigned int)v17;
                *(short*)ptr5 = fnstcw(*(short*)ptr5);
                *ptr0 = (unsigned char)(int*)((int)ptr0 >>> 8) | *ptr0;
                salc();
                *ptr1 = (unsigned int)v12;
                short* ptr9 = (unsigned int)(((unsigned char)((unsigned int)((unsigned char)ptr2 + 66) | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8)) - 217) | 0x81) | ((unsigned int)(int*)((int)(int*)((int)(short*)(((unsigned int)((unsigned char)ptr2 + 66) | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8)) - 1833443801) >>> 8) & 0xffffff) << 8);
                *ptr9 = ficomp(*ptr9);
                sti();
                hlt();
            }
            v11 = (unsigned int)(unsigned char)ptr7 | ((unsigned int)((unsigned char)(int*)((int)ptr7 >>> 8) + *(char*)0x3640280) << 8) | ((unsigned int)(unsigned short)(int*)((int)ptr7 >>> 16) << 16);
            *(ptr0 - 326412861) = *(ptr0 - 326412861) & 0xa3;
        }
    }
    --ptr1;
    *ptr1 = &loc_41D37C;
    /*BAD_CALL!*/ -389223836();
    if(!v0) {
        int3();
    }
    char v25 = in(46, 11);
    jump *ptr1;
}
