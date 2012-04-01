L08048A44()
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 66980 + -8)) != 0) {
        __gmon_start__();
    }
    L08048E60();
    L080547D0();
    _pop(__eax);
    return;
}

L08048A50()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 66980 + -8)) != 0) {
        __gmon_start__();
    }
    L08048E60();
    L080547D0();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

int fputs(char* str, struct _IO_FILE* fp)
{// addr = 0x08048A84
    goto __imp__fputs;
}

int* __errno_location()
{// addr = 0x08048A94
    goto __imp____errno_location;
}

int sprintf(char* dst, char* format)
{// addr = 0x08048AA4
    goto __imp__sprintf;
}

void srand(int __seed)
{// addr = 0x08048AB4
    goto __imp__srand;
}

int open()
{// addr = 0x08048AC4
    goto __imp__open;
}

char* strerror(int __errnum)
{// addr = 0x08048AD4
    goto __imp__strerror;
}

__cxa_atexit()
{// addr = 0x08048AE4
    goto __imp____cxa_atexit;
}

__isoc99_fscanf()
{// addr = 0x08048AF4
    goto __imp____isoc99_fscanf;
}

__xstat()
{// addr = 0x08048B04
    goto __imp____xstat;
}

__gmon_start__()
{// addr = 0x08048B14
    goto __imp____gmon_start__;
}

void rewind(struct _IO_FILE* fp)
{// addr = 0x08048B24
    goto __imp__rewind;
}

__isoc99_sscanf()
{// addr = 0x08048B34
    goto __imp____isoc99_sscanf;
}

int vsprintf(char* string, char* format, _G_va_list vals)
{// addr = 0x08048B44
    goto __imp__vsprintf;
}

char* strchr(char* __s, int __c)
{// addr = 0x08048B54
    goto __imp__strchr;
}

char* getenv(char* __name)
{// addr = 0x08048B64
    goto __imp__getenv;
}

void* calloc(int __nmemb, int __size)
{// addr = 0x08048B74
    goto __imp__calloc;
}

int system(char* __command)
{// addr = 0x08048B84
    goto __imp__system;
}

char* strncpy(char* __dest, char* __src, int __n)
{// addr = 0x08048B94
    goto __imp__strncpy;
}

char* fgets(char* dst, int sz, struct _IO_FILE* fp)
{// addr = 0x08048BA4
    goto __imp__fgets;
}

__libc_start_main()
{// addr = 0x08048BB4
    goto __imp____libc_start_main;
}

char* strrchr(char* __s, int __c)
{// addr = 0x08048BC4
    goto __imp__strrchr;
}

readdir()
{// addr = 0x08048BD4
    goto __imp__readdir;
}

long strtol(char* __nptr, char** __endptr, int __base)
{// addr = 0x08048BE4
    goto __imp__strtol;
}

void free(void* __ptr)
{// addr = 0x08048BF4
    goto __imp__free;
}

int fflush(struct _IO_FILE* fp)
{// addr = 0x08048C04
    goto __imp__fflush;
}

int mkstemp(__caddr_t __template)
{// addr = 0x08048C14
    goto __imp__mkstemp;
}

opendir()
{// addr = 0x08048C24
    goto __imp__opendir;
}

int getopt_long(int ___argc, __builtin_va_list* ___argv, char* __shortopts, struct option* __longopts, int* __longind)
{// addr = 0x08048C34
    goto __imp__getopt_long;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x08048C44
    goto __imp__fclose;
}

void* memcpy(void* __dest, void* __src, int __n)
{// addr = 0x08048C54
    goto __imp__memcpy;
}

int strlen(char* __s)
{// addr = 0x08048C64
    goto __imp__strlen;
}

struct _IO_FILE* fopen(char* name, char* mode)
{// addr = 0x08048C74
    goto __imp__fopen;
}

char* strcpy(char* __dest, char* __src)
{// addr = 0x08048C84
    goto __imp__strcpy;
}

int chdir(char* __path)
{// addr = 0x08048C94
    goto __imp__chdir;
}

int putenv(char* __string)
{// addr = 0x08048CA4
    goto __imp__putenv;
}

closedir()
{// addr = 0x08048CB4
    goto __imp__closedir;
}

int close(int __fd)
{// addr = 0x08048CC4
    goto __imp__close;
}

int fwrite(void* src, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x08048CD4
    goto __imp__fwrite;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x08048CE4
    goto __imp__fprintf;
}

char* strstr(char* __haystack, char* __needle)
{// addr = 0x08048CF4
    goto __imp__strstr;
}

int setvbuf(struct _IO_FILE* fp, char* bufptr, int mode, int size)
{// addr = 0x08048D04
    goto __imp__setvbuf;
}

int remove(char* name)
{// addr = 0x08048D14
    goto __imp__remove;
}

void* malloc(int __size)
{// addr = 0x08048D24
    goto __imp__malloc;
}

__stack_chk_fail()
{// addr = 0x08048D34
    goto __imp____stack_chk_fail;
}

int fputc(int ch, struct _IO_FILE* fp)
{// addr = 0x08048D44
    goto __imp__fputc;
}

char* strtok(char* __s, char* __delim)
{// addr = 0x08048D54
    goto __imp__strtok;
}

char* strcat(char* __dest, char* __src)
{// addr = 0x08048D64
    goto __imp__strcat;
}

__caddr_t getcwd(__caddr_t __buf, int __size)
{// addr = 0x08048D74
    goto __imp__getcwd;
}

int rand()
{// addr = 0x08048D84
    goto __imp__rand;
}

char* strdup(char* __s)
{// addr = 0x08048D94
    goto __imp__strdup;
}

int strcmp(char* __s1, char* __s2)
{// addr = 0x08048DA4
    goto __imp__strcmp;
}

void exit(int __status)
{// addr = 0x08048DB4
    goto __imp__exit;
}

L08048E60()
{
    _unknown_ __ebp;

    __eax =  *134582048;
    if( *134582048 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 134582048;
     *__eax();
    return;
}

exit_env()
{// addr = 0x08048E84
    _unknown_ __ebp;

    return;
}

exit_tmp()
{// addr = 0x08048E89
    int error;
    char[2047] tmp;
    DIR* dir;
    signed int _v16;
    char _v2064;
    int _v2068;
    int _v2072;
    _unknown_ _v2080;
    char[2047]* _v2084;
    char[2047]* _v2088;
    _unknown_ __ebp;
    _unknown_ _t21;
    signed int _t26;
    _unknown_ _t27;
    _unknown_ _t30;
    _unknown_ _t36;
    int _t38;
    _unknown_ _t42;

    _v16 =  *gs:0x14];
    __eflags = TMPDIR & 255 & 4294967295;
    if(__eflags != 0) {
        __eflags = TMPCLEAN;
        if(__eflags == 0) {
            chdir( &CWD);
            _v2084 =  &TMPDIR;
            sprintf( &_v2064, "rm -rf %s/*");
            __eflags = VERBOSE;
            if(VERBOSE != 0) {
                fwrite("Removing temporary extension files...", 1, 37, __imp__stdout);
            }
            _v2068 = system( &_v2064);
            _v2084 =  &TMPDIR;
            sprintf( &_v2064, "rmdir %s");
            _t38 = system( &_v2064);
            _v2068 = _t38;
             *__esp =  &TMPDIR;
            opendir();
            _v2072 = _t38;
            __eflags = _v2072;
            if(_v2072 != 0) {
                _v2088 =  &TMPDIR;
                print_warning("could not remove temporary directory %s.\nPlease remove manually.\n");
            }
            __eflags = VERBOSE;
            if(__eflags != 0) {
                print_done();
            }
            TMPCLEAN = 1;
        }
    } else {
        TMPCLEAN = 1;
    }
    _t26 = _v16 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t26;
    }
    __stack_chk_fail();
    return _t26;
}

exit_db()
{// addr = 0x08048FC2
    int error;
    char[2047] tmp;
    signed int _v16;
    char _v2064;
    int _v2068;
    _unknown_ _v2080;
    char[2047]* _v2084;
    char[2047]* _v2088;
    _unknown_ __ebp;
    _unknown_ _t79;
    signed int _t82;
    _unknown_ _t83;
    _unknown_ _t107;
    _unknown_ _t112;
    _unknown_ _t117;
    _unknown_ _t122;
    _unknown_ _t127;
    _unknown_ _t132;
    _unknown_ _t137;
    _unknown_ _t142;
    _unknown_ _t147;
    _unknown_ _t152;
    int _t174;

    _v16 =  *gs:0x14];
    if(TMPDBCLEAN != 0) {
L34:
        _t82 = _v16 ^  *gs:0x14];
        if(_t174 == 0) {
            return _t82;
        }
        __stack_chk_fail();
        return _t82;
    } else {
        chdir( &CWD);
        if(VERBOSE != 0) {
            fwrite("Removing temporary registration files...", 1, 40, __imp__stdout);
        }
        if((TMPDB & 255 & 4294967295) != 0) {
            _v2084 =  &TMPDB;
            sprintf( &_v2064, "rm -rf %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMPDB;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_GISMAN & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_GISMAN;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_GISMAN;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_DESCR & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_DESCR;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_DESCR;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_INFO & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_INFO;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_INFO;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_DEPS & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_DEPS;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_INFO;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_BUGS & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_BUGS;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_INFO;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_AUTHORS & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_AUTHORS;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_INFO;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if((TMP_HTML & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_HTML;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_HTML;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        if(VERBOSE == 0 && (TMP_NULL & 255 & 4294967295) != 0) {
            _v2084 =  &TMP_NULL;
            sprintf( &_v2064, "rm -f %s");
            _v2068 = system( &_v2064);
            if(_v2068 != 0) {
                _v2088 =  &TMP_NULL;
                print_warning("could not remove temporary file %s.\nPlease remove manually.\n");
            }
        }
        _t174 = VERBOSE;
        if(_t174 != 0) {
            print_done();
        }
        TMPDBCLEAN = 1;
        goto L34;
    }
}

exit_msg()
{// addr = 0x08049390
    _unknown_ _v16;
    int _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t12;
    _unknown_ _t15;
    _unknown_ _t17;

    if(ERROR >= 0) {
        if(WARNINGS == 1) {
            fwrite("Job done but there was one warning. Please check.\n", 1, 50, __imp__stdout);
        }
        if(WARNINGS <= 1) {
            return ;
        }
        _v20 = WARNINGS;
        fprintf(__imp__stdout, "Job done but there were %i warnings. Please check.\n");
        return;
    }
    _v20 = ERROR;
    fprintf(__imp__stdout, "Program exited with an error (code %i). Operation aborted.\n");
    return;
}

print_error(int err_code, char* msg)
{// addr = 0x08049420
    char[2047] buffer;
    va_list ap;
    signed int _v16;
    char _v2064;
    void* _v2068;
    char* _v2080;
    char _v2100;
    char* _v2104;
    signed int _v2124;
    char _v4172;
    void* _v4176;
    char* _v4188;
    char* _v4208;
    _unknown_ _v4212;
    _unknown_ __ebp;
    _unknown_ _t32;
    _unknown_ _t36;
    _unknown_ _t38;
    _unknown_ _t41;
    _unknown_ _t44;
    _unknown_ _t48;
    _unknown_ _t50;
    signed int _t54;
    _unknown_ _t58;
    _unknown_ _t60;
    _unknown_ _t61;
    _unknown_ _t62;

    __eflags = __eflags;
    _v2080 = msg;
    _v16 =  *gs:0x14];
    _v2068 =  &_a12;
    vsprintf( &_v2064, _v2080, _v2068);
    _v2100 =  &_v2064;
    fprintf(__imp__stderr, 134564288);
    ERROR = err_code;
    exit(err_code);
    _push(_t61);
    __esp = __esp - 2104;
    _v4188 = _v2104;
    _v2124 =  *gs:0x14];
    _v4176 =  &_v2100;
    vsprintf( &_v4172, _v4188, _v4176);
    _v4208 =  &_v4172;
    fprintf(__imp__stderr, 134564310);
    WARNINGS = WARNINGS + 1;
    _t54 = _v2124 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t54;
    }
    __stack_chk_fail();
    return _t54;
}

print_warning(char* msg)
{// addr = 0x0804949B
    char[2047] buffer;
    va_list ap;
    signed int _v16;
    char _v2064;
    void* _v2068;
    char* _v2080;
    char* _v2100;
    _unknown_ _v2104;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t21;
    _unknown_ _t23;
    signed int _t27;
    _unknown_ _t29;

    __eflags = __eflags;
    _v2080 = msg;
    _v16 =  *gs:0x14];
    _v2068 =  &_a8;
    vsprintf( &_v2064, _v2080, _v2068);
    _v2100 =  &_v2064;
    fprintf(__imp__stderr, 134564310);
    WARNINGS = WARNINGS + 1;
    _t27 = _v16 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t27;
    }
    __stack_chk_fail();
    return _t27;
}

print_done()
{// addr = 0x08049523
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t5;
    _unknown_ _t6;

    fwrite(134564334, 1, 17, __imp__stdout);
    return;
}

char* basename(char* path)
{// addr = 0x08049554
    char* copy;
    char* element;
    char* backup;
    char* _v16;
    char* _v20;
    char* _v24;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t28;
    _unknown_ _t33;
    _unknown_ _t37;
    _unknown_ _t43;
    _unknown_ _t44;
    _unknown_ _t46;

    _v16 = strdup(path);
    _v24 = 0;
    _v20 = strtok(_v16, 134564352);
    if(_v20 == 0) {
        if(_v16 == 0) {
            return 0;
        } else {
            free(_v16);
            return 0;
        }
    }
    _v24 = strdup(_v20);
    while(_v20 != 0) {
        if(_v20 != 0 && ( *_v20 & 255 & 4294967295) != 0) {
            _v24 = strdup(_v20);
        }
    }
}

mkdir_s(char* pathname, char* mode)
{// addr = 0x0804961D
    char[4999] tmp;
    signed int _v16;
    char _v5016;
    char* _v5024;
    char* _v5028;
    char* _v5040;
    char* _v5044;
    _unknown_ _v5048;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t20;
    _unknown_ _t22;
    signed int _t24;

    __eflags = __eflags;
    _v5024 = pathname;
    _v5028 = mode;
    _v16 =  *gs:0x14];
    _v5040 = _v5028;
    _v5044 = _v5024;
    sprintf( &_v5016, "mkdir %s --mode=%s -p");
    system( &_v5016);
    _t24 = _v16 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t24;
    }
    __stack_chk_fail();
    return _t24;
}

int chop(char* string)
{// addr = 0x0804968F
    int i;
    int chopped;
    int stop;
    intOrPtr _v16;
    int _v20;
    int _v24;
    _unknown_ __ebp;

    _v24 = 0;
    _v20 = 0;
    _v16 = strlen(string) - 1;
    while(_v16 >= 0) {
        _v24 = 1;
        if(( *(_v16 + string) & 255 & 4294967295) == 10 || ( *(_v16 + string) & 255 & 4294967295) == 9 || ( *(_v16 + string) & 255 & 4294967295) == 32 || ( *(_v16 + string) & 255 & 4294967295) == 12 || ( *(_v16 + string) & 255 & 4294967295) == 13) {
            _v20 = _v20 + 1;
            _v24 = 0;
        }
        if(_v24 != 1) {
            _v16 = _v16 - 1;
            continue;
        }
         *(strlen(string) - _v20 + string) = 0;
        return _v20;
    }
}

int insert_str(char* str, int pos, char** strarr)
{// addr = 0x08049737
    char[2047] save;
    char[2047] insert;
    char[2047] last;
    int n;
    int j;
    int len;
    intOrPtr _v16;
    _unknown_ _v2064;
    _unknown_ _v4112;
    _unknown_ _v6160;
    signed int _v6164;
    _unknown_ _v6168;
    _unknown_ _v6172;
    char* _v6176;
    char** _v6180;
    _unknown_ _v6196;
    _unknown_ _v6200;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t90;
    _unknown_ _t103;
    _unknown_ _t109;
    _unknown_ _t114;
    _unknown_ _t125;
    _unknown_ _t135;
    _unknown_ _t141;
    _unknown_ _t155;
    _unknown_ _t158;
    _unknown_ _t169;
    _unknown_ _t174;
    _unknown_ _t186;
    _unknown_ _t204;
    _unknown_ _t209;

    _v6176 = str;
    _v6180 = strarr;
    _v16 =  *gs:0x14];
    _v6164 = 0;
    while(_v6180[_v6164] != 0) {
        _v6164 = _v6164 + 1;
    }
}

int delete_str(int pos, char** strarr)
{// addr = 0x08049A5E
    int i;
    signed int _v16;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t50;
    _unknown_ _t75;

    _v16 = 0;
    while(strarr[_v16] != 0) {
        _v16 = _v16 + 1;
    }
}

int find_pos(char* str, char** strarr, int start)
{// addr = 0x08049B5F
    int i;
    int j;
    signed int _v16;
    _unknown_ _v20;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t24;
    _unknown_ _t33;

    _v16 = 0;
    while(strarr[_v16] != 0) {
        _v16 = _v16 + 1;
    }
}

dump_str(FILE* f, char** strarr)
{// addr = 0x08049BD9
    int i;
    signed int _v16;
    char* _v32;
    signed int _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t22;

    _v16 = 0;
    while(strarr[_v16] != 0) {
        _v32 = strarr[_v16];
        _v36 = _v16;
        fprintf(f, "%i: %s");
        _v16 = _v16 + 1;
    }
}

get_package_name(char* path, char* name)
{// addr = 0x08049C27
    FILE* f;
    char[2047] file;
    char[2047] tmp;
    signed int _v16;
    char _v2064;
    char _v4112;
    struct _IO_FILE* _v4116;
    char* _v4128;
    char* _v4132;
    char* _v4144;
    char* _v4148;
    _unknown_ _v4152;
    _unknown_ __ebp;
    _unknown_ _t31;
    _unknown_ _t34;
    char* _t39;
    _unknown_ _t41;
    _unknown_ _t44;
    _unknown_ _t46;
    signed int _t48;
    _unknown_ _t50;

    _v4128 = path;
    _v4132 = name;
    _v16 =  *gs:0x14];
    _v4144 = "name";
    _v4148 = _v4128;
    sprintf( &_v2064, "%s/%s");
    _v4116 = fopen( &_v2064, "r");
    __eflags = _v4116;
    if(_v4116 != 0) {
        _t39 = nc_fgets_nb( &_v4112, 2048, _v4116);
        __eflags = _t39;
        if(_t39 != 0) {
            chop( &_v4112);
            strcpy(_v4132,  &_v4112);
        } else {
            fclose(_v4116);
            print_error(-6, "invalid or missing extension name.\n");
        }
    } else {
        print_error(-6, "'name' file not readable.\n");
    }
    fclose(_v4116);
    _t48 = _v16 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t48;
    }
    __stack_chk_fail();
    return _t48;
}

char* nc_fgets(char* s, int size, FILE* stream)
{// addr = 0x08049D41
    char* hashmark;
    char* tmp;
    char* _v16;
    void* _v20;
    void* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t41;
    _unknown_ _t47;
    _unknown_ _t49;
    _unknown_ _t54;

    if(fgets(s, size, stream) == 0) {
        return 0;
    }
    _v16 = strchr(s, 35);
    if(_v16 == 0) {
        return s;
    }
    if(s == _v16) {
        return nc_fgets(s, size, stream);
    }
    _v20 = malloc(2048);
    strcpy(_v20, s);
    _v20 = strtok(_v20, "#");
    _v36 = _v20;
    sprintf(s, "%s\n");
    free(_v20);
    return s;
}

char* nc_fgets_html(char* s, int size, FILE* stream)
{// addr = 0x08049E14
    char* hashmark;
    char* tmp;
    char* tag;
    char* tag_2;
    char* tag_insert;
    char* tag_content;
    char* pos;
    char* insert;
    int space;
    _unknown_ _v16;
    void* _v20;
    char* _v24;
    signed char* _v28;
    char* _v32;
    char* _v36;
    char* _v40;
    void* _v44;
    signed char _v48;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    _unknown_ _t225;
    _unknown_ _t227;
    _unknown_ _t229;
    _unknown_ _t237;
    _unknown_ _t243;
    _unknown_ _t245;
    _unknown_ _t250;

    if(fgets(s, size, stream) == 0) {
        return 0;
    }
    _v20 = malloc(strlen(s) + 1);
    _v36 = malloc(strlen(s) + 1);
    _v44 = _v20;
    _v40 = s;
    while(( *_v40 & 255 & 4294967295) != 0) {
        if(( *_v40 & 255 & 4294967295) != 60) {
L33:
            if(( *_v40 & 255 & 4294967295) != 62) {
                 *_v44 =  *_v40 & 255 & 4294967295;
                _v44 =  &(_v44[0]);
            }
            _v40 =  &(_v40[1]);
            continue;
        } else {
            _v24 = _v40;
            _v32 = _v36;
            _v40 = _v40 - 1;
            if(_v40 >= s) {
                if(( *_v40 & 255 & 4294967295) != 32) {
                    _v48 = 0;
                } else {
                    _v48 = 1;
                }
            }
            while(( *_v24 & 255 & 4294967295) != 0) {
                 *_v32 =  *_v24 & 255 & 4294967295;
                 *_v32 = ( *_v32 & 255) + 1 & 4294967295;
                if(( *_v24 & 255 & 4294967295) != 62) {
                    _v24 =  &(_v24[1]);
                    continue;
                }
                 *_v32 = 0;
                _v28 = _v24;
                _v28 =  &(_v28[1]);
                if(( *_v28 & 255 & 4294967295) != 10) {
                    if(strstr(_v36, "<BR>") != 0 && _v44 > _v20) {
                         *_v44 = 10;
                         *_v44 = ( *_v44 & 255) + 1 & 4294967295;
                    }
                    if(strstr(_v36, "<p>") != 0) {
                        if(_v44 > _v20) {
                             *_v44 = 10;
                             *_v44 = ( *_v44 & 255) + 1 & 4294967295;
                        }
                         *_v44 = 10;
                         *_v44 = ( *_v44 & 255) + 1 & 4294967295;
                    }
                    if(strstr(_v36, "<P>") != 0) {
                        if(_v44 > _v20) {
                             *_v44 = 10;
                             *_v44 = ( *_v44 & 255) + 1 & 4294967295;
                        }
                         *_v44 = 10;
                         *_v44 = ( *_v44 & 255) + 1 & 4294967295;
                    }
                }
                _v40 = _v24;
                if(( *_v40 & 255 & 4294967295) == 32) {
                    if(_v48 == 1) {
                        _v40 =  &(_v40[1]);
                        _v48 = 0;
                    }
                }
                goto L33;
            }
        }
    }
}

int is_text(char* s)
{// addr = 0x0804A146
    int i;
    int nonws;
    intOrPtr _v16;
    intOrPtr _v20;
    _unknown_ __ebp;

    _v20 = 0;
    _v16 = strlen(s) - 1;
    while(_v16 >= 0) {
        if(( *(_v16 + s) & 255 & 4294967295) == 32) {
L6:
            _v20 = 0;
            _v16 = _v16 - 1;
            continue;
        }
        if(( *(_v16 + s) & 255 & 4294967295) == 9 || ( *(_v16 + s) & 255 & 4294967295) == 10) {
            goto L6;
        } else {
            if(( *(_v16 + s) & 255 & 4294967295) == 12 || ( *(_v16 + s) & 255 & 4294967295) == 13) {
                goto L6;
            } else {
L7:
                _v20 = 1;
                return _v20;
            }
        }
        goto L7;
    }
}

