L08048254()
{
    _unknown_ __ebp;

    L080482D0(__eax, __ebx);
    L08048330();
    L080483F8(__edx);
    return;
}

__xstat()
{// addr = 0x0804827C
    goto __imp____xstat;
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
    _t4 =  *((intOrPtr*)(_t5 + 4762 + 24));
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
    __eax =  *((intOrPtr*)(_t3 + 4762 + 24));
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

    if( *134518160 != 0) {
        return ;
    }
    _t2 =  *134517908;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518160 = 1;
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

L08048330()
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

main(_unknown_ __eax, _unknown_ __ebx, _unknown_ __edx)
{// addr = 0x0804835C
    _unknown_ _v8;
    intOrPtr _v64;
    char _v108;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t9;

    __edx = __edx;
    _t4 = __eax;
    _push(__ebx);
    __esp = __esp - 100;
    __esp = __esp & 240;
    _push(__edx);
    _push( &_v108);
    _push("test/source/stattest.c");
    _push(3);
    __xstat();
    __esp = __esp + 12;
    _push(_v64);
    _push(_t4);
    _push("Stat returns %d; size of file is %d\n");
    printf();
    return _t4;
}

L080483F8(_unknown_ __edx)
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

L08048426()
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

L08048426()
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
//      48 Register nodes
//      15 Temporaries nodes
//       2 Casts
//     121 Statements
//       6 Labels
//       1 Gotos
//      11 Blocks
//     219 Nodes
//       0 Assembly nodes
//      25 Unknown Types


