/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 604 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048328 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048390 */
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
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x80483f0 */
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
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048590 */
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
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048520 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x80485bc */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x80485c8)(uint32_t) (ebx);
    ebx += 0x11c8;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x804844d */
#include <stdint.h>
 
int32_t fibo_return_on_stack (int32_t arg_20h) {
    do {
label_0:
        if (*((esp + 0x20)) <= 1) {
            goto label_1;
        }
        eax = *((esp + 0x20));
        eax--;
        fibo_return_on_stack (eax);
    } while (1);
    ebx = *(esp);
    eax = *((esp + 0x20));
    eax -= 2;
    fibo_return_on_stack (eax);
    goto label_0;
    eax = *(esp);
    eax = ebx + eax;
    *((esp + 0x20)) = eax;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048530 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1255;
    _init ();
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
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048414 */
#include <stdint.h>
 
int32_t fibo_normal (int32_t arg_20h) {
    do {
label_0:
        if (*((esp + 0x20)) <= 1) {
            goto label_1;
        }
        eax = *((esp + 0x20));
        eax--;
        eax = fibo_normal (eax);
    } while (1);
    ebx = eax;
    eax = *((esp + 0x20));
    eax -= 2;
    fibo_normal (eax);
    goto label_0;
    eax = ebx + eax;
    goto label_2;
label_1:
    eax = *((esp + 0x20));
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048488 */
#include <stdint.h>
 
int32_t fibo_wrapper_return_on_stack (int32_t arg_20h) {
    eax = *((esp + 0x20));
    fibo_return_on_stack (eax);
    eax = *(esp);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x804858a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x804849e */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    eax = "Input number: ";
    printf (eax);
    eax = 0x80485f3;
    edx = esp + 0x14;
    isoc99_scanf (eax, edx);
    eax = *((esp + 0x14));
    eax = fibo_normal (eax);
    eax = *((esp + 0x14));
    eax = fibo_return_on_stack (eax);
    *((esp + 0x1c)) = eax;
    edx = *((esp + 0x14));
    eax = "fibonacci(%d) = %d %d\n";
    ecx = *((esp + 0x1c));
    *((esp + 0xc)) = ecx;
    ecx = *((esp + 0x18));
    *((esp + 8)) = ecx;
    *((esp + 4)) = edx;
    printf (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048338 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048348 */
#include <stdint.h>
 
void isoc99_scanf (void) {
    isoc99_scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x80482d8 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x80482e4)(uint32_t) (ebx);
    ebx += 0x14ac;
    edx = *((ebx - 4));
    if (edx != 0) {
        loc_imp_gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fibo_return_on_stack/ia32_elf/subject.exe @ 0x8048318 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
