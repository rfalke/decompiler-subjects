/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048370 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 2156 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x804833c */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x80483a0 */
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
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048400 */
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
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048bb0 */
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
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048b40 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x80487b0 */
#include <stdint.h>
 
int32_t dbg_integer_sqrt_in_c (int32_t arg_8h, short unsigned int ax, short unsigned int cf, short unsigned int cx, short unsigned int tmp, short unsigned int si) {
    uint32_t var_1ah;
    uint32_t var_16h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_eh;
    uint32_t n;
    ebx = ax;
    ecx = cf;
    edx = cx;
    esi = tmp;
    eax = si;
    /* unsigned int integer_sqrt_in_c(unsigned int n); */
    ecx = 0;
    eax = 0;
    edx = *((ebp + 8));
    *((ebp - 0x14)) = 0;
    *((ebp - 0xe)) = 0;
    *((ebp - 0x10)) = cx;
    ebx = edx;
    edx >>= 0x10;
    while (*((ebp - 0x1a)) <= di) {
        dx -= 0x4000;
        esi = 0;
label_0:
        eax = eax + eax + 1;
        *((ebp - 0x14))++;
        ax -= si;
        if (*((ebp - 0x14)) == 0x10) {
            goto label_1;
        }
        esi = ebx + ebx;
        cl = (bx > si) ? 1 : 0;
        edi = ecx;
        ecx = *((ebp - 0x16));
        di &= 0xff;
        edi = edx + edi;
        dx += di;
        *((ebp - 0xe)) = dx;
        dl = (dx < 0) ? 1 : 0;
        edi = edx;
        di &= 0xff;
        di += *((ebp - 0x16));
        ebx <<= 2;
        ecx += edi;
        dl = (si > bx) ? 1 : 0;
        esi = edx;
        edx = *((ebp - 0xe));
        si &= 0xff;
        si += *((ebp - 0xe));
        *((ebp - 0x16)) = cx;
        dx += si;
        cl = (dx < 0) ? 1 : 0;
        esi = ecx;
        si &= 0xff;
        si += *((ebp - 0x16));
        edi = *((ebp - 0x10));
        *((ebp - 0xe)) = si;
        cl = (*((ebp - 0x16)) < di) ? 1 : 0;
        esi = ecx;
        ecx = *((ebp - 0x16));
        si &= 0xff;
        cx += *((ebp - 0xe));
        esi = esi + edi*2;
        *((ebp - 0x10)) = cx;
        cl = (cx < 0) ? 1 : 0;
        edi = ecx;
        di &= 0xff;
        edi = edi + esi*2;
        *((ebp - 0xe)) = di;
        cl = (dx <= 0x3fff) ? 1 : 0;
        esi = ecx;
        si &= 0xff;
        esi += eax;
        cl = (*((ebp - 0x10)) < si) ? 1 : 0;
        edi = (int32_t) cl;
        ecx = *((ebp - 0xe));
        *((ebp - 0x1a)) = di;
        edi = *((ebp - 0x10));
        cx -= *((ebp - 0x1a));
        di -= si;
        *((ebp - 0x16)) = di;
        edi = *((ebp - 0xe));
        *((ebp - 0x10)) = cx;
    }
    *((ebp - 0x16)) += si;
    cl = (*((ebp - 0x16)) < 0) ? 1 : 0;
    esi = ecx;
    si &= 0xff;
    *((ebp - 0x10)) += si;
    cl = (*((ebp - 0x10)) < 0) ? 1 : 0;
    esi = ecx;
    si &= 0xff;
    goto label_0;
label_1:
    eax = (int32_t) ax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048bdc */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x8048be8)(uint32_t) (ebx);
    ebx += 0x120c;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048910 */
#include <stdint.h>
 
int32_t integer_sqrt_in_c_cleaned_up (int32_t arg_8h) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_18h;
    uint32_t var_14h;
    ecx = 0;
    eax = 0;
    edi = 0;
    edx = *((ebp + 8));
    while (edi != 0x10) {
        __asm ("shld ecx, edx, 2");
        edx <<= 2;
        ebx = (int32_t) ax;
        *((ebp - 0x24)) = ebx;
        esi = *((ebp - 0x24));
        *((ebp - 0x28)) = 0;
        ebx = *((ebp - 0x28));
        ebx += 0x40000000;
        esi += 0;
        eax += eax;
        *((ebp - 0x14)) = esi;
        esi = edx;
        si = 0;
        *((ebp - 0x18)) = ebx;
        *((ebp - 0x20)) = esi;
        if (*((ebp - 0x14)) <= ecx) {
            if (*((ebp - 0x14)) >= ecx) {
                esi = *((ebp - 0x20));
                if (ebx > esi) {
                    goto label_0;
                }
            }
            eax++;
            edx -= *((ebp - 0x18));
            ecx -= *((ebp - 0x14));
        }
label_0:
        edi++;
    }
    eax = (int32_t) ax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048b50 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1299;
    _init ();
    edi = ebx - 0xe8;
    eax = ebx - 0xe8;
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
        uint32_t (*ebx + esi*4 - 0xe8)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048424 */
