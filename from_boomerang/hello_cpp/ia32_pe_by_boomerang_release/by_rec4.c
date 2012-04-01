L00401000(_unknown_ __eax, _unknown_ __esp, struct HINSTANCE__* _a4)
{
    intOrPtr _v16;
    char _v60;
    _unknown_ _v68;
    struct tagMSG _v92;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t10;
    intOrPtr _t11;
    _unknown_ _t12;
    char _t13;
    char* _t14;
    _unknown_ _t15;
    intOrPtr* _t16;
    _unknown_ _t21;
    intOrPtr* _t23;
    struct HINSTANCE__* _t24;
    intOrPtr _t25;
    _unknown_ _t26;
    intOrPtr* _t27;

    __esp = __esp;
    _t24 = _a4;
    _push(_t21);
     *LoadStringA(_t24, 103, 4216052, 100);
     *LoadStringA(_t24, 109, 4215952, 100);
    _push(_t24);
    L004010C0(__esp);
    _t11 = _v16;
    L00401150(__esp, _t24, _t11);
    __esp = __esp + 4;
    if(_t11 != 0) {
        LoadAcceleratorsA(_t24, 109);
        _t23 = GetMessageA;
        _push(0);
        _push(0);
        _push(0);
        _push( &_v60);
        _t25 = _t11;
         *GetMessageA();
        if(_t11 != 0) {
            _push(_t15);
            _t16 = __imp__TranslateAcceleratorA;
            _push(_t26);
            _t27 = __imp__TranslateMessage;
            while(1) {
L4:
                _t13 = _v92.time;
                _push( &(_v92.time));
                _push(_t25);
                _push(_t13);
                 *_t16();
                if(_t13 == 0) {
                    _push( &(_v92.message));
                     *_t27();
                    DispatchMessageA( &_v92);
                }
                _push(0);
                _push(0);
                _t14 =  &(_v92.message);
                _push(0);
                _push(_t14);
                 *_t23();
                if(_t14 == 0) {
                    break;
                }
            }
            _pop(__ebp);
            _pop(__ebx);
        }
        _pop(__edi);
        return;
L9:
    }
    _pop(__edi);
    return;
    goto L9;
}

L004010C0(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr _v24;
    struct _WNDCLASSEXA _v72;
    _unknown_ __esi;
    intOrPtr _t16;
    intOrPtr _t17;
    _unknown_ _t18;

    __esp = __esp;
    _t16 = _a4;
    _push(_t18);
    _push(107);
    _push(_t16);
    _v72.hIcon = 48;
    _v72.hCursor = 3;
    _v72.hbrBackground = 4198832;
    _v72.lpszMenuName = 0;
    _v72.lpszClassName = 0;
    _v72.hIconSm = _t16;
     *LoadIconA();
    _push(32512);
    _push(0);
    _v72.lpszClassName = _t16;
    LoadCursorA();
    _v72.lpszMenuName = _t16;
    _t17 = _v72.hCursor;
    _push(108);
    _push(_t17);
    _v72.lpszClassName = 6;
    _v72.hIconSm = 109;
    _v24 = 4215952;
     *LoadIconA();
    _v72.hIconSm = _t17;
    RegisterClassExA( &_v72);
    _pop(__esi);
    return;
}

L00401150(_unknown_ __esp, intOrPtr _a4)
{
    int _v40;
    _unknown_ __esi;
    intOrPtr _t3;
    struct HWND__* _t4;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    struct HWND__* _t10;

    __esp = __esp;
    _t3 = _a4;
    _push(_t9);
    _push(0);
    _push(_t3);
    _push(0);
    _push(0);
    _push(0);
    _push(-2147483648);
    _push(0);
    _push(-2147483648);
    _push(13565952);
    _push(4216052);
    _push(4215952);
    _push(0);
     *4216152 = _t3;
    _t4 = CreateWindowExA();
    _t10 = _t4;
    if(_t10 != 0) {
        ShowWindow(_t10, _v40);
        UpdateWindow(_t10);
        _pop(__esi);
        return 1;
    } else {
        _pop(__esi);
        return _t4;
    }
}

L00401446(intOrPtr _a4)
{
    if( *4216164 == 1) {
        L00401F5C();
    }
    _push(_a4);
    L00401F95(__eax);
    _push(255);
     *4214832();
    _pop(__ecx);
    _pop(__ecx);
    return;
}

L0040146B(intOrPtr _a4)
{
    if( *4216164 == 1) {
        L00401F5C();
    }
    L00401F95(__eax, _a4);
    ExitProcess(255);
    return;
}

L0040148F()
{
    __eax =  *4217460;
    if(__eax != 0) {
         *__eax();
    }
    _push(4214800);
    _push(4214792);
    L00401577(__esp);
    _push(4214788);
    _push(4214784);
    L00401577(__esp);
    __esp = __esp + 16;
    return;
}

L004014BC(_unknown_ __esp, intOrPtr _a4)
{
    __esp = __esp;
    _push(0);
    _push(0);
    _push(_a4);
    L004014DE(__esp);
    __esp = __esp + 12;
    return;
}

L004014DE(_unknown_ __esp, intOrPtr _a4, intOrPtr _a8, signed int _a12)
{
    _unknown_ __ebx;
    intOrPtr __edi;
    int _t7;
    _unknown_ _t9;
    signed int _t10;
    _unknown_ _t11;
    int* _t12;

    __esp = __esp;
    _push(1);
    _pop(__edi);
    if( *4216240 == __edi) {
        _push(_a4);
        _push(GetCurrentProcess());
        _t7 = TerminateProcess();
    }
    _push(_t9);
    _t10 = _a12;
     *4216236 = __edi;
     *4216232 = _t10 & 4294967295;
    if(_a8 != 0) {
L10:
        _push(4214816);
        _push(4214812);
        L00401577(__esp);
        _pop(__ecx);
        _pop(__ecx);
        _pop(__ebx);
        if(_t10 != 0) {
            return ;
        }
        _push(_a4);
         *4216240 = __edi;
        ExitProcess();
        return;
    } else {
        _t7 =  *4217456;
        if(_t7 == 0) {
L9:
            _push(4214808);
            _push(4214804);
            L00401577(__esp);
            _pop(__ecx);
            _pop(__ecx);
            goto L10;
        }
        __ecx =  *4217452;
        _push(_t11);
        _t12 =  *4217452 - 4;
        if(_t12 < _t7) {
L8:
            _pop(__esi);
            goto L9;
        } else {
            goto L5;
        }
        while(1) {
L5:
            _t7 =  *_t12;
            if(_t7 != 0) {
                 *_t7();
            }
            _t12 = _t12 - 4;
            if(_t12 <  *4217456) {
                break;
            }
        }
        goto L8;
    }
}

L00401577(_unknown_ __esp, intOrPtr* _a4, intOrPtr _a8)
{
    intOrPtr* __esi;

    __esp = __esp;
    __esi = _a4;
    while(__esi < _a8) {
        __eax =  *__esi;
        if(__eax != 0) {
             *__eax();
        }
        __esi = __esi + 4;
    }
}

L00401591(_unknown_ __eax, struct _EXCEPTION_POINTERS* _a4, struct _EXCEPTION_POINTERS* _a8)
{
    signed int __ebx;
    _unknown_ __ebp;
    _unknown_ _t16;
    _unknown_ _t18;
    struct _EXCEPTION_RECORD* _t19;
    _unknown_ _t20;
    CONTEXT* _t23;
    signed int _t24;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    intOrPtr _t29;
    signed int* _t31;

    _push(_a4);
    _t17 = L004016D2(__esp);
    _pop(__ecx);
    if(_t17 == 0) {
L27:
        __eax = UnhandledExceptionFilter(_a8);
        return;
    }
    __ebx =  *(_t17 + 8);
    if(__ebx == 0) {
        goto L27;
    }
    if(__ebx == 5) {
         *(_t17 + 8) =  *(_t17 + 8) & 0;
        _push(1);
        _pop(__eax);
        return;
    }
    __eflags = __ebx - 1;
    if(__ebx == 1) {
        return ;
    }
    _a4 =  *4216244;
     *4216244 = _a8;
    _t23 = _t17->ContextRecord;
    __eflags = _t23 - 8;
    if(_t23 != 8) {
         *(_t17 + 8) =  *(_t17 + 8) & 0;
        _push(_t23);
         *__ebx();
        _pop(__ecx);
    } else {
        _t24 =  *4214960;
        _t26 =  *4214964 + _t24;
        _push(_t28);
        __eflags = _t24 - _t26;
        if(__eflags >= 0) {
L9:
            _t19 = _t17->ExceptionRecord;
            _t29 =  *4214972;
            __eflags = _t19 - -1073741682;
            if(_t19 != -1073741682) {
                __eflags = _t19 - -1073741680;
                if(_t19 != -1073741680) {
                    __eflags = _t19 - -1073741679;
                    if(_t19 != -1073741679) {
                        __eflags = _t19 - -1073741677;
                        if(_t19 != -1073741677) {
                            __eflags = _t19 - -1073741683;
                            if(_t19 != -1073741683) {
                                __eflags = _t19 - -1073741681;
                                if(_t19 != -1073741681) {
                                    __eflags = _t19 - -1073741678;
                                    if(_t19 == -1073741678) {
                                         *4214972 = 138;
                                    }
                                } else {
                                     *4214972 = 134;
                                }
                            } else {
                                 *4214972 = 130;
                            }
                        } else {
                             *4214972 = 133;
                        }
                    } else {
                         *4214972 = 132;
                    }
                } else {
                     *4214972 = 129;
                }
            } else {
                 *4214972 = 131;
            }
            _push( *4214972);
            _push(8);
             *__ebx();
            _pop(__ecx);
             *4214972 = _t29;
            _pop(__ecx);
            _pop(__esi);
            goto L25;
        } else {
            _t27 = _t26 - _t24;
            _t31 = 4214848 + (_t24 + _t24 * 2) * 4;
            goto L8;
        }
        while(1) {
L8:
             *_t31 =  *_t31 & 0;
            _t31 =  &(_t31[3]);
            _t27 = _t27 - 1;
            if(__eflags == 0) {
                break;
            }
        }
        goto L9;
    }
L25:
    _t17 = _a4;
     *4216244 = _a4;
    return ;
    return;
}

L004016D2(_unknown_ __esp, intOrPtr _a4)
{
    _unknown_ __esi;
    intOrPtr* _t10;
    _unknown_ _t11;
    signed int _t12;
    _unknown_ _t15;

    __esp = __esp;
    __edx = _a4;
    _t12 =  *4214968;
    _push(_t15);
    _t10 = 4214840;
    if( *4214840 == __edx) {
L4:
        _pop(__esi);
        if(_t10 >= 4214840 + (_t12 + _t12 * 2) * 4) {
            return 0;
        }
        if( *_t10 == __edx) {
            return _t10;
        }
        return 0;
    }
    _t15 = 4214840 + (_t12 + _t12 * 2) * 4;
    while(1) {
L2:
        _t10 = _t10 + 12;
        if(_t10 >= _t15 ||  *_t10 == __edx) {
            break;
        }
    }
    goto L4;
}

L00401715(signed int __eax)
{
    _unknown_ __esi;
    signed int _t12;
    _unknown_ _t14;
    char* _t15;

    _t12 = __eax;
    if( *4217448 == 0) {
        L004024EE();
    }
    _push(_t14);
    _t15 =  *4217464;
    if((_t12 & 4294967295) != 34) {
        if((_t12 & 4294967295) <= 32) {
            goto L11;
        } else {
            goto L10;
        }
        while(1) {
L10:
            _t15 = _t15 + 1;
            if( *_t15 <= 32) {
                break;
            }
        }
        goto L11;
    } else {
        goto L3;
    }
    while(1) {
L3:
        _t15 = _t15 + 1;
        if((_t12 & 4294967295) == 34 || (_t12 & 4294967295) == 0) {
            break;
        } else {
            _t12 = _t12 & 4294967295 & ;
            _push(_t12);
            L004020E8(__esp);
            _pop(__ecx);
            if(_t12 != 0) {
                _t15 = _t15 + 1;
            }
            continue;
        }
    }
    if( *_t15 != 34) {
L11:
        if((_t12 & 4294967295) == 0 || (_t12 & 4294967295) > 32) {
            _pop(__esi);
            return _t15;
        } else {
            goto L8;
        }
    }
L8:
    _t15 = _t15 + 1;
    goto L11;
}

