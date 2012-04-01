L0041100A(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, char _a16)
{
    char* _v8;
    intOrPtr _v12;
    intOrPtr* _v16;
    char _v48;
    intOrPtr _v52;
    _unknown_ __ebp;
    _unknown_ _t35;
    char* _t36;
    intOrPtr _t39;
    _unknown_ _t61;

    _t36 =  &_v48;
    _v16 = _t36;
    _v8 =  &_a16;
    if(_a12 == 0) {
        _push("format != NULL");
        _push(0);
        _push(93);
        _push("f:\vs70builds\3077\vc\crtbld\crt\src\sprintf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t36 == 1) {
            asm("int3 ");
        }
    }
    if(_a4 == 0) {
        _push("string != NULL");
        _push(0);
        _push(94);
        _push("f:\vs70builds\3077\vc\crtbld\crt\src\sprintf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t36 == 1) {
            asm("int3 ");
        }
    }
     *((intOrPtr*)(_v16 + 4)) = _a8;
     *((intOrPtr*)(_v16 + 12)) = 66;
     *((intOrPtr*)(_v16 + 8)) = _a4;
     *_v16 = _a4;
    _push(_v8);
    _t39 = _a12;
    _push(_t39);
    _push(_v16);
    L0041134D();
    __esp = __esp + 12;
    _v12 = _t39;
    if(_a4 == 0) {
        return _v12;
    }
     *((intOrPtr*)(_v16 + 4)) =  *((intOrPtr*)(_v16 + 4)) - 1;
    if( *((intOrPtr*)(_v16 + 4)) >= 0) {
         *((char*)( *_v16)) = 0;
        _v52 = 0;
         *_v16 =  *_v16 + 1;
        return _v12;
    }
    _v52 = L004114AB(0, _v16);
    return _v12;
}

L0041100F()
{
    _unknown_ _v8;
    WCHAR* _v12;
    short* _v16;
    char* _v20;
    _unknown_ _v24;
    CHAR* _v28;
    _unknown_ __ebp;
    _unknown_ _t61;
    _unknown_ _t62;
    _unknown_ _t65;
    _unknown_ _t66;
    _unknown_ _t70;
    _unknown_ _t71;
    _unknown_ _t75;
    _unknown_ _t76;
    _unknown_ _t81;
    _unknown_ _t88;

    _v12 = 0;
    _v28 = 0;
    if( *4364244 == 0) {
        _v12 = GetEnvironmentStringsW();
        if(_v12 == 0) {
            if(GetLastError() == 120) {
                 *4364244 = 2;
            }
        } else {
             *4364244 = 1;
        }
    }
    if( *4364244 != 1) {
        if( *4364244 != 2) {
            if( *4364244 != 0) {
                return 0;
            }
        }
        if(_v28 == 0) {
            _v28 = GetEnvironmentStrings();
            if(_v28 == 0) {
                return 0;
            }
        }
        _t58 = _v28;
        _v20 = _v28;
        while( *_v20 != 0) {
            _t58 =  &(_v20[1]);
            _v20 =  &(_v20[1]);
            if( *_v20 == 0) {
                _t58 =  &(_v20[1]);
                _v20 =  &(_v20[1]);
            }
        }
    } else {
        if(_v12 == 0) {
            _v12 = GetEnvironmentStringsW();
            if(_v12 == 0) {
                return 0;
            }
        }
        _v16 = _v12;
    }
    while(( *_v16 & 65535) != 0) {
        _v16 =  &(_v16[1]);
        if(( *_v16 & 65535) == 0) {
            _v16 =  &(_v16[1]);
        }
    }
}

L0041101E(signed int __eax)
{
    signed int _v8;
    intOrPtr _v12;
    intOrPtr* _v16;
    _unknown_ __ebp;
    _unknown_ _t72;
    _unknown_ _t84;
    _unknown_ _t88;

    _t49 = __eax;
    _v12 = -1;
    _v8 = 0;
    while(_v8 < 64) {
        if( *((intOrPtr*)(4370400 + _v8 * 4)) == 0) {
            _v16 = L00411064(_t49, 256, 2, "osfinfo.c", 133);
            if(_v16 == 0) {
                return _v12;
            }
            goto L15;
        }
        _v16 =  *((intOrPtr*)(4370400 + _v8 * 4));
        while(1) {
            _t88 = _v16 -  *((intOrPtr*)(4370400 + _v8 * 4)) + 256;
            if(_t88 >= 0) {
                break;
            }
            if(_t88 != 0) {
                _v16 = _v16 + 8;
                continue;
            } else {
                 *_v16 = -1;
                _v12 = (_v8 << 5) + (_v16 -  *((intOrPtr*)(4370400 + _v8 * 4)) >> 3);
                break;
            }
        }
        if(_v12 != 255) {
            return _v12;
        }
        _t49 = _v8 + 1;
        _v8 = _v8 + 1;
        continue;
L15:
         *((intOrPtr*)(4370400 + _v8 * 4)) = _v16;
         *4370324 =  *4370324 + 32;
        while(_v16 <  *((intOrPtr*)(4370400 + _v8 * 4)) + 256) {
             *(_v16 + 4) = 0;
             *_v16 = -1;
             *((char*)(_v16 + 5)) = 10;
            _v16 = _v16 + 8;
        }
    }
}

L00411023(intOrPtr _a4)
{
    _unknown_ _v8;
    signed int _v12;
    _unknown_ _v16;
    signed int _v20;
    intOrPtr _v24;
    _unknown_ _v38;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ __ebp;
    _unknown_ _t114;
    _unknown_ _t120;
    signed int _t128;
    _unknown_ _t143;
    _unknown_ _t153;

    _v24 =  *4361904;
    _a4 = L00419A50(_a4);
    _t141 = _a4;
    if(_a4 !=  *4369988) {
        if(_a4 != 0) {
            _v12 = 0;
            while(_v12 < 5) {
                _t128 = _v12 * _v12;
                _t152 =  *((intOrPtr*)(_t128 + 4361600));
                if( *((intOrPtr*)(_t128 + 4361600)) != _a4) {
                    _v12 = _v12 + 1;
                    continue;
                } else {
                    _v20 = 0;
                    while(_v20 < 257) {
                         *(_v20 + 4369728) = 0;
                        _v20 = _v20 + 1;
                    }
                }
                goto L61;
            }
        }
        L00419B60(_t141);
        L00419C00();
    }
L61:
    L00411087();
    return;
}

L00411028(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t6;

    _t6 = __ecx;
    _push(_t6);
    _v8 =  *4364588;
     *4364588 = _a4;
    return _v8;
}

L0041102D(_unknown_ __ecx, signed int _a4)
{
    signed int _v8;
    _unknown_ __ebp;
    signed int _t26;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t39;
    _unknown_ _t44;
    _unknown_ _t49;

    _t35 = __ecx;
    _push(_t35);
    _t26 = _a4;
    _t49 = _t26 -  *4370324;
    if(_t49 >= 0) {
L13:
         *4363820 = 9;
         *4363824 = 0;
        return _t26 | 255;
    } else {
        _t26 =  *(4370400 + (_a4 >> 5) * 4);
        if(_t49 == 0) {
            goto L13;
        }
        _t26 = _a4 & 31;
        if( *((intOrPtr*)( *(4370400 + (_a4 >> 5) * 4) + _t26 * 8)) == 255) {
            goto L13;
        }
        if( *4361028 == 1) {
            _v8 = _a4;
            if(_v8 == 0) {
                SetStdHandle(246, 0);
            } else {
                if(_v8 == 1) {
                    SetStdHandle(245, 0);
                } else {
                    if(_v8 == 2) {
                        SetStdHandle(244, 0);
                    }
                }
            }
        }
         *((intOrPtr*)( *(4370400 + (_a4 >> 5) * 4) + (_a4 & 31) * 8)) = -1;
        return 0;
    }
    return __eax;
}

L00411032(_unknown_ __eax)
{
    signed int _v8;
    signed int _v12;
    CHAR* _v16;
    char _v20;
    CHAR* _v24;
    _unknown_ __ebp;
    _unknown_ _t24;
    _unknown_ _t25;
    signed int _t29;
    _unknown_ _t34;
    _unknown_ _t37;

    if( *4370680 == 0) {
        L0041109B();
    }
     *4364188 = 0;
    GetModuleFileNameA(0, 4363928, 260);
     *4363880 = 4363928;
    if( *4370688 == 0 ||  *( *4370688) == 0) {
        _v24 =  *4363880;
    } else {
        _v24 =  *4370688;
    }
    _v16 = _v24;
    L00413B80(_v16, 0, 0,  &_v12,  &_v20);
    _t29 = L00411064(_v20, _v20 + _v12 * 4, 2, "stdargv.c", 130);
    _v8 = _t29;
    if(_v8 == 0) {
        return _t29 | 255;
    }
    L00413B80(_v16, _v8, _v8 + _v12 * 4,  &_v12,  &_v20);
     *4363852 = _v12 - 1;
     *4363856 = _v8;
    return 0;
}

L00411037()
{
    _unknown_ __ebp;

    DebugBreak();
    return;
}

L00411064(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t12;

    _push(_t12);
    _v8 = L0041143D( *4364532, _a4,  *4364532, _a8, _a12, _a16);
    return _v8;
}

L0041106E(_unknown_ __eax, _unknown_ __ecx, signed int _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t13;
    _unknown_ _t16;
    _unknown_ _t17;

    _t17 = __ecx;
    _push(_t17);
    if( *4370320 == 3) {
        _t14 = _a4;
        if(_a4 <=  *4369572) {
            _v8 = L00411528(_t14, _a4);
            if(_v8 != 0) {
                return ;
            }
        }
    }
    if(_a4 == 0) {
        _a4 = 1;
    }
    if( *4370320 != 1) {
        _a4 = _a4 + 15 & 240;
    }
    HeapAlloc( *4370304, 0, _a4);
    return;
}

L00411078(_unknown_ __eax, _unknown_ _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t7;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;

    HeapCreate(0, 4096, 0);
     *4370304 = 0;
    if( *4370304 == 0) {
        return 0;
    }
     *4370320 = L00411442(_t12);
    if( *4370320 != 3) {
        return 1;
    }
    if(L00411497(1016) != 0) {
        return 1;
    }
    HeapDestroy( *4370304);
    return 0;
}

L0041107D(_Unknown_base(*)()* __eax, intOrPtr _a4, intOrPtr _a8, signed int _a12)
{
    _unknown_ _v8;
    char _v16;
    _Unknown_base(*)()* _v20;
    _Unknown_base(*)()* _v24;
    char _v28;
    _Unknown_base(*)()* _v32;
    struct HINSTANCE__* _v36;
    _unknown_ __ebp;
    _Unknown_base(*)()* _t30;
    _unknown_ _t36;
    _unknown_ _t51;

    _t30 = __eax;
    _v24 = 0;
    _v32 = 0;
    if( *4364484 == 0) {
        _v36 = LoadLibraryA("user32.dll");
        if(_v36 == 0) {
            return ;
        }
         *4364484 = GetProcAddress(_v36, "MessageBoxA");
        if( *4364484 == 0) {
            return ;
        }
         *4364488 = GetProcAddress(_v36, "GetActiveWindow");
        _t30 = GetProcAddress(_v36, "GetLastActivePopup");
         *4364492 = _t30;
        __eflags =  *4363832 - 2;
        if( *4363832 == 2) {
            _t30 = GetProcAddress(_v36, "GetUserObjectInformationA");
             *4364500 = _t30;
            __eflags =  *4364500;
            if( *4364500 != 0) {
                _t30 = GetProcAddress(_v36, "GetProcessWindowStation");
                 *4364496 = _t30;
            }
        }
    }
    __eflags =  *4364496;
    if( *4364496 == 0) {
L13:
        __eflags = _v32;
        if(_v32 == 0) {
            __eflags =  *4364488;
            if( *4364488 != 0) {
                 *4364488();
                _v24 = _t30;
            }
            __eflags = _v24;
            if(_v24 != 0) {
                __eflags =  *4364492;
                if( *4364492 != 0) {
                    _push(_v24);
                     *4364492();
                    _v24 = _t30;
                }
            }
        } else {
            __eflags =  *4363844 - 4;
            if( *4363844 < 4) {
                _a12 = _a12 | 262144;
            } else {
                _a12 = _a12 | 2097152;
            }
        }
        _push(_a12);
        _push(_a8);
        _push(_a4);
        _push(_v24);
         *4364484();
        return;
    }
     *4364496();
    _v20 = _t30;
    __eflags = _v20;
    if(_v20 == 0) {
L12:
        _v32 = 1;
        goto L13;
    }
    _push( &_v28);
    _push(12);
    _t30 =  &_v16;
    _push(_t30);
    _push(1);
    _push(_v20);
     *4364500();
    __eflags = _t30;
    if(__eflags == 0 || __eflags == 0) {
        goto L12;
    }
    goto L13;
}

L00411087()
{
    intOrPtr _v8;
    intOrPtr _v20;
    intOrPtr _v28;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t7;
    _unknown_ _t9;
    intOrPtr _t10;

    if(_t7 ==  *4361904) {
        return ;
    }
    _push(_t9);
    _t10 = __esp;
    _push(255);
    _push(4352560);
    _push(4264356);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp - 8;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    _v8 = 0;
    L004111F4(1, 0);
    _v8 = -1;
    ExitProcess(3);
     *fs:0x0] = _v20;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    __esp = _t10;
    _pop(__ebp);
    return;
}

L00411096(_unknown_ __eax, intOrPtr __eflags)
{
    intOrPtr* _v8;
    signed int _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    char* _v24;
    signed int _v28;
    _unknown_ __ebp;
    _unknown_ _t73;
    signed int _t75;
    signed int _t76;
    intOrPtr _t79;
    intOrPtr _t80;
    intOrPtr _t81;
    intOrPtr _t83;
    intOrPtr _t84;
    _unknown_ _t86;
    intOrPtr _t87;
    intOrPtr _t91;
    intOrPtr _t94;
    intOrPtr _t95;
    signed int _t96;
    _unknown_ _t97;
    _unknown_ _t98;
    intOrPtr _t104;
    intOrPtr _t121;
    intOrPtr _t123;
    intOrPtr _t124;

    __eflags = __eflags;
    _t75 =  *4361548 & 1;
    if(__eflags == 0) {
        return 1;
    }
    _t76 = L004111FE(_t75, _t98);
    _v12 = _t76;
    __eflags = _v12 - 255;
    if(_v12 == 255) {
L22:
        _v16 = 1;
        _v8 =  *4364368;
        while(1) {
            __eflags = _v8;
            if(_v8 == 0) {
                break;
            }
            _v20 = 1;
            _t79 = _v8;
            __eflags = ( *(_t79 + 20) & 65535) - 4;
            if(( *(_t79 + 20) & 65535) == 4) {
L29:
                _t80 = _v8;
                _v24 =  *((intOrPtr*)(4361564 + ( *(_t80 + 20) & 65535) * 4));
                goto L31;
            }
            _t123 = _v8;
            __eflags =  *((intOrPtr*)(_t123 + 20)) - 1;
            if( *((intOrPtr*)(_t123 + 20)) == 1) {
                goto L29;
            }
            _t80 = _v8;
            __eflags = ( *(_t80 + 20) & 65535) - 2;
            if(( *(_t80 + 20) & 65535) == 2) {
                goto L29;
            }
            _t124 = _v8;
            __eflags =  *((intOrPtr*)(_t124 + 20)) - 3;
            if( *((intOrPtr*)(_t124 + 20)) != 3) {
                goto L30;
            }
            goto L29;
L31:
            _push(4);
            _push(_t80);
            _t104 = _v8 + 28;
            _push(_t104);
            _t81 = L00417D50(_t104);
            __esp = __esp + 12;
            __eflags = _t81;
            if(_t81 == 0) {
                _push(_v8 + 32);
                _t95 = _v8;
                _t104 =  *((intOrPtr*)(_t95 + 24));
                _push(_t104);
                L0041119F(0, 0, 0, 0, "DAMAGE: before %hs block (#%d) at 0x%p.\n", _v24);
                __esp = __esp + 8;
                __eflags = _t95 - 1;
                if(_t95 == 1) {
                    asm("int3 ");
                }
                _v20 = 0;
            }
            _t83 = L00417D50(_v8, _v8 +  *((intOrPtr*)(_v8 + 16)) + 32, _t104, 4);
            __eflags = _t83;
            if(_t83 == 0) {
                _push(_v8 + 32);
                _push( *((intOrPtr*)(_v8 + 24)));
                _t94 = _v24;
                L0041119F(0, 0, 0, 0, "DAMAGE: after %hs block (#%d) at 0x%p.\n", _t94);
                __esp = __esp + 8;
                __eflags = _t94 - 1;
                if(_t94 == 1) {
                    asm("int3 ");
                }
                _v20 = 0;
            }
            _t121 = _v8;
            __eflags =  *((intOrPtr*)(_t121 + 20));
            if( *((intOrPtr*)(_t121 + 20)) == 0) {
                _t91 = L00417D50( *((intOrPtr*)(_v8 + 16)), _v8 + 32, _t121,  *((intOrPtr*)(_v8 + 16)));
                __eflags = _t91;
                if(_t91 == 0) {
                    L0041119F(0, 0, 0, 0, "DAMAGE: on top of Free block at 0x%p.\n", _v8 + 32);
                    __eflags = _t91 - 1;
                    if(_t91 == 1) {
                        asm("int3 ");
                    }
                    _v20 = 0;
                }
            }
            __eflags = _v20;
            if(_v20 == 0) {
                _t84 = _v8;
                __eflags =  *((intOrPtr*)(_t84 + 8));
                if( *((intOrPtr*)(_t84 + 8)) != 0) {
                    _push( *((intOrPtr*)(_v8 + 12)));
                    _t87 = _v8;
                    _push( *((intOrPtr*)(_t87 + 8)));
                    L0041119F(0, 0, 0, 0, "%hs allocated at file %hs(%d).\n", _v24);
                    __esp = __esp + 8;
                    __eflags = _t87 - 1;
                    if(_t87 == 1) {
                        asm("int3 ");
                    }
                }
                _push( *((intOrPtr*)(_v8 + 16)));
                _t86 = _v8 + 32;
                _push(_t86);
                L0041119F(0, 0, 0, 0, "%hs located at 0x%p is %Iu bytes long.\n", _v24);
                __esp = __esp + 8;
                __eflags = _t86 - 1;
                if(_t86 == 1) {
                    asm("int3 ");
                }
                _v16 = 0;
            }
L23:
            _v8 =  *_v8;
            continue;
L30:
            _v24 = "DAMAGED";
            goto L31;
        }
        return _v16;
    } else {
        __eflags = _v12 - 254;
        if(_v12 == 254) {
            goto L22;
        }
        _v28 = _v12;
        _v28 = _v28 + 6;
        __eflags = _v28 - 3;
        if(_v28 > 3) {
            L0041119F(0, 0, 0, 0, "%s", "_heapchk fails with unknown return value!\n");
            __eflags = _t76 - 1;
            if(_t76 == 1) {
                asm("int3 ");
            }
L21:
            _v16 = 0;
            return _v16;
        }
        _t96 = _v28;
        switch( *((intOrPtr*)(_t96 * 4 +  &M004180B2))) {
            case 0:
                L0041119F(0, 0, 0, 0, "%s", "_heapchk fails with _HEAPBADBEGIN.\n");
                __eflags = _t96 - 1;
                if(_t96 == 1) {
                    asm("int3 ");
                }
                goto L21;
            case 1:
                L0041119F(0, 0, 0, 0, "%s", "_heapchk fails with _HEAPBADNODE.\n");
                __eflags = __eax - 1;
                if(__eax == 1) {
                    asm("int3 ");
                }
                goto L21;
            case 2:
                L0041119F(0, 0, 0, 0, "%s", "_heapchk fails with _HEAPBADEND.\n");
                __eflags = __eax - 1;
                if(__eax == 1) {
                    asm("int3 ");
                }
                goto L21;
            case 3:
                L0041119F(0, 0, 0, 0, "%s", "_heapchk fails with _HEAPBADPTR.\n");
                __eflags = __eax - 1;
                if(__eax == 1) {
                    asm("int3 ");
                }
                goto L21;
        }
        goto L23;
    }
}

L0041109B()
{
    _unknown_ __ebp;

    if( *4370680 != 0) {
        return 0;
    }
    L00411023(253);
     *4370680 = 1;
    return 0;
}

L004110A0(_unknown_ __ecx, signed int _a4, void* _a8)
{
    signed int _v8;
    _unknown_ __ebp;
    signed int _t23;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;

    _t32 = __ecx;
    _push(_t32);
    _t23 = _a4;
    if(_t23 >=  *4370324) {
L12:
         *4363820 = 9;
         *4363824 = 0;
        return _t23 | 255;
    } else {
        _t23 =  *(4370400 + (_a4 >> 5) * 4);
        if( *((intOrPtr*)(_t23 + (_a4 & 31) * 8)) != 255) {
            goto L12;
        }
        if( *4361028 == 1) {
            _v8 = _a4;
            if(_v8 == 0) {
                SetStdHandle(246, _a8);
            } else {
                if(_v8 == 1) {
                    SetStdHandle(245, _a8);
                } else {
                    if(_v8 == 2) {
                        SetStdHandle(244, _a8);
                    }
                }
            }
        }
         *( *(4370400 + (_a4 >> 5) * 4) + (_a4 & 31) * 8) = _a8;
        return 0;
    }
    return __eax;
}

L004110A5(_unknown_ __eax, intOrPtr _a4, _unknown_ _a8)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;

    _push(__ecx);
    if(_a4 > 224) {
        return 0;
    }
    while(1) {
    }
}

L004110AF(intOrPtr _a4)
{
    _unknown_ _v8;
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ _v28;
    _unknown_ _v32;
    intOrPtr _v36;
    _unknown_ _v40;
    intOrPtr _v44;
    signed int _v48;
    _unknown_ __ebp;
    _unknown_ _t118;
    _unknown_ _t125;
    _unknown_ _t126;
    _unknown_ _t184;

    _v36 =  *((intOrPtr*)(_a4 + 16));
    _v48 =  *(_a4 + 8);
    _v44 = 0;
    while(_v48 >= 0) {
        _v48 = _v48 << 1;
        _v44 = _v44 + 1;
    }
}

L004110BE(_unknown_ __eax, void* _a4, signed int _a8)
{
    void* _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t39;

    if(_a8 > 224) {
        return 0;
    }
    if( *4370320 != 3) {
        if(_a8 == 0) {
            _a8 = 1;
        }
        _v8 = HeapReAlloc( *4370304, 16, _a4, _a8);
        return _v8;
    } else {
        _v12 = L004111C7(_a4);
        if(_v12 != 0) {
            _v8 = 0;
            if(_a8 <=  *4369572 && L004111E5(_v12, _a4, _a8) != 0) {
                _v8 = _a4;
            }
        }
        if(_v12 != 0) {
            return _v8;
        }
        if(_a8 == 0) {
            _a8 = 1;
        }
        _a8 = _a8 + 15 & 240;
        _v8 = HeapReAlloc( *4370304, 16, _a4, _a8);
        return _v8;
    }
}

L004110C8(signed int _a4, signed int _a8)
{
    _unknown_ __ebp;
    _unknown_ _t7;

    _t7 = _a4 + 1;
    if(_t7 <= 256) {
        return  *( *4361940 + _a4 * 2) & 65535 & _a8;
    }
    _push("(unsigned)(c + 1) <= 256");
    _push(0);
    _push(56);
    _push("isctype.c");
    _push(2);
    L0041119F();
    __esp = __esp + 20;
    if(_t7 != 1) {
        return  *( *4361940 + _a4 * 2) & 65535 & _a8;
    }
    asm("int3 ");
    return  *( *4361940 + _a4 * 2) & 65535 & _a8;
}

L00411113(_unknown_ __ecx, intOrPtr _a4)
{
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t17;

    _t17 = __ecx;
    _push(_t17);
     *4363824 = _a4;
    _v8 = 0;
    while(_v8 < 45) {
        if(_a4 !=  *((intOrPtr*)(4362784 + _v8 * 8))) {
            _v8 = _v8 + 1;
            continue;
        }
         *4363820 =  *((intOrPtr*)(4362788 + _v8 * 8));
        return;
        if(_a4 < 19 || _a4 > 36) {
            if(_a4 < 188 || _a4 > 202) {
                 *4363820 = 22;
                return;
            }
             *4363820 = 8;
            return;
        }
         *4363820 = 13;
        return;
    }
}

L00411118(_unknown_ __eax, signed int _a4)
{
    signed short _v6;
    char _v8;
    signed int _v11;
    char _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t28;
    signed int _t31;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t45;

    if(_a4 <= 255) {
        __eflags =  *4361924 - 1;
        if( *4361924 <= 1) {
            _v20 = L004110C8(_a4, 8);
            return _v20;
        }
    } else {
        _v8 = 0;
        _v6 = 0;
        _v12 = _a4 >> 8 & 255 & 4294967295;
        _v11 = _a4 & 255 & 4294967295;
        if( *4369708 == 0) {
            return 0;
        }
        _t31 = L004113C0( &_v12, 1,  &_v12, 2,  &_v8,  *4369988,  *4369588, 1);
        __eflags = _t31;
        if(_t31 == 0) {
            return 0;
        }
        __eflags = _v6 & 65535;
        if(__eflags == 0 && __eflags != 0) {
            _v16 = 1;
            return _v16;
        }
        _v16 = 0;
        return _v16;
    }
L12:
    _v20 = L0041124E(_a4, _a4, 8);
    return _v20;
}

L00411127(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t8;

    _push(_t8);
    _v8 = L004110A5( *4364532, _a4,  *4364532);
    return _v8;
}

L00411131(signed int __eax, _unknown_ __ecx, _unknown_ __esp, char _a4)
{
    signed int _t9;
    _unknown_ _t10;
    _unknown_ _t16;
    char* _t17;
    _unknown_ _t19;
    _unknown_ _t21;

    __esp = __esp;
    _t16 = __ecx;
    _t9 = __eax;
    if(_t9 >= 4096) {
        _push(_t16);
        _t17 =  &_a4;
        while(1) {
L4:
            _t17 = _t17 - 4096;
            _t9 = _t9 - 4096;
            if(_t9 < 4096) {
                break;
            }
        }
        _t10 = __esp;
        __esp = _t17 - _t9;
        _push( *((intOrPtr*)(_t10 + 4)));
        return;
L6:
    }
    asm("xchg esp, eax");
    _push( *((intOrPtr*)( ~_t9 + __esp + 4)));
    return;
    goto L6;
}

L0041113B(_unknown_ __esp, _unknown_ __eflags, signed int _a4, _unknown_ _a8, signed int _a12, _unknown_ _a16)
{
    _unknown_ __ebx;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t31;
    _unknown_ _t35;
    signed int _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t40;
    _unknown_ _t41;

    __eflags = __eflags;
    __esp = __esp;
    _t36 = _a12;
    if(__eflags == 0) {
        return _a4 * _t36;
    }
    _push(_t31);
    _pop(__ebx);
    return _a4 * _t36;
}

