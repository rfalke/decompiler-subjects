/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 308 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym._init, sym._fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048258 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x804829c */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x80482a6)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x1226;
    eax = *((ebx + 0x14));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
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
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
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
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048388 */
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
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048328 */
#include <stdint.h>
 
void hello (void) {
    printf ("Hello, ");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048268 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048230 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void world (void) {
    printf ("world!\n");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x8048358 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_4h;
    eax = 0;
    *((ebp - 4)) = 0x8048328;
    eax = *((ebp - 4));
    void (*eax)() ();
    *((ebp - 4)) = 0x8048340;
    eax = *((ebp - 4));
    void (*eax)() ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/funcptr/ia32_elf_by_boomerang/subject.exe @ 0x80483ac */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 28 named .fini */
    void (*0x80483b6)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x1116;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
