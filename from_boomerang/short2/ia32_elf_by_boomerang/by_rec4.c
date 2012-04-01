L08048280()
{
    _unknown_ __ebp;

    L080482FC(__ecx);
    L08048354();
    L08048464(__edx);
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
    if( *((intOrPtr*)(_t2 + 4846 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L08048306()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4846 + -4)) != 0) {
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

    __eax =  *134518052;
    if( *134518052 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518052);
     *__eax();
    __esp = __esp + 16;
    return;
}

L0804837C(intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    _unknown_ __ebp;
    intOrPtr _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    _t4 = _a8;
    if(_a4 >= _t4) {
        return 0;
    }
    if(_t4 >= _a12) {
        return 0;
    }
    return 1;
}

main(_unknown_ __eax)
{// addr = 0x08048398
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;

    __esp = __esp & 240;
    __esp = __esp - 16;
    _push(6);
    _push(5);
    _push(4);
     *__esp = L0804837C();
    _push("Result for 4, 5, 6: %d\n");
    printf();
    _t4 = L0804837C(6, 5, 4);
    __esp = __esp + 8;
    _push(_t4);
    _push("Result for 6, 5, 4: %d\n");
    printf();
    _t6 = L0804837C(4, 6, 5);
    __esp = __esp + 8;
    _push(_t6);
    _push("Result for 4, 6, 5: %d\n");
    printf();
    _t8 = L0804837C(6, 4, 5);
    __esp = __esp + 8;
    _push(_t8);
    _push("Result for 6, 4, 5: %d\n");
    printf();
    return 0;
}

L0804841A(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4570;
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

L08048464(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518036;
    if(__eax != 255) {
        __ebx = 134518036;
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

L08048464(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518036;
    if(__eax != 255) {
        __ebx = 134518036;
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
//      70 Register nodes
//      24 Temporaries nodes
//       3 Casts
//     149 Statements
//       6 Labels
//       1 Gotos
//      11 Blocks
//     334 Nodes
//       0 Assembly nodes
//      29 Unknown Types