char* nc_fgets_nb(char* s, int size, FILE* stream)
{// addr = 0x0804A1C8
    char* hashmark;
    char* tmp;
    char* _v16;
    void* _v20;
    void* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t49;
    _unknown_ _t55;
    _unknown_ _t57;
    _unknown_ _t66;

    if(fgets(s, size, stream) == 0) {
        return 0;
    }
    if(is_text(s) == 0) {
        return nc_fgets_nb(s, size, stream);
    }
    _v16 = strchr(s, 35);
    if(_v16 == 0) {
        return s;
    }
    if(s == _v16) {
        return nc_fgets_nb(s, size, stream);
    }
    _v20 = malloc(2048);
    strcpy(_v20, s);
    _v20 = strtok(_v20, "#");
    _v36 = _v20;
    sprintf(s, "%s\n");
    free(_v20);
    return s;
}

dump_ascii(char* file, char* heading)
{// addr = 0x0804A2C8
    char[2047] tmp;
    FILE* f;
    signed int _v16;
    char _v2064;
    int _v2068;
    char* _v2080;
    char* _v2084;
    _unknown_ _v2096;
    int _v2100;
    intOrPtr _v2104;
    _unknown_ __ebp;
    _unknown_ _t29;
    _unknown_ _t31;
    _unknown_ _t36;
    signed int _t38;

    _v2080 = file;
    _v2084 = heading;
    _v16 =  *gs:0x14];
    _v2100 = _v2084;
    fprintf(__imp__stdout, "%s\n");
    _v2068 = fopen(_v2080, "r");
    __eflags = _v2068;
    if(_v2068 != 0) {
        while(1) {
            __eax = _v2068;
            _v2100 = _v2068;
            _v2104 = 2048;
            __eax =  ?_? ( &_v2064);
             *__esp =  &_v2064;
            __eax = nc_fgets_html();
            __eflags = __eax;
            if(__eax == 0) {
                break;
            }
            __eax = __imp__stdout;
            _v2100 =  &_v2064;
            __eax = fprintf(__imp__stdout, "  %s");
        }
        __imp__stdout = fputc(10, __imp__stdout);
        _v2068 = fclose(_v2068);
L6:
        _t38 = _v16 ^  *gs:0x14];
        if(__eflags == 0) {
            return _t38;
        }
        __stack_chk_fail();
        return _t38;
    }
    fwrite("  No information available.\n", 1, 28, __imp__stdout);
    goto L6;
}

dump_plain(char* file, char* tmpfile)
{// addr = 0x0804A3DB
    char[2047] tmp;
    FILE* f_in;
    FILE* f_out;
    signed int _v16;
    char _v2064;
    FILE* _v2068;
    struct _IO_FILE* _v2072;
    char* _v2080;
    char* _v2084;
    char* _v2096;
    char* _v2100;
    _unknown_ _v2104;
    _unknown_ __ebp;
    _unknown_ _t34;
    _unknown_ _t37;
    _unknown_ _t39;
    _unknown_ _t49;
    _unknown_ _t51;
    _unknown_ _t53;
    signed int _t55;
    char* _t63;

    _v2080 = file;
    _v2084 = tmpfile;
    _v16 =  *gs:0x14];
    memcpy(_v2084, "/tmp/grass.extensions.db.XXXXXX", 32);
    mkstemp(_v2084);
    _v2072 = fopen(_v2084, "w+");
    if(_v2072 == 0) {
        _v2096 = strerror( *(__errno_location()));
        _v2100 = _v2084;
        print_error(-23, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    L08054750(exit_db);
    _v2068 = fopen(_v2080, "r");
    while(1) {
        _t63 = nc_fgets( &_v2064, 2048, _v2068);
        if(_t63 == 0) {
            break;
        }
        fprintf(_v2072,  &_v2064);
    }
    fclose(_v2068);
    fclose(_v2072);
    _t55 = _v16 ^  *gs:0x14];
    if(_t63 == 0) {
        return _t55;
    }
    __stack_chk_fail();
    return _t55;
}

dump_html(char* file, char* tmpfile)
{// addr = 0x0804A51B
    char[2047] tmp;
    char[2047] line;
    FILE* f_in;
    FILE* f_out;
    int fd;
    signed int _v16;
    char _v2064;
    char _v4112;
    FILE* _v4116;
    struct _IO_FILE* _v4120;
    int _v4124;
    char* _v4128;
    char* _v4132;
    char* _v4144;
    char* _v4148;
    _unknown_ _v4152;
    _unknown_ __ebp;
    _unknown_ _t45;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t59;
    _unknown_ _t64;
    _unknown_ _t67;
    _unknown_ _t69;
    _unknown_ _t71;
    _unknown_ _t73;
    _unknown_ _t75;
    signed int _t77;
    char* _t87;

    _v4128 = file;
    _v4132 = tmpfile;
    _v16 =  *gs:0x14];
    memcpy(_v4132, "/tmp/grass.extensions.db.XXXXXX", 32);
    mkstemp(_v4132);
    _v4120 = fopen(_v4132, "w+");
    if(_v4120 == 0) {
        _v4144 = strerror( *(__errno_location()));
        _v4148 = _v4132;
        print_error(-23, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    L08054750(exit_db);
    _v4116 = fopen(_v4128, "r");
    while(1) {
        _t87 = nc_fgets( &_v4112, 2048, _v4116);
        if(_t87 == 0) {
            break;
        }
        chop( &_v4112);
        if(is_text( &_v4112) != 0) {
            _v4148 =  &_v4112;
            sprintf( &_v2064, "%s <br>\n");
            fprintf(_v4120,  &_v2064);
        } else {
            fwrite("<p>\n", 1, 4, _v4120);
        }
    }
    fclose(_v4116);
    fclose(_v4120);
    close(_v4124);
    _t77 = _v16 ^  *gs:0x14];
    if(_t87 == 0) {
        return _t77;
    }
    __stack_chk_fail();
    return _t77;
}

list_binaries(char* package)
{// addr = 0x0804A6DA
    char[2047] tmp;
    struct stat buf;
    DIR* dir;
    struct dirent* dir_entry;
    int n_dirs;
    signed int _v16;
    char _v2064;
    int _v2068;
    int _v2072;
    int _v2076;
    signed int _v2148;
    char _v2164;
    char* _v2176;
    intOrPtr _v2192;
    char* _v2196;
    _unknown_ _v2200;
    _unknown_ __ebp;
    _unknown_ _t57;
    _unknown_ _t60;
    char* _t61;
    int _t62;
    int _t65;
    int _t66;
    _unknown_ _t69;
    signed int _t71;
    _unknown_ _t74;
    int _t77;
    int _t80;
    _unknown_ _t84;
    _unknown_ _t90;
    _unknown_ _t93;
    _unknown_ _t96;

    _v2176 = package;
    _v16 =  *gs:0x14];
    _v2076 = 0;
    fwrite("Binary installation files\n", 1, 26, __imp__stdout);
    _t61 = _v2176;
     *__esp = _t61;
    opendir();
    _v2068 = _t61;
    __eflags = _v2068;
    if(_v2068 != 0) {
        _t62 = _v2068;
         *__esp = _t62;
        readdir();
        _v2072 = _t62;
        while(1) {
            __eflags = _v2072;
            if(_v2072 == 0) {
                break;
            }
            _t65 = strcmp(_v2072 + 11, ".");
            __eflags = _t65;
            if(_t65 != 0) {
                _t77 = strcmp(_v2072 + 11, "..");
                __eflags = _t77;
                if(_t77 != 0) {
                    _t80 = strcmp(_v2072 + 11, "src");
                    __eflags = _t80;
                    if(_t80 != 0) {
                        _v2192 = _v2072 + 11;
                        _v2196 = _v2176;
                        sprintf( &_v2064, "%s/%s");
                        L08054790( &_v2064,  &_v2164);
                        __eflags = (_v2148 & 61440) - 16384;
                        if((_v2148 & 61440) == 16384) {
                            __eflags = _v2076;
                            if(_v2076 != 0) {
                                _v2196 = _v2072 + 11;
                                fprintf(__imp__stdout, ", %s");
                            } else {
                                _v2196 = _v2072 + 11;
                                fprintf(__imp__stdout, "  %s");
                            }
                            _v2076 = _v2076 + 1;
                        }
                    }
                }
            }
            _t66 = _v2068;
             *__esp = _t66;
            readdir();
            _v2072 = _t66;
        }
    } else {
        fwrite("  None.\n\n", 1, 9, __imp__stdout);
L16:
        _t71 = _v16 ^  *gs:0x14];
        if(__eflags == 0) {
            return _t71;
        }
        __stack_chk_fail();
        return _t71;
    }
    __eflags = _v2076;
    if(_v2076 == 0) {
        fwrite("  None.", 1, 7, __imp__stdout);
    }
    fwrite("\n\n", 1, 2, __imp__stdout);
    goto L16;
}

int binaries_exist(char* package, char* binaries)
{// addr = 0x0804A92C
    char[2047] tmp;
    struct stat buf;
    DIR* dir;
    struct dirent* dir_entry;
    intOrPtr _v16;
    char _v2064;
    int _v2068;
    int _v2072;
    signed int _v2144;
    char _v2160;
    int _v2176;
    char* _v2180;
    intOrPtr _v2192;
    char* _v2196;
    _unknown_ _v2200;
    _unknown_ __ebp;
    _unknown_ _t39;
    int _t40;
    int _t41;
    int _t44;
    int _t45;
    int _t46;
    int _t49;
    int _t52;
    _unknown_ _t56;
    _unknown_ _t64;

    _v2176 = package;
    _v2180 = binaries;
    _v16 =  *gs:0x14];
    _t40 = _v2176;
     *__esp = _t40;
    opendir();
    _v2068 = _t40;
    __eflags = _v2068;
    if(__eflags != 0) {
        _t41 = _v2068;
         *__esp = _t41;
        readdir();
        _v2072 = _t41;
        while(1) {
L10:
            __eflags = _v2072;
            if(__eflags == 0) {
                break;
            }
            goto L3;
        }
        _t46 = 0;
        goto L12;
    }
    _t46 = 0;
L12:
    if(__eflags == 0) {
        return _t46;
    }
    __stack_chk_fail();
    return _t46;
L3:
    _t44 = strcmp(_v2072 + 11, ".");
    __eflags = _t44;
    if(_t44 == 0) {
L9:
        _t45 = _v2068;
         *__esp = _t45;
        readdir();
        _v2072 = _t45;
        goto L10;
    }
    _t49 = strcmp(_v2072 + 11, "..");
    __eflags = _t49;
    if(_t49 == 0) {
        goto L9;
    }
    _t52 = strcmp(_v2072 + 11, "src");
    __eflags = _t52;
    if(_t52 == 0) {
        goto L9;
    }
    _v2192 = _v2072 + 11;
    _v2196 = _v2176;
    sprintf( &_v2064, "%s/%s");
    L08054790( &_v2064,  &_v2160);
    __eflags = (_v2144 & 61440) - 16384;
    if((_v2144 & 61440) != 16384) {
        goto L9;
    }
    __eflags = strcmp(_v2072 + 11, _v2180);
    if(__eflags != 0) {
        goto L9;
    }
    _t46 = 1;
    goto L12;
}

int check_filetype(char* myfile)
{// addr = 0x0804AAA8
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t25;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;

    if(strstr(myfile, ".tar.gz") != 0) {
        return 1;
    }
    if(strstr(myfile, ".tgz") != 0) {
        return 1;
    }
    if(strstr(myfile, ".tar.bz2") != 0) {
        return 2;
    }
    if(strstr(myfile, ".tbz") != 0) {
        return 2;
    }
    if(strstr(myfile, ".zip") != 0) {
        return 3;
    }
    if(strstr(myfile, ".tar") == 0) {
        return 0;
    }
    return 4;
}

wget_extension(char* url)
{// addr = 0x0804AB6C
    char[2047] str;
    int error;
    signed int _v16;
    char _v2064;
    int _v2068;
    char* _v2080;
    _unknown_ _v2096;
    char* _v2100;
    _unknown_ _v2104;
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t29;
    _unknown_ _t33;
    signed int _t37;
    _unknown_ _t41;
    int _t47;

    _v2080 = url;
    _v16 =  *gs:0x14];
    fwrite("Downloading...", 1, 14, __imp__stdout);
    if(VERBOSE == 0) {
        _v2100 = _v2080;
        sprintf( &_v2064, "wget -N -q %s");
    } else {
        _v2100 = _v2080;
        sprintf( &_v2064, "wget -N %s");
    }
    _v2068 = system( &_v2064);
    if(_v2068 == 255) {
        print_error(-20, "could not run 'wget' to download extension. Is it installed?\n");
    }
    _t47 = _v2068;
    if(_t47 > 0) {
        _v2100 =  &_v2064;
        print_error(-20, "running command '%s'.\n");
    }
    print_done();
    _t37 = _v16 ^  *gs:0x14];
    if(_t47 == 0) {
        return _t37;
    }
    __stack_chk_fail();
    return _t37;
}

su(char* gisbase, char* cmd)
{// addr = 0x0804AC6E
    char[2047] tmpfile;
    int error;
    FILE* f;
    signed int _v16;
    char _v2064;
    int _v2068;
    struct _IO_FILE* _v2072;
    char* _v2080;
    char* _v2084;
    int _v2096;
    char* _v2100;
    _unknown_ _v2104;
    _unknown_ __ebp;
    _unknown_ _t27;
    _unknown_ _t35;
    _unknown_ _t39;
    _unknown_ _t45;
    _unknown_ _t47;
    signed int _t51;

    _v2080 = gisbase;
    _v2084 = cmd;
    _v16 =  *gs:0x14];
    next = next * next + 54321;
    next = next >> 16 & 32767;
    srand(next);
    _v2096 = rand();
    _v2100 = _v2080;
    sprintf( &_v2064, "%s/gem.test.%i");
    _v2072 = fopen( &_v2064, "w+");
    __eflags =  *(__errno_location()) - 13;
    if(__eflags != 0) {
        remove( &_v2064);
        fclose(_v2072);
        _v2068 = system(_v2084);
        __eflags = _v2068;
        if(__eflags != 0) {
            _v2100 = _v2084;
            print_error(-9, "could not run '%s'.\n");
        }
    } else {
        print_error(-5, "You don't have write access to your local GRASS installation.\nPlease consult your system administrator.\n");
    }
    _t51 = _v16 ^  *gs:0x14];
    if(__eflags == 0) {
        return _t51;
    }
    __stack_chk_fail();
    return _t51;
}

int vercmp(int major, int minor, int revision, int major2, int minor2, int revision2)
{// addr = 0x0804AD9B
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t27;
    _unknown_ _t28;
    _unknown_ _t29;
    _unknown_ _t30;
    _unknown_ _t31;
    _unknown_ _t32;
    _unknown_ _t35;

    if(major == major2 && minor == minor2) {
        if(revision == revision2) {
            return 0;
        }
    }
    if(major2 > major) {
        return -1;
    }
    if(major2 < major) {
        return 1;
    }
    if(minor2 > minor) {
        return -1;
    }
    if(minor2 < minor) {
        return 1;
    }
    if(revision2 > revision) {
        return -1;
    }
    if(revision2 >= revision) {
        return 0;
    }
    return 1;
}

char* depstr(char* package, char* gisbase)
{// addr = 0x0804AE20
    char[2047] file;
    char[2047] line;
    char* str;
    int first;
    int error;
    FILE* f_deps;
    char[2047] short_name;
    intOrPtr _v16;
    char _v2064;
    char _v4112;
    _unknown_ _v6160;
    void* _v6164;
    intOrPtr _v6168;
    _unknown_ _v6172;
    struct _IO_FILE* _v6176;
    char* _v6192;
    char* _v6196;
    char* _v6208;
    char* _v6212;
    _unknown_ _v6216;
    _unknown_ __ebp;
    _unknown_ _t51;
    _unknown_ _t54;
    _unknown_ _t63;
    _unknown_ _t68;
    _unknown_ _t71;
    _unknown_ _t74;
    _unknown_ _t77;
    _unknown_ _t79;
    char* _t80;
    _unknown_ _t89;
    _unknown_ _t92;

    _v6192 = package;
    _v6196 = gisbase;
    _v16 =  *gs:0x14];
    memcpy( &_v2064, "../depends", 11);
    _v6176 = fopen( &_v2064, "r");
    if(_v6176 != 0) {
L4:
        _v6168 = 1;
        _v6164 = malloc(2048);
        while(nc_fgets_nb( &_v4112, 2048, _v6176) != 0) {
        }
    }
    _t92 =  *(__errno_location()) - 2;
    if(_t92 != 0) {
        _v6208 = strerror( *(__errno_location()));
        _v6212 =  &_v2064;
        print_error(-17, "checking for file '%s': %s\n");
        goto L4;
    } else {
        _t80 = 134565141;
        if(_t92 == 0) {
            return _t80;
        }
        __stack_chk_fail();
        return _t80;
    }
    goto L5;
}