L00411145(_unknown_ __eax, signed int __eflags, signed int _a4)
{
    signed int _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t26;
    signed int _t27;
    _unknown_ _t29;
    signed int _t34;
    signed int _t36;
    _unknown_ _t38;
    _unknown_ _t43;
    _unknown_ _t44;
    signed int _t46;

    __eflags = __eflags;
    _v12 = -1;
    _t27 = _a4;
    _v8 = _t27;
    if(__eflags != 0) {
        _t36 = _v8;
         *((intOrPtr*)(_t36 + 12)) = 0;
        return _t36 | 255;
    }
    __eflags = _a4;
    if(__eflags == 0) {
        _push("str != NULL");
        _push(0);
        _push(113);
        _push("fclose.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        __eflags = _t27 - 1;
        if(__eflags == 0) {
            asm("int3 ");
        }
    }
    if(__eflags != 0) {
        _v12 = L0041152D(_v8);
        L00411244(_t32, _v8);
        _t34 = L0041151E( *((intOrPtr*)(_v8 + 16)));
        __eflags = _t34;
        if(_t34 >= 0) {
            _t46 = _v8;
            __eflags =  *(_t46 + 28);
            if( *(_t46 + 28) != 0) {
                L0041141A( *((intOrPtr*)(_v8 + 28)), 2);
                 *((intOrPtr*)(_v8 + 28)) = 0;
            }
        } else {
            _v12 = -1;
        }
    }
     *((intOrPtr*)(_v8 + 12)) = 0;
    return _v12;
}

L0041114F(_unknown_ __ecx, signed int _a4)
{
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t12;

    _t10 = __ecx;
    _push(_t10);
    _v8 =  *4361548;
    __eflags = _a4 - 255;
    if(__eflags == 0) {
        return _v8;
    }
    if(__eflags == 0) {
         *4364376 = _a4 >> 16 & 65535;
    } else {
         *4364376 = 1;
    }
     *4364360 = 0;
     *4361548 = _a4;
    return _v8;
}

L00411154(signed int _a4, signed int _a8, long _a12)
{
    intOrPtr _v8;
    char _v1044;
    signed int _v1048;
    long _v1052;
    long _v1056;
    long _v1060;
    signed int _v1064;
    long _v1068;
    signed int _v1069;
    _unknown_ __ebp;
    _unknown_ _t108;
    signed int _t112;
    _unknown_ _t114;
    int _t119;
    signed int _t122;
    int _t128;
    _unknown_ _t136;
    _unknown_ _t137;
    _unknown_ _t141;
    _unknown_ _t144;
    _unknown_ _t151;
    signed int _t153;
    _unknown_ _t162;
    _unknown_ _t166;
    _unknown_ _t168;
    _unknown_ _t172;
    signed int _t185;

    _v8 =  *4361904;
    __eflags = _a4 -  *4370324;
    if(__eflags >= 0 || __eflags == 0) {
         *4363820 = 9;
         *4363824 = 0;
    } else {
        _v1052 = 0;
        _v1068 = _v1052;
        __eflags = _a12;
        if(__eflags != 0) {
            _t112 =  *( *((intOrPtr*)(4370400 + (_a4 >> 5) * 4)) + 4 + (_a4 & 31) * 8) & 32;
            if(__eflags != 0) {
                L004112FD(_t112, _a4, 0, 0, 2);
            }
            if(__eflags == 0) {
                _push(0);
                _push( &_v1060);
                _push(_a12);
                _push(_a8);
                _t147 = _a4 & 31;
                _push( *((intOrPtr*)( *((intOrPtr*)(4370400 + (_a4 >> 5) * 4)) + (_a4 & 31) * 8)));
                _t119 = WriteFile();
                __eflags = _t119;
                if(_t119 == 0) {
                    _v1056 = GetLastError();
                } else {
                    _v1056 = 0;
                    _t147 = _v1060;
                    _v1052 = _v1060;
                }
            } else {
                _t120 = _a8;
                _v1048 = _a8;
                _v1056 = 0;
                while(1) {
                    _t147 = _v1048 - _a8;
                    __eflags = _v1048 - _a8 - _a12;
                    if(_v1048 - _a8 >= _a12) {
                        break;
                    }
                    _v1064 =  &_v1044;
                    while(1) {
                        _t153 =  &_v1044;
                        __eflags = _v1064 - _t153 - 1024;
                        if(_v1064 - _t153 >= 1024) {
                            break;
                        }
                        __eflags = _v1048 - _a8 - _a12;
                        if(_v1048 - _a8 < _a12) {
                            _v1069 = _t153 & 4294967295;
                            _t185 = _v1048 + 1;
                            _v1048 = _t185;
                            __eflags = _v1069 - 10;
                            if(_v1069 == 10) {
                                _v1068 = _v1068 + 1;
                                _t185 = _v1064;
                                 *_t185 = 13;
                                _v1064 = _v1064 + 1;
                            }
                             *_v1064 = _t185 & 4294967295;
                            _v1064 = _v1064 + 1;
                            continue;
                        }
                        break;
                    }
                    _push(0);
                    _push( &_v1060);
                    _push(_v1064 -  &_v1044);
                    _push( &_v1044);
                    _t147 =  *((intOrPtr*)(4370400 + (_a4 >> 5) * 4));
                    _push( *((intOrPtr*)( *((intOrPtr*)(4370400 + (_a4 >> 5) * 4)) + (_a4 & 31) * 8)));
                    _t128 = WriteFile();
                    __eflags = _t128;
                    if(_t128 == 0) {
                        _v1056 = GetLastError();
                    } else {
                        _t120 = _v1052 + _v1060;
                        _v1052 = _v1052 + _v1060;
                        _t147 = _v1064 -  &_v1044;
                        __eflags = _v1060 - _v1064 -  &_v1044;
                        if(_v1060 >= _v1064 -  &_v1044) {
                            continue;
                        } else {
                            break;
                        }
                        goto L27;
                    }
                    break;
                }
            }
L27:
            __eflags = _v1052;
            if(_v1052 == 0) {
                __eflags = _v1056;
                if(__eflags == 0) {
                    _t122 =  *(4370400 + (_a4 >> 5) * 4);
                    if(__eflags == 0) {
L36:
                         *4363820 = 28;
                         *4363824 = 0;
                    } else {
                        _t122 =  *_a8;
                        __eflags = _t122 - 26;
                        if(_t122 != 26) {
                            goto L36;
                        }
                    }
                } else {
                    __eflags = _v1056 - 5;
                    if(_v1056 != 5) {
                        _t120 = _v1056;
                        L00411113(_t147, _v1056);
                    } else {
                         *4363820 = 9;
                         *4363824 = _v1056;
                    }
                }
            }
            goto L38;
        }
    }
L38:
    L00411087();
    return;
}

L0041115E()
{
    _unknown_ __ebp;

    L004132B0(0, 0, 1);
    return;
}

L0041116D(_unknown_ __eax, signed int _a4, intOrPtr _a8, intOrPtr _a12)
{
    long _v8;
    signed int _v12;
    signed int _v16;
    _unknown_ __ebp;
    _unknown_ _t37;
    signed int _t38;
    signed int _t40;
    signed int _t47;
    _unknown_ _t54;
    _unknown_ _t61;

    _t38 = _a4;
    __eflags = _t38 -  *4370324;
    if(__eflags >= 0) {
L3:
         *4363820 = 9;
         *4363824 = 0;
        return _t38 | 255;
    }
    _t38 =  *(4370400 + (_a4 >> 5) * 4);
    if(__eflags != 0) {
        _t40 = L00411375(_a4);
        _v12 = _t40;
        __eflags = _v12 - 255;
        if(_v12 != 255) {
            _push(_a12);
            _push(0);
            _t55 = _a8;
            _push(_a8);
            _push(_v12);
            _v8 = SetFilePointer();
            __eflags = _v8 - 255;
            if(_v8 != 255) {
                _v16 = 0;
            } else {
                _v16 = GetLastError();
            }
            __eflags = _v16;
            if(_v16 == 0) {
                 *((intOrPtr*)( *(4370400 + (_a4 >> 5) * 4) + 4 + (_a4 & 31) * 8)) =  *( *(4370400 + (_a4 >> 5) * 4) + 4 + (_a4 & 31) * 8) & 253 & 4294967295;
                return _v8;
            }
            _t47 = _v16;
            L00411113(_t55, _t47);
            return _t47 | 255;
            return __eax;
        }
        goto L5;
    }
    goto L3;
L5:
     *4363820 = 9;
    return _t40 | 255;
}

L00411181(_unknown_ __eax, intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    signed int _t4;

    _t4 = L0041136B(_a4, _a4);
    asm("sbb eax, eax");
    return  ~( ~_t4) - 1;
}

L00411195(_unknown_ __esp, signed int _a4, _unknown_ _a8, signed int _a12)
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
        goto L8;
    } else {
        _t18 =  ~_t16 & 3;
        if(_t27 != 0) {
            __edx = __edx - _t18;
            while(1) {
L5:
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
            goto L8;
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
L8:
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
L9:
    _pop(__edi);
    return _a4;
    goto L11;
}

L0041119A(signed int _a4, signed int _a8, signed int _a12, signed int _a16, intOrPtr _a20, intOrPtr _a24)
{
    signed int* _v8;
    intOrPtr _v12;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    intOrPtr* _v28;
    signed int _v32;
    signed int _v36;
    _unknown_ __ebp;
    signed int _t72;
    signed int _t75;
    signed int _t78;
    signed int _t79;
    intOrPtr* _t80;
    _unknown_ _t91;
    _unknown_ _t95;
    _unknown_ _t97;
    _unknown_ _t98;
    _unknown_ _t99;
    signed int _t100;
    _unknown_ _t101;
    _unknown_ _t102;
    _unknown_ _t106;
    _unknown_ _t110;
    _unknown_ _t125;
    _unknown_ _t126;

    __eflags = _a4;
    if(__eflags == 0) {
        return L004111AE(__eflags, _a8, _a12, _a16, _a20, _a24);
    }
    __eflags = _a8;
    if(_a8 == 0) {
        L004115AF(_a4);
        return 0;
    }
    _v28 = (_a4 & 252) - 8;
    _push(4);
    _push(_t106);
    _t131 = _a4 - 4;
    _push(_a4 - 4);
    _t72 = L00417D50(_t106);
    __esp = __esp + 12;
    __eflags = _t72;
    if(_t72 == 0) {
        _t75 = L00417D50(_t106, _v28 + 4, _t131, 4);
        __eflags = _t75;
        if(__eflags == 0) {
            L0041119F(1, 0, 0, 0, "Damage before 0x%p which was allocated by aligned routine\n", _a4);
            __eflags = _t75 - 1;
            if(__eflags == 0) {
                asm("int3 ");
            }
        }
        _t78 = _a12 - 1 & _a12;
        if(__eflags == 0) {
            _t79 = _a16;
            __eflags = _t79 - _a8;
            if(_t79 < _a8) {
L23:
                _t80 = _v28;
                L00411366( *_t80);
                _v16 = _t80 - _a4 -  *_v28;
                __eflags = _a12 - 4;
                if(_a12 <= 4) {
                    _v32 = 4;
                } else {
                    _v32 = _a12;
                }
                _a12 = _v32 - 1;
                _v24 = 0 - _a16 & 3;
                _v20 = L00411064(_v24 + _a8 + _a12 + 8, _v24 + _a8 + _a12 + 8, 1, _a20, _a24);
                __eflags = _v20;
                if(_v20 == 0) {
                    return 0;
                }
                _v12 = (_v20 + _a12 + _v24 + _a16 + 8 &  !_a12) - _a16;
                _v8 = _v12 - _v24 - 8;
                _push(4);
                _push( *4361563 & 255);
                _push( &(_v8[1]));
                L00411195(__esp);
                __esp = __esp + 12;
                 *_v8 = _v20;
                __eflags = _v16 - _a8;
                if(_v16 <= _a8) {
                    _v36 = _v16;
                } else {
                    _v36 = _a8;
                }
                L00411352(_v12, _a4, _v36);
                L0041141A( *_v28, 1);
                return _v12;
            }
        } else {
            if(__eflags == 0) {
                _push("("alignment must be a power of 2",0)");
                _push(0);
                _push(2594);
                _push("dbgheap.c");
                _push(2);
                L0041119F();
                __esp = __esp + 20;
                __eflags = _t78 - 1;
                if(_t78 == 1) {
                    asm("int3 ");
                }
            }
             *4363820 = 22;
            return 0;
        }
L18:
        __eflags = _a16;
        if(__eflags == 0) {
            goto L23;
        }
        if(__eflags == 0) {
            _push("("offset must be within size", 0)");
            _push(0);
            _push(2600);
            _push("dbgheap.c");
            _push(2);
            L0041119F();
            __esp = __esp + 20;
            __eflags = _t79 - 1;
            if(_t79 == 1) {
                asm("int3 ");
            }
        }
         *4363820 = 22;
        return 0;
    } else {
        _t100 = _a4;
        L0041119F(1, 0, 0, 0, "The block at 0x%p was not allocated by _aligned routines, use realloc()", _t100);
        __eflags = _t100 - 1;
        if(_t100 != 1) {
            return 0;
        }
        asm("int3 ");
        return 0;
    }
}

L0041119F(_Unknown_base(*)()* _a4, _Unknown_base(*)()* _a8, _Unknown_base(*)()* _a12, intOrPtr _a16, _Unknown_base(*)()* _a20, char _a24)
{
    _Unknown_base(*)()* _v8;
    char _v12;
    intOrPtr _v16;
    char _v4115;
    char _v4116;
    char _v8211;
    char _v8212;
    char _v12307;
    char _v12308;
    _Unknown_base(*)()* _v12312;
    _Unknown_base(*)()* _v12316;
    char _v12320;
    char _v12340;
    CHAR* _v12344;
    char _v12348;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t101;
    _unknown_ _t103;
    _unknown_ _t104;
    _unknown_ _t105;
    _unknown_ _t107;
    _unknown_ _t111;
    signed int _t113;
    char _t114;
    char* _t116;
    char* _t118;
    _Unknown_base(*)()* _t119;
    char* _t122;
    signed int _t124;
    _Unknown_base(*)()* _t125;
    long _t127;
    _unknown_ _t130;
    _unknown_ _t131;
    _unknown_ _t132;
    _unknown_ _t133;
    _unknown_ _t134;
    _unknown_ _t135;
    _unknown_ _t136;
    _unknown_ _t137;
    _unknown_ _t139;
    _unknown_ _t140;
    _unknown_ _t157;
    _unknown_ _t159;
    _unknown_ _t161;
    _unknown_ _t176;
    _unknown_ _t178;
    _unknown_ _t180;
    _unknown_ _t182;

    L00411131(12344, _t130, __esp);
    _v16 =  *4361904;
    _push(_t176);
    _v8212 = 0;
    _push(1023 << 2);
    _push(0);
    _push( &_v8211);
    memset();
    __esp = __esp + 12;
    asm("stosw ");
    asm("stosb ");
    _v4116 = 0;
    _push(1023 << 2);
    _push(0);
    _push( &_v4115);
    memset();
    __esp = __esp + 12;
    asm("stosw ");
    asm("stosb ");
    _v12308 = 0;
    _push(1023 << 2);
    _push(0);
    _push( &_v12307);
    memset();
    __esp = __esp + 12;
    asm("stosw ");
    asm("stosb ");
    _v8 =  &_a24;
    if(_a4 < 0 || _a4 >= 3) {
L57:
        L00411087();
        _pop(__edi);
        return;
    } else {
        __eflags = _a4 - 2;
        if(_a4 != 2) {
L11:
            __eflags = _a20;
            if(_a20 != 0) {
                _t125 = _v8;
                L0041127B(_t125,  &_v12308, 4075, _a20, _t125);
                __eflags = _t125;
                if(_t125 < 0) {
                    _push("_CrtDbgReport: String too long or IO Error");
                    _push( &_v12308);
                    L00411258( &_v12308, __esp);
                    __esp = __esp + 8;
                }
            }
            __eflags = _a4 - 2;
            if(_a4 == 2) {
                __eflags = _a20;
                if(_a20 == 0) {
                    _v12344 = "Assertion failed!";
                } else {
                    _v12344 = "Assertion failed: ";
                }
                _push(_v12344);
                _push( &_v8212);
                L00411258( &_v8212, __esp);
                __esp = __esp + 8;
            }
            _push( &_v12308);
            _push( &_v8212);
            L0041120D( &_v12308, __esp);
            __esp = __esp + 8;
            __eflags = _a4 - 2;
            if(__eflags == 0) {
                _t124 =  *(4361500 + _a4 * 4) & 1;
                if(__eflags != 0) {
                    _push("");
                    _push( &_v8212);
                    L0041120D(_t124, __esp);
                    __esp = __esp + 8;
                }
                _push("\n");
                _push( &_v8212);
                L0041120D(_t124, __esp);
                __esp = __esp + 8;
            }
            __eflags = _a8;
            if(_a8 == 0) {
                _push( &_v8212);
                _push( &_v4116);
                L00411258( &_v8212, __esp);
                __esp = __esp + 8;
            } else {
                _push( &_v8212);
                _push(_a12);
                _t169 = _a8;
                _push(_a8);
                _push("%s(%d) : %s");
                _push(4096);
                _t122 =  &_v4116;
                _push(_t122);
                L0041100A(_t122);
                __esp = __esp + 24;
                __eflags = _t122;
                if(_t122 < 0) {
                    _push("_CrtDbgReport: String too long or IO Error");
                    _push( &_v4116);
                    L00411258(_t169, __esp);
                    __esp = __esp + 8;
                }
            }
            __eflags =  *4370300;
            if( *4370300 == 0) {
L37:
                __eflags =  *4370284;
                if(__eflags == 0) {
L42:
                    if(__eflags != 0) {
                        __eflags =  *((intOrPtr*)(4361512 + _a4 * 4)) - 255;
                        if(__eflags != 0) {
                            _push(0);
                            _push( &_v12320);
                            _t116 =  &_v4116;
                            _push(_t116);
                            L00411235(_t116, __esp);
                            __esp = __esp + 4;
                            _push(_t116);
                            _push( &_v4116);
                            _push( *((intOrPtr*)(4361512 + _a4 * 4)));
                            WriteFile();
                        }
                    }
                    if(__eflags != 0) {
                        OutputDebugStringA( &_v4116);
                    }
                    if(__eflags == 0) {
                        __eflags = _a4 - 2;
                        if(_a4 == 2) {
                            __eax = InterlockedDecrement(4361496);
                        }
                    } else {
                        __eflags = _a12;
                        if(_a12 == 0) {
                            _v12348 = 0;
                        } else {
                            _push(10);
                            _t114 =  &_v12340;
                            _push(_t114);
                            _push(_a12);
                            L004111E0();
                            __esp = __esp + 12;
                            _v12348 = _t114;
                        }
                        _push( &_v12308);
                        _push(_a16);
                        _push(_v12348);
                        _push(_a8);
                        _t113 = _a4;
                        _push(_t113);
                        L00415880();
                        __esp = __esp + 20;
                        _v12 = _t113;
                        __eflags = _a4 - 2;
                        if(_a4 == 2) {
                            __eax = InterlockedDecrement(4361496);
                        }
                    }
                    goto L57;
                }
            } else {
                _v12316 =  *4370300;
                while(1) {
                    __eflags = _v12316;
                    if(_v12316 == 0) {
                        break;
                    }
                    _push( &_v12);
                    _push( &_v4116);
                    _t119 = _a4;
                    _push(_t119);
                     *((intOrPtr*)(_v12316 + 12))();
                    __esp = __esp + 12;
                    __eflags = _t119;
                    if(_t119 == 0) {
                        _v12316 =  *(_v12316 + 4);
                        continue;
                    }
                    __eflags = _a4 - 2;
                    if(_a4 == 2) {
                        __eax = InterlockedDecrement(4361496);
                    }
                    goto L57;
                }
                goto L37;
            }
L38:
            _push( &_v12);
            _t118 =  &_v4116;
            _push(_t118);
            _push(_a4);
             *4370284();
            __esp = __esp + 12;
            __eflags = _t118;
            if(__eflags == 0) {
                goto L42;
            }
            __eflags = _a4 - 2;
            if(_a4 == 2) {
                __eax = InterlockedDecrement(4361496);
            }
            goto L57;
        }
        _t127 = InterlockedIncrement(4361496);
        __eflags = _t127;
        if(_t127 <= 0) {
            goto L11;
        }
        __eflags =  *4364252;
        if( *4364252 != 0) {
L10:
            _push(_a12);
            _push(_a8);
            _push("Second Chance Assertion Failed: File %s, Line %d\n");
            _push( &_v4116);
             *4364252();
            __esp = __esp + 16;
            OutputDebugStringA( &_v4116);
            InterlockedDecrement(4361496);
            L00411037();
            goto L57;
        }
        _v12312 = LoadLibraryA("user32.dll");
        __eflags = _v12312;
        if(_v12312 == 0) {
L9:
            goto L57;
        }
         *4364252 = GetProcAddress(_v12312, "wsprintfA");
        __eflags =  *4364252;
        if( *4364252 != 0) {
            goto L10;
        }
        goto L9;
    }
}

L004111AE(_unknown_ __eflags, intOrPtr _a4, signed int _a8, intOrPtr _a12, intOrPtr _a16, intOrPtr _a20)
{
    intOrPtr* _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    signed int _v20;
    signed int _v24;
    _unknown_ __ebp;
    signed int _t41;
    intOrPtr _t42;
    _unknown_ _t50;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t80;

    _t80 = __eflags;
    _t41 = _a8 - 1 & _a8;
    if(_t80 == 0) {
        _t42 = _a12;
        __eflags = _t42 - _a4;
        if(_t42 < _a4) {
L12:
            __eflags = _a8 - 4;
            if(_a8 <= 4) {
                _v24 = 4;
            } else {
                _v24 = _a8;
            }
            _a8 = _v24 - 1;
            _v20 = 0 - _a12 & 3;
            _v16 = L00411064(_a8, _v20 + _a4 + _a8 + 8, 1, _a16, _a20);
            __eflags = _v16;
            if(_v16 == 0) {
                return 0;
            }
            _v12 = (_v16 + _a8 + _v20 + _a12 + 8 &  !_a8) - _a12;
            _v8 = _v12 - _v20 - 8;
            _push(4);
            _push( *4361563 & 255);
            _push(_v8 + 4);
            L00411195(__esp);
            __esp = __esp + 12;
             *_v8 = _v16;
            return _v12;
        }
    } else {
        if(_t80 == 0) {
            _push("("alignment must be a power of 2",0)");
            _push(0);
            _push(2463);
            _push("dbgheap.c");
            _push(2);
            L0041119F();
            __esp = __esp + 20;
            if(_t41 == 1) {
                asm("int3 ");
            }
        }
         *4363820 = 22;
        return 0;
    }
L7:
    __eflags = _a12;
    if(__eflags == 0) {
        goto L12;
    }
    if(__eflags == 0) {
        _push("("offset must be within size", 0)");
        _push(0);
        _push(2470);
        _push("dbgheap.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        __eflags = _t42 - 1;
        if(_t42 == 1) {
            asm("int3 ");
        }
    }
     *4363820 = 22;
    return 0;
}

L004111C7(intOrPtr _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebp;
    _unknown_ _t16;

    _v8 =  *4369564 *  *4369564 +  *4369568;
    _v12 =  *4369568;
    while(_v12 < _v8) {
        _v16 = _a4 -  *((intOrPtr*)(_v12 + 12));
        if(_v16 < 1048576) {
            return _v12;
        }
        _v12 = _v12 + 20;
    }
}

L004111D1(_unknown_ __ecx, intOrPtr* __edx)
{
    intOrPtr _v0;
    intOrPtr _v8;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t15;
    _unknown_ _t16;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    intOrPtr _t22;
    intOrPtr* _t25;
    _unknown_ _t30;
    intOrPtr _t31;
    _unknown_ _t32;
    intOrPtr* _t33;

    _t25 = __edx;
    _t21 = __ecx;
    _push(_t21);
    _push(_t19);
    _push(_t32);
    _t33 = _t25;
    _t14 =  *_t33;
    _push(_t30);
    _t31 = 0;
    _t20 = _t21;
    _v8 = 0;
    if( *_t33 > 0) {
        while(1) {
L2:
            _t15 =  *((intOrPtr*)(_t33 + 4));
            _t22 =  *((intOrPtr*)(_t15 + _t31));
            _t16 = _t15 + _t31;
            if( *((intOrPtr*)(_t22 + _t20 - 4)) != -858993460 ||  *((intOrPtr*)( *((intOrPtr*)(_t16 + 4)) + _t22 + _t20)) != -858993460) {
                L004112AD(_v0,  *((intOrPtr*)( *((intOrPtr*)(_t33 + 4)) + _t31 + 8)));
            }
            _t14 = _v8 + 1;
            _t31 = _t31 + 12;
            _v8 = _t14;
            if(_t14 >=  *_t33) {
                break;
            }
        }
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L004111D6()
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    void* _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    signed int* _v36;
    signed int _v40;
    void* _v44;
    signed int* _v48;
    intOrPtr* _v52;
    signed int _v56;
    void* _v60;
    signed int _v64;
    signed int _v68;
    void* _v72;
    void* _v76;
    signed int _v80;
    signed int _v84;
    signed int _v88;
    signed int _v352;
    signed int _v356;
    signed int _v360;
    signed int _v364;
    signed int _v368;
    _unknown_ __ebp;
    signed int _t199;
    _unknown_ _t200;
    int _t202;
    _unknown_ _t206;
    void* _t211;
    _unknown_ _t212;
    void* _t213;
    int _t216;
    _unknown_ _t219;
    signed int _t220;
    _unknown_ _t222;
    _unknown_ _t223;
    _unknown_ _t226;
    signed int _t229;
    _unknown_ _t230;
    signed int _t236;
    _unknown_ _t239;
    _unknown_ _t240;
    _unknown_ _t241;
    _unknown_ _t243;
    signed int _t244;
    _unknown_ _t245;
    _unknown_ _t248;
    _unknown_ _t250;
    _unknown_ _t257;
    _unknown_ _t258;
    _unknown_ _t261;
    _unknown_ _t262;
    _unknown_ _t264;
    void* _t271;
    signed int _t281;
    _unknown_ _t311;
    signed int _t321;
    signed int _t322;
    signed int _t330;
    _unknown_ _t331;
    _unknown_ _t334;
    _unknown_ _t348;

    _t199 = IsBadWritePtr( *4369568,  *4369564 *  *4369564);
    __eflags = _t199;
    if(_t199 != 0) {
        return _t199 | 255;
    }
    _v60 =  *4369568;
    _v368 = 0;
    while(1) {
        __eflags = _v368 -  *4369564;
        if(_v368 >=  *4369564) {
            break;
        }
        _v76 = _v60[4];
        _t202 = IsBadWritePtr(_v76, 16836);
        __eflags = _t202;
        if(_t202 != 0) {
            return -2;
        }
        _v20 = _v60[3];
        _v72 =  &(_v76[0x51]);
        _v352 = _v60[2];
        _v56 = 0;
        _v84 = 0;
        _v32 = 0;
        while(1) {
            __eflags = _v32 - 32;
            if(_v32 >= 32) {
                break;
            }
            _v16 = 0;
            _v8 = 0;
            _v24 = 0;
            _v364 = 0;
            while(1) {
                __eflags = _v364 - 64;
                if(_v364 >= 64) {
                    break;
                }
                 *(__ebp + -344 + _v364 * 4) = 0;
                _v364 = _v364 + 1;
            }
            __eflags = _v352;
            if(_v352 < 0) {
L76:
                _t321 = _v32;
                _t211 = _v76;
                __eflags = _v16 -  *((intOrPtr*)(_t211 + 68 + _t321 * 4));
                if(_v16 !=  *((intOrPtr*)(_t211 + 68 + _t321 * 4))) {
                    return -16;
                }
                _t322 = _v32;
                _t213 = _v76;
                __eflags = _v8 -  *((intOrPtr*)(_t213 + 196 + _t322 * 4));
                if(_v8 !=  *((intOrPtr*)(_t213 + 196 + _t322 * 4))) {
                    return -16;
                }
                _v20 =  &(_v20[0x2000]);
                _v72 =  &(_v72[0x81]);
                _v352 = _v352 << 1;
                _v32 = _v32 + 1;
                continue;
            }
            _t216 = IsBadWritePtr(_v20, 32768);
            __eflags = _t216;
            if(_t216 != 0) {
                return -4;
            }
            _v44 = _v20;
            _v28 = 0;
            while(1) {
                __eflags = _v28 - 8;
                if(_v28 >= 8) {
                    break;
                }
                _v40 =  &(_v44[3]);
                _v52 = _v40 + 4080;
                _t244 = _v40;
                __eflags =  *((intOrPtr*)(_t244 - 4)) - 255;
                if( *((intOrPtr*)(_t244 - 4)) != 255) {
                    return -5;
                }
                __eflags =  *_v52 - 255;
                if(__eflags != 0) {
                    return -5;
                }
                while(1) {
L24:
                    _v64 =  *_v40;
                    _v356 = _v64;
                    if(__eflags == 0) {
                        _v364 = (_v64 >> 4) - 1;
                        __eflags = _v364 - 63;
                        if(_v364 > 63) {
                            _v364 = 63;
                        }
                         *(__ebp + -344 + _v364 * 4) =  *(__ebp + -344 + _v364 * 4) + 1;
                    } else {
                        _v64 = _v64 - 1;
                        __eflags = _v64 - 1024;
                        if(_v64 > 1024) {
                            return -6;
                        }
                        _v24 = _v24 + 1;
                    }
                    __eflags = _v64 - 16;
                    if(__eflags < 0) {
                        return -7;
                    }
                    if(__eflags != 0) {
                        return -7;
                    }
                    __eflags = _v64 - 4080;
                    if(_v64 > 4080) {
                        return -7;
                    }
                    _t311 = _v40 + _v64;
                    __eflags =  *((intOrPtr*)(_t311 - 4)) - _v356;
                    if( *((intOrPtr*)(_t311 - 4)) != _v356) {
                        return -8;
                    }
                    _v40 = _v40 + _v64;
                    __eflags = _v40 - _v52;
                    if(__eflags >= 0) {
                        break;
                    }
                }
                __eflags = _v40 - _v52;
                if(_v40 != _v52) {
                    return -8;
                }
                _v44 =  &(_v44[0x400]);
                _v28 = _v28 + 1;
            }
            __eflags =  *_v72 - _v24;
            if( *_v72 != _v24) {
                return -9;
            }
            _v68 = _v72;
            _v360 = 0;
            while(1) {
                __eflags = _v360 - 64;
                if(_v360 >= 64) {
                    break;
                }
                _v88 = 0;
                _v40 = _v68;
                while(1) {
                    _v12 =  *(_v40 + 4);
                    __eflags = _v12 - _v68;
                    if(_v12 == _v68) {
                        break;
                    }
                    _t229 = _v360;
                    __eflags = _v88 -  *((intOrPtr*)(__ebp + -344 + _t229 * 4));
                    if(_v88 ==  *((intOrPtr*)(__ebp + -344 + _t229 * 4))) {
                        break;
                    }
                    __eflags = _v12 - _v20;
                    if(_v12 < _v20) {
                        return -10;
                    }
                    __eflags = _v12 -  &(_v20[0x2000]);
                    if(_v12 >=  &(_v20[0x2000])) {
                        return -10;
                    }
                    _v80 = _v12 & -4096;
                    _v48 = _v80 + 12;
                    _v36 =  &(_v48[0x3fc]);
                    while(1) {
                        __eflags = _v48 - _v36;
                        if(_v48 == _v36) {
                            break;
                        }
                        __eflags = _v48 - _v12;
                        if(_v48 != _v12) {
                            _v48 = _v48 + ( *_v48 & 254);
                            continue;
                        }
                        break;
                    }
                    __eflags = _v48 - _v36;
                    if(_v48 == _v36) {
                        return -11;
                    }
                    _v364 = ( *_v12 >> 4) - 1;
                    __eflags = _v364 - 63;
                    if(_v364 > 63) {
                        _v364 = 63;
                    }
                    __eflags = _v364 - _v360;
                    if(_v364 != _v360) {
                        return -12;
                    }
                    _t236 = _v12;
                    __eflags =  *((intOrPtr*)(_t236 + 8)) - _v40;
                    if( *((intOrPtr*)(_t236 + 8)) != _v40) {
                        return -13;
                    }
                    _v40 = _v12;
                    _v88 = _v88 + 1;
                }
                __eflags = _v88;
                if(_v88 != 0) {
                    __eflags = _v360 - 32;
                    if(_v360 >= 32) {
                        _v8 = -2147483648 >> (_v360 - 32 & 4294967295) | _v8;
                        _v84 = -2147483648 >> (_v360 - 32 & 4294967295) | _v84;
                    } else {
                        _v16 = -2147483648 >> (_v360 & 4294967295) | _v16;
                        _v56 = -2147483648 >> (_v360 & 4294967295) | _v56;
                    }
                }
                _t281 = _v40;
                __eflags =  *((intOrPtr*)(_t281 + 4)) - _v68;
                if( *((intOrPtr*)(_t281 + 4)) != _v68) {
                    return -14;
                }
                _t220 = _v360;
                __eflags = _v88 -  *((intOrPtr*)(__ebp + -344 + _t220 * 4));
                if(_v88 !=  *((intOrPtr*)(__ebp + -344 + _t220 * 4))) {
                    return -14;
                }
                _t330 = _v68;
                __eflags =  *((intOrPtr*)(_t330 + 8)) - _v40;
                if( *((intOrPtr*)(_t330 + 8)) != _v40) {
                    return -15;
                }
                _v68 = _v68 + 8;
                _v360 = _v360 + 1;
            }
            goto L76;
        }
        __eflags = _v56 -  *_v60;
        if(_v56 !=  *_v60) {
            return -17;
        }
        _t271 = _v60;
        __eflags = _v84 - _t271[1];
        if(_v84 != _t271[1]) {
            return -17;
        }
        _v60 =  &(_v60[5]);
        _v368 = _v368 + 1;
    }
    return 0;
}

L004111E0(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    _unknown_ __ebp;

    if(_a12 == 10 && _a4 < 0) {
        L0041D200(_a4, _a8, _a12, 1);
        return _a8;
    }
    L0041D200(_a4, _a8, _a12, 0);
    return _a8;
}

L004111E5(signed int* _a4, intOrPtr _a8, intOrPtr _a12)
{
    signed int* _v8;
    signed int _v12;
    signed int _v16;
    signed int* _v20;
    unsigned int _v24;
    signed int _v28;
    signed int _v32;
    intOrPtr _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    _unknown_ __ebp;
    _unknown_ _t425;
    _unknown_ _t430;
    _unknown_ _t443;
    signed int* _t449;
    signed int _t454;
    signed int _t458;
    _unknown_ _t461;
    signed int* _t480;
    signed int _t491;
    signed int _t495;
    signed int* _t513;
    _unknown_ _t517;
    signed int _t528;
    _unknown_ _t559;
    signed int* _t560;
    _unknown_ _t576;
    _unknown_ _t587;
    signed int* _t629;
    signed int _t633;
    _unknown_ _t634;
    _unknown_ _t637;
    _unknown_ _t641;
    _unknown_ _t644;
    signed int* _t647;
    _unknown_ _t654;
    _unknown_ _t659;
    _unknown_ _t661;
    _unknown_ _t662;
    _unknown_ _t666;
    _unknown_ _t671;
    _unknown_ _t673;
    _unknown_ _t674;
    signed int* _t680;
    signed int* _t692;
    signed int _t696;
    _unknown_ _t697;
    _unknown_ _t700;
    signed int _t704;
    _unknown_ _t705;
    _unknown_ _t708;
    _unknown_ _t711;
    _unknown_ _t716;
    _unknown_ _t718;
    _unknown_ _t719;
    _unknown_ _t723;
    _unknown_ _t728;
    _unknown_ _t730;
    _unknown_ _t731;
    _unknown_ _t735;

    _v32 = _a12 + 23 & 240;
    _v40 = _a4[4];
    _v24 = _a8 - _a4[3];
    _v16 = _v24 >> 15;
    _v36 = _v40 + _v16 * _v16 + 324;
    _v20 = _a8 - 4;
    _v52 =  *_v20 - 1;
    _v8 = _v20 + _v52;
    _v44 =  *_v8;
    _t735 = _v32 - _v52;
    if(_t735 <= 0) {
        __eflags = _v32 - _v52;
        if(_v32 >= _v52) {
            return 1;
        }
         *_v20 = _v32 + 1;
         *((intOrPtr*)(_v20 + _v32 - 4)) = _v32 + 1;
        _v20 = _v20 + _v32;
        _v52 = _v52 - _v32;
        _v48 = (_v52 >> 4) - 1;
        __eflags = _v48 - 63;
        if(__eflags > 0) {
            _v48 = 63;
        }
        if(__eflags == 0) {
            _v12 = (_v44 >> 4) - 1;
            __eflags = _v12 - 63;
            if(_v12 > 63) {
                _v12 = 63;
            }
            _t647 = _v8;
            _t449 = _v8;
            __eflags = _t647[1] - _t449[2];
            if(_t647[1] == _t449[2]) {
                __eflags = _v12 - 32;
                if(_v12 >= 32) {
                    _t454 = _v16;
                     *(_v40 + 196 + _t454 * 4) =  !(-2147483648 >> (_v12 - 32 & 4294967295)) &  *(_v40 + 196 + _v16 * 4);
                     *(_v40 + _v12 + 4) = _t454 & 4294967295;
                    _t661 = _v40 + _v12;
                    __eflags =  *(_t661 + 4);
                    if( *(_t661 + 4) == 0) {
                        _a4[1] =  !(-2147483648 >> (_v12 - 32 & 4294967295)) & _a4[1];
                    }
                } else {
                    _t458 = _v16;
                     *(_v40 + 68 + _t458 * 4) =  !(-2147483648 >> (_v12 & 4294967295)) &  *(_v40 + 68 + _v16 * 4);
                     *(_v40 + _v12 + 4) = _t458 & 4294967295;
                    _t673 = _v40 + _v12;
                    __eflags =  *(_t673 + 4);
                    if( *(_t673 + 4) == 0) {
                         *_a4 =  !(-2147483648 >> (_v12 & 4294967295)) &  *_a4;
                    }
                }
            }
             *(_v8[2] + 4) = _v8[1];
             *(_v8[1] + 8) = _v8[2];
            _v52 = _v52 + _v44;
            _v48 = (_v52 >> 4) - 1;
            __eflags = _v48 - 63;
            if(_v48 > 63) {
                _v48 = 63;
            }
        }
        _v28 = _v36 + _v48 * 8;
        _v20[1] =  *((intOrPtr*)(_v28 + 4));
        _v20[2] = _v28;
         *((intOrPtr*)(_v28 + 4)) = _v20;
         *(_v20[1] + 8) = _v20;
        _t513 = _v20;
        _t629 = _v20;
        __eflags = _t513[1] - _t629[2];
        if(_t513[1] == _t629[2]) {
            __eflags = _v48 - 32;
            if(_v48 >= 32) {
                _t633 = _v40 + _v48;
                 *(_v40 + _v48 + 4) = _t633 & 4294967295;
                __eflags =  *(_t633 + 4);
                if( *(_t633 + 4) == 0) {
                    _a4[1] = -2147483648 >> (_v48 - 32 & 4294967295) | _a4[1];
                }
                 *(_v40 + 196 + _v16 * 4) = -2147483648 >> (_v48 - 32 & 4294967295) |  *(_v40 + 196 + _v16 * 4);
            } else {
                _t528 = _v40 + _v48;
                 *(_v40 + _v48 + 4) = _t528 & 4294967295;
                __eflags =  *(_t528 + 4);
                if( *(_t528 + 4) == 0) {
                     *_a4 = -2147483648 >> (_v48 & 4294967295) |  *_a4;
                }
                 *(_v40 + 68 + _v16 * 4) = -2147483648 >> (_v48 & 4294967295) |  *(_v40 + 68 + _v16 * 4);
            }
        }
         *_v20 = _v52;
         *(_v20 + _v52 - 4) = _v52;
        return 1;
    } else {
        if(_t735 != 0) {
            return 0;
        }
        if(_v32 > _v52 + _v44) {
            return 0;
        }
        _v12 = (_v44 >> 4) - 1;
        __eflags = _v12 - 63;
        if(_v12 > 63) {
            _v12 = 63;
        }
        _t560 = _v8;
        _t680 = _v8;
        __eflags = _t560[1] - _t680[2];
        if(_t560[1] == _t680[2]) {
            __eflags = _v12 - 32;
            if(_v12 >= 32) {
                _t491 = _v16;
                 *(_v40 + 196 + _t491 * 4) =  !(-2147483648 >> (_v12 - 32 & 4294967295)) &  *(_v40 + 196 + _v16 * 4);
                 *(_v40 + _v12 + 4) = _t491 & 4294967295;
                _t718 = _v40 + _v12;
                __eflags =  *(_t718 + 4);
                if( *(_t718 + 4) == 0) {
                    _a4[1] =  !(-2147483648 >> (_v12 - 32 & 4294967295)) & _a4[1];
                }
            } else {
                _t495 = _v16;
                 *(_v40 + 68 + _t495 * 4) =  !(-2147483648 >> (_v12 & 4294967295)) &  *(_v40 + 68 + _v16 * 4);
                 *(_v40 + _v12 + 4) = _t495 & 4294967295;
                _t730 = _v40 + _v12;
                __eflags =  *(_t730 + 4);
                if( *(_t730 + 4) == 0) {
                     *_a4 =  !(-2147483648 >> (_v12 & 4294967295)) &  *_a4;
                }
            }
        }
         *(_v8[2] + 4) = _v8[1];
         *(_v8[1] + 8) = _v8[2];
        _v44 = _v52 + _v44 - _v32;
        __eflags = _v44;
        if(_v44 > 0) {
            _v8 = _v20 + _v32;
            _v12 = (_v44 >> 4) - 1;
            __eflags = _v12 - 63;
            if(_v12 > 63) {
                _v12 = 63;
            }
            _v28 = _v36 + _v12 * 8;
            _v8[1] =  *((intOrPtr*)(_v28 + 4));
            _v8[2] = _v28;
             *(_v28 + 4) = _v8;
             *(_v8[1] + 8) = _v8;
            _t692 = _v8;
            _t480 = _v8;
            __eflags = _t692[1] - _t480[2];
            if(_t692[1] == _t480[2]) {
                __eflags = _v12 - 32;
                if(_v12 >= 32) {
                    _t696 = _v40 + _v12;
                     *(_v40 + _v12 + 4) = _t696 & 4294967295;
                    __eflags =  *(_t696 + 4);
                    if( *(_t696 + 4) == 0) {
                        _a4[1] = -2147483648 >> (_v12 - 32 & 4294967295) | _a4[1];
                    }
                     *(_v40 + 196 + _v16 * 4) = -2147483648 >> (_v12 - 32 & 4294967295) |  *(_v40 + 196 + _v16 * 4);
                } else {
                    _t704 = _v40 + _v12;
                     *(_v40 + _v12 + 4) = _t704 & 4294967295;
                    __eflags =  *(_t704 + 4);
                    if( *(_t704 + 4) == 0) {
                         *_a4 = -2147483648 >> (_v12 & 4294967295) |  *_a4;
                    }
                     *(_v40 + 68 + _v16 * 4) = -2147483648 >> (_v12 & 4294967295) |  *(_v40 + 68 + _v16 * 4);
                }
            }
             *_v8 = _v44;
             *(_v8 + _v44 - 4) = _v44;
        }
         *_v20 = _v32 + 1;
         *((intOrPtr*)(_v20 + _v32 - 4)) = _v32 + 1;
        return 1;
    }
}

L004111EA(_unknown_ __eflags, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    intOrPtr _t12;
    _unknown_ _t13;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t28;
    _unknown_ _t34;

    _push(_t22);
    if(_a4 == 0) {
        return ;
    }
    _t12 = L004112F8(_t22, _a4 - 32, 32, 0);
    __eflags = _t12;
    if(_t12 == 0) {
        return ;
    }
    __eflags =  *4370320 - 3;
    if( *4370320 != 3) {
        HeapValidate( *4370304, 0, _a4 - 32);
        return;
    } else {
        _v8 = L004111C7(_a4 - 32);
        __eflags = _v8;
        if(__eflags == 0) {
            if(__eflags != 0) {
                return ;
            }
            HeapValidate( *4370304, 0, _a4 - 32);
            return;
        }
        L00411221(__eflags, _v8, _a4 - 32);
        return;
    }
    return;
}

L004111F4(intOrPtr _a4, intOrPtr _a8)
{
    struct HINSTANCE__* _v8;
    intOrPtr _v20;
    char* _v28;
    intOrPtr _v32;
    char* _v36;
    _Unknown_base(*)()* _v40;
    char* _v44;
    intOrPtr _v48;
    struct HINSTANCE__* _v56;
    char _v316;
    char* _v320;
    intOrPtr _v324;
    _Unknown_base(*)()* _v328;
    char _v340;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t52;
    char* _t61;
    _unknown_ _t69;

    _push(255);
    _push(4354920);
    _push(4264356);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp + -308;
    _v48 =  *4361904;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    if( *4364588 == 0) {
        _v324 = _a4;
        if(_v324 == 1) {
            _v320 = "Buffer overrun detected!";
            _v36 = "A buffer overrun has been detected which has corrupted the program's\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
            _v32 = 185;
        } else {
            _v320 = "Unknown security failure detected!";
            _v36 = "A security error of unknown cause has been detected which has\ncorrupted the program's internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
            _v32 = 212;
        }
        _t52 = _v36;
        L0041119F(1, 0, 0, 0, "%s", _t52);
        if(_t52 == 1) {
            asm("int3 ");
        }
        _v56 = 0;
        GetModuleFileNameA(0,  &_v316, 260);
        if(_t52 == 0) {
            _push("<program name unknown>");
            _t52 =  &_v316;
            _push(_t52);
            L00411258( &_v316, __esp);
            __esp = __esp + 8;
        }
        _v44 =  &_v316;
        _push( &_v316);
        L00411235(_t52, __esp);
        __esp = __esp + 4;
        _t53 =  &(_t52[0xb]);
        if( &(_t52[0xb]) > 60) {
            _t61 =  &_v316;
            _push(_t61);
            L00411235(_t61, __esp);
            __esp = __esp + 4;
            _v44 =  &(_v44[_t61 - 49]);
            _push(3);
            _push("...");
            _t53 = _v44;
            _push(_v44);
            L00411492(_v44, __esp);
            __esp = __esp + 12;
        }
        _push(_v44);
        L00411235(_t53, __esp);
        __esp = __esp + 4;
        L00414C20(_v32 +  &((_t53)[0xc]) + 3 & 252, _v44, __esp);
        _v328 = __esp;
        _v28 = __esp;
        _v40 = _v328;
        _push(_v320);
        _push(_v40);
        L00411258(_v40, __esp);
        __esp = __esp + 8;
        _push("\n\n");
        _push(_v40);
        L0041120D(_v40, __esp);
        __esp = __esp + 8;
        _push("Program: ");
        _push(_v40);
        L0041120D(_v40, __esp);
        __esp = __esp + 8;
        _push(_v44);
        _push(_v40);
        L0041120D(_v40, __esp);
        __esp = __esp + 8;
        _push("\n\n");
        _push(_v40);
        L0041120D(_v40, __esp);
        __esp = __esp + 8;
        _push(_v36);
        _push(_v40);
        L0041120D(_v40, __esp);
        __esp = __esp + 8;
        L0041107D(_v40, _v40, "Microsoft Visual C++ Runtime Library", 73744);
L14:
        _push(3);
        L00411212();
        __esp =  &_v340;
         *fs:0x0] = _v20;
        L00411087();
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return;
    }
    _v8 = 0;
    _push(_a8);
    _push(_a4);
     *4364588();
    __esp = __esp + 8;
    _v8 = -1;
    goto L14;
}

L004111F9()
{
    char _v196;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t8;

    _push(48 << 2);
    _push(-858993460);
    _push( &_v196);
    memset();
    __esp = __esp + 12;
    return 5;
}

L004111FE(_unknown_ __eax, _unknown_ __ecx)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t5;

    __ecx = __ecx;
    _push(__ecx);
    _v8 = -2;
    if( *4370320 == 3 && L004111D6() < 0) {
        _v8 = -4;
    }
    if(HeapValidate( *4370304, 0, 0) != 0) {
        return _v8;
    }
    if(GetLastError() != 120) {
        _v8 = -4;
        return _v8;
    }
     *4363824 = 120;
     *4363820 = 40;
    return _v8;
}

L00411203(_unknown_ __eax, void* _a4, void* _a8)
{
    void* _v8;
    void* _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ _v28;
    _unknown_ __ebp;
    _unknown_ _t80;
    void* _t84;
    _unknown_ _t87;
    _unknown_ _t89;
    _unknown_ _t100;
    _unknown_ _t104;
    _unknown_ _t109;
    _unknown_ _t112;
    _unknown_ _t113;

    _t81 = _a8;
    _v12 = _a8;
    __eflags = _a4;
    if(_a4 == 0) {
        return L00411127(_t81, _a8);
    }
    __eflags = _a8;
    if(_a8 == 0) {
        L004113E8(_t81, _t115, _a4);
        return 0;
    }
    __eflags =  *4370320 - 3;
    if( *4370320 != 3) {
        while(1) {
            _v8 = 0;
            __eflags = _a8 - 224;
            if(_a8 <= 224) {
                __eflags = _a8;
                if(_a8 == 0) {
                    _a8 = 1;
                }
                _push(_a8);
                _t115 = _a4;
                _push(_a4);
                _push(0);
                _push( *4370304);
                _v8 = HeapReAlloc();
            }
            __eflags = _v8;
            if(_v8 != 0) {
                return _v8;
            }
            __eflags =  *4364532;
            if( *4364532 == 0) {
                return _v8;
            }
            _t84 = L004113D9(_t115, _a8);
            __eflags = _t84;
            if(_t84 == 0) {
                return 0;
            }
        }
    } else {
        goto L6;
    }
    while(1) {
L6:
        _v8 = 0;
        __eflags = _a8 - 224;
        if(_a8 > 224) {
            goto L28;
        } else {
            goto L7;
        }
    }
}

L0041120D(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8)
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
L5:
            _t46 =  *_t57;
            _t59 = 2130640639 + _t46;
            _t57 = _t57 + 4;
            if(((_t46 ^ 255 ^ _t59) & -2130640640) == 0) {
                break;
            } else {
                continue;
            }
            do {
L5:
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
L11:
                        _t64 = _t57 - 1;
                    } else {
                        goto L5;
                    }
                }
            }
        }
