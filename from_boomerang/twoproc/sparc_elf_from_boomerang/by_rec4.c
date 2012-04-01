proc1(_unknown_ __o0, _unknown_ __o1, _unknown_ __o7, _unknown_ __i7, void _a8)
{// addr = 0x00010618
    signed int _t9;
    _unknown_ _t12;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;

    __i7 = __i7;
    __o7 = __o7;
    _t13 = __o1;
    goto ( &_a8);
    _t9 = __o0 - __o1;
    proc1(11 | _t9, _t13, __o7, __i7);
    printf();
    asm("restore %g2, 88, %o0");
    L3();
    asm("!UNIMP");
    _t12 = __o7 + _a8;
    __l0 =  *((void*)(_t12 - 8));
    __l1 =  *((void*)(_t12 - 16));
    2348901992();
    if(__l0) {
    }
    2348902012();
    if(__l1) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

main(signed int __o0, _unknown_ __o1, _unknown_ __o7, _unknown_ __i7, void _a8)
{// addr = 0x00010620
    _unknown_ _t10;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;

    __i7 = __i7;
    __o7 = __o7;
    proc1(11 | __o0, __o1, __o7, __i7);
    printf();
    asm("restore %g2, 88, %o0");
    L2();
    asm("!UNIMP");
    _t10 = __o7 + _a8;
    __l0 =  *((void*)(_t10 - 8));
    __l1 =  *((void*)(_t10 - 16));
    if(__l0) {
    }
    if(__l1) {
    }
    goto (__i7 + 8);
    asm("restore %g0, %g0, %g0");
}

_init(_unknown_ __o7, _unknown_ __i7, void _a8)
{// addr = 0x00010640
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

L00010650(_unknown_ __o7, _unknown_ __i7, void _a8)
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

L000106A0(_unknown_ __o7, _unknown_ __i7, void _a8)
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
{// addr = 0x0002071C
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
    3221356400();
    asm("!UNIMP");
    3221358480();
    asm("!UNIMP");
    3221358492();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356496();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358556();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x00020728
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
    3221356400();
    asm("!UNIMP");
    3221358480();
    asm("!UNIMP");
    3221358492();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356496();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358556();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x00020734
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
    3221356400();
    asm("!UNIMP");
    3221358480();
    asm("!UNIMP");
    3221358492();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356496();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358556();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x00020740
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
    3221356400();
    asm("!UNIMP");
    3221358480();
    asm("!UNIMP");
    3221358492();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356496();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358556();
    asm("!UNIMP");
    asm("!UNIMP");
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
{// addr = 0x00020740
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
    3221356400();
    asm("!UNIMP");
    3221358480();
    asm("!UNIMP");
    3221358492();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221356496();
    asm("!UNIMP");
    asm("!UNIMP");
    asm("!UNIMP");
    3221358556();
    asm("!UNIMP");
    asm("!UNIMP");
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
//      59 Register nodes
//      19 Temporaries nodes
//      10 Casts
//     479 Statements
//       0 Labels
//       0 Gotos
//       9 Blocks
//     504 Nodes
//     260 Assembly nodes
//      33 Unknown Types