L0040176D()
{
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    intOrPtr _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t21;

    __ebx = 0;
    _push(_t16);
    _push(_t13);
    if( *4217448 == 0) {
        L004024EE();
    }
    _t17 =  *4216156;
    _t14 = 0;
    while((_t11 & 4294967295) != (__ebx & 4294967295)) {
        if((_t11 & 4294967295) != 61) {
            _t14 = _t14 + 1;
        }
        _push(_t17);
        _t11 = L004026B0(_t11, __esp);
        _pop(__ecx);
        _t17 = _t17 + _t11 + 1;
    }
}

L00401826()
{
    signed int _v8;
    char _v12;
    _unknown_ __ebx;
    _unknown_ __ecx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t14;
    CHAR* _t15;
    intOrPtr _t19;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    CHAR* _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    intOrPtr _t34;

    _push(_t28);
    _push(_t28);
    _push(_t26);
    _push(_t32);
    _push(_t30);
    if( *4217448 == 0) {
        L004024EE();
    }
    GetModuleFileNameA(0, 4216248, 260);
    _t15 =  *4217464;
     *4216224 = 4216248;
    _t31 = 4216248;
    if( *_t15 != 0) {
        _t31 = _t15;
    }
    _push( &_v12);
    _push( &_v8);
    _push(0);
    _push(0);
    _push(_t31);
    L004018BF(__edx);
    _t19 = _v12 + _v8 * 4;
    _push(_t19);
    L00402630();
    _t34 = _t19;
    __esp = __esp + 24;
    if(_t34 == 0) {
        _push(8);
        L00401446();
        _pop(__ecx);
    }
    _push( &_v12);
    _push( &_v8);
    _push(_t34 + _v8 * 4);
    _push(_t34);
    _push(_t31);
    L004018BF(__edx);
    __esp = __esp + 20;
     *4216200 = _t34;
    _pop(__edi);
    _pop(__esi);
     *4216196 = _v8 - 1;
    _pop(__ebx);
    return;
}

L004018BF(signed int __edx, signed int* _a4, signed int _a8, signed int _a12, signed int** _a16, signed int _a20)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int* _t72;
    signed int _t74;
    _unknown_ _t75;
    _unknown_ _t76;
    _unknown_ _t77;
    signed int _t78;
    _unknown_ _t80;
    _unknown_ _t81;
    _unknown_ _t82;
    _unknown_ _t83;
    signed int _t84;
    _unknown_ _t85;
    _unknown_ _t86;
    signed int _t87;

    _t78 = __edx;
    __ecx = _a20;
    _push(_t74);
    _push(_t86);
     *__ecx =  *__ecx & 0;
    _t87 = _a12;
    _push(_t83);
    _t84 = _a8;
     *_a16 = 1;
    _t72 = _a4;
    if(_t84 != 0) {
         *_t84 = _t87;
        _t84 = _t84 + 4;
        _a8 = _t84;
    }
    if( *_t72 != 34) {
        while(1) {
             *__ecx = 1 +  *__ecx;
            __eflags = _t87;
            if(_t87 != 0) {
                 *_t87 = _t78 & 4294967295;
                _t87 = 1 + _t87;
            }
            _t72 =  &(_t72[0]);
            _t74 = _t78 & 4294967295 & ;
            __eflags =  *(_t74 + 4216897) & 4;
            if(( *(_t74 + 4216897) & 4) != 0) {
                 *__ecx = 1 +  *__ecx;
                __eflags = _t87;
                if(_t87 != 0) {
                     *_t87 = _t74 & 4294967295;
                    _t87 = 1 + _t87;
                }
                _t72 =  &(_t72[0]);
            }
            __eflags = (_t78 & 4294967295) - 32;
            if((_t78 & 4294967295) == 32) {
                break;
            }
            __eflags = _t78 & 4294967295;
            if((_t78 & 4294967295) == 0) {
L24:
                _t72 = _t72 - 1;
                goto L27;
            }
            __eflags = (_t78 & 4294967295) - 9;
            if((_t78 & 4294967295) != 9) {
                continue;
            }
            break;
L25:
            __eflags = _t87;
            if(_t87 != 0) {
                 *(_t87 - 1) =  *(_t87 - 1) & 0;
            }
            goto L27;
        }
L23:
        __eflags = _t78 & 4294967295;
        if((_t78 & 4294967295) != 0) {
            goto L25;
        }
        goto L24;
    } else {
        goto L3;
    }
    while(1) {
L3:
        _t72 =  &(_t72[0]);
        if((_t78 & 4294967295) == 34 || (_t78 & 4294967295) == 0) {
            break;
        } else {
            _t78 = _t78 & 4294967295 & ;
            if(( *(_t78 + 4216897) & 4) != 0) {
                 *__ecx = 1 +  *__ecx;
                if(_t87 != 0) {
                     *_t87 = _t78 & 4294967295;
                    _t87 = 1 + _t87;
                    _t72 =  &(_t72[0]);
                }
            }
            goto L8;
        }
    }
     *__ecx = 1 +  *__ecx;
    __eflags = _t87;
    if(_t87 != 0) {
         *_t87 =  *_t87 & 0;
        _t87 = 1 + _t87;
    }
    __eflags =  *_t72 - 34;
    if( *_t72 == 34) {
        _t72 =  &(_t72[0]);
    }
L27:
    _a20 = _a20 & 0;
    while(1) {
        __eflags =  *_t72;
        if( *_t72 == 0) {
            break;
        } else {
            goto L29;
        }
        while(1) {
L29:
            __eflags = (_t78 & 4294967295) - 32;
            if((_t78 & 4294967295) != 32) {
                break;
            }
L31:
            _t72 =  &(_t72[0]);
L29:
            __eflags = (_t78 & 4294967295) - 32;
            if((_t78 & 4294967295) != 32) {
                break;
            }
L32:
            __eflags =  *_t72;
            if( *_t72 == 0) {
                goto L68;
            }
L33:
            __eflags = _t84;
            if(_t84 != 0) {
                 *_t84 = _t87;
                _t84 = _t84 + 4;
                _a8 = _t84;
            }
             *_a16 =  &(( *_a16)[0]);
            while(1) {
                _a4 = 1;
                _t75 = 0;
                goto L37;
            }
        }
        __eflags = (_t78 & 4294967295) - 9;
        if((_t78 & 4294967295) != 9) {
            goto L32;
        }
        goto L31;
    }
L68:
    __eflags = _t84;
    if(_t84 != 0) {
         *_t84 =  *_t84 & 0;
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
     *_a16 =  &(( *_a16)[0]);
    return;
}

L00401A73(_unknown_ __eax, _unknown_ __esp)
{
    WCHAR* _v4;
    intOrPtr _v36;
    WCHAR* _v40;
    signed int _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t13;
    CHAR* _t14;
    _unknown_ _t15;
    CHAR* _t16;
    WCHAR* _t18;
    WCHAR* _t19;
    WCHAR* _t22;
    _unknown_ _t25;
    signed int _t26;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t31;

    __esp = __esp;
    _t14 =  *4216508;
    _push(_t25);
    _push(_t31);
    _t32 = __imp__GetEnvironmentStringsW;
    _push(_t29);
    _push(_t27);
    _t26 = 0;
    _t30 = 0;
    _t28 = 0;
    if(_t14 != 0) {
        if(_t14 != 1) {
            if(_t14 != 2) {
                goto L27;
            }
            goto L18;
        }
        goto L6;
    }
     *_t32();
    _t30 = _t14;
    if(_t30 == 0) {
        GetEnvironmentStrings();
        _t28 = _t14;
        if(_t28 == 0) {
L27:
            goto L28;
        }
        goto L4;
L28:
        _pop(__edi);
        _pop(__esi);
        _pop(__ebp);
        _pop(__ebx);
        return;
    }
     *4216508 = 1;
    goto L6;
L4:
     *4216508 = 2;
L18:
    if(_t28 != _t26) {
L20:
        _t16 = _t28;
        if( *_t28 == (_t26 & 4294967295)) {
L23:
            _t18 = _t16 - _t28 + 1;
            _t32 = _t18;
            _push(_t18);
            L00402630();
            _t30 = _t18;
            _pop(__ecx);
            if(_t18 != _t26) {
                L00402730(_t30, _t28, _t32);
            } else {
                _t30 = 0;
            }
            __eax = FreeEnvironmentStringsA(_t28);
            goto L28;
        } else {
            goto L21;
        }
        do {
            while(1) {
L21:
                _t16 =  &(_t16[1]);
                if( *_t16 == (_t26 & 4294967295)) {
                    break;
                }
            }
            _t16 =  &(_t16[1]);
        } while( *_t16 != (_t26 & 4294967295));
        goto L23;
    }
    GetEnvironmentStrings();
    _t28 = _t14;
    if(_t28 == _t26) {
        goto L27;
    }
    goto L20;
L6:
    if(_t30 != _t26) {
L8:
        _t19 = _t30;
        if( *_t30 == (_t26 & 4294967295)) {
L11:
            _t28 = WideCharToMultiByte;
            _push(_t26);
            _push(_t26);
            _t22 =  &((1)[_t19 - _t30 >> 1]);
            _push(_t26);
            _push(_t26);
            _push(_t22);
            _push(_t30);
            _push(_t26);
            _push(_t26);
            _v4 = _t22;
             *WideCharToMultiByte();
            _t32 = _t22;
            if(_t32 != _t26) {
                _push(_t32);
                L00402630();
                _pop(__ecx);
                _v40 = _t22;
                if(_t22 != _t26) {
                     *WideCharToMultiByte(_t26, _t26, _t30, _v36, _t22, _t32, _t26, _t26);
                    if(_t22 == 0) {
                        _push(_v72);
                        L0040250A(_t22);
                        _pop(__ecx);
                        _v72 = _t26;
                    }
                    _t26 = _v72;
                }
            }
            __eax = FreeEnvironmentStringsW(_t30);
            goto L28;
        } else {
            goto L9;
        }
        do {
            while(1) {
L9:
                _t19 =  &(( &(_t19[0]))[0]);
                if( *_t19 == (_t26 & 4294967295)) {
                    break;
                }
            }
            _t19 =  &(( &(_t19[0]))[0]);
        } while( *_t19 != (_t26 & 4294967295));
        goto L11;
    }
     *_t32();
    _t30 = _t14;
    if(_t30 == _t26) {
        goto L27;
    }
    goto L8;
}

L00401BA5(intOrPtr __eax)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t42;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    _unknown_ _t58;
    _unknown_ _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    intOrPtr _t70;
    _unknown_ _t71;
    _unknown_ _t72;

    _push(256);
    L00402630();
    _t70 = __eax;
    _pop(__ecx);
    if(_t70 == 0) {
        _push(27);
        L00401446();
        _pop(__ecx);
    }
     *4217184 = _t70;
     *4217440 = 32;
    _t42 = _t70 + 256;
    while(_t70 < _t42) {
    }
}

L00401D50(_unknown_ __eax, _unknown_ _a4)
{
    _unknown_ _t3;
    _unknown_ _t4;
    void* _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    _t5 = HeapCreate(0, 4096, 0);
     *4217160 = 0;
    if(0 == 0) {
        return ;
    }
    L00402A65(_t5);
    if(0 == 0) {
        HeapDestroy( *4217160);
        return ;
    }
    _push(1);
    _pop(__eax);
    return;
}

