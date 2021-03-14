
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    char v1;
    sub_804B4A3(v0, (int)&v1);
    128 = int(128);
}

int sub_8048261(int param0) {
    char* ptr0 = gvar_804812C;
    ++gvar_804812C;
    int result = param0;
    *ptr0 = (unsigned char)result;
    return result;
}

unsigned int sub_8048283() {
    unsigned int result;
    if(gvar_8048130) {
        char* ptr0 = gvar_8048130;
        ++gvar_8048130;
        gvar_8048108 = (unsigned int)*ptr0;
        result = gvar_8048108 == 2 ? 1: 0;
        if(result) {
            gvar_8048130 = 0;
            result = gvar_8048134;
            gvar_8048108 = gvar_8048134;
        }
    }
    else {
        result = (unsigned int)134513407((int)gvar_8048124);
        gvar_8048108 = result;
    }
    return result;
}

int sub_8048311() {
    int v0 = 134513454((int)gvar_8048108);
    return (gvar_8048108 == 95 ? 1: 0) | v0;
}

int sub_804835A() {
    int result = gvar_8048108 == 92 ? 1: 0;
    if(result) {
        sub_8048283();
        result = gvar_8048108 == 110 ? 1: 0;
        if(result) {
            result = 10;
            gvar_8048108 = 10;
        }
    }
    return result;
}

unsigned int sub_80483B9() {
    unsigned int result;
    for(void* i = (void*)134513622((int)gvar_8048108); (int*)((gvar_8048108 == 35 ? 1: 0) | (int)i); i = (void*)134513622((int)gvar_8048108)) {
        if(gvar_8048108 == 35) {
            sub_8048283();
            sub_80483B9();
            if(gvar_80480FC == 536) {
                sub_80483B9();
                sub_8048261(32);
                *gvar_80480FC = 1;
                *(unsigned int*)(gvar_80480FC + 4) = gvar_804812C;
            }
            while(gvar_8048108 != 10) {
                sub_8048261(gvar_8048108);
                sub_8048283();
            }
            sub_8048261(gvar_8048108);
            sub_8048261(2);
        }
        sub_8048283();
    }
    gvar_8048104 = 0;
    gvar_80480FC = gvar_8048108;
    int v0 = sub_8048311();
    if(v0) {
        sub_8048261(32);
        gvar_8048138 = gvar_804812C;
        for(int j = sub_8048311(); j; j = sub_8048311()) {
            sub_8048261(gvar_8048108);
            sub_8048283();
        }
        int v1 = 134514151((int)gvar_80480FC);
        if(v1) {
            result = (unsigned int)134514213((int)gvar_8048138, 0, 0);
            gvar_8048100 = result;
            gvar_80480FC = 2;
        }
        else {
            *gvar_804812C = 32;
            int v2 = 134514304();
            gvar_80480FC = (unsigned int)(0 - (gvar_8048128 - v2));
            *gvar_804812C = 0;
            gvar_80480FC = (unsigned int)(gvar_80480FC * 8 + 0x100);
            if((int)gvar_80480FC > 536) {
                gvar_80480FC = (int*)((int)gvar_804810C + gvar_80480FC);
                if(*gvar_80480FC == 1) {
                    gvar_8048130 = *(unsigned int*)(gvar_80480FC + 4);
                    gvar_8048134 = gvar_8048108;
                    sub_8048283();
                    sub_80483B9();
                }
            }
        }
    }
    else {
        sub_8048283();
        if(gvar_80480FC == 39) {
            gvar_80480FC = 2;
            sub_804835A();
            gvar_8048100 = gvar_8048108;
            sub_8048283();
            sub_8048283();
        }
        else {
            void* ptr0 = gvar_80480FC == 47 ? (void*)0x1: NULL;
            unsigned int v3 = gvar_8048108;
            if((int*)((v3 == 42 ? 1: 0) & (int)ptr0)) {
                sub_8048283();
                while(gvar_8048108) {
                    while(gvar_8048108 != 42) {
                        sub_8048283();
                    }
                    sub_8048283();
                    if(gvar_8048108 == 47) {
                        gvar_8048108 = 0;
                    }
                }
                sub_8048283();
                sub_80483B9();
                return result;
            }
            char* ptr1 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!=\'g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
            while(1) {
                char* ptr2 = ptr1;
                ++ptr1;
                unsigned int v4 = (unsigned int)*ptr2;
                unsigned int v5 = (unsigned int)*ptr2;
                if(v4) {
                    char* ptr3 = ptr1;
                    ++ptr1;
                    void* ptr4 = (void*)*ptr3;
                    gvar_8048100 = 0;
                    while(1) {
                        char* ptr5 = ptr1;
                        ++ptr1;
                        unsigned int v6 = (unsigned int)(0 - (98 - (int)*ptr5));
                        gvar_8048104 = (unsigned int)(0 - (98 - (int)*ptr5));
                        if(v6 < 0x80000000) {
                            break;
                        }
                        else {
                            ptr0 = (void*)(gvar_8048100 * 64 + gvar_8048104);
                            gvar_8048100 = (int*)((int)ptr0 + 64);
                        }
                    }
                    ptr0 = gvar_80480FC == v5 ? (void*)0x1: NULL;
                    v3 = gvar_8048108 == ptr4 ? 1: 0;
                    void* ptr6 = ptr4;
                    if(!(int*)(((ptr6 == 64 ? 1: 0) | v3) & (int)ptr0)) {
                        continue;
                    }
                    else if(gvar_8048108 == ptr4) {
                        sub_8048283();
                        gvar_80480FC = 1;
                        return result;
                    }
                }
                return result;
            }
        }
    }
    return result;
}

