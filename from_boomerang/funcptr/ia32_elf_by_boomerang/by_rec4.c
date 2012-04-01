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
    _t4 =  *((intOrPtr*)(_t5 + 4646 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4646 + 20));
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

    if( *134517988 != 0) {
        return ;
    }
    _t2 =  *134517736;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134517988 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517736 = _t2 + 4;
             *__edx();
            _t2 =  *134517736;
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

    if( *134517960 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134517960);
    0();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x08048358
    intOrPtr* _v8;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t8;

    __esp = __esp & 240;
    __esp = __esp;
    _v8 = 134513448;
     *_v8();
    _v8 = 134513472;
     *_v8();
    return;
}

L08048388(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134517944;
    __ebx = 134517944;
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

L080483B6()
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

L080483B6()
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
//      38 Register nodes
//      12 Temporaries nodes
//       2 Casts
//     103 Statements
//       6 Labels
//       1 Gotos
//       9 Blocks
//     179 Nodes
//       0 Assembly nodes
//      19 Unknown Types


