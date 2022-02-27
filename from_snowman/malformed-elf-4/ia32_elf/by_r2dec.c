/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804be34 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, 0x8059f40, 0x8059fb0, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80498f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80494a0 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 46 named invalid11 */
    void (*0x80494a9)(uint32_t) (ebx);
    ebx += 0x18b4b;
    eax = *((ebx - 8));
    if (eax != 0) {
        gmon_start_ ();
    }
    fcn_0804bec0 ();
    fcn_0805a000 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049850 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804bec0 */
#include <stdint.h>
 
int32_t fcn_0804bec0 (void) {
    eax = *(section.invalid20);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (section.invalid20);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x805a000 */
#include <stdint.h>
 
int32_t fcn_0805a000 (void) {
    eax = *(segment.GNU_RELRO);
    if (eax == -1) {
        goto label_0;
    }
    ebx = segment.GNU_RELRO;
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x805a02c */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 26 named invalid14 */
    void (*0x805a035)(uint32_t) (ebx);
    ebx += 0x7fbf;
    fcn_0804be60 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804be60 */
#include <stdint.h>
 
int32_t fcn_0804be60 (void) {
    if (*(0x8062328) != 0) {
        goto label_0;
    }
    eax = imp._Jv_RegisterClasses;
    ebx = 0x8061f04;
    ebx -= section.invalid19;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(0x806232c) = eax;
        uint32_t (*eax*4 + section.invalid19)() ();
        eax = imp._Jv_RegisterClasses;
    } while (eax < ebx);
label_1:
    *(0x8062328) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80494e0 */
#include <stdint.h>
 
void ctype_toupper_loc (void) {
    ctype_toupper_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80494f0 */
#include <stdint.h>
 
void getpwnam (void) {
    getpwnam ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049500 */
#include <stdint.h>
 
void raise (void) {
    raise ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049510 */
#include <stdint.h>
 
void strstr (void) {
    strstr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049520 */
#include <stdint.h>
 
void strcmp (void) {
    strcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049530 */
#include <stdint.h>
 
void mempcpy_chk (void) {
    mempcpy_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049540 */
#include <stdint.h>
 
void getpwuid (void) {
    getpwuid ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049550 */
#include <stdint.h>
 
void fflush (void) {
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049560 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049570 */
#include <stdint.h>
 
void sigprocmask (void) {
    sigprocmask ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049580 */
#include <stdint.h>
 
void dirfd (void) {
    dirfd ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049590 */
#include <stdint.h>
 
void wcwidth (void) {
    wcwidth ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80495a0 */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80495b0 */
#include <stdint.h>
 
void setjmp (void) {
    setjmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80495d0 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80495e0 */
#include <stdint.h>
 
void mbsinit (void) {
    mbsinit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80495f0 */
#include <stdint.h>
 
void strtoull_internal (void) {
    strtoull_internal ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049600 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049610 */
#include <stdint.h>
 
void fseeko64 (void) {
    fseeko64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049620 */
#include <stdint.h>
 
void signal (void) {
    signal ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049630 */
#include <stdint.h>
 
void memcmp (void) {
    memcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049640 */
#include <stdint.h>
 
void gettimeofday (void) {
    gettimeofday ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049650 */
#include <stdint.h>
 
void obstack_newchunk (void) {
    obstack_newchunk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049660 */
#include <stdint.h>
 
void dcgettext (void) {
    dcgettext ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049670 */
#include <stdint.h>
 
void mktime (void) {
    mktime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049680 */
#include <stdint.h>
 
void stpcpy (void) {
    stpcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049690 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80496a0 */
#include <stdint.h>
 
void obstack_begin (void) {
    obstack_begin ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80496b0 */
#include <stdint.h>
 
void sigismember (void) {
    sigismember ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80496c0 */
#include <stdint.h>
 
void fgetfilecon (void) {
    fgetfilecon ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80496d0 */
#include <stdint.h>
 
void fflush_unlocked (void) {
    fflush_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80496e0 */
#include <stdint.h>
 
void iswcntrl (void) {
    iswcntrl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80496f0 */
#include <stdint.h>
 
void textdomain (void) {
    textdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049700 */
#include <stdint.h>
 
void readlink (void) {
    readlink ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049710 */
#include <stdint.h>
 
void fnmatch (void) {
    fnmatch ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049720 */
#include <stdint.h>
 
void iswprint (void) {
    iswprint ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049730 */
#include <stdint.h>
 
void ioctl (void) {
    ioctl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049740 */
#include <stdint.h>
 
void acl_get_tag_type (void) {
    acl_get_tag_type ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049750 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049760 */
#include <stdint.h>
 
void fxstat64 (void) {
    fxstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049770 */
#include <stdint.h>
 
void ctype_get_mb_cur_max (void) {
    ctype_get_mb_cur_max ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049780 */
#include <stdint.h>
 
void strcpy (void) {
    strcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049790 */
#include <stdint.h>
 
void fpending (void) {
    fpending ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80497a0 */
#include <stdint.h>
 
void wcstombs (void) {
    wcstombs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80497b0 */
#include <stdint.h>
 
void mbrtowc (void) {
    mbrtowc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80497c0 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80497d0 */
#include <stdint.h>
 
void error (void) {
    error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80497e0 */
#include <stdint.h>
 
void strcoll (void) {
    strcoll ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80497f0 */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049800 */
#include <stdint.h>
 
void realloc (void) {
    realloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049810 */
#include <stdint.h>
 
void lgetfilecon (void) {
    lgetfilecon ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049830 */
#include <stdint.h>
 
void freading (void) {
    freading ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049840 */
#include <stdint.h>
 
void memcpy_chk (void) {
    memcpy_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049860 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049870 */
#include <stdint.h>
 
void fputs_unlocked (void) {
    fputs_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049880 */
#include <stdint.h>
 
void strftime (void) {
    strftime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049890 */
#include <stdint.h>
 
void getopt_long (void) {
    getopt_long ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80498a0 */
#include <stdint.h>
 
void getfilecon (void) {
    getfilecon ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80498b0 */
#include <stdint.h>
 
void localtime (void) {
    localtime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80498c0 */
#include <stdint.h>
 
void strtoul (void) {
    strtoul ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80498d0 */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80498e0 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049900 */
#include <stdint.h>
 
void sigaddset (void) {
    sigaddset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049910 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049920 */
#include <stdint.h>
 
void errno_location (void) {
    errno_location ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049930 */
#include <stdint.h>
 
void tcgetpgrp (void) {
    tcgetpgrp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049940 */
#include <stdint.h>
 
void strncpy (void) {
    strncpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049950 */
#include <stdint.h>
 
void fileno (void) {
    fileno ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049960 */
#include <stdint.h>
 
void acl_get_entry (void) {
    acl_get_entry ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049970 */
#include <stdint.h>
 
void fwrite_unlocked (void) {
    fwrite_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049980 */
#include <stdint.h>
 
void printf_chk (void) {
    printf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049990 */
#include <stdint.h>
 
void mempcpy (void) {
    mempcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80499a0 */
#include <stdint.h>
 
void wcswidth (void) {
    wcswidth ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80499b0 */
#include <stdint.h>
 
void sigemptyset (void) {
    sigemptyset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80499c0 */
#include <stdint.h>
 
void nl_langinfo (void) {
    nl_langinfo ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80499d0 */
#include <stdint.h>
 
void setlocale (void) {
    setlocale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80499e0 */
#include <stdint.h>
 
void acl_extended_file_nofollow (void) {
    acl_extended_file_nofollow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80499f0 */
#include <stdint.h>
 
void strrchr (void) {
    strrchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a00 */
#include <stdint.h>
 
void overflow (void) {
    overflow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a10 */
#include <stdint.h>
 
void mbstowcs (void) {
    mbstowcs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a20 */
#include <stdint.h>
 
void localeconv (void) {
    localeconv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a30 */
#include <stdint.h>
 
void freecon (void) {
    freecon ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a40 */
#include <stdint.h>
 
void lseek64 (void) {
    lseek64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a50 */
#include <stdint.h>
 
void readdir64 (void) {
    readdir64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a60 */
#include <stdint.h>
 
void fprintf_chk (void) {
    fprintf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a70 */
#include <stdint.h>
 
void clock_gettime (void) {
    clock_gettime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a80 */
#include <stdint.h>
 
void sigaction (void) {
    sigaction ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049a90 */
#include <stdint.h>
 
void bindtextdomain (void) {
    bindtextdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049aa0 */
#include <stdint.h>
 
void strncmp (void) {
    strncmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049ab0 */
#include <stdint.h>
 
void isatty (void) {
    isatty ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049ac0 */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049ad0 */
#include <stdint.h>
 
void xstat64 (void) {
    xstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049ae0 */
#include <stdint.h>
 
void lxstat64 (void) {
    lxstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049af0 */
#include <stdint.h>
 
void getgrnam (void) {
    getgrnam ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b00 */
#include <stdint.h>
 
void closedir (void) {
    closedir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b10 */
#include <stdint.h>
 
void opendir (void) {
    opendir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b20 */
#include <stdint.h>
 
void getgrgid (void) {
    getgrgid ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b30 */
#include <stdint.h>
 
void ctype_tolower_loc (void) {
    ctype_tolower_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b40 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b50 */
#include <stdint.h>
 
void ctype_b_loc (void) {
    ctype_b_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b60 */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b70 */
#include <stdint.h>
 
void sprintf_chk (void) {
    sprintf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80495c0 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049820 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8049b80 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    char * errname;
    char * format;
    char * function;
    uint32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    void ** ptr;
    char * var_44h;
    int32_t var_48h;
    int32_t var_4ch;
    uint32_t var_5ch;
    int32_t var_60h;
    int32_t var_e0h;
    int32_t var_e8h;
    int32_t var_ech;
    int32_t var_140h;
    int32_t var_144h;
    int32_t var_148h;
    char * s1;
    int32_t var_159h;
    int32_t var_15ah;
    uint32_t var_160h;
    char ** var_164h;
    char * var_168h;
    int32_t var_16ch;
    int32_t var_170h;
    int32_t var_3fch;
    /* [13] -r-x section size 66732 named invalid13 */
    eax = *((ebp + 0xc));
    edx = *(gs:0x14);
    *((esp + 0x3fc)) = edx;
    edx = 0;
    *((esp + 0x48)) = eax;
    eax = *(eax);
    fcn_080555d0 (eax);
    setlocale (6, 0x805da85);
    bindtextdomain (0x805a138, 0x805a154);
    textdomain (0x805a138);
    *(0x80622cc) = 2;
    fcn_08059fc0 (0x8051fd0);
    eax = *(0x80622c0);
    *(0x8062348) = 0;
    *(0x806234c) = 1;
    *(0x8062350) = 0;
    *(0x8062354) = 0x80000000;
    *(0x8062358) = 0xffffffff;
    *(0x80624e4) = 0;
    if (eax == 2) {
        goto label_60;
    }
    if (eax != 3) {
        eax--;
        if (eax != 0) {
label_40:
            abort ();
        }
        eax = isatty (1);
        if (eax == 0) {
            goto label_61;
        }
        *(0x8062360) = 2;
        *(0x80624e4) = 1;
    } else {
        *(0x8062360) = 0;
        fcn_08056430 (0, 5);
    }
label_1:
    *(0x80624e8) = 0;
    *(0x806244c) = 0;
    *(0x80624ec) = 0;
    *(0x80624ed) = 0;
    *(0x8062451) = 0;
    *(0x8062408) = 0;
    *(0x80624ee) = 0;
    *(0x8062400) = 1;
    *(0x806240c) = 0;
    *(0x8062404) = 0;
    *(0x80624f0) = 0;
    *(0x80624f4) = 0;
    *(0x80624f8) = 0;
    *(0x8062450) = 0;
    eax = getenv (0x805a166);
    ebx = eax;
    if (eax != 0) {
        eax = fcn_08051c00 (4, 0x805d800, 0x805d7e0);
        if (eax < 0) {
            goto label_62;
        }
        eax = *((eax*4 + 0x805d7e0));
        fcn_08056430 (0, eax);
    }
label_31:
    eax = getenv (0x805a174);
    ebx = eax;
    fcn_08054660 (eax, 0x80624fc, 0x8062500);
    if (ebx == 0) {
        goto label_63;
    }
label_42:
    eax = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    *(0x80622a0) = eax;
    *(0x80622a4) = edx;
label_43:
    *(0x8062508) = 0x50;
    eax = getenv (0x805a182);
    ebx = eax;
    if (eax != 0) {
        if (*(eax) != 0) {
            goto label_64;
        }
    }
label_5:
    edi = esp + 0x158;
    *((esp + 8)) = edi;
    eax = ioctl (1, 0x5413);
    if (eax != -1) {
        eax = *((esp + 0x15a));
        if (ax == 0) {
            goto label_65;
        }
        eax = (int32_t) ax;
        *(0x8062508) = eax;
    }
label_65:
    eax = getenv (0x805a18a);
    *(0x806250c) = 8;
    ebx = eax;
    if (eax != 0) {
        eax = esp + 0x160;
        eax = fcn_08058c50 (0, 0, 0);
        if (eax != 0) {
            goto label_66;
        }
        eax = *((esp + 0x160));
        *(0x806250c) = eax;
    }
label_30:
    edi = 0;
    *((esp + 0x44)) = 0;
    ebx = esp + 0x164;
    esi = esp + 0x160;
    do {
label_0:
        eax = *((esp + 0x48));
        edx = *((ebp + 8));
        *((esp + 0x164)) = 0xffffffff;
        *((esp + 0x10)) = ebx;
        *((esp + 0xc)) = 0x805ad40;
        *((esp + 8)) = 0x805d140;
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = getopt_long ();
        if (eax == -1) {
            goto label_67;
        }
        eax += 0x83;
        if (eax > 0x112) {
            fcn_080513a0 (2);
        }
        /* switch table (275 cases) at 0x805a874 */
        *(0x80624ed) = 1;
        *(0x8062360) = 0;
    } while (1);
    *(0x80624fc) = 0;
    *(0x8062500) = 0x400;
    *(0x8062504) = 0;
    *(0x80622a0) = 0x400;
    *(0x80622a4) = 0;
    goto label_0;
    *(0x80624ee) = 1;
    goto label_0;
    *(0x80624fc) = 0xb0;
    *(0x8062500) = 1;
    *(0x8062504) = 0;
    *(0x80622a0) = 1;
    *(0x80622a4) = 0;
    goto label_0;
    *(0x8062360) = 0;
    *(0x80622a8) = 0;
    goto label_0;
    *(0x80624f0) = 2;
    *(0x806244c) = 0xffffffff;
    if (*(0x8062360) == 0) {
        goto label_68;
    }
label_14:
    *(0x8062451) = 0;
    edi = 1;
    *(0x806235c) = 0;
    goto label_0;
    *(0x8062404) = 1;
    goto label_0;
    *(0x80624e8) = 1;
    goto label_0;
    fcn_08056430 (0, 5);
    goto label_0;
    *(0x80624f0) = 2;
    goto label_0;
    *(0x8062450) = 1;
    goto label_0;
    *(0x806244c) = 1;
    edi = 1;
    goto label_0;
    *(0x806244c) = 0xffffffff;
    edi = 1;
    goto label_0;
    eax = optarg;
    eax = fcn_08058c50 (0, 0, 0);
    if (eax != 0) {
        goto label_69;
    }
label_13:
    eax = *((esp + 0x160));
    *(0x806250c) = eax;
    goto label_0;
    *(0x806244c) = 2;
    edi = 1;
    goto label_0;
    *(0x806240c) = 1;
    goto label_0;
    fcn_08056430 (0, 3);
    goto label_0;
    fcn_08056430 (0, 0);
    goto label_0;
    *(0x8062400) = 5;
    goto label_0;
    eax = optarg;
    fcn_0804c280 ();
    goto label_0;
    *(0x8062400) = 3;
    goto label_0;
    *(0x80622a9) = 0;
    goto label_0;
    *(0x8062408) = 3;
    goto label_0;
    *(0x8062455) = 1;
    goto label_0;
    *(0x8062360) = 2;
    goto label_0;
    eax = 0x805a1aa;
    fcn_0804c280 ();
    eax = 0x805a1a9;
    fcn_0804c280 ();
    goto label_0;
    if (*(0x80624f0) != 0) {
        goto label_0;
    }
    *(0x80624f0) = 1;
    goto label_0;
    if (*(0x8062360) == 0) {
        goto label_0;
    }
    *(0x8062360) = 1;
    goto label_0;
    fcn_080513a0 (0);
    edx = *(0x80622c0);
    eax = 0x805a13f;
    ecx = *(0x80622c4);
    if (edx != 1) {
        eax = 0x805a150;
        edx = 0x805a14f;
        if (edx == 2) {
            eax = edx;
            goto label_70;
        }
    }
label_70:
    *((esp + 4)) = eax;
    eax = stdout;
    *((esp + 0x18)) = 0;
    fcn_08058980 (0x805a203, 0x805a134);
    exit (0);
    eax = optarg;
    *((esp + 0x44)) = eax;
    goto label_0;
    eax = *(0x80622c8);
    edi = 1;
    eax = optarg;
    fcn_08051ee0 (4, eax, 0x805afe0);
    eax = *((eax*4 + 0x805aff8));
    *(0x806244c) = eax;
    goto label_0;
    *(0x80624fc) = 0x90;
    *(0x8062500) = 1;
    *(0x8062504) = 0;
    *(0x80622a0) = 1;
    *(0x80622a4) = 0;
    goto label_0;
    eax = *(0x80622c8);
    eax = optarg;
    fcn_08051ee0 (4, eax, 0x805b00c);
    eax = *((eax*4 + 0x805b024));
    *(0x80624e8) = eax;
    goto label_0;
    *(0x80624e4) = 0;
    goto label_0;
    eax = *(0x80622c8);
    eax = optarg;
    fcn_08051ee0 (4, eax, 0x805d800);
    eax = *((eax*4 + 0x805d7e0));
    fcn_08056430 (0, eax);
    goto label_0;
    eax = *(0x80622c8);
    eax = optarg;
    fcn_08051ee0 (4, eax, 0x805b0e4);
    eax = *((eax*4 + 0x805b0f8));
    *(0x8062408) = eax;
    goto label_0;
    fcn_08058a70 (8);
    edx = optarg;
    *(eax) = edx;
    edx = imp._Jv_RegisterClasses;
    *(0x80624f8) = eax;
    *((eax + 4)) = edx;
    goto label_0;
    *(0x8062453) = 1;
    goto label_0;
    *(0x8062360) = 0;
    *((esp + 0x44)) = 0x805a146;
    goto label_0;
    eax = *(0x80622c8);
    eax = optarg;
    fcn_08051ee0 (4, eax, 0x805b040);
    eax = *((eax*4 + 0x805b060));
    *(0x8062360) = eax;
    goto label_0;
    *(0x8062408) = 2;
    goto label_0;
    *(0x8062400) = 4;
    goto label_0;
    eax = optarg;
    if (eax == 0) {
        goto label_71;
    }
    edx = *(0x80622c8);
    fcn_08051ee0 (4, eax, 0x805b080);
    eax = *((eax*4 + 0x805b0c0));
    if (eax == 1) {
        goto label_71;
    }
    if (eax == 2) {
        goto label_72;
    }
label_46:
    *(0x806235c) = 0;
    goto label_0;
    eax = optarg;
    eax = fcn_08054660 (eax, 0x80624fc, 0x8062500);
    if (eax != 0) {
        goto label_73;
    }
    eax = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    *(0x80622a0) = eax;
    *(0x80622a4) = edx;
    goto label_0;
    *(0x8062510) = 1;
    goto label_0;
    *(0x8062360) = 3;
    goto label_0;
    eax = optarg;
    eax = fcn_08058c50 (0, 0, 0);
    if (eax == 0) {
        if (*((esp + 0x160)) != 0) {
            goto label_74;
        }
    }
    eax = optarg;
    eax = fcn_08056780 (eax);
    *((esp + 8)) = 5;
    *((esp + 4)) = 0x805a192;
    eax = dcgettext (0);
    edx = *((esp + 0x20));
    *((esp + 4)) = 0;
    error (2, eax);
label_74:
    eax = *((esp + 0x160));
    *(0x8062508) = eax;
    goto label_0;
    *(0x806244c) = 3;
    edi = 1;
    goto label_0;
    *(0x80624e8) = 2;
    goto label_0;
    *(0x806244c) = 4;
    edi = 1;
    goto label_0;
    *(0x8062451) = 1;
    goto label_0;
    *(0x80624ec) = 1;
    goto label_0;
    *(0x80624e4) = 1;
    goto label_0;
    *(0x8062408) = 1;
    goto label_0;
    *(0x8062360) = 0;
    *(0x80622a9) = 0;
    goto label_0;
    *(0x8062360) = 4;
    goto label_0;
label_60:
    *(0x8062360) = 2;
    fcn_08056430 (0, 5);
    goto label_1;
label_67:
    edx = imp._Jv_RegisterClasses;
    eax = 1;
    if (edx > 2) {
        goto label_75;
    }
label_6:
    *(0x8062514) = eax;
    *(esp) = 0;
    eax = fcn_080563c0 ();
    *(0x80624e0) = eax;
    eax = fcn_08056410 (eax);
    if (eax == 5) {
        goto label_76;
    }
label_41:
    eax = imp._Jv_RegisterClasses;
    if (eax <= 1) {
        goto label_77;
    }
    esi = eax + 0x805a225;
    eax -= 2;
    eax = *((eax + 0x805a227));
    if (al == 0) {
        goto label_77;
    }
    do {
        eax = (int32_t) al;
        esi++;
        eax = imp._Jv_RegisterClasses;
        fcn_08056450 (eax, eax, 1);
        eax = *(esi);
    } while (al != 0);
label_77:
    *(esp) = 0;
    eax = fcn_080563c0 ();
    *(0x8062518) = eax;
    fcn_08056450 (eax, 0x3a, 1);
    if (*(0x8062455) != 0) {
        if (*(0x8062360) == 0) {
            goto label_78;
        }
        *(0x8062455) = 0;
    }
label_78:
    eax = imp._Jv_RegisterClasses;
    eax--;
    if (eax <= 1) {
        goto label_79;
    }
label_9:
    if (*(0x8062360) == 0) {
        goto label_10;
    }
label_7:
    esi = optind;
    *((esp + 0x44)) = esi;
    if (*(0x806235c) != 0) {
        goto label_80;
    }
label_12:
    if (*(0x8062400) == 1) {
        goto label_81;
    }
label_15:
    if (*(0x806240c) != 0) {
        goto label_82;
    }
label_11:
    eax = imp._Jv_RegisterClasses;
    if (eax != 2) {
        if (eax != 4) {
            goto label_83;
        }
    }
label_32:
    *(0x8062452) = 1;
label_34:
    eax = 0;
label_33:
    *(0x8062454) = al;
    if (*(0x8062455) != 0) {
        goto label_84;
    }
label_39:
    *(0x80624cc) = 0x64;
    eax = fcn_08058a70 (0x3200);
    *(0x80624d4) = 0;
    *(0x80624d0) = eax;
    fcn_0804c320 ();
    ebx = *((ebp + 8));
    ebx -= *((esp + 0x44));
    if (ebx <= 0) {
        goto label_85;
    }
    edi = ebx;
    esi = *((esp + 0x48));
    ebx = *((esp + 0x44));
    do {
        eax = *((esi + ebx*4));
        edx = 0;
        ecx = 1;
        ebx++;
        fcn_0804eb40 (0x805da85);
    } while (*((ebp + 8)) > ebx);
    ebx = edi;
label_44:
    if (*(0x80624d4) != 0) {
        goto label_86;
    }
label_45:
    edi = imp._Jv_RegisterClasses;
    ebx--;
    *((esp + 0x40)) = edi;
    if (ebx <= 0) {
        goto label_87;
    }
label_24:
    eax = *((esp + 0x40));
    if (eax == 0) {
        goto label_88;
    }
label_16:
    edx = *((esp + 0x40));
    ecx = imp._Jv_RegisterClasses;
    eax = *((edx + 0xc));
    *(0x8062350) = eax;
    if (ecx != 0) {
        eax = *(edx);
        if (eax == 0) {
            goto label_89;
        }
    }
    edx = *((esp + 0x40));
    eax = *((esp + 0x40));
    esi = *(edx);
    eax = *((eax + 8));
    edi = *((edx + 4));
    *((esp + 0x44)) = esi;
    *((esp + 0x34)) = eax;
    errno_location ();
    *(eax) = 0;
    *((esp + 0x4c)) = eax;
    *(esp) = esi;
    eax = opendir ();
    *((esp + 0x48)) = eax;
    if (eax == 0) {
        goto label_90;
    }
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        eax = *((esp + 0x48));
        *(esp) = eax;
        eax = dirfd ();
        if (eax < 0) {
            goto label_91;
        }
        edx = esp + 0xe8;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        *(esp) = 3;
        eax = fxstat64 ();
        eax >>= 0x1f;
label_23:
        if (al != 0) {
            goto label_92;
        }
        eax = *((esp + 0x140));
        edx = *((esp + 0x144));
        *(esp) = 0x10;
        *((esp + 0x38)) = eax;
        eax = *((esp + 0xe8));
        *((esp + 0x3c)) = edx;
        edx = *((esp + 0xec));
        *((esp + 0x28)) = eax;
        eax = fcn_08058a70 (edx);
        edx = *((esp + 0x3c));
        ebx = eax;
        eax = *((esp + 0x38));
        *((ebx + 4)) = edx;
        edx = *((esp + 0x2c));
        *(ebx) = eax;
        eax = *((esp + 0x28));
        *((ebx + 0xc)) = edx;
        *((ebx + 8)) = eax;
        eax = imp._Jv_RegisterClasses;
        eax = fcn_080536d0 (eax, ebx);
        if (eax == 0) {
            goto label_93;
        }
        if (ebx != eax) {
            goto label_94;
        }
        esi = imp._Jv_RegisterClasses;
        eax = imp._Jv_RegisterClasses;
        eax -= esi;
        if (eax <= 0xf) {
            goto label_95;
        }
label_27:
        eax = esi + 0x10;
        edx = *((esp + 0xec));
        *(0x806242c) = eax;
        eax = *((esp + 0xe8));
        *((esi + 0xc)) = edx;
        edx = *((esp + 0x144));
        *((esi + 8)) = eax;
        eax = *((esp + 0x140));
        *((esi + 4)) = edx;
        *(esi) = eax;
    }
    if (*(0x806240c) == 0) {
        if (*(0x806234c) == 0) {
            goto label_96;
        }
    }
    if (*(0x80622bc) == 0) {
        edx = stdout;
        eax = *((edx + 0x14));
        if (eax >= *((edx + 0x18))) {
            goto label_97;
        }
        *(eax) = 0xa;
        eax++;
        *((edx + 0x14)) = eax;
label_47:
        *(0x80624d8)++;
    }
    *(0x80622bc) = 0;
    if (*(0x8062455) != 0) {
        goto label_98;
    }
label_26:
    ecx = imp._Jv_RegisterClasses;
    if (edi == 0) {
        edi = *((esp + 0x44));
    }
    eax = stdout;
    edx = edi;
    eax = fcn_0804cbf0 (0);
    *(0x80624d8) += eax;
    if (*(0x8062455) != 0) {
        eax = imp._Jv_RegisterClasses;
        edx = eax + 4;
        if (*(0x80624b0) < edx) {
            goto label_99;
        }
label_28:
        edx = imp._Jv_RegisterClasses;
        *(eax) = edx;
        *(0x80624ac) += 4;
    }
    eax = stdout;
    *((esp + 8)) = 2;
    *((esp + 4)) = 1;
    *(esp) = 0x805a2d4;
    *((esp + 0xc)) = eax;
    fwrite_unlocked ();
    *(0x80624d8) += 2;
label_96:
    fcn_0804c320 ();
    *((esp + 0x38)) = 0;
    *((esp + 0x3c)) = 0;
    do {
label_3:
        eax = *((esp + 0x4c));
        *(eax) = 0;
        eax = *((esp + 0x48));
        *(esp) = eax;
        eax = readdir64 ();
        edi = eax;
        if (eax == 0) {
            goto label_100;
        }
        ebx = eax + 0x13;
        eax = imp._Jv_RegisterClasses;
        if (eax == 2) {
            goto label_18;
        }
        if (*((edi + 0x13)) == 0x2e) {
            goto label_101;
        }
        if (eax != 0) {
            goto label_18;
        }
        esi = imp._Jv_RegisterClasses;
        if (esi == 0) {
            goto label_18;
        }
label_2:
        *((esp + 8)) = 4;
        *((esp + 4)) = ebx;
        eax = *(esi);
        *(esp) = eax;
        eax = fnmatch ();
    } while (eax == 0);
    esi = *((esi + 4));
    if (esi != 0) {
        goto label_2;
    }
label_18:
    esi = imp._Jv_RegisterClasses;
    if (esi == 0) {
        goto label_102;
    }
label_4:
    *((esp + 8)) = 4;
    *((esp + 4)) = ebx;
    eax = *(esi);
    *(esp) = eax;
    eax = fnmatch ();
    if (eax == 0) {
        goto label_3;
    }
    esi = *((esi + 4));
    if (esi != 0) {
        goto label_4;
    }
label_102:
    eax = *((edi + 0x12));
    edx = 0;
    eax--;
    if (al <= 0xd) {
        eax = (int32_t) al;
        edx = *((eax*4 + 0x805b2e0));
    }
    esi = *((esp + 0x44));
    ecx = 0;
    eax = ebx;
    eax = fcn_0804eb40 (esi);
    if (*(0x8062360) != 1) {
        goto label_3;
    }
    if (*(0x806244c) != -1) {
        goto label_3;
    }
    if (*(0x8062451) != 0) {
        goto label_3;
    }
    if (*(0x806240c) != 0) {
        goto label_3;
    }
    fcn_0804c3f0 ();
    fcn_0804fa80 ();
    fcn_0804c320 ();
    goto label_3;
label_64:
    eax = esp + 0x160;
    eax = fcn_08058c50 (0, 0, 0);
    if (eax != 0) {
        goto label_103;
    }
    eax = *((esp + 0x160));
    if (eax == 0) {
        goto label_103;
    }
    *(0x8062508) = eax;
    goto label_5;
label_61:
    *(0x8062360) = 1;
    goto label_1;
label_75:
    eax = edx;
    ecx = 3;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    goto label_6;
label_10:
    if (*((esp + 0x44)) != 0) {
        goto label_48;
    }
    goto label_104;
label_8:
    al = fcn_08052890 (2);
    if (al == 0) {
        goto label_7;
    }
label_48:
    esi = *((esp + 0x44));
    edi = 0x805b108;
    ecx = 6;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (al == 0) {
        goto label_8;
    }
    esi = *((esp + 0x44));
    if (*(esi) == 0x2b) {
        goto label_105;
    }
    eax = *(0x80622c8);
    esi = *((esp + 0x44));
    fcn_08051ee0 (4, esi, 0x805b110);
    eax = *((eax*4 + 0x805b124));
    if (eax == 1) {
        goto label_106;
    }
    if (eax >= 1) {
        goto label_107;
    }
    *(0x80622b0) = 0x805a260;
    *(0x80622ac) = 0x805a260;
label_36:
    eax = *(0x80622b0);
    eax = strstr (eax, 0x805a09e);
    if (eax != 0) {
        goto label_108;
    }
    goto label_7;
label_79:
    edx = edi;
    if (dl != 0) {
        goto label_9;
    }
    if (*(0x8062360) == 0) {
        goto label_10;
    }
    *(0x806244c) = 4;
    goto label_9;
label_103:
    eax = fcn_08056780 (ebx);
    *((esp + 8)) = 5;
    ebx = eax;
    eax = dcgettext (0, 0x805d0c4);
    *((esp + 0xc)) = ebx;
    error (0, 0, eax);
    goto label_5;
label_82:
    eax = fcn_08053140 (0x804c000, 0, 0x804bef0);
    *(0x8062410) = eax;
    if (eax == 0) {
        goto label_93;
    }
    *((esp + 0x10)) = sym.imp.free;
    *((esp + 0xc)) = 0x8049820;
    *((esp + 8)) = 0;
    *((esp + 4)) = 0;
    *(esp) = 0x8062420;
    obstack_begin ();
    goto label_11;
label_80:
    eax = getenv (0x805a291);
    *((esp + 0x168)) = eax;
    if (eax != 0) {
        if (*(eax) != 0) {
            goto label_109;
        }
    }
label_53:
    if (*(0x806235c) == 0) {
        goto label_12;
    }
    eax = 0xd;
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_110;
    }
    eax = 0xe;
    al = fcn_0804bf90 ();
    if (al != 0) {
        if (*(0x806235d) != 0) {
            goto label_110;
        }
    }
    eax = 0xc;
    al = fcn_0804bf90 ();
    if (al != 0) {
        if (*(0x8062360) == 0) {
            goto label_110;
        }
    }
label_35:
    *(esp) = 1;
    eax = tcgetpgrp ();
    if (eax < 0) {
        goto label_12;
    }
    *(esp) = 0x8062380;
    ebx = 0;
    sigemptyset ();
    do {
        esi = *((ebx*4 + 0x805ace0));
        edx = esp + 0x5c;
        sigaction (esi, 0, edx);
        if (*((esp + 0x5c)) != 1) {
            *((esp + 4)) = esi;
            *(esp) = 0x8062380;
            sigaddset ();
        }
        ebx++;
    } while (ebx != 0xc);
    eax = esp + 0x60;
    edx = 0x8062380;
    ecx = 0x20;
    edi = eax;
    esi = edx;
    bl = 0;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    edi = 0x804bf70;
    *((esp + 0xe0)) = 0x10000000;
    do {
        esi = *((ebx*4 + 0x805ace0));
        *(esp) = 0x8062380;
        *((esp + 4)) = esi;
        eax = sigismember ();
        if (eax != 0) {
            eax = 0x804cf70;
            if (esi != 0x14) {
                eax = edi;
            }
            *((esp + 0x5c)) = eax;
            eax = esp + 0x5c;
            sigaction (esi, eax, 0);
        }
        ebx++;
    } while (ebx != 0xc);
    goto label_12;
label_69:
    eax = optarg;
    eax = fcn_08056780 (eax);
    *((esp + 8)) = 5;
    *((esp + 4)) = 0x805a1ad;
    eax = dcgettext (0);
    edx = *((esp + 0x20));
    *((esp + 4)) = 0;
    error (2, eax);
    goto label_13;
label_68:
    eax = isatty (1);
    eax -= eax;
    eax += 2;
    *(0x8062360) = eax;
    goto label_14;
label_81:
    eax = 2;
    if (*(0x8062404) == 0) {
        if (*(0x8062408) == 3) {
            goto label_111;
        }
        eax -= eax;
        eax &= 0xfffffffe;
        eax += 4;
    }
label_111:
    *(0x8062400) = eax;
    goto label_15;
label_100:
    eax = *((esp + 0x4c));
    eax = *(eax);
    if (eax == 0) {
        goto label_112;
    }
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805a2d7);
    ecx = *((esp + 0x44));
    edx = eax;
    eax = *((esp + 0x34));
    fcn_0804d570 ();
    eax = *((esp + 0x4c));
    if (*(eax) == 0x4b) {
        goto label_3;
    }
label_112:
    eax = *((esp + 0x48));
    *(esp) = eax;
    eax = closedir ();
    if (eax != 0) {
        goto label_113;
    }
label_22:
    fcn_0804c3f0 ();
    if (*(0x806240c) != 0) {
        goto label_114;
    }
label_21:
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        if (*(0x8062451) == 0) {
            goto label_115;
        }
    }
    if (*(0x8062455) != 0) {
        goto label_116;
    }
label_25:
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805a301);
    ebx = eax;
    eax = stdout;
    *(esp) = ebx;
    *((esp + 4)) = eax;
    fputs_unlocked ();
    eax = strlen (ebx);
    edx = stdout;
    *(0x80624d8) += eax;
    eax = *((edx + 0x14));
    if (eax >= *((edx + 0x18))) {
        goto label_117;
    }
    *(eax) = 0x20;
    eax++;
    *((edx + 0x14)) = eax;
label_59:
    eax = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    esi = *((esp + 0x38));
    edi = *((esp + 0x3c));
    eax = imp._Jv_RegisterClasses;
    edx = esp + 0x170;
    *(0x80624d8)++;
    eax = fcn_08053850 (eax, edi, edx);
    ebx = eax;
    eax = stdout;
    *(esp) = ebx;
    *((esp + 4)) = eax;
    fputs_unlocked ();
    eax = strlen (ebx);
    *(0x80624d8) += eax;
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_118;
    }
    *(edx) = 0xa;
    edx++;
    *((eax + 0x14)) = edx;
label_58:
    *(0x80624d8)++;
label_115:
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
    }
label_20:
    edi = *((esp + 0x40));
    eax = *(edi);
    free (eax);
    eax = *((edi + 4));
    free (eax);
    free (edi);
    eax = imp._Jv_RegisterClasses;
    *(0x806234c) = 1;
    *((esp + 0x40)) = eax;
    eax = *((esp + 0x40));
    if (eax != 0) {
        goto label_16;
    }
label_88:
    if (*(0x806235c) == 0) {
        goto label_119;
    }
    if (*(0x80624dc) != 0) {
        if (*(0x80621e0) == 2) {
            goto label_120;
        }
label_56:
        fcn_0804d9d0 ();
    }
label_57:
    eax = stdout;
    ebx = 0;
    *(esp) = eax;
    fflush_unlocked ();
    while (eax == 0) {
label_17:
        ebx++;
        if (ebx == 0xc) {
            goto label_121;
        }
        esi = *((ebx*4 + 0x805ace0));
        *(esp) = 0x8062380;
        *((esp + 4)) = esi;
        eax = sigismember ();
    }
    *((esp + 4)) = 0;
    eax = signal (esi);
    goto label_17;
label_101:
    if (eax == 0) {
        goto label_3;
    }
    eax = *((edi + 0x14));
    if (al == 0x2e) {
        goto label_122;
    }
label_19:
    if (al != 0) {
        goto label_18;
    }
    goto label_3;
label_122:
    eax = *((edi + 0x15));
    goto label_19;
label_92:
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805d254);
    ecx = *((esp + 0x44));
    edx = eax;
    eax = *((esp + 0x34));
    fcn_0804d570 ();
    eax = *((esp + 0x48));
    *(esp) = eax;
    closedir ();
    goto label_20;
label_114:
    edx = *((esp + 0x34));
    eax = *((esp + 0x44));
    fcn_0804c810 ();
    goto label_21;
label_113:
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805a2ec);
    ecx = *((esp + 0x44));
    edx = eax;
    eax = *((esp + 0x34));
    fcn_0804d570 ();
    goto label_22;
label_91:
    eax = *((esp + 0x44));
    esi = esp + 0xe8;
    *((esp + 8)) = esi;
    *(esp) = 3;
    *((esp + 4)) = eax;
    eax = xstat64 ();
    eax >>= 0x1f;
    goto label_23;
label_89:
    esi = imp._Jv_RegisterClasses;
    eax = imp._Jv_RegisterClasses;
    eax -= *(0x8062428);
    if (eax <= 0xf) {
        goto label_123;
    }
    eax = imp._Jv_RegisterClasses;
    eax -= esi;
    if (eax < 0xfffffff0) {
        goto label_124;
    }
label_29:
    esi -= 0x10;
    ecx = 4;
    *(0x806242c) = esi;
    edi = esp + 0x148;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    eax = esp + 0x148;
    eax = imp._Jv_RegisterClasses;
    eax = fcn_08053710 (eax, eax);
    if (eax == 0) {
        goto label_125;
    }
    free (eax);
    esi = *((esp + 0x40));
    eax = *(esi);
    free (eax);
    eax = *((esi + 4));
    free (eax);
    free (esi);
    edi = imp._Jv_RegisterClasses;
    *((esp + 0x40)) = edi;
    goto label_24;
label_116:
    eax = stdout;
    *((esp + 8)) = 2;
    *((esp + 4)) = 1;
    *(esp) = 0x805a0a9;
    *((esp + 0xc)) = eax;
    fwrite_unlocked ();
    *(0x80624d8) += 2;
    goto label_25;
label_98:
    eax = stdout;
    *((esp + 8)) = 2;
    *((esp + 4)) = 1;
    *(esp) = 0x805a0a9;
    *((esp + 0xc)) = eax;
    fwrite_unlocked ();
    *(0x80624d8) += 2;
    if (*(0x8062455) == 0) {
        goto label_26;
    }
    eax = imp._Jv_RegisterClasses;
    edx = eax + 4;
    while (1) {
        edx = imp._Jv_RegisterClasses;
        *(eax) = edx;
        *(0x80624ac) += 4;
        goto label_26;
label_94:
        free (ebx);
        edx = *((esp + 0x44));
        eax = fcn_08056980 (edx);
        *((esp + 8)) = 5;
        ebx = eax;
        eax = dcgettext (0, 0x805d27c);
        *((esp + 0xc)) = ebx;
        error (0, 0, eax);
        eax = *((esp + 0x48));
        *(esp) = eax;
        closedir ();
        *(0x8062348) = 2;
        goto label_20;
label_95:
        *((esp + 4)) = 0x10;
        *(esp) = 0x8062420;
        obstack_newchunk ();
        esi = imp._Jv_RegisterClasses;
        goto label_27;
        *((esp + 4)) = 4;
        *(esp) = 0x80624a0;
        obstack_newchunk ();
        eax = imp._Jv_RegisterClasses;
    }
label_99:
    *((esp + 4)) = 4;
    *(esp) = 0x80624a0;
    obstack_newchunk ();
    eax = imp._Jv_RegisterClasses;
    goto label_28;
label_124:
    *((esp + 4)) = 0xfffffff0;
    *(esp) = 0x8062420;
    obstack_newchunk ();
    esi = imp._Jv_RegisterClasses;
    goto label_29;
label_66:
    eax = fcn_08056780 (ebx);
    *((esp + 8)) = 5;
    ebx = eax;
    eax = dcgettext (0, 0x805d100);
    *((esp + 0xc)) = ebx;
    error (0, 0, eax);
    goto label_30;
label_62:
    eax = fcn_08056780 (ebx);
    *((esp + 8)) = 5;
    ebx = eax;
    eax = dcgettext (0, 0x805d080);
    *((esp + 0xc)) = ebx;
    error (0, 0, eax);
    goto label_31;
label_90:
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805a2bb);
    ecx = esi;
    edx = eax;
    eax = *((esp + 0x34));
    fcn_0804d570 ();
    goto label_20;
label_83:
    if (*(0x8062360) == 0) {
        goto label_32;
    }
    if (*(0x8062450) != 0) {
        goto label_32;
    }
    if (*(0x8062451) != 0) {
        goto label_32;
    }
    eax = 1;
    *(0x8062452) = 0;
    if (*(0x806240c) != 0) {
        goto label_33;
    }
    if (*(0x806235c) != 0) {
        goto label_33;
    }
    if (*(0x8062408) != 0) {
        goto label_33;
    }
    if (*(0x8062453) != 0) {
        goto label_33;
    }
    goto label_34;
label_121:
    ebx = imp._Jv_RegisterClasses;
    while (ebx != 0) {
        ebx--;
        raise (0x13);
    }
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        raise (eax);
    }
label_119:
    if (*(0x8062455) != 0) {
        edx = 0x8062460;
        eax = 0x805a30a;
        fcn_0804ca20 ();
        edx = 0x80624a0;
        eax = 0x805a314;
        fcn_0804ca20 ();
        eax = imp._Jv_RegisterClasses;
        fcn_08056410 (eax);
        *((esp + 4)) = 0x805d2a8;
        *(esp) = 1;
        eax = *((eax*4 + 0x805d800));
        *((esp + 8)) = eax;
        printf_chk ();
    }
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        eax = fcn_08052d20 (eax);
        if (eax != 0) {
            assert_fail (0x805ad1c, 0x805a06b, 0x5dc);
label_110:
            *(0x8062364) = 1;
            goto label_35;
label_125:
            assert_fail (0x805ad1c, 0x805a06b, 0x59d);
        }
        eax = imp._Jv_RegisterClasses;
        fcn_080532b0 (eax);
    }
    eax = imp._Jv_RegisterClasses;
    eax = exit (eax);
label_107:
    if (eax == 2) {
        goto label_126;
    }
    if (eax == 3) {
        goto label_127;
    }
label_38:
    eax = *(0x80622ac);
    eax = strstr (eax, 0x805a09e);
    if (eax == 0) {
        goto label_36;
    }
label_108:
    *(0x806251c) = 5;
label_37:
    edi = imp._Jv_RegisterClasses;
    esi = 0x2000e;
    *(0x806251c) = 0;
    *((esp + 0x44)) = edi;
    edi = 0x8062520;
    do {
        edx = *((esp + 0x44));
        *(esp) = esi;
        eax = nl_langinfo (edx);
        eax = fcn_08054ce0 (0, edi, 0xa1);
        if (eax > 0xa0) {
            goto label_128;
        }
        eax = *((esp + 0x164));
        if (*(0x806251c) >= eax) {
            eax = imp._Jv_RegisterClasses;
        }
        esi++;
        edi += 0xa1;
        *(0x806251c) = eax;
    } while (esi != 0x2001a);
    if (eax < *((esp + 0x44))) {
        goto label_37;
    }
    if (eax != 0) {
        goto label_7;
    }
    goto label_129;
label_128:
    *(0x806251c) = 0;
label_129:
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805d16c);
    error (0, 0, eax);
    goto label_7;
label_105:
    esi++;
    eax = strchr (esi, 0xa);
    edx = esi;
    edi = eax;
    if (eax != 0) {
        edx = eax + 1;
        *(esp) = edx;
        eax = strchr (edx, 0xa);
        edx = *((esp + 0x20));
        if (eax != 0) {
            eax = fcn_080556c0 (esi);
            *((esp + 8)) = 5;
            *((esp + 4)) = 0x805a238;
            eax = dcgettext (0);
            ecx = *((esp + 0x24));
            *((esp + 4)) = 0;
            error (2, eax);
            edx = *((esp + 0x20));
        }
        *(edi) = 0;
    }
    *(0x80622ac) = esi;
    *(0x80622b0) = edx;
    goto label_38;
label_84:
    *((esp + 0x10)) = sym.imp.free;
    *((esp + 0xc)) = 0x8049820;
    *((esp + 8)) = 0;
    *((esp + 4)) = 0;
    *(esp) = 0x8062460;
    obstack_begin ();
    *((esp + 0x10)) = 0x80495c0;
    *((esp + 0xc)) = 0x8049820;
    *((esp + 8)) = 0;
    *((esp + 4)) = 0;
    *(esp) = 0x80624a0;
    eax = obstack_begin ();
    goto label_39;
label_109:
    *((esp + 0x158)) = 0x3f3f;
    ebx = 0;
    *((esp + 0x15a)) = 0;
    eax = fcn_08058bd0 (eax);
    edx = 0;
    *(0x8062cac) = eax;
    *((esp + 0x16c)) = eax;
label_52:
    if (edx > 5) {
        goto label_40;
    }
    /* switch table (6 cases) at 0x805acc0 */
label_51:
label_76:
    eax = imp._Jv_RegisterClasses;
    fcn_08056450 (eax, 0x20, 1);
    goto label_41;
label_63:
    eax = getenv (0x805a177);
    if (eax != 0) {
        goto label_42;
    }
    goto label_43;
label_85:
    if (*(0x8062404) == 0) {
        goto label_130;
    }
    ecx = 1;
    edx = 3;
    eax = 0x805a2b3;
    fcn_0804eb40 (0x805da85);
    goto label_44;
label_87:
    if (edi == 0) {
        goto label_24;
    }
    if (*((edi + 0xc)) != 0) {
        goto label_24;
    }
    *(0x806234c) = 0;
    goto label_24;
label_86:
    fcn_0804c3f0 ();
    if (*(0x8062404) == 0) {
        goto label_131;
    }
label_50:
    if (*(0x80624d4) == 0) {
        goto label_45;
    }
    fcn_0804fa80 ();
    edx = imp._Jv_RegisterClasses;
    *((esp + 0x40)) = edx;
    if (edx == 0) {
        goto label_24;
    }
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_132;
    }
    *(edx) = 0xa;
    edx++;
    *((eax + 0x14)) = edx;
label_49:
    esi = imp._Jv_RegisterClasses;
    *(0x80624d8)++;
    *((esp + 0x40)) = esi;
    goto label_24;
label_130:
    ecx = 1;
    edx = 0;
    eax = 0x805a2b3;
    fcn_0804c2b0 ();
    goto label_44;
label_72:
    eax = isatty (1);
    if (eax == 0) {
        goto label_46;
    }
label_71:
    *(0x806235c) = 1;
    *(0x806250c) = 0;
    goto label_0;
label_97:
    *((esp + 4)) = 0xa;
    *(esp) = edx;
    overflow ();
    goto label_47;
label_93:
    fcn_08058c00 ();
label_104:
    eax = getenv (0x805a22d);
    *((esp + 0x44)) = eax;
    eax = 0x805a15f;
    if (eax != 0) {
        eax = *((esp + 0x44));
    }
    *((esp + 0x44)) = eax;
    goto label_48;
label_73:
    edx = optarg;
    edx = *((esp + 0x164));
    eax = fcn_08059090 (0x805ad40, edx, 0);
label_132:
    *((esp + 4)) = 0xa;
    *(esp) = eax;
    eax = overflow ();
    goto label_49;
label_131:
    edx = 1;
    eax = 0;
    fcn_0804c810 ();
    goto label_50;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805d190);
    error (0, 0, eax);
    eax = imp._Jv_RegisterClasses;
    free (eax);
    eax = imp._Jv_RegisterClasses;
    do {
        if (eax == 0) {
            goto label_133;
        }
        ebx = *((eax + 0x10));
        free (eax);
        eax = ebx;
    } while (1);
    edx = *((esp + 0x168));
    eax = *(edx);
    edx++;
    *((esp + 0x168)) = edx;
    edx = 5;
    if (al != 0x3d) {
        goto label_51;
    }
    eax = *((esp + 0x16c));
    ecx = 0;
    edx = esp + 0x168;
    *((ebx + 0xc)) = eax;
    eax = ebx + 8;
    eax = esp + 0x16c;
    al = fcn_0804c010 (eax);
    edx -= edx;
    edx &= 5;
    goto label_52;
label_133:
    *(0x806235c) = 0;
label_54:
    if (*(0x8062218) != 6) {
        goto label_53;
    }
    eax = *(0x806221c);
    eax = strncmp (eax, 0x805a097, 6);
    if (eax != 0) {
        goto label_53;
    }
    *(0x806235d) = 1;
    goto label_53;
    eax = *((esp + 0x168));
    edx = *(eax);
    eax++;
    *((esp + 0x168)) = eax;
    if (dl == 0x3d) {
        goto label_134;
    }
label_55:
    edx = 5;
    goto label_51;
    eax = *((esp + 0x168));
    edx = 5;
    ecx = *(eax);
    if (cl == 0) {
        goto label_51;
    }
    eax++;
    dl = 2;
    *((esp + 0x159)) = cl;
    *((esp + 0x168)) = eax;
    goto label_51;
label_134:
    esi = 0;
    while (eax != 0) {
        edi = esp + 0x158;
        eax = strcmp (edi, eax);
        if (eax == 0) {
            goto label_135;
        }
        esi++;
        eax = *((esi*4 + 0x805b140));
    }
    goto label_136;
    ecx = *((esp + 0x168));
    eax = *(ecx);
    if (al == 0x2a) {
        goto label_137;
    }
    if (al == 0x3a) {
        goto label_138;
    }
    if (al == 0) {
        goto label_54;
    }
    ecx++;
    edx = 1;
    *((esp + 0x158)) = al;
    *((esp + 0x168)) = ecx;
    goto label_51;
label_138:
    ecx++;
    *((esp + 0x168)) = ecx;
    goto label_52;
label_137:
    eax = fcn_08058a70 (0x14);
    edx = esp + 0x168;
    ecx = 1;
    ebx = eax;
    eax = imp._Jv_RegisterClasses;
    *(0x8062cb0) = ebx;
    *((ebx + 0x10)) = eax;
    eax = *((esp + 0x16c));
    *((ebx + 4)) = eax;
    eax = esp + 0x16c;
    al = fcn_0804c010 (ebx);
    edx -= edx;
    edx &= 2;
    edx += 3;
    goto label_52;
label_135:
    eax = *((esp + 0x16c));
    ecx = 0;
    edx = esp + 0x168;
    *((esi*8 + 0x80621e4)) = eax;
    eax = esi*8 + 0x80621e0;
    eax = esp + 0x16c;
    al = fcn_0804c010 (eax);
    edx = 0;
    if (al != 0) {
        goto label_51;
    }
label_136:
    eax = esp + 0x158;
    eax = fcn_08056780 (eax);
    *((esp + 8)) = 5;
    esi = eax;
    eax = dcgettext (0, 0x805a29b);
    *((esp + 0xc)) = esi;
    error (0, 0, eax);
    goto label_55;
label_127:
    al = fcn_08052890 (2);
    if (al == 0) {
        goto label_38;
    }
    eax = *(0x80622ac);
    *((esp + 8)) = 2;
    eax = dcgettext (0, eax);
    *((esp + 8)) = 2;
    *(0x80622ac) = eax;
    eax = *(0x80622b0);
    eax = dcgettext (0, eax);
    *(0x80622b0) = eax;
    goto label_38;
label_126:
    *(0x80622ac) = 0x805a287;
    *(0x80622b0) = 0x805a27b;
    goto label_38;
label_120:
    eax = *(0x80621e4);
    eax = memcmp (eax, 0x805a307, 2);
    if (eax != 0) {
        goto label_56;
    }
    if (*(0x80621e8) != 1) {
        goto label_56;
    }
    eax = *(0x80621ec);
    if (*(eax) != 0x6d) {
        goto label_56;
    }
    goto label_57;
label_123:
    eax = assert_fail (0x805ad10, 0x805a06b, 0x3d5);
label_118:
    *((esp + 4)) = 0xa;
    *(esp) = eax;
    overflow ();
    goto label_58;
label_117:
    *((esp + 4)) = 0x20;
    *(esp) = edx;
    overflow ();
    goto label_59;
label_106:
    *(0x80622b0) = 0x805a278;
    *(0x80622ac) = 0x805a278;
    goto label_36;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80555d0 */
#include <stdint.h>
 
uint32_t fcn_080555d0 (int32_t arg_30h) {
    size_t size;
    size_t nitems;
    FILE * stream;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    *((esp + 0x1c)) = ebx;
    ebx = *((esp + 0x30));
    *((esp + 0x20)) = esi;
    *((esp + 0x24)) = edi;
    *((esp + 0x28)) = ebp;
    if (ebx != 0) {
        eax = strrchr (ebx, 0x2f);
        if (eax != 0) {
            ebp = eax + 1;
            ecx = ebp;
            ecx -= ebx;
            if (ecx <= 6) {
                goto label_0;
            }
            esi = eax - 6;
            edi = 0x805d4e8;
            ecx = 7;
            __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
            if (ecx != 6) {
                goto label_0;
            }
            ecx = 3;
            edi = 0x805d4f0;
            esi = ebp;
            ebx = ebp;
            __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
            dl = (ecx > 6) ? 1 : 0;
            cl = (ecx < 6) ? 1 : 0;
            if (dl != cl) {
                goto label_0;
            }
            ebx = eax + 4;
            *(loc._edata) = ebx;
        }
label_0:
        *(0x8062dbc) = ebx;
        esi = *((esp + 0x20));
        *(obj.__progname_full) = ebx;
        edi = *((esp + 0x24));
        ebx = *((esp + 0x1c));
        ebp = *((esp + 0x28));
        return eax;
    }
    eax = *(obj.stderr);
    fwrite (0x805d4b0, 1, 0x37);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059fc0 */
#include <stdint.h>
 
int32_t fcn_08059fc0 (int32_t arg_20h) {
    int32_t var_4h;
    int32_t var_8h;
    fcn_08059fb2 ();
    ebx += 0x802e;
    eax = *((ebx - 4));
    if (eax == 0) {
        goto label_0;
    }
    eax = *(eax);
    do {
        *((esp + 8)) = eax;
        eax = *((esp + 0x20));
        *((esp + 4)) = 0;
        *(esp) = eax;
        eax = cxa_atexit ();
        return eax;
label_0:
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059fb2 */
#include <stdint.h>
 
void fcn_08059fb2 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056430 */
#include <stdint.h>
 
int32_t fcn_08056430 (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = 0x8062dc0;
    if (eax == 0) {
        eax = edx;
    }
    edx = *((esp + 8));
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8051c00 */
#include <stdint.h>
 
uint32_t fcn_08051c00 (char * s, int32_t arg_54h, void * s1, int32_t arg_5ch) {
    char * s2;
    size_t n;
    size_t var_18h;
    uint32_t var_1ch;
    uint32_t var_20h;
    edx = *((esp + 0x50));
    ebp = *((esp + 0x5c));
    eax = strlen (edx);
    edx = *((esp + 0x54));
    *((esp + 0x1c)) = 0xffffffff;
    ebx = *(edx);
    *((esp + 0x18)) = eax;
    if (ebx == 0) {
        goto label_3;
    }
    edi = *((esp + 0x58));
    esi = 0;
    *((esp + 0x20)) = 0;
    goto label_1;
label_0:
    eax = *((esp + 0x58));
    if (eax == 0) {
        goto label_4;
    }
    eax = *((esp + 0x1c));
    eax *= ebp;
    eax += *((esp + 0x58));
    eax = memcmp (eax, edi, ebp);
    edx = *((esp + 0x20));
    eax = 1;
    if (eax != 0) {
        edx = eax;
    }
    *((esp + 0x20)) = dl;
    do {
label_2:
        edx = *((esp + 0x54));
        esi++;
        edi += ebp;
        ebx = *((edx + esi*4));
        if (ebx == 0) {
            goto label_5;
        }
label_1:
        eax = *((esp + 0x18));
        edx = *((esp + 0x50));
        eax = strncmp (ebx, edx, eax);
    } while (eax != 0);
    eax = strlen (ebx);
    if (eax == *((esp + 0x18))) {
        goto label_6;
    }
    if (*((esp + 0x1c)) != -1) {
        goto label_0;
    }
    edx = *((esp + 0x54));
    edi += ebp;
    *((esp + 0x1c)) = esi;
    esi++;
    ebx = *((edx + esi*4));
    if (ebx != 0) {
        goto label_1;
    }
label_5:
    eax = 0xfffffffe;
    if (*((esp + 0x20)) == 0) {
        eax = *((esp + 0x1c));
    }
    *((esp + 0x1c)) = eax;
label_3:
    eax = *((esp + 0x1c));
    return eax;
label_4:
    *((esp + 0x20)) = 1;
    goto label_2;
label_6:
    *((esp + 0x1c)) = esi;
    eax = *((esp + 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8054660 */
#include <stdint.h>
 
uint32_t fcn_08054660 (int32_t arg_60h, int32_t arg_64h, int32_t arg_68h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_2ch;
    int32_t var_3ch;
    int32_t var_4ch;
    int32_t var_50h;
    int32_t var_54h;
    int32_t var_58h;
    edx = *((esp + 0x60));
    *((esp + 0x4c)) = ebx;
    ebx = *((esp + 0x68));
    *((esp + 0x58)) = ebp;
    ebp = *((esp + 0x64));
    *((esp + 0x50)) = esi;
    *((esp + 0x54)) = edi;
    if (edx == 0) {
        goto label_6;
    }
label_2:
    esi = 0;
    if (*(edx) == 0x27) {
        goto label_7;
    }
label_0:
    *(esp) = edx;
    eax = fcn_08051c00 (edx, 0x805d478, 0x805d484);
    edx = *((esp + 0x2c));
    if (eax < 0) {
        goto label_8;
    }
    esi |= *((eax*4 + 0x805d484));
    edx = 1;
    *(ebx) = 1;
    ecx = 0;
    *((ebx + 4)) = 0;
label_1:
    *(ebp) = esi;
    edi = 0;
label_3:
    eax = ecx;
    eax |= edx;
    while (1) {
        eax = edi;
        ebx = *((esp + 0x4c));
        esi = *((esp + 0x50));
        edi = *((esp + 0x54));
        ebp = *((esp + 0x58));
        return eax;
        edi = 0;
        esi = 0x400;
        eax = getenv (0x805d44a);
        if (eax != 0) {
            esi = 0x200;
            edi = 0;
        }
        *((ebx + 4)) = edi;
        edi = 4;
        *(ebx) = esi;
    }
label_7:
    edx++;
    si = 4;
    goto label_0;
label_8:
    eax = esp + 0x3c;
    eax = fcn_08059230 (edx, eax, 0);
    edx = *((esp + 0x2c));
    edi = eax;
    if (eax != 0) {
        goto label_9;
    }
    eax = *(edx);
    eax -= 0x30;
    if (al <= 9) {
        goto label_4;
    }
    ecx = *((esp + 0x3c));
    if (edx != ecx) {
        goto label_10;
    }
    goto label_11;
    do {
        edx++;
        if (edx == ecx) {
            goto label_11;
        }
label_10:
        eax = *((edx + 1));
        eax -= 0x30;
    } while (al > 9);
label_4:
    edx = *(ebx);
    ecx = *((ebx + 4));
    goto label_1;
label_6:
    eax = getenv (0x805a177);
    edx = eax;
    if (eax != 0) {
        goto label_2;
    }
    eax = getenv (0x805d440);
    edx = eax;
    if (eax != 0) {
        goto label_2;
    }
    eax = getenv (0x805d44a);
    ecx = 0;
    edx = 0x400;
    if (eax != 0) {
        edx = 0x200;
        ecx = 0;
    }
    *(ebx) = edx;
    esi = 0;
    *((ebx + 4)) = ecx;
    goto label_1;
label_9:
    *(ebp) = 0;
    edx = *(ebx);
    ecx = *((ebx + 4));
    goto label_3;
label_11:
    esi |= 0x80;
    if (*((ecx - 1)) != 0x42) {
label_5:
        esi |= 0x20;
        edx = *(ebx);
        ecx = *((ebx + 4));
        goto label_1;
    }
    esi |= 0x100;
    if (*((ecx - 2)) != 0x69) {
        goto label_4;
    }
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058c50 */
#include <stdint.h>
 
int32_t fcn_08058c50 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch, char * s) {
    char * * endptr;
    uint32_t line;
    char * function;
    int32_t var_10h;
    int32_t var_14h;
    uint32_t var_18h;
    int32_t var_1ch;
    int32_t var_2ch;
    edi = *((esp + 0x58));
    ebp = *((esp + 0x50));
    eax = *((esp + 0x54));
    if (edi > 0x24) {
        goto label_16;
    }
    edx = *(ebp);
    ebx = esp + 0x2c;
    if (eax != 0) {
        ebx = eax;
    }
    *((esp + 0x10)) = dl;
    eax = ctype_b_loc ();
    edx = *((esp + 0x10));
    esi = *(eax);
    eax = ebp;
    while ((*((esi + ecx*2 + 1)) & 0x20) != 0) {
        eax++;
        edx = *(eax);
        ecx = (int32_t) dl;
    }
    esi = 4;
    while (eax != 0x22) {
label_1:
        eax = esi;
        return eax;
        errno_location ();
        *(eax) = 0;
        *((esp + 8)) = edi;
        eax = strtoul (ebp, ebx);
        ecx = *(ebx);
        edx = *((esp + 0x10));
        edi = eax;
        if (ecx == ebp) {
            goto label_17;
        }
        eax = *(edx);
        esi = 0;
        if (eax == 0) {
label_0:
            eax = *((esp + 0x60));
            if (eax != 0) {
                ebp = *(ecx);
                eax = ebp;
                if (al != 0) {
                    goto label_18;
                }
            }
label_3:
            edx = *((esp + 0x5c));
            eax = esi;
            *(edx) = edi;
            return eax;
        }
        si = 4;
    }
    si = 1;
    goto label_0;
label_18:
    edx = *((esp + 0x60));
    eax = (int32_t) al;
    *((esp + 4)) = eax;
    eax = strchr (ecx);
    ecx = *((esp + 0x10));
    if (eax == 0) {
        goto label_19;
    }
label_2:
    edx = *((esp + 0x60));
    *((esp + 4)) = 0x30;
    eax = strchr (ecx);
    ecx = *((esp + 0x10));
    *((esp + 0x1c)) = 1;
    *((esp + 0x14)) = 0x400;
    if (eax != 0) {
        eax = *((ecx + 1));
        if (al == 0x44) {
            goto label_20;
        }
        if (al == 0x69) {
            goto label_21;
        }
        if (al == 0x42) {
            goto label_20;
        }
    }
label_14:
    eax = ebp - 0x42;
    if (al > 0x35) {
        goto label_19;
    }
    eax = (int32_t) al;
    /* switch table (54 cases) at 0x805dd54 */
label_17:
    edx = *((esp + 0x60));
    if (edx == 0) {
        goto label_1;
    }
    ebp = *(ebp);
    eax = ebp;
    if (al == 0) {
        goto label_1;
    }
    edx = *((esp + 0x60));
    eax = (int32_t) al;
    si = 0;
    *((esp + 4)) = eax;
    edi = 1;
    eax = strchr (ecx);
    ecx = *((esp + 0x10));
    if (eax != 0) {
        goto label_2;
    }
    si = 4;
    goto label_1;
label_19:
    eax = *((esp + 0x5c));
    esi |= 2;
    *(eax) = edi;
    goto label_1;
    if (edi > 0x7fffffff) {
        goto label_13;
    }
    edi += edi;
    eax = 0;
    do {
label_4:
        ecx += *((esp + 0x1c));
        esi |= eax;
        eax = esi;
        eax |= 2;
        *(ebx) = ecx;
        if (*(ecx) != 0) {
            esi = eax;
        }
        goto label_3;
        eax = 0;
    } while (1);
    if (edi > 0x7fffff) {
        goto label_13;
    }
    edi <<= 9;
    eax = 0;
    goto label_4;
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    edx = 7;
    *((esp + 0x18)) = eax;
    eax = 0;
    goto label_22;
label_5:
    edi *= *((esp + 0x14));
    ebp = 0;
label_6:
    eax |= ebp;
    edx--;
    if (edx == 0) {
        goto label_4;
    }
label_22:
    if (edi <= *((esp + 0x18))) {
        goto label_5;
    }
    edi = 0xffffffff;
    goto label_6;
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    edx = 8;
    *((esp + 0x18)) = eax;
    eax = 0;
    goto label_23;
label_7:
    edi *= *((esp + 0x14));
    ebp = 0;
label_8:
    eax |= ebp;
    edx--;
    if (edx == 0) {
        goto label_4;
    }
label_23:
    if (edi <= *((esp + 0x18))) {
        goto label_7;
    }
    edi = 0xffffffff;
    goto label_8;
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    *((esp + 0x18)) = eax;
    eax = 0;
    do {
        if (*((esp + 0x18)) < edi) {
            goto label_24;
        }
        edi *= *((esp + 0x14));
        edx = 0;
label_15:
        eax |= edx;
        ebp--;
    } while (ebp != 0);
    goto label_4;
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    *((esp + 0x18)) = eax;
    eax = 0;
    goto label_25;
label_9:
    edi *= *((esp + 0x14));
    edx = 0;
label_10:
    eax |= edx;
    ebp--;
    if (ebp == 0) {
        goto label_4;
    }
label_25:
    if (edi <= *((esp + 0x18))) {
        goto label_9;
    }
    edi = 0xffffffff;
    edx = 1;
    goto label_10;
    edx = 0;
    eax = 0xffffffff;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    if (eax < edi) {
        goto label_26;
    }
    edi *= *((esp + 0x14));
    if (eax < edi) {
        goto label_26;
    }
    do {
        edi *= *((esp + 0x14));
        eax = 0;
        goto label_4;
        edx = 0;
        eax = 0xffffffff;
        eax = *(edx:eax) / esp + 0x14;
        edx = *(edx:eax) % esp + 0x14;
    } while (edi <= eax);
label_13:
    edi = 0xffffffff;
    eax = 1;
    goto label_4;
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    edx = 6;
    *((esp + 0x18)) = eax;
    eax = 0;
    goto label_27;
label_11:
    edi *= *((esp + 0x14));
    ebp = 0;
label_12:
    eax |= ebp;
    edx--;
    if (edx == 0) {
        goto label_4;
    }
label_27:
    if (*((esp + 0x18)) >= edi) {
        goto label_11;
    }
    edi = 0xffffffff;
    goto label_12;
    if (edi > 0x3fffff) {
        goto label_13;
    }
    edi <<= 0xa;
    eax = 0;
    goto label_4;
    edx = 0;
    eax = 0xffffffff;
    eax = *(edx:eax) / esp + 0x14;
    edx = *(edx:eax) % esp + 0x14;
    edx = 1;
    if (eax >= edi) {
        edi *= *((esp + 0x14));
        if (edi <= eax) {
            edi *= *((esp + 0x14));
            if (edi > eax) {
                goto label_28;
            }
            dl = 0;
            eax = 0;
            edi *= *((esp + 0x14));
            eax |= edx;
            goto label_4;
label_21:
            eax = 0;
            al = (*((ecx + 2)) == 0x42) ? 1 : 0;
            edx = eax + eax + 1;
            *((esp + 0x1c)) = edx;
            goto label_14;
label_20:
            *((esp + 0x1c)) = 2;
            *((esp + 0x14)) = 0x3e8;
            goto label_14;
label_24:
            edi = 0xffffffff;
            edx = 1;
            goto label_15;
        }
        edx = 0;
    }
    edx |= 1;
    eax = 1;
    edi = 0xffffffff;
    eax |= edx;
    goto label_4;
label_26:
    eax = 1;
    edi = 0xffffffff;
    goto label_4;
label_16:
    assert_fail (0x805de2c, 0x805dd20, 0x53);
label_28:
    edx = 0;
    eax = 1;
    edi = 0xffffffff;
    eax |= edx;
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80513a0 */
#include <stdint.h>
 
uint32_t fcn_080513a0 (int32_t arg_20h) {
    char * locale;
    size_t n;
    int32_t var_ch;
    esi = imp._Jv_RegisterClasses;
    ebx = *((esp + 0x20));
    *((esp + 8)) = 5;
    if (ebx == 0) {
        goto label_1;
    }
    eax = dcgettext (0, 0x805b318);
    *((esp + 0xc)) = esi;
    *((esp + 4)) = 1;
    *((esp + 8)) = eax;
    eax = *(obj.stderr);
    *(esp) = eax;
    fprintf_chk ();
    do {
        exit (ebx);
label_1:
        eax = dcgettext (0, 0x805b340);
        *((esp + 8)) = esi;
        *(esp) = 1;
        *((esp + 4)) = eax;
        printf_chk ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805b364);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805b3f8);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805b444);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805b554);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805b79c);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805b948);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805baec);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805bb2c);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805bc18);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805bd28);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805becc);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c060);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c1c8);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c33c);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c4f0);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c5b8);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c784);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805c980);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805ca10);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805cb74);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805ccd0);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805cd00);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805cd38);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805cdd4);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805cef4);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        eax = imp._Jv_RegisterClasses;
        eax = fcn_080520b0 (eax);
        *((esp + 8)) = 5;
        esi = eax;
        eax = dcgettext (0, 0x805a0f3);
        *((esp + 8)) = esi;
        *((esp + 0xc)) = 0x805a10a;
        *(esp) = 1;
        *((esp + 4)) = eax;
        printf_chk ();
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805a120);
        *((esp + 0xc)) = 0x805cf8c;
        *((esp + 8)) = 0x805a134;
        *(esp) = 1;
        *((esp + 4)) = eax;
        printf_chk ();
        esi = stdout;
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805cfb4);
        *((esp + 4)) = esi;
        *(esp) = eax;
        fputs_unlocked ();
        eax = setlocale (5, 0);
        if (eax != 0) {
            eax = strncmp (eax, 0x805a142, 3);
            if (eax != 0) {
                goto label_2;
            }
        }
label_0:
        eax = imp._Jv_RegisterClasses;
        eax = fcn_080520b0 (eax);
        *((esp + 8)) = 5;
        esi = eax;
        eax = dcgettext (0, 0x805d03c);
        *((esp + 8)) = esi;
        *(esp) = 1;
        *((esp + 4)) = eax;
        printf_chk ();
    } while (1);
label_2:
    eax = imp._Jv_RegisterClasses;
    eax = fcn_080520b0 (eax);
    *((esp + 8)) = 5;
    esi = eax;
    eax = dcgettext (0, 0x805cff4);
    *((esp + 8)) = esi;
    *(esp) = 1;
    *((esp + 4)) = eax;
    printf_chk ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80520b0 */
#include <stdint.h>
 
int32_t fcn_080520b0 (int32_t arg_8h) {
    eax = *((esp + 8));
    edx = *(eax);
    if (dl != 0x2f) {
        goto label_1;
    }
    do {
        eax++;
        edx = *(eax);
    } while (dl == 0x2f);
label_1:
    if (dl == 0) {
        goto label_2;
    }
    ecx = eax;
    ebx = 0;
    while (dl != 0x2f) {
        if (bl != 0) {
            eax = ecx;
            ebx = 0;
        }
        ecx++;
        edx = *(ecx);
        if (dl == 0) {
            goto label_2;
        }
label_0:
    }
    ecx++;
    ebx = 1;
    edx = *(ecx);
    if (dl != 0) {
        goto label_0;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c280 */
#include <stdint.h>
 
int32_t fcn_0804c280 (void) {
    ebx = eax;
    fcn_08058a70 (8);
    edx = imp._Jv_RegisterClasses;
    *(eax) = ebx;
    *((eax + 4)) = edx;
    *(0x80624f4) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058a70 */
#include <stdint.h>
 
uint32_t fcn_08058a70 (size_t size) {
    ebx = *((esp + 0x20));
    eax = malloc (ebx);
    while (ebx == 0) {
        return eax;
    }
    return fcn_08058c00 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058980 */
#include <stdint.h>
 
uint32_t fcn_08058980 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    eax = esp + 0x40;
    eax = *((esp + 0x3c));
    eax = *((esp + 0x38));
    eax = *((esp + 0x34));
    eax = *((esp + 0x30));
    fcn_08058920 (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058920 */
#include <stdint.h>
 
int32_t fcn_08058920 (int32_t arg_60h, int32_t arg_64h, int32_t arg_68h, int32_t arg_6ch, int32_t arg_70h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_28h;
    eax = 0;
    ebx = *((esp + 0x70));
    ecx = esp + 0x28;
    do {
        edx = *((ebx + eax*4));
        *((ecx + eax*4)) = edx;
        if (edx == 0) {
            goto label_0;
        }
        eax++;
    } while (eax != 0xa);
label_0:
    eax = *((esp + 0x6c));
    eax = *((esp + 0x68));
    eax = *((esp + 0x64));
    eax = *((esp + 0x60));
    fcn_08058370 (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8051ee0 */
#include <stdint.h>
 
uint32_t fcn_08051ee0 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h, int32_t arg_44h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    *((esp + 0x1c)) = ebx;
    ebx = *((esp + 0x38));
    *((esp + 0x20)) = esi;
    esi = *((esp + 0x3c));
    *((esp + 0x24)) = edi;
    edi = *((esp + 0x40));
    *((esp + 0x28)) = ebp;
    ebp = *((esp + 0x34));
    eax = fcn_08051c00 (edi, ebx, esi);
    while (1) {
        ebx = *((esp + 0x1c));
        esi = *((esp + 0x20));
        edi = *((esp + 0x24));
        ebp = *((esp + 0x28));
        return eax;
        eax = *((esp + 0x30));
        fcn_08051d10 (eax, ebp, eax);
        fcn_08051db0 (ebx, esi, edi);
        uint32_t (*esp + 0x44)() ();
        eax = 0xffffffff;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056780 */
#include <stdint.h>
 
int32_t fcn_08056780 (int32_t arg_20h) {
    int32_t var_4h;
    eax = *((esp + 0x20));
    fcn_08056740 (0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056740 */
#include <stdint.h>
 
int32_t fcn_08056740 (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    ecx = 0xffffffff;
    edx = *((esp + 8));
    *((esp + 4)) = 0x8062dc0;
    return void (*0x8056220)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80563c0 */
#include <stdint.h>
 
uint32_t fcn_080563c0 (void) {
    int32_t var_4h_2;
    int32_t var_10h_2;
    int32_t var_14h_2;
    int32_t var_18h;
    int32_t var_4h;
    *((esp + 0x10)) = ebx;
    ebx = *((esp + 0x20));
    *((esp + 0x14)) = esi;
    *((esp + 0x18)) = edi;
    eax = errno_location ();
    edi = *(eax);
    esi = eax;
    eax = 0x8062dc0;
    if (ebx == 0) {
        ebx = eax;
    }
    fcn_08058ba0 (ebx, 0x30);
    ebx = *((esp + 0x10));
    *(esi) = edi;
    esi = *((esp + 0x14));
    edi = *((esp + 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056410 */
#include <stdint.h>
 
int32_t fcn_08056410 (int32_t arg_4h) {
    eax = *((esp + 4));
    edx = 0x8062dc0;
    if (eax == 0) {
        eax = edx;
    }
    eax = *(eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056450 */
#include <stdint.h>
 
int32_t fcn_08056450 (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = 0x8062dc0;
    *(esp) = ebx;
    ebx = *((esp + 0x10));
    ecx = *((esp + 0x14));
    *((esp + 4)) = esi;
    edx = *((esp + 0x18));
    *((esp + 8)) = edi;
    if (ebx == 0) {
        ebx = eax;
    }
    eax = ecx;
    al >>= 5;
    ecx &= 0x1f;
    esi = (int32_t) al;
    edx &= 1;
    edi = *((ebx + esi*4 + 8));
    eax = *((ebx + esi*4 + 8));
    eax >>= cl;
    eax &= 1;
    edx ^= eax;
    edx <<= cl;
    edx ^= edi;
    edi = *((esp + 8));
    *((ebx + esi*4 + 8)) = edx;
    ebx = *(esp);
    esi = *((esp + 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c320 */
#include <stdint.h>
 
int32_t fcn_0804c320 (void) {
    eax = imp._Jv_RegisterClasses;
    if (eax == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        eax = imp._Jv_RegisterClasses;
        esi = *((eax + ebx*4));
        eax = *(esi);
        free (eax);
        eax = *((esi + 4));
        free (eax);
        eax = *((esi + 0x70));
        if (eax != 0x80622b4) {
            *(esp) = eax;
            freecon ();
        }
        ebx++;
    } while (*(0x80624d4) > ebx);
label_0:
    *(0x80624d4) = 0;
    *(0x8062cb8) = 0;
    *(0x8062cbc) = 0;
    *(0x8062cc0) = 0;
    *(0x8062cc4) = 0;
    *(0x8062cc8) = 0;
    *(0x8062ccc) = 0;
    *(0x8062cd0) = 0;
    *(0x8062cd4) = 0;
    *(0x8062cd8) = 0;
    *(0x8062cdc) = 0;
    *(0x8062ce0) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804eb40 */
#include <stdint.h>
 
int32_t fcn_0804eb40 (int32_t arg_8h) {
    int32_t var_340h;
    uint32_t var_339h;
    char * dest;
    char * s;
    int32_t var_330h;
    int32_t var_32ch;
    int32_t var_320h;
    int32_t var_310h;
    int32_t var_2bdh;
    int32_t var_31h;
    int32_t var_1ch;
    int32_t var_ch;
    char * errname;
    char ** format;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_sp_1ch;
    *((ebp - 0x338)) = edx;
    edx = *((ebp + 8));
    *((ebp - 0x339)) = cl;
    ecx = *(gs:0x14);
    *((ebp - 0x1c)) = ecx;
    ecx = 0;
    *((ebp - 0x330)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((ebp - 0x334)) = edx;
    edx = imp._Jv_RegisterClasses;
    if (edx == *(0x80624cc)) {
        goto label_37;
    }
label_8:
    edx <<= 7;
    edx += eax;
    edi = edx;
    *((ebp - 0x32c)) = edx;
    edx = 0x80;
    if ((edi & 1) != 0) {
        goto label_38;
    }
label_25:
    if ((edi & 2) != 0) {
        goto label_39;
    }
label_24:
    ecx = edx;
    eax = 0;
    ecx >>= 2;
    memset (edi, eax, ecx);
    if ((dl & 2) != 0) {
        *(edi) = 0;
        edi += 2;
    }
    edx &= 1;
    if (edx != 0) {
        *(edi) = 0;
    }
    edx = *((ebp - 0x32c));
    ecx = *((ebp - 0x338));
    *((edx + 0x60)) = 0;
    *((edx + 0x64)) = 0;
    *((edx + 0x68)) = ecx;
    if (*((ebp - 0x339)) == 0) {
        if (*(0x8062452) == 0) {
            goto label_40;
        }
    }
label_4:
    esi = imp._Jv_RegisterClasses;
label_3:
    ebx = *((ebp - 0x330));
    if (*(ebx) != 0x2f) {
        edx = *((ebp - 0x334));
        if (*(edx) != 0) {
            goto label_41;
        }
    }
label_13:
    eax = *((ebp - 0x32c));
    eax += 8;
    *((ebp - 0x334)) = eax;
    while (esi != 5) {
label_9:
        edx = *((ebp - 0x334));
        edi = 0;
        *((esp + 4)) = ebx;
        *(esp) = 3;
        *((esp + 8)) = edx;
        eax = lxstat64 ();
        edx = eax;
label_10:
        if (edx != 0) {
            goto label_42;
        }
label_0:
        ecx = *((ebp - 0x32c));
        *((ecx + 0x74)) = 1;
        if (*((ebp - 0x338)) == 5) {
            goto label_43;
        }
        eax = *((ecx + 0x18));
        eax &= 0xf000;
        if (eax == 0x8000) {
            goto label_43;
        }
label_5:
        eax = imp._Jv_RegisterClasses;
        if (eax == 0) {
            goto label_44;
        }
        if (*(0x8062450) != 0) {
            goto label_44;
        }
label_6:
        ecx = *((ebp - 0x32c));
        edx = *((ecx + 0x18));
        eax = *((ecx + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_45;
        }
label_20:
        if (eax == 0x4000) {
            goto label_46;
        }
        edx = *((ebp - 0x32c));
        *((edx + 0x68)) = 5;
label_21:
        eax = imp._Jv_RegisterClasses;
        ecx = *((ebp - 0x32c));
        esi = *((ecx + 0x40));
        edi = *((ecx + 0x44));
        if (eax != 0) {
            if (*(0x8062451) == 0) {
                goto label_27;
            }
        }
        eax = imp._Jv_RegisterClasses;
        edx = imp._Jv_RegisterClasses;
        eax = imp._Jv_RegisterClasses;
        eax = ebp - 0x2bd;
        eax = fcn_08053850 (0x200, edi, eax);
        eax = fcn_08055350 (eax, 0);
        if (eax > *(0x8062cc0)) {
            *(0x8062cc0) = eax;
        }
        eax = imp._Jv_RegisterClasses;
        if (eax == 0) {
            if (*(0x80622a8) != 0) {
                goto label_47;
            }
label_26:
            if (*(0x80622a9) != 0) {
                ecx = *((ebp - 0x32c));
                ebx = *((ecx + 0x24));
                if (*(0x80624ed) == 0) {
                    goto label_48;
                }
label_33:
                eax = ebx;
                eax = fcn_0804d600 ();
label_34:
                if (*(0x8062ccc) >= eax) {
                    goto label_49;
                }
                *(0x8062ccc) = eax;
            }
label_49:
            if (*(0x8062510) != 0) {
                goto label_50;
            }
        }
label_27:
        if (*(0x8062450) != 0) {
            ecx = *((ebp - 0x32c));
            eax = *((ecx + 0x70));
            eax = strlen (eax);
            if (eax > *(0x8062cd4)) {
                goto label_51;
            }
        }
        eax = imp._Jv_RegisterClasses;
        if (eax == 0) {
            goto label_52;
        }
label_14:
        eax = *(0x80624ee);
label_19:
        if (al != 0) {
            goto label_53;
        }
label_2:
        eax = *((ebp - 0x330));
        eax = fcn_08058bd0 (eax);
        edx = *((ebp - 0x32c));
        *(0x80624d4)++;
        *(edx) = eax;
label_1:
        ecx = *((ebp - 0x1c));
        ecx ^= *(gs:0x14);
        eax = esi;
        edx = edi;
        if (*(0x80624d4) != 0) {
            goto label_54;
        }
        esp = ebp - 0xc;
        return eax;
        if (esi <= 4) {
            goto label_55;
        }
    }
    *((esp + 8)) = eax;
    edi = 1;
    *((esp + 4)) = ebx;
    *(esp) = 3;
    eax = xstat64 ();
    edx = eax;
    if (edx == 0) {
        goto label_0;
    }
label_42:
    *((esp + 8)) = 5;
    esi = 0;
    edi = 0;
    eax = dcgettext (0, 0x805a0bb);
    ecx = ebx;
    edx = eax;
    eax = *((ebp - 0x339));
    fcn_0804d570 ();
    if (*((ebp - 0x339)) != 0) {
        goto label_1;
    }
    goto label_2;
label_40:
    if (*((ebp - 0x338)) == 3) {
        goto label_56;
    }
label_18:
    eax = *(0x80624ee);
    if (al == 0) {
        goto label_57;
    }
label_16:
    edx = *((ebp - 0x338));
    dl = (edx == 0) ? 1 : 0;
    if (edx != 0) {
        if (*((ebp - 0x338)) != 6) {
            goto label_58;
        }
    }
    esi = imp._Jv_RegisterClasses;
    if (esi == 5) {
        goto label_3;
    }
    if (*(0x806235d) != 0) {
        goto label_3;
    }
    if (*(0x8062364) != 0) {
        goto label_3;
    }
label_58:
    if (al != 0) {
        goto label_4;
    }
    if (*(0x8062454) == 0) {
        goto label_59;
    }
    if (dl != 0) {
        goto label_4;
    }
    esi = 0;
    edi = 0;
    if (*((ebp - 0x338)) != 5) {
        goto label_2;
    }
    if (*(0x8062408) == 3) {
        goto label_4;
    }
    if (*(0x806235c) == 0) {
        goto label_2;
    }
    eax = 0xe;
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_4;
    }
    eax = 0x10;
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_4;
    }
    eax = 0x11;
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_4;
    }
    eax = 0x15;
    al = fcn_0804bf90 ();
    if (al == 0) {
        goto label_2;
    }
    goto label_4;
label_43:
    if (*(0x806235c) == 0) {
        goto label_5;
    }
    eax = 0x15;
    *((ebp - 0x340)) = edx;
    al = fcn_0804bf90 ();
    edx = *((ebp - 0x340));
    if (al == 0) {
        goto label_5;
    }
    eax = *((ebp - 0x32c));
    *((eax + 0x7c)) = 0;
    goto label_5;
label_44:
    eax = *((ebp - 0x32c));
    ecx = edi;
    *(esp) = ebx;
    *((ebp - 0x340)) = edx;
    eax += 0x70;
    *((esp + 4)) = eax;
    if (cl == 0) {
        goto label_60;
    }
    eax = fcn_08059550 ();
    edx = *((ebp - 0x340));
label_12:
    if (eax < 0) {
        goto label_61;
    }
    eax = *((ebp - 0x32c));
    ecx = 0xa;
    esi = 0x805a0cc;
    edi = *((eax + 0x70));
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    cl = (eax != 0) ? 1 : 0;
label_11:
    esi = imp._Jv_RegisterClasses;
    eax = 0;
    if (esi == 0) {
        goto label_62;
    }
label_17:
    if (cl == 0) {
        goto label_63;
    }
    ecx = 1;
    esi = 1;
    if (al != 0) {
        goto label_64;
    }
label_7:
    eax = *((ebp - 0x32c));
    *(0x8062cb8) |= cl;
    *((eax + 0x78)) = esi;
    if (edx == 0) {
        goto label_6;
    }
    goto label_65;
label_63:
    if (al == 0) {
        goto label_66;
    }
label_64:
    ecx = 1;
    esi = 2;
    goto label_7;
label_37:
    if (edx > 0xffffff) {
        goto label_67;
    }
    edx <<= 8;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = fcn_08058aa0 ();
    edx = imp._Jv_RegisterClasses;
    *(0x80624cc) <<= 1;
    *(0x80624d0) = eax;
    goto label_8;
label_55:
    if (*((ebp - 0x339)) == 0) {
        goto label_9;
    }
    edx = *((ebp - 0x334));
    edi = 1;
    *((esp + 4)) = ebx;
    *(esp) = 3;
    *((esp + 8)) = edx;
    eax = xstat64 ();
    edx = eax;
    if (esi == 3) {
        goto label_10;
    }
    if (eax < 0) {
        goto label_68;
    }
    ecx = *((ebp - 0x32c));
    eax = *((ecx + 0x18));
    eax &= 0xf000;
    al = (eax != 0x4000) ? 1 : 0;
label_30:
    edi = 1;
    if (al == 0) {
        goto label_10;
    }
    goto label_9;
label_61:
    ecx = *((ebp - 0x32c));
    *((ecx + 0x70)) = 0x80622b4;
    *((ebp - 0x340)) = edx;
    eax = errno_location ();
    edx = *((ebp - 0x340));
    eax = *(eax);
    if (eax != 0x3d) {
        goto label_69;
    }
label_15:
    ecx = 0;
    goto label_11;
label_60:
    fcn_080595e0 ();
    edx = *((ebp - 0x340));
    goto label_12;
label_53:
    ecx = *((ebp - 0x32c));
    eax = ebp - 0x2bd;
    eax = *((ecx + 0x60));
    edx = *((ecx + 0x64));
    eax = fcn_08054c60 (eax, edx, eax);
    eax = strlen (eax);
    if (eax <= *(0x8062cbc)) {
        goto label_2;
    }
    *(0x8062cbc) = eax;
    goto label_2;
label_41:
    eax = strlen (ebx);
    edx = *((ebp - 0x334));
    ebx = eax;
    strlen (edx);
    eax = ebx + eax + 0x20;
    eax &= 0xfffffff0;
    eax = *((ebp - 0x334));
    ecx = esp + 0x2f;
    ecx &= 0xfffffff0;
    ebx = ecx;
    edx = *(eax);
    if (dl == 0x2e) {
        goto label_70;
    }
    eax = ecx;
    if (dl == 0) {
        goto label_29;
    }
label_28:
    eax = ecx;
    ecx = *((ebp - 0x334));
    do {
        ecx++;
        *(eax) = dl;
        edx = *(ecx);
        eax++;
    } while (dl != 0);
    if (*((ebp - 0x334)) < ecx) {
        if (*((ecx - 1)) == 0x2f) {
            goto label_29;
        }
        *(eax) = 0x2f;
        eax++;
    }
label_29:
    ecx = *((ebp - 0x330));
    edx = *(ecx);
    if (dl == 0) {
        goto label_71;
    }
    do {
        ecx++;
        *(eax) = dl;
        edx = *(ecx);
        eax++;
    } while (dl != 0);
label_71:
    *(eax) = 0;
    goto label_13;
label_51:
    *(0x8062cd4) = eax;
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        goto label_14;
    }
label_52:
    eax = ebp - 0x31;
    eax = *((ebp - 0x32c));
    eax = *((eax + 0x1c));
    eax = fcn_08054c60 (eax, 0, eax);
    eax = strlen (eax);
    if (eax > *(0x8062cc4)) {
        *(0x8062cc4) = eax;
    }
    edx = *((ebp - 0x32c));
    eax = *((edx + 0x18));
    eax &= 0xf000;
    if (eax == 0x6000) {
        goto label_72;
    }
    if (eax == 0x2000) {
        goto label_72;
    }
    eax = *(0x80622a0);
    ecx = *((ebp - 0x32c));
    edx = imp._Jv_RegisterClasses;
    eax = imp._Jv_RegisterClasses;
    eax = ebp - 0x2bd;
    eax = *((ecx + 0x34));
    edx = *((ecx + 0x38));
    eax = fcn_08053850 (1, edx, eax);
    eax = fcn_08055350 (eax, 0);
    if (eax <= *(0x8062ce0)) {
        goto label_14;
    }
    *(0x8062ce0) = eax;
    goto label_14;
label_69:
    if (eax == 0x5f) {
        goto label_15;
    }
    eax = *((ebp - 0x32c));
    *((eax + 0x78)) = 0;
label_65:
    eax = fcn_08056980 (ebx);
    esi = eax;
    eax = errno_location ();
    *((esp + 0xc)) = esi;
    eax = *(eax);
    error (0, eax, 0x805a1bf);
    goto label_6;
label_57:
    esi = 0;
    edi = 0;
    if (*(0x8062454) == 0) {
        goto label_2;
    }
    goto label_16;
label_62:
    edx = *((ebp - 0x334));
    *((ebp - 0x340)) = cl;
    eax = fcn_08051aa0 (ebx, edx);
    ecx = *((ebp - 0x340));
    edx = eax;
    edx >>= 0x1f;
    al = (eax > 0) ? 1 : 0;
    goto label_17;
label_56:
    if (*(0x806235c) == 0) {
        goto label_18;
    }
    eax = 0x13;
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_4;
    }
    eax = 0x12;
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_4;
    }
    eax = 0x14;
    al = fcn_0804bf90 ();
    if (al == 0) {
        goto label_18;
    }
    goto label_4;
label_72:
    ecx = *((ebp - 0x32c));
    edx = *((ecx + 0x2c));
    eax = *((ecx + 0x28));
    ecx = ebp - 0x2bd;
    ecx = edx;
    __asm ("shrd eax, edx, 8");
    ecx &= 0xfffff000;
    eax &= 0xfff;
    ecx |= eax;
    eax = fcn_08054c60 (ecx, 0, ecx);
    eax = strlen (eax);
    if (eax > *(0x8062cd8)) {
        *(0x8062cd8) = eax;
    }
    eax = *((ebp - 0x32c));
    edx = ebp - 0x2bd;
    ecx = *((eax + 0x28));
    ebx = *((eax + 0x2c));
    eax = ecx;
    edx = (int32_t) cl;
    __asm ("shrd eax, ebx, 0xc");
    al = 0;
    eax |= edx;
    eax = fcn_08054c60 (eax, 0, edx);
    eax = strlen (eax);
    edx = eax;
    eax = imp._Jv_RegisterClasses;
    if (edx > eax) {
        *(0x8062cdc) = edx;
        eax = edx;
    }
    edx = imp._Jv_RegisterClasses;
    eax = eax + edx + 2;
    if (eax <= *(0x8062ce0)) {
        goto label_14;
    }
    *(0x8062ce0) = eax;
    eax = *(0x80624ee);
    goto label_19;
label_45:
    ecx = imp._Jv_RegisterClasses;
    if (ecx == 0) {
        goto label_73;
    }
    if (*(0x8062364) != 0) {
        goto label_73;
    }
label_23:
    eax = *((ebp - 0x32c));
    *((eax + 0x75)) = 1;
    eax = edx;
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_20;
    }
label_22:
    edx = *((ebp - 0x32c));
    *((edx + 0x68)) = 6;
    goto label_21;
label_46:
    if (*((ebp - 0x339)) != 0) {
        if (*(0x8062404) != 0) {
            goto label_74;
        }
        ecx = *((ebp - 0x32c));
        *((ecx + 0x68)) = 9;
        goto label_21;
    }
label_74:
    eax = *((ebp - 0x32c));
    *((eax + 0x68)) = 3;
    goto label_21;
label_73:
    edx = *((ebp - 0x32c));
    eax = *((edx + 0x34));
    eax = fcn_08051b00 (ebx, eax);
    ecx = *((ebp - 0x32c));
    esi = eax;
    *((ecx + 4)) = eax;
    if (eax == 0) {
        goto label_75;
    }
label_36:
    if (*(esi) == 0x2f) {
        goto label_76;
    }
    eax = strrchr (ebx, 0x2f);
    if (eax == 0) {
        goto label_76;
    }
    edi = eax;
    edi -= ebx;
    edx = edi + 1;
    *((ebp - 0x338)) = edx;
    strlen (esi);
    eax = edi + eax + 2;
    eax = fcn_08058a70 (eax);
    ecx = *((ebp - 0x338));
    edi = eax;
    strncpy (eax, ebx, ecx);
    eax = *((ebp - 0x338));
    eax += edi;
    strcpy (eax, esi);
label_35:
    if (edi != 0) {
        if (*(0x8062408) <= 1) {
            goto label_77;
        }
label_32:
        eax = ebp - 0x320;
        *((esp + 8)) = eax;
        *((esp + 4)) = edi;
        *(esp) = 3;
        eax = xstat64 ();
        if (eax != 0) {
            goto label_31;
        }
        eax = *((ebp - 0x32c));
        *((eax + 0x75)) = 1;
        eax = *((ebp - 0x310));
        if (*((ebp - 0x339)) != 0) {
            edx = imp._Jv_RegisterClasses;
            if (edx == 0) {
                goto label_78;
            }
            edx = eax;
            edx &= 0xf000;
            if (edx == 0x4000) {
                goto label_31;
            }
        }
label_78:
        edx = *((ebp - 0x32c));
        *((edx + 0x6c)) = eax;
    }
label_31:
    free (edi);
    ecx = *((ebp - 0x32c));
    edx = *((ecx + 0x18));
    eax = *((ecx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_20;
    }
    if (*(0x8062364) != 0) {
        goto label_22;
    }
    goto label_23;
label_39:
    *(edi) = 0;
    edx -= 2;
    edi += 2;
    goto label_24;
label_38:
    *(edi) = 0;
    dl = 0x7f;
    edi++;
    goto label_25;
label_47:
    edx = *((ebp - 0x32c));
    eax = *((edx + 0x20));
    eax = fcn_0804d660 ();
    if (eax <= *(0x8062cc8)) {
        goto label_26;
    }
    *(0x8062cc8) = eax;
    goto label_26;
label_50:
    edx = *((ebp - 0x32c));
    eax = *((edx + 0x20));
    eax = fcn_0804d660 ();
    if (eax <= *(0x8062cd0)) {
        goto label_27;
    }
    *(0x8062cd0) = eax;
    goto label_27;
label_70:
    if (*((eax + 1)) != 0) {
        goto label_28;
    }
    eax = ecx;
    goto label_29;
label_68:
    *((ebp - 0x340)) = eax;
    eax = errno_location ();
    edx = *((ebp - 0x340));
    al = (*(eax) == 2) ? 1 : 0;
    goto label_30;
label_77:
    if (*(0x8062364) == 0) {
        goto label_31;
    }
    goto label_32;
label_48:
    eax = fcn_080549f0 (ebx);
    if (eax == 0) {
        goto label_33;
    }
    eax = fcn_08055350 (eax, 0);
    edx = eax;
    eax = 0;
    __asm ("cmovns eax, edx");
    goto label_34;
label_76:
    eax = fcn_08058bd0 (esi);
    edi = eax;
    goto label_35;
label_75:
    *((esp + 8)) = 5;
    edi = 0;
    eax = dcgettext (0, 0x805a0d6);
    ecx = ebx;
    edx = eax;
    eax = *((ebp - 0x339));
    fcn_0804d570 ();
    eax = *((ebp - 0x32c));
    esi = *((eax + 4));
    if (esi != 0) {
        goto label_36;
    }
    goto label_31;
label_54:
    stack_chk_fail ();
label_67:
    fcn_08058c00 ();
label_59:
    esi = 0;
    edi = 0;
    goto label_2;
label_66:
    ecx = 0;
    esi = 0;
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80536d0 */
#include <stdint.h>
 
uint32_t fcn_080536d0 (int32_t arg_30h, int32_t arg_34h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_1ch;
    eax = esp + 0x1c;
    ebx = *((esp + 0x34));
    eax = *((esp + 0x30));
    eax = fcn_080534f0 (eax, ebx, eax);
    if (eax == -1) {
        goto label_0;
    }
    ebx = *((esp + 0x1c));
    while (1) {
        eax = ebx;
        return eax;
label_0:
        ebx = 0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80534f0 */
#include <stdint.h>
 
int32_t fcn_080534f0 (int32_t arg_40h, int32_t arg_44h, int32_t arg_48h) {
    int32_t var_4h;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_1ch;
    int32_t var_1eh;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    *((esp + 0x38)) = edi;
    edi = *((esp + 0x44));
    *((esp + 0x30)) = ebx;
    ebx = *((esp + 0x48));
    *((esp + 0x34)) = esi;
    esi = *((esp + 0x40));
    if (edi == 0) {
        goto label_3;
    }
    edx = edi;
    eax = esi;
    ecx = esp + 0x2c;
    eax = fcn_08052950 (0);
    edx = eax;
    if (eax != 0) {
        eax = 0;
        if (ebx != 0) {
            *(ebx) = edx;
        }
label_1:
        ebx = *((esp + 0x30));
        esi = *((esp + 0x34));
        edi = *((esp + 0x38));
        return eax;
    }
    eax = *((esi + 0xc));
    edx = 0;
    *((esp + 0x14)) = edx;
    edx = 0;
    *((esp + 0x10)) = eax;
    eax = *((esi + 8));
    ecx = *((esi + 0x14));
    *(fp_stack--) = *((esp + 0x10));
    *((esp + 0x14)) = edx;
    *((esp + 0x10)) = eax;
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] *= *((ecx + 8));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    if (fp_stack[0] <= fp_stack[1]) {
        goto label_0;
    }
    while (fp_stack[0] <= fp_stack[1]) {
        fp_stack++;
        fp_stack++;
label_0:
        ebx = *((esp + 0x2c));
        eax = *(ebx);
        if (eax == 0) {
            goto label_4;
        }
        edx = *((esi + 0x24));
        if (edx == 0) {
            goto label_5;
        }
        eax = *((edx + 4));
        *((esi + 0x24)) = eax;
label_2:
        eax = *((ebx + 4));
        *(edx) = edi;
        edi = *((esp + 0x38));
        *((edx + 4)) = eax;
        eax = 1;
        *((ebx + 4)) = edx;
        ebx = *((esp + 0x30));
        *((esi + 0x10))++;
        esi = *((esp + 0x34));
        return eax;
        eax = esi + 0x14;
        fcn_08052b60 ();
        ecx = *((esi + 0x14));
        edx = 0;
        eax = *((esi + 8));
        *(fp_stack--) = *((ecx + 8));
        *((esp + 0x14)) = edx;
        edx = 0;
        *((esp + 0x10)) = eax;
        eax = *((esi + 0xc));
        *(fp_stack--) = *((esp + 0x10));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = eax;
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack--;
        fp_stack++;
    }
    fp_stack[0] *= *((ecx + 0xc));
    if (*((ecx + 0x10)) == 0) {
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
    } else {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x805d42c);
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if (fp_stack[0] >= fp_stack[1]) {
        goto label_6;
    }
    *(esp) = esi;
    eax = *((esp + 0x1e));
    ah = 0xc;
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x10));
    al = fcn_08053370 (ax, eax);
    if (al == 0) {
        goto label_7;
    }
    ecx = esp + 0x2c;
    edx = edi;
    eax = esi;
    eax = fcn_08052950 (0);
    if (eax == 0) {
        goto label_0;
    }
label_3:
    abort ();
label_4:
    *(ebx) = edi;
    eax = 1;
    *((esi + 0x10))++;
    *((esi + 0xc))++;
    goto label_1;
label_5:
    eax = malloc (8);
    edx = eax;
    eax = 0xffffffff;
    if (edx != 0) {
        goto label_2;
    }
    goto label_1;
label_6:
    fp_stack++;
label_7:
    eax = 0xffffffff;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052950 */
#include <stdint.h>
 
uint32_t fcn_08052950 (int32_t arg_40h) {
    int32_t var_4h;
    uint32_t var_1fh;
    edi = ecx;
    esi = eax;
    ebx = edx;
    eax = *((esp + 0x40));
    *((esp + 0x1f)) = al;
    eax = esi;
    eax = fcn_08052920 ();
    *(edi) = eax;
    eax = *(eax);
    if (eax == 0) {
        goto label_0;
    }
    if (ebx == eax) {
        goto label_2;
    }
    al = uint32_t (*esi + 0x1c)(uint32_t, uint32_t) (ebx, eax);
    if (al != 0) {
        goto label_3;
    }
    edx = *((ebp + 4));
    eax = 0;
    if (edx != 0) {
        goto label_4;
    }
    goto label_0;
    do {
        al = uint32_t (*esi + 0x1c)(uint32_t, uint32_t) (ebx, eax);
        if (al != 0) {
            goto label_5;
        }
        ebp = *((ebp + 4));
        edx = *((ebp + 4));
        if (edx == 0) {
            goto label_6;
        }
label_4:
        eax = *(edx);
    } while (eax != ebx);
    if (*((esp + 0x1f)) == 0) {
        goto label_0;
    }
label_1:
    ecx = *((edx + 4));
    *((ebp + 4)) = ecx;
    *(edx) = 0;
    ecx = *((esi + 0x24));
    *((edx + 4)) = ecx;
    *((esi + 0x24)) = edx;
    do {
label_0:
        return eax;
label_3:
        eax = *(ebp);
label_2:
    } while (*((esp + 0x1f)) == 0);
    edx = *((ebp + 4));
    if (edx == 0) {
        goto label_7;
    }
    ecx = *(edx);
    ebx = *((edx + 4));
    *(ebp) = ecx;
    *((ebp + 4)) = ebx;
    *(edx) = 0;
    ecx = *((esi + 0x24));
    *((edx + 4)) = ecx;
    *((esi + 0x24)) = edx;
    return eax;
label_5:
    edx = *((ebp + 4));
    eax = *(edx);
    if (*((esp + 0x1f)) == 0) {
        goto label_0;
    }
    goto label_1;
label_6:
    eax = 0;
    return eax;
label_7:
    *(ebp) = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052b60 */
#include <stdint.h>
 
int32_t fcn_08052b60 (void) {
    edx = *(eax);
    ecx = 1;
    if (edx != 0x805d40c) {
        *(fp_stack--) = *((edx + 8));
        *(fp_stack--) = *(0x805d420);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        if (fp_stack[0] > fp_stack[1]) {
            *(fp_stack--) = *(0x805d424);
            fp_stack--;
            if (fp_stack[0] > fp_stack[1]) {
                *(fp_stack--) = *((edx + 0xc));
                *(fp_stack--) = *(0x805d428);
                fp_tmp_1 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_1;
                fp_stack--;
                fp_stack++;
                if (fp_stack[0] > fp_stack[1]) {
                    *(fp_stack--) = *(edx);
                    *(fp_stack--) = 0.0;
                    fp_tmp_2 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_2;
                    fp_stack[1] = fp_stack[0];
                    fp_stack--;
                    if (fp_stack[0] >= fp_stack[1]) {
                        fp_stack[0] += fp_stack[2];
                        fp_stack++;
                        *(fp_stack--) = *((edx + 4));
                        if (fp_stack[0] > fp_stack[2]) {
                            *(fp_stack--) = 1.0;
                            fp_stack--;
                            fp_stack++;
                            if (fp_stack[0] >= fp_stack[1]) {
                                fp_stack--;
                                fp_stack++;
                                if (fp_stack[0] <= fp_stack[1]) {
                                    goto label_0;
                                }
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                                fp_stack++;
                            } else {
                            } else {
                            } else {
                            } else {
                            } else {
                            } else {
                                fp_stack++;
                                fp_stack++;
                            }
                        }
                    }
                }
            }
label_0:
            *(eax) = 0x805d40c;
            ecx = 0;
        }
    }
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8053370 */
#include <stdint.h>
 
int32_t fcn_08053370 (int32_t arg_50h, int32_t arg_54h) {
    size_t size;
    void * ptr;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    int32_t var_40h;
    void * var_44h;
    void * var_48h;
    *((esp + 0x40)) = ebx;
    ebx = *((esp + 0x50));
    *((esp + 0x44)) = esi;
    *((esp + 0x48)) = edi;
    esi = *((ebx + 0x14));
    eax = *((esi + 8));
    edx = *((esi + 0x10));
    *(esp) = eax;
    eax = *((esp + 0x54));
    eax = fcn_08052c10 ();
    edi = eax;
    if (eax != 0) {
        if (*((ebx + 8)) != eax) {
            eax = calloc (eax, 8);
            *((esp + 0x18)) = eax;
            if (eax == 0) {
                goto label_0;
            }
            eax = eax + edi*8;
            ecx = 0;
            *((esp + 0x1c)) = eax;
            eax = *((ebx + 0x18));
            edx = ebx;
            *((esp + 0x20)) = edi;
            *((esp + 0x24)) = 0;
            *((esp + 0x28)) = 0;
            *((esp + 0x30)) = eax;
            eax = *((ebx + 0x1c));
            *((esp + 0x2c)) = esi;
            *((esp + 0x34)) = eax;
            eax = *((ebx + 0x20));
            *((esp + 0x38)) = eax;
            eax = *((ebx + 0x24));
            *((esp + 0x3c)) = eax;
            eax = esp + 0x18;
            al = fcn_08052a50 ();
            if (al != 0) {
                goto label_1;
            }
            eax = *((esp + 0x3c));
            ecx = 1;
            edx = esp + 0x18;
            *((ebx + 0x24)) = eax;
            eax = ebx;
            al = fcn_08052a50 ();
            if (al == 0) {
                goto label_2;
            }
            ecx = 0;
            eax = ebx;
            edx = esp + 0x18;
            al = fcn_08052a50 ();
            if (al == 0) {
                goto label_2;
            }
            eax = *((esp + 0x18));
            eax = free (eax);
            eax = 0;
            ebx = *((esp + 0x40));
            esi = *((esp + 0x44));
            edi = *((esp + 0x48));
            return eax;
        }
        eax = 1;
        ebx = *((esp + 0x40));
        esi = *((esp + 0x44));
        edi = *((esp + 0x48));
        return eax;
    }
label_0:
    eax = 0;
    ebx = *((esp + 0x40));
    esi = *((esp + 0x44));
    edi = *((esp + 0x48));
    return eax;
label_1:
    eax = *(ebx);
    free (eax);
    eax = *((esp + 0x18));
    esi = *((esp + 0x44));
    edi = *((esp + 0x48));
    *(ebx) = eax;
    eax = *((esp + 0x1c));
    *((ebx + 4)) = eax;
    eax = *((esp + 0x20));
    *((ebx + 8)) = eax;
    eax = *((esp + 0x24));
    *((ebx + 0xc)) = eax;
    eax = *((esp + 0x3c));
    *((ebx + 0x24)) = eax;
    eax = 1;
    ebx = *((esp + 0x40));
    return eax;
label_2:
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052c10 */
#include <stdint.h>
 
uint32_t fcn_08052c10 (void) {
    int32_t var_4h;
    int32_t var_ch;
    int32_t var_eh;
    edi = eax;
    if (dl == 0) {
        edx = 0;
        edi = 0;
        *(esp) = eax;
        *((esp + 4)) = edx;
        *(fp_stack--) = *(esp);
        fp_stack[0] /= *((esp + 0x28));
        *(fp_stack--) = *(0x805d42c);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        if (fp_stack[0] >= fp_stack[1]) {
            goto label_4;
        }
        eax = *((esp + 0xe));
        ah = 0xc;
        *((esp + 0xc)) = ax;
        *(esp) = fp_stack[0];
        fp_stack--;
        edi = *(esp);
    }
    if (edi > 9) {
        goto label_5;
    }
    edi = 0xb;
label_1:
label_0:
    if (edi <= 9) {
        goto label_6;
    }
    eax = edi;
    edx:eax = eax * ebp;
    edx >>= 1;
    eax = edx * 3;
    if (edi == eax) {
        goto label_7;
    }
    esi = 0x10;
    ebx = 9;
    ecx = 3;
    while (ebx < edi) {
        edx = 0;
        eax = edi;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        esi += 8;
        if (edx == 0) {
            goto label_7;
        }
        ebx += esi;
        ecx += 2;
    }
label_3:
    edx = 0;
    eax = edi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    if (edx != 0) {
        goto label_8;
    }
label_7:
    edi += 2;
    if (edi != -1) {
        goto label_0;
    }
    edi = 0;
    goto label_2;
label_4:
    fp_stack++;
label_2:
    eax = edi;
    return eax;
label_5:
    edi |= 1;
    if (edi != -1) {
        goto label_1;
    }
    edi = 0;
    goto label_2;
label_8:
    eax = 0;
    if (edi >= 0x40000000) {
        edi = eax;
    }
    eax = edi;
    return eax;
label_6:
    ecx = 3;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052a50 */
#include <stdint.h>
 
int32_t fcn_08052a50 (void) {
    int32_t var_18h;
    uint32_t var_1fh;
    ebx = eax;
    ebp = *(edx);
    eax = 1;
    *((esp + 0x18)) = edx;
    *((esp + 0x1f)) = cl;
    if (ebp >= *((edx + 4))) {
        goto label_5;
    }
label_1:
    edi = *(ebp);
    if (edi == 0) {
        goto label_6;
    }
    esi = *((ebp + 4));
    if (esi != 0) {
        goto label_7;
    }
    goto label_8;
    do {
        ecx = *((eax + 4));
        *((esi + 4)) = ecx;
        *((eax + 4)) = esi;
        if (edx == 0) {
            goto label_9;
        }
label_0:
        esi = edx;
label_7:
        edi = *(esi);
        eax = ebx;
        edx = edi;
        eax = fcn_08052920 ();
        edx = *((esi + 4));
        ecx = *(eax);
    } while (ecx != 0);
    *(eax) = edi;
    *((ebx + 0xc))++;
    *(esi) = 0;
    eax = *((ebx + 0x24));
    *((esi + 4)) = eax;
    *((ebx + 0x24)) = esi;
    if (edx != 0) {
        goto label_0;
    }
label_9:
    edi = *(ebp);
label_8:
    *((ebp + 4)) = 0;
    if (*((esp + 0x1f)) == 0) {
        goto label_10;
    }
label_6:
    edx = *((esp + 0x18));
    ebp += 8;
    if (*((edx + 4)) > ebp) {
        goto label_1;
    }
label_2:
    eax = 1;
label_5:
    return eax;
label_10:
    edx = edi;
    eax = ebx;
    eax = fcn_08052920 ();
    ecx = *(eax);
    esi = eax;
    if (ecx == 0) {
        goto label_11;
    }
    eax = *((ebx + 0x24));
    if (eax == 0) {
        goto label_12;
    }
    edx = *((eax + 4));
    *((ebx + 0x24)) = edx;
label_4:
    edx = *((esi + 4));
    *(eax) = edi;
    *((eax + 4)) = edx;
    *((esi + 4)) = eax;
label_3:
    edx = *((esp + 0x18));
    *(ebp) = 0;
    ebp += 8;
    *((edx + 0xc))--;
    edx = *((esp + 0x18));
    if (*((edx + 4)) > ebp) {
        goto label_1;
    }
    goto label_2;
label_11:
    *(eax) = edi;
    *((ebx + 0xc))++;
    goto label_3;
label_12:
    eax = malloc (8);
    if (eax != 0) {
        goto label_4;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804cbf0 */
#include <stdint.h>
 
int32_t fcn_0804cbf0 (int32_t arg_8h, int32_t arg_10h, int32_t arg_23h) {
    int32_t var_2040h;
    int32_t var_203ch;
    int32_t var_2038h;
    uint32_t var_2034h;
    uint32_t var_2030h;
    uint32_t var_202ch;
    wchar_t * pwc;
    int32_t var_2024h;
    mbstate_t * var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_bp_ch;
    char * s;
    size_t n;
    mbstate_t * ps;
    esi = ecx;
    *((ebp - 0x203c)) = eax;
    eax = *((ebp + 8));
    ebx = ebp - 0x2024;
    *((ebp - 0x2040)) = edx;
    *((ebp - 0x2038)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0x1c)) = eax;
    eax = 0;
    eax = fcn_08056510 (ecx, 0x2000, edx);
    edx = *((ebp - 0x2040));
    *((ebp - 0x2034)) = ebx;
    edi = eax;
    if (eax > 0x1fff) {
        goto label_7;
    }
label_3:
    if (*(0x80624e4) != 0) {
        goto label_8;
    }
    esi = *((ebp - 0x2038));
    if (esi == 0) {
        goto label_2;
    }
    eax = ctype_get_mb_cur_max ();
    if (eax <= 1) {
        goto label_9;
    }
    edx = *((ebp - 0x2034));
    eax = fcn_08055160 (edx, edi, 0);
    *((ebp - 0x202c)) = eax;
    do {
label_2:
        ebx = *((ebp - 0x203c));
        if (ebx != 0) {
            eax = *((ebp - 0x203c));
            edx = *((ebp - 0x2034));
            *((esp + 8)) = edi;
            *((esp + 4)) = 1;
            *((esp + 0xc)) = eax;
            *(esp) = edx;
            fwrite_unlocked ();
        }
        ecx = *((ebp - 0x2038));
        if (ecx != 0) {
            eax = *((ebp - 0x202c));
            edx = *((ebp - 0x2038));
            *(edx) = eax;
        }
        edx = *((ebp - 0x1c));
        edx ^= *(gs:0x14);
        eax = edi;
        if (ecx != 0) {
            goto label_10;
        }
        esp = ebp - 0xc;
        return eax;
label_8:
        eax = ctype_get_mb_cur_max ();
        if (eax <= 1) {
            goto label_11;
        }
        edi += *((ebp - 0x2034));
        *((ebp - 0x202c)) = 0;
        *((ebp - 0x2030)) = edi;
        edx = *((ebp - 0x2030));
        edi = 0;
    } while (*((ebp - 0x2034)) >= edx);
    edi = *((ebp - 0x2034));
    esi = *((ebp - 0x2034));
label_1:
    eax = *(esi);
    if (al > 0x5f) {
        goto label_12;
    }
    if (al >= 0x41) {
        goto label_13;
    }
    if (al >= 0x20) {
        if (al <= 0x23) {
            goto label_13;
        }
        edx = eax - 0x25;
        if (dl <= 0x1a) {
            goto label_13;
        }
    }
label_5:
    *((ebp - 0x24)) = 0;
    *((ebp - 0x20)) = 0;
label_0:
    eax = ebp - 0x24;
    eax = *((ebp - 0x2030));
    edx = ebp - 0x2028;
    eax -= esi;
    eax = mbrtowc (eax, esi, eax);
    ebx = eax;
    if (eax == -1) {
        goto label_14;
    }
    if (eax == 0xfffffffe) {
        goto label_15;
    }
    eax = 1;
    if (eax == 0) {
        ebx = eax;
    }
    eax = *((ebp - 0x2028));
    *(esp) = eax;
    eax = wcwidth ();
    if (eax < 0) {
        goto label_16;
    }
    edx = 0;
    do {
        ecx = *((esi + edx));
        *((edi + edx)) = cl;
        edx++;
    } while (ebx != edx);
    *((ebp - 0x202c)) += eax;
    edi += ebx;
    esi += ebx;
label_4:
    edx = ebp - 0x24;
    eax = mbsinit (edx);
    if (eax == 0) {
        goto label_0;
    }
label_6:
    if (esi < *((ebp - 0x2030))) {
        goto label_1;
    }
    edi -= *((ebp - 0x2034));
    goto label_2;
label_7:
    ecx = eax + 1;
    eax = eax + 0x1f;
    eax &= 0xfffffff0;
    eax = esp + 0x23;
    eax &= 0xfffffff0;
    *((ebp - 0x2034)) = eax;
    fcn_08056510 (esi, ecx, edx);
    goto label_3;
label_9:
    ebx = *((ebp - 0x2034));
    *((ebp - 0x202c)) = 0;
    ebx += edi;
    if (*((ebp - 0x2034)) >= ebx) {
        goto label_2;
    }
    eax = ctype_b_loc ();
    esi = 0;
    ecx = *(eax);
    eax = *((ebp - 0x2034));
    do {
        edx = *(eax);
        edx = *((ecx + edx*2));
        edx &= 0x4000;
        esi -= 0xffffffff;
        eax++;
    } while (eax != ebx);
    *((ebp - 0x202c)) = esi;
    goto label_2;
label_16:
    *(edi) = 0x3f;
    esi += ebx;
    edi++;
    *((ebp - 0x202c))++;
    goto label_4;
label_12:
    edx = eax - 0x61;
    if (dl > 0x1d) {
        goto label_5;
    }
label_13:
    *(edi) = al;
    esi++;
    edi++;
    *((ebp - 0x202c))++;
    goto label_6;
label_14:
    *(edi) = 0x3f;
    esi++;
    edi++;
    *((ebp - 0x202c))++;
    goto label_6;
label_15:
    *(edi) = 0x3f;
    edi++;
    *((ebp - 0x202c))++;
    edi -= *((ebp - 0x2034));
    goto label_2;
label_11:
    esi = *((ebp - 0x2034));
    *((ebp - 0x202c)) = edi;
    esi += edi;
    if (*((ebp - 0x2034)) >= esi) {
        goto label_2;
    }
    eax = ctype_b_loc ();
    edx = *((ebp - 0x2034));
    do {
        ebx = *(edx);
        ecx = *(eax);
        if ((*((ecx + ebx*2 + 1)) & 0x40) == 0) {
            *(edx) = 0x3f;
        }
        edx++;
    } while (edx != esi);
    *((ebp - 0x202c)) = edi;
    goto label_2;
label_10:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c3f0 */
#include <stdint.h>
 
int32_t fcn_0804c3f0 (void) {
    char * file;
    uint32_t line;
    char * function;
    ebx = imp._Jv_RegisterClasses;
    eax = imp._Jv_RegisterClasses;
    eax >>= 1;
    eax += ebx;
    if (eax > *(0x8062ce4)) {
        goto label_1;
    }
label_0:
    if (ebx == 0) {
        goto label_2;
    }
    ecx = imp._Jv_RegisterClasses;
    eax = 0;
    edx = imp._Jv_RegisterClasses;
    do {
        *((ecx + eax*4)) = edx;
        eax++;
        edx -= 0xffffff80;
    } while (eax != ebx);
label_2:
    if (*(0x806244c) == -1) {
        goto label_3;
    }
    eax = setjmp (0x8062d00);
    esi = imp._Jv_RegisterClasses;
    if (eax == 0) {
        goto label_4;
    }
    if (esi == 3) {
        goto label_5;
    }
    ecx = imp._Jv_RegisterClasses;
    eax = 0;
    ebx = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    if (ecx == 0) {
        goto label_6;
    }
    do {
        *((ebx + eax*4)) = edx;
        eax++;
        edx -= 0xffffff80;
    } while (eax != ecx);
label_6:
    edx = 1;
    goto label_7;
label_4:
    ecx = imp._Jv_RegisterClasses;
    edx = 0;
    ebx = imp._Jv_RegisterClasses;
label_7:
    eax = 0;
    if (esi == 4) {
        eax = imp._Jv_RegisterClasses;
    }
    eax += esi;
    edx = edx + eax*2;
    eax = *(0x80624ec);
    edx = eax + edx*2;
    eax = *(0x8062453);
    eax = eax + edx*2;
    eax = *((eax*4 + 0x805b1c0));
    fcn_080555b0 (ebx, ecx, eax);
label_3:
    return eax;
label_1:
    eax = imp._Jv_RegisterClasses;
    free (eax);
    if (ebx <= 0x15555555) {
        eax = ebx * 3;
        eax <<= 2;
        eax = fcn_08058a70 (eax);
        ebx = imp._Jv_RegisterClasses;
        *(0x8062cb4) = eax;
        eax = ebx * 3;
        *(0x8062ce4) = eax;
        goto label_0;
label_5:
        assert_fail (0x805b1a4, 0x805a06b, 0xd63);
    }
    return fcn_08058c00 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804fa80 */
#include <stdint.h>
 
int32_t fcn_0804fa80 (void) {
    int32_t var_4h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    uint32_t var_2ch;
    if (*(0x8062360) > 4) {
        goto label_4;
    }
    eax = imp._Jv_RegisterClasses;
    /* switch table (5 cases) at 0x805a860 */
    do {
label_0:
        eax = stdout;
        edx = *((eax + 0x14));
        if (edx >= *((eax + 0x18))) {
            goto label_10;
        }
        *(edx) = 0xa;
        edx++;
        *((eax + 0x14)) = edx;
label_4:
        return eax;
        eax = 0;
        eax = fcn_0804f7e0 ();
        ecx = imp._Jv_RegisterClasses;
        *((esp + 0x18)) = eax;
        ebp = eax * 3;
        eax = imp._Jv_RegisterClasses;
        ebp = ecx + ebp*4;
        ebx = *(eax);
        eax = *(eax);
        eax = fcn_0804d3f0 ();
        edx = 0;
        edi = eax;
        eax = *((ebp + 8));
        esi = *(eax);
        eax = ebx;
        fcn_0804df70 ();
    } while (*(0x80624d4) <= 1);
    ecx = 0;
    ebx = 1;
    *((esp + 0x1c)) = ebp;
    ecx = esi;
    goto label_11;
label_1:
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_12;
    }
    *(edx) = 0xa;
    edx++;
    ebp = 0;
    *((eax + 0x14)) = edx;
label_2:
    eax = imp._Jv_RegisterClasses;
    edx = ebp;
    edi = *((eax + ebx*4));
    ebx++;
    eax = edi;
    fcn_0804df70 ();
    eax = edi;
    eax = fcn_0804d3f0 ();
    edx = *((esp + 0x1c));
    edi = eax;
    eax = *((edx + 8));
    ecx = *((eax + esi*4));
    if (ebx >= *(0x80624d4)) {
        goto label_0;
    }
label_11:
    edx = 0;
    eax = ebx;
    eax = *(edx:eax) / esp + 0x18;
    edx = *(edx:eax) % esp + 0x18;
    esi = edx;
    if (edx == 0) {
        goto label_1;
    }
    ecx += ebp;
    eax = edi + ebp;
    edx = ecx;
    *((esp + 0x14)) = ecx;
    fcn_0804c970 ();
    ecx = *((esp + 0x14));
    goto label_2;
    ebp = imp._Jv_RegisterClasses;
    if (ebp == 0) {
        goto label_0;
    }
    eax = imp._Jv_RegisterClasses;
    esi = 0;
    ebx = 0;
    edi = *(eax);
    eax = *(eax);
    eax = fcn_0804d3f0 ();
    *((esp + 0x18)) = eax;
label_3:
    edx = ebx;
    eax = edi;
    fcn_0804df70 ();
    esi++;
    if (esi >= *(0x80624d4)) {
        goto label_0;
    }
    eax = imp._Jv_RegisterClasses;
    ebx += *((esp + 0x18));
    edi = *((eax + esi*4));
    eax = *((eax + esi*4));
    eax = fcn_0804d3f0 ();
    *((esp + 0x18)) = eax;
    if (esi == 0) {
        goto label_3;
    }
    ebx += 2;
    eax += ebx;
    ebp -= ebp;
    ebp &= 0x16;
    ebp += 0xa;
    edx -= edx;
    edx &= 0x16;
    edx += 0xa;
    eax = 0;
    if (eax >= *(0x8062508)) {
        ebx = eax;
    }
    eax = stdout;
    ecx = *((eax + 0x14));
    if (ecx >= *((eax + 0x18))) {
        goto label_13;
    }
    *(ecx) = 0x2c;
    ecx++;
    *((eax + 0x14)) = ecx;
label_9:
    eax = stdout;
    ecx = *((eax + 0x14));
    if (ecx >= *((eax + 0x18))) {
        goto label_14;
    }
    *(ecx) = dl;
    ecx++;
    *((eax + 0x14)) = ecx;
    goto label_3;
    esi = imp._Jv_RegisterClasses;
    ebx = 0;
    if (esi == 0) {
        goto label_4;
    }
    do {
        fcn_0804df20 ();
        eax = imp._Jv_RegisterClasses;
        eax = *((eax + ebx*4));
        fcn_0804e240 ();
        eax = stdout;
        edx = *((eax + 0x14));
        if (edx >= *((eax + 0x18))) {
            goto label_15;
        }
        *(edx) = 0xa;
        edx++;
        *((eax + 0x14)) = edx;
label_8:
        *(0x80624d8)++;
        ebx++;
    } while (*(0x80624d4) > ebx);
    return eax;
    edi = imp._Jv_RegisterClasses;
    ebx = 0;
    if (edi == 0) {
        goto label_4;
    }
    do {
        eax = imp._Jv_RegisterClasses;
        edx = 0;
        eax = *((eax + ebx*4));
        fcn_0804df70 ();
        eax = stdout;
        edx = *((eax + 0x14));
        if (edx >= *((eax + 0x18))) {
            goto label_16;
        }
        *(edx) = 0xa;
        edx++;
        *((eax + 0x14)) = edx;
label_7:
        ebx++;
    } while (*(0x80624d4) > ebx);
    return eax;
    eax = 1;
    eax = fcn_0804f7e0 ();
    edx = imp._Jv_RegisterClasses;
    *((esp + 0x2c)) = 0;
    ecx = eax;
    eax *= 3;
    eax <<= 2;
    eax += edx;
    edx = 0;
    *((esp + 0x24)) = eax;
    eax = imp._Jv_RegisterClasses;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    dl = (edx != 0) ? 1 : 0;
    edx = (int32_t) dl;
    edx += eax;
    *((esp + 0x20)) = edx;
    if (edx == 0) {
        goto label_4;
    }
    edx = *((esp + 0x20));
    edx <<= 2;
    *((esp + 0x28)) = edx;
label_5:
    edi = *((esp + 0x2c));
    ebp = 0;
    ebx = 0;
    esi = *((esp + 0x2c));
    edi <<= 2;
    while (esi < *(0x80624d4)) {
        ecx = *((esp + 0x1c));
        eax = *((esp + 0x18));
        ecx += ebx;
        eax += ebx;
        edx = ecx;
        *((esp + 0x14)) = ecx;
        fcn_0804c970 ();
        ecx = *((esp + 0x14));
        ebx = *((esp + 0x14));
        eax = imp._Jv_RegisterClasses;
        ecx = *((eax + edi));
        eax = *((eax + edi));
        *((esp + 0x14)) = ecx;
        eax = fcn_0804d3f0 ();
        edx = *((esp + 0x24));
        ecx = *((esp + 0x14));
        *((esp + 0x18)) = eax;
        eax = *((edx + 8));
        edx = ebx;
        eax = *((eax + ebp));
        ebp += 4;
        *((esp + 0x1c)) = eax;
        eax = ecx;
        fcn_0804df70 ();
        esi += *((esp + 0x20));
        edi += *((esp + 0x28));
    }
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_17;
    }
    *(edx) = 0xa;
    edx++;
    *((eax + 0x14)) = edx;
label_6:
    eax = *((esp + 0x20));
    if (*((esp + 0x2c)) != eax) {
        goto label_5;
    }
    return eax;
label_12:
    *((esp + 4)) = 0xa;
    ebp = 0;
    *(esp) = eax;
    eax = overflow ();
    goto label_2;
label_10:
    *((esp + 4)) = 0xa;
    *(esp) = eax;
    eax = overflow ();
    goto label_4;
label_17:
    *((esp + 4)) = 0xa;
    *(esp) = eax;
    eax = overflow ();
    goto label_6;
label_16:
    *((esp + 4)) = 0xa;
    *(esp) = eax;
    eax = overflow ();
    goto label_7;
label_15:
    *((esp + 4)) = 0xa;
    *(esp) = eax;
    eax = overflow ();
    goto label_8;
label_14:
    ebp &= 0xff;
    *((esp + 4)) = ebp;
    *(esp) = eax;
    eax = overflow ();
    goto label_3;
label_13:
    *((esp + 0x14)) = dl;
    *((esp + 4)) = 0x2c;
    *(esp) = eax;
    overflow ();
    edx = *((esp + 0x14));
    goto label_9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804f7e0 */
#include <stdint.h>
 
int32_t fcn_0804f7e0 (void) {
    int32_t var_4h;
    uint32_t var_18h;
    uint32_t var_1ch;
    int32_t var_20h;
    uint32_t var_27h;
    int32_t var_28h;
    int32_t var_2ch;
    ebp = imp._Jv_RegisterClasses;
    *((esp + 0x27)) = al;
    eax = imp._Jv_RegisterClasses;
    edx = ebp;
    if (eax <= ebp) {
        edx = eax;
    }
    *((esp + 0x1c)) = edx;
    if (edx <= *(0x8062da0)) {
        goto label_5;
    }
    edx = eax;
    edx >>= 1;
    if (*((esp + 0x1c)) < edx) {
        goto label_6;
    }
    edx = imp._Jv_RegisterClasses;
    if (eax > 0x15555555) {
        goto label_7;
    }
    eax *= 3;
    eax <<= 2;
    *((esp + 4)) = eax;
    *(esp) = edx;
    eax = fcn_08058aa0 ();
    ebx = imp._Jv_RegisterClasses;
    *(0x8062d9c) = eax;
label_4:
    eax = imp._Jv_RegisterClasses;
    ecx = ebx + eax + 1;
    if (ebx > ecx) {
        goto label_7;
    }
    edi = ebx;
    esi = ecx;
    edi -= eax;
    edx = 0;
    esi *= edi;
    eax = esi;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    if (ecx != eax) {
        goto label_7;
    }
    esi >>= 1;
    if (esi > 0x3fffffff) {
        goto label_7;
    }
    esi <<= 2;
    eax = fcn_08058a70 (esi);
    esi = imp._Jv_RegisterClasses;
    if (ebx <= esi) {
        goto label_8;
    }
    edx = imp._Jv_RegisterClasses;
    ecx = esi * 3;
    esi++;
    ecx = edx + ecx*4;
    ecx += 8;
    edx = esi*4;
    while (ebx > esi) {
        esi++;
        *(ecx) = eax;
        eax += edx;
        ecx += 0xc;
        edx += 4;
    }
label_8:
    ebp = imp._Jv_RegisterClasses;
    *(0x8062da0) = ebx;
label_5:
    eax = *((esp + 0x1c));
    if (eax == 0) {
        goto label_9;
    }
    *((esp + 0x18)) = ebp;
    ebx = imp._Jv_RegisterClasses;
    esi = 3;
    ebp = *((esp + 0x1c));
    edx = 0;
label_0:
    ecx = *((ebx + 8));
    edi = edx + 1;
    eax = 0;
    *(ebx) = 1;
    *((ebx + 4)) = esi;
    do {
        *((ecx + eax*4)) = 3;
        eax++;
    } while (edx >= eax);
    ebx += 0xc;
    esi += 3;
    if (edi != ebp) {
        edx = edi;
        goto label_0;
    }
    ebp = *((esp + 0x18));
label_9:
    if (ebp == 0) {
        goto label_10;
    }
    *((esp + 0x18)) = 0;
label_3:
    ebp = *((esp + 0x18));
    eax = imp._Jv_RegisterClasses;
    eax = *((eax + ebp*4));
    eax = fcn_0804d3f0 ();
    ebp = imp._Jv_RegisterClasses;
    *((esp + 0x2c)) = ebp;
    *((esp + 0x20)) = eax;
    eax = *((esp + 0x1c));
    if (eax == 0) {
        goto label_11;
    }
    ebp = imp._Jv_RegisterClasses;
    ecx = 1;
    ebx = imp._Jv_RegisterClasses;
    edi = *((esp + 0x2c));
    *((esp + 0x28)) = ebp;
    goto label_12;
label_1:
    eax = edi;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edx = 0;
    esi = eax;
    eax = *((esp + 0x18));
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    esi = eax;
label_2:
    eax = 0;
    ebp = *((esp + 0x20));
    al = (ebp != esi) ? 1 : 0;
    eax = ebp + eax*2;
    ebp = *((ebx + 8));
    esi = ebp + esi*4;
    edx = *(esi);
    if (eax <= edx) {
        goto label_13;
    }
    ebp -= edx;
    *((ebx + 4)) += ebp;
    ebp = *((esp + 0x28));
    *(esi) = eax;
    ebx = (*((ebx + 4)) < ebp) ? 1 : 0;
    do {
label_13:
        ebx += 0xc;
        edi++;
        eax = ecx + 1;
        if (*((esp + 0x1c)) <= ecx) {
            goto label_11;
        }
        ecx = eax;
label_12:
        ebp = ecx - 1;
    } while (*(ebx) == 0);
    if (*((esp + 0x27)) != 0) {
        goto label_1;
    }
    eax = *((esp + 0x18));
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = edx;
    goto label_2;
label_11:
    ebp = *((esp + 0x2c));
    if (*((esp + 0x18)) < ebp) {
        goto label_3;
    }
label_10:
    eax = *((esp + 0x1c));
    if (eax <= 1) {
        goto label_14;
    }
    edx = imp._Jv_RegisterClasses;
    ecx = eax * 3;
    if (*((edx + ecx*4)) != 0) {
        goto label_14;
    }
    ecx = eax * 3;
    edx = edx + ecx*4 - 0x18;
    while (eax != 1) {
        edx -= 0xc;
        if (*((edx + 0xc)) != 0) {
            goto label_14;
        }
        eax--;
    }
label_14:
    return eax;
label_6:
    eax = imp._Jv_RegisterClasses;
    if (*((esp + 0x1c)) <= 0xaaaaaaa) {
        ebx = *((esp + 0x1c));
        edx = *((esp + 0x1c));
        *(esp) = eax;
        ebx += ebx;
        edx += ebx;
        edx <<= 3;
        *((esp + 4)) = edx;
        eax = fcn_08058aa0 ();
        *(0x8062d9c) = eax;
        goto label_4;
    }
label_7:
    return fcn_08058c00 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d3f0 */
#include <stdint.h>
 
int32_t fcn_0804d3f0 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_2bch;
    esi = eax;
    ebx = 0;
    eax = *(gs:0x14);
    *((esp + 0x2bc)) = eax;
    eax = 0;
    if (*(0x80624ee) != 0) {
        ebx = imp._Jv_RegisterClasses;
        ebx++;
        if (*(0x8062360) == 4) {
            goto label_2;
        }
    }
label_1:
    if (*(0x8062451) != 0) {
        eax = imp._Jv_RegisterClasses;
        eax++;
        if (*(0x8062360) == 4) {
            goto label_3;
        }
label_0:
        ebx += eax;
    }
    if (*(0x8062450) == 0) {
        goto label_4;
    }
    eax = imp._Jv_RegisterClasses;
    eax++;
    while (1) {
        ebx += eax;
label_4:
        ecx = imp._Jv_RegisterClasses;
        eax = esp + 0x2c;
        edx = *(esi);
        eax = 0;
        fcn_0804cbf0 (eax);
        eax = imp._Jv_RegisterClasses;
        ebx += *((esp + 0x2c));
        if (eax != 0) {
            ecx = *((esi + 0x68));
            edx = *((esi + 0x18));
            eax = *((esi + 0x74));
            al = fcn_0804d260 ();
            al = (al != 0) ? 1 : 0;
            eax = (int32_t) al;
            ebx += eax;
        }
        edx = *((esp + 0x2bc));
        edx ^= *(gs:0x14);
        eax = ebx;
        if (ebx != 0) {
            goto label_5;
        }
        return eax;
        eax = *((esi + 0x70));
        eax = strlen (eax);
        eax++;
    }
label_3:
    eax = 2;
    if (*((esi + 0x74)) == 0) {
        goto label_0;
    }
    eax = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    eax = imp._Jv_RegisterClasses;
    edx = *((esi + 0x44));
    eax = esp + 0x30;
    eax = *((esi + 0x40));
    eax = fcn_08053850 (0x200, edx, eax);
    eax = strlen (eax);
    eax++;
    goto label_0;
label_2:
    eax = esp + 0x30;
    edx = *((esi + 0x64));
    eax = *((esi + 0x60));
    eax = fcn_08054c60 (eax, edx, eax);
    strlen (eax);
    ebx = eax + 1;
    goto label_1;
label_5:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804df70 */
#include <stdint.h>
 
int32_t fcn_0804df70 (void) {
    int32_t canary;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_2ach;
    esi = edx;
    ebx = eax;
    eax = *(gs:0x14);
    *((esp + 0x2ac)) = eax;
    eax = 0;
    fcn_0804df20 ();
    if (*(0x80624ee) == 0) {
        goto label_2;
    }
    eax = 0x805a095;
    while (edi == 0) {
label_0:
        edx = 0;
        if (*(0x8062360) != 4) {
            edx = imp._Jv_RegisterClasses;
        }
        *((esp + 0xc)) = eax;
        *((esp + 4)) = 0x805a0b1;
        *((esp + 8)) = edx;
        *(esp) = 1;
        printf_chk ();
label_2:
        if (*(0x8062451) != 0) {
            eax = 0x805a095;
            if (*((ebx + 0x74)) != 0) {
                goto label_3;
            }
label_1:
            edx = 0;
            if (*(0x8062360) != 4) {
                edx = imp._Jv_RegisterClasses;
            }
            *((esp + 0xc)) = eax;
            *((esp + 4)) = 0x805a0b1;
            *((esp + 8)) = edx;
            *(esp) = 1;
            eax = printf_chk ();
        }
        if (*(0x8062450) != 0) {
            edx = *((ebx + 0x70));
            eax = 0;
            if (*(0x8062360) != 4) {
                eax = imp._Jv_RegisterClasses;
            }
            *((esp + 4)) = 0x805a0b1;
            *((esp + 0xc)) = edx;
            *((esp + 8)) = eax;
            *(esp) = 1;
            printf_chk ();
        }
        ecx = 0;
        edx = 0;
        eax = ebx;
        eax = fcn_0804d9f0 (esi);
        edi = imp._Jv_RegisterClasses;
        esi = eax;
        if (edi != 0) {
            ecx = *((ebx + 0x68));
            edx = *((ebx + 0x18));
            eax = *((ebx + 0x74));
            al = fcn_0804d3a0 ();
            eax = (int32_t) al;
            esi += eax;
        }
        edx = *((esp + 0x2ac));
        edx ^= *(gs:0x14);
        eax = esi;
        if (esi != 0) {
            goto label_4;
        }
        return eax;
        edx = *((ebx + 0x64));
        ecx = *((ebx + 0x60));
        edi = edx;
        edi |= ecx;
    }
    eax = esp + 0x20;
    fcn_08054c60 (ecx, edx, eax);
    goto label_0;
label_3:
    eax = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    eax = imp._Jv_RegisterClasses;
    edx = *((ebx + 0x44));
    eax = esp + 0x20;
    eax = *((ebx + 0x40));
    fcn_08053850 (0x200, edx, eax);
    goto label_1;
label_4:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c970 */
#include <stdint.h>
 
int32_t fcn_0804c970 (void) {
    int32_t var_4h;
    esi = edx;
    ebx = eax;
    if (eax < edx) {
        goto label_0;
    }
    goto label_4;
    do {
        edx = 0;
        eax = esi;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        edx = 0;
        edi = ebx + 1;
        eax = edi;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        if (ebp <= eax) {
            goto label_5;
        }
        eax = stdout;
        edx = *((eax + 0x14));
        if (edx >= *((eax + 0x18))) {
            goto label_6;
        }
        *(edx) = 9;
        edx++;
        *((eax + 0x14)) = edx;
label_3:
        eax = ebx;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ebx += ecx;
        ebx -= edx;
label_2:
        if (esi <= ebx) {
            goto label_4;
        }
label_0:
        ecx = imp._Jv_RegisterClasses;
    } while (ecx != 0);
    ebx++;
label_1:
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_7;
    }
    *(edx) = 0x20;
    edx++;
    *((eax + 0x14)) = edx;
    if (esi > ebx) {
        goto label_0;
    }
label_4:
    return eax;
label_5:
    ebx = edi;
    goto label_1;
label_7:
    *((esp + 4)) = 0x20;
    *(esp) = eax;
    eax = overflow ();
    goto label_2;
label_6:
    *((esp + 4)) = 9;
    *(esp) = eax;
    overflow ();
    ecx = imp._Jv_RegisterClasses;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804df20 */
#include <stdint.h>
 
int32_t fcn_0804df20 (void) {
    if (*(0x806235c) != 0) {
        eax = 4;
        al = fcn_0804bf90 ();
        if (al != 0) {
            goto label_0;
        }
    }
    return eax;
label_0:
    eax = 0x80621e0;
    fcn_0804d980 ();
    eax = 0x8062200;
    fcn_0804d980 ();
    eax = 0x80621e8;
    return void (*0x804d980)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804e240 */
#include <stdint.h>
 
int32_t fcn_0804e240 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    time_t * timer;
    int32_t var_4ch;
    time_t * var_50h;
    int32_t var_57h;
    int32_t var_e92h;
    int32_t var_127bh;
    int32_t var_1290h;
    int32_t var_1291h;
    int32_t var_1295h;
    int32_t var_1299h;
    int32_t var_129ah;
    int32_t var_129bh;
    int32_t var_129ch;
    ebx = eax;
    eax = *(gs:0x14);
    *((esp + 0x129c)) = eax;
    eax = 0;
    if (*((ebx + 0x74)) == 0) {
        goto label_24;
    }
    eax = esp + 0x1290;
    eax = ebx + 8;
    fcn_080522d0 (eax, eax);
    if (*(0x8062cb8) != 0) {
        goto label_25;
    }
label_0:
    *((esp + 0x129a)) = 0;
label_1:
    eax = imp._Jv_RegisterClasses;
    if (eax == 1) {
        goto label_26;
    }
    if (eax >= 1) {
label_2:
        goto label_27;
    }
    eax = *((ebx + 0x54));
    edx = *((ebx + 0x50));
    *((esp + 0x4c)) = eax;
    *((esp + 0x48)) = edx;
label_3:
    ebp = esp + 0x57;
    esi = ebp;
    if (*(0x80624ee) != 0) {
        eax = 0x805a095;
        if (*((ebx + 0x74)) != 0) {
            goto label_28;
        }
label_8:
        *((esp + 0x14)) = eax;
        eax = imp._Jv_RegisterClasses;
        ebp = esp + 0x57;
        *((esp + 0xc)) = 0x805a0b1;
        *((esp + 8)) = 0xe3b;
        *((esp + 4)) = 1;
        *((esp + 0x10)) = eax;
        *(esp) = ebp;
        sprintf_chk ();
        strlen (ebp);
        esi = ebp + eax;
    }
    if (*(0x8062451) == 0) {
        goto label_29;
    }
    edi = 0x805a095;
    if (*((ebx + 0x74)) != 0) {
        goto label_30;
    }
label_18:
    edx = imp._Jv_RegisterClasses;
    *((esp + 4)) = 0;
    eax = fcn_08055350 (edi);
    ecx = *((esp + 0x34));
    edx = esi;
    ecx -= eax;
    eax = ecx;
    if (ecx <= 0) {
        goto label_31;
    }
    eax += esi;
    do {
        *(esi) = 0x20;
        esi++;
    } while (esi != eax);
    do {
        edx = esi;
label_31:
        eax = *(edi);
        edi++;
        esi = edx + 1;
        *(edx) = al;
    } while (al != 0);
    *(edx) = 0x20;
label_29:
    eax = 0x805a095;
    if (*((ebx + 0x74)) != 0) {
        goto label_32;
    }
label_7:
    *((esp + 0x18)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0xc)) = 0x805a0a1;
    *((esp + 8)) = 0xffffffff;
    *((esp + 4)) = 1;
    *((esp + 0x14)) = eax;
    eax = esp + 0x1290;
    *((esp + 0x10)) = eax;
    *(esp) = esi;
    sprintf_chk ();
    strlen (esi);
    edi = esi + eax;
    if (*(0x8062455) != 0) {
        goto label_33;
    }
label_6:
    if (*(0x80622a8) == 0) {
        if (*(0x80622a9) != 0) {
            goto label_11;
        }
        if (*(0x8062510) == 0) {
            goto label_34;
        }
    }
label_11:
    eax = stdout;
    edi -= ebp;
    *(esp) = ebp;
    *((esp + 4)) = eax;
    fputs_unlocked ();
    *(0x80624d8) += edi;
    if (*(0x80622a8) != 0) {
        goto label_35;
    }
label_14:
    if (*(0x80622a9) != 0) {
        eax = 0x805a095;
        ecx = imp._Jv_RegisterClasses;
        edx = *((ebx + 0x24));
        if (*((ebx + 0x74)) != 0) {
            goto label_36;
        }
label_9:
        fcn_0804cae0 ();
    }
    if (*(0x8062510) != 0) {
        goto label_37;
    }
label_15:
    edi = ebp;
    if (*(0x8062450) != 0) {
        goto label_38;
    }
label_10:
    edx = 0x805a095;
    if (*((ebx + 0x74)) != 0) {
        eax = *((ebx + 0x18));
        eax &= 0xf000;
        if (eax == 0x6000) {
            goto label_39;
        }
        if (eax == 0x2000) {
            goto label_39;
        }
        eax = *(0x80622a0);
        edx = imp._Jv_RegisterClasses;
        eax = imp._Jv_RegisterClasses;
        edx = *((ebx + 0x38));
        eax = esp + 0xe92;
        eax = *((ebx + 0x34));
        eax = fcn_08053850 (1, edx, eax);
        edx = eax;
    }
    esi = imp._Jv_RegisterClasses;
    *(esp) = edx;
    eax = fcn_08055350 (edx, 0);
    edx = *((esp + 0x2c));
    esi -= eax;
    if (esi <= 0) {
        goto label_4;
    }
    esi += edi;
    do {
        *(edi) = 0x20;
        edi++;
    } while (edi != esi);
label_4:
    eax = *(edx);
    edx++;
    esi = edi + 1;
    *(edi) = al;
    if (al != 0) {
        goto label_40;
    }
    *(edi) = 0x20;
label_12:
    eax = esp + 0x48;
    edi = 0x805a095;
    localtime (eax);
    *(esi) = 1;
    if (*((ebx + 0x74)) != 0) {
        goto label_41;
    }
label_20:
    eax = *(0x80622b8);
    if (eax < 0) {
        goto label_42;
    }
label_22:
    *(esp) = esi;
    *((esp + 0x14)) = edi;
    *((esp + 0x10)) = eax;
    *((esp + 0xc)) = 0x805a0b1;
    *((esp + 8)) = 0xffffffff;
    *((esp + 4)) = 1;
    sprintf_chk ();
    eax = strlen (esi);
    esi += eax;
label_5:
    eax = stdout;
    esi -= ebp;
    *(esp) = ebp;
    *((esp + 4)) = eax;
    fputs_unlocked ();
    ecx = 0x8062460;
    edx = 0;
    eax = ebx;
    *(0x80624d8) += esi;
    eax = fcn_0804d9f0 (esi);
    ecx = *((ebx + 0x68));
    edi = eax;
    if (ecx == 6) {
        goto label_43;
    }
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        edx = *((ebx + 0x18));
        eax = *((ebx + 0x74));
        fcn_0804d3a0 ();
    }
label_13:
    esi = *((esp + 0x129c));
    esi ^= *(gs:0x14);
    if (eax != 0) {
        goto label_44;
    }
    return eax;
label_24:
    eax = *((ebx + 0x68));
    *((esp + 0x1291)) = 0x3f3f3f3f;
    *((esp + 0x1295)) = 0x3f3f3f3f;
    eax = *((eax + 0x805b2c8));
    *((esp + 0x1299)) = 0x3f3f;
    *((esp + 0x129b)) = 0;
    *((esp + 0x1290)) = al;
    if (*(0x8062cb8) == 0) {
        goto label_0;
    }
label_25:
    eax = *((ebx + 0x78));
    if (eax == 1) {
        goto label_45;
    }
    if (eax != 2) {
        goto label_1;
    }
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x129a)) = 0x2b;
    if (eax != 1) {
        goto label_2;
    }
label_26:
    eax = *((ebx + 0x5c));
    edx = *((ebx + 0x58));
    *((esp + 0x4c)) = eax;
    *((esp + 0x48)) = edx;
    goto label_3;
label_27:
    if (eax != 2) {
        eax = abort ();
label_40:
        edi = esi;
        goto label_4;
label_41:
        if (eax == 0) {
            goto label_46;
        }
        edi = imp._Jv_RegisterClasses;
        ecx = imp._Jv_RegisterClasses;
        edx = *((esp + 0x48));
        *((esp + 0x38)) = edi;
        edi = *((esp + 0x4c));
        *((esp + 0x34)) = edi;
        if (edx > ecx) {
            goto label_47;
        }
        if (edx >= ecx) {
            if (*((esp + 0x38)) < edi) {
                goto label_47;
            }
        }
label_21:
        edi = ecx - 0xf0c2ac;
        if (edi >= edx) {
            goto label_48;
        }
label_17:
        *((esp + 0x3c)) = 1;
        if (ecx <= edx) {
            *((esp + 0x3c)) = 0;
            if (ecx < edx) {
                goto label_16;
            }
            edx = *((esp + 0x34));
            edx -= *((esp + 0x38));
            edx >>= 0x1f;
            *((esp + 0x3c)) = edx;
        }
label_16:
        ecx = *((esp + 0x3c));
        edi = *((esp + 0x34));
        edx = *((ecx*4 + 0x80622ac));
        ecx = eax;
        eax = esi;
        eax = fcn_0804e120 (edi);
        if (eax == 0) {
            goto label_49;
        }
label_19:
        eax += esi;
        *(eax) = 0x20;
        esi = eax + 1;
        *((eax + 1)) = 0;
        goto label_5;
    }
    eax = *((ebx + 0x4c));
    edx = *((ebx + 0x48));
    *((esp + 0x4c)) = eax;
    *((esp + 0x48)) = edx;
    goto label_3;
label_33:
    eax = stdout;
    *((esp + 8)) = 2;
    *((esp + 4)) = 1;
    *(esp) = 0x805a0a9;
    *((esp + 0xc)) = eax;
    fwrite_unlocked ();
    *(0x80624d8) += 2;
    goto label_6;
label_32:
    edi = *((ebx + 0x1c));
    eax = esp + 0xe92;
    fcn_08054c60 (edi, 0, eax);
    goto label_7;
label_28:
    edx = *((ebx + 0x64));
    ecx = *((ebx + 0x60));
    esi = edx;
    esi |= ecx;
    if (esi == 0) {
        goto label_8;
    }
    eax = esp + 0xe92;
    eax = fcn_08054c60 (ecx, edx, eax);
    goto label_8;
label_36:
    eax = 0;
    if (*(0x80624ed) != 0) {
        goto label_9;
    }
    *(esp) = edx;
    *((esp + 0x2c)) = edx;
    fcn_080549f0 (ecx);
    ecx = *((esp + 0x30));
    edx = *((esp + 0x2c));
    goto label_9;
label_45:
    *((esp + 0x129a)) = 0x2e;
    goto label_1;
label_34:
    if (*(0x8062450) == 0) {
        goto label_10;
    }
    goto label_11;
label_39:
    eax = esp + 0x127b;
    edx = *((ebx + 0x2c));
    esi = 0xfffffffe;
    eax = *((ebx + 0x28));
    esi -= *(0x8062cd8);
    esi -= *(0x8062cdc);
    __asm ("shrd eax, edx, 0xc");
    edx = *((ebx + 0x28));
    al = 0;
    esi += *(0x8062ce0);
    eax |= edx;
    eax = fcn_08054c60 (eax, 0, eax);
    edx = imp._Jv_RegisterClasses;
    ecx = *((ebx + 0x2c));
    *((esp + 4)) = 0;
    *((esp + 0x3c)) = edx;
    edx = *((ebx + 0x2c));
    ecx &= 0xfffff000;
    eax = esp + 0xe92;
    eax = *((ebx + 0x28));
    __asm ("shrd eax, edx, 8");
    eax &= 0xfff;
    ecx |= eax;
    eax = fcn_08054c60 (eax, eax);
    ecx = *((esp + 0x38));
    edx = *((esp + 0x3c));
    *((esp + 0xc)) = 0x805a0ac;
    *((esp + 8)) = 0xffffffff;
    *((esp + 0x1c)) = ecx;
    *((esp + 0x18)) = edx;
    *((esp + 0x14)) = eax;
    eax = 0;
    __asm ("cmovns eax, esi");
    eax += *(0x8062cd8);
    *((esp + 4)) = 1;
    *(esp) = edi;
    *((esp + 0x10)) = eax;
    sprintf_chk ();
    eax = imp._Jv_RegisterClasses;
    esi = edi + eax + 1;
    goto label_12;
label_43:
    eax = *((ebx + 4));
    if (eax == 0) {
        goto label_13;
    }
    eax = stdout;
    *((esp + 8)) = 4;
    *((esp + 4)) = 1;
    *(esp) = 0x805a0b6;
    *((esp + 0xc)) = eax;
    fwrite_unlocked ();
    eax = esi + edi + 4;
    ecx = 0;
    edx = 1;
    eax = ebx;
    *(0x80624d8) += 4;
    fcn_0804d9f0 (eax);
    eax = imp._Jv_RegisterClasses;
    if (eax == 0) {
        goto label_13;
    }
    edx = *((ebx + 0x6c));
    ecx = 0;
    eax = 1;
    fcn_0804d3a0 ();
    goto label_13;
label_35:
    ecx = *((ebx + 0x74));
    eax = *((ebx + 0x20));
    edx = imp._Jv_RegisterClasses;
    fcn_0804cba0 ();
    goto label_14;
label_38:
    eax = *((ebx + 0x70));
    edx = 0;
    ecx = imp._Jv_RegisterClasses;
    fcn_0804cae0 ();
    goto label_10;
label_37:
    ecx = *((ebx + 0x74));
    eax = *((ebx + 0x20));
    edx = imp._Jv_RegisterClasses;
    fcn_0804cba0 ();
    goto label_15;
label_48:
    *((esp + 0x3c)) = 0;
    if (eax > 0) {
        goto label_16;
    }
    edi = *((esp + 0x34));
    if (*((esp + 0x38)) >= edi) {
        goto label_16;
    }
    goto label_17;
label_30:
    eax = imp._Jv_RegisterClasses;
    edx = imp._Jv_RegisterClasses;
    eax = imp._Jv_RegisterClasses;
    edx = *((ebx + 0x44));
    eax = esp + 0xe92;
    eax = *((ebx + 0x40));
    eax = fcn_08053850 (0x200, edx, eax);
    edi = eax;
    goto label_18;
label_49:
    if (*(esi) == 0) {
        goto label_19;
    }
    edi = 0x805a095;
    if (*((ebx + 0x74)) == 0) {
        goto label_20;
    }
label_46:
    eax = esp + 0x127b;
    eax = *((esp + 0x48));
    edx = *((esp + 0x48));
    edx >>= 0x1f;
    eax = fcn_08054b80 (eax, edx, eax);
    edi = eax;
    goto label_20;
label_47:
    *((esp + 0x30)) = eax;
    fcn_08052840 (0x8062354);
    edx = imp._Jv_RegisterClasses;
    edi = *((esp + 0x4c));
    ecx = imp._Jv_RegisterClasses;
    eax = *((esp + 0x30));
    *((esp + 0x38)) = edx;
    edx = *((esp + 0x48));
    *((esp + 0x34)) = edi;
    goto label_21;
label_42:
    eax = esp + 0x50;
    *((esp + 0x50)) = 0;
    eax = localtime (eax);
    if (eax == 0) {
        goto label_50;
    }
    edx = *(0x80622ac);
    ecx = eax;
    eax = esp + 0xe92;
    eax = fcn_0804e120 (0);
    if (eax != 0) {
        goto label_51;
    }
    eax = *(0x80622b8);
label_23:
    if (eax >= 0) {
        goto label_22;
    }
label_50:
    *(0x80622b8) = 0;
    eax = 0;
    goto label_22;
label_51:
    ecx = esp + 0xe92;
    eax = fcn_08055160 (ecx, eax, 0);
    *(0x80622b8) = eax;
    goto label_23;
label_44:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052890 */
#include <stdint.h>
 
int32_t fcn_08052890 (int32_t category) {
    char * locale;
    int32_t var_14h;
    int32_t var_18h;
    eax = *((esp + 0x20));
    *((esp + 0x14)) = esi;
    *((esp + 0x18)) = edi;
    eax = setlocale (eax, 0);
    esi = eax;
    eax = 1;
    if (esi != 0) {
        if (*(esi) != 0x43) {
            goto label_0;
        }
        if (*((esi + 1)) != 0) {
            goto label_0;
        }
        eax = 0;
    }
    esi = *((esp + 0x14));
    edi = *((esp + 0x18));
    return eax;
label_0:
    edi = 0x805d39a;
    ecx = 6;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    esi = *((esp + 0x14));
    edi = *((esp + 0x18));
    al = (*((esi + 1)) != 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8053140 */
#include <stdint.h>
 
int32_t fcn_08053140 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h) {
    size_t size;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    eax = 0x8052900;
    *((esp + 0x24)) = edi;
    edi = *((esp + 0x38));
    *((esp + 0x20)) = esi;
    esi = *((esp + 0x3c));
    *((esp + 0x1c)) = ebx;
    *((esp + 0x28)) = ebp;
    ebp = *((esp + 0x34));
    if (edi == 0) {
        edi = eax;
    }
    eax = 0x8052910;
    if (esi == 0) {
        esi = eax;
    }
    eax = malloc (0x28);
    ebx = eax;
    if (eax == 0) {
        goto label_0;
    }
    eax = 0x805d40c;
    if (ebp == 0) {
    }
    *((ebx + 0x14)) = ebp;
    eax = ebx + 0x14;
    al = fcn_08052b60 ();
    if (al == 0) {
        goto label_1;
    }
    eax = *((ebp + 8));
    edx = *((ebp + 0x10));
    *(esp) = eax;
    eax = *((esp + 0x30));
    eax = fcn_08052c10 ();
    *((ebx + 8)) = eax;
    if (eax == 0) {
        goto label_1;
    }
    eax = calloc (eax, 8);
    *(ebx) = eax;
    if (eax == 0) {
        goto label_1;
    }
    eax = eax + ebp*8;
    *((ebx + 4)) = eax;
    eax = *((esp + 0x40));
    *((ebx + 0xc)) = 0;
    *((ebx + 0x10)) = 0;
    *((ebx + 0x18)) = edi;
    *((ebx + 0x1c)) = esi;
    *((ebx + 0x20)) = eax;
    *((ebx + 0x24)) = 0;
    do {
label_0:
        eax = ebx;
        esi = *((esp + 0x20));
        ebx = *((esp + 0x1c));
        edi = *((esp + 0x24));
        ebp = *((esp + 0x28));
        return eax;
label_1:
        ebx = 0;
        free (ebx);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804bf90 */
#include <stdint.h>
 
int32_t fcn_0804bf90 (void) {
    int32_t var_4h;
    edx = *((eax*8 + 0x80621e0));
    *(esp) = esi;
    esi = *((eax*8 + 0x80621e4));
    eax = 0;
    *((esp + 4)) = edi;
    if (edx != 0) {
        if (edx == 1) {
            goto label_0;
        }
        eax = 1;
        if (edx == 2) {
            goto label_1;
        }
    }
    esi = *(esp);
    edi = *((esp + 4));
    return eax;
label_1:
    edi = 0x805a068;
    ecx = 2;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    esi = *(esp);
    edi = *((esp + 4));
    al = (edx != 2) ? 1 : 0;
    return eax;
label_0:
    edi = *((esp + 4));
    esi = *(esp);
    al = (*(esi) != 0x30) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d570 */
#include <stdint.h>
 
uint32_t fcn_0804d570 (void) {
    int32_t errname;
    char ** format;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *(esp) = ecx;
    *((esp + 0x10)) = ebx;
    ebx = edx;
    *((esp + 0x14)) = esi;
    esi = eax;
    eax = fcn_08056980 (edi);
    edi = eax;
    eax = errno_location ();
    *((esp + 0xc)) = edi;
    eax = *(eax);
    error (0, eax, ebx);
    eax = esi;
    if (al == 0) {
        eax = imp._Jv_RegisterClasses;
        if (eax == 0) {
            *(0x8062348) = 1;
        }
        ebx = *((esp + 0x10));
        esi = *((esp + 0x14));
        edi = *((esp + 0x18));
        return eax;
    }
    *(0x8062348) = 2;
    ebx = *((esp + 0x10));
    esi = *((esp + 0x14));
    edi = *((esp + 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056980 */
#include <stdint.h>
 
int32_t fcn_08056980 (int32_t arg_20h) {
    int32_t var_4h;
    eax = *((esp + 0x20));
    fcn_08056950 (eax, 0x3a);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056950 */
#include <stdint.h>
 
int32_t fcn_08056950 (int32_t arg_20h, int32_t arg_24h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((esp + 0x24));
    eax = *((esp + 0x20));
    fcn_08056890 (eax, 0xffffffff, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056890 */
#include <stdint.h>
 
int32_t fcn_08056890 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    eax = imp._Jv_RegisterClasses;
    ecx = *((esp + 0x58));
    *((esp + 0x10)) = eax;
    eax = imp._Jv_RegisterClasses;
    edx = ecx;
    ecx &= 0x1f;
    dl >>= 5;
    edx = (int32_t) dl;
    *((esp + 0x14)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x18)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x1c)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x20)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x24)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x28)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x2c)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x30)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x34)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x38)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x3c)) = eax;
    ebx = *((esp + edx*4 + 0x18));
    eax = *((esp + edx*4 + 0x18));
    eax >>= cl;
    eax &= 1;
    eax ^= 1;
    eax <<= cl;
    ecx = *((esp + 0x54));
    eax ^= ebx;
    *((esp + edx*4 + 0x18)) = eax;
    edx = *((esp + 0x50));
    eax = esp + 0x10;
    eax = 0;
    fcn_08056220 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056220 */
#include <stdint.h>
 
uint32_t fcn_08056220 (int32_t arg_4h) {
    int32_t c;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_24h;
    int32_t var_28h;
    uint32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    esi = eax;
    *((esp + 0x30)) = edx;
    ebx = *((esp + 0x60));
    *((esp + 0x34)) = ecx;
    eax = errno_location ();
    edi = *(0x80622d0);
    *((esp + 0x28)) = eax;
    eax = *(eax);
    *((esp + 0x3c)) = eax;
    if (esi < 0) {
        goto label_0;
    }
    if (esi < *(0x80622d4)) {
        goto label_1;
    }
    ebp = esi + 1;
    if (ebp > 0x1fffffff) {
        goto label_2;
    }
    eax = ebp*8;
    *((esp + 4)) = eax;
    if (edi == 0x80622d8) {
        goto label_3;
    }
    *(esp) = edi;
    eax = fcn_08058aa0 ();
    edi = eax;
    *(0x80622d0) = eax;
    do {
        eax = *(0x80622d4);
        edx = ebp;
        edx -= eax;
        edx <<= 3;
        eax = edi + eax*8;
        memset (eax, 0, edx);
        *(0x80622d4) = ebp;
label_1:
        edi = edi + esi*8;
        ebp = *((ebx + 4));
        eax = ebx + 8;
        edx = *(edi);
        *((esp + 0x38)) = eax;
        eax = *((ebx + 0x2c));
        esi = *((edi + 4));
        ebp |= 1;
        ecx = *((esp + 0x30));
        *((esp + 0x2c)) = edx;
        edx = *((esp + 0x38));
        eax = *((ebx + 0x28));
        edx = *((esp + 0x2c));
        eax = *(ebx);
        eax = *((esp + 0x34));
        eax = esi;
        eax = fcn_08055760 (eax, eax, ebp);
        if (*((esp + 0x2c)) <= eax) {
            edx = eax + 1;
            *(edi) = edx;
            if (esi != 0x8062e00) {
                *((esp + 0x24)) = edx;
                free (esi);
                edx = *((esp + 0x24));
            }
            *(esp) = edx;
            eax = fcn_08058a70 (edx);
            ecx = *((esp + 0x30));
            edx = *((esp + 0x24));
            *((edi + 4)) = eax;
            esi = eax;
            eax = *((ebx + 0x2c));
            eax = *((ebx + 0x28));
            eax = *((esp + 0x38));
            eax = *(ebx);
            eax = *((esp + 0x34));
            eax = esi;
            fcn_08055760 (eax, eax, ebp);
        }
        eax = *((esp + 0x28));
        edx = *((esp + 0x3c));
        *(eax) = edx;
        eax = esi;
        return eax;
label_3:
        *(esp) = 0;
        eax = fcn_08058aa0 ();
        edx = *(0x80622dc);
        edi = eax;
        *(0x80622d0) = eax;
        eax = *(0x80622d8);
        *((edi + 4)) = edx;
        *(edi) = eax;
    } while (1);
label_0:
    abort ();
label_2:
    return fcn_08058c00 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8053850 */
#include <stdint.h>
 
uint32_t fcn_08053850 (int32_t arg_e0h, int32_t arg_e4h, int32_t arg_e8h, int32_t arg_ech, int32_t arg_f0h, int32_t arg_f4h, int32_t arg_f8h, int32_t arg_fch) {
    void * s2;
    size_t n;
    char * var_ch;
    int32_t var_34h;
    void * var_38h;
    int32_t var_3ch;
    uint32_t var_40h;
    int32_t var_44h;
    uint32_t var_48h;
    uint32_t var_4ch;
    char * var_50h;
    void * s1;
    char * s;
    void * var_5ch;
    uint32_t var_60h;
    int32_t var_64h;
    int32_t var_68h;
    int32_t var_6ch;
    uint32_t var_70h;
    uint32_t var_74h;
    int32_t var_78h;
    uint32_t var_7ch;
    int32_t var_80h;
    int32_t var_84h;
    int32_t var_86h;
    int32_t var_88h;
    int32_t var_8ch;
    int32_t var_93h;
    int32_t var_bch;
    ebx = *((esp + 0xe4));
    ecx = *((esp + 0xe0));
    edi = *((esp + 0xf4));
    esi = *((esp + 0xf0));
    *((esp + 0x3c)) = ebx;
    ebx = *((esp + 0xe8));
    *((esp + 0x38)) = ecx;
    ecx = *((esp + 0xf8));
    *((esp + 0x58)) = ebx;
    ebx = *((esp + 0xfc));
    *((esp + 0x48)) = ecx;
    ecx = *((esp + 0xec));
    *((esp + 0x4c)) = ebx;
    ebx = *(gs:0x14);
    *((esp + 0xbc)) = ebx;
    ebx = 0;
    ebx = *((esp + 0xec));
    ecx &= 3;
    *((esp + 0x60)) = ecx;
    ebx &= 0x20;
    ecx -= ecx;
    ecx &= 0xffffffe8;
    ecx += 0x400;
    *((esp + 0x40)) = ecx;
    *((esp + 0x78)) = ebx;
    eax = localeconv ();
    ebp = *(eax);
    ebx = eax;
    strlen (ebp);
    ecx = *((ebx + 8));
    ebx = *((ebx + 4));
    *((esp + 0x5c)) = 1;
    *((esp + 0x44)) = ecx;
    *(esp) = ebx;
    edx = eax - 1;
    if (edx > 0xf) {
        eax = *((esp + 0x5c));
    }
    *((esp + 0x5c)) = eax;
    eax = 0x805a2b3;
    if (edx > 0xf) {
    }
    eax = strlen ();
    eax = 0x805da85;
    if (eax < 0x11) {
        eax = ebx;
    }
    ebx = *((esp + 0x58));
    *((esp + 0x50)) = eax;
    ebx += 0x288;
    *((esp + 0x54)) = ebx;
    if (*((esp + 0x4c)) > edi) {
        goto label_29;
    }
    if (*((esp + 0x4c)) >= edi) {
        goto label_30;
    }
label_0:
    ecx = *((esp + 0x48));
    ebx = *((esp + 0x4c));
    eax = fcn_08059dc0 (esi, edi, ecx);
    edx |= eax;
    if (edx == 0) {
        goto label_31;
    }
label_1:
    eax = *((esp + 0x3c));
    *(fp_stack--) = *((esp + 0x38));
    if (eax < 0) {
        goto label_32;
    }
label_7:
    *((esp + 0x88)) = esi;
    *((esp + 0x8c)) = edi;
    *(fp_stack--) = *((esp + 0x88));
    if (edi < 0) {
        goto label_33;
    }
    ebp = *((esp + 0x4c));
    *(fp_stack--) = *((esp + 0x48));
    if (ebp < 0) {
        goto label_34;
    }
label_8:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((esp + 0xec)) & 0x10) == 0) {
        goto label_35;
    }
    eax = *((esp + 0x40));
    edx = 0;
    *((esp + 0x8c)) = edx;
    *((esp + 0x38)) = 0;
    *((esp + 0x88)) = eax;
    eax = 0;
    *(fp_stack--) = *((esp + 0x88));
    *(fp_stack--) = fp_stack[0];
    while (eax <= 7) {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        fp_tmp_0 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *(fp_stack--) = fp_stack[0];
        eax++;
        fp_stack[0] *= fp_stack[2];
        fp_tmp_1 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        if (fp_stack[0] < fp_stack[3]) {
            goto label_36;
        }
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_37;
label_36:
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
label_37:
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x38)) = eax;
    *(fp_stack--) = fp_stack[0];
    if (*((esp + 0x60)) != 1) {
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_stack--;
        if (fp_stack[0] <= fp_stack[1]) {
            goto label_38;
        }
        *(fp_stack--) = *(0x805d490);
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        if (fp_stack[0] >= fp_stack[1]) {
            goto label_39;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[0];
        eax = *((esp + 0x86));
        ah = 0xc;
        *((esp + 0x84)) = ax;
        *((esp + 0x88)) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x88));
        edx = *((esp + 0x8c));
label_11:
        esi = *((esp + 0x60));
        ecx = 0;
        ebx = 0;
        if (esi == 0) {
            *((esp + 0x88)) = eax;
            *((esp + 0x8c)) = edx;
            *(fp_stack--) = *((esp + 0x88));
            if (edx < 0) {
                goto label_40;
            }
            fp_tmp_3 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_3;
label_22:
            ebx = 0;
            ecx = 1;
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            if (fp_stack[0] == fp_stack[1]) {
                goto label_19;
            }
            if (fp_stack[0] == fp_stack[1]) {
                goto label_41;
            }
        }
label_19:
        eax += ecx;
        edx += ebx;
        *((esp + 0x88)) = eax;
        *((esp + 0x8c)) = edx;
        *(fp_stack--) = *((esp + 0x88));
        if (edx < 0) {
            goto label_42;
        }
    }
label_5:
    ecx = *((esp + 0x58));
    ? = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = 0x805d43a;
    ? = fp_stack[0];
    fp_stack--;
    *(esp) = ecx;
    *((esp + 8)) = 0xffffffff;
    *((esp + 4)) = 1;
    sprintf_chk ();
    ebx = *((esp + 0x58));
    eax = strlen (ebx);
    edi = *((esp + 0x5c));
    ebp = *((esp + 0x78));
    edi++;
    ebx = eax;
    eax = 0;
    al = (ebp == 0) ? 1 : 0;
    eax = edi + eax + 1;
    *(fp_stack--) = fp_stack[?];
    if (ebx <= eax) {
        if ((*((esp + 0xec)) & 8) == 0) {
            goto label_43;
        }
        ecx = *((esp + 0x58));
        if (*((ecx + ebx - 1)) != 0x30) {
            goto label_44;
        }
    }
    fp_stack[0] *= *(0x805d494);
    if (*((esp + 0x60)) != 1) {
        *(fp_stack--) = fp_stack[?];
        fp_stack--;
        if (fp_stack[0] <= fp_stack[1]) {
            goto label_45;
        }
        *(fp_stack--) = *(0x805d490);
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        if (fp_stack[0] >= fp_stack[1]) {
            goto label_46;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[0];
        eax = *((esp + 0x86));
        ah = 0xc;
        *((esp + 0x84)) = ax;
        *((esp + 0x88)) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x88));
        edx = *((esp + 0x8c));
label_17:
        edi = *((esp + 0x60));
        ecx = 0;
        ebx = 0;
        if (edi == 0) {
            *((esp + 0x88)) = eax;
            *((esp + 0x8c)) = edx;
            *(fp_stack--) = *((esp + 0x88));
            if (edx < 0) {
                goto label_47;
            }
            fp_tmp_5 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_5;
label_24:
            ebx = 0;
            ecx = 1;
            fp_stack--;
            fp_stack++;
            if (fp_stack[0] == fp_stack[1]) {
                goto label_48;
            }
            if (fp_stack[0] != fp_stack[1]) {
                goto label_48;
            }
            ecx = 0;
            ebx = 0;
        } else {
            fp_stack++;
        }
label_48:
        eax += ecx;
        edx += ebx;
        *((esp + 0x88)) = eax;
        *((esp + 0x8c)) = edx;
        *(fp_stack--) = *((esp + 0x88));
        if (edx >= 0) {
            goto label_45;
        }
        fp_stack[0] += *(0x805d48c);
    }
label_45:
    fp_stack[0] /= *(0x805d494);
    edi = 0;
    ecx = *((esp + 0x58));
    *((esp + 0xc)) = 0x805d434;
    *((esp + 8)) = 0xffffffff;
    *((esp + 4)) = 1;
    *(esp) = ecx;
    ? = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    ebx = *((esp + 0x58));
    eax = strlen (ebx);
    ebx = eax;
    goto label_49;
label_30:
    if (*((esp + 0x48)) <= esi) {
        goto label_0;
    }
label_29:
    ebx = edi;
    ebx |= esi;
    if (ebx == 0) {
        goto label_1;
    }
    ecx = *((esp + 0x48));
    ebx = *((esp + 0x4c));
    eax = fcn_08059dc0 (edi, ebx, esi);
    edx |= eax;
    if (edx != 0) {
        goto label_1;
    }
    ecx = *((esp + 0x48));
    ebx = *((esp + 0x4c));
    edi = 0xa;
    eax = fcn_08059c90 (edi, ebx, esi);
    ebx = edx;
    *((esp + 0x7c)) = eax;
    eax = *((esp + 0x38));
    edx = *((esp + 0x3c));
    fcn_08059dc0 (edx, edx, eax);
    ecx = *((esp + 0x7c));
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = ecx;
    esi = edx * 0xa;
    edx:eax = eax * edi;
    edx += esi;
    eax = *((esp + 0x68));
    edx = *((esp + 0x6c));
    eax = fcn_08059dc0 (eax, edx);
    ecx = *((esp + 0x7c));
    esi = eax;
    edi = edx;
    edx = *((esp + 0x3c));
    __asm ("shld edi, eax, 1");
    esi += eax;
    eax = *((esp + 0x38));
    eax = fcn_08059c90 (ebx, edx, ecx);
    ecx = *((esp + 0x7c));
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = ecx;
    eax = *((esp + 0x68));
    edx = *((esp + 0x6c));
    eax = fcn_08059c90 (eax, edx);
    ecx = eax;
    if (ebx >= edi) {
        goto label_50;
    }
label_26:
    ebx = 3;
    goto label_13;
label_35:
    if (*((esp + 0x60)) != 1) {
        *(fp_stack--) = fp_stack[?];
        fp_stack--;
        if (fp_stack[0] > fp_stack[1]) {
            goto label_51;
        }
    }
label_6:
    ecx = *((esp + 0x58));
    edi = 0;
    ? = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = 0x805d434;
    *(esp) = ecx;
    *((esp + 8)) = 0xffffffff;
    *((esp + 4)) = 1;
    sprintf_chk ();
    ebx = *((esp + 0x58));
    eax = strlen (ebx);
    *((esp + 0x38)) = 0xffffffff;
    ebx = eax;
    goto label_49;
label_43:
    fp_stack++;
    goto label_49;
label_44:
    fp_stack++;
label_49:
    esi = *((esp + 0x54));
    ecx = *((esp + 0x58));
    esi -= ebx;
    ebx -= edi;
    ebx += esi;
    memmove (esi, ecx, ebx);
    if ((*((esp + 0xec)) & 4) != 0) {
        goto label_52;
    }
label_3:
    if ((*((esp + 0xec)) & 0x80) != 0) {
        if (*((esp + 0x38)) == -1) {
            goto label_53;
        }
label_9:
        eax = *((esp + 0xec));
        ebx = *((esp + 0x38));
        eax &= 0x100;
        ebx |= eax;
        if (ebx == 0) {
            goto label_54;
        }
        if ((*((esp + 0xec)) & 0x40) != 0) {
            goto label_55;
        }
label_4:
        ebx = *((esp + 0x38));
        if (ebx != 0) {
            if (*((esp + 0x38)) == 1) {
                ecx = *((esp + 0x78));
                edx = 0x6b;
                if (ecx == 0) {
                    goto label_56;
                }
            }
            ebx = *((esp + 0x38));
            edx = *((ebx + 0x805d46c));
label_56:
            ecx = *((esp + 0x54));
            *(ecx) = dl;
            ecx++;
            *((esp + 0x54)) = ecx;
        }
        if (eax == 0) {
            goto label_54;
        }
        edx = *((esp + 0x38));
        if (edx != 0) {
            eax = *((esp + 0x78));
            if (eax == 0) {
                goto label_57;
            }
            ebx = *((esp + 0x54));
            *(ebx) = 0x69;
            ebx++;
            *((esp + 0x54)) = ebx;
        }
label_57:
        ecx = *((esp + 0x54));
        *(ecx) = 0x42;
        ecx++;
        *((esp + 0x54)) = ecx;
    }
label_54:
    edx = *((esp + 0xbc));
    edx ^= *(gs:0x14);
    ebx = *((esp + 0x54));
    eax = esi;
    *(ebx) = 0;
    if (ecx != 0) {
        goto label_58;
    }
    return eax;
label_31:
    ecx = *((esp + 0x48));
    ebx = *((esp + 0x4c));
    eax = fcn_08059c90 (esi, edi, ecx);
    ecx = eax;
    eax = *((esp + 0x38));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = ecx;
    eax *= edx;
    edx = *((esp + 0x3c));
    edx *= ecx;
    edx += eax;
    eax = *((esp + 0x38));
    *((esp + 0x7c)) = edx;
    ebx = *((esp + 0x7c));
    edx:eax = eax * ecx;
    edx += ebx;
    ecx = *((esp + 0x70));
    ebx = *((esp + 0x74));
    eax = fcn_08059c90 (eax, ebx);
    edx ^= *((esp + 0x3c));
    eax ^= *((esp + 0x38));
    edx |= eax;
    if (edx != 0) {
        goto label_1;
    }
    ebx = 0;
    ecx = 0;
label_13:
    eax = *((esp + 0xec));
    edi = *((esp + 0x54));
    *((esp + 0x38)) = 0xffffffff;
    eax &= 0x10;
    *((esp + 0x7c)) = eax;
    if (eax == 0) {
        goto label_15;
    }
    if (*((esp + 0x74)) <= 0) {
        goto label_59;
    }
label_16:
    esi = *((esp + 0x70));
    edi = *((esp + 0x74));
    *((esp + 0x80)) = ebp;
    *((esp + 0x38)) = 0;
    do {
label_2:
        ecx = *((esp + 0x40));
        fcn_08059dc0 (esi, edi, ecx);
        edx = 0;
        *(esp) = esi;
        *((esp + 4)) = edi;
        eax *= 5;
        eax = ebp + eax*2;
        eax = *(edx:eax) / esp + 0x40;
        edx = *(edx:eax) % esp + 0x40;
        eax = ebx;
        eax >>= 1;
        ecx = eax + edx*2;
        eax = *((esp + 0x40));
        eax = fcn_08059c90 (0, eax);
        ecx = *((esp + 0x34));
        ebp = *((esp + 0x68));
        esi = eax;
        edi = edx;
        if (*((esp + 0x40)) <= ecx) {
            goto label_60;
        }
        ecx += ebx;
        ebx = 0;
        bl = (ecx != 0) ? 1 : 0;
label_20:
        if (*((esp + 0x38)) > 7) {
            goto label_61;
        }
        edx = 0;
    } while (edx < edi);
    if (*((esp + 0x40)) <= esi) {
        goto label_2;
    }
label_61:
    *((esp + 0x74)) = edi;
    ecx = ebp;
    edi = *((esp + 0x68));
    *((esp + 0x70)) = esi;
    ebp = *((esp + 0x80));
    if (*((esp + 0x74)) > 0) {
        goto label_62;
    }
    if (*((esp + 0x70)) > 9) {
        goto label_62;
    }
    if (*((esp + 0x60)) == 1) {
        goto label_63;
    }
    esi = *((esp + 0x60));
    edx = 0;
    dl = (ebx > 0) ? 1 : 0;
    eax = 0;
    al = (esi == 0) ? 1 : 0;
    eax &= edx;
label_25:
    if (al == 0) {
        goto label_64;
    }
    ecx = edi + 1;
    if (ecx == 0xa) {
        goto label_65;
    }
label_23:
    ebx = *((esp + 0x58));
    ecx += 0x30;
    edi = *((esp + 0x58));
    *((ebx + 0x287)) = cl;
    ecx = *((esp + 0x5c));
    ebx = 0;
    edi += 0x287;
    edi -= *((esp + 0x5c));
    memcpy (edi, ebp, ecx);
    ecx = 0;
label_15:
    if (*((esp + 0x60)) == 1) {
        goto label_66;
    }
    eax = *((esp + 0x60));
    if (eax == 0) {
        ecx += ebx;
        al = (ecx > 0) ? 1 : 0;
label_14:
        if (al == 0) {
            goto label_67;
        }
        esi = *((esp + 0x7c));
        if (esi == 0) {
            goto label_67;
        }
        edx = *((esp + 0x40));
        eax = *((esp + 0x74));
        edx ^= *((esp + 0x70));
        edx |= eax;
        if (edx != 0) {
            goto label_67;
        }
        if (*((esp + 0x38)) > 7) {
            goto label_67;
        }
        *((esp + 0x70)) = 1;
        *((esp + 0x74)) = 0;
        if ((*((esp + 0xec)) & 8) != 0) {
            goto label_67;
        }
        eax = edi - 1;
        ecx = *((esp + 0x5c));
        *((edi - 1)) = 0x30;
        edi = eax;
        edi -= *((esp + 0x5c));
        memcpy (edi, ebp, ecx);
    }
label_67:
    ebx = edi;
    esi = *((esp + 0x70));
    edi = *((esp + 0x74));
    do {
        ebx--;
        eax = fcn_08059dc0 (esi, edi, 0xa);
        eax += 0x30;
        *(ebx) = al;
        eax = fcn_08059c90 (esi, edi, 0xa);
        esi = eax;
        eax = edx;
        eax |= esi;
        edi = edx;
    } while (eax != 0);
    esi = ebx;
    ebx = ebp;
    if ((*((esp + 0xec)) & 4) == 0) {
        goto label_3;
    }
label_52:
    ecx = *((esp + 0x50));
    ebx -= esi;
    edi = 0xffffffff;
    eax = strlen (ecx);
    *((esp + 4)) = esi;
    esi += ebx;
    *((esp + 0xc)) = 0x29;
    *((esp + 8)) = ebx;
    eax = esp + 0x93;
    *(esp) = eax;
    memcpy_chk ();
    while (ebx != 0) {
        ecx = *((esp + 0x50));
        esi -= ebp;
        memcpy (esi, ecx, ebp);
        ecx = *((esp + 0x44));
        eax = *(ecx);
        if (al != 0) {
            edi = (int32_t) al;
            if (al > 0x7e) {
                edi = ebx;
            }
            ecx++;
            *((esp + 0x44)) = ecx;
        }
        if (edi > ebx) {
            edi = ebx;
        }
        ebx -= edi;
        esi -= edi;
        eax = esp + 0x93;
        eax += ebx;
        memcpy (esi, eax, edi);
    }
    goto label_3;
label_55:
    ecx = *((esp + 0x58));
    *((ecx + 0x288)) = 0x20;
    ecx += 0x289;
    *((esp + 0x54)) = ecx;
    goto label_4;
label_38:
    *(fp_stack--) = fp_stack[0];
    goto label_5;
label_51:
    *(fp_stack--) = *(0x805d490);
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    if (fp_stack[0] >= fp_stack[1]) {
        goto label_68;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[0];
    eax = *((esp + 0x86));
    ah = 0xc;
    *((esp + 0x84)) = ax;
    *((esp + 0x88)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x88));
    edx = *((esp + 0x8c));
label_12:
    edi = *((esp + 0x60));
    ecx = 0;
    ebx = 0;
    if (edi == 0) {
        *((esp + 0x88)) = eax;
        *((esp + 0x8c)) = edx;
        *(fp_stack--) = *((esp + 0x88));
        if (edx < 0) {
            goto label_69;
        }
        fp_tmp_7 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_7;
label_21:
        ebx = 0;
        ecx = 1;
        fp_stack--;
        fp_stack++;
        if (fp_stack[0] == fp_stack[1]) {
            goto label_18;
        }
        if (fp_stack[0] == fp_stack[1]) {
            goto label_70;
        }
    } else {
        fp_stack++;
    }
label_18:
    eax += ecx;
    edx += ebx;
    *((esp + 0x88)) = eax;
    *((esp + 0x8c)) = edx;
    *(fp_stack--) = *((esp + 0x88));
    if (edx >= 0) {
        goto label_6;
    }
    fp_stack[0] += *(0x805d48c);
    goto label_6;
label_32:
    fp_stack[0] += *(0x805d48c);
    goto label_7;
label_33:
    fp_stack[0] += *(0x805d48c);
    ebp = *((esp + 0x4c));
    *(fp_stack--) = *((esp + 0x48));
    if (ebp >= 0) {
        goto label_8;
    }
label_34:
    fp_stack[0] += *(0x805d48c);
    goto label_8;
label_53:
    if (*((esp + 0x4c)) > 0) {
        goto label_71;
    }
    *((esp + 0x38)) = 0;
    if (*((esp + 0x48)) <= 1) {
        goto label_9;
    }
label_71:
    ebx = *((esp + 0x40));
    eax = 1;
    edx = 0;
    *((esp + 0x38)) = 1;
    edi = 1;
    do {
        ecx = ebx;
        ecx *= edx;
        edx:eax = eax * ebx;
        edx += ecx;
        if (*((esp + 0x4c)) <= edx) {
            if (*((esp + 0x4c)) >= edx) {
                if (*((esp + 0x48)) > eax) {
                    goto label_72;
                }
            }
label_10:
            *((esp + 0x38)) = edi;
            goto label_9;
        }
label_72:
        edi++;
    } while (edi != 8);
    goto label_10;
label_39:
    fp_stack[0] -= fp_stack[1];
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    eax = *((esp + 0x86));
    ah = 0xc;
    *((esp + 0x84)) = ax;
    *((esp + 0x88)) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x8c));
    eax = *((esp + 0x88));
    ebx = edx - 0x80000000;
    edx = ebx;
    goto label_11;
label_68:
    fp_stack[0] -= fp_stack[1];
    fp_tmp_9 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    eax = *((esp + 0x86));
    ah = 0xc;
    *((esp + 0x84)) = ax;
    *((esp + 0x88)) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x8c));
    eax = *((esp + 0x88));
    ebx = edx - 0x80000000;
    edx = ebx;
    goto label_12;
    if (edi <= 8) {
label_50:
        if (*((esp + 0x7c)) > esi) {
            goto label_73;
        }
        if (ebx <= edi) {
            goto label_74;
        }
label_27:
        ebx = 2;
        goto label_13;
    }
label_73:
    edx = esi;
    edx |= edi;
    bl = (edx != 0) ? 1 : 0;
    ebx = (int32_t) bl;
    goto label_13;
label_66:
    eax = *((esp + 0x70));
    edx = ebx;
    edx >>= 0x1f;
    *((esp + 0x64)) = 0;
    eax &= 1;
    *((esp + 0x60)) = eax;
    eax = ebx;
    eax += *((esp + 0x60));
    edx += *((esp + 0x64));
    ebx = eax;
    ebx |= edx;
    al = (ebx != 0) ? 1 : 0;
    eax = (int32_t) al;
    eax += ecx;
    al = (eax > 5) ? 1 : 0;
    goto label_14;
label_59:
    edx = *((esp + 0x40));
    *((esp + 0x38)) = 0;
    if (*((esp + 0x70)) < edx) {
        goto label_15;
    }
    goto label_16;
label_46:
    fp_stack[0] -= fp_stack[1];
    fp_tmp_10 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    eax = *((esp + 0x86));
    ah = 0xc;
    *((esp + 0x84)) = ax;
    *((esp + 0x88)) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x8c));
    eax = *((esp + 0x88));
    ebx = edx - 0x80000000;
    edx = ebx;
    goto label_17;
label_70:
    ecx = 0;
    ebx = 0;
    goto label_18;
label_41:
    ecx = 0;
    ebx = 0;
    goto label_19;
label_42:
    fp_stack[0] += *(0x805d48c);
    goto label_5;
label_60:
    ecx += ebx;
    ebx -= ebx;
    ebx = ~ebx;
    ebx += 3;
    goto label_20;
label_62:
    edi = *((esp + 0x54));
    goto label_15;
label_69:
    fp_stack[0] += *(0x805d48c);
    fp_tmp_11 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    goto label_21;
label_40:
    fp_stack[0] += *(0x805d48c);
    fp_tmp_12 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    goto label_22;
label_64:
    if (edi != 0) {
        goto label_23;
    }
label_28:
    ecx = 0;
    edi = *((esp + 0x54));
    if ((*((esp + 0xec)) & 8) != 0) {
        goto label_15;
    }
    goto label_23;
label_47:
    fp_stack[0] += *(0x805d48c);
    fp_tmp_13 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
    goto label_24;
label_63:
    eax = edi;
    eax &= 1;
    eax += ebx;
    al = (eax > 2) ? 1 : 0;
    goto label_25;
label_65:
    eax = *((esp + 0x70));
    eax ^= 0xa;
    eax |= *((esp + 0x74));
    if (eax != 0) {
        goto label_75;
    }
    edi = *((esp + 0x54));
    ebx = 0;
    ecx = 0;
    goto label_15;
label_58:
    stack_chk_fail ();
    if (eax < 0) {
label_74:
        goto label_26;
    }
    if (*((esp + 0x7c)) >= esi) {
        goto label_27;
    }
    goto label_26;
label_75:
    ebx = 0;
    goto label_28;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d9d0 */
#include <stdint.h>
 
int32_t fcn_0804d9d0 (void) {
    eax = 0x80621e0;
    fcn_0804d980 ();
    eax = 0x80621e8;
    return void (*0x804d980)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c810 */
#include <stdint.h>
 
int32_t fcn_0804c810 (void) {
    int32_t var_4h;
    int32_t var_8h;
    void * ptr;
    int32_t var_1ch;
    esi = edx;
    if (eax != 0) {
        edx = imp._Jv_RegisterClasses;
        if (edx == 0) {
            goto label_3;
        }
        edx = eax;
        ecx = 0;
        eax = 0;
        fcn_0804c2b0 ();
    }
label_3:
    ebx = imp._Jv_RegisterClasses;
    eax = esi;
    esi = (int32_t) al;
    *((esp + 0x1c)) = esi;
    edi = ebx*4 - 4;
    esi = ebx;
    goto label_4;
label_0:
    edx = *((ebx + 4));
    ecx = *((esp + 0x1c));
    fcn_0804c2b0 ();
    if (*((ebx + 0x68)) == 9) {
        goto label_5;
    }
    do {
label_1:
        edi -= 4;
label_4:
        if (esi == 0) {
            goto label_6;
        }
        eax = imp._Jv_RegisterClasses;
        edx = 0;
        esi--;
        ebx = *((eax + edi));
        eax = *((ebx + 0x68));
        dl = (eax == 9) ? 1 : 0;
        al = (eax == 3) ? 1 : 0;
        eax = (int32_t) al;
        edx |= eax;
    } while (edx == 0);
    eax = *(ebx);
    if (ebp == 0) {
        goto label_0;
    }
    eax = fcn_080520b0 (eax);
    if (*(eax) == 0x2e) {
        goto label_7;
    }
label_2:
    eax = *(ebx);
    if (*(eax) == 0x2f) {
        goto label_0;
    }
    eax = fcn_080522e0 (ebp, eax, 0);
    edx = *((ebx + 4));
    ecx = *((esp + 0x1c));
    *((esp + 0x18)) = eax;
    fcn_0804c2b0 ();
    eax = *((esp + 0x18));
    free (eax);
    if (*((ebx + 0x68)) != 9) {
        goto label_1;
    }
label_5:
    eax = *(ebx);
    eax = free (eax);
    goto label_1;
label_6:
    ebx = esi;
    esi = imp._Jv_RegisterClasses;
    eax = 0;
    if (esi == 0) {
        goto label_8;
    }
    ecx = imp._Jv_RegisterClasses;
    eax = ebx;
    do {
        edx = *((ecx + ebx*4));
        *((ecx + eax*4)) = edx;
        dl = (*((edx + 0x68)) != 9) ? 1 : 0;
        ebx++;
        edx = (int32_t) dl;
        eax += edx;
    } while (ebx != esi);
label_8:
    *(0x80624d4) = eax;
    return eax;
label_7:
    edx = 0;
    dl = (*((eax + 1)) == 0x2e) ? 1 : 0;
    eax = *((eax + edx + 1));
    edx = 0;
    dl = (al == 0x2f) ? 1 : 0;
    al = (al == 0) ? 1 : 0;
    eax = (int32_t) al;
    edx |= eax;
    if (edx != 0) {
        goto label_1;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8053710 */
#include <stdint.h>
 
int32_t fcn_08053710 (int32_t arg_40h, int32_t arg_44h) {
    int32_t var_4h;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_1ch;
    int32_t var_1eh;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    *((esp + 0x30)) = ebx;
    ebx = *((esp + 0x40));
    ecx = esp + 0x2c;
    edx = *((esp + 0x44));
    *((esp + 0x34)) = esi;
    *((esp + 0x38)) = edi;
    eax = ebx;
    eax = fcn_08052950 (1);
    esi = eax;
    if (eax == 0) {
        goto label_1;
    }
    eax = *((esp + 0x2c));
    *((ebx + 0x10))--;
    eax = *(eax);
    if (eax != 0) {
        goto label_1;
    }
    goto label_3;
label_0:
    fp_stack++;
    do {
label_1:
        eax = esi;
        ebx = *((esp + 0x30));
        esi = *((esp + 0x34));
        edi = *((esp + 0x38));
        return eax;
label_3:
        eax = *((ebx + 0xc));
        edx = 0;
        eax--;
        *((ebx + 0xc)) = eax;
        *((esp + 0x14)) = edx;
        edx = 0;
        *((esp + 0x10)) = eax;
        eax = *((ebx + 8));
        ecx = *((ebx + 0x14));
        *(fp_stack--) = *((esp + 0x10));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = eax;
        *(fp_stack--) = *((esp + 0x10));
        fp_stack[0] *= *(ecx);
        fp_stack--;
        fp_stack++;
    } while (fp_stack[0] <= fp_stack[1]);
    eax = ebx + 0x14;
    fcn_08052b60 ();
    edx = *((ebx + 8));
    ecx = 0;
    eax = *((ebx + 0x14));
    *((esp + 0x14)) = ecx;
    ecx = 0;
    *((esp + 0x10)) = edx;
    edx = *((ebx + 0xc));
    *(fp_stack--) = *((esp + 0x10));
    *((esp + 0x14)) = ecx;
    *((esp + 0x10)) = edx;
    *(fp_stack--) = *((esp + 0x10));
    *(fp_stack--) = *(eax);
    fp_stack[0] *= fp_stack[2];
    fp_stack--;
    fp_stack++;
    if (fp_stack[0] <= fp_stack[1]) {
        goto label_0;
    }
    fp_stack[0] *= *((eax + 4));
    if (*((eax + 0x10)) == 0) {
        goto label_4;
    }
label_2:
    *(esp) = ebx;
    eax = *((esp + 0x1e));
    ah = 0xc;
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x10));
    al = fcn_08053370 (ax, eax);
    if (al != 0) {
        goto label_1;
    }
    eax = *((ebx + 0x24));
    if (eax != 0) {
        goto label_5;
    }
    goto label_6;
    do {
        eax = edi;
label_5:
        edi = *((eax + 4));
        free (eax);
    } while (edi != 0);
label_6:
    *((ebx + 0x24)) = 0;
    goto label_1;
label_4:
    fp_stack[0] *= *((eax + 8));
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804ca20 */
#include <stdint.h>
 
int32_t fcn_0804ca20 (void) {
    int32_t var_4h;
    int32_t var_8h;
    ecx = *((edx + 0xc));
    edi = *((edx + 8));
    esi = ecx;
    esi -= edi;
    esi >>= 2;
    if (esi == 0) {
        goto label_2;
    }
    if (ecx == edi) {
        goto label_3;
    }
label_1:
    ebx = *((edx + 0x18));
    ebp = *((edx + 0x10));
    ecx += ebx;
    ebx = ~ebx;
    ecx &= ebx;
    ebx = ebp;
    *((edx + 0xc)) = ecx;
    ebx -= *((edx + 4));
    ecx -= *((edx + 4));
    if (ecx > ebx) {
        goto label_4;
    }
label_0:
    ecx = *((edx + 0xc));
    ebx = 0;
    *((edx + 8)) = ecx;
    edx = stdout;
    *(esp) = eax;
    *((esp + 4)) = edx;
    fputs_unlocked ();
    do {
        eax = *((edi + ebx*4));
        ebx++;
        *((esp + 4)) = 0x805a08a;
        *(esp) = 1;
        *((esp + 8)) = eax;
        printf_chk ();
    } while (ebx != esi);
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_5;
    }
    *(edx) = 0xa;
    edx++;
    *((eax + 0x14)) = edx;
    do {
label_2:
        return eax;
label_4:
        *((edx + 0xc)) = ebp;
        goto label_0;
label_3:
        *((edx + 0x28)) |= 2;
        goto label_1;
label_5:
        *((esp + 4)) = 0xa;
        *(esp) = eax;
        overflow ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052d20 */
#include <stdint.h>
 
int32_t fcn_08052d20 (int32_t arg_4h) {
    eax = *((esp + 4));
    eax = *((eax + 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80532b0 */
#include <stdint.h>
 
int32_t fcn_080532b0 (int32_t arg_20h) {
    esi = *((esp + 0x20));
    edi = *((esi + 0x20));
    if (edi == 0) {
        goto label_2;
    }
    ebx = *((esi + 0x10));
    if (ebx == 0) {
        goto label_2;
    }
    edi = *(esi);
    if (edi >= *((esi + 4))) {
        goto label_3;
    }
label_0:
    eax = *(edi);
    if (eax == 0) {
        goto label_4;
    }
    if (edi == 0) {
        goto label_4;
    }
    ebx = edi;
    while (ebx != 0) {
        eax = *(ebx);
        uint32_t (*esi + 0x20)(uint32_t) (eax);
        ebx = *((ebx + 4));
    }
label_4:
    eax = *((esi + 4));
    edi += 8;
    if (eax > edi) {
        goto label_0;
    }
    goto label_5;
label_2:
    eax = *((esi + 4));
label_5:
    edi = *(esi);
    if (edi >= eax) {
        goto label_3;
    }
label_1:
    eax = *((edi + 4));
    if (eax != 0) {
        goto label_6;
    }
    goto label_7;
    do {
        eax = ebx;
label_6:
        ebx = *((eax + 4));
        free (eax);
    } while (ebx != 0);
label_7:
    edi += 8;
    if (*((esi + 4)) > edi) {
        goto label_1;
    }
label_3:
    eax = *((esi + 0x24));
    if (eax != 0) {
        goto label_8;
    }
    goto label_9;
    do {
        eax = ebx;
label_8:
        ebx = *((eax + 4));
        free (eax);
    } while (ebx != 0);
label_9:
    eax = *(esi);
    free (eax);
    *((esp + 0x20)) = esi;
    return free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8054ce0 */
#include <stdint.h>
 
uint32_t fcn_08054ce0 (char * s, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch, uint32_t arg_60h, int32_t arg_64h) {
    char * pwcs;
    size_t n;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    size_t ptr;
    size_t var_28h;
    size_t size;
    edi = *((esp + 0x50));
    ebx = *((esp + 0x54));
    eax = strlen (edi);
    esi = eax;
    *((esp + 0x28)) = eax;
    eax = ctype_get_mb_cur_max ();
    if (eax <= 1) {
        goto label_9;
    }
    eax = mbstowcs (0, edi, 0);
    edx = eax;
    if (eax == -1) {
        goto label_10;
    }
    ecx = eax + 1;
    eax = ecx;
    eax <<= 2;
    *((esp + 0x18)) = edx;
    *((esp + 0x24)) = ecx;
    eax = malloc (eax);
    edx = *((esp + 0x18));
    if (eax == 0) {
        goto label_11;
    }
    ecx = *((esp + 0x24));
    *((esp + 0x18)) = edx;
    eax = mbstowcs (eax, edi, ecx);
    edx = *((esp + 0x18));
    if (eax != 0) {
        goto label_12;
    }
label_0:
    edx = *((esp + 0x28));
    *((esp + 0x24)) = 0;
    *((esp + 0x28)) = edi;
label_3:
    ecx = *((esp + 0x5c));
    eax = *(ecx);
    if (esi <= eax) {
        goto label_13;
    }
    edx = eax;
    ecx = 0;
label_1:
    esi = *((esp + 0x5c));
    *(esi) = eax;
    eax = edx + ecx;
    *((esp + 0x1c)) = eax;
    eax = *((esp + 0x58));
    if (eax == 0) {
        goto label_8;
    }
    eax = *((esp + 0x60));
    esi = *((esp + 0x58));
    *((esp + 0x20)) = ecx;
    edi = ebx + esi - 1;
    esi = ecx - 1;
    if (eax == 0) {
        goto label_14;
    }
    if (*((esp + 0x60)) == 1) {
        goto label_15;
    }
    ecx &= 1;
    esi = *((esp + 0x20));
    ecx += *((esp + 0x20));
    esi--;
    eax = ecx - 1;
label_4:
    if (ecx == 0) {
        goto label_14;
    }
    if (ebx < edi) {
        goto label_16;
    }
    goto label_14;
    do {
        eax--;
        if (ebx == edi) {
            goto label_14;
        }
label_16:
        *(ebx) = 0x20;
        ebx++;
    } while (eax != 0);
label_14:
    eax = edi;
    eax -= ebx;
    if (eax <= edx) {
        edx = eax;
    }
    eax = *((esp + 0x28));
    *(ebx) = 0;
    *((esp + 8)) = edx;
    *(esp) = ebx;
    *((esp + 4)) = eax;
    eax = mempcpy ();
    edx = *((esp + 0x20));
    if (edx == 0) {
        goto label_17;
    }
    if (edi > eax) {
        goto label_18;
    }
    goto label_17;
    do {
        esi--;
        if (eax == edi) {
            goto label_17;
        }
label_18:
        *(eax) = 0x20;
        eax++;
    } while (esi != 0);
label_17:
    *(eax) = 0;
    do {
label_8:
        free (ebp);
        eax = *((esp + 0x24));
        free (eax);
        eax = *((esp + 0x1c));
        return eax;
label_10:
        if ((*((esp + 0x64)) & 1) != 0) {
            goto label_19;
        }
        ebp = 0;
        *((esp + 0x24)) = 0;
        *((esp + 0x1c)) = 0xffffffff;
    } while (1);
label_9:
    ebp = 0;
    goto label_0;
label_5:
    edx = *((esp + 0x28));
    *((esp + 0x24)) = 0;
    *((esp + 0x28)) = edi;
label_13:
    if (esi >= eax) {
        goto label_20;
    }
    ecx = eax;
    eax = esi;
    ecx -= esi;
    goto label_1;
label_12:
    *((ebp + edx*4)) = 0;
    eax = *(ebp);
    if (eax == 0) {
        goto label_21;
    }
    edx = 0;
    esi = ebp;
    *((esp + 0x2c)) = ebx;
    ebx = edx;
    do {
        eax = iswprint (eax);
        if (eax == 0) {
            *(esi) = 0xfffd;
            ebx = 1;
        }
        esi += 4;
        eax = *(esi);
    } while (eax != 0);
    esi = *((esp + 0x24));
    edx = ebx;
    *((esp + 0x18)) = dl;
    ebx = *((esp + 0x2c));
    *(esp) = ebp;
    *((esp + 4)) = esi;
    eax = wcswidth ();
    edx = *((esp + 0x18));
    esi = eax;
    if (dl == 0) {
        goto label_22;
    }
    eax = wcstombs (0, ebp, 0);
    eax++;
    *((esp + 0x2c)) = eax;
label_6:
    edx = *((esp + 0x2c));
    eax = malloc (edx);
    *((esp + 0x24)) = eax;
    if (eax == 0) {
        goto label_23;
    }
    edx = *(ebp);
    esi = 0;
    edi = ebp;
    ecx = *((esp + 0x5c));
    eax = *(ecx);
    if (edx == 0) {
        goto label_7;
    }
    *((esp + 0x28)) = ebx;
    ebx = eax;
    while (eax != -1) {
        eax += esi;
        if (ebx < eax) {
            goto label_24;
        }
label_2:
        edi += 4;
        edx = *(edi);
        if (edx == 0) {
            goto label_25;
        }
        esi = eax;
        *(esp) = edx;
        eax = wcwidth ();
    }
    eax = 1;
    eax += esi;
    *(edi) = 0xfffd;
    if (ebx >= eax) {
        goto label_2;
    }
label_24:
    ebx = *((esp + 0x28));
label_7:
    edx = *((esp + 0x2c));
    eax = *((esp + 0x24));
    *(edi) = 0;
    eax = wcstombs (eax, ebp, edx);
    edx = eax;
    eax = *((esp + 0x24));
    *((esp + 0x28)) = eax;
    goto label_3;
label_19:
    edx = esi;
    ebp = 0;
    *((esp + 0x28)) = edi;
    *((esp + 0x24)) = 0;
    goto label_3;
label_15:
    eax = esi;
    esi = 0xffffffff;
    *((esp + 0x20)) = 0;
    goto label_4;
label_21:
    edx = *((esp + 0x24));
    *(esp) = ebp;
    *((esp + 4)) = edx;
    eax = wcswidth ();
    esi = eax;
label_22:
    edx = *((esp + 0x5c));
    eax = *(edx);
    if (eax >= esi) {
        goto label_5;
    }
    ecx = *((esp + 0x28));
    ecx++;
    *((esp + 0x2c)) = ecx;
    goto label_6;
label_25:
    ebx = *((esp + 0x28));
    esi = eax;
    goto label_7;
label_11:
    if ((*((esp + 0x64)) & 1) == 0) {
        *((esp + 0x24)) = 0;
        *((esp + 0x1c)) = 0xffffffff;
        goto label_8;
label_23:
        if ((*((esp + 0x64)) & 1) != 0) {
            goto label_26;
        }
        *((esp + 0x1c)) = 0xffffffff;
        goto label_8;
    }
    edx = esi;
    *((esp + 0x28)) = edi;
    *((esp + 0x24)) = 0;
    goto label_3;
label_26:
    edx = *((esp + 0x28));
    *((esp + 0x28)) = edi;
    goto label_3;
label_20:
    eax = esi;
    ecx = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80556c0 */
#include <stdint.h>
 
int32_t fcn_080556c0 (int32_t arg_20h) {
    int32_t var_4h;
    eax = *((esp + 0x20));
    fcn_08055690 (0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8055690 */
#include <stdint.h>
 
int32_t fcn_08055690 (int32_t arg_20h, int32_t arg_24h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((esp + 0x24));
    eax = *((esp + 0x20));
    fcn_080567d0 (eax, 6, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80567d0 */
#include <stdint.h>
 
int32_t fcn_080567d0 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h) {
    int32_t var_10h;
    edx = *((esp + 0x54));
    ebx = esp + 0x10;
    eax = ebx;
    fcn_080556e0 ();
    edx = *((esp + 0x58));
    ecx = 0xffffffff;
    eax = *((esp + 0x50));
    fcn_08056220 (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80556e0 */
#include <stdint.h>
 
int32_t fcn_080556e0 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    ecx = 0xc;
    ebx = eax;
    eax = 0;
    edi = esp;
    memset (edi, eax, ecx);
    if (edx != 8) {
        eax = *((esp + 4));
        *(ebx) = edx;
        *((ebx + 4)) = eax;
        eax = *((esp + 8));
        *((ebx + 8)) = eax;
        eax = *((esp + 0xc));
        *((ebx + 0xc)) = eax;
        eax = *((esp + 0x10));
        *((ebx + 0x10)) = eax;
        eax = *((esp + 0x14));
        *((ebx + 0x14)) = eax;
        eax = *((esp + 0x18));
        *((ebx + 0x18)) = eax;
        eax = *((esp + 0x1c));
        *((ebx + 0x1c)) = eax;
        eax = *((esp + 0x20));
        *((ebx + 0x20)) = eax;
        eax = *((esp + 0x24));
        *((ebx + 0x24)) = eax;
        eax = *((esp + 0x28));
        *((ebx + 0x28)) = eax;
        eax = *((esp + 0x2c));
        *((ebx + 0x2c)) = eax;
        eax = ebx;
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058bd0 */
#include <stdint.h>
 
uint32_t fcn_08058bd0 (char * s) {
    int32_t var_4h;
    ebx = *((esp + 0x20));
    eax = strlen (ebx);
    eax++;
    fcn_08058ba0 (ebx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058ba0 */
#include <stdint.h>
 
uint32_t fcn_08058ba0 (int32_t arg_20h, int32_t arg_24h) {
    void * s2;
    size_t n;
    ebx = *((esp + 0x24));
    eax = fcn_08058a70 (ebx);
    edx = *((esp + 0x20));
    memcpy (eax, edx, ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c2b0 */
#include <stdint.h>
 
uint32_t fcn_0804c2b0 (void) {
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    *((esp + 0x1c)) = ebx;
    ebx = eax;
    *((esp + 0x20)) = esi;
    esi = edx;
    *((esp + 0x24)) = edi;
    *((esp + 0x28)) = ebp;
    eax = fcn_08058a70 (0x10);
    edi = eax;
    eax = 0;
    if (esi != 0) {
        eax = fcn_08058bd0 (esi);
    }
    *((edi + 4)) = eax;
    eax = 0;
    if (ebx != 0) {
        eax = fcn_08058bd0 (ebx);
    }
    *(edi) = eax;
    eax = ebp;
    ebx = *((esp + 0x1c));
    *((edi + 8)) = al;
    eax = imp._Jv_RegisterClasses;
    esi = *((esp + 0x20));
    *(0x8062350) = edi;
    ebp = *((esp + 0x28));
    *((edi + 0xc)) = eax;
    edi = *((esp + 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058c00 */
#include <stdint.h>
 
uint32_t fcn_08058c00 (void) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805dd0f);
    edx = *(0x80622cc);
    *((esp + 8)) = 0x805a1bf;
    error (edx, 0);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059090 */
#include <stdint.h>
 
int32_t fcn_08059090 (int32_t arg_40h, int32_t arg_44h, int32_t arg_48h, int32_t arg_4ch, int32_t arg_50h) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_2eh;
    int32_t var_2fh;
    esi = *(0x80622cc);
    eax = *((esp + 0x40));
    edx = *((esp + 0x44));
    edi = *((esp + 0x48));
    if (eax > 3) {
        goto label_3;
    }
    ecx = 0x805de70;
    if (eax < 2) {
        goto label_4;
    }
label_0:
    if (edx < 0) {
        goto label_5;
    }
    eax = *((esp + 0x4c));
    edx <<= 4;
    ebx = 0x805de6d;
    edi = *((eax + edx));
label_2:
    *((esp + 8)) = 5;
    eax = dcgettext (0, ecx);
    edx = *((esp + 0x50));
    *((esp + 0x10)) = edi;
    *((esp + 0xc)) = ebx;
    *((esp + 4)) = 0;
    error (edx, eax);
    do {
label_1:
        eax = abort ();
label_3:
        ecx = 0x805de35;
    } while (eax != 4);
    goto label_0;
label_4:
    eax--;
    if (eax != 0) {
        goto label_1;
    }
    ecx = 0x805de50;
    goto label_0;
label_5:
    eax = edi;
    ebx = 0x805de6d;
    ebx -= edx;
    *((esp + 0x2e)) = al;
    edi = esp + 0x2e;
    *((esp + 0x2f)) = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804c010 */
#include <stdint.h>
 
int32_t fcn_0804c010 (int32_t arg_20h) {
    int32_t var_4h;
    uint32_t var_bh;
    edi = 0;
    esi = 0;
    ebx = *(eax);
    *((esp + 0xb)) = cl;
    ecx = *(edx);
    *((esp + 4)) = eax;
    eax = 0;
    *(esp) = edx;
label_5:
    if (edi == 2) {
        goto label_10;
    }
    if (edi > 2) {
        goto label_11;
    }
    if (edi == 1) {
        goto label_12;
    }
label_2:
    edi = *(ecx);
    edx = edi;
    if (dl == 0x3d) {
        goto label_13;
    }
    if (dl <= 0x3d) {
label_0:
        goto label_14;
    }
    edx = edi;
    if (dl == 0x5c) {
        goto label_15;
    }
    if (dl != 0x5e) {
        goto label_16;
    }
    ecx++;
    edi = *(ecx);
    ebp = edi - 0x40;
    edx = ebp;
    if (dl <= 0x3e) {
        goto label_17;
    }
label_3:
    edx = edi;
    if (dl == 0x3f) {
        goto label_18;
    }
    edx = *(esp);
    eax = 0;
label_1:
    edi = *((esp + 4));
    *(edi) = ebx;
    *(edx) = ecx;
    edx = *((esp + 0x20));
    *(edx) = esi;
    return eax;
    do {
        eax = edi + eax*8 - 0x30;
        ecx++;
label_10:
        edi = *(ecx);
        ebp = edi - 0x30;
        edx = ebp;
    } while (dl <= 7);
label_4:
    *(ebx) = al;
    edi = *(ecx);
    ebx++;
    esi++;
    edx = edi;
    if (dl != 0x3d) {
        goto label_0;
    }
label_13:
    if (*((esp + 0xb)) == 0) {
        goto label_16;
    }
    edx = *(esp);
    eax = 1;
    goto label_1;
label_11:
    if (edi == 3) {
        goto label_19;
    }
    if (edi != 4) {
        goto label_2;
    }
    edi = *(ecx);
    ebp = edi - 0x40;
    edx = ebp;
    if (dl > 0x3e) {
        goto label_3;
    }
    goto label_17;
    eax <<= 4;
    ecx++;
    eax = edi + eax - 0x57;
label_19:
    edi = *(ecx);
    ebp = edi - 0x30;
    edx = ebp;
    if (dl > 0x36) {
        goto label_4;
    }
label_7:
    ebp &= 0xff;
    /* switch table (55 cases) at 0x805a5a0 */
label_15:
    ecx++;
label_12:
    edi = *(ecx);
    edx = edi;
    if (dl <= 0x78) {
        goto label_20;
    }
    eax = edi;
label_8:
    *(ebx) = al;
    esi++;
    ebx++;
    edi = 0;
label_9:
    ecx++;
    if (edi <= 4) {
        goto label_5;
    }
    edx = *(esp);
    goto label_21;
label_20:
    ebp = (int32_t) dl;
    /* switch table (121 cases) at 0x805a67c */
label_17:
    edi &= 0x1f;
    do {
label_16:
        edx = edi;
        ecx++;
        *(ebx) = dl;
        esi++;
        ebx++;
        goto label_2;
label_14:
        if (dl == 0) {
label_6:
            edx = *(esp);
            edi = 5;
label_21:
            al = (edi != 6) ? 1 : 0;
            goto label_1;
        }
    } while (dl != 0x3a);
    goto label_6;
    eax <<= 4;
    ecx++;
    eax = edi + eax - 0x37;
    edi = *(ecx);
    ebp = edi - 0x30;
    edx = ebp;
    if (dl > 0x36) {
        goto label_4;
    }
    goto label_7;
    eax <<= 4;
    ecx++;
    eax = edi + eax - 0x30;
    edi = *(ecx);
    ebp = edi - 0x30;
    edx = ebp;
    if (dl > 0x36) {
        goto label_4;
    }
    goto label_7;
    eax = 0xb;
    goto label_8;
    eax = 9;
    goto label_8;
    eax = 0x7f;
    goto label_8;
    eax = edi - 0x30;
    edi = 2;
    goto label_9;
    edi = 6;
    goto label_9;
    eax = 0xd;
    goto label_8;
    eax = 0xa;
    goto label_8;
    eax = 0xc;
    goto label_8;
    eax = 0x1b;
    goto label_8;
    eax = 8;
    goto label_8;
    eax = 7;
    goto label_8;
    eax = 0x20;
    goto label_8;
    edi = 3;
    eax = 0;
    goto label_9;
label_18:
    *(ebx) = 0x7f;
    esi++;
    ebx++;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059dc0 */
#include <stdint.h>
 
int32_t fcn_08059dc0 (int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch) {
    int32_t var_4h;
    uint32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *((esp + 0x18)) = ebp;
    ebp = *((esp + 0x2c));
    eax = *((esp + 0x20));
    *((esp + 0x10)) = esi;
    ecx = *((esp + 0x28));
    esi = *((esp + 0x24));
    *((esp + 0x14)) = edi;
    *((esp + 8)) = eax;
    edi = ecx;
    *(esp) = eax;
    edx = esi;
    if (ebp != 0) {
        goto label_3;
    }
    if (ecx <= esi) {
        goto label_4;
    }
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    do {
        eax = edx;
        edx = 0;
        esi = *((esp + 0x10));
        edi = *((esp + 0x14));
        ebp = *((esp + 0x18));
        return eax;
label_3:
        if (ebp > esi) {
            goto label_5;
        }
        __asm ("bsr eax, ebp");
        eax ^= 0x1f;
        *((esp + 4)) = eax;
        if (ebp != esi) {
            goto label_6;
        }
        if (ecx > *(esp)) {
            goto label_7;
        }
label_1:
        edx = esi;
        esi = *(esp);
        esi -= ecx;
        edx -= ebp;
        *(esp) = esi;
label_2:
        eax = *(esp);
        esi = *((esp + 0x10));
        edi = *((esp + 0x14));
        ebp = *((esp + 0x18));
        return eax;
label_4:
        if (ecx == 0) {
            eax = 1;
            edx = 0;
            eax = edx:eax / ecx;
            edx = edx:eax % ecx;
            ecx = eax;
        }
        eax = esi;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax = *(esp);
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
    } while (1);
label_5:
    edx = esi;
    esi = *((esp + 0x10));
    edi = *((esp + 0x14));
    ebp = *((esp + 0x18));
    return eax;
label_6:
    ecx = *((esp + 4));
    eax = ebp;
    ebp -= *((esp + 4));
    edx = edi;
    eax <<= cl;
    ecx = ebp;
    edx >>= cl;
    ecx = *((esp + 4));
    edx |= eax;
    eax = *((esp + 8));
    *(esp) = edx;
    edx = esi;
    edi <<= cl;
    ecx = ebp;
    edx >>= cl;
    ecx = *((esp + 4));
    *((esp + 0xc)) = edi;
    esi <<= cl;
    ecx = ebp;
    eax >>= cl;
    ecx = *((esp + 4));
    eax |= esi;
    esi = *((esp + 8));
    eax = *(edx:eax) / esp;
    edx = *(edx:eax) % esp;
    esi <<= cl;
    *((esp + 8)) = esi;
    esi = edx;
    edx:eax = eax * edi;
    ecx = eax;
    edi = edx;
    if (esi < edx) {
        goto label_8;
    }
    while (esi != edx) {
label_0:
        eax = *((esp + 8));
        eax -= ecx;
        esi -= edi;
        ecx = *((esp + 4));
        edx = esi;
        eax >>= cl;
        ecx = ebp;
        edx <<= cl;
        ecx = *((esp + 4));
        eax |= edx;
        edx = esi;
        edx >>= cl;
        esi = *((esp + 0x10));
        edi = *((esp + 0x14));
        ebp = *((esp + 0x18));
        return eax;
    }
label_8:
    edi = edx;
    ecx = eax;
    ecx -= *((esp + 0xc));
    edi -= *(esp);
    goto label_0;
label_7:
    if (ebp < esi) {
        goto label_1;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80555b0 */
#include <stdint.h>
 
int32_t fcn_080555b0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    void * s2;
    size_t n;
    uint32_t var_14h;
    uint32_t var_18h;
    uint32_t var_1ch;
    uint32_t var_20h;
    uint32_t var_24h;
    uint32_t var_28h;
    int32_t var_2ch;
    do {
label_0:
        ebx = eax;
        *((esp + 0x1c)) = edx;
        *((esp + 0x24)) = ecx;
        if (edx <= 2) {
            if (edx == 2) {
                goto label_5;
            }
label_2:
            return;
        }
        eax = *((esp + 0x1c));
        edx = *((esp + 0x1c));
        ecx = *((esp + 0x24));
        eax >>= 1;
        esi = ebx + eax*4;
        edx -= eax;
        esi = *((esp + 0x50));
        eax = *((esp + 0x2c));
        void (*0x8055380)(uint32_t) (esi);
    } while (1);
    if (*((esp + 0x20)) == 1) {
        goto label_6;
    }
    esi = *((esp + 0x1c));
    eax = *((esp + 0x50));
    edx = *((esp + 0x20));
    ecx = *((esp + 0x24));
    esi >>= 2;
    esi = ebx + esi*4;
    edx -= *((esp + 0x28));
    eax = esi;
    void (*0x8055380)(uint32_t) (esi);
    goto label_0;
    edx = *((esp + 0x50));
    eax = ebx;
    ecx = *((esp + 0x24));
    edx = *((esp + 0x28));
    void (*0x8055380)(uint32_t) (edx);
    goto label_0;
    eax = *(ebx);
    ebp = *(esi);
    esi = *((esp + 0x24));
    *((esp + 0x18)) = ebx;
    edi = *((esp + 0x28));
    *((esp + 0x14)) = 0;
    ebx = eax;
    esi += 4;
    while (eax > 0) {
        edi++;
        *((esi - 4)) = ebp;
        if (*((esp + 0x20)) == edi) {
            goto label_7;
        }
        eax = *((esp + 0x18));
        ebp = *((eax + edi*4));
label_1:
        esi += 4;
        eax = uint32_t (*esp + 0x50)(uint32_t, uint32_t) (ebx, ebp);
    }
    ecx = *((esp + 0x14));
    *((esi - 4)) = ebx;
    if (*((esp + 0x28)) == ecx) {
        goto label_8;
    }
    eax = *((esp + 0x18));
    ebx = *((eax + ecx*4));
    goto label_1;
label_6:
    edx = *(ebx);
    ecx = *((esp + 0x24));
    *((esp + 0x14)) = edx;
    *(ecx) = edx;
label_4:
    esi = *((esp + 0x2c));
    edi = *((esp + 0x20));
    *((esp + 0x18)) = 0;
    ebp = *(esi);
    esi = 1;
    while (eax > 0) {
        edi++;
        *((ebx + esi*4 - 4)) = ebp;
        if (*((esp + 0x1c)) == edi) {
            goto label_9;
        }
        ebp = *((ebx + edi*4));
label_3:
        esi++;
        edx = *((esp + 0x14));
        eax = uint32_t (*esp + 0x50)(uint32_t, uint32_t) (edx, ebp);
    }
    ecx = *((esp + 0x14));
    edx = *((esp + 0x18));
    *((ebx + esi*4 - 4)) = ecx;
    if (*((esp + 0x20)) == edx) {
        goto label_2;
    }
    ecx = *((esp + 0x24));
    ecx = *((ecx + edx*4));
    *((esp + 0x14)) = ecx;
    goto label_3;
label_9:
    eax = ebx + esi*4;
    ecx = *((esp + 0x20));
    ebx = *((esp + 0x18));
    esi = *((esp + 0x24));
    ecx -= *((esp + 0x18));
    edx = esi + ebx*4;
    ecx <<= 2;
    eax = memcpy (eax, edx, ecx);
    return eax;
label_5:
    esi = *(eax);
    edi = *((eax + 4));
    eax = uint32_t (*esp + 0x50)(uint32_t, uint32_t) (esi, edi);
    if (eax <= 0) {
        goto label_2;
    }
    *(ebx) = edi;
    *((ebx + 4)) = esi;
    return eax;
label_7:
    ebx = *((esp + 0x18));
    do {
        ecx = *((esp + 0x14));
        edx = *((esp + 0x28));
        edx -= *((esp + 0x14));
        eax = ebx + ecx*4;
        edx <<= 2;
        memcpy (esi, eax, edx);
        ecx = *((esp + 0x24));
        ecx = *(ecx);
        *((esp + 0x14)) = ecx;
        goto label_4;
label_8:
        edx = *((esp + 0x20));
        ebx = *((esp + 0x18));
        *((esp + 0x14)) = edi;
        *((esp + 0x28)) = edx;
    } while (1);
    ebx = *((esp + 0x10));
    eax = *((esp + 8));
    edx = *((esp + 0xc));
    *((esp + 8)) = ebx;
    ecx = eax + edx*4;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80522e0 */
#include <stdint.h>
 
int32_t fcn_080522e0 (int32_t arg_20h, int32_t arg_24h, int32_t arg_28h) {
    int32_t var_4h_2;
    int32_t var_8h_2;
    size_t * var_18h;
    size_t size;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_48h;
    eax = *((esp + 0x28));
    eax = *((esp + 0x24));
    eax = *((esp + 0x20));
    eax = void (*0x8052310)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
    if (eax != 0) {
        return eax;
    }
    return fcn_08058c00 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052100 */
#include <stdint.h>
 
uint32_t fcn_08052100 (char * s) {
    ebx = *((esp + 0x20));
    eax = strlen (ebx);
    while (eax != 1) {
        if (*((ebx + eax - 1)) != 0x2f) {
label_0:
            return eax;
        }
        eax--;
    }
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8055350 */
#include <stdint.h>
 
uint32_t fcn_08055350 (char * s, int32_t arg_24h) {
    size_t var_4h;
    int32_t var_8h;
    ebx = *((esp + 0x20));
    eax = strlen (ebx);
    edx = *((esp + 0x24));
    fcn_08055160 (ebx, eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8055160 */
#include <stdint.h>
 
int32_t fcn_08055160 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h) {
    int32_t var_4h;
    char * s;
    size_t n;
    mbstate_t * ps;
    uint32_t var_18h;
    int32_t var_1ch;
    wchar_t * pwc;
    int32_t var_24h;
    int32_t var_2ch;
    esi = *((esp + 0x50));
    edx = *((esp + 0x54));
    eax = *(gs:0x14);
    *((esp + 0x2c)) = eax;
    eax = 0;
    edx += esi;
    *((esp + 0x18)) = edx;
    eax = ctype_get_mb_cur_max ();
    if (eax <= 1) {
        goto label_6;
    }
    edi = 0;
    if (esi >= *((esp + 0x18))) {
        goto label_4;
    }
    ebp = esp + 0x24;
label_1:
    eax = *(esi);
    if (al > 0x5f) {
        goto label_7;
    }
    if (al >= 0x41) {
        goto label_3;
    }
    if (al >= 0x20) {
        if (al <= 0x23) {
            goto label_3;
        }
        eax -= 0x25;
        if (al <= 0x1a) {
            goto label_3;
        }
    }
label_2:
    edx = *((esp + 0x58));
    *(ebp) = 0;
    *((ebp + 4)) = 0;
    edx &= 2;
    *((esp + 0x1c)) = edx;
    while (eax >= 0) {
        edx = 0x7fffffff;
        edx -= edi;
        if (eax > edx) {
            goto label_8;
        }
        edi += eax;
label_0:
        esi += ebx;
        eax = mbsinit (ebp);
        if (eax != 0) {
            goto label_9;
        }
        eax = *((esp + 0x18));
        eax -= esi;
        eax = esp + 0x20;
        eax = mbrtowc (ebp, esi, eax);
        ebx = eax;
        if (eax == -1) {
            goto label_10;
        }
        if (eax == 0xfffffffe) {
            goto label_11;
        }
        eax = *((esp + 0x20));
        edx = 1;
        if (eax == 0) {
            ebx = edx;
        }
        *(esp) = eax;
        eax = wcwidth ();
    }
    eax = *((esp + 0x1c));
    if (eax != 0) {
        goto label_12;
    }
    eax = *((esp + 0x20));
    eax = iswcntrl (eax);
    if (eax != 0) {
        goto label_0;
    }
    if (edi == 0x7fffffff) {
        goto label_4;
    }
    edi++;
    goto label_0;
label_10:
    if ((*((esp + 0x58)) & 1) != 0) {
        goto label_12;
    }
label_3:
    esi++;
    edi++;
label_9:
    if (*((esp + 0x18)) > esi) {
        goto label_1;
    }
label_4:
    edx = *((esp + 0x2c));
    edx ^= *(gs:0x14);
    eax = edi;
    if (*((esp + 0x18)) != esi) {
        goto label_13;
    }
    return eax;
label_7:
    eax -= 0x61;
    if (al > 0x1d) {
        goto label_2;
    }
    goto label_3;
label_11:
    if ((*((esp + 0x58)) & 1) != 0) {
        goto label_12;
    }
    edi++;
    goto label_4;
label_8:
    edi = 0x7fffffff;
    goto label_4;
label_6:
    edi = 0;
    if (esi >= *((esp + 0x18))) {
        goto label_4;
    }
    eax = ctype_b_loc ();
    ecx = *((esp + 0x58));
    edi = 0;
    ebx = *((esp + 0x18));
    ecx &= 2;
    edx = *(eax);
label_5:
    eax = *(esi);
    eax = *((edx + eax*2));
    if ((ah & 0x40) == 0) {
        if (ecx != 0) {
            goto label_12;
        }
        if ((al & 2) != 0) {
            goto label_14;
        }
    }
    if (edi == 0x7fffffff) {
        goto label_4;
    }
    edi++;
label_14:
    esi++;
    if (esi != ebx) {
        goto label_5;
    }
    goto label_4;
label_12:
    edi = 0xffffffff;
    goto label_4;
label_13:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8054860 */
#include <stdint.h>
 
int32_t fcn_08054860 (int32_t arg_20h) {
    char * src;
    eax = imp._Jv_RegisterClasses;
    ebx = *((esp + 0x20));
    if (eax == 0) {
        goto label_1;
    }
    esi = eax;
    if (*(eax) != ebx) {
        goto label_2;
    }
    goto label_3;
    do {
        if (*(eax) == ebx) {
            goto label_4;
        }
label_2:
        eax = *((eax + 4));
    } while (eax != 0);
label_1:
    *(esp) = ebx;
    eax = getpwuid ();
    if (eax == 0) {
        goto label_5;
    }
    edi = *(eax);
    eax = strlen (edi);
    eax += 9;
label_0:
    fcn_08058a70 (eax);
    *(eax) = ebx;
    esi = eax;
    eax = eax + 8;
    strcpy (eax, edi);
    eax = imp._Jv_RegisterClasses;
    *(0x8062dac) = esi;
    *((esi + 4)) = eax;
    do {
label_3:
        eax = 0;
        edx = esi + 8;
        if (*((esi + 8)) != 0) {
            eax = edx;
        }
        return eax;
label_4:
        esi = eax;
    } while (1);
label_5:
    al = 9;
    edi = 0x805da85;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056510 */
#include <stdint.h>
 
int32_t fcn_08056510 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    eax = *((esp + 0x40));
    *((esp + 0x28)) = edi;
    edi = 0x8062dc0;
    *((esp + 0x20)) = ebx;
    *((esp + 0x24)) = esi;
    if (eax != 0) {
        edi = eax;
    }
    eax = errno_location ();
    ecx = *((esp + 0x38));
    edx = *((esp + 0x34));
    esi = *(eax);
    ebx = eax;
    eax = *((edi + 0x2c));
    eax = *((edi + 0x28));
    eax = edi + 8;
    eax = *((edi + 4));
    eax = *(edi);
    eax = *((esp + 0x3c));
    eax = *((esp + 0x30));
    fcn_08055760 (eax, eax, eax);
    edi = *((esp + 0x28));
    *(ebx) = esi;
    ebx = *((esp + 0x20));
    esi = *((esp + 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8055760 */
#include <stdint.h>
 
int32_t fcn_08055760 (size_t arg_b0h, char * arg_b4h, int32_t arg_b8h, int32_t arg_bch, int32_t arg_c0h, int32_t arg_c4h) {
    char * s2;
    size_t n;
    char * ps;
    int32_t var_10h;
    int32_t var_14h;
    size_t * var_2ch;
    uint32_t var_30h;
    char * var_34h;
    uint32_t var_38h;
    int32_t var_3ch;
    uint32_t var_40h;
    uint32_t var_53h;
    int32_t var_54h;
    size_t canary;
    char * var_5ch;
    uint32_t var_60h;
    uint32_t var_64h;
    char * s;
    uint32_t var_6ch;
    int32_t var_70h;
    int32_t var_74h;
    int32_t var_7ah;
    uint32_t var_7bh;
    uint32_t var_7ch;
    wchar_t * pwc;
    int32_t var_84h;
    int32_t var_88h;
    int32_t var_8ch;
label_8:
    *((esp + 0x3c)) = eax;
    eax = *((esp + 0xc0));
    *((esp + 0x38)) = edx;
    edx = *((esp + 0xbc));
    *((esp + 0x34)) = ecx;
    *((esp + 0x70)) = eax;
    eax = *((esp + 0xc4));
    *((esp + 0x54)) = edx;
    edx = *(gs:0x14);
    *((esp + 0x8c)) = edx;
    edx = 0;
    *((esp + 0x68)) = eax;
    eax = ctype_get_mb_cur_max ();
    esp + 0x53 = ((*((esp + 0xb8)) & 2) != 0) ? 1 : 0;
    *((esp + 0x6c)) = eax;
    if (*((esp + 0xb4)) > 8) {
        abort ();
    }
    edi = *((esp + 0xb4));
    /* switch table (9 cases) at 0x805d520 */
    if (*((esp + 0x53)) != 0) {
        goto label_26;
    }
    eax = *((esp + 0x38));
    if (eax == 0) {
        goto label_27;
    }
    eax = *((esp + 0x3c));
    ebx = 1;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d4f4;
    *(eax) = 0x22;
label_2:
    esi = 0;
    edx = ebp;
label_3:
    al = (esi != *((esp + 0xb0))) ? 1 : 0;
    if (*((esp + 0xb0)) == -1) {
        goto label_28;
    }
    if (al == 0) {
        goto label_29;
    }
label_15:
    if (dl == 0) {
        goto label_30;
    }
    ebp = *((esp + 0x58));
    if (ebp == 0) {
        goto label_30;
    }
    eax = *((esp + 0x58));
    edi = *((esp + 0x34));
    eax += esi;
    edi += esi;
    if (*((esp + 0xb0)) >= eax) {
        goto label_31;
    }
    *((esp + 0x30)) = 0;
label_17:
    ebp = *(edi);
    eax = ebp;
    if (al <= 0x7e) {
        goto label_32;
    }
label_4:
    if (*((esp + 0x6c)) != 1) {
        goto label_33;
    }
    *((esp + 0x2c)) = dl;
    eax = ctype_b_loc ();
    ecx = ebp;
    edx = *((esp + 0x2c));
    edi = (int32_t) cl;
    *((esp + 0x60)) = 1;
    eax = *(eax);
    esp + 0x40 = ((*((eax + edi*2 + 1)) & 0x40) != 0) ? 1 : 0;
label_19:
    if (dl == 0) {
        goto label_9;
    }
    eax = ebx;
    if (*((esp + 0x40)) != 0) {
        goto label_34;
    }
label_18:
    eax = *((esp + 0x60));
    ecx = ebp;
    *((esp + 0x60)) = dl;
    edi = *((esp + 0x38));
    eax += esi;
    *((esp + 0x64)) = eax;
    eax = *((esp + 0x30));
    while (*((esp + 0x60)) != 0) {
        if (*((esp + 0x40)) != 0) {
            goto label_35;
        }
        if (*((esp + 0x53)) != 0) {
            goto label_12;
        }
        if (ebx < edi) {
            ebp = *((esp + 0x3c));
            *((ebp + ebx)) = 0x5c;
        }
        edx = ebx + 1;
        if (edi > edx) {
            edx = ecx;
            dl >>= 6;
            edx = ebp + 0x30;
            ebp = *((esp + 0x3c));
            *((ebp + ebx + 1)) = dl;
        }
        ebp = ebx + 2;
        if (edi > ebp) {
            edx = ecx;
            dl >>= 3;
            ebp &= 7;
            edx = ebp + 0x30;
            ebp = *((esp + 0x3c));
            *((ebp + ebx + 2)) = dl;
        }
        ecx &= 7;
        ebx += 3;
        ecx += 0x30;
label_0:
        esi++;
        if (*((esp + 0x64)) <= esi) {
            goto label_36;
        }
label_1:
        if (ebx < edi) {
            edx = *((esp + 0x3c));
            *((edx + ebx)) = cl;
        }
        ebp = *((esp + 0x34));
        ebx++;
        ecx = *((ebp + esi));
    }
label_35:
    if (al == 0) {
        goto label_0;
    }
    if (ebx < edi) {
        eax = *((esp + 0x3c));
        *((eax + ebx)) = 0x5c;
    }
    ebx++;
    eax = 0;
    esi++;
    if (*((esp + 0x64)) > esi) {
        goto label_1;
    }
label_36:
    edx = *((esp + 0x60));
    goto label_37;
    if (*((esp + 0x53)) != 0) {
        goto label_38;
    }
    eax = *((esp + 0x38));
    if (eax == 0) {
        goto label_39;
    }
    eax = *((esp + 0x3c));
    ebp = 0;
    ebx = 1;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d385;
    *(eax) = 0x27;
    goto label_2;
    *((esp + 0x53)) = 1;
    ebp = 0;
    ebx = 0;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d385;
    *((esp + 0xb4)) = 2;
    goto label_2;
    *((esp + 0x53)) = 1;
    ebx = 0;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d4f4;
    *((esp + 0xb4)) = 3;
    goto label_2;
    *((esp + 0x53)) = 0;
    ebx = 0;
    *((esp + 0x58)) = 0;
    *((esp + 0x5c)) = 0;
    goto label_2;
    if (eax != 0) {
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805d4f6);
        bl = (*((esp + 0xb4)) == 7) ? 1 : 0;
        *((esp + 0x70)) = eax;
        if (eax == 0x805d4f6) {
            goto label_40;
        }
label_24:
        *((esp + 8)) = 5;
        eax = dcgettext (0, 0x805d385);
        *((esp + 0x68)) = eax;
        if (eax == 0x805d385) {
            goto label_41;
        }
    }
label_23:
    ebx = 0;
    if (*((esp + 0x53)) != 0) {
        goto label_42;
    }
    edx = *((esp + 0x70));
    eax = *(edx);
    if (al == 0) {
        goto label_42;
    }
    esi = *((esp + 0x3c));
    edx = *((esp + 0x38));
    ecx = *((esp + 0x70));
    do {
        if (edx > ebx) {
            *((esi + ebx)) = al;
        }
        ebx++;
        eax = *((ecx + ebx));
    } while (al != 0);
label_42:
    eax = *((esp + 0x68));
    eax = strlen (eax);
    *((esp + 0x58)) = eax;
    eax = *((esp + 0x68));
    *((esp + 0x5c)) = eax;
    goto label_2;
    *((esp + 0x53)) = 0;
    ebp = 0;
    ebx = 0;
    *((esp + 0x58)) = 0;
    *((esp + 0x5c)) = 0;
    goto label_2;
    if (dl == 0) {
        goto label_43;
    }
    if (*((esp + 0x53)) != 0) {
        goto label_12;
    }
    if (ebx < *((esp + 0x38))) {
        eax = *((esp + 0x3c));
        *((eax + ebx)) = 0x5c;
    }
    ecx = esi + 1;
    eax = ebx + 1;
    if (*((esp + 0xb0)) > ecx) {
        edi = *((esp + 0x34));
        ecx = *((edi + esi + 1));
        if (cl <= 0x2f) {
            goto label_34;
        }
        if (cl > 0x39) {
            goto label_34;
        }
        if (*((esp + 0x38)) > eax) {
            ebp = *((esp + 0x3c));
            *((ebp + eax)) = 0x30;
        }
        eax = ebx + 2;
        if (*((esp + 0x38)) > eax) {
            eax = *((esp + 0x3c));
            *((eax + ebx + 2)) = 0x30;
        }
        eax = ebx + 3;
    }
label_34:
    ebx = eax;
label_5:
    ecx = *((esp + 0x54));
    if (ecx != 0) {
        eax = ebp;
        ecx = ebp;
        al >>= 5;
        edi = (int32_t) al;
        eax = 1;
        eax <<= cl;
        ecx = *((esp + 0x54));
        if ((*((ecx + edi*4)) & eax) != 0) {
            goto label_10;
        }
    }
label_6:
    if (*((esp + 0x30)) != 0) {
label_10:
        if (*((esp + 0x53)) != 0) {
            goto label_12;
        }
        if (ebx < *((esp + 0x38))) {
            eax = *((esp + 0x3c));
            *((eax + ebx)) = 0x5c;
        }
        ebx++;
    }
label_14:
    esi++;
label_37:
    if (ebx < *((esp + 0x38))) {
        eax = *((esp + 0x3c));
        ecx = ebp;
        *((eax + ebx)) = cl;
    }
    ebx++;
    goto label_3;
label_30:
    edi = *((esp + 0x34));
    *((esp + 0x30)) = 0;
    edi += esi;
    ebp = *(edi);
    eax = ebp;
    if (al > 0x7e) {
        goto label_4;
    }
label_32:
    eax = (int32_t) al;
    /* switch table (127 cases) at 0x805d544 */
    if (*((esp + 0xb4)) == 2) {
        goto label_44;
    }
    if (*((esp + 0xb4)) == 3) {
        if ((*((esp + 0xb8)) & 4) == 0) {
            goto label_7;
        }
        edi = esi + 2;
        if (*((esp + 0xb0)) <= edi) {
            goto label_7;
        }
        ecx = *((esp + 0x34));
        if (*((ecx + esi + 1)) != 0x3f) {
            goto label_7;
        }
        eax = *((ecx + edi));
        ecx = eax;
        ecx -= 0x21;
        *((esp + 0x40)) = al;
        if (cl > 0x1d) {
            goto label_7;
        }
        eax = 1;
        eax <<= cl;
        if ((eax & 0x380051c1) == 0) {
            goto label_7;
        }
        if (*((esp + 0x53)) != 0) {
            goto label_12;
        }
        ebp = *((esp + 0x40));
        if (ebx < *((esp + 0x38))) {
            eax = *((esp + 0x3c));
            *((eax + ebx)) = 0x3f;
        }
        eax = ebx + 1;
        if (*((esp + 0x38)) > eax) {
            eax = *((esp + 0x3c));
            *((eax + ebx + 1)) = 0x22;
        }
        eax = ebx + 2;
        if (*((esp + 0x38)) > eax) {
            eax = *((esp + 0x3c));
            *((eax + ebx + 2)) = 0x22;
        }
        eax = ebx + 3;
        if (*((esp + 0x38)) > eax) {
            eax = *((esp + 0x3c));
            *((eax + ebx + 3)) = 0x3f;
        }
        ebx += 4;
        esi = edi;
    }
label_7:
    if (dl != 0) {
        goto label_5;
    }
label_9:
    if (*((esp + 0x53)) == 0) {
        goto label_6;
    }
    goto label_5;
    al = (*((esp + 0xb0)) != 1) ? 1 : 0;
    if (*((esp + 0xb0)) == -1) {
        goto label_45;
    }
label_20:
    if (al != 0) {
        goto label_7;
    }
    if (esi != 0) {
        goto label_7;
    }
    if (*((esp + 0xb4)) != 2) {
        goto label_7;
    }
label_44:
    if (*((esp + 0x53)) == 0) {
        goto label_7;
    }
label_12:
    eax = *((esp + 0x68));
    edx = *((esp + 0xb4));
    ecx = *((esp + 0x34));
    eax = *((esp + 0x70));
    edx = *((esp + 0x38));
    eax = *((esp + 0xb8));
    eax &= 0xfffffffd;
    eax = *((esp + 0xb0));
    eax = *((esp + 0x3c));
    eax = fcn_08055760 (0, edx, eax);
    goto label_8;
    ebx = eax;
label_16:
    edx = *((esp + 0x8c));
    edx ^= *(gs:0x14);
    eax = ebx;
    if (eax != 0) {
        goto label_46;
    }
    return eax;
    eax = 0x66;
label_11:
    if (dl == 0) {
        goto label_9;
    }
    goto label_10;
    eax = 0x76;
    goto label_11;
    eax = 0x6e;
label_13:
    if (*((esp + 0xb4)) != 2) {
        goto label_11;
    }
    if (*((esp + 0x53)) == 0) {
        goto label_11;
    }
    goto label_12;
    eax = 0x74;
    goto label_13;
    eax = 0x72;
    goto label_13;
    eax = 0x62;
    goto label_11;
    eax = 0x61;
    goto label_11;
    eax = 0x5c;
    if (dl == 0) {
        goto label_13;
    }
    if (*((esp + 0x53)) == 0) {
        goto label_13;
    }
    edi = *((esp + 0x58));
    if (edi == 0) {
        goto label_13;
    }
    goto label_14;
    if (*((esp + 0xb4)) != 2) {
        goto label_7;
    }
    if (*((esp + 0x53)) != 0) {
        goto label_12;
    }
    if (ebx < *((esp + 0x38))) {
        eax = *((esp + 0x3c));
        *((eax + ebx)) = 0x27;
    }
    eax = ebx + 1;
    if (*((esp + 0x38)) > eax) {
        eax = *((esp + 0x3c));
        *((eax + ebx + 1)) = 0x5c;
    }
    eax = ebx + 2;
    if (*((esp + 0x38)) > eax) {
        eax = *((esp + 0x3c));
        *((eax + ebx + 2)) = 0x27;
    }
    ebx += 3;
    goto label_7;
label_28:
    ecx = *((esp + 0x34));
    al = (*((ecx + esi)) != 0) ? 1 : 0;
    if (al != 0) {
        goto label_15;
    }
label_29:
    if (ebx != 0) {
        goto label_47;
    }
    if (*((esp + 0xb4)) != 2) {
        goto label_47;
    }
    if (*((esp + 0x53)) != 0) {
        goto label_12;
    }
label_47:
    eax = *((esp + 0x5c));
    if (eax == 0) {
        goto label_48;
    }
    if (*((esp + 0x53)) != 0) {
        goto label_48;
    }
    edi = *((esp + 0x5c));
    eax = *(edi);
    if (al == 0) {
        goto label_48;
    }
    esi = *((esp + 0x3c));
    edx = edi;
    ecx = *((esp + 0x38));
    edx -= ebx;
    do {
        if (ecx > ebx) {
            *((esi + ebx)) = al;
        }
        ebx++;
        eax = *((edx + ebx));
    } while (al != 0);
label_48:
    if (ebx >= *((esp + 0x38))) {
        goto label_16;
    }
    eax = *((esp + 0x3c));
    *((eax + ebx)) = 0;
    goto label_16;
label_31:
    eax = *((esp + 0x58));
    ebp = *((esp + 0x5c));
    *(esp) = edi;
    eax = memcmp (dl, ebp, eax);
    edx = *((esp + 0x2c));
    *((esp + 0x30)) = 0;
    if (eax != 0) {
        goto label_17;
    }
    if (*((esp + 0x53)) != 0) {
        goto label_12;
    }
    *((esp + 0x30)) = 1;
    goto label_17;
label_33:
    *((esp + 0x84)) = 0;
    *((esp + 0x88)) = 0;
    if (*((esp + 0xb0)) == -1) {
        goto label_49;
    }
label_22:
    *((esp + 0x7a)) = dl;
    edx = ebp;
    *((esp + 0x64)) = esi;
    esi = 0;
    *((esp + 0x40)) = 1;
    *((esp + 0x60)) = 0;
    *((esp + 0x74)) = ebx;
    *((esp + 0x7b)) = dl;
    *((esp + 0x7c)) = edi;
    do {
        ebp = *((esp + 0x64));
        ecx = esp + 0x84;
        eax = *((esp + 0xb0));
        edi = *((esp + 0x34));
        ebp += esi;
        eax -= ebp;
        edi += ebp;
        eax = esp + 0x80;
        eax = mbrtowc (ecx, edi, eax);
        ebx = eax;
        if (eax == 0) {
            goto label_50;
        }
        if (eax == -1) {
            goto label_51;
        }
        if (eax == 0xfffffffe) {
            goto label_52;
        }
        if (*((esp + 0x53)) != 0) {
            if (*((esp + 0xb4)) == 2) {
                goto label_53;
            }
        }
label_21:
        eax = *((esp + 0x80));
        edi = esp + 0x84;
        eax = iswprint (eax);
        ecx = *((esp + 0x40));
        edx = 0;
        *(esp) = edi;
        if (eax != 0) {
            edx = ecx;
        }
        esi += ebx;
        eax = mbsinit (dl);
    } while (eax == 0);
label_50:
    *((esp + 0x60)) = esi;
    ebx = *((esp + 0x74));
    edx = *((esp + 0x7a));
    ebp = *((esp + 0x7b));
    esi = *((esp + 0x64));
label_25:
    if (*((esp + 0x60)) > 1) {
        goto label_18;
    }
    goto label_19;
label_43:
    if ((*((esp + 0xb8)) & 1) == 0) {
        goto label_9;
    }
    esi++;
    goto label_3;
label_45:
    ecx = *((esp + 0x34));
    al = (*((ecx + 1)) != 0) ? 1 : 0;
    goto label_20;
label_53:
    if (eax <= 1) {
        goto label_21;
    }
    eax = 1;
    do {
        edx = *((edi + eax));
        edx -= 0x5b;
        if (dl <= 0x21) {
            edx = (int32_t) dl;
            /* switch table (34 cases) at 0x805d740 */
        }
        eax++;
    } while (eax != ebx);
    goto label_21;
label_49:
    ecx = *((esp + 0x34));
    *((esp + 0x2c)) = dl;
    eax = strlen (ecx);
    edx = *((esp + 0x2c));
    *((esp + 0xb0)) = eax;
    goto label_22;
label_27:
    ebx = 1;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d4f4;
    goto label_2;
label_39:
    ebp = 0;
    ebx = 1;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d385;
    goto label_2;
label_41:
    eax = 0x805d4f4;
    if (bl == 0) {
        eax = *((esp + 0x68));
    }
    *((esp + 0x68)) = eax;
    goto label_23;
label_40:
    eax = 0x805d4f4;
    if (bl == 0) {
        eax = *((esp + 0x70));
    }
    *((esp + 0x70)) = eax;
    goto label_24;
label_51:
    *((esp + 0x60)) = esi;
    ebx = *((esp + 0x74));
    edx = *((esp + 0x7a));
    ebp = *((esp + 0x7b));
    esi = *((esp + 0x64));
    *((esp + 0x40)) = 0;
    goto label_25;
label_52:
    ecx = ebp;
    eax = edi;
    ebx = *((esp + 0x74));
    *((esp + 0x60)) = esi;
    edx = *((esp + 0x7a));
    esi = *((esp + 0x64));
    ebp = *((esp + 0x7b));
    edi = *((esp + 0x7c));
    *((esp + 0x40)) = 0;
    if (ecx >= *((esp + 0xb0))) {
        goto label_25;
    }
    if (*(eax) == 0) {
        goto label_25;
    }
    *((esp + 0x40)) = ebx;
    eax = *((esp + 0x60));
    ebx = *((esp + 0xb0));
    while (ecx < ebx) {
        if (*((edi + eax)) == 0) {
            goto label_54;
        }
        eax++;
        ecx = eax + esi;
    }
label_54:
    ebx = *((esp + 0x40));
    *((esp + 0x60)) = eax;
    *((esp + 0x40)) = 0;
    goto label_25;
label_38:
    ebp = 0;
    ebx = 0;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d385;
    goto label_2;
label_26:
    ebx = 0;
    *((esp + 0x58)) = 1;
    *((esp + 0x5c)) = 0x805d4f4;
    goto label_2;
label_46:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d260 */
#include <stdint.h>
 
int32_t fcn_0804d260 (void) {
    int32_t var_4h;
    int32_t var_8h;
    *(esp) = ebx;
    ebx = eax;
    al = (ecx == 5) ? 1 : 0;
    *((esp + 8)) = edi;
    edi = edx;
    *((esp + 4)) = esi;
    if (bl != 0) {
        eax = edx;
        eax &= 0xf000;
        al = (eax == 0x8000) ? 1 : 0;
    }
    if (al == 0) {
        goto label_2;
    }
    eax = 0;
    if (bl == 0) {
        goto label_0;
    }
    if (*(0x8062408) == 3) {
        goto label_3;
    }
    do {
label_0:
        ebx = *(esp);
        esi = *((esp + 4));
        edi = *((esp + 8));
        return eax;
label_2:
        if (bl != 0) {
            goto label_4;
        }
        edx = 0;
        dl = (ecx == 9) ? 1 : 0;
        eax = 0;
        esi = edx;
        al = (ecx == 3) ? 1 : 0;
        esi |= eax;
label_1:
        edx = esi;
        eax = 0x2f;
    } while (dl != 0);
    eax = 0;
    if (*(0x8062408) == 1) {
        goto label_0;
    }
    al = (ecx == 6) ? 1 : 0;
    esi = eax;
    if (bl != 0) {
        eax = edi;
        eax &= 0xf000;
        dl = (eax == 0xa000) ? 1 : 0;
        esi = edx;
    }
    eax = 0x40;
    if (dl != 0) {
        goto label_0;
    }
    al = (ecx == 1) ? 1 : 0;
    esi = eax;
    if (bl != 0) {
        eax = edi;
        eax &= 0xf000;
        dl = (eax == 0x1000) ? 1 : 0;
        esi = edx;
    }
    eax = 0x7c;
    if (dl != 0) {
        goto label_0;
    }
    al = (ecx == 7) ? 1 : 0;
    if (bl != 0) {
        edx = edi;
        edx &= 0xf000;
        al = (edx == 0xc000) ? 1 : 0;
    }
    eax = -eax;
    eax &= 0x3d;
    goto label_0;
label_4:
    eax = edi;
    eax &= 0xf000;
    al = (eax == 0x4000) ? 1 : 0;
    esi = eax;
    goto label_1;
label_3:
    edx = edi;
    ebx = *(esp);
    edx &= 0x49;
    esi = *((esp + 4));
    edi = *((esp + 8));
    eax -= eax;
    eax = ~eax;
    eax &= 0x2a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8054c60 */
#include <stdint.h>
 
int32_t fcn_08054c60 (int32_t arg_20h, int32_t arg_24h, int32_t arg_28h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    eax = *((esp + 0x28));
    esi = *((esp + 0x20));
    ebx = *((esp + 0x24));
    edi = eax + 0x14;
    *((eax + 0x14)) = 0;
    do {
        edi--;
        eax = fcn_08059dc0 (esi, ebx, 0xa);
        eax += 0x30;
        *(edi) = al;
        eax = fcn_08059c90 (esi, ebx, 0xa);
        esi = eax;
        eax = edx;
        eax |= esi;
        ebx = edx;
    } while (eax != 0);
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059c90 */
#include <stdint.h>
 
int32_t fcn_08059c90 (int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch) {
    uint32_t var_4h;
    uint32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *((esp + 0x14)) = edi;
    edi = *((esp + 0x2c));
    eax = *((esp + 0x20));
    ecx = *((esp + 0x28));
    *((esp + 0x10)) = esi;
    esi = *((esp + 0x24));
    *((esp + 0x18)) = ebp;
    *((esp + 8)) = eax;
    *((esp + 4)) = eax;
    if (edi != 0) {
        goto label_1;
    }
    if (ecx > esi) {
        goto label_2;
    }
    if (ecx == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ecx = eax;
    }
    eax = esi;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = eax;
    eax = *((esp + 4));
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edx = esi;
    do {
label_0:
        esi = *((esp + 0x10));
        edi = *((esp + 0x14));
        ebp = *((esp + 0x18));
        return eax;
label_1:
        edx = 0;
        eax = 0;
    } while (edi > esi);
    __asm ("bsr ecx, edi");
    ecx ^= 0x1f;
    *((esp + 4)) = ecx;
    if (edi != esi) {
        goto label_3;
    }
    if (ebp <= *((esp + 8))) {
        goto label_4;
    }
    if (edi >= esi) {
        goto label_0;
    }
label_4:
    edx = 0;
    eax = 1;
    goto label_0;
label_2:
    edx = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edx = 0;
    esi = *((esp + 0x10));
    edi = *((esp + 0x14));
    ebp = *((esp + 0x18));
    return eax;
label_3:
    ecx = *((esp + 4));
    eax = 0x20;
    edx = ebp;
    eax -= *((esp + 4));
    edi <<= cl;
    ecx = eax;
    edx >>= cl;
    ecx = *((esp + 4));
    edx |= edi;
    edi = esi;
    *((esp + 0xc)) = edx;
    edx = esi;
    esi = *((esp + 8));
    ebp <<= cl;
    ecx = eax;
    edi >>= cl;
    ecx = *((esp + 4));
    edx <<= cl;
    ecx = eax;
    esi >>= cl;
    esi |= edx;
    edx = edi;
    eax = esi;
    eax = *(edx:eax) / esp + 0xc;
    edx = *(edx:eax) % esp + 0xc;
    edi = edx;
    esi = eax;
    edx:eax = eax * ebp;
    if (edi >= edx) {
        ebp = *((esp + 8));
        ecx = *((esp + 4));
        ebp <<= cl;
        if (ebp < eax) {
            if (edi == edx) {
                goto label_5;
            }
        }
        eax = esi;
        edx = 0;
        goto label_0;
    }
label_5:
    eax = esi - 1;
    edx = 0;
    esi = *((esp + 0x10));
    edi = *((esp + 0x14));
    ebp = *((esp + 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d980 */
#include <stdint.h>
 
int32_t fcn_0804d980 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_1ch;
    while (1) {
        edx = *(eax);
        ecx = stdout;
        *((esp + 8)) = 1;
        *((esp + 4)) = edx;
        *((esp + 0xc)) = ecx;
        eax = *((eax + 4));
        *(esp) = eax;
        eax = fwrite_unlocked ();
        return eax;
        *((esp + 0x1c)) = eax;
        *(0x80624dc) = 1;
        fcn_0804d940 ();
        eax = *((esp + 0x1c));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d940 */
#include <stdint.h>
 
int32_t fcn_0804d940 (void) {
    eax = imp._Jv_RegisterClasses;
    if (eax != 0) {
        eax = 0x80621f0;
        void (*0x804d980)() ();
    }
    eax = 0x80621e0;
    fcn_0804d980 ();
    eax = 0x80621f8;
    fcn_0804d980 ();
    eax = 0x80621e8;
    return void (*0x804d980)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d9f0 */
#include <stdint.h>
 
int32_t fcn_0804d9f0 (int32_t arg_c0h) {
    char * func;
    size_t * n;
    int32_t var_1ch;
    int32_t var_20h;
    ebx = eax;
    if (dl == 0) {
        goto label_15;
    }
    eax = *((eax + 4));
    esi = 0;
    *((esp + 0x1c)) = eax;
    if (*(0x806235c) != 0) {
        goto label_16;
    }
    do {
label_11:
        if (ebp == 0) {
            goto label_17;
        }
label_0:
        if (*(0x8062455) != 0) {
            eax = *((ebp + 0xc));
            edx = eax + 4;
            if (*((ebp + 0x10)) < edx) {
                goto label_18;
            }
label_6:
            edx = imp._Jv_RegisterClasses;
            *(eax) = edx;
            *((ebp + 0xc)) += 4;
        }
        ecx = imp._Jv_RegisterClasses;
        edx = *((esp + 0x1c));
        eax = stdout;
        eax = fcn_0804cbf0 (0);
        *(0x80624d8) += eax;
        ebx = eax;
        if (*(0x8062455) != 0) {
            eax = *((ebp + 0xc));
            edx = eax + 4;
            if (*((ebp + 0x10)) < edx) {
                goto label_19;
            }
label_5:
            edx = imp._Jv_RegisterClasses;
            *(eax) = edx;
            *((ebp + 0xc)) += 4;
        }
        if (esi != 0) {
            goto label_20;
        }
label_1:
        eax = ebx;
        return eax;
label_15:
        esi = *(eax);
        *((esp + 0x1c)) = esi;
        esi = 0;
    } while (*(0x806235c) == 0);
label_16:
    if (dl == 0) {
        goto label_21;
    }
    ecx = 0;
    edi = *((ebx + 4));
    esi = *((ebx + 0x6c));
    if (*((ebx + 0x75)) != 0) {
        goto label_13;
    }
    ecx = imp._Jv_RegisterClasses;
    edx = 0xc;
    if (ecx == 0) {
        goto label_22;
    }
label_4:
    ebx = edx*8 + 0x80621e0;
label_12:
    edx = *((ebx + 4));
    eax = 4;
    if (edx == 0) {
        goto label_23;
    }
    al = fcn_0804bf90 ();
    if (al != 0) {
        goto label_24;
    }
label_7:
    eax = 0x80621e0;
    esi = 1;
    fcn_0804d980 ();
    eax = ebx;
    fcn_0804d980 ();
    eax = 0x80621e8;
    fcn_0804d980 ();
    if (ebp != 0) {
        goto label_0;
    }
label_17:
    ecx = imp._Jv_RegisterClasses;
    edx = *((esp + 0x1c));
    eax = stdout;
    eax = fcn_0804cbf0 (0);
    *(0x80624d8) += eax;
    ebx = eax;
    if (esi == 0) {
        goto label_1;
    }
label_20:
    edi = esp + 0x20;
    while (*(0x80624dc) == 0) {
label_2:
        eax = stdout;
        *(esp) = eax;
        fflush_unlocked ();
        *((esp + 8)) = edi;
        *((esp + 4)) = 0x8062380;
        *(esp) = 0;
        sigprocmask ();
        esi = imp._Jv_RegisterClasses;
        eax = imp._Jv_RegisterClasses;
        if (eax == 0) {
            goto label_25;
        }
        eax--;
        esi = 0x13;
        *(0x8062340) = eax;
label_3:
        raise (esi);
        *((esp + 8)) = 0;
        *((esp + 4)) = edi;
        *(esp) = 2;
        sigprocmask ();
        eax = imp._Jv_RegisterClasses;
        if (eax == 0) {
            eax = imp._Jv_RegisterClasses;
            if (eax == 0) {
                goto label_26;
            }
        }
    }
    fcn_0804d9d0 ();
    goto label_2;
label_25:
    *((esp + 4)) = 0;
    signal (esi);
    goto label_3;
label_26:
    fcn_0804d940 ();
    ecx = imp._Jv_RegisterClasses;
    edx = 0;
    eax = *((esp + 0xc0));
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edx = *((esp + 0xc0));
    esi = eax;
    eax = ebx + edx - 1;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    if (esi == eax) {
        goto label_1;
    }
    eax = 0x8062298;
    fcn_0804d980 ();
    eax = ebx;
    return eax;
label_21:
    edi = *(ebx);
    if (*(0x806235d) == 0) {
        goto label_27;
    }
    ecx = 0;
    if (*((ebx + 0x75)) != 0) {
        goto label_28;
    }
label_8:
    esi = *((ebx + 0x18));
label_9:
    ecx = (int32_t) cl;
label_13:
    if (*((ebx + 0x74)) != 0) {
        goto label_29;
    }
    eax = *((ebx + 0x68));
    edx = *((eax*4 + 0x805b2a0));
    if (edx != 5) {
        goto label_4;
    }
label_10:
    eax = strlen (edi);
    ebx = imp._Jv_RegisterClasses;
    edi += eax;
    esi = eax;
    if (ebx == 0) {
        goto label_30;
    }
    do {
        eax = *(ebx);
        if (esi >= eax) {
            edx = *((ebx + 4));
            edx = edi;
            edx -= eax;
            eax = strncmp (edx, edx, eax);
            if (eax == 0) {
                goto label_31;
            }
        }
        ebx = *((ebx + 0x10));
    } while (ebx != 0);
label_30:
    edx = 5;
    goto label_4;
label_19:
    *((esp + 4)) = 4;
    *(esp) = ebp;
    obstack_newchunk ();
    eax = *((ebp + 0xc));
    goto label_5;
label_18:
    *((esp + 4)) = 4;
    *(esp) = ebp;
    obstack_newchunk ();
    eax = *((ebp + 0xc));
    goto label_6;
label_29:
    eax = esi;
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_32;
    }
    if (eax == 0x4000) {
        goto label_33;
    }
    if (eax == 0xa000) {
        goto label_34;
    }
    edx = 8;
    if (eax == 0x1000) {
        goto label_4;
    }
    dl = 9;
    if (eax == 0xc000) {
        goto label_4;
    }
    dl = 0xa;
    if (eax == 0x6000) {
        goto label_4;
    }
    edx = 0;
    dl = (eax != 0x2000) ? 1 : 0;
    edx = edx + edx + 0xb;
    goto label_4;
label_24:
    fcn_0804d9d0 ();
    goto label_7;
label_27:
    ecx = *((ebx + 0x75));
    goto label_8;
label_28:
    esi = *((ebx + 0x6c));
    ecx = 1;
    goto label_9;
label_34:
    edx = 7;
    if (ecx != 0) {
        goto label_4;
    }
    edx = *(0x806221c);
    eax = 0x805a097;
    cl = 6;
    edi = eax;
    esi = edx;
    edx = 0xd;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    cl = (ecx > 0) ? 1 : 0;
    al = (ecx < 0) ? 1 : 0;
    if (cl == al) {
        goto label_4;
    }
    edx -= edx;
    edx &= 0xfffffffa;
    edx += 0xd;
    goto label_4;
label_32:
    if ((esi & 0x800) == 0) {
        goto label_35;
    }
    ax = 0x10;
    al = fcn_0804bf90 ();
    edx = 0x10;
    if (al != 0) {
        goto label_4;
    }
label_35:
    if ((esi & 0x400) == 0) {
        goto label_36;
    }
    eax = 0x11;
    al = fcn_0804bf90 ();
    edx = 0x11;
    if (al != 0) {
        goto label_4;
    }
label_36:
    eax = 0x15;
    al = fcn_0804bf90 ();
    if (al == 0) {
        goto label_37;
    }
    edx = 0x15;
    if (*((ebx + 0x7c)) != 0) {
        goto label_4;
    }
label_37:
    esi &= 0x49;
    if (esi == 0) {
        goto label_38;
    }
    eax = 0xe;
    al = fcn_0804bf90 ();
    edx = 0xe;
    if (al != 0) {
        goto label_4;
    }
label_38:
    if (*((ebx + 0x1c)) <= 1) {
        goto label_10;
    }
    eax = 0x16;
    al = fcn_0804bf90 ();
    edx = 0x16;
    if (al != 0) {
        goto label_4;
    }
    goto label_10;
label_23:
    al = fcn_0804bf90 ();
    al = (al != 0) ? 1 : 0;
    eax = (int32_t) al;
    esi = eax;
    goto label_11;
label_31:
    ebx += 8;
    goto label_12;
label_33:
    eax = esi;
    eax &= 0x202;
    if (eax == 0x202) {
        goto label_39;
    }
label_14:
    if ((esi & 2) == 0) {
        goto label_40;
    }
    eax = 0x13;
    al = fcn_0804bf90 ();
    edx = 0x13;
    if (al != 0) {
        goto label_4;
    }
label_40:
    esi &= 0x200;
    edx = 6;
    if (esi == 0) {
        goto label_4;
    }
    eax = 0x12;
    al = fcn_0804bf90 ();
    edx -= edx;
    edx &= 0xfffffff4;
    edx += 0x12;
    goto label_4;
label_22:
    ecx = 0xffffffff;
    goto label_13;
label_39:
    ax = 0x14;
    al = fcn_0804bf90 ();
    edx = 0x14;
    if (al != 0) {
        goto label_4;
    }
    goto label_14;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d3a0 */
#include <stdint.h>
 
uint32_t fcn_0804d3a0 (void) {
    int32_t var_4h;
    al = fcn_0804d260 ();
    ebx = eax;
    if (al == 0) {
        goto label_0;
    }
    eax = stdout;
    edx = *((eax + 0x14));
    if (edx >= *((eax + 0x18))) {
        goto label_1;
    }
    *(edx) = bl;
    edx++;
    *((eax + 0x14)) = edx;
    do {
        *(0x80624d8)++;
label_0:
        al = (bl != 0) ? 1 : 0;
        return eax;
label_1:
        edx = (int32_t) bl;
        *((esp + 4)) = edx;
        *(esp) = eax;
        overflow ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058320 */
#include <stdint.h>
 
int32_t fcn_08058320 (uint32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, uint32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    size_t maxsize;
    char * format;
    tm * timeptr;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    void * s1;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    uint32_t var_3ch;
    uint32_t var_40h;
    uint32_t var_50h;
    int32_t var_54h;
    uint32_t var_58h;
    int32_t var_5fh;
    uint32_t var_60h;
    int32_t var_70h;
    char * var_74h;
    uint32_t var_78h;
    int32_t var_7ch;
    tm ** var_8ch;
    int32_t var_90h;
    int32_t var_94h;
    int32_t var_98h;
    int32_t var_9ch;
    int32_t var_a0h;
    int32_t var_a4h;
    int32_t var_a8h;
    int32_t var_ach;
    int32_t var_b0h;
    int32_t var_b4h;
    char * s;
    int32_t var_bah;
    int32_t var_4c7h;
    int32_t var_4c8h;
    int32_t var_4c9h;
    int32_t var_4cah;
    int32_t var_4cch;
    int32_t var_4h;
label_13:
    esi = *((esp + 0x4f4));
    *((esp + 0x5f)) = al;
    ebx = *((esp + 0x4f0));
    eax = *(gs:0x14);
    *((esp + 0x4cc)) = eax;
    eax = 0;
    *((esp + 0x38)) = ecx;
    *((esp + 0x54)) = esi;
    esi = *((esi + 8));
    *((esp + 0x58)) = esi;
    esi = *((esp + 0x54));
    esi = *((esi + 0x28));
    *((esp + 0x74)) = esi;
    if (*((esp + 0x58)) <= 0xc) {
        goto label_56;
    }
label_4:
    eax = *(ebx);
    *((esp + 0x2c)) = edx;
    *((esp + 0x30)) = 0;
    if (al == 0) {
        goto label_57;
    }
    esi = esp + 0x4c7;
    *((esp + 0x24)) = esi;
    while (al != 0x25) {
        edx = *((esp + 0x38));
        edx -= *((esp + 0x30));
        if (edx <= 1) {
            goto label_6;
        }
        esi = *((esp + 0x2c));
        if (esi != 0) {
            esi = *((esp + 0x2c));
            *(esi) = al;
            esi++;
            *((esp + 0x2c)) = esi;
        }
label_5:
        eax = *((ebp + 1));
        ebx = ebp + 1;
        if (al == 0) {
            goto label_57;
        }
label_7:
    }
    eax = *((esp + 0x5f));
    edx = 0;
    *((esp + 0x50)) = 0;
    *((esp + 0x40)) = al;
label_2:
    ebx++;
    ecx = *(ebx);
    if (cl == 0x30) {
        goto label_58;
    }
    if (cl > 0x30) {
        goto label_59;
    }
    if (cl == 0x23) {
        goto label_60;
    }
    if (cl == 0x2d) {
        goto label_58;
    }
label_1:
    edi = (int32_t) cl;
    esi = 0xffffffff;
    eax = edi - 0x30;
    if (eax > 9) {
        goto label_61;
    }
    esi = 0;
    while (esi <= 0xccccccc) {
        eax = *(ebx);
        if (eax == 9) {
            goto label_62;
        }
label_3:
        ecx = esi * 5;
        eax = (int32_t) al;
        esi = eax + ecx*2 - 0x30;
label_0:
        ebx++;
        ecx = *(ebx);
        edi = (int32_t) cl;
        eax = edi - 0x30;
        if (eax > 9) {
            goto label_61;
        }
    }
    esi = 0x7fffffff;
    goto label_0;
label_59:
    if (cl == 0x5e) {
        goto label_63;
    }
    if (cl != 0x5f) {
        goto label_1;
    }
label_58:
    ecx = (int32_t) cl;
    *((esp + 0x50)) = ecx;
    goto label_2;
label_61:
    if (cl == 0x45) {
        goto label_64;
    }
    if (cl == 0x4f) {
        goto label_64;
    }
    *((esp + 0x3c)) = 0;
    do {
        if (cl > 0x7a) {
            edi = ebx;
label_26:
            if (cl != 0x25) {
                goto label_65;
            }
            *((esp + 0x28)) = 1;
            goto label_43;
        }
        eax = (int32_t) cl;
        /* switch table (123 cases) at 0x805d840 */
label_60:
        edx = 1;
        goto label_2;
label_63:
        *((esp + 0x40)) = 1;
        goto label_2;
label_6:
        *((esp + 0x30)) = 0;
label_8:
        edx = *((esp + 0x4cc));
        edx ^= *(gs:0x14);
        eax = *((esp + 0x30));
        if (cl != 0x25) {
            goto label_66;
        }
        return eax;
label_64:
        ecx = *((ebx + 1));
        ebx++;
        *((esp + 0x3c)) = edi;
        edi = (int32_t) cl;
    } while (1);
label_62:
    if (al <= 0x37) {
        goto label_3;
    }
    esi = 0x7fffffff;
    goto label_0;
label_56:
    edi = *((esp + 0x58));
    eax = 0xc;
    if (edi != 0) {
        eax = *((esp + 0x58));
    }
    *((esp + 0x58)) = eax;
    goto label_4;
    ecx = *((esp + 0x3c));
    if (ecx != 0) {
        goto label_18;
    }
    ecx = *((esp + 0x40));
    eax = 1;
    if (dl != 0) {
        ecx = eax;
    }
    *((esp + 0x40)) = cl;
label_25:
    *((esp + 0x4c7)) = 0x20;
    eax = edi;
    *((esp + 0x4c8)) = 0x25;
    edx = esp + 0x4c9;
    *((esp + 0x28)) = 0;
    *((esp + 0x70)) = 0;
label_9:
    ecx = *((esp + 0x54));
    *(edx) = al;
    eax = esp + 0x4c7;
    *((edx + 1)) = 0;
    eax = esp + 0xb9;
    eax = strftime (ecx, 0x400, eax);
    ebx = eax;
    if (eax == 0) {
        goto label_5;
    }
    edi = eax - 1;
    eax = 0;
    edx = edi;
    __asm ("cmovns eax, esi");
    if (eax >= edi) {
        edx = eax;
    }
    *((esp + 0x34)) = edx;
    edx = *((esp + 0x38));
    edx -= *((esp + 0x30));
    if (*((esp + 0x34)) >= edx) {
        goto label_6;
    }
    edx = *((esp + 0x2c));
    if (edx != 0) {
        if (edi < eax) {
            eax = *((esp + 0x70));
            if (eax == 0) {
                goto label_67;
            }
        }
label_10:
        if (*((esp + 0x28)) != 0) {
            goto label_68;
        }
        esi = esp + 0xba;
        if (*((esp + 0x40)) == 0) {
            goto label_69;
        }
        eax = *((esp + 0x2c));
        ecx = edi;
        edx = esi;
        fcn_08056b30 ();
label_11:
    }
label_17:
    eax = *((ebp + 1));
    ebx = ebp + 1;
    esi = *((esp + 0x34));
    if (al != 0) {
        goto label_7;
    }
label_57:
    edx = *((esp + 0x2c));
    if (edx == 0) {
        goto label_8;
    }
    eax = *((esp + 0x38));
    if (eax == 0) {
        goto label_8;
    }
    esi = *((esp + 0x2c));
    *(esi) = 0;
    goto label_8;
    if (*((esp + 0x3c)) == 0x4f) {
        goto label_18;
    }
    eax = edi;
    *((esp + 0x28)) = 0;
label_14:
    ecx = *((esp + 0x3c));
    *((esp + 0x4c7)) = 0x20;
    edx = esp + 0x4c9;
    *((esp + 0x4c8)) = 0x25;
    *((esp + 0x70)) = 0;
    if (ecx == 0) {
        goto label_9;
    }
label_22:
    edx = *((esp + 0x3c));
    *((esp + 0x4c9)) = dl;
    edx = esp + 0x4ca;
    goto label_9;
label_67:
    esi -= edi;
    *((esp + 8)) = esi;
    if (*((esp + 0x50)) == 0x30) {
        goto label_70;
    }
    eax = *((esp + 0x2c));
    memset (eax, 0x20);
    goto label_10;
label_65:
    ebx = edi;
label_18:
    eax = ebx - 1;
    edx = 1;
    do {
        edi = eax;
        edx++;
        eax = eax - 1;
    } while (*((eax + 1)) != 0x25);
    *((esp + 0x28)) = edx;
label_43:
    eax = 0;
    ebx = *((esp + 0x28));
    __asm ("cmovns eax, esi");
    edx = *((esp + 0x38));
    if (*((esp + 0x28)) < eax) {
        ebx = eax;
    }
    edx -= *((esp + 0x30));
    if (ebx >= edx) {
        goto label_6;
    }
    ecx = *((esp + 0x2c));
    if (ecx == 0) {
        goto label_71;
    }
    if (eax > *((esp + 0x28))) {
        esi -= *((esp + 0x28));
        *((esp + 8)) = esi;
        if (*((esp + 0x50)) == 0x30) {
            goto label_72;
        }
        edx = *((esp + 0x2c));
        memset (edx, 0x20);
    }
label_12:
    if (*((esp + 0x40)) == 0) {
        goto label_73;
    }
    ecx = *((esp + 0x28));
    edx = edi;
    eax = *((esp + 0x2c));
    fcn_08056b30 ();
    do {
        esi = *((esp + 0x28));
label_71:
        goto label_5;
label_73:
        esi = *((esp + 0x28));
        esi = *((esp + 0x2c));
        memcpy (esi, edi, esi);
    } while (1);
label_69:
    esi = *((esp + 0x2c));
    memcpy (esi, esi, edi);
    goto label_11;
label_72:
    eax = *((esp + 0x2c));
    memset (eax, 0x30);
    goto label_12;
label_15:
    eax = *((esp + 0x40));
    edx = *((esp + 0x4fc));
    ecx = *((esp + 0x4f8));
    eax = *((esp + 0x54));
    edx = 0;
    ecx = 0xffffffff;
    eax = *((esp + 0x34));
    eax = void (*0x8056b70)(uint32_t, uint32_t, uint32_t) (ebp, eax, ecx);
    goto label_13;
    ecx = *((esp + 0x38));
    edi = eax;
    eax = 0;
    __asm ("cmovns eax, esi");
    edx = eax;
    if (edi >= eax) {
        edx = edi;
    }
    ecx -= *((esp + 0x30));
    *((esp + 0x28)) = edx;
    if (edx >= ecx) {
        goto label_6;
    }
    edx = *((esp + 0x2c));
    if (edx != 0) {
        if (edi < eax) {
            esi -= edi;
            *((esp + 8)) = esi;
            if (*((esp + 0x50)) == 0x30) {
                goto label_74;
            }
            edx = *((esp + 0x2c));
            memset (ecx, 0x20);
            ecx = *((esp + 0x1c));
        }
label_44:
        esi = *((esp + 0x4fc));
        edx = *((esp + 0x2c));
        eax = *((esp + 0x34));
        esi = *((esp + 0x4f8));
        esi = *((esp + 0x54));
        void (*0x8056b70)(uint32_t, uint32_t, uint32_t) (ebp, esi, esi);
        goto label_13;
    }
label_32:
    esi = *((esp + 0x28));
    goto label_5;
    eax = 0x70;
    *((esp + 0x28)) = 1;
label_20:
    ecx = *((esp + 0x40));
    edi = 0;
    edx = 1;
    if (dl != 0) {
        ecx = edi;
    }
    *((esp + 0x40)) = cl;
    ecx = *((esp + 0x28));
    if (dl != 0) {
        ecx = edx;
    }
    *((esp + 0x28)) = cl;
    goto label_14;
    goto label_15;
    *((esp + 0x28)) = 0;
label_19:
    eax = *((esp + 0x54));
    ebp = *((eax + 0x20));
    if (ebp < 0) {
        goto label_75;
    }
    ebp = *((eax + 0x24));
    edx = 0x91a2b3c5;
    eax = ebp;
    ecx = ebp;
    edx:eax = eax * edx;
    eax = 0x88888889;
    ecx >>= 0x1f;
    *((esp + 0x70)) = ecx;
    edx += ebp;
    edx >>= 0xb;
    edx -= ecx;
    *((esp + 0x34)) = edx;
    edx:eax = eax * ebp;
    eax = 0x88888889;
    ecx = edx + ebp;
    ecx >>= 5;
    ecx -= *((esp + 0x70));
    edx:eax = eax * ecx;
    eax = ecx;
    eax >>= 0x1f;
    edx += ecx;
    edx >>= 5;
    edx -= eax;
    eax = edx * 0x3c;
    edx = ecx;
    edx -= eax;
    eax = ecx * 0x3c;
    ecx = ebp;
    ecx -= eax;
    if (*((esp + 0x28)) == 1) {
        goto label_50;
    }
    if (*((esp + 0x28)) >= 1) {
        goto label_76;
    }
    eax = *((esp + 0x34)) * 0x64;
    ecx = ebp;
    ecx >>= 0x1f;
    *((esp + 0x60)) = cl;
    *((esp + 0x28)) = 0;
    eax += edx;
    *((esp + 0x34)) = eax;
    *((esp + 0x78)) = 1;
    *((esp + 0x70)) = 5;
label_23:
    if (*((esp + 0x3c)) == 0x4f) {
        goto label_77;
    }
label_21:
    if (*((esp + 0x60)) != 0) {
        goto label_78;
    }
label_33:
    edi = esp + 0x4c7;
    ebx = 0xcccccccd;
    *((esp + 0x3c)) = esi;
    do {
label_16:
        ecx = edi;
        if ((*((esp + 0x28)) & 1) != 0) {
            ecx--;
            *((edi - 1)) = 0x3a;
        }
        eax = *((esp + 0x34));
        edi = ecx - 1;
        esi = *((esp + 0x34));
        edx:eax = eax * ebx;
        edx >>= 3;
        eax = edx * 5;
        eax += eax;
        esi -= eax;
        eax = esi;
        eax += 0x30;
        *((ecx - 1)) = al;
        *((esp + 0x34)) = edx;
    } while (eax != 0);
    if (edx != 0) {
        goto label_16;
    }
    esi = *((esp + 0x3c));
label_28:
    ecx = *((esp + 0x70));
    edx = 0x2d;
    if (esi >= *((esp + 0x70))) {
        ecx = esi;
    }
    *((esp + 0x3c)) = ecx;
    if (*((esp + 0x60)) == 0) {
        edx = *((esp + 0x78));
        edx = -edx;
        edx &= 0x2b;
    }
    if (*((esp + 0x50)) == 0x2d) {
        goto label_79;
    }
    ecx = edi;
    eax = 0;
    ecx -= *((esp + 0x24));
    ecx += *((esp + 0x3c));
    al = (dl != 0) ? 1 : 0;
    ecx -= eax;
    if (ecx <= 0) {
        goto label_80;
    }
    eax = *((esp + 0x38));
    eax -= *((esp + 0x30));
    if (*((esp + 0x50)) == 0x5f) {
        goto label_81;
    }
    *((esp + 0x28)) = eax;
    if (*((esp + 0x3c)) >= eax) {
        goto label_6;
    }
    if (dl == 0) {
        goto label_82;
    }
    eax = 0;
    __asm ("cmovns eax, esi");
    ebx = 1;
    if (eax != 0) {
        ebx = eax;
    }
    if (*((esp + 0x28)) <= ebx) {
        goto label_6;
    }
    if (*((esp + 0x2c)) != 0) {
        if (eax > 1) {
            eax = *((esp + 0x3c));
            if (eax != 0) {
                goto label_46;
            }
            esi--;
            *((esp + 8)) = esi;
            if (*((esp + 0x50)) == 0x30) {
                goto label_83;
            }
            eax = *((esp + 0x2c));
            *((esp + 0x20)) = dl;
            memset (ecx, 0x20);
            ecx = *((esp + 0x1c));
            edx = *((esp + 0x20));
        }
label_46:
        esi = *((esp + 0x2c));
        *(esi) = dl;
        esi++;
        *((esp + 0x2c)) = esi;
    }
label_82:
    eax = *((esp + 0x2c));
    if (eax != 0) {
        esi = *((esp + 0x2c));
        *((esp + 8)) = ecx;
        memset (ecx, 0x30);
        ecx = *((esp + 0x1c));
        esi += ecx;
        *((esp + 0x2c)) = esi;
    }
    ebx = 0;
    esi = 0;
label_35:
    edx = *((esp + 0x24));
    eax = *((esp + 0x38));
    edx -= edi;
    *((esp + 0x28)) = edx;
    if (edx < ebx) {
        edx = ebx;
    }
    eax -= *((esp + 0x30));
    *((esp + 0x34)) = edx;
    if (edx >= eax) {
        goto label_6;
    }
    eax = *((esp + 0x2c));
    if (eax == 0) {
        goto label_17;
    }
    if (ebx > *((esp + 0x28))) {
        ebx = *((esp + 0x3c));
        if (ebx != 0) {
            goto label_40;
        }
        esi -= *((esp + 0x28));
        *((esp + 8)) = esi;
        if (*((esp + 0x50)) == 0x30) {
            goto label_84;
        }
        eax = *((esp + 0x2c));
        memset (eax, 0x20);
    }
label_40:
    if (*((esp + 0x40)) == 0) {
        goto label_85;
    }
    ecx = *((esp + 0x28));
    edx = edi;
    eax = *((esp + 0x2c));
    fcn_08056b30 ();
label_34:
    esi = *((esp + 0x28));
    goto label_17;
    eax = *((ebx + 1));
    if (al == 0x3a) {
        goto label_86;
    }
    ecx = ebx + 1;
    *((esp + 0x28)) = 1;
label_47:
    if (al != 0x7a) {
        goto label_18;
    }
    ebx = ecx;
    goto label_19;
    eax = edi;
    *((esp + 0x28)) = 0;
    goto label_20;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    ecx = *((edx + 8));
label_29:
    if (*((esp + 0x50)) == 0x2d) {
        goto label_30;
    }
    if (*((esp + 0x50)) == 0x30) {
        goto label_30;
    }
    *((esp + 0x70)) = 2;
    *((esp + 0x50)) = 0x5f;
label_24:
    eax = ecx;
    eax >>= 0x1f;
    *((esp + 0x60)) = al;
    *((esp + 0x34)) = ecx;
    *((esp + 0x28)) = 0;
    *((esp + 0x78)) = 0;
    if (*((esp + 0x3c)) != 0x4f) {
        goto label_21;
    }
label_77:
    if (*((esp + 0x60)) != 0) {
        goto label_78;
    }
label_42:
    *((esp + 0x4c7)) = 0x20;
    eax = edi;
    *((esp + 0x4c8)) = 0x25;
    *((esp + 0x28)) = 0;
    goto label_22;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    ecx = *((esp + 0x54));
    *((esp + 0x28)) = 0;
    *((esp + 0x78)) = 0;
    *((esp + 0x70)) = 3;
    eax = *((ecx + 0x1c));
    esp + 0x60 = (eax < -1) ? 1 : 0;
    eax++;
    *((esp + 0x34)) = eax;
    goto label_23;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_87;
    }
    eax = *((esp + 0x54));
    edx = 0x51eb851f;
    *((esp + 0x70)) = 2;
    ebp = *((eax + 0x14));
    eax = *((eax + 0x14));
    ecx = ebp;
    edx:eax = eax * edx;
    eax = ebp;
    eax >>= 0x1f;
    edx >>= 5;
    edx -= eax;
    edx *= 0x64;
    ecx -= edx;
    if (ecx >= 0) {
        goto label_24;
    }
    eax = ecx;
    ecx += 0x64;
    eax = -eax;
    if (ebp <= 0xfffff893) {
        ecx = eax;
    }
    goto label_24;
    ecx = *((esp + 0x40));
    eax = 1;
    ebp = *((esp + 0x3c));
    if (dl != 0) {
        ecx = eax;
    }
    *((esp + 0x40)) = cl;
    if (ebp != 0) {
        goto label_18;
    }
    goto label_25;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    *((esp + 0x70)) = 1;
    ecx = *((edx + 0x18));
    goto label_24;
    if (*((esp + 0x3c)) == 0x4f) {
        goto label_18;
    }
    if (*((esp + 0x3c)) == 0x45) {
        goto label_88;
    }
    eax = *((esp + 0x54));
    edx = 0x51eb851f;
    ecx = 0;
    *((esp + 0x28)) = 0;
    *((esp + 0x78)) = 0;
    *((esp + 0x70)) = 2;
    edi = *((eax + 0x14));
    eax = *((eax + 0x14));
    edx:eax = eax * edx;
    eax = edi;
    eax >>= 0x1f;
    edx >>= 5;
    edx -= eax;
    ebp = edx + 0x13;
    cl = (ebp > 0) ? 1 : 0;
    eax = edx * 0x64;
    edx = edi;
    edx -= eax;
    eax = edx;
    eax >>= 0x1f;
    ecx &= eax;
    esp + 0x60 = (edi < 0xfffff894) ? 1 : 0;
    ebp -= ecx;
    *((esp + 0x34)) = ebp;
    goto label_21;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    ecx = *((esp + 0x4fc));
    if (esi == -1) {
        goto label_89;
    }
    *((esp + 0x70)) = esi;
    if (esi > 8) {
        goto label_24;
    }
    do {
        eax = 0x66666667;
        ebp++;
        edx:eax = eax * ecx;
        ecx >>= 0x1f;
        edx >>= 2;
        edx -= ecx;
        ecx = edx;
    } while (ebp != 9);
    *((esp + 0x70)) = esi;
    goto label_24;
    edi = ebx - 1;
    ecx = *((ebx - 1));
    goto label_26;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    eax = 0x92492493;
    ebp = *((edx + 0x18));
    ebp += 6;
    edx:eax = eax * ebp;
    eax = ebp;
    eax >>= 0x1f;
    edx += ebp;
    edx >>= 2;
    edx -= eax;
    ecx = edx*8;
    ecx -= edx;
    edx = *((esp + 0x54));
    ecx -= ebp;
    eax = *((edx + 0x1c));
    ebp = ecx + eax + 7;
    eax = 0x92492493;
    edx:eax = eax * ebp;
label_31:
    ecx = edx + ebp;
    ecx >>= 2;
    ebp >>= 0x1f;
    ecx -= ebp;
label_30:
    *((esp + 0x70)) = 2;
    goto label_24;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    edx = *((edx + 0x14));
    eax = *((edx + 0x14));
    eax >>= 0x1f;
    eax &= 0x190;
    eax = eax + edx - 0x64;
    *((esp + 0x34)) = edx;
    edx = *((esp + 0x54));
    *((esp + 0x60)) = eax;
    eax = *((esp + 0x54));
    edx = *((edx + 0x1c));
    eax = *((eax + 0x18));
    *((esp + 0x70)) = edx;
    *((esp + 0x78)) = eax;
    eax = edx;
    edx = 0x92492493;
    eax -= *((esp + 0x78));
    eax += 0x17e;
    *((esp + 0x28)) = eax;
    edx:eax = eax * edx;
    eax = *((esp + 0x28));
    edx += *((esp + 0x28));
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = *((esp + 0x70));
    eax -= *((esp + 0x28));
    ebp = edx*8;
    ebp -= edx;
    ebp = eax + ebp + 3;
    if (ebp < 0) {
        goto label_90;
    }
    eax = 0xfffffe93;
    if ((*((esp + 0x60)) & 3) == 0) {
        eax = 0x51eb851f;
        edx:eax = eax * *((esp + 0x60));
        eax = *((esp + 0x60));
        *((esp + 0x28)) = edx;
        edx >>= 5;
        eax >>= 0x1f;
        edx -= eax;
        edx *= 0x64;
        *((esp + 0x7c)) = eax;
        eax = 0xfffffe92;
        if (*((esp + 0x60)) != edx) {
            goto label_91;
        }
        eax = *((esp + 0x28));
        edx = *((esp + 0x60));
        eax >>= 7;
        eax -= *((esp + 0x7c));
        eax *= 0x190;
        edx -= eax;
        eax -= eax;
        eax -= 0x16d;
    }
label_91:
    eax += *((esp + 0x70));
    edx = 0x92492493;
    *((esp + 0x60)) = eax;
    eax -= *((esp + 0x78));
    eax += 0x17e;
    *((esp + 0x28)) = eax;
    edx:eax = eax * edx;
    eax = *((esp + 0x28));
    edx += *((esp + 0x28));
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = edx*8;
    eax -= edx;
    *((esp + 0x70)) = eax;
    eax = *((esp + 0x60));
    edx = *((esp + 0x70));
    eax -= *((esp + 0x28));
    eax = eax + edx + 3;
    edx = eax;
    edx >>= 0x1f;
    edx++;
    *((esp + 0x28)) = edx;
    __asm ("cmovns ebp, eax");
label_48:
    if (cl == 0x47) {
        goto label_92;
    }
    if (cl == 0x67) {
        goto label_93;
    }
    eax = ebp;
    edx = 0x92492493;
    edx:eax = eax * edx;
    *((esp + 0x70)) = 2;
    edx += ebp;
    edx >>= 2;
    ebp >>= 0x1f;
    edx -= ebp;
    ecx = edx + 1;
    goto label_24;
    ecx = *((esp + 0x3c));
    if (ecx == 0) {
        goto label_15;
    }
    goto label_18;
    eax = *((esp + 0x3c));
    if (eax == 0) {
        goto label_15;
    }
    goto label_18;
    eax = 0;
    edx = *((esp + 0x38));
    __asm ("cmovns eax, esi");
    edi = 1;
    if (eax != 0) {
        edi = eax;
    }
    edx -= *((esp + 0x30));
    if (edi >= edx) {
        goto label_6;
    }
    edx = *((esp + 0x2c));
    if (edx != 0) {
        if (eax > 1) {
            esi--;
            *((esp + 8)) = esi;
            if (*((esp + 0x50)) == 0x30) {
                goto label_94;
            }
            ecx = *((esp + 0x2c));
            memset (ecx, 0x20);
        }
label_51:
        esi = *((esp + 0x2c));
        *(esi) = 0xa;
        esi++;
        *((esp + 0x2c)) = esi;
    }
label_27:
    goto label_5;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    *((esp + 0x28)) = 0;
    *((esp + 0x78)) = 0;
    *((esp + 0x70)) = 2;
    eax = *((edx + 0x10));
    esp + 0x60 = (eax < -1) ? 1 : 0;
    eax++;
    *((esp + 0x34)) = eax;
    goto label_23;
    eax = 0;
    edx = *((esp + 0x38));
    __asm ("cmovns eax, esi");
    edi = 1;
    if (eax != 0) {
        edi = eax;
    }
    edx -= *((esp + 0x30));
    if (edi >= edx) {
        goto label_6;
    }
    ebp = *((esp + 0x2c));
    if (ebp == 0) {
        goto label_27;
    }
    if (eax > 1) {
        esi--;
        *((esp + 8)) = esi;
        if (*((esp + 0x50)) == 0x30) {
            goto label_95;
        }
        ecx = *((esp + 0x2c));
        memset (ecx, 0x20);
    }
label_52:
    esi = *((esp + 0x2c));
    *(esi) = 9;
    esi++;
    *((esp + 0x2c)) = esi;
    goto label_27;
    edx = *((esp + 0x54));
    ecx = esp + 0x8c;
    edi = esp + 0x4c7;
    eax = *(edx);
    *((esp + 0x8c)) = eax;
    eax = *((edx + 4));
    *((esp + 0x90)) = eax;
    eax = *((edx + 8));
    *((esp + 0x94)) = eax;
    eax = *((edx + 0xc));
    *((esp + 0x98)) = eax;
    eax = *((edx + 0x10));
    *((esp + 0x9c)) = eax;
    eax = *((edx + 0x14));
    *((esp + 0xa0)) = eax;
    eax = *((edx + 0x18));
    *((esp + 0xa4)) = eax;
    eax = *((edx + 0x1c));
    *((esp + 0xa8)) = eax;
    eax = *((edx + 0x20));
    *((esp + 0xac)) = eax;
    eax = *((edx + 0x24));
    *((esp + 0xb0)) = eax;
    eax = *((edx + 0x28));
    *(esp) = ecx;
    eax = mktime (eax);
    ecx = eax;
    eax >>= 0x1f;
    *((esp + 0x60)) = al;
    ebx = eax;
    do {
        eax = 0x66666667;
        edi--;
        edx:eax = eax * ecx;
        eax = ecx;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = edx * 5;
        eax += eax;
        ecx -= eax;
        eax = ecx;
        ecx = edx;
        edx = 0x30;
        dl -= al;
        eax += 0x30;
        if (bl == 0) {
            edx = eax;
        }
        *(edi) = dl;
    } while (ecx != 0);
    *((esp + 0x78)) = 0;
    *((esp + 0x70)) = 1;
    goto label_28;
    ecx = *((esp + 0x3c));
    if (ecx != 0) {
        goto label_96;
    }
    eax = *((esp + 0x3c));
    edi = 1;
    edx = *((esp + 0x38));
    __asm ("cmovns eax, esi");
    if (eax != 0) {
        edi = eax;
    }
    edx -= *((esp + 0x30));
    if (edi >= edx) {
        goto label_6;
    }
    edx = *((esp + 0x2c));
    if (edx == 0) {
        goto label_27;
    }
    edx = 0x25;
    if (eax > 1) {
        esi--;
        *((esp + 8)) = esi;
        if (*((esp + 0x50)) == 0x30) {
            goto label_97;
        }
        ecx = *((esp + 0x2c));
        memset (ecx, 0x20);
        edx = *(ebx);
    }
label_55:
    esi = *((esp + 0x2c));
    *(esi) = dl;
    esi++;
    *((esp + 0x2c)) = esi;
    goto label_27;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    ecx = *((edx + 0xc));
    goto label_29;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    eax = *((esp + 0x54));
    *((esp + 0x70)) = 2;
    ecx = *((eax + 0xc));
    goto label_24;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    ecx = *((esp + 0x58));
    *((esp + 0x70)) = 2;
    goto label_24;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    eax = *((esp + 0x54));
    *((esp + 0x70)) = 2;
    ecx = *((eax + 8));
    goto label_24;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    eax = *((esp + 0x54));
    ecx = *((eax + 4));
    goto label_30;
    ecx = *((esp + 0x58));
    if (*((esp + 0x3c)) != 0x45) {
        goto label_29;
    }
    goto label_18;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    eax = *((esp + 0x54));
    *((esp + 0x70)) = 2;
    ecx = *(eax);
    goto label_24;
    eax = *((esp + 0x54));
    edx = 0x92492493;
    *((esp + 0x70)) = 1;
    ecx = *((eax + 0x18));
    ecx += 6;
    eax = ecx;
    edx:eax = eax * edx;
    eax = ecx;
    eax >>= 0x1f;
    edx += ecx;
    edx >>= 2;
    edx -= eax;
    eax = edx*8;
    eax -= edx;
    ecx -= eax;
    ecx++;
    goto label_24;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_18;
    }
    edx = *((esp + 0x54));
    eax = *((edx + 0x1c));
    eax -= *((edx + 0x18));
    edx = 0x92492493;
    ebp = eax + 7;
    eax = ebp;
    edx:eax = eax * edx;
    goto label_31;
    ecx = *((esp + 0x40));
    eax = 0;
    ebp -= ebp;
    ebp++;
    if (dl != 0) {
        ecx = eax;
    }
    *((esp + 0x40)) = cl;
    ecx = *((esp + 0x74));
    if (ecx == 0) {
        goto label_98;
    }
    eax = *((esp + 0x74));
    eax = strlen (eax);
    edi = eax;
label_53:
    eax = 0;
    __asm ("cmovns eax, esi");
    edx = eax;
    if (edi >= eax) {
        edx = edi;
    }
    *((esp + 0x28)) = edx;
    edx = *((esp + 0x38));
    edx -= *((esp + 0x30));
    if (*((esp + 0x28)) >= edx) {
        goto label_6;
    }
    edx = *((esp + 0x2c));
    if (edx == 0) {
        goto label_32;
    }
    if (eax > edi) {
        esi -= edi;
        *((esp + 8)) = esi;
        if (*((esp + 0x50)) == 0x30) {
            goto label_99;
        }
        eax = *((esp + 0x2c));
        memset (eax, 0x20);
    }
label_54:
    edx = ebp;
    if (dl != 0) {
        goto label_100;
    }
    if (*((esp + 0x40)) == 0) {
        goto label_101;
    }
    edx = *((esp + 0x74));
    ecx = edi;
    eax = *((esp + 0x2c));
    fcn_08056b30 ();
label_45:
    goto label_32;
    if (*((esp + 0x3c)) == 0x45) {
        goto label_87;
    }
    if (*((esp + 0x3c)) == 0x4f) {
        goto label_18;
    }
    ecx = *((esp + 0x54));
    *((esp + 0x28)) = 0;
    *((esp + 0x78)) = 0;
    *((esp + 0x70)) = 4;
    eax = *((ecx + 0x14));
    esp + 0x60 = (eax < 0xfffff894) ? 1 : 0;
    eax += 0x76c;
    *((esp + 0x34)) = eax;
    goto label_21;
label_78:
    esp + 0x34 = -esp + 0x34;
    goto label_33;
label_85:
    esi = *((esp + 0x28));
    esi = *((esp + 0x2c));
    memcpy (esi, edi, esi);
    goto label_34;
label_79:
    ebx = 0;
    __asm ("cmovns ebx, esi");
    if (dl == 0) {
        goto label_35;
    }
label_39:
    ecx = 1;
    eax = *((esp + 0x38));
    if (ebx != 0) {
        ecx = ebx;
    }
    eax -= *((esp + 0x30));
    if (ecx >= eax) {
        goto label_6;
    }
    eax = *((esp + 0x2c));
    if (eax != 0) {
        if (ebx > 1) {
            eax = *((esp + 0x3c));
            if (eax != 0) {
                goto label_37;
            }
            eax = esi - 1;
            *((esp + 0x28)) = eax;
label_38:
            *((esp + 8)) = eax;
            eax = *((esp + 0x2c));
            *((esp + 0x20)) = dl;
            memset (ecx, 0x20);
            eax = *((esp + 0x28));
            ecx = *((esp + 0x1c));
            edx = *((esp + 0x20));
        }
label_37:
        eax = *((esp + 0x2c));
        *(eax) = dl;
        eax++;
        *((esp + 0x2c)) = eax;
    }
label_36:
    goto label_35;
label_80:
    ebx = 0;
    __asm ("cmovns ebx, esi");
    if (dl == 0) {
        goto label_35;
    }
    ecx = 1;
    eax = *((esp + 0x38));
    if (ebx != 0) {
        ecx = ebx;
    }
    eax -= *((esp + 0x30));
    if (ecx >= eax) {
        goto label_6;
    }
    eax = *((esp + 0x2c));
    if (eax == 0) {
        goto label_36;
    }
    if (ebx <= 1) {
        goto label_37;
    }
    eax = *((esp + 0x3c));
    if (eax != 0) {
        goto label_37;
    }
    eax = esi - 1;
    *((esp + 0x28)) = eax;
    if (*((esp + 0x50)) == 0x30) {
        goto label_102;
    }
    eax = *((esp + 0x28));
    goto label_38;
label_81:
    if (ecx >= eax) {
        goto label_6;
    }
    eax = *((esp + 0x2c));
    if (eax != 0) {
        eax = *((esp + 0x2c));
        *((esp + 8)) = ecx;
        *((esp + 0x20)) = dl;
        memset (ecx, 0x20);
        ecx = *((esp + 0x1c));
        edx = *((esp + 0x20));
    }
    ebx = 0;
    if (esi <= ecx) {
        goto label_103;
    }
    esi -= ecx;
    __asm ("cmovns ebx, esi");
label_41:
    if (dl == 0) {
        goto label_35;
    }
    goto label_39;
label_84:
    ecx = *((esp + 0x2c));
    memset (ecx, 0x30);
    goto label_40;
label_68:
    if (edi == 0) {
        goto label_11;
    }
    eax = ctype_tolower_loc ();
    ebx -= 2;
    *((esp + 0x28)) = ebp;
    esi = esp + 0xba;
    ebp = *((esp + 0x2c));
    while (ebx != 0) {
        ebx = edx;
        ecx = *((esi + ebx));
        edx = *(eax);
        edx = *((edx + ecx*4));
        *((ebp + ebx)) = dl;
        edx = ebx - 1;
    }
    ebp = *((esp + 0x28));
    goto label_11;
label_103:
    esi = 0;
    goto label_41;
label_70:
    ecx = *((esp + 0x2c));
    memset (ecx, 0x30);
    goto label_10;
label_87:
    *((esp + 0x70)) = 0;
    goto label_42;
label_96:
    edi = ebx;
    *((esp + 0x28)) = 1;
    goto label_43;
label_75:
    goto label_5;
label_74:
    eax = *((esp + 0x2c));
    memset (ecx, 0x30);
    ecx = *((esp + 0x1c));
    goto label_44;
label_76:
    if (*((esp + 0x28)) == 2) {
        goto label_49;
    }
    if (*((esp + 0x28)) == 3) {
        goto label_104;
    }
    ecx = *(ebx);
    edi = ebx;
    goto label_26;
label_101:
    esi = *((esp + 0x74));
    esi = *((esp + 0x2c));
    memcpy (esi, esi, edi);
    goto label_45;
label_83:
    eax = *((esp + 0x2c));
    *((esp + 0x20)) = dl;
    memset (ecx, 0x30);
    edx = *((esp + 0x20));
    ecx = *((esp + 0x1c));
    goto label_46;
label_86:
    edx = ebx + 2;
    *((esp + 0x28)) = 1;
    do {
        ecx = edx;
        edx++;
        eax = *((edx - 1));
        ebp++;
    } while (al == 0x3a);
    *((esp + 0x28)) = ebp;
    goto label_47;
label_49:
    eax = ebp;
    eax >>= 0x1f;
    ebp = *((esp + 0x34)) * 0x2710;
    *((esp + 0x60)) = al;
    eax = edx * 0x64;
    *((esp + 0x28)) = 0x14;
    *((esp + 0x78)) = 1;
    *((esp + 0x70)) = 9;
    eax += ebp;
    eax += ecx;
    *((esp + 0x34)) = eax;
    goto label_23;
label_100:
    if (edi == 0) {
        goto label_45;
    }
    eax = ctype_tolower_loc ();
    esi = *((esp + 0x74));
    edx = edi;
    ebp = *((esp + 0x2c));
    *((esp + 0x34)) = ebx;
    do {
        ebx = *((esi + edx - 1));
        ecx = *(eax);
        ecx = *((ecx + ebx*4));
        *((ebp + edx - 1)) = cl;
        edx--;
    } while (edx != 0);
    ebx = *((esp + 0x34));
    goto label_45;
label_93:
    eax = *((esp + 0x34));
    ecx = *((esp + 0x34));
    *((esp + 0x70)) = 2;
    edx:eax = eax * ebp;
    eax = *((esp + 0x34));
    edx >>= 5;
    eax >>= 0x1f;
    edx -= eax;
    edx *= 0x64;
    ecx -= edx;
    ecx += *((esp + 0x28));
    eax = ecx;
    edx:eax = eax * ebp;
    eax = ecx;
    eax >>= 0x1f;
    edx >>= 5;
    edx -= eax;
    edx *= 0x64;
    ecx -= edx;
    edx = ecx;
    if (ecx >= 0) {
        goto label_24;
    }
    ecx += 0x64;
    edx = -edx;
    eax = 0xfffff894;
    eax -= *((esp + 0x28));
    if (*((esp + 0x34)) < eax) {
        ecx = edx;
    }
    goto label_24;
label_92:
    ecx = *((esp + 0x34));
    eax = 0xfffff894;
    eax -= *((esp + 0x28));
    eax = *((esp + 0x28));
    *((esp + 0x78)) = 0;
    esp + 0x60 = (*((esp + 0x34)) < eax) ? 1 : 0;
    ecx = eax + ecx + 0x76c;
    *((esp + 0x34)) = ecx;
    *((esp + 0x28)) = 0;
    *((esp + 0x70)) = 4;
    goto label_23;
label_50:
    eax = *((esp + 0x34)) * 0x64;
    ecx = ebp;
    ecx >>= 0x1f;
    *((esp + 0x60)) = cl;
    *((esp + 0x28)) = 4;
    eax += edx;
    *((esp + 0x34)) = eax;
    *((esp + 0x78)) = 1;
    *((esp + 0x70)) = 6;
    goto label_23;
label_88:
    *((esp + 0x4c7)) = 0x20;
    eax = edi;
    *((esp + 0x4c8)) = 0x25;
    *((esp + 0x28)) = 0;
    *((esp + 0x70)) = 0;
    goto label_22;
label_89:
    esi = 9;
    *((esp + 0x70)) = 9;
    goto label_24;
label_90:
    ebp = *((esp + 0x60));
    eax = 0x16d;
    ebp--;
    if ((ebp & 3) == 0) {
        eax = 0x51eb851f;
        edx:eax = eax * ebp;
        eax = ebp;
        eax >>= 0x1f;
        *((esp + 0x60)) = eax;
        *((esp + 0x28)) = edx;
        edx >>= 5;
        edx -= eax;
        eax = 0x16e;
        edx *= 0x64;
        if (ebp != edx) {
            goto label_105;
        }
        eax = *((esp + 0x28));
        eax >>= 7;
        eax -= *((esp + 0x60));
        eax *= 0x190;
        ebp -= eax;
        eax -= eax;
        eax = ~eax;
        eax += 0x16e;
    }
label_105:
    eax += *((esp + 0x70));
    edx = 0x92492493;
    ebp -= *((esp + 0x78));
    *((esp + 0x70)) = eax;
    ebp += 0x17e;
    eax = ebp;
    edx:eax = eax * edx;
    eax = ebp;
    eax >>= 0x1f;
    edx += ebp;
    edx >>= 2;
    edx -= eax;
    eax = edx*8;
    eax -= edx;
    *((esp + 0x28)) = eax;
    eax = *((esp + 0x70));
    edx = *((esp + 0x28));
    *((esp + 0x28)) = 0xffffffff;
    eax -= ebp;
    ebp = eax + edx + 3;
    goto label_48;
label_104:
    if (ecx != 0) {
        goto label_49;
    }
    if (edx != 0) {
        goto label_50;
    }
    ecx = ebp;
    ecx >>= 0x1f;
    *((esp + 0x60)) = cl;
    *((esp + 0x28)) = 0;
    *((esp + 0x78)) = 1;
    *((esp + 0x70)) = 3;
    goto label_23;
label_94:
    edx = *((esp + 0x2c));
    memset (edx, 0x30);
    goto label_51;
label_95:
    edx = *((esp + 0x2c));
    eax = memset (edx, 0x30);
    goto label_52;
label_98:
    edi = 0;
    *((esp + 0x74)) = 0x805da85;
    goto label_53;
label_102:
    *((esp + 8)) = eax;
    eax = *((esp + 0x2c));
    *((esp + 0x20)) = dl;
    memset (ecx, 0x30);
    eax = *((esp + 0x28));
    edx = *((esp + 0x20));
    ecx = *((esp + 0x1c));
    goto label_37;
label_99:
    ecx = *((esp + 0x2c));
    memset (ecx, 0x30);
    goto label_54;
label_97:
    edx = *((esp + 0x2c));
    memset (edx, 0x30);
    edx = *(ebx);
    goto label_55;
label_66:
    stack_chk_fail ();
    *((esp + 4)) = esi;
    esi = *((esp + 0x20));
    *(esp) = ebx;
    ebx = *((esp + 0x18));
    eax = *((esp + 0x14));
    edx = *((esp + 0xc));
    *((esp + 0x18)) = esi;
    esi = *((esp + 0x1c));
    ecx = *((esp + 0x10));
    *((esp + 0x10)) = ebx;
    ebx = *(esp);
    *((esp + 0xc)) = eax;
    eax = 0;
    *((esp + 0x14)) = esi;
    esi = *((esp + 4));
    goto label_13;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80522d0 */
#include <stdint.h>
 
int32_t fcn_080522d0 (int32_t arg_4h, int32_t arg_ch) {
label_1:
    eax = *((esp + 8));
    ecx = 0x2d;
    edx = *((esp + 0xc));
    ebx = eax;
    ebx &= 0xf000;
    if (ebx != 0x8000) {
        ecx = 0x64;
        if (ebx == 0x4000) {
            goto label_2;
        }
        ecx = 0x62;
        if (ebx == 0x6000) {
            goto label_2;
        }
        ecx = 0x63;
        if (ebx == 0x2000) {
            goto label_2;
        }
        ecx = 0x6c;
        if (ebx == 0xa000) {
            goto label_2;
        }
        ecx = 0x70;
        if (ebx == 0x1000) {
            goto label_2;
        }
        ecx = 0x73;
        ebx = 0x3f;
        if (ebx != 0xc000) {
            ecx = ebx;
        }
    }
label_2:
    *(edx) = cl;
    ecx = eax;
    ecx &= 0x100;
    ecx -= ecx;
    ecx &= 0xffffffbb;
    ecx += 0x72;
    *((edx + 1)) = cl;
    ecx = eax;
    ecx &= 0x80;
    ecx -= ecx;
    ecx &= 0xffffffb6;
    ecx += 0x77;
    *((edx + 2)) = cl;
    ecx = eax;
    ecx &= 0x40;
    ecx -= ecx;
    if ((ah & 8) == 0) {
        goto label_3;
    }
    ecx &= 0xffffffe0;
    ecx += 0x73;
    do {
        *((edx + 3)) = cl;
        ecx = eax;
        ecx &= 0x20;
        ecx -= ecx;
        ecx &= 0xffffffbb;
        ecx += 0x72;
        *((edx + 4)) = cl;
        ecx = eax;
        ecx &= 0x10;
        ecx -= ecx;
        ecx &= 0xffffffb6;
        ecx += 0x77;
        *((edx + 5)) = cl;
        ecx = eax;
        ecx &= 8;
        ecx -= ecx;
        if ((ah & 4) == 0) {
            goto label_4;
        }
        ecx &= 0xffffffe0;
        ecx += 0x73;
label_0:
        *((edx + 6)) = cl;
        ecx = eax;
        ecx &= 4;
        ecx -= ecx;
        ecx &= 0xffffffbb;
        ecx += 0x72;
        *((edx + 7)) = cl;
        ecx = eax;
        ecx &= 2;
        ecx -= ecx;
        ecx &= 0xffffffb6;
        ecx += 0x77;
        *((edx + 8)) = cl;
        if ((ah & 2) == 0) {
            goto label_5;
        }
        eax &= 1;
        eax -= eax;
        eax &= 0xffffffe0;
        eax += 0x74;
        *((edx + 9)) = al;
        *((edx + 0xa)) = 0x20;
        *((edx + 0xb)) = 0;
        return eax;
label_3:
        ecx &= 0xffffffb5;
        ecx += 0x78;
    } while (1);
label_5:
    eax &= 1;
    eax -= eax;
    eax &= 0xffffffb5;
    eax += 0x78;
    *((edx + 9)) = al;
    *((edx + 0xa)) = 0x20;
    *((edx + 0xb)) = 0;
    return eax;
label_4:
    ecx &= 0xffffffb5;
    ecx += 0x78;
    goto label_0;
    eax = *((esp + 4));
    eax = *((eax + 0x10));
    *((esp + 4)) = eax;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804cae0 */
#include <stdint.h>
 
uint32_t fcn_0804cae0 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    esi = ecx;
    ebx = eax;
    if (eax == 0) {
        goto label_1;
    }
    eax = fcn_08055350 (eax, 0);
    *(esp) = ebx;
    esi -= eax;
    eax = 0;
    __asm ("cmovs esi, eax");
    eax = stdout;
    *((esp + 4)) = eax;
    fputs_unlocked ();
    strlen (ebx);
    ebx = esi + eax;
    do {
        eax = stdout;
        edx = *((eax + 0x14));
        if (edx >= *((eax + 0x18))) {
            goto label_2;
        }
        *(edx) = 0x20;
        edx++;
        *((eax + 0x14)) = edx;
label_0:
        esi--;
    } while (esi != -1);
    do {
        eax = imp._Jv_RegisterClasses;
        eax = ebx + eax + 1;
        *(0x80624d8) = eax;
        return eax;
label_1:
        *((esp + 0xc)) = edx;
        ebx = esi;
        *((esp + 8)) = ecx;
        *((esp + 4)) = 0x805a08f;
        *(esp) = 1;
        eax = printf_chk ();
    } while (1);
label_2:
    *((esp + 4)) = 0x20;
    *(esp) = eax;
    overflow ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804e120 */
#include <stdint.h>
 
int32_t fcn_0804e120 (int32_t arg_150h) {
    char * canary;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_27h;
    int32_t var_12ch;
    int32_t var_13ch;
    int32_t var_140h;
    int32_t var_144h;
    int32_t var_148h;
    *((esp + 0x148)) = ebp;
    ebp = imp._Jv_RegisterClasses;
    *((esp + 0x13c)) = ebx;
    ebx = eax;
    eax = *(gs:0x14);
    *((esp + 0x12c)) = eax;
    eax = 0;
    *((esp + 0x140)) = esi;
    esi = edx;
    *((esp + 0x144)) = edi;
    edi = ecx;
    if (ebp == 0) {
        goto label_0;
    }
    eax = strstr (edx, 0x805a09e);
    if (eax == 0) {
        goto label_0;
    }
    eax = strlen (esi);
    while (1) {
label_0:
        eax = *((esp + 0x150));
        fcn_08058320 (0, 0x3e9, esi);
        edx = *((esp + 0x12c));
        edx ^= *(gs:0x14);
        if (eax != 0x65) {
            goto label_1;
        }
        ebx = *((esp + 0x13c));
        esi = *((esp + 0x140));
        edi = *((esp + 0x144));
        ebp = *((esp + 0x148));
        return eax;
        eax = ebp;
        ebp += 2;
        eax -= esi;
        *((esp + 4)) = esi;
        esi = esp + 0x27;
        *((esp + 0xc)) = 0x105;
        *((esp + 8)) = eax;
        *(esp) = esi;
        mempcpy_chk ();
        edx = *((edi + 0x10)) * 0xa1;
        edx += 0x8062520;
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = stpcpy ();
        strcpy (eax, ebp);
    }
label_1:
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80549f0 */
#include <stdint.h>
 
int32_t fcn_080549f0 (int32_t arg_20h) {
    char * src;
    eax = imp._Jv_RegisterClasses;
    ebx = *((esp + 0x20));
    if (eax == 0) {
        goto label_1;
    }
    esi = eax;
    if (*(eax) != ebx) {
        goto label_2;
    }
    goto label_3;
    do {
        if (*(eax) == ebx) {
            goto label_4;
        }
label_2:
        eax = *((eax + 4));
    } while (eax != 0);
label_1:
    *(esp) = ebx;
    eax = getgrgid ();
    if (eax == 0) {
        goto label_5;
    }
    edi = *(eax);
    eax = strlen (edi);
    eax += 9;
label_0:
    fcn_08058a70 (eax);
    *(eax) = ebx;
    esi = eax;
    eax = eax + 8;
    strcpy (eax, edi);
    eax = imp._Jv_RegisterClasses;
    *(0x8062db4) = esi;
    *((esi + 4)) = eax;
    do {
label_3:
        eax = 0;
        edx = esi + 8;
        if (*((esi + 8)) != 0) {
            eax = edx;
        }
        return eax;
label_4:
        esi = eax;
    } while (1);
label_5:
    al = 9;
    edi = 0x805da85;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804cba0 */
#include <stdint.h>
 
int32_t fcn_0804cba0 (void) {
    int32_t var_1ch;
    ebx = eax;
    eax = 0x805a095;
    if (ecx != 0) {
        eax = 0;
        if (*(0x80624ed) == 0) {
            goto label_0;
        }
    }
    ecx = edx;
    edx = ebx;
    void (*0x804cae0)() ();
label_0:
    *(esp) = ebx;
    fcn_08054860 (edx);
    edx = *((esp + 0x1c));
    ecx = edx;
    edx = ebx;
    return void (*0x804cae0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8054b80 */
#include <stdint.h>
 
int32_t fcn_08054b80 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    ebx = *((esp + 0x34));
    eax = *((esp + 0x38));
    esi = *((esp + 0x30));
    edi = eax + 0x14;
    *((eax + 0x14)) = 0;
    if (ebx < 0) {
        goto label_0;
    }
    do {
        edi--;
        eax = fcn_08059ac0 (esi, ebx, 0xa);
        eax += 0x30;
        *(edi) = al;
        eax = fcn_08059950 (esi, ebx, 0xa);
        esi = eax;
        ebx = edx;
        edx |= esi;
    } while (edx != 0);
    eax = edi;
    return eax;
    do {
label_0:
        edi = edi - 1;
        al = fcn_08059ac0 (esi, ebx, 0xa);
        edx = 0x30;
        dl -= al;
        *((ebp - 1)) = dl;
        eax = fcn_08059950 (esi, ebx, 0xa);
        esi = eax;
        eax = edx;
        eax |= esi;
        ebx = edx;
    } while (eax != 0);
    *((ebp - 2)) = 0x2d;
    edi = ebp - 2;
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059ac0 */
#include <stdint.h>
 
int32_t fcn_08059ac0 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    uint32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    edx = *((esp + 0x34));
    eax = *((esp + 0x30));
    *((esp + 0x24)) = edi;
    edi = *((esp + 0x3c));
    *((esp + 0x20)) = esi;
    esi = *((esp + 0x38));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = eax;
    eax = edx;
    edx = edi;
    *((esp + 0x28)) = ebp;
    *((esp + 0x14)) = 0;
    if (eax < 0) {
        goto label_6;
    }
label_2:
    if (edx < 0) {
        goto label_7;
    }
label_1:
    edx = *((esp + 8));
    eax = edi;
    ecx = esi;
    ebp = *((esp + 0xc));
    *((esp + 0x10)) = esi;
    edi = edx;
    *((esp + 0x18)) = ebp;
    if (eax == 0) {
        if (esi <= ebp) {
            goto label_8;
        }
        eax = edx;
        edx = ebp;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        esi = edx;
label_0:
        eax = edx;
        edx = 0;
    } else {
        if (eax <= ebp) {
            goto label_9;
        }
        eax = *((esp + 8));
        edx = ebp;
    }
    do {
label_3:
        ecx = *((esp + 0x14));
        if (ecx != 0) {
            eax = -eax;
            edx += 0;
            edx = -edx;
        }
        esi = *((esp + 0x20));
        edi = *((esp + 0x24));
        ebp = *((esp + 0x28));
        return eax;
label_9:
        __asm ("bsr esi, eax");
        esi ^= 0x1f;
        if (edx != 0) {
            goto label_10;
        }
        if (ecx <= edx) {
            goto label_11;
        }
        if (eax < ebp) {
            goto label_11;
        }
label_4:
        eax = edi;
        edx = *((esp + 0x18));
    } while (1);
label_8:
    if (esi == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        ecx = eax;
    }
    eax = ebp;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax = edi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = edx;
    goto label_0;
label_7:
    esi = -esi;
    edi += 0;
    edi = -edi;
    goto label_1;
label_6:
    esp + 8 = -esp + 8;
    esp + 0xc = -esp + 0xc;
    *((esp + 0x14)) = 0xffffffff;
    goto label_2;
label_10:
    *((esp + 8)) = 0x20;
    ecx = esi;
    edi = *((esp + 0x10));
    eax <<= cl;
    ecx = *((esp + 8));
    edi >>= cl;
    ecx = esi;
    edi |= eax;
    eax = edx;
    *((esp + 0x18)) = edi;
    edi = *((esp + 0x10));
    edi <<= cl;
    ecx = *((esp + 8));
    *((esp + 0x10)) = edi;
    edi = ebp;
    edi >>= cl;
    ecx = esi;
    ebp <<= cl;
    ecx = *((esp + 8));
    eax >>= cl;
    ecx = esi;
    edx <<= cl;
    eax |= ebp;
    *((esp + 0x1c)) = edx;
    edx = edi;
    eax = *(edx:eax) / esp + 0x18;
    edx = *(edx:eax) % esp + 0x18;
    ecx = edx;
    edx:eax = eax * *((esp + 0x10));
    edi = edx;
    if (ecx < edx) {
        goto label_12;
    }
    while (ecx != edx) {
label_5:
        edx = *((esp + 0x1c));
        edx -= ebp;
        ecx -= edi;
        *((esp + 0x10)) = ecx;
        edi = edx;
        ecx = esi;
        edi >>= cl;
        ebp = *((esp + 0x10));
        ecx = *((esp + 8));
        eax = edi;
        edx = *((esp + 0x10));
        ebp <<= cl;
        ecx = esi;
        eax |= ebp;
        edx >>= cl;
        goto label_3;
label_11:
        edx = ebp;
        edi -= ecx;
        edx -= eax;
        *((esp + 0x18)) = edx;
        goto label_4;
    }
label_12:
    edi = edx;
    ebp -= *((esp + 0x10));
    edi -= *((esp + 0x18));
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059950 */
#include <stdint.h>
 
int32_t fcn_08059950 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    uint32_t var_ch;
    int32_t var_10h;
    uint32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    *((esp + 0x24)) = edi;
    edi = *((esp + 0x34));
    edx = *((esp + 0x3c));
    *((esp + 0x20)) = esi;
    eax = *((esp + 0x38));
    *((esp + 0x28)) = ebp;
    esi = *((esp + 0x30));
    *((esp + 0x10)) = 0;
    if (edi < 0) {
        goto label_3;
    }
label_2:
    if (ebp < 0) {
        goto label_4;
    }
label_1:
    *((esp + 0x18)) = esi;
    ecx = eax;
    if (edx != 0) {
        goto label_5;
    }
    if (eax <= edi) {
        goto label_6;
    }
    eax = esi;
    edx = edi;
    ecx = 0;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    esi = eax;
    do {
label_0:
        edx = ecx;
        ecx = *((esp + 0x10));
        eax = esi;
        if (ecx != 0) {
            eax = -eax;
            edx += 0;
            edx = -edx;
        }
        esi = *((esp + 0x20));
        edi = *((esp + 0x24));
        ebp = *((esp + 0x28));
        return eax;
label_5:
        ecx = 0;
        esi = 0;
    } while (edx > edi);
    __asm ("bsr ecx, edx");
    ecx ^= 0x1f;
    *((esp + 0xc)) = ecx;
    if (edx != edi) {
        goto label_7;
    }
    if (eax <= *((esp + 0x18))) {
        goto label_8;
    }
    ecx = esi;
    if (edx >= edi) {
        goto label_0;
    }
label_8:
    ecx = 0;
    esi = 1;
    goto label_0;
label_6:
    if (eax == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
        ecx = eax;
    }
    eax = edi;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edi = eax;
    eax = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ecx = edi;
    esi = eax;
    goto label_0;
label_4:
    eax = -eax;
    edx += 0;
    esp + 0x10 = ~esp + 0x10;
    edx = -edx;
    goto label_1;
label_3:
    esi = -esi;
    edi += 0;
    edi = -edi;
    *((esp + 0x10)) = 0xffffffff;
    goto label_2;
label_7:
    ecx = *((esp + 0xc));
    eax = 0x20;
    esi = ebp;
    eax -= *((esp + 0xc));
    edx <<= cl;
    ecx = eax;
    esi >>= cl;
    ecx = *((esp + 0xc));
    esi |= edx;
    edx = edi;
    *((esp + 0x1c)) = esi;
    esi = *((esp + 0x18));
    ebp <<= cl;
    ecx = eax;
    edx >>= cl;
    ecx = *((esp + 0xc));
    edi <<= cl;
    ecx = eax;
    esi >>= cl;
    esi |= edi;
    eax = esi;
    eax = *(edx:eax) / esp + 0x1c;
    edx = *(edx:eax) % esp + 0x1c;
    edi = edx;
    esi = eax;
    edx:eax = eax * ebp;
    if (edi < edx) {
        goto label_9;
    }
    ebp = *((esp + 0x18));
    ecx = *((esp + 0xc));
    ebp <<= cl;
    while (edi != edx) {
        ecx = 0;
        goto label_0;
    }
label_9:
    esi--;
    ecx = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052840 */
#include <stdint.h>
 
uint32_t fcn_08052840 (int32_t arg_30h) {
    int32_t var_4h;
    int32_t var_18h;
    int32_t var_1ch;
    ebx = *((esp + 0x30));
    *(esp) = 0;
    *((esp + 4)) = ebx;
    eax = clock_gettime ();
    if (eax != 0) {
        eax = esp + 0x18;
        *((esp + 4)) = 0;
        *(esp) = eax;
        gettimeofday ();
        eax = *((esp + 0x18));
        *(ebx) = eax;
        eax = *((esp + 0x1c)) * 0x3e8;
        *((ebx + 4)) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d600 */
#include <stdint.h>
 
void fcn_0804d600 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_21h;
    int32_t var_2ch;
    ebx = esp + 0x21;
    edx = *(gs:0x14);
    *((esp + 0x2c)) = edx;
    edx = 0;
    *((esp + 0x10)) = eax;
    *((esp + 0xc)) = 0x805a08b;
    *((esp + 8)) = 0xb;
    *((esp + 4)) = 1;
    *(esp) = ebx;
    sprintf_chk ();
    strlen (ebx);
    edx = *((esp + 0x2c));
    edx ^= *(gs:0x14);
    if (? == ?) {
        return;
    }
    return stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059550 */
#include <stdint.h>
 
int32_t fcn_08059550 (int32_t arg_20h, int32_t arg_24h) {
    int32_t var_4h;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *((esp + 0x14)) = esi;
    eax = *((esp + 0x20));
    esi = *((esp + 0x24));
    *((esp + 0x10)) = ebx;
    *((esp + 0x18)) = edi;
    *(esp) = eax;
    *((esp + 4)) = esi;
    eax = getfilecon ();
    if (eax == 0) {
        goto label_1;
    }
    while (eax != 0xa) {
label_0:
        ebx = *((esp + 0x10));
        esi = *((esp + 0x14));
        edi = *((esp + 0x18));
        return eax;
        edx = *(esi);
        edi = 0x805a0cc;
        ecx = 0xa;
        esi = edx;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    }
    *(esp) = edx;
    freecon ();
    errno_location ();
    *(eax) = 0x3d;
    eax = 0xffffffff;
    goto label_0;
label_1:
    errno_location ();
    *(eax) = 0x5f;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058aa0 */
#include <stdint.h>
 
int32_t fcn_08058aa0 (void) {
    int32_t c;
    size_t n;
    int32_t var_20h_2;
    size_t size;
    size_t var_14h;
    int32_t var_20h;
    int32_t var_24h;
    ebx = *((esp + 0x24));
    eax = *((esp + 0x20));
    while (eax == 0) {
        eax = realloc (eax, ebx);
        if (eax == 0) {
            goto label_1;
        }
label_0:
        return eax;
    }
    eax = free (eax);
    eax = 0;
    return eax;
label_1:
    if (ebx == 0) {
        goto label_0;
    }
    return fcn_08058c00 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80595e0 */
#include <stdint.h>
 
int32_t fcn_080595e0 (int32_t arg_20h, int32_t arg_24h) {
    int32_t var_4h;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *((esp + 0x14)) = esi;
    eax = *((esp + 0x20));
    esi = *((esp + 0x24));
    *((esp + 0x10)) = ebx;
    *((esp + 0x18)) = edi;
    *(esp) = eax;
    *((esp + 4)) = esi;
    eax = lgetfilecon ();
    if (eax == 0) {
        goto label_1;
    }
    while (eax != 0xa) {
label_0:
        ebx = *((esp + 0x10));
        esi = *((esp + 0x14));
        edi = *((esp + 0x18));
        return eax;
        edx = *(esi);
        edi = 0x805a0cc;
        ecx = 0xa;
        esi = edx;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    }
    *(esp) = edx;
    freecon ();
    errno_location ();
    *(eax) = 0x3d;
    eax = 0xffffffff;
    goto label_0;
label_1:
    errno_location ();
    *(eax) = 0x5f;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8051aa0 */
#include <stdint.h>
 
int32_t fcn_08051aa0 (int32_t arg_20h, int32_t arg_24h) {
    eax = *((esp + 0x24));
    edx = *((eax + 0x10));
    eax = 0;
    edx &= 0xf000;
    if (edx == 0xa000) {
        goto label_0;
    }
    eax = *((esp + 0x20));
    *(esp) = eax;
    eax = acl_extended_file_nofollow ();
    while (edx == 0x26) {
label_0:
        return eax;
        eax = errno_location ();
        edx = *(eax);
        eax = 0;
    }
    if (edx == 0x5f) {
        goto label_0;
    }
    if (edx == 0x16) {
        goto label_0;
    }
    eax = 0;
    al = (edx == 0x10) ? 1 : 0;
    eax--;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8051b00 */
#include <stdint.h>
 
int32_t fcn_08051b00 (int32_t arg_40h, int32_t arg_44h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_18h;
    int32_t var_1ch;
    ebx = 0x401;
    eax = *((esp + 0x44));
    ebp = *((esp + 0x40));
    edx = eax + 1;
    if (eax <= 0x400) {
        ebx = edx;
    }
label_0:
    eax = malloc (ebx);
    esi = eax;
    if (eax == 0) {
        goto label_2;
    }
    do {
        *((esp + 8)) = ebx;
        *((esp + 4)) = eax;
        *(esp) = ebp;
        eax = readlink ();
        edi = eax;
        if (eax < 0) {
            goto label_3;
        }
label_1:
        if (ebx > edi) {
            goto label_4;
        }
        free (esi);
        if (ebx > 0x3fffffff) {
            goto label_5;
        }
        ebx += ebx;
        eax = malloc (ebx);
        esi = eax;
    } while (eax != 0);
label_2:
    eax = esi;
    return eax;
label_5:
    if (ebx > 0x7ffffffe) {
        goto label_6;
    }
    ebx = 0x7fffffff;
    goto label_0;
label_3:
    eax = errno_location ();
    edx = *(eax);
    if (edx == 0x22) {
        goto label_1;
    }
    *(esp) = esi;
    esi = 0;
    *((esp + 0x1c)) = eax;
    free (edx);
    eax = *((esp + 0x1c));
    edx = *((esp + 0x18));
    *(eax) = edx;
    goto label_2;
label_4:
    *((esi + edi)) = 0;
    eax = esi;
    return eax;
label_6:
    errno_location ();
    esi = 0;
    *(eax) = 0xc;
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d660 */
#include <stdint.h>
 
int32_t fcn_0804d660 (void) {
    int32_t var_4h;
    ebx = eax;
    while (eax == 0) {
        eax = ebx;
        void (*0x804d600)() ();
        eax = fcn_08054860 (eax);
    }
    eax = fcn_08055350 (eax, 0);
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x804d7a0 */
#include <stdint.h>
 
int32_t fcn_0804d7a0 (int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    int32_t var_8h;
    *((esp + 4)) = ebx;
    ebx = *((esp + 0x10));
    *((esp + 8)) = esi;
    esi = *((esp + 0x14));
    errno_location ();
    *(eax) = 0;
    *((esp + 0x14)) = esi;
    esi = *((esp + 8));
    *((esp + 0x10)) = ebx;
    ebx = *((esp + 4));
    return strcoll ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8051d10 */
#include <stdint.h>
 
uint32_t fcn_08051d10 (int32_t arg_30h, int32_t arg_34h, uint32_t arg_38h) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    int32_t var_10h;
    *((esp + 8)) = 5;
    if (*((esp + 0x38)) == -1) {
        goto label_0;
    }
    eax = dcgettext (0, 0x805d344);
    esi = eax;
    do {
        eax = *((esp + 0x30));
        eax = fcn_08055690 (1, eax);
        ebx = eax;
        eax = *((esp + 0x34));
        eax = fcn_080567d0 (0, 6, eax);
        *((esp + 0x10)) = ebx;
        *((esp + 8)) = esi;
        error (0, 0);
        return eax;
label_0:
        eax = dcgettext (0, 0x805d329);
        esi = eax;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8051db0 */
#include <stdint.h>
 
int32_t fcn_08051db0 (int32_t arg_40h, int32_t arg_44h, int32_t arg_48h) {
    void * s2;
    size_t n;
    int32_t var_ch;
    void * s1;
    int32_t var_1ch;
    eax = *((esp + 0x40));
    esi = *((esp + 0x44));
    ebp = *((esp + 0x48));
    *((esp + 8)) = 5;
    *((esp + 0x1c)) = eax;
    eax = dcgettext (0, 0x805d361);
    *((esp + 4)) = 1;
    *((esp + 8)) = eax;
    eax = *(obj.stderr);
    *(esp) = eax;
    fprintf_chk ();
    eax = *((esp + 0x1c));
    edi = *(eax);
    if (edi == 0) {
        goto label_2;
    }
    *((esp + 0x18)) = 0;
    ebx = 0;
    while (ebx == 0) {
label_0:
        eax = *(obj.stderr);
        ebx++;
        *((esp + 0xc)) = edi;
        *((esp + 8)) = 0x805d376;
        *((esp + 4)) = 1;
        *(esp) = eax;
        fprintf_chk ();
        eax = *((esp + 0x1c));
        *((esp + 0x18)) = esi;
        esi += ebp;
        edi = *((eax + ebx*4));
        if (edi == 0) {
            goto label_2;
        }
label_1:
    }
    eax = *((esp + 0x18));
    eax = memcmp (eax, esi, ebp);
    if (eax != 0) {
        goto label_0;
    }
    eax = *(obj.stderr);
    ebx++;
    esi += ebp;
    *((esp + 0xc)) = edi;
    *((esp + 8)) = 0x805d380;
    *((esp + 4)) = 1;
    *(esp) = eax;
    fprintf_chk ();
    eax = *((esp + 0x1c));
    edi = *((eax + ebx*4));
    if (edi != 0) {
        goto label_1;
    }
label_2:
    eax = *(obj.stderr);
    edx = *((eax + 0x14));
    if (edx < *((eax + 0x18))) {
        *(edx) = 0xa;
        edx++;
        *((eax + 0x14)) = edx;
        return eax;
    }
    *((esp + 0x44)) = 0xa;
    *((esp + 0x40)) = eax;
    return overflow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059700 */
#include <stdint.h>
 
uint32_t fcn_08059700 (int32_t arg_20h) {
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *((esp + 0x14)) = esi;
    esi = *((esp + 0x20));
    *((esp + 0x10)) = ebx;
    *((esp + 0x18)) = edi;
    *(esp) = esi;
    eax = fpending ();
    ebx = *(esi);
    ebx &= 0x20;
    edi = eax;
    eax = fcn_08059790 (esi);
    al = (eax != 0) ? 1 : 0;
    if (ebx != 0) {
        goto label_1;
    }
    if (al == 0) {
        goto label_0;
    }
    ebx = 0xffffffff;
    if (edi == 0) {
        goto label_2;
    }
    do {
label_0:
        eax = ebx;
        esi = *((esp + 0x14));
        ebx = *((esp + 0x10));
        edi = *((esp + 0x18));
        return eax;
label_1:
        ebx = 0xffffffff;
    } while (al != 0);
    errno_location ();
    *(eax) = 0;
    goto label_0;
label_2:
    eax = errno_location ();
    ebx = 0;
    bl = (*(eax) == 9) ? 1 : 0;
    ebx--;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052420 */
#include <stdint.h>
 
int32_t fcn_08052420 (void) {
    esi = 0;
    edx = *(eax);
    ecx = *(edx);
    if (cl == 0) {
        goto label_3;
    }
    ebx = 0;
    while (bl != 0) {
        ebx = (int32_t) cl;
        ebx &= 0xffffffdf;
        edi = ebx - 0x41;
        ebx = 0;
        if (edi > 0x19) {
label_1:
            ecx = 0;
            if (cl == 0x7e) {
                esi = ecx;
                goto label_0;
            }
        }
label_0:
        edx++;
        *(eax) = edx;
        ecx = *(edx);
        if (cl == 0) {
            goto label_3;
        }
label_2:
    }
    if (cl == 0x2e) {
        goto label_4;
    }
    edi = (int32_t) cl;
    ebp = edi - 0x30;
    if (ebp <= 9) {
        goto label_0;
    }
    edi &= 0xffffffdf;
    edi -= 0x41;
    if (edi > 0x19) {
        goto label_1;
    }
    edx++;
    *(eax) = edx;
    ecx = *(edx);
    if (cl != 0) {
        goto label_2;
    }
label_3:
    eax = esi;
    esi = ebx;
    edi = ebx;
    return eax;
label_4:
    ebx = 1;
    if (esi == 0) {
        esi = edx;
    }
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8052920 */
#include <stdint.h>
 
int32_t fcn_08052920 (void) {
    int32_t var_4h;
    ebx = eax;
    eax = *((eax + 8));
    eax = uint32_t (*ebx + 0x18)(uint32_t, uint32_t) (ebx, eax);
    if (eax < *((ebx + 8))) {
        edx = *(ebx);
        eax = edx + eax*8;
        return eax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059230 */
#include <stdint.h>
 
int32_t fcn_08059230 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch, char * s, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_5ch_2) {
    char * file;
    uint32_t line;
    char * function;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_2ch;
    ebp = *((esp + 0x58));
    esi = *((esp + 0x50));
    eax = *((esp + 0x54));
    if (ebp > 0x24) {
        goto label_5;
    }
    edx = *(esi);
    ebx = esp + 0x2c;
    if (eax != 0) {
        ebx = eax;
    }
    *((esp + 0x18)) = dl;
    eax = ctype_b_loc ();
    edx = *((esp + 0x18));
    edi = *(eax);
    eax = esi;
    while ((*((edi + ecx*2 + 1)) & 0x20) != 0) {
        eax++;
        edx = *(eax);
        ecx = (int32_t) dl;
    }
    edi = 4;
    while (ecx != 0x22) {
label_1:
        eax = edi;
        return eax;
        errno_location ();
        *(eax) = 0;
        *((esp + 8)) = ebp;
        *((esp + 0xc)) = 0;
        *((esp + 4)) = ebx;
        *(esp) = esi;
        *((esp + 0x18)) = eax;
        eax = strtoull_internal ();
        ebp = *(ebx);
        ecx = *((esp + 0x18));
        *((esp + 0x20)) = eax;
        *((esp + 0x24)) = edx;
        if (ebp == esi) {
            goto label_6;
        }
        ecx = *(ecx);
        edi = 0;
        if (ecx == 0) {
label_0:
            ecx = *((esp + 0x60));
            if (ecx == 0) {
                goto label_7;
            }
label_2:
            esi = *(ebp);
            eax = esi;
            if (al == 0) {
                goto label_8;
            }
            ecx = *((esp + 0x60));
            eax = (int32_t) al;
            eax = strchr (ecx, eax);
            if (eax == 0) {
                goto label_9;
            }
            ecx = *((esp + 0x60));
            eax = strchr (ecx, 0x30);
            edx = 0x400;
            *((esp + 0x1c)) = 1;
            if (eax != 0) {
                eax = *((ebp + 1));
                if (al == 0x44) {
                    goto label_10;
                }
                if (al == 0x69) {
                    goto label_11;
                }
                if (al == 0x42) {
                    goto label_10;
                }
            }
label_4:
            eax = esi - 0x42;
            if (al > 0x35) {
                goto label_9;
            }
            eax = (int32_t) al;
            /* switch table (54 cases) at 0x805de98 */
        }
        di = 4;
    }
    di = 1;
    goto label_0;
    edx = 2;
    eax = esp + 0x20;
    eax = fcn_08059140 ();
    ebp = *(ebx);
label_3:
    ebp += *((esp + 0x1c));
    edi |= eax;
    eax = edi;
    eax |= 2;
    *(ebx) = ebp;
    if (*(ebp) != 0) {
        edi = eax;
    }
label_8:
    eax = *((esp + 0x20));
    edx = *((esp + 0x24));
label_7:
    ecx = *((esp + 0x5c));
    *(ecx) = eax;
    eax = edi;
    *((ecx + 4)) = edx;
    return eax;
label_6:
    eax = *((esp + 0x60));
    if (eax == 0) {
        goto label_1;
    }
    eax = *(esi);
    if (al == 0) {
        goto label_1;
    }
    ecx = *((esp + 0x60));
    eax = (int32_t) al;
    eax = strchr (ecx, eax);
    if (eax == 0) {
        goto label_1;
    }
    *((esp + 0x20)) = 1;
    di = 0;
    *((esp + 0x24)) = 0;
    goto label_2;
label_9:
    ecx = *((esp + 0x5c));
    edi |= 2;
    eax = *((esp + 0x20));
    edx = *((esp + 0x24));
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    goto label_1;
    eax = 0;
    goto label_3;
    edx = 0x200;
    eax = esp + 0x20;
    fcn_08059140 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 7;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 8;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 4;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 5;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 2;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 1;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 3;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    ecx = 6;
    eax = esp + 0x20;
    fcn_080591f0 ();
    ebp = *(ebx);
    goto label_3;
    edx = 0x400;
    eax = esp + 0x20;
    eax = fcn_08059140 ();
    ebp = *(ebx);
    goto label_3;
label_11:
    eax = 0;
    al = (*((ebp + 2)) == 0x42) ? 1 : 0;
    ecx = eax + eax + 1;
    *((esp + 0x1c)) = ecx;
    goto label_4;
label_10:
    *((esp + 0x1c)) = 2;
    edx = 0x3e8;
    goto label_4;
label_5:
    return assert_fail (0x805df70, 0x805dd20, 0x53);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056590 */
#include <stdint.h>
 
int32_t fcn_08056590 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_3ch;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h;
    eax = *((esp + 0x5c));
    *((esp + 0x3c)) = ebx;
    ebx = 0x8062dc0;
    *((esp + 0x40)) = esi;
    *((esp + 0x44)) = edi;
    if (eax != 0) {
        ebx = eax;
    }
    *((esp + 0x48)) = ebp;
    ebp = ebx + 8;
    eax = errno_location ();
    edx = 0;
    esi = *((ebx + 4));
    ecx = *((esp + 0x50));
    *((esp + 0x20)) = eax;
    eax = *(eax);
    *((esp + 0x2c)) = eax;
    eax = *((esp + 0x58));
    eax = *((ebx + 0x2c));
    dl = (eax == 0) ? 1 : 0;
    esi |= edx;
    edx = 0;
    eax = *((ebx + 0x28));
    eax = *(ebx);
    eax = *((esp + 0x54));
    eax = 0;
    eax = fcn_08055760 (eax, eax, esi);
    edi = eax;
    edi++;
    *((esp + 0x28)) = eax;
    eax = fcn_08058a70 (edi);
    edx = *((esp + 0x54));
    ecx = *((esp + 0x50));
    *((esp + 0x24)) = eax;
    eax = *((ebx + 0x2c));
    eax = *((ebx + 0x28));
    eax = *(ebx);
    edx = edi;
    eax = *((esp + 0x24));
    fcn_08055760 (eax, eax, esi);
    eax = *((esp + 0x20));
    edx = *((esp + 0x2c));
    *(eax) = edx;
    eax = *((esp + 0x58));
    if (eax != 0) {
        edx = *((esp + 0x28));
        eax = *((esp + 0x58));
        *(eax) = edx;
    }
    eax = *((esp + 0x24));
    ebx = *((esp + 0x3c));
    esi = *((esp + 0x40));
    edi = *((esp + 0x44));
    ebp = *((esp + 0x48));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056760 */
#include <stdint.h>
 
int32_t fcn_08056760 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 4));
    ecx = *((esp + 0xc));
    edx = *((esp + 8));
    *((esp + 4)) = 0x8062dc0;
    return void (*0x8056220)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056800 */
#include <stdint.h>
 
int32_t fcn_08056800 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch) {
    int32_t var_10h;
    edx = *((esp + 0x54));
    ebx = esp + 0x10;
    eax = ebx;
    fcn_080556e0 ();
    ecx = *((esp + 0x5c));
    edx = *((esp + 0x58));
    eax = *((esp + 0x50));
    fcn_08056220 (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80564d0 */
#include <stdint.h>
 
int32_t fcn_080564d0 (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    ebx = 0x8062dc0;
    eax = *((esp + 0x10));
    edx = *((esp + 0x18));
    ecx = *((esp + 0x14));
    if (eax == 0) {
        eax = ebx;
    }
    *(eax) = 8;
    if (edx != 0) {
        if (ecx == 0) {
            goto label_0;
        }
        *((eax + 0x28)) = ecx;
        *((eax + 0x2c)) = edx;
        return eax;
    }
label_0:
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80569d0 */
#include <stdint.h>
 
int32_t fcn_080569d0 (int32_t arg_50h, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch, int32_t arg_60h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    eax = imp._Jv_RegisterClasses;
    ebx = esp + 0x10;
    *(esp) = ebx;
    *((esp + 0x10)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x14)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x18)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x1c)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x20)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x24)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x28)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x2c)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x30)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x34)) = eax;
    eax = imp._Jv_RegisterClasses;
    *((esp + 0x38)) = eax;
    eax = imp._Jv_RegisterClasses;
    eax = *((esp + 0x58));
    eax = *((esp + 0x54));
    fcn_080564d0 (eax, eax, eax);
    ecx = *((esp + 0x60));
    edx = *((esp + 0x5c));
    eax = *((esp + 0x50));
    fcn_08056220 (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056a80 */
#include <stdint.h>
 
int32_t fcn_08056a80 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    eax = *((esp + 0x3c));
    eax = *((esp + 0x38));
    eax = *((esp + 0x34));
    eax = *((esp + 0x30));
    fcn_080569d0 (0xffffffff, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8056b30 */
#include <stdint.h>
 
uint32_t fcn_08056b30 (void) {
    edi = ecx;
    esi = edx;
    ebx = eax;
    if (ecx == 0) {
        goto label_0;
    }
    eax = ctype_toupper_loc ();
    do {
        ecx = *((esi + edi - 1));
        edx = *(eax);
        edx = *((edx + ecx*4));
        *((ebx + edi - 1)) = dl;
        edi--;
    } while (edi != 0);
label_0:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8058370 */
#include <stdint.h>
 
int32_t fcn_08058370 (int32_t arg_70h, int32_t arg_74h, int32_t arg_78h, int32_t arg_7ch, int32_t arg_80h, int32_t arg_84h, int32_t arg_5ch, int32_t arg_60h, int32_t arg_64h, int32_t arg_68h, int32_t arg_70h_2, int32_t arg_74h_2, int32_t arg_78h_2, int32_t arg_7ch_2, int32_t arg_80h_2, int32_t arg_5ch_2, int32_t arg_60h_2, int32_t arg_64h_2, int32_t arg_68h_2, int32_t arg_70h_3, int32_t arg_74h_3, int32_t arg_78h_3, int32_t arg_7ch_3, int32_t arg_80h_3, int32_t arg_84h_2, int32_t arg_38h, int32_t arg_5ch_3, int32_t arg_60h_3, int32_t arg_64h_3, int32_t arg_68h_3, int32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch, int32_t arg_38h_2, int32_t arg_3ch, int32_t arg_40h, int32_t arg_44h, int32_t arg_48h, int32_t arg_4ch, int32_t arg_5ch_4, int32_t arg_60h_4, int32_t arg_64h_4, int32_t arg_68h_4) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_38h;
    int32_t var_3ch;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h;
    int32_t var_4ch;
    int32_t var_5ch;
    int32_t var_60h;
    int32_t var_64h;
    int32_t var_68h;
    eax = *((esp + 0x74));
    *((esp + 0x5c)) = ebx;
    edx = *((esp + 0x78));
    *((esp + 0x60)) = esi;
    ecx = *((esp + 0x7c));
    *((esp + 0x64)) = edi;
    esi = *((esp + 0x70));
    ebx = *((esp + 0x80));
    *((esp + 0x68)) = ebp;
    edi = *((esp + 0x84));
    if (eax == 0) {
        goto label_2;
    }
    *((esp + 0x14)) = ecx;
    *((esp + 0x10)) = edx;
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x805da2c;
    *((esp + 4)) = 1;
    *(esp) = esi;
    fprintf_chk ();
label_1:
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805da3f);
    *((esp + 0x10)) = 0x7db;
    *((esp + 8)) = 0x805dce0;
    *((esp + 4)) = 1;
    *(esp) = esi;
    *((esp + 0xc)) = eax;
    fprintf_chk ();
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805da9c);
    *((esp + 4)) = esi;
    *(esp) = eax;
    fputs_unlocked ();
    if (edi <= 9) {
        goto label_3;
    }
    eax = *((ebx + 0x10));
    edx = *((ebx + 0x20));
    ebp = *((ebx + 0x1c));
    edi = *((ebx + 0x18));
    *((esp + 0x40)) = eax;
    eax = *((ebx + 0xc));
    ecx = *((ebx + 0x14));
    *((esp + 0x44)) = eax;
    eax = *((ebx + 8));
    *((esp + 0x48)) = eax;
    eax = *((ebx + 4));
    ebx = *(ebx);
    *((esp + 8)) = 5;
    *((esp + 4)) = 0x805dc64;
    *((esp + 0x4c)) = eax;
    do {
        *((esp + 0x38)) = edx;
        eax = dcgettext (ecx);
        edx = *((esp + 0x38));
        ecx = *((esp + 0x3c));
        *((esp + 0x28)) = ebp;
        *((esp + 0x24)) = edi;
        *((esp + 0x2c)) = edx;
        edx = *((esp + 0x40));
        *((esp + 0x20)) = ecx;
        *((esp + 0xc)) = ebx;
        *((esp + 8)) = eax;
        *((esp + 0x1c)) = edx;
        edx = *((esp + 0x44));
        *((esp + 4)) = 1;
        *(esp) = esi;
        *((esp + 0x18)) = edx;
        edx = *((esp + 0x48));
        *((esp + 0x14)) = edx;
        edx = *((esp + 0x4c));
        *((esp + 0x10)) = edx;
        fprintf_chk ();
label_0:
        ebx = *((esp + 0x5c));
        esi = *((esp + 0x60));
        edi = *((esp + 0x64));
        ebp = *((esp + 0x68));
        return eax;
        /* switch table (10 cases) at 0x805dca0 */
label_3:
        eax = *((ebx + 0x10));
        edx = *((ebx + 0x20));
        ebp = *((ebx + 0x1c));
        edi = *((ebx + 0x18));
        *((esp + 0x40)) = eax;
        eax = *((ebx + 0xc));
        ecx = *((ebx + 0x14));
        *((esp + 0x44)) = eax;
        eax = *((ebx + 8));
        *((esp + 0x48)) = eax;
        eax = *((ebx + 4));
        ebx = *(ebx);
        *((esp + 8)) = 5;
        *((esp + 4)) = 0x805dc30;
        *((esp + 0x4c)) = eax;
    } while (1);
    abort ();
    ebx = *(ebx);
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805da43);
    edi = *((esp + 0x64));
    *((esp + 0x7c)) = ebx;
    ebp = *((esp + 0x68));
    *((esp + 0x70)) = esi;
    ebx = *((esp + 0x5c));
    esi = *((esp + 0x60));
    *((esp + 0x74)) = 1;
    *((esp + 0x78)) = eax;
    void (*0x8049a60)() ();
    edi = *((ebx + 4));
    ebx = *(ebx);
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805da53);
    ebp = *((esp + 0x68));
    *((esp + 0x80)) = edi;
    edi = *((esp + 0x64));
    *((esp + 0x7c)) = ebx;
    ebx = *((esp + 0x5c));
    *((esp + 0x70)) = esi;
    esi = *((esp + 0x60));
    *((esp + 0x74)) = 1;
    *((esp + 0x78)) = eax;
    void (*0x8049a60)() ();
    ebp = *((ebx + 8));
    edi = *((ebx + 4));
    ebx = *(ebx);
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805da6a);
    *((esp + 0x84)) = ebp;
    ebp = *((esp + 0x68));
    *((esp + 0x80)) = edi;
    edi = *((esp + 0x64));
    *((esp + 0x7c)) = ebx;
    ebx = *((esp + 0x5c));
    *((esp + 0x70)) = esi;
    esi = *((esp + 0x60));
    *((esp + 0x74)) = 1;
    *((esp + 0x78)) = eax;
    void (*0x8049a60)() ();
    edx = *((ebx + 0xc));
    ebp = *((ebx + 8));
    edi = *((ebx + 4));
    ebx = *(ebx);
    *((esp + 0x38)) = edx;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805db68);
    edx = *((esp + 0x38));
    *((esp + 0x14)) = ebp;
    *((esp + 0x10)) = edi;
    *((esp + 0xc)) = ebx;
    *((esp + 0x18)) = edx;
    *((esp + 4)) = 1;
    *((esp + 8)) = eax;
    *(esp) = esi;
    fprintf_chk ();
    goto label_0;
    edx = *((ebx + 0x10));
    ecx = *((ebx + 4));
    ebp = *((ebx + 0xc));
    edi = *((ebx + 8));
    ebx = *(ebx);
    *((esp + 0x38)) = edx;
    *((esp + 0x3c)) = ecx;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805db88);
    edx = *((esp + 0x38));
    ecx = *((esp + 0x3c));
    *((esp + 0x18)) = ebp;
    *((esp + 0x14)) = edi;
    *((esp + 0x1c)) = edx;
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = eax;
    *((esp + 4)) = 1;
    *(esp) = esi;
    fprintf_chk ();
    goto label_0;
    edx = *((ebx + 0x14));
    ecx = *((ebx + 8));
    eax = *((ebx + 4));
    ebp = *((ebx + 0x10));
    edi = *((ebx + 0xc));
    ebx = *(ebx);
    *((esp + 0x40)) = eax;
    *((esp + 0x38)) = edx;
    *((esp + 0x3c)) = ecx;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805dbac);
    edx = *((esp + 0x38));
    ecx = *((esp + 0x3c));
    *((esp + 0x1c)) = ebp;
    *((esp + 0x18)) = edi;
    *((esp + 0x20)) = edx;
    edx = *((esp + 0x40));
    *((esp + 0x14)) = ecx;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = eax;
    *((esp + 0x10)) = edx;
    *((esp + 4)) = 1;
    *(esp) = esi;
    fprintf_chk ();
    goto label_0;
    eax = *((ebx + 8));
    edx = *((ebx + 0x18));
    ecx = *((ebx + 0xc));
    ebp = *((ebx + 0x14));
    *((esp + 0x40)) = eax;
    eax = *((ebx + 4));
    edi = *((ebx + 0x10));
    ebx = *(ebx);
    *((esp + 0x38)) = edx;
    *((esp + 0x3c)) = ecx;
    *((esp + 0x44)) = eax;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805dbd4);
    edx = *((esp + 0x38));
    ecx = *((esp + 0x3c));
    *((esp + 0x20)) = ebp;
    *((esp + 0x1c)) = edi;
    *((esp + 0x24)) = edx;
    edx = *((esp + 0x40));
    *((esp + 0x18)) = ecx;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = eax;
    *((esp + 0x14)) = edx;
    edx = *((esp + 0x44));
    *((esp + 4)) = 1;
    *(esp) = esi;
    *((esp + 0x10)) = edx;
    fprintf_chk ();
    goto label_0;
    eax = *((ebx + 0xc));
    edx = *((ebx + 0x1c));
    ecx = *((ebx + 0x10));
    ebp = *((ebx + 0x18));
    *((esp + 0x40)) = eax;
    eax = *((ebx + 8));
    edi = *((ebx + 0x14));
    *((esp + 0x44)) = eax;
    eax = *((ebx + 4));
    ebx = *(ebx);
    *((esp + 0x38)) = edx;
    *((esp + 0x3c)) = ecx;
    *((esp + 0x48)) = eax;
    *((esp + 8)) = 5;
    eax = dcgettext (0, 0x805dc00);
    edx = *((esp + 0x38));
    ecx = *((esp + 0x3c));
    *((esp + 0x24)) = ebp;
    *((esp + 0x20)) = edi;
    *((esp + 0x28)) = edx;
    edx = *((esp + 0x40));
    *((esp + 0x1c)) = ecx;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = eax;
    *((esp + 0x18)) = edx;
    edx = *((esp + 0x44));
    *((esp + 4)) = 1;
    *(esp) = esi;
    *((esp + 0x14)) = edx;
    edx = *((esp + 0x48));
    *((esp + 0x10)) = edx;
    fprintf_chk ();
    goto label_0;
label_2:
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x805da38;
    *((esp + 4)) = 1;
    *(esp) = esi;
    fprintf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059140 */
#include <stdint.h>
 
int32_t fcn_08059140 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    uint32_t var_1ch;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    *((esp + 0x2c)) = ebx;
    ebx = eax;
    eax = *(eax);
    ecx = *((ebx + 4));
    *((esp + 0x34)) = edi;
    edi = edx;
    edi >>= 0x1f;
    *((esp + 8)) = edx;
    *((esp + 0xc)) = edi;
    *(esp) = 0xffffffff;
    *((esp + 4)) = 0xffffffff;
    fcn_08059c90 (ebp);
    ecx = *((esp + 0x18));
    if (edx > ecx) {
        goto label_0;
    }
    while (eax < *((esp + 0x1c))) {
        *(ebx) = 0xffffffff;
        eax = 1;
        *((ebx + 4)) = 0xffffffff;
        goto label_1;
    }
label_0:
    eax = *((esp + 0x1c));
    ecx *= ebp;
    eax *= edi;
    ecx += eax;
    eax = *((esp + 0x1c));
    edx:eax = eax * ebp;
    edx += ecx;
    *((esp + 0x10)) = eax;
    eax = *((esp + 0x10));
    *((esp + 0x14)) = edx;
    edx = *((esp + 0x14));
    *(ebx) = eax;
    eax = 0;
    *((ebx + 4)) = edx;
label_1:
    ebx = *((esp + 0x2c));
    esi = *((esp + 0x30));
    edi = *((esp + 0x34));
    ebp = *((esp + 0x38));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80591f0 */
#include <stdint.h>
 
int32_t fcn_080591f0 (void) {
    edi = 0;
    ebx = edx;
    if (ecx == 0) {
        goto label_0;
    }
    esi = ecx;
    do {
        edx = ebx;
        eax = ebp;
        eax = fcn_08059140 ();
        edi |= eax;
        esi--;
    } while (esi != 0);
label_0:
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059790 */
#include <stdint.h>
 
uint32_t fcn_08059790 (FILE * stream) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    *((esp + 0x10)) = ebx;
    ebx = *((esp + 0x20));
    *((esp + 0x14)) = esi;
    *((esp + 0x18)) = edi;
    eax = fileno (ebx);
    if (eax < 0) {
        goto label_0;
    }
    *(esp) = ebx;
    eax = freading ();
    while (eax != -1) {
        eax = fcn_08059840 (ebx);
        if (eax == 0) {
            goto label_0;
        }
        eax = errno_location ();
        edi = *(eax);
        esi = eax;
        fclose (ebx);
        if (edi != 0) {
            *(esi) = edi;
            eax = 0xffffffff;
        }
        ebx = *((esp + 0x10));
        esi = *((esp + 0x14));
        edi = *((esp + 0x18));
        return eax;
        eax = fileno (ebx);
        *((esp + 0xc)) = 1;
        *((esp + 4)) = 0;
        *((esp + 8)) = 0;
        *(esp) = eax;
        eax = lseek64 ();
        eax &= edx;
    }
label_0:
    *((esp + 0x20)) = ebx;
    esi = *((esp + 0x14));
    ebx = *((esp + 0x10));
    edi = *((esp + 0x18));
    return fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x8059840 */
#include <stdint.h>
 
uint32_t fcn_08059840 (int32_t arg_20h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    ebx = *((esp + 0x20));
    if (ebx != 0) {
        *(esp) = ebx;
        eax = freading ();
        if (eax == 0) {
            goto label_0;
        }
        eax = *(ebx);
        if ((ah & 1) != 0) {
            goto label_1;
        }
    }
label_0:
    *((esp + 0x20)) = ebx;
    void (*0x8049550)() ();
label_1:
    fcn_080598a0 (ebx, 0, 0);
    *((esp + 0x20)) = ebx;
    return fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-4/ia32_elf/subject.exe @ 0x80598a0 */
#include <stdint.h>
 
int32_t fcn_080598a0 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    *((esp + 0x1c)) = ebx;
    ebx = *((esp + 0x30));
    *((esp + 0x20)) = esi;
    esi = *((esp + 0x34));
    *((esp + 0x24)) = edi;
    edi = *((esp + 0x38));
    *((esp + 0x28)) = ebp;
    ebp = *((esp + 0x3c));
    eax = *((ebx + 4));
    while (*((ebx + 0x14)) != eax) {
label_0:
        *((esp + 0x3c)) = ebp;
        ebp = *((esp + 0x28));
        *((esp + 0x34)) = esi;
        esi = *((esp + 0x20));
        *((esp + 0x38)) = edi;
        edi = *((esp + 0x24));
        *((esp + 0x30)) = ebx;
        ebx = *((esp + 0x1c));
        void (*0x8049610)() ();
        eax = *((ebx + 0x10));
    }
    eax = *((ebx + 0x24));
    if (eax != 0) {
        goto label_0;
    }
    eax = fileno (ebx);
    *((esp + 0xc)) = ebp;
    *((esp + 4)) = esi;
    *((esp + 8)) = edi;
    *(esp) = eax;
    eax = lseek64 ();
    ecx = eax;
    ecx &= edx;
    if (ecx == -1) {
        goto label_1;
    }
    *(ebx) &= 0xffffffef;
    *((ebx + 0x4c)) = eax;
    eax = 0;
    *((ebx + 0x50)) = edx;
    do {
        ebx = *((esp + 0x1c));
        esi = *((esp + 0x20));
        edi = *((esp + 0x24));
        ebp = *((esp + 0x28));
        return eax;
label_1:
        eax |= 0xffffffff;
    } while (1);
}