L00401F5C()
{
    intOrPtr _t1;
    intOrPtr* _t2;

    _t1 =  *4216164;
    if(_t1 != 1) {
        if(_t1 != 0) {
            return ;
        }
        if( *4214836 != 1) {
            return ;
        }
    }
    _push(252);
    L00401F95(_t1);
    _t2 =  *4216512;
    _pop(__ecx);
    if(_t2 != 0) {
         *_t2();
    }
    L00401F95(_t2, 255);
    return;
}

L00401F95(_unknown_ __eax, char _a4)
{
    char _v164;
    char _v424;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t17;
    int _t18;
    _unknown_ _t20;
    _unknown_ _t25;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t34;
    _unknown_ _t37;
    _unknown_ _t40;
    _unknown_ _t42;
    _unknown_ _t43;
    char* _t44;
    _unknown_ _t46;
    signed int _t48;

    __edx = _a4;
    __ecx = 0;
    _t18 = 4215008;
    while(__edx !=  *_t18) {
        _t18 = _t18 + 8;
        __ecx = __ecx + 1;
        if(_t18 < 4215152) {
            continue;
        }
        _push(_t46);
        _t48 = __ecx << 3;
        if(__edx !=  *((intOrPtr*)(_t48 + 4215008))) {
L14:
            _pop(__esi);
            return;
        }
        _t18 =  *4216164;
        if(_t18 == 1 || _t18 == 0 &&  *4214836 == 1) {
            _t48 = _t48 + 4215012;
            _push(0);
            _push( ?_? ( &_a4));
            _push( *_t48);
            _t20 = L004026B0( &_a4, __esp);
            _pop(__ecx);
            _push(_t20);
            _push( *_t48);
            _push(GetStdHandle(244));
            _t18 = WriteFile();
        } else {
            if(__edx == 252) {
                goto L14;
            }
            if(GetModuleFileNameA(0,  &_v424, 260) == 0) {
                _push("<program name unknown>");
                _push( &_v424);
                L00402540(__edx, __esp);
                _pop(__ecx);
                _pop(__ecx);
            }
            _push(_t43);
            _push( &_v424);
            _t44 =  &_v424;
            _t25 = L004026B0( &_v424, __esp);
            _pop(__ecx);
            if(_t25 + 1 > 60) {
                _push( &_v424);
                _t37 = L004026B0( &_v424, __esp);
                _push(3);
                _t44 = _t37 +  &_v424 - 59;
                _push("...");
                _push(_t44);
                L00403340( &_v424 - 59, __esp);
                __esp = __esp + 16;
            }
            _push("Runtime Error!\n\nProgram: ");
            _push( &_v164);
            L00402540(__edx, __esp);
            _push(_t44);
            _push( ?_? ( &_v164));
            L00402550( &_v164, __esp);
            _push("\n\n");
            _push( ?_? ( &_v164));
            L00402550( &_v164, __esp);
            _push( *(_t48 + 4215012));
            _push( ?_? ( &_v164));
            L00402550( &_v164, __esp);
            _push(73744);
            _push("Microsoft Visual C++ Runtime Library");
            _push( ?_? ( &_v164));
            _t18 = L004032AE( &_v164, __esp);
            __esp = __esp + 44;
            _pop(__edi);
        }
        goto L14;
    }
}

L004020E8(_unknown_ __esp, intOrPtr _a4)
{
    __esp = __esp;
    _push(4);
    _push(0);
    _push(_a4);
    L004020F9(__ecx, __esp);
    __esp = __esp + 12;
    return;
}

L004020F9(signed int __ecx, _unknown_ __esp, signed char _a4, signed int _a8, _unknown_ _a12)
{
    signed int _t12;

    __esp = __esp;
    __ecx = __ecx;
    _t12 = _a4 & 255;
    if(( *(_t12 + 4216897) & __ecx & 4294967295) == 0) {
        if(_a8 == 0) {
            _t12 = 0;
        } else {
            _t12 =  *(4215434 + _t12 * 2) & 65535 & _a8;
        }
        if(_t12 == 0) {
            return ;
        }
    }
    _push(1);
    _pop(__eax);
    return;
}

L0040212A(_unknown_ __eax, int _a4)
{
    _unknown_ _v8;
    char _v21;
    char _v22;
    intOrPtr _v28;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t37;
    _unknown_ _t39;
    intOrPtr* _t40;
    _unknown_ _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t44;
    signed int _t46;
    signed int _t48;
    _unknown_ _t49;
    intOrPtr _t50;
    _unknown_ _t51;
    _unknown_ _t52;
    signed int _t53;
    _unknown_ _t54;
    _unknown_ _t55;
    char* _t57;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    _unknown_ _t65;
    int _t66;
    _unknown_ _t69;

    _push(_a4);
    _t66 = L004022C3(__esp);
    _pop(__ecx);
    _a4 = _t66;
    if(_t66 ==  *4216604) {
        return 0;
    }
    if(_t66 == 0) {
L29:
        L00402340();
    } else {
        __edx = 0;
        _t40 = 4215160;
        while( *_t40 != _t66) {
            _t40 = _t40 + 48;
            __edx = __edx + 1;
            if(_t40 < 4215400) {
                continue;
            }
            _t46 = GetCPInfo(_t66,  &_v28);
            if(_t46 != 1) {
                __eflags =  *4216516;
                if( *4216516 == 0) {
                    return _t46 | 255;
                }
                goto L29;
            }
            _push(64);
            _t48 = 0;
            _pop(__ecx);
             *4216604 = _t66;
            _push(_t53 << 2);
            _push(0);
            _push(4216896);
            memset();
            __esp = __esp + 12;
            _t57 = 0;
            asm("stosb ");
             *4217156 = 0;
            if(_v28 <= 1) {
                 *4216620 = 0;
                goto L27;
            }
            if(_v22 == 0) {
                _push(1);
                _pop(__eax);
                while(1) {
L24:
                     *(_t48 + 4216897) =  *(_t48 + 4216897) | 8;
                    _t48 = _t48 + 1;
                    __eflags = _t48 - 255;
                    if(__eflags >= 0) {
                        break;
                    }
                }
                _push(_t66);
                _t50 = L0040230D(__esp, __eflags);
                _pop(__ecx);
                 *4217156 = _t50;
                 *4216620 = 1;
                goto L27;
            }
            _t57 =  &_v21;
            while((__edx & 4294967295) != 0) {
                _t48 =  *(_t57 - 1) & 255;
                __edx = __edx & 4294967295 & ;
                while(_t48 <= __edx) {
                     *(_t48 + 4216897) =  *(_t48 + 4216897) | 4;
                    _t48 = _t48 + 1;
                }
            }
            goto L24;
L27:
            asm("stosd ");
            asm("stosd ");
            asm("stosd ");
            goto L30;
        }
    }
L30:
    L00402369();
    return 0;
}

L004022C3(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr _t2;

    __esp = __esp;
    _t2 = _a4;
     *4216516 =  *4216516 & 0;
    if(_t2 != 254) {
        if(_t2 != 253) {
            if(_t2 != 252) {
                return _t2;
            }
            goto L7;
        }
        goto L4;
L7:
         *4216516 = 1;
        return  *4216556;
    }
     *4216516 = 1;
    goto __imp__GetOEMCP;
L4:
     *4216516 = 1;
    goto __imp__GetACP;
}

L0040230D(_unknown_ __esp, _unknown_ __eflags, _unknown_ _a4)
{
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;

    __eflags = __eflags;
    __esp = __esp;
    if(__eflags == 0) {
        return 1041;
    }
    if(__eflags == 0) {
        return 2052;
    }
    if(__eflags == 0) {
        return 1042;
    }
    if(__eflags == 0) {
        return 1028;
    }
    return 0;
L9:
}

L00402340()
{
    _unknown_ __edi;
    _unknown_ _t2;
    _unknown_ _t3;
    signed int _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _push(64);
    _pop(__ecx);
    _push(_t4 << 2);
    _push(0);
    _push(4216896);
    memset();
    __esp = __esp + 12;
    asm("stosb ");
     *4216604 = 0;
     *4216620 = 0;
     *4217156 = 0;
    asm("stosd ");
    asm("stosd ");
    asm("stosd ");
    return;
}

L00402369()
{
    char _v17;
    _unknown_ _v18;
    struct _cpinfo _v24;
    char _v280;
    char _v536;
    char _v792;
    char _v1304;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t64;
    signed int _t65;
    _unknown_ _t68;
    _unknown_ _t71;
    _unknown_ _t74;
    _unknown_ _t75;
    signed int _t76;
    char* _t77;
    signed int _t79;
    signed int _t81;
    signed int _t82;
    _unknown_ _t83;
    signed int _t85;
    _unknown_ _t86;
    signed int _t87;
    signed char* _t88;
    _unknown_ _t90;
    _unknown_ _t91;
    _unknown_ _t92;
    _unknown_ _t93;
    _unknown_ _t94;

    _push(_t93);
    if(GetCPInfo( *4216604,  &_v24) != 1) {
        _t64 = 0;
        _t94 = 256;
        goto L19;
        do {
            goto L19;
L27:
            _t64 = _t64 + 1;
        } while(_t64 < _t94);
        goto L28;
    } else {
        _t65 = 0;
        _t94 = 256;
        while(1) {
L2:
             *(__ebp + _t65 + -276) = _t65 & 4294967295;
            _t65 = _t65 + 1;
            if(_t65 >= _t94) {
                break;
            }
        }
        _v280 = 32;
        if((_t65 & 4294967295) == 0) {
L9:
            _push(0);
            _push( *4217156);
            _push( *4216604);
            _push( &_v1304);
            _push(_t94);
            _push( ?_? ( &_v280));
            _push(1);
            L0040368D( &_v280);
            _push(0);
            _push( *4216604);
            _push(_t94);
            _push( &_v536);
            _push(_t94);
            _push( ?_? ( &_v280));
            _push(_t94);
            _push( *4217156);
            L0040343E( &_v280);
            L0040343E( ?_? ( &_v280),  *4217156, 512,  &_v280, _t94,  &_v792, _t94,  *4216604, 0);
            __esp = __esp + 60;
            _t75 = 0;
            _t77 =  &_v1304;
            goto L10;
            do {
                goto L10;
L16:
                _t75 = _t75 + 1;
                _t77 = _t77 + 1 + 1;
            } while(_t75 < _t94);
L28:
            _pop(__esi);
            return;
        }
        _push(__ebx);
        _push(_t90);
        _t88 =  &_v17;
        while(1) {
L5:
            _t79 =  *_t88 & 255;
            _t65 = _t65 & 4294967295 & ;
            if(_t65 <= _t79) {
                _t91 = __ebp + _t65 + -276;
                _t81 = _t79 - _t65 + 1;
                _t65 = 538976288;
                __ebx = _t81;
                _t82 = _t81 >> 2;
                _push(_t82 << 2);
                _push(_t65);
                _push(_t91);
                memset();
                __esp = __esp + 12;
                _t92 = _t91 + _t82;
                _t85 = _t81 & 3;
                _push(_t85 << 0);
                _push(_t65);
                _push(_t92);
                memset();
                __esp = __esp + 12;
                _t90 = _t92 + _t85;
            }
            _t88 =  &(( &(_t88[1]))[1]);
            if((_t65 & 4294967295) == 0) {
                break;
            }
        }
        _pop(__edi);
        _pop(__ebx);
        goto L9;
L10:
        if((_t87 & 4294967295 & 1) == 0) {
            if((_t87 & 4294967295 & 2) == 0) {
                 *(_t75 + 4216640) =  *(_t75 + 4216640) & 0;
                goto L16;
            }
             *(_t75 + 4216897) =  *(_t75 + 4216897) | 32;
L12:
             *(_t75 + 4216640) = _t87 & 4294967295;
            goto L16;
        }
         *(_t75 + 4216897) =  *(_t75 + 4216897) | 16;
        goto L12;
    }
L19:
    if(_t64 < 65 || _t64 > 90) {
        if(_t64 < 97 || _t64 > 122) {
             *(_t64 + 4216640) =  *(_t64 + 4216640) & 0;
        } else {
             *(_t64 + 4216897) =  *(_t64 + 4216897) | 32;
L22:
             *(_t64 + 4216640) = _t76 & 4294967295;
        }
        goto L27;
    }
     *(_t64 + 4216897) =  *(_t64 + 4216897) | 16;
    goto L22;
}

