
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
    int v17 = &gvar_8059FB0;
    int v18 = &gvar_8059F40;
    int* ptr4 = &v1;
    int v19 = &sub_8049B80;
    int* ptr5 = &ptr0;
    →__libc_start_main();
    hlt();
}

int sub_80494D6() {
    return gvar_8061FFC();
}

/*
The routine was unflattened (unsafe deobfuscation).
To disable this optimizer, refer to "EnableUnsafeOptimizers" in the options.
*/
void sub_8049B80(int par04, int par08) {
    // Decompilation error
}

unsigned int sub_804BE60() {
    unsigned int result;
    return result;
}

unsigned int sub_804BEC0() {
    return 0;
}

int sub_804BF90() {
    char v0;
    int v1;
    unsigned int v2 = *(unsigned int*)(v1 * 8 + (int)&gvar_80621E0);
    unsigned char* ptr0 = *(unsigned int*)(v1 * 8 + (int)&gvar_80621E4);
    int result = 0;
    if(v2) {
        if(v2 == 1) {
            return *ptr0 == 48 ? 0: 1;
        }
        result = 1;
        if(v2 == 2) {
            unsigned char* ptr1 = (unsigned char*)&gvar_805A068;
            int v3 = 2;
            do {
                v0 = *ptr0 == *ptr1;
                ++ptr0;
                ++ptr1;
                --v3;
            }
            while(v0 && v3 == 0);
            return v0 ? 0: 1;
        }
    }
    return result;
}

int sub_804C010(int* param0) {
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    unsigned char v1;
    unsigned int* ptr2;
    unsigned int v2 = 0;
    int v3 = 0;
    char* ptr3 = *ptr1;
    unsigned char v4 = v1;
    unsigned char* ptr4 = *ptr2;
    unsigned int* ptr5 = ptr1;
    int result = 0;
    unsigned int* ptr6 = ptr2;
loc_804C02C:
    char v5 = v2 == 2;
    char v6 = v2 < 2;
    if(v5) {
    loc_804C0A7:
        while(1) {
            int v7 = (unsigned int)*ptr4;
            int v8 = v7 - 48;
            char v9 = (unsigned char)v8 == 7;
            if((unsigned char)v8 >= 7 && !v9) {
                break;
            }
            else {
                result = result * 8 + v7 - 48;
                ++ptr4;
                continue;
            loc_804C112:
                while(1) {
                    int v10 = (unsigned int)*ptr4;
                    int v11 = v10 - 48;
                    if((unsigned char)((unsigned char)v10 + 208) > 54) {
                        break loc_804C0A7;
                    }
                    else {
                        while(1) {
                            jump gvar_805A5A0[(unsigned int)(unsigned char)v11];
                            if((unsigned char)v27 >= 54 && !v26) {
                                break loc_804C0A7;
                            }
                            else {
                                continue;
                                if((unsigned char)v25 >= 54 && !v24) {
                                    break loc_804C0A7;
                                }
                            }
                        }
                        int v12 = result * 16;
                        ++ptr4;
                        result = v12 + v10 - 87;
                    }
                }
            }
        }
        *ptr3 = (unsigned char)result;
        int v13 = (unsigned int)*ptr4;
        ++ptr3;
        ++v3;
        int v14 = v13;
        char v15 = (unsigned char)v14 == 61;
        char v16 = (unsigned char)v14 < 61;
        char v17 = ((((unsigned char)v14 - 61) ^ (unsigned char)v14) & ((unsigned char)v14 ^ 0x3d)) < 0;
        if(v15) {
        loc_804C0CB:
            if(!v4) {
                int v18 = v13;
                ++ptr4;
                *ptr3 = (unsigned char)v18;
                ++v3;
                ++ptr3;
                goto loc_804C040;
            }
            else {
                ptr0 = ptr6;
                result = 1;
                *ptr5 = ptr3;
                *ptr0 = ptr4;
                *param0 = v3;
                return result;
            }
        }
        else {
        loc_804C04A:
            if(v16 == v17) {
                int v19 = v13;
                char v20 = (unsigned char)v19 == 92;
                if(v20) {
                    ++ptr4;
                loc_804C133:
                    int v21 = (unsigned int)*ptr4;
                    int v22 = (unsigned int)*ptr4;
                    if(*ptr4 <= 120) {
                        jump gvar_805A67C[(unsigned int)(unsigned char)v22];
                    }
                    else {
                        result = v21;
                        *ptr3 = (unsigned char)result;
                        ++v3;
                        ++ptr3;
                        v2 = 0;
                    }
                    ++ptr4;
                    if(v2 <= 4) {
                        goto loc_804C02C;
                    }
                    else {
                        ptr0 = ptr6;
                        result = (unsigned int)(v2 == 6 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
                        *ptr5 = ptr3;
                        *ptr0 = ptr4;
                        *param0 = v3;
                        return result;
                    }
                }
                else if((unsigned char)v19 != 94) {
                    int v18 = v13;
                    ++ptr4;
                    *ptr3 = (unsigned char)v18;
                    ++v3;
                    ++ptr3;
                    goto loc_804C040;
                }
                else {
                    ++ptr4;
                    v0 = (unsigned int)*ptr4;
                    int v23 = v0 - 64;
                    if((unsigned char)v23 > 62) {
                        if((unsigned char)v0 == 63) {
                            *ptr3 = 127;
                            ++v3;
                            ++ptr3;
                        loc_804C040:
                            v13 = (unsigned int)*ptr4;
                            v14 = (unsigned int)*ptr4;
                            v15 = *ptr4 == 61;
                            v16 = (unsigned char)v14 < 61;
                            v17 = ((((unsigned char)v14 - 61) ^ (unsigned char)v14) & ((unsigned char)v14 ^ 0x3d)) < 0;
                            if(v15) {
                                goto loc_804C0CB;
                            }
                            else {
                                goto loc_804C04A;
                            }
                        }
                        else {
                            ptr0 = ptr6;
                            result = 0;
                            *ptr5 = ptr3;
                            *ptr0 = ptr4;
                            *param0 = v3;
                            return result;
                        }
                    }
                }
                v13 = v0 & 0x1f;
                int v18 = v13;
                ++ptr4;
                *ptr3 = (unsigned char)v18;
                ++v3;
                ++ptr3;
                goto loc_804C040;
            }
            else if(!(unsigned char)v14) {
                ptr0 = ptr6;
                v2 = 5;
                result = (unsigned int)(v2 == 6 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
                *ptr5 = ptr3;
                *ptr0 = ptr4;
                *param0 = v3;
                return result;
            }
        }
        if((unsigned char)v14 != 58) {
            int v18 = v13;
            ++ptr4;
            *ptr3 = (unsigned char)v18;
            ++v3;
            ++ptr3;
            goto loc_804C040;
        }
        else {
            ptr0 = ptr6;
            v2 = 5;
            result = (unsigned int)(v2 == 6 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
            *ptr5 = ptr3;
            *ptr0 = ptr4;
            *param0 = v3;
            return result;
        }
    }
    else if(v6 != 0) {
        if(v2 == 1) {
            goto loc_804C133;
        }
        else {
            goto loc_804C040;
        }
    }
    else if(v2 == 3) {
        goto loc_804C112;
    }
    else {
        goto loc_804C040;
    }
}

void* sub_804C280() {
    int v0;
    void* result = sub_8058A70(8);
    unsigned int v1 = gvar_80624F4;
    *(int*)result = v0;
    *(unsigned int*)((int)result + 4) = v1;
    gvar_80624F4 = result;
    return result;
}

unsigned int sub_804C2B0(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    void* ptr0 = sub_8058A70(16);
    int v3 = 0;
    if(v1) {
        v3 = sub_8058BD0(v1);
    }
    *(int*)((int)ptr0 + 4) = v3;
    int v4 = 0;
    if(v0) {
        v4 = sub_8058BD0(v0);
    }
    *(int*)ptr0 = v4;
    *(char*)((int)ptr0 + 8) = (unsigned char)v2;
    unsigned int result = gvar_8062350;
    gvar_8062350 = ptr0;
    *(unsigned int*)((int)ptr0 + 12) = result;
    return result;
}

unsigned int sub_804C320() {
    unsigned int result = gvar_80624D4;
    if(result) {
        unsigned int v0 = 0;
        do {
            unsigned int* ptr0 = *(unsigned int*)(v0 * 4 + gvar_8062CB4);
            →free(*ptr0);
            →free(*(void**)(ptr0 + 1));
            result = *(ptr0 + 28);
            if(result != &gvar_80622B4) {
                unsigned int v1 = result;
                →freecon();
            }
            ++v0;
        }
        while(gvar_80624D4 > v0);
    }
    gvar_80624D4 = 0;
    gvar_8062CB8 = 0;
    gvar_8062CBC = 0;
    gvar_8062CC0 = 0;
    gvar_8062CC4 = 0;
    gvar_8062CC8 = 0;
    gvar_8062CCC = 0;
    gvar_8062CD0 = 0;
    gvar_8062CD4 = 0;
    gvar_8062CD8 = 0;
    gvar_8062CDC = 0;
    gvar_8062CE0 = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C3F0() {
    int v0;
    unsigned int v1;
    unsigned int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    unsigned int v9;
    unsigned int v10;
    char v11;
    int v12;
    unsigned int v13;
    char v14;
    unsigned int v15 = v13;
    int* ptr0 = &v15;
    char v16 = &v9 == 28;
    char v17 = (int)&v10 < 0;
    char v18 = __parity__((unsigned char)&v9 - 28);
    char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v15 ^ 0x14) ^ (int)&v10) >>> 4) & 1);
    char v20 = (unsigned int)&v15 < 20;
    char v21 = (int)(int*)((int)(int*)((int)&v15 ^ (int)&v10) & (int)(int*)((int)&v15 ^ 0x14)) < 0;
    unsigned int v22 = gvar_80624D4;
    unsigned int v23 = gvar_80624D4;
    unsigned int v24 = gvar_80624D4;
    int v25 = (int)(v23 >>> 1);
    char v26 = v24 & 1;
    char v27 = v24 >= 0x80000000;
    char v28 = v25 ? 0: 1;
    char v29 = v25 < 0;
    char v30 = __parity__((unsigned char)v25);
    int result = v25 + v22;
    char v31 = gvar_8062CE4 == result;
    char v32 = (int)gvar_8062CE4 > result;
    char v33 = __parity__((unsigned char)result - (unsigned char)gvar_8062CE4);
    char v34 = gvar_8062CE4 > (unsigned int)result;
    char v35 = (((result - gvar_8062CE4) ^ result) & (gvar_8062CE4 ^ result)) < 0;
    char v36 = (((result - gvar_8062CE4) ^ (gvar_8062CE4 ^ result)) >>> 4) & 1;
    if(!v34 && !v31) {
        void* __ptr = gvar_8062CB4;
        →free(__ptr);
        v8 = v22 == 0x15555555;
        v7 = (int)v22 < 0x15555555;
        v6 = __parity__((unsigned char)v22 - 85);
        v5 = v22 < 0x15555555;
        v4 = (((v22 - 0x15555555) ^ v22) & (v22 ^ 0x15555555)) < 0;
        v3 = (((v22 - 0x15555555) ^ (v22 ^ 0x15555555)) >>> 4) & 1;
        if((v5 || v8)) {
            unsigned int v37 = v22 * 3;
            v24 = v22 * 3;
            size_t v38 = (size_t)(v37 * 4);
            char v39 = (v24 >>> 30) & 1;
            char v40 = v4;
            char v41 = v38 ? 0: 1;
            char v42 = v38 >= 0x80000000;
            char v43 = __parity__((unsigned char)v38);
            void* ptr1 = sub_8058A70(v38);
            v22 = gvar_80624D4;
            gvar_8062CB4 = ptr1;
            result = (int)(v22 * 3);
            gvar_8062CE4 = (int)(v22 * 3);
            goto loc_804C40D;
        }
    }
    else {
    loc_804C40D:
        char v44 = v22 ? 0: 1;
        char v45 = v22 >= 0x80000000;
        char v46 = __parity__((unsigned char)v22);
        char v47 = 0;
        char v48 = 0;
        if(!v44) {
            unsigned int v49 = gvar_8062CB4;
            result = 0;
            char v50 = 1;
            char v51 = 0;
            char v52 = 1;
            char v53 = 0;
            char v54 = 0;
            unsigned int v55 = gvar_80624D0;
            do {
                *(unsigned int*)(result * 4 + v49) = v55;
                ++result;
                v55 -= -128;
                v14 = result == v22;
                char v56 = result < (int)v22;
                char v57 = __parity__((unsigned char)result - (unsigned char)v22);
                char v58 = (unsigned int)result < v22;
                char v59 = (((result - v22) ^ result) & (result ^ v22)) < 0;
                char v60 = (((result - v22) ^ (result ^ v22)) >>> 4) & 1;
            }
            while(!v14);
        }
        char v61 = gvar_806244C == -1;
        char v62 = (int)gvar_806244C < -1;
        char v63 = __parity__((unsigned char)gvar_806244C - 0xff);
        char v64 = gvar_806244C < 0xffffffff;
        char v65 = (((gvar_806244C + 1) ^ gvar_806244C) & ~gvar_806244C) < 0;
        char v66 = (((gvar_806244C + 1) ^ ~gvar_806244C) >>> 4) & 1;
        if(!v61) {
            →_setjmp(134622464);
            unsigned int v67 = gvar_806244C;
            char v68 = v12 ? 0: 1;
            char v69 = v12 < 0;
            char v70 = __parity__(v11);
            char v71 = 0;
            char v72 = 0;
            if(!v68) {
                v8 = v67 == 3;
                v7 = (int)v67 < 3;
                v6 = __parity__((unsigned char)v67 - 3);
                v5 = v67 < 3;
                v4 = (((v67 - 3) ^ v67) & (v67 ^ 0x3)) < 0;
                v3 = (((v67 - 3) ^ (v67 ^ 0x3)) >>> 4) & 1;
                if(!v8) {
                    v2 = gvar_80624D4;
                    unsigned int v73 = 0;
                    v1 = gvar_8062CB4;
                    unsigned int v74 = gvar_80624D0;
                    if(v2) {
                        do {
                            *(unsigned int*)(v73 * 4 + v1) = v74;
                            ++v73;
                            v74 -= -128;
                        }
                        while(v73 != v2);
                    }
                    v0 = 1;
                    return sub_80555B0((int)v1, (int)v2, (int)*(unsigned int*)((((((v67 == 4 ? gvar_80624E8: 0) + v67) * 2 + v0) * 2 + (unsigned int)gvar_80624EC) * 2 + (unsigned int)gvar_8062453) * 4 + (int)&gvar_805B1C0));
                }
                /*NO_RETURN*/ →__assert_fail("sort_type != sort_version", "ls.c", 3427, "sort_files");
            }
            v2 = gvar_80624D4;
            v0 = 0;
            v1 = gvar_8062CB4;
            result = sub_80555B0((int)v1, (int)v2, (int)*(unsigned int*)((((((v67 == 4 ? gvar_80624E8: 0) + v67) * 2 + v0) * 2 + (unsigned int)gvar_80624EC) * 2 + (unsigned int)gvar_8062453) * 4 + (int)&gvar_805B1C0));
        }
        return result;
    }
    /*NO_RETURN*/ sub_8058C00();
}

unsigned int sub_804C810(int param0, unsigned int param1) {
    int v0;
    unsigned char* ptr0;
    int v1;
    int v2 = v1;
    if(ptr0 && gvar_8062410) {
        sub_804C2B0(0, (int)ptr0);
    }
    unsigned int v3 = gvar_80624D4;
    int v4 = (int)(unsigned char)param1;
    unsigned int v5 = (unsigned int)(v3 * 4 - 4);
    unsigned int v6 = v3;
    while(v6) {
        --v6;
        unsigned int* ptr1 = *(unsigned int*)(gvar_8062CB4 + v5);
        unsigned int v7 = *(ptr1 + 26);
        if(((v7 != 3 ? 0: 1) | (v7 != 9 ? 0: 1))) {
            unsigned char* ptr2 = *ptr1;
            if(ptr0) {
                unsigned char* ptr3 = sub_80520B0(ptr2);
                if(ptr3[0] != 46) {
                    goto loc_804C8AD;
                }
                else {
                    v0 = ptr3[1] != 46 ? 0: 1;
                }
                if(!(unsigned int)((ptr3[v0 + 1] != 47 ? 0: 1) | (ptr3[v0 + 1] ? 0: 1))) {
                loc_804C8AD:
                    int v8 = *ptr1;
                    if(*(char*)v8 == 47) {
                        goto loc_804C857;
                    }
                    else {
                        void* ptr4 = sub_80522E0(ptr0, v8, NULL);
                        int v9 = *(int*)(ptr1 + 1);
                        void* __ptr = ptr4;
                        sub_804C2B0(v4, v9);
                        →free(__ptr);
                        if(*(int*)(ptr1 + 26) == 9) {
                            goto loc_804C8F3;
                        }
                    }
                }
            }
            else {
            loc_804C857:
                sub_804C2B0(v4, *(int*)(ptr1 + 1));
                if(*(int*)(ptr1 + 26) == 9) {
                loc_804C8F3:
                    →free(*ptr1);
                }
            }
        }
        v5 -= 4;
    }
    unsigned int v10 = 0;
    unsigned int v11 = gvar_80624D4;
    unsigned int result = 0;
    if(v11) {
        unsigned int v12 = gvar_8062CB4;
        result = 0;
        do {
            int v13 = *(int*)(v10 * 4 + v12);
            char v14 = *(int*)(v13 + 104) == 9;
            *(int*)(result * 4 + v12) = v13;
            ++v10;
            result = v14 ? result: result + 1;
        }
        while(v10 != v11);
    }
    gvar_80624D4 = result;
    return result;
}

int sub_804C970(int param0, int* param1) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = result;
    if((unsigned int)result < (unsigned int)param1) {
    loc_804C9C1:
        do {
            unsigned int v3 = gvar_806250C;
            if(!v3) {
                ++v2;
                goto loc_804C9CE;
            }
            else {
                if((unsigned int)((unsigned int)(v2 + 1) / v3) < (unsigned int)(int*)((int)(unsigned int)param1 / v3)) {
                    int v4 = stdout;
                    char* ptr0 = *(unsigned int*)(v4 + 20);
                    if(*(unsigned int*)(v4 + 24) > (unsigned int)ptr0) {
                        *ptr0 = 9;
                        *(unsigned int*)(v4 + 20) = (int*)(ptr0 + 1);
                    }
                    else {
                        →__overflow(v4, 9);
                        v3 = gvar_806250C;
                    }
                    result = (unsigned int)v2 / v3;
                    v2 = (int)(v3 + v2 - (int)(int*)((unsigned int)v2 % v3));
                }
                ++v2;
            loc_804C9CE:
                result = stdout;
                char* ptr1 = *(unsigned int*)(result + 20);
                if(*(unsigned int*)(result + 24) > (unsigned int)ptr1) {
                    *ptr1 = 32;
                    *(unsigned int*)(result + 20) = (int*)(ptr1 + 1);
                    if((unsigned int)param1 > (unsigned int)v2) {
                        goto loc_804C9C1;
                    }
                    else {
                        return result;
                    }
                }
                else {
                    →__overflow(result, 32);
                }
            }
        }
        while((unsigned int)param1 <= (unsigned int)v2);
    }
    return result;
}

int sub_804CA20(int param0, int* param1) {
    int result;
    unsigned int v0 = *(unsigned int*)(param1 + 3);
    unsigned int v1 = *(unsigned int*)(param1 + 2);
    unsigned int v2 = (v0 - v1) >>> 2;
    if(v2) {
        if(v0 == v1) {
            *(char*)(param1 + 10) = *(char*)(param1 + 10) | 0x2;
        }
        int v3 = *(param1 + 6);
        int v4 = *(param1 + 4);
        *(param1 + 3) = (v0 + v3) & ~v3;
        if((int)(unsigned int)(((v0 + v3) & ~v3) - *(param1 + 1)) > (int)(unsigned int)(v4 - *(param1 + 1))) {
            *(param1 + 3) = v4;
        }
        unsigned int v5 = 0;
        *(param1 + 2) = *(param1 + 3);
        →fputs_unlocked(result, stdout);
        do {
            int v6 = *(int*)(v5 * 4 + v1);
            ++v5;
            int v7 = " %lu";
            int v8 = 1;
            int v9 = v6;
            →__printf_chk();
        }
        while(v5 != v2);
        result = stdout;
        char* ptr0 = *(unsigned int*)(result + 20);
        if(*(unsigned int*)(result + 24) > (unsigned int)ptr0) {
            *ptr0 = 10;
            *(unsigned int*)(result + 20) = (int*)(ptr0 + 1);
        }
        else {
            →__overflow(result, 10);
        }
    }
    return result;
}

unsigned int sub_804CAE0(unsigned int param0, int* param1) {
    unsigned int v0;
    int v1;
    int v2;
    int v3 = v1;
    if(v2) {
        int v4 = sub_8055350(v2, 0);
        unsigned int v5 = param0 - v4;
        →fputs_unlocked(v2, stdout);
        →strlen(v2);
        v0 = (v5 < 0x80000000 ? v5: 0) + v2;
        unsigned int v6 = v5 < 0x80000000 ? v5: 0;
        do {
            int v7 = stdout;
            char* ptr0 = *(unsigned int*)(v7 + 20);
            if(*(unsigned int*)(v7 + 24) > (unsigned int)ptr0) {
                *ptr0 = 32;
                *(unsigned int*)(v7 + 20) = (int*)(ptr0 + 1);
            }
            else {
                →__overflow(v7, 32);
            }
            --v6;
        }
        while(v6 != -1);
    }
    else {
        v0 = param0;
        →__printf_chk();
    }
    unsigned int result = gvar_80624D8 + v0 + 1;
    gvar_80624D8 = gvar_80624D8 + v0 + 1;
    return result;
}

unsigned int sub_804CBA0(int param0, unsigned int param1) {
    unsigned int result;
    int v0;
    if(!param0 || gvar_80624ED) {
        result = sub_804CAE0(param1, (int*)v0);
    }
    else {
        sub_8054860(v0);
        result = sub_804CAE0(param1, (int*)v0);
    }
    return result;
}

int sub_804CBF0(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr0;
    int v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    int v10;
    int v11;
    char v12;
    void* ptr1;
    int result;
    int* ptr2;
    int v13;
    int* ptr3 = &ptr0;
    int v14 = (int)ptr2;
    int v15 = v13;
    int v16 = &v15;
    char v17 = &v3 == 8300;
    char v18 = &v10 < 0;
    char v19 = __parity__((unsigned char)&v3 - 108);
    char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v15 ^ 0x205c) ^ &v10) >>> 4) & 1);
    char v21 = (unsigned int)&v15 < 8284;
    char v22 = (int)(int*)((int)(int*)(&v15 ^ &v10) & (int)(int*)(&v15 ^ 0x205c)) < 0;
    int v23 = result;
    int v24 = param0;
    int v25 = &v9;
    *(int*)&v8 = v4;
    int v26 = v4;
    int v27 = v24;
    int v28 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v29 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v30 = 0;
    char v31 = 1;
    char v32 = 0;
    char v33 = 1;
    char v34 = 0;
    char v35 = 0;
    int v36 = sub_8056510(&v9, 0x2000, *(int*)&v8, -1, ptr2);
    int v37 = v26;
    int v38 = &v9;
    char v39 = v36 == 0x1fff;
    char v40 = v36 < 0x1fff;
    char v41 = __parity__((unsigned char)v36 - 0xff);
    char v42 = (unsigned int)v36 < 0x1fff;
    char v43 = (((v36 - 0x1fff) ^ v36) & (v36 ^ 0x1fff)) < 0;
    char v44 = (((v36 - 0x1fff) ^ (v36 ^ 0x1fff)) >>> 4) & 1;
    int v45 = v36;
    if(!v42 && !v39) {
        int v46 = v36 + 1;
        int v47 = v36 + 31;
        unsigned int v48 = (unsigned int)(v47 & 0xfffffff0);
        v16 = &v10;
        char v49 = &v3 == 8300;
        char v50 = &v10 < 0;
        char v51 = __parity__((unsigned char)&v3 - 108);
        char v52 = (((v48 ^ &v10) ^ &v10) >>> 4) & 1;
        char v53 = v48 > (unsigned int)&v10;
        char v54 = 0;
        int* ptr4 = &v5;
        int v55 = (int)&v5 & 0xfffffff0;
        char v56 = v55 ? 0: 1;
        char v57 = v55 < 0;
        char v58 = __parity__((unsigned char)v55);
        char v59 = 0;
        char v60 = 0;
        v38 = v55;
        int* ptr5 = (int*)v14;
        v2 = -1;
        *(int*)&v8 = v37;
        v1 = v46;
        v10 = v55;
        int v61 = sub_8056510(v10, v1, *(int*)&v8, -1, ptr5);
    }
    char v62 = gvar_80624E4 ? 0: 1;
    char v63 = gvar_80624E4 >= 128;
    char v64 = __parity__(gvar_80624E4);
    char v65 = gvar_80624E4 < 0;
    char v66 = 0;
    char v67 = 0;
    if(v62) {
        v14 = v27;
        char v68 = v14 ? 0: 1;
        char v69 = v14 < 0;
        char v70 = __parity__((unsigned char)v14);
        char v71 = 0;
        char v72 = 0;
        if(!v68) {
            →__ctype_get_mb_cur_max();
            char v73 = result == 1;
            char v74 = result < 1;
            char v75 = __parity__((unsigned char)result - 1);
            char v76 = (unsigned int)result < 1;
            char v77 = (((result - 1) ^ result) & (result ^ 1)) < 0;
            v67 = (((result - 1) ^ (result ^ 1)) >>> 4) & 1;
            if(!v76 && !v73) {
                int v78 = v38;
                *(int*)&v8 = 0;
                int v79 = sub_8055160(v78, v45, 0);
                v0 = v79;
            }
            else {
                int v80 = v38;
                v0 = 0;
                int v81 = v80 + v45;
                char v82 = v81 == v38;
                char v83 = v81 > v38;
                char v84 = __parity__((unsigned char)v38 - (unsigned char)v81);
                char v85 = (unsigned int)v81 > (unsigned int)v38;
                char v86 = (((v38 - v81) ^ v38) & (v81 ^ v38)) < 0;
                v67 = (((v38 - v81) ^ (v81 ^ v38)) >>> 4) & 1;
                if(v85) {
                    →__ctype_b_loc();
                    v14 = 0;
                    char v87 = 1;
                    char v88 = 0;
                    char v89 = 1;
                    char v90 = 0;
                    char v91 = 0;
                    int v92 = *(int*)result;
                    int v93 = v38;
                    do {
                        int v94 = (unsigned int)*(char*)v93;
                        int v95 = (unsigned int)*(short*)(v94 * 2 + v92);
                        unsigned int v96 = (unsigned int)(v95 & 0x4000);
                        char v97 = v96 == 1;
                        char v98 = (int)v96 < 1;
                        char v99 = __parity__((unsigned char)v96 - 1);
                        char v100 = v96 < 1;
                        char v101 = (((v96 - 1) ^ v96) & (v96 ^ 1)) < 0;
                        char v102 = (((v96 - 1) ^ (v96 ^ 1)) >>> 4) & 1;
                        v14 -= (unsigned int)v100 - 1;
                        ++v93;
                        v12 = v93 == v81;
                        char v103 = v93 < v81;
                        char v104 = __parity__((unsigned char)v93 - (unsigned char)v81);
                        char v105 = (unsigned int)v93 < (unsigned int)v81;
                        char v106 = (((v93 - v81) ^ v93) & (v93 ^ v81)) < 0;
                        v67 = (((v93 - v81) ^ (v93 ^ v81)) >>> 4) & 1;
                    }
                    while(!v12);
                    v0 = v14;
                }
            }
        }
    }
    else {
        →__ctype_get_mb_cur_max();
        char v107 = result == 1;
        char v108 = result < 1;
        char v109 = __parity__((unsigned char)result - 1);
        char v110 = (unsigned int)result < 1;
        char v111 = (((result - 1) ^ result) & (result ^ 1)) < 0;
        char v112 = (((result - 1) ^ (result ^ 1)) >>> 4) & 1;
        if(!v110 && !v107) {
            v16 = v45;
            int v113 = v45 + v38;
            char v114 = v113 ? 0: 1;
            char v115 = v113 < 0;
            char v116 = __parity__((unsigned char)v113);
            char v117 = (((v16 ^ v38) ^ v113) >>> 4) & 1;
            char v118 = __carry__(v16, v38);
            char v119 = ((v113 ^ v16) & ~(v16 ^ v38)) < 0;
            v0 = 0;
            int v120 = v113;
            int v121 = v113;
            v45 = 0;
            char v122 = v121 == v38;
            char v123 = v121 > v38;
            char v124 = __parity__((unsigned char)v38 - (unsigned char)v121);
            char v125 = (unsigned int)v121 > (unsigned int)v38;
            char v126 = (((v38 - v121) ^ v38) & (v121 ^ v38)) < 0;
            v67 = (((v38 - v121) ^ (v121 ^ v38)) >>> 4) & 1;
            if(v125) {
                int v127 = v38;
                v14 = v38;
                do {
                    int v128 = (unsigned int)*(char*)v14;
                    char v129 = *(char*)v14 == 95;
                    char v130 = (unsigned char)v128 < 95;
                    char v131 = __parity__((unsigned char)v128 - 95);
                    char v132 = (unsigned char)v128 < 95;
                    char v133 = ((((unsigned char)v128 - 95) ^ (unsigned char)v128) & ((unsigned char)v128 ^ 0x5f)) < 0;
                    char v134 = ((((unsigned char)v128 - 95) ^ ((unsigned char)v128 ^ 0x5f)) >>> 4) & 1;
                    if((v129 || v130 != v133)) {
                        char v135 = (unsigned char)v128 == 65;
                        char v136 = (unsigned char)v128 < 65;
                        char v137 = __parity__((unsigned char)v128 - 65);
                        char v138 = (unsigned char)v128 < 65;
                        char v139 = ((((unsigned char)v128 - 65) ^ (unsigned char)v128) & ((unsigned char)v128 ^ 0x41)) < 0;
                        char v140 = ((((unsigned char)v128 - 65) ^ ((unsigned char)v128 ^ 0x41)) >>> 4) & 1;
                        if(v136 == v139) {
                            goto loc_804CEDC;
                        }
                        else {
                            char v141 = (unsigned char)v128 == 32;
                            char v142 = (unsigned char)v128 < 32;
                            char v143 = __parity__((unsigned char)v128 - 32);
                            char v144 = (unsigned char)v128 < 32;
                            char v145 = ((((unsigned char)v128 - 32) ^ (unsigned char)v128) & ((unsigned char)v128 ^ 0x20)) < 0;
                            char v146 = ((((unsigned char)v128 - 32) ^ ((unsigned char)v128 ^ 0x20)) >>> 4) & 1;
                            if(v142 == v145) {
                                char v147 = (unsigned char)v128 == 35;
                                char v148 = (unsigned char)v128 < 35;
                                char v149 = __parity__((unsigned char)v128 - 35);
                                char v150 = (unsigned char)v128 < 35;
                                char v151 = ((((unsigned char)v128 - 35) ^ (unsigned char)v128) & ((unsigned char)v128 ^ 0x23)) < 0;
                                char v152 = ((((unsigned char)v128 - 35) ^ ((unsigned char)v128 ^ 0x23)) >>> 4) & 1;
                                if(v147 || v148 != v151) {
                                    goto loc_804CEDC;
                                }
                                else {
                                    int v153 = v128 - 37;
                                    char v154 = (unsigned char)v153 == 26;
                                    char v155 = (unsigned char)v153 < 26;
                                    char v156 = __parity__((unsigned char)v153 - 26);
                                    char v157 = (unsigned char)v153 < 26;
                                    char v158 = ((((unsigned char)v153 - 26) ^ (unsigned char)v153) & ((unsigned char)v153 ^ 0x1a)) < 0;
                                    char v159 = ((((unsigned char)v153 - 26) ^ ((unsigned char)v153 ^ 0x1a)) >>> 4) & 1;
                                    if(v157 || v154) {
                                        goto loc_804CEDC;
                                    }
                                }
                            }
                            goto loc_804CD78;
                        }
                    }
                    else {
                        int v160 = v128 - 97;
                        char v161 = (unsigned char)v160 == 29;
                        char v162 = (unsigned char)v160 < 29;
                        char v163 = __parity__((unsigned char)v160 - 29);
                        char v164 = (unsigned char)v160 < 29;
                        char v165 = ((((unsigned char)v160 - 29) ^ (unsigned char)v160) & ((unsigned char)v160 ^ 0x1d)) < 0;
                        char v166 = ((((unsigned char)v160 - 29) ^ ((unsigned char)v160 ^ 0x1d)) >>> 4) & 1;
                        if((v164 || v161)) {
                        loc_804CEDC:
                            *(char*)v127 = (unsigned char)v128;
                            ++v14;
                            ++v127;
                            int v167 = v0;
                            ++v0;
                            char v168 = v0 ? 0: 1;
                            char v169 = v0 < 0;
                            char v170 = __parity__((unsigned char)v0);
                            char v171 = (((v167 ^ 1) ^ v0) >>> 4) & 1;
                            char v172 = (unsigned int)v167 >= 0xffffffff;
                            char v173 = ((v167 ^ v0) & ~(v167 ^ 1)) < 0;
                        }
                        else {
                        loc_804CD78:
                            int v174 = 0;
                            int v175 = 0;
                            do {
                                int v176 = &v174;
                                int v177 = v120;
                                int v178 = &v11;
                                int v179 = v177;
                                int v180 = v177 - v14;
                                char v181 = v180 ? 0: 1;
                                char v182 = v180 < 0;
                                char v183 = __parity__((unsigned char)v180);
                                char v184 = (((v14 ^ v179) ^ v180) >>> 4) & 1;
                                char v185 = (unsigned int)v14 > (unsigned int)v179;
                                char v186 = ((v180 ^ v179) & (v14 ^ v179)) < 0;
                                *(int*)&v8 = v180;
                                →mbrtowc(&v11, v14, *(int*)&v8, &v174);
                                char v187 = result == -1;
                                char v188 = result < -1;
                                char v189 = __parity__((unsigned char)result - 0xff);
                                char v190 = (unsigned int)result < 0xffffffff;
                                char v191 = (((result + 1) ^ result) & ~result) < 0;
                                char v192 = (((result + 1) ^ ~result) >>> 4) & 1;
                                int v193 = result;
                                if(!v187) {
                                    char v194 = result == -2;
                                    char v195 = result < -2;
                                    char v196 = __parity__((unsigned char)result - 254);
                                    char v197 = (unsigned int)result < 0xfffffffe;
                                    char v198 = (((result + 2) ^ result) & (result ^ 0xfffffffe)) < 0;
                                    char v199 = (((result + 2) ^ (result ^ 0xfffffffe)) >>> 4) & 1;
                                    if(!v194) {
                                        char v200 = result < 0;
                                        char v201 = __parity__((unsigned char)result);
                                        char v202 = 0;
                                        char v203 = 0;
                                        int v204 = 1;
                                        int v205 = result ? v193: 1;
                                        →wcwidth(v11);
                                        char v206 = result ? 0: 1;
                                        char v207 = __parity__((unsigned char)result);
                                        char v208 = 0;
                                        char v209 = 0;
                                        if(result >= 0) {
                                            unsigned int v210 = 0;
                                            char v211 = 1;
                                            char v212 = 0;
                                            char v213 = 1;
                                            char v214 = 0;
                                            char v215 = 0;
                                            int v216 = v14;
                                            do {
                                                int v217 = (unsigned int)*(char*)(v210 + v216);
                                                *(char*)(v210 + v127) = *(char*)(v210 + v216);
                                                ++v210;
                                                char v218 = (int)v210 > v205;
                                                char v219 = __parity__((unsigned char)v205 - (unsigned char)v210);
                                                char v220 = v210 > (unsigned int)v205;
                                                char v221 = (((v205 - v210) ^ v205) & (v210 ^ v205)) < 0;
                                                char v222 = (((v205 - v210) ^ (v210 ^ v205)) >>> 4) & 1;
                                            }
                                            while(v210 != v205);
                                            v0 += result;
                                            v127 += v205;
                                            int v223 = v216;
                                            v14 = v205 + v216;
                                            char v224 = v14 ? 0: 1;
                                            char v225 = v14 < 0;
                                            char v226 = __parity__((unsigned char)v14);
                                            char v227 = (((v205 ^ v223) ^ v14) >>> 4) & 1;
                                            char v228 = __carry__(v205, v223);
                                            char v229 = ((v14 ^ v223) & ~(v205 ^ v223)) < 0;
                                        }
                                        else {
                                            *(char*)v127 = 63;
                                            v14 += v205;
                                            ++v127;
                                            int v230 = v0;
                                            ++v0;
                                            char v231 = v0 ? 0: 1;
                                            char v232 = v0 < 0;
                                            char v233 = __parity__((unsigned char)v0);
                                            char v234 = (((v230 ^ 1) ^ v0) >>> 4) & 1;
                                            char v235 = (unsigned int)v230 >= 0xffffffff;
                                            char v236 = ((v230 ^ v0) & ~(v230 ^ 1)) < 0;
                                        }
                                        int v237 = &v174;
                                        →mbsinit(&v174);
                                        char v238 = result ? 0: 1;
                                        char v239 = result < 0;
                                        char v240 = __parity__((unsigned char)result);
                                        char v241 = 0;
                                        char v242 = 0;
                                        if(!v238) {
                                            break;
                                        }
                                    }
                                    else {
                                        *(char*)v127 = 63;
                                        int v243 = v127 + 1;
                                        ++v0;
                                        v16 = v243;
                                        v45 = v243 - v38;
                                        char v244 = v45 ? 0: 1;
                                        char v245 = v45 < 0;
                                        char v246 = __parity__((unsigned char)v45);
                                        v67 = (((v16 ^ v38) ^ v45) >>> 4) & 1;
                                        char v247 = (unsigned int)v16 < (unsigned int)v38;
                                        char v248 = ((v45 ^ v16) & (v16 ^ v38)) < 0;
                                        goto loc_804CCA2;
                                    }
                                }
                                else {
                                    *(char*)v127 = 63;
                                    ++v14;
                                    ++v127;
                                    int v249 = v0;
                                    ++v0;
                                    char v250 = v0 ? 0: 1;
                                    char v251 = v0 < 0;
                                    char v252 = __parity__((unsigned char)v0);
                                    char v253 = (((v249 ^ 1) ^ v0) >>> 4) & 1;
                                    char v254 = (unsigned int)v249 >= 0xffffffff;
                                    char v255 = ((v249 ^ v0) & ~(v249 ^ 1)) < 0;
                                    break;
                                }
                            }
                            while(1);
                        }
                        char v256 = v14 == v120;
                        char v257 = v14 < v120;
                        char v258 = __parity__((unsigned char)v14 - (unsigned char)v120);
                        v6 = (unsigned int)v14 < (unsigned int)v120;
                        char v259 = (((v14 - v120) ^ v14) & (v14 ^ v120)) < 0;
                        char v260 = (((v14 - v120) ^ (v14 ^ v120)) >>> 4) & 1;
                    }
                    goto loc_804CCA2;
                }
                while(v6);
                v16 = v127;
                v45 = v127 - v38;
                char v261 = v45 ? 0: 1;
                char v262 = v45 < 0;
                char v263 = __parity__((unsigned char)v45);
                v67 = (((v16 ^ v38) ^ v45) >>> 4) & 1;
                char v264 = (unsigned int)v16 < (unsigned int)v38;
                char v265 = ((v45 ^ v16) & (v16 ^ v38)) < 0;
            }
        }
        else {
            int v266 = v38;
            v0 = v45;
            v14 = v266 + v45;
            char v267 = v14 == v38;
            char v268 = v14 > v38;
            char v269 = __parity__((unsigned char)v38 - (unsigned char)v14);
            char v270 = (unsigned int)v14 > (unsigned int)v38;
            char v271 = (((v38 - v14) ^ v38) & (v14 ^ v38)) < 0;
            v67 = (((v38 - v14) ^ (v14 ^ v38)) >>> 4) & 1;
            if(v270) {
                →__ctype_b_loc();
                int v272 = v38;
                do {
                    int v273 = (unsigned int)*(char*)v272;
                    int v274 = *(int*)result;
                    char v275 = *(char*)(v273 * 2 + v274 + 1) & 0x40 ? 0: 1;
                    char v276 = (*(char*)(v273 * 2 + v274 + 1) & 0x40) < 0;
                    char v277 = __parity__(*(char*)(v273 * 2 + v274 + 1) & 0x40);
                    char v278 = 0;
                    char v279 = 0;
                    if(v275) {
                        *(char*)v272 = 63;
                    }
                    ++v272;
                    v7 = v272 == v14;
                    char v280 = v272 < v14;
                    char v281 = __parity__((unsigned char)v272 - (unsigned char)v14);
                    char v282 = (unsigned int)v272 < (unsigned int)v14;
                    char v283 = (((v272 - v14) ^ v272) & (v272 ^ v14)) < 0;
                    v67 = (((v272 - v14) ^ (v272 ^ v14)) >>> 4) & 1;
                }
                while(!v7);
                v0 = v45;
            }
        }
    }
loc_804CCA2:
    int v284 = v23;
    char v285 = v284 ? 0: 1;
    char v286 = v284 < 0;
    char v287 = __parity__((unsigned char)v284);
    char v288 = 0;
    char v289 = 0;
    if(!v285) {
        int v290 = v23;
        int v291 = v38;
        *(int*)&v8 = v45;
        v1 = 1;
        v2 = v290;
        v10 = v291;
        →fwrite_unlocked();
    }
    char v292 = v27 ? 0: 1;
    char v293 = v27 < 0;
    char v294 = __parity__((unsigned char)v27);
    char v295 = 0;
    char v296 = 0;
    if(!v292) {
        int v297 = v0;
        int v298 = v27;
        *(int*)v298 = v297;
    }
    int v299 = v29;
    v4 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v299;
    char v300 = v4 ? 0: 1;
    char v301 = v4 < 0;
    char v302 = __parity__((unsigned char)v4);
    char v303 = 0;
    char v304 = 0;
    result = v45;
    if(!v300) {
        int* ptr6 = &ptr1;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804D260(unsigned int param0, unsigned int param1) {
    int result;
    unsigned int v0;
    unsigned int v1 = v0;
    v0 = (unsigned int)(param0 != 5 ? 0: 1) | ((unsigned int)((v0 >>> 8) & 0xFFFFFF) << 8);
    if((unsigned char)v1) {
        v0 = (unsigned int)((param1 & 0xf000) != 0x8000 ? 0: 1) | ((unsigned int)(((param1 & 0xf000) >>> 8) & 0xFFFFFF) << 8);
    }
    if((unsigned char)v0) {
        result = 0;
        if((unsigned char)v1 && gvar_8062408 == 3) {
            return (param1 & 0x49) < 1 ? 0: 42;
        }
    }
    else {
        unsigned int v2 = !(unsigned char)v1 ? (unsigned int)((param0 != 3 ? 0: 1) | (param0 != 9 ? 0: 1)): (unsigned int)((param1 & 0xf000) != 0x4000 ? 0: 1) | ((unsigned int)(((param1 & 0xf000) >>> 8) & 0xFFFFFF) << 8);
        result = 47;
        if(!(unsigned char)v2) {
            result = 0;
            if(gvar_8062408 != 1) {
                unsigned int v3 = param0 != 6 ? 0: 1;
                if((unsigned char)v1) {
                    v3 = (unsigned int)((param1 & 0xf000) != 0xa000 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xFFFFFF) << 8);
                }
                result = 64;
                if(!(unsigned char)v3) {
                    unsigned int v4 = param0 != 1 ? 0: 1;
                    if((unsigned char)v1) {
                        v4 = (unsigned int)((param1 & 0xf000) != 0x1000 ? 0: 1) | ((unsigned int)((v3 >>> 8) & 0xFFFFFF) << 8);
                    }
                    result = 124;
                    if(!(unsigned char)v4) {
                        result = param0 != 7 ? 0: 1;
                        if((unsigned char)v1) {
                            result = (unsigned int)((param1 & 0xf000) != 0xc000 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
                        }
                        result = (0 - result) & 0x3d;
                    }
                }
            }
        }
    }
    return result;
}

int sub_804D3A0(unsigned int param0, unsigned int param1) {
    int v0 = sub_804D260(param0, param1);
    int v1 = v0;
    if((unsigned char)v0) {
        v0 = stdout;
        char* ptr0 = *(unsigned int*)(v0 + 20);
        if(*(unsigned int*)(v0 + 24) > (unsigned int)ptr0) {
            *ptr0 = (unsigned char)v1;
            *(unsigned int*)(v0 + 20) = (unsigned int)(ptr0 + 1);
        }
        else {
            →__overflow(v0, (int)(unsigned char)v1);
        }
        ++gvar_80624D8;
    }
    return (unsigned int)((unsigned char)v1 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xFFFFFF) << 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_804D3F0() {
    int v0;
    int* ptr0;
    char v1;
    int v2;
    int* result;
    int v3;
    void* ptr1;
    int* ptr2;
    char v4;
    int* ptr3 = result;
    int* ptr4 = ptr2;
    int* ptr5 = NULL;
    int* ptr6 = &ptr4;
    char v5 = &ptr0 == 0x2cc;
    char v6 = (int)&v3 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 0xcc);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x2c4) ^ (int)&v3) >>> 4) & 1);
    char v9 = (unsigned int)&ptr4 < 708;
    char v10 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&v3) & (int)(int*)((int)&ptr4 ^ 0x2c4)) < 0;
    int v11 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v12 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v13 = 0;
    char v14 = gvar_80624EE ? 0: 1;
    char v15 = gvar_80624EE >= 128;
    char v16 = __parity__(gvar_80624EE);
    char v17 = gvar_80624EE < 0;
    char v18 = 0;
    char v19 = 0;
    if(!v14) {
        unsigned int v20 = gvar_8062CBC;
        ptr5 = (int*)(v20 + 1);
        char v21 = gvar_8062360 == 4;
        char v22 = (int)gvar_8062360 < 4;
        char v23 = __parity__((unsigned char)gvar_8062360 - 4);
        char v24 = gvar_8062360 < 4;
        char v25 = (((gvar_8062360 - 4) ^ gvar_8062360) & (gvar_8062360 ^ 0x4)) < 0;
        char v26 = (((gvar_8062360 - 4) ^ (gvar_8062360 ^ 0x4)) >>> 4) & 1;
        if(v21) {
            int v27 = &v4;
            unsigned int v28 = *(unsigned int*)(ptr3 + 25);
            v0 = &v4;
            unsigned int v29 = *(unsigned int*)(ptr3 + 24);
            char* ptr7 = sub_8054C60(v29, v28, &v4);
            →strlen((int)ptr7);
            ptr5 = (int*)((char*)result + 1);
        }
    }
    char v30 = gvar_8062451 ? 0: 1;
    char v31 = gvar_8062451 >= 128;
    char v32 = __parity__(gvar_8062451);
    char v33 = gvar_8062451 < 0;
    char v34 = 0;
    char v35 = 0;
    if(!v30) {
        unsigned int v36 = gvar_8062CC0;
        int* ptr8 = (int*)(v36 + 1);
        char v37 = gvar_8062360 == 4;
        char v38 = (int)gvar_8062360 < 4;
        char v39 = __parity__((unsigned char)gvar_8062360 - 4);
        char v40 = gvar_8062360 < 4;
        char v41 = (((gvar_8062360 - 4) ^ gvar_8062360) & (gvar_8062360 ^ 0x4)) < 0;
        char v42 = (((gvar_8062360 - 4) ^ (gvar_8062360 ^ 0x4)) >>> 4) & 1;
        if(v37) {
            char v43 = *(char*)(ptr3 + 29) ? 0: 1;
            char v44 = *(char*)(ptr3 + 29) < 0;
            char v45 = __parity__(*(char*)(ptr3 + 29));
            char v46 = *(unsigned char*)(ptr3 + 29) < 0;
            char v47 = 0;
            char v48 = 0;
            ptr8 = (int*)0x2;
            if(!v43) {
                unsigned int v49 = gvar_8062500;
                unsigned int v50 = gvar_8062504;
                int v51 = 0x200;
                int v52 = 0;
                unsigned int v53 = v49;
                unsigned int v54 = gvar_80624FC;
                unsigned int v55 = v50;
                unsigned int v56 = *(unsigned int*)(ptr3 + 17);
                *(unsigned int*)&v1 = v54;
                int v57 = &v4;
                v0 = &v4;
                unsigned int v58 = *(unsigned int*)(ptr3 + 16);
                int v59 = sub_8053850(v58, v56, &v4, v1, 0x200, 0, v49, v50);
                →strlen(v59);
                int* ptr9 = result;
                ptr8 = (int*)((char*)result + 1);
                char v60 = ptr8 ? 0: 1;
                char v61 = (int)ptr8 < 0;
                char v62 = __parity__((unsigned char)ptr8);
                char v63 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 1) ^ (int)ptr8) >>> 4) & 1);
                char v64 = (unsigned int)ptr9 >= 0xffffffff;
                char v65 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 1)) < 0;
            }
        }
        ptr6 = ptr5;
        ptr5 = (int*)((int)ptr8 + (int)ptr5);
        char v66 = ptr5 ? 0: 1;
        char v67 = (int)ptr5 < 0;
        char v68 = __parity__((unsigned char)ptr5);
        char v69 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr6) ^ (int)ptr5) >>> 4) & 1);
        char v70 = (int*)__carry__((int)ptr8, (int)ptr6);
        char v71 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr8 ^ (int)ptr6)) < 0;
    }
    char v72 = gvar_8062450 ? 0: 1;
    char v73 = gvar_8062450 >= 128;
    char v74 = __parity__(gvar_8062450);
    char v75 = gvar_8062450 < 0;
    char v76 = 0;
    char v77 = 0;
    if(!v72) {
        unsigned int v78 = gvar_8062CD4;
        int* ptr10 = (int*)(v78 + 1);
        char v79 = gvar_8062360 == 4;
        char v80 = (int)gvar_8062360 < 4;
        char v81 = __parity__((unsigned char)gvar_8062360 - 4);
        char v82 = gvar_8062360 < 4;
        char v83 = (((gvar_8062360 - 4) ^ gvar_8062360) & (gvar_8062360 ^ 0x4)) < 0;
        char v84 = (((gvar_8062360 - 4) ^ (gvar_8062360 ^ 0x4)) >>> 4) & 1;
        if(v79) {
            int v85 = *(ptr3 + 28);
            →strlen(v85);
            int* ptr11 = result;
            ptr10 = (int*)((char*)result + 1);
            char v86 = ptr10 ? 0: 1;
            char v87 = (int)ptr10 < 0;
            char v88 = __parity__((unsigned char)ptr10);
            char v89 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ 1) ^ (int)ptr10) >>> 4) & 1);
            char v90 = (unsigned int)ptr11 >= 0xffffffff;
            char v91 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr11) & (int*)~(int)(int*)((int)ptr11 ^ 1)) < 0;
        }
        ptr6 = ptr5;
        ptr5 = (int*)((int)ptr10 + (int)ptr5);
        char v92 = ptr5 ? 0: 1;
        char v93 = (int)ptr5 < 0;
        char v94 = __parity__((unsigned char)ptr5);
        v77 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr6) ^ (int)ptr5) >>> 4) & 1);
        char v95 = (int*)__carry__((int)ptr10, (int)ptr6);
        char v96 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr10 ^ (int)ptr6)) < 0;
    }
    unsigned int v97 = gvar_80624E0;
    int* ptr12 = &v2;
    int v98 = *ptr3;
    int v99 = 0;
    char v100 = 1;
    char v101 = 0;
    char v102 = 1;
    char v103 = 0;
    char v104 = 0;
    int v105 = sub_804CBF0((int)&v2);
    unsigned int v106 = gvar_8062408;
    int* ptr13 = (int*)((int)ptr5 + v2);
    char v107 = v106 ? 0: 1;
    char v108 = v106 >= 0x80000000;
    char v109 = __parity__((unsigned char)v106);
    char v110 = 0;
    char v111 = 0;
    if(!v107) {
        unsigned int v112 = *(unsigned int*)(ptr3 + 26);
        unsigned int v113 = *(unsigned int*)(ptr3 + 6);
        int v114 = (unsigned int)*(char*)(ptr3 + 29);
        int v115 = /*BAD_CALL!*/ sub_804D260(v112, v113);
        int v116 = (unsigned int)((v115 >>> 8) & 0xFFFFFF);
        char v117 = (unsigned char)v115 ? 0: 1;
        char v118 = (unsigned char)v115 < 0;
        char v119 = __parity__((unsigned char)v115);
        char v120 = 0;
        char v121 = 0;
        char v122 = v117 ? 0: 1;
        int v123 = v117 ? 0: 1;
        ptr6 = ptr13;
        ptr13 = (int*)(v123 + (int)ptr13);
        char v124 = ptr13 ? 0: 1;
        char v125 = (int)ptr13 < 0;
        char v126 = __parity__((unsigned char)ptr13);
        v77 = (int*)((int)(int*)((int)(int*)((int)(int*)(v123 ^ (int)ptr6) ^ (int)ptr13) >>> 4) & 1);
        char v127 = __carry__(v123, (int)ptr6);
        char v128 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr6) & (int*)~(int)(int*)(v123 ^ (int)ptr6)) < 0;
    }
    int v129 = v12;
    int v130 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v129;
    char v131 = v130 ? 0: 1;
    char v132 = v130 < 0;
    char v133 = __parity__((unsigned char)v130);
    char v134 = 0;
    char v135 = 0;
    result = ptr13;
    if(!v131) {
        int* ptr14 = &ptr1;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_804D570(int param0, int param1) {
    int* result1;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = sub_8056980(param0);
    →__errno_location();
    int v4 = v1;
    →error(0, *result1, v1);
    if(!(unsigned char)result1) {
        int* result = gvar_8062348;
        if(!result) {
            gvar_8062348 = 1;
        }
        return result;
    }
    gvar_8062348 = 2;
    return result1;
}

int sub_804D600() {
    int* ptr0;
    void* ptr1;
    char v0;
    int v1;
    int v2;
    int result;
    int v3 = v2;
    int* ptr2 = &v3;
    char v4 = &ptr0 == 60;
    char v5 = (int)&v1 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 60);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x38) ^ (int)&v1) >>> 4) & 1);
    char v8 = (unsigned int)&v3 < 56;
    char v9 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v1) & (int)(int*)((int)&v3 ^ 0x38)) < 0;
    int v10 = &v0;
    int v11 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v12 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 0;
    int v19 = result;
    int v20 = 134586507;
    int v21 = 11;
    int v22 = 1;
    →__sprintf_chk();
    →strlen(&v0);
    int v23 = v12;
    int v24 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v23;
    char v25 = v24 ? 0: 1;
    char v26 = v24 < 0;
    char v27 = __parity__((unsigned char)v24);
    char v28 = 0;
    char v29 = 0;
    if(!v25) {
        int* ptr3 = &ptr1;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804D660() {
    int v0;
    if(!gvar_80624ED) {
        int* ptr0 = sub_8054860(v0);
        if(ptr0) {
            int v1 = sub_8055350((int)ptr0, 0);
            return v1 >= 0 ? v1: 0;
        }
    }
    return sub_804D600();
}

int sub_804D940() {
    int result;
    if(gvar_80621F4) {
        result = sub_804D980();
    }
    else {
        sub_804D980();
        sub_804D980();
        result = sub_804D980();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D9D0() {
    sub_804D980();
    return sub_804D980();
}

int sub_804D9F0(unsigned int param0) {
    int result;
    unsigned int v0;
    int* ptr0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int* ptr1;
    int v8;
    char v9;
    int v10;
    char v11;
    int v12 = v8;
    int v13 = v10;
    int* ptr2 = ptr1;
    if(v11) {
        int v14 = *(ptr1 + 1);
        v7 = 0;
        char v15 = gvar_806235C ? 0: 1;
        v6 = v14;
        if(!v15) {
            goto loc_804DABF;
        }
        else {
            goto loc_804DA1E;
        }
    }
    else {
        v6 = *ptr1;
        v7 = 0;
        if(gvar_806235C) {
        loc_804DABF:
            if(v11) {
                v5 = 0;
                v4 = *(ptr2 + 1);
                char v16 = *(char*)((char*)ptr2 + 117) ? 0: 1;
                v3 = *(ptr2 + 27);
                if(v16) {
                    unsigned int v17 = gvar_8062244;
                    v2 = 12;
                    if(v17) {
                        goto loc_804DAEA;
                    }
                    else {
                        v5 = -1;
                    }
                }
                goto loc_804DC7D;
            }
            else {
                char v18 = gvar_806235D ? 0: 1;
                v4 = *ptr2;
                if(!v18) {
                    v1 = 0;
                    if(!*(char*)((char*)ptr2 + 117)) {
                        goto loc_804DC73;
                    }
                    else {
                        v3 = *(ptr2 + 27);
                        v1 = 1;
                    }
                }
                else {
                    v1 = (unsigned int)*(char*)((char*)ptr2 + 117);
                loc_804DC73:
                    v3 = *(ptr2 + 6);
                }
                v5 = (unsigned int)(unsigned char)v1;
            loc_804DC7D:
                if(!*(char*)(ptr2 + 29)) {
                    v2 = *(unsigned int*)(*(ptr2 + 26) * 4 + (int)&gvar_805B2A0);
                    if(v2 == 5) {
                    loc_804DC99:
                        →strlen(v4);
                        int* ptr3 = gvar_8062CB0;
                        int* ptr4 = (int*)((int)ptr1 + v4);
                        int* ptr5 = ptr1;
                        if(ptr3) {
                            int* ptr6 = ptr5;
                            do {
                                int v19 = *ptr3;
                                if((unsigned int)v19 <= (unsigned int)ptr6) {
                                    int v20 = v19;
                                    →strncmp((int)ptr4 - v19, *(ptr3 + 1), v19);
                                    if(ptr1) {
                                        goto loc_804DCD5;
                                    }
                                    else {
                                        ptr0 = ptr3 + 2;
                                        goto loc_804DAFB;
                                    }
                                }
                                else {
                                loc_804DCD5:
                                    ptr3 = *(unsigned int*)(ptr3 + 4);
                                }
                            }
                            while(ptr3);
                        }
                        v2 = 5;
                    }
                    goto loc_804DAEA;
                }
                else {
                    v0 = (unsigned int)(v3 & 0xf000);
                    char v21 = v0 == 0x8000;
                    if(v21) {
                        if((v3 & 0x800)) {
                            int v22 = /*BAD_CALL!*/ sub_804BF90();
                            char v23 = (unsigned char)v22;
                            v2 = 16;
                            if(v23) {
                                goto loc_804DAEA;
                            }
                        }
                        if((v3 & 0x400)) {
                            int v24 = /*BAD_CALL!*/ sub_804BF90();
                            char v25 = (unsigned char)v24;
                            v2 = 17;
                            if(v25) {
                                goto loc_804DAEA;
                            }
                        }
                        int v26 = /*BAD_CALL!*/ sub_804BF90();
                        char v27 = (unsigned char)v26;
                        if(v27) {
                            v2 = 21;
                            if(*(char*)(ptr2 + 31)) {
                                goto loc_804DAEA;
                            }
                        }
                        if((v3 & 0x49)) {
                            int v28 = /*BAD_CALL!*/ sub_804BF90();
                            char v29 = (unsigned char)v28;
                            v2 = 14;
                            if(v29) {
                                goto loc_804DAEA;
                            }
                        }
                        if(*(unsigned int*)(ptr2 + 7) > 1) {
                            int v30 = /*BAD_CALL!*/ sub_804BF90();
                            char v31 = (unsigned char)v30;
                            v2 = 22;
                            if(v31) {
                                goto loc_804DAEA;
                            }
                        }
                        goto loc_804DC99;
                    }
                }
                if(v0 == 0xa000) {
                    char v32 = v5 ? 0: 1;
                    char v33 = 0;
                    v2 = 7;
                    if(v32) {
                        v5 = (unsigned int)6 | ((unsigned int)((v5 >>> 8) & 0xFFFFFF) << 8);
                        unsigned char* ptr7 = "target";
                        unsigned char* ptr8 = gvar_806221C;
                        v2 = 13;
                        while(v5 != 0) {
                            v32 = *ptr8 == *ptr7;
                            v33 = *ptr8 < *ptr7;
                            ++ptr8;
                            ++ptr7;
                            --v5;
                            if(!v32) {
                                break;
                            }
                        }
                        if((v33 || v32 ? 0: 1) != (v33 ? 1: 0)) {
                            v2 = gvar_806224C < 1 ? 7: 13;
                        }
                    }
                }
                else if(v0 != 0x4000) {
                    v2 = 8;
                    if(v0 != 0x1000) {
                        v2 = 9;
                        if(v0 != 0xc000) {
                            v2 = 10;
                            if(v0 != 0x6000) {
                                v2 = v0 == 0x2000 ? 11: 13;
                            }
                        }
                    }
                }
                else if((unsigned int)(v3 & 0x202) == 0x202) {
                    int v34 = /*BAD_CALL!*/ sub_804BF90();
                    char v35 = (unsigned char)v34;
                    v2 = 20;
                    if(!v35) {
                        goto loc_804DEAC;
                    }
                }
                else {
                loc_804DEAC:
                    if((v3 & 0x2)) {
                        int v36 = /*BAD_CALL!*/ sub_804BF90();
                        char v37 = (unsigned char)v36;
                        v2 = 19;
                        if(!v37) {
                            goto loc_804DECB;
                        }
                    }
                    else {
                    loc_804DECB:
                        v2 = 6;
                        if((v3 & 0x200)) {
                            int v38 = /*BAD_CALL!*/ sub_804BF90();
                            unsigned char v39 = (unsigned char)v38;
                            v2 = v39 < 1 ? 6: 18;
                        }
                    }
                }
            loc_804DAEA:
                ptr0 = (int*)(v2 * 8 + &gvar_80621E0);
            }
        loc_804DAFB:
            if(*(ptr0 + 1)) {
                int v40 = /*BAD_CALL!*/ sub_804BF90();
                char v41 = (unsigned char)v40;
                if(v41) {
                    sub_804D9D0();
                }
                v7 = 1;
                sub_804D980();
                sub_804D980();
                sub_804D980();
                if(v12) {
                    goto loc_804DA2B;
                }
                else {
                    goto loc_804DB4C;
                }
            }
            else {
                int v42 = /*BAD_CALL!*/ sub_804BF90();
                char v43 = (unsigned char)v42;
                v7 = v43 ? 1: 0;
            }
        }
    loc_804DA1E:
        if(v12) {
        loc_804DA2B:
            if(gvar_8062455) {
                unsigned int* ptr9 = *(unsigned int*)(v12 + 12);
                if((unsigned int)(int*)(ptr9 + 1) > *(unsigned int*)(v12 + 16)) {
                    →_obstack_newchunk(v12, 4);
                    ptr9 = *(unsigned int*)(v12 + 12);
                }
                *ptr9 = gvar_80624D8;
                *(int*)(v12 + 12) = *(int*)(v12 + 12) + 4;
            }
            int v44 = sub_804CBF0(0);
            gvar_80624D8 += v44;
            result = v44;
            if(gvar_8062455) {
                unsigned int* ptr10 = *(unsigned int*)(v12 + 12);
                if((unsigned int)(int*)(ptr10 + 1) > *(unsigned int*)(v12 + 16)) {
                    →_obstack_newchunk(v12, 4);
                    ptr10 = *(unsigned int*)(v12 + 12);
                }
                *ptr10 = gvar_80624D8;
                *(int*)(v12 + 12) = *(int*)(v12 + 12) + 4;
            }
            if(v7) {
                goto loc_804DBD8;
            }
            else {
                return result;
            }
        }
        else {
        loc_804DB4C:
            int v45 = sub_804CBF0(0);
            gvar_80624D8 += v45;
            result = v45;
        }
        if(v7) {
        loc_804DBD8:
            while(gvar_8062344 || gvar_8062340) {
                if(gvar_80624DC) {
                    sub_804D9D0();
                }
                →fflush_unlocked(stdout);
                →sigprocmask(0, &gvar_8062380, &v9);
                int v46 = gvar_8062344;
                unsigned int v47 = gvar_8062340;
                if(v47) {
                    v46 = 19;
                    gvar_8062340 = v47 - 1;
                }
                else {
                    →signal(v46, 0);
                }
                →raise(v46);
                →sigprocmask(2, &v9, 0);
            }
            sub_804D940();
            v8 = gvar_8062508;
            if((unsigned int)(result + param0 - 1) / (unsigned int)v8 != param0 / (unsigned int)v8) {
                sub_804D980();
                return result;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DF20() {
    int result;
    if(gvar_806235C) {
        result = sub_804BF90();
        if((unsigned char)result) {
            sub_804D980();
            sub_804D980();
            return sub_804D980();
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_804DF70(int param0, int param1) {
    int v0;
    int v1;
    int* ptr0;
    void* ptr1;
    char v2;
    int* ptr2;
    int* result;
    int v3;
    char v4;
    int v5 = param1;
    int* ptr3 = ptr2;
    int* ptr4 = result;
    int* ptr5 = &ptr3;
    char v6 = &ptr0 == 700;
    char v7 = (int)&v3 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 188);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x2b0) ^ (int)&v3) >>> 4) & 1);
    char v10 = (unsigned int)&ptr3 < 688;
    char v11 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v3) & (int)(int*)((int)&ptr3 ^ 0x2b0)) < 0;
    int v12 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v13 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    int v20 = sub_804DF20();
    char v21 = gvar_80624EE ? 0: 1;
    char v22 = gvar_80624EE >= 128;
    char v23 = __parity__(gvar_80624EE);
    char v24 = gvar_80624EE < 0;
    char v25 = 0;
    char v26 = 0;
    if(!v21) {
        char v27 = *(char*)(ptr4 + 29) ? 0: 1;
        char v28 = *(char*)(ptr4 + 29) < 0;
        char v29 = __parity__(*(char*)(ptr4 + 29));
        char v30 = *(unsigned char*)(ptr4 + 29) < 0;
        char v31 = 0;
        char v32 = 0;
        char* ptr6 = (char*)&gvar_805A095;
        if(!v27) {
            unsigned int v33 = *(unsigned int*)(ptr4 + 25);
            unsigned int v34 = *(unsigned int*)(ptr4 + 24);
            unsigned int v35 = v33;
            int v36 = (int)(v34 | v35);
            char v37 = v36 ? 0: 1;
            char v38 = v36 < 0;
            char v39 = __parity__((unsigned char)v36);
            char v40 = 0;
            char v41 = 0;
            if(!v37) {
                int v42 = &v4;
                ptr6 = sub_8054C60(v34, v33, &v4);
            }
        }
        int v43 = 0;
        char v44 = gvar_8062360 == 4;
        char v45 = (int)gvar_8062360 < 4;
        char v46 = __parity__((unsigned char)gvar_8062360 - 4);
        char v47 = gvar_8062360 < 4;
        char v48 = (((gvar_8062360 - 4) ^ gvar_8062360) & (gvar_8062360 ^ 0x4)) < 0;
        char v49 = (((gvar_8062360 - 4) ^ (gvar_8062360 ^ 0x4)) >>> 4) & 1;
        int v50 = v44 ? 0: gvar_8062CBC;
        *(char**)&v2 = ptr6;
        v1 = "%*s ";
        v0 = v50;
        v3 = 1;
        →__printf_chk();
    }
    char v51 = gvar_8062451 ? 0: 1;
    char v52 = gvar_8062451 >= 128;
    char v53 = __parity__(gvar_8062451);
    char v54 = gvar_8062451 < 0;
    char v55 = 0;
    char v56 = 0;
    if(!v51) {
        char v57 = *(char*)(ptr4 + 29) ? 0: 1;
        char v58 = *(char*)(ptr4 + 29) < 0;
        char v59 = __parity__(*(char*)(ptr4 + 29));
        char v60 = *(unsigned char*)(ptr4 + 29) < 0;
        char v61 = 0;
        char v62 = 0;
        int v63 = &gvar_805A095;
        if(!v57) {
            unsigned int v64 = gvar_8062500;
            unsigned int v65 = gvar_8062504;
            int v66 = 0x200;
            int v67 = 0;
            unsigned int v68 = v64;
            unsigned int v69 = gvar_80624FC;
            unsigned int v70 = v65;
            unsigned int v71 = *(unsigned int*)(ptr4 + 17);
            *(unsigned int*)&v2 = v69;
            int v72 = &v4;
            v0 = &v4;
            unsigned int v73 = *(unsigned int*)(ptr4 + 16);
            v63 = sub_8053850(v73, v71, &v4, v2, 0x200, 0, v64, v65);
        }
        int v74 = 0;
        char v75 = gvar_8062360 == 4;
        char v76 = (int)gvar_8062360 < 4;
        char v77 = __parity__((unsigned char)gvar_8062360 - 4);
        char v78 = gvar_8062360 < 4;
        char v79 = (((gvar_8062360 - 4) ^ gvar_8062360) & (gvar_8062360 ^ 0x4)) < 0;
        char v80 = (((gvar_8062360 - 4) ^ (gvar_8062360 ^ 0x4)) >>> 4) & 1;
        int v81 = v75 ? 0: gvar_8062CC0;
        *(int*)&v2 = v63;
        v1 = "%*s ";
        v0 = v81;
        v3 = 1;
        →__printf_chk();
    }
    char v82 = gvar_8062450 ? 0: 1;
    char v83 = gvar_8062450 >= 128;
    char v84 = __parity__(gvar_8062450);
    char v85 = gvar_8062450 < 0;
    char v86 = 0;
    char v87 = 0;
    if(!v82) {
        int v88 = *(ptr4 + 28);
        int v89 = 0;
        char v90 = gvar_8062360 == 4;
        char v91 = (int)gvar_8062360 < 4;
        char v92 = __parity__((unsigned char)gvar_8062360 - 4);
        char v93 = gvar_8062360 < 4;
        char v94 = (((gvar_8062360 - 4) ^ gvar_8062360) & (gvar_8062360 ^ 0x4)) < 0;
        v87 = (((gvar_8062360 - 4) ^ (gvar_8062360 ^ 0x4)) >>> 4) & 1;
        int v95 = v90 ? 0: gvar_8062CD4;
        v1 = "%*s ";
        *(int*)&v2 = v88;
        v0 = v95;
        →__printf_chk();
    }
    int v96 = 0;
    int v97 = 0;
    char v98 = 1;
    char v99 = 0;
    char v100 = 1;
    char v101 = 0;
    char v102 = 0;
    int* ptr7 = ptr4;
    int* ptr8 = (int*)sub_804D9F0(v5);
    unsigned int v103 = gvar_8062408;
    char v104 = v103 ? 0: 1;
    char v105 = v103 >= 0x80000000;
    char v106 = __parity__((unsigned char)v103);
    char v107 = 0;
    char v108 = 0;
    int* ptr9 = ptr8;
    if(!v104) {
        unsigned int v109 = *(unsigned int*)(ptr4 + 26);
        unsigned int v110 = *(unsigned int*)(ptr4 + 6);
        int v111 = (unsigned int)*(char*)(ptr4 + 29);
        int v112 = sub_804D3A0(v109, v110);
        int v113 = (unsigned int)(unsigned char)v112;
        ptr5 = ptr9;
        ptr9 = (int*)(v113 + (int)ptr9);
        char v114 = ptr9 ? 0: 1;
        char v115 = (int)ptr9 < 0;
        char v116 = __parity__((unsigned char)ptr9);
        v87 = (int*)((int)(int*)((int)(int*)((int)(int*)(v113 ^ (int)ptr5) ^ (int)ptr9) >>> 4) & 1);
        char v117 = __carry__(v113, (int)ptr5);
        char v118 = (int)(int*)((int)(int*)((int)ptr9 ^ (int)ptr5) & (int*)~(int)(int*)(v113 ^ (int)ptr5)) < 0;
    }
    int v119 = v13;
    param1 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v119;
    char v120 = param1 ? 0: 1;
    char v121 = param1 < 0;
    char v122 = __parity__((unsigned char)param1);
    char v123 = 0;
    char v124 = 0;
    result = ptr9;
    if(!v120) {
        int* ptr10 = &ptr1;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E120(int param0) {
    int* ptr0;
    int result;
    void* ptr1;
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr2 = &ptr0;
    char v5 = &ptr0 == 332;
    char v6 = (int)&v3 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 76);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x14c) ^ (int)&v3) >>> 4) & 1);
    char v9 = (unsigned int)&ptr0 < 332;
    char v10 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x14c)) < 0;
    int v11 = gvar_806251C;
    int v12 = v4;
    int v13 = result;
    int v14 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v15 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 0;
    int v22 = v2;
    char v23 = v11 ? 0: 1;
    char v24 = v11 < 0;
    char v25 = __parity__((unsigned char)v11);
    char v26 = 0;
    char v27 = 0;
    int v28 = v1;
    if(!v23) {
        →strstr(v2, &gvar_805A09E);
        char v29 = result ? 0: 1;
        char v30 = result < 0;
        char v31 = __parity__((unsigned char)result);
        char v32 = 0;
        char v33 = 0;
        v11 = result;
        if(!v29) {
            →strlen(v22);
            char v34 = result == 101;
            char v35 = result < 101;
            char v36 = __parity__((unsigned char)result - 101);
            char v37 = (unsigned int)result < 101;
            char v38 = (((result - 101) ^ result) & (result ^ 0x65)) < 0;
            v8 = (((result - 101) ^ (result ^ 0x65)) >>> 4) & 1;
            if(v37 || v34) {
                int v39 = v11;
                v11 += 2;
                int v40 = v39;
                int v41 = v39 - v22;
                char v42 = v41 ? 0: 1;
                char v43 = v41 < 0;
                char v44 = __parity__((unsigned char)v41);
                char v45 = (((v22 ^ v40) ^ v41) >>> 4) & 1;
                char v46 = (unsigned int)v22 > (unsigned int)v40;
                char v47 = ((v41 ^ v40) & (v22 ^ v40)) < 0;
                v22 = &v0;
                int v48 = 261;
                int v49 = v41;
                v3 = &v0;
                →__mempcpy_chk();
                int v50 = v2;
                int* ptr3 = (int*)(*(int*)(v28 + 16) * 161);
                ptr2 = (int*)(*(int*)(v28 + 16) * 161);
                int v51 = (int)(ptr3 + 33655112);
                char v52 = v51 ? 0: 1;
                char v53 = v51 < 0;
                char v54 = __parity__((unsigned char)v51);
                v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 ^ 0x8062520) ^ v51) >>> 4) & 1);
                char v55 = (unsigned int)ptr2 >= 4160346848;
                char v56 = (int)(int*)((int)(int*)(v51 ^ (int)ptr2) & (int*)~(int)(int*)((int)ptr2 ^ 0x8062520)) < 0;
                →stpcpy(result, v51);
                →strcpy(result, v11);
            }
        }
    }
    int v57 = param0;
    result = sub_8058320(v13, 1001, v22, v28, 0, v57);
    int v58 = v15;
    v2 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v58;
    char v59 = v2 ? 0: 1;
    char v60 = v2 < 0;
    char v61 = __parity__((unsigned char)v2);
    char v62 = 0;
    char v63 = 0;
    if(!v59) {
        int* ptr4 = &ptr1;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804E240(int param0, int param1) {
    int* ptr0;
    int v0;
    unsigned int v1;
    char v2;
    char v3;
    char v4;
    int v5;
    char* ptr1;
    char* ptr2;
    unsigned int v6;
    int v7;
    int v8;
    unsigned int v9;
    int v10;
    unsigned int v11;
    char* ptr3;
    char* ptr4;
    int v12;
    char* ptr5;
    int* ptr6;
    int v13;
    int v14;
    char v15;
    char v16;
    unsigned int v17;
    unsigned int v18;
    int result;
    char v19;
    char v20;
    char v21;
    int v22;
    char v23;
    char v24;
    int v25;
    void* ptr7;
    char v26;
    int v27;
    char v28;
    char v29;
    int v30;
    int v31 = v22;
    int v32 = result;
    int* ptr8 = &v31;
    char v33 = &v18 == 4796;
    char v34 = (int)&v25 < 0;
    char v35 = __parity__((unsigned char)&v18 - 188);
    char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v31 ^ 0x12ac) ^ (int)&v25) >>> 4) & 1);
    char v37 = (unsigned int)&v31 < 4780;
    char v38 = (int)(int*)((int)(int*)((int)&v31 ^ (int)&v25) & (int)(int*)((int)&v31 ^ 0x12ac)) < 0;
    int v39 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v40 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v41 = 0;
    char v42 = *(char*)(v32 + 116) ? 0: 1;
    char v43 = *(char*)(v32 + 116) < 0;
    char v44 = __parity__(*(char*)(v32 + 116));
    char v45 = *(unsigned char*)(v32 + 116) < 0;
    char v46 = 0;
    char v47 = 0;
    if(!v42) {
        char* ptr9 = &v21;
        int v48 = v32 + 8;
        int v49 = sub_80522D0(v48, &v21);
        char v50 = gvar_8062CB8 ? 0: 1;
        char v51 = gvar_8062CB8 >= 128;
        char v52 = __parity__(gvar_8062CB8);
        char v53 = gvar_8062CB8 < 0;
        char v54 = 0;
        char v55 = 0;
        if(!v50) {
            goto loc_804E62E;
        }
        else {
            goto loc_804E288;
        }
    }
    else {
        int v56 = *(int*)(v32 + 104);
        char v57 = gvar_8062CB8 ? 0: 1;
        char v58 = gvar_8062CB8 >= 128;
        char v59 = __parity__(gvar_8062CB8);
        char v60 = gvar_8062CB8 < 0;
        char v61 = 0;
        char v62 = 0;
        int v63 = 1061109567;
        int v64 = 1061109567;
        char v65 = a_pcdb_lswd[v56];
        int v66 = 0;
        *(short*)&v19 = 0x3f3f;
        char v67 = 0;
        v21 = v65;
        if(!v57) {
        loc_804E62E:
            unsigned int v68 = *(unsigned int*)(v32 + 120);
            char v69 = v68 == 1;
            char v70 = (int)v68 < 1;
            char v71 = __parity__((unsigned char)v68 - 1);
            char v72 = v68 < 1;
            char v73 = (((v68 - 1) ^ v68) & (v68 ^ 1)) < 0;
            char v74 = (((v68 - 1) ^ (v68 ^ 1)) >>> 4) & 1;
            if(!v69) {
                char v75 = v68 == 2;
                char v76 = (int)v68 < 2;
                char v77 = __parity__((unsigned char)v68 - 2);
                char v78 = v68 < 2;
                char v79 = (((v68 - 2) ^ v68) & (v68 ^ 0x2)) < 0;
                char v80 = (((v68 - 2) ^ (v68 ^ 0x2)) >>> 4) & 1;
                if(v75) {
                    v17 = gvar_80624E8;
                    v16 = 43;
                    char v81 = v17 == 1;
                    char v82 = (int)v17 < 1;
                    char v83 = __parity__((unsigned char)v17 - 1);
                    v15 = v17 < 1;
                    char v84 = (((v17 - 1) ^ v17) & (v17 ^ 1)) < 0;
                    char v85 = (((v17 - 1) ^ (v17 ^ 1)) >>> 4) & 1;
                    if(!v81) {
                        goto loc_804E29E;
                    }
                    else {
                        int v86 = v27;
                        int v87 = *(int*)(v32 + 92);
                        int v88 = *(int*)(v32 + 88);
                        v14 = v87;
                        v13 = v88;
                        goto loc_804E2B2;
                    }
                }
            }
            else {
                v16 = 46;
            }
        }
        else {
        loc_804E288:
            v16 = 0;
        }
        v17 = gvar_80624E8;
        char v89 = v17 == 1;
        char v90 = (int)v17 < 1;
        char v91 = __parity__((unsigned char)v17 - 1);
        v15 = v17 < 1;
        char v92 = (((v17 - 1) ^ v17) & (v17 ^ 1)) < 0;
        char v93 = (((v17 - 1) ^ (v17 ^ 1)) >>> 4) & 1;
        if(!v89) {
        loc_804E29E:
            if(v15) {
                int v94 = *(int*)(v32 + 84);
                int v95 = *(int*)(v32 + 80);
                v14 = v94;
                v13 = v95;
                goto loc_804E2B2;
            }
        }
        else {
            int v87 = *(int*)(v32 + 92);
            int v88 = *(int*)(v32 + 88);
            v14 = v87;
            v13 = v88;
            goto loc_804E2B2;
        }
        char v96 = v17 == 2;
        char v97 = (int)v17 < 2;
        char v98 = __parity__((unsigned char)v17 - 2);
        char v99 = v17 < 2;
        char v100 = (((v17 - 2) ^ v17) & (v17 ^ 0x2)) < 0;
        char v101 = (((v17 - 2) ^ (v17 ^ 0x2)) >>> 4) & 1;
        if(!v96) {
            /*NO_RETURN*/ →abort();
            v8 = v27;
            goto loc_804E502;
        }
        else {
            int v102 = *(int*)(v32 + 76);
            int v103 = *(int*)(v32 + 72);
            v14 = v102;
            v13 = v103;
        loc_804E2B2:
            char v104 = gvar_80624EE ? 0: 1;
            char v105 = gvar_80624EE >= 128;
            char v106 = __parity__(gvar_80624EE);
            char v107 = gvar_80624EE < 0;
            char v108 = 0;
            char v109 = 0;
            int v110 = &v29;
            int v111 = &v29;
            if(!v104) {
                char v112 = *(char*)(v32 + 116) ? 0: 1;
                char v113 = *(char*)(v32 + 116) < 0;
                char v114 = __parity__(*(char*)(v32 + 116));
                char v115 = *(unsigned char*)(v32 + 116) < 0;
                char v116 = 0;
                char v117 = 0;
                char* ptr10 = (char*)&gvar_805A095;
                if(!v112) {
                    unsigned int v118 = *(unsigned int*)(v32 + 100);
                    unsigned int v119 = *(unsigned int*)(v32 + 96);
                    unsigned int v120 = v118;
                    int v121 = (int)(v119 | v120);
                    char v122 = v121 ? 0: 1;
                    char v123 = v121 < 0;
                    char v124 = __parity__((unsigned char)v121);
                    char v125 = 0;
                    char v126 = 0;
                    if(!v122) {
                        int v127 = &v20;
                        *(int*)&v24 = &v20;
                        ptr6 = &ptr7;
                        ptr10 = sub_8054C60(v119, v118, *(int*)&v24);
                    }
                }
                ptr5 = ptr10;
                char* ptr11 = gvar_8062CBC;
                v110 = &v29;
                *(int*)&v23 = "%*s ";
                *(int*)&v24 = 3643;
                v12 = 1;
                ptr4 = ptr11;
                →__sprintf_chk();
                →strlen(&v29);
                v111 = result + &v29;
            }
            char v128 = gvar_8062451 ? 0: 1;
            char v129 = gvar_8062451 >= 128;
            char v130 = __parity__(gvar_8062451);
            char v131 = gvar_8062451 < 0;
            char v132 = 0;
            char v133 = 0;
            if(!v128) {
                char v134 = *(char*)(v32 + 116) ? 0: 1;
                char v135 = *(char*)(v32 + 116) < 0;
                char v136 = __parity__(*(char*)(v32 + 116));
                char v137 = *(unsigned char*)(v32 + 116) < 0;
                char v138 = 0;
                char v139 = 0;
                int v140 = &gvar_805A095;
                if(!v134) {
                    unsigned int v141 = gvar_8062500;
                    unsigned int v142 = gvar_8062504;
                    ptr4 = (char*)0x200;
                    ptr5 = NULL;
                    ptr3 = (char*)v141;
                    unsigned int v143 = gvar_80624FC;
                    v11 = v142;
                    unsigned int v144 = *(unsigned int*)(v32 + 68);
                    *(unsigned int*)&v23 = v143;
                    int v145 = &v20;
                    *(int*)&v24 = &v20;
                    unsigned int v146 = *(unsigned int*)(v32 + 64);
                    ptr6 = &ptr7;
                    int v147 = sub_8053850(v146, v144, *(int*)&v24, v23, 0x200, 0, v141, v142);
                    v140 = v147;
                }
                int v148 = gvar_8062CC0;
                v10 = gvar_8062CC0;
                int v149 = sub_8055350(v140, 0);
                int v150 = v10;
                int v151 = &v29;
                int v152 = v150 - v149;
                char v153 = v152 ? 0: 1;
                char v154 = v152 < 0;
                char v155 = __parity__((unsigned char)v152);
                char v156 = 0;
                char v157 = 0;
                int v158 = v152;
                if(v153 || v154 != 0) {
                loc_804E35C:
                    char v159 = *(char*)v140;
                    int v160 = 0;
                    int v161 = v140;
                    ++v140;
                    char v162 = v140 ? 0: 1;
                    char v163 = v140 < 0;
                    char v164 = __parity__((unsigned char)v140);
                    char v165 = (((v161 ^ 1) ^ v140) >>> 4) & 1;
                    char v166 = (unsigned int)v161 >= 0xffffffff;
                    char v167 = ((v140 ^ v161) & ~(v161 ^ 1)) < 0;
                    v111 = &v28;
                    char v168 = v159 ? 0: 1;
                    char v169 = v159 < 0;
                    char v170 = __parity__(v159);
                    char v171 = 0;
                    char v172 = 0;
                    v29 = v159;
                    if(!v168) {
                        v151 = v111;
                        goto loc_804E35C;
                    }
                    else {
                        v29 = 32;
                        goto loc_804E36E;
                    }
                }
                else {
                    int v173 = v158;
                    v9 = (unsigned int)(v158 + &v29);
                    char v174 = v9 ? 0: 1;
                    char v175 = v9 >= 0x80000000;
                    char v176 = __parity__((unsigned char)v9);
                    char v177 = (((v173 ^ &v29) ^ v9) >>> 4) & 1;
                    char v178 = __carry__(v173, &v29);
                    char v179 = ((v9 ^ v173) & ~(v173 ^ &v29)) < 0;
                }
                do {
                    *(char*)v111 = 32;
                    ++v111;
                    char v180 = v9 == v111;
                    char v181 = (int)v9 > v111;
                    char v182 = __parity__((unsigned char)v111 - (unsigned char)v9);
                    char v183 = v9 > (unsigned int)v111;
                    char v184 = (((v111 - v9) ^ v111) & (v9 ^ v111)) < 0;
                    char v185 = (((v111 - v9) ^ (v9 ^ v111)) >>> 4) & 1;
                    if(v180) {
                        v151 = v111;
                        goto loc_804E35C;
                    }
                }
                while(1);
            }
        loc_804E36E:
            char v186 = *(char*)(v32 + 116) ? 0: 1;
            char v187 = *(char*)(v32 + 116) < 0;
            char v188 = __parity__(*(char*)(v32 + 116));
            char v189 = *(unsigned char*)(v32 + 116) < 0;
            char v190 = 0;
            char v191 = 0;
            char* ptr12 = (char*)&gvar_805A095;
            if(!v186) {
                unsigned int v192 = *(unsigned int*)(v32 + 28);
                int v193 = &v20;
                *(int*)&v24 = &v20;
                ptr6 = &ptr7;
                ptr12 = sub_8054C60(v192, 0, *(int*)&v24);
            }
            ptr3 = ptr12;
            char* ptr13 = gvar_8062CC4;
            *(int*)&v23 = "%s %*s ";
            *(int*)&v24 = -1;
            v12 = 1;
            ptr5 = ptr13;
            char* ptr14 = &v21;
            ptr4 = &v21;
            →__sprintf_chk();
            →strlen(v111);
            char v194 = gvar_8062455 ? 0: 1;
            char v195 = gvar_8062455 >= 128;
            char v196 = __parity__(gvar_8062455);
            char v197 = gvar_8062455 < 0;
            char v198 = 0;
            char v199 = 0;
            v8 = result + v111;
            if(!v194) {
                unsigned int v200 = stdout;
                *(int*)&v24 = 2;
                v12 = 1;
                v25 = &gvar_805A0A9;
                *(unsigned int*)&v23 = v200;
                ptr6 = &ptr7;
                →fwrite_unlocked();
                unsigned int v201 = gvar_80624D8;
                gvar_80624D8 += 2;
                char v202 = gvar_80624D8 ? 0: 1;
                char v203 = gvar_80624D8 >= 0x80000000;
                char v204 = __parity__((unsigned char)gvar_80624D8);
                char v205 = (((v201 ^ 0x2) ^ gvar_80624D8) >>> 4) & 1;
                char v206 = v201 >= 0xfffffffe;
                char v207 = (int)((gvar_80624D8 ^ v201) & ~(v201 ^ 0x2)) < 0;
            }
            char v208 = gvar_80622A8 ? 0: 1;
            char v209 = gvar_80622A8 >= 128;
            char v210 = __parity__(gvar_80622A8);
            char v211 = gvar_80622A8 < 0;
            char v212 = 0;
            char v213 = 0;
            if(v208) {
                char v214 = gvar_80622A9 ? 0: 1;
                char v215 = gvar_80622A9 >= 128;
                char v216 = __parity__(gvar_80622A9);
                char v217 = gvar_80622A9 < 0;
                char v218 = 0;
                char v219 = 0;
                if(v214) {
                    char v220 = gvar_8062510 ? 0: 1;
                    char v221 = gvar_8062510 >= 128;
                    char v222 = __parity__(gvar_8062510);
                    char v223 = gvar_8062510 < 0;
                    char v224 = 0;
                    char v225 = 0;
                    if(!v220) {
                        int v226 = v111;
                    }
                    else {
                        char v227 = gvar_8062450 ? 0: 1;
                        char v228 = gvar_8062450 >= 128;
                        char v229 = __parity__(gvar_8062450);
                        char v230 = gvar_8062450 < 0;
                        char v231 = 0;
                        char v232 = 0;
                        if(v227) {
                            goto loc_804E458;
                        }
                    }
                }
                goto loc_804E3F0;
            }
            else {
            loc_804E3F0:
                int v233 = stdout;
                int v234 = v8;
                int v235 = v8 - &v29;
                char v236 = v235 ? 0: 1;
                char v237 = v235 < 0;
                char v238 = __parity__((unsigned char)v235);
                char v239 = (((v234 ^ &v29) ^ v235) >>> 4) & 1;
                char v240 = (unsigned int)v234 < (unsigned int)&v29;
                char v241 = ((v235 ^ v234) & (v234 ^ &v29)) < 0;
                →fputs_unlocked(&v29, v233);
                gvar_80624D8 += v235;
                char v242 = gvar_80622A8 ? 0: 1;
                char v243 = gvar_80622A8 >= 128;
                char v244 = __parity__(gvar_80622A8);
                char v245 = gvar_80622A8 < 0;
                char v246 = 0;
                char v247 = 0;
                if(!v242) {
                    int v248 = (int)*(char*)(v32 + 116);
                    int v249 = *(int*)(v32 + 32);
                    unsigned int v250 = gvar_8062CC8;
                    ptr6 = &ptr7;
                    unsigned int v251 = sub_804CBA0(v248, v250);
                }
                char v252 = gvar_80622A9 ? 0: 1;
                char v253 = gvar_80622A9 >= 128;
                char v254 = __parity__(gvar_80622A9);
                char v255 = gvar_80622A9 < 0;
                char v256 = 0;
                char v257 = 0;
                if(!v252) {
                    char v258 = *(char*)(v32 + 116) ? 0: 1;
                    char v259 = *(char*)(v32 + 116) < 0;
                    char v260 = __parity__(*(char*)(v32 + 116));
                    char v261 = *(unsigned char*)(v32 + 116) < 0;
                    char v262 = 0;
                    char v263 = 0;
                    int v264 = &gvar_805A095;
                    unsigned int v265 = gvar_8062CCC;
                    int* ptr15 = *(int**)(v32 + 36);
                    if(!v258) {
                        int v266 = 0;
                        char v267 = gvar_80624ED ? 0: 1;
                        char v268 = gvar_80624ED >= 128;
                        char v269 = __parity__(gvar_80624ED);
                        char v270 = gvar_80624ED < 0;
                        char v271 = 0;
                        char v272 = 0;
                        if(v267) {
                            v7 = (int)ptr15;
                            v6 = v265;
                            ptr6 = &ptr7;
                            int* ptr16 = sub_80549F0((int)ptr15);
                            v265 = v6;
                            ptr15 = (int*)v7;
                        }
                    }
                    unsigned int v273 = sub_804CAE0(v265, ptr15);
                }
                char v274 = gvar_8062510 >= 128;
                char v275 = __parity__(gvar_8062510);
                char v276 = gvar_8062510 < 0;
                char v277 = 0;
                char v278 = 0;
                if(gvar_8062510) {
                    int v279 = *(int*)(v32 + 32);
                    unsigned int v280 = sub_804CBA0((int)*(char*)(v32 + 116), gvar_8062CD0);
                }
                char v281 = gvar_8062450 ? 0: 1;
                char v282 = gvar_8062450 >= 128;
                char v283 = __parity__(gvar_8062450);
                char v284 = gvar_8062450 < 0;
                char v285 = 0;
                char v286 = 0;
                v8 = &v29;
                if(!v281) {
                    int v287 = *(int*)(v32 + 112);
                    int v288 = 0;
                    char v289 = 1;
                    char v290 = 0;
                    char v291 = 1;
                    char v292 = 0;
                    char v293 = 0;
                    unsigned int v294 = gvar_8062CD4;
                    unsigned int v295 = sub_804CAE0(v294, NULL);
                }
            }
        loc_804E458:
            char v296 = *(char*)(v32 + 116) ? 0: 1;
            char v297 = *(char*)(v32 + 116) < 0;
            char v298 = __parity__(*(char*)(v32 + 116));
            char v299 = *(unsigned char*)(v32 + 116) < 0;
            char v300 = 0;
            char v301 = 0;
            int v302 = &gvar_805A095;
            if(!v296) {
                int v303 = *(int*)(v32 + 24);
                unsigned int v304 = (unsigned int)(v303 & 0xf000);
                char v305 = v304 == 0x6000;
                char v306 = (int)v304 < 0x6000;
                char v307 = __parity__((unsigned char)v304);
                char v308 = v304 < 0x6000;
                char v309 = (((v304 - 0x6000) ^ v304) & (v304 ^ 0x6000)) < 0;
                char v310 = (((v304 - 0x6000) ^ (v304 ^ 0x6000)) >>> 4) & 1;
                if(v305) {
                loc_804E838:
                    int* ptr17 = &v26;
                    int v311 = *(int*)(v32 + 44);
                    int v312 = -2;
                    *(int**)&v24 = &v26;
                    int v313 = *(int*)(v32 + 40);
                    int v314 = -2;
                    unsigned int v315 = (unsigned int)(-2 - gvar_8062CD8);
                    char v316 = v315 ? 0: 1;
                    char v317 = v315 >= 0x80000000;
                    char v318 = __parity__((unsigned char)v315);
                    char v319 = (((gvar_8062CD8 ^ 0xfffffffe) ^ v315) >>> 4) & 1;
                    char v320 = gvar_8062CD8 > 0xfffffffe;
                    char v321 = ((gvar_8062CD8 ^ 0xfffffffe) & (v315 ^ 0xfffffffe)) < 0;
                    v12 = 0;
                    unsigned int v322 = v315;
                    unsigned int v323 = v315 - gvar_8062CDC;
                    char v324 = v323 ? 0: 1;
                    char v325 = v323 >= 0x80000000;
                    char v326 = __parity__((unsigned char)v323);
                    char v327 = (((gvar_8062CDC ^ v322) ^ v323) >>> 4) & 1;
                    char v328 = gvar_8062CDC > v322;
                    char v329 = (int)((gvar_8062CDC ^ v322) & (v323 ^ v322)) < 0;
                    int v330 = v313;
                    long long v331 = (unsigned long long)v313 | ((unsigned long long)v311 << 32);
                    long long v332 = v331 >>> 12;
                    char v333 = (v330 >>> 11) & 1;
                    char v334 = v329;
                    char v335 = (unsigned int)v332 ? 0: 1;
                    char v336 = (unsigned int)v332 < 0;
                    char v337 = __parity__((unsigned char)v332);
                    int v338 = (unsigned int)*(char*)(v32 + 40);
                    int v339 = (unsigned int)v332 & 0xffffff00;
                    unsigned int v340 = gvar_8062CE0 + v323;
                    unsigned int v341 = (unsigned int)(v339 | v338);
                    char v342 = v341 ? 0: 1;
                    char v343 = v341 >= 0x80000000;
                    char v344 = __parity__((unsigned char)v341);
                    char v345 = 0;
                    char v346 = 0;
                    char* ptr18 = sub_8054C60(v341, 0, *(int*)&v24);
                    char* ptr19 = gvar_8062CDC;
                    int v347 = *(int*)(v32 + 44);
                    v12 = 0;
                    ptr2 = ptr19;
                    int v348 = *(int*)(v32 + 44);
                    int v349 = v347 & 0xfffff000;
                    char v350 = v349 ? 0: 1;
                    char v351 = v349 < 0;
                    char v352 = __parity__((unsigned char)v349);
                    char v353 = 0;
                    char v354 = 0;
                    ptr1 = ptr18;
                    int v355 = &v20;
                    *(int*)&v24 = &v20;
                    int v356 = *(int*)(v32 + 40);
                    int v357 = *(int*)(v32 + 40);
                    long long v358 = (unsigned long long)v356 | ((unsigned long long)v348 << 32);
                    long long v359 = v358 >>> 8;
                    int v360 = (unsigned int)v359;
                    char v361 = (v357 >>> 7) & 1;
                    char v362 = 0;
                    char v363 = v360 ? 0: 1;
                    char v364 = v360 < 0;
                    char v365 = __parity__((unsigned char)v360);
                    int v366 = v360 & 0xfff;
                    unsigned int v367 = (unsigned int)(v366 | v349);
                    char v368 = v367 ? 0: 1;
                    char v369 = v367 >= 0x80000000;
                    char v370 = __parity__((unsigned char)v367);
                    char v371 = 0;
                    char v372 = 0;
                    char* ptr20 = sub_8054C60(v367, 0, *(int*)&v24);
                    char* ptr21 = ptr1;
                    char* ptr22 = ptr2;
                    *(int*)&v23 = &gvar_805A0AC;
                    *(int*)&v24 = -1;
                    v11 = (unsigned int)ptr21;
                    ptr3 = ptr22;
                    ptr5 = ptr20;
                    int v373 = 0;
                    char v374 = v340 ? 0: 1;
                    char v375 = v340 >= 0x80000000;
                    char v376 = __parity__((unsigned char)v340);
                    char v377 = 0;
                    char v378 = 0;
                    unsigned int v379 = v375 ? 0: v340;
                    unsigned int v380 = v375 ? 0: v340;
                    char* ptr23 = (char*)(gvar_8062CD8 + v379);
                    char v381 = ptr23 ? 0: 1;
                    char v382 = (int)ptr23 < 0;
                    char v383 = __parity__((unsigned char)ptr23);
                    char v384 = (int*)((int)(int*)((int)(int*)((gvar_8062CD8 ^ v380) ^ (int)ptr23) >>> 4) & 1);
                    char v385 = __carry__(gvar_8062CD8, v380);
                    char v386 = (int)(int*)((int)(int*)((int)ptr23 ^ v380) & ~(gvar_8062CD8 ^ v380)) < 0;
                    v12 = 1;
                    ptr4 = ptr23;
                    →__sprintf_chk();
                    unsigned int v387 = gvar_8062CE0;
                    v27 = v387 + v8 + 1;
                    goto loc_804E518;
                }
                else {
                    char v388 = v304 == 0x2000;
                    char v389 = (int)v304 < 0x2000;
                    char v390 = __parity__((unsigned char)v304);
                    char v391 = v304 < 0x2000;
                    char v392 = (((v304 - 0x2000) ^ v304) & (v304 ^ 0x2000)) < 0;
                    char v393 = (((v304 - 0x2000) ^ (v304 ^ 0x2000)) >>> 4) & 1;
                    if(v388) {
                        goto loc_804E838;
                    }
                    else {
                        unsigned int v394 = gvar_80622A0;
                        unsigned int v395 = gvar_80622A4;
                        ptr4 = (char*)0x1;
                        ptr5 = NULL;
                        ptr3 = (char*)v394;
                        unsigned int v396 = gvar_80624FC;
                        v11 = v395;
                        unsigned int v397 = *(unsigned int*)(v32 + 56);
                        *(unsigned int*)&v23 = v396;
                        int v398 = &v20;
                        *(int*)&v24 = &v20;
                        unsigned int v399 = *(unsigned int*)(v32 + 52);
                        int v400 = sub_8053850(v399, v397, *(int*)&v24, v23, 1, 0, v394, v395);
                        v302 = v400;
                    }
                }
            }
            unsigned int v401 = gvar_8062CE0;
            v7 = v302;
            int v402 = sub_8055350(v302, 0);
            param1 = v7;
            v5 = (int)(v401 - v402);
            v4 = v5 ? 0: 1;
            v3 = v5 < 0;
            char v403 = __parity__((unsigned char)v5);
            char v404 = 0;
            char v405 = 0;
        }
        if(!v4 && v3 == 0) {
            int v406 = v5;
            unsigned int v407 = (unsigned int)(v5 + v8);
            char v408 = v407 ? 0: 1;
            char v409 = v407 >= 0x80000000;
            char v410 = __parity__((unsigned char)v407);
            char v411 = (((v8 ^ v406) ^ v407) >>> 4) & 1;
            char v412 = __carry__(v8, v406);
            char v413 = ((v407 ^ v406) & ~(v8 ^ v406)) < 0;
            unsigned int v414 = v407;
            do {
                *(char*)v8 = 32;
                ++v8;
                v2 = v414 == v8;
                char v415 = (int)v414 > v8;
                char v416 = __parity__((unsigned char)v8 - (unsigned char)v414);
                char v417 = v414 > (unsigned int)v8;
                char v418 = (((v8 - v414) ^ v8) & (v414 ^ v8)) < 0;
                char v419 = (((v8 - v414) ^ (v414 ^ v8)) >>> 4) & 1;
            }
            while(!v2);
        }
    loc_804E502:
        char v420 = *(char*)param1;
        int v421 = 0;
        int v422 = param1;
        ++param1;
        char v423 = param1 ? 0: 1;
        char v424 = param1 < 0;
        char v425 = __parity__((unsigned char)param1);
        char v426 = (((v422 ^ 1) ^ param1) >>> 4) & 1;
        char v427 = (unsigned int)v422 >= 0xffffffff;
        char v428 = ((param1 ^ v422) & ~(v422 ^ 1)) < 0;
        v27 = v8 + 1;
        char v429 = v420 ? 0: 1;
        char v430 = v420 < 0;
        char v431 = __parity__(v420);
        char v432 = 0;
        char v433 = 0;
        *(char*)v8 = v420;
        if(!v429) {
            v8 = v27;
            goto loc_804E502;
        }
        else {
            *(char*)v8 = 32;
        }
    }
loc_804E518:
    int v434 = &v13;
    char* ptr24 = (char*)&gvar_805A095;
    →localtime(&v13);
    *(char*)v27 = 1;
    char v435 = *(char*)(v32 + 116) ? 0: 1;
    char v436 = *(char*)(v32 + 116) < 0;
    char v437 = __parity__(*(char*)(v32 + 116));
    char v438 = *(unsigned char*)(v32 + 116) < 0;
    char v439 = 0;
    char v440 = 0;
    if(!v435) {
        char v441 = result ? 0: 1;
        char v442 = result < 0;
        char v443 = __parity__((unsigned char)result);
        char v444 = 0;
        char v445 = 0;
        if(!v441) {
            char* ptr25 = gvar_8062358;
            unsigned int v446 = gvar_8062354;
            int v447 = v13;
            ptr1 = ptr25;
            int v448 = v14;
            char v449 = v446 == v447;
            char v450 = (int)v446 > v447;
            char v451 = __parity__((unsigned char)v447 - (unsigned char)v446);
            char v452 = v446 > (unsigned int)v447;
            char v453 = (int)(((unsigned int)(v447 - v446) ^ v447) & (v446 ^ v447)) < 0;
            char v454 = (((unsigned int)(v447 - v446) ^ (v446 ^ v447)) >>> 4) & 1;
            v10 = v448;
            if(!v449 && v450 == v453) {
            loc_804EA88:
                v6 = (unsigned int)result;
                int v455 = sub_8052840(&gvar_8062354);
                char* ptr26 = gvar_8062358;
                int v456 = v14;
                v446 = gvar_8062354;
                v1 = v6;
                ptr1 = ptr26;
                v447 = v13;
                v10 = v456;
            }
            else if(v450 == v453) {
                char v457 = v448 == ptr1;
                char v458 = v448 > (int)ptr1;
                char v459 = __parity__((unsigned char)ptr1 - (unsigned char)v448);
                char v460 = (unsigned int)v448 > (unsigned int)ptr1;
                char v461 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v448) ^ (int)ptr1) & (int)(int*)(v448 ^ (int)ptr1)) < 0;
                char v462 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v448) ^ (int)(int*)(v448 ^ (int)ptr1)) >>> 4) & 1);
                if(v458) {
                    goto loc_804EA88;
                }
            }
            unsigned int v463 = v446 - 15778476;
            char v464 = v447 == v463;
            char v465 = v447 > (int)v463;
            char v466 = __parity__((unsigned char)v463 - (unsigned char)v447);
            char v467 = (unsigned int)v447 > v463;
            char v468 = (int)(((v463 - v447) ^ v463) & (unsigned int)(v447 ^ v463)) < 0;
            char v469 = (((v463 - v447) ^ (unsigned int)(v447 ^ v463)) >>> 4) & 1;
            if(v465 == v468) {
                ptr2 = NULL;
                if((v464 || v465 != v468)) {
                    int v470 = v10;
                    char v471 = v470 == ptr1;
                    char v472 = v470 > (int)ptr1;
                    char v473 = __parity__((unsigned char)ptr1 - (unsigned char)v470);
                    char v474 = (unsigned int)v470 > (unsigned int)ptr1;
                    char v475 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v470) ^ (int)ptr1) & (int)(int*)(v470 ^ (int)ptr1)) < 0;
                    char v476 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v470) ^ (int)(int*)(v470 ^ (int)ptr1)) >>> 4) & 1);
                    if(v472) {
                        goto loc_804E6D6;
                    }
                }
            }
            else {
            loc_804E6D6:
                char v477 = v446 == v447;
                char v478 = (int)v446 < v447;
                char v479 = __parity__((unsigned char)v446 - (unsigned char)v447);
                char v480 = v446 < (unsigned int)v447;
                char v481 = (int)(((v446 - v447) ^ v446) & (v446 ^ v447)) < 0;
                char v482 = (((v446 - v447) ^ (v446 ^ v447)) >>> 4) & 1;
                ptr2 = (char*)0x1;
                if((v477 || v478 != v481)) {
                    ptr2 = NULL;
                    if(v478 == v481) {
                        int v483 = v10;
                        int v484 = v10;
                        int* ptr27 = (int*)(v483 - (int)ptr1);
                        char v485 = ptr27 ? 0: 1;
                        char v486 = (int)ptr27 < 0;
                        char v487 = __parity__((unsigned char)ptr27);
                        char v488 = (int*)((int)(int*)((int)(int*)((int)(int*)(v484 ^ (int)ptr1) ^ (int)ptr27) >>> 4) & 1);
                        char v489 = (unsigned int)v484 < (unsigned int)ptr1;
                        char v490 = (int)(int*)((int)(int*)((int)ptr27 ^ v484) & (int)(int*)(v484 ^ (int)ptr1)) < 0;
                        int* ptr28 = ptr27;
                        char* ptr29 = (char*)((int)ptr27 >>> 31);
                        char v491 = (int*)((int)(int*)((int)ptr28 >>> 30) & 1);
                        char v492 = v490;
                        char v493 = ptr29 ? 0: 1;
                        char v494 = (int)ptr29 < 0;
                        char v495 = __parity__((unsigned char)ptr29);
                        ptr2 = ptr29;
                    }
                }
            }
            char* ptr30 = ptr2;
            int v496 = v10;
            unsigned int v497 = *(unsigned int*)((int)(int*)((int)ptr30 * 4) + (int)&gvar_80622AC);
            unsigned int v498 = v1;
            int v499 = v27;
            v0 = sub_804E120(v496);
            char v500 = v0 ? 0: 1;
            char v501 = v0 < 0;
            char v502 = __parity__((unsigned char)v0);
            char v503 = 0;
            char v504 = 0;
            if(!v500) {
                goto loc_804E723;
            }
            else {
                char v505 = *(char*)v27 ? 0: 1;
                char v506 = *(char*)v27 < 0;
                char v507 = __parity__(*(char*)v27);
                char v508 = *(unsigned char*)v27 < 0;
                char v509 = 0;
                char v510 = 0;
                if(v505) {
                    goto loc_804E723;
                }
                else {
                    v441 = *(char*)(v32 + 116) ? 0: 1;
                    v442 = *(char*)(v32 + 116) < 0;
                    v443 = __parity__(*(char*)(v32 + 116));
                    v445 = *(unsigned char*)(v32 + 116) < 0;
                    v444 = 0;
                    char v511 = 0;
                    ptr24 = (char*)&gvar_805A095;
                    if(v441) {
                        goto loc_804E536;
                    }
                }
            }
        }
        int* ptr31 = &v26;
        *(int**)&v24 = &v26;
        int v512 = v13;
        int v513 = v13;
        int v514 = v13;
        unsigned int v515 = (unsigned int)(v513 >> 31);
        char v516 = (v514 >>> 30) & 1;
        char v517 = 0;
        char v518 = v515 ? 0: 1;
        char v519 = v515 >= 0x80000000;
        char v520 = __parity__((unsigned char)v515);
        char* ptr32 = sub_8054B80(v512, v515, *(int*)&v24);
        ptr24 = ptr32;
        goto loc_804E536;
    }
    else {
    loc_804E536:
        int v521 = gvar_80622B8;
        char v522 = v521 ? 0: 1;
        char v523 = v521 < 0;
        char v524 = __parity__((unsigned char)v521);
        char v525 = 0;
        char v526 = 0;
        if(!v523) {
            goto loc_804E54A;
        loc_804E723:
            int v527 = v0;
            char* ptr33 = (char*)(v0 + v27);
            char v528 = ptr33 ? 0: 1;
            char v529 = (int)ptr33 < 0;
            char v530 = __parity__((unsigned char)ptr33);
            char v531 = (int*)((int)(int*)((int)(int*)((v27 ^ v527) ^ (int)ptr33) >>> 4) & 1);
            char v532 = __carry__(v27, v527);
            char v533 = (int)(int*)((int)(int*)((int)ptr33 ^ v527) & ~(v27 ^ v527)) < 0;
            *ptr33 = 32;
            ptr0 = (int*)(ptr33 + 1);
            *(ptr33 + 1) = 0;
        }
        else {
            int v534 = &v30;
            v30 = 0;
            →localtime(&v30);
            char v535 = result ? 0: 1;
            char v536 = result < 0;
            char v537 = __parity__((unsigned char)result);
            char v538 = 0;
            char v539 = 0;
            if(!v535) {
                unsigned int v540 = gvar_80622AC;
                int v541 = result;
                int v542 = &v20;
                int v543 = sub_804E120(0);
                char v544 = v543 ? 0: 1;
                char v545 = v543 < 0;
                char v546 = __parity__((unsigned char)v543);
                char v547 = 0;
                char v548 = 0;
                if(v544) {
                    v521 = gvar_80622B8;
                }
                else {
                    int v549 = &v20;
                    *(int*)&v24 = 0;
                    v521 = sub_8055160(&v20, v543, 0);
                    gvar_80622B8 = v521;
                }
                char v550 = v521 ? 0: 1;
                char v551 = v521 < 0;
                char v552 = __parity__((unsigned char)v521);
                char v553 = 0;
                char v554 = 0;
                if(v551) {
                    goto loc_804EB01;
                }
            }
            else {
            loc_804EB01:
                gvar_80622B8 = 0;
                v521 = 0;
                char v555 = 1;
                char v556 = 0;
                char v557 = 1;
                char v558 = 0;
                char v559 = 0;
            }
        loc_804E54A:
            ptr4 = (char*)v521;
            *(int*)&v23 = "%*s ";
            *(int*)&v24 = -1;
            v12 = 1;
            →__sprintf_chk();
            →strlen(v27);
            int v560 = v27;
            ptr0 = (int*)(result + v27);
            char v561 = ptr0 ? 0: 1;
            char v562 = (int)ptr0 < 0;
            char v563 = __parity__((unsigned char)ptr0);
            char v564 = (int*)((int)(int*)((int)(int*)((result ^ v560) ^ (int)ptr0) >>> 4) & 1);
            char v565 = __carry__(result, v560);
            char v566 = (int)(int*)((int)(int*)((int)ptr0 ^ v560) & ~(result ^ v560)) < 0;
        }
    }
    int v567 = stdout;
    int* ptr34 = ptr0;
    unsigned int v568 = (unsigned int)((int)ptr0 - &v29);
    char v569 = v568 ? 0: 1;
    char v570 = v568 >= 0x80000000;
    char v571 = __parity__((unsigned char)v568);
    char v572 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr34 ^ &v29) ^ v568) >>> 4) & 1);
    char v573 = (unsigned int)ptr34 < (unsigned int)&v29;
    char v574 = (int)(int*)((int)(int*)(v568 ^ (int)ptr34) & (int)(int*)((int)ptr34 ^ &v29)) < 0;
    →fputs_unlocked(&v29, v567);
    int v575 = 0x8062460;
    int v576 = 0;
    char v577 = 1;
    char v578 = 0;
    char v579 = 1;
    char v580 = 0;
    char v581 = 0;
    int v582 = v32;
    unsigned int v583 = gvar_80624D8;
    gvar_80624D8 += v568;
    char v584 = gvar_80624D8 ? 0: 1;
    char v585 = gvar_80624D8 >= 0x80000000;
    char v586 = __parity__((unsigned char)gvar_80624D8);
    char v587 = (((v568 ^ v583) ^ gvar_80624D8) >>> 4) & 1;
    char v588 = __carry__(v568, v583);
    char v589 = (int)((gvar_80624D8 ^ v583) & ~(v568 ^ v583)) < 0;
    int v590 = sub_804D9F0(v568);
    unsigned int v591 = *(unsigned int*)(v32 + 104);
    char v592 = v591 == 6;
    char v593 = (int)v591 < 6;
    char v594 = __parity__((unsigned char)v591 - 6);
    char v595 = v591 < 6;
    char v596 = (((v591 - 6) ^ v591) & (v591 ^ 0x6)) < 0;
    char v597 = (((v591 - 6) ^ (v591 ^ 0x6)) >>> 4) & 1;
    int v598 = v590;
    if(!v592) {
        result = gvar_8062408;
        char v599 = result ? 0: 1;
        char v600 = result < 0;
        char v601 = __parity__((unsigned char)result);
        char v602 = 0;
        char v603 = 0;
        if(!v599) {
            unsigned int v604 = *(unsigned int*)(v32 + 24);
            int v605 = (unsigned int)*(char*)(v32 + 116);
            result = sub_804D3A0(v591, v604);
        }
    }
    else {
        result = *(int*)(v32 + 4);
        char v606 = result ? 0: 1;
        char v607 = result < 0;
        char v608 = __parity__((unsigned char)result);
        char v609 = 0;
        char v610 = 0;
        if(!v606) {
            unsigned int v611 = stdout;
            *(int*)&v24 = 4;
            v12 = 1;
            *(unsigned int*)&v23 = v611;
            →fwrite_unlocked();
            unsigned int v612 = (unsigned int)(v568 + v598 + 4);
            int v613 = 0;
            char v614 = 1;
            char v615 = 0;
            char v616 = 1;
            char v617 = 0;
            char v618 = 0;
            int v619 = 1;
            int v620 = v32;
            v583 = gvar_80624D8;
            gvar_80624D8 += 4;
            char v621 = gvar_80624D8 ? 0: 1;
            char v622 = gvar_80624D8 >= 0x80000000;
            char v623 = __parity__((unsigned char)gvar_80624D8);
            v597 = (((v583 ^ 0x4) ^ gvar_80624D8) >>> 4) & 1;
            char v624 = v583 >= 0xfffffffc;
            char v625 = (int)((gvar_80624D8 ^ v583) & ~(v583 ^ 0x4)) < 0;
            int v626 = sub_804D9F0(v612);
            result = gvar_8062408;
            char v627 = result ? 0: 1;
            char v628 = result < 0;
            char v629 = __parity__((unsigned char)result);
            char v630 = 0;
            char v631 = 0;
            if(!v627) {
                unsigned int v632 = *(unsigned int*)(v32 + 108);
                int v633 = 0;
                char v634 = 1;
                char v635 = 0;
                char v636 = 1;
                char v637 = 0;
                char v638 = 0;
                int v639 = 1;
                result = sub_804D3A0(0, v632);
            }
        }
    }
    int v640 = v40;
    int v641 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v640;
    char v642 = v641 ? 0: 1;
    char v643 = v641 < 0;
    char v644 = __parity__((unsigned char)v641);
    char v645 = 0;
    char v646 = 0;
    if(!v642) {
        ptr6 = &ptr7;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int sub_804EB40(int param0) {
    int v0;
    unsigned char v1;
    int v2;
    int v3;
    int v4;
    char v5;
    int v6;
    int v7;
    int v8;
    unsigned int v9;
    int* ptr0;
    int* ptr1;
    unsigned int v10;
    int v11;
    int v12;
    unsigned int v13;
    unsigned int v14;
    unsigned char v15;
    unsigned int v16;
    char v17;
    char v18;
    char v19;
    char v20;
    int v21;
    int v22;
    char v23;
    int v24;
    int v25;
    unsigned char v26;
    int v27 = v24;
    int v28 = v25;
    int v29 = param0;
    unsigned char v30 = v26;
    int v31 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v32 = v22;
    int v33 = gvar_80624D0;
    int v34 = v29;
    unsigned int v35 = gvar_80624D4;
    char v36 = gvar_80624CC == v35;
    if(!v36) {
        goto loc_804EB8D;
    }
    if(v35 > 0xffffff) {
        /*NO_RETURN*/ sub_8058C00();
        v14 = 0;
        int v37 = sub_8058BD0(v32);
        ++gvar_80624D4;
        *(int*)v16 = v37;
        goto loc_804EE1B;
    }
    else {
        v33 = sub_8058AA0(v33, (int)(v35 * 0x100));
        v35 = gvar_80624D4;
        gvar_80624CC *= 2;
        v36 = gvar_80624CC ? 0: 1;
        gvar_80624D0 = v33;
    loc_804EB8D:
        unsigned int v38 = (unsigned int)(v35 * 128 + v33);
        unsigned int v39 = (unsigned int)(v35 * 128 + v33);
        char v40 = v39 & 1 ? 0: 1;
        v16 = v38;
        int v41 = 128;
        if(!v40) {
            *(char*)v39 = 0;
            v41 = 127;
            ++v39;
        }
        if(v39 & 0x2) {
            *(short*)v39 = 0;
            v41 -= 2;
            v39 += 2;
        }
        int v42 = v41 >>> 2;
        char v43 = (unsigned char)v41 & 0x2 ? 0: 1;
        while(v42 != 0) {
            *(int*)v39 = 0;
            v39 += 4;
            --v42;
        }
        if(!v43) {
            *(short*)v39 = 0;
            v39 += 2;
        }
        if((v41 & 1)) {
            *(char*)v39 = 0;
        }
        unsigned int v44 = v16;
        int v45 = v28;
        char v46 = v30 ? 0: 1;
        *(int*)(v44 + 96) = 0;
        *(int*)(v44 + 100) = 0;
        *(int*)(v44 + 104) = v45;
        if(!v46 || gvar_8062452) {
            goto loc_804EC05;
        }
        else if(v28 == 3 && gvar_806235C) {
            int v47 = /*BAD_CALL!*/ sub_804BF90();
            char v48 = (unsigned char)v47;
            char v49 = v48 ? 0: 1;
            if(v49) {
                int v50 = /*BAD_CALL!*/ sub_804BF90();
                char v51 = (unsigned char)v50;
                char v52 = v51 ? 0: 1;
                if(v52) {
                    int v53 = /*BAD_CALL!*/ sub_804BF90();
                    char v54 = (unsigned char)v53;
                    char v55 = v54 ? 0: 1;
                    if(v55) {
                        goto loc_804EEB5;
                    }
                }
            }
            goto loc_804EC05;
        }
        else {
        loc_804EEB5:
            v15 = gvar_80624EE;
            if(gvar_80624EE) {
                goto loc_804EECA;
            }
            else {
                v14 = 0;
            }
        }
        if(!gvar_8062454) {
            int v37 = sub_8058BD0(v32);
            ++gvar_80624D4;
            *(int*)v16 = v37;
            goto loc_804EE1B;
        }
        else {
        loc_804EECA:
            char v56 = v28 ? 0: 1;
            int v57 = (unsigned int)(v56 ? 1: 0) | ((unsigned int)((v28 >>> 8) & 0xFFFFFF) << 8);
            if(v56 || v28 == 6) {
                v13 = gvar_8062400;
                if(v13 == 5 || gvar_806235D || gvar_8062364) {
                    goto loc_804EC0B;
                }
                else {
                    v14 = v13;
                }
            }
            if(!v15) {
                if(!gvar_8062454) {
                    v14 = 0;
                    int v37 = sub_8058BD0(v32);
                    ++gvar_80624D4;
                    *(int*)v16 = v37;
                    goto loc_804EE1B;
                }
                else if(!(unsigned char)v57) {
                    v14 = 0;
                    if(v28 != 5) {
                        int v37 = sub_8058BD0(v32);
                        ++gvar_80624D4;
                        *(int*)v16 = v37;
                        goto loc_804EE1B;
                    }
                    else if(gvar_8062408 != 3) {
                        if(!gvar_806235C) {
                            int v37 = sub_8058BD0(v32);
                            ++gvar_80624D4;
                            *(int*)v16 = v37;
                            goto loc_804EE1B;
                        }
                        else {
                            int v58 = /*BAD_CALL!*/ sub_804BF90();
                            char v59 = (unsigned char)v58;
                            char v60 = v59 ? 0: 1;
                            if(v60) {
                                int v61 = /*BAD_CALL!*/ sub_804BF90();
                                char v62 = (unsigned char)v61;
                                char v63 = v62 ? 0: 1;
                                if(v63) {
                                    int v64 = /*BAD_CALL!*/ sub_804BF90();
                                    char v65 = (unsigned char)v64;
                                    char v66 = v65 ? 0: 1;
                                    if(v66) {
                                        int v67 = /*BAD_CALL!*/ sub_804BF90();
                                        char v68 = (unsigned char)v67;
                                        char v69 = v68 ? 0: 1;
                                        if(v69) {
                                            int v37 = sub_8058BD0(v32);
                                            ++gvar_80624D4;
                                            *(int*)v16 = v37;
                                            goto loc_804EE1B;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        loc_804EC05:
            v13 = gvar_8062400;
        loc_804EC0B:
            int v70 = v32;
            if(*(char*)v70 != 47) {
                int v71 = v34;
                if(*(char*)v71) {
                    →strlen(v70);
                    →strlen(v34);
                    int v72 = v34;
                    int v73 = (int)&v30 & 0xfffffff0;
                    v70 = (int)&v30 & 0xfffffff0;
                    unsigned char v74 = *(unsigned char*)v72;
                    if(*(char*)v72 != 46) {
                        char v75 = v74 ? 0: 1;
                        v12 = v73;
                        if(!v75) {
                            goto loc_804F1EA;
                        }
                    }
                    else if(!*(char*)(v72 + 1)) {
                        v12 = v73;
                    }
                    else {
                    loc_804F1EA:
                        v12 = v73;
                        int v76 = v34;
                        do {
                            ++v76;
                            *(unsigned char*)v12 = v74;
                            v74 = *(unsigned char*)v76;
                            ++v12;
                        }
                        while(v74);
                        if((unsigned int)v76 > (unsigned int)v34 && *(char*)(v76 - 1) != 47) {
                            *(char*)v12 = 47;
                            ++v12;
                        }
                    }
                    int v77 = v32;
                    char v78 = *(char*)v77;
                    if(*(char*)v77) {
                        do {
                            ++v77;
                            *(char*)v12 = v78;
                            v78 = *(char*)v77;
                            ++v12;
                        }
                        while(v78);
                    }
                    *(char*)v12 = 0;
                }
            }
            int v79 = (int)(v16 + 8);
            char v80 = v13 < 3;
            v34 = v79;
            if(!v80) {
                if(v13 == 5) {
                    v39 = 1;
                    →__xstat64(3, v70, v79);
                    v11 = v22;
                    if(!v11) {
                        goto loc_804EC63;
                    }
                    else {
                        goto loc_804EE6D;
                    }
                }
                else if(v13 <= 4 && v30) {
                    int v81 = v34;
                    v39 = 1;
                    →__xstat64(3, v70, v81);
                    char v82 = v13 == 3;
                    v11 = v22;
                    if(v82) {
                        goto loc_804EC5D;
                    }
                    else {
                        if(v22 >= 0) {
                            unsigned int v83 = v16;
                            v10 = (unsigned int)(*(int*)(v83 + 24) & 0xf000);
                            char v84 = v10 == 0x4000;
                            v10 = (unsigned int)(v84 ? 0: 1) | ((unsigned int)((v10 >>> 8) & 0xFFFFFF) << 8);
                        }
                        else {
                            *(int*)&v19 = v22;
                            →__errno_location();
                            v11 = *(int*)&v19;
                            v10 = (unsigned int)(*(int*)v22 != 2 ? 0: 1) | ((unsigned int)((v10 >>> 8) & 0xFFFFFF) << 8);
                        }
                        char v85 = (unsigned char)v10 ? 0: 1;
                        v39 = 1;
                        if(v85) {
                            goto loc_804EC5D;
                        }
                    }
                }
            }
            int v86 = v34;
            v39 = 0;
            →__lxstat64(3, v70, v86);
            v11 = v22;
        loc_804EC5D:
            if(!v11) {
            loc_804EC63:
                unsigned int v87 = v16;
                char v88 = v28 == 5;
                *(char*)(v87 + 116) = 1;
                if(v88 || (unsigned int)(*(int*)(v87 + 24) & 0xf000) == 0x8000) {
                    if(gvar_806235C) {
                        *(int*)&v19 = 0;
                        int v89 = /*BAD_CALL!*/ sub_804BF90();
                        char v90 = (unsigned char)v89;
                        v11 = *(int*)&v19;
                        if(v90) {
                            *(char*)(v16 + 124) = 0;
                        }
                    }
                loc_804EC94:
                    if(!gvar_8062360 || gvar_8062450) {
                        unsigned int v91 = v16;
                        unsigned int v92 = v39;
                        unsigned char* ptr2 = (unsigned char*)v70;
                        *(int*)&v19 = v11;
                        unsigned int* ptr3 = (unsigned int*)(v91 + 112);
                        char v93 = (unsigned char)v92 ? 0: 1;
                        unsigned int* ptr4 = ptr3;
                        if(!v93) {
                            ptr1 = sub_8059550(ptr2, ptr4);
                            ptr0 = *(int**)&v19;
                        }
                        else {
                            ptr1 = sub_80595E0(ptr2, ptr4);
                            ptr0 = *(int**)&v19;
                        }
                        char v94 = ptr1 ? 0: 1;
                        if((int)ptr1 >= 0) {
                            v9 = v16;
                            v8 = 10;
                            unsigned char* ptr5 = "unlabeled";
                            v39 = *(unsigned int*)(v9 + 112);
                            while(v8 != 0) {
                                v94 = *ptr5 == *(char*)v39;
                                ++ptr5;
                                ++v39;
                                --v8;
                                if(!v94) {
                                    v8 = (unsigned int)(v94 ? 0: 1) | ((unsigned int)((v8 >>> 8) & 0xFFFFFF) << 8);
                                    goto loc_804F02B;
                                }
                            }
                            v8 = (unsigned int)(v94 ? 0: 1) | ((unsigned int)((v8 >>> 8) & 0xFFFFFF) << 8);
                            goto loc_804F02B;
                        }
                        else {
                            *(int*)(v16 + 112) = &gvar_80622B4;
                            *(int**)&v19 = ptr0;
                            →__errno_location();
                            ptr0 = *(int**)&v19;
                            v9 = *(unsigned int*)v22;
                            if(v9 != 61 && v9 != 95) {
                                *(int*)(v16 + 120) = 0;
                                goto loc_804F339;
                            }
                            else {
                                v8 = 0;
                            loc_804F02B:
                                unsigned int v95 = gvar_8062360;
                                unsigned int* ptr6 = NULL;
                                if(!v95) {
                                    int v96 = v34;
                                    v19 = (unsigned char)v8;
                                    ptr6 = sub_8051AA0(v70, v96);
                                    v8 = (unsigned int)v19;
                                    ptr0 = (int*)((int)ptr6 >>> 31);
                                    ptr6 = (unsigned int)((int)ptr6 <= 0 ? 0: 1) | ((unsigned int)(int*)((int)(int*)((int)ptr6 >>> 8) & 0xFFFFFF) << 8);
                                }
                                if((unsigned char)v8) {
                                    char v97 = (unsigned char)ptr6 ? 0: 1;
                                    v7 = 1;
                                    v6 = 1;
                                    if(!v97) {
                                        goto loc_804F078;
                                    }
                                }
                                else if((unsigned char)ptr6) {
                                loc_804F078:
                                    v7 = 1;
                                    v6 = 2;
                                }
                                else {
                                    v7 = 0;
                                    v6 = 0;
                                }
                                unsigned int v98 = v16;
                                gvar_8062CB8 = (unsigned char)((unsigned char)v7 | gvar_8062CB8);
                                v5 = ptr0 ? 0: 1;
                                *(int*)(v98 + 120) = v6;
                            }
                            if(!v5) {
                            loc_804F339:
                                int v99 = sub_8056980(v70);
                                →__errno_location();
                                *(int*)&v17 = v99;
                                v4 = 134586815;
                                →error(0, *(int*)v22, 134586815);
                            }
                        }
                    }
                    unsigned int v100 = v16;
                    int v101 = *(int*)(v100 + 24);
                    unsigned int v102 = (unsigned int)(*(int*)(v100 + 24) & 0xf000);
                    if(v102 == 0xa000) {
                        if(gvar_8062360 && !gvar_8062364) {
                            goto loc_804F4D9;
                        }
                        else {
                            unsigned int v103 = v16;
                            void* ptr7 = sub_8051B00(v70, *(unsigned int*)(v103 + 52));
                            unsigned int v104 = v16;
                            char v105 = ptr7 ? 0: 1;
                            int v106 = (int)ptr7;
                            *(void**)(v104 + 4) = ptr7;
                            if(v105) {
                                v3 = 0;
                                →dcgettext(0, "cannot read symbolic link %s", 5);
                                sub_804D570(v70, v22);
                                unsigned int v107 = v16;
                                v106 = *(int*)(v107 + 4);
                                if(v106) {
                                    goto loc_804F573;
                                }
                            }
                            else {
                            loc_804F573:
                                if(*(char*)v106 != 47) {
                                    →strrchr(v70, 47);
                                    if(!v22) {
                                        goto loc_804F76B;
                                    }
                                    else {
                                        int v108 = v22 - v70;
                                        v28 = v108 + 1;
                                        →strlen(v106);
                                        void* ptr8 = sub_8058A70((size_t)(v22 + v108 + 2));
                                        int v109 = v28;
                                        v3 = (int)ptr8;
                                        →strncpy((int)ptr8, v70, v109);
                                        →strcpy(v3 + v28, v106);
                                    }
                                }
                                else {
                                loc_804F76B:
                                    v3 = sub_8058BD0(v106);
                                }
                                if(v3 && (gvar_8062408 > 1 || gvar_8062364)) {
                                    →__xstat64(3, v3, &v20);
                                    if(!v22) {
                                        unsigned int v110 = v16;
                                        char v111 = v30 ? 0: 1;
                                        *(char*)(v110 + 117) = 1;
                                        int v112 = v21;
                                        if(v111 || !gvar_8062360 || (unsigned int)(v112 & 0xf000) != 0x4000) {
                                            *(int*)(v16 + 108) = v112;
                                        }
                                    }
                                }
                            }
                            →free((void*)v3);
                            unsigned int v113 = v16;
                            v101 = *(int*)(v113 + 24);
                            v102 = (unsigned int)(v101 & 0xf000);
                        }
                        if(v102 != 0xa000) {
                            goto loc_804ECC7;
                        }
                        else {
                            if(!gvar_8062364) {
                            loc_804F4D9:
                                *(char*)(v16 + 117) = 1;
                                v102 = (unsigned int)(v101 & 0xf000);
                                if(v102 != 0xa000) {
                                    goto loc_804ECC7;
                                }
                            }
                            *(int*)(v16 + 104) = 6;
                        }
                    }
                    else {
                    loc_804ECC7:
                        if(v102 != 0x4000) {
                            *(int*)(v16 + 104) = 5;
                        }
                        else if(v30 && !gvar_8062404) {
                            *(int*)(v16 + 104) = 9;
                        }
                        else {
                            *(int*)(v16 + 104) = 3;
                        }
                    }
                    v14 = *(unsigned int*)(v16 + 64);
                    v39 = *(unsigned int*)(v16 + 68);
                    if((gvar_8062360 ? 0: 1) || gvar_8062451) {
                        unsigned int v114 = gvar_8062500;
                        unsigned int v115 = gvar_8062504;
                        *(unsigned int*)&v17 = gvar_80624FC;
                        int v116 = sub_8053850(v14, v39, &v18, v17, 0x200, 0, v114, v115);
                        int v117 = sub_8055350(v116, 0);
                        if((int)gvar_8062CC0 < v117) {
                            gvar_8062CC0 = v117;
                        }
                        if(!gvar_8062360) {
                            if(gvar_80622A8) {
                                int v118 = sub_804D660();
                                if((int)gvar_8062CC8 < v118) {
                                    gvar_8062CC8 = v118;
                                }
                            }
                            if(gvar_80622A9) {
                                int v119 = *(int*)(v16 + 36);
                                if(!gvar_80624ED) {
                                    int* ptr9 = sub_80549F0(v119);
                                    if(!ptr9) {
                                        goto loc_804ED92;
                                    }
                                    else {
                                        int v120 = sub_8055350((int)ptr9, 0);
                                        v2 = v120 >= 0 ? v120: 0;
                                    }
                                }
                                else {
                                loc_804ED92:
                                    v2 = sub_804D600();
                                }
                                if((int)gvar_8062CCC < v2) {
                                    gvar_8062CCC = v2;
                                }
                            }
                            if(gvar_8062510) {
                                int v121 = sub_804D660();
                                if((int)gvar_8062CD0 < v121) {
                                    gvar_8062CD0 = v121;
                                }
                            }
                        }
                    }
                    if(gvar_8062450) {
                        →strlen(*(int*)(v16 + 112));
                        if((int)gvar_8062CD4 < v22) {
                            goto loc_804F240;
                        }
                        else {
                            goto loc_804EDDF;
                        }
                    }
                    else {
                    loc_804EDDF:
                        if(gvar_8062360) {
                            v1 = gvar_80624EE;
                            goto loc_804EDEE;
                        loc_804F240:
                            gvar_8062CD4 = v22;
                            if(gvar_8062360) {
                                v1 = gvar_80624EE;
                                goto loc_804EDEE;
                            }
                        }
                        v4 = &v23;
                        char* ptr10 = sub_8054C60(*(unsigned int*)(v16 + 28), 0, &v23);
                        →strlen((int)ptr10);
                        if((int)gvar_8062CC4 < v22) {
                            gvar_8062CC4 = v22;
                        }
                        unsigned int v122 = (unsigned int)(*(int*)(v16 + 24) & 0xf000);
                        if(v122 == 0x6000 || v122 == 0x2000) {
                            int v123 = *(int*)(v16 + 44);
                            char* ptr11 = sub_8054C60((unsigned int)(((unsigned int)((unsigned long long)((*(int*)(v16 + 40) >>> 8) & 0xFFFFFF) | ((unsigned long long)v123 << 24) | ((unsigned long long)0 << 56)) & 0xfff) | (v123 & 0xfffff000)), 0, &v18);
                            →strlen((int)ptr11);
                            if((int)gvar_8062CD8 < v22) {
                                gvar_8062CD8 = v22;
                            }
                            int v124 = *(int*)(v16 + 40);
                            char* ptr12 = sub_8054C60((unsigned int)(((unsigned int)((unsigned long long)((v124 >>> 12) & 0xFFFFF) | ((unsigned long long)*(int*)(v16 + 44) << 20) | ((unsigned long long)0 << 52)) & 0xffffff00) | (unsigned int)(unsigned char)v124), 0, &v18);
                            →strlen((int)ptr12);
                            int v125 = v22;
                            int v126 = gvar_8062CDC;
                            if(v126 < v125) {
                                gvar_8062CDC = v125;
                                v126 = v125;
                            }
                            unsigned int v127 = (unsigned int)(gvar_8062CD8 + v126 + 2);
                            if((int)gvar_8062CE0 < (int)v127) {
                                gvar_8062CE0 = v127;
                                v1 = gvar_80624EE;
                            }
                            else {
                                v1 = gvar_80624EE;
                            }
                            goto loc_804EDEE;
                        }
                        else {
                            unsigned int v128 = gvar_80622A0;
                            unsigned int v129 = gvar_80622A4;
                            int v130 = 1;
                            unsigned int v131 = v128;
                            unsigned int v132 = gvar_80624FC;
                            int v133 = 0;
                            unsigned int v134 = v129;
                            *(unsigned int*)&v17 = v132;
                            v4 = &v18;
                            int v135 = sub_8053850(*(unsigned int*)(v16 + 52), *(unsigned int*)(v16 + 56), &v18, v17, 1, 0, v128, v129);
                            v0 = sub_8055350(v135, 0);
                        }
                        if((int)gvar_8062CE0 < v0) {
                            gvar_8062CE0 = v0;
                        }
                        v1 = gvar_80624EE;
                    }
                    goto loc_804EDEE;
                }
                else {
                    goto loc_804EC94;
                }
            }
            else {
            loc_804EE6D:
                v14 = 0;
                →dcgettext(0, "cannot access %s", 5);
                sub_804D570(v70, v22);
            }
            if(v30) {
            loc_804EE1B:
                unsigned int result = v14;
                if(!(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v31)) {
                    return result;
                }
                /*NO_RETURN*/ →__stack_chk_fail();
            }
            int v37 = sub_8058BD0(v32);
            ++gvar_80624D4;
            *(int*)v16 = v37;
            goto loc_804EE1B;
        }
    }
loc_804EDEE:
    if(v1) {
        v4 = &v18;
        char* ptr13 = sub_8054C60(*(unsigned int*)(v16 + 96), *(unsigned int*)(v16 + 100), &v18);
        →strlen((int)ptr13);
        if((int)gvar_8062CBC < v22) {
            gvar_8062CBC = v22;
        }
    }
    int v37 = sub_8058BD0(v32);
    ++gvar_80624D4;
    *(int*)v16 = v37;
    goto loc_804EE1B;
}

int sub_804F7E0() {
    int v0;
    int result;
    unsigned int* ptr0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int v8;
    unsigned int v9;
    int v10;
    void* ptr1;
    unsigned int v11;
    unsigned char v12;
    unsigned int v13 = v11;
    int* ptr2 = &v13;
    char v14 = &v8 == 76;
    char v15 = (int)&v10 < 0;
    char v16 = __parity__((unsigned char)&v8 - 76);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x3c) ^ (int)&v10) >>> 4) & 1);
    char v18 = (unsigned int)&v13 < 60;
    char v19 = (int)(int*)((int)(int*)((int)&v13 ^ (int)&v10) & (int)(int*)((int)&v13 ^ 0x3c)) < 0;
    int v20 = gvar_80624D4;
    unsigned char v21 = v12;
    int v22 = gvar_8062514;
    int v23 = v20;
    char v24 = v22 == v20;
    char v25 = v22 < v20;
    char v26 = __parity__((unsigned char)v22 - (unsigned char)v20);
    char v27 = (unsigned int)v22 < (unsigned int)v20;
    char v28 = (int)(int*)((int)(int*)((int)(int*)(v22 - v20) ^ v22) & (int)(int*)(v22 ^ v20)) < 0;
    char v29 = (int*)((int)(int*)((int)(int*)((int)(int*)(v22 - v20) ^ (int)(int*)(v22 ^ v20)) >>> 4) & 1);
    int v30 = v27 || v24 ? v22: v23;
    char v31 = gvar_8062DA0 == v30;
    char v32 = (int)gvar_8062DA0 > v30;
    char v33 = __parity__((unsigned char)v30 - (unsigned char)gvar_8062DA0);
    char v34 = gvar_8062DA0 > (unsigned int)v30;
    char v35 = (int)(int*)((int)(int*)((int)(int*)(v30 - gvar_8062DA0) ^ v30) & (int)(int*)(gvar_8062DA0 ^ v30)) < 0;
    char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)(v30 - gvar_8062DA0) ^ (int)(int*)(gvar_8062DA0 ^ v30)) >>> 4) & 1);
    int v37 = v30;
    if(!v34 && !v31) {
        int v38 = v22;
        int v39 = v22;
        int* ptr3 = (int*)(v38 >>> 1);
        char v40 = v39 & 1;
        char v41 = v39 < 0;
        char v42 = ptr3 ? 0: 1;
        char v43 = (int)ptr3 < 0;
        char v44 = __parity__((unsigned char)ptr3);
        char v45 = ptr3 == v37;
        char v46 = (int)ptr3 > v37;
        char v47 = __parity__((unsigned char)v37 - (unsigned char)ptr3);
        char v48 = (unsigned int)ptr3 > (unsigned int)v37;
        char v49 = (int)(int*)((int)(int*)((int)(int*)(v37 - (int)ptr3) ^ v37) & (int)(int*)((int)ptr3 ^ v37)) < 0;
        char v50 = (int*)((int)(int*)((int)(int*)((int)(int*)(v37 - (int)ptr3) ^ (int)(int*)((int)ptr3 ^ v37)) >>> 4) & 1);
        if(!v48) {
            v7 = v22 == 0x15555555;
            v6 = v22 < 0x15555555;
            v5 = __parity__((unsigned char)v22 - 85);
            v4 = (unsigned int)v22 < 0x15555555;
            v3 = (int)(int*)((int)(int*)((int)(int*)(v22 - 0x15555555) ^ v22) & (int)(int*)(v22 ^ 0x15555555)) < 0;
            v2 = (int*)((int)(int*)((int)(int*)((int)(int*)(v22 - 0x15555555) ^ (int)(int*)(v22 ^ 0x15555555)) >>> 4) & 1);
            int v51 = gvar_8062D9C;
            if(!v4 && !v7) {
                goto loc_804FA6D;
            }
            else {
                int v52 = v22 * 3;
                v39 = v22 * 3;
                int v53 = v52 * 4;
                char v54 = (v39 >>> 30) & 1;
                char v55 = v3;
                char v56 = v53 ? 0: 1;
                char v57 = v53 < 0;
                char v58 = __parity__((unsigned char)v53);
                int v59 = sub_8058AA0(v51, v53);
                v11 = gvar_8062514;
                gvar_8062D9C = v59;
                goto loc_804F849;
            }
        }
        else {
            v7 = v37 == 0xaaaaaaa;
            v6 = v37 < 0xaaaaaaa;
            v5 = __parity__((unsigned char)v37 - 0xaa);
            v4 = (unsigned int)v37 < 0xaaaaaaa;
            v3 = (((v37 - 0xaaaaaaa) ^ v37) & (v37 ^ 0xaaaaaaa)) < 0;
            v2 = (((v37 - 0xaaaaaaa) ^ (v37 ^ 0xaaaaaaa)) >>> 4) & 1;
            v1 = gvar_8062D9C;
        }
        if((v4 || v7)) {
            int v60 = v37;
            int v61 = v37;
            v11 = (unsigned int)(v60 * 2);
            int v62 = v61;
            int v63 = v61 + v11;
            char v64 = v63 ? 0: 1;
            char v65 = v63 < 0;
            char v66 = __parity__((unsigned char)v63);
            char v67 = (int*)((int)(int*)((int)(int*)((v11 ^ v62) ^ v63) >>> 4) & 1);
            char v68 = __carry__(v11, v62);
            char v69 = (int)(int*)((int)(int*)(v63 ^ v62) & ~(v11 ^ v62)) < 0;
            v39 = v63;
            int v70 = v63 * 8;
            char v71 = (v39 >>> 29) & 1;
            char v72 = v69;
            char v73 = v70 ? 0: 1;
            char v74 = v70 < 0;
            char v75 = __parity__((unsigned char)v70);
            int v76 = sub_8058AA0(v1, v70);
            gvar_8062D9C = v76;
        loc_804F849:
            unsigned int v77 = gvar_8062DA0;
            unsigned int v78 = v77 + v11 + 1;
            v7 = v78 == v11;
            v6 = (int)v78 > (int)v11;
            v5 = __parity__((unsigned char)v11 - (unsigned char)v78);
            v4 = v78 > v11;
            v3 = (int)(((v11 - v78) ^ v11) & (v78 ^ v11)) < 0;
            v2 = (((v11 - v78) ^ (v78 ^ v11)) >>> 4) & 1;
            if((v4 || v7)) {
                unsigned int v79 = v11;
                unsigned int v80 = v78;
                unsigned int v81 = v79 - v77;
                int v82 = 0;
                unsigned int v83 = v80;
                int v84 = (int)(v80 * v81);
                char v85 = (long long)v81 * (long long)v83 != (long long)v84;
                char v86 = (long long)v81 * (long long)v83 != (long long)v84;
                int v87 = v84;
                v39 = (unsigned int)v87 % v81;
                int* ptr4 = (int*)((unsigned int)v87 / v81);
                int v88 = v39;
                v7 = ptr4 == v78;
                v6 = (int)ptr4 > (int)v78;
                v5 = __parity__((unsigned char)v78 - (unsigned char)ptr4);
                v4 = (unsigned int)ptr4 > v78;
                v3 = (int)(int*)((int)(int*)((int)(int*)(v78 - (int)ptr4) ^ v78) & (int)(int*)((int)ptr4 ^ v78)) < 0;
                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)(v78 - (int)ptr4) ^ (int)(int*)((int)ptr4 ^ v78)) >>> 4) & 1);
                if(v7) {
                    v39 = v84;
                    v84 >>>= 1;
                    char v89 = v39 & 1;
                    char v90 = v39 < 0;
                    char v91 = v84 ? 0: 1;
                    char v92 = v84 < 0;
                    char v93 = __parity__((unsigned char)v84);
                    v7 = v84 == 0x3fffffff;
                    v6 = v84 < 0x3fffffff;
                    v5 = __parity__((unsigned char)v84 - 0xff);
                    v4 = (unsigned int)v84 < 0x3fffffff;
                    v3 = (int)(int*)((int)(int*)((int)(int*)(v84 - 0x3fffffff) ^ v84) & (int)(int*)(v84 ^ 0x3fffffff)) < 0;
                    v2 = (int*)((int)(int*)((int)(int*)((int)(int*)(v84 - 0x3fffffff) ^ (int)(int*)(v84 ^ 0x3fffffff)) >>> 4) & 1);
                    if((v4 || v7)) {
                        void* ptr5 = sub_8058A70((size_t)(v84 * 4));
                        unsigned int v94 = gvar_8062DA0;
                        if(v11 > v94) {
                            unsigned int v95 = v94 + 1;
                            ptr0 = (unsigned int*)(v94 * 12 + gvar_8062D9C + 8);
                            v30 = (int)(v95 * 4);
                            while(1) {
                                *ptr0 = ptr5;
                                ptr5 = (void*)((int)ptr5 + v30);
                                ptr0 += 3;
                                v30 += 4;
                                if(v11 <= v95) {
                                    break;
                                }
                                else {
                                    ++v95;
                                }
                            }
                        }
                        v20 = gvar_80624D4;
                        gvar_8062DA0 = v11;
                        goto loc_804F8D3;
                    }
                }
            }
        }
    loc_804FA6D:
        int* ptr6 = &ptr1;
        result = /*NO_RETURN*/ sub_8058C00();
    }
loc_804F8D3:
    if(v37) {
        v0 = v20;
        char* ptr7 = gvar_8062D9C;
        int v96 = v37;
        v30 = 0;
        int v97 = 3;
        while(1) {
            ptr0 = *(unsigned int*)(ptr7 + 8);
            int v98 = v30 + 1;
            int v99 = 0;
            *ptr7 = 1;
            *(int*)(ptr7 + 4) = v97;
            do {
                *(int*)(v99 * 4 + (int)ptr0) = 3;
                ++v99;
            }
            while((unsigned int)v99 <= (unsigned int)v30);
            ptr7 += 12;
            v97 += 3;
            if(v96 == v98) {
                break;
            }
            else {
                v30 = v98;
            }
        }
        v20 = v0;
    }
    if(v20) {
        v0 = 0;
        do {
            int* ptr8 = sub_804D3F0();
            v9 = gvar_80624D4;
            int* ptr9 = ptr8;
            if(v37) {
                ptr0 = (unsigned int*)0x1;
                unsigned char* ptr10 = gvar_8062D9C;
                unsigned int v100 = v9;
                unsigned int v101 = gvar_8062508;
                while(1) {
                    int* ptr11 = (int*)((char*)ptr0 - 1);
                    if(*ptr10) {
                        int* ptr12 = !v21 ? (int*)((unsigned int)v0 % (int)(unsigned int)ptr0): (int*)((unsigned int)v0 / (int)(unsigned int)(int*)(v100 / (int)(unsigned int)ptr0));
                        int* ptr13 = ptr11 != ptr12 ? (int*)((char*)ptr9 + 2): ptr9;
                        unsigned int* ptr14 = (unsigned int*)((int)(int*)((int)ptr12 * 4) + *(int*)(ptr10 + 8));
                        v30 = *ptr14;
                        if((unsigned int)ptr13 > (unsigned int)v30) {
                            *(unsigned int*)(ptr10 + 4) = (int*)((int)(int*)((int)ptr13 - v30) + *(int*)(ptr10 + 4));
                            unsigned int v102 = v101;
                            *ptr14 = ptr13;
                            *ptr10 = *(unsigned int*)(ptr10 + 4) >= v102 ? 0: 1;
                        }
                    }
                    ptr10 += 12;
                    ++v100;
                    unsigned int* ptr15 = (unsigned int*)((char*)ptr0 + 1);
                    if((unsigned int)(v37 + 1) <= (unsigned int)ptr15) {
                        break;
                    }
                    else {
                        ptr0 = ptr15;
                    }
                }
            }
            ++v0;
        }
        while((unsigned int)v0 < v9);
    }
    result = v37;
    if((unsigned int)result > 1) {
        v30 = gvar_8062D9C;
        if(!*(char*)((int)(int*)((int)(unsigned int*)(result * 3 - 3) * 4) + v30)) {
            v30 = (int)((int*)((int)(int*)(result * 12) + v30) - 6);
            do {
                --result;
                if(result == 1) {
                    return result;
                }
                v30 -= 12;
            }
            while(*(char*)(v30 + 12));
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FA80(int param0) {
    int v0;
    int v1;
    int v2;
    char v3;
    int result = gvar_8062360;
    switch(result) {
        case 0: {
            unsigned int v4 = 0;
            if(gvar_80624D4) {
                do {
                    sub_804DF20();
                    sub_804E240();
                    result = stdout;
                    char* ptr0 = *(unsigned int*)(result + 20);
                    if(*(unsigned int*)(result + 24) > (unsigned int)ptr0) {
                        *ptr0 = 10;
                        *(int*)(result + 20) = (int)(ptr0 + 1);
                    }
                    else {
                        →__overflow(result, 10);
                    }
                    ++gvar_80624D8;
                    ++v4;
                }
                while(gvar_80624D4 > v4);
            }
            return result;
        }
        case 1: {
            unsigned int v5 = 0;
            if(gvar_80624D4) {
                do {
                    sub_804DF70(param0, 0);
                    result = stdout;
                    char* ptr1 = *(unsigned int*)(result + 20);
                    if(*(unsigned int*)(result + 24) > (unsigned int)ptr1) {
                        *ptr1 = 10;
                        *(int*)(result + 20) = (int)(ptr1 + 1);
                    }
                    else {
                        →__overflow(result, 10);
                    }
                    ++v5;
                }
                while(gvar_80624D4 > v5);
            }
            return result;
        }
        case 2: {
            int v6 = sub_804F7E0();
            unsigned int v7 = gvar_8062D9C;
            int* ptr2 = NULL;
            int v8 = (v6 * 3 - 3) * 4 + v7;
            unsigned int v9 = gvar_80624D4;
            result = (int)(v9 / (unsigned int)v6);
            int v10 = v9 % (unsigned int)v6 ? result + 1: result;
            if((v9 % (unsigned int)v6 ? result + 1: result)) {
                int* ptr3 = (int*)(v10 * 4);
                do {
                    int v11 = 0;
                    int v12 = 0;
                    int* ptr4 = ptr2;
                    int* ptr5 = (int*)((int)ptr2 * 4);
                    while(1) {
                        *(int*)&v3 = *(int*)(gvar_8062CB4 + (int)ptr5);
                        int* ptr6 = sub_804D3F0();
                        int v13 = *(int*)&v3;
                        v1 = (int)ptr6;
                        int v14 = *(int*)(*(int*)(v8 + 8) + v11);
                        v11 += 4;
                        v0 = v14;
                        sub_804DF70(v13, v12);
                        ptr4 = (int*)((int)ptr4 + v10);
                        ptr5 = (int*)((int)ptr5 + (int)ptr3);
                        if(gvar_80624D4 <= (unsigned int)ptr4) {
                            break;
                        }
                        else {
                            int v15 = v12 + v0;
                            *(int*)&v3 = v12 + v0;
                            sub_804C970(v15, (int*)v15);
                            v12 = *(int*)&v3;
                        }
                    }
                    int v16 = stdout;
                    char* ptr7 = *(unsigned int*)(v16 + 20);
                    if(*(unsigned int*)(v16 + 24) > (unsigned int)ptr7) {
                        *ptr7 = 10;
                        *(int*)(v16 + 20) = (int)(ptr7 + 1);
                    }
                    else {
                        →__overflow(v16, 10);
                    }
                    ptr2 = (int*)((char*)ptr2 + 1);
                    result = v10;
                }
                while(result != ptr2);
            }
            return result;
        }
        case 3: {
            int v17 = sub_804F7E0();
            unsigned int v18 = gvar_8062D9C;
            v1 = v17;
            int v19 = (v17 * 3 - 3) * 4 + v18;
            int* ptr8 = sub_804D3F0();
            int v20 = **(int**)(v19 + 8);
            sub_804DF70(param0, 0);
            if(gvar_80624D4 > 1) {
                unsigned int v21 = 1;
                v0 = v19;
                int v22 = 0;
                param0 = v20;
                do {
                    int v23 = v21 % (unsigned int)v1;
                    if((v21 % (unsigned int)v1)) {
                        int v24 = param0 + v22;
                        *(int*)&v3 = param0 + v22;
                        sub_804C970(v24, (int*)v24);
                        param0 = *(int*)&v3;
                        v22 = *(int*)&v3;
                    }
                    else {
                        int v25 = stdout;
                        char* ptr9 = *(unsigned int*)(v25 + 20);
                        if(*(unsigned int*)(v25 + 24) > (unsigned int)ptr9) {
                            *ptr9 = 10;
                            v22 = 0;
                            *(unsigned int*)(v25 + 20) = (int*)(ptr9 + 1);
                        }
                        else {
                            v22 = 0;
                            →__overflow(v25, 10);
                        }
                    }
                    ++v21;
                    sub_804DF70(param0, v22);
                    int* ptr10 = sub_804D3F0();
                    param0 = *(int*)(v23 * 4 + *(int*)(v0 + 8));
                }
                while(gvar_80624D4 <= v21);
            }
            goto loc_804FAA0;
        }
        case 4: {
            if(gvar_80624D4) {
                int v26 = 0;
                v1 = (int)sub_804D3F0();
                unsigned int v27 = 0;
                while(1) {
                    sub_804DF70(v2, v26);
                    ++v27;
                    if(gvar_80624D4 <= v27) {
                        break;
                    }
                    else {
                        v26 += v1;
                        int* ptr11 = sub_804D3F0();
                        v1 = (int)ptr11;
                        if(v27) {
                            int v28 = v26 + 2;
                            int* ptr12 = (int*)((int)ptr11 + v28);
                            int v29 = gvar_8062508 <= (unsigned int)ptr12 ? 10: 32;
                            int v30 = gvar_8062508 <= (unsigned int)ptr12 ? 10: 32;
                            v26 = gvar_8062508 > (unsigned int)ptr12 ? v28: 0;
                            int v31 = stdout;
                            char* ptr13 = *(unsigned int*)(v31 + 20);
                            if(*(unsigned int*)(v31 + 24) > (unsigned int)ptr13) {
                                *ptr13 = 44;
                                *(unsigned int*)(v31 + 20) = (int*)(ptr13 + 1);
                            }
                            else {
                                v3 = (unsigned char)v30;
                                →__overflow(v31, 44);
                                v30 = (unsigned int)v3;
                            }
                            int v32 = stdout;
                            char* ptr14 = *(unsigned int*)(v32 + 20);
                            if(*(unsigned int*)(v32 + 24) > (unsigned int)ptr14) {
                                *ptr14 = (unsigned char)v30;
                                v2 = (int)(ptr14 + 1);
                                *(int*)(v32 + 20) = (int)(ptr14 + 1);
                            }
                            else {
                                →__overflow(v32, (int)(unsigned char)v29);
                            }
                        }
                    }
                }
            }
        loc_804FAA0:
            result = stdout;
            char* ptr15 = *(unsigned int*)(result + 20);
            if(*(unsigned int*)(result + 24) > (unsigned int)ptr15) {
                *ptr15 = 10;
                *(int*)(result + 20) = (int)(ptr15 + 1);
            }
            else {
                →__overflow(result, 10);
            }
            return result;
        }
        default: {
            return result;
        }
    }
}

void sub_80513A0(int __status) {
    int v0;
    int v1;
    int v2 = 5;
    if(__status) {
        →dcgettext(0, "Try `%s --help\' for more information.\n", 5);
        v0 = 1;
        v2 = v1;
        →__fprintf_chk();
    loc_80513EF:
        /*NO_RETURN*/ →exit(__status);
    }
    →dcgettext(0, "Usage: %s [OPTION]... [FILE]...\n", v2);
    →__printf_chk();
    int v3 = stdout;
    →dcgettext(0, "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n\n", 5);
    →fputs_unlocked(v1, v3);
    int v4 = stdout;
    →dcgettext(0, "Mandatory arguments to long options are mandatory for short options too.\n", 5);
    →fputs_unlocked(v1, v4);
    int v5 = stdout;
    →dcgettext(0, "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n", 5);
    →fputs_unlocked(v1, v5);
    int v6 = stdout;
    →dcgettext(0, "      --block-size=SIZE      scale sizes by SIZE before printing them.  E.g.,\n                               `--block-size=M\' prints sizes in units of\n                               1,048,576 bytes.  See SIZE format below.\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime, newest first\n", 5);
    →fputs_unlocked(v1, v6);
    int v7 = stdout;
    →dcgettext(0, "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output.  WHEN defaults to `always\'\n                               or can be `never\' or `auto\'.  More info below\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs\' dired mode\n", 5);
    →fputs_unlocked(v1, v7);
    int v8 = stdout;
    →dcgettext(0, "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append `*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n", 5);
    →fputs_unlocked(v1, v8);
    int v9 = stdout;
    →dcgettext(0, "  -g                         like -l, but do not list owner\n", 5);
    →fputs_unlocked(v1, v9);
    int v10 = stdout;
    →dcgettext(0, "      --group-directories-first\n                             group directories before files.\n                               augment with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n", 5);
    →fputs_unlocked(v1, v10);
    int v11 = stdout;
    →dcgettext(0, "  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n", 5);
    →fputs_unlocked(v1, v11);
    int v12 = stdout;
    →dcgettext(0, "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n", 5);
    →fputs_unlocked(v1, v12);
    int v13 = stdout;
    →dcgettext(0, "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n", 5);
    →fputs_unlocked(v1, v13);
    int v14 = stdout;
    →dcgettext(0, "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n", 5);
    →fputs_unlocked(v1, v14);
    int v15 = stdout;
    →dcgettext(0, "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don\'t treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n", 5);
    →fputs_unlocked(v1, v15);
    int v16 = stdout;
    →dcgettext(0, "  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n", 5);
    →fputs_unlocked(v1, v16);
    int v17 = stdout;
    →dcgettext(0, "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n", 5);
    →fputs_unlocked(v1, v17);
    int v18 = stdout;
    →dcgettext(0, "  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n", 5);
    →fputs_unlocked(v1, v18);
    int v19 = stdout;
    →dcgettext(0, "      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date\'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-\', STYLE\n                             takes effect only outside the POSIX locale\n", 5);
    →fputs_unlocked(v1, v19);
    int v20 = stdout;
    →dcgettext(0, "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n", 5);
    →fputs_unlocked(v1, v20);
    int v21 = stdout;
    →dcgettext(0, "  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n", 5);
    →fputs_unlocked(v1, v21);
    int v22 = stdout;
    →dcgettext(0, "  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n", 5);
    →fputs_unlocked(v1, v22);
    int v23 = stdout;
    →dcgettext(0, "      --help     display this help and exit\n", 5);
    →fputs_unlocked(v1, v23);
    int v24 = stdout;
    →dcgettext(0, "      --version  output version information and exit\n", 5);
    →fputs_unlocked(v1, v24);
    int v25 = stdout;
    →dcgettext(0, "\nSIZE may be (or may be an integer optionally followed by) one of following:\nKB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n", 5);
    →fputs_unlocked(v1, v25);
    int v26 = stdout;
    →dcgettext(0, "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n", 5);
    →fputs_unlocked(v1, v26);
    int v27 = stdout;
    →dcgettext(0, "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n", 5);
    →fputs_unlocked(v1, v27);
    sub_80520B0(gvar_8062DBC);
    →dcgettext(0, "\nReport %s bugs to %s\n", 5);
    →__printf_chk();
    →dcgettext(0, "%s home page: <%s>\n", 5);
    unsigned char* ptr0 = "http://www.gnu.org/software/coreutils/";
    →__printf_chk();
    int v28 = stdout;
    →dcgettext(0, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5);
    →fputs_unlocked(v1, v28);
    →setlocale(5, 0);
    if(v1) {
        →strncmp(v1, &gvar_805A142, 3);
        if(v1) {
            unsigned char* ptr1 = sub_80520B0(gvar_8062DBC);
            →dcgettext(0, "Report %s translation bugs to <http://translationproject.org/team/>\n", 5);
            v0 = v1;
            →__printf_chk();
        }
    }
    unsigned char* ptr2 = sub_80520B0(gvar_8062DBC);
    →dcgettext(0, "For complete documentation, run: info coreutils \'%s invocation\'\n", 5);
    v2 = (int)ptr2;
    v0 = v1;
    →__printf_chk();
    goto loc_80513EF;
}

unsigned int* sub_8051AA0(int param0, int param1) {
    unsigned int* result = NULL;
    if((unsigned int)(*(int*)(param1 + 16) & 0xf000) != 0xa000) {
        int v0 = param0;
        →acl_extended_file_nofollow();
        if((int)result < 0) {
            →__errno_location();
            unsigned int v1 = *result;
            result = NULL;
            if(v1 != 38 && v1 != 95 && v1 != 22) {
                result = v1 != 16 ? (unsigned int*)0xFFFFFFFF: NULL;
            }
        }
    }
    return result;
}

void* sub_8051B00(int param0, unsigned int param1) {
    void* __ptr1;
    unsigned int* ptr0;
    size_t __size = param1 <= 0x400 ? (size_t)(param1 + 1): 1025;
loc_8051B23:
    while(1) {
        void* ptr1 = →malloc(__size);
        __ptr1 = ptr1;
        if(!ptr1) {
            return __ptr1;
        }
        do {
            →readlink(param0, (int)ptr1, (int)__size);
            if((int)ptr0 < 0) {
                →__errno_location();
                unsigned int v0 = *ptr0;
                if(v0 != 34) {
                    void* __ptr = __ptr1;
                    __ptr1 = NULL;
                    unsigned int* ptr2 = ptr0;
                    unsigned int v1 = v0;
                    →free(__ptr);
                    *ptr2 = v1;
                    return __ptr1;
                }
            }
            if((unsigned int)ptr0 >= __size) {
                →free(__ptr1);
                if(__size <= 0x3fffffff) {
                    __size *= 2;
                    ptr1 = →malloc(__size);
                    __ptr1 = ptr1;
                }
                else if(__size <= 0x7ffffffe) {
                    __size = 0x7fffffff;
                    continue loc_8051B23;
                }
                else {
                    →__errno_location();
                    *ptr0 = 12;
                    return NULL;
                }
            }
            else {
                *(char*)((int)ptr0 + (int)__ptr1) = 0;
                return __ptr1;
            }
        }
        while(ptr1);
    }
    return __ptr1;
}

unsigned int sub_8051C00(int param0, int* param1, int param2, int param3) {
    int v0;
    →strlen(param0);
    unsigned int v1 = 0xffffffff;
    int v2 = *param1;
    int v3 = v0;
    if(v2) {
        int v4 = param2;
        unsigned int result = 0;
        unsigned char v5 = 0;
    loc_8051C9D:
        do {
            →strncmp(v2, param0, v0);
            if(!v0) {
                →strlen(v2);
                return result;
            }
            ++result;
            v4 += param3;
            v2 = *(int*)(result * 4 + (int)param1);
            if(v2) {
                goto loc_8051C9D;
            }
        }
        while(v2);
    }
    return 0xffffffff;
}

int sub_8051D10(int param0, int param1, unsigned int param2) {
    int v0;
    int result;
    if(param2 != -1) {
        →dcgettext(0, "ambiguous argument %s for %s", 5);
        v0 = result;
    }
    else {
        →dcgettext(0, "invalid argument %s for %s", 5);
        v0 = result;
    }
    int v1 = sub_8055690(1, param0);
    int v2 = sub_80567D0(0, 6, param1);
    →error(0, 0, v0);
    return result;
}

int sub_8051DB0(int param0, int param1, int param2) {
    int result;
    int v0 = param1;
    int v1 = param0;
    →dcgettext(0, "Valid arguments are:", 5);
    int v2 = 1;
    int v3 = result;
    unsigned int v4 = stderr;
    →__fprintf_chk();
    if(*(int*)param0) {
        int v5 = 0;
    loc_8051E18:
        while(1) {
            unsigned int v6 = stderr;
            ++v5;
            v3 = "\n  - `%s\'";
            v2 = 1;
            v4 = v6;
            →__fprintf_chk();
            int v7 = v0;
            v0 += param2;
            if(!*(int*)(v5 * 4 + param0)) {
                break;
            }
            else {
                do {
                    if(!v5) {
                        continue loc_8051E18;
                    }
                    else {
                        →memcmp(v7, v0, param2);
                        if(result) {
                            continue loc_8051E18;
                        }
                        else {
                            unsigned int v8 = stderr;
                            ++v5;
                            v0 += param2;
                            v3 = ", `%s\'";
                            v2 = 1;
                            v4 = v8;
                            →__fprintf_chk();
                        }
                    }
                }
                while(*(int*)(v5 * 4 + param0));
            }
        }
    }
    result = stderr;
    char* ptr0 = *(unsigned int*)(result + 20);
    if(*(unsigned int*)(result + 24) > (unsigned int)ptr0) {
        *ptr0 = 10;
        *(unsigned int*)(result + 20) = (int*)(ptr0 + 1);
    }
    else {
        →__overflow(result, 10);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_8051EE0(int param0, int param1, int* param2, int param3, int param4) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v3;
    unsigned int result = sub_8051C00(param1, param2, param3, param4);
    if(result >= 0x80000000) {
        sub_8051D10(param0, param1, (int)result);
        sub_8051DB0((int)param2, param3, param4);
        param4(v0, v1, v2);
        result = 0xffffffff;
    }
    return result;
}

int sub_8051F60(int param0, int* param1, int param2, int param3) {
    int v0;
    int* ptr0 = param1;
    int result = *ptr0;
    if(result) {
        int v1 = param2;
        do {
            →memcmp(param0, v1, param3);
            if(!v0) {
                return result;
            }
            result = *(ptr0 + 1);
            v1 += param3;
            ++ptr0;
        }
        while(!result);
    }
    return result;
}

unsigned char* sub_80520B0(unsigned char* param0) {
    unsigned char* result = param0;
    unsigned char i;
    for(i = *result; *result == 47; i = *result) {
        ++result;
    }
    if(i) {
        unsigned char* ptr0 = result;
        int v0 = 0;
    loc_80520ED:
        do {
            if(i == 47) {
                ++ptr0;
                v0 = 1;
                i = *ptr0;
                if(*ptr0) {
                    goto loc_80520ED;
                }
            }
            else {
                if((unsigned char)v0) {
                    result = ptr0;
                    v0 = 0;
                }
                ++ptr0;
                i = *ptr0;
            }
            return result;
        }
        while(!*ptr0);
    }
    return result;
}

unsigned int sub_8052100(int param0) {
    unsigned int result;
    →strlen(param0);
    if(result > 1) {
        while(*(char*)(result + param0 - 1) == 47) {
            --result;
            if(result == 1) {
                return result;
            }
        }
    }
    return result;
}

int sub_8052140(int param0, char* param1) {
    int v0 = param0;
    int v1 = 45;
    char* ptr0 = param1;
    if((unsigned int)(v0 & 0xf000) != 0x8000) {
        v1 = 100;
        if((unsigned int)(v0 & 0xf000) != 0x4000) {
            v1 = 98;
            if((unsigned int)(v0 & 0xf000) != 0x6000) {
                v1 = 99;
                if((unsigned int)(v0 & 0xf000) != 0x2000) {
                    v1 = 108;
                    if((unsigned int)(v0 & 0xf000) != 0xa000) {
                        v1 = 112;
                        if((unsigned int)(v0 & 0xf000) != 0x1000) {
                            v1 = (unsigned int)(v0 & 0xf000) != 0xc000 ? 63: 115;
                        }
                    }
                }
            }
        }
    }
    *ptr0 = (unsigned char)v1;
    *(ptr0 + 1) = (unsigned int)(v0 & 0x100) < 1 ? 45: 114;
    *(ptr0 + 2) = (unsigned int)(v0 & 0x80) < 1 ? 45: 119;
    int v2 = ((unsigned char)(v0 >>> 8) & 0x8) ? (unsigned int)(v0 & 0x40) < 1 ? 83: 115: (unsigned int)(v0 & 0x40) < 1 ? 45: 120;
    *(ptr0 + 3) = (unsigned char)v2;
    *(ptr0 + 4) = (unsigned int)(v0 & 0x20) < 1 ? 45: 114;
    *(ptr0 + 5) = (unsigned int)(v0 & 0x10) < 1 ? 45: 119;
    int v3 = ((unsigned char)(v0 >>> 8) & 0x4) ? (unsigned int)(v0 & 0x8) < 1 ? 83: 115: (unsigned int)(v0 & 0x8) < 1 ? 45: 120;
    *(ptr0 + 6) = (unsigned char)v3;
    *(ptr0 + 7) = (unsigned int)(v0 & 0x4) < 1 ? 45: 114;
    *(ptr0 + 8) = (unsigned int)(v0 & 0x2) < 1 ? 45: 119;
    if(((unsigned char)(v0 >>> 8) & 0x2)) {
        *(ptr0 + 9) = (unsigned int)(v0 & 1) < 1 ? 84: 116;
        *(ptr0 + 10) = 32;
        *(ptr0 + 11) = 0;
        return (unsigned int)(v0 & 1) < 1 ? 84: 116;
    }
    *(ptr0 + 9) = (unsigned int)(v0 & 1) < 1 ? 45: 120;
    *(ptr0 + 10) = 32;
    *(ptr0 + 11) = 0;
    return (unsigned int)(v0 & 1) < 1 ? 45: 120;
}

int sub_80522D0(int param0, char* param1) {
    return sub_8052140(*(int*)(param0 + 16), param1);
}

void* sub_80522E0(unsigned char* param0, int param1, int* param2) {
    void* ptr0;
    int* ptr1 = param2;
    int v0 = param1;
    unsigned char* ptr2 = param0;
    void* result = sub_8052310(ptr2, v0, ptr1);
    char v1 = result ? 0: 1;
    if(!v1) {
        return result;
    }
    int* ptr3 = &ptr0;
    result = (void*)/*NO_RETURN*/ sub_8058C00();
}

void* sub_8052310(unsigned char* param0, int param1, int* param2) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = param1;
    int v4 = 0;
    unsigned char* ptr0 = sub_80520B0(param0);
    unsigned int v5 = sub_8052100((int)ptr0);
    int v6 = (int)(int*)((int)ptr0 - (int)param0) + v5;
    if(v5) {
        v4 = ptr0[v5 - 1] == 47 ? 0: 1;
    }
    int v7 = v3;
    if(*(char*)v3 == 47) {
        ++v7;
        while(*(char*)v7 == 47) {
            ++v7;
            if(*(char*)v7 != 47) {
                break;
            }
            else {
                ++v7;
            }
        }
    }
    →strlen(v7);
    int v8 = v1;
    void* result = →malloc((size_t)(v4 + v6 + (v8 + 1)));
    if(result) {
        →mempcpy((int)result, (int)param0, v6);
        int v9 = v1 + v4;
        *(char*)v1 = 47;
        if(param2) {
            *param2 = v9 - (*(char*)v3 != 47 ? 0: 1);
        }
        →mempcpy(v9, v7, v8);
        *(char*)v1 = 0;
    }
    return result;
}

char* sub_8052420() {
    int v0;
    unsigned int* ptr0;
    char* result = NULL;
    unsigned char* ptr1 = *ptr0;
    unsigned char v1 = *ptr1;
    if(*ptr1) {
        v0 = 0;
    loc_8052466:
        if(v1 == 46) {
            v0 = 1;
            result = result ? result: ptr1;
            goto loc_8052453;
        }
        else if((unsigned int)((int)v1 - 48) <= 9) {
            goto loc_8052453;
        }
        else if((unsigned int)(((int)v1 & 0xffffffdf) - 65) > 25) {
            result = v1 == 126 ? result: NULL;
            goto loc_8052453;
        }
        else {
            ++ptr1;
            *ptr0 = ptr1;
            v1 = *ptr1;
            if(*ptr1) {
                goto loc_8052461;
            }
        }
    }
    return result;
loc_8052453:
    ++ptr1;
    *ptr0 = ptr1;
    v1 = *ptr1;
    if(!*ptr1) {
        return result;
    }
loc_8052461:
    if(!(unsigned char)v0) {
        goto loc_8052466;
    }
    else {
        v0 = 0;
        if((unsigned int)(((int)v1 & 0xffffffdf) - 65) > 25) {
            result = v1 == 126 ? result: NULL;
        }
        goto loc_8052453;
    }
}

char* sub_80524B0(int param0, int param1) {
    char* result;
    unsigned char v0;
    unsigned char v1;
    int v2;
    int v3;
    unsigned char v4;
    char* ptr0;
    unsigned char v5;
    int v6 = param0;
    int v7 = param1;
    →strcmp(v6, v7);
    char v8 = ptr0 ? 0: 1;
    char* result1 = ptr0;
    if(!v8) {
        unsigned char v9 = *(unsigned char*)v6;
        if(*(char*)v6) {
            unsigned int v10 = (unsigned int)*(char*)v7;
            if(*(char*)v7) {
                int v11 = 46 - (int)v9;
                char v12 = v11 ? 0: 1;
                if(v12 && !*(char*)(v6 + 1)) {
                    return (char*)0xFFFFFFFF;
                }
                int v13 = 46 - (int)(unsigned char)v10;
                char v14 = v13 ? 0: 1;
                if(v14 && !*(char*)(v7 + 1)) {
                    goto loc_805250D;
                }
                else if(!v11 && *(char*)(v6 + 1) == 46 && !*(char*)(v6 + 2)) {
                    return (char*)0xFFFFFFFF;
                }
                else {
                    if(v13) {
                        goto loc_8052546;
                    }
                    if(*(char*)(v7 + 1) == 46 && !*(char*)(v7 + 2)) {
                        goto loc_805250D;
                    }
                    else {
                    loc_8052546:
                        if(v9 == 46) {
                            ++v6;
                            ++v7;
                            if((unsigned char)v10 != 46) {
                                return (char*)0xFFFFFFFF;
                            }
                        }
                        else if((unsigned char)v10 == 46) {
                            goto loc_805250D;
                        }
                        int v15 = v6;
                        int v16 = v7;
                        char* result2 = sub_8052420();
                        char* ptr1 = sub_8052420();
                        int v17 = (result2 ? result2: v15) - v6;
                        int v18 = ptr1 ? ptr1: v16;
                        char v19 = ptr1 ? 0: 1;
                        char* ptr2 = (char*)(v18 - v7);
                        if((!v19 || result2) && v17 == ptr2) {
                            →strncmp(v6, v7, v17);
                            ptr2 = (char*)v17;
                            if(!ptr0) {
                                v17 = v15 - v6;
                                ptr2 = (char*)(v16 - v7);
                            }
                        }
                        unsigned int v20 = 0;
                        v10 = 0;
                        do {
                            if(v20 < (unsigned int)ptr2 || v10 < (unsigned int)v17) {
                                *(int*)&v5 = v6;
                                int v21 = v7;
                                while(1) {
                                    if(v10 < (unsigned int)v17) {
                                        int v22 = *(int*)&v5;
                                        v4 = *(unsigned char*)(v10 + v22);
                                        if((unsigned int)(((unsigned int)*(char*)(v10 + v22) | ((unsigned int)(v4 >= 128 ? 0xFFFFFF: 0) << 8)) - 48) > 9) {
                                            goto loc_8052666;
                                        }
                                    }
                                    if(v20 >= (unsigned int)ptr2) {
                                        v7 = v21;
                                        v6 = *(int*)&v5;
                                        v3 = (int)*(char*)(v20 + v7);
                                        goto loc_805273E;
                                    }
                                    else {
                                        int v23 = (int)*(char*)(v20 + v21);
                                        if((unsigned int)(((unsigned int)*(char*)(v20 + v21) | ((unsigned int)((v23 >>> 7) & 1 ? 0xFFFFFF: 0) << 8)) - 48) <= 9) {
                                            v7 = v21;
                                            v3 = v23;
                                            v6 = *(int*)&v5;
                                            goto loc_805273E;
                                        }
                                        else {
                                            if(v10 != v17) {
                                                v4 = *(unsigned char*)(*(int*)&v5 + v10);
                                            loc_8052666:
                                                result2 = (char*)v4;
                                                if((unsigned int)(int*)(result2 - 48) <= 9) {
                                                    result2 = NULL;
                                                }
                                                else if((unsigned int)(int*)((char*)((int)result2 & 0xffffffdf) - 65) > 25) {
                                                    result2 = v4 != 126 ? result2 + 0x100: (char*)0xFFFFFFFF;
                                                }
                                                v2 = 0;
                                                if(v20 == ptr2) {
                                                    goto loc_8052612;
                                                }
                                            }
                                            else {
                                                result2 = NULL;
                                            }
                                            unsigned char v24 = *(unsigned char*)(v20 + v21);
                                            v2 = (int)*(char*)(v20 + v21);
                                            if((unsigned int)(v2 - 48) <= 9) {
                                                v2 = 0;
                                            }
                                            else if((unsigned int)((v2 & 0xffffffdf) - 65) > 25) {
                                                v2 = v24 != 126 ? v2 + 0x100: -1;
                                            }
                                        loc_8052612:
                                            if(v2 != result2) {
                                                break;
                                            }
                                            else {
                                                ++v10;
                                                ++v20;
                                            }
                                        }
                                    }
                                }
                                char* ptr3 = (char*)((int)result2 - v2);
                                return ptr3 ? ptr3: result1;
                            loc_805273E:
                                char v25 = *(char*)(v10 + v6) == 48;
                                v5 = *(unsigned char*)(v10 + v6);
                                if(v25) {
                                    do {
                                        ++v10;
                                        v1 = *(unsigned char*)(v10 + v6);
                                    }
                                    while(*(char*)(v10 + v6) == 48);
                                    v5 = v1;
                                }
                                if((unsigned char)v3 == 48) {
                                    unsigned char v26 = v5;
                                    unsigned int v27 = v10;
                                    do {
                                        ++v20;
                                        v0 = *(unsigned char*)(v20 + v7);
                                    }
                                    while(*(char*)(v20 + v7) == 48);
                                    v3 = (int)v0;
                                    v10 = v27;
                                    v5 = v26;
                                }
                                int v28 = (int)v5;
                                *(int*)&v5 = (int)v5;
                                if((unsigned int)(v28 - 48) <= 9) {
                                    int v29 = (int)(unsigned char)v3;
                                    if((unsigned int)(v29 - 48) <= 9) {
                                        v2 = *(int*)&v5;
                                        result2 = NULL;
                                        *(int*)&v5 = v7;
                                    loc_80527C0:
                                        do {
                                            result2 = result2 ? result2: (char*)(v2 - v29);
                                            ++v10;
                                            v2 = (int)*(char*)(v10 + v6);
                                            ++v20;
                                            v7 = *(int*)&v5;
                                            if((unsigned int)(v2 - 48) > 9) {
                                                v3 = (int)*(char*)(v20 + v7);
                                                goto loc_80527E8;
                                            }
                                            else {
                                                v29 = (int)*(char*)(v20 + v7);
                                            }
                                            if((unsigned int)(v29 - 48) <= 9) {
                                                goto loc_80527C0;
                                            }
                                        }
                                        while((unsigned int)(v29 - 48) <= 9);
                                    }
                                    result = (char*)0x1;
                                    return result;
                                }
                                result2 = NULL;
                            loc_80527E8:
                                if((unsigned int)((int)(unsigned char)v3 - 48) <= 9) {
                                    result = (char*)0xFFFFFFFF;
                                    return result;
                                }
                            }
                            else {
                                return result1;
                            }
                        }
                        while(!result2);
                        return result2;
                    }
                }
            }
            else {
            loc_805250D:
                result1 = (char*)0x1;
            }
        }
        else {
            result1 = (char*)0xFFFFFFFF;
        }
    }
    return result1;
}

int sub_8052840(int param0) {
    int v0;
    int v1;
    int result;
    int v2 = param0;
    →clock_gettime(0, v2);
    if(result) {
        →gettimeofday(&v0, 0);
        *(int*)v2 = v0;
        result = v1 * 1000;
        *(int*)(v2 + 4) = v1 * 1000;
    }
    return result;
}

int sub_8052890(int param0) {
    char v0;
    unsigned char* ptr0;
    →setlocale(param0, 0);
    unsigned char* ptr1 = ptr0;
    int result = 1;
    if(!ptr1) {
        return result;
    }
    else if(*ptr1 == 67 && !*(char*)(ptr1 + 1)) {
        return 0;
    }
    unsigned char* ptr2 = "POSIX";
    int v1 = 6;
    do {
        v0 = *ptr1 == *ptr2;
        ++ptr1;
        ++ptr2;
        --v1;
    }
    while(v0 && v1 == 0);
    return v0 ? 0: 1;
}

int* sub_8052920(int param0, int param1) {
    int* ptr0;
    void* ptr1;
    int* ptr2;
    int v0;
    int* ptr3;
    int* ptr4 = ptr2;
    int* ptr5 = ptr3;
    int* ptr6 = &ptr4;
    char v1 = &ptr0 == 28;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr0 - 28);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x18) ^ (int)&v0) >>> 4) & 1);
    char v5 = (unsigned int)&ptr4 < 24;
    char v6 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&v0) & (int)(int*)((int)&ptr4 ^ 0x18)) < 0;
    int v7 = *(ptr3 + 2);
    unsigned int v8 = (unsigned int)*(ptr5 + 6)(param1, v7);
    char v9 = *(ptr5 + 2) == v8;
    char v10 = *(ptr5 + 2) > (int)v8;
    char v11 = __parity__((unsigned char)v8 - (unsigned char)*(ptr5 + 2));
    char v12 = *(unsigned int*)(ptr5 + 2) > v8;
    char v13 = (((v8 - *(ptr5 + 2)) ^ v8) & (*(ptr5 + 2) ^ v8)) < 0;
    char v14 = (((v8 - *(ptr5 + 2)) ^ (*(ptr5 + 2) ^ v8)) >>> 4) & 1;
    if(!v12) {
        int* ptr7 = &ptr1;
        /*NO_RETURN*/ →abort();
    }
    return (int*)(v8 * 8 + *ptr5);
}

int sub_8052950(unsigned char param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v0;
    int v5 = v2;
    unsigned char v6 = param0;
    int* ptr0 = sub_8052920(v3, v2);
    int* ptr1 = ptr0;
    *(int**)v3 = ptr0;
    int result = ptr0[0];
    if(result) {
        if(result != v5) {
            int v7 = /*BAD_CALL!*/ *(int*)(v1 + 28)(v5, result);
            if((unsigned char)v7) {
                result = ptr1[0];
                goto loc_80529E8;
            }
            else {
                v2 = ptr1[1];
                result = 0;
            }
            if(v2) {
                do {
                    result = *(int*)v2;
                    if(result != v5) {
                        int v8 = /*BAD_CALL!*/ *(int*)(v1 + 28)(v5, result);
                        if((unsigned char)v8) {
                            v2 = ptr1[1];
                            result = *(int*)v2;
                            if(v6) {
                                ptr1[1] = *(int*)(v2 + 4);
                                *(int*)v2 = 0;
                                *(int*)(v2 + 4) = *(int*)(v1 + 36);
                                *(int*)(v1 + 36) = v2;
                            }
                            return result;
                        }
                        ptr1 = (int*)ptr1[1];
                        v2 = ptr1[1];
                    }
                    else if(v6) {
                        ptr1[1] = *(int*)(v2 + 4);
                        *(int*)v2 = 0;
                        *(int*)(v2 + 4) = *(int*)(v1 + 36);
                        *(int*)(v1 + 36) = v2;
                        return result;
                    }
                    else {
                        return result;
                    }
                }
                while(!v2);
                return 0;
            }
        }
        else {
        loc_80529E8:
            if(v6) {
                v2 = ptr1[1];
                if(v2) {
                    int v9 = *(int*)(v2 + 4);
                    ptr1[0] = *(int*)v2;
                    ptr1[1] = v9;
                    *(int*)v2 = 0;
                    *(int*)(v2 + 4) = *(int*)(v1 + 36);
                    *(int*)(v1 + 36) = v2;
                    return result;
                }
                ptr1[0] = 0;
            }
        }
    }
    return result;
}

int sub_8052A50(int param0, unsigned int* param1) {
    int v0;
    int* ptr0 = *param1;
    char v1 = *(param1 + 1) > (unsigned int)ptr0;
    unsigned int* ptr1 = param1;
    unsigned char v2 = (unsigned char)param0;
    if(v1) {
    loc_8052A70:
        do {
            int v3 = *ptr0;
            if(v3) {
                int v4 = *(ptr0 + 1);
                if(v4) {
                    while(1) {
                        int v5 = *(int*)v4;
                        int* ptr2 = sub_8052920(param0, v5);
                        int v6 = *(int*)(v4 + 4);
                        param0 = ptr2[0];
                        if(!param0) {
                            ptr2[0] = v5;
                            *(int*)(v0 + 12) = *(int*)(v0 + 12) + 1;
                            *(int*)v4 = 0;
                            *(int*)(v4 + 4) = *(int*)(v0 + 36);
                            *(int*)(v0 + 36) = v4;
                            if(v6) {
                                goto loc_8052A8D;
                            }
                            else {
                                break;
                            }
                        }
                        else {
                            param0 = ptr2[1];
                            *(int*)(v4 + 4) = ptr2[1];
                            ptr2[1] = v4;
                        }
                        if(!v6) {
                            break;
                        }
                        else {
                        loc_8052A8D:
                            v4 = v6;
                        }
                    }
                    v3 = *ptr0;
                }
                char v7 = v2 ? 0: 1;
                *(ptr0 + 1) = 0;
                if(!v7) {
                    return 1;
                }
                int* ptr3 = sub_8052920(param0, v3);
                param0 = ptr3[0];
                if(param0) {
                    void* ptr4 = *(void**)(v0 + 36);
                    if(ptr4) {
                        *(int*)(v0 + 36) = *(int*)((int)ptr4 + 4);
                    }
                    else {
                        ptr4 = →malloc(8);
                        if(!ptr4) {
                            return 0;
                        }
                    }
                    int v8 = ptr3[1];
                    *(int*)ptr4 = v3;
                    *(int*)((int)ptr4 + 4) = v8;
                    ptr3[1] = (int)ptr4;
                }
                else {
                    ptr3[0] = v3;
                    *(int*)(v0 + 12) = *(int*)(v0 + 12) + 1;
                }
                unsigned int* ptr5 = ptr1;
                *ptr0 = 0;
                ptr0 += 2;
                *(int*)(ptr5 + 3) = *(int*)(ptr5 + 3) - 1;
                if(*(ptr1 + 1) > (unsigned int)ptr0) {
                    goto loc_8052A70;
                }
            }
            else {
                ptr0 += 2;
            }
            return 1;
        }
        while(*(ptr1 + 1) > (unsigned int)ptr0);
    }
    return 1;
}

int sub_8052B60() {
    unsigned int* ptr0;
    float* ptr1 = *ptr0;
    int result = 1;
    if(ptr1 != 134599692) {
        __SyntheticTypeUnknownF v0 = *(ptr1 + 2);
        fucomi(0.10000000149011612, v0);
        if((unsigned int)ptr1 >= 134599692) {
            fucomip(0.8999999761581421, 0.10000000149011612);
            fucomip(1.100000023841858, *(ptr1 + 3));
            fucomi(0.0, *ptr1);
            __int128 v1 = *(ptr1 + 1);
            fucomi(v1, v0 + 0.0);
            fucomip(1.0, v1);
            fucomip(0.10000000149011612, v0 + 0.0);
        }
        else {
            *ptr0 = 134599692;
            result = 0;
        }
    }
    return result;
}

unsigned int sub_8052C10(float param0) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    unsigned int v5;
    if(!(unsigned char)v4) {
        unsigned int v6 = v5;
        int v7 = 0;
        fucomi(4.294967296E9, (double)*(long long*)&v6 / param0);
        return 0;
    }
    if(v5 <= 9) {
        v3 = 11;
    }
    else {
        v3 = v5 | 1;
        if(v3 == -1) {
            return 0;
        }
    loc_8052C73:
        if(v3 <= 9) {
            v2 = 3;
        loc_8052CB6:
            if(!(v3 % v2)) {
                goto loc_8052CB8;
            }
            else {
                return v3 < 0x40000000 ? v3: 0;
            }
        }
        else if(v3 / 3 * 3 == v3) {
            goto loc_8052CB8;
        }
    }
    v1 = 16;
    v0 = 9;
    v2 = 3;
loc_8052CA5:
    do {
        v0 += v1;
        v2 += 2;
        if(v0 >= v3) {
            goto loc_8052CB6;
        }
        else {
            v1 += 8;
        }
        if((v3 % v2)) {
            goto loc_8052CA5;
        }
    }
    while((v3 % v2));
loc_8052CB8:
    v3 += 2;
    if(v3 != -1) {
        goto loc_8052C73;
    }
    else {
        return 0;
    }
}

int sub_8052D20(int param0) {
    return *(int*)(param0 + 16);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* sub_8053140(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = param2 ? param2: &gvar_8052900;
    int v4 = param3 ? param3: &gvar_8052910;
    void* ptr0 = →malloc(40);
    void* result = ptr0;
    if(ptr0) {
        int v5 = param1 ? param1: 134599692;
        *(int*)((int)result + 20) = param1 ? param1: 134599692;
        int v6 = /*BAD_CALL!*/ sub_8052B60();
        if((unsigned char)v6) {
            unsigned int v7 = sub_8052C10(*(float*)(v5 + 8));
            *(unsigned int*)((int)result + 8) = v7;
            if(!v7) {
                void* __ptr = result;
                result = NULL;
                →free(__ptr);
                return result;
            }
            →calloc((int)v7, 8);
            *(int*)result = v1;
            if(!v1) {
                void* __ptr = result;
                result = NULL;
                →free(__ptr);
                return result;
            }
            *(int*)((int)result + 4) = v7 * 8 + v1;
            int v8 = param4;
            *(int*)((int)result + 12) = 0;
            *(int*)((int)result + 16) = 0;
            *(int*)((int)result + 24) = v3;
            *(int*)((int)result + 28) = v4;
            *(int*)((int)result + 32) = v8;
            *(int*)((int)result + 36) = 0;
        }
        else {
            void* __ptr = result;
            result = NULL;
            →free(__ptr);
        }
    }
    return result;
}

int sub_80532B0(void* __ptr2) {
    int result;
    unsigned int v0;
    if(*(int*)((int)__ptr2 + 32) && *(int*)((int)__ptr2 + 16)) {
        int* ptr0 = *(int**)__ptr2;
        if(*(unsigned int*)((int)__ptr2 + 4) > (unsigned int)ptr0) {
            do {
                int v1 = *ptr0;
                if(v1 && ptr0) {
                    int* ptr1 = ptr0;
                    while(1) {
                        *(int*)((int)__ptr2 + 32)(v1);
                        ptr1 = *(unsigned int*)(ptr1 + 1);
                        if(!ptr1) {
                            break;
                        }
                        else {
                            v1 = *ptr1;
                        }
                    }
                }
                v0 = *(unsigned int*)((int)__ptr2 + 4);
                ptr0 += 2;
            }
            while(v0 > (unsigned int)ptr0);
            goto loc_80532FE;
        }
    }
    else {
        v0 = *(unsigned int*)((int)__ptr2 + 4);
    loc_80532FE:
        unsigned int v2 = *(unsigned int*)__ptr2;
        if(v0 > v2) {
            do {
                void* __ptr = *(void**)(v2 + 4);
                if(__ptr) {
                    while(1) {
                        void* ptr2 = *(void**)((int)__ptr + 4);
                        →free(__ptr);
                        if(!ptr2) {
                            break;
                        }
                        else {
                            __ptr = ptr2;
                        }
                    }
                }
                v2 += 8;
            }
            while(*(unsigned int*)((int)__ptr2 + 4) > v2);
        }
    }
    void* __ptr1 = *(void**)((int)__ptr2 + 36);
    if(__ptr1) {
        while(1) {
            void* ptr3 = *(void**)((int)__ptr1 + 4);
            →free(__ptr1);
            if(!ptr3) {
                break;
            }
            else {
                __ptr1 = ptr3;
            }
        }
    }
    →free(*(void**)__ptr2);
    →free(__ptr2);
    return result;
}

void* sub_8053370(unsigned int* param0, int param1) {
    void* __ptr;
    char v0;
    int* ptr0;
    void* ptr1;
    void* ptr2;
    int v1;
    unsigned int* ptr3;
    int* ptr4 = &ptr0;
    char v2 = &ptr0 == 76;
    char v3 = (int)&v1 < 0;
    char v4 = __parity__((unsigned char)&ptr0 - 76);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4c) ^ (int)&v1) >>> 4) & 1);
    char v6 = (unsigned int)&ptr0 < 76;
    char v7 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x4c)) < 0;
    unsigned int* ptr5 = ptr3;
    unsigned int* ptr6 = param0;
    unsigned int v8 = ptr6[5];
    float v9 = *(float*)(v8 + 8);
    int v10 = (unsigned int)*(char*)(v8 + 16);
    int v11 = param1;
    unsigned int v12 = sub_8052C10(v9);
    char v13 = v12 ? 0: 1;
    char v14 = v12 >= 0x80000000;
    char v15 = __parity__((unsigned char)v12);
    char v16 = 0;
    char v17 = 0;
    unsigned int v18 = v12;
    if(!v13) {
        char v19 = ptr6[2] == v12;
        char v20 = (int)ptr6[2] < (int)v12;
        char v21 = __parity__((unsigned char)ptr6[2] - (unsigned char)v12);
        char v22 = ptr6[2] < v12;
        char v23 = (int)(((ptr6[2] - v12) ^ ptr6[2]) & (ptr6[2] ^ v12)) < 0;
        char v24 = (((ptr6[2] - v12) ^ (ptr6[2] ^ v12)) >>> 4) & 1;
        if(v19) {
            return (void*)0x1;
        }
        →calloc((int)v12, 8);
        v0 = ptr2 ? 0: 1;
        char v25 = (int)ptr2 < 0;
        char v26 = __parity__((unsigned char)ptr2);
        char v27 = 0;
        char v28 = 0;
        __ptr = ptr2;
        if(!v0) {
            unsigned int v29 = (unsigned int)(v18 * 8 + (int)ptr2);
            int v30 = 0;
            char v31 = 1;
            char v32 = 0;
            char v33 = 1;
            char v34 = 0;
            char v35 = 0;
            unsigned int v36 = v29;
            unsigned int v37 = ptr6[6];
            unsigned int* ptr7 = ptr6;
            unsigned int v38 = v18;
            unsigned int v39 = 0;
            int v40 = 0;
            unsigned int v41 = v37;
            unsigned int v42 = ptr6[7];
            unsigned int v43 = ptr6[7];
            unsigned int v44 = ptr6[8];
            unsigned int v45 = ptr6[8];
            unsigned int v46 = ptr6[9];
            unsigned int v47 = ptr6[9];
            unsigned int* ptr8 = &__ptr;
            int v48 = /*BAD_CALL!*/ sub_8052A50(0, ptr7);
            char v49 = (unsigned char)v48;
            int v50 = (unsigned int)((v48 >>> 8) & 0xFFFFFF);
            char v51 = v49 ? 0: 1;
            char v52 = v49 < 0;
            char v53 = __parity__(v49);
            char v54 = 0;
            char v55 = 0;
            if(v51) {
                unsigned int v56 = v47;
                int v57 = 1;
                unsigned int* ptr9 = &__ptr;
                ptr6[9] = v56;
                unsigned int* ptr10 = ptr6;
                int v58 = /*BAD_CALL!*/ sub_8052A50(1, &__ptr);
                char v59 = (unsigned char)v58;
                int v60 = (unsigned int)((v58 >>> 8) & 0xFFFFFF);
                char v61 = v59 ? 0: 1;
                char v62 = v59 < 0;
                char v63 = __parity__(v59);
                char v64 = 0;
                char v65 = 0;
                if(!v61) {
                    int v66 = 0;
                    char v67 = 1;
                    char v68 = 0;
                    char v69 = 1;
                    char v70 = 0;
                    char v71 = 0;
                    unsigned int* ptr11 = ptr6;
                    unsigned int* ptr12 = &__ptr;
                    int v72 = /*BAD_CALL!*/ sub_8052A50(0, &__ptr);
                    char v73 = (unsigned char)v72;
                    int v74 = (unsigned int)((v72 >>> 8) & 0xFFFFFF);
                    v61 = v73 ? 0: 1;
                    v62 = v73 < 0;
                    v63 = __parity__(v73);
                    v64 = 0;
                    v65 = 0;
                    if(!v61) {
                        →free(__ptr);
                        return NULL;
                    }
                }
                int* ptr13 = &ptr1;
                /*NO_RETURN*/ →abort();
            }
            →free((void*)ptr6[0]);
            ptr6[0] = (unsigned int)__ptr;
            ptr6[1] = v36;
            ptr6[2] = v38;
            ptr6[3] = v39;
            ptr6[9] = v47;
            return (void*)0x1;
        }
    }
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80534F0(int param0, int param1, int* param2) {
    int result;
    unsigned char v0;
    int* ptr0;
    int v1;
    int v2 = param1;
    int v3 = v1;
    int* ptr1 = param2;
    int v4 = param0;
    if(v2) {
        *(int*)&v0 = 0;
        int v5 = sub_8052950(0);
        if(!v5) {
            int v6 = *(int*)(v4 + 12);
            int v7 = 0;
            int v8 = v6;
            int v9 = *(int*)(v4 + 8);
            int v10 = *(int*)(v4 + 20);
            __SyntheticTypeUnknownF v11 = (double)*(long long*)&v8;
            v8 = v9;
            fucomip((double)*(long long*)&v8 * *(float*)(v10 + 8), v11);
            ptr1 = ptr0;
            if(!*ptr1) {
                *ptr1 = v2;
                result = 1;
                *(int*)(v4 + 16) = *(int*)(v4 + 16) + 1;
                *(int*)(v4 + 12) = *(int*)(v4 + 12) + 1;
                return result;
            }
            int v12 = *(int*)(v4 + 36);
            if(v12) {
                *(int*)(v4 + 36) = *(int*)(v12 + 4);
            }
            else {
                *(int*)&v0 = 8;
                v12 = (int)→malloc(*(size_t*)&v0);
                result = -1;
                if(!v12) {
                    return result;
                }
            }
            int v13 = *(ptr1 + 1);
            *(int*)v12 = v2;
            *(int*)(v12 + 4) = v13;
            *(ptr1 + 1) = v12;
            *(int*)(v4 + 16) = *(int*)(v4 + 16) + 1;
            return 1;
        }
        result = 0;
        if(ptr1) {
            *ptr1 = v5;
            return result;
        }
    }
    else {
        /*NO_RETURN*/ →abort();
        *ptr1 = v2;
        result = 1;
        *(int*)(v4 + 16) = *(int*)(v4 + 16) + 1;
        *(int*)(v4 + 12) = *(int*)(v4 + 12) + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80536D0(int param0, int param1) {
    int v0;
    unsigned int v1 = (unsigned int)sub_80534F0(param0, param1, (int)&v0);
    return v1 != -1 ? v1 ? param1: v0: 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053710(int param0, int param1) {
    unsigned char v0;
    int* ptr0;
    int v1;
    int v2 = v1;
    int v3 = param0;
    *(int*)&v0 = 1;
    int result = sub_8052950(1);
    if(result) {
        int* ptr1 = ptr0;
        *(int*)(v3 + 16) = *(int*)(v3 + 16) - 1;
        if(!*ptr1) {
            int v4 = *(unsigned int*)(v3 + 12) - 1;
            *(int*)(v3 + 12) = *(unsigned int*)(v3 + 12) - 1;
            int v5 = 0;
            int v6 = v4;
            int v7 = *(int*)(v3 + 8);
            float* ptr2 = *(unsigned int*)(v3 + 20);
            __SyntheticTypeUnknownF v8 = (double)*(long long*)&v6;
            v6 = v7;
            fucomip((double)*(long long*)&v6 * *ptr2, v8);
        }
    }
    return result;
}

int sub_8053850(unsigned int param0, unsigned int param1, int param2, char param3, unsigned int param4, unsigned int param5, unsigned int param6, unsigned int param7) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    int* ptr0;
    short v6;
    __SyntheticTypeUnknownF v7;
    __SyntheticTypeUnknownF v8;
    unsigned int v9;
    char v10;
    int v11;
    unsigned int v12;
    unsigned int v13;
    int v14;
    char v15;
    short v16;
    int v17;
    char v18;
    unsigned int v19;
    unsigned int v20 = param1;
    unsigned int v21 = param0;
    unsigned int v22 = param5;
    unsigned int v23 = param4;
    unsigned int v24 = v20;
    int v25 = param2;
    unsigned int v26 = v21;
    unsigned int v27 = param6;
    int v28 = v25;
    unsigned int v29 = param7;
    unsigned int v30 = v27;
    int v31 = *(int*)&param3;
    unsigned int v32 = v29;
    int v33 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v34 = *(int*)&param3;
    unsigned int v35 = (unsigned int)(v31 & 0x3);
    int v36 = v34 & 0x20;
    char v37 = (unsigned int)v36 < 1;
    unsigned int v38 = v37 ? 1000: 0x400;
    int v39 = v36;
    →localeconv();
    int v40 = *(int*)v17;
    int v41 = v17;
    →strlen(v40);
    unsigned char* ptr1 = *(unsigned int*)(v41 + 8);
    int v42 = *(int*)(v41 + 4);
    unsigned char* ptr2 = ptr1;
    int* ptr3 = (int*)(v17 - 1);
    char v43 = ptr3 == 15;
    char v44 = (unsigned int)ptr3 < 15;
    int v45 = v44 || v43 ? v17: 1;
    int v46 = v44 || v43 ? v40: &gvar_805A2B3;
    →strlen(v42);
    int v47 = (unsigned int)v17 < 17 ? v42: &gvar_805DA85;
    int v48 = v28;
    int v49 = v47;
    int v50 = v48 + 0x288;
    char v51 = v22 == v32;
    char v52 = v22 > v32;
    int v53 = v50;
    if((v52 || v51)) {
        if(v52) {
            goto loc_805394C;
        }
        else if(v23 >= v30) {
            goto loc_805394C;
        }
    }
    unsigned int v54 = v23 | v22;
    if(v54) {
        unsigned int v55 = v30;
        v54 = v32;
        unsigned int v56 = sub_8059DC0(v55, v54, v23, v22);
        int v57 = v56 | v19;
        if(!v57) {
            int v58 = sub_8059C90(v30, v32, v23, v22);
            unsigned int v59 = v19;
            int v60 = v58;
            unsigned int v61 = sub_8059DC0(v26, v24, (unsigned int)v58, v19);
            unsigned int v62 = (unsigned int)v60;
            int v63 = v19 * 10;
            unsigned int v64 = v61;
            unsigned int v65 = v61 * 10;
            unsigned int v66 = (unsigned int)((unsigned int)(((unsigned long long)v64 * 10L) >>> 32L) + v63);
            unsigned int v67 = v65;
            unsigned int v68 = v65;
            unsigned int v69 = v66;
            unsigned int v70 = sub_8059DC0(v68, v69, v62, v59);
            unsigned int v71 = (unsigned int)v60;
            unsigned int v72 = v70;
            unsigned int v73 = v19;
            unsigned int v74 = v24;
            unsigned int v75 = (unsigned int)((unsigned long long)(unsigned int)((v70 >>> 31) & 1) | ((unsigned long long)v73 << 1) | ((unsigned long long)0 << 33));
            v14 = (int)(v70 + v72);
            int v76 = sub_8059C90(v26, v74, v71, v59);
            unsigned int v77 = (unsigned int)v60;
            int v78 = v76;
            unsigned int v79 = v67;
            unsigned int v80 = v19;
            int v81 = sub_8059C90(v79, v69, v77, v59);
            char v82 = v59 == v75;
            char v83 = v59 < v75;
            int v84 = v81;
            if(v83) {
            loc_8053D7E:
                v9 = 3;
            loc_8053F5E:
                int v85 = *(int*)&param3;
                int v86 = v53;
                v26 = 0xffffffff;
                int v87 = v85 & 0x10;
                char v88 = v87 ? 0: 1;
                v60 = v87;
                if(!v88) {
                    if(v80 < 0 || (v80 ? 0: 1)) {
                        char v89 = v38 > (unsigned int)v78;
                        v26 = 0;
                        if(!v89) {
                            goto loc_8053F89;
                        }
                    }
                    else {
                    loc_8053F89:
                        int v90 = v78;
                        unsigned int v91 = v80;
                        int v92 = v46;
                        int v93 = v84;
                        v26 = 0;
                        unsigned int v94 = (unsigned int)v90;
                        do {
                            unsigned int v95 = sub_8059DC0(v94, v91, v38, 0);
                            unsigned int v96 = (unsigned int)(v95 * 10 + v93);
                            unsigned int v97 = v96 % v38;
                            unsigned int v98 = v96 / v38;
                            unsigned int v99 = v97;
                            v67 = v98;
                            unsigned int v100 = (unsigned int)(v99 * 2 + (v9 >> 1));
                            unsigned int v101 = v38;
                            unsigned int v102 = v100;
                            int v103 = sub_8059C90(v94, v91, v101, 0);
                            unsigned int v104 = v102;
                            char v105 = v104 == v38;
                            char v106 = v104 > v38;
                            v93 = (int)v67;
                            v94 = (unsigned int)v103;
                            v91 = v19;
                            v9 = !v106 && !v105 ? v104 + v9 ? 1: 0: (unsigned int)(2 - (v104 + v9 > v38 ? -1: 0));
                            ++v26;
                        }
                        while((int)v26 <= 7 && (v91 > 0 || v94 >= v38));
                        v80 = v91;
                        v84 = v93;
                        unsigned int v107 = v67;
                        char v108 = v80 ? 0: 1;
                        char v109 = v80 < 0;
                        v78 = (int)v94;
                        v46 = v92;
                        if((v109 || v108) && (unsigned int)v78 <= 9) {
                            if(v35 != 1) {
                                v94 = v35;
                                v13 = v94 ? 0: (int)v9 <= 0 ? 0: 1;
                            }
                            else {
                                v13 = (unsigned int)((int)(unsigned int)((v107 & 1) + v9) <= 2 ? 0: 1) | ((unsigned int)(((unsigned int)((v107 & 1) + v9) >>> 8) & 0xFFFFFF) << 8);
                            }
                            if((unsigned char)v13) {
                                v84 = (int)(v107 + 1);
                                if(v84 != 10) {
                                    goto loc_8054099;
                                }
                                else {
                                    int v110 = v78;
                                    ++v78;
                                    char v111 = (unsigned int)v110 >= 0xffffffff;
                                    int v112 = v78;
                                    v80 = (unsigned int)((unsigned int)v111 + v80);
                                    if(!((v112 ^ 0xa) | v80)) {
                                        v86 = v53;
                                        v9 = 0;
                                        v84 = 0;
                                    }
                                    else {
                                        v9 = 0;
                                        goto loc_80545D3;
                                    }
                                }
                            }
                            else {
                                if(!v107) {
                                loc_80545D3:
                                    v84 = 0;
                                    v86 = v53;
                                    if(param3 & 0x8) {
                                    loc_80540D5:
                                        if(v35 != 1) {
                                            v12 = v35;
                                            char v113 = v12 ? 0: 1;
                                            if(v113) {
                                                int v114 = v84 + v9;
                                                char v115 = v114 ? 0: 1;
                                                v12 = (unsigned int)(v115 || v114 < 0 ? 0: 1) | ((unsigned int)((v12 >>> 8) & 0xFFFFFF) << 8);
                                                goto loc_80540EC;
                                            }
                                        }
                                        else {
                                            int v116 = v78;
                                            int v117 = v9 >> 31;
                                            int v118 = 0;
                                            v35 = (unsigned int)(v116 & 1);
                                            unsigned int v119 = v9;
                                            unsigned int v120 = v9;
                                            unsigned int v121 = v119 + v35;
                                            char v122 = ((unsigned int)__carry__(v120, v35) + v117) | v121 ? 0: 1;
                                            v121 = (unsigned int)(v122 ? 0: 1) | ((unsigned int)((v121 >>> 8) & 0xFFFFFF) << 8);
                                            v12 = (unsigned int)((int)(v122 ? v84: (unsigned int)(v84 + 1)) <= 5 ? 0: 1) | ((unsigned int)(((v122 ? v84: (unsigned int)(v84 + 1)) >>> 8) & 0xFFFFFF) << 8);
                                        loc_80540EC:
                                            if((unsigned char)v12) {
                                                int v123 = v60;
                                                int v124 = v78;
                                                ++v78;
                                                v80 = (unsigned int)((unsigned int)((unsigned int)v124 >= 0xffffffff) + v80);
                                                if(v123 && !((v38 ^ v78) | v80) && (int)v26 <= 7) {
                                                    ++v26;
                                                    char v125 = param3 & 0x8 ? 0: 1;
                                                    v78 = 1;
                                                    v80 = 0;
                                                    if(v125) {
                                                        unsigned int v126 = (unsigned int)(v86 - 1);
                                                        int v127 = v45;
                                                        *(char*)(v86 - 1) = 48;
                                                        v86 = (int)(v126 - v45);
                                                        →memcpy(v86, v46, v127);
                                                    }
                                                }
                                            }
                                        }
                                        v46 = v86;
                                        int v128 = v86;
                                        int v129 = v78;
                                        unsigned int v130 = v80;
                                        unsigned int v131 = (unsigned int)v129;
                                        do {
                                            --v128;
                                            unsigned int v132 = sub_8059DC0(v131, v130, 10, 0);
                                            *(char*)v128 = (unsigned char)v132 + 48;
                                            v131 = (unsigned int)sub_8059C90(v131, v130, 10, 0);
                                            v18 = v19 | v131 ? 0: 1;
                                            v130 = v19;
                                        }
                                        while(!v18);
                                        char v133 = param3 & 0x4 ? 0: 1;
                                        v14 = v128;
                                        v0 = v46;
                                        if(!v133) {
                                            goto loc_80541C8;
                                        }
                                        else {
                                        loc_8053E24:
                                            if((param3 & 0x80)) {
                                                if(v26 == -1) {
                                                    if((v32 < 0 || (v32 ? 0: 1))) {
                                                        char v134 = v30 == 1;
                                                        char v135 = v30 < 1;
                                                        v26 = 0;
                                                        if(!v135 && !v134) {
                                                            goto loc_805439A;
                                                        }
                                                    }
                                                    else {
                                                    loc_805439A:
                                                        unsigned int v136 = v38;
                                                        unsigned int v137 = 1;
                                                        unsigned int v138 = 0;
                                                        unsigned int v139 = 1;
                                                        do {
                                                            unsigned int v140 = v136;
                                                            unsigned int v141 = v137;
                                                            v137 *= v136;
                                                            v138 = (unsigned int)((int)(v140 * v138) + (unsigned int)(((unsigned long long)v136 * (unsigned long long)v141) >>> 32L));
                                                            char v142 = v138 == v32;
                                                            char v143 = v138 > v32;
                                                            if((v143 || v142) && (v143 || v137 >= v30)) {
                                                                break;
                                                            }
                                                            else {
                                                                ++v139;
                                                            }
                                                        }
                                                        while(v139 != 8);
                                                        v26 = v139;
                                                    }
                                                }
                                                int v144 = *(int*)&param3;
                                                unsigned int v145 = v26;
                                                int v146 = v144 & 0x100;
                                                int v147 = v146 | v145;
                                                if(v147) {
                                                    if(param3 & 0x40) {
                                                        int v148 = v28;
                                                        *(char*)(v148 + 0x288) = 32;
                                                        v53 = v148 + 649;
                                                    }
                                                    if(v26) {
                                                        if(v26 == 1) {
                                                            int v149 = v39;
                                                            v11 = 107;
                                                            if(v149) {
                                                                goto loc_8053E73;
                                                            }
                                                        }
                                                        else {
                                                        loc_8053E73:
                                                            unsigned int v150 = v26;
                                                            v11 = (unsigned int)*(char*)(v150 + 134599788);
                                                        }
                                                        int v151 = v53;
                                                        *(char*)v151 = (unsigned char)v11;
                                                        v53 = v151 + 1;
                                                    }
                                                    if(v146) {
                                                        if(v26 && v39) {
                                                            int v152 = v53;
                                                            *(char*)v152 = 105;
                                                            v53 = v152 + 1;
                                                        }
                                                        int v153 = v53;
                                                        *(char*)v153 = 66;
                                                        v53 = v153 + 1;
                                                    }
                                                }
                                            }
                                            char v154 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v33 ? 0: 1;
                                            v10 = 0;
                                            int v155 = v53;
                                            int result = v14;
                                            *(char*)v155 = 0;
                                            if(v154) {
                                                return result;
                                            }
                                            /*NO_RETURN*/ →__stack_chk_fail();
                                        }
                                    }
                                }
                            loc_8054099:
                                int v156 = v28;
                                int v157 = v84 + 48;
                                int v158 = v28;
                                *(char*)(v156 + 647) = (unsigned char)v157;
                                int v159 = v45;
                                v9 = 0;
                                v86 = (int)((unsigned int)(v158 + 647) - v45);
                                →memcpy(v86, v46, v159);
                                v84 = 0;
                            }
                        }
                        else {
                            v86 = v53;
                        }
                    }
                }
                goto loc_80540D5;
            }
            else if(v82 != 0 && (unsigned int)v14 >= (unsigned int)v60) {
                char v160 = v59 == v75;
                v10 = v59 < v75;
                if(!v10 && !v160) {
                    v9 = 2;
                    goto loc_8053F5E;
                }
                else if(!v10 && (unsigned int)v14 <= (unsigned int)v60) {
                    v9 = 2;
                    goto loc_8053F5E;
                }
                else {
                    goto loc_8053D7E;
                }
            }
            else {
                char v161 = v14 | v75 ? 0: 1;
                v59 = (unsigned int)(v161 ? 0: 1) | ((unsigned int)((v59 >>> 8) & 0xFFFFFF) << 8);
                v9 = v161 ? 0: 1;
                goto loc_8053F5E;
            loc_805394C:
                unsigned int v162 = v30;
                v54 = v32;
                unsigned int v163 = sub_8059DC0(v23, v22, v162, v54);
                v57 = v163 | v19;
                char v164 = v57 ? 0: 1;
                if(v164) {
                    unsigned int v165 = (unsigned int)sub_8059C90(v23, v22, v30, v32);
                    int v166 = (int)(v165 * v24 + v19 * v26);
                    unsigned int v167 = v26;
                    v60 = v166;
                    int v168 = v166;
                    unsigned int v169 = v167;
                    int v170 = (int)(v167 * v165);
                    unsigned int v171 = (unsigned int)((unsigned int)(((unsigned long long)v165 * (unsigned long long)v169) >>> 32L) + v168);
                    v78 = v170;
                    unsigned int v172 = (unsigned int)v170;
                    v80 = v171;
                    v54 = v171;
                    int v173 = sub_8059C90(v172, v54, v165, v19);
                    v57 = (v173 ^ v26) | (v19 ^ v24);
                    if(!v57) {
                        v9 = 0;
                        v84 = 0;
                        goto loc_8053F5E;
                    }
                }
            }
        }
    }
    unsigned int v174 = v24;
    __SyntheticTypeUnknownF v175 = (double)*(long long*)&v26;
    if(v174 >= 0x80000000) {
        v175 += 1.8446744073709552E19;
    }
    unsigned int v176 = v23;
    char v177 = v22 >= 0x80000000;
    unsigned int v178 = v22;
    __SyntheticTypeUnknownF v179 = (double)*(long long*)&v176;
    if(!v177) {
        v46 = (int)v32;
        v8 = (double)*(long long*)&v30;
        if(v46 < 0) {
            goto loc_805436E;
        }
    }
    else {
        v179 += 1.8446744073709552E19;
        v46 = (int)v32;
        char v180 = v46 < 0;
        v8 = (double)*(long long*)&v30;
        if(v180) {
        loc_805436E:
            v8 += 1.8446744073709552E19;
        }
    }
    __SyntheticTypeUnknownF v181 = v179 / v8;
    char v182 = param3 & 0x10 ? 0: 1;
    __SyntheticTypeUnknownF v183 = v175 * v181;
    if(!v182) {
        unsigned int v184 = v38;
        v178 = 0;
        v176 = v184;
        unsigned int v185 = 0;
        __SyntheticTypeUnknownF v186 = (double)*(long long*)&v176;
        v8 = (double)*(long long*)&v176;
        while(1) {
            __SyntheticTypeUnknownF v187 = v8;
            unsigned int v188 = v185;
            ++v185;
            char v189 = v188 >= 0xffffffff;
            __SyntheticTypeUnknownF v190 = v187 * v186;
            fucomi(v190, v183);
            if(v189) {
            loc_8053A0A:
                v7 = v8;
            loc_8053A0C:
                __SyntheticTypeUnknownF v191 = v190 / v7;
                char v192 = v35 == 1;
                char v193 = v35 < 1;
                v26 = v185;
                v181 = v191;
                if(!v192) {
                    fucomip(*(__int128*)&gvar_805D4A0, v191);
                    if(v193 == 0) {
                        fucomi(9.223372036854776E18, v191);
                        v16 = fnstcw();
                        v191 = 9.223372036854776E18 - v191;
                        v6 = (unsigned short)(unsigned char)v16 | ((unsigned short)12 << 8);
                        fldcw(v6);
                        *(long long*)&v176 = (long long)9.223372036854776E18;
                        fldcw(v16);
                        unsigned int v194 = v178;
                        unsigned int v195 = v176;
                        v54 = v194 + 0x80000000;
                        unsigned int v196 = v194 + 0x80000000;
                        v23 = v35;
                        int v197 = 0;
                        if(!v23) {
                            v176 = v195;
                            char v198 = v196 >= 0x80000000;
                            v178 = v196;
                            __SyntheticTypeUnknownF v199 = (double)*(long long*)&v176;
                            __SyntheticTypeUnknownF v200 = !v198 ? v199: v199 + 1.8446744073709552E19;
                            v197 = 1;
                            fucomi(v200, v191);
                            v191 = v200;
                        }
                        unsigned int v201 = v195;
                        unsigned int v202 = v195 + v197;
                        unsigned int v203 = (unsigned int)((unsigned int)__carry__(v197, v201) + v196);
                        v176 = v202;
                        char v204 = v203 >= 0x80000000;
                        v178 = v203;
                        v181 = (double)*(long long*)&v176;
                        if(v204) {
                            v181 += 1.8446744073709552E19;
                        }
                    }
                    else {
                        v181 = v191;
                    }
                }
                v5 = v181;
                v4 = "%.1Lf";
                __SyntheticTypeUnknownF v205 = v191;
                v3 = -1;
                v2 = 1;
                →__sprintf_chk();
                →strlen(v28);
                int v206 = v45;
                v46 = v39;
                ptr0 = (int*)(v206 + 1);
                v1 = v17;
                int* ptr4 = (int*)((char*)(v46 ? ptr0: (int*)((char*)ptr0 + 1)) + 1);
                char v207 = ptr4 == v1;
                char v208 = (unsigned int)ptr4 > (unsigned int)v1;
                __SyntheticTypeUnknownF v209 = v205;
                if((v208 || v207)) {
                    if((param3 & 0x8)) {
                        int v210 = v28;
                        if(*(char*)(v210 + v1 - 1) == 48) {
                            goto loc_8053B58;
                        }
                    }
                    v183 = v209;
                }
                else {
                loc_8053B58:
                    char v211 = v35 == 1;
                    char v212 = v35 < 1;
                    __SyntheticTypeUnknownF v213 = v209 * 10.0;
                    if(!v211) {
                        v181 = *(__int128*)&gvar_805D4A0;
                        fucomip(v181, v213);
                        if(v212 == 0) {
                            fucomi(9.223372036854776E18, v213);
                            v16 = fnstcw();
                            __SyntheticTypeUnknownF v214 = 9.223372036854776E18 - v213;
                            v181 = 9.223372036854776E18;
                            v6 = (unsigned short)(unsigned char)v16 | ((unsigned short)12 << 8);
                            fldcw(v6);
                            *(long long*)&v176 = (long long)9.223372036854776E18;
                            fldcw(v16);
                            unsigned int v215 = v178;
                            unsigned int v216 = v176;
                            unsigned int v217 = v215 + 0x80000000;
                            int v218 = 0;
                            if(!v35) {
                                v176 = v216;
                                char v219 = v217 >= 0x80000000;
                                v178 = v217;
                                __SyntheticTypeUnknownF v220 = (double)*(long long*)&v176;
                                v181 = !v219 ? v220: v220 + 1.8446744073709552E19;
                                v218 = 1;
                                fucomip(v181, v214);
                            }
                            unsigned int v221 = v216;
                            unsigned int v222 = v216 + v218;
                            unsigned int v223 = (unsigned int)((unsigned int)__carry__(v218, v221) + v217);
                            v176 = v222;
                            char v224 = v223 >= 0x80000000;
                            v178 = v223;
                            v213 = (double)*(long long*)&v176;
                            if(v224) {
                                v213 += 1.8446744073709552E19;
                            }
                        }
                    }
                    v183 = v213 / 10.0;
                    ptr0 = NULL;
                    v4 = "%.0Lf";
                    v3 = -1;
                    v2 = 1;
                    v5 = v183;
                    →__sprintf_chk();
                    →strlen(v28);
                    v1 = v17;
                }
                goto loc_8053DF0;
            }
            else if((int)v185 > 7) {
                v7 = v8;
                goto loc_8053A0C;
            }
            else {
                v8 = v190;
            }
        }
        goto loc_8053A0A;
    }
    else {
        char v225 = v35 == 1;
        char v226 = v35 < 1;
        if(!v225) {
            v181 = *(__int128*)&gvar_805D4A0;
            fucomip(v181, v183);
            if(v226 == 0) {
                fucomi(9.223372036854776E18, v183);
                short v16 = fnstcw();
                __SyntheticTypeUnknownF v227 = 9.223372036854776E18 - v183;
                v181 = 9.223372036854776E18;
                v6 = (unsigned short)(unsigned char)v16 | ((unsigned short)12 << 8);
                fldcw(v6);
                *(long long*)&v176 = (long long)9.223372036854776E18;
                fldcw(v16);
                unsigned int v228 = v178;
                unsigned int v229 = v176;
                v54 = v228 + 0x80000000;
                unsigned int v230 = v228 + 0x80000000;
                v22 = v35;
                int v231 = 0;
                if(!v22) {
                    v176 = v229;
                    char v232 = v230 >= 0x80000000;
                    v178 = v230;
                    __SyntheticTypeUnknownF v233 = (double)*(long long*)&v176;
                    v181 = !v232 ? v233: v233 + 1.8446744073709552E19;
                    v231 = 1;
                    fucomip(v181, v227);
                }
                unsigned int v234 = v229;
                unsigned int v235 = v229 + v231;
                unsigned int v236 = (unsigned int)((unsigned int)__carry__(v231, v234) + v230);
                v176 = v235;
                char v237 = v236 >= 0x80000000;
                v178 = v236;
                v183 = (double)*(long long*)&v176;
                if(v237) {
                    v183 += 1.8446744073709552E19;
                }
            }
        }
        ptr0 = NULL;
        v5 = v183;
        v4 = "%.0Lf";
        v3 = -1;
        v2 = 1;
        →__sprintf_chk();
        →strlen(v28);
        v26 = 0xffffffff;
        v1 = v17;
    }
loc_8053DF0:
    int v238 = v53;
    int v239 = v28;
    v14 = v238 - v1;
    v0 = (int)(int*)(v1 - (int)ptr0) + v14;
    →memmove(v14, v239, v1);
    if(!(param3 & 0x4)) {
        goto loc_8053E24;
    }
    else {
    loc_80541C8:
        int v240 = v49;
        int v241 = v0 - v14;
        int v242 = -1;
        →strlen(v240);
        int v243 = v241 + v14;
        v4 = 41;
        v3 = v241;
        v46 = v17;
        int* ptr5 = &v15;
        →__memcpy_chk();
        while(1) {
            unsigned char* ptr6 = ptr2;
            unsigned char v244 = *ptr6;
            if(*ptr6) {
                v242 = v244 <= 126 ? (int)v244: v241;
                ptr2 = ptr6 + 1;
            }
            v242 = (unsigned int)v241 < (unsigned int)v242 ? v241: v242;
            v241 -= v242;
            v14 = v243 - v242;
            →memcpy(v14, v241 + (int)&v15, v242);
            if(!v241) {
                goto loc_8053E24;
            }
            else {
                int v245 = v49;
                v243 = v14 - v46;
                →memcpy(v243, v245, v46);
            }
        }
    }
}

int* sub_8054660(int param0, int* param1, unsigned int* param2) {
    int* result;
    int v0;
    int* ptr0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    int v4;
    unsigned int v5;
    int v6;
    int v7 = param0;
    int v8 = v4;
    unsigned int* ptr1 = param2;
    int* ptr2 = param1;
    if(!v7) {
        →getenv("BLOCK_SIZE");
        v7 = v6;
        if(v6) {
            goto loc_8054687;
        }
        else {
            →getenv("BLOCKSIZE");
            v7 = v6;
            if(v6) {
                goto loc_8054687;
            }
            else {
                →getenv("POSIXLY_CORRECT");
                v3 = 0;
                v2 = 0x400;
                if(v6) {
                    v2 = 0x200;
                    v3 = 0;
                }
                ptr1[0] = v2;
                v1 = 0;
                ptr1[1] = 0;
                goto loc_80546DD;
            }
        }
    }
    else {
    loc_8054687:
        v1 = 0;
        if(*(char*)v7 == 39) {
            ++v7;
            v1 = 4;
        }
        unsigned int v9 = /*BAD_CALL!*/ sub_8051C00(v7, (int*)&gvar_805D478, &gvar_805D484, 4);
        if(v9 < 0x80000000) {
            v1 |= *(int*)(v9 * 4 + (int)&gvar_805D484);
            v2 = 1;
            ptr1[0] = 1;
            v3 = 0;
            ptr1[1] = 0;
            goto loc_80546DD;
        }
        else {
            int v10 = v7;
            ptr0 = sub_8059230((char*)v7, &v5, 0, ptr1, "eEgGkKmMpPtTyYzZ0");
            v0 = v10;
            result = ptr0;
        }
        if(!ptr0) {
            if((unsigned char)(*(char*)v0 - 48) > 9) {
                if(v0 == v5) {
                    goto loc_8054820;
                }
                while(1) {
                    if((unsigned char)(*(char*)(v0 + 1) - 48) <= 9) {
                        goto loc_80547A6;
                    }
                    else {
                        ++v0;
                        if(v0 == v5) {
                        loc_8054820:
                            v1 |= 128;
                            if(*(char*)(v5 - 1) != 66) {
                                goto loc_805482C;
                            }
                            else {
                                v1 |= 0x100;
                            }
                            if(*(char*)(v5 - 2) != 105) {
                                goto loc_80547A6;
                            }
                            else {
                            loc_805482C:
                                v1 |= 32;
                                v2 = ptr1[0];
                                v3 = ptr1[1];
                                break;
                            }
                        }
                    }
                }
            }
            else {
            loc_80547A6:
                v2 = ptr1[0];
                v3 = ptr1[1];
            }
        loc_80546DD:
            *ptr2 = v1;
            result = NULL;
        }
        else {
            *ptr2 = 0;
            v2 = ptr1[0];
            v3 = ptr1[1];
        }
    }
    if(!(v3 | v2)) {
        unsigned int v11 = 0x400;
        →getenv("POSIXLY_CORRECT");
        if(v6) {
            v11 = 0x200;
        }
        ptr1[1] = 0;
        result = (int*)0x4;
        ptr1[0] = v11;
    }
    return result;
}

int* sub_8054860(int param0) {
    size_t v0;
    int v1;
    void* ptr0;
    int* ptr1;
    void* ptr2 = gvar_8062DAC;
    if(ptr2) {
        ptr0 = ptr2;
        if(*(int*)ptr2 != param0) {
            do {
                ptr2 = *(void**)((int)ptr2 + 4);
                if(!ptr2) {
                    goto loc_805488E;
                }
            }
            while(*(int*)ptr2 == param0);
            ptr0 = ptr2;
        }
    }
    else {
    loc_805488E:
        →getpwuid(param0);
        if(ptr1) {
            v1 = *ptr1;
            →strlen(v1);
            v0 = (size_t)((char*)ptr1 + 9);
        }
        else {
            v0 = (unsigned int)9 | ((unsigned int)((v0 >>> 8) & 0xFFFFFF) << 8);
            v1 = &gvar_805DA85;
        }
        void* ptr3 = sub_8058A70(v0);
        *(int*)ptr3 = param0;
        →strcpy((int)ptr3 + 8, v1);
        ptr2 = gvar_8062DAC;
        gvar_8062DAC = ptr3;
        *(void**)((int)ptr3 + 4) = ptr2;
        ptr0 = ptr3;
    }
    return *(char*)((int)ptr0 + 8) ? (int*)((int)ptr0 + 8): NULL;
}

int* sub_80549F0(int param0) {
    size_t v0;
    int v1;
    void* ptr0;
    int* ptr1;
    void* ptr2 = gvar_8062DB4;
    if(ptr2) {
        ptr0 = ptr2;
        if(*(int*)ptr2 != param0) {
            do {
                ptr2 = *(void**)((int)ptr2 + 4);
                if(!ptr2) {
                    goto loc_8054A1E;
                }
            }
            while(*(int*)ptr2 == param0);
            ptr0 = ptr2;
        }
    }
    else {
    loc_8054A1E:
        →getgrgid(param0);
        if(ptr1) {
            v1 = *ptr1;
            →strlen(v1);
            v0 = (size_t)((char*)ptr1 + 9);
        }
        else {
            v0 = (unsigned int)9 | ((unsigned int)((v0 >>> 8) & 0xFFFFFF) << 8);
            v1 = &gvar_805DA85;
        }
        void* ptr3 = sub_8058A70(v0);
        *(int*)ptr3 = param0;
        →strcpy((int)ptr3 + 8, v1);
        ptr2 = gvar_8062DB4;
        gvar_8062DB4 = ptr3;
        *(void**)((int)ptr3 + 4) = ptr2;
        ptr0 = ptr3;
    }
    return *(char*)((int)ptr0 + 8) ? (int*)((int)ptr0 + 8): NULL;
}

char* sub_8054B80(int param0, unsigned int param1, int param2) {
    char* ptr0;
    unsigned int v0;
    unsigned int v1 = param1;
    int v2 = param0;
    char* result = (char*)(param2 + 20);
    *(char*)(param2 + 20) = 0;
    if(v1 < 0x80000000) {
        do {
            --result;
            unsigned int v3 = sub_8059AC0(v2, v1, 10, 0);
            *result = (unsigned char)v3 + 48;
            v2 = (int)sub_8059950((unsigned int)v2, v1, 10, 0);
            v1 = v0;
        }
        while(v0 | v2);
        return result;
    }
    do {
        ptr0 = result;
        --result;
        unsigned int v4 = /*BAD_CALL!*/ sub_8059AC0(v2, v1, 10, 0);
        *(ptr0 - 1) = 48 - (unsigned char)v4;
        v2 = (int)sub_8059950((unsigned int)v2, v1, 10, 0);
        v1 = v0;
    }
    while(v0 | v2);
    *(ptr0 - 2) = 45;
    return ptr0 - 2;
}

char* sub_8054C60(unsigned int param0, unsigned int param1, int param2) {
    unsigned int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param1;
    char* result = (char*)(param2 + 20);
    *(char*)(param2 + 20) = 0;
    unsigned int v3 = v1;
    do {
        --result;
        unsigned int v4 = sub_8059DC0(v3, v2, 10, 0);
        *result = (unsigned char)v4 + 48;
        v3 = (unsigned int)sub_8059C90(v3, v2, 10, 0);
        v2 = v0;
    }
    while(v0 | v3);
    return result;
}

int sub_8054CE0(int param0, int param1, int param2, unsigned int* param3, unsigned int param4, char param5) {
    int v0;
    unsigned int v1;
    int result;
    int v2;
    int v3;
    int v4;
    int v5;
    void* __ptr;
    int v6;
    char* ptr0;
    char v7;
    int v8;
    int v9 = param0;
    int v10 = param1;
    →strlen(v9);
    int v11 = v8;
    int v12 = v8;
    →__ctype_get_mb_cur_max();
    if((unsigned int)v8 > 1) {
        →mbstowcs(0, v9, 0);
        char v13 = v8 == -1;
        int v14 = v8;
        if(!v13) {
            int v15 = v8 + 1;
            size_t __size = (size_t)((v8 + 1) * 4);
            *(int*)&v7 = v14;
            v6 = v15;
            void* ptr1 = →malloc(__size);
            int v16 = *(int*)&v7;
            char v17 = ptr1 ? 0: 1;
            __ptr = ptr1;
            if(!v17) {
                *(int*)&v7 = v16;
                →mbstowcs((int)ptr1, v9, v6);
                int v18 = *(int*)&v7;
                if(!v8) {
                    goto loc_8054D78;
                }
                else {
                    *(int*)(v18 * 4 + (int)__ptr) = 0;
                    int v19 = *(int*)__ptr;
                    if(v19) {
                        v5 = v10;
                        int v20 = 0;
                        void* ptr2 = __ptr;
                        do {
                            →iswprint(v19);
                            if(!v8) {
                                *(int*)ptr2 = 0xfffd;
                                v20 = 1;
                            }
                            ptr2 = (void*)((int)ptr2 + 4);
                            v19 = *(int*)ptr2;
                        }
                        while(v19);
                        v7 = (unsigned char)v20;
                        v10 = v5;
                        →wcswidth((int)__ptr, v6);
                        v11 = v8;
                        if(v7) {
                            →wcstombs(0, (int)__ptr, 0);
                            v5 = v8 + 1;
                            goto loc_8054F57;
                        }
                    }
                    else {
                        →wcswidth((int)__ptr, v6);
                        v11 = v8;
                    }
                    v4 = *param3;
                    if((unsigned int)v4 < (unsigned int)v11) {
                        v5 = v12 + 1;
                    loc_8054F57:
                        void* ptr3 = →malloc((size_t)v5);
                        v6 = (int)ptr3;
                        if(ptr3) {
                            int v21 = *(int*)__ptr;
                            v11 = 0;
                            void* ptr4 = __ptr;
                            unsigned int v22 = *param3;
                            if(v21) {
                                v12 = v10;
                                unsigned int v23 = v22;
                                while(1) {
                                    →wcwidth(v21);
                                    if(v8 == -1) {
                                        v3 = v11 + 1;
                                        *(int*)ptr4 = 0xfffd;
                                        if((unsigned int)v3 <= v23) {
                                            goto loc_8054F8E;
                                        }
                                        else {
                                            v10 = v12;
                                            goto loc_8054FBF;
                                        }
                                    }
                                    else {
                                        v3 = v8 + v11;
                                    }
                                    if((unsigned int)v3 > v23) {
                                        v10 = v12;
                                        goto loc_8054FBF;
                                    }
                                    else {
                                    loc_8054F8E:
                                        ptr4 = (void*)((int)ptr4 + 4);
                                        v21 = *(int*)ptr4;
                                        if(!v21) {
                                            break;
                                        }
                                        else {
                                            v11 = v3;
                                        }
                                    }
                                }
                                v10 = v12;
                                v11 = v3;
                            }
                        loc_8054FBF:
                            int v24 = v5;
                            int v25 = v6;
                            *(int*)ptr4 = 0;
                            →wcstombs(v25, (int)__ptr, v24);
                            v2 = v8;
                            v12 = v6;
                        }
                        else if(!(param5 & 1)) {
                            result = -1;
                            →free(__ptr);
                            →free((void*)v6);
                            return result;
                        }
                        else {
                            v2 = v12;
                            v12 = v9;
                        }
                        goto loc_8054D8C;
                    }
                    else {
                        v2 = v12;
                        v6 = 0;
                        v12 = v9;
                        goto loc_8054EB2;
                    }
                }
            }
            else if(!(param5 & 1)) {
                v6 = 0;
                result = -1;
                →free(__ptr);
                →free((void*)v6);
                return result;
            }
            else {
                v2 = v11;
            }
        }
        else if(!(param5 & 1)) {
            __ptr = NULL;
            v6 = 0;
            result = -1;
            →free(__ptr);
            →free((void*)v6);
            return result;
        }
        else {
            v2 = v11;
            __ptr = NULL;
        }
        v12 = v9;
        v6 = 0;
        goto loc_8054D8C;
    }
    else {
        __ptr = NULL;
    loc_8054D78:
        v2 = v12;
        v6 = 0;
        v12 = v9;
    loc_8054D8C:
        v4 = *param3;
        if((unsigned int)v4 < (unsigned int)v11) {
            v2 = v4;
            v1 = 0;
        }
        else {
        loc_8054EB2:
            if((unsigned int)v4 > (unsigned int)v11) {
                int v26 = v4;
                v4 = v11;
                v1 = (unsigned int)(v26 - v11);
            }
            else {
                v4 = v11;
                v1 = 0;
            }
        }
        *param3 = v4;
        result = v1 + v2;
        if(param2) {
            unsigned int v27 = v1;
            unsigned int v28 = (unsigned int)(v10 + param2 - 1);
            int v29 = v1 - 1;
            if(param4) {
                if(param4 != 1) {
                    v27 >>>= 1;
                    v1 = (unsigned int)((v1 & 1) + v27);
                    v29 = v27 - 1;
                    v0 = v1 - 1;
                }
                else {
                    v0 = v29;
                    v29 = -1;
                    v27 = 0;
                }
                if((v1 && (unsigned int)v10 < v28)) {
                    do {
                        *(char*)v10 = 32;
                        ++v10;
                        if(!v0) {
                            break;
                        }
                        else {
                            --v0;
                        }
                    }
                    while(v10 == v28);
                }
            }
            int v30 = (int)(v28 - v10);
            int v31 = v12;
            *(char*)v10 = 0;
            →mempcpy(v10, v31, (unsigned int)v30 <= (unsigned int)v2 ? v30: v2);
            if((v27 && (unsigned int)v8 < v28)) {
                do {
                    *ptr0 = 32;
                    ++ptr0;
                    if(!v29) {
                        break;
                    }
                    else {
                        --v29;
                    }
                }
                while(ptr0 == v28);
            }
            *ptr0 = 0;
        }
    }
    →free(__ptr);
    →free((void*)v6);
    return result;
}

int sub_8055160(int param0, int param1, char param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    int v4;
    int v5;
    int result;
    int v6;
    void* ptr0;
    int v7;
    char v8;
    char v9;
    int v10;
    int v11;
    char v12;
    int v13 = v7;
    int* ptr1 = &v13;
    char v14 = &v5 == 76;
    char v15 = (int)&v6 < 0;
    char v16 = __parity__((unsigned char)&v5 - 76);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x3c) ^ (int)&v6) >>> 4) & 1);
    char v18 = (unsigned int)&v13 < 60;
    char v19 = (int)(int*)((int)(int*)((int)&v13 ^ (int)&v6) & (int)(int*)((int)&v13 ^ 0x3c)) < 0;
    int v20 = param0;
    int v21 = param1;
    int v22 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v23 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v24 = 0;
    int v25 = v21;
    int v26 = v21 + v20;
    char v27 = v26 ? 0: 1;
    char v28 = v26 < 0;
    char v29 = __parity__((unsigned char)v26);
    char v30 = (((v20 ^ v25) ^ v26) >>> 4) & 1;
    char v31 = __carry__(v20, v25);
    char v32 = ((v26 ^ v25) & ~(v20 ^ v25)) < 0;
    int v33 = v26;
    →__ctype_get_mb_cur_max();
    char v34 = result == 1;
    char v35 = result < 1;
    char v36 = __parity__((unsigned char)result - 1);
    char v37 = (unsigned int)result < 1;
    char v38 = (((result - 1) ^ result) & (result ^ 1)) < 0;
    char v39 = (((result - 1) ^ (result ^ 1)) >>> 4) & 1;
    if(!v37 && !v34) {
        v4 = 0;
        char v40 = v20 == v33;
        char v41 = v20 < v33;
        char v42 = __parity__((unsigned char)v20 - (unsigned char)v33);
        char v43 = (unsigned int)v20 < (unsigned int)v33;
        char v44 = (((v20 - v33) ^ v20) & (v20 ^ v33)) < 0;
        v3 = (((v20 - v33) ^ (v20 ^ v33)) >>> 4) & 1;
        if(v43) {
            int v45 = &v10;
        alab1:
            do {
                int v46 = (unsigned int)*(char*)v20;
                char v47 = *(char*)v20 == 95;
                char v48 = (unsigned char)v46 < 95;
                char v49 = __parity__((unsigned char)v46 - 95);
                char v50 = (unsigned char)v46 < 95;
                char v51 = ((((unsigned char)v46 - 95) ^ (unsigned char)v46) & ((unsigned char)v46 ^ 0x5f)) < 0;
                char v52 = ((((unsigned char)v46 - 95) ^ ((unsigned char)v46 ^ 0x5f)) >>> 4) & 1;
                if((v47 || v48 != v51)) {
                    char v53 = (unsigned char)v46 == 65;
                    char v54 = (unsigned char)v46 < 65;
                    char v55 = __parity__((unsigned char)v46 - 65);
                    char v56 = (unsigned char)v46 < 65;
                    char v57 = ((((unsigned char)v46 - 65) ^ (unsigned char)v46) & ((unsigned char)v46 ^ 0x41)) < 0;
                    char v58 = ((((unsigned char)v46 - 65) ^ ((unsigned char)v46 ^ 0x41)) >>> 4) & 1;
                    if(v54 == v57) {
                        goto loc_8055298;
                    }
                    else {
                        char v59 = (unsigned char)v46 == 32;
                        char v60 = (unsigned char)v46 < 32;
                        char v61 = __parity__((unsigned char)v46 - 32);
                        char v62 = (unsigned char)v46 < 32;
                        char v63 = ((((unsigned char)v46 - 32) ^ (unsigned char)v46) & ((unsigned char)v46 ^ 0x20)) < 0;
                        char v64 = ((((unsigned char)v46 - 32) ^ ((unsigned char)v46 ^ 0x20)) >>> 4) & 1;
                        if(v60 == v63) {
                            char v65 = (unsigned char)v46 == 35;
                            char v66 = (unsigned char)v46 < 35;
                            char v67 = __parity__((unsigned char)v46 - 35);
                            char v68 = (unsigned char)v46 < 35;
                            char v69 = ((((unsigned char)v46 - 35) ^ (unsigned char)v46) & ((unsigned char)v46 ^ 0x23)) < 0;
                            char v70 = ((((unsigned char)v46 - 35) ^ ((unsigned char)v46 ^ 0x23)) >>> 4) & 1;
                            if(v65 || v66 != v69) {
                                goto loc_8055298;
                            }
                            else {
                                int v71 = v46 - 37;
                                char v72 = (unsigned char)v71 == 26;
                                char v73 = (unsigned char)v71 < 26;
                                char v74 = __parity__((unsigned char)v71 - 26);
                                char v75 = (unsigned char)v71 < 26;
                                char v76 = ((((unsigned char)v71 - 26) ^ (unsigned char)v71) & ((unsigned char)v71 ^ 0x1a)) < 0;
                                char v77 = ((((unsigned char)v71 - 26) ^ ((unsigned char)v71 ^ 0x1a)) >>> 4) & 1;
                                if(v75 || v72) {
                                    goto loc_8055298;
                                }
                            }
                        }
                    }
                }
                else {
                    int v78 = v46 - 97;
                    char v79 = (unsigned char)v78 == 29;
                    char v80 = (unsigned char)v78 < 29;
                    char v81 = __parity__((unsigned char)v78 - 29);
                    char v82 = (unsigned char)v78 < 29;
                    char v83 = ((((unsigned char)v78 - 29) ^ (unsigned char)v78) & ((unsigned char)v78 ^ 0x1d)) < 0;
                    char v84 = ((((unsigned char)v78 - 29) ^ ((unsigned char)v78 ^ 0x1d)) >>> 4) & 1;
                    if((v82 || v79)) {
                        goto loc_8055298;
                    }
                }
                int v85 = *(int*)&param2;
                v10 = 0;
                int v86 = 0;
                int v87 = v85 & 0x2;
                char v88 = v87 ? 0: 1;
                char v89 = v87 < 0;
                char v90 = __parity__((unsigned char)v87);
                char v91 = 0;
                char v92 = 0;
                int v93 = v87;
                do {
                    int v94 = v33;
                    v25 = v33;
                    int v95 = v94 - v20;
                    char v96 = v95 ? 0: 1;
                    char v97 = v95 < 0;
                    char v98 = __parity__((unsigned char)v95);
                    char v99 = (((v20 ^ v25) ^ v95) >>> 4) & 1;
                    char v100 = (unsigned int)v20 > (unsigned int)v25;
                    char v101 = ((v95 ^ v25) & (v20 ^ v25)) < 0;
                    int v102 = &v11;
                    →mbrtowc(&v11, v20, v95, &v10);
                    char v103 = result == -1;
                    char v104 = result < -1;
                    char v105 = __parity__((unsigned char)result - 0xff);
                    char v106 = (unsigned int)result < 0xffffffff;
                    char v107 = (((result + 1) ^ result) & (unsigned int)~result) < 0;
                    v3 = (((result + 1) ^ (unsigned int)~result) >>> 4) & 1;
                    v7 = result;
                    if(!v103) {
                        char v108 = result == -2;
                        char v109 = result < -2;
                        char v110 = __parity__((unsigned char)result - 254);
                        char v111 = (unsigned int)result < 0xfffffffe;
                        char v112 = (((result + 2) ^ result) & (result ^ 0xfffffffe)) < 0;
                        v3 = (((result + 2) ^ (result ^ 0xfffffffe)) >>> 4) & 1;
                        if(!v108) {
                            char v113 = result ? 0: 1;
                            char v114 = result < 0;
                            char v115 = __parity__((unsigned char)result);
                            char v116 = 0;
                            char v117 = 0;
                            int v118 = v11;
                            int v119 = 1;
                            v7 = v113 ? 1: v7;
                            →wcwidth(v118);
                            char v120 = result ? 0: 1;
                            char v121 = result < 0;
                            char v122 = __parity__((unsigned char)result);
                            char v123 = 0;
                            char v124 = 0;
                            if(v121) {
                                int v125 = v93;
                                char v126 = v125 ? 0: 1;
                                char v127 = v125 < 0;
                                char v128 = __parity__((unsigned char)v125);
                                char v129 = 0;
                                char v130 = 0;
                                if(!v126) {
                                loc_805533F:
                                    v4 = -1;
                                    break alab1;
                                }
                                else {
                                    int v131 = v11;
                                    →iswcntrl(v131);
                                    char v132 = result ? 0: 1;
                                    char v133 = result < 0;
                                    char v134 = __parity__((unsigned char)result);
                                    char v135 = 0;
                                    char v136 = 0;
                                    if(v132) {
                                        char v137 = v4 == 0x7fffffff;
                                        char v138 = v4 < 0x7fffffff;
                                        char v139 = __parity__((unsigned char)v4 - 0xff);
                                        char v140 = (unsigned int)v4 < 0x7fffffff;
                                        char v141 = (((v4 - 0x7fffffff) ^ v4) & (v4 ^ 0x7fffffff)) < 0;
                                        v3 = (((v4 - 0x7fffffff) ^ (v4 ^ 0x7fffffff)) >>> 4) & 1;
                                        if(v137) {
                                            break alab1;
                                        }
                                        else {
                                            int v142 = v4;
                                            ++v4;
                                            char v143 = v4 ? 0: 1;
                                            char v144 = v4 < 0;
                                            char v145 = __parity__((unsigned char)v4);
                                            char v146 = (((v142 ^ 1) ^ v4) >>> 4) & 1;
                                            char v147 = (unsigned int)v142 >= 0xffffffff;
                                            char v148 = (int)((unsigned int)(v4 ^ v142) & ~(v142 ^ 1)) < 0;
                                        }
                                    }
                                    goto loc_8055204;
                                }
                            }
                            else {
                                int v149 = 0x7fffffff;
                                unsigned int v150 = (unsigned int)(0x7fffffff - v4);
                                v2 = result == v150;
                                v1 = result < (int)v150;
                                char v151 = __parity__((unsigned char)result - (unsigned char)v150);
                                char v152 = (unsigned int)result < v150;
                                v0 = (int)(((unsigned int)(result - v150) ^ result) & (unsigned int)(result ^ v150)) < 0;
                                v3 = (((unsigned int)(result - v150) ^ (unsigned int)(result ^ v150)) >>> 4) & 1;
                            }
                            if((v2 || v1 != v0)) {
                                int v153 = v4;
                                v4 += result;
                                char v154 = v4 ? 0: 1;
                                char v155 = v4 < 0;
                                char v156 = __parity__((unsigned char)v4);
                                char v157 = (((result ^ v153) ^ v4) >>> 4) & 1;
                                char v158 = __carry__(result, v153);
                                char v159 = ((v4 ^ v153) & ~(result ^ v153)) < 0;
                            loc_8055204:
                                v25 = v20;
                                v20 += v7;
                                char v160 = v20 ? 0: 1;
                                char v161 = v20 < 0;
                                char v162 = __parity__((unsigned char)v20);
                                char v163 = (((v7 ^ v25) ^ v20) >>> 4) & 1;
                                char v164 = __carry__(v7, v25);
                                char v165 = ((v20 ^ v25) & ~(v7 ^ v25)) < 0;
                                →mbsinit(&v10);
                                char v166 = result ? 0: 1;
                                char v167 = result < 0;
                                char v168 = __parity__((unsigned char)result);
                                char v169 = 0;
                                char v170 = 0;
                                if(!v166) {
                                    break;
                                }
                            }
                            else {
                                v4 = 0x7fffffff;
                                break alab1;
                            }
                        }
                        else {
                            char v171 = param2 & 1 ? 0: 1;
                            char v172 = (param2 & 1) < 0;
                            char v173 = __parity__(param2 & 1);
                            char v174 = 0;
                            char v175 = 0;
                            if(!v171) {
                                goto loc_805533F;
                            }
                            else {
                                v25 = v4;
                                ++v4;
                                char v176 = v4 ? 0: 1;
                                char v177 = v4 < 0;
                                char v178 = __parity__((unsigned char)v4);
                                v3 = (((v25 ^ 1) ^ v4) >>> 4) & 1;
                                char v179 = (unsigned int)v25 >= 0xffffffff;
                                char v180 = ((v4 ^ v25) & ~(v25 ^ 1)) < 0;
                                break alab1;
                            }
                        }
                    }
                    else {
                        char v181 = param2 & 1 ? 0: 1;
                        char v182 = (param2 & 1) < 0;
                        char v183 = __parity__(param2 & 1);
                        char v184 = 0;
                        char v185 = 0;
                        if(!v181) {
                            goto loc_805533F;
                        }
                        else {
                        loc_8055298:
                            ++v20;
                            v25 = v4;
                            ++v4;
                            char v186 = v4 ? 0: 1;
                            char v187 = v4 < 0;
                            char v188 = __parity__((unsigned char)v4);
                            char v189 = (((v25 ^ 1) ^ v4) >>> 4) & 1;
                            char v190 = (unsigned int)v25 >= 0xffffffff;
                            char v191 = ((v4 ^ v25) & ~(v25 ^ 1)) < 0;
                            break;
                        }
                    }
                }
                while(1);
                v9 = v20 == v33;
                char v192 = v20 > v33;
                char v193 = __parity__((unsigned char)v33 - (unsigned char)v20);
                v8 = (unsigned int)v20 > (unsigned int)v33;
                char v194 = (((v33 - v20) ^ v33) & (v20 ^ v33)) < 0;
                v3 = (((v33 - v20) ^ (v20 ^ v33)) >>> 4) & 1;
            }
            while(!v8 && !v9);
        }
    }
    else {
        v4 = 0;
        char v195 = v20 == v33;
        char v196 = v20 < v33;
        char v197 = __parity__((unsigned char)v20 - (unsigned char)v33);
        char v198 = (unsigned int)v20 < (unsigned int)v33;
        char v199 = (((v20 - v33) ^ v20) & (v20 ^ v33)) < 0;
        v3 = (((v20 - v33) ^ (v20 ^ v33)) >>> 4) & 1;
        if(v198) {
            →__ctype_b_loc();
            int v200 = *(int*)&param2;
            v4 = 0;
            char v201 = 1;
            char v202 = 0;
            char v203 = 1;
            char v204 = 0;
            char v205 = 0;
            v7 = v33;
            int v206 = v200 & 0x2;
            char v207 = v206 ? 0: 1;
            char v208 = v206 < 0;
            char v209 = __parity__((unsigned char)v206);
            char v210 = 0;
            char v211 = 0;
            int v212 = *(int*)result;
            do {
                int v213 = (unsigned int)*(char*)v20;
                int v214 = (unsigned int)*(short*)(v213 * 2 + v212);
                char v215 = (unsigned char)(v214 >>> 8) & 0x40 ? 0: 1;
                char v216 = ((unsigned char)(v214 >>> 8) & 0x40) < 0;
                char v217 = __parity__((unsigned char)(v214 >>> 8) & 0x40);
                char v218 = 0;
                char v219 = 0;
                if(v215) {
                    char v220 = v206 ? 0: 1;
                    char v221 = v206 < 0;
                    char v222 = __parity__((unsigned char)v206);
                    char v223 = 0;
                    char v224 = 0;
                    if(!v220) {
                        goto loc_805533F;
                    }
                    else {
                        char v225 = (unsigned char)v214 & 0x2 ? 0: 1;
                        char v226 = ((unsigned char)v214 & 0x2) < 0;
                        char v227 = __parity__((unsigned char)v214 & 0x2);
                        char v228 = 0;
                        char v229 = 0;
                        if(!v225) {
                            goto loc_8055333;
                        }
                    }
                }
                char v230 = v4 == 0x7fffffff;
                char v231 = v4 < 0x7fffffff;
                char v232 = __parity__((unsigned char)v4 - 0xff);
                char v233 = (unsigned int)v4 < 0x7fffffff;
                char v234 = (((v4 - 0x7fffffff) ^ v4) & (v4 ^ 0x7fffffff)) < 0;
                v3 = (((v4 - 0x7fffffff) ^ (v4 ^ 0x7fffffff)) >>> 4) & 1;
                if(v230) {
                    break;
                }
                else {
                    v25 = v4;
                    ++v4;
                    char v235 = v4 ? 0: 1;
                    char v236 = v4 < 0;
                    char v237 = __parity__((unsigned char)v4);
                    char v238 = (((v25 ^ 1) ^ v4) >>> 4) & 1;
                    char v239 = (unsigned int)v25 >= 0xffffffff;
                    char v240 = ((v4 ^ v25) & ~(v25 ^ 1)) < 0;
                loc_8055333:
                    ++v20;
                    v12 = v7 == v20;
                    char v241 = v7 > v20;
                    char v242 = __parity__((unsigned char)v20 - (unsigned char)v7);
                    char v243 = (unsigned int)v7 > (unsigned int)v20;
                    char v244 = (((v20 - v7) ^ v20) & (v7 ^ v20)) < 0;
                    v3 = (((v20 - v7) ^ (v7 ^ v20)) >>> 4) & 1;
                }
            }
            while(!v12);
        }
    }
    int v245 = v23;
    int v246 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v245;
    char v247 = v246 ? 0: 1;
    char v248 = v246 < 0;
    char v249 = __parity__((unsigned char)v246);
    char v250 = 0;
    char v251 = 0;
    result = v4;
    if(!v247) {
        int* ptr2 = &ptr0;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_8055350(int param0, int param1) {
    char v0;
    int v1;
    →strlen(param0);
    *(int*)&v0 = param1;
    return sub_8055160(param0, v1, v0);
}

unsigned int* sub_8055380(int param0) {
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v0;
    unsigned int* result;
    unsigned int* ptr2;
    unsigned int* ptr3;
    unsigned int* ptr4 = result;
    unsigned int* ptr5 = ptr2;
    unsigned int* ptr6 = ptr3;
    if((unsigned int)ptr2 > 2) {
        int* ptr7 = (int*)((int)(int*)((int)(unsigned int*)((int)ptr5 >>> 1) * 4) + (int)ptr4);
        unsigned int* ptr8 = (unsigned int*)((int)ptr5 >>> 1);
        sub_8055380(param0);
        if(ptr8 != 1) {
            unsigned int* ptr9 = (unsigned int*)((int)ptr5 >>> 2);
            int* ptr10 = (int*)((int)(int*)((int)(unsigned int*)((int)ptr5 >>> 2) * 4) + (int)ptr4);
            sub_8055380(param0);
            sub_8055380(param0);
            int v1 = *ptr4;
            int v2 = *ptr10;
            ptr1 = ptr4;
            unsigned int* ptr11 = ptr9;
            ptr0 = NULL;
            int v3 = v1;
            int v4 = (int)(ptr6 + 1);
            while(1) {
                int v5 = v0(v3, v2);
                if(v5 <= 0) {
                    ptr0 = (unsigned int*)((char*)ptr0 + 1);
                    unsigned int* ptr12 = ptr0;
                    char v6 = ptr12 == ptr9;
                    *(int*)(v4 - 4) = v3;
                    if(!v6) {
                        v3 = *(int*)((int)(int*)((int)ptr12 * 4) + (int)ptr1);
                        goto loc_8055457;
                    }
                    else {
                        ptr4 = ptr1;
                        ptr0 = ptr11;
                        ptr9 = ptr8;
                        goto loc_8055581;
                    }
                }
                else {
                    ptr11 = (unsigned int*)((char*)ptr11 + 1);
                    char v7 = ptr11 == ptr8;
                    *(int*)(v4 - 4) = v2;
                    if(v7) {
                        break;
                    }
                    else {
                        v2 = *(int*)((int)(int*)((int)ptr11 * 4) + (int)ptr1);
                    loc_8055457:
                        v4 += 4;
                    }
                }
            }
            ptr4 = ptr1;
        loc_8055581:
            →memcpy(v4, (int)(int*)((int)ptr0 * 4) + (int)ptr4, (int)(int*)((int)ptr9 - (int)ptr0) * 4);
            ptr0 = *ptr6;
        }
        else {
            unsigned int* ptr13 = *ptr4;
            ptr0 = *ptr4;
            *ptr6 = ptr13;
        }
        unsigned int* ptr14 = ptr8;
        ptr1 = NULL;
        int v8 = *ptr7;
        int v9 = 1;
        while(1) {
            result = (unsigned int*)v0((int)ptr0, v8);
            if((int)result <= 0) {
                ptr1 = (unsigned int*)((char*)ptr1 + 1);
                ptr2 = ptr1;
                char v10 = ptr2 == ptr8;
                *(unsigned int*)((int*)(v9 * 4 + (int)ptr4) - 1) = ptr0;
                if(v10) {
                    return result;
                }
                ptr0 = *(unsigned int*)((int)(int*)((int)ptr2 * 4) + (int)ptr6);
            }
            else {
                ptr14 = (unsigned int*)((char*)ptr14 + 1);
                char v11 = ptr14 == ptr5;
                *((int*)(v9 * 4 + (int)ptr4) - 1) = v8;
                if(v11) {
                    break;
                }
                else {
                    v8 = *(int*)((int)(int*)((int)ptr14 * 4) + (int)ptr4);
                }
            }
            ++v9;
        }
        →memcpy(v9 * 4 + (int)ptr4, (int)(int*)((int)ptr1 * 4) + (int)ptr6, (int)(int*)((int)ptr8 - (int)ptr1) * 4);
    }
    else if(ptr2 == 2) {
        int v12 = *result;
        int v13 = *(int*)(result + 1);
        result = (unsigned int*)v0(v12, v13);
        if((int)result > 0) {
            *ptr4 = v13;
            *(int*)(ptr4 + 1) = v12;
            return result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80555B0(int param0, int param1, int param2) {
    return sub_8055380(param2);
}

int sub_80555D0(int param0) {
    char v0;
    char v1;
    int* ptr0;
    void* ptr1;
    int v2;
    int v3;
    int result;
    int* ptr2 = &ptr0;
    char v4 = &ptr0 == 44;
    char v5 = (int)&v3 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 44);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x2c) ^ (int)&v3) >>> 4) & 1);
    char v8 = (unsigned int)&ptr0 < 44;
    char v9 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x2c)) < 0;
    int v10 = v2;
    int v11 = param0;
    char v12 = v11 ? 0: 1;
    char v13 = v11 < 0;
    char v14 = __parity__((unsigned char)v11);
    char v15 = 0;
    char v16 = 0;
    if(v12) {
        int v17 = stderr;
        →fwrite("A NULL argv[0] was passed through an exec system call.\n", 1, 55, v17);
        int* ptr3 = &ptr1;
        /*NO_RETURN*/ →abort();
    }
    →strrchr(v11, 47);
    if(result && (int)(unsigned int)(result + 1 - v11) > 6) {
        unsigned char* ptr4 = (unsigned char*)(result - 6);
        unsigned char* ptr5 = "/.libs/";
        unsigned int v18 = 7;
        do {
            v1 = *ptr4 == *ptr5;
            v0 = *ptr4 < *ptr5;
            ++ptr4;
            ++ptr5;
            --v18;
        }
        while(v1 && v18 == 0);
        if(v1) {
            v18 = 3;
            unsigned char* ptr6 = (unsigned char*)&gvar_805D4F0;
            int v19 = result + 1;
            v11 = result + 1;
            while(v18 != 0) {
                v1 = *(char*)v19 == *ptr6;
                v0 = *(unsigned char*)v19 < *ptr6;
                ++v19;
                ++ptr6;
                --v18;
                if(!v1) {
                    break;
                }
            }
            if((v0 || v1 ? 0: 1) == (v0 ? 1: 0)) {
                v11 = result + 4;
                __progname = result + 4;
            }
        }
    }
    gvar_8062DBC = v11;
    __progname_full = v11;
    return result;
}

int sub_8055690(int param0, int param1) {
    return sub_80567D0(param0, 6, param1);
}

int sub_80556C0(int param0) {
    return sub_8055690(0, param0);
}

unsigned int* sub_80556E0(int param0, unsigned int param1) {
    int v0;
    int v1;
    void* ptr0;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    unsigned int* ptr1;
    unsigned int* ptr2;
    int v12 = 12;
    unsigned int* ptr3 = ptr1;
    unsigned int* result = ptr2;
    int v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 0;
    int* ptr4 = &v6;
    char v19 = param1 == 8;
    char v20 = (int)param1 < 8;
    char v21 = __parity__((unsigned char)param1 - 8);
    char v22 = param1 < 8;
    char v23 = (((param1 - 8) ^ param1) & (param1 ^ 0x8)) < 0;
    char v24 = (((param1 - 8) ^ (param1 ^ 0x8)) >>> 4) & 1;
    while(v12 != 0) {
        *ptr4 = 0;
        ++ptr4;
        --v12;
    }
    if(v19) {
        int* ptr5 = &ptr0;
        /*NO_RETURN*/ →abort();
    }
    int v25 = v1;
    *result = param1;
    *(int*)(result + 1) = v25;
    *(int*)(result + 2) = v7;
    *(int*)(result + 3) = v0;
    *(int*)(result + 4) = v8;
    *(int*)(result + 5) = v2;
    *(int*)(result + 6) = v9;
    *(int*)(result + 7) = v3;
    *(int*)(result + 8) = v10;
    *(int*)(result + 9) = v4;
    *(int*)(result + 10) = v11;
    *(int*)(result + 11) = v5;
    return result;
}

int sub_8055760(int param0, int param1, char param2, int param3, int param4, int param5) {
    char v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    unsigned char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    char v12;
    char v13;
    char v14;
    int v15;
    int v16;
    char v17;
    unsigned char v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    unsigned char v27;
    char v28;
    char v29;
    int v30;
    void* ptr0;
    char v31;
    int v32;
    int result;
    char v33;
    char v34;
    int v35;
    int v36 = (unsigned int)v34 | ((unsigned int)v25 << 8);
    int v37 = &v36;
    char v38 = &v24 == 172;
    char v39 = (int)&v30 < 0;
    char v40 = __parity__((unsigned char)&v24 - 172);
    char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v36 ^ 0x9c) ^ (int)&v30) >>> 4) & 1);
    char v42 = (unsigned int)&v36 < 156;
    char v43 = (int)(int*)((int)(int*)(&v36 ^ (int)&v30) & (int)(int*)(&v36 ^ 0x9c)) < 0;
    int v44 = result;
    int v45 = param4;
    int v46 = v35;
    int v47 = param3;
    int v48 = v32;
    int v49 = v45;
    int v50 = param5;
    int v51 = v47;
    int v52 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v53 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v54 = 0;
    char v55 = 1;
    char v56 = 0;
    char v57 = 1;
    char v58 = 0;
    char v59 = 0;
    int v60 = v50;
    int* ptr1 = &ptr0;
    →__ctype_get_mb_cur_max();
    char v61 = param2 & 0x2 ? 0: 1;
    char v62 = (param2 & 0x2) < 0;
    char v63 = __parity__(param2 & 0x2);
    char v64 = 0;
    char v65 = 0;
    unsigned char v66 = v61 ? 0: 1;
    char v67 = param1 == 8;
    char v68 = param1 < 8;
    char v69 = __parity__((unsigned char)param1 - 8);
    char v70 = (unsigned int)param1 < 8;
    char v71 = (((param1 - 8) ^ param1) & (param1 ^ 0x8)) < 0;
    char v72 = (((param1 - 8) ^ (param1 ^ 0x8)) >>> 4) & 1;
    int v73 = result;
    if(!v70 && !v67) {
        ptr1 = &ptr0;
        /*NO_RETURN*/ →abort();
    }
    jump gvar_805D520[param1];
    if(v907) {
        v23 = v46;
        char v74 = v23 ? 0: 1;
        char v75 = v23 < 0;
        char v76 = __parity__((unsigned char)v23);
        char v77 = 0;
        char v78 = 0;
        if(!v74) {
            v23 = v44;
            v22 = 1;
            v21 = 1;
            v20 = 1;
            v19 = &gvar_805D4F4;
            *(char*)v23 = 34;
        }
        else {
            v22 = 1;
            v21 = 1;
            v20 = 1;
            v19 = &gvar_805D4F4;
        }
    }
    else {
        v22 = 1;
        v21 = 0;
        char v79 = 1;
        char v80 = 0;
        char v81 = 1;
        char v82 = 0;
        char v83 = 0;
        v20 = 1;
        v19 = &gvar_805D4F4;
        goto loc_8055818;
        if(v937) {
            v23 = v46;
            char v84 = v23 ? 0: 1;
            char v85 = v23 < 0;
            char v86 = __parity__((unsigned char)v23);
            char v87 = 0;
            char v88 = 0;
            if(!v84) {
                v23 = v44;
                v22 = 0;
                char v89 = 1;
                char v90 = 0;
                char v91 = 1;
                char v92 = 0;
                char v93 = 0;
                v21 = 1;
                v20 = 1;
                v19 = 134599557;
                *(char*)v23 = 39;
            }
            else {
                v22 = 0;
                char v94 = 1;
                char v95 = 0;
                char v96 = 1;
                char v97 = 0;
                char v98 = 0;
                v21 = 1;
                v20 = 1;
                v19 = 134599557;
            }
        }
        else {
            v22 = 0;
            v21 = 0;
            char v99 = 1;
            char v100 = 0;
            char v101 = 1;
            char v102 = 0;
            char v103 = 0;
            v20 = 1;
            v19 = 134599557;
            goto loc_8055818;
            if(!v67) {
                →dcgettext(0, &gvar_805D4F6, 5);
                char v104 = param1 == 7;
                char v105 = param1 < 7;
                char v106 = __parity__((unsigned char)param1 - 7);
                char v107 = (unsigned int)param1 < 7;
                char v108 = (((param1 - 7) ^ param1) & (param1 ^ 0x7)) < 0;
                char v109 = (((param1 - 7) ^ (param1 ^ 0x7)) >>> 4) & 1;
                v34 = v104 ? 1: 0;
                char v110 = result == &gvar_805D4F6;
                char v111 = result < &gvar_805D4F6;
                char v112 = __parity__((unsigned char)result - 246);
                char v113 = (unsigned int)result < &gvar_805D4F6;
                char v114 = (int)(int*)((int)(int*)((int)(int*)(result - &gvar_805D4F6) ^ result) & (int)(int*)(result ^ &gvar_805D4F6)) < 0;
                char v115 = (int*)((int)(int*)((int)(int*)((int)(int*)(result - &gvar_805D4F6) ^ (int)(int*)(result ^ &gvar_805D4F6)) >>> 4) & 1);
                v49 = result;
                if(v110) {
                    char v116 = v34 ? 0: 1;
                    char v117 = v34 < 0;
                    char v118 = __parity__(v34);
                    char v119 = 0;
                    char v120 = 0;
                    int v121 = &gvar_805D4F4;
                    int v122 = v116 ? v49: &gvar_805D4F4;
                    v49 = v116 ? v49: &gvar_805D4F4;
                }
                →dcgettext(0, 134599557, 5);
                char v123 = result == 134599557;
                char v124 = result < 134599557;
                char v125 = __parity__((unsigned char)result - 133);
                char v126 = (unsigned int)result < 134599557;
                char v127 = (int)(int*)((int)(int*)((int)(int*)(result - 134599557) ^ result) & (int)(int*)(result ^ 0x805d385)) < 0;
                char v128 = (int*)((int)(int*)((int)(int*)((int)(int*)(result - 134599557) ^ (int)(int*)(result ^ 0x805d385)) >>> 4) & 1);
                v60 = result;
                if(v123) {
                    char v129 = v34 ? 0: 1;
                    char v130 = v34 < 0;
                    char v131 = __parity__(v34);
                    char v132 = 0;
                    char v133 = 0;
                    int v134 = &gvar_805D4F4;
                    int v135 = v129 ? v60: &gvar_805D4F4;
                    v60 = v129 ? v60: &gvar_805D4F4;
                }
            }
            v21 = 0;
            char v136 = v66 ? 0: 1;
            char v137 = v66 >= 128;
            char v138 = __parity__(v66);
            char v139 = v66 < 0;
            char v140 = 0;
            char v141 = 0;
            if(v136) {
                int v142 = v49;
                char v143 = *(char*)v142;
                int v144 = 0;
                char v145 = *(char*)v142 ? 0: 1;
                char v146 = v143 < 0;
                char v147 = __parity__(v143);
                char v148 = 0;
                char v149 = 0;
                if(!v145) {
                    int v150 = v44;
                    int v151 = v46;
                    int v152 = v49;
                    int v153 = v150;
                    do {
                        char v154 = v151 == v21;
                        char v155 = v151 < v21;
                        char v156 = __parity__((unsigned char)v151 - (unsigned char)v21);
                        char v157 = (unsigned int)v151 < (unsigned int)v21;
                        char v158 = (int)(int*)((int)(int*)((int)(int*)(v151 - v21) ^ v151) & (int)(int*)(v151 ^ v21)) < 0;
                        char v159 = (int*)((int)(int*)((int)(int*)((int)(int*)(v151 - v21) ^ (int)(int*)(v151 ^ v21)) >>> 4) & 1);
                        if(!v157 && !v154) {
                            *(char*)(v21 + v153) = v143;
                        }
                        v37 = v21;
                        ++v21;
                        char v160 = v21 ? 0: 1;
                        char v161 = v21 < 0;
                        char v162 = __parity__((unsigned char)v21);
                        char v163 = (int*)((int)(int*)((int)(int*)((int)(int*)(v37 ^ 1) ^ v21) >>> 4) & 1);
                        char v164 = (unsigned int)v37 >= 0xffffffff;
                        char v165 = (int)(int*)((int)(int*)(v21 ^ v37) & (int*)~(int)(int*)(v37 ^ 1)) < 0;
                        v143 = *(char*)(v152 + v21);
                        v144 = 0;
                        v29 = *(char*)(v152 + v21) ? 0: 1;
                        char v166 = v143 < 0;
                        char v167 = __parity__(v143);
                        char v168 = 0;
                        char v169 = 0;
                    }
                    while(!v29);
                }
            }
            int v170 = v60;
            v22 = 1;
            ptr1 = &ptr0;
            →strlen(v170);
            v20 = result;
            v23 = v60;
            v19 = v60;
        }
    }
loc_8055818:
    int v171 = 0;
    char v172 = 1;
    char v173 = 0;
    char v174 = 1;
    char v175 = 0;
    char v176 = 0;
    int v177 = v22;
    int v178 = 0;
    while(1) {
        char v179 = v178 == param0;
        char v180 = v178 < param0;
        char v181 = __parity__((unsigned char)v178 - (unsigned char)param0);
        char v182 = (unsigned int)v178 < (unsigned int)param0;
        char v183 = (int)(((unsigned int)(v178 - param0) ^ v178) & (unsigned int)(v178 ^ param0)) < 0;
        char v184 = (((unsigned int)(v178 - param0) ^ (unsigned int)(v178 ^ param0)) >>> 4) & 1;
        v23 = (unsigned int)(v179 ? 0: 1) | ((unsigned int)((v23 >>> 8) & 0xFFFFFF) << 8);
        char v185 = param0 == -1;
        char v186 = param0 < -1;
        char v187 = __parity__((unsigned char)param0 - 0xff);
        char v188 = (unsigned int)param0 < 0xffffffff;
        char v189 = (((param0 + 1) ^ param0) & (unsigned int)~param0) < 0;
        char v190 = (((param0 + 1) ^ (unsigned int)~param0) >>> 4) & 1;
        if(!v185) {
            char v191 = (unsigned char)v23 ? 0: 1;
            char v192 = (unsigned char)v23 < 0;
            char v193 = __parity__((unsigned char)v23);
            char v194 = 0;
            char v195 = 0;
            if(v191) {
                goto loc_8055EA3;
            }
            else {
            loc_8055840:
                char v196 = (unsigned char)v177 ? 0: 1;
                char v197 = (unsigned char)v177 < 0;
                char v198 = __parity__((unsigned char)v177);
                char v199 = 0;
                char v200 = 0;
                if(!v196) {
                    int v201 = v20;
                    char v202 = v201 ? 0: 1;
                    char v203 = v201 < 0;
                    char v204 = __parity__((unsigned char)v201);
                    char v205 = 0;
                    char v206 = 0;
                    if(!v202) {
                        int v207 = v20;
                        int v208 = v48;
                        unsigned int v209 = (unsigned int)(v207 + v178);
                        v1 = v178 + v208;
                        char v210 = v209 == param0;
                        char v211 = (int)v209 > param0;
                        char v212 = __parity__((unsigned char)param0 - (unsigned char)v209);
                        char v213 = v209 > (unsigned int)param0;
                        char v214 = (int)(((unsigned int)(param0 - v209) ^ param0) & (v209 ^ param0)) < 0;
                        char v215 = (((unsigned int)(param0 - v209) ^ (v209 ^ param0)) >>> 4) & 1;
                        if(v213) {
                            v18 = 0;
                        }
                        else {
                            int v216 = v20;
                            v22 = v19;
                            v17 = (unsigned char)v177;
                            ptr1 = &ptr0;
                            →memcmp(v1, v22, v216);
                            v177 = (int)v17;
                            v18 = 0;
                            char v217 = result ? 0: 1;
                            char v218 = result < 0;
                            char v219 = __parity__((unsigned char)result);
                            char v220 = 0;
                            char v221 = 0;
                            if(v217) {
                                char v222 = v66 ? 0: 1;
                                char v223 = v66 >= 128;
                                char v224 = __parity__(v66);
                                char v225 = v66 < 0;
                                char v226 = 0;
                                v3 = 0;
                                if(!v222) {
                                loc_8055D48:
                                    int v227 = v60;
                                    int v228 = param1;
                                    int v229 = v48;
                                    int v230 = v49;
                                    int v231 = v46;
                                    int v232 = *(int*)&param2;
                                    int v233 = v232 & 0xfffffffd;
                                    char v234 = v233 ? 0: 1;
                                    char v235 = v233 < 0;
                                    char v236 = __parity__((unsigned char)v233);
                                    char v237 = 0;
                                    char v238 = 0;
                                    int v239 = param0;
                                    int v240 = v44;
                                    int v241 = sub_8055760(v239, v228, (unsigned char)v233, 0, v230, v227);
                                    v21 = v241;
                                    goto loc_8055D96;
                                }
                                else {
                                    v18 = 1;
                                }
                            }
                        }
                        v22 = (int)*(char*)v1;
                        v16 = (int)*(char*)v1;
                        char v242 = *(char*)v1 == 126;
                        char v243 = (unsigned char)v16 < 126;
                        char v244 = __parity__((unsigned char)v16 - 126);
                        char v245 = (unsigned char)v16 < 126;
                        char v246 = ((((unsigned char)v16 - 126) ^ (unsigned char)v16) & ((unsigned char)v16 ^ 0x7e)) < 0;
                        char v247 = ((((unsigned char)v16 - 126) ^ ((unsigned char)v16 ^ 0x7e)) >>> 4) & 1;
                        if(v245 || v242) {
                            v23 = (int)(unsigned char)v16;
                            jump gvar_805D544[v23];
                        }
                        else {
                        loc_805587F:
                            char v248 = v73 == 1;
                            char v249 = v73 < 1;
                            char v250 = __parity__((unsigned char)v73 - 1);
                            char v251 = (unsigned int)v73 < 1;
                            char v252 = (((v73 - 1) ^ v73) & (v73 ^ 1)) < 0;
                            char v253 = (((v73 - 1) ^ (v73 ^ 1)) >>> 4) & 1;
                            if(v248) {
                                v17 = (unsigned char)v177;
                                ptr1 = &ptr0;
                                →__ctype_b_loc();
                                v32 = v22;
                                v177 = (int)v17;
                                v1 = (int)(unsigned char)v32;
                                *(int*)&v27 = 1;
                                v23 = *(int*)result;
                                char v254 = *(char*)((char*)(v1 * 2 + v23) + 1) & 0x40 ? 0: 1;
                                char v255 = (*(char*)((char*)(v1 * 2 + v23) + 1) & 0x40) < 0;
                                char v256 = __parity__(*(char*)((char*)(v1 * 2 + v23) + 1) & 0x40);
                                char v257 = 0;
                                char v258 = 0;
                                v7 = v254 ? 0: 1;
                                goto loc_80558B1;
                            }
                            else {
                                char v259 = param0 == -1;
                                char v260 = param0 < -1;
                                char v261 = __parity__((unsigned char)param0 - 0xff);
                                char v262 = (unsigned int)param0 < 0xffffffff;
                                char v263 = (((param0 + 1) ^ param0) & (unsigned int)~param0) < 0;
                                char v264 = (((param0 + 1) ^ (unsigned int)~param0) >>> 4) & 1;
                                int v265 = 0;
                                int v266 = 0;
                                if(v259) {
                                    int v267 = v48;
                                    v17 = (unsigned char)v177;
                                    →strlen(v267);
                                    v177 = (int)v17;
                                    param0 = result;
                                }
                                char v268 = (unsigned char)v177;
                                int v269 = v22;
                                v15 = v178;
                                v178 = 0;
                                char v270 = 1;
                                char v271 = 0;
                                char v272 = 1;
                                char v273 = 0;
                                char v274 = 0;
                                v7 = 1;
                                *(int*)&v27 = 0;
                                int v275 = v21;
                                char v276 = (unsigned char)v269;
                                int v277 = v1;
                            loc_8055FA9:
                                do {
                                    int v278 = v15;
                                    int v279 = &v265;
                                    int v280 = param0;
                                    int v281 = v48;
                                    v22 = v278 + v178;
                                    int v282 = v280 - v22;
                                    v1 = v22 + v281;
                                    char v283 = v1 ? 0: 1;
                                    char v284 = v1 < 0;
                                    char v285 = __parity__((unsigned char)v1);
                                    char v286 = (((v22 ^ v281) ^ v1) >>> 4) & 1;
                                    char v287 = __carry__(v22, v281);
                                    char v288 = ((v1 ^ v281) & ~(v22 ^ v281)) < 0;
                                    int v289 = &v26;
                                    ptr1 = &ptr0;
                                    →mbrtowc(&v26, v1, v282, &v265);
                                    v14 = result ? 0: 1;
                                    char v290 = result < 0;
                                    char v291 = __parity__((unsigned char)result);
                                    char v292 = 0;
                                    char v293 = 0;
                                    int v294 = result;
                                    if(!v14) {
                                        char v295 = result == -1;
                                        char v296 = result < -1;
                                        char v297 = __parity__((unsigned char)result - 0xff);
                                        char v298 = (unsigned int)result < 0xffffffff;
                                        char v299 = (((result + 1) ^ result) & ~result) < 0;
                                        char v300 = (((result + 1) ^ ~result) >>> 4) & 1;
                                        if(v295) {
                                            *(int*)&v27 = v178;
                                            v21 = v275;
                                            v177 = (int)v268;
                                            v22 = (int)v276;
                                            v178 = v15;
                                            v7 = 0;
                                            goto loc_805605E;
                                        }
                                        else {
                                            char v301 = result == -2;
                                            char v302 = result < -2;
                                            char v303 = __parity__((unsigned char)result - 254);
                                            char v304 = (unsigned int)result < 0xfffffffe;
                                            char v305 = (((result + 2) ^ result) & (result ^ 0xfffffffe)) < 0;
                                            char v306 = (((result + 2) ^ (result ^ 0xfffffffe)) >>> 4) & 1;
                                            if(!v301) {
                                                char v307 = v66 ? 0: 1;
                                                char v308 = v66 >= 128;
                                                char v309 = __parity__(v66);
                                                char v310 = v66 < 0;
                                                char v311 = 0;
                                                char v312 = 0;
                                                if(!v307) {
                                                    char v313 = param1 == 2;
                                                    char v314 = param1 < 2;
                                                    char v315 = __parity__((unsigned char)param1 - 2);
                                                    char v316 = (unsigned int)param1 < 2;
                                                    char v317 = (((param1 - 2) ^ param1) & (param1 ^ 0x2)) < 0;
                                                    char v318 = (((param1 - 2) ^ (param1 ^ 0x2)) >>> 4) & 1;
                                                    if(v313) {
                                                        char v319 = result == 1;
                                                        char v320 = result < 1;
                                                        char v321 = __parity__((unsigned char)result - 1);
                                                        char v322 = (unsigned int)result < 1;
                                                        char v323 = (((result - 1) ^ result) & (result ^ 1)) < 0;
                                                        char v324 = (((result - 1) ^ (result ^ 1)) >>> 4) & 1;
                                                        if(!v322 && !v319) {
                                                            unsigned int v325 = 1;
                                                            do {
                                                                int v326 = (unsigned int)*(char*)(v325 + v1);
                                                                int v327 = v326 - 91;
                                                                char v328 = (unsigned char)v327 == 33;
                                                                char v329 = (unsigned char)v327 < 33;
                                                                char v330 = __parity__((unsigned char)v327 - 33);
                                                                char v331 = (unsigned char)v327 < 33;
                                                                char v332 = ((((unsigned char)v327 - 33) ^ (unsigned char)v327) & ((unsigned char)v327 ^ 0x21)) < 0;
                                                                v3 = ((((unsigned char)v327 - 33) ^ ((unsigned char)v327 ^ 0x21)) >>> 4) & 1;
                                                                if((v331 || v328)) {
                                                                    int v333 = (unsigned int)(unsigned char)v327;
                                                                    switch(v333) {
                                                                        case 0: 
                                                                        case 1: 
                                                                        case 3: 
                                                                        case 5: {
                                                                            goto loc_8055D48;
                                                                        }
                                                                        case 2: 
                                                                        case 4: 
                                                                        case 6: 
                                                                        case 7: 
                                                                        case 8: 
                                                                        case 9: 
                                                                        case 10: 
                                                                        case 11: 
                                                                        case 12: 
                                                                        case 13: 
                                                                        case 14: 
                                                                        case 15: {
                                                                            break;
                                                                        }
                                                                        default: {
                                                                            throw 0;
                                                                        }
                                                                    }
                                                                }
                                                                ++v325;
                                                                v31 = v325 == v294;
                                                                char v334 = (int)v325 < v294;
                                                                char v335 = __parity__((unsigned char)v325 - (unsigned char)v294);
                                                                char v336 = v325 < (unsigned int)v294;
                                                                char v337 = (((v325 - v294) ^ v325) & (v325 ^ v294)) < 0;
                                                                char v338 = (((v325 - v294) ^ (v325 ^ v294)) >>> 4) & 1;
                                                            }
                                                            while(!v31);
                                                        }
                                                    }
                                                }
                                                int v339 = v26;
                                                v1 = &v265;
                                                →iswprint(v339);
                                                int v340 = (unsigned int)v7;
                                                int v341 = 0;
                                                char v342 = result ? 0: 1;
                                                char v343 = result < 0;
                                                char v344 = __parity__((unsigned char)result);
                                                char v345 = 0;
                                                char v346 = 0;
                                                int v347 = v342 ? 0: v340;
                                                v37 = v178;
                                                v178 += v294;
                                                char v348 = v178 ? 0: 1;
                                                char v349 = v178 < 0;
                                                char v350 = __parity__((unsigned char)v178);
                                                char v351 = (((v294 ^ v37) ^ v178) >>> 4) & 1;
                                                char v352 = __carry__(v294, v37);
                                                char v353 = ((v178 ^ v37) & ~(v294 ^ v37)) < 0;
                                                v7 = (unsigned char)v347;
                                                ptr1 = &ptr0;
                                                →mbsinit(&v265);
                                                char v354 = result ? 0: 1;
                                                char v355 = result < 0;
                                                char v356 = __parity__((unsigned char)result);
                                                char v357 = 0;
                                                char v358 = 0;
                                                if(v354) {
                                                    goto loc_8055FA9;
                                                }
                                                else {
                                                    break;
                                                }
                                            }
                                            else {
                                                v32 = v22;
                                                v23 = v1;
                                                v21 = v275;
                                                char v359 = v32 == param0;
                                                char v360 = v32 < param0;
                                                char v361 = __parity__((unsigned char)v32 - (unsigned char)param0);
                                                v13 = (unsigned int)v32 < (unsigned int)param0;
                                                char v362 = (((v32 - param0) ^ v32) & (v32 ^ param0)) < 0;
                                                char v363 = (((v32 - param0) ^ (v32 ^ param0)) >>> 4) & 1;
                                                *(int*)&v27 = v178;
                                                v177 = (int)v268;
                                                v178 = v15;
                                                v22 = (int)v276;
                                                v1 = v277;
                                                v7 = 0;
                                            }
                                        }
                                        if(v13) {
                                            char v364 = *(char*)v23 ? 0: 1;
                                            char v365 = *(char*)v23 < 0;
                                            char v366 = __parity__(*(char*)v23);
                                            char v367 = *(unsigned char*)v23 < 0;
                                            char v368 = 0;
                                            char v369 = 0;
                                            if(!v364) {
                                                *(int*)&v7 = v21;
                                                v23 = *(int*)&v27;
                                                int v370 = param0;
                                                do {
                                                    v37 = v23;
                                                    ++v23;
                                                    char v371 = v23 ? 0: 1;
                                                    char v372 = v23 < 0;
                                                    char v373 = __parity__((unsigned char)v23);
                                                    char v374 = (((v37 ^ 1) ^ v23) >>> 4) & 1;
                                                    char v375 = (unsigned int)v37 >= 0xffffffff;
                                                    char v376 = ((v23 ^ v37) & ~(v37 ^ 1)) < 0;
                                                    v32 = v23 + v178;
                                                    char v377 = v32 == v370;
                                                    char v378 = v32 < v370;
                                                    char v379 = __parity__((unsigned char)v32 - (unsigned char)v370);
                                                    char v380 = (unsigned int)v32 < (unsigned int)v370;
                                                    char v381 = (((v32 - v370) ^ v32) & (v32 ^ v370)) < 0;
                                                    char v382 = (((v32 - v370) ^ (v32 ^ v370)) >>> 4) & 1;
                                                    if(!v380) {
                                                        break;
                                                    }
                                                    else {
                                                        v33 = *(char*)(v23 + v1) ? 0: 1;
                                                        char v383 = *(char*)(v23 + v1) < 0;
                                                        char v384 = __parity__(*(char*)(v23 + v1));
                                                        char v385 = *(unsigned char*)(v23 + v1) < 0;
                                                        char v386 = 0;
                                                        char v387 = 0;
                                                    }
                                                }
                                                while(v33);
                                                v21 = *(int*)&v7;
                                                *(int*)&v27 = v23;
                                                v7 = 0;
                                            }
                                        }
                                        goto loc_805605E;
                                    }
                                }
                                while(!v14);
                                *(int*)&v27 = v178;
                                v21 = v275;
                                v177 = (int)v268;
                                v22 = (int)v276;
                                v178 = v15;
                            loc_805605E:
                                v12 = *(int*)&v27 == 1;
                                char v388 = *(int*)&v27 < 1;
                                char v389 = __parity__((unsigned char)*(int*)&v27 - 1);
                                v11 = *(unsigned int*)&v27 < 1;
                                char v390 = (((*(int*)&v27 - 1) ^ *(int*)&v27) & (*(int*)&v27 ^ 1)) < 0;
                                char v391 = (((*(int*)&v27 - 1) ^ (*(int*)&v27 ^ 1)) >>> 4) & 1;
                            }
                            if((v11 || v12)) {
                            loc_80558B1:
                                char v392 = (unsigned char)v177 ? 0: 1;
                                char v393 = (unsigned char)v177 < 0;
                                char v394 = __parity__((unsigned char)v177);
                                char v395 = 0;
                                char v396 = 0;
                                if(v392) {
                                loc_8055D00:
                                    char v397 = v66 ? 0: 1;
                                    char v398 = v66 >= 128;
                                    char v399 = __parity__(v66);
                                    char v400 = v66 < 0;
                                    char v401 = 0;
                                    char v402 = 0;
                                    if(v397) {
                                    loc_8055BD2:
                                        char v403 = v18 ? 0: 1;
                                        char v404 = v18 >= 128;
                                        char v405 = __parity__(v18);
                                        char v406 = v18 < 0;
                                        char v407 = 0;
                                        char v408 = 0;
                                        if(!v403) {
                                        loc_8055BD9:
                                            char v409 = v66 ? 0: 1;
                                            char v410 = v66 >= 128;
                                            char v411 = __parity__(v66);
                                            char v412 = v66 < 0;
                                            char v413 = 0;
                                            v3 = 0;
                                            if(!v409) {
                                                goto loc_8055D48;
                                            }
                                            else {
                                                char v414 = v21 == v46;
                                                char v415 = v21 < v46;
                                                char v416 = __parity__((unsigned char)v21 - (unsigned char)v46);
                                                char v417 = (unsigned int)v21 < (unsigned int)v46;
                                                char v418 = (((v21 - v46) ^ v21) & (v21 ^ v46)) < 0;
                                                char v419 = (((v21 - v46) ^ (v21 ^ v46)) >>> 4) & 1;
                                                if(v417) {
                                                    v23 = v44;
                                                    *(char*)(v23 + v21) = 92;
                                                }
                                                int v420 = v21;
                                                ++v21;
                                                char v421 = v21 ? 0: 1;
                                                char v422 = v21 < 0;
                                                char v423 = __parity__((unsigned char)v21);
                                                char v424 = (((v420 ^ 1) ^ v21) >>> 4) & 1;
                                                char v425 = (unsigned int)v420 >= 0xffffffff;
                                                char v426 = ((v21 ^ v420) & ~(v420 ^ 1)) < 0;
                                            }
                                        }
                                    loc_8055BF5:
                                        int v427 = v178;
                                        ++v178;
                                        char v428 = v178 ? 0: 1;
                                        char v429 = v178 < 0;
                                        char v430 = __parity__((unsigned char)v178);
                                        char v431 = (((v427 ^ 1) ^ v178) >>> 4) & 1;
                                        char v432 = (unsigned int)v427 >= 0xffffffff;
                                        char v433 = (int)((unsigned int)(v178 ^ v427) & ~(v427 ^ 1)) < 0;
                                    loc_8055BF8:
                                        char v434 = v21 == v46;
                                        char v435 = v21 < v46;
                                        char v436 = __parity__((unsigned char)v21 - (unsigned char)v46);
                                        char v437 = (unsigned int)v21 < (unsigned int)v46;
                                        char v438 = (((v21 - v46) ^ v21) & (v21 ^ v46)) < 0;
                                        char v439 = (((v21 - v46) ^ (v21 ^ v46)) >>> 4) & 1;
                                        if(v437) {
                                            v23 = v44;
                                            v32 = v22;
                                            *(char*)(v23 + v21) = (unsigned char)v32;
                                        }
                                        v37 = v21;
                                        ++v21;
                                        char v440 = v21 ? 0: 1;
                                        char v441 = v21 < 0;
                                        char v442 = __parity__((unsigned char)v21);
                                        char v443 = (((v37 ^ 1) ^ v21) >>> 4) & 1;
                                        char v444 = (unsigned int)v37 >= 0xffffffff;
                                        char v445 = ((v21 ^ v37) & ~(v37 ^ 1)) < 0;
                                        continue;
                                    }
                                    else {
                                    loc_8055BB0:
                                        v32 = v51;
                                        char v446 = v32 ? 0: 1;
                                        char v447 = v32 < 0;
                                        char v448 = __parity__((unsigned char)v32);
                                        char v449 = 0;
                                        char v450 = 0;
                                        if(!v446) {
                                            int v451 = v22;
                                            v10 = (unsigned char)v22;
                                            int v452 = (unsigned int)((unsigned char)v22 >>> 5) | ((unsigned int)((v22 >>> 8) & 0xFFFFFF) << 8);
                                            char v453 = (v10 >>> 4) & 1;
                                            char v454 = 0;
                                            char v455 = (unsigned char)v452 ? 0: 1;
                                            char v456 = (v452 >>> 7) & 1;
                                            char v457 = __parity__((unsigned char)v452);
                                            v1 = (int)(unsigned char)v452;
                                            int v458 = 1;
                                            v37 = 1;
                                            v23 = 1 << (v451 & 0x1f);
                                            char v459 = (unsigned int)(v451 & 0x1f) < 32 && (v451 & 0x1f) ? 1 << ((v451 & 0x1f) - 1) < 0: v453;
                                            char v460 = 0;
                                            char v461 = v451 & 0x1f ? v23 ? 0: 1: v455;
                                            char v462 = v451 & 0x1f ? v23 < 0: v456;
                                            char v463 = v451 & 0x1f ? __parity__((unsigned char)v23): v457;
                                            v32 = v51;
                                            char v464 = *(int*)(v1 * 4 + v32) & v23 ? 0: 1;
                                            char v465 = (*(int*)(v1 * 4 + v32) & v23) < 0;
                                            char v466 = __parity__((unsigned char)(*(int*)(v1 * 4 + v32) & v23));
                                            char v467 = 0;
                                            char v468 = 0;
                                            if(!v464) {
                                                goto loc_8055BD9;
                                            }
                                        }
                                        goto loc_8055BD2;
                                    }
                                }
                                else {
                                    char v469 = v7 ? 0: 1;
                                    char v470 = v7 >= 128;
                                    char v471 = __parity__(v7);
                                    char v472 = v7 < 0;
                                    char v473 = 0;
                                    char v474 = 0;
                                    v23 = v21;
                                    if(!v469) {
                                        v21 = v23;
                                        goto loc_8055BB0;
                                    }
                                }
                            }
                            int v475 = *(int*)&v27;
                            v32 = v22;
                            v27 = (unsigned char)v177;
                            v1 = v46;
                            v37 = v475;
                            int v476 = v475 + v178;
                            char v477 = v476 ? 0: 1;
                            char v478 = v476 < 0;
                            char v479 = __parity__((unsigned char)v476);
                            char v480 = (int*)((int)(int*)((int)(int*)((int)(int*)(v178 ^ v37) ^ v476) >>> 4) & 1);
                            char v481 = __carry__(v178, v37);
                            char v482 = (int)(int*)((int)(int*)(v476 ^ v37) & (int*)~(int)(int*)(v178 ^ v37)) < 0;
                            v15 = v476;
                            v23 = (int)v18;
                            while(1) {
                                char v483 = v27 ? 0: 1;
                                char v484 = v27 >= 128;
                                char v485 = __parity__(v27);
                                char v486 = v27 < 0;
                                char v487 = 0;
                                char v488 = 0;
                                if(!v483) {
                                    char v489 = v7 ? 0: 1;
                                    char v490 = v7 >= 128;
                                    char v491 = __parity__(v7);
                                    char v492 = v7 < 0;
                                    char v493 = 0;
                                    char v494 = 0;
                                    if(v489) {
                                        char v495 = v66 ? 0: 1;
                                        char v496 = v66 >= 128;
                                        char v497 = __parity__(v66);
                                        char v498 = v66 < 0;
                                        char v499 = 0;
                                        v3 = 0;
                                        if(!v495) {
                                            goto loc_8055D48;
                                        }
                                        else {
                                            char v500 = v21 == v1;
                                            char v501 = v21 < v1;
                                            char v502 = __parity__((unsigned char)v21 - (unsigned char)v1);
                                            char v503 = (unsigned int)v21 < (unsigned int)v1;
                                            char v504 = (int)(int*)((int)(int*)((int)(int*)(v21 - v1) ^ v21) & (int)(int*)(v21 ^ v1)) < 0;
                                            char v505 = (int*)((int)(int*)((int)(int*)((int)(int*)(v21 - v1) ^ (int)(int*)(v21 ^ v1)) >>> 4) & 1);
                                            if(v503) {
                                                int v506 = v44;
                                                *(char*)(v21 + v506) = 92;
                                            }
                                            int* ptr2 = (int*)(v21 + 1);
                                            char v507 = ptr2 == v1;
                                            char v508 = (int)ptr2 > v1;
                                            char v509 = __parity__((unsigned char)v1 - (unsigned char)ptr2);
                                            char v510 = (unsigned int)ptr2 > (unsigned int)v1;
                                            char v511 = (int)(int*)((int)(int*)((int)(int*)(v1 - (int)ptr2) ^ v1) & (int)(int*)((int)ptr2 ^ v1)) < 0;
                                            char v512 = (int*)((int)(int*)((int)(int*)((int)(int*)(v1 - (int)ptr2) ^ (int)(int*)((int)ptr2 ^ v1)) >>> 4) & 1);
                                            if(!v510 && !v507) {
                                                v10 = (unsigned char)v32;
                                                int v513 = (unsigned int)((unsigned char)v32 >>> 6) | ((unsigned int)((v32 >>> 8) & 0xFFFFFF) << 8);
                                                char v514 = (v10 >>> 5) & 1;
                                                char v515 = v511;
                                                char v516 = (unsigned char)v513 ? 0: 1;
                                                char v517 = (v513 >>> 7) & 1;
                                                char v518 = __parity__((unsigned char)v513);
                                                int v519 = v513;
                                                int v520 = v519 + 48;
                                                int v521 = v44;
                                                *(char*)((char*)(v21 + v521) + 1) = (unsigned char)v520;
                                            }
                                            int* ptr3 = (int*)(v21 + 2);
                                            char v522 = ptr3 == v1;
                                            char v523 = (int)ptr3 > v1;
                                            char v524 = __parity__((unsigned char)v1 - (unsigned char)ptr3);
                                            char v525 = (unsigned int)ptr3 > (unsigned int)v1;
                                            char v526 = (int)(int*)((int)(int*)((int)(int*)(v1 - (int)ptr3) ^ v1) & (int)(int*)((int)ptr3 ^ v1)) < 0;
                                            char v527 = (int*)((int)(int*)((int)(int*)((int)(int*)(v1 - (int)ptr3) ^ (int)(int*)((int)ptr3 ^ v1)) >>> 4) & 1);
                                            if(!v525 && !v522) {
                                                v10 = (unsigned char)v32;
                                                int v528 = (unsigned int)((unsigned char)v32 >>> 3) | ((unsigned int)((v32 >>> 8) & 0xFFFFFF) << 8);
                                                char v529 = (v10 >>> 2) & 1;
                                                char v530 = v526;
                                                char v531 = (unsigned char)v528 ? 0: 1;
                                                char v532 = (v528 >>> 7) & 1;
                                                char v533 = __parity__((unsigned char)v528);
                                                int v534 = v528;
                                                int v535 = v534 & 0x7;
                                                char v536 = v535 ? 0: 1;
                                                char v537 = v535 < 0;
                                                char v538 = __parity__((unsigned char)v535);
                                                char v539 = 0;
                                                char v540 = 0;
                                                int v541 = v535 + 48;
                                                int v542 = v44;
                                                *(char*)((char*)(v21 + v542) + 2) = (unsigned char)v541;
                                            }
                                            unsigned int v543 = (unsigned int)(v32 & 0x7);
                                            v21 += 3;
                                            unsigned int v544 = v543;
                                            v32 = (int)(v543 + 48);
                                            char v545 = v32 ? 0: 1;
                                            char v546 = v32 < 0;
                                            char v547 = __parity__((unsigned char)v32);
                                            char v548 = (((v544 ^ 0x30) ^ v32) >>> 4) & 1;
                                            char v549 = v544 >= 0xffffffd0;
                                            char v550 = ((v32 ^ v544) & ~(v544 ^ 0x30)) < 0;
                                            goto loc_8055949;
                                        }
                                    }
                                }
                                char v551 = (unsigned char)v23 ? 0: 1;
                                char v552 = (unsigned char)v23 < 0;
                                char v553 = __parity__((unsigned char)v23);
                                char v554 = 0;
                                char v555 = 0;
                                if(!v551) {
                                    char v556 = v21 == v1;
                                    char v557 = v21 < v1;
                                    char v558 = __parity__((unsigned char)v21 - (unsigned char)v1);
                                    char v559 = (unsigned int)v21 < (unsigned int)v1;
                                    char v560 = (int)(int*)((int)(int*)((int)(int*)(v21 - v1) ^ v21) & (int)(int*)(v21 ^ v1)) < 0;
                                    char v561 = (int*)((int)(int*)((int)(int*)((int)(int*)(v21 - v1) ^ (int)(int*)(v21 ^ v1)) >>> 4) & 1);
                                    if(v559) {
                                        *(char*)(v21 + v44) = 92;
                                    }
                                    ++v21;
                                    v23 = 0;
                                    ++v178;
                                    char v562 = v178 == v15;
                                    char v563 = v178 > v15;
                                    char v564 = __parity__((unsigned char)v15 - (unsigned char)v178);
                                    char v565 = (unsigned int)v178 > (unsigned int)v15;
                                    char v566 = (int)(int*)((int)(int*)((int)(int*)(v15 - v178) ^ v15) & (int)(int*)(v178 ^ v15)) < 0;
                                    char v567 = (int*)((int)(int*)((int)(int*)((int)(int*)(v15 - v178) ^ (int)(int*)(v178 ^ v15)) >>> 4) & 1);
                                    if(!v565 && !v562) {
                                        goto loc_8055952;
                                    }
                                    else {
                                        v177 = (int)v27;
                                        v22 = v32;
                                        goto loc_8055BF8;
                                    }
                                }
                                else {
                                loc_8055949:
                                    ++v178;
                                    v9 = v178 == v15;
                                    char v568 = v178 > v15;
                                    char v569 = __parity__((unsigned char)v15 - (unsigned char)v178);
                                    v8 = (unsigned int)v178 > (unsigned int)v15;
                                    char v570 = (int)(int*)((int)(int*)((int)(int*)(v15 - v178) ^ v15) & (int)(int*)(v178 ^ v15)) < 0;
                                    char v571 = (int*)((int)(int*)((int)(int*)((int)(int*)(v15 - v178) ^ (int)(int*)(v178 ^ v15)) >>> 4) & 1);
                                }
                                if(v8 || v9) {
                                    break;
                                }
                                else {
                                loc_8055952:
                                    char v572 = v21 == v1;
                                    char v573 = v21 < v1;
                                    char v574 = __parity__((unsigned char)v21 - (unsigned char)v1);
                                    char v575 = (unsigned int)v21 < (unsigned int)v1;
                                    char v576 = (int)(int*)((int)(int*)((int)(int*)(v21 - v1) ^ v21) & (int)(int*)(v21 ^ v1)) < 0;
                                    char v577 = (int*)((int)(int*)((int)(int*)((int)(int*)(v21 - v1) ^ (int)(int*)(v21 ^ v1)) >>> 4) & 1);
                                    if(v575) {
                                        int v578 = v44;
                                        *(char*)(v578 + v21) = (unsigned char)v32;
                                    }
                                    v37 = v21;
                                    ++v21;
                                    char v579 = v21 ? 0: 1;
                                    char v580 = v21 < 0;
                                    char v581 = __parity__((unsigned char)v21);
                                    char v582 = (int*)((int)(int*)((int)(int*)((int)(int*)(v37 ^ 1) ^ v21) >>> 4) & 1);
                                    char v583 = (unsigned int)v37 >= 0xffffffff;
                                    char v584 = (int)(int*)((int)(int*)(v21 ^ v37) & (int*)~(int)(int*)(v37 ^ 1)) < 0;
                                    v32 = (int)*(char*)(v178 + v48);
                                }
                            }
                            v177 = (int)v27;
                            v22 = v32;
                            goto loc_8055BF8;
                        }
                    }
                }
                int v585 = v48;
                v18 = 0;
                v37 = v585;
                v1 = v178 + v585;
                char v586 = v1 ? 0: 1;
                char v587 = v1 < 0;
                char v588 = __parity__((unsigned char)v1);
                char v589 = (((v178 ^ v37) ^ v1) >>> 4) & 1;
                char v590 = __carry__(v178, v37);
                char v591 = ((v1 ^ v37) & ~(v178 ^ v37)) < 0;
                v22 = (int)*(char*)v1;
                v16 = (int)*(char*)v1;
                char v592 = *(char*)v1 == 126;
                char v593 = (unsigned char)v16 < 126;
                char v594 = __parity__((unsigned char)v16 - 126);
                char v595 = (unsigned char)v16 < 126;
                char v596 = ((((unsigned char)v16 - 126) ^ (unsigned char)v16) & ((unsigned char)v16 ^ 0x7e)) < 0;
                char v597 = ((((unsigned char)v16 - 126) ^ ((unsigned char)v16 ^ 0x7e)) >>> 4) & 1;
                if(!v595 && !v592) {
                    goto loc_805587F;
                }
                else {
                    v23 = (int)(unsigned char)v16;
                    jump gvar_805D544[v23];
                    if(v967) {
                        goto loc_8055D3B;
                    }
                    else {
                        char v598 = param1 == 3;
                        char v599 = param1 < 3;
                        char v600 = __parity__((unsigned char)param1 - 3);
                        char v601 = (unsigned int)param1 < 3;
                        char v602 = (((param1 - 3) ^ param1) & (param1 ^ 0x3)) < 0;
                        char v603 = (((param1 - 3) ^ (param1 ^ 0x3)) >>> 4) & 1;
                        if(!v598) {
                        loc_8055CF8:
                            char v604 = (unsigned char)v177 ? 0: 1;
                            char v605 = (unsigned char)v177 < 0;
                            char v606 = __parity__((unsigned char)v177);
                            char v607 = 0;
                            char v608 = 0;
                            if(v604) {
                                goto loc_8055D00;
                            }
                            else {
                                goto loc_8055BB0;
                            }
                        }
                        else {
                            char v609 = param2 & 0x4 ? 0: 1;
                            char v610 = (param2 & 0x4) < 0;
                            char v611 = __parity__(param2 & 0x4);
                            char v612 = 0;
                            char v613 = 0;
                            if(v609) {
                                goto loc_8055CF8;
                            }
                            else {
                                v1 = v178 + 2;
                                char v614 = v1 == param0;
                                char v615 = v1 > param0;
                                char v616 = __parity__((unsigned char)param0 - (unsigned char)v1);
                                char v617 = (unsigned int)v1 > (unsigned int)param0;
                                char v618 = (((param0 - v1) ^ param0) & (v1 ^ param0)) < 0;
                                char v619 = (((param0 - v1) ^ (v1 ^ param0)) >>> 4) & 1;
                                if(v617 || v614) {
                                    goto loc_8055CF8;
                                }
                                else {
                                    v32 = v48;
                                    char v620 = *(char*)(v32 + v178 + 1) == 63;
                                    char v621 = *(char*)(v32 + v178 + 1) < 63;
                                    char v622 = __parity__(*(char*)(v32 + v178 + 1) - 63);
                                    char v623 = *(unsigned char*)(v32 + v178 + 1) < 63;
                                    char v624 = (((*(char*)(v32 + v178 + 1) - 63) ^ *(char*)(v32 + v178 + 1)) & (*(char*)(v32 + v178 + 1) ^ 0x3f)) < 0;
                                    char v625 = (((*(char*)(v32 + v178 + 1) - 63) ^ (*(char*)(v32 + v178 + 1) ^ 0x3f)) >>> 4) & 1;
                                    if(!v620) {
                                        goto loc_8055CF8;
                                    }
                                    else {
                                        v23 = (int)*(char*)(v32 + v1);
                                        int v626 = (int)*(char*)(v32 + v1);
                                        v32 = v626 - 33;
                                        char v627 = (unsigned char)v32 == 29;
                                        char v628 = (unsigned char)v32 < 29;
                                        char v629 = __parity__((unsigned char)v32 - 29);
                                        char v630 = (unsigned char)v32 < 29;
                                        char v631 = ((((unsigned char)v32 - 29) ^ (unsigned char)v32) & ((unsigned char)v32 ^ 0x1d)) < 0;
                                        char v632 = ((((unsigned char)v32 - 29) ^ ((unsigned char)v32 ^ 0x1d)) >>> 4) & 1;
                                        v7 = (unsigned char)v23;
                                        if(!v630 && !v627) {
                                            goto loc_8055CF8;
                                        }
                                        else {
                                            int v633 = 1;
                                            v37 = 1;
                                            v23 = 1 << (v32 & 0x1f);
                                            char v634 = (unsigned int)(v32 & 0x1f) < 32 && (v32 & 0x1f) ? 1 << ((v32 & 0x1f) - 1) < 0: v630;
                                            char v635 = (v32 & 0x1f) != 1 ? v631: 0;
                                            char v636 = v32 & 0x1f ? v23 ? 0: 1: v627;
                                            char v637 = v32 & 0x1f ? v23 < 0: v628;
                                            char v638 = v32 & 0x1f ? __parity__((unsigned char)v23): v629;
                                            char v639 = v23 & 0x380051c1 ? 0: 1;
                                            char v640 = (v23 & 0x380051c1) < 0;
                                            char v641 = __parity__((unsigned char)v23 & 0xc1);
                                            char v642 = 0;
                                            char v643 = 0;
                                            if(v639) {
                                                goto loc_8055CF8;
                                            }
                                            else {
                                                char v644 = v66 ? 0: 1;
                                                char v645 = v66 >= 128;
                                                char v646 = __parity__(v66);
                                                char v647 = v66 < 0;
                                                char v648 = 0;
                                                v3 = 0;
                                                if(!v644) {
                                                    goto loc_8055D48;
                                                }
                                                else {
                                                    char v649 = v21 == v46;
                                                    char v650 = v21 < v46;
                                                    char v651 = __parity__((unsigned char)v21 - (unsigned char)v46);
                                                    char v652 = (unsigned int)v21 < (unsigned int)v46;
                                                    char v653 = (((v21 - v46) ^ v21) & (v21 ^ v46)) < 0;
                                                    char v654 = (((v21 - v46) ^ (v21 ^ v46)) >>> 4) & 1;
                                                    v22 = (int)v7;
                                                    if(v652) {
                                                        int v655 = v44;
                                                        *(char*)(v655 + v21) = 63;
                                                    }
                                                    unsigned int v656 = (unsigned int)(v21 + 1);
                                                    char v657 = v656 == v46;
                                                    char v658 = (int)v656 > v46;
                                                    char v659 = __parity__((unsigned char)v46 - (unsigned char)v656);
                                                    char v660 = v656 > (unsigned int)v46;
                                                    char v661 = (((v46 - v656) ^ v46) & (v656 ^ v46)) < 0;
                                                    char v662 = (((v46 - v656) ^ (v656 ^ v46)) >>> 4) & 1;
                                                    if(!v660 && !v657) {
                                                        int v663 = v44;
                                                        *(char*)(v663 + v21 + 1) = 34;
                                                    }
                                                    unsigned int v664 = (unsigned int)(v21 + 2);
                                                    char v665 = v664 == v46;
                                                    char v666 = (int)v664 > v46;
                                                    char v667 = __parity__((unsigned char)v46 - (unsigned char)v664);
                                                    char v668 = v664 > (unsigned int)v46;
                                                    char v669 = (((v46 - v664) ^ v46) & (v664 ^ v46)) < 0;
                                                    char v670 = (((v46 - v664) ^ (v664 ^ v46)) >>> 4) & 1;
                                                    if(!v668 && !v665) {
                                                        int v671 = v44;
                                                        *(char*)(v671 + v21 + 2) = 34;
                                                    }
                                                    v23 = v21 + 3;
                                                    char v672 = v23 == v46;
                                                    char v673 = v23 > v46;
                                                    char v674 = __parity__((unsigned char)v46 - (unsigned char)v23);
                                                    char v675 = (unsigned int)v23 > (unsigned int)v46;
                                                    char v676 = (((v46 - v23) ^ v46) & (v23 ^ v46)) < 0;
                                                    char v677 = (((v46 - v23) ^ (v23 ^ v46)) >>> 4) & 1;
                                                    if(!v675 && !v672) {
                                                        v23 = v44;
                                                        *(char*)(v23 + v21 + 3) = 63;
                                                    }
                                                    v37 = v21;
                                                    v21 += 4;
                                                    char v678 = v21 ? 0: 1;
                                                    char v679 = v21 < 0;
                                                    char v680 = __parity__((unsigned char)v21);
                                                    char v681 = (((v37 ^ 0x4) ^ v21) >>> 4) & 1;
                                                    char v682 = (unsigned int)v37 >= 0xfffffffc;
                                                    char v683 = ((v21 ^ v37) & ~(v37 ^ 0x4)) < 0;
                                                    v178 = v1;
                                                    goto loc_8055CF8;
                                                    if(v965) {
                                                        char v684 = param2 & 1 ? 0: 1;
                                                        char v685 = (param2 & 1) < 0;
                                                        char v686 = __parity__(param2 & 1);
                                                        char v687 = 0;
                                                        char v688 = 0;
                                                        if(v684) {
                                                            goto loc_8055D00;
                                                        }
                                                        else {
                                                            v37 = v178;
                                                            ++v178;
                                                            char v689 = v178 ? 0: 1;
                                                            char v690 = v178 < 0;
                                                            char v691 = __parity__((unsigned char)v178);
                                                            char v692 = (((v37 ^ 1) ^ v178) >>> 4) & 1;
                                                            char v693 = (unsigned int)v37 >= 0xffffffff;
                                                            char v694 = ((v178 ^ v37) & ~(v37 ^ 1)) < 0;
                                                            continue;
                                                        }
                                                    }
                                                    else {
                                                        char v695 = v66 ? 0: 1;
                                                        char v696 = v66 >= 128;
                                                        char v697 = __parity__(v66);
                                                        char v698 = v66 < 0;
                                                        char v699 = 0;
                                                        v3 = 0;
                                                        if(!v695) {
                                                            goto loc_8055D48;
                                                        }
                                                        else {
                                                            char v700 = v21 == v46;
                                                            char v701 = v21 < v46;
                                                            char v702 = __parity__((unsigned char)v21 - (unsigned char)v46);
                                                            char v703 = (unsigned int)v21 < (unsigned int)v46;
                                                            char v704 = (int)(int*)((int)(int*)((int)(int*)(v21 - v46) ^ v21) & (int)(int*)(v21 ^ v46)) < 0;
                                                            char v705 = (int*)((int)(int*)((int)(int*)((int)(int*)(v21 - v46) ^ (int)(int*)(v21 ^ v46)) >>> 4) & 1);
                                                            if(v703) {
                                                                int v706 = v44;
                                                                *(char*)(v706 + v21) = 92;
                                                            }
                                                            unsigned int v707 = (unsigned int)(v178 + 1);
                                                            v22 = 48;
                                                            v6 = v707 == param0;
                                                            char v708 = (int)v707 > param0;
                                                            char v709 = __parity__((unsigned char)param0 - (unsigned char)v707);
                                                            v5 = v707 > (unsigned int)param0;
                                                            char v710 = (int)(((unsigned int)(param0 - v707) ^ param0) & (v707 ^ param0)) < 0;
                                                            char v711 = (((unsigned int)(param0 - v707) ^ (v707 ^ param0)) >>> 4) & 1;
                                                            v23 = v21 + 1;
                                                        }
                                                    }
                                                    if(!v5 && !v6) {
                                                        unsigned char v712 = *(unsigned char*)(v178 + v48 + 1);
                                                        int v713 = 0;
                                                        char v714 = *(char*)(v178 + v48 + 1) == 47;
                                                        char v715 = (char)v712 < 47;
                                                        char v716 = __parity__(v712 - 47);
                                                        char v717 = v712 < 47;
                                                        char v718 = (((v712 - 47) ^ v712) & (v712 ^ 0x2f)) < 0;
                                                        char v719 = (((v712 - 47) ^ (v712 ^ 0x2f)) >>> 4) & 1;
                                                        if(!v714 && v715 == v718) {
                                                            char v720 = v712 == 57;
                                                            char v721 = (char)v712 < 57;
                                                            char v722 = __parity__(v712 - 57);
                                                            char v723 = v712 < 57;
                                                            char v724 = (((v712 - 57) ^ v712) & (v712 ^ 0x39)) < 0;
                                                            char v725 = (((v712 - 57) ^ (v712 ^ 0x39)) >>> 4) & 1;
                                                            if((v720 || v721 != v724)) {
                                                                char v726 = v23 == v46;
                                                                char v727 = v23 > v46;
                                                                char v728 = __parity__((unsigned char)v46 - (unsigned char)v23);
                                                                char v729 = (unsigned int)v23 > (unsigned int)v46;
                                                                char v730 = (((v46 - v23) ^ v46) & (v23 ^ v46)) < 0;
                                                                char v731 = (((v46 - v23) ^ (v23 ^ v46)) >>> 4) & 1;
                                                                if(!v729 && !v726) {
                                                                    int v732 = v44;
                                                                    *(char*)(v23 + v732) = 48;
                                                                }
                                                                int* ptr4 = (int*)(v21 + 2);
                                                                char v733 = ptr4 == v46;
                                                                char v734 = (int)ptr4 > v46;
                                                                char v735 = __parity__((unsigned char)v46 - (unsigned char)ptr4);
                                                                char v736 = (unsigned int)ptr4 > (unsigned int)v46;
                                                                char v737 = (int)(int*)((int)(int*)((int)(int*)(v46 - (int)ptr4) ^ v46) & (int)(int*)((int)ptr4 ^ v46)) < 0;
                                                                char v738 = (int*)((int)(int*)((int)(int*)((int)(int*)(v46 - (int)ptr4) ^ (int)(int*)((int)ptr4 ^ v46)) >>> 4) & 1);
                                                                if(!v736 && !v733) {
                                                                    int v739 = v44;
                                                                    *(char*)((char*)(v739 + v21) + 2) = 48;
                                                                }
                                                                v23 = v21 + 3;
                                                                v22 = 48;
                                                            }
                                                        }
                                                    }
                                                    v21 = v23;
                                                    goto loc_8055BB0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            v32 = v48;
            char v740 = *(char*)(v32 + v178) ? 0: 1;
            char v741 = *(char*)(v32 + v178) < 0;
            char v742 = __parity__(*(char*)(v32 + v178));
            char v743 = *(unsigned char*)(v32 + v178) < 0;
            char v744 = 0;
            char v745 = 0;
            v23 = (unsigned int)(v740 ? 0: 1) | ((unsigned int)((v23 >>> 8) & 0xFFFFFF) << 8);
            v4 = v740 ? 1: 0;
            char v746 = (unsigned char)v23 < 0;
            char v747 = __parity__((unsigned char)v23);
            char v748 = 0;
            char v749 = 0;
        }
        if(!v4) {
            goto loc_8055840;
        }
        else {
        loc_8055EA3:
            char v750 = v21 ? 0: 1;
            char v751 = v21 < 0;
            char v752 = __parity__((unsigned char)v21);
            char v753 = 0;
            char v754 = 0;
            if(v750) {
                char v755 = param1 == 2;
                char v756 = param1 < 2;
                char v757 = __parity__((unsigned char)param1 - 2);
                char v758 = (unsigned int)param1 < 2;
                char v759 = (((param1 - 2) ^ param1) & (param1 ^ 0x2)) < 0;
                char v760 = (((param1 - 2) ^ (param1 ^ 0x2)) >>> 4) & 1;
                if(v755) {
                    char v761 = v66 ? 0: 1;
                    char v762 = v66 >= 128;
                    char v763 = __parity__(v66);
                    char v764 = v66 < 0;
                    char v765 = 0;
                    v3 = 0;
                    if(!v761) {
                        goto loc_8055D48;
                    }
                }
            }
            int v766 = v19;
            v2 = v766 ? 0: 1;
            char v767 = v766 < 0;
            char v768 = __parity__((unsigned char)v766);
            char v769 = 0;
            char v770 = 0;
        }
        if(!v2) {
            char v771 = v66 ? 0: 1;
            char v772 = v66 >= 128;
            char v773 = __parity__(v66);
            char v774 = v66 < 0;
            char v775 = 0;
            char v776 = 0;
            if(v771) {
                v1 = v19;
                char v777 = *(char*)v1;
                int v778 = 0;
                char v779 = *(char*)v1 ? 0: 1;
                char v780 = v777 < 0;
                char v781 = __parity__(v777);
                char v782 = 0;
                char v783 = 0;
                if(!v779) {
                    int v784 = v44;
                    int v785 = v1;
                    v32 = v46;
                    int v786 = v785;
                    int v787 = v785 - v21;
                    char v788 = v787 ? 0: 1;
                    char v789 = v787 < 0;
                    char v790 = __parity__((unsigned char)v787);
                    char v791 = (((v21 ^ v786) ^ v787) >>> 4) & 1;
                    char v792 = (unsigned int)v21 > (unsigned int)v786;
                    char v793 = ((v787 ^ v786) & (v21 ^ v786)) < 0;
                    v178 = v784;
                    do {
                        char v794 = v32 == v21;
                        char v795 = v32 < v21;
                        char v796 = __parity__((unsigned char)v32 - (unsigned char)v21);
                        char v797 = (unsigned int)v32 < (unsigned int)v21;
                        char v798 = (((v32 - v21) ^ v32) & (v32 ^ v21)) < 0;
                        char v799 = (((v32 - v21) ^ (v32 ^ v21)) >>> 4) & 1;
                        if(!v797 && !v794) {
                            *(char*)(v21 + v178) = v777;
                        }
                        v37 = v21;
                        ++v21;
                        char v800 = v21 ? 0: 1;
                        char v801 = v21 < 0;
                        char v802 = __parity__((unsigned char)v21);
                        char v803 = (((v37 ^ 1) ^ v21) >>> 4) & 1;
                        char v804 = (unsigned int)v37 >= 0xffffffff;
                        char v805 = ((v21 ^ v37) & ~(v37 ^ 1)) < 0;
                        v777 = *(char*)(v787 + v21);
                        v778 = 0;
                        v28 = *(char*)(v787 + v21) ? 0: 1;
                        char v806 = v777 < 0;
                        char v807 = __parity__(v777);
                        char v808 = 0;
                        char v809 = 0;
                    }
                    while(!v28);
                }
            }
        }
        goto loc_8055EFA;
    }
    v23 = 97;
    goto loc_8055DC0;
    if(v932) {
        char v810 = v66 ? 0: 1;
        char v811 = v66 >= 128;
        char v812 = __parity__(v66);
        char v813 = v66 < 0;
        char v814 = 0;
        v3 = 0;
        if(v810) {
            char v815 = v21 == v46;
            char v816 = v21 < v46;
            char v817 = __parity__((unsigned char)v21 - (unsigned char)v46);
            char v818 = (unsigned int)v21 < (unsigned int)v46;
            char v819 = (((v21 - v46) ^ v21) & (v21 ^ v46)) < 0;
            char v820 = (((v21 - v46) ^ (v21 ^ v46)) >>> 4) & 1;
            if(v818) {
                int v821 = v44;
                *(char*)(v821 + v21) = 39;
            }
            unsigned int v822 = (unsigned int)(v21 + 1);
            char v823 = v822 == v46;
            char v824 = (int)v822 > v46;
            char v825 = __parity__((unsigned char)v46 - (unsigned char)v822);
            char v826 = v822 > (unsigned int)v46;
            char v827 = (((v46 - v822) ^ v46) & (v822 ^ v46)) < 0;
            char v828 = (((v46 - v822) ^ (v822 ^ v46)) >>> 4) & 1;
            if(!v826 && !v823) {
                int v829 = v44;
                *(char*)(v829 + v21 + 1) = 92;
            }
            v23 = v21 + 2;
            char v830 = v23 == v46;
            char v831 = v23 > v46;
            char v832 = __parity__((unsigned char)v46 - (unsigned char)v23);
            char v833 = (unsigned int)v23 > (unsigned int)v46;
            char v834 = (((v46 - v23) ^ v46) & (v23 ^ v46)) < 0;
            char v835 = (((v46 - v23) ^ (v23 ^ v46)) >>> 4) & 1;
            if(!v833 && !v830) {
                v23 = v44;
                *(char*)(v23 + v21 + 2) = 39;
            }
            v37 = v21;
            v21 += 3;
            char v836 = v21 ? 0: 1;
            char v837 = v21 < 0;
            char v838 = __parity__((unsigned char)v21);
            char v839 = (((v37 ^ 0x3) ^ v21) >>> 4) & 1;
            char v840 = (unsigned int)v37 >= 0xfffffffd;
            char v841 = ((v21 ^ v37) & ~(v37 ^ 0x3)) < 0;
            goto loc_8055CF8;
            if(!v927) {
                char v842 = v66 ? 0: 1;
                char v843 = v66 >= 128;
                char v844 = __parity__(v66);
                char v845 = v66 < 0;
                char v846 = 0;
                char v847 = 0;
                if(!v842) {
                    char v848 = v20 ? 0: 1;
                    char v849 = v20 < 0;
                    char v850 = __parity__((unsigned char)v20);
                    char v851 = 0;
                    char v852 = 0;
                    if(!v848) {
                        goto loc_8055BF5;
                    }
                }
            }
            char v853 = param1 == 2;
            char v854 = param1 < 2;
            char v855 = __parity__((unsigned char)param1 - 2);
            char v856 = (unsigned int)param1 < 2;
            char v857 = (((param1 - 2) ^ param1) & (param1 ^ 0x2)) < 0;
            char v858 = (((param1 - 2) ^ (param1 ^ 0x2)) >>> 4) & 1;
            if(v853) {
                char v859 = v66 ? 0: 1;
                char v860 = v66 >= 128;
                char v861 = __parity__(v66);
                char v862 = v66 < 0;
                char v863 = 0;
                v3 = 0;
                if(!v859) {
                    goto loc_8055D48;
                }
            }
        loc_8055DC0:
            char v864 = (unsigned char)v177 ? 0: 1;
            char v865 = (unsigned char)v177 < 0;
            char v866 = __parity__((unsigned char)v177);
            char v867 = 0;
            char v868 = 0;
            if(v864) {
                goto loc_8055D00;
            }
            else {
                v22 = v23;
                goto loc_8055BD9;
                if(v922) {
                    v32 = v48;
                    char v869 = *(char*)(v32 + 1) ? 0: 1;
                    char v870 = *(char*)(v32 + 1) < 0;
                    char v871 = __parity__(*(char*)(v32 + 1));
                    char v872 = *(unsigned char*)(v32 + 1) < 0;
                    char v873 = 0;
                    char v874 = 0;
                    v23 = (unsigned int)(v869 ? 0: 1) | ((unsigned int)((v23 >>> 8) & 0xFFFFFF) << 8);
                }
                char v875 = (unsigned char)v23 ? 0: 1;
                char v876 = (unsigned char)v23 < 0;
                char v877 = __parity__((unsigned char)v23);
                char v878 = 0;
                char v879 = 0;
                if(!v875) {
                    goto loc_8055CF8;
                }
                else {
                    char v880 = v178 ? 0: 1;
                    char v881 = v178 < 0;
                    char v882 = __parity__((unsigned char)v178);
                    char v883 = 0;
                    char v884 = 0;
                    if(!v880) {
                        goto loc_8055CF8;
                    }
                    else {
                        char v885 = param1 == 2;
                        char v886 = param1 < 2;
                        char v887 = __parity__((unsigned char)param1 - 2);
                        char v888 = (unsigned int)param1 < 2;
                        char v889 = (((param1 - 2) ^ param1) & (param1 ^ 0x2)) < 0;
                        char v890 = (((param1 - 2) ^ (param1 ^ 0x2)) >>> 4) & 1;
                        if(!v885) {
                            goto loc_8055CF8;
                        }
                        else {
                        loc_8055D3B:
                            char v891 = v66 ? 0: 1;
                            char v892 = v66 >= 128;
                            char v893 = __parity__(v66);
                            char v894 = v66 < 0;
                            char v895 = 0;
                            v3 = 0;
                            if(v891) {
                                goto loc_8055CF8;
                            }
                        }
                    }
                }
            }
        }
        goto loc_8055D48;
    }
    else {
    loc_8055EFA:
        char v896 = v21 == v46;
        char v897 = v21 < v46;
        char v898 = __parity__((unsigned char)v21 - (unsigned char)v46);
        v0 = (unsigned int)v21 < (unsigned int)v46;
        char v899 = (((v21 - v46) ^ v21) & (v21 ^ v46)) < 0;
        v3 = (((v21 - v46) ^ (v21 ^ v46)) >>> 4) & 1;
    }
    if(v0) {
        int v900 = v44;
        *(char*)(v900 + v21) = 0;
    }
loc_8055D96:
    int v901 = v53;
    v35 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v901;
    char v902 = v35 ? 0: 1;
    char v903 = v35 < 0;
    char v904 = __parity__((unsigned char)v35);
    char v905 = 0;
    char v906 = 0;
    result = v21;
    if(!v902) {
        ptr1 = &ptr0;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_8056220(int* param0) {
    size_t v0;
    int* ptr0;
    char v1;
    int v2;
    int v3;
    int* ptr1;
    int* ptr2;
    int v4;
    int* ptr3 = ptr1;
    int* ptr4 = ptr2;
    int* ptr5 = &ptr4;
    char v5 = &ptr0 == 92;
    char v6 = (int)&v3 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 92);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0x4c) ^ (int)&v3) >>> 4) & 1);
    char v9 = (unsigned int)&ptr4 < 76;
    char v10 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&v3) & (int)(int*)((int)&ptr4 ^ 0x4c)) < 0;
    int v11 = v4;
    int* ptr6 = param0;
    int v12 = v2;
    →__errno_location();
    char v13 = ptr3 ? 0: 1;
    char v14 = (int)ptr3 < 0;
    char v15 = __parity__((unsigned char)ptr3);
    char v16 = 0;
    char v17 = 0;
    int v18 = gvar_80622D0;
    int* ptr7 = ptr1;
    int v19 = *ptr1;
    int v20 = *ptr1;
    if(v14) {
        /*NO_RETURN*/ →abort();
    }
    char v21 = gvar_80622D4 == ptr3;
    char v22 = (int)gvar_80622D4 > (int)ptr3;
    char v23 = __parity__((unsigned char)ptr3 - (unsigned char)gvar_80622D4);
    char v24 = gvar_80622D4 > (unsigned int)ptr3;
    char v25 = (int)(int*)((int)(int*)((int)(int*)((int)ptr3 - gvar_80622D4) ^ (int)ptr3) & (int)(int*)(gvar_80622D4 ^ (int)ptr3)) < 0;
    char v26 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 - gvar_80622D4) ^ (int)(int*)(gvar_80622D4 ^ (int)ptr3)) >>> 4) & 1);
    if(!v24) {
        int* ptr8 = (int*)((char*)ptr3 + 1);
        v13 = ptr8 == 0x1fffffff;
        v14 = (int)ptr8 < 0x1fffffff;
        v15 = __parity__((unsigned char)ptr8 - 0xff);
        v17 = (unsigned int)ptr8 < 0x1fffffff;
        v16 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr8 - 0x1fffffff) ^ (int)ptr8) & (int)(int*)((int)ptr8 ^ 0x1fffffff)) < 0;
        v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr8 - 0x1fffffff) ^ (int)(int*)((int)ptr8 ^ 0x1fffffff)) >>> 4) & 1);
        if(!v17 && !v13) {
            /*NO_RETURN*/ sub_8058C00();
        }
        int v27 = (int)ptr8 * 8;
        if(v18 != &gvar_80622D8) {
            int v28 = sub_8058AA0(v18, v27);
            v18 = v28;
            gvar_80622D0 = v28;
        }
        else {
            int v29 = sub_8058AA0(0, v27);
            unsigned int v30 = gvar_80622DC;
            v18 = v29;
            gvar_80622D0 = v29;
            unsigned int v31 = gvar_80622D8;
            *(unsigned int*)(v18 + 4) = v30;
            *(unsigned int*)v18 = v31;
        }
        unsigned int v32 = gvar_80622D4;
        *(int**)&v1 = (int*)((int)(int*)((int)ptr8 - v32) * 8);
        →memset(v32 * 8 + v18, 0, *(int*)&v1);
        gvar_80622D4 = ptr8;
    }
    unsigned int* ptr9 = (unsigned int*)((int)(int*)((int)ptr3 * 8) + v18);
    int v33 = *(ptr6 + 1);
    unsigned int v34 = *ptr9;
    int v35 = (int)(ptr6 + 2);
    int v36 = *(ptr6 + 11);
    void* __ptr = *(void**)(ptr9 + 1);
    unsigned int v37 = v34;
    int v38 = v36;
    int v39 = *(ptr6 + 10);
    *(int*)&v1 = v33 | 1;
    int v40 = v35;
    int v41 = v39;
    int v42 = sub_8055760(v12, *ptr6, v1, v35, v39, v36);
    if((unsigned int)v42 >= v37) {
        size_t v43 = (size_t)(v42 + 1);
        *ptr9 = (size_t)(v42 + 1);
        if(__ptr != 0x8062e00) {
            v0 = v43;
            →free(__ptr);
            v43 = v0;
        }
        v0 = v43;
        void* ptr10 = sub_8058A70(v43);
        *(void**)(ptr9 + 1) = ptr10;
        __ptr = ptr10;
        int v44 = *(ptr6 + 11);
        v38 = *(ptr6 + 11);
        int v45 = *(ptr6 + 10);
        *(int*)&v1 = v33 | 1;
        v41 = v45;
        v40 = v35;
        sub_8055760(v12, *ptr6, v1, v35, v45, v44);
    }
    *ptr7 = v20;
    return (int)__ptr;
}

int sub_80563C0(int param0) {
    int* ptr0;
    int v0;
    int v1 = v0;
    →__errno_location();
    int v2 = *ptr0;
    int result = sub_8058BA0(param0 ? param0: &gvar_8062DC0, 48);
    *ptr0 = v2;
    return result;
}

int sub_8056410(unsigned int* param0) {
    return (int)(param0 ? *param0: gvar_8062DC0);
}

int* sub_8056430(int* param0, int param1) {
    int* result = param0 ? param0: (int*)&gvar_8062DC0;
    *result = param1;
    return result;
}

int sub_8056450(int param0, char param1, int param2) {
    int v0;
    int v1 = v0;
    int v2 = *(int*)((unsigned int)(param1 >>> 5) * 4 + (param0 ? param0: &gvar_8062DC0) + 8);
    int result = (v2 >>> ((unsigned int)param1 & 0x1f)) & 1;
    *(int*)((unsigned int)(param1 >>> 5) * 4 + (param0 ? param0: &gvar_8062DC0) + 8) = (((param2 & 1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v2;
    return result;
}

int sub_8056510(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    int* ptr0;
    int v1;
    int v2 = v1;
    →__errno_location();
    int v3 = *ptr0;
    int v4 = *((param4 ? param4: (int*)&gvar_8062DC0) + 11);
    int v5 = *((param4 ? param4: (int*)&gvar_8062DC0) + 11);
    int v6 = *((param4 ? param4: (int*)&gvar_8062DC0) + 10);
    int v7 = *((param4 ? param4: (int*)&gvar_8062DC0) + 10);
    int v8 = (int)((param4 ? param4: (int*)&gvar_8062DC0) + 2);
    *(int*)&v0 = *((param4 ? param4: (int*)&gvar_8062DC0) + 1);
    int result = sub_8055760(param3, param4 ? *param4: gvar_8062DC0, v0, (int)((param4 ? param4: (int*)&gvar_8062DC0) + 2), v6, v4);
    *ptr0 = v3;
    return result;
}

int sub_8056740(int* param0, int param1) {
    return sub_8056220((int*)&gvar_8062DC0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8056780(int param0) {
    return sub_8056740(0, param0);
}

int sub_80567D0(int param0, unsigned int param1, int param2) {
    char v0;
    int v1;
    sub_80556E0(v1, param1);
    return sub_8056220(&v0);
}

int sub_8056890(int param0, int param1, char param2) {
    unsigned int v0 = gvar_8062DC0;
    unsigned int v1 = gvar_8062DC4;
    unsigned int v2 = gvar_8062DC8;
    unsigned int v3 = gvar_8062DCC;
    unsigned int v4 = gvar_8062DD0;
    unsigned int v5 = gvar_8062DD4;
    unsigned int v6 = gvar_8062DD8;
    unsigned int v7 = gvar_8062DDC;
    unsigned int v8 = gvar_8062DE0;
    unsigned int v9 = gvar_8062DE4;
    unsigned int v10 = gvar_8062DE8;
    unsigned int v11 = gvar_8062DEC;
    int v12 = *(int*)((unsigned int)(param2 >>> 5) * 4 + (int)&v2);
    *(int*)((unsigned int)(param2 >>> 5) * 4 + (int)&v2) = ((((v12 >>> ((unsigned int)param2 & 0x1f)) & 1) ^ 1) << ((unsigned int)param2 & 0x1f)) ^ v12;
    return sub_8056220(&v0);
}

int sub_8056950(int param0, char param1) {
    char v0;
    *(int*)&v0 = (int)param1;
    return sub_8056890(param0, -1, v0);
}

int sub_8056980(int param0) {
    char v0;
    *(int*)&v0 = 58;
    return sub_8056950(param0, ':');
}

int* sub_8056B30(unsigned int param0, int param1) {
    int v0;
    int* result;
    unsigned int counter = param0;
    int v1 = v0;
    if(param0) {
        →__ctype_toupper_loc();
        do {
            *(char*)((char*)((int)result + counter) - 1) = (unsigned char)*(int*)((unsigned int)*(char*)(param1 + counter - 1) * 4 + *result);
            --counter;
        }
        while(counter);
    }
    return result;
}

int sub_8056B70(int par0, int par1, int par2, int par3) {
    // Decompilation error
}

int sub_8058320(int param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    int v1 = v0;
    return sub_8056B70(param2, param3, param4, param5);
}

int sub_8058370(int param0, int param1, int param2, int param3, int* param4, unsigned int param5) {
    int v0;
    int result;
    →__fprintf_chk();
    →dcgettext(0, &gvar_805DA3F, 5);
    →__fprintf_chk();
    →dcgettext(0, "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5);
    →fputs_unlocked(result, param0);
    switch(param5) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            →dcgettext(0, "Written by %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 2: {
            →dcgettext(0, "Written by %s and %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 3: {
            →dcgettext(0, &gvar_805DA6A, 5);
            →__fprintf_chk();
            return result;
        }
        case 4: {
            →dcgettext(0, "Written by %s, %s, %s,\nand %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 5: {
            →dcgettext(0, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 6: {
            →dcgettext(0, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 7: {
            →dcgettext(0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 8: {
            →dcgettext(0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
            →__fprintf_chk();
            return result;
        }
        case 9: {
            v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
            →dcgettext(0, v0, 5);
            →__fprintf_chk();
            return result;
        }
        default: {
            v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
            →dcgettext(0, v0, 5);
            →__fprintf_chk();
            return result;
        }
    }
}

int sub_8058920(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    unsigned int v1 = 0;
    int v2 = param4;
    do {
        int v3 = *(int*)(v1 * 4 + v2);
        *(int*)(v1 * 4 + (int)&v0) = *(int*)(v1 * 4 + v2);
        if(!v3) {
            break;
        }
        else {
            ++v1;
        }
    }
    while(v1 != 10);
    return sub_8058370(param0, param1, param2, param3, &v0, v1);
}

int sub_8058980(int param0, int param1, int param2, int param3) {
    char v0;
    return sub_8058920(param0, param1, param2, param3, &v0);
}

void* sub_8058A70(size_t param0) {
    void* ptr0;
    size_t v0;
    size_t v1 = v0;
    size_t __size = param0;
    void* result = →malloc(__size);
    char v2 = result ? 0: 1;
    if(v2) {
        char v3 = __size ? 0: 1;
        char v4 = __size >= 0x80000000;
        char v5 = __parity__((unsigned char)__size);
        char v6 = 0;
        char v7 = 0;
        if(!v3) {
            int* ptr1 = &ptr0;
            result = (void*)/*NO_RETURN*/ sub_8058C00();
        }
    }
    return result;
}

int sub_8058AA0(int param0, int param1) {
    int* ptr0;
    void* ptr1;
    int result;
    int v0;
    int v1;
    int v2 = v1;
    int* ptr2 = &v2;
    char v3 = &ptr0 == 28;
    char v4 = (int)&v0 < 0;
    char v5 = __parity__((unsigned char)&ptr0 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x18) ^ (int)&v0) >>> 4) & 1);
    char v7 = (unsigned int)&v2 < 24;
    char v8 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v2 ^ 0x18)) < 0;
    int v9 = param1;
    int v10 = param0;
    char v11 = v9 ? 0: 1;
    char v12 = v9 < 0;
    char v13 = __parity__((unsigned char)v9);
    char v14 = 0;
    char v15 = 0;
    if(v11) {
        char v16 = v10 ? 0: 1;
        char v17 = v10 < 0;
        char v18 = __parity__((unsigned char)v10);
        char v19 = 0;
        char v20 = 0;
        if(!v16) {
            →free((void*)v10);
            return 0;
        }
    }
    →realloc(v10, v9);
    char v21 = result ? 0: 1;
    if(v21) {
        char v22 = v9 ? 0: 1;
        char v23 = v9 < 0;
        char v24 = __parity__((unsigned char)v9);
        char v25 = 0;
        char v26 = 0;
        if(!v22) {
            int* ptr3 = &ptr1;
            result = /*NO_RETURN*/ sub_8058C00();
        }
    }
    return result;
}

int sub_8058BA0(int param0, size_t param1) {
    int result;
    void* ptr0 = sub_8058A70(param1);
    →memcpy((int)ptr0, param0, (int)param1);
    return result;
}

int sub_8058BD0(int param0) {
    int v0;
    →strlen(param0);
    return sub_8058BA0(param0, (size_t)(v0 + 1));
}

int sub_8058C00() {
    char v0;
    int v1;
    void* ptr0;
    int v2;
    int* ptr1 = &v0;
    char v3 = &v0 == 28;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&v0 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x1c) ^ (int)&v1) >>> 4) & 1);
    char v7 = (unsigned int)&v0 < 28;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x1c)) < 0;
    →dcgettext(0, "memory exhausted", 5);
    int v9 = gvar_80622CC;
    int v10 = v2;
    →error(v9, 0, 134586815);
    int* ptr2 = &ptr0;
    /*NO_RETURN*/ →abort();
}

int sub_8058C50(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    char v6;
    int* ptr0;
    unsigned char* ptr1;
    int result;
    char v7;
    int* ptr2;
    int v8;
    int v9 = v8;
    int v10 = param2;
    int v11 = param0;
    int v12 = param1;
    if((unsigned int)v10 <= 36) {
        char v13 = *(char*)v11;
        v8 = v12 ? v12: &v7;
        char v14 = v13;
        →__ctype_b_loc();
        int v15 = (int)v14;
        int v16 = *ptr2;
        int v17 = v11;
        while((*(char*)((char*)((int)(int*)((int)(unsigned char*)(unsigned char)v15 * 2) + v16) + 1) & 0x20)) {
            ++v17;
            v15 = (int)*(char*)v17;
        }
        char v18 = (unsigned char)v15 == 45;
        result = 4;
        if(!v18) {
            →__errno_location();
            *ptr2 = 0;
            *(int**)&v14 = ptr2;
            →strtoul(v11, v8, v10);
            ptr1 = *(unsigned char**)v8;
            v15 = *(int*)&v14;
            char v19 = ptr1 == v11;
            ptr0 = ptr2;
            if(!v19) {
                unsigned int v20 = *(unsigned int*)v15;
                result = 0;
                if(!v20) {
                    goto loc_8058CF5;
                }
                else {
                    v6 = v20 == 34;
                    result = 4;
                }
                if(!v6) {
                    return result;
                }
                result = 1;
            loc_8058CF5:
                if(!param4) {
                    *(int**)param3 = ptr0;
                    return result;
                }
                v5 = (unsigned int)*ptr1;
                char v21 = *ptr1;
                if(!*ptr1) {
                    *(int**)param3 = ptr0;
                    return result;
                }
                int v22 = param4;
                int v23 = (int)v21;
                *(unsigned char**)&v14 = ptr1;
                →strchr(v22, v23);
                ptr1 = *(unsigned char**)&v14;
                if(!ptr2) {
                    result |= 2;
                    *(int**)param3 = ptr0;
                    return result;
                }
                goto loc_8058D42;
            }
            if(param4) {
                v5 = (unsigned int)*(char*)v11;
                char v24 = *(char*)v11;
                if(*(char*)v11) {
                    int v25 = param4;
                    int v26 = (int)v24;
                    result = 0;
                    ptr0 = (int*)0x1;
                    *(unsigned char**)&v14 = ptr1;
                    →strchr(v25, v26);
                    ptr1 = *(unsigned char**)&v14;
                    if(!ptr2) {
                        result = 4;
                    }
                    else {
                    loc_8058D42:
                        int v27 = param4;
                        *(unsigned char**)&v14 = ptr1;
                        →strchr(v27, 48);
                        ptr1 = *(unsigned char**)&v14;
                        v4 = 1;
                        v3 = 0x400;
                        if(ptr2) {
                            unsigned char v28 = *(ptr1 + 1);
                            if(*(char*)(ptr1 + 1) == 68 || v28 == 66) {
                                v4 = 2;
                                v3 = 1000;
                            }
                            else if(v28 == 105) {
                                v15 = *(char*)(ptr1 + 2) != 66 ? 1: 3;
                                v4 = *(char*)(ptr1 + 2) != 66 ? 1: 3;
                            }
                        }
                        int v29 = v5 - 66;
                        char v30 = (unsigned char)v29 == 53;
                        if(((unsigned char)v29 < 53 || v30)) {
                            jump gvar_805DD54[(unsigned int)(unsigned char)v29];
                            if((unsigned int)ptr0 <= 0x3fffff) {
                                ptr0 = (int*)((int)ptr0 * 0x400);
                                v2 = 0;
                                ptr1 = (unsigned char*)((int)ptr1 + v4);
                                int v31 = v2 | result;
                                *(unsigned char**)v8 = ptr1;
                                result = *ptr1 ? v31 | 0x2: v31;
                                *(int**)param3 = ptr0;
                                return result;
                                if(v39 >= (unsigned int)ptr0) {
                                    int* ptr3 = (int*)((int)ptr0 * v3);
                                    if(v39 >= (unsigned int)ptr3) {
                                        int* ptr4 = (int*)((int)ptr3 * v3);
                                        if(v39 < (unsigned int)ptr4) {
                                            goto loc_805907C;
                                        }
                                        else {
                                            ptr0 = (int*)((int)ptr4 * v3);
                                            v2 = 0;
                                            ptr1 = (unsigned char*)((int)ptr1 + v4);
                                            int v31 = v2 | result;
                                            *(unsigned char**)v8 = ptr1;
                                            result = *ptr1 ? v31 | 0x2: v31;
                                            *(int**)param3 = ptr0;
                                            return result;
                                        }
                                    }
                                    else {
                                        v33 = 0;
                                    }
                                }
                                ptr0 = (int*)0xFFFFFFFF;
                                v2 = v33 | 1;
                                ptr1 = (unsigned char*)((int)ptr1 + v4);
                                int v31 = v2 | result;
                                *(unsigned char**)v8 = ptr1;
                                result = *ptr1 ? v31 | 0x2: v31;
                                *(int**)param3 = ptr0;
                                return result;
                                if(0xffffffff / v3 < (unsigned int)ptr0) {
                                    ptr0 = (int*)0xFFFFFFFF;
                                    v2 = 1;
                                    ptr1 = (unsigned char*)((int)ptr1 + v4);
                                    int v31 = v2 | result;
                                    *(unsigned char**)v8 = ptr1;
                                    result = *ptr1 ? v31 | 0x2: v31;
                                    *(int**)param3 = ptr0;
                                    return result;
                                    if(v35 >= (unsigned int)ptr0) {
                                        ptr0 = (int*)((int)ptr0 * v3);
                                        if(v35 < (unsigned int)ptr0) {
                                            v2 = 1;
                                            ptr0 = (int*)0xFFFFFFFF;
                                            ptr1 = (unsigned char*)((int)ptr1 + v4);
                                            int v31 = v2 | result;
                                            *(unsigned char**)v8 = ptr1;
                                            result = *ptr1 ? v31 | 0x2: v31;
                                            *(int**)param3 = ptr0;
                                            return result;
                                        }
                                    }
                                }
                                ptr0 = (int*)((int)ptr0 * v3);
                                v2 = 0;
                                ptr1 = (unsigned char*)((int)ptr1 + v4);
                                int v31 = v2 | result;
                                *(unsigned char**)v8 = ptr1;
                                result = *ptr1 ? v31 | 0x2: v31;
                                *(int**)param3 = ptr0;
                                return result;
                                if((unsigned int)ptr0 <= 0x7fffff) {
                                    ptr0 = (int*)((int)ptr0 * 0x200);
                                    v2 = 0;
                                    ptr1 = (unsigned char*)((int)ptr1 + v4);
                                    int v31 = v2 | result;
                                    *(unsigned char**)v8 = ptr1;
                                    result = *ptr1 ? v31 | 0x2: v31;
                                    *(int**)param3 = ptr0;
                                    return result;
                                    if((unsigned int)ptr0 <= 0x7fffffff) {
                                        ptr0 = (int*)((int)ptr0 * 2);
                                        v2 = 0;
                                        ptr1 = (unsigned char*)((int)ptr1 + v4);
                                        int v31 = v2 | result;
                                        *(unsigned char**)v8 = ptr1;
                                        result = *ptr1 ? v31 | 0x2: v31;
                                        *(int**)param3 = ptr0;
                                        return result;
                                    }
                                }
                            }
                            ptr0 = (int*)0xFFFFFFFF;
                            v2 = 1;
                            ptr1 = (unsigned char*)((int)ptr1 + v4);
                            int v31 = v2 | result;
                            *(unsigned char**)v8 = ptr1;
                            result = *ptr1 ? v31 | 0x2: v31;
                            *(int**)param3 = ptr0;
                            return result;
                        }
                        result |= 2;
                        *(int**)param3 = ptr0;
                    }
                }
            }
        }
        return result;
    loc_8058F98:
        do {
            if((unsigned int)ptr0 > v32) {
                ptr0 = (int*)0xFFFFFFFF;
                v5 = 1;
            }
            else {
                ptr0 = (int*)((int)ptr0 * v3);
                v5 = 0;
            }
            v2 |= v5;
            --v36;
            if(!v36) {
                ptr1 = (unsigned char*)((int)ptr1 + v4);
                int v31 = v2 | result;
                *(unsigned char**)v8 = ptr1;
                result = *ptr1 ? v31 | 0x2: v31;
                *(int**)param3 = ptr0;
                return result;
            }
            goto loc_8058F98;
        loc_8058F12:
            do {
                if((unsigned int)ptr0 > v32) {
                    ptr0 = (int*)0xFFFFFFFF;
                    v1 = 1;
                }
                else {
                    ptr0 = (int*)((int)ptr0 * v3);
                    v1 = 0;
                }
                v2 |= v1;
                --v38;
                if(!v38) {
                    ptr1 = (unsigned char*)((int)ptr1 + v4);
                    int v31 = v2 | result;
                    *(unsigned char**)v8 = ptr1;
                    result = *ptr1 ? v31 | 0x2: v31;
                    *(int**)param3 = ptr0;
                    return result;
                }
                goto loc_8058F12;
                do {
                    if((unsigned int)ptr0 <= v32) {
                        ptr0 = (int*)((int)ptr0 * v3);
                        v0 = 0;
                    }
                    else {
                        ptr0 = (int*)0xFFFFFFFF;
                        v0 = 1;
                    }
                    v2 |= v0;
                    --counter;
                }
                while(counter);
                ptr1 = (unsigned char*)((int)ptr1 + v4);
                int v31 = v2 | result;
                *(unsigned char**)v8 = ptr1;
                result = *ptr1 ? v31 | 0x2: v31;
                *(int**)param3 = ptr0;
                return result;
            loc_8058EA3:
                do {
                    if((unsigned int)ptr0 > v32) {
                        ptr0 = (int*)0xFFFFFFFF;
                        v5 = 1;
                    }
                    else {
                        ptr0 = (int*)((int)ptr0 * v3);
                        v5 = 0;
                    }
                    v2 |= v5;
                    --v34;
                    if(!v34) {
                        ptr1 = (unsigned char*)((int)ptr1 + v4);
                        int v31 = v2 | result;
                        *(unsigned char**)v8 = ptr1;
                        result = *ptr1 ? v31 | 0x2: v31;
                        *(int**)param3 = ptr0;
                        return result;
                    }
                    goto loc_8058EA3;
                    do {
                        if((unsigned int)ptr0 > v32) {
                            ptr0 = (int*)0xFFFFFFFF;
                            v5 = 1;
                        }
                        else {
                            ptr0 = (int*)((int)ptr0 * v3);
                            v5 = 0;
                        }
                        v2 |= v5;
                        --v37;
                    }
                    while(!v37);
                }
                while(1);
            }
            while(1);
        }
        while(1);
    }
    else {
        /*NO_RETURN*/ →__assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 83, "xstrtoul");
    loc_805907C:
        ptr0 = (int*)0xFFFFFFFF;
        v2 = 1;
        ptr1 = (unsigned char*)((int)ptr1 + v4);
        int v31 = v2 | result;
        *(unsigned char**)v8 = ptr1;
        result = *ptr1 ? v31 | 0x2: v31;
    }
    *(int**)param3 = ptr0;
    return result;
}

void sub_8059090(unsigned int param0, int param1, char param2, int param3, int param4) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4 = gvar_80622CC;
    char* ptr0 = (char*)param2;
    if(param0 <= 3) {
        v2 = "invalid suffix in %s%s argument `%s\'";
        if(param0 >= 2) {
            goto loc_80590BA;
        }
        if(param0 == 1) {
            v2 = "%s%s argument `%s\' too large";
        loc_80590BA:
            if(param1 >= 0) {
                v1 = &gvar_805DE6D;
                ptr0 = *(unsigned int*)(param1 * 16 + param3);
            }
            else {
                v1 = &gvar_805DE6D - param1;
                v0 = (unsigned char)ptr0;
                ptr0 = &v0;
                char v5 = 0;
            }
            →dcgettext(0, v2, 5);
            char* ptr1 = &v0;
            int v6 = v1;
            int v7 = param4;
            →error(v4, 0, v3);
        }
    loc_8059107:
        /*NO_RETURN*/ →abort();
    }
    v2 = "invalid %s%s argument `%s\'";
    if(param0 != 4) {
        goto loc_8059107;
    }
    else {
        goto loc_80590BA;
    }
}

int sub_8059140(int param0, unsigned int param1) {
    int result;
    unsigned int* ptr0;
    int v0;
    int v1 = v0;
    unsigned int v2 = *ptr0;
    unsigned int v3 = param1;
    unsigned int v4 = *(ptr0 + 1);
    int v5 = sub_8059C90(0xffffffff, 0xffffffff, param1, param1 >> 31);
    char v6 = param1 < v4;
    if((!v6 && param1 != v4) || (!v6 && v2 <= (unsigned int)v5)) {
        param1 = (param1 >> 31) * v2 + v3 * v4 + (unsigned int)(((unsigned long long)v2 * (unsigned long long)v3) >>> 32L);
        *ptr0 = v2 * v3;
        result = 0;
        *(ptr0 + 1) = param1;
    }
    else {
        *ptr0 = -1;
        result = 1;
        *(int*)(ptr0 + 1) = -1;
    }
    return result;
}

int sub_80591F0(int param0, unsigned int param1) {
    int result = 0;
    if(param0) {
        int counter = param0;
        do {
            int v0 = sub_8059140(param0, param1);
            result |= v0;
            --counter;
        }
        while(counter);
    }
    return result;
}

int* sub_8059230(char* param0, unsigned int* param1, unsigned int param2, unsigned int* param3, int param4) {
    int* ptr0;
    int* ptr0;
    int v0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int* ptr0;
    int v1;
    void* ptr1;
    int* ptr2;
    char v2;
    int v3;
    char* ptr3;
    int* ptr4;
    int v4 = v3;
    int* ptr5 = &v4;
    char v5 = &ptr2 == 76;
    char v6 = (int)&ptr3 < 0;
    char v7 = __parity__((unsigned char)&ptr2 - 76);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x3c) ^ (int)&ptr3) >>> 4) & 1);
    char v9 = (unsigned int)&v4 < 60;
    char v10 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr3) & (int)(int*)((int)&v4 ^ 0x3c)) < 0;
    unsigned int v11 = param2;
    char* ptr6 = param0;
    unsigned int* ptr7 = param1;
    char v12 = v11 == 36;
    char v13 = (int)v11 < 36;
    char v14 = __parity__((unsigned char)v11 - 36);
    char v15 = v11 < 36;
    char v16 = (((v11 - 36) ^ v11) & (v11 ^ 0x24)) < 0;
    char v17 = (((v11 - 36) ^ (v11 ^ 0x24)) >>> 4) & 1;
    if(!v15 && !v12) {
        int* ptr8 = &ptr1;
        /*NO_RETURN*/ →__assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 83, "xstrtoumax");
    }
    unsigned int* ptr9 = ptr7 ? ptr7: &v2;
    char v18 = *ptr6;
    →__ctype_b_loc();
    int v19 = (unsigned int)v18;
    int v20 = *ptr4;
    char* ptr10 = ptr6;
    while((*(char*)((char*)((int)(int*)((int)(unsigned int*)(unsigned char)v19 * 2) + v20) + 1) & 0x20)) {
        ++ptr10;
        v19 = (unsigned int)*ptr10;
    }
    int* result = (int*)0x4;
    if((unsigned char)v19 != 45) {
        →__errno_location();
        *ptr4 = 0;
        int v21 = 0;
        unsigned int* ptr11 = ptr9;
        *(int**)&v18 = ptr4;
        →__strtoull_internal();
        char* ptr12 = *ptr9;
        unsigned int* ptr13 = *(unsigned int**)&v18;
        int* ptr14 = ptr4;
        int v22 = v19;
        if(ptr12 != ptr6) {
            ptr13 = *ptr13;
            result = NULL;
            if(!ptr13) {
                goto loc_80592E7;
            }
            else {
                result = (int*)0x4;
            }
            if(ptr13 != 34) {
                return result;
            }
            result = (int*)0x1;
        loc_80592E7:
            if(!param4) {
                ptr13 = param3;
                *ptr13 = ptr0;
                *(int*)(ptr13 + 1) = v19;
                return result;
            }
            goto loc_80592ED;
        }
        if(param4) {
            char v23 = *ptr6;
            if(*ptr6) {
                →strchr(param4, (int)v23);
                if(ptr4) {
                    ptr14 = (int*)0x1;
                    result = NULL;
                    v22 = 0;
                loc_80592ED:
                    char v24 = *ptr12;
                    char v25 = *ptr12;
                    if(v25) {
                        →strchr(param4, (int)v25);
                        if(ptr4) {
                            →strchr(param4, 48);
                            unsigned int v26 = 0x400;
                            int v27 = 1;
                            if(ptr4) {
                                unsigned char v28 = *(unsigned char*)(ptr12 + 1);
                                if(*(ptr12 + 1) == 68 || v28 == 66) {
                                    v27 = 2;
                                    v26 = 1000;
                                }
                                else if(v28 == 105) {
                                    v1 = *(ptr12 + 2) != 66 ? 1: 3;
                                    v27 = *(ptr12 + 2) != 66 ? 1: 3;
                                }
                            }
                            switch(v24) {
                                case 66: {
                                    v0 = sub_8059140(v1, 0x400);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 69: {
                                    v0 = sub_80591F0(6, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 80: {
                                    v0 = sub_80591F0(5, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 89: {
                                    v0 = sub_80591F0(8, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 90: {
                                    v0 = sub_80591F0(7, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 98: {
                                    v0 = sub_8059140(v1, 0x200);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 99: {
                                    v0 = 0;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 71: 
                                case 103: {
                                    v0 = sub_80591F0(3, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 75: 
                                case 107: {
                                    v0 = sub_80591F0(1, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 77: 
                                case 109: {
                                    v0 = sub_80591F0(2, v26);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                case 84: 
                                case 116: {
                                    break;
                                }
                                case 119: {
                                    v0 = sub_8059140(v1, 2);
                                    ptr12 = *ptr9;
                                    unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                                    int* ptr16 = (int*)(v0 | (int)result);
                                    *ptr9 = ptr15;
                                    result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                                    ptr0 = ptr14;
                                    v19 = v22;
                                    ptr13 = param3;
                                    *ptr13 = ptr0;
                                    *(int*)(ptr13 + 1) = v19;
                                    return result;
                                }
                                default: {
                                    goto loc_805940F;
                                }
                            }
                            v0 = sub_80591F0(4, v26);
                            ptr12 = *ptr9;
                            unsigned char* ptr15 = (unsigned char*)((int)ptr12 + v27);
                            int* ptr16 = (int*)(v0 | (int)result);
                            *ptr9 = ptr15;
                            result = *ptr15 ? (int*)((int)ptr16 | 0x2): ptr16;
                            ptr0 = ptr14;
                            v19 = v22;
                            ptr13 = param3;
                            *ptr13 = ptr0;
                            *(int*)(ptr13 + 1) = v19;
                            return result;
                        }
                    loc_805940F:
                        ptr13 = param3;
                        result = (int*)((int)result | 0x2);
                        v19 = v22;
                        *ptr13 = ptr14;
                        *(int*)(ptr13 + 1) = v19;
                    }
                    else {
                        ptr0 = ptr14;
                        v19 = v22;
                        ptr13 = param3;
                        *ptr13 = ptr0;
                        *(int*)(ptr13 + 1) = v19;
                        return result;
                    }
                }
            }
        }
    }
    return result;
}

int* sub_8059550(unsigned char* param0, unsigned int* param1) {
    int v0;
    int* ptr0;
    int v1 = v0;
    unsigned char* ptr1 = param0;
    →getfilecon();
    if(ptr0) {
        char v2 = ptr0 == 10;
        if(v2) {
            unsigned char* ptr2 = "unlabeled";
            int v3 = 10;
            unsigned char* ptr3 = *param1;
            while(v3 != 0) {
                v2 = *ptr3 == *ptr2;
                ++ptr3;
                ++ptr2;
                --v3;
                if(!v2) {
                    break;
                }
            }
            if(v2) {
                →freecon();
                →__errno_location();
                *ptr0 = 61;
            }
        }
    }
    else {
        →__errno_location();
        *ptr0 = 95;
    }
    return (int*)0xFFFFFFFF;
}

int* sub_80595E0(unsigned char* param0, unsigned int* param1) {
    int v0;
    int* ptr0;
    int v1 = v0;
    unsigned char* ptr1 = param0;
    →lgetfilecon();
    if(ptr0) {
        char v2 = ptr0 == 10;
        if(v2) {
            unsigned char* ptr2 = "unlabeled";
            int v3 = 10;
            unsigned char* ptr3 = *param1;
            while(v3 != 0) {
                v2 = *ptr3 == *ptr2;
                ++ptr3;
                ++ptr2;
                --v3;
                if(!v2) {
                    break;
                }
            }
            if(v2) {
                →freecon();
                →__errno_location();
                *ptr0 = 61;
            }
        }
    }
    else {
        →__errno_location();
        *ptr0 = 95;
    }
    return (int*)0xFFFFFFFF;
}

unsigned int sub_8059950(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    char v1;
    unsigned int v2 = param1;
    unsigned int v3 = param3;
    unsigned int v4 = param2;
    unsigned int v5 = param0;
    int v6 = 0;
    if(v2 >= 0x80000000) {
        unsigned int v7 = v5;
        v5 = (unsigned int)(0 - v5);
        v2 = (unsigned int)(0 - (unsigned int)((unsigned int)(v7 > 0) + v2));
        v6 = -1;
    }
    if(v3 >= 0x80000000) {
        unsigned int v8 = v4;
        v4 = (unsigned int)(0 - v4);
        v6 = ~v6;
        v3 = (unsigned int)(0 - (unsigned int)((unsigned int)(v8 > 0) + v3));
    }
    unsigned int v9 = v4;
    if(v3) {
        unsigned int v10 = 0;
        v0 = 0;
        if(v3 <= v2) {
            if(v3 != 0) {
                unsigned int i;
                for(i = 31; !(v3 >>> i); --i) {
                }
                v10 = i;
            }
            v10 ^= 31;
            *(unsigned int*)&v1 = v10;
            if(v10) {
                int v11 = 32 - *(int*)&v1;
                unsigned int v12 = (unsigned int)((v3 << ((unsigned int)v1 & 0x1f)) | (v4 >>> (v11 & 0x1f)));
                int v13 = v4 << ((unsigned int)v1 & 0x1f);
                int v14 = v2 >>> (v11 & 0x1f);
                int v15 = (v2 << ((unsigned int)v1 & 0x1f)) | (v5 >>> (v11 & 0x1f));
                unsigned int v16 = (unsigned int)((unsigned long long)v15 | ((unsigned long long)v14 << 32)) / v12;
                unsigned int v17 = (unsigned int)((unsigned long long)v15 | ((unsigned long long)v14 << 32)) % v12;
                v0 = v16;
                unsigned int v18 = (unsigned int)(((unsigned long long)v16 * (unsigned long long)v13) >>> 32L);
                if(v18 > v17 || (v16 * v13 > v5 << ((unsigned int)v1 & 0x1f) && v18 == v17)) {
                    --v0;
                }
            }
            else if(v4 <= v5 || v3 < v2) {
                v0 = 1;
            }
        }
    }
    else if(v4 > v2) {
        v0 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v2 << 32)) / v4;
    }
    else {
        if(!v4) {
            v9 = 1 / 0;
        }
        v0 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)(v2 % v9) << 32)) / v9;
    }
    unsigned int result = v0;
    if(v6) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

unsigned int sub_8059AC0(int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int result;
    unsigned int v0;
    char v1;
    unsigned int v2 = param3;
    unsigned int v3 = param2;
    unsigned int v4 = param1;
    *(int*)&v1 = param0;
    unsigned int v5 = v2;
    int v6 = 0;
    if(param1 >= 0x80000000) {
        unsigned int v7 = *(unsigned int*)&v1;
        *(int*)&v1 = 0 - *(int*)&v1;
        v4 = (unsigned int)(0 - (unsigned int)((unsigned int)(v7 > 0) + v4));
        v6 = -1;
    }
    if(v5 >= 0x80000000) {
        unsigned int v8 = v3;
        v3 = (unsigned int)(0 - v3);
        v2 = (unsigned int)(0 - (unsigned int)((unsigned int)(v8 > 0) + v2));
    }
    unsigned int v9 = *(unsigned int*)&v1;
    unsigned int v10 = v2;
    unsigned int v11 = v3;
    unsigned int v12 = v4;
    unsigned int v13 = v3;
    unsigned int v14 = v9;
    if(!v10) {
        if(v12 < v3) {
            v0 = (unsigned int)((unsigned long long)v9 | ((unsigned long long)v12 << 32)) % v11;
        }
        else {
            if(!v3) {
                v11 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v14 | ((unsigned long long)(v12 % v11) << 32)) % v11;
        }
        result = v0;
    }
    else if(v10 > v12) {
        result = *(unsigned int*)&v1;
    }
    else {
        if(v10 != 0) {
            unsigned int i;
            for(i = 31; !(v10 >>> i); --i) {
            }
            v3 = i;
        }
        unsigned int v15 = v3 ^ 0x1f;
        if(!v15) {
            if(v11 <= v9 || v10 < v12) {
                v14 -= v11;
            }
            result = v14;
        }
        else {
            *(int*)&v1 = 32;
            *(int*)&v1 = *(int*)&v1 - v15;
            unsigned int v16 = (unsigned int)((v10 << (v15 & 0x1f)) | (v13 >>> ((unsigned int)v1 & 0x1f)));
            v13 <<= v15 & 0x1f;
            int v17 = (v12 << (v15 & 0x1f)) | (v9 >>> ((unsigned int)v1 & 0x1f));
            unsigned int v18 = v9 << (v15 & 0x1f);
            int v19 = v12 >>> ((unsigned int)v1 & 0x1f);
            unsigned int v20 = (unsigned int)((unsigned long long)v17 | ((unsigned long long)v19 << 32)) / v16;
            unsigned int v21 = (unsigned int)((unsigned long long)v17 | ((unsigned long long)v19 << 32)) % v16;
            unsigned int v22 = v20 * v13;
            unsigned int v23 = (unsigned int)(((unsigned long long)v20 * (unsigned long long)v13) >>> 32L);
            unsigned int v24 = v22;
            unsigned int v25 = v23;
            if(v21 < v23 || (v22 > v18 && v21 == v23)) {
                v24 = v22 - v13;
                v25 = v23 - ((unsigned int)(v22 < v13) + v16);
            }
            result = (unsigned int)(((v21 - ((unsigned int)(v24 > v18) + v25)) << ((unsigned int)v1 & 0x1f)) | ((v18 - v24) >>> (v15 & 0x1f)));
        }
    }
    if(v6) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int sub_8059C90(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    char v1;
    unsigned int v2 = param2;
    *(unsigned int*)&v1 = param0;
    if(param3) {
        v0 = 0;
        if(param1 >= param3) {
            if(param3 != 0) {
                unsigned int i;
                for(i = 31; !(param3 >>> i); --i) {
                }
                v2 = i;
            }
            v2 ^= 31;
            *(unsigned int*)&v1 = v2;
            if(v2) {
                unsigned int v3 = (unsigned int)(32 - *(int*)&v1);
                unsigned int v4 = (unsigned int)((param3 << ((unsigned int)v1 & 0x1f)) | (param2 >>> (v3 & 0x1f)));
                int v5 = param2 << ((unsigned int)v1 & 0x1f);
                int v6 = param1 >>> (v3 & 0x1f);
                int v7 = (param1 << ((unsigned int)v1 & 0x1f)) | (param0 >>> (v3 & 0x1f));
                unsigned int v8 = (unsigned int)((unsigned long long)v7 | ((unsigned long long)v6 << 32)) / v4;
                unsigned int v9 = (unsigned int)((unsigned long long)v7 | ((unsigned long long)v6 << 32)) % v4;
                unsigned int v10 = (unsigned int)(((unsigned long long)v8 * (unsigned long long)v5) >>> 32L);
                if(v10 <= v9 && (v8 * v5 <= param0 << ((unsigned int)v1 & 0x1f) || v10 != v9)) {
                    v0 = v8;
                }
                else {
                    return v8 - 1;
                }
            }
            else if(param0 >= param2 || param1 > param3) {
                v0 = 1;
            }
        }
    }
    else if(v2 <= param1) {
        if(!v2) {
            v2 = 1 / 0;
        }
        v0 = (unsigned int)((unsigned long long)*(int*)&v1 | ((unsigned long long)(param1 % v2) << 32)) / v2;
    }
    else {
        return (int)((unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) / v2);
    }
    return (int)v0;
}

unsigned int sub_8059DC0(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int result;
    char v0;
    unsigned int result2 = param0;
    unsigned int v1 = param2;
    unsigned int v2 = result2;
    unsigned int result1 = result2;
    if(!param3) {
        if(v1 > param1) {
            result = (unsigned int)((unsigned long long)result2 | ((unsigned long long)param1 << 32)) % v1;
        }
        else {
            if(!v1) {
                v1 = 1 / 0;
            }
            result = (unsigned int)((unsigned long long)result1 | ((unsigned long long)(param1 % v1) << 32)) % v1;
        }
        return result;
    }
    else if(param1 >= param3) {
        if(param3 != 0) {
            unsigned int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            result2 = i;
        }
        *(int*)&v0 = result2 ^ 0x1f;
        if(!(result2 ^ 0x1f)) {
            if(v1 <= result1 || param1 > param3) {
                result1 -= v1;
            }
            return result1;
        }
        int v3 = 32 - *(int*)&v0;
        result1 = (unsigned int)((param3 << ((unsigned int)v0 & 0x1f)) | (v1 >>> (v3 & 0x1f)));
        unsigned int v4 = v1 << ((unsigned int)v0 & 0x1f);
        int v5 = param1 >>> (v3 & 0x1f);
        int v6 = (param1 << ((unsigned int)v0 & 0x1f)) | (v2 >>> (v3 & 0x1f));
        unsigned int v7 = (unsigned int)((unsigned long long)v6 | ((unsigned long long)v5 << 32)) / result1;
        v2 <<= (unsigned int)v0 & 0x1f;
        unsigned int v8 = (unsigned int)((unsigned long long)v6 | ((unsigned long long)v5 << 32)) % result1;
        unsigned int v9 = v7 * v4;
        unsigned int v10 = (unsigned int)(((unsigned long long)v7 * (unsigned long long)v4) >>> 32L);
        unsigned int v11 = v9;
        unsigned int v12 = v10;
        if(v10 > v8 || (v9 > v2 && v10 == v8)) {
            v11 = v9 - v4;
            v12 = v10 - ((unsigned int)(v9 < v4) + result1);
        }
        return (unsigned int)(((v8 - ((unsigned int)(v11 > v2) + v12)) << (v3 & 0x1f)) | ((v2 - v11) >>> ((unsigned int)v0 & 0x1f)));
    }
    return result2;
}

void sub_8059FB2() {
}

int sub_8059FC0(int param0) {
    int result;
    →__cxa_atexit();
    return result;
}

unsigned int sub_805A000() {
    int v0;
    int v1 = v0;
    unsigned int v2 = gvar_8061EF8;
    if(v2 != -1) {
        unsigned int* ptr0 = (unsigned int*)&gvar_8061EF8;
        do {
            --ptr0;
            v2();
            v2 = *ptr0;
        }
        while(v2 != -1);
    }
    return -1;
}
