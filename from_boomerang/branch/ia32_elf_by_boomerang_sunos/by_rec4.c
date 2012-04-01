int atexit(_Unknown_base(*)()* __func)
{// addr = 0x080487B0
    goto __imp__atexit;
}

__fpstart()
{// addr = 0x080487C0
    goto __imp____fpstart;
}

void exit(int __status)
{// addr = 0x080487D0
    goto __imp__exit;
}

int scanf(char* format)
{// addr = 0x080487E0
    goto __imp__scanf;
}

int printf(char* format)
{// addr = 0x080487F0
    goto __imp__printf;
}

void* malloc(int __size)
{// addr = 0x08048800
    goto __imp__malloc;
}

void free(void* __ptr)
{// addr = 0x08048810
    goto __imp__free;
}

void abort()
{// addr = 0x08048820
    goto __imp__abort;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x08048830
    goto __imp__memset;
}

L080488B0()
{
    _unknown_ __ebp;
    intOrPtr* _t6;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;

    _push(_t9);
    L1();
    _pop(__ebx);
    _t10 = _t9 + 7431;
    while(1) {
        _t6 =  *((intOrPtr*)(_t10 + 204));
        if( *_t6 == "/usr/lib/ld.so.1") {
            break;
        }
         *((intOrPtr*)(_t10 + 204)) = _t6 + "/lib/ld.so.1";
         *((intOrPtr*)( *_t6))();
    }
    _push(_t10 + 224);
    __deregister_frame_info(_t10);
    return;
}

