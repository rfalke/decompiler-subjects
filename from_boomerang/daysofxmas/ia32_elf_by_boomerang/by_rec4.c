__libc_start_main()
{// addr = 0x08048280
    goto __imp____libc_start_main;
}

_IO_putc()
{// addr = 0x08048290
    goto __imp___IO_putc;
}

L080482C4(_unknown_ __eax, _unknown_ __ebx)
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
    _t4 =  *((intOrPtr*)(_t5 + 5434 + 20));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482CE()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 5434 + 20));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L080482E8()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518820 != 0) {
        return ;
    }
    _t2 =  *134518564;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518820 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518564 = _t2 + 4;
             *__edx();
            _t2 =  *134518564;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048324()
{
    _unknown_ __ebp;

    if( *134518788 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518788);
    0();
    __esp = __esp + 16;
    return;
}

main(_unknown_ __eax, _unknown_ __ecx, signed int __edx, intOrPtr _a4, intOrPtr _a8, char* _a12)
{// addr = 0x08048350
    _unknown_ _v16;
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    char _t21;
    _unknown_ _t24;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t31;
    _unknown_ _t33;
    _unknown_ _t35;
    _unknown_ _t39;
    intOrPtr _t40;
    char _t41;
    char* _t42;
    _unknown_ _t43;

    __edx = __edx;
    __ecx = __ecx;
    _t20 = __eax;
    _t40 = _a4;
    __esp = __esp & 240;
    __edi = _a8;
    _t42 = _a12;
    if(_t40 <= 1) {
        if(_t40 >= 0) {
            if(_t40 < 184) {
                _push(_t42);
                _push("n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/");
                _push(_t40);
                _push(__edi);
                goto L11;
            }
            goto L22;
        }
        goto L16;
L22:
        if(_t40 >= 206) {
L26:
            _push(__ecx);
            _push(_t42 + 1);
            _push(__edi);
            if( *_t42 == 47) {
                _t20 = _t40 + 1;
            }
            goto L27;
        }
        if(__edi ==  *_t42) {
            __esp = __esp - 8;
            _t21 =  *((char*)(_t42 + 31));
            _push(__imp__stdout);
            _push(_t21);
            _IO_putc();
            goto L12;
        }
        _push(_t40);
        _t20 = _t42 + 1;
        _push(_t42 + 1);
        _push(__edi);
        _push(191);
        goto L11;
L27:
        _push(_t20);
        goto L11;
    }
    if(_t40 <= 2) {
        _push(_t20);
        _push(_t42 + 1);
        _push(0);
        _push(170);
        _t31 = main(_t42 + 1, __ecx, __edx);
        __esp = __esp + 12;
        _push(_t31 + _t42);
        _push(1 - __edi);
        _push(169);
        _t35 = main(1 - __edi, __ecx, __edx);
        __esp = __esp + 12;
        _t20 = main(_t35 + _t42, __ecx, __edx, 177, 243, _t35 + _t42);
        __esp = __esp + 4;
    }
    if(_t40 < __edi) {
        _push(_t20);
        _t20 = main(_t40 + 1, __ecx, __edx, _t40 + 1, __edi, _t42);
        __esp = __esp + 4;
    }
    _push(_t20);
    _t39 = main(_t40 - 27, __ecx, __edx, 162, _t40 - 27, _t42);
    __esp = __esp + 4;
    if(_t39 == 0 || _t40 != 2) {
        _t41 = 16;
        return _t41;
    }
    if(__edi > 12) {
        _t41 = 9;
        return _t41;
    }
    _push(_t39);
    _push("%s %d %d\n");
    _t20 = __edi + 1;
    _push(__edi + 1);
L10:
    _push(2);
L11:
    _t21 = main(_t20, __ecx, __edx);
L12:
    __esp = __esp + 16;
    _t41 = _t21;
    return _t41;
L16:
    if(_t40 <= 0) {
        _t41 = 0;
        if((__edx & 4294967295) != 47) {
            _push(_t20);
            _push(_t42 + 1);
            __esp = __esp - 12;
            _t28 = main(__edx & 4294967295, __ecx, __edx, 195, __edx & 4294967295, "!ek;dc ibK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
            __esp = __esp + 12;
            _push(_t28);
            _push(0);
            _t29 = main(_t28, __ecx, __edx);
            __esp = __esp + 16;
            if(_t29 == 0) {
                return _t41;
            }
        }
        _t41 = 1;
        return _t41;
    }
    _push(__edx);
    _push("%s");
    _push(2);
    goto L10;
}

L080484CC(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518772;
    __ebx = 134518772;
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

L080484FA()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L080482E8();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080484FA()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x080482E8@L080482E8@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      94 Register nodes
//      83 Temporaries nodes
//       3 Casts
//     146 Statements
//      20 Labels
//       9 Gotos
//       9 Blocks
//     533 Nodes
//       0 Assembly nodes
//      30 Unknown Types


