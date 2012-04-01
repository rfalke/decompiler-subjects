L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L080483C8(__edx);
    return;
}

__libc_start_main()
{// addr = 0x08048258
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x08048268
    goto __imp__printf;
}

L0804829C(_unknown_ __eax, _unknown_ __ebx)
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
    _t4 =  *((intOrPtr*)(_t5 + 4718 + 20));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482A6()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 4718 + 20));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L080482C0()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518060 != 0) {
        return ;
    }
    _t2 =  *134517812;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518060 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517812 = _t2 + 4;
             *__edx();
            _t2 =  *134517812;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L080482FC()
{
    _unknown_ __ebp;

    if( *134518032 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518032);
    0();
    __esp = __esp + 16;
    return;
}

main(_unknown_ __eax, _unknown_ __ebx, _unknown_ __edx)
{// addr = 0x08048328
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t2;
    int _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t7;
    _unknown_ _t8;

    __edx = __edx;
    _push(__ebx);
    _push(__edx);
    __esp = __esp & 240;
    _t7 = 0;
    while(1) {
L1:
        __esp = __esp - 8;
        _t7 = _t7 + 1;
        _push(_t7);
        _t3 = printf(134513680);
        __esp = __esp + 12;
        if(_t7 > 9) {
            break;
        }
    }
    _push(_t3);
    _push(10);
    _push(10);
    _push("a is %d, x is %d\n");
    printf();
    return 0;
}

L080483C8(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518016;
    __ebx = 134518016;
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

L080483F6()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L080482C0();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080483F6()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x080482C0@L080482C0@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      47 Register nodes
//      19 Temporaries nodes
//       2 Casts
//     114 Statements
//       8 Labels
//       1 Gotos
//      10 Blocks
//     226 Nodes
//       0 Assembly nodes
//      27 Unknown Types


