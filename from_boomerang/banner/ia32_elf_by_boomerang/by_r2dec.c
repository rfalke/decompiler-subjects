/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 788 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80482d0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x8048304 */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x804830e)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x2a5e;
    eax = *((ebx + 0x1c));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x8048328 */
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
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x8048364 */
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
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80485d0 */
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
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x804859c */
#include <stdint.h>
 
int32_t libc_csu_fini (void) {
    int32_t var_4h;
    eax = __fini_array_end;
    eax -= loc.__fini_array_end;
    eax >>= 2;
    ebx = eax - 1;
    if (eax != 0) {
        goto label_1;
    }
label_0:
    ebx = *((ebp - 4));
    void (*0x80485f4)() ();
    do {
label_1:
        uint32_t (*__fini_array_end)() ();
        edx = ebx;
        ebx--;
    } while (edx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x8048278 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x804856c */
#include <stdint.h>
 
int32_t libc_csu_init (void) {
    _init (ebx, esi);
    eax = __fini_array_end;
    eax -= loc.__fini_array_end;
    eax >>= 2;
    ebx = 0;
    if (ebx >= eax) {
        goto label_0;
    }
    esi = eax;
    do {
        uint32_t (*__fini_array_end)() ();
        ebx++;
    } while (ebx < esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x8048390 */
#include <stdint.h>
 
int32_t main (char * argc) {
    uint32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    uint32_t var_80h;
    int32_t var_7ch;
    char * var_78h;
    int32_t var_24h;
    size_t var_20h;
    int32_t var_1ch;
    char * var_18h;
    int32_t var_14h;
    char * s;
    uint32_t var_ch;
    int32_t var_8h;
    eax = 0;
    eax = malloc (0xc);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    eax += 4;
    *(eax) = "HelloWorld";
    *((ebp - 0xc)) = 2;
    eax = ebp - 0x10;
    *(eax) += 4;
label_2:
    eax = ebp - 0xc;
    *(eax)--;
    if (*((ebp - 0xc)) == 0) {
        goto label_3;
    }
    eax = *((ebp - 0x10));
    eax = strlen (*(eax));
    *((ebp - 0x20)) = eax;
    if (*((ebp - 0x20)) > 0xa) {
        *((ebp - 0x20)) = 0xa;
    }
    *((ebp - 0x14)) = 0;
label_1:
    if (*((ebp - 0x14)) > 6) {
        goto label_4;
    }
    *((ebp - 0x18)) = 0;
label_0:
    eax = *((ebp - 0x18));
    if (eax >= *((ebp - 0x20))) {
        goto label_5;
    }
    edx = *((ebp - 0x10));
    eax = *((ebp - 0x18));
    eax += *(edx);
    eax = *(eax);
    eax -= 0x20;
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x24));
    if (eax < 0) {
        *((ebp - 0x24)) = 0;
    }
    *((ebp - 0x1c)) = 0;
    do {
        if (*((ebp - 0x1c)) > 6) {
        } else {
            eax = *((ebp - 0x18));
            eax <<= 3;
            edx = ebp - 8;
            eax += edx;
            eax += *((ebp - 0x1c));
            eax -= 0x70;
            *((ebp - 0x7c)) = eax;
            eax = *((ebp - 0x24));
            *((ebp - 0x80)) = eax;
            if (*((ebp - 0x80)) < 0) {
                *((ebp - 0x80)) += 7;
            }
            edx = *((ebp - 0x80));
            edx >>= 3;
            eax = edx;
            eax <<= 3;
            eax -= edx;
            edx = *((ebp - 0x14));
            edx += eax;
            *((ebp - 0x84)) = edx;
            eax = *((ebp - 0x24));
            *((ebp - 0x88)) = eax;
            edx = *((ebp - 0x88));
            *((ebp - 0x8c)) = edx;
            if (*((ebp - 0x8c)) < 0) {
                *((ebp - 0x8c)) += 7;
            }
            eax = *((ebp - 0x8c));
            eax >>= 3;
            eax <<= 3;
            edx = *((ebp - 0x88));
            edx -= eax;
            eax = edx;
            eax <<= 3;
            eax -= edx;
            eax += *((ebp - 0x1c));
            edx = *((ebp - 0x84));
            eax += *((edx*4 + obj.glyphs));
            al = *(eax);
            edx = *((ebp - 0x7c));
            *(edx) = al;
            eax = ebp - 0x1c;
            *(eax)++;
        }
    } while (1);
    eax = *((ebp - 0x18));
    *((ebp + eax*8 - 0x71)) = 0x20;
    eax = ebp - 0x18;
    *(eax)++;
    goto label_0;
label_5:
    eax = *((ebp - 0x20));
    eax <<= 3;
    eax--;
    *((ebp - 0x18)) = eax;
    do {
        if (*((ebp - 0x18)) < 0) {
        } else {
            eax = ebp - 0x78;
            eax += *((ebp - 0x18));
            if (*(eax) != 0x20) {
            } else {
                eax = ebp - 0x78;
                eax += *((ebp - 0x18));
                *(eax) = 0;
                eax = ebp - 0x18;
                *(eax)--;
            } while (1);
        }
    }
    puts (ebp - 0x78);
    eax = ebp - 0x14;
    *(eax)++;
    goto label_1;
label_4:
    puts (0x8049b04);
    eax = ebp - 0x10;
    *(eax) += 4;
    goto label_2;
label_3:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80482c0 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/ia32_elf_by_boomerang/subject.exe @ 0x80485f4 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h_2;
    /* [13] -r-x section size 27 named .fini */
    void (*0x80485fe)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x276e;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
