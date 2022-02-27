/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x804839e */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80483d0 */
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
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048400 */
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
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048440 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048460 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048400)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048540 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048490 */
#include <stdint.h>
 
int32_t test_1 (int32_t arg_4h) {
    ecx = *((esp + 4));
    edx = 0x24924925;
    eax = ecx;
    edx:eax = eax * edx;
    eax = ecx;
    eax -= edx;
    eax >>= 1;
    eax += edx;
    eax >>= 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048544 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1ab3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80484b0 */
#include <stdint.h>
 
int32_t test_2 (int32_t arg_ch) {
    esi = 0x24924925;
    ecx = *((esp + 0xc));
    eax = esi;
    edi = esi;
    edx:eax = eax * ecx;
    ecx -= edx;
    eax = edx;
    ecx >>= 1;
    eax += ecx;
    eax >>= 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1b17;
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
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_1ch;
    int32_t var_10h;
    /* [14] -r-x section size 562 named .text */
    ecx = esp + 4;
    ebx = 0;
    edi = 0;
    while (esi == edx) {
        if (esi != eax) {
            goto label_1;
        }
label_0:
        if (edi != 0) {
            if (edi > ebx) {
                goto label_2;
            }
        }
        edi = ebx;
        ebx += 0xf4240;
        eax = test_1 (ebx);
        esi = eax;
        eax = test_2 (ebx);
        *((ebp - 0x1c)) = eax;
        eax = test_3 (ebx);
        edx = *((ebp - 0x1c));
    }
label_1:
    ecx = eax;
    ecx -= esi;
    eax = edx;
    eax -= esi;
    eax = printf ("%u %u %u (diff=%d) %u (diff=%d)\n");
    goto label_0;
label_2:
    esp = ebp - 0x10;
    eax = 0;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80482ac */
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
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
int32_t test_3 (int32_t arg_4h) {
    ecx = 0x24924925;
    eax = 0x24924925;
    edx:eax = eax * *((esp + 4));
    ecx = edx;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/seven/ia32_elf/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
