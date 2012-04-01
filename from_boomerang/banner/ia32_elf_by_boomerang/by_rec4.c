L08048278()
{
    _unknown_ __ebp;

    L08048304(__eax, __ebx);
    L08048364();
    L080485D0(__edx);
    return;
}

int puts(char* str)
{// addr = 0x080482A0
    goto __imp__puts;
}

void* malloc(int __size)
{// addr = 0x080482B0
    goto __imp__malloc;
}

int strlen(char* __s)
{// addr = 0x080482C0
    goto __imp__strlen;
}

__libc_start_main()
{// addr = 0x080482D0
    goto __imp____libc_start_main;
}

L08048304(_unknown_ __eax, _unknown_ __ebx)
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
    _t4 =  *((intOrPtr*)(_t5 + 10846 + 28));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L0804830E()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 10846 + 28));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L08048328()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134524300 != 0) {
        return ;
    }
    _t2 =  *134523688;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134524300 = 1;
        return;
    } else {
        while(1) {
L3:
             *134523688 = _t2 + 4;
             *__edx();
            _t2 =  *134523688;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048364()
{
    _unknown_ __ebp;

    if( *134524264 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134524264);
    0();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x08048390
    char _v12;
    intOrPtr _v16;
    void* _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    int _v36;
    signed int _v40;
    _unknown_ _v124;
    signed int* _v128;
    signed int _v132;
    signed int _v136;
    signed int _v140;
    signed int _v144;
    _unknown_ __ebp;
    _unknown_ _t68;
    void* _t69;
    int _t75;
    _unknown_ _t112;
    _unknown_ _t114;
    _unknown_ _t116;

    __esp = __esp & 240;
    __esp = __esp;
    __esp = __esp - 12;
    _t69 = malloc(12);
    __esp = __esp + 12;
    _v20 = _t69;
    _v20[1] = "HelloWorld";
    _v16 = 2;
    _v20 =  &(_v20[1]);
    while(1) {
        _v16 = _v16 - 1;
        if(_v16 == 0) {
            break;
        }
        __esp = __esp - 12;
        _t75 = strlen( *_v20);
        __esp = __esp + 12;
        _v36 = _t75;
        if(_v36 > 10) {
            _v36 = 10;
        }
        _v24 = 0;
        while(_v24 <= 6) {
            _v28 = 0;
            while(_v28 < _v36) {
                _v40 = ( *_v20)[_v28] - 32;
                if(_v40 < 0) {
                    _v40 = 0;
                }
                _v32 = 0;
                while(_v32 <= 6) {
                    _v128 = (_v28 << 3) +  &_v12 + _v32 - 112;
                    _v132 = _v40;
                    if(_v132 < 0) {
                        _v132 = _v132 + 7;
                    }
                    _v136 = _v24 + (_v132 >> 3 << 3) - (_v132 >> 3);
                    _v140 = _v40;
                    _v144 = _v140;
                    if(_v144 < 0) {
                        _v144 = _v144 + 7;
                    }
                     *_v128 = (_v140 - (_v144 >> 3 << 3) << 3) - _v140 - (_v144 >> 3 << 3) + _v32 +  *((intOrPtr*)(134523712 + _v136 * 4)) & 4294967295;
                    _v32 = _v32 + 1;
                }
            }
        }
    }
    return 0;
}

L080485D0(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134524248;
    __ebx = 134524248;
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

L080485FE()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L08048328();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080485FE()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x08048328@L08048328@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      49 Register nodes
//      16 Temporaries nodes
//       3 Casts
//     119 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     372 Nodes
//       0 Assembly nodes
//      23 Unknown Types


