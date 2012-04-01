L00411023(_unknown_ __eax, _unknown_ __ecx)
{
    __ecx = __ecx;
    __eax = __eax;
    if(__ecx ==  *4288512) {
        asm("rep ret ");
    }
}

L0041103C()
{
    return  *4289852;
}

L00411055()
{
    struct _FILETIME _v12;
    signed int _v16;
    signed int _v24;
    intOrPtr _v28;
    _unknown_ __ebp;
    _unknown_ _t37;
    _unknown_ _t43;
    _unknown_ _t54;

    _v12 = 0;
    _v12.dwHighDateTime = 0;
    __eflags =  *4288512 - -1153374642;
    if(__eflags == 0 || __eflags == 0) {
        GetSystemTimeAsFileTime( &_v12);
        _v16 = _v12;
        _v16 = _v16 ^ _v12.dwHighDateTime;
        _v16 = GetCurrentProcessId() ^ _v16;
        _v16 = GetCurrentThreadId() ^ _v16;
        _v16 = GetTickCount() ^ _v16;
        QueryPerformanceCounter( &_v28);
        _v16 = _v16 ^ _v28;
        _v16 = _v16 ^ _v24;
        __eflags = _v16 - -1153374642;
        if(__eflags != 0) {
            if(__eflags == 0) {
                _v16 = _v16 << 16 | _v16;
            }
        } else {
            _v16 = -1153374641;
        }
         *4288512 = _v16;
         *4288516 =  !_v16;
        return;
    }
     *4288516 =  !( *4288512);
    return;
}

L00411096()
{
    intOrPtr _v0;
    intOrPtr _v8;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    intOrPtr _t14;
    intOrPtr _t15;
    _unknown_ _t16;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    intOrPtr _t22;
    intOrPtr* _t24;
    _unknown_ _t28;
    intOrPtr _t29;
    _unknown_ _t30;
    intOrPtr* _t31;

    _push(_t21);
    _push(_t19);
    _push(_t30);
    _push(_t28);
    _t29 = 0;
    _t31 = _t24;
    _t20 = _t21;
    _v8 = 0;
    if( *_t31 > 0) {
        while(1) {
L2:
            _t15 =  *((intOrPtr*)(_t31 + 4));
            _t22 =  *((intOrPtr*)(_t15 + _t29));
            _t16 = _t15 + _t29;
            if( *((intOrPtr*)(_t22 + _t20 - 4)) != -858993460 ||  *((intOrPtr*)( *((intOrPtr*)(_t16 + 4)) + _t22 + _t20)) != -858993460) {
                _push( *((intOrPtr*)( *((intOrPtr*)(_t31 + 4)) + _t29 + 8)));
                _push(_v0);
                L004110F0();
                __esp = __esp + 8;
            }
            _t14 = _v8 + 1;
            _t29 = _t29 + 12;
            _v8 = _t14;
            if(_t14 >=  *_t31) {
                break;
            }
        }
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L004110AA()
{
    goto __imp__strcat;
}

L004110B9()
{
    goto __imp___initterm;
}

L004110BE()
{
    goto __imp__strlen;
}

L004110C3(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    signed int _v8;
    char _v92;
    signed int _v104;
    _unknown_ _v116;
    char _v316;
    _unknown_ _t65;
    _unknown_ _t69;
    _unknown_ _t72;
    _unknown_ _t79;
    _unknown_ _t93;
    _unknown_ _t96;
    _unknown_ _t97;
    _unknown_ _t104;
    _unknown_ _t109;
    signed int _t112;
    _unknown_ _t113;
    _unknown_ _t116;
    _unknown_ _t118;
    _unknown_ _t119;
    _unknown_ _t120;
    _unknown_ _t121;
    _unknown_ _t122;

    _push(__ebx);
    _push(_t119);
    _push(_t116);
    _push(78 << 2);
    _push(-858993460);
    _push( &_v316);
    memset();
    __esp = __esp + 12;
    _v8 =  *4288512 ^ __ebp;
    _t120 = __esp;
    _push(_a8);
    sprintf( &_v92, "%08lX:");
    __esp = __esp + 4;
    L00411168(_t120 - __esp);
    if(_a12 > 16) {
        _a12 = 16;
    }
    _v104 = 0;
    while(_v104 < _a12) {
        _t122 = __esp;
        _push( *(_a4 + _v104) & 255);
        _push(" %02lX");
        _t112 = _v104 * _v104;
        _push(__ebp + _t112 - 79);
        sprintf();
        __esp = __esp + 12;
        L00411168(_t122 - __esp);
        _v104 = _v104 + 1;
    }
}

L004110C8()
{
    goto __imp__strcpy;
}

L004110E1(intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebp;
    _unknown_ _t31;

    _v8 = _a4 +  *((intOrPtr*)(_a4 + 60));
    _v12 = 0;
    _v16 = _v8 + ( *(_v8 + 20) & 65535) + 24;
    while(_v12 < ( *(_v8 + 6) & 65535)) {
        if(_a8 >=  *((intOrPtr*)(_v16 + 12))) {
            if(_a8 <  *((intOrPtr*)(_v16 + 12)) +  *((intOrPtr*)(_v16 + 8))) {
                return _v16;
            }
        }
        _v12 = _v12 + 1;
        _v16 = _v16 + 40;
    }
}

L004110F0()
{
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t40;
    _unknown_ _t43;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t56;
    _unknown_ _t57;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t61;
    _unknown_ _t65;
    _unknown_ _t67;
    _unknown_ _t71;
    _unknown_ _t72;
    _unknown_ _t73;

}

L004110FF()
{
    goto __imp___crt_debugger_hook;
}

L00411104(signed short* _a4)
{
    signed short* _v8;
    signed short* _v12;
    intOrPtr* _v16;
    _unknown_ __ebp;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;

    _v12 = _a4;
    if(( *_v12 & 65535) != 23117) {
        return 0;
    }
    _v16 = _v12 + _v12[0x1e];
    if( *_v16 != 17744) {
        return 0;
    }
    _v8 = _v16 + 24;
    if(( *_v8 & 65535) == 267) {
        return 1;
    }
    return 0;
}

L0041111D()
{
    _unknown_ __ebp;

    return  *fs:0x18];
}

L00411163(char* _a4)
{
    signed int _v8;
    char _v28;
    intOrPtr _v40;
    struct _IO_FILE* _v52;
    intOrPtr _v88;
    char _v108;
    struct _IO_FILE* _v120;
    char _v316;
    _unknown_ _t26;
    char* _t29;
    struct _IO_FILE* _t31;
    _unknown_ _t34;
    int _t35;
    int _t37;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t46;
    char* _t51;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;

    _push(__ebx);
    _push(_t56);
    _push(_t53);
    _push(78 << 2);
    _push(-858993460);
    _push( &_v316);
    memset();
    __esp = __esp + 12;
    _v8 =  *4288512 ^ __ebp;
    _t29 =  &_v108;
    L00411860(_a4, _t29);
    if(_t29 == 0) {
        _t31 = fopen(_a4, "rb");
        __eflags = __esp - __esp;
        L00411168(__esp - __esp);
        _v52 = _t31;
        __eflags = _v52;
        if(_v52 != 0) {
            _v40 = 0;
            while(1) {
                __eflags = _v40 - _v88;
                if(_v40 >= _v88) {
                    break;
                }
                _t37 = fread( &_v28, 1, 16, _v52);
                __eflags = __esp - __esp;
                L00411168(__esp - __esp);
                _v120 = _t37;
                __eflags = _v120;
                if(_v120 != 0) {
                    _push(_v120);
                    _push(_v40);
                    _t51 =  &_v28;
                    _push(_t51);
                    L004110C3();
                    __esp = __esp + 12;
                    _v40 = _v40 + _v120;
                    continue;
                } else {
                    break;
                }
                goto L11;
            }
            fclose(_v52);
            __eflags = __esp - __esp;
            L00411168(__esp - __esp);
            _t35 = 0;
            goto L11;
        }
        perror(_a4);
        __eflags = __esp - __esp;
        L00411168(__esp - __esp);
        _t35 = 1;
    } else {
        perror(_a4);
        L00411168(__esp - __esp);
        _t35 = 1;
    }
L11:
    L00411023(__ebx, __esi, __edi, __edx, __eax, L00411096, _t35, _t51);
    __esp = __esp + 312;
    L00411168(__ebp - __esp);
    return;
}

L00411168(_unknown_ __eflags)
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
    L004111E0(_v0, 0);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    _pop(__edx);
    _pop(__eax);
    __esp = _t5;
    _pop(__ebp);
    return;
}

