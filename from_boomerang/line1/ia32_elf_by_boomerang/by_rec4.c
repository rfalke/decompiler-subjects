L080482FC()
{
    _unknown_ __ebp;

    L080483B4(__eax, __ebx);
    L08048420(__edi, __esi);
    L08048600(__edi, __esi);
    return;
}

char* strchr(char* __s, int __c)
{// addr = 0x08048324
    goto __imp__strchr;
}

char* fgets(char* dst, int sz, struct _IO_FILE* fp)
{// addr = 0x08048334
    goto __imp__fgets;
}

__libc_start_main()
{// addr = 0x08048344
    goto __imp____libc_start_main;
}

int printf(char* format)
{// addr = 0x08048354
    goto __imp__printf;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048364
    goto __imp__fclose;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048374
    goto __imp__fopen;
}

L080483B4(_unknown_ __eax, _unknown_ __ebx)
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
    _t4 =  *((intOrPtr*)(_t5 + 5003 + 36));
    if(_t4 == 0) {
        return ;
    }
     *_t4();
    return ;
}

L080483BD(_unknown_ __eax)
{
    intOrPtr* _t4;
    _unknown_ _t5;
    _unknown_ _t7;

    _pop(__ebx);
    _push(__eax);
    _t4 =  *((intOrPtr*)(_t5 + 5003 + 36));
    if(_t4 != 0) {
         *_t4();
    }
    _pop(__ebp);
    return;
}

L080483E0(_unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t2;
    intOrPtr* _t3;
    _unknown_ _t5;
    _unknown_ _t6;

    if( *134518640 != 0) {
        return ;
    }
    _t3 =  *134518372;
    __edx =  *_t3;
    if(__edx == 0) {
L4:
         *134518640 = 1;
        return;
    } else {
        while(1) {
L3:
             *134518372 = _t3 + 4;
             *__edx();
            _t3 =  *134518372;
            __edx =  *_t3;
            if(__edx == 0) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08048420(_unknown_ __edi, _unknown_ __esi)
{
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    if( *134518596 == 0) {
        return ;
    }
    if(0 == 0) {
        return ;
    }
     *__esp = 134518596;
    0();
    return;
}

L08048454(char* _a4, int _a8, struct _IO_FILE* _a12)
{
    char* _v8;
    char* _v12;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    _v8 = fgets(_a4, _a8, _a12);
    if(_v8 == 0) {
        return _v8;
    }
    _v12 = strchr(_v8, 10);
    if(_v12 == 0) {
        return _v8;
    }
     *_v12 = 0;
    return _v8;
}

main(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{// addr = 0x080484A3
    struct _IO_FILE* _v16;
    char _v1052;
    intOrPtr _v1056;
    _unknown_ _v1076;
    char* _v1080;
    _unknown_ __ebp;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t26;
    _unknown_ _t29;

    __esp = __esp & 240;
    __esp = __esp;
    if(_a4 > 1) {
        _v16 = fopen( *(_a8 + 4), 134514260);
        if(_v16 != 0) {
            if(L08048454( &_v1052, 1024, _v16) != 0) {
                _v1080 =  &_v1052;
                printf(134514262);
            }
            fclose(_v16);
            return _v1056;
        }
        goto L3;
    }
    _v1056 = 1;
    return _v1056;
L3:
    _v1056 = 1;
    return _v1056;
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
    __ebx = 134518580;
    __eax =  *134518580;
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
    L080483E0(__esi);
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
    L080483E0(__esi);
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
    @rec 0x080483E0@L080483E0@(__esi);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//      48 Register nodes
//      17 Temporaries nodes
//       2 Casts
//     186 Statements
//       8 Labels
//       2 Gotos
//      17 Blocks
//     295 Nodes
//       0 Assembly nodes
//      50 Unknown Types


