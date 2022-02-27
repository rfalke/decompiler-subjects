/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x804830e */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048340 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a017;
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048370 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048370)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048530 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048423 */
#include <stdint.h>
 
uint32_t dbg_with_array (int32_t arg_8h, int[371] dynamic) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t fixed1;
    int32_t fixed2;
    int32_t n;
    ecx = dynamic;
    /* void with_array(int n); */
    ecx = *((ebp + 8));
    *((ebp - 0x10)) = 7;
    *((ebp - 0xc)) = 8;
    eax = ecx*4 + 0x12;
    eax &= 0xfffffff0;
    edx = esp;
    fill (edx, ecx);
    eax = ebp - 0x10;
    use (eax);
    use (edx);
    eax = ebp - 0xc;
    use (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x804840b */
#include <stdint.h>
 
int32_t dbg_fill (char ** arg_8h, char ** arg_ch) {
    int * dest;
    int32_t n;
    /* void fill(int * dest,int n); */
    eax = *((ebp + 0xc));
    edi = *((ebp + 8));
    ecx = eax*4;
    al = 0x78;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80483fb */
#include <stdint.h>
 
int32_t dbg_use (char ** arg_8h) {
    int * x;
    /* void use(int * x); */
    eax = *((ebp + 8));
    eax = *(eax);
    *(obj.sum) += eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048534 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1ac3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x8048474 */
#include <stdint.h>
 
uint32_t dbg_with_alloca (char ** arg_8h, int * dynamic) {
    char ** var_10h;
    int32_t var_ch;
    int32_t fixed1;
    int32_t fixed2;
    int32_t n;
    int32_t var_fh;
    ecx = dynamic;
    /* void with_alloca(int n); */
    ecx = *((ebp + 8));
    *((ebp - 0x10)) = 7;
    *((ebp - 0xc)) = 8;
    eax = ecx*4 + 0x1e;
    eax &= 0xfffffff0;
    edx = esp + 0xf;
    edx &= 0xfffffff0;
    fill (edx, ecx);
    eax = ebp - 0x10;
    use (eax);
    use (edx);
    eax = ebp - 0xc;
    use (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1b27;
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_8h;
    int32_t argc;
    /* int main(int argc,char ** argv); */
    ecx = esp + 4;
    ebx = *(ecx);
    with_alloca (ebx);
    eax = with_array (ebx);
    esp = ebp - 8;
    eax = 0;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x804828c */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d6b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_Os/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
