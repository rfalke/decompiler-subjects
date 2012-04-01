L08048250()
{
    _unknown_ __ebp;

    L080482C4(__eax, __ebx);
    L08048330(__edi, __esi);
    L08048460(__edi, __esi);
    return;
}

__libc_start_main()
{// addr = 0x08048278
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x08048288
    goto __imp__printf;
}

L080482C4(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _t3 = __eax;
    _push(_t5);
    L1();
    _pop(__ebx);
    _push(_t3);
    _t4 =  *((intOrPtr*)(_t5 + 4827 + 20));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482CD(_unknown_ __eax)
{
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _pop(__ebx);
    _push(__eax);
    _t4 =  *((intOrPtr*)(_t5 + 4827 + 20));
    if(_t4 != 0) {
         *_t4();
    }
    _pop(__ebp);
    return;
}

L080482F0(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    intOrPtr* _t3;
    _unknown_ _t5;
    _unknown_ _t6;

    if( *134518208 != 0) {
        return ;
    }
    _t3 =  *134517956;
    __edx =  *_t3;
    if(__edx == 0) {
L4:
         *134518208 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517956 = _t3 + 4;
             *__edx();
            _t3 =  *134517956;
            __edx =  *_t3;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048330(_unknown_ __edi, _unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    if( *134518180 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
     *__esp = 134518180;
    0();
    return;
}

main()
{// addr = 0x08048364
    intOrPtr _v8;
    intOrPtr _v24;
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t9;

    __esp = __esp & 240;
    __esp = __esp;
    _v8 = -2023406815;
    _v24 = _v8;
    printf(134513844);
    return;
}

L08048450()
{
    return;
}

L08048460(_unknown_ __edi, _unknown_ __esi)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    __esp = __esp - 4;
    __ebx = 134518164;
    __eax =  *134518164;
    if(__eax != 255) {
        while(1) {
L2:
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

L08048490(_unknown_ __ebx, _unknown_ __edx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _push(__ebx);
    L1();
    _pop(__ebx);
    _push(__edx);
    L080482F0(__esi);
    return;
}

L08048499(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    L080482F0(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048499(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    @rec 0x080482F0@L080482F0@(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      48 Register nodes
//      17 Temporaries nodes
//       2 Casts
//     143 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     217 Nodes
//       0 Assembly nodes
//      44 Unknown Types


