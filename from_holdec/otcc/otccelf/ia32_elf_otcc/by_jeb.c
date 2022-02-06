
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    int v1;
    char v2;
    int v3 = v0;
    int* ptr0 = &v2;
    int* ptr1 = &v1;
    int v4 = sub_804B4A3(v3, (int)&v2);
    int v5 = v4;
    int v6 = 1;
    interrupt(128);
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
        result = gvar_8048108 != 2 ? 0: 1;
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
    return gvar_8048108 == 95 ? v0 | 0x1: v0;
}

int sub_804835A() {
    int result = gvar_8048108 != 92 ? 0: 1;
    if(result) {
        sub_8048283();
        result = gvar_8048108 != 110 ? 0: 1;
        if(result) {
            result = 10;
            gvar_8048108 = 10;
        }
    }
    return result;
}

unsigned int sub_80483B9() {
    void* ptr0;
    unsigned int v0;
    unsigned int result;
    for(int i = 134513622((int)gvar_8048108); (gvar_8048108 == 35 ? i | 0x1: i); i = 134513622((int)gvar_8048108)) {
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
    int v1 = sub_8048311();
    if(v1) {
        sub_8048261(32);
        gvar_8048138 = gvar_804812C;
        for(int j = sub_8048311(); j; j = sub_8048311()) {
            sub_8048261(gvar_8048108);
            sub_8048283();
        }
        int v2 = 134514151((int)gvar_80480FC);
        if(v2) {
            unsigned int v3 = (unsigned int)134514213((int)gvar_8048138, 0, 0);
            gvar_8048100 = v3;
            result = 2;
            gvar_80480FC = 2;
        }
        else {
            *gvar_804812C = 32;
            v0 = gvar_8048128;
            int v4 = 134514304();
            gvar_80480FC = (unsigned int)(0 - (gvar_8048128 - v4));
            *gvar_804812C = 0;
            gvar_80480FC = (unsigned int)(gvar_80480FC * 8 + 0x100);
            result = (int)gvar_80480FC <= 536 ? 0: 1;
            if(result) {
                gvar_80480FC = (int*)((int)gvar_804810C + gvar_80480FC);
                result = *gvar_80480FC != 1 ? 0: 1;
                if(result) {
                    void* ptr1 = gvar_80480FC;
                    ptr0 = gvar_80480FC;
                    gvar_8048130 = *(unsigned int*)((int)ptr1 + 4);
                    gvar_8048134 = gvar_8048108;
                    sub_8048283();
                    result = (unsigned int)sub_80483B9();
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
            result = sub_8048283();
        }
        else {
            ptr0 = gvar_80480FC != 47 ? NULL: (void*)0x1;
            v0 = gvar_8048108;
            if((v0 == 42 ? (int*)((int)ptr0 & 0x1): NULL)) {
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
                return (unsigned int)sub_80483B9();
            }
            char* ptr2 = "++#m--%am*@R<^1c/@%[_[H3c%@%[_[H3c+@.B#d-@%:_^BKd<<Z/03e>>`/03e<=0f>=/f<@.f>@1f==&g!=\'g&&k||#l&@.BCh^@.BSi|@.B+j~@/%Yd!@&d*@b";
            while(1) {
                char* ptr3 = ptr2;
                ++ptr2;
                result = (unsigned int)*ptr3;
                unsigned int v5 = (unsigned int)*ptr3;
                if(result) {
                    char* ptr4 = ptr2;
                    ++ptr2;
                    void* ptr5 = (void*)*ptr4;
                    gvar_8048100 = 0;
                    while(1) {
                        char* ptr6 = ptr2;
                        ++ptr2;
                        unsigned int v6 = (unsigned int)(0 - (unsigned int)(98 - (int)*ptr6));
                        gvar_8048104 = (unsigned int)(0 - (unsigned int)(98 - (int)*ptr6));
                        if(v6 < 0x80000000) {
                            break;
                        }
                        else {
                            ptr0 = (void*)(gvar_8048100 * 64 + gvar_8048104);
                            gvar_8048100 = (int*)((int)ptr0 + 64);
                        }
                    }
                    ptr0 = gvar_80480FC != v5 ? NULL: (void*)0x1;
                    v0 = gvar_8048108 != ptr5 ? 0: 1;
                    void* ptr7 = ptr5;
                    if(!(int*)((ptr7 == 64 ? v0 | 0x1: v0) & (int)ptr0)) {
                        continue;
                    }
                    else {
                        result = gvar_8048108 != ptr5 ? 0: 1;
                        if(result) {
                            sub_8048283();
                            result = 1;
                            gvar_80480FC = 1;
                            return result;
                        }
                    }
                }
                return result;
            }
        }
    }
    return result;
}

int sub_80489E7(unsigned int param0) {
    while(param0 && param0 != -1) {
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
    int result = param1 >> 24;
    *param0 = (unsigned char)result;
    return result;
}

int* sub_8048AF6(char* param0) {
    int v0 = (unsigned int)*param0;
    char* ptr0 = param0;
    int v1 = ((unsigned int)*(param0 + 1) * 0x100) | v0;
    v2 = ((unsigned int)*(param0 + 2) * 0x10000) | v1;
    return (int*)((int)(int*)((int)(char*)*(param0 + 3) * 0x1000000) | v2);
}

char* sub_8048B93(char* param0, unsigned int param1) {
    while(param0) {
        int* ptr0 = sub_8048AF6(param0);
        char* ptr1 = param0;
        if(param0[-1] != 5) {
            sub_8048A71(param0, 0 - (int)(int*)(4 - (int)(int*)(0 - (int)(int*)((int)param0 - param1))));
        }
        else if((int)gvar_804813C <= (int)param1 && (int)gvar_8048120 > (int)param1) {
            sub_8048A71(param0, (int)(gvar_8048144 + param1));
        }
        else {
            sub_8048A71(param0, (int)(gvar_8048144 - (gvar_8048114 - param1) + gvar_8048140));
        }
        param0 = (char*)ptr0;
    }
    return 0;
}

char* sub_8048D31(char* param0) {
    return sub_8048B93(param0, gvar_8048118);
}

int sub_8048D67(unsigned int param0, int param1) {
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
    return sub_8048D67((unsigned int)(param0 + 132), param1);
}

int sub_8048EB7(int param0) {
    sub_80489E7(49465);
    sub_8048DE7(0);
    sub_80489E7(15);
    sub_80489E7((unsigned int)(param0 + 144));
    return sub_80489E7(192);
}

int sub_8048F5D(int param0, int* param1) {
    int result;
    sub_80489E7((unsigned int)(param0 + 131));
    int v0 = *param1;
    if(v0 && v0 < 0x200) {
        result = sub_8048D67(133, v0);
    }
    else {
        ++param1;
        int* ptr0 = param1;
        int v1 = 5;
        result = sub_8048D67(5, *param1);
        *ptr0 = result;
    }
    return result;
}

int sub_804905B(int i) {
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
                sub_80489E7((unsigned int)v0);
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
                sub_80489E7(ptr0 != 0x100 ? 0x188: 393);
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
            if((gvar_80480FC == 61 ? i & 0x1: 0)) {
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
    int result = gvar_80480FC != 40 ? 0: 1;
    if(result) {
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
            i += 4;
        }
        else {
            ++ptr0;
            int v3 = (int)ptr0;
            int* ptr2 = (int*)0xE8;
            int v4 = sub_8048D67(232, ptr0[0]);
            *(int*)v3 = v4;
        }
        result = i;
        if(result) {
            result = sub_8048D67(50305, i);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049882(unsigned int param0) {
    int v0;
    int result;
    unsigned int v1 = param0;
    --param0;
    if(v1 == 1) {
        result = sub_804905B(1);
    }
    else {
        sub_8049882((int)param0);
        int v2 = 0;
        while(gvar_8048104 == param0) {
            unsigned int v3 = gvar_80480FC;
            v0 = gvar_8048100;
            sub_80483B9();
            if((int)param0 > 8) {
                v2 = sub_8048E56(v0, v2);
                sub_8049882((int)param0);
            }
            else {
                sub_80489E7(80);
                sub_8049882((int)param0);
                sub_80489E7(89);
                if(((param0 != 5 ? 0: 1) | (param0 != 4 ? 0: 1))) {
                    sub_8048EB7(v0);
                }
                else {
                    sub_80489E7((unsigned int)v0);
                    if(v3 == 37) {
                        sub_80489E7(146);
                    }
                }
            }
        }
        result = !v2 || (int)param0 <= 8 ? 0: 1;
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

char* sub_8049C29(void* param0) {
    char* result;
    int v0;
    int v1;
    if(gvar_80480FC == 288) {
        sub_80483B9();
        sub_80483B9();
        v1 = sub_8049BE5();
        sub_80483B9();
        sub_8049C29((int)param0);
        if(gvar_80480FC == 312) {
            sub_80483B9();
            v0 = sub_8048E1C(0);
            sub_8048D31((char*)v1);
            sub_8049C29((int)param0);
            result = sub_8048D31((char*)v0);
        }
        else {
            result = sub_8048D31((char*)v1);
        }
    }
    else {
        int v2 = gvar_80480FC != 352 ? 0: 1;
        void* ptr0 = gvar_80480FC;
        if((ptr0 == 504 ? v2 | 0x1: v2)) {
            int v3 = gvar_80480FC;
            sub_80483B9();
            sub_80483B9();
            if(v3 == 352) {
                v0 = gvar_8048118;
                v1 = sub_8049BE5();
            }
            else {
                if(gvar_80480FC != 59) {
                    sub_8049BBD();
                }
                sub_80483B9();
                v0 = gvar_8048118;
                v1 = 0;
                if(gvar_80480FC != 59) {
                    v1 = sub_8049BE5();
                }
                sub_80483B9();
                if(gvar_80480FC != 41) {
                    v3 = sub_8048E1C(0);
                    sub_8049BBD();
                    sub_8048E1C(0 - (unsigned int)(5 - (0 - (gvar_8048118 - v0))));
                    sub_8048D31((char*)v3);
                    v0 = v3 + 4;
                }
            }
            sub_80483B9();
            sub_8049C29((int)&v1);
            sub_8048E1C(0 - (unsigned int)(5 - (0 - (gvar_8048118 - v0))));
            result = sub_8048D31((char*)v1);
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
                    void* ptr1 = param0;
                    int v4 = sub_8048E1C(*(int*)param0);
                    *(int*)ptr1 = v4;
                    break;
                }
                case 448: {
                    sub_80483B9();
                    if(gvar_80480FC != 59) {
                        sub_8049BBD();
                    }
                    int v5 = sub_8048E1C(gvar_8048110);
                    gvar_8048110 = v5;
                    break;
                }
                default: {
                    if(gvar_80480FC != 59) {
                        sub_8049BBD();
                    }
                    break;
                }
            }
            result = (char*)sub_80483B9();
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A170(unsigned int param0) {
    while((((gvar_80480FC == -1 ? 0: 1) & (param0 != 0 ? 0: 1)) | (gvar_80480FC != 0x100 ? 0: 1))) {
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
                    sub_80483B9();
                }
            }
            sub_80483B9();
        }
        else {
            *gvar_80480FC = gvar_8048118;
            sub_80483B9();
            sub_80483B9();
            int v0 = 8;
            while(gvar_80480FC != 41) {
                *gvar_80480FC = v0;
                v0 += 4;
                sub_80483B9();
                if(gvar_80480FC == 44) {
                    sub_80483B9();
                }
            }
            sub_80483B9();
            gvar_804811C = 0;
            gvar_8048110 = 0;
            sub_80489E7(0xe58955);
            v0 = sub_8048D67(60545, 0);
            sub_8049C29(0);
            sub_8048D31(gvar_8048110);
            sub_80489E7(50121);
            sub_8048A71((char*)v0, gvar_804811C);
        }
    }
    return 0;
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

int sub_804A570(char* param0) {
    char* ptr0;
    char* ptr1;
    int* ptr2 = NULL;
    int* ptr3 = gvar_8048128;
loc_804A5A3:
    ptr3 = (int*)((char*)ptr3 + 1);
    int* ptr4 = ptr3;
    while(*(char*)&ptr3[0] != 32) {
        ptr1 = (char*)ptr3;
        if((int)gvar_804812C <= (int)ptr1) {
            break;
        }
        else {
            ptr3 = (int*)((char*)ptr3 + 1);
        }
    }
    int result = gvar_804812C != ptr3 ? 0: 1;
    if(!result) {
        unsigned int v0 = gvar_804810C;
        void* ptr5 = (void*)(0 - (int)(int*)(gvar_8048128 - (int)ptr4));
        gvar_80480FC = (int*)(0 - (int)(int*)(8 - (int)(char*)((int*)((int)(int*)((int)ptr5 * 8) + v0) + 64)));
        unsigned int v1 = *gvar_80480FC;
        ptr1 = gvar_80480FC;
        ptr0 = *(int*)&ptr1[4];
        if(ptr0) {
            ptr1 = (char*)v1;
            if(ptr1 != 1) {
                if(v1 == 0) {
                    if(param0 == 0) {
                        unsigned int v2 = gvar_8048120;
                        ptr5 = ptr4;
                        134522723();
                        ptr1 = (char*)(0 - (int)(int*)((int)ptr4 - (int)(int*)(gvar_8048120 + (int)ptr3)));
                        gvar_8048120 = (int*)(ptr1 + 1);
                    }
                    else {
                        ptr1 = param0;
                        if(param0 == 1) {
                            sub_804A46F((int)((char*)ptr2 + 22));
                            sub_804A46F(0);
                            sub_804A46F(0);
                            sub_804A46F(16);
                            ptr1 = (char*)(0 - (int)(int*)((int)ptr4 - (int)(int*)((int)ptr2 + (int)ptr3)));
                            ptr2 = (int*)(ptr1 + 1);
                        }
                        else {
                            ptr2 = (int*)((char*)ptr2 + 1);
                            goto loc_804A87F;
                        }
                    }
                }
                else if(param0 == 0) {
                    sub_8048B93(ptr0, v1);
                }
            }
        }
        goto loc_804A5A3;
    }
    else {
        return result;
    loc_804A87F:
        while(1) {
            if(!ptr0) {
                goto loc_804A5A3;
            }
            else {
                ptr4 = sub_8048AF6(ptr0);
                ptr1 = ptr0;
                unsigned int v3 = ptr0[-1] == 5 ? 0: 1;
                sub_8048A71(ptr0, (0 - v3) * 4);
                sub_804A46F((int)(int*)(gvar_8048144 - (int)(int*)(gvar_8048114 - (int)ptr0)) + gvar_8048140);
                sub_804A46F((int)((char*)((int)(int*)((int)ptr2 * 0x100) + v3) + 1));
                ptr0 = (char*)ptr4;
            }
        }
    }
}

int sub_804A9F0(int param0) {
    gvar_8048140 = gvar_8048120;
    int v0 = 0 - (gvar_8048114 - gvar_8048118);
    gvar_8048118 = gvar_8048114;
    sub_80489E7(0x505458);
    unsigned int v1 = gvar_804810C;
    unsigned int v2 = gvar_804810C;
    int v3 = *(int*)(v1 + 592);
    sub_8048D67(232, 0 - (unsigned int)(5 - (0 - (gvar_8048118 - v3))));
    sub_80489E7(50057);
    sub_8048DE7(1);
    sub_80489E7(32973);
    gvar_8048120 += v0;
    unsigned int v4 = gvar_8048120;
    ++gvar_8048120;
    int v5 = 134523716((int)gvar_8048120, "libc.so.6");
    gvar_8048120 = (unsigned int)(v5 + 10);
    int v6 = 134523773((int)gvar_8048120, "libdl.so.2");
    gvar_8048120 = (unsigned int)(v6 + 11);
    sub_804A570(NULL);
    int v7 = 0 - (v4 - gvar_8048120);
    gvar_8048120 = (unsigned int)((gvar_8048120 + 3) & 0xfffffffc);
    unsigned int v8 = gvar_8048120;
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A46F(0);
    sub_804A570((char*)0x1);
    unsigned int v9 = gvar_8048120;
    int v10 = (0 - (v8 - gvar_8048120)) / 16;
    sub_804A46F(1);
    sub_804A46F(v10);
    sub_804A46F(1);
    sub_804A46F(0);
    v3 = 2;
    while((((v3 - v10) ^ v3) & (v3 ^ v10)) < 0 != v3 < v10) {
        int v11 = v3;
        ++v3;
        sub_804A46F(v11);
    }
    sub_804A46F(0);
    unsigned int v12 = gvar_8048120;
    /*BAD_CALL!*/ sub_804A570((char*)0x2);
    134524412((int)gvar_8048140, (int)gvar_8048114, v0);
    unsigned int v13 = gvar_8048120;
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
    sub_804A4BA(0, 0 - (gvar_804813C - v13));
    sub_804A46F(7);
    sub_804A46F(0x1000);
    sub_804A46F(2);
    sub_804A4BA(164, 88);
    sub_804A46F(6);
    sub_804A46F(4);
    int v14 = 134525234((int)gvar_8048120, "/lib/ld-linux.so.2");
    gvar_8048120 = (unsigned int)(v14 + 20);
    sub_804A46F(1);
    sub_804A46F(1);
    sub_804A46F(1);
    sub_804A46F(11);
    sub_804A46F(4);
    sub_804A46F((int)(gvar_8048144 + v9));
    sub_804A46F(6);
    sub_804A46F((int)(gvar_8048144 + v8));
    sub_804A46F(5);
    sub_804A46F((int)(gvar_8048144 + v4));
    sub_804A46F(10);
    sub_804A46F(v7);
    sub_804A46F(11);
    sub_804A46F(16);
    sub_804A46F(17);
    sub_804A46F((int)(gvar_8048144 + v12));
    sub_804A46F(18);
    sub_804A46F(0 - (v12 - v13));
    sub_804A46F(19);
    sub_804A46F(8);
    sub_804A46F(0);
    sub_804A46F(0);
    v3 = 134525987(param0, &gvar_80481F4);
    134526073();
    return 134526103(v3);
}

int sub_804B4A3(int* param0, int* param1) {
    if((int)param0 < 3) {
        134526174("usage: otccelf file.c outfile\n");
    }
    else {
        unsigned int v0 = (unsigned int)134526231(1, 99999);
        gvar_8048128 = v0;
        int v1 = 134526267((int)v0, " int if else while break return for define main ");
        gvar_804812C = (unsigned int)(v1 + 48);
        unsigned int v2 = (unsigned int)134526323(1, 99999);
        gvar_804813C = v2;
        gvar_8048120 = v2;
        unsigned int v3 = (unsigned int)134526376(1, 99999);
        gvar_8048114 = v3;
        gvar_8048118 = v3;
        unsigned int v4 = (unsigned int)134526429(1, 99999);
        gvar_804810C = v4;
        int* ptr0 = param1;
        ++param1;
        unsigned int v5 = (unsigned int)134526500(*param1, &gvar_804824C);
        gvar_8048124 = v5;
        gvar_8048144 = (unsigned int)(0 - (gvar_804813C - &ELFHeader));
        gvar_8048120 += 252;
        gvar_8048118 += 17;
        sub_8048283();
        sub_80483B9();
        sub_804A170(0);
        ptr0 = param1;
        sub_804A9F0(*(param1 + 1));
    }
    return 0;
}
