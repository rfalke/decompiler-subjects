int atexit(_Unknown_base(*)()* __func)
{// addr = 0x080487D8
    goto __imp__atexit;
}

__fpstart()
{// addr = 0x080487E8
    goto __imp____fpstart;
}

void exit(int __status)
{// addr = 0x080487F8
    goto __imp__exit;
}

int printf(char* format)
{// addr = 0x08048808
    goto __imp__printf;
}

__fsr()
{// addr = 0x08048880
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

addem(intOrPtr _a8, intOrPtr _a12, intOrPtr* _a16)
{// addr = 0x08048924
    _unknown_ __ebp;

     *_a16 =  *((intOrPtr*)(__ebp +  &M00000008)) + _a8 + _a12;
    return;
}

passem(intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{// addr = 0x08048938
    _unknown_ __ebp;

    _push(_a16);
    _push(_a12);
    _push(_a8);
    _push( *((intOrPtr*)(__ebp +  &M00000008)));
    addem();
    return;
}

main()
{// addr = 0x08048950
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;

    __esp = __esp - "/lib/ld.so.1";
    _push(__ebp - "/lib/ld.so.1");
    _push(40);
    _push("d.so.1");
    _push("lib/ld.so.1");
    passem();
    _push( *((intOrPtr*)(__ebp - "/lib/ld.so.1")));
    printf("Fifty five is %d\n");
    __esp = __esp + 20;
    return 0;
}

L0804897C()
{
    _unknown_ __ebx;
    _unknown_ _t2;
    intOrPtr* _t5;

    L1();
    _pop(__ebx);
    __ecx =  *((intOrPtr*)(_t2 + 4178 + 28));
    _t5 = __ecx -  &M00000008;
    if( *_t5 == "/usr/lib/ld.so.1") {
        return ;
    }
    _push(__ecx);
     *_t5();
    __esp = __esp + "/lib/ld.so.1";
    return;
}

L08048982()
{
    _unknown_ _t2;
    intOrPtr* _t5;

    _pop(__ebx);
    __ecx =  *((intOrPtr*)(_t2 + 4178 + 28));
    _t5 = __ecx -  &M00000008;
    if( *_t5 != "/usr/lib/ld.so.1") {
        _push(__ecx);
         *_t5();
        __esp = __esp + "/lib/ld.so.1";
    }
    _pop(__ebx);
    return;
}

L080489AA()
{
    _unknown_ _t2;
    _unknown_ _t5;
    intOrPtr* _t7;

    _pop(__ebx);
    _t5 =  *((intOrPtr*)(_t2 + 4138 + 32)) - 16;
    _t7 = _t5 - "/lib/ld.so.1";
    if( *_t7 != "/usr/lib/ld.so.1") {
        _push(_t5);
         *_t7();
        __esp = __esp + "/lib/ld.so.1";
    }
    _pop(__ebx);
    return;
}

L080489AA()
{
    _unknown_ _t2;
    _unknown_ _t5;
    intOrPtr* _t7;

    _pop(__ebx);
    _t5 =  *((intOrPtr*)(_t2 + 4138 + 32)) - 16;
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
//      45 Register nodes
//      24 Temporaries nodes
//       6 Casts
//     108 Statements
//       0 Labels
//       0 Gotos
//      11 Blocks
//     343 Nodes
//       6 Assembly nodes
//      14 Unknown Types


