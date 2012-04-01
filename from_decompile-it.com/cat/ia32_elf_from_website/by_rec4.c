L08048A9C()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 38220 + -8)) != 0) {
        __gmon_start__();
    }
    L08048E50();
    L0804FCD0();
    _pop(__eax);
    return;
}

L08048AA8()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 38220 + -8)) != 0) {
        __gmon_start__();
    }
    L08048E50();
    L0804FCD0();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

int getpagesize()
{// addr = 0x08048ADC
    goto __imp__getpagesize;
}

void abort()
{// addr = 0x08048AEC
    goto __imp__abort;
}

int* __errno_location()
{// addr = 0x08048AFC
    goto __imp____errno_location;
}

__cxa_atexit()
{// addr = 0x08048B0C
    goto __imp____cxa_atexit;
}

memcmp()
{// addr = 0x08048B1C
    goto __imp__memcmp;
}

open64()
{// addr = 0x08048B2C
    goto __imp__open64;
}

int fputs_unlocked(char* str, struct _IO_FILE* fp)
{// addr = 0x08048B3C
    goto __imp__fputs_unlocked;
}

__ctype_get_mb_cur_max()
{// addr = 0x08048B4C
    goto __imp____ctype_get_mb_cur_max;
}

__gmon_start__()
{// addr = 0x08048B5C
    goto __imp____gmon_start__;
}

void* realloc(void* __ptr, int __size)
{// addr = 0x08048B6C
    goto __imp__realloc;
}

void* calloc(int __nmemb, int __size)
{// addr = 0x08048B7C
    goto __imp__calloc;
}

int write(int __fd, void* __buf, int __n)
{// addr = 0x08048B8C
    goto __imp__write;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x08048B9C
    goto __imp__memset;
}

__libc_start_main()
{// addr = 0x08048BAC
    goto __imp____libc_start_main;
}

char* stpcpy(char* __dest, char* __src)
{// addr = 0x08048BBC
    goto __imp__stpcpy;
}

int ferror_unlocked(struct _IO_FILE* fp)
{// addr = 0x08048BCC
    goto __imp__ferror_unlocked;
}

void _exit(int __status)
{// addr = 0x08048BDC
    goto __imp___exit;
}

__builtin_va_list bindtextdomain(char* __domainname, char* __dirname)
{// addr = 0x08048BEC
    goto __imp__bindtextdomain;
}

mbrtowc()
{// addr = 0x08048BFC
    goto __imp__mbrtowc;
}

int read(int __fd, void* __buf, int __nbytes)
{// addr = 0x08048C0C
    goto __imp__read;
}

__builtin_va_list gettext(char* __msgid)
{// addr = 0x08048C1C
    goto __imp__gettext;
}

void free(void* __ptr)
{// addr = 0x08048C2C
    goto __imp__free;
}

int getopt_long(int ___argc, __builtin_va_list* ___argv, char* __shortopts, struct option* __longopts, int* __longind)
{// addr = 0x08048C3C
    goto __imp__getopt_long;
}

ioctl()
{// addr = 0x08048C4C
    goto __imp__ioctl;
}

__ctype_b_loc()
{// addr = 0x08048C5C
    goto __imp____ctype_b_loc;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048C6C
    goto __imp__fclose;
}

mbsinit()
{// addr = 0x08048C7C
    goto __imp__mbsinit;
}

void* memcpy(void* __dest, void* __src, int __n)
{// addr = 0x08048C8C
    goto __imp__memcpy;
}

int strlen(char* __s)
{// addr = 0x08048C9C
    goto __imp__strlen;
}

__builtin_va_list setlocale(int __category, char* __locale)
{// addr = 0x08048CAC
    goto __imp__setlocale;
}

int printf(char* format)
{// addr = 0x08048CBC
    goto __imp__printf;
}

__signbitl()
{// addr = 0x08048CCC
    goto __imp____signbitl;
}

int close(int __fd)
{// addr = 0x08048CDC
    goto __imp__close;
}

int fwrite(void* src, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048CEC
    goto __imp__fwrite;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x08048CFC
    goto __imp__fprintf;
}

void* malloc(int __size)
{// addr = 0x08048D0C
    goto __imp__malloc;
}

__stack_chk_fail()
{// addr = 0x08048D1C
    goto __imp____stack_chk_fail;
}

__fpending()
{// addr = 0x08048D2C
    goto __imp____fpending;
}

void error(int __status, int __errnum, char* __format)
{// addr = 0x08048D3C
    goto __imp__error;
}

void* memmove(void* __dest, void* __src, int __n)
{// addr = 0x08048D4C
    goto __imp__memmove;
}

__builtin_va_list textdomain(char* __domainname)
{// addr = 0x08048D5C
    goto __imp__textdomain;
}

__fxstat64()
{// addr = 0x08048D6C
    goto __imp____fxstat64;
}

iswprint()
{// addr = 0x08048D8C
    goto __imp__iswprint;
}

int strcmp(char* __s1, char* __s2)
{// addr = 0x08048D9C
    goto __imp__strcmp;
}

void exit(int __status)
{// addr = 0x08048DAC
    goto __imp__exit;
}

