_init()
{// addr = 0x0804853C
    _unknown_ __ebp;

    L08048648(__edx);
    L080486A0(__esi);
    L08048934(__edx);
    return;
}

do_lio()
{// addr = 0x08048564
    goto __imp__do_lio;
}

e_wsle()
{// addr = 0x08048574
    goto __imp__e_wsle;
}

s_rsle()
{// addr = 0x08048594
    goto __imp__s_rsle;
}

__cxa_atexit()
{// addr = 0x080485A4
    goto __imp____cxa_atexit;
}

e_rsle()
{// addr = 0x080485B4
    goto __imp__e_rsle;
}

__libc_start_main()
{// addr = 0x080485C4
    goto __imp____libc_start_main;
}

f_init()
{// addr = 0x080485D4
    goto __imp__f_init;
}

f_setsig()
{// addr = 0x080485E4
    goto __imp__f_setsig;
}

void exit(int __status)
{// addr = 0x080485F4
    goto __imp__exit;
}

f_setarg()
{// addr = 0x08048604
    goto __imp__f_setarg;
}

s_wsle()
{// addr = 0x08048614
    goto __imp__s_wsle;
}

L08048648(_unknown_ __edx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __edx = __edx;
    L1();
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 5219 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    return;
}

L08048651(_unknown_ __edx)
{
    _unknown_ _t2;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    __eax =  *((intOrPtr*)(_t2 + 5219 + -4));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L0804866C()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if(__bss_start != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134519544;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134519544 = _t2 + 4;
         *__edx();
    }
    __bss_start = 1;
    return;
}

L080486A0(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134519240;
    if( *134519240 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134519240);
     *__eax();
    __esp = __esp + 16;
    return;
}

L080486CC()
{
    char _v8;
    intOrPtr _v16;
    _unknown_ _t11;

    _push(134519548);
    s_wsle();
    __esp = __esp + 16;
    _push(10);
    _push("Input num:Input out of rangeTwo!Three!Four!");
    _push(134515112);
    _push(134515116);
    do_lio();
    __esp = __esp + 16;
    e_wsle();
    __esp = __esp - 12;
    _push(134519568);
    s_rsle();
    __esp = __esp + 16;
    _push(4);
    _push( &_v8);
    _push(134515112);
    _push(134515120);
    do_lio();
    __esp = __esp + 16;
    e_rsle();
    _v16 = 134514528;
    if(_v8 == 2) {
        _v16 = 134514579;
    }
    if(_v8 == 3) {
        _v16 = 134514627;
    }
    if(_v8 == 4) {
        _v16 = 134514675;
    }
    goto __eax;
}

main(intOrPtr _a4, intOrPtr _a8)
{// addr = 0x08048824
    intOrPtr _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t12;
    intOrPtr _t13;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t21;
    signed int _t22;
    _unknown_ _t23;
    _unknown_ _t24;

    __esp = __esp & 240;
    __esp = __esp - 16;
    _v24 = _a8;
     *__esp = _a4;
    f_setarg();
    f_setsig();
    f_init();
    L08048904(_t16,  &f_exit);
    L080486CC();
    exit(0);
    _push(_t23);
    _push(__edi);
    _push(_t21);
    _push(_t16);
    __esp = __esp - 12;
    L2();
    _pop(__ebx);
    _t17 = _t16 + 4666;
    _init();
    _t13 = _t17 + -252;
    __edx = _t17 + -252;
    _v24 = _t13;
    _t22 = 0;
    if(0 < _t13 - __edx >> 2) {
        __edi = __edx;
        while(1) {
L4:
             *((intOrPtr*)(__edx + _t22 * 4))();
            _t22 = _t22 + 1;
            __edx = __edi;
            if(_t22 >= _v24 - __edi >> 2) {
                break;
            }
        }
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    return;
}

L0804887A()
{
    intOrPtr _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    _pop(__ebx);
    _t11 = _t10 + 4666;
    _init();
    _t7 = _t11 + -252;
    __edx = _t11 + -252;
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

L080488CB()
{
    _unknown_ _t9;
    _unknown_ _t10;

    _pop(__ebx);
    _t10 = _t9 + 4585;
    __edi = _t10 + -252;
    _t8 = _t10 + -252 - __edi >> 2;
    __esp = __esp - 12;
    __esi = (_t10 + -252 - __edi >> 2) - 1;
    while(__esi != 255) {
         *((intOrPtr*)(__edi + __esi * 4))();
        __esi = __esi - 1;
    }
}

L08048904(_unknown_ __ebx, intOrPtr _a4)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t6;

    _t4 = __ebx;
    _push(_t4);
    L1();
    _pop(__ebx);
    __edx =  *((intOrPtr*)(_t4 + 4519 + -8));
    __eax = 0;
    if(__edx != 0) {
        __eax =  *__edx;
    }
    _push(__eax);
    _push(0);
    _push(_a4);
    __cxa_atexit();
    return;
}

L0804890D()
{
    _unknown_ _t4;
    _unknown_ _t6;

    _pop(__ebx);
    __edx =  *((intOrPtr*)(_t4 + 4519 + -8));
    __eax = 0;
    if(__edx != 0) {
        __eax =  *__edx;
    }
    _push(__eax);
    _push(0);
    _push( *((intOrPtr*)(__ebp + 8)));
    __cxa_atexit();
    _pop(__ebp);
    return;
}

L08048934(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __ebx = 134519224;
    __eax =  *134519224;
    while(__eax != 255) {
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
    }
}

_fini(_unknown_ __eax)
{// addr = 0x08048958
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    L1();
    _pop(__ebx);
    _push(__eax);
    L0804866C();
    _pop(__ecx);
    return;
}

L08048961(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    L0804866C();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048961(_unknown_ __eax)
{
    _unknown_ _t1;
    _unknown_ _t2;

    __eax = __eax;
    _pop(__ebx);
    _push(__eax);
    @rec 0x0804866C@L0804866C@();
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//     143 Register nodes
//      38 Temporaries nodes
//      10 Casts
//     303 Statements
//       4 Labels
//       0 Gotos
//      25 Blocks
//     623 Nodes
//       0 Assembly nodes
//      45 Unknown Types