L004024EE()
{
    _unknown_ _t1;
    _unknown_ _t2;

    if( *4217448 != 0) {
        return ;
    }
    L0040212A(_t1, 253);
     *4217448 = 1;
    return;
}

L0040250A(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr __esi;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __esi = _a4;
    if(__esi == 0) {
        return ;
    }
    _push(__esi);
    _t3 = L00402AA3(__esp);
    _pop(__ecx);
    _push(__esi);
    if(_t3 == 0) {
        _push(0);
        _push( *4217160);
        HeapFree();
        return;
    }
    _push(_t3);
    L00402ACE();
    _pop(__ecx);
    _pop(__ecx);
    return;
    return;
    goto L5;
}

L00402540(signed int __edx, _unknown_ __esp, signed int* _a4, signed int _a8)
{
    signed int* __edi;
    signed int _t28;
    signed int _t33;
    _unknown_ _t34;

    __esp = __esp;
    _t33 = __edx;
    __edi = _a4;
    __ecx = _a8;
    if((__ecx & 3) == 0) {
        while(1) {
L6:
            _t28 =  *__ecx ^ 255 ^ 2130640639 +  *__ecx;
            _t33 =  *__ecx;
            __ecx = __ecx + 4;
            if((_t28 & -2130640640) != 0) {
                break;
            }
L5:
             *__edi = _t33;
            __edi =  &((__edi)[1]);
        }
        if((_t33 & 4294967295) == 0) {
L15:
             *__edi = _t33 & 4294967295;
            return _a4;
        } else {
            if((_t33 & 4294967295) == 0) {
                 *__edi = _t33 & 4294967295;
                return _a4;
            } else {
                if((_t33 & 16711680) == 0) {
                     *__edi = _t33 & 4294967295;
                    (__edi)[0] = 0;
                    return _a4;
                } else {
                    if((_t33 & -16777216) == 0) {
                         *__edi = _t33;
                        return _a4;
                    } else {
                        goto L5;
                    }
                }
            }
        }
L16:
    } else {
        goto L2;
    }
    while(1) {
L2:
        __ecx = __ecx + 1;
        if((_t33 & 4294967295) == 0) {
            break;
        }
         *__edi = _t33 & 4294967295;
        __edi =  &((__edi)[0]);
        if((__ecx & 3) != 0) {
            continue;
        } else {
            goto L6;
        }
        goto L16;
    }
    goto L15;
}

L00402550(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8)
{
    _unknown_ __edi;
    signed int _t45;
    signed int _t46;
    signed int _t49;
    signed int _t57;
    signed int _t58;
    signed int _t59;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t63;
    signed int* _t64;

    __esp = __esp;
    _t45 = __eax;
    _t57 = _a4;
    _push(_t63);
    if((_t57 & 3) == 0) {
        while(1) {
L3:
            _t46 =  *_t57;
            _t59 = 2130640639 + _t46;
            _t57 = _t57 + 4;
            if(((_t46 ^ 255 ^ _t59) & -2130640640) == 0) {
                break;
            } else {
                continue;
            }
            do {
L3:
                _t46 =  *_t57;
                _t59 = 2130640639 + _t46;
                _t57 = _t57 + 4;
            } while(((_t46 ^ 255 ^ _t59) & -2130640640) == 0);
        }
        _t49 =  *((signed int*)(_t57 - 4));
        if((_t49 & 4294967295) == 0) {
            _t64 = _t57 - 4;
        } else {
            if((_t49 & 4294967295) == 0) {
                _t64 = _t57 - 3;
            } else {
                if((_t49 & 16711680) == 0) {
                    _t64 = _t57 - 2;
                } else {
                    if((_t49 & -16777216) == 0) {
L9:
                        _t64 = _t57 - 1;
                    } else {
                        goto L3;
                    }
                }
            }
        }
L13:
        _t58 = _a8;
        if((_t58 & 3) == 0) {
            while(1) {
L18:
                _t59 =  *_t58;
                _t58 = _t58 + 4;
                if((( *_t58 ^ 255 ^ 2130640639 +  *_t58) & -2130640640) != 0) {
                    break;
                }
L17:
                 *_t64 = _t59;
                _t64 =  &(_t64[1]);
            }
            if((_t59 & 4294967295) == 0) {
L27:
                 *_t64 = _t59 & 4294967295;
                _pop(__edi);
                return _a4;
            } else {
                if((_t59 & 4294967295) == 0) {
                     *_t64 = _t59 & 4294967295;
                    _pop(__edi);
                    return _a4;
                } else {
                    if((_t59 & 16711680) == 0) {
                         *_t64 = _t59 & 4294967295;
                        _t64[0] = 0;
                        _pop(__edi);
                        return _a4;
                    } else {
                        if((_t59 & -16777216) == 0) {
                             *_t64 = _t59;
                            _pop(__edi);
                            return _a4;
                        } else {
                            goto L17;
                        }
                    }
                }
            }
L28:
        } else {
            goto L14;
        }
        while(1) {
L14:
            _t58 = _t58 + 1;
            if((_t59 & 4294967295) == 0) {
                break;
            }
             *_t64 = _t59 & 4294967295;
            _t64 =  &(_t64[0]);
            if((_t58 & 3) != 0) {
                continue;
            } else {
                goto L18;
            }
            goto L28;
        }
        goto L27;
    } else {
        goto L1;
    }
    while(1) {
L1:
        _t57 = _t57 + 1;
        if((_t45 & 4294967295) == 0) {
            break;
        }
        if((_t57 & 3) != 0) {
            continue;
        } else {
            goto L3;
        }
        goto L13;
    }
    goto L9;
}

L00402630(intOrPtr _a4)
{
    _unknown_ _t2;
    _unknown_ _t3;

    _push( *4216572);
    _push(_a4);
    L00402642(_t2);
    _pop(__ecx);
    _pop(__ecx);
    return;
}

L00402642(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ _t5;
    _unknown_ _t6;

    _t5 = __eax;
    if(_a4 > 224) {
        return 0;
    }
    while(1) {
        _push(_a4);
        L0040266E(_t5);
        _pop(__ecx);
        if(_t5 != 0) {
            break;
        } else {
            if(_a8 == _t5) {
                return _t5;
            }
            _push(_a4);
            _t5 = L004037D6(__esp);
            _pop(__ecx);
            if(_t5 == 0) {
                return 0;
            }
            continue;
        }
    }
    return _t5;
}

L0040266E(_unknown_ __eax, intOrPtr _a4)
{
    _unknown_ __esi;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    intOrPtr _t5;

    _t2 = __eax;
    _t5 = _a4;
    if(_t5 <=  *4215408) {
        _push(_t5);
        _t4 = L00402DF9(_t2);
        _pop(__ecx);
        if(_t4 != 0) {
            return ;
        }
    }
    if(_t5 == 0) {
        _push(1);
        _pop(__esi);
    }
    HeapAlloc( *4217160, 0, _t5 + 15 & 240);
    return;
}

L004026B0(signed int __eax, _unknown_ __esp, signed int _a4)
{
    signed int _t25;
    signed int _t29;
    _unknown_ _t38;
    signed int _t39;
    _unknown_ _t44;

    __esp = __esp;
    _t25 = __eax;
    _t39 = _a4;
    if((_t39 & 3) == 0) {
        while(1) {
L4:
            _t39 = _t39 + 4;
            if((( *_t39 ^ 255 ^ 2130640639 +  *_t39) & -2130640640) != 0) {
                _t29 =  *(_t39 - 4);
                if((_t29 & 4294967295) == 0) {
                    return _t39 - 4 - _a4;
                }
                if((_t29 & 4294967295) == 0) {
                    return _t39 - 3 - _a4;
                }
                if((_t29 & 16711680) == 0) {
                    return _t39 - 2 - _a4;
                }
                if((_t29 & -16777216) == 0) {
                    return _t39 - 1 - _a4;
                }
            }
        }
    } else {
        goto L1;
    }
    while(1) {
L1:
        _t39 = _t39 + 1;
        if((_t25 & 4294967295) == 0) {
            break;
        }
        if((_t39 & 3) != 0) {
            continue;
        } else {
            goto L4;
        }
        break;
    }
    return _t39 - 1 - _a4;
}

L00402730(signed int _a4, intOrPtr _a8, unsigned int _a12)
{
    signed int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t129;
    signed int _t130;
    _unknown_ _t138;
    signed int _t140;
    signed int _t141;
    signed int _t143;
    signed int _t145;
    signed int _t146;
    signed int _t147;
    signed int _t148;
    _unknown_ _t149;
    signed int _t150;
    signed int _t151;
    _unknown_ _t152;
    signed int _t154;
    intOrPtr _t156;
    _unknown_ _t157;
    _unknown_ _t158;

    _t156 = _a8;
    _t144 = _a12;
    _t151 = _a4;
    _t147 = _t144;
    _t129 = _t144 + _t156;
    if(_t151 <= _t156 || _t151 >= _t129) {
        if((_t151 & 3) != 0) {
            _t130 = _t151;
            _t148 = 3;
            _t145 = _t144 - 4;
            if(_t162 < 0) {
                goto ( *((intOrPtr*)(_t145 * 4 +  &M00402888)));
            }
            goto L6;
        }
        goto L3;
L6:
        _t140 = _t130 & 3;
        _t145 = _t145 + _t140;
        goto ( *((intOrPtr*)(_t140 * 4 +  &M00402790)));
    } else {
        _t158 = _t144 + _t156 - 4;
        _t154 = _t144 + _t151 - 4;
        if((_t154 & 3) != 0) {
            _t141 = _t154;
            if(_t144 < 4) {
                goto ( *((intOrPtr*)(_t144 * 4 +  &M00402A10)));
            }
            goto L26;
        }
        _t146 = _t144 >> 2;
        _t150 = _t147 & 3;
        if(_t146 < 8) {
            _t144 =  ~_t146;
            goto  *((intOrPtr*)( ~_t146 * 4 +  &M004029C0))[L28]goto ( *((intOrPtr*)( ~_t146 * 4 +  &M004029C0)));
            goto ( *((intOrPtr*)(0xc +  &M00402A10)));
        }
        asm("std ");
        _push(_t146 << 2);
        _push(_t158);
        _push(_t154);
        memcpy();
        __esp = __esp + 12;
        _t154 = _t158 + _t146 + _t146;
        _t146 = 0;
        asm("cld ");
        switch( *((intOrPtr*)(_t150 * 4 +  &M00402A10))) {
            case 0:
                return _a4;
                goto L33;
            case 1:
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 2:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 3:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
L33:
        }
L26:
        _t143 = _t141 & 3;
        _t144 = _t144 - _t143;
        goto ( *((intOrPtr*)(_t143 * 4 +  &M00402918)));
    }
L3:
    _t145 = _t144 >> 2;
    _t148 = _t147 & 3;
    _t162 = _t145 - 8;
    if(_t145 < 8) {
        switch( *((intOrPtr*)(_t145 * 4 +  &M0040280C))) {
            case 0:
                goto L9;
            case 1:
L10:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 24)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 24));
                goto L11;
            case 2:
L11:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 20)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 20));
                goto L12;
            case 3:
L12:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 16)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 16));
                goto L13;
            case 4:
L13:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 12)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 12));
                goto L14;
            case 5:
L14:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 8)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 8));
                goto L15;
            case 6:
L15:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 4)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 4));
                goto L16;
            case 7:
