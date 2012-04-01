L00400600()
{
    goto ( *6295192);
}

L00400610()
{
    goto ( *6295200);
}

L00400620()
{
    goto ( *6295208);
}

L00400630()
{
    goto ( *6295216);
}

L00400650()
{
    goto ( *6295232);
}

L00400660()
{
    goto ( *6295240);
}

L00400670()
{
    goto ( *6295248);
}

L00400680()
{
    goto ( *6295256);
}

L00400690()
{
    goto ( *6295264);
}

L004006A0()
{
    goto ( *6295272);
}

dumpline(unsigned char* p, long unsigned int offset, int cnt)
{// addr = 0x00400794
    char[79] buff;
    int c;
    int len;
    signed int _v28;
    signed int _v32;
    char _v120;
    long long _v128;
    long long _v136;
    intOrPtr _v140;
    _unknown_ __rbx;
    _unknown_ __rbp;
    _unknown_ _t61;
    signed int _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t72;
    signed int _t74;
    _unknown_ _t75;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t79;
    _unknown_ _t80;
    _unknown_ _t82;
    _unknown_ _t83;
    _unknown_ _t84;
    _unknown_ _t85;
    _unknown_ _t87;
    _unknown_ _t88;
    _unknown_ _t89;
    _unknown_ _t90;
    _unknown_ _t92;
    _unknown_ _t93;
    _unknown_ _t94;
    char* _t101;
    signed char* _t107;
    intOrPtr _t111;
    _unknown_ _t114;
    _unknown_ _t115;
    _unknown_ _t116;
    _unknown_ _t117;
    _unknown_ _t118;
    _unknown_ _t119;
    _unknown_ _t120;
    _unknown_ _t122;
    _unknown_ _t123;
    _unknown_ _t124;
    _unknown_ _t125;
    _unknown_ _t126;

    __rcx = __rcx;
    _v128 = __rdi;
    _v136 = __rsi;
    _v140 = __edx;
    _t111 = _v136;
    _t101 =  &_v120;
    L00400650();
    if(_v140 > 16) {
        _v140 = 16;
    }
    _v32 = 0;
    while(1) {
        _t62 = _v32;
        if(_t62 >= _v140) {
            break;
        }
        asm("dec eax");
        asm("dec eax");
        _t111 = _t101 + _v128 + 9;
        _t101 =  &_v120 + _t111;
        L00400650();
        _v32 = _v32 + 1;
    }
    while(1) {
        _v32 = _v32 + 1;
        if((_t62 & 4294967295) == 0) {
            break;
        }
        L00400660();
    }
    L00400630();
    _v28 = _t62;
    asm("dec eax");
    _t107 =  &_v120 + _t111;
    L00400670();
    _v28 = _v28 + 3;
    _v32 = 0;
    while(_v32 < _v140) {
        asm("dec eax");
        _t107 =  &(_t107[_v128]);
        if(( *_t107 & 255 & 4294967295) <= 31) {
L12:
            _t74 = 46;
        } else {
            asm("dec eax");
            _t107 =  &(_t107[_v128]);
            if(( *_t107 & 255 & 4294967295) > 126) {
                goto L12;
            } else {
                asm("dec eax");
                _t107 =  &(_t107[_v128]);
                _t74 =  *_t107 & 255;
            }
        }
L13:
        asm("dec eax");
         *(__rbp + _t111 - 112) = _t74 & 4294967295;
        _v32 = _v32 + 1;
    }
}

int hexdump(char* fname)
{// addr = 0x00400942
    unsigned char[15] buff;
    long unsigned int offset;
    FILE* fp;
    struct stat st;
    int cnt;
    intOrPtr _v12;
    long long _v24;
    int _v32;
    char _v56;
    intOrPtr _v152;
    _unknown_ _v200;
    long long _v208;
    _unknown_ __rbp;
    intOrPtr _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t38;
    _unknown_ _t40;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t45;
    _unknown_ _t46;
    _unknown_ _t47;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t52;

    _t23 = __eax;
    _v208 = __rdi;
    L00400B20();
    if(_t23 == 0) {
        L00400610();
        _v24 = _v208;
        if(_v24 != 0) {
            _v32 = 0;
L7:
            while(_v152 > _v32) {
                goto L5;
            }
        }
        goto L3;
L5:
        L00400680();
        _v12 = _t23;
        if(_v12 == 0) {
            goto L10;
        }
        dumpline();
        _t23 = _v12;
        asm("dec eax");
        _v32 = _v32 +  &_v56;
        goto L7;
L10:
        L00400690();
        return 0;
    }
    L004006A0();
    return 1;
L3:
    L004006A0();
    return 1;
}

int main(int argc, char** argv)
{// addr = 0x00400A34
    int i;
    int errs;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v28;
    long long _v40;
    _unknown_ __rbp;
    _unknown_ _t15;
    signed long long _t18;

    __rsi = __rsi;
    _t18 = __rax;
    __edi = __edi;
    _v28 = __edi;
    _v40 = __rsi;
    _v12 = 0;
    _v16 = 1;
    while(_v16 < _v28) {
        asm("dec eax");
        _t18 =  *((_t18 << 3) + _v40);
        _v12 = _v12 + hexdump();
        _v16 = _v16 + 1;
    }
}

L00400B20()
{
    _unknown_ _t1;
    _unknown_ _t2;

    goto ( *6295224);
}

L00400B20()
{
    _unknown_ _t1;
    _unknown_ _t2;

    goto ( *6295224);
}

// Statistics:
//      15 Register nodes
//      32 Temporaries nodes
//       0 Casts
//     127 Statements
//      12 Labels
//       5 Gotos
//      14 Blocks
//     293 Nodes
//       9 Assembly nodes
//      61 Unknown Types


