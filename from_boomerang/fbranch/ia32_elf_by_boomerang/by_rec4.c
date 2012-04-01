L08048278()
{
    _unknown_ __ebp;

    L08048304(__eax, __ebx);
    L08048364();
    L08048538(__edx);
    return;
}

int puts(char* str)
{// addr = 0x080482A0
    goto __imp__puts;
}

int scanf(char* format)
{// addr = 0x080482B0
    goto __imp__scanf;
}

__libc_start_main()
{// addr = 0x080482C0
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482D0
    goto __imp__printf;
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
    _t4 =  *((intOrPtr*)(_t5 + 5038 + 28));
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
    __eax =  *((intOrPtr*)(_t3 + 5038 + 28));
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

    if( *134518492 != 0) {
        return ;
    }
    _t2 =  *134518236;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518492 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518236 = _t2 + 4;
             *__edx();
            _t2 =  *134518236;
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

    if( *134518456 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518456);
    0();
    __esp = __esp + 16;
    return;
}

main(_unknown_ __eax, _unknown_ __eflags)
{// addr = 0x08048390
    char _v8;
    _unknown_ __ebp;
    _unknown_ _t20;
    signed int _t22;
    _unknown_ _t23;
    _unknown_ _t24;

    _t24 = __eflags;
    __esp = __esp & 240;
    __esp = __esp - 8;
    _push( &_v8);
    _push(134514048);
    _push(scanf());
    asm("fld dword [ebp-0x4]");
    asm("fstp qword [esp]");
    _push(1075052544);
    _push(0);
    _push("a is %f, b is %f\n");
    _t22 = printf();
    asm("fld dword [ebp-0x4]");
    asm("fld dword [0x80485cc]");
    asm("fxch st0, st1");
    asm("fucom st1");
    asm("fnstsw ax");
    asm("fstp st1");
    __esp = __esp + 32;
    if(_t24 == 0) {
        asm("fstp st0");
        __esp = __esp - 12;
        _t22 = puts(134514085);
        __esp = __esp + 12;
        asm("fld dword [ebp-0x4]");
    }
    asm("fld dword [0x80485cc]");
    asm("fucomp st1");
    asm("fnstsw ax");
    if((_t22 & 4294967295) != 64) {
        asm("fstp st0");
        __esp = __esp - 12;
        _t22 = puts("Not Equal");
        __esp = __esp + 12;
        asm("fld dword [ebp-0x4]");
    }
    asm("fld dword [0x80485cc]");
    asm("fucomp st1");
    asm("fnstsw ax");
    if((_t22 & 4294967295 & 69) == 0) {
        asm("fstp st0");
        __esp = __esp - 12;
        _t22 = puts("Greater");
        __esp = __esp + 12;
        asm("fld dword [ebp-0x4]");
    }
    asm("fld dword [0x80485cc]");
    asm("fxch st0, st1");
    asm("fucom st1");
    asm("fnstsw ax");
    asm("fstp st1");
    if((_t22 & 4294967295 & 1) == 0) {
        asm("fstp st0");
        __esp = __esp - 12;
        _t22 = puts("Less or Equal");
        __esp = __esp + 12;
        asm("fld dword [ebp-0x4]");
    }
    asm("fld dword [0x80485cc]");
    asm("fucomp st1");
    asm("fnstsw ax");
    if((_t22 & 4294967295 & 1) == 0) {
        asm("fstp st0");
        __esp = __esp - 12;
        _t22 = puts("Greater or Equal");
        __esp = __esp + 12;
        asm("fld dword [ebp-0x4]");
    }
    asm("fld dword [0x80485cc]");
    asm("fxch st0, st1");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t22 & 4294967295 & 69) != 0) {
        return ;
    }
    __esp = __esp - 12;
    puts("Less");
    __esp = __esp + 12;
    return;
}

L08048538(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518440;
    __ebx = 134518440;
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

L08048566()
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

L08048566()
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
//      68 Register nodes
//      25 Temporaries nodes
//       2 Casts
//     178 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     384 Nodes
//      36 Assembly nodes
//      23 Unknown Types


