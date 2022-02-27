/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 690 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x8049883;
    eax -= obj.completed.6007;
    while (eax == 0) {
        return eax;
        eax = 0;
    }
    void (*eax)(uint32_t) (obj.completed.6007);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    int32_t var_4h;
    eax = obj.completed.6007;
    eax -= obj.completed.6007;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    while (edx == 0) {
        return eax;
        edx = 0;
    }
    void (*edx)(uint32_t, uint32_t) (obj.completed.6007, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6007) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6007) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048430 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
        void (*0x80483d0)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048610 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048390 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x80484c8 */
#include <stdint.h>
 
int32_t printout (int32_t arg_8h) {
    int32_t var_4h;
    do {
label_0:
        eax = *((ebp + 8));
        eax = *((eax + 8));
        if (eax == 0) {
            goto label_1;
        }
        eax = *((ebp + 8));
        eax = *((eax + 8));
        printout (eax);
    } while (1);
label_1:
    eax = *((ebp + 8));
    eax = *(eax);
    *((esp + 4)) = eax;
    printf (0x8048630);
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 4));
        printout (eax);
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048614 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x123b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h) {
    int32_t var_4h;
    int32_t var_8h;
    edi = 0;
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x12ad;
    ebp = *((esp + 0x30));
    esi = ebx - 0xf4;
    _init ();
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
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048515 */
#include <stdint.h>
 
int32_t main (void) {
    void * var_4h;
    int32_t var_14h;
    void * var_18h;
    int32_t var_1ch;
    *((esp + 0x14)) = 0;
    *((esp + 0x1c)) = 1;
    while (*((esp + 0x1c)) <= 0xa) {
        eax = malloc (0xc);
        *((esp + 0x18)) = eax;
        eax = *((esp + 0x18));
        *((eax + 4)) = 0;
        eax = *((esp + 0x18));
        edx = *((eax + 4));
        eax = *((esp + 0x18));
        *((eax + 8)) = edx;
        eax = rand ();
        edx = *((esp + 0x18));
        *(edx) = eax;
        eax = *((esp + 0x18));
        eax = esp + 0x14;
        insert (eax, eax);
    }
    eax = *((esp + 0x14));
    printout (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x804845d */
#include <stdint.h>
 
int32_t insert (int32_t arg_8h, void * arg_ch) {
    int32_t var_4h;
    do {
label_0:
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0) {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *(eax) = edx;
            goto label_1;
        }
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *(eax);
        if (edx >= eax) {
            goto label_2;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        edx = eax + 8;
        eax = *((ebp + 0xc));
        insert (edx, eax);
    } while (1);
    goto label_1;
label_2:
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebp + 8));
    eax = *(eax);
    eax = *(eax);
    if (edx > eax) {
        eax = *((ebp + 8));
        eax = *(eax);
        edx = eax + 4;
        eax = *((ebp + 0xc));
        insert (edx, eax);
        goto label_0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x80482d4 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x157b;
    eax = *((ebx - 4));
    if (eax != 0) {
        gmon_start_ ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-044_tree/ia32_elf/subject.exe @ 0x8048350 */
#include <stdint.h>
 
void rand (void) {
    rand ();
}
