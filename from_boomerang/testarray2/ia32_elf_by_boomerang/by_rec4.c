L08048278()
{
    _unknown_ __ebp;

    L080482E4(__edx);
    L0804833C(__esi);
    L080484D0(__edx);
    return;
}

__libc_start_main()
{// addr = 0x080482A0
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482B0
    goto __imp__printf;
}

L080482E4(_unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __edx = __edx;
    L1();
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 4935 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    return;
}

L080482ED(_unknown_ __edx)
{
    _unknown_ _t2;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 4935 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048308()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518364 != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134518352;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134518352 = _t2 + 4;
         *__edx();
    }
     *134518364 = 1;
    return;
}

L0804833C(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134518116;
    if( *134518116 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518116);
     *__eax();
    __esp = __esp + 16;
    return;
}

L08048368(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t5;

    __esp = __esp - 8;
    _push( *((char*)(_a4 + 2)));
    printf("Middle elment is %d\n");
    __esp = __esp + 12;
    return;
}

L0804838A(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t5;

    __esp = __esp - 8;
    _push( *((char*)(_a4 + 10)));
    printf("First element is %d\n");
    __esp = __esp + 12;
    return;
}

main()
{// addr = 0x080483AC
    intOrPtr _v8;
    intOrPtr _v12;
    char* _v16;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t18;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    _v12 = 0;
    __esp = __esp - 12;
    L08048368(134518356);
    __esp = __esp + 12;
    __esp = __esp - 12;
    L0804838A(0x804964a);
    __esp = __esp + 12;
    _v16 = 134518356;
    _v8 = 0;
    while(_v8 <= 4) {
        _v12 = _v12 +  *_v16;
        _v16 = _v16 + 1;
        _v8 = _v8 + 1;
    }
}

L08048446()
{
    intOrPtr _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t11 = _t10 + 4590;
    L08048278();
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

L08048497()
{
    _unknown_ _t9;
    _unknown_ _t10;

    _pop(__ebx);
    _t10 = _t9 + 4509;
    __edi = _t10 + -224;
    _t8 = _t10 + -224 - __edi >> 2;
    __esp = __esp - 12;
    __esi = (_t10 + -224 - __edi >> 2) - 1;
    while(__esi != 255) {
         *((intOrPtr*)(__edi + __esi * 4))();
        __esi = __esi - 1;
    }
}

L080484D0(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134518100;
    __eax =  *134518100;
    while(__eax != 255) {
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
    }
}

L080484F4(_unknown_ __eax)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    L1();
    _pop(__ebx);
    _push(__eax);
    L08048308();
    _pop(__ecx);
    return;
}

L080484FD(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    L08048308();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080484FD(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    @rec 0x08048308@L08048308@();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     113 Register nodes
//      18 Temporaries nodes
//       8 Casts
//     199 Statements
//       2 Labels
//       0 Gotos
//      15 Blocks
//     444 Nodes
//       0 Assembly nodes
//      36 Unknown Types