L15:
        _t58 = _a8;
        if((_t58 & 3) == 0) {
            while(1) {
L20:
                _t59 =  *_t58;
                _t58 = _t58 + 4;
                if((( *_t58 ^ 255 ^ 2130640639 +  *_t58) & -2130640640) != 0) {
                    break;
                }
L19:
                 *_t64 = _t59;
                _t64 =  &(_t64[1]);
            }
            if((_t59 & 4294967295) == 0) {
L29:
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
                            goto L19;
                        }
                    }
                }
            }
L30:
        } else {
            goto L16;
        }
        while(1) {
L16:
            _t58 = _t58 + 1;
            if((_t59 & 4294967295) == 0) {
                break;
            }
             *_t64 = _t59 & 4294967295;
            _t64 =  &(_t64[0]);
            if((_t58 & 3) != 0) {
                continue;
            } else {
                goto L20;
            }
            goto L30;
        }
        goto L29;
    } else {
        goto L2;
    }
    while(1) {
L2:
        _t57 = _t57 + 1;
        if((_t45 & 4294967295) == 0) {
            break;
        }
        if((_t57 & 3) != 0) {
            continue;
        } else {
            goto L5;
        }
        goto L15;
    }
    goto L11;
}

L00411212(intOrPtr _a4)
{
    _unknown_ __ebp;

    L004132B0(_a4, 1, 0);
    return;
}

L0041121C()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    L00422AA0(_t1, 1);
    return;
}

L00411221(_unknown_ __eflags, intOrPtr _a4, intOrPtr _a8)
{
    unsigned int _v8;
    unsigned int _v12;
    intOrPtr _v16;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t22;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t30;

    __eflags = __eflags;
    _v12 = _a8 -  *((intOrPtr*)(_a4 + 12));
    _v8 = _v12 >> 15;
    if(__eflags == 0) {
        if(__eflags != 0 || __eflags == 0) {
            goto L5;
        } else {
            _v16 = 1;
            return _v16;
        }
    }
L5:
    _v16 = 0;
    return _v16;
}

L0041122B(_unknown_ __eax, int _a4)
{
    struct HINSTANCE__* _v8;
    _Unknown_base(*)()* _v12;
    _unknown_ __ebp;
    _unknown_ _t9;

    _v8 = GetModuleHandleA("mscoree.dll");
    if(_v8 != 0) {
        _v12 = GetProcAddress(_v8, "CorExitProcess");
        if(_v12 != 0) {
            _push(_a4);
            _v12();
        }
    }
    ExitProcess(_a4);
    return;
}

L00411230(signed int _a4)
{
    signed int _v8;
    char _v12;
    signed int _v16;
    char* _v20;
    intOrPtr _v24;
    struct HINSTANCE__* _v32;
    char _v292;
    signed int _v296;
    char _v300;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t62;
    _unknown_ _t67;
    _unknown_ _t69;
    _unknown_ _t71;
    signed int _t76;
    _unknown_ _t77;
    _unknown_ _t79;
    _unknown_ _t81;
    _unknown_ _t83;
    _unknown_ _t87;

    _v24 =  *4361904;
    _push(__esi);
    _v8 = 0;
    while(_v8 < 19) {
        _t98 = _a4;
        if(_a4 !=  *((intOrPtr*)(4361312 + _v8 * 8))) {
            _v8 = _v8 + 1;
            continue;
        } else {
        }
        _t60 = _v8;
        if(_a4 !=  *((intOrPtr*)(4361312 + _v8 * 8))) {
L22:
            __esp =  &_v300;
            L00411087();
            _pop(__esi);
            return;
        }
        if(_a4 != 252 && _a4 != 255) {
            _t98 = _v8;
            _t60 =  *((intOrPtr*)(4361316 + _v8 * 8));
            _push(_t60);
            _push(0);
            _push(0);
            _push(0);
            _push(1);
            L0041119F();
            __esp = __esp + 20;
            if(_t60 == 1) {
                asm("int3 ");
            }
        }
        if( *4363780 == 1 ||  *4363780 == 0 &&  *4361028 == 1) {
            _push(0);
            _push( &_v12);
            _push( *((intOrPtr*)(4361316 + _v8 * 8)));
            _t62 = L00411235( *((intOrPtr*)(4361316 + _v8 * 8)), __esp);
            __esp = __esp + 4;
            _push(_t62);
            _push( *((intOrPtr*)(4361316 + _v8 * 8)));
            _push(GetStdHandle(244));
            _t60 = WriteFile();
        } else {
            if(_a4 != 252) {
                _v32 = 0;
                if(GetModuleFileNameA(0,  &_v292, 260) == 0) {
                    _push("<program name unknown>");
                    _push( &_v292);
                    L00411258(_t98, __esp);
                    __esp = __esp + 8;
                }
                _v20 =  &_v292;
                _push(_v20);
                _t67 = L00411235(_v20, __esp);
                __esp = __esp + 4;
                _t68 = _t67 + 1;
                if(_t67 + 1 > 60) {
                    _push( &_v292);
                    _t81 = L00411235(_t68, __esp);
                    __esp = __esp + 4;
                    _v20 =  &(_v20[_t81 - 59]);
                    _push(3);
                    _push("...");
                    _push(_v20);
                    _t68 = L00411492( &(_v20[_t81 - 59]), __esp);
                    __esp = __esp + 12;
                }
                _push(_v20);
                _t69 = L00411235(_t68, __esp);
                __esp = __esp + 4;
                __esi = _t69;
                _push( *((intOrPtr*)(4361316 + _v8 * 8)));
                _t71 = L00411235(_v8, __esp);
                __esp = __esp + 4;
                L00414C20(_t69 + _t71 + 28 + 3 & 252,  *((intOrPtr*)(4361316 + _v8 * 8)), __esp);
                _v296 = __esp;
                _v16 = _v296;
                _push("Runtime Error!\n\nProgram: ");
                _push(_v16);
                _t76 = L00411258(_v296, __esp);
                __esp = __esp + 8;
                _push(_v20);
                _push(_v16);
                L0041120D(_t76, __esp);
                __esp = __esp + 8;
                _push("\n\n");
                _push(_v16);
                L0041120D(_v16, __esp);
                __esp = __esp + 8;
                _push( *(4361316 + _v8 * 8));
                _push(_v16);
                _t60 = L0041120D(_v16, __esp);
                __esp = __esp + 8;
                L0041107D(_t60, _v16, "Microsoft Visual C++ Runtime Library", 73744);
            }
        }
        goto L22;
    }
}

L00411235(signed int __eax, _unknown_ __esp, signed int _a4)
{
    char _v0;
    signed int _t27;
    signed int _t31;
    _unknown_ _t40;
    signed int _t41;
    _unknown_ _t46;

    __esp = __esp;
    _t27 = __eax;
    _t41 = _a4;
    if((_t41 & 3) == 0) {
        while(1) {
L5:
            _t41 = _t41 + 4;
            if((( *_t41 ^ 255 ^ 2130640639 +  *_t41) & -2130640640) != 0) {
                break;
            }
        }
        goto L6;
    } else {
        goto L2;
    }
    while(1) {
L2:
        _t41 = _t41 + 1;
        if((_t27 & 4294967295) == 0) {
            break;
        }
        if((_t41 & 3) != 0) {
            continue;
        }
         &_v0 =  &_v0;
        while(1) {
L5:
            _t41 = _t41 + 4;
            if((( *_t41 ^ 255 ^ 2130640639 +  *_t41) & -2130640640) != 0) {
                break;
            }
        }
    }
    return _t41 - 1 - _a4;
L6:
    _t31 =  *(_t41 - 4);
    if((_t31 & 4294967295) == 0) {
        return _t41 - 4 - _a4;
    }
    if((_t31 & 4294967295) == 0) {
        return _t41 - 3 - _a4;
    }
    if((_t31 & 16711680) == 0) {
        return _t41 - 2 - _a4;
    }
    if((_t31 & -16777216) == 0) {
        return _t41 - 1 - _a4;
    }
    goto L5;
}

L00411244(intOrPtr __eax, intOrPtr* _a4)
{
    _unknown_ __ebp;
    intOrPtr _t17;
    _unknown_ _t21;
    _unknown_ _t23;
    _unknown_ _t27;
    _unknown_ _t33;

    _t17 = __eax;
    if(_a4 == 0) {
        _push("stream != NULL");
        _push(0);
        _push(48);
        _push("_freebuf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        _t33 = _t17 - 1;
        if(_t33 == 0) {
            asm("int3 ");
        }
    }
    if(_t33 == 0) {
        return ;
    }
    _t17 = _a4;
    if(_t33 == 0) {
        return ;
    }
    L0041141A( *((intOrPtr*)(_a4 + 8)), 2);
     *(_a4 + 12) =  *(_a4 + 12) & -1033;
     *_a4 = 0;
     *((intOrPtr*)(_a4 + 8)) = 0;
     *((intOrPtr*)(_a4 + 4)) = 0;
    return;
}

L0041124E(_unknown_ __eax, signed int _a4, signed int _a8)
{
    signed short _v8;
    intOrPtr _v12;
    signed int _v14;
    signed int _v15;
    char _v16;
    _unknown_ __ebp;
    _unknown_ _t30;
    signed int _t37;
    _unknown_ _t39;
    _unknown_ _t42;
    signed int _t52;

    __eflags = _a4 + 1 - 256;
    if(__eflags <= 0) {
        return  *( *4361940 + _a4 * 2) & 65535 & _a8;
    }
    _t52 =  *4361940;
    _t37 =  *(_t52 + (_a4 >> 8 & 255 & 4294967295 & ) * 2) & 65535 & 32768;
    if(__eflags == 0) {
        _v16 = _t37 & 4294967295;
        _v15 = 0;
        _v12 = 1;
    } else {
        _v16 = _a4 >> 8 & 255 & 4294967295;
        _v15 = _t52 & 4294967295;
        _v14 = 0;
        _v12 = 2;
    }
    _t39 = L004113C0( &_v8, 1,  &_v16, _v12,  &_v8,  *4364564,  *4364548, 1);
    __eflags = _t39;
    if(_t39 != 0) {
        return _v8 & 65535 & _a8;
    }
    return 0;
}

L00411253(int _a4, int _a8, char* _a12, int* _a16, char* _a20, int _a24)
{
    int _v8;
    short* _v20;
    short* _v28;
    int _v32;
    int _v36;
    int _v40;
    int _v44;
    int _v48;
    short* _v52;
    intOrPtr _v56;
    intOrPtr _v76;
    short* _v80;
    char _v92;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t87;
    _unknown_ _t95;
    _unknown_ _t112;
    _unknown_ _t117;

    _push(255);
    _push(4355224);
    _push(4264356);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp =  &((__esp)[0xffffffffffffffe2]);
    _v56 =  *4361904;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    _v36 = 0;
    _v48 = 0;
    _v32 =  *_a16;
    _v40 = 0;
    if(_a4 == _a8) {
L31:
        if(_v48 != 0) {
            L0041141A(_v52, 2);
        }
    } else {
        _push( &_v76);
        _t119 = _a4;
        _push(_a4);
        if(GetCPInfo() != 0 && _v76 == 1 && GetCPInfo(_a8,  &_v76) != 0 && _v76 == 1) {
            _v40 = 1;
        }
        if(_v40 != 0) {
            if(_v32 == 255) {
                _push(_a12);
                _t112 = L00411235(_t89, __esp);
                __esp =  &((__esp)[2]);
                _v44 = _t112 + 1;
            } else {
                _t119 = _v32;
                _v44 = _v32;
            }
        }
        if(_v40 != 0) {
L14:
            _v8 = 0;
            L00414C20((_v44 << 1) + 3 & 252, _t119, __esp);
            _v80 = __esp;
            _v28 = __esp;
            _v52 = _v80;
            _push(_v44 << 1);
            _push(0);
            _push(_v52);
            L00411195(__esp);
            __esp =  &((__esp)[6]);
            _v8 = -1;
            if(_v52 != 0) {
L19:
                if(MultiByteToWideChar(_a4, 1, _a12, _v32, _v52, _v44) == 0) {
                    goto L31;
                }
            } else {
                _v52 = L00411564(_v44, 2, _v44, 2, "convrtcp.c", 126);
                if(_v52 != 0) {
                    _v48 = _v48 + 1;
                    goto L19;
                }
L34:
                __esp =  &_v92;
                 *fs:0x0] = _v20;
                L00411087();
                _pop(__edi);
                _pop(__esi);
                _pop(__ebx);
                return;
                goto L19;
            }
L20:
            if(_a20 == 0) {
                if(_v40 != 0) {
L26:
                    _v36 = L00411564(_t98, 1, _v44, 2, "convrtcp.c", 161);
                    if(_v36 != 0) {
                        _v44 = WideCharToMultiByte(_a8, 0, _v52, _v44, _v36, _v44, 0, 0);
                        if(_v44 != 0) {
                            if(_v32 != 255) {
                                 *_a16 = _v44;
                            }
                        } else {
                            L0041141A(_v36, 2);
                            _v36 = 0;
                        }
                    }
                    goto L31;
                }
                goto L25;
            }
            if(WideCharToMultiByte(_a8, 0, _v52, _v44, _a20, _a24, 0, 0) != 0) {
                _v36 = _a20;
            }
            goto L31;
L25:
            _v44 = WideCharToMultiByte(_a8, 0, _v52, _v44, 0, 0, 0, 0);
            if(_v44 == 0) {
                goto L31;
            }
            goto L26;
        }
        _push(0);
        _push(0);
        _push(_v32);
        _t119 = _a12;
        _push(_a12);
        _push(1);
        _push(_a4);
        _v44 = MultiByteToWideChar();
        if(_v44 != 0) {
            goto L14;
        }
    }
}

L00411258(signed int __edx, _unknown_ __esp, signed int* _a4, signed int _a8)
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
L7:
            _t28 =  *__ecx ^ 255 ^ 2130640639 +  *__ecx;
            _t33 =  *__ecx;
            __ecx = __ecx + 4;
            if((_t28 & -2130640640) != 0) {
                break;
            }
L6:
             *__edi = _t33;
            __edi =  &((__edi)[1]);
        }
        if((_t33 & 4294967295) == 0) {
L16:
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
                        goto L6;
                    }
                }
            }
        }
L17:
    } else {
        goto L3;
    }
    while(1) {
L3:
        __ecx = __ecx + 1;
        if((_t33 & 4294967295) == 0) {
            break;
        }
         *__edi = _t33 & 4294967295;
        __edi =  &((__edi)[0]);
        if((__ecx & 3) != 0) {
            continue;
        } else {
            goto L7;
        }
        goto L17;
    }
    goto L16;
}

L00411262(signed int __edx, char* _a4, short _a8)
{
    int _v8;
    signed int _v12;
    _unknown_ __ebp;
    signed int _t17;
    signed int _t20;
    _unknown_ _t21;
    _unknown_ _t23;
    signed int _t27;

    _t27 = __edx;
    if(_a4 == 0) {
        return 0;
    }
    if( *4364548 != 0) {
        _v8 = 0;
        _t17 = WideCharToMultiByte( *4364564, 0,  &_a8, 1, _a4,  *4361924, 0,  &_v8);
        _v12 = _t17;
        if(_v12 != 0) {
            if(_v8 == 0) {
                return _v12;
            }
        }
         *4363820 = 42;
        return _t17 | 255;
    }
    _t20 = _a8 & 65535;
    if(_t20 <= 255) {
         *_a4 = _t27 & 4294967295;
        return 1;
    }
     *4363820 = 42;
    return _t20 | 255;
}

L0041127B(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    intOrPtr _v8;
    intOrPtr* _v12;
    char _v44;
    intOrPtr _v48;
    _unknown_ __ebp;
    _unknown_ _t32;
    char* _t33;
    intOrPtr _t36;
    _unknown_ _t41;

    _t33 =  &_v44;
    _v12 = _t33;
    if(_a12 == 0) {
        _push("format != NULL");
        _push(0);
        _push(90);
        _push("f:\vs70builds\3077\vc\crtbld\crt\src\vsprintf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t33 == 1) {
            asm("int3 ");
        }
    }
     *((intOrPtr*)(_v12 + 4)) = _a8;
     *((intOrPtr*)(_v12 + 12)) = 66;
     *((intOrPtr*)(_v12 + 8)) = _a4;
     *_v12 = _a4;
    _t36 = _a16;
    L0041134D(_v12, _a12, _t36);
    _v8 = _t36;
    if(_a4 == 0) {
        return _v8;
    }
     *((intOrPtr*)(_v12 + 4)) =  *((intOrPtr*)(_v12 + 4)) - 1;
    if( *((intOrPtr*)(_v12 + 4)) < 0) {
        _v48 = L004114AB(0, _v12);
        return _v8;
    }
     *((char*)( *_v12)) = 0;
    _v48 = 0;
     *_v12 =  *_v12 + 1;
    return _v8;
}

L00411285(_unknown_ __eax)
{
    intOrPtr _v8;
    signed int _v12;
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t31;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t44;
    intOrPtr _t50;

    _v8 = 0;
    _v12 = 3;
    while(_v12 <  *4369536) {
        _t50 =  *((intOrPtr*)( *4364596 + _v12 * 4));
        if(_t50 != 0) {
            if(_t50 != 0 && L00411145( *4364596, _t50,  *((intOrPtr*)( *4364596 + _v12 * 4))) != 255) {
                _v8 = _v8 + 1;
            }
            if(_v12 >= 20) {
                L0041141A( *((intOrPtr*)( *4364596 + _v12 * 4)), 2);
                 *((intOrPtr*)( *4364596 + _v12 * 4)) = 0;
            }
        }
        _v12 = _v12 + 1;
    }
}

