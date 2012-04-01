L0001054C(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
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
    char* _t36;
    char* _t37;
    _unknown_ _t39;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    __l1 = "/usr/lib/ld.so.1";
    _t36 = "r_frame_info";
    L0001054C(__o7, _t36, __i7);
    _t37 =  &(_t36[0x1c4]);
    if( *(_t37[__l1 | 12]) - "/usr/lib/ld.so.1") {
        _t25 =  *((void*)( *(_t37["/usr/lib/ld.so.1" | 16])));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L3:
            goto (_t25 + "/usr/lib/ld.so.1");
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        if(_t37["/usr/lib/ld.so.1" | 36] - "/usr/lib/ld.so.1") {
            L00020BA0();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010554(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t20;
    _unknown_ _t23;
    _unknown_ _t24;
    void _t27;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t36;
    char* _t37;
    char* _t38;
    _unknown_ _t40;

    __i7 = __i7;
    __l1 = "/usr/lib/ld.so.1";
    _t37 = "r_frame_info";
    L0001054C(__o7, _t37, __i7);
    _t38 =  &(_t37[0x1c4]);
    "/usr/lib/ld.so.1" = ("/usr/lib/ld.so.1")[__i5];
    if( *(_t38[__l1 | 12]) - "/usr/lib/ld.so.1") {
        _t27 =  *((void*)( *(_t38["/usr/lib/ld.so.1" | 16])));
        asm("be,a 0x00000034");
        __l0 = "/usr/lib/ld.so.1";
        while(1) {
L2:
            goto (_t27 + "/usr/lib/ld.so.1");
            "/usr/lib/ld.so.1" = ("/usr/lib/ld.so.1")[__i5];
            if( *( *__l0) - "/usr/lib/ld.so.1") {
                break;
            }
        }
        "/usr/lib/ld.so.1" = ("/usr/lib/ld.so.1")[__i5];
        if(_t38["/usr/lib/ld.so.1" | 36] - "/usr/lib/ld.so.1") {
            L00020BA0();
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010614(_unknown_ __o1, _unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t8;
    _unknown_ _t13;
    _unknown_ _t16;
    _unknown_ _t20;
    _unknown_ _t22;
    _unknown_ _t23;
    char* _t24;
    char* _t25;

    __i7 = __i7;
    _t24 = "r_frame_info";
    L0001054C(__o7, _t24, __i7);
    _t25 =  &(_t24[0x104]);
    if(_t25["/usr/lib/ld.so.1" | 32] - "/usr/lib/ld.so.1") {
        L00020BAC();
    }
    if( *(_t25["/usr/lib/ld.so.1" | 20]) - "/usr/lib/ld.so.1" && _t25["/usr/lib/ld.so.1" | 28] - "/usr/lib/ld.so.1") {
        L00020BB8();
        asm("restore %g0, %g0, %g0");
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(signed int __i0, signed int __i1, signed int __i2, _unknown_ __i7)
{// addr = 0x000106A8
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    signed int _t30;
    _unknown_ _t32;
    _unknown_ _t34;
    signed int _t36;
    _unknown_ _t37;

    __i7 = __i7;
    __i2 = __i2;
    __i1 = __i1;
    _t30 = __i0;
    if(_t30 - 1 & 0) {
        if(__flags / 0) {
L19:
            __flags = __i0 - 4294967224;
            if((__i0 - 4294967224) / 0) {
L27:
                __o2 = 67584;
                __o0 = __i1;
                __o1 = __i0;
                goto L9;
            }
            goto L20;
        }
        goto L13;
L20:
        __flags = __i0 - 4294967246;
        if((__i0 - 4294967246) % 0) {
            __o2 = __i2 + 1;
            __flags = "/usr/lib/ld.so.1" - __o0;
            asm("subx %i0, -1, %o0");
            goto L9;
        }
        __o0 =  *__i2;
        __flags = __i1 -  *__i2;
        if(__i1 -  *__i2) {
            __o1 = 134144;
            __o0 =  *(__o1 + 240);
            __o3 = __o1 | 240;
            __o0 =  *(__o1 + 240) + 4294967295;
            __flags =  *(__o1 + 240) + 4294967295 - "/usr/lib/ld.so.1";
            if(( *(__o1 + 240) + 4294967295 - "/usr/lib/ld.so.1") / 0) {
                __o0 =  *(__i2 + 31);
                __flsbuf();
                __o1 = __o3;
            } else {
                __o0 =  *(__o1 + 240);
                __o1 =  *(__i2 + 31);
                __o0 =  *(__o3 + 4);
                __i0 =  *(__i2 + 31);
                __o1 =  *__o0;
                __o0 = __o0 + 1;
            }
            goto L28;
        }
        __o2 = __i2 + 1;
        __o1 = __i1;
        goto L9;
    }
    if(_t30 - 2 & 0) {
        __o1 = "/usr/lib/ld.so.1" | __o1;
        main(__i0, __i1, __i2, __i7);
        __o0 = 4294967210 | __o0;
        67584 = __i1;
        __i0 = __o1 - __i1;
        main(__i0, __i1, __i2, __i7);
        __o0 = 4294967209 | __o0;
        __o0 = __i2 + __o0;
        __o2 = __o0;
        __o0 = 4294967217 | __o0;
        main(__i0, __i1, __i2, __i7);
        __o1 = 4294967283 | __o1;
    } else {
        _t36 = _t30 - __i1;
    }
    if(_t36 / 0) {
        __o1 = __i1;
        main(__i0, __i1, __i2, __i7);
        __o2 = __i2;
    } else {
        __o1 = _t30 + 4294967269;
    }
    main(_t30, __i1, __i2, __i7);
    asm("be,a 0x000001a0");
    if((16 | _t30) - 2) {
L28:
        goto (__i7 + 8);
        asm("restore %g0, %g0, %g0");
L29:
    } else {
        if(__i1 - 12 & 0) {
            __o1 = __i1 + 1;
            __o2 = __o2 | 304;
            __o0 = 2 | __o0;
            goto L9;
        }
        goto L28;
L9:
        main(__i0, __i1, __i2, __i7);
        goto L28;
    }
L13:
    __flags = __i0 - "/usr/lib/ld.so.1";
    if(__i0 - "/usr/lib/ld.so.1" & 0) {
        __o1 =  *__i2;
        __flags =  *__i2 - 47;
        if( *__i2 - 47) {
L18:
            goto L28;
        }
        goto L16;
    }
    67584 = 0x10940;
    __o0 = 2 | __o0;
    goto L9;
L16:
    __i0 = "/usr/lib/ld.so.1" | __i0;
    67584 = 0x10948;
    main(__i0, __i1, __i2, __i7);
    __o1 = __o0;
    __o2 = __i2 + 1;
    main(__i0, __i1, __i2, __i7);
    __o0 = "/usr/lib/ld.so.1" | __o0;
    __flags = __o0 - "/usr/lib/ld.so.1";
    if(__o0 - "/usr/lib/ld.so.1") {
        goto L28;
    }
    goto L18;
}

L00010890(_unknown_ __o7, _unknown_ __l7, _unknown_ __i7, char _a8)
{
    void _t8;
    _unknown_ _t10;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    __o7 = __o7;
    goto ( &_a8);
    L00010890(__o7, 65536, __i7);
    __o1 =  *((void*)(0x10280 + ("/usr/lib/ld.so.1" | 24)));
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

L00010898(_unknown_ __l7, _unknown_ __i7)
{
    _unknown_ _t7;
    _unknown_ _t8;
    void _t11;
    _unknown_ _t13;
    _unknown_ _t15;
    _unknown_ _t16;

    __i7 = __i7;
    L00010890(__o7, 65536, __i7);
    __o1 =  *((void*)(0x10280 + ("/usr/lib/ld.so.1" | 24)));
    _t11 =  *((void*)(__o1 - 4));
    if(_t11 - 4294967295) {
        _t13 = __o1 + 4294967292;
        while(1) {
L2:
            goto (_t11 + "/usr/lib/ld.so.1");
            if( *((void*)(_t13 + 4294967292)) - 4294967295) {
                break;
            }
        }
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

_init(_unknown_ __i7)
{// addr = 0x000108F8
    __i7 = __i7;
    L00010614(__o1, __l7, __i7);
    L00010898(__l7, __i7);
    "/usr/lib/ld.so.1" = "/usr/lib/ld.so.1";
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x00020B7C
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

exit()
{// addr = 0x00020B88
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

_exit()
{// addr = 0x00020B94
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L00020BA0()
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L00020BAC()
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

L00020BB8()
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

__flsbuf()
{// addr = 0x00020BC4
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

__flsbuf()
{// addr = 0x00020BC4
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
    3221357556();
    asm("!UNIMP");
    3221359636();
    asm("!UNIMP");
    3221359648();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357652();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359712();
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
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
}

// Statistics:
//     199 Register nodes
//      44 Temporaries nodes
//       8 Casts
//     837 Statements
//      26 Labels
//      14 Gotos
//      14 Blocks
//    1331 Nodes
//     474 Assembly nodes
//      88 Unknown Types


