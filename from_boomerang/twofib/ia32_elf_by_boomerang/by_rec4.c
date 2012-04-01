L0804829C()
{
    _unknown_ __ebp;

    L08048318(__edx);
    L08048370(__esi);
    L080484FC(__edx);
    return;
}

int scanf(char* format)
{// addr = 0x080482C4
    goto __imp__scanf;
}

__libc_start_main()
{// addr = 0x080482D4
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482E4
    goto __imp__printf;
}

L08048318(_unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __edx = __edx;
    L1();
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 4915 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    return;
}

L08048321(_unknown_ __edx)
{
    _unknown_ _t2;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 4915 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L0804833C()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518392 != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134518388;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134518388 = _t2 + 4;
         *__edx();
    }
     *134518392 = 1;
    return;
}

L08048370(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134518148;
    if( *134518148 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518148);
     *__eax();
    __esp = __esp + 16;
    return;
}

L0804839C(intOrPtr* _a4, intOrPtr _a8)
{
    intOrPtr _v8;
    char _v12;
    intOrPtr _v16;
    _unknown_ __ebp;
    _unknown_ _t19;

    if(_a8 != 0) {
        __esp = __esp - 8;
        _push(_a8 - 1);
        L0804839C( &_v12);
        __esp = __esp + 12;
        _v16 = _v12;
        _v12 = _v8;
        _v8 = _v8 + _v16;
    } else {
        _v12 = 0;
        _v8 = 1;
    }
    __ecx = _a4;
     *__ecx = _v12;
     *((intOrPtr*)(__ecx + 4)) = _v8;
    return _a4;
}

main()
{// addr = 0x080483F5
    char _v8;
    char _v20;
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t11;
    _unknown_ _t13;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    __esp = __esp - 12;
    printf("Enter number: ");
    __esp = __esp + 12;
    __esp = __esp - 8;
    _push( &_v8);
    scanf("%d");
    __esp = __esp + 12;
    __esp = __esp - 4;
    __esp = __esp - 4;
    _push(_v8);
    L0804839C( &_v20);
    __esp = __esp + 8;
    _push(_v20);
    _push(_v8);
    printf("Fibonacci of %d is %d\n");
    __esp = __esp + 12;
    return 0;
}

L08048472()
{
    intOrPtr _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t11 = _t10 + 4578;
    L0804829C();
    _t7 = _t11 + -224;
    __edx = _t11 + -224;
     *((intOrPtr*)(__ebp - 16)) = _t7;
    __esi = 0;
    if(0 < _t7 - __edx >> 2) {
        __edi = __edx;
        while(1) {
L2:
             *((intOrPtr*)(__edx + __esi * 4))();
            __esi = __esi + 1;
            __edx = __edi;
            if(__esi >=  *((intOrPtr*)(__ebp - 16)) - __edi >> 2) {
                break;
            }
        }
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080484C3()
{
    _unknown_ _t9;
    _unknown_ _t10;

    _pop(__ebx);
    _t10 = _t9 + 4497;
    __edi = _t10 + -224;
    _t8 = _t10 + -224 - __edi >> 2;
    __esp = __esp - 12;
    __esi = (_t10 + -224 - __edi >> 2) - 1;
    while(__esi != 255) {
         *((intOrPtr*)(__edi + __esi * 4))();
        __esi = __esi - 1;
    }
}

L080484FC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134518132;
    __eax =  *134518132;
    while(__eax != 255) {
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
    }
}

L08048520(_unknown_ __eax)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    L1();
    _pop(__ebx);
    _push(__eax);
    L0804833C();
    _pop(__ecx);
    return;
}

L08048529(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    L0804833C();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048529(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    @rec 0x0804833C@L0804833C@();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     120 Register nodes
//      18 Temporaries nodes
//       7 Casts
//     206 Statements
//       2 Labels
//       0 Gotos
//      15 Blocks
//     473 Nodes
//       0 Assembly nodes
//      36 Unknown Types