L16:
                goto ( *((intOrPtr*)(_t148 * 4 +  &M00402878)));
        }
    }
    _push(_t145 << 2);
    _push(_t156);
    _push(_t151);
    memcpy();
    __esp = __esp + 12;
    _t151 = _t156 + _t145 + _t145;
    _t144 = 0;
    switch( *((intOrPtr*)(_t148 * 4 +  &M00402878))) {
        case 0:
            return _a4;
            goto L33;
        case 1:
             *__edi = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 2:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 3:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
    }
L9:
     *((intOrPtr*)(_t151 + _t145 * 4 - 28)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 28));
    goto L10;
}

L00402A65(_unknown_ __eax)
{
    _unknown_ _t1;
    void* _t2;

    _t2 = HeapAlloc( *4217160, 0, 320);
     *4216600 = _t2;
    if(_t2 == 0) {
        return ;
    }
     *4216592 =  *4216592 & 0;
     *4216596 =  *4216596 & 0;
    _push(1);
     *4216588 = _t2;
     *4216580 = 16;
    _pop(__eax);
    return;
}

L00402AA3(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr _t8;
    _unknown_ _t9;
    _unknown_ _t11;

    __esp = __esp;
    _t8 =  *4216600;
    _t11 = _t8 + ( *4216596 +  *4216596 * 4) * 4;
    while(_t8 < _t11) {
        if(_a4 -  *((intOrPtr*)(_t8 + 12)) < 1048576) {
            return _t8;
        }
        _t8 = _t8 + 20;
    }
}

L00402ACE(signed int* _a4, signed int _a8, signed int _a11)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    signed int* _v20;
    signed int _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t180;
    signed int* _t182;
    signed int* _t188;
    signed int* _t193;
    _unknown_ _t196;
    signed int _t198;
    _unknown_ _t199;
    _unknown_ _t201;
    _unknown_ _t203;
    signed int* _t205;
    signed int _t209;
    intOrPtr _t216;
    signed int _t218;
    signed int _t238;
    signed int _t244;
    signed int _t252;
    signed int _t256;
    signed int _t263;
    signed int _t264;
    _unknown_ _t265;
    signed int _t268;
    _unknown_ _t272;
    signed int _t274;
    _unknown_ _t275;
    signed int _t277;
    _unknown_ _t278;
    signed int _t279;
    signed int _t282;
    _unknown_ _t283;
    _unknown_ _t288;
    signed int _t290;
    _unknown_ _t291;
    signed int _t293;
    _unknown_ _t294;
    signed int _t297;
    _unknown_ _t301;
    _unknown_ _t302;
    _unknown_ _t307;
    signed int _t312;

    _t263 = _a8;
    _t205 = _a4;
    _push(_t196);
    _push(_t294);
    _t180 = _t205[4];
    _t264 = _t263 + -4;
    _push(_t278);
    _t297 = _t263 - _t205[3] >> 15;
    _t279 =  *(_t264 - 4);
    _t198 =  *((intOrPtr*)(_t263 - 4)) - 1;
    _v8 = _t279;
    _v16 = _t198;
    _v20 = _t297 * _t297 + _t180 + 324;
    _t209 =  *(_t198 + _t264);
    _v12 = _t209;
    if((_t209 & 4294967295 & 1) != 0) {
L10:
        _t282 = (_t198 >> 4) - 1;
        _t302 = _t282 - 63;
        if(_t302 > 0) {
            _push(63);
            _pop(__edi);
        }
        _v24 = _v8 & 1;
        if(_t302 == 0) {
            _t268 = _t264 - _v8;
            _push(63);
            _v12 = _t268;
            _t238 = (_v8 >> 4) - 1;
            _pop(__edx);
            _a8 = _t238;
            if(_t238 > _t268) {
                _a8 = _t268;
                _t238 = _t268;
            }
            _t198 = _t198 + _v8;
            _v16 = _t198;
            _t282 = (_t198 >> 4) - 1;
            if(_t282 > _t268) {
                _t282 = _t268;
            }
            if(_t238 != _t282) {
                if( *((intOrPtr*)(_v12 + 4)) ==  *((intOrPtr*)(_v12 + 8))) {
                    _t244 = _a8;
                    _t307 = _t244 - 32;
                    if(_t307 >= 0) {
                        _t274 =  !(-2147483648 >> (_t244 + -32 & 4294967295));
                         *(_t180 + 196 + _t297 * 4) =  *(_t180 + 196 + _t297 * 4) & _t274;
                         *((char*)(_a8 + _t180 + 4)) =  *((char*)(_a8 + _t180 + 4)) - 1;
                        if(__eflags == 0) {
                            _a4[1] = _a4[1] & _t274;
                        }
                    } else {
                        _t277 =  !(-2147483648 >> (_t244 & 4294967295));
                         *(_t180 + 68 + _t297 * 4) =  *(_t180 + 68 + _t297 * 4) & _t277;
                         *((char*)(_t244 + _t180 + 4)) =  *((char*)(_t244 + _t180 + 4)) - 1;
                        if(_t307 == 0) {
                             *_a4 =  *_a4 & _t277;
                        }
                    }
                }
                 *((intOrPtr*)( *((intOrPtr*)(_v12 + 8)) + 4)) =  *((intOrPtr*)(_v12 + 4));
                 *((intOrPtr*)( *((intOrPtr*)(_v12 + 4)) + 8)) =  *((intOrPtr*)(_v12 + 8));
            }
            _t264 = _v12;
        }
        if(_v24 != 0 || _a8 != _t282) {
             *(_t264 + 4) =  *(_v20 + _t282 * 8 + 4);
            _t216 = _v20 + _t282 * 8;
             *((intOrPtr*)(_t264 + 8)) = _t216;
             *(_t216 + 4) = _t264;
             *( *(_t264 + 4) + 8) = _t264;
            _t218 =  *(_t264 + 4);
            if(_t218 ==  *((intOrPtr*)(_t264 + 8))) {
                _a11 = _t218 & 4294967295;
                 *(_t282 + _t180 + 4) = _t218 & 4294967295;
                if(_t282 >= 32) {
                    __eflags = _a11;
                    if(_a11 == 0) {
                        _a4[1] = _a4[1] | -2147483648 >> (_t282 - 32 & 4294967295);
                    }
                     *(_t180 + 196 + _t297 * 4) =  *(_t180 + 196 + _t297 * 4) | _t282;
                } else {
                    _t312 = _a11;
                    if(_t312 == 0) {
                         *_a4 =  *_a4 | -2147483648 >> (_t282 & 4294967295);
                    }
                     *(_t180 + 68 + _t297 * 4) =  *(_t180 + 68 + _t297 * 4) | -2147483648 >> (_t282 & 4294967295);
                }
                _t198 = _v16;
            }
        }
        _t181 = _v20;
         *_t264 = _t198;
         *(_t264 - 4 + _t198) = _t198;
         *_v20 =  *_v20 - 1;
        if(_t312 != 0) {
L47:
            _pop(__edi);
            _pop(__esi);
            _pop(__ebx);
            return;
        } else {
            _t182 =  *4216592;
            if(_t182 == 0) {
L45:
                _t181 = _a4;
                goto L46;
            }
            _t282 = VirtualFree;
            _t198 = 32768;
             *VirtualFree(( *4216584 << 15) + _t182[3], _t198, 16384);
            ( *4216592)[2] = ( *4216592)[2] | -2147483648 >> ( *4216584 & 4294967295);
             *(( *4216592)[4] + 196 +  *4216584 * 4) =  *(( *4216592)[4] + 196 +  *4216584 * 4) & 0;
            ( *4216592)[4][0x10] = ( *4216592)[4][0x10] - 1;
            _t188 =  *4216592;
            if( *((char*)(_t188[4] + 67)) == 0) {
                _t188[1] = _t188[1] & 254;
                _t188 =  *4216592;
            }
            if(_t188[2] != 255) {
                goto L45;
            } else {
                _push(_t198);
                _push(0);
                _push(_t188[3]);
                 *_t282();
                HeapFree( *4217160, 0, ( *4216592)[4]);
                _t193 =  *4216592;
                _push(( *4216596 +  *4216596 * 4 << 2) - _t193 +  *4216600 - 20);
                _push( &(_t193[5]));
                _push(_t193);
                L00403800();
                _t181 = _a4;
                __esp = __esp + 12;
                 *4216596 =  *4216596 - 1;
                if(_t181 >  *4216592) {
                    _t181 = _t181 - 20;
                }
                 *4216588 =  *4216600;
            }
L46:
             *4216592 = _t181;
             *4216584 = _t297;
            goto L47;
        }
    } else {
        _push(63);
        _t252 = (_t209 >> 4) - 1;
        _pop(__edi);
        _a8 = _t252;
        if(_t252 > _t279) {
            _a8 = _t279;
        }
        if( *((intOrPtr*)(_t264 + 4 + _t198)) ==  *((intOrPtr*)(_t198 + _t264 + 8))) {
            _t256 = _a8;
            _t301 = _t256 - 32;
            if(_t301 >= 0) {
                _t290 =  !(-2147483648 >> (_t256 + -32 & 4294967295));
                 *(_t180 + 196 + _t297 * 4) =  *(_t180 + 196 + _t297 * 4) & _t290;
                 *((char*)(_a8 + _t180 + 4)) =  *((char*)(_a8 + _t180 + 4)) - 1;
                if(__eflags == 0) {
                    _a4[1] = _a4[1] & _t290;
                }
            } else {
                _t293 =  !(-2147483648 >> (_t256 & 4294967295));
                 *(_t180 + 68 + _t297 * 4) =  *(_t180 + 68 + _t297 * 4) & _t293;
                 *((char*)(_t256 + _t180 + 4)) =  *((char*)(_t256 + _t180 + 4)) - 1;
                if(_t301 == 0) {
                     *_a4 =  *_a4 & _t293;
                }
            }
        }
    }
     *((intOrPtr*)( *((intOrPtr*)(_t198 + _t264 + 8)) + 4)) =  *((intOrPtr*)(_t264 + 4 + _t198));
    _t198 = _t198 + _v12;
     *((intOrPtr*)( *((intOrPtr*)(_t264 + 4 + _t198)) + 8)) =  *((intOrPtr*)(_t198 + _t264 + 8));
    _v16 = _t198;
    goto L10;
}

