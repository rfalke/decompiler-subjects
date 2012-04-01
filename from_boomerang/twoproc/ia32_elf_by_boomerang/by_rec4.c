L08048278()
{
    _unknown_ __ebp;

    L080482E4(__edx);
    L0804833C(__esi);
    L08048448(__edx);
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
    __eax =  *((intOrPtr*)(_t2 + 4747 + -4));
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
    __eax =  *((intOrPtr*)(_t2 + 4747 + -4));
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

    if( *134518168 != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134518164;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134518164 = _t2 + 4;
         *__edx();
    }
     *134518168 = 1;
    return;
}

L0804833C(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134517928;
    if( *134517928 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134517928);
     *__eax();
    __esp = __esp + 16;
    return;
}

L08048368(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebp;

    return _a4 - _a8;
}

main(_unknown_ __eax)
{// addr = 0x08048375
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t8;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    __esp = __esp - 8;
    _push(L08048368(11, 4));
    printf(134513808);
    __esp = __esp + 12;
    return;
}

L080483BE()
{
    intOrPtr _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t11 = _t10 + 4538;
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

L0804840F()
{
    _unknown_ _t9;
    _unknown_ _t10;

    _pop(__ebx);
    _t10 = _t9 + 4457;
    __edi = _t10 + -224;
    _t8 = _t10 + -224 - __edi >> 2;
    __esp = __esp - 12;
    __esi = (_t10 + -224 - __edi >> 2) - 1;
    while(__esi != 255) {
         *((intOrPtr*)(__edi + __esi * 4))();
        __esi = __esi - 1;
    }
}

L08048448(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134517912;
    __eax =  *134517912;
    while(__eax != 255) {
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
    }
}

L0804846C(_unknown_ __eax)
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

L08048475(_unknown_ __eax)
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

L08048475(_unknown_ __eax)
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
//     101 Register nodes
//      18 Temporaries nodes
//       6 Casts
//     176 Statements
//       2 Labels
//       0 Gotos
//      14 Blocks
//     370 Nodes
//       0 Assembly nodes
//      33 Unknown Types


