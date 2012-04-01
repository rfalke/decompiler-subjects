L0001055C(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t18;
    _unknown_ _t22;
    _unknown_ _t23;
    void _t28;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t38;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    __l1 = "/usr/lib/ld.so.1";
    L0001055C(__o7, 65536, __i7);
    _t36 = 0x102b8;
    if( *((void*)( *((void*)(_t36 + (__l1 | 16))))) - "/usr/lib/ld.so.1") {
        _t28 =  *((void*)( *((void*)( *((void*)(_t36 + ("/usr/lib/ld.so.1" | 12)))))));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L3:
            goto (_t28 + "/usr/lib/ld.so.1");
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        if( *((void*)(_t36 + ("/usr/lib/ld.so.1" | 36))) - "/usr/lib/ld.so.1") {
            L000208A4();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010564(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t21;
    _unknown_ _t22;
    void _t27;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t36;

    __i7 = __i7;
    __l1 = "/usr/lib/ld.so.1";
    L0001055C(__o7, 65536, __i7);
    _t34 = 0x102b8;
    if( *((void*)( *((void*)(_t34 + (__l1 | 16))))) - "/usr/lib/ld.so.1") {
        _t27 =  *((void*)( *((void*)( *((void*)(_t34 + ("/usr/lib/ld.so.1" | 12)))))));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L2:
            goto (_t27 + "/usr/lib/ld.so.1");
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        if( *((void*)(_t34 + ("/usr/lib/ld.so.1" | 36))) - "/usr/lib/ld.so.1") {
            L000208A4();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L0001061C(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t14;
    _unknown_ _t16;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;

    __i7 = __i7;
    L0001055C(__o7, 65536, __i7);
    _t22 = 0x10200;
    if( *((void*)(_t22 + ("/usr/lib/ld.so.1" | 32))) - "/usr/lib/ld.so.1") {
        L000208B0();
    }
    if( *((void*)( *((void*)(_t22 + ("/usr/lib/ld.so.1" | 8))))) - "/usr/lib/ld.so.1" &&  *((void*)(_t22 + ("/usr/lib/ld.so.1" | 28))) - "/usr/lib/ld.so.1") {
        L000208BC();
        asm("restore %g0, %g0, %g0");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

fib(_unknown_ __i6, _unknown_ __i7)
{// addr = 0x000106AC
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;

    __i7 = __i7;
    __i6 = __i6;
    _t28 = _t27 + 4294967200;
    if( *((void*)(_t28 + 80)) - 1 & 0) {
        fib(__i6, __i7);
        fib(__i6, __i7);
    }
    goto ( *((void*)(_t28 + 84)) + 8);
    printf();
    scanf();
    fib(__i6, __i7);
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(_unknown_ __i6, _unknown_ __i7)
{// addr = 0x000106FC
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;

    __i7 = __i7;
    __i6 = __i6;
    __o6 = {;
    printf();
    scanf();
    fib(__i6, __i7);
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L0001075C(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    void _t8;
    _unknown_ _t10;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    L0001075C(__o7, 65536, __i7);
    __o5 =  *((void*)(0x100b8 + ("/usr/lib/ld.so.1" | 24)));
    _t8 =  *((void*)(__o5 - 4));
    if(_t8 - 4294967295) {
        _t10 = __o5 + 4294967292;
        while(1) {
L3:
            goto (_t8 + "/usr/lib/ld.so.1");
            if( *((void*)(_t10 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010764(_unknown_ __l7, _unknown_ __i7)
{
    void _t7;
    _unknown_ _t9;
    _unknown_ _t11;
    _unknown_ _t12;

    __i7 = __i7;
    L0001075C(__o7, 65536, __i7);
    __o5 =  *((void*)(0x100b8 + ("/usr/lib/ld.so.1" | 24)));
    _t7 =  *((void*)(__o5 - 4));
    if(_t7 - 4294967295) {
        _t9 = __o5 + 4294967292;
        while(1) {
L2:
            goto (_t7 + "/usr/lib/ld.so.1");
            if( *((void*)(_t9 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

_init(_unknown_ __i7)
{// addr = 0x000107BC
    __i7 = __i7;
    L0001061C(__l7, __i7);
    L00010764(__l7, __i7);
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x00020880
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;

    asm("ba,a 0xffffffcc");
    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

exit()
{// addr = 0x0002088C
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

_exit()
{// addr = 0x00020898
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L000208A4()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L000208B0()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L000208BC()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;

    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

printf()
{// addr = 0x000208C8
    _unknown_ _t1;
    _unknown_ _t2;

    asm("ba,a 0xffffff84");
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

scanf()
{// addr = 0x000208D4
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

scanf()
{// addr = 0x000208D4
    asm("ba,a 0xffffff78");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356820();
    asm("!UNIMP");
    3221358900();
    asm("!UNIMP");
    3221358912();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358976();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("invalid op3 (0x3f)");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

// Statistics:
//      69 Register nodes
//      30 Temporaries nodes
//      24 Casts
//     942 Statements
//       8 Labels
//       0 Gotos
//      16 Blocks
//    1059 Nodes
//     543 Assembly nodes
//     114 Unknown Types