L00402DF9(_unknown_ __eax, signed int _a4, signed int _a7)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t170;
    signed int _t173;
    signed int _t176;
    signed int* _t177;
    _unknown_ _t178;
    _unknown_ _t182;
    signed int _t183;
    _unknown_ _t184;
    signed int _t186;
    _unknown_ _t187;
    signed int _t189;
    signed int _t192;
    signed int _t194;
    signed int* _t195;
    signed int _t200;
    signed int _t203;
    intOrPtr _t204;
    signed int _t205;
    signed int _t211;
    signed int _t212;
    signed int _t214;
    _unknown_ _t231;
    signed int _t237;
    signed int _t238;
    _unknown_ _t241;
    signed int* _t242;
    intOrPtr* _t243;
    _unknown_ _t246;
    _unknown_ _t247;
    signed int _t249;
    _unknown_ _t254;
    _unknown_ _t256;
    _unknown_ _t258;
    signed int _t268;
    signed int _t269;
    signed int _t274;
    signed int _t275;
    _unknown_ _t276;
    _unknown_ _t280;
    _unknown_ _t283;

    _t237 =  *4216600;
    _push(_t182);
    _push(_t268);
    _push(_t247);
    _t248 = _t237 + ( *4216596 +  *4216596 * 4) * 4;
    _t173 = _a4;
    _v8 = _t248;
    _t192 = _t173 + 23 & 240;
    _v20 = _t192;
    _t194 = (_t192 >> 4) - 1;
    if(_t194 >= 32) {
        _t194 = _t194 + -32;
        _t269 = 0;
        _v16 = 0;
        _v12 = (_t173 | 255) >> (_t194 & 4294967295);
    } else {
        _t269 = (_t268 | 255) >> (_t194 & 4294967295);
        _v12 = _v12 | 255;
        _v16 = _t269;
    }
    _t176 =  *4216588;
    _t183 = _t176;
    _t280 = _t183 - _t248;
    _a4 = _t183;
    if(_t280 >= 0) {
L6:
        if(_t183 != _v8) {
L27:
             *4216588 = _t183;
            _t177 =  *(_t183 + 16);
            _t238 =  *_t177;
            __eflags = _t238 - 255;
            _v8 = _t238;
            if(__eflags == 0 || __eflags == 0) {
                _v8 = _v8 & 0;
                _t195 =  &(_t177[0x11]);
                _t269 = _v16;
                if(__eflags != 0) {
L31:
                    _t238 = _v8;
                    goto L32;
                } else {
                    goto L30;
                }
                while(1) {
L30:
                    _v8 = _v8 + 1;
                    _t195 =  &(_t195[1]);
                    if(__eflags != 0) {
                        break;
                    }
                }
                goto L31;
            } else {
L32:
                _t249 = 0;
                _v16 =  &(_t177[0x51]) + _t238 * _t238;
                _t200 =  *(_t177 + 68 + _t238 * 4) & _t269;
                if(__eflags == 0) {
                    _push(32);
                    _t200 =  *(_t177 + 196 + _t238 * 4) & _v12;
                    _pop(__edi);
                }
                while(1) {
                    __eflags = _t200;
                    if(_t200 < 0) {
                        break;
                    }
                    _t200 = _t200 << 1;
                    _t249 = _t249 + 1;
                }
                _t242 =  *(_v16 + 4 + _t249 * 8);
                _t203 =  *_t242 - _v20;
                _v12 = _t203;
                _t274 = (_t203 >> 4) - 1;
                __eflags = _t274 - 63;
                if(_t274 > 63) {
                    _push(63);
                    _pop(__esi);
                }
                __eflags = _t274 - _t249;
                if(_t274 == _t249) {
L56:
                    __eflags = _t203;
                    if(_t203 != 0) {
                         *_t242 = _t203;
                         *(_t203 + _t242 - 4) = _t203;
                    }
                    goto L59;
                } else {
                    __eflags = _t242[1] - _t242[2];
                    if(_t242[1] != _t242[2]) {
L46:
                        __eflags = _v12;
                         *(_t242[2] + 4) = _t242[1];
                         *(_t242[1] + 8) = _t242[2];
                        if(_v12 == 0) {
                            _t203 = _v12;
                            goto L59;
                        }
                        goto L47;
L59:
                        _t275 = _v20;
                        _t243 = _t242 + _t203;
                        _t204 = _t275 + 1;
                         *_t243 = _t204;
                         *((intOrPtr*)(_t243 + _t275 - 4)) = _t204;
                        _t269 = _v16;
                        _t205 =  *_t269;
                        __eflags = _t205;
                        _t248 = _t205 + 1;
                         *_t269 = _t205 + 1;
                        if(_t205 == 0) {
                            __eflags = _t183 -  *4216592;
                            if(_t183 ==  *4216592) {
                                __eflags = _v8 -  *4216584;
                                if(_v8 ==  *4216584) {
                                     *4216592 =  *4216592 & 0;
                                }
                            }
                        }
                         *_t177 = _v8;
                        _t178 = _t243 + 4;
L64:
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebx);
                        return _t178;
                    }
                    __eflags = _t249 - 32;
                    if(__eflags >= 0) {
                        _t186 =  !(-2147483648 >> (_t249 - 32 & 4294967295));
                         *(_t177 + 196 + _v8 * 4) =  *(_t177 + 196 + _v8 * 4) & _t186;
                         *((char*)(_t177 + _t249 + 4)) =  *((char*)(_t177 + _t249 + 4)) - 1;
                        _v24 = _t186;
                        if(__eflags != 0) {
                            goto L45;
                        }
                        goto L44;
                    }
                    _t189 =  !(-2147483648 >> (_t249 & 4294967295));
                    _v24 = _t189;
                     *(_t177 + 68 + _v8 * 4) = _t189 &  *(_t177 + 68 + _v8 * 4);
                     *((char*)(_t177 + _t249 + 4)) =  *((char*)(_t177 + _t249 + 4)) - 1;
                    if(__eflags != 0) {
L45:
                        _t183 = _a4;
                        goto L46;
                    }
                    _t183 = _a4;
                     *_t183 =  *_t183 & _v24;
                    goto L46;
L44:
                    _t183 = _a4;
                     *(_t183 + 4) =  *(_t183 + 4) & _v24;
                    goto L46;
L47:
                    _t211 = _v16;
                    _t212 = _t211 + _t274 * 8;
                    _t242[1] =  *(_t211 + 4 + _t274 * 8);
                    _t242[2] = _t212;
                     *(_t212 + 4) = _t242;
                     *(_t242[1] + 8) = _t242;
                    _t214 = _t242[1];
                    __eflags = _t214 - _t242[2];
                    if(_t214 == _t242[2]) {
                        __eflags = _t274 - 32;
                        _a7 = _t214 & 4294967295;
                        if(_t274 >= 32) {
                            __eflags = _a7;
                             *( &(_t177[1]) + _t274) = _t214 & 4294967295;
                            if(_a7 == 0) {
                                 *(_t183 + 4) =  *(_t183 + 4) | -2147483648 >> (_t274 - 32 & 4294967295);
                            }
                             *(_t177 + 196 + _v8 * 4) =  *(_t177 + 196 + _v8 * 4) | -2147483648 >> (_t274 - 32 & 4294967295);
                        } else {
                            __eflags = _a7;
                             *( &(_t177[1]) + _t274) = _t214 & 4294967295;
                            if(_a7 == 0) {
                                 *_t183 =  *_t183 | -2147483648 >> (_t274 & 4294967295);
                            }
                             *(_t177 + 68 + _v8 * 4) =  *(_t177 + 68 + _v8 * 4) | -2147483648 >> (_t274 & 4294967295);
                        }
                    }
                    _t203 = _v12;
                    goto L56;
                }
            }
            goto L30;
        } else {
            _t183 = _t237;
            goto L8;
        }
        while(1) {
L8:
            _t283 = _t183 - _t176;
            _a4 = _t183;
            if(_t283 >= 0) {
                break;
            }
            _t248 =  *_t183 & _t269;
            _t194 =  *(_t183 + 4) & _v12 |  *_t183 & _t269;
            if(_t283 != 0) {
                __eflags = _t183 - _t176;
                break;
            } else {
                _t183 = _t183 + 20;
                continue;
            }
            while(1) {
L13:
                __eflags = _t183 - _v8;
                if(__eflags >= 0) {
                    break;
                }
                __eflags =  *(_t183 + 8);
                if( *(_t183 + 8) != 0) {
                    __eflags = _t183 - _v8;
                    break;
                } else {
                    _t183 = _t183 + 20;
                    _a4 = _t183;
                    continue;
                }
L18:
                _t183 = _t237;
                while(1) {
                    __eflags = _t183 - _t176;
                    _a4 = _t183;
                    if(__eflags >= 0) {
                        break;
                    }
                    __eflags =  *(_t183 + 8);
                    if( *(_t183 + 8) != 0) {
                        __eflags = _t183 - _t176;
                        break;
                    }
                    _t183 = _t183 + 20;
                }
                if(__eflags != 0) {
L25:
                     *( *(_t183 + 16)) = L004031B3(_t194, _t183);
                    __eflags =  *( *(_t183 + 16)) - 255;
                    if( *( *(_t183 + 16)) != 255) {
                        goto L27;
                    }
                    goto L26;
                }
                _t183 = L00403102();
                __eflags = _t183;
                _a4 = _t183;
                if(_t183 == 0) {
                    goto L26;
                }
                goto L25;
L26:
                _t178 = 0;
                goto L64;
            }
            if(__eflags != 0) {
                goto L25;
            }
            goto L18;
        }
        if(__eflags != 0) {
            goto L27;
        }
        goto L13;
    } else {
        goto L4;
    }
    while(1) {
L4:
        _t248 =  *_t183 & _t269;
        _t194 =  *(_t183 + 4) & _v12 |  *_t183 & _t269;
        if(_t280 != 0) {
            break;
        }
L5:
        _t183 = _t183 + 20;
        _a4 = _t183;
        if(_t183 < _v8) {
            continue;
        }
        goto L6;
    }
    goto L6;
}

L00403102()
{
    long __edi;
    void* __esi;
    signed int _t15;
    void* _t17;
    _unknown_ _t18;
    void* _t19;
    _unknown_ _t22;
    void* _t25;
    signed int _t26;

    _t15 =  *4216596;
    _t26 =  *4216580;
    __edi = 0;
    if(_t15 == _t26) {
        _t25 = HeapReAlloc( *4217160, 0,  *4216600, _t26 + 80 + _t26 * 4 << 2);
        if(_t25 == 0) {
            return 0;
        }
         *4216580 =  *4216580 + 16;
         *4216600 = _t25;
        _t15 =  *4216596;
    }
    _push(16836);
    _push(8);
    _push( *4217160);
    __esi =  &(( *4216600)[_t15 + _t15 * 4]);
    _t17 = HeapAlloc();
    (__esi)[4] = _t17;
    if(_t17 == __edi) {
        return 0;
    }
    _t19 = VirtualAlloc(__edi, 1048576, 8192, 4);
    (__esi)[3] = _t19;
    if(_t19 != __edi) {
        (__esi)[2] = (__esi)[2] | 255;
         *__esi = __edi;
        (__esi)[1] = __edi;
         *4216596 =  *4216596 + 1;
         *((__esi)[4]) =  *((__esi)[4]) | 255;
        return __esi;
    } else {
        HeapFree( *4217160, __edi, (__esi)[4]);
        return 0;
    }
    return __eax;
}

L004031B3(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t53;
    intOrPtr _t56;
    signed int _t57;
    signed int _t59;
    intOrPtr _t60;
    signed int _t61;
    intOrPtr* _t62;
    _unknown_ _t63;
    signed int _t64;
    intOrPtr _t66;
    intOrPtr _t67;
    signed int _t68;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t75;
    _unknown_ _t78;
    signed int _t81;
    _unknown_ _t82;
    intOrPtr _t83;

    _push(__ecx);
    _t66 = _a4;
    _push(_t63);
    _push(_t82);
    _push(_t78);
    _t83 =  *((intOrPtr*)(_t66 + 16));
    _t53 =  *(_t66 + 8);
    _t64 = 0;
    while(1) {
        __eflags = _t53;
        if(__eflags < 0) {
            break;
        }
        _t53 = _t53 << 1;
        _t64 = _t64 + 1;
    }
    _push(63);
    _pop(__edx);
    _t56 = _t64 * _t64 + _t83 + 324;
    _v8 = _t56;
    while(1) {
L4:
         *((intOrPtr*)(_t56 + 8)) = _t56;
         *((intOrPtr*)(_t56 + 4)) = _t56;
        _t56 = _t56 + 8;
        _t73 = _t73 - 1;
        if(__eflags == 0) {
            break;
        }
    }
    _push(4);
    _t81 = (_t64 << 15) +  *((intOrPtr*)(_t66 + 12));
    _push(4096);
    _push(32768);
    _push(_t81);
    _t57 = VirtualAlloc();
    __eflags = _t57;
    if(_t57 != 0) {
        _t74 = _t81 + 28672;
        __eflags = _t81 - _t74;
        if(_t81 <= _t74) {
            _t62 = _t81 + 16;
            while(1) {
L9:
                 *(_t62 - 8) =  *(_t62 - 8) | 255;
                 *(_t62 + 4076) =  *(_t62 + 4076) | 255;
                 *((intOrPtr*)(_t62 - 4)) = 4080;
                 *_t62 = _t62 + 4092;
                 *((intOrPtr*)(_t62 + 4)) = _t62 + -4100;
                 *((intOrPtr*)(_t62 + 4072)) = 4080;
                _t62 = _t62 + 4096;
                __eflags = _t62 - 16 - _t74;
                if(_t62 - 16 > _t74) {
                    break;
                }
            }
        }
        _t67 = _t81 + 12;
        _t59 = _v8 + 504;
        _push(1);
        _pop(__edi);
         *((intOrPtr*)(_t59 + 4)) = _t67;
         *(_t67 + 8) = _t59;
        _t68 = _t74 + 12;
         *(_t59 + 8) = _t68;
         *(_t68 + 4) = _t59;
         *(_t83 + 68 + _t64 * 4) =  *(_t83 + 68 + _t64 * 4) & 0;
         *(_t83 + 196 + _t64 * 4) = _t81;
        __eflags = _t59 & 4294967295;
        _t60 = _a4;
         *(_t83 + 67) = _t68 & 4294967295;
        if((_t59 & 4294967295) == 0) {
             *(_t60 + 4) =  *(_t60 + 4) | _t81;
        }
         *(_t60 + 8) =  *(_t60 + 8) &  !(-2147483648 >> (_t64 & 4294967295));
        _t61 = _t64;
L13:
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t61;
    }
    _t61 = _t57 | 255;
    goto L13;
}

