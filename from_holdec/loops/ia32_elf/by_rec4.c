L08048294()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5036 + -4)) != 0) {
        L080482D4();
    }
    L080483A0();
    L08048470();
    _pop(__eax);
    return;
}

L080482A0()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 5036 + -4)) != 0) {
        L080482D4();
    }
    L080483A0();
    L08048470();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080482D4()
{
    goto __imp____gmon_start__;
}

__libc_start_main()
{// addr = 0x080482E4
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x080482F4
    goto __imp__printf;
}

L080483A0()
{
    _unknown_ __ebp;

    __eax =  *134518140;
    if( *134518140 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134518140;
     *__eax();
    return;
}

forever()
{// addr = 0x080483C4
    int i;
    intOrPtr _v16;
    intOrPtr _v40;
    _unknown_ _t6;
    _unknown_ _t7;

    _v16 = 0;
    while(1) {
        _v16 = _v16 + 1;
        _v40 = _v16;
        printf(134513860);
    }
}

int main()
{// addr = 0x080483EB
    _unknown_ __ebp;

    __esp = __esp & 240;
    forever();
    return 0;
}

L0804846A()
{
    return;
}

L08048470()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134518124;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134518124;
    asm("o16 nop ");
    while(1) {
L2:
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
        if(__eax == 255) {
            break;
        }
    }
    return;
}

L08048470()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134518124;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134518124;
    asm("o16 nop ");
    while(1) {
L2:
        __ebx = __ebx - 4;
         *__eax();
        __eax =  *__ebx;
        if(__eax == 255) {
            break;
        }
    }
    return;
}

// Statistics:
//      26 Register nodes
//       2 Temporaries nodes
//       2 Casts
//      83 Statements
//       2 Labels
//       0 Gotos
//      10 Blocks
//     136 Nodes
//       1 Assembly nodes
//       9 Unknown Types


