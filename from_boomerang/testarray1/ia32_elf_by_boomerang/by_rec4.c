L08048278()
{
    _unknown_ __ebp;

    L080482E4(__edx);
    L0804833C(__esi);
    L08048464(__edx);
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
    __eax =  *((intOrPtr*)(_t2 + 4783 + -4));
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
    __eax =  *((intOrPtr*)(_t2 + 4783 + -4));
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

    if( *134518212 != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134518200;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134518200 = _t2 + 4;
         *__edx();
    }
     *134518212 = 1;
    return;
}

L0804833C(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134517964;
    if( *134517964 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134517964);
     *__eax();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x08048368
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t13;
    _unknown_ _t14;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    _v12 = 0;
    _v8 = 0;
    while(_v8 <= 4) {
        _v12 = _v12 +  *((char*)(_v8 + 134518204));
        _v8 = _v8 + 1;
    }
}

L080483DA()
{
    intOrPtr _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t11 = _t10 + 4546;
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

L0804842B()
{
    _unknown_ _t9;
    _unknown_ _t10;

    _pop(__ebx);
    _t10 = _t9 + 4465;
    __edi = _t10 + -224;
    _t8 = _t10 + -224 - __edi >> 2;
    __esp = __esp - 12;
    __esi = (_t10 + -224 - __edi >> 2) - 1;
    while(__esi != 255) {
         *((intOrPtr*)(__edi + __esi * 4))();
        __esi = __esi - 1;
    }
}

L08048464(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134517948;
    __eax =  *134517948;
    while(__eax != 255) {
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
    }
}

L08048488(_unknown_ __eax)
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

L08048491(_unknown_ __eax)
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

L08048491(_unknown_ __eax)
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
//      97 Register nodes
//      18 Temporaries nodes
//       7 Casts
//     161 Statements
//       2 Labels
//       0 Gotos
//      13 Blocks
//     367 Nodes
//       0 Assembly nodes
//      31 Unknown Types


