_init()
{// addr = 0x0804835C
    _unknown_ __ebp;

    L080483F4(__ecx);
    L08048450();
    L080485A0(__edi, __esi);
    return;
}

xf86GetPciVideoInfo()
{// addr = 0x08048384
    goto __imp__xf86GetPciVideoInfo;
}

__libc_start_main()
{// addr = 0x08048394
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080483A4
    goto __imp__printf;
}

__gmon_start__()
{// addr = 0x080483B4
    goto __imp____gmon_start__;
}

L080483F4(_unknown_ __ecx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __ecx = __ecx;
    _push(__ecx);
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4842 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L080483FE()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4842 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048420()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if(__bss_start != 0) {
        return ;
    }
    while(1) {
        _t2 =  *134518540;
        __edx =  *_t2;
        if(__edx == 0) {
            break;
        }
         *134518540 = _t2 + 4;
         *__edx();
    }
    __bss_start = 1;
    return;
}

L08048450()
{
    _unknown_ __ebp;

    __eax =  *134518288;
    if( *134518288 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134518288;
     *__eax();
    return;
}

L08048474(intOrPtr _a4)
{
    _unknown_ __ebp;

    return  *((intOrPtr*)(_a4 + 24));
}

main(_unknown_ __eax)
{// addr = 0x0804847F
    signed int _v8;
    intOrPtr _v24;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;
    signed int _t9;
    _unknown_ _t13;
    _unknown_ _t14;

    __esp = __esp & 240;
    _t9 = 0x1e >> 4 << 4;
    __esp = __esp - _t9;
    xf86GetPciVideoInfo();
    _v8 = _t9;
    _v24 = L08048474( *_v8);
    printf(134514168);
    return 0;
}

L080484DE(_unknown_ __eflags)
{
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    intOrPtr* _t17;

    __eflags = __eflags;
    _pop(__ebx);
    _t11 = _t10 + 4618;
    _init();
    __edx = _t11 + -232;
     *(__ebp - 16) = _t11 + -232 - __edx >> 2;
    if(__eflags != 0) {
        _t17 = __edx;
        _t14 = 0;
        while(1) {
L3:
             *_t17();
            _t14 = _t14 + 1;
            _t17 = _t17 + 4;
            __eflags = _t14 -  *(__ebp - 16);
            if(_t14 >=  *(__ebp - 16)) {
                break;
            }
        }
        __esp = __esp + 12;
        _pop(__ebx);
        _pop(__esi);
        _pop(__edi);
        _pop(__ebp);
        return;
L5:
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    _pop(__ebp);
    return;
    goto L5;
}

L0804854E()
{
    signed int _t11;
    signed int _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    intOrPtr* _t20;

    _pop(__ebx);
    _t14 = _t13 + 4506;
    __edx = _t14 + -232;
    _t11 = _t14 + -232 - __edx >> 2;
     *(__ebp - 16) = _t11;
    _t12 = _t11 - 1;
    if(_t12 != 255) {
        _t20 = __edx + _t12 * 4;
        _t17 = 0;
        while(1) {
L2:
             *_t20();
            _t17 = _t17 + 1;
            _t20 = _t20 - 4;
            if( *(__ebp - 16) == _t17) {
                break;
            }
        }
    }
    _fini();
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    _pop(__ebp);
    return;
}

L080485A0(_unknown_ __edi, _unknown_ __esi)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    __esp = __esp - 4;
    __eax =  *134518272;
    if(__eax != 255) {
        __ebx = 134518272;
        while(1) {
L2:
             *__eax();
            __eax =  *((intOrPtr*)(__ebx - 4));
            __ebx = __ebx - 4;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

_fini()
{// addr = 0x080485D4
    _unknown_ __eax;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    L1();
    _pop(__ebx);
    L08048420();
    return;
}

L080485DE()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    L08048420();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080485DE()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    @rec 0x08048420@L08048420@();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      78 Register nodes
//      39 Temporaries nodes
//       4 Casts
//     184 Statements
//       8 Labels
//       1 Gotos
//      16 Blocks
//     388 Nodes
//       0 Assembly nodes
//      43 Unknown Types