register_extension(char* gisbase, char* bins, char* pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision)
{// addr = 0x0804B014
    char[2047] file;
    char[2047] str;
    int n_lines;
    int error;
    int db_exists;
    int must_register;
    int copy_thru;
    int ext_exists;
    FILE* f_in;
    FILE* f_out;
    char[2047] short_name;
    char[2047] inst_bins;
    char[2047] deps;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char _v4112;
    char _v6160;
    char _v8208;
    char _v10256;
    intOrPtr _v10260;
    int _v10264;
    intOrPtr _v10268;
    intOrPtr _v10272;
    intOrPtr _v10276;
    intOrPtr _v10280;
    struct _IO_FILE* _v10284;
    struct _IO_FILE* _v10288;
    int _v10292;
    int _v10296;
    int _v10300;
    char* _v10304;
    char* _v10308;
    char* _v10312;
    char* _v10320;
    char* _v10324;
    int* _v10328;
    int* _v10332;
    int* _v10336;
    char* _v10340;
    char* _v10344;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t178;
    _unknown_ _t181;
    _unknown_ _t185;
    _unknown_ _t186;
    _unknown_ _t193;
    _unknown_ _t196;
    _unknown_ _t198;
    signed int _t200;
    _unknown_ _t206;
    _unknown_ _t207;
    _unknown_ _t219;
    _unknown_ _t221;
    _unknown_ _t231;
    _unknown_ _t233;
    _unknown_ _t238;
    _unknown_ _t241;
    _unknown_ _t246;
    _unknown_ _t249;
    _unknown_ _t256;
    struct _IO_FILE* _t308;

    _v10304 = gisbase;
    _v10308 = bins;
    _v10312 = pkg_short_name;
    _v16 =  *gs:0x14];
    _v10268 = 1;
    _v10340 = _v10304;
    sprintf( &_v2064, "%s/etc/extensions.db");
    _v10284 = fopen( &_v2064, "r");
    if(_v10284 == 0) {
        if( *(__errno_location()) != 2) {
            fclose(_v10284);
            _v10336 = strerror( *(__errno_location()));
            _v10340 =  &_v2064;
            print_error(-15, "checking for file '%s': %s\n");
        } else {
            _v10268 = 0;
        }
    }
    if(_v10268 == 0) {
        if(_v10260 == 0 || _v10268 == 0) {
            memcpy( &TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
            mkstemp( &TMPDB);
            _v10288 = fopen( &TMPDB, "w+");
            _t308 = _v10288;
            if(_t308 == 0) {
                _v10336 = strerror( *(__errno_location()));
                _v10340 =  &_v2064;
                print_error(-15, "could not create temp db '%s': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            }
            L08054750(exit_db);
            strcpy( &_v10256, depstr(_v10312, _v10304));
            _v10320 =  &_v10256;
            _v10324 = _v10308;
            _v10328 = pkg_revision;
            _v10332 = pkg_minor;
            _v10336 = pkg_major;
            _v10340 = _v10312;
            fprintf(_v10288, "%s\t%i.%i.%i\t%s\t%s\n");
            fclose(_v10288);
        }
        _t200 = _v16 ^  *gs:0x14];
        if(_t308 == 0) {
            return _t200;
        }
        __stack_chk_fail();
        return _t200;
    } else {
        memcpy( &TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
        mkstemp( &TMPDB);
        _v10288 = fopen( &TMPDB, "w+");
        if(_v10288 == 0) {
            _v10336 = strerror( *(__errno_location()));
            _v10340 =  &TMPDB;
            print_error(-15, "could not create temp file '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
    }
    L08054750(exit_db);
    _v10260 = 0;
    _v10272 = 1;
    _v10280 = 0;
    while(nc_fgets_nb( &_v4112, 2048, _v10284) != 0) {
        _v10260 = _v10260 + 1;
        _v10276 = 1;
        _v10320 =  &_v10256;
        _v10324 =  &_v8208;
        _v10328 =  &_v10300;
        _v10332 =  &_v10296;
        _v10336 =  &_v10292;
        _v10340 =  &_v6160;
        _v10344 = "%s\t%i.%i.%i\t%s\t%s";
         *__esp =  &_v4112;
        __isoc99_sscanf();
        if(strcmp( &_v6160, _v10312) == 0) {
            _v10280 = 1;
            _v10264 = vercmp(_v10292, _v10296, _v10300, pkg_major, pkg_minor, pkg_revision);
            if(FORCE == 0) {
                if(_v10264 >= 0) {
                    _v10328 = _v10300;
                    _v10332 = _v10296;
                    _v10336 = _v10292;
                    _v10340 = _v10312;
                    print_error(-16, "Extension '%s' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                } else {
                    _v10328 = _v10300;
                    _v10332 = _v10296;
                    _v10336 = _v10292;
                    _v10340 = _v10312;
                    print_error(-16, "Extension '%s' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                }
            }
            if(FORCE != 0) {
                if(_v10264 != 0) {
                    _v10272 = 1;
                    _v10276 = 0;
                } else {
                    _v10272 = 0;
                }
            }
        }
        if(_v10276 != 0) {
            fprintf(_v10288,  &_v4112);
            fflush(_v10288);
        }
    }
}

deregister_extension(char* package, char* pkg_short_name, char* gisbase)
{// addr = 0x0804B5E3
    char[2047] file;
    char[2047] str;
    int error;
    int db_exists;
    int copy_thru;
    FILE* f_in;
    FILE* f_out;
    int found_ext;
    char[2047] short_name;
    char[2047] inst_bins;
    char[2047] deps;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char _v4112;
    char _v6160;
    char _v8208;
    char _v10256;
    char* _v10260;
    intOrPtr _v10264;
    intOrPtr _v10268;
    struct _IO_FILE* _v10272;
    struct _IO_FILE* _v10276;
    intOrPtr _v10280;
    char _v10284;
    char _v10288;
    char _v10292;
    char* _v10304;
    char* _v10308;
    char* _v10312;
    char* _v10320;
    char* _v10324;
    char* _v10328;
    char* _v10332;
    char* _v10336;
    char* _v10340;
    char* _v10344;
    _unknown_ __ebp;
    _unknown_ _t90;
    _unknown_ _t93;
    signed int _t97;
    char* _t101;
    _unknown_ _t110;
    _unknown_ _t115;
    _unknown_ _t117;
    _unknown_ _t121;
    _unknown_ _t122;
    _unknown_ _t134;
    _unknown_ _t141;
    _unknown_ _t160;

    _v10304 = package;
    _v10308 = pkg_short_name;
    _v10312 = gisbase;
    _v16 =  *gs:0x14];
    _v10264 = 0;
    _v10340 = _v10312;
    sprintf( &_v2064, "%s/etc/extensions.db");
    _v10272 = fopen( &_v2064, "r");
    if(_v10272 != 0) {
        _v10264 = 1;
L8:
        if(_v10264 != 0) {
            _v10264 = 0;
            memcpy( &TMPDB, "/tmp/grass.extensions.db.XXXXXX", 32);
            mkstemp( &TMPDB);
            _v10276 = fopen( &TMPDB, "w+");
            if(_v10276 != 0 || FORCE != 0) {
                _v10264 = 1;
                L08054750(exit_db);
            } else {
                _v10336 = strerror( *(__errno_location()));
                _v10340 =  &_v2064;
                print_error(-19, "could not create temp db '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            }
        }
        if(_v10264 == 0) {
            _t97 = _v16 ^  *gs:0x14];
            if(_t160 == 0) {
                return _t97;
            }
            __stack_chk_fail();
            return _t97;
        }
        _v10280 = 0;
        while(nc_fgets_nb( &_v4112, 2048, _v10272) != 0) {
            _t101 =  &_v4112;
            _v10320 =  &_v10256;
            _v10324 =  &_v8208;
            _v10328 =  &_v10292;
            _v10332 =  &_v10288;
            _v10336 =  &_v10284;
            _v10340 =  &_v6160;
            _v10344 = "%s\t%i.%i.%i\t%s\t%s";
             *__esp = _t101;
            __isoc99_sscanf();
            _v10260 = _t101;
            if(_v10260 > 0) {
                _v10268 = 1;
                if(strcmp(_v10308,  &_v6160) == 0) {
                    _v10268 = 0;
                    _v10280 = 1;
                }
                if(_v10268 != 0) {
                    if(strstr( &_v10256, _v10308) != 0 && FORCE == 0) {
                        _v10336 =  &_v6160;
                        _v10340 = _v10308;
                        print_error(-19, "cannot uninstall extension '%s' it is needed by '%s'.\n");
                    }
                    fprintf(_v10276,  &_v4112);
                }
            }
        }
    }
    if( *(__errno_location()) != 2) {
L4:
        if(FORCE == 0) {
            fclose(_v10272);
            _v10336 = strerror( *(__errno_location()));
            _v10340 =  &_v2064;
            print_error(-19, "checking for file '%s': %s\n");
        }
        goto L8;
    }
    if(FORCE != 0) {
        goto L4;
    } else {
        fclose(_v10272);
        print_error(-19, "could not deregister: no extensions installed\n");
    }
    goto L8;
}

check_dependencies(char* package, char* gisbase, char* grass_version)
{// addr = 0x0804B961
    char[2047] file;
    char[2047] str;
    char[2047] dbstr;
    int error;
    int db_exists;
    int satisfied;
    FILE* f_deps;
    FILE* f_db;
    char[2047] short_name;
    int major;
    int minor;
    int revision;
    char[2047] dep_short_name;
    int dep_major;
    int dep_minor;
    int dep_revision;
    signed int _v32;
    char _v2080;
    char _v4128;
    char _v6176;
    char _v8224;
    char _v10272;
    char* _v10276;
    int _v10280;
    int _v10284;
    FILE* _v10288;
    struct _IO_FILE* _v10292;
    int _v10296;
    int _v10300;
    int _v10304;
    int _v10308;
    int _v10312;
    int _v10316;
    char* _v10320;
    char* _v10324;
    char* _v10328;
    int _v10348;
    int _v10352;
    int _v10356;
    int* _v10360;
    int* _v10364;
    int _v10368;
    char* _v10372;
    char* _v10376;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t154;
    _unknown_ _t160;
    char* _t166;
    _unknown_ _t170;
    char* _t174;
    _unknown_ _t189;
    signed int _t191;
    _unknown_ _t193;
    _unknown_ _t197;
    _unknown_ _t205;
    _unknown_ _t211;
    _unknown_ _t251;

    _v10320 = package;
    _v10324 = gisbase;
    _v10328 = grass_version;
    _v32 =  *gs:0x14];
    if(FORCE != 0) {
        goto L30;
    }
    _v10288 = fopen("../depends", "r");
    if(_v10288 != 0) {
L5:
        _v10280 = 1;
        _v10372 = _v10324;
        sprintf( &_v2080, "%s/etc/extensions.db");
        _v10292 = fopen( &_v2080, "r");
        if(_v10292 == 0) {
            if( *(__errno_location()) != 2) {
                fclose(_v10292);
                _v10368 = strerror( *(__errno_location()));
                _v10372 =  &_v2080;
                print_error(-17, "checking for file '%s': %s\n");
            } else {
                _v10280 = 0;
            }
        }
        _v10284 = 0;
        while(nc_fgets_nb( &_v4128, 2048, _v10288) != 0) {
            _v10296 = 0;
            _v10300 = 0;
            _v10304 = 0;
            _v10308 = 0;
            _v10312 = 0;
            _v10316 = 0;
            _t166 =  &_v4128;
            _v10360 =  &_v10316;
            _v10364 =  &_v10312;
            _v10368 =  &_v10308;
            _v10372 =  &_v10272;
            _v10376 = "%s\t%i.%i.%i";
             *__esp = _t166;
            __isoc99_sscanf();
            _v10276 = _t166;
            if(_v10276 <= 0) {
                continue;
            }
            if(strcmp( &_v10272, "GRASS") != 0) {
                if(_v10280 == 0) {
                    continue;
                }
                goto L16;
            }
            _v10364 =  &_v10304;
            _v10368 =  &_v10300;
            _v10372 =  &_v10296;
            _v10376 = "%i.%i.%i";
             *__esp = _v10328;
            __isoc99_sscanf();
            if(vercmp(_v10296, _v10300, _v10304, _v10308, _v10312, _v10316) < 0) {
                _v10360 = _v10316;
                _v10364 = _v10312;
                _v10368 = _v10308;
                _v10372 = _v10328;
                print_error(-18, "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n");
            }
            _v10284 = 1;
            continue;
L16:
            _v10284 = 0;
            rewind(_v10292);
            while(nc_fgets_nb( &_v6176, 2048, _v10292) != 0) {
                _v10296 = 0;
                _v10300 = 0;
                _v10304 = 0;
                _t174 =  &_v6176;
                _v10360 =  &_v10304;
                _v10364 =  &_v10300;
                _v10368 =  &_v10296;
                _v10372 =  &_v8224;
                _v10376 = "%s\t%i.%i.%i";
                 *__esp = _t174;
                __isoc99_sscanf();
                _v10276 = _t174;
                if(_v10276 > 0 && strcmp( &_v8224,  &_v10272) == 0) {
                    if(vercmp(_v10296, _v10300, _v10304, _v10308, _v10312, _v10316) < 0) {
                        _v10348 = _v10316;
                        _v10352 = _v10312;
                        _v10356 = _v10308;
                        _v10360 =  &_v10272;
                        _v10364 = _v10304;
                        _v10368 = _v10300;
                        _v10372 = _v10296;
                        print_error(-18, "installed version %i.%i.%i of required extension '%s' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n");
                    }
                    _v10284 = 1;
                }
            }
        }
    }
    _t251 =  *(__errno_location()) - 2;
    if(_t251 != 0) {
        fclose(_v10288);
        _v10368 = strerror( *(__errno_location()));
        _v10372 =  &_v2080;
        print_error(-17, "checking for file '%s': %s\n");
        goto L5;
    } else {
        _v10372 = _v10320;
        fprintf(__imp__stderr, "\n%s/depends ENOENT\n");
    }
L30:
    _t191 = _v32 ^  *gs:0x14];
    if(_t251 == 0) {
        return _t191;
    }
    __stack_chk_fail();
    return _t191;
}

int is_submenu(char* item)
{// addr = 0x0804BE84
    _unknown_ _v24;
    _unknown_ __ebp;
    char* _t14;
    _unknown_ _t17;
    _unknown_ _t18;
    _unknown_ _t19;
    _unknown_ _t20;

    if(strchr(item, 91) == 0) {
        return 0;
    }
    if(strrchr(item, 93) == 0) {
        return 0;
    }
    _t14 = strchr(item, 91);
    if(_t14 <= strrchr(item, 93)) {
        return 1;
    }
    return 0;
}

int check_ext_menu(char** tcl_lines)
{// addr = 0x0804BF05
    int idx;
    int _v16;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t46;
    _unknown_ _t49;
    _unknown_ _t54;
    _unknown_ _t57;

    _v16 = find_pos(""&Xtns" all options 1", tcl_lines, 0);
    if(_v16 != 255) {
        return _v16;
    }
    _v16 = find_pos(""&Help" all options", tcl_lines, 0);
    if(_v16 != 255) {
        insert_str(" "&Xtns" all options 1 {\n", _v16, tcl_lines);
        _v16 = _v16 + 1;
        insert_str(" }\n", _v16, tcl_lines);
        return _v16;
    } else {
        _v16 = find_pos("}]", tcl_lines, 0);
        if(_v16 == 255) {
            print_error(-21, "could not parse 'menu.tcl'.\n");
        }
        insert_str(" "&Xtns" all options 1 {\n", _v16, tcl_lines);
        _v16 = _v16 + 1;
        insert_str(" }\n", _v16, tcl_lines);
        return _v16;
    }
    return _v16;
}

int new_submenu(char* pkg_short_name, char* menu, char** tcl_lines)
{// addr = 0x0804C009
    char[2047] tmp;
    char[2047] tmp2;
    char[2047] searchstr;
    int idx;
    int idx2;
    int insert_here;
    int last;
    char* first_quote;
    char* second_quote;
    int len;
    int terminator;
    intOrPtr _v16;
    char _v2064;
    char _v4112;
    char _v6160;
    int _v6164;
    int _v6168;
    int _v6172;
    int _v6176;
    char* _v6180;
    char* _v6184;
    int _v6188;
    int _v6192;
    char* _v6208;
    char* _v6212;
    char** _v6216;
    char* _v6224;
    char* _v6228;
    char* _v6232;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t128;
    char* _t139;
    _unknown_ _t147;
    _unknown_ _t152;
    _unknown_ _t164;
    _unknown_ _t168;
    _unknown_ _t171;
    _unknown_ _t176;
    _unknown_ _t180;
    int _t182;
    _unknown_ _t196;
    _unknown_ _t223;
    int _t228;

    _v6208 = pkg_short_name;
    _v6212 = menu;
    _v6216 = tcl_lines;
    _v16 =  *gs:0x14];
    _v6164 = find_pos(""&Xtns" all options", _v6216, 0);
    _v6176 = find_pos("" all options", _v6216, _v6164 + 1) - 1;
    if(_v6176 == 255) {
        _v6176 = find_pos("}]", _v6216, 0);
    }
    _t228 = is_submenu(_v6212);
    if(_t228 != 0) {
        _t139 = strrchr(_v6212, 93);
        _v6188 = _t139 - strchr(_v6212, 91);
        strncpy( &_v2064,  &((strchr(_v6212, 91))[1]), _v6188);
         *(__ebp + _v6188 - 1 + -2060) = 0;
        _v6228 =  &_v2064;
        sprintf( &_v6160, "{cascad "%s"");
        _v6168 = find_pos( &_v6160, _v6216, _v6164);
        if(_v6168 == 255 || _v6168 >= _v6176) {
            _v6172 = _v6164 + 1;
            _v6168 = find_pos("{cascad ", _v6216, _v6164);
L11:
            while(_v6168 != 255 && _v6168 < _v6176) {
                goto L8;
            }
        } else {
            _v6232 =  &_v2064;
            print_warning("submenu '%s' exists in GIS Manager's Xtns menu.\n");
            _t182 = -1;
L14:
            if(_t228 == 0) {
                return _t182;
            }
            __stack_chk_fail();
            return _t182;
        }
L8:
        _v6180 = strchr(_v6216[_v6168], 34);
        _v6184 = strchr( &(_v6180[1]), 34);
        _v6188 = _v6184 - _v6180;
        strncpy( &_v4112,  &(_v6180[1]), _v6188);
         *(__ebp + _v6188 - 1 + -4108) = 0;
        if(strcmp( &_v2064,  &_v4112) >= 0) {
            _v6164 = _v6164 + 1;
            _v6168 = find_pos("{cascad ", _v6216, _v6164);
            goto L11;
        }
        _v6172 = _v6168;
        _v6228 =  &_v6160;
        sprintf( &_v2064, " \t\t\t%s {} "" 1 {\n");
        insert_str( &_v2064, _v6172, _v6216);
        insert_str(" \t\t\t}}\n", _v6172 + 1, _v6216);
        _v6192 = find_pos("}]", _v6216, 0);
        _v6224 =  &_v6160;
        _v6228 = _v6208;
        sprintf( &_v2064, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> %s {} "" 1 {\n");
        insert_str( &_v2064, _v6192 + 1, _v6216);
        _t182 = _v6172 + 1;
        goto L14;
    }
    print_warning("first line not a submenu specifier in 'entries-gisman'.\n");
    _t182 = -1;
    goto L14;
}

int new_item(char* item, char* menu, char** tcl_lines, int line_no)
{// addr = 0x0804C41B
    char* token;
    int num_tokens;
    char[2047] entry;
    char[2047] command;
    char[2047] tmp;
    intOrPtr _v16;
    char _v2064;
    char _v4112;
    void _v6160;
    char* _v6164;
    char* _v6168;
    char* _v6176;
    char* _v6180;
    char** _v6184;
    char* _v6204;
    char* _v6208;
    char* _v6212;
    char* _v6216;
    _unknown_ __ebp;
    _unknown_ _t57;
    _unknown_ _t59;
    _unknown_ _t65;
    int _t69;
    _unknown_ _t72;
    _unknown_ _t76;
    int _t77;
    int _t79;
    _unknown_ _t82;
    _unknown_ _t86;
    _unknown_ _t91;

    _v6176 = item;
    _v6180 = menu;
    _v6184 = tcl_lines;
    _v16 =  *gs:0x14];
    chop(_v6176);
    _v6164 = strtok(_v6176, ";");
    __eflags = _v6164;
    if(__eflags != 0) {
        strcpy( &_v2064, _v6164);
        _v6168 = 0;
        while(1) {
L6:
            __eflags = _v6164;
            if(_v6164 == 0) {
                break;
            }
            goto L3;
        }
        __eflags = _v6168 - 2;
        if(__eflags <= 0) {
            _t69 = strcmp( &_v2064, "-");
            __eflags = _t69;
            if(_t69 != 0) {
L12:
                _v6204 =  &_v4112;
                _v6208 =  &_v4112;
                _v6212 =  &_v2064;
                sprintf( &_v6160, " \t\t\t {command "%s" {} "%s" {} -command {%s }}\n");
                goto L13;
            }
            goto L10;
L13:
            insert_str( &_v6160, line_no, _v6184);
            line_no = line_no + 1;
            _t77 = line_no;
            goto L14;
        }
        _v6216 = _v6168;
        print_warning("invalid number of tokens (%i) in 'entries-gisman'.\n");
        _t77 = -1;
        goto L14;
L10:
        _t79 = strcmp( &_v2064, "-");
        __eflags = _t79;
        if(_t79 != 0) {
            goto L12;
        }
        memcpy( &_v6160, " \t\t\t {separator}\n", 18);
        goto L13;
    }
    print_warning("invalid token in 'entries-gisman'.\n");
    _t77 = -1;
L14:
    if(__eflags == 0) {
        return _t77;
    }
    __stack_chk_fail();
    return _t77;
L3:
    _v6164 = strtok(0, ";");
    __eflags = _v6164;
    if(_v6164 != 0) {
        strcpy( &_v4112, _v6164);
    }
    _v6168 =  &(_v6168[1]);
    goto L6;
}

register_entries_gisman(char* pkg_short_name, char* gisbase)
{// addr = 0x0804C5F0
    char[2047] file;
    char[2047] str;
    char[2047] menu;
    int len;
    char** line;
    int n_entries;
    int n_lines;
    int i;
    int n_lines_org;
    int n_lines_new;
    int line_no;
    FILE* f_gisman;
    FILE* f_in;
    FILE* f_out;
    signed int _v16;
    char _v2064;
    char _v4112;
    _unknown_ _v6160;
    _unknown_ _v6164;
    _unknown_ _v6168;
    intOrPtr _v6172;
    _unknown_ _v6176;
    _unknown_ _v6180;
    _unknown_ _v6184;
    _unknown_ _v6188;
    _unknown_ _v6192;
    struct _IO_FILE* _v6196;
    struct _IO_FILE* _v6200;
    struct _IO_FILE* _v6204;
    char* _v6208;
    char* _v6212;
    char[2047]* _v6228;
    char* _v6232;
    char[2047]* _v6236;
    char* _v6240;
    char[2047]* _v6244;
    char[2047]* _v6248;
    char* _v6252;
    char* _v6256;
    char[2047]* _v6260;
    char* _v6264;
    char* _v6268;
    char* _v6272;
    char* _v6276;
    _unknown_ _v6280;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t206;
    _unknown_ _t209;
    _unknown_ _t214;
    _unknown_ _t218;
    _unknown_ _t219;
    _unknown_ _t225;
    _unknown_ _t227;
    signed int _t232;
    _unknown_ _t234;
    _unknown_ _t240;
    _unknown_ _t266;
    _unknown_ _t268;
    _unknown_ _t286;
    _unknown_ _t288;
    _unknown_ _t290;
    _unknown_ _t294;
    _unknown_ _t295;
    _unknown_ _t297;
    _unknown_ _t299;
    _unknown_ _t301;
    _unknown_ _t310;
    _unknown_ _t312;
    _unknown_ _t315;
    _unknown_ _t323;
    _unknown_ _t332;
    _unknown_ _t339;
    _unknown_ _t347;
    _unknown_ _t394;

    _v6208 = pkg_short_name;
    _v6212 = gisbase;
    _v16 =  *gs:0x14];
    memcpy( &_v2064, "../entries-gisman", 18);
    _v6196 = fopen( &_v2064, "r");
    if(_v6196 != 0) {
L3:
        _v6276 = _v6212;
        sprintf( &_v2064, "%s/etc/dm/menu.tcl");
        _v6200 = fopen( &_v2064, "r");
        if(_v6200 != 0) {
L6:
            memcpy( &TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
            mkstemp( &TMP_GISMAN);
            _v6204 = fopen( &TMP_GISMAN, "w+");
            if(_v6204 == 0) {
                _v6272 = strerror( *(__errno_location()));
                _v6276 =  &TMP_GISMAN;
                print_error(-21, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            }
            L08054750(exit_db);
            if(VERBOSE == 0) {
                _v6228 =  &TMP_NULL;
                _v6232 = _v6212;
                _v6236 =  &TMP_NULL;
                _v6240 = _v6212;
                _v6244 =  &TMP_GISMAN;
                _v6248 =  &TMP_NULL;
                _v6252 = _v6212;
                _v6256 = _v6212;
                _v6260 =  &TMP_NULL;
                _v6264 = _v6208;
                _v6268 = _v6212;
                _v6272 =  &TMP_NULL;
                _v6276 = _v6212;
                sprintf( &_v4112, "mkdir %s/etc/dm/gem-entries &> %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;");
            } else {
                _v6248 = _v6212;
                _v6252 = _v6212;
                _v6256 =  &TMP_GISMAN;
                _v6260 = _v6212;
                _v6264 = _v6212;
                _v6268 = _v6208;
                _v6272 = _v6212;
                _v6276 = _v6212;
                sprintf( &_v4112, "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;");
            }
            strcpy( &GISMAN_CMD,  &_v4112);
            _v6172 = 0;
            while(fgets( &_v4112, 2048, _v6196) != 0) {
                _v6172 = _v6172 + 1;
            }
        }
        goto L4;
    }
    if( *(__errno_location()) == 2) {
L51:
        _t232 = _v16 ^  *gs:0x14];
        if(_t394 == 0) {
            return _t232;
        }
        __stack_chk_fail();
        return _t232;
    }
    fclose(_v6196);
    _v6272 = strerror( *(__errno_location()));
    _v6276 =  &_v2064;
    print_error(-21, "checking for file '%s': %s\n");
    goto L3;
L48:
    goto L51;
L4:
    if( *(__errno_location()) == 2) {
        goto L48;
    }
    fclose(_v6200);
    _v6272 = strerror( *(__errno_location()));
    _v6276 =  &_v2064;
    print_error(-21, "checking for file '%s': %s\n");
    goto L6;
    goto L51;
}

register_entries_gisman2(char* pkg_short_name, char* gisbase)
{// addr = 0x0804CD6C
    char[2047] file;
    FILE* f_gisman2;
    char[2047] str;
    signed int _v16;
    char _v2064;
    char _v4112;
    struct _IO_FILE* _v4116;
    char* _v4128;
    char* _v4132;
    char* _v4156;
    char* _v4160;
    char* _v4164;
    _unknown_ _v4168;
    _unknown_ __ebp;
    _unknown_ _t40;
    _unknown_ _t43;
    _unknown_ _t49;
    _unknown_ _t51;
    signed int _t53;
    _unknown_ _t56;
    _unknown_ _t60;
    int _t74;

    _v4128 = pkg_short_name;
    _v4132 = gisbase;
    _v16 =  *gs:0x14];
    memcpy( &_v2064, "../entries-gisman2", 19);
    _v4116 = fopen( &_v2064, "r");
    if(_v4116 != 0) {
L3:
        _t74 = VERBOSE;
        if(_t74 == 0) {
            _v4156 = _v4128;
            _v4160 = _v4132;
            _v4164 = _v4132;
            sprintf( &_v4112, "mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ");
        } else {
            _v4156 = _v4128;
            _v4160 = _v4132;
            _v4164 = _v4132;
            sprintf( &_v4112, "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ");
        }
        strcpy( &GISMAN2_CMD,  &_v4112);
L8:
        _t53 = _v16 ^  *gs:0x14];
        if(_t74 == 0) {
            return _t53;
        }
        __stack_chk_fail();
        return _t53;
    }
    if( *(__errno_location()) == 2) {
        goto L8;
    }
    fclose(_v4116);
    _v4160 = strerror( *(__errno_location()));
    _v4164 =  &_v2064;
    print_error(-32, "checking for file '%s': %s\n");
    goto L3;
}

int deregister_entries_gisman(char* pkg_short_name, char* gisbase)
{// addr = 0x0804CEC7
    char[2047] file;
    char[2047] str;
    char[2047] tmp;
    char** line;
    int n_lines;
    int i;
    int n_lines_org;
    int n_lines_new;
    FILE* f_in;
    FILE* f_out;
    int pos;
    int start;
    int end;
    int start_sub;
    int end_sub;
    char* lq;
    char* rq;
    int num_removed;
    intOrPtr _v16;
    char _v2064;
    char _v4112;
    _unknown_ _v6160;
    _unknown_ _v6164;
    int _v6168;
    _unknown_ _v6172;
    _unknown_ _v6176;
    _unknown_ _v6180;
    struct _IO_FILE* _v6184;
    struct _IO_FILE* _v6188;
    _unknown_ _v6192;
    _unknown_ _v6196;
    _unknown_ _v6200;
    _unknown_ _v6204;
    _unknown_ _v6208;
    _unknown_ _v6212;
    _unknown_ _v6216;
    _unknown_ _v6220;
    char* _v6224;
    char[2047]* _v6228;
    char[2047]* _v6248;
    char* _v6252;
    char[2047]* _v6256;
    char[2047]* _v6260;
    char[2047]* _v6264;
    char[2047]* _v6268;
    char[2047]* _v6272;
    char* _v6276;
    _unknown_ _v6280;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t239;
    _unknown_ _t242;
    _unknown_ _t246;
    _unknown_ _t247;
    _unknown_ _t253;
    _unknown_ _t255;
    _unknown_ _t260;
    _unknown_ _t283;
    _unknown_ _t286;
    _unknown_ _t299;
    _unknown_ _t311;
    int _t317;
    _unknown_ _t329;
    _unknown_ _t332;
    _unknown_ _t338;
    _unknown_ _t357;
    _unknown_ _t359;
    _unknown_ _t361;
    _unknown_ _t366;
    _unknown_ _t368;
    _unknown_ _t375;
    _unknown_ _t377;
    _unknown_ _t378;
    _unknown_ _t379;
    _unknown_ _t385;
    _unknown_ _t390;
    _unknown_ _t397;
    _unknown_ _t424;
    _unknown_ _t434;

    _v6224 = pkg_short_name;
    _v6228 = gisbase;
    _v16 =  *gs:0x14];
    _v6276 = _v6228;
    sprintf( &_v2064, "%s/etc/dm/menu.tcl");
    _v6184 = fopen( &_v2064, "r");
    if(_v6184 != 0) {
L4:
        memcpy( &TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
        mkstemp( &TMP_GISMAN);
        _v6188 = fopen( &TMP_GISMAN, "w+");
        if(_v6188 == 0) {
            _v6272 = strerror( *(__errno_location()));
            _v6276 =  &TMP_GISMAN;
            print_error(-21, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        L08054750(exit_db);
        if(VERBOSE == 0) {
            _v6248 =  &TMP_NULL;
            _v6252 = _v6228;
            _v6256 =  &TMP_NULL;
            _v6260 = _v6228;
            _v6264 =  &TMP_GISMAN;
            _v6268 =  &TMP_NULL;
            _v6272 = _v6228;
            _v6276 = _v6228;
            sprintf( &_v4112, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;");
        } else {
            _v6260 = _v6228;
            _v6264 = _v6228;
            _v6268 =  &TMP_GISMAN;
            _v6272 = _v6228;
            _v6276 = _v6228;
            sprintf( &_v4112, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;");
        }
        strcpy( &GISMAN_CMD,  &_v4112);
        _v6168 = 0;
        while(fgets( &_v4112, 2048, _v6184) != 0) {
            _v6168 = _v6168 + 1;
        }
    }
    _t434 =  *(__errno_location()) - 2;
    if(_t434 != 0) {
        fclose(_v6184);
        _v6272 = strerror( *(__errno_location()));
        _v6276 =  &_v2064;
        print_error(-22, "checking for file '%s': %s\n");
        goto L4;
    } else {
        _t317 = 0;
    }
    if(_t434 == 0) {
        return _t317;
    }
    __stack_chk_fail();
    return _t317;
}

deregister_entries_gisman2(char* pkg_short_name, char* gisbase)
{// addr = 0x0804D743
    char[2047] file;
    FILE* f_gisman2;
    char[2047] str;
    signed int _v16;
    char _v2064;
    char _v4112;
    struct _IO_FILE* _v4116;
    char* _v4128;
    char* _v4132;
    char* _v4144;
    char* _v4148;
    _unknown_ _v4152;
    _unknown_ __ebp;
    _unknown_ _t39;
    _unknown_ _t42;
    _unknown_ _t48;
    _unknown_ _t50;
    signed int _t52;
    _unknown_ _t55;
    _unknown_ _t59;
    int _t73;

    _v4128 = pkg_short_name;
    _v4132 = gisbase;
    _v16 =  *gs:0x14];
    _v4144 = _v4128;
    _v4148 = _v4132;
    sprintf( &_v2064, "%s/etc/gm/Xtns/%s.gem");
    _v4116 = fopen( &_v2064, "r");
    if(_v4116 != 0) {
L3:
        _t73 = VERBOSE;
        if(_t73 == 0) {
            _v4144 = _v4128;
            _v4148 = _v4132;
            sprintf( &_v4112, "rm -f %s/etc/gm/Xtns/%s.gem ; ");
        } else {
            _v4144 = _v4128;
            _v4148 = _v4132;
            sprintf( &_v4112, "rm -vf %s/etc/gm/Xtns/%s.gem ; ");
        }
        strcpy( &GISMAN_CMD,  &_v4112);
L8:
        _t52 = _v16 ^  *gs:0x14];
        if(_t73 == 0) {
            return _t52;
        }
        __stack_chk_fail();
        return _t52;
    }
    if( *(__errno_location()) == 2) {
        goto L8;
    }
    fclose(_v4116);
    _v4144 = strerror( *(__errno_location()));
    _v4148 =  &_v2064;
    print_error(-33, "checking for file '%s': %s\n");
    goto L3;
}

int restore_entries_gisman(char* gisbase)
{// addr = 0x0804D896
    char[2047] str;
    char[2047] menu;
    char[2047] file;
    char[2047] dir;
    char[2047] pkg_short_name;
    int len;
    char** line;
    int n_entries;
    int n_lines;
    int i;
    int line_no;
    FILE* f_gisman;
    FILE* f_in;
    FILE* f_out;
    DIR* dirp;
    struct dirent* ep;
    int num_restored;
    int n_files;
    intOrPtr _v16;
    char _v2064;
    _unknown_ _v4112;
    char _v6160;
    char _v8208;
    _unknown_ _v10256;
    _unknown_ _v10260;
    _unknown_ _v10264;
    int _v10268;
    int _v10272;
    _unknown_ _v10276;
    _unknown_ _v10280;
    struct _IO_FILE* _v10284;
    struct _IO_FILE* _v10288;
    struct _IO_FILE* _v10292;
    char* _v10296;
    char* _v10300;
    _unknown_ _v10304;
    int _v10308;
    char* _v10320;
    char[2047]* _v10344;
    char* _v10348;
    char[2047]* _v10352;
    char* _v10356;
    char[2047]* _v10360;
    char[2047]* _v10364;
    char* _v10368;
    char* _v10372;
    _unknown_ _v10376;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t230;
    _unknown_ _t233;
    _unknown_ _t237;
    _unknown_ _t238;
    _unknown_ _t244;
    _unknown_ _t246;
    _unknown_ _t249;
    char* _t250;
    char* _t251;
    _unknown_ _t255;
    _unknown_ _t262;
    _unknown_ _t267;
    _unknown_ _t273;
    _unknown_ _t305;
    _unknown_ _t310;
    _unknown_ _t311;
    _unknown_ _t312;
    _unknown_ _t316;
    _unknown_ _t334;
    _unknown_ _t342;
    _unknown_ _t350;
    _unknown_ _t361;
    _unknown_ _t363;
    _unknown_ _t365;
    _unknown_ _t367;
    _unknown_ _t379;
    _unknown_ _t381;
    int _t382;
    _unknown_ _t385;
    _unknown_ _t392;
    _unknown_ _t422;
    _unknown_ _t431;

    _v10320 = gisbase;
    _v16 =  *gs:0x14];
    _v10372 = _v10320;
    sprintf( &_v6160, "%s/etc/dm/menu.tcl");
    _v10288 = fopen( &_v6160, "r");
    if(_v10288 != 0) {
L4:
        memcpy( &TMP_GISMAN, "/tmp/grass.extensions.db.XXXXXX", 32);
        mkstemp( &TMP_GISMAN);
        _v10292 = fopen( &TMP_GISMAN, "w+");
        if(_v10292 == 0) {
            _v10368 = strerror( *(__errno_location()));
            _v10372 =  &TMP_GISMAN;
            print_error(-21, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        L08054750(exit_db);
        if(VERBOSE == 0) {
            _v10344 =  &TMP_NULL;
            _v10348 = _v10320;
            _v10352 =  &TMP_NULL;
            _v10356 = _v10320;
            _v10360 =  &TMP_GISMAN;
            _v10364 =  &TMP_NULL;
            _v10368 = _v10320;
            _v10372 = _v10320;
            sprintf( &_v2064, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;");
        } else {
            _v10356 = _v10320;
            _v10360 = _v10320;
            _v10364 =  &TMP_GISMAN;
            _v10368 = _v10320;
            _v10372 = _v10320;
            sprintf( &_v2064, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;");
        }
        strcpy( &GISMAN_CMD,  &_v2064);
        _v10372 = _v10320;
        sprintf( &_v8208, "%s/etc/dm/gem-entries");
        _t250 =  &_v8208;
         *__esp = _t250;
        opendir();
        _v10296 = _t250;
        if(_v10296 != 0) {
            _v10268 = 0;
            _v10308 = 0;
            while(1) {
L21:
                _t251 = _v10296;
                 *__esp = _t251;
                readdir();
                _v10300 = _t251;
                if(_v10300 == 0) {
                    break;
                }
                goto L12;
            }
             *__esp = _v10296;
            closedir();
            _v10272 = 0;
            while(fgets( &_v2064, 2048, _v10288) != 0) {
                _v10272 = _v10272 + 1;
            }
        } else {
            _t382 = 0;
L59:
            if(_t431 == 0) {
                return _t382;
            }
            __stack_chk_fail();
            return _t382;
        }
L12:
        _v10368 =  &(_v10300[0xb]);
        _v10372 =  &_v8208;
        sprintf( &_v6160, "%s/%s");
        _v10284 = fopen( &_v6160, "r");
        if(strcmp( &(_v10300[0xb]), ".") == 0 || strcmp( &(_v10300[0xb]), "..") == 0) {
            fclose(_v10284);
            goto L21;
        }
        if(_v10284 != 0) {
            while(1) {
                fgets( &_v2064, 2048, _v10284);
                if( &_v2064 == 0) {
                    break;
                }
                _v10268 = _v10268 + 1;
            }
            _v10308 = _v10308 + 1;
            fclose(_v10284);
            goto L21;
        }
        fclose(_v10284);
        goto L21;
    }
    _t431 =  *(__errno_location()) - 2;
    if(_t431 != 0) {
        fclose(_v10288);
        _v10368 = strerror( *(__errno_location()));
        _v10372 =  &_v6160;
        print_error(-21, "checking for file '%s': %s\n");
        goto L4;
    }
    _t382 = 0;
    goto L59;
}

new_ext_html(char* ext, char* gisbase, char** html, int major, int minor, int revision)
{// addr = 0x0804E100
    int pos1;
    int pos2;
    int pos3;
    int start;
    int end;
    int insert_here;
    char* first_char;
    char* last_char;
    char[2047] item;
    int len;
    signed int _v16;
    char _v2064;
    int _v2068;
    int _v2072;
    int _v2076;
    int _v2080;
    int _v2084;
    int _v2088;
    char* _v2092;
    char* _v2096;
    int _v2100;
    char* _v2112;
    char* _v2116;
    char** _v2120;
    int _v2132;
    int _v2136;
    int _v2140;
    char* _v2144;
    char* _v2148;
    char* _v2152;
    _unknown_ __ebp;
    _unknown_ _t148;
    _unknown_ _t167;
    _unknown_ _t177;
    _unknown_ _t181;
    signed int _t183;
    _unknown_ _t199;
    _unknown_ _t214;
    _unknown_ _t219;
    _unknown_ _t222;
    _unknown_ _t225;
    _unknown_ _t228;
    _unknown_ _t231;
    int _t255;

    _v2112 = ext;
    _v2116 = gisbase;
    _v2120 = html;
    _v16 =  *gs:0x14];
    _v2068 = find_pos("<b>Drivers sections:</b>", _v2120, 0);
    if(_v2068 >= 0) {
L3:
        _v2072 = find_pos("<hr>", _v2120, _v2068);
        if(find_pos("<h3>Installed extensions:</h3>", _v2120, _v2068) == 255) {
            insert_str("<h3>Installed extensions:</h3>\n", _v2072, _v2120);
            insert_str("<ul>\n", _v2072 + 1, _v2120);
            insert_str("</ul>\n", _v2072 + 2, _v2120);
            insert_str("<p>\n", _v2072 + 3, _v2120);
        }
        _v2080 = find_pos("<h3>Installed extensions:</h3>", _v2120, _v2068);
        _v2084 = find_pos("</ul>", _v2120, _v2080);
        _v2088 = _v2080 + 2;
        _v2148 = _v2112;
        sprintf( &_v2064, "">%s");
        _v2076 = find_pos( &_v2064, _v2120, _v2088);
        if(_v2076 == 255) {
            _v2076 = find_pos("<li><a href=", _v2120, _v2080);
            while(_v2076 != 255 && _v2076 < _v2084) {
                _v2092 = strrchr(_v2120[_v2076], 34);
                _v2096 = strrchr(_v2120[_v2076], 60);
                _v2100 = _v2096 - _v2092;
                strncpy( &_v2064,  &(_v2092[2]), _v2100);
                 *(__ebp + _v2100 - 1 + -2060) = 0;
                if(strcmp(_v2112,  &_v2064) >= 0) {
                    _v2080 = _v2080 + 1;
                    _v2076 = find_pos("<li><a href=", _v2120, _v2080);
                    continue;
                }
                _v2088 = _v2076;
                _v2132 = revision;
                _v2136 = minor;
                _v2140 = major;
                _v2144 = _v2112;
                _v2148 = _v2112;
                sprintf( &_v2064, "<li><a href="../extensions/%s/index.html">%s (%i.%i.%i)</a>\n");
                insert_str( &_v2064, _v2088, _v2120);
                goto L18;
            }
        } else {
            _v2152 = _v2112;
            print_warning("list item '%s' exists in index.html.\n");
            if(FORCE != 0) {
                if(UPGRADE != 0) {
                    _v2132 = revision;
                    _v2136 = minor;
                    _v2140 = major;
                    _v2144 = _v2112;
                    _v2148 = _v2112;
                    sprintf( &_v2064, "<li><a href="../extensions/%s/index.html">%s (%i.%i.%i)</a>\n");
                    strcpy(_v2120[_v2076],  &_v2064);
                }
            }
        }
        goto L18;
    }
    _v2068 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", _v2120, 0);
    _t255 = _v2068;
    if(_t255 >= 0) {
        goto L3;
    } else {
        print_warning("Unknown format of index.html. Unable to register HTML man pages.\n");
    }
L18:
    _t183 = _v16 ^  *gs:0x14];
    if(_t255 == 0) {
        return _t183;
    }
    __stack_chk_fail();
    return _t183;
}

delete_ext_html(char* ext, char* gisbase, char** html)
{// addr = 0x0804E56F
    int pos1;
    int pos2;
    int pos3;
    int start;
    int end;
    char[2047] item;
    int found;
    int i;
    signed int _v16;
    char _v2064;
    int _v2068;
    int _v2072;
    int _v2076;
    int _v2080;
    int _v2084;
    int _v2088;
    int _v2092;
    char* _v2096;
    char* _v2100;
    char** _v2104;
    char* _v2116;
    char* _v2120;
    _unknown_ __ebp;
    _unknown_ _t81;
    _unknown_ _t98;
    signed int _t108;
    _unknown_ _t114;
    _unknown_ _t117;
    int _t127;

    _v2096 = ext;
    _v2100 = gisbase;
    _v2104 = html;
    _v16 =  *gs:0x14];
    _v2068 = find_pos("<b>Drivers sections:</b>", _v2104, 0);
    if(_v2068 >= 0) {
L3:
        _v2072 = find_pos("<hr>", _v2104, _v2068);
        if(find_pos("<h3>Installed extensions:</h3>", _v2104, _v2068) != 255) {
            _v2080 = find_pos("<h3>Installed extensions:</h3>", _v2104, _v2068);
            _v2084 = find_pos("</ul>", _v2104, _v2080);
            _v2088 = 0;
            _v2116 = _v2096;
            sprintf( &_v2064, "">%s");
            _v2076 = find_pos( &_v2064, _v2104, _v2080);
            if(_v2076 != 255) {
                if(_v2076 < _v2084) {
                    delete_str(_v2076, _v2104);
                }
                _v2084 = _v2084 - 1;
                _v2076 = find_pos("<ul>", _v2104, _v2080);
                if(_v2076 == 255 || _v2084 <= _v2076 || _v2084 - _v2076 > 1) {
                    goto L15;
                }
                _v2092 = 0;
                while(_v2092 <= 3) {
                    delete_str(_v2076 - 1, _v2104);
                    _v2092 = _v2092 + 1;
                }
            }
            goto L6;
        }
        goto L4;
L6:
        _v2120 = _v2096;
        print_warning("extension '%s' not listed in index.html.\n");
        goto L15;
    }
    _v2068 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", _v2104, 0);
    _t127 = _v2068;
    if(_t127 >= 0) {
        goto L3;
    } else {
        print_warning("Unknown format of index.html. Unable to de-register HTML man pages.\n");
    }
L15:
    _t108 = _v16 ^  *gs:0x14];
    if(_t127 == 0) {
        return _t108;
    }
    __stack_chk_fail();
    return _t108;
L4:
    print_warning("no extensions section found in index.html.\n");
    goto L15;
}

register_html(char* pkg_short_name, char* gisbase, int major, int minor, int revision)
{// addr = 0x0804E7F3
    char[2047] file;
    char[2047] str;
    char** line;
    int n_lines;
    int i;
    FILE* f_in;
    FILE* f_out;
    signed int _v16;
    char _v2064;
    char _v4112;
    _unknown_ _v4116;
    intOrPtr _v4120;
    _unknown_ _v4124;
    struct _IO_FILE* _v4128;
    struct _IO_FILE* _v4132;
    char* _v4144;
    char[2047]* _v4148;
    char[2047]* _v4164;
    char* _v4168;
    char[2047]* _v4172;
    char* _v4176;
    char[2047]* _v4180;
    _unknown_ _v4184;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t113;
    _unknown_ _t116;
    _unknown_ _t120;
    _unknown_ _t121;
    _unknown_ _t127;
    _unknown_ _t129;
    _unknown_ _t134;
    _unknown_ _t156;
    _unknown_ _t172;
    _unknown_ _t174;
    _unknown_ _t176;
    _unknown_ _t178;
    _unknown_ _t185;
    _unknown_ _t187;
    signed int _t189;
    _unknown_ _t192;
    _unknown_ _t199;
    _unknown_ _t223;

    _v4144 = pkg_short_name;
    _v4148 = gisbase;
    _v16 =  *gs:0x14];
    _v4180 = _v4148;
    sprintf( &_v2064, "%s/docs/html/index.html");
    _v4128 = fopen( &_v2064, "r");
    if(_v4128 != 0) {
L3:
        memcpy( &TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        mkstemp( &TMP_HTML);
        _v4132 = fopen( &TMP_HTML, "w+");
        if(_v4132 == 0) {
            _v4176 = strerror( *(__errno_location()));
            _v4180 =  &TMP_HTML;
            print_error(-24, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        L08054750(exit_db);
        if(VERBOSE == 0) {
            _v4164 =  &TMP_NULL;
            _v4168 = _v4148;
            _v4172 =  &TMP_NULL;
            _v4176 = _v4148;
            _v4180 =  &TMP_HTML;
            sprintf( &_v4112, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;");
        } else {
            _v4172 = _v4148;
            _v4176 = _v4148;
            _v4180 =  &TMP_HTML;
            sprintf( &_v4112, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;");
        }
        strcpy( &HTML_CMD,  &_v4112);
        _v4120 = 0;
        while(fgets( &_v4112, 2048, _v4128) != 0) {
            _v4120 = _v4120 + 1;
        }
    }
    if( *(__errno_location()) == 2) {
L27:
        _t189 = _v16 ^  *gs:0x14];
        if(_t223 == 0) {
            return _t189;
        }
        __stack_chk_fail();
        return _t189;
    }
    fclose(_v4128);
    _v4176 = strerror( *(__errno_location()));
    _v4180 =  &_v2064;
    print_error(-24, "checking for file '%s': %s\n");
    goto L3;
    goto L27;
}

deregister_html(char* pkg_short_name, char* gisbase)
{// addr = 0x0804EC17
    char[2047] file;
    char[2047] str;
    char** line;
    int n_lines;
    int i;
    FILE* f_in;
    FILE* f_out;
    signed int _v16;
    char _v2064;
    char _v4112;
    _unknown_ _v4116;
    intOrPtr _v4120;
    _unknown_ _v4124;
    struct _IO_FILE* _v4128;
    struct _IO_FILE* _v4132;
    char* _v4144;
    char[2047]* _v4148;
    char[2047]* _v4164;
    char* _v4168;
    char[2047]* _v4172;
    char* _v4176;
    char[2047]* _v4180;
    _unknown_ _v4184;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t107;
    _unknown_ _t110;
    _unknown_ _t114;
    _unknown_ _t115;
    _unknown_ _t121;
    _unknown_ _t123;
    _unknown_ _t128;
    _unknown_ _t150;
    _unknown_ _t163;
    _unknown_ _t165;
    _unknown_ _t167;
    _unknown_ _t169;
    _unknown_ _t176;
    _unknown_ _t178;
    signed int _t180;
    _unknown_ _t183;
    _unknown_ _t190;
    _unknown_ _t214;

    _v4144 = pkg_short_name;
    _v4148 = gisbase;
    _v16 =  *gs:0x14];
    _v4180 = _v4148;
    sprintf( &_v2064, "%s/docs/html/index.html");
    _v4128 = fopen( &_v2064, "r");
    if(_v4128 != 0) {
L3:
        memcpy( &TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        mkstemp( &TMP_HTML);
        _v4132 = fopen( &TMP_HTML, "w+");
        if(_v4132 == 0) {
            _v4176 = strerror( *(__errno_location()));
            _v4180 =  &TMP_HTML;
            print_error(-24, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        L08054750(exit_db);
        if(VERBOSE == 0) {
            _v4164 =  &TMP_NULL;
            _v4168 = _v4148;
            _v4172 =  &TMP_NULL;
            _v4176 = _v4148;
            _v4180 =  &TMP_HTML;
            sprintf( &_v4112, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;");
        } else {
            _v4172 = _v4148;
            _v4176 = _v4148;
            _v4180 =  &TMP_HTML;
            sprintf( &_v4112, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;");
        }
        strcpy( &HTML_CMD,  &_v4112);
        _v4120 = 0;
        while(fgets( &_v4112, 2048, _v4128) != 0) {
            _v4120 = _v4120 + 1;
        }
    }
    if( *(__errno_location()) == 2) {
L27:
        _t180 = _v16 ^  *gs:0x14];
        if(_t214 == 0) {
            return _t180;
        }
        __stack_chk_fail();
        return _t180;
    }
    fclose(_v4128);
    _v4176 = strerror( *(__errno_location()));
    _v4180 =  &_v2064;
    print_error(-24, "checking for file '%s': %s\n");
    goto L3;
    goto L27;
}

int restore_html(char* gisbase)
{// addr = 0x0804F026
    char[2047] str;
    char[2047] idx;
    char[2047] ext_idx;
    char[2047] dir;
    char[2047] subdir;
    char** line;
    int n_entries;
    int n_lines;
    int i;
    FILE* f_in;
    FILE* f_out;
    FILE* f_ext;
    DIR* dirp;
    DIR* subdirp;
    struct dirent* ep;
    int num_restored;
    int n_subdirs;
    int major;
    int minor;
    int revision;
    intOrPtr _v16;
    char _v2064;
    char _v4112;
    _unknown_ _v6160;
    char _v8208;
    char _v10256;
    _unknown_ _v10260;
    int _v10264;
    int _v10268;
    _unknown_ _v10272;
    struct _IO_FILE* _v10276;
    struct _IO_FILE* _v10280;
    _unknown_ _v10284;
    char* _v10288;
    char* _v10292;
    char* _v10296;
    _unknown_ _v10300;
    int _v10304;
    _unknown_ _v10308;
    _unknown_ _v10312;
    _unknown_ _v10316;
    char* _v10320;
    char[2047]* _v10340;
    char* _v10344;
    char[2047]* _v10348;
    char* _v10352;
    char* _v10356;
    _unknown_ _v10360;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t204;
    _unknown_ _t207;
    _unknown_ _t211;
    _unknown_ _t212;
    _unknown_ _t218;
    _unknown_ _t220;
    _unknown_ _t223;
    char* _t224;
    char* _t225;
    _unknown_ _t229;
    char* _t236;
    _unknown_ _t243;
    _unknown_ _t267;
    _unknown_ _t271;
    _unknown_ _t272;
    _unknown_ _t276;
    _unknown_ _t283;
    _unknown_ _t287;
    _unknown_ _t296;
    _unknown_ _t304;
    _unknown_ _t315;
    _unknown_ _t317;
    _unknown_ _t319;
    _unknown_ _t321;
    _unknown_ _t329;
    _unknown_ _t331;
    int _t332;
    _unknown_ _t335;
    _unknown_ _t342;
    _unknown_ _t367;
    _unknown_ _t375;

    _v10320 = gisbase;
    _v16 =  *gs:0x14];
    _v10356 = _v10320;
    sprintf( &_v4112, "%s/docs/html/index.html");
    _v10276 = fopen( &_v4112, "r");
    if(_v10276 != 0) {
L4:
        memcpy( &TMP_HTML, "/tmp/grass.extensions.db.XXXXXX", 32);
        mkstemp( &TMP_HTML);
        _v10280 = fopen( &TMP_HTML, "w+");
        if(_v10280 == 0) {
            _v10352 = strerror( *(__errno_location()));
            _v10356 =  &TMP_HTML;
            print_error(-24, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
        if(VERBOSE == 0) {
            _v10340 =  &TMP_NULL;
            _v10344 = _v10320;
            _v10348 =  &TMP_NULL;
            _v10352 = _v10320;
            _v10356 =  &TMP_HTML;
            sprintf( &_v2064, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;");
        } else {
            _v10348 = _v10320;
            _v10352 = _v10320;
            _v10356 =  &TMP_HTML;
            sprintf( &_v2064, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;");
        }
        strcpy( &HTML_CMD,  &_v2064);
        L08054750(exit_db);
        _v10356 = _v10320;
        sprintf( &_v8208, "%s/docs/extensions");
        _t224 =  &_v8208;
         *__esp = _t224;
        opendir();
        _v10288 = _t224;
        if(_v10288 != 0) {
            _v10264 = 0;
            _v10304 = 0;
            while(1) {
L19:
                _t225 = _v10288;
                 *__esp = _t225;
                readdir();
                _v10296 = _t225;
                if(_v10296 == 0) {
                    break;
                }
                goto L12;
            }
             *__esp = _v10288;
            closedir();
            _v10268 = 0;
            while(fgets( &_v2064, 2048, _v10276) != 0) {
                _v10268 = _v10268 + 1;
            }
        } else {
            _t332 = 0;
            goto L55;
        }
L12:
        _v10352 =  &(_v10296[0xb]);
        _v10356 =  &_v8208;
        sprintf( &_v10256, "%s/%s");
        if(strcmp( &(_v10296[0xb]), ".") != 0) {
            if(strcmp( &(_v10296[0xb]), "..") != 0) {
                _t236 =  &_v10256;
                 *__esp = _t236;
                opendir();
                _v10292 = _t236;
                if(_v10292 != 0) {
                    _v10304 = _v10304 + 1;
                     *__esp = _v10292;
                    closedir();
                }
            }
        }
        goto L19;
    }
    _t375 =  *(__errno_location()) - 2;
    if(_t375 != 0) {
        fclose(_v10276);
        _v10352 = strerror( *(__errno_location()));
        _v10356 =  &_v4112;
        print_error(-24, "checking for file '%s': %s\n");
        goto L4;
    } else {
        _t332 = 0;
    }
L55:
    if(_t375 == 0) {
        return _t332;
    }
    __stack_chk_fail();
    return _t332;
}

check_extension(char* package, char* name, int* major, int* minor, int* revision)
{// addr = 0x0804F7E8
    int error;
    char[2047] tmp;
    FILE* f;
    signed int _v16;
    char _v2060;
    char _v2064;
    int _v2068;
    struct _IO_FILE* _v2072;
    char* _v2080;
    char* _v2084;
    int* _v2088;
    int* _v2092;
    int* _v2096;
    int* _v2124;
    char* _v2128;
    char* _v2132;
    char* _v2136;
    _unknown_ __edi;
    _unknown_ __ebp;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t77;
    _unknown_ _t80;
    _unknown_ _t90;
    _unknown_ _t96;
    int _t99;
    _unknown_ _t100;
    _unknown_ _t102;
    signed int _t104;
    _unknown_ _t106;
    _unknown_ _t108;
    _unknown_ _t113;
    _unknown_ _t114;
    _unknown_ _t118;
    _unknown_ _t125;
    struct _IO_FILE* _t128;

    _v2080 = package;
    _v2084 = name;
    _v2088 = major;
    _v2092 = minor;
    _v2096 = revision;
    _v16 =  *gs:0x14];
    _v2064 = 0;
    _push(511 << 2);
    _push(0);
    _push( &_v2060);
    memset();
    __esp =  &((__esp)[3]);
    fwrite("Checking extension ...", 1, 22, __imp__stdout);
    strcpy( &_v2064, _v2080);
    _v2068 = chdir( &_v2064);
    if(_v2068 < 0) {
        _v2128 = strerror( *(__errno_location()));
        _v2132 = _v2080;
        print_error(-2, "extension '%s' not accessible: %s\n");
    }
    _v2072 = fopen("id", "r");
    if(_v2072 != 0) {
        _v2132 =  &_v2064;
        _v2136 = "%[<GRASS extension package>] ";
         *__esp = _v2072;
        __isoc99_fscanf();
        if(strcmp("<GRASS extension package>",  &_v2064) != 0) {
            fclose(_v2072);
            print_error(-6, "unknown file identifier.\n");
        }
    } else {
        print_error(-6, "'id' file not readable.\n");
    }
    fclose(_v2072);
    get_package_name(".", _v2084);
    _v2072 = fopen("version", "r");
    _t128 = _v2072;
    if(_t128 != 0) {
        nc_fgets_nb( &_v2064, 2048, _v2072);
         *_v2092 = 0;
         *_v2096 = 0;
        _t99 =  &_v2064;
        _v2124 = _v2096;
        _v2128 = _v2092;
        _v2132 = _v2088;
        _v2136 = "%i.%i.%i";
         *__esp = _t99;
        __isoc99_sscanf();
        _v2068 = _t99;
        if(_v2068 <= 0) {
            fclose(_v2072);
            print_error(-6, "invalid or missing version information.\n");
        }
    } else {
        print_error(-6, "'version' file not readable.\n");
    }
    print_done();
    chdir("..");
    fclose(_v2072);
    _t104 = _v16 ^  *gs:0x14];
    if(_t128 == 0) {
        return _t104;
    }
    __stack_chk_fail();
    return _t104;
}

unpack_extension(char* package)
{// addr = 0x0804FAAB
    int error;
    int fd;
    char[2047] tmp;
    int ftype;
    signed int _v16;
    char _v2064;
    int _v2068;
    int _v2072;
    int _v2076;
    char* _v2080;
    char[2047]* _v2108;
    char* _v2112;
    char[2047]* _v2116;
    intOrPtr _v2120;
    _unknown_ __ebp;
    _unknown_ _t102;
    _unknown_ _t105;
    _unknown_ _t107;
    _unknown_ _t108;
    _unknown_ _t112;
    _unknown_ _t113;
    _unknown_ _t116;
    signed int _t124;
    _unknown_ _t125;
    char* _t131;
    _unknown_ _t133;
    char* _t135;
    _unknown_ _t137;
    char* _t140;
    _unknown_ _t142;
    char* _t144;
    _unknown_ _t146;
    char* _t149;
    _unknown_ _t151;
    char* _t153;
    _unknown_ _t155;
    char* _t158;
    _unknown_ _t160;
    char* _t162;
    _unknown_ _t164;
    _unknown_ _t165;
    _unknown_ _t167;
    _unknown_ _t171;
    _unknown_ _t198;

    _v2080 = package;
    _v16 =  *gs:0x14];
    fwrite("Uncompressing files...", 1, 22, __imp__stdout);
    memcpy( &TMPDIR, "/tmp/grass.extension.XXXXXX", 28);
    mkstemp( &TMPDIR);
    _v2116 = 511;
    _v2120 = 64;
     *__esp =  &TMPDIR;
    _v2072 = open();
    if(_v2072 == 255) {
        _v2116 = strerror( *(__errno_location()));
        print_error(-7, "could not create temp directory name: %s");
        exit(-7);
    }
    if(VERBOSE != 0) {
        _v2116 =  &TMPDIR;
        fprintf(__imp__stdout, "\nUncompressing to: %s.\n");
    }
    close(_v2072);
    remove( &TMPDIR);
    mkdir_s( &TMPDIR, "0700");
    L08054750(exit_tmp);
    _v2112 =  &TMPDIR;
    _v2116 = _v2080;
    sprintf( &_v2064, "cp %s %s");
    _v2068 = system( &_v2064);
    if(_v2068 < 0) {
        print_error(-7, "could not copy extension files to temp dir.\n");
        exit(-7);
    }
    _v2076 = check_filetype(_v2080);
    if(_v2076 == 0) {
        print_warning("file name not '.tar.gz', '.tgz', '.tar.bz2', '.tbz' or '.zip'. Assuming '.tgz'.\n");
        _v2076 = 1;
    }
    if(_v2076 == 1) {
        if(VERBOSE == 0) {
            _t158 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t158;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "tar -xzf %s/%s -C %s");
        } else {
            _t162 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t162;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "tar -xzvf %s/%s -C %s");
        }
    }
    if(_v2076 == 2) {
        if(VERBOSE == 0) {
            _t149 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t149;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "tar -xjvf %s/%s -C %s");
        } else {
            _t153 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t153;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "tar -xjvf %s/%s -C %s");
        }
    }
    if(_v2076 == 3) {
        if(VERBOSE == 0) {
            _t140 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t140;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "unzip -qq %s/%s -d %s");
        } else {
            _t144 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t144;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "unzip %s/%s -d %s");
        }
    }
    if(_v2076 == 4) {
        if(VERBOSE == 0) {
            _t131 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t131;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "tar -xf %s/%s -C %s");
        } else {
            _t135 = basename(_v2080);
            _v2108 =  &TMPDIR;
            _v2112 = _t135;
            _v2116 =  &TMPDIR;
            sprintf( &_v2064, "tar -xvf %s/%s -C %s");
        }
    }
    _v2068 = system( &_v2064);
    if(_v2068 < 0) {
        if(_v2076 == 1) {
            _v2116 = _v2080;
            print_error(-7, "could not extract files using 'tar' and 'gzip'. \n \t\t\t\t\tExtract manually using 'tar -xzvf %s'.\n");
        }
        if(_v2076 == 2) {
            _v2116 = _v2080;
            print_error(-7, "could not extract files using 'tar' and 'bunzip2'.\n \t\t\t\tExtract manually using 'tar -xjvf %s'.\n");
        }
        _t198 = _v2076 - 3;
        if(_t198 == 0) {
            _v2116 = _v2080;
            print_error(-7, "could not extract files using 'unzip'.\n \t\t\t\tExtract manually using 'unzip %s'.\n");
        }
        exit(-7);
    }
    print_done();
    _t124 = _v16 ^  *gs:0x14];
    if(_t198 == 0) {
        return _t124;
    }
    __stack_chk_fail();
    return _t124;
}

query_extension(char* package, char* name, int major, int minor, int revision, char* short_name, char* invocation, char* org_name)
{// addr = 0x0804FF43
    int error;
    char[2047] tmp;
    signed int _v16;
    signed int _v20;
    char _v2064;
    char _v2068;
    struct _IO_FILE* _v2072;
    char* _v2080;
    char* _v2084;
    char* _v2088;
    char* _v2092;
    char* _v2096;
    int _v2120;
    int _v2124;
    int _v2128;
    char* _v2132;
    _unknown_ _v2136;
    signed int _v2156;
    struct _IO_FILE* _v4208;
    _unknown_ _v4220;
    _unknown_ _v4224;
    _unknown_ _v4228;
    _unknown_ __ebp;
    _unknown_ _t74;
    _unknown_ _t78;
    _unknown_ _t82;
    _unknown_ _t85;
    _unknown_ _t88;
    _unknown_ _t90;
    _unknown_ _t91;
    _unknown_ _t92;
    _unknown_ _t94;
    _unknown_ _t97;
    signed int _t99;
    _unknown_ _t102;
    _unknown_ _t108;
    _unknown_ _t110;
    _unknown_ _t129;
    _unknown_ _t130;
    char* _t133;

    _v2080 = package;
    _v2084 = name;
    _v2088 = short_name;
    _v2092 = invocation;
    _v2096 = org_name;
    _v16 =  *gs:0x14];
    strcpy( &_v2064, basename(_v2080));
    _v2068 = chdir( &_v2064);
    if(_v2068 < 0) {
        _v2128 = strerror( *(__errno_location()));
        _v2132 = _v2080;
        print_error(-2, "extension '%s' not accessible: %s\n");
    }
    _v2120 = revision;
    _v2124 = minor;
    _v2128 = major;
    _v2132 = _v2084;
    fprintf(__imp__stdout, "\nExtension '%s', version %i.%i.%i\n\n");
    dump_ascii("description", "Description");
    dump_ascii("commands", "Commands provided");
    dump_ascii("libs", "Libraries provided");
    dump_ascii("headers", "Header files provided");
    dump_ascii("depends", "Dependencies");
    dump_ascii("bugs", "Bugs");
    _v2132 = _v2080;
    sprintf( &_v2064, "../%s");
    list_binaries( &_v2064);
    dump_ascii("authors", "Author(s)");
    _v2128 = _v2096;
    _v2132 = _v2092;
    fprintf(__imp__stdout, "Type '%s -d %s' to see more detailed information.\n");
    _v2128 = _v2096;
    _v2132 = _v2092;
    fprintf(__imp__stdout, "Type '%s -l %s' to see copyright information.\n");
    system("sh post");
    exit(0);
    _push(_t129);
    __esp = __esp - 2088;
    _v2156 =  *gs:0x14];
    _v4208 = fopen("config.msg", "r");
    if(_v4208 == 0) {
L8:
        remove("config.msg");
        _t99 = _v20 ^  *gs:0x14];
        if(_t133 == 0) {
            return _t99;
        }
    } else {
        fwrite("\nResult of configuration: \n", 1, 27, __imp__stdout);
        while(1) {
            _t133 = fgets( &_v2068, 2048, _v2072);
            if(_t133 == 0) {
                break;
            }
            fputs( &_v2068, __imp__stdout);
        }
        fputc(10, __imp__stdout);
        goto L8;
    }
    __stack_chk_fail();
    return _t99;
}

print_cfg()
{// addr = 0x0805014E
    FILE* fp;
    char[2047] line;
    signed int _v16;
    char _v2064;
    struct _IO_FILE* _v2068;
    _unknown_ _v2080;
    _unknown_ _v2084;
    _unknown_ _v2088;
    _unknown_ __ebp;
    _unknown_ _t17;
    _unknown_ _t20;
    signed int _t22;
    _unknown_ _t25;
    _unknown_ _t31;
    _unknown_ _t33;
    char* _t37;

    _v16 =  *gs:0x14];
    _v2068 = fopen("config.msg", "r");
    if(_v2068 == 0) {
L5:
        remove("config.msg");
        _t22 = _v16 ^  *gs:0x14];
        if(_t37 == 0) {
            return _t22;
        }
        __stack_chk_fail();
        return _t22;
    }
    fwrite("\nResult of configuration: \n", 1, 27, __imp__stdout);
    while(1) {
        _t37 = fgets( &_v2064, 2048, _v2068);
        if(_t37 == 0) {
            break;
        }
        fputs( &_v2064, __imp__stdout);
    }
    fputc(10, __imp__stdout);
    goto L5;
}

