L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L080483B4(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4690 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4690 + 20));
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

    if( *134518032 != 0) {
        return ;
    }
    _t2 =  *134517784;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518032 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517784 = _t2 + 4;
             *__edx();
            _t2 =  *134517784;
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

    if( *134518004 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518004);
    0();
    __esp = __esp + 16;
    return;
}

main(_unknown_ __eax, _unknown_ __ebx, signed int __edx, _unknown_ _a4)
{// addr = 0x08048328
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t6;
    signed int _t9;
    _unknown_ _t10;

    __edx = __edx;
    _push(__ebx);
    _push(__eax);
    __esp = __esp & 240;
    _t9 = __edx & 4294967295;
    __esp = __esp - 8;
    _push(_t9);
    _push("Result is %d\n");
    printf();
    return _t9;
}

L080483B4(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134517988;
    __ebx = 134517988;
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

L080483E2()
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

L080483E2()
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
//      46 Register nodes
//      15 Temporaries nodes
//       2 Casts
//     115 Statements
//       6 Labels
//       1 Gotos
//      10 Blocks
//     202 Nodes
//       0 Assembly nodes
//      24 Unknown Types


