/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049430 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049467 ();
    ebx += 0x2bbc;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2930, ebx - 0x28d0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049467 */
#include <stdint.h>
 
void fcn_08049467 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049490 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = stdout;
    if (eax != obj.stdout) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.stdout);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x80494d0 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = stdout;
    eax -= obj.stdout;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.stdout, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049510 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.6844) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6844) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049540 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049730 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049680 */
#include <stdint.h>
 
int32_t i386_memset_both_w (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 0x18));
    if (eax != 0) {
        __asm ("std");
    }
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    memset (edi, eax, ecx);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049480 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049620 */
#include <stdint.h>
 
uint32_t i386_memset_backward_w (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    __asm ("std");
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    memset (edi, eax, ecx);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x80495e0 */
#include <stdint.h>
 
int32_t i386_memset_forward_l (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    memset (edi, eax, ecx);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049738 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x28bb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x80495a0 */
#include <stdint.h>
 
uint32_t i386_memset_forward_b (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049550 */
#include <stdint.h>
 
int32_t print (int32_t arg_18h) {
    ebx = 0;
    do {
        eax = *((ebx + obj.buffer));
        ebx++;
        putc (eax, *(obj.stdout));
    } while (ebx != 0x1e);
    printf (" : %s\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049070 */
#include <stdint.h>
 
void putc (void) {
    putc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x80496d0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2923;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf0;
    eax = ebx - 0xf4;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf4)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049660 */
#include <stdint.h>
 
int32_t i386_memset_both_b (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 0x18));
    if (eax != 0) {
        __asm ("std");
    }
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x80496b0 */
#include <stdint.h>
 
int32_t i386_memset_both_l (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 0x18));
    if (eax != 0) {
        __asm ("std");
    }
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    memset (edi, eax, ecx);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049470 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049080 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_ch;
    /* [13] -r-x section size 1717 named .text */
    ecx = esp + 4;
    esi = 0xcccccccd;
    ebx = 0;
    do {
        eax = ebx;
        ecx = ebx;
        ebx++;
        edx:eax = eax * esi;
        edx >>= 3;
        eax = edx * 5;
        eax += eax;
        ecx -= eax;
        printf (0x804a013);
    } while (ebx != 0x1e);
    ebx = 0x5f5f;
    esi = 0x5f5f;
    puts (0x804a012);
    eax = 0x5f5f;
    *(0x804c044) = ax;
    *(obj.buffer) = 0x5f5f5f5f;
    *(0x804c02c) = 0x5f5f5f5f;
    *(0x804c030) = 0x5f5f5f5f;
    *(0x804c034) = 0x5f5f5f5f;
    *(0x804c038) = 0x5f5f5f5f;
    *(0x804c03c) = 0x5f5f5f5f;
    *(0x804c040) = 0x5f5f5f5f;
    print ("initial");
    i386_memset_forward_b (0x804c02b, 0x78, 5);
    print ("5 'x' from 3");
    i386_memset_forward_w (0x804c032, 0x2928, 3);
    print ("3 '()' from 10");
    i386_memset_forward_l (0x804c03c, 0x3e62613c, 2);
    print ("2 '<ab>' from 20");
    edx = 0x5f5f;
    *(0x804c044) = dx;
    *(obj.buffer) = 0x5f5f5f5f;
    *(0x804c02c) = 0x5f5f5f5f;
    *(0x804c030) = 0x5f5f5f5f;
    *(0x804c034) = 0x5f5f5f5f;
    *(0x804c038) = 0x5f5f5f5f;
    *(0x804c03c) = 0x5f5f5f5f;
    *(0x804c040) = 0x5f5f5f5f;
    print ("reset for following backward tests");
    i386_memset_backward_b (0x804c02f, 0x78, 5);
    print ("5 'x' from 3");
    i386_memset_backward_w (0x804c036, 0x2928, 3);
    print ("3 '()' from 10");
    i386_memset_backward_l (0x804c040, 0x3e62613c, 2);
    print ("2 '<ab>' from 20");
    ecx = 0x5f5f;
    *(0x804c044) = cx;
    *(obj.buffer) = 0x5f5f5f5f;
    *(0x804c02c) = 0x5f5f5f5f;
    *(0x804c030) = 0x5f5f5f5f;
    *(0x804c034) = 0x5f5f5f5f;
    *(0x804c038) = 0x5f5f5f5f;
    *(0x804c03c) = 0x5f5f5f5f;
    *(0x804c040) = 0x5f5f5f5f;
    print ("reset for following bi directional tests");
    i386_memset_both_b (0x804c02b, 0x78, 5, 0);
    print ("5 'x' from 3");
    i386_memset_both_b (0x804c02f, 0x79, 5, 1);
    print ("5 'y' from 3");
    *(0x804c044) = bx;
    *(obj.buffer) = 0x5f5f5f5f;
    *(0x804c02c) = 0x5f5f5f5f;
    *(0x804c030) = 0x5f5f5f5f;
    *(0x804c034) = 0x5f5f5f5f;
    *(0x804c038) = 0x5f5f5f5f;
    *(0x804c03c) = 0x5f5f5f5f;
    *(0x804c040) = 0x5f5f5f5f;
    print ("reset for following bi directional tests");
    i386_memset_both_w (0x804c032, 0x2928, 3, 0);
    print ("3 '()' from 10");
    i386_memset_both_w (0x804c036, 0x7d7b, 3, 1);
    print ("3 '{}' from 10");
    *(0x804c044) = si;
    *(obj.buffer) = 0x5f5f5f5f;
    *(0x804c02c) = 0x5f5f5f5f;
    *(0x804c030) = 0x5f5f5f5f;
    *(0x804c034) = 0x5f5f5f5f;
    *(0x804c038) = 0x5f5f5f5f;
    *(0x804c03c) = 0x5f5f5f5f;
    *(0x804c040) = 0x5f5f5f5f;
    print ("reset for following bi directional tests");
    i386_memset_both_l (0x804c03c, 0x3e62613c, 2, 0);
    print ("2 '<ab>' from 20");
    i386_memset_both_l (0x804c040, 0x5d42415b, 2, 1);
    eax = print ("2 '[AB]' from 20");
    esp = ebp - 0xc;
    eax = 0;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x80495c0 */
#include <stdint.h>
 
uint32_t i386_memset_forward_w (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    memset (edi, eax, ecx);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049600 */
#include <stdint.h>
 
uint32_t i386_memset_backward_b (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    __asm ("std");
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049640 */
#include <stdint.h>
 
int32_t i386_memset_backward_l (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    __asm ("std");
    edi = *((esp + 0xc));
    eax = *((esp + 0x10));
    ecx = *((esp + 0x14));
    memset (edi, eax, ecx);
    ebx = edi;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_memset_rep_stos/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
