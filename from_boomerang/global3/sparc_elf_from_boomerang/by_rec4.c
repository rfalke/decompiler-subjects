L000105A0(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t18;
    _unknown_ _t21;
    _unknown_ _t22;
    void _t25;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t39;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    __l1 = "/usr/lib/ld.so.1";
    L000105A0(__o7, 65536, __i7);
    _t37 = 0x10294;
    2348901840();
    if( *((void*)( *((void*)(_t37 + (__l1 | 12))))) - "/usr/lib/ld.so.1") {
        _t25 =  *((void*)( *((void*)( *((void*)(_t37 + ("/usr/lib/ld.so.1" | 16)))))));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L3:
            goto (_t25 + "/usr/lib/ld.so.1");
            2348901908();
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        2348901932();
        if( *((void*)(_t37 + ("/usr/lib/ld.so.1" | 28))) - "/usr/lib/ld.so.1") {
            L000208C4();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L000105A8(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t20;
    _unknown_ _t21;
    void _t24;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t40;

    __i7 = __i7;
    __l1 = "/usr/lib/ld.so.1";
    L000105A0(__o7, 65536, __i7);
    _t35 = 0x10294;
    if( *((void*)( *((void*)(_t35 + (__l1 | 12))))) - "/usr/lib/ld.so.1") {
        _t24 =  *((void*)( *((void*)( *((void*)(_t35 + ("/usr/lib/ld.so.1" | 16)))))));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L2:
            goto (_t24 + "/usr/lib/ld.so.1");
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        if( *((void*)(_t35 + ("/usr/lib/ld.so.1" | 28))) - "/usr/lib/ld.so.1") {
            L000208C4();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010668(_unknown_ __o1, _unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t8;
    _unknown_ _t13;
    _unknown_ _t16;
    _unknown_ _t20;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;

    __i7 = __i7;
    L000105A0(__o7, 65536, __i7);
    _t25 = 0x101d4;
    if( *((void*)(_t25 + ("/usr/lib/ld.so.1" | 32))) - "/usr/lib/ld.so.1") {
        L000208D0();
    }
    if( *((void*)( *((void*)(_t25 + ("/usr/lib/ld.so.1" | 20))))) - "/usr/lib/ld.so.1" &&  *((void*)(_t25 + ("/usr/lib/ld.so.1" | 36))) - "/usr/lib/ld.so.1") {
        L000208DC();
        asm("restore %g0, %g0, %g0");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

foo2(_unknown_ __i7)
{// addr = 0x000106FC
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t11;

    __i7 = __i7;
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

foo1(_unknown_ __i7)
{// addr = 0x0001073C
    __i7 = __i7;
    foo2(__i7);
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(_unknown_ __i7)
{// addr = 0x00010754
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t7;

    __i7 = __i7;
    foo1(__i7);
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010790(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    void _t8;
    _unknown_ _t10;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    L00010790(__o7, 65536, __i7);
    __o1 =  *((void*)(0x100a4 + ("/usr/lib/ld.so.1" | 24)));
    _t8 =  *((void*)(__o1 - 4));
    if(_t8 - 4294967295) {
        _t10 = __o1 + 4294967292;
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

L00010798(_unknown_ __l7, _unknown_ __i7)
{
    void _t7;
    _unknown_ _t9;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t14;
    _unknown_ _t15;

    __i7 = __i7;
    L00010790(__o7, 65536, __i7);
    __o1 =  *((void*)(0x100a4 + ("/usr/lib/ld.so.1" | 24)));
    _t7 =  *((void*)(__o1 - 4));
    if(_t7 - 4294967295) {
        _t9 = __o1 + 4294967292;
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
{// addr = 0x000107F8
    __i7 = __i7;
    L00010668(__o1, __l7, __i7);
    L00010798(__l7, __i7);
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x000208A0
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;

    asm("ba,a 0xffffffcc");
    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x000208AC
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x000208B8
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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

L000208C4()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    asm("ba,a 0xffffffa8");
    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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

L000208D0()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;

    asm("ba,a 0xffffff9c");
    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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

L000208DC()
{
    _unknown_ _t1;
    _unknown_ _t2;

    asm("ba,a 0xffffff90");
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x000208E8
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x000208E8
    asm("ba,a 0xffffff84");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356824();
    asm("!UNIMP");
    3221358904();
    asm("!UNIMP");
    3221358916();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356920();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358980();
    asm("!UNIMP");
    asm("!UNIMP");
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
//      62 Register nodes
//      26 Temporaries nodes
//      22 Casts
//     831 Statements
//       8 Labels
//       0 Gotos
//      16 Blocks
//     925 Nodes
//     460 Assembly nodes
//     101 Unknown Types


