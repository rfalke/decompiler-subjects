L00010544(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
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
    L00010544(__o7, 65536, __i7);
    _t36 = 0x103f0;
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
            L000209C4();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L0001054C(_unknown_ __l7, _unknown_ __i7)
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
    L00010544(__o7, 65536, __i7);
    _t34 = 0x103f0;
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
            L000209C4();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010604(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t14;
    _unknown_ _t16;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;

    __i7 = __i7;
    L00010544(__o7, 65536, __i7);
    _t25 = 0x10338;
    if( *((void*)(_t25 + ("/usr/lib/ld.so.1" | 32))) - "/usr/lib/ld.so.1") {
        L000209D0();
    }
    if( *((void*)( *((void*)(_t25 + ("/usr/lib/ld.so.1" | 8))))) - "/usr/lib/ld.so.1" &&  *((void*)(_t25 + ("/usr/lib/ld.so.1" | 28))) - "/usr/lib/ld.so.1") {
        L000209DC();
        asm("restore %g0, %g0, %g0");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(_unknown_ __o4, _unknown_ __l0, _unknown_ __l1, _unknown_ __i6, _unknown_ __i7)
{// addr = 0x00010694
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t12;

    __i7 = __i7;
    __i6 = __i6;
    __l1 = __l1;
    __l0 = __l0;
    asm("?ldf [%g1], %o0");
    asm("?stf %o0, [%fp - 20]");
    scanf();
    asm("?ldf [%fp - 20], %o0");
    asm("fpop1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop1");
    asm("?stdf %o2, [%fp - 16]");
    asm("ldd [%fp - 16], %o4");
    asm("?stdf %o0, [%fp - 16]");
    asm("ldd [%fp - 16], %l0");
    printf();
    asm("?ldf [%fp - 20], %o1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop2");
    asm("fbe 0x00000004");
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    asm("?ldf [%fp - 20], %o1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop2");
    asm("fbne 0x00000004");
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    asm("?ldf [%fp - 20], %o1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop2");
    asm("fbg 0x00000004");
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    asm("?ldf [%fp - 20], %o1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop2");
    asm("fble 0x00000004");
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    asm("?ldf [%fp - 20], %o1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop2");
    asm("fbge 0x00000004");
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    asm("?ldf [%fp - 20], %o1");
    asm("?ldf [%fp - 24], %o0");
    asm("fpop2");
    asm("fbl 0x00000004");
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010830(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    void _t8;
    _unknown_ _t10;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    L00010830(__o7, 65536, __i7);
    __o5 =  *((void*)(0x10104 + ("/usr/lib/ld.so.1" | 24)));
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

L00010838(_unknown_ __l7, _unknown_ __i7)
{
    void _t7;
    _unknown_ _t9;
    _unknown_ _t11;
    _unknown_ _t12;

    __i7 = __i7;
    L00010830(__o7, 65536, __i7);
    __o5 =  *((void*)(0x10104 + ("/usr/lib/ld.so.1" | 24)));
    _t7 =  *((void*)(__o5 - 4));
    __o7 = __r5 & 4294967222;
    if(_t7 - 4294967295) {
        _t9 = __o5 + 4294967292;
        while(1) {
L2:
            goto (_t7 + "/usr/lib/ld.so.1");
            __o7 = __r5 & 4294967222;
            if( *((void*)(_t9 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

_init(_unknown_ __i7)
{// addr = 0x00010890
    __i7 = __i7;
    L00010604(__l7, __i7);
    L00010838(__l7, __i7);
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x000209A0
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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
{// addr = 0x000209AC
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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
{// addr = 0x000209B8
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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

L000209C4()
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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

L000209D0()
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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

L000209DC()
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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
{// addr = 0x000209E8
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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
{// addr = 0x000209F4
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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
{// addr = 0x000209F4
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
    3221357108();
    asm("!UNIMP");
    3221359188();
    asm("!UNIMP");
    3221359200();
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
    3221357204();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359264();
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
//      63 Register nodes
//      26 Temporaries nodes
//      22 Casts
//     945 Statements
//       8 Labels
//       0 Gotos
//      15 Blocks
//    1070 Nodes
//     576 Assembly nodes
//      98 Unknown Types


