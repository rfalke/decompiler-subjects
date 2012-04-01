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
    char* _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _t2 =  *((intOrPtr*)(__ebp +  &M00000008));
    if(_t2 >= -2) {
        if(_t2 >  &M00000003) {
            _t2 =  &M00000003;
        }
    } else {
        _t2 = -2;
    }
    _push(_t2);
    _push("MinMax adjusted number of arguments is %d\n");
    printf();
    __esp = __esp +  &M00000008;
    return 0;
}

L08048924()
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

L0804892A()
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

L08048952()
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

L08048952()
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
//      40 Register nodes
//      30 Temporaries nodes
//       4 Casts
//      77 Statements
//       0 Labels
//       0 Gotos
//       9 Blocks
//     310 Nodes
//       6 Assembly nodes
//      12 Unknown Types


