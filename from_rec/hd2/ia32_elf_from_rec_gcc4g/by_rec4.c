L08048468()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 7040 + -4)) != 0) {
        __gmon_start__();
    }
    L08048610();
    L080489D0();
    _pop(__eax);
    return;
}

L08048474()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 7040 + -4)) != 0) {
        __gmon_start__();
    }
    L08048610();
    L080489D0();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

int sprintf(char* dst, char* format)
{// addr = 0x080484A8
    goto __imp__sprintf;
}

__xstat()
{// addr = 0x080484B8
    goto __imp____xstat;
}

__gmon_start__()
{// addr = 0x080484C8
    goto __imp____gmon_start__;
}

__libc_start_main()
{// addr = 0x080484D8
    goto __imp____libc_start_main;
}

void perror(char* msg)
{// addr = 0x080484E8
    goto __imp__perror;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x080484F8
    goto __imp__fclose;
}

void* memcpy(void* __dest, void* __src, int __n)
{// addr = 0x08048508
    goto __imp__memcpy;
}

int strlen(char* __s)
{// addr = 0x08048518
    goto __imp__strlen;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048528
    goto __imp__fopen;
}

__stack_chk_fail()
{// addr = 0x08048538
    goto __imp____stack_chk_fail;
}

char* strcat(char* __dest, char* __src)
{// addr = 0x08048548
    goto __imp__strcat;
}

int puts(char* str)
{// addr = 0x08048558
    goto __imp__puts;
}

int fread(_G_va_list dst, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048568
    goto __imp__fread;
}

L08048610()
{
    _unknown_ __ebp;

    __eax =  *134520604;
    if( *134520604 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134520604;
     *__eax();
    return;
}

dumpline(unsigned char* p, long unsigned int offset, int cnt)
{// addr = 0x08048634
    char[79] buff;
    int c;
    int len;
    intOrPtr _v16;
    char _v96;
    char* _v100;
    int _v104;
    unsigned char* _v112;
    long unsigned int _v132;
    _unknown_ _v136;
    _unknown_ __ebp;
    _unknown_ _t73;
    _unknown_ _t76;
    char* _t77;
    _unknown_ _t86;
    _unknown_ _t87;
    _unknown_ _t93;
    signed int _t99;
    _unknown_ _t110;
    _unknown_ _t112;
    _unknown_ _t114;
    _unknown_ _t122;
    char* _t124;
    _unknown_ _t126;
    _unknown_ _t132;

    _v112 = p;
    _v16 =  *gs:0x14];
    _v132 = offset;
    sprintf( &_v96, "%08lX:");
    if(cnt > 16) {
        cnt = 16;
    }
    _v100 = 0;
    while(1) {
        _t77 = _v100;
        if(_t77 >= cnt) {
            break;
        }
        _t120 = _v100;
        _v132 = _v100[_v112] & 255 & 4294967295 & ;
        sprintf( &((char*)( &_v96)[ &(( &(( &(_v100[_t120]))[_t120]))[9])]), " %02lX");
        _v100 =  &(_v100[1]);
    }
    while(1) {
        _v100 =  &(_v100[1]);
        if((_t77 & 4294967295) == 0) {
            break;
        }
        _t77 = strcat( &_v96, 134515246);
    }
    _v104 = strlen( &_v96);
    memcpy( &((char*)( &_v96)[_v104]), 134515250, 4);
    _v104 = _v104 + 3;
    _v100 = 0;
    while(_v100 < cnt) {
        _t124 =  &(_v100[_v104]);
        if((_v100[_v112] & 255 & 4294967295) <= 31 || (_v100[_v112] & 255 & 4294967295) > 126) {
            _t99 = 46;
        } else {
            _t99 = _v100[_v112] & 255;
        }
         *(__ebp + _t124 - 92) = _t99 & 4294967295;
        _v100 =  &(_v100[1]);
    }
}

int hexdump(char* fname)
{// addr = 0x080487C6
    unsigned char[15] buff;
    long unsigned int offset;
    FILE* fp;
    struct stat st;
    int cnt;
    intOrPtr _v16;
    unsigned char _v32;
    long unsigned int _v36;
    struct _IO_FILE* _v40;
    int _v44;
    intOrPtr _v88;
    char _v132;
    char* _v144;
    _unknown_ _v160;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ __ebp;
    _unknown_ _t35;
    int _t36;
    _unknown_ _t48;
    int _t49;
    _unknown_ _t51;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t57;

    _v144 = fname;
    _v16 =  *gs:0x14];
    _t36 = _v144;
    L08048990(_t36,  &_v132);
    __eflags = _t36;
    if(_t36 == 0) {
        _v40 = fopen(_v144, 134515256);
        __eflags = _v40;
        if(_v40 != 0) {
            _v36 = 0;
            while(1) {
L7:
                __eflags = _v88 - _v36;
                if(_v88 <= _v36) {
                    break;
                }
                goto L5;
            }
L10:
            fclose(_v40);
            _t49 = 0;
            goto L11;
        }
        goto L3;
L5:
        _v44 = fread( &_v32, 1, 16, _v40);
        __eflags = _v44;
        if(_v44 == 0) {
            goto L10;
        }
        dumpline( &_v32, _v36, _v44);
        _v36 = _v36 + _v44;
        goto L7;
    }
    perror(_v144);
    _t49 = 1;
L11:
    if(__eflags == 0) {
        return _t49;
    }
    __stack_chk_fail();
    return _t49;
L3:
    perror(_v144);
    _t49 = 1;
    goto L11;
}

int main(int argc, char** argv)
{// addr = 0x080488CA
    int i;
    int errs;
    signed int _v8;
    intOrPtr _v12;
    _unknown_ __ebp;

    __esp = __esp - 32;
    _v12 = 0;
    _v8 = 1;
    while(_v8 < argc) {
        _v12 = _v12 + hexdump(argv[_v8]);
        _v8 = _v8 + 1;
    }
}

L0804898A()
{
    return;
}

L08048990(intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t8;

    L0804898A();
     *__esp = 3;
    _v12 = _a8;
    _v16 = _a4;
    __xstat();
    return;
}

L080489D0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134520588;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134520588;
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

L080489D0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134520588;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134520588;
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
//      33 Register nodes
//      23 Temporaries nodes
//       4 Casts
//     217 Statements
//      12 Labels
//       6 Gotos
//      22 Blocks
//     463 Nodes
//       1 Assembly nodes
//      34 Unknown Types


