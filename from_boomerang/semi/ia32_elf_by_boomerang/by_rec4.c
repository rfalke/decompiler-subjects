L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L08048454(__edx);
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
    _t4 =  *((intOrPtr*)(_t5 + 4838 + 20));
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
    __eax =  *((intOrPtr*)(_t3 + 4838 + 20));
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

    if( *134518180 != 0) {
        return ;
    }
    _t2 =  *134517932;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518180 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517932 = _t2 + 4;
             *__edx();
            _t2 =  *134517932;
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

    if( *134518152 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518152);
    0();
    __esp = __esp + 16;
    return;
}

main(intOrPtr _a4)
{// addr = 0x08048328
    intOrPtr _v8;
    _unknown_ __ebp;
    _unknown_ _t22;
    _unknown_ _t24;
    _unknown_ _t25;

    __esp = __esp & 240;
    __esp = __esp;
    _v8 = 1;
    if(_a4 <= 2) {
        while(1) {
            _v8 = 11;
            if(_a4 == 11) {
                break;
            }
            _v8 = 12;
            if(_a4 <= 11) {
                continue;
            }
            goto L13;
        }
    } else {
        goto L1;
        do {
L1:
            _v8 = 2;
            if(_a4 <= 2) {
                _v8 = 3;
                if(_a4 <= 3) {
                    goto L7;
                } else {
                    _v8 = 4;
                    if(_a4 <= 4) {
                        _v8 = 8;
                    } else {
                        goto L5;
                    }
                    goto L8;
                }
                break;
            } else {
L7:
                _v8 = 9;
                __esp = __esp - 12;
                printf(134513822);
                __esp = __esp + 12;
                _v8 = 10;
L5:
                _v8 = 5;
                __esp = __esp - 12;
                printf(134513820);
                __esp = __esp + 12;
            }
L8:
            _v8 = 6;
        } while(_a4 <= 5);
L14:
        _v8 = 7;
        return _v8;
    }
L13:
    _v8 = 13;
    goto L14;
}

L08048454(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518136;
    __ebx = 134518136;
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

L08048482()
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

L08048482()
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
//     106 Statements
//      18 Labels
//       7 Gotos
//      10 Blocks
//     270 Nodes
//       0 Assembly nodes
//      21 Unknown Types