L08048E50()
{
    _unknown_ __ebp;

    __eax =  *134553368;
    if( *134553368 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134553368;
     *__eax();
    return;
}

usage(int status)
{// addr = 0x08048E74
    char* _v20;
    char* _v24;
    char* _v36;
    _unknown_ __ebp;
    _unknown_ _t14;
    char* _t15;
    _unknown_ _t16;
    _unknown_ _t18;
    _unknown_ _t20;
    _unknown_ _t22;
    _unknown_ _t24;
    _unknown_ _t26;
    char* _t27;
    _unknown_ _t28;
    _unknown_ _t30;
    char* _t31;
    _unknown_ _t32;
    char* _t33;
    _unknown_ _t34;
    _unknown_ _t46;
    _unknown_ _t47;

    _push(__esi);
    _push(__ebx);
    __esp = __esp - 16;
    if(status == 0) {
        _t15 = gettext("Usage: %s [OPTION] [FILE]...\n");
        _v24 = program_name;
        printf(_t15);
        fputs_unlocked(gettext("Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n"), __imp__stdout);
        fputs_unlocked(gettext("  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n"), __imp__stdout);
        fputs_unlocked(gettext("      --help     display this help and exit\n"), __imp__stdout);
        fputs_unlocked(gettext("      --version  output version information and exit\n"), __imp__stdout);
        fputs_unlocked(gettext("\nWith no FILE, or when FILE is -, read standard input.\n"), __imp__stdout);
        _t27 = gettext("\nExamples:\n  %s f - g  Output f's contents, then standard input, then g's contents.\n  %s        Copy standard input to standard output.\n");
        _v20 = program_name;
        _v24 = program_name;
        printf(_t27);
        L4();
    } else {
        _t33 = gettext("Try `%s --help' for more information.\n");
        _v20 = program_name;
        fprintf(__imp__stderr, _t33);
    }
    exit(status);
    _push(_t46);
    __esp = __esp - 8;
    _t31 = gettext("\nReport bugs to <%s>.\n");
    _v36 = "bug-coreutilsgnu.org";
    printf(_t31);
    return;
}

emit_bug_reporting_address()
{// addr = 0x08048F9B
    char* _v8;
    _unknown_ __ebp;
    _unknown_ _t2;
    char* _t3;
    _unknown_ _t4;

    _t3 = gettext("\nReport bugs to <%s>.\n");
    _v8 = "bug-coreutilsgnu.org";
    printf(_t3);
    return;
}

next_line_num()
{// addr = 0x08048FBF
    char* endp;
    char* _v8;
    _unknown_ __ebp;

    __ecx = __ecx;
    _v8 = line_num_end;
    while(1) {
         *_v8 = ( *_v8 & 255) + 1 & 4294967295;
        if((__ecx & 4294967295) != 0) {
            break;
        }
         *_v8 = 48;
        _v8 = _v8 - 1;
        if(_v8 >= line_num_start) {
            continue;
        } else {
            if(line_num_start <= "                 0\t") {
                "                 0\t" = 62;
            } else {
                line_num_start = line_num_start - 1;
                 *line_num_start = 49;
            }
            if(line_num_start >= line_num_print) {
                return ;
            }
            line_num_print = line_num_print - 1;
            return;
        }
        break;
    }
    return;
}

_Bool simple_cat(char* buf, size_t bufsize)
{// addr = 0x08049040
    size_t n_read;
    size_t n;
    unsigned int _v12;
    unsigned int _v16;
    int _v25;
    const char* _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    char* _t30;
    int* _t34;

    while(1) {
        _v12 = safe_read(input_desc, buf, bufsize);
        if(_v12 == 255) {
            break;
        }
        if(_v12 != 0) {
            _v16 = _v12;
            if(full_write(1, buf, _v16) != _v16) {
                _t30 = gettext("write error");
                error(1,  *(__errno_location()), _t30);
            }
            continue;
        }
        _v25 = 1;
        return _v25 & 255;
    }
    _t34 = __errno_location();
    _v32 = infile;
    error(0,  *_t34, "%s");
    _v25 = 0;
    return _v25 & 255;
}

_Bool cat(char* inbuf, size_t insize, char* outbuf, size_t outsize, _Bool show_nonprinting, _Bool show_tabs, _Bool number, _Bool number_nonblank, _Bool show_ends, _Bool squeeze_blank)
{// addr = 0x08049108
    unsigned char ch;
    char* bpin;
    char* eob;
    char* bpout;
    size_t n_read;
    int newlines;
    _Bool use_fionread;
    char* wp;
    size_t remaining_bytes;
    _Bool input_pending;
    int n_to_read;
    signed int _v17;
    int _v18;
    int _v19;
    char* _v24;
    char* _v28;
    char* _v32;
    unsigned int _v36;
    int _v40;
    * _v44;
    int _v48;
    char _v52;
    signed int _v68;
    signed int _v72;
    signed int _v76;
    signed char _v80;
    signed int _v84;
    signed int _v88;
    int _v89;
    const char* _v96;
    char* _v100;
    intOrPtr _v104;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t220;
    signed int* _t224;
    char* _t230;
    char* _t235;
    char* _t245;
    char* _t247;
    char* _t249;
    char* _t251;
    char* _t256;
    char* _t258;
    char* _t263;
    char* _t265;
    signed int* _t267;
    char* _t271;
    int* _t293;
    int _t300;
    const _None* _t312;
    char* _t313;
    int* _t314;
    _unknown_ _t329;
    char* _t332;
    signed int* _t347;
    signed int* _t348;
    signed int* _t349;
    signed int* _t350;

    _v68 = show_nonprinting & 4294967295;
    _v72 = show_tabs & 4294967295;
    _v76 = number & 4294967295;
    _v80 = number_nonblank & 4294967295;
    _v84 = show_ends & 4294967295;
    _v88 = squeeze_blank & 4294967295;
    _v40 = newlines2;
    _v18 = 1;
    _v28 = inbuf;
    _v24 =  &(_v28[1]);
    _v32 = outbuf;
L1:
    while(1) {
L1:
        while(1) {
            do {
L1:
                if( &(outbuf[outsize]) > _v32) {
L7:
                    if(_v24 <= _v28) {
                        _v40 = _v40 + 1;
                        if(_v40 <= 0) {
L32:
                            if(_v84 != 0) {
                                _t271 = _v32;
                                 *_t271 = 36;
                                _v32 =  &(_t271[1]);
                            }
                            _t220 = _v32;
                             *_t220 = 10;
                            _v32 =  &(_t220[1]);
L35:
                            _v17 =  *_v24 & 255 & 4294967295;
                            _v24 =  &(_v24[1]);
                            goto L36;
                        }
                        goto L27;
                    }
                    goto L8;
L27:
                    if(_v40 <= 1) {
L30:
                        if(((_v80 & 255 ^ 1) & 4294967295 &  & _v76 & 255) != 0) {
                            next_line_num();
                            _v32 = stpcpy(_v32, line_num_print);
                        }
                        goto L32;
                    }
                    _v40 = 2;
                    if(_v88 == 0) {
                        goto L30;
                    }
                    _v17 =  *_v24 & 255 & 4294967295;
                    _v24 =  &(_v24[1]);
                    goto L36;
                } else {
                    _v44 = outbuf;
                    goto L3;
                    do {
                        _v44 = _v44 + outsize;
                        _v48 = _v32 - _v44;
                        if(outsize <= _v48) {
L3:
                            if(full_write(1, _v44, outsize) != outsize) {
                                _t332 = gettext("write error");
                                error(1,  *(__errno_location()), _t332);
                            }
                            continue;
                        } else {
                            memmove(outbuf, _v44, _v48);
                            _v32 =  &(outbuf[_v48]);
                        }
                        goto L7;
                    } while();
                    goto L7;
                }
L8:
                _v19 = 0;
                _v52 = 0;
                if(_v18 == 0) {
L17:
                    if(_v52 != 0) {
                        _v19 = 1;
                    }
                    if(_v19 != 0) {
                        write_pending(outbuf,  &_v32);
                    }
                    _v36 = safe_read(input_desc, inbuf, insize);
                    if(_v36 == 255) {
                        _t293 = __errno_location();
                        _v96 = infile;
                        error(0,  *_t293, "%s");
                        write_pending(outbuf,  &_v32);
                        newlines2 = _v40;
                        _v89 = 0;
                        return _v89 & 255;
                    }
                    if(_v36 == 0) {
                        write_pending(outbuf,  &_v32);
                        newlines2 = _v40;
                        _v89 = 1;
                        return _v89 & 255;
                    }
                    _v24 = inbuf;
                    _v28 =  &(_v24[_v36]);
                     *_v28 = 10;
                    goto L35;
                }
                _t300 = input_desc;
                _v100 =  &_v52;
                _v104 = 21531;
                 *__esp = _t300;
                ioctl();
                if(_t300 >= 0) {
                    goto L17;
                }
                if( *(__errno_location()) == 95) {
L15:
                    _v18 = 0;
                    goto L17;
                }
                if( *(__errno_location()) == 25 ||  *(__errno_location()) == 22) {
                    goto L15;
                } else {
                    if( *(__errno_location()) == 19 ||  *(__errno_location()) == 38) {
                        goto L15;
                    } else {
L16:
                        _t312 = quote(infile);
                        _t313 = gettext("cannot do ioctl on %s");
                        _t314 = __errno_location();
                        _v96 = _t312;
                        error(0,  *_t314, _t313);
                        newlines2 = _v40;
                        _v89 = 0;
                        return _v89 & 255;
                    }
                }
                goto L16;
L36:
            } while(_v17 == 10);
            if(_v40 < 0 && _v76 != 0) {
                next_line_num();
                _v32 = stpcpy(_v32, line_num_print);
            }
            if(_v68 == 0) {
L58:
                while(1) {
                    if(_v17 != 9 || ((_v72 & 255 ^ 1) & 4294967295) != 0) {
                        if(_v17 == 10) {
                            _v40 = -1;
                            goto L1;
                        }
                    } else {
                        _t230 = _v32;
                         *_t230 = 94;
                        _v32 =  &(_t230[1]);
                        _t347 = _v32;
                         *_t347 = (_v17 & 255) + 64 & 4294967295;
                        _v32 =  &(_t347[0]);
L64:
                        _v17 =  *_v24 & 255 & 4294967295;
                        _v24 =  &(_v24[1]);
                        continue;
                    }
L62:
                    _t224 = _v32;
                     *_t224 = _v17 & 255 & 4294967295;
                    _v32 =  &(_t224[0]);
                    goto L64;
                }
            } else {
L41:
                while(1) {
                    if(_v17 <= 31) {
                        if(_v17 != 9 || ((_v72 & 255 ^ 1 ^ 1) & 4294967295) != 0) {
                            if(_v17 != 10) {
                                _t235 = _v32;
                                 *_t235 = 94;
                                _v32 =  &(_t235[1]);
                                _t348 = _v32;
                                 *_t348 = (_v17 & 255) + 64 & 4294967295;
                                _v32 =  &(_t348[0]);
                                goto L57;
                            }
                        } else {
                            _t245 = _v32;
                             *_t245 = 9;
                            _v32 =  &(_t245[1]);
                            goto L57;
                        }
L55:
                        _v40 = -1;
                        goto L1;
                    }
                    if(_v17 > 126) {
                        if(_v17 != 127) {
                            _t247 = _v32;
                             *_t247 = 77;
                            _v32 =  &(_t247[1]);
                            _t249 = _v32;
                             *_t249 = 45;
                            _v32 =  &(_t249[1]);
                            if(_v17 <= 159) {
                                _t251 = _v32;
                                 *_t251 = 94;
                                _v32 =  &(_t251[1]);
                                _t349 = _v32;
                                 *_t349 = (_v17 & 255) - 64 & 4294967295;
                                _v32 =  &(_t349[0]);
                            } else {
                                if(_v17 == 255) {
                                    _t256 = _v32;
                                     *_t256 = 94;
                                    _v32 =  &(_t256[1]);
                                    _t258 = _v32;
                                     *_t258 = 63;
                                    _v32 =  &(_t258[1]);
                                } else {
                                    _t350 = _v32;
                                     *_t350 = (_v17 & 255) + -128 & 4294967295;
                                    _v32 =  &(_t350[0]);
                                }
                            }
                        } else {
                            _t263 = _v32;
                             *_t263 = 94;
                            _v32 =  &(_t263[1]);
                            _t265 = _v32;
                             *_t265 = 63;
                            _v32 =  &(_t265[1]);
                        }
                    } else {
                        _t267 = _v32;
                         *_t267 = _v17 & 255 & 4294967295;
                        _v32 =  &(_t267[0]);
                    }
L57:
                    _v17 =  *_v24 & 255 & 4294967295;
                    _v24 =  &(_v24[1]);
                }
            }
        }
    }
}

write_pending(char* outbuf, char** bpout)
{// addr = 0x080495FB
    size_t n_write;
    unsigned int _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    char* __ebx;
    _unknown_ __ebp;

    _v12 =  *bpout - outbuf;
    if(_v12 == 0) {
        return ;
    }
    if(full_write(1, outbuf, _v12) != _v12) {
        __ebx = gettext("write error");
        error(1,  *(__errno_location()), __ebx);
    }
     *bpout = outbuf;
    return;
}

int main(int argc, char** argv)
{// addr = 0x08049671
    size_t outsize;
    size_t insize;
    size_t page_size;
    char* inbuf;
    char* outbuf;
    _Bool ok;
    int c;
    int argind;
    dev_t out_dev;
    ino_t out_ino;
    _Bool check_redirection;
    _Bool have_read_stdin;
    struct stat stat_buf;
    _Bool number;
    _Bool number_nonblank;
    _Bool squeeze_blank;
    _Bool show_ends;
    _Bool show_nonprinting;
    _Bool show_tabs;
    int file_open_mode;
    signed int _v25;
    int _v26;
    int _v27;
    signed int _v28;
    int _v29;
    signed int _v30;
    signed int _v31;
    signed int _v32;
    signed int _v33;
    unsigned int _v40;
    unsigned int _v44;
    int _v48;
    char* _v52;
    char* _v56;
    int _v60;
    signed int _v64;
    int _v68;
    signed int _v76;
    signed int _v80;
    signed int _v84;
    signed int _v88;
    signed int _v92;
    signed int _v96;
    unsigned int _v132;
    signed int _v168;
    signed int _v180;
    signed int _v184;
    int _v188;
    char* _v192;
    _Bool _v196;
    _Bool _v200;
    _Bool _v204;
    _Bool _v208;
    unsigned int _v212;
    unsigned int _v216;
    int* _v220;
    int _v224;
    unsigned int _v228;
    unsigned int _v232;
    _unknown_ _v236;
    _unknown_ _v240;
    _unknown_ _v244;
    int _v248;
    char* _v252;
    char* _v256;
    const char* _v260;
    signed int _v264;
    int _v268;
    int _v280;
    signed int _v284;
    signed int _v300;
    _unknown_ __ebp;
    _unknown_ _t235;
    _unknown_ _t239;
    _unknown_ _t240;
    _unknown_ _t241;
    _unknown_ _t247;
    char* _t248;
    int _t260;
    int _t262;
    char* _t282;
    char* _t284;
    _unknown_ _t296;
    _unknown_ _t298;
    _unknown_ _t303;
    _unknown_ _t310;
    char* _t315;
    int* _t320;
    char* _t328;
    char* _t341;
    int* _t344;
    int* _t346;
    char* _t356;
    int* _t368;
    _unknown_ _t390;
    _unknown_ _t402;
    _unknown_ _t404;
    _unknown_ _t406;
    signed int _t407;
    signed int _t408;
    _unknown_ _t414;

    _t368 =  &argc;
    __esp = __esp & 240;
    _push( *((intOrPtr*)(_t368 - 4)));
    _push(_t406);
    _t407 = __esp;
    _push(_t402);
    _push(_t404);
    _push(__ebx);
    _push(_t368);
    __esp = __esp - 248;
    _v220 = _t368;
    _v48 = getpagesize();
    _v25 = 1;
    _v26 = 1;
    _v27 = 0;
    _v28 = 0;
    _v29 = 0;
    _v30 = 0;
    _v31 = 0;
    _v32 = 0;
    _v33 = 0;
    _v68 = 0;
    program_name =  *(_v220[1]);
    setlocale(6, 134546016);
    bindtextdomain("coreutils", "/usr/local/share/locale");
    textdomain("coreutils");
    L0804FC50(close_stdout);
    while(1) {
        _v60 = getopt_long( *_v220, _v220[1], "benstuvAET",  &long_options, 0);
        if(_v60 == 255) {
            break;
        }
        _v224 = _v60;
        if(_v224 == 98) {
            _v28 = 1;
            _v29 = 1;
            continue;
        }
        if(_v224 > 98) {
            if(_v224 == 115) {
                _v30 = 1;
                continue;
            }
            goto L12;
L24:
            _v33 = 1;
            _v32 = 1;
            continue;
        }
        if(_v224 == 65) {
L26:
            _v32 = 1;
            _v31 = 1;
            _v33 = 1;
            continue;
        }
        if(_v224 > 65) {
            if(_v224 == 69) {
                goto L27;
            }
            goto L9;
L28:
            _v33 = 1;
            continue;
        }
        if(_v224 == -131) {
L30:
            _v248 = 0;
            _v252 = "Richard M. Stallman";
            _v256 = "Torbjorn Granlund";
            version_etc(__imp__stdout, "cat", "GNU coreutils", "6.10");
            exit(0);
            goto L31;
        }
        if(_v224 == -130) {
L29:
            usage(0);
            continue;
        } else {
            goto L31;
        }
        goto L30;
L31:
        usage(1);
        continue;
L9:
        if(_v224 == 84) {
            goto L28;
        } else {
            goto L31;
        }
        goto L29;
L27:
        _v31 = 1;
        continue;
L12:
        if(_v224 > 115) {
            if(_v224 == 117) {
                continue;
            }
            goto L17;
        }
        if(_v224 == 101) {
            _v31 = 1;
            _v32 = 1;
            continue;
        }
        if(_v224 == 110) {
            _v28 = 1;
            continue;
        } else {
            goto L31;
        }
        break;
L17:
        if(_v224 < 117) {
            goto L24;
        }
        if(_v224 == 118) {
            goto L25;
        } else {
            goto L31;
        }
        goto L26;
L25:
        _v32 = 1;
    }
    _t248 =  &_v184;
    L0804FC90(1, _t248);
    if(_t248 < 0) {
        _t356 = gettext("standard output");
        error(1,  *(__errno_location()), _t356);
    }
    if(_v132 <= 0 || _v132 > 536870912) {
        _v216 = 512;
    } else {
        _v216 = _v132;
    }
    _v40 = _v216;
    if((_v168 & 61440) != 32768) {
        _v26 = 0;
    } else {
        _v80 = _v184;
        _v76 = _v180;
        _v88 = _v96;
        _v84 = _v92;
    }
    infile = "-";
    _v64 = __imp__optind;
    goto L43;
    do {
L43:
        if(_v64 <  *_v220) {
            infile = _v220[1][_v64];
        }
        if(strcmp(infile, "-") != 0) {
            _t260 = _v68;
            _v268 = _t260;
             *__esp = infile;
            open64();
            input_desc = _t260;
            if(input_desc >= 0) {
                goto L49;
            }
        } else {
            _v27 = 1;
            input_desc = 0;
L49:
            _t262 = input_desc;
            L0804FC90(_t262,  &_v184);
            if(_t262 >= 0) {
                if(_v132 <= 0 || _v132 > 536870912) {
                    _v212 = 512;
                } else {
                    _v212 = _v132;
                }
                _v44 = _v212;
                if(_v26 == 0 || (_v184 ^ _v80 | _v180 ^ _v76) != 0 || (_v96 ^ _v88 | _v92 ^ _v84) != 0 || input_desc == 0) {
                    if((_v30 & 255 | _v28 & 255 | _v31 & 255 | _v32 & 255 | _v33 & 255) != 0) {
                        _v52 = xmalloc(_v44 + _v48);
                        _v56 = xmalloc((_v44 << 2) + _v40 + _v48 + 18);
                        _v208 = _v29 & 255;
                        _v204 = _v28 & 255;
                        _v200 = _v33 & 255;
                        _v196 = _v32 & 255;
                        _v268 = _v48;
                        _t282 = _v56;
                         *__esp = _t282;
                        L77();
                        _v192 = _t282;
                        _v268 = _v48;
                        _t284 = _v52;
                         *__esp = _t284;
                        L77();
                        _v25 = cat(_t284, _v44, _v192, _v40, _v196, _v200, _v204, _v208, _v31 & 255, _v30 & 255) & 4294967295 &  & _v25 & 255 & 4294967295;
                        free(_v56);
                    } else {
                        _v232 = _v44;
                        _v228 = _v40;
                        if(_v228 < _v232) {
                            _v228 = _v232;
                        }
                        _v44 = _v228;
                        _v52 = xmalloc(_v44 + _v48 - 1);
                        _v268 = _v48;
                        _t328 = _v52;
                         *__esp = _t328;
                        L77();
                        _v25 = simple_cat(_t328, _v44) & 4294967295 &  & _v25 & 255 & 4294967295;
                    }
                    free(_v52);
                } else {
                    _t341 = gettext("%s: input file is output file");
                    _v260 = infile;
                    error(0, 0, _t341);
                    _v25 = 0;
                }
            } else {
                _t344 = __errno_location();
                _v260 = infile;
                error(0,  *_t344, "%s");
                _v25 = 0;
            }
            if(strcmp(infile, "-") != 0 && close(input_desc) < 0) {
                _t320 = __errno_location();
                _v260 = infile;
                error(0,  *_t320, "%s");
                _v25 = 0;
            }
            goto L69;
        }
L48:
        _t346 = __errno_location();
        _v260 = infile;
        error(0,  *_t346, "%s");
        _v25 = 0;
L69:
        _v64 = _v64 + 1;
    } while(_v64 <  *_v220);
    if(_v27 != 0 && close(0) < 0) {
        _t315 = gettext("closing standard input");
        error(1,  *(__errno_location()), _t315);
    }
    if(_v25 == 0) {
        _v188 = 1;
    } else {
        _v188 = 0;
    }
    exit(_v188);
    _push(_t407);
    _t408 = __esp;
    __esp = __esp - 24;
    _v280 = _v268;
    _v284 = _v264 - 1 + _v280;
    _v300 = _v284;
    __esp = _t408;
    _pop(__ebp);
    return  ~(_v300 % _v264) + _v284;
}

_Unknown_base* ptr_align(* ptr, size_t alignment)
{// addr = 0x08049DB4
    const char* p0;
    const char* p1;
    * _v8;
    signed int _v12;
    signed int _v28;
    _unknown_ __ebp;
    _unknown_ _t22;
    _unknown_ _t26;

    _v8 = ptr;
    _v12 = alignment - 1 + _v8;
    _v28 = _v12;
    return  ~(_v28 % alignment) + _v12;
}

size_t full_write(int fd, * buf, size_t count)
{// addr = 0x08049DE8
    size_t total;
    const _None* ptr;
    size_t n_rw;
    intOrPtr _v8;
    * _v12;
    unsigned int _v16;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = 0;
    _v12 = buf;
    while(count != 0) {
        _v16 = safe_write(fd, _v12, count);
        if(_v16 == 255) {
            return _v8;
        }
        if(_v16 != 0) {
            _v8 = _v8 + _v16;
            _v12 = _v12 + _v16;
            count = count - _v16;
            continue;
        }
         *(__errno_location()) = 28;
        return _v8;
    }
}

version_etc_va(FILE* stream, const char* command_name, const char* package, const char* version, va_list authors)
{// addr = 0x08049E50
    size_t n_authors;
    va_list tmp_authors;
    intOrPtr _v12;
    char* _v16;
    const char* _v28;
    const char* _v32;
    const char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t44;
    char* _t45;
    _unknown_ _t47;
    _unknown_ _t50;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t61;
    char* _t62;

    _v16 = authors;
    _v12 = 0;
    while(1) {
        _t62 = _v16;
        _v16 =  &(_t62[4]);
        if( *_t62 == 0) {
            break;
        }
        _v12 = _v12 + 1;
    }
    if(command_name == 0) {
        _v32 = version;
        _v36 = package;
        fprintf(stream, "%s %s\n");
    } else {
        _v28 = version;
        _v32 = package;
        _v36 = command_name;
        fprintf(stream, "%s (%s) %s\n");
    }
    _t45 = gettext("(C)");
    _v32 = 2008;
    _v36 = _t45;
    fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.");
    fputs_unlocked(gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"), stream);
    if(_v12 <= 9) {
        goto __eax;
    }
    rpl_vfprintf(stream, gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n"), authors);
    return;
}

version_etc(FILE* stream, const char* command_name, const char* package, const char* version)
{// addr = 0x0804A0AF
    va_list authors;
    char* _v8;
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 =  &_a20;
    version_etc_va(stream, command_name, package, version, _v8);
    return;
}

close_stdout_set_file_name(const char* file)
{// addr = 0x0804A0E4
    _unknown_ __ebp;

    file_name = file;
    return;
}

close_stdout()
{// addr = 0x0804A0F1
    const char* write_error;
    char* _v12;
    char* _v28;
    char* _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    char* __ebx;
    _unknown_ __ebp;
    _unknown_ _t16;
    int* _t19;
    _unknown_ _t22;
    int* _t25;

    if(close_stream(__imp__stdout) != 0) {
        _v12 = gettext("write error");
        if(file_name == 0) {
            _t19 = __errno_location();
            _v32 = _v12;
            error(0,  *_t19, "%s");
        } else {
            __ebx = quotearg_colon(file_name);
            _t25 = __errno_location();
            _v28 = _v12;
            _v32 = __ebx;
            error(0,  *_t25, "%s: %s");
        }
        _exit(exit_failure);
    }
    if(close_stream(__imp__stderr) == 0) {
        return ;
    }
    _exit(exit_failure);
    return;
}

const _None* quote_n(int n, const _None* name)
{// addr = 0x0804A1B8
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return quotearg_n_style(n, 5, name);
}

const _None* quote(const _None* name)
{// addr = 0x0804A1DA
    _unknown_ _v8;
    _unknown_ __ebp;

    return quote_n(0, name);
}

struct quoting_options* clone_quoting_options(struct quoting_options* o)
{// addr = 0x0804A1F8
    int e;
    struct quoting_options* p;
    int _v8;
    _Unknown_base* _v12;
    struct quoting_options* _v24;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t11;

    _v8 =  *(__errno_location());
    if(o == 0) {
        _v24 =  &default_quoting_options;
    } else {
        _v24 = o;
    }
    _v12 = xmemdup(_v24, 36);
     *(__errno_location()) = _v8;
    return _v12;
}

union quoting_style get_quoting_style(struct quoting_options* o)
{// addr = 0x0804A244
    struct quoting_options* _v8;
    _unknown_ __ebp;

    if(o == 0) {
        _v8 =  &default_quoting_options;
        return  *_v8;
    }
    _v8 = o;
    return  *_v8;
}

set_quoting_style(struct quoting_options* o, union quoting_style s)
{// addr = 0x0804A266
    struct quoting_options* _v8;
    _unknown_ __ebp;

    if(o == 0) {
        _v8 =  &default_quoting_options;
    } else {
        _v8 = o;
    }
     *_v8 = s;
    return;
}

int set_char_quoting(struct quoting_options* o, char c, int i)
{// addr = 0x0804A28B
    unsigned char uc;
    unsigned int* p;
    int shift;
    int r;
    signed int _v5;
    unsigned int** _v12;
    signed int _v16;
    signed int _v20;
    signed char _v24;
    struct quoting_options* _v28;
    _unknown_ __ebp;

    _v24 = c & 4294967295;
    _v5 = _v24 & 255 & 4294967295;
    if(o == 0) {
        _v28 =  &default_quoting_options;
    } else {
        _v28 = o;
    }
    _v12 =  &(( &(_v28->quote_these_too))[_v5 & 255 & 4294967295 & ]);
    _v16 = _v5 & 255 & 31;
    _v20 =  *_v12 >> (_v16 & 4294967295) & 1;
     *_v12 =  *_v12 ^ (i & 1 ^ _v20) << (_v16 & 4294967295);
    return _v20;
}

const char* gettext_quote(const char* msgid, union quoting_style s)
{// addr = 0x0804A305
    const char* translation;
    char* _v8;
    _unknown_ __ebp;

    _v8 = gettext(msgid);
    if(_v8 != msgid) {
        return _v8;
    }
    if(s != 6) {
        return _v8;
    }
    _v8 = 134547068;
    return _v8;
}

size_t quotearg_buffer_restyled(char* buffer, size_t buffersize, const char* arg, size_t argsize, union quoting_style quoting_style, const struct quoting_options* o)
{// addr = 0x0804A333
    size_t i;
    size_t len;
    const char* quote_string;
    size_t quote_string_len;
    _Bool backslash_escapes;
    _Bool unibyte_locale;
    const char* left;
    const char* right;
    unsigned char c;
    unsigned char esc;
    size_t m;
    _Bool printable;
    mbstate_t mbstate;
    wchar_t w;
    size_t bytes;
    size_t j;
    size_t ilim;
    char _v5;
    signed int _v6;
    _unknown_ _v7;
    _unknown_ _v9;
    intOrPtr _v16;
    char _v20;
    char _v24;
    char _v28;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v64;
    _unknown_ _v72;
    _unknown_ _v73;
    _unknown_ _v80;
    _unknown_ _v96;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ __ebp;
    _unknown_ _t248;
    _unknown_ _t250;
    _unknown_ _t256;
    _unknown_ _t269;
    _unknown_ _t321;
    _unknown_ _t329;
    _unknown_ _t331;
    _unknown_ _t340;
    _unknown_ _t356;
    _unknown_ _t357;
    _unknown_ _t392;

    _v20 = 0;
    _v24 = 0;
    _v28 = 0;
    _v5 = 0;
    __ctype_get_mb_cur_max();
    _v6 = __eax & 4294967295;
    if(quoting_style <= 6) {
        goto __eax;
    }
    _v16 = 0;
    while() {
    }
}

size_t quotearg_buffer(char* buffer, size_t buffersize, const char* arg, size_t argsize, const struct quoting_options* o)
{// addr = 0x0804AA7F
    const struct quoting_options* p;
    int e;
    size_t r;
    const struct quoting_options* _v8;
    int _v12;
    unsigned int _v16;
    const struct quoting_options* _v24;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebp;

    if(o == 0) {
        _v24 =  &default_quoting_options;
    } else {
        _v24 = o;
    }
    _v8 = _v24;
    _v12 =  *(__errno_location());
    _v16 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize,  *_v8, _v8);
     *(__errno_location()) = _v12;
    return _v16;
}

char* quotearg_alloc(const char* arg, size_t argsize, const struct quoting_options* o)
{// addr = 0x0804AAEE
    int e;
    size_t bufsize;
    char* buf;
    int _v8;
    unsigned int _v12;
    char* _v16;
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t38;

    _v8 =  *(__errno_location());
    _v12 = quotearg_buffer(0, 0, arg, argsize, o) + 1;
    _v16 = xcharalloc(_v12);
    quotearg_buffer(_v16, _v12, arg, argsize, o);
     *(__errno_location()) = _v8;
    return _v16;
}

quotearg_free()
{// addr = 0x0804AB73
    struct slotvec* sv;
    unsigned int i;
    struct slotvec* _v8;
    signed int _v12;
    _unknown_ __ebp;
    _unknown_ _t21;
    _unknown_ _t22;

    _v8 = slotvec;
    _v12 = 1;
    while(_v12 < nslots) {
        free( &(_v8[_v12])->val);
        _v12 = _v12 + 1;
    }
}

char* quotearg_n_options(int n, const char* arg, size_t argsize, const struct quoting_options* options)
{// addr = 0x0804AC05
    int e;
    unsigned int n0;
    struct slotvec* sv;
    size_t n1;
    _Bool preallocated;
    size_t size;
    char* val;
    size_t qsize;
    signed int _v9;
    int _v16;
    int _v20;
    struct slotvec* _v24;
    signed int _v28;
    unsigned int _v32;
    char* _v36;
    unsigned int _v40;
    int _v44;
    signed int _v48;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t78;
    _unknown_ _t117;
    _unknown_ _t119;
    signed int _t121;
    _unknown_ _t134;
    _unknown_ _t137;

    _v16 =  *(__errno_location());
    _v20 = n;
    _v24 = slotvec;
    if(n < 0) {
        abort();
    }
    if(nslots <= _v20) {
        _t121 = _v20 + 1;
        _v28 = _t121;
        _v9 = _t121 & 4294967295;
        if(_v28 > 536870911) {
            xalloc_die();
        }
        _v48 = _v28 << 3;
        if(_v9 == 0) {
            _v44 = _v24;
        } else {
            _v44 = 0;
        }
        _v24 = xrealloc(_v44, _v48);
        slotvec = _v24;
        if(_v9 != 0) {
            __ecx = _v24;
             *__ecx = slotvec0.size;
            __ecx->val = slotvec0.val;
        }
        memset( &(_v24[nslots]), 0, 0 + (_v28 - nslots) * 8);
        nslots = _v28;
    }
    _v32 = _v24[n].size;
    _v36 =  &(_v24[n])->val;
    _v40 = quotearg_buffer(_v36, _v32, arg, argsize, options);
    if(_v32 <= _v40) {
        _v32 = _v40 + 1;
        _v24[n] = _v32;
        if(_v36 !=  &slot0) {
            free(_v36);
        }
        _v36 = xcharalloc(_v32);
         &(_v24[n])->val = _v36;
        quotearg_buffer(_v36, _v32, arg, argsize, options);
    }
     *(__errno_location()) = _v16;
    return _v36;
}

char* quotearg_n(int n, const char* arg)
{// addr = 0x0804ADC5
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return quotearg_n_options(n, arg, -1,  &default_quoting_options);
}

char* quotearg(const char* arg)
{// addr = 0x0804ADEF
    _unknown_ _v8;
    _unknown_ __ebp;

    return quotearg_n(0, arg);
}

struct quoting_options quoting_options_from_style(union quoting_style style)
{// addr = 0x0804AE0A
    struct quoting_options o;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    intOrPtr _v24;
    intOrPtr _v28;
    intOrPtr _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    char _v44;
    _unknown_ _v68;
    _unknown_ _v72;
    struct quoting_options __ebx;
    _unknown_ __ebp;
    _unknown_ _t27;

    __ebx = style;
    _v44 = _a8;
    memset( &_v44 + 4, 0, 32);
     *__ebx = _v44;
     *((intOrPtr*)(__ebx + 4)) = _v40;
     *((intOrPtr*)(__ebx + 8)) = _v36;
     *((intOrPtr*)(__ebx + 12)) = _v32;
     *((intOrPtr*)(__ebx + 16)) = _v28;
     *((intOrPtr*)(__ebx + 20)) = _v24;
     *((intOrPtr*)(__ebx + 24)) = _v20;
     *((intOrPtr*)(__ebx + 28)) = _v16;
     *((intOrPtr*)(__ebx + 32)) = _v12;
    return __ebx;
}

char* quotearg_n_style(int n, union quoting_style s, const char* arg)
{// addr = 0x0804AE77
    const struct quoting_options o;
    struct quoting_options _v40;
    _unknown_ _v68;
    union quoting_style _v72;
    _unknown_ _v76;
    _unknown_ __ebp;

    _v72 = s;
    quoting_options_from_style( &_v40);
    __esp = __esp - 4;
    return quotearg_n_options(n, arg, -1,  &_v40);
}

char* quotearg_n_style_mem(int n, union quoting_style s, const char* arg, size_t argsize)
{// addr = 0x0804AEB5
    const struct quoting_options o;
    struct quoting_options _v40;
    _unknown_ _v68;
    union quoting_style _v72;
    _unknown_ _v76;
    _unknown_ __ebp;

    _v72 = s;
    quoting_options_from_style( &_v40);
    __esp = __esp - 4;
    return quotearg_n_options(n, arg, argsize,  &_v40);
}

char* quotearg_style(union quoting_style s, const char* arg)
{// addr = 0x0804AEF2
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return quotearg_n_style(0, s, arg);
}

char* quotearg_char(const char* arg, char ch)
{// addr = 0x0804AF14
    struct quoting_options options;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    intOrPtr _v24;
    intOrPtr _v28;
    intOrPtr _v32;
    struct quoting_options _v40;
    char _v56;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    _unknown_ _t34;

    _v56 = ch & 4294967295;
    _v40 = default_quoting_options.style;
    _v40.quote_these_too = default_quoting_options.quote_these_too;
    _v32 =  *134553928;
    _v28 =  *134553932;
    _v24 =  *134553936;
    _v20 =  *134553940;
    _v16 =  *134553944;
    _v12 =  *134553948;
    _v8 =  *134553952;
    set_char_quoting( &_v40, _v56, 1);
    return quotearg_n_options(0, arg, -1,  &_v40);
}

char* quotearg_colon(const char* arg)
{// addr = 0x0804AFA7
    _unknown_ _v8;
    _unknown_ __ebp;

    return quotearg_char(arg, 58);
}

size_t safe_read(int fd, _Unknown_base* buf, size_t count)
{// addr = 0x0804AFC4
    ssize_t result;
    int _v8;
    int _v24;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    while(1) {
        _v8 = read(fd, buf, count);
        if(_v8 < 0) {
            break;
        }
        if( *(__errno_location()) == 4) {
            continue;
        }
        if( *(__errno_location()) != 22 || count <= 2147475456) {
            _v24 = _v8;
            return _v24;
        }
        count = 2147475456;
    }
    _v24 = _v8;
    return _v24;
}

size_t safe_write(int fd, * buf, size_t count)
{// addr = 0x0804B02C
    ssize_t result;
    int _v8;
    int _v24;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    while(1) {
        _v8 = write(fd, buf, count);
        if(_v8 < 0) {
            break;
        }
        if( *(__errno_location()) == 4) {
            continue;
        }
        if( *(__errno_location()) != 22 || count <= 2147475456) {
            _v24 = _v8;
            return _v24;
        }
        count = 2147475456;
    }
    _v24 = _v8;
    return _v24;
}

int rpl_vfprintf(FILE* fp, const char* format, va_list args)
{// addr = 0x0804B094
    char[1999] buf;
    char* output;
    size_t len;
    size_t lenbuf;
    int saved_errno;
    intOrPtr _v8;
    char _v2008;
    void* _v2012;
    int _v2016;
    unsigned int _v2020;
    int _v2024;
    FILE* _v2040;
    const char* _v2044;
    char* _v2048;
    int _v2052;
    _unknown_ _v2064;
    _unknown_ _v2068;
    _unknown_ _v2072;
    _unknown_ __ebp;
    _unknown_ _t46;
    int _t56;
    int _t58;
    _unknown_ _t65;
    _unknown_ _t71;

    _v2040 = fp;
    _v2044 = format;
    _v2048 = args;
    _v8 =  *gs:0x14];
    _v2020 = 2000;
    _v2012 = vasnprintf( &_v2008,  &_v2020, _v2044, _v2048);
    _v2016 = _v2020;
    __eflags = _v2012;
    if(__eflags != 0) {
        _t56 = fwrite(_v2012, 1, _v2016, _v2040);
        __eflags = _t56 - _v2016;
        if(_t56 >= _v2016) {
            __eflags = _v2016;
            if(__eflags >= 0) {
                _v2052 = _v2016;
            } else {
                 *(__errno_location()) = 75;
                fseterr(_v2040);
                _v2052 = -1;
            }
        } else {
            __eflags = _v2012 -  &_v2008;
            if(__eflags != 0) {
                _v2024 =  *(__errno_location());
                free(_v2012);
                 *(__errno_location()) = _v2024;
            }
            _v2052 = -1;
        }
    } else {
        fseterr(_v2040);
        _v2052 = -1;
    }
    _t58 = _v2052;
    if(__eflags == 0) {
        return _t58;
    }
    __stack_chk_fail();
    return _t58;
}

_Unknown_base* xnmalloc(size_t n, size_t s)
{// addr = 0x0804B1FC
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t15;
    _unknown_ _t16;

    if(-1 / s >= n) {
        return xmalloc(n * s);
    }
    xalloc_die();
    return xmalloc(n * s);
}

_Unknown_base* xnrealloc(_Unknown_base* p, size_t n, size_t s)
{// addr = 0x0804B22A
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t12;
    _unknown_ _t18;
    _unknown_ _t19;

    if(-1 / s >= n) {
        return xrealloc(p, n * s);
    }
    xalloc_die();
    return xrealloc(p, n * s);
}

_Unknown_base* x2nrealloc(_Unknown_base* p, size_t* pn, size_t s)
{// addr = 0x0804B25F
    size_t n;
    unsigned int _v8;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t35;
    _unknown_ _t45;
    signed int _t46;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t51;
    _unknown_ _t52;

    _v8 =  *pn;
    if(p != 0) {
        if(-1431655766 / s <= _v8) {
            xalloc_die();
        }
        _v8 = _v8 + (_v8 + 1 >> 1);
    } else {
        if(_v8 == 0) {
            _t46 = 64 / s;
            _v8 = _t46;
            _v8 = _v8 + (_t46 & 4294967295 & );
        }
    }
     *pn = _v8;
    return xrealloc(p, _v8 * s);
}

char* xcharalloc(size_t n)
{// addr = 0x0804B2DA
    _unknown_ __ebp;

    return xmalloc(n);
}

_Unknown_base* xmalloc(size_t n)
{// addr = 0x0804B2ED
    _Unknown_base* p;
    void* _v8;
    _unknown_ __ebp;

    _v8 = malloc(n);
    if(_v8 != 0) {
        return _v8;
    }
    if(n == 0) {
        return _v8;
    }
    xalloc_die();
    return _v8;
}

_Unknown_base* xrealloc(_Unknown_base* p, size_t n)
{// addr = 0x0804B317
    _unknown_ _v8;
    _unknown_ __ebp;

    p = realloc(p, n);
    if(p != 0) {
        return p;
    }
    if(n == 0) {
        return p;
    }
    xalloc_die();
    return p;
}

_Unknown_base* x2realloc(_Unknown_base* p, size_t* pn)
{// addr = 0x0804B348
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return x2nrealloc(p, pn, 1);
}

_Unknown_base* xzalloc(size_t s)
{// addr = 0x0804B36A
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return memset(xmalloc(s), 0, s);
}

_Unknown_base* xcalloc(size_t n, size_t s)
{// addr = 0x0804B396
    _Unknown_base* p;
    void* _v8;
    _unknown_ _v24;
    _unknown_ __ebp;

    _v8 = calloc(n, s);
    if(_v8 != 0) {
        return _v8;
    }
    xalloc_die();
    return _v8;
}

_Unknown_base* xmemdup(* p, size_t s)
{// addr = 0x0804B3C1
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    return memcpy(xmalloc(s), p, s);
}

char* xstrdup(const char* string)
{// addr = 0x0804B3EC
    _unknown_ _v8;
    _unknown_ __ebp;

    return xmemdup(string, strlen(string) + 1);
}

fseterr(FILE* fp)
{// addr = 0x0804B414
    _unknown_ __ebp;

    fp->_flags = fp->_flags | 32;
    return;
}

xalloc_die()
{// addr = 0x0804B428
    char _v9;
    signed int _v11;
    char* _v16;
    _unknown_ _v20;
    struct _IO_FILE* _v24;
    int _v28;
    signed int _v33;
    signed int _v34;
    signed int _v35;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t27;
    signed int _t28;
    _unknown_ _t41;
    _unknown_ _t42;

    _v16 = gettext("memory exhausted");
    error(exit_failure, 0, "%s");
    abort();
    _push(_t41);
    __esp = __esp - 24;
    _t28 = _v24;
     *__esp = _t28;
    __fpending();
    _v33 = _t28 & 4294967295;
    _v34 = ferror_unlocked(_v24) & 4294967295;
    _v35 = fclose(_v24) & 4294967295;
    if(_v34 == 0) {
        if(((_v11 & 255 ^ 1) & 4294967295) != 0 || _v9 == 0 &&  *(__errno_location()) == 9) {
            _v28 = 0;
            return _v28;
        } else {
            goto L5;
        }
    }
L5:
    if(((_v11 & 255 ^ 1) & 4294967295) != 0) {
         *(__errno_location()) = 0;
    }
    _v28 = -1;
    return _v28;
}

int close_stream(FILE* stream)
{// addr = 0x0804B464
    _Bool some_pending;
    _Bool prev_fail;
    _Bool fclose_fail;
    signed int _v5;
    signed int _v6;
    signed int _v7;
    int _v24;
    _unknown_ __ebp;
    signed int _t22;

    _t22 = stream;
     *__esp = _t22;
    __fpending();
    _v5 = _t22 & 4294967295;
    _v6 = ferror_unlocked(stream) & 4294967295;
    _v7 = fclose(stream) & 4294967295;
    if(_v6 != 0 || ((_v7 & 255 ^ 1) & 4294967295) == 0 && (_v5 != 0 ||  *(__errno_location()) != 9)) {
        if(((_v7 & 255 ^ 1) & 4294967295) != 0) {
             *(__errno_location()) = 0;
        }
        _v24 = -1;
        return _v24;
    }
    _v24 = 0;
    return _v24;
}

int is_infinitel(long double x)
{// addr = 0x0804B4F4
    int _v8;
    intOrPtr _v20;
    signed int _v24;
    _unknown_ __ebp;
    signed int _t13;
    signed int _t18;

    __edx = _a8;
     *__esp = x;
    _v24 = __edx;
    _v20 = _a12;
    _t13 = rpl_isnanl();
    if(_t13 != 0) {
L4:
        _v8 = 1;
        return _v8;
    }
    asm("fld tword [ebp+0x8]");
    asm("fld st0, st0");
    asm("faddp st1, st0");
    asm("fld tword [ebp+0x8]");
    asm("fucompp ");
    asm("fnstsw ax");
    asm("sahf ");
    _t18 = (_t13 & __edx ^ 1) & 4294967295;
    if(_t18 != 0) {
        goto L5;
    }
    asm("fld tword [ebp+0x8]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucompp ");
    asm("fnstsw ax");
    asm("sahf ");
    if(_t18 != 0 || _t18 != 0) {
        goto L4;
    }
L5:
    _v8 = 0;
    return _v8;
}

char* vasnprintf(char* resultbuf, size_t* lengthp, const char* format, va_list args)
{// addr = 0x0804B55A
    char_directives d;
    arguments a;
    size_t buf_neededlength;
    char* buf;
    char* buf_malloced;
    const char* cp;
    size_t i;
    char_directive* dp;
    char* result;
    size_t allocated;
    size_t length;
    size_t buf_memsize;
    size_t n;
    size_t augmented_length;
    size_t memory_size;
    char* memory;
    size_t augmented_length;
    size_t memory_size;
    char* memory;
    int flags;
    int has_width;
    size_t width;
    int has_precision;
    size_t precision;
    size_t tmp_length;
    char[699] tmpbuf;
    char* tmp;
    char* pad_ptr;
    char* p;
    int arg;
    const char* digitp;
    int arg;
    const char* digitp;
    size_t tmp_memsize;
    long double arg;
    int sign;
    fpucw_t oldcw;
    fpucw_t _cw;
    fpucw_t _ncw;
    fpucw_t _ncw;
    size_t pad;
    char* end;
    char* q;
    char* q;
    size_t count;
    size_t n;
    size_t memory_size;
    char* memory;
    arg_type type;
    int flags;
    char* fbp;
    unsigned int prefix_count;
    int[1] prefixes;
    size_t n;
    size_t n;
    size_t memory_size;
    char* memory;
    int count;
    int retcount;
    size_t maxlen;
    int arg;
    unsigned int arg;
    int arg;
    unsigned int arg;
    int arg;
    unsigned int arg;
    long int arg;
    long unsigned int arg;
    long long int arg;
    long long unsigned int arg;
    double arg;
    long double arg;
    int arg;
    wint_t arg;
    const char* arg;
    const wchar_t* arg;
    _Unknown_base* arg;
    size_t bigger_need;
    size_t memory_size;
    char* memory;
    size_t n;
    size_t memory_size;
    char* memory;
    size_t memory_size;
    char* memory;
    char* memory;
    _unknown_ _v16;
    intOrPtr _v32;
    _unknown_ _v732;
    _unknown_ _v734;
    unsigned int _v740;
    int _v744;
    unsigned int _v748;
    const char* _v752;
    unsigned int _v756;
    void* _v760;
    unsigned int _v764;
    unsigned int _v768;
    unsigned int _v772;
    int _v776;
    _unknown_ _v780;
    _unknown_ _v784;
    _unknown_ _v788;
    _unknown_ _v792;
    _unknown_ _v796;
    _unknown_ _v800;
    _unknown_ _v804;
    _unknown_ _v808;
    _unknown_ _v812;
    _unknown_ _v816;
    _unknown_ _v820;
    _unknown_ _v824;
    _unknown_ _v828;
    _unknown_ _v832;
    _unknown_ _v836;
    _unknown_ _v840;
    _unknown_ _v844;
    _unknown_ _v848;
    _unknown_ _v852;
    _unknown_ _v856;
    _unknown_ _v860;
    _unknown_ _v864;
    _unknown_ _v868;
    _unknown_ _v872;
    _unknown_ _v876;
    _unknown_ _v880;
    _unknown_ _v884;
    _unknown_ _v888;
    _unknown_ _v892;
    _unknown_ _v896;
    _unknown_ _v900;
    _unknown_ _v904;
    _unknown_ _v908;
    _unknown_ _v912;
    _unknown_ _v916;
    _unknown_ _v924;
    _unknown_ _v932;
    _unknown_ _v936;
    _unknown_ _v940;
    _unknown_ _v944;
    _unknown_ _v948;
    _unknown_ _v1004;
    _unknown_ _v1008;
    _unknown_ _v1012;
    _unknown_ _v1016;
    _unknown_ _v1020;
    _unknown_ _v1024;
    _unknown_ _v1028;
    _unknown_ _v1032;
    _unknown_ _v1036;
    struct  _v1044;
    _unknown_ _v1092;
    _unknown_ _v1096;
    _unknown_ _v1100;
    struct  _v1132;
    int _v1136;
    size_t* _v1140;
    const char* _v1144;
    char* _v1148;
    _unknown_ _v1152;
    _unknown_ _v1156;
    _unknown_ _v1160;
    _unknown_ _v1164;
    _unknown_ _v1168;
    _unknown_ _v1172;
    _unknown_ _v1176;
    _unknown_ _v1180;
    _unknown_ _v1184;
    _unknown_ _v1188;
    _unknown_ _v1192;
    _unknown_ _v1196;
    _unknown_ _v1200;
    _unknown_ _v1204;
    _unknown_ _v1208;
    _unknown_ _v1212;
    _unknown_ _v1216;
    _unknown_ _v1220;
    _unknown_ _v1224;
    _unknown_ _v1228;
    signed int _v1232;
    unsigned int _v1236;
    _unknown_ _v1240;
    _unknown_ _v1248;
    char _v1336;
    _unknown_ _v1360;
    _unknown_ _v1364;
    _unknown_ _v1368;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t973;
    int _t980;
    _unknown_ _t985;
    unsigned int _t988;
    _unknown_ _t990;
    _unknown_ _t1000;
    _unknown_ _t1005;
    _unknown_ _t1010;
    _unknown_ _t1012;
    _unknown_ _t1021;
    _unknown_ _t1025;
    _unknown_ _t1027;
    _unknown_ _t1036;
    _unknown_ _t1046;
    _unknown_ _t1047;
    _unknown_ _t1050;
    _unknown_ _t1052;
    _unknown_ _t1055;
    _unknown_ _t1068;
    _unknown_ _t1079;
    _unknown_ _t1080;
    _unknown_ _t1082;
    _unknown_ _t1083;
    _unknown_ _t1089;
    _unknown_ _t1091;
    _unknown_ _t1094;
    _unknown_ _t1100;
    _unknown_ _t1104;
    _unknown_ _t1114;
    _unknown_ _t1118;
    _unknown_ _t1120;
    _unknown_ _t1122;
    _unknown_ _t1141;
    _unknown_ _t1153;
    _unknown_ _t1157;
    _unknown_ _t1159;
    _unknown_ _t1161;
    _unknown_ _t1176;
    _unknown_ _t1194;
    _unknown_ _t1195;
    _unknown_ _t1197;
    _unknown_ _t1198;
    _unknown_ _t1201;
    _unknown_ _t1211;
    _unknown_ _t1222;
    _unknown_ _t1230;
    _unknown_ _t1233;
    _unknown_ _t1241;
    _unknown_ _t1242;
    _unknown_ _t1260;
    _unknown_ _t1270;
    _unknown_ _t1281;
    _unknown_ _t1283;
    _unknown_ _t1286;
    _unknown_ _t1287;
    _unknown_ _t1289;
    _unknown_ _t1290;
    _unknown_ _t1305;
    _unknown_ _t1308;
    _unknown_ _t1311;
    _unknown_ _t1315;
    _unknown_ _t1316;
    _unknown_ _t1317;
    _unknown_ _t1326;
    _unknown_ _t1330;
    _unknown_ _t1345;
    _unknown_ _t1354;
    _unknown_ _t1379;
    _unknown_ _t1381;
    _unknown_ _t1387;
    _unknown_ _t1392;
    _unknown_ _t1397;
    _unknown_ _t1404;
    _unknown_ _t1409;
    _unknown_ _t1420;
    _unknown_ _t1429;
    _unknown_ _t1430;
    _unknown_ _t1440;
    _unknown_ _t1446;
    _unknown_ _t1457;
    _unknown_ _t1459;
    _unknown_ _t1461;
    _unknown_ _t1463;
    _unknown_ _t1465;
    _unknown_ _t1467;
    _unknown_ _t1469;
    _unknown_ _t1471;
    _unknown_ _t1478;
    _unknown_ _t1479;
    _unknown_ _t1480;
    _unknown_ _t1481;
    _unknown_ _t1500;
    _unknown_ _t1508;
    _unknown_ _t1520;
    _unknown_ _t1532;
    _unknown_ _t1554;
    _unknown_ _t1558;
    _unknown_ _t1590;
    _unknown_ _t1594;
    _unknown_ _t1602;
    _unknown_ _t1610;
    _unknown_ _t1612;
    _unknown_ _t1614;
    _unknown_ _t1627;
    _unknown_ _t1642;
    _unknown_ _t1647;

    _v1136 = resultbuf;
    _v1140 = lengthp;
    _v1144 = format;
    _v1148 = args;
    _v32 =  *gs:0x14];
    __eflags = printf_parse(_v1144,  &_v1132,  &_v1044);
    if(__eflags >= 0) {
        _t980 = printf_fetchargs(_v1148,  &_v1044);
        __eflags = _t980;
        if(_t980 >= 0) {
            _v740 = xsum4(7, _v1132.max_width_length, _v1132.max_precision_length, 6);
            __eflags = _v740 - 3999;
            if(_v740 > 3999) {
                _v776 = _v740;
                __eflags = _v776 - 255;
                if(_v776 == 255) {
L344:
                    free(_v1132.dir);
                    __eflags = _v1044.arg;
                    if(_v1040 != 0) {
L345:
                        free(_v1044.arg);
                    }
                     *(__errno_location()) = 12;
                    _v1236 = 0;
                    goto L347;
                }
            } else {
                __esp = __esp - (_v740 + 15 + 15 >> 4 << 4);
                _v1232 =  &_v1336;
                _v1232 = _v1232 + 15 >> 4 << 4;
                _v744 = _v1232;
                _v748 = 0;
L11:
                __eflags = _v1136;
                if(_v1136 == 0) {
                    _v764 = 0;
                    _v768 = 0;
                } else {
                    _v764 = _v1136;
                    _v768 =  *_v1140;
                }
                _v772 = 0;
                _v752 = _v1144;
                _v756 = 0;
                _v760 = _v1132.dir;
                while(1) {
                    __eflags =  *_v760 - _v752;
                    if( *_v760 == _v752) {
                        goto L36;
                    } else {
                        goto L16;
                    }
                }
            }
L9:
            _v744 = malloc(_v776);
            __eflags = _v744;
            if(_v744 == 0) {
                goto L344;
            } else {
                _v748 = _v744;
                goto L11;
            }
            goto L345;
        } else {
            free(_v1132.dir);
            __eflags = _v1044.arg;
            if(_v1040 != 0) {
                free(_v1044.arg);
            }
             *(__errno_location()) = 22;
            _v1236 = 0;
        }
    } else {
        _v1236 = 0;
    }
L347:
    _t988 = _v1236;
    if(__eflags == 0) {
        return _t988;
    }
    __stack_chk_fail();
    return _t988;
}

