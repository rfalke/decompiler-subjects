L08048254()
{
    _unknown_ __ebp;

    L080482D0(__eax, __ebx);
    L08048330();
    L08048434(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4790 + 24));
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
    __eax =  *((intOrPtr*)(_t3 + 4790 + 24));
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

    if( *134518188 != 0) {
        return ;
    }
    _t2 =  *134517936;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518188 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517936 = _t2 + 4;
             *__edx();
            _t2 =  *134517936;
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

    if( *134518156 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518156);
    0();
    __esp = __esp + 16;
    return;
}

L0804835C(intOrPtr _a4)
{
    intOrPtr __ebx;
    _unknown_ __ebp;
    intOrPtr _t2;
    intOrPtr _t3;
    intOrPtr _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t4 = _a4;
    _push(__ebx);
    _t2 = _t4;
    if(_t4 > 1) {
        _t7 = _t4 - 2;
        __ecx = 1;
        __ebx = 1;
        if(_t7 > 0) {
            _t5 = _t4 - 2;
            while(1) {
L3:
                _t3 = __ecx;
                __ecx = __ecx + __ebx;
                _t5 = _t5 - 1;
                __ebx = _t3;
                if(_t7 == 0) {
                    break;
                }
            }
        }
        _t2 = __ecx;
    }
    _pop(__ebx);
    return _t2;
}

main(_unknown_ __eax)
{// addr = 0x0804838C
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
    _t7 = L0804835C(_v8);
    __esp = __esp + 8;
    _push(_t7);
    _push(_v8);
    _push("fibonacci(%d) = %d\n");
    printf();
    return 0;
}

L08048434(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518140;
    __ebx = 134518140;
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

L08048462()
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

L08048462()
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
//      30 Temporaries nodes
//       2 Casts
//     135 Statements
//       8 Labels
//       1 Gotos
//      12 Blocks
//     281 Nodes
//       0 Assembly nodes
//      29 Unknown Types


