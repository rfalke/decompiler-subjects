/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049060 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [13] -r-x section size 885 named .text */
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049097 ();
    ebx += 0x2f8c;
    eax = main;
    return libc_start_main (eax, esi, ecx, ebx - 0x2c90, ebx - 0x2c30);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049097 */
#include <stdint.h>
 
void fcn_08049097 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x80490c0 */
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049100 */
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049140 */
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049170 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x80493d0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049260 */
#include <stdint.h>
 
uint32_t double_to_double (void) {
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] += fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    eax = printf ("got 2*x=%f\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x80490b0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x80491e0 */
#include <stdint.h>
 
int32_t double_to_unknown (int32_t arg_20h, int32_t arg_24h) {
    int32_t var_28h;
    int32_t var_8h;
    eax = *((esp + 0x24));
    edx = *((esp + 0x20));
    ebx = eax;
    ecx = (int32_t) ah;
    esi = (int32_t) al;
    eax >>= 0x18;
    ebp = (int32_t) dh;
    ebx >>= 0x10;
    *((esp + 8)) = ecx;
    ecx = (int32_t) dl;
    edi = (int32_t) bl;
    ebx = edx;
    edx >>= 0x18;
    ebx >>= 0x10;
    ebx = (int32_t) bl;
    eax = printf (0x804a038);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x80493d8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2c1b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049240 */
#include <stdint.h>
 
uint32_t unknown_to_double (void) {
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] += fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    eax = printf ("got 2*x=%f\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049370 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2c83;
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
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049180 */
#include <stdint.h>
 
int32_t unknown_to_unknown (int32_t arg_20h, int32_t arg_24h) {
    int32_t var_28h;
    int32_t var_8h;
    eax = *((esp + 0x24));
    edx = *((esp + 0x20));
    ebx = eax;
    ecx = (int32_t) ah;
    esi = (int32_t) al;
    eax >>= 0x18;
    ebp = (int32_t) dh;
    ebx >>= 0x10;
    *((esp + 8)) = ecx;
    ecx = (int32_t) dl;
    edi = (int32_t) bl;
    ebx = edx;
    edx >>= 0x18;
    ebx >>= 0x10;
    ebx = (int32_t) bl;
    eax = printf (0x804a038);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x80490a0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049280 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    char ** var_4h;
    float var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_20h;
    int32_t var_2ch;
    esi = *((esp + 0x40));
    unknown_to_unknown (esi, 0x3ff35c28);
    *(fp_stack--) = *((esp + 0x2c));
    *((esp + 0x30)) = fp_stack[0];
    fp_stack[0] += *(0x804a010);
    *(esp) = fp_stack[0];
    fp_stack--;
    double_to_unknown (esi);
    unknown_to_double (0x7ae147ae, 0x3ff3ae14);
    *(fp_stack--) = *((esp + 0x30));
    fp_stack[0] += *(0x804a018);
    *(esp) = fp_stack[0];
    fp_stack--;
    double_to_double ();
    *(fp_stack--) = *(0x804a020);
    ? = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = 0x40027ae1;
    *((esp + 8)) = 0x47ae147b;
    *((esp + 0x20)) = 0x66;
    *((esp + 0x10)) = 0x65;
    *((esp + 4)) = 0x64;
    printf ("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    *(fp_stack--) = *((esp + 0x30));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] += *(0x804a028);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] += *(0x804a030);
    ? = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x20)) = 0xca;
    *((esp + 0x10)) = 0xc9;
    *((esp + 4)) = 0xc8;
    eax = printf ("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/ia32_elf_clang_no_sse/subject.exe @ 0x8049000 */
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