size_t xsum4(size_t size1, size_t size2, size_t size3, size_t size4)
{// addr = 0x0804E995
    _unknown_ _v8;
    _unknown_ __ebp;

    return xsum(xsum(xsum(size1, size2), size3), size4);
}

size_t xmax(size_t size1, size_t size2)
{// addr = 0x0804E9D1
    unsigned int _v8;
    unsigned int _v12;
    _unknown_ __ebp;

    _v12 = size2;
    _v8 = size1;
    if(_v8 >= _v12) {
        return _v8;
    }
    _v8 = _v12;
    return _v8;
}

size_t xsum(size_t size1, size_t size2)
{// addr = 0x0804E9F6
    size_t sum;
    unsigned int _v8;
    unsigned int _v24;
    _unknown_ __ebp;

    _v8 = size1 + size2;
    if(_v8 < size1) {
        _v24 = -1;
        return _v24;
    }
    _v24 = _v8;
    return _v24;
}

int rpl_isnanl(long double x)
{// addr = 0x0804EA24
    memory_double m;
    unsigned int exponent;
    signed int _v16;
    signed int _v20;
    unsigned int _v24;
    long double _v28;
    signed int _v32;
    _unknown_ __ebp;

    _v28 = x;
    _v24 = _a8;
    _v20 = _a12;
    _v16 = _v20 & 32767;
    if(_v16 != 0) {
        if(_v16 != 32767) {
            _v32 = _v24 >> 31 ^ 1;
            return _v32;
        }
        goto L3;
    }
    _v32 = _v24 >> 31;
    return _v32;
L3:
    _v32 = (_v28 | _v24 ^ -2147483648) & 4294967295 & ;
    return _v32;
}

