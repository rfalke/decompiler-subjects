L08048278()
{
    _unknown_ __ebp;

    L080482E4(__eax, __ebx);
    L08048344(__esi);
    L08048444(__edx);
    return;
}

__libc_start_main()
{// addr = 0x080482A0
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482B0
    goto __imp__printf;
}

L080482E4(_unknown_ __eax, _unknown_ __ebx)
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
    _t4 =  *((intOrPtr*)(_t5 + 4755 + -4));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482ED(_unknown_ __eax)
{
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _pop(__ebx);
    _push(__eax);
    _t4 =  *((intOrPtr*)(_t5 + 4755 + -4));
    if(_t4 != 0) {
         *_t4();
    }
    _pop(__ebp);
    return;
}

L08048308()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518176 != 0) {
        return ;
    }
    _t2 =  *134518172;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518176 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518172 = _t2 + 4;
             *__edx();
            _t2 =  *134518172;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048344(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;

    __eax =  *134517936;
    if( *134517936 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134517936);
     *__eax();
    __esp = __esp + 16;
    return;
}

L08048370(intOrPtr _a4)
{
    _unknown_ __ebp;

    asm("bswap eax");
    return _a4;
}

main(_unknown_ __eax)
{// addr = 0x0804837A
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    intOrPtr _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    __esp = __esp & 240;
    __esp = __esp;
    __esp = __esp - 12;
    _t5 = L08048370(305419896);
    __esp = __esp + 12;
    _v8 = _t5;
    __esp = __esp - 8;
    _push(_v8);
    printf("Output is %x\n");
    __esp = __esp + 12;
    return 0;
}

L080483C6()
{
    _unknown_ _t6;
    _unknown_ _t7;
    signed int _t10;

    _pop(__ebx);
    _t7 = _t6 + 4538;
    L08048278();
    __esi = 0;
    _t10 = _t7 + -224 - _t7 + -224 >> 2;
    if(0 < _t10) {
        __edi = _t10;
        while(1) {
L2:
             *((intOrPtr*)(_t7 + -224 + __esi * 4))();
            __esi = __esi + 1;
            if(__esi >= __edi) {
                break;
            }
        }
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L0804840A()
{
    _unknown_ _t7;
    _unknown_ _t8;
    signed int _t11;

    _pop(__ebx);
    _t8 = _t7 + 4470;
    _t11 = _t8 + -224 - _t8 + -224 >> 2;
    __esi = _t11 - 1;
    if(_t11 != 0) {
        while(1) {
L2:
             *((intOrPtr*)(_t8 + -224 + __esi * 4))();
            __edx = __esi;
            __esi = __esi - 1;
            if(__edx == 0) {
                break;
            }
        }
    }
    L08048468(_t8, __edx);
    _pop(__ebx);
    _pop(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048444(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134517920;
    __ebx = 134517920;
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

L08048468(_unknown_ __ebx, _unknown_ __edx)
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
    L08048308();
    return;
}

L08048471(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    L08048308();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048471(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    @rec 0x08048308@L08048308@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      90 Register nodes
//      36 Temporaries nodes
//       4 Casts
//     190 Statements
//      10 Labels
//       1 Gotos
//      14 Blocks
//     383 Nodes
//       1 Assembly nodes
//      40 Unknown Types


