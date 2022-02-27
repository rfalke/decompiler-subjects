/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80490b0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080490e7 ();
    ebx += 0x2f3c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2b10, ebx - 0x2ab0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80490e7 */
#include <stdint.h>
 
void fcn_080490e7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049110 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.6844;
    if (eax != obj.completed.6844) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6844);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049150 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6844;
    eax -= obj.completed.6844;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6844, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049190 */
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
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80491c0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049550 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049100 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049098 */
#include <stdint.h>
 
int32_t modify (int32_t arg_4h) {
    eax = *((esp + 4));
    *(eax)++;
    *(eax)++;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80493b0 */
#include <stdint.h>
 
uint32_t test5 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    int32_t var_ch;
    int32_t var_dh;
    int32_t var_eh;
    puts ("5) init with bytes, address of taken BEFORE and modify, 4 byte read (should=0x60524030)");
    modify (0x10, 0x50, 0x90);
    eax = *((esp + 2));
    eax = dump1 (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80494b0 */
#include <stdint.h>
 
uint32_t dump1 (int32_t arg_18h) {
    eax = printf ("got 0x%08x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049558 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2a9b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80492c0 */
#include <stdint.h>
 
int32_t test3 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    int32_t var_ch;
    int32_t var_dh;
    int32_t var_eh;
    puts ("3) init with bytes, 2 byte extra write, 4 byte extra write, 4 byte read (should=0x62514030)");
    eax = *((esp + 2));
    eax = dump1 (0x10, 0x50, 0x90);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80491d0 */
#include <stdint.h>
 
int32_t test1 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    int32_t var_ch;
    int32_t var_dh;
    int32_t var_eh;
    puts ("1) init with bytes, 4 byte read (should=0x60504030)");
    eax = *((esp + 2));
    eax = dump1 (0x10, 0x50, 0x90);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80494d0 */
#include <stdint.h>
 
uint32_t dump2 (int32_t arg_18h_2, int32_t arg_18h) {
    eax = printf ("got 0x%08x, 0x%08x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80494f0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2b03;
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
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049070 */
#include <stdint.h>
 
int32_t main (void) {
    /* [13] -r-x section size 1253 named .text */
    test1 ();
    test2 ();
    test3 ();
    test4 ();
    test5 ();
    eax = test6 ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049240 */
#include <stdint.h>
 
int32_t test2 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    int32_t var_ch;
    int32_t var_dh;
    int32_t var_eh;
    puts ("2) init with bytes, 2 byte extra write, 4 byte read (should=0x61514030)");
    eax = *((esp + 2));
    eax = dump1 (0x10, 0x50, 0x90);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049340 */
#include <stdint.h>
 
int32_t test4 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    int32_t var_ch;
    int32_t var_dh;
    int32_t var_eh;
    puts ("4) init with bytes, address of taken, 4 byte read (should=0x60504030)");
    eax = *((esp + 2));
    eax = dump2 (0x10, 0x50, 0x90);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049430 */
#include <stdint.h>
 
int32_t test6 (void) {
    int32_t var_1h;
    int32_t var_2h;
    int32_t var_3h;
    int32_t var_4h;
    int32_t var_5h;
    int32_t var_6h;
    int32_t var_7h;
    int32_t var_8h;
    int32_t var_9h;
    int32_t var_ah;
    int32_t var_bh;
    int32_t var_ch;
    int32_t var_dh;
    int32_t var_eh;
    puts ("6) init with bytes, 2 byte extra write, double 2 byte modify, 4 byte read (should=0x61514230)");
    eax = *((esp + 2));
    eax = dump1 (0x10, 0x50, 0x90);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/local_overlaps/ia32_elf/subject.exe @ 0x8049000 */
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