L004032AE(_unknown_ __eax, _unknown_ __esp, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    struct HINSTANCE__* __ebx;
    struct HINSTANCE__* __edi;
    _unknown_ _t4;
    struct HINSTANCE__* _t5;
    struct HINSTANCE__* _t6;
    _unknown_ _t7;

    __esp = __esp;
    __ebx = 0;
    if( *4216520 == 0) {
        _t6 = LoadLibraryA("user32.dll");
        __edi = _t6;
        if(__edi == 0) {
            return ;
        }
         *GetProcAddress(__edi, "MessageBoxA");
         *4216520 = _t6;
        if(_t6 == 0) {
            return ;
        }
         *GetProcAddress(__edi, "GetActiveWindow");
        _push("GetLastActivePopup");
        _push(__edi);
         *4216524 = _t6;
         *GetProcAddress();
         *4216528 = _t6;
    }
    _t5 =  *4216524;
    if(_t5 != 0) {
        _t5->i();
        __ebx = _t5;
        if(__ebx != 0) {
            _t5 =  *4216528;
            if(_t5 != 0) {
                _push(__ebx);
                _t5->i();
                __ebx = _t5;
            }
        }
    }
    _push(_a12);
    _push(_a8);
    _push(_a4);
    _push(__ebx);
     *4216520();
    return;
}

L00403340(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8, unsigned int _a12)
{
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int _t31;
    _unknown_ _t37;
    signed int _t38;
    unsigned int _t39;
    unsigned int _t40;
    unsigned int _t41;
    _unknown_ _t42;
    signed int _t44;
    _unknown_ _t45;
    _unknown_ _t48;
    signed int _t49;
    _unknown_ _t50;
    signed int _t51;
    signed int _t53;
    signed int _t54;

    __esp = __esp;
    _t31 = __eax;
    _t39 = _a12;
    _push(_t48);
    if(_t39 == 0) {
L19:
        _pop(__edi);
        return _a4;
    } else {
        _push(_t50);
        _push(_t37);
        _t38 = _t39;
        _t51 = _a8;
        _t53 = _t51 & 3;
        _t49 = _a4;
        if(_t53 != 0) {
            while(1) {
                _t51 = _t51 + 1;
                 *_t49 = _t31 & 4294967295;
                _t49 = _t49 + 1;
                _t39 = _t39 - 1;
                if(__eflags == 0) {
                    break;
                }
                __eflags = _t31 & 4294967295;
                if((_t31 & 4294967295) == 0) {
                    __eflags = _t49 & 3;
                    if(__eflags == 0) {
L15:
                        _t38 = _t39;
                        _t40 = _t39 >> 2;
                        if(__eflags != 0) {
                            goto L31;
                        }
                        goto L16;
                    } else {
                        while(1) {
                             *_t49 = _t31 & 4294967295;
                            _t49 = _t49 + 1;
                            _t39 = _t39 - 1;
                            if(__eflags == 0) {
                                break;
                            }
                            __eflags = _t49 & 3;
                            if(__eflags != 0) {
                                continue;
                            } else {
                                goto L15;
                            }
                            goto L35;
                        }
                        goto L34;
                    }
                } else {
                    __eflags = _t51 & 3;
                    if(__eflags != 0) {
                        continue;
                    } else {
                        _t38 = _t39;
                        _t41 = _t39 >> 2;
                        if(__eflags != 0) {
                            goto L21;
                        } else {
                            goto L8;
                        }
                    }
                }
                goto L35;
            }
            goto L11;
        } else {
            _t41 = _t39 >> 2;
            if(_t53 != 0) {
                goto L21;
                do {
L21:
                    _t31 =  *_t51 ^ 255 ^ 2130640639 +  *_t51;
                    _t44 =  *_t51;
                    _t51 = _t51 + 4;
                    __eflags = _t31 & -2130640640;
                    if(__eflags == 0) {
                        goto L20;
                    } else {
                        __eflags = _t44 & 4294967295;
                        if(__eflags == 0) {
                             *_t49 = 0;
L30:
                            _t49 = _t49 + 4;
                            _t31 = 0;
                            _t40 = _t41 - 1;
                            if(__eflags != 0) {
L31:
                                _t31 = 0;
                                while(1) {
L32:
                                     *_t49 = _t31;
                                    _t49 = _t49 + 4;
                                    _t40 = _t40 - 1;
                                    if(__eflags == 0) {
                                        break;
                                    }
                                }
                            }
                            _t38 = _t38 & 3;
                            if(__eflags != 0) {
                                goto L16;
                            }
L34:
                            _pop(__ebx);
                            _pop(__esi);
                            _pop(__edi);
                            return _a4;
                            goto L35;
                        }
                        __eflags = _t44 & 4294967295;
                        if(__eflags == 0) {
                             *_t49 = _t44 & 255;
                            goto L30;
                        }
                        __eflags = _t44 & 16711680;
                        if(__eflags == 0) {
                             *_t49 = _t44 & 65535;
                            goto L30;
                        }
                        __eflags = _t44 & -16777216;
                        if(__eflags != 0) {
                            goto L20;
                        } else {
                             *_t49 = _t44;
                            goto L30;
                        }
                    }
                    goto L35;
L20:
                     *_t49 = _t44;
                    _t49 = _t49 + 4;
                    _t41 = _t41 - 1;
                } while(__eflags != 0);
L8:
                _t38 = _t38 & 3;
                if(__eflags == 0) {
                    goto L11;
                } else {
                    goto L9;
                }
            } else {
                while(1) {
L9:
                    _t51 = _t51 + 1;
                     *_t49 = _t31 & 4294967295;
                    _t49 = _t49 + 1;
                    _t54 = _t31 & 4294967295;
                    if(_t54 == 0) {
                        break;
                    }
                    _t38 = _t38 - 1;
                    if(_t54 != 0) {
                        continue;
                    } else {
L11:
                        _pop(__ebx);
                        _pop(__esi);
                        _pop(__edi);
                        return _a4;
                    }
                    goto L35;
                }
L17:
                _t38 = _t38 - 1;
                if(__eflags != 0) {
L16:
                     *_t49 = _t31 & 4294967295;
                    _t49 = _t49 + 1;
                    goto L17;
                }
                _pop(__ebx);
                _pop(__esi);
                goto L19;
            }
        }
    }
L35:
}

L0040343E(_unknown_ __eax, int _a4, int _a8, signed char _a9, char* _a12, int _a16, short* _a20, int _a24, int _a28, signed int _a32)
{
    signed int _v8;
    int _v20;
    int _v28;
    int _v32;
    int _v36;
    short* _v40;
    int _v44;
    char _v60;
    int __ebx;
    _unknown_ __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t64;
    int _t66;
    int _t67;
    int _t84;
    _unknown_ _t87;
    _unknown_ _t89;
    _unknown_ _t90;

    _push(255);
    _push(4211760);
    _push(4202116);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp - 28;
    _push(__ebx);
    _push(__esi);
    _push(_t89);
    _v28 = __esp;
    if( *4216564 != 0) {
L5:
        if(_a16 > 0) {
            _push(_a16);
            _push(_a12);
            _t84 = L00403662(__esp);
            _pop(__ecx);
            _pop(__ecx);
            _a16 = _t84;
        }
        _t66 =  *4216564;
        if(_t66 != 2) {
            if(_t66 != 1) {
                goto L21;
            }
        } else {
            _push(_a24);
            _push(_a20);
            _push(_a16);
            _push(_a12);
            _push(_a8);
            _push(_a4);
            _t67 = LCMapStringA();
            goto L22;
        }
L10:
        if(_a28 == 0) {
            _a28 =  *4216556;
        }
        _push(0);
        _push(0);
        _push(_a16);
        _push(_a12);
        asm("sbb eax, eax");
        _push(( ~_a32 & 8) + 1);
        _push(_a28);
        __ebx = MultiByteToWideChar();
        _v32 = __ebx;
        if(__ebx == 0) {
            goto L21;
        } else {
            _v8 = 0;
            L00403B40(__ebx + __ebx + 3, _t87, __esp);
            _v28 = __esp;
            _v40 = __esp;
            _v8 = _v8 | 255;
            if(_v40 == 0 || MultiByteToWideChar(_a28, 1, _a12, _a16, _v40, __ebx) == 0) {
                goto L21;
            } else {
                __esi = LCMapStringW(_a4, _a8, _v40, __ebx, 0, 0);
                _v44 = __esi;
                if(__esi == 0) {
                    goto L21;
                }
                if((_a9 & 4) == 0) {
                    _v8 = 1;
                    L00403B40(__esi + __esi + 3, _t87, __esp);
                    _v28 = __esp;
                    __ebx = __esp;
                    _v36 = __ebx;
                    _v8 = _v8 | 255;
                    if(__ebx == 0 || LCMapStringW(_a4, _a8, _v40, _v32, __ebx, __esi) == 0) {
                        goto L21;
                    } else {
                        _push(0);
                        _push(0);
                        if(_a24 != 0) {
                            _push(_a24);
                            _push(_a20);
                        } else {
                            _push(0);
                            _push(0);
                        }
                        _push(__esi);
                        _push(__ebx);
                        _push(544);
                        _push(_a28);
                        __esi = WideCharToMultiByte();
                        if(__esi == 0) {
                            goto L21;
                        } else {
                            goto L30;
                        }
                    }
                    goto L22;
                }
                if(_a24 == 0 || __esi <= _a24 && LCMapStringW(_a4, _a8, _v40, __ebx, _a20, _a24) != 0) {
L30:
                    _t67 = __esi;
                } else {
                    goto L21;
                }
            }
        }
        goto L22;
    }
    _push(0);
    _push(0);
    _push(1);
    _pop(__ebx);
    _push(__ebx);
    _push(4211756);
    __esi = 256;
    _push(__esi);
    _push(0);
    if(LCMapStringW() == 0) {
        _push(0);
        _push(0);
        _push(__ebx);
        _push(4211752);
        _push(__esi);
        _push(0);
        if(LCMapStringA() == 0) {
L21:
            _t67 = 0;
            goto L22;
        }
        goto L4;
L22:
        __esp =  &_v60;
         *fs:0x0] = _v20;
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t67;
    } else {
         *4216564 = __ebx;
        goto L5;
    }
L4:
     *4216564 = 2;
    goto L5;
}

L00403662(_unknown_ __esp, char* _a4, intOrPtr _a8)
{
    _unknown_ __esi;
    char* _t5;

    __esp = __esp;
    __edx = _a8;
    _t5 = _a4;
    _push(__esi);
    __ecx = __edx - 1;
    if(__edx != 0) {
        while( *_t5 != 0) {
            _t5 = _t5 + 1;
            __esi = __ecx;
            __ecx = __ecx - 1;
            if(__esi != 0) {
                continue;
            }
            goto L3;
        }
    }
L3:
    _pop(__esi);
    if( *_t5 != 0) {
        return __edx;
    }
    return _t5 - _a4;
    goto L6;
}