#include <stdint.h>
 
uint32_t integer_sqrt_in_asm (void) {
    int32_t var_1ch;
    __asm ("enter 0, 0");
    __asm ("pushal");
    edx = eax;
    edx >>= 0x10;
    bx -= bx;
    si -= si;
    cx -= cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    dx -= 0x4000;
    bx -= si;
    if (cx < 0) {
        dx += 0x4000;
        bx += si;
        cx += 0;
    }
    __asm ("cmc");
    si += si;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    ax += ax;
    dx += dx;
    bx += bx;
    cx += cx;
    eax = (int32_t) si;
    *((esp + 0x1c)) = eax;
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048baa */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x8048990 */
#include <stdint.h>
 
int32_t dbg_main (int32_t c2, long long unsigned int current, short unsigned int result, int32_t check, long long unsigned int cmp, char[5] const __PRETTY_FUNCTION__) {
    char * file;
    uint32_t line;
    char * function;
    int32_t var_10h;
    int32_t var_14h;
    int32_t i;
    int32_t var_30h;
    int32_t y;
    int32_t c1;
    uint32_t n;
    uint32_t var_40h;
    int32_t var_48h;
    int32_t var_4ch;
    int32_t var_50h;
    int32_t var_54h;
    int32_t var_56h;
    int32_t var_58h;
    int32_t var_5ch;
    ebx = c2;
    ecx = current;
    edx = result;
    esi = check;
    edi = cmp;
    xmm7 = __PRETTY_FUNCTION__;
    /* int main(); */
label_0:
    ebx = *((esp + 0x3c));
    eax = *((esp + 0x3c));
    eax = integer_sqrt_in_asm (ebx, esi, edi);
    *((esp + 0x34)) = eax;
    eax = integer_sqrt_in_c (ebx);
    edx = 0;
    ecx = 0;
    *((esp + 0x38)) = eax;
    eax = ebx;
    ebx = 0;
    *((esp + 0x2c)) = ebx;
    while (*((esp + 0x2c)) != 0x10) {
        __asm ("shld edx, eax, 2");
        eax <<= 2;
        esi = (int32_t) cx;
        ebx = eax;
        *((esp + 0x4c)) = esi;
        edi = *((esp + 0x4c));
        *((esp + 0x48)) = 0;
        esi = *((esp + 0x48));
        esi += 0x40000000;
        edi += 0;
        bx = 0;
        ecx += ecx;
        *((esp + 0x40)) = ebx;
        if (edi <= edx) {
            if (edi >= edx) {
                if (esi > *((esp + 0x40))) {
                    goto label_1;
                }
            }
            ecx++;
            eax -= esi;
            edx -= edi;
        }
label_1:
    }
    eax = *((esp + 0x3c));
    edx = 0;
    ebx = (int32_t) cx;
    *((esp + 0x5c)) = edx;
    *((esp + 0x10)) = ebx;
    *((esp + 0x58)) = eax;
    *(fp_stack--) = *((esp + 0x58));
    fp_stack[0] = sqrt(fp_stack[0]);
    eax = *((esp + 0x56));
    *(esp) = "f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n";
    ah = 0xc;
    *((esp + 0x54)) = ax;
    eax = *((esp + 0x38));
    *((esp + 0xc)) = eax;
    eax = *((esp + 0x34));
    *((esp + 8)) = eax;
    eax = *((esp + 0x3c));
    *((esp + 4)) = eax;
    *((esp + 0x50)) = fp_stack[0];
    fp_stack--;
    esi = *((esp + 0x50));
    eax = printf (esi);
    if (esi != *((esp + 0x34))) {
        goto label_2;
    }
    esi = *((esp + 0x34));
    if (*((esp + 0x38)) != esi) {
        goto label_3;
    }
    if (*((esp + 0x38)) != ebx) {
        goto label_4;
    }
    if (*((esp + 0x38)) != ebx) {
        goto label_0;
    }
    eax = 0;
    return eax;
label_2:
    assert_fail ("main", "source/main.c", 0x4f);
label_3:
    assert_fail ("main", "source/main.c", 0x50);
label_4:
    return assert_fail ("main", "source/main.c", 0x51);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x80482ec */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x80482f8)(uint32_t) (ebx);
    ebx += 0x1afc;
    edx = *((ebx - 4));
    if (edx != 0) {
        loc_imp_gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x804832c */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x804834c */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/integer_sqrt/ia32_elf/subject.exe @ 0x804835c */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