int printf_fetchargs(va_list args, arguments* a)
{// addr = 0x0804EA90
    size_t i;
    argument* ap;
    intOrPtr _v12;
    argument* _v16;
    struct  _v32;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t23;

    _v12 = 0;
    _v16 = a->arg;
    if(a->count <= _v12) {
        _v32.arg = 0;
        return _v28;
    }
    _v32.count =  *_v16;
    if(_v32 > 22) {
        _v32.arg = -1;
        return _v28;
    }
L2:
    goto __eax;
}

int printf_parse(const char* format, char_directives* d, arguments* a)
{// addr = 0x0804ED4C
    const char* cp;
    size_t arg_posn;
    size_t d_allocated;
    size_t a_allocated;
    size_t max_width_length;
    size_t max_precision_length;
    char c;
    size_t arg_index;
    char_directive* dp;
    const char* np;
    size_t n;
    const char* np;
    size_t n;
    size_t n;
    size_t memory_size;
    argument* memory;
    size_t width_length;
    const char* np;
    size_t n;
    size_t n;
    size_t memory_size;
    argument* memory;
    size_t precision_length;
    arg_type type;
    int flags;
    size_t n;
    size_t memory_size;
    argument* memory;
    size_t memory_size;
    char_directive* memory;
    signed int _v5;
    const char* _v12;
    argument* _v16;
    signed int _v20;
    unsigned int _v24;
    argument* _v28;
    argument* _v32;
    unsigned int _v36;
    intOrPtr* _v40;
    char* _v44;
    unsigned int _v48;
    char* _v52;
    _unknown_ _v56;
    unsigned int _v60;
    int _v64;
    void* _v68;
    _unknown_ _v72;
    char* _v76;
    _unknown_ _v80;
    unsigned int _v84;
    int _v88;
    void* _v92;
    _unknown_ _v96;
    signed int _v104;
    unsigned int _v136;
    void* _v160;
    signed int _v164;
    signed int _v168;
    _unknown_ _v172;
    _unknown_ _v176;
    void* _v180;
    signed int _v184;
    signed int _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    unsigned int _v200;
    unsigned int _v204;
    intOrPtr _v208;
    _unknown_ _v216;
    _unknown_ __ebp;
    _unknown_ _t587;
    _unknown_ _t590;
    _unknown_ _t591;
    _unknown_ _t593;
    _unknown_ _t651;
    _unknown_ _t654;
    _unknown_ _t860;
    signed int _t866;
    signed int _t886;

    _v12 = format;
    _v16 = 0;
    _v28 = 0;
    _v32 = 0;
    d->count = 0;
    _v20 = 1;
    d->dir = malloc(_v20 * _v20);
    if(d->dir == 0) {
L160:
         *(__errno_location()) = 12;
        _v136 = -1;
        return _v136;
    } else {
        a->count = 0;
        _v24 = 0;
        a->arg = 0;
        while(( *_v12 & 255 & 4294967295) != 0) {
            _v5 =  *_v12 & 255 & 4294967295;
            _v12 =  &(_v12[1]);
            if(_v5 != 37) {
                continue;
            }
            _v36 = -1;
            _v40 = d->dir + d->count * d->count;
             *_v40 = _v12 - 1;
             *(_v40 + 8) = 0;
             *(_v40 + 12) = 0;
             *(_v40 + 16) = 0;
             *(_v40 + 20) = -1;
             *(_v40 + 24) = 0;
             *(_v40 + 28) = 0;
             *(_v40 + 32) = -1;
             *(_v40 + 40) = -1;
            if(( *_v12 & 255 & 4294967295) <= 47) {
                goto L20;
            }
            if(( *_v12 & 255 & 4294967295) > 57) {
                goto L20;
                do {
                    do {
                        do {
                            do {
                                do {
L20:
                                    while(( *_v12 & 255 & 4294967295) == 39) {
                                    }
                                } while(( *_v12 & 255 & 4294967295) == 45);
                            } while(( *_v12 & 255 & 4294967295) == 43);
                        } while(( *_v12 & 255 & 4294967295) == 32);
                    } while(( *_v12 & 255 & 4294967295) == 35);
                } while(( *_v12 & 255 & 4294967295) == 48);
                if(( *_v12 & 255 & 4294967295) != 42) {
                    if(( *_v12 & 255 & 4294967295) <= 47 || ( *_v12 & 255 & 4294967295) > 57) {
                        goto L83;
                    } else {
                         *(_v40 + 12) = _v12;
                        while(( *_v12 & 255 & 4294967295) > 47 && ( *_v12 & 255 & 4294967295) <= 57) {
                            _v12 =  &(_v12[1]);
                        }
                    }
                    goto L84;
                }
                 *(_v40 + 12) = _v12;
                _v12 =  &(_v12[1]);
                 *(_v40 + 16) = _v12;
                if(_v28 == 0) {
                    _v28 = 1;
                }
                if(( *_v12 & 255 & 4294967295) <= 47 || ( *_v12 & 255 & 4294967295) > 57) {
                    if( *(_v40 + 20) != 255) {
L54:
                        _v60 =  *(_v40 + 20);
                        if(_v60 < _v24) {
L70:
                            while(a->count <= _v60) {
                                _t886 = a->count;
                                 *(a->arg + (_t886 << 4)) = 0;
                                a->count = _t886 + 1;
                            }
                        }
                        goto L55;
L83:
                        if(( *_v12 & 255 & 4294967295) != 46) {
L133:
                            _v104 = 0;
                            while(( *_v12 & 255 & 4294967295) != 104) {
                                if(( *_v12 & 255 & 4294967295) != 76) {
                                    if(( *_v12 & 255 & 4294967295) != 108) {
                                        if(( *_v12 & 255 & 4294967295) != 106) {
                                            if(( *_v12 & 255 & 4294967295) == 122 || ( *_v12 & 255 & 4294967295) == 90) {
                                                _v12 =  &(_v12[1]);
                                                continue;
                                            }
                                            if(( *_v12 & 255 & 4294967295) != 116) {
                                                _v5 =  *_v12 & 255 & 4294967295;
                                                _v12 =  &(_v12[1]);
                                                _v208 = _v5 - 37;
                                                if(_v208 > 83) {
                                                    goto L151;
                                                }
                                                goto L148;
                                            }
                                            _v12 =  &(_v12[1]);
                                            continue;
L148:
                                            goto __eax;
                                        }
                                        goto L141;
                                    }
                                    goto L139;
L141:
                                    _v104 = _v104 + 16;
                                    _v12 =  &(_v12[1]);
                                    continue;
                                }
                                _v104 = _v104 | 4;
                                _v12 =  &(_v12[1]);
                                continue;
L139:
                                _v104 = _v104 + 8;
                                _v12 =  &(_v12[1]);
                            }
                        }
L84:
                        _v12 =  &(_v12[1]);
                        if(( *_v12 & 255 & 4294967295) != 42) {
                             *(_v40 + 24) = _v12 - 1;
L129:
                            while(( *_v12 & 255 & 4294967295) > 47 && ( *_v12 & 255 & 4294967295) <= 57) {
                                goto L128;
                            }
                        }
                         *(_v40 + 24) = _v12 - 1;
                        _v12 =  &(_v12[1]);
                         *(_v40 + 28) = _v12;
                        if(_v32 <= 1) {
                            _v32 = 2;
                        }
                        if(( *_v12 & 255 & 4294967295) <= 47 || ( *_v12 & 255 & 4294967295) > 57) {
                            if( *(_v40 + 32) != 255) {
L106:
                                _v84 =  *(_v40 + 32);
                                if(_v84 < _v24) {
L122:
                                    while(a->count <= _v84) {
                                        _t866 = a->count;
                                         *(a->arg + (_t866 << 4)) = 0;
                                        a->count = _t866 + 1;
                                    }
                                }
                                goto L107;
L126:
                                goto L133;
                            }
                            goto L105;
L107:
                            if(_v24 >= 0) {
                                _v168 = -1;
                            } else {
                                _v168 = _v24 + _v24;
                            }
                            _v24 = _v168;
                            if(_v24 <= _v84) {
                                _v24 = xsum(_v84, 1);
                            }
                            if(_v24 > 268435455) {
                                _v164 = -1;
                            } else {
                                _v164 = _v24 << 4;
                            }
                            _v88 = _v164;
                            if(_v88 == 255) {
L156:
                                if(a->arg != 0) {
L157:
                                    free(a->arg);
                                }
                                if(d->dir != 0) {
                                    free(d->dir);
                                }
                                goto L160;
                            } else {
                                if(a->arg == 0) {
                                    _v160 = malloc(_v88);
                                } else {
                                    _v160 = realloc(a->arg, _v88);
                                }
                                _v92 = _v160;
                                if(_v92 == 0) {
                                    goto L156;
                                }
                                a->arg = _v92;
                                goto L122;
                            }
                        } else {
                            _v76 = _v12;
                            while(( *_v76 & 255 & 4294967295) > 47 && ( *_v76 & 255 & 4294967295) <= 57) {
                                _v76 =  &(_v76[1]);
                            }
                        }
L105:
                         *(_v40 + 32) = _v16;
                        _v16 = _v16 + 1;
                        if( *(_v40 + 32) == 255) {
                            goto L151;
                        }
                        goto L106;
L128:
                        _v12 =  &(_v12[1]);
                        goto L129;
L74:
                        goto L83;
                    }
                    goto L53;
L55:
                    if(_v24 >= 0) {
                        _v188 = -1;
                    } else {
                        _v188 = _v24 + _v24;
                    }
                    _v24 = _v188;
                    if(_v24 <= _v60) {
                        _v24 = xsum(_v60, 1);
                    }
                    if(_v24 > 268435455) {
                        _v184 = -1;
                    } else {
                        _v184 = _v24 << 4;
                    }
                    _v64 = _v184;
                    if(_v64 == 255) {
                        goto L156;
                    } else {
                        if(a->arg == 0) {
                            _v180 = malloc(_v64);
                        } else {
                            _v180 = realloc(a->arg, _v64);
                        }
                        _v68 = _v180;
                        if(_v68 == 0) {
                            goto L156;
                        } else {
                            a->arg = _v68;
                            goto L70;
                        }
                    }
                    goto L157;
                } else {
                    _v52 = _v12;
                    while(( *_v52 & 255 & 4294967295) > 47 && ( *_v52 & 255 & 4294967295) <= 57) {
                        _v52 =  &(_v52[1]);
                    }
                }
L53:
                 *(_v40 + 20) = _v16;
                _v16 = _v16 + 1;
                if( *(_v40 + 20) == 255) {
                    goto L151;
                }
                goto L54;
            } else {
                _v44 = _v12;
            }
            while(( *_v44 & 255 & 4294967295) > 47) {
                if(( *_v44 & 255 & 4294967295) <= 57) {
                    _v44 =  &(_v44[1]);
                    continue;
                }
                if(( *_v44 & 255 & 4294967295) != 36) {
                    goto L20;
                } else {
                    _v48 = 0;
                    _v44 = _v12;
                }
                while(( *_v44 & 255 & 4294967295) > 47) {
                    if(( *_v44 & 255 & 4294967295) <= 57) {
                        _v204 = ( *_v44 & 255 & 4294967295) - 48;
                        if(_v48 > 429496729) {
                            _v200 = -1;
                        } else {
                            _v200 = (_v48 << 2) + _v48 + (_v48 << 2) + _v48;
                        }
                        _v48 = xsum(_v200, _v204);
                        _v44 =  &(_v44[1]);
                        continue;
                    }
                    if(_v48 == 0) {
                        goto L151;
                    }
                    if(_v48 == 255) {
                        goto L151;
                    } else {
                        _v36 = _v48 - 1;
                        _v12 =  &(_v44[1]);
                        goto L20;
                    }
                    goto L152;
                }
            }
        }
    }
}

