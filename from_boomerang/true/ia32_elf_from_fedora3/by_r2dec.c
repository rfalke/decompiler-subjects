/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048ac0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 5684 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, 0x804a008, 0x804a05c, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80489c4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048d81 */
#include <stdint.h>
 
int32_t close_stdout (void) {
    int32_t errname;
    char ** format;
    int32_t var_ch;
    int32_t var_10h;
    fcn_08048d64 ();
    ebx += 0x2bc0;
    edi = *((ebx - 0xc));
    edx = *(edi);
    eax = *(edx);
    eax >>= 5;
    eax &= 1;
    esi -= esi;
    if (esi != 0) {
        *(esp) = edx;
        eax = fpending ();
        if (eax == 0) {
            goto label_0;
        }
    }
    eax = *(edi);
    eax = fclose (eax);
    while (1) {
        if (esi >= 0) {
            eax = ebx - 0x16b0;
            *((esp + 8)) = 5;
            eax = dcgettext (0, eax);
            edi = eax;
            eax = *((ebx + 0xb8));
            if (eax == 0) {
                goto label_1;
            }
            eax = fcn_08049a8b (eax);
            *((esp + 0x10)) = edi;
            *((esp + 0xc)) = eax;
            eax = ebx - 0x16a4;
            eax = *((ebx - 0x10));
            eax = *(eax);
            error (eax, esi, eax);
        }
label_0:
        return eax;
        eax = errno_location ();
        esi = *(eax);
    }
label_1:
    eax = ebx - 0x16a0;
    *((esp + 0xc)) = edi;
    eax = *((ebx - 0x10));
    eax = *(eax);
    error (eax, esi, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80488e4 */
#include <stdint.h>
 
void fpending (void) {
    fpending ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80488f4 */
#include <stdint.h>
 
void overflow (void) {
    overflow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048904 */
#include <stdint.h>
 
void fputs_unlocked (void) {
    fputs_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048914 */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048924 */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048934 */
#include <stdint.h>
 
void dcgettext (void) {
    dcgettext ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048944 */
#include <stdint.h>
 
void setlocale (void) {
    setlocale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048954 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048964 */
#include <stdint.h>
 
void errno_location (void) {
    errno_location ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048974 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048984 */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048994 */
#include <stdint.h>
 
void vfprintf (void) {
    vfprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80489a4 */
#include <stdint.h>
 
void bindtextdomain (void) {
    bindtextdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80489b4 */
#include <stdint.h>
 
void mbrtowc (void) {
    mbrtowc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80489d4 */
#include <stdint.h>
 
void realloc (void) {
    realloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80489e4 */
#include <stdint.h>
 
void textdomain (void) {
    textdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80489f4 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a04 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a14 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a24 */
#include <stdint.h>
 
void ctype_get_mb_cur_max (void) {
    ctype_get_mb_cur_max ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a34 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a44 */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a54 */
#include <stdint.h>
 
void iswprint (void) {
    iswprint ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a64 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a74 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a84 */
#include <stdint.h>
 
void mbsinit (void) {
    mbsinit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048a94 */
#include <stdint.h>
 
void error (void) {
    error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048aa4 */
#include <stdint.h>
 
void ctype_b_loc (void) {
    ctype_b_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048c4a */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    int32_t var_18h;
    char * dirname;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    fcn_08048d64 ();
    ebx += 0x2cf7;
    esi = ebx - 0x16bf;
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebx - 0x14));
    *(eax) = edx;
    eax = ebx - 0x1720;
    setlocale (6, eax);
    eax = ebx - 0x1709;
    bindtextdomain (esi, eax);
    textdomain (esi);
    eax = *((ebx - 0x20));
    fcn_0804a0a0 (eax);
    while (eax != 0) {
label_0:
        exit (0);
        eax = ebx - 0x16f7;
        eax = getenv (eax);
    }
    ecx = *((ebp + 0xc));
    al = 7;
    ecx = *((ecx + 4));
    edi = ebx - 0x16e7;
    *((ebp - 0x18)) = ecx;
    esi = ecx;
    ecx = eax;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (eax == 0) {
        goto label_1;
    }
    eax = 0xa;
    edi = ebx - 0x16e0;
    esi = *((ebp - 0x18));
    ecx = eax;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (eax != 0) {
        goto label_0;
    }
    eax = ebx - 0x16d6;
    *((esp + 0x14)) = 0;
    eax = ebx - 0x16c9;
    eax = ebx - 0x16c3;
    eax = ebx - 0x16b5;
    eax = *((ebx - 0xc));
    eax = *(eax);
    fcn_08049ccd (eax, eax, eax);
    goto label_0;
label_1:
    return fcn_08048b68 (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048ae4 */
#include <stdint.h>
 
void fcn_08048ae4 (void) {
    void (*0x8048aed)() ();
    ebx += 0x2e5f;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048b3c */
#include <stdint.h>
 
int32_t fcn_08048b3c (void) {
    eax = *(section..jcr);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (section..jcr);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x804a0d0 */
#include <stdint.h>
 
void fcn_0804a0d0 (void) {
    ebx = segment.LOAD1;
    eax = *(segment.LOAD1);
    while (eax != -1) {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048d64 */
#include <stdint.h>
 
void fcn_08048d64 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x804a0a0 */
#include <stdint.h>
 
uint32_t fcn_0804a0a0 (int32_t arg_8h) {
    int32_t var_4h;
    eax = void (*0x804a0a9)(uint32_t) (ebx);
    ebx += 0x18a3;
    edx = *((ebx - 0x18));
    eax = 0;
    if (edx != 0) {
        eax = *(edx);
    }
    cxa_atexit ();
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049ccd */
#include <stdint.h>
 
uint32_t fcn_08049ccd (int32_t arg_8h, char * arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    fcn_08048d64 ();
    ebx += 0x1c76;
    eax = ebp + 0x18;
    eax = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    fcn_08049ac0 (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049ac0 */
#include <stdint.h>
 
int32_t fcn_08049ac0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    char * format;
    va_list ap;
    int32_t var_ch;
    int32_t var_10h;
    esi = 0;
    fcn_08048d64 ();
    ebx += 0x1e7f;
    edx = *((ebp + 0x18));
    edi = *((ebp + 8));
    ecx = *((ebp + 0xc));
    edx += 4;
    eax = *((ebp + 0x18));
    while (eax != 0) {
        eax = edx;
        esi++;
        edx += 4;
        eax = *(eax);
    }
    if (ecx == 0) {
        goto label_2;
    }
    eax = *((ebp + 0x10));
    edx = *((ebp + 0x14));
    *((esp + 8)) = ecx;
    *((esp + 0xc)) = eax;
    eax = ebx - 0x11b8;
    *((esp + 0x10)) = edx;
    fprintf (edi, eax);
    do {
        if (esi <= 9) {
            eax = *((ebx + esi*4 - 0x1160));
            eax += ebx;
            void (*eax)() ();
        }
        *((esp + 8)) = 5;
        eax = ebx - 0x1388;
        eax = dcgettext (0, eax);
        edx = *((ebp + 0x18));
        vfprintf (edi, eax, edx);
        eax = *((edi + 0x14));
        if (eax >= *((edi + 0x18))) {
            goto label_3;
        }
        *(eax) = 0xa;
        *((edi + 0x14))++;
label_1:
        *((esp + 4)) = edi;
        eax = *((ebx - 0x1c));
        eax = *(eax);
        *(esp) = eax;
        fputs_unlocked ();
        eax = *((edi + 0x14));
        if (eax >= *((edi + 0x18))) {
            goto label_4;
        }
        *(eax) = 0xa;
        *((edi + 0x14))++;
label_0:
        eax = ebx - 0x134c;
        *((esp + 8)) = 5;
        eax = dcgettext (0, eax);
        *((esp + 4)) = edi;
        *(esp) = eax;
        fputs_unlocked ();
        return eax;
label_2:
        eax = *((ebp + 0x10));
        edx = *((ebp + 0x14));
        *(esp) = edi;
        *((esp + 8)) = eax;
        eax = ebx - 0x1169;
        fprintf (edx, eax);
    } while (1);
label_4:
    *((esp + 4)) = 0xa;
    *(esp) = edi;
    overflow ();
    goto label_0;
label_3:
    *((esp + 4)) = 0xa;
    *(esp) = edi;
    overflow ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048b68 */
#include <stdint.h>
 
uint32_t fcn_08048b68 (int32_t status) {
    int32_t var_4h;
    int32_t var_8h;
    fcn_08048d64 ();
    ebx += 0x2dda;
    eax = ebx - 0x1834;
    *((esp + 8)) = 5;
    eax = dcgettext (0, eax);
    edx = *((ebx - 0x14));
    edx = *(edx);
    *(esp) = eax;
    *((esp + 8)) = edx;
    printf (edx);
    eax = ebx - 0x179c;
    *((esp + 8)) = 5;
    eax = dcgettext (0, eax);
    esi = *((ebx - 0xc));
    edx = *(esi);
    *(esp) = eax;
    *((esp + 4)) = edx;
    fputs_unlocked ();
    eax = ebx - 0x176c;
    *((esp + 8)) = 5;
    eax = dcgettext (0, eax);
    edx = *(esi);
    *((esp + 4)) = edx;
    *(esp) = eax;
    fputs_unlocked ();
    eax = ebx - 0x1736;
    *((esp + 8)) = 5;
    eax = dcgettext (0, eax);
    edx = ebx - 0x171f;
    *((esp + 4)) = edx;
    printf (eax);
    eax = *((ebp + 8));
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048e5f */
#include <stdint.h>
 
void fcn_08048e5f (void) {
    ecx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049a8b */
#include <stdint.h>
 
int32_t fcn_08049a8b (int32_t arg_8h) {
    int32_t var_4h;
    fcn_08048d64 ();
    ebx += 0x1eb8;
    eax = *((ebp + 8));
    fcn_080499f0 (eax, 0x3a);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80499f0 */
#include <stdint.h>
 
int32_t fcn_080499f0 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_4h;
    int32_t var_8h;
    fcn_08048d64 ();
    ebx += 0x1f52;
    esi = ebp - 0x38;
    eax = *((ebx + 0x1d4));
    edx = *((ebp + 0xc));
    *((ebp - 0x38)) = eax;
    eax = *((ebx + 0x1d8));
    *((ebp - 0x34)) = eax;
    eax = *((ebx + 0x1dc));
    *((ebp - 0x30)) = eax;
    eax = *((ebx + 0x1e0));
    *((ebp - 0x2c)) = eax;
    eax = *((ebx + 0x1e4));
    *((ebp - 0x28)) = eax;
    eax = *((ebx + 0x1e8));
    *((ebp - 0x24)) = eax;
    eax = *((ebx + 0x1ec));
    *((ebp - 0x20)) = eax;
    eax = *((ebx + 0x1f0));
    *((ebp - 0x1c)) = eax;
    eax = *((ebx + 0x1f4));
    *((ebp - 0x18)) = eax;
    eax = fcn_08048f36 (esi, edx, 1);
    edx = *((ebp + 8));
    eax = 0;
    fcn_08049721 (0xffffffff, esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048f36 */
#include <stdint.h>
 
int32_t fcn_08048f36 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    fcn_08048d64 ();
    ebx += 0x2a0b;
    ecx = *((ebp + 0xc));
    edx = *((ebp + 8));
    esi = *((ebp + 0x10));
    eax = ecx;
    al >>= 5;
    eax = (int32_t) al;
    eax <<= 2;
    edi = eax + edx + 4;
    if (edx != 0) {
        edx = *(edi);
        ecx &= 0x1f;
        esi &= 1;
        eax = edx;
        eax >>= cl;
        eax &= 1;
        esi ^= eax;
        esi <<= cl;
        edx ^= esi;
        *(edi) = edx;
        return eax;
    }
    edi = ebx + eax + 0x1d8;
    ecx &= 0x1f;
    esi &= 1;
    edx = *(edi);
    eax = *(edi);
    eax >>= cl;
    eax &= 1;
    esi ^= eax;
    esi <<= cl;
    edx ^= esi;
    *(edi) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049721 */
#include <stdint.h>
 
uint32_t fcn_08049721 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_1ch_2;
    int32_t var_14h_2;
    int32_t var_10h_2;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t c;
    size_t n;
    int32_t var_ch;
    int32_t var_sp_10h;
    eax = fcn_08048d64 ();
    ebx += 0x2220;
    *((ebp - 0x10)) = eax;
    *((ebp - 0x14)) = edx;
    eax = errno_location ();
    eax = *(eax);
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x10));
    if (eax < 0) {
        goto label_0;
    }
    eax = *((ebp - 0x10));
    if (*((ebx + 0x90)) > eax) {
        goto label_1;
    }
    edi = eax;
    edi++;
    if (edi > 0x1fffffff) {
        goto label_2;
    }
    esi = *((ebx + 0x9c));
    eax = ebx + 0x94;
    while (1) {
        eax = edi*8;
        *(esp) = esi;
        *((esp + 4)) = eax;
        eax = fcn_08049e3f ();
        edx = *((ebx + 0x90));
        esi = eax;
        *((ebx + 0x9c)) = eax;
        eax = edi;
        eax -= edx;
        edx = esi + edx*8;
        eax <<= 3;
        memset (edx, 0, eax);
        *((ebx + 0x90)) = edi;
label_1:
        eax = *((ebx + 0x9c));
        edx = *((ebp - 0x10));
        edx = *((eax + edx*8));
        *((ebp - 0x1c)) = edx;
        edx = *((ebp - 0x10));
        edi = *((eax + edx*8 + 4));
        eax = *((ebp + 0xc));
        edx = *((ebp + 8));
        eax = *((ebp - 0x14));
        edx = *((ebp - 0x1c));
        eax = fcn_080496c3 (eax, edx, eax);
        if (*((ebp - 0x1c)) <= eax) {
            eax++;
            esi = *((ebx + 0x9c));
            edx = *((ebp - 0x10));
            *((ebp - 0x1c)) = eax;
            *((esi + edx*8)) = eax;
            eax = ebx + 0xd4;
            if (edi != eax) {
                fcn_08049fe0 (edi);
                esi = *((ebx + 0x9c));
            }
            eax = *((ebp - 0x1c));
            eax = fcn_08049dc5 (eax);
            edx = *((ebp - 0x10));
            *((esi + edx*8 + 4)) = eax;
            edi = eax;
            edx = *((ebp + 8));
            eax = *((ebp + 0xc));
            edx = *((ebp - 0x1c));
            eax = *((ebp - 0x14));
            fcn_080496c3 (edx, edx, eax);
        }
        errno_location ();
        edx = *((ebp - 0x18));
        *(eax) = edx;
        eax = edi;
        return eax;
        eax = fcn_08049dc5 (8);
        edx = *((ebx + 0x98));
        esi = eax;
        *((ebx + 0x9c)) = eax;
        eax = *((ebx + 0x94));
        *(esi) = eax;
        *((esi + 4)) = edx;
    }
label_0:
    abort ();
label_2:
    return fcn_08049d10 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049dc5 */
#include <stdint.h>
 
int32_t fcn_08049dc5 (int32_t arg_10h, size_t size) {
    size_t var_8h_2;
    int32_t var_8h;
    int32_t var_ch;
    fcn_08048d64 ();
    ebx += 0x1b7e;
    eax = *((ebp + 8));
    eax = malloc (eax);
    if (eax != 0) {
        return eax;
    }
    return fcn_08049d10 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049d10 */
#include <stdint.h>
 
int32_t fcn_08049d10 (void) {
    int32_t errname;
    char ** format;
    int32_t var_ch;
    fcn_08048d64 ();
    ebx += 0x1c33;
    eax = *((ebx - 0x24));
    eax = *(eax);
    while (1) {
        eax = *((ebx - 8));
        *((esp + 8)) = 5;
        eax = dcgettext (0, eax);
        *((esp + 4)) = 0;
        eax = ebx - 0x16a0;
        eax = *((ebx - 0x10));
        eax = *(eax);
        error (eax, eax);
        eax = abort ();
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048ff6 */
#include <stdint.h>
 
uint32_t fcn_08048ff6 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_6ch;
    mbstate_t * var_68h;
    wchar_t * pwc;
    mbstate_t * var_60h;
    mbstate_t * var_5ch;
    int32_t var_58h;
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    wint_t wc;
    int32_t var_20h;
    int32_t var_1ch;
    char * s;
    size_t n;
    wchar_t * ps;
    eax = fcn_08048d64 ();
    ebx += 0x294b;
    *((ebp - 0x28)) = eax;
    *((ebp - 0x2c)) = edx;
    *((ebp - 0x34)) = 0;
    *((ebp - 0x38)) = 0;
    *((ebp - 0x3c)) = 0;
    *((ebp - 0x40)) = 0;
    eax = ctype_get_mb_cur_max ();
    al = (eax == 1) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x44)) = eax;
    if (*((ebp + 0x10)) <= 6) {
        edx = *((ebp + 0x10));
        eax = *((ebx + edx*4 - 0x1680));
        eax += ebx;
        eax = void (*eax)() ();
    }
    *((ebp - 0x30)) = 0;
    if (*((ebp + 0xc)) == -1) {
        goto label_8;
    }
label_0:
    edx = *((ebp + 0xc));
    if (*((ebp - 0x30)) == edx) {
        goto label_9;
    }
label_1:
    edi = *((ebp - 0x40));
    dl = (edi != 0) ? 1 : 0;
    eax = 0;
    al = (*((ebp - 0x3c)) != 0) ? 1 : 0;
    if ((edx & eax) != 0) {
        eax = *((ebp - 0x30));
        eax += *((ebp - 0x3c));
        if (eax > *((ebp + 0xc))) {
            goto label_10;
        }
        edi = *((ebp - 0x3c));
        esi = *((ebp + 8));
        esi += *((ebp - 0x30));
        ecx = *((ebp - 0x3c));
        edi = *((ebp - 0x38));
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        if (edi != edi) {
            goto label_10;
        }
        eax = *((ebp - 0x2c));
        if (*((ebp - 0x34)) < eax) {
            edx = *((ebp - 0x28));
            ecx = *((ebp - 0x34));
            *((edx + ecx)) = 0x5c;
        }
        *((ebp - 0x34))++;
    }
label_10:
    eax = *((ebp + 8));
    edx = *((ebp - 0x30));
    eax = *((eax + edx));
    *((ebp - 0x58)) = al;
    eax = (int32_t) al;
    if (eax <= 0x7e) {
        eax = *((ebx + eax*4 - 0x1664));
        eax += ebx;
        void (*eax)() ();
    }
    eax = *((ebp - 0x44));
    if (eax == 0) {
        goto label_11;
    }
    *((ebp - 0x5c)) = 1;
    eax = ctype_b_loc ();
    edx = *((ebp - 0x58));
    edi = *((ebp - 0x40));
    eax = *(eax);
    edx = *((eax + edx*2));
    edx &= 0x4000;
    *((ebp - 0x60)) = edx;
    dl = (edi != 0) ? 1 : 0;
    eax = 0;
    al = (*((ebp - 0x60)) == 0) ? 1 : 0;
    if ((edx & eax) == 0) {
        goto label_12;
    }
label_2:
    ecx = *((ebp - 0x30));
    ecx += *((ebp - 0x5c));
    while (edx < ecx) {
        edi = *((ebp - 0x2c));
        if (*((ebp - 0x34)) < edi) {
            eax = *((ebp - 0x58));
            esi = *((ebp - 0x28));
            edi = *((ebp - 0x34));
            *((esi + edi)) = al;
        }
        *((ebp - 0x34))++;
        *((ebp - 0x30)) = edx;
        eax = *((ebp + 8));
        eax = *((edx + eax));
        *((ebp - 0x58)) = al;
        esi = *((ebp - 0x40));
        dl = (esi != 0) ? 1 : 0;
        eax = 0;
        al = (*((ebp - 0x60)) == 0) ? 1 : 0;
        if ((edx & eax) != 0) {
            edx = *((ebp - 0x2c));
            if (*((ebp - 0x34)) < edx) {
                esi = *((ebp - 0x28));
                edi = *((ebp - 0x34));
                *((esi + edi)) = 0x5c;
            }
            *((ebp - 0x34))++;
            eax = *((ebp - 0x2c));
            if (*((ebp - 0x34)) < eax) {
                eax = *((ebp - 0x58));
                edx = *((ebp - 0x28));
                esi = *((ebp - 0x34));
                al >>= 6;
                al += 0x30;
                *((edx + esi)) = al;
            }
            *((ebp - 0x34))++;
            edi = *((ebp - 0x2c));
            if (*((ebp - 0x34)) < edi) {
                eax = *((ebp - 0x58));
                edx = *((ebp - 0x28));
                esi = *((ebp - 0x34));
                al >>= 3;
                al &= 7;
                al += 0x30;
                *((edx + esi)) = al;
            }
            eax = *((ebp - 0x58));
            *((ebp - 0x34))++;
            al &= 7;
            al += 0x30;
            *((ebp - 0x58)) = al;
        }
        edx = *((ebp - 0x30));
        edx++;
    }
label_3:
    edi = *((ebp - 0x2c));
    if (*((ebp - 0x34)) < edi) {
        eax = *((ebp - 0x58));
        ecx = *((ebp - 0x28));
        esi = *((ebp - 0x34));
        *((ecx + esi)) = al;
    }
    *((ebp - 0x34))++;
    *((ebp - 0x30)) = edx;
    if (*((ebp + 0xc)) != -1) {
        goto label_0;
    }
label_8:
    edi = *((ebp + 8));
    eax = *((ebp - 0x30));
    if (*((edi + eax)) != 0) {
        goto label_1;
    }
label_9:
    eax = *((ebp - 0x38));
    if (eax != 0) {
        goto label_13;
    }
    goto label_14;
    do {
        esi = *((ebp - 0x2c));
        if (*((ebp - 0x34)) < esi) {
            edi = *((ebp - 0x28));
            edx = *((ebp - 0x34));
            *((edi + edx)) = al;
        }
        *((ebp - 0x34))++;
        *((ebp - 0x38))++;
label_13:
        ecx = *((ebp - 0x38));
        eax = *(ecx);
    } while (al != 0);
label_14:
    esi = *((ebp - 0x2c));
    if (*((ebp - 0x34)) < esi) {
        edi = *((ebp - 0x28));
        eax = *((ebp - 0x34));
        *((edi + eax)) = 0;
    }
    eax = *((ebp - 0x34));
    return eax;
label_11:
    edi = ebp - 0x20;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x68)) = edi;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x5c)) = 0;
    *((ebp - 0x60)) = 1;
    if (*((ebp + 0xc)) == -1) {
        goto label_15;
    }
label_4:
    edx = *((ebp - 0x30));
    eax = ebp - 0x24;
    edx += *((ebp + 8));
    *((ebp - 0x64)) = eax;
    *((ebp - 0x6c)) = edx;
    do {
        ecx = *((ebp - 0x68));
        esi = *((ebp - 0x30));
        eax = *((ebp + 0xc));
        esi += *((ebp - 0x5c));
        eax -= esi;
        edi = *((ebp + 8));
        eax = esi + edi;
        eax = *((ebp - 0x64));
        eax = mbrtowc (ecx, eax, eax);
        edi = eax;
        if (eax == 0) {
            goto label_6;
        }
        if (eax == -1) {
            goto label_16;
        }
        if (eax == 0xfffffffe) {
            goto label_17;
        }
        eax = *((ebp - 0x24));
        eax = iswprint (eax);
        al = (eax != 0) ? 1 : 0;
        *((ebp - 0x5c)) += edi;
        eax = (int32_t) al;
        eax = -eax;
        *((ebp - 0x60)) &= eax;
        eax = *((ebp - 0x68));
        eax = mbsinit (eax);
    } while (eax == 0);
label_6:
    if (*((ebp - 0x5c)) > 1) {
        goto label_2;
    }
label_5:
    edi = *((ebp - 0x40));
    dl = (edi != 0) ? 1 : 0;
    eax = 0;
    al = (*((ebp - 0x60)) == 0) ? 1 : 0;
    if ((edx & eax) != 0) {
        goto label_2;
    }
label_12:
    ecx = *((ebp - 0x30));
    edx = ecx + 1;
    ecx = *((ebp - 0x40));
    if (ecx == 0) {
        goto label_3;
    }
    eax = *((ebp - 0x58));
    ecx = *((ebp - 0x58));
    esi = *((ebp + 0x14));
    al >>= 5;
    ecx &= 0x1f;
    eax = (int32_t) al;
    eax = *((esi + eax*4 + 4));
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_3;
    }
    eax = *((ebp - 0x2c));
    if (*((ebp - 0x34)) < eax) {
        edx = *((ebp - 0x28));
        ecx = *((ebp - 0x34));
        *((edx + ecx)) = 0x5c;
    }
    esi = *((ebp - 0x30));
    *((ebp - 0x34))++;
    edx = esi + 1;
    goto label_3;
label_15:
    ecx = *((ebp + 0xc));
    eax = 0;
    edi = *((ebp + 8));
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    *((ebp + 0xc)) = ecx;
    goto label_4;
label_16:
    *((ebp - 0x60)) = 0;
    if (*((ebp - 0x5c)) <= 1) {
        goto label_5;
    }
    goto label_2;
label_17:
    *((ebp - 0x60)) = 0;
    if (esi >= *((ebp + 0xc))) {
        goto label_6;
    }
    edx = *((ebp - 0x6c));
    ecx = *((ebp - 0x5c));
    if (*((edx + ecx)) == 0) {
        goto label_6;
    }
label_7:
    *((ebp - 0x5c))++;
    eax = *((ebp - 0x30));
    eax += *((ebp - 0x5c));
    if (eax >= *((ebp + 0xc))) {
        goto label_6;
    }
    esi = *((ebp - 0x6c));
    edi = *((ebp - 0x5c));
    if (*((esi + edi)) != 0) {
        goto label_7;
    }
    if (*((ebp - 0x5c)) <= 1) {
        goto label_5;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048fa3 */
#include <stdint.h>
 
uint32_t fcn_08048fa3 (void) {
    int32_t var_4h;
    int32_t var_8h;
    edi = edx;
    esi = eax;
    eax = fcn_08048d64 ();
    ebx += 0x299a;
    *((esp + 8)) = 5;
    eax = dcgettext (0, eax);
    ecx = eax;
    dl = (eax == esi) ? 1 : 0;
    eax = 0;
    al = (edi == 6) ? 1 : 0;
    if ((edx & eax) != 0) {
        ecx = ebx - 0x13c4;
    }
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049e3f */
#include <stdint.h>
 
int32_t fcn_08049e3f (void) {
    int32_t var_ch_4;
    size_t var_ch_3;
    size_t var_10h;
    void * ptr;
    int32_t var_ch_2;
    int32_t c;
    size_t n;
    int32_t var_4h_3;
    int32_t var_4h_2;
    size_t size;
    fcn_08048d64 ();
    ebx += 0x1b04;
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    eax = realloc (edx, eax);
    if (eax != 0) {
        return eax;
    }
    return fcn_08049d10 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80496c3 */
#include <stdint.h>
 
uint32_t fcn_080496c3 (int32_t arg_8h, int32_t arg_ch, size_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    fcn_08048d64 ();
    ebx += 0x227e;
    edi = *((ebp + 0x18));
    while (1) {
        eax = errno_location ();
        edx = *((ebp + 0xc));
        esi = eax;
        eax = *(eax);
        *((ebp - 0x10)) = eax;
        eax = *(edi);
        eax = *((ebp + 0x14));
        eax = *((ebp + 0x10));
        eax = *((ebp + 8));
        fcn_08048ff6 (edi, eax, eax);
        edx = *((ebp - 0x10));
        *(esi) = edx;
        return eax;
        edi = ebx + 0x1d4;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049fe0 */
#include <stdint.h>
 
int32_t fcn_08049fe0 (int32_t arg_8h) {
    fcn_08048d64 ();
    ebx += 0x1963;
    eax = *((ebp + 8));
    if (eax != 0) {
        free (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80498ae */
#include <stdint.h>
 
int32_t fcn_080498ae (void) {
    int32_t var_4h;
    int32_t var_8h;
    fcn_08048d64 ();
    ebx += 0x2095;
    ecx = ebx + 0x1d4;
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((ebp + 8)) = 0xffffffff;
    *((ebp + 0xc)) = ecx;
    return void (*0x8049721)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8049905 */
#include <stdint.h>
 
int32_t fcn_08049905 (void) {
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    ecx = 8;
    edi = ebp - 0x34;
    esi = eax;
    *((ebp - 0x38)) = edx;
    edx = 0;
    eax = edx;
    memset (edi, eax, ecx);
    eax = esi;
    edx = *((ebp - 0x38));
    *(esi) = edx;
    edx = *((ebp - 0x34));
    *((esi + 4)) = edx;
    edx = *((ebp - 0x30));
    *((esi + 8)) = edx;
    edx = *((ebp - 0x2c));
    *((esi + 0xc)) = edx;
    edx = *((ebp - 0x28));
    *((esi + 0x10)) = edx;
    edx = *((ebp - 0x24));
    *((esi + 0x14)) = edx;
    edx = *((ebp - 0x20));
    *((esi + 0x18)) = edx;
    edx = *((ebp - 0x1c));
    *((esi + 0x1c)) = edx;
    edx = *((ebp - 0x18));
    *((esi + 0x20)) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x804995f */
#include <stdint.h>
 
int32_t fcn_0804995f (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_38h;
    int32_t var_4h;
    esi = ebp - 0x38;
    edx = *((ebp + 0xc));
    eax = esi;
    fcn_08049905 ();
    edx = *((ebp + 0x10));
    eax = *((ebp + 8));
    fcn_08049721 (0xffffffff, esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x804a016 */
#include <stdint.h>
 
uint32_t fcn_0804a016 (void) {
    int32_t var_10h;
    ebx += 0x1936;
    fcn_080488bc ();
    eax = ebx - 0x120;
    edx = ebx - 0x120;
    *((ebp - 0x10)) = eax;
    eax -= edx;
    esi = 0;
    eax >>= 2;
    if (esi >= eax) {
        goto label_0;
    }
    edi = edx;
    do {
        uint32_t (*edx + esi*4)() ();
        ecx = *((ebp - 0x10));
        ecx -= edi;
        esi++;
        ecx >>= 2;
        edx = edi;
    } while (esi < ecx);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x80488bc */
#include <stdint.h>
 
void fcn_080488bc (void) {
    /* [10] -r-x section size 23 named .init */
    fcn_08048ae4 ();
    fcn_08048b3c ();
    fcn_0804a0d0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x804a067 */
#include <stdint.h>
 
uint32_t fcn_0804a067 (void) {
    ebx += 0x18e5;
    eax = ebx - 0x120;
    edi = ebx - 0x120;
    eax -= edi;
    eax >>= 2;
    esi = eax - 1;
    while (esi != -1) {
        uint32_t (*edi + esi*4)() ();
        esi--;
    }
    fcn_0804a0f4 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x804a0f4 */
#include <stdint.h>
 
uint32_t fcn_0804a0f4 (void) {
    /* [13] -r-x section size 26 named .fini */
    eax = void (*0x804a0fd)() ();
    ebx += 0x184f;
    fcn_08048b08 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_fedora3/subject.exe @ 0x8048b08 */
#include <stdint.h>
 
int32_t fcn_08048b08 (void) {
    if (*(section..bss) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(0x804b9d4) = eax;
        void (*edx)() ();
label_0:
        eax = *(0x804b9d4);
        edx = *(eax);
    } while (edx != 0);
    *(section..bss) = 1;
label_1:
    return eax;
}
