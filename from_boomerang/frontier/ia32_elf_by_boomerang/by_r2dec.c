/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x8048244 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 524 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x8048234 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x8048268 */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x8048272)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x12ee;
    eax = *((ebx + 0x10));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x804828c */
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
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x80482c8 */
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
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x804842c */
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
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x80483f8 */
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
    void (*0x8048450)() ();
    do {
label_1:
        uint32_t (*.data)() ();
        edx = ebx;
        ebx--;
    } while (edx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x804820c */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x80483c8 */
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
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x80482f4 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    char ** var_8h;
    int32_t var_4h;
    eax = 0;
    *((ebp - 4)) = 1;
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) == 5) {
        goto label_1;
    }
    if (*((ebp - 8)) <= 5) {
        if (*((ebp - 8)) == 2) {
            goto label_2;
        }
        goto label_3;
    }
    if (*((ebp - 8)) == 9) {
        goto label_4;
    }
    goto label_3;
label_2:
    *((ebp - 4)) = 2;
    do {
        *((ebp - 4)) = 3;
    } while (*((ebp + 8)) > 0);
    do {
        *((ebp - 4)) = 4;
        goto label_3;
label_1:
label_0:
        *((ebp - 4)) = 5;
        eax = *((ebp + 8));
        *((ebp + 8))--;
        if (eax <= 1) {
            goto label_5;
        }
        *((ebp - 4)) = 6;
        eax = *((ebp + 8));
        *((ebp + 8))--;
        if (eax <= 2) {
            goto label_6;
        }
    } while (1);
label_5:
    *((ebp - 4)) = 7;
    if (*((ebp + 8)) == 0xc) {
        goto label_7;
    }
label_6:
    *((ebp - 4)) = 8;
    if (*((ebp + 8)) > 0) {
        goto label_0;
    }
    goto label_3;
label_4:
    *((ebp - 4)) = 9;
    if (*((ebp + 8)) == 0xa) {
        *((ebp - 4)) = 0xa;
    } else {
        *((ebp - 4)) = 0xb;
    }
label_7:
    *((ebp - 4)) = 0xc;
label_3:
    *((ebp - 4)) = 0xd;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe @ 0x8048450 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h_2;
    /* [13] -r-x section size 27 named .fini */
    void (*0x804845a)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x1106;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