int sub_80489E7(int param0) {
    while((!param0 || param0 == -1) == 0) {
        char* ptr0 = gvar_8048118;
        ++gvar_8048118;
        *ptr0 = (unsigned char)param0;
        param0 >>= 8;
    }
    return 0;
}

int sub_8048A71(char* param0, int param1) {
    char* ptr0 = param0;
    ++param0;
    *ptr0 = (unsigned char)param1;
    char* ptr1 = param0;
    ++param0;
    *ptr1 = (unsigned char)(param1 >>> 8);
    char* ptr2 = param0;
    ++param0;
    *ptr2 = (unsigned char)(param1 >>> 16);
    *param0 = (unsigned char)(param1 >>> 24);
    return param1 >> 24;
}

void sub_8048AF6() {
    // Decompilation error
}

int sub_8048B93(char* param0, int param1) {
    int result;
    while(param0) {
        char* ptr0 = (char*)sub_8048AF6((int)param0);
        char* ptr1 = param0;
        if(param0[-1] != 5) {
            sub_8048A71(param0, 0 - (int)(int*)(4 - (int)(int*)(0 - (int)(int*)((int)param0 - param1))));
        }
        else if((gvar_804813C > param1 || gvar_8048120 <= param1) == 0) {
            result = sub_8048A71(param0, (int)(gvar_8048144 + param1));
        }
        else {
            sub_8048A71(param0, gvar_8048140 - (gvar_8048114 - param1) + gvar_8048144);
        }
        param0 = ptr0;
    }
    return result;
}

int sub_8048D31(char* param0) {
    return sub_8048B93(param0, gvar_8048118);
}

int sub_8048D67(int param0, int param1) {
    sub_80489E7(param0);
    sub_8048A71(gvar_8048118, param1);
    param1 = gvar_8048118;
    gvar_8048118 += 4;
    return param1;
}

int sub_8048DE7(int param0) {
    return sub_8048D67(184, param0);
}

int sub_8048E1C(int param0) {
    return sub_8048D67(233, param0);
}

int sub_8048E56(int param0, int param1) {
    sub_80489E7(1032325);
    return sub_8048D67(param0 + 132, param1);
}

int sub_8048EB7(int param0) {
    sub_80489E7(49465);
    sub_8048DE7(0);
    sub_80489E7(15);
    sub_80489E7(param0 + 144);
    return sub_80489E7(192);
}

int sub_8048F5D(int param0, int* param1) {
    int result;
    sub_80489E7(param0 + 131);
    int v0 = *param1;
    if((!v0 || v0 >= 0x200) == 0) {
        result = sub_8048D67(133, v0);
    }
    else {
        ++param1;
        int* ptr0 = param1;
        result = sub_8048D67(5, *param1);
        *ptr0 = result;
    }
    return result;
}