L0041128A(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t20;
    intOrPtr _t21;
    intOrPtr _t25;
    _unknown_ _t28;

    if( *4364376 > 0) {
        _t27 =  *4364376 - 1;
        _t42 =  *4364360 -  *4364376 - 1;
        if( *4364360 !=  *4364376 - 1) {
             *4364360 =  *4364360 + 1;
        } else {
            _t28 = L00411096(_t27, _t42);
            if(_t28 == 0) {
                _push("_CrtCheckMemory()");
                _push(0);
                _push(1275);
                _push("dbgheap.c");
                _push(2);
                L0041119F();
                __esp = __esp + 20;
                _t44 = _t28 - 1;
                if(_t28 == 1) {
                    asm("int3 ");
                }
            }
             *4364360 = 0;
        }
    }
    _t21 = _a4;
    L004111EA(_t44, _t21);
    if(_t21 == 0) {
        _push("_CrtIsValidHeapPointer(pUserData)");
        _push(0);
        _push(1291);
        _push("dbgheap.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t21 == 1) {
            asm("int3 ");
        }
    }
    _v12 = _a4 - 32;
    if(( *(_v12 + 20) & 65535) != 4 &&  *(_v12 + 20) != 1) {
        _t25 = _v12;
        if(( *(_t25 + 20) & 65535) != 2 &&  *(_v12 + 20) != 3) {
            _push("_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
            _push(0);
            _push(1297);
            _push("dbgheap.c");
            _push(2);
            L0041119F();
            __esp = __esp + 20;
            if(_t25 == 1) {
                asm("int3 ");
            }
        }
    }
    if( *(_v12 + 20) == 2 && _a8 == 1) {
        _a8 = 2;
    }
    _v8 =  *((intOrPtr*)(_v12 + 16));
    return _v8;
}

L00411294(_unknown_ __eax, intOrPtr* _a4)
{
    signed int _v8;
    _unknown_ _v12;
    _unknown_ __ebp;
    _unknown_ _t56;
    signed int _t59;
    intOrPtr _t76;

    _t56 = __eax;
    if(_a4 != 0) {
         *_a4 =  *4364368;
        _v8 = 0;
        while(1) {
            __eflags = _v8 - 5;
            if(_v8 >= 5) {
                break;
            }
             *(_a4 + 24 + _v8 * 4) = 0;
             *(_a4 + 4 + _v8 * 4) = 0;
            _v8 = _v8 + 1;
        }
        _v12 =  *4364368;
        while(1) {
            __eflags = _v12;
            if(__eflags == 0) {
                break;
            }
            _t59 =  *(_v12 + 20) & 65535;
            if(__eflags < 0) {
L15:
                L0041119F(0, 0, 0, 0, "Bad memory block found at 0x%p.\n", _v12);
                __eflags = _t59 - 1;
                if(_t59 == 1) {
                    asm("int3 ");
                }
L17:
                _v12 =  *_v12;
                continue;
            }
            _t76 = _v12;
            __eflags = ( *(_t76 + 20) & 65535) - 5;
            if(( *(_t76 + 20) & 65535) >= 5) {
                goto L15;
            }
             *((intOrPtr*)(_a4 + 4 + ( *(_v12 + 20) & 65535) * 4)) =  *((intOrPtr*)(_a4 + 4 + ( *(_v12 + 20) & 65535) * 4)) + 1;
             *((intOrPtr*)(_a4 + 24 + ( *(_v12 + 20) & 65535) * 4)) =  *((intOrPtr*)(_a4 + 24 + ( *(_v12 + 20) & 65535) * 4)) +  *((intOrPtr*)(_v12 + 16));
            goto L17;
        }
         *((intOrPtr*)(_a4 + 44)) =  *4364364;
         *((intOrPtr*)(_a4 + 48)) =  *4364352;
        return;
    } else {
        L0041119F(0, 0, 0, 0, "%s", "_CrtMemCheckPoint: NULL state pointer.\n");
        if(_t56 != 1) {
            return ;
        }
        asm("int3 ");
        return ;
    }
}

L004112AD(intOrPtr _a4, intOrPtr _a8)
{
    signed int _v8;
    char _v20;
    intOrPtr __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t27;
    intOrPtr _t28;
    intOrPtr _t32;
    signed int _t33;
    signed int _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    signed int _t39;
    _unknown_ _t40;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t48;
    char* _t49;
    _unknown_ _t51;
    _unknown_ _t54;
    _unknown_ _t56;
    _unknown_ _t60;
    intOrPtr* _t62;
    intOrPtr _t63;

    _push(_t35);
    _t27 =  *4361064;
    _push(__ebx);
    _push(_t63);
    _push(_t51);
    _v8 = _t27;
    if(_t27 != 255) {
        __ebx = _a8;
        _t28 = __ebx;
        _t48 = _t28 + 1;
        while(1) {
L3:
            _t28 = _t28 + 1;
            if((_t35 & 4294967295) == 0) {
                break;
            }
        }
        L00414C20(_t28 - _t48 + 83 & 252, _t35, __esp);
        _t49 = __esp;
        _t32 = __ebx;
        _push(7 << 2);
        _push("Stack around the variable '");
        _push(_t49);
        memcpy();
        __esp = __esp + 12;
        _t63 = _t32;
        while(1) {
L5:
            _t32 = _t32 + 1;
            if(0 == 0) {
                break;
            }
        }
        _t33 = _t32 - _t63;
        _t56 = _t49 - 1;
        while(1) {
L7:
            _t56 = _t56 + 1;
            if(0 == 0) {
                break;
            }
        }
        _t39 = _t33 >> 2;
        _push(_t39 << 2);
        _push(_t63);
        _push(_t56);
        memcpy();
        __esp = __esp + 12;
        _push((_t33 & 3) << 0);
        _push(_t63);
        _push(_t63 + _t39 + _t39);
        memcpy();
        __esp = __esp + 12;
        _t62 = _t49 - 1;
        while(1) {
L9:
            _t62 = _t62 + 1;
            if((_t33 & 4294967295) == 0) {
                break;
            }
        }
         *_t62 = "' was corrupted.";
         *((intOrPtr*)(_t62 + 4)) = M00425598;
        _t27 = M0042559C;
         *(_t62 + 8) = _t27;
        _push(_t49);
         *((intOrPtr*)(_t62 + 12)) =  *4347296;
        _push(2);
        _push(_v8);
        _push(_a4);
         *(_t62 + 16) = _t27 & 4294967295;
        L00412930();
        __esp = __esp + 16;
    }
    __esp =  &_v20;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L004112CB(_unknown_ __ecx)
{
    void* _v8;
    _unknown_ __ebp;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t40;
    _unknown_ _t41;

    _t41 = __ecx;
    _push(_t41);
    if( *4369564 ==  *4369580) {
        _v8 = HeapReAlloc( *4370304, 0,  *4369568, ( *4369580 + 16) * ( *4369580 + 16));
        if(_v8 == 0) {
            return 0;
        }
         *4369568 = _v8;
         *4369580 =  *4369580 + 16;
    }
    _v8 =  *4369568 +  *4369564 *  *4369564;
    _v8[4] = HeapAlloc( *4370304, 8, 16836);
    if(_v8[4] == 0) {
        return 0;
    }
    _v8[3] = VirtualAlloc(0, 1048576, 8192, 4);
    if(_v8[3] != 0) {
         *_v8 = 0;
        _v8[1] = 0;
        _v8[2] = -1;
         *4369564 =  *4369564 + 1;
         *(_v8[4]) = -1;
        return _v8;
    }
    HeapFree( *4370304, 0, _v8[4]);
    return 0;
}

L004112EE(_unknown_ __eax, signed int _a4)
{
    long _v8;
    _unknown_ __ebp;
    _unknown_ _t16;
    signed int _t17;
    int _t20;
    _unknown_ _t24;
    _unknown_ _t28;
    _unknown_ _t30;

    _push(_t24);
    _t17 = _a4;
    __eflags = _t17 -  *4370324;
    if(__eflags >= 0) {
L3:
         *4363820 = 9;
        return _t17 | 255;
    }
    _t17 =  *(4370400 + (_a4 >> 5) * 4);
    if(__eflags != 0) {
        _t20 = FlushFileBuffers(L00411375(_a4));
        __eflags = _t20;
        if(_t20 != 0) {
            _v8 = 0;
        } else {
            _v8 = GetLastError();
        }
        __eflags = _v8;
        if(_v8 == 0) {
            return _v8;
        }
         *4363824 = _v8;
         *4363820 = 9;
        _v8 = -1;
        return _v8;
    }
    goto L3;
}

L004112F8(_unknown_ __ecx, void* _a4, int _a8, intOrPtr _a12)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t15;

    _t15 = __ecx;
    _push(_t15);
    if(_a4 == 0 || IsBadReadPtr(_a4, _a8) != 0) {
L6:
        _v8 = 0;
        return _v8;
    } else {
        if(_a12 == 0 || IsBadWritePtr(_a4, _a8) == 0) {
            _v8 = 1;
            return _v8;
        } else {
            goto L6;
        }
    }
    return _v8;
}

L004112FD(_unknown_ __eax, signed int _a4, long _a8, char _a12, intOrPtr _a16)
{
    char _v8;
    long _v12;
    signed int _v16;
    signed int _v20;
    _unknown_ __ebp;
    _unknown_ _t42;
    signed int _t43;
    signed int _t46;
    signed int _t54;
    _unknown_ _t60;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t78;
    _unknown_ _t79;
    _unknown_ _t80;

    _t43 = _a4;
    __eflags = _t43 -  *4370324;
    if(__eflags >= 0) {
L3:
         *4363820 = 9;
         *4363824 = 0;
        return _t43 | 255;
    }
    _t43 =  *(4370400 + (_a4 >> 5) * 4);
    if(__eflags != 0) {
        _v12 = _a8;
        _v8 = _a12;
        _t46 = L00411375(_a4);
        _v16 = _t46;
        __eflags = _v16 - 255;
        if(_v16 != 255) {
            _push(_a16);
            _push( &_v8);
            _t62 = _v12;
            _push(_v12);
            _push(_v16);
            _v12 = SetFilePointer();
            __eflags = _v12 - 255;
            if(_v12 != 255) {
L9:
                 *((intOrPtr*)( *(4370400 + (_a4 >> 5) * 4) + 4 + (_a4 & 31) * 8)) =  *( *(4370400 + (_a4 >> 5) * 4) + 4 + (_a4 & 31) * 8) & 253 & 4294967295;
                return _v12;
            }
            goto L7;
            return __eax;
        }
        goto L5;
L7:
        _v20 = GetLastError();
        __eflags = _v20;
        if(_v20 == 0) {
            goto L9;
        }
        _t54 = _v20;
        L00411113(_t62, _t54);
        return _t54 | 255;
    }
    goto L3;
L5:
     *4363820 = 9;
    return _t46 | 255;
}

L00411334(intOrPtr _a4, signed int _a8, intOrPtr _a12, signed int* _a16, signed int* _a20, char _a22)
{
    char _v8;
    char _v12;
    signed int _v16;
    signed int _v20;
    char _v24;
    char _v28;
    signed int _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    char _v44;
    char _v48;
    char _v52;
    char _v56;
    char _v68;
    char _v80;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t115;
    _unknown_ _t118;
    _unknown_ _t120;
    signed int _t123;
    _unknown_ _t124;
    _unknown_ _t128;
    signed int _t129;
    char* _t130;
    intOrPtr _t131;
    char* _t133;
    char* _t134;
    signed int _t135;
    intOrPtr _t136;
    signed int _t137;
    intOrPtr _t138;
    _unknown_ _t139;
    intOrPtr _t140;
    intOrPtr _t142;
    intOrPtr _t144;
    _unknown_ _t145;
    intOrPtr _t146;
    intOrPtr _t147;
    signed int* _t148;
    signed int _t149;
    signed int _t151;
    intOrPtr _t152;
    _unknown_ _t154;
    intOrPtr _t157;
    signed int _t166;
    signed int _t168;
    _unknown_ _t170;
    signed int _t174;
    signed int _t185;
    signed int _t187;
    signed int _t188;
    _unknown_ _t191;
    signed int _t192;
    signed int _t193;
    intOrPtr _t194;
    intOrPtr _t195;
    _unknown_ _t196;
    intOrPtr _t197;
    _unknown_ _t198;
    signed int _t199;
    _unknown_ _t201;

    L00414C20(1024, _t154, __esp);
    _t148 = _a20;
    _t195 = _a4;
     *_a16 = 0;
    _v16 = __esp;
     *_a8 = 0;
    _push(_t195);
    _v32 = 0;
     *_t148 = 0;
    _t191 = L004160C0(_a16, _a8);
    __esp = __esp + 4;
    if(_t191 == 0) {
L54:
        __esp =  &_v68;
        return;
    } else {
        _t196 = _t195 -  *((intOrPtr*)(_t191 + 4));
         *_t148 =  *(_t191 + 24);
        _v32 = 1;
        if( *4364344 != 0) {
L14:
            _t174 = 0;
            _t149 = 0;
            _v20 = 0;
            if(0 <= 0) {
                goto L54;
            } else {
                _t157 =  *((intOrPtr*)(_t191 + 20));
                goto L16;
                do {
L16:
                    _t123 = (_t149 & 4294967295 & ) + (_t149 & 4294967295 & ) * 4 << 3;
                    if( *((intOrPtr*)(_t157 + _t123 + 12)) >= _t196) {
                        goto L19;
                    } else {
                        if(_t196 -  *((intOrPtr*)(_t123 +  *((intOrPtr*)(_t191 + 20)) + 12)) <  *((intOrPtr*)(_t123 +  *((intOrPtr*)(_t191 + 20)) + 16))) {
                            _t197 = _t196 -  *((intOrPtr*)(_t157 + 12 + ((_t149 & 4294967295 & ) + (_t149 & 4294967295 & ) * 4) * 8));
                            _v36 = _t197;
                            if(_t197 != 255) {
                                L00414C20(260, _t157, __esp);
                                _t129 = __esp;
                                _push( &_v28);
                                _push( &_v44);
                                _push( &_v48);
                                _push(_t129);
                                _push(_v16);
                                _t130 =  &_v52;
                                _push(_t130);
                                _push(4346092);
                                _push( *(_t191 + 24));
                                 *4364272();
                                __esp = __esp + 32;
                                if(_t130 != 0) {
                                    _t131 = _v28;
                                    _push( &_v24);
                                    _push(0);
                                    _push("r");
                                    _push(_t131);
                                     *4364276();
                                    __esp = __esp + 16;
                                    if(_t131 != 0) {
                                        _push( &_v8);
                                        _push( &_v56);
                                        _t133 =  &_a22;
                                        _push(_t133);
                                        _push( &_v12);
                                        _push(_t197);
                                        _push(_t149 + 1);
                                        _push(_v24);
                                         *4364280();
                                        __esp = __esp + 28;
                                        if(_t133 != 0) {
                                            _t134 =  &_v8;
                                            _push(_t134);
                                            _push(0);
                                            _push(_v12);
                                             *4364284();
                                            __esp = __esp + 12;
                                            if(_t134 != 0) {
                                                _t135 = _v8;
                                                if(_t135 != 0) {
                                                    _push(_t135);
                                                    _push(0);
                                                    GetProcessHeap();
                                                    _push(_t135);
                                                    HeapAlloc();
                                                    _t192 = _t135;
                                                    _t136 = _v12;
                                                    _push( &_v8);
                                                    _push(_t192);
                                                    _push(_t136);
                                                    _v20 = _t192;
                                                     *4364284();
                                                    __esp = __esp + 12;
                                                    if(_t136 != 0) {
                                                        _t137 =  *_t192 & 65535;
                                                        _t151 = 0;
                                                        _v16 = 0;
                                                        if(_t137 > 0) {
                                                            goto L29;
                                                            do {
L29:
                                                                _t138 =  *((intOrPtr*)(_t192 + 4 + _t151 * 4));
                                                                _t185 =  *(_t138 + _t192) & 65535;
                                                                _t139 = _t138 + _t192;
                                                                _t198 = _t139 + 4 + _t185 * 4;
                                                                _v40 = _t198 + _t185 * 8;
                                                                _t166 = 0;
                                                                if(_t185 <= 0) {
                                                                    goto L35;
                                                                } else {
                                                                    __esp =  &_v80;
                                                                    while(1) {
                                                                        _t152 = _v36;
                                                                        if( *((intOrPtr*)(_t198 + _t166 * 8)) <= _t152 && _t152 <=  *((intOrPtr*)(_t198 + 4 + _t166 * 8))) {
                                                                            break;
                                                                        }
                                                                        _t166 = _t166 + 1;
                                                                        if(_t166 < _t185) {
                                                                            continue;
                                                                        } else {
                                                                            _t151 = _v16;
                                                                            goto L35;
                                                                        }
                                                                        goto L50;
                                                                    }
                                                                    _t140 =  *((intOrPtr*)(_t139 + 4 + _t166 * 4));
                                                                    _t199 =  *(_t140 + _t192 + 2) & 65535;
                                                                    _t137 = _t140 + _t192;
                                                                    _v36 = _t137 + 4 + _t199 * 4;
                                                                    _t193 = _t192 | 255;
                                                                    _t187 = 0;
                                                                    _v16 = _t193;
                                                                    if(_t199 > 0) {
                                                                        while(1) {
L38:
                                                                            _t168 = _t152 -  *((intOrPtr*)(_t137 + 4 + _t187 * 4));
                                                                            if(_t168 < _t193) {
                                                                                _v16 = _t187;
                                                                                _t193 = _t168;
                                                                            }
                                                                            _t187 = _t187 + 1;
                                                                            if(_t187 >= _t199) {
                                                                                break;
                                                                            }
                                                                        }
                                                                        _t137 = _v16;
                                                                        if(_t137 >= 0) {
                                                                            _t188 =  *(_v36 + _t137 * 2) & 65535;
                                                                            _t194 = _a12;
                                                                             *_a16 = _t188;
                                                                            _t142 = _v40;
                                                                            _t170 = 0;
                                                                            if((_t188 & 4294967295) == 0) {
L46:
                                                                                if(_t170 >= _t194) {
                                                                                    _t170 = _t194 - 1;
                                                                                }
                                                                            } else {
                                                                                _t201 = _a8 - _t142;
                                                                                while(_t170 < _t194) {
                                                                                     *(_t201 + _t142) = _t188 & 4294967295;
                                                                                    _t170 = _t170 + 1;
                                                                                    _t142 = _t142 + 1;
                                                                                    if((_t188 & 4294967295) != 0) {
                                                                                        continue;
                                                                                    } else {
                                                                                        goto L46;
                                                                                    }
                                                                                    goto L48;
                                                                                }
                                                                            }
L48:
                                                                            _t137 = _a8;
                                                                             *(_t170 + _t137) = 0;
                                                                        }
                                                                    }
                                                                    _t192 = _v20;
                                                                }
                                                                goto L50;
L35:
                                                                _t137 =  *_t192 & 65535;
                                                                _t151 = _t151 + 1;
                                                                _v16 = _t151;
                                                            } while(_t151 < _t137);
                                                        }
L50:
                                                        _push(_t192);
                                                        _push(0);
                                                        GetProcessHeap();
                                                        _push(_t137);
                                                        HeapFree();
                                                    }
                                                }
                                            }
                                            _push(_v12);
                                             *4364288();
                                            __esp = __esp + 4;
                                        }
                                        _push(_v24);
                                         *4364292();
                                        __esp = __esp + 4;
                                    }
                                    _push(_v28);
                                     *4364296();
                                    __esp = __esp + 4;
                                }
                            }
                        } else {
                            _t174 = _v20;
                            goto L19;
                        }
                        goto L54;
                    }
                    goto L55;
L19:
                    _t149 = _t149 + 1;
                } while((_t149 & 4294967295) < (_t174 & 4294967295));
                __esp =  &_v68;
                return;
            }
        } else {
            if( *4364256 != 0) {
                goto L54;
            } else {
                _t144 = L00416570();
                 *4364256 = _t144;
                if(_t144 == 0) {
                    goto L54;
                } else {
                     *GetProcAddress(_t144, "PDBOpenValidate3");
                     *4364272 = _t144;
                    if(_t144 == 0) {
L12:
                        __esp =  &_v68;
                        return;
                    } else {
                        _t146 =  *4364256;
                         *GetProcAddress(_t146, "PDBOpenDBI");
                         *4364276 = _t146;
                        if(_t146 != 0) {
                             *GetProcAddress( *4364256, "DBIQueryModFromAddr");
                             *4364280 = _t146;
                            if(_t146 != 0) {
                                 *GetProcAddress( *4364256, "ModQueryLines");
                                 *4364284 = _t146;
                                if(_t146 != 0) {
                                    _t147 =  *4364256;
                                     *GetProcAddress(_t147, "ModClose");
                                     *4364288 = _t147;
                                    if(_t147 != 0) {
                                         *GetProcAddress( *4364256, "DBIClose");
                                         *4364292 = _t147;
                                        if(_t147 != 0) {
                                             *GetProcAddress( *4364256, "PDBClose");
                                             *4364296 = _t147;
                                            if(_t147 != 0) {
                                                 *4364344 = 1;
                                                goto L14;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        goto L12;
                    }
                }
            }
        }
    }
L55:
}

L0041133E(struct HINSTANCE__* _a4, int _a8)
{
    struct HWND__* _v12;
    char _v208;
    _unknown_ __ebp;
    _unknown_ _t10;
    struct HWND__* _t13;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t22;
    _unknown_ _t24;
    _unknown_ _t25;

    _push(__ebx);
    _push(_t25);
    _push(_t22);
    _push(51 << 2);
    _push(-858993460);
    _push( &_v208);
    memset();
    __esp = __esp + 12;
     *4363724 = _a4;
    _t13 = CreateWindowExA(0, 4363520, 4363624, 13565952, -2147483648, 0, -2147483648, 0, 0, 0, _a4, 0);
    L00411424(__esp - __esp);
    _v12 = _t13;
    if(_v12 != 0) {
        ShowWindow(_v12, _a8);
        __eflags = __esp - __esp;
        L00411424(__esp - __esp);
        UpdateWindow(_v12);
        __eflags = __esp - __esp;
        L00411424(__eflags);
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    L00411424(__ebp - __esp);
    return;
}

L00411343(signed int _a4, intOrPtr _a8, unsigned int _a12)
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
                goto ( *((intOrPtr*)(_t145 * 4 +  &M0041F2CC)));
            }
            goto L7;
        }
        goto L4;
L7:
        _t140 = _t130 & 3;
        _t145 = _t145 + _t140;
        goto ( *((intOrPtr*)(_t140 * 4 +  &M0041F1D0)));
    } else {
        _t158 = _t144 + _t156 - 4;
        _t154 = _t144 + _t151 - 4;
        if((_t154 & 3) != 0) {
            _t141 = _t154;
            if(_t144 < 4) {
                goto ( *((intOrPtr*)(_t144 * 4 +  &M0041F458)));
            }
            goto L27;
        }
        _t146 = _t144 >> 2;
        _t150 = _t147 & 3;
        if(_t146 < 8) {
            _t144 =  ~_t146;
            goto  *((intOrPtr*)( ~_t146 * 4 +  &M0041F408))[L29]goto ( *((intOrPtr*)( ~_t146 * 4 +  &M0041F408)));
            goto ( *((intOrPtr*)(0xc +  &M0041F458)));
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
        switch( *((intOrPtr*)(_t150 * 4 +  &M0041F458))) {
            case 0:
                return _a4;
                goto L34;
            case 1:
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L34;
            case 2:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L34;
            case 3:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
L34:
        }
L27:
        _t143 = _t141 & 3;
        _t144 = _t144 - _t143;
        goto ( *((intOrPtr*)(_t143 * 4 +  &M0041F35C)));
    }
L4:
    _t145 = _t144 >> 2;
    _t148 = _t147 & 3;
    _t162 = _t145 - 8;
    if(_t145 < 8) {
        switch( *((intOrPtr*)(_t145 * 4 +  &M0041F250))) {
            case 0:
                goto L10;
            case 1:
L11:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 24)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 24));
                goto L12;
            case 2:
L12:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 20)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 20));
                goto L13;
            case 3:
L13:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 16)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 16));
                goto L14;
            case 4:
L14:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 12)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 12));
                goto L15;
            case 5:
L15:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 8)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 8));
                goto L16;
            case 6:
L16:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 4)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 4));
                goto L17;
            case 7:
L17:
                goto ( *((intOrPtr*)(_t148 * 4 +  &M0041F2BC)));
        }
    }
    _push(_t145 << 2);
    _push(_t156);
    _push(_t151);
    memcpy();
    __esp = __esp + 12;
    _t151 = _t156 + _t145 + _t145;
    _t144 = 0;
    switch( *((intOrPtr*)(_t148 * 4 +  &M0041F2BC))) {
        case 0:
            return _a4;
            goto L34;
        case 1:
             *__edi = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L34;
        case 2:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L34;
        case 3:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L34;
    }
L10:
     *((intOrPtr*)(_t151 + _t145 * 4 - 28)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 28));
    goto L11;
}

L0041134D(_unknown_ _a4, intOrPtr _a8, _unknown_ _a12)
{
    _unknown_ _v8;
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v23;
    _unknown_ _v24;
    _unknown_ _v28;
    _unknown_ _v32;
    signed int _v36;
    signed int _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    intOrPtr _v56;
    _unknown_ _v61;
    _unknown_ _v572;
    signed int _v576;
    _unknown_ _v580;
    signed int _v581;
    _unknown_ _v588;
    signed int _v592;
    _unknown_ _v596;
    _unknown_ _v600;
    _unknown_ _v604;
    _unknown_ _v608;
    _unknown_ _v612;
    _unknown_ _v616;
    _unknown_ _v620;
    _unknown_ _v624;
    _unknown_ _v628;
    _unknown_ _v632;
    _unknown_ _v640;
    _unknown_ _v644;
    _unknown_ _v648;
    _unknown_ _v652;
    _unknown_ _v656;
    _unknown_ _v660;
    _unknown_ _v664;
    _unknown_ _v668;
    _unknown_ _v676;
    signed int _v680;
    _unknown_ _v684;
    _unknown_ _v688;
    _unknown_ _v692;
    _unknown_ _v696;
    _unknown_ _v700;
    _unknown_ _v702;
    _unknown_ __ebp;
    _unknown_ _t465;
    signed int _t470;
    _unknown_ _t471;
    _unknown_ _t475;
    _unknown_ _t494;

    _v56 =  *4361904;
    _v40 = 0;
    _v576 = 0;
    _v592 = 0;
    _v36 = 0;
    while(1) {
        _v581 = _t470 & 4294967295;
        _a8 = _a8 + 1;
        if(_v581 == 0 || _v576 < 0) {
            break;
        } else {
            if(_v581 < 32 || _v581 > 120) {
                _v680 = 0;
            } else {
                _v680 =  *(_v581 + 4355008) & 15;
            }
            goto L8;
        }
    }
    L00411087();
    return;
}

L00411352(signed int _a4, intOrPtr _a8, unsigned int _a12)
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
                goto ( *((intOrPtr*)(_t145 * 4 +  &M0041A38C)));
            }
            goto L7;
        }
        goto L4;
L7:
        _t140 = _t130 & 3;
        _t145 = _t145 + _t140;
        goto ( *((intOrPtr*)(_t140 * 4 +  &M0041A290)));
    } else {
        _t158 = _t144 + _t156 - 4;
        _t154 = _t144 + _t151 - 4;
        if((_t154 & 3) != 0) {
            _t141 = _t154;
            if(_t144 < 4) {
                goto ( *((intOrPtr*)(_t144 * 4 +  &M0041A518)));
            }
            goto L27;
        }
        _t146 = _t144 >> 2;
        _t150 = _t147 & 3;
        if(_t146 < 8) {
            _t144 =  ~_t146;
            goto  *((intOrPtr*)( ~_t146 * 4 +  &M0041A4C8))[L29]goto ( *((intOrPtr*)( ~_t146 * 4 +  &M0041A4C8)));
            goto ( *((intOrPtr*)(0xc +  &M0041A518)));
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
        switch( *((intOrPtr*)(_t150 * 4 +  &M0041A518))) {
            case 0:
                return _a4;
                goto L34;
            case 1:
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L34;
            case 2:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
                goto L34;
            case 3:
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                (__edi)[0] = __eax & 4294967295;
                __eax = _a4;
                return _a4;
L34:
        }
L27:
        _t143 = _t141 & 3;
        _t144 = _t144 - _t143;
        goto ( *((intOrPtr*)(_t143 * 4 +  &M0041A41C)));
    }
L4:
    _t145 = _t144 >> 2;
    _t148 = _t147 & 3;
    _t162 = _t145 - 8;
    if(_t145 < 8) {
        switch( *((intOrPtr*)(_t145 * 4 +  &M0041A310))) {
            case 0:
                goto L10;
            case 1:
L11:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 24)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 24));
                goto L12;
            case 2:
L12:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 20)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 20));
                goto L13;
            case 3:
L13:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 16)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 16));
                goto L14;
            case 4:
L14:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 12)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 12));
                goto L15;
            case 5:
L15:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 8)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 8));
                goto L16;
            case 6:
L16:
                 *((intOrPtr*)(_t151 + _t145 * 4 - 4)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 4));
                goto L17;
            case 7:
L17:
                goto ( *((intOrPtr*)(_t148 * 4 +  &M0041A37C)));
        }
    }
    _push(_t145 << 2);
    _push(_t156);
    _push(_t151);
    memcpy();
    __esp = __esp + 12;
    _t151 = _t156 + _t145 + _t145;
    _t144 = 0;
    switch( *((intOrPtr*)(_t148 * 4 +  &M0041A37C))) {
        case 0:
            return _a4;
            goto L34;
        case 1:
             *__edi = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L34;
        case 2:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L34;
        case 3:
             *__edi = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            (__edi)[0] = __eax & 4294967295;
            __eax = _a4;
            return _a4;
            goto L34;
    }
L10:
     *((intOrPtr*)(_t151 + _t145 * 4 - 28)) =  *((intOrPtr*)(_t156 + _t145 * 4 - 28));
    goto L11;
}

L00411366(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;

    L0041128A(_a4, _a4, 1);
    return;
}

L0041136B(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebp;
    _unknown_ _t20;
    _unknown_ _t31;

    _v12 = L0041128A( *4370676,  *4370676, 2);
    if(_v12 <  *4370672 -  *4370676 + 4) {
        if(_v12 >= 2048) {
            _v16 = 2048;
        } else {
            _v16 = _v12;
        }
        _v8 = L004114EC(_v12 + _v16,  *4370676, _v12 + _v16, 2, "onexit.c", 125);
        if(_v8 == 0) {
            _v8 = L004114EC( *4370676,  *4370676, _v12 + 16, 2, "onexit.c", 131);
            if(_v8 == 0) {
                return 0;
            }
        }
         *4370672 = _v8 + ( *4370672 -  *4370676 >> 2) * 4;
         *4370676 = _v8;
    }
     *((intOrPtr*)( *4370672)) = _a4;
     *4370672 =  *4370672 + 4;
    return _a4;
}

L00411375(signed int _a4)
{
    _unknown_ __ebp;
    signed int _t15;
    _unknown_ _t23;
    _unknown_ _t26;

    _t15 = _a4;
    __eflags = _t15 -  *4370324;
    if(__eflags < 0) {
        _t15 =  *(4370400 + (_a4 >> 5) * 4);
        if(__eflags != 0) {
            return  *((intOrPtr*)( *(4370400 + (_a4 >> 5) * 4) + (_a4 & 31) * 8));
        }
    }
     *4363820 = 9;
     *4363824 = 0;
    return _t15 | 255;
}

L00411384(signed int _a4, signed int _a8, signed int _a12, intOrPtr _a16)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    intOrPtr _v20;
    _unknown_ __ebp;
    signed int _t75;
    _unknown_ _t76;
    _unknown_ _t90;
    _unknown_ _t94;
    _unknown_ _t96;
    _unknown_ _t99;

    _v8 = 0;
    if( *4364376 > 0) {
        _t98 =  *4364376 - 1;
        _t150 =  *4364360 -  *4364376 - 1;
        if( *4364360 !=  *4364376 - 1) {
             *4364360 =  *4364360 + 1;
        } else {
            _t99 = L00411096(_t98, _t150);
            if(_t99 == 0) {
                _push("_CrtCheckMemory()");
                _push(0);
                _push(346);
                _push("dbgheap.c");
                _push(2);
                L0041119F();
                __esp = __esp + 20;
                if(_t99 == 1) {
                    asm("int3 ");
                }
            }
             *4364360 = 0;
        }
    }
    _v16 =  *4361552;
    if( *4361556 != 255 && _v16 ==  *4361556) {
        asm("int3 ");
    }
    _push(_a16);
    _push(_a12);
    _push(_v16);
    _push(_a8);
    _t75 = _a4;
    _push(_t75);
    _push(0);
    _push(1);
     *4361920();
    __esp = __esp + 28;
    if(_t75 != 0) {
        __eflags = (_a8 & 65535) - 2;
        if(__eflags != 0) {
            _t75 =  *4361548 & 1;
            if(__eflags == 0) {
                _v8 = 1;
            }
        }
        __eflags = _a4 - 224;
        if(_a4 > 224) {
L24:
            L0041119F(1, 0, 0, 0, "Invalid allocation size: %Iu bytes.\n", _a4);
            __eflags = _t75 - 1;
            if(_t75 != 1) {
                return ;
            }
            asm("int3 ");
            return ;
        }
        __eflags = _a4 + 36 - 224;
        if(_a4 + 36 <= 224) {
            __eflags = (_a8 & 65535) - 4;
            if((_a8 & 65535) != 4) {
                __eflags = _a8 - 1;
                if(_a8 != 1) {
                    __eflags = (_a8 & 65535) - 2;
                    if((_a8 & 65535) != 2) {
                        __eflags = _a8 - 3;
                        if(_a8 != 3) {
                            L0041119F(1, 0, 0, 0, "%s", "Error: memory allocation: bad memory block type.\n");
                            __eflags = _t75 - 1;
                            if(_t75 == 1) {
                                asm("int3 ");
                            }
                        }
                    }
                }
            }
            _v20 = _a4 + 36;
            L0041106E(_t75, _a4 + 36, _v20);
            _v12 = _t75;
            __eflags = _v12;
            if(_v12 == 0) {
                return ;
            }
             *4361552 =  *4361552 + 1;
            __eflags = _v8;
            if(_v8 == 0) {
                 *4364352 =  *4364352 + _a4;
                 *4364372 =  *4364372 + _a4;
                __eflags =  *4364372 -  *4364364;
                if( *4364372 >  *4364364) {
                     *4364364 =  *4364372;
                }
                __eflags =  *4364368;
                if( *4364368 == 0) {
                     *4364356 = _v12;
                } else {
                     *( *4364368 + 4) = _v12;
                }
                 *_v12 =  *4364368;
                 *(_v12 + 4) = 0;
                 *(_v12 + 8) = _a12;
                 *((intOrPtr*)(_v12 + 12)) = _a16;
                 *(_v12 + 16) = _a4;
                 *(_v12 + 20) = _a8;
                 *(_v12 + 24) = _v16;
                 *4364368 = _v12;
            } else {
                 *_v12 = 0;
                 *(_v12 + 4) = 0;
                 *(_v12 + 8) = 0;
                 *((intOrPtr*)(_v12 + 12)) = -19088708;
                 *(_v12 + 16) = _a4;
                 *(_v12 + 20) = 3;
                 *(_v12 + 24) = 0;
            }
            _push(4);
            _push( *4361560 & 255);
            _push(_v12 + 28);
            L00411195(__esp);
            __esp = __esp + 12;
            _push(4);
            _push( *4361560 & 255);
            _push(_v12 + _a4 + 32);
            L00411195(__esp);
            __esp = __esp + 12;
            _push(_a4);
            _push( *4361562 & 255);
            _push(_v12 + 32);
            L00411195(__esp);
            __esp = __esp + 12;
            return;
        }
        goto L24;
    }
    if(_a12 != 0) {
        _push(_a16);
        L0041119F(0, 0, 0, 0, "Client hook allocation failure at file %hs line %d.\n", _a12);
        __esp = __esp + 4;
        if(_t75 != 1) {
            return ;
        }
        asm("int3 ");
        return ;
    }
    L0041119F(0, 0, 0, 0, "%s", "Client hook allocation failure.\n");
    __eflags = _t75 - 1;
    if(_t75 != 1) {
        return ;
    }
    asm("int3 ");
    return ;
}

L004113A7()
{
    goto __imp__RtlUnwind;
}

L004113C0(_unknown_ __eax, int _a4, char* _a8, int _a12, short* _a16, int _a20, intOrPtr _a24, _unknown_ _a28)
{
    int _v8;
    short* _v20;
    short* _v28;
    short _v32;
    char* _v36;
    intOrPtr _v40;
    int _v44;
    int _v48;
    int _v52;
    int _v56;
    int _v60;
    short* _v64;
    short* _v68;
    char _v80;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t75;
    intOrPtr _t77;
    int _t80;
    char* _t82;
    _unknown_ _t91;
    _unknown_ _t108;

    _push(255);
    _push(4354408);
    _push(4264356);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp =  &((__esp)[0xffffffffffffffe8]);
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    if( *4364584 == 0) {
        if(GetStringTypeW(1, 4354344, 1,  &_v32) == 0) {
            if(GetLastError() == 120) {
                 *4364584 = 2;
            }
        } else {
             *4364584 = 1;
        }
    }
    if( *4364584 == 2 ||  *4364584 == 0) {
        _v36 = 0;
        if(_a24 == 0) {
            _a24 =  *4364548;
        }
        if(_a20 == 0) {
            _a20 =  *4364564;
        }
        _t77 = _a24;
        L00411578(_t77);
        _v40 = _t77;
        if(_v40 != 255) {
            if(_v40 == _a20) {
L18:
                _push(_a16);
                _push(_a12);
                _push(_a8);
                _push(_a4);
                _push(_a24);
                _v44 = GetStringTypeA();
                if(_v36 != 0) {
                    L0041141A(_v36, 2);
                }
                _t80 = _v44;
                goto L37;
            }
        } else {
            _t80 = 0;
            goto L37;
        }
L15:
        _push(0);
        _push(0);
        _push( &_a12);
        _t82 = _a8;
        _push(_t82);
        _push(_v40);
        _push(_a20);
        L00411253();
        __esp =  &((__esp)[0xc]);
        _v36 = _t82;
        if(_v36 != 0) {
            _a8 = _v36;
            goto L18;
        }
        _t80 = 0;
        goto L37;
    } else {
        if( *4364584 != 1) {
            _t80 = 0;
            goto L37;
        }
        _v48 = 0;
        _v60 = 0;
        if(_a20 == 0) {
            _a20 =  *4364564;
        }
        _push(0);
        _push(0);
        _push(_a12);
        _push(_a8);
        _t109 = 1;
        _push(1);
        _push(_a20);
        _v56 = MultiByteToWideChar();
        if(_v56 != 0) {
            _v8 = 0;
            L00414C20((_v56 << 1) + 3 & 252, 1, __esp);
            _v68 = __esp;
            _v28 = __esp;
            _v64 = _v68;
            _push(_v56 << 1);
            _push(0);
            _push(_v64);
            L00411195(__esp);
            __esp =  &((__esp)[6]);
            _v8 = -1;
            if(_v64 != 0) {
L31:
                _v52 = MultiByteToWideChar(_a20, 1, _a8, _a12, _v64, _v56);
                if(_v52 != 0) {
                    _v48 = GetStringTypeW(_a4, _v64, _v52, _a16);
                }
                if(_v60 != 0) {
                    L0041141A(_v64, 2);
                }
                _t80 = _v48;
                goto L37;
            }
            _v64 = L00411564(_v56, 2, _v56, 2, "a_str.c", 166);
            if(_v64 != 0) {
                _v60 = _v60 + 1;
                goto L31;
            }
            _t80 = 0;
            goto L37;
        }
        _t80 = 0;
L37:
        __esp =  &_v80;
         *fs:0x0] = _v20;
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t80;
    }
}

