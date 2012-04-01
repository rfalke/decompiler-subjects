_dumpline()
{// addr = 0x0000000100000A2C
    long long _v16;
    char _v104;
    signed int _v108;
    intOrPtr _v112;
    long long _v128;
    long long _v136;
    intOrPtr _v140;
    signed char _v141;
    intOrPtr _v148;
    _unknown_ __rbp;
    _unknown_ _t74;
    signed int _t75;
    _unknown_ _t76;
    _unknown_ _t80;
    _unknown_ _t81;
    _unknown_ _t83;
    _unknown_ _t86;
    signed int _t87;
    _unknown_ _t88;
    signed int _t89;
    _unknown_ _t90;
    _unknown_ _t93;
    _unknown_ _t94;
    _unknown_ _t95;
    _unknown_ _t96;
    _unknown_ _t97;
    intOrPtr _t98;
    _unknown_ _t99;
    _unknown_ _t100;
    _unknown_ _t101;
    _unknown_ _t102;
    _unknown_ _t106;
    _unknown_ _t107;
    _unknown_ _t115;
    intOrPtr _t117;
    signed char* _t118;
    signed char* _t120;
    _unknown_ _t121;
    _unknown_ _t123;
    _unknown_ _t124;
    _unknown_ _t125;
    _unknown_ _t128;
    _unknown_ _t132;
    _unknown_ _t134;
    _unknown_ _t135;
    _unknown_ _t136;
    long long _t137;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t140;
    _unknown_ _t141;
    _unknown_ _t145;
    _unknown_ _t146;
    _unknown_ _t148;
    long long _t149;
    _unknown_ _t150;
    _unknown_ _t151;
    _unknown_ _t152;
    _unknown_ _t153;
    _unknown_ _t154;
    _unknown_ _t155;

    _v128 = _t137;
    _v136 = _t149;
    _v140 = _t98;
    _v16 =  *((intOrPtr*)( *4294971408));
    _t117 = _v136;
    r8 = _t117;
    L0000000100000DE4();
    if(_v140 > 16) {
        _v140 = 16;
    }
    _v108 = 0;
    while(1) {
        _t75 = _v108;
        if(_t75 >= _v140) {
            break;
        }
        asm("dec eax");
        _t118 = _t117 + _v128;
        __ecx =  *_t118 & 255 & 4294967295 & ;
        asm("dec eax");
        _t117 =  &_v104 + _t118;
        r8d = __ecx;
        L0000000100000DE4();
        _v108 = _v108 + 1;
    }
    while(1) {
        _v108 = _v108 + 1;
        if((_t75 & 4294967295) == 0) {
            break;
        }
        L0000000100000DF0();
    }
    _v112 = L0000000100000E26();
    _t120 = 4294967295;
    if(_t120 == 255) {
        asm("dec eax");
        L0000000100000C70( &_v104 + _t120, 4294971078);
    } else {
        asm("dec eax");
        L0000000100000DF6();
    }
    _v112 = _v112 + 3;
    _v108 = 0;
    while(_v108 < _v140) {
        _v148 = _v112 + _v108;
        asm("dec eax");
        _t120 =  &(_t120[_v128]);
        _t87 =  *_t120 & 255;
        __eflags = (_t87 & 4294967295) - 31;
        if((_t87 & 4294967295) <= 31) {
L15:
            _v141 = 46;
            goto L16;
        }
        asm("dec eax");
        _t120 =  &(_t120[_v128]);
        _t89 =  *_t120 & 255;
        __eflags = (_t89 & 4294967295) - 126;
        if((_t89 & 4294967295) > 126) {
            goto L15;
        }
        asm("dec eax");
        _t120 =  &(_t120[_v128]);
        _v141 =  *_t120 & 255 & 4294967295;
L16:
        asm("dec eax");
         *(__rbp + _t120 - 96) = _v141 & 255 & 4294967295;
        _v108 = _v108 + 1;
    }
}

L0000000100000C70(long long __rdi, long long __rsi)
{
    long long _v16;
    long long _v24;
    _unknown_ __rbp;
    _unknown_ _t6;
    _unknown_ _t8;

    _v16 = __rdi;
    _v24 = __rsi;
    L0000000100000DF6();
    return;
}

_hexdump(long long __eax)
{// addr = 0x0000000100000C96
    long long _v16;
    _unknown_ _v40;
    intOrPtr _v44;
    long long _v56;
    long long _v64;
    intOrPtr _v120;
    _unknown_ _v216;
    long long _v224;
    intOrPtr _v228;
    _unknown_ __rbp;
    long long _t29;
    intOrPtr _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    long long _t34;
    intOrPtr _t35;
    _unknown_ _t36;
    _unknown_ _t38;
    long long _t41;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;

    _t29 = __eax;
    _v224 = _t41;
    _t34 =  *4294971408;
    _v16 =  *_t34;
    L0000000100000E20();
    __eflags = _t29;
    if(__eflags == 0) {
        L0000000100000E08();
        _v64 = _t34;
        __eflags = _v64;
        if(__eflags != 0) {
            _v56 = 0;
            while(1) {
L7:
                _t35 = _v120;
                __eflags = _t35 - _v56;
                if(__eflags <= 0) {
                    break;
                }
                goto L5;
            }
L8:
            L0000000100000E02();
            _v228 = 0;
            goto L9;
        }
        goto L3;
L5:
        L0000000100000E0E();
        _v44 = _t29;
        __eflags = _v44;
        if(__eflags == 0) {
            goto L8;
        }
        _dumpline();
        _t29 = _v44;
        asm("dec eax");
        _v56 = _v56 + _t35;
        goto L7;
    }
    L0000000100000E14();
    _v228 = 1;
L9:
    _t30 = _v228;
    if(__eflags == 0) {
        return _t30;
    }
    L0000000100000DEA();
    return _t30;
L3:
    L0000000100000E14();
    _v228 = 1;
    goto L9;
}

_main(_unknown_ __eax, signed long long __rax)
{// addr = 0x0000000100000D9D
    long long _v12;
    intOrPtr _v16;
    intOrPtr _v28;
    long long _v40;
    _unknown_ __rbp;
    _unknown_ _t14;
    signed long long _t19;

    _t19 = __rax;
    _v28 = __edi;
    _v40 = __rsi;
    _v16 = 0;
    _v12 = 1;
    while(_v12 < _v28) {
        asm("dec eax");
        _t19 = (_t19 << 3) + _v40;
        _v16 = _v16 + _hexdump(_v12);
        _v12 = _v12 + 1;
    }
}

L0000000100000DE4()
{
    goto ( *4294971416);
    goto ( *4294971424);
    goto ( *4294971432);
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000DEA()
{
    goto ( *4294971424);
    goto ( *4294971432);
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000DF0()
{
    goto ( *4294971432);
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000DF6()
{
    goto ( *4294971440);
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000DFC()
{
    goto ( *4294971448);
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000E02()
{
    goto ( *4294971456);
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000E08()
{
    goto ( *4294971464);
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000E0E()
{
    goto ( *4294971472);
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000E14()
{
    goto ( *4294971480);
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000E1A()
{
    goto ( *4294971488);
    goto ( *4294971496);
}

L0000000100000E20()
{
    goto ( *4294971496);
}

L0000000100000E26()
{
}

L0000000100000E26()
{
}

// Statistics:
//      20 Register nodes
//      49 Temporaries nodes
//       1 Casts
//     255 Statements
//      14 Labels
//       8 Gotos
//      15 Blocks
//     551 Nodes
//      10 Assembly nodes
//      67 Unknown Types


