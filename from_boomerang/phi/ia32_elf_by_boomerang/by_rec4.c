L08048254()
{
    _unknown_ __ebp;

    L080482D0(__eax, __ebx);
    L08048330();
    L08048490(__edx);
    return;
}

int scanf(char* format)
{// addr = 0x0804827C
    goto __imp__scanf;
}

__libc_start_main()
{// addr = 0x0804828C
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x0804829C
    goto __imp__printf;
}

L080482D0(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _push(_t5);
    _push(__eax);
    L1();
    _pop(__ebx);
    _t4 =  *((intOrPtr*)(_t5 + 4882 + 24));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482DA()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 4882 + 24));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L080482F4()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518280 != 0) {
        return ;
    }
    _t2 =  *134518028;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518280 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518028 = _t2 + 4;
             *__edx();
            _t2 =  *134518028;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048330()
{
    _unknown_ __ebp;

    if( *134518248 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518248);
    0();
    __esp = __esp + 16;
    return;
}

main(_unknown_ __eax, _unknown_ __ebx)
{// addr = 0x0804835C
    _unknown_ _v8;
    char _v12;
    _unknown_ __ebp;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    intOrPtr _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    intOrPtr _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    char* _t22;

    _push(__ebx);
    _push(__eax);
    __esp = __esp & 240;
    __esp = __esp - 12;
    printf("Input number: ");
    _pop(__ebx);
    _t22 =  &_v12;
    _push(_t22);
    _push("%d");
    scanf();
    _t18 = _v12;
    __esp = __esp + 16;
    if(_t18 > 1) {
        __esp = __esp - 12;
        _push(_t18 - 1);
        _t18 = L080483E0(_t18);
        _t12 = L080483E0(_t18, _t11 - 1);
        _pop(__ecx);
        _pop(__edx);
        _t22 = _t12 + _t18;
        _push(_t22);
        printf("%d");
        __esp = __esp + 12;
        goto L2;
    } else {
        _t14 = 1;
        if(_t18 != 1) {
L2:
            _t14 = _t18;
        }
        _push(_t22);
        _push(_t14);
        _push(_v12);
        _push("fibonacci(%d) = %d\n");
        printf();
        return 0;
    }
}

L080483E0(_unknown_ __ebx, intOrPtr _a4)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t8;
    intOrPtr _t9;
    _unknown_ _t10;
    intOrPtr _t11;
    _unknown_ _t12;

    _t10 = __ebx;
    _push(_t10);
    _push(_t10);
    _t11 = _a4;
    if(_t11 > 1) {
        __esp = __esp - 12;
        __ecx = _t11 - 1;
        _push(_t11 - 1);
        _t11 = L080483E0(_t11);
        _t7 = L080483E0(_t11, _t6 - 1);
        _pop(__edx);
        _pop(__ecx);
        _push(_t7 + _t11);
        _push("%d");
        printf();
    } else {
        _t9 = 1;
        if(_t11 == 1) {
            return _t9;
        }
    }
    _t9 = _t11;
    return _t9;
}

L08048490(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518232;
    __ebx = 134518232;
    if(__eax != 255) {
        while(1) {
L1:
            __ebx = __ebx - 4;
             *__eax();
            __eax =  *__ebx;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

L080484BE()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L080482F4();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080484BE()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x080482F4@L080482F4@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      58 Register nodes
//      52 Temporaries nodes
//       2 Casts
//     127 Statements
//       8 Labels
//       2 Gotos
//      12 Blocks
//     351 Nodes
//       0 Assembly nodes
//      36 Unknown Types


