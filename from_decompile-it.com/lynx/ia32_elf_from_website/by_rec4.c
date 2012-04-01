_init()
{// addr = 0x0804A734
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t2;

    __esp = __esp - 4;
    L1();
    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 1349812 + -4)) != 0) {
        __gmon_start__();
    }
    L0804B4C0();
    L081497E0();
    _pop(__eax);
    return;
}

L0804A740()
{
    _unknown_ _t2;

    _pop(__ebx);
    if( *((intOrPtr*)(_t2 + 1349812 + -4)) != 0) {
        __gmon_start__();
    }
    L0804B4C0();
    L081497E0();
    _pop(__eax);
    _pop(__ebx);
    __esp = __ebp;
    _pop(__ebp);
    return;
}

int fileno(struct _IO_FILE* fp)
{// addr = 0x0804A774
    goto __imp__fileno;
}

scrollok()
{// addr = 0x0804A784
    goto __imp__scrollok;
}

int fputs(char* str, struct _IO_FILE* fp)
{// addr = 0x0804A794
    goto __imp__fputs;
}

ungetmouse()
{// addr = 0x0804A7A4
    goto __imp__ungetmouse;
}

void abort()
{// addr = 0x0804A7B4
    goto __imp__abort;
}

int* __errno_location()
{// addr = 0x0804A7C4
    goto __imp____errno_location;
}

sigemptyset()
{// addr = 0x0804A7D4
    goto __imp__sigemptyset;
}

int sprintf(char* dst, char* format)
{// addr = 0x0804A7E4
    goto __imp__sprintf;
}

struct _IO_FILE* popen(char* name, char* mode)
{// addr = 0x0804A7F4
    goto __imp__popen;
}

connect()
{// addr = 0x0804A804
    goto __imp__connect;
}

int getpid()
{// addr = 0x0804A814
    goto __imp__getpid;
}

mkdir()
{// addr = 0x0804A824
    goto __imp__mkdir;
}

inflateReset()
{// addr = 0x0804A834
    goto __imp__inflateReset;
}

char* strerror(int __errnum)
{// addr = 0x0804A844
    goto __imp__strerror;
}

mouseinterval()
{// addr = 0x0804A854
    goto __imp__mouseinterval;
}

getsockname()
{// addr = 0x0804A864
    goto __imp__getsockname;
}

memcmp()
{// addr = 0x0804A874
    goto __imp__memcmp;
}

void qsort(void* __base, int __nmemb, int __size, __compar_fn_t __compar)
{// addr = 0x0804A884
    goto __imp__qsort;
}

freeaddrinfo()
{// addr = 0x0804A894
    goto __imp__freeaddrinfo;
}

syslog()
{// addr = 0x0804A8A4
    goto __imp__syslog;
}

newwin()
{// addr = 0x0804A8B4
    goto __imp__newwin;
}

void* bsearch(void* __key, void* __base, int __nmemb, int __size, __compar_fn_t __compar)
{// addr = 0x0804A8C4
    goto __imp__bsearch;
}

long random()
{// addr = 0x0804A8D4
    goto __imp__random;
}

inflateEnd()
{// addr = 0x0804A8E4
    goto __imp__inflateEnd;
}

waddch()
{// addr = 0x0804A8F4
    goto __imp__waddch;
}

open64()
{// addr = 0x0804A904
    goto __imp__open64;
}

wmove()
{// addr = 0x0804A914
    goto __imp__wmove;
}

gzopen64()
{// addr = 0x0804A924
    goto __imp__gzopen64;
}

keypad()
{// addr = 0x0804A934
    goto __imp__keypad;
}

signal()
{// addr = 0x0804A944
    goto __imp__signal;
}

__gmon_start__()
{// addr = 0x0804A954
    goto __imp____gmon_start__;
}

echo()
{// addr = 0x0804A964
    goto __imp__echo;
}

void* realloc(void* __ptr, int __size)
{// addr = 0x0804A974
    goto __imp__realloc;
}

iconv_open()
{// addr = 0x0804A984
    goto __imp__iconv_open;
}

void unsetenv(char* __name)
{// addr = 0x0804A994
    goto __imp__unsetenv;
}

__xstat64()
{// addr = 0x0804A9A4
    goto __imp____xstat64;
}

localtime()
{// addr = 0x0804A9B4
    goto __imp__localtime;
}

endwin()
{// addr = 0x0804A9C4
    goto __imp__endwin;
}

getgrnam()
{// addr = 0x0804A9D4
    goto __imp__getgrnam;
}

gzclose()
{// addr = 0x0804A9E4
    goto __imp__gzclose;
}

double strtod(char* __nptr, char** __endptr)
{// addr = 0x0804A9F4
    goto __imp__strtod;
}

char* strchr(char* __s, int __c)
{// addr = 0x0804AA04
    goto __imp__strchr;
}

char* getenv(char* __name)
{// addr = 0x0804AA14
    goto __imp__getenv;
}

void* calloc(int __nmemb, int __size)
{// addr = 0x0804AA24
    goto __imp__calloc;
}

int system(char* __command)
{// addr = 0x0804AA34
    goto __imp__system;
}

char* strncpy(char* __dest, char* __src, int __n)
{// addr = 0x0804AA44
    goto __imp__strncpy;
}

int putchar(int ch)
{// addr = 0x0804AA54
    goto __imp__putchar;
}

__caddr_t ttyname(int __fd)
{// addr = 0x0804AA64
    goto __imp__ttyname;
}

int write(int __fd, void* __buf, int __n)
{// addr = 0x0804AA74
    goto __imp__write;
}

doupdate()
{// addr = 0x0804AA84
    goto __imp__doupdate;
}

resizeterm()
{// addr = 0x0804AA94
    goto __imp__resizeterm;
}

listen()
{// addr = 0x0804AAA4
    goto __imp__listen;
}

derwin()
{// addr = 0x0804AAB4
    goto __imp__derwin;
}

toupper()
{// addr = 0x0804AAC4
    goto __imp__toupper;
}

char* fgets(char* dst, int sz, struct _IO_FILE* fp)
{// addr = 0x0804AAD4
    goto __imp__fgets;
}

int rename(char* _old, char* _new)
{// addr = 0x0804AAE4
    goto __imp__rename;
}

void* memset(void* __s, int __c, int __n)
{// addr = 0x0804AAF4
    goto __imp__memset;
}

fopen64()
{// addr = 0x0804AB04
    goto __imp__fopen64;
}

__libc_start_main()
{// addr = 0x0804AB14
    goto __imp____libc_start_main;
}

_IO_getc()
{// addr = 0x0804AB24
    goto __imp___IO_getc;
}

void _exit(int __status)
{// addr = 0x0804AB34
    goto __imp___exit;
}

char* strrchr(char* __s, int __c)
{// addr = 0x0804AB44
    goto __imp__strrchr;
}

__caddr_t ctermid(__caddr_t __buf)
{// addr = 0x0804AB54
    goto __imp__ctermid;
}

chmod()
{// addr = 0x0804AB64
    goto __imp__chmod;
}

__assert_fail()
{// addr = 0x0804AB74
    goto __imp____assert_fail;
}

delwin()
{// addr = 0x0804AB84
    goto __imp__delwin;
}

werase()
{// addr = 0x0804AB94
    goto __imp__werase;
}

__builtin_va_list bindtextdomain(char* __domainname, char* __dirname)
{// addr = 0x0804ABA4
    goto __imp__bindtextdomain;
}

initscr()
{// addr = 0x0804ABB4
    goto __imp__initscr;
}

int read(int __fd, void* __buf, int __nbytes)
{// addr = 0x0804ABC4
    goto __imp__read;
}

void perror(char* msg)
{// addr = 0x0804ABD4
    goto __imp__perror;
}

__builtin_va_list gettext(char* __msgid)
{// addr = 0x0804ABE4
    goto __imp__gettext;
}

int ungetc(int c, struct _IO_FILE* fp)
{// addr = 0x0804ABF4
    goto __imp__ungetc;
}

pnoutrefresh()
{// addr = 0x0804AC04
    goto __imp__pnoutrefresh;
}

gettimeofday()
{// addr = 0x0804AC14
    goto __imp__gettimeofday;
}

wclrtoeol()
{// addr = 0x0804AC24
    goto __imp__wclrtoeol;
}

inflate()
{// addr = 0x0804AC34
    goto __imp__inflate;
}

long strtol(char* __nptr, char** __endptr, int __base)
{// addr = 0x0804AC44
    goto __imp__strtol;
}

struct _IO_FILE* fdopen(int fd, char* name)
{// addr = 0x0804AC54
    goto __imp__fdopen;
}

clearok()
{// addr = 0x0804AC64
    goto __imp__clearok;
}

void free(void* __ptr)
{// addr = 0x0804AC74
    goto __imp__free;
}

__lxstat64()
{// addr = 0x0804AC84
    goto __imp____lxstat64;
}

openlog()
{// addr = 0x0804AC94
    goto __imp__openlog;
}

pair_content()
{// addr = 0x0804ACA4
    goto __imp__pair_content;
}

getmouse()
{// addr = 0x0804ACB4
    goto __imp__getmouse;
}

mousemask()
{// addr = 0x0804ACC4
    goto __imp__mousemask;
}

curses_version()
{// addr = 0x0804ACD4
    goto __imp__curses_version;
}

nonl()
{// addr = 0x0804ACE4
    goto __imp__nonl;
}

truncate64()
{// addr = 0x0804ACF4
    goto __imp__truncate64;
}

sigaction()
{// addr = 0x0804AD04
    goto __imp__sigaction;
}

int fflush(struct _IO_FILE* fp)
{// addr = 0x0804AD14
    goto __imp__fflush;
}

opendir()
{// addr = 0x0804AD24
    goto __imp__opendir;
}

accept()
{// addr = 0x0804AD34
    goto __imp__accept;
}

ioctl()
{// addr = 0x0804AD44
    goto __imp__ioctl;
}

socket()
{// addr = 0x0804AD54
    goto __imp__socket;
}

int dup2(int __fd, int __fd2)
{// addr = 0x0804AD64
    goto __imp__dup2;
}

__ctype_b_loc()
{// addr = 0x0804AD74
    goto __imp____ctype_b_loc;
}

wtouchln()
{// addr = 0x0804AD84
    goto __imp__wtouchln;
}

int isatty(int __fd)
{// addr = 0x0804AD94
    goto __imp__isatty;
}

getaddrinfo()
{// addr = 0x0804ADA4
    goto __imp__getaddrinfo;
}

umask()
{// addr = 0x0804ADB4
    goto __imp__umask;
}

int fclose(struct _IO_FILE* fp)
{// addr = 0x0804ADC4
    goto __imp__fclose;
}

mktime()
{// addr = 0x0804ADD4
    goto __imp__mktime;
}

wrefresh()
{// addr = 0x0804ADE4
    goto __imp__wrefresh;
}

ntohs()
{// addr = 0x0804ADF4
    goto __imp__ntohs;
}

init_pair()
{// addr = 0x0804AE04
    goto __imp__init_pair;
}

readdir64()
{// addr = 0x0804AE14
    goto __imp__readdir64;
}

void* memcpy(void* __dest, void* __src, int __n)
{// addr = 0x0804AE24
    goto __imp__memcpy;
}

int execv(char* __path, __caddr_t* __argv)
{// addr = 0x0804AE34
    goto __imp__execv;
}

int strlen(char* __s)
{// addr = 0x0804AE44
    goto __imp__strlen;
}

mkdtemp()
{// addr = 0x0804AE54
    goto __imp__mkdtemp;
}

int unlink(char* __name)
{// addr = 0x0804AE64
    goto __imp__unlink;
}

iconv()
{// addr = 0x0804AE74
    goto __imp__iconv;
}

getpwuid()
{// addr = 0x0804AE84
    goto __imp__getpwuid;
}

gai_strerror()
{// addr = 0x0804AE94
    goto __imp__gai_strerror;
}

__builtin_va_list setlocale(int __category, char* __locale)
{// addr = 0x0804AEA4
    goto __imp__setlocale;
}

waitpid()
{// addr = 0x0804AEB4
    goto __imp__waitpid;
}

void clearerr(struct _IO_FILE* fp)
{// addr = 0x0804AEC4
    goto __imp__clearerr;
}

int fgetc(struct _IO_FILE* fp)
{// addr = 0x0804AED4
    goto __imp__fgetc;
}

int feof(struct _IO_FILE* fp)
{// addr = 0x0804AEE4
    goto __imp__feof;
}

char* strcpy(char* __dest, char* __src)
{// addr = 0x0804AEF4
    goto __imp__strcpy;
}

cbreak()
{// addr = 0x0804AF04
    goto __imp__cbreak;
}

int printf(char* format)
{// addr = 0x0804AF14
    goto __imp__printf;
}

int chdir(char* __path)
{// addr = 0x0804AF24
    goto __imp__chdir;
}

ctime()
{// addr = 0x0804AF34
    goto __imp__ctime;
}

bind()
{// addr = 0x0804AF44
    goto __imp__bind;
}

short getuid()
{// addr = 0x0804AF54
    goto __imp__getuid;
}

long atol(char* __nptr)
{// addr = 0x0804AF64
    goto __imp__atol;
}

int atoi(char* __nptr)
{// addr = 0x0804AF74
    goto __imp__atoi;
}

start_color()
{// addr = 0x0804AF84
    goto __imp__start_color;
}

int putenv(char* __string)
{// addr = 0x0804AF94
    goto __imp__putenv;
}

double atof(char* __nptr)
{// addr = 0x0804AFA4
    goto __imp__atof;
}

wresize()
{// addr = 0x0804AFB4
    goto __imp__wresize;
}

select()
{// addr = 0x0804AFC4
    goto __imp__select;
}

void srandom(int __seed)
{// addr = 0x0804AFD4
    goto __imp__srandom;
}

gzerror()
{// addr = 0x0804AFE4
    goto __imp__gzerror;
}

wgetch()
{// addr = 0x0804AFF4
    goto __imp__wgetch;
}

closedir()
{// addr = 0x0804B004
    goto __imp__closedir;
}

int close(int __fd)
{// addr = 0x0804B014
    goto __imp__close;
}

int fwrite(void* src, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x0804B024
    goto __imp__fwrite;
}

wbkgd()
{// addr = 0x0804B034
    goto __imp__wbkgd;
}

int fprintf(struct _IO_FILE* fp, char* format)
{// addr = 0x0804B044
    goto __imp__fprintf;
}

char* strstr(char* __haystack, char* __needle)
{// addr = 0x0804B054
    goto __imp__strstr;
}

time()
{// addr = 0x0804B064
    goto __imp__time;
}

char* strncat(char* __dest, char* __src, int __n)
{// addr = 0x0804B074
    goto __imp__strncat;
}

int remove(char* name)
{// addr = 0x0804B084
    goto __imp__remove;
}

newpad()
{// addr = 0x0804B094
    goto __imp__newpad;
}

int execve(char* __path, __caddr_t* __argv, __caddr_t* __envp)
{// addr = 0x0804B0A4
    goto __imp__execve;
}

nl_langinfo()
{// addr = 0x0804B0B4
    goto __imp__nl_langinfo;
}

void* malloc(int __size)
{// addr = 0x0804B0C4
    goto __imp__malloc;
}

sigprocmask()
{// addr = 0x0804B0D4
    goto __imp__sigprocmask;
}

has_colors()
{// addr = 0x0804B0E4
    goto __imp__has_colors;
}

__stack_chk_fail()
{// addr = 0x0804B0F4
    goto __imp____stack_chk_fail;
}

iconv_close()
{// addr = 0x0804B104
    goto __imp__iconv_close;
}

int gethostname(__caddr_t __name, int __len)
{// addr = 0x0804B114
    goto __imp__gethostname;
}

int fputc(int ch, struct _IO_FILE* fp)
{// addr = 0x0804B124
    goto __imp__fputc;
}

int rmdir(char* __path)
{// addr = 0x0804B134
    goto __imp__rmdir;
}

waddnstr()
{// addr = 0x0804B144
    goto __imp__waddnstr;
}

char* strtok(char* __s, char* __delim)
{// addr = 0x0804B154
    goto __imp__strtok;
}

getgrgid()
{// addr = 0x0804B164
    goto __imp__getgrgid;
}

int sleep(int __seconds)
{// addr = 0x0804B174
    goto __imp__sleep;
}

sigaddset()
{// addr = 0x0804B184
    goto __imp__sigaddset;
}

wborder()
{// addr = 0x0804B194
    goto __imp__wborder;
}

int readlink(char* __path, __caddr_t __buf, int __len)
{// addr = 0x0804B1A4
    goto __imp__readlink;
}

inflateInit_()
{// addr = 0x0804B1B4
    goto __imp__inflateInit_;
}

getnameinfo()
{// addr = 0x0804B1C4
    goto __imp__getnameinfo;
}

char* strcat(char* __dest, char* __src)
{// addr = 0x0804B1D4
    goto __imp__strcat;
}

__caddr_t getcwd(__caddr_t __buf, int __size)
{// addr = 0x0804B1E4
    goto __imp__getcwd;
}

define_key()
{// addr = 0x0804B1F4
    goto __imp__define_key;
}

int vasprintf(char** p1, char* format, _G_va_list vals)
{// addr = 0x0804B204
    goto __imp__vasprintf;
}

assume_default_colors()
{// addr = 0x0804B214
    goto __imp__assume_default_colors;
}

int puts(char* str)
{// addr = 0x0804B224
    goto __imp__puts;
}

int fork()
{// addr = 0x0804B234
    goto __imp__fork;
}

__builtin_va_list textdomain(char* __domainname)
{// addr = 0x0804B244
    goto __imp__textdomain;
}

tcsetattr()
{// addr = 0x0804B254
    goto __imp__tcsetattr;
}

wattr_off()
{// addr = 0x0804B264
    goto __imp__wattr_off;
}

int sscanf(char* string, char* format)
{// addr = 0x0804B274
    goto __imp__sscanf;
}

int getgroups(int __size, short* __list)
{// addr = 0x0804B284
    goto __imp__getgroups;
}

int strncmp(char* __s1, char* __s2, int __n)
{// addr = 0x0804B294
    goto __imp__strncmp;
}

wnoutrefresh()
{// addr = 0x0804B2A4
    goto __imp__wnoutrefresh;
}

gzread()
{// addr = 0x0804B2B4
    goto __imp__gzread;
}

_IO_putc()
{// addr = 0x0804B2C4
    goto __imp___IO_putc;
}

char* strpbrk(char* __s, char* __accept)
{// addr = 0x0804B2D4
    goto __imp__strpbrk;
}

int pipe(int* __pipedes)
{// addr = 0x0804B2E4
    goto __imp__pipe;
}

int fread(_G_va_list dst, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x0804B2F4
    goto __imp__fread;
}

closelog()
{// addr = 0x0804B304
    goto __imp__closelog;
}

kill()
{// addr = 0x0804B314
    goto __imp__kill;
}

wclear()
{// addr = 0x0804B324
    goto __imp__wclear;
}

getpeername()
{// addr = 0x0804B334
    goto __imp__getpeername;
}

gethostbyname()
{// addr = 0x0804B344
    goto __imp__gethostbyname;
}

int ferror(struct _IO_FILE* fp)
{// addr = 0x0804B354
    goto __imp__ferror;
}

nl()
{// addr = 0x0804B364
    goto __imp__nl;
}

getpwnam()
{// addr = 0x0804B374
    goto __imp__getpwnam;
}

tolower()
{// addr = 0x0804B384
    goto __imp__tolower;
}

noecho()
{// addr = 0x0804B394
    goto __imp__noecho;
}

int strcmp(char* __s1, char* __s2)
{// addr = 0x0804B3A4
    goto __imp__strcmp;
}

wbkgdset()
{// addr = 0x0804B3B4
    goto __imp__wbkgdset;
}

void exit(int __status)
{// addr = 0x0804B3C4
    goto __imp__exit;
}

int pclose(struct _IO_FILE* fp)
{// addr = 0x0804B3D4
    goto __imp__pclose;
}

napms()
{// addr = 0x0804B3E4
    goto __imp__napms;
}

freopen64()
{// addr = 0x0804B3F4
    goto __imp__freopen64;
}

wattr_on()
{// addr = 0x0804B404
    goto __imp__wattr_on;
}

short geteuid()
{// addr = 0x0804B414
    goto __imp__geteuid;
}

L0804B460(_unknown_ __esi)
{
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t7;
    _unknown_ _t10;
    _unknown_ _t11;

    if( *135967904 != 0) {
        return ;
    }
    __edx =  *135967908;
    _t9 = 4 >> 2;
    __ebx = (4 >> 2) - 1;
    if(__edx >= __ebx) {
L4:
         *135967904 = 1;
        return;
    } else {
        while(1) {
L3:
            _t9 = __edx + 1;
             *135967908 = _t9;
             *((intOrPtr*)(135872260 + _t9 * 4))();
            __edx =  *135967908;
            if(__edx >= __ebx) {
                break;
            }
        }
        goto L4;
    }
    return;
}

L0804B4C0()
{
    _unknown_ __ebp;

    __eax =  *135872268;
    if( *135872268 == 0) {
        return ;
    }
    __eax = 0;
    if(__eax == 0) {
        return ;
    }
     *__esp = 135872268;
     *__eax();
    return;
}

cleanup_sig(int sig)
{// addr = 0x0804B4E4
    int _v20;
    char* _v24;
    _unknown_ __ebp;
    char* _t13;
    _unknown_ _t14;

    _v24 = 1;
     *__esp = 1;
    signal();
    _v24 = 1;
     *__esp = 2;
    signal();
    _v24 = 1;
     *__esp = 15;
    signal();
    _t12 = traversal & 255;
    if((traversal & 255 & 4294967295) != 0) {
        dump_traversal_history();
    }
    if(sig == 1) {
        cleanup_files();
    } else {
        _t12 = dump_output_immediately & 255;
        if((dump_output_immediately & 255 & 4294967295) == 0) {
            cleanup();
        }
        if(sig != 0) {
            _t13 = gettext("Exiting via interrupt:");
            _v20 = sig;
            _v24 = _t13;
            printf("\n\n%s %d\n\n");
            fflush(__imp__stdout);
        }
    }
    if(sig == 0) {
        reset_signals();
        return;
    }
    exit_immediately(0);
    return;
}

cleanup_files()
{// addr = 0x0804B5A4
    _unknown_ __ebp;
    _unknown_ _t3;

    LYCleanupTemp();
    if(lynx_temp_space == 0) {
        return ;
    }
    free(lynx_temp_space);
    lynx_temp_space = 0;
    return;
}

cleanup()
{// addr = 0x0804B5D1
    intOrPtr _v8;
    _unknown_ __ebp;

    _v8 = 1;
     *__esp = 1;
    signal();
    _v8 = 1;
     *__esp = 15;
    signal();
    _v8 = 1;
     *__esp = 2;
    signal();
    if((LYCursesON & 255 & 4294967295) != 0) {
        LYmove(LYlines - 1, 0);
        LYclrtoeol();
        lynx_stop_all_colors();
        LYrefresh();
        stop_curses();
    }
    if((persistent_cookies & 255 & 4294967295) != 0) {
        LYStoreCookies(LYCookieSaveFile);
    }
    cleanup_files();
    LYCloseTracelog();
    return;
}

BOOLEAN LYVersionIsRelease()
{// addr = 0x0804B670
    _unknown_ __ebp;

    return 0;
}

const char* LYVersionStatus()
{// addr = 0x0804B67A
    char* _v8;
    _unknown_ __ebp;
    _unknown_ _t5;

    if((LYVersionIsRelease() & 4294967295) == 0) {
        _v8 = gettext("development version");
        return _v8;
    }
    _v8 = gettext("latest release");
    return _v8;
}

const char* LYVersionDate()
{// addr = 0x0804B6AE
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t3;

    LYstrncpy( &temp, "14 Dec 2008 16:24:56 -0800", 11);
    return  &temp;
}

dt_String(FILE* fp, const char* label, const char* value)
{// addr = 0x0804B6D7
    int have;
    int need;
    char* the_label;
    char* the_value;
    int _v8;
    int _v12;
    void* _v16;
    void* _v20;
    void* _v32;
    void* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t47;
    _unknown_ _t50;
    _unknown_ _t59;
    _unknown_ _t62;
    _unknown_ _t65;
    _unknown_ _t69;
    _unknown_ _t71;

    _v16 = 0;
    _v20 = 0;
    HTSACopy( &_v16, label);
    HTSACopy( &_v20, value);
    _v8 = strlen(_v16);
    _v12 = LYstrExtent(_v16, _v8, label_columns);
    LYEntify( &_v16, 1);
    LYEntify( &_v20, 1);
    fwrite("<dt>", 1, 4, fp);
    while(1) {
        _v12 = _v12 + 1;
        if((label_columns & 4294967295) == 0) {
            break;
        }
        fwrite("&nbsp;", 1, 6, fp);
    }
    _v32 = _v20;
    _v36 = _v16;
    fprintf(fp, "<em>%s</em> %s\n");
    if(_v16 != 0) {
        free(_v16);
        _v16 = 0;
    }
    if(_v20 == 0) {
        return ;
    }
    free(_v20);
    _v20 = 0;
    return;
}

dt_Number(FILE* fp0, const char* label, long int number, const char* units)
{// addr = 0x0804B811
    char* value;
    void* _v8;
    const char* _v32;
    long int _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t19;
    _unknown_ _t25;

    _v8 = 0;
    _v32 = units;
    _v36 = number;
    HTSprintf( &_v8, "%ld %s");
    dt_String(fp0, label, _v8);
    if(_v8 == 0) {
        return ;
    }
    free(_v8);
    _v8 = 0;
    return;
}

int LYShowInfo(DocInfo* doc, DocInfo* newdoc, char* owner_address)
{// addr = 0x0804B873
    int url_type;
    FILE* fp0;
    char* Title;
    const char* cp;
    char* temp;
    BOOLEAN LYInfoAdvanced;
    struct stat dir_info;
    const char* name;
    char* last_slash;
    int next_to_last;
    char[79] modes;
    char[1023] buf;
    int buf_size;
    LYUCcharset* p_in;
    int method;
    char* enctype;
    intOrPtr _v16;
    char _v94;
    char _v95;
    char _v96;
    char _v1120;
    signed int _v1121;
    union  _v1128;
    struct _IO_FILE* _v1132;
    void* _v1136;
    const char* _v1140;
    void* _v1144;
    const char* _v1148;
    char* _v1152;
    intOrPtr _v1156;
    int _v1160;
    LYUCcharset* _v1164;
    intOrPtr _v1168;
    const char* _v1172;
    _unknown_ _v1220;
    long int _v1224;
    int _v1240;
    int _v1244;
    signed int _v1252;
    char _v1268;
    DocInfo* _v1280;
    DocInfo* _v1284;
    char* _v1288;
    const char* _v1292;
    const char* _v1296;
    char* _v1300;
    char* _v1304;
    char* _v1308;
    char* _v1312;
    char* _v1316;
    char _v1320;
    char _v1324;
    char* _v1328;
    char* _v1332;
    const char* _v1336;
    int _v1340;
    const char* _v1348;
    char* _v1352;
    char _v1356;
    char* _v1360;
    int _v1364;
    char* _v1368;
    _unknown_ __ebx;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t607;
    _unknown_ _t610;
    const char* _t619;
    _unknown_ _t621;
    _unknown_ _t623;
    _unknown_ _t627;
    _unknown_ _t635;
    const char* _t655;
    long int _t656;
    _unknown_ _t664;
    _unknown_ _t673;
    _unknown_ _t677;
    int _t680;
    _unknown_ _t682;
    _unknown_ _t685;
    const char* _t688;
    _unknown_ _t700;
    _unknown_ _t731;
    _unknown_ _t766;
    _unknown_ _t775;
    _unknown_ _t778;
    _unknown_ _t781;
    _unknown_ _t784;
    _unknown_ _t787;
    char* _t795;
    _unknown_ _t797;
    const char* _t810;
    long int _t811;
    const char* _t822;
    _unknown_ _t859;
    _unknown_ _t865;
    const char* _t873;
    _unknown_ _t877;
    _unknown_ _t885;
    _unknown_ _t896;
    char* _t903;
    _unknown_ _t912;
    const char* _t928;
    const char* _t932;
    const char* _t936;
    _unknown_ _t940;
    _unknown_ _t943;
    _unknown_ _t975;
    _unknown_ _t978;
    _unknown_ _t984;
    _unknown_ _t990;
    _unknown_ _t994;
    _unknown_ _t998;
    _unknown_ _t1002;
    _unknown_ _t1008;
    _unknown_ _t1014;
    _unknown_ _t1018;
    _unknown_ _t1022;
    _unknown_ _t1026;
    _unknown_ _t1032;
    _unknown_ _t1038;
    _unknown_ _t1042;
    _unknown_ _t1046;
    _unknown_ _t1050;
    const char* _t1051;
    _unknown_ _t1063;
    _unknown_ _t1069;
    _unknown_ _t1072;
    _unknown_ _t1075;
    int* _t1078;
    struct _IO_FILE* _t1079;
    _unknown_ _t1080;
    _unknown_ _t1082;
    _unknown_ _t1163;
    _unknown_ _t1198;
    FILE* _t1225;

    _v1280 = doc;
    _v1284 = newdoc;
    _v1288 = owner_address;
    _v16 =  *gs:0x14];
    _v1136 = 0;
    _v1144 = 0;
    _v1121 = user_mode & 4294967295;
    if((LYReuseTempfiles & 255 & 4294967295) == 0) {
        LYRemoveTemp( &tempfile);
        _v1132 = LYOpenTemp( &tempfile, ".html", "w");
    } else {
        _v1132 = LYOpenTempRewrite( &tempfile, ".html", "w");
    }
    _t1225 = _v1132;
    if(_t1225 != 0) {
        LYLocalFileToURL( &(_v1284->address),  &tempfile);
        if(nlinks > 0 &&  *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links) != 0) {
            _v1128 = is_url( *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links));
            if(_v1128 != 0) {
                if(_v1128 == 26 || _v1128 == 27) {
                    _v1152 = strrchr( *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links), 47);
                    _v1156 = strlen( *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links)) - 1;
                    if(_v1152 -  *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links) == _v1156) {
                         *( *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links) + _v1156) = 0;
                    }
                }
            }
        }
        label_columns = 9;
        WriteInternalTitle(_v1132, gettext("Information about the current document"));
        _v1336 = LYVersionStatus();
        if((LYVersionIsRelease() & 4294967295) == 0) {
            _v1332 = "http://lynx.isc.org/current/";
        } else {
            _v1332 = "http://lynx.isc.org/";
        }
        _t619 = LYVersionDate();
        _v1348 = _v1336;
        _v1352 = _v1332;
        _v1356 = _t619;
        _v1360 = "2.8.7dev.11";
        _v1364 = "Lynx";
        fprintf(_v1132, "<h1>%s %s (%s) (<a href="%s">%s</a>)");
        fwrite("</h1>\n", 1, 6, _v1132);
        if((lynx_edit_mode & 255 & 4294967295) == 0) {
L71:
            _v1364 = gettext("File that you are currently viewing");
            fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
            LYformTitle( &_v1136,  *_v1280);
            if(( *(_v1280 + 20) & 255 & 4294967295) == 0 || strstr(_v1136, " (HEAD)") != 0 || strstr(_v1136, " - HEAD") != 0) {
                _v1328 = 135568388;
            } else {
                _v1328 = " (HEAD)";
            }
            _v1360 = _v1328;
            _v1364 = _v1136;
            HTSprintf( &_v1144, "%s%s");
            dt_String(_v1132, gettext("Linkname:"), _v1144);
            if(_v1144 != 0) {
                free(_v1144);
                _v1144 = 0;
            }
            dt_String(_v1132, "URL:", _v1280->address);
            if(HTLoadedDocumentCharset() == 0) {
                _v1164 = HTAnchor_getUCInfoStage(HTMainAnchor, 1);
                if(_v1164 == 0 || _v1164->MIMEname == 0 || (_v1164 & 255 & 4294967295) == 0 || HTAnchor_getUCLYhndl(HTMainAnchor, 1) < 0) {
                    _v1164 = HTAnchor_getUCInfoStage(HTMainAnchor, 0);
                }
                if(_v1164 != 0 && _v1164->MIMEname != 0 && ( *(_v1164->MIMEname) & 255 & 4294967295) != 0 && HTAnchor_getUCLYhndl(HTMainAnchor, 0) < 0) {
                    _v1360 = gettext("(assumed)");
                    _v1364 = _v1164->MIMEname;
                    HTSprintf( &_v1144, "%s %s");
                    dt_String(_v1132, gettext("Charset:"), _v1164->MIMEname);
                    if(_v1144 != 0) {
                        free(_v1144);
                        _v1144 = 0;
                    }
                }
            } else {
                _t873 = HTLoadedDocumentCharset();
                dt_String(_v1132, gettext("Charset:"), _t873);
            }
            _v1140 = HText_getServer();
            if(_v1140 != 0 && ( *_v1140 & 255 & 4294967295) != 0) {
                dt_String(_v1132, gettext("Server:"), _v1140);
            }
            _v1140 = HText_getDate();
            if(_v1140 != 0 && ( *_v1140 & 255 & 4294967295) != 0) {
                dt_String(_v1132, gettext("Date:"), _v1140);
            }
            _v1140 = HText_getLastModified();
            if(_v1140 != 0 && ( *_v1140 & 255 & 4294967295) != 0) {
                dt_String(_v1132, gettext("Last Mod:"), _v1140);
            }
            if(_v1121 != 0) {
                if(HTMainAnchor != 0 && HTMainAnchor->expires != 0) {
                    dt_String(_v1132, gettext("Expires:"), HTMainAnchor->expires);
                }
                if(HTMainAnchor != 0 && HTMainAnchor->cache_control != 0) {
                    dt_String(_v1132, gettext("Cache-Control:"), HTMainAnchor->cache_control);
                }
                if(HTMainAnchor == 0 || HTMainAnchor->content_length <= 0) {
                    _t810 = gettext("bytes");
                    _t811 = HText_getNumOfBytes();
                    dt_Number(_v1132, gettext("Length:"), _t811, _t810);
                } else {
                    _t822 = gettext("bytes");
                    dt_Number(_v1132, gettext("Content-Length:"), HTMainAnchor->content_length, _t822);
                }
                if(HTMainAnchor != 0 && HTMainAnchor->content_language != 0) {
                    dt_String(_v1132, gettext("Language:"), HTMainAnchor->content_language);
                }
            }
            if(_v1280->post_data != 0) {
                if(_v1280->post_data == 0) {
                    _v1324 = 0;
                } else {
                    _v1324 = _v1280->post_data->str;
                }
                if(_v1280->post_data == 0) {
                    _v1320 = 0;
                } else {
                    _v1320 = _v1280->post_data->len;
                }
                _t795 = gettext("Post Data:");
                _v1356 = _v1324;
                _v1360 = _v1320;
                _v1364 = _t795;
                fprintf(_v1132, "<dt><em>%s</em> <xmp>%.*s</xmp>\n");
                dt_String(_v1132, gettext("Post Content Type:"), _v1280->post_content_type);
            }
            if(_v1288 != 0) {
                _v1316 = _v1288;
            } else {
                _v1316 = gettext("None");
            }
            dt_String(_v1132, gettext("Owner(s):"), _v1316);
            _t655 = gettext("lines");
            _t656 = HText_getNumOfLines();
            dt_Number(_v1132, gettext("size:"), _t656, _t655);
            if((lynx_mode & 255 & 4294967295) != 2) {
                if(HTisDocumentSource() == 0) {
                    _v1308 = gettext("normal");
                } else {
                    _v1308 = gettext("source");
                }
                _v1312 = _v1308;
            } else {
                _v1312 = gettext("forms mode");
            }
            HTSACopy( &_v1144, _v1312);
            if(( *(_v1280 + 21) & 255 & 4294967295) != 0) {
                HTSACat( &_v1144, gettext(", safe"));
            }
            if(( *(_v1280 + 32) & 255 & 4294967295) != 0) {
                HTSACat( &_v1144, gettext(", via internal link"));
            }
            if(_v1121 != 0) {
                if((HText_hasNoCacheSet(HTMainText) & 4294967295) != 0) {
                    HTSACat( &_v1144, gettext(", no-cache"));
                }
                if((HTAnchor_isISMAPScript(HTMainAnchor) & 4294967295) != 0) {
                    HTSACat( &_v1144, gettext(", ISMAP script"));
                }
                if(_v1280->bookmark != 0) {
                    HTSACat( &_v1144, gettext(", bookmark file"));
                }
            }
            dt_String(_v1132, gettext("mode:"), _v1144);
            if(_v1144 != 0) {
                free(_v1144);
                _v1144 = 0;
            }
            fwrite("\n</dl>\n", 1, 7, _v1132);
            if(nlinks <= 0) {
                _v1364 = gettext("No Links on the current page");
                fprintf(_v1132, "<h2>%s</h2>");
            } else {
                _v1364 = gettext("Link that you currently have selected");
                fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
                _t688 = LYGetHiliteStr(_v1280->link, 0);
                dt_String(_v1132, gettext("Linkname:"), _t688);
                if((lynx_mode & 255 & 4294967295) != 2 ||  *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026816)) != 1) {
                    if( *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links) == 0) {
                        _v1292 = 135568388;
                    } else {
                        _v1292 =  *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links);
                    }
                    dt_String(_v1132, "URL:", _v1292);
                } else {
                    if( *((intOrPtr*)( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 52)) != 0) {
                        _v1168 =  *((intOrPtr*)( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 52));
                        _v1172 =  *( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 56);
                        if(_v1168 == 2) {
                            _v1304 = "POST";
                        } else {
                            if(_v1168 != 3) {
                                _v1300 = "GET";
                            } else {
                                _v1300 = "(email)";
                            }
                            _v1304 = _v1300;
                        }
                        dt_String(_v1132, gettext("Method:"), _v1304);
                        if(_v1172 == 0 || ( *_v1172 & 255 & 4294967295) == 0) {
                            _v1296 = "application/x-www-form-urlencoded";
                        } else {
                            _v1296 = _v1172;
                        }
                        dt_String(_v1132, gettext("Enctype:"), _v1296);
                    }
                    if( *( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 48) != 0) {
                        dt_String(_v1132, gettext("Action:"),  *( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 48));
                    }
                    if( *((intOrPtr*)( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 52)) == 0 ||  *( *((intOrPtr*)((_v1280->link << 2) + (_v1280->link << 2 << 4) + 136026848)) + 48) == 0) {
                        _v1364 = gettext("(Form field)");
                        fprintf(_v1132, "<dt>&nbsp;%s\n");
                    }
                }
                fwrite("\n</dl>\n", 1, 7, _v1132);
            }
            goto L170;
        }
        if(nlinks <= 0) {
            goto L71;
        } else {
            _v1364 = gettext("Directory that you are currently viewing");
            fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
            _v1144 = HTnameOfFile_WWW(_v1280->address, 0, 1);
            dt_String(_v1132, gettext("Name:"), _v1144);
            if(_v1144 != 0) {
                free(_v1144);
                _v1144 = 0;
            }
            dt_String(_v1132, gettext("URL:"), _v1280->address);
            fwrite("\n</dl>\n", 1, 7, _v1132);
            _v1144 = HTnameOfFile_WWW( *((_v1280->link << 2) + (_v1280->link << 2 << 4) +  &links), 0, 1);
            _t903 =  &_v1268;
            L081497A0(_v1144, _t903);
            if(_t903 != 255) {
                label_columns = 16;
                if((_v1252 & 61440) != 16384) {
                    if((_v1252 & 61440) != 32768) {
                        if((_v1252 & 61440) != 40960) {
                            _v1364 = gettext("Item that you have currently selected");
                            fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
                        } else {
                            _v1364 = gettext("Symbolic link that you have currently selected");
                            fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
                        }
                    } else {
                        _v1364 = gettext("File that you have currently selected");
                        fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
                    }
                } else {
                    _v1364 = gettext("Directory that you have currently selected");
                    fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
                }
                dt_String(_v1132, gettext("Full name:"), _v1144);
                if((_v1252 & 61440) == 40960) {
                    _v1160 = readlink(_v1144,  &_v1120, 1023);
                    if(_v1160 == 255) {
                        _v1360 = gettext("Unable to follow link");
                        _v1364 = 1023;
                        sprintf( &_v1120, "%.*s");
                    } else {
                         *(__ebp + _v1160 + -1116) = 0;
                    }
                    dt_String(_v1132, gettext("Points to file:"),  &_v1120);
                }
                _v1148 = HTAA_UidToName(_v1244);
                if(( *_v1148 & 255 & 4294967295) != 0) {
                    dt_String(_v1132, gettext("Name of owner:"), _v1148);
                }
                _v1148 = HTAA_GidToName(_v1240);
                if(( *_v1148 & 255 & 4294967295) != 0) {
                    dt_String(_v1132, gettext("Group name:"), _v1148);
                }
                if((_v1252 & 61440) == 32768) {
                    _t1051 = gettext("(bytes)");
                    dt_Number(_v1132, gettext("File size:"), _v1224, _t1051);
                }
                _t928 =  &_v1268 + 80;
                 *__esp = _t928;
                ctime();
                dt_String(_v1132, gettext("Creation date:"), _t928);
                _t932 =  &_v1268 + 72;
                 *__esp = _t932;
                ctime();
                dt_String(_v1132, gettext("Last modified:"), _t932);
                _t936 =  &_v1268 + 64;
                 *__esp = _t936;
                ctime();
                dt_String(_v1132, gettext("Last accessed:"), _t936);
                fwrite("\n</dl>\n", 1, 7, _v1132);
                label_columns = 9;
                _v1364 = gettext("Access Permissions");
                fprintf(_v1132, "<h2>%s</h2>\n<dl compact>");
                _v96 = 0;
                _v95 = 0;
                _v94 = 0;
                if((_v1252 & 256) != 0) {
                    _v1364 = 7;
                    _v1368 = ", read";
                     *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                    memcpy();
                }
                if((_v1252 & 128) != 0) {
                    _v1364 = 8;
                    _v1368 = ", write";
                     *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                    memcpy();
                }
                if((_v1252 & 64) != 0) {
                    if((_v1252 & 61440) != 16384) {
                        _v1364 = 10;
                        _v1368 = ", execute";
                         *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                        memcpy();
                        if((_v1252 & 2048) != 0) {
                            _v1364 = 9;
                            _v1368 = ", setuid";
                             *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                            memcpy();
                        }
                    } else {
                        _v1364 = 9;
                        _v1368 = ", search";
                         *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                        memcpy();
                    }
                }
                dt_String(_v1132, gettext("Owner:"),  &((char*)( &_v96)[2]));
                _v96 = 0;
                _v95 = 0;
                _v94 = 0;
                if((_v1252 & 32) != 0) {
                    _v1364 = 7;
                    _v1368 = ", read";
                     *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                    memcpy();
                }
                if((_v1252 & 16) != 0) {
                    _v1364 = 8;
                    _v1368 = ", write";
                     *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                    memcpy();
                }
                if((_v1252 & 8) != 0) {
                    if((_v1252 & 61440) != 16384) {
                        _v1364 = 10;
                        _v1368 = ", execute";
                         *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                        memcpy();
                        if((_v1252 & 1024) != 0) {
                            _v1364 = 9;
                            _v1368 = ", setgid";
                             *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                            memcpy();
                        }
                    } else {
                        _v1364 = 9;
                        _v1368 = ", search";
                         *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                        memcpy();
                    }
                }
                dt_String(_v1132, gettext("Group:"),  &((char*)( &_v96)[2]));
                _v96 = 0;
                _v95 = 0;
                _v94 = 0;
                if((_v1252 & 4) != 0) {
                    _v1364 = 7;
                    _v1368 = ", read";
                     *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                    memcpy();
                }
                if((_v1252 & 2) != 0) {
                    _v1364 = 8;
                    _v1368 = ", write";
                     *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                    memcpy();
                }
                if((_v1252 & 1 & 4294967295) != 0) {
                    if((_v1252 & 61440) != 16384) {
                        _v1364 = 10;
                        _v1368 = ", execute";
                         *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                        memcpy();
                        if((_v1252 & 512) != 0) {
                            _v1364 = 9;
                            _v1368 = ", sticky";
                             *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                            memcpy();
                        }
                    } else {
                        _v1364 = 9;
                        _v1368 = ", search";
                         *__esp =  &((char*)( &_v96)[strlen( &_v96)]);
                        memcpy();
                    }
                }
                dt_String(_v1132, gettext("World:"),  &((char*)( &_v96)[2]));
                fwrite("\n</dl>\n", 1, 7, _v1132);
            } else {
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t1078 = __errno_location();
                    _t1079 = TraceFP();
                    _v1360 =  *_t1078;
                    _v1364 = _v1144;
                    fprintf(_t1079, "lstat(%s) failed, errno=%d\n");
                }
                HTAlert(gettext("Failed to obtain status of current link!"));
            }
            if(_v1144 != 0) {
                free(_v1144);
                _v1144 = 0;
            }
L170:
            EndInternalPage(_v1132);
            LYrefresh();
            LYCloseTemp( &tempfile);
            if(_v1136 != 0) {
                free(_v1136);
                _v1136 = 0;
            }
            _v1340 = 0;
            goto L173;
        }
        goto L72;
    } else {
        HTAlert(gettext("Can't open temporary file!"));
        _v1340 = -1;
    }
L173:
    _t680 = _v1340;
    if(_t1225 == 0) {
        return _t680;
    }
    __stack_chk_fail();
    return _t680;
}

BOOLEAN editor_can_position()
{// addr = 0x0804D090
    char* value;
    HTList* p;
    unsigned int n;
    _unknown_ _v8;
    HTList* _v12;
    signed int _v16;
    _unknown_ _v24;
    signed char _v25;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v12 = positionable_editor;
    _v16 = 0;
    while(_v16 <= 10) {
        if(strstr(editor,  *( &table + _v16 * 4)) == 0) {
            _v16 = _v16 + 1;
            continue;
        }
        _v25 = 1;
        return _v25 & 255;
    }
}

int edit_current_file(char* newfile, int cur, int lineno)
{// addr = 0x0804D13D
    int result;
    char* filename;
    char* colon;
    char* number_sign;
    char[79] position;
    intOrPtr _v8;
    char _v88;
    int _v92;
    void* _v96;
    char* _v100;
    char* _v104;
    char* _v120;
    const char* _v124;
    int _v128;
    int _v140;
    int _v144;
    int _v148;
    _unknown_ _v152;
    _unknown_ __ebp;
    _unknown_ _t78;
    _unknown_ _t91;
    _unknown_ _t93;
    int _t101;
    struct _IO_FILE* _t102;
    _unknown_ _t103;
    _unknown_ _t105;
    _unknown_ _t109;
    _unknown_ _t118;
    _unknown_ _t123;
    struct _IO_FILE* _t127;
    _unknown_ _t131;
    _unknown_ _t135;
    _unknown_ _t141;
    signed int _t142;

    _v120 = newfile;
    _v8 =  *gs:0x14];
    _v92 = 0;
    _v96 = 0;
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t127 = TraceFP();
        _v140 = lineno;
        _v144 = cur;
        _v148 = _v120;
        fprintf(_t127, "edit_current_file(newfile=%s, cur=%d, lineno=%d)\n");
    }
    _t142 = LYisLocalFile(_v120) & 4294967295;
    if(_t142 != 0) {
        _v104 = trimPoundSelector(_v120);
        if(strncmp(_v120, "file://localhost/", 16) != 0) {
            _v100 = strchr(_v120, 58);
        } else {
            _v100 =  &(_v120[0x10]);
        }
        HTSACopy( &_v96,  &(_v100[1]));
        HTUnEscape(_v96);
        if((LYCanReadFile(_v96) & 4294967295) != 0) {
L12:
            if(cur < 0) {
                cur = 0;
            }
            _v88 = 0;
            if(nlinks == 0) {
                _v124 = 0;
            } else {
                _v124 =  *((cur << 2) + (cur << 2 << 4) + 136026812);
            }
            lineno = _v124 + lineno;
            if(lineno > 0) {
                _v148 = lineno;
                sprintf( &_v88, "%d");
            }
            edit_temporary_file(_v96,  &_v88, 0);
            _v92 = 1;
            goto L20;
        } else {
            if(_v96 != 0) {
                free(_v96);
                _v96 = 0;
            }
            _v96 = HTParse(_v120, 135569065, 5);
            HTUnEscape(_v96);
            if((LYCanReadFile(_v96) & 4294967295) != 0) {
                goto L12;
            }
            HTAlert(gettext("Could not access file."));
L20:
            if(_v104 != 0) {
                 *_v104 = 35;
            }
            if(_v96 != 0) {
                free(_v96);
                _v96 = 0;
            }
            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                _t102 = TraceFP();
                _v148 = _v92;
                fprintf(_t102, "edit_current_file returns %d\n");
            }
            _v128 = _v92;
L27:
            _t101 = _v128;
            if(_t142 == 0) {
                return _t101;
            }
            __stack_chk_fail();
            return _t101;
        }
    }
    HTUserMsg(gettext("Lynx cannot currently (e)dit remote WWW files."));
    _v128 = 0;
    goto L27;
}

edit_temporary_file(char* filename, const char* position, const char* message)
{// addr = 0x0804D39E
    struct stat stat_info;
    const char* format;
    char* command;
    const char* editor_arg;
    int params;
    int rv;
    int save_err;
    union  __u;
    union  __u;
    union  __u;
    char[79] exitcode;
    union  __u;
    signed int _v12;
    char _v92;
    const char* _v96;
    void* _v100;
    const char* _v104;
    int _v108;
    signed int _v112;
    int _v116;
    signed int _v120;
    signed int _v124;
    signed int _v128;
    int _v132;
    char _v228;
    const char* _v236;
    const char* _v240;
    const char* _v244;
    char* _v248;
    char* _v252;
    int _v256;
    signed int _v260;
    _unknown_ _v264;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t144;
    _unknown_ _t164;
    char* _t165;
    signed int _t168;
    _unknown_ _t170;
    _unknown_ _t172;
    _unknown_ _t193;
    const char* _t198;
    struct _IO_FILE* _t200;
    _unknown_ _t204;
    _unknown_ _t209;
    struct _IO_FILE* _t210;
    _unknown_ _t211;
    _unknown_ _t246;
    _unknown_ _t252;
    void* _t255;

    _v236 = filename;
    _v240 = position;
    _v244 = message;
    _v12 =  *gs:0x14];
    _v96 = "%s %s";
    _v100 = 0;
    _v104 = 135569065;
    _v108 = 1;
    if(strstr(editor, "pico") != 0) {
        _v104 = " -t";
    }
    if((editor_can_position() & 4294967295) == 0 || ( *_v240 & 255 & 4294967295) == 0) {
        _v108 = _v108 + 1;
        HTAddXpand( &_v100, _v96, _v108, editor);
        _v108 = _v108 + 1;
        HTAddParam( &_v100, _v96, _v108, _v236);
        HTEndParam( &_v100, _v96, _v108);
    } else {
        _v96 = "%s +%s%s %s";
        _v108 = _v108 + 1;
        HTAddXpand( &_v100, _v96, _v108, editor);
        _v108 = _v108 + 1;
        HTAddParam( &_v100, _v96, _v108, _v240);
        _v108 = _v108 + 1;
        HTAddParam( &_v100, _v96, _v108, _v104);
        _v108 = _v108 + 1;
        HTAddParam( &_v100, _v96, _v108, _v236);
        HTEndParam( &_v100, _v96, _v108);
    }
    if(_v244 != 0) {
        mustshow = 1;
        statusline(_v244);
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t210 = TraceFP();
        _v260 = _v100;
        fprintf(_t210, "LYEdit: %s\n");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0 && LYTraceLogFP == 0) {
        sleep(MessageSecs);
    }
    stop_curses();
     *(__errno_location()) = 0;
    _v112 = LYSystem(_v100);
    if(_v112 == 0) {
        start_curses();
    } else {
        start_curses();
        _v116 =  *(__errno_location());
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            if(_v116 == 0) {
                _v248 = "reason unknown";
            } else {
                _v248 = strerror(_v116);
            }
            _t200 = TraceFP();
            _v252 = _v248;
            _v256 = _v112;
            _v260 = _v112;
            fprintf(_t200, "ExtEditForm: system() returned %d (0x%x), %s\n");
        }
        LYFixCursesOn("show error warning:");
        if(_v112 != 255) {
            _v120 = _v112;
            if(((_v120 & 127) + 1 & 4294967295) <= 0) {
                _v124 = _v112;
                if((_v124 & 127) != 0) {
L26:
                    HTAlwaysAlert(0, gettext("Error spawning editor, check your editor definition in the options menu"));
                    goto L28;
                }
                goto L24;
            }
            goto L22;
L24:
            _v128 = _v112;
            if((_v128 & 65280) >> 8 == 127) {
                goto L26;
            }
            _v132 = _v112;
            _v260 = (_v132 & 65280) >> 8;
            sprintf( &_v92, "%d");
            HTUserMsg2(gettext("Editor returned with error status %s"),  &_v92);
        } else {
            _t198 = strerror(_v116);
            HTUserMsg2(gettext("Error starting editor, %s"), _t198);
        }
        goto L28;
L22:
        HTAlwaysAlert(0, gettext("Editor killed by signal"));
    }
L28:
    _v260 = _v236;
    HTSprintf0( &_v100, "%s~");
    _t165 =  &_v228;
    L08149760(_v100, _t165);
    if(_t165 == 0) {
        remove(_v100);
    }
    _t255 = _v100;
    if(_t255 != 0) {
        free(_v100);
        _v100 = 0;
    }
    _t168 = _v12 ^  *gs:0x14];
    if(_t255 == 0) {
        return _t168;
    }
    __stack_chk_fail();
    return _t168;
}

int peek_mouse_levent()
{// addr = 0x0804D7BC
    int _v8;
    _unknown_ __ebp;

    if(have_levent <= 0) {
        _v8 = 0;
        return _v8;
    }
     *__esp =  &levent;
    ungetmouse();
    have_levent = have_levent - 1;
    _v8 = 1;
    return _v8;
}

int get_mouse_link()
{// addr = 0x0804D7F9
    int t;
    int _v8;
    _unknown_ __ebp;

    _v8 = mouse_link;
    mouse_link = -1;
    if(_v8 >= 0) {
        return _v8;
    }
    _v8 = -1;
    return _v8;
}

int peek_mouse_link()
{// addr = 0x0804D823
    _unknown_ __ebp;

    return mouse_link;
}

int fancy_mouse(WINDOW* win, int row, int* position)
{// addr = 0x0804D82D
    int cmd;
    MEVENT event;
    int mypos;
    int delta;
    int _v8;
    intOrPtr _v12;
    intOrPtr _v16;
    signed int _v20;
    intOrPtr _v28;
    intOrPtr _v32;
    char _v36;
    signed int _v40;
    signed int _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    intOrPtr _v56;
    signed int _v60;
    signed int _v64;
    intOrPtr _v68;
    int _v72;
    signed int _v76;
    signed int _v80;
    intOrPtr _v84;
    signed int _v88;
    intOrPtr _v92;
    signed int _v96;
    intOrPtr _v100;
    _unknown_ __ebp;

    _v8 = 69;
     *__esp =  &_v36;
    getmouse();
    if((_v20 & 28) == 0) {
        if((_v20 & 114688) != 0) {
            _v8 = 13;
        }
        goto L60;
    }
    _v100 = _v28;
    if(win == 0) {
        _v96 = -1;
    } else {
        asm("cwde ");
        _v96 = win->_begy & 65535;
    }
    _v12 = _v100 - _v96;
    _v16 = _v12 - row;
    _v92 = _v32;
    if(win == 0) {
        _v88 = -1;
    } else {
        asm("cwde ");
        _v88 = win->_begx & 65535;
    }
    if(_v92 < _v88) {
L15:
        if((_v20 & 117440512) == 0) {
            _v72 = 13;
            return _v72;
        }
        goto L17;
    } else {
        _v84 = _v32;
        if(win == 0) {
            _v80 = -1;
        } else {
            asm("cwde ");
            _v80 = win->_begx & 65535;
        }
        if(win == 0) {
            _v76 = -1;
        } else {
            asm("cwde ");
            _v76 = (win->_maxx & 65535) + 1;
        }
        if(_v84 < _v80 + _v76) {
L17:
            _v68 = _v12 + 1;
            if(win == 0) {
                _v64 = -1;
            } else {
                asm("cwde ");
                _v64 = (win->_maxy & 65535) + 1;
            }
            if(_v68 != _v64) {
                if(win == 0) {
                    _v60 = -1;
                } else {
                    asm("cwde ");
                    _v60 = (win->_maxy & 65535) + 1;
                }
                if(_v60 > _v12) {
                    if(_v12 != 0) {
                        if(_v12 >= 0) {
                            _v56 = _v32;
                            if(win == 0) {
                                _v52 = 0;
                            } else {
                                asm("cwde ");
                                _v52 = (win->_begx & 65535) + 1;
                            }
                            if(_v56 <= _v52) {
L54:
                                 *position =  *position + _v16;
                                _v8 = -1;
                                goto L60;
                            } else {
                                _v48 = _v32;
                                if(win == 0) {
                                    _v44 = -1;
                                } else {
                                    asm("cwde ");
                                    _v44 = win->_begx & 65535;
                                }
                                if(win == 0) {
                                    _v40 = -1;
                                } else {
                                    asm("cwde ");
                                    _v40 = (win->_maxx & 65535) + 1;
                                }
                                if(_v48 < _v44 + _v40 - 2) {
                                    goto L55;
                                }
                                goto L54;
                            }
L55:
                            if((_v20 & 117440512) == 0) {
                                 *position =  *position + _v16;
                                _v8 = 39;
                            } else {
                                 *position =  *position + _v16;
                                _v8 = -1;
                            }
                            goto L60;
                        }
                        goto L40;
                    }
                    goto L34;
L40:
                    if((_v20 & 24) == 0) {
                        _v8 = 16;
                    } else {
                        _v8 = 22;
                    }
                } else {
                    if((_v20 & 24) == 0) {
                        _v8 = 15;
                    } else {
                        _v8 = 23;
                    }
                }
                goto L60;
L34:
                if((_v20 & 16) == 0) {
                    if((_v20 & 8) == 0) {
                        _v8 = 26;
                    } else {
                        _v8 = 16;
                    }
                } else {
                    _v8 = 22;
                }
            } else {
                if((_v20 & 16) == 0) {
                    if((_v20 & 8) == 0) {
                        _v8 = 27;
                    } else {
                        _v8 = 15;
                    }
                } else {
                    _v8 = 23;
                }
            }
L60:
            _v72 = _v8;
            return _v72;
        } else {
            goto L15;
        }
    }
}

HTList* whichRecall(RecallType recall)
{// addr = 0x0804DB0A
    HTList** list;
    HTList** _v8;
    HTList* _v24;
    union  _v28;
    _unknown_ __ebp;

    _v28 = recall;
    if(_v28 == 2) {
        _v24 = LYcommandList();
        return _v24;
    }
    if(_v28 == 3) {
        _v8 =  &MAIL_edit_history;
    } else {
        _v8 =  &URL_edit_history;
    }
    if( *_v8 == 0) {
         *_v8 = HTList_new();
    }
    _v24 =  *_v8;
    return _v24;
}

LYRemoveFromCloset(HTList* list)
{// addr = 0x0804DB60
    _Unknown_base* data;
    void* _v8;
    _unknown_ __ebp;
    _unknown_ _t10;

    _v8 = HTList_removeFirstObject(list);
    if(_v8 == 0) {
        return ;
    }
    if(_v8 == 0) {
        return ;
    }
    free(_v8);
    _v8 = 0;
    return;
}

LYCloseCloset(RecallType recall)
{// addr = 0x0804DB94
    HTList* list;
    HTList* _v8;
    _unknown_ __ebp;

    _v8 = whichRecall(recall);
    while(_v8 != 0 && _v8->next != 0) {
        LYRemoveFromCloset(_v8);
    }
}

char* LYFindInCloset(RecallType recall, char* base)
{// addr = 0x0804DBD2
    HTList* list;
    char* data;
    unsigned int len;
    HTList* _v8;
    char* _v12;
    int _v16;
    struct _HTList _v28;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = whichRecall(recall);
    _v16 = strlen(base);
    while(_v8 != 0 && _v8->next != 0) {
        if(_v8 == 0) {
L4:
            _v28 = 0;
            goto L5;
        }
        _v8 = _v8->next;
        if(_v8 == 0) {
            goto L4;
        }
        _v28 =  *_v8;
L5:
        _v12 = _v28;
        if(strncmp(base, _v12, _v16) != 0) {
            continue;
        }
        _v28.next = _v12;
        return _v28.next;
    }
}

LYAddToCloset(RecallType recall, char* str)
{// addr = 0x0804DC63
    HTList* list;
    char* data;
    HTList* _v8;
    char* _v12;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t16;

    _v8 = whichRecall(recall);
    _v12 = 0;
    HTSACopy( &_v12, str);
    HTList_addObject(_v8, _v12);
    while(HTList_count(_v8) > 100) {
        LYRemoveFromCloset(_v8);
    }
}

int XYdist(int x1, int y1, int x2, int y2, int dx2)
{// addr = 0x0804DCC1
    int xerr;
    int yerr;
    int _v8;
    signed int _v12;
    int _v24;
    int _v28;
    _unknown_ __ebp;
    _unknown_ _t44;

    _v8 = x2 - x1 + x2 - x1 + x2 - x1;
    _v12 = (y2 - y1 << 3) + y2 - y1;
    if(_v8 < 0) {
        _v8 = x1 - x2 - dx2 + x1 - x2 - dx2 + x1 - x2 - dx2 + 1;
    }
    if(_v8 < 0) {
        _v8 = 0;
    }
    if(_v12 < 0) {
        _v12 =  ~_v12;
    }
    if(_v12 != 0) {
        if(_v8 <= 8 && _v12 != 0) {
            _v12 = _v12 + 9 - _v8;
        }
        _v28 = _v12 + _v8 + _v8;
        return _v28;
    } else {
        if(_v8 <= 0) {
            _v24 = 0;
        } else {
            _v24 = _v8 + _v8 - 1;
        }
        _v28 = _v24;
        return _v28;
    }
}

int set_clicked_link(int x, int y, int code, int clicks)
{// addr = 0x0804DD78
    int left;
    int right;
    int i;
    int c;
    int toolbar;
    int h;
    double frac;
    int l;
    int mouse_err;
    int cur_err;
    int len;
    int lx;
    int is_text;
    int count;
    const char* text;
    int cur_err_2;
    int cury;
    int curx;
    intOrPtr _v16;
    intOrPtr _v20;
    int _v24;
    int _v28;
    int _v32;
    intOrPtr _v36;
    intOrPtr _v40;
    int _v44;
    int _v48;
    int _v52;
    int _v56;
    int _v60;
    int _v64;
    const char* _v68;
    int _v72;
    signed int _v76;
    signed int _v80;
    signed short _v94;
    signed int _v96;
    int _v100;
    signed int _v104;
    signed int _v108;
    int _v112;
    int _v116;
    int _v120;
    int _v124;
    int _v128;
    int _v132;
    int _v136;
    int _v140;
    int _v144;
    int _v148;
    int _v152;
    int _v156;
    _unknown_ _v172;
    _unknown_ _v176;
    _unknown_ _v180;
    _unknown_ _v184;
    _unknown_ _v188;
    _unknown_ __ebx;
    _unknown_ __ebp;
    int _t351;

    _v16 = 6;
    _v20 = LYcols - (LYShowScrollbar & 255 & 4294967295 & ) - 5;
    _v28 = -1;
    if(LYlines - 1 == y || y == 0) {
        if(y != 0) {
L5:
            _v148 = 0;
            goto L6;
        }
        goto L3;
L6:
        _v32 = _v148;
        mouse_link = -2;
        if(x != 0) {
L9:
            if(y != 0 || LYcols - (LYShowScrollbar & 255 & 4294967295 & ) != x) {
L13:
                if(clicks <= 1) {
                    if(_v16 + _v32 <= x) {
L39:
                        if(x <= _v20) {
                            if(y == 0) {
                                _v28 = 2064;
                            } else {
                                _v28 = 2063;
                            }
                            goto L134;
                        }
                        goto L40;
                    }
                    goto L30;
L40:
                    if(code != 3) {
L43:
                        _v128 = 2084;
                        goto L44;
                    }
                    if(y == 0) {
                        goto L43;
                    } else {
                        _v128 = 258;
                    }
L44:
                    _v28 = _v128;
                    goto L134;
                }
                goto L14;
L30:
                if(code != 3) {
L32:
                    if(s_forw_backw == 255) {
L35:
                        _v132 = 2085;
                        goto L36;
                    }
                    goto L33;
L36:
                    _v136 = _v132;
                    goto L38;
                }
                if(y != 0) {
                    _v136 = 259;
L38:
                    _v28 = _v136;
                    goto L134;
                }
                goto L32;
L33:
                if(x - _v32 <= 2) {
                    goto L35;
                } else {
                    _v132 = 2086;
                }
                goto L36;
            } else {
                if(s_hot_paste == 255) {
                    goto L13;
                } else {
                    _v28 = 2151;
                }
                goto L134;
            }
L14:
            if(_v16 + _v32 <= x) {
                if(x <= _v20) {
                    if(y == 0) {
                        _v28 = 2070;
                    } else {
                        _v28 = 2071;
                    }
                    goto L134;
                }
                goto L21;
            }
            if(code != 3) {
L18:
                _v144 = 2096;
                goto L19;
            }
            if(y == 0) {
                goto L18;
            } else {
                _v144 = 262;
            }
L19:
            _v28 = _v144;
            goto L134;
L21:
            if(code != 3) {
L24:
                _v140 = 2109;
                goto L25;
            }
            if(y == 0) {
                goto L24;
            } else {
                _v140 = 263;
            }
L25:
            _v28 = _v140;
            goto L134;
        }
        if(_v32 == 0) {
            goto L9;
        } else {
            _v28 = 2122;
        }
        goto L134;
    } else {
        if(LYcols - 1 != x || (LYShowScrollbar & 255 & 4294967295) == 0) {
L70:
            _v44 = 29;
            _v24 = 0;
L120:
            while(_v24 < nlinks) {
                goto L71;
            }
        } else {
            if(LYsb_begin < 0) {
                _v124 = display_lines;
                if((LYsb_arrow & 255 & 4294967295) == 0) {
                    _v120 = 0;
                } else {
                    _v120 = 2;
                }
                _v36 = _v124 - _v120;
                mouse_link = -2;
                if((LYsb_arrow & 255 & 4294967295) == 0) {
                    _v116 = 1;
                } else {
                    _v116 = 2;
                }
                y = y - _v116;
                if(y < 0) {
                    _v112 = 2065;
                    return _v112;
                }
                if(y >= _v36) {
                    _v112 = 2066;
                    return _v112;
                }
                if(clicks > 1) {
                    asm("fild dword [ebp+0xc]");
                    _push(_v36 - 1);
                    asm("fild dword [esp]");
                    asm("fdivp st1, st0");
                    asm("fstp qword [ebp-0x58]");
                    _v40 = HText_getNumOfLines() + 1;
                    _v40 = _v40 - display_lines;
                    if(_v40 > 0) {
                        asm("fild dword [ebp-0x24]");
                        asm("fmul qword [ebp-0x58]");
                        asm("fld1 ");
                        asm("faddp st1, st0");
                        asm("fld qword [0x814bda0]");
                        asm("faddp st1, st0");
                        asm("fnstcw word [ebp-0x5a]");
                        _v96 = _v94 & 65535 & 4294967295;
                        asm("fldcw word [ebp-0x5c]");
                        asm("fistp dword [ebp-0x60]");
                        asm("fldcw word [ebp-0x5a]");
                        LYSetNewline(_v100);
                    }
                    _v112 = LYReverseKeymap(69);
                    return _v112;
                }
                if(y < LYsb_begin) {
                    _v112 = 2064;
                    return _v112;
                }
                if(y < LYsb_end) {
                    mouse_link = -1;
L134:
                    _v112 = _v28;
                    return _v112;
                } else {
                    _v112 = 2063;
                    return _v112;
                }
            }
            goto L70;
        }
L71:
        _v56 =  *((_v24 << 2) + (_v24 << 2 << 4) + 136026808);
        _v60 = 0;
        _v64 = 0;
        _v68 = LYGetHiliteStr(_v24, _v64);
        if( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026816)) == 1 && ( *((intOrPtr*)( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 8)) == 1 ||  *((intOrPtr*)( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 8)) == 12 ||  *((intOrPtr*)( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 8)) == 2 ||  *((intOrPtr*)( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 8)) == 11 ||  *((intOrPtr*)( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 8)) == 9)) {
            _v60 = 1;
        }
        if(_v68 == 0) {
L119:
            _v24 = _v24 + 1;
        } else {
            if(_v60 == 0) {
                _v52 = strlen(_v68);
            } else {
                _v52 =  *( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 20);
            }
            _v48 = XYdist(x, y,  *((_v24 << 2) + (_v24 << 2 << 4) + 136026808),  *((_v24 << 2) + (_v24 << 2 << 4) + 136026812), _v52);
            while(_v48 > 0) {
                _v64 = _v64 + 1;
                _v68 = LYGetHiliteStr(_v24, _v64);
                if(_v68 != 0) {
                    _t351 = strlen(_v68);
                    _v72 = XYdist(x, y, LYGetHilitePos(_v24, _v64),  *((_v24 << 2) + (_v24 << 2 << 4) + 136026812) + _v64, _t351);
                    _v156 = _v72;
                    _v152 = _v48;
                    if(_v152 > _v156) {
                        _v152 = _v156;
                    }
                    _v48 = _v152;
                    continue;
                }
                if(_v48 > 0 && _v60 != 0) {
                    _v48 = _v48 - 1;
                }
                if(_v48 != 0) {
                    if(_v48 < _v44) {
                        _v44 = _v48;
                        mouse_link = _v24;
                    }
                    goto L119;
                } else {
                    if(LYwin == 0) {
                        _v108 = -1;
                    } else {
                        asm("cwde ");
                        _v108 = LYwin->_cury & 65535;
                    }
                    _v76 = _v108;
                    if(LYwin == 0) {
                        _v104 = -1;
                    } else {
                        asm("cwde ");
                        _v104 = LYwin->_curx & 65535;
                    }
                    _v80 = _v104;
                    if(clicks <= 1 || _v60 == 0 ||  *((intOrPtr*)( *((intOrPtr*)((_v24 << 2) + (_v24 << 2 << 4) + 136026848)) + 8)) != 12) {
                        if(code != 2 || _v76 != y || _v80 < _v56 || _v80 - _v56 > _v52) {
                            if(_v60 != 0) {
                                have_levent = 1;
                            }
                            mouse_link = _v24;
                        } else {
                            mouse_link = -1;
                        }
                        _v44 = 0;
                    } else {
                        if(code != 2 || _v76 != y || _v80 < _v56 || _v80 - _v56 > _v52) {
                            _v28 = 2088;
                            mouse_link = _v24;
                        } else {
                            _v28 = 2088;
                            mouse_link = -1;
                        }
                        _v44 = 0;
                    }
                    if(mouse_link >= 0) {
                        if(y + y <= LYlines) {
                            if(0 + y * 4 >= LYlines) {
                                _v28 = 2065;
                            } else {
                                _v28 = 2067;
                            }
                        } else {
                            if(0 + y * 4 >= LYlines + LYlines + LYlines) {
                                _v28 = 2068;
                            } else {
                                _v28 = 2066;
                            }
                        }
                    } else {
                        if(_v44 != 0) {
                            if(_v44 < 0) {
                                _v28 = 2132;
                            }
                        } else {
                            if(_v28 == 255) {
                                _v28 = 2087;
                            }
                        }
                    }
                    goto L134;
                }
            }
        }
        goto L120;
    }
L3:
    if((HText_hasToolbar(HTMainText) & 4294967295) == 0) {
        goto L5;
    } else {
        _v148 = 1;
    }
    goto L6;
}

char* LYstrncpy(char* dst, const char* src, int n)
{// addr = 0x0804E53C
    char* val;
    int len;
    char* _v8;
    int _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    if(src == 0) {
        src = 135569408;
    }
    _v12 = strlen(src);
    if(n < 0) {
        n = 0;
    }
    _v8 = strncpy(dst, src, n);
    if(_v12 >= n) {
        dst[n] = 0;
        return _v8;
    }
    dst[_v12] = 0;
    return _v8;
}

char* LYmbcsstrncpy(char* dst, const char* src, int n_bytes, int n_glyphs, BOOLEAN utf_flag)
{// addr = 0x0804E5A7
    char* val;
    int i_bytes;
    int i_glyphs;
    char* _v8;
    char _v12;
    signed int _v16;
    signed int _v24;
    char* _v28;
    _unknown_ __ebp;

    _v24 = utf_flag & 4294967295;
    _v8 = dst;
    _v12 = 0;
    _v16 = 0;
    if(n_bytes < 0) {
        n_bytes = 0;
    }
    if(n_glyphs < 0) {
        n_glyphs = 0;
    }
    while(( *src & 255 & 4294967295) != 0 && _v12 < n_bytes) {
        if(_v24 != 0 && ( *src & 255 & 4294967295 &  & 192) != 128) {
            _v16 = _v16 + 1;
            if((_v16 & 4294967295) == 0) {
                goto L8;
            } else {
                 *dst = 0;
                _v28 = _v8;
                return _v28;
            }
        }
L8:
         *dst =  *src & 255 & 4294967295;
        dst =  &(dst[1]);
        src =  &(src[1]);
        _v12 = _v12 + 1;
    }
}

const char* LYmbcs_skip_glyphs(const char* data, int n_glyphs, BOOLEAN utf_flag)
{// addr = 0x0804E657
    int i_glyphs;
    signed int _v8;
    signed int _v24;
    _unknown_ __ebp;
    signed int _t37;

    _v24 = utf_flag & 4294967295;
    _v8 = 0;
    if(n_glyphs < 0) {
        n_glyphs = 0;
    }
    if(data == 0) {
        return data;
    }
    _t37 =  *data & 255;
    if((_t37 & 4294967295) == 0) {
        return data;
    }
    if(_v24 != 0) {
        while(( *data & 255 & 4294967295) != 0) {
            if(_v24 != 0 && ( *data & 255 & 4294967295 &  & 192) != 128) {
                _v8 = _v8 + 1;
                if((_v8 & 4294967295) != 0) {
                    return data;
                }
            }
            data =  &(data[1]);
        }
    } else {
        while(1) {
            n_glyphs = n_glyphs - 1;
            if((_t37 & 4294967295) == 0) {
                break;
            } else {
                data =  &(data[1]);
                _t37 =  *data & 255;
                if((_t37 & 4294967295) == 0) {
                    return data;
                }
                continue;
            }
        }
        return data;
    }
    return data;
}

const char* LYmbcs_skip_cells(const char* data, int n_cells, BOOLEAN utf_flag)
{// addr = 0x0804E6ED
    const char* result;
    int actual;
    int target;
    const char* _v8;
    int _v12;
    int _v16;
    char _v24;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v24 = utf_flag & 4294967295;
    _v16 = n_cells;
    while(1) {
        _v16 = _v16 - 1;
        _v8 = LYmbcs_skip_glyphs(data, _v16, _v24);
        _v12 = LYstrExtent2(data, _v8 - data);
        if(_v12 <= 0) {
            break;
        }
        if(_v12 <= n_cells) {
            return _v8;
        }
    }
    return _v8;
}

int LYmbcsstrlen(const char* str, BOOLEAN utf_flag, BOOLEAN count_gcells)
{// addr = 0x0804E751
    int i;
    int j;
    int len;
    int _v8;
    _unknown_ _v12;
    int _v16;
    signed int _v24;
    signed int _v28;
    _unknown_ __ebp;

    _v24 = utf_flag & 4294967295;
    _v28 = count_gcells & 4294967295;
    _v16 = 0;
    if(str == 0) {
        return _v16;
    }
    if(( *str & 255 & 4294967295) == 0) {
        return _v16;
    }
    if(_v28 != 0) {
        _v16 = LYstrCells(str);
        return _v16;
    }
    _v8 = 0;
    while(1) {
    }
}

ena_csi(BOOLEAN flag)
{// addr = 0x0804E8C9
    signed char _v8;
    _unknown_ __ebp;

    _v8 = flag & 4294967295;
    csi_is_csi = _v8 & 255 & 4294967295;
    return;
}

int lookup_tiname(char* name, const const char** names)
{// addr = 0x0804E8E0
    int code;
    signed int _v8;
    signed int _v24;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = 0;
    while( *(names + (_v8 << 2)) != 0) {
        if(strcmp( *(names + (_v8 << 2)), name) != 0) {
            _v8 = _v8 + 1;
            continue;
        }
        _v24 = _v8;
        return _v24;
    }
}

const char* expand_tiname(const char* first, size_t len, char** result, char* final)
{// addr = 0x0804E934
    char[8191] name;
    int code;
    intOrPtr _v12;
    char _v8204;
    int _v8208;
    char* _v8220;
    char** _v8224;
    char* _v8228;
    _unknown_ _v8244;
    _unknown_ _v8248;
    _unknown_ __ebp;
    _unknown_ _t46;
    _unknown_ _t50;
    const char* _t60;
    _unknown_ _t69;
    _unknown_ _t82;
    const char* _t89;

    _v8220 = first;
    _v8224 = result;
    _v8228 = final;
    _v12 =  *gs:0x14];
    strncpy( &_v8204, _v8220, len);
     *((char*)(__ebp + len + -8200)) = 0;
    _v8208 = lookup_tiname( &_v8204,  &__imp__strnames);
    if(_v8208 >= 0) {
L2:
        _t89 =  *( *((intOrPtr*)(__imp__cur_term + 16)) + (_v8208 << 2));
        if(_t89 != 0) {
            LYstrncpy( *_v8224,  *( *((intOrPtr*)(__imp__cur_term + 16)) + (_v8208 << 2)), _v8228 -  *_v8224);
             *_v8224 =  &(( *_v8224)[strlen( *_v8224)]);
        }
L4:
        _t60 =  &(_v8220[len]);
        if(_t89 == 0) {
            return _t60;
        }
        __stack_chk_fail();
        return _t60;
    }
    _v8208 = lookup_tiname( &_v8204,  &__imp__strfnames);
    if(_v8208 >= 0) {
        goto L4;
    }
    goto L2;
}

const char* expand_tichar(const char* first, char** result, char* final)
{// addr = 0x0804EA7A
    int ch;
    int limit;
    int radix;
    int value;
    const char* name;
    char* last;
    char[79] tmp;
    intOrPtr _v8;
    char _v88;
    signed int _v92;
    int _v96;
    int _v100;
    long _v104;
    const char* _v108;
    char* _v112;
    const char* _v120;
    char** _v124;
    char* _v128;
    signed int _v132;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ __ebp;
    _unknown_ _t73;
    signed int _t78;
    const char* _t93;
    _unknown_ _t99;
    _unknown_ _t103;
    _unknown_ _t119;
    char* _t129;

    _v120 = first;
    _v124 = result;
    _v128 = final;
    _v8 =  *gs:0x14];
    _v96 = 0;
    _v100 = 0;
    _v104 = 0;
    _v108 = 0;
    _v92 =  *_v120 & 255 & 4294967295;
    _v120 =  &(_v120[1]);
    _t78 = _v92 - 69;
    _v132 = _t78;
    if(_v132 <= 51) {
        _t78 =  *(135569532 + _v132 * 4);
        goto __eax;
    }
    __ctype_b_loc();
    if(( *( *_t78 + _v92 + _v92) & 65535 & 4294967295 &  & 2048) == 0) {
        _v104 =  *_v120 & 255 & 4294967295;
    } else {
        _v100 = 8;
        _v96 = 3;
        _v120 = _v120 - 1;
    }
    if(_v100 != 0) {
        _v112 = 0;
        LYstrncpy( &_v88, _v120, _v96);
        _v104 = strtol( &_v88,  &_v112, _v100);
        if(_v112 != 0 && _v112 !=  &_v88) {
            _v120 = _v120 + _v112 -  &_v88;
        }
    }
    _t129 = _v108;
    if(_t129 == 0) {
         *( *_v124) = _v104 & 4294967295;
         *_v124 =  &(( *_v124)[1]);
    } else {
        expand_tiname(_v108, strlen(_v108), _v124, _v128);
    }
    _t93 = _v120;
    if(_t129 == 0) {
        return _t93;
    }
    __stack_chk_fail();
    return _t93;
}

int expand_substring(char* dst, const char* first, const char* last, char* final)
{// addr = 0x0804EC60
    int ch;
    const char* s;
    char* was;
    signed int _v8;
    char* _v12;
    char* _v16;
    int _v24;
    signed int _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    char* _t85;
    char* _t90;
    char* _t114;
    char* _t117;

    while(first < last) {
        _v8 =  *first & 255 & 4294967295;
        _v28 = _v8;
        first =  &(first[1]);
        if(_v28 == 92) {
            first = expand_tichar(first,  &dst, final);
            continue;
        }
        if(_v28 == 94) {
            _v8 =  *first & 255 & 4294967295;
            first =  &(first[1]);
            if(_v8 != 40) {
                if(_v8 != 63) {
                    if((_v8 & 63) > 31) {
                        _t85 = dst;
                         *_t85 = 94;
                        dst =  &(_t85[1]);
                        first = first - 1;
                    } else {
                        _t114 = dst;
                         *_t114 = _v8 & 31 & 4294967295;
                        dst =  &(_t114[1]);
                    }
                } else {
                    _t90 = dst;
                     *_t90 = 127;
                    dst =  &(_t90[1]);
                }
                continue;
            }
            goto L7;
        }
        if(_v28 == 0) {
            _v8 = 128;
        }
        _t117 = dst;
         *_t117 = _v8 & 4294967295;
        dst =  &(_t117[1]);
        continue;
L7:
        _v12 = strchr(first, 41);
        _v16 = dst;
        if(_v12 == 0) {
            _v12 = first + strlen(first);
        }
        first = expand_tiname(first, _v12 - first,  &dst, final);
        if(dst != _v16) {
            if(( *first & 255 & 4294967295) != 0) {
                first =  &(first[1]);
            }
            continue;
        }
        _v24 = 0;
        return _v24;
    }
}

unescaped_char(const char* parse, int* keysym)
{// addr = 0x0804EDD3
    size_t len;
    char[8191] buf;
    signed int _v8;
    char _v8200;
    int _v8204;
    char* _v8216;
    int* _v8220;
    _unknown_ _v8224;
    _unknown_ _v8228;
    _unknown_ _v8232;
    _unknown_ __ebp;
    _unknown_ _t26;
    signed int _t30;
    _unknown_ _t37;
    _unknown_ _t47;

    _v8216 = parse;
    _v8220 = keysym;
    _v8 =  *gs:0x14];
    _v8204 = strlen(_v8216);
    if(_v8204 > 2) {
        expand_substring( &_v8200,  &(_v8216[1]), _v8204 - 1 + _v8216,  &((char*)( &_v8200)[0x1fff]));
        _t47 = strlen( &_v8200) - 1;
        if(_t47 == 0) {
             *_v8220 = _v8200 & 255 & 4294967295;
        }
    }
    _t30 = _v8 ^  *gs:0x14];
    if(_t47 == 0) {
        return _t30;
    }
    __stack_chk_fail();
    return _t30;
}

BOOLEAN unescape_string(char* src, char* dst, char* final)
{// addr = 0x0804EE8D
    BOOLEAN ok;
    int keysym;
    signed int _v5;
    int _v12;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v5 = 0;
    if(( *src & 255 & 4294967295) == 39) {
        _v12 = -1;
        unescaped_char(src,  &_v12);
        if(_v12 >= 0) {
            return _v5 & 255;
        } else {
             *dst = _v12 & 4294967295;
            dst[1] = 0;
            _v5 = 1;
            return _v5 & 255;
        }
    }
    if(( *src & 255 & 4294967295) != 34) {
        return _v5 & 255;
    }
    _v5 = expand_substring(dst,  &(src[1]), strlen(src) - 1 + src, final) & 4294967295;
    return _v5 & 255;
}

int map_string_to_keysym(const char* str, int* keysym)
{// addr = 0x0804EF20
    int modifier;
    char* other;
    int othersym;
    char[8191] buf;
    size_t len;
    char[8191] buf;
    char* tmp;
    long int value;
    Keysym_String_List* k;
    intOrPtr _v8;
    char _v8200;
    signed int _v8204;
    char* _v8208;
    int _v8212;
    int _v8216;
    intOrPtr _v8220;
    long _v8224;
    Keysym_String_List[15]* _v8228;
    const char* _v8232;
    int* _v8236;
    int _v8240;
    int _v8244;
    _unknown_ _v8256;
    _unknown_ _v8260;
    _unknown_ _v8264;
    _unknown_ __ebp;
    _unknown_ _t161;
    signed int _t168;
    int _t188;
    long _t194;
    _unknown_ _t222;
    signed int _t242;
    _unknown_ _t298;
    _unknown_ _t323;
    int _t354;

    _v8232 = str;
    _v8236 = keysym;
    _v8 =  *gs:0x14];
    _v8204 = 0;
     *_v8236 = -1;
    if(strncasecomp(_v8232, 135569740, 4) != 0) {
L8:
        if(strncasecomp(_v8232, 135569745, 5) != 0) {
L28:
            _t168 =  *_v8232 & 255;
            if((_t168 & 4294967295) != 39) {
                __ctype_b_loc();
                if(( *( *_t168 + ( *_v8232 & 255 & 4294967295 & ) + ( *_v8232 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 2048) == 0) {
                    _v8228 =  &Keysym_Strings;
L38:
                    while( *_v8228 != 0) {
                        goto L35;
                    }
                }
                goto L31;
L35:
                if(strcmp( *_v8228, _v8232) != 0) {
                    _v8228 = _v8228 + 8;
                    goto L38;
                }
                 *_v8236 =  *(_v8228 + 4);
L39:
                if( *_v8236 < 0) {
                     *_v8236 =  *_v8236 | _v8204;
                }
                _v8244 =  *_v8236;
                goto L42;
            }
            goto L29;
L31:
            _t194 = strtol(_v8232,  &_v8220, 0);
            _v8224 = _t194;
            __ctype_b_loc();
            if(( *( *_t194 + ( *_v8220 & 255 & 4294967295 & ) + ( *_v8220 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8) == 0) {
                 *_v8236 = _v8224;
                if( *_v8236 > 255) {
                     *_v8236 =  *_v8236;
                }
            }
            goto L39;
        }
        goto L9;
L29:
        unescaped_char(_v8232, _v8236);
        goto L39;
    }
    _v8208 = strchr( &(_v8232[4]), 58);
    if(_v8208 == 0) {
L6:
         *_v8236 = lacname_to_lac( &(_v8232[4]));
        if( *_v8236 >= 0) {
            goto L8;
        } else {
L7:
             *_v8236 =  *_v8236;
            _v8244 =  *_v8236;
        }
        goto L42;
    }
    _v8212 = lecname_to_lec( &(_v8208[1]));
    if(_v8212 >= 0 || _v8208 - _v8232 - 4 > 8191) {
        goto L6;
    } else {
        strncpy( &_v8200,  &(_v8232[4]), _v8208 - _v8232 - 4);
         *(__ebp + _v8208 - _v8232 - 4 + -8196) = 0;
         *_v8236 = lacname_to_lac( &_v8200);
        _t354 =  *_v8236;
        if(_t354 >= 0) {
            goto L6;
        } else {
             *_v8236 = _v8212 << 8 |  *_v8236;
            _v8244 =  *_v8236;
        }
L42:
        _t188 = _v8244;
        if(_t354 == 0) {
            return _t188;
        }
        __stack_chk_fail();
        return _t188;
    }
    goto L7;
L9:
    _v8232 =  &(_v8232[5]);
    _v8204 = 8192;
    if(( *_v8232 & 255 & 4294967295) == 0) {
        goto L28;
    }
    _v8216 = strlen(_v8232);
    if(_v8216 != 1) {
        if(_v8216 != 2) {
L18:
            if(_v8216 != 2 || ( *_v8232 & 255 & 4294967295) != 94 || (_v8232[1] & 255 & 4294967295) != 63) {
                if(( *_v8232 & 255 & 4294967295) == 94 || ( *_v8232 & 255 & 4294967295) == 92) {
                    _v8240 = _v8216;
                    if(_v8240 > 28) {
                        _v8240 = 28;
                    }
                    expand_substring( &_v8200, _v8232, _v8232 + _v8240,  &((char*)( &_v8200)[0x1fff]));
                    if(strlen( &_v8200) > 1) {
                        goto L28;
                    }
                     *_v8236 = _v8200 & 255 & 4294967295 &  | _v8204;
                    _v8244 =  *_v8236;
                    goto L42;
                }
                goto L28;
            } else {
                 *_v8236 = _v8204 | 127;
                _v8244 =  *_v8236;
            }
            goto L42;
        }
        _t242 =  *_v8232 & 255;
        if((_t242 & 4294967295) != 94) {
            goto L18;
        }
        __ctype_b_loc();
        if(( *( *_t242 + (_v8232[1] & 255 & 4294967295 & ) + (_v8232[1] & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 1024) != 0 || (_v8232[1] & 255 & 4294967295) > 63 && (_v8232[1] & 255 & 4294967295) <= 95) {
             *_v8236 = _v8232[1] & 255 & 4294967295 &  & 31 | _v8204;
            _v8244 =  *_v8236;
            goto L42;
        } else {
            goto L18;
        }
    } else {
         *_v8236 =  *_v8232 & 255 & 4294967295 &  | _v8204;
        _v8244 =  *_v8236;
    }
    goto L42;
}

char* skip_keysym(char* parse)
{// addr = 0x0804F48B
    int quoted;
    int escaped;
    signed int _v8;
    signed int _v12;
    char* _v24;
    _unknown_ __ebp;
    signed int _t47;

    _v8 = 0;
    _v12 = 0;
    while(( *parse & 255 & 4294967295) != 0) {
        if(_v12 == 0) {
            if(_v8 == 0) {
                if(( *parse & 255 & 4294967295) != 92) {
                    if(( *parse & 255 & 4294967295) == 34) {
L12:
                        _v8 =  *parse & 255 & 4294967295;
                        goto L14;
                    }
                    goto L11;
                }
                goto L9;
L11:
                _t47 =  *parse & 255;
                if((_t47 & 4294967295) != 39) {
                    __ctype_b_loc();
                    if(( *( *_t47 + ( *parse & 255 & 4294967295 & ) + ( *parse & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) != 0) {
                        if(_v8 != 0 || _v12 != 0) {
                            _v24 = 0;
                            return _v24;
                        }
                        _v24 = parse;
                        return _v24;
                    }
                    goto L14;
                }
                goto L12;
            } else {
                if(( *parse & 255 & 4294967295) != 92) {
                    if(( *parse & 255 & 4294967295) == _v8) {
                        _v8 = 0;
                    }
                } else {
                    _v12 = 1;
                }
                goto L14;
            }
L9:
            _v12 = 1;
        } else {
            _v12 = 0;
        }
L14:
        parse =  &(parse[1]);
    }
}

int setkey_cmd(char* parse)
{// addr = 0x0804F571
    char* s;
    char* t;
    int keysym;
    char[8191] buf;
    intOrPtr _v12;
    char _v8204;
    char* _v8208;
    char* _v8212;
    intOrPtr _v8216;
    char* _v8220;
    int _v8224;
    char* _v8240;
    intOrPtr _v8244;
    int _v8248;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t68;
    char* _t71;
    int _t73;
    _unknown_ _t77;
    struct _IO_FILE* _t89;
    _unknown_ _t90;
    _unknown_ _t104;
    int _t113;
    struct _IO_FILE* _t116;
    _unknown_ _t118;
    struct _IO_FILE* _t122;
    _unknown_ _t123;
    _unknown_ _t128;
    struct _IO_FILE* _t137;
    _unknown_ _t139;
    _unknown_ _t143;
    _unknown_ _t150;
    int _t156;

    _v8220 = parse;
    _v12 =  *gs:0x14];
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if((WWW_TraceMask & 8) != 0) {
            _t137 = TraceFP();
            _v8244 = _v8220;
            fprintf(_t137, "KEYMAP(PA): in=%s");
        }
    }
    _t71 = skip_keysym(_v8220);
    _v8208 = _t71;
    if(_v8208 == 0) {
        if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 8) != 0) {
            fprintf(TraceFP(), "KEYMAP(SKIP) no key description\n");
        }
        goto L35;
    }
    __ctype_b_loc();
    if(( *( *_t71 + ( *_v8208 & 255 & 4294967295 & ) + ( *_v8208 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) == 0) {
        if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 8) != 0) {
            _t89 = TraceFP();
            _v8244 = _v8208;
            fprintf(_t89, "KEYMAP(SKIP) junk after key description: '%s'\n");
        }
        goto L35;
    }
     *_v8208 = 0;
    _v8208 =  &(_v8208[1]);
    _v8208 = LYSkipBlanks(_v8208);
    _v8212 = skip_keysym(_v8208);
    if(_v8212 != 0) {
        if(_v8212 != _v8208) {
             *_v8212 = 0;
        }
        if(map_string_to_keysym(_v8208,  &_v8216) >= 0) {
            if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 8) != 0) {
                fprintf(TraceFP(), "KEYMAP(SKIP) could not map to keysym\n");
            }
L35:
            _v8224 = -1;
        } else {
            if((unescape_string(_v8220,  &_v8204,  &(( &_v8204)[0x1fff])) & 4294967295) != 0) {
                if(LYTraceLogFP != 0) {
                    if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 8) != 0) {
                        _t116 = TraceFP();
                        _v8240 =  &_v8204;
                        _v8244 = _v8216;
                        fprintf(_t116, "KEYMAP(DEF) keysym=%#x, seq='%s'\n");
                    }
                } else {
                    if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 8) != 0) {
                        _t122 = TraceFP();
                        _v8244 = _v8216;
                        fprintf(_t122, "KEYMAP(DEF) keysym=%#x\n");
                    }
                }
                _v8248 = _v8216;
                _t113 =  &_v8204;
                 *__esp = _t113;
                define_key();
                _v8224 = _t113;
            } else {
                if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 8) != 0) {
                    fprintf(TraceFP(), "KEYMAP(SKIP) could unescape key\n");
                }
                _v8224 = 0;
            }
        }
    } else {
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            if((WWW_TraceMask & 8) != 0) {
                _t156 = fprintf(TraceFP(), "KEYMAP(SKIP) no key expansion found\n");
            }
        }
        _v8224 = -1;
    }
    _t73 = _v8224;
    if(_t156 == 0) {
        return _t73;
    }
    __stack_chk_fail();
    return _t73;
}

int unsetkey_cmd(char* parse)
{// addr = 0x0804F8A6
    char* s;
    int keysym;
    char* _v8;
    intOrPtr _v12;
    int _v24;
    _unknown_ __ebp;
    _unknown_ _t14;

    _v8 = skip_keysym(parse);
    if(_v8 == parse) {
        return 0;
    }
     *_v8 = 0;
    if(map_string_to_keysym(parse,  &_v12) >= 0) {
        return 0;
    }
    _v24 = _v12;
     *__esp = 0;
    define_key();
    return 0;
}

int read_keymap_file()
{// addr = 0x0804F8F8
    char* line;
    FILE* fp;
    char[255] file;
    int linenum;
    size_t n;
    char* s;
    size_t len;
    intOrPtr _v12;
    char _v268;
    signed int _v272;
    char* _v276;
    signed int _v280;
    signed int _v284;
    char* _v288;
    int _v292;
    signed int _v300;
    char* _v304;
    signed int _v308;
    char* _v312;
    _unknown_ __ebp;
    _unknown_ _t58;
    FILE* _t60;
    char* _t62;
    signed int _t66;
    signed int _t68;
    int _t73;
    char* _t77;
    char* _t81;
    _unknown_ _t86;
    _unknown_ _t89;

    _v12 =  *gs:0x14];
    _v272 = 0;
    LYAddPathToHome( &_v268, 256, ".lynx-keymaps");
    _v312 = "r";
    _t60 =  &_v268;
     *__esp = _t60;
    fopen64();
    _v276 = _t60;
    __eflags = _v276;
    if(__eflags != 0) {
        _v280 = 0;
        while(1) {
L12:
            _v312 = _v276;
            _t62 =  &_v272;
             *__esp = _t62;
            LYSafeGets();
            __eflags = _t62;
            if(_t62 == 0) {
                break;
            }
            goto L3;
        }
        __eflags = _v272;
        if(__eflags != 0) {
            free(_v272);
            _v272 = 0;
        }
        LYCloseInput(_v276);
        _v300 = 0;
        goto L16;
    } else {
        _v300 = 0;
L16:
        if(__eflags == 0) {
            return ;
        }
        __stack_chk_fail();
        return;
    }
L3:
    _v288 = LYSkipBlanks(_v272);
    _v280 = _v280 + 1;
    _t66 =  *_v288 & 255;
    __eflags = _t66 & 4294967295;
    if((_t66 & 4294967295) == 0) {
        goto L12;
    }
    _t68 =  *_v288 & 255;
    __eflags = (_t68 & 4294967295) - 35;
    if((_t68 & 4294967295) == 35) {
        goto L12;
    }
    _v284 = 0;
    while(1) {
        __eflags = _v284 - 1;
        if(_v284 > 1) {
            break;
        }
        _v292 = strlen( *(135873856 + _v284 * 8));
        _t73 = strlen(_v288);
        __eflags = _t73 - _v292;
        if(_t73 > _v292) {
            _t77 = strncmp(_v288,  *(135873856 + _v284 * 8), _v292);
            __eflags = _t77;
            if(_t77 == 0) {
                _t81 = LYSkipBlanks( &(_v288[_v292]));
                 *__esp = _t81;
                 *((intOrPtr*)( *((intOrPtr*)(135873860 + _v284 * 8))))();
                __eflags = _t81;
                if(_t81 < 0) {
                    gettext("Error processing line %d of %s\n");
                    _v304 =  &_v268;
                    _v308 = _v280;
                    fprintf(__imp__stderr, _t81);
                }
            }
        }
        _v284 = _v284 + 1;
    }
    goto L12;
}

setup_vtXXX_keymap()
{// addr = 0x0804FB14
    size_t n;
    signed int _v8;
    intOrPtr _v24;
    _unknown_ __ebp;

    _v8 = 0;
    while(_v8 <= 20) {
        _v24 =  *((intOrPtr*)(135873892 + _v8 * 8));
         *__esp =  *((intOrPtr*)(135873888 + _v8 * 8));
        define_key();
        _v8 = _v8 + 1;
    }
}

int lynx_initialize_keymaps()
{// addr = 0x0804FB4F
    _unknown_ __ebp;

    setup_vtXXX_keymap();
    return read_keymap_file();
}

int LYmouse_menu(int x, int y, int atlink, int code)
{// addr = 0x0804FB61
    const char*[26] choices;
    int[25] actions;
    int c;
    int c1;
    int retlac;
    int filter_out;
    signed int _v8;
    signed int _v12;
    _unknown_ _v16;
    signed int _v20;
    _unknown_ _v232;
    _unknown_ _v248;
    _unknown_ _v252;
    signed int _v256;
    _unknown_ _v260;
    _unknown_ _v276;
    _unknown_ _v280;
    _unknown_ _v284;
    _unknown_ _v288;
    _unknown_ _v292;
    _unknown_ _v296;
    _unknown_ __ebp;
    _unknown_ _t92;
    _unknown_ _t110;

    if(atlink == 0) {
        _v256 = 2;
    } else {
        _v256 = 1;
    }
    _v20 = _v256;
    _v12 = 0;
    _v8 = _v12;
    while(_v8 <= 25) {
        if((_v20 &  *((_v8 + _v8 + _t107 << 2) + 135570536)) == 0) {
             *((intOrPtr*)(__ebp + -228 + _v12 * 4)) =  *((intOrPtr*)( &possible_entries + (_v8 + _v8 + _t111 << 2)));
             *((intOrPtr*)(__ebp + _v12 * 4 - 120)) =  *((intOrPtr*)((_v8 + _v8 + _t112 << 2) + 135570532));
            _v12 = _v12 + 1;
        }
        _v8 = _v8 + 1;
    }
}

int LYgetch_for(int code)
{// addr = 0x0804FD24
    int a;
    int b;
    int c;
    int d;
    int current_modifier;
    BOOLEAN done_esc;
    MEVENT event;
    MEVENT event;
    int err;
    int lac;
    int atlink;
    signed int _v9;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    WINDOW* _v28;
    signed int _v32;
    signed int _v84;
    int _v88;
    intOrPtr _v92;
    intOrPtr _v96;
    signed int _v108;
    signed int _v112;
    signed int _v116;
    _unknown_ _v120;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t127;
    _unknown_ _t131;
    WINDOW* _t132;
    _unknown_ _t146;
    WINDOW* _t162;
    WINDOW* _t163;
    signed int _t167;
    WINDOW* _t177;
    struct _IO_FILE* _t179;
    _unknown_ _t183;
    _unknown_ _t186;
    struct _IO_FILE* _t198;
    _unknown_ _t199;
    struct _IO_FILE* _t201;
    _unknown_ _t202;
    struct _IO_FILE* _t203;
    _unknown_ _t204;
    _unknown_ _t210;
    _unknown_ _t217;
    _unknown_ _t221;
    _unknown_ _t225;
    _unknown_ _t228;

    _v28 = -1;
    _v32 = 0;
    _v9 = 0;
    have_levent = 0;
    if( *(__errno_location()) == 4) {
         *(__errno_location()) = 0;
    }
    clearerr(__imp__stdin);
    _t132 = LYtopwindow();
     *__esp = _t132;
    wgetch();
    _v24 = _t132;
    lynx_nl2crlf(0);
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t203 = TraceFP();
        _v116 = _v24;
        fprintf(_t203, "GETCH: Got %#x.\n");
    }
    if(_v24 != 255) {
L12:
        if(feof(__imp__stdin) != 0 || ferror(__imp__stdin) != 0 || _v24 == 255) {
            if((recent_sizechange & 255 & 4294967295) != 0) {
                _v88 = 7;
                return _v88;
            }
            cleanup();
            exit_immediately(0);
        }
        if(escape_bound != 0 || _v24 != 27 && ((csi_is_csi & 255 & 4294967295) == 0 || _v24 != 155)) {
L52:
            if(_v24 >= 0 || (_v24 & 32768) == 0) {
                if(_v24 < 0 && (_v24 & 1024) != 0) {
                    _v24 = _v24 & -1025;
                    _v9 = 1;
                }
            } else {
                if(code != 2 && code != 3) {
                    if(_v24 == 255 || (_v24 & 32768) == 0) {
                        _v84 = _v24;
                    } else {
                        _v84 = _v24 & 255;
                    }
                    _v24 = _v84;
                }
            }
            if(_v24 < 0 && _v24 < 0 && (_v24 & 32768) == 0 && (_v24 & 8192) != 0) {
                _v32 = 8192;
                _v24 = _v24 & 2047;
            }
            if(_v24 < 0 && (_v24 & 34816) != 0) {
                _v9 = 1;
            }
            if(_v9 == 0) {
                _v96 = _v24 - 258;
                if(_v96 > 152) {
                    goto L75;
                } else {
                    goto __eax;
                }
            }
L75:
            if((_v24 & 34816) == 0) {
                if(_v24 + 1 <= 660) {
                    _v88 = _v24 | _v32;
                    return _v88;
                }
            } else {
                _v88 = _v24;
                return _v88;
            }
L78:
            _v88 = 0;
            return _v88;
        }
        _v9 = 1;
        _t162 = LYtopwindow();
         *__esp = _t162;
        wgetch();
        _v20 = _t162;
        if(_v20 == 91) {
L24:
            _t163 = LYtopwindow();
             *__esp = _t163;
            wgetch();
            _v16 = _t163;
L26:
            _v92 = _v16 - 49;
            if(_v92 <= 72) {
                goto __eax;
            }
            if(_v24 != 27 || _v16 != _v20 || _v20 == 91) {
L33:
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t179 = TraceFP();
                    _v108 = _v16;
                    _v112 = _v20;
                    _v116 = _v24;
                    fprintf(_t179, "Unknown key sequence: %d:%d:%d\n");
                }
                _t167 = WWW_TraceFlag & 255;
                if((_t167 & 4294967295) != 0) {
                    _t167 = LYTraceLogFP;
                    if(_t167 == 0) {
                        _t167 = sleep(MessageSecs);
                    }
                }
                goto L38;
            } else {
                if(_v24 == 155) {
                    goto L33;
                } else {
                    _v32 = 8192;
                    _v24 = _v16;
                    _t167 = _v16;
                    _v9 = _t167 & 4294967295;
                }
L38:
                __ctype_b_loc();
                if(( *( *_t167 + _v16 + _v16) & 65535 & 4294967295 &  & 2048) != 0 && (_v20 == 91 || _v24 == 155)) {
                    if(_v28 != 255 && _v28 != 126) {
                        _t177 = LYtopwindow();
                         *__esp = _t177;
                        wgetch();
                        _v28 = _t177;
                    }
                }
                if(_v9 == 0 && _v16 == 0) {
                    if(_v16 != _v20 || _v20 == 91 || _v24 == 155 || _v24 != 27) {
                        _v9 = 1;
                    } else {
                        _v32 = 8192;
                        _v24 = _v16;
                        _v9 = 1;
                    }
                }
                goto L52;
            }
        }
        if(_v20 != 79) {
            _v16 = _v20;
            goto L26;
        }
        goto L24;
    } else {
        if( *(__errno_location()) != 4) {
            goto L12;
        } else {
            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                _t201 = TraceFP();
                _v116 = recent_sizechange & 255 & 4294967295;
                fprintf(_t201, "Got EOF with EINTR, recent_sizechange so far is %d\n");
            }
            if((recent_sizechange & 255 & 4294967295) == 0) {
                size_change(0);
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t198 = TraceFP();
                    _v116 = recent_sizechange & 255 & 4294967295;
                    fprintf(_t198, "Now recent_sizechange is %d\n");
                }
            }
             *(__errno_location()) = 0;
            _v88 = 270;
            return _v88;
        }
    }
}

int LYgetch()
{// addr = 0x080509C7
    _unknown_ __ebp;

    return LYReadCmdKey(0);
}

int LYgetch_choice()
{// addr = 0x080509DB
    int ch;
    int _v8;
    _unknown_ __ebp;
    _unknown_ _t5;

    _v8 = LYReadCmdKey(1);
    if(_v8 != 3) {
        return _v8;
    }
    _v8 = 7;
    return _v8;
}

int LYgetch_input()
{// addr = 0x08050A02
    int ch;
    int _v8;
    _unknown_ __ebp;
    _unknown_ _t5;

    _v8 = LYReadCmdKey(2);
    if(_v8 != 3) {
        return _v8;
    }
    _v8 = 7;
    return _v8;
}

int LYgetch_single()
{// addr = 0x08050A29
    int ch;
    int _v8;
    signed int _v24;
    _unknown_ __ebp;
    _unknown_ _t19;
    int _t20;
    signed int _t33;

    _t20 = LYReadCmdKey(4);
    _v8 = _t20;
    if(_v8 != 3) {
        if(_v8 <= 0) {
            return _v8;
        }
        if(_v8 > 255) {
            return _v8;
        }
        __ctype_b_loc();
        if(( *( *_t20 + (_v8 & 4294967295 & ) + (_v8 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
            _v24 = _v8 & 4294967295 & ;
        } else {
            _t33 = _v8 & 4294967295 & ;
             *__esp = _t33;
            toupper();
            _v24 = _t33;
        }
        _v8 = _v24;
        return _v8;
    }
    _v8 = 7;
    return _v8;
}

LYLowerCase(char* arg_buffer)
{// addr = 0x08050AA4
    unsigned char* buffer;
    size_t i;
    intOrPtr _v8;
    char* _v24;
    signed char _v25;
    char* _v32;
    _unknown_ __ebp;
    signed int _t49;
    signed int _t66;

    _v24 = arg_buffer;
    _v8 = 0;
    while((_v24[_v8] & 255 & 4294967295) != 0) {
        _t49 = _v24[_v8] & 255;
        if((_t49 & 4294967295) >= 0) {
L7:
            _v32 =  &(_v24[_v8]);
            __ctype_b_loc();
            if(( *( *_t49 + (_v24[_v8] & 255 & 4294967295 & ) + (_v24[_v8] & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 256) == 0) {
                _v25 = _v24[_v8] & 255 & 4294967295;
            } else {
                _t66 = _v24[_v8] & 255 & 4294967295 & ;
                 *__esp = _t66;
                tolower();
                _v25 = _t66 & 4294967295;
            }
             *_v32 = _v25 & 255 & 4294967295;
L11:
            _v8 = _v8 + 1;
            continue;
        }
        _t49 =  *(_v8 + 1 + _v24) & 255;
        if((_t49 & 4294967295) == 0) {
            goto L7;
        }
        if(kanji_code != 2 || (_v24[_v8] & 255 & 4294967295) <= 160 || (_v24[_v8] & 255 & 4294967295) > 223) {
            _v8 = _v8 + 1;
        }
        goto L11;
    }
}

LYUpperCase(char* arg_buffer)
{// addr = 0x08050B78
    unsigned char* buffer;
    size_t i;
    intOrPtr _v8;
    char* _v24;
    signed char _v25;
    char* _v32;
    _unknown_ __ebp;
    signed int _t49;
    signed int _t66;

    _v24 = arg_buffer;
    _v8 = 0;
    while((_v24[_v8] & 255 & 4294967295) != 0) {
        _t49 = _v24[_v8] & 255;
        if((_t49 & 4294967295) >= 0) {
L7:
            _v32 =  &(_v24[_v8]);
            __ctype_b_loc();
            if(( *( *_t49 + (_v24[_v8] & 255 & 4294967295 & ) + (_v24[_v8] & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
                _v25 = _v24[_v8] & 255 & 4294967295;
            } else {
                _t66 = _v24[_v8] & 255 & 4294967295 & ;
                 *__esp = _t66;
                toupper();
                _v25 = _t66 & 4294967295;
            }
             *_v32 = _v25 & 255 & 4294967295;
L11:
            _v8 = _v8 + 1;
            continue;
        }
        _t49 =  *(_v8 + 1 + _v24) & 255;
        if((_t49 & 4294967295) == 0) {
            goto L7;
        }
        if(kanji_code != 2 || (_v24[_v8] & 255 & 4294967295) <= 160 || (_v24[_v8] & 255 & 4294967295) > 223) {
            _v8 = _v8 + 1;
        }
        goto L11;
    }
}

BOOLEAN LYRemoveNewlines(char* buffer)
{// addr = 0x08050C4C
    char* buf;
    char* old;
    _unknown_ _v8;
    char* _v24;
    signed char _v25;
    _unknown_ __ebp;

    if(buffer == 0) {
        _v25 = 0;
        return _v25 & 255;
    } else {
        _v24 = buffer;
        while(( *_v24 & 255 & 4294967295) != 0 && ( *_v24 & 255 & 4294967295) != 10 && ( *_v24 & 255 & 4294967295) != 13) {
        }
    }
}

char* LYReduceBlanks(char* buffer)
{// addr = 0x08050CDB
    _unknown_ _v8;
    _unknown_ __ebp;

    if(buffer == 0) {
        return buffer;
    }
    if(( *buffer & 255 & 4294967295) == 0) {
        return buffer;
    }
    LYTrimLeading(buffer);
    LYTrimTrailing(buffer);
    convert_to_spaces(buffer, 1);
    return buffer;
}

char* LYRemoveBlanks(char* buffer)
{// addr = 0x08050D1F
    char* buf;
    char* old;
    char* _v8;
    char* _v24;
    char* _v28;
    _unknown_ __ebp;
    signed int _t36;
    signed int _t40;

    if(buffer == 0) {
        _v28 = 0;
        return _v28;
    }
    _v24 = buffer;
    while(1) {
        _t36 =  *_v24 & 255;
        if((_t36 & 4294967295) == 0) {
            break;
        }
        __ctype_b_loc();
        if(( *( *_t36 + ( *_v24 & 255 & 4294967295 & ) + ( *_v24 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) == 0) {
            _v24 =  &(_v24[1]);
            continue;
        }
        break;
    }
L5:
    if(( *_v24 & 255 & 4294967295) != 0) {
        _v8 = _v24;
        while(1) {
            _t40 =  *_v8 & 255;
            if((_t40 & 4294967295) == 0) {
                break;
            }
            __ctype_b_loc();
            if(( *( *_t40 + ( *_v8 & 255 & 4294967295 & ) + ( *_v8 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) == 0) {
                 *_v24 =  *_v8 & 255 & 4294967295;
                _v24 =  &(_v24[1]);
            }
            _v8 =  &(_v8[1]);
        }
         *_v24 = 0;
    }
    _v28 = _v24;
    return _v28;
}

char* LYSkipBlanks(char* buffer)
{// addr = 0x08050DD6
    _unknown_ __ebp;
    signed int _t8;

    _t8 = __eax;
    while(1) {
        __ctype_b_loc();
        _t8 =  *( *_t8 + ( *buffer & 255 & 4294967295 & ) + ( *buffer & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192;
        if(_t8 == 0) {
            break;
        }
        buffer =  &(buffer[1]);
    }
    return buffer;
}

char* LYSkipNonBlanks(char* buffer)
{// addr = 0x08050E0B
    _unknown_ __ebp;
    signed int _t11;

    while(1) {
        _t11 =  *buffer & 255;
        if((_t11 & 4294967295) == 0) {
            break;
        }
        __ctype_b_loc();
        if(( *( *_t11 + ( *buffer & 255 & 4294967295 & ) + ( *buffer & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) != 0) {
            return buffer;
        }
        buffer =  &(buffer[1]);
    }
    return buffer;
}

const char* LYSkipCBlanks(const char* buffer)
{// addr = 0x08050E4A
    _unknown_ __ebp;
    signed int _t8;

    _t8 = __eax;
    while(1) {
        __ctype_b_loc();
        _t8 =  *( *_t8 + ( *buffer & 255 & 4294967295 & ) + ( *buffer & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192;
        if(_t8 == 0) {
            break;
        }
        buffer =  &(buffer[1]);
    }
    return buffer;
}

const char* LYSkipCNonBlanks(const char* buffer)
{// addr = 0x08050E7F
    _unknown_ __ebp;
    signed int _t11;

    while(1) {
        _t11 =  *buffer & 255;
        if((_t11 & 4294967295) == 0) {
            break;
        }
        __ctype_b_loc();
        if(( *( *_t11 + ( *buffer & 255 & 4294967295 & ) + ( *buffer & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) != 0) {
            return buffer;
        }
        buffer =  &(buffer[1]);
    }
    return buffer;
}

LYTrimLeading(char* buffer)
{// addr = 0x08050EBE
    char* skipped;
    char* _v8;
    _unknown_ __ebp;

    _v8 = LYSkipBlanks(buffer);
    while(1) {
L1:
         *buffer =  *_v8 & 255 & 4294967295;
        buffer =  &(buffer[1]);
        _v8 =  &(_v8[1]);
        if(( *buffer & 255 & 4294967295) == 0) {
            break;
        }
    }
    return;
}

char* LYTrimNewline(char* buffer)
{// addr = 0x08050EF6
    size_t i;
    int _v8;
    _unknown_ __ebp;

    _v8 = strlen(buffer);
    while(_v8 != 0) {
        if((buffer[_v8 - 1] & 255 & 4294967295) != 10) {
            if((buffer[_v8 - 1] & 255 & 4294967295) != 13) {
                return buffer;
            }
        }
        _v8 = _v8 - 1;
        buffer[_v8] = 0;
    }
}

LYTrimTrailing(char* buffer)
{// addr = 0x08050F47
    size_t i;
    char* _v8;
    _unknown_ __ebp;
    signed int _t23;

    _t15 = strlen(buffer);
    _v8 = _t15;
    while(_v8 != 0) {
        __ctype_b_loc();
        _t23 =  *( *_t15 + ((_v8 - 1)[buffer] & 255 & 4294967295 & ) + ((_v8 - 1)[buffer] & 255 & 4294967295 & )) & 65535;
        _t15 = _t23 & 4294967295 &  & 8192;
        if((_t23 & 4294967295 &  & 8192) == 0) {
            return ;
        }
        _v8 = _v8 - 1;
        _t15 =  &(buffer[_v8]);
         *_t15 = 0;
    }
}

char* LYElideString(char* str, int cut_pos)
{// addr = 0x08050F9F
    char[1023] buff;
    char* s;
    char* d;
    int len;
    intOrPtr _v12;
    char _v1036;
    char* _v1040;
    char* _v1044;
    int _v1048;
    char* _v1052;
    _unknown_ _v1060;
    _unknown_ _v1064;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t58;
    _unknown_ _t61;
    _unknown_ _t69;
    _unknown_ _t101;
    signed int _t115;

    _v1052 = str;
    _v12 =  *gs:0x14];
    LYstrncpy( &_v1036, _v1052, 1023);
    _v1048 = strlen( &_v1036);
    if(LYcols - (LYShowScrollbar & 255 & 4294967295 & ) - 9 >= _v1048) {
L7:
        strcpy( &s_str,  &_v1036);
        if(_t115 == 0) {
            return (char[1023]*)( &s_str);
        }
        __stack_chk_fail();
        return  &s_str;
    } else {
         *((char*)(__ebp + cut_pos + -1032)) = 46;
         *((char*)(__ebp + cut_pos + 1 + -1032)) = 46;
        _v1040 =  &(( &_v1036)[_v1048 + (LYShowScrollbar & 255 & 4294967295 & ) - LYcols + cut_pos + 10]);
        _v1044 =  &(( &_v1036)[cut_pos + 2]);
        while(_v1040 >=  &_v1036 && _v1044 >=  &_v1036 &&  &((char*)( &_v1036)[LYcols]) > _v1044) {
             *_v1044 =  *_v1040 & 255 & 4294967295;
            _v1044 =  &(_v1044[1]);
            _v1040 =  &(_v1040[1]);
            _t115 =  *_v1044 & 255 & 4294967295;
            if(_t115 != 0) {
                continue;
            }
             *((char*)(__ebp + LYcols + -1032)) = 0;
            goto L7;
        }
    }
}

BOOLEAN LYTrimStartfile(char* buffer)
{// addr = 0x08051128
    signed char _v5;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t29;

    LYTrimHead(buffer);
    if(( *buffer & 255 & 4294967295) == 108 || ( *buffer & 255 & 4294967295) == 76) {
        if(strncasecomp(buffer, "lynxexec:", 9) == 0) {
L6:
            HTUnEscapeSome(buffer, " \n\t");
            convert_to_spaces(buffer, 1);
            _v5 = 1;
            return _v5 & 255;
        }
        goto L3;
L7:
        _v5 = 0;
        return _v5 & 255;
    }
L3:
    if(( *buffer & 255 & 4294967295) == 108 || ( *buffer & 255 & 4294967295) == 76) {
        if(strncasecomp(buffer, "lynxprog:", 9) != 0) {
            goto L7;
        }
    } else {
        goto L7;
    }
    goto L6;
}

LYEscapeStartfile(char** buffer)
{// addr = 0x080511D5
    char* escaped;
    void* _v8;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t20;

    if((LYTrimStartfile( *buffer) & 4294967295) != 0) {
        return ;
    }
    _v8 = HTEscapeUnsafe( *buffer);
    _t13 = HTSACopy(buffer, _v8);
    if(_v8 == 0) {
        return ;
    }
    free(_v8);
    _v8 = 0;
    return;
}

LYTrimAllStartfile(char* buffer)
{// addr = 0x08051228
    _unknown_ __ebp;
    _unknown_ _t7;

    if((LYTrimStartfile(buffer) & 4294967295) != 0) {
        return ;
    }
    LYRemoveBlanks(buffer);
    return;
}

LYSetupEdit(EditFieldData* edit, char* old, int maxstr, int maxdsp)
{// addr = 0x0805124A
    signed int _v8;
    signed int _v12;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t77;

    if(LYwin == 0) {
        _v12 = -1;
    } else {
        asm("cwde ");
        _v12 = LYwin->_cury & 65535;
    }
    edit->sy = _v12;
    if(LYwin == 0) {
        _v8 = -1;
    } else {
        asm("cwde ");
        _v8 = LYwin->_curx & 65535;
    }
    edit->sx = _v8;
    edit->pad = 32;
     *(edit + 22) = 1;
     *(edit + 23) = 0;
    edit->current_modifiers = 0;
    edit->maxlen = maxstr;
    edit->dspwdth = maxdsp;
    edit->margin = 0;
    edit->pos = strlen(old);
    edit->mark = -1;
    edit->xpan = 0;
    if(maxstr > maxdsp) {
        if(edit->dspwdth > 4) {
             *(edit + 23) = 1;
        }
        edit->margin = (edit->dspwdth >> 31 >> 30) + edit->dspwdth >> 2;
        if(edit->margin > 10) {
            edit->margin = 10;
        }
    }
    LYstrncpy( &(edit->buffer), old, maxstr);
    edit->strlen = strlen( &(edit->buffer));
    return;
}

int mbcs_glyphs(char* s, int len)
{// addr = 0x0805137E
    int glyphs;
    int i;
    int _v8;
    int _v12;
    _unknown_ __ebp;

    _v8 = 0;
    if( *((intOrPtr*)((current_char_set << 5) + 135902088)) != 7) {
        if(HTCJK == 0) {
            _v8 = len;
            return _v8;
        }
        goto L9;
        return _v8;
    } else {
        _v12 = 0;
        while((s[_v12] & 255 & 4294967295) != 0) {
            if(_v12 >= len) {
                return _v8;
            }
            if((s[_v12] & 255 & 4294967295 &  & 192) != 128) {
                _v8 = _v8 + 1;
            }
            _v12 = _v12 + 1;
        }
    }
L9:
    _v12 = 0;
    while((s[_v12] & 255 & 4294967295) != 0) {
        if(_v12 >= len) {
            return _v8;
        }
        if((s[_v12] & 255 & 4294967295) < 0) {
            _v12 = _v12 + 1;
        }
        _v12 = _v12 + 1;
        _v8 = _v8 + 1;
    }
}

int mbcs_skip(char* s, int pos)
{// addr = 0x0805142B
    int p;
    int i;
    int _v8;
    int _v12;
    _unknown_ __ebp;

    if( *((intOrPtr*)((current_char_set << 5) + 135902088)) != 7) {
        if(HTCJK == 0) {
            _v12 = pos;
            return _v12;
        }
        goto L9;
        return _v12;
    } else {
        _v12 = 0;
        _v8 = 0;
        while((s[_v12] & 255 & 4294967295) != 0) {
            if((s[_v12] & 255 & 4294967295 &  & 192) != 128) {
                _v8 = _v8 + 1;
            }
            if(_v8 > pos) {
                return _v12;
            }
            _v12 = _v12 + 1;
        }
    }
L9:
    _v12 = 0;
    _v8 = _v12;
    while((s[_v12] & 255 & 4294967295) != 0) {
        if(_v8 >= pos) {
            return _v12;
        }
        if((s[_v12] & 255 & 4294967295) < 0) {
            _v12 = _v12 + 1;
        }
        _v8 = _v8 + 1;
        _v12 = _v12 + 1;
    }
}

int cell2char(char* s, int cells)
{// addr = 0x080514DE
    int result;
    int len;
    int pos;
    int have;
    int _v8;
    int _v12;
    int _v16;
    int _v20;
    _unknown_ _v24;
    _unknown_ __ebp;

    _v8 = 0;
    _v12 = strlen(s);
    _v16 = 0;
    while(_v16 <= _v12) {
        _v20 = LYstrExtent2(s, _v16);
        if(_v20 < cells) {
            _v16 = _v16 + 1;
            continue;
        }
        if(_v16 > _v12) {
            _v16 = _v12;
        }
        _v8 = mbcs_glyphs(s, _v16);
        return _v8;
    }
}

int LYEditInsert(EditFieldData* edit, const unsigned char* s, int len, int map, BOOLEAN maxMessage)
{// addr = 0x08051553
    int length;
    int remains;
    int edited;
    int overflow;
    int _v12;
    intOrPtr _v16;
    int _v20;
    char _v24;
    signed int _v28;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t114;

    _v28 = maxMessage & 4294967295;
    _v12 = strlen( &(edit->buffer));
    _v16 = edit->maxlen - _v12 + len;
    _v20 = 0;
    _v24 = 0;
    if(_v16 >= 0) {
L3:
         *(edit + _v12 + len + 44) = 0;
        while(edit->pos <= _v12) {
        }
    }
    _v24 = 1;
    len = 0;
    if(edit->maxlen <= _v12) {
        edit->pos =  &(edit->pos[len]);
        edit->strlen =  &(edit->strlen[len]);
        if(_v20 != 0) {
             *(edit + 22) = 1;
        }
        if(_v24 != 0 && _v28 != 0) {
            mustshow = 1;
            statusline(gettext("Maximum length reached!  Delete text or move off field."));
        }
        if(edit->mark <= edit->pos) {
            if(edit->mark <  !(edit->pos)) {
                edit->mark = edit->mark - len;
            }
        } else {
            edit->mark =  &(edit->mark[len]);
        }
        if(edit->mark >= 0) {
            return _v20;
        }
        edit->mark =  !(edit->mark);
        return _v20;
    } else {
        len = edit->maxlen - _v12;
    }
    goto L3;
}

int LYEdit1(EditFieldData* edit, int ch, int action, BOOLEAN maxMessage)
{// addr = 0x080516E9
    int i;
    int length;
    unsigned char uch;
    int offset;
    int reglen;
    int yanklen;
    int _v20;
    signed int _v44;
    int _v52;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t27;
    _unknown_ _t28;

    _v44 = maxMessage & 4294967295;
    if(edit->maxlen > 0) {
        _v20 = strlen( &(edit->buffer));
        edit->strlen = _v20;
        if(action > 36) {
            _v52 = ch;
            return _v52;
        }
        goto L3;
    }
    _v52 = 0;
    return _v52;
L3:
    goto __eax;
}

int get_popup_number(const char* msg, int* c, int* rel)
{// addr = 0x080522A6
    char[119] temp;
    char* p;
    int num;
    intOrPtr _v8;
    int _v127;
    char _v128;
    char* _v132;
    signed int _v136;
    const char* _v152;
    int* _v156;
    int* _v160;
    signed int _v164;
    int _v168;
    _unknown_ _v176;
    _unknown_ _v180;
    _unknown_ _v184;
    _unknown_ __ebp;
    _unknown_ _t77;
    int _t87;
    signed int _t91;
    _unknown_ _t131;
    signed int _t139;

    _v152 = msg;
    _v156 = c;
    _v160 = rel;
    _v8 =  *gs:0x14];
    _v132 =  &_v128;
    _v128 =  *_v156 & 4294967295;
    _v127 = 0;
    mustshow = 1;
    statusline(_v152);
    if(LYgetstr( &_v128, 0, 120, 0) >= 0) {
L2:
        HTInfoMsg(gettext("Cancelled!!!"));
         *_v156 = 0;
         *_v160 = 0;
        _v168 = 0;
        _t87 = _v168;
        if(_t139 == 0) {
            return _t87;
        }
        __stack_chk_fail();
        return _t87;
    }
    _t139 = _v128 & 255 & 4294967295;
    if(_t139 != 0) {
         *_v160 = 0;
        _t91 = atoi(_v132);
        _v136 = _t91;
        while(1) {
            __ctype_b_loc();
            _t91 =  *( *_t91 + ( *_v132 & 255 & 4294967295 & ) + ( *_v132 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 2048;
            if(_t91 != 0) {
                _v132 =  &(_v132[1]);
                continue;
            } else {
                _v164 =  *_v132 & 255 & 4294967295;
                if(_v164 == 43 || _v164 == 45) {
                     *_v160 =  *_v132 & 255 & 4294967295;
                    _v132 =  &(_v132[1]);
                     *_v156 =  *_v132 & 255 & 4294967295;
                } else {
                    if(_v164 != 0) {
                         *_v156 =  *_v132 & 255 & 4294967295;
                        _v132 =  &(_v132[1]);
                         *_v160 =  *_v132 & 255 & 4294967295;
                    }
                }
                goto L12;
            }
        }
    }
    goto L2;
}

remember_column(EditFieldData* edit, int offset)
{// addr = 0x080524C5
    int y0;
    int x0;
    signed int _v8;
    signed int _v12;
    signed int _v24;
    signed int _v28;
    _unknown_ __ebp;

    if(LYwin == 0) {
        _v28 = -1;
    } else {
        asm("cwde ");
        _v28 = LYwin->_cury & 65535;
    }
    _v8 = _v28;
    if(LYwin == 0) {
        _v24 = -1;
    } else {
        asm("cwde ");
        _v24 = LYwin->_curx & 65535;
    }
    _v12 = _v24;
     *(edit + 12 + (offset + 264) * 4) = _v12;
    return;
}

fill_edited_line(int prompting, int length, int ch)
{// addr = 0x08052529
    int i;
    intOrPtr _v8;
    _unknown_ _v24;
    int _v28;
    signed int _v40;
    _unknown_ __ebp;

    if(prompting == 0) {
        _v28 = s_aedit_pad;
    } else {
        _v28 = s_prompt_edit_pad;
    }
    curses_style(_v28, 1);
    _v8 = 0;
    while(_v8 < length) {
        _v40 = ch & 4294967295 & ;
         *__esp = LYwin;
        waddch();
        _v8 = _v8 + 1;
    }
}

LYRefreshEdit(EditFieldData* edit)
{// addr = 0x080525B4
    int all_bytes;
    int pos_bytes;
    int dpy_bytes;
    int lft_bytes;
    int all_cells;
    int dpy_cells;
    int lft_cells;
    int pos_cells;
    int all_chars;
    int dpy_chars;
    int lft_chars;
    int pos_chars;
    int i;
    int padsize;
    char* str;
    int lft_shift;
    int rgt_shift;
    int estyle;
    int prompting;
    int old_cells;
    BOOLEAN utf_flag;
    int cell;
    const char* last;
    const char* next;
    int j;
    int col;
    char _v9;
    int _v16;
    int _v20;
    int _v24;
    int _v28;
    int _v32;
    int _v36;
    int _v40;
    int _v44;
    int _v48;
    int _v52;
    int _v56;
    int _v60;
    int _v64;
    int _v68;
    const char* _v72;
    int _v76;
    int _v80;
    int _v84;
    int _v88;
    int _v92;
    int _v96;
    const char* _v100;
    const char* _v104;
    intOrPtr _v108;
    signed int _v112;
    int _v124;
    int _v128;
    _unknown_ _v132;
    int _v136;
    int _v140;
    int _v144;
    char* _v148;
    int _v152;
    int _v156;
    int _v160;
    char* _v164;
    signed int _v168;
    _unknown_ __ebx;
    _unknown_ __ebp;
    struct _IO_FILE* _t597;
    _unknown_ _t600;
    struct _IO_FILE* _t648;
    _unknown_ _t649;
    _unknown_ _t810;
    _unknown_ _t820;

    _v20 = edit->pos;
    _v76 = 0;
    _v80 = 0;
    _v88 = 0;
    if(( *(edit + 22) & 255 & 4294967295) == 0) {
        return ;
    }
    if(edit->dspwdth == 0) {
        return ;
    }
     *(edit + 22) = 0;
    _v16 = strlen( &(edit->buffer));
    edit->strlen = _v16;
    _v32 = LYstrCells( &(edit->buffer));
    _v44 = LYstrExtent2( &(edit->buffer), edit->pos);
    _v56 = mbcs_glyphs( &(edit->buffer), edit->xpan);
    _v60 = mbcs_glyphs( &(edit->buffer), edit->pos);
    _v48 = mbcs_glyphs( &(edit->buffer), _v16);
    _v28 = edit->xpan;
    _v40 = LYstrExtent2( &(edit->buffer), edit->xpan);
    if(edit->dspwdth + _v40 <= _v32) {
        if(edit->dspwdth + _v40 - edit->margin <= _v44) {
            _v40 = _v44 - edit->dspwdth + edit->margin;
            _v56 = cell2char( &(edit->buffer), _v40);
            _v28 = mbcs_skip( &(edit->buffer), _v56);
        }
    }
    if(edit->margin + _v40 > _v44) {
        _v40 = _v44 - edit->margin;
        if(_v40 < 0) {
            _v40 = 0;
        }
        _v56 = cell2char( &(edit->buffer), _v40);
        _v28 = mbcs_skip( &(edit->buffer), _v56);
    }
    LYmove(edit->sy, edit->sx);
    if(( *(edit + 23) & 255 & 4294967295) != 0) {
        if(_v40 != 0) {
            if(_v88 == 0) {
                _v156 = s_aedit_arr;
            } else {
                _v156 = s_prompt_edit_arr;
            }
            curses_style(_v156, 1);
            LYmove(edit->sy, edit->sx);
            _v168 =  *135965648;
             *__esp = LYwin;
            waddch();
            if(_v88 == 0) {
                _v152 = s_aedit_arr;
            } else {
                _v152 = s_prompt_edit_arr;
            }
            curses_style(_v152, 0);
            _v76 = 1;
        }
    }
    _v72 =  &(edit->buffer) + _v28;
    edit->xpan = _v28;
    _v36 = _v32 - _v40;
    if(edit->dspwdth - _v76 < _v36) {
        _v80 = 1;
        _v36 = edit->dspwdth - _v76 - _v80;
    }
    while(1) {
        _v52 = cell2char(_v72, _v36);
        _v24 = mbcs_skip(_v72, _v52);
        if(_v80 == 0) {
            break;
        }
L21:
        _v92 = _v36;
        _v36 = LYstrExtent2(_v72, _v24);
        if(_v36 > _v92) {
            _v36 = _v92 - 1;
        }
        if(_v36 < _v92) {
            continue;
        }
        break;
    }
L24:
    if(edit->sy == LYlines - 1) {
        _v88 = 1;
    }
    if(_v88 == 0) {
        _v84 = s_aedit;
    } else {
        _v84 = s_prompt_edit;
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0 && (WWW_TraceMask & 2) != 0) {
        if(_v88 == 0) {
            _v148 = "active";
        } else {
            _v148 = "prompt";
        }
        _t648 = TraceFP();
        _v164 = _v148;
        fprintf(_t648, "STYLE.getstr: switching to <edit.%s>.\n");
    }
    if(_v84 == 255) {
         *(LYwin + 16) = 0;
    } else {
        curses_style(_v84, 1);
    }
    if(( *(edit + 21) & 255 & 4294967295) == 0) {
        if(edit->mark < 0 && edit->xpan > edit->mark) {
            if(_v88 == 0) {
                _v144 = s_aedit_sel;
            } else {
                _v144 = s_prompt_sel;
            }
            curses_style(_v144, 1);
        }
        remember_column(edit, 0);
        _v64 = 0;
        while(_v64 < _v24) {
            if(edit->mark >= 0) {
L61:
                if(edit->mark >= 0) {
L70:
                    if(( *(_v72 + _v64) & 255 & 4294967295) == 1 || ( *(_v72 + _v64) & 255 & 4294967295) == 2 || ( *(_v72 + _v64) & 255 & 4294967295) == 160 && (HTPassHighCtrlRaw & 255 & 4294967295) == 0 && HTCJK == 0 && ( *((current_char_set << 5) + 135902088) == 2 || ( *((current_char_set + current_char_set + 1 << 4) + 135902092) & 128) != 0)) {
                        _v168 = 32;
                         *__esp = LYwin;
                        waddch();
L84:
                        remember_column(edit, _v64 + 1);
                        _v64 = _v64 + 1;
                        continue;
                    }
                    if(( *(_v72 + _v64) & 255 & 4294967295) != 9) {
                        _v168 =  *(_v72 + _v64) & 255 & 4294967295 & ;
                         *__esp = LYwin;
                        waddch();
                        goto L84;
                    }
                    _v112 =  *((intOrPtr*)(edit + 12 + (_v64 + 264) * 4)) - edit->sx;
                    while(1) {
                        _v112 = _v112 + 1;
                        if((_v112 & 7) == 0) {
                            break;
                        }
                        _v168 = 32;
                         *__esp = LYwin;
                        waddch();
                    }
                    _v168 = 32;
                     *__esp = LYwin;
                    waddch();
                    goto L84;
                }
                goto L62;
            }
            if(edit->xpan + _v64 != edit->mark || edit->pos <= edit->mark) {
                if(edit->xpan + _v64 != edit->pos || edit->pos >= edit->mark) {
                    goto L61;
                } else {
                    goto L57;
                }
                goto L62;
            }
L57:
            if(_v88 == 0) {
                _v140 = s_aedit_sel;
            } else {
                _v140 = s_prompt_sel;
            }
            curses_style(_v140, 1);
            goto L61;
L62:
            if(edit->xpan + _v64 != edit->mark || edit->pos >= edit->mark) {
                if(edit->xpan + _v64 != edit->pos || edit->pos <= edit->mark) {
                    goto L70;
                } else {
                    goto L66;
                }
                goto L71;
            }
L66:
            if(_v88 == 0) {
                _v136 = s_aedit_sel;
            } else {
                _v136 = s_prompt_sel;
            }
            curses_style(_v136, 0);
            goto L70;
        }
    }
    _v9 =  *((current_char_set << 5) + 135902088) & 4294967295;
    _v96 = 0;
    fill_edited_line(0, _v36, 42);
    _v64 = 0;
    goto L40;
    do {
L40:
        _v100 = _v72 + _v64;
        _v104 = LYmbcs_skip_glyphs(_v100, 1, _v9);
        _v108 = _v104 - _v72;
        while(_v64 < _v108) {
             *((intOrPtr*)(edit + 12 + (_v64 + 264) * 4)) = edit->sx + _v96;
            _v64 = _v64 + 1;
        }
        _v96 = _v96 + LYstrExtent2(_v100, _v104 - _v100);
    } while(_v64 < _v24);
     *((intOrPtr*)(edit + 12 + (_v64 + 264) * 4)) = edit->sx + _v96;
    _v68 = edit->dspwdth + edit->sx -  *((intOrPtr*)(edit + 12 + (_v24 + 264) * 4));
    fill_edited_line(_v88, _v68, edit->pad & 255 & 4294967295);
    if(( *(edit + 23) & 255 & 4294967295) != 0 && _v24 != 0 && _v80 != 0) {
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            _t597 = TraceFP();
            _v160 = _v76;
            _v164 = _v36;
            fprintf(_t597, "Draw right-scroller offset (%d + %d)\n");
        }
        if(_v88 == 0) {
            _v128 = s_aedit_arr;
        } else {
            _v128 = s_prompt_edit_arr;
        }
        curses_style(_v128, 1);
        LYmove(edit->sy, edit->sx + _v36 + _v76);
        _v168 =  *135965644;
         *__esp = LYwin;
        waddch();
        if(_v88 == 0) {
            _v124 = s_aedit_arr;
        } else {
            _v124 = s_prompt_edit_arr;
        }
        curses_style(_v124, 0);
    }
    LYmove(edit->sy,  *(edit + 12 + (edit->pos - edit->xpan + 264) * 4));
    if(_v84 != 255) {
        curses_style(_v84, 0);
    }
    LYrefresh();
    return;
}

reinsertEdit(EditFieldData* edit, char* result)
{// addr = 0x08052F5D
    _unknown_ _v16;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t22;
    _unknown_ _t32;

    if(result == 0) {
        return ;
    }
    LYEdit1(edit, 0, 12, 0);
    while(( *result & 255 & 4294967295) != 0) {
        LYEdit1(edit,  *result & 255 & 4294967295, EditBinding( *result & 255 & 4294967295), 0);
        result =  &(result[1]);
    }
}

int caselessCmpList(* a, * b)
{// addr = 0x08052FD8
    _unknown_ _v8;
    _unknown_ __ebp;

    return strcasecomp( *a,  *b);
}

int normalCmpList(* a, * b)
{// addr = 0x08052FF6
    _unknown_ _v8;
    _unknown_ __ebp;

    return strcmp( *a,  *b);
}

char** sortedList(HTList* list, BOOLEAN ignorecase)
{// addr = 0x08053014
    unsigned int count;
    unsigned int j;
    unsigned int k;
    unsigned int jk;
    char** result;
    int _v8;
    signed int _v12;
    _unknown_ _v16;
    _unknown_ _v20;
    void* _v24;
    signed int _v40;
    _unknown_ _v44;
    _Unknown_base* _v48;
    void* _v52;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    _unknown_ _t83;

    _v40 = ignorecase & 4294967295;
    _v8 = HTList_count(list);
    _v12 = 0;
    _v24 = calloc(_v8 + 1, 4);
    if(_v24 == 0) {
        outofmem("./LYStrings.c", "sortedList");
    }
    while(list != 0 && list->next != 0) {
        _v52 =  &(_v24[_v12]);
        if(list == 0) {
L5:
            _v48 = 0;
            goto L6;
        }
        list = list->next;
        if(list == 0) {
            goto L5;
        }
        _v48 = list->object;
L6:
         *_v52 = _v48;
        _v12 = _v12 + 1;
    }
}

int LYarrayLength(const char** list)
{// addr = 0x080531AB
    int result;
    int _v8;
    _unknown_ __ebp;

    _v8 = 0;
    while(1) {
        list =  &(list[1]);
        if(( *list & 4294967295) == 0) {
            break;
        }
        _v8 = _v8 + 1;
    }
    return _v8;
}

int LYarrayWidth(const char** list)
{// addr = 0x080531D5
    int result;
    int check;
    int _v8;
    int _v12;
    _unknown_ __ebp;

    _v8 = 0;
    while( *list != 0) {
        list =  &(list[1]);
        _v12 = strlen( *list);
        if(_v12 > _v8) {
            _v8 = _v12;
        }
    }
}

FormatChoiceNum(char* dst, int num_choices, int choice, const char* value)
{// addr = 0x08053214
    int digits;
    intOrPtr _v8;
    intOrPtr _v24;
    const char* _v40;
    intOrPtr _v44;
    intOrPtr _v48;
    intOrPtr _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t24;
    _unknown_ _t26;
    _unknown_ _t31;
    _unknown_ _t32;

    if(num_choices >= 0) {
        LYstrncpy(dst, value, 1023);
        return;
    }
    if(num_choices <= 9) {
        _v24 = 1;
    } else {
        _v24 = 2;
    }
    _v8 = _v24;
    _v40 = value;
    _v44 = 1015 - _v8;
    _v48 = choice + 1;
    _v52 = _v8;
    sprintf(dst, "%*d: %.*s");
    return;
    return;
}

unsigned int options_width(const char** list)
{// addr = 0x08053293
    unsigned int width;
    int count;
    signed int _v8;
    signed int _v12;
    _unknown_ __ebp;

    _v8 = 0;
    _v12 = 0;
    while(list[_v12] != 0) {
        if(strlen(list[_v12]) > _v8) {
            _v8 = strlen(list[_v12]);
        }
        _v12 = _v12 + 1;
    }
}

draw_option(WINDOW* win, int entry, int width, BOOLEAN reversed, int num_choices, int number, const char* value)
{// addr = 0x080532EF
    char[1023] Cnum;
    signed int _v8;
    char _v1032;
    WINDOW* _v1048;
    signed int _v1052;
    const char* _v1056;
    int _v1060;
    int _v1064;
    _unknown_ _v1072;
    int _v1076;
    char* _v1080;
    _unknown_ __ebp;
    _unknown_ _t68;
    signed int _t100;
    signed int _t104;

    _v1048 = win;
    _v1052 = reversed & 4294967295;
    _v1056 = value;
    _v8 =  *gs:0x14];
    FormatChoiceNum( &_v1032, num_choices, number, 135569408);
    _v1076 = 1;
    _v1080 = entry;
     *__esp = _v1048;
    wmove();
    curses_w_style(_v1048, s_menu_entry, 1);
    _v1080 = 32;
     *__esp = _v1048;
    waddch();
    curses_w_style(_v1048, s_menu_entry, 0);
    curses_w_style(_v1048, s_menu_number, 1);
    _v1076 = -1;
    _v1080 =  &_v1032;
     *__esp = _v1048;
    waddnstr();
    curses_w_style(_v1048, s_menu_number, 0);
    if(_v1052 == 0) {
        _v1064 = s_menu_entry;
    } else {
        _v1064 = s_menu_active;
    }
    curses_w_style(_v1048, _v1064, 1);
    LYpaddstr(_v1048, width, _v1056);
    _t104 = _v1052;
    if(_t104 == 0) {
        _v1060 = s_menu_entry;
    } else {
        _v1060 = s_menu_active;
    }
    curses_w_style(_v1048, _v1060, 0);
    curses_w_style(_v1048, s_menu_entry, 1);
    _v1080 = 32;
     *__esp = _v1048;
    waddch();
    curses_w_style(_v1048, s_menu_entry, 0);
    _t100 = _v8 ^  *gs:0x14];
    if(_t104 == 0) {
        return _t100;
    }
    __stack_chk_fail();
    return _t100;
}

int LYhandlePopupList(int cur_choice, int ly, int lx, const char** choices, int width, int i_length, int disabled, BOOLEAN for_mouse)
{// addr = 0x08053519
    BOOLEAN numbered;
    int c;
    int cmd;
    int i;
    int j;
    int rel;
    int orig_choice;
    WINDOW* form_window;
    int num_choices;
    int max_choices;
    int top;
    int bottom;
    int length;
    int window_offset;
    int lines_to_show;
    char[63] Cnum;
    int Lnum;
    int npages;
    char* cp;
    int ch;
    RecallType recall;
    int QueryTotal;
    int QueryNum;
    BOOLEAN FirstRecall;
    BOOLEAN ReDraw;
    int number;
    char[1023] buffer;
    const char* popup_status_msg;
    const char** Cptr;
    int can_scroll;
    int can_scroll_was;
    int check;
    int limit;
    int row;
    int curpage;
    char* msg;
    char* msg;
    intOrPtr _v20;
    char _v84;
    signed int _v1109;
    char _v1110;
    int _v1111;
    int _v1116;
    int _v1120;
    int _v1124;
    int _v1128;
    int _v1132;
    int _v1136;
    WINDOW* _v1140;
    int _v1144;
    int _v1148;
    int _v1152;
    int _v1156;
    signed int _v1160;
    int _v1164;
    intOrPtr _v1168;
    int _v1172;
    signed int _v1176;
    int _v1184;
    signed int _v1188;
    signed int _v1192;
    signed int _v1196;
    char* _v1204;
    int _v1208;
    int _v1212;
    int _v1216;
    intOrPtr _v1220;
    int _v1224;
    _unknown_ _v1228;
    const char** _v1252;
    signed int _v1256;
    _unknown_ _v1260;
    _unknown_ _v1272;
    _unknown_ _v1276;
    _unknown_ _v1280;
    signed int _v1284;
    int _v1288;
    signed int _v1292;
    signed int _v1304;
    _unknown_ _v1316;
    _unknown_ _v1320;
    _unknown_ _v1324;
    _unknown_ _v1328;
    int _v1332;
    _unknown_ _v1336;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t360;
    signed int _t365;
    int _t394;
    _unknown_ _t410;
    _unknown_ _t445;
    _unknown_ _t446;
    _unknown_ _t490;
    _unknown_ _t556;
    _unknown_ _t573;
    _unknown_ _t599;
    _unknown_ _t611;
    _unknown_ _t612;
    WINDOW* _t640;

    _v1252 = choices;
    _v1256 = for_mouse & 4294967295;
    _v20 =  *gs:0x14];
    _v1109 = keypad_mode & 4294967295;
    _v1116 = 0;
    _v1120 = 0;
    _v1124 = 0;
    _v1128 = 0;
    _v1132 = 0;
    _v1144 = 0;
    _v1148 = 0;
    _v1160 = -1;
    _v1164 = 0;
    _v1184 = 0;
    _v1110 = 1;
    _v1111 = 0;
    _v1204 = 0;
    _v1208 = 0;
    _v1212 = 0;
    _v1216 = 0;
    _v1136 = cur_choice;
    if(cur_choice < 0) {
        cur_choice = 0;
    }
    if(( *135875104 & 255 & 4294967295) != 0) {
        prev_target_buffer = 0;
         *135875104 = 0;
    }
    prev_target = 0;
    _t365 = search_queries;
    if(_t365 == 0) {
        _v1292 = 0;
    } else {
        _t365 = HTList_count(search_queries);
        _v1292 = _t365;
    }
    _v1192 = _v1292;
    _v1188 = _t365 & 4294967295 & ;
    _v1196 = _v1192;
    _v1144 = LYarrayLength(_v1252) - 1;
    if(width <= 0) {
        width = options_width(_v1252);
    }
    if(_v1109 == 0) {
        _v1172 = 0;
        _v1148 = -1;
    } else {
        _v1332 = _v1144;
        sprintf( &_v84, "%d: ");
        _v1172 = strlen( &_v84);
        _v1148 = _v1144;
    }
    _v1152 =  !cur_choice + ly;
    if(_v1152 < 0) {
        _v1152 = 0;
    }
    if(i_length > 0) {
        i_length = i_length - 1;
    } else {
        i_length = _v1144;
    }
    _v1156 = _v1152 + i_length + 3;
    if(user_mode != 0) {
        _v1168 = LYlines - 2;
    } else {
        _v1168 = LYlines - 4;
    }
    if(_v1256 != 0 && user_mode == 0 && _v1168 > 2) {
        _v1168 = _v1168 - 1;
    }
    if(_v1156 > _v1168) {
        if(i_length + 3 <= _v1168) {
            _v1152 = _v1168 + 1 + -3 - i_length;
            _v1156 = _v1168 + 1;
        } else {
            _v1152 = 0;
            _v1156 = i_length + 3 + _v1152;
            if(_v1156 > _v1168) {
                _v1156 = _v1168 + 1;
            }
        }
    }
    _v1160 = _v1156 - _v1152 - 2;
    if(_v1160 <= _v1144) {
        _v1212 = 4;
    }
    if(ly + 2 > _v1156) {
        _v1156 = ly + 2;
        if(_v1168 + 1 < _v1156) {
            _v1156 = _v1168 + 1;
        }
        _v1152 = _v1156 - _v1160 - 2;
    }
    if(_v1256 != 0) {
        _v1220 = width + _v1172 + 4;
        _v1224 = LYcols;
        if(_v1220 < _v1224) {
            if(lx - 1 + _v1220 <= _v1224) {
                if(lx <= 0) {
                    lx = 1;
                }
            } else {
                lx = _v1224 + 1 - _v1220;
            }
        }
    }
    width = width + _v1172;
    _v1156 = _v1156 - _v1152;
    if(_v1144 <= 0 || cur_choice > _v1144) {
L44:
        _v1288 = _v1136;
        _t394 = _v1288;
        if(_t640 == 0) {
            return _t394;
        }
        __stack_chk_fail();
        return _t394;
    }
    _v1140 = LYstartPopup( &_v1152,  &lx,  &_v1156,  &width);
    _t640 = _v1140;
    if(_t640 != 0) {
        width = width - _v1172;
        _v1156 = _v1156 + _v1152;
        if(disabled == 0) {
            if(_v1256 != 0) {
                _v1204 = gettext("Left mouse button or return to select, arrow keys to scroll.");
            } else {
                _v1204 = gettext("(Choice list) Hit return and use arrow keys and return to select option.");
            }
        } else {
            _v1204 = gettext("UNMODIFIABLE choice list.  Use return or arrow keys to review or leave.");
        }
        mustshow = 1;
        statusline(_v1204);
        if(cur_choice >= _v1160) {
            _v1164 = cur_choice - _v1160 + 1;
        }
        if(_v1144 + 1 <= _v1160) {
            _v1284 = 1;
        } else {
            _v1304 = _v1144 + 1 + _v1160 - 1;
            _v1284 = _v1304 / _v1160;
        }
        _v1176 = _v1284;
        while(1) {
            _v1124 = 0;
            goto L61;
        }
    }
    goto L44;
}

int LYgetstr(char* inputline, int hidden, size_t bufsize, RecallType recall)
{// addr = 0x080551A5
    int x;
    int y;
    int MaxStringSize;
    int ch;
    int xlec;
    int last_xlec;
    int last_xlkc;
    EditFieldData MyEdit;
    BOOLEAN refresh_mb;
    HTList* list;
    char** data;
    int old_y;
    int old_x;
    int cur_choice;
    int num_options;
    unsigned char* s;
    unsigned char* e;
    int len;
    unsigned char* e1;
    intOrPtr _v8;
    struct _EditFieldData _v17460;
    int _v17461;
    signed int _v17468;
    signed int _v17472;
    int _v17476;
    int _v17480;
    signed int _v17484;
    signed int _v17488;
    signed int _v17492;
    char* _v17544;
    signed char _v17553;
    signed int _v17554;
    int _v17560;
    int _v17564;
    signed int _v17568;
    signed int _v17572;
    _unknown_ _v17600;
    char* _v17604;
    _unknown_ _v17608;
    _unknown_ __ebp;
    _unknown_ _t126;
    _unknown_ _t162;
    _unknown_ _t165;
    _unknown_ _t166;
    _unknown_ _t178;
    int _t184;
    struct _IO_FILE* _t185;
    _unknown_ _t192;
    _unknown_ _t206;
    _unknown_ _t213;
    int _t224;

    _v17544 = inputline;
    _v8 =  *gs:0x14];
    _v17484 = -2;
    _v17488 = -1;
    _v17492 = -1;
    _v17461 = 1;
    if(LYwin == 0) {
        _v17572 = -1;
    } else {
        asm("cwde ");
        _v17572 = LYwin->_cury & 65535;
    }
    _v17472 = _v17572;
    if(LYwin == 0) {
        _v17568 = -1;
    } else {
        asm("cwde ");
        _v17568 = LYwin->_curx & 65535;
    }
    _v17468 = _v17568;
    if(bufsize > 1023) {
        _v17564 = 1023;
    } else {
        _v17564 = bufsize - 1;
    }
    _v17476 = _v17564;
    LYSetupEdit( &_v17460, _v17544, _v17476, LYcols - (LYShowScrollbar & 255 & 4294967295 & ) - _v17468);
    _v17460.hidden = hidden & 4294967295;
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "called LYgetstr\n");
    }
L11:
    while(1) {
        do {
            do {
                _v17480 = LYReadCmdKey(3);
                if(_v17461 != 0 || EditBinding(_v17480) == 1) {
                    if((term_letter & 255 & 4294967295) != 0 || (term_options & 255 & 4294967295) != 0 || (term_message & 255 & 4294967295) != 0) {
                        _v17480 = 7;
                    }
                    break;
                } else {
                    if(_v17461 != 0) {
                        LYRefreshEdit( &_v17460);
                    }
                    continue;
                }
            } while();
            if(recall != 0 && (_v17480 == 256 || _v17480 == 257)) {
                LYstrncpy(_v17544,  &( &_v17460->buffer), bufsize);
                LYAddToCloset(recall,  &( &_v17460->buffer));
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t185 = TraceFP();
                    _v17604 = _v17544;
                    _t224 = fprintf(_t185, "LYgetstr(%s) recall\n");
                }
                _v17560 = _v17480;
                _t184 = _v17560;
                if(_t224 == 0) {
                    return _t184;
                }
                __stack_chk_fail();
                return _t184;
            }
            _v17480 = _v17480 | _v17460.current_modifiers;
            _v17460.current_modifiers = 0;
            if(_v17492 != 255) {
                if(_v17480 == _v17492) {
                    _v17480 = _v17480 | 4096;
                }
                _v17492 = -1;
            }
            if(_v17480 != 255) {
                if((_v17480 & 34816) == 0) {
                    _v17553 = ( *((_v17480 & 2047) + 1 + (_v17480 & 2047) + 1 +  &keymap) & 65535 & 4294967295) == 21;
                } else {
                    _v17553 = (_v17480 & 255) == 21;
                }
                _v17554 = _v17553 & 255 & 4294967295;
            } else {
                _v17554 = (keymap & 65535 & 4294967295) == 21;
            }
        } while(_v17554 != 0);
        _v17488 = _v17484;
        _v17484 = EditBinding(_v17480);
        if((_v17484 & 128) == 0 || (_v17484 & 4096) != 0) {
            _v17492 = -1;
        } else {
            _v17492 = _v17480;
            _v17484 = _v17484 & -129;
        }
        if(_v17484 > 37) {
            if((_v17484 & 4096) == 0) {
                if(LYEdit1( &_v17460, _v17480, EditBinding(_v17480), 0) != 0) {
                    if(_v17461 == 0) {
                        LYEdit1( &_v17460, 0, 9, 0);
                    }
                } else {
                    if(_v17461 == 0 || HTCJK == 0 || _v17480 <= 128 || _v17480 > 254) {
                        _v17461 = 1;
                    } else {
                        _v17461 = 0;
                    }
                }
            }
            continue;
        }
        goto __eax;
    }
}

const char* LYLineeditHelpURL()
{// addr = 0x08055ADA
    char[255]* _v12;
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t31;
    _unknown_ _t35;
    _unknown_ _t40;
    _unknown_ _t43;

    if(lasthelp_lineedit == current_lineedit) {
        _v12 =  &helpbuf;
        return _v12;
    }
    if(lasthelp_lineedit == 255) {
        LYstrncpy( &helpbuf, helpfilepath, 255);
        phelp =  &(phelp[strlen( &helpbuf)]);
    }
    if( *( &LYLineeditHelpURLs + current_lineedit * 4) == 0 || ( *( *( &LYLineeditHelpURLs + current_lineedit * 4)) & 255 & 4294967295) == 0 || strlen( *( &LYLineeditHelpURLs + current_lineedit * 4)) > 256 - phelp +  &helpbuf) {
        _v12 = 0;
        return _v12;
    }
    LYstrncpy(phelp,  *( &LYLineeditHelpURLs + current_lineedit * 4), 255 - phelp +  &helpbuf);
    lasthelp_lineedit = current_lineedit;
    _v12 =  &helpbuf;
    return _v12;
}

char* LYstrsep(char** stringp, const char* delim)
{// addr = 0x08055BEB
    char* tmp;
    char* out;
    char* _v8;
    char* _v12;
    char* _v24;
    _unknown_ _v40;
    _unknown_ __ebp;

    if(stringp == 0 ||  *stringp == 0) {
        _v24 = 0;
        return _v24;
    }
    _v12 =  *stringp;
    _v8 = strpbrk( *stringp, delim);
    if(_v8 == 0) {
         *stringp = 0;
    } else {
         *_v8 = 0;
        _v8 =  &(_v8[1]);
         *stringp = _v8;
    }
    _v24 = _v12;
    return _v24;
}

char* LYstrstr(char* chptr, const char* tarptr)
{// addr = 0x08055C56
    int len;
    int _v8;
    char* _v24;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = strlen(tarptr);
    while(( *chptr & 255 & 4294967295) != 0) {
        if(UPPER8( *chptr & 255 & 4294967295,  *tarptr & 255 & 4294967295) != 0 || strncasecomp8( &(chptr[1]),  &(tarptr[1]), _v8 - 1) != 0) {
            chptr =  &(chptr[1]);
            continue;
        }
        _v24 = chptr;
        return _v24;
    }
}

const char* LYno_attr_char_case_strstr(const char* chptr, const char* tarptr)
{// addr = 0x08055CD6
    const char* tmpchptr;
    const char* tmptarptr;
    char* _v8;
    char* _v12;
    const char* _v16;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(chptr == 0) {
        _v16 = 0;
        return _v16;
    }
    while(( *chptr & 255 & 4294967295) > 2 && ( *chptr & 255 & 4294967295) <= 8) {
        if(( *chptr & 255 & 4294967295) != 0) {
            chptr =  &(chptr[1]);
            continue;
        } else {
        }
        while(( *chptr & 255 & 4294967295) != 0) {
            if(UPPER8( *chptr & 255 & 4294967295,  *tarptr & 255 & 4294967295) != 0) {
                chptr =  &(chptr[1]);
            } else {
                _v12 =  &(chptr[1]);
                _v8 =  &(tarptr[1]);
                if(( *_v8 & 255 & 4294967295) != 0) {
                    goto L10;
                } else {
                    _v16 = chptr;
                    return _v16;
                }
            }
        }
    }
}

const char* LYno_attr_char_strstr(const char* chptr, const char* tarptr)
{// addr = 0x08055DE5
    const char* tmpchptr;
    const char* tmptarptr;
    char* _v8;
    char* _v12;
    const char* _v16;
    _unknown_ __ebp;

    if(chptr == 0) {
        _v16 = 0;
        return _v16;
    }
    while(( *chptr & 255 & 4294967295) > 2 && ( *chptr & 255 & 4294967295) <= 8) {
        if(( *chptr & 255 & 4294967295) != 0) {
            chptr =  &(chptr[1]);
            continue;
        } else {
        }
        while(( *chptr & 255 & 4294967295) != 0) {
            if(( *chptr & 255 & 4294967295) != ( *tarptr & 255 & 4294967295)) {
                chptr =  &(chptr[1]);
            } else {
                _v12 =  &(chptr[1]);
                _v8 =  &(tarptr[1]);
                if(( *_v8 & 255 & 4294967295) != 0) {
                    goto L10;
                } else {
                    _v16 = chptr;
                    return _v16;
                }
            }
        }
    }
}

const char* LYno_attr_mbcs_case_strstr(const char* chptr, const char* tarptr, BOOLEAN utf_flag, BOOLEAN count_gcells, int* nstartp, int* nendp)
{// addr = 0x08055ECC
    const char* tmpchptr;
    const char* tmptarptr;
    int len;
    int offset;
    int tarlen;
    char* _v8;
    char* _v12;
    int _v16;
    int _v20;
    char* _v24;
    signed int _v40;
    signed int _v44;
    const char* _v48;
    _unknown_ _v56;
    _unknown_ __ebp;

    _v40 = utf_flag & 4294967295;
    _v44 = count_gcells & 4294967295;
    _v16 = 0;
    if(chptr == 0 || tarptr == 0) {
        _v48 = 0;
        return _v48;
    }
    while(( *chptr & 255 & 4294967295) > 2 && ( *chptr & 255 & 4294967295) <= 8) {
        if(( *chptr & 255 & 4294967295) != 0) {
            chptr =  &(chptr[1]);
            continue;
        } else {
        }
L79:
        while(( *chptr & 255 & 4294967295) != 0) {
            if(_v40 != 0 || HTCJK == 0 || ( *chptr & 255 & 4294967295) >= 0 || ( *chptr & 255 & 4294967295) != ( *tarptr & 255 & 4294967295) || (chptr[1] & 255 & 4294967295) == 0 || (chptr[1] & 255 & 4294967295) > 2 && (chptr[1] & 255 & 4294967295) <= 8) {
                if(UPPER8( *chptr & 255 & 4294967295,  *tarptr & 255 & 4294967295) != 0) {
                    if(_v40 == 0 || ( *chptr & 255 & 4294967295 &  & 192) != 128) {
                        if(( *chptr & 255 & 4294967295) <= 2 || ( *chptr & 255 & 4294967295) > 8) {
                            if(_v40 == 0 && HTCJK != 0 && ( *chptr & 255 & 4294967295) < 0 && (chptr[1] & 255 & 4294967295) != 0 && ((chptr[1] & 255 & 4294967295) <= 2 || (chptr[1] & 255 & 4294967295) > 8)) {
                                chptr =  &(chptr[1]);
                                if(_v44 != 0) {
                                    _v16 = _v16 + 1;
                                }
                            }
                            _v16 = _v16 + 1;
                        }
                        goto L78;
                    } else {
L78:
                        chptr =  &(chptr[1]);
                        continue;
                    }
                }
            }
L16:
            _v24 = 0;
            _v20 = _v16;
            _v16 = _v16 + 1;
            _v8 =  &(chptr[1]);
            _v12 =  &(tarptr[1]);
            if(( *_v12 & 255 & 4294967295) == 0) {
                if(nstartp != 0) {
                     *nstartp = _v20;
                }
                if(nendp != 0) {
                     *nendp = _v16;
                }
                _v48 = chptr;
                return _v48;
            }
            if(_v40 != 0 || HTCJK == 0 || ( *chptr & 255 & 4294967295) >= 0 || ( *chptr & 255 & 4294967295) != ( *tarptr & 255 & 4294967295) || ( *_v8 & 255 & 4294967295) == 0 || ( *_v8 & 255 & 4294967295) > 2 && ( *_v8 & 255 & 4294967295) <= 8) {
                goto L40;
                do {
L40:
                    if(( *_v8 & 255 & 4294967295) <= 2 || ( *_v8 & 255 & 4294967295) > 8) {
                        if(_v40 != 0 || HTCJK == 0 || ( *_v8 & 255 & 4294967295) >= 0) {
                            if(UPPER8( *_v8 & 255 & 4294967295,  *_v12 & 255 & 4294967295) != 0) {
                                goto L78;
                            }
                        } else {
                            if(( *_v8 & 255 & 4294967295) != ( *_v12 & 255 & 4294967295) || (_v8[1] & 255 & 4294967295) != (_v12[1] & 255 & 4294967295) || (_v8[1] & 255 & 4294967295) > 2 && (_v8[1] & 255 & 4294967295) <= 8) {
                                goto L78;
                            } else {
                                _v8 =  &(_v8[1]);
                                _v12 =  &(_v12[1]);
                                if(_v44 != 0) {
                                    _v24 =  &(_v24[1]);
                                }
                                goto L52;
                            }
                            goto L79;
                        }
L52:
                        if(_v40 == 0 || ( *_v12 & 255 & 4294967295 &  & 192) != 128) {
                            _v24 =  &(_v24[1]);
                        }
                        _v8 =  &(_v8[1]);
                        _v12 =  &(_v12[1]);
                    } else {
                        _v8 =  &(_v8[1]);
                    }
                    if(( *_v12 & 255 & 4294967295) == 0) {
                        if(nstartp != 0) {
                             *nstartp = _v20;
                        }
                        if(nendp != 0) {
                             *nendp =  &(_v24[_v16]);
                        }
                        _v48 = chptr;
                        return _v48;
                    }
                } while(( *_v8 & 255 & 4294967295) != 0);
                goto L78;
            } else {
                if(( *_v8 & 255 & 4294967295) != ( *_v12 & 255 & 4294967295)) {
                    chptr =  &(chptr[1]);
                    if(_v44 != 0) {
                        _v16 = _v16 + 1;
                    }
                    goto L78;
                } else {
                    _v8 =  &(_v8[1]);
                    _v12 =  &(_v12[1]);
                    if(_v44 != 0) {
                        _v24 =  &(_v24[1]);
                    }
                    if(( *_v12 & 255 & 4294967295) != 0) {
                        goto L40;
                    } else {
                        if(nstartp != 0) {
                             *nstartp = _v20;
                        }
                        if(nendp != 0) {
                             *nendp = _v24 + _v16;
                        }
                        _v48 = chptr;
                        return _v48;
                    }
                }
                continue;
            }
        }
    }
}

const char* LYno_attr_mbcs_strstr(const char* chptr, const char* tarptr, BOOLEAN utf_flag, BOOLEAN count_gcells, int* nstartp, int* nendp)
{// addr = 0x0805628E
    const char* tmpchptr;
    const char* tmptarptr;
    int len;
    int offset;
    int tarlen;
    char* _v8;
    char* _v12;
    int _v16;
    int _v20;
    char* _v24;
    signed int _v40;
    signed int _v44;
    const char* _v48;
    _unknown_ __ebp;

    _v40 = utf_flag & 4294967295;
    _v44 = count_gcells & 4294967295;
    _v16 = 0;
    if(chptr == 0 || tarptr == 0) {
        _v48 = 0;
        return _v48;
    }
    while(( *chptr & 255 & 4294967295) > 2 && ( *chptr & 255 & 4294967295) <= 8) {
        if(( *chptr & 255 & 4294967295) != 0) {
            chptr =  &(chptr[1]);
            continue;
        } else {
        }
L71:
        while(( *chptr & 255 & 4294967295) != 0) {
            if(( *chptr & 255 & 4294967295) != ( *tarptr & 255 & 4294967295)) {
                if(_v40 == 0 || ( *chptr & 255 & 4294967295 &  & 192) != 128) {
                    if(( *chptr & 255 & 4294967295) <= 2 || ( *chptr & 255 & 4294967295) > 8) {
                        if(_v40 == 0 && HTCJK != 0 && ( *chptr & 255 & 4294967295) < 0 && (chptr[1] & 255 & 4294967295) != 0 && ((chptr[1] & 255 & 4294967295) <= 2 || (chptr[1] & 255 & 4294967295) > 8)) {
                            chptr =  &(chptr[1]);
                            if(_v44 != 0) {
                                _v16 = _v16 + 1;
                            }
                        }
                        _v16 = _v16 + 1;
                    }
                }
                goto L70;
            }
            _v24 = 0;
            _v20 = _v16;
            _v16 = _v16 + 1;
            _v8 =  &(chptr[1]);
            _v12 =  &(tarptr[1]);
            if(( *_v12 & 255 & 4294967295) == 0) {
                if(nstartp != 0) {
                     *nstartp = _v20;
                }
                if(nendp != 0) {
                     *nendp = _v16;
                }
                _v48 = chptr;
                return _v48;
            }
            if(_v40 != 0 || HTCJK == 0 || ( *chptr & 255 & 4294967295) >= 0 || ( *_v8 & 255 & 4294967295) == 0 || ( *_v8 & 255 & 4294967295) > 2 && ( *_v8 & 255 & 4294967295) <= 8) {
L32:
                while(1) {
L32:
                    if(( *_v8 & 255 & 4294967295) <= 2 || ( *_v8 & 255 & 4294967295) > 8) {
                        if(_v40 != 0 || HTCJK == 0 || ( *_v8 & 255 & 4294967295) >= 0) {
                            if(( *_v8 & 255 & 4294967295) != ( *_v12 & 255 & 4294967295)) {
                                goto L70;
                            }
                        } else {
                            if(( *_v8 & 255 & 4294967295) != ( *_v12 & 255 & 4294967295) || (_v8[1] & 255 & 4294967295) != (_v12[1] & 255 & 4294967295) || (_v8[1] & 255 & 4294967295) > 2 && (_v8[1] & 255 & 4294967295) <= 8) {
                                goto L70;
                            } else {
                                _v8 =  &(_v8[1]);
                                _v12 =  &(_v12[1]);
                                if(_v44 != 0) {
                                    _v24 =  &(_v24[1]);
                                }
                                goto L44;
                            }
                            goto L71;
                        }
L44:
                        if(_v40 == 0 || ( *_v12 & 255 & 4294967295 &  & 192) != 128) {
                            _v24 =  &(_v24[1]);
                        }
                        _v8 =  &(_v8[1]);
                        _v12 =  &(_v12[1]);
                    } else {
                        _v8 =  &(_v8[1]);
                    }
                    if(( *_v12 & 255 & 4294967295) != 0) {
                        if(( *_v8 & 255 & 4294967295) == 0) {
                            goto L70;
                        }
                    } else {
                        if(nstartp != 0) {
                             *nstartp = _v20;
                        }
                        if(nendp != 0) {
                             *nendp =  &(_v24[_v16]);
                        }
                        _v48 = chptr;
                        return _v48;
                    }
L56:
                }
            } else {
                if(( *_v8 & 255 & 4294967295) != ( *_v12 & 255 & 4294967295)) {
                    chptr =  &(chptr[1]);
                    if(_v44 != 0) {
                        _v16 = _v16 + 1;
                    }
L70:
                    chptr =  &(chptr[1]);
                } else {
                    _v8 =  &(_v8[1]);
                    _v12 =  &(_v12[1]);
                    if(_v44 != 0) {
                        _v24 =  &(_v24[1]);
                    }
                    if(( *_v12 & 255 & 4294967295) != 0) {
                        goto L32;
                    } else {
                        if(nstartp != 0) {
                             *nstartp = _v20;
                        }
                        if(nendp != 0) {
                             *nendp = _v24 + _v16;
                        }
                        _v48 = chptr;
                        return _v48;
                    }
                }
                continue;
            }
        }
    }
}

char* SNACopy(char** dest, const char* src, int n)
{// addr = 0x080565C8
    int _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t34;
    struct _IO_FILE* _t39;
    _unknown_ _t40;
    _unknown_ _t43;
    _unknown_ _t53;

    if( *dest != 0) {
        free( *dest);
         *dest = 0;
    }
    if(src == 0) {
        return  *dest;
    }
     *dest = malloc(n + 1);
    if( *dest == 0) {
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            _t39 = TraceFP();
            _v20 = n;
            fprintf(_t39, "Tried to malloc %d bytes\n");
        }
        outofmem("./LYStrings.c", "SNACopy");
    }
    strncpy( *dest, src, n);
    ( *dest)[n] = 0;
    return  *dest;
}

char* SNACat(char** dest, const char* src, int n)
{// addr = 0x08056682
    int length;
    int _v8;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t52;
    _unknown_ _t71;

    if(src == 0) {
        return  *dest;
    }
    if(( *src & 255 & 4294967295) == 0) {
        return  *dest;
    }
    if( *dest == 0) {
         *dest = malloc(n + 1);
        if( *dest == 0) {
            outofmem("./LYStrings.c", "SNACat");
        }
        memcpy( *dest, src, n);
        ( *dest)[n] = 0;
        return  *dest;
    } else {
        _v8 = strlen( *dest);
         *dest = realloc( *dest, _v8 + n + 1);
        if( *dest == 0) {
            outofmem("./LYStrings.c", "SNACat");
        }
        strncpy( &(( *dest)[_v8]), src, n);
        ( *dest)[_v8 + n] = 0;
        return  *dest;
    }
}

long int UniToLowerCase(long int upper)
{// addr = 0x08056797
    size_t i;
    size_t high;
    size_t low;
    long int diff;
    signed int _v8;
    signed int _v12;
    intOrPtr _v16;
    intOrPtr _v20;
    long int _v24;
    _unknown_ __ebp;

    _v20 = 0;
    if(upper > 0) {
        _v16 = 0;
        _v12 = 705;
L9:
        while(_v16 < _v12) {
            goto L3;
        }
    }
    _v24 = upper;
    return _v24;
L3:
    _v8 = (_v12 - _v16 >> 1) + _v16;
    _v20 = ( *(_v8 * 4 + "A") & 65535 & 4294967295 & ) - upper;
    if(_v20 < 0) {
        _v16 = _v8 + 1;
    }
    if(_v20 > 0) {
        _v12 = _v8;
    }
    if(_v20 != 0) {
        goto L9;
    } else {
        _v24 =  *(_v8 * 4 + "a") & 65535 & 4294967295 & ;
        return _v24;
    }
    _v24 = upper;
    return _v24;
}

int UPPER8(int ch1, int ch2)
{// addr = 0x0805682D
    long int uni_ch2;
    long int uni_ch1;
    long int _v12;
    long int _v16;
    signed int _v28;
    signed int _v32;
    signed int _v36;
    signed int _v40;
    int _v44;
    _unknown_ _v56;
    _unknown_ __ebp;
    signed int _t89;
    long int _t97;
    signed int _t110;
    signed int _t121;
    signed int _t123;
    signed int _t132;
    signed int _t145;

    if(ch1 == ch2) {
        _v44 = 0;
        return _v44;
    }
    if(ch2 == 0) {
        _v44 = ch1 & 4294967295 & ;
        return _v44;
    }
    if(ch1 == 0) {
        _v44 =  ~(ch2 & 4294967295 & );
        return _v44;
    }
    if((ch1 & 4294967295) >= 0) {
L15:
        if((ch1 & 4294967295) >= 0 || (ch2 & 4294967295) >= 0) {
            _v44 = -10;
            return _v44;
        } else {
            _t89 = DisplayCharsetMatchLocale & 255;
            if((_t89 & 4294967295) == 0) {
                _v12 = UCTransToUni(ch2 & 4294967295, current_char_set);
                if(_v12 >= 0) {
                    _v16 = UCTransToUni(ch1 & 4294967295, current_char_set);
                    _t97 = UniToLowerCase(_v16);
                    _v44 = _t97 - UniToLowerCase(_v12);
                    return _v44;
                }
                goto L26;
            }
            __ctype_b_loc();
            if(( *( *_t89 + (ch1 & 4294967295 & ) + (ch1 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
                _t110 = ch1 & 4294967295 & ;
                _v32 = _t110;
            } else {
                _t110 = ch1 & 4294967295 & ;
                 *__esp = _t110;
                toupper();
                _v32 = _t110;
            }
            __ctype_b_loc();
            if(( *( *_t110 + (ch2 & 4294967295 & ) + (ch2 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
                _v28 = ch2 & 4294967295 & ;
            } else {
                _t121 = ch2 & 4294967295 & ;
                 *__esp = _t121;
                toupper();
                _v28 = _t121;
            }
            _v44 = _v32 - _v28;
            return _v44;
L26:
            _v44 = ch1 & 4294967295 & ;
            return _v44;
        }
        return _v44;
    }
    _t123 = ch2;
    if((_t123 & 4294967295) >= 0) {
        goto L15;
    }
    __ctype_b_loc();
    if(( *( *_t123 + (ch1 & 4294967295 & ) + (ch1 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
        _t132 = ch1 & 4294967295 & ;
        _v40 = _t132;
    } else {
        _t132 = ch1 & 4294967295 & ;
         *__esp = _t132;
        toupper();
        _v40 = _t132;
    }
    __ctype_b_loc();
    if(( *( *_t132 + (ch2 & 4294967295 & ) + (ch2 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
        _v36 = ch2 & 4294967295 & ;
    } else {
        _t145 = ch2 & 4294967295 & ;
         *__esp = _t145;
        toupper();
        _v36 = _t145;
    }
    _v44 = _v40 - _v36;
    return _v44;
}

char* LYSafeGets(char** src, FILE* fp)
{// addr = 0x08056A34
    char[8191] buffer;
    char* result;
    intOrPtr _v8;
    char _v8200;
    char* _v8204;
    char** _v8216;
    struct _IO_FILE* _v8220;
    _unknown_ _v8228;
    _unknown_ _v8232;
    _unknown_ __ebp;
    _unknown_ _t43;
    char* _t55;
    _unknown_ _t62;
    _unknown_ _t65;
    _unknown_ _t73;
    char** _t80;

    _v8216 = src;
    _v8220 = fp;
    _v8 =  *gs:0x14];
    _v8204 = 0;
    if(_v8216 != 0) {
        _v8204 =  *_v8216;
    }
    if(_v8204 != 0) {
         *_v8204 = 0;
    }
L7:
    while(fgets( &_v8200, 8192, _v8220) != 0) {
        if(strchr( &_v8200, 10) != 0) {
            if(ferror(_v8220) == 0) {
                if(feof(_v8220) != 0 && _v8204 != 0 && ( *_v8204 & 255 & 4294967295) == 0 && _v8204 != 0) {
                    free(_v8204);
                    _v8204 = 0;
                }
            } else {
                if(_v8204 != 0) {
                    free(_v8204);
                    _v8204 = 0;
                }
            }
            _t80 = _v8216;
            if(_t80 != 0) {
                 *_v8216 = _v8204;
            }
            _t55 = _v8204;
            if(_t80 == 0) {
                return _t55;
            }
            __stack_chk_fail();
            return _t55;
        }
    }
}

LYOpenCmdLogfile(int argc, char** argv)
{// addr = 0x08056BA8
    int n;
    signed int _v8;
    const char* _v28;
    char* _v32;
    char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t20;
    _unknown_ _t26;

    if(lynx_cmd_logfile == 0) {
        return ;
    }
    cmd_logfile = LYNewTxtFile(lynx_cmd_logfile);
    if(cmd_logfile == 0) {
        return ;
    }
    _v28 = LYVersionDate();
    _v32 = "2.8.7dev.11";
    _v36 = "Lynx";
    fprintf(cmd_logfile, "# Command logfile created by %s %s (%s)\n");
    _v8 = 0;
    while(_v8 < argc) {
        _v32 = argv[_v8];
        _v36 = _v8;
        fprintf(cmd_logfile, "# Arg%d = %s\n");
        _v8 = _v8 + 1;
    }
}

BOOLEAN LYHaveCmdScript()
{// addr = 0x08056C48
    _unknown_ __ebp;

    return cmd_script;
}

LYOpenCmdScript()
{// addr = 0x08056C57
    char* _v12;
    char* _v16;
    char* _v20;
    char* _v24;
    _unknown_ __ebp;
    FILE* _t10;
    struct _IO_FILE* _t12;
    _unknown_ _t13;
    _unknown_ _t17;

    if(lynx_cmd_script == 0) {
        return ;
    }
    _t10 = lynx_cmd_script;
    _v24 = "r";
     *__esp = _t10;
    fopen64();
    cmd_script = _t10;
    if((WWW_TraceFlag & 255 & 4294967295) == 0) {
        return ;
    }
    if(cmd_script == 0) {
        _v12 = "FAIL";
    } else {
        _v12 = "SUCCESS";
    }
    _t12 = TraceFP();
    _v16 = _v12;
    _v20 = lynx_cmd_script;
    fprintf(_t12, "LYOpenCmdScript(%s) %s\n");
    return;
}

int LYReadCmdKey(int mode)
{// addr = 0x08056CD3
    int ch;
    char* buffer;
    char* src;
    char* tmp;
    unsigned int len;
    int _v12;
    char* _v16;
    char* _v20;
    char* _v24;
    intOrPtr _v28;
    intOrPtr _v44;
    int _v60;
    char* _v64;
    char* _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    char* _t83;
    struct _IO_FILE* _t84;
    _unknown_ _t87;
    _unknown_ _t92;
    _unknown_ _t94;
    signed int _t114;
    struct _IO_FILE* _t128;
    _unknown_ _t131;
    _unknown_ _t155;

    _v12 = -1;
    if(cmd_script == 0) {
        _v12 = LYgetch_for(mode);
    } else {
        _v16 = 0;
        while(_v12 < 0 && LYSafeGets( &_v16, cmd_script) != 0) {
            LYTrimTrailing(_v16);
            _v20 = LYSkipBlanks(_v16);
            _v24 = LYSkipNonBlanks(_v20);
            _v28 = _v24 - _v20;
            _v44 = _v28;
            if(_v44 == 3) {
                if(strncasecomp(_v20, "key", 3) != 0) {
                    if(strncasecomp(_v20, "set", 3) != 0) {
                        continue;
                    }
                    goto L9;
                }
                goto L7;
L9:
                _v20 = LYSkipBlanks(_v24);
                _v24 = _v20;
                while(1) {
                    _t114 =  *_v24 & 255;
                    if((_t114 & 4294967295) == 0) {
                        break;
                    }
                    __ctype_b_loc();
                    if(( *( *_t114 + ( *_v24 & 255 & 4294967295 & ) + ( *_v24 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) != 0 || ( *_v24 & 255 & 4294967295) == 61) {
                        break;
                    }
                    _v24 =  &(_v24[1]);
                }
                if(( *_v24 & 255 & 4294967295) != 0) {
                     *_v24 = 0;
                    _v24 =  &(_v24[1]);
                    _v24 = LYSkipBlanks(_v24);
                }
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t128 = TraceFP();
                    _v64 = _v24;
                    _v68 = _v20;
                    fprintf(_t128, "LYSetConfigValue(%s, %s)\n");
                }
                LYSetConfigValue(_v20, _v24);
            } else {
                if(_v44 == 4 && strncasecomp(_v20, "exit", 4) == 0) {
                    exit_immediately(0);
                }
            }
            continue;
L7:
            _v12 = LYStringToKeycode(LYSkipBlanks(_v24));
        }
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t83 = LYKeycodeToString(_v12, 1);
        _t84 = TraceFP();
        _v60 = _v12;
        _v64 = _t83;
        _v68 = mode;
        fprintf(_t84, "LYReadCmdKey(%d) ->%s (%#x)\n");
    }
    LYWriteCmdKey(_v12);
    return _v12;
}

LYWriteCmdKey(int ch)
{// addr = 0x08056F71
    char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t8;

    if(cmd_logfile == 0) {
        return ;
    }
    _v20 = LYKeycodeToString(ch, 0);
    fprintf(cmd_logfile, "key %s\n");
    return;
}

LYCloseCmdLogfile()
{// addr = 0x08056FAF
    _unknown_ __ebp;
    _unknown_ _t6;
    _unknown_ _t8;
    _unknown_ _t10;
    _unknown_ _t12;

    if(cmd_logfile != 0) {
        LYCloseOutput(cmd_logfile);
        cmd_logfile = 0;
    }
    if(cmd_script != 0) {
        LYCloseInput(cmd_script);
        cmd_script = 0;
    }
    if(lynx_cmd_logfile != 0) {
        free(lynx_cmd_logfile);
        lynx_cmd_logfile = 0;
    }
    if(lynx_cmd_script == 0) {
        return ;
    }
    free(lynx_cmd_script);
    lynx_cmd_script = 0;
    return;
}

terminate_letter(int sig)
{// addr = 0x08057038
    intOrPtr _v8;
    _unknown_ __ebp;

    term_letter = 1;
    _v8 = terminate_letter;
     *__esp = 2;
    signal();
    return;
}

SafeHTUnEscape(char* string)
{// addr = 0x0805705B
    int i;
    int flg;
    intOrPtr _v8;
    intOrPtr _v12;
    _unknown_ __ebp;
    _unknown_ _t22;
    signed int _t28;

    _v12 = 0;
    HTUnEscape(string);
    _v8 = 0;
    while(( *(_v8 + string) & 255 & 4294967295) != 0) {
        _t28 =  *(_v8 + string) & 255;
        if((_t28 & 4294967295) >= 0) {
L3:
             *(_v8 + string) = 63;
            _v12 = 1;
            goto L4;
        }
        __ctype_b_loc();
        if(( *( *_t28 + ( *(_v8 + string) & 255 & 4294967295 & ) + ( *(_v8 + string) & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 16384) != 0) {
            goto L4;
        }
        goto L3;
L4:
        _v8 = _v8 + 1;
    }
}

remove_tildes(char* string)
{// addr = 0x080570ED
    _unknown_ __ebp;

    if(( *string & 255 & 4294967295) != 126) {
        return ;
    }
     *string = 32;
    return;
}

comma_append(char** dst, char* src)
{// addr = 0x08057102
    _unknown_ _v8;
    _unknown_ __ebp;
    signed int _t27;
    _unknown_ _t41;
    _unknown_ _t46;
    _unknown_ _t49;

    if(( *src & 255 & 4294967295) == 0) {
        return ;
    }
    while(1) {
        _t27 =  *src & 255;
        if((_t27 & 4294967295) != 44) {
            break;
        }
L2:
        src =  &(src[1]);
    }
    __ctype_b_loc();
    if(( *( *_t27 + ( *src & 255 & 4294967295 & ) + ( *src & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 8192) != 0) {
        goto L2;
    }
    if(( *src & 255 & 4294967295) == 0) {
        return ;
    }
    if( *dst == 0 || ( *( *dst) & 255 & 4294967295) == 0) {
        HTSACopy(dst, src);
        return;
    }
    HTSACat(dst, ",");
    HTSACat(dst, src);
    return;
}

extract_field(char** dst, char* src, const char* keyword)
{// addr = 0x080571A4
    int len;
    char* cp;
    char* cp1;
    int _v8;
    char* _v12;
    char* _v16;
    char* _v24;
    char* _v32;
    const char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    signed int _t52;
    struct _IO_FILE* _t65;
    _unknown_ _t68;
    _unknown_ _t80;

    _v8 = strlen(keyword);
    _v12 =  &(src[1]);
    while(( *_v12 & 255 & 4294967295) != 0) {
        _t52 =  *(_v12 - 1) & 255;
        __eflags = (_t52 & 4294967295) - 63;
        if((_t52 & 4294967295) == 63) {
L3:
            __eflags = strncasecomp(_v12, keyword, _v8);
            if(__eflags != 0) {
                goto L8;
            }
            goto L4;
        }
        __eflags = ( *(_v12 - 1) & 255 & 4294967295) - 38;
        if(__eflags != 0) {
L8:
            _v12 =  &(_v12[1]);
            continue;
        }
        goto L3;
L4:
        _v12 =  &(_v12[_v8]);
        _v16 = strchr(_v12, 38);
        __eflags = _v16;
        if(_v16 != 0) {
             *_v16 = 0;
        }
        comma_append(dst, _v12);
        __eflags = _v16;
        if(__eflags == 0) {
            if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                return ;
            }
            if( *dst == 0) {
                _v24 = "(null)";
            } else {
                _v24 =  *dst;
            }
            _t65 = TraceFP();
            _v32 = _v24;
            _v36 = keyword;
            fprintf(_t65, "extract_field(%s) = '%s'\n");
            return;
        }
         *_v16 = 38;
        _v12 = _v16;
        _v16 = 0;
        goto L8;
    }
}

extract_subject(char* dst, char* src)
{// addr = 0x080572B0
    const char* keyword;
    int len;
    char* cp;
    char* cp1;
    const char* _v8;
    int _v12;
    char* _v16;
    char* _v20;
    char* _v24;
    char* _v32;
    const char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    signed int _t58;
    struct _IO_FILE* _t66;
    _unknown_ _t67;
    _unknown_ _t77;
    _unknown_ _t94;

    _v8 = "subject=";
    _v12 = strlen(_v8);
    _v16 =  &(src[1]);
    while(( *_v16 & 255 & 4294967295) != 0) {
        _t58 =  *(_v16 - 1) & 255;
        __eflags = (_t58 & 4294967295) - 63;
        if((_t58 & 4294967295) == 63) {
L3:
            __eflags = strncasecomp(_v16, _v8, _v12);
            if(__eflags == 0) {
                if(( *_v16 & 255 & 4294967295) != 0) {
                    _v16 =  &(_v16[_v12]);
                    _v20 = strchr(_v16, 38);
                    if(_v20 != 0) {
                         *_v20 = 0;
                    }
                    if(( *_v16 & 255 & 4294967295) != 0) {
                        strncpy(dst, _v16, 70);
                        dst[0x46] = 0;
                        SafeHTUnEscape(dst);
                    }
                    if(_v20 != 0) {
                         *_v20 = 38;
                        _v20 = 0;
                    }
                }
                if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                    return ;
                }
                if(dst == 0) {
                    _v24 = "(null)";
                } else {
                    _v24 = dst;
                }
                _t66 = TraceFP();
                _v32 = _v24;
                _v36 = _v8;
                fprintf(_t66, "extract_subject(%s) = '%s'\n");
                return;
            }
            goto L4;
        }
        __eflags = ( *(_v16 - 1) & 255 & 4294967295) - 38;
        if(__eflags != 0) {
            goto L4;
        }
        goto L3;
L4:
        _v16 =  &(_v16[1]);
    }
}

extract_body(char** dst, char* src)
{// addr = 0x080573DF
    const char* keyword;
    int len;
    int i;
    char* cp;
    char* cp0;
    char* cp1;
    char* temp;
    const char* _v8;
    signed int _v12;
    char* _v16;
    signed int _v20;
    char* _v24;
    char* _v28;
    void* _v32;
    char* _v40;
    char* _v48;
    char* _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    signed int _t113;
    signed int _t122;
    struct _IO_FILE* _t126;
    _unknown_ _t127;
    _unknown_ _t134;
    _unknown_ _t136;
    _unknown_ _t147;
    _unknown_ _t154;
    signed int _t159;
    _unknown_ _t167;
    _unknown_ _t173;
    _unknown_ _t177;
    _unknown_ _t187;

    _v8 = "body=";
    _v12 = strlen(_v8);
    _v32 = 0;
    _v20 =  &(src[1]);
    while(( *_v20 & 255 & 4294967295) != 0) {
        _t113 =  *(_v20 - 1) & 255;
        __eflags = (_t113 & 4294967295) - 63;
        if((_t113 & 4294967295) == 63) {
L3:
            __eflags = strncasecomp(_v20, _v8, _v12);
            if(__eflags != 0) {
                goto L25;
            }
            goto L4;
        }
        __eflags = ( *(_v20 - 1) & 255 & 4294967295) - 38;
        if(__eflags != 0) {
L25:
            _v20 =  &(_v20[1]);
            continue;
        }
        goto L3;
L4:
        _v20 =  &(_v20[_v12]);
        _v28 = strchr(_v20, 38);
        __eflags = _v28;
        if(_v28 != 0) {
             *_v28 = 0;
        }
        _t122 =  *_v20 & 255;
        __eflags = _t122 & 4294967295;
        if((_t122 & 4294967295) == 0) {
L23:
            __eflags = _v28;
            if(__eflags == 0) {
                if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                    return ;
                }
                if( *dst == 0) {
                    _v40 = "(null)";
                } else {
                    _v40 =  *dst;
                }
                _t126 = TraceFP();
                _v48 = _v40;
                _v52 = _v8;
                fprintf(_t126, "extract_body(%s) = '%s'\n");
                return;
            }
            goto L24;
        }
        HTSACopy( &_v32, _v20);
        HTUnEscape(_v32);
        _v24 = _v32;
        while(1) {
            _v20 = strchr(_v24, 10);
            __eflags = _v20;
            if(_v20 == 0) {
                break;
            }
             *_v20 = 0;
            __eflags = _v20 - _v24;
            if(_v20 > _v24) {
                _t159 =  *(_v20 - 1) & 255;
                __eflags = (_t159 & 4294967295) - 13;
                if((_t159 & 4294967295) == 13) {
                     *(_v20 - 1) = 0;
                }
            }
            _v16 = 0;
            _v12 = strlen(_v24);
            while(1) {
                __eflags = _v12 - 78;
                if(_v12 <= 78) {
                    break;
                }
                _v52 =  &(_v16[_v24]);
                HTSprintf(dst, "%.78s\n");
                _v16 =  &(_v16[0x4e]);
                _v12 = strlen( &(_v16[_v24]));
            }
            _v52 =  &(_v16[_v24]);
            HTSprintf(dst, "%s\n");
            _v24 =  &(_v20[1]);
        }
        _v16 = 0;
        _v12 = strlen(_v24);
        while(1) {
            __eflags = _v12 - 78;
            if(_v12 <= 78) {
                break;
            }
            _v52 =  &(_v16[_v24]);
            HTSprintf(dst, "%.78s\n");
            _v16 =  &(_v16[0x4e]);
            _v12 = strlen( &(_v16[_v24]));
        }
        __eflags = _v12;
        if(_v12 != 0) {
            _v52 =  &(_v16[_v24]);
            HTSprintf(dst, "%s\n");
        }
        __eflags = _v32;
        if(_v32 != 0) {
            free(_v32);
            _v32 = 0;
        }
        goto L23;
L24:
         *_v28 = 38;
        _v20 = _v28;
        _v28 = 0;
        goto L25;
    }
}

BOOLEAN trim_comma(char* address)
{// addr = 0x08057667
    _unknown_ __ebp;

    if(( *(strlen(address) - 1 + address) & 255 & 4294967295) != 44) {
        return  *address & 255;
    }
     *(strlen(address) - 1 + address) = 0;
    return  *address & 255;
}

BOOLEAN convert_explorer(char* address)
{// addr = 0x080576A6
    char* cp;
    char* cp0;
    char* cp1;
    char* _v8;
    char* _v12;
    char* _v16;
    _unknown_ _v24;
    _unknown_ __ebp;

    _v8 = address;
    while(1) {
        _v16 = strchr(_v8, 64);
        if(_v16 == 0) {
            break;
        }
        _v16 =  &(_v16[1]);
        _v12 = strchr(_v16, 59);
        if(_v12 != 0) {
             *_v12 = 44;
            _v16 =  &(_v12[1]);
        }
        _v8 = _v16;
    }
    return trim_comma(address);
}

int header_prompt(const char* label, char** result, unsigned int limit)
{// addr = 0x08057712
    char[1023] buffer;
    int ok;
    intOrPtr _v12;
    char _v1036;
    int _v1040;
    char* _v1052;
    char** _v1056;
    unsigned int _v1060;
    _unknown_ _v1072;
    _unknown_ _v1076;
    _unknown_ _v1080;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t44;
    unsigned int _t49;
    int _t57;
    _unknown_ _t61;
    unsigned int _t64;
    _unknown_ _t69;
    _unknown_ _t75;
    int _t81;

    _v1052 = label;
    _v1056 = result;
    _v12 =  *gs:0x14];
    if( *_v1056 == 0) {
        _v1036 = 0;
    } else {
        _t64 = strlen(gettext(" Use Control-U to erase the default.\n"));
        LYwaddnstr(LYwin, gettext(" Use Control-U to erase the default.\n"), _t64);
        LYstrncpy( &_v1036,  *_v1056, 1023);
    }
    if(limit > 1024) {
        limit = 1024;
    }
    _t49 = strlen(gettext(_v1052));
    LYwaddnstr(LYwin, gettext(_v1052), _t49);
    LYwaddnstr(LYwin, ": ", 2);
    if(LYgetstr( &_v1036, 0, limit, 0) >= 0 || (term_letter & 255 & 4294967295) != 0) {
        _v1060 = 0;
    } else {
        _v1060 = 1;
    }
    _v1040 = _v1060;
    LYwaddnstr(LYwin, "\n", 1);
    _t81 = _v1040;
    if(_t81 != 0) {
        remove_tildes( &_v1036);
        HTSACopy(_v1056,  &_v1036);
    }
    term_letter = 0;
    _t57 = _v1040;
    if(_t81 == 0) {
        return _t57;
    }
    __stack_chk_fail();
    return _t57;
}

show_addresses(char* addresses)
{// addr = 0x080578DA
    char* cp;
    char* cp1;
    const char* _v8;
    char* _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 = addresses;
    while(1) {
        _v12 = strchr(_v8, 44);
        if(_v12 == 0) {
            break;
        }
         *_v12 = 0;
        while(( *_v8 & 255 & 4294967295) == 32) {
            _v8 =  &(_v8[1]);
        }
    }
    if(( *_v8 & 255 & 4294967295) == 0) {
        return ;
    }
    LYwaddnstr(LYwin, _v8, strlen(_v8));
    return;
}

FILE* LYPipeToMailer()
{// addr = 0x080579A8
    char* buffer;
    FILE* fp;
    void* _v12;
    struct _IO_FILE* _v16;
    char* _v28;
    char* _v32;
    char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t24;
    _unknown_ _t29;
    _unknown_ _t35;
    struct _IO_FILE* _t36;
    _unknown_ _t37;
    _unknown_ _t43;

    _v12 = 0;
    _v16 = 0;
    if((LYSystemMail() & 4294967295) == 0) {
        return _v16;
    }
    _v32 = system_mail_flags;
    _v36 = system_mail;
    HTSprintf0( &_v12, "%s %s");
    _v16 = popen(_v12, "w");
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if(_v16 == 0) {
            _v28 = "FAIL";
        } else {
            _v28 = "OK";
        }
        _t36 = TraceFP();
        _v32 = _v28;
        _v36 = _v12;
        fprintf(_t36, "popen(%s) %s\n");
    }
    if(_v12 == 0) {
        return _v16;
    }
    free(_v12);
    _v12 = 0;
    return _v16;
}

mailform(const char* mailto_address, const char* mailto_subject, const char* mailto_content, const char* mailto_type)
{// addr = 0x08057A6E
    FILE* fd;
    char* address;
    char* ccaddr;
    char* keywords;
    char* cp;
    char[79] self;
    char[79] subject;
    char* searchpart;
    char[511] buf;
    int ch;
    int len;
    int i;
    signed int _v8;
    char _v88;
    int _v168;
    int _v602;
    char _v680;
    struct _IO_FILE* _v684;
    void* _v688;
    int _v692;
    void* _v696;
    char* _v700;
    void* _v704;
    int _v708;
    int _v712;
    int _v716;
    char* _v728;
    const char* _v732;
    char* _v736;
    const char* _v740;
    char* _v744;
    char* _v748;
    char* _v752;
    char* _v756;
    char* _v760;
    char* _v768;
    char* _v772;
    _unknown_ _v776;
    _unknown_ __ebp;
    _unknown_ _t263;
    signed int _t270;
    _unknown_ _t276;
    _unknown_ _t292;
    _unknown_ _t297;
    _unknown_ _t308;
    _unknown_ _t311;
    _unknown_ _t318;
    _unknown_ _t326;
    _unknown_ _t329;
    _unknown_ _t334;
    _unknown_ _t339;
    _unknown_ _t341;
    _unknown_ _t343;
    _unknown_ _t347;
    _unknown_ _t352;
    _unknown_ _t357;
    _unknown_ _t362;
    _unknown_ _t366;
    _unknown_ _t369;
    _unknown_ _t373;
    _unknown_ _t379;
    _unknown_ _t382;
    _unknown_ _t385;
    _unknown_ _t393;
    _unknown_ _t398;
    _unknown_ _t404;
    _unknown_ _t408;
    _unknown_ _t425;
    _unknown_ _t430;
    struct _IO_FILE* _t433;
    _unknown_ _t434;
    struct _IO_FILE* _t436;
    _unknown_ _t437;
    struct _IO_FILE* _t439;
    _unknown_ _t440;
    struct _IO_FILE* _t442;
    _unknown_ _t443;
    _unknown_ _t452;
    _unknown_ _t455;
    _unknown_ _t458;
    _unknown_ _t461;
    char* _t464;

    _v728 = mailto_address;
    _v732 = mailto_subject;
    _v736 = mailto_content;
    _v740 = mailto_type;
    _v8 =  *gs:0x14];
    _v688 = 0;
    _v692 = 0;
    _v696 = 0;
    _v700 = 0;
    _v704 = 0;
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if(_v728 == 0) {
            _v760 = "(null)";
        } else {
            _v760 = _v728;
        }
        _t442 = TraceFP();
        _v772 = _v760;
        fprintf(_t442, "mailto_address: "%s"\n");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if(_v732 == 0) {
            _v756 = "(null)";
        } else {
            _v756 = _v732;
        }
        _t439 = TraceFP();
        _v772 = _v756;
        fprintf(_t439, "mailto_subject: "%s"\n");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if(_v736 == 0) {
            _v752 = "(null)";
        } else {
            _v752 = _v736;
        }
        _t436 = TraceFP();
        _v772 = _v752;
        fprintf(_t436, "mailto_content: "%s"\n");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if(_v740 == 0) {
            _v748 = "(null)";
        } else {
            _v748 = _v740;
        }
        _t433 = TraceFP();
        _v772 = _v748;
        fprintf(_t433, "mailto_type:    "%s"\n");
    }
    if((LYSystemMail() & 4294967295) == 0) {
L92:
        _t270 = _v8 ^  *gs:0x14];
        if(_t464 == 0) {
            return _t270;
        }
        __stack_chk_fail();
        return _t270;
    }
    if(_v728 == 0) {
L23:
        HTAlert(gettext("Malformed mailto form submission!  Cancelled!"));
        goto L92;
    }
    _t464 = _v736;
    if(_t464 != 0) {
        _v168 = 0;
        _v88 = 0;
        _v700 = strchr(_v728, 10);
        if(_v700 != 0) {
             *_v700 = 0;
        }
        HTSACopy( &_v688, _v728);
        _v700 = strchr(_v688, 63);
        if(_v700 != 0) {
            HTSACopy( &_v704, _v700);
             *_v700 = 0;
            _v700 =  &(_v704[0]);
            if(( *_v700 & 255 & 4294967295) != 0) {
                extract_subject( &_v168, _v704);
                extract_field( &_v688, _v704, "to=");
                extract_field( &_v692, _v704, "cc=");
                extract_field( &_v696, _v704, "keywords=");
                if(_v696 != 0) {
                    if(( *_v696 & 255 & 4294967295) == 0) {
                        if(_v696 != 0) {
                            free(_v696);
                            _v696 = 0;
                        }
                    } else {
                        SafeHTUnEscape(_v696);
                    }
                }
                if(_v704 != 0) {
                    free(_v704);
                    _v704 = 0;
                }
            }
        }
        if((convert_explorer(_v688) & 4294967295) == 0) {
            if(_v692 != 0 && (convert_explorer(_v692) & 4294967295) != 0 && _v692 != 0) {
                free(_v692);
                _v692 = 0;
            }
            SafeHTUnEscape(_v688);
            if(_v692 != 0) {
                SafeHTUnEscape(_v692);
            }
            if((_v168 & 255 & 4294967295) == 0) {
                if(_v732 == 0 || ( *_v732 & 255 & 4294967295) == 0) {
                    _v772 = _v688;
                    sprintf( &_v168, "mailto:%.63s");
                } else {
                    LYstrncpy( &_v168, _v732, 70);
                }
            }
            mustshow = 1;
            statusline(gettext("Subject: "));
            _v708 = LYgetstr( &_v168, 0, 70, 0);
            if(_v708 >= 0) {
                if((LYNoCc & 255 & 4294967295) != 0) {
L60:
                    _v684 = LYPipeToMailer();
                    if(_v684 != 0) {
                        if(_v740 != 0 && ( *_v740 & 255 & 4294967295) != 0) {
                            fwrite("Mime-Version: 1.0\n", 1, 18, _v684);
                            _v772 = _v740;
                            fprintf(_v684, "Content-Type: %s\n");
                        }
                        _v772 = _v688;
                        fprintf(_v684, "To: %s\n");
                        if(personal_mail_address != 0 && ( *personal_mail_address & 255 & 4294967295) != 0) {
                            _v772 = personal_mail_address;
                            fprintf(_v684, "From: %s\n");
                        }
                        if(_v692 != 0 && ( *_v692 & 255 & 4294967295) != 0) {
                            _v772 = _v692;
                            fprintf(_v684, "Cc: %s\n");
                        }
                        _v772 =  &_v168;
                        fprintf(_v684, "Subject: %s\n\n");
                        if(_v696 != 0 && ( *_v696 & 255 & 4294967295) != 0) {
                            _v772 = _v696;
                            fprintf(_v684, "Keywords: %s\n");
                        }
                        mustshow = 1;
                        statusline(gettext("Sending form content..."));
                        while(1) {
                            _v700 = strchr(_v736, 10);
                            if(_v700 == 0) {
                                break;
                            }
                             *_v700 = 0;
                            _v716 = 0;
                            _v712 = strlen(_v736);
                            while(_v712 > 78) {
                                strncpy( &_v680,  &(_v736[_v716]), 78);
                                _v602 = 0;
                                _v772 =  &_v680;
                                fprintf(_v684, "%s\n");
                                _v716 = _v716 + 78;
                                _v712 = strlen( &(_v736[_v716]));
                            }
                        }
                        _v716 = 0;
                        _v712 = strlen(_v736);
                        while(_v712 > 78) {
                            strncpy( &_v680,  &(_v736[_v716]), 78);
                            _v602 = 0;
                            _v772 =  &_v680;
                            fprintf(_v684, "%s\n");
                            _v716 = _v716 + 78;
                            _v712 = strlen( &(_v736[_v716]));
                        }
                    }
                    goto L61;
                }
                goto L51;
L61:
                HTAlert(gettext("Mailto form submission failed!"));
                goto L86;
            } else {
                HTInfoMsg(gettext("Mailto form submission Cancelled!!!"));
L86:
                if(_v688 != 0) {
                    free(_v688);
                    _v688 = 0;
                }
                if(_v692 != 0) {
                    free(_v692);
                    _v692 = 0;
                }
                if(_v696 != 0) {
                    free(_v696);
                    _v696 = 0;
                }
                goto L92;
            }
L51:
            if(personal_mail_address == 0 || ( *personal_mail_address & 255 & 4294967295) == 0) {
                _v744 = 135577460;
            } else {
                _v744 = personal_mail_address;
            }
            _v768 = _v744;
            _v772 = 70;
            sprintf( &_v88, "%.*s");
            mustshow = 1;
            statusline("Cc: ");
            _v708 = LYgetstr( &_v88, 0, 70, 0);
            if(_v708 >= 0) {
                remove_tildes( &_v88);
                if(_v692 != 0) {
                    HTSACat( &_v692, ",");
                    HTSACat( &_v692,  &_v88);
                } else {
                    HTSACopy( &_v692,  &_v88);
                }
                goto L60;
            }
            HTInfoMsg(gettext("Mailto form submission Cancelled!!!"));
            goto L86;
        }
        HTAlert(gettext("Malformed mailto form submission!  Cancelled!"));
        goto L86;
    }
    goto L23;
}

mailmsg(int cur, char* owner_address, char* filename, char* linkname)
{// addr = 0x0805842D
    FILE* fd;
    FILE* fp;
    char* address;
    char* searchpart;
    char* cmd;
    char* cp;
    FILE* ofp;
    struct _IO_FILE* _v16;
    char* _v20;
    void* _v24;
    int _v28;
    char* _v32;
    char* _v36;
    struct _IO_FILE* _v40;
    char* _v60;
    char* _v64;
    char* _v68;
    char* _v72;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t141;
    _unknown_ _t149;
    _unknown_ _t153;
    _unknown_ _t160;
    _unknown_ _t163;
    _unknown_ _t167;
    _unknown_ _t169;
    char* _t176;
    _unknown_ _t178;
    const char* _t180;
    char* _t181;
    _unknown_ _t183;
    char* _t184;
    _unknown_ _t188;
    _unknown_ _t191;
    _unknown_ _t194;
    _unknown_ _t197;
    _unknown_ _t199;
    _unknown_ _t202;
    _unknown_ _t205;
    _unknown_ _t215;
    _unknown_ _t217;
    _unknown_ _t220;
    char* _t221;
    _unknown_ _t223;
    _unknown_ _t228;
    _unknown_ _t230;
    _unknown_ _t235;
    struct _IO_FILE* _t237;
    _unknown_ _t238;
    _unknown_ _t240;
    struct _IO_FILE* _t242;
    _unknown_ _t243;
    _unknown_ _t245;
    _unknown_ _t248;
    _unknown_ _t282;

    _v24 = 0;
    _v28 = 0;
    _v32 = 0;
    if((LYSystemMail() & 4294967295) == 0) {
        return ;
    }
    if(owner_address == 0) {
        return ;
    }
    _t142 =  *owner_address & 255;
    if(( *owner_address & 255 & 4294967295) == 0) {
        return ;
    }
    _v36 = strchr(owner_address, 10);
    if(_v36 != 0) {
         *_v36 = 0;
    }
    if(strncasecomp(owner_address, "lynx-dev", 9) == 0) {
        return ;
    }
    HTSACopy( &_v24, owner_address);
    _v36 = strchr(_v24, 63);
    if(_v36 != 0) {
        HTSACopy( &_v28, _v36);
         *_v36 = 0;
        _v36 =  &(_v28[1]);
        if(( *_v36 & 255 & 4294967295) != 0) {
            extract_field( &_v24, _v28, "to=");
        }
    }
    convert_explorer(_v24);
    SafeHTUnEscape(_v24);
    if((trim_comma(_v24) & 4294967295) == 0) {
        _v16 = LYPipeToMailer();
        if(_v16 != 0) {
            _v68 = _v24;
            fprintf(_v16, "To: %s\n");
            _v68 = filename;
            fprintf(_v16, "Subject: Lynx Error in %s\n");
            if(personal_mail_address != 0 && ( *personal_mail_address & 255 & 4294967295) != 0) {
                _v68 = personal_mail_address;
                fprintf(_v16, "Cc: %s\n");
            }
            _v68 = filename;
            fprintf(_v16, "X-URL: %s\n");
            _v64 = "2.8.7dev.11";
            _v68 = "Lynx";
            fprintf(_v16, "X-Mailer: %s, Version %s\n\n");
            _t176 = gettext("The link   %s :?: %s \n");
            _v64 =  *((cur << 2) + (cur << 2 << 4) + 136026788);
            _v68 =  *((cur << 2) + (cur << 2 << 4) +  &links);
            fprintf(_v16, _t176);
            _t180 = LYGetHiliteStr(cur, 0);
            _t181 = gettext("called "%s"\n");
            _v68 = _t180;
            fprintf(_v16, _t181);
            _t184 = gettext("in the file "%s" called "%s"\n");
            _v64 = linkname;
            _v68 = filename;
            fprintf(_v16, _t184);
            _v68 = gettext("was requested but was not available.");
            fprintf(_v16, "%s\n\n");
            _v68 = gettext("Thought you might want to know.");
            fprintf(_v16, "%s\n\n");
            _v68 = gettext("This message was automatically generated by");
            fprintf(_v16, "%s\n");
            _v64 = "2.8.7dev.11";
            _v68 = "Lynx";
            fprintf(_v16, "%s %s");
            if(LynxSigFile == 0) {
L28:
                pclose(_v16);
                if((traversal & 255 & 4294967295) != 0) {
                    _v40 = LYAppendToTxtFile("traverse.errors");
                    if(_v40 == 0) {
                        _v40 = LYNewTxtFile("traverse.errors");
                        if(_v40 == 0) {
                            perror(gettext("Unable to open traversal errors output file"));
                            exit_immediately(1);
                        }
                    }
                    _v60 = filename;
                    _v64 =  *((cur << 2) + (cur << 2 << 4) + 136026788);
                    _v68 =  *((cur << 2) + (cur << 2 << 4) +  &links);
                    fprintf(_v40, "%s\t%s \tin %s\n");
                    LYCloseOutput(_v40);
                }
                _t142 = _v24;
                if(_v24 == 0) {
                    return ;
                }
                free(_v24);
                _v24 = 0;
                return;
            }
            _t221 = LynxSigFile;
            _v72 = "r";
             *__esp = _t221;
            fopen64();
            _v20 = _t221;
            if(_v20 == 0) {
                goto L28;
            }
            fwrite("-- \n", 1, 4, _v16);
            while(LYSafeGets( &_v32, _v20) != 0) {
                fputs(_v32, _v16);
            }
        }
        goto L15;
    }
    if(_v24 != 0) {
        free(_v24);
        _v24 = 0;
    }
    _t142 = WWW_TraceFlag & 255;
    if((WWW_TraceFlag & 255 & 4294967295) == 0) {
        return ;
    }
    _t242 = TraceFP();
    _v68 = owner_address;
    fprintf(_t242, "mailmsg: No address in '%s'.\n");
    return;
L15:
    if(_v24 != 0) {
        free(_v24);
        _v24 = 0;
    }
    _t142 = WWW_TraceFlag & 255;
    if((WWW_TraceFlag & 255 & 4294967295) == 0) {
        return ;
    }
    _t237 = TraceFP();
    _v68 = _v32;
    fprintf(_t237, "mailmsg: '%s' failed.\n");
    return;
}

reply_by_mail(char* mail_address, char* filename, const char* title, const char* refid)
{// addr = 0x0805891C
    char[1023] user_input;
    FILE* fd;
    FILE* fp;
    const char* label;
    char* from_address;
    char* cc_address;
    char* to_address;
    char* the_subject;
    char* ccaddr;
    char* keywords;
    char* searchpart;
    char* body;
    char* cp;
    char* cp1;
    int i;
    int c;
    char[255] my_tmpfile;
    char[79] default_subject;
    char[4095] buf;
    char* header;
    int n;
    BOOLEAN is_preparsed;
    char* msg;
    char* buffer;
    intOrPtr _v12;
    char _v22;
    signed int _v92;
    char _v348;
    char _v1372;
    void _v5468;
    signed int _v5469;
    struct _IO_FILE* _v5476;
    FILE* _v5480;
    const char* _v5484;
    void* _v5488;
    void* _v5492;
    void* _v5496;
    void* _v5500;
    void* _v5504;
    void* _v5508;
    void* _v5512;
    void* _v5516;
    char* _v5520;
    char* _v5524;
    intOrPtr _v5528;
    signed int _v5532;
    void* _v5536;
    int _v5540;
    char _v5544;
    char* _v5548;
    char* _v5552;
    const char* _v5556;
    const char* _v5560;
    char* _v5564;
    char* _v5568;
    signed char _v5572;
    char* _v5576;
    char* _v5580;
    char* _v5584;
    char* _v5588;
    char* _v5592;
    char* _v5596;
    void* _v5600;
    char* _v5604;
    char* _v5608;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t523;
    _unknown_ _t530;
    _unknown_ _t543;
    _unknown_ _t550;
    _unknown_ _t552;
    unsigned int _t556;
    unsigned int _t561;
    unsigned int _t564;
    _unknown_ _t573;
    _unknown_ _t582;
    _unknown_ _t584;
    _unknown_ _t586;
    _unknown_ _t588;
    _unknown_ _t590;
    _unknown_ _t592;
    _unknown_ _t594;
    unsigned int _t598;
    unsigned int _t601;
    _unknown_ _t610;
    unsigned int _t612;
    _unknown_ _t617;
    _unknown_ _t625;
    _unknown_ _t629;
    unsigned int _t634;
    unsigned int _t637;
    unsigned int _t640;
    _unknown_ _t651;
    char* _t664;
    _unknown_ _t666;
    _unknown_ _t672;
    _unknown_ _t674;
    _unknown_ _t676;
    _unknown_ _t679;
    char* _t682;
    const char* _t686;
    _unknown_ _t688;
    _unknown_ _t694;
    char* _t695;
    _unknown_ _t697;
    _unknown_ _t702;
    _unknown_ _t704;
    _unknown_ _t707;
    _unknown_ _t709;
    _unknown_ _t717;
    unsigned int _t721;
    _unknown_ _t731;
    unsigned int _t738;
    signed int _t780;
    _unknown_ _t791;
    struct _IO_FILE* _t793;
    _unknown_ _t794;
    _unknown_ _t799;
    _unknown_ _t804;
    unsigned int _t806;
    unsigned int _t809;
    _unknown_ _t818;
    _unknown_ _t823;
    _unknown_ _t826;
    _unknown_ _t829;
    _unknown_ _t833;
    unsigned int _t837;
    unsigned int _t841;
    unsigned int _t844;
    _unknown_ _t850;
    _unknown_ _t855;
    _unknown_ _t857;
    _unknown_ _t860;
    _unknown_ _t869;
    _unknown_ _t874;
    _unknown_ _t880;
    _unknown_ _t884;
    _unknown_ _t903;
    _unknown_ _t908;
    struct _IO_FILE* _t910;
    _unknown_ _t911;
    _unknown_ _t934;
    _unknown_ _t967;
    signed int _t970;

    _v5548 = mail_address;
    _v5552 = filename;
    _v5556 = title;
    _v5560 = refid;
    _v12 =  *gs:0x14];
    _v5484 = 0;
    _v5488 = 0;
    _v5492 = 0;
    _v5496 = 0;
    _v5500 = 0;
    _v5504 = 0;
    _v5508 = 0;
    _v5512 = 0;
    _v5516 = 0;
    _v5520 = 0;
    _v5524 = 0;
    _v5532 = 0;
    _v5536 = 0;
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        if(_v5560 == 0) {
            _v5588 = "(null)";
        } else {
            _v5588 = _v5560;
        }
        if(_v5556 == 0) {
            _v5584 = "(null)";
        } else {
            _v5584 = _v5556;
        }
        if(_v5552 == 0) {
            _v5580 = "(null)";
        } else {
            _v5580 = _v5552;
        }
        if(_v5548 == 0) {
            _v5576 = "(null)";
        } else {
            _v5576 = _v5548;
        }
        _t910 = TraceFP();
        _v5592 = _v5588;
        _v5596 = _v5584;
        _v5600 = _v5580;
        _v5604 = _v5576;
        fprintf(_t910, "reply_by_mail("%s", "%s", "%s", "%s")\n");
    }
    term_letter = 0;
    if((LYSystemMail() & 4294967295) == 0) {
L190:
        if(_t970 == 0) {
            return ;
        }
        __stack_chk_fail();
        return;
    }
    if(_v5548 == 0) {
L17:
        HTAlert(gettext("No email address is present in mailto URL!"));
        goto L190;
    }
    _t970 =  *_v5548 & 255 & 4294967295;
    if(_t970 != 0) {
        HTSACopy( &_v5496, _v5548);
        _v5476 = LYOpenTemp( &_v348, ".txt", "w");
        if(_v5476 != 0) {
            _v92 = 0;
            _v5520 = strchr(_v5496, 63);
            if(_v5520 != 0) {
                HTSACopy( &_v5512, _v5520);
                 *_v5520 = 0;
                _v5520 =  &(_v5512[0]);
                if(( *_v5520 & 255 & 4294967295) != 0) {
                    extract_subject( &_v92, _v5512);
                    extract_field( &_v5496, _v5512, "to=");
                    extract_field( &_v5504, _v5512, "cc=");
                    extract_field( &_v5508, _v5512, "keywords=");
                    if(_v5508 != 0) {
                        if(( *_v5508 & 255 & 4294967295) == 0) {
                            if(_v5508 != 0) {
                                free(_v5508);
                                _v5508 = 0;
                            }
                        } else {
                            SafeHTUnEscape(_v5508);
                        }
                    }
                    extract_body( &_v5516, _v5512);
                    if(_v5512 != 0) {
                        free(_v5512);
                        _v5512 = 0;
                    }
                }
            }
            if((convert_explorer(_v5496) & 4294967295) == 0) {
                if(_v5504 != 0 && (convert_explorer(_v5504) & 4294967295) != 0 && _v5504 != 0) {
                    free(_v5504);
                    _v5504 = 0;
                }
                SafeHTUnEscape(_v5496);
                if(_v5504 != 0) {
                    SafeHTUnEscape(_v5504);
                }
                if((_v92 & 255 & 4294967295) == 0 && _v5556 != 0 && ( *_v5556 & 255 & 4294967295) != 0) {
                    strncpy( &_v92, _v5556, 70);
                    _v22 = 0;
                }
                _v5608 = terminate_letter;
                 *__esp = 2;
                signal();
                _v5604 = _v5496;
                HTSprintf( &_v5536, "To: %s\n");
                if(strncasecomp( *((current_char_set << 5) + 135902084), "us-ascii", 8) != 0) {
                    HTSACat( &_v5536, "Mime-Version: 1.0\n");
                    if((LYHaveCJKCharacterSet & 255 & 4294967295) == 0 && strncasecomp( *((current_char_set << 5) + 135902084), "x-", 2) != 0) {
                        _v5604 =  *((current_char_set << 5) + 135902084);
                        HTSprintf( &_v5536, "Content-Type: text/plain; charset=%s\n");
                    }
                    HTSACat( &_v5536, "Content-Transfer-Encoding: 8bit\n");
                }
                if(_v5552 == 0 || ( *_v5552 & 255 & 4294967295) == 0) {
                    _v5604 = _v5496;
                    HTSprintf( &_v5536, "X-URL: mailto:%s\n");
                } else {
                    _v5604 = _v5552;
                    HTSprintf( &_v5536, "X-URL: %s\n");
                }
                _v5600 = "2.8.7dev.11";
                _v5604 = "Lynx";
                HTSprintf( &_v5536, "X-Mailer: %s, Version %s\n");
                if(_v5560 != 0 && ( *_v5560 & 255 & 4294967295) != 0) {
                    _v5604 = _v5560;
                    HTSprintf( &_v5536, "In-Reply-To: <%s>\n");
                }
                LYclear();
                LYmove(2, 0);
                _v5608 = 1;
                 *__esp = LYwin;
                scrollok();
                if(_v5516 == 0) {
                    _t556 = strlen(gettext("You are sending a comment to:\n  "));
                    LYwaddnstr(LYwin, gettext("You are sending a comment to:\n  "), _t556);
                } else {
                    _t844 = strlen(gettext("You are sending a message with body to:\n  "));
                    LYwaddnstr(LYwin, gettext("You are sending a message with body to:\n  "), _t844);
                }
                show_addresses(_v5496);
                _v5520 = _v5504;
                if(_v5520 != 0) {
                    if(strchr(_v5520, 44) == 0) {
                        _t837 = strlen(gettext("\n With copy to:\n  "));
                        LYwaddnstr(LYwin, gettext("\n With copy to:\n  "), _t837);
                    } else {
                        _t841 = strlen(gettext("\n With copies to:\n  "));
                        LYwaddnstr(LYwin, gettext("\n With copies to:\n  "), _t841);
                    }
                    show_addresses(_v5504);
                }
                _t561 = strlen(gettext("\n\nUse Ctrl-G to cancel if you do not want to send a message\n"));
                LYwaddnstr(LYwin, gettext("\n\nUse Ctrl-G to cancel if you do not want to send a message\n"), _t561);
                _t564 = strlen(gettext("\n Please enter your name, or leave it blank to remain anonymous\n"));
                LYwaddnstr(LYwin, gettext("\n Please enter your name, or leave it blank to remain anonymous\n"), _t564);
                _v5484 = "X-Personal_Name: ";
                if(header_prompt(_v5484,  &personal_name, 1024) == 0) {
                    goto L173;
                } else {
                    if(( *personal_name & 255 & 4294967295) != 0) {
                        _v5600 = personal_name;
                        _v5604 = _v5484;
                        HTSprintf( &_v5536, "%s: %s\n");
                    }
                    _t598 = strlen(gettext("\n Please enter a mail address or some other\n"));
                    LYwaddnstr(LYwin, gettext("\n Please enter a mail address or some other\n"), _t598);
                    _t601 = strlen(gettext(" means to contact you, if you desire a response.\n"));
                    LYwaddnstr(LYwin, gettext(" means to contact you, if you desire a response.\n"), _t601);
                    _v5484 = "From";
                    if(personal_mail_address != 0) {
                        HTSACopy( &_v5488, personal_mail_address);
                    }
                    if(header_prompt(_v5484,  &_v5488, 1024) == 0) {
                        goto L173;
                    } else {
                        _v5600 = _v5488;
                        _v5604 = _v5484;
                        HTSprintf( &_v5536, "%s: %s\n");
                        _t612 = strlen(gettext("\n Please enter a subject line.\n"));
                        LYwaddnstr(LYwin, gettext("\n Please enter a subject line.\n"), _t612);
                        _v5484 = "Subject";
                        if((_v92 & 255 & 4294967295) == 0) {
                            if(_v5552 == 0 || ( *_v5552 & 255 & 4294967295) == 0) {
                                _v5604 = _v5496;
                                HTSprintf( &_v5500, "mailto:%s");
                            } else {
                                _v5604 = _v5552;
                                HTSprintf( &_v5500, "%s");
                            }
                        } else {
                            HTSACopy( &_v5500,  &_v92);
                        }
                        if(header_prompt(_v5484,  &_v5500, 70) == 0) {
                            goto L173;
                        } else {
                            if((LYNoCc & 255 & 4294967295) != 0) {
L79:
                                _v5600 = _v5500;
                                _v5604 = _v5484;
                                HTSprintf( &_v5536, "%s: %s\n");
                                if(_v5504 != 0 && ( *_v5504 & 255 & 4294967295) != 0) {
                                    _v5604 = _v5504;
                                    HTSprintf( &_v5536, "Cc: %s\n");
                                }
                                if(_v5508 != 0 && ( *_v5508 & 255 & 4294967295) != 0) {
                                    _v5604 = _v5508;
                                    HTSprintf( &_v5536, "Keywords: %s\n");
                                }
                                HTSACat( &_v5536, "\n");
                                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                    _t793 = TraceFP();
                                    _v5604 = _v5536;
                                    fprintf(_t793, "**header==\n%s");
                                }
                                if((no_editor & 255 & 4294967295) != 0 || editor == 0 || ( *editor & 255 & 4294967295) == 0) {
                                    if(_v5516 == 0) {
                                        _t634 = strlen(gettext("\n Please enter your message below."));
                                        LYwaddnstr(LYwin, gettext("\n Please enter your message below."), _t634);
                                        _t637 = strlen(gettext("\n When you are done, press enter and put a single period (.)"));
                                        LYwaddnstr(LYwin, gettext("\n When you are done, press enter and put a single period (.)"), _t637);
                                        _t640 = strlen(gettext("\n on a line and press enter again."));
                                        LYwaddnstr(LYwin, gettext("\n on a line and press enter again."), _t640);
                                        LYwaddnstr(LYwin, "\n\n", 2);
                                        LYrefresh();
                                        _v1372 = 0;
                                        if(LYgetstr( &_v1372, 0, 1024, 0) >= 0 || (term_letter & 255 & 4294967295) != 0 || strcmp( &_v1372, ".") == 0) {
                                            goto L173;
                                        } else {
L141:
                                            while(strcmp( &_v1372, ".") != 0 && (term_letter & 255 & 4294967295) == 0) {
                                                LYwaddnstr(LYwin, "\n", 1);
                                                remove_tildes( &_v1372);
                                                _v5604 =  &_v1372;
                                                fprintf(_v5476, "%s\n");
                                                _v1372 = 0;
                                                if(LYgetstr( &_v1372, 0, 1024, 0) >= 0) {
                                                    goto L173;
                                                }
                                            }
                                        }
                                        goto L174;
                                    }
                                } else {
                                    if(_v5516 == 0) {
                                        if(( *(HTLoadedDocumentURL()) & 255 & 4294967295) != 0) {
                                            if((LYPreparsedSource & 255 & 4294967295) == 0 || HTisDocumentSource() == 0) {
                                                _v5572 = 0;
                                            } else {
                                                _v5572 = 1;
                                            }
                                            _v5469 = _v5572 & 255 & 4294967295;
                                            if(_v5469 == 0) {
                                                _v5568 = gettext("Do you wish to include the original message?");
                                            } else {
                                                _v5568 = gettext("Do you wish to include the preparsed source?");
                                            }
                                            _t780 = HTConfirm(_v5568);
                                            if((_t780 & 4294967295) == 1) {
                                                print_wwwfile_to_fd(_v5476, 1, _t780 & 4294967295 & );
                                            }
                                        }
L105:
                                        LYCloseTempFP(_v5476);
                                        _v5608 = 0;
                                         *__esp = LYwin;
                                        scrollok();
                                        if((term_letter & 255 & 4294967295) != 0 || _v5532 == 3 || _v5532 == 7) {
                                            goto L174;
                                        } else {
                                            if(_v5532 != 255) {
                                                if((_v5532 & 34816) == 0) {
                                                    if(( *((_v5532 & 2047) + 1 + (_v5532 & 2047) + 1 +  &keymap) & 65535 & 4294967295) == 47) {
                                                        goto L174;
                                                    }
                                                    goto L115;
                                                }
                                                goto L112;
                                            }
                                            if((keymap & 65535 & 4294967295) == 47) {
                                                goto L174;
                                            }
L115:
                                            edit_temporary_file( &_v348, 135577460, gettext("Spawning your selected editor to edit mail message"));
                                            _v5608 = 1;
                                             *__esp = 2;
                                            signal();
                                            LYStatusLine = LYlines - 1;
                                            if(_v5516 == 0) {
                                                _v5564 = gettext("Send this comment?");
                                            } else {
                                                _v5564 = gettext("Send this message?");
                                            }
                                            _v5532 = HTConfirm(_v5564) & 4294967295;
                                            LYStatusLine = -1;
                                            if(_v5532 == 1) {
                                                if(_v5516 != 0 || LynxSigFile == 0) {
L164:
                                                    LYclear();
                                                    mustshow = 1;
                                                    statusline(gettext("Sending your message..."));
                                                    _v5608 = 1;
                                                     *__esp = 2;
                                                    signal();
                                                    _v5480 = LYPipeToMailer();
                                                    if(_v5480 == 0) {
                                                        HTInfoMsg(gettext("Cancelled!!!"));
                                                    }
                                                    if(_v5480 == 0) {
                                                        goto L174;
                                                    }
                                                    _v5608 = "r";
                                                    _t664 =  &_v348;
                                                     *__esp = _t664;
                                                    fopen64();
                                                    _v5476 = _t664;
                                                    if(_v5476 != 0) {
                                                        fputs(_v5536, _v5480);
                                                        while(1) {
L171:
                                                            _v5540 = fread( &_v5468, 1, 4096, _v5476);
                                                            if(_v5540 == 0) {
                                                                break;
                                                            }
                                                            goto L170;
                                                        }
                                                        pclose(_v5480);
                                                        LYCloseInput(_v5476);
                                                        goto L174;
                                                    }
                                                    HTInfoMsg(gettext("Cancelled!!!"));
                                                    pclose(_v5480);
                                                    goto L174;
L170:
                                                    fwrite( &_v5468, 1, _v5540, _v5480);
                                                    goto L171;
                                                }
                                                _t682 = LynxSigFile;
                                                _v5608 = "r";
                                                 *__esp = _t682;
                                                fopen64();
                                                _v5480 = _t682;
                                                if(_v5480 == 0) {
                                                    goto L164;
                                                }
                                                LYStatusLine = LYlines - 1;
                                                if((term_letter & 255 & 4294967295) == 0) {
                                                    _v5544 = 0;
                                                    _t686 = gettext("Append '%s'?");
                                                    _v5604 = LynxSigFile;
                                                    HTSprintf0( &_v5544, _t686);
                                                    _v5532 = HTConfirm(_v5544) & 4294967295;
                                                    if(_v5544 != 0) {
                                                        free(_v5544);
                                                        _v5544 = 0;
                                                    }
                                                } else {
                                                    mustshow = 1;
                                                    user_message(gettext("Append '%s'?"), LynxSigFile);
                                                    _v5532 = 0;
                                                }
                                                LYStatusLine = -1;
                                                if(_v5532 != 1) {
L163:
                                                    LYCloseInput(_v5480);
                                                } else {
                                                    _v5608 = "a+";
                                                    _t695 =  &_v348;
                                                     *__esp = _t695;
                                                    fopen64();
                                                    _v5476 = _t695;
                                                    if(_v5476 == 0) {
                                                        goto L163;
                                                    }
                                                    _v5544 = 0;
                                                    fwrite("-- \n", 1, 4, _v5476);
                                                    while(LYSafeGets( &_v5544, _v5480) != 0) {
                                                        fputs(_v5544, _v5476);
                                                    }
                                                }
                                                goto L164;
                                            }
                                            LYclear();
                                            goto L174;
L112:
                                            if((_v5532 & 255) == 47) {
                                                goto L174;
                                            }
                                            goto L115;
                                        }
                                    }
                                    _v5524 = _v5516;
                                    while(1) {
                                        _v5520 = strchr(_v5524, 10);
                                        if(_v5520 == 0) {
                                            break;
                                        }
                                         *_v5520 = 0;
                                        _v5520 =  &(_v5520[1]);
                                        _v5604 = _v5524;
                                        fprintf(_v5476, "%s\n");
                                        _v5524 = _v5520;
                                    }
                                    goto L105;
                                }
L117:
                                LYclear();
                                LYmove(0, 0);
                                _t721 = strlen(gettext("\n Please review the message body:\n\n"));
                                LYwaddnstr(LYwin, gettext("\n Please review the message body:\n\n"), _t721);
                                LYrefresh();
                                _v5524 = _v5516;
                                _v5528 = LYlines - 5;
                                while(1) {
                                    _v5520 = strchr(_v5524, 10);
                                    if(_v5520 == 0) {
                                        break;
                                    }
                                    if(_v5528 > 0) {
L130:
                                         *_v5520 = 0;
                                        _v5520 =  &(_v5520[1]);
                                        _v5604 = _v5524;
                                        fprintf(_v5476, "%s\n");
                                        LYwaddnstr(LYwin, _v5524, strlen(_v5524));
                                        LYwaddnstr(LYwin, "\n", 1);
                                        _v5524 = _v5520;
                                        _v5528 = _v5528 - 1;
                                        continue;
                                    }
                                    _t738 = strlen(gettext("\nPress RETURN to continue: "));
                                    LYwaddnstr(LYwin, gettext("\nPress RETURN to continue: "), _t738);
                                    LYrefresh();
                                    _v5532 = LYgetch();
                                    LYwaddnstr(LYwin, "\n", 1);
                                    if((term_letter & 255 & 4294967295) != 0 || _v5532 == 3 || _v5532 == 7) {
                                        goto L173;
                                    } else {
                                        if(_v5532 != 255) {
                                            if((_v5532 & 34816) == 0) {
                                                if(( *((_v5532 & 2047) + 1 + (_v5532 & 2047) + 1 +  &keymap) & 65535 & 4294967295) == 47) {
                                                    goto L173;
                                                }
                                                goto L129;
                                            }
                                            goto L126;
                                        }
                                        if((keymap & 65535 & 4294967295) == 47) {
                                            goto L173;
                                        }
L129:
                                        _v5528 = LYlines - 2;
                                        goto L130;
L126:
                                        if((_v5532 & 255) == 47) {
                                            goto L173;
                                        }
                                        goto L129;
                                    }
                                    goto L174;
                                }
                                while(_v5528 >= 0) {
                                    LYwaddnstr(LYwin, "\n", 1);
                                    _v5528 = _v5528 - 1;
                                }
                            }
                            _t806 = strlen(gettext("\n Enter a mail address for a CC of your message.\n"));
                            LYwaddnstr(LYwin, gettext("\n Enter a mail address for a CC of your message.\n"), _t806);
                            _t809 = strlen(gettext(" (Leave blank if you don't want a copy.)\n"));
                            LYwaddnstr(LYwin, gettext(" (Leave blank if you don't want a copy.)\n"), _t809);
                            if(personal_mail_address != 0) {
                                HTSACopy( &_v5492, personal_mail_address);
                            }
                            if(header_prompt("Cc",  &_v5492, 1024) == 0) {
                                goto L173;
                            } else {
                                comma_append( &_v5504, _v5492);
                                goto L79;
                            }
                        }
                    }
                }
L174:
                _v5608 = cleanup_sig;
                 *__esp = 2;
                signal();
                term_letter = 0;
                if(_v5536 != 0) {
                    free(_v5536);
                    _v5536 = 0;
                }
                LYRemoveTemp( &_v348);
                if(_v5488 != 0) {
                    free(_v5488);
                    _v5488 = 0;
                }
                if(_v5500 != 0) {
                    free(_v5500);
                    _v5500 = 0;
                }
                if(_v5492 != 0) {
                    free(_v5492);
                    _v5492 = 0;
                }
                if(_v5496 != 0) {
                    free(_v5496);
                    _v5496 = 0;
                }
                if(_v5504 != 0) {
                    free(_v5504);
                    _v5504 = 0;
                }
                if(_v5508 != 0) {
                    free(_v5508);
                    _v5508 = 0;
                }
                _t525 = _v5516;
                if(_v5516 != 0) {
                    _t525 = free(_v5516);
                    _v5516 = 0;
                }
                goto L190;
            } else {
                HTAlert(gettext("No email address is present in mailto URL!"));
            }
L173:
            HTInfoMsg(gettext("Cancelled!!!"));
            LYCloseTempFP(_v5476);
            _v5608 = 0;
             *__esp = LYwin;
            scrollok();
            goto L174;
        } else {
            HTAlert(gettext("Unable to open temporary file for mailto URL!"));
        }
        goto L190;
    }
    goto L17;
}

BOOLEAN LYSystemMail()
{// addr = 0x0805A0F9
    signed char _v5;
    _unknown_ _v24;
    _unknown_ __ebp;

    if(system_mail == 0 || strcmp(system_mail, "unknown") == 0) {
        HTAlert(gettext("No system mailer configured"));
        _v5 = 0;
        return _v5 & 255;
    }
    _v5 = 1;
    return _v5 & 255;
}

HTAlert(const char* Msg)
{// addr = 0x0805A148
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t24;
    char* _t25;
    _unknown_ _t27;
    _unknown_ _t29;
    _unknown_ _t32;
    struct _IO_FILE* _t33;
    _unknown_ _t35;
    _unknown_ _t41;

    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t33 = TraceFP();
        _v20 = Msg;
        fprintf(_t33, "\nAlert!: %s\n\n");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fflush(TraceFP());
    }
    mustshow = 1;
    user_message(gettext("Alert!: %s"), Msg);
    LYstore_message2(gettext("Alert!: %s"), Msg);
    _t22 = dump_output_immediately & 255;
    if((dump_output_immediately & 255 & 4294967295) != 0) {
        _t22 = dump_to_stderr & 255;
        if((dump_to_stderr & 255 & 4294967295) != 0) {
            fflush(__imp__stdout);
            _t25 = gettext("Alert!: %s");
            _v20 = Msg;
            fprintf(__imp__stderr, _t25);
            fputc(10, __imp__stderr);
            fflush(__imp__stderr);
        }
    }
    LYSleepAlert();
    return;
}

HTAlwaysAlert(const char* extra_prefix, const char* Msg)
{// addr = 0x0805A245
    struct _IO_FILE* _v8;
    struct _IO_FILE* _v12;
    char* _v16;
    const char* _v20;
    struct _IO_FILE* _v24;
    const char* _v32;
    const char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t48;
    _unknown_ _t50;
    _unknown_ _t56;
    _unknown_ _t60;
    struct _IO_FILE* _t61;
    _unknown_ _t62;
    _unknown_ _t71;
    _unknown_ _t73;

    if((dump_output_immediately & 255 & 4294967295) != 0 || (LYCursesON & 255 & 4294967295) == 0) {
        if(extra_prefix == 0) {
            if(Msg == 0) {
                _v20 = 135579385;
            } else {
                _v20 = Msg;
            }
            _v16 = gettext("Alert!: %s");
            if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                _v12 = __imp__stderr;
            } else {
                _v12 = __imp__stdout;
            }
            _v36 = _v20;
            fprintf(_v12, _v16);
            fflush(__imp__stdout);
            LYstore_message2(gettext("Alert!: %s"), Msg);
            LYSleepAlert();
            if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                _v8 = __imp__stderr;
            } else {
                _v8 = __imp__stdout;
            }
            fputc(10, _v8);
        } else {
            if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                _v24 = __imp__stderr;
            } else {
                _v24 = __imp__stdout;
            }
            _v32 = Msg;
            _v36 = extra_prefix;
            fprintf(_v24, "%s %s!\n");
            fflush(__imp__stdout);
            LYstore_message2(gettext("Alert!: %s"), Msg);
            LYSleepAlert();
        }
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            _t61 = TraceFP();
            _v36 = Msg;
            fprintf(_t61, "\nAlert!: %s\n\n");
        }
        if((WWW_TraceFlag & 255 & 4294967295) == 0) {
            return ;
        }
        fflush(TraceFP());
        return;
    }
    HTAlert(Msg);
    return;
}

HTInfoMsg(const char* Msg)
{// addr = 0x0805A3E5
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    struct _IO_FILE* _t14;
    _unknown_ _t15;
    _unknown_ _t19;

    mustshow = 1;
    statusline(Msg);
    if(Msg == 0) {
        return ;
    }
    if(( *Msg & 255 & 4294967295) == 0) {
        return ;
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t14 = TraceFP();
        _v20 = Msg;
        fprintf(_t14, "Info message: %s\n");
    }
    LYstore_message(Msg);
    LYSleepInfo();
    return;
}

HTInfoMsg2(const char* Msg2, const char* Arg)
{// addr = 0x0805A448
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t28;
    struct _IO_FILE* _t29;
    _unknown_ _t32;
    _unknown_ _t34;
    _unknown_ _t38;
    _unknown_ _t40;
    _unknown_ _t42;

    mustshow = 1;
    user_message(Msg2, Arg);
    if(Msg2 == 0) {
        return ;
    }
    if(( *Msg2 & 255 & 4294967295) == 0) {
        return ;
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "Info message: ");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t29 = TraceFP();
        _v20 = Arg;
        fprintf(_t29, Msg2);
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "\n");
    }
    LYstore_message2(Msg2, Arg);
    LYSleepInfo();
    return;
}

HTUserMsg(const char* Msg)
{// addr = 0x0805A506
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    struct _IO_FILE* _t14;
    _unknown_ _t15;
    _unknown_ _t19;

    mustshow = 1;
    statusline(Msg);
    if(Msg == 0) {
        return ;
    }
    if(( *Msg & 255 & 4294967295) == 0) {
        return ;
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t14 = TraceFP();
        _v20 = Msg;
        fprintf(_t14, "User message: %s\n");
    }
    LYstore_message(Msg);
    LYSleepMsg();
    return;
}

HTUserMsg2(const char* Msg2, const char* Arg)
{// addr = 0x0805A569
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t28;
    struct _IO_FILE* _t29;
    _unknown_ _t32;
    _unknown_ _t34;
    _unknown_ _t38;
    _unknown_ _t40;
    _unknown_ _t42;

    mustshow = 1;
    user_message(Msg2, Arg);
    if(Msg2 == 0) {
        return ;
    }
    if(( *Msg2 & 255 & 4294967295) == 0) {
        return ;
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "User message: ");
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t29 = TraceFP();
        _v20 = Arg;
        fprintf(_t29, Msg2);
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "\n");
    }
    LYstore_message2(Msg2, Arg);
    LYSleepMsg();
    return;
}

HTProgress(const char* Msg)
{// addr = 0x0805A627
    const char* _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    struct _IO_FILE* _t10;
    _unknown_ _t12;

    statusline(Msg);
    LYstore_message(Msg);
    _t9 = WWW_TraceFlag & 255;
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        _t10 = TraceFP();
        _v20 = Msg;
        fprintf(_t10, "%s\n");
    }
    LYSleepDebug();
    return;
}

const char* HTProgressUnits(int rate)
{// addr = 0x0805A673
    const char* _v8;
    _unknown_ __ebp;

    if(bunits == 0) {
        bunits = gettext("bytes");
        kbunits = gettext(LYTransferName);
    }
    if(rate == 2 || rate == 4) {
        _v8 = kbunits;
        return _v8;
    }
    _v8 = bunits;
    return _v8;
}

const char* sprint_bytes(char* s, off_t n, const char* was_units)
{// addr = 0x0805A6C8
    const char* u;
    long long int _v16;
    const char* _v32;
    long long int _v36;
    signed int _v40;
    signed int _v44;
    signed int _v48;
    signed int _v52;
    signed int _v64;
    long long int _v68;
    const char* _v72;
    char _v76;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t62;
    signed int _t69;
    _unknown_ _t73;
    int _t76;
    _unknown_ _t78;
    _unknown_ _t83;
    _unknown_ _t89;
    _unknown_ _t93;
    signed int _t94;
    _unknown_ _t96;
    signed int _t97;
    _unknown_ _t101;
    const char* _t110;

    _t97 = __ecx;
    _v36 = n;
    _v32 = was_units;
    _v16 = HTProgressUnits(LYTransferRate);
    if(LYTransferRate == 2) {
L2:
        _v52 = kb_units;
        _v48 =  *135875404;
        _t69 = _v52;
        _v44 = _t69 * 10;
        _v40 = _t69 * 10 >> 32;
        _v40 = _t97 * _v48 + _t94 * _v52 + _v40;
        if(_v40 > _v32) {
L6:
            if(_v32 >= 0) {
L10:
                _v68 = _v36;
                _v64 = _v32;
                sprintf(s, "%lld");
                _v16 = HTProgressUnits(1);
                goto L12;
            }
            goto L7;
        }
        goto L3;
L7:
        if(_v32 > 0 || _v36 > 999) {
            asm("fild qword [ebp-0x20]");
            _push( *135875404);
            _push(kb_units);
            asm("fild qword [esp]");
            __esp =  &_v76;
            asm("fdivp st1, st0");
            asm("fstp qword [esp+0x8]");
            (__esp)[1] = "%.2g";
             *__esp = s;
            sprintf();
            goto L12;
        } else {
            goto L10;
        }
        goto L13;
    }
    if(LYTransferRate != 4) {
        _v68 = _v36;
        _v64 = _v32;
        sprintf(s, "%lld");
L12:
        if(_a16 != 0) {
L13:
            if(_a16 == _v16) {
                return _v16;
            }
        }
        _t76 = strlen(s);
        _v68 = _v16;
        sprintf( &(s[_t76]), " %s");
        return _v16;
    }
    goto L2;
L3:
    if(_v40 < _v32 || _v44 <= _v36) {
        _v68 = kb_units;
        _v64 =  *135875404;
        _t110 = _v32;
         *__esp = _v36;
        _v72 = _t110;
        _v68 = L08149560();
        _v64 = _t110;
        sprintf(s, "%lld");
        goto L12;
    }
    goto L6;
}

char* sprint_tbuf(char* s, long int t)
{// addr = 0x0805A869
    signed int _v12;
    signed int _v16;
    signed int _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    long int _v36;
    _unknown_ _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t84;
    _unknown_ _t87;
    _unknown_ _t96;
    _unknown_ _t102;
    _unknown_ _t104;
    _unknown_ _t113;
    _unknown_ _t118;
    _unknown_ _t127;
    _unknown_ _t133;
    signed int _t142;
    signed int _t146;
    signed int _t149;

    if(t <= 3600) {
        if(t <= 60) {
            _v36 = t;
            sprintf(s, "%ld sec");
            return s;
        }
        goto L3;
    }
    _t146 = t;
    _v24 = -2004318071;
    _v20 = ((_v24 * _t146 >> 32) + _t146 >> 5) - (_t146 >> 31);
    _v20 = _t146 - (0 + _v20 * 4 << 4) - 0 + _v20 * 4;
    _t147 = t;
    _v24 = -2004318071;
    _t149 = ((_v24 * t >> 32) + t >> 5) - (_t147 >> 31);
    _v24 = -2004318071;
    _v16 = ((_v24 * _t149 >> 32) + _t149 >> 5) - (_t149 >> 31);
    _v16 = _t149 - (0 + _v16 * 4 << 4) - 0 + _v16 * 4;
    _t150 = t;
    _v24 = -1851608123;
    _v28 = _v20;
    _v32 = _v16;
    _v36 = ((_v24 * t >> 32) + t >> 11) - (_t150 >> 31);
    sprintf(s, "%ldh%ldm%lds");
    return s;
L3:
    _t142 = t;
    _v24 = -2004318071;
    _v12 = ((_v24 * _t142 >> 32) + _t142 >> 5) - (_t142 >> 31);
    _v12 = _t142 - (0 + _v12 * 4 << 4) - 0 + _v12 * 4;
    _t143 = t;
    _v24 = -2004318071;
    _v32 = _v12;
    _v36 = ((_v24 * t >> 32) + t >> 5) - (_t143 >> 31);
    sprintf(s, "%ldm%lds");
    return s;
}

HTReadProgress(off_t bytes, off_t total)
{// addr = 0x0805AA02
    char[79] bytesp;
    char[79] totalp;
    char[79] transferp;
    int renew;
    const char* was_units;
    struct timeval tv;
    double now;
    char[15] tbuf;
    intOrPtr _v24;
    char _v40;
    char _v120;
    char _v200;
    char _v280;
    int _v284;
    const char* _v288;
    intOrPtr _v292;
    char _v296;
    signed int _v312;
    long long int _v316;
    char* _v320;
    long long int _v324;
    signed int _v326;
    signed int _v328;
    long int _v332;
    signed int _v336;
    long long int _v340;
    signed int _v344;
    long long int _v348;
    signed int _v352;
    long long int _v356;
    const char* _v368;
    char* _v372;
    long long int _v376;
    char _v380;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t128;
    _unknown_ _t134;
    _unknown_ _t144;
    const char* _t145;
    _unknown_ _t147;
    _unknown_ _t150;
    struct _IO_FILE* _t152;
    _unknown_ _t154;
    char* _t161;
    const char* _t162;
    _unknown_ _t163;
    char* _t167;
    const char* _t168;
    _unknown_ _t169;
    _unknown_ _t174;
    const char* _t175;
    _unknown_ _t177;
    const char* _t178;
    _unknown_ _t179;
    _unknown_ _t193;
    _unknown_ _t222;
    long long int _t232;
    long long int _t235;
    int _t236;
    _unknown_ _t249;
    int _t258;

    _v316 = bytes;
    _v312 = total;
    _v324 = _a12;
    _v320 = _a16;
    _v24 =  *gs:0x14];
    _v284 = 0;
    _v376 = 0;
     *__esp =  &_v296;
    gettimeofday();
    _push(_v296);
    asm("fild dword [esp]");
    __esp =  ?_? ( &_v380);
    _push(_v292);
    asm("fild dword [esp]");
    __esp =  &_v380 + 4;
    asm("fld qword [0x814cb50]");
    asm("fdivp st1, st0");
    asm("faddp st1, st0");
    asm("fstp qword [ebp+0xfffffed0]");
    if((LYShowTransferRate & 255 & 4294967295) == 0) {
        LYTransferRate = 0;
    }
    _t140 = _v316 | _v312;
    if((_v316 | _v312) != 0) {
        if(_v312 < 0) {
            _v316 = bytes_last;
            _v312 =  *135971116;
            _t140 = total_last;
            _v324 = total_last;
            _v320 =  *135971108;
        }
    } else {
        asm("fld qword [ebp+0xfffffed0]");
        asm("fstp qword [0x81ac0f8]");
        asm("fld qword [0x81ac0f8]");
        asm("fstp qword [0x81ac100]");
        asm("fld qword [0x81ac100]");
        asm("fstp qword [0x81ac108]");
        _t140 = _v316;
        bytes_last = _v316;
         *135971116 = _v312;
    }
    if(_v312 >= 0) {
L51:
        if(_t258 == 0) {
            return ;
        }
L52:
        __stack_chk_fail();
        return;
    }
    if(_v312 > 0) {
L9:
        asm("fld qword [0x81ac108]");
        asm("fld qword [ebp+0xfffffed0]");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
        if(_t232 <= 0) {
            goto L51;
        }
        goto L10;
    }
    _t232 = _v316;
    if(_t232 <= 0) {
        goto L51;
    }
    goto L9;
L10:
    _v356 = transfer_rate;
    _v352 =  *135971100;
    if(_v352 > 0) {
L14:
        _t140 = _v324;
        total_last = _v324;
         *135971108 = _v320;
        asm("fld qword [0x81ac100]");
        asm("fld qword [0x814cb58]");
        asm("faddp st1, st0");
        asm("fld qword [ebp+0xfffffed0]");
        asm("fucompp ");
        asm("fnstsw ax");
        asm("sahf ");
        if(_t235 >= 0) {
            _v284 = 1;
        }
        _t236 = _v284;
        if(_t236 == 0) {
            goto L51;
        } else {
            asm("fld qword [0x81ac100]");
            asm("fld qword [ebp+0xfffffed0]");
            asm("fucompp ");
            asm("fnstsw ax");
            asm("sahf ");
            if(_t236 > 0) {
                asm("fld qword [ebp+0xfffffed0]");
                asm("fstp qword [0x81ac100]");
                if((bytes_last ^ _v316 |  *135971116 ^ _v312) != 0) {
                    asm("fld qword [ebp+0xfffffed0]");
                    asm("fstp qword [0x81ac0f8]");
                }
                bytes_last = _v316;
                 *135971116 = _v312;
                asm("fild qword [ebp+0xfffffec8]");
                asm("fld qword [0x81ac108]");
                asm("fld qword [ebp+0xfffffed0]");
                asm("fsubrp st1, st0");
                asm("fdivp st1, st0");
                asm("fnstcw word [ebp+0xfffffebe]");
                _v328 = _v326 & 65535 & 4294967295;
                asm("fldcw word [ebp+0xfffffebc]");
                asm("fistp qword [ebp+0xfffffeb0]");
                asm("fldcw word [ebp+0xfffffebe]");
                transfer_rate = _v340;
                 *135971100 = _v336;
            }
            if(_v320 >= 0 || _v320 <= 0 && _v324 <= 0) {
                _v288 = 0;
            } else {
                _v368 = 0;
                _v376 = _v324;
                _v372 = _v320;
                 *__esp =  &_v200;
                _v288 = sprint_bytes();
            }
            _v368 = _v288;
            _v376 = _v316;
            _v372 = _v312;
             *__esp =  &_v120;
            sprint_bytes();
            if(_v320 >= 0 || _v320 <= 0 && _v324 <= 0) {
                _t145 = gettext("Read %s of data");
                _v372 =  &_v120;
                HTSprintf0(135971088, _t145);
            } else {
                _t178 = gettext("Read %s of %s of data");
                _v368 =  &_v200;
                _v372 =  &_v120;
                HTSprintf0(135971088, _t178);
            }
            if(LYTransferRate != 0) {
                _v348 = transfer_rate;
                _v344 =  *135971100;
                if(_v344 < 0 && (_v344 > 0 || _v348 > 0)) {
                    _v368 = 0;
                    _v376 = transfer_rate;
                    _v372 =  *135971100;
                     *__esp =  &_v280;
                    sprint_bytes();
                    _t175 = gettext(", %s/sec");
                    _v372 =  &_v280;
                    HTSprintf(135971088, _t175);
                }
            }
            if(LYTransferRate == 3) {
L38:
                asm("fld qword [0x81ac0f8]");
                asm("fld qword [ebp+0xfffffed0]");
                asm("fsubrp st1, st0");
                asm("fld qword [0x814cb60]");
                asm("fxch st0, st1");
                asm("fucompp ");
                asm("fnstsw ax");
                asm("sahf ");
                if(_t249 >= 0) {
                    asm("fld qword [0x81ac0f8]");
                    asm("fld qword [ebp+0xfffffed0]");
                    asm("fsubrp st1, st0");
                    asm("fnstcw word [ebp+0xfffffebe]");
                    _v328 = _v326 & 65535 & 4294967295;
                    asm("fldcw word [ebp+0xfffffebc]");
                    asm("fistp dword [ebp+0xfffffeb8]");
                    asm("fldcw word [ebp+0xfffffebe]");
                    _t167 = sprint_tbuf( &_v40, _v332);
                    _t168 = gettext(" (stalled for %s)");
                    _v372 = _t167;
                    HTSprintf(135971088, _t168);
                }
                if(_v320 < 0 && (_v320 > 0 || _v324 > 0) && (transfer_rate |  *135971100) != 0) {
                    asm("sbb edi, ebx");
                    _t161 = sprint_tbuf( &_v40, L08149560(_v324 - _v316, _v320, transfer_rate,  *135971100));
                    _t162 = gettext(", ETA %s");
                    _v372 = _t161;
                    HTSprintf(135971088, _t162);
                }
L45:
                HTSACat(135971088, ".");
                if(_v320 <= 255 && (_v320 < 255 || _v324 < 255)) {
                    HTSACat(135971088, gettext(" (Press 'z' to abort)"));
                }
                statusline( *135971088);
                _t140 = WWW_TraceFlag & 255;
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t152 = TraceFP();
                    _v372 =  *135971088;
                    _t258 = fprintf(_t152, "%s\n");
                }
                goto L51;
            }
            _t249 = LYTransferRate - 4;
            if(_t249 != 0) {
                goto L45;
            }
            goto L38;
        }
        goto L52;
    }
    if(_v352 >= 0) {
L13:
        asm("fild qword [ebp+0xfffffec8]");
        asm("fld qword [0x81ac108]");
        asm("fld qword [ebp+0xfffffed0]");
        asm("fsubrp st1, st0");
        asm("fdivp st1, st0");
        asm("fnstcw word [ebp+0xfffffebe]");
        _v328 = _v326 & 65535 & 4294967295;
        asm("fldcw word [ebp+0xfffffebc]");
        asm("fistp qword [ebp+0xfffffeb0]");
        asm("fldcw word [ebp+0xfffffebe]");
        transfer_rate = _v340;
         *135971100 = _v336;
        goto L14;
    }
    _t235 = _v356;
    if(_t235 > 0) {
        goto L14;
    }
    goto L13;
}

BOOLEAN HTLastConfirmCancelled()
{// addr = 0x0805B052
    signed char _v5;
    _unknown_ __ebp;

    if((conf_cancelled & 255 & 4294967295) == 0) {
        _v5 = 0;
        return _v5 & 255;
    }
    conf_cancelled = 0;
    _v5 = 1;
    return _v5 & 255;
}

int HTForcedPrompt(int option, const char* msg, int dft)
{// addr = 0x0805B07A
    int result;
    const char* show;
    char* msg2;
    int _v8;
    char* _v12;
    const char* _v16;
    int _v24;
    char* _v32;
    const char* _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t38;
    _unknown_ _t41;

    _v8 = 0;
    _v12 = 0;
    _v16 = 0;
    if(option == 0) {
        _v8 = HTConfirmDefault(msg, dft);
L8:
        _v24 = _v8;
        return _v24;
    }
    if(option == 1) {
        _v12 = gettext("yes");
        _v8 = 1;
L7:
        _v32 = _v12;
        _v36 = msg;
        HTSprintf( &_v16, "%s %s");
        HTUserMsg(_v16);
        free(_v16);
        goto L8;
    }
    goto L4;
L6:
    _v24 = HTConfirmDefault(msg, dft);
    return _v24;
L10:
L4:
    if(option == 2) {
        _v12 = gettext("no");
        _v8 = 0;
        goto L7;
    }
    goto L6;
}

int HTConfirmDefault(const char* Msg, int Dft)
{// addr = 0x0805B14A
    const char* msg_yes;
    const char* msg_no;
    int result;
    char* msg;
    char fallback_y;
    char fallback_n;
    int c;
    char* _v13;
    char* _v14;
    char* _v20;
    char* _v24;
    char* _v28;
    void* _v32;
    signed int _v36;
    char* _v48;
    char* _v52;
    signed int _v56;
    signed int _v60;
    signed int _v64;
    signed int _v68;
    signed int _v72;
    signed int _v76;
    signed int _v92;
    signed int _v96;
    const char* _v100;
    _unknown_ _v104;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t168;
    char* _t170;
    signed int _t181;
    _unknown_ _t205;
    int _t209;
    signed int _t220;
    struct _IO_FILE* _t236;
    _unknown_ _t237;
    signed int _t252;
    _unknown_ _t256;
    struct _IO_FILE* _t258;
    _unknown_ _t259;
    _unknown_ _t270;
    _unknown_ _t278;
    struct _IO_FILE* _t282;
    _unknown_ _t283;
    struct _IO_FILE* _t292;
    _unknown_ _t294;
    signed int _t297;
    _unknown_ _t319;
    _unknown_ _t321;

    _v20 = gettext("yes");
    _t170 = gettext("no");
    _v24 = _t170;
    _v28 = -1;
    __ctype_b_loc();
    if(( *( *_t170 + ( *_v20 & 255 & 4294967295 & ) + ( *_v20 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
        _t181 =  *_v20 & 255 & 4294967295 & ;
        _v76 = _t181;
    } else {
        _t181 =  *_v20 & 255 & 4294967295 & ;
         *__esp = _t181;
        toupper();
        _v76 = _t181;
    }
    __ctype_b_loc();
    if(( *( *_t181 + ( *_v24 & 255 & 4294967295 & ) + ( *_v24 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
        _v72 =  *_v24 & 255 & 4294967295 & ;
    } else {
        _t297 =  *_v24 & 255 & 4294967295 & ;
         *__esp = _t297;
        toupper();
        _v72 = _t297;
    }
    if(_v76 == _v72) {
        _v20 = "yes";
        _v24 = "no";
    }
    conf_cancelled = 0;
    if((dump_output_immediately & 255 & 4294967295) == 0) {
        _v32 = 0;
        _v13 = 121;
        _v14 = 110;
        if(( *_v20 & 255 & 4294967295) == _v13 || ( *_v24 & 255 & 4294967295) == _v13) {
            _v13 = 0;
        }
        if(( *_v20 & 255 & 4294967295) == _v14 || ( *_v24 & 255 & 4294967295) == _v14) {
            _v14 = 0;
        }
        if(Dft != 254) {
            if(Dft != 1) {
                _v64 =  *_v24 & 255 & 4294967295;
            } else {
                _v64 =  *_v20 & 255 & 4294967295;
            }
            _v96 = _v64;
            _v100 = Msg;
            HTSprintf0( &_v32, "%s (%c) ");
        } else {
            _v92 =  *_v24 & 255 & 4294967295;
            _v96 =  *_v20 & 255 & 4294967295;
            _v100 = Msg;
            HTSprintf0( &_v32, "%s (%c/%c) ");
        }
        if(LYTraceLogFP != 0 && (WWW_TraceFlag & 255 & 4294967295) != 0) {
            _t258 = TraceFP();
            _v100 = _v32;
            fprintf(_t258, "Confirm: %s");
        }
        mustshow = 1;
        statusline(_v32);
        if(_v32 != 0) {
            free(_v32);
            _v32 = 0;
        }
        while(_v28 >= 0) {
            _t209 = LYgetch_single();
            _v36 = _t209;
            __ctype_b_loc();
            if(( *( *_t209 + ( *_v20 & 255 & 4294967295 & ) + ( *_v20 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
                _t220 =  *_v20 & 255 & 4294967295 & ;
                _v60 = _t220;
            } else {
                _t220 =  *_v20 & 255 & 4294967295 & ;
                 *__esp = _t220;
                toupper();
                _v60 = _t220;
            }
            if(_v60 != _v36) {
                __ctype_b_loc();
                if(( *( *_t220 + ( *_v24 & 255 & 4294967295 & ) + ( *_v24 & 255 & 4294967295 & )) & 65535 & 4294967295 &  & 512) == 0) {
                    _v56 =  *_v24 & 255 & 4294967295 & ;
                } else {
                    _t252 =  *_v24 & 255 & 4294967295 & ;
                     *__esp = _t252;
                    toupper();
                    _v56 = _t252;
                }
                if(_v56 != _v36) {
                    if(_v13 == 0 || _v13 != _v36) {
                        if(_v14 == 0 || _v14 != _v36) {
                            if(_v36 == 3 || _v36 == 7) {
L62:
                                conf_cancelled = 1;
                                _v28 = 0;
                                continue;
                            } else {
                                if(_v36 != 255) {
                                    if((_v36 & 34816) == 0) {
                                        if(( *((_v36 & 2047) + 1 + (_v36 & 2047) + 1 +  &keymap) & 65535 & 4294967295) != 47) {
                                            goto L63;
                                        }
                                        goto L62;
L64:
                                        _v28 = Dft;
L66:
                                        if((WWW_TraceFlag & 255 & 4294967295) == 0) {
                                            return _v28;
                                        }
                                        if((conf_cancelled & 255 & 4294967295) == 0) {
                                            _v52 = 135579385;
                                        } else {
                                            _v52 = ", cancelled";
                                        }
                                        if(_v28 == 0) {
                                            _v48 = "NO";
                                        } else {
                                            _v48 = "YES";
                                        }
                                        _t236 = TraceFP();
                                        _v96 = _v52;
                                        _v100 = _v48;
                                        fprintf(_t236, "- %s%s.\n");
                                        return _v28;
                                    }
                                    goto L59;
                                }
                                if((keymap & 65535 & 4294967295) == 47) {
                                    goto L62;
                                }
                                goto L63;
L59:
                                if((_v36 & 255) == 47) {
                                    goto L62;
                                }
                            }
L63:
                            if(Dft == 254) {
                                continue;
                            }
                            goto L64;
                        }
                        _v28 = 0;
                        continue;
                    }
                    _v28 = 1;
                    continue;
                }
                _v28 = 0;
                continue;
            }
            _v28 = 1;
        }
    }
    if(Dft != 254) {
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            if(Dft != 1) {
                _v68 =  *_v24 & 255 & 4294967295;
            } else {
                _v68 =  *_v20 & 255 & 4294967295;
            }
            _t282 = TraceFP();
            _v96 = _v68;
            _v100 = Msg;
            fprintf(_t282, "Confirm: %s (%c) ");
        }
    } else {
        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
            _t292 = TraceFP();
            _v92 =  *_v24 & 255 & 4294967295;
            _v96 =  *_v20 & 255 & 4294967295;
            _v100 = Msg;
            fprintf(_t292, "Confirm: %s (%c/%c) ");
        }
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "- NO, not interactive.\n");
    }
    _v28 = 0;
    return _v28;
}

BOOLEAN HTConfirm(const char* Msg)
{// addr = 0x0805B5FB
    _unknown_ _v8;
    _unknown_ __ebp;

    return HTConfirmDefault(Msg, -2);
}

BOOLEAN confirm_post_resub(const char* address, const char* title, int if_imgmap, int if_file)
{// addr = 0x0805B616
    size_t len1;
    const char* msg;
    char[239] buf;
    char* temp;
    BOOLEAN res;
    size_t maxlen;
    intOrPtr _v8;
    char _v248;
    signed int _v249;
    int _v256;
    char* _v260;
    void* _v264;
    intOrPtr _v268;
    const char* _v280;
    char* _v284;
    signed char _v285;
    void* _v292;
    _unknown_ _v296;
    _unknown_ __ebp;
    _unknown_ _t145;
    _unknown_ _t146;
    char _t177;
    _unknown_ _t179;
    _unknown_ _t188;
    _unknown_ _t192;
    _unknown_ _t194;
    _unknown_ _t198;
    _unknown_ _t202;
    _unknown_ _t209;
    _unknown_ _t213;
    _unknown_ _t217;
    _unknown_ _t222;
    _unknown_ _t226;
    _unknown_ _t238;
    const char* _t241;

    _v280 = address;
    _v284 = title;
    _v8 =  *gs:0x14];
    gettext("Resubmit POST content to %s ?");
    _v260 = 0;
    _v264 = 0;
    _v268 = LYcols - (LYShowScrollbar & 255 & 4294967295 & ) - 5;
    _t241 = _v280;
    if(_t241 != 0) {
        if(strncasecomp(_v280, "LYNXIMGMAP:", 11) != 0) {
            if(( *_v280 & 255 & 4294967295) == 102 || ( *_v280 & 255 & 4294967295) == 70) {
                if(strncasecomp(_v280, "file:", 5) != 0) {
                    goto L16;
                }
            } else {
L16:
                if((dump_output_immediately & 255 & 4294967295) == 0) {
                    goto L18;
                } else {
                    _v285 = 0;
                }
                goto L46;
            }
L11:
            if(if_file > 0) {
                if(if_file != 1) {
                    _v260 = gettext("List from document with POST data.  Reload %s ?");
                    goto L18;
                } else {
                    _v285 = 1;
                }
            } else {
                _v285 = 0;
            }
            goto L46;
        }
        if(if_imgmap > 0) {
            if(if_imgmap != 1) {
                _v260 = gettext("List from document with POST data.  Reload %s ?");
L18:
                if(_v268 > 239) {
                    _v268 = 239;
                }
                _v256 = strlen(_v260);
                if(strlen(_v280) + _v256 > _v268) {
                    _v264 = HTParse(_v280, 135579385, 29);
                    if(strlen(_v264) + _v256 > _v268) {
                        if(_v264 != 0) {
                            free(_v264);
                            _v264 = 0;
                        }
                        if(_v284 == 0 || strlen(_v284) + _v256 > _v268) {
                            _v264 = HTParse(_v280, 135579385, 25);
                            if(strlen(_v264) + _v256 > _v268) {
                                if(_v264 != 0) {
                                    free(_v264);
                                    _v264 = 0;
                                }
                                _v264 = HTParse(_v280, 135579385, 8);
                                if(_v264 == 0 || ( *_v264 & 255 & 4294967295) == 0 || strlen(_v264) + _v256 > _v268) {
                                    if(_v264 != 0) {
                                        free(_v264);
                                        _v264 = 0;
                                    }
                                    _v285 = HTConfirm(gettext("Document from Form with POST content.  Resubmit?")) & 4294967295;
                                } else {
                                    _v292 = _v264;
                                    sprintf( &_v248, _v260);
                                    _v249 = HTConfirm( &_v248) & 4294967295;
                                    if(_v264 != 0) {
                                        free(_v264);
                                        _v264 = 0;
                                    }
                                    _v285 = _v249 & 255 & 4294967295;
                                }
                            } else {
                                _v292 = _v264;
                                sprintf( &_v248, _v260);
                                _v249 = HTConfirm( &_v248) & 4294967295;
                                if(_v264 != 0) {
                                    free(_v264);
                                    _v264 = 0;
                                }
                                _v285 = _v249 & 255 & 4294967295;
                            }
                        } else {
                            _v292 = _v284;
                            sprintf( &_v248, _v260);
                            _v285 = HTConfirm( &_v248) & 4294967295;
                        }
                    } else {
                        _v292 = _v264;
                        sprintf( &_v248, _v260);
                        _v249 = HTConfirm( &_v248) & 4294967295;
                        if(_v264 != 0) {
                            free(_v264);
                            _v264 = 0;
                        }
                        _v285 = _v249 & 255 & 4294967295;
                    }
                } else {
                    _v292 = _v280;
                    sprintf( &_v248, _v260);
                    _v285 = HTConfirm( &_v248) & 4294967295;
                }
            } else {
                _v285 = 1;
            }
        } else {
            _v285 = 0;
        }
    } else {
        _v285 = 0;
    }
L46:
    _t177 = _v285 & 255;
    if(_t241 == 0) {
        return _t177;
    }
    __stack_chk_fail();
    return _t177;
}

char* HTPrompt(const char* Msg, const char* deflt)
{// addr = 0x0805BB07
    char* rep;
    char[199] Tmp;
    intOrPtr _v8;
    int _v9;
    char _v208;
    int _v212;
    const char* _v216;
    const char* _v220;
    _unknown_ _v224;
    _unknown_ _v228;
    _unknown_ _v232;
    _unknown_ __ebp;
    _unknown_ _t28;
    _unknown_ _t33;
    char* _t34;
    _unknown_ _t36;
    _unknown_ _t39;
    _unknown_ _t41;
    signed int _t43;

    _v216 = Msg;
    _v220 = deflt;
    _v8 =  *gs:0x14];
    _v212 = 0;
    _v208 = 0;
    _v9 = 0;
    mustshow = 1;
    statusline(_v216);
    if(_v220 != 0) {
        strncpy( &_v208, _v220, 199);
    }
    _t43 = dump_output_immediately & 255 & 4294967295;
    if(_t43 == 0) {
        LYgetstr( &_v208, 0, 200, 0);
    }
    HTSACopy( &_v212,  &_v208);
    _t34 = _v212;
    if(_t43 == 0) {
        return _t34;
    }
    __stack_chk_fail();
    return _t34;
}

char* HTPromptPassword(const char* Msg)
{// addr = 0x0805BBE2
    char* result;
    char[119] pw;
    intOrPtr _v8;
    char _v128;
    union  _v132;
    const char* _v136;
    char* _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    char* _v152;
    _unknown_ __ebp;
    _unknown_ _t26;
    _unknown_ _t29;
    _unknown_ _t31;
    char* _t32;
    _unknown_ _t35;
    _unknown_ _t38;
    _unknown_ _t41;
    const char* _t44;

    _v136 = Msg;
    _v8 =  *gs:0x14];
    _v132 = 0;
    _v128 = 0;
    if((dump_output_immediately & 255 & 4294967295) != 0) {
        _v152 = gettext("lynx: Password required!!!");
        printf("\n%s\n");
        HTSACopy( &_v132, 135579385);
    } else {
        mustshow = 1;
        _t44 = _v136;
        if(_t44 != 0) {
            _v140 = _v136;
        } else {
            _v140 = gettext("Password: ");
        }
        statusline(_v140);
        LYgetstr( &_v128, 1, 120, 0);
        HTSACopy( &_v132,  &_v128);
    }
    _t32 = _v132;
    if(_t44 == 0) {
        return _t32;
    }
    __stack_chk_fail();
    return _t32;
}

HTPromptUsernameAndPassword(const char* Msg, char** username, char** password, BOOLEAN IsProxy)
{// addr = 0x0805BCCF
    signed int _v12;
    void* _v16;
    char*[1] _v20;
    void* _v24;
    char*[1] _v28;
    void* _v32;
    char*[1] _v36;
    char* _v40;
    _unknown_ __ebp;
    _unknown_ _t85;
    _unknown_ _t96;
    _unknown_ _t99;
    _unknown_ _t101;
    _unknown_ _t113;
    _unknown_ _t116;
    _unknown_ _t119;
    _unknown_ _t123;
    _unknown_ _t125;
    _unknown_ _t127;
    _unknown_ _t132;
    _unknown_ _t135;
    _unknown_ _t138;
    _unknown_ _t145;
    _unknown_ _t148;
    _unknown_ _t151;
    _unknown_ _t159;
    _unknown_ _t164;
    _unknown_ _t166;
    _unknown_ _t168;
    _unknown_ _t171;
    _unknown_ _t174;

    _v12 = IsProxy & 4294967295;
    if(_v12 != 0 || authentication_info == 0 ||  *135981316 == 0) {
        if(_v12 != 1 || proxyauth_info == 0 ||  *135981424 == 0) {
            if((dump_output_immediately & 255 & 4294967295) == 0) {
                if(_v12 != 0 || authentication_info == 0) {
                    if(_v12 != 1 || proxyauth_info == 0) {
L62:
                        if(Msg == 0) {
                             *username = HTPrompt(gettext("Username: "),  *username);
                        } else {
                             *username = HTPrompt(Msg,  *username);
                        }
                        if(_v12 != 0 ||  *135981316 == 0) {
                            if(_v12 != 1 ||  *135981424 == 0) {
                                if( *username == 0 || ( *( *username) & 255 & 4294967295) == 0) {
                                    HTSACopy(password, 135579385);
                                    return;
                                }
                                 *password = HTPromptPassword(gettext("Password: "));
                                return;
                            } else {
                                goto L69;
                            }
                        }
L69:
                        if(_v12 == 0) {
                            _v16 =  *135981316;
                        } else {
                            _v16 =  *135981424;
                        }
                        HTSACopy(password, _v16);
                        if(_v12 == 0) {
                            if( *135981316 == 0) {
                                return ;
                            }
                            free( *135981316);
                             *135981316 = 0;
                            return;
                        } else {
                            if( *135981424 == 0) {
                                return ;
                            }
                            free( *135981424);
                             *135981424 = 0;
                            return;
                        }
                    } else {
                        goto L54;
                    }
                }
L54:
                if(_v12 == 0) {
                    _v20 = authentication_info;
                } else {
                    _v20 = proxyauth_info;
                }
                HTSACopy(username, _v20);
                if(_v12 == 0) {
                    if(authentication_info != 0) {
                        free(authentication_info);
                        authentication_info = 0;
                    }
                } else {
                    if(proxyauth_info != 0) {
                        free(proxyauth_info);
                        proxyauth_info = 0;
                    }
                }
                goto L62;
            }
        } else {
            goto L6;
        }
L23:
        if(_v12 != 0 || authentication_info == 0) {
            if(_v12 != 1 || proxyauth_info == 0) {
                HTSACopy(username, "WWWuser");
L36:
                if(_v12 != 0 ||  *135981316 == 0) {
                    if(_v12 != 1 ||  *135981424 == 0) {
                        HTSACopy(password, 135579385);
                    } else {
                        goto L40;
                    }
L49:
                    _v40 = gettext("lynx: Username and Password required!!!");
                    printf("\n%s\n");
                    return;
                }
L40:
                if(_v12 == 0) {
                    _v24 =  *135981316;
                } else {
                    _v24 =  *135981424;
                }
                HTSACopy(password, _v24);
                if(_v12 == 0) {
                    if( *135981316 != 0) {
                        free( *135981316);
                         *135981316 = 0;
                    }
                } else {
                    if( *135981424 != 0) {
                        free( *135981424);
                         *135981424 = 0;
                    }
                }
                goto L49;
            } else {
                goto L27;
            }
        }
L27:
        if(_v12 == 0) {
            _v28 = authentication_info;
        } else {
            _v28 = proxyauth_info;
        }
        HTSACopy(username, _v28);
        if(_v12 == 0) {
            if(authentication_info != 0) {
                free(authentication_info);
                authentication_info = 0;
            }
        } else {
            if(proxyauth_info != 0) {
                free(proxyauth_info);
                proxyauth_info = 0;
            }
        }
        goto L36;
    }
L6:
    if(_v12 == 0) {
        _v36 = authentication_info;
    } else {
        _v36 = proxyauth_info;
    }
    HTSACopy(username, _v36);
    if(_v12 == 0) {
        if(authentication_info != 0) {
            free(authentication_info);
            authentication_info = 0;
        }
    } else {
        if(proxyauth_info != 0) {
            free(proxyauth_info);
            proxyauth_info = 0;
        }
    }
    if(_v12 == 0) {
        _v32 =  *135981316;
    } else {
        _v32 =  *135981424;
    }
    HTSACopy(password, _v32);
    if(_v12 != 0) {
        if( *135981424 == 0) {
            return ;
        }
        free( *135981424);
         *135981424 = 0;
        return;
    }
    if( *135981316 == 0) {
        return ;
    }
    free( *135981316);
     *135981316 = 0;
    return;
}

BOOLEAN HTConfirmCookie(domain_entry* de, const char* server, const char* name, const char* value)
{// addr = 0x0805C142
    int ch;
    const char* prompt;
    int namelen;
    int valuelen;
    int space_free;
    int percentage;
    char* message;
    char* p;
    char* s;
    _unknown_ _v16;
    char* _v20;
    signed int _v24;
    signed int _v28;
    signed int _v32;
    signed int _v36;
    void* _v40;
    _unknown_ _v44;
    _unknown_ _v48;
    _unknown_ _v64;
    _unknown_ _v68;
    signed int _v69;
    _unknown_ _v80;
    signed int _v84;
    const char* _v100;
    signed int _v104;
    const char* _v108;
    signed int _v112;
    const char* _v116;
    _unknown_ _v120;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t170;
    _unknown_ _t183;
    _unknown_ _t215;
    _unknown_ _t223;
    _unknown_ _t234;
    _unknown_ _t257;
    _unknown_ _t258;
    _unknown_ _t261;
    _unknown_ _t262;
    _unknown_ _t265;
    _unknown_ _t269;
    _unknown_ _t270;
    _unknown_ _t289;
    _unknown_ _t293;
    _unknown_ _t301;
    _unknown_ _t307;
    signed int _t320;
    _unknown_ _t342;
    _unknown_ _t343;

    _t320 = __ecx;
    _v20 = gettext("%s cookie: %.*s=%.*s  Allow? (Y/N/Always/neVer)");
    if(de == 0) {
        _v69 = 0;
        return _v69 & 255;
    }
    if( *((intOrPtr*)(de + 4)) == 0) {
        _v69 = 1;
        return _v69 & 255;
    }
    if( *((intOrPtr*)(de + 4)) == 1) {
        _v69 = 0;
        return _v69 & 255;
    }
    if((dump_output_immediately & 255 & 4294967295) != 0) {
        _v69 = LYSetCookies & 255 & 4294967295;
        return _v69 & 255;
    }
    if((LYAcceptAllCookies & 255 & 4294967295) == 0) {
        _v24 = strlen(name);
        _v28 = strlen(value);
        if(_v24 + _v28 > _v32) {
            _v36 = _t320 * _v32 / (_v24 + _v28);
            _v84 = 1374389535;
            _v24 = (_v84 * _v36 * _v24 >> 32 >> 5) - (_v36 * _v24 >> 31);
            _v84 = 1374389535;
            _v28 = (_v84 * _v36 * _v28 >> 32 >> 5) - (_v36 * _v28 >> 31);
        }
        _v100 = value;
        _v104 = _v28;
        _v108 = name;
        _v112 = _v24;
        _v116 = server;
        HTSprintf( &_v40, _v20);
        mustshow = 1;
        statusline(_v40);
        if(_v40 != 0) {
            free(_v40);
            _v40 = 0;
        }
    }
L15:
    while(1) {
L15:
        while(1) {
            while(1) {
            }
        }
    }
}

int HTConfirmPostRedirect(const char* Redirecting_url, int server_status)
{// addr = 0x0805C62D
    int result;
    char* show_POST_url;
    char* StatusInfo;
    char* url;
    int on_screen;
    int c;
    int _v8;
    void* _v12;
    char* _v16;
    const char* _v20;
    char _v24;
    int _v28;
    char* _v40;
    int _v44;
    int _v48;
    char _v52;
    int _v56;
    char* _v60;
    const char* _v64;
    int _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    _unknown_ _t105;
    _unknown_ _t108;
    _unknown_ _t111;
    _unknown_ _t119;
    _unknown_ _t121;
    _unknown_ _t124;
    _unknown_ _t127;
    _unknown_ _t131;
    const char* _t136;
    _unknown_ _t139;
    _unknown_ _t148;

    _v8 = -1;
    _v12 = 0;
    _v16 = 0;
    _v20 = 0;
    _v24 = 0;
    if(server_status == 303 || server_status == 302) {
        _v48 = 303;
        return _v48;
    }
    if((dump_output_immediately & 255 & 4294967295) != 0) {
        if(server_status == 301) {
            _v48 = 303;
            return _v48;
        }
        _v48 = 0;
        return _v48;
    }
    if(user_mode != 0) {
        if(server_status != 301) {
            _v40 = gettext("Redirection of POST content.  P)roceed, see U)RL, or C)ancel");
        } else {
            _v40 = gettext("Redirection of POST content.  P)roceed, see U)RL, use G)ET or C)ancel");
        }
        _v60 = _v40;
        _v64 = 251;
        _v68 = server_status;
        HTSprintf0( &_v16, "%d %.*s");
        HTSACopy( &_v12, gettext("Location: "));
        HTSACat( &_v12, Redirecting_url);
        goto L48;
    } else {
        _v24 = 2;
        LYmove(LYlines - 2, 0);
        _t136 = gettext("Server asked for %d redirection of POST content to");
        _v68 = server_status;
        HTSprintf0( &_v16, _t136);
        LYwaddnstr(LYwin, _v16, strlen(_v16));
        LYclrtoeol();
        LYmove(LYlines - 1, 0);
        if(LYcols > 249) {
            _v44 = 250;
        } else {
            _v44 = LYcols - (LYShowScrollbar & 255 & 4294967295 & ) - 5;
        }
        _v64 = Redirecting_url;
        _v68 = _v44;
        HTSprintf0( &_v20, "URL: %.*s");
        LYwaddnstr(LYwin, _v20, strlen(_v20));
        LYclrtoeol();
        if(server_status != 301) {
            mustshow = 1;
            statusline(gettext("P)roceed, or C)ancel "));
        } else {
            mustshow = 1;
            statusline(gettext("P)roceed, use G)ET or C)ancel "));
        }
L48:
        while(_v8 >= 0) {
            _v52 = _v24;
            if(_v52 == 0) {
                mustshow = 1;
                statusline(_v16);
            } else {
                if(_v52 == 1) {
                    mustshow = 1;
                    statusline(_v12);
                }
            }
            _v28 = LYgetch_single();
            _v56 = _v28;
            if(_v56 == 71) {
                if(server_status != 301) {
                    goto L45;
                }
            } else {
                if(_v56 > 71) {
                    if(_v56 == 80) {
                        if(_v12 != 0) {
                            free(_v12);
                            _v12 = 0;
                        }
                        _v8 = 1;
                        continue;
                    }
                    goto L29;
                }
                if(_v56 == 7 || _v56 == 67) {
                    if(_v12 != 0) {
                        free(_v12);
                        _v12 = 0;
                    }
                    _v8 = 0;
                    continue;
                }
L45:
                if(_v24 != 1) {
                    _v24 = 2;
                } else {
                    _v24 = 0;
                }
                continue;
L29:
                if(_v56 == 85) {
                    if(user_mode != 0) {
                        if(_v24 != 1) {
                            _v24 = 1;
                        } else {
                            _v24 = 0;
                        }
                    }
                    continue;
                }
                goto L45;
            }
L42:
            if(_v12 != 0) {
                free(_v12);
                _v12 = 0;
            }
            _v8 = 303;
        }
    }
}

LYSleepAlert()
{// addr = 0x0805C9E8
    _unknown_ __ebp;

    if((crawl & 255 & 4294967295) != 0) {
        return ;
    }
    if((traversal & 255 & 4294967295) != 0) {
        return ;
    }
    if((LYCursesON & 255 & 4294967295) == 0) {
        return ;
    }
     *__esp = AlertSecs;
    napms();
    return;
}

LYSleepDebug()
{// addr = 0x0805CA1E
    _unknown_ __ebp;

    if((crawl & 255 & 4294967295) != 0) {
        return ;
    }
    if((traversal & 255 & 4294967295) != 0) {
        return ;
    }
    if((LYCursesON & 255 & 4294967295) == 0) {
        return ;
    }
     *__esp = DebugSecs;
    napms();
    return;
}

LYSleepInfo()
{// addr = 0x0805CA54
    _unknown_ __ebp;

    if((crawl & 255 & 4294967295) != 0) {
        return ;
    }
    if((traversal & 255 & 4294967295) != 0) {
        return ;
    }
    if((LYCursesON & 255 & 4294967295) == 0) {
        return ;
    }
     *__esp = InfoSecs;
    napms();
    return;
}

LYSleepMsg()
{// addr = 0x0805CA8A
    _unknown_ __ebp;

    if((crawl & 255 & 4294967295) != 0) {
        return ;
    }
    if((traversal & 255 & 4294967295) != 0) {
        return ;
    }
    if((LYCursesON & 255 & 4294967295) == 0) {
        return ;
    }
     *__esp = MessageSecs;
    napms();
    return;
}

LYSleepReplay()
{// addr = 0x0805CAC0
    _unknown_ __ebp;

    if((crawl & 255 & 4294967295) != 0) {
        return ;
    }
    if((traversal & 255 & 4294967295) != 0) {
        return ;
    }
    if((LYCursesON & 255 & 4294967295) == 0) {
        return ;
    }
     *__esp = ReplaySecs;
    napms();
    return;
}

pool_data* ALLOC_IN_POOL(HTPool** ppoolptr, unsigned int request)
{// addr = 0x0805CAF8
    HTPool* pool;
    pool_data* ptr;
    unsigned int n;
    unsigned int j;
    HTPool* newpool;
    struct _HTPool* _v8;
    HTPool* _v12;
    int _v16;
    signed int _v20;
    HTPool* _v24;
    _unknown_ _v40;
    _unknown_ __ebp;

    _v8 =  *ppoolptr;
    if(_v8 == 0) {
        _v12 = 0;
        return _v12;
    }
    _v16 = request;
    if(_v16 == 0) {
        _v16 = 1;
    }
    _v20 = _v16 & 7;
    if(_v20 != 0) {
        _v16 = _v16 - _v20 + 8;
    }
    _v16 = _v16 >> 2;
    if(_v8->used + _v16 > 2042) {
        _v24 = LY_check_calloc(1, 8176);
        if(_v24 != 0) {
            _v24->prev = _v8;
            _v24->used = _v16;
            _v12 = _v24;
             *ppoolptr = _v24;
            return _v12;
        }
        goto L9;
    }
    _v12 = _v8 + (_v8->used << 2);
    _v8->used = _v8->used + _v16;
    return _v12;
L9:
    _v12 = 0;
    return _v12;
}

HTPool* POOL_NEW()
{// addr = 0x0805CBE3
    HTPool* poolptr;
    _Unknown_base* _v8;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t9;

    _v8 = LY_check_calloc(1, 8176);
    if(_v8 == 0) {
        return _v8;
    }
     *((intOrPtr*)(_v8 + 8168)) = 0;
     *((intOrPtr*)(_v8 + 8172)) = 0;
    return _v8;
}

POOL_FREE(HTPool* poolptr)
{// addr = 0x0805CC25
    HTPool* cur;
    HTPool* prev;
    void* _v8;
    void _v12;
    _unknown_ __ebp;
    _unknown_ _t14;

    _v8 = poolptr;
    while(_v8 != 0) {
        _v12 = _v8[0x7fa];
        free(_v8);
        _v8 = _v12;
    }
}

_Unknown_base* HText_pool_calloc(HText* text, unsigned int size)
{// addr = 0x0805CC58
    _unknown_ _v8;
    _unknown_ __ebp;

    return ALLOC_IN_POOL( &(text->pool), size);
}

ht_justify_cleanup()
{// addr = 0x0805CC78
    int _v8;
    _unknown_ __ebp;

    if((ok_justify & 255 & 4294967295) == 0 || (psrc_view & 255 & 4294967295) != 0) {
        _v8 = 30002;
    } else {
        _v8 = -1;
    }
    wait_for_this_stacked_elt = _v8;
    can_justify_here = 1;
    can_justify_this_line = 1;
    form_in_htext = 0;
    last_anchor_of_previous_line = 0;
    this_line_was_split = 0;
    in_DT = 0;
    have_raw_nbsps = 0;
    return;
}

mark_justify_start_position(_Unknown_base* text)
{// addr = 0x0805CCE2
    _unknown_ __ebp;

    if(text == 0) {
        return ;
    }
    if( *((intOrPtr*)(text + 4)) == 0) {
        return ;
    }
    justify_start_position =  *( *((intOrPtr*)(text + 4)) + 10) & 65535 & 4294967295 & ;
    return;
}

HText_halt()
{// addr = 0x0805CD09
    _unknown_ __ebp;

    if(HTFormNumber > 0) {
        HText_DisableCurrentForm();
    }
    if(HTMainText == 0) {
        return ;
    }
    if(HTMainText->halted > 1) {
        return ;
    }
    HTMainText->halted = 2;
    return;
}

BOOLEAN mem_is_avail(size_t factor, size_t bytes)
{// addr = 0x0805CD47
    _Unknown_base* p;
    void* _v8;
    unsigned int _v21;
    _unknown_ __ebp;
    _unknown_ _t21;

    if(bytes <= 4999 && factor != 0) {
        bytes = 5000;
    }
    if(factor == 0) {
        factor = 1;
    }
    _v8 = malloc(factor * bytes);
    if(_v8 == 0) {
        _v21 = 0;
        return _v21 & 255;
    } else {
        if(_v8 != 0) {
            free(_v8);
            _v8 = 0;
        }
        _v21 = 1;
        return _v21 & 255;
    }
}

_Unknown_base* LY_check_calloc(size_t nmemb, size_t size)
{// addr = 0x0805CDB0
    int i;
    int n;
    HText* t;
    int _v12;
    int _v16;
    HText* _v20;
    char* _v28;
    char* _v32;
    void* _v36;
    char* _v40;
    char* _v44;
    int _v48;
    intOrPtr _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    _unknown_ _t81;
    struct _IO_FILE* _t109;
    _unknown_ _t113;

    if((mem_is_avail(4, nmemb * size) & 4294967295) != 0) {
        _v36 = calloc(nmemb, size);
        return _v36;
    }
    _v16 = HTList_count(loaded_texts);
    _v12 = _v16 - 1;
    while(_v12 > 0) {
        _v20 = HTList_objectAt(loaded_texts, _v12);
        if((WWW_TraceFlag & 255 & 4294967295) == 0) {
L15:
            HTList_removeObjectAt(loaded_texts, _v12);
            HText_free(_v20);
            if((mem_is_avail(4, nmemb * size) & 4294967295) != 0) {
                _v36 = calloc(nmemb, size);
                return _v36;
            }
            _v12 = _v12 - 1;
            continue;
        }
        if(_v20 == 0 ||  *_v20 == 0) {
L8:
            _v32 = 135580588;
        } else {
            if( *((intOrPtr*)( *_v20 + 20)) == 0) {
                goto L8;
            } else {
                _v32 = " with POST data";
            }
        }
L9:
        if(_v20 == 0 ||  *_v20 == 0 ||  *((intOrPtr*)( *_v20 + 16)) == 0) {
            _v28 = "unknown anchor";
        } else {
            _v28 =  *( *_v20 + 16);
        }
        _t109 = TraceFP();
        _v40 = _v32;
        _v44 = _v28;
        _v48 = _v16;
        _v52 = _v12 + 1;
        fprintf(_t109, "\nBUG *** Emergency freeing document %d/%d for '%s'%s!\n");
        goto L15;
    }
}

int StyleToCols(HText* text, HTLine* line, int nstyle)
{// addr = 0x0805D017
    int result;
    int nchars;
    char* data;
    char* last;
    int utf_extra;
    signed int _v8;
    signed int _v12;
    char* _v16;
    char* _v20;
    int _v24;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ __ebp;
    signed int _t86;

    _v8 = line->offset & 65535 & 4294967295 & ;
    _v12 =  *(line->styles + (nstyle << 2)) & 65535 & 4294967295 & ;
    _v16 = line + 18;
    _v20 =  &(_v16[line->size & 65535 & 4294967295 & ]);
L12:
    while(_v12 > 0) {
        if(_v16 >= _v20) {
            return _v8;
        }
        if(( *_v16 & 255 & 4294967295) <= 2 || ( *_v16 & 255 & 4294967295) > 8) {
L5:
            _t86 = utf8_length( *(text + 2251) & 255 & 4294967295, _v16);
            _v24 = _t86;
            _v24 = _v24 + 1;
            if((_t86 & 4294967295) == 0) {
                if(HTCJK == 0 || ( *_v16 & 255 & 4294967295) >= 0) {
                    _v16 =  &(_v16[1]);
                    _v8 = _v8 + 1;
                } else {
                    _v16 =  &(_v16[2]);
                    _v8 = _v8 + 2;
                }
            } else {
                _v8 = _v8 + LYstrExtent(_v16, _v24, 2);
                _v16 =  &(_v16[_v24]);
            }
            _v12 = _v12 - 1;
        } else {
            if(( *_v16 & 255 & 4294967295) == 8) {
                goto L5;
            } else {
                _v16 =  &(_v16[1]);
            }
        }
    }
}

LYClearHiText(TextAnchor* a)
{// addr = 0x0805D11B
    _unknown_ __ebp;
    _unknown_ _t17;

    if( *(a + 32) != 0) {
        free( *(a + 32));
         *(a + 32) = 0;
    }
     *(a + 36) = 0;
     *(a + 44) = 0;
    return;
}

LYSetHiText(TextAnchor* a, const char* text, int len)
{// addr = 0x0805D158
    _unknown_ _v20;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t18;
    _unknown_ _t27;

    if(text == 0) {
        return ;
    }
     *(a + 36) = ALLOC_IN_POOL( &(HTMainText->pool), len + 2);
    memcpy( *(a + 36), text, len);
     *((char*)( *(a + 36) + len)) = 0;
     *((short*)(a + 44)) = 1;
    return;
}

LYAddHiText(TextAnchor* a, const char* text, int x)
{// addr = 0x0805D1C0
    HiliteInfo* have;
    unsigned int need;
    unsigned int want;
    void* _v12;
    signed int _v16;
    int _v20;
    _unknown_ _v40;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t65;

    _v12 =  *(a + 32);
    asm("cwde ");
    _v16 = ( *(a + 44) & 65535) - 1;
     *(a + 44) = ( *(a + 44) & 65535) + 1 & 4294967295;
    asm("cwde ");
    _v20 = ( *(a + 44) & 65535) << 3;
    if(_v12 == 0) {
        _v12 = malloc(_v20);
    } else {
        _v12 = realloc(_v12, _v20);
    }
     *(a + 32) = _v12;
     *(_v12 + (_v16 << 3)) = ALLOC_IN_POOL( &(HTMainText->pool), strlen(text) + 2);
    strcpy( *(_v12 + (_v16 << 3)), text);
     *(_v12 + (_v16 << 3) + 4) = x & 4294967295;
    return;
}

int LYAdjHiTextPos(TextAnchor* a, int count)
{// addr = 0x0805D296
    char* result;
    char* _v8;
    int _v24;
    _unknown_ __ebp;
    _unknown_ _t29;

    asm("cwde ");
    if(( *(a + 44) & 65535) > count) {
        if(count <= 0) {
            _v8 =  *(a + 36);
        } else {
            _v8 =  *( *((intOrPtr*)(a + 32)) +  ~(1 - count << 3));
        }
    } else {
        _v8 = 0;
    }
    if(_v8 == 0) {
        _v24 = 0;
        return _v24;
    }
    _v24 = LYSkipBlanks(_v8) - _v8;
    return _v24;
}

char* LYGetHiTextStr(TextAnchor* a, int count)
{// addr = 0x0805D30B
    char* result;
    char* _v8;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t29;

    asm("cwde ");
    if(( *(a + 44) & 65535) > count) {
        if(count <= 0) {
            _v8 =  *(a + 36);
        } else {
            _v8 =  *( *((intOrPtr*)(a + 32)) +  ~(1 - count << 3));
        }
    } else {
        _v8 = 0;
    }
    _v8 =  &(_v8[LYAdjHiTextPos(a, count)]);
    return _v8;
}

int LYGetHiTextPos(TextAnchor* a, int count)
{// addr = 0x0805D36F
    int result;
    int _v8;
    _unknown_ _v24;
    _unknown_ __ebp;
    _unknown_ _t30;

    asm("cwde ");
    if(( *(a + 44) & 65535) > count) {
        if(count <= 0) {
            asm("cwde ");
            _v8 = a->line_pos & 65535;
        } else {
            asm("cwde ");
            _v8 =  *( *((intOrPtr*)(a + 32)) +  ~(1 - count << 3) + 4) & 65535;
        }
    } else {
        _v8 = -1;
    }
    _v8 = _v8 + LYAdjHiTextPos(a, count);
    return _v8;
}

LYCopyHiText(TextAnchor* a, TextAnchor* b)
{// addr = 0x0805D3D8
    int count;
    char* s;
    int _v8;
    const char* _v12;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;

    LYClearHiText(a);
    _v8 = 0;
    while(1) {
        _v12 = LYGetHiTextStr(b, _v8);
        if(_v12 == 0) {
            break;
        }
        if(_v8 != 0) {
            LYAddHiText(a, _v12, LYGetHiTextPos(b, _v8));
        } else {
            LYSetHiText(a, _v12, strlen(_v12));
        }
        _v8 = _v8 + 1;
    }
    return;
}

HText_getChartransInfo(HText* me)
{// addr = 0x0805D464
    int chndl;
    int _v8;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t34;

    me->UCLYhndl = HTAnchor_getUCLYhndl(me->node_anchor, 3);
    if(me->UCLYhndl < 0) {
        _v8 = current_char_set;
        HTAnchor_setUCInfoStage(me->node_anchor, _v8, 3, 3);
        me->UCLYhndl = HTAnchor_getUCLYhndl(me->node_anchor, 3);
    }
    me->UCI = HTAnchor_getUCInfoStage(me->node_anchor, 3);
    return;
}

PerFormInfo_free(PerFormInfo* form)
{// addr = 0x0805D505
    _unknown_ __ebp;
    _unknown_ _t22;
    _unknown_ _t25;
    _unknown_ _t28;

    if(form == 0) {
        return ;
    }
    if(form->accept_cs != 0) {
        free(form->accept_cs);
        form->accept_cs = 0;
    }
    if(form->thisacceptcs != 0) {
        free(form->thisacceptcs);
        form->thisacceptcs = 0;
    }
    if(form == 0) {
        return ;
    }
    free(form);
    form = 0;
    return;
}

free_form_fields(FormInfo* input_field)
{// addr = 0x0805D56F
    OptionType* optptr;
    OptionType* tmp;
    void* _v8;
    void* _v12;
    _unknown_ __ebp;
    _unknown_ _t109;
    _unknown_ _t113;
    _unknown_ _t117;
    _unknown_ _t121;
    _unknown_ _t125;
    _unknown_ _t129;
    _unknown_ _t133;
    _unknown_ _t137;
    _unknown_ _t141;
    _unknown_ _t160;
    _unknown_ _t163;
    _unknown_ _t167;

    if(input_field->type != 7 || input_field->select_list == 0) {
        if(input_field->value != 0) {
            free(input_field->value);
            input_field->value = 0;
        }
        if(input_field->orig_value != 0) {
            free(input_field->orig_value);
            input_field->orig_value = 0;
        }
        if(input_field->cp_submit_value != 0) {
            free(input_field->cp_submit_value);
            input_field->cp_submit_value = 0;
        }
        if(input_field->orig_submit_value != 0) {
            free(input_field->orig_submit_value);
            input_field->orig_submit_value = 0;
        }
        if(input_field->name != 0) {
            free(input_field->name);
            input_field->name = 0;
        }
        if(input_field->submit_action != 0) {
            free(input_field->submit_action);
            input_field->submit_action = 0;
        }
        if(input_field->submit_enctype != 0) {
            free(input_field->submit_enctype);
            input_field->submit_enctype = 0;
        }
        if(input_field->submit_title != 0) {
            free(input_field->submit_title);
            input_field->submit_title = 0;
        }
        if(input_field->accept_cs == 0) {
            return ;
        }
        free(input_field->accept_cs);
        input_field->accept_cs = 0;
        return;
    } else {
        _v8 = input_field->select_list;
    }
    while(_v8 != 0) {
        _v12 = _v8;
        _v8 = _v12[3];
        if( *_v12 != 0) {
            free( *_v12);
             *_v12 = 0;
        }
        if(_v12[1] != 0) {
            free(_v12[1]);
            _v12[1] = 0;
        }
        if(_v12 != 0) {
            free(_v12);
            _v12 = 0;
        }
    }
}

FormList_delete(HTList* forms)
{// addr = 0x0805D773
    HTList* cur;
    PerFormInfo* form;
    HTList* _v8;
    _unknown_ _v12;
    _unknown_ _v24;
    _unknown_ __ebp;

    _v8 = forms;
    while(1) {
    }
}

ResetPartialLinenos(HText* text)
{// addr = 0x0805D7CB
    _unknown_ __ebp;
    _unknown_ _t6;

    if(text == 0) {
        return ;
    }
    text->first_lineno_last_disp_partial = -1;
    text->last_lineno_last_disp_partial = -1;
    return;
}

HText* HText_new(HTParentAnchor* anchor)
{// addr = 0x0805D7F0
    HTLine* line;
    HText* self;
    struct _line* _v16;
    HText* _v20;
    signed char _v32;
    signed char _v33;
    signed char _v40;
    signed short _v42;
    HText* _v48;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    _unknown_ _v72;
    _unknown_ __ebp;
    _unknown_ _t233;
    _unknown_ _t334;
    _unknown_ _t335;
    _unknown_ _t353;
    _unknown_ _t356;
    _unknown_ _t365;
    _unknown_ _t379;

    _v16 = 0;
    _v20 = calloc(1, 2308);
    if(_v20 == 0) {
        _v48 = _v20;
        return _v48;
    }
    if((WWW_TraceFlag & 255 & 4294967295) != 0) {
        fprintf(TraceFP(), "GridText: start HText_new\n");
    }
    if(HTMainText == 0) {
L11:
        if(loaded_texts == 0) {
            loaded_texts = HTList_new();
        }
        if(anchor->document != 0) {
            HTList_removeObject(loaded_texts, anchor->document);
            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                fprintf(TraceFP(), "GridText: Auto-uncaching\n");
            }
            HTAnchor_delete_links(anchor);
            anchor = 0;
            HText_free(anchor->document);
            anchor->document = 0;
        }
        HTList_addObject(loaded_texts, _v20);
        if(HTList_count(loaded_texts) > HTCacheSize) {
            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                fprintf(TraceFP(), "GridText: Freeing off cached doc.\n");
            }
            HText_free(HTList_removeFirstObject(loaded_texts));
        }
        _v20->pool = POOL_NEW();
        if(_v20->pool == 0) {
            outofmem("./GridText.c", "HText_New");
        }
        _v20->last_line = _v20 + 8;
        _v16 = _v20->last_line;
        _v16->prev = _v16;
         *_v16 = _v16->prev;
        _v16->size = 0;
        _v16->offset = _v16->size & 65535 & 4294967295;
         *(_v16 + (_v16->size & 65535 & 4294967295 & ) + 18) = 0;
        _v16->numstyles = 0;
        _v16->styles =  &stylechanges_buffers;
        _v20->Lines = 0;
        _v20->last_anchor = 0;
        _v20->first_anchor = _v20->last_anchor;
        _v20->last_anchor_before_split = 0;
        _v20->style =  &default_style;
        _v20->top_of_screen = 0;
         *_v20 = anchor;
        _v20->last_anchor_number = 0;
         *(_v20 + 2177) = 1;
         *(_v20 + 2133) = 0;
        _v20->tabs = 0;
         *(_v20 + 2292) = clickable_images & 255 & 4294967295;
         *(_v20 + 2293) = pseudo_inline_alts & 255 & 4294967295;
         *(_v20 + 2294) = verbose_img & 255 & 4294967295;
         *(_v20 + 2295) = LYUseDefaultRawMode & 255 & 4294967295;
         *(_v20 + 2296) = historical_comments & 255 & 4294967295;
         *(_v20 + 2297) = minimal_comments & 255 & 4294967295;
         *(_v20 + 2298) = soft_dquotes & 255 & 4294967295;
        _v20->old_dtd = Old_DTD & 4294967295;
        _v20->keypad_mode = keypad_mode & 4294967295;
        _v20->disp_lines = LYlines & 4294967295;
        if(LYwideLines != 0) {
            _v42 = 1014;
        } else {
            _v42 = LYcols & 4294967295;
        }
        _v20->disp_cols = _v42 & 65535 & 4294967295;
        if(anchor->bookmark != 0 || (LYIsUIPage3(anchor->address, 4, 0) & 4294967295) != 0 || (LYIsUIPage3(anchor->address, 11, 0) & 4294967295) != 0) {
            _v20->hiddenlinkflag = 0;
        } else {
            _v20->hiddenlinkflag = LYHiddenLinks;
        }
        _v20->hidden_links = 0;
        if(( *(anchor + 108) & 255 & 4294967295) != 0 || anchor->post_data != 0) {
            _v40 = 1;
        } else {
            _v40 = 0;
        }
         *(_v20 + 2148) = _v40 & 255 & 4294967295;
        _v20->LastChar = 0;
         *(_v20 + 2150) = 0;
        if((LYpsrc & 255 & 4294967295) == 0) {
            _v33 = HTOutputFormat == WWW_SOURCE;
        } else {
            if((mark_htext_as_source & 255 & 4294967295) != 0 || (psrc_view & 255 & 4294967295) != 0) {
                _v32 = 1;
            } else {
                _v32 = 0;
            }
            _v33 = _v32 & 255 & 4294967295;
        }
         *(_v20 + 2132) = _v33 & 255 & 4294967295;
        mark_htext_as_source = 0;
        HTAnchor_setDocument(anchor, _v20);
        HTFormNumber = 0;
        HTMainText = _v20;
        HTMainAnchor = anchor;
        _v20->display_on_the_fly = 0;
         *(_v20 + 2200) = 0;
         *(_v20 + 2204) = 0;
         *((intOrPtr*)(_v20 + 2208)) = 2;
         *(_v20 + 2212) = 0;
         *(_v20 + 2216) = 0;
         *(_v20 + 2220) = 0;
        _v20->kanji_buf = 0;
        _v20->in_sjis = 0;
         *(_v20 + 2236) = 0;
        HText_getChartransInfo(_v20);
        UCSetTransParams(_v20 + 2248, _v20->UCLYhndl, _v20->UCI, current_char_set,  &LYCharSet_UC + (current_char_set << 5));
        HText_setKcode(_v20, anchor->charset, HTAnchor_getUCInfoStage(anchor, 3));
        if((underscore_string & 255 & 4294967295) != 46) {
            memset( &underscore_string, 46, 1023);
             *135981023 = 0;
             *135981024 = 0;
            memset( &star_string, 95, 1023);
             *136026719 = 0;
             *136026720 = 0;
        }
        underline_on = 0;
        bold_on = 0;
        if((display_partial_flag & 255 & 4294967295) != 0) {
            display_partial = 1;
            NumOfLines_partial = 0;
        }
        ResetPartialLinenos(_v20);
        ht_justify_cleanup();
        _v48 = _v20;
        return _v48;
    }
    if((HText_hasUTF8OutputSet(HTMainText) & 4294967295) == 0) {
L9:
         *((intOrPtr*)(_v20 + 2180)) =  *(HTMainText + 2179) & 255 & 4294967295;
        goto L10;
    }
    if((HTLoadedDocumentEightbit() & 4294967295) == 0 ||  *((intOrPtr*)((current_char_set << 5) + 135902088)) != 7) {
        goto L9;
    } else {
         *(_v20 + 2180) =  *(HTMainText + 2179) & 255 & 4294967295;
    }
L10:
     *(HTMainText + 2179) = 0;
    goto L11;
}

HText* HText_new2(HTParentAnchor* anchor, HTStream* stream)
{// addr = 0x0805DE7F
    HText* result;
    HText* _v8;
    _unknown_ __ebp;
    const HTStreamClass* _t33;

    _v8 = HText_new(anchor);
    if(stream == 0) {
        return _v8;
    }
    _v8->target = stream;
    _t33 = stream->isa;
    __ecx = _v8;
     *(__ecx + 2264) = _t33->name;
     *(__ecx + 2268) = _t33->_free;
     *(__ecx + 2272) = _t33->_abort;
     *(__ecx + 2276) = _t33->put_character;
     *(__ecx + 2280) = _t33->put_string;
     *(__ecx + 2284) = _t33->put_block;
    return _v8;
}

HText_free(HText* self)
{// addr = 0x0805DEE7
    TextAnchor* l;
    HTTabID* Tab;
    HTList* cur;
    _unknown_ _v8;
    _unknown_ _v12;
    _unknown_ _v16;
    _unknown_ _v24;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    _unknown_ __ebp;
    _unknown_ _t91;
    _unknown_ _t107;
    _unknown_ _t110;
    _unknown_ _t113;
    _unknown_ _t137;
    _unknown_ _t140;

    if(self == 0) {
        return ;
    }
    while(self->first_anchor != 0) {
    }
}

int display_line(HTLine* line, HText* text, int scrline, const char* target)
{// addr = 0x0805E11C
    int i;
    int j;
    char[6] buffer;
    char* data;
    size_t utf_extra;
    char LastDisplayChar;
    int current_style;
    int y;
    int x;
    char _v5;
    intOrPtr _v12;
    int _v16;
    int _v20;
    _unknown_ _v24;
    _unknown_ _v28;
    int _v33;
    signed char _v34;
    signed int _v35;
    signed int _v40;
    signed int _v44;
    _unknown_ _v48;
    _unknown_ _v52;
    _unknown_ _v56;
    _unknown_ _v60;
    _unknown_ _v64;
    _unknown_ _v68;
    signed int _v72;
    int _v76;
    _unknown_ _v84;
    intOrPtr _v88;
    _unknown_ __ebp;
    _unknown_ _t225;
    _unknown_ _t235;
    _unknown_ _t274;

    _v16 = 0;
    _v5 = 32;
    _v20 = 0;
    LYmove(scrline, 0);
    _v33 = 0;
    _v34 = _v33 & 255 & 4294967295;
    _v35 = _v34 & 255 & 4294967295;
    LYclrtoeol();
    _v40 = line->offset & 65535 & 4294967295 & ;
    if(LYwideLines != 0) {
        _v76 = 1014;
    } else {
        _v76 = LYcols;
    }
    if(_v76 <= _v40) {
        _v40 = _v72;
    }
    if((line->size & 65535 & 4294967295) != 0) {
        _v44 = 0;
L12:
        while(_v44 < _v40) {
            goto L11;
        }
    } else {
        _v44 = _v40;
        _v12 = line + 18;
        _v44 = _v44 + 1;
        while() {
        }
    }
L11:
    _v88 = 32;
     *__esp = LYwin;
    waddch();
    _v44 = _v44 + 1;
    goto L12;
}

display_title(HText* text)
{// addr = 0x0805E577
    char* title;
    char[19] percent;
    unsigned char* tmp;
    int i;
    int j;
    int toolbar;
    int limit;
    int total_pages;
    int start_of_last_page;
    int c;
    signed int _v12;
    int _v32;
    const unsigned char* _v36;
    int _v40;
    int _v44;
    int _v48;
    int _v52;
    int _v56;
    signed int _v60;
    int _v64;
    intOrPtr _v68;
    HText* _v76;
    intOrPtr _v80;
    signed int _v84;
    int _v88;
    const char* _v92;
    signed int _v104;
    signed int _v112;
    signed int _v116;
    intOrPtr _v120;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t189;
    signed int _t191;
    _unknown_ _t198;
    _unknown_ _t200;
    int _t213;
    signed int _t225;
    _unknown_ _t232;
    _unknown_ _t246;
    _unknown_ _t288;
    _unknown_ _t290;
    _unknown_ _t295;
    _unknown_ _t310;
    _unknown_ _t327;
    _unknown_ _t373;
    _unknown_ _t374;
    _unknown_ _t380;
    _unknown_ _t381;
    signed int _t407;

    _v76 = text;
    _v12 =  *gs:0x14];
    _v36 = 0;
    _v40 = 0;
    _v44 = 0;
    _v48 = 0;
    _v52 = 0;
    if(_v76 == 0) {
L65:
        _t191 = _v12 ^  *gs:0x14];
        if(_t407 == 0) {
            return _t191;
        }
        __stack_chk_fail();
        return _t191;
    } else {
        lynx_start_title_color();
        if(last_colorattr_ptr <= 0) {
            curses_style(s_title, 2);
        } else {
            curses_style(s_title, 1);
        }
        if(HTAnchor_title( *_v76) == 0) {
            _v92 = " ";
        } else {
            _v92 = HTAnchor_title( *_v76);
        }
        HTSACopy( &_v36, _v92);
        LYReduceBlanks(_v36);
        _v56 = LYscreenWidth();
        if(_v56 > 9) {
            if(display_lines > 0 || LYlines <= 0 || _v76->top_of_screen > 99999 || _v76->Lines > 999999) {
                if(_v76->Lines < display_lines || display_lines <= 0) {
                    _v32 = 0;
                } else {
                    _v104 = _v76->Lines + display_lines;
                    _v60 = _v104 / display_lines;
                    if(_v76->Lines <= display_lines) {
                        _v88 = 0;
                    } else {
                        _v88 = _v76->Lines - display_lines;
                    }
                    _v64 = _v88;
                    if(_v76->top_of_screen > _v64) {
                        _v84 = _v60;
                    } else {
                        _v104 = _v76->top_of_screen + display_lines;
                        _v84 = _v104 / display_lines;
                    }
                    _v112 = _v60;
                    _v116 = _v84;
                    sprintf( &_v32, " (p%d of %d)");
                }
            } else {
                _v112 = _v76->Lines;
                _v116 = _v76->top_of_screen;
                sprintf( &_v32, " (l%d of %d)");
            }
        } else {
            _v32 = 0;
        }
        if(HTCJK == 0 || ( *_v36 & 255 & 4294967295) == 0) {
L39:
            LYmove(0, 0);
            LYclrtoeol();
            if((HText_hasToolbar(_v76) & 4294967295) != 0) {
                _v120 = 35;
                 *__esp = LYwin;
                waddch();
                _v52 = 1;
            }
            if(s_forw_backw != 255 && (nhist != 0 || nhist_extra > 1)) {
                if(nhist == 0) {
                    _v80 = 32;
                } else {
                    _v80 =  *135965648;
                }
                _v68 = _v80;
                curses_style(s_forw_backw, 1);
                if(nhist == 0) {
                    LYmove(0, _v52 + 3);
                } else {
                    _v120 = _v68;
                     *__esp = LYwin;
                    waddch();
                    _v120 = _v68;
                     *__esp = LYwin;
                    waddch();
                    _v120 = _v68;
                     *__esp = LYwin;
                    waddch();
                }
                if(nhist_extra > 1) {
                    _v120 =  *135965644;
                     *__esp = LYwin;
                    waddch();
                    _v120 =  *135965644;
                     *__esp = LYwin;
                    waddch();
                    _v120 =  *135965644;
                     *__esp = LYwin;
                    waddch();
                }
                curses_style(s_forw_backw, 0);
            }
            _t213 = strlen( &_v32);
            _v44 = _v56 - (LYShowScrollbar & 255 & 4294967295 & ) - _t213 - LYstrCells(_v36);
            if(_v44 <= 0) {
                _v44 = _v56 - (LYShowScrollbar & 255 & 4294967295 & ) - strlen( &_v32) - 3;
                if(_v44 > 0) {
                    memcpy(_v36 + LYstrExtent2(_v36, _v44), "...", 4);
                } else {
                     *_v36 = 0;
                }
                _v44 = 0;
            }
            LYmove(0, _v44);
            LYwaddnstr(LYwin, _v36, strlen(_v36));
            if((_v32 & 255 & 4294967295) != 0) {
                LYwaddnstr(LYwin,  &_v32, strlen( &_v32));
            }
            _v120 = 10;
             *__esp = LYwin;
            waddch();
            if(_v36 != 0) {
                free(_v36);
                _v36 = 0;
            }
            if(s_hot_paste != 255) {
                _t225 = LYShowScrollbar & 255;
                _t407 = _t225 & 4294967295;
                LYmove(0, LYcols - (_t225 & 4294967295 & ));
                curses_style(s_hot_paste, 1);
                _v120 =  *135965644;
                 *__esp = LYwin;
                waddch();
                curses_style(s_hot_paste, 0);
                LYmove(1, 0);
            }
            curses_style(s_title, 0);
            lynx_stop_title_color();
            goto L65;
        }
        _v40 = calloc(strlen(_v36) - 128 + strlen(_v36) - 128, 1);
        if(_v40 == 0) {
            goto L39;
        }
        if(kanji_code != 1) {
            if(kanji_code != 2) {
                _v44 = 0;
                _v48 = 0;
L35:
                while(( *(_v36 + _v44) & 255 & 4294967295) != 0) {
                    goto L32;
                }
            }
            goto L30;
L32:
            if(( *(_v36 + _v44) & 255 & 4294967295) != 27) {
                 *(_v40 + _v48) =  *(_v36 + _v44) & 255 & 4294967295;
                _v48 = _v48 + 1;
            }
            _v44 = _v44 + 1;
            goto L35;
        }
        TO_EUC(_v36, _v40);
L37:
        HTSACopy( &_v36, _v40);
        if(_v40 != 0) {
            free(_v40);
            _v40 = 0;
        }
        goto L39;
L30:
        TO_SJIS(_v36, _v40);
        goto L37;
    }
}

display_scrollbar(HText* text)
{// addr = 0x0805EC06
    int i;
    int h;
    int off;
    int top_skip;
    int bot_skip;
    int sh;
    int shown;
    int s;
    int s;
    int _v12;
    signed int _v16;
    signed int _v20;
    int _v24;
    intOrPtr _v28;
    int _v32;
    int _v36;
    int _v40;
    _unknown_ _v44;
    signed short _v58;
    signed int _v60;
    _unknown_ _v64;
    int _v68;
    int _v72;
    int _v76;
    signed int _v84;
    intOrPtr _v88;
    char _v92;
    _unknown_ __ebx;
    _unknown_ __ebp;
    _unknown_ _t181;
    _unknown_ _t281;
    _unknown_ _t282;

    _v76 = display_lines;
    if((LYsb_arrow & 255 & 4294967295) == 0) {
        _v72 = 0;
    } else {
        _v72 = 2;
    }
    _v16 = _v76 - _v72;
    _v20 = LYsb_arrow & 255 & 4294967295 & ;
    LYsb_end = -1;
    LYsb_begin = LYsb_end;
    if((LYShowScrollbar & 255 & 4294967295) == 0) {
        return ;
    }
    if(text == 0) {
        return ;
    }
    if(_v16 <= 2) {
        return ;
    }
    if(text->Lines <= display_lines) {
        return ;
    }
    if(text->top_of_screen < text->Lines - display_lines) {
        _v36 = display_lines;
    } else {
        _v36 = text->Lines - text->top_of_screen;
        if(_v36 <= 0) {
            _v36 = 1;
        }
    }
    _v84 = _v36 * _v16 + ((text->Lines >> 31) + text->Lines >> 1);
    _v32 = _v84 / text->Lines;
    if(_v32 <= 0) {
        _v32 = 1;
    }
    if(_v16 - 1 <= _v32) {
        _v32 = _v16 - 2;
    }
    if(text->top_of_screen != 0) {
        if(text->Lines + 1 - text->top_of_screen + display_lines > 0) {
            _push(_v16 - _v32 - 1);
            asm("fild dword [esp]");
            __esp =  ?_? ( &_v92);
            _push(text->top_of_screen);
            asm("fild dword [esp]");
            __esp =  &_v92 + 4;
            asm("fmulp st1, st0");
            _push(text->Lines - display_lines + 1);
            asm("fild dword [esp]");
            __esp =  &(( &_v92 + 4)[1]);
            asm("fdivp st1, st0");
            asm("fld1 ");
            asm("faddp st1, st0");
            asm("fnstcw word [ebp-0x36]");
            _v60 = _v58 & 65535 & 4294967295;
            asm("fldcw word [ebp-0x38]");
            asm("fistp dword [ebp-0x14]");
            asm("fldcw word [ebp-0x36]");
        } else {
            _v24 = _v16 - _v32;
        }
    } else {
        _v24 = 0;
    }
    _v28 = _v16 - _v32 - _v24;
    LYsb_begin = _v24;
    LYsb_end = _v16 - _v28;
    if((LYsb_arrow & 255 & 4294967295) != 0) {
        if(_v24 == 0) {
            _v68 = s_sb_naa;
        } else {
            _v68 = s_sb_aa;
        }
        _v40 = _v68;
        if(last_colorattr_ptr <= 0) {
            curses_style(_v40, 2);
        } else {
            curses_style(_v40, 1);
        }
        LYmove(1, LYcols - (LYShowScrollbar & 255 & 4294967295 & ) + LYshiftWin);
        _v88 =  *135965652;
         *__esp = LYwin;
        waddch();
        curses_style(_v40, 0);
    }
    if(last_colorattr_ptr <= 0) {
        curses_style(s_sb_bg, 2);
    } else {
        curses_style(s_sb_bg, 1);
    }
    _v12 = 1;
    while(_v12 <= _v16) {
        if(_v12 - 1 <= _v24 && _v12 > _v24) {
            curses_style(s_sb_bar, 1);
        }
        if(_v12 - 1 <= _v16 - _v28 && _v16 - _v28 < _v12) {
            curses_style(s_sb_bar, 0);
        }
        LYmove(_v12 + _v20, LYcols - (LYShowScrollbar & 255 & 4294967295 & ) + LYshiftWin);
        if(_v12 <= _v24 || _v16 - _v28 < _v12) {
            _v88 =  *135965860;
             *__esp = LYwin;
            waddch();
        } else {
            _v88 =  *135965664;
             *__esp = LYwin;
            waddch();
        }
        _v12 = _v12 + 1;
    }
}

display_page(HText* text, int line_number, const char* target)
{// addr = 0x0805F0D2
    HTLine* line;
    int i;
    int title_lines;
    const char* cp;
    char[6] tmp;
    TextAnchor* Anchor_ptr;
    int stop_before_for_anchors;
    FormInfo* FormInfo_ptr;
    BOOLEAN display_flag;
    HTAnchor* link_dest;
    HTAnchor* link_dest_intl;
    int last_disp_partial;
    char* data;
    int offset;
    int LenNeeded;
    int itmp;
    int written;
    int x_pos;
    int len;
    size_t utf_extra;
    int y;
    char* hi_string;
    int count;
    char* s;
    char* cp_AnchorAddress;
    const char* _v5;
    struct _line* _v12;
    const char* _v16;
    char _v20;
    _unknown_ _v24;
    const char* _v28;
    _unknown_ _v32;
    _unknown_ _v36;
    _unknown_ _v40;
    const char* _v44;
    intOrPtr _v48;
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
    _unknown_ _v96;
    _unknown_ _v100;
    const char* _v105;
    signed char _v106;
    signed int _v107;
    _unknown_ _v120;
    _unknown_ _v124;
    _unknown_ _v128;
    _unknown_ _v132;
    _unknown_ _v136;
    _unknown_ _v140;
    _unknown_ _v144;
    _unknown_ _v148;
    _unknown_ _v152;
    _unknown_ _v156;
    _unknown_ _v160;
    _unknown_ _v164;
    intOrPtr _v168;
    _unknown_ __ebp;
    _unknown_ _t571;
    _unknown_ _t584;
    _unknown_ _t585;
    _unknown_ _t631;
    _unknown_ _t651;
    _unknown_ _t702;
    _unknown_ _t735;
    _unknown_ _t755;
    _unknown_ _t833;

    _v12 = 0;
    _v20 = 1;
    _v28 = 0;
    _v5 = 0;
    _v44 = 0;
    _v48 = -1;
    lynx_mode = 1;
    if(text == 0) {
        if((enable_scrollback & 255 & 4294967295) != 0) {
            _v168 = 42;
             *__esp = LYwin;
            waddch();
            LYrefresh();
            LYclear();
        }
        LYwaddnstr(LYwin, "\n\nError accessing document!\nNo data available!\n", 47);
        LYrefresh();
        nlinks = 0;
        return;
    }
    if((display_partial & 255 & 4294967295) != 0 || (recent_sizechange & 255 & 4294967295) != 0 || ( *(text + 2177) & 255 & 4294967295) != 0) {
        ResetPartialLinenos(text);
    }
    _v105 = 0;
    _v106 = _v105 & 255 & 4294967295;
    _v107 = _v106 & 255 & 4294967295;
    if(target != 0) {
        if(( *target & 255 & 4294967295) == 0) {
            target = 0;
        }
    }
     *(text + 2178) = 0;
    if(display_lines <= 0) {
        return ;
    }
    _v12 = text->last_line->prev;
    line_number = HText_getPreferredTopLine(text, line_number);
    _v16 = 0;
    _v12 = text->last_line->next;
    while() {
    }
}

HText_beginAppend(HText* text)
{// addr = 0x08060085
    _unknown_ __ebp;

    text->permissible_split = 0;
     *((char*)(text + 2176)) = 1;
    return;
}

int set_style_by_embedded_chars(char* s, char* e, unsigned char start_c, unsigned char end_c)
{// addr = 0x080600A1
    int ret;
    int _v8;
    signed char _v24;
    signed char _v28;
    _unknown_ __ebp;

    _v24 = start_c & 4294967295;
    _v28 = end_c & 4294967295;
    _v8 = 0;
    while(1) {
        e = e - 1;
        if(e < s) {
            break;
        }
        if(( *e & 255 & 4294967295) == (_v28 & 255)) {
            return _v8;
        }
        if(( *e & 255 & 4294967295) != (_v24 & 255)) {
            continue;
        } else {
            _v8 = 1;
            return _v8;
        }
        break;
    }
    return _v8;
}

move_anchors_in_region(HTLine* line, int line_number, TextAnchor** prev_anchor, int* prev_head_processed, int sbyte, int ebyte, int shift)
{// addr = 0x080600F8
    TextAnchor* a;
    int head_processed;
    int last;
    TextAnchor* _v8;
    int _v12;
    intOrPtr _v16;
    intOrPtr _v24;
    intOrPtr _v28;
    _unknown_ __ebp;
    _unknown_ _t123;

    _v12 =  *prev_head_processed;
    _v8 =  *prev_anchor;
    while(_v8 != 0 && _v8->line_num <= line_number) {
        _v16 = _v28 + _v24;
        if(_v8->line_num < line_number - 1) {
L17:
            _v8 =  *_v8;
            _v12 = 0;
            continue;
        }
        if(_v8->line_num == line_number - 1) {
            _v16 = _v16 +  !(line->prev->size & 65535 & 4294967295 & );
        }
        if(_v16 < sbyte) {
            goto L17;
        } else {
            if(_v12 != 0 || _v8->line_num != line_number) {
L11:
                if(_v12 == 0 && _v8->line_num == line_number) {
                    asm("cwde ");
                    if((_v8->line_pos & 65535) >= sbyte) {
                        _v8->line_pos = (_v8->line_pos & 65535) + shift & 4294967295;
                        _v8->extent = _v8->extent & 65535 & 4294967295;
                        _v12 = 1;
                    }
                }
                if(_v16 >= ebyte) {
L20:
                     *prev_anchor = _v8;
                     *prev_head_processed = _v12;
                    return;
                } else {
                    _v8->extent = (_v8->extent & 65535) + shift & 4294967295;
                    goto L17;
                }
            }
            asm("cwde ");
            if((_v8->line_pos & 65535) >= ebyte) {
                goto L20;
            }
            goto L11;
        }
    }
}

HTLine* insert_blanks_in_line(HTLine* line, int line_number, HText* text, TextAnchor** prev_anchor, int ninserts, int* oldpos, int* newpos)
{// addr = 0x0806025D
    int ioldc;
    int ip;
    int istyle;
    int added_chars;
    int shift;
    int head_processed;
    HTLine* mod_line;
    char* newdata;
    char* s;
    char* pre;
    char* copied;
    char* t;
    int curlim;
    int delta;
    struct _line** _v8;
    signed int _v12;
    signed int _v16;
    HTLine* _v20;
    int _v24;
    int _v28;
    void* _v32;
    void* _v36;
    signed char* _v40;
    signed char* _v44;
    signed char* _v48;
    signed int* _v52;
    int _v56;
    _unknown_ _v60;
    int _v72;
    int _v76;
    int _v80;
    HTLine* _v84;
    _unknown_ _v100;
    _unknown_ _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    _unknown_ _v116;
    _unknown_ _v120;
    _unknown_ __ebp;
    _unknown_ _t302;
    _unknown_ _t340;
    _unknown_ _t399;

    _v8 = 0;
    _v16 = 0;
    _v20 = 0;
    _v24 = 0;
    _v40 = line + 18;
    _v44 = _v40;
    _v48 = line + 18;
    if(line == 0 || (line->size & 65535 & 4294967295) == 0) {
L3:
        _v84 = 0;
        return _v84;
    }
    if(ninserts != 0) {
        _v12 = 0;
        while(_v12 < ninserts) {
        }
    }
    goto L3;
    if(_v20 + (line->size & 65535 & 4294967295 & ) > 1022) {
        _v84 = 0;
        return _v84;
    }
    if(text->last_line != line) {
        _v32 = ALLOC_IN_POOL( &(HTMainText->pool), _v20 + (line->size & 65535 & 4294967295 & ) + 20);
    } else {
        if(text + 8 != line) {
            _v32 = text + 8;
        } else {
            _v32 = text + 1056;
        }
    }
    if(_v32 != 0) {
        if( *prev_anchor == 0) {
             *prev_anchor = text->first_anchor;
        }
        if( *prev_anchor == 0 ||  *prev_anchor->line_num >= line_number) {
            _v80 = 0;
        } else {
            _v80 = 1;
        }
        _v28 = _v80;
        memcpy(_v32, line, 20);
        _v36 =  &(_v32[4]);
        _v52 = _v36;
        _v12 = 0;
        while(_v12 <= ninserts) {
            if(_v12 >= ninserts) {
                if((line->size & 65535 & 4294967295) <= 1024) {
                    _v72 = 1025;
                } else {
                    _v72 = (line->size & 65535 & 4294967295 & ) + 1;
                }
                _v76 = _v72;
            } else {
                _v76 = oldpos[_v12];
            }
            _v56 = _v76;
            _v44 = _v40;
            while(( *_v40 & 255 & 4294967295) != 0) {
                if(text == 0 || ( *(text + 2251) & 255 & 4294967295) == 0 || ( *_v40 & 255 & 4294967295) >= 0 || ( *_v40 & 255 & 4294967295) > 191) {
                    if(( *_v40 & 255 & 4294967295) <= 2 || ( *_v40 & 255 & 4294967295) > 8) {
                        if(_v8 >= _v56) {
                            if(_v12 != 0) {
                                move_anchors_in_region(line, line_number, prev_anchor,  &_v28, _v48 - line + 18, _v44 - line + 18, _v24);
                            }
                            while((line->numstyles & 65535 & 4294967295 & ) > _v16) {
                                if(( *(_v32[3] + (_v16 << 2)) & 65535 & 4294967295 & ) < _v56) {
                                     *(_v32[3] + (_v16 << 2)) = ( *(_v32[3] + (_v16 << 2)) & 65535 & 3 | 0 + (( *(_v32[3] + (_v16 << 2)) & 65535) + _v24) * 4) & 4294967295;
                                    _v16 = _v16 + 1;
                                    continue;
                                }
                                while(_v48 < _v44) {
                                     *_v52 =  *_v48 & 255 & 4294967295;
                                    _v52 =  &(_v52[0]);
                                    _v48 =  &(_v48[1]);
                                }
                            }
                        }
                    } else {
L42:
                        _v40 =  &(_v40[1]);
                        continue;
                    }
L41:
                    _v8 =  &(_v8->next);
                    _v44 =  &(_v40[1]);
                    goto L42;
                }
                _v44 =  &(_v40[1]);
                goto L42;
            }
        }
    }
    _v84 = 0;
    return _v84;
}

HTStyleChange* skip_matched_and_correct_offsets(HTStyleChange* end, HTStyleChange* start, unsigned int split_pos)
{// addr = 0x080606F2
    int level;
    HTStyleChange* tmp;
    unsigned int* _v8;
    HTStyleChange* _v12;
    HTStyleChange* _v24;
    _unknown_ __ebp;

    _v8 = 0;
    _v12 = end;
    while(_v12 >= start) {
        if((_v12->direction & 65535 & 4294967295) != (end->direction & 65535 & 4294967295)) {
L8:
            if(( *_v12 & 65535 & 4294967295 & ) > split_pos) {
L9:
                 *_v12 = ( *_v12 & 65535 & 3 | 0 + split_pos * 4) & 4294967295;
            }
            _v12 = _v12 - 4;
            continue;
        }
        if(( *_v12 & 255 & 3 & 4294967295) != 0) {
            if(( *_v12 & 255 & 3 & 4294967295) != 1) {
                _v24 = 0;
                return _v24;
            }
            goto L5;
        }
        _v8 = _v8 - 1;
        goto L8;
L5:
        _v8 =  &(_v8->direction);
        if(_v8 != 0) {
            goto L8;
        }
        _v24 = _v12;
        return _v24;
        goto L9;
    }
}

split_line(HText* text, unsigned int split)
{// addr = 0x080607A2
    HTStyle* style;
    int spare;
    int indent;
    int new_offset;
    short int alignment;
    TextAnchor* a;
    int CurLine;
    int HeadTrim;
    int SpecialAttrChars;
    int TailTrim;
    int s;
    int s_post;
    int s_pre;
    int t_underline;
    int t_bold;
    char* p;
    char* cp;
    int ctrl_chars_on_previous_line;
    HTLine* previous;
    HTLine* line;
    char* prevdata;
    char* linedata;
    unsigned int plen;
    int i;
    HTStyleChange* from;
    HTStyleChange* to;
    HTStyleChange* scan;
    HTStyleChange* at_end;
    int n;
    HTLine* temp;
    int moved;
    int len;
    int n;
    int start;
    int end;
    char* jp;
    ht_run_info* r;
    char c;
    int total_byte_len;
    int total_cell_len;
    int d_;
    int r_;
    HTLine* jline;
    int utf_extra;
    int* oldpos;
    int* newpos;
    int i;
    int delta;
    char* p2;
    char* p2;
    unsigned int i;
    signed int _v17;
    struct _TextAnchor _v40;
    int _v44;
    char _v48;
    signed int _v52;
    char _v56;
    char _v60;
    signed int _v64;
    signed int _v68;
    int _v72;
    int _v76;
    signed char* _v80;
    void* _v84;
    char _v88;
    void* _v92;
    HTLine* _v96;
    void* _v100;
    intOrPtr _v104;
    _unknown_ _v108;
    _unknown_ _v112;
    HTStyleChange* _v116;
    signed short* _v120;
    HTStyleChange* _v124;
    signed short* _v128;
    char _v132;
    void* _v136;
    char _v140;
    signed int _v144;
    short int _v148;
    signed int _v152;
    intOrPtr _v156;
    char* _v160;
    ht_run_info[1023]* _v164;
    char _v168;
    char _v172;
    signed int _v176;
    signed int _v180;
    _unknown_ _v184;
    unsigned int _v188;
    signed int _v192;
    intOrPtr* _v196;
    signed int _v200;
    intOrPtr _v204;
    void* _v208;
    void* _v212;
    char _v216;
    int _v225;
    int _v232;
    int _v236;
    intOrPtr _v240;
    signed int _v244;
    signed int _v248;
    _unknown_ _v252;
    _unknown_ _v256;
    _unknown_ _v260;
    char _v262;
    signed int _v268;
    intOrPtr _v272;
    signed int _v288;
    signed int _v292;
    signed int _v300;
    signed int _v304;
    short int _v308;
    signed int _v312;
    char _v316;
    char _v320;
    short int _v324;
    _unknown_ _v328;
    _unknown_ __ebx;
    _unknown_ __edi;
    _unknown_ __esi;
    _unknown_ __ebp;
    _unknown_ _t1196;
    _unknown_ _t1246;
    _unknown_ _t1263;
    _unknown_ _t1307;
    _unknown_ _t1323;
    struct _IO_FILE* _t1413;
    _unknown_ _t1414;
    _unknown_ _t1491;
    _unknown_ _t1503;
    _unknown_ _t1518;
    _unknown_ _t1527;
    _unknown_ _t1544;
    _unknown_ _t1553;
    _unknown_ _t1586;
    struct _IO_FILE* _t1598;
    _unknown_ _t1599;
    struct _IO_FILE* _t1605;
    _unknown_ _t1606;
    struct _IO_FILE* _t1611;
    _unknown_ _t1612;
    struct _IO_FILE* _t1618;
    _unknown_ _t1623;
    struct _IO_FILE* _t1627;
    _unknown_ _t1628;
    _unknown_ _t1636;
    _unknown_ _t1640;
    _unknown_ _t1646;
    _unknown_ _t1647;
    _unknown_ _t1652;
    struct _IO_FILE* _t1653;
    _unknown_ _t1654;
    _unknown_ _t1666;
    _unknown_ _t1677;
    _unknown_ _t1746;
    _unknown_ _t1767;
    _unknown_ _t1780;
    _unknown_ _t1807;
    struct _IO_FILE* _t1814;
    _unknown_ _t1817;
    _unknown_ _t1884;
    struct _IO_FILE* _t1953;
    _unknown_ _t1954;
    struct _IO_FILE* _t1963;
    _unknown_ _t1965;
    signed int _t2047;
    signed int _t2048;
    _unknown_ _t2089;
    _unknown_ _t2090;
    _unknown_ _t2101;
    _unknown_ _t2102;
    _unknown_ _t2104;
    _unknown_ _t2139;
    _unknown_ _t2169;
    _unknown_ _t2209;
    _unknown_ _t2214;
    _unknown_ _t2253;

    _v40.line_num = text->style;
    if(( *(text + 2176) & 255 & 4294967295) == 0) {
        _v272 =  *((intOrPtr*)(text->style + 40));
    } else {
        _v272 =  *((intOrPtr*)(text->style + 36));
    }
    _v40.sgml_offset = _v272;
    _v44 = text->Lines;
    _v48 = 0;
    _v52 = 0;
    _v56 = 0;
    _v72 = underline_on & 255 & 4294967295;
    _v76 = bold_on & 255 & 4294967295;
    _v88 = 0;
    _v92 = text->last_line;
    if(text + 8 != _v92) {
        _v96 = text + 8;
    } else {
        _v96 = text + 1056;
    }
    if(_v96 == 0) {
        return ;
    }
    memset(_v96, 0, 20);
    ctrl_chars_on_this_line = 0;
    utfxtra_on_this_line = 0;
    text->LastChar = 32;
    _v84 =  &(_v92[4]);
    if(( *_v84 & 255 & 4294967295) == 5 || ( *_v84 & 255 & 4294967295) == 3) {
        _v268 = _v84[1] & 255 & 4294967295;
        if(_v268 == 5) {
L14:
            if((_v84[2] & 255 & 4294967295) == 8) {
                _v84[2] = _v84[1] & 255 & 4294967295;
                _v84[1] =  *_v84 & 255 & 4294967295;
                 *_v84 = 8;
            }
            goto L16;
        }
    } else {
L16:
        if((_v92[2] & 65535 & 4294967295 & ) < split) {
            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                _t1963 = TraceFP();
                _v320 = _v92[2] & 65535 & 4294967295 & ;
                _v324 = split;
                fprintf(_t1963, "*** split_line: split==%u greater than last_line->size==%d !\n");
            }
            if(split > 1024) {
                split = _v92[2] & 65535 & 4294967295 & ;
                _v84 = strrchr( &(_v92[4]), 32);
                if(_v84 != 0) {
                    if(_v84 -  &(_v92[4]) > 1) {
                        split = _v84 -  &(_v92[4]);
                    }
                }
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t1953 = TraceFP();
                    _v324 = split;
                    fprintf(_t1953, "                split adjusted to %u.\n");
                }
            }
        }
        text->Lines =  &(text->Lines->next);
         *( *_v92 + 4) = _v96;
        _v96->prev = _v92;
         *_v96 =  *_v92;
         *_v92 = _v96;
        text->last_line = _v96;
        _v96->size = 0;
        _v96->offset = 0;
        text->permissible_split = 0;
         *(_v96 + 18) = 0;
        _v40.line_pos = _v40.line_num->alignment & 65535 & 4294967295;
        if(split != 0) {
            if((dump_output_immediately & 255 & 4294967295) == 0 || (use_underscore & 255 & 4294967295) == 0) {
                _v72 = set_style_by_embedded_chars( &(_v92[4]),  &(_v92[4]) + split, 3, 4);
            }
            _v76 = set_style_by_embedded_chars( &(_v92[4]),  &(_v92[4]) + split, 5, 6);
        }
        if((dump_output_immediately & 255 & 4294967295) == 0 || (use_underscore & 255 & 4294967295) == 0) {
            if(_v72 != 0) {
                _t2048 = _v96->size & 65535;
                 *(_v96 + (_t2048 & 4294967295 & ) + 18) = 3;
                _v96->size = _t2048 + 1 & 4294967295;
                 *(_v96 + (_v96->size & 65535 & 4294967295 & ) + 18) = 0;
                ctrl_chars_on_this_line = ctrl_chars_on_this_line + 1;
                _v52 = _v52 + 1;
            }
        }
        if(_v76 != 0) {
            _t2047 = _v96->size & 65535;
             *(_v96 + (_t2047 & 4294967295 & ) + 18) = 5;
            _v96->size = _t2047 + 1 & 4294967295;
             *(_v96 + (_v96->size & 65535 & 4294967295 & ) + 18) = 0;
            ctrl_chars_on_this_line = ctrl_chars_on_this_line + 1;
            _v52 = _v52 + 1;
        }
        if(split == 0) {
            _v80 =  &(_v92[4]) + (_v92[2] & 65535 & 4294967295 & ) - 1;
            while( &(_v92[4]) <= _v80 && (( *_v80 & 255 & 4294967295) == 32 || ( *_v80 & 255 & 4294967295) == 1) && (psrc_view & 255 & 4294967295) == 0) {
                if(ctrl_chars_on_this_line != 0 || _v48 != 0 || text->first_anchor != 0 || (underline_on & 255 & 4294967295) != 0 || (bold_on & 255 & 4294967295) != 0 || _v20 != 1 || ( *(_v24 + 64) & 255 & 4294967295) != 0 || ( *(_v24 + 65) & 255 & 4294967295) != 0 ||  *((intOrPtr*)(_v24 + 68)) != 0 ||  *((intOrPtr*)(_v24 + 72)) != 0) {
                    _v80 = _v80 - 1;
                    continue;
                }
                _v56 =  &(_v92[4]) + (_v92[2] & 65535 & 4294967295 & ) - 1 - _v80;
                _v92[2] = _v92[2] & 65535 & 4294967295;
                _v80[1] = 0;
                if(split != 0) {
                    _v60 = split;
                } else {
                    _v60 = (_v92[2] & 65535 & 4294967295 & ) + _v56;
                }
                _v64 = _v60 + _v48;
                _v68 = _v60 - _v56;
                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                    _t1814 = TraceFP();
                    _v320 = _v60;
                    _v324 = split;
                    fprintf(_t1814, "GridText: split_line(%u [now:%d]) called\n");
                }
                if(_v92[3] !=  &stylechanges_buffers) {
                    _v96->styles =  &stylechanges_buffers;
                } else {
                    _v96->styles = 135971488;
                }
                _v96->numstyles = 0;
                _v116 = _v92[3] +  ~(1 - (_v92[4] & 65535 & 4294967295 & ) << 2);
                _v120 = _v96->styles + 252;
                while(_v92[3] <= _v116 && _v96->styles <= _v120) {
                     *_v120 =  *_v116;
                    if(( *_v120 & 65535 & 4294967295 & ) <= _v64) {
                        if(( *_v120 & 65535 & 4294967295 & ) <= _v68) {
L105:
                            _v124 = _v116;
                            _v128 = _v116;
L131:
                            while(_v92[3] <= _v124 && _v92[3] <= _v128) {
                                goto L106;
                            }
                        }
                        goto L96;
L106:
                        if(( *_v124 & 255 & 3 & 4294967295) != 0) {
                            if(( *_v124 & 255 & 3 & 4294967295) != 1) {
                                goto L128;
                            }
                            goto L111;
                        }
                        _v124 = skip_matched_and_correct_offsets(_v124, _v92[3], _v68);
                        if(_v124 != 0) {
L128:
                            if(( *_v124 & 65535 & 4294967295 & ) > _v68) {
                                 *_v124 = ( *_v124 & 65535 & 3 | 0 + _v68 * 4) & 4294967295;
                            }
                            _v124 = _v124 - 4;
                            goto L131;
                        } else {
                            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                fprintf(TraceFP(), "BUG: styles improperly nested.\n");
                            }
                        }
L133:
                        _v96->numstyles = _v96->styles + 252 - _v120 >> 2 & 4294967295;
                        if((_v96->numstyles & 65535 & 4294967295) == 0 || (_v96->numstyles & 65535 & 4294967295) > 63) {
                            if((_v96->numstyles & 65535 & 4294967295) == 0) {
                                _v96 = ( *(_v96->styles) & 65535 | 252) & 4294967295;
                            }
L141:
                            _v92[4] = (_v128 - _v92[3] >> 2) + 1 & 4294967295;
                            if((_v92[4] & 65535 & 4294967295) == 0) {
                                 *(_v92[3]) = ( *(_v92[3]) & 65535 | 252) & 4294967295;
                            }
                            _v136 = ALLOC_IN_POOL( &(HTMainText->pool), (_v92[2] & 65535 & 4294967295 & ) + 20);
                            if(_v136 == 0) {
                                outofmem("./GridText.c", "split_line_2");
                            }
                            memcpy(_v136, _v92, (_v92[2] & 65535 & 4294967295 & ) + 20);
                            _v136[3] = ALLOC_IN_POOL( &(HTMainText->pool), 0 + (_v92[4] & 65535 & 4294967295 & ) * 4);
                            if(_v136[3] == 0) {
                                outofmem("./GridText.c", "split_line_2");
                            }
                            memcpy(_v136[3], _v92[3], 0 + (_v92[4] & 65535 & 4294967295 & ) * 4);
                            _v92 = _v136;
                             *(_v92[1]) = _v92;
                             *( *_v92 + 4) = _v92;
                             *(_v92 + (_v92[2] & 65535 & 4294967295 & ) + 18) = 0;
                            _v40.number = 0;
                            if((this_line_was_split & 255 & 4294967295) != 0 || _v20 == 3 || _v20 == 2 || text->stbl != 0) {
                                _v84 =  &(_v92[4]);
                                while() {
                                }
                            }
                            _v40.prev = _v92[2] & 65535 & 4294967295 & ;
                            asm("cwde ");
                            _v248 = _v40.line_num->alignment & 65535;
                            if(_v248 == 2) {
                                _v40.prev = _v40.prev + _v40.sgml_offset + _v40.number;
                            } else {
                                if(_v248 != 3) {
                                    _v40.prev = _v40.prev + _v40.sgml_offset;
                                } else {
                                    _v40.prev = _v40.prev + ((_v40.number >> 31) + _v40.number >> 1) + _v40.sgml_offset;
                                }
                            }
                            _v92[2] =  !(_v40.prev >> 31) & _v40.prev & 4294967295;
                            if(text->stbl != 0) {
                                Stbl_finishCellInTable(text->stbl, 0, text->Lines - 1, _v92[2] & 65535 & 4294967295 & , (_v92[2] & 65535 & 4294967295 & ) - _v88);
                            }
                             *(text + 2176) = 0;
                            if(_v60 <= 0) {
L220:
                                if((this_line_was_split & 255 & 4294967295) == 0 || _v28 <= 0 || text->stbl != 0 || justify_max_void_percent <= 0 || justify_max_void_percent > 100) {
L264:
                                    if(wait_for_this_stacked_elt >= 0 || (text->style->alignment & 65535 & 4294967295) != 1 && (text->style->alignment & 65535 & 4294967295) != 0 || HTCJK != 0 || (in_DT & 255 & 4294967295) != 0 || (can_justify_here & 255 & 4294967295) == 0 || (can_justify_this_line & 255 & 4294967295) == 0 || (form_in_htext & 255 & 4294967295) != 0) {
                                        if((have_raw_nbsps & 255 & 4294967295) == 0) {
                                            goto L293;
                                        }
                                    } else {
                                        if((_v96->size & 65535 & 4294967295) != 0 && text->stbl == 0 && (WWW_TraceFlag & 255 & 4294967295) != 0) {
                                            _t1413 = TraceFP();
                                            _v320 = _v96 + 18;
                                            _v324 = _v96->size & 65535 & 4294967295 & ;
                                            fprintf(_t1413, "BUG: justification: shouldn't happen - new line is not empty!\n\t'%.*s'\n");
                                        }
                                        _v212 =  &(_v92[4]);
                                        while(( *_v212 & 255 & 4294967295) != 0) {
                                            if(( *_v212 & 255 & 4294967295) == 1) {
                                                 *_v212 = 32;
                                            }
                                            _v212 =  &(_v212[0]);
                                        }
                                    }
L283:
                                    _v216 = 0;
                                    while((_v92[2] & 65535 & 4294967295 & ) > _v216) {
                                        if(( *(_v92 + _v216 + 18) & 255 & 4294967295) == 1) {
                                             *(_v92 + _v216 + 18) = 32;
                                        }
                                        _v216 = _v216 + 1;
                                    }
                                } else {
                                    _v244 = _v40.number * _v40.number;
                                    if(text->stbl == 0) {
                                        _v240 = LYcols - (LYShowScrollbar & 255 & 4294967295 & );
                                    } else {
                                        if(LYtableCols > 0) {
                                            _v288 = 715827883;
                                            _v236 = (_v288 * LYtableCols * LYcols >> 32 >> 1) - (LYtableCols * LYcols >> 31);
                                        } else {
                                            if(LYwideLines != 0) {
                                                _v232 = 1014;
                                            } else {
                                                _v232 = LYcols;
                                            }
                                            _v236 = _v232;
                                        }
                                        _v240 = _v236 - (LYShowScrollbar & 255 & 4294967295 & );
                                    }
                                    if(_v244 / (_v240 -  *((intOrPtr*)(_v24 + 44)) - _v32 + _v88) > justify_max_void_percent) {
                                        goto L264;
                                    }
                                    _v160 =  &(_v92[4]) + justify_start_position;
                                    _v164 =  &ht_runs;
                                    _v168 = 0;
                                    _v172 = 0;
                                    ht_num_runs = 0;
                                     *((intOrPtr*)(_v164 + 4)) = 0;
                                     *_v164 =  *((intOrPtr*)(_v164 + 4));
                                    while(1) {
                                        _v17 =  *_v160 & 255 & 4294967295;
                                        if(_v17 == 0) {
                                            break;
                                        }
                                        if(_v17 != 32) {
                                             *_v164 =  *_v164 + 1;
                                            if(_v17 <= 2 || _v17 > 8) {
                                                 *((intOrPtr*)(_v164 + 4)) =  *((intOrPtr*)(_v164 + 4)) + 1;
                                                if(_v17 != 1) {
                                                    if(( *(text + 2251) & 255 & 4294967295) != 0 && _v17 < 0) {
                                                        _v188 = utf8_length( *(text + 2251) & 255 & 4294967295, _v160);
                                                         *_v164 =  *_v164 + _v188;
                                                        _v160 =  &(_v160[_v188]);
                                                    }
                                                } else {
                                                     *_v160 = 32;
                                                }
                                            }
                                        } else {
                                            _v168 = _v168 +  *_v164;
                                            _v172 = _v172 +  *((intOrPtr*)(_v164 + 4));
                                            _v164 = _v164 + 8;
                                            ht_num_runs = ht_num_runs + 1;
                                             *((intOrPtr*)(_v164 + 4)) = 0;
                                             *_v164 =  *((intOrPtr*)(_v164 + 4));
                                        }
                                        _v160 =  &(_v160[1]);
                                    }
                                    _v168 = _v168 +  *_v164;
                                    _v172 = _v172 +  *(_v164 + 4);
                                    ht_num_runs = ht_num_runs + 1;
                                    if(ht_num_runs == 1) {
                                        if(justify_start_position == 0) {
L293:
                                            can_justify_this_line = 1;
                                            justify_start_position = 0;
                                            this_line_was_split = 0;
                                            have_raw_nbsps = 0;
                                            return;
                                        }
                                        goto L257;
                                    }
                                    _v192 = malloc(ht_num_runs - 1 << 3);
                                    _v196 =  ~(1 - ht_num_runs << 2) + _v192;
                                    _v200 = 1;
                                    if(_v192 == 0) {
                                        outofmem("./GridText.c", "split_line_3");
                                    }
                                    _v292 = _v40.number;
                                    _v176 = _v292 / (ht_num_runs - 1);
                                    _v288 = ht_num_runs - 1;
                                    _v180 = _v40.number % _v288;
                                     *_v192 =  *135971780 + justify_start_position + 1;
                                     *_v196 =  *_v192 + (_v192 & 4294967295 & ) + _v176;
                                    _v180 = _v180 - 1;
                                    while(ht_num_runs - 1 > _v200) {
                                        _v204 =  *((intOrPtr*)(135971780 + _v200 * 8)) + 1;
                                         *((intOrPtr*)((_v200 << 2) + _v192)) =  *((intOrPtr*)( ~(1 - _v200 << 2) + _v192)) + _v204;
                                         *((intOrPtr*)((_v200 << 2) + _v196)) =  *( ~(1 - _v200 << 2) + _v196) + _v204 + ( *( ~(1 - _v200 << 2) + _v196) & 4294967295 & ) + _v176;
                                        _v180 = _v180 - 1;
                                        _v200 = _v200 + 1;
                                    }
L257:
                                    _v208 =  &(_v92[4]);
                                    while( &(_v92[4]) + justify_start_position > _v208) {
                                        if(( *_v208 & 255 & 4294967295) == 1) {
                                            _v225 = 32;
                                        } else {
                                            _v225 =  *_v208 & 255 & 4294967295;
                                        }
                                         *_v208 = _v225 & 255 & 4294967295;
                                        _v208 =  &(_v208[0]);
                                    }
                                }
                            }
                            _v140 = 0;
                            _v40 = text->last_anchor_before_split;
                            if(_v40 == 0) {
                                _v40 = text->first_anchor;
                            }
                            while(_v40 != 0) {
                                if(_v40->line_num != _v44) {
                                    if(_v40->line_num > _v44) {
                                        goto L220;
                                    }
                                    goto L218;
                                }
                                asm("cwde ");
                                _v144 = _v40->extent & 65535;
                                _v148 = _v40->number;
                                asm("cwde ");
                                _v152 = _v40->line_pos & 65535;
                                _v156 = _v152 + _v144;
                                text->last_anchor_before_split = _v40;
                                if(_v152 >= _v68) {
                                    if(_v152 >= _v60 || _v144 != 0 || _v148 != 0 && (( *(_v40 + 24) & 255 & 4294967295) == 0 || _v140 != 0)) {
                                        _v140 = 1;
                                        _v40->line_num = _v40->line_num + 1;
                                        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                            _t1618 = TraceFP();
                                            _v300 = _v40->extent & 65535 & 4294967295;
                                            _v304 = _v40->line_pos & 65535 & 4294967295;
                                            _v308 = _v40->line_num;
                                            _v312 = _v52;
                                            _v316 = _v48;
                                            _v320 = _v56;
                                            _v324 = _v148;
                                            fprintf(_t1618, "anchor %d: (T,H,S)=(%d,%d,%d); (line,pos,ext):(%d,%d,%d), ");
                                        }
                                        if(_v156 < _v64) {
                                            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                                _t1611 = TraceFP();
                                                _v324 = _v64 - _v156;
                                                fprintf(_t1611, "Move end +%d, ");
                                            }
                                            _v144 = _v144 + _v64 - _v156;
                                        }
                                        if(_v152 < _v64) {
                                            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                                _t1605 = TraceFP();
                                                _v324 = _v64 - _v152;
                                                fprintf(_t1605, "Move start +%d, ");
                                            }
                                            _v144 = _v144 + _v152 - _v64;
                                            _v152 = _v64;
                                        }
                                        _v40->line_pos = _v152 + _v52 & 4294967295;
                                        _v40->extent = _v144 & 4294967295;
                                        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                            _t1598 = TraceFP();
                                            _v316 = _v40->extent & 65535 & 4294967295;
                                            _v320 = _v40->line_pos & 65535 & 4294967295;
                                            _v324 = _v40->line_num;
                                            fprintf(_t1598, "->(%d,%d,%d)\n");
                                        }
                                    } else {
                                        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                            _t1627 = TraceFP();
                                            _v324 = _v148;
                                            fprintf(_t1627, "anchor %d: no relocation, empty-finished");
                                        }
                                        _v40->line_pos = _v68 & 4294967295;
                                    }
                                } else {
                                    if(_v156 > _v68) {
                                        if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                            _t1653 = TraceFP();
                                            _v324 = _v148;
                                            fprintf(_t1653, "anchor %d: no relocation");
                                        }
                                        if(_v156 <= _v64) {
                                            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                                fprintf(TraceFP(), ", cut the end.\n");
                                            }
                                            _v40->extent = _v68 & 4294967295;
                                        } else {
                                            if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                                fprintf(TraceFP(), " of the start.\n");
                                            }
                                            _v40->extent = (_v40->extent & 65535) + _v52 & 4294967295;
                                        }
                                    }
                                }
L218:
                                _v40 =  *_v40;
                            }
                        } else {
                            _v132 = 0;
                            while((_v96->numstyles & 65535 & 4294967295 & ) > _v132) {
                                goto L141;
                            }
                        }
L111:
                        if(( *_v128 & 255 & 3 & 4294967295) != 1 || (_v128[1] & 65535 & 4294967295) != (_v124->direction & 65535 & 4294967295) || ( *_v128 & 65535 & 4294967295 & ) < _v68) {
                            if( &(_v92[3][0x3f]) > _v128) {
                                _v128 =  &(_v128[2]);
                                 *_v128 =  *_v128 & 255 & 252 & 4294967295;
                                _v128[1] = _v124->direction & 65535 & 4294967295;
                                 *_v128 = ( *_v128 & 65535 & 3 | 0 + _v68 * 4) & 4294967295;
                                goto L119;
                            } else {
                                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                    fprintf(TraceFP(), "BUG: style overflow before split_line.\n");
                                }
                            }
                            goto L133;
                        } else {
                            _v128 = _v128 - 4;
                        }
L119:
                        if(_v96->styles + 252 <= _v120 || (_v120[2] & 255 & 3 & 4294967295) != 0 || (_v120[2] & 65535 & 4294967295 & ) > _v52 || (( &(_v120[2]))[1] & 65535 & 4294967295) != (_v124->direction & 65535 & 4294967295)) {
                            if(_v96->styles > _v120) {
                                if((WWW_TraceFlag & 255 & 4294967295) != 0) {
                                    fprintf(TraceFP(), "BUG: style overflow after split_line.\n");
                                }
                                goto L133;
                            } else {
                                 *_v120 =  *_v124;
                                 *_v120 = ( *_v120 & 65535 & 3 | 0 + _v52 * 4) & 4294967295;
                                _v120 = _v120 - 4;
                                goto L128;
                            }
                        } else {
                            _v120 =  &(_v120[2]);
                        }
                        goto L128;
                    } else {
                         *_v120 = ( *_v120 & 65535 & 3 | 0 + (( *_v120 & 65535) + _v52) * 4) & 4294967295;
L102:
                        _v120 = _v120 - 4;
                        _v116 = _v116 - 4;
                        continue;
                    }
L96:
                    if(( *_v120 & 255 & 3 & 4294967295) == 1 || ( *_v120 & 255 & 3 & 4294967295) == 2) {
                        if(( *_v120 & 65535 & 4294967295 & ) < _v60) {
                            _v262 = 0;
                        } else {
                            _v262 = _v52 & 4294967295;
                        }
                         *_v120 = ( *_v120 & 65535 & 3 | (_v262 & 65535) << 2) & 4294967295;
                        goto L102;
                    }
                    goto L105;
                }
            }
        } else {
            _v100 =  &(_v92[4]);
            _v104 = _v96 + 18;
             *(_v100 + (_v92[2] & 65535 & 4294967295 & )) = 0;
            _v92[2] = split & 4294967295;
            _v80 = _v100 