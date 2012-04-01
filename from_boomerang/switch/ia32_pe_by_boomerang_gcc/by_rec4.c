_main(intOrPtr __ebx, signed int _a4)
{// addr = 0x00401080
    intOrPtr _v8;
    _unknown_ _t7;
    _unknown_ _t8;
    signed int _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;

    _push(_t12);
    __esp = __esp - 8;
    __esp = __esp & 240;
    _v8 = __ebx;
    _t10 = _a4;
    ___chkstk();
     *((intOrPtr*)(0)) =  *((intOrPtr*)(0));
    ___main();
    if(_t10 > 7) {
L7:
         *__esp = "Other!";
L4:
        _puts();
        asm("ror byte [ecx+0x89c35dec], 0xf6");
        return 0;
    }
    switch( *((intOrPtr*)(_t10 * 4 +  &M004010A8))) {
        case 0:
             *__esp =  &___w32_sharedptr_unexpected;
            goto L4;
        case 1:
            goto L7;
        case 2:
             *__esp = "Three!";
            goto L4;
        case 3:
             *__esp = "Four!";
            goto L4;
        case 4:
             *__esp = "Five!";
            goto L4;
        case 5:
             *__esp = "Six!";
            goto L4;
        case 6:
             *__esp = "Seven!";
            goto L4;
    }
}

L00401160(intOrPtr __ebx, intOrPtr __edi, intOrPtr* _a4)
{
    intOrPtr _v8;
    intOrPtr* __ebp;
    _unknown_ _t13;
    intOrPtr* _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t24;
    _unknown_ _t25;

    __ebp = __esp;
    asm("cld ");
    __esp = __esp - 8;
     *__esp = __ebx;
    _t18 = _a4;
    _v8 = __edi;
    _push(12 << 2);
    _push(0);
    _push(_t18);
    memset();
    __esp = __esp + 12;
     *_t18 = 48;
     *((intOrPtr*)(_t18 + 36)) = -1;
     *((intOrPtr*)(_t18 + 4)) = _abort;
     *((intOrPtr*)(_t18 + 20)) =  *4202496;
     *((intOrPtr*)(_t18 + 8)) = 4198720;
     *((intOrPtr*)(_t18 + 28)) = 0;
     *((intOrPtr*)(_t18 + 32)) =  *4206608;
     *((intOrPtr*)(_t18 + 44)) =  *4202504;
     *((intOrPtr*)(_t18 + 40)) =  *4202500;
    __esp = __ebp;
    return;
}

L00401310(signed int __ecx, signed int _a4)
{
    char _v16;
    char _v60;
    char _v92;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ _t20;
    signed int _t23;
    signed int _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    signed int _t28;
    signed int _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    signed int* _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    char* _t37;
    signed int _t38;
    signed int _t39;

    _t25 = __ecx;
    _t20 = 31;
    _t28 = 1;
    __esp = __esp - 92;
    __ebx = _a4;
    while(1) {
L1:
        _t39 = _t28 & __ebx;
        if(_t39 == 0) {
        }
         *(_t20 +  &_v92) = _t25 & 4294967295;
        _t28 = _t28 + _t28;
        _t20 = _t20 - 1;
        if(_t39 < 0) {
            break;
        }
    }
    asm("cld ");
    _t37 = "-LIBGCCW32-EH-SJLJ-GTHR-CYGWIN";
    _push(7 << 2);
    _push(_t37);
    _push( &_v60);
    memcpy();
    __esp =  &((__esp)[3]);
    _t34 = _t37 + 7 + 7;
     *_t34 =  *4198716 & 65535 & 4294967295;
    _t34[0] =  *4198718 & 255 & 4294967295;
    _t23 =  &_v92;
     *__esp = _t23;
    4_AddAtomA();
    _t38 = _t23 & 4294967295 & ;
    __esp = __esp - 4;
    if((_t38 & 4294967295) != 0) {
         *__esp = _t38;
        L004013A0(_t23);
        _t29 = _t38;
        if(_t23 != __ebx) {
            goto L5;
        }
    } else {
L5:
        _t29 = 0;
    }
L6:
    __esp =  &_v16;
    return _t29;
}

