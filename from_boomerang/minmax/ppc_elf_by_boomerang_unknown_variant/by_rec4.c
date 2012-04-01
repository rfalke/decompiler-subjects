int main(int argc)
{// addr = 0x1000040C
    _unknown_ _t4;
    _unknown_ _t5;
    int _t6;
    int _t7;
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
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;

    __lr = __lr;
    __r1 = {;
    if((cr6 - __r3) % 0) {
        if(__flags & 0) {
            goto L2;
        } else {
            asm("crxor cr1:eq,cr1:eq,cr1:eq");
            _t7 = printf();
            __r1 = __r1 + 16;
            return _t7;
        }
    } else {
L2:
        asm("crxor cr1:eq,cr1:eq,cr1:eq");
        _t6 = printf();
        __r1 = __r1 + 16;
        return _t6;
    }
L5:
}

L10010940()
{
    _unknown_ _t1;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    asm("bllr ");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
    asm("oris r14,r11,0x746f0000");
    asm("xoris r0,r25,0x4c690000");
    asm("xoris r21,r19,0x78200000");
    asm("oris r18,r9,0x30300000");
    asm("addic. r1,r16,0x3430");
    asm("bdz 0x3a20");
    asm("?");
    asm("?");
    asm("andis. r15,r3,0x6f200000");
}

printf()
{// addr = 0x100109A4
}

printf()
{// addr = 0x100109A4
}

// Statistics:
//       9 Register nodes
//       4 Temporaries nodes
//       0 Casts
//      39 Statements
//       4 Labels
//       1 Gotos
//       2 Blocks
//      55 Nodes
//      18 Assembly nodes
//      22 Unknown Types