L080488B9()
{
    intOrPtr* _t6;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t10 = _t9 + 7431;
    while(1) {
        _t6 =  *((intOrPtr*)(_t10 + 204));
        if( *_t6 == "/usr/lib/ld.so.1") {
            break;
        }
         *((intOrPtr*)(_t10 + 204)) = _t6 + "/lib/ld.so.1";
         *((intOrPtr*)( *_t6))();
    }
    _push(_t10 + 224);
    __deregister_frame_info(_t10);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048908()
{
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _push(_t6);
    L1();
    _pop(__ebx);
    _t7 = _t6 + 7343;
    _push(_t7 + 1776);
    _push(_t7 + 224);
    __register_frame_info(_t7);
    return;
}

L08048911()
{
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _pop(__ebx);
    _t7 = _t6 + 7343;
    _push(_t7 + 1776);
    _push(_t7 + 224);
    __register_frame_info(_t7);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

main()
{// addr = 0x08048948
    char _v20;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    char* _t38;
    _unknown_ _t39;
    char* _t40;
    _unknown_ _t50;

    __esp = __esp - "/ld.so.1";
    _push(_t39);
    _push(_t37);
    _t38 =  &M00000005;
    _t40 = _t38;
    _push(__ebp - "/lib/ld.so.1");
    _push(134518056);
    scanf();
    _push(__ebp - "/ld.so.1");
    scanf(134518056);
    __esp = __esp + 12;
    if( *((intOrPtr*)(__ebp - "/lib/ld.so.1")) == _t38) {
        _push("Equal\n");
        printf();
        __esp = __esp + "/lib/ld.so.1";
    }
    if( *((intOrPtr*)(__ebp - "/lib/ld.so.1")) == _t38) {
L5:
        _push("Less or Equal\n");
        printf();
        __esp = __esp + "/lib/ld.so.1";
        if( *((intOrPtr*)(__ebp - "/lib/ld.so.1")) > _t38) {
            goto L7;
        } else {
            goto L6;
        }
    } else {
        _push("Not Equal\n");
        printf();
        __esp = __esp + "/lib/ld.so.1";
        if( *((intOrPtr*)(__ebp - "/lib/ld.so.1")) >= _t38) {
            goto L5;
        } else {
            _push("Greater\n");
            printf();
            __esp = __esp + "/lib/ld.so.1";
            if( *((intOrPtr*)(__ebp - "/lib/ld.so.1")) < _t38) {
L6:
                _push("Greater or Equal\n");
                printf();
                __esp = __esp + "/lib/ld.so.1";
                if( *((intOrPtr*)(__ebp - "/lib/ld.so.1")) > _t38) {
L7:
                    _push("Less\n");
                    printf();
                    __esp = __esp + "/lib/ld.so.1";
                }
                goto L8;
L13:
                if(_t50 >= 0) {
L15:
                    _push(134518198);
                    printf();
                } else {
                    _push("Minus\n");
                    printf();
                    __esp = __esp + "/lib/ld.so.1";
                    if(_t50 < 0) {
                        goto L15;
                    }
L17:
                }
                __esp =  &_v20;
                _pop(__ebx);
                _pop(__esi);
                return 0;
                goto L17;
            } else {
                goto L5;
            }
        }
    }
L8:
    if( *((intOrPtr*)(__ebp - "/ld.so.1")) >= _t40) {
L10:
        _push("Less or Equal Unsigned\n");
        printf();
        __esp = __esp + "/lib/ld.so.1";
        if( *((intOrPtr*)(__ebp - "/ld.so.1")) > _t40) {
            goto L12;
        } else {
            goto L11;
        }
    } else {
        _push("Greater Unsigned\n");
        printf();
        __esp = __esp + "/lib/ld.so.1";
        if( *((intOrPtr*)(__ebp - "/ld.so.1")) < _t40) {
L11:
            _push("Carry Clear\n");
            printf();
            __esp = __esp + "/lib/ld.so.1";
            _t50 =  *((intOrPtr*)(__ebp - "/ld.so.1")) - _t40;
            if(_t50 > 0) {
L12:
                _push("Carry Set\n");
                printf();
                __esp = __esp + "/lib/ld.so.1";
            }
        } else {
            goto L10;
        }
    }
    goto L13;
}

L08048A58(signed int* _a8)
{
    signed int __edi;
    signed int __esi;
    _unknown_ __ebp;
    signed char* _t13;

    __edi = 0;
    __esi = 0;
    while(1) {
        _t13 =  *(__ebp + "/ld.so.1");
        __edx =  *_t13 & 255;
         *(__ebp + "/ld.so.1") =  &(_t13[(char*)( &M00000001)]);
        __edi = __edi | (__edx & 127) << (__esi & 4294967295);
        if((__edx & 4294967295) >= "/usr/lib/ld.so.1") {
            break;
        }
        __esi = __esi +  &M00000007;
    }
     *_a8 = __edi;
    return  *(__ebp + "/ld.so.1");
}

L08048A94(signed int* _a8)
{
    char _v16;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t21;
    _unknown_ _t25;
    signed char* _t26;
    _unknown_ _t27;
    signed int _t28;

    __esp = __esp - "/lib/ld.so.1";
    _push(_t25);
    _push(_t27);
    _t26 =  *(__ebp + "/ld.so.1");
     *(__ebp - "/lib/ld.so.1") = "/usr/lib/ld.so.1";
    __ecx =  *(__ebp - "/lib/ld.so.1");
    while(1) {
L1:
        _t28 =  *_t26 & 255;
        _t26 =  &(_t26[(char*)( &M00000001)]);
         *(__ebp - "/lib/ld.so.1") =  *(__ebp - "/lib/ld.so.1") | (_t28 & 127) << (__ecx & 4294967295);
        __ecx = __ecx +  &M00000007;
        if((_t28 & 4294967295) >= "/usr/lib/ld.so.1") {
            break;
        }
    }
    if(__ecx <= 31 && (_t28 & 64) != "/usr/lib/ld.so.1") {
         *(__ebp - "/lib/ld.so.1") =  *(__ebp - "/lib/ld.so.1") | -1 << (__ecx & 4294967295);
    }
     *_a8 =  *(__ebp - "/lib/ld.so.1");
    __esp =  &_v16;
    _pop(__esi);
    _pop(__edi);
    return _t26;
}

L08048AF0(signed int _a8, intOrPtr _a12)
{
    char _v20;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t27;
    intOrPtr _t30;
    _unknown_ _t33;

    __esp = __esp - "/ld.so.1";
    _push(_t25);
    _push(_t27);
    __edx = _a8;
    _t28 =  *((intOrPtr*)(__ebp + "/ld.so.1"));
     *((intOrPtr*)(_t28 + __edx * "/lib/ld.so.1")) = _a12;
    if(__edx != "/usr/lib/ld.so.1") {
        __ecx = _t28 + __edx * "/lib/ld.so.1";
        while(1) {
            _t25 =  *__ecx;
             *((intOrPtr*)(__ebp - "/lib/ld.so.1")) = _t25;
            _t30 =  *((intOrPtr*)( *((intOrPtr*)(__ebp + "/ld.so.1")) + __edx * "/lib/ld.so.1" - "/lib/ld.so.1"));
             *((intOrPtr*)(__ebp - "/ld.so.1")) = _t30;
            _t28 =  *((intOrPtr*)(_t25 + "/ld.so.1")) -  *((intOrPtr*)(_t30 + "/ld.so.1"));
            _t33 =  *((intOrPtr*)(_t25 + "/ld.so.1")) -  *((intOrPtr*)(_t30 + "/ld.so.1")) - "/usr/lib/ld.so.1";
            if(_t33 >= 0) {
                break;
            }
             *__ecx =  *((intOrPtr*)(__ebp - "/ld.so.1"));
            _t25 =  *((intOrPtr*)(__ebp - "/lib/ld.so.1"));
            _t28 =  *((intOrPtr*)(__ebp + "/ld.so.1"));
             *((intOrPtr*)( *((intOrPtr*)(__ebp + "/ld.so.1")) + __edx * "/lib/ld.so.1" - "/lib/ld.so.1")) =  *((intOrPtr*)(__ebp - "/lib/ld.so.1"));
            __ecx = __ecx + -4;
            __edx = __edx -  &M00000001;
            if(_t33 != 0) {
                continue;
            }
            goto L4;
        }
    }
L4:
    __esp =  &_v20;
    _pop(__esi);
    _pop(__edi);
    return;
}

L08048B48()
{
    _unknown_ __ebp;
    _unknown_ _t8;

    __edx =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    __ecx = 0;
    if( *__edx == "/usr/lib/ld.so.1") {
        return __ecx;
    }
    while(1) {
    }
}

L08048B78(_unknown_ _a8, intOrPtr* _a12, intOrPtr* _a16, intOrPtr* _a20)
{
    char _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t40;
    intOrPtr _t41;
    _unknown_ _t42;
    intOrPtr* _t43;

    __esp = __esp - "/ld.so.1";
    _push(_t40);
    _push(_t42);
    _push(_t28);
    L1();
    _pop(__ebx);
    _t43 =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    _t41 =  *_a12;
     *((intOrPtr*)(__ebp - "/lib/ld.so.1")) =  *_a16;
     *((intOrPtr*)(__ebp - "/ld.so.1")) =  *_a20;
    if( *_t43 == "/usr/lib/ld.so.1") {
         *_a12 = _t41;
         *_a16 =  *((intOrPtr*)(__ebp - "/lib/ld.so.1"));
         *_a20 =  *((intOrPtr*)(__ebp - "/ld.so.1"));
        __esp =  &_v24;
        _pop(__ebx);
        _pop(__esi);
        _pop(__edi);
        return;
    } else {
        while() {
        }
    }
}

L08048B86()
{
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;

    _pop(__ebx);
    __esi =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    __edi =  *((intOrPtr*)( *((intOrPtr*)(__ebp + 16))));
     *((intOrPtr*)(__ebp - "/lib/ld.so.1")) =  *((intOrPtr*)( *((intOrPtr*)(__ebp + 20))));
     *((intOrPtr*)(__ebp - "/ld.so.1")) =  *((intOrPtr*)( *((intOrPtr*)(__ebp + 24))));
    if( *__esi == "/usr/lib/ld.so.1") {
         *((intOrPtr*)( *((intOrPtr*)(__ebp + 16)))) = __edi;
         *((intOrPtr*)( *((intOrPtr*)(__ebp + 20)))) =  *((intOrPtr*)(__ebp - "/lib/ld.so.1"));
         *((intOrPtr*)( *((intOrPtr*)(__ebp + 24)))) =  *((intOrPtr*)(__ebp - "/ld.so.1"));
        __esp = __ebp - 20;
        _pop(__ebx);
        _pop(__esi);
        _pop(__edi);
        __esp = __ebp;
        _pop(__ebp);
        return;
    } else {
        while() {
        }
    }
}

L08048C08()
{
    char _v16;
    intOrPtr _v20;
    char _v32;
    _unknown_ __ebx;
    void* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t33;
    signed int _t35;
    _unknown_ _t38;
    signed int _t39;
    _unknown_ _t48;
    _unknown_ _t49;
    signed int* _t55;
    signed int _t57;
    signed int _t58;

    L1();
    _pop(__ebx);
    _t33 = ( *(__ebp + "/ld.so.1"))[3];
    if(_t33 == "/usr/lib/ld.so.1") {
        _push( *((intOrPtr*)( *(__ebp + "/ld.so.1") + "/ld.so.1")));
        _v16 = L08048B48();
        __esp = __esp + "/lib/ld.so.1";
    } else {
        _t58 = _t33;
        _v16 = "/usr/lib/ld.so.1";
        if( *_t58 != "/usr/lib/ld.so.1") {
            while(1) {
L4:
                _push( *_t58);
                _v16 = _v16 + L08048B48();
                __esp = __esp + "/lib/ld.so.1";
                _t58 = _t58 + "/lib/ld.so.1";
                if( *_t58 == "/usr/lib/ld.so.1") {
                    break;
                }
            }
        }
        goto L7;
L13:
        _t55 =  *(__ebp + "/ld.so.1");
        _t55[3] = __edi;
         *_t55 =  *(__ebp - "/ld.so.1");
         *(_t55 + "/lib/ld.so.1") =  *(__ebp - "/lib/ld.so.1");
        __esp =  &_v32;
        return;
    }
L7:
    _t35 = _v16;
    ( *(__ebp + "/ld.so.1"))[4] = _t35;
    _push(_t35 <<  &M00000002);
    __edi = malloc();
     *(__ebp - "/ld.so.1") = -1;
     *(__ebp - "/lib/ld.so.1") = 0;
    _v16 = 0;
    __esp = __esp + "/lib/ld.so.1";
    _t39 = ( *(__ebp + "/ld.so.1"))[3];
    if(_t39 == "/usr/lib/ld.so.1") {
        _push(__ebp - "/lib/ld.so.1");
        _push(__ebp - "/ld.so.1");
        _push( &_v16);
        _push(__edi);
        _push( *((intOrPtr*)( *(__ebp + "/ld.so.1") + "/ld.so.1")));
        L08048B78();
    } else {
        _t57 = _t39;
        if( *_t57 != "/usr/lib/ld.so.1") {
            _v20 = __ebp - "/lib/ld.so.1";
            while(1) {
L10:
                L08048B78( *_t57, __edi,  &_v16, __ebp - "/ld.so.1", _v20);
                _t57 = _t57 + "/lib/ld.so.1";
                if( *_t57 == "/usr/lib/ld.so.1") {
                    break;
                }
            }
        }
    }
    goto L13;
}

L08048C16()
{
    signed int _t33;
    signed int _t35;
    _unknown_ _t38;
    signed int _t39;
    _unknown_ _t48;
    _unknown_ _t49;
    signed int* _t55;

    _pop(__ebx);
    _t33 = ( *(__ebp + "/ld.so.1"))[3];
    if(_t33 == "/usr/lib/ld.so.1") {
        _push( *((intOrPtr*)( *(__ebp + "/ld.so.1") + "/ld.so.1")));
         *(__ebp - 12) = L08048B48();
        __esp = __esp + "/lib/ld.so.1";
    } else {
        __esi = _t33;
         *(__ebp - 12) = "/usr/lib/ld.so.1";
        if( *__esi != "/usr/lib/ld.so.1") {
            while(1) {
L3:
                _push( *__esi);
                 *(__ebp - 12) =  *(__ebp - 12) + L08048B48();
                __esp = __esp + "/lib/ld.so.1";
                __esi = __esi + "/lib/ld.so.1";
                if( *__esi == "/usr/lib/ld.so.1") {
                    break;
                }
            }
        }
        goto L6;
L12:
        _t55 =  *(__ebp + "/ld.so.1");
        _t55[3] = __edi;
         *_t55 =  *(__ebp - "/ld.so.1");
         *(_t55 + "/lib/ld.so.1") =  *(__ebp - "/lib/ld.so.1");
        __esp = __ebp - 28;
        _pop(__ebx);
        _pop(__esi);
        _pop(__edi);
        __esp = __ebp;
        _pop(__ebp);
        return;
    }
L6:
    _t35 =  *(__ebp - 12);
    ( *(__ebp + "/ld.so.1"))[4] = _t35;
    _push(_t35 <<  &M00000002);
    __edi = malloc();
     *(__ebp - "/ld.so.1") = -1;
     *(__ebp - "/lib/ld.so.1") = 0;
     *(__ebp - 12) = 0;
    __esp = __esp + "/lib/ld.so.1";
    _t39 = ( *(__ebp + "/ld.so.1"))[3];
    if(_t39 == "/usr/lib/ld.so.1") {
        _push(__ebp - "/lib/ld.so.1");
        _push(__ebp - "/ld.so.1");
        _push(__ebp - 12);
        _push(__edi);
        _push( *((intOrPtr*)( *(__ebp + "/ld.so.1") + "/ld.so.1")));
        L08048B78();
    } else {
        __esi = _t39;
        if( *__esi != "/usr/lib/ld.so.1") {
             *((intOrPtr*)(__ebp - 16)) = __ebp - "/lib/ld.so.1";
            while(1) {
L9:
                L08048B78( *__esi, __edi, __ebp - 12, __ebp - "/ld.so.1",  *((intOrPtr*)(__ebp - 16)));
                __esi = __esi + "/lib/ld.so.1";
                if( *__esi == "/usr/lib/ld.so.1") {
                    break;
                }
            }
        }
    }
    goto L12;
}

L08048CF4()
{
    char _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t35;
    _unknown_ _t36;
    intOrPtr _t37;

    __esp = __esp - "/ld.so.1";
    _push(__edi);
    _push(_t36);
    _push(_t27);
    L1();
    _pop(__ebx);
    _t37 =  *((intOrPtr*)(_t27 + 6334 + 1800));
    if(_t37 == "/usr/lib/ld.so.1") {
        _t23 = 0;
    } else {
        while() {
        }
    }
    __esp =  &_v24;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    return _t23;
}

L08048D02()
{
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t35;

    _pop(__ebx);
    __esi =  *((intOrPtr*)(_t27 + 6334 + 1800));
    if(__esi == "/usr/lib/ld.so.1") {
        _t23 = 0;
        goto L18;
    }
    while() {
    }
L18:
    __esp = __ebp - 20;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return _t23;
}

L08048D94(_unknown_ __eax, signed int* _a8)
{
    signed int _v16;
    signed int _v20;
    char _v40;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t44;
    signed int _t47;
    signed int _t49;
    _unknown_ _t50;
    signed int _t51;
    _unknown_ _t54;
    signed char* _t57;
    _unknown_ _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    signed int _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t69;
    _unknown_ _t72;
    signed char* _t74;
    signed char* _t75;
    _unknown_ _t79;
    _unknown_ _t80;
    _unknown_ _t84;
    signed int _t85;
    signed int* _t89;
    _unknown_ _t91;

    L1();
    _pop(__ebx);
    _t62 = _t61 + 6174;
    _t69 =  *((intOrPtr*)(__ebp + "/ld.so.1")) -  *((intOrPtr*)( *((intOrPtr*)(__ebp + "/ld.so.1")) + "/lib/ld.so.1")) + -4;
    _t85 = _t69 +  &M00000009;
    _v16 = _t85;
     *_a8 = _t85;
     *(__ebp - "/ld.so.1") = _t85;
    _t47 = _t62 + -4100;
    _v20 = _t47;
    asm("cld ");
    asm("rep cmpsb ");
    if((_t47 & 4294967295 & "/usr/lib/ld.so.1") == "/usr/lib/ld.so.1") {
L5:
        _t49 =  *_a8;
        _v20 = _t49;
        asm("cld ");
        asm("repne scasb ");
        _t65 =  !-1;
         *(__ebp - "/ld.so.1") = _t65;
        _t51 = _t49 + _t65 -  &M00000001;
        _v16 = _t51;
        _t72 = _t51 +  &M00000001;
         *(__ebp - "/ld.so.1") = _v20;
        _v20 = _t62 + -4099;
        asm("cld ");
        asm("rep cmpsb ");
        if((_t51 & 4294967295 & "/usr/lib/ld.so.1") != "/usr/lib/ld.so.1") {
             *(_a8 + "/lib/ld.so.1") = "/usr/lib/ld.so.1";
        } else {
             *(_a8 + "/lib/ld.so.1") =  *(_t51 +  &M00000001);
            _t72 = _v16 +  &M00000005;
        }
        _push(_a8 + "/ld.so.1");
        _push(_t72);
        _t54 = L08048A58();
        _push( &(_a8[3]));
        _push(_t54);
        _t74 = L08048A94();
        _t89 = _a8;
        _t89[4] =  *_t74 & 255;
        _t75 =  &(_t74[(char*)( &M00000001)]);
        __esp = __esp + 16;
        if( *( *_t89) == 122) {
            _push(__ebp - "/lib/ld.so.1");
            _push(_t75);
            _t75 = L08048A58() +  *(__ebp - "/lib/ld.so.1");
        }
        _t57 = _t75;
    } else {
        asm("cld ");
        asm("rep cmpsb ");
        if((_t47 & 4294967295 & "/usr/lib/ld.so.1") == "/usr/lib/ld.so.1" ||  *(_t69 +  &M00000009) == 122) {
            goto L5;
        } else {
            _t57 = 0;
        }
    }
L11:
    __esp =  &_v40;
    return _t57;
}

L08048DA2(_unknown_ __eax)
{
    _unknown_ _t44;
    signed int _t47;
    signed int _t49;
    _unknown_ _t50;
    signed int _t51;
    _unknown_ _t54;
    signed char* _t57;
    _unknown_ _t61;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    signed int _t65;
    _unknown_ _t66;
    _unknown_ _t67;
    _unknown_ _t69;
    _unknown_ _t72;
    signed char* _t74;
    signed char* _t75;
    _unknown_ _t79;
    _unknown_ _t80;
    signed int _t84;
    signed int _t88;

    _pop(__ebx);
    _t62 = _t61 + 6174;
    _t69 =  *((intOrPtr*)(__ebp + "/ld.so.1")) -  *((intOrPtr*)( *((intOrPtr*)(__ebp + "/ld.so.1")) + "/lib/ld.so.1")) + -4;
    _t84 = _t69 +  &M00000009;
     *(__ebp - 12) = _t84;
     *( *(__ebp + 12)) = _t84;
     *(__ebp - "/ld.so.1") = _t84;
    _t47 = _t62 + -4100;
     *(__ebp - 16) = _t47;
    asm("cld ");
    asm("rep cmpsb ");
    if((_t47 & 4294967295 & "/usr/lib/ld.so.1") == "/usr/lib/ld.so.1") {
L4:
        _t49 =  *( *(__ebp + 12));
         *(__ebp - 16) = _t49;
        asm("cld ");
        asm("repne scasb ");
        _t65 =  !-1;
         *(__ebp - "/ld.so.1") = _t65;
        _t51 = _t49 + _t65 -  &M00000001;
         *(__ebp - 12) = _t51;
        _t72 = _t51 +  &M00000001;
         *(__ebp - "/ld.so.1") =  *(__ebp - 16);
         *(__ebp - 16) = _t62 + -4099;
        asm("cld ");
        asm("rep cmpsb ");
        if((_t51 & 4294967295 & "/usr/lib/ld.so.1") != "/usr/lib/ld.so.1") {
            ("/lib/ld.so.1")[ *(__ebp + 12)] = "/usr/lib/ld.so.1";
        } else {
            ("/lib/ld.so.1")[ *(__ebp + 12)] =  *(_t51 +  &M00000001);
            _t72 =  *(__ebp - 12) +  &M00000005;
        }
        _push( &(("/ld.so.1")[ *(__ebp + 12)]));
        _push(_t72);
        _t54 = L08048A58();
        _push( *(__ebp + 12) + 12);
        _push(_t54);
        _t74 = L08048A94();
        _t88 =  *(__ebp + 12);
         *(_t88 + 16) =  *_t74 & 255;
        _t75 =  &(_t74[(char*)( &M00000001)]);
        __esp = __esp + 16;
        if( *((char*)( *_t88)) == 122) {
            _push(__ebp - "/lib/ld.so.1");
            _push(_t75);
            _t75 = L08048A58() +  *(__ebp - "/lib/ld.so.1");
        }
        _t57 = _t75;
        goto L10;
    }
    _t88 =  *(__ebp - 12);
    asm("cld ");
    asm("rep cmpsb ");
    if((_t47 & 4294967295 & "/usr/lib/ld.so.1") == "/usr/lib/ld.so.1" ||  *(_t69 +  &M00000009) == 122) {
        goto L4;
    }
    _t57 = 0;
L10:
    __esp = __ebp - 36;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return _t57;
}

L08048EAC(_unknown_ __eax, _unknown_ __eflags, intOrPtr _a8, intOrPtr _a12, intOrPtr* _a16)
{
    signed int _v20;
    char _v32;
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t40;
    signed int _t41;
    _unknown_ _t42;
    signed int _t44;
    _unknown_ _t54;
    _unknown_ _t55;
    signed char* _t56;
    signed int _t57;
    _unknown_ _t59;
    intOrPtr _t60;
    intOrPtr* _t61;

    __eflags = __eflags;
    L1();
    _pop(__ebx);
    __edi = _a12;
    _t61 = _a16;
    _t56 =  *(__ebp + "/ld.so.1");
    _t41 =  *_t56 & 255;
    _t57 =  &(_t56[(char*)( &M00000001)]);
     *(__ebp + "/ld.so.1") = _t57;
    _v20 = _t41 & 64;
    if(__eflags == 0) {
        __eflags = (_t41 & 4294967295) - "/usr/lib/ld.so.1";
        if((_t41 & 4294967295) >= "/usr/lib/ld.so.1") {
            __eflags = (_t41 & 4294967295 & 192) - "/usr/lib/ld.so.1";
            if((_t41 & 4294967295 & 192) == "/usr/lib/ld.so.1") {
                __eflags = _t41 - 46;
                if(_t41 <= 46) {
                    goto L8;
                }
                abort();
                goto L10;
L8:
                goto __ecx;
            }
            _t44 = _t41 & 63;
             *(__ebp - "/ld.so.1") = _t44;
             *(_t44 + _a8 + 92) = _t57 & 4294967295;
        } else {
             *(__ebp - "/ld.so.1") = _t41 & 63;
            _push(__ebp - "/lib/ld.so.1");
            _push( *(__ebp + "/ld.so.1"));
             *(__ebp + "/ld.so.1") = L08048A58();
             *(__ebp - "/lib/ld.so.1") =  *(__ebp - "/lib/ld.so.1") *  *(__edi + 12);
            _t60 = _a8;
             *((char*)( *(__ebp - "/ld.so.1") + _t60 + 92)) =  &M00000001;
             *("/usr/lib/ld.so.1" +  *(__ebp - "/ld.so.1") * "/lib/ld.so.1" + _t60 + 16) =  *(__ebp - "/lib/ld.so.1");
        }
    } else {
         *_t61 =  *_t61 + (_t41 & 63) *  *(__edi + "/ld.so.1");
    }
L10:
    __esp =  &_v32;
    return  *(__ebp + "/ld.so.1");
}

L08048EBA(_unknown_ __eax, _unknown_ __eflags)
{
    _unknown_ _t40;
    signed int _t41;
    _unknown_ _t42;
    signed int _t44;
    _unknown_ _t54;
    _unknown_ _t55;
    signed char* _t56;
    signed int _t57;
    _unknown_ _t59;
    intOrPtr _t60;
    intOrPtr* _t61;

    __eflags = __eflags;
    _pop(__ebx);
    __edi =  *((intOrPtr*)(__ebp + 16));
    _t61 =  *((intOrPtr*)(__ebp + 20));
    _t56 =  *(__ebp + "/ld.so.1");
    _t41 =  *_t56 & 255;
    _t57 =  &(_t56[(char*)( &M00000001)]);
     *(__ebp + "/ld.so.1") = _t57;
     *(__ebp - 16) = _t41 & 64;
    if(__eflags == 0) {
        __eflags = (_t41 & 4294967295) - "/usr/lib/ld.so.1";
        if((_t41 & 4294967295) >= "/usr/lib/ld.so.1") {
            __eflags = (_t41 & 4294967295 & 192) - "/usr/lib/ld.so.1";
            if((_t41 & 4294967295 & 192) == "/usr/lib/ld.so.1") {
                __eflags = _t41 - 46;
                if(_t41 <= 46) {
                    goto L7;
                }
                abort();
                goto L9;
L7:
                goto __ecx;
            }
            _t44 = _t41 & 63;
             *(__ebp - "/ld.so.1") = _t44;
             *(_t44 +  *((intOrPtr*)(__ebp + 12)) + 92) = _t57 & 4294967295;
        } else {
             *(__ebp - "/ld.so.1") = _t41 & 63;
            _push(__ebp - "/lib/ld.so.1");
            _push( *(__ebp + "/ld.so.1"));
             *(__ebp + "/ld.so.1") = L08048A58();
             *(__ebp - "/lib/ld.so.1") =  *(__ebp - "/lib/ld.so.1") *  *(__edi + 12);
            _t60 =  *((intOrPtr*)(__ebp + 12));
             *((char*)( *(__ebp - "/ld.so.1") + _t60 + 92)) =  &M00000001;
             *("/usr/lib/ld.so.1" +  *(__ebp - "/ld.so.1") * "/lib/ld.so.1" + _t60 + 16) =  *(__ebp - "/lib/ld.so.1");
        }
    } else {
         *_t61 =  *_t61 + (_t41 & 63) *  *(__edi + "/ld.so.1");
    }
L9:
    __esp = __ebp - 28;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return  *(__ebp + "/ld.so.1");
}

__register_frame_info(_unknown_ __ebx, intOrPtr* _a8)
{// addr = 0x0804923C
    _unknown_ __ebp;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;

    _t13 = __ebx;
    _push(_t13);
    L1();
    _pop(__ebx);
    _t14 = _t13 + 4987;
    __edx = _a8;
     *((intOrPtr*)(__edx + "/ld.so.1")) =  *((intOrPtr*)(__ebp + "/ld.so.1"));
     *((intOrPtr*)(__edx + "/lib/ld.so.1")) = "/usr/lib/ld.so.1";
     *__edx = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 12)) = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 16)) = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 20)) =  *((intOrPtr*)(_t14 + 1800));
     *((intOrPtr*)(_t14 + 1800)) = __edx;
    return;
}

