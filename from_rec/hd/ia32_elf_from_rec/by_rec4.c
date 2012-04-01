_init()
{// addr = 0x080484A0
    L08048980(__ebx);
    return;
}

char* strcpy(char* __dest, char* __src)
{// addr = 0x080484B8
    goto __imp__strcpy;
}

int printf(char* format)
{// addr = 0x080484C8
    goto __imp__printf;
}

void perror(char* msg)
{// addr = 0x080484D8
    goto __imp__perror;
}

_xstat()
{// addr = 0x080484E8
    goto __imp___xstat;
}

__libc_init()
{// addr = 0x080484F8
    goto __imp____libc_init;
}

char* strcat(char* __dest, char* __src)
{// addr = 0x08048508
    goto __imp__strcat;
}

int fread(_G_va_list dst, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048518
    goto __imp__fread;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048528
    goto __imp__fopen;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048538
    goto __imp__fclose;
}

int sprintf(char* dst, char* format)
{// addr = 0x08048548
    goto __imp__sprintf;
}

int atexit(_Unknown_base(*)()* __func)
{// addr = 0x08048558
    goto __imp__atexit;
}

void exit(int __status)
{// addr = 0x08048568
    goto __imp__exit;
}

__setfpucw()
{// addr = 0x08048578
    goto __imp____setfpucw;
}

int strlen(char* __s)
{// addr = 0x08048588
    goto __imp__strlen;
}

L08048620(_unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t3;
    _unknown_ _t4;

    _push(__ebx);
    _t3 = 134519288;
    if( *134519288 == 0) {
        return ;
    }
    while(1) {
L2:
         *((intOrPtr*)( *_t3))();
        _t3 = _t3 + 4;
        if( *_t3 == 0) {
            break;
        }
    }
    return;
}

L08048660(_unknown_ __ebx, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12)
{
    char _v84;
    intOrPtr _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ __ebp;
    _unknown_ _t55;
    _unknown_ _t61;
    _unknown_ _t64;
    _unknown_ _t68;
    _unknown_ _t71;
    _unknown_ _t77;
    _unknown_ _t79;
    _unknown_ _t81;
    _unknown_ _t86;
    _unknown_ _t95;

    _push(__ebx);
    _push(_a8);
    sprintf( &_v84, "%08lX:");
    __esp = __esp + 4;
    if(_a12 > 16) {
        _a12 = 16;
    }
    _v88 = 0;
    while(_a12 > _v88) {
        _push( *(_a4 + _v88) & 255);
        _push(" %02lX");
        _push( &(( &((char*)( &_v84)[_v88 + _v88 + _t84]))[9]));
        sprintf();
        __esp = __esp + 12;
        _v88 = _v88 + 1;
    }
}

L080487F0(_unknown_ __eax, char* _a4)
{
    char _v20;
    intOrPtr _v24;
    struct _IO_FILE* _v28;
    intOrPtr _v72;
    char _v92;
    int _v96;
    _unknown_ __ebp;
    _unknown_ _t22;
    _unknown_ _t36;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t42;
    _unknown_ _t43;

    if(L08048950(_a4, _a4,  &_v92) != 0) {
        _v28 = fopen(_a4, 134515172);
        if(_v28 != 0) {
            _v24 = 0;
L5:
            while(_v72 > _v24) {
                _v96 = fread( &_v20, 1, 16, _v28);
                if(_v96 != 0) {
                    L08048660(__ebx,  &_v20, _v24, _v96);
                    _v24 = _v24 + _v96;
                    continue;
                }
                fclose(_v28);
                return 0;
            }
        }
        goto L3;
    }
    perror(_a4);
    return 1;
L3:
    perror(_a4);
    return 1;
}

L080488E0(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{
    signed int _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t15;

    _v12 = 0;
    _v8 = 1;
    while(_a4 > _v8) {
        _v12 = _v12 + L080487F0( *((intOrPtr*)(_a8 + 0 + _v8 * 4)),  *((intOrPtr*)(_a8 + 0 + _v8 * 4)));
        _v8 = _v8 + 1;
    }
}

L08048950(_unknown_ __eax, intOrPtr _a4, intOrPtr _a8)
{
    char _v12;
    _unknown_ __ebp;
    _unknown_ _t5;

    _push(_a8);
    _push(_a4);
    _push(1);
    _xstat();
    __esp = __esp + 12;
    _t5 = __eax;
    __esp =  &_v12;
    return _t5;
}

L08048980(_unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t3;
    _unknown_ _t4;

    _push(__ebx);
    _t3 = 134519276;
    if( *134519276 == 255) {
        return ;
    }
    while(1) {
L2:
         *((intOrPtr*)( *_t3))();
        _t3 = _t3 + -4;
        if( *_t3 == 255) {
            break;
        }
    }
    return;
}

L08048980(_unknown_ __ebx)
{
    _unknown_ _v8;
    _unknown_ __ebp;
    intOrPtr* _t3;
    _unknown_ _t4;

    _push(__ebx);
    _t3 = 134519276;
    if( *134519276 == 255) {
        return ;
    }
    while(1) {
L2:
         *((intOrPtr*)( *_t3))();
        _t3 = _t3 + -4;
        if( *_t3 == 255) {
            break;
        }
    }
    return;
}

// Statistics:
//      13 Register nodes
//      13 Temporaries nodes
//       5 Casts
//     141 Statements
//       8 Labels
//       1 Gotos
//      21 Blocks
//     289 Nodes
//       0 Assembly nodes
//      37 Unknown Types


