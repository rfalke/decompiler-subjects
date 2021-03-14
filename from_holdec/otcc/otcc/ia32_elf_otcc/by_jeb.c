
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    char v1;
    sub_804A1A4(v0, (int)&v1);
    128 = int(128);
}

int sub_8048205(int param0) {
    char* ptr0 = gvar_804812C;
    ++gvar_804812C;
    int result = param0;
    *ptr0 = (unsigned char)result;
    return result;
}

unsigned int sub_8048227() {
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
        result = (unsigned int)134513315((int)gvar_8048124);
        gvar_8048108 = result;
    }
    return result;
}

int sub_80482B5() {
    int v0 = 134513362((int)gvar_8048108);
    return (gvar_8048108 == 95 ? 1: 0) | v0;
}

int sub_80482FE() {
    int result = gvar_8048108 == 92 ? 1: 0;
    if(result) {
        sub_8048227();
        result = gvar_8048108 == 110 ? 1: 0;
        if(result) {
            result = 10;
            gvar_8048108 = 10;
        }
    }
    return result;
}

unsigned int sub_804835D() {
    unsigned int result;
    for(void* i = (void*)134513530((int)gvar_8048108); (int*)((gvar_8048108 == 35 ? 1: 0) | (int)i); i = (void*)134513530((int)gvar_8048108)) {
        if(gvar_8048108 == 35) {
            sub_8048227();
            sub_804835D();
            if(gvar_80480FC == 536) {
                sub_804835D();
                sub_8048205(32);
                *gvar_80480FC = 1;
                *(unsigned int*)(gvar_80480FC + 4) = gvar_804812C;
            }
            while(gvar_8048108 != 10) {
                sub_8048205(gvar_8048108);
                sub_8048227();
            }
            sub_8048205(gvar_8048108);
            sub_8048205(2);
        }
        sub_8048227();
    }
    gvar_8048104 = 0;
    gvar_80480FC = gvar_8048108;
    int v0 = sub_80482B5();
    if(v0) {
        sub_8048205(32);
        gvar_8048138 = gvar_804812C;
        for(int j = sub_80482B5(); j; j = sub_80482B5()) {
            sub_8048205(gvar_8048108);
            sub_8048227();
        }
        int v1 = 134514059((int)gvar_80480FC);
        if(v1) {
            result = (unsigned int)134514121((int)gvar_8048138, 0, 0);
            gvar_8048100 = result;
            gvar_80480FC = 2;
        }
        else {
            *gvar_804812C = 32;
            int v2 = 134514212();
            gvar_80480FC = (unsigned int)(0 - (gvar_8048128 - v2));
            *gvar_804812C = 0;
            gvar_80480FC = (unsigned int)(gvar_80480FC * 8 + 0x100);
            if((int)gvar_80480FC > 536) {
                gvar_80480FC = (int*)(gvar_80480FC + (int)gvar_804810C);
                if(*gvar_80480FC == 1) {
                    gvar_8048130 = *(unsigned int*)(gvar_80480FC + 4);
                    gvar_8048134 = gvar_8048108;
                    sub_8048227();
                    sub_804835D();
                }
            }
        }
    }
    else {
        sub_8048227();
        if(gvar_80480FC == 39) {
            gvar_80480FC = 2;
            sub_80482FE();
            gvar_8048100 = gvar_8048108;
            sub_8048227();
            sub_8048227();
        }
        else {
            void* ptr0 = gvar_80480FC == 47 ? (void*)0x1: NULL;
            unsigned int v3 = gvar_8048108;
            if((int*)((v3 == 42 ? 1: 0) & (int)ptr0)) {
                sub_8048227();
                while(gvar_8048108) {
                    while(gvar_8048108 != 42) {
                        sub_8048227();
                    }
                    sub_8048227();
                    if(gvar_8048108 == 47) {
                        gvar_8048108 = 0;
                    }
                }
                sub_8048227();
                sub_804835D();
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
                        sub_8048227();
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

int sub_804898B(int param0) {
    while((!param0 || param0 == -1) == 0) {
        char* ptr0 = gvar_8048118;
        ++gvar_8048118;
        *ptr0 = (unsigned char)param0;
        param0 >>= 8;
    }
    return 0;
}

unsigned int* sub_8048A15(unsigned int* param0) {
    while(param0) {
        unsigned int* ptr0 = *param0;
        unsigned int* ptr1 = param0;
        int* ptr2 = (int*)(0 - (int)(int*)((int)param0 - gvar_8048118));
        *ptr1 = (int*)(0 - (int)(int*)(4 - (int)ptr2));
        param0 = ptr0;
    }
    return 0;
}

unsigned int sub_8048A74(int param0, unsigned int param1) {
    sub_804898B(param0);
    *gvar_8048118 = param1;
    param1 = gvar_8048118;
    gvar_8048118 += 4;
    return param1;
}

unsigned int sub_8048AD9(unsigned int param0) {
    return sub_8048A74(184, param0);
}

unsigned int sub_8048B0E(unsigned int param0) {
    return sub_8048A74(233, param0);
}

unsigned int sub_8048B48(int param0, unsigned int param1) {
    sub_804898B(1032325);
    return sub_8048A74(param0 + 132, param1);
}

int sub_8048BA9(int param0) {
    sub_804898B(49465);
    sub_8048AD9(0);
    sub_804898B(15);
    sub_804898B(param0 + 144);
    return sub_804898B(192);
}

unsigned int sub_8048C4F(int param0, unsigned int param1) {
    sub_804898B(param0 + 131);
    return sub_8048A74((((int)param1 < 0x200 ? 1: 0) * 128) | 0x5, param1);
}

unsigned int sub_8048CD0(unsigned int i) {
    unsigned int result;
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3 = 1;
    if(gvar_80480FC == 34) {
        sub_8048AD9(gvar_8048120);
        while(gvar_8048108 != 34) {
            sub_80482FE();
            char* ptr0 = gvar_8048120;
            ++gvar_8048120;
            *ptr0 = (unsigned char)gvar_8048108;
            sub_8048227();
        }
        *gvar_8048120 = 0;
        gvar_8048120 = (unsigned int)((gvar_8048120 + 4) & 0xfffffffc);
        sub_8048227();
        sub_804835D();
    }
    else {
        unsigned int v4 = gvar_8048104;
        v2 = gvar_8048100;
        v1 = gvar_80480FC;
        sub_804835D();
        if(v1 == 2) {
            sub_8048AD9(v2);
        }
        else if(v4 == 2) {
            sub_8048CD0(0);
            sub_8048A74(185, 0);
            if(v1 == 33) {
                sub_8048BA9((int)v2);
            }
            else {
                sub_804898B((int)v2);
            }
        }
        else if(v1 == 40) {
            sub_80498E4();
            sub_804835D();
        }
        else if(v1 == 42) {
            sub_804835D();
            v1 = gvar_80480FC;
            sub_804835D();
            sub_804835D();
            if(gvar_80480FC == 42) {
                sub_804835D();
                sub_804835D();
                sub_804835D();
                sub_804835D();
                v1 = 0;
            }
            sub_804835D();
            sub_8048CD0(0);
            if(gvar_80480FC == 61) {
                sub_804835D();
                sub_804898B(80);
                sub_80498E4();
                sub_804898B(89);
                int v5 = 0x188;
                unsigned int v6 = v1;
                sub_804898B((v6 == 0x100 ? 1: 0) + 0x188);
            }
            else if(v1) {
                if(v1 == 0x100) {
                    sub_804898B(139);
                }
                else {
                    sub_804898B(48655);
                }
                ++gvar_8048118;
            }
        }
        else {
            v0 = v1;
            if(v1 == 38) {
                sub_8048C4F(10, *gvar_80480FC);
                sub_804835D();
            }
            else {
                v3 = *(unsigned int*)v1;
                if(v3 == 0) {
                    v3 = (unsigned int)134517202(0, (int)gvar_8048138);
                }
                if(((gvar_80480FC == 61 ? 1: 0) & i)) {
                    sub_804835D();
                    sub_80498E4();
                    sub_8048C4F(6, v3);
                }
                else if(gvar_80480FC != 40) {
                    sub_8048C4F(8, v3);
                    if(gvar_8048104 == 11) {
                        sub_8048C4F(0, v3);
                        sub_804898B(gvar_8048100);
                        sub_804835D();
                    }
                }
            }
        }
    }
    if(gvar_80480FC == 40) {
        if(v3 == 1) {
            sub_804898B(80);
        }
        v2 = sub_8048A74(60545, 0);
        sub_804835D();
        for(i = 0; gvar_80480FC != 41; i += 4) {
            sub_80498E4();
            sub_8048A74(2393225, i);
            if(gvar_80480FC == 44) {
                sub_804835D();
            }
        }
        *(unsigned int*)v2 = i;
        sub_804835D();
        switch(v3) {
            case 0: {
                v1 += 4;
                v0 = v1;
                result = sub_8048A74(232, *(unsigned int*)v1);
                *(unsigned int*)v0 = result;
                break;
            }
            case 1: {
                sub_8048A74(0x2494ff, i);
                i += 4;
                break;
            }
            default: {
                sub_8048A74(232, (unsigned int)(0 - (5 - (0 - (gvar_8048118 - v3)))));
                break;
            }
        }
        if(i) {
            sub_8048A74(50305, i);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_80495A9(int param0) {
    int v0;
    unsigned int result;
    int v1 = param0;
    --param0;
    if(v1 == 1) {
        result = (unsigned int)sub_8048CD0(1);
    }
    else {
        sub_80495A9(param0);
        unsigned int v2 = 0;
        while(gvar_8048104 == param0) {
            unsigned int v3 = gvar_80480FC;
            v0 = gvar_8048100;
            sub_804835D();
            if(param0 > 8) {
                v2 = sub_8048B48(v0, v2);
                sub_80495A9(param0);
            }
            else {
                sub_804898B(80);
                sub_80495A9(param0);
                sub_804898B(89);
                if(((param0 == 5 ? 1: 0) | (param0 == 4 ? 1: 0))) {
                    sub_8048BA9(v0);
                }
                else {
                    sub_804898B(v0);
                    if(v3 == 37) {
                        sub_804898B(146);
                    }
                }
            }
        }
        result = v2 && param0 > 8 ? 1: 0;
        if(result) {
            v2 = sub_8048B48(v0, v2);
            sub_8048AD9((unsigned int)(v0 ^ 0x1));
            sub_8048B0E(5);
            sub_8048A15((unsigned int*)v2);
            result = sub_8048AD9((unsigned int)v0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80498E4() {
    return sub_80495A9(11);
}

unsigned int sub_804990C() {
    sub_80498E4();
    return sub_8048B48(0, 0);
}

unsigned int* sub_8049950(void* param0) {
    unsigned int* result;
    unsigned int* ptr0;
    unsigned int* ptr1;
    if(gvar_80480FC == 288) {
        sub_804835D();
        sub_804835D();
        ptr1 = (unsigned int*)sub_804990C();
        sub_804835D();
        sub_8049950((int)param0);
        if(gvar_80480FC == 312) {
            sub_804835D();
            ptr0 = (unsigned int*)sub_8048B0E(0);
            sub_8048A15(ptr1);
            sub_8049950((int)param0);
            result = sub_8048A15(ptr0);
        }
        else {
            result = sub_8048A15(ptr1);
        }
    }
    else {
        void* ptr2 = gvar_80480FC == 352 ? (void*)0x1: NULL;
        unsigned int v0 = gvar_80480FC;
        if((int*)((v0 == 504 ? 1: 0) | (int)ptr2)) {
            unsigned int* ptr3 = gvar_80480FC;
            sub_804835D();
            sub_804835D();
            if(ptr3 == 352) {
                ptr0 = gvar_8048118;
                ptr1 = (unsigned int*)sub_804990C();
            }
            else {
                if(gvar_80480FC != 59) {
                    sub_80498E4();
                }
                sub_804835D();
                ptr0 = gvar_8048118;
                ptr1 = NULL;
                if(gvar_80480FC != 59) {
                    ptr1 = (unsigned int*)sub_804990C();
                }
                sub_804835D();
                if(gvar_80480FC != 41) {
                    ptr3 = (unsigned int*)sub_8048B0E(0);
                    sub_80498E4();
                    sub_8048B0E((unsigned int)(0 - (int)(int*)(5 - (int)(int*)(0 - (int)(int*)(gvar_8048118 - (int)ptr0)))));
                    sub_8048A15(ptr3);
                    ptr0 = ptr3 + 1;
                }
            }
            sub_804835D();
            sub_8049950((int)&ptr1);
            sub_8048B0E((unsigned int)(0 - (int)(int*)(5 - (int)(int*)(0 - (int)(int*)(gvar_8048118 - (int)ptr0)))));
            result = sub_8048A15(ptr1);
        }
        else {
            switch(gvar_80480FC) {
                case 123: {
                    sub_804835D();
                    sub_8049E97(1);
                    while(gvar_80480FC != 125) {
                        sub_8049950((int)param0);
                    }
                    break;
                }
                case 400: {
                    sub_804835D();
                    ptr2 = param0;
                    unsigned int v1 = sub_8048B0E(*(unsigned int*)param0);
                    *(unsigned int*)ptr2 = v1;
                    break;
                }
                case 448: {
                    sub_804835D();
                    if(gvar_80480FC != 59) {
                        sub_80498E4();
                    }
                    unsigned int v2 = sub_8048B0E(gvar_8048110);
                    gvar_8048110 = v2;
                    break;
                }
                default: {
                    if(gvar_80480FC != 59) {
                        sub_80498E4();
                    }
                    break;
                }
            }
            result = (unsigned int*)sub_804835D();
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_8049E97(int param0) {
    unsigned int result;
    while((((gvar_80480FC == -1 ? 0: 1) & (param0 == 0 ? 1: 0)) | (gvar_80480FC == 0x100 ? 1: 0))) {
        if(gvar_80480FC == 0x100) {
            sub_804835D();
            while(gvar_80480FC != 59) {
                if(param0) {
                    gvar_804811C += 4;
                    *gvar_80480FC = 0 - gvar_804811C;
                }
                else {
                    *gvar_80480FC = gvar_8048120;
                    gvar_8048120 += 4;
                }
                sub_804835D();
                if(gvar_80480FC == 44) {
                    result = sub_804835D();
                }
            }
            sub_804835D();
        }
        else {
            sub_8048A15(*(unsigned int**)(gvar_80480FC + 4));
            *gvar_80480FC = gvar_8048118;
            sub_804835D();
            sub_804835D();
            unsigned int v0 = 8;
            while(gvar_80480FC != 41) {
                *gvar_80480FC = v0;
                v0 += 4;
                sub_804835D();
                if(gvar_80480FC == 44) {
                    sub_804835D();
                }
            }
            sub_804835D();
            gvar_804811C = 0;
            gvar_8048110 = 0;
            sub_804898B(0xe58955);
            v0 = sub_8048A74(60545, 0);
            sub_8049950(0);
            sub_8048A15(gvar_8048110);
            sub_804898B(50121);
            *(unsigned int*)v0 = gvar_804811C;
        }
    }
    return result;
}

int sub_804A1A4(int param0, int* param1) {
    gvar_8048124 = *NULL;
    int v0 = param0;
    --param0;
    int v1 = v0;
    if(v0 > 1) {
        ++param1;
        unsigned int v2 = (unsigned int)134521366(*param1, &gvar_80481BC);
        gvar_8048124 = v2;
    }
    unsigned int v3 = (unsigned int)134521419(1, 99999);
    gvar_8048128 = v3;
    int v4 = 134521455((int)v3, " int if else while break return for define main ");
    gvar_804812C = (unsigned int)(v4 + 48);
    unsigned int v5 = (unsigned int)134521511(1, 99999);
    gvar_8048120 = v5;
    unsigned int v6 = (unsigned int)134521558(1, 99999);
    gvar_8048114 = v6;
    gvar_8048118 = v6;
    unsigned int v7 = (unsigned int)134521611(1, 99999);
    gvar_804810C = v7;
    sub_8048227();
    sub_804835D();
    sub_8049E97(0);
    v1 = *(int*)(gvar_804810C + 592);
    return param1(param0, (int)param1);
}
