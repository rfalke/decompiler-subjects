L08048280()
{
    _unknown_ __ebp;

    L080482FC(__ecx);
    L08048354();
    L080483FC(__edx);
    return;
}

__libc_start_main()
{// addr = 0x080482A8
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482B8
    goto __imp__printf;
}

__gmon_start__()
{// addr = 0x080482C8
    goto __imp____gmon_start__;
}

L080482FC(_unknown_ __ecx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __ecx = __ecx;
    _push(__ecx);
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4662 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L08048306()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4662 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048354()
{
    _unknown_ __ebp;

    __eax =  *134517868;
    if( *134517868 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134517868);
     *__eax();
    __esp = __esp + 16;
    return;
}

main(_unknown_ __eax, _unknown_ __esp, _unknown_ _a4)
{// addr = 0x0804837C
    _unknown_ _t2;
    _unknown_ _t4;
    _unknown_ _t5;

    __esp = __esp;
    _push(L08048396());
    printf("Result is %d\n");
    __esp = __esp + 4;
    return 0;
}

L08048396()
{
    _unknown_ __ebx;
    _unknown_ _t3;
    _unknown_ _t4;

    return _t3 + _t3;
}

L080483B2(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4490;
    L08048280();
    __edx = _t9 + -224;
     *(__ebp - 16) = _t9 + -224 - __edx >> 2;
    if(__eflags != 0) {
        _t11 = 0;
        _t13 = __edx;
        while(1) {
L3:
             *_t13();
            _t11 = _t11 + 1;
            _t13 = _t13 + 4;
            __eflags = _t11 -  *(__ebp - 16);
            if(_t11 >=  *(__ebp - 16)) {
                break;
            }
        }
        __esp = __esp + 12;
        _pop(__ebx);
        _pop(__esi);
        _pop(__edi);
        __esp = __ebp;
        _pop(__ebp);
        return;
L5:
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L5;
}

L080483FC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134517852;
    if(__eax != 255) {
        __ebx = 134517852;
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

L080483FC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134517852;
    if(__eax != 255) {
        __ebx = 134517852;
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

// Statistics:
//      63 Register nodes
//      17 Temporaries nodes
//       3 Casts
//     117 Statements
//       6 Labels
//       1 Gotos
//      11 Blocks
//     249 Nodes
//       0 Assembly nodes
//      24 Unknown Types