int sub_804905B(int i) {
    int result;
    int* ptr0;
    int v0;
    int v1 = 1;
    if(gvar_80480FC == 34) {
        sub_8048DE7((int)(gvar_8048120 + gvar_8048144));
        while(gvar_8048108 != 34) {
            sub_804835A();
            char* ptr1 = gvar_8048120;
            ++gvar_8048120;
            *ptr1 = (unsigned char)gvar_8048108;
            sub_8048283();
        }
        *gvar_8048120 = 0;
        gvar_8048120 = (unsigned int)((gvar_8048120 + 4) & 0xfffffffc);
        sub_8048283();
        sub_80483B9();
    }
    else {
        unsigned int v2 = gvar_8048104;
        v0 = gvar_8048100;
        ptr0 = gvar_80480FC;
        sub_80483B9();
        if(ptr0 == 2) {
            sub_8048DE7(v0);
        }
        else if(v2 == 2) {
            sub_804905B(0);
            sub_8048D67(185, 0);
            if(ptr0 == 33) {
                sub_8048EB7(v0);
            }
            else {
                sub_80489E7(v0);
            }
        }
        else if(ptr0 == 38) {
            sub_8048F5D(10, gvar_80480FC);
            sub_80483B9();
        }
        else if(ptr0 == 40) {
            sub_8049BBD();
            sub_80483B9();
        }
        else if(ptr0 == 42) {
            sub_80483B9();
            ptr0 = gvar_80480FC;
            sub_80483B9();
            sub_80483B9();
            if(gvar_80480FC == 42) {
                sub_80483B9();
                sub_80483B9();
                sub_80483B9();
                sub_80483B9();
                ptr0 = NULL;
            }
            sub_80483B9();
            sub_804905B(0);
            if(gvar_80480FC == 61) {
                sub_80483B9();
                sub_80489E7(80);
                sub_8049BBD();
                sub_80489E7(89);
                int v3 = 0x188;
                int* ptr2 = ptr0;
                sub_80489E7((ptr2 == 0x100 ? 1: 0) + 0x188);
            }
            else if(ptr0) {
                if(ptr0 == 0x100) {
                    sub_80489E7(139);
                }
                else {
                    sub_80489E7(48655);
                }
                ++gvar_8048118;
            }
        }
        else {
            v1 = 0;
            if(((gvar_80480FC == 61 ? 1: 0) & i)) {
                sub_80483B9();
                sub_8049BBD();
                sub_8048F5D(6, ptr0);
            }
            else if(gvar_80480FC != 40) {
                sub_8048F5D(8, ptr0);
                if(gvar_8048104 == 11) {
                    sub_8048F5D(0, ptr0);
                    sub_80489E7(gvar_8048100);
                    sub_80483B9();
                }
            }
        }
    }
    if(gvar_80480FC == 40) {
        if(v1) {
            sub_80489E7(80);
        }
        v0 = sub_8048D67(60545, 0);
        sub_80483B9();
        for(i = 0; gvar_80480FC != 41; i += 4) {
            sub_8049BBD();
            sub_8048D67(2393225, i);
            if(gvar_80480FC == 44) {
                sub_80483B9();
            }
        }
        sub_8048A71((char*)v0, i);
        sub_80483B9();
        if(v1) {
            sub_8048D67(0x2494ff, i);
            result = i + 4;
            i += 4;
        }
        else {
            ++ptr0;
            int v4 = (int)ptr0;
            int v5 = sub_8048D67(232, ptr0[0]);
            *(int*)v4 = v5;
        }
        if(i) {
            sub_8048D67(50305, i);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049882(int param0) {
    int v0;
    int result;
    int v1 = param0;
    --param0;
    if(v1 == 1) {
        result = sub_804905B(1);
    }
    else {
        sub_8049882(param0);
        int v2 = 0;
        while(gvar_8048104 == param0) {
            unsigned int v3 = gvar_80480FC;
            v0 = gvar_8048100;
            sub_80483B9();
            if(param0 > 8) {
                v2 = sub_8048E56(v0, v2);
                sub_8049882(param0);
            }
            else {
                sub_80489E7(80);
                sub_8049882(param0);
                sub_80489E7(89);
                if(((param0 == 5 ? 1: 0) | (param0 == 4 ? 1: 0))) {
                    sub_8048EB7(v0);
                }
                else {
                    sub_80489E7(v0);
                    if(v3 == 37) {
                        sub_80489E7(146);
                    }
                }
            }
        }
        result = v2 && param0 > 8 ? 1: 0;
        if(result) {
            v2 = sub_8048E56(v0, v2);
            sub_8048DE7(v0 ^ 0x1);
            sub_8048E1C(5);
            sub_8048D31((char*)v2);
            result = sub_8048DE7(v0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049BBD() {
    return sub_8049882(11);
}

int sub_8049BE5() {
    sub_8049BBD();
    return sub_8048E56(0, 0);
}

int sub_8049C29(void* param0) {
    int result;
    char* ptr0;
    char* ptr1;
    if(gvar_80480FC == 288) {
        sub_80483B9();
        sub_80483B9();
        ptr1 = (char*)sub_8049BE5();
        sub_80483B9();
        sub_8049C29((int)param0);
        if(gvar_80480FC == 312) {
            sub_80483B9();
            ptr0 = (char*)sub_8048E1C(0);
            sub_8048D31(ptr1);
            sub_8049C29((int)param0);
            result = sub_8048D31(ptr0);
        }
        else {
            result = sub_8048D31(ptr1);
        }
    }
    else {
        void* ptr2 = gvar_80480FC == 352 ? (void*)0x1: NULL;
        unsigned int v0 = gvar_80480FC;
        if((int*)((v0 == 504 ? 1: 0) | (int)ptr2)) {
            char* ptr3 = gvar_80480FC;
            sub_80483B9();
            sub_80483B9();
            if(ptr3 == 352) {
                ptr0 = gvar_8048118;
                ptr1 = (char*)sub_8049BE5();
            }
            else {
                if(gvar_80480FC != 59) {
                    sub_8049BBD();
                }
                sub_80483B9();
                ptr0 = gvar_8048118;
                ptr1 = NULL;
                if(gvar_80480FC != 59) {
                    ptr1 = (char*)sub_8049BE5();
                }
                sub_80483B9();
                if(gvar_80480FC != 41) {
                    ptr3 = (char*)sub_8048E1C(0);
                    sub_8049BBD();
                    sub_8048E1C(0 - (int)(int*)(5 - (int)(int*)(0 - (int)(int*)(gvar_8048118 - (int)ptr0))));
                    sub_8048D31(ptr3);
                    ptr0 = ptr3 + 4;
                }
            }
            sub_80483B9();
            sub_8049C29((int)&ptr1);
            sub_8048E1C(0 - (int)(int*)(5 - (int)(int*)(0 - (int)(int*)(gvar_8048118 - (int)ptr0))));
            result = sub_8048D31(ptr1);
        }
        else {
            switch(gvar_80480FC) {
                case 123: {
                    sub_80483B9();
                    sub_804A170(1);
                    while(gvar_80480FC != 125) {
                        sub_8049C29((int)param0);
                    }
                    break;
                }
                case 400: {
                    sub_80483B9();
                    ptr2 = param0;
                    int v1 = sub_8048E1C(*(int*)param0);
                    *(int*)ptr2 = v1;
                    break;
                }
                case 448: {
                    sub_80483B9();
                    if(gvar_80480FC != 59) {
                        sub_8049BBD();
                    }
                    int v2 = sub_8048E1C(gvar_8048110);
                    gvar_8048110 = v2;
                    break;
                }
                default: {
                    if(gvar_80480FC != 59) {
                        sub_8049BBD();
                    }
                    break;
                }
            }
            result = (int)sub_80483B9();
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_804A170(int param0) {
    unsigned int result;
    while((((gvar_80480FC == -1 ? 0: 1) & (param0 == 0 ? 1: 0)) | (gvar_80480FC == 0x100 ? 1: 0))) {
        if(gvar_80480FC == 0x100) {
            sub_80483B9();
            while(gvar_80480FC != 59) {
                if(param0) {
                    gvar_804811C += 4;
                    *gvar_80480FC = 0 - gvar_804811C;
                }
                else {
                    *gvar_80480FC = gvar_8048120;
                    gvar_8048120 += 4;
                }
                sub_80483B9();
                if(gvar_80480FC == 44) {
                    result = sub_80483B9();
                }
            }
            sub_80483B9();
        }
        else {
            *gvar_80480FC = gvar_8048118;
            sub_80483B9();
            sub_80483B9();
            char* ptr0 = (char*)0x8;
            while(gvar_80480FC != 41) {
                *gvar_80480FC = ptr0;
                ptr0 += 4;
                sub_80483B9();
                if(gvar_80480FC == 44) {
                    sub_80483B9();
                }
            }
            sub_80483B9();
            gvar_804811C = 0;
            gvar_8048110 = 0;
            sub_80489E7(0xe58955);
            ptr0 = (char*)sub_8048D67(60545, 0);
            sub_8049C29(0);
            sub_8048D31(gvar_8048110);
            sub_80489E7(50121);
            sub_8048A71(ptr0, gvar_804811C);
        }
    }
    return result;
}

unsigned int sub_804A46F(int param0) {
    sub_8048A71(gvar_8048120, param0);
    unsigned int result = gvar_8048120 + 4;
    gvar_8048120 += 4;
    return result;
}

unsigned int sub_804A4BA(int param0, int param1) {
    sub_804A46F(param0);
    param0 += &ELFHeader;
    sub_804A46F(param0);
    sub_804A46F(param0);
    sub_804A46F(param1);
    return sub_804A46F(param1);
}

int sub_804A570(int param0) {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    int v3 = 0;
    char* ptr1 = gvar_8048128;
loc_804A5A3:
    ++ptr1;
    char* ptr2 = ptr1;
    while(1) {
        v2 = (int)ptr1[0];
        if(v2 != 32) {
            v2 = (int)ptr1;
            if(gvar_804812C > v2) {
                v1 = 1;
                goto loc_804A609;
            }
        }
        v1 = 0;
    loc_804A609:
        if(!v1) {
            break;
        }
        else {
            ++ptr1;
        }
    }
    if(gvar_804812C != ptr1) {
        v2 = gvar_804810C;
        char* ptr3 = (char*)(0 - (int)(int*)(gvar_8048128 - (int)ptr2));
        gvar_80480FC = (int*)(0 - (int)(int*)(8 - (int)((int*)((int)(int*)((int)ptr3 * 8) + v2) + 64)));
        int v4 = *gvar_80480FC;
        v2 = gvar_80480FC;
        ptr0 = *(char**)(v2 + 4);
        if(ptr0) {
            v2 = v4;
            if(v2 == 1) {
                goto loc_804A6E2;
            }
            else {
                v0 = 1;
            }
        }
        else {
        loc_804A6E2:
            v0 = 0;
        }
        if(v0) {
            if(v4 == 0) {
                if(param0 == 0) {
                    unsigned int v5 = gvar_8048120;
                    ptr3 = ptr2;
                    134522723();
                    v2 = 0 - (int)(int*)((int)ptr2 - (int)(int*)(gvar_8048120 + (int)ptr1));
                    gvar_8048120 = (unsigned int)(v2 + 1);
                }
                else {
                    v2 = param0;
                    if(v2 == 1) {
                        sub_804A46F(v3 + 22);
                        sub_804A46F(0);
                        sub_804A46F(0);
                        sub_804A46F(16);
                        v2 = 0 - (int)(int*)((int)ptr2 - (int)(int*)(v3 + (int)ptr1));
                        v3 = v2 + 1;
                    }
                    else {
                        ++v3;
                        goto loc_804A87F;
                    }
                }
            }
            else if(param0 == 0) {
                sub_8048B93(ptr0, v4);
            }
        }
        goto loc_804A5A3;
    }
    else {
        return 0;
    loc_804A87F:
        while(1) {
            if(!ptr0) {
                goto loc_804A5A3;
            }
            else {
                ptr2 = (char*)sub_8048AF6((int)ptr0);
                v2 = (int)ptr0;
                int v6 = ptr0[-1] == 5 ? 0: 1;
                sub_8048A71(ptr0, (0 - v6) * 4);
                sub_804A46F((int)(int*)(gvar_8048140 - (int)(int*)(gvar_8048114 - (int)ptr0)) + gvar_8048144);
                sub_804A46F(v3 * 0x100 + v6 + 1);
                ptr0 = ptr2;
            }
        }
    }
}

int sub_804A9F0(int param0) {
    gvar_8048140 = gvar_8048120;
    int v0 = 0 - (gvar_8048114 - gvar_8048118);
    gvar_8048118 = gvar_8048114;
    sub_80489E7(0x505458);
    int v1 = *(int*)(gvar_804810C + 592);
    sub_8048D67(232, 0 - (5 - (0 - (gvar_8048118 - v1))));
    sub_80489E7(50057);
    sub_8048DE7(1);
    sub_80489E7(32973);
    gvar_8048120 += v0;
    unsigned int v2 = gvar_8048120;
    ++gvar_8048120;
    int v3 = 134523716((int)gvar_8048120, "libc.so.6");
    gvar_8048120 = (unsigned int)(v3 + 10);
    int v4 = 134523773((int)gvar_8048120, "libdl.so.2");
    gvar_8048120 = (unsigned int)(v4 + 11);
    sub_804A570(0);
    int v5 = 0 - (v2 - gvar_8048120);
    gvar_8048120 = (unsigned int)((gvar_8048120 + 3) & 0xfffffffc);
    unsigned int v6 = gvar_8048120;
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A570(1);
    unsigned int v7 = gvar_8048120;
    int v8 = (0 - (v6 - gvar_8048120)) / 16;
    sub_804A46F(1);
    sub_804A46F(v8);
    sub_804A46F(1);
    sub_804A46F(0);
    v1 = 2;
    while(v1 < v8) {
        int v9 = v1;
        ++v1;
        sub_804A46F(v9);
    }
    sub_804A46F(0);
    unsigned int v10 = gvar_8048120;
    sub_804A570(2);
    134524412((int)gvar_8048140, (int)gvar_8048114, v0);
    unsigned int v11 = gvar_8048120;
    gvar_8048120 = gvar_804813C;
    sub_804A46F(1179403647);
    sub_804A46F(0x10101);
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A46F(0x30002);
    sub_804A46F(1);
    sub_804A46F((int)(gvar_8048144 + gvar_8048140));
    sub_804A46F(48);
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A46F(0x200034);
    sub_804A46F(3);
    sub_804A46F(3);
    sub_804A4BA(144, 19);
    sub_804A46F(4);
    sub_804A46F(1);
    sub_804A46F(1);
    sub_804A4BA(0, 0 - (gvar_804813C - v11));
    sub_804A46F(7);
    sub_804A46F(0x1000);
    sub_804A46F(2);
    sub_804A4BA(164, 88);
    sub_804A46F(6);
    sub_804A46F(4);
    int v12 = 134525234((int)gvar_8048120, "/lib/ld-linux.so.2");
    gvar_8048120 = (unsigned int)(v12 + 20);
    sub_804A46F(1);
    sub_804A46F(1);
    sub_804A46F(1);
    sub_804A46F(11);
    sub_804A46F(4);
    sub_804A46F((int)(gvar_8048144 + v7));
    sub_804A46F(6);
    sub_804A46F((int)(gvar_8048144 + v6));
    sub_804A46F(5);
    sub_804A46F((int)(gvar_8048144 + v2));
    sub_804A46F(10);
    sub_804A46F(v5);
    sub_804A46F(11);
    sub_804A46F(16);
    sub_804A46F(17);
    sub_804A46F((int)(gvar_8048144 + v10));
    sub_804A46F(18);
    sub_804A46F(0 - (v10 - v11));
    sub_804A46F(19);
    sub_804A46F(8);
    sub_804A46F(0);
    sub_804A46F(0);
    v1 = 134525987(param0, &gvar_80481F4);
    134526073();
    return 134526103(v1);
}

int sub_804B4A3(int param0, int* param1) {
    int v0 = param0;
    if(param0 < 3) {
        134526174("usage: otccelf file.c outfile\n");
    }
    else {
        unsigned int v1 = (unsigned int)134526231(1, 99999);
        gvar_8048128 = v1;
        int v2 = 134526267((int)v1, " int if else while break return for define main ");
        gvar_804812C = (unsigned int)(v2 + 48);
        unsigned int v3 = (unsigned int)134526323(1, 99999);
        gvar_804813C = v3;
        gvar_8048120 = v3;
        unsigned int v4 = (unsigned int)134526376(1, 99999);
        gvar_8048114 = v4;
        gvar_8048118 = v4;
        unsigned int v5 = (unsigned int)134526429(1, 99999);
        gvar_804810C = v5;
        ++param1;
        unsigned int v6 = (unsigned int)134526500(*param1, &gvar_804824C);
        gvar_8048124 = v6;
        gvar_8048144 = (unsigned int)(0 - (gvar_804813C - &ELFHeader));
        gvar_8048120 += 252;
        gvar_8048118 += 17;
        sub_8048283();
        sub_80483B9();
        sub_804A170(0);
        sub_804A9F0(*(param1 + 1));
    }
    return 0;
}
