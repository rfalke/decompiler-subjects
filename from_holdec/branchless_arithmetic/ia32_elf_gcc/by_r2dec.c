/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80492a0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080492d7 ();
    ebx += 0x2d4c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2660, ebx - 0x25f0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80492d7 */
#include <stdint.h>
 
void fcn_080492d7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049300 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.0;
    if (eax != obj.completed.0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.0);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049340 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.0;
    eax -= obj.completed.0;
    edx = eax;
    eax >>= 0x1f;
    edx >>= 2;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.0, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049380 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80493b0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049a10 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80492f0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049a15 */
#include <stdint.h>
 
void x86_get_pc_thunk_bp (void) {
    ebp = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80494f0 */
#include <stdint.h>
 
uint32_t sat_adds32b_var2 (int32_t arg_4h, int32_t arg_8h) {
    ecx = *((esp + 4));
    edx = *((esp + 8));
    eax = edx + ecx;
    edx ^= ecx;
    if (? >= ?) {
        edx = ecx;
        edx ^= eax;
        if (? < ?) {
            goto label_0;
        }
    }
    return eax;
label_0:
    eax = ecx;
    eax >>= 0x1f;
    eax += 0x7fffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049660 */
#include <stdint.h>
 
int32_t sat_divs64b (int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch) {
    int32_t var_8h;
    int32_t var_ch;
    esi = *((esp + 0x28));
    edi = *((esp + 0x2c));
    eax = *((esp + 0x20));
    edx = *((esp + 0x24));
    ecx = esi;
    ebx = edi;
    ecx++;
    ebx += 0;
    eax += 0x80000000;
    edx += 0xffffffff;
    eax |= ecx;
    edx = *((esp + 0xc));
    edx |= ebx;
    eax |= edx;
    al = (eax == 0) ? 1 : 0;
    edx = 0;
    eax = (int32_t) al;
    eax += *((esp + 0x20));
    edx += *((esp + 0x24));
    _divdi3 (edx, edx, eax, edi, ebx, esi, edi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049740 */
#include <stdint.h>
 
int32_t divdi3 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    __asm ("endbr32");
    ebx = *((esp + 0x34));
    ecx = *((esp + 0x30));
    *((esp + 8)) = 0;
    eax = *((esp + 0x38));
    edx = *((esp + 0x3c));
    *(esp) = ecx;
    *((esp + 4)) = ebx;
    if (ebx < 0) {
        ecx = -ecx;
        *((esp + 8)) = 0xffffffff;
        ebx += 0;
        *(esp) = ecx;
        ebx = -ebx;
        *((esp + 4)) = ebx;
    }
    ebx = edx;
    if (edx < 0) {
        eax = -eax;
        esp + 8 = ~esp + 8;
        edx += 0;
        edx = -edx;
        ebx = edx;
    }
    edi = eax;
    eax = *(esp);
    if (ebx == 0) {
        if (edi <= ebp) {
            goto label_1;
        }
        edx = ebp;
        esi = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
    } else {
        if (ebx <= ebp) {
            goto label_2;
        }
        esi = 0;
        ebp = 0;
    }
    do {
label_0:
        ecx = *((esp + 8));
        eax = ebp;
        edx = esi;
        if (ecx != 0) {
            eax = -eax;
            edx += 0;
            edx = -edx;
        }
        return eax;
label_2:
        __asm ("bsr esi, ebx");
        esi ^= 0x1f;
        if (edx != 0) {
            goto label_3;
        }
        if (ebx < ebp) {
            goto label_4;
        }
        ebp = 0;
    } while (edi > *(esp));
label_4:
    goto label_0;
label_1:
    if (edi == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edi = eax;
    }
    eax = ebp;
    edx = 0;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    esi = eax;
    eax = *(esp);
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    goto label_0;
label_3:
    eax = 0x20;
    ecx = esi;
    edx = edi;
    eax -= esi;
    ebx <<= cl;
    ecx = eax;
    edx >>= cl;
    ecx = esi;
    edx |= ebx;
    edi <<= cl;
    ebx = ebp;
    ecx = eax;
    ebx >>= cl;
    *((esp + 0xc)) = edx;
    ecx = esi;
    edx = *(esp);
    ebp <<= cl;
    ecx = eax;
    edx >>= cl;
    ebp |= edx;
    edx = ebx;
    eax = ebp;
    eax = *(edx:eax) / esp + 0xc;
    edx = *(edx:eax) % esp + 0xc;
    ebx = edx;
    edx:eax = eax * edi;
    if (ebx >= edx) {
        edi = *(esp);
        ecx = esi;
        edi <<= cl;
        if (edi >= eax) {
            goto label_5;
        }
        if (ebx != edx) {
            goto label_5;
        }
    }
    ebp--;
label_5:
    esi = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049490 */
#include <stdint.h>
 
void sat_divu64b (int32_t arg_1ch_4, int32_t arg_1ch_3, int32_t arg_1ch_2, int32_t arg_1ch) {
    _udivdi3 (*((esp + 0x1c)), *((esp + 0x1c)), *((esp + 0x1c)), *((esp + 0x1c)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049880 */
#include <stdint.h>
 
int32_t udivdi3 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_8h;
    int32_t var_ch;
    __asm ("endbr32");
    eax = *((esp + 0x3c));
    ebp = *((esp + 0x30));
    esi = *((esp + 0x34));
    ebx = *((esp + 0x38));
    if (eax == 0) {
        if (ebx <= esi) {
            goto label_1;
        }
        edi = 0;
        eax = ebp;
        edx = esi;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edx = edi;
        return eax;
    }
    if (eax <= esi) {
        goto label_2;
    }
    edi = 0;
    eax = 0;
    do {
label_0:
        edx = edi;
        return eax;
label_2:
        __asm ("bsr edi, eax");
        edi ^= 0x1f;
        if (eax != esi) {
            goto label_3;
        }
        if (eax < esi) {
            goto label_4;
        }
        eax = 0;
    } while (ebx > ebp);
label_4:
    eax = 1;
    goto label_0;
label_1:
    ecx = ebx;
    if (ebx == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        ecx = eax;
    }
    edx = 0;
    eax = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = eax;
    eax = ebp;
    edi = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edx = edi;
    return eax;
label_3:
    ecx = edi;
    edx = 0x20;
    edx -= edi;
    eax <<= cl;
    *((esp + 8)) = eax;
    ecx = edx;
    eax = ebx;
    eax >>= cl;
    ecx = *((esp + 8));
    ecx |= eax;
    eax = esi;
    *((esp + 8)) = ecx;
    ecx = edi;
    ebx <<= cl;
    ecx = edx;
    eax >>= cl;
    ecx = edi;
    *((esp + 0xc)) = ebx;
    ebx = ebp;
    esi <<= cl;
    ecx = edx;
    ebx >>= cl;
    ebx |= esi;
    esi = eax;
    edx = eax;
    eax = ebx;
    eax = *(edx:eax) / esp + 8;
    edx = *(edx:eax) % esp + 8;
    esi = edx;
    ebx = eax;
    edx:eax = eax * *((esp + 0xc));
    if (esi >= edx) {
        ecx = edi;
        ebp <<= cl;
        if (ebp < eax) {
            if (esi == edx) {
                goto label_5;
            }
        }
        eax = ebx;
        edi = 0;
        goto label_0;
    }
label_5:
    eax = ebx - 1;
    edi = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80495a0 */
#include <stdint.h>
 
int32_t sat_muls32b (int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 8));
    edx:eax = eax * *((esp + 0xc));
    ecx = eax;
    ebx = eax;
    ecx >>= 0x1f;
    if (ecx != edx) {
        eax = *((esp + 8));
        eax ^= *((esp + 0xc));
        eax >>= 0x1f;
        ebx = eax + 0x7fffffff;
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049620 */
#include <stdint.h>
 
int32_t sat_subs64b (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    ebx = *((esp + 0x14));
    ecx = *((esp + 0x10));
    edi = *((esp + 0x1c));
    edx = ebx;
    eax = ecx;
    ecx = ebx;
    eax -= *((esp + 0x18));
    edx -= *((esp + 0x1c));
    ecx >>= 0x1f;
    ebx = 0;
    esi = edx;
    ecx += 0x7fffffff;
    ebx += 0;
    edi ^= ebx;
    esi ^= ebx;
    if ((edi & esi) < 0) {
        eax = ecx;
        edx = ebx;
    }
    esi = ebx;
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049a1c */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x25d7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80493c0 */
#include <stdint.h>
 
int32_t sat_addu32b (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 8));
    eax += *((esp + 4));
    edx -= edx;
    eax |= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80493f0 */
#include <stdint.h>
 
int32_t sat_divu32b (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = 0;
    eax = *(edx:eax) / esp + 8;
    edx = *(edx:eax) % esp + 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049450 */
#include <stdint.h>
 
int32_t sat_subu64b (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    eax = *((esp + 0x10));
    edx = *((esp + 0x14));
    ecx = eax;
    ecx -= *((esp + 0x18));
    ebx = edx;
    ebx -= *((esp + 0x1c));
    eax = edx;
    eax -= ebx;
    al = (eax >= 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    edi = eax;
    eax &= ecx;
    edi >>= 0x1f;
    edx = edi;
    edx &= ebx;
    esi = ebx;
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049710 */
#include <stdint.h>
 
int32_t sgn64 (int32_t arg_10h, int32_t arg_14h) {
    edi = *((esp + 0x14));
    esi = *((esp + 0x10));
    edx = edi;
    edx >>= 0x1f;
    ebx = edx;
    edx = edi;
    ebx -= edi;
    edx >>= 0x1f;
    eax = ebx;
    esi = ebx;
    eax >>= 0x1f;
    edi = ebx;
    eax -= edx;
    edx:eax = (int64_t) eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80499a0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    _x86_get_pc_thunk_bp ();
    ebp += 0x2656;
    ebx = ebp;
    edi = *((esp + 0x28));
    _init (ebx, esi, edi);
    ebx = ebp - 0xf0;
    eax = ebp - 0xf4;
    ebx -= eax;
    ebx >>= 2;
    if (ebx == 0) {
        goto label_0;
    }
    esi = 0;
    do {
        uint32_t (*ebp + esi*4 - 0xf4)(uint32_t*, uint32_t*, uint32_t) (*((esp + 0x2c)), *((esp + 0x2c)), edi);
        esi++;
    } while (ebx != esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049550 */
#include <stdint.h>
 
int32_t sat_subs32b (int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 8));
    ecx = *((esp + 0xc));
    edx = eax;
    eax >>= 0x1f;
    edx -= *((esp + 0xc));
    eax += 0x7fffffff;
    ebx = edx;
    ebx ^= eax;
    ecx ^= eax;
    __asm ("cmovs edx, eax");
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80495d0 */
#include <stdint.h>
 
int32_t sat_adds64b (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    ebx = *((esp + 0x14));
    ecx = *((esp + 0x10));
    edx = *((esp + 0x1c));
    edi = ebx;
    eax = *((esp + 0x1c));
    esi = ecx;
    ecx = ebx;
    esi += *((esp + 0x18));
    edi += *((esp + 0x1c));
    ecx >>= 0x1f;
    ebx = 0;
    ecx += 0x7fffffff;
    ebx += 0;
    edx ^= edi;
    edx = ~edx;
    eax ^= ebx;
    edx |= eax;
    if (edx >= 0) {
        esi = ecx;
        edi = ebx;
    }
    eax = esi;
    edx = edi;
    esi = ebx;
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049420 */
#include <stdint.h>
 
int32_t sat_addu64b (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 0x14));
    edx = *((esp + 0x18));
    eax += *((esp + 0xc));
    edx += *((esp + 0x10));
    esi = eax;
    eax -= eax;
    ebx = eax;
    eax |= esi;
    ebx >>= 0x1f;
    edx |= ebx;
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049520 */
#include <stdint.h>
 
int32_t sat_adds32b_var3 (int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    ebx = edx;
    ecx = eax + edx;
    eax >>= 0x1f;
    eax += 0x7fffffff;
    ebx ^= ecx;
    ebx = ~ebx;
    edx ^= eax;
    ebx |= edx;
    __asm ("cmovns ecx, eax");
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80492e0 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80494b0 */
#include <stdint.h>
 
int32_t sat_adds32b_var1 (int32_t arg_ch, int32_t arg_10h) {
    ecx = *((esp + 0x10));
    eax = *((esp + 0xc));
    ebx = ecx;
    ebx >>= 0x1f;
    edx:eax = (int64_t) eax;
    eax += ecx;
    edx += ebx;
    ecx = 0;
    ebx = 0x7fffffff;
    esi = ecx;
    esi -= edx;
    if (esi < 0) {
        eax = ebx;
    }
    if (esi < 0) {
        edx = ecx;
    }
    ecx = 0x80000000;
    esi = edx;
    esi -= 0xffffffff;
    esi = ebx;
    if (esi < 0) {
        eax = ecx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049070 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_ch;
    /* [14] -r-x section size 2473 named .text */
    ecx = esp + 4;
    eax = sat_addu32b (0xffffffffffffffff, 3, ecx, esi, edi, ebp);
    printf ("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = sat_subu32b (1, 3);
    printf ("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = sat_mulu32b (0xffffffffffffffff, 3);
    printf ("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = sat_divu32b (0xffffffffffffffff, 3);
    printf ("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = sat_adds32b_var3 (0x7fffffff, 2);
    edi = eax;
    eax = sat_adds32b_var2 (0x7fffffff, 2);
    esi = eax;
    eax = sat_adds32b_var1 (0x7fffffff, 2);
    printf ("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n");
    eax = sat_subs32b (0x80000000, 2);
    printf ("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = sat_muls32b (0x7fffffff, 2);
    printf ("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = sat_divs32b (0x80000000, 0xffffffffffffffff);
    printf ("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n");
    eax = abs32 (0xfffffff0);
    printf ("abs32(0x%08x) = 0x%08x\n");
    eax = sgn32 (3);
    printf ("sgn32(0x%08x) = 0x%08x\n");
    eax = sat_addu64b (0, 0, 0, 0);
    esi = eax;
    edi = edx;
    eax = sat_subu64b (0, 0, 0, 0);
    esi += eax;
    edi += edx;
    eax = sat_divu64b (0, 0, 1, 0);
    esi += eax;
    edi += edx;
    eax = sat_adds64b (0, 0, 0, 0);
    esi += eax;
    edi += edx;
    eax = sat_subs64b (0, 0, 0, 0);
    esi += eax;
    edi += edx;
    eax = sat_divs64b (0, 0, 1, 0);
    esi += eax;
    edi += edx;
    eax = abs64 (0, 0);
    esi += eax;
    edi += edx;
    eax = sgn64 (0, 0);
    eax += esi;
    edx += edi;
    ecx = eax;
    ecx ^= 0x2a;
    eax = edx;
    eax |= ecx;
    while (1) {
        esp = ebp - 0xc;
        eax = 0;
        esp = ecx - 4;
        return;
        puts ("not reached");
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80496c0 */
#include <stdint.h>
 
int32_t abs32 (int32_t arg_4h) {
    edx = *((esp + 4));
    eax = *((esp + 4));
    eax = -eax;
    __asm ("cmovs eax, edx");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049400 */
#include <stdint.h>
 
int32_t sat_mulu32b (int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 0xc));
    edx:eax = eax * *((esp + 8));
    edx = -edx;
    ecx = eax;
    edx -= edx;
    eax = ecx;
    eax |= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80496d0 */
#include <stdint.h>
 
int32_t abs64 (int32_t arg_8h, int32_t arg_ch) {
    ecx = *((esp + 8));
    ebx = *((esp + 0xc));
    eax = ecx;
    eax = -eax;
    edx = ebx;
    edx += 0;
    edx = -edx;
    __asm ("cmovs edx, ebx");
    __asm ("cmovs eax, ecx");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80496f0 */
#include <stdint.h>
 
int32_t sgn32 (int32_t arg_4h) {
    edx = *((esp + 4));
    eax = 0;
    al = (edx > 0) ? 1 : 0;
    edx >>= 0x1f;
    eax -= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049580 */
#include <stdint.h>
 
int32_t sat_divs32b (int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 8));
    ecx = *((esp + 0xc));
    ebx = eax - 0x80000000;
    edx = ecx + 1;
    edx |= ebx;
    eax += 0;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [12] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x80493d0 */
#include <stdint.h>
 
int32_t sat_subu32b (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    eax -= *((esp + 8));
    edx = eax;
    al = (eax >= 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    eax &= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/branchless_arithmetic/ia32_elf_gcc/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
