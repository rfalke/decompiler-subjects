int atexit(_Unknown_base(*)()* __func)
{// addr = 0x080487A4
    goto __imp__atexit;
}

__fpstart()
{// addr = 0x080487B4
    goto __imp____fpstart;
}

void exit(int __status)
{// addr = 0x080487C4
    goto __imp__exit;
}

int printf(char* format)
{// addr = 0x080487D4
    goto __imp__printf;
}

__fsr()
{// addr = 0x0804884C
    signed int __ecx;
    _unknown_ __edx;
    _unknown_ __ebp;
    unsigned int _t20;
    _unknown_ _t23;
    signed int _t26;
    _unknown_ _t34;

    __esp = __esp - "/lib/ld.so.1";
    _t20 = "/usr/lib/ld.so.1";
    _t34 = _t20 - "/usr/lib/ld.so.1";
    if(_t34 != 0) {
        asm("wait ");
        asm("fnstcw word [esp+0x0]");
         *(__esp + "/usr/lib/ld.so.1") =  *(__esp + "/usr/lib/ld.so.1") & 61632;
        __ecx = _t20 >>  &M00000001 ^ 927;
         *(__esp + "/usr/lib/ld.so.1") =  *(__esp + "/usr/lib/ld.so.1");
        _t26 = (__ecx & 96) << "lib/ld.so.1";
        asm("bt edx, 0xa");
        if(_t34 < 0) {
            asm("btc edx, 0xb");
             *(__esp + "/usr/lib/ld.so.1") =  *(__esp + "/usr/lib/ld.so.1") | _t26 & 4294967295;
        } else {
             *(__esp + "/usr/lib/ld.so.1") =  *(__esp + "/usr/lib/ld.so.1") | _t26 & 4294967295;
        }
         *(__esp + "/usr/lib/ld.so.1") =  *(__esp + "/usr/lib/ld.so.1") | (__ecx & 384) <<  &M00000001 & 4294967295;
         *(__esp + "/usr/lib/ld.so.1") =  *(__esp + "/usr/lib/ld.so.1") | (__ecx & 512) >>  &M00000008 & 4294967295;
        asm("fldcw word [esp+0x0]");
        asm("fldcw word [esp+0x0]");
        if("/usr/lib/ld.so.1" == 53) {
            __fnonstd_used =  &M00000001;
        }
    }
    __esp = __esp + "/lib/ld.so.1";
    return;
}

main()
{// addr = 0x080488F0
    _unknown_ __ebp;
    signed int _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;

    _t5 =  *((intOrPtr*)(__ebp +  &M00000008)) + -2;
    if(_t5 <= "lib/ld.so.1") {
        switch( *((intOrPtr*)(_t5 * "/lib/ld.so.1" +  &M080489E8))) {
            case 0:
                _push(134519640);
                printf();
                __esp = __esp + "/lib/ld.so.1";
                return 0;
                goto L10;
            case 1:
                _push("Three!\n");
                printf();
                __esp = __esp + "/lib/ld.so.1";
                return 0;
                goto L10;
            case 2:
                _push("Four!\n");
                printf();
                __esp = __esp + "/lib/ld.so.1";
                return 0;
                goto L10;
            case 3:
                _push("Five!\n");
                printf();
                __esp = __esp + "/lib/ld.so.1";
                return 0;
                goto L10;
            case 4:
                _push("Six!\n");
                printf();
                __esp = __esp + "/lib/ld.so.1";
                return 0;
                goto L10;
            case 5:
                _push("Seven!\n");
                printf();
                asm("invalid ");
                __esp = __esp + "/lib/ld.so.1";
                return 0;
                goto L10;
        }
    } else {
        _push("Other!\n");
        printf();
        __esp = __esp + "/lib/ld.so.1";
        return 0;
    }
L10:
}

L08048990()
{
    _unknown_ __ebx;
    _unknown_ _t2;
    intOrPtr* _t5;

    L1();
    _pop(__ebx);
    __ecx =  *((intOrPtr*)(_t2 + 4202 + 28));
    _t5 = __ecx -  &M00000008;
    if( *_t5 == "/usr/lib/ld.so.1") {
        return ;
    }
    _push(__ecx);
     *_t5();
    __esp = __esp + "/lib/ld.so.1";
    return;
}

L08048996()
{
    _unknown_ _t2;
    intOrPtr* _t5;

    _pop(__ebx);
    __ecx =  *((intOrPtr*)(_t2 + 4202 + 28));
    _t5 = __ecx -  &M00000008;
    if( *_t5 != "/usr/lib/ld.so.1") {
        _push(__ecx);
         *_t5();
        __esp = __esp + "/lib/ld.so.1";
    }
    _pop(__ebx);
    return;
}

L080489BE()
{
    _unknown_ _t2;
    _unknown_ _t5;
    intOrPtr* _t7;

    _pop(__ebx);
    _t5 =  *((intOrPtr*)(_t2 + 4162 + 32)) - 16;
    _t7 = _t5 - "/lib/ld.so.1";
    if( *_t7 != "/usr/lib/ld.so.1") {
        _push(_t5);
         *_t7();
        __esp = __esp + "/lib/ld.so.1";
    }
    _pop(__ebx);
    return;
}

L080489BE()
{
    _unknown_ _t2;
    _unknown_ _t5;
    intOrPtr* _t7;

    _pop(__ebx);
    _t5 =  *((intOrPtr*)(_t2 + 4162 + 32)) - 16;
    _t7 = _t5 - "/lib/ld.so.1";
    if( *_t7 != "/usr/lib/ld.so.1") {
        _push(_t5);
         *_t7();
        __esp = __esp + "/lib/ld.so.1";
    }
    _pop(__ebx);
    return;
}

// Statistics:
//      52 Register nodes
//      27 Temporaries nodes
//       5 Casts
//      71 Statements
//       2 Labels
//       6 Gotos
//       9 Blocks
//     387 Nodes
//       7 Assembly nodes
//      14 Unknown Types