L08049245()
{
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;

    _pop(__ebx);
    _t14 = _t13 + 4987;
    __edx =  *((intOrPtr*)(__ebp + 12));
     *((intOrPtr*)(__edx + "/ld.so.1")) =  *((intOrPtr*)(__ebp + "/ld.so.1"));
     *((intOrPtr*)(__edx + "/lib/ld.so.1")) = "/usr/lib/ld.so.1";
     *__edx = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 12)) = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 16)) = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 20)) =  *((intOrPtr*)(_t14 + 1800));
     *((intOrPtr*)(_t14 + 1800)) = __edx;
    _pop(__ebp);
    return;
}

L0804928D()
{
    intOrPtr _t11;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;

    _pop(__ebx);
    _t14 = _t13 + 4915;
    _t11 =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    __edx =  *((intOrPtr*)(__ebp + 12));
     *((intOrPtr*)(__edx + "/ld.so.1")) = _t11;
     *((intOrPtr*)(__edx + 12)) = _t11;
     *((intOrPtr*)(__edx + "/lib/ld.so.1")) = "/usr/lib/ld.so.1";
     *__edx = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 16)) = "/usr/lib/ld.so.1";
     *((intOrPtr*)(__edx + 20)) =  *((intOrPtr*)(_t14 + 1800));
     *((intOrPtr*)(_t14 + 1800)) = __edx;
    _pop(__ebp);
    return;
}