L0041116D(intOrPtr _a4, intOrPtr _a8)
{
    signed int _v12;
    intOrPtr _v24;
    char _v220;
    _unknown_ _t16;
    _unknown_ _t18;
    signed int _t19;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t28;

    _push(__ebx);
    _push(__esi);
    _push(_t26);
    _push(54 << 2);
    _push(-858993460);
    _push( &_v220);
    memset();
    __esp = __esp + 12;
    _v24 = 0;
    _v12 = 1;
    while(1) {
        __eflags = _v12 - _a4;
        if(_v12 >= _a4) {
            break;
        }
        _t19 = _v12;
        L00411163( *((intOrPtr*)(_a8 + _t19 * 4)));
        _v24 = _t19 + _v24;
        _v12 = _v12 + 1;
    }
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    __esp = __esp + 216;
    __eflags = __ebp - __esp;
    L00411168(__ebp - __esp);
    return;
}

L00411190(signed short _a4, signed int* _a8, char _a12, signed int* _a16, WCHAR* _a20, long _a24)
{
    signed int _v8;
    signed int _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    char _v24;
    _unknown_ _v28;
    signed int _v32;
    char _v36;
    signed int _v40;
    char _v44;
    struct HINSTANCE__* _v68;
    char _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t84;
    intOrPtr _t85;
    intOrPtr* _t86;
    struct HINSTANCE__* _t87;
    _unknown_ _t88;
    _Unknown_base(*)()* _t89;
    intOrPtr* _t90;
    _unknown_ _t92;
    intOrPtr* _t94;
    char* _t95;
    signed int _t98;
    signed int _t100;
    signed int _t105;
    intOrPtr _t107;
    signed int _t109;
    signed int _t111;
    _unknown_ _t116;
    _unknown_ _t117;
    _unknown_ _t118;
    _unknown_ _t120;
    signed int _t121;
    signed int _t130;
    signed int _t137;
    signed int _t140;
    struct HINSTANCE__* _t143;
    int _t163;
    _unknown_ _t164;
    _unknown_ _t166;
    _unknown_ _t168;
    _unknown_ _t170;
    signed int _t171;

    __esp = __esp - 68;
    _push(_t168);
     *_a16 = 0;
    _push(28);
    _push( &_v72);
    _t170 = _a4 - 1;
    _push(_t170);
     *_a8 = 0;
    if(VirtualQuery() != 0) {
        if(GetModuleFileNameW(_v68, _a20, _a24) == 0) {
            goto L2;
        } else {
            _t143 = _v68;
            if(_t143->i != 0x5a4d) {
                goto L2;
            } else {
                _t85 =  *((intOrPtr*)(_t143 + 60));
                if(_t85 <= 0) {
                    goto L2;
                } else {
                    _t86 = _t85 + _t143;
                    if( *_t86 != 17744) {
                        goto L2;
                    } else {
                        _t121 =  *(_t86 + 6) & 65535;
                        _push(_t116);
                        _push(_t164);
                        _t87 = ( *(_t86 + 20) & 65535) + _t86 + 24;
                        _t171 = _t170 - _t143;
                        _t166 = 0;
                        _t117 = 0;
                        if(_t121 > 0) {
                            _t87 = _t87 + 12;
                            goto L9;
                            do {
L9:
                                _t163 = _t87->i;
                                if(_t171 < _t163) {
                                    goto L11;
                                } else {
                                    _t166 = _t171 - _t163;
                                    if(_t171 >=  *((intOrPtr*)(_t87 - 4))) {
                                        goto L11;
                                    }
                                }
                                goto L12;
L11:
                                _t117 = _t117 + 1;
                                _t87 = _t87 + 40;
                            } while(_t117 < _t121);
                        }
L12:
                        if(_t117 == _t121) {
L20:
                            _pop(__edi);
                            _pop(__ebx);
                            _pop(__esi);
                            return;
                        } else {
                            _t117 = _t117 + 1;
                            if( *4289880 != 0) {
                                _t87 =  *4289876;
L18:
                                _t89 = GetProcAddress(_t87, "PDBOpenValidate5");
                                _t171 = 0;
                                if(_t89 != 0) {
                                    _push( &_v20);
                                    _push(0);
                                    _push(0);
                                    _push( &_v44);
                                    _push(0);
                                    _push(0);
                                    _push(0);
                                    _push(_a20);
                                     *_t89();
                                    __esp = __esp + 32;
                                    if(_t89 != 0) {
                                        _t90 =  *_v20;
                                        _v32 = 0;
                                         *((intOrPtr*)( *_t90))();
                                        if(_t90 == 20030901) {
                                            _t94 =  *((intOrPtr*)( *_v20 + 28));
                                            _push( &_v28);
                                            _push(4284756);
                                            _push(0);
                                             *_t94();
                                            if(_t94 != 0) {
                                                _push(0);
                                                _push(0);
                                                _push(0);
                                                _t95 =  &_v16;
                                                _push(_t95);
                                                _push(_t166);
                                                _push(_t117);
                                                 *((intOrPtr*)( *((intOrPtr*)( *_v28 + 32))))();
                                                if(_t95 != 0) {
                                                    _v8 = 0;
                                                    _t98 =  *( *_v16 + 104);
                                                    _push( &_v8);
                                                     *_t98();
                                                    if((_t98 & 4294967295) != 0) {
                                                        _t130 = _v8;
                                                        if(_t130 != 0) {
                                                            _t100 =  *( *_t130 + 8);
                                                             *_t100();
                                                            if(_t100 == 0) {
L44:
                                                                _push(_t171);
                                                                _push(0);
                                                                GetProcessHeap();
                                                                _push(_t100);
                                                                HeapFree();
                                                            } else {
                                                                while(1) {
                                                                    _push(0);
                                                                    _push( &_v12);
                                                                    _push( &_v36);
                                                                    _push( &_a4);
                                                                    _t105 =  &_v24;
                                                                    _push(_t105);
                                                                    _push(0);
                                                                     *((intOrPtr*)( *((intOrPtr*)( *_v8 + 12))))();
                                                                    if((_t105 & 4294967295) == 0) {
                                                                        break;
                                                                    }
                                                                    if((_a4 & 65535) != _t117) {
L31:
                                                                        _t100 =  *( *_v8 + 8);
                                                                         *_t100();
                                                                        if(_t100 != 0) {
                                                                            continue;
                                                                        } else {
                                                                            goto L44;
                                                                        }
                                                                    } else {
                                                                        _t107 = _v24;
                                                                        if(_t107 > _t166 || _t166 >= _t107 + _v36) {
                                                                            goto L31;
                                                                        } else {
                                                                            _t109 = _v12;
                                                                            if(_t109 != 0 && _t109 < 536870911) {
                                                                                _push(0 + _t109 * 8);
                                                                                _push(0);
                                                                                GetProcessHeap();
                                                                                _push(_t109);
                                                                                HeapAlloc();
                                                                                _t171 = _t109;
                                                                                if(_t171 != 0) {
                                                                                    _push(_t171);
                                                                                    _push( &_v12);
                                                                                    _push(0);
                                                                                    _push(0);
                                                                                    _push(0);
                                                                                    _t100 =  &_v40;
                                                                                    _push(_t100);
                                                                                     *((intOrPtr*)( *((intOrPtr*)( *_v8 + 12))))();
                                                                                    if((_t100 & 4294967295) != 0) {
                                                                                        _t166 = _t166 - _v24;
                                                                                        if(_t166 >=  *_t171) {
                                                                                            _t137 = _v12;
                                                                                            _t111 = 1;
                                                                                            if(_t137 > _t111) {
                                                                                                _t140 = _t137;
                                                                                                while(_t166 >=  *((intOrPtr*)(_t171 + _t111 * 8))) {
                                                                                                    _t111 = _t111 + 1;
                                                                                                    if(_t111 < _t140) {
                                                                                                        continue;
                                                                                                    }
                                                                                                    goto L42;
                                                                                                }
                                                                                            }
L42:
                                                                                            _push(0);
                                                                                             *_a16 =  *(_t171 + _t111 * 8 - 4) & 16777215;
                                                                                            _push(0);
                                                                                            _push(0);
                                                                                            _push( &_a12);
                                                                                            _push(_a8);
                                                                                            _t100 = _v40;
                                                                                            _push(_t100);
                                                                                             *((intOrPtr*)( *((intOrPtr*)( *_v16 + 112))))();
                                                                                            if((_t100 & 4294967295) != 0) {
                                                                                                _v32 = 1;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    goto L44;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    goto L45;
                                                                }
                                                            }
L45:
                                                             *((intOrPtr*)( *((intOrPtr*)( *_v8))))();
                                                        }
                                                    }
                                                     *((intOrPtr*)( *((intOrPtr*)( *_v16 + 64))))();
                                                }
                                                 *((intOrPtr*)( *((intOrPtr*)( *_v28 + 56))))();
                                            }
                                        }
                                         *((intOrPtr*)( *((intOrPtr*)( *_v20 + 40))))();
                                        _pop(__edi);
                                        _pop(__ebx);
                                        _pop(__esi);
                                        return;
                                        goto L49;
                                    }
                                }
                                goto L20;
                            }
                            if( *4289876 != 0) {
                                goto L20;
                            } else {
                                L00413770();
                                 *4289876 = _t87;
                                if(_t87 == 0) {
                                    goto L20;
                                } else {
                                     *4289880 = 1;
                                    goto L18;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
L2:
        _pop(__esi);
        return 0;
    }
L49:
}

L0041119F(_unknown_ __eax, intOrPtr _a4)
{
    intOrPtr _v8;
    signed int _v12;
    char _v20;
    intOrPtr _v28;
    signed short* _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int __ebp;
    _unknown_ _t27;
    signed int _t29;
    intOrPtr _t36;

    _push(254);
    _push(4287288);
    _push(4264071);
    _push( *fs:0x0]);
    __esp = __esp + -40;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _t29 =  *4288512;
    _v12 = _v12 ^ _t29;
    _push(_t29 ^ __ebp);
     *fs:0x0] =  &_v20;
    _v28 = __esp;
    _v32 = 4194304;
    _v8 = 0;
    if(L00411104(_v32) != 0) {
        _v40 = _a4 - _v32;
        _v36 = L004110E1(_v32, _v40);
        if(_v36 != 0) {
            asm("sbb edx, edx");
            _v56 =  ~( *(_v36 + 36) & -2147483648) + 1;
            _v8 = -2;
            _t36 = _v56;
        } else {
            _v52 = 0;
            _v8 = -2;
            _t36 = _v52;
        }
    } else {
        _v48 = 0;
        _v8 = -2;
        _t36 = _v48;
    }
     *fs:0x0] = _v20;
    _pop(__ecx);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _t36;
}

L004111A9()
{
    goto __imp___amsg_exit;
}

L004111E0(intOrPtr _a4, signed int _a8)
{
    signed int _t8;
    _unknown_ _t9;
    _unknown_ _t12;
    intOrPtr _t13;
    intOrPtr _t15;

    _t8 = _a8;
    if(_t8 <= 4) {
        _t13 =  *((intOrPtr*)(4288520 + _t8 * 4));
        _t15 =  *((intOrPtr*)(_t8 * 4 + "XZA"));
        if(_t13 == 255) {
            return ;
        }
        _push(_t15);
        _push(_t8);
        _push(_t13);
        _push(_a4);
        L004123F0();
        __esp = __esp + 16;
        return;
    }
    _push("Unknown Runtime Check Error\n");
    _push(5);
    _push(1);
    _push(_a4);
    L004123F0();
    __esp = __esp + 16;
    return;
    goto L6;
}

L004111FE()
{
    goto __imp___initterm_e;
}

L00411203()
{
    return  *4289848;
}

L00411860(intOrPtr _a4, intOrPtr _a8)
{
    char _v196;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    _push(__ebx);
    _push(_t13);
    _push(_t10);
    _push(48 << 2);
    _push(-858993460);
    _push( &_v196);
    memset();
    __esp = __esp + 12;
    _t14 = __esp;
    _push(_a8);
    _push(_a4);
    __imp___stat64i32();
    __esp = __esp + 8;
    L00411168(_t14 - __esp);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    __esp = __esp + 192;
    L00411168(__ebp - __esp);
    return;
}

L00411D70(_unknown_ __eax)
{
    long _v8;
    signed int _v12;
    char _v20;
    intOrPtr _v28;
    long _v32;
    long _v36;
    long _v40;
    intOrPtr _v48;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t22;
    signed int _t24;
    long _t29;
    intOrPtr _t30;
    _unknown_ _t31;

    _push(254);
    _push(4287160);
    _push(4264071);
    _push( *fs:0x0]);
    __esp = __esp + -28;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _t24 =  *4288512;
    _v12 = _v12 ^ _t24;
    _push(_t24 ^ __ebp);
     *fs:0x0] =  &_v20;
    _v28 = __esp;
    _v8 = 0;
    _v40 = 0;
    _v36 =  *(L0041111D() + 4);
    _v32 = 0;
    while(1) {
        _t29 = InterlockedCompareExchange(4289904, _v36, 0);
        _v40 = _t29;
        if(_v40 == 0) {
            break;
        }
        if(_v40 != _v36) {
            Sleep(1000);
            continue;
        }
        _v32 = 1;
        break;
    }
    if( *4289888 != 1) {
        if( *4289888 != 0) {
L11:
             *4288864 = 1;
            goto L12;
        }
        goto L8;
    }
    _push(31);
    L004111A9();
    __esp = __esp + 4;
L12:
    if( *4289888 == 1) {
        _push(4280840);
        _push(4280320);
        L004110B9();
        __esp = __esp + 8;
         *4289888 = 2;
    }
    if( *4289888 != 2) {
        _push("_");
        _push(0);
        _push(500);
        _push("f");
        _push(2);
        __imp___CrtDbgReportW();
        __esp = __esp + 20;
        if(_t29 == 1) {
            asm("int3 ");
        }
    }
    if(_v32 == 0) {
        _t29 = InterlockedExchange(4289904, 0);
    }
    if( *4289940 != 0 && L0041119F(_t29, 4289940) != 0) {
        _push(0);
        _push(2);
        _push(0);
         *4289940();
    }
    _push(1);
    __imp___CrtSetCheckCount();
    __esp = __esp + 4;
     *__imp____initenv =  *4288840;
    _t30 =  *4288840;
    _push(_t30);
    L0041116D( *4288836,  *4288844);
    __esp = __esp + 4;
     *4288860 = _t30;
    if( *4288848 == 0) {
        _push( *4288860);
        exit();
    }
    if( *4288864 == 0) {
        __imp___cexit();
    }
    _v8 = -2;
L28:
     *fs:0x0] = _v20;
    _pop(__ecx);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
L8:
     *4289888 = 1;
    _push(4281880);
    _push(4281100);
    L004111FE();
    __esp = __esp + 8;
    if(_t29 == 0) {
        goto L12;
    }
    _v48 = 255;
    _v8 = -2;
    goto L28;
}

L004122D0(intOrPtr _a4)
{
    long _v8;
    signed int _v12;
    char _v20;
    intOrPtr _v28;
    signed char _v29;
    char* _v48;
    intOrPtr _v52;
    long _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    signed int __ebp;
    signed int _t18;
    _unknown_ _t21;

    _push(254);
    _push(4287192);
    _push(4264071);
    _push( *fs:0x0]);
    __esp = __esp - 36;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _t18 =  *4288512;
    _v12 = _v12 ^ _t18;
    _push(_t18 ^ __ebp);
     *fs:0x0] =  &_v20;
    _v28 = __esp;
    _v29 = 0;
    _v56 = 4097;
    _v52 = _a4;
    _v48 =  &_v29;
    _v8 = 0;
    RaiseException(1080890248, 0, 6,  &_v56);
    _v8 = -2;
     *fs:0x0] = _v20;
    _pop(__ecx);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _v29 & 255;
}

L004123F0()
{
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t61;

L1:
    _push(_t41);
    _t37 = L00411203();
    __esp = __esp + 4;
     *((intOrPtr*)(__ebp + -3640)) = _t37;
    goto L2;
L2:
     *((intOrPtr*)(MultiByteToWideChar))(65001, 0, _t58, 255, 0, 0);
    if(_t37 >= 512) {
        goto L5;
    } else {
        goto L3;
    }
L3:
    _push(_t37);
    _t37 = __ebp + -3628;
    _push(_t37);
    _push(255);
    _push(_t58);
    _push(0);
    _push(65001);
     *((intOrPtr*)(MultiByteToWideChar))();
    if(_t37 == 0) {
        goto L5;
    } else {
        goto L4;
    }
L4:
     *((intOrPtr*)(__ebp + -3636)) = __ebp + -3628;
    goto L6;
L6:
    _push(4098);
    L004122D0();
    _t59 =  *((intOrPtr*)(__ebp + 16));
    __esp = __esp + 4;
    if(_t37 == 0) {
        goto L9;
    } else {
        goto L7;
    }
L7:
    _t37 =  *((intOrPtr*)(4283260 + _t59 * 4));
    L00412680(_t59, _t37, _t41,  *((intOrPtr*)(__ebp + -3636)));
    if(_t37 != 0) {
        goto L23;
    } else {
        goto L8;
    }
L8:
    goto L10;
L10:
    _t61 =  *((intOrPtr*)(__ebp + -3632));
    if( *((intOrPtr*)(__ebp + -3640)) != 0 || _t61 != 0) {
        goto L12;
    } else {
        goto L22;
    }
L22:
    DebugBreak();
    goto L23;
L23:
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    L00411023(_t37,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
L24:
L12:
    if((_t37 & 4294967295) == 0) {
        goto L14;
    } else {
        goto L13;
    }
L13:
    IsDebuggerPresent();
    if(_t37 != 0) {
        goto L22;
    } else {
        goto L14;
    }
L14:
    _push(260);
    _push(__ebp + -1044);
    _push(__ebp + -3632);
    _push(260);
    _push(__ebp + -524);
    _t42 = _t41 + -5;
    _push(_t41 + -5);
    L00411190();
    __esp = __esp + 24;
    if(_t61 == 0) {
L16:
        _t59 = WideCharToMultiByte;
        _push(0);
        _push(0);
        _push(778);
        _t39 = __ebp + -2604;
        _push(_t39);
        _push(255);
        _push(__ebp + -524);
        _push(0);
        _push(65001);
        _t42 = (char*)("Unknown Filename");
         *((intOrPtr*)(WideCharToMultiByte))();
        if(_t39 != 0) {
L17:
            _t42 = __ebp + -2604;
        }
L18:
        _push(0);
        _push(0);
        _push(778);
        _push(__ebp + -1824);
        _push(255);
        _t40 = __ebp + -1044;
        _push(_t40);
        _push(0);
        _push(65001);
        _t61 = (char*)("Unknown Module Name");
         *((intOrPtr*)(_t59))();
        if(_t40 != 0) {
L19:
            _t61 = __ebp + -1824;
        }
L20:
        _t37 =  *((intOrPtr*)(__ebp + -3632));
        _push( *((intOrPtr*)(__ebp + -3644)));
        _push( *((intOrPtr*)(__ebp + 16)));
        _push((char*)("Run-Time Check Failure #%d - %s"));
        _push(_t61);
        _push(_t37);
        _push(_t42);
        _push( *((intOrPtr*)(__ebp + 12)));
         *((intOrPtr*)(__ebp + -3640))();
    } else {
L15:
        _t37 =  *((intOrPtr*)(__ebp + -3632));
        _push( *((intOrPtr*)(__ebp + -3636)));
        _push(_t59);
        _push((char*)("R"));
        _push(__ebp + -1044);
        _push(_t37);
        _push(__ebp + -524);
        _push( *((intOrPtr*)(__ebp + 12)));
         *((intOrPtr*)(_t61))();
    }
L21:
    __esp = __esp + 28;
    if(_t37 != 1) {
        goto L23;
    } else {
        goto L22;
    }
L9:
    goto L10;
L5:
     *((intOrPtr*)(__ebp + -3636)) = (char*)("R");
    goto L6;
}

L00412680(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    long _v8;
    signed int _v12;
    char _v20;
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
    signed int __ebp;
    signed int _t24;
    _unknown_ _t27;

    _push(254);
    _push(4287224);
    _push(4264071);
    _push( *fs:0x0]);
    __esp = __esp - 36;
    _push(__ebx);
    _push(__esi);
    _push(__edi);
    _t24 =  *4288512;
    _v12 = _v12 ^ _t24;
    _push(_t24 ^ __ebp);
     *fs:0x0] =  &_v20;
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
    _v8 = -2;
     *fs:0x0] = _v20;
    _pop(__ecx);
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return _v29 & 255;
}

L00412A10(signed int* _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    intOrPtr _v8;
    intOrPtr _v12;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t25;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    signed int* _t33;

    _push(__ebx);
    _push(_t32);
    _t33 = _a4;
    _v8 = _a8;
    _push(_t30);
    _t31 = 0;
    _v12 = _a12 - _t33;
    while(1) {
        _t25 = _a16;
        if(_t25 >= 16) {
            _t25 = 16;
        }
        if(_t31 >= _t25) {
            break;
        }
        _push(__ebx & 4294967295 & );
        _push("%.2X ");
        _push(_v8);
         *4289844();
        _v8 = _v8 + 3;
        __esp = __esp + 12;
         *_t33 = __ebx & 4294967295;
        _t31 = _t31 + 1;
        _t33 =  &(_t33[0]);
    }
     *((char*)(_a4 + _t31)) = 0;
     *((char*)(_t31 + _a8 + _t31 * 2)) = 0;
    _pop(__edi);
    _pop(__esi);
    _pop(__ebx);
    return;
}

L00413770()
{
L1:
    __eax = 0;
    L00411023(0,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L23:
L2:
    __eax =  *((intOrPtr*)(4288564));
    _push(__esi);
    __esi = LoadLibraryA;
    _push(__eax);
     *((intOrPtr*)(4289884)) = 1;
     *((intOrPtr*)(LoadLibraryA))();
    if(__eax != 0) {
        goto L22;
    } else {
        goto L3;
    }
L3:
     *((intOrPtr*)(LoadLibraryA))((char*)("ADVAPI32.DLL"));
    __esi = __eax;
    if(__esi != 0) {
        goto L5;
    } else {
L4:
        _pop(__esi);
        __ecx =  *((intOrPtr*)(__ebp - 4));
        __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
        L00411023(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
        __esp = __ebp;
        _pop(__ebp);
        return;
        goto L23;
    }
L5:
    _push(__ebx);
    __ebx = GetProcAddress;
     *((intOrPtr*)(GetProcAddress))(__esi, (char*)("RegOpenKeyExA"));
     *((intOrPtr*)(__ebp + -276)) = __eax;
    if(__eax != 0) {
        goto L7;
    } else {
        goto L6;
    }
L6:
    _pop(__ebx);
    _pop(__esi);
    __ecx =  *((intOrPtr*)(__ebp - 4));
    __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
    L00411023(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L7:
    _push(__edi);
     *((intOrPtr*)(GetProcAddress))(__esi, (char*)("RegQueryValueExA"));
    __edi = __eax;
    if(__edi == 0) {
        goto L21;
    } else {
        goto L8;
    }
L8:
     *((intOrPtr*)(GetProcAddress))(__esi, (char*)("RegCloseKey"));
    __ebx = __eax;
    if(__ebx == 0) {
        goto L21;
    } else {
        goto L9;
    }
L9:
    __ecx = __ebp + -272;
    _push(__ebp + -272);
    _push(1);
    _push(0);
    _push((char*)("SOFTWARE\Microsoft\VisualStudio\9.0\Setup\VS"));
    _push(-2147483646);
     *((intOrPtr*)(__ebp + -276))();
    if(__eax != 0) {
        goto L20;
    } else {
        goto L10;
    }
L10:
    __ecx =  *((intOrPtr*)(__ebp + -272));
    __edx = __ebp + -268;
    _push(__ebp + -268);
    _push(__eax);
    __eax = __ebp + -280;
    _push(__eax);
    _push(0);
    _push((char*)("EnvironmentDirectory"));
    _push( *((intOrPtr*)(__ebp + -272)));
     *((intOrPtr*)(__edi))();
    if(__eax != 0) {
        goto L20;
    } else {
        goto L11;
    }
L11:
    __eax =  *((intOrPtr*)(__ebp + -268));
    2147483647 = 2147483647 - __eax;
    if(2147483647 - __eax < 13 || __eax >= 260) {
        goto L20;
    } else {
        goto L13;
    }
L13:
    __eax = __ebp + -268;
    _push(__ebp + -268);
    __eax =  *((intOrPtr*)(__ebp + -272));
    __ecx = __ebp + -264;
    _push(__ebp + -264);
    __edx = __ebp + -280;
    _push(__edx);
    _push(0);
    _push((char*)("EnvironmentDirectory"));
    _push(__eax);
     *((intOrPtr*)(__edi))();
    __ecx =  *((intOrPtr*)(__ebp + -272));
    _push( *((intOrPtr*)(__ebp + -272)));
    __edi = __eax;
     *((intOrPtr*)(__ebx))();
    FreeLibrary(__esi);
    if(__eax != 0) {
        goto L21;
    } else {
        goto L14;
    }
L14:
    __ecx =  *((intOrPtr*)(__ebp + -268));
    if( *((intOrPtr*)(__ebp + __ecx + -266)) == (__eax & 4294967295)) {
L16:
        __ecx = __ecx - 1;
         *((intOrPtr*)(__ebp + -268)) = __ecx;
    } else {
L15:
         *((intOrPtr*)(__ebp + __ecx + -265)) = __eax & 4294967295;
    }
L17:
    __esi =  *((intOrPtr*)(4288564));
    __eax = 0;
    __ecx = __ebp + __ecx + -264;
    goto L18;
L18:
     *((intOrPtr*)(__ecx + __eax)) = __edx & 4294967295;
    __eax = __eax + 1;
    if(__eax <= 11) {
        goto L18;
    } else {
        goto L19;
    }
L19:
    __eax = __ebp + -264;
    LoadLibraryA(__eax);
    _pop(__edi);
    _pop(__ebx);
    _pop(__esi);
    __ecx =  *((intOrPtr*)(__ebp - 4));
    __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
    L00411023(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L21:
    _pop(__edi);
    __eax = 0;
    _pop(__ebx);
    goto L22;
L22:
    __ecx =  *((intOrPtr*)(__ebp - 4));
    __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
    _pop(__esi);
    L00411023(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L20:
    __eax = FreeLibrary(__esi);
    goto L21;
}

L00413770()
{
L1:
    __eax = 0;
    @rec 0x00411023@L00411023@(0,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L23:
L2:
    __eax =  *((intOrPtr*)(4288564));
    _push(__esi);
    __esi = @rec 0x00000000@LoadLibraryA@;
    _push(__eax);
     *((intOrPtr*)(4289884)) = 1;
     *((intOrPtr*)(@rec 0x00000000@LoadLibraryA@))();
    if(__eax != 0) {
        goto L22;
    } else {
        goto L3;
    }
L3:
     *((intOrPtr*)(@rec 0x00000000@LoadLibraryA@))((char*)("ADVAPI32.DLL"));
    __esi = __eax;
    if(__esi != 0) {
        goto L5;
    } else {
L4:
        _pop(__esi);
        __ecx =  *((intOrPtr*)(__ebp - 4));
        __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
        @rec 0x00411023@L00411023@(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
        __esp = __ebp;
        _pop(__ebp);
        return;
        goto L23;
    }
L5:
    _push(__ebx);
    __ebx = @rec 0x00000000@GetProcAddress@;
     *((intOrPtr*)(@rec 0x00000000@GetProcAddress@))(__esi, (char*)("RegOpenKeyExA"));
     *((intOrPtr*)(__ebp + -276)) = __eax;
    if(__eax != 0) {
        goto L7;
    } else {
        goto L6;
    }
L6:
    _pop(__ebx);
    _pop(__esi);
    __ecx =  *((intOrPtr*)(__ebp - 4));
    __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
    @rec 0x00411023@L00411023@(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L7:
    _push(__edi);
     *((intOrPtr*)(@rec 0x00000000@GetProcAddress@))(__esi, (char*)("RegQueryValueExA"));
    __edi = __eax;
    if(__edi == 0) {
        goto L21;
    } else {
        goto L8;
    }
L8:
     *((intOrPtr*)(@rec 0x00000000@GetProcAddress@))(__esi, (char*)("RegCloseKey"));
    __ebx = __eax;
    if(__ebx == 0) {
        goto L21;
    } else {
        goto L9;
    }
L9:
    __ecx = __ebp + -272;
    _push(__ebp + -272);
    _push(1);
    _push(0);
    _push((char*)("SOFTWARE\Microsoft\VisualStudio\9.0\Setup\VS"));
    _push(-2147483646);
     *((intOrPtr*)(__ebp + -276))();
    if(__eax != 0) {
        goto L20;
    } else {
        goto L10;
    }
L10:
    __ecx =  *((intOrPtr*)(__ebp + -272));
    __edx = __ebp + -268;
    _push(__ebp + -268);
    _push(__eax);
    __eax = __ebp + -280;
    _push(__eax);
    _push(0);
    _push((char*)("EnvironmentDirectory"));
    _push( *((intOrPtr*)(__ebp + -272)));
     *((intOrPtr*)(__edi))();
    if(__eax != 0) {
        goto L20;
    } else {
        goto L11;
    }
L11:
    __eax =  *((intOrPtr*)(__ebp + -268));
    2147483647 = 2147483647 - __eax;
    if(2147483647 - __eax < 13 || __eax >= 260) {
        goto L20;
    } else {
        goto L13;
    }
L13:
    __eax = __ebp + -268;
    _push(__ebp + -268);
    __eax =  *((intOrPtr*)(__ebp + -272));
    __ecx = __ebp + -264;
    _push(__ebp + -264);
    __edx = __ebp + -280;
    _push(__edx);
    _push(0);
    _push((char*)("EnvironmentDirectory"));
    _push(__eax);
     *((intOrPtr*)(__edi))();
    __ecx =  *((intOrPtr*)(__ebp + -272));
    _push( *((intOrPtr*)(__ebp + -272)));
    __edi = __eax;
     *((intOrPtr*)(__ebx))();
    @rec 0x00000000@FreeLibrary@(__esi);
    if(__eax != 0) {
        goto L21;
    } else {
        goto L14;
    }
L14:
    __ecx =  *((intOrPtr*)(__ebp + -268));
    if( *((intOrPtr*)(__ebp + __ecx + -266)) == (__eax & 4294967295)) {
L16:
        __ecx = __ecx - 1;
         *((intOrPtr*)(__ebp + -268)) = __ecx;
    } else {
L15:
         *((intOrPtr*)(__ebp + __ecx + -265)) = __eax & 4294967295;
    }
L17:
    __esi =  *((intOrPtr*)(4288564));
    __eax = 0;
    __ecx = __ebp + __ecx + -264;
    goto L18;
L18:
     *((intOrPtr*)(__ecx + __eax)) = __edx & 4294967295;
    __eax = __eax + 1;
    if(__eax <= 11) {
        goto L18;
    } else {
        goto L19;
    }
L19:
    __eax = __ebp + -264;
    @rec 0x00000000@LoadLibraryA@(__eax);
    _pop(__edi);
    _pop(__ebx);
    _pop(__esi);
    __ecx =  *((intOrPtr*)(__ebp - 4));
    __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
    @rec 0x00411023@L00411023@(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L21:
    _pop(__edi);
    __eax = 0;
    _pop(__ebx);
    goto L22;
L22:
    __ecx =  *((intOrPtr*)(__ebp - 4));
    __ecx =  *((intOrPtr*)(__ebp - 4)) ^ __ebp;
    _pop(__esi);
    @rec 0x00411023@L00411023@(__eax,  *((intOrPtr*)(__ebp - 4)) ^ __ebp);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L23;
L20:
    __eax = @rec 0x00000000@FreeLibrary@(__esi);
    goto L21;
}

// Statistics:
//     194 Register nodes
//     243 Temporaries nodes
//      37 Casts
//    1019 Statements
//      79 Labels
//      25 Gotos
//      63 Blocks
//    2188 Nodes
//       3 Assembly nodes
//     147 Unknown Types


