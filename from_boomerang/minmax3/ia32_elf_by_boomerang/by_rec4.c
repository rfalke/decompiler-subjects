L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L0804842C(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4814 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4814 + 20));
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

    if( *134518156 != 0) {
        return ;
    }
    _t2 =  *134517908;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518156 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517908 = _t2 + 4;
             *__edx();
            _t2 =  *134517908;
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

    if( *134518128 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518128);
    0();
    __esp = __esp + 16;
    return;
}

L08048328(intOrPtr _a4)
{
    _unknown_ __ebp;
    _unknown_ _t4;
    int _t5;
    _unknown_ _t6;
    _unknown_ _t11;

    asm("sbb ecx, eax");
    _t12 = -2 - (-2 - _a4 & -1);
    asm("sbb ebx, 0x0");
    __esp = __esp - 8;
    _push((-2 - (-2 - _a4 & -1) - 3 & _t12 >> 31) + 3);
    _t5 = printf("MinMax result %d\n");
    __esp = __esp + 12;
    return _t5;
}

main(intOrPtr _a4)
{// addr = 0x0804836F
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    __esp = __esp & 240;
    __esp = __esp;
    __esp = __esp - 12;
    L08048328(251);
    __esp = __esp + 12;
    __esp = __esp - 12;
    L08048328(254);
    __esp = __esp + 12;
    __esp = __esp - 12;
    L08048328(0);
    __esp = __esp + 12;
    __esp = __esp - 12;
    L08048328(_a4);
    __esp = __esp + 12;
    __esp = __esp - 12;
    L08048328(5);
    __esp = __esp + 12;
    return 0;
}

L0804842C(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518112;
    __ebx = 134518112;
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

L0804845A()
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

L0804845A()
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
//      65 Register nodes
//      16 Temporaries nodes
//       2 Casts
//     147 Statements
//       6 Labels
//       1 Gotos
//      11 Blocks
//     297 Nodes
//       2 Assembly nodes
//      29 Unknown Types