source_install(char* package, char* gisbase, char* pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision, char* grass_version)
{// addr = 0x08050220
    char[2047] tmp;
    char[2047] dir;
    char[2047] install_cmd;
    char[2047] post_cmd;
    char[2047] sysstr;
    int error;
    struct stat buf;
    FILE* f;
    char* verstr;
    char* grass_major;
    char* grass_minor;
    char* grass_revision;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char _v4112;
    char _v6160;
    char _v8208;
    char _v10256;
    int _v10260;
    struct _IO_FILE* _v10264;
    char* _v10268;
    char* _v10272;
    char* _v10276;
    char* _v10280;
    long _v10284;
    long _v10288;
    long _v10292;
    char _v10380;
    char* _v10384;
    char* _v10388;
    char* _v10392;
    char* _v10396;
    char[2047]* _v10412;
    char* _v10416;
    char[2047]* _v10420;
    char[2047]* _v10424;
    char[2047]* _v10428;
    char[2047]* _v10432;
    char[2047]* _v10436;
    char* _v10440;
    _unknown_ __ebp;
    _unknown_ _t251;
    int _t252;
    _unknown_ _t254;
    _unknown_ _t255;
    _unknown_ _t258;
    _unknown_ _t260;
    _unknown_ _t261;
    _unknown_ _t264;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t269;
    _unknown_ _t270;
    _unknown_ _t287;
    _unknown_ _t291;
    _unknown_ _t296;
    _unknown_ _t297;
    _unknown_ _t300;
    _unknown_ _t302;
    _unknown_ _t303;
    _unknown_ _t305;
    _unknown_ _t306;
    _unknown_ _t308;
    _unknown_ _t309;
    _unknown_ _t311;
    _unknown_ _t312;
    _unknown_ _t314;
    _unknown_ _t315;
    _unknown_ _t317;
    _unknown_ _t318;
    _unknown_ _t325;
    _unknown_ _t328;
    _unknown_ _t333;
    _unknown_ _t339;
    _unknown_ _t341;
    _unknown_ _t343;
    _unknown_ _t362;
    _unknown_ _t366;
    _unknown_ _t369;
    signed int _t373;
    _unknown_ _t376;
    _unknown_ _t378;
    _unknown_ _t381;
    _unknown_ _t386;
    _unknown_ _t388;
    _unknown_ _t394;
    _unknown_ _t397;
    _unknown_ _t403;
    _unknown_ _t406;
    _unknown_ _t411;
    _unknown_ _t414;
    int _t468;

    _v10384 = package;
    _v10388 = gisbase;
    _v10392 = pkg_short_name;
    _v10396 = grass_version;
    _v16 =  *gs:0x14];
    _t252 = _v10388;
    L08054790(_t252,  &_v10380);
    _v10260 = _t252;
    if(_v10260 < 0) {
        _v10436 = strerror( *(__errno_location()));
        print_error(-5, "installation directory invalid: %s\n");
    }
    _v10436 = _v10388;
    sprintf( &GINSTALL_DST, "GINSTALL_DST=%s");
    putenv( &GINSTALL_DST);
    _v10436 = _v10388;
    sprintf( &_v2064, "%s/include");
    _v10436 =  &_v2064;
    sprintf( &GINSTALL_INC, "GINSTALL_INC=%s");
    putenv( &GINSTALL_INC);
    _v10436 = _v10388;
    sprintf( &_v2064, "%s/lib");
    _v10436 =  &_v2064;
    sprintf( &GINSTALL_LIB, "GINSTALL_LIB=%s");
    putenv( &GINSTALL_LIB);
    _v10436 = _v10388;
    sprintf( &GEM_GRASS_DIR, "GEM_GRASS_DIR=%s");
    putenv( &GEM_GRASS_DIR);
    _v10268 = strdup(_v10396);
    _v10272 = strtok(_v10268, ".");
    _v10276 = strtok(0, ".");
    _v10280 = strtok(0, ".");
    _v10284 = strtol(_v10272, 0, 10);
    _v10288 = strtol(_v10276, 0, 10);
    _v10292 = strtol(_v10280, 0, 10);
    free(_v10268);
    L08054750(exit_tmp);
    _v10436 = basename(_v10384);
    sprintf( &_v4112, "%s/src");
    _v10260 = chdir( &_v4112);
    if(_v10260 < 0) {
        _v10432 = strerror( *(__errno_location()));
        _v10436 = _v10384;
        print_error(-2, "extension files in '%s' not accessible: %s\n");
    }
    if(SKIP_CFG == 0) {
        if(VERBOSE == 0) {
            fwrite("Configuring...", 1, 14, __imp__stdout);
            _v10428 =  &TMP_NULL;
            _v10432 =  &CONFIG_OPTS;
            _v10436 =  &CONFIG_CMD;
            sprintf( &_v10256, "sh %s %s --quiet &> %s");
            _v10260 = system( &_v10256);
        } else {
            fwrite("Running configure script:\n", 1, 26, __imp__stdout);
            _v10432 =  &CONFIG_OPTS;
            _v10436 =  &CONFIG_CMD;
            sprintf( &_v10256, "sh %s %s");
            _v10260 = system( &_v10256);
        }
        if(_v10260 == 255) {
            print_error(-27, "could not run configure script.\n");
        }
        if(_v10260 > 0) {
            print_error(-3, "system configuration failed.\n");
        }
        print_done();
        print_cfg();
    }
    _v10436 = _v10392;
    sprintf( &GEM_EXT_NAME, "GEM_EXT_NAME=%s");
    putenv( &GEM_EXT_NAME);
    _v10428 = pkg_revision;
    _v10432 = pkg_minor;
    _v10436 = pkg_major;
    sprintf( &_v2064, "%i.%i.%i");
    _v10436 =  &_v2064;
    sprintf( &GEM_EXT_VERSION, "GEM_EXT_VERSION=%s");
    putenv( &GEM_EXT_VERSION);
    dump_html("../description",  &TMP_DESCR);
    dump_html("../info",  &TMP_INFO);
    dump_html("../depends",  &TMP_DEPS);
    dump_html("../bugs",  &TMP_BUGS);
    dump_html("../authors",  &TMP_AUTHORS);
    _v10436 =  &TMP_DESCR;
    sprintf( &GEM_EXT_DESCR, "GEM_EXT_DESCR=%s");
    putenv( &GEM_EXT_DESCR);
    _v10436 =  &TMP_INFO;
    sprintf( &GEM_EXT_INFO, "GEM_EXT_INFO=%s");
    putenv( &GEM_EXT_INFO);
    _v10436 =  &TMP_DEPS;
    sprintf( &GEM_EXT_DEPS, "GEM_EXT_DEPS=%s");
    putenv( &GEM_EXT_DEPS);
    _v10436 =  &TMP_BUGS;
    sprintf( &GEM_EXT_BUGS, "GEM_EXT_BUGS=%s");
    putenv( &GEM_EXT_BUGS);
    _v10436 =  &TMP_AUTHORS;
    sprintf( &GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s");
    putenv( &GEM_EXT_AUTHORS);
    L08054750(exit_tmp);
    check_dependencies(_v10384, _v10388, _v10396);
    if(VERBOSE == 0) {
        fwrite("Compiling...", 1, 12, __imp__stdout);
        _v10432 =  &TMP_NULL;
        _v10436 =  &MAKE_CMD;
        sprintf( &_v10256, "%s -f Makefile &> %s");
        _v10260 = system( &_v10256);
    } else {
        _v10436 =  &MAKE_CMD;
        fprintf(__imp__stdout, "Running '%s':\n");
        _v10436 =  &MAKE_CMD;
        sprintf( &_v10256, "%s -f Makefile");
        _v10260 = system( &_v10256);
    }
    if(_v10260 == 255 && VERBOSE == 0) {
        _v10436 =  &MAKE_CMD;
        print_error(-9, "could not run '%s' do you have make tools installed?\n");
    }
    if(_v10260 > 0) {
        print_error(-4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done();
    fwrite("Installing...", 1, 13, __imp__stdout);
    _v10264 = fopen("../uninstall", "r");
    if(_v10264 != 0) {
        if(VERBOSE == 0) {
            _v10428 =  &TMP_NULL;
            _v10432 = _v10392;
            _v10436 = _v10388;
            sprintf( &_v2064, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;");
            strcpy( &UNINSTALL_CMD,  &_v2064);
        } else {
            _v10432 = _v10392;
            _v10436 = _v10388;
            sprintf( &_v2064, "cp -vf ../uninstall %s/etc/uninstall.%s ;");
            strcpy( &UNINSTALL_CMD,  &_v2064);
        }
        fclose(_v10264);
    } else {
        _v10440 = strerror( *(__errno_location()));
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    register_extension(_v10388, "src", _v10392, pkg_major, pkg_minor, pkg_revision);
    check_dependencies(_v10384, _v10388, _v10396);
    if(_v10284 == 6 && _v10288 <= 0) {
        register_entries_gisman(_v10392, _v10388);
    }
    register_entries_gisman2(_v10392, _v10388);
    register_html(_v10392, _v10388, pkg_major, pkg_minor, pkg_revision);
    if(VERBOSE == 0) {
        _v10412 =  &TMP_NULL;
        _v10416 = _v10388;
        _v10420 =  &TMP_NULL;
        _v10424 = _v10388;
        _v10428 =  &TMPDB;
        _v10432 =  &TMP_NULL;
        _v10436 =  &MAKE_CMD;
        sprintf( &_v6160, "%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;");
    } else {
        _v10436 =  &MAKE_CMD;
        fprintf(__imp__stdout, "Running '%s install':\n");
        _v10424 = _v10388;
        _v10428 = _v10388;
        _v10432 =  &TMPDB;
        _v10436 =  &MAKE_CMD;
        sprintf( &_v6160, "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;");
    }
    _t468 = VERBOSE;
    if(_t468 == 0) {
        _v10436 =  &TMP_NULL;
        sprintf( &_v8208, "sh ../post &> %s");
    } else {
        memcpy( &_v8208, "sh ../post", 11);
    }
    _v10416 =  &_v8208;
    _v10420 =  &HTML_CMD;
    _v10424 =  &GISMAN2_CMD;
    _v10428 =  &GISMAN_CMD;
    _v10432 =  &UNINSTALL_CMD;
    _v10436 =  &_v6160;
    sprintf( &_v2064, "%s %s %s %s %s %s");
    su(_v10388,  &_v2064);
    print_done();
    _t373 = _v16 ^  *gs:0x14];
    if(_t468 == 0) {
        return _t373;
    }
    __stack_chk_fail();
    return _t373;
}

bin_install(char* package, char* gisbase, char* bins, char* pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision, char* grass_version)
{// addr = 0x08050C67
    char[2047] tmp;
    char[2047] dir;
    char[2047] install_cmd;
    char[2047] post_cmd;
    int error;
    struct stat buf;
    FILE* f;
    char* verstr;
    char* grass_major;
    char* grass_minor;
    char* grass_revision;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char _v4112;
    char _v6160;
    char _v8208;
    int _v8212;
    struct _IO_FILE* _v8216;
    char* _v8220;
    char* _v8224;
    char* _v8228;
    char* _v8232;
    long _v8236;
    long _v8240;
    long _v8244;
    char _v8332;
    char* _v8336;
    char* _v8340;
    char[2047]* _v8344;
    char* _v8348;
    char* _v8352;
    char[2047]* _v8380;
    char* _v8384;
    char[2047]* _v8388;
    char[2047]* _v8392;
    char[2047]* _v8396;
    char[2047]* _v8400;
    char[2047]* _v8404;
    char* _v8408;
    _unknown_ __ebp;
    _unknown_ _t213;
    int _t214;
    _unknown_ _t216;
    _unknown_ _t217;
    _unknown_ _t220;
    _unknown_ _t222;
    _unknown_ _t223;
    _unknown_ _t226;
    _unknown_ _t228;
    _unknown_ _t229;
    _unknown_ _t231;
    _unknown_ _t232;
    _unknown_ _t249;
    char* _t251;
    _unknown_ _t253;
    _unknown_ _t257;
    _unknown_ _t258;
    _unknown_ _t261;
    _unknown_ _t263;
    _unknown_ _t264;
    _unknown_ _t266;
    _unknown_ _t267;
    _unknown_ _t269;
    _unknown_ _t270;
    _unknown_ _t272;
    _unknown_ _t273;
    _unknown_ _t275;
    _unknown_ _t276;
    _unknown_ _t278;
    _unknown_ _t279;
    _unknown_ _t285;
    _unknown_ _t291;
    _unknown_ _t293;
    _unknown_ _t295;
    _unknown_ _t315;
    _unknown_ _t319;
    _unknown_ _t322;
    signed int _t326;
    _unknown_ _t329;
    _unknown_ _t331;
    _unknown_ _t334;
    _unknown_ _t339;
    _unknown_ _t341;
    int _t384;

    _v8336 = package;
    _v8340 = gisbase;
    _v8344 = bins;
    _v8348 = pkg_short_name;
    _v8352 = grass_version;
    _v16 =  *gs:0x14];
    _t214 = _v8340;
    L08054790(_t214,  &_v8332);
    _v8212 = _t214;
    if(_v8212 < 0) {
        _v8404 = strerror( *(__errno_location()));
        print_error(-5, "installation directory invalid: %s\n");
    }
    _v8404 = _v8340;
    sprintf( &GINSTALL_DST, "GINSTALL_DST=%s");
    putenv( &GINSTALL_DST);
    _v8404 = _v8340;
    sprintf( &_v2064, "%s/include");
    _v8404 =  &_v2064;
    sprintf( &GINSTALL_INC, "GINSTALL_INC=%s");
    putenv( &GINSTALL_INC);
    _v8404 = _v8340;
    sprintf( &_v2064, "%s/lib");
    _v8404 =  &_v2064;
    sprintf( &GINSTALL_LIB, "GINSTALL_LIB=%s");
    putenv( &GINSTALL_LIB);
    _v8404 = _v8340;
    sprintf( &GEM_GRASS_DIR, "GEM_GRASS_DIR=%s");
    putenv( &GEM_GRASS_DIR);
    _v8220 = strdup(_v8352);
    _v8224 = strtok(_v8220, ".");
    _v8228 = strtok(0, ".");
    _v8232 = strtok(0, ".");
    _v8236 = strtol(_v8224, 0, 10);
    _v8240 = strtol(_v8228, 0, 10);
    _v8244 = strtol(_v8232, 0, 10);
    free(_v8220);
    L08054750(exit_tmp);
    _t251 = basename(_v8336);
    _v8400 = _v8344;
    _v8404 = _t251;
    sprintf( &_v4112, "%s/%s");
    _v8212 = chdir( &_v4112);
    if(_v8212 < 0) {
        _v8400 = strerror( *(__errno_location()));
        _v8404 = _v8336;
        print_error(-2, "extension file binaries in '%s' not accessible: %s\n");
    }
    _v8404 = _v8348;
    sprintf( &GEM_EXT_NAME, "GEM_EXT_NAME=%s");
    putenv( &GEM_EXT_NAME);
    _v8396 = pkg_revision;
    _v8400 = pkg_minor;
    _v8404 = pkg_major;
    sprintf( &_v2064, "%i.%i.%i");
    _v8404 =  &_v2064;
    sprintf( &GEM_EXT_VERSION, "GEM_EXT_VERSION=%s");
    putenv( &GEM_EXT_VERSION);
    dump_html("../description",  &TMP_DESCR);
    dump_html("../info",  &TMP_INFO);
    dump_html("../depends",  &TMP_DEPS);
    dump_html("../bugs",  &TMP_BUGS);
    dump_html("../authors",  &TMP_AUTHORS);
    _v8404 =  &TMP_DESCR;
    sprintf( &GEM_EXT_DESCR, "GEM_EXT_DESCR=%s");
    putenv( &GEM_EXT_DESCR);
    _v8404 =  &TMP_INFO;
    sprintf( &GEM_EXT_INFO, "GEM_EXT_INFO=%s");
    putenv( &GEM_EXT_INFO);
    _v8404 =  &TMP_DEPS;
    sprintf( &GEM_EXT_DEPS, "GEM_EXT_DEPS=%s");
    putenv( &GEM_EXT_DEPS);
    _v8404 =  &TMP_BUGS;
    sprintf( &GEM_EXT_BUGS, "GEM_EXT_BUGS=%s");
    putenv( &GEM_EXT_BUGS);
    _v8404 =  &TMP_AUTHORS;
    sprintf( &GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s");
    putenv( &GEM_EXT_AUTHORS);
    L08054750(exit_tmp);
    check_dependencies(_v8336, _v8340, _v8352);
    fwrite("Installing...", 1, 13, __imp__stdout);
    _v8216 = fopen("../uninstall", "r");
    if(_v8216 != 0) {
        if(VERBOSE == 0) {
            _v8396 =  &TMP_NULL;
            _v8400 = _v8348;
            _v8404 = _v8340;
            sprintf( &_v2064, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;");
            strcpy( &UNINSTALL_CMD,  &_v2064);
        } else {
            _v8400 = _v8348;
            _v8404 = _v8340;
            sprintf( &_v2064, "cp -vf ../uninstall %s/etc/uninstall.%s ;");
            strcpy( &UNINSTALL_CMD,  &_v2064);
        }
        fclose(_v8216);
    } else {
        _v8408 = strerror( *(__errno_location()));
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    register_extension(_v8340, _v8344, _v8348, pkg_major, pkg_minor, pkg_revision);
    check_dependencies(_v8336, _v8340, _v8352);
    if(_v8236 == 6 && _v8240 <= 0) {
        register_entries_gisman(_v8348, _v8340);
    }
    register_entries_gisman2(_v8348, _v8340);
    register_html(_v8348, _v8340, pkg_major, pkg_minor, pkg_revision);
    if(VERBOSE == 0) {
        _v8380 =  &TMP_NULL;
        _v8384 = _v8340;
        _v8388 =  &TMP_NULL;
        _v8392 = _v8340;
        _v8396 =  &TMPDB;
        _v8400 =  &TMP_NULL;
        _v8404 =  &MAKE_CMD;
        sprintf( &_v6160, "bin/%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;");
    } else {
        _v8404 =  &MAKE_CMD;
        fprintf(__imp__stdout, "Running '%s install':\n");
        _v8392 = _v8340;
        _v8396 = _v8340;
        _v8400 =  &TMPDB;
        _v8404 =  &MAKE_CMD;
        sprintf( &_v6160, "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;");
    }
    _t384 = VERBOSE;
    if(_t384 == 0) {
        _v8404 =  &TMP_NULL;
        sprintf( &_v8208, "sh ../post &> %s");
    } else {
        memcpy( &_v8208, "sh ../post", 11);
    }
    _v8384 =  &_v8208;
    _v8388 =  &HTML_CMD;
    _v8392 =  &GISMAN2_CMD;
    _v8396 =  &GISMAN_CMD;
    _v8400 =  &UNINSTALL_CMD;
    _v8404 =  &_v6160;
    sprintf( &_v2064, "%s %s %s %s %s %s");
    su(_v8340,  &_v2064);
    print_done();
    _t326 = _v16 ^  *gs:0x14];
    if(_t384 == 0) {
        return _t326;
    }
    __stack_chk_fail();
    return _t326;
}

test_install(char* package, char* gisbase, char* pkg_short_name, int pkg_major, int pkg_minor, int pkg_revision, char* grass_version)
{// addr = 0x0805148A
    char[2047] tmp;
    char[2047] dir;
    char[2047] sysstr;
    int error;
    struct stat buf;
    FILE* f;
    char* verstr;
    char* grass_major;
    char* grass_minor;
    char* grass_revision;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char _v4112;
    char _v6160;
    int _v6164;
    struct _IO_FILE* _v6168;
    char* _v6172;
    char* _v6176;
    char* _v6180;
    char* _v6184;
    long _v6188;
    long _v6192;
    long _v6196;
    char _v6284;
    char* _v6288;
    char* _v6292;
    char* _v6296;
    char* _v6300;
    _unknown_ _v6312;
    char[2047]* _v6316;
    int _v6320;
    char[2047]* _v6324;
    char* _v6328;
    _unknown_ __ebp;
    _unknown_ _t196;
    int _t197;
    _unknown_ _t199;
    _unknown_ _t200;
    _unknown_ _t203;
    _unknown_ _t205;
    _unknown_ _t206;
    _unknown_ _t209;
    _unknown_ _t211;
    _unknown_ _t212;
    _unknown_ _t214;
    _unknown_ _t215;
    _unknown_ _t232;
    _unknown_ _t236;
    _unknown_ _t241;
    _unknown_ _t242;
    _unknown_ _t245;
    _unknown_ _t247;
    _unknown_ _t248;
    _unknown_ _t250;
    _unknown_ _t251;
    _unknown_ _t253;
    _unknown_ _t254;
    _unknown_ _t256;
    _unknown_ _t257;
    _unknown_ _t259;
    _unknown_ _t260;
    _unknown_ _t262;
    _unknown_ _t263;
    _unknown_ _t270;
    _unknown_ _t273;
    _unknown_ _t278;
    _unknown_ _t282;
    _unknown_ _t299;
    signed int _t301;
    _unknown_ _t309;
    _unknown_ _t312;
    _unknown_ _t318;
    _unknown_ _t321;
    _unknown_ _t326;
    _unknown_ _t329;
    long _t371;

    _v6288 = package;
    _v6292 = gisbase;
    _v6296 = pkg_short_name;
    _v6300 = grass_version;
    _v16 =  *gs:0x14];
    _t197 = _v6292;
    L08054790(_t197,  &_v6284);
    _v6164 = _t197;
    if(_v6164 < 0) {
        _v6324 = strerror( *(__errno_location()));
        print_error(-5, "installation directory invalid: %s\n");
    }
    _v6324 = _v6292;
    sprintf( &GINSTALL_DST, "GINSTALL_DST=%s");
    putenv( &GINSTALL_DST);
    _v6324 = _v6292;
    sprintf( &_v2064, "%s/include");
    _v6324 =  &_v2064;
    sprintf( &GINSTALL_INC, "GINSTALL_INC=%s");
    putenv( &GINSTALL_INC);
    _v6324 = _v6292;
    sprintf( &_v2064, "%s/lib");
    _v6324 =  &_v2064;
    sprintf( &GINSTALL_LIB, "GINSTALL_LIB=%s");
    putenv( &GINSTALL_LIB);
    _v6324 = _v6292;
    sprintf( &GEM_GRASS_DIR, "GEM_GRASS_DIR=%s");
    putenv( &GEM_GRASS_DIR);
    _v6172 = strdup(_v6300);
    _v6176 = strtok(_v6172, ".");
    _v6180 = strtok(0, ".");
    _v6184 = strtok(0, ".");
    _v6188 = strtol(_v6176, 0, 10);
    _v6192 = strtol(_v6180, 0, 10);
    _v6196 = strtol(_v6184, 0, 10);
    free(_v6172);
    L08054750(exit_tmp);
    _v6324 = basename(_v6288);
    sprintf( &_v4112, "%s/src");
    _v6164 = chdir( &_v4112);
    if(_v6164 < 0) {
        _v6320 = strerror( *(__errno_location()));
        _v6324 = _v6288;
        print_error(-2, "extension files in '%s' not accessible: %s\n");
    }
    if(SKIP_CFG == 0) {
        if(VERBOSE == 0) {
            fwrite("Configuring...", 1, 14, __imp__stdout);
            _v6316 =  &TMP_NULL;
            _v6320 =  &CONFIG_OPTS;
            _v6324 =  &CONFIG_CMD;
            sprintf( &_v6160, "sh %s %s --quiet &> %s");
            _v6164 = system( &_v6160);
        } else {
            fwrite("Running configure script:\n", 1, 26, __imp__stdout);
            _v6320 =  &CONFIG_OPTS;
            _v6324 =  &CONFIG_CMD;
            sprintf( &_v6160, "sh %s %s");
            _v6164 = system( &_v6160);
        }
        if(_v6164 == 255) {
            print_error(-27, "could not run configure script.\n");
        }
        if(_v6164 > 0) {
            print_error(-3, "system configuration failed.\n");
        }
        print_done();
        print_cfg();
    }
    _v6324 = _v6296;
    sprintf( &GEM_EXT_NAME, "GEM_EXT_NAME=%s");
    putenv( &GEM_EXT_NAME);
    _v6316 = pkg_revision;
    _v6320 = pkg_minor;
    _v6324 = pkg_major;
    sprintf( &_v2064, "%i.%i.%i");
    _v6324 =  &_v2064;
    sprintf( &GEM_EXT_VERSION, "GEM_EXT_VERSION=%s");
    putenv( &GEM_EXT_VERSION);
    dump_plain("../description",  &TMP_DESCR);
    dump_plain("../info",  &TMP_INFO);
    dump_plain("../depends",  &TMP_DEPS);
    dump_plain("../bugs",  &TMP_BUGS);
    dump_plain("../authors",  &TMP_AUTHORS);
    _v6324 =  &TMP_DESCR;
    sprintf( &GEM_EXT_DESCR, "GEM_EXT_DESCR=%s");
    putenv( &GEM_EXT_DESCR);
    _v6324 =  &TMP_INFO;
    sprintf( &GEM_EXT_INFO, "GEM_EXT_INFO=%s");
    putenv( &GEM_EXT_INFO);
    _v6324 =  &TMP_DEPS;
    sprintf( &GEM_EXT_DEPS, "GEM_EXT_DEPS=%s");
    putenv( &GEM_EXT_DEPS);
    _v6324 =  &TMP_BUGS;
    sprintf( &GEM_EXT_BUGS, "GEM_EXT_BUGS=%s");
    putenv( &GEM_EXT_BUGS);
    _v6324 =  &TMP_AUTHORS;
    sprintf( &GEM_EXT_AUTHORS, "GEM_EXT_AUTHORS=%s");
    putenv( &GEM_EXT_AUTHORS);
    L08054750(exit_tmp);
    check_dependencies(_v6288, _v6292, _v6300);
    if(VERBOSE == 0) {
        fwrite("Compiling...", 1, 12, __imp__stdout);
        _v6320 =  &TMP_NULL;
        _v6324 =  &MAKE_CMD;
        sprintf( &_v6160, "%s -f Makefile &> %s");
        _v6164 = system( &_v6160);
    } else {
        _v6324 =  &MAKE_CMD;
        fprintf(__imp__stdout, "Running '%s':\n");
        _v6324 =  &MAKE_CMD;
        sprintf( &_v6160, "%s -f Makefile");
        _v6164 = system( &_v6160);
    }
    if(_v6164 == 255 && VERBOSE == 0) {
        _v6324 =  &MAKE_CMD;
        print_error(-9, "could not run '%s' do you have make tools installed?\n");
    }
    if(_v6164 > 0) {
        print_error(-4, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done();
    fwrite("Installing...", 1, 13, __imp__stdout);
    _v6168 = fopen("../uninstall", "r");
    if(_v6168 != 0) {
        fclose(_v6168);
    } else {
        _v6328 = strerror( *(__errno_location()));
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    register_extension(_v6292, "src", _v6296, pkg_major, pkg_minor, pkg_revision);
    check_dependencies(_v6288, _v6292, _v6300);
    if(_v6188 == 6) {
        _t371 = _v6192;
        if(_t371 <= 0) {
            register_entries_gisman(_v6296, _v6292);
        }
    }
    register_entries_gisman2(_v6296, _v6292);
    register_html(_v6296, _v6292, pkg_major, pkg_minor, pkg_revision);
    _v6324 =  &MAKE_CMD;
    fprintf(__imp__stdout, "(skipping '%s install')...");
    print_done();
    _t301 = _v16 ^  *gs:0x14];
    if(_t371 == 0) {
        return _t301;
    }
    __stack_chk_fail();
    return _t301;
}

uninstall(char* package, char* pkg_short_name, char* gisbase, char* grass_version)
{// addr = 0x08051CF4
    char[2047] tmp;
    char[2047] script;
    int error;
    struct stat buf;
    int no_script;
    char* verstr;
    char* grass_major;
    char* grass_minor;
    char* grass_revision;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char _v4112;
    char* _v4116;
    int _v4120;
    char* _v4124;
    char* _v4128;
    char* _v4132;
    char* _v4136;
    long _v4140;
    long _v4144;
    long _v4148;
    char _v4236;
    char* _v4240;
    char* _v4244;
    char* _v4248;
    char* _v4252;
    char[2047]* _v4268;
    char* _v4272;
    char[2047]* _v4276;
    char* _v4280;
    char[2047]* _v4284;
    char[2047]* _v4288;
    char* _v4292;
    char* _v4296;
    char[2047]* _v4300;
    char* _v4304;
    char* _v4308;
    char[2047]* _v4312;
    char* _v4316;
    char* _v4320;
    char* _v4324;
    char* _v4328;
    _unknown_ __ebp;
    _unknown_ _t138;
    _unknown_ _t141;
    _unknown_ _t143;
    _unknown_ _t144;
    _unknown_ _t161;
    _unknown_ _t171;
    char* _t172;
    _unknown_ _t176;
    _unknown_ _t178;
    _unknown_ _t181;
    signed int _t185;
    _unknown_ _t188;
    _unknown_ _t190;
    _unknown_ _t197;
    _unknown_ _t198;
    _unknown_ _t199;
    _unknown_ _t200;
    int _t227;

    _v4240 = package;
    _v4244 = pkg_short_name;
    _v4248 = gisbase;
    _v4252 = grass_version;
    _v16 =  *gs:0x14];
    fwrite("Un-installing...", 1, 16, __imp__stdout);
    _v4324 = _v4248;
    sprintf( &UNINSTALL_BASE, "UNINSTALL_BASE=%s");
    putenv( &UNINSTALL_BASE);
    _v4124 = strdup(_v4252);
    _v4128 = strtok(_v4124, ".");
    _v4132 = strtok(0, ".");
    _v4136 = strtok(0, ".");
    _v4140 = strtol(_v4128, 0, 10);
    _v4144 = strtol(_v4132, 0, 10);
    _v4148 = strtol(_v4136, 0, 10);
    free(_v4124);
    L08054750(exit_tmp);
    deregister_extension(_v4240, _v4244, _v4248);
    if(_v4140 == 6 && _v4144 <= 0) {
        if(_v4116 == 0) {
            print_warning("no entries found to remove from GIS Manager.\n");
            memcpy( &GISMAN_CMD, 134572428, 1);
        }
    }
    deregister_entries_gisman2(_v4244, _v4248);
    deregister_html(_v4244, _v4248);
    _v4320 = _v4244;
    _v4324 = _v4248;
    sprintf( &_v4112, "%s/etc/uninstall.%s");
    _v4120 = 0;
    _t172 =  &_v4112;
    L08054790(_t172,  &_v4236);
    _v4116 = _t172;
    if(_v4116 < 0) {
        print_warning("no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n");
        _v4120 = 1;
    }
    _t227 = _v4120;
    if(_t227 == 0) {
        if(VERBOSE == 0) {
            _v4268 =  &TMP_NULL;
            _v4272 = _v4248;
            _v4276 =  &TMP_NULL;
            _v4280 = _v4248;
            _v4284 =  &TMPDB;
            _v4288 =  &TMP_NULL;
            _v4292 = _v4244;
            _v4296 = _v4248;
            _v4300 =  &TMP_NULL;
            _v4304 = _v4244;
            _v4308 = _v4248;
            _v4312 =  &TMP_NULL;
            _v4316 =  &_v4112;
            _v4320 =  &TMP_NULL;
            _v4324 =  &_v4112;
            sprintf( &_v2064, "sh %s &> %s ; rm -vf %s &> %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &> %s ; rm -vf %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &> %s ; chmod -v a+r %s/etc/extensions.db &> %s ;");
            strcpy( &UNINSTALL_CMD,  &_v2064);
        } else {
            _v4292 = _v4248;
            _v4296 = _v4248;
            _v4300 =  &TMPDB;
            _v4304 = _v4244;
            _v4308 = _v4248;
            _v4312 = _v4244;
            _v4316 = _v4248;
            _v4320 =  &_v4112;
            _v4324 =  &_v4112;
            sprintf( &_v2064, "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;");
            strcpy( &UNINSTALL_CMD,  &_v2064);
        }
    } else {
        _v4328 = strerror( *(__errno_location()));
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system");
    }
    _v4316 =  &HTML_CMD;
    _v4320 =  &GISMAN_CMD;
    _v4324 =  &UNINSTALL_CMD;
    sprintf( &_v2064, "%s %s %s");
    su(_v4248,  &_v2064);
    print_done();
    _t185 = _v16 ^  *gs:0x14];
    if(_t227 == 0) {
        return _t185;
    }
    __stack_chk_fail();
    return _t185;
}

int source_clean(char* package)
{// addr = 0x080521A4
    char[2047] dir;
    char[2047] sysstr;
    int error;
    intOrPtr _v16;
    char _v2064;
    char _v4112;
    int _v4116;
    char* _v4128;
    char[2047]* _v4144;
    char[2047]* _v4148;
    _unknown_ _v4152;
    _unknown_ __ebp;
    _unknown_ _t36;
    _unknown_ _t40;
    _unknown_ _t46;
    _unknown_ _t49;
    _unknown_ _t52;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t58;
    _unknown_ _t65;
    _unknown_ _t69;

    _v4128 = package;
    _v16 =  *gs:0x14];
    _v4148 = basename(_v4128);
    sprintf( &_v2064, "%s/src");
    _v4116 = chdir( &_v2064);
    if(_v4116 < 0) {
        _v4148 = _v4128;
        print_error(-2, "extension '%s' not accessible: ");
    }
    if(VERBOSE == 0) {
        fwrite("Cleaning up...", 1, 14, __imp__stdout);
        _v4144 =  &TMP_NULL;
        _v4148 =  &MAKE_CMD;
        sprintf( &_v4112, "%s -f Makefile -s clean &> %s");
        _v4116 = system( &_v4112);
    } else {
        _v4148 =  &MAKE_CMD;
        fprintf(__imp__stdout, "Running '%s clean':\n");
        _v4148 =  &MAKE_CMD;
        sprintf( &_v4112, "%s -f Makefile clean");
        _v4116 = system( &_v4112);
    }
    _t69 = _v4116 - 255;
    if(_t69 != 0) {
        print_done();
    } else {
        _v4148 =  &MAKE_CMD;
        print_error(-9, "could not run '%s clean' do you have make tools installed?\n");
    }
    system("sh ../post");
    if(_t69 == 0) {
        return 0;
    }
    __stack_chk_fail();
    return 0;
}

restore(char* gisbase, char* grass_version)
{// addr = 0x08052334
    int num_restored;
    char[2047] tmp;
    char* verstr;
    char* grass_major;
    char* grass_minor;
    char* grass_revision;
    int major;
    int minor;
    int revision;
    signed int _v16;
    char _v2064;
    char[2047]* _v2068;
    char* _v2072;
    char* _v2076;
    char* _v2080;
    char* _v2084;
    long _v2088;
    long _v2092;
    long _v2096;
    char* _v2112;
    char* _v2116;
    char* _v2140;
    char* _v2144;
    char[2047]* _v2148;
    char[2047]* _v2152;
    char* _v2156;
    char* _v2160;
    char[2047]* _v2164;
    _unknown_ _v2168;
    _unknown_ __ebp;
    _unknown_ _t78;
    _unknown_ _t95;
    _unknown_ _t98;
    signed int _t103;
    _unknown_ _t107;
    _unknown_ _t112;
    _unknown_ _t114;
    _unknown_ _t119;
    int _t139;

    _v2112 = gisbase;
    _v2116 = grass_version;
    _v16 =  *gs:0x14];
    _v2072 = strdup(_v2116);
    _v2076 = strtok(_v2072, ".");
    _v2080 = strtok(0, ".");
    _v2084 = strtok(0, ".");
    _v2088 = strtol(_v2076, 0, 10);
    _v2092 = strtol(_v2080, 0, 10);
    _v2096 = strtol(_v2084, 0, 10);
    free(_v2072);
    fwrite("Restoring...", 1, 12, __imp__stdout);
    if(_v2088 == 6 && _v2092 <= 0) {
        _v2068 = restore_entries_gisman(_v2112);
        if(VERBOSE != 0) {
            _v2164 = _v2068;
            fprintf(__imp__stdout, "\nRestored entries for GIS Manager: %i\n");
        }
    }
    _v2068 = restore_html(_v2112);
    if(VERBOSE != 0) {
        _v2164 = _v2068;
        fprintf(__imp__stdout, "\nRestored links in index.hml: %i\n");
    }
    if(_v2068 > 0) {
        if(VERBOSE == 0) {
            _v2140 = _v2112;
            _v2144 = _v2112;
            _v2148 =  &TMP_HTML;
            _v2152 =  &TMP_NULL;
            _v2156 = _v2112;
            _v2160 = _v2112;
            _v2164 =  &TMP_GISMAN;
            sprintf( &_v2064, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &> %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html");
        } else {
            _v2144 = _v2112;
            _v2148 = _v2112;
            _v2152 =  &TMP_HTML;
            _v2156 = _v2112;
            _v2160 = _v2112;
            _v2164 =  &TMP_GISMAN;
            sprintf( &_v2064, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html");
        }
        su(_v2112,  &_v2064);
    }
    _t139 = _v2068;
    if(_t139 != 0) {
        print_done();
    } else {
        print_error(-26, "could not find anything to restore.\n");
    }
    _t103 = _v16 ^  *gs:0x14];
    if(_t139 == 0) {
        return _t103;
    }
    __stack_chk_fail();
    return _t103;
}

list_extensions(char* gisbase)
{// addr = 0x080525FC
    char[2047] file;
    FILE* f_in;
    signed int _v16;
    char _v2064;
    struct _IO_FILE* _v2068;
    char* _v2080;
    char* _v2096;
    char* _v2100;
    _unknown_ _v2104;
    _unknown_ __ebp;
    _unknown_ _t30;
    _unknown_ _t32;
    _unknown_ _t35;
    _unknown_ _t39;
    signed int _t42;
    _unknown_ _t46;
    _unknown_ _t53;
    _unknown_ _t55;
    _unknown_ _t56;
    _unknown_ _t62;

    _v2080 = gisbase;
    _v16 =  *gs:0x14];
    _v2100 = _v2080;
    fprintf(__imp__stdout, "\nExtensions in '%s' (name, version, type, depends):\n");
    _v2100 = _v2080;
    sprintf( &_v2064, "%s/etc/extensions.db");
    _v2068 = fopen( &_v2064, "r");
    if(_v2068 == 0) {
        _t62 =  *(__errno_location()) - 2;
        if(_t62 == 0) {
            fwrite("NONE.\n", 1, 6, __imp__stderr);
            fclose(_v2068);
            exit(0);
        }
        fclose(_v2068);
        _v2096 = strerror( *(__errno_location()));
        _v2100 =  &_v2064;
        print_error(-29, "checking for file '%s': %s\n");
    }
    fclose(_v2068);
    dump_ascii( &_v2064, 134572428);
    _t42 = _v16 ^  *gs:0x14];
    if(_t62 == 0) {
        return _t42;
    }
    __stack_chk_fail();
    return _t42;
}

