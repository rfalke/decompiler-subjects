/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 452 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x8048258 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x804829c */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x80482a6)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x12fa;
    eax = *((ebx + 0x14));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
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
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
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
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x8048418 */
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
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x80483e4 */
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
    void (*0x804843c)() ();
    do {
label_1:
        uint32_t (*.data)() ();
        edx = ebx;
        ebx--;
    } while (edx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x8048230 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x80483b4 */
#include <stdint.h>
 
int32_t libc_csu_init (void) {
    init (ebx, esi);
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
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x8048328 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    char ** var_4h;
    eax = 0;
    if (*((ebp + 8)) > 0xee6b27ff) {
        printf ("Population exceeds %u\n");
    }
    if (*((ebp + 8)) <= 0xefffffff) {
        printf ("The mask is %x\n");
    }
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) > 1) {
        printf ("Arguments supplied\n");
    }
    eax = *((ebp + 8));
    eax = -eax;
    if (eax < 0xfffffffe) {
        printf ("Three or more arguments\n");
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x804843c */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h_2;
    /* [13] -r-x section size 27 named .fini */
    void (*0x8048446)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x115a;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/uns/ia32_elf_by_boomerang/subject.exe @ 0x8048268 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
