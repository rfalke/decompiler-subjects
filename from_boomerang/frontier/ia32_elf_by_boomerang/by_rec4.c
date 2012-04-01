L0804820C()
{
    _unknown_ __ebp;

    L08048268(__eax, __ebx);
    L080482C8();
    L0804842C(__edx);
    return;
}

__libc_start_main()
{// addr = 0x08048234
    goto __imp____libc_start_main;
}

L08048268(_unknown_ __eax, _unknown_ __ebx)
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
    _t4 =  *((intOrPtr*)(_t5 + 4846 + 16));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L08048272()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 4846 + 16));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L0804828C()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518132 != 0) {
        return ;
    }
    _t2 =  *134517888;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518132 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517888 = _t2 + 4;
             *__edx();
            _t2 =  *134517888;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L080482C8()
{
    _unknown_ __ebp;

    if( *134518108 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518108);
    0();
    __esp = __esp + 16;
    return;
}

main(intOrPtr _a4)
{// addr = 0x080482F4
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t31;

    __esp = __esp;
    _v8 = 1;
    _v12 = _a4;
    if(_v12 == 5) {
        goto L10;
        do {
            goto L10;
L15:
            _v8 = 8;
        } while(_a4 > 0);
L16:
        goto L21;
    }
    if(_v12 > 5) {
        if(_v12 == 9) {
            _v8 = 9;
            if(_a4 != 10) {
                _v8 = 11;
            } else {
                _v8 = 10;
            }
L20:
            _v8 = 12;
            goto L21;
        }
        goto L5;
    }
    if(_v12 == 2) {
        _v8 = 2;
        while(1) {
L7:
            _v8 = 3;
            if(_a4 <= 0) {
                break;
            }
        }
L8:
        _v8 = 4;
L21:
        _v8 = 13;
        return _v8;
    }
    goto L21;
L5:
    goto L21;
L10:
    _v8 = 5;
    _a4 = _a4 - 1;
    if(_a4 <= 1) {
        _v8 = 7;
        if(_a4 != 12) {
            goto L15;
        }
        goto L14;
    }
    _v8 = 6;
    _a4 = _a4 - 1;
    if(_a4 <= 2) {
        goto L15;
    }
    goto L8;
L14:
    goto L20;
}

L0804842C(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518092;
    __ebx = 134518092;
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
    L0804828C();
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
    @rec 0x0804828C@L0804828C@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      39 Register nodes
//      12 Temporaries nodes
//       2 Casts
//     144 Statements
//      24 Labels
//      13 Gotos
//       9 Blocks
//     257 Nodes
//       0 Assembly nodes
//      19 Unknown Types


