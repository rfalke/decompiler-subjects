L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L080483F4(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4762 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4762 + 20));
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

    if( *134518104 != 0) {
        return ;
    }
    _t2 =  *134517848;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518104 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517848 = _t2 + 4;
             *__edx();
            _t2 =  *134517848;
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

    if( *134518076 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518076);
    0();
    __esp = __esp + 16;
    return;
}

L08048328()
{
    _unknown_ __ebp;

     *134517856 = 12;
    __esp = __esp - 8;
    _push( *134517852);
    printf("a = %i\n");
    __esp = __esp + 12;
    return;
}

L08048350()
{
    _unknown_ __ebp;

    L08048328();
    return;
}

main()
{// addr = 0x0804835D
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;

    __esp = __esp & 240;
    __esp = __esp;
    L08048350();
    __esp = __esp - 8;
    _push( *134517856);
    printf("b = %i\n");
    __esp = __esp + 12;
    return 0;
}

L080483F4(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518060;
    __ebx = 134518060;
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

L08048422()
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

L08048422()
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
//     121 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     227 Nodes
//       0 Assembly nodes
//      23 Unknown Types


