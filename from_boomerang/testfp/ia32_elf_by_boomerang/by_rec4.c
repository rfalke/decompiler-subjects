L08048280()
{
    _unknown_ __ebp;

    L080482FC(__ecx);
    L08048354();
    L08048650(__edx);
    return;
}

__libc_start_main()
{// addr = 0x080482A8
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482B8
    goto __imp__printf;
}

__gmon_start__()
{// addr = 0x080482C8
    goto __imp____gmon_start__;
}

L080482FC(_unknown_ __ecx)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __ecx = __ecx;
    _push(__ecx);
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5286 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    return;
}

L08048306()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5286 + -4)) != 0) {
        __gmon_start__();
    }
    _pop(__eax);
    _pop(__ebx);
    _pop(__ebp);
    return;
}

L08048354()
{
    _unknown_ __ebp;

    __eax =  *134518492;
    if( *134518492 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518492);
     *__eax();
    __esp = __esp + 16;
    return;
}

main()
{// addr = 0x0804837C
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;

    __esp = __esp & 240;
    __esp = __esp;
    __esp = __esp - 12;
    _push("Hello, world\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fsub st0, st1");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fstp st0");
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fsubr st1, st0");
    asm("fstp st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fsubr st0, st1");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fstp st0");
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fsub st1, st0");
    asm("fstp st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fsubrp st1, st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fsubp st1, st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fdiv st0, st1");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fstp st0");
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fdivr st1, st0");
    asm("fstp st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fdivr st0, st1");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fstp st0");
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fdiv st1, st0");
    asm("fstp st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fdivrp st1, st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fild word [0x80486c4]");
    asm("fdivp st1, st0");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fisub word [0x80486c4]");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("fild word [0x80486c0]");
    asm("fisubr word [0x80486c4]");
    asm("fstp qword [0x80497d0]");
    _push( *134518740);
    _push( *134518736);
    _push("Result is %f\n");
    printf();
    asm("rdtsc ");
    __esp = __esp + 16;
    return;
}

L08048606(_unknown_ __eflags)
{
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    intOrPtr* _t13;

    __eflags = __eflags;
    _pop(__ebx);
    _t9 = _t8 + 4518;
    L08048280();
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

L08048650(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518476;
    if(__eax != 255) {
        __ebx = 134518476;
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

L08048650(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518476;
    if(__eax != 255) {
        __ebx = 134518476;
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
//      67 Register nodes
//      15 Temporaries nodes
//       3 Casts
//     226 Statements
//       6 Labels
//       1 Gotos
//      10 Blocks
//     468 Nodes
//      63 Assembly nodes
//      32 Unknown Types


