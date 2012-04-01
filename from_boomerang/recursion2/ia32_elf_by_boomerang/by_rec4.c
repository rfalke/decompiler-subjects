L08048280()
{
    _unknown_ __ebp;

    L080482FC(__ecx);
    L08048354();
    L08048698(__edx);
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
    if( *((intOrPtr*)(_t2 + 5350 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L08048306()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5350 + -4)) != 0) {
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

    __eax =  *134518556;
    if( *134518556 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518556);
     *__eax();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x0804837C
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t9;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    L080483D6();
    __esp = __esp - 4;
    _push(55);
    _push(99);
    printf("ecx is %d, edx is %d\n");
    __esp = __esp + 12;
    __esp = __esp - 8;
    _push( *134518860);
    printf("res is %d\n");
    __esp = __esp + 12;
    return 0;
}

L080483D6()
{
    _unknown_ __ebp;

     *134518800 =  *134518800 - 1;
    if( *134518800 < 0) {
        asm("xchg edx, ecx");
        L08048408();
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 2;
    return;
}

L08048408()
{
    _unknown_ __ebp;

     *134518804 =  *134518804 - 1;
    if( *134518804 < 0) {
        asm("xchg edx, ecx");
        L080484A6();
        asm("xchg edx, ecx");
    }
     *134518816 =  *134518816 - 1;
    if( *134518816 < 0) {
        L0804850A();
    }
     *134518828 =  *134518828 - 1;
    if( *134518828 < 0) {
        L08048566();
    }
     *134518836 =  *134518836 - 1;
    if( *134518836 < 0) {
        asm("xchg edx, ecx");
        L080485A6();
        asm("xchg edx, ecx");
    }
     *134518848 =  *134518848 - 1;
    if( *134518848 < 0) {
        asm("xchg edx, ecx");
        L0804860B();
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 3;
    return;
}

L080484A6()
{
    _unknown_ __ebp;

     *134518808 =  *134518808 - 1;
    if( *134518808 < 0) {
        asm("xchg edx, ecx");
        L080484D8();
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 5;
    return;
}

L080484D8()
{
    _unknown_ __ebp;

     *134518812 =  *134518812 - 1;
    if( *134518812 < 0) {
        asm("xchg edx, ecx");
        L08048408();
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 7;
    return;
}

L0804850A()
{
    _unknown_ __ebp;

     *134518820 =  *134518820 - 1;
    if( *134518820 < 0) {
        L08048538();
    }
     *134518860 =  *134518860 + 11;
    return;
}

L08048538()
{
    _unknown_ __ebp;

     *134518824 =  *134518824 - 1;
    if( *134518824 < 0) {
        L0804850A();
    }
     *134518860 =  *134518860 + 13;
    return;
}

L08048566()
{
    _unknown_ __ebp;

     *134518832 =  *134518832 - 1;
    if( *134518832 < 0) {
        L08048594();
    }
     *134518860 =  *134518860 + 17;
    return;
}

L08048594()
{
    _unknown_ __ebp;

     *134518860 =  *134518860 + 19;
    return;
}

L080485A6()
{
    _unknown_ __ebp;

     *134518840 =  *134518840 - 1;
    if( *134518840 < 0) {
        asm("xchg edx, ecx");
        L080485D8(__edx);
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 23;
    return;
}

L080485D8(_unknown_ __edx)
{
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;

     *134518844 =  *134518844 - 1;
    if( *134518844 < 0) {
        asm("xchg edx, ecx");
        L080484D8();
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 27;
    return;
}

L0804860B()
{
    _unknown_ __ebp;

     *134518852 =  *134518852 - 1;
    if( *134518852 < 0) {
        asm("xchg edx, ecx");
        L080483D6();
        asm("xchg edx, ecx");
    }
     *134518860 =  *134518860 + 29;
    return;
}

L0804864E(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4510;
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

L08048698(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518540;
    if(__eax != 255) {
        __ebx = 134518540;
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

L08048698(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518540;
    if(__eax != 255) {
        __ebx = 134518540;
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
//      72 Register nodes
//      15 Temporaries nodes
//       3 Casts
//     299 Statements
//       6 Labels
//       1 Gotos
//      21 Blocks
//     572 Nodes
//      18 Assembly nodes
//      34 Unknown Types


