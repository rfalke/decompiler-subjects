L08048254()
{
    _unknown_ __ebp;

    L080482D0(__eax, __ebx);
    L08048330();
    L08048470(__edx);
    return;
}

int strlen(char* __s)
{// addr = 0x0804827C
    goto __imp__strlen;
}

__libc_start_main()
{// addr = 0x0804828C
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x0804829C
    goto __imp__printf;
}

L080482D0(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _push(_t5);
    _push(__eax);
    L1();
    _pop(__ebx);
    _t4 =  *((intOrPtr*)(_t5 + 4826 + 24));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482DA()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 4826 + 24));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L080482F4()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518224 != 0) {
        return ;
    }
    _t2 =  *134517972;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518224 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517972 = _t2 + 4;
             *__edx();
            _t2 =  *134517972;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048330()
{
    _unknown_ __ebp;

    if( *134518192 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518192);
    0();
    __esp = __esp + 16;
    return;
}

L0804835C(_unknown_ __eax, int _a4, char* _a8)
{
    int _v8;
    _unknown_ __ebp;
    _unknown_ _t13;
    int _t14;
    _unknown_ _t15;
    int _t17;
    int _t18;
    _unknown_ _t21;

    if(_a4 <= 2) {
        __esp = __esp - 12;
        _t14 = strlen(_a8);
        __esp = __esp + 12;
        _a4 = _t14;
    } else {
        __esp = __esp - 12;
        _t17 = strlen(_a8);
        __esp = __esp + 12;
        _a4 = _t17;
        __esp = __esp - 12;
        _t18 = strlen(_a8);
        __esp = __esp + 12;
        _v8 = _t18;
        __esp = __esp - 8;
        _push(_v8 + _a4);
        printf(134513848);
        __esp = __esp + 12;
    }
    __esp = __esp - 4;
    _push(_v8);
    _push(_a4);
    printf("%d, %d");
    __esp = __esp + 12;
    return _a4;
}

main(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{// addr = 0x080483CF
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t8;
    _unknown_ _t9;

    __esp = __esp & 240;
    __esp = __esp;
    __esp = __esp - 8;
    _push(L0804835C(_a8 + 4, _a4,  *((intOrPtr*)(_a8 + 4))));
    printf(134513858);
    __esp = __esp + 12;
    return 0;
}

L08048470(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518176;
    __ebx = 134518176;
    if(__eax != 255) {
        while(1) {
L1:
            __ebx = __ebx - 4;
             *__eax();
            __eax =  *__ebx;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

L0804849E()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L080482F4();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L0804849E()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x080482F4@L080482F4@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      65 Register nodes
//      18 Temporaries nodes
//       3 Casts
//     135 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     311 Nodes
//       0 Assembly nodes
//      28 Unknown Types