L004013A0(_unknown_ __eax, signed short _a4)
{
    _unknown_ _v8;
    char _v76;
    intOrPtr _v84;
    char* _v88;
    _unknown_ __ebp;
    _unknown_ _t12;
    signed int _t13;
    signed int _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    signed int _t21;
    _unknown_ _t22;
    signed int _t23;
    signed int* _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    signed int _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t37;

    _push(_t20);
    __esp = __esp - 84;
    _t21 = 0;
    _t13 = _a4 & 65535;
    _v84 = 63;
    _v88 =  &_v76;
     *__esp = _t13;
    12_GetAtomNameA();
    __esp = __esp - 12;
    if(_t13 == 0) {
L7:
        _abort();
        _push(_t34);
        __esp = __esp - 8;
        _t15 = L00401310(_t23,  *4206656);
        if((_t15 & 4294967295) != 0) {
            return ;
        }
        _abort();
        0;
        0;
        0;
        _push(_t23);
        _t25 =  &((__esp)[2]);
        while(_t15 >= 4096) {
            _t25 = _t25 - 4096;
             *_t25 =  *_t25;
            _t15 = _t15 - 4096;
        }
    }
    _t18 = 31;
    _t29 = 1;
    while(1) {
L2:
        _t37 =  *((char*)(_t18 +  &_v76)) - 65;
        if(_t37 == 0) {
            _t21 = _t21 | _t29;
        }
        _t29 = _t29 + _t29;
        _t18 = _t18 - 1;
        if(_t37 < 0) {
            break;
        }
    }
    if( *_t21 == 48) {
        return ;
    }
    goto L7;
}

___chkstk()
{// addr = 0x00401440
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    intOrPtr* _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    _t6 = __esp + 8;
    while(_t2 >= 4096) {
        _t6 = _t6 - 4096;
         *_t6 =  *_t6;
        _t2 = _t2 - 4096;
    }
}

_cygwin_crt0(intOrPtr _a4)
{// addr = 0x00401470
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v24;
    char _v196;
    _unknown_ _v200;
    _unknown_ _t9;
    intOrPtr _t10;
    char* _t11;
    intOrPtr _t12;

    _v8 = _t12;
    _t13 = _a4;
    _v12 = _t10;
    if(8__cygwin_crt0_common(_t10, _a4, 0) == 0) {
L3:
        __esp = __esp - 176;
        _t11 =  &_v196;
        _v196 = 0;
        8__cygwin_crt0_common(_t11, _t13, _t11);
         *__esp = _t11;
L2:
        __imp__dll_crt0__FP11per_process();
        goto L3;
    }
     *__esp = 0;
    goto L2;
}

___main()
{// addr = 0x004014D0
    goto __imp____main;
}

_puts()
{// addr = 0x004014E0
    goto __imp__puts;
}

_free()
{// addr = 0x004014F0
    goto __imp__free;
}

_pthread_atfork()
{// addr = 0x00401500
    goto __imp__pthread_atfork;
}

_malloc()
{// addr = 0x00401510
    goto __imp__malloc;
}

_abort()
{// addr = 0x00401520
    goto __imp__abort;
}

