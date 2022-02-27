/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 396 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.5978) != 0) {
        goto label_0;
    }
    eax = *(obj.dtor_idx.5980);
    ebx = obj.__DTOR_END__;
    ebx -= obj.__DTOR_LIST__;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(obj.dtor_idx.5980) = eax;
        uint32_t (*eax*4 + obj.__DTOR_LIST__)() ();
        eax = *(obj.dtor_idx.5980);
    } while (eax < ebx);
label_1:
    *(obj.completed.5978) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
int32_t do_global_ctors_aux (void) {
    eax = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x804849c */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x80484a8)(uint32_t) (ebx);
    ebx += 0x11a4;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1231;
    init ();
    edi = ebx - 0xe0;
    eax = ebx - 0xe0;
    edi -= eax;
    edi >>= 2;
    if (edi == 0) {
        goto label_0;
    }
    esi = 0;
    do {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        uint32_t (*ebx + esi*4 - 0xe0)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x80483c4 */
#include <stdint.h>
 
int32_t dbg_forever (void) {
    int32_t var_ch;
    int32_t i;
    int32_t var_4h;
    /* void forever(); */
    *((ebp - 0xc)) = 0;
    do {
        edx = *((ebp - 0xc));
        *((ebp - 0xc))++;
        eax = "i=%d\n";
        *((esp + 4)) = edx;
        printf (eax);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x804846a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x80483eb */
#include <stdint.h>
 
int32_t dbg_main (void) {
    /* int main(); */
    forever ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x8048294 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x80482a0)(uint32_t) (ebx);
    ebx += 0x13ac;
    edx = *((ebx - 4));
    if (edx != 0) {
        loc_imp_gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x80482d4 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/loops/ia32_elf/subject.exe @ 0x80482f4 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