run_post(char* package, int action, char* bins, char* gisbase)
{// addr = 0x08052748
    char[2047] tmp;
    char[2047] tmp2;
    signed int _v16;
    char _v2064;
    char _v4112;
    char* _v4128;
    char* _v4132;
    char* _v4136;
    char* _v4144;
    int _v4148;
    _unknown_ _v4152;
    _unknown_ __ebp;
    _unknown_ _t53;
    _unknown_ _t56;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t61;
    _unknown_ _t66;
    _unknown_ _t68;
    _unknown_ _t69;
    _unknown_ _t71;
    _unknown_ _t72;
    _unknown_ _t75;
    _unknown_ _t77;
    _unknown_ _t78;
    _unknown_ _t81;
    _unknown_ _t83;
    _unknown_ _t84;
    _unknown_ _t86;
    _unknown_ _t87;
    signed int _t89;
    _unknown_ _t91;
    _unknown_ _t93;
    _unknown_ _t94;
    char* _t105;

    _v4128 = package;
    _v4132 = bins;
    _v4136 = gisbase;
    _v16 =  *gs:0x14];
    if(action - 3 > 6) {
        putenv( &GEM_ACTION);
        if(_v4136 == 0) {
            memcpy( &INSTALL_BASE, "INSTALL_BASE=UNDEFINED", 23);
        } else {
            _v4148 = _v4136;
            sprintf( &INSTALL_BASE, "INSTALL_BASE=%s");
        }
        putenv( &INSTALL_BASE);
        getcwd( &_v2064, 2048);
        _v4144 = basename(_v4128);
        _v4148 =  &_v2064;
        sprintf( &_v4112, "%s/%s/src");
        _v4148 =  &_v4112;
        sprintf( &EXT_BASE, "EXT_BASE=%s");
        putenv( &EXT_BASE);
        _t105 = _v4132;
        if(_t105 != 0) {
            _v4148 = _v4132;
            sprintf( &INSTALL_TYPE, "INSTALL_TYPE=%s");
        } else {
            memcpy( &INSTALL_TYPE, "INSTALL_TYPE=src", 17);
        }
        putenv( &INSTALL_TYPE);
        _v4148 = FORCE;
        sprintf( &_v2064, "%i");
        _v4148 =  &_v2064;
        sprintf( &GEM_FORCE, "GEM_FORCE=%s");
        putenv( &GEM_FORCE);
        _v4148 = VERBOSE;
        sprintf( &_v2064, "%i");
        _v4148 =  &_v2064;
        sprintf( &GEM_VERBOSE, "GEM_VERBOSE=%s");
        putenv( &GEM_VERBOSE);
        memcpy( &GEM_GUI, "GEM_GUI=0", 10);
        putenv( &GEM_GUI);
        L08054750(exit_tmp);
        _t89 = _v16 ^  *gs:0x14];
        if(_t105 == 0) {
            return _t89;
        }
        __stack_chk_fail();
        return _t89;
    }
    goto __eax;
}