L004113D9(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    intOrPtr _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _t8 = __ecx;
    _push(_t8);
    _t5 =  *4364536;
    _v8 = _t5;
    if(_v8 == 0) {
        return ;
    }
    _push(_a4);
    _v8();
    __esp = __esp + 4;
    if(_t5 != 0) {
        return ;
    }
    return ;
}

L004113DE()
{
    intOrPtr _v36;
    intOrPtr _v44;
    intOrPtr _v48;
    char _v56;
    _unknown_ __ebp;
    char* _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t9;
    intOrPtr _t11;

    _t5 =  &_v56;
    L00411294(_t5, _t5);
    if(_v36 == 0) {
        _t11 = _v48;
        if(_t11 == 0) {
            if(_t11 == 0) {
                return 0;
            }
            if(_v44 == 0) {
                return 0;
            }
        }
    }
    L0041119F(0, 0, 0, 0, "%s", "Detected memory leaks!\n");
    if(_t5 == 1) {
        asm("int3 ");
    }
    L004114B0(_t5, 0);
    return 1;
}

L004113E8(_unknown_ __eax, _unknown_ __ecx, void* _a4)
{
    void* _v8;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t16;

    _t16 = __ecx;
    _push(_t16);
    __eflags = _a4;
    if(_a4 == 0) {
        return ;
    }
    __eflags =  *4370320 - 3;
    if( *4370320 != 3) {
        HeapFree( *4370304, 0, _a4);
        return;
    } else {
        _v8 = L004111C7(_a4);
        __eflags = _v8;
        if(__eflags != 0) {
            L0041149C(__eflags, _v8, _a4);
        }
        __eflags = _v8;
        if(_v8 != 0) {
            return ;
        }
        _t14 = HeapFree( *4370304, 0, _a4);
        return ;
    }
    return;
}

L004113ED(_unknown_ __eax, int _a4, int _a8, short* _a12, long _a16, char* _a20, short* _a24, int _a28, short* _a32)
{
    int _v8;
    long _v20;
    long _v28;
    short* _v32;
    short* _v36;
    long _v40;
    short* _v44;
    int _v48;
    int _v52;
    short* _v56;
    int _v60;
    int _v64;
    short* _v68;
    signed int _v72;
    signed int _v76;
    int _v80;
    long _v84;
    long _v88;
    long _v92;
    char _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t167;
    long _t168;
    int _t172;
    int _t174;
    _unknown_ _t181;
    short* _t186;
    _unknown_ _t189;
    _unknown_ _t192;
    int _t201;
    int _t210;
    int _t222;
    _unknown_ _t280;

    _push(255);
    _push(4354352);
    _push(4264356);
    _t168 =  *fs:0x0];
    _push(_t168);
     *fs:0x0] = __esp;
    __esp = __esp + -72;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    if( *4364580 == 0) {
        _t168 = LCMapStringW(0, 256, 4354344, 1, 0, 0);
        if(_t168 == 0) {
            _t168 = GetLastError();
            __eflags = _t168 - 120;
            if(_t168 == 120) {
                 *4364580 = 2;
            }
        } else {
             *4364580 = 1;
        }
    }
    if(_a16 > 0) {
        _t168 = L0041EDD0(_a12, _a16);
        _a16 = _t168;
    }
    if( *4364580 == 2 ||  *4364580 == 0) {
        _v32 = 0;
        _v44 = 0;
        _v48 = 0;
        if(_a4 == 0) {
            _a4 =  *4364548;
        }
        if(_a28 == 0) {
            _t168 =  *4364564;
            _a28 = _t168;
        }
        L00411578(_a4);
        _v40 = _t168;
        if(_v40 != 255) {
            __eflags = _v40 - _a28;
            if(_v40 == _a28) {
                _push(_a24);
                _push(_a20);
                _push(_a16);
                _push(_a12);
                _push(_a8);
                _push(_a4);
                _v52 = LCMapStringA();
                goto L35;
            }
            _push(0);
            _push(0);
            _push( &_a16);
            _push(_a12);
            _push(_v40);
            _t174 = _a28;
            _push(_t174);
            L00411253();
            __esp = __esp + 24;
            _v32 = _t174;
            __eflags = _v32;
            if(_v32 != 0) {
                _a12 = _v32;
                _push(0);
                _push(0);
                _push(_a16);
                _push(_a12);
                _t234 = _a8;
                _push(_a8);
                _push(_a4);
                _v36 = LCMapStringA();
                __eflags = _v36;
                if(_v36 != 0) {
                    _v8 = 0;
                    L00414C20( &(_v36[1]) & 252, _t234, __esp);
                    _v84 = __esp;
                    _v28 = __esp;
                    _v44 = _v84;
                    _push(_v36);
                    _push(0);
                    _push(_v44);
                    L00411195(__esp);
                    __esp = __esp + 12;
                    _v8 = -1;
                    __eflags = _v44;
                    if(_v44 != 0) {
L26:
                        _push(_v36);
                        _push(_v44);
                        _push(_a16);
                        _push(_a12);
                        _push(_a8);
                        _push(_a4);
                        _v36 = LCMapStringA();
                        __eflags = _v36;
                        if(_v36 != 0) {
                            _push(_a24);
                            _push(_a20);
                            _push( &_v36);
                            _push(_v44);
                            _push(_a28);
                            _t186 = _v40;
                            _push(_t186);
                            L00411253();
                            __esp = __esp + 24;
                            __eflags = _t186;
                            if(_t186 != 0) {
                                _v52 = 1;
                            } else {
                                _v52 = 0;
                            }
                        } else {
                            _v52 = 0;
                        }
L31:
                        __eflags = _v48;
                        if(_v48 != 0) {
                            L0041141A(_v44, 2);
                        }
                        goto L35;
                    }
                    _v44 = L00411064(_v36, _v36, 2, "a_map.c", 166);
                    __eflags = _v44;
                    if(_v44 != 0) {
                        _push(_v36);
                        _push(0);
                        _push(_v44);
                        L00411195(__esp);
                        __esp = __esp + 12;
                        _v48 = _v48 + 1;
                        goto L26;
                    }
                    _v52 = 0;
                    goto L31;
                }
                goto L20;
            }
            _t172 = 0;
            goto L77;
L20:
            goto L31;
L35:
            __eflags = _v32;
            if(_v32 != 0) {
                L0041141A(_v32, 2);
            }
            _t172 = _v52;
        } else {
            _t172 = 0;
        }
        goto L77;
    } else {
        __eflags =  *4364580 - 1;
        if( *4364580 != 1) {
            _t172 = 0;
            goto L77;
        }
        _v60 = 0;
        _v64 = 0;
        _v80 = 0;
        __eflags = _a28;
        if(_a28 == 0) {
            _a28 =  *4364564;
        }
        _push(0);
        _push(0);
        _push(_a16);
        _push(_a12);
        __eflags = _a32;
        _push(1);
        _t243 = _a28;
        _push(_a28);
        _v72 = MultiByteToWideChar();
        __eflags = _v72;
        if(_v72 != 0) {
            _v8 = 1;
            L00414C20((_v72 << 1) + 3 & 252, _t243, __esp);
            _v88 = __esp;
            _v28 = __esp;
            _v68 = _v88;
            _v8 = -1;
            __eflags = _v68;
            if(_v68 != 0) {
L48:
                _t201 = MultiByteToWideChar(_a28, 1, _a12, _a16, _v68, _v72);
                __eflags = _t201;
                if(_t201 != 0) {
                    _v60 = LCMapStringW(_a4, _a8, _v68, _v72, 0, 0);
                    __eflags = _v60;
                    if(__eflags != 0) {
                        if(__eflags == 0) {
                            _v76 = _v60;
                            _v8 = 2;
                            L00414C20((_v76 << 1) + 3 & 252, _v60, __esp);
                            _v92 = __esp;
                            _v28 = __esp;
                            _v56 = _v92;
                            _v8 = -1;
                            __eflags = _v56;
                            if(_v56 != 0) {
L64:
                                _t210 = LCMapStringW(_a4, _a8, _v68, _v72, _v56, _v76);
                                __eflags = _t210;
                                if(_t210 != 0) {
                                    __eflags = _a24;
                                    if(_a24 != 0) {
                                        _v60 = WideCharToMultiByte(_a28, 0, _v56, _v76, _a20, _a24, 0, 0);
                                    } else {
                                        _v60 = WideCharToMultiByte(_a28, 0, _v56, _v76, 0, 0, 0, 0);
                                        __eflags = _v60;
                                        if(_v60 != 0) {
                                        }
                                    }
                                }
L71:
                                __eflags = _v80;
                                if(_v80 != 0) {
                                    L0041141A(_v56, 2);
                                }
                                __eflags = _v64;
                                if(_v64 != 0) {
                                    L0041141A(_v68, 2);
                                }
                                _t172 = _v60;
                                goto L77;
                            }
                            _v56 = L00411064(_v76 << 1, _v76 << 1, 2, "a_map.c", 314);
                            __eflags = _v56;
                            if(_v56 != 0) {
                                _v80 = _v80 + 1;
                                goto L64;
                            }
                            goto L71;
                        }
                        goto L53;
                    }
                    goto L51;
L53:
                    __eflags = _a24;
                    if(_a24 == 0) {
L58:
                        goto L71;
                    }
                    __eflags = _v60 - _a24;
                    if(_v60 <= _a24) {
                        _t222 = LCMapStringW(_a4, _a8, _v68, _v72, _a20, _a24);
                        __eflags = _t222;
                        if(_t222 != 0) {
                            goto L58;
                        }
                        goto L57;
                    }
                    goto L71;
L57:
                    goto L71;
                }
                goto L49;
L51:
                goto L71;
            } else {
                _v68 = L00411064(_v72 << 1, _v72 << 1, 2, "a_map.c", 257);
                __eflags = _v68;
                if(_v68 != 0) {
                    _v64 = _v64 + 1;
                    goto L48;
                }
                _t172 = 0;
                goto L77;
            }
L49:
            goto L71;
        }
        _t172 = 0;
L77:
        __esp =  &_v104;
         *fs:0x0] = _v20;
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        return _t172;
    }
}

L004113FC(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t3;

    L00419600(__eflags, _a4, 0, 4);
    return;
}

L00411401(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    signed int _v16;
    intOrPtr* _v20;
    intOrPtr _v24;
    intOrPtr _v28;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t54;
    _unknown_ _t59;
    _unknown_ _t62;

    _v28 = _a4;
    _v28 = _v28 - 2;
    if(_v28 > 20) {
        return ;
    }
    switch( *((intOrPtr*)(( *(_v28 + 4316059) & 255) * 4 +  &M0041DB83))) {
        case 0:
            _v20 = 4364508;
            _v8 =  *_v20;
            goto L9;
        case 1:
            _v20 = 4364512;
            __eax = _v20;
            __ecx =  *__eax;
            _v8 =  *__eax;
            goto L9;
        case 2:
            _v20 = 4364516;
            __eax =  *_v20;
            _v8 = __eax;
            goto L9;
        case 3:
            _v20 = 4364520;
            __ecx = _v20;
            _v8 =  *_v20;
            goto L9;
        case 4:
            __eax = _a4;
            __eax = L0041DC20(__ecx, _a4);
            __eax = __eax + 8;
            _v20 = __eax;
            __ecx = _v20;
            _v8 =  *_v20;
L9:
            if(_v8 == 1) {
                return ;
            }
            if(_v8 == 0) {
                _push(3);
                L00411212();
            }
            if(_a4 == 8 || _a4 == 11 || _a4 == 4) {
                _v12 =  *4363920;
                 *4363920 = 0;
                if(_a4 == 8) {
                    _v24 =  *4361236;
                     *4361236 = 140;
                }
            }
            if(_a4 != 8) {
                 *_v20 = 0;
            } else {
                _v16 =  *4361224;
                while(_v16 <  *4361224 +  *4361228) {
                     *((intOrPtr*)(_v16 * _v16 + 4361112)) = 0;
                    _v16 = _v16 + 1;
                }
            }
            if(_a4 != 8) {
                _push(_a4);
                _v8();
                __esp = __esp + 4;
            } else {
                _push( *4361236);
                _push(8);
                _v8();
                __esp = __esp + 8;
            }
            if(_a4 != 8 && _a4 != 11) {
                if(_a4 != 4) {
                    return ;
                }
            }
             *4363920 = _v12;
            if(_a4 != 8) {
                return ;
            }
             *4361236 = _v24;
            return ;
        case 5:
            return;
    }
}

L0041140B(_unknown_ __eax)
{
    struct _STARTUPINFOA _v76;
    signed int _v80;
    signed int _v84;
    signed int _v88;
    int _v92;
    intOrPtr _v96;
    void* _v100;
    signed int _v104;
    void** _v108;
    int _v112;
    long _v116;
    _unknown_ __ebp;
    _unknown_ _t122;
    signed int _t123;
    _unknown_ _t127;
    _unknown_ _t128;
    long _t150;
    signed int _t153;
    _unknown_ _t178;
    signed int _t182;
    _unknown_ _t215;

    _t122 = __eax;
    _t123 = L00411064(_t122, 256, 2, "ioinit.c", 130);
    _v104 = _t123;
    __eflags = _v104;
    if(_v104 == 0) {
        return _t123 | 255;
    }
     *4370400 = _v104;
     *4370324 = 32;
    while(1) {
        __eflags = _v104 -  *4370400 + 256;
        if(_v104 >=  *4370400 + 256) {
            break;
        }
         *(_v104 + 4) = 0;
         *_v104 = -1;
         *((char*)(_v104 + 5)) = 10;
        _v104 = _v104 + 8;
    }
    GetStartupInfoA( &_v76);
    __eflags = _v76.cbReserved2 & 65535;
    if((_v76.cbReserved2 & 65535) == 0) {
L31:
        _v88 = 0;
        while(1) {
L33:
            __eflags = _v88 - 3;
            if(_v88 >= 3) {
                break;
            }
            _v104 =  *4370400 + _v88 * 8;
            __eflags =  *_v104 - 255;
            if( *_v104 != 255) {
                 *(_v104 + 4) = ( *(_v104 + 4) | 128) & 4294967295;
                goto L48;
            }
             *(_v104 + 4) = 129;
            __eflags = _v88;
            if(_v88 != 0) {
                asm("sbb edx, edx");
                _v116 =  ~(_v88 - 1) + -11;
            } else {
                _v116 = -10;
            }
            _v100 = GetStdHandle(_v116);
            __eflags = _v100 - 255;
            if(_v100 == 255) {
L45:
                 *(_v104 + 4) = ( *(_v104 + 4) | 64) & 4294967295;
                goto L46;
            }
            _v84 = GetFileType(_v100);
            __eflags = _v84;
            if(_v84 == 0) {
                goto L45;
            }
             *_v104 = _v100;
            __eflags = (_v84 & 255) - 2;
            if((_v84 & 255) != 2) {
                __eflags = (_v84 & 255) - 3;
                if((_v84 & 255) == 3) {
                     *(_v104 + 4) = ( *(_v104 + 4) | 8) & 4294967295;
                }
            } else {
                 *(_v104 + 4) = ( *(_v104 + 4) | 64) & 4294967295;
            }
L46:
L48:
            goto L32;
        }
        SetHandleCount( *4370324);
        return 0;
    }
    __eflags = _v76.lpReserved2;
    if(_v24 == 0) {
        goto L31;
    }
    _v92 =  *(_v76.lpReserved2);
    _v96 = _v76.lpReserved2 + 4;
    _v108 = _v96 + _v92;
    __eflags = _v92 - 2048;
    if(_v92 >= 2048) {
        _v112 = 2048;
    } else {
        _v112 = _v92;
    }
    _v92 = _v112;
    _v80 = 1;
    while(1) {
        _t141 =  *4370324;
        __eflags =  *4370324 - _v92;
        if( *4370324 >= _v92) {
            break;
        }
        _v104 = L00411064(_t141, 256, 2, "ioinit.c", 183);
        __eflags = _v104;
        if(_v104 != 0) {
            (4370400)[_v80] = _v104;
             *4370324 =  *4370324 + 32;
            while(1) {
                _t153 = _v80;
                __eflags = _v104 - (4370400)[_t153] + 256;
                if(_v104 >= (4370400)[_t153] + 256) {
                    break;
                }
                 *(_v104 + 4) = 0;
                 *_v104 = -1;
                 *((char*)(_v104 + 5)) = 10;
                _v104 = _v104 + 8;
            }
            _v80 = _v80 + 1;
            continue;
        }
        _v92 =  *4370324;
        break;
    }
    _v88 = 0;
    while(1) {
        __eflags = _v88 - _v92;
        if(_v88 >= _v92) {
            break;
        }
        __eflags =  *_v108 - 255;
        if(__eflags == 0 || __eflags == 0) {
L30:
            _v88 = _v88 + 1;
            _v96 = _v96 + 1;
            _v108 =  &(_v108[1]);
            continue;
        } else {
            if(__eflags != 0) {
L29:
                _v104 = (4370400)[_v88 >> 5] + (_v88 & 31) * 8;
                _t182 =  *_v108;
                 *_v104 = _t182;
                 *(_v104 + 4) = _t182 & 4294967295;
                goto L30;
            }
            _t150 = GetFileType( *_v108);
            __eflags = _t150;
            if(_t150 == 0) {
                goto L30;
            }
            goto L29;
        }
        goto L31;
    }
    goto L31;
L32:
    _v88 = _v88 + 1;
    goto L33;
}

L00411415(_unknown_ __eax, _unknown_ __ecx, intOrPtr* _a4)
{
    intOrPtr* _v8;
    _unknown_ __ebp;
    _unknown_ _t28;
    _unknown_ _t35;

    _t35 = __ecx;
    _t28 = __eax;
    _push(_t35);
    if(_a4 == 0) {
        _push("str != NULL");
        _push(0);
        _push(46);
        _push("_getbuf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t28 == 1) {
            asm("int3 ");
        }
    }
     *4364592 =  *4364592 + 1;
    _v8 = _a4;
     *((intOrPtr*)(_v8 + 8)) = L00411064(_t28, 4096, 2, "_getbuf.c", 58);
    if( *((intOrPtr*)(_v8 + 8)) == 0) {
         *(_v8 + 12) =  *(_v8 + 12) | 4;
         *((intOrPtr*)(_v8 + 8)) = _v8 + 20;
         *((intOrPtr*)(_v8 + 24)) = 2;
    } else {
         *(_v8 + 12) =  *(_v8 + 12) | 8;
         *((intOrPtr*)(_v8 + 24)) = 4096;
    }
     *_v8 =  *((intOrPtr*)(_v8 + 8));
     *((intOrPtr*)(_v8 + 4)) = 0;
    return;
}

L0041141A(signed int _a4, intOrPtr _a8)
{
    signed int _v8;
    _unknown_ __ebp;
    signed int _t84;
    signed int _t86;
    signed int _t87;
    signed int _t88;
    _unknown_ _t90;
    signed int* _t93;
    intOrPtr _t95;
    signed int _t101;
    signed int _t104;
    _unknown_ _t108;
    signed int _t118;
    signed int _t123;
    _unknown_ _t142;
    signed int _t159;

    _push(_t108);
    if( *4364376 > 0) {
        _t84 =  *4364376 - 1;
        _t173 =  *4364360 - _t84;
        if( *4364360 != _t84) {
             *4364360 =  *4364360 + 1;
        } else {
            _t84 = L00411096(_t84, _t173);
            if(_t84 == 0) {
                _push("_CrtCheckMemory()");
                _push(0);
                _push(1100);
                _push("dbgheap.c");
                _push(2);
                L0041119F();
                __esp = __esp + 20;
                if(_t84 == 1) {
                    asm("int3 ");
                }
            }
             *4364360 = 0;
        }
    }
    if(_a4 == 0) {
        return ;
    }
    __eflags = _a8 - 1;
    if(_a8 != 1) {
L15:
        _push(0);
        _push(0);
        _push(0);
        _push(_a8);
        _push(0);
        _push(_a4);
        _push(3);
         *4361920();
        __esp = __esp + 28;
        __eflags = _t84;
        if(__eflags == 0) {
            L0041119F(0, 0, 0, 0, "%s", "Client hook free failure.\n");
            __eflags = _t84 - 1;
            if(_t84 != 1) {
                return ;
            }
            asm("int3 ");
            return ;
        }
        L004111EA(__eflags, _a4);
        __eflags = _t84;
        if(_t84 == 0) {
            _push("_CrtIsValidHeapPointer(pUserData)");
            _push(0);
            _push(1132);
            _push("dbgheap.c");
            _push(2);
            L0041119F();
            __esp = __esp + 20;
            __eflags = _t84 - 1;
            if(_t84 == 1) {
                asm("int3 ");
            }
        }
        _t86 = _a4 - 32;
        _v8 = _t86;
        __eflags = ( *(_v8 + 20) & 65535) - 4;
        if(__eflags != 0) {
            _t86 = _v8;
            __eflags =  *((intOrPtr*)(_t86 + 20)) - 1;
            if(__eflags != 0) {
                __eflags = ( *(_v8 + 20) & 65535) - 2;
                if(__eflags != 0) {
                    _t86 = _v8;
                    __eflags =  *((intOrPtr*)(_t86 + 20)) - 3;
                    if(__eflags != 0) {
                        _push("_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
                        _push(0);
                        _push(1138);
                        _push("dbgheap.c");
                        _push(2);
                        L0041119F();
                        __esp = __esp + 20;
                        __eflags = _t86 - 1;
                        if(__eflags == 0) {
                            asm("int3 ");
                        }
                    }
                }
            }
        }
        if(__eflags == 0) {
            L00417D50(_v8 + 28, _v8 + 28, _t86, 4);
            __eflags = _t86;
            if(_t86 == 0) {
                _push(_v8 + 32);
                _push( *((intOrPtr*)(_v8 + 24)));
                _t86 =  *(_v8 + 20) & 65535;
                L0041119F(1, 0, 0, 0, "DAMAGE: before %hs block (#%d) at 0x%p.\n",  *((intOrPtr*)(4361564 + _t86 * 4)));
                __esp = __esp + 8;
                __eflags = _t86 - 1;
                if(_t86 == 1) {
                    asm("int3 ");
                }
            }
            _push(4);
            _push(_t86);
            _t101 = _v8;
            _push(_t101 +  *((intOrPtr*)(_v8 + 16)) + 32);
            L00417D50(_t101 +  *((intOrPtr*)(_v8 + 16)) + 32);
            __esp = __esp + 12;
            __eflags = _t101;
            if(_t101 == 0) {
                _push(_v8 + 32);
                _push( *((intOrPtr*)(_v8 + 24)));
                _t104 =  *(_v8 + 20) & 65535;
                L0041119F(1, 0, 0, 0, "DAMAGE: after %hs block (#%d) at 0x%p.\n",  *((intOrPtr*)(4361564 + _t104 * 4)));
                __esp = __esp + 8;
                __eflags = _t104 - 1;
                if(_t104 == 1) {
                    asm("int3 ");
                }
            }
        }
        _t87 = _v8;
        __eflags =  *((intOrPtr*)(_t87 + 20)) - 3;
        if( *((intOrPtr*)(_t87 + 20)) != 3) {
L41:
            _t88 = _v8;
            __eflags =  *((intOrPtr*)(_t88 + 20)) - 2;
            if( *((intOrPtr*)(_t88 + 20)) == 2) {
                __eflags = _a8 - 1;
                if(_a8 == 1) {
                    _a8 = 2;
                }
            }
            __eflags =  *(_v8 + 20) - _a8;
            if(__eflags != 0) {
                _push("pHead->nBlockUse == nBlockUse");
                _push(0);
                _push(1175);
                _push("dbgheap.c");
                _push(2);
                L0041119F();
                __esp = __esp + 20;
                __eflags = _t88 - 1;
                if(__eflags == 0) {
                    asm("int3 ");
                }
            }
             *4364372 =  *4364372 -  *((intOrPtr*)(_v8 + 16));
            if(__eflags != 0) {
                 *(_v8 + 20) = 0;
                _push( *((intOrPtr*)(_v8 + 16)));
                _push( *4361561 & 255);
                _push(_v8 + 32);
                L00411195(__esp);
                __esp = __esp + 12;
                return;
            } else {
                __eflags =  *_v8;
                if( *_v8 == 0) {
                    _t93 =  *4364356;
                    __eflags = _t93 - _v8;
                    if(_t93 != _v8) {
                        _push("_pLastBlock == pHead");
                        _push(0);
                        _push(1190);
                        _push("dbgheap.c");
                        _push(2);
                        L0041119F();
                        __esp = __esp + 20;
                        __eflags = _t93 - 1;
                        if(_t93 == 1) {
                            asm("int3 ");
                        }
                    }
                     *4364356 =  *(_v8 + 4);
                } else {
                     *( *_v8 + 4) =  *(_v8 + 4);
                }
                _t118 = _v8;
                __eflags =  *(_t118 + 4);
                if( *(_t118 + 4) == 0) {
                    _t95 =  *4364368;
                    __eflags = _t95 - _v8;
                    if(_t95 != _v8) {
                        _push("_pFirstBlock == pHead");
                        _push(0);
                        _push(1200);
                        _push("dbgheap.c");
                        _push(2);
                        L0041119F();
                        __esp = __esp + 20;
                        __eflags = _t95 - 1;
                        if(_t95 == 1) {
                            asm("int3 ");
                        }
                    }
                     *4364368 =  *_v8;
                } else {
                     *( *(_v8 + 4)) =  *_v8;
                }
                _push( *((intOrPtr*)(_v8 + 16)) + 36);
                _push( *4361561 & 255);
                _push(_v8);
                L00411195(__esp);
                __esp = __esp + 12;
                L004113E8( *4361561 & 255, _v8, _v8);
                return;
            }
            return;
        }
        _t123 = _v8;
        __eflags =  *((intOrPtr*)(_t123 + 12)) - -19088708;
        if( *((intOrPtr*)(_t123 + 12)) != -19088708) {
L38:
            _push("pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ");
            _push(0);
            _push(1161);
            _push("dbgheap.c");
            _push(2);
            L0041119F();
            __esp = __esp + 20;
            __eflags = _t87 - 1;
            if(_t87 == 1) {
                asm("int3 ");
            }
L40:
            _push( *((intOrPtr*)(_v8 + 16)) + 36);
            _push( *4361561 & 255);
            _push(_v8);
            L00411195(__esp);
            __esp = __esp + 12;
            L004113E8( *4361561 & 255, _v8, _v8);
            return;
        }
        _t159 = _v8;
        __eflags =  *(_t159 + 24);
        if( *(_t159 + 24) == 0) {
            goto L40;
        }
        goto L38;
    } else {
        _t84 = L00417D50((_a4 & 252) - 4, (_a4 & 252) - 4, _t84, 4);
        __eflags = _t84;
        if(_t84 == 0) {
            goto L15;
        } else {
            L0041119F(1, 0, 0, 0, "The Block at 0x%p was allocated by aligned routines, use _aligned_free()", _a4);
            __eflags = _t84 - 1;
            if(_t84 != 1) {
                return ;
            }
            asm("int3 ");
            return ;
        }
    }
}

L00411424(_unknown_ __eflags)
{
    intOrPtr _v0;
    _unknown_ __eax;
    _unknown_ __ebx;
    _unknown_ __edx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t4;
    _unknown_ _t5;

    __eflags = __eflags;
    if(__eflags == 0) {
        return ;
    }
    _push(_t4);
    _t5 = __esp;
    __esp = __esp;
    _push(_t2);
    _push(__edx);
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    L0041155A(_v0, 0);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    _pop(__edx);
    _pop(__eax);
    __esp = _t5;
    _pop(__ebp);
    return;
}

L0041142E()
{
    signed char* _v8;
    intOrPtr _v12;
    signed char* _v16;
    _unknown_ __ebp;
    signed char* _t27;
    _unknown_ _t32;
    _unknown_ _t42;

    _v12 = 0;
    if( *4370680 == 0) {
        L0041109B();
    }
    if( *4370688 != 0) {
        _v16 =  *4370688;
    } else {
        _v16 = 4346092;
    }
    _v8 = _v16;
    while(( *_v8 & 255) > 32 || ( *_v8 & 255) != 0 && _v12 != 0) {
        if(( *_v8 & 255) == 34) {
            _v12 = 0;
        }
        _t27 = _v8;
        L004113FC( *_t27 & 255);
        if(_t27 != 0 && _v8 != 0) {
            _v8 =  &(_v8[1]);
        }
        _v8 =  &(_v8[1]);
    }
}

L0041143D(_unknown_ __eax, signed int _a4, intOrPtr _a8, signed int _a12, signed int _a16, intOrPtr _a20)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t16;
    _unknown_ _t17;

    _push(_t17);
    while(1) {
        _v8 = L00411384(_a4, _a12, _a16, _a20);
        if(_v8 != 0) {
            break;
        }
        if(_a8 == 0) {
            return _v8;
        }
        if(L004113D9(_a4, _a4) == 0) {
            return 0;
        }
    }
    return _v8;
}

L00411442(_unknown_ __ecx)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __ecx = __ecx;
    _push(__ecx);
    _v8 = 0;
    if( *4363832 != 2) {
        return 3;
    }
    if( *4363844 < 5) {
        return 3;
    }
    return 1;
}

L0041144C()
{
    signed int _v8;
    intOrPtr _v20;
    intOrPtr _v28;
    intOrPtr* _v32;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t6;
    signed int _t7;
    _unknown_ _t8;
    intOrPtr* _t9;

    _push(255);
    _push(4347592);
    _push(4264356);
    __eax =  *fs:0x0];
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp - 12;
    _push(__ebx);
    _push(_t8);
    _push(_t6);
    _v28 = __esp;
    _t9 = 4356136;
    _t7 = _t6 | 255;
    while(1) {
        _v32 = _t9;
        if(_t9 >= 4356652) {
            break;
        }
        _v8 = 0;
        __eax =  *_t9;
        if(__eax != 0) {
             *__eax();
        }
        _v8 = _t7;
        _t9 = _t9 + 4;
    }
     *fs:0x0] = _v20;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L00411456(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, char _a12)
{
    char* _v8;
    intOrPtr _v12;
    intOrPtr* _v16;
    char _v48;
    intOrPtr _v52;
    _unknown_ __ebp;
    _unknown_ _t34;
    char* _t35;
    intOrPtr _t38;
    _unknown_ _t51;

    _t35 =  &_v48;
    _v16 = _t35;
    _v8 =  &_a12;
    if(_a8 == 0) {
        _push("format != NULL");
        _push(0);
        _push(93);
        _push("sprintf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t35 == 1) {
            asm("int3 ");
        }
    }
    if(_a4 == 0) {
        _push("string != NULL");
        _push(0);
        _push(94);
        _push("sprintf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t35 == 1) {
            asm("int3 ");
        }
    }
     *((intOrPtr*)(_v16 + 4)) = 2147483647;
     *((intOrPtr*)(_v16 + 12)) = 66;
     *((intOrPtr*)(_v16 + 8)) = _a4;
     *_v16 = _a4;
    _push(_v8);
    _push(_a8);
    _t38 = _v16;
    _push(_t38);
    L0041134D();
    __esp = __esp + 12;
    _v12 = _t38;
    if(_a4 == 0) {
        return _v12;
    }
     *((intOrPtr*)(_v16 + 4)) =  *((intOrPtr*)(_v16 + 4)) - 1;
    if( *((intOrPtr*)(_v16 + 4)) >= 0) {
         *((char*)( *_v16)) = 0;
        _v52 = 0;
         *_v16 =  *_v16 + 1;
        return _v12;
    }
    _v52 = L004114AB(0, _v16);
    return _v12;
}

