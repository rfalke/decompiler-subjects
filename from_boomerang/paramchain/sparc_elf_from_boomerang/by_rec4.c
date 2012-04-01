addem(_unknown_ __o0, _unknown_ __o1, _unknown_ __o2, _unknown_ __o3, _unknown_ __o7, _unknown_ __i6, _unknown_ __i7, char _a8)
{// addr = 0x00010934
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
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;

    __i7 = __i7;
    __i6 = __i6;
    __o7 = __o7;
    _t18 = __o3;
    _t16 = __o2;
    _t13 = __o1;
    _t10 = __o0;
    goto ( &_a8);
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    _t8 = __o7;
    addem(_t10, _t13, _t16, _t18, __o7, __i6, __i7);
    __o7 = _t8;
    L1();
    printf();
    goto (__i7 + 8);
    asm("restore 0, %o0");
}

passem(signed int __o0, signed int __o1, _unknown_ __o2, _unknown_ __i6, _unknown_ __i7)
{// addr = 0x00010954
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t7;
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    __i6 = __i6;
    _t11 = __o2;
    _t8 = __o1;
    _t5 = __o0;
    _t3 = __o7;
    addem(__o0, __o1, __o2, _t13, __o7, __i6, __i7);
    __o7 = _t3;
    passem(5 | _t5, 10 | _t8, _t11, __i6, __i7);
    printf();
    goto (__i7 + 8);
    asm("restore 0, %o0");
}

main(_unknown_ __o2, _unknown_ __i6, _unknown_ __i7)
{// addr = 0x00010960
    signed int _t3;
    _unknown_ _t5;
    signed int _t6;
    _unknown_ _t8;
    _unknown_ _t10;

    __i7 = __i7;
    __i6 = __i6;
    passem(5 | _t3, 10 | _t6, __o2, __i6, __i7);
    printf();
    goto (__i7 + 8);
    asm("restore 0, %o0");
}

L00010990(_unknown_ __o7, _unknown_ __i7, void _a8)
{
    __i7 = __i7;
    __o7 = __o7;
    L1();
    asm("!UNIMP");
    __l0 =  *((void*)(__o7 + _a8 - 8));
    if(__l0) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L000109A0(_unknown_ __o7, _unknown_ __i7, void _a8)
{
    __i7 = __i7;
    __o7 = __o7;
    __l0 =  *((void*)(__o7 + _a8 - 8));
    2349009036();
    if(__l0) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

L000109D8(_unknown_ __o7, _unknown_ __i7, void _a8)
{
    __i7 = __i7;
    __o7 = __o7;
    __l0 =  *((void*)(__o7 + _a8 - 4));
    2349009092();
    if(__l0) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

atexit()
{// addr = 0x00020A3C
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
    3221359232();
    asm("!UNIMP");
    3221359244();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357240();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("!UNIMP");
}

exit()
{// addr = 0x00020A48
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
    3221359232();
    asm("!UNIMP");
    3221359244();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357240();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("!UNIMP");
}

_exit()
{// addr = 0x00020A54
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
    3221359232();
    asm("!UNIMP");
    3221359244();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357240();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("!UNIMP");
}

printf()
{// addr = 0x00020A60
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359232();
    asm("!UNIMP");
    3221359244();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357240();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("!UNIMP");
}

printf()
{// addr = 0x00020A60
    asm("ba,a 0xffffffa8");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221359232();
    asm("!UNIMP");
    3221359244();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221357240();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
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
    asm("!UNIMP");
}

// Statistics:
//      66 Register nodes
//      21 Temporaries nodes
//       3 Casts
//     469 Statements
//       0 Labels
//       0 Gotos
//      10 Blocks
//     480 Nodes
//     249 Assembly nodes
//      52 Unknown Types


