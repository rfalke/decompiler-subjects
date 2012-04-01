test(_unknown_ __r1, signed int __r4, _unknown_ __o0, _unknown_ __i0, _unknown_ __i7)
{// addr = 0x0001061C
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t9;
    _unknown_ _t13;
    signed int _t14;
    signed int _t15;
    _unknown_ _t19;

    __i7 = __i7;
    __i0 = __i0;
    _t12 = 4294967295 | __r4;
    asm("subx %g4, %o5, %g4");
    _t14 = "GLOBAL_OFFSET_TABLE_" + 844;
    asm("subx %g2, 0, %g2");
    _t7 = __o7;
    printf();
    __o7 = __o7;
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    test(_t7, _t12, _t14, __i0, __i7);
    _t15 = 4294967291 | _t14;
    test(_t7, _t12, _t15, __i0, __i7);
    _t16 = 4294967294 | _t15;
    test(_t7, _t12, 4294967294 | _t15, __i0, __i7);
    test(_t7, _t12, 0 | _t16, __i0, __i7);
    test(_t7, _t12, __i0, __i0, __i7);
    goto (__i7 + 8);
    asm("restore 0, %o0");
}

main(signed int __o0, _unknown_ __i7)
{// addr = 0x00010670
    signed int _t2;
    signed int _t3;
    _unknown_ _t7;

    __i7 = __i7;
    _t2 = __o0;
    test(__r1, __r4, _t2, __i0, __i7);
    _t3 = 4294967291 | _t2;
    test(__r1, __r4, _t3, __i0, __i7);
    _t4 = 4294967294 | _t3;
    test(__r1, __r4, 4294967294 | _t3, __i0, __i7);
    test(__r1, __r4, 0 | _t4, __i0, __i7);
    test(__r1, __r4, __i0, __i0, __i7);
    goto (__i7 + 8);
    asm("restore 0, %o0");
}

_init(_unknown_ __o7, _unknown_ __i7, void _a8)
{// addr = 0x000106A4
    _unknown_ _t8;

    __i7 = __i7;
    __o7 = __o7;
    L1();
    asm("!UNIMP");
    _t8 = __o7 + _a8;
    __l0 =  *((void*)(_t8 - 8));
    __l1 =  *((void*)(_t8 - 16));
    if(__l0) {
    }
    if(__l1) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L000106B4(_unknown_ __o7, _unknown_ __i7, void _a8)
{
    _unknown_ _t8;

    __i7 = __i7;
    __o7 = __o7;
    _t8 = __o7 + _a8;
    __l0 =  *((void*)(_t8 - 8));
    __l1 =  *((void*)(_t8 - 16));
    if(__l0) {
    }
    if(__l1) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L00010704(_unknown_ __o7, _unknown_ __i7, void _a8)
{
    _unknown_ _t8;

    __i7 = __i7;
    __o7 = __o7;
    _t8 = __o7 + _a8;
    __l0 =  *((void*)(_t8 - 4));
    __l1 =  *((void*)(_t8 - 12));
    if(__l0) {
    }
    if(__l1) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x00020794
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    asm("ba,a 0xffffffcc");
    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356520();
    asm("!UNIMP");
    3221358600();
    asm("!UNIMP");
    3221358612();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356616();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358676();
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("invalid op3 (0x3f)");
    asm("invalid op3 (0x3f)");
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
}

exit()
{// addr = 0x000207A0
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;

    asm("ba,a 0xffffffc0");
    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356520();
    asm("!UNIMP");
    3221358600();
    asm("!UNIMP");
    3221358612();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356616();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358676();
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("invalid op3 (0x3f)");
    asm("invalid op3 (0x3f)");
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
}

_exit()
{// addr = 0x000207AC
    _unknown_ _t1;
    _unknown_ _t2;

    asm("ba,a 0xffffffb4");
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356520();
    asm("!UNIMP");
    3221358600();
    asm("!UNIMP");
    3221358612();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356616();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358676();
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("invalid op3 (0x3f)");
    asm("invalid op3 (0x3f)");
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
}

printf()
{// addr = 0x000207B8
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356520();
    asm("!UNIMP");
    3221358600();
    asm("!UNIMP");
    3221358612();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356616();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358676();
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("invalid op3 (0x3f)");
    asm("invalid op3 (0x3f)");
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
}

printf()
{// addr = 0x000207B8
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356520();
    asm("!UNIMP");
    3221358600();
    asm("!UNIMP");
    3221358612();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356616();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358676();
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("invalid op3 (0x3f)");
    asm("invalid op3 (0x3f)");
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
}

// Statistics:
//      75 Register nodes
//      39 Temporaries nodes
//       6 Casts
//     460 Statements
//       0 Labels
//       0 Gotos
//       9 Blocks
//     584 Nodes
//     262 Assembly nodes
//      29 Unknown Types


