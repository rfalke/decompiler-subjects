/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80482d8 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 944 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80482a8 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x8048306)(uint32_t, uint32_t) (ecx, ebx);
    ebx += 0x14fe;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80482c8 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048320 */
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
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048354 */
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
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048660 */
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
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80483c7 */
#include <stdint.h>
 
int32_t b (char ** arg_8h) {
    printf ("b(%d)\n");
    eax = *((ebp + 8));
    eax--;
    c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80482b8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80483f2 */
#include <stdint.h>
 
int32_t c (char ** arg_8h) {
    printf ("c(%d)\n");
    if (*((ebp + 8)) <= 6) {
        eax = *((ebp + 8));
        eax <<= 2;
        eax = *((eax + 0x80486c4));
        void (*eax)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048575 */
#include <stdint.h>
 
void j (int32_t arg_8h) {
    printf ("j(%d)\n");
    if (*((ebp + 8)) > 1) {
        k (*((ebp + 8)));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80485a4 */
#include <stdint.h>
 
int32_t k (int32_t arg_8h) {
    printf ("k(%d)\n");
    if (*((ebp + 8)) > 1) {
        eax = *((ebp + 8));
        eax--;
        e (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x804849b */
#include <stdint.h>
 
int32_t e (int32_t arg_8h) {
    printf ("e(%d)\n");
    eax = *((ebp + 8));
    eax >>= 1;
    c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80484c7 */
#include <stdint.h>
 
int32_t f (int32_t arg_8h) {
    printf ("f(%d)\n");
    if (*((ebp + 8)) > 1) {
        eax = *((ebp + 8));
        eax--;
        g (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80484f8 */
#include <stdint.h>
 
int32_t g (int32_t arg_8h) {
    printf ("g(%d)\n");
    if (*((ebp + 8)) > 1) {
        eax = *((ebp + 8));
        eax--;
        f (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048658 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x80485d5 */
#include <stdint.h>
 
int32_t l (int32_t arg_8h) {
    printf ("l(%d)\n");
    if (*((ebp + 8)) > 1) {
        eax = *((ebp + 8));
        eax += 2;
        b (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048280 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x804855a */
#include <stdint.h>
 
void i (int32_t arg_8h) {
    printf ("i(%d)\n");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048608 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    uint32_t var_10h;
    void (*0x8048616)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x11ee;
    init ();
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
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x804837c */
#include <stdint.h>
 
int32_t main (char ** argv) {
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    printf ("a(%d)\n");
    edx = *((ebp + 8));
    eax = *((ebp + 8));
    eax <<= 1;
    eax += edx;
    b (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x804846a */
#include <stdint.h>
 
int32_t d (int32_t arg_8h) {
    printf (0x80486e0);
    if (*((ebp + 8)) > 1) {
        eax = *((ebp + 8));
        eax--;
        e (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048688 */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 26 named .fini */
    void (*0x8048692)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x1172;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe @ 0x8048529 */
#include <stdint.h>
 
int32_t h (int32_t arg_8h) {
    printf ("h(%d)\n");
    if (*((ebp + 8)) > 0) {
        eax = *((ebp + 8));
        eax--;
        i (eax);
    }
    return eax;
}
