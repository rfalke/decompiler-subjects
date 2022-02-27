/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 612 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.1) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _comment (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    ebx = .ctors;
    eax = .ctors;
    while (eax != -1) {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048590 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x80485c4 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [14] -r-x section size 26 named .fini */
    eax = void (*0x80485cd)(uint32_t) (ebx);
    ebx += 0x1a27;
    _do_global_dtors_aux (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048520 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_8h;
    esi = 0;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1ac7;
    _init ();
    eax = ebx - 0xe8;
    edx = ebx - 0xe8;
    *((ebp - 0x10)) = eax;
    eax -= edx;
    eax >>= 2;
    if (esi >= eax) {
        goto label_0;
    }
    edi = edx;
    do {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        uint32_t (*edx + esi*4)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        eax = *((ebp - 0x10));
        esi++;
        edx = edi;
        eax -= edi;
        eax >>= 2;
    } while (esi < eax);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x804846e */
#include <stdint.h>
 
int32_t test (int32_t arg_8h, uint32_t arg_ch) {
    eax = *((ebp + 8));
    if (eax != *((ebp + 0xc))) {
        shift ("Lqydolg#Sdvvzrug$");
    } else {
        shift ("Sdvvzrug#RN$$$#=,");
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048595 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048414 */
#include <stdint.h>
 
int32_t shift (char * s) {
    uint32_t var_7ch;
    int32_t var_78h;
    int32_t var_4h;
    *((ebp - 0x7c)) = 0;
    do {
        eax = *((ebp + 8));
        eax = strlen (eax);
        if (*((ebp - 0x7c)) >= eax) {
            goto label_0;
        }
        eax = ebp - 0x78;
        edx = eax;
        edx += *((ebp - 0x7c));
        eax = *((ebp - 0x7c));
        eax += *((ebp + 8));
        eax = *(eax);
        al -= 3;
        *(edx) = al;
        eax = ebp - 0x7c;
        *(eax)++;
    } while (1);
label_0:
    eax = ebp - 0x78;
    eax += *((ebp - 0x7c));
    *(eax) = 0;
    eax = ebp - 0x78;
    *((esp + 4)) = eax;
    printf (0x80485e8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048498 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("IOLI Crackme Level 0x03\n");
    printf ("Password: ");
    eax = ebp - 4;
    scanf (0x8048634, eax);
    *((ebp - 8)) = 0x5a;
    *((ebp - 0xc)) = 0x1ec;
    edx = *((ebp - 0xc));
    eax = ebp - 8;
    *(eax) += edx;
    eax = *((ebp - 8));
    eax *= *((ebp - 8));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax = *((ebp - 4));
    test (eax, eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048350 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x80482f8 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 23 named .init */
    fcn_08048384 ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048384 */
#include <stdint.h>
 
void fcn_08048384 (void) {
    void (*0x804838d)() ();
    ebx += 0x1c67;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
