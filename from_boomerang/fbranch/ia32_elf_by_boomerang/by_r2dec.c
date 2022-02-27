/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 636 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048304 */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x804830e)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x13ae;
    eax = *((ebx + 0x1c));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048328 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) != 0) {
        goto label_0;
    }
    eax = *(obj.p.0);
    edx = *(eax);
    if (edx == 0) {
        goto label_1;
    }
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
label_1:
    *(obj.completed.1) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048364 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _comment (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048538 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    ebx = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048504 */
#include <stdint.h>
 
int32_t libc_csu_fini (void) {
    int32_t var_4h;
    eax = .data;
    eax -= loc.__fini_array_end;
    eax >>= 2;
    ebx = eax - 1;
    if (eax != 0) {
        goto label_1;
    }
label_0:
    ebx = *((ebp - 4));
    void (*0x804855c)() ();
    do {
label_1:
        uint32_t (*.data)() ();
        edx = ebx;
        ebx--;
    } while (edx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x80484d4 */
#include <stdint.h>
 
int32_t libc_csu_init (void) {
    _init (ebx, esi);
    eax = .data;
    eax -= loc.__fini_array_end;
    eax >>= 2;
    ebx = 0;
    if (ebx >= eax) {
        goto label_0;
    }
    esi = eax;
    do {
        uint32_t (*.data)() ();
        ebx++;
    } while (ebx < esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x8048390 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    eax = scanf (0x8048580, ebp - 4);
    *(fp_stack--) = *((ebp - 4));
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("a is %f, b is %f\n");
    *(fp_stack--) = *((ebp - 4));
    *(fp_stack--) = *(0x80485cc);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    ah &= 0x45;
    ah ^= 0x40;
    if (ah == 0) {
        goto label_5;
    }
label_4:
    *(fp_stack--) = *(0x80485cc);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    ah &= 0x45;
    if (ah != 0x40) {
        goto label_6;
    }
label_3:
    *(fp_stack--) = *(0x80485cc);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        goto label_7;
    }
label_2:
    *(fp_stack--) = *(0x80485cc);
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if ((ah & 1) == 0) {
        goto label_8;
    }
label_1:
    *(fp_stack--) = *(0x80485cc);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 1) == 0) {
        goto label_9;
    }
label_0:
    *(fp_stack--) = *(0x80485cc);
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    while (1) {
        return eax;
        puts ("Less");
    }
label_9:
    fp_stack++;
    puts ("Greater or Equal");
    *(fp_stack--) = *((ebp - 4));
    goto label_0;
label_8:
    fp_stack++;
    puts ("Less or Equal");
    *(fp_stack--) = *((ebp - 4));
    goto label_1;
label_7:
    fp_stack++;
    puts ("Greater");
    *(fp_stack--) = *((ebp - 4));
    goto label_2;
label_6:
    fp_stack++;
    puts ("Not Equal");
    *(fp_stack--) = *((ebp - 4));
    goto label_3;
label_5:
    fp_stack++;
    puts (0x80485a5);
    *(fp_stack--) = *((ebp - 4));
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x804855c */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h_2;
    /* [13] -r-x section size 27 named .fini */
    void (*0x8048566)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x1156;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