__deregister_frame_info(_unknown_ __ebx)
{// addr = 0x080492C8
    _unknown_ __ebp;
    intOrPtr _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    _t12 = __ebx;
    _push(_t12);
    L1();
    _pop(__ebx);
    _t13 = _t12 + 4847;
    _t10 =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    __ecx = _t13 + 1800;
    if( *(_t13 + 1800) == "/usr/lib/ld.so.1") {
L7:
        abort();
        return ;
    } else {
        while(1) {
            __edx =  *__ecx;
            if( *((intOrPtr*)(__edx + "/ld.so.1")) == _t10) {
                break;
            }
            __ecx = __edx + 20;
            if( *(__edx + 20) != "/usr/lib/ld.so.1") {
                continue;
            }
            goto L7;
        }
        _t11 =  *(__edx + 20);
         *__ecx =  *(__edx + 20);
        if( *__edx == "/usr/lib/ld.so.1") {
            return ;
        }
        _push( *((intOrPtr*)(__edx + 12)));
        _t11 = free();
        return ;
    }
    return;
}

L080492D1()
{
    intOrPtr _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    _pop(__ebx);
    _t13 = _t12 + 4847;
    _t10 =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    __ecx = _t13 + 1800;
    if( *(_t13 + 1800) == "/usr/lib/ld.so.1") {
L6:
        abort();
        goto L7;
    }
    while(1) {
        __edx =  *__ecx;
        if( *((intOrPtr*)(__edx + "/ld.so.1")) == _t10) {
            break;
        }
        __ecx = __edx + 20;
        if( *(__edx + 20) != "/usr/lib/ld.so.1") {
            continue;
        }
        goto L6;
    }
    _t11 =  *(__edx + 20);
     *__ecx =  *(__edx + 20);
    if( *__edx != "/usr/lib/ld.so.1") {
        _push( *((intOrPtr*)(__edx + 12)));
        _t11 = free();
    }
L7:
    _pop(__ebp);
    return;
}