show_help()
{// addr = 0x08052A50
    _unknown_ _v16;
    _unknown_ _v20;
    char* _v24;
    signed int _v32;
    signed int _v44;
    char _v2080;
    FILE* _v2084;
    intOrPtr _v2088;
    char _v2092;
    int _v2096;
    char* _v2108;
    char* _v2124;
    FILE* _v2128;
    char* _v2132;
    signed int _v2152;
    char _v4200;
    int _v4204;
    char* _v4216;
    char* _v4232;
    intOrPtr _v4236;
    _unknown_ _v4240;
    _unknown_ _v4260;
    _unknown_ _v4264;
    intOrPtr _v4268;
    signed int _v4288;
    intOrPtr _v6352;
    int _v6372;
    char* _v6376;
    _unknown_ __ebp;
    _unknown_ _t173;
    _unknown_ _t176;
    _unknown_ _t179;
    _unknown_ _t182;
    _unknown_ _t185;
    _unknown_ _t188;
    _unknown_ _t191;
    _unknown_ _t194;
    _unknown_ _t197;
    _unknown_ _t200;
    _unknown_ _t203;
    _unknown_ _t206;
    _unknown_ _t209;
    _unknown_ _t212;
    _unknown_ _t215;
    _unknown_ _t218;
    _unknown_ _t221;
    _unknown_ _t224;
    _unknown_ _t227;
    _unknown_ _t230;
    _unknown_ _t233;
    _unknown_ _t236;
    _unknown_ _t239;
    _unknown_ _t242;
    _unknown_ _t245;
    _unknown_ _t248;
    _unknown_ _t251;
    _unknown_ _t254;
    _unknown_ _t257;
    _unknown_ _t260;
    _unknown_ _t263;
    _unknown_ _t266;
    _unknown_ _t269;
    _unknown_ _t272;
    _unknown_ _t275;
    _unknown_ _t278;
    _unknown_ _t279;
    _unknown_ _t282;
    _unknown_ _t286;
    _unknown_ _t289;
    _unknown_ _t290;
    _unknown_ _t293;
    _unknown_ _t297;
    _unknown_ _t300;
    _unknown_ _t301;
    _unknown_ _t303;
    _unknown_ _t306;
    _unknown_ _t309;
    _unknown_ _t312;
    _unknown_ _t315;
    _unknown_ _t316;
    _unknown_ _t319;
    _unknown_ _t324;
    signed int _t331;
    _unknown_ _t333;
    _unknown_ _t386;
    _unknown_ _t387;
    _unknown_ _t388;
    _unknown_ _t389;
    _unknown_ _t390;
    FILE* _t394;

    fwrite("Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n", 1, 42, __imp__stdout);
    fwrite("Install a GRASS extension from FILE or DIR.\n", 1, 44, __imp__stdout);
    fwrite("Manage (installed) GRASS extension(s).\n", 1, 39, __imp__stdout);
    fwrite("\nPossible ACTIONs are:\n", 1, 23, __imp__stdout);
    fwrite("  -i, --install=EXT\tinstall a GRASS extension\n", 1, 46, __imp__stdout);
    fwrite("  -u, --uninstall=EXT\tremove an extension from GRASS\n", 1, 53, __imp__stdout);
    fwrite("  -q, --query=EXT\tdisplay information about extension/list installed\n", 1, 69, __imp__stdout);
    fwrite("  -d, --details=EXT\tdisplay additional details about an extension\n", 1, 66, __imp__stdout);
    fwrite("  -c, --clean=EXT\tclean extension's source code directories\n", 1, 60, __imp__stdout);
    fwrite("  -t, --test=EXT\tconfigure and compile extension, but don't install\n", 1, 68, __imp__stdout);
    fwrite("  -l, --license=EXT\tshow copyright information for an extension\n", 1, 64, __imp__stdout);
    fwrite("  -r, --restore\t\trecreate HTML links and GIS Manager entries\n", 1, 61, __imp__stdout);
    fwrite("  -h, --help\t\tdisplay this help and exit\n", 1, 41, __imp__stdout);
    fwrite("  -V, --version\t\toutput version information and exit\n\n", 1, 54, __imp__stdout);
    fwrite("\nPossible OPTIONs are:\n", 1, 23, __imp__stdout);
    fwrite("  -g, --grass=PATH\tpath to GRASS installation dir\n", 1, 50, __imp__stdout);
    fwrite("  -b, --binary=NAME\tno compilation: use binary files for system NAME\n", 1, 69, __imp__stdout);
    fwrite("  -f, --force\t\tforce action, regardless of dependencies\n", 1, 56, __imp__stdout);
    fwrite("  -v, --verbose\t\tdisplay detailed status information\n", 1, 53, __imp__stdout);
    fwrite("  -s, --skip-config\tskip configure script\n", 1, 42, __imp__stdout);
    fwrite("  -x, --config-opts=OPTS\tpass OPTS to configure script\n", 1, 55, __imp__stdout);
    fwrite("  -o, --options=OPTS\toptions to pass to the C compiler/linker\n", 1, 62, __imp__stdout);
    fwrite("  -C, --config-cmd=CMD\tDefine custom 'configure' command (default=configure)\n", 1, 77, __imp__stdout);
    fwrite("  -m, --make-cmd=CMD\tDefine custom 'make' command (default=make)\n", 1, 65, __imp__stdout);
    fwrite("\nWhen run from within a GRASS session, locations of libs, header files\n", 1, 71, __imp__stdout);
    fwrite("and installation target dir will be assumed to match those of the active\n", 1, 73, __imp__stdout);
    fwrite("GRASS version. ", 1, 15, __imp__stdout);
    fwrite("Option -g can be used to override these or install extensions\nfrom outside", 1, 74, __imp__stdout);
    fwrite("of a GRASS session.\n", 1, 20, __imp__stdout);
    fwrite("Per default, extensions will be compiled from source and then installed.\n", 1, 73, __imp__stdout);
    fwrite("If the exension package contains binaries for the user's platform, they can\n", 1, 76, __imp__stdout);
    fwrite("be installed instead using the -b option. ", 1, 42, __imp__stdout);
    fwrite("For installation from source code, a C compiler and make tools are needed.\n", 1, 75, __imp__stdout);
    fwrite("\nExample:\n", 1, 10, __imp__stdout);
    fwrite("\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n", 1, 63, __imp__stdout);
    fwrite("Installs the MacOS X binaries for 'myExtension' in /usr/local/grass-6.4.0.\n", 1, 75, __imp__stdout);
    exit(0);
    _push(_t386);
    _t387 = __esp;
    __esp = __esp - 2104;
    _v2108 = _v24;
    _v44 =  *gs:0x14];
    strcpy( &_v2092, basename(_v2108));
    _v2096 = chdir( &_v2092);
    if(_v2096 < 0) {
        _v2124 = strerror( *(__errno_location()));
        _v2128 = _v2084;
        print_error(-2, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii("info", "Detailed information");
    system("sh post");
    exit(0);
    _push(_t387);
    _t388 = __esp;
    __esp = __esp - 2104;
    _v4216 = _v2132;
    _v2152 =  *gs:0x14];
    strcpy( &_v4200, basename(_v4216));
    _v4204 = chdir( &_v4200);
    if(_v4204 < 0) {
        _v4232 = strerror( *(__errno_location()));
        _v4236 = _v2088;
        print_error(-2, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii("license", "Detailed information");
    system("sh post");
    exit(0);
    _push(_t388);
    _t389 = __esp;
    __esp = __esp - 24;
    asm("fld qword [0x8057e40]");
    asm("fstp qword [esp+0x8]");
    fprintf(__imp__stdout, "gem64 (GRASS extensions manager) %.2f\n");
    fwrite("Written by Benjamin Ducke\n", 1, 26, __imp__stdout);
    fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, __imp__stdout);
    fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, __imp__stdout);
    fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, __imp__stdout);
    exit(0);
    _push(_t389);
    __esp = __esp - 2104;
    _v6352 = _v4268;
    _v4288 =  *gs:0x14];
    if((CONFIG_OPTS & 255 & 4294967295) == 0) {
        _v6372 = _v2096;
        sprintf( &_v2080, "%s/etc/config.system");
        _v2084 = fopen( &_v2080, "r");
        _t394 = _v2084;
        if(_t394 != 0) {
            if(nc_fgets_nb( &_v2080, 2048, _v2084) != 0) {
                strcpy( &CONFIG_OPTS,  &_v2080);
            }
        } else {
            _v6376 =  &_v2080;
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
    }
    _t331 = _v32 ^  *gs:0x14];
    if(_t394 == 0) {
        return _t331;
    }
    __stack_chk_fail();
    return _t331;
}

