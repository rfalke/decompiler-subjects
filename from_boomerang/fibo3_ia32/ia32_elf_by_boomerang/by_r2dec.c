/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x804830c */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 472 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80482dc */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x804833a)(uint32_t, uint32_t) (ecx, ebx);
    ebx += 0x12da;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x8048354 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.4583) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.4582) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.4582);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.4583) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x8048388 */
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
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80484bc */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        void (*eax)() ();
        eax = *((ebx - 4));
        ebx -= 4;
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80484b4 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80482a4 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x8048464 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    uint32_t var_10h;
    void (*0x8048472)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11a2;
    _init ();
    eax = ebx - 0xe0;
    edx = ebx - 0xe0;
    eax -= edx;
    eax >>= 2;
    *((ebp - 0x10)) = eax;
    if (eax == 0) {
        return eax;
    }
    edi = 0;
    esi = edx;
    do {
        uint32_t (*esi)() ();
        edi++;
        esi += 4;
    } while (edi < *((ebp - 0x10)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80483f6 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_8h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("Input number: ");
    scanf (0x8048517, ebp - 8);
    eax = *((ebp - 8));
    eax = fib (eax);
    *((ebp - 4)) = eax;
    eax = *((ebp - 8));
    printf ("fibonacci(%d) = %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80482ec */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80482cc */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
int32_t fib (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    do {
label_0:
        if (*((ebp + 8)) <= 1) {
            goto label_1;
        }
        eax = *((ebp + 8));
        eax--;
        eax = fib (eax);
    } while (1);
    eax = *((ebp + 8));
    eax -= 2;
    eax = fib (eax, eax, edx, edx);
    goto label_0;
    ecx += eax;
    *((ebp - 8)) = ecx;
    goto label_2;
label_1:
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
label_2:
    eax = *((ebp - 8));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe @ 0x80484e4 */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 26 named .fini */
    void (*0x80484ee)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x1126;
    _do_global_dtors_aux ();
}
