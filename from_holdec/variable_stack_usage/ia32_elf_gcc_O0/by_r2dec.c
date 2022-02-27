/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 754 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048350 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048380 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80483e0 */
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048600 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048442 */
#include <stdint.h>
 
int32_t dbg_with_array (int32_t arg_8h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t fixed2;
    int32_t fixed1;
    int[4] dynamic;
    int32_t var_4h;
    int32_t n;
    /* void with_array(int n); */
    eax = esp;
    ebx = esp;
    *((ebp - 0x14)) = 7;
    eax = *((ebp + 8));
    edx = eax - 1;
    *((ebp - 0xc)) = edx;
    eax <<= 2;
    edx = eax + 3;
    eax = 0x10;
    eax--;
    eax += edx;
    ecx = 0x10;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax *= 0x10;
    eax = esp;
    eax += 3;
    eax >>= 2;
    eax <<= 2;
    *((ebp - 0x10)) = eax;
    *((ebp - 0x18)) = 8;
    eax = *((ebp - 0x10));
    fill (eax, *((ebp + 8)));
    use (ebp - 0x14);
    eax = *((ebp - 0x10));
    use (eax);
    use (ebp - 0x18);
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048422 */
#include <stdint.h>
 
int32_t dbg_fill (void * s, char ** n) {
    int * dest;
    /* void fill(int * dest,int n); */
    eax = *((ebp + 0xc));
    eax <<= 2;
    memset (*((ebp + 8)), 0x78, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x804840b */
#include <stdint.h>
 
int32_t dbg_use (int32_t arg_8h) {
    int * x;
    /* void use(int * x); */
    eax = *((ebp + 8));
    edx = *(eax);
    eax = *(obj.sum);
    eax += edx;
    *(obj.sum) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048604 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x19f3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80484da */
#include <stdint.h>
 
int32_t dbg_with_alloca (char ** arg_8h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t fixed2;
    int32_t fixed1;
    int * dynamic;
    int32_t n;
    /* void with_alloca(int n); */
    *((ebp - 0x10)) = 7;
    eax = *((ebp + 8));
    eax <<= 2;
    edx = eax + 0xf;
    eax = 0x10;
    eax--;
    eax += edx;
    ecx = 0x10;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax *= 0x10;
    eax = esp;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    *((ebp - 0xc)) = eax;
    *((ebp - 0x14)) = 8;
    fill (*((ebp - 0xc)), *((ebp + 8)));
    use (ebp - 0x10);
    use (*((ebp - 0xc)));
    use (ebp - 0x14);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1a57;
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048560 */
#include <stdint.h>
 
int32_t dbg_main (char ** argv) {
    int32_t var_8h;
    int32_t argc;
    /* int main(int argc,char ** argv); */
    ecx = esp + 4;
    ebx = ecx;
    with_alloca (*(ebx));
    with_array (*(ebx));
    eax = 0;
    esp = ebp - 8;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x80482ac */
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
/* SUBJECTS/from_holdec/variable_stack_usage/ia32_elf_gcc_O0/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
