L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L080483E4(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4726 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4726 + 20));
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

    if( *134518068 != 0) {
        return ;
    }
    _t2 =  *134517820;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518068 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517820 = _t2 + 4;
             *__edx();
            _t2 =  *134517820;
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

    if( *134518040 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518040);
    0();
    __esp = __esp + 16;
    return;
}

L08048328(intOrPtr _a4, intOrPtr _a8)
{
    _unknown_ __ebp;

    return _a8 + _a4;
}

main(_unknown_ __eax)
{// addr = 0x08048333
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t4;
    _unknown_ _t6;

    __esp = __esp & 240;
    __esp = __esp;
    __esp = __esp - 8;
    _push(L08048328(3, 4));
    printf(134513708);
    __esp = __esp + 12;
    __esp = __esp - 8;
    _push(L08048328(5, 6));
    printf(134513708);
    __esp = __esp + 12;
    return;
}

L080483E4(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518024;
    __ebx = 134518024;
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

L08048412()
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

L08048412()
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
//      49 Register nodes
//      12 Temporaries nodes
//       2 Casts
//     126 Statements
//       6 Labels
//       1 Gotos
//      11 Blocks
//     226 Nodes
//       0 Assembly nodes
//      24 Unknown Types


