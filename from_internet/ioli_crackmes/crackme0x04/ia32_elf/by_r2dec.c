/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 580 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048364 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048420 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048450 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80485f0 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80485e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048614 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [14] -r-x section size 26 named .fini */
    eax = void (*0x804861d)(uint32_t) (ebx);
    ebx += 0x19d7;
    _do_global_dtors_aux (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048570 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_8h;
    esi = 0;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1a77;
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048484 */
#include <stdint.h>
 
int32_t check (char * s) {
    char * var_dh;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    char * format;
    int32_t var_sp_8h;
    *((ebp - 8)) = 0;
    *((ebp - 0xc)) = 0;
    do {
        eax = *((ebp + 8));
        eax = strlen (eax);
        if (*((ebp - 0xc)) >= eax) {
            goto label_0;
        }
        eax = *((ebp - 0xc));
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0xd)) = al;
        eax = ebp - 4;
        eax = ebp - 0xd;
        sscanf (eax, 0x8048638, eax);
        edx = *((ebp - 4));
        eax = ebp - 8;
        *(eax) += edx;
        if (*((ebp - 8)) == 0xf) {
            printf ("Password OK!\n");
            exit (0);
        }
        eax = ebp - 0xc;
        *(eax)++;
    } while (1);
label_0:
    printf ("Password Incorrect!\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048384 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80483a4 */
#include <stdint.h>
 
void sscanf (void) {
    sscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048394 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80483b4 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80485e5 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048509 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_78h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("IOLI Crackme Level 0x04\n");
    printf ("Password: ");
    eax = ebp - 0x78;
    scanf (0x8048682, eax);
    eax = ebp - 0x78;
    check (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x8048374 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x804833c */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 23 named .init */
    fcn_080483f4 ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x04/ia32_elf/subject.exe @ 0x80483f4 */
#include <stdint.h>
 
void fcn_080483f4 (void) {
    void (*0x80483fd)() ();
    ebx += 0x1bf7;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
