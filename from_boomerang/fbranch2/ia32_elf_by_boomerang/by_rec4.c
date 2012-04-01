L080482C8()
{
    _unknown_ __ebp;

    L08048364(__ecx);
    L080483BC();
    L08048574(__edx);
    return;
}

int puts(char* str)
{// addr = 0x080482F0
    goto __imp__puts;
}

int scanf(char* format)
{// addr = 0x08048300
    goto __imp__scanf;
}

__libc_start_main()
{// addr = 0x08048310
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x08048320
    goto __imp__printf;
}

__gmon_start__()
{// addr = 0x08048330
    goto __imp____gmon_start__;
}

L08048364(_unknown_ __ecx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __ecx = __ecx;
    _push(__ecx);
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5002 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L0804836E()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5002 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L080483BC()
{
    _unknown_ __ebp;

    __eax =  *134518312;
    if( *134518312 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518312);
     *__eax();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x080483E4
    intOrPtr _v8;
    char _v12;
    char _v48;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t28;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;

    __esp = __esp & 240;
    __esp = __esp - (0x1e >> 4 << 4);
    _v8 = 1084227584;
    __esp = __esp - 8;
    _push( &_v12);
    scanf(134514112);
    __esp = __esp + 12;
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fxch st0, st1");
    __esp =  &_v48;
    asm("fstp qword [esp]");
    __esp =  ?_? ( &_v48);
    asm("fstp qword [esp]");
    _t31 = printf("a is %f, b is %f\n");
    __esp =  &_v48 + 28;
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fucompp ");
    asm("fnstsw ax");
    _t34 = (_t31 & 4294967295) - 64;
    if(_t34 == 0) {
        __esp = __esp - 12;
        _t31 = puts("Equal");
        __esp = __esp + 12;
    }
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fucompp ");
    asm("fnstsw ax");
    if(_t34 != 0) {
        __esp = __esp - 12;
        _t31 = puts("Not Equal");
        __esp = __esp + 12;
    }
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t31 & 4294967295 & 69) == 0) {
        __esp = __esp - 12;
        _t31 = puts("Greater");
        __esp = __esp + 12;
    }
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fxch st0, st1");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t31 & 4294967295 & 5) == 0) {
        __esp = __esp - 12;
        _t31 = puts("Less or Equal");
        __esp = __esp + 12;
    }
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t31 & 4294967295 & 5) == 0) {
        __esp = __esp - 12;
        _t31 = puts("Greater or Equal");
        __esp = __esp + 12;
    }
    asm("fld dword [ebp-0x8]");
    asm("fld dword [ebp-0x4]");
    asm("fxch st0, st1");
    asm("fucompp ");
    asm("fnstsw ax");
    if((_t31 & 4294967295 & 69) != 0) {
        return 0;
    }
    __esp = __esp - 12;
    puts(134514188);
    __esp = __esp + 12;
    return 0;
}

L0804852A(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4558;
    L080482C8();
    __edx = _t9 + -224;
     *(__ebp - 16) = _t9 + -224 - __edx >> 2;
    if(__eflags != 0) {
        _t11 = 0;
        _t13 = __edx;
        while(1) {
L3:
             *_t13();
            _t11 = _t11 + 1;
            _t13 = _t13 + 4;
            __eflags = _t11 -  *(__ebp - 16);
            if(_t11 >=  *(__ebp - 16)) {
                break;
            }
        }
        __esp = __esp + 12;
        _pop(__ebx);
        _pop(__esi);
        _pop(__edi);
        __esp = __ebp;
        _pop(__ebp);
        return;
L5:
    }
    __esp = __esp + 12;
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    __esp = __ebp;
    _pop(__ebp);
    return;
    goto L5;
}

L08048574(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518296;
    if(__eax != 255) {
        __ebx = 134518296;
        while(1) {
L2:
             *__eax();
            __eax =  *((intOrPtr*)(__ebx - 4));
            __ebx = __ebx - 4;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

L08048574(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518296;
    if(__eax != 255) {
        __ebx = 134518296;
        while(1) {
L2:
             *__eax();
            __eax =  *((intOrPtr*)(__ebx - 4));
            __ebx = __ebx - 4;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

// Statistics:
//      94 Register nodes
//      29 Temporaries nodes
//       3 Casts
//     197 Statements
//       6 Labels
//       1 Gotos
//      12 Blocks
//     460 Nodes
//      31 Assembly nodes
//      23 Unknown Types


