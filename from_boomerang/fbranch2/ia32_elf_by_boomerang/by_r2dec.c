/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 604 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048364 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x804836e)(uint32_t, uint32_t) (ecx, ebx);
    ebx += 0x138a;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048388 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.4577) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.4576) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.4576);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.4577) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x80483bc */
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
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048574 */
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
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x804856c */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x80482c8 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x804851c */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    uint32_t var_10h;
    void (*0x804852a)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11ce;
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
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x80483e4 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_8h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    eax = 0x40a00000;
    *((ebp - 4)) = eax;
    scanf (0x80485c0, ebp - 8);
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("a is %f, b is %f\n");
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ah &= 0x45;
    if (ah != 0x40) {
    } else {
        ax = puts ("Equal");
    }
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ah &= 0x45;
    ah ^= 0x40;
    if (ah == 0) {
    } else {
        ax = puts ("Not Equal");
    }
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 0x45) != 0) {
    } else {
        ax = puts ("Greater");
    }
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 5) != 0) {
    } else {
        ax = puts ("Less or Equal");
    }
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 5) != 0) {
    } else {
        ax = puts ("Greater or Equal");
    }
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 0x45) != 0) {
    } else {
        puts ("Less");
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x804859c */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 26 named .fini */
    void (*0x80485a6)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x1152;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