size_t xsum(size_t size1, size_t size2)
{// addr = 0x0804FBAD
    size_t sum;
    unsigned int _v8;
    unsigned int _v24;
    _unknown_ __ebp;

    _v8 = size1 + size2;
    if(_v8 < size1) {
        _v24 = -1;
        return _v24;
    }
    _v24 = _v8;
    return _v24;
}

L0804FC4A()
{
    return;
}

L0804FC50(intOrPtr _a4)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    intOrPtr _t5;
    _unknown_ _t7;
    _unknown_ _t8;

    _t5 = 0;
    L0804FC4A();
    _t8 = _t7 + 9113;
    __esp = __esp - 12;
    __edx =  *((intOrPtr*)(_t8 + -4));
    if(__edx != 0) {
        _t5 =  *__edx;
    }
    _v12 = _t5;
    _v16 = 0;
     *__esp = _a4;
    __cxa_atexit();
    __esp = __esp + 12;
    return;
}

L0804FC90(intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t8;

    L0804FC4A();
     *__esp = 3;
    _v12 = _a8;
    _v16 = _a4;
    __fxstat64();
    return;
}

L0804FCD0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134553352;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134553352;
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

L0804FCD0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134553352;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134553352;
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
//     114 Register nodes
//     178 Temporaries nodes
//      12 Casts
//    1942 Statements
//     136 Labels
//      80 Gotos
//     111 Blocks
//    5092 Nodes
//      14 Assembly nodes
//     451 Unknown Types