L00411492(signed int __eax, _unknown_ __esp, signed int _a4, signed int _a8, unsigned int _a12)
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
L20:
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
L16:
                        _t38 = _t39;
                        _t40 = _t39 >> 2;
                        if(__eflags != 0) {
                            goto L32;
                        }
                        goto L17;
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
                                goto L16;
                            }
                            goto L36;
                        }
                        goto L35;
                    }
                } else {
                    __eflags = _t51 & 3;
                    if(__eflags != 0) {
                        continue;
                    } else {
                        _t38 = _t39;
                        _t41 = _t39 >> 2;
                        if(__eflags != 0) {
                            goto L22;
                        } else {
                            goto L9;
                        }
                    }
                }
                goto L36;
            }
            goto L12;
        } else {
            _t41 = _t39 >> 2;
            if(_t53 != 0) {
                goto L22;
                do {
L22:
                    _t31 =  *_t51 ^ 255 ^ 2130640639 +  *_t51;
                    _t44 =  *_t51;
                    _t51 = _t51 + 4;
                    __eflags = _t31 & -2130640640;
                    if(__eflags == 0) {
                        goto L21;
                    } else {
                        __eflags = _t44 & 4294967295;
                        if(__eflags == 0) {
                             *_t49 = 0;
L31:
                            _t49 = _t49 + 4;
                            _t31 = 0;
                            _t40 = _t41 - 1;
                            if(__eflags != 0) {
L32:
                                _t31 = 0;
                                while(1) {
L33:
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
                                goto L17;
                            }
L35:
                            _pop(__ebx);
                            _pop(__esi);
                            _pop(__edi);
                            return _a4;
                            goto L36;
                        }
                        __eflags = _t44 & 4294967295;
                        if(__eflags == 0) {
                             *_t49 = _t44 & 255;
                            goto L31;
                        }
                        __eflags = _t44 & 16711680;
                        if(__eflags == 0) {
                             *_t49 = _t44 & 65535;
                            goto L31;
                        }
                        __eflags = _t44 & -16777216;
                        if(__eflags != 0) {
                            goto L21;
                        } else {
                             *_t49 = _t44;
                            goto L31;
                        }
                    }
                    goto L36;
L21:
                     *_t49 = _t44;
                    _t49 = _t49 + 4;
                    _t41 = _t41 - 1;
                } while(__eflags != 0);
L9:
                _t38 = _t38 & 3;
                if(__eflags == 0) {
                    goto L12;
                } else {
                    goto L10;
                }
            } else {
                while(1) {
L10:
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
L12:
                        _pop(__ebx);
                        _pop(__esi);
                        _pop(__edi);
                        return _a4;
                    }
                    goto L36;
                }
L18:
                _t38 = _t38 - 1;
                if(__eflags != 0) {
L17:
                     *_t49 = _t31 & 4294967295;
                    _t49 = _t49 + 1;
                    goto L18;
                }
                _pop(__ebx);
                _pop(__esi);
                goto L20;
            }
        }
    }
L36:
}

L00411497(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;

     *4369568 = HeapAlloc( *4370304, 0, 320);
    if( *4369568 == 0) {
        return 0;
    }
     *4369572 = _a4;
     *4369576 =  *4369568;
     *4369560 = 0;
     *4369564 = 0;
     *4369580 = 16;
    return 1;
}

L0041149C(signed int __eflags, signed int _a4, intOrPtr _a8)
{
    void* _v8;
    signed int* _v12;
    signed int* _v16;
    signed int _v20;
    signed int _v24;
    signed int* _v28;
    signed int _v32;
    unsigned int _v36;
    signed int _v40;
    signed int* _v44;
    signed int _v48;
    signed int _v52;
    signed int _v56;
    signed int _v60;
    signed int _v64;
    _unknown_ __ebp;
    _unknown_ _t344;
    signed int* _t349;
    _unknown_ _t355;
    _unknown_ _t358;
    _unknown_ _t362;
    _unknown_ _t364;
    _unknown_ _t367;
    signed int _t386;
    _unknown_ _t389;
    _unknown_ _t394;
    signed int _t406;
    signed int _t410;
    signed int _t437;
    signed int _t439;
    _unknown_ _t450;
    _unknown_ _t461;
    signed int _t489;
    signed int* _t493;
    _unknown_ _t520;
    _unknown_ _t523;
    _unknown_ _t528;
    signed int* _t533;
    _unknown_ _t538;
    _unknown_ _t542;
    void* _t544;
    signed int _t555;
    _unknown_ _t556;
    _unknown_ _t559;
    signed int _t563;
    _unknown_ _t564;
    _unknown_ _t567;
    _unknown_ _t578;
    _unknown_ _t583;
    _unknown_ _t586;
    _unknown_ _t594;
    signed int* _t598;
    _unknown_ _t602;
    _unknown_ _t607;
    _unknown_ _t609;
    _unknown_ _t610;
    _unknown_ _t614;
    _unknown_ _t619;
    _unknown_ _t621;
    _unknown_ _t622;

    __eflags = __eflags;
    _v48 = _a4[4];
    _v36 = _a8 - _a4[3];
    _v24 = _v36 >> 15;
    _v44 = _v48 + _v24 * _v24 + 324;
    _v28 = _a8 - 4;
    _v64 =  *_v28 - 1;
    if(__eflags != 0) {
        return ;
    }
    _v12 = _v28 + _v64;
    _v56 =  *_v12;
    _v32 =  *(_v28 - 4);
    if(__eflags != 0) {
L14:
        _v60 = (_v64 >> 4) - 1;
        __eflags = _v60 - 63;
        if(__eflags > 0) {
            _v60 = 63;
        }
        if(__eflags == 0) {
            _v16 = _v28 - _v32;
            _v52 = (_v32 >> 4) - 1;
            __eflags = _v52 - 63;
            if(_v52 > 63) {
                _v52 = 63;
            }
            _v64 = _v64 + _v32;
            _v60 = (_v64 >> 4) - 1;
            __eflags = _v60 - 63;
            if(_v60 > 63) {
                _v60 = 63;
            }
            __eflags = _v52 - _v60;
            if(__eflags != 0) {
                __eflags = _v16[1] - _v16[2];
                if(__eflags == 0) {
                    __eflags = _v52 - 32;
                    if(_v52 >= 32) {
                        _t386 = _v24;
                         *(_v48 + 196 + _t386 * 4) =  !(-2147483648 >> (_v52 - 32 & 4294967295)) &  *(_v48 + 196 + _v24 * 4);
                         *(_v48 + _v52 + 4) = _t386 & 4294967295;
                        __eflags =  *(_v48 + _v52 + 4);
                        if(__eflags == 0) {
                            _a4[1] =  !(-2147483648 >> (_v52 - 32 & 4294967295)) & _a4[1];
                        }
                    } else {
                        _t489 = _v24;
                         *(_v48 + 68 + _t489 * 4) =  !(-2147483648 >> (_v52 & 4294967295)) &  *(_v48 + 68 + _v24 * 4);
                         *(_v48 + _v52 + 4) = _t489 & 4294967295;
                        __eflags =  *(_v48 + _v52 + 4);
                        if(__eflags == 0) {
                             *_a4 =  !(-2147483648 >> (_v52 & 4294967295)) &  *_a4;
                        }
                    }
                }
                 *(_v16[2] + 4) = _v16[1];
                 *(_v16[1] + 8) = _v16[2];
            }
            _v28 = _v16;
        }
        if(__eflags != 0) {
L33:
            _v40 = _v44 + _v60 * 8;
            _v28[1] =  *((intOrPtr*)(_v40 + 4));
            _v28[2] = _v40;
             *(_v40 + 4) = _v28;
             *(_v28[1] + 8) = _v28;
            _t533 = _v28;
            _t349 = _v28;
            __eflags = _t533[1] - _t349[2];
            if(_t533[1] == _t349[2]) {
                __eflags = _v60 - 32;
                if(_v60 >= 32) {
                    _t555 = _v48 + _v60;
                     *(_v48 + _v60 + 4) = _t555 & 4294967295;
                    __eflags =  *(_t555 + 4);
                    if( *(_t555 + 4) == 0) {
                        _a4[1] = -2147483648 >> (_v60 - 32 & 4294967295) | _a4[1];
                    }
                     *(_v48 + 196 + _v24 * 4) = -2147483648 >> (_v60 - 32 & 4294967295) |  *(_v48 + 196 + _v24 * 4);
                } else {
                    _t563 = _v48 + _v60;
                     *(_v48 + _v60 + 4) = _t563 & 4294967295;
                    __eflags =  *(_t563 + 4);
                    if( *(_t563 + 4) == 0) {
                         *_a4 = -2147483648 >> (_v60 & 4294967295) |  *_a4;
                    }
                     *(_v48 + 68 + _v24 * 4) = -2147483648 >> (_v60 & 4294967295) |  *(_v48 + 68 + _v24 * 4);
                }
            }
L41:
             *_v28 = _v64;
             *(_v28 + _v64 - 4) = _v64;
             *_v44 =  *_v44 - 1;
            __eflags =  *_v44;
            if( *_v44 != 0) {
                return ;
            }
            __eflags =  *4369560;
            if( *4369560 != 0) {
                _v8 =  *( *4369560 + 12) + ( *4369584 << 15);
                VirtualFree(_v8, 32768, 16384);
                 *( *4369560 + 8) = -2147483648 >> ( *4369584 & 4294967295) |  *( *4369560 + 8);
                _t437 =  *4369584;
                 *( *( *4369560 + 16) + 196 + _t437 * 4) = 0;
                ( *( *4369560 + 16))[0x10] = _t437 & 4294967295;
                _t544 =  *( *4369560 + 16);
                __eflags = _t544[0x10];
                if(_t544[0x10] == 0) {
                     *( *4369560 + 4) =  *( *4369560 + 4) & 254;
                }
                _t439 =  *4369560;
                __eflags =  *((intOrPtr*)(_t439 + 8)) - 255;
                if( *((intOrPtr*)(_t439 + 8)) == 255) {
                    VirtualFree( *( *4369560 + 12), 0, 32768);
                    HeapFree( *4370304, 0,  *( *4369560 + 16));
                    L00411343( *4369560,  *4369560 + 20,  *4369564 *  *4369564 +  *4369568 -  *4369560 + 20);
                     *4369564 =  *4369564 - 1;
                    __eflags = _a4 -  *4369560;
                    if(_a4 >  *4369560) {
                        _a4 = _a4 - 20;
                    }
                     *4369576 =  *4369568;
                }
            }
             *4369560 = _a4;
             *4369584 = _v24;
            return;
        }
        __eflags = _v52 - _v60;
        if(_v52 == _v60) {
            goto L41;
        }
        goto L33;
    } else {
        _v20 = (_v56 >> 4) - 1;
        __eflags = _v20 - 63;
        if(_v20 > 63) {
            _v20 = 63;
        }
        _t493 = _v12;
        _t598 = _v12;
        __eflags = _t493[1] - _t598[2];
        if(_t493[1] == _t598[2]) {
            __eflags = _v20 - 32;
            if(_v20 >= 32) {
                _t406 = _v24;
                 *(_v48 + 196 + _t406 * 4) =  !(-2147483648 >> (_v20 - 32 & 4294967295)) &  *(_v48 + 196 + _v24 * 4);
                 *(_v48 + _v20 + 4) = _t406 & 4294967295;
                _t609 = _v48 + _v20;
                __eflags =  *(_t609 + 4);
                if( *(_t609 + 4) == 0) {
                    _a4[1] =  !(-2147483648 >> (_v20 - 32 & 4294967295)) & _a4[1];
                }
            } else {
                _t410 = _v24;
                 *(_v48 + 68 + _t410 * 4) =  !(-2147483648 >> (_v20 & 4294967295)) &  *(_v48 + 68 + _v24 * 4);
                 *(_v48 + _v20 + 4) = _t410 & 4294967295;
                _t621 = _v48 + _v20;
                __eflags =  *(_t621 + 4);
                if( *(_t621 + 4) == 0) {
                     *_a4 =  !(-2147483648 >> (_v20 & 4294967295)) &  *_a4;
                }
            }
        }
         *(_v12[2] + 4) = _v12[1];
         *(_v12[1] + 8) = _v12[2];
        _v64 = _v64 + _v56;
        goto L14;
    }
}

L004114A6(struct HINSTANCE__* _a4, int _a16)
{
    struct tagMSG _v36;
    struct HACCEL__* _v48;
    char _v244;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t20;
    _unknown_ _t22;
    int _t24;
    struct HACCEL__* _t26;
    int _t28;
    intOrPtr _t29;
    int _t31;
    _unknown_ _t33;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    struct tagMSG _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t50;

    _push(__ebx);
    _push(_t46);
    _push(_t43);
    _push(60 << 2);
    _push(-858993460);
    _push( &_v244);
    memset();
    __esp = __esp + 12;
    _push(4345888);
    _push(4345884);
    _push(21);
    L004111F9();
    __esp = __esp + 12;
    LoadStringA(_a4, 103, 4363624, 100);
    L00411424(__esp - __esp);
    LoadStringA(_a4, 109, 4363520, 100);
    L00411424(__esp - __esp);
    L0041159B(_a4);
    _t24 = _a16;
    L0041133E(_a4, _t24);
    if(_t24 != 0) {
        _t26 = LoadAcceleratorsA(_a4, 109);
        __eflags = __esp - __esp;
        L00411424(__esp - __esp);
        _v48 = _t26;
        while(1) {
            _t28 = GetMessageA( &_v36, 0, 0, 0);
            __eflags = __esp - __esp;
            L00411424(__esp - __esp);
            __eflags = _t28;
            if(_t28 == 0) {
                break;
            }
            _t50 = __esp;
            _push( &_v36);
            _push(_v48);
            _t41 = _v36;
            _push(_t41);
            _t31 = TranslateAcceleratorA();
            __eflags = _t50 - __esp;
            L00411424(_t50 - __esp);
            __eflags = _t31;
            if(_t31 == 0) {
                TranslateMessage( &_v36);
                __eflags = __esp - __esp;
                L00411424(__esp - __esp);
                DispatchMessageA( &_v36);
                __eflags = __esp - __esp;
                L00411424(__esp - __esp);
            }
        }
        _t29 = _v36.wParam;
L9:
        _push(_t41);
        _push(_t29);
        L004111D1(__ebp, 4267252);
        _pop(__eax);
        _pop(__edx);
        _pop(__edi);
        _pop(__esi);
        _pop(__ebx);
        L00411424(__ebp - __esp);
        return;
    }
    _t29 = 0;
    goto L9;
}

L004114AB(signed int _a4, signed int _a8)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    _unknown_ __ebp;
    _unknown_ _t102;
    signed int _t105;
    _unknown_ _t107;
    _unknown_ _t109;
    signed int _t113;
    signed int _t117;
    signed int _t119;
    signed int _t124;
    _unknown_ _t126;
    signed int _t129;
    _unknown_ _t133;
    signed int _t134;
    _unknown_ _t139;
    _unknown_ _t142;
    signed int _t147;
    _unknown_ _t148;
    _unknown_ _t151;
    _unknown_ _t156;
    _unknown_ _t167;
    _unknown_ _t169;
    _unknown_ _t176;
    _unknown_ _t181;
    signed int _t186;
    _unknown_ _t190;
    _unknown_ _t197;

    if(_a8 == 0) {
        _push("str != NULL");
        _push(0);
        _push(102);
        _push("_flsbuf.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        _t197 = _t102 - 1;
        if(_t197 == 0) {
            asm("int3 ");
        }
    }
    _v12 = _a8;
    _v20 =  *(_v12 + 16);
    if(_t197 == 0 || _t197 != 0) {
        _t105 =  *(_v12 + 12) | 32;
         *(_v12 + 12) = _t105;
        return _t105 | 255;
    }
    if(__eflags == 0) {
L11:
         *(_v12 + 12) =  *(_v12 + 12) | 2;
         *(_v12 + 12) =  *(_v12 + 12) & 239;
         *(_v12 + 4) = 0;
        _v8 = 0;
        _v16 = _v8;
        _t147 =  *(_v12 + 12) & 268;
        if(__eflags != 0) {
L16:
            if(__eflags == 0) {
                _v8 = 1;
                _t113 = _v8;
                L00411154(_v20,  &_a4, _t113);
                _v16 = _t113;
            } else {
                _t119 = _v12;
                if(__eflags < 0) {
                    _push("("inconsistent IOB fields", stream->_ptr - stream->_base >= 0)");
                    _push(0);
                    _push(157);
                    _push("_flsbuf.c");
                    _push(2);
                    L0041119F();
                    __esp = __esp + 20;
                    __eflags = _t119 - 1;
                    if(_t119 == 1) {
                        asm("int3 ");
                    }
                }
                _v8 =  *_v12 -  *(_v12 + 8);
                 *_v12 =  &(( *(_v12 + 8))[0]);
                _t186 =  *((intOrPtr*)(_v12 + 24)) - 1;
                 *(_v12 + 4) = _t186;
                __eflags = _v8;
                if(_v8 <= 0) {
                    __eflags = _v20 - 255;
                    if(__eflags == 0) {
                        _v24 = 4361268;
                    } else {
                        _t186 =  *((intOrPtr*)(4370400 + (_v20 >> 5) * 4)) + (_v20 & 31) * 8;
                        _v24 = _t186;
                    }
                    _t124 = _v24;
                    if(__eflags != 0) {
                        _push(2);
                        _push(0);
                        _t186 = _v20;
                        _push(_t186);
                        L0041116D(_t124);
                        __esp = __esp + 12;
                    }
                } else {
                    _push(_v8);
                    _t186 = _v12;
                    _t129 =  *(_t186 + 8);
                    _push(_t129);
                    _push(_v20);
                    L00411154();
                    __esp = __esp + 12;
                    _v16 = _t129;
                }
                 *( *(_v12 + 8)) = _t186 & 4294967295;
            }
            __eflags = _v16 - _v8;
            if(_v16 == _v8) {
                return _a4 & 255;
            }
            _t117 = _v12;
             *(_t117 + 12) =  *(_v12 + 12) | 32;
            return _t117 | 255;
        }
        goto L12;
    }
     *(_v12 + 4) = 0;
    if(__eflags == 0) {
        _t134 = _v12;
         *(_t134 + 12) =  *(_v12 + 12) | 32;
        return _t134 | 255;
    }
     *_v12 =  *(_v12 + 8);
     *(_v12 + 12) =  *(_v12 + 12) & 254;
    goto L11;
L12:
    __eflags = _v12 - 4362016;
    if(_v12 == 4362016) {
L14:
        __eflags = L004114BA(_v20);
        if(__eflags != 0) {
            goto L16;
        }
        goto L15;
    }
    __eflags = _v12 - 4362048;
    if(_v12 != 4362048) {
        goto L15;
    }
    goto L14;
L15:
    L00411415(_v12, _t147, _v12);
    goto L16;
}

L004114B0(_unknown_ __eax, intOrPtr* _a4)
{
    signed int _v8;
    _Unknown_base(*)()* _v12;
    _unknown_ __ebp;
    _unknown_ _t54;
    signed int _t55;
    signed int _t60;
    intOrPtr _t61;
    signed int _t65;
    _unknown_ _t71;
    _unknown_ _t88;
    _unknown_ _t113;
    _unknown_ _t114;

    _t54 = __eax;
    _v12 = 0;
    L0041119F(0, 0, 0, 0, "%s", "Dumping objects ->\n");
    if(_t54 == 1) {
        asm("int3 ");
    }
    if(_a4 != 0) {
        _v12 =  *_a4;
    }
    _t55 =  *4364368;
    _v8 = _t55;
    while(_v8 != 0) {
        _t55 = _v8;
        if(_t55 == _v12) {
            L0041119F(0, 0, 0, 0, "%s", "Object dump complete.\n");
            if(_t55 != 1) {
                return ;
            }
            asm("int3 ");
            return;
        }
        _t113 = ( *(_v8 + 20) & 65535) - 3;
        if(_t113 == 0) {
L13:
L38:
            _v8 =  *_v8;
            continue;
        }
        _t55 = _v8;
        if(_t113 == 0) {
            goto L13;
        }
        _t55 =  *(_v8 + 20) & 65535;
        _t114 = _t55 - 2;
        if(_t114 != 0 || _t114 != 0) {
            goto L14;
        }
        goto L13;
L14:
        if( *((intOrPtr*)(_v8 + 8)) != 0) {
            if(L004112F8( *((intOrPtr*)(_v8 + 8)),  *((intOrPtr*)(_v8 + 8)), 1, 0) != 0) {
                _t55 =  *(_v8 + 12);
                _push(_t55);
                L0041119F(0, 0, 0, 0, "%hs(%d) : ",  *((intOrPtr*)(_v8 + 8)));
                __esp = __esp + 4;
                if(_t55 == 1) {
                    asm("int3 ");
                }
            } else {
                _t55 =  *(_v8 + 12);
                L0041119F(0, 0, 0, 0, "#File Error#(%d) : ", _t55);
                if(_t55 == 1) {
                    asm("int3 ");
                }
            }
        }
        L0041119F(0, 0, 0, 0, "{%ld} ",  *((intOrPtr*)(_v8 + 24)));
        if(_t55 == 1) {
            asm("int3 ");
        }
        if(( *(_v8 + 20) & 65535) != 4) {
            if( *(_v8 + 20) != 1) {
                if(( *(_v8 + 20) & 65535) == 2) {
                    _push( *((intOrPtr*)(_v8 + 16)));
                    _t60 =  *(_v8 + 20) >> 16 & 65535;
                    _push(_t60);
                    L0041119F(0, 0, 0, 0, "crt block at 0x%p, subtype %x, %Iu bytes long.\n", _v8 + 32);
                    __esp = __esp + 8;
                    if(_t60 == 1) {
                        asm("int3 ");
                    }
                    _t55 = _v8;
                    L00418B40(_t55);
                }
            } else {
                _t61 =  *((intOrPtr*)(_v8 + 16));
                _push(_t61);
                L0041119F(0, 0, 0, 0, "normal block at 0x%p, %Iu bytes long.\n", _v8 + 32);
                __esp = __esp + 4;
                if(_t61 == 1) {
                    asm("int3 ");
                }
                _t55 = _v8;
                L00418B40(_t55);
            }
        } else {
            _push( *((intOrPtr*)(_v8 + 16)));
            _t65 =  *(_v8 + 20) >> 16 & 65535;
            _push(_t65);
            L0041119F(0, 0, 0, 0, "client block at 0x%p, subtype %x, %Iu bytes long.\n", _v8 + 32);
            __esp = __esp + 8;
            if(_t65 == 1) {
                asm("int3 ");
            }
            if( *4370272 == 0) {
                _t55 = _v8;
                L00418B40(_t55);
            } else {
                _t55 = _v8;
                _push( *((intOrPtr*)(_t55 + 16)));
                _push(_v8 + 32);
                 *4370272();
                __esp = __esp + 8;
            }
        }
        goto L38;
    }
}

L004114BA(signed int _a4)
{
    _unknown_ __ebp;
    _unknown_ _t13;

    if(_a4 <  *4370324) {
        return  *( *((intOrPtr*)(4370400 + (_a4 >> 5) * 4)) + 4 + (_a4 & 31) * 8) & 64;
    }
    return 0;
}

L004114BF()
{
    _unknown_ __ebp;

    if( *4363780 != 1) {
        if( *4363780 != 0) {
            return ;
        }
        if( *4361028 != 1) {
            return ;
        }
    }
    L00411230(252);
    if( *4364248 != 0) {
         *4364248();
    }
    L00411230(255);
    return;
}

L004114E2(signed int _a4)
{
    _unknown_ __ebp;

    if( *4363780 == 1) {
        L004114BF();
    }
    L00411230(_a4);
    _push(255);
     *4361024();
    __esp = __esp + 4;
    return;
}

L004114EC(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16, intOrPtr _a20)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t13;

    _push(_t13);
    _v8 = L00416EC0(_a8, _a4, _a8, _a12, _a16, _a20, 1);
    return _v8;
}

L004114F6(_unknown_ __eax, intOrPtr _a4, struct _EXCEPTION_POINTERS* _a8)
{
    intOrPtr _v8;
    struct _EXCEPTION_POINTERS* _v12;
    signed int _v16;
    intOrPtr _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t42;
    _unknown_ _t45;
    _unknown_ _t50;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;

    _v8 = L00413700(_t58, _a4);
    if(_v8 == 0 ||  *((intOrPtr*)(_v8 + 8)) == 0) {
        UnhandledExceptionFilter(_a8);
        return;
    }
    if( *((intOrPtr*)(_v8 + 8)) == 5) {
         *((intOrPtr*)(_v8 + 8)) = 0;
        return;
    }
    if( *((intOrPtr*)(_v8 + 8)) == 1) {
        return ;
    }
    _v20 =  *((intOrPtr*)(_v8 + 8));
    _v12 =  *4363920;
     *4363920 = _a8;
    if( *((intOrPtr*)(_v8 + 4)) != 8) {
         *((intOrPtr*)(_v8 + 8)) = 0;
        _push( *((intOrPtr*)(_v8 + 4)));
        _v20();
        __esp = __esp + 4;
    } else {
        _v16 =  *4361224;
        while(_v16 <  *4361224 +  *4361228) {
             *((intOrPtr*)(_v16 * _v16 + 4361112)) = 0;
            _v16 = _v16 + 1;
        }
    }
     *4363920 = _v12;
    return;
}

L004114FB(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16, intOrPtr _a20)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t13;

    _push(_t13);
    _v8 = L00416EC0(_a8, _a4, _a8, _a12, _a16, _a20, 0);
    return _v8;
}

L0041151E(signed int _a4)
{
    long _v8;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t25;
    signed int _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    signed int _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    int _t35;
    _unknown_ _t37;
    _unknown_ _t41;
    _unknown_ _t45;

    _push(_t37);
    _push(__esi);
    _t25 = _a4;
    __eflags = _t25 -  *4370324;
    if(__eflags >= 0) {
L3:
         *4363820 = 9;
         *4363824 = 0;
        _t26 = _t25 | 255;
    } else {
        _t25 =  *(4370400 + (_a4 >> 5) * 4);
        if(__eflags != 0) {
            _t27 = L00411375(_a4);
            __eflags = _t27 - 255;
            if(_t27 == 255) {
L9:
                _v8 = 0;
            } else {
                __eflags = _a4 - 1;
                if(_a4 == 1) {
L7:
                    _t31 = L00411375(1);
                    __esi = _t31;
                    _t32 = L00411375(2);
                    __eflags = _t31 - _t32;
                    if(_t31 == _t32) {
                        goto L9;
                    } else {
                        goto L8;
                    }
                } else {
                    __eflags = _a4 - 2;
                    if(_a4 != 2) {
L8:
                        _t35 = CloseHandle(L00411375(_a4));
                        __eflags = _t35;
                        if(_t35 == 0) {
                            _v8 = GetLastError();
                        } else {
                            goto L9;
                        }
                    } else {
                        goto L7;
                    }
                }
            }
            L0041102D(_a4, _a4);
            _t30 = _a4 & 31;
            _t43 =  *(4370400 + (_a4 >> 5) * 4);
             *( *(4370400 + (_a4 >> 5) * 4) + 4 + _t30 * 8) = 0;
            __eflags = _v8;
            if(_v8 == 0) {
                _t26 = 0;
            } else {
                L00411113(_t43, _v8);
                _t26 = _t30 | 255;
            }
            goto L14;
        }
        goto L3;
    }
L14:
    _pop(__esi);
    return _t26;
}

L00411528(_unknown_ __eax, intOrPtr _a4)
{
    signed int _v8;
    signed int* _v12;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    unsigned int _v28;
    signed int* _v32;
    signed int _v36;
    signed int* _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    signed int _v56;
    signed int _v60;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t318;
    signed int _t321;
    _unknown_ _t324;
    _unknown_ _t325;
    signed int* _t341;
    signed int* _t349;
    signed int _t359;
    signed int _t363;
    _unknown_ _t369;
    _unknown_ _t370;
    _unknown_ _t375;
    _unknown_ _t379;
    _unknown_ _t382;
    _unknown_ _t385;
    _unknown_ _t401;
    _unknown_ _t427;
    _unknown_ _t438;
    _unknown_ _t466;
    _unknown_ _t467;
    _unknown_ _t475;
    signed int _t479;
    _unknown_ _t484;
    _unknown_ _t485;
    signed int* _t500;
    signed int* _t508;
    signed int _t510;
    _unknown_ _t511;
    _unknown_ _t514;
    signed int _t518;
    _unknown_ _t519;
    _unknown_ _t522;
    _unknown_ _t525;
    _unknown_ _t530;
    _unknown_ _t532;
    _unknown_ _t533;
    _unknown_ _t537;
    _unknown_ _t542;
    _unknown_ _t544;
    _unknown_ _t545;
    _unknown_ _t554;
    _unknown_ _t557;
    _unknown_ _t564;
    _unknown_ _t575;
    _unknown_ _t577;

    _t321 =  *4369568 +  *4369564 *  *4369564;
    _v16 = _t321;
    _v60 = _a4 + 23 & 240;
    _t479 = (_v60 >> 4) - 1;
    _v56 = _t479;
    if(_v56 >= 32) {
        _v28 = 0;
        _v52 = (_t479 | 255) >> (_v56 - 32 & 4294967295);
    } else {
        _v28 = (_t321 | 255) >> (_v56 & 4294967295);
        _v52 = -1;
    }
    _v32 =  *4369576;
    while(1) {
        _t575 = _v32 - _v16;
        if(_t575 >= 0 || _t575 != 0) {
            break;
        } else {
            _v32 =  &(_v32[5]);
            continue;
        }
    }
    if(_v32 != _v16) {
L31:
         *4369576 = _v32;
        _v44 = _v32[4];
        _v24 =  *_v44;
        __eflags = _v24 - 255;
        if(__eflags == 0 || __eflags == 0) {
            _v24 = 0;
L34:
            while(__eflags == 0) {
                goto L35;
            }
        } else {
            _v40 = _v44 + _v24 * _v24 + 324;
            _v56 = 0;
            _v8 = _v28 &  *(_v44 + 68 + _v24 * 4);
            if(__eflags == 0) {
                _v56 = 32;
                _v8 = _v52 &  *(_v44 + 196 + _v24 * 4);
            }
            while(1) {
                __eflags = _v8;
                if(_v8 < 0) {
                    break;
                }
                _v8 = _v8 << 1;
                _v56 = _v56 + 1;
            }
            _v12 =  *(_v40 + 4 + _v56 * 8);
            _v48 =  *_v12 - _v60;
            _v20 = (_v48 >> 4) - 1;
            __eflags = _v20 - 63;
            if(_v20 > 63) {
                _v20 = 63;
            }
            __eflags = _v20 - _v56;
            if(_v20 != _v56) {
                _t500 = _v12;
                _t341 = _v12;
                __eflags = _t500[1] - _t341[2];
                if(_t500[1] == _t341[2]) {
                    __eflags = _v56 - 32;
                    if(_v56 >= 32) {
                        _t359 = _v24;
                         *(_v44 + 196 + _t359 * 4) =  !(-2147483648 >> (_v56 - 32 & 4294967295)) &  *(_v44 + 196 + _v24 * 4);
                         *(_v44 + _v56 + 4) = _t359 & 4294967295;
                        _t532 = _v44 + _v56;
                        __eflags =  *(_t532 + 4);
                        if( *(_t532 + 4) == 0) {
                            _v32[1] =  !(-2147483648 >> (_v56 - 32 & 4294967295)) & _v32[1];
                        }
                    } else {
                        _t363 = _v24;
                         *(_v44 + 68 + _t363 * 4) =  !(-2147483648 >> (_v56 & 4294967295)) &  *(_v44 + 68 + _v24 * 4);
                         *(_v44 + _v56 + 4) = _t363 & 4294967295;
                        _t544 = _v44 + _v56;
                        __eflags =  *(_t544 + 4);
                        if( *(_t544 + 4) == 0) {
                             *_v32 =  !(-2147483648 >> (_v56 & 4294967295)) &  *_v32;
                        }
                    }
                }
                 *(_v12[2] + 4) = _v12[1];
                 *(_v12[1] + 8) = _v12[2];
                __eflags = _v48;
                if(_v48 != 0) {
                    _v36 = _v40 + _v20 * 8;
                    _v12[1] =  *((intOrPtr*)(_v36 + 4));
                    _v12[2] = _v36;
                     *(_v36 + 4) = _v12;
                     *(_v12[1] + 8) = _v12;
                    _t508 = _v12;
                    _t349 = _v12;
                    __eflags = _t508[1] - _t349[2];
                    if(_t508[1] == _t349[2]) {
                        __eflags = _v20 - 32;
                        if(_v20 >= 32) {
                            _t510 = _v44 + _v20;
                             *(_v44 + _v20 + 4) = _t510 & 4294967295;
                            __eflags =  *(_t510 + 4);
                            if( *(_t510 + 4) == 0) {
                                _v32[1] = -2147483648 >> (_v20 - 32 & 4294967295) | _v32[1];
                            }
                             *(_v44 + 196 + _v24 * 4) = -2147483648 >> (_v20 - 32 & 4294967295) |  *(_v44 + 196 + _v24 * 4);
                        } else {
                            _t518 = _v44 + _v20;
                             *(_v44 + _v20 + 4) = _t518 & 4294967295;
                            __eflags =  *(_t518 + 4);
                            if( *(_t518 + 4) == 0) {
                                 *_v32 = -2147483648 >> (_v20 & 4294967295) |  *_v32;
                            }
                             *(_v44 + 68 + _v24 * 4) = -2147483648 >> (_v20 & 4294967295) |  *(_v44 + 68 + _v24 * 4);
                        }
                    }
                }
            }
            __eflags = _v48;
            if(_v48 != 0) {
                 *_v12 = _v48;
                 *(_v12 + _v48 - 4) = _v48;
            }
            _v12 = _v12 + _v48;
             *_v12 = _v60 + 1;
             *((intOrPtr*)(_v12 + _v60 - 4)) = _v60 + 1;
             *_v40 =  *_v40 + 1;
            __eflags =  *_v40;
            if( *_v40 == 0) {
                __eflags = _v32 -  *4369560;
                if(_v32 ==  *4369560) {
                    __eflags = _v24 -  *4369584;
                    if(_v24 ==  *4369584) {
                         *4369560 = 0;
                    }
                }
            }
             *_v44 = _v24;
            return  &(_v12[1]);
        }
L35:
        _v24 = _v24 + 1;
        goto L34;
    } else {
        _v32 =  *4369568;
        while(1) {
            _t577 = _v32 -  *4369576;
            if(_t577 >= 0 || _t577 != 0) {
                break;
            } else {
                _v32 =  &(_v32[5]);
                continue;
            }
        }
        if(_v32 !=  *4369576) {
            goto L31;
        }
        while(_v32 < _v16 && _v32[2] == 0) {
        }
        goto L32;
    }
}

