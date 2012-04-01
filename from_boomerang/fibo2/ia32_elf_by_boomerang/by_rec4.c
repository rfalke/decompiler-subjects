L08048254()
{
    _unknown_ __ebp;

    L080482D0(__eax, __ebx);
    L08048330();
    L08048448(__edx);
    return;
}

int scanf(char* format)
{// addr = 0x0804827C
    goto __imp__scanf;
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
    _t4 =  *((intOrPtr*)(_t5 + 4810 + 24));
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
    __eax =  *((intOrPtr*)(_t3 + 4810 + 24));
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

    if( *134518208 != 0) {
        return ;
    }
    _t2 =  *134517956;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518208 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517956 = _t2 + 4;
             *__edx();
            _t2 =  *134517956;
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

    if( *134518176 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518176);
    0();
    __esp = __esp + 16;
    return;
}

L0804835C(intOrPtr _a4)
{
    char _v16;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    intOrPtr _t12;
    char* _t13;
    _unknown_ _t14;

    __esp = _t13;
    _pop(__ebp);
    _push(_t13);
    _push(_t11);
    _t12 = _a4;
    _push(__ebx);
    if(_t12 > 1) {
        __esp = __esp - 12;
        _push(_t12 - 1);
        __ebx = L0804835C();
         *__esp = _t12 - 2;
        L0804835C() + _t6 = L0804835C() + _t6;
    } else {
        _t8 = _t12;
    }
    __esp =  &_v16;
    _pop(__ebx);
    _pop(__esi);
    return _t8;
}

main(_unknown_ __eax)
{// addr = 0x080483A0
    char _v8;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;

    __esp = __esp & 240;
    __esp = __esp - 12;
    _push("Input number: ");
    printf();
    _pop(__edx);
    _pop(__ecx);
    _push( &_v8);
    _push("%d");
    scanf();
    _pop(__eax);
    _push(_v8);
    _t7 = L0804835C();
    __esp = __esp + 12;
    _push(_t7);
    _push(_v8);
    _push("fibonacci(%d) = %d\n");
    printf();
    return 0;
}

L08048448(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518160;
    __ebx = 134518160;
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

L08048476()
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

L08048476()
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
//      56 Register nodes
//      26 Temporaries nodes
//       2 Casts
//     142 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     282 Nodes
//       0 Assembly nodes
//      31 Unknown Types


