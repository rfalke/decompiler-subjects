L08048230()
{
    _unknown_ __ebp;

    L0804829C(__eax, __ebx);
    L080482FC();
    L08048418(__edx);
    return;
}

__libc_start_main()
{// addr = 0x08048258
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x08048268
    goto __imp__printf;
}

L0804829C(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _push(_t5);
    _push(__eax);
    L1();
    _pop(__ebx);
    _t4 =  *((intOrPtr*)(_t5 + 4798 + 20));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080482A6()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 4798 + 20));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L080482C0()
{
    _unknown_ __ebp;
    _unknown_ _t1;
    intOrPtr* _t2;

    if( *134518140 != 0) {
        return ;
    }
    _t2 =  *134517892;
    __edx =  *_t2;
    if(__edx == 0) {
L4:
         *134518140 = 1;
        return;
    } else {
        while(1) {
L3:
             *134517892 = _t2 + 4;
             *__edx();
            _t2 =  *134517892;
            __edx =  *_t2;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L080482FC()
{
    _unknown_ __ebp;

    if( *134518112 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
    __esp = __esp - 12;
    _push(134518112);
    0();
    __esp = __esp + 16;
    return;
}

main(intOrPtr _a4)
{// addr = 0x08048328
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    _unknown_ __ebp;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t19;
    _unknown_ _t22;

    __esp = __esp & 240;
    __esp = __esp;
    _v8 = 0;
    __esp = __esp - 12;
    printf("Figure 19.2\n");
    __esp = __esp + 12;
    _v8 = 1;
    _v16 = _a4;
    _v12 = 0;
    __esp = __esp - 12;
    printf("1");
    __esp = __esp + 12;
    _v8 = 2;
    if(_v16 <= 3) {
        _v8 = 3;
        _v12 = _v16;
    }
    _v8 = 4;
    _v20 = _v16 + _v12;
    __esp = __esp - 8;
    _push(_v20);
    printf("C is %d\n");
    __esp = __esp + 12;
    return;
}

L08048418(_unknown_ __edx)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __edx = __edx;
    _push(__edx);
    __eax =  *134518096;
    __ebx = 134518096;
    if(__eax != 255) {
        while(1) {
L1:
            __ebx = __ebx - 4;
             *__eax();
            __eax =  *__ebx;
            if(__eax == 255) {
                break;
            }
        }
    }
    _pop(__eax);
    return;
}

L08048446()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    L080482C0();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048446()
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    _pop(__ebx);
    @rec 0x080482C0@L080482C0@();
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      53 Register nodes
//      12 Temporaries nodes
//       2 Casts
//     137 Statements
//       6 Labels
//       1 Gotos
//      10 Blocks
//     259 Nodes
//       0 Assembly nodes
//      22 Unknown Types


