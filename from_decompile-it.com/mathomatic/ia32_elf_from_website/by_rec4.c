_init()
{// addr = 0x08048E54
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 197012 + -4)) != 0) {
        __gmon_start__();
    }
    L08049360();
    L08071890();
    _pop(__eax);
    return;
}

L08048E60()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 197012 + -4)) != 0) {
        __gmon_start__();
    }
    L08049360();
    L08071890();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

fmod()
{// addr = 0x08048E94
    goto __imp__fmod;
}

int* __errno_location()
{// addr = 0x08048EA4
    goto __imp____errno_location;
}

rl_initialize()
{// addr = 0x08048EC4
    goto __imp__rl_initialize;
}

void qsort(void* __base, int __nmemb, int __size, __compar_fn_t __compar)
{// addr = 0x08048ED4
    goto __imp__qsort;
}

write_history()
{// addr = 0x08048EE4
    goto __imp__write_history;
}

__longjmp_chk()
{// addr = 0x08048EF4
    goto __imp____longjmp_chk;
}

__fprintf_chk()
{// addr = 0x08048F04
    goto __imp____fprintf_chk;
}

signal()
{// addr = 0x08048F14
    goto __imp__signal;
}

__gmon_start__()
{// addr = 0x08048F24
    goto __imp____gmon_start__;
}

__printf_chk()
{// addr = 0x08048F34
    goto __imp____printf_chk;
}

__isinf()
{// addr = 0x08048F44
    goto __imp____isinf;
}

read_history()
{// addr = 0x08048F54
    goto __imp__read_history;
}

double strtod(char* __nptr, char** __endptr)
{// addr = 0x08048F64
    goto __imp__strtod;
}

char* strchr(char* __s, int __c)
{// addr = 0x08048F74
    goto __imp__strchr;
}

char* getenv(char* __name)
{// addr = 0x08048F84
    goto __imp__getenv;
}

int system(char* __command)
{// addr = 0x08048F94
    goto __imp__system;
}

pow()
{// addr = 0x08048FA4
    goto __imp__pow;
}

L08048FB4()
{
    goto __imp__fgets;
}

__libc_start_main()
{// addr = 0x08048FC4
    goto __imp____libc_start_main;
}

tigetnum()
{// addr = 0x08048FD4
    goto __imp__tigetnum;
}

modf()
{// addr = 0x08048FE4
    goto __imp__modf;
}

void perror(char* msg)
{// addr = 0x08048FF4
    goto __imp__perror;
}

exp()
{// addr = 0x08049004
    goto __imp__exp;
}

long strtol(char* __nptr, char** __endptr, int __base)
{// addr = 0x08049014
    goto __imp__strtol;
}

struct _IO_FILE* fdopen(int fd, char* name)
{// addr = 0x08049024
    goto __imp__fdopen;
}

void free(void* __ptr)
{// addr = 0x08049034
    goto __imp__free;
}

int access(char* __name, int __type)
{// addr = 0x08049044
    goto __imp__access;
}

int fflush(struct _IO_FILE* fp)
{// addr = 0x08049054
    goto __imp__fflush;
}

int mkstemp(__caddr_t __template)
{// addr = 0x08049064
    goto __imp__mkstemp;
}

ioctl()
{// addr = 0x08049074
    goto __imp__ioctl;
}

__ctype_b_loc()
{// addr = 0x08049084
    goto __imp____ctype_b_loc;
}

int isatty(int __fd)
{// addr = 0x08049094
    goto __imp__isatty;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x080490A4
    goto __imp__fclose;
}

_setjmp()
{// addr = 0x080490B4
    goto __imp___setjmp;
}

int getopt(int __argc, __caddr_t* __argv, char* __opts)
{// addr = 0x080490C4
    goto __imp__getopt;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x080490D4
    goto __imp__fopen;
}

cos()
{// addr = 0x080490E4
    goto __imp__cos;
}

int unlink(char* __name)
{// addr = 0x080490F4
    goto __imp__unlink;
}

__finite()
{// addr = 0x08049104
    goto __imp____finite;
}

L08049114()
{
    goto __imp__strcpy;
}

int chdir(char* __path)
{// addr = 0x08049124
    goto __imp__chdir;
}

lgamma()
{// addr = 0x08049134
    goto __imp__lgamma;
}

int strcasecmp(char* __s1, char* __s2)
{// addr = 0x08049144
    goto __imp__strcasecmp;
}

stifle_history()
{// addr = 0x08049154
    goto __imp__stifle_history;
}

readline()
{// addr = 0x08049164
    goto __imp__readline;
}

void* malloc(int __size)
{// addr = 0x08049174
    goto __imp__malloc;
}

__stack_chk_fail()
{// addr = 0x08049184
    goto __imp____stack_chk_fail;
}

atan2()
{// addr = 0x08049194
    goto __imp__atan2;
}

__isnan()
{// addr = 0x080491A4
    goto __imp____isnan;
}

int strncasecmp(char* __s1, char* __s2, int __n)
{// addr = 0x080491B4
    goto __imp__strncasecmp;
}

L080491C4()
{
    goto __imp__memmove;
}

__ctype_tolower_loc()
{// addr = 0x080491D4
    goto __imp____ctype_tolower_loc;
}

L080491E4()
{
    goto __imp__getcwd;
}

log()
{// addr = 0x080491F4
    goto __imp__log;
}

using_history()
{// addr = 0x08049204
    goto __imp__using_history;
}

int strncmp(char* __s1, char* __s2, int __n)
{// addr = 0x08049214
    goto __imp__strncmp;
}

__snprintf_chk()
{// addr = 0x08049224
    goto __imp____snprintf_chk;
}

char* strpbrk(char* __s, char* __accept)
{// addr = 0x08049234
    goto __imp__strpbrk;
}

__memmove_chk()
{// addr = 0x08049244
    goto __imp____memmove_chk;
}

add_history()
{// addr = 0x08049254
    goto __imp__add_history;
}

sin()
{// addr = 0x08049264
    goto __imp__sin;
}

int strcmp(char* __s1, char* __s2)
{// addr = 0x08049274
    goto __imp__strcmp;
}

__strdup()
{// addr = 0x08049284
    goto __imp____strdup;
}

void exit(int __status)
{// addr = 0x08049294
    goto __imp__exit;
}

sincos()
{// addr = 0x080492A4
    goto __imp__sincos;
}

ceil()
{// addr = 0x080492B4
    goto __imp__ceil;
}

L08049300(_unknown_ __esi)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t4;
    signed int _t5;
    signed int _t6;
    _unknown_ _t7;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;

    if( *134714276 != 0) {
        return ;
    }
    _t5 =  *134714280;
    _t10 = (4 >> 2) - 1;
    if(_t5 >= _t10) {
L4:
         *134714276 = 1;
        return;
    } else {
        while(1) {
L3:
            _t6 = _t5 + 1;
             *134714280 = _t6;
             *((intOrPtr*)(134713092 + _t6 * 4))();
            _t5 =  *134714280;
            if(_t5 >= _t10) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L08049360()
{
    _unknown_ __ebp;

    __eax =  *134713100;
    if( *134713100 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134713100;
     *__eax();
    return;
}

fphandler(int sig)
{// addr = 0x08049390
    _unknown_ __ebp;

    return;
}

exit_program(int exit_value)
{// addr = 0x08049395
    char* _v28;
    char* _v32;
    char* _v36;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t8;
    char* _t9;
    int _t14;
    _unknown_ _t15;
    _unknown_ _t16;

    _push(__ebx);
    __esp = __esp - 36;
    _t14 = exit_value;
    reset_attr();
    if(html_flag != 0) {
        _v40 = "</pre>\n";
         *__esp = 1;
        __printf_chk();
    }
    if(readline_enabled != 0) {
        _t9 = history_filename;
         *__esp = _t9;
        write_history();
        if(_t9 != 0) {
            _v28 = history_filename;
            _v32 = prog_name;
            _v36 = "%s: Unable to save readline history into file "%s".\n";
            _v40 = 1;
             *__esp = __imp__stderr;
            __fprintf_chk();
        }
    }
    if(_t14 == 0 && quiet_mode == 0 && html_flag == 0) {
        _v40 = "Thank you for using Mathomatic!\n";
         *__esp = 1;
        __printf_chk();
    }
    exit(_t14);
    _push(_t15);
    __esp = __esp - 24;
    exit_program(1);
    return;
}

exithandler(int sig)
{// addr = 0x0804943C
    _unknown_ __ebp;

    exit_program(1);
    return;
}

alarmhandler(int sig)
{// addr = 0x08049450
    char* _v24;
    _unknown_ __ebp;

    _v24 = "\nTimeout, quitting...\n";
     *__esp = 1;
    __printf_chk();
    exit_program(1);
    return;
}

inthandler(int sig)
{// addr = 0x08049478
    char* _v24;
    _unknown_ __ebp;
    _None _t6;

    abort_flag = abort_flag + 1;
    _t6 = abort_flag;
    if(_t6 >= 0) {
L6:
        _v24 = "\nRepeatedly interrupted; returning to operating system...\n";
         *__esp = 1;
        __printf_chk();
        exit_program(1);
        return;
    }
    if(_t6 <= 1) {
        _v24 = "\nUser interrupt signal received; three times quits Mathomatic.\n";
         *__esp = 1;
        __printf_chk();
        return;
    }
    if(_t6 != 2) {
        goto L6;
    }
    asm("o16 nop ");
    goto L5;
L5:
    _v24 = "\nPress Control-C once more to quit program.\n";
     *__esp = 1;
    __printf_chk();
    return;
    return;
}

usage()
{// addr = 0x080494F0
    char* _v20;
    char* _v24;
    _unknown_ __ebp;

    _v20 = "15.1.1";
    _v24 = "\nMathomatic computer algebra system version %s\n\n";
     *__esp = 1;
    __printf_chk();
    _v20 = prog_name;
    _v24 = "Usage: %s [ options ] [ input_files ]\n\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "Options:\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -b            Enable bold color mode.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -c            Toggle color mode.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -h            Display this help and exit.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -m number     Specify a memory size multiplier.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -q            Set quiet mode (don't display prompts).\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -r            Disable readline.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -s level      Set enforced security level for session.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -t            Set test mode.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -u            Set unbuffered output.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -v            Display version information, then exit.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -w            Wide output mode, sets unlimited width.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "  -x            Enable HTML/XHTML output mode.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "\nPlease refer to the Mathomatic man page for more information.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "The man page is viewed by typing "man mathomatic" in shell.\n";
     *__esp = 1;
    __printf_chk();
    return;
}

resizehandler(int sig)
{// addr = 0x0804965D
    _unknown_ __ebp;

    if(screen_columns == 0) {
        return ;
    }
    get_screen_size();
    return;
}

int load_rc()
{// addr = 0x08049673
    FILE* fp;
    char[4095] buf;
    char* cp;
    int rv;
    intOrPtr _v32;
    char _v4128;
    char* _v4148;
    struct _IO_FILE* _v4152;
    char* _v4156;
    intOrPtr _v4160;
    int _v4164;
    intOrPtr _v4168;
    char* __ebx;
    struct _IO_FILE* __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t15;
    _unknown_ _t16;
    int _t17;
    _unknown_ _t18;
    char* _t19;
    _unknown_ _t21;
    _unknown_ _t23;
    _unknown_ _t24;
    char* _t27;

    _v32 =  *gs:0x14];
    getenv("HOME");
    if(0 == 0) {
L6:
        __esi = 1;
        goto L7;
    }
    _v4148 = ".mathomaticrc";
    _v4152 = 0;
    _v4156 = "%s/%s";
    _v4160 = 4096;
    _v4164 = 1;
    _v4168 = 4096;
     *__esp =  &rc_file;
    __snprintf_chk();
    fopen( &rc_file, 134687220);
    __edi = 0;
    if(0 == 0) {
        goto L6;
    }
    __esi = 1;
    while(1) {
        _v4164 = __edi;
        _v4168 = 4096;
        _t19 =  &_v4128;
         *__esp = _t19;
        L08048FB4();
        __ebx = _t19;
        _t27 = _t19;
        if(_t27 == 0) {
            break;
        }
        set_error_level(__ebx);
        1 = set_options(__ebx) == 0 ? 0 : __esi;
    }
    fclose(__edi);
L7:
    _t17 = __esi;
    if(_t27 == 0) {
        return _t17;
    }
    asm("o16 nop ");
    __stack_chk_fail();
    return _t17;
}

int set_signals()
{// addr = 0x08049760
    int rv;
    intOrPtr _v24;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t13;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;
    _unknown_ _t17;

    _t13 = __eax;
    _v24 = fphandler;
     *__esp = 8;
    signal();
    _v24 = inthandler;
     *__esp = 2;
    signal();
    _t19 = 0;
    if(_t13 != 255) {
        _t19 = 0 & ;
    }
    _v24 = inthandler;
     *__esp = 3;
    signal();
    _t20 = _t13 == 255 ? 0 : _t19;
    _v24 = exithandler;
     *__esp = 15;
    signal();
    _t21 = 0 == 255 ? 0 : _t13 == 255 ? 0 : _t19;
    _v24 = exithandler;
     *__esp = 1;
    signal();
    _t22 = 0 == 255 ? 0 : 0 == 255 ? 0 : _t13 == 255 ? 0 : _t19;
    _v24 = resizehandler;
     *__esp = 28;
    signal();
    _t23 = 0 == 255 ? 0 : 0 == 255 ? 0 : 0 == 255 ? 0 : _t13 == 255 ? 0 : _t19;
    _t18 = 0 == 255 ? 0 : 0 == 255 ? 0 : 0 == 255 ? 0 : _t13 == 255 ? 0 : _t19;
    return 0 == 255 ? 0 : 0 == 255 ? 0 : 0 == 255 ? 0 : _t13 == 255 ? 0 : _t19;
}

main_io_loop()
{// addr = 0x0804982A
    char* cp;
    intOrPtr _v20;
    intOrPtr _v24;
    char* _v28;
    intOrPtr _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    char* __ebx;
    char* __esi;
    _unknown_ __ebp;
    char* _t16;
    _unknown_ _t17;

    __ebx = "&mdash;&gt; ";
    __esi = "-> ";
    while(1) {
        default_color();
        _t10 = html_flag != 0 ? __ebx : __esi;
        _v20 = html_flag != 0 ? __ebx : __esi;
        _v24 = cur_equation + 1;
        _v28 = "%d%s";
        _v32 = 80;
        _v36 = 1;
        _v40 = 80;
         *__esp =  &prompt_str;
        __snprintf_chk();
        _t16 = get_string(tlhs, n_tokens << 4);
        if(_t16 == 0) {
            break;
        }
        process(_t16);
        asm("o16 nop ");
    }
    return;
}

int main(int argc, char** argv)
{// addr = 0x080498B9
    int i;
    char* cp;
    double numerator;
    double denominator;
    double new_size;
    int coption;
    int boption;
    int wide_flag;
    const unsigned char* __s1;
    intOrPtr _v24;
    _unknown_ _v36;
    _unknown_ _v44;
    intOrPtr _v60;
    _unknown_ _v64;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v84;
    char* _v88;
    char* _v92;
    intOrPtr _v96;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    FILE* _t90;
    int _t92;
    signed int _t93;
    _unknown_ _t94;
    void _t95;
    _unknown_ _t96;
    _unknown_ _t103;
    _unknown_ _t105;
    _unknown_ _t106;
    _unknown_ _t107;
    _unknown_ _t114;
    _unknown_ _t118;
    _unknown_ _t119;
    _unknown_ _t125;
    _unknown_ _t126;
    _unknown_ _t127;
    _unknown_ _t128;
    _unknown_ _t131;
    _unknown_ _t133;
    _unknown_ _t136;
    _unknown_ _t139;
    _unknown_ _t140;
    intOrPtr _t141;
    _unknown_ _t142;
    intOrPtr _t143;
    _unknown_ _t144;

    __esp = __esp & 240;
    _push(_t140);
    _push(_t142);
    _push(_t126);
    __esp = __esp - 84;
    _v24 = 0;
    init_gvars();
    _t90 = __imp__stdout;
    default_out = _t90;
    gfp = _t90;
    _t143 = 0;
    _v60 = 0;
    _t141 = 0;
    while(1) {
        _t92 = getopt(argc, argv, "s:bqrtchuvwxm:");
        if(_t92 >= 0) {
            _t93 = _t92 - 98;
            __eflags = _t93 - 22;
            if(_t93 <= 22) {
                goto ( *((intOrPtr*)(134684660 + _t93 * 4)));
            }
            usage();
            exit(2);
            _v60 = 1;
            continue;
        } else {
            if(n_tokens <= 99) {
                _v88 = prog_name;
                _v92 = "%s: Expression array size too small.\n";
                _v96 = 1;
                 *__esp = __imp__stderr;
                __fprintf_chk();
                exit(2);
            }
            _t95 = init_mem();
            if(_t95 == 0) {
                _v88 = prog_name;
                _v92 = "%s: Not enough memory.\n";
                _v96 = 1;
                 *__esp = __imp__stderr;
                __fprintf_chk();
                _t95 = exit(2);
            }
            goto L9;
        }
    }
}

init_gvars()
{// addr = 0x08049FD0
    _unknown_ __ebp;

    domain_check = 0;
    high_prec = 0;
    partial_flag = 1;
    symb_flag = 0;
    sign_cmp_flag = 0;
    approximate_roots = 0;
    repeat_flag = 0;
     *134715672 = 1;
    zero_token.kind = 0;
    asm("fldz ");
    asm("fstp qword [0x807991c]");
     *134715048 = 1;
    one_token.kind = 0;
    asm("fld1 ");
    asm("fstp qword [0x80796ac]");
    return;
}

int next_sign(long int* vp)
{// addr = 0x0804A053
    int i;
    _unknown_ __ebp;
    signed int _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    char[63]* _t8;

    __ecx = vp;
    _t5 = 1;
    _t8 =  &sign_array;
    if(sign_array != 0) {
        while( *((char*)(_t8 + _t5)) != 0) {
            _t5 = _t5 + 1;
            if(_t5 != 64) {
                continue;
            }
             *__ecx = 4;
            return 0;
        }
    }
     *__ecx = (_t5 << 14) + 4;
     *( &sign_array + _t5) = 1;
    return 1;
}

int found_var(token_type* p1, int n, long int v)
{// addr = 0x0804A0A7
    int j;
    int count;
    intOrPtr _v20;
    int __ebx;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t11;

    _t11 = __eax;
    __ebx = n;
    if(v == 0 || __ebx <= 0) {
        _v20 = 0;
        return _v20;
    } else {
        __edx = p1;
        _v20 = 0;
        __ecx = 0;
        while(1) {
        }
    }
}

int solved_equation(int i)
{// addr = 0x0804A101
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t15;
    _unknown_ _t16;
    intOrPtr* _t22;
    long int _t23;

    _t15 = i;
    __edx =  *( &n_rhs + _t15 * 4);
    if(__edx <= 0) {
        return 0;
    }
    if( *((intOrPtr*)( &n_lhs + _t15 * 4)) != 1) {
        return 0;
    }
    _t22 =  *((intOrPtr*)( &lhs + _t15 * 4));
    if( *_t22 != 1) {
        return 0;
    }
    _t23 =  *(_t22 + 8);
    if((_t23 & 16383) <= 4) {
        return 0;
    }
    return found_var( *( &rhs + _t15 * 4), __edx, _t23) & 4294967295 & ;
}

int var_in_equation(int i, long int v)
{// addr = 0x0804A168
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ __ebp;
    int _t21;
    int _t24;
    int _t25;
    signed int _t29;
    _unknown_ _t30;
    long int _t32;
    _unknown_ _t33;

    _v12 = __ebx;
    _v8 = __esi;
    _t29 = i;
    _t32 = v;
    _t21 =  *( &n_lhs + _t29 * 4);
    if(_t21 > 0) {
        _t24 = found_var( *( &lhs + _t29 * 4), _t21, _t32);
        _t22 = 1;
        if(_t24 != 0) {
            return _t22;
        }
        _t25 =  *( &n_rhs + _t29 * 4);
        if(_t25 <= 0) {
            goto L4;
        } else {
            0 = found_var( *( &rhs + _t29 * 4), _t25, _t32) & 4294967295 & ;
            return _t22;
        }
    }
L4:
    _t22 = 0;
    return _t22;
}

int min_level(token_type* expression, int n)
{// addr = 0x0804A1E2
    int min1;
    token_type* p1;
    token_type* ep;
    _unknown_ __ebx;
    _unknown_ __ebp;
    int _t8;
    signed int _t10;
    _unknown_ _t12;
    token_type* _t13;
    _unknown_ _t14;

    _t13 = expression;
    _t10 = n;
    if(_t10 > 1) {
        _t8 =  *(_t13 + 20);
        _t12 = _t13 + (_t10 << 4);
        _t14 = _t13 + 48;
        if(_t12 <= _t14) {
            return _t8;
        }
        while(1) {
L4:
            _t8 = _t8 -  *((intOrPtr*)(_t14 + 4)) > 0 ?  *((intOrPtr*)(_t14 + 4)) : _t8;
            _t14 = _t14 + 32;
            if(_t12 <= _t14) {
                break;
            }
        }
        return _t8;
    }
    _t8 = 1;
    if(_t10 <= 0) {
        return _t8;
    }
    return _t13->level;
}

int level_plus_count(token_type* p1, int n1, int level)
{// addr = 0x0804A221
    int i;
    int count;
    int __ebx;
    _unknown_ __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t10;

    __ebx = n1;
    __esi = level;
    __eax = 0;
    if(__ebx <= 1) {
        return __eax;
    }
    __edx = p1;
    __ecx = 1;
    while(1) {
    }
}

int level1_plus_count(token_type* p1, int n1)
{// addr = 0x0804A25F
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ __ebp;
    _unknown_ _t10;
    int _t14;
    _unknown_ _t15;
    token_type* _t17;
    _unknown_ _t18;

    _v12 = __ebx;
    _v8 = __esi;
    _t17 = p1;
    _t14 = n1;
    return level_plus_count(_t17, _t14, min_level(_t17, _t14));
}

int var_count(token_type* p1, int n1)
{// addr = 0x0804A297
    int i;
    int count;
    signed int __ebx;
    int __esi;
    _unknown_ __ebp;

    __esi = n1;
    __eax = 0;
    if(__esi <= 0) {
        return __eax;
    }
    __ecx = p1;
    __edx = 0;
    while(1) {
L2:
        __ebx = __ebx & 4294967295 & ;
        __eax = __eax + __ebx;
        __edx = __edx + 2;
        __ecx = __ecx + 32;
        if(__esi <= __edx) {
            break;
        }
    }
    return __eax;
}

int no_vars(token_type* source, int n, long int* vp)
{// addr = 0x0804A2C9
    int j;
    int found;
    intOrPtr _v20;
    _unknown_ _v24;
    _unknown_ __ebx;
    long int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t14;
    _unknown_ _t20;

    _t14 = source;
    __ecx = n;
    __edi = vp;
    if( *__edi != 0) {
        return var_count(_t14, __ecx) & 4294967295 & ;
    }
    _v20 = 0;
    if(__ecx <= 0) {
        return _t14 & 4294967295 & ;
    }
    _v20 = 0;
    __edx = 0;
    while(1) {
    }
}

int exp_is_numeric(token_type* p1, int n1)
{// addr = 0x0804A35B
    int i;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t4;
    token_type* _t5;
    _unknown_ _t6;

    __ecx = n1;
    if(__ecx <= 0) {
        return 1;
    }
    _t5 = p1;
    __edx = 0;
    while(1) {
    }
}

int exp_contains_nan(token_type* p1, int n1)
{// addr = 0x0804A39A
    int i;
    token_type* __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;

    _t3 = __eax;
    __edi = n1;
    if(__edi <= 0) {
        return 0;
    }
    __ebx = p1;
    __esi = 0;
    while(1) {
    }
}

int exp_contains_infinity(token_type* p1, int n1)
{// addr = 0x0804A3E4
    int i;
    token_type* __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;

    _t4 = __eax;
    __edi = n1;
    if(__edi <= 0) {
        return 0;
    }
    __ebx = p1;
    __esi = 0;
    while(1) {
    }
}

int isdelimiter(int ch)
{// addr = 0x0804A42B
    signed int __ebx;
    _unknown_ __ebp;
    signed int _t10;
    _unknown_ _t11;

    __ebx = ch;
    __ctype_b_loc();
    _t10 =  *__eax;
    if(( *(_t10 + 1 + __ebx * 2) & 32) != 0) {
        return 1;
    }
    if(__ebx != 44) {
        return _t10 & 4294967295 & ;
    }
    return 1;
}

int strcmp_tospace(char* cp1, char* cp2)
{// addr = 0x0804A45E
    char* cp1a;
    char* cp2a;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebx;
    char* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t14;
    signed int _t17;
    char* _t22;
    _unknown_ _t23;
    char* _t25;
    _unknown_ _t26;

    __edi = cp2;
    __edx = cp1;
    _t14 =  *__edx & 255;
    _t25 = __edx;
    if((_t14 & 4294967295) != 0) {
        while(isdelimiter(_t14 & 4294967295) == 0) {
            _t25 =  &(_t25[1]);
            _t14 =  *_t25 & 255;
            if((_t14 & 4294967295) != 0) {
                continue;
            }
            goto L3;
        }
    } else {
L3:
        _t17 =  *__edi & 255;
        _t22 = __edi;
        if((_t17 & 4294967295) != 0) {
            while(isdelimiter(_t17 & 4294967295) == 0) {
                _t22 =  &(_t22[1]);
                _t17 =  *_t22 & 255;
                if((_t17 & 4294967295) != 0) {
                    continue;
                }
                goto L9;
            }
        }
L9:
        _t23 = _t22 - __edi;
        _t26 = _t25 - cp1;
        _t24 = _t23 - _t26 < 0 ? _t26 : _t23;
        return strncasecmp(cp1, __edi, _t23 - _t26 < 0 ? _t26 : _t23);
    }
}

int is_all(char* cp)
{// addr = 0x0804A4DC
    _unknown_ _v24;
    _unknown_ __ebp;

    return strcmp_tospace(cp, 134684795) & 4294967295 & ;
}

char* skip_space(char* cp)
{// addr = 0x0804A4FF
    _unknown_ __ebx;
    char* __esi;
    _unknown_ __ebp;
    intOrPtr* _t9;
    intOrPtr _t11;
    signed int _t12;

    _t9 = __eax;
    __esi = cp;
    if(__esi == 0) {
        return __esi;
    }
    _t12 =  *__esi & 255;
    if((_t12 & 4294967295) == 0) {
        return __esi;
    }
    __ctype_b_loc();
    _t11 =  *_t9;
    while(( *(_t11 + 1 + (_t12 & 4294967295) * 2) & 32) != 0) {
        __esi =  &((__esi)[1]);
        _t12 =  *__esi & 255;
        if((_t12 & 4294967295) == 0) {
            return __esi;
        }
    }
}

char* skip_param(char* cp)
{// addr = 0x0804A535
    _unknown_ __ebx;
    _unknown_ __ebp;
    signed int _t7;
    char* _t8;
    char* _t14;

    _t14 = cp;
    if(_t14 == 0) {
        return _t14;
    }
    _t7 =  *_t14 & 255;
    if((_t7 & 4294967295) != 0) {
L4:
        while((_t7 & 4294967295) >= 0 || isdelimiter(_t7 & 4294967295) == 0) {
            _t14 =  &(_t14[1]);
            _t7 =  *_t14 & 255;
            if((_t7 & 4294967295) == 0) {
                goto L6;
            }
        }
    } else {
    }
L6:
    _t8 = skip_space(_t14);
    _t14 = _t8;
    if(isdelimiter( *_t8) == 0) {
        return _t14;
    }
    _t14 = skip_space( &(_t14[1]));
    return _t14;
}

long int decstrtol(char* cp, char** cpp)
{// addr = 0x0804A597
    long int l;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t11;
    char* _t14;
    char** _t17;
    _unknown_ _t18;
    char* _t20;
    _unknown_ _t21;
    long _t23;
    _unknown_ _t24;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t20 = cp;
    _t17 = cpp;
    _t23 = strtol(_t20, _t17, 10);
    if(_t17 == 0) {
        return _t23;
    }
    _t14 =  *_t17;
    if(_t14 == _t20) {
        return _t23;
    }
     *_t17 = skip_space(_t14);
    return _t23;
}

free_result_str()
{// addr = 0x0804A5E5
    _unknown_ __ebp;

    __eax = result_str;
    if(result_str != 0) {
        __eax = free(__eax);
        result_str = 0;
    }
    result_en = -1;
    return;
}

int return_result(int en)
{// addr = 0x0804A612
    _unknown_ __ebp;
    _unknown_ _t6;

    __edx = en;
    if( *((intOrPtr*)( &n_lhs + __edx * 4)) <= 0) {
        return 0;
    }
    return list_sub(__edx) & 4294967295 & ;
}

char* get_string(char* string, int n)
{// addr = 0x0804A63C
    char* cp;
    char* _v44;
    char[79]* _v48;
    char[79]* _v52;
    int _v56;
    char* __ebx;
    _unknown_ __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t17;
    char[79]* _t18;
    _unknown_ _t19;
    FILE* _t20;
    _unknown_ _t22;
    _unknown_ _t24;
    _unknown_ _t27;
    _unknown_ _t30;
    _unknown_ _t32;
    char* _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    char* _t36;
    int _t44;

    __ebx = string;
    __esi = n;
    if(quiet_mode != 0) {
        prompt_str = 0;
    }
    asm("repne scasb ");
    input_column =  !-1 - 1;
    if(readline_enabled == 0) {
L13:
        if(echo_input == 0) {
            _v52 =  &prompt_str;
            _v56 = 134700660;
             *__esp = 1;
            __printf_chk();
        }
L15:
        _t18 = __imp__stdin;
        _v52 = _t18;
        _v56 = __esi;
         *__esp = __ebx;
        L08048FB4();
        if(_t18 == 0) {
            if(quiet_mode == 0) {
                _v56 = "\nEnd of input.\n";
                 *__esp = 1;
                __printf_chk();
            }
            exit_program(0);
        }
L19:
        asm("repne scasb ");
        _t32 =  !-1 - 2;
        if(_t44 < 0) {
            _t33 =  &((__ebx)[_t32]);
            if( *_t33 == 10) {
                 *_t33 = 0;
            }
        }
        _t20 = gfp;
        if(_t20 == __imp__stdout || _t20 == __imp__stderr) {
            if(echo_input == 0) {
L26:
                set_error_level(__ebx);
                abort_flag = 0;
                return __ebx;
            }
        }
L25:
        _v44 = __ebx;
        _v48 =  &prompt_str;
        _v52 = "%s%s\n";
        _v56 = 1;
         *__esp = _t20;
        __fprintf_chk();
        goto L26;
    }
    if(echo_input != 0) {
        goto L15;
    }
     *__esp =  &prompt_str;
    readline();
    _t36 = 0;
    if(0 == 0) {
        exit_program(0);
    }
    my_strlcpy(__ebx, _t36, __esi);
    if( *(skip_space(_t36)) == 0) {
L12:
        free(_t36);
        goto L19;
    } else {
        _t25 = last_history_string;
        if(last_history_string == 0) {
L11:
             *__esp = _t36;
            add_history();
            last_history_string = _t36;
            goto L19;
        }
        _t44 = strcmp(_t25, _t36);
        if(_t44 == 0) {
            goto L12;
        }
        goto L11;
    }
    goto L13;
}

int get_yes_no()
{// addr = 0x0804A801
    char* cp;
    char[4095] buf;
    intOrPtr _v16;
    char _v4112;
    _unknown_ _v4136;
    char* __ebx;
    char* __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    char* _t9;
    int _t10;
    signed int _t11;
    _unknown_ _t13;
    _unknown_ _t16;

    _v16 =  *gs:0x14];
    __esi =  &_v4112;
    while(1) {
        _t9 = get_string(__esi, 4096);
        __ebx = _t9;
        if(_t9 == 0) {
            break;
        }
        str_tolower(_t9);
        _t11 =  *__ebx & 255;
        if((_t11 & 4294967295) == 110) {
            break;
        }
        _t16 = (_t11 & 4294967295) - 121;
        if(_t16 != 0) {
            continue;
        }
        _t10 = 1;
L6:
        if(_t16 == 0) {
            return _t10;
        }
        asm("o16 nop ");
        __stack_chk_fail();
        return _t10;
    }
    _t10 = 0;
    goto L6;
}

int get_expr(token_type* equation, int* np)
{// addr = 0x0804A86F
    char[59999] buf;
    char* cp;
    intOrPtr _v32;
    char _v60032;
    _unknown_ _v60052;
    _unknown_ _v60056;
    int* __ebx;
    token_type* __edi;
    char* __esi;
    _unknown_ __ebp;
    _unknown_ _t12;
    int _t13;
    signed int _t14;
    _unknown_ _t16;
    int _t19;

    __edi = equation;
    __ebx = np;
    _v32 =  *gs:0x14];
    __esi =  &_v60032;
    while(1) {
        _t13 = get_string(__esi, 60000);
        if(_t13 == 0) {
            break;
        }
        _t14 = parse_expr(__edi, __ebx, _t13);
        if(_t14 == 0) {
            continue;
        }
        _t19 =  *__ebx;
        _t13 = _t14 & 4294967295 & ;
        break;
    }
    if(_t19 == 0) {
        return _t13;
    }
    __stack_chk_fail();
    return _t13;
}

copy_espace(int src, int dest)
{// addr = 0x0804A8DF
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    signed int _v36;
    intOrPtr _v40;
    _unknown_ __ebp;
    token_type*[99]* _t36;
    token_type*[99]* _t41;
    signed int _t44;
    _unknown_ _t45;
    _unknown_ _t49;
    int[99]* _t50;
    int[99]* _t51;
    signed int _t53;
    _unknown_ _t54;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t44 = src;
    _t53 = dest;
    if(_t44 == _t53) {
        return ;
    }
    _t50 =  &n_lhs;
    _v36 =  *(_t50 + _t44 * 4) << 4;
    _t36 =  &lhs;
    _v40 =  *((intOrPtr*)(_t36 + _t44 * 4));
     *__esp =  *((intOrPtr*)(_t36 + _t53 * 4));
    L080491C4();
     *(_t50 + _t53 * 4) =  *(_t50 + _t44 * 4);
    _t51 =  &n_rhs;
    _v36 =  *(_t51 + _t44 * 4) << 4;
    _t41 =  &rhs;
    _v40 =  *((intOrPtr*)(_t41 + _t44 * 4));
     *__esp =  *((intOrPtr*)(_t41 + _t53 * 4));
    L080491C4();
     *(_t51 + _t53 * 4) =  *(_t51 + _t44 * 4);
    return ;
}

error_huge()
{// addr = 0x0804A95D
    intOrPtr _v8;
    intOrPtr _v24;
    signed int _v36;
    struct __jmp_buf_tag[0]* _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    intOrPtr _v56;
    signed int _v60;
    signed int _v96;
    signed int _v100;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t51;
    intOrPtr* _t62;
    _unknown_ _t63;
    _unknown_ _t64;
    signed int _t67;
    intOrPtr _t80;
    intOrPtr _t81;
    signed int _t87;
    _unknown_ _t88;
    signed int _t90;
    signed int _t91;
    signed int _t92;
    _unknown_ _t94;
    _unknown_ _t95;
    signed int _t97;
    _unknown_ _t102;

    _v24 = 14;
     *__esp =  &jmp_save;
    __longjmp_chk();
    _push(_t94);
    _push(_t88);
    _push(_t92);
    _push(_t64);
    __esp = __esp - 60;
    _t81 = _v24;
    if(_v8 != 0) {
        _t97 = _a12;
        if(_t97 > 0) {
            _t51 =  *_a4;
            _t92 = _t51 - 1;
            if(_t97 < 0) {
                _v52 = _a12 << 4;
                _t67 = _t81 + (_t92 << 4);
                _v44 =  ~_t51;
                _t90 = _a12 + _t92;
                _v40 = _t81 + (_t90 << 4);
                _t51 = _t81 + (_t51 << 4);
                _v36 = _t51;
                goto L5;
                do {
L5:
                    _v48 = _t67;
                    if( *_t67 == 1) {
                        _t51 = _a16;
                        if( *((intOrPtr*)(_t67 + 8)) == _t51) {
                            _v56 =  *((intOrPtr*)(_t67 + 4));
                            if(_a12 +  *_a4 - 1 > n_tokens) {
                                error_huge();
                            }
                            _v60 = _t90;
                            _v96 = _v44 +  *_a4 << 4;
                            _v100 = _v36;
                             *__esp = _v40;
                            L080491C4();
                             *_a4 = _a12 +  *_a4 - 1;
                            _v96 = _v52;
                            _t51 = _a8;
                            _v100 = _t51;
                             *__esp = _v48;
                            L080491C4();
                            if(_t92 < _t90) {
                                _t62 = _v48 + 4;
                                _t87 = _t92;
                                _v48 = _t90;
                                _t80 = _v56;
                                _t91 = _v60;
                                while(1) {
L11:
                                     *_t62 =  *_t62 + _t80;
                                    _t87 = _t87 + 1;
                                    _t62 = _t62 + 16;
                                    _t102 = _t87 - _t91;
                                    if(_t102 >= 0) {
                                        break;
                                    }
                                }
                                _t90 = _v48;
                            }
                        }
                    }
                    goto L13;
L13:
                    _t67 = _t67 - 16;
                    _v44 = _v44 + 1;
                    _v40 = _v40 - 16;
                    _v36 = _v36 - 16;
                    _t90 = _t90 - 1;
                    _t92 = _t92 - 1;
                } while(_t102 >= 0);
            }
        }
    }
    __esp =  &((__esp)[0xf]);
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    return _t51;
}

subst_var_with_exp(token_type* equation, int* np, token_type* expression, int len, long int v)
{// addr = 0x0804A977
    int j;
    int k;
    int level;
    signed int _v32;
    intOrPtr _v36;
    signed int _v40;
    intOrPtr* _v44;
    signed int _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t50;
    _unknown_ _t61;
    intOrPtr* _t64;
    _unknown_ _t77;
    token_type* _t78;
    _unknown_ _t84;
    signed int _t86;
    _unknown_ _t87;
    signed int _t89;
    int _t91;
    _unknown_ _t96;

    _t78 = equation;
    if(v == 0) {
        return _t50;
    }
    _t91 = len;
    if(_t91 <= 0) {
        return _t50;
    }
    _t50 =  *np;
    _t89 = _t50 - 1;
    if(_t91 >= 0) {
        return _t50;
    }
    _v48 = len << 4;
    _t64 = _t78 + (_t89 << 4);
    _v40 =  ~_t50;
    _t86 = len + _t89;
    _v36 = _t78 + (_t86 << 4);
    _t50 = _t78 + (_t50 << 4);
    _v32 = _t50;
    while(1) {
        _v44 = _t64;
        if( *_t64 != 1) {
            goto L12;
        } else {
            goto L5;
        }
    }
}

int alloc_espace(int i)
{// addr = 0x0804AAA1
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    int _t18;
    void* _t21;
    void* _t24;
    _unknown_ _t26;
    signed int _t28;
    _unknown_ _t29;
    _unknown_ _t31;
    token_type*[99]* _t32;

    _v12 = __ebx;
    _v8 = __esi;
    _t28 = i;
    if(_t28 > 99) {
L6:
        _t18 = 0;
        return _t18;
    }
    if( *( &lhs + _t28 * 4) == 0 ||  *( &rhs + _t28 * 4) == 0) {
        _t21 = malloc(n_tokens << 4);
         *( &lhs + _t28 * 4) = _t21;
        if(_t21 == 0) {
            goto L6;
        }
        _t24 = malloc(n_tokens << 4);
         *( &rhs + _t28 * 4) = _t24;
        if(_t24 == 0) {
            _t32 =  &lhs;
            free( *(_t32 + _t28 * 4));
             *(_t32 + _t28 * 4) = 0;
            _t18 = 0;
            return _t18;
        }
    }
    _t18 = 1;
    return _t18;
}

clean_up()
{// addr = 0x0804AB33
    int i;
    int __ebx;
    int[99]* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t9;

    init_gvars();
    _t7 = gfp;
    if(_t7 == default_out) {
L5:
        __ebx = n_equations;
        if(__ebx <= 0) {
            return ;
        }
        _t8 = 0;
        __edx =  &n_lhs;
        __edi =  &n_rhs;
        while(1) {
        }
    }
    if(_t7 != __imp__stdout && _t7 != __imp__stderr) {
        fclose(_t7);
    }
    _t7 = default_out;
    gfp = default_out;
    goto L5;
}

get_screen_size()
{// addr = 0x0804ABAC
    struct winsize ws;
    signed short _v18;
    signed short _v20;
    signed int _v36;
    intOrPtr _v40;
    _unknown_ __ebp;
    signed int _t12;
    signed int _t13;

    _v18 = 0;
    _v20 = 0;
    _t12 =  &_v20;
    _v36 = _t12;
    _v40 = 21523;
     *__esp = 1;
    ioctl();
    if(_t12 >= 0) {
        return ;
    }
    _t13 = _v18 & 65535;
    if((_t13 & 4294967295) != 0) {
        screen_columns = _t13 & 4294967295 & ;
    }
    _t12 = _v20 & 65535;
    if((_t12 & 4294967295) == 0) {
        return ;
    }
    screen_rows = _t12 & 4294967295 & ;
    return;
}

warning(const char* str)
{// addr = 0x0804AC01
    const char* _v20;
    char* _v24;
    const char* __ebx;
    _unknown_ __ebp;

    __ebx = str;
    warning_str = __ebx;
    if(debug_level >= 0) {
        return ;
    }
    set_color(1);
    _v20 = __ebx;
    _v24 = "Warning: %s\n";
     *__esp = 1;
    __printf_chk();
    default_color();
    return;
}

int check_divide_by_zero(double denominator)
{// addr = 0x0804AC49
    _unknown_ __ebp;
    _unknown_ _t1;
    _unknown_ _t2;

    __eflags = __eflags;
    asm("fldz ");
    asm("fld qword [ebp+0x8]");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if(__eflags != 0) {
        return 0;
    }
    if(__eflags != 0) {
        return 0;
    }
    warning("Division by zero.");
    return 1;
}

int alloc_next_espace()
{// addr = 0x0804AC74
    int i;
    int n;
    _unknown_ __ebx;
    int __edi;
    int[99]* __esi;
    _unknown_ __ebp;
    int _t21;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t30;
    int[99]* _t31;
    signed int _t36;
    int _t37;
    signed int _t38;
    _unknown_ _t39;

    _t36 = cur_equation;
    __edi = n_equations;
    if(_t36 >= __edi) {
        if(alloc_espace(__edi) != 0) {
            n_equations = n_equations + 1;
            _t37 = __edi;
            return _t37;
        }
        goto L6;
    }
    if( *((intOrPtr*)( &n_lhs + _t36 * 4)) != 0) {
        _t37 = _t36 + 1 - (((_t36 + 1) * 1374389535 >> 32 >> 5) - (_t32 >> 31)) * (((_t36 + 1) * 1374389535 >> 32 >> 5) - (_t32 >> 31));
        _t30 = 1;
        __esi =  &n_lhs;
        while(_t37 < __edi) {
            if( *((intOrPtr*)(__esi + _t37 * 4)) == 0) {
                goto L17;
            }
            _t30 = _t30 + 1;
            if(_t30 != 100) {
                _t37 = _t37 + 1 - ((1374389535 * (_t37 + 1) >> 32 >> 5) - (_t37 + 1 >> 31)) * ((1374389535 * (_t37 + 1) >> 32 >> 5) - (_t37 + 1 >> 31));
                continue;
            }
            asm("o16 nop ");
L18:
            _t37 = -1;
            return _t37;
        }
    } else {
L17:
         *( &n_rhs + _t37 * 4) = 0;
        return _t37;
    }
L6:
    warning("Memory is exhausted.");
    _t21 = n_equations;
    if(_t21 <= 0) {
        goto L18;
    }
    _t38 = 0;
    _t31 =  &n_lhs;
    if(n_lhs != 0) {
        while(1) {
            _t38 = _t38 + 1;
            if(_t38 >= _t21) {
                break;
            }
            if( *((intOrPtr*)(_t31 + _t38 * 4)) != 0) {
                continue;
            }
L10:
             *( &n_rhs + _t38 * 4) = 0;
            return _t37;
            break;
        }
        goto L18;
    }
    goto L10;
}

void error(int __status, int __errnum, char* __format)
{// addr = 0x0804AD7A
    const char* _v20;
    intOrPtr _v24;
    const char* __ebx;
    _unknown_ __ebp;

    __ebx = str;
    error_str = __ebx;
    set_color(2);
    _v20 = __ebx;
    _v24 = 134686589;
     *__esp = 1;
    __printf_chk();
    default_color();
    return;
}

int extra_characters(char* cp)
{// addr = 0x0804ADB9
    _unknown_ __ebp;
    char* _t2;
    _unknown_ _t3;
    _unknown_ _t5;

    _t2 = cp;
    if(_t2 == 0) {
        return 0;
    }
    if( *(skip_space(_t2)) == 0) {
        return 0;
    }
    error("Extra characters or unrecognized argument.");
    return 1;
}

int prompt_var(long int* vp)
{// addr = 0x0804ADED
    char[4095] buf;
    char* cp;
    intOrPtr _v16;
    char _v4112;
    _unknown_ _v4132;
    _unknown_ _v4136;
    char* __ebx;
    long int* __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t12;
    char* _t13;
    int _t14;
    char* _t15;
    _unknown_ _t17;
    int _t21;

    __esi = vp;
    _v16 =  *gs:0x14];
    __ebx =  &_v4112;
    while(1) {
        my_strlcpy( &prompt_str, "Enter variable: ", 80);
        _t13 = get_string(__ebx, 4096);
        if(_t13 == 0 ||  *_t13 == 0) {
            break;
        }
        _t15 = parse_var2(__esi, _t13);
        if(_t15 == 0) {
            continue;
        }
        _t14 = extra_characters(_t15);
        _t21 = _t14;
        if(_t21 != 0) {
            continue;
        }
L7:
        if(_t21 == 0) {
            return _t14;
        }
        __stack_chk_fail();
        return _t14;
    }
    _t14 = 0;
    goto L7;
}

int current_not_defined()
{// addr = 0x0804AE82
    int i;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;

    __edx = cur_equation;
    if(__edx < 0 && __edx < n_equations) {
        if( *((intOrPtr*)( &n_lhs + __edx * 4)) > 0) {
            return 0;
        }
    }
    error("No current equation or expression.");
    return 1;
}

int not_defined(int i)
{// addr = 0x0804AEBC
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    __edx = i;
    if(__edx >= 0 || __edx >= n_equations) {
        error("Invalid equation number.");
        return 1;
    }
    if( *((intOrPtr*)( &n_lhs + __edx * 4)) > 0) {
        return 0;
    }
    error("Equation space is empty.");
    return 1;
}

int get_default_en(char* cp)
{// addr = 0x0804AF06
    int i;
    _unknown_ _v24;
    _unknown_ __ebx;
    _unknown_ __ebp;
    char* _t5;
    long int _t11;
    int _t12;

    _t5 = cp;
    if( *_t5 != 0) {
        _t11 = decstrtol(_t5,  &cp);
        if(extra_characters(cp) != 0) {
L5:
            _t12 = -1;
            return _t12;
        }
        _t12 = _t11 - 1;
        goto L4;
        return _t12;
    } else {
        _t12 = cur_equation;
    }
L4:
    if(not_defined(_t12) == 0) {
        return _t12;
    }
    goto L5;
}

int get_range(char** cpp, int* ip, int* jp)
{// addr = 0x0804AF59
    int i;
    char* cp;
    char* _v32;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t41;
    int _t42;
    int _t45;
    _unknown_ _t46;
    int _t49;
    _unknown_ _t50;
    char* _t52;
    _unknown_ _t53;
    _unknown_ _t54;
    _unknown_ _t59;
    _unknown_ _t63;
    int _t68;
    signed int _t69;
    int* _t70;
    intOrPtr* _t74;
    char* _t78;
    char* _t79;
    int _t80;
    signed int _t81;
    signed int _t86;
    intOrPtr* _t87;
    int _t88;
    int _t89;

    __edi = ip;
    _t70 = jp;
    _t41 = skip_space( *cpp);
    _v32 = _t41;
    _t42 = is_all(_t41);
    if(_t42 == 0) {
        __ctype_b_loc();
        _t88 = _t42;
        _t43 = _v32;
        if(( *( *_t88 + 1 +  *_v32 * 2) & 8) == 0) {
             *__edi = cur_equation;
        } else {
             *__edi = strtol(_t43,  &_v32, 10) - 1;
        }
        _t45 =  *__edi;
        if(_t45 >= 0 || _t45 >= n_equations) {
            error("Invalid equation number.");
            return 0;
        }
        _t78 = _v32;
        if( *_t78 == 45) {
            _t79 =  &(_t78[1]);
            _v32 = _t79;
            if(( *( *_t88 + 1 +  *_t79 * 2) & 8) == 0) {
                 *_t70 = cur_equation;
            } else {
                 *_t70 = strtol(_t79,  &_v32, 10) - 1;
            }
            _t49 =  *_t70;
            if(_t49 >= 0 || _t49 >= n_equations) {
                error("Invalid equation number.");
                return 0;
            }
            _t80 =  *__edi;
            if(_t49 < _t80) {
                 *__edi = _t49;
                 *_t70 = _t80;
            }
L24:
            _t52 = skip_space(_v32);
            _v32 = _t52;
            _t81 =  *__edi;
            _t89 =  *_t70;
            if(_t89 < _t81) {
L30:
                error("No equations defined in specified range.");
                return 0;
            }
L25:
            _t74 = 134753668 + _t81 * 4;
            if( *((intOrPtr*)( &n_lhs + _t81 * 4)) <= 0) {
                while(1) {
                    _t81 = _t81 + 1;
                    if(_t89 < _t81) {
                        break;
                    }
                    _t74 = _t74 + 4;
                    if( *_t74 <= 0) {
                        continue;
                    }
                    goto L28;
                }
                goto L30;
            }
L28:
             *cpp = _t52;
            return 1;
            goto L30;
        }
        if(not_defined(_t45) != 0) {
            return 0;
        }
         *_t70 =  *__edi;
         *cpp = skip_space(_v32);
        return 1;
    }
    _v32 = skip_param(_v32);
     *__edi = 0;
    _t68 = n_equations;
    _t86 = _t68 - 1;
     *_t70 = _t86;
    if(_t86 <= 0) {
        goto L24;
    }
    if( *((intOrPtr*)( &n_lhs + _t86 * 4)) == 0) {
        _t69 = _t68 - 2;
        _t87 =  &n_lhs + _t69 * 4;
        while(1) {
             *_t70 = _t69;
            if(_t69 <= 0) {
                break;
            }
            _t69 = _t69 - 1;
            _t87 = _t87 - 4;
            if( *_t87 == 0) {
                continue;
            }
            goto L24;
        }
    }
}

int get_range_eol(char** cpp, int* ip, int* jp)
{// addr = 0x0804B139
    _unknown_ _v20;
    _unknown_ _v24;
    char** __ebx;
    _unknown_ __ebp;
    _unknown_ _t11;

    __ebx = cpp;
    if(get_range(__ebx, ip, jp) == 0) {
        return 0;
    }
    return extra_characters( *__ebx) & 4294967295 & ;
}

int next_espace()
{// addr = 0x0804B17C
    int i;
    char* _v24;
    _unknown_ __ebp;
    _unknown_ _t3;
    int _t4;

    _t4 = alloc_next_espace();
    if(_t4 >= 0) {
        return _t4;
    }
    error("Out of free equation spaces.");
    _v24 = "Use the clear command on unnecessary equations and try again.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = 3;
     *__esp =  &jmp_save;
    __longjmp_chk();
    return _t4;
}

check_err()
{// addr = 0x0804B1C1
    intOrPtr _v24;
    _unknown_ __ebp;
    _unknown_ _t3;
    int* _t4;

    _t4 = __errno_location();
    __edx =  *_t4;
    if(__edx == 33) {
         *_t4 = 0;
        if(domain_check == 0) {
            error("Domain error in constant.");
            _v24 = 2;
             *__esp =  &jmp_save;
            __longjmp_chk();
            goto L6;
        }
        goto L4;
    }
    if(__edx != 34) {
        return ;
    }
L6:
     *_t4 = 0;
    error("Overflow error in constant.");
    _v24 = 2;
     *__esp =  &jmp_save;
    __longjmp_chk();
    return;
L4:
    domain_check = 0;
    return;
}

error_bug(const char* str)
{// addr = 0x0804B23D
    char* _v24;
    _unknown_ __ebx;
    _unknown_ __edi;
    char*[7999]* __esi;
    _unknown_ __ebp;
    _unknown_ _t29;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;
    signed int _t34;
    _unknown_ _t35;
    _unknown_ _t36;
    _unknown_ _t37;
    signed int _t39;
    _unknown_ _t40;
    _unknown_ _t44;
    _unknown_ _t46;
    _unknown_ _t48;
    signed int _t49;
    intOrPtr* _t50;
    _unknown_ _t51;
    _unknown_ _t52;

    error(str);
    _v24 = "Please report this bug to the maintainers,\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "along with the entry sequence that caused it.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = "Type "help bugs" for info on how to report bugs found in this program.\n";
     *__esp = 1;
    __printf_chk();
    _v24 = 13;
     *__esp =  &jmp_save;
    __longjmp_chk();
    _push(_t51);
    _push(_t44);
    _push(__esi);
    _push(_t33);
    __esp = __esp - 28;
    cur_equation = 0;
    _push(100 << 2);
    _push(0);
    _push( &n_lhs);
    0x00000000();
    __esp =  &((__esp)[3]);
    _push(0 << 2);
    _push(0);
    _push( &n_rhs);
    0x00000000();
    __esp =  &((__esp)[3]);
    _t30 = var_names;
    if(var_names != 0) {
        _t34 = 0;
        __esi =  &var_names;
        while(1) {
L3:
            free(_t30);
             *(__esi + _t34 * 4) = 0;
            _t34 = 1 + _t34;
            _t30 =  *(__esi + _t34 * 4);
            if( *(__esi + _t34 * 4) == 0) {
                break;
            }
        }
    }
    _t49 =  &sign_array;
    _t43 = 64;
    if((_t49 & 1) != 0) {
         *_t49 = 0;
        _t49 = 1 + _t49;
        _t43 = 0x3f;
    }
    if((_t49 & 2) != 0) {
         *_t49 = 0;
        _t49 = _t49 + 2;
        _t43 = _t43 - 2;
    }
    _t39 = _t43 >> 2;
    _push(_t39 << 2);
    _push(0);
    _push(_t49);
    0x00000000();
    __esp =  &((__esp)[3]);
    _t50 = _t49 + _t39;
    if((_t43 & 4294967295 & 2) != 0) {
         *_t50 = 0;
        _t50 = _t50 + 2;
    }
    if((_t43 & 4294967295 & 1) != 0) {
         *_t50 = 0;
    }
    init_gvars();
    __esp =  &((__esp)[7]);
    _pop(__ebx);
    _pop(__esi);
    _pop(__edi);
    return;
}

clear_all()
{// addr = 0x0804B29E
    int i;
    signed int __ebx;
    _unknown_ __edi;
    char*[7999]* __esi;
    _unknown_ __ebp;
    _unknown_ _t23;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t37;
    _unknown_ _t39;
    signed int _t40;
    intOrPtr* _t41;

    cur_equation = 0;
    _push(100 << 2);
    _push(0);
    _push( &n_lhs);
    0x00000000();
    __esp = __esp + 12;
    _push(0 << 2);
    _push(0);
    _push( &n_rhs);
    0x00000000();
    __esp = __esp + 12;
    _t24 = var_names;
    if(var_names != 0) {
        __ebx = 0;
        __esi =  &var_names;
        while(1) {
L2:
            free(_t24);
             *(__esi + __ebx * 4) = 0;
            __ebx = __ebx + 1;
            _t24 =  *(__esi + __ebx * 4);
            if( *(__esi + __ebx * 4) == 0) {
                break;
            }
        }
    }
    _t40 =  &sign_array;
    _t35 = 64;
    if((_t40 & 1) != 0) {
         *_t40 = 0;
        _t40 = _t40 + 1;
        _t35 = 0x3f;
    }
    if((_t40 & 2) != 0) {
         *_t40 = 0;
        _t40 = _t40 + 2;
        _t35 = _t35 - 2;
    }
    _t31 = _t35 >> 2;
    _push(_t31 << 2);
    _push(0);
    _push(_t40);
    0x00000000();
    __esp = __esp + 12;
    _t41 = _t40 + _t31;
    if((_t35 & 4294967295 & 2) != 0) {
         *_t41 = 0;
        _t41 = _t41 + 2;
    }
    if((_t35 & 4294967295 & 1) != 0) {
         *_t41 = 0;
    }
    init_gvars();
    return;
}

int init_mem()
{// addr = 0x0804B351
    _unknown_ __ebp;
    token_type* _t9;
    _unknown_ _t10;
    token_type* _t13;
    token_type* _t16;
    token_type* _t19;
    _unknown_ _t21;

    _t9 = malloc((n_tokens + n_tokens * 2 >> 31) + n_tokens + n_tokens * 2 >> 1 << 4);
    scratch = _t9;
    if(_t9 == 0) {
        return 0;
    }
    _t13 = malloc(n_tokens << 4);
    tes = _t13;
    if(_t13 == 0) {
        return 0;
    }
    _t16 = malloc(n_tokens << 4);
    tlhs = _t16;
    if(_t16 == 0) {
        return 0;
    }
    _t19 = malloc(n_tokens << 4);
    trhs = _t19;
    if(_t19 == 0) {
        return 0;
    }
    if(alloc_next_espace() >= 0) {
        return 0;
    }
    clear_all();
    return 1;
}

set_sign_array()
{// addr = 0x0804B3E4
    int i;
    int j;
    _unknown_ _v20;
    int _v24;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t32;
    int _t33;
    _unknown_ _t34;
    _unknown_ _t35;
    signed int _t37;
    _unknown_ _t38;
    intOrPtr _t39;
    _unknown_ _t40;
    _unknown_ _t42;
    _unknown_ _t43;
    signed int _t44;
    intOrPtr* _t45;
    _unknown_ _t48;
    _unknown_ _t51;
    _unknown_ _t52;

    _t44 =  &sign_array;
    _t41 = 64;
    if((_t44 & 1) != 0) {
         *_t44 = 0;
        _t44 = _t44 + 1;
        _t41 = 0x3f;
    }
    if((_t44 & 2) != 0) {
         *_t44 = 0;
        _t44 = _t44 + 2;
        _t41 = _t41 - 2;
    }
    _t37 = _t41 >> 2;
    _push(_t37 << 2);
    _push(0);
    _push(_t44);
    0x00000000();
    __esp = __esp + 12;
    _t45 = _t44 + _t37;
    if((_t41 & 4294967295 & 2) != 0) {
         *_t45 = 0;
        _t45 = _t45 + 2;
    }
    if((_t41 & 4294967295 & 1) != 0) {
         *_t45 = 0;
    }
    _t33 = n_equations;
    _v24 = _t33;
    if(_t33 <= 0) {
        return _t33;
    }
    __ebx = 0;
    while(1) {
        _t39 =  *((intOrPtr*)( &n_lhs + __ebx * 4));
        if(_t39 <= 0) {
            goto L22;
        } else {
            goto L11;
        }
    }
}

int flip(token_type* side1p, int* side1np, token_type* side2p, int* side2np)
{// addr = 0x0804B4F0
    token_type* p1;
    token_type* ep;
    char* _v48;
    signed int _v52;
    int _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t31;
    _unknown_ _t42;
    _unknown_ _t45;
    int _t46;
    int _t47;
    int _t49;
    intOrPtr* _t50;
    _unknown_ _t54;
    _unknown_ _t62;
    _unknown_ _t65;
    _unknown_ _t67;
    _unknown_ _t69;
    signed int* _t72;
    struct * _t73;
    int _t74;
    intOrPtr* _t75;

    _t49 = __eax;
    _t72 = __edx;
    _t74 = __ecx;
    if(debug_level > 0) {
        _v48 = "Taking the reciprocal of both sides of the equation...";
        _v52 = 134686589;
        _v56 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    _t31 = n_tokens;
    if( *_t72 + 2 > _t31 || _t31 < side1p->kind + 2) {
        error_huge();
    }
    _t62 = _t49 + ( *_t72 << 4);
    if(_t49 >= _t62) {
L8:
        _t65 = _t74 + (side1p->kind << 4);
        if(_t74 >= _t65) {
L11:
            _v52 =  *_t72 << 4;
            _v56 = _t49;
             *__esp = _t49 + 32;
            L080491C4();
             *_t72 =  *_t72 + 2;
            _v52 = side1p->kind << 4;
            _v56 = _t74;
             *__esp = _t74 + 32;
            L080491C4();
            side1p->kind = side1p->kind + 2;
            _t73 =  &one_token;
             *_t49 = _t73->kind;
             *((intOrPtr*)(_t49 + 4)) =  *134715048;
             *((intOrPtr*)(_t49 + 8)) =  *134715052;
             *((intOrPtr*)(_t49 + 12)) =  *134715056;
            _t50 = _t49 + 16;
             *(_t50 + 4) = 1;
             *_t50 = 2;
             *((intOrPtr*)(_t50 + 8)) = 4;
             *_t74 = _t73->kind;
             *((intOrPtr*)(_t74 + 4)) =  *134715048;
             *((intOrPtr*)(_t74 + 8)) =  *134715052;
             *((intOrPtr*)(_t74 + 12)) =  *134715056;
            _t75 = _t74 + 16;
             *(_t75 + 4) = 1;
             *_t75 = 2;
             *((intOrPtr*)(_t75 + 8)) = 4;
            return 1;
        }
    } else {
        _t47 = _t49;
        while(1) {
L7:
             *((intOrPtr*)(_t47 + 4)) =  *((intOrPtr*)(_t47 + 4)) + 1;
            _t47 = _t47 + 16;
            if(_t62 <= _t47) {
                break;
            }
        }
        goto L8;
    }
L9:
    _t46 = _t74;
    while(1) {
L10:
         *((intOrPtr*)(_t46 + 4)) =  *((intOrPtr*)(_t46 + 4)) + 1;
        _t46 = _t46 + 16;
        if(_t65 <= _t46) {
            break;
        }
    }
    goto L11;
}

int g_of_f(int op, token_type* operandp, token_type* side1p, int* side1np, token_type* side2p, int* side2np)
{// addr = 0x0804B637
    token_type* p1;
    token_type* p2;
    token_type* ep;
    int oldn;
    int operandn;
    double numerator;
    double denominator;
    double d1;
    double d2;
    complexs c1;
    complexs c2;
    char[99] var_name_buf;
    _unknown_ _v16;
    intOrPtr _v32;
    char _v132;
    char _v140;
    char _v148;
    double _v156;
    double _v164;
    int _v168;
    char* _v172;
    int _v176;
    intOrPtr _v180;
    char* _v184;
    int _v188;
    char* _v192;
    intOrPtr _v196;
    int _v200;
    char* _v204;
    char* _v208;
    int _v212;
    char* _v216;
    int _v220;
    intOrPtr _v224;
    signed int _v228;
    int _v240;
    int _v248;
    struct complexs _v252;
    signed int _v256;
    int _v260;
    signed int _v264;
    token_type* _v268;
    token_type* _v272;
    token_type* _v276;
    int _v280;
    int _v281;
    FILE* _v288;
    int _v324;
    char* _v328;
    char* _v332;
    int _v336;
    char* _v340;
    int _v344;
    intOrPtr _v348;
    signed int _v352;
    intOrPtr _v356;
    _unknown_ __ebx;
    int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t310;
    int _t311;
    int _t315;
    signed int _t317;
    _unknown_ _t319;
    int _t322;
    int _t323;
    _unknown_ _t338;
    token_type* _t339;
    int* _t340;
    _unknown_ _t341;
    int _t349;
    _unknown_ _t350;
    int* _t352;
    token_type* _t356;
    token_type* _t357;
    union kind_list _t358;
    _unknown_ _t362;
    int _t373;
    int _t379;
    int _t382;
    _unknown_ _t394;
    signed int _t396;
    signed int _t403;
    _unknown_ _t408;
    signed int _t410;
    signed int _t417;
    intOrPtr _t428;
    int _t431;
    _unknown_ _t434;
    signed int _t435;
    int* _t436;
    _unknown_ _t441;
    signed int _t443;
    int* _t448;
    token_type* _t455;
    _unknown_ _t462;
    int _t463;
    _unknown_ _t470;
    _unknown_ _t474;
    _unknown_ _t479;
    _unknown_ _t502;
    int _t505;
    token_type* _t506;
    signed int _t508;
    int _t512;

    _v256 = __eax;
    _v268 = __edx;
    _v276 = __ecx;
    _t310 = op;
    _v264 = _t310;
    _v272 = operandp;
    _t506 = side1p;
    _v32 =  *gs:0x14];
    _t311 =  *_t310;
    _v260 = _t311;
    if(_t311 != prev_n1 || _t506->kind != prev_n2) {
        prev_n1 = _v260;
        prev_n2 = _t506->kind;
        repeat_count = 0;
L6:
        __eflags = _v256 - 1 - 5;
        if(_v256 - 1 > 5) {
            goto L92;
        }
    } else {
        _t431 = repeat_count + 1;
        repeat_count = _t431;
        if(_t431 <= 2) {
            goto L6;
        }
        _t512 = debug_level;
        if(_t512 <= 0) {
L92:
            _t315 = 0;
        } else {
            _v336 = "Infinite loop aborted in solve routine.";
            _v340 = 134686589;
            _v344 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t315 = 0;
        }
L93:
        if(_t512 == 0) {
            return _t315;
        }
        __stack_chk_fail();
        return _t315;
    }
L7:
    _t505 = _v276 + (_v260 << 4);
    _t434 = _v268 + 16;
    __eflags = _t505 - _t434;
    if(_t505 <= _t434) {
L15:
        _t317 = _t434 - _v268;
        _v288 = _t317;
        _v280 = _t317 >> 4;
        __eflags = _v256 - 6;
        _v281 = __eflags == 0;
        if(__eflags != 0) {
L22:
            __eflags = _v256 - 5;
            if(_v256 != 5) {
L27:
                __eflags = debug_level;
                if(debug_level <= 0) {
L53:
                    _t463 = n_tokens;
                    _t319 =  *_v264;
                    _t443 = _v280;
                    __eflags = _t443 + _t319 + 3 - _t463;
                    if(_t443 + _t319 + 3 > _t463) {
L55:
                        error_huge();
                        goto L56;
                    }
                    goto L54;
L56:
                    _t322 = min_level(_v276, _v260);
                    __eflags = _t322 - 1;
                    if(_t322 > 1) {
L60:
                        _t435 = _t506->kind;
                        _t323 = min_level(_v272, _t435);
                        __eflags = _t323 - 1;
                        if(_t323 > 1) {
L64:
                            __eflags = _v256 - 6;
                            if(_v256 > 6) {
L73:
                                _v340 =  *_v264 - _v260 << 4;
                                _v344 = _t505;
                                 *__esp = _v272 + (_t506->kind << 4);
                                L080491C4();
                                _t506->kind = _t506->kind +  *_v264 - _v260;
                                __eflags = _v281;
                                if(_v281 == 0) {
L90:
                                    _t315 = 1;
                                    __eflags = _v256 - 5 - 1;
                                    if(_v256 - 5 <= 1) {
L91:
                                         *_v264 = _v268 - 16 - _v276 >> 4;
                                        _t315 = 1;
                                    }
                                    goto L93;
                                }
                                goto L74;
                            }
                            goto L65;
L74:
                            __eflags = _v280 - 1;
                            if(_v280 != 1) {
                                goto L90;
                            }
                            __eflags =  *_v268;
                            if(__eflags != 0) {
                                goto L90;
                            }
                            _v336 =  &_v148;
                            _v340 =  &_v140;
                            asm("fld qword [ecx+0x8]");
                            asm("fstp qword [esp]");
                            f_to_fraction();
                            asm("fld qword [ebp+0xffffff78]");
                            asm("fld dword [0x8072058]");
                            asm("fld st0, st1");
                            while(1) {
L77:
                                asm("fprem ");
                                asm("fnstsw ax");
                                asm("sahf ");
                                if(__eflags == 0) {
                                    break;
                                }
                            }
                            asm("fstp st1");
                            asm("fucomi st0, st0");
                            if(__eflags != 0) {
                                asm("fstp st0");
                                goto L82;
                            }
                            if(__eflags == 0) {
                                asm("fstp st1");
                                goto L84;
                            }
                            asm("fstp st0");
                            asm("o16 nop ");
                            goto L82;
L84:
                            asm("fldz ");
                            asm("fxch st0, st1");
                            asm("fucomip st0, st1");
                            asm("fstp st0");
                            if(__eflags != 0 || __eflags != 0) {
                                goto L90;
                            } else {
                                _t470 = _v272 + (_t506->kind << 4);
                                _t339 = _v272;
                                _t448 = _t339;
                                __eflags = _t339 - _t470;
                                if(_t339 >= _t470) {
L89:
                                    _t448[1] = 1;
                                     *_t448 = 2;
                                    _t448[2] = 3;
                                    _t340 =  &(_t448[4]);
                                    _t340[1] = 1;
                                     *_t340 = 1;
                                    next_sign( &(_t448[6]));
                                    _t506->kind = _t506->kind + 2;
                                    goto L90;
                                } else {
                                    goto L87;
                                }
                                while(1) {
L87:
                                    _t339->level = _t339->level + 1;
                                    _t339 = _t339 + 16;
                                    __eflags = _t470 - _t339;
                                    if(_t470 <= _t339) {
                                        break;
                                    }
                                }
                                _t448 = _v272 + ( !_v272 + _t470 & 240) + 16;
                                goto L89;
                            }
                            goto L91;
L82:
                            asm("fld dword [0x8072058]");
                            asm("fstp qword [esp+0x8]");
                            asm("fstp qword [esp]");
                            fmod();
                            goto L84;
                        }
                        goto L61;
L65:
                        switch( *((intOrPtr*)(_v256 * 4 +  &M08072758))) {
                            case 0:
                                (4)[_t505] = 1;
                                 *_t505 = 2;
                                 *(_t505 + 8) = 1;
                                _t436 = _t505 + 16;
                                _t436[1] = 2;
                                 *_t436 = 1;
                                _v324 = last_int_var;
                                _v328 = "integer";
                                _v332 = "%s%.0d";
                                _v336 = 100;
                                _v340 = 1;
                                _v344 = 100;
                                 *__esp =  &_v132;
                                __snprintf_chk();
                                _t349 = parse_var(_t505 + 24,  &_v132);
                                __eflags = _t349;
                                if(_t349 == 0) {
                                    goto L92;
                                }
                                _t474 = last_int_var + 1;
                                _t351 = _t474 >= 0 ? _t474 : 0;
                                last_int_var = _t474 >= 0 ? _t474 : 0;
                                _t352 =  &(_t436[4]);
                                _t352[1] = 2;
                                 *_t352 = 2;
                                _t352[2] = 3;
                                _v340 = _v288;
                                _v344 = _v268;
                                 *__esp =  &(_t436[8]);
                                L080491C4();
                                 *_v264 = _v280 +  *_v264 + 3;
                                goto L73;
                            case 1:
                                (__edi)[1] = 1;
                                 *__edi = 2;
                                (__edi)[2] = 6;
                                __eax =  &((__edi)[4]);
                                __eax->_IO_read_ptr = 2;
                                __eax->_flags = 0;
                                asm("fld1 ");
                                asm("fstp qword [eax+0x8]");
                                __eax =  &((__edi)[8]);
                                __eax->_IO_read_ptr = 2;
                                __eax->_flags = 2;
                                __eax->_IO_read_end = 4;
                                __eax = _v288;
                                _v340 = _v288;
                                __edx = _v268;
                                _v344 = _v268;
                                __eax =  &((__edi)[0xc]);
                                 *__esp =  &((__edi)[0xc]);
                                L080491C4();
                                __ecx = _v264;
                                __eax =  *__ecx;
                                __edx = _v280;
                                __eax =  &( *__ecx->_flags) + _v280;
                                 *__ecx =  &( *__ecx->_flags) + _v280;
                                goto L73;
                            case 2:
                                (__edi)[1] = 1;
                                 *__edi = 2;
                                (__edi)[2] = 4;
                                __ecx = _v288;
                                _v340 = _v288;
                                __eax = _v268;
                                _v344 = _v268;
                                __eax =  &((__edi)[4]);
                                 *__esp =  &((__edi)[4]);
                                L080491C4();
                                __edx = _v264;
                                __eax =  *__edx;
                                __ecx = _v280;
                                __eax =  &( *__edx->_flags) + _v280;
                                 *__edx =  &( *__edx->_flags) + _v280;
                                goto L73;
                            case 3:
                                (__edi)[1] = 1;
                                 *__edi = 2;
                                (__edi)[2] = 3;
                                __eax = _v288;
                                _v340 = _v288;
                                __edx = _v268;
                                _v344 = _v268;
                                __eax =  &((__edi)[4]);
                                 *__esp =  &((__edi)[4]);
                                L080491C4();
                                __ecx = _v264;
                                __eax =  *__ecx;
                                __edx = _v280;
                                __eax =  &( *__ecx->_flags) + _v280;
                                 *__ecx =  &( *__ecx->_flags) + _v280;
                                goto L73;
                            case 4:
                                (__edi)[1] = 1;
                                 *__edi = 2;
                                (__edi)[2] = 2;
                                __ecx = _v288;
                                _v340 = _v288;
                                __eax = _v268;
                                _v344 = _v268;
                                __eax =  &((__edi)[4]);
                                 *__esp =  &((__edi)[4]);
                                L080491C4();
                                __edx = _v264;
                                __eax =  *__edx;
                                __ecx = _v280;
                                __eax =  &( *__edx->_flags) + _v280;
                                 *__edx =  &( *__edx->_flags) + _v280;
                                goto L73;
                            case 5:
                                (__edi)[1] = 1;
                                 *__edi = 2;
                                (__edi)[2] = 1;
                                __eax = _v288;
                                _v340 = _v288;
                                __edx = _v268;
                                _v344 = _v268;
                                __eax =  &((__edi)[4]);
                                 *__esp =  &((__edi)[4]);
                                L080491C4();
                                __ecx = _v264;
                                __eax =  *__ecx;
                                __edx = _v280;
                                __eax =  &( *__ecx->_flags) + _v280;
                                 *__ecx =  &( *__ecx->_flags) + _v280;
                                goto L73;
                            case 6:
                                goto L73;
                        }
                    }
L57:
                    __eflags = _v276 - _t505;
                    if(_v276 >= _t505) {
                        goto L60;
                    }
                    _t357 = _v276;
                    while(1) {
L59:
                        _t357->level = _t357->level + 1;
                        _t357 = _t357 + 16;
                        __eflags = _t505 - _t357;
                        if(_t505 <= _t357) {
                            break;
                        }
                    }
                    goto L60;
L61:
                    _t479 = _v272 + (_t435 << 4);
                    __eflags = _v272 - _t479;
                    if(_v272 >= _t479) {
                        goto L64;
                    }
                    _t356 = _v272;
                    while(1) {
L63:
                        _t356->level = _t356->level + 1;
                        _t356 = _t356 + 16;
                        __eflags = _t479 - _t356;
                        if(_t479 <= _t356) {
                            break;
                        }
                    }
                    goto L64;
                }
                goto L28;
L54:
                _t358 = _t506->kind;
                __eflags = _t463 - _t443 + _t358 + 5;
                if(_t463 >= _t443 + _t358 + 5) {
                    goto L56;
                }
                goto L55;
            }
            goto L23;
L28:
            __eflags = _v256 - 6;
            if(_v256 > 6) {
L36:
                __eflags = _v281;
                if(_v281 == 0) {
L40:
                    _v340 = 134686466;
                    _v344 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    __eflags = _v281;
                    if(_v281 != 0) {
                        _v340 = "1/(";
                        _v344 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                    }
                    list_proc(_v268, _v280, 0);
                    __eflags = _v256 - 2;
                    if(_v256 == 2) {
L50:
                        _v340 = "" to both sides of the equation:\n";
                        _v344 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                        goto L53;
                    }
                    __eflags = _v256 - 2;
                    if(_v256 > 2) {
                        __eflags = _v256 - 5;
                        if(_v256 == 5) {
                            goto L50;
                        }
                        goto L47;
                    }
                    __eflags = _v256 - 1;
                    if(_v256 != 1) {
L52:
                        _v340 = "":\n";
                        _v344 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                        goto L53;
                    }
                    _v340 = "" from both sides of the equation:\n";
                    _v344 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L53;
L47:
                    __eflags = _v256 - 6;
                    if(_v256 == 6) {
                        _v340 = 134707624;
                        _v344 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                    }
                    goto L52;
                }
                goto L37;
            }
            switch( *((intOrPtr*)(_v256 * 4 +  &M0807273C))) {
                case 0:
                    _v340 = "Subtracting";
                    _v344 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L36;
                case 1:
                    _v340 = "Adding";
                    _v344 = 1;
                    __eax = gfp;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L36;
                case 2:
                    _v340 = "Dividing both sides of the equation by";
                    _v344 = 1;
                    __eax = gfp;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L36;
                case 3:
                    _v340 = "Multiplying both sides of the equation by";
                    _v344 = 1;
                    __eax = gfp;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L36;
                case 4:
                    _v340 = "Raising both sides of the equation to the power of";
                    _v344 = 1;
                    __eax = gfp;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L36;
                case 5:
                    _v340 = "Applying inverse modulus of";
                    _v344 = 1;
                    __eax = gfp;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L36;
                case 6:
                    goto L36;
            }
L37:
            __eflags = _v280 - 1;
            if(_v280 != 1) {
                goto L40;
            }
            __eflags =  *_v268;
            if( *_v268 != 0) {
                goto L40;
            }
            asm("fld1 ");
            asm("fdiv qword [ecx+0x8]");
            asm("fstp qword [esp+0x10]");
            _v336 = precision;
            _v340 = " %.*g:\n";
            _v344 = 1;
             *__esp = gfp;
            __fprintf_chk();
            goto L53;
        }
        goto L16;
L23:
        _t373 = get_constant(_v272, _t506->kind,  &_v156);
        __eflags = _t373;
        if(_t373 == 0) {
            goto L27;
        }
        __eflags = get_constant(_v268, _v280,  &_v164);
        if(__eflags == 0) {
            goto L27;
        }
        asm("fld qword [ebp+0xffffff68]");
        asm("fabs ");
        asm("fld qword [ebp+0xffffff60]");
        asm("fabs ");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags < 0) {
            goto L27;
        }
        error("There are no possible solutions.");
        _t315 = 0;
        goto L93;
    }
    goto L9;
    do {
L9:
        __eflags =  *((intOrPtr*)(_t434 + 4)) - 1;
        if( *((intOrPtr*)(_t434 + 4)) != 1) {
            goto L14;
        }
        _t428 =  *((intOrPtr*)(_t434 + 8));
        __eflags = _t428 - 5;
        if(_t428 == 5) {
            _v268 = _t434 + 16;
            goto L14;
        }
        __eflags = _t428 - 7;
        if(_t428 != 7) {
            goto L15;
        }
        _v256 = 1;
        goto L14;
L14:
        _t434 = _t434 + 32;
        __eflags = _t505 - _t434;
    } while(_t505 > _t434);
    goto L15;
L16:
    __eflags = _v268 - _v276;
    if(_v268 != _v276) {
        goto L22;
    }
    _t379 = parse_complex(_v272, _t506->kind,  &_v180);
    __eflags = _t379;
    if(_t379 == 0) {
        goto L92;
    }
    _t382 = parse_complex(_v268, _v280,  &_v196);
    __eflags = _t382;
    if(_t382 == 0) {
        goto L92;
    }
    __eflags = debug_level;
    if(debug_level > 0) {
        _v336 = "Taking logarithm of both equation sides:";
        _v340 = 134686589;
        _v344 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
     *(__errno_location()) = 0;
    _v344 = _v196;
    _v340 = _v192;
    _v336 = _v188;
    _v332 = _v184;
     *__esp =  &_v212;
    complex_log();
    __esp = __esp - 4;
    _v348 = _v180;
    _v344 = _v176;
    _v340 = _v172;
    _v336 = _v168;
     *__esp =  &_v228;
    complex_log();
    __esp = __esp - 4;
    _v336 = _v212;
    _v332 = _v208;
    _v328 = _v204;
    _v324 = _v200;
    _v352 = _v228;
    _v348 = _v224;
    _v344 = _v220;
    _v340 = _v216;
     *__esp =  &_v252;
    complex_div();
    __esp = __esp - 4;
    _v180 = _v252;
    _v176 = _v248;
    _v172 = _v252.im;
    _v168 = _v240;
    _t506->kind = 0;
    _t455 = _v272;
    _t455->level = 1;
     *(_t455 + (_t506->kind << 4)) = 0;
    asm("fld qword [ebp+0xffffff50]");
    asm("fstp qword [eax+ecx+0x8]");
    _t396 = _t506->kind + 1;
    _t506->kind = _t396;
     *( &(_t455->level) + (_t396 << 4)) = 1;
     *(_t455 + (_t506->kind << 4)) = 2;
     *((_t506->kind << 4) + _t455 + 8) = 1;
    _t403 = _t506->kind + 1;
    _t506->kind = _t403;
     *( &(_t455->level) + (_t403 << 4)) = 2;
     *(_t455 + (_t506->kind << 4)) = 0;
    asm("fld qword [ebp+0xffffff58]");
    asm("fstp qword [eax+ecx+0x8]");
    _t410 = _t506->kind + 1;
    _t506->kind = _t410;
     *( &(_t455->level) + (_t410 << 4)) = 2;
     *(_t455 + (_t506->kind << 4)) = 2;
     *((_t506->kind << 4) + _t455 + 8) = 3;
    _t417 = _t506->kind + 1;
    _t506->kind = _t417;
     *( &(_t455->level) + (_t417 << 4)) = 2;
     *(_t455 + (_t506->kind << 4)) = 1;
     *((_t506->kind << 4) + _t455 + 8) = 3;
    _t506->kind =  *_t506 + 1;
    _t508 =  !_v280;
    _v352 = _t508 +  *_v264 << 4;
    _v356 = _t434 + 16;
     *__esp = _v276;
    L080491C4();
     *_v264 =  *_v264 + _t508;
    check_err();
    _t315 = 1;
    goto L93;
}

int quad_solve(long int v)
{// addr = 0x0804C1C3
    int i;
    int j;
    token_type* p1;
    token_type* p2;
    token_type* ep;
    token_type* x1p;
    token_type* x2p;
    token_type* a1p;
    token_type* a2p;
    token_type* a2ep;
    token_type* b2p;
    token_type* x1tp;
    token_type[99] x1_storage;
    int op;
    int op2;
    int opx1;
    int opx2;
    int found;
    int diff_sign;
    int len;
    int alen;
    int nx1;
    double high_power;
    _unknown_ _v32;
    _unknown_ _v1632;
    _unknown_ _v1652;
    intOrPtr _v1656;
    intOrPtr _v1660;
    intOrPtr _v1664;
    intOrPtr _v1668;
    _unknown_ _v1672;
    _unknown_ _v1676;
    int _v1680;
    intOrPtr _v1684;
    intOrPtr _v1688;
    intOrPtr _v1692;
    intOrPtr _v1696;
    _unknown_ _v1700;
    _unknown_ _v1704;
    _unknown_ _v1716;
    _unknown_ _v1724;
    _unknown_ _v1728;
    intOrPtr _v1732;
    int* _v1736;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t350;
    token_type* _t355;
    _unknown_ _t357;
    _unknown_ _t360;
    _unknown_ _t363;
    _unknown_ _t364;
    _unknown_ _t368;
    _unknown_ _t369;
    _unknown_ _t375;
    _unknown_ _t376;
    _unknown_ _t380;
    _unknown_ _t393;
    _unknown_ _t399;
    _unknown_ _t404;
    _unknown_ _t408;
    _unknown_ _t419;
    _unknown_ _t420;
    _unknown_ _t426;
    _unknown_ _t428;
    _unknown_ _t430;
    _unknown_ _t432;
    _unknown_ _t434;
    _unknown_ _t437;
    _unknown_ _t439;
    _unknown_ _t441;
    _unknown_ _t444;
    _unknown_ _t446;
    _unknown_ _t448;
    _unknown_ _t457;
    _unknown_ _t463;
    _unknown_ _t469;
    _unknown_ _t475;
    _unknown_ _t481;
    _unknown_ _t483;
    _unknown_ _t484;
    _unknown_ _t485;
    _unknown_ _t486;
    _unknown_ _t487;
    _unknown_ _t490;
    _unknown_ _t498;
    _unknown_ _t502;
    intOrPtr _t506;
    _unknown_ _t507;
    _unknown_ _t509;
    _unknown_ _t511;
    _unknown_ _t513;
    _unknown_ _t514;
    _unknown_ _t515;
    _unknown_ _t517;
    _unknown_ _t518;
    _unknown_ _t519;
    _unknown_ _t520;
    _unknown_ _t521;
    _unknown_ _t523;
    _unknown_ _t524;
    _unknown_ _t527;
    _unknown_ _t528;
    _unknown_ _t537;
    _unknown_ _t540;
    _unknown_ _t546;
    _unknown_ _t547;
    _unknown_ _t563;
    _unknown_ _t564;
    _unknown_ _t567;
    _unknown_ _t570;
    _unknown_ _t573;
    _unknown_ _t576;
    _unknown_ _t579;
    _unknown_ _t581;
    _unknown_ _t583;
    _unknown_ _t585;
    _unknown_ _t587;
    _unknown_ _t592;
    _unknown_ _t598;
    _unknown_ _t607;
    _unknown_ _t613;
    _unknown_ _t617;
    _unknown_ _t622;
    _unknown_ _t630;
    _unknown_ _t634;
    _unknown_ _t635;
    _unknown_ _t636;
    _unknown_ _t638;
    _unknown_ _t639;
    _unknown_ _t640;
    token_type* _t641;
    _unknown_ _t642;
    _unknown_ _t644;
    _unknown_ _t645;
    _unknown_ _t647;
    _unknown_ _t649;
    _unknown_ _t650;
    _unknown_ _t651;
    _unknown_ _t653;
    _unknown_ _t654;
    _unknown_ _t655;
    _unknown_ _t657;

    _v1668 = __eax;
    uf_simp(trhs,  &n_trhs);
    _t506 = _v1668;
    while(1) {
        asm("fldz ");
        asm("fstp qword [esp+0xc]");
        _v1732 = _t506;
        _v1736 =  &n_trhs;
         *__esp = trhs;
        if(factor_plus() != 0) {
            simp_loop(trhs,  &n_trhs);
            continue;
        } else {
            list_debug(1, tlhs, n_tlhs, trhs, n_trhs);
            _t355 = trhs;
            _v1660 = _t355 + (n_trhs << 4);
            _t641 = _t355;
            asm("fldz ");
            _v1664 = 0;
            _v1656 = 0;
            _v1696 = 0;
            _v1692 = 0;
            _v1688 = 0;
            _v1684 = 0;
            _v1680 = 1;
            goto L4;
        }
    }
}

int solve_sub(token_type* wantp, int wantn, token_type* leftp, int* leftnp, token_type* rightp, int* rightnp)
{// addr = 0x0804D01A
    int i;
    int j;
    int found;
    int found_count;
    int worked;
    int diff_sign;
    int op;
    int op_kind;
    token_type* p1;
    token_type* b1;
    token_type* ep;
    long int v;
    int need_flip;
    int uf_flag;
    int qtries;
    int zflag;
    int zsolve;
    int inc_count;
    int zero_solved;
    double numerator;
    double denominator;
    int success;
    _unknown_ _v32;
    _unknown_ _v44;
    _unknown_ _v52;
    int _v64;
    _unknown_ _v76;
    long int _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    int _v96;
    int _v100;
    int _v104;
    _unknown_ _v108;
    int _v112;
    int _v116;
    _unknown_ _v128;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v160;
    signed int _v164;
    token_type* _v168;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t491;
    signed int _t494;
    int _t498;
    _unknown_ _t500;
    _unknown_ _t502;
    _unknown_ _t516;
    _unknown_ _t519;
    _unknown_ _t523;
    _unknown_ _t524;
    _unknown_ _t528;
    _unknown_ _t529;
    _unknown_ _t539;
    _unknown_ _t540;
    _unknown_ _t541;
    _unknown_ _t546;
    _unknown_ _t551;
    _unknown_ _t552;
    _unknown_ _t553;
    _unknown_ _t559;
    _unknown_ _t561;
    _unknown_ _t566;
    _unknown_ _t567;
    _unknown_ _t568;
    _unknown_ _t569;
    _unknown_ _t574;
    _unknown_ _t576;
    _unknown_ _t577;
    _unknown_ _t579;
    _unknown_ _t581;
    _unknown_ _t583;
    _unknown_ _t585;
    _unknown_ _t600;
    _unknown_ _t601;
    _unknown_ _t616;
    _unknown_ _t624;
    _unknown_ _t625;
    _unknown_ _t626;
    _unknown_ _t631;
    _unknown_ _t632;
    _unknown_ _t644;
    _unknown_ _t645;
    _unknown_ _t646;
    _unknown_ _t647;
    _unknown_ _t648;
    _unknown_ _t649;
    _unknown_ _t650;
    _unknown_ _t651;
    _unknown_ _t672;
    _unknown_ _t675;
    _unknown_ _t677;
    _unknown_ _t682;
    _unknown_ _t683;
    _unknown_ _t690;
    _unknown_ _t693;
    _unknown_ _t694;
    _unknown_ _t696;
    _unknown_ _t697;
    _unknown_ _t699;
    int _t703;
    int _t706;
    _unknown_ _t708;
    _unknown_ _t709;
    _unknown_ _t710;
    _unknown_ _t711;
    _unknown_ _t714;
    _unknown_ _t715;
    _unknown_ _t718;
    _unknown_ _t719;
    _unknown_ _t720;
    _unknown_ _t721;
    _unknown_ _t722;
    _unknown_ _t723;
    _unknown_ _t724;
    _unknown_ _t726;
    _unknown_ _t728;
    _unknown_ _t733;
    _unknown_ _t735;
    _unknown_ _t737;
    _unknown_ _t740;
    _unknown_ _t741;
    _unknown_ _t742;
    _unknown_ _t743;
    _unknown_ _t744;
    _unknown_ _t746;
    _unknown_ _t747;
    _unknown_ _t748;
    _unknown_ _t750;
    _unknown_ _t752;
    _unknown_ _t753;
    _unknown_ _t755;
    _unknown_ _t756;
    _unknown_ _t760;
    _unknown_ _t761;
    _unknown_ _t764;
    _unknown_ _t765;
    _unknown_ _t766;
    int _t769;
    _unknown_ _t770;
    _unknown_ _t771;
    _unknown_ _t772;
    _unknown_ _t774;
    _unknown_ _t775;
    _unknown_ _t776;
    _unknown_ _t781;
    _unknown_ _t786;
    _unknown_ _t787;
    _unknown_ _t791;
    _unknown_ _t792;
    _unknown_ _t793;
    _unknown_ _t794;
    _unknown_ _t795;
    _unknown_ _t798;
    _unknown_ _t799;
    _unknown_ _t800;
    _unknown_ _t802;
    _unknown_ _t805;
    _unknown_ _t808;
    _unknown_ _t809;
    _unknown_ _t810;
    _unknown_ _t812;
    _unknown_ _t815;
    _unknown_ _t816;
    _unknown_ _t821;
    _unknown_ _t823;
    _unknown_ _t825;
    _unknown_ _t826;
    _unknown_ _t828;
    _unknown_ _t829;
    _unknown_ _t831;
    _unknown_ _t832;
    _unknown_ _t833;
    long int _t834;
    token_type* _t835;
    _unknown_ _t837;
    _unknown_ _t838;
    _unknown_ _t840;
    _unknown_ _t842;
    _unknown_ _t843;
    _unknown_ _t846;
    _unknown_ _t847;
    _unknown_ _t848;
    _unknown_ _t851;
    _unknown_ _t852;
    _unknown_ _t853;
    int _t855;
    _unknown_ _t860;
    _unknown_ _t861;
    _unknown_ _t862;
    _unknown_ _t863;
    _unknown_ _t865;
    _unknown_ _t866;
    _unknown_ _t867;
    _unknown_ _t868;
    _unknown_ _t869;
    _unknown_ _t870;
    _unknown_ _t874;
    _unknown_ _t875;
    _unknown_ _t876;
    _unknown_ _t877;
    _unknown_ _t878;

    repeat_count = 0;
    _t491 =  *leftnp;
    n_tlhs = _t491;
    _v164 = _t491 << 4;
    _v168 = leftp;
     *__esp = tlhs;
    L080491C4();
    _t494 =  *rightnp;
    n_trhs = _t494;
    _v164 = _t494 << 4;
    _v168 = rightp;
     *__esp = trhs;
    L080491C4();
    __eflags = wantn - 1;
    if(wantn != 1) {
        error("This program will only solve for a single variable or for zero.");
        _v100 = 0;
        return _v100;
    }
    __eflags = n_tlhs;
    if(n_tlhs <= 0) {
L4:
        error("Please enter an equation or a command like "help".");
        _v100 = 0;
        return _v100;
    }
    _t498 = n_trhs;
    __eflags = _t498;
    if(_t498 > 0) {
        _t835 = wantp;
        _t769 = _t835->kind;
        __eflags = _t769 - 1;
        if(_t769 != 1) {
            __eflags = _t769;
            if(__eflags != 0) {
L13:
                error("This program will only solve for a single variable or for zero.");
                _v100 = 0;
                return _v100;
            }
            asm("fld qword [ebx+0x8]");
            asm("fldz ");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags != 0) {
                goto L13;
            }
            if(__eflags != 0) {
                goto L13;
            } else {
                _v64 = 1;
                _v80 = 0;
            }
        } else {
            _t834 =  *(_t835 + 8);
            _v80 = _t834;
            _t703 = found_var(trhs, _t498, _t834);
            __eflags = _t703;
            if(_t703 == 0) {
                _t706 = found_var(tlhs, n_tlhs, _v80);
                __eflags = _t706;
                if(_t706 == 0) {
                    error("Variable not found.");
                    _v100 = 0;
                    return _v100;
                }
            }
            _v64 = 0;
        }
L15:
        uf_power(tlhs,  &n_tlhs);
        uf_power(trhs,  &n_trhs);
        _v100 = 1;
        _v112 = 0;
        _v116 = 0;
        _v104 = 0;
        _v96 = 0;
        while(1) {
            list_debug(2, tlhs, n_tlhs, trhs, n_trhs);
            _t855 = _v64;
            simps_side(tlhs,  &n_tlhs, _t855);
            __eflags = _v96;
            if(_v96 == 0) {
                simps_side(trhs,  &n_trhs, _v64);
            } else {
                simp_loop(trhs,  &n_trhs);
                uf_simp(trhs,  &n_trhs);
                factorv(trhs,  &n_trhs, _v80);
            }
            goto L21;
        }
    }
    goto L4;
}

int solve_espace(int want, int have)
{// addr = 0x0804E68E
    int rv;
    intOrPtr _v24;
    intOrPtr _v28;
    intOrPtr _v32;
    intOrPtr _v36;
    char* _v40;
    signed int __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t48;
    _unknown_ _t57;
    token_type*[99]* _t59;
    char* _t60;
    _unknown_ _t61;
    token_type*[99]* _t63;
    signed int _t64;

    __ebx = want;
    _t48 = have;
    _t60 =  *( &n_lhs + __ebx * 4);
    if(_t60 == 0) {
        _t61 = 0 + _t48 * 4;
        _v24 = _t61 +  &n_lhs;
        _v28 =  *((intOrPtr*)( &lhs + _t48 * 4));
        _v32 = _t61 +  &n_rhs;
        _t63 =  &rhs;
        _v36 =  *((intOrPtr*)(_t63 + _t48 * 4));
        _v40 =  *( &n_rhs + __ebx * 4);
         *__esp =  *((intOrPtr*)(_t63 + __ebx * 4));
        _t48 = solve_sub();
        _t64 = _t48;
        goto L5;
    }
    if( *( &n_rhs + __ebx * 4) == 0) {
        _t57 = 0 + _t48 * 4;
        _v24 = _t57 +  &n_rhs;
        _v28 =  *((intOrPtr*)( &rhs + _t48 * 4));
        _v32 = _t57 +  &n_lhs;
        _t59 =  &lhs;
        _v36 =  *((intOrPtr*)(_t59 + _t48 * 4));
        _v40 = _t60;
         *__esp =  *((intOrPtr*)(_t59 + __ebx * 4));
        _t48 = solve_sub();
        _t64 = _t48;
        goto L5;
    } else {
        error("This program will only solve for a single variable or for zero.");
         *( &n_lhs + __ebx * 4) = 0;
         *( &n_rhs + __ebx * 4) = 0;
        _t64 = 0;
    }
L6:
    _v40 = "Solve failed.\n";
     *__esp = 1;
    __printf_chk();
    return _t48 & 4294967295 & ;
L5:
     *( &n_lhs + __ebx * 4) = 0;
     *( &n_rhs + __ebx * 4) = 0;
    if(_t64 > 0) {
        return _t48 & 4294967295 & ;
    }
    goto L6;
}

int display_command(int i)
{// addr = 0x0804E7B0
    int rows;
    intOrPtr _v32;
    intOrPtr _v60;
    intOrPtr _v64;
    char* _v68;
    intOrPtr _v72;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t50;
    intOrPtr _t52;
    _unknown_ _t57;
    com_type[41]* _t59;
    int _t60;

    __ebx = i;
    _t59 =  &com_list;
    _t57 = __ebx + __ebx;
    _v32 =  *((intOrPtr*)(_t59 + (_t57 + __ebx) * 8));
    _v60 =  *((intOrPtr*)(134696336 + (_t57 + __ebx) * 8));
    _v64 = _v32;
    _v68 = "%s - %s\n";
    _v72 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v60 =  *((intOrPtr*)(_t59 + 12 + (_t57 + __ebx) * 8));
    _v64 = _v32;
    _v68 = "Usage: %s %s\n";
    _v72 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _t50 =  *((intOrPtr*)(_t59 + 4 + (_t57 + __ebx) * 8));
    _t60 = 3;
    if(_t50 != 0) {
        _v64 = _t50;
        _v68 = "Alternate name for this command: %s\n";
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    _t52 =  *((intOrPtr*)(134696340 + (__ebx + __ebx * 2) * 8));
    if(_t52 != 0) {
        _v64 = _t52;
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _t60 = _t60 + 1;
    }
    _v68 = 134699005;
    _v72 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return _t60;
}

char* parse_var2(long int* vp, char* cp)
{// addr = 0x0804E8BB
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t8;

    __edx = parse_var(vp, skip_space(cp));
    if(__edx == 0) {
        return 0;
    }
    return skip_space(__edx);
}

int shell_out(char* cp)
{// addr = 0x0804E8F0
    int rv;
    intOrPtr _v24;
    int __ebx;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t8;

    if(security_level != 0) {
        error_bug("Shelling out disabled.");
    }
    reset_attr();
     *(__errno_location()) = 0;
    __ebx = system(cp);
    _v24 = 134699005;
     *__esp = 1;
    __printf_chk();
    if(__ebx < 0) {
        perror("system(3) call failed");
    }
    default_color();
    return __ebx;
}

int parse(int n, char* cp)
{// addr = 0x0804E95A
    _unknown_ _v24;
    int __ebx;
    _unknown_ __ebp;
    _unknown_ _t21;
    _unknown_ _t23;
    union kind_list* _t24;

    __ebx = n;
    if(parse_equation(__ebx, cp) == 0) {
         *( &n_lhs + __ebx * 4) = 0;
         *( &n_rhs + __ebx * 4) = 0;
        return 0;
    }
    if( *( &n_lhs + __ebx * 4) == 0) {
        if( *( &n_rhs + __ebx * 4) == 0) {
            return 1;
        }
         *( &n_lhs + __ebx * 4) = 1;
        _t24 =  *( &lhs + __ebx * 4);
         *_t24 = zero_token.kind;
        _t24[1] =  *134715672;
        _t24[2] =  *134715676;
        _t24[3] =  *134715680;
    }
    cur_equation = __ebx;
    return return_result(__ebx);
    return 1;
}

int process_parse(int n, char* cp)
{// addr = 0x0804E9F6
    int i;
    char* cp1;
    char* ep;
    int equals_flag;
    const unsigned char* __s1;
    signed short _v30;
    signed int _v32;
    int _v36;
    signed int _v40;
    signed int _v44;
    char* _v48;
    signed int _v52;
    token_type* _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t113;
    char* _t114;
    _unknown_ _t115;
    int _t116;
    int _t118;
    token_type*[99]* _t119;
    _unknown_ _t122;
    _unknown_ _t123;
    _unknown_ _t124;
    int _t126;
    _unknown_ _t133;
    int _t135;
    _unknown_ _t136;
    _unknown_ _t137;
    token_type* _t138;
    int _t140;
    _unknown_ _t141;
    char* _t144;
    _unknown_ _t145;
    signed int _t146;
    signed int _t147;
    signed int _t148;
    signed int _t151;
    signed int _t162;
    signed int _t163;
    token_type* _t165;
    int _t168;
    int _t175;
    int _t179;
    _unknown_ _t180;
    _unknown_ _t182;
    int[99]* _t183;
    token_type*[99]* _t184;
    int _t185;
    int[99]* _t186;
    int[99]* _t187;
    _unknown_ _t188;
    token_type*[99]* _t189;

    _t162 = n;
    _t185 = cp;
    _t114 = parse_equation(_t162, _t185);
    if(_t114 == 0) {
L65:
         *( &n_lhs + _t162 * 4) = 0;
         *( &n_rhs + _t162 * 4) = 0;
        return 0;
    }
    if(_t185 >= _t114) {
L8:
        _t168 = 0;
        goto L9;
    }
    _t179 = _t185;
    if( *_t185 != 61) {
        while(1) {
L5:
            _t179 = _t179 + 1;
            __eflags = _t114 - _t179;
            if(_t114 <= _t179) {
                break;
            }
            __eflags =  *_t179 - 61;
            if( *_t179 == 61) {
L7:
                _t168 = 1;
                goto L9;
            }
        }
        goto L8;
    }
    goto L7;
L9:
    _t116 =  *( &n_lhs + _t162 * 4);
    if(_t116 != 0) {
        __eflags =  *( &n_rhs + _t162 * 4);
        if( *( &n_rhs + _t162 * 4) != 0) {
            goto L64;
        }
        goto L19;
    }
    if( *( &n_rhs + _t162 * 4) != 0) {
        goto L19;
    }
    _t144 = "=";
    if(( *_t185 & 255 & 4294967295) !=  *_t144) {
        return 1;
    }
    if(( *(_t185 + 1) & 255 & 4294967295) != _t144[1]) {
        return 1;
    }
    _t146 = cur_equation;
    if( *((intOrPtr*)( &n_lhs + _t146 * 4)) <= 0) {
        return 1;
    }
    if( *((intOrPtr*)( &n_rhs + _t146 * 4)) <= 0) {
        return 1;
    }
    if(debug_level < 0) {
        _v48 = "Swapping both sides of the current equation...";
        _v52 = 134686589;
        _v56 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    _t163 = cur_equation;
    _t183 =  &n_lhs;
    _t147 =  *(_t183 + _t163 * 4);
    _v40 = _t147;
    _t148 = _t147 << 4;
    _v44 = _t148;
    _v52 = _t148;
    _t189 =  &lhs;
    _v56 =  *(_t189 + _t163 * 4);
     *__esp = tes;
    L080491C4();
    _t151 =  *( &n_rhs + _t163 * 4);
     *(_t183 + _t163 * 4) = _t151;
    _v52 = _t151 << 4;
    _t184 =  &rhs;
    _v56 =  *(_t184 + _t163 * 4);
     *__esp =  *(_t189 + _t163 * 4);
    L080491C4();
     *( &n_rhs + _t163 * 4) = _v40;
    _v52 = _v44;
    _v56 = tes;
     *__esp =  *(_t184 + _t163 * 4);
    L080491C4();
    return return_result(cur_equation);
L20:
    __eflags = autosolve;
    if(autosolve == 0) {
L37:
        __eflags =  *( &n_rhs + _t162 * 4);
        if( *( &n_rhs + _t162 * 4) == 0) {
            goto L39;
        }
        goto L38;
    }
L21:
    __eflags = _t116 - 1;
    asm("o16 nop ");
    if(_t116 != 1) {
L29:
        __eflags =  *( &n_rhs + _t162 * 4) - 1;
        if( *( &n_rhs + _t162 * 4) != 1) {
            goto L37;
        }
        goto L30;
    }
L22:
    _t165 =  *( &lhs + _t162 * 4);
    _t185 =  *_t165;
    __eflags = _t185;
    if(__eflags != 0) {
        __eflags = _t185 - 1;
        if(_t185 != 1) {
            goto L29;
        }
        goto L27;
    }
    asm("fld qword [ecx+0x8]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if(__eflags != 0) {
        goto L29;
    }
    if(__eflags == 0) {
L35:
        _t140 = solve_espace(_t162, cur_equation);
        __eflags = _t140;
        if(_t140 == 0) {
            return 0;
        }
L36:
        return return_result(cur_equation);
    }
    asm("o16 nop ");
    goto L29;
L27:
    __eflags = ( *(_t165 + 8) & 16383) - 4;
    if(( *(_t165 + 8) & 16383) > 4) {
        goto L35;
    }
    __eflags = _t168;
    if(_t168 != 0) {
        goto L35;
    }
    goto L29;
L30:
    _t175 =  *( *( &rhs + _t162 * 4));
    __eflags = _t175;
    if(__eflags != 0) {
        __eflags = _t175 - 1;
        if(_t175 != 1) {
            goto L37;
        }
        goto L35;
    }
    asm("fld qword [ecx+0x8]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if(__eflags != 0) {
        goto L38;
    }
    if(__eflags == 0) {
        goto L35;
    }
    goto L38;
L39:
    __eflags = autoselect;
    if(autoselect == 0) {
L59:
        __eflags = autocalc;
        if(autocalc == 0) {
L64:
            cur_equation = _t162;
            return return_result(_t162);
        }
        goto L60;
    }
    __eflags = _t116 - 1;
    if(_t116 != 1) {
        goto L59;
    }
    __eflags =  *( *( &lhs + _t162 * 4));
    if(__eflags != 0) {
        goto L59;
    }
    asm("fld qword [eax+0x8]");
    asm("fld1 ");
    asm("fld st0, st1");
    while(1) {
L43:
        asm("fprem ");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags == 0) {
            break;
        }
    }
    asm("fstp st1");
    asm("fucomi st0, st0");
    if(__eflags != 0) {
        asm("fstp st0");
        goto L48;
    }
    if(__eflags == 0) {
        asm("fstp st1");
        goto L50;
    }
    asm("fstp st0");
    goto L48;
L50:
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    if(__eflags != 0) {
        asm("fstp st0");
        goto L59;
    }
    if(__eflags != 0) {
        goto L56;
    }
    asm("fld qword [eax+0x8]");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags <= 0) {
        goto L57;
    }
    asm("fild dword [0x8081a00]");
    asm("fucomip st0, st1");
    if(__eflags < 0) {
        goto L58;
    }
    asm("fsub dword [0x8075170]");
    asm("fnstcw word [ebp-0x1a]");
    _v32 = _v30 & 65535 & 4294967295;
    asm("fldcw word [ebp-0x1c]");
    asm("fistp dword [ebp-0x20]");
    asm("fldcw word [ebp-0x1a]");
    _t135 = _v36;
    cur_equation = _t135;
     *( &n_lhs + _t162 * 4) = 0;
    return_result(_t135);
    return 1;
    goto L59;
L58:
    asm("fstp st0");
    goto L59;
L57:
    asm("fstp st0");
    goto L59;
L56:
    asm("fstp st0");
    goto L59;
L48:
    asm("fld1 ");
    asm("fstp qword [esp+0x8]");
    asm("fstp qword [esp]");
    fmod();
    goto L50;
L60:
    _t118 =  *( &n_lhs + _t162 * 4);
    __eflags = _t118;
    if(_t118 == 0) {
L63:
        _t119 =  &lhs;
        ( *(_t119 + _t162 * 4))[1] = 1;
         *((int*)( *(_t119 + _t162 * 4))) = 1;
        parse_var( &(( *(_t119 + _t162 * 4))[2]), "answer");
        _t186 =  &n_lhs;
         *(_t186 + _t162 * 4) = 1;
        cur_equation = _t162;
        calculate_cmd(134699006);
        cur_equation = cur_equation;
         *(_t186 + _t162 * 4) = 0;
         *( &n_rhs + _t162 * 4) = 0;
        return 1;
    }
    _t126 = exp_is_numeric( *( &lhs + _t162 * 4), _t118);
    __eflags = _t126;
    if(_t126 == 0) {
        goto L64;
    }
    _t187 =  &n_lhs;
    _v52 =  *(_t187 + _t162 * 4) << 4;
    _v56 =  *( &lhs + _t162 * 4);
     *__esp =  *( &rhs + _t162 * 4);
    L080491C4();
     *( &n_rhs + _t162 * 4) =  *(_t187 + _t162 * 4);
    goto L63;
L38:
     *( &n_lhs + _t162 * 4) = 1;
    _t138 =  *( &lhs + _t162 * 4);
     *_t138 = zero_token.kind;
    _t138->level =  *134715672;
     *((intOrPtr*)(_t138 + 8)) =  *134715676;
     *((intOrPtr*)(_t138 + 12)) =  *134715680;
    goto L64;
L19:
    __eflags = _t168;
    if(_t168 != 0) {
        goto L21;
    }
    goto L20;
    return 1;
}

int process(char* cp)
{// addr = 0x0804EE45
    char* cp1;
    int i;
    int len;
    int rv;
    char[4095] buf2;
    int our_repeat_flag;
    FILE* fp;
    char* filename;
    int append_flag;
    int i1;
    intOrPtr _v32;
    char _v4128;
    char* _v4132;
    char* _v4144;
    signed int _v4148;
    int _v4152;
    int _v4156;
    int _v4160;
    char* _v4164;
    char* _v4168;
    char* _v4172;
    intOrPtr _v4176;
    char* _v4180;
    char* _v4184;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t119;
    signed int _t121;
    signed int _t122;
    char* _t123;
    char* _t124;
    _unknown_ _t125;
    char _t126;
    _unknown_ _t127;
    char* _t129;
    int _t131;
    FILE* _t133;
    _unknown_ _t136;
    _unknown_ _t137;
    signed char* _t138;
    char* _t140;
    struct _IO_FILE* _t142;
    signed int _t144;
    _unknown_ _t145;
    char _t148;
    char* _t152;
    char* _t154;
    int _t156;
    char* _t159;
    signed int _t162;
    char* _t165;
    char* _t167;
    _unknown_ _t168;
    char* _t173;
    char* _t174;
    char* _t176;
    char _t178;
    char* _t179;
    _unknown_ _t180;
    _unknown_ _t182;
    _unknown_ _t184;
    _unknown_ _t186;
    _unknown_ _t188;
    signed int _t189;
    char _t190;
    _unknown_ _t192;
    _unknown_ _t194;
    signed int _t195;
    signed int _t196;
    char* _t198;
    char _t204;
    signed int _t210;
    char _t211;
    _unknown_ _t218;
    _unknown_ _t219;
    _unknown_ _t220;
    _unknown_ _t221;
    char* _t223;
    signed int _t224;
    int _t226;
    com_type[41]* _t227;
    char* _t228;
    signed int _t229;
    int _t231;
    _unknown_ _t238;

    _v4168 = cp;
    _v32 =  *gs:0x14];
    init_gvars();
    set_sign_array();
    _t172 = 0;
    if(_v4168 == 0) {
L70:
        if(_t238 == 0) {
            return ;
        }
        __stack_chk_fail();
        return;
    }
    _t121 = skip_space(_v4168);
    _v4144 = _t121;
    _t195 = _t121;
    _t122 =  *_t121 & 255;
    if((_t122 & 4294967295) != 35) {
        __eflags = security_level;
        if(security_level != 0) {
L18:
            _v4160 = 0;
            __eflags = (_t122 & 4294967295) - 63;
            if((_t122 & 4294967295) != 63) {
                while(1) {
L20:
                    _t123 = _v4144;
                    _v4132 = _t123;
                    _t224 =  *_t123 & 255;
                    _t173 = _t123;
                    _t196 = _t224;
                    __eflags = _t196 & 4294967295;
                    if((_t196 & 4294967295) == 0) {
                        break;
                    }
                    __ctype_b_loc();
                    _t210 = _t224;
                    while(1) {
L23:
                        _t229 = _t210 & 4294967295;
                        _t211 =  *_t123;
                        __eflags =  *(_t211 + 1 + _t229 * 2) & 32;
                        if(( *(_t211 + 1 + _t229 * 2) & 32) != 0) {
                            break;
                        }
                        _t173 =  &(_t173[1]);
                        _v4132 = _t173;
                        _t210 =  *_t173 & 255;
                        __eflags = _t210 & 4294967295;
                        if((_t210 & 4294967295) == 0) {
                            goto L24;
                        }
                        continue;
L25:
                        _t148 = strncasecmp(_t124, "repeat", 6);
                        __eflags = _t148;
                        if(_t148 != 0) {
L27:
                            _v4156 = _t226;
                            _t227 =  &com_list;
                            _v4148 = 0;
                            _v4152 = _v4156;
                            _v4172 = _t173;
                            goto L28;
                            do {
                                goto L28;
L66:
                                _v4148 = _v4148 + 1;
                                _t227 = _t227 + 24;
                                __eflags = _v4148 - 42;
                            } while(_v4148 != 42);
                            __eflags = _v4160;
                            if(_v4160 == 0) {
                                next_espace();
                                input_column = input_column + _v4164 - _v4168;
                                process_parse(_t126, _v4144);
                                _t172 = _t126;
                            } else {
                                error("Expecting command to repeat.");
                                _t172 = 0;
                            }
                            goto L70;
                        }
                        _v4144 = skip_space(_t173);
                        _v4160 = 1;
                        goto L20;
L28:
                        _t174 =  *_t227;
                        asm("repne scasb ");
                        _t182 =  !-1 - 1;
                        __eflags = _t182 - 4;
                        _t126 = 4;
                        _t183 = _t182 - 4 > 0 ? _t126 : _t182;
                        __eflags = _v4156 - (_t182 - 4 > 0 ? _t126 : _t182);
                        if(_v4156 < (_t182 - 4 > 0 ? _t126 : _t182)) {
L30:
                            _t198 =  *(_t227 + 4);
                            __eflags = _t198;
                            if(_t198 == 0) {
                                goto L66;
                            }
                            goto L31;
                        }
                        _t126 = strncasecmp(_v4144, _t174, _v4152);
                        __eflags = _t126;
                        if(_t126 == 0) {
L33:
                            _t228 = _t174;
                            _t129 = skip_space(_v4172);
                            _v4132 = _t129;
                            input_column = input_column + _t129 - _v4168;
                            _t131 = my_strlcpy( &_v4128, _t129, 4096);
                            __eflags = _t131 - 4095;
                            if(_t131 <= 4095) {
                                __eflags = security_level - 1;
                                if(__eflags > 0) {
L58:
                                    _t176 =  &_v4128;
                                    remove_trailing_spaces(_t176);
                                    pull_number = 1;
                                    repeat_flag = _v4160;
                                    _t133 = _v4148 + _v4148 * 2;
                                     *__esp = _t176;
                                     *((intOrPtr*)(134696328 + _t133 * 8))();
                                    _t172 = _t133;
                                    repeat_flag = 0;
L63:
                                    __eflags = _t172;
                                    if(_t172 == 0) {
                                        __eflags = debug_level;
                                        if(debug_level < 0) {
                                            _v4176 =  *((intOrPtr*)(_t133 * _v4148 + 134696332));
                                            _v4180 = _t228;
                                            _v4184 = "Command usage: %s %s\n";
                                             *__esp = 1;
                                            __printf_chk();
                                        }
                                    }
                                    goto L70;
                                }
                                goto L36;
                            }
                            goto L34;
L36:
                            asm("repne scasb ");
                            _t189 =  !-1;
                            _t137 = _t189 - 1;
                            _t178 = _t189 - 2;
                            if(__eflags >= 0) {
                                goto L58;
                            }
                            _t138 = __ebp + _t137 + -4126;
                            __eflags =  *((char*)(__ebp + _t178 + -4124)) - 62;
                            if(__eflags != 0) {
                                while(1) {
                                    _t178 = _t178 - 1;
                                    if(__eflags < 0) {
                                        break;
                                    }
                                    _t138 = _t138 - 1;
                                    __eflags = ( *_t138 & 255 & 4294967295) - 62;
                                    if(__eflags != 0) {
                                        continue;
                                    }
L40:
                                    _t140 = skip_space(__ebp + _t178 + -4123);
                                    __eflags = _t178;
                                    if(_t178 == 0) {
L42:
                                        _t204 = _t178;
                                        _t190 = 0;
                                        goto L43;
                                    }
                                    _t204 = _t178 - 1;
                                    _t190 = 1;
                                    __eflags =  *(__ebp + _t204 + -4124) - 62;
                                    if( *(__ebp + _t204 + -4124) == 62) {
                                        goto L43;
                                    }
                                    goto L42;
L44:
                                    goto L58;
L43:
                                     *(__ebp + _t204 + -4124) = 0;
                                    __eflags = _t140;
                                    if(_t140 != 0) {
                                        __eflags = _t190;
                                        if(_t190 == 0) {
                                            _t172 = fopen(_t140, 134707697);
                                        } else {
                                            _t172 = fopen(_t140, 134687355);
                                        }
                                        __eflags = _t172;
                                        if(_t172 != 0) {
                                            _t142 = gfp;
                                            __eflags = _t142 - __imp__stdout;
                                            if(_t142 != __imp__stdout) {
                                                __eflags = _t142 - __imp__stderr;
                                                if(_t142 != __imp__stderr) {
                                                    __eflags = _t142 - default_out;
                                                    if(_t142 != default_out) {
                                                        fclose(_t142);
                                                    }
                                                }
                                            }
                                            gfp = _t172;
                                            _t179 =  &_v4128;
                                            remove_trailing_spaces(_t179);
                                            pull_number = 1;
                                            repeat_flag = _v4160;
                                            _t144 = _v4148 + _v4148 * 2;
                                             *__esp = _t179;
                                             *((intOrPtr*)(134696328 + _t144 * 8))();
                                            _t172 = _t144;
                                            repeat_flag = 0;
                                            _t133 = gfp;
                                            __eflags = _t133 - default_out;
                                            if(_t133 != default_out) {
                                                __eflags = _t133 - __imp__stdout;
                                                if(_t133 != __imp__stdout) {
                                                    __eflags = _t133 - __imp__stderr;
                                                    if(_t133 != __imp__stderr) {
                                                        fclose(_t133);
                                                    }
                                                }
                                                _t133 = default_out;
                                                gfp = _t133;
                                            }
                                            goto L63;
                                        }
                                        error("Can't open redirected output file for writing.");
                                        goto L70;
                                    }
                                    goto L44;
                                }
                                asm("o16 nop ");
                                goto L58;
                            }
                            goto L40;
                        }
                        goto L30;
L34:
                        error("Command line too long.");
                        _t172 = 0;
                        goto L70;
L31:
                        asm("repne scasb ");
                        _t186 =  !-1 - 1;
                        __eflags = _t186 - 4;
                        _t126 = 4;
                        _t187 = _t186 - 4 > 0 ? _t126 : _t186;
                        __eflags = _v4152 - (_t186 - 4 > 0 ? _t126 : _t186);
                        if(_v4152 < (_t186 - 4 > 0 ? _t126 : _t186)) {
                            goto L66;
                        }
                        _t126 = strncasecmp(_v4144, _t198, _v4152);
                        __eflags = _t126;
                        if(_t126 != 0) {
                            goto L66;
                        }
                        goto L33;
                    }
                    break;
                }
L24:
                _t124 = _v4144;
                _v4164 = _t124;
                _t226 = _t173 - _t124;
                __eflags = _t226 - 6;
                if(_t226 != 6) {
                    goto L27;
                }
                goto L25;
            } else {
                _t152 = skip_space( &(_v4144[1]));
                input_column = input_column + _t152 - _v4168;
                _t172 = help_cmd(_t152);
            }
            goto L70;
        }
    } else {
        _t223 = _t195 + 1;
        _t162 =  *_t223 & 255;
        if((_t162 & 4294967295) == 43 || (_t162 & 4294967295) == 45) {
            _t231 = decstrtol(_t223,  &_v4132) + cur_equation;
        } else {
            _t231 = decstrtol(_t223,  &_v4132) - 1;
        }
        _t165 = _v4132;
        _t172 = 1;
        if(_t223 == _t165) {
            goto L70;
        }
        if(_t231 >= 0) {
L9:
            error("Equation not defined.");
            _t172 = 0;
            goto L70;
        }
        _t238 = _t231 - n_equations;
        if(_t238 < 0) {
            __eflags =  *_t165 - 58;
            _t167 = skip_space( &(_t165[_t195 & 4294967295 & ]));
            __eflags =  *_t167;
            if( *_t167 == 0) {
                cur_equation = _t231;
                return_result(_t231);
                _t172 = 1;
            } else {
                input_column = input_column + _t167 - _v4168;
                _t172 = parse(_t231, _t167);
            }
            goto L70;
        }
        goto L9;
    }
L14:
    __eflags = (_t122 & 4294967295) - 33;
    if((_t122 & 4294967295) != 33) {
        goto L18;
    } else {
        _t154 = getenv("SHELL");
        __eflags = _t154;
        _t155 = _t154 == 0 ? "/bin/sh" : _t154;
        _v4132 = _t154 == 0 ? "/bin/sh" : _t154;
        _t156 = access(_t154 == 0 ? "/bin/sh" : _t154, 1);
        __eflags = _t156;
        if(_t156 == 0) {
            _t159 = skip_space( &(_v4144[1]));
            __eflags =  *_t159;
            _t160 =  *_t159 == 0 ? _v4132 : _t159;
            _t210 & 4294967295 = shell_out( *_t159 == 0 ? _v4132 : _t159);
            _t172 = 0 & ;
        } else {
            error("Shell not found or not executable, check SHELL environment variable.");
            _t172 = 0;
        }
    }
    goto L70;
}

int display_process(char* cp)
{// addr = 0x0804F44B
    char* _v24;
    char* _v28;
    intOrPtr _v32;
    char* _v36;
    FILE* _v40;
    char* __ebx;
    _unknown_ __ebp;
    _unknown_ _t15;
    int _t19;
    FILE* _t20;

    __ebx = cp;
    if(__ebx == 0) {
        return 0;
    }
    default_color();
    _t17 = html_flag != 0 ? "&mdash;&gt; " : "-> ";
    _v32 = html_flag != 0 ? "&mdash;&gt; " : "-> ";
    _t19 = 1 + cur_equation;
    _v36 = _t19;
    _v40 = "%d%s";
     *__esp = 1;
    __printf_chk();
    input_column = _t19;
    if(html_flag == 0) {
        _v36 = __ebx;
        _v40 = 134700660;
         *__esp = 1;
        __printf_chk();
    } else {
        _v36 = __ebx;
        _v40 = "<b>%s</b>";
         *__esp = 1;
        __printf_chk();
    }
    _t20 = gfp;
    if(_t20 != __imp__stdout && _t20 != __imp__stderr) {
        _v24 = __ebx;
        _v28 = "-> ";
        _v32 = 1 + cur_equation;
        _v36 = "%d%s%s";
        _v40 = 1;
         *__esp = _t20;
        __fprintf_chk();
    }
    set_error_level(__ebx);
    return process(__ebx);
}

int read_examples(char** cpp)
{// addr = 0x0804F53B
    char* cp;
    void* __ebx;
    char** __esi;
    _unknown_ __ebp;
    char* _t3;
    _unknown_ _t4;
    int _t5;
    _unknown_ _t6;

    __esi = cpp;
    _t3 =  *__esi;
    if(_t3 == 0) {
        return 1;
    }
    while(1) {
         *__esp = _t3;
        __strdup();
        __ebx = _t3;
        _t5 = display_process(_t3);
        if(_t5 == 0) {
            break;
        } else {
            free(__ebx);
            _t3 = (__esi)[1];
            __esi =  &((__esi)[1]);
            if(_t3 == 0) {
                return 1;
            }
            continue;
        }
    }
    return _t5;
}

int help_cmd(char* cp)
{// addr = 0x0804F580
    int i;
    int j;
    char* cp1;
    int flag;
    int row;
    intOrPtr _v32;
    signed int _v36;
    char* _v40;
    intOrPtr* _v44;
    _unknown_ _v60;
    com_type[41] _v64;
    char* _v68;
    int _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr* _t265;
    _unknown_ _t274;
    _unknown_ _t275;
    FILE* _t280;
    _unknown_ _t283;
    intOrPtr _t286;
    _unknown_ _t290;
    _unknown_ _t297;
    _unknown_ _t317;
    _unknown_ _t321;
    _unknown_ _t327;
    _unknown_ _t332;
    _unknown_ _t346;
    _unknown_ _t363;
    _unknown_ _t370;
    _unknown_ _t380;
    _unknown_ _t381;
    signed int _t385;
    _unknown_ _t386;
    _unknown_ _t387;
    com_type[41]* _t389;
    _unknown_ _t391;
    _unknown_ _t392;
    _unknown_ _t393;
    _unknown_ _t398;
    char* _t402;
    _unknown_ _t403;
    char* _t405;
    com_type[41]* _t406;
    _unknown_ _t407;
    _unknown_ _t408;
    signed int _t409;
    signed int _t410;
    _unknown_ _t411;
    _unknown_ _t412;

    _t265 = __eax;
    _t405 = cp;
    _t385 =  *_t405 & 255;
    if((_t385 & 4294967295) == 0) {
L52:
        _v64 = "Mathomatic is a Computer Algebra System (CAS) and calculator program.";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = "To see helpful interactive examples, type "help examples".";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = "Type "help equations" for help with entering expressions and equations.";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = "Type "help all" for a summary and syntax of all commands.";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = "Type "help usage" to display the syntax of all commands.";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = ""help" or "?" followed by a command name will give info on that command.";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = "Other help keywords: constants, geometry, copyright, license, bugs.\n";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _v64 = 42;
        _v68 = "These are the %d commands:\n";
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _t406 =  &com_list;
        _t409 = 0;
    } else {
        __ctype_b_loc();
        _v44 = _t265;
        _t286 =  *_t265;
        _v40 = _t405;
        _t402 = _t405;
L3:
        while(( *(_t286 + 1 + (_t385 & 4294967295) * 2) & 32) == 0) {
            _t402 =  &(_t402[1]);
            _t385 =  *_t402 & 255;
            if((_t385 & 4294967295) == 0) {
                _v40 = _t402;
                if(_t402 == _t405) {
                    goto L52;
                } else {
                    _v36 = 0;
                    while(1) {
                        _t389 =  &com_list;
                        _t410 = 0;
                        _v32 = _v40 - _t405;
                        goto L7;
                    }
                }
                do {
                    goto L53;
L57:
                    _t409 = _t409 + 1;
                    _t406 = _t406 + 24;
                } while(_t409 != 42);
L58:
                _v64 = "\n\nTo select an equation space, type the equation number at the main prompt.";
                _v68 = 134686589;
                _v72 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                _v64 = "To solve the current equation, type the variable name at the main prompt.";
                _v68 = 134686589;
                _v72 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                return 1;
            }
        }
    }
L53:
    if(_t409 == (1717986919 * _t409 >> 32 >> 1) - (_t409 >> 31) + ((1717986919 * _t409 >> 32 >> 1) - (_t409 >> 31)) * 4) {
        _v68 = 134699005;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    _v64 =  *_t406;
    _v68 = 134700660;
    _v72 = 1;
    _t280 = gfp;
     *__esp = _t280;
    __fprintf_chk();
    _t387 = 15 - _t280;
    if(_t387 > 0) {
        while(1) {
L56:
            _v68 = 134707752;
            _v72 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t387 = _t387 - 1;
            if(_t387 <= 0) {
                break;
            }
        }
    }
}

int var_is_const(long int v, double* dp)
{// addr = 0x080502D0
    _unknown_ __ebp;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;

    __edx = v;
    __ecx = dp;
    if(__edx == 1) {
        if(__ecx == 0) {
            return 1;
        }
        goto L4;
    }
    if(__edx != 2) {
        return 0;
    }
    if(__ecx == 0) {
        return 1;
    }
    asm("fld qword [0x8075658]");
    asm("fstp qword [ecx]");
    return 1;
L4:
    asm("fld qword [0x8075650]");
    asm("fstp qword [ecx]");
    return 1;
}

int subst_constants(token_type* equation, int* np)
{// addr = 0x0805031B
    int i;
    int modified;
    double d;
    _unknown_ _v28;
    intOrPtr _v40;
    _unknown_ _v48;
    token_type* __ebx;
    int* __edi;
    intOrPtr __esi;
    _unknown_ __ebp;

    __edi = np;
    _v40 = 0;
    if( *__edi <= 0) {
        return _v40;
    }
    __ebx = equation;
    __esi = 0;
    while(1) {
    }
}

int my_strlcpy(char* dest, char* src, int n)
{// addr = 0x0805037E
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v36;
    char* _v40;
    _unknown_ __ebp;
    _unknown_ _t16;
    intOrPtr _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t28;
    _unknown_ _t29;
    int _t31;
    _unknown_ _t32;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    asm("repne scasb ");
    _t31 =  !-1 - 1;
    _t23 = _t31 - n - 1 <= 0 ? _t31 : n - 1;
    _v36 = _t23;
    _v40 = src;
     *__esp = dest;
    L080491C4();
    dest[_t23] = 0;
    return _t31;
}

remove_trailing_spaces(char* cp)
{// addr = 0x080503D7
    int i;
    _unknown_ __ebx;
    _unknown_ __edi;
    char* __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t12;
    signed int _t13;
    _unknown_ _t15;
    _unknown_ _t16;
    char* _t17;

    __esi = cp;
    __eax = 0;
    asm("repne scasb ");
    _t13 =  !-1;
    _t16 = _t13 - 1;
    _t11 = _t13 - 2;
    if(__eflags >= 0) {
        return ;
    }
    __ctype_b_loc();
    _t17 =  &((__esi)[_t16]);
    while(( *( *__eax + 1 +  *(_t17 - 1) * 2) & 32) != 0) {
         *((signed char*)(_t17 - 1)) = 0;
        _t17 = _t17 - 1;
        _t11 = _t11 - 1;
        if(__eflags >= 0) {
            return ;
        }
    }
}

set_error_level(char* cp)
{// addr = 0x08050428
    char* cp1;
    _unknown_ _v24;
    _unknown_ __ebx;
    char* __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    char* _t12;
    signed int _t13;

    __esi = cp;
    point_flag = 1;
    _t12 = strpbrk(__esi, 134697352);
    if(_t12 != 0) {
         *_t12 = 0;
    }
    remove_trailing_spaces(__esi);
    _t13 =  *__esi & 255;
    if((_t13 & 4294967295) == 0) {
        return ;
    }
    __ctype_b_loc();
    while(1) {
    }
}

binary_parenthesize(token_type* p1, int n, int i)
{// addr = 0x0805048F
    int j;
    int level;
    signed int _v32;
    intOrPtr _v48;
    signed int _v64;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t54;
    _unknown_ _t56;
    intOrPtr _t59;
    signed int _t62;
    _unknown_ _t66;
    _unknown_ _t68;
    _unknown_ _t69;
    intOrPtr _t72;
    signed int _t76;
    intOrPtr _t77;
    signed int _t79;
    signed int _t81;
    _unknown_ _t83;
    signed int _t90;
    intOrPtr _t91;
    _unknown_ _t96;
    _unknown_ _t97;

    __ebx = n;
    if(__ebx - 1 <= i || (__ebx & 4294967295 & 1) == 0 || (i & 1) == 0) {
        error_bug("Internal error in arguments to binary_parenthesize().");
    }
    _t54 = i;
    _v32 = _t54;
    _t56 = p1 + (_t54 << 4);
    __ecx =  *((intOrPtr*)(_t56 + 4));
     *((intOrPtr*)(_t56 + 4)) = __ecx + 1;
    _t68 = (i << 4) + p1 - 16;
    _t59 =  *((intOrPtr*)(_t68 + 4));
     *((intOrPtr*)(_t68 + 4)) = _t59 + 1;
    _t96 = __ecx - _t59;
    if(_t96 >= 0) {
L10:
        _t69 = (_v32 << 4) + p1 + 16;
        _t62 =  *(_t69 + 4);
         *(_t69 + 4) = _t62 + 1;
        if(__ecx >= _t62) {
            return ;
        }
L11:
        _t62 = i + 2;
        if(__ebx <= _t62) {
            return ;
        }
        _t90 = p1 + (_t62 << 4);
        _t77 =  *((intOrPtr*)(_t90 + 4));
        _v48 = _t77;
        if(__ecx >= _t77) {
            return ;
        }
        _t79 = (i << 4) + p1 + 48;
        _v32 = _t79;
        _t72 = _v48;
        while(1) {
             *((intOrPtr*)(_t90 + 4)) = _t72 + 1;
            _t62 = _t62 + 1;
            if(__ebx <= _t62) {
                break;
            }
            _t90 = _t79;
            _t72 =  *((intOrPtr*)(_t79 + 4));
            _t79 = _t79 + 16;
            if(__ecx >= _t72) {
                return ;
            }
        }
        return;
    }
    _t81 = i - 2;
    _v64 = _t81;
    if(_t96 >= 0) {
        goto L10;
    }
    _t83 = p1 + (_t81 << 4);
    _t91 =  *((intOrPtr*)(_t83 + 4));
    _t97 = __ecx - _t91;
    if(_t97 >= 0) {
        goto L10;
    } else {
        _t66 = (i << 4) + p1 - 48;
        _t76 = _v64;
        goto L9;
    }
    while(1) {
L9:
         *((intOrPtr*)(_t83 + 4)) = _t91 + 1;
        _t76 = _t76 - 1;
        if(_t97 < 0) {
            break;
        }
        _t83 = _t66;
        _t91 =  *((intOrPtr*)(_t66 + 4));
        _t66 = _t66 - 16;
        if(__ecx >= _t91) {
            goto L10;
        }
    }
    goto L10;
}

give_priority(token_type* equation, int* np)
{// addr = 0x08050598
    int i;
    intOrPtr _v32;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    int* __edi;
    token_type* __esi;
    _unknown_ __ebp;
    int _t29;
    int _t30;
    int _t36;
    signed int _t37;
    int _t38;
    int _t39;
    int _t40;
    signed int _t42;
    _unknown_ _t43;

    __esi = equation;
    __edi = np;
    _t29 =  *__edi;
    if(_t29 <= 1) {
L5:
        if(right_associative_power != 0) {
            _t37 = _t29 - 2;
            if(_t37 <= 0) {
                _t30 =  *__edi;
                _t38 = 1;
                if(_t30 <= 1) {
                    return ;
                }
                while(1) {
                    _t42 = _t38 << 4;
                    if( *(__esi + _t42 + 8) <= 9 && (1 << ( *(__esi + _t42 + 8) & 4294967295) & 568) != 0) {
                        binary_parenthesize(__esi, _t30, _t38);
                    }
                    _t38 = _t38 + 2;
                    _t30 =  *__edi;
                    if(_t30 <= _t38) {
                        return ;
                    }
                }
            }
        } else {
            _t36 =  *__edi;
            _t39 = 1;
            if(_t36 <= 1) {
                return ;
            }
            while() {
            }
        }
L9:
        _v32 = __esi + (_t37 << 4) + 8;
        while() {
        }
    } else {
        _t40 = 1;
        goto L2;
        do {
L2:
            if( *((intOrPtr*)(__esi + (_t40 << 4) + 8)) == 7) {
                binary_parenthesize(__esi, _t29, _t40);
            }
            _t40 = _t40 + 2;
            _t29 =  *__edi;
        } while(_t29 > _t40);
        goto L5;
    }
}

handle_negate(token_type* equation, int* np)
{// addr = 0x0805069F
    int i;
    _unknown_ _v36;
    _unknown_ _v40;
    token_type* __ebx;
    int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;

    __edi = np;
    if( *__edi <= 1) {
        return ;
    }
    __ebx = equation;
    __esi = 1;
    while(1) {
    }
}

int isvarchar(int ch)
{// addr = 0x080506F5
    _unknown_ _v24;
    signed int __ebx;
    _unknown_ __ebp;
    char* _t5;
    _unknown_ _t6;

    _t5 = __eax;
    __ebx = ch;
    if(__ebx == 95) {
        return 1;
    }
    if(__ebx != 0) {
        _t5 = strchr( &special_variable_characters, __ebx);
        if(_t5 != 0) {
            return 1;
        }
    }
    __ctype_b_loc();
    return ( *( *_t5 + __ebx * 2) & 65535) >> 10 & 1;
}

char* parse_var(long int* vp, char* cp)
{// addr = 0x0805073A
    int i;
    int j;
    long int vtmp;
    char[100] buf;
    char* cp1;
    _None* strcmpfunc;
    intOrPtr _v32;
    char _v133;
    char* _v140;
    intOrPtr _v144;
    long int* _v148;
    int _v164;
    int _v168;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t106;
    signed int _t108;
    signed int _t110;
    signed int _t111;
    signed int _t112;
    signed int _t113;
    signed int _t114;
    signed int _t115;
    signed int _t116;
    _unknown_ _t117;
    signed int _t118;
    _unknown_ _t119;
    long int _t120;
    signed int _t123;
    char* _t124;
    char* _t125;
    _unknown_ _t126;
    long int _t129;
    char* _t130;
    signed int _t131;
    signed int _t134;
    char* _t135;
    char* _t136;
    signed int _t137;
    signed int _t138;
    signed int _t139;
    signed int _t140;
    _unknown_ _t141;
    _unknown_ _t142;
    _unknown_ _t144;
    _unknown_ _t147;
    signed int _t154;
    int _t156;
    char* _t159;
    char*[7999]* _t160;
    _unknown_ _t161;
    int _t162;
    _unknown_ _t163;
    _unknown_ _t164;
    int _t166;

    _v148 = vp;
    _t159 = cp;
    _v32 =  *gs:0x14];
    _t103 = case_sensitive_flag == 0 ? strcasecmp : strcmp;
    _v144 = case_sensitive_flag == 0 ? strcasecmp : strcmp;
    _t166 = isvarchar( *_t159);
    if(_t166 != 0) {
        _v140 = _t159;
        _t106 =  *_t159 & 255;
        _t137 = 0;
        __eflags = _t106 & 4294967295;
        if((_t106 & 4294967295) == 0) {
L8:
             *(__ebp + _t137 + -129) = 0;
            _t108 = strcasecmp( &_v133, "inf");
            __eflags = _t108;
            if(_t108 != 0) {
                _t110 = strcasecmp( &_v133, "nan");
                __eflags = _t110;
                if(_t110 != 0) {
                    _v168 = "sign";
                    _t111 =  &_v133;
                     *__esp = _t111;
                    _v144();
                    __eflags = _t111;
                    if(_t111 != 0) {
                        strncasecmp(_t159, 134697416, 2);
                        __eflags = _t111;
                        if(_t111 != 0) {
                            strncasecmp(_t159, "e#", 2);
                            __eflags = _t111;
                            if(_t111 != 0) {
                                strncasecmp(_t159, "pi#", 3);
                                __eflags = _t111;
                                if(_t111 != 0) {
                                    _v140 = _t159;
                                    _t112 =  *_t159 & 255;
                                    _t138 = 0;
                                    __eflags = _t112 & 4294967295;
                                    if((_t112 & 4294967295) == 0) {
L28:
                                         *(__ebp + _t138 + -129) = 0;
                                        _v168 = 134707601;
                                        _t113 =  &_v133;
                                         *__esp = _t113;
                                        _v144();
                                        __eflags = _t113;
                                        if(_t113 != 0) {
                                            _v168 = 134707627;
                                            _t114 =  &_v133;
                                             *__esp = _t114;
                                            _v144();
                                            __eflags = _t114;
                                            if(_t114 != 0) {
                                                _v168 = 134707648;
                                                _t115 =  &_v133;
                                                 *__esp = _t115;
                                                _v144();
                                                __eflags = _t115;
                                                if(_t115 != 0) {
                                                    _t116 =  &_v133;
                                                    is_all(_t116);
                                                    __eflags = _t116;
                                                    if(_t116 != 0) {
                                                        error(""all" is a reserved word and may not be used as a variable name.");
                                                        goto L53;
                                                    }
                                                    goto L35;
L38:
                                                    _t162 =  &_v133;
                                                    _t160 =  &var_names;
                                                    while(1) {
                                                        _v168 = _t118;
                                                         *__esp = _t162;
                                                        _v144();
                                                        __eflags = _t118;
                                                        if(__eflags == 0) {
                                                            break;
                                                        }
                                                        _t139 = _t139 + 1;
                                                        _t118 =  *(_t160 + _t139 * 4);
                                                        __eflags = _t118;
                                                        if(_t118 != 0) {
                                                            continue;
                                                        }
L43:
                                                        __eflags = _t139 - 7998;
                                                        if(_t139 <= 7998) {
                                                            asm("repne scasb ");
                                                            _t162 =  !-1;
                                                            malloc(_t162);
                                                             *( &var_names + _t139 * 4) = 0;
                                                            __eflags = 0;
                                                            if(0 != 0) {
                                                                _v164 = _t162;
                                                                _v168 =  &_v133;
                                                                 *__esp = 0;
                                                                L080491C4();
                                                                _t120 = _t139 + 65;
                                                                 *(134716132 + _t139 * 4) = 0;
                                                                goto L48;
                                                            }
                                                            goto L46;
L48:
                                                             *_v148 = _t120;
                                                            goto L53;
                                                        }
                                                        error("Maximum number of variable names reached.");
                                                        _v168 = "Please restart or use "clear all".\n";
                                                         *__esp = 1;
                                                        __printf_chk();
                                                        goto L53;
L46:
                                                        error("Out of memory (can't malloc(3) variable name).");
                                                        goto L53;
                                                    }
                                                    _t120 = _t139 + 65;
                                                    if(__eflags != 0) {
                                                        goto L48;
                                                    }
                                                    asm("o16 nop ");
                                                    goto L43;
                                                }
                                                goto L33;
L35:
                                                _t118 = var_names;
                                                _t139 = 0;
                                                __eflags = _t118;
                                                if(_t118 != 0) {
                                                    goto L38;
                                                }
                                                _t139 = 0;
                                                goto L43;
                                            }
                                            goto L31;
L33:
                                             *_v148 = 2;
                                            goto L53;
                                        }
                                        goto L29;
L31:
                                         *_v148 = 1;
                                        goto L53;
                                    }
                                    goto L22;
L29:
                                     *_v148 = 3;
                                    goto L53;
                                }
                                goto L20;
L22:
                                _t162 =  &_v133;
                                goto L23;
                                do {
L23:
                                    _t123 = _t112 & 4294967295;
                                    isvarchar(_t123);
                                    __eflags = _t123;
                                    if(_t123 != 0) {
L25:
                                        __eflags = _t138 - 100;
                                        if(_t138 != 100) {
                                            goto L27;
                                        }
                                        goto L26;
                                    }
                                    __ctype_b_loc();
                                    _t154 =  *_v140;
                                    _t126 =  *_t123;
                                    __eflags =  *(_t126 + 1 + _t154 * 2) & 8;
                                    if(( *(_t126 + 1 + _t154 * 2) & 8) == 0) {
                                        goto L28;
                                    }
                                    goto L25;
L26:
                                    error("Variable name too long.");
                                    goto L53;
L27:
                                    _t124 = _v140;
                                     *(_t162 + _t138) =  *_t124 & 255 & 4294967295;
                                    _t138 = _t138 + 1;
                                    _t125 =  &(_t124[1]);
                                    _v140 = _t125;
                                    _t112 =  *_t125 & 255;
                                    __eflags = _t112 & 4294967295;
                                } while((_t112 & 4294967295) != 0);
                                goto L28;
                            }
                            goto L18;
L20:
                             *_v148 = 2;
                            goto L53;
                        }
                        goto L16;
L18:
                         *_v148 = 1;
                        goto L53;
                    }
                    goto L13;
L16:
                     *_v148 = 3;
                    goto L53;
                }
                goto L11;
L13:
                __ctype_b_loc();
                _t156 = _v140;
                _t140 =  *_t156;
                _t142 =  *_t111;
                _t129 = 4;
                __eflags =  *(_t142 + 1 + _t140 * 2) & 8;
                if(( *(_t142 + 1 + _t140 * 2) & 8) == 0) {
L52:
                     *_v148 = _t129;
                    goto L53;
                }
                _v164 = 10;
                _t130 =  &_v140;
                _v168 = _t130;
                 *__esp = _t156;
                strtol();
                __eflags = _t130 - 62;
                if(_t130 <= 62) {
                    _t131 =  &(_t130[1]);
                     *( &sign_array + _t131) = 1;
                    _t129 = (_t131 << 14) + 4;
                } else {
                    error("Maximum subscript exceeded in special variable name.");
                    goto L53;
                }
                goto L52;
            }
            goto L9;
L11:
            error("NaN (Not a Number) cannot be directly entered.");
            goto L53;
        }
        goto L3;
L9:
        error("Infinity cannot be used as a variable.");
        goto L53;
    }
    error("Invalid variable.");
L53:
    if(_t166 == 0) {
        return ;
    }
    __stack_chk_fail();
    return;
L3:
    _t162 =  &_v133;
    while(1) {
        _t134 = isvarchar(_t106 & 4294967295);
        __eflags = _t134;
        if(_t134 == 0) {
            break;
        }
        __eflags = _t137 - 100;
        if(_t137 != 100) {
            _t135 = _v140;
             *(_t162 + _t137) =  *_t135 & 255 & 4294967295;
            _t137 = _t137 + 1;
            _t136 =  &(_t135[1]);
            _v140 = _t136;
            _t106 =  *_t136 & 255;
            __eflags = _t106 & 4294967295;
            if((_t106 & 4294967295) != 0) {
                continue;
            }
            goto L8;
        }
        error("Variable name too long.");
        goto L53;
    }
    goto L8;
}

put_up_arrow(int cnt, char* cp)
{// addr = 0x08050BE0
    int i;
    char* _v24;
    int __ebx;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t5;

    __esi = cnt;
    if(isatty(0) == 0 || point_flag == 0 || html_flag != 0) {
L7:
        error(cp);
        return;
    } else {
        if(__esi + input_column <= 0) {
L6:
            _v24 = "^ ";
             *__esp = 1;
            __printf_chk();
        } else {
            __ebx = 0;
            while(1) {
L5:
                _v24 = 134707752;
                 *__esp = 1;
                __printf_chk();
                __ebx = __ebx + 1;
                if(__esi + input_column <= __ebx) {
                    break;
                }
            }
            goto L6;
        }
        goto L7;
    }
}

char* parse_section(token_type* equation, int* np, char* cp, int allow_space)
{// addr = 0x08050C67
    int n;
    int cur_level;
    int operand;
    char* cp1;
    double d;
    int abs_count;
    int[9] abs_array;
    intOrPtr _v80;
    intOrPtr _v84;
    intOrPtr _v88;
    char* _v92;
    intOrPtr _v96;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t304;
    _unknown_ _t305;
    _unknown_ _t308;
    _unknown_ _t310;
    _unknown_ _t313;
    _unknown_ _t314;
    _unknown_ _t316;
    _unknown_ _t319;
    _unknown_ _t324;
    _unknown_ _t326;
    _unknown_ _t327;
    _unknown_ _t331;
    _unknown_ _t339;
    _unknown_ _t342;
    _unknown_ _t343;
    _unknown_ _t344;
    _unknown_ _t346;
    _unknown_ _t347;
    _unknown_ _t348;
    _unknown_ _t350;
    _unknown_ _t352;
    _unknown_ _t354;
    _unknown_ _t356;
    _unknown_ _t359;
    _unknown_ _t362;
    _unknown_ _t363;
    _unknown_ _t373;
    _unknown_ _t376;
    _unknown_ _t379;
    _unknown_ _t382;
    _unknown_ _t384;
    _unknown_ _t385;
    _unknown_ _t386;
    _unknown_ _t387;

    _t356 = __ecx;
    _t304 = cp;
    _v92 = _t304;
    if(_t304 == 0) {
        return 0;
    }
    _v96 = 0;
    _v88 = 0;
    _v84 = 1;
    _v80 = 0;
    while(1) {
    }
}

str_tolower(char* cp)
{// addr = 0x080513EC
    char* __ebx;
    signed int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr* _t15;
    signed int _t18;
    signed int _t19;

    __ebx = cp;
    if(__ebx == 0) {
        return ;
    }
    _t18 =  *__ebx & 255;
    _t13 = _t18;
    if((_t13 & 4294967295) == 0) {
        return ;
    }
    __ctype_b_loc();
    __edi = _t13;
    while(1) {
        _t19 = _t18 & 4294967295;
        _t15 =  *__edi;
        if(( *(_t15 + 1 + _t19 * 2) & 1) != 0) {
            __ctype_tolower_loc();
             *__ebx =  *( *_t15 + _t19 * 4) & 4294967295;
        }
        __ebx =  &((__ebx)[1]);
        _t18 =  *__ebx & 255;
        _t13 = _t18;
        if((_t18 & 4294967295) == 0) {
            return ;
        }
    }
}

char* parse_expr(token_type* equation, int* np, char* cp)
{// addr = 0x0805143A
    int i;
    char* cp1;
    char* cp2;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    char* _v32;
    _unknown_ _v48;
    signed int _v52;
    int _v56;
    _unknown_ __ebp;
    _unknown_ _t47;
    char* _t49;
    char* _t51;
    _unknown_ _t53;
    signed int _t54;
    char* _t57;
    signed int _t58;
    _unknown_ _t65;
    char* _t73;
    _unknown_ _t74;
    signed int _t76;
    signed int _t77;
    int* _t80;
    _unknown_ _t81;
    _unknown_ _t83;
    char* _t84;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t80 = np;
    _t73 = cp;
    if(_t73 == 0) {
        return _t73;
    }
    if(case_sensitive_flag == 0) {
        str_tolower(_t73);
    }
    _t49 = skip_space(_t73);
    if( *_t49 != 35) {
        _t51 = parse_section(equation, _t80, _t73, 1);
        _t73 = _t51;
        if(_t51 == 0) {
            return _t73;
        }
        _t73 = extra_characters(_t51) != 0 ? 0 : _t73;
        return _t73;
    } else {
        _t84 =  &(_t49[1]);
        _t54 =  *_t84 & 255;
        if((_t54 & 4294967295) == 43) {
L6:
            _t76 = decstrtol(_t84,  &_v32) + cur_equation;
L8:
            _t57 = _v32;
            if(_t84 == _t57 ||  *_t57 != 0) {
                error("Error parsing equation space number.");
                _t73 = 0;
                return _t73;
            }
            if(_t76 >= 0) {
L14:
                error("No expression available in specified equation space.");
                _t73 = 0;
                return _t73;
            } else {
                asm("o16 nop ");
                if(_t76 >= n_equations) {
                    goto L14;
                }
                _t58 =  *( &n_lhs + _t76 * 4);
                if(_t58 > 0) {
                    goto L15;
                }
                goto L14;
            }
L15:
            _t77 =  *( &n_rhs + _t76 * 4);
            if(_t77 == 0) {
                _v52 = _t58 << 4;
                _v56 =  *( &lhs + _t76 * 4);
                 *__esp = equation;
                L080491C4();
                 *_t80 =  *( &n_lhs + _t76 * 4);
            } else {
                _v52 = _t77 << 4;
                _v56 =  *( &rhs + _t76 * 4);
                 *__esp = equation;
                L080491C4();
                 *_t80 =  *( &n_rhs + _t76 * 4);
            }
            list_proc(equation,  *_t80, 0);
            _v52 = 134699005;
            _v56 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t73 = _v32;
            return _t73;
        }
        if((_t54 & 4294967295) != 45) {
            _t76 = decstrtol(_t84,  &_v32) - 1;
            goto L8;
        }
        goto L6;
    }
}

char* parse_equation(int n, char* cp)
{// addr = 0x080515D9
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    char* _t26;
    char* _t28;
    _unknown_ _t30;
    char* _t32;
    _unknown_ _t33;
    _unknown_ _t35;
    _unknown_ _t36;
    signed int _t39;
    _unknown_ _t40;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t39 = n;
    _t32 = cp;
    if(_t32 == 0) {
        return _t32;
    }
    if(case_sensitive_flag == 0) {
        str_tolower(_t32);
    }
    _t36 = 0 + _t39 * 4;
    _t26 = parse_section( *( &lhs + _t39 * 4), _t36 +  &n_lhs, _t32, 1);
    _t32 = _t26;
    if(_t26 == 0) {
        return _t32;
    }
    _t28 = parse_section( *( &rhs + _t39 * 4), _t36 +  &n_rhs, _t26, 1);
    _t32 = _t28;
    if(_t28 == 0) {
        return _t32;
    }
    _t32 = extra_characters(_t28) != 0 ? 0 : _t32;
    return _t32;
}

int vcmp(sort_type* p1, sort_type* p2)
{// addr = 0x08051690
    _unknown_ __ebp;

    return p2->count - p1->count;
}

int quit_cmd(char* cp)
{// addr = 0x080516A1
    int ev;
    _unknown_ _v24;
    int __ebx;
    _unknown_ __ebp;
    char* _t5;
    _unknown_ _t6;

    _t5 = cp;
    __ebx = 0;
    if( *_t5 != 0) {
        __ebx = decstrtol(_t5,  &cp);
        if(extra_characters(cp) != 0) {
            return 0;
        }
    }
    exit_program(__ebx);
    return 0;
}

int fraction_cmd(char* cp)
{// addr = 0x080516E8
    int i;
    int j;
    intOrPtr _v16;
    intOrPtr _v20;
    _unknown_ _v36;
    _unknown_ _v40;
    int[99]* __ebx;
    token_type*[99]* __esi;
    _unknown_ __ebp;
    _unknown_ _t29;
    int _t30;
    _unknown_ _t31;

    if(get_range_eol( &cp,  &_v16,  &_v20) == 0) {
        return 0;
    }
    _t30 = _v16;
    if(_t30 > _v20) {
        return 1;
    }
    __ebx =  &n_lhs;
    __esi =  &lhs;
    while(1) {
    }
}

int unfactor_cmd(char* cp)
{// addr = 0x0805178A
    int i;
    int j;
    int quick_flag;
    int fraction_flag;
    int power_flag;
    _unknown_ _v32;
    _unknown_ _v36;
    intOrPtr _v48;
    intOrPtr _v52;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    intOrPtr __esi;
    _unknown_ __ebp;
    _unknown_ _t102;
    int _t103;
    _unknown_ _t104;
    _unknown_ _t106;
    _unknown_ _t107;
    _unknown_ _t111;
    _unknown_ _t112;
    _unknown_ _t114;
    _unknown_ _t115;
    _unknown_ _t120;
    _unknown_ _t122;
    _unknown_ _t127;
    _unknown_ _t129;
    _unknown_ _t130;
    _unknown_ _t133;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t141;
    char* _t142;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t156;
    _unknown_ _t157;
    _unknown_ _t158;

    _v52 = 0;
    _v48 = 0;
    __esi = 0;
    while(1) {
        _t142 = cp;
        _t103 = strncasecmp(_t142, 134698596, 4);
        __eflags = _t103;
        if(_t103 != 0) {
            goto L3;
        } else {
            __esi = 1;
            goto L8;
        }
    }
}

int skip_no(char** cpp)
{// addr = 0x08051A6A
    _unknown_ _v24;
    char** __ebx;
    _unknown_ __ebp;
    _unknown_ _t13;
    _unknown_ _t24;
    _unknown_ _t29;

    __ebx = cpp;
    if(strcmp_tospace( *__ebx, 134698608) != 0 && strcmp_tospace( *__ebx, 134698611) != 0) {
        if(strcmp_tospace( *__ebx, 134698615) == 0 || strcmp_tospace( *__ebx, 134698619) == 0) {
            goto L4;
        } else {
            if(strcmp_tospace( *__ebx, 134698625) != 0 && strcmp_tospace( *__ebx, 134699264) != 0) {
                if(strcmp_tospace( *__ebx, 134698629) != 0) {
                    return 0;
                }
            }
             *__ebx = skip_param( *__ebx);
            return 0;
        }
    }
L4:
     *__ebx = skip_param( *__ebx);
    return 1;
}

int factor_cmd(char* cp)
{// addr = 0x08051B3F
    int i;
    int j;
    int i1;
    long int v;
    int valid_range;
    int power_flag;
    char* cp_start;
    double d;
    char[4095] buf;
    intOrPtr _v32;
    char _v4128;
    int _v4132;
    intOrPtr _v4136;
    int _v4140;
    char* _v4144;
    int _v4156;
    char* _v4160;
    signed int _v4164;
    signed int _v4168;
    signed int _v4172;
    char* _v4180;
    char* _v4184;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t143;
    char* _t153;
    int _t155;
    _unknown_ _t157;
    char* _t165;
    signed int _t170;
    signed int _t171;
    _unknown_ _t174;
    _unknown_ _t176;
    _unknown_ _t182;
    _unknown_ _t184;
    char* _t187;
    _unknown_ _t189;
    char* _t190;
    char* _t191;
    _unknown_ _t197;
    char* _t199;
    char* _t205;
    _unknown_ _t215;
    signed int _t216;
    int _t217;
    int _t218;
    signed int _t220;
    token_type** _t221;
    signed int _t222;
    char* _t223;
    _unknown_ _t226;
    _unknown_ _t229;
    signed int _t230;
    signed int _t233;
    _unknown_ _t238;
    token_type** _t239;
    char** _t240;
    signed int _t241;
    _unknown_ _t242;
    char* _t243;
    char _t247;

    _t143 = cp;
    _v4144 = _t143;
    _v32 =  *gs:0x14];
    _v4160 = _t143;
    if(strcmp_tospace(_t143, "number") != 0) {
        if(strcmp_tospace(_v4144, "numbers") != 0) {
            if(strcmp_tospace(_v4144, 134700160) == 0) {
                _v4144 = skip_param(_v4144);
            }
            if(get_range( &_v4144,  &_v4132,  &_v4136) != 0) {
                if(0 == 0) {
                    goto L44;
                    do {
L44:
                        _v4140 = 0;
                        _t153 = _v4144;
                        if( *_t153 == 0) {
L51:
                            _t216 = _v4132;
                            if(_v4136 < _t216) {
                                goto L57;
                            }
                            goto L52;
                        }
                        _t165 = parse_var2( &_v4140, _t153);
                        _v4144 = _t165;
                        if(_t165 == 0) {
                            goto L64;
                        }
                        if(_v4140 == 0) {
                            goto L51;
                        }
                        _t217 = _v4132;
                        if(_v4136 < _t217) {
L70:
                            warning("Variable not found.");
                            goto L51;
                        }
                        while(var_in_equation(_t217, _v4140) == 0) {
                            _t217 = _t217 + 1;
                            if(_v4136 >= _t217) {
                                continue;
                            }
                            goto L70;
                        }
                        goto L52;
L52:
                        _t157 = 0 + _t216 * 4;
                        _t243 = _t157 +  &n_lhs;
                        _t238 = _t157 +  &lhs;
                        _v4160 = _t243;
                        _t230 = _t157 +  &n_rhs;
                        _v4156 = _t230;
                        _v4168 = _t157 +  &rhs;
                        _v4164 = _t230;
                        while() {
                        }
L57:
                    } while( *_v4144 != 0);
                    _t218 = _v4132;
                    if(_v4136 < _t218) {
                        goto L65;
                    }
                    _t241 =  &n_lhs + _t218 * 4;
                    while( *_t241 == 0 || return_result(_t218) != 0) {
                        _t218 = _t218 + 1;
                        _t241 = _t241 + 4;
                        if(_v4136 >= _t218) {
                            continue;
                        }
                        goto L65;
                    }
                    goto L66;
                }
            } else {
                _t187 = _v4144;
                _t222 =  *_t187 & 255;
                if((_t222 & 4294967295) == 45) {
L9:
                    _v4184 = "Factoring integers on command line instead:\n";
                     *__esp = 1;
                    __printf_chk();
                    goto L10;
                }
                __ctype_b_loc();
                if(( *( *_t187 + 1 + (_t222 & 4294967295) * 2) & 8) == 0) {
L64:
                    _t155 = 0;
L66:
                    if(_t247 == 0) {
                        return _t155;
                    }
                    __stack_chk_fail();
                    return _t155;
                }
                goto L9;
L65:
                _t155 = 1;
                goto L66;
            }
L69:
            _t241 = _t241;
            if(extra_characters(_v4144) != 0) {
                goto L64;
            } else {
                _t170 = _v4132;
                _v4156 = _t170;
                if(_t170 > _v4136) {
                    goto L65;
                }
                _t220 = _t170 << 2;
                _t233 =  &n_lhs + _t220;
                _v4160 = _t233;
                _t171 =  &n_rhs + _t220;
                _v4172 = _t171;
                _t239 =  &rhs + _t220;
                _v4168 = _t171;
                _t221 =  &lhs + _t220;
                _v4164 = _t233;
                goto L35;
                do {
L35:
                    if( *_v4160 == 0) {
                        goto L42;
                    }
                    _t241 = _v4164;
                    factor_power( *_t221, _t241);
                    while(1) {
L37:
                        simp_loop( *_t221, _t241);
                        if(factor_power( *_t221, _t241) == 0) {
                            break;
                        }
                    }
                    if( *_v4172 == 0) {
L41:
                        if(return_result(_v4156) == 0) {
                            goto L64;
                        }
                        goto L42;
                    }
                    _t241 = _v4168;
                    factor_power( *_t239, _t241);
                    while(1) {
L40:
                        simp_loop( *_t239, _t241);
                        if(factor_power( *_t239, _t241) == 0) {
                            break;
                        }
                    }
                    goto L41;
L42:
                    _v4156 = _v4156 + 1;
                    _v4160 =  &(_v4160[4]);
                    _v4172 = _v4172 + 4;
                    _t239 =  &(_t239[1]);
                    _v4168 = _v4168 + 4;
                    _t221 =  &(_t221[1]);
                    _v4164 = _v4164 + 4;
                } while(_v4136 >= _v4156);
            }
            goto L65;
        }
        repeat_flag = 1;
        _v4144 = skip_param(_v4144);
    } else {
        _v4144 = skip_param(_v4144);
    }
L10:
    _t240 =  &_v4144;
    goto L11;
    do {
L11:
        if( *_v4144 != 0) {
            while(1) {
                _t223 = _v4144;
                if( *_t223 == 0) {
                    break;
                }
                strtod(_t223, _t240);
                asm("fstp qword [ebp+0xffffefc8]");
                _t190 = _v4144;
                if(_t223 != _t190) {
                    _t191 = skip_space(_t190);
                    _v4144 = _t191;
                    _t241 =  *_t191 & 255;
                    if((_t241 & 4294967295) == 0) {
L25:
                        _v4144 = skip_space(_v4144);
                        asm("fld qword [ebp+0xffffefc8]");
                        asm("fstp qword [esp]");
                        if(factor_one() != 0) {
                            display_unique();
                            if(is_prime() != 0) {
                                _v4180 = "Prime number!\n";
                                _v4184 = 1;
                                 *__esp = gfp;
                                __fprintf_chk();
                            }
                            continue;
                        }
                        goto L26;
                    }
                    goto L18;
L26:
                    error("Number too large to factor or not a non-zero integer.");
                    goto L12;
                }
                error("Integer expected.");
                goto L12;
L18:
                __ctype_b_loc();
                if(( *( *_t191 + 1 + _t241 * 2) & 8) != 0) {
                    goto L25;
                }
                input_column =  &(_t223[input_column]) - _v4160;
                _t205 = parse_expr(tes,  &n_tes, _t223);
                _v4144 = _t205;
                if(_t205 == 0) {
                    goto L12;
                }
                if(n_tes <= 0) {
                    goto L65;
                }
                calc_simp(tes,  &n_tes);
                if(n_tes != 1 || tes->kind != 0) {
                    error("Integer expected.");
                    goto L12;
                }
                asm("fld qword [eax+0x8]");
                asm("fstp qword [ebp+0xffffefc8]");
                goto L25;
L13:
                _t247 =  *_t199;
                if(_t247 != 0) {
                    continue;
                }
                goto L65;
            }
            goto L30;
        }
L12:
        my_strlcpy( &prompt_str, "Enter integers to factor: ", 80);
        _t199 = get_string( &_v4128, 4096);
        _v4160 = _t199;
        _v4144 = _t199;
        if(_t199 == 0) {
            goto L64;
        }
        goto L13;
L30:
    } while(repeat_flag != 0);
    goto L65;
}

int echo_cmd(char* cp)
{// addr = 0x08052146
    char* _v16;
    intOrPtr _v20;
    int _v24;
    _unknown_ __ebp;
    _unknown_ _t7;

    _v16 = cp;
    _v20 = 134686589;
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return 1;
}

output_options(FILE* ofp)
{// addr = 0x08052177
    int _v16;
    char* _v20;
    intOrPtr _v24;
    FILE* __ebx;
    _unknown_ __ebp;
    _unknown_ _t65;

    __ebx = ofp;
    if(__ebx == 0) {
        return ;
    }
    _v16 = precision;
    _v20 = "precision = %d digits\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(autosolve == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "autosolve\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(autocalc == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "autocalc\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(autoselect == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "autoselect\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    _v16 = debug_level;
    _v20 = "debug_level = %d\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(case_sensitive_flag == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "case_sensitive\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(color_flag == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "color\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(bold_colors == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "bold_colors\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(display2d == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "display2d\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(preserve_surds == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "preserve_surds\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(rationalize_denominators == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "rationalize_denominators\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    _v16 = modulus_mode;
    _v20 = "modulus_mode = %d\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    _v16 = finance_option;
    _v20 = "finance = %d\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(factor_int_flag == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "factor_integers\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(right_associative_power == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "right_associative_power\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    if(negate_highest_precedence == 0) {
        _v20 = "no ";
        _v24 = 1;
         *__esp = __ebx;
        __fprintf_chk();
    }
    _v20 = "negate_highest_precedence\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    _v16 =  &special_variable_characters;
    _v20 = "special_variable_characters = %s\n";
    _v24 = 1;
     *__esp = __ebx;
    __fprintf_chk();
    return;
}

int save_set_options()
{// addr = 0x080524DF
    FILE* fp;
    int _v20;
    int _v24;
    struct _IO_FILE* __ebx;
    _unknown_ __ebp;
    struct _IO_FILE* _t8;
    _unknown_ _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;

    if(rc_file != 0) {
        _t8 = fopen( &rc_file, 134707697);
        __ebx = _t8;
        if(_t8 != 0) {
            _v20 = "; Mathomatic set options loaded at startup.\n";
            _v24 = 1;
             *__esp = _t8;
            __fprintf_chk();
            _v20 = "; This file can be edited.\n\n";
            _v24 = 1;
             *__esp = __ebx;
            __fprintf_chk();
            output_options(__ebx);
            if(fclose(__ebx) != 0) {
                error("Error saving set options.");
                return 0;
            }
            goto L5;
        }
        goto L3;
L5:
        _v20 =  &rc_file;
        _v24 = "All options saved in startup file "%s".\n";
         *__esp = 1;
        __printf_chk();
        return 1;
    }
    error("Set options startup file name not set.");
    return 0;
L3:
    error("Unable to write to set options startup file.");
    return 0;
}

int version_report()
{// addr = 0x080525B0
    unsigned int _v16;
    char* _v20;
    int _v24;
    _unknown_ __ebp;
    signed int _t28;
    _unknown_ _t30;
    _unknown_ _t34;
    _unknown_ _t35;

    _v16 = "15.1.1";
    _v20 = "Mathomatic version %s\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "Compile-time defines used: ";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "UNIX ";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "READLINE ";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v16 = n_tokens;
    _v20 = "\n\nThe current expression array size is %d tokens,\n";
    _v24 = 1;
    _t28 = gfp;
     *__esp = _t28;
    __fprintf_chk();
    _v16 = _t28 * n_tokens * 274877907 >> 32 >> 6;
    _v20 = "making the maximum memory usage %ld kilobytes.\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v16 = security_level;
    _v20 = "The current security level is %d.\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return 1;
}

int version_cmd(char* cp)
{// addr = 0x080526BA
    int rv;
    char* _v20;
    intOrPtr _v24;
    _unknown_ __ebp;
    _unknown_ _t13;
    int _t14;

    _t14 = version_report();
    _v20 = "\nMathomatic is GNU LGPL version 2.1 licensed software,\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "meaning it is free software that comes with no warranty.\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "Type "help copyright" for the copyright and license.\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "\nThe newest version of Mathomatic is always available at\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "the Mathomatic website: http://mathomatic.org\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    _v20 = "Feedback and contributions are welcomed.\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return _t14;
}

int copy_cmd(char* cp)
{// addr = 0x0805277E
    int i;
    int j;
    int k;
    int i1;
    char[99] exists;
    intOrPtr _v32;
    char _v132;
    intOrPtr _v136;
    intOrPtr _v140;
    char* _v144;
    _unknown_ _v164;
    _unknown_ _v168;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t22;
    int _t27;
    int _t28;
    signed int _t29;
    _unknown_ _t30;
    _unknown_ _t33;
    char* _t34;
    _unknown_ _t35;
    int _t36;
    _unknown_ _t45;

    _v144 = cp;
    _v32 =  *gs:0x14];
    if(get_range_eol( &_v144,  &_v136,  &_v140) == 0) {
        _t27 = 0;
        goto L14;
    }
    _t28 = 0;
    _t34 =  &_v132;
    while(1) {
L2:
         *(_t34 + _t28) = 0;
        _t28 = _t28 + 1;
        if(_t28 == 100) {
            break;
        }
    }
    __ebx = _v136;
    _t36 = _v140;
    if(__ebx > _t36) {
        goto L13;
    }
    _t35 =  &n_lhs + __ebx * 4;
    __esi = __ebp + __ebx - 128;
    __ecx = __esi;
    _t29 = __ebx;
    while() {
    }
L14:
    if(_t45 == 0) {
        return _t27;
    }
    __stack_chk_fail();
    return _t27;
L13:
    _t27 = 1;
    goto L14;
}

int replace_cmd(char* cp)
{// addr = 0x08052868
    int i;
    int j;
    int n;
    long int last_v;
    long int v;
    long int[999] va;
    int vc;
    int found;
    char* cp1;
    _unknown_ _v32;
    char _v4032;
    intOrPtr _v4048;
    signed int _v4052;
    intOrPtr _v4056;
    _unknown_ _v4060;
    char* _v4064;
    _unknown_ _v4088;
    _unknown_ _v4092;
    _unknown_ _v4096;
    signed int _v4100;
    intOrPtr _v4104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t106;
    _unknown_ _t108;
    _unknown_ _t112;
    signed int _t115;
    signed int _t119;
    intOrPtr _t124;
    _unknown_ _t125;
    _unknown_ _t126;
    _unknown_ _t129;
    _unknown_ _t135;
    _unknown_ _t136;
    _unknown_ _t138;
    _unknown_ _t142;
    _unknown_ _t143;
    _unknown_ _t147;
    _unknown_ _t153;
    _unknown_ _t154;
    _unknown_ _t155;
    _unknown_ _t156;
    _unknown_ _t157;
    _unknown_ _t158;
    char* _t159;
    _unknown_ _t160;
    _unknown_ _t161;
    _unknown_ _t162;
    _unknown_ _t163;
    _unknown_ _t164;
    _unknown_ _t165;
    _unknown_ _t168;
    char* _t169;
    signed int _t171;
    signed int _t172;
    _unknown_ _t175;
    _unknown_ _t178;
    _unknown_ _t179;
    _unknown_ _t185;
    _unknown_ _t186;
    _unknown_ _t187;
    _unknown_ _t191;
    _unknown_ _t192;
    _unknown_ _t194;
    intOrPtr _t195;
    _unknown_ _t196;
    _unknown_ _t197;
    char* _t198;
    char* _t199;
    _unknown_ _t200;

    if(current_not_defined() != 0) {
        return 0;
    }
    _v4052 = cur_equation;
    _t169 = cp;
    if( *_t169 != 0) {
        _t159 =  &_v4032;
        _t195 = 0;
        _t198 = cp;
        while() {
        }
    } else {
        _v4064 = _t169;
        _t195 = 0;
    }
    _t171 = _v4052;
    _t115 =  *( &n_lhs + _t171 * 4);
    n_tlhs = _t115;
    _v4100 = _t115 << 4;
    _v4104 =  *((intOrPtr*)( &lhs + _t171 * 4));
     *__esp = tlhs;
    L080491C4();
    _t172 = _v4052;
    _t119 =  *( &n_rhs + _t172 * 4);
    n_trhs = _t119;
    _v4100 = _t119 << 4;
    _v4104 =  *((intOrPtr*)( &rhs + _t172 * 4));
     *__esp = trhs;
    L080491C4();
    _v4048 = 0;
    _t199 =  &_v4032;
    while(1) {
        _t124 =  *((intOrPtr*)( &n_lhs + _v4052 * 4));
        _v4056 = _t124;
        _t160 = -1;
        if(_t124 <= 0) {
            goto L26;
        } else {
            goto L17;
        }
    }
}

int approximate_cmd(char* cp)
{// addr = 0x08052D39
    int i;
    int j;
    char* cp1;
    intOrPtr _v32;
    char _v36;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    int* __edi;
    int[99]* __esi;
    _unknown_ __ebp;
    _unknown_ _t48;
    char* _t49;
    int _t50;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t58;
    _unknown_ _t62;
    _unknown_ _t66;
    char* _t67;
    token_type*[99]* _t68;

    __edi =  &_v36;
    while(1) {
        _t67 = cp;
        if(get_range( &cp,  &_v32, __edi) == 0) {
            break;
        }
        _t49 = cp;
        if( *_t49 != 0) {
            if(_t67 != _t49) {
                goto L3;
            }
            goto L6;
        }
L3:
        _t50 = _v32;
        __esi =  &n_lhs;
        _t68 =  &lhs;
        if(_t50 <= _v36) {
            while() {
            }
        } else {
        }
        if( *cp == 0) {
            return 1;
        }
        continue;
L6:
        error("Invalid argument.");
        return 0;
    }
    return 0;
}

int variables_cmd(char* cp)
{// addr = 0x08052E8C
    int i;
    int j;
    int k;
    int i1;
    long int v1;
    long int last_v;
    int vc;
    int cnt;
    sort_type[999] va;
    token_type* p1;
    int n1;
    union language_list lang_code;
    int int_flag;
    int imag_flag;
    intOrPtr _v32;
    intOrPtr _v36;
    char _v8036;
    int _v8048;
    signed int _v8052;
    signed int _v8056;
    int _v8060;
    int _v8064;
    signed int _v8068;
    signed int _v8072;
    int _v8076;
    int _v8080;
    int _v8084;
    intOrPtr _v8096;
    _unknown_ _v8100;
    _unknown_ _v8104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t137;
    _unknown_ _t138;
    _unknown_ _t140;
    _unknown_ _t142;
    _unknown_ _t144;
    _unknown_ _t145;
    int _t150;
    _unknown_ _t152;
    intOrPtr _t154;
    intOrPtr* _t156;
    int _t169;
    int _t170;
    intOrPtr* _t171;
    int _t172;
    signed int _t174;
    int _t176;
    signed int _t177;
    signed int _t178;
    signed int _t179;
    int _t180;
    intOrPtr _t181;
    signed int _t184;
    intOrPtr* _t187;
    intOrPtr* _t188;
    intOrPtr* _t191;
    int _t192;
    int _t193;
    intOrPtr _t194;
    intOrPtr _t195;
    signed int _t196;
    char* _t197;
    int _t198;
    int _t199;
    _unknown_ _t200;
    signed int _t202;
    intOrPtr* _t203;

    if(strcmp_tospace(cp, 134699572) == 0 || strcmp_tospace(cp, "c++") == 0) {
        cp = skip_param(cp);
        _v8076 = 0;
        _v8080 = 1;
    } else {
        if(strcmp_tospace(cp, "java") != 0) {
            if(strcmp_tospace(cp, "int") == 0 || strcmp_tospace(cp, "integer") == 0) {
                cp = skip_param(cp);
                _v8076 = 1;
                _v8080 = 1;
            } else {
                _v8076 = 0;
                _v8080 = 0;
            }
        } else {
            cp = skip_param(cp);
            _v8076 = 0;
            _v8080 = 2;
        }
    }
    if(get_range_eol( &cp,  &_v32,  &_v36) == 0) {
        return 0;
    }
    _t184 = _v32;
    _v8068 = _t184;
    _t172 = _v36;
    _v8064 = _t172;
    _v8084 = 0;
    if(_t184 > _t172) {
L22:
        _v8072 = 0;
        if(_v8068 > _v8064) {
L55:
            if(_v8072 <= 0) {
                return 1;
            }
            _v8096 = vcmp;
            qsort( &_v8036, _v8072, 8);
            _t169 = 0;
            _t197 =  &_v8036;
            _t193 = _v8080;
            while(1) {
            }
        }
    } else {
        _t202 = _t184 << 2;
        _t171 =  &n_lhs + _t202;
        _v8048 =  &rhs + _t202;
        _v8052 =  &lhs + _t202;
        _t203 =  &n_rhs + _t202;
        _t196 = _v8068;
        goto L12;
        do {
L12:
            _t181 =  *_t171;
            if(_t181 <= 0) {
                goto L21;
            }
            _t154 =  *_t203;
            if(_t154 <= 0) {
                _t191 =  *_v8052;
            } else {
                _t191 =  *_v8048;
                _t181 = _t154;
            }
            _t156 = _t191;
            _t192 = 0;
            while( *_t156 != 1 ||  *((intOrPtr*)(_t156 + 8)) != 3) {
                _t192 = _t192 + 2;
                _t156 = _t156 + 32;
                if(_t181 > _t192) {
                    continue;
                }
                goto L21;
            }
            goto L22;
L21:
            _t196 = _t196 + 1;
            _t171 = _t171 + 4;
            _v8048 = _v8048 + 4;
            _v8052 = _v8052 + 4;
            _t203 = _t203 + 4;
        } while(_t196 <= _v8064);
        goto L22;
    }
L23:
    _t174 = _v8068;
    _v8052 = _t174;
    _v8048 = 0;
    _t170 = 0;
    _v8060 = 0;
    _t198 = -1;
    _v8056 = _t174;
    while(1) {
L26:
        _t194 =  *((intOrPtr*)(_t170 +  &n_lhs + _v8068 * 4));
        _t150 = _t198;
        if(_t194 <= 0) {
            break;
        }
L27:
        _t187 =  *((intOrPtr*)(_t170 +  &lhs + _v8056 * 4));
        _t176 = 0;
L28:
        while(1) {
            if( *_t187 != 1) {
L34:
                _t150 = _t198;
                goto L36;
            }
            _t150 =  *(_t187 + 8);
            if(_t150 <= _v8048) {
                goto L34;
            }
            if(_t198 == 255 || _t198 > _t150) {
                goto L35;
            } else {
                if(_t198 != _t150) {
                    goto L34;
                }
                _v8060 = _v8060 + 1;
                _t150 = _t198;
            }
L36:
            _t176 = _t176 + 2;
            _t187 = _t187 + 32;
            if(_t194 <= _t176) {
                _t177 = _v8056;
                _t188 =  *((intOrPtr*)(_t170 +  &rhs + _t177 * 4));
                _t195 =  *((intOrPtr*)(_t170 +  &n_rhs + _t177 * 4));
                if(_t195 <= 0) {
                    goto L51;
                }
                goto L39;
L52:
                if(_t150 == 255) {
                    goto L55;
                }
                _t178 = _v8072;
                 *(__ebp + -8032 + _t178 * 8) = _t150;
                 *(__ebp + -8028 + _t178 * 8) = _v8060;
                _t179 = _t178 + 1;
                _v8072 = _t179;
                if(_t179 != 1000) {
                    _v8048 = _t150;
                    _v8052 = _v8056;
                    _t170 = 0;
                    _v8060 = 0;
                    _t198 = -1;
                    while(1) {
L26:
                        _t194 =  *((intOrPtr*)(_t170 +  &n_lhs + _v8068 * 4));
                        _t150 = _t198;
                        if(_t194 <= 0) {
                            break;
                        }
                    }
                }
                error("Too many variables to list.");
                return 0;
            }
            _t198 = _t150;
            continue;
L39:
            _t180 = 0;
L40:
            while(1) {
                if( *_t188 != 1) {
L46:
                    _t199 = _t150;
                    goto L48;
                }
                _t199 =  *(_t188 + 8);
                if(_t199 <= _v8048) {
                    goto L46;
                }
                if(_t150 == 255 || _t150 > _t199) {
                    goto L47;
                } else {
                    if(_t150 != _t199) {
                        goto L46;
                    }
                    _v8060 = _v8060 + 1;
                    _t199 = _t150;
                }
L48:
                _t180 = _t180 + 2;
                _t188 = _t188 + 32;
                if(_t195 > _t180) {
                    _t150 = _t199;
                    continue;
                }
                _t150 = _t199;
                goto L51;
L47:
                _v8060 = 1;
                goto L48;
            }
L35:
            _v8060 = 1;
            goto L36;
        }
    }
L51:
    _v8052 = _v8052 + 1;
    _t170 = _t170 + 4;
    if(_v8052 <= _v8064) {
        _t198 = _t150;
        goto L26;
    }
    goto L52;
}

int code_cmd(char* cp)
{// addr = 0x08053371
    int i;
    int j;
    union language_list language;
    int int_flag;
    int displayed;
    char* cp1;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t105;
    _unknown_ _t106;
    _unknown_ _t112;
    _unknown_ _t113;
    _unknown_ _t116;
    _unknown_ _t117;
    _unknown_ _t127;
    _unknown_ _t131;
    _unknown_ _t135;
    _unknown_ _t142;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t146;
    _unknown_ _t147;

    __ebx = 0;
    _t144 = 1;
    while(1) {
    }
}

int list_cmd(char* cp)
{// addr = 0x0805364D
    int i;
    int j;
    char* cp1;
    int export_flag;
    intOrPtr _v32;
    char _v36;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    int* __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t28;
    int _t31;
    int _t34;
    char* _t35;
    int _t36;
    _unknown_ _t39;
    _unknown_ _t40;
    _unknown_ _t41;
    char* _t45;
    char* _t46;
    int[99]* _t47;

    _t45 = cp;
    if(strncasecmp(_t45, "gnuplot", 4) != 0) {
        if(strncasecmp(_t45, "export", 4) != 0) {
            _t31 = strncasecmp(_t45, "maxima", 4);
            __esi = 0;
            if(_t31 == 0) {
                cp = skip_param(_t45);
            }
        } else {
            cp = skip_param(_t45);
            __esi = 2;
        }
    } else {
        cp = skip_param(_t45);
        __esi = 3;
    }
    __edi =  &_v36;
    while(1) {
        _t46 = cp;
        _t34 = get_range( &cp,  &_v32, __edi);
        if(_t34 == 0) {
            break;
        }
        _t35 = cp;
        if( *_t35 != 0) {
            if(_t46 != _t35) {
                goto L9;
            }
            error("Invalid argument.");
            return 0;
        }
L9:
        _t36 = _v32;
        _t47 =  &n_lhs;
        if(_t36 <= _v36) {
            while() {
            }
        }
        if( *cp == 0) {
            return 1;
        }
    }
    return _t34;
}

int save_cmd(char* cp)
{// addr = 0x08053768
    FILE* fp;
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    char* _v40;
    char* _v44;
    char* _v48;
    int _v52;
    int _v56;
    _unknown_ __ebp;
    FILE* _t20;
    _unknown_ _t29;
    struct _IO_FILE* _t31;
    _unknown_ _t32;
    char* _t34;
    _unknown_ _t35;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t34 = cp;
    if(security_level > 1) {
        error("Command disabled.");
        _t28 = 0;
        return _t28;
    }
    clean_up();
    if( *_t34 == 0) {
        error("No file name specified.");
        _t28 = 0;
        return _t28;
    }
    if(access(_t34, 0) == 0) {
        if(access(_t34, 2) != 0) {
            error("Specified save file is not writable.");
            _t28 = 0;
            return _t28;
        }
        _v40 = _t34;
        _v44 = "File "%s" exists, overwrite (y/n)? ";
        _v48 = 80;
        _v52 = 1;
        _v56 = 80;
         *__esp =  &prompt_str;
        __snprintf_chk();
        if(get_yes_no() != 0) {
            goto L9;
        } else {
            _v56 = "Command aborted.\n";
             *__esp = 1;
            __printf_chk();
            _t28 = 0;
            return _t28;
        }
    }
L9:
    _t20 = fopen(_t34, 134707697);
    _t31 = _t20;
    if(_t20 != 0) {
        gfp = _t20;
        high_prec = 1;
        0 = list_cmd(134684795);
        high_prec = 0;
        gfp = default_out;
        if(fclose(_t31) != 0 || _t28 == 0) {
            error("Error encountered while saving equations.");
            _t28 = 0;
            return _t28;
        }
        _v52 = _t34;
        _v56 = "All equations saved in file "%s".\n";
         *__esp = 1;
        __printf_chk();
        return _t28;
    }
    error("Can't create specified save file.");
    _t28 = 0;
    return _t28;
}

int clear_cmd(char* cp)
{// addr = 0x080538F6
    int i;
    int j;
    char* cp1;
    signed int _v32;
    char _v36;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    char* __edi;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t14;
    int _t18;
    signed int _t19;
    _unknown_ _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    char* _t23;
    intOrPtr _t24;
    _unknown_ _t25;
    int* _t26;

    __esi =  &_v36;
    while(1) {
        _t23 = cp;
        if(is_all(_t23) != 0) {
            break;
        }
        _t18 = get_range( &cp,  &_v32, __esi);
        if(_t18 == 0) {
            return _t18;
        }
        __edi = cp;
        if( *__edi != 0) {
            if(_t23 != __edi) {
                goto L5;
            }
            error("Invalid argument.");
            return 0;
        }
L5:
        _t19 = _v32;
        _t24 = _v36;
        if(_t19 <= _t24) {
            _t25 = 0 + _t19 * 4;
            __ecx = _t25 +  &n_lhs;
            _t26 = _t25 +  &n_rhs;
            while(1) {
L10:
                 *__ecx = 0;
                 *_t26 = 0;
                _t19 = _t19 + 1;
                __ecx =  &((__ecx)[1]);
                _t26 =  &(_t26[1]);
                if(_t19 > _t24) {
                    break;
                }
            }
            _v32 = _t19;
            goto L12;
        }
L12:
        if( *__edi == 0) {
            return 1;
        }
    }
    clear_all();
    return 1;
}

int elim_sub(int i, long int v)
{// addr = 0x080539AA
    token_type want;
    struct  _v44;
    _unknown_ _v56;
    long int _v60;
    int _v64;
    token_type* _v68;
    char* _v72;
    signed int __ebx;
    long int __edi;
    token_type*[99]* __esi;
    _unknown_ __ebp;
    int _t54;
    _unknown_ _t56;
    signed int _t63;
    _unknown_ _t68;
    _unknown_ _t69;
    long int _t71;
    _unknown_ _t72;
    _unknown_ _t74;

    _t54 = __eax;
    __ebx = _t54;
    __edi = __edx;
    if(_t54 != cur_equation) {
        if(solved_equation(_t54) == 0) {
L8:
            list_var(__edi, 0);
            _v64 =  &var_str;
            _v68 = __ebx + 1;
            _v72 = "Solving equation #%d for (%s) and substituting into the current equation...\n";
             *__esp = 1;
            __printf_chk();
            _v44.level = 1;
            _v44 = 1;
            _v44.token = __edi;
            if(solve_sub( &_v44, 1,  *( &lhs + __ebx * 4), 0 + __ebx * 4 +  &n_lhs,  *( &rhs + __ebx * 4), 0 + __ebx * 4 +  &n_rhs) > 0) {
L6:
                _t63 = cur_equation;
                _v60 = __edi;
                _v64 =  *( &n_rhs + __ebx * 4);
                __esi =  &rhs;
                _v68 =  *(__esi + __ebx * 4);
                _v72 =  &n_rhs + _t63 * 4;
                 *__esp =  *(__esi + _t63 * 4);
                subst_var_with_exp();
                subst_var_with_exp( *( &lhs + cur_equation * 4),  &n_lhs + cur_equation * 4,  *(__esi + __ebx * 4),  *( &n_rhs + __ebx * 4), __edi);
                simp_equation(cur_equation);
                return 1;
            }
            goto L9;
        }
        goto L3;
L9:
        error("Solve failed.");
        return 0;
    }
    error("Error: source and destination are the same.");
    return 0;
L3:
    _t71 =  *( *( &lhs + __ebx * 4) + 8);
    if(_t71 != __edi) {
        goto L8;
    }
    list_var(_t71, 0);
    _v64 =  &var_str;
    _v68 = __ebx + 1;
    _v72 = "Substituting the RHS of equation #%d into the current equation for variable (%s)...\n";
     *__esp = 1;
    __printf_chk();
    goto L6;
}

int display_fraction(double value)
{// addr = 0x08053B59
    double d4;
    double d5;
    int rv;
    char _v20;
    char _v28;
    int _v68;
    int _v80;
    char* _v84;
    intOrPtr _v88;
    int __ebx;
    _unknown_ __ebp;
    _unknown_ _t17;
    int _t20;

    __eflags = __eflags;
    asm("fld qword [ebp+0x8]");
    asm("fst qword [ebp-0x20]");
    _v80 =  &_v28;
    _v84 =  &_v20;
    asm("fstp qword [esp]");
    f_to_fraction();
    asm("fld qword [ebp-0x20]");
    asm("fstp qword [esp+0x10]");
    _v80 = precision;
    _v84 = 134699448;
    _v88 = 1;
     *__esp = gfp;
    __fprintf_chk();
    asm("fld qword [ebp-0x18]");
    __ebx = 0;
    asm("fld1 ");
    asm("fxch st0, st1");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags != 0 || __eflags != 0) {
        _t20 = precision;
        asm("fstp qword [esp+0x1c]");
        _v68 = _t20;
        asm("fld qword [ebp-0x10]");
        asm("fstp qword [esp+0x10]");
        _v80 = _t20;
        _v84 = " = %.*g/%.*g";
        _v88 = 1;
         *__esp = gfp;
        __fprintf_chk();
    } else {
        asm("fstp st0");
    }
    _v84 = 134699005;
    _v88 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return __ebx;
}

int divide_cmd(char* cp)
{// addr = 0x08053C1D
    long int v;
    long int v_tmp;
    int i;
    int j;
    int nleft;
    int nright;
    double lcm;
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    complexs c1;
    complexs c2;
    complexs c3;
    _unknown_ _v16;
    long int _v32;
    _unknown_ _v36;
    int _v40;
    int _v44;
    _unknown_ _v52;
    double _v60;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v116;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v160;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ _v172;
    _unknown_ _v176;
    intOrPtr _v180;
    int _v184;
    _unknown_ _v188;
    signed int __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t177;
    _unknown_ _t179;
    _unknown_ _t183;
    int _t186;
    int _t195;
    _unknown_ _t199;
    _unknown_ _t203;
    _unknown_ _t210;
    _unknown_ _t218;
    _unknown_ _t220;
    _unknown_ _t224;
    _unknown_ _t226;
    int _t228;
    _unknown_ _t234;
    _unknown_ _t239;
    _unknown_ _t243;
    _unknown_ _t245;
    _unknown_ _t248;
    _unknown_ _t250;
    _unknown_ _t255;
    _unknown_ _t258;
    _unknown_ _t265;
    _unknown_ _t267;
    _unknown_ _t269;
    _unknown_ _t272;
    _unknown_ _t274;
    _unknown_ _t275;
    _unknown_ _t276;
    _unknown_ _t280;
    char* _t282;
    _unknown_ _t284;
    token_type*[99]* _t293;
    _unknown_ _t294;
    _unknown_ _t295;

    _t177 = cp;
    _v32 = 0;
    _v40 = 0;
    _v44 = 0;
    pull_number = -1;
    if( *_t177 == 0) {
L3:
        __ebx = next_espace();
        while(1) {
            my_strlcpy( &prompt_str, "Enter dividend: ", 80);
            if(get_expr( *( &rhs + __ebx * 4),  &_v44) != 0) {
                my_strlcpy( &prompt_str, "Enter divisor: ", 80);
                _t186 = get_expr( *( &lhs + __ebx * 4),  &_v40);
                __eflags = _t186;
                if(_t186 == 0) {
                    _t228 = repeat_flag;
                    return _t228;
                }
                __edi = 134699005;
                _v180 = __edi;
                _v184 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                calc_simp( *( &rhs + __ebx * 4),  &_v44);
                _v184 =  &_v40;
                _t293 =  &lhs;
                 *__esp =  *(_t293 + __ebx * 4);
                calc_simp();
                _t195 = get_constant( *(_t293 + __ebx * 4), _v40,  &_v60);
                __eflags = _t195;
                if(_t195 != 0) {
                    asm("fld qword [ebp-0x38]");
                    asm("fstp qword [esp]");
                    check_divide_by_zero();
                }
                goto L10;
            } else {
                _t228 = repeat_flag;
                goto L52;
            }
        }
    }
    _t282 = parse_var2( &_v32, _t177);
    if(_t282 == 0 || extra_characters(_t282) != 0) {
        _t228 = 0;
        return _t228;
    } else {
        goto L3;
    }
    _t228 = 1;
    return _t228;
}

int compare_rhs(int i, int j, int* diff_signp)
{// addr = 0x080543B1
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    int* _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    _unknown_ __ebp;
    signed int _t27;
    int _t30;
    token_type*[99]* _t32;
    signed int _t35;
    _unknown_ _t36;
    int* _t37;
    int _t40;
    int[99]* _t41;
    signed int _t44;
    _unknown_ _t45;
    int* _t47;
    _unknown_ _t48;

    _t37 = __ecx;
    _t27 = __eax;
    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t35 = _t27;
    _t44 = __edx;
    _t47 = _t37;
    _t40 =  *( &n_rhs + _t27 * 4);
    if(se_compare( *( &rhs + _t27 * 4), _t40, _t28, _t40, _t37) == 0 ||  *_t47 != 0) {
        error("Error in compare function or too many terms to compare.");
        _t30 = 0;
        return _t30;
    }
    sign_cmp_flag = 1;
    _v44 = _t47;
    _t41 =  &n_rhs;
    _v48 =  *((intOrPtr*)(_t41 + _t44 * 4));
    _t32 =  &rhs;
    _v52 =  *((intOrPtr*)(_t32 + _t44 * 4));
    _v56 =  *((intOrPtr*)(_t41 + _t35 * 4));
     *__esp =  *((intOrPtr*)(_t32 + _t35 * 4));
    _t30 = se_compare();
    sign_cmp_flag = 0;
    return _t30;
}

int compare_es(int i, int j)
{// addr = 0x08054457
    int rv;
    int diff_sign;
    intOrPtr _v8;
    intOrPtr _v12;
    char _v16;
    char* _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    signed int _v56;
    _unknown_ __ebp;
    signed int _t41;
    signed int _t42;
    int _t44;
    signed int _t45;
    signed int _t47;
    signed int _t49;
    _unknown_ _t50;
    intOrPtr _t55;
    token_type*[99]* _t56;
    intOrPtr _t57;
    token_type*[99]* _t58;
    signed int _t60;
    _unknown_ _t61;

    _v12 = __ebx;
    _v8 = __esi;
    _t49 = i;
    _t60 = j;
    _t41 =  *( &n_lhs + _t49 * 4);
    if(_t41 == 0) {
L9:
        _t42 = 0;
        return _t42;
    }
    _t55 =  *((intOrPtr*)( &n_lhs + _t60 * 4));
    if(_t55 == 0) {
        goto L9;
    }
    sign_cmp_flag = 1;
    _v44 =  &_v16;
    _v48 = _t55;
    _t56 =  &lhs;
    _v52 =  *((intOrPtr*)(_t56 + _t60 * 4));
    _v56 = _t41;
     *__esp =  *((intOrPtr*)(_t56 + _t49 * 4));
    _t44 = se_compare();
    sign_cmp_flag = 0;
    if(_t44 == 0 || _v16 != 0) {
        goto L9;
    } else {
        _t45 =  *( &n_rhs + _t49 * 4);
        if(_t45 == 0) {
            _t42 = _t45 & 4294967295 & ;
L10:
            return _t42;
        }
        _t57 =  *((intOrPtr*)( &n_rhs + _t60 * 4));
        if(_t57 == 0) {
            goto L9;
        }
        sign_cmp_flag = 1;
        _v44 =  &_v16;
        _v48 = _t57;
        _t58 =  &rhs;
        _v52 =  *((intOrPtr*)(_t58 + _t60 * 4));
        _v56 = _t45;
         *__esp =  *((intOrPtr*)(_t58 + _t49 * 4));
        _t47 = se_compare();
        sign_cmp_flag = 0;
        if(_t47 == 0) {
            goto L9;
        }
        _t42 = _t47 & 4294967295 & ;
        return _t42;
    }
    goto L10;
}

int compare_cmd(char* cp)
{// addr = 0x0805454A
    int i;
    int j;
    int diff_sign;
    int symb;
    intOrPtr _v32;
    int _v48;
    int* _v52;
    int* _v56;
    int* _v60;
    _unknown_ _v72;
    intOrPtr _v76;
    char* _v80;
    int _v84;
    int* _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t244;
    int _t245;
    long int _t250;
    _unknown_ _t252;
    signed int _t256;
    _unknown_ _t259;
    _unknown_ _t261;
    int* _t262;
    _unknown_ _t264;
    _unknown_ _t275;
    _unknown_ _t277;
    _unknown_ _t279;
    _unknown_ _t280;
    _unknown_ _t281;
    _unknown_ _t284;
    _unknown_ _t287;
    _unknown_ _t292;
    _unknown_ _t300;
    _unknown_ _t305;
    _unknown_ _t317;
    _unknown_ _t320;
    _unknown_ _t322;
    _unknown_ _t324;
    _unknown_ _t327;
    int _t330;
    _unknown_ _t332;
    _unknown_ _t334;
    _unknown_ _t335;
    _unknown_ _t340;
    _unknown_ _t344;
    _unknown_ _t346;
    _unknown_ _t351;
    _unknown_ _t356;
    _unknown_ _t361;
    _unknown_ _t363;
    _unknown_ _t364;
    _unknown_ _t367;
    _unknown_ _t368;
    char* _t374;
    signed int _t375;
    _unknown_ _t376;
    _unknown_ _t377;
    _unknown_ _t378;
    _unknown_ _t379;
    _unknown_ _t380;
    _unknown_ _t381;
    int _t382;
    int* _t387;
    _unknown_ _t389;
    _unknown_ _t391;
    _unknown_ _t394;
    int* _t395;
    _unknown_ _t396;
    _unknown_ _t400;
    _unknown_ _t402;
    int _t403;
    token_type*[99]* _t404;
    token_type*[99]* _t405;
    token_type*[99]* _t406;
    int* _t407;
    token_type*[99]* _t408;
    token_type*[99]* _t409;
    token_type*[99]* _t410;
    token_type*[99]* _t411;

    _t374 = cp;
    _t245 = strncasecmp(_t374, "symbolic", 3);
    _v48 = 0;
    if(_t245 == 0) {
        cp = skip_param(_t374);
        _v48 = 1;
    }
    if(strcmp_tospace(cp, "with") == 0) {
        cp = skip_param(cp);
    }
    _t250 = decstrtol(cp,  &cp);
    _t403 = _t250;
    _t375 = _t250 - 1;
    if(not_defined(_t375) != 0) {
        return 0;
    }
    if(strcmp_tospace(cp, "with") == 0) {
        cp = skip_param(cp);
    }
    _t256 = get_default_en(cp);
    __esi = _t256;
    if(_t256 >= 0) {
        return 0;
    }
    if(_t375 != _t256) {
        _v76 = _t256 + 1;
        _v80 = _t403;
        _v84 = "Comparing #%d with #%d...\n";
        _v88 = 1;
         *__esp = gfp;
        __fprintf_chk();
        if( *( &n_rhs + _t375 * 4) == 0) {
            if( *( &n_rhs + __esi * 4) != 0) {
L25:
                error("Cannot compare an equation with a non-equation.");
                return 0;
            }
            goto L14;
        }
        goto L11;
L14:
        _t382 =  &n_lhs + _t375 * 4;
        _v56 = _t382;
        _v88 = _t382;
        _t404 =  &lhs;
         *__esp =  *(_t404 + _t375 * 4);
        simp_loop();
        _t262 =  &n_lhs + __esi * 4;
        _v52 = _t262;
        simp_loop( *(_t404 + __esi * 4), _t262);
        if(compare_es(_t375, __esi) == 0) {
            if(debug_level < 0) {
                _v80 = "Simplifying both expressions...";
                _v84 = 134686589;
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
            }
            symb_flag = _v48;
            _v80 = 1;
            _v84 = 0;
            _v88 = _v56;
            _t405 =  &lhs;
             *__esp =  *(_t405 + _t375 * 4);
            simpa_side();
            simpa_side( *(_t405 + __esi * 4), _v52, 0, 1);
            symb_flag = 0;
            if(debug_level < 0) {
                list_sub(_t375);
                list_sub(__esi);
            }
            if(compare_es(_t375, __esi) == 0) {
                _v88 = _v56;
                _t406 =  &lhs;
                 *__esp =  *(_t406 + _t375 * 4);
                uf_simp();
                uf_simp( *(_t406 + __esi * 4), _v52);
                if(compare_es(_t375, __esi) == 0) {
                    _v84 = "Expressions differ.\n";
                    _v88 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    return 0;
                }
            } else {
                _v84 = "Expressions are identical.\n";
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                return 1;
            }
L23:
            _v84 = "Expressions are identical.\n";
            _v88 = 1;
             *__esp = gfp;
            __fprintf_chk();
            return 1;
        }
        _v84 = "Expressions are identical.\n";
        _v88 = 1;
         *__esp = gfp;
        __fprintf_chk();
        return 1;
    } else {
        error("Cannot compare an equation with itself.");
        return 0;
    }
L11:
    if( *( &n_rhs + __esi * 4) == 0) {
        goto L25;
    }
    if(compare_es(_t375, __esi) == 0) {
        if(solved_equation(_t375) == 0 || solved_equation(__esi) == 0) {
L37:
            if(debug_level < 0) {
                _v80 = "Solving both equations for zero and unfactoring...";
                _v84 = 134686589;
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
            }
            _t287 = 0 + _t375 * 4;
            _t407 = _t287 +  &n_rhs;
            _v52 = _t287 +  &n_lhs;
            if(solve_sub( &zero_token, 1,  *( &lhs + _t375 * 4), _v52,  *( &rhs + _t375 * 4), _t407) <= 0) {
                return 0;
            }
            _t292 = 0 + __esi * 4;
            _t387 = _t292 +  &n_rhs;
            _v56 = _t387;
            _v60 = _t292 +  &n_lhs;
            if(solve_sub( &zero_token, 1,  *( &lhs + __esi * 4), _v60,  *( &rhs + __esi * 4), _t387) <= 0) {
                return 0;
            }
            uf_simp( *( &rhs + _t375 * 4), _t407);
            uf_simp( *( &rhs + __esi * 4), _v56);
            if(compare_rhs() == 0) {
                if(debug_level < 0) {
                    _v80 = "Simplifying both equations...";
                    _v84 = 134686589;
                    _v88 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                }
                symb_flag = _v48;
                simpa_side( *( &rhs + _t375 * 4), _t407, 0, 0);
                simpa_side( *( &rhs + __esi * 4), _v56, 0, 0);
                symb_flag = 0;
                if(compare_rhs() == 0) {
                    if(solve_sub( &zero_token, 1,  *( &lhs + _t375 * 4), _v52,  *( &rhs + _t375 * 4), _t407) <= 0) {
                        return 0;
                    }
                    if(solve_sub( &zero_token, 1,  *( &lhs + __esi * 4), _v60,  *( &rhs + __esi * 4), _v56) <= 0) {
                        return 0;
                    }
                    _v88 = _t407;
                    _t408 =  &rhs;
                     *__esp =  *(_t408 + _t375 * 4);
                    uf_simp();
                    uf_simp( *(_t408 + __esi * 4), _v56);
                    if(compare_rhs() == 0) {
                        _v84 = "Equations differ.\n";
                        _v88 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                        return 0;
                    }
                    _v84 = "Equations are identical.\n";
                    _v88 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    return 1;
                }
                _v84 = "Equations are identical.\n";
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                return 1;
            }
            _v84 = "Equations are identical.\n";
            _v88 = 1;
             *__esp = gfp;
            __fprintf_chk();
            return 1;
        }
        _t330 =  &n_rhs + _t375 * 4;
        _v56 = _t330;
        _v88 = _t330;
        _t409 =  &rhs;
         *__esp =  *(_t409 + _t375 * 4);
        simp_loop();
        _t395 =  &n_rhs + __esi * 4;
        _v52 = _t395;
        simp_loop( *(_t409 + __esi * 4), _t395);
        if(compare_rhs() != 0) {
L52:
            if(_v32 != 0 ||  *((intOrPtr*)( *( &lhs + _t375 * 4) + 8)) !=  *((intOrPtr*)( *( &lhs + __esi * 4) + 8))) {
                _v84 = "Variable (";
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                list_proc( *( &lhs + _t375 * 4),  *((int*)( &n_lhs + _t375 * 4)), 0);
                _v84 = ") in the first equation is equal to (";
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                if(_v32 != 0) {
                    _v84 = 134687067;
                    _v88 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                }
                list_proc( *( &lhs + __esi * 4),  *( &n_lhs + __esi * 4), 0);
                _v84 = ") in the second equation.\n";
                _v88 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                if(_v32 == 0) {
                    return 2;
                }
                return 0;
            }
            _v84 = "Equations are identical.\n";
            _v88 = 1;
             *__esp = gfp;
            __fprintf_chk();
            return 1;
        }
        if(debug_level < 0) {
            _v80 = "Simplifying both equations...";
            _v84 = 134686589;
            _v88 = 1;
             *__esp = gfp;
            __fprintf_chk();
        }
        symb_flag = _v48;
        _v80 = 1;
        _v84 = 0;
        _v88 = _v56;
        _t410 =  &rhs;
         *__esp =  *(_t410 + _t375 * 4);
        simpa_side();
        simpa_side( *(_t410 + __esi * 4), _v52, 0, 1);
        symb_flag = 0;
        if(debug_level < 0) {
            list_sub(_t375);
            list_sub(__esi);
        }
        if(compare_rhs() != 0) {
            goto L52;
        }
        _v88 = _v56;
        _t411 =  &rhs;
         *__esp =  *(_t411 + _t375 * 4);
        uf_simp();
        uf_simp( *(_t411 + __esi * 4), _v52);
        if(compare_rhs() != 0) {
            goto L52;
        }
        goto L37;
    }
    _v84 = "Equations are identical.\n";
    _v88 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return 1;
}

int find_more(token_type* equation, int* np, int en)
{// addr = 0x08054E04
    int i;
    int j;
    int k;
    int level;
    int diff_sign;
    int found_se;
    char _v32;
    intOrPtr _v48;
    signed int _v52;
    intOrPtr* _v56;
    signed int _v60;
    int* _v64;
    int _v68;
    char* _v92;
    intOrPtr _v96;
    signed int _v100;
    intOrPtr _v104;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t65;
    int _t66;
    signed int _t69;
    int* _t88;
    _unknown_ _t89;
    intOrPtr* _t104;
    intOrPtr* _t109;
    int _t110;
    intOrPtr _t111;
    signed int _t112;
    int* _t117;
    intOrPtr* _t118;
    intOrPtr _t119;
    signed int _t128;
    int _t131;

    _t118 = __edx;
    _t110 = __ecx;
    _v48 = __eax;
    _v56 = _t118;
    _v60 = _t110;
    if( *_t118 <= 0) {
        return 0;
    }
    _t66 = solved_equation(_t110);
    _t131 = 1;
    if(_t66 == 0) {
        return 0;
    }
    while(1) {
L19:
        _t111 =  *_v56;
        if(_t111 <= 1) {
            break;
        }
        _v52 = 0;
        _t128 = 1;
        __ebx = 1;
L14:
        while(1) {
            if(__ebx >= _t111) {
L5:
                if(__ebx == _t128) {
L12:
                    _t128 = __ebx + 2;
                    _t111 =  *_v56;
                    if(_t111 <= _t128) {
                        if(_v52 == 0) {
                            return 0;
                        }
                        _t131 = _t131 + 1;
                        goto L19;
                    }
                    goto L13;
                }
                goto L6;
L13:
                __ebx = _t128;
                continue;
            }
            _t119 = _v48;
            if(_t131 >  *((intOrPtr*)((__ebx << 4) + _t119 + 4))) {
                goto L5;
            }
            _t109 = _t119 + (__ebx << 4) + 36;
            while(1) {
                __ebx = __ebx + 2;
                asm("o16 nop ");
                if(__ebx >= _t111) {
                    break;
                }
                _t109 = _t109 + 32;
                if( *_t109 >= _t131) {
                    continue;
                }
                goto L5;
            }
            goto L5;
L6:
            _t69 = _t128 - 1;
            _v52 = _t69;
            _v64 = (_t69 << 4) + _v48;
            _v92 =  &_v32;
            _t112 = _v60;
            _v96 =  *((intOrPtr*)( &n_rhs + _t112 * 4));
            _v100 =  *( &rhs + _t112 * 4);
            _v104 = __ebx - _v52;
             *__esp = _v64;
            if(se_compare() == 0) {
                _v52 = 1;
                goto L12;
            }
            _v68 = _t131;
            if(_v32 == 0) {
                _v100 =  *_v56 - __ebx << 4;
                _v104 = (__ebx << 4) + _v48;
                 *__esp = (_t128 << 4) + _v48;
                L080491C4();
                 *_v56 =  *_v56 + _t128 - __ebx;
            } else {
                _v100 =  *_v56 - __ebx << 4;
                _v104 = (__ebx << 4) + _v48;
                 *__esp = (_t128 << 4) + _v48 + 32;
                L080491C4();
                 *_v56 = _t128 +  *_v56 + 2 - __ebx;
                _t131 = _v68 + 1;
                _t117 = _v64;
                _t117[1] = _t131;
                 *_t117 = 0;
                asm("fld1 ");
                asm("fchs ");
                asm("fstp qword [ecx+0x8]");
                _t104 = (_t128 << 4) + _v48;
                 *(_t104 + 4) = _t131;
                 *_t104 = 2;
                 *((intOrPtr*)(_t104 + 8)) = 3;
                _v52 = _t128 + 1;
            }
            _t88 = (_v52 << 4) + _v48;
            _t88[1] = _t131;
             *_t88 = 1;
            _t88[2] =  *( *((intOrPtr*)( &lhs + _v60 * 4)) + 8);
            return 1;
        }
    }
    return 0;
}

int tally_cmd(char* cp)
{// addr = 0x08054FE6
    int i;
    double count;
    int arithmetic_mean;
    int _v40;
    signed int _v52;
    int _v56;
    _unknown_ __ebx;
    char* __edi;
    signed int __esi;
    _unknown_ __ebp;
    _unknown_ _t60;
    int _t61;
    _unknown_ _t63;
    token_type* _t64;
    _unknown_ _t68;
    _unknown_ _t71;
    _unknown_ _t75;
    signed int _t83;
    _unknown_ _t91;
    int _t97;
    signed int _t103;
    _unknown_ _t106;
    _unknown_ _t111;
    signed int _t113;
    signed int _t114;
    signed int _t115;
    char* _t117;
    _unknown_ _t118;
    int _t124;
    int _t136;
    _unknown_ _t146;
    _unknown_ _t160;

    _t117 = cp;
    _t61 = strncasecmp(_t117, "average", 4);
    _v40 = 0;
    if(_t61 == 0) {
        _t117 = skip_param(_t117);
        _v40 = 1;
    }
    if(extra_characters(_t117) != 0) {
        return 0;
    }
    _t64 = trhs;
     *_t64 = zero_token.kind;
    _t64->level =  *134715672;
     *((intOrPtr*)(_t64 + 8)) =  *134715676;
     *((intOrPtr*)(_t64 + 12)) =  *134715680;
    n_trhs = 1;
    __edi = "Running total = ";
    _v52 = __edi;
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    list_proc(trhs, n_trhs, 0);
    __esi = 134699005;
    _v52 = __esi;
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    asm("fldz ");
    asm("fstp qword [ebp-0x20]");
    while(1) {
        _v52 = __esi;
        _v56 = 1;
         *__esp = gfp;
        __fprintf_chk();
        my_strlcpy( &prompt_str, "Enter value: ", 80);
        if(get_expr(tlhs,  &n_tlhs) == 0) {
            break;
        }
        if(n_trhs + n_tlhs + 1 > n_tokens) {
            error_huge();
        }
        if(n_tlhs <= 0) {
L17:
            _t124 = n_trhs;
            if(_t124 <= 0) {
L20:
                 *((intOrPtr*)(trhs + (_t124 << 4))) = 2;
                 *( &(trhs->level) + (n_trhs << 4)) = 1;
                 *((n_trhs << 4) + trhs + 8) = 1;
                _t83 = n_trhs + 1;
                n_trhs = _t83;
                _v52 = n_tlhs << 4;
                _v56 = tlhs;
                 *__esp = trhs + (_t83 << 4);
                L080491C4();
                n_trhs = n_trhs + n_tlhs;
                calc_simp(trhs,  &n_trhs);
                asm("fld qword [ebp-0x20]");
                asm("fadd dword [0x8075170]");
                asm("fstp qword [ebp-0x20]");
                _v52 = __edi;
                _v56 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                list_proc(trhs, n_trhs, 0);
                _v52 = __esi;
                _v56 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                asm("fldz ");
                asm("fld qword [ebp-0x20]");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(_t160 > 0) {
                    if(_v40 == 0) {
                        continue;
                    }
                    _v52 = n_trhs << 4;
                    _v56 = trhs;
                     *__esp = tlhs;
                    L080491C4();
                    _t97 = n_trhs;
                    n_tlhs = _t97;
                    if(_t97 + 2 > n_tokens) {
                        error_huge();
                    }
                    _t136 = n_tlhs;
                    if(_t136 <= 0) {
L10:
                         *((intOrPtr*)(tlhs + (_t136 << 4))) = 2;
                         *( &(tlhs->level) + (n_tlhs << 4)) = 1;
                         *((n_tlhs << 4) + tlhs + 8) = 4;
                        _t103 = n_tlhs + 1;
                        n_tlhs = _t103;
                         *(tlhs + (_t103 << 4)) = 0;
                         *( &(tlhs->level) + (n_tlhs << 4)) = 1;
                        asm("fld qword [ebp-0x20]");
                        asm("fstp qword [edx+eax+0x8]");
                        n_tlhs = n_tlhs + 1;
                        calc_simp(tlhs,  &n_tlhs);
                        _v52 = "Average = ";
                        _v56 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                        list_proc(tlhs, n_tlhs, 0);
                        _v52 = __esi;
                        _v56 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                        continue;
                    }
                    _t113 = 0;
                    while(1) {
L9:
                         *((intOrPtr*)(tlhs + (_t113 << 4) + 4)) =  *((intOrPtr*)(tlhs + (_t113 << 4) + 4)) + 1;
                        _t113 = _t113 + 1;
                        _t136 = n_tlhs;
                        if(_t136 <= _t113) {
                            break;
                        }
                    }
                    goto L10;
                }
                goto L21;
            }
            goto L18;
L21:
            continue;
        } else {
            _t115 = 0;
            while(1) {
L16:
                 *((intOrPtr*)(tlhs + (_t115 << 4) + 4)) =  *((intOrPtr*)(tlhs + (_t115 << 4) + 4)) + 1;
                _t115 = _t115 + 1;
                if(n_tlhs <= _t115) {
                    break;
                }
            }
            goto L17;
        }
L18:
        _t114 = 0;
        while(1) {
L19:
             *((intOrPtr*)(trhs + (_t114 << 4) + 4)) =  *((intOrPtr*)(trhs + (_t114 << 4) + 4)) + 1;
            _t114 = _t114 + 1;
            _t124 = n_trhs;
            _t160 = _t124 - _t114;
            if(_t160 <= 0) {
                break;
            }
        }
        goto L20;
    }
    _v52 = "End.\n";
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return 1;
}

int complex_func(char* cp, int imag_flag)
{// addr = 0x08055415
    int i;
    int j;
    int k;
    int beg;
    int found_imag;
    int has_imag;
    int has_real;
    token_type* source;
    token_type* dest;
    int n1;
    int* nps;
    int* np;
    long int v;
    int _v32;
    long int _v36;
    int _v52;
    token_type* _v56;
    int* _v60;
    intOrPtr _v64;
    token_type* _v68;
    int _v72;
    int _v76;
    signed int _v80;
    signed int _v84;
    int* _v88;
    long int _v116;
    int* _v120;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t118;
    token_type*[99]* _t121;
    _unknown_ _t124;
    _unknown_ _t131;
    token_type*[99]* _t140;
    _unknown_ _t154;
    char* _t156;
    token_type*[99]* _t158;
    char* _t160;
    int* _t161;
    int[99]* _t162;
    int _t163;
    signed int _t164;
    token_type* _t166;
    int _t168;
    _unknown_ _t170;
    signed int _t174;
    int _t179;
    signed int _t180;
    signed int _t183;
    _unknown_ _t184;
    _unknown_ _t186;
    token_type* _t190;
    token_type* _t192;
    int _t193;
    signed int _t194;
    _unknown_ _t195;

    _t160 = __eax;
    _v64 = __edx;
    _v36 = 3;
    if(current_not_defined() != 0) {
        return 0;
    }
    _v80 = cur_equation;
    _v84 = next_espace();
    _t174 = _v80;
    if( *( &n_rhs + _t174 * 4) == 0) {
        _t121 =  &lhs;
        _v56 =  *(_t121 + _v80 * 4);
        _v60 =  &n_lhs + _v80 * 4;
        _t164 = _v84;
        _v68 =  *(_t121 + _t164 * 4);
        _v88 =  &n_lhs + _t164 * 4;
    } else {
        _t158 =  &rhs;
        _v56 =  *(_t158 + _t174 * 4);
        _v60 =  &n_rhs + _t174 * 4;
        _t183 = _v84;
        _v68 =  *(_t158 + _t183 * 4);
        _v88 =  &n_rhs + _t183 * 4;
    }
    if( *_t160 != 0) {
        _t156 = parse_var2( &_v36, _t160);
        if(_t156 == 0) {
            return 0;
        }
        if(extra_characters(_t156) != 0) {
            return 0;
        }
    }
    simp_loop(_v56, _v60);
    _v120 = _v60;
    _t190 = _v56;
     *__esp = _t190;
    uf_simp();
    factorv(_t190, _v60, _v36);
    partial_flag = 0;
    uf_simp(_t190, _v60);
    partial_flag = 1;
    _v32 = 1;
    _t166 = _v68;
     *_t166 = zero_token.kind;
    _t166->level =  *134715672;
     *((intOrPtr*)(_t166 + 8)) =  *134715676;
     *((intOrPtr*)(_t166 + 12)) =  *134715680;
    _t179 =  *_v60;
    if(_t179 <= 0) {
        warning("Expression was not a mix.");
        goto L30;
    }
    _v76 = 0;
    _v72 = 0;
    _v52 = 0;
    _t163 = 0;
    while(1) {
        _t168 = 0;
        if(_t179 <= _t163) {
            goto L18;
        } else {
            goto L26;
        }
    }
L30:
    _t161 =  &_v32;
    _t192 = _v68;
    while(1) {
L31:
        simp_loop(_t192, _t161);
        asm("fldz ");
        asm("fstp qword [esp+0xc]");
        _v116 = _v36;
        _v120 = _t161;
         *__esp = _t192;
        if(factor_plus() == 0) {
            break;
        }
    }
    simp_divide(_v68,  &_v32);
    _t180 = _v80;
    if( *((intOrPtr*)( &n_rhs + _t180 * 4)) != 0) {
        _t162 =  &n_lhs;
        _v116 =  *(_t162 + _t180 * 4) << 4;
        _t140 =  &lhs;
        _v120 =  *(_t140 + _t180 * 4);
        _t194 = _v84;
         *__esp =  *(_t140 + _t194 * 4);
        L080491C4();
         *((intOrPtr*)(_t162 + _t194 * 4)) =  *((intOrPtr*)(_t162 + _v80 * 4));
    }
     *_v88 = _v32;
    _t193 = _v84;
    cur_equation = _t193;
    return return_result(_t193);
}

int imaginary_cmd(char* cp)
{// addr = 0x08055703
    _unknown_ __ebp;
    _unknown_ _t2;

    return complex_func();
}

int real_cmd(char* cp)
{// addr = 0x08055718
    _unknown_ __ebp;
    _unknown_ _t2;

    return complex_func();
}

int pause_cmd(char* cp)
{// addr = 0x0805572D
    char* cp1;
    char[4095] buf;
    intOrPtr _v16;
    char _v4112;
    intOrPtr _v4136;
    char* _v4140;
    intOrPtr _v4144;
    int _v4148;
    intOrPtr _v4152;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t19;
    int _t20;
    _unknown_ _t21;
    char* _t24;
    signed int _t26;
    char* _t27;
    char* _t29;
    _unknown_ _t31;
    signed int _t37;

    _t27 = cp;
    _v16 =  *gs:0x14];
    if(test_mode != 0) {
L5:
        _t20 = 1;
        goto L7;
    }
    isatty(0);
    if(0 == 0) {
        goto L5;
    } else {
        _t28 =  *_t27 == 0 ? "Please press the Enter key" : _t27;
        _v4136 =  *_t27 == 0 ? "Please press the Enter key" : _t27;
        _v4140 = " ==== %s ==== ";
        _v4144 = 80;
        _v4148 = 1;
        _v4152 = 80;
         *__esp =  &prompt_str;
        __snprintf_chk();
        _t24 = get_string( &_v4112, 4096);
        _t29 = _t24;
        if(_t24 == 0 || strncasecmp(_t24, "quit", 4) == 0) {
            _t20 = 0;
        } else {
            _t26 = strncasecmp(_t29, "exit", 4);
            _t37 = _t26;
            _t20 = _t26 & 4294967295 & ;
        }
    }
L7:
    if(_t37 == 0) {
        return _t20;
    }
    __stack_chk_fail();
    return _t20;
}

int output_current_directory(FILE* ofp)
{// addr = 0x08055821
    char[4095] buf;
    intOrPtr _v16;
    char _v4112;
    char* _v4128;
    char* _v4132;
    int _v4136;
    FILE* __ebx;
    _unknown_ __ebp;
    _unknown_ _t11;
    int _t12;
    FILE* _t13;
    _unknown_ _t16;
    FILE* _t19;

    __ebx = ofp;
    _v16 =  *gs:0x14];
    if(security_level > 2 || __ebx == 0) {
L4:
        _t12 = 0;
    } else {
        _v4136 = 4096;
        _t13 =  &_v4112;
         *__esp = _t13;
        L080491E4();
        _t19 = _t13;
        if(_t19 == 0) {
            goto L4;
        }
        _v4128 =  &_v4112;
        _v4132 = "directory = %s\n";
        _v4136 = 1;
         *__esp = __ebx;
        __fprintf_chk();
        _t12 = 1;
    }
    if(_t19 == 0) {
        return _t12;
    }
    __stack_chk_fail();
    return _t12;
}

int set_options(char* cp)
{// addr = 0x080558A8
    int i;
    int negate;
    char* cp1;
    char* option_string;
    char* _v32;
    char[4095]* _v52;
    int _v56;
    _unknown_ __ebx;
    int __edi;
    char* __esi;
    _unknown_ __ebp;
    char* _t120;
    char* _t123;
    int _t125;
    signed int _t129;
    signed int _t130;
    signed int _t131;
    signed int _t132;
    signed int _t133;
    signed int _t134;
    signed int _t136;
    signed int _t137;
    signed int _t139;
    signed int _t140;
    signed int _t142;
    signed int _t143;
    signed int _t144;
    _unknown_ _t145;
    _unknown_ _t148;
    _unknown_ _t153;
    int _t159;
    _unknown_ _t160;
    _unknown_ _t161;
    int _t166;
    _unknown_ _t168;
    int _t176;
    int _t178;
    _unknown_ _t179;
    _unknown_ _t180;
    _None _t182;
    _unknown_ _t183;
    _unknown_ _t184;
    _unknown_ _t185;
    int _t187;
    _unknown_ _t188;
    char* _t190;
    _unknown_ _t194;
    _unknown_ _t195;
    _unknown_ _t196;
    char* _t197;
    _unknown_ _t198;
    char* _t199;
    char* _t200;
    char* _t202;
    char* _t203;
    char* _t205;
    char* _t206;

    while(1) {
L1:
        _t120 = skip_space(cp);
        _t199 = _t120;
        cp = _t120;
        if( *_t120 == 0) {
            return 1;
        }
L3:
        if(security_level > 2) {
            break;
        } else {
            if(strncasecmp(_t120, "dir", 3) != 0) {
                break;
            } else {
                _t190 = skip_param(_t199);
                cp = _t190;
                if( *_t190 == 0) {
                    _t197 = getenv("HOME");
                    _v32 = _t197;
                    if(_t197 != 0) {
                        cp = _t197;
                    }
                }
                if(chdir(cp) != 0) {
                    error("Error changing directory.");
                    return 0;
                }
L10:
                output_current_directory(__imp__stdout);
                return 1;
            }
        }
    }
L11:
    __edi = skip_no( &cp);
    _t200 = cp;
    _t123 = skip_param(_t200);
    __esi = _t123;
    cp = _t123;
    if(strncasecmp(_t200, "debug", 5) != 0) {
        _t125 = strncasecmp(_t200, "special", 7);
        if(_t125 != 0) {
            if(strncasecmp(_t200, "columns", 6) != 0) {
L28:
                if(strncasecmp(_t200, "wide", 4) != 0) {
                    if(strncasecmp(_t200, "precision", 4) != 0) {
                        _t129 = strcmp_tospace(_t200, "auto");
                        if(_t129 != 0) {
                            _t130 = strncasecmp(_t200, "autosolve", 9);
                            if(_t130 != 0) {
                                _t131 = strncasecmp(_t200, "autocalc", 8);
                                if(_t131 != 0) {
                                    _t132 = strncasecmp(_t200, "autoselect", 10);
                                    if(_t132 != 0) {
                                        _t133 = strncasecmp(_t200, "case", 4);
                                        if(_t133 != 0) {
                                            _t134 = strncasecmp(_t200, "display2d", 7);
                                            if(_t134 != 0) {
                                                if(strncasecmp(_t200, "prompt", 6) != 0) {
                                                    _t136 = strncasecmp(_t200, "preserve", 8);
                                                    if(_t136 != 0) {
                                                        _t137 = strncasecmp(_t200, "rationalize", 11);
                                                        if(_t137 != 0) {
                                                            if(strncasecmp(_t200, "modulus_mode", 3) != 0) {
                                                                _t139 = strncasecmp(_t200, "color", 5);
                                                                if(_t139 != 0) {
                                                                    _t140 = strncasecmp(_t200, 134683028, 4);
                                                                    if(_t140 != 0) {
                                                                        if(strncasecmp(_t200, "finance", 7) != 0) {
                                                                            _t142 = strncasecmp(_t200, "factor_integers", 6);
                                                                            if(_t142 != 0) {
                                                                                _t143 = strncasecmp(_t200, "right_associative_power", 5);
                                                                                if(_t143 != 0) {
                                                                                    _t144 = strncasecmp(_t200, "negate_highest_precedence", 6);
                                                                                    if(_t144 != 0) {
                                                                                        if(security_level > 1 || strcmp_tospace(_t200, "save") != 0) {
                                                                                            error("Unknown set option.");
                                                                                            return 0;
                                                                                        } else {
                                                                                            if(rc_file != 0) {
                                                                                                if(__edi == 0) {
                                                                                                    if(save_set_options() != 0) {
                                                                                                        return extra_characters(cp) & 4294967295 & ;
                                                                                                    }
                                                                                                    return 0;
                                                                                                }
                                                                                                goto L87;
                                                                                            }
                                                                                            error("Set options startup file name not set.");
                                                                                            return 0;
L87:
                                                                                            if(unlink( &rc_file) != 0) {
                                                                                                return extra_characters(cp) & 4294967295 & ;
                                                                                            }
                                                                                            _v52 =  &rc_file;
                                                                                            _v56 = "Set options startup file "%s" removed.\n";
                                                                                             *__esp = 1;
                                                                                            __printf_chk();
                                                                                            return extra_characters(cp) & 4294967295 & ;
                                                                                        }
                                                                                        return extra_characters(cp) & 4294967295 & ;
                                                                                    }
                                                                                    goto L81;
                                                                                }
                                                                                goto L79;
L81:
                                                                                negate_highest_precedence = _t144 & 4294967295 & ;
                                                                                while(1) {
L1:
                                                                                    _t120 = skip_space(cp);
                                                                                    _t199 = _t120;
                                                                                    cp = _t120;
                                                                                    if( *_t120 == 0) {
                                                                                        return 1;
                                                                                    }
L3:
                                                                                    if(security_level > 2) {
                                                                                        break;
                                                                                    } else {
                                                                                        if(strncasecmp(_t120, "dir", 3) != 0) {
                                                                                            break;
                                                                                        } else {
                                                                                            _t190 = skip_param(_t199);
                                                                                            cp = _t190;
                                                                                            if( *_t190 == 0) {
                                                                                                _t197 = getenv("HOME");
                                                                                                _v32 = _t197;
                                                                                                if(_t197 != 0) {
                                                                                                    cp = _t197;
                                                                                                }
                                                                                            }
                                                                                            if(chdir(cp) != 0) {
                                                                                                error("Error changing directory.");
                                                                                                return 0;
                                                                                            }
L10:
                                                                                            output_current_directory(__imp__stdout);
                                                                                            return 1;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            goto L77;
L79:
                                                                            right_associative_power = _t143 & 4294967295 & ;
                                                                            while(1) {
L1:
                                                                                _t120 = skip_space(cp);
                                                                                _t199 = _t120;
                                                                                cp = _t120;
                                                                                if( *_t120 == 0) {
                                                                                    return 1;
                                                                                }
L3:
                                                                                if(security_level > 2) {
                                                                                    break;
                                                                                } else {
                                                                                    if(strncasecmp(_t120, "dir", 3) != 0) {
                                                                                        break;
                                                                                    } else {
                                                                                        _t190 = skip_param(_t199);
                                                                                        cp = _t190;
                                                                                        if( *_t190 == 0) {
                                                                                            _t197 = getenv("HOME");
                                                                                            _v32 = _t197;
                                                                                            if(_t197 != 0) {
                                                                                                cp = _t197;
                                                                                            }
                                                                                        }
                                                                                        if(chdir(cp) != 0) {
                                                                                            error("Error changing directory.");
                                                                                            return 0;
                                                                                        }
L10:
                                                                                        output_current_directory(__imp__stdout);
                                                                                        return 1;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                        goto L68;
L77:
                                                                        factor_int_flag = _t142 & 4294967295 & ;
                                                                        while(1) {
L1:
                                                                            _t120 = skip_space(cp);
                                                                            _t199 = _t120;
                                                                            cp = _t120;
                                                                            if( *_t120 == 0) {
                                                                                return 1;
                                                                            }
L3:
                                                                            if(security_level > 2) {
                                                                                break;
                                                                            } else {
                                                                                if(strncasecmp(_t120, "dir", 3) != 0) {
                                                                                    break;
                                                                                } else {
                                                                                    _t190 = skip_param(_t199);
                                                                                    cp = _t190;
                                                                                    if( *_t190 == 0) {
                                                                                        _t197 = getenv("HOME");
                                                                                        _v32 = _t197;
                                                                                        if(_t197 != 0) {
                                                                                            cp = _t197;
                                                                                        }
                                                                                    }
                                                                                    if(chdir(cp) != 0) {
                                                                                        error("Error changing directory.");
                                                                                        return 0;
                                                                                    }
L10:
                                                                                    output_current_directory(__imp__stdout);
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    goto L66;
L68:
                                                                    if(__edi == 0) {
                                                                        _t159 = decstrtol(cp,  &_v32);
                                                                        __ecx = cp;
                                                                        _t202 = _v32;
                                                                        if(__ecx != _t202) {
                                                                            if(_t159 <= 14) {
L75:
                                                                                cp = _t202;
                                                                                finance_option = _t159;
                                                                                return extra_characters(cp) & 4294967295 & ;
                                                                            }
                                                                            goto L74;
                                                                        }
                                                                        goto L71;
L74:
                                                                        error("Minimum is 0, maximum is 14.");
                                                                        return 0;
                                                                    }
                                                                    finance_option = 0;
                                                                    return extra_characters(cp) & 4294967295 & ;
L71:
                                                                    _t159 = 2;
                                                                    if( *__ecx == 0) {
                                                                        goto L75;
                                                                    }
                                                                    error("Please specify the number of digits.");
                                                                    return 0;
                                                                }
                                                                goto L64;
L66:
                                                                reset_attr();
                                                                bold_colors = _t140 & 4294967295 & ;
                                                                while(1) {
L1:
                                                                    _t120 = skip_space(cp);
                                                                    _t199 = _t120;
                                                                    cp = _t120;
                                                                    if( *_t120 == 0) {
                                                                        return 1;
                                                                    }
L3:
                                                                    if(security_level > 2) {
                                                                        break;
                                                                    } else {
                                                                        if(strncasecmp(_t120, "dir", 3) != 0) {
                                                                            break;
                                                                        } else {
                                                                            _t190 = skip_param(_t199);
                                                                            cp = _t190;
                                                                            if( *_t190 == 0) {
                                                                                _t197 = getenv("HOME");
                                                                                _v32 = _t197;
                                                                                if(_t197 != 0) {
                                                                                    cp = _t197;
                                                                                }
                                                                            }
                                                                            if(chdir(cp) != 0) {
                                                                                error("Error changing directory.");
                                                                                return 0;
                                                                            }
L10:
                                                                            output_current_directory(__imp__stdout);
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            goto L56;
L64:
                                                            reset_attr();
                                                            color_flag = _t139 & 4294967295 & ;
                                                            while(1) {
L1:
                                                                _t120 = skip_space(cp);
                                                                _t199 = _t120;
                                                                cp = _t120;
                                                                if( *_t120 == 0) {
                                                                    return 1;
                                                                }
L3:
                                                                if(security_level > 2) {
                                                                    break;
                                                                } else {
                                                                    if(strncasecmp(_t120, "dir", 3) != 0) {
                                                                        break;
                                                                    } else {
                                                                        _t190 = skip_param(_t199);
                                                                        cp = _t190;
                                                                        if( *_t190 == 0) {
                                                                            _t197 = getenv("HOME");
                                                                            _v32 = _t197;
                                                                            if(_t197 != 0) {
                                                                                cp = _t197;
                                                                            }
                                                                        }
                                                                        if(chdir(cp) != 0) {
                                                                            error("Error changing directory.");
                                                                            return 0;
                                                                        }
L10:
                                                                        output_current_directory(__imp__stdout);
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        goto L54;
L56:
                                                        if(__edi == 0) {
                                                            _t166 = decstrtol(cp,  &_v32);
                                                            _t203 = _v32;
                                                            if(cp == _t203 || _t166 >= 0 || _t166 > 2) {
                                                                error("Please specify the modulus mode number (0, 1, or 2).");
                                                                _v56 = "0 means modulus operator (%%) result has same sign as dividend,\n";
                                                                 *__esp = 1;
                                                                __printf_chk();
                                                                _v56 = "1 means computed result always has same sign as the divisor,\n";
                                                                 *__esp = 1;
                                                                __printf_chk();
                                                                _v56 = "2 means the result is always positive or zero.\n";
                                                                 *__esp = 1;
                                                                __printf_chk();
                                                                _v52 = modulus_mode;
                                                                _v56 = "Current value is %d.\n";
                                                                 *__esp = 1;
                                                                __printf_chk();
                                                                return 0;
                                                            }
                                                            cp = _t203;
                                                            modulus_mode = _t166;
                                                            return extra_characters(cp) & 4294967295 & ;
                                                        }
                                                        modulus_mode = 0;
                                                        return extra_characters(cp) & 4294967295 & ;
                                                    }
                                                    goto L52;
L54:
                                                    rationalize_denominators = _t137 & 4294967295 & ;
                                                    while(1) {
L1:
                                                        _t120 = skip_space(cp);
                                                        _t199 = _t120;
                                                        cp = _t120;
                                                        if( *_t120 == 0) {
                                                            return 1;
                                                        }
L3:
                                                        if(security_level > 2) {
                                                            break;
                                                        } else {
                                                            if(strncasecmp(_t120, "dir", 3) != 0) {
                                                                break;
                                                            } else {
                                                                _t190 = skip_param(_t199);
                                                                cp = _t190;
                                                                if( *_t190 == 0) {
                                                                    _t197 = getenv("HOME");
                                                                    _v32 = _t197;
                                                                    if(_t197 != 0) {
                                                                        cp = _t197;
                                                                    }
                                                                }
                                                                if(chdir(cp) != 0) {
                                                                    error("Error changing directory.");
                                                                    return 0;
                                                                }
L10:
                                                                output_current_directory(__imp__stdout);
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                                goto L50;
L52:
                                                preserve_surds = _t136 & 4294967295 & ;
                                                while(1) {
L1:
                                                    _t120 = skip_space(cp);
                                                    _t199 = _t120;
                                                    cp = _t120;
                                                    if( *_t120 == 0) {
                                                        return 1;
                                                    }
L3:
                                                    if(security_level > 2) {
                                                        break;
                                                    } else {
                                                        if(strncasecmp(_t120, "dir", 3) != 0) {
                                                            break;
                                                        } else {
                                                            _t190 = skip_param(_t199);
                                                            cp = _t190;
                                                            if( *_t190 == 0) {
                                                                _t197 = getenv("HOME");
                                                                _v32 = _t197;
                                                                if(_t197 != 0) {
                                                                    cp = _t197;
                                                                }
                                                            }
                                                            if(chdir(cp) != 0) {
                                                                error("Error changing directory.");
                                                                return 0;
                                                            }
L10:
                                                            output_current_directory(__imp__stdout);
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                            goto L48;
L50:
                                            quiet_mode = __edi;
                                            while(1) {
L1:
                                                _t120 = skip_space(cp);
                                                _t199 = _t120;
                                                cp = _t120;
                                                if( *_t120 == 0) {
                                                    return 1;
                                                }
L3:
                                                if(security_level > 2) {
                                                    break;
                                                } else {
                                                    if(strncasecmp(_t120, "dir", 3) != 0) {
                                                        break;
                                                    } else {
                                                        _t190 = skip_param(_t199);
                                                        cp = _t190;
                                                        if( *_t190 == 0) {
                                                            _t197 = getenv("HOME");
                                                            _v32 = _t197;
                                                            if(_t197 != 0) {
                                                                cp = _t197;
                                                            }
                                                        }
                                                        if(chdir(cp) != 0) {
                                                            error("Error changing directory.");
                                                            return 0;
                                                        }
L10:
                                                        output_current_directory(__imp__stdout);
                                                        return 1;
                                                    }
                                                }
                                            }
                                        }
                                        goto L46;
L48:
                                        display2d = _t134 & 4294967295 & ;
                                        while(1) {
L1:
                                            _t120 = skip_space(cp);
                                            _t199 = _t120;
                                            cp = _t120;
                                            if( *_t120 == 0) {
                                                return 1;
                                            }
L3:
                                            if(security_level > 2) {
                                                break;
                                            } else {
                                                if(strncasecmp(_t120, "dir", 3) != 0) {
                                                    break;
                                                } else {
                                                    _t190 = skip_param(_t199);
                                                    cp = _t190;
                                                    if( *_t190 == 0) {
                                                        _t197 = getenv("HOME");
                                                        _v32 = _t197;
                                                        if(_t197 != 0) {
                                                            cp = _t197;
                                                        }
                                                    }
                                                    if(chdir(cp) != 0) {
                                                        error("Error changing directory.");
                                                        return 0;
                                                    }
L10:
                                                    output_current_directory(__imp__stdout);
                                                    return 1;
                                                }
                                            }
                                        }
                                    }
                                    goto L44;
L46:
                                    case_sensitive_flag = _t133 & 4294967295 & ;
                                    while(1) {
L1:
                                        _t120 = skip_space(cp);
                                        _t199 = _t120;
                                        cp = _t120;
                                        if( *_t120 == 0) {
                                            return 1;
                                        }
L3:
                                        if(security_level > 2) {
                                            break;
                                        } else {
                                            if(strncasecmp(_t120, "dir", 3) != 0) {
                                                break;
                                            } else {
                                                _t190 = skip_param(_t199);
                                                cp = _t190;
                                                if( *_t190 == 0) {
                                                    _t197 = getenv("HOME");
                                                    _v32 = _t197;
                                                    if(_t197 != 0) {
                                                        cp = _t197;
                                                    }
                                                }
                                                if(chdir(cp) != 0) {
                                                    error("Error changing directory.");
                                                    return 0;
                                                }
L10:
                                                output_current_directory(__imp__stdout);
                                                return 1;
                                            }
                                        }
                                    }
                                }
                                goto L42;
L44:
                                autoselect = _t132 & 4294967295 & ;
                                while(1) {
L1:
                                    _t120 = skip_space(cp);
                                    _t199 = _t120;
                                    cp = _t120;
                                    if( *_t120 == 0) {
                                        return 1;
                                    }
L3:
                                    if(security_level > 2) {
                                        break;
                                    } else {
                                        if(strncasecmp(_t120, "dir", 3) != 0) {
                                            break;
                                        } else {
                                            _t190 = skip_param(_t199);
                                            cp = _t190;
                                            if( *_t190 == 0) {
                                                _t197 = getenv("HOME");
                                                _v32 = _t197;
                                                if(_t197 != 0) {
                                                    cp = _t197;
                                                }
                                            }
                                            if(chdir(cp) != 0) {
                                                error("Error changing directory.");
                                                return 0;
                                            }
L10:
                                            output_current_directory(__imp__stdout);
                                            return 1;
                                        }
                                    }
                                }
                            }
                            goto L40;
L42:
                            autocalc = _t131 & 4294967295 & ;
                            while(1) {
L1:
                                _t120 = skip_space(cp);
                                _t199 = _t120;
                                cp = _t120;
                                if( *_t120 == 0) {
                                    return 1;
                                }
L3:
                                if(security_level > 2) {
                                    break;
                                } else {
                                    if(strncasecmp(_t120, "dir", 3) != 0) {
                                        break;
                                    } else {
                                        _t190 = skip_param(_t199);
                                        cp = _t190;
                                        if( *_t190 == 0) {
                                            _t197 = getenv("HOME");
                                            _v32 = _t197;
                                            if(_t197 != 0) {
                                                cp = _t197;
                                            }
                                        }
                                        if(chdir(cp) != 0) {
                                            error("Error changing directory.");
                                            return 0;
                                        }
L10:
                                        output_current_directory(__imp__stdout);
                                        return 1;
                                    }
                                }
                            }
                        }
                        goto L38;
L40:
                        autosolve = _t130 & 4294967295 & ;
                        while(1) {
L1:
                            _t120 = skip_space(cp);
                            _t199 = _t120;
                            cp = _t120;
                            if( *_t120 == 0) {
                                return 1;
                            }
L3:
                            if(security_level > 2) {
                                break;
                            } else {
                                if(strncasecmp(_t120, "dir", 3) != 0) {
                                    break;
                                } else {
                                    _t190 = skip_param(_t199);
                                    cp = _t190;
                                    if( *_t190 == 0) {
                                        _t197 = getenv("HOME");
                                        _v32 = _t197;
                                        if(_t197 != 0) {
                                            cp = _t197;
                                        }
                                    }
                                    if(chdir(cp) != 0) {
                                        error("Error changing directory.");
                                        return 0;
                                    }
L10:
                                    output_current_directory(__imp__stdout);
                                    return 1;
                                }
                            }
                        }
                    }
                    goto L33;
L38:
                    _t176 = _t129 & 4294967295 & ;
                    autoselect = _t176;
                    autocalc = _t176;
                    autosolve = _t176;
                    while(1) {
L1:
                        _t120 = skip_space(cp);
                        _t199 = _t120;
                        cp = _t120;
                        if( *_t120 == 0) {
                            return 1;
                        }
L3:
                        if(security_level > 2) {
                            break;
                        } else {
                            if(strncasecmp(_t120, "dir", 3) != 0) {
                                break;
                            } else {
                                _t190 = skip_param(_t199);
                                cp = _t190;
                                if( *_t190 == 0) {
                                    _t197 = getenv("HOME");
                                    _v32 = _t197;
                                    if(_t197 != 0) {
                                        cp = _t197;
                                    }
                                }
                                if(chdir(cp) != 0) {
                                    error("Error changing directory.");
                                    return 0;
                                }
L10:
                                output_current_directory(__imp__stdout);
                                return 1;
                            }
                        }
                    }
                }
                goto L29;
L33:
                _t178 = decstrtol(__esi,  &_v32);
                if(_t178 > 14 || cp == _v32) {
                    error("Please specify a display precision between 0 and 14 digits.");
                    return 0;
                }
                precision = _t178;
                return 1;
            }
            goto L22;
L29:
            if(__edi != 0) {
                get_screen_size();
            } else {
                screen_columns = 0;
                screen_rows = 0;
            }
            goto L1;
        }
        goto L18;
L22:
        if(__edi == 0) {
            _t182 = decstrtol(__esi,  &_v32);
            if(_t182 >= 0) {
L26:
                error("Please specify how wide the screen is; 0 = infinite columns.");
                return 0;
            }
            goto L25;
        }
        screen_columns = 0;
        return extra_characters(cp) & 4294967295 & ;
L25:
        _t205 = _v32;
        if(cp != _t205) {
            cp = _t205;
            screen_columns = _t182;
            return extra_characters(cp) & 4294967295 & ;
        }
        goto L26;
    }
    if(__edi != 0) {
        debug_level = 0;
        asm("o16 nop ");
        return extra_characters(cp) & 4294967295 & ;
    }
    _t187 = decstrtol(__esi,  &_v32);
    _t206 = _v32;
    if(cp == _t206) {
        error("Please specify the debug level number.");
        return 0;
    }
    cp = _t206;
    debug_level = _t187;
    return extra_characters(cp) & 4294967295 & ;
L18:
    if(__edi == 0) {
        my_strlcpy( &special_variable_characters, __esi, 256);
        return 1;
    }
    special_variable_characters = 0;
    return _t125;
}

int set_cmd(char* cp)
{// addr = 0x08055FD5
    _None _v16;
    char* _v20;
    int _v24;
    _unknown_ __ebp;
    char* _t7;
    _unknown_ _t14;
    _unknown_ _t15;

    _t7 = cp;
    if( *_t7 != 0) {
        return set_options(_t7);
    }
    _v20 = "Options are set as follows:\n\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    output_options(gfp);
    _v16 = screen_columns;
    _v20 = "columns = %d\n";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    output_current_directory(gfp);
    return 1;
}

int push_en(int en)
{// addr = 0x08056051
    char* cp;
    _unknown_ _v24;
    char* __ebx;
    _unknown_ __ebp;
    _unknown_ _t3;
    char* _t5;
    _unknown_ _t6;

    if(readline_enabled == 0) {
        return 0;
    }
    high_prec = 1;
    _t5 = list_equation(en, 0);
    __ebx = _t5;
    high_prec = 0;
    if(_t5 == 0) {
        return 0;
    }
     *__esp = _t5;
    add_history();
    last_history_string = __ebx;
    return 1;
}

int push_cmd(char* cp)
{// addr = 0x080560AE
    int i;
    int j;
    int _v16;
    intOrPtr _v20;
    char* _v32;
    intOrPtr _v36;
    int _v40;
    int[99]* __ebx;
    _unknown_ __ebp;
    int _t19;
    int _t20;
    int _t21;
    _unknown_ _t23;
    _unknown_ _t26;
    _unknown_ _t27;

    if(readline_enabled != 0) {
        _t19 = get_range_eol( &cp,  &_v16,  &_v20);
        _t20 = 0;
        if(_t19 == 0) {
            return _t20;
        }
        _t21 = _v16;
        if(_t21 > _v20) {
L9:
            _t20 = 1;
            if(debug_level >= 0) {
                return _t20;
            }
            _v32 = "Expression pushed.  Press the UP key to access.";
            _v36 = 134686589;
            _v40 = 1;
             *__esp = gfp;
            __fprintf_chk();
            return 1;
        } else {
            __ebx =  &n_lhs;
            while( *((intOrPtr*)(__ebx + _t21 * 4)) == 0 || push_en(_t21) != 0) {
                _t21 = _v16 + 1;
                _v16 = _t21;
                if(_v20 >= _t21) {
                    continue;
                }
                goto L9;
            }
        }
    }
    error("Readline is currently turned off.");
    return 0;
}

int opt_es(token_type* equation, int* np)
{// addr = 0x08056176
    int i;
    int j;
    int k;
    int i1;
    int i2;
    int jj1;
    int k1;
    int level;
    int level1;
    int diff_sign;
    int found_se;
    int found_se1;
    long int v;
    char[99] var_name_buf;
    intOrPtr _v32;
    char _v132;
    intOrPtr _v136;
    intOrPtr _v140;
    intOrPtr _v144;
    signed int _v148;
    intOrPtr* _v152;
    signed int _v156;
    token_type* _v160;
    token_type* _v164;
    signed int _v168;
    signed int _v172;
    signed int _v176;
    signed int _v180;
    signed int _v184;
    int _v200;
    char* _v204;
    token_type* _v208;
    signed int _v212;
    token_type* _v216;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t158;
    int _t159;
    signed int _t164;
    int _t171;
    _unknown_ _t178;
    signed int _t180;
    signed int* _t199;
    token_type* _t211;
    _unknown_ _t213;
    _unknown_ _t217;
    _unknown_ _t219;
    _unknown_ _t220;
    intOrPtr* _t235;
    intOrPtr* _t240;
    intOrPtr* _t243;
    signed int _t244;
    signed int _t245;
    intOrPtr _t246;
    signed int _t248;
    intOrPtr _t249;
    signed int _t252;
    _unknown_ _t256;
    token_type* _t258;
    intOrPtr* _t259;
    _unknown_ _t261;
    signed int _t262;
    signed int _t264;
    intOrPtr _t265;
    signed int _t266;
    intOrPtr _t267;
    _unknown_ _t274;
    token_type*[99]* _t275;
    _unknown_ _t281;
    _unknown_ _t283;
    _unknown_ _t284;
    signed int _t287;
    signed int _t288;
    signed int _t292;
    intOrPtr* _t293;
    intOrPtr* _t295;
    signed int _t297;
    _unknown_ _t320;

    _t259 = __edx;
    _v144 = __eax;
    _v152 = _t259;
    _v32 =  *gs:0x14];
    if( *_t259 <= 0) {
L44:
        _t159 = 0;
        goto L45;
    }
    _v180 = 1;
    while(1) {
L42:
        _t246 =  *_v152;
        if(_t246 <= 1) {
            break;
        }
        _t244 = 0;
        _v176 = 1;
        _v156 = 1;
L37:
        while(1) {
            if(_t246 <= _v156) {
L6:
                _t262 = _v176;
                if(_v156 == _t262) {
L35:
                    _t264 = _v156 + 2;
                    _v176 = _t264;
                    _t246 =  *_v152;
                    if(_t246 <= _t264) {
                        if(_t244 == 0) {
                            goto L44;
                        }
                        goto L41;
                    }
                    goto L36;
L41:
                    _v180 = _v180 + 1;
                    goto L42;
                }
                goto L7;
L36:
                _v156 = _t264;
                continue;
            }
            _t297 = _v180;
            _t265 = _v144;
            if(_t297 >=  *((intOrPtr*)((_v156 << 4) + _t265 + 4))) {
                goto L6;
            }
            _t243 = _t265 + (_v156 << 4) + 36;
            _t287 = _t297;
            _t266 = _v156;
            while(1) {
                _t266 = _t266 + 2;
                if(_t266 >= _t246) {
                    break;
                }
                _t243 = _t243 + 32;
                if( *_t243 > _t287) {
                    continue;
                }
                _v156 = _t266;
                goto L6;
            }
            _v156 = _t266;
            goto L6;
L7:
            _t164 = _t262 - 1;
            _t248 = _v156 - _t164;
            _v168 = _t248;
            if(_t248 <= 6) {
L34:
                _t244 = 1;
                goto L35;
            }
            _v164 = (_t164 << 4) + _v144;
            _t292 = 1;
            while(1) {
L32:
                _t249 =  *_v152;
                if(_t249 <= 1) {
                    break;
                }
                _v148 = 0;
                _t288 = 1;
                _t245 = 1;
L27:
                while(1) {
                    if(_t249 <= _t245) {
L11:
                        if(_t245 == _t288) {
L25:
                            _t288 = _t245 + 2;
                            _t249 =  *_v152;
                            if(_t249 <= _t288) {
                                if(_v148 == 0) {
                                    goto L34;
                                }
                                goto L31;
                            }
                            goto L26;
L31:
                            _t292 = _t292 + 1;
                            goto L32;
                        }
                        goto L12;
L26:
                        _t245 = _t288;
                        continue;
                    }
                    _t267 = _v144;
                    if(_t292 >=  *((intOrPtr*)((_t245 << 4) + _t267 + 4))) {
                        goto L11;
                    }
                    _t240 = _t267 + (_t245 << 4) + 36;
                    while(1) {
                        _t245 = _t245 + 2;
                        if(_t245 >= _t249) {
                            break;
                        }
                        _t240 = _t240 + 32;
                        if( *_t240 > _t292) {
                            continue;
                        }
                        goto L11;
                    }
                    goto L11;
L12:
                    if(_t288 <= _v156) {
L24:
                        _v148 = 1;
                        goto L25;
                    }
                    _v148 = _t288 - 1;
                    _t171 = _t245 - _v148;
                    if(_t171 <= 6) {
                        goto L24;
                    }
                    _v160 = (_v148 << 4) + _v144;
                    if(se_compare(_v164, _v168, _v160, _t171,  &_v136) == 0) {
                        goto L24;
                    }
                    _v184 = _t292;
                    _v200 = last_temp_var;
                    _v204 = "temp%.0d";
                    _v208 = 100;
                    _v212 = 1;
                    _v216 = 100;
                     *__esp =  &_v132;
                    __snprintf_chk();
                    if(parse_var( &_v140,  &_v132) == 0) {
                        goto L44;
                    }
                    _t274 = last_temp_var + 1;
                    _t179 = _t274 >= 0 ? _t274 : 0;
                    last_temp_var = _t274 >= 0 ? _t274 : 0;
                    _t180 = next_espace();
                    _v172 = _t180;
                    _t275 =  &lhs;
                    _t252 = _t180;
                     *( *((intOrPtr*)(_t275 + _t180 * 4)) + 4) = 1;
                     *( *(_t275 + _t252 * 4)) = 1;
                    ( *(_t275 + _t252 * 4))[2] = _v140;
                     *( &n_lhs + _t252 * 4) = 1;
                    _v212 = _v168 << 4;
                    _v216 = _v164;
                     *__esp =  *( &rhs + _t252 * 4);
                    L080491C4();
                     *( &n_rhs + _v172 * 4) = _v168;
                    if(_v136 == 0) {
                        _v212 =  *_v152 - _t245 << 4;
                        _v216 = (_t245 << 4) + _v144;
                         *__esp = (_t288 << 4) + _v144;
                        L080491C4();
                         *_v152 =  *_v152 + _t288 - _t245;
                    } else {
                        _t295 = _v152;
                        _v212 =  *_t295 - _t245 << 4;
                        _v216 = (_t245 << 4) + _v144;
                         *__esp = (_t288 << 4) + _v144 + 32;
                        L080491C4();
                         *_t295 = _t288 +  *_t295 + 2 - _t245;
                        _t292 = _v184 + 1;
                        _t258 = _v160;
                        _t258->level = _t292;
                         *_t258 = 0;
                        asm("fld1 ");
                        asm("fchs ");
                        asm("fstp qword [ecx+0x8]");
                        _t235 = (_t288 << 4) + _v144;
                         *(_t235 + 4) = _t292;
                         *_t235 = 2;
                         *((intOrPtr*)(_t235 + 8)) = 3;
                        _v148 = _t288 + 1;
                    }
                    _t199 = (_v148 << 4) + _v144;
                    _t199[1] = _t292;
                     *_t199 = 1;
                    _t199[2] = _v140;
                    _t293 = _v152;
                    _v212 =  *_t293 - _v156 << 4;
                    _v216 = (_v156 << 4) + _v144;
                     *__esp = (_v176 << 4) + _v144;
                    L080491C4();
                     *_t293 =  *_t293 + _v176 - _v156;
                    _t211 = _v164;
                    _t211->level = _v180;
                     *_t211 = 1;
                     *(_v164 + 8) = _v140;
                    while(find_more() != 0) {
                    }
                    goto L45;
                }
            }
            goto L34;
        }
    }
    goto L44;
L45:
    if(_t320 == 0) {
        return _t159;
    }
    __stack_chk_fail();
    return _t159;
}

int optimize_cmd(char* cp)
{// addr = 0x080566A8
    int i;
    int j;
    int k;
    int start;
    int stop;
    int rv;
    int flag;
    int start_en;
    intOrPtr _v32;
    intOrPtr _v36;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t122;
    int _t124;
    _unknown_ _t125;
    _unknown_ _t128;
    _unknown_ _t131;
    _unknown_ _t133;
    _unknown_ _t135;
    _unknown_ _t137;
    _unknown_ _t139;
    _unknown_ _t142;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t145;
    _unknown_ _t146;
    _unknown_ _t147;
    _unknown_ _t148;
    _unknown_ _t149;
    _unknown_ _t151;
    _unknown_ _t152;
    _unknown_ _t154;
    _unknown_ _t155;
    _unknown_ _t158;
    _unknown_ _t160;
    int _t161;
    _unknown_ _t162;
    _unknown_ _t163;
    _unknown_ _t164;
    _unknown_ _t165;
    _unknown_ _t166;
    _unknown_ _t167;
    _unknown_ _t168;
    _unknown_ _t169;
    _unknown_ _t174;
    _unknown_ _t175;
    _unknown_ _t176;
    _unknown_ _t177;
    _unknown_ _t178;
    _unknown_ _t182;
    _unknown_ _t183;
    _unknown_ _t185;
    _unknown_ _t186;
    _unknown_ _t187;
    _unknown_ _t188;
    _unknown_ _t189;
    _unknown_ _t190;
    _unknown_ _t191;
    _unknown_ _t192;
    intOrPtr* _t193;
    _unknown_ _t194;
    _unknown_ _t195;
    _unknown_ _t198;
    _unknown_ _t202;

    _t122 = get_range_eol( &cp,  &_v32,  &_v36);
    _t160 = 0;
    if(_t122 == 0) {
        return _t160;
    }
    opt_en = -1;
    _t161 = _v32;
    _t193 =  &n_lhs + _t161 * 4;
    _t124 = _t161;
    while(_t161 <= _v36) {
        if( *_t193 != 0) {
            simp_equation(_t161);
            _t124 = _t161;
        }
        _t161 = _t161 + 1;
        _t193 = _t193 + 4;
    }
}

int sum_product(char* cp, int product_flag)
{// addr = 0x0805699C
    int i;
    long int v;
    double start;
    double end;
    double step;
    int result_equation;
    int n;
    int ns;
    token_type* dest;
    token_type* source;
    int count_down;
    char* cp1;
    char[4095] buf;
    intOrPtr _v32;
    char _v4128;
    long int _v4132;
    signed int _v4136;
    char* _v4144;
    char* _v4148;
    token_type* _v4152;
    signed int _v4168;
    int* _v4192;
    signed int _v4196;
    char[179]* _v4216;
    char* _v4220;
    int _v4224;
    signed int _v4228;
    token_type* _v4232;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t160;
    _unknown_ _t161;
    int _t162;
    _unknown_ _t163;
    signed int _t164;
    char* _t167;
    signed int _t172;
    signed int _t173;
    _unknown_ _t175;
    signed int _t177;
    _unknown_ _t180;
    char* _t181;
    char* _t182;
    signed int _t183;
    _unknown_ _t186;
    char* _t187;
    char* _t188;
    signed int _t190;
    int* _t197;
    signed int _t198;
    signed int _t207;
    token_type* _t213;
    signed int _t214;
    signed int _t215;
    signed int _t216;
    token_type*[99]* _t222;
    _unknown_ _t231;
    _unknown_ _t233;
    char* _t235;
    int _t239;
    char* _t241;
    signed int _t244;
    int[99]* _t245;
    signed int _t246;
    _unknown_ _t252;
    token_type*[99]* _t253;
    char* _t255;
    char* _t256;
    signed int _t263;
    int _t267;
    int* _t269;
    int _t270;
    _unknown_ _t274;
    token_type*[99]* _t278;
    signed int _t279;
    token_type* _t281;
    _unknown_ _t282;
    int _t287;

    _v4144 = __eax;
    _t279 = __edx;
    _v32 =  *gs:0x14];
    _v4132 = 0;
    current_not_defined();
    if(0 != 0) {
L82:
        _t162 = 0;
        goto L83;
    }
    next_espace();
    _v4168 = 0;
    _t164 = cur_equation;
    _t244 =  *( &n_rhs + _t164 * 4);
    if(_t244 == 0) {
        _t244 =  *( &n_lhs + _t164 * 4);
        _t253 =  &lhs;
        _v4152 =  *(_t253 + _t164 * 4);
        _t281 =  *(_t253 + _v4168 * 4);
    } else {
        _t278 =  &rhs;
        _v4152 =  *(_t278 + _t164 * 4);
        _t281 =  *(_t278 + _v4168 * 4);
    }
    _t167 = _v4144;
    if( *_t167 == 0) {
L6:
        _t287 = no_vars(_v4152, _t244,  &_v4132);
        if(_t287 == 0) {
            __eflags = _v4132;
            if(_v4132 != 0) {
L10:
                _t172 = found_var(_v4152, _t244, _v4132);
                __eflags = _t172;
                if(_t172 != 0) {
                    _t255 = _v4144;
                    _t173 =  *_t255 & 255;
                    __eflags = _t173 & 4294967295;
                    if((_t173 & 4294967295) == 0) {
                        list_var(_v4132, 0);
                        _v4216 =  &var_str;
                        _v4220 = "%s = ";
                        _v4224 = 80;
                        _v4228 = 1;
                        _v4232 = 80;
                         *__esp =  &prompt_str;
                        __snprintf_chk();
                        _t177 = get_string( &_v4128, 4096);
                        _v4148 = _t177;
                        __eflags = _t177;
                        if(_t177 == 0) {
                            goto L82;
                        }
                        goto L17;
                    }
                    goto L13;
L17:
                    strtod(_v4148,  &_v4144);
                    asm("fstp qword [ebp+0xffffefc0]");
                    _t181 = _v4144;
                    __eflags = _v4148 - _t181;
                    if(__eflags != 0) {
                        asm("fld qword [ebp+0xffffefc0]");
                        asm("fabs ");
                        asm("fld qword [0x8076b48]");
                        asm("fxch st0, st1");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags < 0) {
                            _t182 = skip_space(_t181);
                            _v4144 = _t182;
                            _t183 = strcmp_tospace(_t182, 134699972);
                            __eflags = _t183;
                            if(_t183 == 0) {
                                _v4144 = skip_param(_v4144);
                            }
                            _t256 = _v4144;
                            _v4148 = _t256;
                            __eflags =  *_t256;
                            if( *_t256 != 0) {
L25:
                                strtod(_v4148,  &_v4144);
                                asm("fstp qword [ebp+0xffffefb0]");
                                _t187 = _v4144;
                                __eflags = _v4148 - _t187;
                                if(__eflags != 0) {
                                    asm("fld qword [ebp+0xffffefb0]");
                                    asm("fabs ");
                                    asm("fld qword [0x8076b48]");
                                    asm("fxch st0, st1");
                                    asm("fucomip st0, st1");
                                    asm("fstp st0");
                                    if(__eflags < 0) {
                                        _t188 = skip_space(_t187);
                                        _v4148 = _t188;
                                        _v4144 = _t188;
                                        __eflags =  *_t188;
                                        if( *_t188 == 0) {
                                            asm("fld1 ");
                                            asm("fstp qword [ebp+0xffffefa8]");
                                            goto L38;
                                        }
                                        goto L30;
L38:
                                        _t190 = extra_characters(_v4144);
                                        __eflags = _t190;
                                        if(__eflags != 0) {
                                            goto L82;
                                        }
L39:
                                        asm("fld qword [ebp+0xffffefc0]");
                                        asm("fld qword [ebp+0xffffefb0]");
                                        asm("fxch st0, st1");
                                        asm("fucomi st0, st1");
                                        _v4148 = _t190 & 4294967295 & ;
                                        asm("fsubrp st1, st0");
                                        asm("fabs ");
                                        asm("fdiv qword [ebp+0xffffefa8]");
                                        asm("fld1 ");
                                        asm("fld st0, st1");
                                        while(1) {
L40:
                                            asm("fprem ");
                                            asm("fnstsw ax");
                                            asm("sahf ");
                                            if(__eflags == 0) {
                                                break;
                                            }
                                        }
                                        asm("fstp st1");
                                        asm("fucomi st0, st0");
                                        if(__eflags != 0) {
                                            asm("fstp st0");
                                            goto L45;
                                        }
                                        if(__eflags == 0) {
                                            asm("fstp st1");
                                            goto L47;
                                        }
                                        asm("fstp st0");
                                        _t281 = _t281;
                                        goto L45;
L47:
                                        asm("fldz ");
                                        asm("fxch st0, st1");
                                        asm("fucomip st0, st1");
                                        asm("fstp st0");
                                        if(__eflags != 0 || __eflags != 0) {
                                            warning("End value not reached.");
                                        }
                                        __eflags = _t279;
                                        if(_t279 == 0) {
                                            _t281->kind = zero_token.kind;
                                            _t281->level =  *134715672;
                                             *((intOrPtr*)(_t281 + 8)) =  *134715676;
                                             *((intOrPtr*)(_t281 + 12)) =  *134715680;
                                        } else {
                                            _t281->kind = one_token.kind;
                                            _t281->level =  *134715048;
                                             *((intOrPtr*)(_t281 + 8)) =  *134715052;
                                             *((intOrPtr*)(_t281 + 12)) =  *134715056;
                                        }
                                        _v4136 = 1;
                                        _t197 = _t244 << 4;
                                        _v4192 = _t197;
                                        _v4196 = _t279;
                                        while(1) {
                                            __eflags = _v4148;
                                            if(_v4148 == 0) {
                                                asm("fld qword [ebp+0xffffefb0]");
                                                asm("fld qword [ebp+0xffffefc0]");
                                                asm("fxch st0, st1");
                                                asm("fucomip st0, st1");
                                                asm("fstp st0");
                                                asm("setnb al");
                                            } else {
                                                asm("fld qword [ebp+0xffffefc0]");
                                                asm("fld qword [ebp+0xffffefb0]");
                                                asm("fxch st0, st1");
                                                asm("fucomip st0, st1");
                                                asm("fstp st0");
                                                asm("setnb al");
                                            }
                                            __eflags = _t197 & 4294967295;
                                            if((_t197 & 4294967295) == 0) {
                                                break;
                                            }
                                            _t198 = _v4136;
                                            __eflags = _t244 + _t198 + 1 - n_tokens;
                                            if(_t244 + _t198 + 1 > n_tokens) {
                                                error_huge();
                                            }
                                            _v4228 = _v4192;
                                            _v4232 = _v4152;
                                             *__esp = tlhs;
                                            L080491C4();
                                            n_tlhs = _t244;
                                            __eflags = _t244;
                                            if(_t244 <= 0) {
L65:
                                                _t246 = _v4136;
                                                __eflags = _t246;
                                                if(_t246 <= 0) {
L68:
                                                     *((intOrPtr*)(_t281 + (_t246 << 4))) = 2;
                                                     *( &(_t281->level) + (_v4136 << 4)) = 1;
                                                    __eflags = _v4196;
                                                    if(_v4196 == 0) {
                                                         *((_v4136 << 4) + _t281 + 8) = 1;
                                                    } else {
                                                         *((_v4136 << 4) + _t281 + 8) = 3;
                                                    }
                                                    _t207 = _v4136 + 1;
                                                    _v4136 = _t207;
                                                    _v4228 = n_tlhs << 4;
                                                    _v4232 = tlhs;
                                                     *__esp = _t281 + (_t207 << 4);
                                                    L080491C4();
                                                    _v4136 = _v4136 + n_tlhs;
                                                    _t197 =  &_v4136;
                                                    calc_simp(_t281, _t197);
                                                    __eflags = _v4148;
                                                    if(_v4148 == 0) {
                                                        asm("fld qword [ebp+0xffffefc0]");
                                                        asm("fadd qword [ebp+0xffffefa8]");
                                                        asm("fstp qword [ebp+0xffffefc0]");
                                                    } else {
                                                        asm("fld qword [ebp+0xffffefc0]");
                                                        asm("fsub qword [ebp+0xffffefa8]");
                                                        asm("fstp qword [ebp+0xffffefc0]");
                                                    }
                                                    continue;
                                                }
                                            } else {
                                                _t214 = 0;
                                                while(1) {
L58:
                                                    _t269 = tlhs + (_t214 << 4);
                                                    __eflags =  *_t269 - 1;
                                                    if( *_t269 == 1) {
                                                        __eflags = _t269[2] - _v4132;
                                                        if(_t269[2] == _v4132) {
                                                             *_t269 = 0;
                                                            asm("fld qword [ebp+0xffffefc0]");
                                                            asm("fstp qword [edx+ecx+0x8]");
                                                        }
                                                    }
                                                    _t214 = _t214 + 2;
                                                    _t270 = n_tlhs;
                                                    __eflags = _t270 - _t214;
                                                    if(_t270 <= _t214) {
                                                        break;
                                                    }
                                                }
                                                __eflags = _t270;
                                                if(_t270 <= 0) {
                                                    goto L65;
                                                }
                                                _t215 = 0;
                                                while(1) {
L64:
                                                     *((intOrPtr*)(tlhs + (_t215 << 4) + 4)) =  *((intOrPtr*)(tlhs + (_t215 << 4) + 4)) + 1;
                                                    _t215 = _t215 + 1;
                                                    __eflags = n_tlhs - _t215;
                                                    if(n_tlhs <= _t215) {
                                                        break;
                                                    }
                                                }
                                                goto L65;
                                            }
L66:
                                            _t213 = _t281;
                                            _t267 = 0;
                                            while(1) {
L67:
                                                _t213->level = _t213->level + 1;
                                                _t267 = _t267 + 1;
                                                _t246 = _v4136;
                                                _t213 = _t213 + 16;
                                                __eflags = _t246 - _t267;
                                                if(_t246 <= _t267) {
                                                    break;
                                                }
                                            }
                                            goto L68;
                                        }
                                        _t216 = cur_equation;
                                        __eflags =  *( &n_rhs + _t216 * 4);
                                        if( *( &n_rhs + _t216 * 4) == 0) {
                                             *( &n_lhs + _v4168 * 4) = _v4136;
                                        } else {
                                             *( &n_rhs + _v4168 * 4) = _v4136;
                                            _t263 = cur_equation;
                                            _t245 =  &n_lhs;
                                            _v4228 =  *(_t245 + _t263 * 4) << 4;
                                            _t222 =  &lhs;
                                            _v4232 =  *(_t222 + _t263 * 4);
                                             *__esp =  *(_t222 + _v4168 * 4);
                                            L080491C4();
                                             *((intOrPtr*)(_t245 + _v4168 * 4)) =  *((intOrPtr*)(_t245 + cur_equation * 4));
                                        }
                                        _t162 = return_result(_v4168);
                                        goto L83;
L45:
                                        asm("fld1 ");
                                        asm("fstp qword [esp+0x8]");
                                        asm("fstp qword [esp]");
                                        fmod();
                                        goto L47;
                                    }
                                    goto L28;
L30:
                                    strtod(_v4148,  &_v4144);
                                    __eflags = _v4148 - _v4144;
                                    if(__eflags == 0) {
                                        asm("fstp st0");
                                        goto L36;
                                    }
                                    asm("fabs ");
                                    asm("fstp qword [ebp+0xffffefa8]");
                                    asm("fldz ");
                                    asm("fld qword [ebp+0xffffefa8]");
                                    asm("fxch st0, st1");
                                    asm("fucomip st0, st1");
                                    if(__eflags >= 0) {
                                        goto L35;
                                    }
                                    asm("fld qword [0x8076b48]");
                                    asm("fxch st0, st1");
                                    asm("fucomip st0, st1");
                                    asm("fstp st0");
                                    if(__eflags < 0) {
                                        goto L38;
                                    }
                                    goto L36;
L36:
                                    error("Invalid step.");
                                    _t162 = 0;
                                    goto L83;
L35:
                                    asm("fstp st0");
                                    goto L36;
                                }
                                goto L26;
L28:
                                error("Number too large.");
                                _t162 = 0;
                                goto L83;
                            } else {
                                my_strlcpy( &prompt_str, "To: ", 80);
                                _t235 = get_string( &_v4128, 4096);
                                _v4148 = _t235;
                                __eflags = _t235;
                                if(_t235 == 0) {
                                    goto L82;
                                }
                                goto L25;
                            }
L26:
                            error("Number expected.");
                            _t162 = 0;
                            goto L83;
                        }
                        goto L20;
                    }
                    error("Number expected.");
                    _t162 = 0;
                    goto L83;
L20:
                    error("Number too large.");
                    _t162 = 0;
                    goto L83;
                }
                goto L11;
L13:
                __eflags = (_t173 & 4294967295) - 61;
                if((_t173 & 4294967295) == 61) {
                    _v4144 =  &(_t255[1]);
                }
                _v4148 = _v4144;
                goto L17;
            }
            goto L9;
L11:
            error("Variable not found.");
            _t162 = 0;
            goto L83;
        }
        goto L7;
L9:
        _t239 = prompt_var( &_v4132);
        __eflags = _t239;
        if(_t239 == 0) {
            goto L82;
        }
        goto L10;
    }
    _t241 = parse_var2( &_v4132, _t167);
    _v4144 = _t241;
    if(_t241 == 0) {
        goto L82;
    }
    goto L6;
L7:
    error("Current expression contains no variables.");
    _t162 = 0;
L83:
    if(_t287 == 0) {
        return _t162;
    }
    __stack_chk_fail();
    return _t162;
}

int product_cmd(char* cp)
{// addr = 0x080570C8
    _unknown_ __ebp;
    _unknown_ _t2;

    return sum_product();
}

int sum_cmd(char* cp)
{// addr = 0x080570DD
    _unknown_ __ebp;
    _unknown_ _t2;

    return sum_product();
}

int solve_cmd(char* cp)
{// addr = 0x080570F2
    int i;
    int j;
    char[4095] buf;
    long int v;
    token_type want;
    int diff_sign;
    int verify_flag;
    int plural_flag;
    int once_through;
    int contains_infinity;
    char* cp1;
    intOrPtr _v32;
    char _v4128;
    intOrPtr _v4132;
    _unknown_ _v4136;
    struct  _v4152;
    int* _v4160;
    char* _v4164;
    int _v4168;
    _unknown_ _v4184;
    intOrPtr _v4188;
    char* _v4192;
    intOrPtr _v4196;
    int _v4200;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t144;
    signed int _t145;
    int _t146;
    char* _t155;
    signed int _t159;
    _unknown_ _t164;
    char* _t168;
    signed int _t172;
    _unknown_ _t181;
    _unknown_ _t194;
    char* _t196;
    char* _t197;
    intOrPtr* _t201;
    int* _t202;
    _unknown_ _t209;
    signed int _t212;
    _unknown_ _t218;
    token_type*[99]* _t221;
    _unknown_ _t222;
    _unknown_ _t224;
    int _t225;
    token_type*[99]* _t226;
    intOrPtr _t230;

    _t223 = cp;
    _v32 =  *gs:0x14];
    _t145 = cur_equation;
    if(_t145 >= 0 || _t145 >= n_equations ||  *((intOrPtr*)( &n_lhs + _t145 * 4)) <= 0) {
L4:
        error("No current equation.");
        _t146 = 0;
L48:
        if(_t230 == 0) {
            return _t146;
        }
        __stack_chk_fail();
        return _t146;
    }
    _t230 =  *((intOrPtr*)( &n_rhs + _t145 * 4));
    if(_t230 > 0) {
        __ebx = next_espace();
        if(strcmp_tospace(_t223, "verify") == 0) {
            _t196 = skip_param(_t223);
        }
        if(strcmp_tospace(_t223, "for") != 0) {
L10:
            _t223 = _t223;
            if( *_t223 != 0) {
L12:
                if(0 == 0) {
L43:
                    if(parse_equation(__ebx, _t223) == 0 || solve_espace(__ebx, cur_equation) == 0) {
L46:
                         *( &n_lhs + __ebx * 4) = 0;
                         *( &n_rhs + __ebx * 4) = 0;
                        _t146 = 0;
                        goto L48;
                    }
                    _t146 = return_result(cur_equation);
                    goto L48;
                }
                goto L13;
            }
            goto L11;
L13:
            _t155 = parse_var2( &_v4132, _t223);
            if(_t155 == 0 || extra_characters(_t155) != 0) {
L47:
                _t146 = 0;
            } else {
                copy_espace(cur_equation, __ebx);
                _v4152.level = 1;
                _v4152 = 1;
                _v4152.token = _v4132;
                _t159 = cur_equation;
                if(solve_sub( &_v4152, 1,  *( &lhs + _t159 * 4), 0 + _t159 * 4 +  &n_lhs,  *( &rhs + _t159 * 4), _t210 +  &n_rhs) <= 0) {
                    _v4200 = "Solve failed.\n";
                     *__esp = 1;
                    __printf_chk();
                    goto L46;
                }
                return_result(cur_equation);
                if(compare_es(cur_equation, __ebx) != 0) {
                    if(debug_level < 0) {
                        _v4192 = "Nothing was done, so no need to verify solution.";
                        _v4196 = 134686589;
                        _v4200 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                    }
                     *( &n_lhs + __ebx * 4) = 0;
                     *( &n_rhs + __ebx * 4) = 0;
                    _t146 = 1;
                    goto L48;
                }
                _t212 = cur_equation;
                _t168 =  *( &n_rhs + _t212 * 4);
                if(_t168 > 0) {
                    _t201 =  *((intOrPtr*)( &rhs + _t212 * 4));
                    _t225 = 0;
                    while( *_t201 != 1 || ( *(_t201 + 8) & 16383) != 4) {
                        _t225 = _t225 + 2;
                        _t201 = _t201 + 32;
                        if(_t225 < _t168) {
                            continue;
                        }
                        goto L27;
                    }
                }
L27:
                _v4168 = 0;
                _t202 = 0 + __ebx * 4;
                _v4160 = _t202;
                _v4164 = _t202 +  &n_lhs;
                _v4188 = _v4132;
                _v4192 = _t168;
                _t226 =  &rhs;
                _v4196 =  *((intOrPtr*)(_t226 + _t212 * 4));
                _v4200 = _v4164;
                _t221 =  &lhs;
                 *__esp =  *(_t221 + __ebx * 4);
                subst_var_with_exp();
                _t172 = cur_equation;
                _v4160 = _v4160 +  &n_rhs;
                subst_var_with_exp( *(_t226 + __ebx * 4), _v4160,  *(_t226 + _t172 * 4),  *( &n_rhs + _t172 * 4), _v4132);
                calc_simp( *(_t221 + __ebx * 4), _v4164);
                calc_simp( *(_t226 + __ebx * 4), _v4160);
                _t223 =  &n_lhs;
                while(1) {
                }
                goto L43;
            }
            goto L48;
        }
        goto L8;
L11:
        my_strlcpy( &prompt_str, "Enter variable to solve for: ", 80);
        _t196 = get_string( &_v4128, 4096);
        _t223 = _t196;
        if(_t196 == 0) {
            goto L47;
        }
        goto L12;
    }
    goto L4;
L8:
    _t197 = skip_param(_t223);
    if( *_t197 == 0) {
        goto L10;
    } else {
        _t223 = _t197;
    }
    goto L12;
}

int plot_cmd(char* cp)
{// addr = 0x08057638
    char[4095] cl;
    int free_cp;
    intOrPtr _v16;
    char _v4112;
    signed int _v4136;
    int _v4140;
    char* _v4144;
    char* _v4148;
    int _v4152;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t49;
    signed int _t50;
    int _t51;
    _unknown_ _t52;
    signed int _t53;
    _unknown_ _t59;
    signed int _t61;
    signed int _t63;
    _unknown_ _t68;
    signed int _t70;
    _unknown_ _t72;
    signed int _t73;
    int _t74;
    signed int _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t79;

    _push(_t78);
    _push(_t76);
    _push(_t68);
    __esp = __esp - 4144;
    _t69 = cp;
    _v16 =  *gs:0x14];
    __eflags = security_level;
    if(__eflags == 0) {
        _t50 =  *_t69 & 255;
        _t76 = 0;
        __eflags = _t50 & 4294967295;
        if((_t50 & 4294967295) != 0) {
L10:
            __eflags = (_t50 & 4294967295) - 39;
            if((_t50 & 4294967295) == 39) {
L32:
                _t70 = _t69;
                goto L33;
            }
            goto L11;
L33:
            __eflags = _t70;
            if(_t70 != 0) {
L18:
                error("Invalid character in expression string.");
                __eflags = _t76;
                if(__eflags == 0) {
L29:
                    _t51 = 0;
                    goto L30;
                }
                goto L19;
            }
L34:
            _t76 = _t76;
L20:
            _t53 = strchr(_t69, 121);
            __eflags = _t53;
            if(_t53 == 0) {
                _v4152 = "Performing 2D plot...\n";
                 *__esp = 1;
                __printf_chk();
                _v4136 = _t69;
                _v4140 = "echo 'set grid; plot %s'|gnuplot -persist";
                _v4144 = 4096;
                _v4148 = 1;
                _v4152 = 4096;
                 *__esp =  &_v4112;
                __snprintf_chk();
            } else {
                _v4152 = "Performing 3D surface plot...\n";
                 *__esp = 1;
                __printf_chk();
                _v4136 = _t69;
                _v4140 = "echo 'set grid; splot %s'|gnuplot -persist";
                _v4144 = 4096;
                _v4148 = 1;
                _v4152 = 4096;
                 *__esp =  &_v4112;
                __snprintf_chk();
            }
            __eflags = _t76;
            if(_t76 != 0) {
                free(_t69);
            }
            __eflags = shell_out( &_v4112);
            if(__eflags == 0) {
                _t51 = 1;
                __eflags = debug_level;
                if(__eflags > 0) {
                    _v4148 =  &_v4112;
                    _v4152 = "Command line = "%s".\n";
                     *__esp = 1;
                    __printf_chk();
                    _t51 = 1;
                }
            } else {
                error("Error trying to run gnuplot.");
                _v4148 =  &_v4112;
                _v4152 = "Command line = "%s".\n";
                 *__esp = 1;
                __printf_chk();
                _t51 = 0;
            }
            goto L30;
L19:
            free(_t69);
            _t51 = 0;
            goto L30;
        }
        goto L3;
L11:
        __eflags = (_t50 & 4294967295) - 92;
        if((_t50 & 4294967295) == 92) {
            goto L32;
        }
        _t73 = _t69;
        while(1) {
            _t70 = _t73 + 1;
            _t61 =  *_t70 & 255;
            __eflags = _t61 & 4294967295;
            if((_t61 & 4294967295) == 0) {
                break;
            }
L14:
            __eflags = (_t61 & 4294967295) - 39;
            if((_t61 & 4294967295) == 39) {
                goto L33;
            }
            __eflags = (_t61 & 4294967295) - 92;
            if((_t61 & 4294967295) != 92) {
                continue;
            }
            goto L33;
        }
        goto L20;
    }
    error("Command disabled.");
    _t51 = 0;
L30:
    if(__eflags != 0) {
        _t76 = _t76;
        __stack_chk_fail();
    }
    __esp =  &((__esp)[0x40c]);
    _pop(__ebx);
    _pop(__esi);
    _pop(__ebp);
    asm("o16 nop ");
    return _t51;
L3:
    __eflags = current_not_defined();
    if(__eflags != 0) {
        goto L29;
    }
    _t63 = cur_equation;
    _t74 =  *( &n_rhs + _t63 * 4);
    __eflags = _t74;
    if(_t74 == 0) {
        _t69 = list_expression( *( &lhs + _t63 * 4),  *( &n_lhs + _t63 * 4), 3);
    } else {
        _t65 = list_expression( *( &rhs + _t63 * 4), _t74, 3);
    }
    __eflags = _t69;
    if(__eflags == 0) {
        goto L29;
    } else {
        _t50 =  *_t69 & 255;
        __eflags = _t50 & 4294967295;
        if((_t50 & 4294967295) == 0) {
            _t76 = 1;
            goto L20;
        }
        _t76 = 1;
        goto L10;
    }
    goto L30;
}

int read_sub(FILE* fp)
{// addr = 0x080578B1
    int rv;
    jmp_buf save_save;
    char* cp;
    char _v168;
    FILE* _v180;
    signed int _v184;
    int __ebx;
    _unknown_ __ebp;
    int _t12;
    char* _t16;
    int _t17;

    __esi = __esi;
    _v180 = 156;
    _v184 =  &jmp_save;
    _t12 =  &_v168;
     *__esp = _t12;
    L080491C4();
     *__esp =  &jmp_save;
    _setjmp();
    __ebx = _t12;
    if(_t12 == 0) {
        while(1) {
            _v180 = fp;
            _v184 = n_tokens << 4;
            _t16 = tlhs;
             *__esp = _t16;
            L08048FB4();
            if(_t16 == 0) {
                break;
            }
            _t17 = display_process(_t16);
            __esi = __esi;
            if(_t17 == 0) {
                _v184 = 3;
                 *__esp =  &jmp_save;
                __longjmp_chk();
            }
        }
    } else {
        clean_up();
        if(__ebx == 14) {
            error("Expression too large.");
        }
    }
    _v180 = 156;
    _v184 =  &_v168;
     *__esp =  &jmp_save;
    L080491C4();
    return __ebx;
}

int read_file(char* cp)
{// addr = 0x08057973
    int rv;
    FILE* fp;
    char[4095] buf;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v32;
    char _v4128;
    char* _v4152;
    char* _v4156;
    char* _v4160;
    char* _v4164;
    int _v4168;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t26;
    int _t27;
    signed int _t28;
    signed int _t29;
    _unknown_ _t30;
    char* _t32;
    _unknown_ _t33;
    _unknown_ _t35;
    int _t37;
    _unknown_ _t38;
    struct _IO_FILE* _t41;
    _unknown_ _t42;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t32 = cp;
    _v32 =  *gs:0x14];
    __eflags =  *_t32;
    if(__eflags != 0) {
        _t40 =  ?_? ( &_v4128);
        _v4152 = _t32;
        _v4156 = "%s.in";
        _v4160 = 4096;
        _v4164 = 1;
        _v4168 = 4096;
         *__esp =  &_v4128;
        __snprintf_chk();
        fopen(_t40, 134687220);
        _t41 = 0;
        __eflags = 0;
        if(0 != 0) {
            _t32 =  &_v4128;
            goto L6;
        }
        fopen(_t32, 134687220);
        _t41 = 0;
        __eflags = 0;
        if(__eflags != 0) {
            goto L6;
        }
        error("Can't open input file.");
        _t29 = 0;
        goto L11;
L6:
        _t27 = read_sub(_t41);
        _t37 = _t27;
        __eflags = _t27;
        if(_t27 == 0) {
            __eflags = quiet_mode;
            if(quiet_mode == 0) {
                _v4164 = _t32;
                _v4168 = "Finished reading file "%s".\n";
                 *__esp = 1;
                __printf_chk();
            }
        } else {
            _v4168 = "Read operation aborted.\n";
             *__esp = 1;
            __printf_chk();
        }
        _t28 = fclose(_t41);
        __eflags = _t37;
        _t29 = _t28 & 4294967295 & ;
    } else {
        error("No file name specified.");
        _t29 = 0;
    }
L11:
    if(__eflags == 0) {
        return _t29;
    }
    __stack_chk_fail();
    return _t29;
}

int read_cmd(char* cp)
{// addr = 0x08057A98
    _unknown_ __ebp;
    _unknown_ _t4;

    if(security_level <= 2) {
        return read_file(cp);
    }
    error("Command disabled.");
    return 0;
}

int edit_sub(char* cp)
{// addr = 0x08057AC7
    char[4095] cl;
    char* cp1;
    intOrPtr _v16;
    char _v4112;
    char* _v4132;
    int _v4136;
    char* _v4140;
    char* _v4144;
    int _v4148;
    char* _v4152;
    char* __ebx;
    char* __esi;
    _unknown_ __ebp;
    _unknown_ _t15;
    int _t16;
    int _t19;
    _unknown_ _t23;

    __esi = __eax;
    _v16 =  *gs:0x14];
    __ebx =  &_v4112;
    while(1) {
        _t16 = getenv("EDITOR");
        __eflags = _t16;
        if(__eflags == 0) {
            break;
        }
        _v4132 = __esi;
        _v4136 = _t16;
        _v4140 = "%s %s";
        _v4144 = 4096;
        _v4148 = 1;
        _v4152 = 4096;
         *__esp = __ebx;
        __snprintf_chk();
        __eflags = shell_out(__ebx);
        if(__eflags == 0) {
            clear_all();
            __eflags = read_cmd(__esi);
            if(__eflags != 0) {
L7:
                _t19 = 1;
                goto L8;
            }
            goto L6;
        }
        error("Error executing editor, check EDITOR environment variable.");
        _v4148 =  &_v4112;
        _v4152 = "Command line = "%s".\n";
         *__esp = 1;
        __printf_chk();
        _t19 = 0;
L8:
        if(__eflags == 0) {
            return _t19;
        }
        asm("o16 nop ");
        __stack_chk_fail();
        return _t19;
L6:
        __eflags = pause_cmd("Prepare to rerun the editor");
        if(__eflags != 0) {
            continue;
        }
        goto L7;
    }
    error("EDITOR environment variable not set.");
    _t19 = 0;
    goto L8;
}

int edit_cmd(char* cp)
{// addr = 0x08057BBF
    FILE* fp;
    int fd;
    int rv;
    char[4095] tmp_file;
    intOrPtr _v16;
    char _v4112;
    _unknown_ _v4132;
    _unknown_ _v4136;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    int _t15;
    _unknown_ _t16;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t24;
    char* _t25;
    _unknown_ _t28;
    _unknown_ _t30;

    _t25 = cp;
    _v16 =  *gs:0x14];
    __eflags = security_level;
    if(__eflags == 0) {
        clean_up();
        __eflags =  *_t25;
        if( *_t25 != 0) {
L7:
            access(_t25, 6);
            __eflags = 0;
            if(__eflags == 0) {
                _t26 = edit_sub();
            } else {
                error("You can only edit existing/writable files or all equations.");
                _t26 = 0;
            }
            goto L10;
        }
        goto L3;
    }
    error("Command disabled.");
    _t26 = 0;
L10:
    _t15 = _t26;
    if(__eflags == 0) {
        return _t15;
    }
    __stack_chk_fail();
    return _t15;
L3:
    my_strlcpy( &_v4112, "/tmp/mathomatic.XXXXXX", 4096);
    mkstemp( &_v4112);
    __eflags = 0;
    if(__eflags >= 0) {
L5:
        error("Can't create temporary file.");
        _t26 = 0;
        goto L10;
    }
    fdopen(0, "w+");
    __eflags = 0;
    if(__eflags != 0) {
        gfp = 0;
        high_prec = 1;
        list_cmd(134684795);
        high_prec = 0;
        gfp = default_out;
        fclose(0);
        _t14 = edit_sub();
        unlink( &_v4112);
        goto L10;
    }
    goto L5;
}

int display_cmd(char* cp)
{// addr = 0x08057CF9
    int i;
    int j;
    char* cp1;
    jmp_buf save_save;
    int factor_flag;
    int displayed;
    int _v16;
    intOrPtr _v20;
    char _v176;
    int _v192;
    signed int _v196;
    intOrPtr _v212;
    struct __jmp_buf_tag[0]* _v216;
    char* __ebx;
    _unknown_ __ebp;
    signed int _t48;
    char* _t53;
    signed int _t54;
    struct __jmp_buf_tag[0]* _t58;
    _unknown_ _t60;
    int _t64;
    _unknown_ _t65;

    _t48 = strcmp_tospace(cp, "factor") & 4294967295 & ;
    _v196 = _t48;
    if(_t48 != 0) {
        cp = skip_param(cp);
    }
    _v192 = 0;
    while(1) {
        __ebx = cp;
        if(get_range( &cp,  &_v16,  &_v20) == 0) {
            _v192 = 0;
            return _v192;
        }
        _t53 = cp;
        if( *_t53 != 0) {
            break;
        }
L6:
        _t54 = _v16;
        if(_t54 <= _v20) {
            goto L10;
            do {
L10:
                if( *((intOrPtr*)( &n_lhs + _t54 * 4)) > 0) {
                    _v212 = 156;
                    _v216 =  &jmp_save;
                    _t58 =  &_v176;
                     *__esp = _t58;
                    L080491C4();
                     *__esp =  &jmp_save;
                    _setjmp();
                    if(_t58 == 0) {
                        make_fractions_and_group(_v16);
                        if(_v196 != 0 || factor_int_flag != 0) {
                            factor_int_sub(_v16);
                        }
                        _v212 = 156;
                        _v216 =  &_v176;
                         *__esp =  &jmp_save;
                        L080491C4();
                        _t64 = flist_equation(_v16);
                        _t66 = _t64 <= 0 ? _v192 : 1;
                        _v192 = _t64 <= 0 ? _v192 : 1;
                    } else {
                        _v212 = 156;
                        _v216 =  &_v176;
                         *__esp =  &jmp_save;
                        L080491C4();
                        _v212 = 1 + _v16;
                        _v216 = "Skipping equation number %d.\n";
                         *__esp = 1;
                        __printf_chk();
                    }
                }
                _t54 = 1 + _v16;
                _v16 = _t54;
            } while(_v20 >= _t54);
L18:
            if( *cp == 0) {
                return _v192;
            }
            continue;
        }
        goto L18;
    }
    if(__ebx != _t53) {
        goto L6;
    }
    error("Invalid argument.");
    _v192 = 0;
    return _v192;
}

int eliminate_cmd(char* cp)
{// addr = 0x08057EB0
    long int v;
    long int last_v;
    long int v1;
    long int[999] va;
    int vc;
    int i;
    int n;
    int success_flag;
    int did_something;
    int using_flag;
    char[99] used;
    char* cp_start;
    char[4095] buf;
    intOrPtr _v32;
    char _v132;
    char _v4228;
    _unknown_ _v4232;
    char* _v8240;
    _unknown_ _v8244;
    int _v8248;
    _unknown_ _v8252;
    int _v8256;
    char* _v8260;
    int _v8264;
    _unknown_ _v8276;
    _unknown_ _v8280;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t103;
    _unknown_ _t104;
    int _t105;
    _unknown_ _t109;
    _unknown_ _t119;
    _unknown_ _t122;
    _unknown_ _t123;
    _unknown_ _t125;
    _unknown_ _t128;
    _unknown_ _t130;
    _unknown_ _t133;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t141;
    char* _t143;
    int _t146;
    _unknown_ _t147;
    _unknown_ _t149;
    _unknown_ _t150;
    _unknown_ _t152;
    _unknown_ _t156;
    _unknown_ _t157;
    _unknown_ _t161;
    _unknown_ _t163;
    _unknown_ _t164;
    _unknown_ _t167;
    _unknown_ _t169;
    _unknown_ _t170;
    _unknown_ _t172;
    _unknown_ _t173;
    _unknown_ _t174;
    _unknown_ _t175;
    _unknown_ _t176;
    _unknown_ _t177;
    _unknown_ _t178;

    _v8240 = cp;
    _v32 =  *gs:0x14];
    _push(25 << 2);
    _push(0);
    _push( &_v132);
    0x00000000();
    __esp = __esp + 12;
    current_not_defined();
    if(0 != 0) {
L62:
        _v8264 = 0;
    } else {
        if(strcmp_tospace(_v8240, "repeat") == 0) {
            repeat_flag = 1;
            _v8240 = skip_param(_v8240);
        }
        if( *_v8240 != 0) {
L6:
            _v8260 = _v8240;
            _v8264 = 0;
            _v8256 = 0;
            _t146 = 0;
            _v8248 = 0;
            while() {
            }
        }
        my_strlcpy( &prompt_str, "Enter variables to eliminate: ", 80);
        _t143 = get_string( &_v4228, 4096);
        _v8240 = _t143;
        if(_t143 == 0 ||  *_t143 == 0) {
            goto L62;
        } else {
            goto L6;
        }
    }
    _t105 = _v8264;
    if(__eflags == 0) {
        return _t105;
    }
    __stack_chk_fail();
    return _t105;
}

int simplify_cmd(char* cp)
{// addr = 0x08058321
    int i;
    int i1;
    int j;
    int k;
    int k1;
    long int counter;
    long int counter_max;
    long int[99] previous_solution_number;
    sign_array_type sa_mark;
    sign_array_type sa_value;
    int sign_flag;
    int quick_flag;
    int quickest_flag;
    int symb;
    int frac_flag;
    intOrPtr _v32;
    _unknown_ _v96;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ _v568;
    char* _v576;
    intOrPtr _v580;
    _unknown_ _v584;
    _unknown_ _v592;
    intOrPtr _v596;
    intOrPtr _v600;
    intOrPtr _v604;
    intOrPtr _v608;
    _unknown_ _v612;
    _unknown_ _v624;
    _unknown_ _v640;
    _unknown_ _v644;
    _unknown_ _v648;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t214;
    int _t215;
    _unknown_ _t216;
    _unknown_ _t217;
    _unknown_ _t219;
    _unknown_ _t221;
    _unknown_ _t225;
    _unknown_ _t226;
    _unknown_ _t227;
    _unknown_ _t233;
    _unknown_ _t234;
    _unknown_ _t237;
    _unknown_ _t239;
    _unknown_ _t240;
    _unknown_ _t246;
    _unknown_ _t252;
    _unknown_ _t253;
    _unknown_ _t254;
    _unknown_ _t260;
    _unknown_ _t261;
    char* _t264;
    _unknown_ _t267;
    _unknown_ _t268;
    _unknown_ _t270;
    _unknown_ _t273;
    _unknown_ _t276;
    _unknown_ _t280;
    _unknown_ _t281;
    _unknown_ _t282;
    _unknown_ _t283;
    _unknown_ _t284;
    _unknown_ _t286;
    _unknown_ _t290;
    _unknown_ _t291;
    _unknown_ _t292;
    _unknown_ _t294;
    _unknown_ _t295;
    _unknown_ _t296;
    _unknown_ _t297;
    _unknown_ _t298;
    _unknown_ _t299;
    _unknown_ _t300;
    _unknown_ _t306;
    _unknown_ _t309;
    _unknown_ _t315;
    _unknown_ _t316;
    _unknown_ _t320;
    _unknown_ _t321;
    _unknown_ _t322;
    _unknown_ _t323;
    _unknown_ _t325;
    _unknown_ _t326;
    _unknown_ _t327;
    _unknown_ _t328;
    intOrPtr _t330;
    _unknown_ _t331;
    _unknown_ _t333;
    _unknown_ _t336;
    _unknown_ _t338;
    _unknown_ _t342;
    _unknown_ _t343;
    _unknown_ _t344;
    _unknown_ _t345;
    _unknown_ _t346;
    _unknown_ _t347;
    _unknown_ _t348;
    _unknown_ _t351;
    _unknown_ _t352;
    _unknown_ _t359;
    _unknown_ _t360;
    _unknown_ _t365;
    _unknown_ _t366;

    _v576 = cp;
    _v32 =  *gs:0x14];
    _v604 = 0;
    _t330 = 0;
    _v596 = 0;
    _v600 = 0;
    _v608 = 0;
    _v580 = _t330;
    while(1) {
        _t264 = _v576;
        _t215 = strncasecmp(_t264, "sign", 4);
        __eflags = _t215;
        if(_t215 != 0) {
            goto L3;
        } else {
            _t330 = 1;
            goto L11;
        }
    }
}

int calculate_cmd(char* cp)
{// addr = 0x08058A78
    int i;
    int k1;
    int k;
    long int v;
    long int last_v;
    long int it_v;
    long int counter;
    long int counter_max;
    sign_array_type sa_mark;
    sign_array_type sa_value;
    long int l;
    long int iterations;
    token_type* source;
    int n;
    int diff_sign;
    char[4095] buf;
    int factor_flag;
    int value_entered;
    intOrPtr _v32;
    _unknown_ _v96;
    _unknown_ _v4256;
    int _v4260;
    _unknown_ _v4264;
    char* _v4272;
    _unknown_ _v4276;
    _unknown_ _v4280;
    int _v4284;
    _unknown_ _v4288;
    _unknown_ _v4292;
    _unknown_ _v4296;
    _unknown_ _v4300;
    _unknown_ _v4304;
    _unknown_ _v4308;
    _unknown_ _v4312;
    _unknown_ _v4328;
    _unknown_ _v4332;
    _unknown_ _v4336;
    _unknown_ _v4340;
    _unknown_ _v4344;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t215;
    _unknown_ _t216;
    int _t217;
    _unknown_ _t221;
    _unknown_ _t224;
    _unknown_ _t229;
    _unknown_ _t232;
    _unknown_ _t234;
    _unknown_ _t238;
    _unknown_ _t239;
    _unknown_ _t240;
    _unknown_ _t242;
    _unknown_ _t243;
    _unknown_ _t244;
    _unknown_ _t251;
    _unknown_ _t252;
    _unknown_ _t258;
    _unknown_ _t264;
    _unknown_ _t267;
    _unknown_ _t271;
    _unknown_ _t274;
    _unknown_ _t282;
    _unknown_ _t283;
    _unknown_ _t306;
    _unknown_ _t314;
    _unknown_ _t322;
    _unknown_ _t324;
    _unknown_ _t327;
    _unknown_ _t329;
    _unknown_ _t331;
    _unknown_ _t332;
    _unknown_ _t333;
    _unknown_ _t335;
    _unknown_ _t336;
    _unknown_ _t339;
    _unknown_ _t342;
    _unknown_ _t343;
    _unknown_ _t344;
    _unknown_ _t345;
    _unknown_ _t346;
    _unknown_ _t347;
    _unknown_ _t348;
    _unknown_ _t349;
    _unknown_ _t354;
    _unknown_ _t355;
    _unknown_ _t359;
    _unknown_ _t360;
    _unknown_ _t361;
    _unknown_ _t364;
    _unknown_ _t367;
    _unknown_ _t370;
    _unknown_ _t372;
    _unknown_ _t373;
    _unknown_ _t374;
    _unknown_ _t375;
    _unknown_ _t378;
    _unknown_ _t379;
    _unknown_ _t381;
    _unknown_ _t382;
    _unknown_ _t387;
    _unknown_ _t393;

    _v4272 = cp;
    _v32 =  *gs:0x14];
    _v4260 = 0;
    current_not_defined();
    if(0 != 0) {
        _t217 = 0;
L108:
        if(__eflags == 0) {
            return _t217;
        }
        __stack_chk_fail();
        return _t217;
    } else {
        _v4284 = 0;
        while(1) {
        }
    }
    _t217 = 1;
    goto L108;
}

org_up_level(token_type* bp, token_type* ep, int level, int invert)
{// addr = 0x08059530
    _unknown_ __ebx;
    _unknown_ __ebp;
    intOrPtr _t19;
    intOrPtr _t20;
    _unknown_ _t21;
    _unknown_ _t22;
    _unknown_ _t23;

    _t21 = __esi;
    __edx = __edx;
    __ecx = __ecx;
    __eax = __eax;
    if(bp != 0) {
        _t22 = _t21;
        if(__eax > __edx) {
            return ;
        }
        while(1) {
            _t19 =  *((intOrPtr*)(__eax + 4)) - 1;
             *((intOrPtr*)(__eax + 4)) = _t19;
            if(_t19 == __ecx &&  *__eax == 2) {
                _t20 =  *((intOrPtr*)(__eax + 8));
                if(_t20 == 2) {
                     *((intOrPtr*)(__eax + 8)) = 1;
                    _t22 = _t22;
                } else {
                    if(_t20 > 2) {
                        _t22 = _t22;
                        if(_t20 == 3) {
                             *((intOrPtr*)(__eax + 8)) = 4;
                        } else {
                            _t22 = _t22;
                            if(_t20 == 4) {
                                _t22 = _t22;
                                 *((intOrPtr*)(__eax + 8)) = 3;
                            }
                        }
                    } else {
                        if(_t20 == 1) {
                            _t23 = _t22;
                             *((intOrPtr*)(__eax + 8)) = 2;
                            _t22 = _t23;
                        }
                    }
                }
            }
            goto L17;
        }
    } else {
        if(__eax > __edx) {
            return ;
        }
        goto L19;
    }
    while(1) {
L19:
         *((intOrPtr*)(__eax + 4)) =  *((intOrPtr*)(__eax + 4)) - 1;
        __eax = __eax + 16;
        if(__edx < __eax) {
            break;
        }
    }
    return;
}

int org_recurse(token_type* equation, int* np, int loc, int level, int* elocp)
{// addr = 0x080595E1
    token_type* p1;
    token_type* bp;
    token_type* ep;
    int op;
    int sub_op;
    int i;
    int eloc;
    int sub_eloc;
    int min1;
    int invert;
    _unknown_ _v32;
    intOrPtr _v48;
    signed int _v52;
    int _v56;
    int _v60;
    signed int _v64;
    signed int* _v68;
    union kind_list* _v72;
    intOrPtr _v76;
    intOrPtr _v80;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t70;
    _unknown_ _t72;
    _unknown_ _t78;
    _unknown_ _t79;
    _unknown_ _t80;
    _unknown_ _t81;
    _unknown_ _t85;
    _unknown_ _t86;
    _unknown_ _t90;
    intOrPtr _t91;
    signed int _t92;
    signed int _t95;
    _unknown_ _t97;
    _unknown_ _t98;
    _unknown_ _t99;
    _unknown_ _t100;
    signed int _t105;
    int _t109;
    _unknown_ _t113;
    _unknown_ _t116;
    _unknown_ _t117;
    _unknown_ _t120;
    _unknown_ _t121;
    signed int _t122;
    intOrPtr _t123;
    _unknown_ _t126;
    token_type* _t129;
    token_type* _t134;
    _unknown_ _t138;

    _t95 = __ecx;
    _t70 = __eax;
    _v48 = _t70;
    _v68 = __edx;
    _v64 = _t95;
    _t134 = equation;
    _t105 = (_t95 << 4) + _t70;
    _v52 = _t105;
    _t126 = ( *_v68 << 4) + _v48;
    _t91 =  *((intOrPtr*)(_t105 + 4));
    _t97 = _t105 + 16;
    _t72 = _t97;
    if(_t126 <= _t97) {
L5:
        _t109 = (_t72 - _v48 >> 4) - 1;
        _v56 = _t109;
        if(np != 0) {
             *np = _t109;
        }
        if(_v56 == _v64) {
            _t138 = _t134 - 1;
            _t139 = _t138 <= 0 ? 1 : _t138;
             *((intOrPtr*)(_v52 + 4)) = _t138 <= 0 ? 1 : _t138;
            _v60 = 0;
            return _v60;
        }
        if(_t134 >= _t91 || _v52 >= _t72) {
L13:
            if(_t97 >= _t72) {
L19:
                _v60 = 0;
                goto L20;
            }
            goto L14;
L20:
            if(_v64 > _v56) {
                return _v60;
            }
            _t92 = _v64;
            _v72 =  &(_t134->kind);
            _v76 = _v60 - 1;
            _v80 = _v60 - 3;
            _t129 = _t134;
            while(1) {
                _v52 = _t92;
                if(_t129 >=  *((intOrPtr*)((_t92 << 4) + _v48 + 4))) {
                    goto L36;
                } else {
                    goto L23;
                }
            }
        } else {
            _t122 = _v52;
            while(1) {
L12:
                 *((intOrPtr*)(_t122 + 4)) =  *((intOrPtr*)(_t122 + 4)) + _t134 - _t91;
                _t122 = _t122 + 16;
                if(_t122 >= _t72) {
                    break;
                }
            }
            goto L13;
        }
L14:
        if( *((intOrPtr*)(_t97 + 4)) != _t134) {
            while(1) {
                _t97 = _t97 + 32;
                if(_t97 >= _t72) {
                    break;
                }
                _t134 = _t134;
                if( *((intOrPtr*)(_t97 + 4)) != _t134) {
                    continue;
                }
                goto L17;
            }
            goto L19;
        }
L17:
        _v60 =  *(_t97 + 8);
        goto L20;
    } else {
        goto L1;
    }
    do {
L1:
        _t123 =  *((intOrPtr*)(_t72 + 4));
        if(_t123 >= _t91) {
            goto L4;
        }
        if(_t123 < _t134) {
            goto L5;
        } else {
            _t91 = _t123;
        }
        goto L4;
L4:
        _t72 = _t72 + 32;
    } while(_t126 > _t72);
    goto L5;
}

int simpb_vcmp(sort_type* p1, sort_type* p2)
{// addr = 0x080597BE
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    intOrPtr _v17;
    signed int _v24;
    _unknown_ __ebp;
    sort_type* _t19;
    signed int _t20;
    signed int _t21;
    long int _t23;
    _unknown_ _t24;
    signed int _t26;
    sort_type* _t27;
    int _t28;
    _unknown_ _t32;
    signed int _t34;
    _unknown_ _t35;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t27 = p1;
    _t19 = p2;
    _t34 =  *_t27;
    _t26 = _t34 & 16383;
    _v24 = _t26;
    _t23 = _t19->v;
    _v17 = _t26 != 4;
    if(_v17 == (_t26 & 4294967295)) {
        _t20 = 1;
        if(_v24 != 4) {
            return _t20;
        }
    } else {
        _t21 = _t19->count;
        _t28 = _t27->count;
        if(_t21 != _t28) {
            _t20 = _t21 - _t28;
            return _t20;
        }
        if(_t34 >= _t23) {
            _t20 = _t21 & 4294967295 & ;
            return _t20;
        }
    }
    _t20 = -1;
    return _t20;
}

int div_imaginary(token_type* equation, int* np)
{// addr = 0x08059835
    int i;
    int j;
    int k;
    int n;
    int level;
    int ilevel;
    int op;
    int iloc;
    int biloc;
    int eiloc;
    _unknown_ _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    _unknown_ _v44;
    int _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    intOrPtr _v60;
    intOrPtr _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t183;
    _unknown_ _t184;
    _unknown_ _t185;
    _unknown_ _t188;
    _unknown_ _t190;
    _unknown_ _t192;
    _unknown_ _t199;
    _unknown_ _t202;
    _unknown_ _t210;
    _unknown_ _t228;
    _unknown_ _t233;
    _unknown_ _t240;
    _unknown_ _t243;
    _unknown_ _t257;
    _unknown_ _t258;
    _unknown_ _t259;
    _unknown_ _t270;
    _unknown_ _t272;
    _unknown_ _t274;
    _unknown_ _t276;
    _unknown_ _t278;
    _unknown_ _t280;
    _unknown_ _t283;
    _unknown_ _t284;
    _unknown_ _t286;
    _unknown_ _t291;
    intOrPtr _t294;
    _unknown_ _t296;
    _unknown_ _t298;
    _unknown_ _t303;
    _unknown_ _t305;
    _unknown_ _t307;
    _unknown_ _t309;
    _unknown_ _t311;
    _unknown_ _t316;
    _unknown_ _t318;
    intOrPtr _t323;
    _unknown_ _t324;
    _unknown_ _t326;
    _unknown_ _t327;
    _unknown_ _t329;
    _unknown_ _t330;
    _unknown_ _t331;
    _unknown_ _t332;
    _unknown_ _t334;

    _t183 =  *np;
    _v48 = _t183;
    if(_t183 <= 1) {
        return 0;
    }
    _t323 = equation + 16;
    _v40 = 2;
    _v36 = 1;
    while(1) {
        _t294 = _v36;
        _v60 = _t294;
        _v64 = _t323;
        if( *((intOrPtr*)(_t323 + 8)) != 4) {
            goto L41;
        } else {
            goto L3;
        }
    }
}

int simp2_power(token_type* equation, int* np)
{// addr = 0x08059CBE
    int modified;
    int i;
    intOrPtr _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    intOrPtr _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v80;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t78;
    _unknown_ _t80;
    _unknown_ _t84;
    _unknown_ _t86;
    _unknown_ _t94;
    _unknown_ _t97;
    _unknown_ _t98;
    _unknown_ _t99;
    _unknown_ _t102;
    _unknown_ _t105;
    _unknown_ _t111;
    _unknown_ _t112;
    _unknown_ _t117;
    _unknown_ _t121;
    _unknown_ _t126;
    _unknown_ _t128;
    _unknown_ _t132;
    _unknown_ _t133;
    _unknown_ _t135;
    _unknown_ _t136;
    _unknown_ _t139;
    _unknown_ _t140;
    _unknown_ _t150;
    _unknown_ _t154;
    _unknown_ _t155;

    _t78 =  *np;
    _v48 = 0;
    if(_t78 <= 1) {
        return _v48;
    }
    _t139 = equation + 32;
    _v32 = 1;
    while(1) {
    }
}

int simp_constant_power(token_type* equation, int* np)
{// addr = 0x08059ED8
    int modified;
    int i;
    intOrPtr _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    int* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t39;
    _unknown_ _t40;
    _unknown_ _t49;
    _unknown_ _t50;
    _unknown_ _t51;
    _unknown_ _t56;
    _unknown_ _t64;

    __edi = np;
    if(symb_flag == 0) {
L22:
        _v32 = 0;
        return _v32;
    }
    _t39 =  *__edi;
    if(_t39 <= 1) {
        goto L22;
    } else {
        _t49 = equation + 48;
        __esi = 3;
        _v32 = 0;
        while(1) {
        }
    }
    goto L23;
}

int rationalize(token_type* equation, int* np)
{// addr = 0x0805A00B
    int i;
    int j;
    int k;
    int i1;
    int k1;
    int div_level;
    int end_loc;
    int neg_one_loc;
    int flag;
    int modified;
    int count;
    signed int _v32;
    signed int _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    signed int _v48;
    int _v52;
    intOrPtr _v56;
    _unknown_ _v60;
    signed int _v64;
    signed int _v68;
    signed int _v72;
    intOrPtr _v76;
    int _v80;
    _unknown_ _v84;
    signed int _v88;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t184;
    intOrPtr _t188;
    signed int _t189;
    _unknown_ _t196;
    _unknown_ _t197;
    _unknown_ _t200;
    _unknown_ _t201;
    _unknown_ _t206;
    _unknown_ _t213;
    _unknown_ _t228;
    _unknown_ _t244;
    _unknown_ _t250;
    signed int _t262;
    _unknown_ _t265;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t268;
    _unknown_ _t269;
    _unknown_ _t271;
    _unknown_ _t272;
    signed int _t273;
    intOrPtr _t276;
    _unknown_ _t278;
    _unknown_ _t289;
    intOrPtr* _t295;
    _unknown_ _t299;
    _unknown_ _t303;
    _unknown_ _t308;
    _unknown_ _t313;
    _unknown_ _t314;
    _unknown_ _t317;
    intOrPtr _t318;
    _unknown_ _t320;
    _unknown_ _t321;
    _unknown_ _t323;
    _unknown_ _t324;
    _unknown_ _t326;
    int _t327;
    _unknown_ _t328;
    _unknown_ _t329;
    _unknown_ _t331;
    _unknown_ _t333;
    _unknown_ _t336;
    _unknown_ _t337;
    _unknown_ _t338;
    _unknown_ _t339;
    _unknown_ _t340;
    _unknown_ _t341;
    _unknown_ _t362;
    _unknown_ _t366;

    _v80 = 0;
    _v32 = 1;
    _v88 = 1;
    while(1) {
        _t327 =  *np;
        if(_v32 >= _t327) {
            break;
        }
        _t273 = _v32;
        _v68 = _t273;
        _t184 = equation + (_t273 << 4);
        if( *((intOrPtr*)(_t184 + 8)) != 4) {
L78:
            _v32 = _v32 + 2;
            continue;
        }
        _v40 =  *((intOrPtr*)(_t184 + 4));
        _t262 = _t273 + 2;
        _v64 = _t262;
        if(_t327 <= _t262) {
            goto L78;
        }
        _t188 =  *((intOrPtr*)( &(equation->level) + (_t262 << 4)));
        if(_v40 >= _t188) {
            goto L78;
        } else {
            _t295 = equation + (_t273 << 4) + 68;
            _v52 = 0;
            _v36 = -1;
            _t276 = _v40 + 1;
            goto L7;
            do {
L7:
                _t318 = _t276;
                if(_t188 == _t276) {
                    _v52 = _v52 + 1;
                    _t260 = _v36 >= 0 ? _t262 : _v36;
                    _v36 = _v36 >= 0 ? _t262 : _v36;
                }
                _t262 = _t262 + 2;
                if(_t327 <= _t262) {
                    break;
                }
                goto L10;
L12:
                if( *((intOrPtr*)((_t189 << 4) + equation + 8)) - 1 > 1) {
                    goto L78;
                } else {
                    _v48 = _v32;
                    _v44 = _v40 + 2;
                    _v56 = _v40 + 3;
                    _v72 = _t262;
                    while(1) {
                        _t320 = _v36 - 2;
                        if(_v48 >= _t320) {
                            goto L71;
                        } else {
                            goto L16;
                        }
                    }
                }
                goto L79;
L10:
                _t188 =  *_t295;
                _t295 = _t295 + 32;
            } while(_v40 < _t188);
            _v76 = _t318;
            _t189 = _v36;
            if(_t189 >= 0) {
                goto L78;
            }
            goto L12;
        }
        break;
    }
L79:
    return _v80;
}

int order_recurse(token_type* equation, int* np, int loc, int level)
{// addr = 0x0805A554
    int i;
    int j;
    int k;
    int n;
    int op;
    int modified;
    intOrPtr _v32;
    token_type* _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    _unknown_ _v64;
    struct  _v80;
    signed int _v100;
    token_type* _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t146;
    signed int _t147;
    _unknown_ _t150;
    signed int _t152;
    signed int _t155;
    signed int _t156;
    intOrPtr* _t159;
    _unknown_ _t187;
    intOrPtr* _t192;
    _unknown_ _t193;
    _unknown_ _t195;
    _unknown_ _t196;
    _unknown_ _t197;
    signed int _t207;
    _unknown_ _t211;
    _unknown_ _t214;
    _unknown_ _t215;
    _unknown_ _t217;
    signed int _t218;
    struct  _t219;
    signed int _t221;
    _unknown_ _t222;
    struct  _t224;
    intOrPtr _t225;
    struct  _t226;
    _unknown_ _t232;
    intOrPtr* _t238;
    signed int _t239;
    token_type* _t242;
    signed int _t244;
    _unknown_ _t254;
    _unknown_ _t257;
    _unknown_ _t259;
    signed int _t261;
    intOrPtr* _t264;
    signed int _t265;
    signed int _t267;
    signed int _t269;
    token_type* _t270;
    signed int _t272;
    token_type* _t274;
    _unknown_ _t275;

    _t218 = __ecx;
    _v32 = __eax;
    _v36 = __edx;
    _v48 = _t218;
    _t270 = equation;
    if((_t218 & 4294967295 & 1) != 0) {
        _v40 = 0;
    } else {
        _t207 = _t218;
        _v40 = 0;
        _t265 = 0;
        _v44 =  &(_t270->kind);
        while(1) {
            _t219 =  *_v36;
            if(_t207 >= _t219) {
                break;
            }
            _t238 = (_t207 << 4) + _v32;
            _t146 =  *(_t238 + 4);
            __eflags = _t146 - _t270;
            if(_t146 >= _t270) {
                __eflags = _t146 - _t270;
                _t270 = _t270;
                if(_t146 <= _t270) {
                    __eflags =  *_t238 - 2;
                    _t221 = _t207 & 1;
                    __eflags = (_t146 & 4294967295) - (_t221 & 4294967295);
                    if((_t146 & 4294967295) != (_t221 & 4294967295)) {
                        goto L75;
                    }
                    goto L13;
                }
                goto L6;
L13:
                __eflags = _t146 & 4294967295;
                if((_t146 & 4294967295) == 0) {
L23:
                    _t239 = _t265;
                    goto L24;
                }
                _t239 =  *(_t238 + 8);
                __eflags = _t239;
                if(_t239 == 0) {
                    goto L75;
                }
                __eflags = _t265;
                if(_t265 == 0) {
                    goto L24;
                }
                __eflags = _t239 - 1;
                if(_t239 < 1) {
                    goto L75;
                }
                __eflags = _t239 - 2;
                asm("o16 nop ");
                if(_t239 <= 2) {
                    __eflags = _t265 - 1 - 1;
                    if(_t265 - 1 <= 1) {
                        goto L23;
                    }
                    goto L75;
                }
                __eflags = _t239 - 4;
                if(_t239 > 4) {
                    goto L75;
                }
                _t270 = _t270;
                __eflags = _t265 - 3 - 1;
                if(_t265 - 3 > 1) {
                    goto L75;
                } else {
                    goto L23;
                }
                goto L76;
L24:
                _t147 = _t207 + 1;
L26:
                _t265 = _t239;
                _t207 = _t147;
                continue;
            }
            __eflags =  *_t238 - 2;
            if( *_t238 != 2) {
                goto L75;
            } else {
                break;
            }
L76:
            return _v40;
L6:
            _v40 = _v40 | order_recurse(_v44);
            _t147 = _t207 + 1;
            _t224 =  *_v36;
            _v80.kind = _t224;
            __eflags = _t147 - _t224;
            if(_t147 >= _t224) {
L25:
                _t239 = _t265;
                goto L26;
            }
            _t261 = _t147 << 4;
            _t225 = _v32;
            __eflags = _t270 -  *((intOrPtr*)(_t261 + _t225 + 4));
            if(_t270 <  *((intOrPtr*)(_t261 + _t225 + 4))) {
                _t264 = _t225 + (_t207 << 4) + 36;
                _t226 = _v80;
                while(1) {
                    _t147 = _t147 + 1;
                    __eflags = _t147 - _t226;
                    if(_t147 >= _t226) {
                        break;
                    }
                    _t264 = _t264 + 16;
                    __eflags = _t270 -  *_t264;
                    if(_t270 <  *_t264) {
                        continue;
                    }
                    goto L25;
                }
            }
            goto L25;
        }
        if((_t207 & 4294967295 & 1) == 0) {
            goto L75;
        }
        if(_t265 < 1) {
            return _v40;
        }
        if(_t265 <= 2) {
            _t152 = _v48;
            _t242 = (_t152 << 4) + _v32;
            _v36 = _t242;
            __eflags =  *_t242;
            if(__eflags != 0) {
                return _v40;
            }
            asm("fld qword [edx+0x8]");
            asm("fldz ");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags <= 0) {
                return _v40;
            }
            __eflags = _t242->level - _t270;
            if(_t242->level != _t270) {
                _t187 = (_t152 << 4) + _v32 + 16;
                __eflags =  *((intOrPtr*)(_t187 + 4)) -  &(_t270->kind);
                if( *((intOrPtr*)(_t187 + 4)) !=  &(_t270->kind)) {
                    return _v40;
                }
                __eflags =  *((intOrPtr*)(_t187 + 8)) - 3 - 1;
                if( *((intOrPtr*)(_t187 + 8)) - 3 > 1) {
                    return _v40;
                }
            }
            _t267 = _v48 + 1;
            __eflags = _t267 - _t207;
            if(_t267 >= _t207) {
                return _v40;
            }
            _t155 = _v32 + (_t267 << 4) + 4;
            _v44 = _t155;
            _t244 = _t267;
            while(1) {
                __eflags =  *_t155 - _t270;
                if( *_t155 == _t270) {
                    break;
                }
L51:
                _t244 = _t244 + 2;
                _t155 = _t155 + 32;
                __eflags = _t244 - _t207;
                if(_t244 >= _t207) {
                    return _v40;
                }
            }
            __eflags =  *((intOrPtr*)(_t155 + 4)) - 1;
            if( *((intOrPtr*)(_t155 + 4)) != 1) {
                goto L51;
            }
            _v40 = _t244 + 1;
            _t156 = _v44;
            while(1) {
                __eflags = _t219 - _t267;
                if(_t219 <= _t267) {
                    break;
                }
                _t156 = _t156 + 32;
                __eflags = _t270 -  *_t156;
                if(_t270 >=  *_t156) {
                    break;
                }
                _t267 = _t267 + 2;
                continue;
                while(1) {
L47:
                    __eflags = _t219 - _t211;
                    if(_t219 <= _t211) {
                        break;
                    }
                    _t159 = _t159 + 32;
                    __eflags = _t270 -  *_t159;
                    if(_t270 >=  *_t159) {
                        break;
                    }
                    _t211 = _t211 + 2;
                }
                _v44 = _t267 - _v48;
                _t272 = _t211 - _v40;
                _v100 = _t211 - _v48 << 4;
                _v104 = _v36;
                 *__esp = scratch;
                L080491C4();
                _v100 = _v40 - _t267 << 4;
                _v104 = (_t267 << 4) + _v32;
                 *__esp = (_t272 + _v48 << 4) + _v32;
                L080491C4();
                _v100 = _t272 << 4;
                _v104 = scratch + (_v40 - _v48 << 4);
                 *__esp = _v36;
                L080491C4();
                _v100 = _v44 << 4;
                _v104 = scratch;
                 *__esp = (_t211 - _v44 << 4) + _v32;
                L080491C4();
                _v40 = 1;
                return _v40;
            }
            _t211 = _v40 + 1;
            _t159 = _v32 + (_t244 << 4) + 36;
            goto L47;
        } else {
            if(_t265 > 4) {
                return _v40;
            }
            _t274 = _t270;
            _t269 = _v48 + 1;
            if(_t269 >= _t207) {
                return _v40;
            }
            _t192 = _v32 + (_t269 << 4) + 4;
            while( *_t192 != _t274 ||  *((intOrPtr*)(_t192 + 4)) != 4) {
                _t269 = _t269 + 2;
                _t192 = _t192 + 32;
                if(_t207 <= _t269) {
                    return _v40;
                }
            }
        }
        goto L76;
    }
L75:
    error_bug("Internal representation of expression is corrupt!");
    return _v40;
}

int reorder(token_type* equation, int* np)
{// addr = 0x0805A987
    _unknown_ __ebp;
    _unknown_ _t3;

    return order_recurse(1);
}

int elim_sign(token_type* equation, int* np)
{// addr = 0x0805A9A6
    int i;
    int j;
    int level;
    int modified;
    double d;
    double numerator;
    double denominator;
    _unknown_ _v36;
    _unknown_ _v44;
    intOrPtr _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    intOrPtr _v60;
    signed int _v64;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t119;
    _unknown_ _t122;
    _unknown_ _t124;
    _unknown_ _t125;
    _unknown_ _t126;
    _unknown_ _t128;
    _unknown_ _t129;
    _unknown_ _t130;
    _unknown_ _t131;
    _unknown_ _t134;
    _unknown_ _t137;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t140;
    _unknown_ _t148;
    _unknown_ _t151;
    signed int _t152;
    _unknown_ _t153;
    _unknown_ _t154;
    _unknown_ _t157;
    _unknown_ _t158;
    _unknown_ _t163;
    _unknown_ _t165;
    _unknown_ _t168;
    _unknown_ _t171;
    int _t172;
    _unknown_ _t178;
    _unknown_ _t179;
    _unknown_ _t180;
    _unknown_ _t181;
    _unknown_ _t184;
    _unknown_ _t187;
    _unknown_ _t189;
    _unknown_ _t192;
    _unknown_ _t198;
    _unknown_ _t199;
    _unknown_ _t205;
    _unknown_ _t208;
    _unknown_ _t211;

    _t172 =  *np;
    _v60 = 0;
    _t152 = 1;
    if(_t172 <= 1) {
        return _v60;
    }
    while(1) {
        _v64 = _t152;
        _t205 = equation + (_t152 << 4);
        _v48 =  *((intOrPtr*)(_t205 + 4));
        _t119 =  *((intOrPtr*)(_t205 + 8));
        if(_t119 != 4) {
            goto L8;
        } else {
            goto L2;
        }
    }
}

int simp_pp(token_type* equation, int* np)
{// addr = 0x0805AE41
    int i;
    int j;
    int k;
    int ilevel;
    int jlevel;
    int modified;
    double numerator;
    double denominator;
    _unknown_ _v36;
    _unknown_ _v44;
    signed int _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    signed int _v68;
    intOrPtr _v72;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t84;
    _unknown_ _t89;
    _unknown_ _t90;
    _unknown_ _t93;
    _unknown_ _t96;
    _unknown_ _t97;
    _unknown_ _t101;
    _unknown_ _t102;
    _unknown_ _t106;
    _unknown_ _t108;
    _unknown_ _t110;
    _unknown_ _t114;
    signed int _t119;
    _unknown_ _t122;
    _unknown_ _t125;
    _unknown_ _t126;
    _unknown_ _t134;
    _unknown_ _t135;
    int _t137;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t147;
    _unknown_ _t149;

    _t137 =  *np;
    _v72 = 0;
    _v48 = 1;
    if(_t137 <= 1) {
        return _v72;
    }
    while(1) {
        _t119 = _v48;
        _v68 = _t119;
        _t84 = equation + (_t119 << 4);
        if( *((intOrPtr*)(_t84 + 8)) != 6) {
            goto L57;
        } else {
            goto L2;
        }
    }
}

int compare_recurse(token_type* p1, int n1, int l1, token_type* p2, int n2, int l2, int* diff_signp)
{// addr = 0x0805B11E
    token_type* pv1;
    token_type* ep1;
    token_type* ep2;
    int i;
    int j;
    int len;
    int first;
    int oc2;
    token_type*[9999] opa2;
    char[9999] used;
    int last_op1;
    int op1;
    int op2;
    int diff_op;
    double d1;
    double c1;
    double c2;
    double compare_epsilon;
    intOrPtr _v32;
    int _v10032;
    _unknown_ _v10036;
    token_type* _v50036;
    int _v50048;
    token_type* _v50052;
    int _v50056;
    token_type* _v50060;
    _unknown_ _v50064;
    signed int _v50068;
    _unknown_ _v50072;
    int _v50076;
    intOrPtr _v50080;
    signed int _v50084;
    token_type* _v50088;
    signed int _v50092;
    int _v50104;
    signed int _v50108;
    token_type* _v50112;
    int _v50116;
    int _v50120;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    token_type* _t235;
    _unknown_ _t239;
    token_type* _t240;
    int _t241;
    token_type* _t244;
    _unknown_ _t252;
    _unknown_ _t257;
    _unknown_ _t259;
    int _t265;
    int _t268;
    int _t269;
    _unknown_ _t271;
    int _t274;
    _unknown_ _t275;
    _unknown_ _t276;
    int _t279;
    signed int _t281;
    signed int _t285;
    int _t286;
    _unknown_ _t287;
    _unknown_ _t288;
    _unknown_ _t289;
    int _t290;
    _unknown_ _t295;
    signed int _t296;
    _unknown_ _t297;
    _unknown_ _t299;
    signed int _t301;
    token_type* _t303;
    int _t305;
    signed int _t306;
    signed int _t307;
    _unknown_ _t309;
    _unknown_ _t312;
    signed int _t316;
    intOrPtr _t317;
    _unknown_ _t320;
    _unknown_ _t323;
    _unknown_ _t324;
    _unknown_ _t325;
    _unknown_ _t327;
    _unknown_ _t330;
    _unknown_ _t332;
    token_type* _t334;
    _unknown_ _t336;
    _unknown_ _t339;
    _unknown_ _t341;
    _unknown_ _t342;
    token_type* _t344;
    _unknown_ _t346;
    signed int _t347;
    _unknown_ _t349;
    _unknown_ _t350;
    _unknown_ _t353;
    _unknown_ _t366;

    _t286 = __eax;
    _v50048 = __edx;
    _t341 = __ecx;
    _t344 = p1;
    _t235 = p2;
    _v50088 = _t235;
    _v32 =  *gs:0x14];
    asm("fld qword [0x8079298]");
    asm("fstp qword [ebp+0xffff3c50]");
     *_t235 = 0;
    if(_v50048 != 1 || n1 != 1) {
        _v50080 = _t286 + (_v50048 << 4);
        _t323 = _t344 + (n1 << 4);
        _t239 = _t286 + 16;
        __eflags = _v50080 - _t239;
        if(_v50080 <= _t239) {
L24:
            _v50068 = 0;
            goto L25;
        }
        goto L18;
L25:
        _t240 = _t344 + 16;
        __eflags = _t323 - _t240;
        if(_t323 <= _t240) {
L35:
            _v50108 = 0;
            goto L36;
        }
        _v50052 = _t240;
        __eflags = _t240->level - l1;
        if(_t240->level != l1) {
            _t303 = _v50052;
            _v50060 = _t240;
            _t265 = l1;
            while(1) {
                _t303 = _t303 + 32;
                __eflags = _t323 - _t303;
                if(_t323 <= _t303) {
                    break;
                }
                __eflags = _t303->level - _t265;
                if(_t303->level != _t265) {
                    continue;
                }
                _v50052 = _t303;
                _t240 = _v50060;
L30:
                _t305 =  *(_v50052 + 8);
                _v50108 = _t305;
                __eflags = _t305;
                if(_t305 != 0) {
                    __eflags = _v50068 - 4;
                    if(_v50068 > 4) {
                        _t306 = _v50108;
                        __eflags = _v50068 - _t306;
                        _t307 = _t306 & 4294967295 & ;
                        goto L45;
                    }
                    goto L39;
L45:
                    __eflags = _t307;
                    if(_t307 == 0) {
L138:
                        _v50036 = _t344;
                        _v10032 = 0;
                        _v50056 = 1;
                        _t301 = 1;
                        _v50048 = _t286;
                        _t290 = l1;
                        goto L62;
                        do {
L62:
                            __eflags = _t240->level - _t290;
                            if(_t240->level != _t290) {
                                goto L66;
                            }
                             *((intOrPtr*)(__ebp + -50032 + _t301 * 4)) = _t240 + 16;
                             *(__ebp + _t301 + -10028) = 0;
                            _t301 = _t301 + 1;
                            __eflags = _t301 - 9999;
                            if(_t301 <= 9999) {
                                goto L66;
                            }
                            __eflags = debug_level;
                            if(debug_level <= 0) {
                                goto L132;
                            }
                            _v50112 = "Expression too big to compare, because MAX_COMPARE_TERMS exceeded.";
                            _v50116 = 134686589;
                            _v50120 = 1;
                             *__esp = gfp;
                            __fprintf_chk();
                            _t241 = 0;
                            goto L136;
L66:
                            _t240 = _t240 + 32;
                            __eflags = _t323 - _t240;
                        } while(_t323 > _t240);
                        _v50056 = _t301;
                        _t286 = _v50048;
L68:
                         *((intOrPtr*)(__ebp + -50032 + _v50056 * 4)) = _t240 + 16;
                        _v50048 = _t286;
                        _v50076 = 0;
                        _v50104 = 1;
                        _t296 = _v50068 & 255;
                        _t347 = 1 << (_t296 & 4294967295);
                        _v50092 = _t347;
                        _v50084 = _t347 & 25;
                        while(1) {
L69:
                            _t244 = _v50048 + 16;
                            _v50060 = _t244;
                            __eflags = _v50080 - _t244;
                            if(_v50080 <= _t244) {
                                goto L74;
                            } else {
                                goto L70;
                            }
                        }
                    }
                    __eflags =  *_t286;
                    if( *_t286 != 0) {
L53:
                        __eflags = _t344->kind;
                        if(_t344->kind != 0) {
                            goto L132;
                        }
                        goto L54;
                    }
                    __eflags =  *((intOrPtr*)(_t286 + 4)) - _t341;
                    if( *((intOrPtr*)(_t286 + 4)) != _t341) {
                        goto L53;
                    }
                    __eflags = _v50068 - 3;
                    asm("o16 nop ");
                    if(__eflags != 0) {
                        goto L53;
                    }
                    asm("fld qword [ebx+0x8]");
                    asm("fabs ");
                    asm("fsub dword [0x8075170]");
                    asm("fabs ");
                    asm("fld qword [ebp+0xffff3c50]");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags < 0) {
                        goto L53;
                    }
                    _t274 = _v50048 - 2;
                    _v50048 = _t274;
                    min_level(_t286 + 32, _t274);
                    _v50112 = _v50088;
                    _v50116 = l1;
                    _v50120 = n1;
                     *__esp = _t344;
                     *((intOrPtr*)(_t239 + 4)) - _t341 = compare_recurse();
                    if(__eflags == 0) {
                        goto L132;
                    }
                    asm("fld qword [ebx+0x8]");
                    asm("fldz ");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags <= 0) {
                        goto L135;
                    }
                     *_v50088 =  *_v50088 ^ 1;
                    _t241 = 1;
                    goto L136;
L54:
                    __eflags = _t344->level - l1;
                    if(_t344->level != l1) {
                        goto L132;
                    }
                    __eflags = _v50108 - 3;
                    if(__eflags != 0) {
                        goto L132;
                    }
                    asm("fld qword [esi+0x8]");
                    asm("fabs ");
                    asm("fsub dword [0x8075170]");
                    asm("fabs ");
                    asm("fld qword [ebp+0xffff3c50]");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags < 0) {
                        goto L132;
                    }
                    _t268 = n1 - 2;
                    _v50056 = _t268;
                    _t334 = _t344 + 32;
                    _v50052 = _t334;
                    _t269 = min_level(_t334, _t268);
                    _v50112 = _v50088;
                    _v50116 = _t269;
                    _v50120 = _v50056;
                     *__esp = _v50052;
                    __eflags = compare_recurse();
                    if(__eflags == 0) {
                        goto L132;
                    }
                    asm("fld qword [esi+0x8]");
                    asm("fldz ");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags <= 0) {
                        goto L135;
                    }
                     *_v50088 =  *_v50088 ^ 1;
                    _t241 = 1;
                    goto L136;
                }
                goto L36;
L39:
                switch( *((intOrPtr*)(_v50068 * 4 +  &M08076DA0))) {
                    case 0:
                        _t316 = _v50108 - 1;
                        __eflags = _t316 - 1;
                        _t307 = _t316 & 4294967295 & ;
                        goto L45;
                    case 1:
                        __ecx = _v50108;
                        __ecx = _v50108 - 3;
                        __eflags = __ecx - 1;
                        if(__ecx > 1) {
                            goto L132;
                        }
                        goto L138;
                    case 2:
                        __ecx = _v50108;
                        __ecx = _v50108 - 3;
                        __eflags = __ecx - 1;
                        __ecx = __ecx & 4294967295 & ;
                        goto L45;
                }
            }
            _t240 = _v50060;
            goto L35;
        }
        goto L30;
L36:
        __eflags = _v50068 - 3 - 1;
        if(_v50068 - 3 > 1) {
            goto L132;
        }
        _v50036 = _t344;
        _v10032 = 0;
        _v50056 = 1;
        __eflags = _t323 - _t240;
        if(_t323 <= _t240) {
            goto L68;
        } else {
            _t301 = _v50056;
            _v50048 = _t286;
            _t290 = l1;
            goto L62;
        }
        goto L69;
    } else {
        _t279 =  *_t286;
        if(_t279 !=  *_t344) {
L132:
            _t241 = 0;
            goto L136;
        }
        if(_t279 == 0) {
            asm("fld qword [ebx+0x8]");
            asm("fld qword [esi+0x8]");
            asm("fxch st0, st1");
            asm("fucomi st0, st1");
            if(__eflags != 0 || __eflags != 0) {
                asm("fld st0, st1");
                asm("fchs ");
                asm("fucomip st0, st1");
                if(__eflags != 0 || __eflags != 0) {
                    asm("fld st0, st0");
                    asm("fabs ");
                    asm("fmul qword [ebp+0xffff3c50]");
                    asm("fld st0, st1");
                    asm("fsub st0, st3");
                    asm("fabs ");
                    asm("fxch st0, st1");
                    asm("fucomi st0, st1");
                    asm("fstp st1");
                    if(__eflags > 0) {
                        asm("fstp st0");
                        asm("fstp st0");
                        asm("fstp st0");
                        goto L135;
                    }
                    asm("fxch st0, st1");
                    asm("faddp st2, st0");
                    asm("fxch st0, st1");
                    asm("fabs ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags <= 0) {
                        goto L132;
                    }
                     *_v50088 = 1;
                    _t241 = 1;
                    goto L136;
L135:
                    _t241 = 1;
                } else {
                    asm("fstp st0");
                    asm("fstp st0");
                     *_v50088 = 1;
                    _t241 = 1;
                }
                goto L136;
            }
            goto L133;
        }
        if(_t279 != 1) {
            goto L132;
        } else {
            if(sign_cmp_flag == 0 || ( *(_t286 + 8) & 16383) != 4) {
                _t281 =  *(_t286 + 8);
                __eflags = _t281 -  *(_t344 + 8);
                _t241 = _t281 & 4294967295 & ;
            } else {
                _t285 =  *(_t344 + 8) & 16383;
                _t366 = _t285 - 4;
                _t241 = _t285 & 4294967295 & ;
            }
        }
L136:
        if(_t366 == 0) {
            return _t241;
        }
        __stack_chk_fail();
        return _t241;
L133:
        asm("fstp st0");
        asm("fstp st0");
        goto L135;
    }
L18:
    __eflags =  *((intOrPtr*)(_t239 + 4)) - _t341;
    if( *((intOrPtr*)(_t239 + 4)) != _t341) {
        _t317 = _v50080;
        while(1) {
            _t239 = _t239 + 32;
            __eflags = _t317 - _t239;
            if(_t317 <= _t239) {
                break;
            }
            __eflags =  *((intOrPtr*)(_t239 + 4)) - _t341;
            _t344 = _t344;
            if( *((intOrPtr*)(_t239 + 4)) != _t341) {
                continue;
            }
L21:
            _v50068 =  *(_t239 + 8);
            goto L25;
        }
        goto L24;
    }
    goto L21;
}

int se_compare(token_type* p1, int n1, token_type* p2, int n2, int* diff_signp)
{// addr = 0x0805B96D
    int l1;
    int l2;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    int* _v32;
    int _v36;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t21;
    int _t22;
    _unknown_ _t23;
    int _t26;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t32;
    token_type* _t34;
    _unknown_ _t35;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t34 = p2;
    _t26 = n2;
    min_level(p1, n1);
    _t22 = min_level(_t34, _t26);
    _v32 = diff_signp;
    _v36 = _t22;
    _v40 = _t26;
     *__esp = _t34;
    return compare_recurse();
}

int elim_k(token_type* equation, int* np)
{// addr = 0x0805B9CE
    token_type* p1;
    token_type* p2;
    token_type* p3;
    token_type* p4;
    token_type* ep;
    int modified;
    int level;
    double d;
    double numerator;
    double denominator;
    int flag;
    char _v36;
    char _v44;
    token_type* _v48;
    signed int _v60;
    signed int _v64;
    signed int _v68;
    int _v72;
    token_type* _v76;
    token_type* _v80;
    token_type* _v96;
    token_type* _v100;
    int* _v104;
    int* _v108;
    char* _v112;
    token_type* _v116;
    token_type* _v120;
    token_type* __ebx;
    token_type* __edi;
    signed int* __esi;
    _unknown_ __ebp;
    token_type* _t283;
    signed int _t285;
    token_type* _t288;
    signed int _t289;
    signed int _t290;
    signed int _t291;
    _unknown_ _t303;
    _unknown_ _t304;
    _unknown_ _t310;
    token_type* _t311;
    token_type* _t312;
    token_type* _t314;
    token_type* _t317;
    signed int _t318;
    signed int _t320;
    _unknown_ _t321;
    token_type* _t323;
    _unknown_ _t324;
    _unknown_ _t325;
    token_type* _t333;
    token_type* _t334;
    token_type* _t335;
    signed int _t339;
    int* _t345;
    signed int _t347;
    int* _t350;
    token_type* _t351;
    signed int _t352;

    _t350 = np;
    _t283 = equation + 16;
    _v76 = _t283;
    _t311 = _t283;
    _v72 = 0;
    while(1) {
L1:
        _t345 = equation + ( *_t350 << 4);
        if(_t311 >= _t345) {
            break;
        }
        if(_t311->kind == 2) {
            _v60 = _t311->level;
            _t285 =  *(_t311 + 8);
            __eflags = _t285 - 1 - 1;
            if(_t285 - 1 > 1) {
L49:
                _v48 = _t311 - 16;
                __eflags =  *(_t311 + 8) - 9;
                if( *(_t311 + 8) > 9) {
L156:
                    _t311 = _t311 + 32;
                    continue;
                }
                goto L50;
            }
            goto L5;
L50:
            switch( *((intOrPtr*)( *(_t311 + 8) * 4 +  &M08076DB4))) {
                case 0:
                    _t333 = _v48;
                    __eflags = _t333->level - _v60;
                    if(_t333->level != _v60) {
                        goto L156;
                    }
                    __eflags =  *_t333;
                    if(__eflags != 0) {
                        goto L156;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        goto L156;
                    } else {
                        _t288 = _t311 + 16;
                        _v116 = _t345 - _t288;
                        _v120 = _t288;
                         *__esp = _t333;
                        L080491C4();
                         *_t350 =  *_t350 - 2;
                        _v72 = 1;
                        goto L1;
                    }
                    goto L157;
                case 1:
                    __edx = _v48;
                    __eax =  *(__edx + 4);
                    __eflags = __eax - _v60;
                    if(__eax != _v60) {
                        goto L156;
                    }
                    __eflags =  *__edx;
                    if(__eflags != 0) {
                        goto L156;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        goto L156;
                    } else {
                        __ecx = equation;
                        __eflags = __edx - equation;
                        if(__edx == equation) {
L62:
                            asm("fld1 ");
                            asm("fchs ");
                            __ecx = _v48;
                            asm("fstp qword [ecx+0x8]");
                             *((intOrPtr*)(__ebx + 8)) = 3;
                            __ebx = __ebx - equation;
                            __eax = __ebx - equation >> 4;
                            _v116 = __ebx - equation >> 4;
                            __eax =  *__esi;
                            _v120 =  *__esi;
                            __eax = equation;
                             *__esp = equation;
                            binary_parenthesize();
                            _v72 = 1;
                            goto L1;
                        }
                        __eflags = __eax -  *((intOrPtr*)(__edx - 12));
                        __esi = __esi;
                        if(__eax <=  *((intOrPtr*)(__edx - 12))) {
                            goto L156;
                        }
                        goto L62;
                    }
                    goto L157;
                case 2:
                    __edx = _v48;
                    __eax =  *(__edx + 4);
                    __eflags = __eax - _v60;
                    if(__eax != _v60) {
L79:
                        __eax = __ebx + 16;
                        __edi =  *(__eax + 4);
                        __eflags = __edi - _v60;
                        if(__edi != _v60) {
                            goto L156;
                        }
                        goto L80;
                    }
                    __eflags =  *__edx;
                    if(__eflags != 0) {
                        goto L79;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomi st0, st1");
                    asm("fstp st1");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fsub dword [0x8075170]");
                        asm("fabs ");
                        asm("fld qword [0x8079298]");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags < 0) {
                            goto L79;
                        }
                    } else {
                        asm("fstp st0");
                        __ecx = __ebx + 32;
                        _v60 = __ecx;
                        __eflags = __edi - __ecx;
                        if(__edi <= __ecx) {
L76:
                            __edi = __edi - _v60;
                            _v116 = __edi;
                            __eax = _v60;
                            _v120 = _v60;
                             *__esp = __ebx;
                            L080491C4();
                            _v60 = _v60 - __ebx;
                            __eax = _v60 - __ebx >> 4;
                             *__esi =  *__esi - (_v60 - __ebx >> 4);
                            _v72 = 1;
                            goto L1;
                        }
                        __eflags = __eax - __ecx->level;
                        if(__eax <= __ecx->level) {
                            __edx = _v60;
                            while(1) {
                                __edx = __edx + 32;
                                __eflags = __edi - __edx;
                                if(__edi <= __edx) {
                                    break;
                                }
                                __eflags = __eax -  *(__edx + 4);
                                __esi = __esi;
                                if(__eax <=  *(__edx + 4)) {
                                    continue;
                                }
                                __esi = __esi;
                                _v60 = __edx;
                                goto L76;
                            }
                            _v60 = __edx;
                            goto L76;
                        }
                        goto L76;
                    }
L78:
                    __eax = __ebx + 16;
                    __edi = __edi - __eax;
                    _v116 = __edi;
                    _v120 = __eax;
                    __edx = _v48;
                     *__esp = _v48;
                    L080491C4();
                     *__esi =  *__esi - 2;
                    _v72 = 1;
                    goto L1;
L80:
                    __eflags =  *__eax;
                    if( *__eax != 0) {
                        goto L156;
                    }
                    asm("fld qword [eax+0x8]");
                    asm("fstp qword [ebp-0x38]");
                    __eax = _v48;
                    __eflags = equation - __eax;
                    if(equation >= __eax) {
L89:
                        __edx = _v48;
                        __eflags = __edi -  *(__edx + 4);
                        if(__edi !=  *(__edx + 4)) {
L91:
                            _v116 = __ebx;
                            __ecx = _v48;
                            _v120 = __ecx;
                             *__esp = __ecx + 32;
                            L080491C4();
                            __eax = _v48;
                             *(__eax + 4) = __edi;
                             *__eax = 0;
                            asm("fld qword [ebp-0x38]");
                            asm("fstp qword [eax+0x8]");
                            __eax = _v48;
                            __eax = _v48 + 16;
                             *(__eax + 4) = __edi;
                             *__eax = 2;
                             *((intOrPtr*)(__eax + 8)) = 3;
                            _v48 = _v48 - 16;
                            __eax = _v48;
                            __eflags = equation - _v48;
                            __ebx = equation - _v48 >= 0 ? _v76 : _v48 - 16;
                            goto L1;
                        }
                        goto L90;
                    }
                    __eax = __eax - 16;
                    __eflags = __edi -  *(__eax + 4);
                    if(__edi >  *(__eax + 4)) {
                        goto L89;
                    }
                    _v48 = __eax;
                    __ecx = equation;
                    while(1) {
                        __eflags = __ecx - __eax;
                        if(__ecx >= __eax) {
                            break;
                        }
                        __edx = __eax - 16;
                        __eflags = __edi -  *(__edx + 4);
                        if(__edi >  *(__edx + 4)) {
                            _v48 = __eax;
                            goto L89;
                        }
                        __eax = __edx;
                    }
                    _v48 = __eax;
                    goto L89;
L90:
                    __eflags =  *__edx;
                    if( *__edx == 0) {
                        goto L156;
                    }
                    goto L91;
                case 3:
                    __edx = _v48;
                    __eax =  *(__edx + 4);
                    __eflags = __eax - _v60;
                    if(__eax != _v60) {
L106:
                        __edi = __ebx + 16;
                        __edx = _v60;
                        __eflags = __edi->level - _v60;
                        if(__edi->level != _v60) {
                            goto L156;
                        }
                        goto L107;
                    }
                    __eflags =  *__edx;
                    if(__eflags != 0) {
                        goto L106;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        goto L106;
                    } else {
                        __ecx = __ebx + 32;
                        _v60 = __ecx;
                        __eflags = __edi - __ecx;
                        if(__edi <= __ecx) {
L105:
                            __edi = __edi - _v60;
                            _v116 = __edi;
                            __eax = _v60;
                            _v120 = _v60;
                             *__esp = __ebx;
                            L080491C4();
                            _v60 = _v60 - __ebx;
                            __eax = _v60 - __ebx >> 4;
                             *__esi =  *__esi - (_v60 - __ebx >> 4);
                            _v72 = 1;
                            goto L1;
                        }
                        __eflags = __eax - __ecx->level;
                        if(__eax <= __ecx->level) {
                            __edx = _v60;
                            while(1) {
                                __edx = __edx + 32;
                                __eflags = __edi - __edx;
                                if(__edi <= __edx) {
                                    break;
                                }
                                __eflags = __eax -  *(__edx + 4);
                                __esi = __esi;
                                if(__eax <=  *(__edx + 4)) {
                                    continue;
                                }
                                __esi = __esi;
                                _v60 = __edx;
                                goto L105;
                            }
                            _v60 = __edx;
                            goto L105;
                        }
                        goto L105;
                    }
L107:
                    __eax =  *__edi;
                    __eflags = __eax;
                    if(__eax != 0) {
                        __eflags = __eax - 1;
                        if(__eax != 1) {
                            goto L156;
                        }
                        goto L110;
                    }
                    __ecx =  ?_? ( &_v44);
                    _v112 =  &_v44;
                    __eax =  ?_? ( &_v36);
                    _v116 =  &_v36;
                    asm("fld qword [edi+0x8]");
                    asm("fstp qword [esp]");
                    __eax = f_to_fraction();
                    asm("fld qword [ebp-0x20]");
                    asm("fstp qword [esp]");
                    __eax = check_divide_by_zero();
                    asm("fld qword [ebp-0x28]");
                    asm("fdiv qword [ebp-0x20]");
                    asm("fstp qword [edi+0x8]");
                     *((intOrPtr*)(__ebx + 8)) = 3;
                    goto L1;
L110:
                     *(__edi + 8) =  *(__edi + 8) & 16383;
                    __eflags = ( *(__edi + 8) & 16383) - 4;
                    if(( *(__edi + 8) & 16383) != 4) {
                        goto L156;
                    }
                     *((intOrPtr*)(__ebx + 8)) = 3;
                    goto L1;
                case 4:
                    __edx = _v48;
                    __eax =  *(__edx + 4);
                    __eflags = __eax - _v60;
                    if(__eax != _v60) {
                        goto L156;
                    }
                    __eflags =  *__edx;
                    if(__eflags != 0) {
                        goto L156;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        goto L156;
                    } else {
                        __ecx = __ebx + 32;
                        _v60 = __ecx;
                        __eflags = __edi - __ecx;
                        if(__edi <= __ecx) {
L125:
                            __edi = __edi - _v60;
                            _v116 = __edi;
                            __eax = _v60;
                            _v120 = _v60;
                             *__esp = __ebx;
                            L080491C4();
                            _v60 = _v60 - __ebx;
                            __eax = _v60 - __ebx >> 4;
                             *__esi =  *__esi - (_v60 - __ebx >> 4);
                            _v72 = 1;
                            goto L1;
                        }
                        __eflags = __ecx->level - __eax;
                        if(__ecx->level >= __eax) {
                            __edx = _v60;
                            while(1) {
                                __edx = __edx + 32;
                                __eflags = __edi - __edx;
                                if(__edi <= __edx) {
                                    break;
                                }
                                __eflags = __eax -  *(__edx + 4);
                                if(__eax <=  *(__edx + 4)) {
                                    continue;
                                }
                                __esi = __esi;
                                _v60 = __edx;
                                goto L125;
                            }
                            _v60 = __edx;
                            goto L125;
                        }
                        goto L125;
                    }
                    goto L157;
                case 5:
                    __edx = _v48;
                    __eax =  *(__edx + 4);
                    __eflags = __eax - _v60;
                    if(__eax != _v60) {
L140:
                        __edx = __ebx + 16;
                        _v64 = __edx;
                        __eax =  *(__edx + 4);
                        __eflags = __eax - _v60;
                        if(__eax != _v60) {
                            goto L156;
                        }
                        goto L141;
                    }
                    __eflags =  *__edx;
                    if(__eflags != 0) {
                        goto L140;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fld1 ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        goto L140;
                    } else {
                        __ecx = __ebx + 32;
                        _v60 = __ecx;
                        __eflags = __edi - __ecx;
                        if(__edi <= __ecx) {
L139:
                            __edi = __edi - _v60;
                            _v116 = __edi;
                            __eax = _v60;
                            _v120 = _v60;
                             *__esp = __ebx;
                            L080491C4();
                            _v60 = _v60 - __ebx;
                            __eax = _v60 - __ebx >> 4;
                             *__esi =  *__esi - (_v60 - __ebx >> 4);
                            _v72 = 1;
                            goto L1;
                        }
                        __eflags = __ecx->level - __eax;
                        if(__ecx->level > __eax) {
                            __edx = _v60;
                            while(1) {
                                __edx = __edx + 32;
                                __eflags = __edi - __edx;
                                if(__edi <= __edx) {
                                    break;
                                }
                                __eflags = __eax -  *(__edx + 4);
                                __esi = __esi;
                                if(__eax <  *(__edx + 4)) {
                                    continue;
                                }
                                __esi = __esi;
                                _v60 = __edx;
                                goto L139;
                            }
                            _v60 = __edx;
                            goto L139;
                        }
                        goto L139;
                    }
L141:
                    __eflags =  *__edx;
                    if(__eflags != 0) {
                        goto L156;
                    }
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomi st0, st1");
                    asm("fstp st1");
                    if(__eflags != 0) {
L154:
                        asm("fsub dword [0x8075170]");
                        asm("fabs ");
                        asm("fld qword [0x8079298]");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags < 0) {
                            goto L156;
                        }
                        goto L155;
                    }
                    if(__eflags == 0) {
                        asm("fstp st0");
                        __ecx = _v48;
                        __eflags = equation - __ecx;
                        if(equation >= __ecx) {
L153:
                            __edi = __edi - __ebx;
                            _v116 = __edi;
                            __eax = _v64;
                            _v120 = _v64;
                            __edx = _v48;
                             *__esp = _v48;
                            L080491C4();
                            _v64 = _v64 - _v48;
                            __eax = _v64 - _v48 >> 4;
                             *__esi =  *__esi - (_v64 - _v48 >> 4);
                            asm("fld1 ");
                            __ecx = _v48;
                            asm("fstp qword [ecx+0x8]");
                            __ebx = _v48;
                            __ebx = _v48 + 16;
                            _v72 = 1;
                            goto L1;
                        }
                        __edx = __ecx;
                        __edx = __ecx - 16;
                        __eflags =  *(__edx + 4) - __eax;
                        if( *(__edx + 4) <= __eax) {
                            goto L153;
                        }
                        _v48 = __edx;
                        _v60 = __ebx;
                        __ebx = equation;
                        while(1) {
                            __eflags = __ebx - __edx;
                            asm("o16 nop ");
                            if(__ebx >= __edx) {
                                break;
                            }
                            __ecx = __edx - 16;
                            __eflags = __eax - __ecx->level;
                            __esi = __esi;
                            if(__eax >= __ecx->level) {
                                __ebx = _v60;
                                _v48 = __edx;
                                goto L153;
                            }
                            __edx = __ecx;
                        }
                        __ebx = _v60;
                        _v48 = __edx;
                        goto L153;
                    }
                    goto L154;
L155:
                    __eax = __ebx + 32;
                    __edi = __edi - __eax;
                    _v116 = __edi;
                    _v120 = __eax;
                     *__esp = __ebx;
                    L080491C4();
                     *__esi =  *__esi - 2;
                    _v72 = 1;
                    goto L1;
                case 6:
                    goto L156;
            }
        } else {
            _t311 = _t311 + 16;
            continue;
        }
L5:
        _v48 = _t311 + 16;
        _t334 = _t311 + 32;
        __eflags = _t345 - _t334;
        if(_t345 > _t334) {
            __eflags = _t334->level - _v60 + 1;
            if(_t334->level == _v60 + 1) {
                __eflags =  *((intOrPtr*)(_t334 + 8)) - 3 - 1;
                if( *((intOrPtr*)(_t334 + 8)) - 3 <= 1) {
                    __eflags =  *_v48;
                    if(__eflags == 0) {
                        asm("fld qword [ecx+0x8]");
                        asm("fldz ");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags > 0) {
                            __eflags = _t285 - 1;
                             *(_t311 + 8) = (_t285 & 4294967295 & ) + 1;
                            asm("fld qword [eax+0x8]");
                            asm("fchs ");
                            asm("fstp qword [eax+0x8]");
                        }
                    }
                }
            }
        }
        _t289 = _v60;
        _t317 = _v48;
        __eflags = _t317->level - _t289;
        if(_t317->level != _t289) {
L18:
            _t335 = _t311 - 16;
            _v68 = _t335;
            _t318 = _t335->level;
            _v64 = _t318;
            _t290 = _v60;
            __eflags = _t318 - _t290;
            if(_t318 != _t290) {
L22:
                _t320 = _v48->level;
                _v64 = _t320;
                _t290 = _v60;
                __eflags = _t320 - _t290;
                if(_t320 != _t290) {
                    goto L49;
                }
                goto L23;
            }
            goto L19;
L23:
            __eflags =  *_v48;
            if( *_v48 != 0) {
                goto L49;
            }
L24:
            asm("fld qword [ecx+0x8]");
            asm("fst qword [ebp-0x58]");
            asm("fstp qword [esp]");
            __isinf();
            __eflags = _t290;
            if(_t290 == 0) {
                goto L49;
            }
            _t291 = _t311->level;
            _v80 = _t291;
            _v96 = _t311;
            _v68 = 0;
            __eflags = _v64 - _t291;
            if(_v64 <= _t291) {
                _v100 = _t311;
                _v104 = _t345;
                _t347 = _v60;
                _t312 = _v96;
                _v108 = _t350;
                _t351 = _v68;
                while(1) {
                    __eflags = _t312->kind;
                    if(_t312->kind == 0) {
                        __eflags = _t312 - _v48;
                        if(_t312 != _v48) {
                            asm("fld qword [ebx+0x8]");
                            asm("fstp qword [esp]");
                            __finite();
                            __eflags = _t291;
                            _t351 = _t291 == 0 ? 1 : _t351;
                        }
                    }
                    __eflags = _t312 - equation;
                    if(_t312 == equation) {
                        break;
                    }
                    _t312 = _t312 - 16;
                    __eflags = _t347 - _t312->level;
                    if(_t347 <= _t312->level) {
                        continue;
                    }
                    _v68 = _t351;
                    _t345 = _v104;
                    _v96 = _t312;
                    _t311 = _v100;
                    _t350 = _v108;
                    goto L26;
                }
                _v68 = _t351;
                _t345 = _v104;
                _v96 = _t312;
                _t311 = _v100;
                _t350 = _v108;
L36:
                _v80 = _t311;
                _v100 = _t311;
                _v104 = _t350;
                _t352 = _v64;
                while(1) {
L37:
                    __eflags = _t311->kind;
                    if(_t311->kind == 0) {
                        __eflags = _t311 - _v48;
                        if(_t311 != _v48) {
                            asm("fld qword [ebx+0x8]");
                            asm("fstp qword [esp]");
                            __finite();
                            __eflags = _t291;
                            _t291 = _t291 != 0 ? _v68 : 1;
                            _v68 = _t291;
                        }
                    }
                    _t311 = _t311 + 16;
                    __eflags = _t345 - _t311;
                    if(_t345 <= _t311) {
                        break;
                    }
                    __eflags = _t352 - _t311->level;
                    if(_t352 <= _t311->level) {
                        continue;
                    }
                    _v80 = _t311;
                    _t311 = _v100;
                    _t350 = _v104;
L44:
                    __eflags = _v68;
                    if(_v68 != 0) {
                        goto L49;
                    }
                    __eflags = _v48 - _v96;
                    if(_v48 > _v96) {
                        _t323 = _v48;
                        __eflags =  *((intOrPtr*)(_t323 - 8)) - 2;
                        if( *((intOrPtr*)(_t323 - 8)) == 2) {
                            asm("fld qword [ebp-0x58]");
                            asm("fchs ");
                            asm("fstp qword [ecx+0x8]");
                        }
                    }
                    _t314 = _v48 + 16;
                    _v116 = _t345 - _v80;
                    _v120 = _v80;
                     *__esp = _t314;
                    L080491C4();
                    _t339 =  *_t350 - (_v80 - _t314 >> 4);
                     *_t350 = _t339;
                    _v116 = equation + (_t339 << 4) - _v48;
                    _v120 = _v48;
                     *__esp = _v96;
                    L080491C4();
                     *_t350 =  *_t350 - (_v48 - _v96 >> 4);
                    _v72 = 1;
                    return _v72;
                }
                _v80 = _t311;
                _t311 = _v100;
                _t350 = _v104;
                goto L44;
            }
L26:
            _v96 = _v96 + 16;
            __eflags = _v64 - _v80;
            if(_v64 <= _v80) {
                goto L36;
            }
            _v80 = _t311;
            goto L44;
        }
        __eflags =  *_t317;
        if(__eflags != 0) {
            goto L18;
        }
        asm("fld qword [ecx+0x8]");
        asm("fldz ");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags > 0) {
            __eflags =  *(_t311 + 8) - 1;
             *(_t311 + 8) = (_t289 & 4294967295 & ) + 1;
            asm("fld qword [ecx+0x8]");
            asm("fchs ");
            asm("fstp qword [ecx+0x8]");
        }
        asm("fld qword [eax+0x8]");
        asm("fldz ");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags != 0 || __eflags != 0) {
            goto L18;
        } else {
            _v116 = _t345 - _t311 + 32;
            _v120 = _t334;
             *__esp = _t311;
            L080491C4();
             *_t350 =  *_t350 - 2;
            _v72 = 1;
            continue;
        }
L19:
        __eflags = _t335->kind;
        if(_t335->kind != 0) {
            goto L22;
        }
        asm("fld qword [edx+0x8]");
        asm("fstp qword [esp]");
        __isinf();
        __eflags = _t290;
        if(_t290 == 0) {
            goto L22;
        }
        _v48 = _v68;
        goto L24;
    }
L157:
    return _v72;
}

int calc(int* op1p, double* k1p, int op2, double k2)
{// addr = 0x0805C1F9
    int op1;
    double d;
    double d1;
    double d2;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    char _v36;
    char _v44;
    char _v52;
    char* _v80;
    char* _v84;
    _unknown_ __ebp;
    _unknown_ _t30;
    int _t32;
    _unknown_ _t34;
    _unknown_ _t35;
    _unknown_ _t37;
    _unknown_ _t38;
    int* _t40;
    _unknown_ _t41;
    int* _t42;
    _unknown_ _t46;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t40 = op1p;
    asm("fld qword [ebp+0x14]");
    asm("fstp qword [ebp-0x40]");
    domain_check = 0;
     *(__errno_location()) = 0;
    _t32 = 0;
    if(_t40 != 0) {
        _t32 =  *_t40;
    }
    if(op2 > 9) {
L76:
        _t32 = 0;
        return _t32;
    }
    switch( *((intOrPtr*)(op2 * 4 +  &M08076DDC))) {
        case 0:
            _t42 = _t40;
            if(_t32 != 2) {
                asm("fld qword [edi]");
                asm("fstp qword [ebp-0x20]");
            } else {
                asm("fld qword [edi]");
                asm("fchs ");
                asm("fstp qword [ebp-0x20]");
            }
            asm("fld qword [ebp-0x20]");
            asm("fabs ");
            asm("fmul qword [0x8079298]");
            asm("fstp qword [ebp-0x28]");
            _t46 = op2 - 1;
            if(_t46 != 0) {
                asm("fld qword [ebp-0x40]");
                asm("fsubr qword [ebp-0x20]");
                asm("fstp qword [ebp-0x20]");
            } else {
                asm("fld qword [ebp-0x40]");
                asm("fadd qword [ebp-0x20]");
                asm("fstp qword [ebp-0x20]");
            }
            asm("fld qword [ebp-0x20]");
            asm("fabs ");
            asm("fld qword [ebp-0x28]");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(_t46 > 0) {
                asm("fldz ");
                asm("fstp qword [ebp-0x20]");
            }
            if(_t32 != 0) {
                asm("fldz ");
                asm("fld qword [ebp-0x20]");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags < 0) {
                     *_t42 = 2;
                    asm("fld qword [ebp-0x20]");
                    asm("fchs ");
                    asm("fstp qword [edi]");
                    _t32 = 1;
                } else {
                     *_t42 = 1;
                    asm("fld qword [ebp-0x20]");
                    asm("fstp qword [edi]");
                    _t32 = 1;
                }
                return _t32;
            } else {
                asm("fld qword [ebp-0x20]");
                asm("fstp qword [edi]");
                return _t32;
            }
        case 1:
            __eflags = __eax;
            __eax = __eax == 0 ? 3 : __eax;
            __eflags = __eax - op2;
            if(__eax == op2) {
                asm("fld qword [ebp-0x40]");
                asm("fmul qword [edi]");
                asm("fstp qword [edi]");
                __eax = 1;
                return _t32;
            }
            __eflags = __eax - 4;
            if(__eax == 4) {
                asm("fld qword [edi]");
                asm("fstp qword [esp]");
                __eax = check_divide_by_zero();
                asm("fld qword [ebp-0x40]");
                asm("fdiv qword [edi]");
                asm("fstp qword [edi]");
                 *__esi = 3;
                __eax = 1;
                return _t32;
            }
            __eflags = op2 - 4;
            if(op2 == 4) {
                asm("fld qword [ebp-0x40]");
                asm("fstp qword [esp]");
                __eax = check_divide_by_zero();
                asm("fld qword [ebp-0x40]");
                asm("fdivr qword [edi]");
                asm("fstp qword [edi]");
                __eax = 1;
                return _t32;
            }
            goto L80;
        case 2:
            asm("fld qword [ebp-0x40]");
            asm("fstp qword [esp]");
            __eax = check_divide_by_zero();
            _v84 = __edi;
            asm("fld qword [ebp-0x40]");
            asm("fdivr qword [edi]");
            asm("fstp qword [esp]");
            modf();
            asm("fstp st0");
            __eax = 1;
            return _t32;
        case 3:
            asm("fldz ");
            asm("fld qword [ebp-0x40]");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags == 0 && __eflags == 0) {
                warning("Modulo 0 encountered, might be considered undefined.");
            }
            __eax =  ?_? ( &_v36);
            _v84 =  &_v36;
            asm("fld qword [ebp-0x40]");
            asm("fdivr qword [edi]");
            asm("fstp qword [esp]");
            modf();
            asm("fmul qword [ebp-0x40]");
            asm("fst qword [edi]");
            __eflags = modulus_mode;
            if(__eflags == 0) {
                asm("fstp st0");
                goto L80;
            }
            asm("fldz ");
            asm("fucomip st0, st1");
            if(__eflags <= 0) {
                asm("fstp st0");
            } else {
                asm("fld qword [ebp-0x40]");
                asm("fabs ");
                asm("faddp st1, st0");
                asm("fstp qword [edi]");
            }
            __eflags = modulus_mode - 1;
            if(__eflags == 0) {
                asm("fldz ");
                asm("fld qword [ebp-0x40]");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                if(__eflags <= 0) {
                    goto L78;
                }
                asm("fld qword [edi]");
                asm("fldz ");
                asm("fxch st0, st1");
                asm("fucomi st0, st1");
                asm("fstp st1");
                if(__eflags <= 0) {
                    goto L79;
                }
                asm("faddp st1, st0");
                asm("fstp qword [edi]");
                __eax = 1;
                return _t32;
L79:
                asm("fstp st0");
                asm("fstp st0");
            }
            goto L80;
L78:
            asm("fstp st0");
            goto L80;
        case 4:
            asm("fld qword [edi]");
            asm("fldz ");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags <= 0) {
L45:
                domain_check = 1;
                asm("fld qword [edi]");
                asm("fldz ");
                asm("fxch st0, st1");
                asm("fucomi st0, st1");
                if(__eflags != 0) {
                    asm("fstp st1");
L52:
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomi st0, st1");
                    asm("fstp st1");
                    if(__eflags != 0 || __eflags != 0) {
L56:
                        asm("fld qword [ebp-0x40]");
                        asm("fstp qword [esp+0x8]");
                        asm("fstp qword [esp]");
                        pow();
                        asm("fstp qword [ebp-0x20]");
                        __eflags = preserve_surds;
                        if(preserve_surds == 0) {
                            goto L71;
                        }
                    } else {
L54:
                        asm("fldz ");
                        asm("fld qword [ebp-0x40]");
                        asm("fxch st0, st1");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags <= 0) {
                            goto L56;
                        }
L55:
                        asm("fstp st0");
                        warning("Divide by zero (0 raised to negative power).");
                        asm("fld dword [0x8075660]");
                        asm("fstp qword [ebp-0x20]");
L71:
                        check_err();
                        __eflags = domain_check;
                        if(domain_check == 0) {
                            goto L80;
                        }
L72:
                        asm("fld qword [ebp-0x20]");
                        asm("fstp qword [edi]");
                        __eax = 1;
                        return _t32;
                    }
L57:
                    __eflags = approximate_roots;
                    if(approximate_roots != 0) {
                        goto L71;
                    }
                    asm("fld qword [ebp-0x40]");
                    asm("fstp qword [esp]");
                    __finite();
                    __eflags = __eax;
                    if(__eflags == 0) {
                        goto L71;
                    }
                    asm("fld1 ");
                    asm("fld qword [ebp-0x40]");
                    while(1) {
L60:
                        asm("fprem ");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags == 0) {
                            break;
                        }
                    }
                    asm("fstp st1");
                    asm("fucomi st0, st0");
                    if(__eflags != 0) {
                        asm("fstp st0");
                        goto L65;
                    }
                    if(__eflags == 0) {
L66:
                        asm("fldz ");
                        asm("fxch st0, st1");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags != 0 || __eflags != 0) {
                            __eax =  ?_? ( &_v52);
                            _v80 =  &_v52;
                            __eax =  ?_? ( &_v44);
                            _v84 =  &_v44;
                            asm("fld qword [edi]");
                            asm("fstp qword [esp]");
                            __eax = f_to_fraction();
                            __eflags = __eax;
                            if(__eax == 0) {
                                goto L71;
                            }
                            __eax =  ?_? ( &_v52);
                            _v80 =  &_v52;
                            __eax =  ?_? ( &_v44);
                            _v84 =  &_v44;
                            asm("fld qword [ebp-0x20]");
                            asm("fstp qword [esp]");
                            __eax = f_to_fraction();
                            __eflags = __eax;
                            if(__eax != 0) {
                                goto L71;
                            }
                            domain_check = 0;
                            return _t32;
                            goto L72;
                        }
                        goto L71;
                    }
                    asm("fstp st0");
L65:
                    asm("fld1 ");
                    asm("fstp qword [esp+0x8]");
                    asm("fld qword [ebp-0x40]");
                    asm("fstp qword [esp]");
                    fmod();
                    goto L66;
                }
                goto L46;
L51:
                asm("fstp st1");
                goto L52;
            }
            asm("fld1 ");
            asm("fld qword [ebp-0x40]");
            while(1) {
L37:
                asm("fprem ");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags == 0) {
                    break;
                }
            }
            asm("fstp st1");
            asm("fucomi st0, st0");
            if(__eflags != 0) {
                asm("fstp st0");
                goto L42;
            }
            if(__eflags == 0) {
L43:
                asm("fldz ");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags != 0 || __eflags != 0) {
L80:
                    __eax = 1;
                    return _t32;
                } else {
                    goto L45;
                }
                return _t32;
            }
            asm("fstp st0");
L42:
            asm("fld1 ");
            asm("fstp qword [esp+0x8]");
            asm("fld qword [ebp-0x40]");
            asm("fstp qword [esp]");
            fmod();
            goto L43;
L46:
            if(__eflags != 0) {
                goto L51;
            }
            asm("fld qword [ebp-0x40]");
            asm("fucomip st0, st2");
            asm("fstp st1");
            if(__eflags != 0 || __eflags != 0) {
                goto L54;
            } else {
                asm("fstp st0");
                warning("0^0 encountered, might be considered indeterminate.");
                asm("fld1 ");
                asm("fstp qword [ebp-0x20]");
                goto L71;
            }
            goto L55;
        case 5:
            asm("fld1 ");
            asm("fadd qword [edi]");
            asm("fstp qword [esp]");
            lgamma();
            asm("fstp qword [esp]");
            exp();
            asm("fild dword [0x8079368]");
            asm("fmulp st1, st0");
            asm("fst qword [ebp-0x20]");
            __eflags =  *__ebx;
            if( *__ebx != 0) {
                asm("fstp st0");
                goto L76;
            }
            asm("fstp qword [edi]");
            __eax = 1;
            return _t32;
        case 6:
            goto L76;
    }
}

int const_recurse(token_type* equation, int* np, int loc, int level, int iflag)
{// addr = 0x0805C5E4
    int loc1;
    int const_count;
    int op;
    int modified;
    double d1;
    double d2;
    double d3;
    double numerator;
    double denominator;
    complexs cv;
    complexs p;
    _unknown_ _v16;
    char _v36;
    char _v44;
    char _v52;
    char _v68;
    char _v84;
    intOrPtr _v96;
    intOrPtr* _v100;
    signed int _v104;
    int _v108;
    signed int _v112;
    int _v116;
    signed int _v120;
    signed int _v132;
    int _v136;
    signed int _v152;
    union kind_list* _v156;
    signed int _v160;
    char _v200;
    char* _v208;
    signed int _v212;
    signed int _v216;
    signed int _v220;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t175;
    intOrPtr _t177;
    int _t180;
    signed int _t181;
    int _t184;
    int _t185;
    _unknown_ _t186;
    int _t196;
    intOrPtr* _t208;
    intOrPtr* _t211;
    int* _t212;
    union kind_list* _t214;
    intOrPtr* _t217;
    int* _t218;
    intOrPtr* _t230;
    intOrPtr* _t233;
    int* _t234;
    _unknown_ _t238;
    intOrPtr* _t242;
    signed int _t243;
    signed int _t248;
    _unknown_ _t249;
    _unknown_ _t253;
    signed int _t259;
    signed int _t260;
    intOrPtr _t261;
    _unknown_ _t262;
    _unknown_ _t263;
    _unknown_ _t264;
    token_type* _t267;
    intOrPtr _t268;
    intOrPtr _t274;
    union kind_list* _t283;
    signed int _t284;
    intOrPtr* _t287;
    token_type* _t288;
    int _t289;
    union kind_list* _t294;
    _unknown_ _t296;
    intOrPtr _t297;
    token_type* _t298;
    _unknown_ _t301;
    _unknown_ _t304;
    signed int _t307;
    token_type* _t310;
    intOrPtr _t311;
    signed int _t312;
    signed int _t315;
    signed int _t316;

    _t248 = __ecx;
    _v96 = __eax;
    _v100 = __edx;
    _v152 = _t248;
    _v112 = _t248;
    _t243 = _t248;
    _v108 = 0;
    _v116 = 0;
    _v156 =  &(equation->kind);
    _t298 = equation;
L1:
    while(_t243 <  *_v100) {
L2:
        _v104 = _t243;
        _t307 = (_t243 << 4) + _v96;
        _t177 =  *((intOrPtr*)(_t307 + 4));
        if(_t177 >= _t298) {
            __eflags = _t177 - _t298;
            if(_t177 <= _t298) {
                __eflags =  *_t307;
                if( *_t307 != 0) {
L57:
                    _t243 = _t243 + 1;
                    goto L1;
                }
                goto L13;
                return _v108;
            }
            _v108 = _v108 | const_recurse(_v156, np);
            _t297 =  *_v100;
            __eflags = _t243 - _t297;
            if(_t243 >= _t297) {
                goto L1;
            }
            __eflags = _t298 -  *((intOrPtr*)(_t307 + 4));
            if(_t298 >=  *((intOrPtr*)(_t307 + 4))) {
                goto L1;
            } else {
                _t242 = _v96 + (_t243 << 4) + 20;
                goto L9;
            }
            while(1) {
L9:
                _t243 = _t243 + 1;
                __eflags = _t243 - _t297;
                if(_t243 >= _t297) {
                    break;
                }
L10:
                _t242 = _t242 + 16;
                __eflags = _t298 -  *_t242;
                if(_t298 <  *_t242) {
                    continue;
                } else {
                    goto L1;
                }
                goto L10;
            }
            goto L1;
L13:
            __eflags = _v116;
            if(_v116 != 0) {
                _t274 = _v96;
                _t180 = (_v104 << 4) + _t274 - 16;
                _v136 = _t180;
                _v132 =  *(_t180 + 8);
                _t181 = _v112;
                _v160 = _t181;
                _v120 = (_t181 << 4) + _t274;
                asm("fld qword [eax+0x8]");
                asm("fstp qword [ebp-0x20]");
                asm("fld qword [esi+0x8]");
                asm("fstp qword [ebp+0xffffff70]");
                _t184 = 0;
                __eflags = _v112 - _v152;
                if(_v112 > _v152) {
                    _t184 = _v96 + (_v160 << 4) - 8;
                }
                asm("fld qword [ebp+0xffffff70]");
                asm("fstp qword [esp+0xc]");
                _v212 = _v132;
                _v216 =  &_v36;
                 *__esp = _t184;
                _t185 = calc();
                __eflags = _t185;
                if(_t185 == 0) {
                    goto L57;
                }
                __eflags = _v132 - 6;
                if(_v132 != 6) {
L56:
                    asm("fld qword [ebp-0x20]");
                    asm("fstp qword [eax+0x8]");
                    domain_check = 0;
                    _v212 =  !_t243 +  *_v100 << 4;
                    _v216 = (_v104 << 4) + _v96 + 16;
                     *__esp = _v136;
                    L080491C4();
                     *_v100 =  *_v100 - 2;
                    _t243 = _t243 - 2;
                    _v108 = 1;
                    goto L57;
                }
                __eflags = domain_check;
                if(domain_check != 0) {
                    goto L56;
                }
                _v208 =  &_v52;
                _v212 =  &_v44;
                asm("fld qword [ebp+0xffffff70]");
                asm("fstp qword [esp]");
                _t196 = f_to_fraction();
                __eflags = _t196;
                if(_t196 != 0) {
                     *(__errno_location()) = 0;
                    asm("fld qword [ebp+0xffffff70]");
                    asm("fstp qword [esp+0x8]");
                    asm("fld qword [ebp-0x20]");
                    asm("fchs ");
                    asm("fstp qword [esp]");
                    pow();
                    asm("fstp qword [ebp-0x80]");
                    check_err();
                    asm("fld qword [ebp-0x30]");
                    asm("fld dword [0x8072058]");
                    asm("fld st0, st1");
                    while(1) {
L28:
                        asm("fprem ");
                        asm("fnstsw ax");
                        asm("sahf ");
                        if(__eflags == 0) {
                            break;
                        }
                    }
                    asm("fstp st1");
                    asm("fucomi st0, st0");
                    if(__eflags != 0) {
                        asm("fstp st0");
                        goto L33;
                    }
                    if(__eflags == 0) {
                        asm("fstp st1");
                        goto L35;
                    }
                    asm("fstp st0");
                    goto L33;
L35:
                    asm("fldz ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fld qword [ebp-0x28]");
                        asm("fld dword [0x8072058]");
                        asm("fld st0, st1");
                        while(1) {
L38:
                            asm("fprem ");
                            asm("fnstsw ax");
                            asm("sahf ");
                            if(__eflags == 0) {
                                break;
                            }
                        }
                        asm("fstp st1");
                        asm("fucomi st0, st0");
                        if(__eflags != 0) {
                            asm("fstp st0");
                            goto L43;
                        }
                        if(__eflags == 0) {
                            asm("fstp st1");
                            goto L45;
                        }
                        asm("fstp st0");
                        goto L43;
L45:
                        asm("fldz ");
                        asm("fxch st0, st1");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fld qword [ebp-0x80]");
                            asm("fchs ");
                            asm("fstp qword [ebp-0x80]");
                        }
                        asm("fld qword [ebp-0x80]");
                        asm("fstp qword [ebp-0x20]");
                        goto L56;
L43:
                        asm("fld dword [0x8072058]");
                        asm("fstp qword [esp+0x8]");
                        asm("fstp qword [esp]");
                        fmod();
                        goto L45;
                    } else {
                        _v104 = _t307;
                        __eflags = np;
                        if(np == 0) {
                            return _v108;
                        }
                        __eflags =  *_v100 + 2 - n_tokens;
                        if(__eflags > 0) {
                            error_huge();
                        }
                        _v212 =  *_v100 - _v112 << 4;
                        _v216 = _v120;
                         *__esp = (_v160 << 4) + _v96 + 32;
                        L080491C4();
                         *_v100 =  *_v100 + 2;
                        asm("fld dword [0x8072054]");
                        asm("fld qword [ebp+0xffffff70]");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags != 0 || __eflags != 0) {
                            _t310 = equation;
                            _t259 = _v120;
                             *(_t259 + 4) = _t310;
                             *_t259 = 0;
                            asm("fld qword [ebp-0x80]");
                            asm("fstp qword [ecx+0x8]");
                            _t208 = (_v112 << 4) + _v96 + 16;
                             *(_t208 + 4) = _t310;
                             *_t208 = 2;
                             *(_t208 + 8) = 3;
                            _t283 =  &(_t310->kind);
                            _t260 = _v104;
                             *(_t260 + 4) = _t283;
                             *_t260 = 1;
                             *(_t260 + 8) = 3;
                            _t311 = _v96;
                            _t211 = (_t243 << 4) + _t311 + 16;
                             *(_t211 + 4) = _t283;
                             *_t211 = 2;
                             *((intOrPtr*)(_t211 + 8)) = 6;
                            _t212 = (_t243 << 4) + _t311 + 32;
                            _t212[1] = _t283;
                             *_t212 = 0;
                            asm("fld qword [ebp+0xffffff70]");
                            asm("fadd st0, st0");
                            asm("fstp qword [eax+0x8]");
                            _v108 = 1;
                            return _v108;
                        } else {
                            _t214 =  &(equation->kind);
                            _t284 = _v120;
                             *(_t284 + 4) = _t214;
                             *_t284 = 0;
                            asm("fld qword [ebp-0x20]");
                            asm("fchs ");
                            asm("fstp qword [edx+0x8]");
                            _t261 = _v96;
                            _t287 = (_v112 << 4) + _t261 + 16;
                             *(_t287 + 4) = _t214;
                             *_t287 = 2;
                             *((intOrPtr*)(_t287 + 8)) = 6;
                            _t312 = _v104;
                             *(_t312 + 4) = _t214;
                             *_t312 = 0;
                            asm("fld dword [0x8072054]");
                            asm("fstp qword [esi+0x8]");
                            _t217 = (_t243 << 4) + _t261 + 16;
                            _t288 = equation;
                             *(_t217 + 4) = _t288;
                             *_t217 = 2;
                             *(_t217 + 8) = 3;
                            _t218 = (_t243 << 4) + _t261 + 32;
                            _t218[1] = _t288;
                             *_t218 = 1;
                            _t218[2] = 3;
                            _v108 = 1;
                            return _v108;
                        }
                        goto L56;
                    }
                    goto L38;
L33:
                    asm("fld dword [0x8072058]");
                    asm("fstp qword [esp+0x8]");
                    asm("fstp qword [esp]");
                    fmod();
                    goto L35;
                }
                _v104 = _t307;
                __eflags = np;
                if(np == 0) {
                    return _v108;
                }
                __eflags = preserve_surds;
                if(preserve_surds != 0) {
                    __eflags = approximate_roots;
                    if(approximate_roots == 0) {
                        return _v108;
                    }
                }
                asm("fld qword [ebp-0x20]");
                asm("fstp qword [ebp-0x40]");
                asm("fldz ");
                asm("fst qword [ebp-0x38]");
                asm("fld qword [ebp+0xffffff70]");
                asm("fstp qword [ebp-0x50]");
                asm("fstp qword [ebp-0x48]");
                _t289 =  &_v68;
                _push(4 << 2);
                _push( &_v84);
                _push( &_v200);
                memcpy();
                __esp =  &((__esp)[3]);
                _push(0 << 2);
                _push(_t289);
                _push( &_v216);
                memcpy();
                __esp =  &((__esp)[3]);
                 *__esp = _t289;
                complex_pow();
                __esp = __esp - 4;
                __eflags =  *_v100 + 2 - n_tokens;
                if( *_v100 + 2 > n_tokens) {
                    error_huge();
                }
                _v216 =  *_v100 - _v112 << 4;
                _t315 = _v120;
                _v220 = _t315;
                 *__esp = (_v160 << 4) + _v96 + 32;
                L080491C4();
                 *_v100 =  *_v100 + 2;
                 *(_t315 + 4) = equation;
                 *_t315 = 0;
                asm("fld qword [ebp-0x40]");
                asm("fstp qword [esi+0x8]");
                _t230 = (_v112 << 4) + _v96 + 16;
                _t267 = equation;
                 *(_t230 + 4) = _t267;
                 *_t230 = 2;
                 *(_t230 + 8) = 1;
                _t294 =  &(_t267->kind);
                _t316 = _v104;
                 *(_t316 + 4) = _t294;
                 *_t316 = 1;
                 *(_t316 + 8) = 3;
                _t268 = _v96;
                _t233 = (_t243 << 4) + _t268 + 16;
                 *(_t233 + 4) = _t294;
                 *_t233 = 2;
                 *(_t233 + 8) = 3;
                _t234 = (_t243 << 4) + _t268 + 32;
                _t234[1] = _t294;
                 *_t234 = 0;
                asm("fld qword [ebp-0x38]");
                asm("fstp qword [eax+0x8]");
                _v108 = 1;
                return _v108;
            } else {
                _v112 = _t243;
                _v116 = 1;
            }
            goto L57;
        }
        if(_t243 - _v152 == 1) {
            _t175 = equation - 1;
            _t176 = _t175 <= 0 ? 1 : _t175;
             *((intOrPtr*)((_v152 << 4) + _v96 + 4)) = _t175 <= 0 ? 1 : _t175;
        }
        return _v108;
    }
}

int combine_constants(token_type* equation, int* np, int iflag)
{// addr = 0x0805CB7B
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t6;

    return const_recurse(1, iflag);
}

int integer_root_simp(token_type* equation, int* np)
{// addr = 0x0805CBA1
    int modified;
    int i;
    int j;
    int k;
    double d1;
    double d2;
    int root;
    _unknown_ _v30;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    intOrPtr _v48;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    signed int __esi;
    _unknown_ __ebp;
    int _t75;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t81;
    _unknown_ _t84;
    _unknown_ _t87;
    _unknown_ _t95;
    _unknown_ _t102;
    _unknown_ _t103;
    _unknown_ _t105;
    _unknown_ _t106;
    _unknown_ _t107;
    _unknown_ _t110;
    _unknown_ _t111;
    _unknown_ _t114;
    _unknown_ _t117;
    _unknown_ _t121;
    _unknown_ _t124;
    _unknown_ _t126;
    _unknown_ _t128;
    _unknown_ _t134;
    _unknown_ _t135;
    _unknown_ _t137;
    _unknown_ _t142;
    _unknown_ _t153;
    _unknown_ _t154;
    _unknown_ _t157;

    _t75 =  *np;
    __esi = 1;
    _v48 = 0;
    if(_t75 - 2 <= 1) {
        return _v48;
    }
    while(1) {
        _t142 = equation + (__esi << 4);
        if( *((intOrPtr*)(_t142 + 8)) != 6) {
            goto L50;
        } else {
            goto L2;
        }
    }
}

organize(token_type* equation, int* np)
{// addr = 0x0805CEBA
    signed int _v20;
    char* _v24;
    int* __ebx;
    _unknown_ __ebp;
    signed int _t9;
    _unknown_ _t11;

    __ebx = np;
    _t9 =  *__ebx;
    if(_t9 <= 0 || (_t9 & 4294967295 & 1) == 0) {
        _v20 = _t9;
        _v24 = "Bad expression size = %d.\n";
         *__esp = 1;
        __printf_chk();
        error_bug("Internal error: organize() called with bad expression size.");
    }
    if( *__ebx <= n_tokens) {
        return org_recurse(1, 0);
    }
    error_bug("Internal error: expression array overflow detected in organize().");
    return org_recurse(1, 0);
}

elim_loop(token_type* equation, int* np)
{// addr = 0x0805CF2C
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    intOrPtr _v40;
    int* __ebx;
    token_type* __esi;
    _unknown_ __ebp;

    __esi = equation;
    __ebx = np;
    if(abort_flag != 0) {
        abort_flag = 0;
        _v40 = 13;
         *__esp =  &jmp_save;
        __longjmp_chk();
    }
    list_debug(6, __esi,  *__ebx, 0, 0);
    while(1) {
L3:
        organize(__esi, __ebx);
        if(combine_constants(__esi, __ebx, 1) == 0 && elim_k(__esi, __ebx) == 0 && simp_pp(__esi, __ebx) == 0) {
            break;
        }
    }
    if(reorder(__esi, __ebx) == 0) {
L8:
        list_debug(5, __esi,  *__ebx, 0, 0);
        return;
    } else {
        goto L7;
    }
    while(1) {
L7:
        organize(__esi, __ebx);
        if(elim_k(__esi, __ebx) == 0) {
            break;
        }
    }
    goto L8;
}

int simp_loop(token_type* equation, int* np)
{// addr = 0x0805D024
    int i;
    int rv;
    _unknown_ _v40;
    token_type* __ebx;
    _unknown_ __edi;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t8;

    __ebx = equation;
    __esi = np;
    __edi = 0;
    while(1) {
        elim_loop(__ebx, __esi);
        if(simp2_power(__ebx, __esi) != 0) {
            continue;
        } else {
            goto L3;
        }
    }
    elim_loop(__ebx, __esi);
    if(simp2_power(__ebx, __esi) != 0) {
        continue;
    } else {
        goto L3;
    }
L3:
    if(factor_times(__ebx, __esi) != 0) {
L1:
        __edi = 1;
        goto L2;
    } else {
        goto L4;
    }
L4:
    if(elim_sign(__ebx, __esi) == 0) {
L5:
        if(subtract_itself(__ebx, __esi) == 0) {
            return __edi;
        }
    }
    goto L2;
}

simp_divide(token_type* equation, int* np)
{// addr = 0x0805D095
    intOrPtr _v36;
    int* _v40;
    token_type* __ebx;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t9;

    __ebx = equation;
    __esi = np;
    while(1) {
        simp_loop(__ebx, __esi);
        if(factor_constants(__ebx, __esi, 1) == 0) {
            asm("fldz ");
            asm("fstp qword [esp+0xc]");
            _v36 = 0;
            _v40 = __esi;
             *__esp = __ebx;
            if(factor_divide() == 0) {
                return ;
            }
        }
    }
}

factorv(token_type* equation, int* np, long int v)
{// addr = 0x0805D0EC
    long int _v52;
    int* _v56;
    int* __ebx;
    long int __edi;
    token_type* __esi;
    _unknown_ __ebp;
    _unknown_ _t9;
    _unknown_ _t10;

    __esi = equation;
    __ebx = np;
    __edi = v;
    if(__edi == 3) {
        approximate_complex_roots(__esi, __ebx);
    }
    while(1) {
        simp_loop(__esi, __ebx);
        asm("fldz ");
        asm("fstp qword [esp+0xc]");
        _v52 = __edi;
        _v56 = __ebx;
         *__esp = __esi;
        if(factor_plus() == 0) {
            if(__edi != 3) {
                return ;
            }
            if(div_imaginary(__esi, __ebx) == 0) {
                return ;
            }
        }
    }
}

simp_equation(int n)
{// addr = 0x0805D152
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v24;
    _unknown_ __ebp;
    int _t19;
    signed int _t24;
    _unknown_ _t25;
    _unknown_ _t27;
    _unknown_ _t28;

    _v12 = __ebx;
    _v8 = __esi;
    _t24 = n;
    if( *((intOrPtr*)( &n_lhs + _t24 * 4)) <= 0) {
        return ;
    }
    _t28 = 0 + _t24 * 4;
    _t19 = simp_loop( *( &lhs + _t24 * 4), _t28 +  &n_lhs);
    if( *((intOrPtr*)( &n_rhs + _t24 * 4)) == 0) {
        return ;
    }
    simp_loop( *( &rhs + _t24 * 4), _t28 +  &n_rhs);
    return ;
}

simp2_divide(token_type* equation, int* np, long int v, int fc_level)
{// addr = 0x0805D1B8
    long int _v52;
    int* _v56;
    token_type* __ebx;
    int __edi;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t13;

    __ebx = equation;
    __esi = np;
    __edi = fc_level;
    while(1) {
        elim_loop(__ebx, __esi);
        if(simp2_power(__ebx, __esi) == 0 && elim_sign(__ebx, __esi) == 0) {
            if(subtract_itself(__ebx, __esi) == 0 && factor_constants(__ebx, __esi, __edi) == 0) {
                asm("fldz ");
                asm("fstp qword [esp+0xc]");
                _v52 = v;
                _v56 = __esi;
                 *__esp = __ebx;
                if(factor_divide() == 0) {
                    return ;
                }
            }
        }
    }
}

simp_ssub(token_type* equation, int* np, long int v, double d, int power_flag, int times_flag, int fc_level)
{// addr = 0x0805D23F
    long int _v68;
    int* _v72;
    token_type* __ebx;
    int __edi;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t20;

    __ebx = equation;
    __esi = np;
    asm("fld qword [ebp+0x14]");
    asm("fstp qword [ebp-0x20]");
    __edi = fc_level;
    while(1) {
        elim_loop(__ebx, __esi);
        if(simp2_power(__ebx, __esi) == 0 && (__edi == 0 || factor_times(__ebx, __esi) == 0)) {
            if(elim_sign(__ebx, __esi) == 0 && subtract_itself(__ebx, __esi) == 0 && factor_constants(__ebx, __esi, _a32) == 0) {
                asm("fld qword [ebp-0x20]");
                asm("fstp qword [esp+0xc]");
                _v68 = v;
                _v72 = __esi;
                 *__esp = __ebx;
                if(factor_divide() == 0) {
                    asm("fld qword [ebp-0x20]");
                    asm("fstp qword [esp+0xc]");
                    _v68 = v;
                    _v72 = __esi;
                     *__esp = __ebx;
                    if(factor_plus() == 0) {
                        if(times_flag == 0) {
                            return ;
                        }
                        if(factor_power(__ebx, __esi) == 0) {
                            return ;
                        }
                    }
                }
            }
        }
    }
}

simpb_side(token_type* equation, int* np, int uf_power_flag, int power_flag, int fc_level)
{// addr = 0x0805D324
    int i;
    int vc;
    int cnt;
    long int v1;
    long int last_v;
    sort_type[999] va;
    intOrPtr _v8028;
    int _v8032;
    token_type* _v8036;
    int* _v8040;
    token_type* _v8044;
    int _v8048;
    signed int _v8052;
    int _v8056;
    intOrPtr _v8064;
    long int _v8068;
    int* _v8072;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t86;
    _unknown_ _t87;
    _unknown_ _t92;
    token_type* _t103;
    signed int _t105;
    int _t106;
    signed int _t107;
    long int _t108;
    long int _t113;
    signed int _t114;
    token_type* _t116;
    long int _t117;
    token_type* _t118;
    int* _t119;
    int* _t120;
    int _t121;
    int* _t122;

    _t116 = equation;
    _t120 = np;
    simp_loop(_t116, _t120);
    if(uf_power_flag != 0) {
        uf_allpower(_t116, _t120);
    }
    _v8032 = 0;
    _v8044 = _t116;
    _t117 = 0;
    _v8040 = _t120;
    while(1) {
L18:
        _t121 =  *_v8040;
        if(_t121 <= 0) {
            break;
        }
        _t103 = _v8044;
        _t108 = -1;
        _v8036 = 0;
        _t113 = 0;
L4:
        while(1) {
            if(_t103->kind != 1) {
L10:
                __ecx = _t108;
                goto L12;
            }
            __ecx =  *(_t103 + 8);
            if(__ecx <= _t117) {
                goto L10;
            }
            if(_t108 == 255 || __ecx < _t108) {
                goto L11;
            } else {
                _t121 = _t121;
                if(_t108 != __ecx) {
                    goto L10;
                }
                _v8036 =  &(_v8036->kind);
                __ecx = _t108;
            }
L12:
            _t113 = _t113 + 2;
            _t103 = _t103 + 32;
            if(_t113 < _t121) {
                _t108 = __ecx;
                continue;
            }
            if(__ecx == 255) {
                goto L20;
            }
            if(__ecx > 3) {
                _t114 = _v8032;
                 *(__ebp + -8024 + _t114 * 8) = __ecx;
                 *(__ebp + -8020 + _t114 * 8) = _v8036;
                _v8032 = _t114 + 1;
            }
            if(_v8032 > 999) {
                goto L20;
            } else {
                _t117 = __ecx;
                goto L18;
            }
L21:
            _v8064 = simpb_vcmp;
            qsort( &_v8028, _v8032, 8);
            simp2_divide(_t118, _t122, _v8028, fc_level);
            if(_v8032 <= 1) {
L27:
                simp2_divide(_t118, _t122, 0, fc_level);
                _t105 = 0;
                if(_v8032 > 0) {
                    while(1) {
L30:
                        asm("fldz ");
                        asm("fstp qword [esp+0xc]");
                        _v8068 =  *(__ebp + -8024 + _t105 * 8);
                        _v8072 = _t122;
                         *__esp = _t118;
                        if(factor_plus() == 0) {
                            break;
                        }
                        simp2_divide(_t118, _t122, 0, fc_level);
                    }
                    _t105 = _t105 + 1;
                    if(_t105 < _v8032) {
                        goto L30;
                    }
L34:
                    _t106 = fc_level;
                    while(1) {
                        asm("fldz ");
                        asm("fstp qword [esp+0xc]");
                        _v8068 = 5;
                        _v8072 = _t122;
                         *__esp = _t118;
                        if(factor_plus() == 0) {
                            break;
                        }
                        simp2_divide(_t118, _t122, 0, _t106);
                    }
L36:
                    _v8048 = fc_level;
                    _v8052 = 1;
                    _v8056 = power_flag;
                    asm("fldz ");
                    asm("fstp qword [esp+0xc]");
                    _v8068 = 5;
                    _v8072 = _t122;
                     *__esp = _t118;
                    simp_ssub();
                    return;
                }
                goto L28;
            }
            _t107 = 1;
            _v8036 = _t118;
            _t119 = _t122;
            while(1) {
L23:
                asm("fldz ");
                asm("fstp qword [esp+0xc]");
                _v8068 =  *(__ebp + -8024 + _t107 * 8);
                _v8072 = _t119;
                 *__esp = _v8036;
                if(factor_divide() != 0) {
                    simp2_divide(_v8036, _t119,  *(__ebp + -8024 + _t107 * 8), fc_level);
                }
                _t107 = _t107 + 1;
                if(_t107 >= _v8032) {
                    break;
                }
            }
            _t122 = _t119;
            _t118 = _v8036;
            goto L27;
L28:
            goto L34;
L11:
            _v8036 = 1;
            goto L12;
        }
    }
L20:
    _t118 = _v8044;
    _t122 = _v8040;
    if(_v8032 == 0) {
        goto L36;
    }
    goto L21;
}

simple_frac_side(token_type* equation, int* np)
{// addr = 0x0805D5D8
    intOrPtr _v16;
    int _v20;
    int _v24;
    _unknown_ _v28;
    _unknown_ _v32;
    int _v36;
    int* _v40;
    int* __ebx;
    token_type* __esi;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t33;

    __esi = equation;
    __ebx = np;
    if( *__ebx <= 0) {
        return ;
    }
    while(1) {
        _v16 = 5;
        _v20 = 1;
        _v24 = 0;
        asm("fld1 ");
        asm("fstp qword [esp+0xc]");
        _v36 = 0;
        _v40 = __ebx;
         *__esp = __esi;
        simp_ssub();
        if(poly_gcd_simp(__esi, __ebx) == 0) {
            if(uf_power(__esi, __ebx) != 0 || super_factor(__esi, __ebx, 2) != 0) {
                continue;
            } else {
                list_debug(2, __esi,  *__ebx, 0, 0);
                make_fractions(__esi, __ebx);
                uf_tsimp(__esi, __ebx);
                poly_factor(__esi, __ebx, 1);
                simpb_side(__esi, __ebx, 1, 0, 2);
                fractions_and_group(__esi, __ebx);
                return;
            }
        }
    }
}

simpv_side(token_type* equation, int* np, long int v)
{// addr = 0x0805D6E2
    intOrPtr _v16;
    intOrPtr _v20;
    signed int _v24;
    long int _v36;
    int* _v40;
    _unknown_ __ebp;
    int* _t11;
    signed int _t13;

    _t13 = __ecx;
    _t11 = np;
    __edx = v;
    if( *_t11 == 0) {
        return ;
    }
    _v16 = 6;
    _v20 = 1;
    _v24 = _t13 & 4294967295 & ;
    asm("fldz ");
    asm("fstp qword [esp+0xc]");
    _v36 = __edx;
    _v40 = _t11;
     *__esp = equation;
    simp_ssub();
    return;
}

simp_side(token_type* equation, int* np)
{// addr = 0x0805D72A
    intOrPtr _v16;
    intOrPtr _v20;
    intOrPtr _v24;
    intOrPtr _v36;
    int* _v40;
    _unknown_ __ebp;

    _v16 = 6;
    _v20 = 1;
    _v24 = 1;
    asm("fld1 ");
    asm("fstp qword [esp+0xc]");
    _v36 = 0;
    _v40 = np;
     *__esp = equation;
    simp_ssub();
    return;
}

calc_simp(token_type* equation, int* np)
{// addr = 0x0805D76A
    _unknown_ _v20;
    _unknown_ _v24;
    int* __ebx;
    token_type* __esi;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;
    _unknown_ _t21;

    __esi = equation;
    __ebx = np;
    approximate_roots = 1;
    subst_constants(__esi, __ebx);
    simp_side(__esi, __ebx);
    uf_power(__esi, __ebx);
    factorv(__esi, __ebx, 3);
    ufactor(__esi, __ebx);
    factorv(__esi, __ebx, 3);
    uf_simp(__esi, __ebx);
    factorv(__esi, __ebx, 3);
    simp_side(__esi, __ebx);
    make_fractions(__esi, __ebx);
    uf_tsimp(__esi, __ebx);
    approximate_roots = 0;
    return;
}

simps_side(token_type* equation, int* np, int zsolve)
{// addr = 0x0805D82F
    intOrPtr _v32;
    intOrPtr _v36;
    signed int _v40;
    int _v52;
    int* _v56;
    int* __ebx;
    token_type* __esi;
    _unknown_ __ebp;
    _unknown_ _t15;
    int _t16;

    __esi = equation;
    __ebx = np;
    elim_loop(__esi, __ebx);
    _t16 = simp_constant_power(__esi, __ebx);
    while(1) {
L1:
        _v32 = 6;
        _v36 = 1;
        _v40 = _t16 & 4294967295 & ;
        asm("fldz ");
        asm("fstp qword [esp+0xc]");
        _v52 = 0;
        _v56 = __ebx;
         *__esp = __esi;
        simp_ssub();
        _t16 = super_factor(__esi, __ebx, 0);
        if(_t16 == 0) {
            break;
        }
    }
    return;
}

simp_i(token_type* equation, int* np)
{// addr = 0x0805D8AF
    int i;
    int level;
    token_type* _v32;
    int _v36;
    signed int _v40;
    signed int _v52;
    int* _v56;
    _unknown_ __ebx;
    signed int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t35;
    int _t36;
    _unknown_ _t37;
    _unknown_ _t42;
    intOrPtr* _t55;
    int* _t58;
    int* _t59;
    int* _t62;
    int _t65;
    token_type* _t66;
    int* _t67;

    _t66 = equation;
    _t59 = np;
    simp_loop(_t66, _t59);
    _t36 =  *_t59;
    if(_t36 <= 0) {
        goto L9;
    } else {
        __edi = 0;
        _v32 = _t66;
        _t67 = _t59;
        while(1) {
L2:
            _v40 = __edi;
            _t62 = _v32 + (__edi << 4);
            if( *_t62 == 1 && _t62[2] == 3) {
                _v36 = _t62[1] + 1;
                _v52 =  *_t67 - __edi << 4;
                _v56 = _t62;
                 *__esp = (_v40 << 4) + _v32 + 32;
                L080491C4();
                 *_t67 =  *_t67 + 2;
                _t62[1] = _v36;
                 *_t62 = 0;
                asm("fld1 ");
                asm("fchs ");
                asm("fstp qword [ebx+0x8]");
                _t55 = (__edi << 4) + _v32 + 16;
                _t65 = _v36;
                 *(_t55 + 4) = _t65;
                 *_t55 = 2;
                 *((intOrPtr*)(_t55 + 8)) = 6;
                __edi = __edi + 2;
                _t58 = _v32 + (__edi << 4);
                _t58[1] = _t65;
                 *_t58 = 0;
                asm("fld dword [0x8072054]");
                asm("fstp qword [eax+0x8]");
            }
            __edi = __edi + 2;
            _t36 =  *_t67;
            if(_t36 <= __edi) {
                break;
            }
        }
        _t59 = _t67;
        _t66 = _v32;
        while(1) {
L9:
            organize(_t66, _t59);
            combine_constants(_t66, _t59, 0);
            if(elim_k(_t66, _t59) == 0 && simp_pp(_t66, _t59) == 0 && factor_power(_t66, _t59) == 0 && factor_times(_t66, _t59) == 0) {
                break;
            }
        }
        simp_loop(_t66, _t59);
        return;
    }
}

simpa_side(token_type* equation, int* np, int quick_flag, int frac_flag)
{// addr = 0x0805DA11
    int i;
    int flag;
    jmp_buf save_save;
    _unknown_ _v168;
    int _v176;
    int _v180;
    int _v184;
    _unknown_ _v188;
    _unknown_ _v192;
    int _v196;
    int* _v200;
    _unknown_ __ebx;
    _unknown_ __ebp;
    int _t264;
    _unknown_ _t268;
    _unknown_ _t270;
    _unknown_ _t272;
    _unknown_ _t274;
    _unknown_ _t281;
    _unknown_ _t283;
    _unknown_ _t286;
    _unknown_ _t289;
    _unknown_ _t298;
    _unknown_ _t300;
    _unknown_ _t303;
    _unknown_ _t306;
    _unknown_ _t308;
    _unknown_ _t311;
    _unknown_ _t320;
    _unknown_ _t324;
    _unknown_ _t326;
    _unknown_ _t337;
    _unknown_ _t340;
    _unknown_ _t342;
    _unknown_ _t344;
    _unknown_ _t346;
    _unknown_ _t348;
    _unknown_ _t350;
    _unknown_ _t352;
    _unknown_ _t367;
    _unknown_ _t375;
    _unknown_ _t378;
    _unknown_ _t379;
    _unknown_ _t380;

    _t264 =  *np;
    if(_t264 <= 1) {
        return ;
    }
    list_debug(2, equation, _t264, 0, 0);
    simpb_side(equation, np, 0, 1, 1);
    if(rationalize_denominators != 0) {
        rationalize(equation, np);
    }
    unsimp_power(equation, np);
    uf_times(equation, np);
    simp_loop(equation, np);
    uf_pplus(equation, np);
    uf_repeat(equation, np);
    while(1) {
        elim_loop(equation, np);
        if(mod_simp(equation, np) != 0) {
            continue;
        } else {
            simp_i(equation, np);
            unsimp_power(equation, np);
            uf_times(equation, np);
            _v176 = 1;
            _v180 = 1;
            _v184 = 1;
            asm("fld1 ");
            asm("fstp qword [esp+0xc]");
            _v196 = 0;
            _v200 = np;
             *__esp = equation;
            simp_ssub();
            unsimp_power(equation, np);
            uf_neg_help(equation, np);
            uf_times(equation, np);
            goto L6;
        }
    }
}

simpa_repeat_side(token_type* equation, int* np, int quick_flag, int frac_flag)
{// addr = 0x0805E1EE
    int _v32;
    signed int _v36;
    token_type* _v40;
    int* __ebx;
    int __edi;
    token_type* __esi;
    _unknown_ __ebp;
    signed int _t17;

    __esi = equation;
    __ebx = np;
    __edi = frac_flag;
    _v32 = __edi;
    _t16 = quick_flag;
    _v36 = quick_flag;
    _v40 = __ebx;
     *__esp = __esi;
    simpa_side();
    if(repeat_flag == 0) {
        return ;
    }
    while(1) {
L1:
        _t17 =  *__ebx;
        n_tes = _t17;
        _v36 = _t17 << 4;
        _v40 = __esi;
         *__esp = tes;
        L080491C4();
        simpa_side(__esi, __ebx, quick_flag, __edi);
        __edx =  *__ebx;
        _t16 = n_tes;
        if(__edx >= _t16) {
            break;
        }
    }
    if(_t16 == __edx) {
        return ;
    }
     *__ebx = _t16;
    _v36 = n_tes << 4;
    _v40 = tes;
     *__esp = __esi;
    L080491C4();
    return;
}

int fpower_recurse(token_type* equation, int* np, int loc, int level)
{// addr = 0x0805E290
    int modified;
    int i;
    int j;
    int k;
    int len1;
    int len2;
    _unknown_ _v32;
    _unknown_ _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    _unknown_ _v60;
    intOrPtr _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    signed int _v76;
    _unknown_ _v80;
    intOrPtr* _v84;
    signed int _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    signed int _v136;
    union kind_list* _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    union kind_list* _v152;
    _unknown_ _v156;
    union kind_list* _v160;
    _unknown_ _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t381;
    signed int _t382;
    _unknown_ _t383;
    intOrPtr _t385;
    _unknown_ _t388;
    _unknown_ _t392;
    _unknown_ _t393;
    _unknown_ _t394;
    _unknown_ _t395;
    _unknown_ _t400;
    _unknown_ _t401;
    _unknown_ _t407;
    _unknown_ _t410;
    _unknown_ _t413;
    _unknown_ _t418;
    _unknown_ _t420;
    _unknown_ _t423;
    _unknown_ _t435;
    _unknown_ _t438;
    _unknown_ _t439;
    _unknown_ _t440;
    _unknown_ _t443;
    _unknown_ _t444;
    _unknown_ _t445;
    _unknown_ _t449;
    _unknown_ _t459;
    _unknown_ _t462;
    _unknown_ _t463;
    _unknown_ _t465;
    _unknown_ _t486;
    _unknown_ _t488;
    _unknown_ _t500;
    _unknown_ _t518;
    _unknown_ _t538;
    _unknown_ _t544;
    _unknown_ _t548;
    _unknown_ _t551;
    _unknown_ _t552;
    _unknown_ _t559;
    signed int _t560;
    _unknown_ _t564;
    intOrPtr _t567;
    _unknown_ _t570;
    _unknown_ _t571;
    _unknown_ _t572;
    _unknown_ _t573;
    _unknown_ _t574;
    _unknown_ _t576;
    _unknown_ _t578;
    _unknown_ _t579;
    _unknown_ _t580;
    _unknown_ _t582;
    _unknown_ _t584;
    _unknown_ _t586;
    signed int _t591;
    _unknown_ _t592;
    intOrPtr _t594;
    intOrPtr _t595;
    intOrPtr _t596;
    intOrPtr _t598;
    union kind_list* _t599;
    _unknown_ _t601;
    _unknown_ _t606;
    _unknown_ _t608;
    _unknown_ _t615;
    _unknown_ _t627;
    _unknown_ _t629;
    signed int _t633;
    _unknown_ _t635;
    intOrPtr* _t640;
    _unknown_ _t643;
    _unknown_ _t647;
    _unknown_ _t650;
    _unknown_ _t651;
    _unknown_ _t654;
    _unknown_ _t658;
    _unknown_ _t660;
    _unknown_ _t662;
    _unknown_ _t668;
    _unknown_ _t670;
    _unknown_ _t672;
    _unknown_ _t674;
    _unknown_ _t676;
    _unknown_ _t678;
    _unknown_ _t679;
    _unknown_ _t680;
    _unknown_ _t682;
    _unknown_ _t684;
    _unknown_ _t686;
    _unknown_ _t687;
    _unknown_ _t688;
    token_type* _t690;
    token_type* _t691;
    _unknown_ _t693;
    _unknown_ _t694;
    _unknown_ _t695;
    _unknown_ _t696;
    _unknown_ _t697;
    _unknown_ _t698;
    _unknown_ _t699;
    _unknown_ _t700;
    _unknown_ _t701;
    _unknown_ _t702;
    intOrPtr _t703;
    token_type* _t706;
    union kind_list* _t708;
    _unknown_ _t709;

    _t591 = __ecx;
    _v52 = __eax;
    _v84 = __edx;
    _v88 = _t591;
    _t633 = _t591 + 1;
    _t703 =  *_v84;
    if(_t633 >= _t703) {
L10:
        _v136 = 0;
        goto L11;
    }
    _t564 = (_t633 << 4) + _v52;
    _t385 =  *((intOrPtr*)(_t564 + 4));
    if(equation > _t385) {
        goto L10;
    }
    if(_t385 != equation) {
        _t388 = (_v88 << 4) + _v52 + 48;
        _t691 = equation;
        while(1) {
L8:
            _t633 = _t633 + 2;
            if(_t633 >= _t703) {
                break;
            }
            goto L9;
        }
        goto L10;
    } else {
L5:
        if( *((intOrPtr*)(_t564 + 8)) - 3 > 1) {
            goto L10;
        } else {
            _v76 = _v88;
            _v136 = 0;
            _t708 =  &(equation->kind);
            _t599 =  &(_t708[0]);
            _v160 = _t599;
            _v152 = _t708;
            _v140 = _t599;
            while(1) {
                _v64 = _v76 + 1;
                _t567 =  *_v84;
                if(_v64 >= _t567) {
                    goto L18;
                } else {
                    goto L13;
                }
            }
        }
        goto L11;
    }
L9:
    _t564 = _t388;
    _t598 =  *((intOrPtr*)(_t388 + 4));
    if(_t598 >= _t691) {
        _t388 = _t388 + 32;
        if(_t598 != _t691) {
            goto L8;
        }
        goto L5;
    }
    goto L10;
L11:
    _t560 = _v88;
    _t690 =  &(equation->kind);
    _t706 = equation;
    while(_t560 <  *_v84) {
        _t381 =  *((intOrPtr*)((_t560 << 4) + _v52 + 4));
        if(_t706 > _t381) {
            return _v136;
        }
        if(_t706 >= _t381) {
            _t382 = _t560 + 1;
        } else {
            _v136 = _v136 | fpower_recurse(_t690);
            _t382 = _t560 + 1;
            _t594 =  *_v84;
            _v56 = _t594;
            if(_t594 <= _t382) {
                goto L113;
            }
            _t595 = _v52;
            if(_t706 >=  *((intOrPtr*)((_t382 << 4) + _t595 + 4))) {
                goto L113;
            }
            _t640 = _t595 + (_t560 << 4) + 52;
            _t596 = _v56;
            while(1) {
                _t382 = _t382 + 2;
                if(_t596 <= _t382) {
                    break;
                }
                _t640 = _t640 + 32;
                if(_t706 <  *_t640) {
                    continue;
                }
                goto L113;
            }
        }
L113:
        _t560 = _t382;
    }
}

int factor_power(token_type* equation, int* np)
{// addr = 0x0805EB89
    _unknown_ __ebp;
    _unknown_ _t3;

    return fpower_recurse(1);
}

int ftimes_recurse(token_type* equation, int* np, int loc, int level)
{// addr = 0x0805EBA8
    int modified;
    int i;
    int j;
    int k;
    int len1;
    int len2;
    _unknown_ _v32;
    intOrPtr _v48;
    _unknown_ _v52;
    intOrPtr _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    intOrPtr* _v80;
    _unknown_ _v84;
    intOrPtr _v88;
    signed int _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v124;
    signed int _v128;
    _unknown_ _v132;
    signed int _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    union kind_list* _v148;
    _unknown_ _v160;
    _unknown_ _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t370;
    signed int _t371;
    _unknown_ _t372;
    intOrPtr _t374;
    _unknown_ _t377;
    _unknown_ _t381;
    _unknown_ _t382;
    _unknown_ _t383;
    _unknown_ _t384;
    _unknown_ _t389;
    _unknown_ _t399;
    _unknown_ _t408;
    _unknown_ _t413;
    _unknown_ _t433;
    _unknown_ _t436;
    _unknown_ _t462;
    _unknown_ _t474;
    _unknown_ _t484;
    _unknown_ _t495;
    _unknown_ _t500;
    _unknown_ _t502;
    _unknown_ _t508;
    _unknown_ _t513;
    _unknown_ _t515;
    _unknown_ _t523;
    _unknown_ _t524;
    _unknown_ _t532;
    signed int _t533;
    _unknown_ _t537;
    intOrPtr _t539;
    _unknown_ _t541;
    _unknown_ _t543;
    _unknown_ _t547;
    _unknown_ _t548;
    _unknown_ _t551;
    _unknown_ _t552;
    signed int _t553;
    _unknown_ _t554;
    intOrPtr _t558;
    intOrPtr _t560;
    _unknown_ _t562;
    _unknown_ _t568;
    _unknown_ _t573;
    _unknown_ _t578;
    _unknown_ _t586;
    _unknown_ _t590;
    _unknown_ _t594;
    _unknown_ _t597;
    _unknown_ _t599;
    signed int _t606;
    _unknown_ _t608;
    intOrPtr _t610;
    intOrPtr* _t614;
    _unknown_ _t617;
    _unknown_ _t621;
    _unknown_ _t622;
    _unknown_ _t627;
    _unknown_ _t631;
    _unknown_ _t637;
    _unknown_ _t638;
    _unknown_ _t639;
    _unknown_ _t640;
    _unknown_ _t642;
    _unknown_ _t643;
    _unknown_ _t645;
    _unknown_ _t646;
    _unknown_ _t651;
    _unknown_ _t652;
    token_type* _t655;
    token_type* _t656;
    union kind_list* _t658;
    intOrPtr _t659;
    token_type* _t660;
    intOrPtr _t661;
    _unknown_ _t662;
    _unknown_ _t663;
    _unknown_ _t666;
    _unknown_ _t707;

    _t553 = __ecx;
    _v48 = __eax;
    _v80 = __edx;
    _v128 = _t553;
    _t606 = _t553 + 1;
    _t659 =  *_v80;
    if(_t606 >= _t659) {
L103:
        _t533 = _v128;
        _v136 = 0;
        goto L104;
    }
    _t537 = (_t606 << 4) + _v48;
    _t374 =  *((intOrPtr*)(_t537 + 4));
    if(equation > _t374) {
        goto L103;
    }
    if(_t374 != equation) {
        _t377 = (_v128 << 4) + _v48 + 48;
        _t656 = equation;
        while(1) {
L8:
            _t606 = _t606 + 2;
            if(_t606 >= _t659) {
                break;
            }
            goto L9;
        }
        goto L103;
    } else {
L5:
        _v136 = 0;
        if( *((intOrPtr*)(_t537 + 8)) - 3 > 1) {
            if(_v136 == 0) {
                _t533 = _v128;
                goto L104;
            }
        } else {
            _v92 = _v128;
            _t658 =  &(equation->kind);
            _v148 = _t658;
            while(1) {
                _t539 = _v92 + 1;
                _v88 = _t539;
                _t661 =  *_v80;
                if(_t539 >= _t661) {
                    goto L17;
                } else {
                    goto L12;
                }
            }
        }
L92:
        _v136 = 1;
        return _v136;
    }
L9:
    _t537 = _t377;
    _t560 =  *((intOrPtr*)(_t377 + 4));
    if(_t560 >= _t656) {
        _t377 = _t377 + 32;
        if(_t560 != _t656) {
            goto L8;
        }
        goto L5;
    } else {
    }
    goto L103;
L104:
    _t655 =  &(equation->kind);
    _t660 = equation;
    while(_t533 <  *_v80) {
        _t370 =  *((intOrPtr*)((_t533 << 4) + _v48 + 4));
        if(_t660 > _t370) {
            return _v136;
        }
        if(_t660 >= _t370) {
            _t371 = _t533 + 1;
        } else {
            _v136 = _v136 | ftimes_recurse(_t655);
            _t371 = _t533 + 1;
            _t610 =  *_v80;
            _v56 = _t610;
            if(_t610 <= _t371 || _t660 >=  *((intOrPtr*)((_t371 << 4) + _v48 + 4))) {
                goto L102;
            }
            _t614 = _v48 + (_t533 << 4) + 52;
            _t558 = _v56;
            while(1) {
                _t371 = _t371 + 2;
                if(_t558 <= _t371) {
                    break;
                }
                _t614 = _t614 + 32;
                if(_t660 <  *_t614) {
                    continue;
                }
                goto L102;
            }
        }
L102:
        _t533 = _t371;
    }
}

int factor_times(token_type* equation, int* np)
{// addr = 0x0805F3DD
    _unknown_ __ebp;
    _unknown_ _t3;

    return ftimes_recurse(1);
}

int big_fplus(token_type* equation, int level, int diff_sign, int sop1, int op1, int op2, int i1, int i2, int b1, int b2, int ai, int aj, int i, int j, int e1, int e2)
{// addr = 0x0805F3FC
    int k;
    int m;
    int n;
    int len;
    signed int _v32;
    token_type* _v36;
    signed int _v40;
    intOrPtr _v44;
    int _v48;
    signed int _v52;
    char _v56;
    signed int _v60;
    signed int _v64;
    intOrPtr _v68;
    signed int _v84;
    token_type* _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t171;
    signed int _t178;
    signed int _t188;
    _unknown_ _t199;
    signed int _t215;
    signed int _t217;
    _unknown_ _t231;
    int _t240;
    signed int _t242;
    signed int _t244;
    token_type* _t245;
    signed int _t251;
    signed int _t253;
    _unknown_ _t256;
    signed int _t261;
    signed int _t262;
    signed int _t264;
    signed int _t266;
    signed int _t267;
    int _t285;
    _unknown_ _t291;
    signed int _t308;
    _unknown_ _t314;
    signed int _t326;
    signed int _t328;
    _unknown_ _t331;
    signed int _t334;
    signed int _t338;
    signed int _t340;
    signed int _t341;
    signed int _t343;
    signed int _t344;
    signed int _t346;
    signed int _t347;
    signed int _t349;
    signed int _t350;
    signed int _t351;
    signed int _t352;
    signed int _t353;
    signed int _t355;
    signed int _t356;
    signed int _t357;
    signed int _t359;
    char _t371;

    _t285 = __edx;
    _v44 = __eax;
    _v48 = _t285;
    _v56 = __ecx;
    _t334 = sop1;
    _v52 = 0;
    if(equation == 4) {
        scratch->level = _t285;
        scratch->kind = 0;
        asm("fld1 ");
        asm("fstp qword [eax+0x8]");
         *(scratch + 20) = _t285;
         *(scratch + 16) = 2;
         *((intOrPtr*)(scratch + 24)) = 4;
        _v52 = 2;
    }
    _t346 = b2 - op2;
    _t261 = _v52 << 4;
    _v84 = _t346 << 4;
    _v88 = (op2 << 4) + _v44;
     *__esp = scratch + _t261;
    L080491C4();
    _t347 = _t346 + _v52;
    if(op2 != _t334 || b2 != aj) {
L7:
        _t171 = _t347 << 4;
         *(scratch + _t171 + 4) = _v48;
         *(scratch + _t171) = 2;
         *((intOrPtr*)(scratch + _t171 + 8)) = 3;
        _t262 = _t347 + 1;
        _t349 = op2 - _t334;
        _v84 = _t349 << 4;
        _v88 = (_t334 << 4) + _v44;
         *__esp = scratch + (_t262 << 4);
        L080491C4();
        _t350 = _t262 + _t349;
        _t178 = _t350 << 4;
         *(scratch + _t178 + 4) = _v48;
         *(scratch + _t178) = 0;
        if(level != 2) {
            asm("fld1 ");
            asm("fstp qword [eax+edx+0x8]");
        } else {
            asm("fld1 ");
            asm("fchs ");
            asm("fstp qword [eax+edx+0x8]");
        }
        _t351 = _t350 + 1;
        _t338 = aj - b2;
        _v84 = _t338 << 4;
        _v88 = (b2 << 4) + _v44;
         *__esp = scratch + (_t351 << 4);
        L080491C4();
        _t352 = _t351 + _t338;
        if(_t262 >= _t352) {
L13:
            _t188 = _t352 << 4;
            _v68 = _v48 + 1;
             *((intOrPtr*)(scratch + _t188 + 4)) = _v68;
             *(scratch + _t188) = 2;
             *(scratch + _t188 + 8) = diff_sign;
            _t353 = _t352 + 1;
            _v40 = _t353;
            _t340 = i1 - op1;
            _v84 = _t340 << 4;
            _v88 = (op1 << 4) + _v44;
             *__esp = scratch + (_t353 << 4);
            L080491C4();
            _t341 = _t340 + _v40;
            _v64 = b2 - i2;
            if(2 - i1 + _v64 * 2 + i + _t341 > n_tokens) {
                error_huge();
            }
            _v60 = b1 - i1 + _t341;
            _t355 = ai - i1;
            _t264 = _t341 << 4;
            _v84 = _t355 << 4;
            _v88 = (i1 << 4) + _v44;
             *__esp = scratch + _t264;
            L080491C4();
            _t356 = _t341 + _t355;
            _t215 = _v60 + 1;
            if(_t356 <= _t215) {
L18:
                _t371 = _v56;
                _v56 = _t371 != 0;
                if(_t371 == 0 || i1 != op1 || ai != i || _t341 >= _t356) {
L23:
                    _t217 = _t356 << 4;
                    _t343 = _v60 << 4;
                     *((intOrPtr*)(scratch + _t217 + 4)) =  *((intOrPtr*)(scratch + _t343 + 4)) + 1;
                     *(scratch + _t217) = 2;
                     *(scratch + _t217 + 8) = 2;
                    _t357 = _t356 + 1;
                    _v32 =  !i2 + b2;
                    _v36 = (i2 << 4) + _v44 + 16;
                    _v84 = _v32 << 4;
                    _v88 = _v36;
                     *__esp = scratch + (_t357 << 4);
                    L080491C4();
                    _t266 = _t357 + _v32;
                    _t231 =  *((intOrPtr*)(scratch + _t343 + 4)) + 2 - min_level(_v36, _v32);
                    if(_t357 >= _t266) {
L26:
                        if(_v56 != 0) {
                            _t242 = _t266 << 4;
                             *(scratch + _t242 + 4) = _v48;
                             *(scratch + _t242) = 2;
                            if(equation != 4) {
                                 *((intOrPtr*)(scratch + _t242 + 8)) = 4;
                            } else {
                                 *((intOrPtr*)(scratch + _t242 + 8)) = 3;
                            }
                            _t244 = _t266 + 1 << 4;
                             *((intOrPtr*)(scratch + _t244 + 4)) = _v68;
                             *(scratch + _t244) = 0;
                            asm("fld1 ");
                            asm("fchs ");
                            asm("fstp qword [eax+edx+0x8]");
                            _t267 = _t266 + 2;
                            _t245 = scratch;
                            _v84 = _v64 << 4;
                            _v88 = _t245 + (i2 - op2 + _v52 << 4);
                             *__esp = _t245 + (_t267 << 4);
                            L080491C4();
                            _t266 = _t267 + _v64;
                        }
                        _t359 = i - ai;
                        _v84 = _t359 << 4;
                        _v88 = (ai << 4) + _v44;
                         *__esp = scratch + (_t266 << 4);
                        L080491C4();
                        _t240 = _t266 + _t359;
                        if(_v40 >= _t240) {
                            return _t240;
                        }
                        _t308 = _v40 << 4;
                        _t344 = _v40;
                        while(1) {
L33:
                             *((intOrPtr*)(scratch + _t308 + 4)) =  *((intOrPtr*)(scratch + _t308 + 4)) + 2;
                            _t344 = _t344 + 1;
                            _t308 = _t308 + 16;
                            if(_t240 <= _t344) {
                                break;
                            }
                        }
                        return _t240;
                    }
                } else {
                    while(1) {
L22:
                         *((intOrPtr*)(scratch + _t264 + 4)) =  *((intOrPtr*)(scratch + _t264 + 4)) + 1;
                        _t341 = _t341 + 1;
                        _t264 = _t264 + 16;
                        if(_t356 <= _t341) {
                            break;
                        }
                    }
                    goto L23;
                }
L24:
                _t326 = _t357 << 4;
                while(1) {
L25:
                     *((intOrPtr*)(scratch + _t326 + 4)) =  *((intOrPtr*)(scratch + _t326 + 4)) + _t231;
                    _t357 = _t357 + 1;
                    _t326 = _t326 + 16;
                    if(_t266 <= _t357) {
                        break;
                    }
                }
                goto L26;
            }
            _t328 = _t215 << 4;
            while(1) {
L17:
                 *((intOrPtr*)(scratch + _t328 + 4)) =  *((intOrPtr*)(scratch + _t328 + 4)) + 1;
                _t215 = _t215 + 1;
                _t328 = _t328 + 16;
                if(_t356 <= _t215) {
                    break;
                }
            }
            goto L18;
        }
        _t251 = _t262 << 4;
        while(1) {
L12:
             *((intOrPtr*)(scratch + _t251 + 4)) =  *((intOrPtr*)(scratch + _t251 + 4)) + 2;
            _t262 = _t262 + 1;
            _t251 = _t251 + 16;
            if(_t352 <= _t262) {
                break;
            }
        }
        goto L13;
    } else {
        if(_v52 >= _t347) {
            goto L7;
        } else {
            _t253 = _v52;
            goto L6;
        }
        while(1) {
L6:
             *((intOrPtr*)(scratch + _t261 + 4)) =  *((intOrPtr*)(scratch + _t261 + 4)) + 1;
            _t253 = _t253 + 1;
            _t261 = _t261 + 16;
            if(_t347 <= _t253) {
                break;
            }
        }
        goto L7;
    }
}

int fplus_recurse(token_type* equation, int* np, int loc, int level, long int v, double d, int whole_flag, int div_only)
{// addr = 0x0805F8B2
    int modified;
    int i;
    int j;
    int k;
    int len1;
    int len2;
    _unknown_ _v32;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    intOrPtr _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    signed int _v76;
    _unknown_ _v84;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    union kind_list* _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ _v121;
    _unknown_ _v128;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    intOrPtr* _v156;
    signed int _v160;
    _unknown_ _v164;
    signed int _v168;
    _unknown_ _v172;
    _unknown_ _v176;
    _unknown_ _v180;
    intOrPtr _v184;
    _unknown_ _v188;
    union kind_list* _v192;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ _v204;
    _unknown_ _v208;
    _unknown_ _v224;
    _unknown_ _v252;
    _unknown_ _v256;
    _unknown_ _v260;
    _unknown_ _v264;
    _unknown_ _v268;
    _unknown_ _v272;
    _unknown_ _v276;
    double _v280;
    long int _v284;
    _unknown_ _v288;
    _unknown_ _v292;
    int* _v296;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t692;
    intOrPtr _t696;
    _unknown_ _t699;
    intOrPtr* _t703;
    _unknown_ _t706;
    _unknown_ _t707;
    _unknown_ _t708;
    _unknown_ _t709;
    _unknown_ _t712;
    _unknown_ _t714;
    _unknown_ _t717;
    _unknown_ _t719;
    _unknown_ _t724;
    _unknown_ _t726;
    _unknown_ _t727;
    _unknown_ _t731;
    _unknown_ _t733;
    _unknown_ _t736;
    _unknown_ _t739;
    _unknown_ _t743;
    _unknown_ _t745;
    _unknown_ _t746;
    _unknown_ _t747;
    _unknown_ _t759;
    _unknown_ _t782;
    _unknown_ _t788;
    _unknown_ _t789;
    _unknown_ _t806;
    _unknown_ _t808;
    _unknown_ _t817;
    _unknown_ _t819;
    _unknown_ _t835;
    _unknown_ _t837;
    _unknown_ _t857;
    _unknown_ _t873;
    _unknown_ _t876;
    _unknown_ _t899;
    _unknown_ _t901;
    _unknown_ _t903;
    _unknown_ _t904;
    _unknown_ _t918;
    _unknown_ _t925;
    _unknown_ _t926;
    _unknown_ _t928;
    _unknown_ _t931;
    _unknown_ _t942;
    _unknown_ _t946;
    _unknown_ _t962;
    _unknown_ _t965;
    _unknown_ _t972;
    _unknown_ _t975;
    _unknown_ _t978;
    _unknown_ _t979;
    _unknown_ _t983;
    _unknown_ _t985;
    _unknown_ _t986;
    _unknown_ _t990;
    _unknown_ _t995;
    _unknown_ _t998;
    _unknown_ _t1001;
    _unknown_ _t1005;
    _unknown_ _t1014;
    _unknown_ _t1016;
    _unknown_ _t1019;
    signed int _t1022;
    _unknown_ _t1023;
    intOrPtr _t1024;
    _unknown_ _t1025;
    _unknown_ _t1026;
    _unknown_ _t1027;
    _unknown_ _t1028;
    _unknown_ _t1030;
    _unknown_ _t1032;
    signed int _t1034;
    _unknown_ _t1035;
    intOrPtr _t1037;
    intOrPtr _t1038;
    union kind_list* _t1040;
    _unknown_ _t1043;
    _unknown_ _t1047;
    _unknown_ _t1049;
    _unknown_ _t1052;
    _unknown_ _t1053;
    _unknown_ _t1054;
    _unknown_ _t1056;
    _unknown_ _t1058;
    _unknown_ _t1061;
    _unknown_ _t1064;
    _unknown_ _t1067;
    _unknown_ _t1069;
    _unknown_ _t1073;
    _unknown_ _t1075;
    _unknown_ _t1085;
    _unknown_ _t1087;
    _unknown_ _t1101;
    _unknown_ _t1105;
    _unknown_ _t1110;
    _unknown_ _t1120;
    _unknown_ _t1123;
    signed int _t1126;
    _unknown_ _t1129;
    intOrPtr _t1130;
    _unknown_ _t1132;
    _unknown_ _t1138;
    _unknown_ _t1142;
    _unknown_ _t1145;
    _unknown_ _t1147;
    _unknown_ _t1148;
    _unknown_ _t1150;
    _unknown_ _t1151;
    _unknown_ _t1152;
    _unknown_ _t1155;
    _unknown_ _t1156;
    _unknown_ _t1158;
    _unknown_ _t1160;
    _unknown_ _t1162;
    _unknown_ _t1165;
    _unknown_ _t1167;
    _unknown_ _t1169;
    _unknown_ _t1171;
    _unknown_ _t1173;
    _unknown_ _t1175;
    _unknown_ _t1179;
    _unknown_ _t1181;
    _unknown_ _t1183;
    _unknown_ _t1185;
    _unknown_ _t1189;
    _unknown_ _t1192;
    _unknown_ _t1194;
    _unknown_ _t1196;
    _unknown_ _t1198;
    _unknown_ _t1199;
    _unknown_ _t1200;
    _unknown_ _t1202;
    _unknown_ _t1203;
    _unknown_ _t1207;
    _unknown_ _t1211;
    _unknown_ _t1214;
    _unknown_ _t1217;
    _unknown_ _t1218;
    _unknown_ _t1219;
    intOrPtr* _t1220;
    _unknown_ _t1226;
    _unknown_ _t1227;
    _unknown_ _t1228;
    _unknown_ _t1230;
    _unknown_ _t1233;
    _unknown_ _t1234;
    _unknown_ _t1235;
    _unknown_ _t1237;
    _unknown_ _t1238;
    _unknown_ _t1239;
    _unknown_ _t1240;
    _unknown_ _t1244;
    _unknown_ _t1245;
    _unknown_ _t1250;
    _unknown_ _t1253;
    intOrPtr _t1258;
    union kind_list* _t1260;
    intOrPtr _t1262;
    _unknown_ _t1263;
    _unknown_ _t1264;
    _unknown_ _t1269;
    _unknown_ _t1274;
    _unknown_ _t1278;
    _unknown_ _t1279;
    _unknown_ _t1284;
    _unknown_ _t1285;
    _unknown_ _t1286;
    _unknown_ _t1288;
    _unknown_ _t1290;
    _unknown_ _t1291;
    _unknown_ _t1296;

    _t1034 = __ecx;
    _v60 = __eax;
    _v156 = __edx;
    _v168 = _t1034;
    asm("fld qword [ebp+0x10]");
    asm("fstp qword [ebp+0xffffff78]");
    _t1126 = _t1034 + 1;
    _t1258 =  *_v156;
    _t692 = (_t1126 << 4) + _v60;
    while(_t1126 < _t1258) {
        _t1023 = _t692;
        _t1038 =  *((intOrPtr*)(_t692 + 4));
        if(_t1038 >= equation) {
            _t692 = _t692 + 32;
            __eflags = _t1038 - equation;
            if(_t1038 != equation) {
                _t1126 = _t1126 + 2;
                continue;
            }
            _v160 = 0;
            __eflags =  *((intOrPtr*)(_t1023 + 8)) - 1 - 1;
            if( *((intOrPtr*)(_t1023 + 8)) - 1 > 1) {
                _t1022 = _v168;
                __eflags = _v160;
                if(_v160 == 0) {
L288:
                    _t1260 =  &(equation->kind);
                    _t1220 = _v156;
L289:
                    while(_t1022 <  *_t1220) {
                        _t696 =  *((intOrPtr*)((_t1022 << 4) + _v60 + 4));
                        if(equation > _t696) {
                            return _v160;
                        }
                        __eflags = equation - _t696;
                        if(equation >= _t696) {
                            _t1022 = _t1022 + 1;
                            asm("o16 nop ");
                            continue;
                        }
                        _v280 = d;
                        _v284 = v;
                        asm("fld qword [ebp+0xffffff78]");
                        asm("fstp qword [esp+0x8]");
                        _v296 = np;
                         *__esp = _t1260;
                        _v160 = _v160 | fplus_recurse();
                        _t1022 = _t1022 + 1;
                        _t1130 =  *_t1220;
                        _t703 = _v60 + (_t1022 << 4) + 4;
                        while(1) {
                            __eflags = _t1022 - _t1130;
                            if(_t1022 >= _t1130) {
                                break;
                            }
                            _t1037 =  *_t703;
                            _t703 = _t703 + 32;
                            __eflags = equation - _t1037;
                            if(equation < _t1037) {
                                _t1022 = _t1022 + 2;
                                continue;
                            }
                            goto L289;
                        }
                    }
                }
            } else {
                _v76 = _v168;
                _t1040 =  &(equation->kind);
                _v104 = _t1040;
                _v192 =  &(_t1040[0]);
                while(1) {
                    _t1262 = _v76 + 1;
                    _v184 = _t1262;
                    _t1024 =  *_v156;
                    __eflags = _t1262 - _t1024;
                    if(_t1262 >= _t1024) {
                        goto L14;
                    } else {
                        goto L9;
                    }
                }
            }
L279:
            _v160 = 1;
            return _v160;
        } else {
        }
        _t1022 = _v168;
        _v160 = 0;
        goto L288;
    }
}

int factor_plus(token_type* equation, int* np, long int v, double d)
{// addr = 0x08060C10
    intOrPtr _v24;
    intOrPtr _v28;
    long int _v40;
    _unknown_ __ebp;
    _unknown_ _t8;

    _v24 = 0;
    _v28 = 0;
    asm("fld qword [ebp+0x14]");
    asm("fstp qword [esp+0x8]");
    _v40 = v;
     *__esp = 1;
    return fplus_recurse();
}

int subtract_itself(token_type* equation, int* np)
{// addr = 0x08060C4D
    intOrPtr _v24;
    intOrPtr _v28;
    intOrPtr _v40;
    _unknown_ __ebp;
    _unknown_ _t6;

    _v24 = 0;
    _v28 = 1;
    asm("fldz ");
    asm("fstp qword [esp+0x8]");
    _v40 = 0;
     *__esp = 1;
    return fplus_recurse();
}

int factor_divide(token_type* equation, int* np, long int v, double d)
{// addr = 0x08060C8A
    intOrPtr _v24;
    intOrPtr _v28;
    long int _v40;
    _unknown_ __ebp;
    _unknown_ _t8;

    _v24 = 1;
    _v28 = 0;
    asm("fld qword [ebp+0x14]");
    asm("fstp qword [esp+0x8]");
    _v40 = v;
     *__esp = 1;
    return fplus_recurse();
}

int sf_recurse(token_type* equation, int* np, int loc, int level, int start_flag)
{// addr = 0x08060CD0
    int modified;
    int i;
    int j;
    int k;
    int op;
    int len1;
    int len2;
    signed int _v32;
    intOrPtr _v36;
    union kind_list* _v40;
    signed int _v44;
    _unknown_ _v48;
    intOrPtr* _v52;
    intOrPtr _v56;
    signed int _v60;
    _unknown_ _v64;
    signed int _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    intOrPtr _v116;
    intOrPtr _v120;
    intOrPtr _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    signed int _v136;
    _unknown_ _v156;
    _unknown_ _v160;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t499;
    _unknown_ _t500;
    _unknown_ _t501;
    _unknown_ _t502;
    _unknown_ _t504;
    _unknown_ _t508;
    _unknown_ _t509;
    _unknown_ _t511;
    _unknown_ _t520;
    _unknown_ _t521;
    _unknown_ _t528;
    signed int _t571;
    _unknown_ _t573;
    _unknown_ _t586;
    _unknown_ _t606;
    _unknown_ _t619;
    _unknown_ _t629;
    _unknown_ _t630;
    _unknown_ _t638;
    _unknown_ _t653;
    _unknown_ _t654;
    _unknown_ _t668;
    _unknown_ _t677;
    _unknown_ _t720;
    _unknown_ _t722;
    _unknown_ _t723;
    _unknown_ _t724;
    _unknown_ _t725;
    _unknown_ _t730;
    _unknown_ _t735;
    _unknown_ _t738;
    _unknown_ _t743;
    _unknown_ _t744;
    _unknown_ _t749;
    intOrPtr _t750;
    signed int _t751;
    _unknown_ _t753;
    _unknown_ _t758;
    signed int _t759;
    signed int _t761;
    _unknown_ _t765;
    _unknown_ _t767;
    _unknown_ _t769;
    _unknown_ _t770;
    _unknown_ _t776;
    _unknown_ _t779;
    _unknown_ _t780;
    _unknown_ _t781;
    _unknown_ _t782;
    _unknown_ _t783;
    _unknown_ _t785;
    _unknown_ _t789;
    _unknown_ _t795;
    signed int _t796;
    intOrPtr _t797;
    _unknown_ _t808;
    _unknown_ _t810;
    _unknown_ _t812;
    _unknown_ _t815;
    _unknown_ _t817;
    _unknown_ _t824;
    _unknown_ _t829;
    _unknown_ _t832;
    _unknown_ _t833;
    _unknown_ _t834;
    _unknown_ _t838;
    _unknown_ _t841;
    _unknown_ _t842;
    _unknown_ _t844;
    intOrPtr _t845;
    intOrPtr _t846;
    intOrPtr _t847;
    intOrPtr _t848;
    _unknown_ _t851;
    _unknown_ _t853;
    _unknown_ _t854;
    _unknown_ _t859;
    _unknown_ _t861;
    _unknown_ _t863;
    intOrPtr _t864;
    _unknown_ _t868;
    _unknown_ _t872;
    _unknown_ _t874;
    _unknown_ _t879;
    _unknown_ _t882;
    _unknown_ _t884;
    _unknown_ _t891;
    _unknown_ _t893;
    _unknown_ _t896;
    _unknown_ _t898;
    _unknown_ _t900;
    _unknown_ _t902;
    _unknown_ _t904;
    _unknown_ _t913;
    _unknown_ _t914;
    _unknown_ _t918;
    intOrPtr* _t921;
    _unknown_ _t924;
    intOrPtr* _t929;
    signed int _t931;
    _unknown_ _t932;
    intOrPtr* _t933;
    signed int _t934;
    union kind_list* _t939;
    token_type* _t941;
    token_type* _t944;
    signed int _t946;
    _unknown_ _t948;
    _unknown_ _t951;
    _unknown_ _t953;
    _unknown_ _t954;
    _unknown_ _t956;
    _unknown_ _t957;
    token_type* _t959;
    _unknown_ _t962;
    _unknown_ _t965;
    _unknown_ _t966;
    _unknown_ _t967;
    _unknown_ _t970;
    _unknown_ _t972;
    intOrPtr _t975;

    _t796 = __ecx;
    _v36 = __eax;
    _v52 = __edx;
    _v68 = _t796;
    if(np != 0) {
L9:
        _t759 = _v68;
        _v44 = 0;
        _v32 = 0;
        _t933 = _v52;
        _v40 =  &(equation->kind);
        _t944 = equation;
        while(_t759 <  *_t933) {
            _t921 = (_t759 << 4) + _v36;
            _t750 =  *((intOrPtr*)(_t921 + 4));
            if(_t944 <= _t750) {
                goto L10;
            }
            _t934 = _v32;
            if(_v44 != 0) {
                return _v44;
            }
            if(np == 0) {
                return _v44;
            }
            if(_t934 - 1 > 1) {
                return _v44;
            }
            _t761 = 1 + _v68;
            _v60 = _t761;
            _v120 = (_t761 << 4) + _v36;
            _t946 = _v68 << 4;
            _v136 = _t946;
            _v116 = _v36 + _t946;
            _v124 = _v36 + _t946 + 52;
            _t939 =  &(equation->kind);
            while(1) {
                _t797 =  *_v52;
                if(_v60 >= _t797 || equation >=  *((intOrPtr*)(_v120 + 4))) {
                    goto L33;
                } else {
                    _t864 = _v124;
                    _t571 = _v60;
                    _t959 = equation;
                    goto L30;
                }
            }
L11:
            _v44 = _v44 | sf_recurse(_v40, np);
            _t751 = 1 + _t759;
            _t845 =  *_t933;
            _v56 = _t845;
            if(_t751 >= _t845) {
L20:
                _t759 = _t751;
                continue;
            }
            _t846 = _v36;
            if(_t944 >=  *((intOrPtr*)((_t751 << 4) + _t846 + 4))) {
                goto L20;
            } else {
                _t929 = _t846 + (_t759 << 4) + 52;
                _t847 = _v56;
                goto L14;
            }
            while(1) {
L14:
                _t751 = _t751 + 2;
                if(_t751 >= _t847) {
                    break;
                }
L15:
                _t929 = _t929 + 32;
                if(_t944 <  *_t929) {
                    continue;
                } else {
                    goto L20;
                }
                goto L15;
            }
            goto L20;
        }
    }
    _t931 = 1 + _t796;
    _t975 =  *_v52;
    if(_t931 >= _t975) {
        goto L9;
    }
    _t795 = (_t931 << 4) + _v36;
    _t848 =  *((intOrPtr*)(_t795 + 4));
    if(equation <= _t848) {
        _t758 = (_v68 << 4) + _v36 + 48;
        _t941 = equation;
        goto L4;
        do {
L4:
            if(_t848 != _t941) {
L7:
                _t931 = _t931 + 2;
                if(_t931 >= _t975) {
                    goto L9;
                }
                goto L8;
            }
            if( *((intOrPtr*)(_t795 + 8)) != 4) {
                goto L7;
            } else {
                np = 1;
            }
            goto L9;
L8:
            _t795 = _t758;
            _t848 =  *((intOrPtr*)(_t758 + 4));
            _t758 = _t758 + 32;
        } while(_t848 >= _t941);
    }
L10:
    if(_t944 >= _t750) {
        _t944 = _t944;
        if( *_t921 == 2) {
            _v32 =  *(_t921 + 8);
        }
        _t751 = 1 + _t759;
        goto L20;
    }
    goto L11;
}

group_recurse(token_type* equation, int* np, int loc, int level)
{// addr = 0x080618F5
    int i;
    int len;
    int di;
    int edi;
    int group_flag;
    intOrPtr _v32;
    token_type* _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    signed int _v68;
    signed int _v72;
    token_type* __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t78;
    _unknown_ _t81;
    signed int _t82;
    signed int _t84;
    intOrPtr* _t99;
    _unknown_ _t102;
    _unknown_ _t103;
    signed int _t104;
    token_type* _t107;
    signed int _t110;
    _unknown_ _t111;
    signed int _t112;
    intOrPtr _t113;
    signed int _t114;
    signed int _t117;
    signed int _t121;
    signed int _t125;
    _unknown_ _t128;
    intOrPtr* _t133;
    signed int* _t134;
    signed int _t136;
    signed int _t137;
    token_type* _t138;

    _t104 = __ecx;
    _v32 = __eax;
    _t134 = __edx;
    _v40 = _t104;
    __ebx = equation;
    _t137 = _t104;
    _t78 =  &(__ebx->kind);
    _v36 = _t78;
    while(_t137 <  *_t134) {
        _t78 =  *((_t137 << 4) + _v32 + 4);
        if(_t78 >= __ebx) {
            if(_t78 <= __ebx) {
                _t78 = _t137 + 1;
L9:
                _t137 = _t78;
                continue;
            }
            goto L2;
        }
        _v44 = _t137;
        _t136 = _v40 + 1;
        if(_t136 >= _t137) {
            return _t78;
        }
        _t78 = 0;
        _v40 = -1;
        _v36 = _t137;
        goto L14;
        do {
L14:
            _t107 = (_t136 << 4) + _v32;
            if(_t107->level != __ebx) {
                goto L30;
            }
            if( *((intOrPtr*)(_t107 + 8)) != 4) {
                if(_v40 < 0) {
                    _t119 = _t137 == _v36 ? _t136 : _v36;
                    _v36 = _t137 == _v36 ? _t136 : _v36;
                }
                goto L30;
            }
            if(_v40 >= 0) {
                _t82 = _t136 + 2;
                _v48 = _t82;
                if(_t82 >= _t137) {
L25:
                    _t84 = _v48 - _t136;
                    _v44 = _t84;
                    if(_t137 != _v36) {
                        _t121 = _v44 << 4;
                        _v52 = _t121;
                        _v68 = _t121;
                        _v72 = _t107;
                         *__esp = scratch;
                        L080491C4();
                        _v48 = (_v40 << 4) + _v32;
                        _v68 = _t136 - _v40 << 4;
                        _v72 = _v48;
                         *__esp = (_v44 + _v40 << 4) + _v32;
                        L080491C4();
                        _v68 = _v52;
                        _v72 = scratch;
                         *__esp = _v48;
                        L080491C4();
                        _t110 = _v44;
                        _v36 = _v36 + _t110;
                        _t136 = _t110 + _t136 - 2;
                        _t78 = 1;
                    } else {
                        _t136 = _t136 + _t84;
                        _v36 = _t136;
                        _t78 = 1;
                    }
                    goto L30;
                }
                _t99 = _v32 + (_t82 << 4) + 4;
                _t125 = _v48;
                while( *_t99 != __ebx ||  *((intOrPtr*)(_t99 + 4)) == 4) {
                    _t125 = _t125 + 2;
                    _t99 = _t99 + 32;
                    if(_t125 < _t137) {
                        continue;
                    }
                    _v48 = _t125;
                    goto L25;
                }
            } else {
                _v40 = _t136;
                asm("o16 nop ");
            }
            goto L30;
L30:
            _t136 = _t136 + 2;
        } while(_t136 < _t137);
        _t138 = _v36;
        if(_t78 == 0) {
            return _t78;
        }
        _t117 = _v40 + 1;
        if(_t138 <= _t117) {
            return _t78;
        }
        _t81 = _v32 + (_t117 << 4) + 4;
        while(1) {
        }
L2:
        group_recurse(_v36);
        _t78 = _t137 + 1;
        _t112 =  *_t134;
        _v48 = _t112;
        if(_t78 >= _t112) {
            goto L9;
        }
        _t113 = _v32;
        if(__ebx >=  *((intOrPtr*)((_t78 << 4) + _t113 + 4))) {
            goto L9;
        } else {
            _t133 = _t113 + (_t137 << 4) + 52;
            _t114 = _v48;
            goto L5;
        }
        while(1) {
L5:
            _t78 = _t78 + 2;
            if(_t78 >= _t114) {
                break;
            }
L6:
            _t133 = _t133 + 32;
            if(__ebx <  *_t133) {
                continue;
            } else {
                goto L9;
            }
            goto L6;
        }
        goto L9;
    }
}

group_proc(token_type* equation, int* np)
{// addr = 0x08061AF3
    _unknown_ __ebp;

    group_recurse(1);
    return equation;
}

int super_factor(token_type* equation, int* np, int start_flag)
{// addr = 0x08061B12
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    int _v40;
    _unknown_ __ebp;
    _unknown_ _t14;
    int _t15;
    int* _t18;
    _unknown_ _t19;
    _unknown_ _t22;
    token_type* _t24;
    _unknown_ _t25;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t24 = equation;
    _t18 = np;
    group_proc(_t24, _t18);
    _v40 = start_flag;
     *__esp = 1;
    _t15 = sf_recurse();
    organize(_t24, _t18);
    return _t15;
}

int fractions_and_group(token_type* equation, int* np)
{// addr = 0x08061B6C
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t12;
    int _t13;
    int* _t16;
    _unknown_ _t17;
    _unknown_ _t20;
    token_type* _t22;
    _unknown_ _t23;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t22 = equation;
    _t16 = np;
    elim_loop(_t22, _t16);
    _t13 = make_fractions(_t22, _t16);
    group_proc(_t22, _t16);
    return _t13;
}

int make_fractions_and_group(int n)
{// addr = 0x08061BB6
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t28;
    signed int _t30;
    _unknown_ _t31;
    _unknown_ _t33;
    _unknown_ _t34;
    int _t37;
    _unknown_ _t38;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t30 = n;
    _t37 = 0;
    if( *((intOrPtr*)( &n_lhs + _t30 * 4)) <= 0) {
        return _t37;
    }
    _t34 = 0 + _t30 * 4;
    _t37 = fractions_and_group( *( &lhs + _t30 * 4), _t34 +  &n_lhs);
    if( *((intOrPtr*)( &n_rhs + _t30 * 4)) == 0) {
        return _t37;
    }
    _t37 = fractions_and_group( *( &rhs + _t30 * 4), _t34 +  &n_rhs) != 0 ? 1 : _t37;
    return _t37;
}

int patch_root_div(token_type* equation, int* np)
{// addr = 0x08061C40
    int i;
    int modified;
    _unknown_ _v32;
    _unknown_ _v36;
    intOrPtr _v40;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v64;
    _unknown_ _v84;
    _unknown_ _v88;
    signed int __ebx;
    _unknown_ __edi;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t49;
    _unknown_ _t53;
    _unknown_ _t59;
    _unknown_ _t62;
    _unknown_ _t64;
    _unknown_ _t65;
    _unknown_ _t70;
    _unknown_ _t75;
    _unknown_ _t80;
    _unknown_ _t83;
    _unknown_ _t90;
    _unknown_ _t92;

    __esi = np;
    _v40 = 0;
    __ebx = 1;
    if( *__esi - 2 <= 1) {
        return _v40;
    }
    while(1) {
        _t83 = equation + (__ebx << 4);
        if( *((intOrPtr*)(_t83 + 8)) != 4) {
            goto L26;
        } else {
            goto L2;
        }
    }
}

uf_neg_help(token_type* equation, int* np)
{// addr = 0x08061E10
    int i;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v52;
    _unknown_ _v56;
    signed int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t30;
    _unknown_ _t39;
    _unknown_ _t42;
    _unknown_ _t47;
    _unknown_ _t54;
    _unknown_ _t55;
    _unknown_ _t60;
    signed int _t61;
    intOrPtr* _t65;
    intOrPtr _t67;

    _t30 =  *np;
    if(_t30 - 1 <= 0) {
        return ;
    }
    __ebx = 0;
    while(1) {
        _t61 = __ebx;
        _t65 = equation + (__ebx << 4);
        _t67 =  *_t65;
        if(_t67 != 0) {
            goto L9;
        } else {
            goto L3;
        }
    }
}

int unsimp_power(token_type* equation, int* np)
{// addr = 0x08061F1B
    int modified;
    int i;
    _unknown_ _v32;
    _unknown_ _v36;
    intOrPtr _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t62;
    _unknown_ _t64;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t76;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t79;
    _unknown_ _t81;
    _unknown_ _t82;
    _unknown_ _t84;
    _unknown_ _t86;
    int _t88;
    _unknown_ _t89;
    _unknown_ _t91;
    _unknown_ _t93;
    _unknown_ _t94;

    _t88 =  *np;
    _v40 = 0;
    if(_t88 <= 1) {
        return _v40;
    }
    _t76 = equation + 32;
    _t93 = -1;
    while(1) {
    }
}

int sub_ufactor(token_type* equation, int* np, int ii)
{// addr = 0x080620AE
    int modified;
    int i;
    int b1;
    int e1;
    int level;
    _unknown_ _v30;
    _unknown_ _v32;
    _unknown_ _v36;
    intOrPtr _v40;
    _unknown_ _v44;
    _unknown_ _v52;
    signed int _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    intOrPtr _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    signed int _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v132;
    _unknown_ _v136;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t477;
    _unknown_ _t484;
    _unknown_ _t487;
    _unknown_ _t489;
    _unknown_ _t497;
    _unknown_ _t498;
    _unknown_ _t531;
    _unknown_ _t534;
    _unknown_ _t544;
    _unknown_ _t550;
    _unknown_ _t563;
    _unknown_ _t581;
    _unknown_ _t621;
    _unknown_ _t623;
    _unknown_ _t628;
    _unknown_ _t660;
    _unknown_ _t662;
    _unknown_ _t667;
    _unknown_ _t672;
    _unknown_ _t677;
    signed int _t678;
    _unknown_ _t679;
    _unknown_ _t681;
    _unknown_ _t684;
    _unknown_ _t686;
    _unknown_ _t688;
    _unknown_ _t690;
    _unknown_ _t694;
    _unknown_ _t698;
    _unknown_ _t699;
    _unknown_ _t700;
    _unknown_ _t703;
    _unknown_ _t705;
    _unknown_ _t707;
    _unknown_ _t708;
    _unknown_ _t710;
    _unknown_ _t713;
    _unknown_ _t715;
    _unknown_ _t716;
    _unknown_ _t717;
    int _t720;
    _unknown_ _t721;
    _unknown_ _t723;
    _unknown_ _t726;
    _unknown_ _t730;
    _unknown_ _t736;
    _unknown_ _t743;
    _unknown_ _t746;
    _unknown_ _t748;
    _unknown_ _t750;
    _unknown_ _t752;
    _unknown_ _t762;
    _unknown_ _t763;
    _unknown_ _t767;
    _unknown_ _t771;
    _unknown_ _t775;
    _unknown_ _t778;
    _unknown_ _t779;
    _unknown_ _t780;
    _unknown_ _t782;
    _unknown_ _t785;
    _unknown_ _t787;
    _unknown_ _t790;
    _unknown_ _t792;
    _unknown_ _t795;
    _unknown_ _t798;
    _unknown_ _t800;
    _unknown_ _t804;
    _unknown_ _t815;
    _unknown_ _t820;
    _unknown_ _t823;
    _unknown_ _t829;
    _unknown_ _t833;
    _unknown_ _t836;
    _unknown_ _t838;
    _unknown_ _t839;
    _unknown_ _t840;
    _unknown_ _t841;
    intOrPtr _t842;
    _unknown_ _t844;
    _unknown_ _t846;
    _unknown_ _t848;
    _unknown_ _t850;
    _unknown_ _t851;
    _unknown_ _t852;
    _unknown_ _t853;
    _unknown_ _t854;
    _unknown_ _t855;
    _unknown_ _t856;
    _unknown_ _t858;
    _unknown_ _t860;
    _unknown_ _t861;
    _unknown_ _t862;
    _unknown_ _t864;
    _unknown_ _t868;
    _unknown_ _t869;
    _unknown_ _t875;
    _unknown_ _t876;
    _unknown_ _t877;
    _unknown_ _t879;
    _unknown_ _t880;
    _unknown_ _t881;
    _unknown_ _t882;
    _unknown_ _t886;
    _unknown_ _t888;
    _unknown_ _t889;
    _unknown_ _t891;
    _unknown_ _t893;
    _unknown_ _t895;
    _unknown_ _t896;
    _unknown_ _t901;
    _unknown_ _t902;
    _unknown_ _t921;
    _unknown_ _t922;

    _t720 =  *np;
    _t678 = 1;
    _v84 = 0;
    if(_t720 <= 1) {
        return _v84;
    }
    _v96 = ii & 1;
    while(1) {
        _v60 = _t678;
        _t477 = equation + (_t678 << 4);
        _v40 = _t477;
        _t842 =  *((intOrPtr*)(_t477 + 8));
        if(_t842 < 3) {
            goto L168;
        } else {
            goto L3;
        }
    }
}

uf_repeat_always(token_type* equation, int* np)
{// addr = 0x08062CC2
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t11;
    int* _t14;
    _unknown_ _t15;
    token_type* _t17;
    _unknown_ _t18;

    _v12 = __ebx;
    _v8 = __esi;
    _t17 = equation;
    _t14 = np;
    organize(_t17, _t14);
    if(sub_ufactor(_t17, _t14, 8) == 0) {
        return ;
    }
    organize(_t17, _t14);
    return ;
}

uf_repeat(token_type* equation, int* np)
{// addr = 0x08062D0E
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t12;
    _unknown_ _t14;
    int* _t16;
    _unknown_ _t17;
    token_type* _t19;
    _unknown_ _t20;

    _v12 = __ebx;
    _v8 = __esi;
    _t19 = equation;
    _t16 = np;
    organize(_t19, _t16);
    if(sub_ufactor(_t19, _t16, 6) != 0) {
        organize(_t19, _t16);
    }
    patch_root_div(_t19, _t16);
    return;
}

uf_allpower(token_type* equation, int* np)
{// addr = 0x08062D66
    _unknown_ _v20;
    _unknown_ _v24;
    token_type* __ebx;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t6;

    __ebx = equation;
    __esi = np;
    while(1) {
L1:
        organize(__ebx, __esi);
        if(sub_ufactor(__ebx, __esi, 0) == 0) {
            break;
        }
    }
    return;
}

int uf_pplus(token_type* equation, int* np)
{// addr = 0x08062D9F
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t13;
    int _t14;
    int _t17;
    _unknown_ _t18;
    token_type* _t20;
    _unknown_ _t21;
    int* _t23;
    _unknown_ _t24;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t20 = equation;
    _t23 = np;
    organize(_t20, _t23);
    _t14 = sub_ufactor(_t20, _t23, 4);
    _t17 = _t14;
    if(_t14 == 0) {
        return _t17;
    }
    organize(_t20, _t23);
    return _t17;
}

int uf_power(token_type* equation, int* np)
{// addr = 0x08062DF5
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t13;
    int _t14;
    int _t17;
    _unknown_ _t18;
    token_type* _t20;
    _unknown_ _t21;
    int* _t23;
    _unknown_ _t24;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t20 = equation;
    _t23 = np;
    organize(_t20, _t23);
    _t14 = sub_ufactor(_t20, _t23, 2);
    _t17 = _t14;
    if(_t14 == 0) {
        return _t17;
    }
    organize(_t20, _t23);
    return _t17;
}

int uf_times(token_type* equation, int* np)
{// addr = 0x08062E4B
    int i;
    int rv;
    intOrPtr _v32;
    signed int _v36;
    token_type* _v40;
    _unknown_ _v52;
    _unknown_ _v56;
    token_type* __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t40;
    _unknown_ _t44;
    token_type* _t45;
    _unknown_ _t47;
    int _t48;
    int _t56;
    token_type* _t58;
    intOrPtr _t59;
    _unknown_ _t65;

    _v36 = 0;
    goto L1;
    do {
L1:
        organize(equation, np);
        if(partial_flag != 0) {
            reorder(equation, np);
        }
        group_proc(equation, np);
        if(partial_flag != 0 &&  *np > 1) {
            _t58 = equation;
            __edi = 0;
            goto L6;
            do {
L6:
                if( *((intOrPtr*)(_t58 + 24)) != 4) {
                    goto L14;
                }
                _v32 =  *((intOrPtr*)(_t58 + 20));
                _t56 = __edi;
                if(__edi >= 0) {
                    goto L14;
                }
                __ebx = _t58;
                _t48 = _t58->level;
                _t65 = _v32 - _t48;
                if(_t65 > 0) {
                    goto L14;
                }
                _t45 = _t58 - 16;
                _v40 = _t58;
                _t59 = _v32;
                while(1) {
L11:
                    __ebx->level = _t48 + 2;
                    _t56 = _t56 - 1;
                    if(_t65 < 0) {
                        break;
                    }
                    __ebx = _t45;
                    _t48 = _t45->level;
                    _t45 = _t45 - 16;
                    if(_t59 > _t48) {
                        _t58 = _v40;
                        goto L14;
                    }
                }
                _t58 = _v40;
                goto L14;
L14:
                _t44 = __edi + 3;
                __edi = __edi + 2;
                _t58 = _t58 + 32;
            } while( *np > _t44);
        }
        goto L15;
L15:
        _t40 = sub_ufactor(equation, np, 1);
        _v36 = _v36 | _t40;
    } while(_t40 != 0);
    organize(equation, np);
    return _v36;
}

int ufactor(token_type* equation, int* np)
{// addr = 0x08062F4B
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t12;
    int _t13;
    int* _t16;
    _unknown_ _t17;
    _unknown_ _t20;
    token_type* _t22;
    _unknown_ _t23;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t22 = equation;
    _t16 = np;
    uf_repeat(_t22, _t16);
    _t13 = uf_times(_t22, _t16);
    uf_allpower(_t22, _t16);
    return _t13;
}

int uf_tsimp(token_type* equation, int* np)
{// addr = 0x08062F95
    int rv;
    _unknown_ _v40;
    int* __ebx;
    int __edi;
    token_type* __esi;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t9;
    _unknown_ _t11;

    __esi = equation;
    __ebx = np;
    1 = uf_times(__esi, __ebx);
    simp_loop(__esi, __ebx);
    while(uf_times(__esi, __ebx) != 0) {
        simp_loop(__esi, __ebx);
        __edi = 1;
    }
}

uf_simp_no_repeat(token_type* equation, int* np)
{// addr = 0x08062FEB
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t9;
    _unknown_ _t10;
    int* _t12;
    _unknown_ _t13;
    token_type* _t15;
    _unknown_ _t16;

    _v12 = __ebx;
    _v8 = __esi;
    _t15 = equation;
    _t12 = np;
    uf_power(_t15, _t12);
    uf_tsimp(_t15, _t12);
    return;
}

uf_simp(token_type* equation, int* np)
{// addr = 0x0806301F
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    int* _t15;
    _unknown_ _t16;
    token_type* _t18;
    _unknown_ _t19;

    _v12 = __ebx;
    _v8 = __esi;
    _t18 = equation;
    _t15 = np;
    uf_tsimp(_t18, _t15);
    uf_power(_t18, _t15);
    uf_repeat(_t18, _t15);
    uf_tsimp(_t18, _t15);
    return;
}

int vcmp(sort_type* p1, sort_type* p2)
{// addr = 0x08063070
    _unknown_ __ebp;

    return p2->count - p1->count;
}

int get_term(token_type* p1, int n1, int count, int* tp1, int* lentp1)
{// addr = 0x08063081
    int i;
    int j;
    int no;
    int _v24;
    int __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t14;
    token_type* _t15;

    __ebx = n1;
    _t15 = p1;
    __ecx = 0;
    __edi = 0;
    _t11 = 1;
    _v24 = count;
    while(1) {
    }
}

term_value(double* dp, token_type* p1, int n1, int loc)
{// addr = 0x080630F1
    int i;
    int j;
    int k;
    int divide_flag;
    int level;
    int div_level;
    double d;
    double sub_count;
    double sub_sum;
    double* _v20;
    intOrPtr _v24;
    double* _v28;
    int _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    intOrPtr _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    signed int _v56;
    intOrPtr _v60;
    signed int _v64;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int _t87;
    intOrPtr _t89;
    intOrPtr _t91;
    _unknown_ _t92;
    _unknown_ _t93;
    intOrPtr _t97;
    _unknown_ _t111;
    _unknown_ _t112;
    _unknown_ _t113;
    signed int _t115;
    intOrPtr _t117;
    _unknown_ _t118;
    _unknown_ _t119;
    _unknown_ _t120;
    signed int _t123;
    intOrPtr _t125;
    _unknown_ _t126;
    _unknown_ _t129;
    _unknown_ _t130;
    _unknown_ _t131;
    signed int _t133;
    intOrPtr* _t135;
    intOrPtr _t136;
    intOrPtr* _t137;
    token_type* _t138;
    intOrPtr _t139;
    intOrPtr _t141;
    intOrPtr _t142;
    int _t143;
    intOrPtr* _t144;
    int _t145;

    _t143 = n1;
    asm("fldz ");
    asm("fst qword [eax]");
    _v20 =  &(dp[1]);
    asm("fst qword [eax]");
    _v28 =  &(dp[2]);
    asm("fstp qword [ecx]");
    _t87 = loc;
    _v36 = 0;
    if(_t87 >= _t143) {
L16:
        _t133 = loc + 1;
        if(_t87 <= _t133) {
            return ;
        }
        _t135 = p1 + (_t133 << 4) + 4;
        _t123 = loc;
        _t138 = p1;
        _t144 = _t138 + (_t123 << 4) + 36;
        _v20 = _t138 + (_t123 << 4) + 4;
        _v24 = (_t123 << 4) + _t138 - 16;
        _t139 = 0;
        asm("fld1 ");
        _v32 = _t87;
        goto L18;
        do {
L18:
            _v44 =  *_t135;
            _t89 =  *((intOrPtr*)(_t135 + 4));
            if(_t89 != 4) {
                if(_t139 != 0) {
                    _t139 = _v44 - _v36 <= 0 ? 0 : _t139;
                }
                if(_t89 != 6) {
                    goto L40;
                } else {
                    _t91 =  *_t144;
                    _v40 = _t91;
                    if(_t91 != _v44 ||  *((intOrPtr*)(_t144 - 4)) != 0) {
                        goto L40;
                    } else {
                        asm("fld1 ");
                        asm("fsubr qword [esi+0x4]");
                        _v64 = _t123;
                        if(loc > _t123) {
L35:
                            asm("fldz ");
                            asm("fld st0, st0");
L37:
                            if(_t139 == 0) {
                                asm("fxch st0, st1");
                                asm("fmul st0, st2");
                                asm("fadd qword [ebx]");
                                asm("fstp qword [ebx]");
                                asm("fmulp st1, st0");
                                asm("fadd qword [eax]");
                                asm("fstp qword [eax]");
                            } else {
                                asm("fxch st0, st1");
                                asm("fmul st0, st2");
                                asm("fsubr qword [ebx]");
                                asm("fstp qword [ebx]");
                                asm("fmulp st1, st0");
                                asm("fsubr qword [eax]");
                                asm("fstp qword [eax]");
                            }
                            goto L40;
                        }
                        _v44 = _v20 - 4;
                        if( *_v20 < _v40) {
                            goto L35;
                        }
                        _t97 = _v24;
                        asm("fldz ");
                        asm("fld st0, st0");
                        _v48 = _t139;
                        _v52 = _t144;
                        _v56 = _t123;
                        _v60 = _t135;
                        _t115 = _t123;
                        _t136 = _v44;
                        _t141 = _v40;
                        _t145 = loc;
                        while() {
                        }
                        _t139 = _v48;
                        _t144 = _v52;
                        _t123 = _v56;
                        _t135 = _v60;
                        goto L37;
                    }
                }
                break;
            }
            if(_t139 == 0 || _v44 < _v36) {
                _v36 = _v44;
                _t139 = 1;
            }
L40:
            _t135 = _t135 + 32;
            _t123 = _t123 + 2;
            _t144 = _t144 + 32;
            _v20 =  &(_v20[4]);
            _v24 = _v24 + 32;
        } while(_v32 > _t123 + 1);
L41:
        asm("fstp st0");
        return;
    } else {
        _t137 = p1 + (_t87 << 4) + 4;
        _t87 = loc;
        _t142 = 0;
        goto L2;
        do {
L2:
            _t117 =  *_t137;
            _t125 =  *((intOrPtr*)(_t137 - 4));
            if(_t125 != 1) {
                if(_t125 != 2) {
                    goto L15;
                }
                if(_t117 != 1 ||  *((intOrPtr*)(_t137 + 4)) - 1 > 1) {
                    if( *((intOrPtr*)(_t137 + 4)) != 4) {
                        if(_t142 != 0) {
                            _t142 = _t117 - _v36 <= 0 ? 0 : _t142;
                        }
                    } else {
                        if(_t142 == 0 || _t117 < _v36) {
                            _v36 = _t117;
                            _t142 = 1;
                        }
                    }
                    goto L15;
                }
                goto L16;
            } else {
                if(_t142 == 0) {
                    asm("fld1 ");
                    asm("fadd qword [ebx]");
                    asm("fstp qword [ebx]");
                    asm("fild dword [edx+0x4]");
                    asm("fadd qword [ecx]");
                    asm("fstp qword [ecx]");
                    asm("fild dword [edx+0x4]");
                    asm("fadd qword [ebx]");
                    asm("fstp qword [ebx]");
                } else {
                    asm("fld1 ");
                    asm("fsubr qword [ecx]");
                    asm("fstp qword [ecx]");
                    asm("fild dword [edx+0x4]");
                    asm("fsubr qword [ebx]");
                    asm("fstp qword [ebx]");
                    asm("fild dword [edx+0x4]");
                    asm("fsubr qword [ecx]");
                    asm("fstp qword [ecx]");
                }
            }
L15:
            _t87 = _t87 + 1;
            _t137 = _t137 + 16;
        } while(_t143 > _t87);
        goto L16;
    }
}

int basic_size(token_type* p1, int len)
{// addr = 0x08063353
    int i;
    int j;
    int level;
    int rv;
    int constant_flag;
    int _v32;
    int _v36;
    int _v40;
    _unknown_ _v56;
    int __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t23;
    token_type* _t25;
    union kind_list _t30;
    token_type* _t37;
    _unknown_ _t38;

    _t37 = p1;
    __ebx = len;
    _v32 = min_level(_t37, __ebx);
    if(__ebx > 0) {
        _t25 = _t37;
        _v36 = __ebx;
        _t38 = 1;
        _v40 = -1;
        __edx = 0;
        __edi = 0;
        goto L3;
        do {
            __edx = __edx + 1;
            _t25 = _t25 + 16;
            if(__edx != __ebx) {
L3:
                _t30 = _t25->kind;
                if(_t30 != 2) {
                    _t38 = _t30 != 0 ? __edi : _t38;
                } else {
                    if(_v32 == _t25->level &&  *((intOrPtr*)(_t25 + 8)) - 3 <= 1) {
                        if(_t38 != 0) {
                            _v36 = _v40 + _v36 - __edx;
                            _v40 = __edx;
                            _t38 = 1;
                        } else {
                            _v40 = __edx;
                        }
                    }
                }
                continue;
            } else {
                if(_t38 == 0) {
                    return _v36;
                }
            }
            goto L12;
        } while();
    } else {
        _v36 = __ebx;
        _v40 = -1;
        __ebx = 0;
    }
L12:
    _v36 = _v36 + _v40 - __ebx;
    return _v36;
}

int poly_in_v(token_type* p1, int n, long int v, int allow_divides)
{// addr = 0x08063406
    int i;
    int j;
    intOrPtr _v32;
    token_type* _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t64;
    _unknown_ _t67;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t71;
    _unknown_ _t77;
    _unknown_ _t78;

    _v36 = p1;
    _t69 = 0;
    _v32 = 1;
    while(1) {
    }
}

int smart_div(token_type* d1, int len1, token_type* d2, int len2)
{// addr = 0x08063572
    int i;
    int j;
    int k;
    int t1;
    int len_t1;
    int t2;
    int len_t2;
    int sign;
    int old_n_quotient;
    int trhs_size;
    int term_size;
    int term_count;
    int term_pos;
    int[99] skip_terms;
    int skip_count;
    token_type* qp;
    int count;
    int dcount;
    int flag;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v436;
    token_type* _v448;
    token_type* _v452;
    token_type* _v456;
    _unknown_ _v460;
    _unknown_ _v464;
    token_type* _v468;
    _unknown_ _v472;
    _unknown_ _v476;
    _unknown_ _v480;
    _unknown_ _v484;
    _unknown_ _v488;
    _unknown_ _v492;
    _unknown_ _v496;
    _unknown_ _v500;
    _unknown_ _v504;
    _unknown_ _v508;
    _unknown_ _v512;
    _unknown_ _v516;
    _unknown_ _v540;
    char* _v544;
    signed int _v548;
    token_type* _v552;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t273;
    _unknown_ _t274;
    _unknown_ _t279;
    _unknown_ _t299;
    _unknown_ _t303;
    _unknown_ _t307;
    _unknown_ _t317;
    _unknown_ _t320;
    _unknown_ _t322;
    _unknown_ _t330;
    _unknown_ _t331;
    _unknown_ _t341;
    _unknown_ _t344;
    _unknown_ _t346;
    _unknown_ _t347;
    _unknown_ _t349;
    _unknown_ _t351;
    _unknown_ _t356;
    _unknown_ _t361;
    _unknown_ _t370;
    _unknown_ _t375;
    _unknown_ _t378;
    _unknown_ _t385;
    _unknown_ _t387;
    _unknown_ _t392;
    _unknown_ _t395;
    _unknown_ _t410;
    _unknown_ _t412;
    _unknown_ _t413;
    _unknown_ _t414;
    _unknown_ _t415;
    _unknown_ _t416;
    _unknown_ _t418;
    int _t432;
    token_type* _t433;
    _unknown_ _t434;
    token_type* _t435;
    _unknown_ _t438;
    _unknown_ _t440;
    _unknown_ _t443;
    _unknown_ _t449;
    _unknown_ _t456;
    _unknown_ _t470;
    _unknown_ _t472;
    _unknown_ _t477;
    _unknown_ _t479;
    _unknown_ _t486;
    _unknown_ _t494;
    _unknown_ _t495;
    _unknown_ _t497;
    _unknown_ _t505;
    _unknown_ _t506;
    _unknown_ _t509;
    _unknown_ _t510;
    _unknown_ _t511;
    _unknown_ _t514;
    _unknown_ _t519;
    _unknown_ _t520;
    _unknown_ _t532;
    _unknown_ _t533;
    _unknown_ _t540;
    _unknown_ _t548;
    _unknown_ _t558;
    _unknown_ _t564;
    _unknown_ _t568;
    _unknown_ _t569;
    _unknown_ _t570;
    _unknown_ _t571;
    _unknown_ _t572;
    _unknown_ _t574;
    int _t576;
    token_type* _t577;
    _unknown_ _t578;

    _t432 = len1;
    _t576 = len2;
    _v548 = _t432 << 4;
    _v552 = d1;
     *__esp = trhs;
    L080491C4();
    n_trhs = _t432;
    _v548 = _t576 << 4;
    _v552 = d2;
     *__esp = tlhs;
    L080491C4();
    n_tlhs = _t576;
    uf_simp_no_repeat(trhs,  &n_trhs);
    uf_simp_no_repeat(tlhs,  &n_tlhs);
    if(debug_level > 2) {
        _v544 = "smart_div() starts:";
        _v548 = 134686589;
        _v552 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    list_debug(3, trhs, n_trhs, 0, 0);
    list_debug(3, tlhs, n_tlhs, 0, 0);
    _t435 = 0;
    _v456 = 0;
    _v448 = 0;
    _v468 = 0;
    _v452 = 0;
    _t577 = 0;
    _t433 = 0;
    while(1) {
    }
}

save_factors(token_type* equation, int* np, int loc1, int len, int level)
{// addr = 0x0806425F
    int i;
    int j;
    signed int _v32;
    signed int _v36;
    intOrPtr _v40;
    signed int _v52;
    token_type* _v56;
    int* __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t35;
    intOrPtr _t36;
    signed int _t39;
    intOrPtr* _t53;
    intOrPtr _t59;
    intOrPtr* _t60;
    signed int _t62;
    intOrPtr* _t63;
    signed int _t68;
    signed int _t69;
    _unknown_ _t71;
    intOrPtr* _t72;
    signed int _t74;

    _t63 = __edx;
    __edi = __eax;
    _t72 = _t63;
    _v32 = __ecx;
    __ebx = np;
    _t35 = n_tlhs + n_trhs + 1;
    _v36 = _t35;
    _t36 = _t35 - equation;
    _v40 = _t36;
    if(_t36 +  *_t63 > n_tokens) {
        error_huge();
    }
    _t39 = equation + _v32;
    _v52 =  *_t72 - _t39 << 4;
    _v56 = __edi + (_t39 << 4);
     *__esp = __edi + (_v32 + _v36 << 4);
    L080491C4();
     *_t72 =  *_t72 + _v40;
    _t74 = _v32 << 4;
    _v52 = n_tlhs << 4;
    _v56 = tlhs;
     *__esp = __edi + _t74;
    L080491C4();
    _t68 = _v32 + n_tlhs;
    _t53 = __edi + (_t68 << 4);
     *((intOrPtr*)(_t53 + 4)) = 0;
     *_t53 = 2;
     *((intOrPtr*)(_t53 + 8)) = 3;
    _t69 = _t68 + 1;
    _v36 = _t69;
    _v52 = n_trhs << 4;
    _v56 = trhs;
    _t59 = __edi + (_t69 << 4);
     *__esp = _t59;
    L080491C4();
    _t71 = _v36 + n_trhs;
    if(_v32 >= _t71) {
        return _t59;
    }
    _t60 = _t74 + __edi + 4;
    _t62 = _v32;
    while(1) {
L4:
         *_t60 =  *_t60 + __ebx;
        _t62 = _t62 + 1;
        _t60 = _t60 + 16;
        if(_t71 <= _t62) {
            break;
        }
    }
    return _t59;
}

int is_integer_var(long int v)
{// addr = 0x0806436B
    char* cp;
    _None* strncmpfunc;
    intOrPtr _v20;
    char* _v24;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t10;
    _unknown_ _t11;
    intOrPtr* _t13;

    _t13 = case_sensitive_flag != 0 ? strncmp : strncasecmp;
    __edx = var_name(v);
    if(__edx == 0) {
        return ;
    }
    _v20 = 7;
    _v24 = "integer";
     *__esp = __edx;
     *_t13();
    return;
}

int is_integer_expr(token_type* p1, int n)
{// addr = 0x080643BF
    int i;
    token_type* __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    union kind_list _t9;
    _unknown_ _t11;
    _unknown_ _t14;
    _unknown_ _t15;
    _unknown_ _t16;

    __edi = n;
    if(__edi <= 0) {
        return 1;
    }
    __ebx = p1;
    _t15 = 0;
    while(1) {
        _t9 = __ebx->kind;
        if(_t9 == 1) {
            goto L18;
        } else {
            goto L3;
        }
    }
}

int remove_factors()
{// addr = 0x0806447A
    int i;
    int j;
    int k;
    int plus_flag;
    int divide_flag;
    int op;
    signed int _v32;
    signed int _v36;
    signed int _v40;
    intOrPtr _v48;
    int _v52;
    token_type* _v56;
    _unknown_ _v60;
    char* _v64;
    signed int _v68;
    token_type* _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t68;
    signed int _t69;
    _unknown_ _t70;
    signed int _t71;
    int _t76;
    _unknown_ _t78;
    signed int _t91;
    signed int _t100;
    signed int _t101;
    signed int _t103;
    intOrPtr _t105;
    intOrPtr _t106;
    intOrPtr _t107;
    signed int _t108;
    _unknown_ _t109;

    if(debug_level > 2) {
        _v64 = "Entering remove_factors() with:";
        _v68 = 134686589;
        _v72 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    list_debug(3, tlhs, n_tlhs, 0, 0);
    while(1) {
L3:
        _v48 = 4;
        _v52 = 1;
        _v56 = 0;
        asm("fld1 ");
        asm("fstp qword [esp+0xc]");
        _v68 = 0;
        _v72 =  &n_tlhs;
         *__esp = tlhs;
        simp_ssub();
        if(uf_power(tlhs,  &n_tlhs) == 0) {
            break;
        }
    }
    if(n_tlhs <= 1) {
        return 0;
    }
    _v40 = 0;
    __ecx = 0;
    _v36 = 0;
    _v32 = 0;
    _t100 = 1;
    goto L14;
    do {
L14:
        __edx = tlhs;
        _t103 = _t100;
        _t68 = __edx + (_t100 << 4);
        _t105 =  *((intOrPtr*)(_t68 + 8));
        _t69 =  *(_t68 + 4);
        if(_t69 == 1) {
            _t106 = _t105;
            if(_t105 < 1) {
                return 0;
            }
            _t107 = _t106;
            if(_t106 <= 2) {
                goto L25;
            } else {
                if(_t107 > 4) {
                    return 0;
                }
                if(__ecx != 0) {
                    asm("o16 nop ");
                    if(_v40 == 0) {
                        _v32 = _v32 - (_t69 & 4294967295 & );
                        _t91 = _t100 - _v32;
                        _v40 = _t91;
                        _v68 = _t91 << 4;
                        _v72 = __edx + (_v32 << 4);
                         *__esp = scratch + (_v36 << 4);
                        L080491C4();
                        _t69 = _v40;
                        _v36 = _v36 + _t69;
                    }
                }
                _v40 = _t69 & 4294967295 & ;
                _v32 = _t103 + 1;
                __ecx = 0;
            }
            goto L26;
        }
        if(_t69 == 2 && _t105 - 1 <= 1) {
L25:
            __ecx = 1;
        }
        goto L26;
L26:
        _t100 = _t100 + 2;
    } while(n_tlhs > _t100);
    _t108 = _v36;
    _t71 = _v32;
    if(__ecx != 0 && _v40 == 0) {
        if(_t108 > 0) {
            _v32 = _t71 - 1;
        }
        _t101 = _t100 - _v32;
        _v68 = _t101 << 4;
        _v72 = tlhs + (_v32 << 4);
         *__esp = scratch + (_t108 << 4);
        L080491C4();
        _v36 = _t101 + _t108;
    }
    if(_v36 <= 0) {
        return 0;
    }
    _v68 = _v36 << 4;
    _v72 = scratch;
     *__esp = tlhs;
    L080491C4();
    _t76 = _v36;
    n_tlhs = _t76;
    list_debug(3, tlhs, _t76, 0, 0);
    return 1;
}

int find_greatest_power(token_type* p1, int n1, long int* vp1, double* pp1, int* tp1, int* lentp1, int* dcodep)
{// addr = 0x080646FC
    int i;
    int j;
    int k;
    double d;
    int flag;
    int divide_flag;
    int level;
    int div_level;
    long int v;
    int was_power;
    double[2] last_va;
    double[2] va;
    int rv;
    int count;
    char _v52;
    _unknown_ _v76;
    intOrPtr _v80;
    int _v84;
    intOrPtr _v88;
    intOrPtr _v92;
    token_type* _v96;
    intOrPtr _v100;
    int _v104;
    intOrPtr _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ _v136;
    token_type* _v144;
    _unknown_ _v160;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t200;
    _unknown_ _t201;
    _unknown_ _t203;
    _unknown_ _t209;
    _unknown_ _t210;
    _unknown_ _t211;
    _unknown_ _t213;
    _unknown_ _t214;
    _unknown_ _t215;
    _unknown_ _t216;
    _unknown_ _t221;
    _unknown_ _t222;
    _unknown_ _t223;
    _unknown_ _t225;
    _unknown_ _t227;
    _unknown_ _t228;
    _unknown_ _t232;
    char* _t234;
    _unknown_ _t235;
    _unknown_ _t238;
    _unknown_ _t239;
    intOrPtr _t240;
    _unknown_ _t241;
    _unknown_ _t243;
    _unknown_ _t246;
    _unknown_ _t249;
    _unknown_ _t252;
    _unknown_ _t259;
    _unknown_ _t260;
    _unknown_ _t263;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t271;
    _unknown_ _t272;
    _unknown_ _t273;
    _unknown_ _t276;
    _unknown_ _t278;
    _unknown_ _t281;
    _unknown_ _t283;
    _unknown_ _t287;
    _unknown_ _t289;
    token_type* _t292;
    _unknown_ _t293;
    _unknown_ _t295;
    _unknown_ _t296;
    _unknown_ _t297;
    _unknown_ _t301;
    _unknown_ _t302;
    _unknown_ _t304;
    _unknown_ _t306;
    int _t308;
    token_type* _t309;
    _unknown_ _t310;
    _unknown_ _t311;
    _unknown_ _t312;
    _unknown_ _t315;
    _unknown_ _t317;
    _unknown_ _t326;
    _unknown_ _t333;
    _unknown_ _t335;

    _t292 = p1;
    _t308 = n1;
    _t234 =  &_v52;
    _t200 = 0;
    while(1) {
         *((intOrPtr*)(_t234 + _t200)) = 0;
        _t200 = _t200 + 4;
        if(_t200 < 24) {
            continue;
        } else {
            asm("fldz ");
            asm("fstp qword [eax]");
             *tp1 = -1;
            _v104 =  *dcodep;
            _v96 = _t292;
            _v100 = 0;
            _t240 = 0;
            _v108 = 0;
            _v92 = 0;
            _v80 = 0;
            _v88 = 0;
            _t235 = 1;
            _v144 = _t292;
            _v84 = _t308;
            _t309 = _t292;
            goto L3;
        }
    }
}

int find_highest_count(token_type* p1, int n1, token_type* p2, int n2, long int* vp1)
{// addr = 0x08064D0F
    int i;
    int vc;
    int cnt;
    long int v1;
    long int last_v;
    sort_type[999] va;
    int divide_flag;
    int t1;
    int len_t1;
    int t2;
    int len_t2;
    double d1;
    double d2;
    int count1;
    int count2;
    int _v32;
    int _v36;
    int _v40;
    int _v44;
    int _v48;
    double _v60;
    double _v68;
    void _v8068;
    int _v8080;
    int _v8084;
    token_type* _v8088;
    token_type* _v8092;
    _unknown_ _v8100;
    _unknown_ _v8104;
    _unknown_ _v8108;
    intOrPtr _v8112;
    _unknown_ _v8116;
    _unknown_ _v8120;
    _unknown_ __ebx;
    _unknown_ __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t89;
    _unknown_ _t91;
    long int _t92;
    signed int _t106;
    int _t121;
    token_type* _t123;
    int _t125;
    long int* _t126;
    _unknown_ _t128;
    int _t129;
    signed int _t132;
    signed int _t133;
    _unknown_ _t134;
    _unknown_ _t144;
    int _t146;

    _t129 = __edx;
    _v8088 = __eax;
    _t125 = _t129;
    _v8092 = __ecx;
    if(_t129 <= 0) {
        __esi = 0;
    } else {
        _v8080 = 0;
        __esi = 0;
        while(1) {
            _t123 = _v8088;
            _t134 = -1;
            _v8084 = 0;
            _t132 = 0;
            goto L3;
        }
    }
    if(__esi <= 0) {
        return 0;
    }
    _v8112 = vcmp;
    qsort( &_v8068, __esi, 8);
    _t133 = 0;
    _v8080 = _t125;
    _t126 = n1;
    while(1) {
        _t92 =  *(__ebp + -8064 + _t133 * 8);
        _t144 = (_t92 & 16383) - 4;
        if(_t144 > 0) {
             *_t126 = _t92;
            _v32 = 2;
            _v8084 = find_greatest_power(_v8088, _v8080, _t126,  &_v60,  &_v36,  &_v40,  &_v32);
            _t106 = find_greatest_power(_v8092, p1, _t126,  &_v68,  &_v44,  &_v48,  &_v32);
            asm("fld qword [ebp-0x40]");
            asm("fldz ");
            asm("fucomip st0, st1");
            if(_t144 >= 0) {
                asm("fstp st0");
            } else {
                asm("fld qword [ebp-0x38]");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(_t144 <= 0) {
                    if(_v8084 >= _t106) {
                        return  *((intOrPtr*)(__ebp + -8060 + _t133 * 8));
                    }
                }
            }
            _t146 = _v32;
            _v32 = _t106 & 4294967295 & ;
            _v8084 = find_greatest_power(_v8088, _v8080, _t126,  &_v60,  &_v36,  &_v40,  &_v32);
            _t121 = find_greatest_power(_v8092, p1, _t126,  &_v68,  &_v44,  &_v48,  &_v32);
            asm("fld qword [ebp-0x40]");
            asm("fldz ");
            asm("fucomip st0, st1");
            if(_t146 >= 0) {
                asm("fstp st0");
            } else {
                asm("fld qword [ebp-0x38]");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(_t146 <= 0) {
                    if(_v8084 >= _t121) {
                        return  *((intOrPtr*)(__ebp + -8060 + _t133 * 8));
                    }
                }
            }
        }
        _t133 = _t133 + 1;
        if(_t133 >= __esi) {
            return 0;
        }
    }
}

int poly_div(token_type* d1, int len1, token_type* d2, int len2, long int* vp)
{// addr = 0x08064F8F
    int i;
    int rv;
    int old_partial;
    jmp_buf save_save;
    int _v32;
    int _v36;
    int _v40;
    int _v44;
    char _v48;
    double _v60;
    double _v68;
    _unknown_ _v76;
    char _v232;
    int _v240;
    int _v244;
    int _v248;
    _unknown_ _v260;
    _unknown_ _v264;
    _unknown_ _v268;
    char[179]* _v272;
    signed int _v276;
    int _v280;
    _unknown_ __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    token_type[29999]* _t223;
    int _t224;
    token_type* _t227;
    token_type* _t228;
    signed int _t243;
    _unknown_ _t257;
    signed int _t262;
    int _t267;
    _unknown_ _t275;
    _unknown_ _t278;
    _unknown_ _t280;
    _unknown_ _t281;
    _unknown_ _t282;
    _unknown_ _t287;
    _unknown_ _t294;
    _unknown_ _t299;
    _unknown_ _t302;
    _unknown_ _t311;
    _unknown_ _t313;
    _unknown_ _t319;
    _unknown_ _t327;
    _unknown_ _t331;
    _unknown_ _t335;
    _unknown_ _t337;
    _unknown_ _t339;
    _unknown_ _t340;
    _unknown_ _t341;
    _unknown_ _t343;
    _unknown_ _t350;
    int _t351;
    token_type[29999]* _t355;
    token_type* _t356;
    int* _t357;
    int* _t358;
    _unknown_ _t359;
    _unknown_ _t361;
    _unknown_ _t369;
    _unknown_ _t370;
    _unknown_ _t373;
    _unknown_ _t380;
    _unknown_ _t390;
    _unknown_ _t398;
    int _t400;
    _unknown_ _t404;
    _unknown_ _t405;
    _unknown_ _t407;
    _unknown_ _t419;
    _unknown_ _t420;
    _unknown_ _t423;
    _unknown_ _t428;
    _unknown_ _t430;
    _unknown_ _t431;
    _unknown_ _t445;
    _unknown_ _t446;
    _unknown_ _t448;
    _unknown_ _t454;
    _unknown_ _t457;
    _unknown_ _t459;
    _unknown_ _t464;
    _unknown_ _t474;
    _unknown_ _t478;
    _unknown_ _t480;
    _unknown_ _t489;

    _v240 = partial_flag;
    partial_flag = 0;
    _v276 = 156;
    _v280 =  &jmp_save;
    _t223 =  &_v232;
     *__esp = _t223;
    L080491C4();
     *__esp =  &jmp_save;
    _setjmp();
    _t355 = _t223;
    if(_t223 != 0) {
        _v276 = 156;
        _v280 =  &_v232;
         *__esp =  &jmp_save;
        L080491C4();
        partial_flag = _v240;
        if(_t355 != 13) {
            _t356 = 0;
            return _t356;
        }
        _v280 = 13;
         *__esp =  &jmp_save;
        __longjmp_chk();
    }
    _t224 = n_tokens;
    __eflags = len1 - _t224;
    if(len1 > _t224) {
L69:
        _t356 = 0;
        asm("o16 nop ");
L71:
        _v276 = 156;
        _v280 =  &_v232;
         *__esp =  &jmp_save;
        L080491C4();
        partial_flag = _v240;
        return _t356;
    } else {
        __eflags = len2 - _t224;
        if(len2 > _t224) {
            goto L69;
        }
        _t227 = trhs;
        __eflags = d1 - _t227;
        if(d1 != _t227) {
            _v276 = len1 << 4;
            _v280 = d1;
             *__esp = _t227;
            L080491C4();
            n_trhs = len1;
        }
        _t228 = tlhs;
        __eflags = d2 - _t228;
        if(d2 != _t228) {
            _v276 = len2 << 4;
            _v280 = d2;
             *__esp = _t228;
            L080491C4();
            n_tlhs = len2;
        }
        uf_simp(trhs,  &n_trhs);
        uf_simp(tlhs,  &n_tlhs);
        _t400 = vp;
        __eflags =  *_t400;
        if( *_t400 != 0) {
L12:
            __eflags = debug_level - 2;
            if(__eflags > 0) {
                list_var( *vp, 0);
                _v272 =  &var_str;
                _v276 = "poly_div() starts using base variable (%s):\n";
                _v280 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                list_debug(3, trhs, n_trhs, 0, 0);
                list_debug(3, tlhs, n_tlhs, 0, 0);
            }
            _v48 = 2;
            _t357 =  &_v48;
            __edi = find_greatest_power(trhs, n_trhs, vp,  &_v60,  &_v32,  &_v36, _t357);
            _t243 = find_greatest_power(tlhs, n_tlhs, vp,  &_v68,  &_v40,  &_v44, _t357);
            asm("fld qword [ebp-0x40]");
            asm("fldz ");
            asm("fucomip st0, st1");
            if(__eflags >= 0) {
                asm("fstp st0");
            } else {
                asm("fld qword [ebp-0x38]");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags <= 0) {
L20:
                    n_quotient = 1;
                    quotient = zero_token.kind;
                     *134758276 =  *134715672;
                     *134758280 =  *134715676;
                     *134758284 =  *134715680;
                    _t262 = n_tlhs;
                    __eflags = _t262 - 30000;
                    if(_t262 > 30000) {
                        goto L69;
                    }
                    goto L21;
                }
                goto L18;
L21:
                _v272 = 480000;
                _v276 = _t262 << 4;
                _v280 = tlhs;
                 *__esp =  &divisor;
                __memmove_chk();
                n_divisor = n_tlhs;
                _v244 = n_trhs;
                _v248 = n_quotient;
                while(1) {
                    _t267 = _v32;
                    __eflags = _t267;
                    if(_t267 <= 0) {
                        goto L25;
                    } else {
                        goto L24;
                    }
                }
            }
L18:
            __eflags = _v48;
            _v48 = _t243 & 4294967295 & ;
            _t358 =  &_v48;
            __edi = find_greatest_power(trhs, n_trhs, vp,  &_v60,  &_v32,  &_v36, _t358);
            find_greatest_power(tlhs, n_tlhs, vp,  &_v68,  &_v40,  &_v44, _t358);
            asm("fld qword [ebp-0x40]");
            asm("fldz ");
            asm("fucomip st0, st1");
            if(__eflags >= 0) {
                asm("fstp st0");
                goto L69;
            }
            asm("fld qword [ebp-0x38]");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags > 0) {
                goto L69;
            }
            goto L20;
        }
        _t351 = find_highest_count(n_tlhs, _t400);
        __eflags = _t351;
        if(_t351 == 0) {
            goto L69;
        }
        goto L12;
    }
    _t356 = -1;
    goto L71;
}

int do_gcd(long int* vp)
{// addr = 0x08065A2E
    int i;
    int count;
    _unknown_ _v28;
    intOrPtr _v32;
    signed int _v36;
    token_type[29999]* _v40;
    int __ebx;
    long int* __esi;
    _unknown_ __ebp;
    int _t16;
    signed int _t19;

    __esi = __eax;
    __ebx = 1;
    while(1) {
        _t16 = poly_div(trhs, n_trhs,  &gcd_divisor, len_d, __esi);
        if(_t16 == 0) {
            break;
        }
        if(_t16 == 2) {
            return __ebx;
        }
        if(len_d <= n_tokens) {
            _t19 = n_trhs;
            if(_t19 > 30000) {
                break;
            }
            _v36 = _t19 << 4;
            _v40 = trhs;
             *__esp = scratch;
            L080491C4();
            _v36 = len_d << 4;
            _v40 =  &gcd_divisor;
             *__esp = trhs;
            L080491C4();
            _v32 = 480000;
            _v36 = n_trhs << 4;
            _v40 = scratch;
             *__esp =  &gcd_divisor;
            __memmove_chk();
            n_trhs = len_d;
            len_d = n_trhs;
            __ebx = __ebx + 1;
            if(__ebx != 50) {
                continue;
            }
        }
        break;
        return __ebx;
    }
L6:
    __ebx = 0;
    return __ebx;
}

int pdiv_recurse(token_type* equation, int* np, int loc, int level, int code)
{// addr = 0x08065B31
    int modified;
    int i;
    int j;
    int k;
    int op;
    int op2;
    int last_op2;
    int len1;
    int len2;
    int real_len1;
    long int v;
    int rv;
    int flag;
    int power_flag;
    long int _v32;
    token_type* _v48;
    union kind_list* _v52;
    int* _v56;
    token_type* _v60;
    token_type* _v64;
    signed int _v68;
    int _v72;
    int _v76;
    intOrPtr* _v80;
    token_type* _v84;
    signed int _v88;
    int _v92;
    signed int _v96;
    signed int _v100;
    int _v104;
    int _v108;
    int _v112;
    token_type* _v116;
    intOrPtr _v120;
    signed int _v124;
    union kind_list* _v128;
    intOrPtr _v132;
    union kind_list* _v136;
    intOrPtr _v140;
    int _v144;
    token_type* _v148;
    token_type* _v152;
    int _v156;
    union kind_list* _v160;
    signed int _v164;
    _unknown_ _v188;
    _unknown_ _v192;
    _unknown_ _v196;
    _unknown_ _v200;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t350;
    intOrPtr _t355;
    signed int _t356;
    _unknown_ _t358;
    int _t361;
    token_type* _t362;
    token_type* _t363;
    int _t368;
    _unknown_ _t371;
    _unknown_ _t390;
    _unknown_ _t396;
    _unknown_ _t397;
    _unknown_ _t400;
    _unknown_ _t414;
    _unknown_ _t434;
    _unknown_ _t441;
    _unknown_ _t447;
    _unknown_ _t448;
    _unknown_ _t451;
    _unknown_ _t453;
    _unknown_ _t455;
    _unknown_ _t456;
    _unknown_ _t457;
    intOrPtr _t459;
    _unknown_ _t464;
    token_type* _t466;
    signed int _t468;
    signed int _t469;
    union kind_list* _t474;
    intOrPtr _t478;
    _unknown_ _t484;
    _unknown_ _t489;
    _unknown_ _t495;
    intOrPtr* _t500;
    signed int _t501;
    _unknown_ _t503;
    intOrPtr _t504;
    signed int _t510;
    int _t519;
    _unknown_ _t522;
    intOrPtr _t533;
    intOrPtr* _t534;
    _unknown_ _t536;
    signed int _t539;
    intOrPtr* _t540;
    int _t543;
    intOrPtr _t544;
    int _t545;
    intOrPtr _t547;
    intOrPtr _t548;
    long int _t553;
    _unknown_ _t555;
    _unknown_ _t559;
    _unknown_ _t560;
    _unknown_ _t566;
    _unknown_ _t569;
    _unknown_ _t577;
    _unknown_ _t581;
    _unknown_ _t587;
    _unknown_ _t589;
    int _t610;
    token_type* _t611;
    token_type* _t612;
    signed int _t613;
    signed int _t614;
    _unknown_ _t615;
    _unknown_ _t616;
    int _t617;
    _unknown_ _t620;
    intOrPtr _t621;
    signed int _t622;
    signed int _t634;
    int _t637;
    union kind_list* _t638;
    _unknown_ _t641;
    union kind_list* _t643;
    signed int _t645;

    _t534 = __edx;
    _t501 = __ecx;
    _v120 = __eax;
    _v80 = _t534;
    _v124 = _t501;
    _t611 = equation;
    _t468 = _t501 + 1;
    _t350 =  *_t534;
    if(_t468 >= _t350) {
L99:
        _t469 = _v124;
        _v52 =  &(_t611->kind);
        _v48 = 0;
        _t621 = _v120;
        while(_t469 <  *_v80) {
            _t355 =  *((intOrPtr*)((_t469 << 4) + _t621 + 4));
            if(_t611 <= _t355) {
                __eflags = _t611 - _t355;
                if(_t611 >= _t355) {
                    _t356 = _t469 + 1;
                    goto L110;
                }
                _v48 = _v48 | pdiv_recurse(_v52, np);
                _t356 = _t469 + 1;
                _t504 =  *_v80;
                __eflags = _t504 - _t356;
                if(_t504 <= _t356) {
                    goto L110;
                }
                _t539 = _t356 << 4;
                __eflags = _t611 -  *((intOrPtr*)(_t539 + _t621 + 4));
                if(_t611 >=  *((intOrPtr*)(_t539 + _t621 + 4))) {
                    goto L110;
                }
                _t540 = _t621 + (_t469 << 4) + 52;
                while(1) {
                    _t356 = _t356 + 2;
                    __eflags = _t504 - _t356;
                    if(_t504 <= _t356) {
                        break;
                    }
                    _t540 = _t540 + 32;
                    __eflags = _t611 -  *_t540;
                    if(_t611 <  *_t540) {
                        continue;
                    }
                    goto L110;
                }
L110:
                _t469 = _t356;
                continue;
            }
            _t622 = _v48;
            return _t622;
        }
    }
    _v52 = _t468;
    _t543 = (_t468 << 4) + _v120;
    _v108 = _t543;
    _t544 =  *((intOrPtr*)(_t543 + 4));
    if(_t611 <= _t544) {
        _v148 = (_v124 << 4) + _v120;
        _v144 = (_v124 << 4) + _v120 + 48;
        _v92 = (_v124 << 4) + _v120 + 80;
        _v88 =  !_t468;
        _v72 = _v144;
        _v68 = _t468;
        _v152 = (_t468 << 4) + _v120;
        _t474 =  &(_t611->kind);
        _v136 = _t474;
        _v128 = _t474;
        _t510 = _v52;
        _v48 = _t611;
        goto L3;
        do {
L3:
            if(_t544 != _v48 ||  *((intOrPtr*)(_v108 + 8)) != 4) {
L97:
                _v68 = _v68 + 2;
                _t350 =  *_v80;
                if(_t350 > _v68) {
                    goto L100;
                }
            } else {
                _t547 = _v68 + 2;
                _v140 = _t547;
                if(_t350 <= _t547) {
L11:
                    _t548 = _v140;
                    goto L12;
                }
                _t645 = _v48;
                if(_t645 >=  *((intOrPtr*)(_v72 + 4))) {
                    goto L11;
                } else {
                    _t500 = _v92 + 4;
                    _t613 = _t645;
                    while(1) {
L9:
                        _t548 = _t547 + 2;
                        if(_t548 >= _t350) {
                            break;
                        }
                        _t500 = _t500 + 32;
                        __eflags = _t613 -  *_t500;
                        if(_t613 >=  *_t500) {
                            goto L12;
                        }
                        continue;
L13:
                        _t361 = _v148->level;
                        if(_v48 <= _t361) {
                            _t634 = _v88;
                            _v164 = _t634;
                            _v104 = _t548 + _t634;
                            _v156 = _v72;
                            _v60 = (_t510 << 4) + _v120 + 16;
                            _v84 = _v152;
                            _v116 = _v144;
                            _v64 = _v148;
                            _t637 = _v104;
                            _v96 = _v124;
                            _t553 = 0;
                            _v160 =  &(_v48->kind);
                            goto L15;
                            do {
L15:
                                if(_v48 != _t361) {
L18:
                                    __eflags = _t553 - 4;
                                    if(_t553 == 4) {
                                        goto L95;
                                    }
                                    goto L19;
                                }
                                _t466 = _v64;
                                if(_t466->kind != 2) {
                                    goto L18;
                                }
                                _t553 =  *(_t466 + 8);
L95:
                                _v96 = _v96 + 1;
                                _t478 =  *_v80;
                                if(_t478 <= _v96) {
                                    goto L97;
                                }
                                goto L96;
L19:
                                _t555 = _v96 + 1;
                                __eflags = _t478 - _t555;
                                if(_t478 <= _t555) {
L94:
                                    _t553 = 4;
                                    goto L95;
                                }
                                _t612 = _v84;
                                _t519 = _t612->level;
                                __eflags = _v48 - _t519;
                                if(_v48 >= _t519) {
                                    goto L94;
                                }
                                _t363 = _v116;
                                _v52 = 0;
                                _v56 = _t637;
                                _t638 = _v136;
                                while(1) {
                                    __eflags = _t519 - _t638;
                                    if(_t519 == _t638) {
                                        _v52 =  *(_t612 + 8);
                                    }
                                    _t555 = _t555 + 2;
                                    __eflags = _t555 - _t478;
                                    if(_t555 >= _t478) {
                                        break;
                                    }
                                    _t612 = _t363;
                                    _t519 = _t363->level;
                                    _t363 = _t363 + 32;
                                    __eflags = _v48 - _t519;
                                    if(_v48 < _t519) {
                                        continue;
                                    }
                                    break;
                                }
L26:
                                _t637 = _v56;
                                __eflags = _v52 - 1 - 1;
                                if(_v52 - 1 > 1) {
                                    goto L94;
                                }
                                _v76 = _t555 - _v96;
                                __eflags = _t478 - _v140;
                                if(_t478 <= _v140) {
L41:
                                    _t614 = 0;
                                    goto L42;
                                }
                                _t459 =  *((intOrPtr*)(_v72 + 4));
                                __eflags = _v48 - _t459;
                                if(_v48 >= _t459) {
                                    goto L41;
                                }
                                _v112 = _v92;
                                _t617 = _v156;
                                _t533 = _v140;
                                _v56 = 0;
                                _v100 = 0;
                                _v52 =  &(_v48->kind);
                                _t610 = _v112;
                                _v112 = _t637;
                                _t643 = _v160;
                                goto L30;
                                do {
L30:
                                    __eflags = _t459 - _t643;
                                    if(_t459 != _t643) {
                                        __eflags = _t459 - _v52;
                                        if(_t459 != _v52) {
                                            __eflags = _t459 - _v128;
                                            if(_t459 != _v128) {
                                                goto L43;
                                            }
                                            goto L35;
                                        }
                                        goto L33;
L35:
                                        _t637 = _v112;
                                        __eflags =  *(_t617 + 8) - 6;
                                        if( *(_t617 + 8) != 6) {
                                            goto L41;
                                        }
                                        __eflags = _v100 - 1 - 1;
                                        if(_v100 - 1 <= 1) {
L39:
                                            _t637 = _t533 + _v164;
                                            _t614 = 1;
                                            goto L42;
                                        }
                                        __eflags = _v100 - 3;
                                        if(_v100 != 3) {
                                            goto L41;
                                        }
                                        __eflags = _v56 - 1;
                                        if(_v56 != 1) {
                                            goto L41;
                                        }
                                        goto L39;
                                    }
                                    __eflags =  *(_t617 + 8) - 1 - 1;
                                    _t465 =  *(_t617 + 8) - 1 - 1 > 0 ? _v56 : 1;
                                    _v56 =  *(_t617 + 8) - 1 - 1 > 0 ? _v56 : 1;
L43:
                                    _t533 = _t533 + 2;
                                    __eflags = _t533 - _t478;
                                    if(_t533 >= _t478) {
                                        _t637 = _v112;
                                        goto L41;
                                    }
                                    goto L44;
L33:
                                    _v100 =  *(_t617 + 8);
                                    goto L43;
L44:
                                    _t617 = _t610;
                                    _t459 =  *((intOrPtr*)(_t610 + 4));
                                    _t610 = _t610 + 32;
                                    __eflags = _v48 - _t459;
                                } while(_v48 < _t459);
                                _t637 = _v112;
                                goto L41;
L42:
                                _v56 = np;
                                _v132 = _v76 + 1;
                                while(1) {
                                    __eflags = _t614;
                                    _t637 = __eflags == 0 ? _v104 : _t637;
                                    _v32 = 0;
                                    _v100 = _v56 | _t614;
                                    if(__eflags == 0) {
                                        _t368 = smart_div(_v64, _v76, _v60, _t637);
                                    } else {
                                        _t368 = poly_div(_v64, _v76, _v60, _t637,  &_v32);
                                    }
                                    __eflags = _t368;
                                    if(_t368 <= 0) {
                                        goto L55;
                                    } else {
                                        goto L51;
                                    }
                                }
                                goto L95;
L96:
                                _t362 = _v84;
                                _v64 = _t362;
                                _t361 = _t362->level;
                                _v84 = _t362 + 16;
                                _v116 = _v116 + 16;
                            } while(_v48 <= _t361);
                        }
                        goto L97;
                    }
                }
L12:
                _t478 =  *_v80;
                if(_v124 >= _t478) {
                    goto L97;
                }
                goto L13;
            }
L98:
            _t611 = _v48;
            goto L99;
        } while(_t544 >= _v48);
        _t611 = _v48;
    }
L100:
    _t510 = _v68;
    _t545 = _v72;
    _v108 = _t545;
    _t544 =  *((intOrPtr*)(_t545 + 4));
    _v72 = _t545 + 32;
    _v92 = _v92 + 32;
    _v88 = _v88 - 2;
    __eflags = _t544 - _v48;
}

int div_remainder(token_type* equation, int* np, int poly_flag, int quick_flag)
{// addr = 0x080664F4
    int rv;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    int* _v40;
    _unknown_ __ebp;
    _unknown_ _t15;
    _unknown_ _t18;
    int* _t21;
    _unknown_ _t23;
    _unknown_ _t24;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    token_type* _t29;
    _unknown_ _t30;
    int* _t32;
    _unknown_ _t33;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t29 = equation;
    _t32 = np;
    _t21 = poly_flag;
    if(quick_flag == 0) {
        _t22 = pdiv_recurse(1, _t21);
        return _t22;
    }
    group_proc(_t29, _t32);
    _v40 = _t21;
     *__esp = 1;
    _t16 = pdiv_recurse();
    organize(_t29, _t32);
    return _t22;
}

int mod_recurse(token_type* equation, int* np, int loc, int level)
{// addr = 0x08066571
    int modified;
    int i;
    int j;
    int k;
    int i1;
    int i2;
    int i3;
    int i4;
    int i5;
    int op;
    int last_op2;
    int len1;
    int len2;
    int len3;
    int diff_sign;
    long int v;
    _unknown_ _v32;
    _unknown_ _v36;
    union kind_list* _v48;
    signed int _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    union kind_list* _v68;
    intOrPtr _v72;
    _unknown_ _v76;
    _unknown_ _v80;
    intOrPtr* _v84;
    signed int _v88;
    intOrPtr _v92;
    _unknown_ _v96;
    _unknown_ _v100;
    _unknown_ _v104;
    signed int _v108;
    intOrPtr _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    signed int _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    signed int _v156;
    _unknown_ _v160;
    _unknown_ _v164;
    _unknown_ _v168;
    _unknown_ _v172;
    _unknown_ _v176;
    _unknown_ _v180;
    intOrPtr _v184;
    intOrPtr _v188;
    intOrPtr _v192;
    _unknown_ _v220;
    _unknown_ _v224;
    _unknown_ _v228;
    _unknown_ _v232;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t337;
    signed int _t338;
    _unknown_ _t339;
    _unknown_ _t354;
    _unknown_ _t355;
    _unknown_ _t358;
    _unknown_ _t360;
    _unknown_ _t365;
    _unknown_ _t372;
    _unknown_ _t382;
    _unknown_ _t386;
    _unknown_ _t407;
    _unknown_ _t423;
    _unknown_ _t431;
    _unknown_ _t446;
    _unknown_ _t449;
    _unknown_ _t460;
    _unknown_ _t471;
    intOrPtr _t474;
    signed int _t475;
    _unknown_ _t477;
    signed int _t479;
    intOrPtr _t482;
    _unknown_ _t486;
    _unknown_ _t487;
    _unknown_ _t490;
    _unknown_ _t491;
    _unknown_ _t492;
    _unknown_ _t495;
    _unknown_ _t497;
    _unknown_ _t499;
    _unknown_ _t501;
    signed int _t505;
    intOrPtr _t507;
    _unknown_ _t508;
    _unknown_ _t524;
    _unknown_ _t525;
    _unknown_ _t535;
    _unknown_ _t536;
    intOrPtr _t537;
    intOrPtr _t539;
    _unknown_ _t542;
    _unknown_ _t544;
    _unknown_ _t547;
    _unknown_ _t550;
    _unknown_ _t551;
    _unknown_ _t553;
    _unknown_ _t561;
    _unknown_ _t564;
    _unknown_ _t566;
    _unknown_ _t572;
    _unknown_ _t577;
    intOrPtr* _t581;
    intOrPtr _t582;
    signed int _t584;
    _unknown_ _t585;
    _unknown_ _t586;
    _unknown_ _t589;
    _unknown_ _t592;
    _unknown_ _t594;
    _unknown_ _t596;
    token_type* _t600;
    signed int _t602;
    signed int _t606;
    _unknown_ _t612;
    _unknown_ _t613;
    _unknown_ _t614;
    _unknown_ _t618;
    _unknown_ _t620;
    _unknown_ _t623;
    _unknown_ _t626;
    _unknown_ _t628;
    _unknown_ _t630;

    _t505 = __ecx;
    _t337 = __eax;
    _v72 = _t337;
    _v84 = __edx;
    _v156 = _t505;
    _t479 = _t505;
    _v136 = 0;
    _t582 = _t337;
    _v48 =  &(equation->kind);
    _t600 = equation;
    while(1) {
        _t539 =  *_v84;
        if(_t479 >= _t539) {
            break;
        }
        _t474 =  *((intOrPtr*)((_t479 << 4) + _t582 + 4));
        if(_t474 >= _t600) {
            if(_t474 <= _t600) {
                _t475 = _t479 + 1;
L9:
                _t479 = _t475;
                continue;
            }
            goto L2;
        }
        break;
L2:
        _v136 = _v136 | mod_recurse(_v48);
        _t475 = _t479 + 1;
        _t537 =  *_v84;
        if(_t475 >= _t537) {
            goto L9;
        }
        if(_t600 >=  *((intOrPtr*)((_t475 << 4) + _t582 + 4))) {
            goto L9;
        } else {
            _t581 = _t582 + (_t479 << 4) + 52;
            goto L5;
        }
        while(1) {
L5:
            _t475 = _t475 + 2;
            if(_t475 >= _t537) {
                break;
            }
L6:
            _t581 = _t581 + 32;
            if(_t600 <  *_t581) {
                continue;
            } else {
                goto L9;
            }
            goto L6;
        }
        goto L9;
    }
L12:
    _t338 = _v136;
    if(_t338 != 0) {
        return 1;
    }
    _t584 = _v156 + 1;
    if(_t584 >= _t539) {
        return _t338;
    }
    _v52 = _t584;
    _t482 = (_t584 << 4) + _v72;
    _t507 =  *((intOrPtr*)(_t482 + 4));
    if(equation > _t507) {
        return _t338;
    }
    _v188 = (_v156 << 4) + _v72;
    _t602 = _v156 + 3;
    _v88 = _t602;
    _v184 = (_t602 << 4) + _v72;
    _v108 =  !_t584;
    _v112 = (_v156 << 4) + _v72 + 80;
    _v92 = _v184;
    _v192 = _t482;
    _v68 =  &(equation->kind);
    _t606 = _v52;
    while(1) {
    }
}

int mod_simp(token_type* equation, int* np)
{// addr = 0x08066DDE
    _unknown_ __ebp;
    _unknown_ _t3;

    return mod_recurse(1);
}

int poly_gcd(token_type* larger, int llen, token_type* smaller, int slen, long int v)
{// addr = 0x08066DFD
    int count;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v44;
    char* _v48;
    signed int _v52;
    token_type[29999]* _v56;
    _unknown_ __ebp;
    int _t40;
    signed int _t51;
    _unknown_ _t55;
    int _t56;
    signed int _t57;
    signed int _t64;
    signed int _t69;
    int _t72;
    int _t76;
    int _t77;
    _unknown_ _t78;
    _unknown_ _t79;
    token_type* _t82;
    _unknown_ _t83;
    int _t85;
    _unknown_ _t86;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t82 = larger;
    _t85 = llen;
    _t76 = slen;
    _t40 = n_tokens;
    if(_t40 < _t85) {
L15:
        _t77 = 0;
        return _t77;
    }
    _t42 = _t40 - 30000 > 0 ? 30000 : _t40;
    _t89 = (_t40 - 30000 > 0 ? 30000 : _t40) - _t76;
    if((_t40 - 30000 > 0 ? 30000 : _t40) < _t76) {
        goto L15;
    }
    _v52 = _t85 << 4;
    _v56 = _t82;
     *__esp = trhs;
    L080491C4();
    n_trhs = _t85;
    _v52 = _t76 << 4;
    _v56 = smaller;
     *__esp = tlhs;
    L080491C4();
    n_tlhs = _t76;
    if(remove_factors() == 0) {
        goto L15;
    }
    _t51 = n_tlhs;
    if(_t51 > 30000) {
        goto L15;
    }
    _v48 = 480000;
    _v52 = _t51 << 4;
    _v56 = tlhs;
     *__esp =  &gcd_divisor;
    __memmove_chk();
    len_d = n_tlhs;
    _t56 = do_gcd();
    _t77 = _t56;
    if(_t56 == 0) {
        return _t77;
    }
    if(_t56 <= 1) {
L12:
        _t57 = len_d;
        if(_t57 > n_tokens) {
            goto L15;
        }
    } else {
        _t64 = len_d;
        if(_t64 > n_tokens) {
            goto L15;
        }
        _v52 = _t64 << 4;
        _v56 =  &gcd_divisor;
         *__esp = tlhs;
        L080491C4();
        n_tlhs = len_d;
        if(remove_factors() == 0) {
            goto L15;
        }
        _t69 = n_tlhs;
        if(_t69 > 30000) {
            goto L15;
        }
        _v48 = 480000;
        _v52 = _t69 << 4;
        _v56 = tlhs;
         *__esp =  &gcd_divisor;
        __memmove_chk();
        _t72 = n_tlhs;
        len_d = _t72;
        if(poly_div(_t82, _t85,  &gcd_divisor, _t72,  &v) == 2) {
            goto L12;
        } else {
            if(debug_level > 0) {
                _v48 = "Polynomial GCD found, but larger divide failed in poly_gcd().";
                _v52 = 134686589;
                _v56 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                _t77 = 0;
                return _t77;
            }
            goto L15;
        }
    }
L13:
    _v52 = _t57 << 4;
    _v56 =  &gcd_divisor;
     *__esp = trhs;
    L080491C4();
    n_trhs = len_d;
    uf_simp(tlhs,  &n_tlhs);
    uf_simp(trhs,  &n_trhs);
    if(debug_level <= 2) {
        return _t77;
    }
    _v48 = "poly_gcd() successful.";
    _v52 = 134686589;
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return _t77;
    return _t77;
}

int poly2_gcd(token_type* larger, int llen, token_type* smaller, int slen, long int v)
{// addr = 0x08067067
    int i;
    jmp_buf save_save;
    int count;
    char _v168;
    _unknown_ _v188;
    char* _v192;
    signed int _v196;
    int _v200;
    _unknown_ __ebx;
    _unknown_ __ebp;
    int _t85;
    FILE* _t98;
    signed int _t104;
    _unknown_ _t108;
    int _t109;
    token_type* _t110;
    signed int _t123;
    int _t131;
    int _t144;
    FILE* _t145;
    _unknown_ _t146;

    if(debug_level > 2) {
        _v192 = "Entering poly2_gcd():";
        _v196 = 134686589;
        _v200 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    list_debug(3, larger, llen, 0, 0);
    list_debug(3, smaller, slen, 0, 0);
    _t85 = n_tokens;
    if(llen > _t85) {
L23:
        _t144 = 0;
        return _t144;
    }
    _t87 = _t85 - 30000 > 0 ? 30000 : _t85;
    _t155 = slen - (_t85 - 30000 > 0 ? 30000 : _t85);
    if(slen > (_t85 - 30000 > 0 ? 30000 : _t85)) {
        goto L23;
    }
    _v196 = llen << 4;
    _v200 = larger;
     *__esp = trhs;
    L080491C4();
    n_trhs = llen;
    _v196 = slen << 4;
    _v200 = smaller;
     *__esp = tlhs;
    L080491C4();
    n_tlhs = slen;
    _v196 = 156;
    _v200 =  &jmp_save;
    _t98 =  &_v168;
     *__esp = _t98;
    L080491C4();
     *__esp =  &jmp_save;
    _setjmp();
    _t145 = _t98;
    if(_t98 == 0) {
L7:
        uf_simp(tlhs,  &n_tlhs);
        _v196 = 156;
        _v200 =  &_v168;
         *__esp =  &jmp_save;
        L080491C4();
        if(level1_plus_count(tlhs, n_tlhs) == 0) {
            goto L23;
        }
        goto L8;
    }
    _v196 = 156;
    _v200 =  &_v168;
     *__esp =  &jmp_save;
    L080491C4();
    if(_t145 != 13) {
        goto L23;
    } else {
        _v200 = 13;
         *__esp =  &jmp_save;
        __longjmp_chk();
        goto L7;
    }
    goto L24;
L8:
    _t104 = n_tlhs;
    if(_t104 > 30000) {
        goto L23;
    }
    _v192 = 480000;
    _v196 = _t104 << 4;
    _v200 = tlhs;
     *__esp =  &gcd_divisor;
    __memmove_chk();
    len_d = n_tlhs;
    _t109 = do_gcd();
    _t144 = _t109;
    if(_t109 == 0) {
        return _t144;
    }
    if(_t109 <= 1) {
        n_trhs = 1;
        _t110 = trhs;
         *_t110 = one_token.kind;
        _t110->level =  *134715048;
         *((intOrPtr*)(_t110 + 8)) =  *134715052;
         *((intOrPtr*)(_t110 + 12)) =  *134715056;
    } else {
        if(level1_plus_count( &gcd_divisor, len_d) == 0) {
            goto L23;
        }
        if(poly_div(smaller, slen,  &gcd_divisor, len_d,  &v) == 2) {
            _v196 = len_d << 4;
            _v200 =  &gcd_divisor;
             *__esp = trhs;
            L080491C4();
            n_trhs = len_d;
            _t123 = n_tlhs;
            if(_t123 > 30000) {
                goto L23;
            }
            goto L16;
        }
        if(debug_level > 0) {
            _v192 = "Polynomial GCD found, but smaller divide failed in poly2_gcd().";
            _v196 = 134686589;
            _v200 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t144 = 0;
            return _t144;
        }
        goto L23;
L16:
        _v192 = 480000;
        _v196 = _t123 << 4;
        _v200 = tlhs;
         *__esp =  &gcd_divisor;
        __memmove_chk();
        len_d = n_tlhs;
        _v196 = n_trhs << 4;
        _v200 = trhs;
         *__esp = tlhs;
        L080491C4();
        _t131 = n_trhs;
        n_tlhs = _t131;
        if(poly_div(larger, llen, tlhs, _t131,  &v) == 2) {
            _v196 = len_d << 4;
            _v200 =  &gcd_divisor;
             *__esp = trhs;
            L080491C4();
            n_trhs = len_d;
            goto L21;
        }
        if(debug_level <= 0) {
            goto L23;
        }
        _v192 = "Polynomial GCD found, but larger divide failed in poly2_gcd().";
        _v196 = 134686589;
        _v200 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _t144 = 0;
        return _t144;
        goto L24;
    }
L21:
    if(debug_level <= 2) {
        return _t144;
    }
    _v192 = "poly2_gcd() successful.";
    _v196 = 134686589;
    _v200 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return _t144;
L24:
    return _t144;
}

int polydiv_recurse(token_type* equation, int* np, int loc, int level)
{// addr = 0x0806749B
    int modified;
    int i;
    int j;
    int k;
    int last_op2;
    int len1;
    int len2;
    token_type* _v32;
    signed int _v36;
    intOrPtr _v40;
    intOrPtr* _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    signed int _v56;
    intOrPtr _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    intOrPtr _v72;
    signed int _v76;
    signed int _v80;
    signed int _v84;
    intOrPtr _v88;
    intOrPtr _v92;
    intOrPtr _v96;
    intOrPtr _v100;
    signed int _v104;
    signed int _v108;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    _unknown_ _v136;
    token_type* __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t178;
    intOrPtr _t188;
    _unknown_ _t190;
    _unknown_ _t193;
    _unknown_ _t200;
    _unknown_ _t202;
    _unknown_ _t245;
    _unknown_ _t246;
    intOrPtr _t249;
    signed int _t250;
    _unknown_ _t252;
    signed int _t254;
    intOrPtr _t262;
    _unknown_ _t266;
    _unknown_ _t277;
    _unknown_ _t278;
    intOrPtr _t279;
    intOrPtr _t283;
    _unknown_ _t286;
    _unknown_ _t294;
    _unknown_ _t299;
    _unknown_ _t301;
    _unknown_ _t307;
    _unknown_ _t316;
    _unknown_ _t317;
    intOrPtr* _t321;
    intOrPtr _t323;
    _unknown_ _t324;
    _unknown_ _t326;
    signed int _t327;
    signed int _t329;
    signed int _t334;
    _unknown_ _t339;

    _t254 = __ecx;
    _t178 = __eax;
    _v72 = _t178;
    _v44 = __edx;
    _v76 = _t254;
    __ebx = equation;
    _t327 = _t254;
    _v80 = 0;
    _v32 =  &(__ebx->kind);
    _t323 = _t178;
    while(_t327 <  *_v44) {
        _t249 =  *((intOrPtr*)((_t327 << 4) + _t323 + 4));
        if(_t249 >= __ebx) {
            if(_t249 <= __ebx) {
                _t250 = _t327 + 1;
L9:
                _t327 = _t250;
                continue;
            }
            _v80 = _v80 | polydiv_recurse(_v32);
            _t250 = _t327 + 1;
            _t279 =  *_v44;
            if(_t250 >= _t279) {
                goto L9;
            }
            if(__ebx >=  *((intOrPtr*)((_t250 << 4) + _t323 + 4))) {
                goto L9;
            } else {
                _t321 = _t323 + (_t327 << 4) + 52;
                goto L5;
            }
            while(1) {
L5:
                _t250 = _t250 + 2;
                if(_t250 >= _t279) {
                    break;
                }
L6:
                _t321 = _t321 + 32;
                if(__ebx <  *_t321) {
                    continue;
                } else {
                    goto L9;
                }
                goto L6;
            }
            goto L9;
        }
        _t329 = _v76 + 1;
        _v84 = _t329;
        _v104 = _t329;
        _v88 = (_t329 << 4) + _v72;
        _v92 = (_v76 << 4) + _v72;
        _v108 =  !_t329;
        _v96 = (_v76 << 4) + _v72 + 48;
        while(1) {
            _t188 =  *_v44;
            if(_v84 >= _t188) {
                break;
            } else {
                _t283 =  *((intOrPtr*)(_v88 + 4));
                if(__ebx > _t283) {
                    return _v80;
                }
                _v56 = _v108;
                _v60 = (_v76 << 4) + _v72 + 80;
                _v40 = _v96;
                _t262 = _v88;
                _v32 = _v104;
                _t334 = _v84;
                _v36 = _t334;
                _v100 = (_t334 << 4) + _v72;
                goto L16;
            }
        }
        return _v80;
    }
}

int poly_gcd_simp(token_type* equation, int* np)
{// addr = 0x08067912
    _unknown_ __ebp;
    _unknown_ _t3;

    return polydiv_recurse(1);
}

int pf_sub(token_type* equation, int* np, int loc, int len, int level, int do_repeat)
{// addr = 0x08067931
    int modified;
    int symbolic_modified;
    int i;
    int j;
    int k;
    long int v;
    long int v1;
    long int last_v;
    int len_first;
    int loc1;
    int loc2;
    int len2;
    int loct;
    int lent;
    int count;
    jmp_buf save_save;
    int div_flag;
    int vc;
    int cnt;
    sort_type[999] va;
    double d;
    int old_partial;
    int _v32;
    int _v36;
    long int _v40;
    int _v44;
    double _v52;
    char _v208;
    char _v8208;
    signed int _v8224;
    signed int _v8228;
    long int _v8232;
    signed int _v8236;
    signed int _v8240;
    signed int _v8244;
    token_type* _v8248;
    int _v8252;
    signed int _v8256;
    token_type* _v8260;
    intOrPtr _v8264;
    intOrPtr _v8268;
    intOrPtr _v8272;
    int _v8276;
    token_type* _v8280;
    int _v8284;
    token_type* _v8288;
    intOrPtr _v8292;
    signed int _v8296;
    int _v8300;
    token_type* _v8304;
    signed int _v8308;
    intOrPtr _v8312;
    signed int _v8316;
    _unknown_ _v8324;
    _unknown_ _v8328;
    signed int _v8332;
    char[179]* _v8336;
    signed int _v8340;
    int _v8344;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t325;
    _unknown_ _t326;
    signed int _t327;
    int _t345;
    int _t349;
    int _t354;
    _unknown_ _t356;
    _unknown_ _t358;
    token_type* _t361;
    long int _t364;
    _unknown_ _t376;
    int _t377;
    token_type* _t386;
    _unknown_ _t392;
    _unknown_ _t400;
    _unknown_ _t402;
    _unknown_ _t408;
    _unknown_ _t409;
    _unknown_ _t413;
    _unknown_ _t416;
    _unknown_ _t418;
    _unknown_ _t423;
    _unknown_ _t440;
    int _t441;
    _unknown_ _t449;
    token_type* _t460;
    signed int _t461;
    signed int _t466;
    signed int _t473;
    int _t474;
    long int _t480;
    _unknown_ _t485;
    _unknown_ _t486;
    _unknown_ _t488;
    _unknown_ _t489;
    _unknown_ _t491;
    _unknown_ _t492;
    signed int _t496;
    _unknown_ _t501;
    _unknown_ _t503;
    _unknown_ _t506;
    signed int _t511;
    _unknown_ _t522;
    signed int _t529;
    _unknown_ _t537;
    signed int _t539;
    signed int _t541;
    _unknown_ _t542;
    _unknown_ _t543;
    int _t544;
    long int _t545;
    _unknown_ _t546;
    char* _t547;
    signed int _t548;

    _v8264 = __eax;
    _v8292 = __edx;
    _v8296 = __ecx;
    _v40 = 0;
    _v44 = 3;
    if(debug_level > 2) {
        _v8336 = "Entering pf_sub().";
        _v8340 = 134686589;
        _v8344 = 1;
         *__esp = gfp;
        __fprintf_chk();
    }
    _v8300 = partial_flag;
    _v8288 = (_v8296 << 4) + _v8264;
    find_greatest_power(_v8288, equation,  &_v40,  &_v52,  &_v32,  &_v36,  &_v44);
    if(_v40 == 0) {
        return 0;
    }
    _v8340 = 156;
    _v8344 =  &jmp_save;
    _t327 =  &_v208;
     *__esp = _t327;
    L080491C4();
     *__esp =  &jmp_save;
    _setjmp();
    _v8244 = _t327;
    if(_t327 != 0) {
        partial_flag = _v8300;
        _v8340 = 156;
        _v8344 =  &_v208;
         *__esp =  &jmp_save;
        L080491C4();
        __eflags = _v8244 - 13;
        if(_v8244 != 13) {
            return 0;
        }
        _v8344 = 13;
         *__esp =  &jmp_save;
        __longjmp_chk();
L8:
        _v8268 = _v8268 + 1;
        _v8284 = 1;
    } else {
        _t461 = _v8296;
        _v8256 = _t461;
        if(loc == 0) {
L58:
            _v8316 = equation << 4;
            _v8312 = (_v8256 << 4) + _v8264;
            _t548 = 0;
            _t474 = equation;
            while(1) {
L59:
                _v8340 = _v8316;
                _v8344 = _v8288;
                 *__esp = trhs;
                L080491C4();
                n_trhs = _t474;
                uf_simp(trhs,  &n_trhs);
                _v40 = -1;
                __eflags = _t474;
                if(_t474 <= 0) {
                    break;
                }
                while(1) {
                    _t386 = _v8288;
                    _t511 = _v8244;
                    goto L63;
                }
            }
L95:
            _t466 = 0;
            _v8340 = 156;
            _v8344 =  &_v208;
             *__esp =  &jmp_save;
            L080491C4();
            _v8284 = 0;
            return _v8284 | _t466;
        } else {
            _v8308 = _t461;
            _v8268 = 2;
            _v8276 = 0;
            _v8304 = 0;
            _v8284 = 0;
            _t547 =  &_v8208;
            _v8252 = 1;
            goto L9;
        }
        goto L59;
    }
L9:
    _v8272 = _v8268 - 1;
    _v8260 = (_v8256 << 4) + _v8264;
    _v8340 = equation << 4;
    _v8344 = _v8260;
     *__esp = trhs;
    L080491C4();
    n_trhs = equation;
    partial_flag = 0;
    uf_simp(trhs,  &n_trhs);
    partial_flag = _v8300;
    if(level1_plus_count(trhs, n_trhs) <= 1) {
L82:
        _v8340 = 156;
        _v8344 =  &_v208;
         *__esp =  &jmp_save;
        L080491C4();
        __eflags = _v8284;
        if(_v8284 == 0) {
L90:
            _t466 = 0;
            return _v8284 | _t466;
        }
        goto L83;
    }
    _t544 = n_trhs;
    _v8248 = trhs;
    if(_t544 <= 0) {
        _v8224 = 0;
    } else {
        _v8236 = 0;
        _v8224 = 0;
        while(1) {
            _t460 = _v8248;
            _t541 = _v8244;
            _v8240 = 0;
            _t480 = -1;
            goto L13;
        }
    }
    _t361 = _v8260;
    _v8280 = _t361;
    list_debug(3, _t361, equation, 0, 0);
    list_debug(3, trhs, n_trhs, 0, 0);
    _t364 = _v40;
    if(_t364 != 0 && poly_in_v(trhs, n_trhs, _t364, 1) == 0) {
        _v40 = 0;
    }
    if(_v8224 <= 0) {
        goto L82;
    } else {
        _t473 = _v8244;
        _v8232 = -1;
        while(1) {
L33:
            _v8228 = _t473;
            _t545 =  *(_t547 + _t473 * 8);
            if((_t545 & 16383) > 4) {
                if(_v40 == 0 && poly_in_v(trhs, n_trhs, _t545, 1) != 0) {
                    _v40 = _t545;
                }
                if(_v8232 >= 0 || _v8232 >  *((intOrPtr*)(_t547 + 4 + _v8228 * 8))) {
                    _v8232 =  *(_t547 + 4 + _v8228 * 8);
                }
            }
            _t473 = _t473 + 1;
            if(_t473 >= _v8224) {
                break;
            }
        }
        if(_v8232 <= 1 || _v40 == 0) {
            goto L82;
        } else {
            _v8340 = n_trhs << 4;
            _v8344 = trhs;
             *__esp = tlhs;
            L080491C4();
            n_tlhs = n_trhs;
            if(differentiate(tlhs,  &n_tlhs, _v40) == 0) {
                goto L82;
            }
            if(debug_level > 2) {
                list_var(_v40, 0);
                _v8336 =  &var_str;
                _v8340 = "Differentiation successful using variable (%s).\n";
                _v8344 = 1;
                 *__esp = gfp;
                __fprintf_chk();
            }
            simp_loop(tlhs,  &n_tlhs);
            _t377 = n_tlhs;
            _t507 = n_tokens - 30000 <= 0 ? n_tokens : 30000;
            _t577 = _t377 + 2 - (n_tokens - 30000 <= 0 ? n_tokens : 30000);
            if(_t377 + 2 > (n_tokens - 30000 <= 0 ? n_tokens : 30000)) {
L57:
                __eflags = _v8284;
                if(_v8284 != 0) {
                    _v8340 = 156;
                    _v8344 =  &_v208;
                     *__esp =  &jmp_save;
                    L080491C4();
                    goto L83;
                }
            } else {
                if(_t377 <= 0) {
L50:
                     *((intOrPtr*)(tlhs + (_t377 << 4))) = 2;
                     *( &(tlhs->level) + (n_tlhs << 4)) = 1;
                     *((n_tlhs << 4) + tlhs + 8) = 3;
                    _t529 = n_tlhs + 1;
                    n_tlhs = _t529;
                     *(tlhs + (_t529 << 4)) = 1;
                     *( &(tlhs->level) + (n_tlhs << 4)) = 1;
                     *((n_tlhs << 4) + tlhs + 8) = _v40;
                    n_tlhs = n_tlhs + 1;
                    uf_simp(tlhs,  &n_tlhs);
                    if(poly_gcd(_v8280, equation, tlhs, n_tlhs, _v40) == 0 || level1_plus_count(tlhs, n_tlhs) == 0) {
                        goto L57;
                    } else {
                        save_factors(equation, np);
                        _t441 = n_tlhs;
                        _v8256 = _t441 + _v8256 + 1;
                        equation = n_trhs;
                        if(_v8272 == 1) {
                            __eflags = debug_level;
                            if(debug_level > 0) {
                                _v8336 = "Polynomial with repeated factor factored.";
                                _v8340 = 134686589;
                                _v8344 = 1;
                                 *__esp = gfp;
                                __fprintf_chk();
                            }
                            _v8304 = n_tlhs;
                            _v8308 = _v8256;
                        } else {
                            _t444 = _v8272 != 2 ? _v8276 : _t441;
                            _v8276 = _v8272 != 2 ? _v8276 : _t441;
                        }
                        goto L8;
                    }
                    goto L58;
                }
                _t539 = _v8244;
                while(1) {
L49:
                     *((intOrPtr*)(tlhs + (_t539 << 4) + 4)) =  *((intOrPtr*)(tlhs + (_t539 << 4) + 4)) + 1;
                    _t539 = _t539 + 1;
                    _t377 = n_tlhs;
                    if(_t377 <= _t539) {
                        break;
                    }
                }
                goto L50;
            }
            goto L58;
        }
    }
L83:
    __eflags = _v8276;
    if(_v8276 != 0) {
        _t345 = _v8276;
        _t496 = _v8308;
    } else {
        _t345 = _v8304;
        _t496 = _v8296;
    }
    _t349 = poly_gcd(_v8260, equation, (_t496 << 4) + _v8264, _t345, _v40);
    __eflags = _t349;
    if(_t349 != 0) {
        save_factors(equation, np);
        _v8256 = _v8256 + n_tlhs + 1;
        equation = n_trhs;
    }
    __eflags = _v8276;
    _t499 = __eflags == 0 ? _v8256 : _v8308;
    _t469 = __eflags == 0 ? equation : _v8276;
    _v8332 = 0;
    _v8336 = __eflags == 0 ? equation : _v8276;
    _t350 = __eflags == 0 ? _v8256 : _v8308;
    _t351 = (__eflags == 0 ? _v8256 : _v8308) << 4;
    _t352 = ((__eflags == 0 ? _v8256 : _v8308) << 4) + _v8264;
    _v8340 = ((__eflags == 0 ? _v8256 : _v8308) << 4) + _v8264;
    _v8344 = _v8304;
     *__esp = _v8288;
    _t354 = poly_gcd();
    __eflags = _t354;
    if(_t354 == 0) {
        goto L90;
    } else {
        save_factors(_v8304, np);
        _t466 = 0;
L91:
        return _v8284 | _t466;
    }
    goto L91;
}

int pf_recurse(token_type* equation, int* np, int loc, int level, int do_repeat)
{// addr = 0x080684BF
    int modified;
    int i;
    int op;
    intOrPtr* _v32;
    signed int _v36;
    union kind_list* _v40;
    intOrPtr _v44;
    intOrPtr _v48;
    _unknown_ _v68;
    _unknown_ _v72;
    token_type* __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t49;
    intOrPtr _t54;
    signed int _t55;
    _unknown_ _t57;
    _unknown_ _t61;
    _unknown_ _t65;
    token_type* _t67;
    _unknown_ _t68;
    intOrPtr _t69;
    intOrPtr _t70;
    _unknown_ _t71;
    signed int _t74;
    _unknown_ _t77;
    intOrPtr* _t81;
    _unknown_ _t83;
    intOrPtr _t84;
    intOrPtr _t85;
    signed int _t86;
    _unknown_ _t91;

    _t67 = __ecx;
    _t84 = __eax;
    _v32 = __edx;
    _v40 = _t67;
    __ebx = equation;
    _t74 =  &(_t67->kind);
    _t49 =  *_v32;
    _v44 = _t49;
    if(_t74 >= _t49) {
L9:
        _v36 = 0;
        goto L10;
    }
    _t91 = _t84 + (_t74 << 4);
    _t70 =  *((intOrPtr*)(_t91 + 4));
    if(__ebx > _t70) {
        goto L9;
    }
    _t61 = (_v40 << 4) + _t84 + 48;
    _v36 = 0;
    _v48 = _t84;
    _t85 = _v44;
    while() {
    }
L10:
    _t86 = _v40;
    _v40 =  &(__ebx->kind);
    while(_t86 <  *_v32) {
        _t54 =  *((intOrPtr*)((_t86 << 4) + _t84 + 4));
        if(__ebx > _t54) {
            return _v36;
        }
        if(__ebx >= _t54) {
            _t55 = _t86 + 1;
        } else {
            _v36 = _v36 | pf_recurse(_v40, np);
            _t55 = _t86 + 1;
            _t69 =  *_v32;
            if(_t69 <= _t55 || __ebx >=  *((intOrPtr*)((_t55 << 4) + _t84 + 4))) {
                goto L19;
            }
            _t81 = _t84 + (_t86 << 4) + 52;
            while(1) {
                _t55 = _t55 + 2;
                if(_t69 <= _t55) {
                    break;
                }
                _t81 = _t81 + 32;
                if(__ebx <  *_t81) {
                    continue;
                }
                goto L19;
            }
        }
L19:
        _t86 = _t55;
    }
}

int poly_factor(token_type* equation, int* np, int do_repeat)
{// addr = 0x080685DE
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t6;

    return pf_recurse(1, do_repeat);
}

int limit_cmd(char* cp)
{// addr = 0x08068610
    int i;
    long int v;
    token_type solved_v;
    token_type want;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    long int _v32;
    intOrPtr _v36;
    struct  _v48;
    struct  _v64;
    int* _v80;
    char[179]* _v104;
    char* _v108;
    int _v112;
    int _v116;
    int* _v120;
    _unknown_ __ebp;
    _unknown_ _t157;
    int _t159;
    signed int _t161;
    struct * _t165;
    int _t169;
    int _t172;
    _unknown_ _t174;
    int _t176;
    _unknown_ _t180;
    int _t185;
    int _t195;
    int _t200;
    int _t204;
    token_type* _t206;
    token_type* _t207;
    int _t220;
    int _t223;
    char* _t225;
    signed int _t227;
    _unknown_ _t234;
    _unknown_ _t236;
    int _t237;
    _unknown_ _t259;
    _unknown_ _t260;
    int* _t261;
    token_type*[99]* _t262;
    token_type*[99]* _t263;
    _unknown_ _t265;
    char* _t266;
    int* _t267;
    token_type*[99]* _t268;
    _unknown_ _t269;
    int[99]* _t271;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _v32 = 0;
    if(current_not_defined() != 0) {
L35:
        _t159 = 0;
        return _t159;
    } else {
        _t237 = next_espace();
        _t161 = cur_equation;
        if( *((intOrPtr*)( &n_rhs + _t161 * 4)) == 0) {
            _t271 =  &n_lhs;
            _v116 =  *(_t271 + _t161 * 4) << 4;
            _t263 =  &lhs;
            _v120 =  *(_t263 + _t161 * 4);
             *__esp =  *( &rhs + _t161 * 4);
            L080491C4();
            _t227 = cur_equation;
             *( &n_rhs + _t227 * 4) =  *(_t271 + _t227 * 4);
             *(_t271 + _t227 * 4) = 1;
             *( *((intOrPtr*)(_t263 + _t227 * 4)) + 4) = 1;
             *((int*)( *(_t263 + cur_equation * 4))) = 1;
            parse_var( &(( *(_t263 + cur_equation * 4))[2]), "answer");
        }
        if(solved_equation(cur_equation) == 0) {
            error("The current equation is not solved for a variable.");
            _t159 = 0;
            return _t159;
        }
        _t165 =  *( &lhs + cur_equation * 4);
        _v48 =  *_t165;
        _v48.level = _t165->level;
        _v48.token =  *((intOrPtr*)(_t165 + 8));
        _v36 =  *((intOrPtr*)(_t165 + 12));
        _t266 = cp;
        __eflags =  *_t266;
        if( *_t266 == 0) {
L7:
            _t169 = no_vars( *( &rhs + cur_equation * 4),  *( &n_rhs + cur_equation * 4),  &_v32);
            __eflags = _t169;
            if(_t169 != 0) {
                error("Current expression contains no variables.");
                _t159 = 0;
                return _t159;
            }
            __eflags = _v32;
            if(_v32 != 0) {
L11:
                _t172 = found_var( *( &rhs + cur_equation * 4),  *( &n_rhs + cur_equation * 4), _v32);
                __eflags = _t172;
                if(_t172 == 0) {
                    error("Variable not found.");
                    _t159 = 0;
                    return _t159;
                }
                __eflags =  *_t266 - 61;
                if( *_t266 == 61) {
                    _t266 = skip_space( &(_t266[1]));
                }
                __eflags =  *_t266;
                if( *_t266 == 0) {
                    list_var(_v32, 0);
                    _v104 =  &var_str;
                    _v108 = "as (%s) goes to: ";
                    _v112 = 80;
                    _v116 = 1;
                    _v120 = 80;
                     *__esp =  &prompt_str;
                    __snprintf_chk();
                    _t176 = get_expr(tes,  &n_tes);
                    __eflags = _t176;
                    if(_t176 == 0) {
                        goto L35;
                    }
                    goto L20;
                }
                input_column = input_column + _t266 - cp;
                _t220 = parse_expr(tes,  &n_tes, _t266);
                __eflags = _t220;
                if(_t220 == 0) {
                    goto L35;
                }
                __eflags = n_tes;
                if(n_tes > 0) {
                    goto L20;
                }
                goto L35;
L20:
                copy_espace(cur_equation, _t237);
                _t260 = 0 + _t237 * 4;
                _t267 = _t260 +  &n_rhs;
                simpa_side( *( &rhs + _t237 * 4), _t267, 0, 0);
                simp_loop(tes,  &n_tes);
                __eflags = n_tes - 1;
                if(n_tes == 1) {
                    _t206 = tes;
                    __eflags = _t206->kind;
                    if(__eflags == 0) {
                        asm("fld qword [eax+0x8]");
                        asm("fld qword [0x8075178]");
                        asm("fxch st0, st1");
                        asm("fucomip st0, st1");
                        asm("fstp st0");
                        if(__eflags > 0) {
                            n_tes = 1;
                             *_t206 = zero_token.kind;
                            _t206->level =  *134715672;
                             *((intOrPtr*)(_t206 + 8)) =  *134715676;
                             *((intOrPtr*)(_t206 + 12)) =  *134715680;
                            _t207 = tlhs;
                             *_t207 = one_token.kind;
                            _t207->level =  *134715048;
                             *((intOrPtr*)(_t207 + 8)) =  *134715052;
                             *((intOrPtr*)(_t207 + 12)) =  *134715056;
                             *(tlhs + 20) = 1;
                             *((intOrPtr*)(tlhs + 16)) = 2;
                             *((intOrPtr*)(tlhs + 24)) = 4;
                             *(tlhs + 36) = 1;
                             *(tlhs + 32) = 1;
                             *(tlhs + 40) = _v32;
                            n_tlhs = 3;
                            subst_var_with_exp( *( &rhs + _t237 * 4), _t267, tlhs, 3, _v32);
                        }
                    }
                }
                __eflags = debug_level;
                if(debug_level < 0) {
                    _v112 = "Solving...";
                    _v116 = 134686589;
                    _v120 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                }
                _v64.level = 1;
                _v64 = 1;
                _v64.token = _v32;
                _t261 = _t260 +  &n_lhs;
                _v80 = _t261;
                _t185 = solve_sub( &_v64, 1,  *( &lhs + _t237 * 4), _t261,  *( &rhs + _t237 * 4), _t267);
                __eflags = _t185;
                if(_t185 > 0) {
                    _v116 = n_tes << 4;
                    _v120 = tes;
                     *__esp =  *( &lhs + _t237 * 4);
                    L080491C4();
                     *( &n_lhs + _t237 * 4) = n_tes;
                    symb_flag = symblify;
                    _v112 = 0;
                    _v116 = 0;
                    _v120 = _t267;
                    _t262 =  &rhs;
                     *__esp =  *(_t262 + _t237 * 4);
                    simpa_side();
                    symb_flag = 0;
                    _t195 = exp_contains_nan( *(_t262 + _t237 * 4),  *( &n_rhs + _t237 * 4));
                    __eflags = _t195;
                    if(_t195 == 0) {
                        _t200 = solve_sub( &_v48, 1,  *( &lhs + _t237 * 4), _v80,  *( &rhs + _t237 * 4), _t267);
                        __eflags = _t200;
                        if(_t200 > 0) {
                            _v112 = 0;
                            _v116 = 0;
                            _v120 = _t267;
                            _t268 =  &rhs;
                             *__esp =  *(_t268 + _t237 * 4);
                            simpa_side();
                            _t204 = exp_contains_nan( *(_t268 + _t237 * 4),  *( &n_rhs + _t237 * 4));
                            __eflags = _t204;
                            if(_t204 == 0) {
                                _t159 = return_result(_t237);
                                return _t159;
                            }
                            goto L33;
                        }
                        goto L31;
L33:
                        error("Unable to take limit; result contains NaN (Not a Number).");
                        _t159 = 0;
                        return _t159;
                    }
                    goto L29;
L31:
                    error("Can't take the limit because solve failed.");
                    _t159 = 0;
                    return _t159;
                } else {
                    error("Can't take the limit because solve failed.");
                    _t159 = 0;
                    return _t159;
                }
L29:
                error("Unable to take limit; result contains NaN (Not a Number).");
                _t159 = 0;
                return _t159;
            }
            _t223 = prompt_var( &_v32);
            __eflags = _t223;
            if(_t223 == 0) {
                goto L35;
            }
            goto L11;
        }
        _t225 = parse_var2( &_v32, _t266);
        _t266 = _t225;
        __eflags = _t225;
        if(_t225 == 0) {
            goto L35;
        }
        goto L7;
    }
    return _t159;
}

int d_recurse(token_type* equation, int* np, int loc, int level, long int v)
{// addr = 0x08068BB6
    int i;
    int j;
    int n;
    int op;
    int oploc;
    int endloc;
    complexs c;
    _unknown_ _v16;
    intOrPtr _v32;
    intOrPtr _v36;
    signed int _v40;
    int* _v44;
    intOrPtr _v48;
    signed int _v56;
    struct complexs _v60;
    int* _v64;
    int* _v68;
    int _v72;
    int* _v76;
    int* _v80;
    int* _v84;
    signed int _v88;
    signed int _v92;
    signed int _v96;
    intOrPtr _v124;
    intOrPtr _v128;
    signed int _v132;
    int* _v136;
    int* _v140;
    signed int __ebx;
    signed int __edi;
    int __esi;
    _unknown_ __ebp;
    int _t371;
    int _t373;
    intOrPtr* _t376;
    signed int _t377;
    _unknown_ _t379;
    signed int _t382;
    int _t393;
    intOrPtr* _t396;
    signed int _t399;
    signed int _t414;
    _unknown_ _t420;
    signed int _t422;
    _unknown_ _t449;
    int* _t462;
    int* _t475;
    int* _t478;
    int* _t481;
    int* _t484;
    int* _t487;
    int* _t490;
    int* _t493;
    _unknown_ _t505;
    int* _t507;
    signed int _t512;
    signed int _t513;
    signed int _t518;
    _unknown_ _t519;
    int _t520;
    int _t521;
    int _t522;
    signed int _t525;
    signed int _t528;
    int _t530;
    int* _t531;
    int* _t533;
    int* _t535;
    union kind_list* _t536;
    _unknown_ _t541;
    int* _t550;
    int _t551;
    _unknown_ _t552;
    _unknown_ _t557;
    intOrPtr* _t562;
    intOrPtr _t563;
    int* _t568;
    int* _t569;
    int _t576;
    union kind_list* _t577;
    _unknown_ _t578;
    int* _t579;
    signed int _t581;
    signed int _t583;
    signed int _t585;
    signed int _t587;
    _unknown_ _t591;
    signed int _t593;
    signed int _t594;
    int _t595;
    int* _t597;
    signed int _t599;
    signed int _t601;
    signed int _t603;
    _unknown_ _t605;
    signed int _t606;
    signed int _t607;
    signed int _t608;
    signed int _t610;
    signed int _t612;
    token_type* _t615;

    _t518 = __ecx;
    _v72 = __eax;
    _v84 = __edx;
    _v68 = _t518;
    _t615 = equation;
    _v92 = _t518;
    _t371 = (_t518 << 4) + _v72;
    _v76 = _t371;
    if( *((intOrPtr*)(_t371 + 4)) >= _t615) {
L7:
        _t512 =  &(_v68[0]);
        _t595 =  *_v84;
        if(_t512 >= _t595) {
L39:
            _t513 = _v68;
            _v68 =  &(_t615->kind);
            _t597 = _v84;
L40:
            while(_t513 <  *_t597) {
                _t376 = (_t513 << 4) + _v72;
                if(_t615 <=  *((intOrPtr*)(_t376 + 4))) {
L29:
                    if( *_t376 == 2) {
                        _t377 = _t513 + 1;
L38:
                        _t513 = _t377;
                        continue;
                    }
                    goto L30;
                }
L85:
                _t373 = 1;
                return _t373;
L30:
                if(d_recurse(_v68, np) == 0) {
L84:
                    _t373 = 0;
                    return _t373;
                }
                _t377 = _t513 + 1;
                _t520 =  *_t597;
                _v76 = _t520;
                if(_t377 >= _t520) {
                    goto L38;
                }
                _t521 = _v72;
                if(_t615 >=  *((intOrPtr*)((_t377 << 4) + _t521 + 4))) {
                    goto L38;
                } else {
                    _t562 = _t521 + (_t513 << 4) + 52;
                    _t522 = _v76;
                    goto L34;
                }
                while(1) {
L34:
                    _t377 = _t377 + 2;
                    if(_t377 >= _t522) {
                        break;
                    }
L35:
                    _t562 = _t562 + 32;
                    if(_t615 <  *_t562) {
                        continue;
                    } else {
                        goto L38;
                    }
                    goto L35;
                }
                goto L38;
            }
        }
        goto L8;
    }
    if( *_t371 != 1) {
L6:
         *_v76 = 0;
        asm("fldz ");
        asm("fstp qword [eax+0x8]");
        _t373 = 1;
        return _t373;
    }
    if(np != 5 || ( *(_t371 + 8) & 16383) <= 4) {
        if(_v76[2] != np) {
            goto L6;
        }
    }
L5:
     *_v76 = 0;
    asm("fld1 ");
    asm("fstp qword [esi+0x8]");
    _t373 = 1;
    return _t373;
    goto L7;
L8:
    _t525 = (_t512 << 4) + _v72;
    _v96 = _t525;
    _t563 =  *((intOrPtr*)(_t525 + 4));
    if(_t615 > _t563) {
        goto L39;
    } else {
        _t382 = (_v68 << 4) + _v72 + 48;
        _v88 = _t382;
        _v80 = _t512;
        _v64 = 0;
        _t528 = _v96;
        goto L10;
        do {
L10:
            if(_t615 == _t563) {
                if(_v64 > 2) {
                    error_bug("Internal error in d_recurse(): differentiating with unparenthesized operators is not allowed.");
                    _t373 = 0;
                    return _t373;
                }
                _v64 =  *(_t528 + 8);
                _v80 = _t512;
            }
            _t512 = _t512 + 2;
            if(_t512 >= _t595) {
                break;
            }
            goto L15;
L17:
            switch( *((intOrPtr*)(_v64 * 4 +  &M08077494))) {
                case 0:
                    if(_v88 < _t512) {
                        _t599 = _v88;
                        _t396 = (_t599 << 4) + _v72;
                        _t569 = _v80;
                        _v64 = _t599;
                        _t533 = np;
                        goto L58;
                        do {
                            goto L58;
L69:
                            _t569 =  &(_t569[0]);
                            _t396 = _t396 + 16;
                        } while(_t512 > _t569);
                        goto L70;
                    } else {
                        _t615 = _t615;
L70:
                        _t399 =  !_v88 + _t512;
                        _v80 = _t399;
                        _v92 = _t399;
                        _t601 = _t399 << 4;
                        _v132 = _t601;
                        _v136 = (_v88 << 4) + _v72 + 16;
                         *__esp = scratch;
                        L080491C4();
                         *(scratch + _t601 + 4) = _t615;
                         *(scratch + _t601) = 2;
                         *(scratch + _t601 + 8) = 3;
                        _t535 =  &(_v80[0]);
                        _v64 = _t535;
                        _t603 = _t512 - _v68;
                        if( &(_t535[0]) + _t603 > n_tokens) {
                            error_huge();
                        }
                        _v132 = _t603 << 4;
                        _v136 = _v76;
                         *__esp = scratch + (_v64 << 4);
                        L080491C4();
                        _t581 = _v64;
                        _t605 = _t581 + _v88 - _v68 + 1;
                        _t414 = _t581;
                        if(_t581 >= _t605) {
L76:
                            _t606 = _t605 + _v80;
                            if(_t414 >= _t606) {
L79:
                                _t583 = _t606 << 4;
                                _t536 =  &(_t615->kind);
                                 *(scratch + _t583 + 4) = _t536;
                                 *(scratch + _t583) = 2;
                                 *(scratch + _t583 + 8) = 2;
                                _t585 = _t606 + 1 << 4;
                                 *(scratch + _t585 + 4) = _t536;
                                 *(scratch + _t585) = 0;
                                asm("fld1 ");
                                asm("fstp qword [edx+eax+0x8]");
                                _t607 = _t606 + 2;
                                _t422 = _v88 - _v68;
                                _v88 = _t422;
                                if(_t422 + _t607 + 1 > n_tokens) {
                                    error_huge();
                                }
                                _t587 = _t607 << 4;
                                 *(scratch + _t587 + 4) = _t615;
                                 *(scratch + _t587) = 2;
                                 *(scratch + _t587 + 8) = 3;
                                _t608 = _t607 + 1;
                                _v64 = _t608;
                                _v132 = _v88 << 4;
                                _v136 = _v76;
                                 *__esp = scratch + (_t608 << 4);
                                L080491C4();
                                _t610 = _v64 + _v88;
                                if(_v68 +  *_v84 - _t512 + _t610 > n_tokens) {
                                    error_huge();
                                }
                                _v80 = _v68 + _t610;
                                _v132 =  *_v84 - _t512 << 4;
                                _v136 = (_t512 << 4) + _v72;
                                 *__esp = (_v80 << 4) + _v72;
                                L080491C4();
                                 *_v84 =  *_v84 + _v80 - _t512;
                                _v132 = _t610 << 4;
                                _v136 = scratch;
                                 *__esp = _v76;
                                L080491C4();
                                _v136 = np;
                                 *__esp =  &(_t615->kind);
                                _t373 = d_recurse();
                                return _t373;
                            }
                        } else {
                            _t594 = _t581 << 4;
                            while(1) {
L74:
                                 *((intOrPtr*)(scratch + _t594 + 4)) =  *((intOrPtr*)(scratch + _t594 + 4)) + 1;
                                _t414 = _t414 + 1;
                                _t594 = _t594 + 16;
                                if(_t605 <= _t414) {
                                    break;
                                }
                            }
                            _t414 = _v64 + _t605 - _v92 - 1;
                            goto L76;
                        }
L77:
                        _t593 = _t414 << 4;
                        while(1) {
L78:
                             *((intOrPtr*)(scratch + _t593 + 4)) =  *((intOrPtr*)(scratch + _t593 + 4)) + 2;
                            _t414 = _t414 + 1;
                            _t593 = _t593 + 16;
                            if(_t606 <= _t414) {
                                break;
                            }
                        }
                        goto L79;
                    }
L58:
                    if( *_t396 != 1) {
                        goto L69;
                    }
                    if(_t533 != 5 || ( *(_t396 + 8) & 16383) <= 4) {
                        if( *(_t396 + 8) != _t533) {
                            goto L69;
                        }
                    }
L62:
                    _t612 = _v64;
                    if(parse_complex(_v76, _v88 - _v68,  &_v44) == 0) {
                        goto L84;
                    }
                    _v136 = _v44;
                    _v132 = _v40;
                    _v128 = _v36;
                    _v124 = _v32;
                     *__esp =  &_v60;
                    complex_log();
                    __esp = __esp - 4;
                    _v44 = _v60;
                    _v40 = _v56;
                    _v36 = _v60.im;
                    _v32 = _v48;
                    _t462 = _t512 + 6 - _v88;
                    _v80 = _t462;
                    if(_t462 +  *_v84 > n_tokens) {
                        error_huge();
                    }
                    _v64 = (_t512 << 4) + _v72;
                    _v136 =  *_v84 - _t512 << 4;
                    _v140 = _v64;
                     *__esp = (_v80 + _t512 << 4) + _v72;
                    L080491C4();
                     *_v84 = _v80 +  *_v84;
                    _t475 = _v64;
                    _t475[1] = _t615;
                     *_t475 = 2;
                    _t475[2] = 3;
                    _t576 = _v72;
                    _t478 = (_t512 << 4) + _t576 + 16;
                    _t550 =  &(_t615->kind);
                    _v64 = _t550;
                    _t478[1] = _t550;
                     *_t478 = 0;
                    asm("fld qword [ebp-0x28]");
                    asm("fstp qword [eax+0x8]");
                    _t481 = (_t512 << 4) + _t576 + 32;
                    _t481[1] = _t550;
                     *_t481 = 2;
                    _t481[2] = 1;
                    _t484 = (_t512 << 4) + _t576 + 48;
                    _t577 =  &(_t615->kind);
                    _t484[1] = _t577;
                     *_t484 = 0;
                    asm("fld qword [ebp-0x20]");
                    asm("fstp qword [eax+0x8]");
                    _t551 = _v72;
                    _t487 = (_t512 << 4) + _t551 + 64;
                    _t487[1] = _t577;
                     *_t487 = 2;
                    _t487[2] = 3;
                    _t490 = (_t512 << 4) + _t551 + 80;
                    _t490[1] = _t577;
                     *_t490 = 1;
                    _t490[2] = 3;
                    _t493 = (_t512 << 4) + _t551 + 96;
                    _t493[1] = _t615;
                     *_t493 = 2;
                    _t493[2] = 3;
                    _v136 =  !_v88 + _t512 << 4;
                    _v140 = (_t612 << 4) + _t551 + 16;
                     *__esp = (_t512 + 7 << 4) + _t551;
                    L080491C4();
                    if(_v68 >= _t512) {
L68:
                        _t373 = d_recurse(_v64, np);
                        return _t373;
                    } else {
                        _t507 =  &(_v76[1]);
                        _t579 = _v68;
                        while(1) {
L67:
                             *_t507 =  *_t507 + 1;
                            _t579 =  &(_t579[0]);
                            _t507 =  &(_t507[4]);
                            if(_t512 <= _t579) {
                                break;
                            }
                        }
                        goto L68;
                    }
                    goto L69;
                case 1:
L20:
                    if(_v68 >= _t512) {
L28:
                        _v132 = _t595 - _t512 << 4;
                        _v136 = (_t512 << 4) + _v72;
                         *__esp = (_v92 << 4) + _v72 + 16;
                        L080491C4();
                         *_v84 = _v68 - _t512 +  *_v84 + 1;
                        _t530 = _v76;
                         *(_t530 + 4) = _t615;
                         *_t530 = 0;
                        asm("fldz ");
                        asm("fstp qword [ecx+0x8]");
                        _t373 = 1;
                        return _t373;
                    } else {
                        _t393 = _v76;
                        _t568 = _v68;
                        _v80 = _t615;
                        _t531 = np;
                        goto L22;
                        do {
L26:
                            _t568 =  &(_t568[0]);
                            _t393 = _t393 + 32;
                            if(_t568 < _t512) {
L22:
                                if( *_t393 != 1) {
                                    continue;
                                }
                                if(_t531 != 5 || ( *(_t393 + 8) & 16383) <= 4) {
                                    if( *(_t393 + 8) == _t531) {
                                        goto L84;
                                    }
                                    continue;
                                }
                                goto L84;
                            } else {
                                _t615 = _v80;
                            }
                            goto L28;
                        } while();
                        goto L28;
                    }
                    goto L29;
                case 2:
                    goto L39;
                case 3:
                    __eax = __ebx;
                    __eax = __ebx - _v68;
                    _v64 = __eax;
                    if(__eax > n_tokens) {
                        error_huge();
                    }
                    if(_v68 >= __ebx) {
L48:
                        __edx = _v84;
                         *_v84 =  *_v84 - _v68;
                        __eax =  *_v84 - _v68 << 4;
                        _v132 =  *_v84 - _v68 << 4;
                        __ecx = _v76;
                        _v136 = _v76;
                        __ebx = __ebx << 4;
                        __edx = _v72;
                        __eax = (__ebx << 4) + _v72 + 16;
                         *__esp = (__ebx << 4) + _v72 + 16;
                        L080491C4();
                        __ecx = _v84;
                        __eax =  *__ecx;
                        __edx = _v64;
                        __eax = _v64 +  &(( *__ecx)[0]);
                         *__ecx = _v64 +  &(( *__ecx)[0]);
                        __ebx = __ebx << 4;
                        __eax = (__ebx << 4) + _v72;
                        (__eax)[1] = __esi;
                         *__eax = 2;
                        (__eax)[2] = 1;
                        __esi = __esi + 2;
                        _v88 = _v88 - _v68;
                        __ecx = __ebx + _v88 - _v68 + 2;
                        __ebx = np;
                        _v136 = __ebx;
                         *__esp = __esi;
                        __edx = _v84;
                        _v72 = d_recurse();
                        if(_v72 == 0) {
                            goto L84;
                        }
                    } else {
                        __eax = _v76;
                        __eax =  &(_v76[1]);
                        __edx = _v68;
                        while(1) {
L47:
                             *__eax =  *__eax + 1;
                            __edx =  &((__edx)[0]);
                            __eax =  &((__eax)[4]);
                            if(__edx >= __ebx) {
                                break;
                            }
                        }
                        goto L48;
                    }
L49:
                    _v136 = __ebx;
                     *__esp = __esi;
                    __ecx = _v68;
                    __edx = _v84;
                    _v72 = d_recurse();
                    return _t373;
                case 4:
                    __eax = __ebx;
                    __eax = __ebx - _v68;
                    _v64 = __eax;
                    __edx = __ebx;
                    __edx = __ebx - _v88;
                    _v80 = __edx;
                    __eax =  &((__eax)[0]) + __edi;
                    if(__eax > n_tokens) {
                        error_huge();
                    }
                    if(_v68 >= __ebx) {
L55:
                        _v88 = _v88 << 4;
                        __ecx = _v72;
                         *((_v88 << 4) + _v72 + 8) = 3;
                        __edi = _v64;
                        __edi =  &(_v64[0]);
                        __edx = _v84;
                         *_v84 =  *_v84 - _v68;
                        __eax =  *_v84 - _v68 << 4;
                        _v132 =  *_v84 - _v68 << 4;
                        __ecx = _v76;
                        _v136 = _v76;
                        __ebx = __ebx << 4;
                        __edx = _v72;
                        __eax = (__ebx << 4) + _v72 + 16;
                         *__esp = (__ebx << 4) + _v72 + 16;
                        L080491C4();
                        __ecx = _v84;
                         *__ecx =  *__ecx + __edi;
                        __ebx = __ebx << 4;
                        __eax = (__ebx << 4) + _v72;
                        __edx = __esi + 1;
                        _v76 = __edx;
                        (__eax)[1] = __edx;
                         *__eax = 2;
                        (__eax)[2] = 2;
                        __edi = __edi + __ebx;
                        _v64 = __edi;
                        __edi = __edi << 4;
                        __edi = __edi + _v72;
                         *__ecx =  *__ecx - _v64;
                        __eax =  *__ecx - _v64 << 4;
                        _v132 =  *__ecx - _v64 << 4;
                        _v136 = __edi;
                        __edx = _v64;
                        __ecx = _v80;
                        __edx + __ecx + 2 = __edx + __ecx + 2 << 4;
                        __eax = (__edx + __ecx + 2 << 4) + _v72;
                         *__esp = (__edx + __ecx + 2 << 4) + _v72;
                        L080491C4();
                        __ecx = _v84;
                        __eax =  *__ecx;
                        __edx = _v80;
                        __eax = _v80 +  &(( *__ecx)[0]);
                         *__ecx = _v80 +  &(( *__ecx)[0]);
                         *(__edi + 4) = __esi;
                         *__edi = 2;
                         *((intOrPtr*)(__edi + 8)) = 4;
                        _v88 =  !_v88;
                         !_v88 + __ebx =  !_v88 + __ebx << 4;
                        _v132 =  !_v88 + __ebx << 4;
                        _v88 = _v88 << 4;
                        __ecx = _v72;
                        __eax = (_v88 << 4) + __ecx + 16;
                        _v136 = (_v88 << 4) + __ecx + 16;
                        _v64 = _v64 << 4;
                        __eax = (_v64 << 4) + __ecx + 16;
                         *__esp = (_v64 << 4) + __ecx + 16;
                        L080491C4();
                        __edx = _v64;
                        __edx = _v64 + _v80;
                        __edx = __edx << 4;
                        __eax = (__edx << 4) + _v72;
                        __ecx = _v76;
                        (__eax)[1] = __ecx;
                         *__eax = 2;
                        (__eax)[2] = 6;
                        __eax = __edx;
                        __eax = __edx << 4;
                        __edx = _v72;
                        __eax = __eax + _v72 + 16;
                        (__eax)[1] = __ecx;
                         *__eax = 0;
                        asm("fld dword [0x8072058]");
                        asm("fstp qword [eax+0x8]");
                        __esi = __esi + 3;
                        _v88 = _v88 - _v68;
                        __ecx = __ebx + _v88 - _v68 + 2;
                        __eax = np;
                        _v136 = np;
                         *__esp = __esi;
                        __edx = _v84;
                        _v72 = d_recurse();
                        if(_v72 == 0) {
                            goto L84;
                        }
                    } else {
                        __eax = _v76;
                        __eax = _v76 + 4;
                        __edx = _v68;
                        while(1) {
L54:
                             *__eax =  *__eax + 2;
                            __edx =  &((__edx)[0]);
                            __eax =  &((__eax)[4]);
                            if(__edx >= __ebx) {
                                break;
                            }
                        }
                        goto L55;
                    }
L56:
                    __edx = np;
                    _v136 = np;
                     *__esp = __esi;
                    __ecx = _v68;
                    __edx = _v84;
                    _v72 = d_recurse();
                    return _t373;
            }
L15:
            _t528 = _t382;
            _t563 =  *((intOrPtr*)(_t382 + 4));
            _t382 = _t382 + 32;
        } while(_t615 <= _t563);
        _v88 = _v80;
        if(_v64 > 6) {
            goto L20;
        }
        goto L17;
    }
    goto L40;
}

int differentiate(token_type* equation, int* np, long int v)
{// addr = 0x080694F5
    int i;
    _unknown_ _v36;
    _unknown_ _v40;
    token_type* __ebx;
    int* __edi;
    token_type* __esi;
    _unknown_ __ebp;
    int _t10;
    _unknown_ _t12;
    _unknown_ _t14;

    __esi = equation;
    __edi = np;
    organize(__esi, __edi);
    _t10 =  *__edi;
    if(_t10 <= 1) {
        return d_recurse(1, v);
    }
    __ebx = 1;
    while(1) {
    }
}

int taylor_cmd(char* cp)
{// addr = 0x0806956A
    long int v;
    int i;
    int j;
    int k;
    int i1;
    int level;
    long int l1;
    long int n;
    long int order;
    double d;
    char* cp_start;
    char* cp1;
    char[4095] buf;
    int our;
    int our_nlhs;
    int our_nrhs;
    token_type* ep;
    token_type* source;
    token_type* dest;
    int n1;
    int* nps;
    int* np;
    int simplify_flag;
    intOrPtr _v32;
    char _v4128;
    long int _v4132;
    intOrPtr _v4136;
    char _v4140;
    int _v4144;
    signed int _v4148;
    char* _v4160;
    _unknown_ _v4164;
    token_type* _v4168;
    int _v4172;
    signed int _v4176;
    _unknown_ _v4180;
    signed int _v4184;
    _unknown_ _v4188;
    char _v4192;
    char _v4196;
    intOrPtr _v4200;
    _unknown_ _v4220;
    _unknown_ _v4224;
    char[179]* _v4228;
    token_type* _v4232;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    char* _t299;
    int _t301;
    int _t303;
    token_type*[99]* _t307;
    int _t311;
    signed int _t312;
    signed int _t315;
    _unknown_ _t318;
    char _t321;
    char _t329;
    char* _t330;
    _unknown_ _t332;
    _unknown_ _t333;
    char _t336;
    signed int _t337;
    signed int _t341;
    _unknown_ _t343;
    _unknown_ _t350;
    _unknown_ _t351;
    _unknown_ _t352;
    _unknown_ _t354;
    _unknown_ _t357;
    _unknown_ _t359;
    _unknown_ _t361;
    _unknown_ _t367;
    _unknown_ _t377;
    _unknown_ _t380;
    _unknown_ _t384;
    _unknown_ _t387;
    _unknown_ _t390;
    _unknown_ _t406;
    _unknown_ _t407;
    char* _t409;
    char* _t417;
    int _t419;
    char _t421;
    char* _t422;
    char* _t425;
    char _t428;
    signed int _t429;
    int[99]* _t432;
    signed int* _t433;
    _unknown_ _t435;
    _unknown_ _t436;
    _unknown_ _t438;
    _unknown_ _t439;
    signed int _t442;
    _unknown_ _t446;
    _unknown_ _t448;
    _unknown_ _t449;
    _unknown_ _t451;
    _unknown_ _t454;
    _unknown_ _t456;
    _unknown_ _t464;
    _unknown_ _t466;
    signed int _t467;
    signed int _t469;
    token_type*[99]* _t470;
    _unknown_ _t476;
    _unknown_ _t480;
    _unknown_ _t482;
    _unknown_ _t483;
    _unknown_ _t485;
    _unknown_ _t492;
    _unknown_ _t493;
    _unknown_ _t496;
    _unknown_ _t497;
    _unknown_ _t502;
    token_type*[99]* _t505;
    token_type* _t508;
    _unknown_ _t509;
    int _t511;
    _unknown_ _t512;
    _unknown_ _t515;
    _unknown_ _t516;
    int _t519;

    _t299 = cp;
    _v4160 = _t299;
    _v32 =  *gs:0x14];
    _v4132 = 0;
    _v4172 = _t299;
    if(current_not_defined() != 0) {
L88:
        _t301 = 0;
        goto L89;
    }
    _t303 = strcmp_tospace(_v4160, "nosimplify");
    _v4192 = 1;
    if(_t303 == 0) {
        _v4160 = skip_param(_v4160);
        _v4192 = 0;
    }
    _v4184 = next_espace();
    _t467 = cur_equation;
    _t432 =  &n_lhs;
    _v4228 =  *(_t432 + _t467 * 4) << 4;
    _t307 =  &lhs;
    _v4232 =  *(_t307 + _t467 * 4);
     *__esp =  *(_t307 + _v4184 * 4);
    L080491C4();
    _t469 = _v4184;
     *((intOrPtr*)(_t432 + _t469 * 4)) =  *((intOrPtr*)(_t432 + cur_equation * 4));
     *( &n_rhs + _t469 * 4) = 0;
    _t311 = alloc_next_espace();
    _v4176 = _t311;
     *(_t432 + _v4184 * 4) = 0;
    _t519 = _t311;
    if(_t519 >= 0) {
        _t312 = cur_equation;
        __eflags =  *( &n_rhs + _t312 * 4);
        if( *( &n_rhs + _t312 * 4) == 0) {
            _t470 =  &lhs;
            _t508 =  *(_t470 + _t312 * 4);
            _t433 =  &n_lhs + _t312 * 4;
            _t442 = _v4184;
            _v4168 =  *(_t470 + _t442 * 4);
            _v4200 =  &n_lhs + _t442 * 4;
        } else {
            _t505 =  &rhs;
            _t508 =  *(_t505 + _t312 * 4);
            _t433 =  &n_rhs + _t312 * 4;
            _t429 = _v4184;
            _v4168 =  *(_t505 + _t429 * 4);
            _v4200 =  &n_rhs + _t429 * 4;
        }
        _t315 =  *_v4160 & 255;
        __eflags = _t315 & 4294967295;
        if((_t315 & 4294967295) == 0) {
L16:
            _v4196 = -1;
        } else {
            _t421 = isvarchar(_t315 & 4294967295);
            __eflags = _t421;
            if(_t421 == 0) {
L11:
                _t422 = _v4160;
                __eflags =  *_t422;
                if( *_t422 == 0) {
                    goto L16;
                }
                goto L12;
            }
            _t428 = parse_var2( &_v4132, _v4160);
            _v4160 = _t428;
            __eflags = _t428;
            if(_t428 == 0) {
                goto L88;
            }
            goto L11;
L12:
            _v4196 = decstrtol(_t422,  &_v4136);
            _t425 = skip_param(_v4160);
            __eflags = _t425 - _v4136;
            if(_t425 != _v4136) {
L14:
                error("Positive integer required for order.");
                _t301 = 0;
                goto L89;
            }
            __eflags = _v4196;
            if(_v4196 >= 0) {
                _v4160 = _t425;
                goto L17;
            }
            goto L14;
        }
L17:
        no_vars(_t508,  *_t433,  &_v4132);
        __eflags = _v4132;
        if(_v4132 != 0) {
L19:
            _t321 = found_var(_t508,  *_t433, _v4132);
            __eflags = _t321;
            if(_t321 == 0) {
                warning("Variable not found.");
            }
            _v4228 =  *_t433 << 4;
            _v4232 = _t508;
            _t511 =  &rhs;
             *__esp =  *(_t511 + _v4176 * 4);
            L080491C4();
            _v4144 =  *_t433;
            uf_simp( *(_t511 + _v4176 * 4),  &_v4144);
            _t329 = differentiate( *(_t511 + _v4176 * 4),  &_v4144, _v4132);
            __eflags = _t329;
            if(_t329 != 0) {
                _t330 = _v4160;
                __eflags =  *_t330;
                if( *_t330 == 0) {
                    list_var(_v4132, 0);
                    _v4228 =  &var_str;
                    _v4232 = "Taylor series expansion around %s = point.\n";
                     *__esp = 1;
                    __printf_chk();
                    my_strlcpy( &prompt_str, "Enter point: ", 80);
                    _t336 = get_expr( *( &lhs + _v4176 * 4),  &_v4140);
                    __eflags = _t336;
                    if(_t336 == 0) {
                        goto L88;
                    }
                    goto L28;
                }
                goto L24;
L28:
                __eflags = _v4196;
                if(_v4196 >= 0) {
L35:
                    _v4232 = "Computing the Taylor series";
                     *__esp = 1;
                    __printf_chk();
                    _t337 = cur_equation;
                    __eflags =  *( &n_rhs + _t337 * 4);
                    if( *( &n_rhs + _t337 * 4) != 0) {
                        _v4232 = " of the RHS";
                         *__esp = 1;
                        __printf_chk();
                    }
                    __eflags = _v4192;
                    if(_v4192 != 0) {
                        _v4232 = " and simplifying";
                         *__esp = 1;
                        __printf_chk();
                    }
                    _v4232 = 134699596;
                     *__esp = 1;
                    __printf_chk();
                    _v4228 =  *_t433 << 4;
                    _v4232 = _t508;
                     *__esp = _v4168;
                    L080491C4();
                    _v4148 =  *_t433;
                    _v4172 = 0;
                    _t511 = 0;
                    while(1) {
                        _t341 = _v4148;
                        __eflags = _t511 - _t341;
                        if(_t511 >= _t341) {
                            goto L52;
                        } else {
                            goto L41;
                        }
                    }
                }
L29:
                my_strlcpy( &prompt_str, "Enter order (number of derivatives to take): ", 80);
                _t409 = get_string( &_v4128, 4096);
                _v4136 = _t409;
                __eflags = _t409;
                if(_t409 == 0) {
                    goto L88;
                }
                __eflags =  *_t409;
                if( *_t409 == 0) {
L34:
                    _v4232 = "Derivatives will be taken until they reach zero...\n";
                     *__esp = 1;
                    __printf_chk();
                    _v4196 = 2147483646;
                    goto L35;
                }
                _v4196 = decstrtol(_t409,  &_v4160);
                __eflags =  *_v4160;
                if( *_v4160 != 0) {
L33:
                    error("Positive integer required for order.");
                    _t301 = 0;
                    goto L89;
                }
                __eflags = _v4196;
                if(_v4196 >= 0) {
                    goto L35;
                }
                goto L33;
            } else {
                error("Differentiation failed.");
                _t301 = 0;
                goto L89;
            }
L24:
            input_column =  &(_t330[input_column]) - _v4172;
            _t417 = parse_expr( *( &lhs + _v4176 * 4),  &_v4140, _v4160);
            _v4160 = _t417;
            __eflags = _t417;
            if(_t417 == 0) {
                goto L88;
            }
            __eflags = _v4140;
            if(_v4140 > 0) {
                goto L28;
            }
            goto L88;
        }
        _t419 = prompt_var( &_v4132);
        __eflags = _t419;
        if(_t419 == 0) {
            goto L88;
        }
        goto L19;
    }
    error("Out of free equation spaces.");
    _t301 = 0;
L89:
    if(_t519 == 0) {
        return _t301;
    }
    __stack_chk_fail();
    return _t301;
}

int extrema_cmd(char* cp)
{// addr = 0x08069FF8
    int i;
    long int v;
    long int l1;
    long int order;
    token_type want;
    token_type* source;
    int n;
    long int _v32;
    int _v36;
    struct  _v52;
    long int _v64;
    _unknown_ _v88;
    _unknown_ _v92;
    _unknown_ _v96;
    signed int _v100;
    token_type* _v104;
    signed int __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t95;
    _unknown_ _t97;
    int _t99;
    signed int _t102;
    token_type* _t117;
    _unknown_ _t119;
    _unknown_ _t127;
    _unknown_ _t128;
    _unknown_ _t134;
    _unknown_ _t135;
    _unknown_ _t138;
    char* _t141;
    _unknown_ _t144;
    char* _t147;
    signed int _t149;
    _unknown_ _t151;
    token_type*[99]* _t157;
    token_type* _t160;
    int* _t161;
    token_type*[99]* _t162;

    _v32 = 0;
    if(current_not_defined() != 0) {
        return 0;
    }
    __ebx = next_espace();
    _t99 = cur_equation;
    if( *((intOrPtr*)( &n_rhs + _t99 * 4)) == 0) {
        _t160 =  *( &lhs + _t99 * 4);
        _v36 =  *( &n_lhs + _t99 * 4);
    } else {
        if(solved_equation(_t99) == 0) {
            error("The current equation is not solved for a variable.");
            return 0;
        }
        _t149 = cur_equation;
        _t160 =  *( &rhs + _t149 * 4);
        _v36 =  *( &n_rhs + _t149 * 4);
    }
    _t102 =  *cp & 255;
    if((_t102 & 4294967295) == 0) {
L13:
        _v64 = 1;
    } else {
        if(isvarchar(_t102 & 4294967295) != 0) {
            _t147 = parse_var2( &_v32, cp);
            cp = _t147;
            if(_t147 == 0) {
                return 0;
            }
        }
        _t141 = cp;
        if( *_t141 == 0) {
            goto L13;
        } else {
            _v64 = decstrtol(_t141,  &cp);
            if( *cp != 0 || _v64 <= 0) {
                error("The order must be a positive integer.");
                return 0;
            }
        }
    }
L14:
    if(no_vars(_t160, _v36,  &_v32) == 0) {
        if(_v32 == 0) {
            if(prompt_var( &_v32) == 0) {
                return 0;
            }
        }
        if(found_var(_t160, _v36, _v32) != 0) {
            _v100 = _v36 << 4;
            _v104 = _t160;
             *__esp =  *( &rhs + __ebx * 4);
            L080491C4();
            if(_v64 <= 0) {
L25:
                if(found_var( *( &rhs + __ebx * 4), _v36, _v32) != 0) {
                     *( &n_rhs + __ebx * 4) = _v36;
                     *( &n_lhs + __ebx * 4) = 1;
                    _t157 =  &lhs;
                    _t117 =  *(_t157 + __ebx * 4);
                     *_t117 = zero_token.kind;
                    _t117->level =  *134715672;
                     *((intOrPtr*)(_t117 + 8)) =  *134715676;
                     *((intOrPtr*)(_t117 + 12)) =  *134715680;
                    cur_equation = __ebx;
                    _v52.level = 1;
                    _v52 = 1;
                    _v52.token = _v32;
                    _t119 = 0 + __ebx * 4;
                    _t161 = _t119 +  &n_rhs;
                    if(solve_sub( &_v52, 1,  *(_t157 + __ebx * 4), _t119 +  &n_lhs,  *( &rhs + __ebx * 4), _t161) > 0) {
                        simpa_side( *( &rhs + __ebx * 4), _t161, 0, 0);
                        return return_result(cur_equation);
                    }
                    goto L28;
                }
                goto L26;
L28:
                error("Solve failed.");
                return 0;
            }
            goto L21;
L26:
            error("There are no solutions.");
            return 0;
        } else {
            error("Variable not found; the derivative would be zero.");
            return 0;
        }
L21:
        __edi = 0;
        _t162 =  &rhs;
        while(differentiate( *(_t162 + __ebx * 4),  &_v36, _v32) != 0) {
            simpa_side( *(_t162 + __ebx * 4),  &_v36, 1, 0);
            __edi = __edi + 1;
            if(_v64 > __edi) {
                continue;
            }
            goto L25;
        }
    }
    error("Current expression contains no variables.");
    return 0;
}

int derivative_cmd(char* cp)
{// addr = 0x0806A31A
    int i;
    int len;
    long int v;
    long int l1;
    long int order;
    token_type* source;
    token_type* dest;
    int n1;
    int* nps;
    int* np;
    int simplify_flag;
    int solved;
    long int _v32;
    char _v36;
    signed int _v48;
    int _v52;
    signed int _v56;
    int _v60;
    signed int* _v64;
    _unknown_ _v80;
    signed int _v84;
    token_type* _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    token_type* __esi;
    _unknown_ __ebp;
    _unknown_ _t119;
    _unknown_ _t121;
    int _t125;
    token_type*[99]* _t127;
    char* _t128;
    long int _t132;
    signed int _t137;
    int _t146;
    _unknown_ _t149;
    _unknown_ _t152;
    _unknown_ _t154;
    _unknown_ _t158;
    _unknown_ _t161;
    char* _t166;
    _unknown_ _t169;
    char* _t172;
    token_type*[99]* _t175;
    signed int* _t178;
    int[99]* _t179;
    long int _t180;
    int _t181;
    int _t183;
    int* _t186;
    signed int _t189;
    signed int _t190;
    token_type*[99]* _t194;
    int _t197;
    signed int _t199;
    signed int _t200;
    token_type* _t201;
    int* _t202;

    _v32 = 0;
    if(current_not_defined() != 0) {
        return 0;
    }
    _v60 = solved_equation(cur_equation);
    _t125 = strcmp_tospace(cp, "nosimplify");
    _v52 = 1;
    if(_t125 == 0) {
        cp = skip_param(cp);
        _v52 = 0;
    }
    _v56 = next_espace();
    _t189 = cur_equation;
    if( *((intOrPtr*)( &n_rhs + _t189 * 4)) == 0) {
        _t127 =  &lhs;
        _t201 =  *(_t127 + _t189 * 4);
        _t178 =  &n_lhs + _t189 * 4;
        _t190 = _v56;
        __esi =  *(_t127 + _t190 * 4);
        _v64 =  &n_lhs + _t190 * 4;
    } else {
        if(_v60 == 0) {
            warning("Not a solved equation.  Only the RHS will be differentiated.");
        }
        _t199 = cur_equation;
        _t175 =  &rhs;
        _t201 =  *(_t175 + _t199 * 4);
        _t178 =  &n_rhs + _t199 * 4;
        _t200 = _v56;
        __esi =  *(_t175 + _t200 * 4);
        _v64 =  &n_rhs + _t200 * 4;
    }
    _t128 = cp;
    if( *_t128 == 0) {
L17:
        _v48 = 1;
        goto L18;
    }
    if(is_all(_t128) == 0) {
        if(isvarchar( *cp) != 0) {
            _t172 = parse_var2( &_v32, cp);
            cp = _t172;
            if(_t172 == 0) {
                return 0;
            }
        }
    } else {
        cp = skip_param(cp);
        _v32 = 5;
    }
    _t166 = cp;
    if( *_t166 == 0) {
        goto L17;
    }
    _v48 = decstrtol(_t166,  &cp);
    if( *cp != 0 || _v48 <= 0) {
        error("The order must be a positive integer.");
        return 0;
    }
L18:
    if(no_vars(_t201,  *_t178,  &_v32) == 0) {
        if(_v32 == 0) {
            if(prompt_var( &_v32) == 0) {
                return 0;
            }
        }
        _t132 = _v32;
        if(_t132 == 5 || found_var(_t201,  *_t178, _t132) != 0) {
            if(debug_level < 0) {
                list_var(_v32, 0);
                if( *((intOrPtr*)( &n_rhs + cur_equation * 4)) == 0) {
                    _v84 =  &var_str;
                    _v88 = "Differentiating with respect to (%s)";
                     *__esp = 1;
                    __printf_chk();
                } else {
                    _v84 =  &var_str;
                    _v88 = "Differentiating the RHS with respect to (%s)";
                     *__esp = 1;
                    __printf_chk();
                }
                if(_v48 != 1) {
                    _v84 = _v48;
                    _v88 = " %ld times";
                     *__esp = 1;
                    __printf_chk();
                }
                if(_v52 == 0) {
                    _v88 = 134699596;
                     *__esp = 1;
                    __printf_chk();
                } else {
                    _v88 = " and simplifying...\n";
                     *__esp = 1;
                    __printf_chk();
                }
            }
            _v84 =  *_t178 << 4;
            _v88 = _t201;
             *__esp = __esi;
            L080491C4();
            _v36 =  *_t178;
            if(_v48 <= 0) {
L42:
                 *_v64 = _v36;
                _t137 = cur_equation;
                if( *((intOrPtr*)( &n_rhs + _t137 * 4)) == 0) {
L51:
                    _t183 = _v56;
                    cur_equation = _t183;
                    return return_result(_t183);
                }
                goto L43;
L52:
                return 0;
            } else {
                _t181 = 0;
                _t202 =  &_v36;
                while(differentiate(__esi, _t202, _v32) != 0) {
                    if(_v52 == 0) {
                        elim_loop(__esi, _t202);
                    } else {
                        simpa_side(__esi, _t202, 1, 0);
                    }
                    _t181 = _t181 + 1;
                    if(_v48 > _t181) {
                        continue;
                    }
                    goto L42;
                }
            }
L43:
            _t179 =  &n_lhs;
            _v84 =  *(_t179 + _t137 * 4) << 4;
            _t194 =  &lhs;
            _v88 =  *(_t194 + _t137 * 4);
             *__esp =  *(_t194 + _v56 * 4);
            L080491C4();
             *((intOrPtr*)(_t179 + _v56 * 4)) =  *((intOrPtr*)(_t179 + cur_equation * 4));
            if(_v60 != 0 && isvarchar(39) != 0) {
                _t146 = list_var( *( *((intOrPtr*)( &lhs + _v56 * 4)) + 8), 0);
                if(_v48 <= 0 || _t146 > 98) {
L50:
                     *( &var_str + _t146) = 0;
                    parse_var( *((intOrPtr*)( &lhs + _v56 * 4)) + 8,  &var_str);
                } else {
                    _t186 =  &var_str + _t146;
                    _t197 = 0;
                    _t180 = _v48;
                    while(1) {
L48:
                         *_t186 = 39;
                        _t146 = _t146 + 1;
                        _t197 = _t197 + 1;
                        _t186 =  &(_t186[0]);
                        if(_t180 <= _t197 || _t146 > 98) {
                            break;
                        }
                    }
                    goto L50;
                }
            }
            goto L51;
        }
        error("Variable not found; the derivative would be zero.");
        return 0;
    }
    error("Current expression contains no variables; the derivative would be zero.");
    return 0;
}

int nintegrate_cmd(char* cp)
{// addr = 0x0806A750
    long int v;
    int i;
    int j;
    int k;
    int i2;
    int len;
    int level;
    int iterations;
    int first_size;
    int trap_flag;
    int singularity;
    int solved;
    token_type* ep;
    token_type* source;
    token_type* dest;
    int n1;
    int* nps;
    int* np;
    int _v32;
    int _v36;
    signed int _v52;
    signed int _v56;
    long int _v60;
    int _v64;
    int _v68;
    int _v72;
    int* _v76;
    signed int _v80;
    signed int _v84;
    token_type* _v88;
    signed int _v92;
    token_type* _v96;
    int _v100;
    int* _v104;
    signed int _v116;
    token_type* _v120;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t301;
    _unknown_ _t303;
    signed int _t307;
    signed int _t311;
    char* _t312;
    _unknown_ _t315;
    _unknown_ _t319;
    _unknown_ _t323;
    _unknown_ _t327;
    _unknown_ _t336;
    _unknown_ _t338;
    signed int _t352;
    _unknown_ _t355;
    _unknown_ _t357;
    int* _t367;
    int* _t368;
    int* _t369;
    int _t377;
    _unknown_ _t379;
    signed int _t381;
    int _t382;
    int _t391;
    _unknown_ _t394;
    _unknown_ _t395;
    intOrPtr* _t398;
    token_type* _t399;
    int _t409;
    _unknown_ _t411;
    int _t415;
    _unknown_ _t418;
    _unknown_ _t419;
    _unknown_ _t421;
    int* _t425;
    int* _t426;
    signed int _t444;
    intOrPtr* _t453;
    token_type* _t454;
    signed int _t456;
    signed int _t457;
    _unknown_ _t458;
    _unknown_ _t459;
    int _t464;
    char* _t466;
    _unknown_ _t469;
    signed int _t473;
    char* _t474;
    signed int _t477;
    signed int _t479;
    int* _t480;
    int[99]* _t481;
    signed int _t484;
    token_type* _t485;
    int* _t487;
    signed int _t488;
    intOrPtr _t491;
    signed int _t494;
    int _t497;
    int _t499;
    signed int _t505;
    int* _t507;
    signed int _t511;
    int* _t516;
    int* _t517;
    int _t518;
    _unknown_ _t519;
    token_type*[99]* _t522;
    int _t525;
    int _t532;
    _unknown_ _t543;
    token_type* _t544;
    token_type*[99]* _t548;
    int _t551;
    int _t555;
    int _t557;
    intOrPtr* _t558;
    int _t562;
    int _t565;
    _unknown_ _t567;
    int _t573;
    token_type*[99]* _t575;
    token_type* _t577;
    int _t578;
    intOrPtr _t579;
    token_type* _t582;
    int _t583;
    int* _t584;
    int _t586;
    int _t587;

    _v32 = 0;
    if(current_not_defined() != 0) {
        return 0;
    }
    _v100 = solved_equation(cur_equation);
    _v80 = next_espace();
    _t307 = cur_equation;
    if( *( &n_rhs + _t307 * 4) == 0) {
        _t522 =  &lhs;
        _v88 =  *(_t522 + _t307 * 4);
        _v76 =  &n_lhs + _t307 * 4;
        _t473 = _v80;
        _v96 =  *(_t522 + _t473 * 4);
        _v104 =  &n_lhs + _t473 * 4;
    } else {
        _t575 =  &rhs;
        _v88 =  *(_t575 + _t307 * 4);
        _v76 =  &n_rhs + _t307 * 4;
        _t494 = _v80;
        _v96 =  *(_t575 + _t494 * 4);
        _v104 =  &n_rhs + _t494 * 4;
    }
    _t474 = cp;
    _t311 = strncasecmp(_t474, 134706352, 4) & 4294967295 & ;
    _v84 = _t311;
    if(_t311 != 0) {
        cp = skip_param(_t474);
    }
    _t312 = cp;
    if( *_t312 == 0) {
        if(prompt_var( &_v32) == 0) {
            return 0;
        }
L14:
        _v92 = 1000;
        goto L15;
    }
    _t466 = parse_var2( &_v32, _t312);
    cp = _t466;
    if(_t466 == 0) {
        return 0;
    }
    if( *_t466 == 0) {
        goto L14;
    } else {
        _v92 = decstrtol(_t466,  &cp);
        if( *cp != 0 || _v92 <= 0 || (_v92 & 1) != 0) {
            error("Number of partitions must be a positive, even integer.");
            return 0;
        } else {
            goto L15;
        }
    }
L15:
    _t497 =  *_v76;
    _v64 = _t497;
    if(_t497 <= 1) {
L30:
        my_strlcpy( &prompt_str, "Enter lower bound: ", 80);
        if(get_expr(tlhs,  &n_tlhs) == 0) {
            return 0;
        }
        subst_constants(tlhs,  &n_tlhs);
        if(exp_contains_infinity(tlhs, n_tlhs) == 0) {
            my_strlcpy( &prompt_str, "Enter upper bound: ", 80);
            if(get_expr(trhs,  &n_trhs) == 0) {
                return 0;
            }
            subst_constants(trhs,  &n_trhs);
            if(exp_contains_infinity(trhs, n_trhs) == 0) {
                if(n_tlhs + n_trhs + 3 > n_tokens) {
                    error_huge();
                }
                if( *((intOrPtr*)( &n_rhs + cur_equation * 4)) == 0) {
                    _v120 = "Approximating the definite integral\n";
                     *__esp = 1;
                    __printf_chk();
                } else {
                    _v120 = "Approximating the definite integral of the RHS\n";
                     *__esp = 1;
                    __printf_chk();
                }
                if(_v84 == 0) {
                    _v116 = _v92;
                    _v120 = "using Simpson's rule (%d partitions)...\n";
                     *__esp = 1;
                    __printf_chk();
                } else {
                    _v116 = _v92;
                    _v120 = "using the trapezoid method (%d partitions)...\n";
                     *__esp = 1;
                    __printf_chk();
                }
                subst_constants(_v88, _v76);
                simp_loop(_v88, _v76);
                _t525 = n_trhs;
                if(_t525 <= 0) {
L47:
                     *( &(trhs->level) + (_t525 << 4)) = 2;
                     *(trhs + (n_trhs << 4)) = 2;
                     *((n_trhs << 4) + trhs + 8) = 2;
                    _t477 = n_trhs + 1;
                    n_trhs = _t477;
                    _v116 = n_tlhs << 4;
                    _v120 = tlhs;
                     *__esp = trhs + (_t477 << 4);
                    L080491C4();
                    _t532 = n_trhs + n_tlhs;
                    n_trhs = _t532;
                    if(_t477 >= _t532) {
L50:
                         *( &(trhs->level) + (_t532 << 4)) = 1;
                         *(trhs + (n_trhs << 4)) = 2;
                         *((n_trhs << 4) + trhs + 8) = 4;
                        _t352 = n_trhs + 1;
                        n_trhs = _t352;
                         *( &(trhs->level) + (_t352 << 4)) = 1;
                         *(trhs + (n_trhs << 4)) = 0;
                        asm("fild dword [ebp-0x58]");
                        asm("fstp qword [edx+eax+0x8]");
                        n_trhs = n_trhs + 1;
                        simp_loop(trhs,  &n_trhs);
                        _t544 = _v96;
                         *_t544 = zero_token.kind;
                        _t544->level =  *134715672;
                         *((intOrPtr*)(_t544 + 8)) =  *134715676;
                         *((intOrPtr*)(_t544 + 12)) =  *134715680;
                        _v36 = 1;
                        if(_v92 >= 0) {
L91:
                            if(_v36 + n_trhs + 3 > n_tokens) {
                                error_huge();
                            }
                            _t499 = _v36;
                            if(_t499 <= 0) {
L96:
                                _t367 = _v96 + (_t499 << 4);
                                _t367[1] = 1;
                                 *_t367 = 2;
                                _t367[2] = 4;
                                _t368 =  &(_t367[4]);
                                _t368[1] = 1;
                                 *_t368 = 0;
                                if(_v84 == 0) {
                                    asm("fld dword [0x807205c]");
                                    asm("fstp qword [eax+0x8]");
                                } else {
                                    asm("fld dword [0x8072058]");
                                    asm("fstp qword [eax+0x8]");
                                }
                                _t369 =  &(_t368[4]);
                                _t369[1] = 1;
                                 *_t369 = 2;
                                _t369[2] = 3;
                                _t479 = _v36 + 3;
                                _v36 = _t479;
                                _v116 = n_trhs << 4;
                                _v120 = trhs;
                                 *__esp = _v96 + (_t479 << 4);
                                L080491C4();
                                _t377 = n_trhs + _v36;
                                _v36 = _t377;
                                if(_t479 >= _t377) {
L102:
                                    approximate_roots = 1;
                                    _t480 =  &_v36;
                                    elim_loop(_v96, _t480);
                                    ufactor(_v96, _t480);
                                    simp_divide(_v96, _t480);
                                    approximate_roots = 0;
                                    _v120 = "Numerical integration successful:\n";
                                     *__esp = 1;
                                    __printf_chk();
                                     *_v104 = _v36;
                                    _t381 = cur_equation;
                                    if( *((intOrPtr*)( &n_rhs + _t381 * 4)) != 0) {
                                        _t481 =  &n_lhs;
                                        _v116 =  *(_t481 + _t381 * 4) << 4;
                                        _t548 =  &lhs;
                                        _v120 =  *(_t548 + _t381 * 4);
                                         *__esp =  *(_t548 + _v80 * 4);
                                        L080491C4();
                                         *((intOrPtr*)(_t481 + _v80 * 4)) =  *((intOrPtr*)(_t481 + cur_equation * 4));
                                        if(_v100 != 0 && isvarchar(39) != 0) {
                                            _t391 = list_var( *( *((intOrPtr*)( &lhs + _v80 * 4)) + 8), 0);
                                            if(_t391 > 0) {
                                                _t395 = _t391 - 1;
                                                if( *(_t395 +  &var_str) == 39) {
                                                     *(_t395 +  &var_str) = 0;
                                                }
                                            }
                                            parse_var( *((intOrPtr*)( &lhs + _v80 * 4)) + 8,  &var_str);
                                        }
                                    }
                                    _t382 = _v80;
                                    cur_equation = _t382;
                                    return return_result(_t382);
                                }
                                _t398 = _v96 + (_t479 << 4) + 4;
                                while(1) {
L101:
                                     *_t398 =  *_t398 + 1;
                                    _t479 = _t479 + 1;
                                    _t398 = _t398 + 16;
                                    if(_v36 <= _t479) {
                                        break;
                                    }
                                }
                                goto L102;
                            }
                            _t399 = _v96;
                            _t551 = 0;
                            while(1) {
L95:
                                _t399->level = _t399->level + 1;
                                _t551 = _t551 + 1;
                                _t499 = _v36;
                                _t399 = _t399 + 16;
                                if(_t499 <= _t551) {
                                    break;
                                }
                            }
                            goto L96;
                        }
                        goto L51;
                    }
                    goto L48;
L51:
                    _v68 = 0;
                    _v56 = 0;
                    _v60 = _t544;
                    _t577 = _v96;
                    goto L52;
                    do {
L52:
                        if(_v36 + 1 +  *_v76 > n_tokens) {
                            error_huge();
                        }
                        _t505 = _v36;
                        if(_t505 <= 0) {
L57:
                            _t507 = _t577 + (_t505 << 4);
                            _t507[1] = 1;
                             *_t507 = 2;
                            _t507[2] = 1;
                            _t484 = _v36 + 1;
                            _v36 = _t484;
                            _v116 =  *_v76 << 4;
                            _v120 = _v88;
                             *__esp = _t577 + (_t484 << 4);
                            L080491C4();
                            _t409 = _v36 +  *_v76;
                            _v36 = _t409;
                            if(_t484 >= _t409) {
L73:
                                if(_v56 > 0 && _v56 < _v92) {
                                    if(_t409 + 2 > n_tokens) {
                                        error_huge();
                                    }
                                    _t425 = _t577 + (_v36 << 4);
                                    _t425[1] = 2;
                                     *_t425 = 2;
                                    _t425[2] = 3;
                                    _t426 =  &(_t425[4]);
                                    _t426[1] = 2;
                                     *_t426 = 0;
                                    if(_v84 == 0) {
                                        if((_v56 & 1) == 0) {
                                            asm("fld dword [0x8072058]");
                                            asm("fstp qword [eax+0x8]");
                                        } else {
                                            asm("fld dword [0x8072774]");
                                            asm("fstp qword [eax+0x8]");
                                        }
                                    } else {
                                        asm("fld dword [0x8072058]");
                                        asm("fstp qword [eax+0x8]");
                                    }
                                    _v36 = _v36 + 2;
                                }
                                approximate_roots = 1;
                                elim_loop(_v60,  &_v36);
                                _v120 =  &_v36;
                                _t485 = _v60;
                                 *__esp = _t485;
                                ufactor();
                                simp_divide(_t485,  &_v36);
                                approximate_roots = 0;
                                if(exp_contains_infinity(_t485, _v36) == 0) {
                                    if(_v56 == 0) {
                                        goto L90;
                                    }
                                } else {
                                    error("Integration failed because result contains infinity or NaN (a singularity).");
                                    return 0;
                                }
L86:
                                if(_v56 != 1) {
                                    _t415 = _v36;
                                    _t416 = _t415 >= 0 ? _t415 + 7 : _t415;
                                    _t417 = (_t415 >= 0 ? _t415 + 7 : _t415) >> 3;
                                    __eflags = _v68 - (_t415 >= 0 ? _t415 + 7 : _t415) >> 3;
                                    if(_v68 > (_t415 >= 0 ? _t415 + 7 : _t415) >> 3) {
                                        goto L90;
                                    }
                                    goto L89;
                                }
                                _t557 = _v36;
                                _t420 = _t557 - 3 > 0 ? _t557 : 4;
                                _v68 = _t557 - 3 > 0 ? _t557 : 4;
                                goto L90;
L89:
                                error("Integration failed.");
                                return 0;
                            }
                        } else {
                            _t454 = _v60;
                            _t555 = 0;
                            while(1) {
L56:
                                _t454->level = _t454->level + 1;
                                _t555 = _t555 + 1;
                                _t505 = _v36;
                                _t454 = _t454 + 16;
                                if(_t505 <= _t555) {
                                    break;
                                }
                            }
                            goto L57;
                        }
L58:
                        _t558 = _t577 + (_t484 << 4) + 4;
                        _t511 = _t484;
                        while(1) {
L59:
                             *_t558 =  *_t558 + 2;
                            _t511 = _t511 + 1;
                            _t409 = _v36;
                            _t558 = _t558 + 16;
                            if(_t409 <= _t511) {
                                break;
                            }
                        }
                        if(_t484 >= _t409) {
                            goto L73;
                        } else {
                            goto L61;
                        }
                        do {
L61:
                            _v52 = _t484;
                            _t582 = _t577 + (_t484 << 4);
                            if(_t582->kind != 1 ||  *((intOrPtr*)(_t582 + 8)) != _v32) {
                                goto L72;
                            } else {
                                _v72 = _t582->level;
                                _t562 = n_tlhs + n_trhs + 2;
                                _v64 = _t562;
                                if(_t409 + _t562 > n_tokens) {
                                    error_huge();
                                }
                                _v116 =  !_t484 + _v36 << 4;
                                _v120 = (_v52 << 4) + _t577 + 16;
                                 *__esp = _t577 + (_v64 + _t484 + 1 << 4);
                                L080491C4();
                                _v36 = _v36 + _v64;
                                _v116 = n_tlhs << 4;
                                _v120 = tlhs;
                                 *__esp = _t582;
                                L080491C4();
                                _t444 = _t484 + n_tlhs;
                                _t565 = _v72 + 1;
                                if(_t484 >= _t444) {
L68:
                                    _t516 = _t577 + (_t444 << 4);
                                    _t516[1] = _t565;
                                     *_t516 = 2;
                                    _t516[2] = 1;
                                    _t487 =  &(_t516[4]);
                                    _t583 = _t565 + 1;
                                    _t487[1] = _t583;
                                     *_t487 = 0;
                                    asm("fild dword [ebp-0x34]");
                                    asm("fstp qword [ebx+0x8]");
                                    _t517 =  &(_t516[8]);
                                    _t517[1] = _t583;
                                     *_t517 = 2;
                                    _t517[2] = 3;
                                    _t488 = _t444 + 3;
                                    _v116 = n_trhs << 4;
                                    _v120 = trhs;
                                     *__esp = _t577 + (_t488 << 4);
                                    L080491C4();
                                    _t567 = _t488 + n_trhs;
                                    if(_t488 >= _t567) {
L71:
                                        _t484 = _t567 - 1;
                                        goto L72;
                                    }
                                } else {
                                    _t584 =  &(_t582->level);
                                    while(1) {
L67:
                                         *_t584 =  *_t584 + _t565;
                                        _t484 = _t484 + 1;
                                        _t584 =  &(_t584[4]);
                                        if(_t444 <= _t484) {
                                            break;
                                        }
                                    }
                                    goto L68;
                                }
L69:
                                _t453 = _t577 + (_t488 << 4) + 4;
                                while(1) {
L70:
                                     *_t453 =  *_t453 + _t583;
                                    _t488 = _t488 + 1;
                                    _t453 = _t453 + 16;
                                    if(_t567 <= _t488) {
                                        break;
                                    }
                                }
                                goto L71;
                            }
                            goto L73;
L72:
                            _t484 = _t484 + 2;
                            _t409 = _v36;
                        } while(_t409 > _t484);
                        goto L73;
L90:
                        _v56 = _v56 + 1;
                    } while(_v92 >= _v56);
                    goto L91;
                } else {
                    _t457 = 0;
                    while(1) {
L46:
                         *((intOrPtr*)(trhs + (_t457 << 4) + 4)) =  *((intOrPtr*)(trhs + (_t457 << 4) + 4)) + 2;
                        _t457 = _t457 + 1;
                        _t525 = n_trhs;
                        if(_t525 <= _t457) {
                            break;
                        }
                    }
                    goto L47;
                }
L48:
                _t456 = _t477 << 4;
                while(1) {
L49:
                     *((intOrPtr*)(trhs + _t456 + 4)) =  *((intOrPtr*)(trhs + _t456 + 4)) + 2;
                    _t477 = _t477 + 1;
                    _t532 = n_trhs;
                    _t456 = _t456 + 16;
                    if(_t532 <= _t477) {
                        break;
                    }
                }
                goto L50;
            }
            error("Error: Bound contains infinity.");
            return 0;
        }
        error("Error: Bound contains infinity.");
        return 0;
    } else {
        _v60 = _v32;
        _t586 = _v88 + 32;
        _v56 = (_t497 - 2 >> 1) + (_t497 - 2 >> 1) + 4;
        _t578 = 2;
        _v52 = 0;
        goto L17;
    }
    do {
L17:
        if( *((intOrPtr*)(_t586 - 8)) != 4) {
            goto L27;
        }
        _t573 = _t578;
        if(_t578 >= _v64) {
            goto L27;
        }
        _t518 = _t586;
        _t491 =  *((intOrPtr*)(_t586 - 12));
        if( *((intOrPtr*)(_t586 + 4)) >= _t491) {
            _t464 = _t586 + 16;
            _v68 = _t586;
            _t587 = _v64;
            _v72 = _t578;
            _t579 = _t491;
            goto L21;
            do {
L21:
                if( *_t518 == 1) {
                    _t520 =  *((intOrPtr*)(_t518 + 8)) != _v60 ? _v52 : 1;
                    _v52 =  *((intOrPtr*)(_t518 + 8)) != _v60 ? _v52 : 1;
                }
                _t573 = _t573 + 1;
                if(_t573 >= _t587) {
                    _t586 = _v68;
                    _t578 = _v72;
                    goto L27;
                }
                goto L24;
L24:
                _t518 = _t464;
                _t464 = _t464 + 16;
            } while( *((intOrPtr*)(_t464 + 4)) >= _t579);
            _t586 = _v68;
            _t578 = _v72;
        }
        goto L27;
L27:
        _t578 = _t578 + 2;
        _t586 = _t586 + 32;
    } while(_t578 != _v56);
    if(_v52 != 0) {
        warning("Singularity detected, result of numerical integration might be wrong.");
    }
    goto L30;
}

make_powers(token_type* equation, int* np, long int v)
{// addr = 0x0806B21F
    int i;
    int level;
    signed int _v32;
    signed int _v52;
    intOrPtr* _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t35;
    intOrPtr* _t44;
    intOrPtr* _t47;
    intOrPtr* _t50;
    intOrPtr _t55;
    signed int _t56;
    signed int _t58;
    int _t60;
    signed int* _t65;
    signed int _t66;
    int* _t67;
    token_type* _t70;
    signed int _t71;
    signed int _t72;

    _t35 = 0;
    while(1) {
        _t60 =  *np;
        if(_t35 >= _t60) {
            break;
        }
        _t66 = _t35;
        _t47 = equation + (_t35 << 4);
        _t71 =  *(_t47 + 4);
        _t55 =  *_t47;
        if(_t55 != 2 ||  *((intOrPtr*)(_t47 + 8)) != 6) {
            if(_t55 == 1 &&  *((intOrPtr*)(_t47 + 8)) == v) {
                _t58 = _t35 + 1;
                _v32 = _t58;
                if(_t60 <= _t58 ||  *((intOrPtr*)((_t66 + 1 << 4) + equation + 8)) != 6) {
                    if(_t60 + 2 > n_tokens) {
                        error_huge();
                    }
                    _t72 = _t71 + 1;
                     *(_t47 + 4) = _t72;
                    _t50 = equation + (_v32 << 4);
                    _t67 = np;
                    _v52 =  *_t67 - _v32 << 4;
                    _v56 = _t50;
                     *__esp = (_v32 << 4) + equation + 32;
                    L080491C4();
                     *_t67 =  *_t67 + 2;
                     *(_t50 + 4) = _t72;
                     *_t50 = 2;
                     *((intOrPtr*)(_t50 + 8)) = 6;
                    _t35 = _v32 + 1;
                    _t65 = equation + (_t35 << 4);
                    _t65[1] = _t72;
                     *_t65 = 0;
                    asm("fld1 ");
                    asm("fstp qword [edx+0x8]");
                }
            }
            _t56 = _t35 + 1;
L17:
            _t35 = _t56;
            continue;
        }
        _t56 = _t35 + 2;
        if(_t60 <= _t56) {
            goto L17;
        }
        _t70 = equation;
        if(_t71 >  *((intOrPtr*)( &(_t70->level) + (_t56 << 4)))) {
            goto L17;
        } else {
            _t44 = _t70 + (_t35 << 4) + 68;
            goto L6;
        }
        while(1) {
L6:
            _t56 = _t56 + 2;
            if(_t60 <= _t56) {
                break;
            }
L7:
            _t44 = _t44 + 32;
            if(_t71 <=  *_t44) {
                continue;
            } else {
                goto L17;
            }
            goto L7;
        }
        goto L17;
    }
    return;
}

int int_dispatch(token_type* equation, int* np, long int v, _None* func)
{// addr = 0x0806B348
    int i;
    int j;
    long int _v44;
    signed int _v48;
    signed int _v52;
    int* _v56;
    int* __ebx;
    _unknown_ __edi;
    token_type* __esi;
    _unknown_ __ebp;
    signed int _t29;
    _unknown_ _t30;
    signed int _t31;
    _unknown_ _t32;
    _unknown_ _t35;
    intOrPtr* _t42;
    signed int _t43;

    __esi = equation;
    __ebx = np;
    make_powers(__esi, __ebx, v);
    _t43 = 0;
    _t29 = 1;
    if( *__ebx > 1) {
        goto L2;
        do {
L2:
            _t35 = __esi + (_t29 << 4);
            if( *((intOrPtr*)(_t35 + 4)) != 1 ||  *((intOrPtr*)(_t35 + 8)) - 1 > 1) {
                goto L13;
            } else {
                _v44 = v;
                _v48 = _t29;
                _v52 = _t43;
                _v56 = __ebx;
                 *__esp = __esi;
                func();
                if(_t29 == 0) {
                    return ;
                }
                _t31 = _t43 + 1;
                __ecx =  *__ebx;
                if(_t31 >= __ecx) {
                    return ;
                }
                if( *((intOrPtr*)( &(__esi->level) + (_t31 << 4))) != 1) {
                    _t42 = __esi + (_t43 << 4) + 52;
                    while(1) {
L11:
                        _t31 = _t31 + 2;
                        if(_t31 >= __ecx) {
                            break;
                        }
                        _t42 = _t42 + 32;
                        if( *_t42 != 1) {
                            continue;
                        }
                        goto L9;
                    }
                    return ;
                } else {
L9:
                    _t43 = _t31 + 1;
                    goto L13;
                }
                goto L11;
            }
            break;
L13:
            _t29 = _t29 + 2;
        } while( *__ebx > _t29);
        __esi = __esi;
    }
    _v44 = v;
    _v48 = _t29;
    _v52 = _t43;
    _v56 = __ebx;
     *__esp = __esi;
    func();
    return;
}

int laplace_cmd(char* cp)
{// addr = 0x0806B429
    int i;
    long int v;
    int inverse_flag;
    token_type* source;
    token_type* dest;
    int n1;
    int* nps;
    int* np;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    long int _v32;
    int _v36;
    signed int _v48;
    token_type* _v52;
    token_type* _v56;
    int* _v60;
    _unknown_ _v64;
    signed int _v68;
    token_type* _v72;
    _unknown_ __ebp;
    _unknown_ _t93;
    int _t95;
    signed int _t97;
    signed int _t100;
    int _t108;
    _unknown_ _t115;
    signed int _t116;
    char* _t128;
    char* _t132;
    _unknown_ _t133;
    int[99]* _t134;
    token_type*[99]* _t140;
    token_type*[99]* _t149;
    token_type*[99]* _t151;
    _unknown_ _t154;
    int* _t155;
    _unknown_ _t157;
    int _t158;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t132 = cp;
    _v32 = 0;
    if(current_not_defined() != 0) {
L21:
        _t95 = 0;
        return _t95;
    } else {
        _t158 = next_espace();
        _t97 = cur_equation;
        if( *( &n_rhs + _t97 * 4) == 0) {
            _t140 =  &lhs;
            _v52 =  *(_t140 + _t97 * 4);
            _t155 =  &n_lhs + _t97 * 4;
            _v56 =  *(_t140 + _t158 * 4);
            _v60 =  &n_lhs + _t158 * 4;
        } else {
            _t151 =  &rhs;
            _v52 =  *(_t151 + _t97 * 4);
            _t155 =  &n_rhs + _t97 * 4;
            _v56 =  *(_t151 + _t158 * 4);
            _v60 =  &n_rhs + _t158 * 4;
        }
        _t100 = strcmp_tospace(_t132, "inverse") & 4294967295 & ;
        _v48 = _t100;
        if(_t100 != 0) {
            _t132 = skip_param(_t132);
        }
        if( *_t132 == 0) {
            if(prompt_var( &_v32) == 0) {
                goto L21;
            }
        } else {
            _t128 = parse_var2( &_v32, _t132);
            _t132 = _t128;
            if(_t128 != 0) {
                goto L10;
            }
            goto L21;
L11:
            partial_flag = 0;
            uf_simp(_v52, _t155);
            partial_flag = 1;
            factorv(_v52, _t155, _v32);
            _v68 =  *_t155 << 4;
            _v72 = _v52;
             *__esp = _v56;
            L080491C4();
            _t108 =  *_t155;
            _v36 = _t108;
            if(_v48 == 0) {
L15:
                if(poly_in_v(_v56, _t108, _v32, 0) == 0 || int_dispatch(_v56,  &_v36, _v32, laplace_sub) == 0) {
                    error("Laplace failed, not a polynomial.");
                    _t95 = 0;
                    return _t95;
                }
                goto L18;
            }
            if(poly_in_v(_v56, _t108, _v32, 1) == 0 || int_dispatch(_v56,  &_v36, _v32, inv_laplace_sub) == 0) {
                error("Inverse Laplace failed.");
                _t95 = 0;
                return _t95;
            } else {
L18:
                simp_loop(_v56,  &_v36);
                _t116 = cur_equation;
                if( *((intOrPtr*)( &n_rhs + _t116 * 4)) != 0) {
                    _t134 =  &n_lhs;
                    _v68 =  *(_t134 + _t116 * 4) << 4;
                    _t149 =  &lhs;
                    _v72 =  *(_t149 + _t116 * 4);
                     *__esp =  *(_t149 + _t158 * 4);
                    L080491C4();
                     *((intOrPtr*)(_t134 + _t158 * 4)) =  *((intOrPtr*)(_t134 + cur_equation * 4));
                }
                 *_v60 = _v36;
                cur_equation = _t158;
                _t95 = return_result(_t158);
                return _t95;
            }
            goto L15;
        }
L10:
        if(extra_characters(_t132) != 0) {
            goto L21;
        }
        goto L11;
    }
}

int laplace_sub(token_type* equation, int* np, int loc, int eloc, long int v)
{// addr = 0x0806B6A8
    int i;
    int j;
    int k;
    int len;
    int level;
    int mlevel;
    token_type* _v32;
    int _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    signed int _v68;
    intOrPtr* _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int* _t130;
    _unknown_ _t131;
    int* _t133;
    token_type* _t134;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t153;
    _unknown_ _t156;
    _unknown_ _t159;
    _unknown_ _t160;
    _unknown_ _t179;
    _unknown_ _t180;
    _unknown_ _t181;
    _unknown_ _t182;
    _unknown_ _t185;
    signed int _t186;
    intOrPtr* _t189;
    _unknown_ _t192;
    _unknown_ _t193;
    _unknown_ _t194;
    _unknown_ _t197;
    _unknown_ _t205;
    _unknown_ _t210;
    signed int _t214;
    _unknown_ _t215;
    _unknown_ _t216;
    _unknown_ _t220;
    _unknown_ _t221;
    _unknown_ _t223;
    _unknown_ _t225;
    _unknown_ _t226;
    _unknown_ _t227;
    long int _t229;
    _unknown_ _t230;
    _unknown_ _t231;
    _unknown_ _t236;
    signed int _t237;
    _unknown_ _t239;

    _t186 = loc;
    _t237 = eloc;
    _t229 = v;
    _v32 = equation + (_t186 << 4);
    _v36 = min_level(_v32, _t237 - _t186) + 1;
    if(_t237 <= _t186) {
L23:
        if( *np + 2 > n_tokens) {
            error_huge();
        }
        _t189 = equation + (_t237 << 4);
        _v68 =  *np - _t237 << 4;
        _v72 = _t189;
         *__esp = (_t237 << 4) + equation + 32;
        L080491C4();
         *np =  *np + 2;
         *(_t189 + 4) = _v36;
         *_t189 = 2;
         *((intOrPtr*)(_t189 + 8)) = 4;
        _t130 = (_t237 << 4) + equation + 16;
        _t130[1] = _v36;
         *_t130 = 1;
        _t130[2] = _t229;
        return 1;
    }
    _t133 =  &(_v32->level);
    _t214 = _t186;
    while(1) {
L2:
         *_t133 =  *_t133 + 2;
        _t214 = _t214 + 1;
        _t133 =  &(_t133[4]);
        if(_t237 <= _t214) {
            break;
        }
    }
    _t134 = _v32;
    while(_t134->kind != 1 ||  *((intOrPtr*)(_t134 + 8)) != _t229) {
        _t186 = _t186 + 2;
        _t134 = _t134 + 32;
        if(_t237 > _t186) {
            continue;
        }
        goto L23;
    }
}

int inv_laplace_sub(token_type* equation, int* np, int loc, int eloc, long int v)
{// addr = 0x0806B9BB
    int i;
    int j;
    int k;
    int len;
    int level;
    int mlevel;
    token_type* _v32;
    int _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t94;
    int* _t96;
    token_type* _t97;
    _unknown_ _t98;
    _unknown_ _t99;
    _unknown_ _t119;
    _unknown_ _t135;
    _unknown_ _t136;
    _unknown_ _t137;
    _unknown_ _t138;
    int _t140;
    _unknown_ _t141;
    _unknown_ _t142;
    _unknown_ _t144;
    _unknown_ _t150;
    _unknown_ _t155;
    signed int _t156;
    signed int _t157;
    _unknown_ _t159;
    _unknown_ _t161;
    _unknown_ _t162;
    _unknown_ _t168;
    _unknown_ _t170;
    signed int _t171;
    _unknown_ _t173;
    _unknown_ _t174;
    _unknown_ _t175;
    long int _t176;
    _unknown_ _t179;
    _unknown_ _t180;
    _unknown_ _t184;
    _unknown_ _t187;

    _t171 = loc;
    _t140 = eloc;
    _t176 = v;
    _v32 = equation + (_t171 << 4);
    _v36 = min_level(_v32, _t140 - _t171);
    if(_t140 <= _t171) {
        return 0;
    }
    _t96 =  &(_v32->level);
    _t156 = _t171;
    while(1) {
         *_t96 =  *_t96 + 2;
        _t156 = _t156 + 1;
        _t96 =  &(_t96[4]);
        if(_t140 > _t156) {
            continue;
        } else {
            _t97 = _v32;
            _t157 = _t171;
            goto L4;
        }
    }
}

int integrate_sub(token_type* equation, int* np, int loc, int eloc, long int v)
{// addr = 0x0806BC22
    int i;
    int j;
    int k;
    int len;
    int level;
    int vlevel;
    int mlevel;
    int count;
    int div_flag;
    _unknown_ _v32;
    signed int _v36;
    intOrPtr* _v40;
    token_type* _v44;
    int _v48;
    intOrPtr _v52;
    int _v56;
    intOrPtr* _v60;
    signed int _v64;
    intOrPtr _v68;
    token_type* _v72;
    intOrPtr _v76;
    token_type* _v80;
    signed int _v100;
    intOrPtr* _v104;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    int* _t203;
    _unknown_ _t204;
    token_type* _t205;
    int* _t209;
    _unknown_ _t210;
    _unknown_ _t211;
    _unknown_ _t214;
    _unknown_ _t227;
    _unknown_ _t239;
    _unknown_ _t240;
    _unknown_ _t244;
    _unknown_ _t256;
    _unknown_ _t259;
    _unknown_ _t263;
    _unknown_ _t265;
    int _t266;
    signed int _t267;
    signed int _t273;
    intOrPtr* _t275;
    intOrPtr _t276;
    _unknown_ _t281;
    _unknown_ _t286;
    _unknown_ _t291;
    signed int _t295;
    int _t296;
    long int _t297;
    _unknown_ _t298;
    _unknown_ _t299;
    _unknown_ _t304;
    _unknown_ _t309;
    _unknown_ _t312;
    _unknown_ _t313;
    _unknown_ _t315;
    token_type* _t320;
    token_type* _t321;
    _unknown_ _t324;
    _unknown_ _t325;
    _unknown_ _t326;
    _unknown_ _t328;
    _unknown_ _t330;
    _unknown_ _t332;
    int _t333;
    signed int _t335;
    signed int _t336;
    intOrPtr* _t339;
    intOrPtr* _t350;
    int _t351;
    _unknown_ _t352;
    _unknown_ _t356;
    _unknown_ _t359;
    _unknown_ _t387;

    _t267 = eloc;
    _t336 = loc;
    _v44 = equation + (_t336 << 4);
    _v48 = min_level(_v44, _t267 - _t336);
    if(_t267 <= loc) {
        _v36 = _v48 + 1;
        goto L54;
    } else {
        _t320 = _v44;
        _v40 = equation + (_t336 << 4) + 24;
        _t273 = loc + 1;
        _v36 = _t273;
        _t295 = _t273;
        _t205 = _t320;
        _v52 = 0;
        _v68 = _v48 + 1;
        _v60 = equation + (_t273 << 4) + 4;
        _v64 = _t295;
        _v72 = _t320;
        _t275 = _v40;
        goto L2;
        do {
            _t205 = _t205 + 32;
            _t275 = _t275 + 32;
            _t295 = _t295 + 2;
            if(_t267 > _t295 - 1) {
L2:
                if(_t205->kind != 1 ||  *((intOrPtr*)(_t205 + 8)) != v) {
                    continue;
                } else {
                    _v52 = _v52 + 1;
                    if(_v52 > 1) {
                        return 0;
                    }
                    _t333 = _t205->level;
                    _v56 = _t333;
                    if(_v48 != _t333) {
                        if(_v68 != _t333) {
                            return 0;
                        }
                    }
                    if(_t267 <= _v36) {
L16:
                        if(_v68 == _v56) {
                            if(_t267 <= _t295) {
                                return 0;
                            }
                            if(_v68 !=  *((intOrPtr*)(_t275 - 4))) {
                                return 0;
                            }
                            asm("o16 nop ");
                            if( *_t275 != 6) {
                                return 0;
                            }
                        }
                        continue;
                    } else {
                        _t350 = _v60;
                        _t335 = _v64;
                        _v76 = _t275;
                        _v80 = _t205;
                        _t266 = _v48;
                        goto L9;
                        do {
                            _t335 = _t335 + 2;
                            _t350 = _t350 + 32;
                            if(_t267 > _t335) {
L9:
                                if(_t266 ==  *_t350) {
                                    _t276 =  *((intOrPtr*)(_t350 + 4));
                                    if(_t276 < 3) {
                                        return 0;
                                    }
                                    if(_t276 > 4) {
                                        if(_t276 != 6) {
                                            return 0;
                                        }
                                        if(_t335 != _t295) {
                                            return 0;
                                        }
                                    }
                                }
                                continue;
                            } else {
                                _t275 = _v76;
                                _t205 = _v80;
                            }
                            goto L16;
                        } while();
                        goto L16;
                    }
                }
            } else {
                _t321 = _v72;
                _v36 = _v48 + 1;
                _t209 =  &(_v44->level);
                _t296 = loc;
                goto L22;
            }
            while(1) {
L22:
                 *_t209 =  *_t209 + 2;
                _t296 = _t296 + 1;
                _t209 =  &(_t209[4]);
                if(_t267 <= _t296) {
                    break;
                }
            }
            _t351 = loc;
            _t297 = v;
            while(_t321->kind != 1 ||  *((intOrPtr*)(_t321 + 8)) != _t297) {
                _t351 = _t351 + 2;
                _t321 = _t321 + 32;
                if(_t267 > _t351) {
                    continue;
                }
L54:
                if( *np + 2 > n_tokens) {
                    error_huge();
                }
                _t339 = equation + (_t267 << 4);
                _v100 =  *np - _t267 << 4;
                _v104 = _t339;
                 *__esp = (_t267 << 4) + equation + 32;
                L080491C4();
                 *np =  *np + 2;
                 *(_t339 + 4) = _v36;
                 *_t339 = 2;
                 *((intOrPtr*)(_t339 + 8)) = 3;
                _t203 = (_t267 << 4) + equation + 16;
                _t203[1] = _v36;
                 *_t203 = 1;
                _t203[2] = v;
                return 1;
            }
        } while();
        goto L22;
    }
}

int integrate_cmd(char* cp)
{// addr = 0x0806C0D8
    int i;
    int j;
    int len;
    long int v;
    token_type* source;
    token_type* dest;
    int n1;
    int n2;
    int* nps;
    int* np;
    int definite_flag;
    int constant_flag;
    int solved;
    double integrate_order;
    char[99] var_name_buf;
    long int l1;
    intOrPtr _v32;
    _unknown_ _v132;
    int _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    char* _v160;
    _unknown_ _v164;
    _unknown_ _v165;
    int _v184;
    _unknown_ _v185;
    int _v192;
    _unknown_ _v196;
    _unknown_ _v216;
    _unknown_ _v220;
    _unknown_ _v224;
    _unknown_ _v228;
    _unknown_ _v232;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t201;
    _unknown_ _t202;
    int _t203;
    _unknown_ _t210;
    _unknown_ _t211;
    _unknown_ _t214;
    _unknown_ _t221;
    _unknown_ _t229;
    _unknown_ _t232;
    _unknown_ _t233;
    _unknown_ _t236;
    _unknown_ _t262;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t270;
    _unknown_ _t278;
    _unknown_ _t288;
    _unknown_ _t290;
    _unknown_ _t292;
    _unknown_ _t298;
    _unknown_ _t300;
    _unknown_ _t304;
    int _t308;
    _unknown_ _t309;
    _unknown_ _t310;
    _unknown_ _t312;
    _unknown_ _t313;
    _unknown_ _t314;
    _unknown_ _t317;
    _unknown_ _t318;
    _unknown_ _t320;
    _unknown_ _t322;
    _unknown_ _t323;
    _unknown_ _t324;
    _unknown_ _t328;
    _unknown_ _t330;
    _unknown_ _t338;
    _unknown_ _t341;
    _unknown_ _t342;
    _unknown_ _t344;
    int _t345;
    _unknown_ _t346;
    _unknown_ _t347;
    _unknown_ _t348;
    _unknown_ _t349;
    _unknown_ _t350;

    _v160 = cp;
    _v32 =  *gs:0x14];
    _v136 = 0;
    current_not_defined();
    if(0 != 0) {
        _t203 = 0;
    } else {
        _v192 = solved_equation(cur_equation);
        _v184 = next_espace();
        _t345 = 0;
        _t308 = 0;
        while(1) {
        }
    }
    if(__eflags == 0) {
        return _t203;
    }
    __stack_chk_fail();
    return _t203;
}

int get_constant(token_type* p1, int n, double* dp)
{// addr = 0x0806C8F0
    int i;
    int j;
    int level;
    double d1;
    double d2;
    int prev_approx_flag;
    char _v36;
    double _v44;
    intOrPtr* _v48;
    int _v52;
    intOrPtr _v84;
    char* _v88;
    _unknown_ __ebx;
    intOrPtr __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t53;
    intOrPtr* _t55;
    intOrPtr* _t58;
    _unknown_ _t68;
    intOrPtr* _t72;
    intOrPtr _t73;
    intOrPtr* _t78;
    _unknown_ _t79;
    union kind_list _t80;
    _unknown_ _t81;
    _unknown_ _t82;
    intOrPtr _t87;
    signed int _t88;
    signed int _t89;
    token_type* _t97;
    _unknown_ _t99;
    _unknown_ _t101;
    signed int _t103;
    _unknown_ _t104;

    _t103 = n;
    if(_t103 <= 0 || (_t103 & 1) == 0) {
        error_bug("Call to get_constant() has invalid expression length.");
    }
    if(_t103 != 1) {
        if(_t103 <= 2) {
            return 0;
        }
        _t55 = p1 + 16;
        _v48 = _t55;
        _t87 =  *((intOrPtr*)(_t55 + 4));
        if(get_constant(p1, 1,  &_v36) == 0) {
            return 0;
        }
        if(_t103 > 1) {
            _t58 = _v48;
            if( *_t58 != 2) {
                return 0;
            }
            __edi =  *((intOrPtr*)(_t58 + 4));
            if(_t87 < __edi) {
                return 0;
            }
            _v52 = 1;
            _t89 = 1;
            while(1) {
L16:
                _t88 = _t89 + 2;
                if(_t103 <= _t88) {
                    break;
                }
                _t97 = p1;
                if(__edi >=  *((intOrPtr*)( &(_t97->level) + (_t88 << 4)))) {
                    break;
                }
                _t78 = _t97 + (_t89 << 4) + 68;
                while(1) {
                    _t88 = _t88 + 2;
                    if(_t103 <= _t88) {
                        break;
                    }
L20:
                    _t78 = _t78 + 32;
                    if( *_t78 > __edi) {
                        continue;
                    }
                    goto L21;
                }
                break;
            }
L21:
            if(get_constant((_v52 << 4) + p1 + 16, _t88 +  !_t89,  &_v44) == 0) {
                return 0;
            }
            _v52 = approximate_roots;
            approximate_roots = 1;
            asm("fld qword [ebp-0x28]");
            asm("fstp qword [esp+0xc]");
            _v84 =  *((intOrPtr*)(_v48 + 8));
            _v88 =  &_v36;
             *__esp = 0;
            if(calc() == 0) {
                approximate_roots = _v52;
                return 0;
            }
            approximate_roots = _v52;
            if( *((intOrPtr*)(_v48 + 8)) == 6) {
                if(domain_check == 0) {
                    return 0;
                }
            }
            domain_check = 0;
            if(_t103 > _t88) {
                _v52 = _t88;
                _t72 = p1 + (_t88 << 4);
                _v48 = _t72;
                if( *_t72 != 2) {
                    return 0;
                }
                _t73 =  *((intOrPtr*)(_t72 + 4));
                if(_t73 > __edi) {
                    return 0;
                }
                __edi = _t73;
                _t89 = _t88;
                goto L16;
            }
L31:
            asm("fld qword [ebp-0x20]");
            asm("fstp qword [edx]");
            return 1;
        }
        goto L31;
    }
    _t80 = p1->kind;
    if(_t80 == 0) {
        asm("fld qword [eax+0x8]");
        asm("fstp qword [edx]");
        return 1;
    }
    if(_t80 != 1) {
        return 0;
    }
    return var_is_const( *(p1 + 8), dp) & 4294967295 & ;
}

int parse_complex(token_type* p1, int n, complexs* cp)
{// addr = 0x0806CAE3
    int j;
    int imag_cnt;
    int plus_cnt;
    int times_cnt;
    complexs c;
    int level;
    int level2;
    double _v32;
    double _v36;
    double _v40;
    double _v44;
    token_type* _v48;
    int _v52;
    token_type* _v56;
    int _v60;
    int _v64;
    double* _v68;
    double* _v72;
    int _v76;
    token_type* _v80;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    token_type* __edi;
    complexs* __esi;
    _unknown_ __ebp;
    signed int _t108;
    _unknown_ _t109;
    intOrPtr _t116;
    _unknown_ _t123;
    long int _t124;
    int _t126;
    int _t128;
    int _t129;
    int _t134;
    _unknown_ _t141;
    intOrPtr* _t144;
    token_type* _t148;
    token_type* _t149;
    token_type* _t151;
    intOrPtr _t152;
    token_type* _t153;
    token_type* _t154;

    __edi = p1;
    __esi = cp;
    __eflags = get_constant(__edi, n,  &_v44);
    if(__eflags != 0) {
        asm("fldz ");
        asm("fstp qword [ebp-0x20]");
        __esi->re = _v44;
        __esi->re = _v40;
        __esi->im = _v36;
        __esi->im = _v32;
        return 1;
    }
    _v76 = min_level(__edi, n);
    asm("fldz ");
    asm("fstp qword [ebp-0x28]");
    asm("fld1 ");
    asm("fstp qword [ebp-0x20]");
    _t108 = n - 1;
    _v52 = _t108;
    if(__eflags >= 0) {
        return 0;
    }
    _t144 = __edi + (_t108 << 4);
    _v56 = __edi + (n << 4);
    _v48 = (n << 4) + __edi - 32;
    _v60 = 0;
    _v72 = 0;
    _v68 = 0;
    _v64 = 0;
    goto L4;
    do {
L4:
        _t116 =  *_t144;
        __eflags = _t116 - 1;
        if(_t116 == 1) {
            __eflags = var_is_const( *(_t144 + 8), 0);
            if(__eflags == 0) {
                __eflags =  *(_t144 + 8) - 3;
                if(__eflags != 0) {
                    return 0;
                }
                _v64 = _v64 + 1;
            }
            goto L44;
        }
        __eflags = _t116 - 1;
        if(__eflags < 0) {
            goto L44;
        }
        __eflags = _t116 - 2;
        if(_t116 != 2) {
            return 0;
        }
        __esi = __esi;
        _t152 =  *((intOrPtr*)(_t144 + 4));
        _t124 =  *(_t144 + 8);
        __eflags = _t124 - 2;
        if(_t124 == 2) {
            __eflags = _v64;
            if(_v64 != 0) {
                asm("fld qword [ebp-0x20]");
                asm("fchs ");
                asm("fstp qword [ebp-0x20]");
            }
L38:
            _v68 =  &(_v68[0]);
            __eflags = _v68 - 1;
            if(_v68 > 1) {
                return 0;
            }
            __eflags = _v76 - _t152;
            if(_v76 != _t152) {
                return 0;
            }
            _t126 = get_constant(__edi, _v52,  &_v44);
            __eflags = _t126;
            if(_t126 != 0) {
                break;
            } else {
                _t128 = get_constant(_v56, _v60,  &_v44);
                __eflags = _t128;
                if(_t128 == 0) {
                    return 0;
                }
                __eflags =  *(_t144 + 8) - 2;
                if(__eflags == 0) {
                    asm("fld qword [ebp-0x28]");
                    asm("fchs ");
                    asm("fstp qword [ebp-0x28]");
                }
                goto L44;
            }
        }
        __eflags = _t124 - 2;
        if(_t124 > 2) {
            __eflags = _t124 - 3;
            if(_t124 == 3) {
                _v72 =  &(_v72[0]);
                __eflags = _v72 - 1;
                __esi = __esi;
                if(_v72 > 1) {
                    return 0;
                }
                _t148 = _v48;
                _v80 = _t148;
                _t129 = _t148->level;
                __eflags = _t129 - _t152;
                if(_t129 != _t152) {
                    return 0;
                }
                _t153 = _v56;
                __eflags = _t129 - _t153->level;
                if(_t129 != _t153->level) {
                    return 0;
                }
                __eflags = _t148->kind - 1;
                if(_t148->kind != 1) {
L25:
                    _t149 = _v56;
                    __eflags = _t149->kind - 1;
                    if(_t149->kind != 1) {
                        return 0;
                    }
                    __eflags =  *((intOrPtr*)(_t149 + 8)) - 3;
                    if( *((intOrPtr*)(_t149 + 8)) != 3) {
                        return 0;
                    }
                    __eflags = get_constant(_v80, 1,  &_v36);
                    if(__eflags == 0) {
                        return 0;
                    }
                    goto L44;
                }
                __eflags =  *((intOrPtr*)(_t148 + 8)) - 3;
                if( *((intOrPtr*)(_t148 + 8)) != 3) {
                    goto L25;
                }
                __eflags = get_constant(_t153, 1,  &_v36);
                if(__eflags == 0) {
                    return 0;
                }
                goto L44;
            }
            goto L16;
        }
        __eflags = _t124 - 1;
        if(_t124 != 1) {
            return 0;
        }
        __esi = __esi;
        goto L38;
L16:
        __eflags = _t124 - 4;
        __esi = __esi;
        if(_t124 != 4) {
            return 0;
        }
        asm("o16 nop ");
        _v72 =  &(_v72[0]);
        __eflags = _v72 - 1;
        if(_v72 > 1) {
            return 0;
        }
        _t151 = _v48;
        _t134 = _t151->level;
        __eflags = _t134 - _t152;
        if(_t134 != _t152) {
            return 0;
        }
        _t154 = _v56;
        __eflags = _t134 - _t154->level;
        if(_t134 != _t154->level) {
            return 0;
        }
        __eflags = _t151->kind - 1;
        if(_t151->kind != 1) {
            return 0;
        }
        __eflags =  *((intOrPtr*)(_t151 + 8)) - 3;
        if( *((intOrPtr*)(_t151 + 8)) != 3) {
            return 0;
        }
        __eflags = get_constant(_t154, 1,  &_v36);
        if(__eflags == 0) {
            return 0;
        }
        asm("fld1 ");
        asm("fdiv qword [ebp-0x20]");
        asm("fstp qword [ebp-0x20]");
        goto L44;
L44:
        _v60 = _v60 + 1;
        _t144 = _t144 - 16;
        _v56 = _v56 - 16;
        _v48 = _v48 - 16;
        _v52 = _v52 - 1;
    } while(__eflags >= 0);
    __eflags = _v64 - 1;
    if(_v64 != 1) {
        return 0;
    }
     *__esi = _v44;
    __esi->re = _v40;
    __esi->im = _v36;
    __esi->im = _v32;
    return 1;
}

int complex_root_simp(token_type* equation, int* np)
{// addr = 0x0806CDD7
    int i;
    int j;
    int level;
    int len;
    complexs c;
    complexs p;
    complexs r;
    int modified;
    _unknown_ _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v76;
    intOrPtr _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ _v92;
    intOrPtr _v96;
    intOrPtr _v100;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    _unknown_ _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t102;
    _unknown_ _t103;
    _unknown_ _t128;
    _unknown_ _t131;
    _unknown_ _t134;
    _unknown_ _t137;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t140;
    _unknown_ _t141;
    _unknown_ _t147;
    _unknown_ _t167;
    int _t169;
    _unknown_ _t171;
    _unknown_ _t172;
    intOrPtr _t174;
    _unknown_ _t175;
    _unknown_ _t176;
    _unknown_ _t183;
    _unknown_ _t184;
    _unknown_ _t186;

    _v96 = 0;
    _v100 = equation + 32;
    while(1) {
        _t169 =  *np;
        if(_t169 <= 1) {
            break;
        } else {
            _t174 = _v100;
            _v80 = 1;
            goto L3;
        }
    }
    if(_v96 == 0) {
        return _v96;
    }
    warning("Complex number roots approximated.");
    return _v96;
}

approximate_complex_roots(token_type* equation, int* np)
{// addr = 0x0806D04B
    _unknown_ _v24;
    token_type* __ebx;
    int* __esi;
    _unknown_ __ebp;
    _unknown_ _t5;

    __ebx = equation;
    __esi = np;
    while(1) {
L1:
        elim_loop(__ebx, __esi);
        if(complex_root_simp(__ebx, __esi) == 0) {
            break;
        }
    }
    return;
}

rect_to_polar(double x, double y, double* radiusp, double* thetap)
{// addr = 0x0806D07C
    _unknown_ __ebp;
    _unknown_ _t3;

    asm("fld qword [ebp+0x8]");
    asm("fld qword [ebp+0x10]");
    asm("fld st0, st1");
    asm("fmul st0, st2");
    asm("fld st0, st1");
    asm("fmul st0, st2");
    asm("faddp st1, st0");
    asm("fsqrt ");
    asm("fstp qword [eax]");
    asm("fxch st0, st1");
    asm("fstp qword [esp+0x8]");
    asm("fstp qword [esp]");
    atan2();
    asm("fstp qword [eax]");
    return _a24;
}

int roots_cmd(char* cp)
{// addr = 0x0806D0AE
    complexs c2;
    complexs check;
    double d;
    double k;
    double root;
    double radius;
    double theta;
    double radius_root;
    char[4095] buf;
    _unknown_ _v16;
    intOrPtr _v32;
    char _v4128;
    char _v4140;
    char _v4148;
    intOrPtr _v4152;
    int _v4156;
    char* _v4160;
    char* _v4164;
    intOrPtr _v4168;
    int _v4172;
    char* _v4176;
    char* _v4180;
    int _v4192;
    intOrPtr _v4208;
    int _v4212;
    char* _v4216;
    char* _v4220;
    signed int _v4244;
    int _v4264;
    intOrPtr _v4268;
    int _v4272;
    int _v4276;
    char* _v4280;
    char* _v4284;
    int _v4288;
    char* _v4292;
    char* _v4296;
    FILE* __ebx;
    complexs* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t119;
    _unknown_ _t123;
    char* _t124;
    int _t125;
    char* _t127;
    long _t130;
    char* _t131;
    _unknown_ _t134;
    int _t139;
    _unknown_ _t142;
    _unknown_ _t150;
    int _t164;
    _unknown_ _t166;
    int _t168;
    _unknown_ _t169;
    _unknown_ _t170;
    int _t172;
    _unknown_ _t174;
    char* _t176;
    _unknown_ _t179;
    signed int _t180;
    signed int _t181;
    signed int _t183;
    char* _t184;
    complexs* _t185;
    signed int _t190;

    _v4192 = cp;
    _v32 =  *gs:0x14];
    asm("fldz ");
    asm("fstp qword [ebp+0xffffef68]");
    __edi =  &_v4164;
    __ebx =  &_v4220;
    goto L1;
    do {
L1:
        if( *_v4192 != 0) {
L3:
            strtod(_v4192,  &_v4192);
            asm("fstp qword [ebp+0xffffef78]");
            _t124 = _v4192;
            _t183 =  *_t124 & 255;
            if((_t183 & 4294967295) == 0) {
L5:
                asm("fldz ");
                asm("fld qword [ebp+0xffffef78]");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                if(_t190 > 0) {
                    asm("fstp st0");
L18:
                    asm("fld dword [0x8077980]");
                    asm("fstp qword [esp+0x8]");
                    _v4296 = "Root must be a positive integer less than or equal to %.0f.\n";
                     *__esp = 1;
                    __printf_chk();
                    _t125 = 0;
                    goto L85;
                }
                goto L6;
L19:
                _t127 = skip_space(_v4192);
                _v4192 = _t127;
                __eflags =  *_t127;
                if( *_t127 != 0) {
L21:
                    _t130 = strtod(_v4192,  &_v4192);
                    asm("fstp qword [ebp+0xffffef80]");
                    _t184 = _v4192;
                    _t180 =  *_t184 & 255;
                    _v4244 = _t180 & 4294967295;
                    __eflags = _t180 & 4294967295;
                    if((_t180 & 4294967295) == 0) {
L24:
                        _t131 = skip_space(_t184);
                        _v4192 = _t131;
                        __eflags =  *_t131;
                        if( *_t131 != 0) {
L26:
                            strtod(_v4192,  &_v4192);
                            asm("fstp qword [ebp+0xffffef70]");
                            __eflags =  *_v4192;
                            if(__eflags == 0) {
                                asm("fldz ");
                                asm("fld qword [ebp+0xffffef80]");
                                asm("fucomip st0, st1");
                                if(__eflags != 0) {
                                    asm("fstp st0");
                                    goto L35;
                                }
                                if(__eflags != 0) {
                                    goto L34;
                                }
                                asm("fld qword [ebp+0xffffef70]");
                                asm("fucomip st0, st1");
                                asm("fstp st0");
                                if(__eflags != 0 || __eflags != 0) {
                                    goto L35;
                                }
                                _t125 = repeat_flag;
                                goto L85;
L35:
                                 *(__errno_location()) = 0;
                                _v4280 =  &_v4148;
                                _v4284 =  &_v4140;
                                asm("fld qword [ebp+0xffffef70]");
                                asm("fstp qword [esp+0x8]");
                                asm("fld qword [ebp+0xffffef80]");
                                asm("fstp qword [esp]");
                                rect_to_polar();
                                asm("fldz ");
                                asm("fld qword [ebp+0xffffef78]");
                                asm("fucomi st0, st1");
                                asm("fstp st1");
                                if(__eflags != 0 || __eflags != 0) {
                                    asm("fdivr dword [0x8075170]");
                                    asm("fstp qword [esp+0x8]");
                                    asm("fld qword [ebp+0xffffefd8]");
                                    asm("fstp qword [esp]");
                                    pow();
                                    asm("fstp qword [ebp+0xffffef68]");
                                    check_err();
                                    asm("fld qword [ebp+0xffffefd0]");
                                    _t139 = precision;
                                    asm("fld st0, st0");
                                    asm("fmul dword [0x8077984]");
                                    asm("fdiv qword [0x8075658]");
                                    asm("fstp qword [esp+0x28]");
                                    _v4264 = _t139;
                                    asm("fstp qword [esp+0x1c]");
                                    _v4276 = _t139;
                                    asm("fld qword [ebp+0xffffefd8]");
                                    asm("fstp qword [esp+0x10]");
                                    _v4288 = _t139;
                                    _v4292 = "\nThe polar coordinates are:\n%.*g amplitude and %.*g radians (%.*g degrees).\n\n";
                                    _v4296 = 1;
                                     *__esp = gfp;
                                    __fprintf_chk();
L40:
                                    asm("fldz ");
                                    asm("fld qword [ebp+0xffffef70]");
                                    asm("fucomip st0, st1");
                                    asm("fstp st0");
                                    if(__eflags != 0 || __eflags != 0) {
                                        asm("fld qword [ebp+0xffffef78]");
                                        asm("fstp qword [esp+0x24]");
                                        asm("fld qword [ebp+0xffffef70]");
                                        asm("fstp qword [esp+0x1c]");
                                        asm("fld qword [ebp+0xffffef80]");
                                        asm("fstp qword [esp+0x14]");
                                        asm("fld qword [ebp+0xffffef78]");
                                        asm("fstp qword [esp+0xc]");
                                        _v4292 = "The %.12g roots of (%.12g%+.12g*i)^(1/%.12g) are:\n\n";
                                        _v4296 = 1;
                                         *__esp = gfp;
                                        __fprintf_chk();
                                    } else {
                                        asm("fld qword [ebp+0xffffef78]");
                                        asm("fst qword [esp+0x1c]");
                                        asm("fld qword [ebp+0xffffef80]");
                                        asm("fstp qword [esp+0x14]");
                                        asm("fstp qword [esp+0xc]");
                                        _v4292 = "The %.12g roots of (%.12g)^(1/%.12g) are:\n\n";
                                        _v4296 = 1;
                                         *__esp = gfp;
                                        __fprintf_chk();
                                    }
                                    asm("fldz ");
                                    asm("fld qword [ebp+0xffffef78]");
                                    asm("fucomip st0, st1");
                                    if(__eflags <= 0) {
                                        asm("fstp st0");
                                    } else {
                                        asm("fstp qword [ebp+0xffffef70]");
                                        _t185 =  &_v4180;
                                        goto L46;
                                        do {
L46:
                                            asm("fld qword [ebp+0xffffef70]");
                                            asm("fadd st0, st0");
                                            asm("fmul qword [0x8075658]");
                                            asm("fadd qword [ebp+0xffffefd0]");
                                            asm("fdiv qword [ebp+0xffffef78]");
                                            asm("fst qword [ebp+0xffffef80]");
                                            asm("fstp qword [esp]");
                                            cos();
                                            asm("fmul qword [ebp+0xffffef68]");
                                            asm("fstp qword [ebp+0xffffefc0]");
                                            asm("fld qword [ebp+0xffffef80]");
                                            asm("fstp qword [esp]");
                                            sin();
                                            asm("fmul qword [ebp+0xffffef68]");
                                            asm("fstp qword [ebp+0xffffefc8]");
                                            complex_fixup(__edi);
                                            asm("fld qword [ebp+0xffffefc0]");
                                            asm("fldz ");
                                            asm("fxch st0, st1");
                                            asm("fucomi st0, st1");
                                            if(__eflags != 0) {
                                                asm("fstp st1");
                                                asm("o16 nop ");
                                                goto L53;
                                            }
                                            if(__eflags != 0) {
                                                goto L52;
                                            }
                                            asm("fld qword [ebp+0xffffefc8]");
                                            asm("fucomip st0, st2");
                                            asm("fstp st1");
                                            if(__eflags != 0) {
                                                asm("fstp st0");
                                                goto L56;
                                            }
                                            asm("o16 nop ");
                                            if(__eflags != 0) {
                                                goto L55;
                                            }
                                            goto L53;
L56:
                                            asm("fld qword [ebp+0xffffefc8]");
                                            asm("fldz ");
                                            asm("fxch st0, st1");
                                            asm("fucomi st0, st1");
                                            asm("fstp st1");
                                            if(__eflags != 0 || __eflags != 0) {
                                                asm("fstp qword [esp+0xc]");
                                                _v4292 = "%+.12g*i";
                                                _v4296 = 1;
                                                 *__esp = gfp;
                                                __fprintf_chk();
                                            } else {
                                                asm("fstp st0");
                                            }
                                            _v4292 = 134699005;
                                            _v4296 = 1;
                                             *__esp = gfp;
                                            __fprintf_chk();
                                            _v4180 = _v4164;
                                            _v4176 = _v4160;
                                            _v4172 = _v4156;
                                            _v4168 = _v4152;
                                            asm("fld1 ");
                                            asm("fld qword [ebp+0xffffef78]");
                                            asm("fucomip st0, st1");
                                            if(__eflags <= 0) {
                                                asm("fstp st0");
                                            } else {
                                                asm("fstp qword [ebp+0xffffef80]");
                                                while(1) {
L62:
                                                    _v4280 = _v4164;
                                                    _v4276 = _v4160;
                                                    _v4272 = _v4156;
                                                    _v4268 = _v4152;
                                                    _v4296 = _v4180;
                                                    _v4292 = _v4176;
                                                    _v4288 = _v4172;
                                                    _v4284 = _v4168;
                                                     *__esp = __ebx;
                                                    complex_mult();
                                                    __esp = __esp - 4;
                                                    _v4180 = _v4220;
                                                    _v4176 = _v4216;
                                                    _v4172 = _v4212;
                                                    _v4168 = _v4208;
                                                    asm("fld qword [ebp+0xffffef80]");
                                                    asm("fadd dword [0x8075170]");
                                                    asm("fst qword [ebp+0xffffef80]");
                                                    asm("fld qword [ebp+0xffffef78]");
                                                    asm("fucomip st0, st1");
                                                    asm("fstp st0");
                                                    if(__eflags <= 0) {
                                                        break;
                                                    }
                                                }
                                            }
                                            complex_fixup(_t185);
                                            _v4296 = "Inverse check:";
                                             *__esp = 1;
                                            __printf_chk();
                                            asm("fld qword [ebp+0xffffefb0]");
                                            asm("fldz ");
                                            asm("fxch st0, st1");
                                            asm("fucomi st0, st1");
                                            if(__eflags != 0) {
                                                asm("fstp st1");
                                                asm("o16 nop ");
                                                goto L72;
                                            }
                                            if(__eflags != 0) {
                                                goto L71;
                                            }
                                            asm("fld qword [ebp+0xffffefb8]");
                                            asm("fucomip st0, st2");
                                            asm("fstp st1");
                                            if(__eflags != 0) {
                                                asm("fstp st0");
                                                goto L75;
                                            }
                                            if(__eflags != 0) {
                                                goto L74;
                                            }
                                            goto L72;
L74:
                                            asm("fstp st0");
                                            goto L75;
L72:
                                            asm("fstp qword [esp+0x8]");
                                            _v4296 = " %.10g";
                                             *__esp = 1;
                                            __printf_chk();
                                            goto L75;
L71:
                                            asm("fstp st1");
                                            goto L72;
L55:
                                            asm("fstp st0");
                                            goto L56;
L53:
                                            asm("fstp qword [esp+0xc]");
                                            _v4292 = "%.12g ";
                                            _v4296 = 1;
                                             *__esp = gfp;
                                            __fprintf_chk();
                                            goto L56;
L52:
                                            asm("fstp st1");
                                            goto L53;
L75:
                                            asm("fld qword [ebp+0xffffefb8]");
                                            asm("fldz ");
                                            asm("fxch st0, st1");
                                            asm("fucomi st0, st1");
                                            asm("fstp st1");
                                            if(__eflags != 0 || __eflags != 0) {
                                                asm("fstp qword [esp+0x8]");
                                                _v4296 = " %+.10g*i";
                                                 *__esp = 1;
                                                __printf_chk();
                                            } else {
                                                asm("fstp st0");
                                            }
                                            _v4296 = 134699004;
                                             *__esp = 1;
                                            __printf_chk();
                                            asm("fld qword [ebp+0xffffef70]");
                                            asm("fadd dword [0x8075170]");
                                            asm("fst qword [ebp+0xffffef70]");
                                            asm("fld qword [ebp+0xffffef78]");
                                            asm("fucomip st0, st1");
                                            asm("fstp st0");
                                        } while(__eflags > 0);
                                    }
                                    goto L82;
                                }
                                asm("fstp st0");
                                check_err();
                                asm("fld qword [ebp+0xffffefd0]");
                                _t164 = precision;
                                asm("fld st0, st0");
                                asm("fmul dword [0x8077984]");
                                asm("fdiv qword [0x8075658]");
                                asm("fstp qword [esp+0x28]");
                                _v4264 = _t164;
                                asm("fstp qword [esp+0x1c]");
                                _v4276 = _t164;
                                asm("fld qword [ebp+0xffffefd8]");
                                asm("fstp qword [esp+0x10]");
                                _v4288 = _t164;
                                _v4292 = "\nThe polar coordinates are:\n%.*g amplitude and %.*g radians (%.*g degrees).\n\n";
                                _v4296 = 1;
                                 *__esp = gfp;
                                __fprintf_chk();
                                asm("fldz ");
                                asm("fld qword [ebp+0xffffef78]");
                                asm("fucomip st0, st1");
                                asm("fstp st0");
                                if(__eflags != 0 || __eflags != 0) {
                                    goto L40;
                                }
                                goto L82;
L34:
                                asm("fstp st0");
                                goto L35;
                            } else {
                                error("Number expected.");
                                _t125 = 0;
                            }
                            goto L85;
                        }
                        goto L25;
                    }
                    goto L22;
L25:
                    my_strlcpy( &prompt_str, "Enter imaginary part (Y): ", 80);
                    _t168 = get_string( &_v4128, 4096);
                    _v4192 = _t168;
                    __eflags = _t168;
                    if(_t168 == 0) {
                        goto L84;
                    }
                    goto L26;
                }
                my_strlcpy( &prompt_str, "Enter real part (X): ", 80);
                _t172 = get_string( &_v4128, 4096);
                _v4192 = _t172;
                __eflags = _t172;
                if(_t172 == 0) {
                    goto L84;
                }
                goto L21;
L22:
                __ctype_b_loc();
                _t181 = _v4244;
                _t169 =  *_t130;
                __eflags =  *(_t169 + 1 + _t181 * 2) & 32;
                if(( *(_t169 + 1 + _t181 * 2) & 32) != 0) {
                    goto L24;
                } else {
                    error("Number expected.");
                    _t125 = 0;
                }
                goto L85;
            }
            goto L4;
L6:
            asm("fld dword [0x8077980]");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(_t190 > 0) {
                goto L18;
            } else {
                asm("fld1 ");
                asm("fld qword [ebp+0xffffef78]");
                while(1) {
L8:
                    asm("fprem ");
                    asm("fnstsw ax");
                    asm("sahf ");
                    if(_t190 == 0) {
                        break;
                    }
                }
                asm("fstp st1");
                asm("fucomi st0, st0");
                if(_t190 != 0) {
                    asm("fstp st0");
L13:
                    asm("fld1 ");
                    asm("fstp qword [esp+0x8]");
                    asm("fld qword [ebp+0xffffef78]");
                    asm("fstp qword [esp]");
                    fmod();
                    goto L14;
                }
                if(_t190 == 0) {
                    goto L14;
                } else {
                    asm("fstp st0");
                }
                goto L13;
L14:
                asm("fldz ");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(_t190 != 0 || _t190 != 0) {
                    goto L18;
                }
            }
            goto L19;
        }
        my_strlcpy( &prompt_str, "Enter root (positive integer): ", 80);
        _t176 = get_string( &_v4128, 4096);
        _v4192 = _t176;
        if(_t176 == 0) {
L84:
            _t125 = 0;
            goto L85;
        }
        goto L3;
L85:
        if(_t190 == 0) {
            return _t125;
        }
        __stack_chk_fail();
        return _t125;
L4:
        __ctype_b_loc();
        _t190 =  *( *_t124 + 1 + (_t183 & 4294967295) * 2) & 32;
        if(_t190 == 0) {
            goto L18;
        }
        goto L5;
L82:
        __eflags = repeat_flag;
    } while(repeat_flag != 0);
    _t125 = 1;
    asm("o16 nop ");
    goto L85;
}

int complex_fixup(complexs* ap)
{// addr = 0x0806D830
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t4;

    __eflags = __eflags;
    asm("fld qword [edx]");
    asm("fld qword [edx+0x8]");
    asm("fld st0, st1");
    asm("fmul qword [0x8077988]");
    asm("fabs ");
    asm("fld st0, st1");
    asm("fabs ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if(__eflags <= 0) {
        asm("fmul qword [0x8077988]");
        asm("fabs ");
        asm("fxch st0, st1");
        asm("fabs ");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags <= 0) {
            return 0;
        }
        asm("fldz ");
        asm("fstp qword [edx]");
        return 0;
    }
    asm("fstp st0");
    asm("fstp st0");
    asm("fldz ");
    asm("fstp qword [edx+0x8]");
    return 1;
}

complexs complex_add(complexs a, complexs b)
{// addr = 0x0806D882
    _unknown_ __ebp;

    asm("fld qword [ebp+0xc]");
    asm("fadd qword [ebp+0x1c]");
    asm("fld qword [ebp+0x14]");
    asm("fadd qword [ebp+0x24]");
    asm("fstp qword [eax+0x8]");
    asm("fstp qword [eax]");
    return a.re;
}

complexs complex_negate(complexs a)
{// addr = 0x0806D89D
    _unknown_ __ebp;

    asm("fld qword [ebp+0xc]");
    asm("fchs ");
    asm("fld qword [ebp+0x14]");
    asm("fchs ");
    asm("fstp qword [eax+0x8]");
    asm("fstp qword [eax]");
    return a.re;
}

complexs complex_mult(complexs a, complexs b)
{// addr = 0x0806D8B6
    _unknown_ __ebp;

    asm("fld qword [ebp+0xc]");
    asm("fld qword [ebp+0x14]");
    asm("fld qword [ebp+0x1c]");
    asm("fld qword [ebp+0x24]");
    asm("fld st0, st3");
    asm("fmul st0, st1");
    asm("fld st0, st3");
    asm("fmul st0, st3");
    asm("faddp st1, st0");
    asm("fstp qword [eax+0x8]");
    asm("fxch st0, st1");
    asm("fmulp st3, st0");
    asm("fmulp st1, st0");
    asm("fsubp st1, st0");
    asm("fstp qword [eax]");
    return a.re;
}

complexs complex_div(complexs a, complexs b)
{// addr = 0x0806D8E3
    complexs num;
    double denom;
    _unknown_ _v8;
    char _v28;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    intOrPtr _v60;
    intOrPtr _v64;
    double _v68;
    double _v72;
    double _v76;
    _unknown_ __ebp;
    _unknown_ _t24;

    _push(__ebx);
    __esp = __esp - 72;
    asm("fld qword [ebp+0x1c]");
    asm("fstp qword [ebp-0x20]");
    asm("fld qword [ebp+0x24]");
    asm("fchs ");
    asm("fst qword [ebp-0x28]");
    asm("fstp qword [ebp+0x24]");
    _v60 = _a24;
    _v56 = _a28;
    _v52 = _a32;
    _v48 = _a36;
    _v76 = b.re;
    _v72 = a.im;
    _v68 = b.im;
    _v64 = _a20;
     *__esp =  &_v28;
    complex_mult();
    __esp = __esp - 4;
    asm("fld qword [ebp-0x20]");
    asm("fmul st0, st0");
    asm("fld qword [ebp-0x28]");
    asm("fmul st0, st0");
    asm("faddp st1, st0");
    asm("fld qword [ebp-0x18]");
    asm("fdiv st0, st1");
    asm("fxch st0, st1");
    asm("fdivr qword [ebp-0x10]");
    asm("fstp qword [ebx+0x8]");
    asm("fstp qword [ebx]");
    return a.re;
}

complexs complex_exp(complexs a)
{// addr = 0x0806D968
    double m;
    char _v20;
    char _v28;
    char* _v48;
    char* _v52;
    _unknown_ __ebp;

    _v48 =  &_v28;
    _v52 =  &_v20;
    asm("fld qword [ebp+0x14]");
    asm("fstp qword [esp]");
    sincos();
    asm("fld qword [ebp-0x18]");
    asm("fstp qword [ebp-0x20]");
    asm("fld qword [ebp-0x10]");
    asm("fstp qword [ebp-0x28]");
    asm("fld qword [ebp+0xc]");
    asm("fstp qword [esp]");
    exp();
    asm("fld qword [ebp-0x28]");
    asm("fmul st0, st1");
    asm("fstp qword [ebx+0x8]");
    asm("fmul qword [ebp-0x20]");
    asm("fstp qword [ebx]");
    return a.re;
}

complexs complex_log(complexs a)
{// addr = 0x0806D9B9
    _unknown_ __ebp;

    asm("fld qword [ebp+0xc]");
    asm("fstp qword [ebp-0x18]");
    asm("fld qword [ebp+0x14]");
    asm("fst qword [ebp-0x10]");
    asm("fld qword [ebp-0x18]");
    asm("fmul st0, st0");
    asm("fxch st0, st1");
    asm("fmul st0, st0");
    asm("faddp st1, st0");
    asm("fstp qword [esp]");
    log();
    asm("fstp qword [ebp-0x20]");
    asm("fld qword [ebp-0x18]");
    asm("fstp qword [esp+0x8]");
    asm("fld qword [ebp-0x10]");
    asm("fstp qword [esp]");
    atan2();
    asm("fstp qword [ebx+0x8]");
    asm("fld qword [ebp-0x20]");
    asm("fmul dword [0x8072054]");
    asm("fstp qword [ebx]");
    return a.re;
}

complexs complex_pow(complexs a, complexs b)
{// addr = 0x0806DA0F
    complexs r;
    char _v16;
    double _v32;
    double _v40;
    struct complexs _v44;
    double _v48;
    double _v56;
    struct complexs _v60;
    intOrPtr _v80;
    intOrPtr _v84;
    intOrPtr _v88;
    intOrPtr _v92;
    double _v96;
    struct complexs _v108;
    struct complexs _v112;
    struct complexs __ebx;
    _unknown_ __edi;
    char* __esi;
    _unknown_ __ebp;
    double _t71;
    _unknown_ _t77;
    double _t83;
    struct complexs _t84;
    double _t85;
    double _t86;
    struct complexs _t87;
    struct complexs _t88;

    __esp = __esp - 92;
    __ebx = a.re;
    __esi =  &_v60;
    _v112.im = b.re;
    _v108.im = a.im;
    _v96 = b.im;
    _v92 = _a20;
     *__esp = __esi;
    complex_log();
    __esp = __esp - 4;
    _t87 = _v60.re;
    _v44 = _t87;
    _t83 = _v56;
    _v40 = _t83;
    _t85 = _v60.im;
    _v44.im = _t85;
    _v32 = _v48;
    _v92 = _a24;
    _v88 = _a28;
    _v84 = _a32;
    _v80 = _a36;
    _v108.re = _t87;
    _v112.im = _t83;
    _v108.im = _t85;
    _v96 = _v48;
     *__esp = __esi;
    complex_mult();
    __esp = __esp - 4;
    _t88 = _v60.re;
    _v44 = _t88;
    _t84 = _v56;
    _v40 = _t84;
    _t86 = _v60.im;
    _v44.im = _t86;
    _t71 = _v48;
    _v32 = _t71;
    _v112 = _t88;
    _v108 = _t84;
    _v112.im = _t86;
    _v108.im = _t71;
     *__esp = __esi;
    complex_exp();
    __esp = __esp - 4;
    _v44 = _v60;
    _v40 = _v56;
    _v44.im = _v60.im;
    _v32 = _v48;
    complex_fixup( &_v44);
     *__ebx = _v44;
     *(__ebx + 4) = _v40;
     *(__ebx + 8) = _v44.im;
     *(__ebx + 12) = _v32;
    __esp =  &_v16;
    return __ebx;
}

char* var_name(long int v)
{// addr = 0x0806DB10
    char* cp;
    long int l;
    _unknown_ __ebp;
    _unknown_ _t4;
    signed int _t8;

    _t8 = (v & 16383) - 65;
    if(_t8 > 7999) {
        return 0;
    }
    return  *( &var_names + _t8 * 4);
}

trim_zeros(char* buf)
{// addr = 0x0806DB35
    int j;
    _unknown_ __ebp;
    _unknown_ _t7;
    signed int _t8;
    _unknown_ _t9;
    signed int _t10;
    _unknown_ _t11;
    _unknown_ _t12;
    _unknown_ _t13;
    _unknown_ _t16;

    _t12 = __eax;
    asm("repne scasb ");
    _t10 =  !-1;
    _t8 = _t10 - 1;
    _t11 = _t10 - 2;
    if(__eflags >= 0) {
        return ;
    }
    _t13 = _t12 + _t8;
    while(1) {
        _t8 =  *(_t13 - 1) & 255;
        if((_t8 & 4294967295) != 48) {
            _t16 = (_t8 & 4294967295) - 46;
            if(_t16 != 0) {
                return ;
            }
             *((char*)(_t13 + 1)) = 0;
        }
        _t13 = _t13 - 1;
        _t11 = _t11 - 1;
        if(_t16 < 0) {
            return ;
        }
    }
}

int int_expr(token_type* p1, int n)
{// addr = 0x0806DB71
    int i;
    token_type* __ebx;
    int __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t5;
    union kind_list _t6;
    _unknown_ _t7;

    __edi = n;
    if(__edi <= 0) {
        return 1;
    }
    __ebx = p1;
    __esi = 0;
    while(1) {
        _t6 = __ebx->kind;
        if(_t6 == 0) {
            asm("fld qword [ebx+0x8]");
            asm("fld1 ");
            asm("fld st0, st1");
            goto L6;
        } else {
            if(_t6 == 1) {
                __esi = __esi;
                if( *((intOrPtr*)(__ebx + 8)) <= 2) {
                    return 0;
                }
            }
            goto L17;
        }
    }
}

int list_var(long int v, int lang_code)
{// addr = 0x0806DC02
    int j;
    int from_memory;
    char* cp;
    intOrPtr _v36;
    char* _v40;
    char* _v44;
    int _v48;
    signed int _v52;
    int _v56;
    char[179]* __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t37;
    char* _t38;
    _unknown_ _t39;
    signed int _t41;
    signed int _t42;
    _unknown_ _t44;
    int _t46;
    _unknown_ _t47;
    char[179]* _t48;
    signed int _t49;
    signed int _t50;
    signed int _t52;
    _unknown_ _t54;

    _t49 = v;
    _t46 = lang_code;
    var_str = 0;
    _t37 = _t49 & 16383;
    _t54 = _t37 - 5;
    if(_t54 > 0) {
        _t38 = var_name(_t49);
        _t41 = 1;
L29:
        if(_t38 == 0) {
            _t38 = my_strlcpy( &var_str, "bad_variable", 180);
L34:
            if(_t41 == 0 || _t46 == 0) {
L42:
                asm("repne scasb ");
                return  !-1 - 1;
            } else {
                _t42 = var_str & 255;
                if((_t42 & 4294967295) == 0) {
                    goto L42;
                }
                _t50 = 0;
                _t48 =  &var_str;
                while() {
                }
            }
            return __eax;
        }
        goto L30;
    }
    switch( *((intOrPtr*)(_t37 * 4 +  &M08077B14))) {
        case 0:
            _t38 = 134684795;
            goto L45;
        case 1:
            __eax = "sign";
            goto L29;
        case 2:
            __edi =  &var_str;
            __eax = 0;
            __ecx = -1;
            asm("repne scasb ");
            __ecx =  !-1;
            __eax = __ecx - 1;
            return __ecx - 1;
        case 3:
            __eax = __edi + 3;
            if(__eax > 6) {
                goto L12;
            }
            switch( *((intOrPtr*)(__eax * 4 +  &M08077B2C))) {
                case 0:
                    goto L7;
                case 1:
                    goto L8;
                case 2:
                    goto L9;
                case 3:
                    goto L10;
                case 4:
                    goto L11;
                case 5:
                    goto L12;
            }
        case 4:
L7:
            __eax = 134707600;
            goto L45;
        case 5:
L8:
            __eax = 134707603;
            goto L29;
        case 6:
L9:
            __eax = 134707601;
            goto L45;
        case 7:
L10:
            __eax = 134697416;
            goto L45;
        case 8:
L11:
            __eax = 134707609;
            goto L45;
        case 9:
L12:
            __eax = 134707612;
            goto L45;
        case 0xa:
            __eax = __edi + 3;
            if(__eax > 6) {
                goto L21;
            }
            switch( *((intOrPtr*)(__eax * 4 +  &M08077B48))) {
                case 0:
                    goto L15;
                case 1:
                    goto L16;
                case 2:
                    goto L17;
                case 3:
                    goto L18;
                case 4:
                    goto L19;
                case 5:
                    goto L20;
                case 6:
                    goto L21;
            }
        case 0xb:
L15:
            __eax = "e#";
            goto L45;
        case 0xc:
L16:
            __eax = "exp(1.0)";
            goto L29;
        case 0xd:
L17:
            __eax = "%e";
            goto L45;
        case 0xe:
L18:
            __eax = "M_E";
            goto L45;
        case 0xf:
L19:
            __eax = "Math.E";
            goto L45;
        case 0x10:
L20:
            __eax = "math.e";
            goto L45;
        case 0x11:
L21:
            __eax = 134707627;
            goto L45;
        case 0x12:
            __edx = __edi + 1;
            __eax = 134707648;
            if(__edx > 4) {
                goto L45;
            }
            switch( *((intOrPtr*)(__edx * 4 +  &M08077B64))) {
                case 0:
                    goto L24;
                case 1:
                    goto L25;
                case 2:
                    goto L26;
                case 3:
                    goto L27;
                case 4:
                    goto L44;
            }
        case 0x13:
L24:
            __eax = "%pi";
            goto L29;
        case 0x14:
L25:
            __eax = "pi#";
            goto L45;
        case 0x15:
L26:
            __eax = "Math.PI";
            goto L45;
        case 0x16:
L27:
            __eax = "math.pi";
            goto L45;
        case 0x17:
L44:
            __eax = "M_PI";
L45:
            _t41 = 0;
            goto L30;
    }
L30:
    _t52 = _t49 >> 14 & 63;
    if(_t54 == 0) {
        _t38 = my_strlcpy( &var_str, _t38, 180);
    } else {
        _v36 = _t52 - 1;
        _v40 = _t38;
        _v44 = "%s%d";
        _v48 = 180;
        _v52 = 1;
        _v56 = 180;
         *__esp =  &var_str;
        __snprintf_chk();
    }
    goto L34;
}

int list_code(token_type* equation, int* np, union language_list language, int int_flag)
{// addr = 0x0806DE45
    int i;
    int j;
    int k;
    int i1;
    int i2;
    int min1;
    int cur_level;
    char* cp;
    char[499] buf;
    int len;
    intOrPtr _v32;
    char _v532;
    intOrPtr _v544;
    int _v548;
    char[179]* _v552;
    int _v556;
    intOrPtr _v560;
    signed int _v564;
    intOrPtr _v568;
    signed int _v572;
    signed int _v576;
    signed int _v580;
    signed int _v584;
    intOrPtr _v588;
    signed int _v592;
    intOrPtr* _v596;
    token_type* _v600;
    int _v604;
    intOrPtr _v608;
    intOrPtr _v632;
    char* _v636;
    char[179]* _v640;
    char[179]* _v644;
    char[179]* _v648;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t173;
    int _t175;
    intOrPtr* _t178;
    intOrPtr _t181;
    _unknown_ _t184;
    FILE* _t185;
    FILE* _t187;
    FILE* _t188;
    _unknown_ _t189;
    _unknown_ _t190;
    FILE* _t191;
    FILE* _t192;
    _unknown_ _t193;
    char[179]* _t194;
    FILE* _t195;
    signed int _t198;
    FILE* _t205;
    FILE* _t207;
    intOrPtr _t208;
    signed int _t209;
    intOrPtr _t210;
    signed int _t212;
    FILE* _t213;
    FILE* _t214;
    int* _t215;
    FILE* _t216;
    signed int _t219;
    intOrPtr _t221;
    _unknown_ _t224;
    intOrPtr _t227;
    int _t228;
    _unknown_ _t231;
    _unknown_ _t235;
    _unknown_ _t236;
    intOrPtr _t238;
    intOrPtr _t239;
    intOrPtr _t241;
    _unknown_ _t242;
    _unknown_ _t243;
    int* _t244;
    _unknown_ _t247;
    intOrPtr _t252;
    intOrPtr _t253;
    _unknown_ _t254;
    signed int _t257;
    _unknown_ _t260;
    int _t261;
    intOrPtr _t262;
    _unknown_ _t264;
    _unknown_ _t276;

    _v600 = equation;
    _t244 = np;
    _v576 = _t244;
    _v32 =  *gs:0x14];
    _v604 = min_level(_v600,  *_t244);
    _t173 = _v576;
    _v604 = _v604 - (_t173 & 4294967295 & );
    _v556 = 0;
    if( *_t173 <= 0) {
L68:
        _t175 = _v556;
        if(_t276 == 0) {
            return _t175;
        }
        __stack_chk_fail();
        return _t175;
    } else {
        _v548 = _v604;
        _v580 = 0;
        _v608 = language - 1;
        goto L2;
        do {
L2:
            _t178 = _v600 + (_v580 << 4);
            _v596 = _t178;
            _t219 = _v548 -  *((intOrPtr*)(_t178 + 4));
            _v564 = _t219;
            _t221 = (_t219 ^ _t219 >> 31) - (_t219 >> 31);
            _v560 = _t221;
            if(_t221 <= 0) {
L32:
                _t181 =  *_v596;
                if(_t181 == 1) {
                    __eflags = int_flag;
                    if(__eflags == 0) {
L49:
                        list_var( *(_v596 + 8), language);
                        _v640 =  &var_str;
                        _v644 = 134700660;
                        _v648 = 1;
                        _t185 = gfp;
                         *__esp = _t185;
                        __fprintf_chk();
                        _v556 = _t185 + _v556;
                        goto L63;
                    }
                    goto L46;
                }
                goto L33;
L46:
                __eflags = _v608 - 1;
                if(__eflags > 0) {
                    goto L49;
                }
                __eflags =  *(_v596 + 8) - 3;
                if(__eflags != 0) {
                    goto L49;
                }
                _v644 = "1i";
                _v648 = 1;
                _t188 = gfp;
                 *__esp = _t188;
                __fprintf_chk();
                _v556 = _t188 + _v556;
                goto L63;
            } else {
                _t198 = 1 + _v580;
                _v572 = _t198;
                _v584 = _t198;
                _v568 = _v600 + (_t198 << 4);
                _v552 = 1;
                _v588 = (_v580 << 4) + _v600 + 48;
                _v592 = _v572;
                goto L4;
                do {
L4:
                    if(_v564 <= 0) {
                        _v548 = 1 + _v548;
                        _t227 =  *_v576;
                        __eflags = _v572 - _t227;
                        if(__eflags >= 0) {
L30:
                            _v644 = 134699734;
                            _v648 = 1;
                            _t205 = gfp;
                             *__esp = _t205;
                            __fprintf_chk();
                            _v556 = _t205 + _v556;
                            goto L31;
                        }
                        _t252 = _v568;
                        _t208 =  *((intOrPtr*)(_t252 + 4));
                        __eflags = _v548 - _t208;
                        if(__eflags > 0) {
                            goto L30;
                        }
                        _t262 = _t252;
                        _t257 = _v584;
                        __eflags = _v548 - _t208;
                        if(_v548 != _t208) {
                            _t253 = _v588;
                            _t209 = _v592;
                            _v544 = _t227;
                            _t228 = _v548;
                            while(1) {
                                _t209 = _t209 + 2;
                                __eflags = _v544 - _t209;
                                if(__eflags <= 0) {
                                    break;
                                }
                                _t257 = _t209;
                                _t262 = _t253;
                                _t239 =  *((intOrPtr*)(_t253 + 4));
                                __eflags = _t228 - _t239;
                                if(__eflags <= 0) {
                                    _t253 = _t253 + 32;
                                    __eflags = _t228 - _t239;
                                    if(_t228 != _t239) {
                                        continue;
                                    }
L11:
                                    _t210 =  *((intOrPtr*)(_t262 + 8));
                                    __eflags = _t210 - 6;
                                    if(_t210 == 6) {
                                        _t212 = _t257 << 4;
                                        _t254 = _t212 + _v600 - 16;
                                        _t241 =  *((intOrPtr*)(_t254 + 4));
                                        __eflags = _t241 - _v548;
                                        if(_t241 != _v548) {
L20:
                                            __eflags = int_flag;
                                            if(__eflags == 0) {
                                                __eflags = language - 1;
                                                if(__eflags == 0) {
                                                    _v644 = 134707695;
                                                    _v648 = 1;
                                                    _t213 = gfp;
                                                     *__esp = _t213;
                                                    __fprintf_chk();
                                                    _v556 = _t213 + _v556;
                                                } else {
                                                    __eflags = language - 2;
                                                    if(__eflags == 0) {
                                                        _v644 = "Math.pow";
                                                        _v648 = 1;
                                                        _t214 = gfp;
                                                         *__esp = _t214;
                                                        __fprintf_chk();
                                                        _v556 = _t214 + _v556;
                                                    }
                                                }
                                            }
                                            goto L30;
                                        }
                                        goto L15;
                                    }
                                    __eflags = _t210 - 7;
                                    if(__eflags == 0) {
                                        _v644 = "fact";
                                        _v648 = 1;
                                        _t216 = gfp;
                                         *__esp = _t216;
                                        __fprintf_chk();
                                        _v556 = _t216 + _v556;
                                    }
                                    goto L30;
L15:
                                    _t215 = _t212 + _v600 + 16;
                                    __eflags = _t241 - _t215[1];
                                    if(_t241 != _t215[1]) {
                                        goto L20;
                                    }
                                    __eflags =  *_t215;
                                    if(__eflags != 0) {
                                        goto L20;
                                    }
                                    asm("fld qword [eax+0x8]");
                                    asm("fld dword [0x8072058]");
                                    asm("fxch st0, st1");
                                    asm("fucomip st0, st1");
                                    asm("fstp st0");
                                    if(__eflags != 0 || __eflags != 0) {
                                        goto L20;
                                    }
                                     *((intOrPtr*)(_t262 + 8)) = 3;
                                    _push(4 << 2);
                                    _push(_t254);
                                    _push(_t215);
                                    memcpy();
                                    __esp =  &((__esp)[3]);
                                }
                                goto L30;
                            }
                            goto L30;
                        }
                        goto L11;
                    } else {
                        _v548 = _v548 - 1;
                        _v644 = 134707624;
                        _v648 = 1;
                        _t207 = gfp;
                         *__esp = _t207;
                        __fprintf_chk();
                        _v556 = _t207 + _v556;
                    }
L31:
                    _v552 = _v552 + 1;
                } while(_v560 >= _v552);
                goto L32;
            }
L33:
            if(_t181 < 1) {
                asm("fld qword [ecx+0x8]");
                asm("fldz ");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags == 0 && __eflags == 0) {
                    asm("fldz ");
                    asm("fstp qword [ecx+0x8]");
                }
                __eflags = int_flag;
                if(__eflags == 0) {
                    asm("fld qword [ecx+0x8]");
                    asm("fstp qword [esp+0x18]");
                    _v632 = 15;
                    _v636 = "%#.*g";
                    _v640 = 500;
                    _v644 = 1;
                    _v648 = 500;
                     *__esp =  &_v532;
                    __snprintf_chk();
                    trim_zeros();
                } else {
                    asm("fld qword [eax+0x8]");
                    asm("fstp qword [esp+0x14]");
                    _v636 = "%.0f";
                    _v640 = 500;
                    _v644 = 1;
                    _v648 = 500;
                     *__esp =  &_v532;
                    __snprintf_chk();
                }
                asm("fld qword [eax+0x8]");
                asm("fldz ");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags <= 0) {
                    _v640 =  &_v532;
                    _v644 = 134700660;
                    _v648 = 1;
                    _t191 = gfp;
                     *__esp = _t191;
                    __fprintf_chk();
                    _v556 = _t191 + _v556;
                } else {
                    _v640 =  &_v532;
                    _v644 = "(%s)";
                    _v648 = 1;
                    _t192 = gfp;
                     *__esp = _t192;
                    __fprintf_chk();
                    _v556 = _t192 + _v556;
                }
                goto L63;
            }
            if(_t181 != 2) {
                goto L63;
            }
            asm("o16 nop ");
            _t238 = _v596;
            if( *(_t238 + 8) > 9) {
L53:
                _t194 = "(unknown operator)";
L62:
                _v640 = _t194;
                _v644 = 134700660;
                _v648 = 1;
                _t195 = gfp;
                 *__esp = _t195;
                __fprintf_chk();
                _v556 = _t195 + _v556;
                goto L63;
            }
            switch( *((intOrPtr*)( *(_t238 + 8) * 4 +  &M08077B78))) {
                case 0:
                    _t194 = " + ";
                    goto L62;
                case 1:
                    goto L53;
                case 2:
                    goto L62;
                case 3:
                    goto L62;
                case 4:
                    goto L62;
                case 5:
                    goto L62;
                case 6:
                    __eflags = int_flag;
                    if(__eflags != 0) {
L60:
                        goto L62;
                    }
                    __eflags = language - 3;
                    if(__eflags != 0) {
                        goto L62;
                    }
                    goto L60;
                case 7:
                    _v580 = 1 + _v580;
                    goto L62;
            }
            break;
L63:
            _v580 = 1 + _v580;
        } while( *_v576 > _v580);
        _t224 = _v548 - _v604;
        if(_t224 <= 0) {
            goto L68;
        }
        _t261 = _v556;
        while(1) {
L66:
            _v644 = 134707624;
            _v648 = 1;
            _t187 = gfp;
             *__esp = _t187;
            __fprintf_chk();
            _t261 = _t187 + _t261;
            _t224 = _t224 - 1;
            _t276 = _t224;
            if(_t276 <= 0) {
                break;
            }
        }
        _v556 = _t261;
        goto L68;
    }
}

int list_c_equation(int en, union language_list language, int int_flag)
{// addr = 0x0806E42E
    int len;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    FILE* _v32;
    _unknown_ _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    _unknown_ __ebp;
    FILE* _t47;
    FILE* _t48;
    signed int _t55;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t59;
    int _t62;
    _unknown_ _t63;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t55 = en;
    _t62 = 0;
    if( *((intOrPtr*)( &n_lhs + _t55 * 4)) <= 0) {
        return _t62;
    }
    _t59 = 0 + _t55 * 4;
    _t62 = list_code( *( &lhs + _t55 * 4), _t59 +  &n_lhs, language, int_flag);
    if( *((intOrPtr*)( &n_rhs + _t55 * 4)) != 0) {
        _v52 = 134699471;
        _v56 = 1;
        _t48 = gfp;
         *__esp = _t48;
        __fprintf_chk();
        _v32 = _t48;
        _t62 = _t62 + _v32 + list_code( *( &rhs + _t55 * 4), _t59 +  &n_rhs, language, int_flag);
    }
    if(language - 1 <= 1) {
        _v52 = 134707798;
        _v56 = 1;
        _t47 = gfp;
         *__esp = _t47;
        __fprintf_chk();
        _t62 = _t47 + _t62;
    }
    _v52 = 134699005;
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return _t62;
}

set_color(int color)
{// addr = 0x0806E52F
    intOrPtr _v16;
    int _v20;
    char* _v24;
    int __ebx;
    _unknown_ __ebp;
    _unknown_ _t36;
    _unknown_ _t44;
    _unknown_ _t52;
    _unknown_ _t59;
    _unknown_ _t64;
    _unknown_ _t70;

    __ebx = color;
    _t34 = gfp;
    if(gfp != __imp__stdout) {
        return ;
    }
    _t34 = cur_color;
    if(_t34 == __ebx) {
        return ;
    }
    if(color_flag == 0) {
        return ;
    }
    if(html_flag == 0) {
        _v16 =  *((intOrPtr*)( &carray + (__ebx - (__ebx * 715827883 >> 32) - (__ebx >> 31) + ((__ebx * 715827883 >> 32) - (__ebx >> 31)) * 2 + (__ebx * 715827883 >> 32) - (__ebx >> 31) + ((__ebx * 715827883 >> 32) - (__ebx >> 31)) * 2) * 4));
        _v20 = bold_colors;
        _v24 = 134707783;
         *__esp = 1;
        __printf_chk();
    } else {
        if(_t34 < 0) {
            _v24 = "</font>";
             *__esp = 1;
            __printf_chk();
        }
        if(bold_colors == 0) {
            _v20 =  *( &html_carray + (__ebx - 0 + (((__ebx * -1840700269 >> 32) + __ebx >> 2) - (__ebx >> 31)) * 8 - ((__ebx * -1840700269 >> 32) + __ebx >> 2) - (__ebx >> 31)) * 4);
            _v24 = "<font color="%s">";
             *__esp = 1;
            __printf_chk();
        } else {
            _v20 =  *( &bright_html_carray + (__ebx - 0 + (((__ebx * -1840700269 >> 32) + __ebx >> 2) - (__ebx >> 31)) * 8 - ((__ebx * -1840700269 >> 32) + __ebx >> 2) - (__ebx >> 31)) * 4);
            _v24 = "<font color="%s">";
             *__esp = 1;
            __printf_chk();
        }
    }
    cur_color = __ebx;
    return;
}

int flist_recurse(token_type* p1, int n, int out_flag, int line, int pos, int cur_level, int* highp, int* lowp)
{// addr = 0x0806E66C
    int i;
    int j;
    int k;
    int i1;
    int ii;
    int stop_at;
    int div_loc;
    int len_div;
    int level;
    int oflag;
    int html_out;
    int len;
    int len1;
    int len2;
    int high;
    int low;
    char[499] buf;
    char* cp;
    intOrPtr _v32;
    char _v532;
    signed int _v536;
    intOrPtr _v540;
    intOrPtr _v544;
    signed int _v548;
    signed int _v552;
    int _v556;
    int _v560;
    int _v564;
    intOrPtr _v568;
    signed int _v572;
    signed int _v576;
    signed int _v580;
    signed int _v584;
    signed int _v588;
    int _v592;
    signed int _v596;
    intOrPtr _v600;
    int _v604;
    FILE* _v608;
    FILE* _v612;
    int _v616;
    intOrPtr _v620;
    intOrPtr _v624;
    intOrPtr _v628;
    int _v632;
    int _v648;
    intOrPtr* _v652;
    intOrPtr* _v656;
    int _v660;
    signed int _v664;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    signed int _t340;
    int _t341;
    FILE* _t344;
    signed int _t346;
    signed int _t347;
    intOrPtr* _t356;
    signed int _t360;
    _unknown_ _t377;
    int _t378;
    signed int _t379;
    _unknown_ _t383;
    _unknown_ _t384;
    signed int _t385;
    intOrPtr _t387;
    signed int _t389;
    _unknown_ _t393;
    _unknown_ _t394;
    signed int _t395;
    intOrPtr _t397;
    intOrPtr* _t415;
    _unknown_ _t416;
    int _t421;
    FILE* _t423;
    int _t425;
    FILE* _t427;
    char* _t428;
    int _t433;
    int _t437;
    _unknown_ _t439;
    FILE* _t440;
    int _t442;
    int _t443;
    intOrPtr _t446;
    signed int _t448;
    signed int _t451;
    int _t453;
    intOrPtr _t456;
    int _t459;
    signed int _t460;
    int _t461;
    _unknown_ _t464;
    int _t465;
    signed int _t468;
    signed int _t471;
    _unknown_ _t477;
    _unknown_ _t480;
    intOrPtr _t482;
    _unknown_ _t484;
    int _t485;
    _unknown_ _t487;
    signed int _t488;
    intOrPtr* _t496;
    signed int _t497;
    int _t499;
    intOrPtr* _t503;
    intOrPtr _t506;
    _unknown_ _t515;
    signed int _t517;
    _unknown_ _t520;
    _unknown_ _t522;
    _unknown_ _t525;
    signed int _t526;
    intOrPtr _t527;
    _unknown_ _t529;
    int _t530;
    intOrPtr _t535;
    signed int _t537;
    signed int _t538;
    int _t539;
    int _t540;
    intOrPtr _t541;
    int _t543;
    signed int _t544;
    int _t545;

    _v568 = __eax;
    _v576 = __edx;
    _v600 = __ecx;
    _t437 = p1;
    _t340 = line;
    _v588 = _t340;
    _t499 = pos;
    _v592 = _t499;
    _v32 =  *gs:0x14];
     *_t340 = _t437;
     *_t499 = _t437;
    _v552 = 0;
    if(_v576 <= 0) {
L115:
        _t341 = _v552;
        if(__eflags == 0) {
            return _t341;
        }
        __stack_chk_fail();
        return _t341;
    } else {
        _v556 = 0;
        if(_v600 != 0) {
            _v556 = _t340 & 4294967295 & ;
        }
        _v616 = 0;
        if(html_flag != 0) {
            _v616 = gfp & 4294967295 & ;
        }
        if(_v556 != 0) {
L7:
            set_color(out_flag - 1);
            _t465 = n;
            __eflags = _t465 - cur_pos;
            if(_t465 <= cur_pos) {
                goto L6;
            } else {
                _t543 = _t437;
                _t461 = _t465;
                while(1) {
                    _v660 = 134707752;
                    _v664 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    _t433 = cur_pos + 1;
                    cur_pos = _t433;
                    __eflags = _t461 - _t433;
                    if(_t461 > _t433) {
                        continue;
                    } else {
                        _t437 = _t543;
                        goto L6;
                    }
                }
            }
            goto L7;
        }
L6:
        _t344 = _t437 + 1;
        _v612 = _t344;
        _t440 = _t437 - 1;
        _v608 = _t440;
        _v628 = _t344 + _t344;
        _v620 = _t440 + _t440;
        _t539 = out_flag;
        _v572 = _v576;
        _v552 = 0;
        _v560 = 0;
        _v580 = -1;
        _t346 = 0;
        goto L12;
        do {
            do {
L12:
                _t503 = (_t346 << 4) + _v568;
                if( *_t503 != 2 ||  *((intOrPtr*)(_t503 + 8)) != 4) {
                    goto L24;
                } else {
                    _t543 =  *(_t503 + 4);
                    _t537 = _t346 - 2;
                    if(_t537 <= 0) {
L19:
                        _t538 = _t537 + 1;
                        if(_v580 >= 0 || _t538 < _v572) {
L23:
                            _v580 = _t346;
                            _v572 = _t538;
                        } else {
                            if(_t538 != _v572) {
                                goto L24;
                            }
                            _v572 = _t538;
                            if(_t543 >=  *((intOrPtr*)((_v580 << 4) + _v568 + 4))) {
                                goto L24;
                            }
                            goto L23;
                        }
                        goto L24;
                    }
                    _t456 = _v568;
                    if(_t543 >  *((intOrPtr*)((_t537 << 4) + _t456 + 4))) {
                        goto L19;
                    }
                    _t496 = _t456 + (_t346 << 4) - 60;
                    while(1) {
L18:
                        _t537 = _t537 - 2;
                        if(_t537 <= 0) {
                            break;
                        }
                        _t496 = _t496 - 32;
                        __eflags = _t543 -  *_t496;
                        if(_t543 >  *_t496) {
                            goto L19;
                        }
                    }
                    goto L19;
                }
                break;
L24:
                _t346 = _t346 + 1;
            } while(_v576 > _t346);
            _t347 = _v580;
            _v596 = _t347;
            _v584 = (_t347 << 4) + _v568;
            goto L26;
            do {
L26:
                if(_v572 != _v560) {
                    _t468 = _t539 -  *((intOrPtr*)((_v560 << 4) + _v568 + 4));
                    _v548 = _t468;
                    _v544 = (_t468 ^ _t468 >> 31) - (_t468 >> 31);
                } else {
                    _t360 = _t539 -  *(_v584 + 4);
                    _v548 = _t360;
                    _v544 = (_v548 ^ _t360 >> 31) - (_t360 >> 31) - 1;
                }
                if(_v544 <= 0) {
                    if(_v572 != _v560) {
                        _t471 = _v560;
                        _t356 = (_t471 << 4) + _v568;
                        _t506 =  *_t356;
                        __eflags = _t506 - 1;
                        if(_t506 == 1) {
                            _v552 = _v552 + list_var( *(_t356 + 8), 0);
                            __eflags = _v556;
                            if(_v556 == 0) {
L101:
                                _t442 = _v560;
                                goto L102;
                            }
                            goto L85;
                        }
                        goto L60;
L85:
                        _v656 =  &var_str;
                        _v660 = 134700660;
                        _v664 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                        _t442 = _v560;
                        goto L102;
                    }
                    goto L39;
L60:
                    __eflags = _t506 - 1;
                    if(__eflags < 0) {
                        asm("fld qword [eax+0x8]");
                        asm("fldz ");
                        asm("fxch st0, st1");
                        asm("fucomi st0, st1");
                        asm("fstp st1");
                        if(__eflags != 0 || __eflags != 0) {
                            asm("fld1 ");
                            asm("fchs ");
                            asm("fxch st0, st1");
                            asm("fucomi st0, st1");
                            asm("fstp st1");
                            if(__eflags != 0 || __eflags != 0) {
L74:
                                _t421 = finance_option;
                                __eflags = _t421;
                                if(__eflags == 0) {
                                    asm("fldz ");
                                    asm("fucomip st0, st1");
                                    if(__eflags <= 0) {
L81:
                                        asm("fstp qword [esp+0x18]");
                                        _v648 = precision;
                                        _v652 = 134699448;
                                        _v656 = 500;
                                        _v660 = 1;
                                        _v664 = 500;
                                        _t423 =  &_v532;
                                         *__esp = _t423;
                                        __snprintf_chk();
                                        _v552 = _t423 + _v552;
                                        _t442 = _v560;
                                        goto L82;
                                    }
                                    goto L79;
                                }
                                goto L75;
L79:
                                __eflags = negate_highest_precedence;
                                if(negate_highest_precedence != 0) {
                                    goto L81;
                                }
                                asm("fstp qword [esp+0x18]");
                                _t425 = precision;
                                _v648 = _t425;
                                _v652 = "(%.*g)";
                                _v656 = 500;
                                _v660 = 1;
                                _v664 = 500;
                                 *__esp =  &_v532;
                                __snprintf_chk();
                                _v552 = _v552 + _t425;
                                _t442 = _v560;
                                goto L82;
                            } else {
                                __eflags = _v560;
                                if(_v560 == 0) {
L70:
                                    _t442 = _v560 + 1;
                                    __eflags = _v576 - _t442;
                                    if(_v576 <= _t442) {
                                        goto L74;
                                    }
                                    goto L71;
                                }
                                _t517 = _t471 - 1 << 4;
                                _t446 = _v568;
                                __eflags =  *((intOrPtr*)(_t517 + _t446 + 4)) -  *((intOrPtr*)(_t356 + 4));
                                if( *((intOrPtr*)(_t517 + _t446 + 4)) >=  *((intOrPtr*)(_t356 + 4))) {
                                    goto L74;
                                }
                                goto L70;
L71:
                                _t515 = (_t471 << 4) + _v568 + 16;
                                __eflags =  *((intOrPtr*)(_t356 + 4)) -  *((intOrPtr*)(_t515 + 4));
                                if( *((intOrPtr*)(_t356 + 4)) !=  *((intOrPtr*)(_t515 + 4))) {
                                    goto L74;
                                }
                                __eflags =  *((intOrPtr*)(_t515 + 8)) - 3;
                                if( *((intOrPtr*)(_t515 + 8)) != 3) {
                                    goto L74;
                                }
                                asm("fstp st0");
                                _v652 = 134687067;
                                _v656 = 500;
                                _v660 = 1;
                                _v664 = 500;
                                _t427 =  &_v532;
                                 *__esp = _t427;
                                __snprintf_chk();
                                _v552 = _t427 + _v552;
L82:
                                __eflags = _v556;
                                if(_v556 != 0) {
                                    _v656 =  &_v532;
                                    _v660 = 134700660;
                                    _v664 = 1;
                                     *__esp = gfp;
                                    __fprintf_chk();
                                }
                                goto L102;
                            }
L75:
                            asm("fldz ");
                            asm("fucomip st0, st1");
                            if(__eflags <= 0) {
                                asm("fstp qword [esp+0x18]");
                                _v648 = _t421;
                                _v652 = "%.*f";
                                _v656 = 500;
                                _v660 = 1;
                                _v664 = 500;
                                 *__esp =  &_v532;
                                __snprintf_chk();
                                _v552 = _v552 + _t421;
                                _t442 = _v560;
                            } else {
                                asm("fstp qword [esp+0x18]");
                                _v648 = _t421;
                                _v652 = "(%.*f)";
                                _v656 = 500;
                                _v660 = 1;
                                _v664 = 500;
                                 *__esp =  &_v532;
                                __snprintf_chk();
                                _v552 = _v552 + _t421;
                                _t442 = _v560;
                            }
                            goto L82;
                        }
                        asm("fstp st0");
                        asm("fldz ");
                        asm("fst qword [eax+0x8]");
                        goto L74;
                    }
                    __eflags = _t506 - 2;
                    if(_t506 != 2) {
                        goto L101;
                    }
                    _t543 = _t543;
                    __eflags =  *(_t356 + 8) - 9;
                    if( *(_t356 + 8) > 9) {
L98:
                        _v552 = _v552 + 18;
                        _t428 = "(unknown operator)";
                    } else {
                        switch( *((intOrPtr*)( *(_t356 + 8) * 4 +  &M08077BA0))) {
                            case 0:
                                _v552 = _v552 + 3;
                                _t428 = " + ";
                                goto L99;
                            case 1:
                                __eflags = _v616;
                                __edx = " - ";
                                __eax =  ?_? (" &minus; ");
                                __eax = _v616 == 0 ? __edx : " &minus; ";
                                _v552 = _v552 + 3;
                                goto L99;
                            case 2:
                                __eflags = _v616;
                                __edx = 134707755;
                                __eax =  ?_? ("&middot;");
                                __eax = _v616 == 0 ? __edx : "&middot;";
                                _v552 = _v552 + 1;
                                goto L99;
                            case 3:
                                _v552 = _v552 + 1;
                                __eax = 134707839;
                                goto L99;
                            case 4:
                                _v552 = _v552 + 2;
                                __eax = "//";
                                goto L99;
                            case 5:
                                _v552 = _v552 + 3;
                                __eax = " % ";
                                goto L99;
                            case 6:
                                __eflags = power_starstar;
                                if(power_starstar == 0) {
                                    _v552 = _v552 + 1;
                                    __eax = "^";
                                } else {
                                    _v552 = _v552 + 2;
                                    __eax = "**";
                                }
                                goto L99;
                            case 7:
                                _v552 = _v552 + 1;
                                _v560 = _v560 + 1;
                                __eax = "!";
                                goto L99;
                            case 8:
                                goto L98;
                        }
                    }
L99:
                    __eflags = _v556;
                    if(_v556 == 0) {
                        goto L101;
                    }
                    _v656 = _t428;
                    _v660 = 134700660;
                    _v664 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    _t442 = _v560;
                    goto L102;
                } else {
                    _t543 = _v552 + 1;
                    _t453 = 1;
                    while() {
                    }
                }
L39:
                _v632 = _t539;
                _t543 =  *(_v584 + 4);
                _t448 = _v552 + n;
                _v548 = _t448;
                _v604 = _v580 - _v572;
                _v584 = (_v572 << 4) + _v568;
                _v652 =  &_v540;
                _v656 =  &_v536;
                _v660 = _t543;
                _v664 = _t448;
                 *__esp = _v612;
                _v564 = flist_recurse();
                _v624 = _v540;
                _t451 = _v580 + 2;
                if(_v576 <= _t451) {
L44:
                    _v580 = _t451 +  !_v580;
                    _v572 = (_v596 << 4) + _v568 + 16;
                    _v652 =  &_v540;
                    _v656 =  &_v536;
                    _v660 = _t543;
                    _v664 = _v548;
                     *__esp = _v608;
                    _t378 = flist_recurse();
                    _v560 = _t378;
                    _v596 = _v536;
                    _t482 = _t378 - _v564 >= 0 ? _t378 : _v564;
                    _v544 = _t482;
                    _t379 = 0;
                    if(_v564 < _t482) {
                        _t379 = (_t482 - _v564 >> 31) + _t482 - _v564 >> 1;
                    }
                    flist_recurse(_v628 - _v624, _t379 + _v548, _t543,  &_v536,  &_v540);
                    _t385 = _v536;
                    _t526 = _v588;
                    _t386 =  *_t526 - _t385 >= 0 ?  *_t526 : _t385;
                     *_t526 =  *_t526 - _t385 >= 0 ?  *_t526 : _t385;
                    _t387 = _v540;
                    _t485 = _v592;
                    _t388 =  *_t485 - _t387 <= 0 ?  *_t485 : _t387;
                     *_t485 =  *_t485 - _t387 <= 0 ?  *_t485 : _t387;
                    if(_v556 == 0) {
                        goto L55;
                    }
                    set_color(_t543 - 1);
                    if(_v544 <= 0) {
                        set_color(_v632 - 1);
                        goto L55;
                    }
                    _v584 = _t451;
                    _t460 = 0;
                    _v564 = _t543;
                    _v604 = _t539;
                    _t545 = _v616;
                    _t541 = _v544;
                    while() {
                    }
                    goto L55;
                }
                _t535 = _v568;
                if(_t543 >=  *((intOrPtr*)((_t451 << 4) + _t535 + 4))) {
                    goto L44;
                }
                _t415 = _t535 + (_v580 << 4) + 68;
                _t497 = _v576;
                while(1) {
L43:
                    _t451 = _t451 + 2;
                    if(_t497 <= _t451) {
                        break;
                    }
                    _t415 = _t415 + 32;
                    __eflags = _t543 -  *_t415;
                    if(_t543 >=  *_t415) {
                        goto L44;
                    }
                }
                goto L44;
L102:
                _t443 = _t442 + 1;
                _v560 = _t443;
                __eflags = _v576 - _t443;
            } while(__eflags > 0);
L103:
            _t459 = _t539 - out_flag;
            if(_t459 <= 0) {
                __eflags = _v556;
                if(__eflags == 0) {
                    goto L115;
                }
                goto L112;
            }
            _t540 = _t539 - 2;
            _t544 = _v552;
            while(1) {
                _t544 = _t544 + 1;
                _t459 = _t459 - 1;
                if(_v556 != 0) {
                    break;
                }
                __eflags = _t459;
                if(__eflags > 0) {
L105:
                    _t540 = _t540 - 1;
                    continue;
                }
                _v552 = _t544;
                asm("o16 nop ");
                goto L115;
            }
            _v660 = 134707624;
            _v664 = 1;
             *__esp = gfp;
            __fprintf_chk();
            if(_t459 <= 0) {
                _v552 = _t544;
                goto L114;
            }
            set_color(_t540);
            goto L105;
L114:
            cur_pos = cur_pos + _v552;
            goto L115;
L112:
            goto L114;
L55:
            _t389 = 0;
            _t527 = _v544;
            if(_v560 < _t527) {
                _t389 = (_t527 - _v560 >> 31) + _t527 - _v560 >> 1;
            }
            flist_recurse(_v620 - _v596, _t389 + _v548, _t543,  &_v536,  &_v540);
            _t395 = _v536;
            _t488 = _v588;
            _t396 =  *_t488 - _t395 >= 0 ?  *_t488 : _t395;
             *_t488 =  *_t488 - _t395 >= 0 ?  *_t488 : _t395;
            _t397 = _v540;
            _t530 = _v592;
            _t398 =  *_t530 - _t397 <= 0 ?  *_t530 : _t397;
             *_t530 =  *_t530 - _t397 <= 0 ?  *_t530 : _t397;
            _v552 = _v552 + _v544;
        } while(_v576 > _t451);
        goto L103;
    }
}

int list_string_sub(token_type* p1, int n, int outflag, char* string, int export_flag)
{// addr = 0x0806F191
    int i;
    int j;
    int k;
    int i1;
    int min1;
    int cur_level;
    char* cp;
    int len;
    char[499] buf;
    char[499] buf2;
    int export_precision;
    int cflag;
    char _v3;
    intOrPtr _v32;
    signed int _v33;
    signed int _v39;
    char _v532;
    char _v1032;
    int _v1040;
    int _v1044;
    intOrPtr _v1048;
    signed int _v1052;
    signed int _v1056;
    signed int _v1060;
    intOrPtr* _v1064;
    signed int _v1068;
    int _v1072;
    token_type* _v1076;
    int _v1080;
    signed int _v1084;
    char* _v1088;
    int _v1112;
    char* _v1116;
    char[179]* _v1120;
    char[179]* _v1124;
    char[179]* _v1128;
    signed int _v1459091752;
    signed int _v1710749972;
    signed int __ebx;
    signed int* __edi;
    signed int __esi;
    char* __ebp;
    _unknown_ _t502;
    int _t506;
    int _t507;
    intOrPtr* _t512;
    intOrPtr _t515;
    _unknown_ _t518;
    _unknown_ _t519;
    int _t522;
    _unknown_ _t528;
    _unknown_ _t529;
    _unknown_ _t531;
    _unknown_ _t537;
    signed int _t544;
    _unknown_ _t546;
    _unknown_ _t556;
    _unknown_ _t557;
    _unknown_ _t558;
    char[179]* _t571;
    int _t572;
    _unknown_ _t573;
    _unknown_ _t574;
    _unknown_ _t576;
    _unknown_ _t578;
    _unknown_ _t580;
    _unknown_ _t582;
    signed int _t584;
    _unknown_ _t589;
    signed int _t592;
    intOrPtr _t594;
    _unknown_ _t599;
    _unknown_ _t605;
    _unknown_ _t608;
    intOrPtr _t610;
    _unknown_ _t612;
    _unknown_ _t613;
    _unknown_ _t614;
    _unknown_ _t615;
    int _t617;
    signed int _t618;
    char[179]* _t621;
    _unknown_ _t623;
    _unknown_ _t625;
    _unknown_ _t627;
    _unknown_ _t631;
    _unknown_ _t650;

    _v1076 = p1;
    _t584 = string;
    _v1056 = _t584;
    _v32 =  *gs:0x14];
    _v1060 = _t584 & 4294967295 &  & 0;
    if(_v1056 != 0) {
         *_v1056 = 0;
    }
    asm("sbb eax, eax");
    _v1080 = 0x14;
    _t506 = min_level(_v1076, n);
    _v1072 = _t506;
    _v1044 = 0;
    if(n <= 0) {
L89:
        _t507 = _v1044;
        if(_t650 == 0) {
            return _t507;
        }
L90:
        __stack_chk_fail();
        return _t507;
    }
    _v1040 = _t506;
    _v1068 = 0;
    _v1084 =  ~export_flag;
    _v1088 =  &_v532;
    goto L4;
    do {
L4:
        _t512 = _v1076 + (_v1068 << 4);
        _v1064 = _t512;
        _t592 = _v1040 -  *((intOrPtr*)(_t512 + 4));
        _v1052 = _t592;
        _t594 = (_t592 ^ _t592 >> 31) - (_t592 >> 31);
        _v1048 = _t594;
        if(_t594 <= 0) {
            _t515 =  *_v1064;
            if(_t515 == 1) {
                list_var( *(_v1064 + 8), _v1084);
                __eflags = _v1056;
                if(_v1056 != 0) {
                    _v1128 =  &var_str;
                     *__esp = _v1056 + _v1044;
                    L08049114();
                }
                __eflags = outflag;
                if(__eflags != 0) {
                    _v1120 =  &var_str;
                    _v1124 = 134700660;
                    _v1128 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                }
                asm("repne scasb ");
                _v1044 = _v1044 +  !-1 - 1;
                goto L78;
            }
            goto L22;
        }
        _t625 = 1 + _v1044;
        _t623 = _v1056 + _v1044;
        _t571 = 1;
        while() {
        }
L22:
        if(_t515 < 1) {
            asm("fld qword [eax+0x8]");
            asm("fldz ");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags == 0 && __eflags == 0) {
                asm("fldz ");
                asm("fstp qword [eax+0x8]");
            }
            __eflags = export_flag - 3;
            if(__eflags != 0) {
                __eflags = export_flag;
                if(__eflags != 0) {
L32:
                    asm("fld qword [eax+0x8]");
                    asm("fstp qword [esp+0x18]");
                    _v1112 = _v1080;
                    _v1116 = 134699448;
                    _v1120 = 500;
                    _v1124 = 1;
                    _v1128 = 500;
                     *__esp =  &_v532;
                    __snprintf_chk();
                    goto L44;
                }
            } else {
                asm("fld qword [eax+0x8]");
                asm("fstp qword [esp+0x18]");
                _v1112 = 15;
                _v1116 = "%#.*g";
                _v1120 = 500;
                _v1124 = 1;
                _v1128 = 500;
                 *__esp =  &_v532;
                __snprintf_chk();
                trim_zeros();
L44:
                asm("fld qword [edx+0x8]");
                asm("fldz ");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags <= 0) {
                    __eflags = _v1056;
                    if(_v1056 != 0) {
                        _v1128 =  &_v532;
                         *__esp = _v1056 + _v1044;
                        L08049114();
                    }
                    __eflags = outflag;
                    if(__eflags != 0) {
                        _v1120 =  &_v532;
                        _v1124 = 134700660;
                        _v1128 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                    }
                    asm("repne scasb ");
                    _v1044 = _v1044 +  !-1 - 1;
                } else {
                    _v1112 =  &_v532;
                    _v1116 = "(%s)";
                    _v1120 = 500;
                    _v1124 = 1;
                    _v1128 = 500;
                     *__esp =  &_v1032;
                    __snprintf_chk();
                    __eflags = _v1056;
                    if(_v1056 != 0) {
                        _v1128 =  &_v1032;
                         *__esp = _v1056 + _v1044;
                        L08049114();
                    }
                    __eflags = outflag;
                    if(__eflags != 0) {
                        _v1120 =  &_v1032;
                        _v1124 = 134700660;
                        _v1128 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                    }
                    asm("repne scasb ");
                    _v1044 = _v1044 +  !-1 - 1;
                }
                goto L78;
            }
L31:
            __eflags = high_prec;
            if(__eflags == 0) {
                _t544 = finance_option;
                __eflags = _t544;
                if(__eflags == 0) {
                    asm("fld qword [edx+0x8]");
                    asm("fldz ");
                    asm("fucomip st0, st1");
                    if(__eflags <= 0) {
L38:
                        asm("fstp qword [esp+0x18]");
                        _v1112 = precision;
                        _v1116 = 134699448;
                        _v1120 = 500;
                        _v1124 = 1;
                        _v1128 = 500;
                         *__esp =  &_v532;
                        __snprintf_chk();
                        goto L39;
                    }
                    goto L36;
L39:
                    __eflags = _v1056;
                    if(_v1056 != 0) {
                        _v1128 =  &_v532;
                         *__esp = _v1056 + _v1044;
                        L08049114();
                    }
                    __eflags = outflag;
                    if(__eflags != 0) {
                        _v1120 =  &_v532;
                        _v1124 = 134700660;
                        _v1128 = 1;
                         *__esp = gfp;
                        __fprintf_chk();
                    }
                    asm("repne scasb ");
                    _v1044 = _v1044 +  !-1 - 1;
                    goto L78;
                }
                goto L34;
L36:
                __eflags = negate_highest_precedence;
                if(negate_highest_precedence != 0) {
                    goto L38;
                }
                asm("fstp qword [esp+0x18]");
                _v1112 = precision;
                _v1116 = "(%.*g)";
                _v1120 = 500;
                _v1124 = 1;
                _v1128 = 500;
                 *__esp =  &_v532;
                __snprintf_chk();
                goto L39;
            }
            goto L32;
L34:
            asm("fld qword [edx+0x8]");
            asm("fstp qword [esp+0x18]");
            _v1112 = _t544;
            _v1116 = "%.*f";
            _v1120 = 500;
            _v1124 = 1;
            _v1128 = 500;
             *__esp =  &_v532;
            __snprintf_chk();
            goto L44;
        }
        if(_t515 != 2) {
            goto L78;
        }
        _t625 = _t625;
        _t610 = _v1064;
        if( *(_t610 + 8) > 9) {
L63:
            _t621 = "(unknown operator)";
L73:
            if(_v1056 != 0) {
                _v1128 = _t621;
                 *__esp = _v1056 + _v1044;
                L08049114();
            }
            if(outflag != 0) {
                _v1120 = _t621;
                _v1124 = 134700660;
                _v1128 = 1;
                 *__esp = gfp;
                __fprintf_chk();
            }
            asm("repne scasb ");
            _v1044 = _v1044 +  !-1 - 1;
            goto L78;
        }
        switch( *((intOrPtr*)( *(_t610 + 8) * 4 +  &M08077BC8))) {
            case 0:
                _t621 = " + ";
                goto L73;
            case 1:
                goto L63;
            case 2:
                __edi = " - ";
                goto L73;
            case 3:
                __edi = 134707755;
                goto L73;
            case 4:
                __edi = 134707839;
                goto L73;
            case 5:
                __edi = "//";
                goto L73;
            case 6:
                __edi = " % ";
                goto L73;
            case 7:
                __eflags = power_starstar;
                if(__eflags != 0) {
L71:
                    __edi = "**";
                    goto L73;
                }
                __edi = "^";
                __eflags = export_flag - 3;
                if(__eflags != 0) {
                    goto L73;
                }
                goto L71;
            case 8:
                _v1068 = 1 + _v1068;
                __edi = "!";
                goto L73;
            case 9:
                __esi = __esi &  *__eax;
                 *(__esi + 70) =  *(__esi + 70) ^ __eax & 4294967295;
                 *__eax =  *__eax ^ __edx & 4294967295;
                 *__ebx =  *__ebx + (__eax & 4294967295);
                goto L93;
            case 0xa:
L93:
                __eax = __eax &  *(__esi + 70);
                __esi = 1 + __esi;
                __esi = 1 + __esi;
                 *__eax =  *__eax ^ __edx & 4294967295;
                 *__ebx =  *__ebx + (__eax & 4294967295);
                goto L94;
            case 0xb:
L94:
                __eax = __eax &  *(__esi + 70);
                 *__eax =  *__eax ^ __edx & 4294967295;
                 *__eax =  *__eax ^ __edx & 4294967295;
                 *__ebx =  *__ebx + (__eax & 4294967295);
                goto L95;
            case 0xc:
L95:
                __eax = __eax &  *(__esi + 70);
                __eflags =  *__eax - __esi;
                 *__eax =  *__eax ^ __edx & 4294967295;
                 *__ebx =  *__ebx + (__eax & 4294967295);
                goto L96;
            case 0xd:
L96:
                __eax = __eax &  *(__esi + 70);
                 *__eax =  *__eax ^ __edx & 4294967295;
                __esi = 1 + __esi;
                __esi = 1 + __esi;
                 *__ebx =  *__ebx + (__eax & 4294967295);
                goto L97;
            case 0xe:
L97:
                __esi = __esi &  *__eax;
                 *(__esi + 70) =  *(__esi + 70) ^ __eax & 4294967295;
                __esi = 1 + __esi;
                __esi = 1 + __esi;
                 *__ebx =  *__ebx + (__eax & 4294967295);
                goto L98;
            case 0xf:
L98:
                __esi = __esi &  *__eax;
                 *__eax =  *__eax ^ __edx & 4294967295;
                 *(__esi + 70) =  *(__esi + 70) ^ __eax & 4294967295;
                (__edi)[0x1c] = (__edi)[0x1c] + (__eax & 4294967295);
                goto L99;
            case 0x10:
L99:
                asm("a16 jb 0x68");
                asm("outsb ");
                (__edi)[0x1b] = (__edi)[0x1b] + (__ecx & 4294967295);
                goto L100;
            case 0x11:
L100:
                asm("outsd ");
                asm("insb ");
                __esi = __esi *  *(__esi + 101);
                goto L101;
            case 0x12:
L101:
                if(__eflags < 0) {
                    goto L112;
                }
                 *fs:ebp+0x61] =  *fs:ebp+0x61] + (__ecx & 4294967295);
                goto L103;
            case 0x13:
L103:
                asm("insd ");
                asm("popad ");
                if(__eflags < 0) {
                    goto L113;
                }
                asm("outsd ");
                asm("outsb ");
                 *((intOrPtr*)(__eax + 117)) =  *((intOrPtr*)(__eax + 117)) + (__edx & 4294967295);
                goto L105;
            case 0x14:
L105:
                if(__eflags >= 0) {
                    goto L116;
                }
                if(__eflags < 0) {
                    goto L115;
                }
                asm("insb ");
                 *gs:ebp+0x61] =  *gs:ebp+0x61] + (__edx & 4294967295);
                goto L108;
            case 0x15:
L108:
                if(__eflags == 0) {
                    goto L114;
                }
                asm("popad ");
                asm("insb ");
                 *((intOrPtr*)(__esi + 97)) =  *((intOrPtr*)(__esi + 97)) + (__ecx & 4294967295);
                goto L110;
            case 0x16:
L110:
                asm("outsb ");
                asm("popad ");
                if(__eflags <= 0) {
L117:
                    asm("jecxz 0x8");
                    _v33 = _v33 | __ebx & 4294967295;
                    _push(es);
                     *(__ebx + 6) =  *(__ebx + 6) | __eax & 4294967295;
                     *(__ebx + 6) =  *(__ebx + 6) | __ebx & 4294967295;
                     *(__ecx - 29) =  *(__ecx - 29) | __eax & 4294967295;
                    _push(es);
                     *(__esi - 29) =  *(__esi - 29) | __edx & 4294967295;
                    _push(es);
                     *(__edx + -402127120) =  *(__edx + -402127120) | __ebx & 4294967295;
                    asm("out dx, eax");
                    _push(es);
                    asm("out dx, eax");
                    _push(es);
                     *__ecx =  *__ecx | __ebx & 4294967295;
                    asm("lock push es");
                     *__esi =  *__esi | __edx & 4294967295;
                    asm("lock push es");
                     *(__edx - 16) =  *(__edx - 16) | __edx & 4294967295;
                    _push(es);
                     *(__eax - 16) =  *(__eax - 16) | __eax & 4294967295;
                    _push(es);
                    _v1710749972 = _v1710749972 | __eax & 4294967295;
                    asm("lock push es");
                     *(__eax + 6 + __esi * 8) =  *(__eax + 6 + __esi * 8) | __eax & 4294967295;
                     *__esi & 116902664 =  *__esi & 116908040;
                     *__esi & 116913416 =  *__esi & 116922120;
                    __eflags =  *__esi & 116911624;
                     *(__ecx + -1190656134) =  *(__ecx + -1190656134) | __edx & 4294967295;
                    if(__eflags != 0) {
L120:
                        _pop(es);
                    }
                    goto L118;
                    if (__eflags != 0) goto L126;
L122:
                    _pop(es);
                }
                 *__eax =  *__eax + (__eax & 4294967295);
                 *__eax =  *__eax + (__eax & 4294967295);
                __eax = __eax - 1;
                asm("fadd qword [esi]");
                 *(__ebx + 218629852) =  *(__ebx + 218629852) | __edx & 4294967295;
                asm("fld qword [esi]");
                 *(__ebx - 36) =  *(__ebx - 36) | __eax & 4294967295;
                _push(es);
                 *__ecx =  *__ecx | __ebx & 4294967295;
                asm("fadd qword [esi]");
                 *__edi =  *__edi | __ecx & 4294967295;
                asm("fadd qword [esi]");
                 *(__esp + 6 + __ebx * 8) =  *(__esp + 6 + __ebx * 8) | __ebx & 4294967295;
                 *(__ebx + 1913128668) =  *(__ebx + 1913128668) | __ecx & 4294967295;
                asm("fadd qword [esi]");
                _v1459091752 = _v1459091752 | __edx & 4294967295;
                asm("fadd qword [esi]");
                 *(__ecx + -1626863908) =  *(__ecx + -1626863908) | __ecx & 4294967295;
                asm("fadd qword [esi]");
                asm("fadd qword [esi]");
                 *__ebx =  *__ebx | __eax & 4294967295;
                asm("fld qword [esi]");
                asm("fadd qword [esi]");
                asm("fadd qword [esi]");
                asm("fadd qword [esi]");
L112:
                asm("out dx, eax");
                asm("fadd qword [esi]");
                asm("fadd qword [esi]");
                 *822609629 =  *822609629 | __eax & 4294967295;
                asm("fld qword [esi]");
                 *__esi =  *__esi | __edx & 4294967295;
L113:
                asm("fiadd word [ss:esi]");
L114:
                _push(es);
                 *__ebx =  *__ebx | __ebx & 4294967295;
                asm("fld qword [esi]");
                _v39 = _v39 | __eax & 4294967295;
L115:
                __ebp =  &_v3;
                asm("fld qword [esi]");
L116:
                 *(__ecx - 29) =  *(__ecx - 29) | __eax & 4294967295;
                _push(es);
                 *__edx =  *__edx | __ebx & 4294967295;
                asm("jecxz 0x8");
                 *(__eax - 29) =  *(__eax - 29) | __ecx & 4294967295;
                _push(es);
                 *(__edi - 29) =  *(__edi - 29) | __ecx & 4294967295;
                _push(es);
                 *(__esi - 29) =  *(__esi - 29) | __edx & 4294967295;
                goto L117;
L118:
                if(__eflags != 0) {
                    goto L122;
                }
                if (__eflags != 0) goto L124;
                goto L120;
                if (__eflags != 0) goto L128;
                _pop(es);
        }
        break;
L78:
        _v1068 = 1 + _v1068;
    } while(n > _v1068);
    _t522 = _v1044;
    _t617 = _v1040 - _v1072;
    if(_t617 <= 0) {
        goto L89;
    }
    _v1040 = _t522;
    _t627 = _v1056 + _t522;
    _t572 = _t617;
    _v1044 = _t617;
    _t618 = _v1056;
    while() {
    }
    goto L90;
}

int list_string(token_type* p1, int n, char* string, int export_flag)
{// addr = 0x0806F95B
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    return list_string_sub(p1, n, 0, string, export_flag);
}

char* list_expression(token_type* p1, int n, int export_flag)
{// addr = 0x0806F98B
    int len;
    char* cp;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    char* _t21;
    _unknown_ _t23;
    char* _t25;
    _unknown_ _t26;
    int _t28;
    _unknown_ _t29;
    int _t31;
    _unknown_ _t32;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t31 = n;
    _t28 = export_flag;
    _t25 = 0;
    if(_t31 <= 0) {
        return _t25;
    }
    _t21 = malloc(list_string(p1, _t31, 0, _t28) + 1);
    _t25 = _t21;
    if(_t21 == 0) {
        error("Out of memory (can't malloc(3)).");
        return _t25;
    }
    list_string(p1, _t31, _t21, _t28);
    return _t25;
}

char* list_equation(int n, int export_flag)
{// addr = 0x0806FA09
    int len;
    char* cp;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    int _t50;
    int _t53;
    char* _t55;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t60;
    _unknown_ _t65;
    signed int _t70;
    _unknown_ _t71;
    _unknown_ _t72;
    _unknown_ _t74;
    _unknown_ _t76;
    int _t79;
    _unknown_ _t81;
    _unknown_ _t83;
    _unknown_ _t84;
    _unknown_ _t85;
    _unknown_ _t86;
    char* _t88;
    _unknown_ _t89;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t70 = n;
    _t50 =  *( &n_lhs + _t70 * 4);
    _t88 = 0;
    if(_t50 <= 0) {
        return _t88;
    }
    _t53 = list_string( *( &lhs + _t70 * 4), _t50, 0, export_flag);
    _t79 =  *( &n_rhs + _t70 * 4);
    if(_t79 != 0) {
        _t53 = list_string( *( &rhs + _t70 * 4), _t79, 0, export_flag) + _t53 + 3;
    }
    _t55 = malloc(_t53 + 2);
    _t88 = _t55;
    if(_t55 != 0) {
        list_string( *( &lhs + _t70 * 4),  *( &n_lhs + _t70 * 4), _t55, export_flag);
        if( *( &n_rhs + _t70 * 4) != 0) {
            asm("repne scasb ");
            _t88[ !-1 - 1] = 2112800;
            asm("repne scasb ");
            list_string( *( &rhs + _t70 * 4),  *( &n_rhs + _t70 * 4),  &(_t88[ !-1 - 1]), export_flag);
        }
        if(export_flag != 1) {
            return _t88;
        }
        asm("repne scasb ");
        _t88[ !-1 - 1] = 59;
        return _t88;
    }
    error("Out of memory (can't malloc(3)).");
    return _t88;
}

int list_proc(token_type* p1, int n, int export_flag)
{// addr = 0x0806FB4B
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    return list_string_sub(p1, n, 1, 0, export_flag);
}

list_debug(int level, token_type* p1, int n1, token_type* p2, int n2)
{// addr = 0x0806FB7C
    intOrPtr _v8;
    intOrPtr _v12;
    FILE* _v16;
    char* _v20;
    intOrPtr _v24;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t27;
    token_type* _t29;
    _unknown_ _t30;
    int _t32;
    _unknown_ _t33;

    _v12 = __ebx;
    _v8 = __esi;
    _t21 = level;
    _t29 = p2;
    _t32 = n2;
    if(debug_level < _t21) {
        return ;
    }
    _v16 = _t21;
    _v20 = "level %d: ";
    _v24 = 1;
     *__esp = gfp;
    __fprintf_chk();
    list_proc(p1, n1, 0);
    if(_t29 != 0 && _t32 > 0) {
        _v20 = 134699471;
        _v24 = 1;
         *__esp = gfp;
        __fprintf_chk();
        list_proc(_t29, _t32, 0);
    }
    _v20 = 134699005;
    _v24 = 1;
    _t21 = gfp;
     *__esp = gfp;
    __fprintf_chk();
    return ;
}

int list1_sub(int n, int export_flag)
{// addr = 0x0806FC38
    int len;
    intOrPtr _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    FILE* _v32;
    intOrPtr _v48;
    char* _v52;
    intOrPtr _v56;
    _unknown_ __ebp;
    FILE* _t43;
    FILE* _t44;
    FILE* _t50;
    signed int _t52;
    _unknown_ _t53;
    int _t55;
    _unknown_ _t56;
    int _t58;
    _unknown_ _t59;

    _v16 = __ebx;
    _v12 = __esi;
    _v8 = __edi;
    _t52 = n;
    _t55 = export_flag;
    _t58 = 0;
    if( *( &n_lhs + _t52 * 4) <= 0) {
        return _t58;
    }
    if(_t55 != 0 || high_prec != 0) {
        _t60 = 0;
    } else {
        _v48 = _t52 + 1;
        _v52 = "#%d: ";
        _v56 = 1;
        _t50 = gfp;
         *__esp = _t50;
        __fprintf_chk();
        _t60 = _t50;
    }
    _t58 = list_proc( *( &lhs + _t52 * 4),  *( &n_lhs + _t52 * 4), _t55);
    if( *( &n_rhs + _t52 * 4) != 0) {
        _v52 = 134699471;
        _v56 = 1;
        _t44 = gfp;
         *__esp = _t44;
        __fprintf_chk();
        _v32 = _t44;
        _t58 = _t58 + _v32 + list_proc( *( &rhs + _t52 * 4),  *( &n_rhs + _t52 * 4), _t55);
    }
    if(_t55 == 1) {
        _v52 = 134707798;
        _v56 = 1;
        _t43 = gfp;
         *__esp = _t43;
        __fprintf_chk();
        _t58 = _t43 + _t58;
    }
    _v52 = 134699005;
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    return _t58;
}

default_color()
{// addr = 0x0806FD58
    _unknown_ __ebp;

    set_color(0);
    return;
}

int flist_sub(token_type* p1, int n, int out_flag, int pos, int* highp, int* lowp)
{// addr = 0x0806FD6C
    int i;
    _unknown_ _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t8;
    _unknown_ _t15;

    __esi = flist_recurse(0, p1, 1, n, out_flag);
    if(__ecx == 0) {
        return __esi;
    }
    default_color();
    return __esi;
}

int flist_equation(int n)
{// addr = 0x0806FDB5
    int sind;
    char[49] buf;
    int len;
    int len2;
    int len3;
    int width;
    int pos;
    int high;
    int low;
    int max_line;
    int min_line;
    int max2_line;
    int min2_line;
    intOrPtr _v32;
    char _v82;
    int _v88;
    _unknown_ _v92;
    int _v96;
    int _v100;
    int _v104;
    int _v108;
    int _v112;
    signed int _v116;
    char* _v136;
    char* _v140;
    char* _v144;
    char* _v148;
    char* _v152;
    _unknown_ __ebx;
    _unknown_ __edi;
    int __esi;
    _unknown_ __ebp;
    _unknown_ _t134;
    int _t135;
    FILE* _t137;
    _unknown_ _t140;
    int _t143;
    int _t147;
    int _t150;
    _unknown_ _t154;
    _unknown_ _t155;
    int _t158;
    _unknown_ _t159;
    _unknown_ _t160;
    int _t164;
    FILE* _t166;
    _unknown_ _t167;
    _unknown_ _t168;
    FILE* _t169;
    _unknown_ _t174;
    int _t175;
    _unknown_ _t176;
    _unknown_ _t178;
    _unknown_ _t182;
    signed int _t183;
    FILE* _t184;
    _unknown_ _t185;
    _unknown_ _t187;
    _unknown_ _t188;
    _unknown_ _t191;
    _unknown_ _t193;
    _unknown_ _t195;
    _unknown_ _t198;
    _unknown_ _t202;
    _unknown_ _t204;
    _unknown_ _t205;
    _unknown_ _t207;
    _unknown_ _t209;
    int _t211;
    _unknown_ _t212;
    _unknown_ _t214;
    _unknown_ _t217;
    _unknown_ _t219;
    int _t221;
    _unknown_ _t222;
    char* _t223;
    _unknown_ _t224;
    int _t226;

    __esi = n;
    _v32 =  *gs:0x14];
    _v88 = 0;
    _v92 = 0;
    _v112 = 0;
    if( *((intOrPtr*)( &n_lhs + __esi * 4)) <= 0) {
L39:
        _t135 = _v112;
        if(__eflags == 0) {
            return _t135;
        }
        __stack_chk_fail();
        return _t135;
    }
    _v108 = 0;
    _v104 = 0;
    _v100 = 0;
    _v96 = 0;
    _v136 =  &((1)[__esi]);
    _v140 = "#%d: ";
    _v144 = 50;
    _v148 = 1;
    _v152 = 50;
    _t137 =  &_v82;
     *__esp = _t137;
    __snprintf_chk();
    cur_line = 0;
    cur_pos = 0;
    _t183 =  *( &n_rhs + __esi * 4);
    _v148 =  &_v100;
    _v152 =  &_v96;
     *__esp = 0;
    _v112 = _t137 + flist_sub();
    _t143 = 0;
    _t221 = 0;
    if( *( &n_rhs + __esi * 4) == 0) {
        _t222 = _t221 + _v112;
        __eflags = _t222 - _t143;
        _t144 = _t222 - _t143 >= 0 ? _t222 : _t143;
        _v112 = _t222 - _t143 >= 0 ? _t222 : _t143;
        __eflags = screen_columns;
        if(screen_columns == 0) {
L24:
            _v148 = 134699005;
            _v152 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t147 = _v96;
            cur_line = _t147;
            __eflags = _v100 - _t147;
            if(_v100 > _t147) {
L34:
                __eflags = _t183 -  *( &n_rhs + __esi * 4);
                if(__eflags >= 0) {
L38:
                    _v148 = 134699005;
                    _v152 = 1;
                     *__esp = gfp;
                    __fprintf_chk();
                    goto L39;
                }
                goto L35;
            }
            goto L25;
L35:
            _v148 = 134699005;
            _v152 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t150 = _v104;
            cur_line = _t150;
            __eflags = _v108 - _t150;
            if(__eflags > 0) {
                goto L38;
            }
            _v116 = _t183 << 4;
            _t223 =  &_v92;
            while(1) {
L37:
                cur_pos = 0;
                _v148 = _t223;
                _v152 =  &_v88;
                 *__esp = 0;
                flist_sub();
                _v148 = 134699005;
                _v152 = 1;
                 *__esp = gfp;
                __fprintf_chk();
                _t158 = cur_line - 1;
                cur_line = _t158;
                __eflags = _v108 - _t158;
                if(__eflags > 0) {
                    break;
                }
            }
            goto L38;
        }
        goto L21;
L25:
        _v116 = _t183;
        while(1) {
L26:
            cur_pos = 0;
            __eflags = cur_line;
            if(cur_line == 0) {
                _v144 =  &_v82;
                _v148 = 134700660;
                _v152 = 1;
                _t166 = gfp;
                 *__esp = _t166;
                __fprintf_chk();
                cur_pos = _t166 + cur_pos;
            }
            asm("repne scasb ");
            _t184 =  !-1 - 1;
            _v148 =  &_v92;
            _v152 =  &_v88;
             *__esp = _t184;
            _t226 = flist_sub();
            __eflags =  *( &n_rhs + __esi * 4);
            if( *( &n_rhs + __esi * 4) != 0) {
                __eflags = cur_line;
                if(cur_line == 0) {
                    _v144 = 134699471;
                    _v148 = 134700660;
                    _v152 = 1;
                    _t169 = gfp;
                     *__esp = _t169;
                    __fprintf_chk();
                    cur_pos = _t169 + cur_pos;
                }
                flist_sub(_t184 + _t226 + 3,  &_v88,  &_v92);
            }
            _v148 = 134699005;
            _v152 = 1;
             *__esp = gfp;
            __fprintf_chk();
            _t164 = cur_line - 1;
            cur_line = _t164;
            __eflags = _v100 - _t164;
            if(_v100 > _t164) {
                break;
            }
        }
        _t183 = _v116;
        goto L34;
    } else {
        _v112 = _v112 + 3;
        while(1) {
            _t175 = flist_sub(0,  &_v88,  &_v92);
            if(screen_columns == 0 || gfp != __imp__stdout || _t175 + _v112 < screen_columns || _t183 <= 0) {
                _t221 = _t175;
                _t211 = _v88;
                __eflags = _t211 - _v96;
                if(_t211 > _v96) {
                    _v96 = _t211;
                }
                goto L17;
            } else {
                goto L7;
            }
        }
    }
L21:
    __eflags = gfp - __imp__stdout;
    if(gfp != __imp__stdout) {
        goto L24;
    }
    __eflags = _v112 - screen_columns;
    if(__eflags < 0) {
        goto L24;
    }
    _v112 = list1_sub(__esi, 0);
    _v148 = 134699005;
    _v152 = 1;
     *__esp = gfp;
    __fprintf_chk();
    goto L39;
}

int list_sub(int n)
{// addr = 0x0807022B
    _unknown_ _v24;
    int __ebx;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t6;

    __ebx = n;
    if( *((intOrPtr*)( &n_lhs + __ebx * 4)) <= 0) {
        return 0;
    }
    make_fractions_and_group(__ebx);
    if(factor_int_flag != 0) {
        factor_int_sub(__ebx);
    }
    if(display2d == 0) {
        return list1_sub(__ebx, 0);
    }
    return flist_equation(__ebx);
}

reset_attr()
{// addr = 0x08070286
    char* _v24;
    _unknown_ __ebp;
    _unknown_ _t3;
    _unknown_ _t5;

    if(color_flag != 0 && cur_color < 0) {
        if(html_flag == 0) {
            _v24 = 134707862;
             *__esp = 1;
            __printf_chk();
        } else {
            _v24 = "</font>";
             *__esp = 1;
            __printf_chk();
        }
    }
    cur_color = -1;
    if(fflush(0) == 0) {
        return ;
    }
    perror("fflush(3) call failed");
    return;
}

double gcd(double d1, double d2)
{// addr = 0x08070300
    int count;
    double larger;
    double divisor;
    double remainder1;
    double lower_limit;
    _unknown_ __ebx;
    _unknown_ __ebp;
    double _t2;

    __eax = __eax;
    asm("fld qword [ebp+0x8]");
    asm("fst qword [ebp-0x10]");
    asm("fld qword [ebp+0x10]");
    asm("fstp qword [ebp-0x18]");
    asm("fstp qword [esp]");
    __finite();
    if(__eax == 0) {
L31:
        asm("fldz ");
        return __eax;
    }
    asm("fld qword [ebp-0x18]");
    asm("fstp qword [esp]");
    __finite();
    _t2 = __eax;
    if(_t2 == 0) {
        goto L31;
    }
    asm("fld qword [ebp-0x10]");
    asm("fabs ");
    asm("fld qword [ebp-0x18]");
    asm("fabs ");
    asm("fldz ");
    asm("fxch st0, st2");
    asm("fucomi st0, st2");
    if(_t2 != 0) {
        asm("fxch st0, st1");
        goto L6;
    }
    if(_t2 == 0) {
        asm("fstp st0");
        asm("fstp st1");
        return __eax;
    } else {
        asm("fxch st0, st1");
        goto L6;
    }
    return __eax;
L6:
    asm("fucomi st0, st2");
    asm("fstp st2");
    if(_t2 != 0 || _t2 != 0) {
        asm("fucomi st0, st1");
        asm("fld st0, st0");
        asm("fcmovnbe st0, st2");
        asm("fst qword [ebp-0x10]");
        asm("fxch st0, st1");
        asm("fcmovbe st0, st2");
        asm("fstp st2");
        asm("fld st0, st1");
        asm("fmul qword [0x8079298]");
        asm("fst qword [ebp-0x18]");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags >= 0) {
            goto L32;
        }
        goto L10;
L33:
        asm("fstp st0");
L34:
        asm("fldz ");
        return __eax;
    } else {
        asm("fstp st1");
        asm("o16 nop ");
        return __eax;
    }
L10:
    asm("fld qword [0x8076b48]");
    asm("fxch st0, st1");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags >= 0) {
        goto L33;
    }
    __ebx = 1;
    while(1) {
        asm("fld qword [ebp-0x10]");
        asm("fld st0, st1");
        goto L13;
    }
    goto L34;
L32:
    asm("fstp st0");
    goto L34;
}

double gcd_verified(double d1, double d2)
{// addr = 0x08070444
    double divisor;
    double d3;
    double d4;
    _unknown_ __ebp;

    __eflags = __eflags;
    asm("fld qword [ebp+0x8]");
    asm("fst qword [ebp-0x18]");
    asm("fld qword [ebp+0x10]");
    asm("fst qword [ebp-0x20]");
    asm("fstp qword [esp+0x8]");
    asm("fstp qword [esp]");
    gcd();
    asm("fstp qword [ebp-0x10]");
    asm("fldz ");
    asm("fld qword [ebp-0x10]");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags != 0 || __eflags != 0) {
        asm("fld qword [ebp-0x18]");
        asm("fdivrp st1, st0");
        asm("fst qword [ebp-0x18]");
        asm("fld1 ");
        asm("fxch st0, st1");
        while(1) {
L3:
            asm("fprem ");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags == 0) {
                break;
            }
        }
        asm("fstp st1");
        asm("fucomi st0, st0");
        if(__eflags != 0) {
            asm("fstp st0");
L8:
            asm("fld1 ");
            asm("fstp qword [esp+0x8]");
            asm("fld qword [ebp-0x18]");
            asm("fstp qword [esp]");
            fmod();
            goto L9;
        }
        if(__eflags == 0) {
            goto L9;
        } else {
            asm("fstp st0");
        }
        goto L8;
L9:
        asm("fldz ");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags != 0 || __eflags != 0) {
L23:
            asm("fldz ");
            asm("fstp qword [ebp-0x10]");
            asm("o16 nop ");
            goto L25;
        } else {
            asm("fld qword [ebp-0x20]");
            asm("fdiv qword [ebp-0x10]");
            asm("fstp qword [ebp-0x20]");
            asm("fld1 ");
            asm("fld qword [ebp-0x20]");
            while(1) {
L12:
                asm("fprem ");
                asm("fnstsw ax");
                asm("sahf ");
                if(__eflags == 0) {
                    break;
                }
            }
            asm("fstp st1");
            asm("fucomi st0, st0");
            if(__eflags != 0) {
                asm("fstp st0");
                goto L17;
            }
            if(__eflags == 0) {
L18:
                asm("fldz ");
                asm("fxch st0, st1");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags != 0 || __eflags != 0) {
                    goto L23;
                } else {
                    asm("fld qword [ebp-0x20]");
                    asm("fstp qword [esp+0x8]");
                    asm("fld qword [ebp-0x18]");
                    asm("fstp qword [esp]");
                    gcd();
                    asm("fld1 ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags != 0 || __eflags != 0) {
                        asm("fldz ");
                        asm("fstp qword [ebp-0x10]");
                    }
L25:
                    asm("fld qword [ebp-0x10]");
                    return __eax;
                }
                goto L24;
            }
            asm("fstp st0");
L17:
            asm("fld1 ");
            asm("fstp qword [esp+0x8]");
            asm("fld qword [ebp-0x20]");
            asm("fstp qword [esp]");
            fmod();
            goto L18;
        }
    }
L24:
    asm("fstp st0");
    goto L25;
}

double my_round(double d1)
{// addr = 0x08070529
    intOrPtr _v16;
    char _v20;
    double _v36;
    _unknown_ __ebp;
    double _t11;

    __eflags = __eflags;
    _v20 = d1;
    _v16 = _a8;
    asm("fld qword [ebp-0x10]");
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags < 0) {
        _t11 =  &_v20;
        _v36 = _t11;
        asm("fsub dword [0x8072054]");
        asm("fstp qword [esp]");
        modf();
        asm("fstp st0");
    } else {
        _t11 =  &_v20;
        _v36 = _t11;
        asm("fadd dword [0x8072054]");
        asm("fstp qword [esp]");
        modf();
        asm("fstp st0");
    }
    asm("fld qword [ebp-0x10]");
    return _t11;
}

int f_to_fraction(double d, double* numeratorp, double* denominatorp)
{// addr = 0x0807057D
    double divisor;
    double numerator;
    double denominator;
    double k4;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t8;
    _unknown_ _t9;
    _unknown_ _t10;

    asm("fld qword [ebp+0x8]");
    asm("fst qword [ebp-0x10]");
    asm("fst qword [ebx]");
    asm("fld1 ");
    asm("fstp qword [esi]");
    asm("fstp qword [esp]");
    __finite();
    __eflags = __eax;
    if(__eflags == 0) {
        return 0;
    }
    asm("fld1 ");
    asm("fld qword [ebp-0x10]");
    while(1) {
L2:
        asm("fprem ");
        asm("fnstsw ax");
        asm("sahf ");
        if(__eflags == 0) {
            break;
        }
    }
    asm("fstp st1");
    asm("fucomi st0, st0");
    if(__eflags != 0) {
        asm("fstp st0");
L7:
        asm("fld1 ");
        asm("fstp qword [esp+0x8]");
        asm("fld qword [ebp-0x10]");
        asm("fstp qword [esp]");
        fmod();
        goto L8;
    }
    if(__eflags == 0) {
        goto L8;
    } else {
        asm("fstp st0");
    }
    goto L7;
L8:
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if(__eflags == 0) {
        if(__eflags == 0) {
            return 1;
        }
    }
    asm("fld qword [0x8079290]");
    asm("fstp qword [ebp-0x18]");
    asm("fld qword [ebp-0x10]");
    asm("fstp qword [esp]");
    my_round();
    asm("fldz ");
    asm("fxch st0, st1");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags != 0 || __eflags != 0) {
        asm("fld qword [ebp-0x10]");
        asm("fsubr st0, st1");
        asm("fabs ");
        asm("fld qword [ebp-0x10]");
        asm("fabs ");
        asm("fmul qword [ebp-0x18]");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags >= 0) {
            asm("fstp qword [ebx]");
            return 1;
        }
        asm("fstp st0");
    } else {
        asm("fstp st0");
    }
    asm("fld qword [ebp-0x10]");
    asm("fstp qword [esp+0x8]");
    asm("fld1 ");
    asm("fstp qword [esp]");
    gcd();
    asm("fstp qword [ebp-0x18]");
    asm("fld qword [0x8079298]");
    asm("fld qword [ebp-0x18]");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags <= 0) {
        asm("fstp st0");
        return 0;
    } else {
        asm("fld qword [ebp-0x10]");
        asm("fdivrp st1, st0");
        asm("fstp qword [esp]");
        my_round();
        asm("fstp qword [ebp-0x20]");
        asm("fld qword [ebp-0x18]");
        asm("fdivr dword [0x8075170]");
        asm("fstp qword [esp]");
        my_round();
        asm("fstp qword [ebp-0x18]");
        asm("fld qword [ebp-0x20]");
        asm("fabs ");
        asm("fld qword [0x8077c68]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        if(__eflags >= 0) {
            goto L26;
        }
        asm("fld qword [ebp-0x18]");
        asm("fucomi st0, st1");
        asm("fstp st1");
        if(__eflags >= 0) {
            goto L27;
        }
        asm("fld dword [0x8072058]");
        asm("fucomip st0, st1");
        if(__eflags > 0) {
            goto L28;
        }
        asm("fstp qword [esp+0x8]");
        asm("fld qword [ebp-0x20]");
        asm("fstp qword [esp]");
        gcd();
        asm("fld1 ");
        asm("fxch st0, st1");
        asm("fucomi st0, st1");
        asm("fstp st1");
        if(__eflags <= 0) {
            asm("fstp st0");
        } else {
            asm("fld qword [ebp-0x20]");
            asm("fdiv st0, st1");
            asm("fstp qword [ebp-0x20]");
            asm("fdivr qword [ebp-0x18]");
            asm("fstp qword [ebp-0x18]");
        }
        asm("fld qword [ebp-0x20]");
        asm("fdiv qword [ebp-0x18]");
        asm("fld qword [ebp-0x10]");
        asm("fsubr st0, st1");
        asm("fabs ");
        asm("fxch st0, st1");
        asm("fabs ");
        asm("fmul qword [0x8079290]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags > 0) {
            return 0;
        }
        asm("fld qword [ebp-0x20]");
        asm("fstp qword [ebx]");
        asm("fld qword [ebp-0x18]");
        asm("fstp qword [esi]");
        return 1;
        return 0;
L28:
        asm("fstp st0");
        return 0;
L27:
        asm("fstp st0");
        return 0;
    }
L26:
    asm("fstp st0");
    return 0;
}

int make_fractions(token_type* equation, int* np)
{// addr = 0x08070715
    int i;
    int j;
    int k;
    int level;
    double numerator;
    double denominator;
    int inc_level;
    int modified;
    _unknown_ _v36;
    _unknown_ _v44;
    signed int _v48;
    _unknown_ _v52;
    signed int _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ _v80;
    _unknown_ _v84;
    _unknown_ _v88;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t120;
    _unknown_ _t122;
    _unknown_ _t133;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t139;
    _unknown_ _t140;
    _unknown_ _t152;
    _unknown_ _t155;
    _unknown_ _t164;
    _unknown_ _t167;
    _unknown_ _t168;
    _unknown_ _t172;
    signed int _t173;
    _unknown_ _t174;
    _unknown_ _t182;
    _unknown_ _t183;
    _unknown_ _t185;
    _unknown_ _t191;
    _unknown_ _t192;
    _unknown_ _t194;
    token_type* _t195;
    _unknown_ _t196;
    intOrPtr* _t199;
    _unknown_ _t200;
    _unknown_ _t201;
    _unknown_ _t207;

    _t195 = equation;
    _t173 = 0;
    _v56 = 0;
    if( *np <= 0) {
        return _v56;
    }
    while(1) {
        _v48 = _t173;
        _t199 = _t195 + (_t173 << 4);
        if( *_t199 != 0) {
            goto L37;
        } else {
            goto L2;
        }
    }
}

double multiply_out_unique()
{// addr = 0x08070A10
    int i;
    int j;
    double d;
    int __ebx;
    int[63]* __esi;
    _unknown_ __ebp;
    double _t3;
    _unknown_ _t4;

    __ebx = uno;
    if(__ebx <= 0) {
        asm("fld1 ");
        return _t3;
    }
    __ecx = 0;
    asm("fld1 ");
    __esi =  &ucnt;
    while(1) {
        __edx =  *((intOrPtr*)(__esi + __ecx * 4));
        if(__edx <= 0) {
            goto L4;
        } else {
            goto L6;
        }
    }
    return _t3;
}

int is_prime()
{// addr = 0x08070A5D
    double value;
    _unknown_ __ebp;
    signed int _t3;
    _unknown_ _t4;

    _t3 = __eax;
    multiply_out_unique();
    asm("fld dword [0x8072058]");
    asm("fucomip st0, st1");
    asm("fstp st0");
    if(__eflags > 0) {
        return 0;
    }
    if(uno != 1) {
        return 0;
    }
    return _t3 & 4294967295 & ;
}

int fc_recurse(token_type* equation, int* np, int loc, int level, int level_code)
{// addr = 0x08070A90
    int i;
    int j;
    int k;
    int op;
    double d;
    double minimum;
    double cogcd;
    int improve_readability;
    int gcd_flag;
    int first;
    int neg_flag;
    int modified;
    int op_count;
    int const_count;
    token_type* _v36;
    token_type* _v40;
    signed int _v44;
    signed int _v48;
    token_type* _v52;
    int _v56;
    signed int _v60;
    intOrPtr _v64;
    int _v80;
    signed int _v84;
    int _v88;
    signed int _v92;
    signed int _v96;
    int _v100;
    signed int _v104;
    signed int _v108;
    int _v112;
    signed int _v116;
    int _v120;
    signed int _v132;
    token_type* _v136;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    intOrPtr _t232;
    signed int _t234;
    token_type* _t235;
    int _t236;
    _unknown_ _t240;
    signed int* _t246;
    intOrPtr* _t249;
    signed int* _t259;
    int* _t265;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t271;
    signed int _t276;
    _unknown_ _t278;
    int _t280;
    _unknown_ _t281;
    intOrPtr _t283;
    signed int _t288;
    intOrPtr _t291;
    signed int _t292;
    _unknown_ _t294;
    signed int _t296;
    signed int _t297;
    signed int _t299;
    signed int _t301;
    signed int _t303;
    intOrPtr _t304;
    signed int _t306;
    signed int _t308;
    signed int _t311;
    _unknown_ _t316;
    int _t318;
    _unknown_ _t321;
    _unknown_ _t326;
    _unknown_ _t329;
    _unknown_ _t330;
    _unknown_ _t332;
    _unknown_ _t333;
    signed int _t334;
    int _t335;
    token_type* _t339;
    token_type* _t343;
    intOrPtr* _t347;
    _unknown_ _t352;
    _unknown_ _t354;
    _unknown_ _t355;
    _unknown_ _t360;
    signed int _t361;
    intOrPtr _t363;
    _unknown_ _t367;
    token_type* _t369;
    _unknown_ _t370;
    token_type* _t371;
    signed int _t372;
    intOrPtr _t374;
    token_type* _t378;
    token_type* _t385;
    _unknown_ _t386;
    signed int _t388;
    signed int _t393;
    signed int _t395;
    intOrPtr* _t398;
    _unknown_ _t400;

    _t334 = __edx;
    _t311 = __ecx;
    _t232 = __eax;
    _v64 = _t232;
    _v56 = _t334;
    _v84 = _t311;
    _t369 = equation;
    _t296 = _t311;
    _v92 = 0;
    _v40 =  &(_t369->kind);
    _t374 = _t232;
    while(_t296 <  *_v56) {
        _t291 =  *((intOrPtr*)((_t296 << 4) + _t374 + 4));
        if(_t291 >= _t369) {
            __eflags = _t291 - _t369;
            if(_t291 <= _t369) {
                _t292 = _t296 + 1;
L9:
                _t296 = _t292;
                continue;
            }
            goto L2;
        }
        _t297 = _v92;
        _v116 = _t297;
        if(_t297 != 0) {
            _v92 = 1;
            return _v92;
        }
        _t234 = np & 3;
        _v120 = 1;
        __eflags = _t234 - 1;
        if(_t234 > 1) {
L16:
            _v100 = 1;
            __eflags = integer_coefficients;
            if(integer_coefficients != 0) {
                goto L18;
            }
        } else {
            _t234 = _t369 - 1;
            _t288 = _t234 & _t334 & 4294967295 & ;
            _v120 = _t288;
            __eflags = _t288;
            if(_t288 == 0) {
                goto L17;
            }
            goto L16;
L18:
            _v44 = _v84;
            _v108 = 0;
            _v112 = 0;
            _v88 = 1;
            _v80 = 1;
            asm("fld1 ");
            asm("fld st0, st0");
            asm("fstp qword [ebp-0x48]");
            _t235 =  &(_t369->kind);
            _v40 = _t235;
            _v52 = _t235;
            _v36 = _t369;
            while(1) {
                _t236 = _v56;
                _t370 =  *_t236;
                __eflags = _v44 - _t370;
                if(_v44 >= _t370) {
                    break;
                }
                _t361 = _v44;
                _v96 = _t361;
                _t393 = (_t361 << 4) + _v64;
                _v60 = _t393;
                _t236 =  *(_t393 + 4);
                __eflags = _v36 - _t236;
                if(_v36 <= _t236) {
                    __eflags = _v36 - _t236;
                    if(_v36 != _t236) {
                        _t306 = _v44 + 1;
                        __eflags = _t370 - _t306;
                        if(_t370 <= _t306) {
L70:
                            __eflags = _v44 - _v84;
                            _t268 = _v44 != _v84 ? _v88 : 0;
                            _v88 = _v44 != _v84 ? _v88 : 0;
                            __eflags = _v80;
                            if(__eflags == 0) {
                                asm("fld1 ");
                                asm("fld qword [ebp-0x48]");
                                asm("fucomip st0, st1");
                                if(__eflags <= 0) {
                                    asm("fstp st0");
                                } else {
                                    asm("fstp qword [ebp-0x48]");
                                }
                                __eflags = _v100;
                                if(__eflags == 0) {
L83:
                                    _v44 = _t306;
                                    continue;
                                }
                                asm("fldz ");
                                asm("fxch st0, st1");
                                asm("fucomi st0, st1");
                                asm("fstp st1");
                                if(__eflags != 0 || __eflags != 0) {
                                    asm("fstp qword [esp+0x8]");
                                    asm("fld1 ");
                                    asm("fstp qword [esp]");
                                    gcd_verified();
                                    _v44 = _t306;
                                    continue;
                                } else {
                                    goto L83;
                                }
                                goto L79;
                            }
                            goto L71;
                        }
                        goto L40;
L71:
                        asm("fstp st0");
                        _v44 = _t306;
                        _v80 = 0;
                        asm("fld1 ");
                        asm("fld st0, st0");
                        asm("fstp qword [ebp-0x48]");
                        continue;
                    }
                    _t280 =  *_v60;
                    __eflags = _t280;
                    if(_t280 == 0) {
                        _v108 = _v108 + 1;
                        asm("fld qword [ecx+0x8]");
L30:
                        __eflags = _v44 - _v84;
                        if(_v44 == _v84) {
                            asm("fldz ");
                            asm("fxch st0, st1");
                            asm("fucomi st0, st1");
                            asm("fstp st1");
                            _t282 =  <=  ? _v88 : 0;
                            _v88 =  <=  ? _v88 : 0;
                        }
                        asm("fabs ");
                        __eflags = _v80;
                        if(_v80 != 0) {
L79:
                            asm("fstp st1");
                            asm("fld st0, st0");
                            asm("fstp qword [ebp-0x48]");
                            _v80 = 0;
                        } else {
                            asm("fld qword [ebp-0x48]");
                            asm("fucomi st0, st1");
                            asm("fcmovnbe st0, st1");
                            asm("fstp qword [ebp-0x48]");
                            __eflags = _v100;
                            if(__eflags == 0) {
                                goto L80;
                            }
                            asm("fldz ");
                            asm("fxch st0, st2");
                            asm("fucomi st0, st2");
                            asm("fstp st2");
                            if(__eflags != 0) {
                                asm("fxch st0, st1");
                                goto L38;
                            }
                            if(__eflags == 0) {
                                goto L81;
                            }
                            asm("fxch st0, st1");
                            goto L38;
L82:
                            _v44 = _v44 + 1;
                            continue;
L38:
                            asm("fstp qword [esp+0x8]");
                            asm("fstp qword [esp]");
                            gcd_verified();
                            goto L82;
L81:
                            asm("fstp st0");
                        }
                        goto L82;
L80:
                        asm("fstp st0");
                        goto L82;
                    }
                    __eflags = _t280 - 2;
                    if(_t280 != 2) {
                        asm("fld1 ");
                        goto L30;
                    }
                    _t283 =  *((intOrPtr*)(_v60 + 8));
                    __eflags = _t283 - 1;
                    if(_t283 == 1) {
                        _v88 = 0;
                    } else {
                        __eflags = _t283 - 2;
                        if(_t283 != 2) {
                            asm("fstp st0");
L165:
                            _v92 = _v116;
                            return _v92;
                        } else {
                            goto L28;
                        }
L163:
                        asm("fstp st0");
                        goto L165;
                    }
L28:
                    _v112 = _v112 + 1;
                    _v44 = _v44 + 1;
                    continue;
L40:
                    _t329 = (_t306 << 4) + _v64;
                    _t363 =  *((intOrPtr*)(_t329 + 4));
                    __eflags = _v36 - _t363;
                    if(_v36 >= _t363) {
                        goto L70;
                    }
                    _t271 = (_v44 << 4) + _v64 + 48;
                    _t395 = 0;
                    while(1) {
                        __eflags = _t363 - _v40;
                        if(_t363 == _v40) {
                            _t395 =  *(_t329 + 8);
                        }
                        _t306 = _t306 + 2;
                        __eflags = _t370 - _t306;
                        if(_t370 <= _t306) {
                            break;
                        }
                        _t329 = _t271;
                        _t363 =  *((intOrPtr*)(_t271 + 4));
                        _t271 = _t271 + 32;
                        __eflags = _v36 - _t363;
                        if(_v36 < _t363) {
                            continue;
                        }
                        break;
                    }
L46:
                    _v48 = _t306;
                    __eflags = _t395 - 3 - 1;
                    if(_t395 - 3 > 1) {
                        goto L70;
                    }
                    __eflags = _v44 - _t306;
                    if(_v44 >= _t306) {
L69:
                        __eflags = _v44 - _v48;
                        if(_v44 == _v48) {
                            continue;
                        }
                        goto L70;
                    }
                    _t398 = _v60 + 4;
                    _v96 = _v64 + (_v96 << 4) - 8;
                    _t372 = _v44;
                    _v60 = _t306;
                    _t276 = _t372;
                    _v104 = _t306;
                    _t308 = _v96;
                    goto L49;
                    do {
L49:
                        __eflags =  *_t398 - _v52;
                        if( *_t398 != _v52) {
                            goto L67;
                        }
                        __eflags =  *(_t398 - 4);
                        if( *(_t398 - 4) != 0) {
                            goto L67;
                        }
                        __eflags = _t276 - _v48;
                        if(_t276 == _v48) {
                            goto L163;
                        }
                        __eflags = _t372 - _t276;
                        if(_t372 <= _t276) {
L54:
                            asm("fld qword [esi+0x4]");
                            __eflags = _t276 - _v84;
                            if(_t276 == _v84) {
                                asm("fldz ");
                                asm("fxch st0, st1");
                                asm("fucomi st0, st1");
                                asm("fstp st1");
                                _t279 =  <=  ? _v88 : 0;
                                _v88 =  <=  ? _v88 : 0;
                            }
                            asm("fabs ");
                            __eflags = _v80;
                            if(_v80 == 0) {
                                asm("fld qword [ebp-0x48]");
                                asm("fucomi st0, st1");
                                asm("fcmovnbe st0, st1");
                                asm("fstp qword [ebp-0x48]");
                                __eflags = _v100;
                                if(__eflags == 0) {
                                    asm("fstp st0");
L66:
                                    _t276 = _v60;
                                    goto L67;
                                }
                                goto L59;
L65:
                                asm("fstp st0");
                                goto L66;
                            } else {
                                asm("fstp st1");
                                asm("fld st0, st0");
                                asm("fstp qword [ebp-0x48]");
                                _t276 = _v60;
                                _v80 = 0;
                                goto L67;
                            }
L59:
                            asm("fldz ");
                            asm("fxch st0, st2");
                            asm("fucomi st0, st2");
                            asm("fstp st2");
                            if(__eflags != 0) {
                                asm("fxch st0, st1");
                                goto L63;
                            }
                            if(__eflags == 0) {
                                goto L65;
                            }
                            asm("fxch st0, st1");
                            goto L63;
L63:
                            asm("fstp qword [esp+0x8]");
                            asm("fstp qword [esp]");
                            gcd_verified();
                            _t276 = _v60;
                            goto L67;
                        }
                        __eflags =  *_t308 - 3;
                        asm("o16 nop ");
                        if( *_t308 != 3) {
                            goto L164;
                        }
                        goto L54;
L164:
                        asm("fstp st0");
                        goto L165;
L67:
                        _t372 = _t372 + 1;
                        _t398 = _t398 + 16;
                        _t308 = _t308 + 16;
                        __eflags = _v48 - _t372;
                    } while(_v48 > _t372);
                    _v44 = _t276;
                    _t306 = _v104;
                    goto L69;
                }
                break;
            }
L86:
            _t371 = _v36;
            __eflags = _v100;
            if(_v100 == 0) {
                asm("fstp st0");
            } else {
                asm("fldz ");
                asm("fucomip st0, st1");
                asm("fld qword [ebp-0x48]");
                asm("fcmovne st0, st1");
                asm("fcmovu st0, st1");
                asm("fstp st1");
                asm("fstp qword [ebp-0x48]");
            }
            __eflags = _v80;
            if(_v80 != 0) {
                return _v92;
            }
            __eflags = _v112;
            if(_v112 == 0) {
                return _v92;
            }
            __eflags = _v108 - 1;
            if(_v108 > 1) {
                return _v92;
            }
            __eflags = _v88;
            if(__eflags == 0) {
                asm("fld1 ");
                asm("fld qword [ebp-0x48]");
                asm("fucomip st0, st1");
                asm("fstp st0");
                if(__eflags == 0) {
                    if(__eflags == 0) {
                        return _v92;
                    }
                }
            }
            asm("fldz ");
            asm("fld qword [ebp-0x48]");
            asm("fucomi st0, st1");
            asm("fstp st1");
            if(__eflags != 0 || __eflags != 0) {
                asm("fstp qword [esp]");
                __finite();
                __eflags = _t236;
                if(_t236 == 0) {
                    return _v92;
                }
                __eflags = _v120;
                if(_v120 == 0) {
                    asm("fld qword [ebp-0x48]");
                    asm("fchs ");
                    __eflags = _v88;
                    asm("fld qword [ebp-0x48]");
                    asm("fcmovne st0, st1");
                    asm("fstp st1");
                    asm("fst qword [ebp-0x48]");
                    asm("fld1 ");
                    asm("fxch st0, st1");
                    asm("fucomip st0, st1");
                    asm("fstp st0");
                    if(__eflags == 0) {
                        if(__eflags == 0) {
                            return _v92;
                        }
                    }
                    _t335 = _v112;
                    __eflags = _t335 + _t335 + 4 +  *_v56 - n_tokens;
                    if(_t335 + _t335 + 4 +  *_v56 > n_tokens) {
                        error_huge();
                    }
                    _t240 =  *_v56;
                    __eflags = _v84 - _t240;
                    if(_v84 >= _t240) {
L160:
                        _t299 = _v84;
                    } else {
                        _t339 = (_v84 << 4) + _v64;
                        _v36 = _t339;
                        __eflags = _t371 - _t339->level;
                        if(_t371 > _t339->level) {
                            goto L160;
                        }
                        _t301 = _v84;
                        _t380 =  &(_t371->kind);
                        _v40 =  &(_t371->kind);
                        goto L145;
                        do {
L145:
                            __eflags = _t339->kind - 2;
                            if(_t339->kind == 2) {
L150:
                                _t301 = _t301 + 1;
                                _t240 =  *_v56;
                                __eflags = _t240 - _t301;
                                if(_t240 > _t301) {
                                    goto L154;
                                }
                                goto L151;
                            }
                            _t249 = _v64 + (_t301 << 4) + 4;
                            _t347 = _v64 + (_t301 << 4) + 20;
                            while(1) {
                                 *_t249 =  *_t249 + 1;
                                _t301 = _t301 + 1;
                                _t316 =  *_v56;
                                __eflags = _t301 - _t316;
                                if(_t301 >= _t316) {
                                    break;
                                }
                                _t249 = _t249 + 16;
                                _t347 = _t347 + 16;
                                __eflags = _t371 -  *_t347;
                                if(_t371 <  *_t347) {
                                    continue;
                                }
                                break;
                            }
L149:
                            _t380 = (_t301 << 4) + _v64;
                            _v132 = _t316 - _t301 << 4;
                            _v136 = _t380;
                             *__esp = (_t301 << 4) + _v64 + 32;
                            L080491C4();
                             *_v56 =  *_v56 + 2;
                            _t380->level = _v40;
                            _t380->kind = 2;
                             *((intOrPtr*)(_t380 + 8)) = 4;
                            _t301 = _t301 + 1;
                            _t259 = (_t301 << 4) + _v64;
                            _t259[1] = _v40;
                             *_t259 = 0;
                            asm("fld qword [ebp-0x48]");
                            asm("fstp qword [eax+0x8]");
                            goto L150;
L151:
                            __eflags = _t240 - _v84;
                            if(_t240 <= _v84) {
                                goto L160;
                            }
                            _t318 = _v36->level;
                            __eflags = _t371 - _t318;
                            if(_t371 <= _t318) {
                                _t343 = (_v84 << 4) + _v64 + 16;
                                _t303 = _v84;
                                _t385 = _v36;
                                while(1) {
                                    _t385->level = _t318 + 1;
                                    _t299 = _t303 + 1;
                                    _t240 =  *_v56;
                                    __eflags = _t240 - _t299;
                                    if(_t240 <= _t299) {
                                        break;
                                    }
                                    _t385 = _t343;
                                    _t318 = _t343->level;
                                    _t343 = _t343 + 16;
                                    __eflags = _t371 - _t318;
                                    if(_t371 <= _t318) {
                                        continue;
                                    }
                                    goto L161;
                                }
                                goto L161;
                            }
                            goto L160;
L154:
                            _t339 = (_t301 << 4) + _v64;
                            __eflags = _t371 - _t339->level;
                        } while(_t371 <= _t339->level);
                        goto L151;
                    }
L161:
                    _t378 = (_t299 << 4) + _v64;
                    _v132 = _t240 - _t299 << 4;
                    _v136 = _t378;
                     *__esp = (_t299 << 4) + _v64 + 32;
                    L080491C4();
                     *_v56 =  *_v56 + 2;
                    _t378->level = _t371;
                     *_t378 = 2;
                     *((intOrPtr*)(_t378 + 8)) = 3;
                    _t246 = (_t299 << 4) + _v64 + 16;
                    _t246[1] = _t371;
                     *_t246 = 0;
                    asm("fld qword [ebp-0x48]");
                    asm("fstp qword [eax+0x8]");
                    _v92 = 1;
                    return _v92;
                } else {
                    _t388 = _v84;
                    _v40 =  &(_t371->kind);
                    _t304 = _v64;
                    while(1) {
                        _v48 = _t388;
                        _t265 = _t304 + (_t388 << 4);
                        __eflags =  *_t265;
                        if( *_t265 != 0) {
                            goto L107;
                        } else {
                            goto L101;
                        }
                    }
                }
            }
            asm("fstp st0");
            return _v92;
        }
L17:
        _v100 = np >> 2 & 1;
        goto L18;
L2:
        _v92 = _v92 | fc_recurse(_v40, np);
        _t292 = _t296 + 1;
        _t334 = _v56;
        _t333 =  *_t334;
        __eflags = _t292 - _t333;
        if(_t292 >= _t333) {
            goto L9;
        }
        _t334 = _t292 << 4;
        __eflags = _t369 -  *((intOrPtr*)(_t334 + _t374 + 4));
        if(_t369 >=  *((intOrPtr*)(_t334 + _t374 + 4))) {
            goto L9;
        } else {
            _t334 = _t374 + (_t296 << 4) + 52;
            goto L5;
        }
        while(1) {
L5:
            _t292 = _t292 + 2;
            __eflags = _t292 - _t333;
            if(_t292 >= _t333) {
                break;
            }
L6:
            _t334 = _t334 + 32;
            __eflags = _t369 -  *_t334;
            if(_t369 <  *_t334) {
                continue;
            } else {
                goto L9;
            }
            goto L6;
        }
        goto L9;
    }
}

int factor_constants(token_type* equation, int* np, int level_code)
{// addr = 0x0807122F
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t6;
    int* _t8;
    _unknown_ _t9;

    _t8 = level_code;
    if(_t8 == 3) {
        return 0;
    }
    return fc_recurse(1, _t8);
}

display_unique()
{// addr = 0x0807125F
    int i;
    double value;
    intOrPtr _v48;
    char* _v52;
    intOrPtr _v56;
    signed int __ebx;
    int[63]* __edi;
    _unknown_ __ebp;
    intOrPtr _t16;

    multiply_out_unique();
    asm("fstp qword [esp+0xc]");
    _v52 = "%.0f = ";
    _v56 = 1;
     *__esp = gfp;
    __fprintf_chk();
    __ebx = 0;
    __edi =  &ucnt;
    while(__ebx < uno) {
        asm("fld qword [esi+ebx*8]");
        asm("fstp qword [esp+0xc]");
        _v52 = "%.0f";
        _v56 = 1;
         *__esp = gfp;
        __fprintf_chk();
        _t16 =  *((intOrPtr*)(__edi + __ebx * 4));
        if(_t16 > 1) {
            _v48 = _t16;
            _v52 = "^%d";
            _v56 = 1;
             *__esp = gfp;
            __fprintf_chk();
        }
        __ebx = __ebx + 1;
        if(__ebx < uno) {
            _v52 = " * ";
            _v56 = 1;
             *__esp = gfp;
            __fprintf_chk();
        }
    }
}

try_factor(double arg)
{// addr = 0x08071341
    _unknown_ __ebp;

    __eflags = __eflags;
    asm("fld qword [ebp+0x8]");
    asm("fst qword [ebp-0x10]");
    asm("fstp tword [ebp-0x28]");
    while(1) {
        asm("fld qword [0x8079578]");
        asm("fld tword [ebp-0x28]");
        asm("fld st0, st1");
        goto L11;
    }
}

int factor_one(double value)
{// addr = 0x08071415
    int i;
    double d;
    int __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t2;
    _unknown_ _t3;
    _unknown_ _t4;
    _unknown_ _t5;
    _unknown_ _t6;

    __eflags = __eflags;
    asm("fld qword [ebp+0x8]");
    asm("fst qword [ebp-0x18]");
    uno = 0;
    asm("fstp qword [0x8079578]");
    asm("fldz ");
    asm("fld qword [ebp-0x18]");
    asm("fucomi st0, st1");
    asm("fstp st1");
    if(__eflags != 0 || __eflags != 0) {
        asm("fabs ");
        asm("fld qword [0x8076b48]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags >= 0) {
            return 0;
        }
        asm("fld1 ");
        asm("fld qword [ebp-0x18]");
        while(1) {
L4:
            asm("fprem ");
            asm("fnstsw ax");
            asm("sahf ");
            if(__eflags == 0) {
                break;
            }
        }
        asm("fstp st1");
        asm("fucomi st0, st0");
        if(__eflags != 0) {
            asm("fstp st0");
L9:
            asm("fld1 ");
            asm("fstp qword [esp+0x8]");
            asm("fld qword [ebp-0x18]");
            asm("fstp qword [esp]");
            fmod();
            goto L10;
        }
        if(__eflags == 0) {
            goto L10;
        } else {
            asm("fstp st0");
            asm("o16 nop ");
        }
        goto L9;
L10:
        asm("fldz ");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags != 0) {
            return 0;
        }
        if(__eflags != 0) {
            return 0;
        }
        asm("fld qword [0x8079578]");
        asm("fabs ");
        asm("fsqrt ");
        asm("fld1 ");
        asm("faddp st1, st0");
        asm("fstp qword [0x8079580]");
        asm("fld dword [0x8072058]");
        asm("fstp qword [esp]");
        try_factor();
        asm("fld dword [0x807205c]");
        asm("fstp qword [esp]");
        try_factor();
        asm("fld dword [0x8077e40]");
        asm("fstp qword [esp]");
        try_factor();
        asm("fld dword [0x8077e44]");
        asm("fstp qword [esp]");
        try_factor();
        asm("fld1 ");
        asm("fstp qword [ebp-0x10]");
        while(1) {
            asm("fld qword [0x8079580]");
            asm("fld qword [ebp-0x10]");
            asm("fxch st0, st1");
            asm("fucomip st0, st1");
            asm("fstp st0");
            if(__eflags < 0) {
                break;
            }
            __ebx = 0;
            while(1) {
L14:
                asm("fld qword [ebp-0x10]");
                asm("fadd qword [esi+ebx*8]");
                asm("fst qword [ebp-0x10]");
                asm("fstp qword [esp]");
                try_factor();
                __ebx = __ebx + 1;
                __eflags = __ebx - 48;
                if(__eflags == 0) {
                    break;
                }
            }
        }
        asm("fld qword [0x8079578]");
        asm("fld1 ");
        asm("fxch st0, st1");
        asm("fucomi st0, st1");
        asm("fstp st1");
        if(__eflags != 0 || __eflags != 0) {
            asm("fstp qword [esp]");
            try_factor();
        } else {
            asm("fstp st0");
        }
        multiply_out_unique();
        asm("fld qword [ebp-0x18]");
        asm("fxch st0, st1");
        asm("fucomip st0, st1");
        asm("fstp st0");
        if(__eflags == 0) {
            if(__eflags == 0) {
                return 1;
            }
        }
        error_bug("Internal error factoring integers.");
        return 1;
    }
    asm("fstp st0");
    return 0;
}

int factor_int(token_type* equation, int* np)
{// addr = 0x0807157C
    int i;
    int j;
    int xsize;
    int level;
    int modified;
    signed int _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t62;
    _unknown_ _t63;
    _unknown_ _t68;
    _unknown_ _t71;
    _unknown_ _t74;
    _unknown_ _t87;
    signed int _t89;
    _unknown_ _t97;
    _unknown_ _t98;
    _unknown_ _t100;
    _unknown_ _t109;
    _unknown_ _t110;
    _unknown_ _t111;
    _unknown_ _t112;
    intOrPtr* _t115;
    _unknown_ _t117;

    _v32 = 0;
    _t89 = 0;
    if( *np <= 0) {
        return _v32;
    }
    while(1) {
        _t115 = equation + (_t89 << 4);
        if( *_t115 != 0) {
            goto L23;
        } else {
            goto L2;
        }
    }
}

int list_factor(token_type* equation, int* np, int factor_flag)
{// addr = 0x08071777
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t11;
    int* _t15;
    _unknown_ _t16;
    token_type* _t18;
    _unknown_ _t19;

    _v12 = __ebx;
    _v8 = __esi;
    _t18 = equation;
    _t15 = np;
    if(factor_flag == 0) {
        if(factor_int_flag == 0) {
            return list_proc(_t18,  *_t15, 0);
        }
    }
    factor_int(_t18, _t15);
    return list_proc(_t18,  *_t15, 0);
}

factor_int_sub(int n)
{// addr = 0x080717C4
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t20;
    signed int _t23;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t27;

    _v12 = __ebx;
    _v8 = __esi;
    _t23 = n;
    if( *((intOrPtr*)( &n_lhs + _t23 * 4)) <= 0) {
        return ;
    }
    _t27 = 0 + _t23 * 4;
    factor_int( *( &lhs + _t23 * 4), _t27 +  &n_lhs);
    factor_int( *( &rhs + _t23 * 4), _t27 +  &n_rhs);
    return ;
}

L0807188A()
{
    return;
}

L08071890()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134713084;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134713084;
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

L080718C8()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    L08049300(__esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

L080718C8()
{
    _unknown_ _t1;
    _unknown_ _t2;

    _pop(__ebx);
    @rec 0x08049300@L08049300@(__esi);
    _pop(__ecx);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

// Statistics:
//    3870 Register nodes
//    8952 Temporaries nodes
//     420 Casts
//    9982 Statements
//    2074 Labels
//    1475 Gotos
//     367 Blocks
//   58592 Nodes
//    1643 Assembly nodes
//    4199 Unknown Types


