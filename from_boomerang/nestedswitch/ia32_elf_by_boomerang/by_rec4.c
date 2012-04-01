L08048280()
{
    _unknown_ __ebp;

    L080482FC(__ecx);
    L08048354();
    L08048494(__edx);
    return;
}

int puts(char* str)
{// addr = 0x080482A8
    goto __imp__puts;
}

__libc_start_main()
{// addr = 0x080482B8
    goto __imp____libc_start_main;
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
    if( *((intOrPtr*)(_t2 + 4898 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L08048306()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4898 + -4)) != 0) {
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

    __eax =  *134518104;
    if( *134518104 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518104);
     *__eax();
    __esp = __esp + 16;
    return;
}

main(signed int _a4)
{// addr = 0x0804837C
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    signed int _t10;
    _unknown_ _t11;
    _unknown_ _t12;

    __edx = _a4;
    __esp = __esp & 240;
    __esp = __esp - 16;
    _t7 = 10 - __edx;
    if(__edx > 7) {
L4:
        __esp = __esp - 12;
        puts("Other!");
        __esp = __esp + 12;
        return 0;
    } else {
        switch( *((intOrPtr*)(__edx * 4 +  &M0804850C))) {
            case 0:
                _t10 = _t7 - 3;
                if(_t10 <= 5) {
                    switch( *((intOrPtr*)(_t10 * 4 +  &M0804852C))) {
                        case 0:
                            goto L5;
                        case 1:
                            goto L6;
                        case 2:
                            goto L7;
                        case 3:
                            goto L8;
                        case 4:
                            goto L9;
                        case 5:
                            goto L11;
                    }
                } else {
                    goto L4;
                }
                goto L12;
            case 1:
                goto L4;
            case 2:
L5:
                __esp = __esp - 12;
                puts(134513888);
                __esp = __esp + 12;
                return 0;
                goto L12;
            case 3:
L6:
                __esp = __esp - 12;
                puts("Seven!");
                __esp = __esp + 12;
                return 0;
                goto L12;
            case 4:
L7:
                __esp = __esp - 12;
                puts("Six!");
                __esp = __esp + 12;
                return 0;
                goto L12;
            case 5:
L8:
                __esp = __esp - 12;
                puts("Five!");
                __esp = __esp + 12;
                return 0;
                goto L12;
            case 6:
L9:
                __esp = __esp - 12;
                puts("Three!");
                __esp = __esp + 12;
                return 0;
                goto L12;
            case 7:
L11:
                __esp = __esp - 12;
                puts("Four!");
                __esp = __esp + 12;
                return 0;
                goto L12;
        }
    }
L12:
}

L0804844A(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4574;
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

L08048494(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518088;
    if(__eax != 255) {
        __ebx = 134518088;
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

L08048494(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518088;
    if(__eax != 255) {
        __ebx = 134518088;
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
//      95 Register nodes
//      20 Temporaries nodes
//       5 Casts
//     106 Statements
//      22 Labels
//      16 Gotos
//      10 Blocks
//     390 Nodes
//       0 Assembly nodes
//      22 Unknown Types