L0041152D(intOrPtr* _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr* _v16;
    _unknown_ __ebp;
    _unknown_ _t40;
    intOrPtr _t43;
    _unknown_ _t49;
    _unknown_ _t55;
    _unknown_ _t66;
    _unknown_ _t68;
    _unknown_ _t70;

    _v8 = 0;
    _v16 = _a4;
    _t68 = ( *(_v16 + 12) & 3) - 2;
    if(_t68 == 0 && _t68 != 0) {
        _v12 =  *_v16 -  *((intOrPtr*)(_v16 + 8));
        if(_v12 > 0) {
            _push(_v12);
            _push( *((intOrPtr*)(_v16 + 8)));
            _t43 =  *((intOrPtr*)(_v16 + 16));
            _push(_t43);
            L00411154();
            __esp = __esp + 12;
            _t70 = _t43 - _v12;
            if(_t70 != 0) {
                 *(_v16 + 12) =  *(_v16 + 12) | 32;
                _v8 = -1;
            } else {
                if(_t70 != 0) {
                     *(_v16 + 12) =  *(_v16 + 12) & 253;
                }
            }
        }
    }
     *_v16 =  *((intOrPtr*)(_v16 + 8));
     *((intOrPtr*)(_v16 + 4)) = 0;
    return _v8;
}

L00411550(_unknown_ __eax, signed int _a4)
{
    _unknown_ __ebp;
    _unknown_ _t7;
    signed int _t9;
    _unknown_ _t10;
    signed int _t12;
    _unknown_ _t16;
    _unknown_ _t19;

    _t7 = __eax;
    __eflags = _a4;
    if(_a4 == 0) {
        return L00422AA0(_t7, 0);
    }
    _t9 = L0041152D(_a4);
    __eflags = _t9;
    if(__eflags != 0) {
        return _t9 | 255;
    }
    if(__eflags == 0) {
        return 0;
    }
    _t12 = L004112EE(_a4,  *((intOrPtr*)(_a4 + 16)));
    asm("sbb eax, eax");
    return  ~_t12;
}

L00411555(_unknown_ __esp, _unknown_ __eflags, signed int _a4, unsigned int _a8, signed int _a12, unsigned int _a16)
{
    _unknown_ __ebx;
    signed int __esi;
    unsigned int _t34;
    signed int _t35;
    signed int _t36;
    signed int _t38;
    signed int _t39;
    _unknown_ _t41;
    signed int _t45;
    unsigned int _t47;
    unsigned int _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;

    __eflags = __eflags;
    __esp = __esp;
    _t34 = _a16;
    if(__eflags == 0) {
        return _a4 / _a12;
    }
    _t47 = _t34;
    _t45 = _a12;
    _t51 = _a8;
    _t35 = _a4;
    while(1) {
L4:
        asm("rcr ebx, 1");
        _t51 = _t51 >> 1;
        asm("rcr eax, 1");
        _t47 = _t47 >> 1;
        if(__eflags == 0) {
            break;
        }
    }
    _t36 = _t35 / _t45;
    __esi = _t36;
    _t38 = _a12;
    _t39 = _t38 * __esi;
    _t55 = (_t38 * __esi >> 32) + _t36 * _a16;
    if(__eflags >= 0) {
        __eflags = _t55 - _a8;
        if(__eflags <= 0) {
            if(__eflags < 0) {
                return __esi;
            }
            __eflags = _t39 - _a4;
            if(_t39 <= _a4) {
                return __esi;
            }
        }
    }
    __esi = __esi - 1;
    return __esi;
}

L0041155A(intOrPtr _a4, signed int _a8)
{
    _unknown_ __ebp;
    signed int _t8;
    _unknown_ _t9;
    _unknown_ _t12;
    intOrPtr _t13;
    intOrPtr _t15;

    _t8 = _a8;
    if(_t8 < 4 && _t8 >= 0) {
        _t13 =  *((intOrPtr*)(4361056 + _t8 * 4));
        _t15 =  *((intOrPtr*)(4361072 + _t8 * 4));
        if(_t13 == 255) {
            return ;
        }
        L00412930(_a4, _t13, _t8, _t15);
        return;
    }
    L00412930(_a4, 1, 4,  *4361088);
    return;
    goto L7;
}

L00411564(_unknown_ __eax, signed int _a4, signed int _a8, intOrPtr _a12, intOrPtr _a16, intOrPtr _a20)
{
    char* _v8;
    char* _v12;
    intOrPtr _v16;
    _unknown_ __ebp;
    _unknown_ _t21;

    _a8 = _a8 * _a4;
    _v8 = L00411064(_a12, _a8, _a12, _a16, _a20);
    if(_v8 == 0) {
        return _v8;
    }
    _v12 = _v8;
    _v16 = _v12 + _a8;
    while(_v12 < _v16) {
         *_v12 = 0;
        _v12 = _v12 + 1;
    }
}

L00411578(intOrPtr _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    char _v14;
    char _v20;
    _unknown_ __ebp;
    _unknown_ _t14;
    _unknown_ _t16;

    _v12 =  *4361904;
    _v14 = 0;
    _push(6);
    _push( &_v20);
    _push(4100);
    _push(_a4);
    if(GetLocaleInfoA() != 0) {
        _v8 = L0041157D(_t12,  &_v20);
    } else {
        _v8 = -1;
    }
    L00411087();
    return;
}

L0041157D(_unknown_ __eax, signed char* _a4)
{
    _unknown_ _v8;
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ __ebp;
    _unknown_ _t35;

    while(L00411118(_a4,  *_a4 & 255) != 0) {
        _a4 =  &(_a4[1]);
    }
}

L00411587(intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    intOrPtr _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    _push(__ecx);
    if( *4370684 != 0) {
        _t5 = _a4;
        _push(_t5);
         *4370684();
        __esp = __esp + 4;
    }
    L00413460(__ecx, 4358924, 4359456);
    _v8 = _t5;
    if(_v8 != 0) {
        return ;
    }
    L00411181(_t5, 4264141);
    L00413430(4358144, 4358664);
    return;
}

L0041158C(intOrPtr _a4)
{
    _unknown_ __ebp;

    L004132B0(_a4, 0, 0);
    return;
}

L00411596()
{
    signed int _v8;
    intOrPtr _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ __ebp;
    signed int _t34;
    _unknown_ _t36;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t45;
    _unknown_ _t47;
    _unknown_ _t52;
    _unknown_ _t54;

    if( *4370680 == 0) {
        L0041109B();
    }
    _v12 = 0;
    _t34 =  *4363772;
    _v8 = _t34;
    if(_v8 == 0) {
        return _t34 | 255;
    }
    while( *_v8 != 0) {
        if( *_v8 != 61) {
            _v12 = _v12 + 1;
        }
        _push(_v8);
        _t52 = L00411235(_v8, __esp);
        __esp = __esp + 4;
        _v8 = _v8 + _t52 + 1;
    }
}

L0041159B(struct HINSTANCE__* _a4)
{
    struct _WNDCLASSEXA _v56;
    char _v252;
    _unknown_ __ebp;
    _unknown_ _t19;
    struct HICON__* _t22;
    struct HICON__* _t23;
    struct HICON__* _t25;
    short _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t35;
    _unknown_ _t36;

    _push(__ebx);
    _push(_t36);
    _push(_t33);
    _push(62 << 2);
    _push(-858993460);
    _push( &_v252);
    memset();
    __esp = __esp + 12;
    _v56 = 48;
    _v56.style = 3;
    _v56.lpfnWndProc = 4265031;
    _v56.cbClsExtra = 0;
    _v56.cbWndExtra = 0;
    _v56.hInstance = _a4;
    _t22 = LoadIconA(_a4, 107);
    L00411424(__esp - __esp);
    _v56.hIcon = _t22;
    _t23 = LoadCursorA(0, 32512);
    L00411424(__esp - __esp);
    _v56.hCursor = _t23;
    _v56.hbrBackground = 6;
    _v56.lpszMenuName = 109;
    _v56.lpszClassName = 4363520;
    _t25 = LoadIconA(_v56.hInstance, 108);
    L00411424(__esp - __esp);
    _v56.hIconSm = _t25;
    _t27 = RegisterClassExA( &_v56);
    L00411424(__esp - __esp);
    _push(_t31);
    _push(_t27);
    L004111D1(__ebp, 4267581);
    _pop(__eax);
    _pop(__edx);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    __esp = __esp + 248;
    L00411424(__ebp - __esp);
    return;
}

L004115A0(_unknown_ __esp, _unknown_ __eflags, signed int _a4, unsigned int _a8, signed int _a12, unsigned int _a16)
{
    signed int __ebx;
    unsigned int _t37;
    signed int _t38;
    signed int _t39;
    signed int _t40;
    signed int _t41;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t47;
    unsigned int _t49;
    unsigned int _t53;
    _unknown_ _t54;
    _unknown_ _t55;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t62;

    __eflags = __eflags;
    __esp = __esp;
    _t37 = _a16;
    if(__eflags == 0) {
        return _a4 % _a12;
    }
    _t49 = _t37;
    __ebx = _a12;
    _t53 = _a8;
    _t38 = _a4;
    while(1) {
L4:
        asm("rcr ebx, 1");
        _t53 = _t53 >> 1;
        asm("rcr eax, 1");
        _t49 = _t49 >> 1;
        if(__eflags == 0) {
            break;
        }
    }
    _t39 = _t38 / __ebx;
    _t40 = _t39 * _a16;
    asm("xchg ecx, eax");
    _t41 = _t40 * _a12;
    _t57 = (_t40 * _a12 >> 32) + _t39;
    if(__eflags < 0) {
L9:
        _t41 = _t41 - _a12;
        asm("sbb edx, [esp+0x14]");
        goto L10;
    }
    __eflags = _t57 - _a8;
    if(__eflags > 0) {
        goto L9;
    }
    if(__eflags < 0) {
        goto L10;
    }
    __eflags = _t41 - _a4;
    if(_t41 <= _a4) {
        goto L10;
    }
    goto L9;
    return __eax;
L10:
    asm("sbb edx, [esp+0xc]");
    asm("sbb edx, 0x0");
    return  ~(_t41 - _a4);
}

L004115AF(signed int _a4)
{
    intOrPtr* _v8;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t15;
    _unknown_ _t18;
    signed int _t20;
    _unknown_ _t21;
    _unknown_ _t25;

    _push(_t21);
    if(_a4 == 0) {
        return ;
    }
    _v8 = (_a4 & 252) - 8;
    _push(4);
    _push(_t21);
    _t25 = _a4 - 4;
    _push(_t25);
    _t15 = L00417D50(_t21);
    __esp = __esp + 12;
    if(_t15 == 0) {
        _t18 = L00417D50(_t21, _v8 + 4, _t25, 4);
        if(_t18 == 0) {
            L0041119F(1, 0, 0, 0, "Damage before 0x%p which was allocated by aligned routine\n", _a4);
            if(_t18 == 1) {
                asm("int3 ");
            }
        }
        L0041141A( *_v8, 1);
        return;
    } else {
        _t20 = _a4;
        L0041119F(1, 0, 0, 0, "The block at 0x%p was not allocated by _aligned routines, use free()", _t20);
        if(_t20 != 1) {
            return ;
        }
        asm("int3 ");
        return ;
    }
}

L004115B4()
{
    return  *4363788;
}

L004126A0(signed int _a4)
{
    _unknown_ __ebp;

    if( *4363780 == 1) {
        L004114BF();
    }
    __eax = _a4;
    L00411230(__eax);
    L0041122B(__eax, 255);
    return;
}

L004126E0(_unknown_ __eax)
{
    struct HINSTANCE__* _v8;
    intOrPtr* _v12;
    signed short* _v16;
    signed short* _v20;
    signed int _v24;
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t44;
    _unknown_ _t45;

    _v8 = GetModuleHandleA(0);
    if(( *_v8 & 65535) != 23117) {
        return 0;
    }
    _v12 = _v8 +  *((intOrPtr*)(_v8 + 60));
    if( *_v12 != 17744) {
        return 0;
    }
    _v16 = _v12 + 24;
    _v24 =  *_v16 & 65535;
    if(_v24 == 267) {
        if(_v16[0x2e] > 14) {
            return 0;
        }
        return 0;
    } else {
        if(_v24 != 523) {
            return 0;
        }
        _v20 = _v16;
        if(_v20[0x36] > 14) {
            return 0;
        }
        return 0;
    }
}

L00412930(intOrPtr _a4, intOrPtr _a8, signed int _a12, intOrPtr _a16)
{
    signed int _v8;
    char _v12;
    intOrPtr _v16;
    char _v28;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t39;
    _unknown_ _t40;
    _unknown_ _t42;
    intOrPtr _t43;
    signed int _t48;
    signed int _t49;
    intOrPtr _t50;
    signed int _t52;
    _unknown_ _t57;
    char* _t58;
    _unknown_ _t60;
    intOrPtr _t61;
    _unknown_ _t62;
    char* _t63;

    _t50 = _a4;
    _push(_t62);
    _push(_t60);
    _push(_t50);
    _t63 = L004115B4();
    _push(4098);
    _v16 = _t63;
    _t39 = L00412A60();
    _t61 = _a16;
    __esp = __esp + 8;
    if(_t39 != 0) {
        _t43 = _t61;
        _t57 = _t43 + 1;
        while(1) {
L2:
            _t43 = _t43 + 1;
            if((_t52 & 4294967295) == 0) {
                break;
            }
        }
        L00414C20(_t43 - _t57 + _t43 - _t57 + 4 + 3 & 252, _t52, __esp);
        _t48 = 0;
        _t58 = __esp;
        if((_t52 & 4294967295) != 0) {
            while(1) {
L4:
                 *(_t58 + _t48 * 2) = _t52 & 4294967295;
                _t48 = _t48 + 1;
                if((_t52 & 4294967295) == 0) {
                    break;
                }
            }
        }
        _push(_t58);
         *(_t58 + _t48 * 2) = 0;
        _t49 = _a12;
        _push(_t50);
        _push( *((intOrPtr*)(4346360 + _t49 * 4)));
        _push(_t49);
        _t39 = L00412B00();
        __esp = __esp + 16;
        if(_t39 == 0) {
            goto L8;
        }
        goto L13;
L14:
L13:
        __esp =  &_v28;
        _pop(__edi);
        _pop(__esi);
        return;
        goto L14;
    }
L8:
    if(_t63 == 0) {
L12:
        DebugBreak();
    } else {
        if((_t39 & 4294967295) == 0) {
L11:
            L00414C20(516, _t52, __esp);
            _t63 = __esp;
            _push( &_v8);
            _push( &_v12);
            _push(512);
            _push(_t63);
            _push(_t50 + -5);
            L00411334();
            _t39 = _v8;
            _push(_t61);
            _push(_a12);
            _push("Run-Time Check Failure #%d - %s");
            _push(_t39);
            _push(_v12);
            _push(_t63);
            _push(_a8);
            _v16();
            __esp = __esp + 48;
            if(_t39 == 1) {
                goto L12;
            }
        } else {
            L004130A0();
            if(_t39 != 0) {
                goto L12;
            } else {
                goto L11;
            }
        }
    }
    goto L13;
}

L00412A60(intOrPtr _a4)
{
    long _v8;
    intOrPtr _v20;
    intOrPtr _v28;
    signed char _v29;
    char* _v48;
    intOrPtr _v52;
    long _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t15;

    _push(255);
    _push(4347176);
    _push(4264356);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp - 36;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    _v29 = 0;
    _v56 = 4097;
    _v52 = _a4;
    _v48 =  &_v29;
    _v8 = 0;
    RaiseException(1080890248, 0, 6,  &_v56);
    _v8 = -1;
     *fs:0x0] = _v20;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _v29 & 255;
}

L00412B00(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    long _v8;
    intOrPtr _v20;
    intOrPtr _v28;
    signed char _v29;
    intOrPtr _v36;
    char* _v40;
    intOrPtr _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    long _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t21;

    _push(255);
    _push(4347192);
    _push(4264356);
    _push( *fs:0x0]);
     *fs:0x0] = __esp;
    __esp = __esp - 36;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _v28 = __esp;
    _v29 = 0;
    _v56 = 4098;
    _v52 = _a4;
    _v48 = _a8;
    _v44 = _a12;
    _v40 =  &_v29;
    _v36 = _a16;
    _v8 = 0;
    RaiseException(1080890248, 0, 6,  &_v56);
    _v8 = -1;
     *fs:0x0] = _v20;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _v29 & 255;
}

L00412E30(signed int _a4)
{
    _unknown_ _v12;
    signed int __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t15;
    _unknown_ _t17;
    _unknown_ _t18;

    _t15 = _a4;
    _push(__ebx);
    _push(_t17);
    __ecx = 14;
     *4363810 = 0;
    while(1) {
L1:
        asm("cdq ");
        _t15 = _t15 / 10;
        __ecx = __ecx - 1;
         *(__ecx + 4363796) = _t15 % 10 & 4294967295;
        if(_t15 == 0) {
            break;
        }
    }
    _pop(__esi);
    _pop(__ebx);
    if((__ebx & 4294967295) == 0) {
        return __ecx + 4363796;
    }
    __ecx = __ecx - 1;
     *(__ecx + 4363796) = 45;
    return __ecx + 4363796;
}

L004130A0()
{
    long _t2;

    _t1 =  *4363816;
    if( *4363816 == 0) {
        _t2 = L004130E0(_t1);
        if(_t2 == 0) {
            RaiseException(-1073741515, _t2, _t2, _t2);
        }
         *4363816 = 1;
    }
    goto ( *4363792);
}

L004130E0(_unknown_ __eax)
{
    char _v8;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t7;
    _Unknown_base(*)()* _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;

    _t9 = GetProcAddress(LoadLibraryA("Kernel32.dll"), "IsDebuggerPresent");
     *4363792 = _t9;
    if(_t9 != 0) {
L6:
        __esp =  &_v8;
        return 0;
    } else {
        L00414C20(148, _t15, __esp);
        __esi = __esp;
        _push(__esi);
         *__esi = 148;
        if(GetVersionExA() == 0) {
L5:
            _t9 =  *4363792;
            goto L6;
        }
        if( *((intOrPtr*)(__esi + 16)) != 1 ||  *((intOrPtr*)(__esi + 4)) != 4) {
            goto L5;
        } else {
             *4363792 = 4272512;
            __esp =  &_v8;
            return 0;
        }
    }
}

L004132B0(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    _unknown_ __ebp;
    signed int _t8;

    if( *4363896 == 1) {
        _push(_a4);
        _push(GetCurrentProcess());
        _t8 = TerminateProcess();
    }
     *4363892 = 1;
     *4363888 = __ecx & 4294967295;
    if(_a8 != 0) {
L9:
        L00413430(4360496, 4360756);
        __eflags =  *4363900;
        if( *4363900 == 0) {
            L0041114F(__ecx, 255);
            _t8 = _t8 & 32;
            if(__eflags != 0) {
                 *4363900 = 1;
                L004113DE();
            }
        }
        __eflags = _a12;
        if(_a12 != 0) {
            return ;
        }
         *4363896 = 1;
        L0041122B(_a4, _a4);
        return;
    }
    if( *4370676 == 0) {
L8:
        L00413430(4359716, 4360236);
        goto L9;
    } else {
        goto L4;
    }
    while(1) {
L4:
         *4370672 =  *4370672 - 4;
        _t8 =  *4370672;
        if(_t8 <  *4370676) {
            break;
        }
        __ecx =  *4370672;
        if( *( *4370672) != 0) {
             *( *4370672)();
        }
    }
    goto L8;
}

L00413430(intOrPtr* _a4, intOrPtr _a8)
{
    _unknown_ __ebp;

    while(_a4 < _a8) {
        if( *_a4 != 0) {
             *_a4();
        }
        _a4 = _a4 + 4;
    }
}

L00413460(_unknown_ __ecx, intOrPtr* _a4, intOrPtr _a8)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    intOrPtr* _t11;
    _unknown_ _t12;

    _push(__ecx);
    _v8 = 0;
    while(1) {
        _t11 = _a4;
        if(_t11 >= _a8) {
            break;
        }
        if(_v8 != 0) {
            return ;
        }
        if( *_a4 != 0) {
             *_a4();
            _v8 = _t11;
        }
        _a4 = _a4 + 4;
    }
    return;
}

L00413700(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr* _v8;
    _unknown_ __ebp;
    _unknown_ _t12;

    _push(__ecx);
    _v8 = 4361104;
L1:
    while( *_v8 != _a4) {
        _v8 = _v8 + 12;
        if(_v8 >=  *4361232 *  *4361232 + 4361104) {
            if(_v8 >=  *4361232 *  *4361232 + 4361104) {
                return 0;
            }
            if( *_v8 == _a4) {
                return _v8;
            }
            return 0;
        } else {
        }
    }
}

L00413B80(signed int* _a4, signed int** _a8, signed int* _a12, intOrPtr* _a16, signed int _a20)
{
    signed int* _v8;
    char _v12;
    _unknown_ _v16;
    signed int _v17;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t168;
    _unknown_ _t171;
    _unknown_ _t179;
    _unknown_ _t180;
    signed int _t202;
    _unknown_ _t206;
    _unknown_ _t219;
    _unknown_ _t225;
    _unknown_ _t235;
    signed int _t253;
    _unknown_ _t255;
    _unknown_ _t281;
    _unknown_ _t283;
    _unknown_ _t284;
    _unknown_ _t292;
    signed int _t295;

     *_a20 = 0;
     *_a16 = 1;
    _v8 = _a4;
    if(_a8 != 0) {
         *_a8 = _a12;
        _a8 =  &(_a8[1]);
    }
    _v12 = 0;
    goto L3;
    do {
L3:
        _t202 =  *_v8;
        if(_t202 != 34) {
            _t253 = _a20;
             *_t253 =  *_a20 + 1;
            __eflags = _a12;
            if(__eflags != 0) {
                 *_a12 = _t253 & 4294967295;
                _a12 =  &(_a12[0]);
            }
            _v17 = _t253 & 4294967295;
            _v8 =  &(_v8[0]);
            if(__eflags != 0) {
                _t295 = _a20;
                 *_t295 =  *_a20 + 1;
                __eflags = _a12;
                if(_a12 != 0) {
                     *_a12 = _t295 & 4294967295;
                    _a12 =  &(_a12[0]);
                }
                _v8 =  &(_v8[0]);
            }
        } else {
            _v12 = 0;
            _v17 = _t202 & 4294967295;
            _v8 =  &(_v8[0]);
        }
    } while((_v17 & 255) != 0 && (_v12 != 0 || (_v17 & 255) != 32 && (_v17 & 255) != 9));
    if((_v17 & 255) != 0) {
        __eflags = _a12;
        if(_a12 != 0) {
             *((char*)(_a12 - 1)) = 0;
        }
    } else {
        _v8 = _v8 - 1;
    }
    _v12 = 0;
    while(1) {
    }
}

L00414C20(signed int __eax, _unknown_ __ecx, _unknown_ __esp, char _a4)
{
    signed int _t9;
    _unknown_ _t10;
    _unknown_ _t16;
    char* _t17;
    _unknown_ _t19;
    _unknown_ _t21;

    __esp = __esp;
    _t16 = __ecx;
    _t9 = __eax;
    if(_t9 >= 4096) {
        _push(_t16);
        _t17 =  &_a4;
        while(1) {
L3:
            _t17 = _t17 - 4096;
            _t9 = _t9 - 4096;
            if(_t9 < 4096) {
                break;
            }
        }
        _t10 = __esp;
        __esp = _t17 - _t9;
        _push( *((intOrPtr*)(_t10 + 4)));
        return;
L5:
    }
    asm("xchg esp, eax");
    _push( *((intOrPtr*)( ~_t9 + __esp + 4)));
    return;
    goto L5;
}

L00415880(signed int _a4, intOrPtr _a8, intOrPtr _a12, signed int _a16, char* _a20)
{
    signed int _v8;
    char* _v12;
    intOrPtr _v16;
    char _v4116;
    struct HINSTANCE__* _v4120;
    char _v4380;
    intOrPtr _v4384;
    char* _v4388;
    intOrPtr _v4392;
    char* _v4396;
    char* _v4400;
    intOrPtr _v4404;
    char* _v4408;
    intOrPtr _v4412;
    char* _v4416;
    intOrPtr _v4420;
    char* _v4424;
    _unknown_ __ebp;
    _unknown_ _t81;
    intOrPtr _t82;
    signed int _t85;
    _Unknown_base(*)()* _t92;
    _unknown_ _t93;
    _unknown_ _t94;
    _unknown_ _t97;
    _unknown_ _t99;
    _unknown_ _t101;
    _unknown_ _t102;
    _unknown_ _t104;
    _unknown_ _t105;
    signed int _t115;
    _unknown_ _t116;

    L00411131(4420, _t105, __esp);
    _t82 =  *4361904;
    _v16 = _t82;
    if(_a20 == 0) {
        _push("szUserMessage != NULL");
        _push(0);
        _push(570);
        _push("dbgrpt.c");
        _push(2);
        L0041119F();
        __esp = __esp + 20;
        if(_t82 == 1) {
            L00411037();
        }
    }
    _v4120 = 0;
    if(GetModuleFileNameA(0,  &_v4380, 260) == 0) {
        _push("<program name unknown>");
        _push( &_v4380);
        L00411258( &_v4380, __esp);
        __esp = __esp + 8;
    }
    _v12 =  &_v4380;
    _push(_v12);
    _t85 = L00411235( &_v4380, __esp);
    __esp = __esp + 4;
    if(_t85 > 64) {
        _push(_v12);
        _t102 = L00411235(_t85, __esp);
        __esp = __esp + 4;
        _v12 =  &(_v12[_t102 - 64]);
        _push(3);
        _push("...");
        _push(_v12);
        _t85 = L00411492(_v12, __esp);
        __esp = __esp + 12;
    }
    _v8 = _a16;
    if(_v8 != 0) {
        _push(_v8);
        _t97 = L00411235(_t85, __esp);
        __esp = __esp + 4;
        if(_t97 > 64) {
            _push(_v8);
            _t99 = L00411235(_v8, __esp);
            __esp = __esp + 4;
            _v8 = _v8 + _t99 - 64;
            _push(3);
            _push("...");
            _push(_v8);
            L00411492(_v8, __esp);
            __esp = __esp + 12;
        }
    }
    if(_a4 != 2) {
        _v4388 = 4346092;
    } else {
        _v4388 = "\n\nFor information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts.";
    }
    if( *_a20 == 0) {
        _v4392 = 4346092;
    } else {
        _v4392 = _a20;
    }
    if( *_a20 == 0 || _a4 != 2) {
        _v4396 = 4346092;
    } else {
        _v4396 = "Expression: ";
    }
    if( *_a20 == 0) {
        _v4400 = 4346092;
    } else {
        _v4400 = "\n\n";
    }
    if(_a12 == 0) {
        _v4404 = 4346092;
    } else {
        _v4404 = _a12;
    }
    if(_a12 == 0) {
        _v4408 = 4346092;
    } else {
        _v4408 = "\nLine: ";
    }
    if(_a8 == 0) {
        _v4412 = 4346092;
    } else {
        _v4412 = _a8;
    }
    if(_a8 == 0) {
        _v4416 = 4346092;
    } else {
        _v4416 = "\nFile: ";
    }
    if(_v8 == 0) {
        _v4420 = 4346092;
    } else {
        _v4420 = _v8;
    }
    if(_v8 == 0) {
        _v4424 = 4346092;
    } else {
        _v4424 = "\nModule: ";
    }
    _push(_v4388);
    _push(_v4392);
    _push(_v4396);
    _push(_v4400);
    _push(_v4404);
    _push(_v4408);
    _push(_v4412);
    _push(_v4416);
    _push(_v4420);
    _push(_v4424);
    _push(_v12);
    _t115 = _a4;
    _t127 =  *((intOrPtr*)(4361524 + _t115 * 4));
    _t92 = L0041100A( ?_? ( &_v4116),  &_v4116, 4096, "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)",  *((intOrPtr*)(4361524 + _t115 * 4)));
    __esp = __esp + 44;
    if(_t92 < 0) {
        _push("_CrtDbgReport: String too long or IO Error");
        _push( &_v4116);
        _t92 = L00411258(_t127, __esp);
        __esp = __esp + 8;
    }
    L0041107D(_t92,  &_v4116, "Microsoft Visual C++ Debug Library", 73746);
    _v4384 = _t92;
    if(_v4384 == 3) {
        L00411401(_t92, 22);
        _push(3);
        L00411212();
    }
    if(_v4384 != 4) {
    }
    L00411087();
    return;
}

L004160C0(_unknown_ __eax, _unknown_ __ecx, signed int _a4)
{
    unsigned int _v8;
    intOrPtr _v16;
    char _v20;
    char _v2068;
    char _v2080;
    char _v2096;
    signed int __ebx;
    void* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t68;
    signed int _t69;
    void* _t70;
    void* _t71;
    _unknown_ _t72;
    signed int _t73;
    _unknown_ _t74;
    _unknown_ _t75;
    intOrPtr _t76;
    _unknown_ _t77;
    signed int _t78;
    _unknown_ _t79;
    unsigned int _t81;
    void* _t82;
    void* _t83;
    _unknown_ _t85;
    _unknown_ _t86;
    signed int _t88;
    void _t89;
    signed int _t90;
    _unknown_ _t92;
    intOrPtr _t100;
    signed int _t103;
    intOrPtr _t110;
    signed int _t112;

    _t87 =  *4364324;
    _push(__ebx);
    _push(_t111);
    _push(__edi);
    _t69 = _t87;
    if(_t87 == 0) {
L5:
        _t70 =  *4364264;
        if(_t70 != 0) {
L16:
            _t71 =  *4364312;
            __ebx = __imp__HeapAlloc;
            if(_t71 != 0) {
                _push(0);
                _push(8);
                 *_t71();
                __edi = _t71;
                if(__edi == 255) {
                    goto L39;
                }
                L00414C20(548, _t87, __esp);
                _t111 = __esp;
                _push(_t111);
                _push(__edi);
                 *_t111 = 548;
                 *4364316();
                if(548 == 0) {
L28:
                    __eax = CloseHandle(__edi);
                } else {
                    while(1) {
                        _push(32);
                        _push(0);
                        GetProcessHeap();
                        _push(548);
                         *__ebx();
                        if(548 == 0) {
                            break;
                        }
                         *0x00000230 =  *(_t111 + 28);
                         *((intOrPtr*)(0x228)) =  *((intOrPtr*)(_t111 + 20));
                        _push(_t111);
                        _push(__edi);
                         *0x0000022C =  *(_t111 + 24);
                         *0x0000023C = 0;
                         *0x00000240 =  *4364324;
                         *4364324 = 548;
                         *4364320();
                        if(548 != 0) {
                            continue;
                        } else {
                            goto L28;
                        }
                        goto L57;
                    }
                    __eax = CloseHandle(__edi);
                    goto L33;
                }
                goto L29;
            } else {
                GetCurrentProcess();
                _push( &_v8);
                _push(2048);
                __edi = _t71;
                _push( &_v2068);
                _push(__edi);
                 *4364308();
                if(_t71 == 0) {
                    goto L39;
                }
                _t81 = _v8 >> 2;
                _t111 = 0;
                _v8 = _t81;
                if(_t81 <= 0) {
L29:
                    _t73 =  *4364324;
L30:
                    _t111 = _t73;
                    if(_t73 == 0) {
L51:
                        _t88 = _t73;
                        if(_t73 == 0) {
                            goto L39;
                        } else {
                            goto L52;
                        }
                        while(1) {
L52:
                            _t100 =  *((intOrPtr*)(_t88 + 4));
                            _t111 = _a4;
                            if(_t100 <= _t111 && GetProcAddress <=  *((intOrPtr*)(_t88 + 8))) {
                                break;
                            }
                            _t88 =  *(_t88 + 28);
                            if(_t88 != 0) {
                                continue;
                            } else {
                                goto L34;
                            }
                            goto L57;
                        }
                        __esp =  &_v2080;
                        _pop(__edi);
                        _pop(__esi);
                        _pop(__ebx);
                        return;
                    } else {
                        while(1) {
                            _push( *((intOrPtr*)(_t111 + 4)));
                             *4364300();
                             *(_t111 + 16) = _t73;
                            _t90 =  *(_t73 + 20) & 65535;
                             *((intOrPtr*)(_t111 + 20)) = _t73 + 24 + _t90;
                            L00414C20(516, _t90, __esp);
                            __edi = __esp;
                            _push(512);
                            (__edi)[0x80] = 0;
                            _t76 =  *((intOrPtr*)(_t111 + 12));
                            _push(__edi);
                            _push(_t76);
                            GetModuleFileNameA();
                            if(_t76 == 0) {
                                break;
                            }
                            _t77 = 0;
                            if((_t90 & 4294967295) != 0) {
                                while(1) {
L45:
                                    _t77 = _t77 + 1;
                                    if((_t90 & 4294967295) == 0) {
                                        break;
                                    }
                                }
                            }
                            _t78 = _t77 + 1;
                            _push(_t78);
                            _push(0);
                            GetProcessHeap();
                            _push(_t78);
                             *__ebx();
                             *(_t111 + 24) = _t78;
                            if(_t78 == 0) {
                                break;
                            } else {
                                _t79 = 0;
                                while(1) {
L48:
                                    _t103 =  *(_t111 + 24);
                                     *(_t79 + _t103) = __ebx & 4294967295;
                                    _t79 = _t79 + 1;
                                    if((_t103 & 4294967295) == 0) {
                                        break;
                                    }
                                }
                                _t111 =  *(_t111 + 28);
                                if(_t111 != 0) {
                                    __ebx = __imp__HeapAlloc;
                                    continue;
                                }
                                _t73 =  *4364324;
                                goto L51;
                            }
L34:
                            if(_t73 != 0) {
                                __esp =  &_v2096;
                                while(1) {
L36:
                                    _t89 =  *(_t73 + 24);
                                    _t111 =  *(_t73 + 28);
                                    if(_t89 != 0) {
                                        _push(_t89);
                                        _push(0);
                                        GetProcessHeap();
                                        _push(_t73);
                                        HeapFree();
                                        _t73 =  *4364324;
                                    }
                                    _push(_t73);
                                    _push(0);
                                    GetProcessHeap();
                                    _push(_t73);
                                    HeapFree();
                                    _t73 = _t111;
                                     *4364324 = _t73;
                                    if(_t111 == 0) {
                                        break;
                                    }
                                }
                            }
                            goto L39;
                        }
L33:
                        _t73 =  *4364324;
                        goto L34;
                    }
                    goto L57;
                } else {
                    goto L19;
                }
                while(1) {
L19:
                    _push(12);
                    _t73 =  &_v20;
                    _push(_t73);
                    _push( *((intOrPtr*)(__ebp + -2064 + _t111 * 4)));
                    _push(__edi);
                     *4364304();
                    if(_t73 == 0) {
                        break;
                    }
                    _push(32);
                    _push(0);
                    GetProcessHeap();
                    _push(_t73);
                     *__ebx();
                    if(_t73 == 0) {
                        goto L33;
                    }
                     *((intOrPtr*)(_t73 + 12)) =  *((intOrPtr*)(__ebp + -2064 + _t111 * 4));
                     *((intOrPtr*)(_t73 + 4)) = _v20;
                     *((intOrPtr*)(_t73 + 8)) = _v16;
                     *(_t73 + 24) = 0;
                     *(_t73 + 28) =  *4364324;
                    _t111 = _t111 + 1;
                     *4364324 = _t73;
                    if(_t111 < _v8) {
                        continue;
                    } else {
                        goto L30;
                    }
                    goto L57;
                }
                goto L39;
            }
        } else {
            __edi = LoadLibraryA;
             *LoadLibraryA("KERNEL32.DLL");
            _push("IMAGEHLP.DLL");
             *4364268 = _t70;
             *LoadLibraryA();
            _t87 =  *4364268;
             *4364264 = _t70;
            if( *4364268 == 0 || _t70 == 0) {
L39:
                _t69 = 0;
                goto L40;
            }
            _t111 = GetProcAddress;
             *GetProcAddress(_t70, "ImageNtHeader");
             *4364300 = _t70;
            if(_t70 == 0) {
                goto L39;
            }
            _t82 =  *4364268;
             *GetProcAddress(_t82, "CreateToolhelp32Snapshot");
             *4364312 = _t82;
            if(_t82 != 0) {
                 *GetProcAddress( *4364268, "Module32First");
                 *4364316 = _t82;
                if(_t82 == 0) {
                    goto L39;
                }
                _t83 =  *4364268;
                 *GetProcAddress(_t83, "Module32Next");
                 *4364320 = _t83;
                if(_t83 == 0) {
                    goto L39;
                }
                goto L16;
            } else {
                 *LoadLibraryA("PSAPI.DLL");
                 *4364260 = _t82;
                if(_t82 == 0) {
                    goto L39;
                }
                 *GetProcAddress(_t82, "EnumProcessModules");
                 *4364308 = _t82;
                if(_t82 == 0) {
                    goto L39;
                }
                _t87 =  *4364260;
                 *GetProcAddress( *4364260, "GetModuleInformation");
                 *4364304 = _t82;
                if(_t82 != 0) {
                    goto L16;
                } else {
                    __esp =  &_v2080;
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebx);
                    return;
                }
            }
        }
    } else {
        goto L1;
        do {
L1:
            _t110 =  *((intOrPtr*)(_t69 + 4));
            _t112 = _a4;
            if(_t110 > _t112) {
                goto L3;
            } else {
                _t111 = _t112 - _t110;
                if(_t112 - _t110 <=  *((intOrPtr*)(_t69 + 8))) {
L40:
                    __esp =  &_v2080;
                    _pop(__edi);
                    _pop(__esi);
                    _pop(__ebx);
                    return;
                } else {
                    goto L3;
                }
            }
            goto L57;
L3:
            _t69 =  *(_t69 + 28);
        } while(_t69 != 0);
        while(1) {
L4:
            _t111 =  *(_t87 + 28);
            _push(_t87);
            _push(0);
            _push(GetProcessHeap());
            HeapFree();
            _t87 = _t111;
             *4364324 = _t87;
            if(_t111 == 0) {
                break;
            }
        }
        goto L5;
    }