__cygwin_crt0_common@8(_unknown_ __ebx, intOrPtr _a4, intOrPtr* _a8)
{// addr = 0x00401530
    intOrPtr _v4;
    _unknown_ _v8;
    intOrPtr* __ebp;
    intOrPtr* _t31;
    intOrPtr* _t32;
    intOrPtr _t34;
    intOrPtr* _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;

    _t31 = 0;
    __ebp = __esp;
    _push(__ebx);
    __esp = __esp - 4;
    _t37 = _a8;
    if(_t37 == 0) {
         *__esp = 8;
        _cygwin_internal();
        _t32 = 0;
        if(0 != 255) {
            _t37 = 0;
            _t31 = 1;
            goto L1;
        }
L8:
    } else {
L1:
         *((intOrPtr*)(_t37 + 4)) = 168;
         *((intOrPtr*)(_t37 + 8)) = 1005;
         *((intOrPtr*)(_t37 + 12)) = 9;
         *((intOrPtr*)(_t37 + 128)) = 0;
         *((intOrPtr*)(_t37 + 132)) = 112;
         *((intOrPtr*)(_t37 + 44)) =  &___CTOR_LIST__;
         *((intOrPtr*)(_t37 + 48)) =  &__DTOR_LIST__;
         *((intOrPtr*)(_t37 + 20)) = 4206624;
        if(_t31 == 0) {
             *((intOrPtr*)(_t37 + 16)) = 4206628;
        } else {
             *4206628 =  *((intOrPtr*)(_t37 + 164));
        }
         *((intOrPtr*)(_t37 + 120)) = 0;
         *((intOrPtr*)(_t37 + 72)) =  &_cygwin_premain0;
         *((intOrPtr*)(_t37 + 76)) =  &_cygwin_premain1;
         *((intOrPtr*)(_t37 + 40)) = _a4;
        _t34 = _v4;
         *((intOrPtr*)(_t37 + 80)) =  &_cygwin_premain2;
         *((intOrPtr*)(_t37 + 84)) =  &_cygwin_premain3;
         *((intOrPtr*)(_t37 + 36)) = 4206632;
         *_t37 = _t34;
         *((intOrPtr*)(_t37 + 24)) = _malloc;
         *((intOrPtr*)(_t37 + 28)) = _free;
         *((intOrPtr*)(_t37 + 32)) = realloc;
         *((intOrPtr*)(_t37 + 68)) = calloc;
         *__esp = 0;
        4_GetModuleHandleA();
         *((intOrPtr*)(_t37 + 124)) = _t34;
        __esp = __esp - 4;
         *((intOrPtr*)(_t37 + 52)) = 4202496;
         *((intOrPtr*)(_t37 + 56)) = 4202512;
         *((intOrPtr*)(_t37 + 60)) = 4206592;
         *((intOrPtr*)(_t37 + 64)) = 4206720;
        __pei386_runtime_relocator();
        _t32 = 1;
    }
    __esp = __ebp;
    return _t32;
    goto L8;
}

_do_pseudo_reloc(_unknown_ __edi, intOrPtr* _a4, intOrPtr _a8, intOrPtr _a12)
{// addr = 0x00401670
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t7;
    _unknown_ _t9;
    intOrPtr _t10;
    intOrPtr* _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    intOrPtr _t16;

    __ecx = _a4;
    _push(_t15);
    _t16 = _a12;
    _push(_t9);
    _t10 = _a8;
    if(__ecx < _t10) {
        _t16 = _t16;
        while(1) {
L2:
            _t12 = _t16 +  *((intOrPtr*)(__ecx + 4));
            _t7 =  *__ecx;
            __ecx = __ecx + 8;
             *_t12 =  *_t12 + _t7;
            if(__ecx >= _t10) {
                break;
            }
        }
    }
    _pop(__ebx);
    _pop(__esi);
    return;
}

__pei386_runtime_relocator()
{// addr = 0x004016B0
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    _do_pseudo_reloc(__edi, 4206592, 4206592, 4194304);
    return;
}

_cygwin_internal()
{// addr = 0x00401740
    goto __imp__cygwin_internal;
}

_FindAtomA@4()
{// addr = 0x00401750
    goto __imp__FindAtomA;
}

_AddAtomA@4()
{// addr = 0x00401760
    goto __imp__AddAtomA;
}

_GetAtomNameA@12()
{// addr = 0x00401770
    goto __imp__GetAtomNameA;
}

_GetModuleHandleA@4()
{// addr = 0x00401780
    goto __imp__GetModuleHandleA;
}

_GetModuleHandleA@4()
{// addr = 0x00401780
    goto __imp__GetModuleHandleA;
}

// Statistics:
//      70 Register nodes
//     150 Temporaries nodes
//      39 Casts
//     252 Statements
//      24 Labels
//      13 Gotos
//      20 Blocks
//     878 Nodes
//       3 Assembly nodes
//      63 Unknown Types