L08049331(_unknown_ __eax)
{
    _unknown_ _t43;
    intOrPtr _t44;
    _unknown_ _t45;
    _unknown_ _t61;
    _unknown_ _t62;
    intOrPtr _t63;
    intOrPtr _t64;
    intOrPtr _t65;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t74;
    _unknown_ _t75;
    _unknown_ _t76;
    _unknown_ _t81;

    _pop(__ebx);
    _push( *((intOrPtr*)(__ebp + "/ld.so.1")));
    _t44 = L08048CF4();
     *((intOrPtr*)(__ebp + -148)) = _t44;
    __esp = __esp + "/lib/ld.so.1";
    if(_t44 != "/usr/lib/ld.so.1") {
        _t63 = __ebp - 20;
         *((intOrPtr*)(__ebp + -152)) = _t63;
        _push(_t63);
        _push( *((intOrPtr*)(__ebp + -148)));
        _t44 = L08048D94(_t44);
        _t79 = _t44;
        __esp = __esp + "/ld.so.1";
        if(_t79 != "/usr/lib/ld.so.1") {
            _push(116);
            _push("/usr/lib/ld.so.1");
            _t64 = __ebp + -136;
             *((intOrPtr*)(__ebp + -156)) = _t64;
            _push(_t64);
            memset();
             *(__ebp - 46) =  *(__ebp - "/lib/ld.so.1") & 4294967295;
             *((intOrPtr*)(__ebp + -132)) =  *((intOrPtr*)(__ebp - 16));
            __esp = __esp + 12;
            _t65 =  *((intOrPtr*)(__ebp + -148));
            _t51 = _t65 -  *((intOrPtr*)(_t65 + "/lib/ld.so.1")) + -4 +  *((intOrPtr*)(_t65 -  *((intOrPtr*)(_t65 + "/lib/ld.so.1")) + -4));
            _t75 = _t65 -  *((intOrPtr*)(_t65 + "/lib/ld.so.1")) + -4 +  *((intOrPtr*)(_t65 -  *((intOrPtr*)(_t65 + "/lib/ld.so.1")) + -4)) + "/lib/ld.so.1";
            _t85 = _t79 - _t75;
            if(_t79 < _t75) {
                 *((intOrPtr*)(__ebp + -160)) =  *((intOrPtr*)(__ebp + -152));
                 *((intOrPtr*)(__ebp + -164)) =  *((intOrPtr*)(__ebp + -156));
                while(1) {
L4:
                    _push("/usr/lib/ld.so.1");
                    _push( *((intOrPtr*)(__ebp + -160)));
                    _push( *((intOrPtr*)(__ebp + -164)));
                    _push(_t79);
                    _t79 = _t51;
                    __esp = __esp + 16;
                    if(_t79 >= _t75) {
                        break;
                    }
                }
            }
            _t81 =  *((intOrPtr*)(__ebp + -148)) + 16;
            if( *((char*)( *((intOrPtr*)(__ebp - 20)))) == 122) {
                _push(__ebp + -140);
                _push(_t81);
                _t81 = L08048A58() +  *((intOrPtr*)(__ebp + -140));
                __esp = __esp + "/ld.so.1";
            }
            _t76 =  *((intOrPtr*)(__ebp + -148)) +  *((intOrPtr*)( *((intOrPtr*)(__ebp + -148)))) + "/lib/ld.so.1";
             *((intOrPtr*)(__ebp + -144)) =  *((intOrPtr*)( *((intOrPtr*)(__ebp + -148)) + "/ld.so.1"));
            if(_t81 < _t76) {
                 *((intOrPtr*)(__ebp + -168)) = __ebp + -144;
                while(1) {
                    _t89 =  *((intOrPtr*)(__ebp + -144)) -  *((intOrPtr*)(__ebp + "/ld.so.1"));
                    if( *((intOrPtr*)(__ebp + -144)) >  *((intOrPtr*)(__ebp + "/ld.so.1"))) {
                        break;
                    }
                    _push( *((intOrPtr*)(__ebp + -168)));
                    _push(__ebp - 20);
                    _push(__ebp + -136);
                    _push(_t81);
                    _t81 = L08048EAC(__ebp + -136, _t89);
                    __esp = __esp + 16;
                    if(_t81 < _t76) {
                        continue;
                    }
                    goto L11;
                }
            }
            goto L11;
L11:
            _t79 = __ebp + -136;
            asm("cld ");
            _push(28 <<  &M00000002);
            _push(__ebp + -136);
            _push( *((intOrPtr*)(__ebp + 12)));
            memcpy();
            __esp = __esp + 12;
            _t44 =  *((intOrPtr*)(__ebp + 12));
        }
    }
    __esp = __ebp + -180;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return _t44;
}

