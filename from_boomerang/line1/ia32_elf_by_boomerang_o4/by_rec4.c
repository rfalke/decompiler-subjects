L080482F8()
{
    _unknown_ __ebp;

    L080483A4(__eax, __ebx);
    L08048410(__edi, __esi);
    L08048600(__edi, __esi);
    return;
}

char* strchr(char* __s, int __c)
{// addr = 0x08048320
    goto __imp__strchr;
}

int puts(char* str)
{// addr = 0x08048330
    goto __imp__puts;
}

char* fgets(char* dst, int sz, struct _IO_FILE* fp)
{// addr = 0x08048340
    goto __imp__fgets;
}

__libc_start_main()
{// addr = 0x08048350
    goto __imp____libc_start_main;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048360
    goto __imp__fclose;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048370
    goto __imp__fopen;
}

L080483A4(_unknown_ __eax, _unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _t5 = __ebx;
    _t3 = __eax;
    _push(_t5);
    L1();
    _pop(__ebx);
    _push(_t3);
    _t4 =  *((intOrPtr*)(_t5 + 5015 + 36));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080483AD(_unknown_ __eax)
{
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _pop(__ebx);
    _push(__eax);
    _t4 =  *((intOrPtr*)(_t5 + 5015 + 36));
    if(_t4 != 0) {
         *_t4();
    }
    _pop(__ebp);
    return;
}

L080483D0(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    intOrPtr* _t3;
    _unknown_ _t5;
    _unknown_ _t6;

    if( *134518636 != 0) {
        return ;
    }
    _t3 =  *134518368;
    __edx =  *_t3;
    if(__edx == 0) {
L4:
         *134518636 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518368 = _t3 + 4;
             *__edx();
            _t3 =  *134518368;
            __edx =  *_t3;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048410(_unknown_ __edi, _unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    if( *134518592 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
     *__esp = 134518592;
    0();
    return;
}

main(intOrPtr __ebx, intOrPtr __esi, intOrPtr _a4, intOrPtr _a8)
{// addr = 0x08048450
    intOrPtr _v8;
    intOrPtr _v12;
    char _v1036;
    struct _IO_FILE* _v1044;
    intOrPtr _v1048;
    _unknown_ __ebp;
    int _t13;
    _unknown_ _t14;
    char* _t17;
    _unknown_ _t18;
    _unknown_ _t20;
    struct _IO_FILE* _t21;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t27;

    _v12 = __ebx;
    __esp = __esp & 240;
    _v8 = __esi;
    if(_a4 <= 1) {
        _t13 = 1;
        return _t13;
    }
    _t21 = fopen( *(_a8 + 4), 134514260);
    _t13 = 1;
    if(_t21 == 0) {
        return _t13;
    }
    _v1044 = _t21;
    _t28 =  ?_? ( &_v1036);
    _v1048 = 1024;
     *__esp =  &_v1036;
    if(fgets() == 0) {
L6:
        _t13 = fclose(_t21);
        return _t13;
    } else {
        _t17 = strchr(_t16, 10);
        if(_t17 != 0) {
             *_t17 = 0;
        }
        puts(_t28);
        goto L6;
    }
    return _t13;
}

L080485F0()
{
    return;
}

L08048600(_unknown_ __edi, _unknown_ __esi)
{
    intOrPtr* __ebx;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    __esp = __esp - 4;
    __ebx = 134518576;
    __eax =  *134518576;
    if(__eax != 255) {
        while(1) {
L2:
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

L08048630(_unknown_ __ebx, _unknown_ __edx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _push(__ebx);
    L1();
    _pop(__ebx);
    _push(__edx);
    L080483D0(__esi);
    return;
}

L08048639(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    L080483D0(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L08048639(_unknown_ __edx)
{
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = __edx;
    _pop(__ebx);
    _push(__edx);
    @rec 0x080483D0@L080483D0@(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      49 Register nodes
//      34 Temporaries nodes
//       2 Casts
//     175 Statements
//       8 Labels
//       2 Gotos
//      16 Blocks
//     290 Nodes
//       0 Assembly nodes
//      47 Unknown Types


