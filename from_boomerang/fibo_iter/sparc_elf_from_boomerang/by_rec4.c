L00010568(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
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
    L00010568(__o7, 65536, __i7);
    _t37 = 0x102a0;
    2348901784();
    if( *((void*)( *((void*)(_t37 + (__l1 | 12))))) - "/usr/lib/ld.so.1") {
        _t25 =  *((void*)( *((void*)( *((void*)(_t37 + ("/usr/lib/ld.so.1" | 16)))))));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L3:
            goto (_t25 + "/usr/lib/ld.so.1");
            2348901852();
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        2348901876();
        if( *((void*)(_t37 + ("/usr/lib/ld.so.1" | 36))) - "/usr/lib/ld.so.1") {
            L00020898();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010570(_unknown_ __l7, _unknown_ __i7)
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
    _unknown_ _t37;

    __i7 = __i7;
    __l1 = "/usr/lib/ld.so.1";
    L00010568(__o7, 65536, __i7);
    _t35 = 0x102a0;
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
        if( *((void*)(_t35 + ("/usr/lib/ld.so.1" | 36))) - "/usr/lib/ld.so.1") {
            L00020898();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010630(_unknown_ __o1, _unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t8;
    _unknown_ _t13;
    _unknown_ _t16;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;

    __i7 = __i7;
    L00010568(__o7, 65536, __i7);
    _t28 = 0x101e0;
    if( *((void*)(_t28 + ("/usr/lib/ld.so.1" | 32))) - "/usr/lib/ld.so.1") {
        L000208A4();
    }
    if( *((void*)( *((void*)(_t28 + ("/usr/lib/ld.so.1" | 20))))) - "/usr/lib/ld.so.1" &&  *((void*)(_t28 + ("/usr/lib/ld.so.1" | 28))) - "/usr/lib/ld.so.1") {
        L000208B0();
        asm("restore %g0, %g0, %g0");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

fib(_unknown_ __o0, signed int __o2, signed int __o3, _unknown_ __o7, _unknown_ __i0, _unknown_ __i6, _unknown_ __i7, _unknown_ _a8)
{// addr = 0x000106C4
    signed int _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    signed int _t18;
    signed int _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    signed int _t22;
    signed int _t23;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    signed int _t31;

    __i7 = __i7;
    __i6 = __i6;
    _t28 = __i0;
    __o7 = __o7;
    _t22 = __o3;
    _t18 = __o2;
    _t8 = __o0;
    if(_t8 - 1 & 0) {
        _t31 = _t8 - 2;
        _t19 = 1 | _t18;
        if(_t31 & 0) {
            _t23 = 1 | _t22;
            while(1) {
L3:
                _t5 = _t19;
                _t20 = _t19 + _t23;
                asm("addcc %o1, -1, %o1");
                if(_t31) {
                    break;
                }
            }
            _t24 = _t5;
        }
    }
    printf();
    scanf();
    fib( *((void*)(__i6 - 20)), _t20, _t24, __o7, _t28, __i6, __i7);
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(_unknown_ __o0, _unknown_ __i0, _unknown_ __i6, _unknown_ __i7)
{// addr = 0x00010704
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t17;

    __i7 = __i7;
    __i6 = __i6;
    printf();
    scanf();
    fib( *((void*)(__i6 - 20)), _t14, __o3, __o7, __i0, __i6, __i7);
    printf();
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010750(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    void _t8;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t15;
    _unknown_ _t16;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    L00010750(__o7, 65536, __i7);
    __o1 =  *((void*)(0x100b8 + ("/usr/lib/ld.so.1" | 24)));
    _t8 =  *((void*)(__o1 - 4));
    if(_t8 - 4294967295) {
        _t12 = __o1 + 4294967292;
        while(1) {
L3:
            goto (_t8 + "/usr/lib/ld.so.1");
            if( *((void*)(_t12 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010758(_unknown_ __l7, _unknown_ __i7)
{
    void _t7;
    _unknown_ _t9;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    L00010750(__o7, 65536, __i7);
    __o1 =  *((void*)(0x100b8 + ("/usr/lib/ld.so.1" | 24)));
    _t7 =  *((void*)(__o1 - 4));
    if(_t7 - 4294967295) {
        _t11 = __o1 + 4294967292;
        while(1) {
L2:
            goto (_t7 + "/usr/lib/ld.so.1");
            if( *((void*)(_t11 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

_init(_unknown_ __i7)
{// addr = 0x000107B8
    __i7 = __i7;
    L00010630(__o1, __l7, __i7);
    L00010758(__l7, __i7);
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x00020874
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
{// addr = 0x00020880
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
{// addr = 0x0002088C
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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

L00020898()
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
{// addr = 0x000208BC
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
{// addr = 0x000208C8
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
{// addr = 0x000208C8
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
    3221356792();
    asm("!UNIMP");
    3221358872();
    asm("!UNIMP");
    3221358884();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356888();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358948();
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
//      77 Register nodes
//      50 Temporaries nodes
//      24 Casts
//     904 Statements
//      10 Labels
//       0 Gotos
//      16 Blocks
//    1077 Nodes
//     512 Assembly nodes
//     135 Unknown Types


