int fib(int x)
{// addr = 0x10000434
    _unknown_ _t10;
    int _t11;
    _unknown_ _t12;
    int _t13;
    _unknown_ _t15;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;

    __lr = __lr;
    __r1 = {;
    _t11 =  *(36 + __r1);
    if((cr7 - __r3) * 0) {
        fib();
        _t13 = fib();
        __r1 = __r1 + 32;
        return _t13;
    } else {
        __r1 = __r1 + 32;
        return _t11;
    }
}

int main()
{// addr = 0x100004A8
    int number;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    int _t17;
    int _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t38;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t42;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t47;
    _unknown_ _t48;

    __lr = __lr;
    __r1 = {;
    printf();
    asm("crxor cr1:eq,cr1:eq,cr1:eq");
    scanf();
    __flags = cr7 -  *((void*)(8 + __r1));
    if(__flags * 0) {
        fib();
        fib();
        asm("crxor cr1:eq,cr1:eq,cr1:eq");
        _t17 = printf();
        __r1 = __r1 + 32;
        return _t17;
    } else {
        asm("crxor cr1:eq,cr1:eq,cr1:eq");
        _t18 = printf();
        __r1 = __r1 + 32;
        return _t18;
    }
}

L10010A24()
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
    asm("?");
    asm("rldimi r0,r1,13,25");
}

scanf()
{// addr = 0x10010A80
    asm("?");
    asm("andis. r15,r3,0x6f200000");
    asm("?");
    asm("rldimi r0,r1,13,25");
}

printf()
{// addr = 0x10010A90
}

printf()
{// addr = 0x10010A90
}

// Statistics:
//      19 Register nodes
//       8 Temporaries nodes
//       1 Casts
//      81 Statements
//       0 Labels
//       0 Gotos
//       4 Blocks
//     112 Nodes
//      25 Assembly nodes
//      54 Unknown Types


