L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L080483BC(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4766 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4766 + 20));
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

    if( *134518108 != 0) {
        return ;
    }
    _t2 =  *134517800;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518108 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517800 = _t2 + 4;
             *__edx();
            _t2 =  *134517800;
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

    if( *134518080 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518080);
    0();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x08048328
    _unknown_ __ebp;
    signed int _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    __esp = __esp & 240;
    __edx = 0;
    _t3 = 0;
    __ecx = 134517824;
    while(1) {
L1:
        __edx = __edx +  *((intOrPtr*)(__ecx + _t3 * 4));
        _t3 = _t3 + 1;
        if(_t3 > 9) {
            break;
        }
    }
    __esp = __esp - 8;
    _push(__edx);
    _push("Sum is %d\n");
    printf();
    return 0;
}

L080483BC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518064;
    __ebx = 134518064;
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

L080483EA()
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

L080483EA()
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
//      17 Temporaries nodes
//       3 Casts
//     108 Statements
//       8 Labels
//       1 Gotos
//      10 Blocks
//     219 Nodes
//       0 Assembly nodes
//      20 Unknown Types