show_details(char* package)
{// addr = 0x08053002
    int error;
    char[2047] tmp;
    signed int _v16;
    signed int _v28;
    char _v2064;
    int _v2068;
    char _v2076;
    FILE* _v2080;
    intOrPtr _v2084;
    intOrPtr _v2092;
    char* _v2096;
    FILE* _v2100;
    char* _v2104;
    signed int _v2124;
    char _v4172;
    int _v4176;
    char* _v4188;
    char* _v4204;
    intOrPtr _v4208;
    _unknown_ _v4212;
    _unknown_ _v4232;
    _unknown_ _v4236;
    intOrPtr _v4240;
    signed int _v4260;
    intOrPtr _v6324;
    intOrPtr _v6344;
    char* _v6348;
    _unknown_ __ebp;
    _unknown_ _t65;
    _unknown_ _t69;
    _unknown_ _t72;
    _unknown_ _t73;
    _unknown_ _t76;
    _unknown_ _t80;
    _unknown_ _t83;
    _unknown_ _t84;
    _unknown_ _t86;
    _unknown_ _t89;
    _unknown_ _t92;
    _unknown_ _t95;
    _unknown_ _t98;
    _unknown_ _t99;
    _unknown_ _t102;
    _unknown_ _t107;
    signed int _t114;
    _unknown_ _t116;
    _unknown_ _t133;
    _unknown_ _t134;
    _unknown_ _t135;
    _unknown_ _t136;
    FILE* _t140;

    _v2080 = package;
    _v16 =  *gs:0x14];
    strcpy( &_v2064, basename(_v2080));
    _v2068 = chdir( &_v2064);
    if(_v2068 < 0) {
        _v2096 = strerror( *(__errno_location()));
        _v2100 = _v2080;
        print_error(-2, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii("info", "Detailed information");
    system("sh post");
    exit(0);
    _push(_t133);
    _t134 = __esp;
    __esp = __esp - 2104;
    _v4188 = _v2104;
    _v2124 =  *gs:0x14];
    strcpy( &_v4172, basename(_v4188));
    _v4176 = chdir( &_v4172);
    if(_v4176 < 0) {
        _v4204 = strerror( *(__errno_location()));
        _v4208 = _v2084;
        print_error(-2, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii("license", "Detailed information");
    system("sh post");
    exit(0);
    _push(_t134);
    _t135 = __esp;
    __esp = __esp - 24;
    asm("fld qword [0x8057e40]");
    asm("fstp qword [esp+0x8]");
    fprintf(__imp__stdout, "gem64 (GRASS extensions manager) %.2f\n");
    fwrite("Written by Benjamin Ducke\n", 1, 26, __imp__stdout);
    fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, __imp__stdout);
    fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, __imp__stdout);
    fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, __imp__stdout);
    exit(0);
    _push(_t135);
    __esp = __esp - 2104;
    _v6324 = _v4240;
    _v4260 =  *gs:0x14];
    if((CONFIG_OPTS & 255 & 4294967295) == 0) {
        _v6344 = _v2092;
        sprintf( &_v2076, "%s/etc/config.system");
        _v2080 = fopen( &_v2076, "r");
        _t140 = _v2080;
        if(_t140 != 0) {
            if(nc_fgets_nb( &_v2076, 2048, _v2080) != 0) {
                strcpy( &CONFIG_OPTS,  &_v2076);
            }
        } else {
            _v6348 =  &_v2076;
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
    }
    _t114 = _v28 ^  *gs:0x14];
    if(_t140 == 0) {
        return _t114;
    }
    __stack_chk_fail();
    return _t114;
}

