int atexit(_Unknown_base(*)()* __func)
{// addr = 0x0804868C
    goto __imp__atexit;
}

__fpstart()
{// addr = 0x0804869C
    goto __imp____fpstart;
}

void exit(int __status)
{// addr = 0x080486AC
    goto __imp__exit;
}

int printf(char* format)
{// addr = 0x080486BC
    goto __imp__printf;
}

int scanf(char* format)
{// addr = 0x080486CC
    goto __imp__scanf;
}

L0804874C()
{
    _unknown_ __ebx;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t5;

    L1();
    _pop(__ebx);
    __eax = _t5 + 4490 + 196;
    __esi = __eax + "/lib/ld.so.1";
    if( *((intOrPtr*)(__eax + "/lib/ld.so.1")) == "/usr/lib/ld.so.1") {
        return ;
    }
    while(1) {
L2:
        __eax =  *__esi;
         *((intOrPtr*)( *__esi))();
        __esi = __esi + "/lib/ld.so.1";
        if( *__esi == "/usr/lib/ld.so.1") {
            break;
        }
    }
    return;
}

L08048756()
{
    _unknown_ _t5;

    _pop(__ebx);
    __eax = _t5 + 4490 + 196;
    __esi = __eax + "/lib/ld.so.1";
    if( *((intOrPtr*)(__eax + "/lib/ld.so.1")) != "/usr/lib/ld.so.1") {
        while(1) {
L1:
            __eax =  *__esi;
             *((intOrPtr*)( *__esi))();
            __esi = __esi + "/lib/ld.so.1";
            if( *__esi == "/usr/lib/ld.so.1") {
                break;
            }
        }
    }
    _pop(__ebx);
    _pop(__esi);
    _pop(__ebp);
    return;
}

fib()
{// addr = 0x08048798
    intOrPtr __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;

    __ebx =  *((intOrPtr*)(__ebp + "/ld.so.1"));
    if(__ebx <=  &M00000001) {
        _t5 = __ebx;
    } else {
        _push(__ebx -  &M00000001);
        __esi = fib();
        _push(__ebx -  &M00000002);
        __ebx = fib() + __esi;
    }
    __esp = __ebp - "/ld.so.1";
    return _t5;
}

main()
{// addr = 0x080487CC
    char _v16;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t9;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t14;
    _unknown_ _t17;
    intOrPtr _t18;

    __esp = __esp - "/lib/ld.so.1";
    _push(__esi);
    _push(_t17);
    _push("Input number: ");
    printf();
    _push(__ebp - "/lib/ld.so.1");
    _push("%d");
    scanf();
    _t18 =  *((intOrPtr*)(__ebp - "/lib/ld.so.1"));
    __esp = __esp + 12;
    if(_t18 <=  &M00000001) {
        _t10 = _t18;
    } else {
        _push(_t18 -  &M00000001);
        _t14 = fib();
        __esi = _t14;
        _push(_t18 -  &M00000002);
        _t18 = fib() + _t14;
        __esp = __esp + "/ld.so.1";
    }
    _push(_t10);
    _push( *((intOrPtr*)(__ebp - "/lib/ld.so.1")));
    _push("fibonacci(%d) = %d\n");
    printf();
    __esp =  &_v16;
    _pop(__ebx);
    _pop(__esi);
    return 0;
}

L08048830()
{
    _unknown_ __ebx;
    intOrPtr* __esi;
    _unknown_ __ebp;
    _unknown_ _t5;

    L1();
    _pop(__ebx);
    __eax = _t5 + 4262 + 192;
    __esi = __eax - "/lib/ld.so.1";
    if( *((intOrPtr*)(__eax - "/lib/ld.so.1")) == 255) {
        return ;
    }
    while(1) {
L2:
        __eax =  *__esi;
         *((intOrPtr*)( *__esi))();
        __esi = __esi + -4;
        if( *__esi == 255) {
            break;
        }
    }
    return;
}

L0804883A()
{
    _unknown_ _t5;

    _pop(__ebx);
    __eax = _t5 + 4262 + 192;
    __esi = __eax - "/lib/ld.so.1";
    if( *((intOrPtr*)(__eax - "/lib/ld.so.1")) != 255) {
        while(1) {
L1:
            __eax =  *__esi;
             *((intOrPtr*)( *__esi))();
            __esi = __esi + -4;
            if( *__esi == 255) {
                break;
            }
        }
    }
    _pop(__ebx);
    _pop(__esi);
    _pop(__ebp);
    return;
}

L08048880()
{
    L08048830();
    0;
    0;
    return;
}

L08048880()
{
    @rec 0x08048830@L08048830@();
    0;
    0;
    return;
}

// Statistics:
//      75 Register nodes
//      18 Temporaries nodes
//      11 Casts
//     142 Statements
//       8 Labels
//       0 Gotos
//      12 Blocks
//     353 Nodes
//       0 Assembly nodes
//      19 Unknown Types