L0040368D(_unknown_ __eax, int _a4, char* _a8, int _a12, short* _a16, int _a20, intOrPtr _a24, signed int _a28)
{
    signed int _v8;
    short* _v20;
    short* _v28;
    char _v32;
    int _v36;
    short* _v40;
    char _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    short* __esi;
    _unknown_ __ebp;
    _unknown_ _t32;
    int _t34;
    int _t35;
    int _t40;
    _unknown_ _t43;
    int _t44;
    intOrPtr _t46;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;

    _push(255);
    _push(4211784);
    _push(4202116);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp - 24;
    _push(_t50);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    _t34 =  *4216568;
    if(_t34 != 0) {
L6:
        if(_t34 != 2) {
            if(_t34 != 1) {
                goto L18;
            } else {
                if(_a20 == 0) {
                    _a20 =  *4216556;
                }
                _push(0);
                _push(0);
                _push(_a12);
                _push(_a8);
                asm("sbb eax, eax");
                _push(( ~_a28 & 8) + 1);
                _push(_a20);
                _t40 = MultiByteToWideChar();
                _v36 = _t40;
                if(_t40 == 0) {
                    goto L18;
                } else {
                    _v8 = 0;
                    __edi = _t40 + _t40;
                    L00403B40(__edi + 3, _t52, __esp);
                    _v28 = __esp;
                    __esi = __esp;
                    _v40 = __esi;
                    _push(__edi);
                    _push(0);
                    _push(__esi);
                    L00403B70(__esp);
                    __esp =  &((__esp)[6]);
                    _v8 = _v8 | 255;
                    if(__esi == 0) {
                        goto L18;
                    } else {
                        _t44 = MultiByteToWideChar(_a20, 1, _a8, _a12, __esi, _v36);
                        if(_t44 == 0) {
                            goto L18;
                        } else {
                            _t35 = GetStringTypeW(_a4, __esi, _t44, _a16);
                        }
                    }
                }
            }
        } else {
            _t46 = _a24;
            if(_t46 == 0) {
                _t46 =  *4216540;
            }
            _push(_a16);
            _push(_a12);
            _push(_a8);
            _push(_a4);
            _push(_t46);
            _t35 = GetStringTypeA();
        }
    } else {
        _push( &_v32);
        _push(1);
        _pop(__esi);
        _push(__esi);
        _push(4211756);
        _push(__esi);
        if(GetStringTypeW() == 0) {
            _push( &_v32);
            _push(__esi);
            _push(4211752);
            _push(__esi);
            _push(0);
            _t34 = GetStringTypeA();
            if(_t34 == 0) {
L18:
                _t35 = 0;
            } else {
                _push(2);
                _pop(__eax);
                goto L5;
            }
        } else {
            _t34 = __esi;
L5:
             *4216568 = _t34;
            goto L6;
        }
    }
L19:
    __esp =  &_v56;
     *fs:0x0] = _v20;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _t35;
}

L004037D6(_unknown_ __esp, intOrPtr _a4)
{
    intOrPtr* _t2;
    _unknown_ _t3;

    __esp = __esp;
    _t2 =  *4216576;
    if(_t2 == 0) {
        return ;
    }
    _push(_a4);
     *_t2();
    _pop(__ecx);
    if(_t2 == 0) {
        return ;
    }
    _push(1);
    _pop(__eax);
    return;
}

L00403800(signed int _a4, intOrPtr _a8, unsigned int _a12)
{
    signed int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t129;
    signed int _t130;
    _unknown_ _t138;
    signed int _t140;
    signed int _t141;
    signed int _t143;
    signed int _t145;
    signed int _t146;
    signed int _t147;
    signed int _t148;
    _unknown_ _t149;
    signed int _t150;
    signed int _t151;
    _unknown_ _t152;
    signed int _t154;
    intOrPtr _t156;
    _unknown_ _t157;
    _unknown_ _t158;

    _t156 = _a8;
    _t144 = _a12;
    _t151 = _a4;
    _t147 = _t144;
    _t129 = _t144 + _t156;
    if(_t151 <= _t156 || _t151 >= _t129) {
        if((_t151 & 3) != 0) {
            _t130 = _t151;
            _t148 = 3;
            _t145 = _t144 - 4;
            if(_t162 < 0) {
                goto ( *((intOrPtr*)(_t145 * 4 +  &M00403958)));
            }
            goto L6;
        }
        goto L3;
L6:
        _t140 = _t130 & 3;
        _t145 = _t145 + _t140;
        goto ( *((intOrPtr*)(_t140 * 4 +  &M00403860)));
    } else {
        _t158 = _t144 + _t156 - 4;
        _t154 = _t144 + _t151 - 4;
        if((_t154 & 3) != 0) {
            _t141 = _t154;
            if(_t144 < 4) {
                goto ( *((intOrPtr*)(_t144 * 4 +  &M00403AE0)));
            }
            goto L26;
        }
        _t146 = _t144 >> 2;
        _t150 = _t147 & 3;
        if(_t146 < 8) {
            _t144 =  ~_t146;
            goto  *((intOrPtr*)( ~_t146 * 4 +  &M00403A90))[L28]goto ( *((intOrPtr*)( ~_t146 * 4 +  &M00403A90)));
            goto ( *((intOrPtr*)(0xc +  &M00403AE0)));
        }
        asm("std ");
        _push(_t146 << 2);
        _push(_t158);
        _push(_t154);
        memcpy();
        __esp = __esp + 12;
        _t154 = _t158 + _t146 + _t146;
        _t146 = 0;
        asm("cld ");
        switch( *((intOrPtr*)(_t150 * 4 +  &M00403AE0))) {
            case 0:
                return _a4;
                goto L33;
            case 1:
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 2:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L33;
            case 3:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
L33:
        }
L26:
        _t143 = _t141 & 3;
        _t144 = _t144 - _t143;
        goto ( *((intOrPtr*)(_t143 * 4 +  &M004039E8)));
    }
L3:
    _t145 = _t144 >> 2;
    _t148 = _t147 & 3;
    _t162 = _t145 - 8;
    if(_t145 < 8) {
        switch( *((intOrPtr*)(_t145 * 4 +  &M004038DC))) {
            case 0:
                goto L9;
            case 1:
L10:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 24)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 24));
                goto L11;
            case 2:
L11:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 20)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 20));
                goto L12;
            case 3:
L12:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 16)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 16));
                goto L13;
            case 4:
L13:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 12)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 12));
                goto L14;
            case 5:
L14:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 8)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 8));
                goto L15;
            case 6:
L15:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 4)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 4));
                goto L16;
            case 7:
L16:
                goto ( *((intOrPtr*)(_t148 * 4 +  &M00403948)));
        }
    }
    _push(_t145 << 2);
    _push(_t156);
    _push(_t151);
    memcpy();
    __esp = __esp + 12;
    _t151 = _t156 + _t145 + _t145;
    _t144 = 0;
    switch( *((intOrPtr*)(_t148 * 4 +  &M00403948))) {
        case 0:
            return _a4;
            goto L33;
        case 1:
             *__edi = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 2:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
        case 3:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L33;
    }
L9:
     *((intOrPtr*)(_t151 + _t145 * 4 - 28)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 28));
    goto L10;
}

L00403B40(_unknown_ __eax, _unknown_ __ecx, _unknown_ __esp, char _a4)
{
    _unknown_ _t7;
    _unknown_ _t8;
    char* _t11;
    _unknown_ _t13;
    _unknown_ _t15;
    _unknown_ _t17;

    __esp = __esp;
    _t7 = __eax;
    _push(__ecx);
    _t11 =  &_a4;
    if(_t7 >= 4096) {
        while(1) {
L1:
            _t11 = _t11 - 4096;
            _t7 = _t7 - 4096;
            if(_t7 < 4096) {
                break;
            }
        }
    }
    _t8 = __esp;
    __esp = _t11 - _t7;
    _push( *((intOrPtr*)(_t8 + 4)));
    return;
}

L00403B70(_unknown_ __esp, signed int _a4, _unknown_ _a8, signed int _a12)
{
    _unknown_ __edi;
    signed int _t11;
    signed int _t16;
    signed int _t18;
    unsigned int _t21;
    signed int _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    signed int _t25;
    _unknown_ _t27;
    signed int _t28;

    __esp = __esp;
    __edx = _a12;
    _t16 = _a4;
    if(__edx == 0) {
        return _a4;
    }
    _t11 = 0;
    _push(_t24);
    _t25 = _t16;
    _t27 = __edx - 4;
    if(_t27 < 0) {
        goto L7;
    } else {
        _t18 =  ~_t16 & 3;
        if(_t27 != 0) {
            __edx = __edx - _t18;
            while(1) {
L4:
                 *_t25 = _t11 & 4294967295;
                _t25 = _t25 + 1;
                _t18 = _t18 - 1;
                if(_t27 == 0) {
                    break;
                }
            }
        }
        _t11 = ((_t11 << 8) + _t11 << 16) + (_t11 << 8) + _t11;
        _t21 = __edx;
        __edx = __edx & 3;
        _t22 = _t21 >> 2;
        if(_t27 == 0) {
            goto L7;
        } else {
            _push(_t22 << 2);
            _push(_t11);
            _push(_t25);
            memset();
            __esp = __esp + 12;
            _t25 = _t25 + _t22;
            _t28 = __edx;
            if(_t28 != 0) {
                while(1) {
L7:
                     *_t25 = _t11 & 4294967295;
                    _t25 = _t25 + 1;
                    __edx = __edx - 1;
                    if(_t28 == 0) {
                        break;
                    }
                }
            }
        }
    }
L8:
    _pop(__edi);
    return _a4;
    goto L10;
}

L00403B70(_unknown_ __esp, signed int _a4, _unknown_ _a8, signed int _a12)
{
    _unknown_ __edi;
    signed int _t11;
    signed int _t16;
    signed int _t18;
    unsigned int _t21;
    signed int _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    signed int _t25;
    _unknown_ _t27;
    signed int _t28;

    __esp = __esp;
    __edx = _a12;
    _t16 = _a4;
    if(__edx == 0) {
        return _a4;
    }
    _t11 = 0;
    _push(_t24);
    _t25 = _t16;
    _t27 = __edx - 4;
    if(_t27 < 0) {
        goto L7;
    } else {
        _t18 =  ~_t16 & 3;
        if(_t27 != 0) {
            __edx = __edx - _t18;
            while(1) {
L4:
                 *_t25 = _t11 & 4294967295;
                _t25 = _t25 + 1;
                _t18 = _t18 - 1;
                if(_t27 == 0) {
                    break;
                }
            }
        }
        _t11 = ((_t11 << 8) + _t11 << 16) + (_t11 << 8) + _t11;
        _t21 = __edx;
        __edx = __edx & 3;
        _t22 = _t21 >> 2;
        if(_t27 == 0) {
            goto L7;
        } else {
            _push(_t22 << 2);
            _push(_t11);
            _push(_t25);
            memset();
            __esp = __esp + 12;
            _t25 = _t25 + _t22;
            _t28 = __edx;
            if(_t28 != 0) {
                while(1) {
L7:
                     *_t25 = _t11 & 4294967295;
                    _t25 = _t25 + 1;
                    __edx = __edx - 1;
                    if(_t28 == 0) {
                        break;
                    }
                }
            }
        }
    }
L8:
    _pop(__edi);
    return _a4;
    goto L10;
}

// Statistics:
//     627 Register nodes
//    1692 Temporaries nodes
//      93 Casts
//    1228 Statements
//     303 Labels
//     197 Gotos
//      52 Blocks
//    8517 Nodes
//      14 Assembly nodes
//     338 Unknown Types


