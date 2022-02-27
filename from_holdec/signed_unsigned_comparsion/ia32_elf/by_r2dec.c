/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x804833f */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x8048380 */
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
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80483b0 */
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
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80483f0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x80483b0)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x8048370 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80484e4 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1b13;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x804843b */
#include <stdint.h>
 
int32_t f (char * arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = *((ebp + 8));
    ebx = *((ebp + 0xc));
    edx = eax - 2;
    if (edx <= 5) {
        printf ("%d signed in range\n");
    }
    eax = ebx - 2;
    if (eax <= 5) {
        *((ebp + 0xc)) = ebx;
        *((ebp + 8)) = "%d unsigned in range\n";
        ebx = *((ebp - 4));
        void (*0x80482e0)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1b77;
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
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_8h;
    /* [14] -r-x section size 466 named .text */
    ecx = esp + 4;
    ebx = 0;
    do {
        ebx++;
        eax = f (ebx, ebx, eax, eax, ecx, ebx, ebp);
    } while (ebx != 0xa);
    esp = ebp - 8;
    eax = 0;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80482ac */
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
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/signed_unsigned_comparsion/ia32_elf/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