L57:
}

L00416570()
{
    char _v8;
    signed int _v12;
    struct HINSTANCE__* _v16;
    char _v20;
    struct HINSTANCE__* _v24;
    char _v36;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t34;
    struct HINSTANCE__* _t35;
    signed int _t36;
    signed int _t41;
    CHAR* _t42;
    struct HINSTANCE__* _t43;
    intOrPtr _t49;
    _unknown_ _t52;
    signed int _t55;
    struct HINSTANCE__* _t56;
    _unknown_ _t57;
    CHAR* _t60;

    if( *4364348 != 0) {
L8:
        __esp =  &_v36;
        return;
    } else {
        _t35 =  *4361544;
        _push(_t35);
         *4364348 = 1;
         *LoadLibraryA();
        if(_t35 != 0) {
L17:
            __esp =  &_v36;
            return;
        } else {
             *LoadLibraryA("ADVAPI32.DLL");
            _t56 = _t35;
            if(_t56 == 0) {
                goto L8;
            } else {
                 *GetProcAddress(_t56, "RegOpenKeyExA");
                _v16 = _t35;
                if(_t35 == 0) {
                    goto L8;
                } else {
                     *GetProcAddress(_t56, "RegQueryValueExA");
                    _t43 = _t35;
                    if(_t43 == 0) {
                        goto L8;
                    } else {
                         *GetProcAddress(_t56, "RegCloseKey");
                        _v24 = _t35;
                        if(_t35 == 0) {
                            goto L8;
                        } else {
                            _push( &_v12);
                            _push(1);
                            _push(0);
                            _push("SOFTWARE\Microsoft\VisualStudio\7.1\Setup\VS");
                            _push(-2147483646);
                            _v16();
                            if(_t35 == 0) {
                                _t47 = _v12;
                                _push( &_v8);
                                _push(0);
                                _t36 =  &_v20;
                                _push(_t36);
                                _push(0);
                                _push("EnvironmentDirectory");
                                _push(_v12);
                                _t43->i();
                                __eflags = _t36;
                                if(_t36 != 0) {
                                    goto L8;
                                } else {
                                    _v8 = _v8 + 13;
                                    L00414C20(_v8 + 13 + 3 & 252, _t47, __esp);
                                    _t60 = __esp;
                                    _push( &_v8);
                                    _push(_t60);
                                    _t41 =  &_v20;
                                    _push(_t41);
                                    _push(0);
                                    _push("EnvironmentDirectory");
                                    _push(_v12);
                                    _t43->i();
                                    _t55 = _v12;
                                    _push(_t55);
                                    _v24();
                                    FreeLibrary(_t56);
                                    __eflags = _t41;
                                    if(_t41 != 0) {
                                        goto L8;
                                    } else {
                                        _t49 = _v8;
                                        __eflags = (_t55 & 4294967295) - (_t41 & 4294967295);
                                        if(__eflags == 0) {
                                            _v8 = _t49 - 1;
                                        } else {
                                            _t60[_t49 - 1] = _t41 & 4294967295;
                                        }
                                        _t42 = _t60;
                                        _t57 = 12;
                                        while(1) {
L15:
                                            _t42[_v8] = _t55 & 4294967295;
                                            _t42 =  &(_t42[1]);
                                            _t57 = _t57 - 1;
                                            if(__eflags == 0) {
                                                break;
                                            }
                                        }
                                        __eax = LoadLibraryA(_t60);
                                        goto L17;
                                    }
                                }
                            } else {
                                __eax = FreeLibrary(_t56);
                                goto L8;
                            }
                        }
                    }
                }
            }
        }
    }
L18:
}

L00416EC0(_unknown_ __eax, signed int _a4, signed int _a8, signed int _a12, signed int _a16, intOrPtr _a20, signed int _a24)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    intOrPtr _v20;
    intOrPtr _v24;
    _unknown_ __ebp;
    _unknown_ _t118;
    signed int _t121;
    signed int _t124;
    signed int _t125;
    signed int _t126;
    signed int _t128;
    signed int _t129;
    signed int _t130;
    _unknown_ _t131;
    signed int _t132;
    _unknown_ _t135;
    _unknown_ _t149;
    _unknown_ _t150;
    _unknown_ _t152;
    signed int _t154;
    signed int _t155;
    _unknown_ _t156;
    _unknown_ _t157;
    signed int _t158;
    signed int _t161;
    _unknown_ _t162;
    _unknown_ _t165;
    signed int _t168;
    signed int _t192;
    signed int _t198;
    signed int _t210;
    signed int _t226;

    _v8 = 0;
    __eflags = _a4;
    if(_a4 == 0) {
        L00411064(_a8, _a8, _a12, _a16, _a20);
        return;
    }
    __eflags = _a24;
    if(_a24 == 0) {
L5:
        __eflags =  *4364376;
        if( *4364376 > 0) {
            _t160 =  *4364376 - 1;
            __eflags =  *4364360 -  *4364376 - 1;
            if(__eflags != 0) {
                 *4364360 =  *4364360 + 1;
            } else {
                _t161 = L00411096(_t160, __eflags);
                __eflags = _t161;
                if(_t161 == 0) {
                    _push("_CrtCheckMemory()");
                    _push(0);
                    _push(612);
                    _push("dbgheap.c");
                    _push(2);
                    L0041119F();
                    __esp = __esp + 20;
                    __eflags = _t161 - 1;
                    if(_t161 == 1) {
                        asm("int3 ");
                    }
                }
                 *4364360 = 0;
            }
        }
        _v24 =  *4361552;
        __eflags =  *4361556 - 255;
        if( *4361556 != 255) {
            __eflags = _v24 -  *4361556;
            if(_v24 ==  *4361556) {
                asm("int3 ");
            }
        }
        _push(_a20);
        _push(_a16);
        _push(_v24);
        _t198 = _a12;
        _push(_t198);
        _t121 = _a8;
        _push(_t121);
        _t167 = _a4;
        _push(_a4);
        _push(2);
         *4361920();
        __esp = __esp + 28;
        __eflags = _t121;
        if(_t121 != 0) {
            __eflags = _a8 - 219;
            if(_a8 <= 219) {
                __eflags = _a12 - 1;
                if(_a12 == 1) {
L33:
                    _push(4);
                    _push(_t198);
                    _t124 = (_a4 & 252) - 4;
                    _push(_t124);
                    L00417D50(_t167);
                    __esp = __esp + 12;
                    __eflags = _t124;
                    if(__eflags == 0) {
L37:
                        _t125 = _a4;
                        L004111EA(__eflags, _t125);
                        __eflags = _t125;
                        if(_t125 == 0) {
                            _push("_CrtIsValidHeapPointer(pUserData)");
                            _push(0);
                            _push(663);
                            _push("dbgheap.c");
                            _push(2);
                            L0041119F();
                            __esp = __esp + 20;
                            __eflags = _t125 - 1;
                            if(_t125 == 1) {
                                asm("int3 ");
                            }
                        }
                        _v12 = _a4 - 32;
                        _t126 = _v12;
                        __eflags =  *((intOrPtr*)(_t126 + 20)) - 3;
                        if( *((intOrPtr*)(_t126 + 20)) == 3) {
                            _v8 = 1;
                        }
                        __eflags = _v8;
                        if(_v8 == 0) {
L48:
                            _t168 = _v12;
                            __eflags = ( *(_t168 + 20) & 65535) - 2;
                            if(( *(_t168 + 20) & 65535) == 2) {
                                _t126 = _a12 & 65535;
                                __eflags = _t126 - 1;
                                if(_t126 == 1) {
                                    _a12 = 2;
                                }
                            }
L51:
                            __eflags = _a24;
                            if(_a24 == 0) {
                                _t128 = _a8 + 36;
                                L004110BE(_t128, _v12, _t128);
                                _v16 = _t128;
                                __eflags = _v16;
                                if(_v16 == 0) {
                                    return ;
                                }
                            } else {
                                L00411203(_t126, _v12, _a8 + 36);
                                _v16 = _t126;
                                __eflags = _v16;
                                if(_v16 == 0) {
                                    return ;
                                }
                            }
                             *4361552 =  *4361552 + 1;
                            __eflags = _v8;
                            if(_v8 == 0) {
                                 *4364352 =  *4364352 -  *((intOrPtr*)(_v16 + 16));
                                 *4364352 =  *4364352 + _a8;
                                 *4364372 =  *4364372 -  *((intOrPtr*)(_v16 + 16));
                                 *4364372 =  *4364372 + _a8;
                                __eflags =  *4364372 -  *4364364;
                                if( *4364372 >  *4364364) {
                                     *4364364 =  *4364372;
                                }
                            }
                            _v20 = _v16 + 32;
                            _t129 = _v16;
                            __eflags = _a8 -  *((intOrPtr*)(_t129 + 16));
                            if(_a8 >  *((intOrPtr*)(_t129 + 16))) {
                                _push(_a8 -  *((intOrPtr*)(_v16 + 16)));
                                _push( *4361562 & 255);
                                _push(_v20 +  *((intOrPtr*)(_v16 + 16)));
                                L00411195(__esp);
                                __esp = __esp + 12;
                            }
                            _push(4);
                            _push( *4361560 & 255);
                            _push(_v20 + _a8);
                            L00411195(__esp);
                            __esp = __esp + 12;
                            __eflags = _v8;
                            if(_v8 == 0) {
                                 *(_v16 + 8) = _a16;
                                 *((intOrPtr*)(_v16 + 12)) = _a20;
                                 *((intOrPtr*)(_v16 + 24)) = _v24;
                            }
                            _t130 = _v16;
                             *(_t130 + 16) = _a8;
                            __eflags = _a24;
                            if(_a24 != 0) {
L69:
                                __eflags = _v16 - _v12;
                                if(_v16 == _v12) {
                                    return ;
                                }
                                __eflags = _v8;
                                if(_v8 != 0) {
                                    return ;
                                }
                                __eflags =  *_v16;
                                if( *_v16 == 0) {
                                    __eflags =  *4364356 - _v12;
                                    if( *4364356 != _v12) {
                                        _push("_pLastBlock == pOldBlock");
                                        _push(0);
                                        _push(764);
                                        _push("dbgheap.c");
                                        _push(2);
                                        L0041119F();
                                        __esp = __esp + 20;
                                        __eflags = _t130 - 1;
                                        if(_t130 == 1) {
                                            asm("int3 ");
                                        }
                                    }
                                    _t132 = _v16;
                                     *4364356 =  *(_t132 + 4);
                                } else {
                                    _t132 =  *(_v16 + 4);
                                     *( *_v16 + 4) = _t132;
                                }
                                _t210 = _v16;
                                __eflags =  *(_t210 + 4);
                                if( *(_t210 + 4) == 0) {
                                    __eflags =  *4364368 - _v12;
                                    if( *4364368 != _v12) {
                                        _push("_pFirstBlock == pOldBlock");
                                        _push(0);
                                        _push(775);
                                        _push("dbgheap.c");
                                        _push(2);
                                        L0041119F();
                                        __esp = __esp + 20;
                                        __eflags = _t132 - 1;
                                        if(_t132 == 1) {
                                            asm("int3 ");
                                        }
                                    }
                                     *4364368 =  *_v16;
                                } else {
                                     *( *(_v16 + 4)) =  *_v16;
                                }
                                __eflags =  *4364368;
                                if( *4364368 == 0) {
                                     *4364356 = _v16;
                                } else {
                                     *( *4364368 + 4) = _v16;
                                }
                                 *_v16 =  *4364368;
                                 *(_v16 + 4) = 0;
                                 *4364368 = _v16;
                                return;
                            }
                            __eflags = _a24;
                            if(_a24 != 0) {
L67:
                                _push("fRealloc || (!fRealloc && pNewBlock == pOldBlock)");
                                _push(0);
                                _push(747);
                                _push("dbgheap.c");
                                _push(2);
                                L0041119F();
                                __esp = __esp + 20;
                                __eflags = _t130 - 1;
                                if(_t130 == 1) {
                                    asm("int3 ");
                                }
                                goto L69;
                            }
                            __eflags = _v16 - _v12;
                            if(_v16 == _v12) {
                                goto L69;
                            }
                            goto L67;
                        }
                        _t192 = _v12;
                        __eflags =  *((intOrPtr*)(_t192 + 12)) - -19088708;
                        if( *((intOrPtr*)(_t192 + 12)) != -19088708) {
L45:
                            _push("pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ");
                            _push(0);
                            _push(673);
                            _push("dbgheap.c");
                            _push(2);
                            L0041119F();
                            __esp = __esp + 20;
                            __eflags = _t126 - 1;
                            if(_t126 == 1) {
                                asm("int3 ");
                            }
L47:
                            goto L51;
                        }
                        _t226 = _v12;
                        __eflags =  *(_t226 + 24);
                        if( *(_t226 + 24) == 0) {
                            goto L47;
                        }
                        goto L45;
                    }
                    goto L34;
                }
                goto L28;
L34:
                L0041119F(1, 0, 0, 0, "The Block at 0x%p was allocated by aligned routines, use _aligned_realloc()", _a4);
                __eflags = _t124 - 1;
                if(_t124 != 1) {
                    return ;
                }
                asm("int3 ");
                return ;
            }
            goto L24;
L28:
            _t198 = _a12 & 65535;
            __eflags = _t198 - 4;
            if(_t198 == 4) {
                goto L33;
            }
            _t154 = _a12 & 65535;
            __eflags = _t154 - 2;
            if(_t154 == 2) {
                goto L33;
            }
            L0041119F(1, 0, 0, 0, "%s", "Error: memory allocation: bad memory block type.\n");
            __eflags = _t154 - 1;
            if(__eflags == 0) {
                asm("int3 ");
            }
            goto L37;
        }
        __eflags = _a16;
        if(_a16 != 0) {
            _push(_a20);
            _t158 = _a16;
            L0041119F(0, 0, 0, 0, "Client hook re-allocation failure at file %hs line %d.\n", _t158);
            __esp = __esp + 4;
            __eflags = _t158 - 1;
            if(_t158 != 1) {
                return ;
            }
            asm("int3 ");
            return ;
        }
        L0041119F(0, 0, 0, 0, "%s", "Client hook re-allocation failure.\n");
        __eflags = _t121 - 1;
        if(_t121 != 1) {
            return ;
        }
        asm("int3 ");
        return ;
L24:
        _t155 = _a8;
        L0041119F(1, 0, 0, 0, "Allocation too large or negative: %Iu bytes.\n", _t155);
        __eflags = _t155 - 1;
        if(_t155 != 1) {
            return ;
        }
        asm("int3 ");
        return ;
    } else {
        __eflags = _a8;
        if(_a8 != 0) {
            goto L5;
        } else {
            L0041141A(_a4, _a12);
            return;
        }
    }
}

L00417D50(_unknown_ __ecx, signed char* _a4, signed char _a8, intOrPtr _a12)
{
    intOrPtr _v8;
    _unknown_ __ebp;

    _push(__ecx);
    _v8 = 1;
    while(1) {
        _a12 = _a12 - 1;
        if(_a12 == 0) {
            break;
        }
        _a4 =  &(_a4[1]);
        if(( *_a4 & 255) != (_a8 & 255)) {
            _v8 = 0;
        }
    }
    return _v8;
}

L00418B40(_unknown_ _a4)
{
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v64;
    _unknown_ _v84;
    _unknown_ _v85;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ __ebp;
    intOrPtr _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t47;
    _unknown_ _t54;
    _unknown_ _t61;

    _t43 =  *4361904;
    _v12 = _t43;
    _v8 = 0;
    while() {
    }
}

L00419600(_unknown_ __eflags, signed int _a4, signed int _a8, _unknown_ _a12)
{
    signed int _v8;
    signed int _v12;
    _unknown_ __ebp;
    _unknown_ _t20;
    _unknown_ _t23;

    _a4 = _a4 & 255;
    if(__eflags != 0) {
L6:
        _v12 = 1;
        return _v12;
    }
    if(_a8 == 0) {
        _v8 = 0;
    } else {
        _v8 =  *( *4361940 + _a4 * 2) & 65535 & _a8;
    }
    if(_v8 != 0) {
        goto L6;
    }
    _v12 = 0;
L7:
    return _v12;
    goto L7;
}

L00419A50(intOrPtr _a4)
{
    _unknown_ __ebp;

     *4364388 = 0;
    if(_a4 != 254) {
        if(_a4 != 253) {
            if(_a4 != 252) {
                return _a4;
            }
             *4364388 = 1;
            return  *4364564;
        }
        goto L3;
    }
     *4364388 = 1;
    return GetOEMCP();
L3:
     *4364388 = 1;
    return GetACP();
}

L00419AC0(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t13;

    _push(__ecx);
    _v8 = _a4;
    _v8 = _v8 - 932;
    if(_v8 > 18) {
        return 0;
    }
    switch( *((intOrPtr*)(( *(_v8 + 4299555) & 255) * 4 +  &M00419B0F))) {
        case 0:
            return 1041;
        case 1:
            __eax = 2052;
            return 2052;
        case 2:
            __eax = 1042;
            return 1042;
        case 3:
            __eax = 1028;
            return 1028;
        case 4:
            return 0;
    }
}

L00419B60(_unknown_ __ecx)
{
    char _v8;
    _unknown_ __ebp;

    _push(__ecx);
    _v8 = 0;
    while(_v8 < 257) {
         *((char*)(_v8 + 4369728)) = 0;
        _v8 = _v8 + 1;
    }
}

L00419C00()
{
    intOrPtr _v8;
    _unknown_ _v524;
    _unknown_ _v780;
    _unknown_ _v1036;
    _unknown_ _v1040;
    _unknown_ _v1300;
    signed int _v1304;
    _unknown_ _v1318;
    char _v1324;
    _unknown_ __ebp;
    _unknown_ _t112;
    _unknown_ _t114;
    _unknown_ _t116;
    _unknown_ _t122;
    _unknown_ _t124;
    signed int _t128;
    _unknown_ _t129;
    _unknown_ _t141;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t147;
    _unknown_ _t162;
    _unknown_ _t166;

    _v8 =  *4361904;
    _push( &_v1324);
    _t128 =  *4369988;
    _push(_t128);
    if(GetCPInfo() != 1) {
        _v1304 = 0;
        while(1) {
L25:
            __eflags = _v1304 - 256;
            if(_v1304 >= 256) {
                break;
            }
            __eflags = _v1304 - 65;
            if(_v1304 < 65) {
L29:
                __eflags = _v1304 - 97;
                if(_v1304 < 97) {
L32:
                     *(_v1304 + 4370016) = 0;
                } else {
                    __eflags = _v1304 - 122;
                    if(_v1304 > 122) {
                        goto L32;
                    } else {
                         *(_v1304 + 4369729) = ( *(_v1304 + 4369729) & 255 | 32) & 4294967295;
                         *(_v1304 + 4370016) = _v1304 - 32 & 4294967295;
                    }
                }
            } else {
                __eflags = _v1304 - 90;
                if(_v1304 > 90) {
                    goto L29;
                } else {
                     *(_v1304 + 4369729) = ( *(_v1304 + 4369729) & 255 | 16) & 4294967295;
                     *(_v1304 + 4370016) = _v1304 + 32 & 4294967295;
                }
            }
L33:
            _t104 = _v1304 + 1;
            _v1304 = _v1304 + 1;
        }
        L00411087();
        return;
    } else {
        _v1304 = 0;
        while(_v1304 < 256) {
             *(__ebp + _v1304 + -1296) = _t128 & 4294967295;
            _v1304 = _v1304 + 1;
        }
    }
    goto L25;
}

L0041D200(signed int _a4, signed int _a8, signed int _a12, intOrPtr _a16)
{
    signed int _v8;
    signed int _v12;
    signed int _v13;
    signed int _v20;
    _unknown_ __ebp;
    _unknown_ _t62;
    _unknown_ _t84;
    _unknown_ _t86;
    _unknown_ _t87;
    signed int _t90;

    _v8 = _a8;
    if(_a16 != 0) {
         *_v8 = 45;
        _v8 = _v8 + 1;
        _a4 =  ~_a4;
    }
    _v20 = _v8;
    while(1) {
L3:
        _v12 = _a4 % _a12;
        _a4 = _a4 / _a12;
        if(_v12 <= 9) {
             *_v8 = _v12 + 48 & 4294967295;
            _v8 = _v8 + 1;
        } else {
             *_v8 = _v12 + 87 & 4294967295;
            _v8 = _v8 + 1;
        }
        if(_a4 <= 0) {
            break;
        }
    }
    _t90 = _v8;
     *_t90 = 0;
    _v8 = _v8 - 1;
    while(1) {
L8:
        _v13 = _t90 & 4294967295;
         *_v8 = _t90 & 4294967295;
         *_v20 = _v20 & 4294967295;
        _t90 = _v8 - 1;
        _v8 = _t90;
        _v20 = _v20 + 1;
        if(_v20 >= _v8) {
            break;
        }
    }
    return;
}

L0041D3E0(_unknown_ __eax, _unknown_ __edx, signed int _a4, signed int _a8, signed int _a12, intOrPtr _a16, intOrPtr _a20)
{
    signed int _v8;
    intOrPtr _v12;
    signed int _v13;
    signed int _v20;
    _unknown_ __ebp;
    _unknown_ _t56;
    _unknown_ _t73;
    _unknown_ _t86;
    _unknown_ _t89;
    signed int _t92;
    signed int _t100;

    _v8 = _a12;
    _t98 = _a20;
    if(_a20 != 0) {
         *_v8 = 45;
        _v8 = _v8 + 1;
        asm("adc ecx, 0x0");
        _a4 =  ~_a4;
        _a8 =  ~_a8;
    }
    _v20 = _v8;
    while(1) {
L3:
        _v12 = L004115A0(__esp, _t98, _a4, _a8, _a16, 0);
        _a4 = L00411555(__esp, _t98, _a4, _a8, _a16, 0);
        _a8 = 0;
        if(_v12 <= 9) {
             *_v8 = _v12 + 48 & 4294967295;
            _v8 = _v8 + 1;
        } else {
             *_v8 = _v12 + 87 & 4294967295;
            _v8 = _v8 + 1;
        }
        _t100 = _a8;
        if(_t100 <= 0 && (_t100 < 0 || _a4 <= 0)) {
            break;
        }
    }
    _t92 = _v8;
     *_t92 = 0;
    _v8 = _v8 - 1;
    while(1) {
L10:
        _v13 = _t92 & 4294967295;
         *_v8 = _t92 & 4294967295;
         *_v20 = _v20 & 4294967295;
        _t92 = _v8 - 1;
        _v8 = _t92;
        _v20 = _v20 + 1;
        if(_v20 >= _v8) {
            break;
        }
    }
    return;
}

L0041DC20(_unknown_ __ecx, intOrPtr _a4)
{
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t14;

    _push(__ecx);
    _v8 = 4361104;
    while( *((intOrPtr*)(_v8 + 4)) != _a4) {
        _v8 = _v8 + 12;
        if(_v8 >=  *4361232 *  *4361232 + 4361104) {
            if(_v8 >=  *4361232 *  *4361232 + 4361104) {
                return 0;
            }
            if( *((intOrPtr*)(_v8 + 4)) != _a4) {
                return 0;
            }
            return _v8;
        }
    }
}

L0041EDD0(char* _a4, intOrPtr _a8)
{
    char* _v8;
    intOrPtr _v12;
    _unknown_ __ebp;

    _v12 = _a8;
    _v8 = _a4;
    while(1) {
        _v12 = _v12 - 1;
        if(_v12 == 0) {
            break;
        }
        if( *_v8 == 0) {
            return _a8 - _v12 - 1;
        }
        _v8 = _v8 + 1;
    }
    return _a8 - _v12 - 1;
}

L00420EC0(_unknown_ __eax, _unknown_ __ecx, _unknown_ __eflags, signed char _a4, signed int _a8, intOrPtr* _a12)
{
    signed int _v8;
    _unknown_ __ebp;
    _unknown_ _t28;
    _unknown_ _t29;
    signed int _t31;
    _unknown_ _t40;

    _push(__ecx);
    if(__eflags == 0 ||  *((intOrPtr*)(_a8 + 8)) != 0) {
         *((intOrPtr*)(_a8 + 4)) =  *((intOrPtr*)(_a8 + 4)) - 1;
        _t31 = _a8;
        __eflags =  *((intOrPtr*)(_t31 + 4));
        if( *((intOrPtr*)(_t31 + 4)) < 0) {
            _v8 = L004114AB(_a4, _a8);
        } else {
             *( *_a8) = _t31 & 4294967295;
            _v8 = _a4 & 255;
            _t33 =  &(( *_a8)[0]);
             *_a8 =  &(( *_a8)[0]);
        }
        __eflags = _v8 - 255;
        if(_v8 != 255) {
             *_a12 =  *_a12 + 1;
            return;
        }
         *_a12 = -1;
        return;
    }
     *_a12 =  *_a12 + 1;
    return;
}

L00420F90(_unknown_ _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr* _a16)
{
    _unknown_ __ebp;
    intOrPtr _t12;

    while(1) {
        _t12 = _a8 - 1;
        _a8 = _t12;
        _t15 = _a8;
        if(_a8 <= 0) {
            break;
        }
        L00420EC0(_a12, _t12, _t15, _t12, _a12, _a16);
        if( *_a16 == 255) {
            return ;
        }
    }
    return;
}

L00420FE0(intOrPtr _a4, signed int _a8, intOrPtr _a12, intOrPtr* _a16)
{
    signed int _v5;
    _unknown_ __ebp;
    _unknown_ _t22;
    signed int _t23;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t40;

    _push(_t25);
    if(_t40 == 0 ||  *((intOrPtr*)(_a12 + 8)) != 0) {
        while(1) {
L3:
            _t23 = _a8;
            _a8 = _a8 - 1;
            __eflags = _t23;
            if(__eflags <= 0) {
                break;
            }
            goto L4;
        }
        return;
    } else {
         *_a16 =  *_a16 + _a8;
        return;
    }
L4:
    _v5 = _t23 & 4294967295;
    L00420EC0(_t23, _a16, __eflags, _t23, _a12, _a16);
    _a4 = _a4 + 1;
    __eflags =  *_a16 - 255;
    if( *_a16 == 255) {
        return ;
    }
    goto L3;
}

L00421070(intOrPtr* _a4)
{
    _unknown_ __ebp;

     *_a4 =  *_a4 + 4;
    return  *((intOrPtr*)( *_a4 - 4));
}

L00421090(intOrPtr* _a4)
{
    _unknown_ __ebp;
    _unknown_ _t13;

     *_a4 =  *_a4 + 8;
    return  *((intOrPtr*)( *_a4 - 8));
}

L004210C0(intOrPtr* _a4)
{
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t10;

     *_a4 =  *_a4 + 4;
    return;
}

L00422AA0(_unknown_ __eax, intOrPtr _a4)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    _unknown_ __ebp;
    _unknown_ _t32;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t41;
    _unknown_ _t43;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t54;
    _unknown_ _t55;
    intOrPtr _t61;

    _v8 = 0;
    _v16 = 0;
    _v12 = 0;
    while(_v12 <  *4369536) {
        _t61 =  *((intOrPtr*)( *4364596 + _v12 * 4));
        if(_t61 != 0 && _t61 != 0) {
            if(_a4 != 1) {
                __eflags = _a4;
                if(__eflags == 0 && __eflags != 0) {
                    _t43 = L00411550( *((intOrPtr*)( *4364596 + _v12 * 4)),  *((intOrPtr*)( *4364596 + _v12 * 4)));
                    __eflags = _t43 - 255;
                    if(_t43 == 255) {
                        _v16 = -1;
                    }
                }
            } else {
                if(L00411550( *4364596,  *((intOrPtr*)( *4364596 + _v12 * 4))) != 255) {
                    _v8 = _v8 + 1;
                }
            }
        }
        _v12 = _v12 + 1;
    }
}

L00422AA0(_unknown_ __eax, intOrPtr _a4)
{
    signed int _v8;
    signed int _v12;
    signed int _v16;
    _unknown_ __ebp;
    _unknown_ _t32;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t41;
    _unknown_ _t43;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t54;
    _unknown_ _t55;
    intOrPtr _t61;

    _v8 = 0;
    _v16 = 0;
    _v12 = 0;
    while(_v12 <  *4369536) {
        _t61 =  *((intOrPtr*)( *4364596 + _v12 * 4));
        if(_t61 != 0 && _t61 != 0) {
            if(_a4 != 1) {
                __eflags = _a4;
                if(__eflags == 0 && __eflags != 0) {
                    _t43 = @rec 0x00411550@L00411550@( *((intOrPtr*)( *4364596 + _v12 * 4)),  *((intOrPtr*)( *4364596 + _v12 * 4)));
                    __eflags = _t43 - 255;
                    if(_t43 == 255) {
                        _v16 = -1;
                    }
                }
            } else {
                if(@rec 0x00411550@L00411550@( *4364596,  *((intOrPtr*)( *4364596 + _v12 * 4))) != 255) {
                    _v8 = _v8 + 1;
                }
            }
        }
        _v12 = _v12 + 1;
    }
}

// Statistics:
//    1507 Register nodes
//    2323 Temporaries nodes
//     309 Casts
//    4228 Statements
//     498 Labels
//     317 Gotos
//     156 Blocks
//   25420 Nodes
//      99 Assembly nodes
//    1113 Unknown Types


