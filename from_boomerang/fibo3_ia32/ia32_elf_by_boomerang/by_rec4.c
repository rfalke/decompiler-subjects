L080482A4()
{
    _unknown_ __ebp;

    L08048330(__ecx);
    L08048388();
    L080484BC(__edx);
    return;
}

int scanf(char* format)
{// addr = 0x080482CC
    goto __imp__scanf;
}

__libc_start_main()
{// addr = 0x080482DC
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482EC
    goto __imp__printf;
}

__gmon_start__()
{// addr = 0x080482FC
    goto __imp____gmon_start__;
}

L08048330(_unknown_ __ecx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __ecx = __ecx;
    _push(__ecx);
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4826 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L0804833A()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 4826 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048388()
{
    _unknown_ __ebp;

    __eax =  *134518084;
    if( *134518084 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518084);
     *__eax();
    __esp = __esp + 16;
    return;
}

L080483B0(_unknown_ __ebx, intOrPtr _a4)
{
    _unknown_ _v8;
    intOrPtr _v12;
    _unknown_ __edx;
    _unknown_ __ebp;
    _unknown_ _t13;
    _unknown_ _t16;
    _unknown_ _t18;
    _unknown_ _t19;

    _t17 = __ebx;
    _push(__ebx);
    __esp = __esp - 4;
    if(_a4 <= 1) {
        _v12 = _a4;
        return _v12;
    }
    __esp = __esp - 12;
    _t13 = L080483B0(_t17, _a4 - 1);
    __esp = __esp + 12;
    _push(__edx);
    _push(__edx);
    _push(_t13);
    _push(_a4 - 2);
    _t16 = L080483B0(_t17);
    _pop(__edx);
    _pop(__ecx);
    __esp = __esp + 8;
    _v12 = _t19 + _t16;
    return _v12;
}

main(_unknown_ __eax)
{// addr = 0x080483F6
    intOrPtr _v8;
    char _v12;
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t12;
    _unknown_ _t14;
    _unknown_ _t18;
    _unknown_ _t19;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    __esp = __esp - 12;
    printf("Input number: ");
    __esp = __esp + 12;
    __esp = __esp - 8;
    _push( &_v12);
    scanf("%d");
    __esp = __esp + 12;
    _v8 = L080483B0(__ebx, _v12);
    __esp = __esp - 4;
    _push(_v8);
    _push(_v12);
    printf("fibonacci(%d) = %d\n");
    __esp = __esp + 12;
    return 0;
}

L08048472(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4514;
    L080482A4();
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

L080484BC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518068;
    if(__eax != 255) {
        __ebx = 134518068;
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

L080484BC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518068;
    if(__eax != 255) {
        __ebx = 134518068;
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
//      90 Register nodes
//      23 Temporaries nodes
//       3 Casts
//     175 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     374 Nodes
//       0 Assembly nodes
//      31 Unknown Types


