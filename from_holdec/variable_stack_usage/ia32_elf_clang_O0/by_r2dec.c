/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 770 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048350 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a01b;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048380 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048380)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048610 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048470 */
#include <stdint.h>
 
int32_t dbg_with_array (int32_t arg_8h) {
    int32_t dynamic;
    int32_t fixed2;
    int32_t var_ch;
    int32_t fixed1;
    int32_t n;
    int32_t var_sp_4h;
    /* void with_array(int n); */
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    *((ebp - 8)) = 7;
    eax = *((ebp - 4));
    ecx = esp;
    *((ebp - 0xc)) = ecx;
    eax = eax*4 + 0xf;
    eax &= 0xfffffff0;
    ecx = esp;
    ecx -= eax;
    *((ebp - 0x10)) = 8;
    eax = *((ebp - 4));
    *((ebp - 0x14)) = ecx;
    fill (ecx, eax);
    eax = ebp - 8;
    use (eax);
    eax = *((ebp - 0x14));
    use (eax);
    eax = ebp - 0x10;
    use (eax);
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048430 */
#include <stdint.h>
 
int32_t dbg_fill (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int * dest;
    int32_t c;
    size_t n;
    /* void fill(int * dest,int n); */
    eax = *((ebp + 0xc));
    ecx = *((ebp + 8));
    edx = 0x78;
    *((ebp - 4)) = ecx;
    *((ebp - 8)) = eax;
    eax = *((ebp - 4));
    ecx = *((ebp - 8));
    ecx <<= 2;
    *((ebp - 0xc)) = edx;
    memset (eax, 0x78, ecx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048410 */
#include <stdint.h>
 
int32_t dbg_use (int32_t arg_8h) {
    int * x;
    /* void use(int * x); */
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    eax += *(obj.sum);
    *(obj.sum) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048614 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x19e3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
int32_t dbg_with_alloca (int32_t arg_8h) {
    int32_t fixed2;
    int * dynamic;
    int32_t fixed1;
    int32_t n;
    int32_t var_sp_4h;
    /* void with_alloca(int n); */
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    *((ebp - 8)) = 7;
    eax = *((ebp - 4));
    eax = eax*4 + 0xf;
    eax &= 0xfffffff0;
    ecx = esp;
    ecx -= eax;
    *((ebp - 0xc)) = ecx;
    *((ebp - 0x10)) = 8;
    eax = *((ebp - 0xc));
    ecx = *((ebp - 4));
    fill (eax, ecx);
    eax = ebp - 8;
    use (eax);
    eax = *((ebp - 0xc));
    use (eax);
    eax = ebp - 0x10;
    use (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80485b0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1a47;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048570 */
#include <stdint.h>
 
int32_t dbg_main (char ** argv, char ** envp) {
    int32_t var_ch;
    int32_t argc;
    char ** var_4h;
    /* int main(int argc,char ** argv); */
    eax = *((ebp + 0xc));
    ecx = *((ebp + 8));
    *((ebp - 4)) = 0;
    *((ebp - 8)) = ecx;
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 8));
    with_alloca (eax);
    eax = *((ebp - 8));
    eax = with_array (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x80482ac */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d4b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_clang_O0/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