show_license(char* package)
{// addr = 0x080530B9
    int error;
    char[2047] tmp;
    signed int _v16;
    signed int _v24;
    char _v2064;
    int _v2068;
    char _v2072;
    FILE* _v2076;
    char* _v2080;
    intOrPtr _v2088;
    char* _v2096;
    char* _v2100;
    _unknown_ _v2104;
    _unknown_ _v2124;
    _unknown_ _v2128;
    intOrPtr _v2132;
    signed int _v2152;
    intOrPtr _v4216;
    intOrPtr _v4236;
    char* _v4240;
    _unknown_ __ebp;
    _unknown_ _t51;
    _unknown_ _t55;
    _unknown_ _t58;
    _unknown_ _t59;
    _unknown_ _t61;
    _unknown_ _t64;
    _unknown_ _t67;
    _unknown_ _t70;
    _unknown_ _t73;
    _unknown_ _t74;
    _unknown_ _t77;
    _unknown_ _t82;
    signed int _t89;
    _unknown_ _t91;
    _unknown_ _t104;
    _unknown_ _t105;
    _unknown_ _t106;
    FILE* _t109;

    _v2080 = package;
    _v16 =  *gs:0x14];
    strcpy( &_v2064, basename(_v2080));
    _v2068 = chdir( &_v2064);
    if(_v2068 < 0) {
        _v2096 = strerror( *(__errno_location()));
        _v2100 = _v2080;
        print_error(-2, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii("license", "Detailed information");
    system("sh post");
    exit(0);
    _push(_t104);
    _t105 = __esp;
    __esp = __esp - 24;
    asm("fld qword [0x8057e40]");
    asm("fstp qword [esp+0x8]");
    fprintf(__imp__stdout, "gem64 (GRASS extensions manager) %.2f\n");
    fwrite("Written by Benjamin Ducke\n", 1, 26, __imp__stdout);
    fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, __imp__stdout);
    fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, __imp__stdout);
    fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, __imp__stdout);
    exit(0);
    _push(_t105);
    __esp = __esp - 2104;
    _v4216 = _v2132;
    _v2152 =  *gs:0x14];
    if((CONFIG_OPTS & 255 & 4294967295) == 0) {
        _v4236 = _v2088;
        sprintf( &_v2072, "%s/etc/config.system");
        _v2076 = fopen( &_v2072, "r");
        _t109 = _v2076;
        if(_t109 != 0) {
            if(nc_fgets_nb( &_v2072, 2048, _v2076) != 0) {
                strcpy( &CONFIG_OPTS,  &_v2072);
            }
        } else {
            _v4240 =  &_v2072;
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
    }
    _t89 = _v24 ^  *gs:0x14];
    if(_t109 == 0) {
        return _t89;
    }
    __stack_chk_fail();
    return _t89;
}

show_version()
{// addr = 0x08053170
    _unknown_ _v16;
    signed int _v20;
    intOrPtr _v24;
    signed int _v44;
    char _v2068;
    FILE* _v2072;
    intOrPtr _v2084;
    intOrPtr _v2108;
    intOrPtr _v2128;
    char* _v2132;
    _unknown_ __ebp;
    _unknown_ _t36;
    _unknown_ _t39;
    _unknown_ _t42;
    _unknown_ _t45;
    _unknown_ _t48;
    _unknown_ _t49;
    _unknown_ _t52;
    _unknown_ _t57;
    signed int _t64;
    _unknown_ _t66;
    _unknown_ _t75;
    _unknown_ _t76;
    FILE* _t78;

    asm("fld qword [0x8057e40]");
    asm("fstp qword [esp+0x8]");
    fprintf(__imp__stdout, "gem64 (GRASS extensions manager) %.2f\n");
    fwrite("Written by Benjamin Ducke\n", 1, 26, __imp__stdout);
    fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, __imp__stdout);
    fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, __imp__stdout);
    fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, __imp__stdout);
    exit(0);
    _push(_t75);
    __esp = __esp - 2104;
    _v2108 = _v24;
    _v44 =  *gs:0x14];
    if((CONFIG_OPTS & 255 & 4294967295) == 0) {
        _v2128 = _v2084;
        sprintf( &_v2068, "%s/etc/config.system");
        _v2072 = fopen( &_v2068, "r");
        _t78 = _v2072;
        if(_t78 != 0) {
            if(nc_fgets_nb( &_v2068, 2048, _v2072) != 0) {
                strcpy( &CONFIG_OPTS,  &_v2068);
            }
        } else {
            _v2132 =  &_v2068;
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
    }
    _t64 = _v20 ^  *gs:0x14];
    if(_t78 == 0) {
        return _t64;
    }
    __stack_chk_fail();
    return _t64;
}

get_configure_options(char* gisbase)
{// addr = 0x08053242
    FILE* fp;
    char[2047] str;
    signed int _v16;
    char _v2064;
    FILE* _v2068;
    char* _v2080;
    char* _v2100;
    char* _v2104;
    _unknown_ __ebp;
    _unknown_ _t24;
    _unknown_ _t29;
    signed int _t36;
    _unknown_ _t38;
    FILE* _t43;

    _v2080 = gisbase;
    _v16 =  *gs:0x14];
    if((CONFIG_OPTS & 255 & 4294967295) == 0) {
        _v2100 = _v2080;
        sprintf( &_v2064, "%s/etc/config.system");
        _v2068 = fopen( &_v2064, "r");
        _t43 = _v2068;
        if(_t43 != 0) {
            if(nc_fgets_nb( &_v2064, 2048, _v2068) != 0) {
                strcpy( &CONFIG_OPTS,  &_v2064);
            }
        } else {
            _v2104 =  &_v2064;
            print_warning("could not open %s for read access. Using default configure options.\n");
        }
    }
    _t36 = _v16 ^  *gs:0x14];
    if(_t43 == 0) {
        return _t36;
    }
    __stack_chk_fail();
    return _t36;
}

int main(int argc, char** argv)
{// addr = 0x0805331E
    char* gisbase;
    char* grass_version;
    char* grass_major;
    char* grass_minor;
    char* grass_revision;
    char* tmp;
    char* url;
    char* filepart;
    char[2047] version_file;
    char[2047] package;
    char[2047] orgname;
    char[2047] pkg_name;
    char* bins;
    int pkg_major;
    int pkg_minor;
    int pkg_revision;
    FILE* f;
    int fd;
    char[2047] pkg_short_name;
    char[2047] invocation;
    char[2047] coptions;
    int major;
    int minor;
    int revision;
    int option;
    int action;
    int valid;
    struct stat buf;
    struct stat buf2;
    int error;
    int is_directory;
    DIR* dir;
    struct dirent* dir_entry;
    int dir_found;
    int option_index;
    intOrPtr _v24;
    char _v2072;
    char _v4120;
    char _v6168;
    char _v8216;
    char _v10264;
    char _v12312;
    char _v14360;
    char* _v14364;
    char* _v14368;
    char* _v14372;
    char* _v14376;
    char* _v14380;
    char* _v14384;
    char* _v14388;
    char* _v14392;
    char* _v14396;
    int _v14400;
    int _v14404;
    int _v14408;
    struct _IO_FILE* _v14412;
    int _v14416;
    char* _v14420;
    long _v14424;
    long _v14428;
    int _v14432;
    int _v14436;
    int _v14440;
    char* _v14444;
    int _v14448;
    char[2047]* _v14452;
    char[2047]* _v14456;
    int _v14460;
    int _v14464;
    signed int _v14536;
    char _v14552;
    signed int _v14624;
    char _v14640;
    __builtin_va_list* _v14648;
    _unknown_ _v14664;
    _unknown_ _v14668;
    _unknown_ _v14672;
    long _v14676;
    char* _v14680;
    char* _v14684;
    char* _v14688;
    _unknown_ __ebp;
    _unknown_ _t407;
    _unknown_ _t408;
    _unknown_ _t409;
    _unknown_ _t410;
    _unknown_ _t411;
    _unknown_ _t412;
    _unknown_ _t413;
    _unknown_ _t414;
    _unknown_ _t415;
    _unknown_ _t416;
    _unknown_ _t417;
    _unknown_ _t418;
    _unknown_ _t419;
    _unknown_ _t420;
    _unknown_ _t421;
    _unknown_ _t422;
    _unknown_ _t423;
    _unknown_ _t424;
    _unknown_ _t425;
    _unknown_ _t426;
    _unknown_ _t427;
    _unknown_ _t428;
    _unknown_ _t429;
    _unknown_ _t430;
    _unknown_ _t431;
    _unknown_ _t432;
    _unknown_ _t433;
    _unknown_ _t434;
    _unknown_ _t435;
    _unknown_ _t436;
    _unknown_ _t437;
    _unknown_ _t438;
    _unknown_ _t439;
    _unknown_ _t441;
    _unknown_ _t443;
    _unknown_ _t444;
    _unknown_ _t446;
    _unknown_ _t447;
    _unknown_ _t452;
    _unknown_ _t454;
    _unknown_ _t467;
    _unknown_ _t469;
    _unknown_ _t472;
    _unknown_ _t474;
    _unknown_ _t481;
    _unknown_ _t488;
    _unknown_ _t495;
    _unknown_ _t496;
    _unknown_ _t504;
    _unknown_ _t509;
    _unknown_ _t511;
    _unknown_ _t520;
    int _t521;
    _unknown_ _t531;
    _unknown_ _t536;
    _unknown_ _t541;
    _unknown_ _t546;
    _unknown_ _t565;
    _unknown_ _t568;
    _unknown_ _t571;
    struct _IO_FILE* _t576;
    _unknown_ _t578;
    _unknown_ _t580;
    _unknown_ _t583;
    _unknown_ _t584;
    _unknown_ _t586;
    _unknown_ _t588;
    _unknown_ _t592;
    _unknown_ _t599;
    _unknown_ _t607;
    char* _t608;
    char* _t612;
    char[2047]* _t613;
    char[2047]* _t617;
    _unknown_ _t620;
    _unknown_ _t627;
    _unknown_ _t633;
    _unknown_ _t637;
    _unknown_ _t643;
    _unknown_ _t648;
    _unknown_ _t650;
    _unknown_ _t655;
    _unknown_ _t657;
    _unknown_ _t660;
    _unknown_ _t661;
    _unknown_ _t666;
    _unknown_ _t667;
    _unknown_ _t668;
    _unknown_ _t677;
    _unknown_ _t680;
    _unknown_ _t681;
    _unknown_ _t682;
    _unknown_ _t724;
    _unknown_ _t725;

    __esp = __esp & 240;
    _push(__ebx);
    __esp = __esp - 14684;
    _v14648 = argv;
    _v24 =  *gs:0x14];
    _v14448 = 0;
    _v14464 = 0;
    VERBOSE = 0;
    TMPCLEAN = 0;
    TMPDBCLEAN = 0;
    FORCE = 0;
    UPGRADE = 0;
    ERROR = 0;
    WARNINGS = 0;
    SKIP_CFG = 0;
    memcpy( &GISMAN_CMD, 134576421, 1);
    memcpy( &GISMAN2_CMD, 134576421, 1);
    memcpy( &QGIS_CMD, 134576421, 1);
    memcpy( &UNINSTALL_CMD, 134576421, 1);
    memcpy( &HTML_CMD, 134576421, 1);
    memcpy( &TMPDIR, 134576421, 1);
    memcpy( &TMPDB, 134576421, 1);
    memcpy( &TMP_GISMAN, 134576421, 1);
    memcpy( &TMP_DESCR, 134576421, 1);
    memcpy( &TMP_INFO, 134576421, 1);
    memcpy( &TMP_DEPS, 134576421, 1);
    memcpy( &TMP_BUGS, 134576421, 1);
    memcpy( &TMP_AUTHORS, 134576421, 1);
    memcpy( &TMP_HTML, 134576421, 1);
    memcpy( &TMP_NULL, 134576421, 1);
    memcpy( &CONFIG_OPTS, 134576421, 1);
    memcpy( &CONFIG_CMD, "configure", 10);
    memcpy( &MAKE_CMD, "make", 5);
    getcwd( &CWD, 2048);
    fwrite(134576437, 1, 4, __imp__stdout);
    _v14384 = malloc(2048);
    strcpy( &_v12312,  *_v14648);
    setvbuf(__imp__stdout, 0, 2, 0);
    if(argc == 1) {
        show_help();
        exit(0);
    }
    L08054750(exit_msg);
    _v14440 = 0;
    _v14396 = 0;
    _v14364 = 0;
    __imp__opterr = 0;
    _v14432 = getopt_long(argc, _v14648, ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs",  &long_options,  &_v14464);
    while(_v14432 != 255) {
        if(_v14432 != 58) {
L22:
            if(_v14432 == 105 || _v14432 == 117 || _v14432 == 113 || _v14432 == 100 || _v14432 == 99 || _v14432 == 116 || _v14432 == 108 || _v14432 == 114 || _v14432 == 104 || _v14432 == 86) {
                _v14440 = _v14440 + 1;
                if(_v14432 - 86 <= 31) {
                    goto __eax;
                }
                if(__imp__optarg != 0) {
                    strcpy( &_v4120, __imp__optarg);
                    strcpy( &_v6168, __imp__optarg);
                }
            }
            if(_v14432 == 103) {
                _v14364 = malloc(strlen(__imp__optarg) + 1);
                strcpy(_v14364, __imp__optarg);
            }
            if(_v14432 == 98) {
                _v14396 = malloc(strlen(__imp__optarg) + 1);
                strcpy(_v14396, __imp__optarg);
                _v14436 = 4;
            }
            if(_v14432 == 120) {
                strcpy( &CONFIG_OPTS, __imp__optarg);
            }
            if(_v14432 == 102) {
                FORCE = 1;
            }
            if(_v14432 == 118) {
                VERBOSE = 1;
            }
            if(_v14432 == 115) {
                SKIP_CFG = 1;
            }
            if(_v14432 == 111) {
                strcat( &_v14360, __imp__optarg);
            }
            if(_v14432 == 67) {
                strcpy( &CONFIG_CMD, __imp__optarg);
            }
            if(_v14432 == 109) {
                strcpy( &MAKE_CMD, __imp__optarg);
            }
            _v14432 = getopt_long(argc, _v14648, ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs",  &long_options,  &_v14464);
            continue;
        } else {
            if(__imp__optopt == 105 || __imp__optopt == 117 || __imp__optopt == 100 || __imp__optopt == 99 || __imp__optopt == 116 || __imp__optopt == 108 || __imp__optopt == 114) {
                print_error(-1, "missing file or directory name.\n");
            }
            if(__imp__optopt == 103) {
                print_error(-1, "missing path to GRASS 6.\n");
            }
            if(__imp__optopt == 98) {
                print_error(-1, "missing name of binary architecture.\n");
            }
            if(__imp__optopt == 98) {
                print_error(-1, "missing configure options.\n");
            }
            if(__imp__optopt != 113) {
                goto L22;
            } else {
                _v14436 = 12;
                _v14440 = _v14440 + 1;
                if(_v14440 <= 0) {
                    print_error(-1, "please specify a valid action.\n");
                }
                if(_v14440 > 1) {
                    print_error(-1, "please specify only one action.\n");
                }
                _v14684 =  &_v14360;
                sprintf( &GEM_C_OPTS, "GEM_C_OPTS=%s");
                putenv( &GEM_C_OPTS);
                if(_v14436 == 1) {
                    show_help();
                    exit(0);
                }
                if(_v14436 == 2) {
                    show_version();
                    exit(0);
                }
                if(VERBOSE == 0) {
                    memcpy( &TMP_NULL, "/tmp/grass.extension.log.XXXXXX", 32);
                    mkstemp( &TMP_NULL);
                    _v14684 = 511;
                    _v14688 = 64;
                     *__esp =  &TMP_NULL;
                    _v14416 = open();
                    if(_v14416 == 255) {
                        _v14684 = strerror( *(__errno_location()));
                        print_error(-30, "could not create temp file: %s");
                        exit(-30);
                    }
                }
                if(_v14436 == 11) {
                    if(_v14364 == 0) {
                        _v14364 = getenv("GISBASE");
                        if(_v14364 == 0) {
                            print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
                        }
                    }
                    if(VERBOSE != 0) {
                        _v14684 = _v14364;
                        fprintf(__imp__stdout, "Path to GRASS is %s.\n");
                    }
                    restore(_v14364, _v14368);
                    exit(0);
                }
                if(_v14436 == 12) {
                    if(_v14364 == 0) {
                        _v14364 = getenv("GISBASE");
                        if(_v14364 == 0) {
                            print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
                        }
                    }
                    if(VERBOSE != 0) {
                        _v14684 = _v14364;
                        fprintf(__imp__stdout, "Path to GRASS is %s.\n");
                    }
                    list_extensions(_v14364);
                    exit(0);
                }
                if(strstr( &_v4120, "http://") != 0 || strstr( &_v4120, "ftp://") != 0) {
                    wget_extension( &_v4120);
                    _v14388 = malloc(2048);
                    strcpy(_v14388,  &_v4120);
                    _v14392 = strrchr(_v14388, 47);
                    _v14392 =  &(_v14392[1]);
                    strcpy( &_v4120, _v14392);
                    free(_v14388);
                }
                if(VERBOSE != 0) {
                    _v14684 =  &_v4120;
                    fprintf(__imp__stdout, "Extension location is '%s'.\n");
                }
                if(_v14436 == 10) {
L103:
                    if(_v14436 != 10) {
                        get_package_name( &_v4120,  &_v10264);
                    } else {
                        strcpy( &_v10264,  &_v4120);
                    }
                    if(_v14440 > 0) {
                        if(_v14364 == 0) {
                            _v14364 = getenv("GISBASE");
                        }
                        run_post( &_v4120, _v14436, _v14396, _v14364);
                    }
                    if(VERBOSE != 0) {
                        _v14684 =  &_v4120;
                        fprintf(__imp__stdout, "Extension will be installed from '%s'\n");
                    }
                    if(_v14436 != 10) {
                        check_extension( &_v4120,  &_v8216,  &_v14400,  &_v14404,  &_v14408);
                    }
                    if(_v14436 == 5) {
                        query_extension( &_v4120,  &_v8216, _v14400, _v14404, _v14408,  &_v10264,  &_v12312,  &_v6168);
                        exit(0);
                    }
                    if(_v14436 == 9) {
                        show_details( &_v4120);
                        exit(0);
                    }
                    if(_v14436 == 7) {
                        show_license( &_v4120);
                        exit(0);
                    }
                    if(_v14436 == 6) {
                        source_clean( &_v4120);
                        exit(0);
                    }
                    if(_v14364 == 0) {
                        _v14364 = getenv("GISBASE");
                        if(_v14364 == 0) {
                            print_error(-1, "GISBASE environment variable not set and path to GRASS not given.\n");
                        }
                    }
                    if(VERBOSE != 0) {
                        _v14684 = _v14364;
                        fprintf(__imp__stdout, "Path to GRASS is %s.\n");
                    }
                    _v14368 = getenv("GRASS_VERSION");
                    if(_v14368 == 0) {
                        _v14684 = _v14364;
                        sprintf( &_v2072, "%s/etc/VERSIONNUMBER");
                        _v14412 = fopen( &_v2072, "r");
                        if(_v14412 != 0) {
                            _v14368 = malloc(16);
                            _v14684 = _v14368;
                            _v14688 = "%s";
                            _t576 = _v14412;
                             *__esp = _t576;
                            __isoc99_fscanf();
                            _v14444 = _t576;
                            fclose(_v14412);
                            if(_v14444 <= 0) {
                                print_error(-11, "Could not read GRASS version. Did you specify the right path?\n");
                            }
                        } else {
                            print_error(-11, "Could not read GRASS version. Did you specify the right path?\n");
                        }
                    }
                    if(_v14368 != 0) {
                        _v14384 = strdup(_v14368);
                        _v14372 = strtok(_v14384, ".");
                        _v14376 = strtok(0, ".");
                        _v14380 = strtok(0, ".");
                        _v14420 = strtol(_v14372, 0, 10);
                        _v14424 = strtol(_v14376, 0, 10);
                        _v14428 = strtol(_v14380, 0, 10);
                        _v14368 = malloc(2048);
                        _v14676 = _v14428;
                        _v14680 = _v14424;
                        _v14684 = _v14420;
                        sprintf(_v14368, "%i.%i.%i");
                        if(VERBOSE != 0) {
                            _v14684 = _v14368;
                            fprintf(__imp__stdout, "GRASS version is %s.\n");
                        }
                        if(_v14420 <= 5) {
                            print_error(-11, "extensions only work with GRASS version 6 and above.\n");
                        }
                    }
                    _v14684 = _v14364;
                    sprintf( &_v14360, "-L%s/lib -I/usr/local/grasslib/include/ ");
                    if(_v14436 == 3) {
                        source_install( &_v4120, _v14364,  &_v10264, _v14400, _v14404, _v14408, _v14368);
                        exit(0);
                    }
                    if(_v14436 == 10) {
                        uninstall( &_v4120,  &_v10264, _v14364, _v14368);
                        exit(0);
                    }
                    if(_v14436 == 8) {
                        test_install( &_v4120, _v14364,  &_v10264, _v14400, _v14404, _v14408, _v14368);
                        exit(0);
                    }
                    if(_v14436 == 4) {
                        if(binaries_exist( &_v4120, _v14396) != 0) {
                            bin_install( &_v4120, _v14364, _v14396,  &_v10264, _v14400, _v14404, _v14408, _v14368);
                            exit(0);
                        }
                        _v14684 = _v14396;
                        print_error(-12, "no binaries for system '%s'\n");
                    }
                    _t521 = exit(0);
                    _push(_t724);
                    return _t521;
                } else {
                    _t608 =  &_v4120;
                    L08054790(_t608,  &_v14552);
                    _v14444 = _t608;
                    if(_v14444 < 0) {
                        _v14680 = strerror( *(__errno_location()));
                        _v14684 =  &_v4120;
                        print_error(-2, "extension FILE or DIR '%s' invalid: %s\n");
                    }
                    if((_v14536 & 61440) != 16384) {
                        if(VERBOSE != 0) {
                            fwrite("Extension files stored in a package file.\n", 1, 42, __imp__stdout);
                        }
                        _t612 =  &_v4120;
                        unpack_extension(_t612);
                         *__esp =  &TMPDIR;
                        opendir();
                        _v14452 = _t612;
                        _t613 = _v14452;
                         *__esp = _t613;
                        readdir();
                        _v14456 = _t613;
                        _v14460 = 0;
                        while(_v14456 != 0) {
                            if(strcmp(_v14456 + 11, ".") == 0 || strcmp(_v14456 + 11, "..") == 0) {
L99:
                                _t617 = _v14452;
                                 *__esp = _t617;
                                readdir();
                                _v14456 = _t617;
                                continue;
                            }
                            _v14680 = _v14456 + 11;
                            _v14684 =  &TMPDIR;
                            sprintf(_v14384, "%s/%s");
                            L08054790(_v14384,  &_v14640);
                            if((_v14624 & 61440) != 16384) {
                                goto L99;
                            }
                            _v14460 = 1;
                            strcpy( &_v4120, _v14384);
                            if(_v14460 == 0) {
                                print_error(-7, "no top-level directory found in extension package.\n");
                            }
                            goto L103;
                        }
                    } else {
                        _v14448 = 1;
                        if(VERBOSE != 0) {
                            fwrite("Extension files stored in a directory.\n", 1, 39, __imp__stdout);
                        }
                        goto L103;
                    }
                }
            }
            goto L23;
        }
    }
}

L0805474A()
{
    return;
}

L08054750(intOrPtr _a4)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    intOrPtr* _t5;
    _unknown_ _t7;
    _unknown_ _t8;

    L0805474A();
    _t8 = _t7 + 18587;
    __esp = __esp - 12;
    _t5 =  *((intOrPtr*)(_t8 + -4));
    if(_t5 != 0) {
        _t5 =  *_t5;
    }
    _v12 = _t5;
    _v16 = 0;
     *__esp = _a4;
    __cxa_atexit();
    __esp = __esp + 12;
    return;
}

L08054790(intOrPtr _a4, intOrPtr _a8)
{
    intOrPtr _v12;
    intOrPtr _v16;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t7;
    _unknown_ _t8;

    L0805474A();
     *__esp = 3;
    _v12 = _a8;
    _v16 = _a4;
    __xstat();
    return;
}

L080547D0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134582032;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134582032;
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

L080547D0()
{
    intOrPtr* __ebx;
    _unknown_ __ebp;

    __eax =  *134582032;
    if(__eax == 255) {
        return ;
    }
    __ebx = 134582032;
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
//     166 Register nodes
//     398 Temporaries nodes
//       3 Casts
//    5751 Statements
//     118 Labels
//      76 Gotos
//     123 Blocks
//   14860 Nodes
//       9 Assembly nodes
//    1037 Unknown Types


