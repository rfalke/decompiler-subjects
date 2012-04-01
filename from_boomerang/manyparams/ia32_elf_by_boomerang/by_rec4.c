L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L080483D8(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4802 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4802 + 20));
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

    if( *134518144 != 0) {
        return ;
    }
    _t2 =  *134517896;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518144 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517896 = _t2 + 4;
             *__edx();
            _t2 =  *134517896;
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

    if( *134518116 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518116);
    0();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x08048328
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    __esp = __esp & 240;
    __esp = __esp - 12;
    _push(1074895257);
    _push(-1717986918);
    _push(4);
    _push(1074423398);
    _push(1717986918);
    _push(3);
    _push(1073846681);
    _push(-1717986918);
    _push(2);
    _push(1072798105);
    _push(-1717986918);
    _push(1);
    _push("Many parameters: %d, %.1f, %d, %.1f, %d, %.1f, %d, %.1f\n");
    printf();
    return 0;
}

L080483D8(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518100;
    __ebx = 134518100;
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

L08048406()
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

L08048406()
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
//      41 Register nodes
//      12 Temporaries nodes
//       2 Casts
//     113 Statements
//       6 Labels
//       1 Gotos
//      10 Blocks
//     212 Nodes
//       0 Assembly nodes
//      20 Unknown Types


