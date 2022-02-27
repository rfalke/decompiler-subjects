/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048840 */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    /* [09] -r-x section size 3221 named .text */
    eax = sym.imp._cleanup;
    if (eax != 0) {
        atexit (sym.imp._cleanup);
    }
    eax = .dynamic;
    if (eax != 0) {
        atexit ();
    }
    atexit (sym._fini);
    eax = *((ebp + 8));
    edx = ebp + eax*4 + 0x10;
    *(obj._environ) = edx;
    _init (eax, ebp + 0xc, edx);
    fpstart ();
    eax = main ();
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80488af */
#include <stdint.h>
 
void mcount (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x804923c */
#include <stdint.h>
 
int32_t register_frame_info (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    void (*0x8049245)(uint32_t) (ebx);
    ebx += 0x137b;
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((edx + 8)) = eax;
    *((edx + 4)) = 0;
    *(edx) = 0;
    *((edx + 0xc)) = 0;
    *((edx + 0x10)) = 0;
    eax = *((ebx + 0x708));
    *((edx + 0x14)) = eax;
    *((ebx + 0x708)) = edx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80494e0 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 35 named .init */
    frame_dummy ();
    gcc2_compiled_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048908 */
#include <stdint.h>
 
uint32_t frame_dummy (void) {
    int32_t var_4h;
    void (*0x8048911)(uint32_t) (ebx);
    ebx += 0x1caf;
    _register_frame_info (ebx + 0xe0, ebx + 0x6f0);
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x804948c */
#include <stdint.h>
 
uint32_t loc_gcc2_compiled_3 (void) {
    int32_t var_8h;
    void (*0x8049496)() ();
    ebx += 0x112a;
    eax = ebx + 0xd4;
    esi = eax - 4;
    if (*((eax - 4)) == -1) {
        goto label_0;
    }
    do {
        eax = *(esi);
        void (*eax)() ();
        esi += 0xfffffffc;
    } while (*(esi) != -1);
label_0:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8049284 */
#include <stdint.h>
 
int32_t register_frame_info_table (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    void (*0x804928d)(uint32_t) (ebx);
    ebx += 0x1333;
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((edx + 8)) = eax;
    *((edx + 0xc)) = eax;
    *((edx + 4)) = 0;
    *(edx) = 0;
    *((edx + 0x10)) = 0;
    eax = *((ebx + 0x708));
    *((edx + 0x14)) = eax;
    *((ebx + 0x708)) = edx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8049320 */
#include <stdint.h>
 
uint32_t frame_state_for (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_b4h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    uint32_t var_90h;
    int32_t var_8ch;
    void * s;
    int32_t var_84h;
    int32_t var_2eh;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    void (*0x8049331)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x128f;
    eax = find_fde (*((ebp + 8)));
    *((ebp - 0x94)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    ecx = ebp - 0x14;
    *((ebp - 0x98)) = ecx;
    eax = extract_cie_info (*((ebp - 0x94)), ecx);
    esi = eax;
    if (esi == 0) {
        goto label_0;
    }
    ecx = ebp - 0x88;
    *((ebp - 0x9c)) = ecx;
    memset (ecx, 0, 0x74);
    eax = *((ebp - 4));
    *((ebp - 0x2e)) = ax;
    eax = *((ebp - 0x10));
    *((ebp - 0x84)) = eax;
    ecx = *((ebp - 0x94));
    eax = *((ecx + 4));
    eax += 0xfffffffc;
    ecx -= eax;
    eax = ecx;
    eax += *(eax);
    edi = eax + 4;
    if (esi >= edi) {
        goto label_1;
    }
    ecx = *((ebp - 0x98));
    *((ebp - 0xa0)) = ecx;
    ecx = *((ebp - 0x9c));
    *((ebp - 0xa4)) = ecx;
    do {
        eax = execute_cfa_insn (esi, *((ebp - 0xa4)), *((ebp - 0xa0)), 0);
        esi = eax;
    } while (esi < edi);
label_1:
    esi = *((ebp - 0x94));
    esi += 0x10;
    eax = *((ebp - 0x14));
    if (*(eax) == 0x7a) {
        eax = gcc2_compiled_ (esi, ebp - 0x8c);
        esi = eax;
        esi += *((ebp - 0x8c));
    }
    eax = *((ebp - 0x94));
    eax += *(eax);
    edi = eax + 4;
    ecx = *((ebp - 0x94));
    eax = *((ecx + 8));
    *((ebp - 0x90)) = eax;
    if (esi >= edi) {
        goto label_2;
    }
    ecx = ebp - 0x90;
    *((ebp - 0xa8)) = ecx;
    do {
        ecx = *((ebp + 8));
        if (*((ebp - 0x90)) > ecx) {
            goto label_2;
        }
        eax = execute_cfa_insn (esi, ebp - 0x88, ebp - 0x14, *((ebp - 0xa8)));
        esi = eax;
    } while (esi < edi);
label_2:
    edi = *((ebp + 0xc));
    esi = ebp - 0x88;
    ecx = 0x1c;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    eax = *((ebp + 0xc));
label_0:
    esp = ebp - 0xb4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80492c8 */
#include <stdint.h>
 
int32_t deregister_frame_info (int32_t arg_8h) {
    int32_t var_4h;
    void (*0x80492d1)(uint32_t) (ebx);
    ebx += 0x12ef;
    eax = *((ebp + 8));
    ecx = ebx + 0x708;
    if (*((ebx + 0x708)) == 0) {
        goto label_0;
    }
    do {
        edx = *(ecx);
        if (*((edx + 8)) == eax) {
            eax = *((edx + 0x14));
            *(ecx) = eax;
            if (*(edx) == 0) {
                goto label_1;
            }
            free (*((edx + 0xc)));
            goto label_1;
        }
        ecx = edx + 0x14;
    } while (*((edx + 0x14)) != 0);
label_0:
    abort ();
label_1:
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048948 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    ebx = 5;
    esi = 5;
    scanf (0x8049528, ebp - 4, ebx, esi);
    scanf (0x8049528, ebp - 8);
    if (*((ebp - 4)) == ebx) {
        printf ("Equal\n");
    }
    if (*((ebp - 4)) != ebx) {
        printf ("Not Equal\n");
        if (*((ebp - 4)) >= ebx) {
            goto label_0;
        }
        printf ("Greater\n");
        if (*((ebp - 4)) < ebx) {
            goto label_1;
        }
    }
label_0:
    printf ("Less or Equal\n");
    if (*((ebp - 4)) <= ebx) {
label_1:
        printf ("Greater or Equal\n");
        if (*((ebp - 4)) <= ebx) {
            goto label_2;
        }
    }
    printf ("Less\n");
label_2:
    if (*((ebp - 8)) < esi) {
        printf ("Greater Unsigned\n");
        if (*((ebp - 8)) < esi) {
            goto label_3;
        }
    }
    printf ("Less or Equal Unsigned\n");
    if (*((ebp - 8)) <= esi) {
label_3:
        printf ("Carry Clear\n");
        if (*((ebp - 8)) <= esi) {
            goto label_4;
        }
    }
    printf ("Carry Set\n");
label_4:
    eax = ebx;
    eax -= *((ebp - 4));
    if (eax >= 0) {
        printf ("Minus\n");
        eax = ebx;
        eax -= *((ebp - 4));
        if (eax >= 0) {
            goto label_5;
        }
    }
    eax = printf ("Plus\n");
label_5:
    eax = 0;
    esp = ebp - 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8049510 */
#include <stdint.h>
 
void fini (void) {
    /* [11] -r-x section size 19 named .fini */
    gcc2_compiled_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80488b0 */
#include <stdint.h>
 
uint32_t loc_gcc2_compiled_ (void) {
    int32_t var_4h;
    eax = void (*0x80488b9)() ();
    ebx += 0x1d07;
    while (*(eax) != 0) {
        edx = eax + 4;
        *((ebx + 0xcc)) = edx;
        eax = *(eax);
        void (*eax)() ();
        eax = *((ebx + 0xcc));
    }
    _deregister_frame_info (ebx + 0xe0);
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80488f0 */
#include <stdint.h>
 
void fini_dummy (void) {
    int32_t var_4h;
    void (*0x80488f9)(uint32_t) (ebx);
    ebx += 0x1cc7;
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048930 */
#include <stdint.h>
 
void init_dummy (void) {
    int32_t var_4h;
    void (*0x8048939)(uint32_t) (ebx);
    ebx += 0x1c87;
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048a58 */
#include <stdint.h>
 
int32_t loc_gcc2_compiled_2 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    edi = 0;
    esi = edi;
    do {
        ecx = *((ebp + 8));
        edx = *(ecx);
        ecx++;
        *((ebp + 8)) = ecx;
        eax = edx;
        eax &= 0x7f;
        ecx = esi;
        eax <<= cl;
        edi |= eax;
        if (dl >= 0) {
            goto label_0;
        }
        esi += 7;
    } while (1);
label_0:
    eax = *((ebp + 0xc));
    *(eax) = edi;
    eax = *((ebp + 8));
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048a94 */
#include <stdint.h>
 
int32_t decode_sleb128 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    int32_t var_4h;
    edi = *((ebp + 8));
    *((ebp - 4)) = 0;
    ecx = *((ebp - 4));
    do {
        esi = *(edi);
        edi++;
        eax = esi;
        eax &= 0x7f;
        eax <<= cl;
        *((ebp - 4)) |= eax;
        ecx += 7;
        edx = esi;
    } while (dl < 0);
    if (ecx <= 0x1f) {
        if ((esi & 0x40) == 0) {
            goto label_0;
        }
        eax = 0xffffffff;
        eax <<= cl;
        *((ebp - 4)) |= eax;
    }
label_0:
    eax = *((ebp + 0xc));
    edx = *((ebp - 4));
    *(eax) = edx;
    eax = edi;
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048af0 */
#include <stdint.h>
 
int32_t fde_insert (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    edx = *((ebp + 0xc));
    eax = *((ebp + 0x10));
    esi = *((ebp + 8));
    *((esi + edx*4)) = eax;
    if (edx == 0) {
        goto label_0;
    }
    ecx = esi + edx*4;
    do {
        edi = *(ecx);
        *((ebp - 4)) = edi;
        esi = *((ebp + 8));
        esi = *((esi + edx*4 - 4));
        *((ebp - 8)) = esi;
        eax = *((esi + 8));
        esi = *((edi + 8));
        esi -= eax;
        eax = esi;
        if (eax >= 0) {
            goto label_0;
        }
        edi = *((ebp - 8));
        *(ecx) = edi;
        edi = *((ebp - 4));
        esi = *((ebp + 8));
        *((esi + edx*4 - 4)) = edi;
        ecx += 0xfffffffc;
        edx--;
    } while (edx != 0);
label_0:
    esp = ebp - 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048b48 */
#include <stdint.h>
 
int32_t count_fdes (int32_t arg_8h) {
    edx = *((ebp + 8));
    ecx = 0;
    if (*(edx) == 0) {
        goto label_0;
    }
    do {
        if (*((edx + 4)) != 0) {
            if (*((edx + 8)) == 0) {
                goto label_1;
            }
            ecx++;
        }
label_1:
        eax = edx;
        eax += *(edx);
        edx = eax + 4;
    } while (*((eax + 4)) != 0);
label_0:
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048b78 */
#include <stdint.h>
 
int32_t add_fdes (int32_t arg_8h, int32_t arg_ch, size_t arg_10h, uint32_t arg_14h, uint32_t arg_18h) {
    int32_t var_14h;
    uint32_t var_8h;
    uint32_t var_4h;
    void (*0x8048b86)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x1a3a;
    esi = *((ebp + 8));
    edx = *((ebp + 0x10));
    edi = *(edx);
    ecx = *((ebp + 0x14));
    ecx = *(ecx);
    *((ebp - 4)) = ecx;
    edx = *((ebp + 0x18));
    edx = *(edx);
    *((ebp - 8)) = edx;
    if (*(esi) == 0) {
        goto label_0;
    }
    do {
        if (*((esi + 4)) != 0) {
            if (*((esi + 8)) == 0) {
                goto label_1;
            }
            edi++;
            fde_insert (*((ebp + 0xc)), edi, esi);
            eax = *((esi + 8));
            if (*((ebp - 4)) > eax) {
                *((ebp - 4)) = eax;
            }
            eax += *((esi + 0xc));
            if (*((ebp - 8)) >= eax) {
                goto label_1;
            }
            *((ebp - 8)) = eax;
        }
label_1:
        eax = esi;
        eax += *(esi);
        esi = eax + 4;
    } while (*((eax + 4)) != 0);
label_0:
    ecx = *((ebp + 0x10));
    *(ecx) = edi;
    ecx = *((ebp - 4));
    edx = *((ebp + 0x14));
    *(edx) = ecx;
    ecx = *((ebp - 8));
    edx = *((ebp + 0x18));
    *(edx) = ecx;
    esp = ebp - 0x14;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048c08 */
#include <stdint.h>
 
int32_t frame_init (int32_t arg_8h) {
    int32_t var_1ch;
    int32_t var_10h;
    size_t size;
    int32_t var_8h;
    int32_t var_4h;
    void (*0x8048c16)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x19aa;
    edx = *((ebp + 8));
    eax = *((edx + 0xc));
    if (eax == 0) {
        goto label_0;
    }
    esi = eax;
    *((ebp - 0xc)) = 0;
    if (*(esi) == 0) {
        goto label_1;
    }
    do {
        eax = count_fdes (*(esi));
        *((ebp - 0xc)) += eax;
        esi += 4;
    } while (*(esi) != 0);
    goto label_1;
label_0:
    edx = *((ebp + 8));
    eax = count_fdes (*((edx + 8)));
    *((ebp - 0xc)) = eax;
label_1:
    eax = *((ebp - 0xc));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax <<= 2;
    eax = malloc (eax);
    edi = eax;
    *((ebp - 8)) = 0xffffffff;
    eax = 0;
    *((ebp - 4)) = eax;
    *((ebp - 0xc)) = eax;
    edx = *((ebp + 8));
    eax = *((edx + 0xc));
    if (eax == 0) {
        goto label_2;
    }
    esi = eax;
    if (*(esi) == 0) {
        goto label_3;
    }
    edx = ebp - 4;
    *((ebp - 0x10)) = edx;
    do {
        add_fdes (*(esi), edi, ebp - 0xc, ebp - 8, *((ebp - 0x10)));
        esi += 4;
    } while (*(esi) != 0);
    goto label_3;
label_2:
    edx = *((ebp + 8));
    add_fdes (*((edx + 8)), edi, ebp - 0xc, ebp - 8, ebp - 4);
label_3:
    edx = *((ebp + 8));
    *((edx + 0xc)) = edi;
    eax = *((ebp - 8));
    *(edx) = eax;
    eax = *((ebp - 4));
    *((edx + 4)) = eax;
    esp = ebp - 0x1c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048cf4 */
#include <stdint.h>
 
int32_t find_fde (uint32_t arg_8h) {
    int32_t var_14h;
    int32_t var_8h;
    uint32_t var_4h;
    void (*0x8048d02)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x18be;
    esi = *((ebx + 0x708));
    if (esi == 0) {
        goto label_1;
    }
    do {
        if (*(esi) == 0) {
            frame_init (esi);
        }
        ecx = *((ebp + 8));
        if (*(esi) <= ecx) {
            if (*((esi + 4)) > ecx) {
                goto label_2;
            }
        }
        esi = *((esi + 0x14));
    } while (esi != 0);
label_2:
    if (esi != 0) {
        goto label_3;
    }
    goto label_1;
    do {
        eax = *((ebp - 8));
        goto label_4;
label_3:
        edi = 0;
        ecx = *((esi + 0x10));
        *((ebp - 4)) = ecx;
        if (edi >= ecx) {
            goto label_1;
        }
        esi = *((esi + 0xc));
label_0:
        ecx = *((ebp - 4));
        eax = ecx + edi;
        edx = eax;
        edx >>= 1;
        ecx = *((esi + edx*4));
        *((ebp - 8)) = ecx;
        eax = *((ecx + 8));
        if (*((ebp + 8)) < eax) {
            *((ebp - 4)) = edx;
            goto label_5;
        }
        ecx = *((ebp - 8));
        eax += *((ecx + 0xc));
    } while (*((ebp + 8)) <= eax);
    edi = edx + 1;
label_5:
    if (*((ebp - 4)) > edi) {
        goto label_0;
    }
label_1:
    eax = 0;
label_4:
    esp = ebp - 0x14;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048d94 */
#include <stdint.h>
 
int32_t extract_cie_info (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_24h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    void (*0x8048da2)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x181e;
    edx = *((ebp + 8));
    eax = *((edx + 4));
    eax += 0xfffffffc;
    edx -= eax;
    esi = edx + 9;
    *((ebp - 0xc)) = esi;
    edi = *((ebp + 0xc));
    *(edi) = esi;
    *((ebp - 8)) = esi;
    eax = ebx - 0x1004;
    *((ebp - 0x10)) = eax;
    ecx = 1;
    edi = eax;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if ((al & 0) != 0) {
        esi = *((ebp - 0xc));
        edi = ebx - 0x1003;
        ecx = 3;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        if ((al & 0) != 0) {
            if (*((edx + 9)) == 0x7a) {
                goto label_0;
            }
            eax = 0;
        }
    } else {
label_0:
        eax = *((ebp + 0xc));
        eax = *(eax);
        *((ebp - 0x10)) = eax;
        edx = eax;
        edi = eax;
        eax = 0;
        ecx = 0xffffffff;
        __asm ("repne scasb al, byte es:[edi]");
        ecx = ~ecx;
        *((ebp - 8)) = ecx;
        eax = edx + ecx - 1;
        *((ebp - 0xc)) = eax;
        edx = eax;
        edx++;
        esi = *((ebp - 0x10));
        *((ebp - 8)) = esi;
        edi = ebx - 0x1003;
        *((ebp - 0x10)) = edi;
        ecx = 3;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        if ((al & 0) == 0) {
            eax = *((eax + 1));
            esi = *((ebp + 0xc));
            *((esi + 4)) = eax;
            edx = *((ebp - 0xc));
            edx += 5;
        } else {
            edi = *((ebp + 0xc));
            *((edi + 4)) = 0;
        }
        eax = *((ebp + 0xc));
        eax += 8;
        eax = gcc2_compiled_ (edx, eax);
        edx = eax;
        esi = *((ebp + 0xc));
        esi += 0xc;
        eax = decode_sleb128 (edx, esi);
        edx = eax;
        eax = *(edx);
        esi = *((ebp + 0xc));
        *((esi + 0x10)) = eax;
        edx++;
        edi = *(esi);
        if (*(edi) == 0x7a) {
            eax = gcc2_compiled_ (edx, ebp - 4);
            edx = eax;
            edx += *((ebp - 4));
        }
        eax = edx;
    }
    esp = ebp - 0x24;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048eac */
#include <stdint.h>
 
uint32_t execute_cfa_insn (int32_t arg_8h, void * arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_1ch;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    void (*0x8048eba)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x1706;
    edi = *((ebp + 0x10));
    edx = *((ebp + 0x14));
    ecx = *((ebp + 8));
    eax = *(ecx);
    ecx++;
    *((ebp + 8)) = ecx;
    esi = eax;
    esi &= 0x40;
    *((ebp - 0x10)) = esi;
    if (esi != 0) {
        eax &= 0x3f;
        eax *= *((edi + 8));
        *(edx) += eax;
    } else {
        if (al < 0) {
            eax &= 0x3f;
            *((ebp - 8)) = eax;
            eax = gcc2_compiled_ (*((ebp + 8)), ebp - 4);
            *((ebp + 8)) = eax;
            eax = *((ebp - 4));
            eax *= *((edi + 0xc));
            *((ebp - 4)) = eax;
            eax = *((ebp - 8));
            ecx = *((ebp + 0xc));
            *((eax + ecx + 0x5c)) = 1;
            esi = *((ebp - 8));
            edx = esi*4;
            eax = *((ebp - 4));
            *((edx + ecx + 0x10)) = eax;
        } else {
            if ((al & 0xc0) != 0) {
                eax &= 0x3f;
                *((ebp - 8)) = eax;
                cl = *((ebp - 0x10));
                esi = *((ebp + 0xc));
                *((eax + esi + 0x5c)) = cl;
            } else {
                if (eax <= 0x2e) {
                    ecx = ebx;
                    ecx -= *((ebx + eax*4 - 0x1654));
                    void (*ecx)() ();
                }
                abort ();
            }
        }
    }
    eax = *((ebp + 8));
    esp = ebp - 0x1c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80494c0 */
#include <stdint.h>
 
void init_dummy_1 (void) {
    int32_t var_4h;
    void (*0x80494c9)(uint32_t) (ebx);
    ebx += 0x10f7;
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048820 */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80487b0 */
#include <stdint.h>
 
void atexit (void) {
    atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80487d0 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048800 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80487f0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80487c0 */
#include <stdint.h>
 
void fpstart (void) {
    fpstart ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048810 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80487e0 */
#include <stdint.h>
 
void scanf (void) {
    scanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x8048830 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe @ 0x80487a0 */
#include <stdint.h>
 
void cleanup (void) {
    cleanup ();
}