L0804948C()
{
    _unknown_ __ebx;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t5;

    L1();
    _pop(__ebx);
    __eax = _t5 + 4394 + 212;
    __esi = __eax - "/lib/ld.so.1";
    if( *((intOrPtr*)(__eax - "/lib/ld.so.1")) == 255) {
        return ;
    }
    while(1) {
L2:
        __eax =  *__esi;
         *((intOrPtr*)( *__esi))();
        __esi = __esi + -4;
        if( *__esi == 255) {
            break;
        }
    }
    return;
}

L08049496()
{
    _unknown_ _t5;

    _pop(__ebx);
    __eax = _t5 + 4394 + 212;
    __esi = __eax - "/lib/ld.so.1";
    if( *((intOrPtr*)(__eax - "/lib/ld.so.1")) != 255) {
        while(1) {
L1:
            __eax =  *__esi;
             *((intOrPtr*)( *__esi))();
            __esi = __esi + -4;
            if( *__esi == 255) {
                break;
            }
        }
    }
    _pop(__ebx);
    _pop(__esi);
    _pop(__ebp);
    return;
}

L080494E0()
{
    L08048908();
    0;
    0;
    L0804948C();
    0;
    0;
    return;
}

L080494E0()
{
    @rec 0x08048908@L08048908@();
    0;
    0;
    @rec 0x0804948C@L0804948C@();
    0;
    0;
    return;
}

// Statistics:
//     511 Register nodes
//     367 Temporaries nodes
//     156 Casts
//     734 Statements
//      72 Labels
//      29 Gotos
//      37 Blocks
//    3613 Nodes
//      17 Assembly nodes
//     181 Unknown Types


