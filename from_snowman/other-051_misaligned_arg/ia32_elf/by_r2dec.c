/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 434 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x80496bb;
    eax -= obj.completed.6008;
    while (eax == 0) {
        return eax;
        eax = 0;
    }
    void (*eax)(uint32_t) (obj.completed.6008);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    int32_t var_4h;
    eax = obj.completed.6008;
    eax -= obj.completed.6008;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    while (edx == 0) {
        return eax;
        edx = 0;
    }
    void (*edx)(uint32_t, uint32_t) (obj.completed.6008, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048380 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6008) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6008) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
        void (*0x8048340)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048484 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x120f;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x80483cd */
#include <stdint.h>
 
int32_t f (int32_t arg_8h, int32_t arg_9h) {
    eax = *((ebp + 8));
    *(obj.g) = eax;
    eax = 0x80496bd;
    edx = *((ebp + 9));
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h) {
    int32_t var_4h;
    int32_t var_8h;
    edi = 0;
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1281;
    ebp = *((esp + 0x30));
    esi = ebx - 0xf4;
    init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    do {
        eax = *((esp + 0x38));
        eax = *((esp + 0x34));
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t, uint32_t) (ebp, eax, eax);
        edi++;
    } while (edi != esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x80483e4 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    *((ebp - 4)) = 0;
    while (*((ebp - 4)) <= 9) {
        eax = *((ebp - 4));
        f (eax);
        *((ebp - 4))++;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x8048274 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x141f;
    eax = *((ebx - 4));
    if (eax != 0) {
        loc_imp_gmon_start_ ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-051_misaligned_arg/ia32_elf/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
