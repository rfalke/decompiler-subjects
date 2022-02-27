/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x80483c8 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804b01f;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048430 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048490 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048430)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048f70 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
int32_t basic_2_ternary_other (uint32_t arg_4h) {
    edx = 0xc9;
    eax = 0x64;
    if (*((esp + 4)) != 0x2a) {
        eax = edx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x80483f0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048940 */
#include <stdint.h>
 
int32_t divdi3 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_4h;
    int32_t var_8h;
    uint32_t var_ch;
    edx = *((esp + 0x34));
    ebp = *((esp + 0x3c));
    edi = *((esp + 0x38));
    eax = *((esp + 0x30));
    *((esp + 8)) = 0;
    esi = ebp;
    *((esp + 4)) = ebp;
    *(esp) = edi;
    if (edx < 0) {
        goto label_3;
    }
label_2:
    if (esi < 0) {
        goto label_4;
    }
label_1:
    ebx = *((esp + 4));
    ecx = *(esp);
    esi = edx;
    *((esp + 0xc)) = eax;
    edi = ecx;
    ecx = *(esp);
    if (ebx == 0) {
        if (edi <= edx) {
            goto label_5;
        }
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        ebp = 0;
        ecx = eax;
    } else {
        if (ebx <= edx) {
            goto label_6;
        }
        ebp = 0;
        ecx = 0;
    }
    do {
label_0:
        eax = ecx;
        ecx = *((esp + 8));
        edx = ebp;
        if (ecx != 0) {
            eax = -eax;
            edx += 0;
            edx = -edx;
        }
        return eax;
label_6:
        __asm ("bsr ebp, ebx");
        ebp ^= 0x1f;
        if (edx != 0) {
            goto label_7;
        }
        if (ebx < edx) {
            goto label_8;
        }
        ecx = 0;
    } while (edi > *((esp + 0xc)));
label_8:
    ecx = 1;
    goto label_0;
label_5:
    if (ecx == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ecx = eax;
    }
    eax = esi;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = eax;
    eax = ebp;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ecx = eax;
    goto label_0;
label_4:
    esp = -esp;
    esp + 8 = ~esp + 8;
    esp + 4 = -esp + 4;
    goto label_1;
label_3:
    eax = -eax;
    *((esp + 8)) = 0xffffffff;
    edx += 0;
    edx = -edx;
    goto label_2;
label_7:
    eax = 0x20;
    ecx = ebp;
    edx = edi;
    eax -= ebp;
    ebx <<= cl;
    ecx = eax;
    edx >>= cl;
    ecx = ebp;
    edx |= ebx;
    edi <<= cl;
    ebx = esi;
    ecx = eax;
    *(esp) = edx;
    edx = *((esp + 0xc));
    ebx >>= cl;
    ecx = ebp;
    esi <<= cl;
    ecx = eax;
    edx >>= cl;
    esi |= edx;
    edx = ebx;
    eax = esi;
    eax = *(edx:eax) / esp;
    edx = *(edx:eax) % esp;
    ebx = edx;
    esi = eax;
    edx:eax = eax * edi;
    if (ebx >= edx) {
        edi = *((esp + 0xc));
        ecx = ebp;
        edi <<= cl;
        if (edi < eax) {
            if (ebx == edx) {
                goto label_9;
            }
        }
        ecx = esi;
        ebp = 0;
        goto label_0;
    }
label_9:
    ecx = esi - 1;
    ebp = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048dc0 */
#include <stdint.h>
 
int32_t umoddi3 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    int32_t var_4h;
    uint32_t var_8h;
    int32_t var_ch;
    eax = *((esp + 0x3c));
    ecx = *((esp + 0x30));
    esi = *((esp + 0x34));
    edi = *((esp + 0x38));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = ecx;
    *(esp) = edi;
    *((esp + 4)) = ecx;
    edx = esi;
    if (eax != 0) {
        goto label_1;
    }
    if (edi <= esi) {
        goto label_2;
    }
    eax = ecx;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    do {
        eax = edx;
        edx = 0;
        return eax;
label_1:
        ebx = esi;
        if (eax > esi) {
            goto label_3;
        }
        __asm ("bsr ebp, eax");
        ebp ^= 0x1f;
        if (eax != esi) {
            goto label_4;
        }
        if (eax < esi) {
            goto label_5;
        }
        if (*(esp) <= ecx) {
            goto label_5;
        }
label_0:
        eax = *((esp + 4));
        return eax;
label_2:
        if (edi == 0) {
            eax = 1;
            edx = 0;
            eax = edx:eax / edi;
            edx = edx:eax % edi;
        }
        eax = esi;
        edx = 0;
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
        eax = ecx;
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
    } while (1);
label_3:
    eax = ecx;
    edx = esi;
    return eax;
label_4:
    esi = *(esp);
    edi = 0x20;
    ecx = ebp;
    edi -= ebp;
    eax <<= cl;
    ecx = edi;
    edx = esi;
    edx >>= cl;
    ecx = ebp;
    edx |= eax;
    eax = ebx;
    *(esp) = edx;
    edx = esi;
    edx <<= cl;
    ecx = edi;
    *((esp + 4)) = edx;
    edx = *((esp + 8));
    eax >>= cl;
    ecx = ebp;
    esi = eax;
    ebx <<= cl;
    ecx = edi;
    eax = edx;
    eax >>= cl;
    ecx = ebp;
    eax |= ebx;
    ebx = edx;
    edx = esi;
    eax = *(edx:eax) / esp;
    edx = *(edx:eax) % esp;
    esi = edx;
    ebx <<= cl;
    edx:eax = eax * *((esp + 4));
    *((esp + 8)) = ebx;
    ecx = edx;
    ebx = eax;
    if (esi >= edx) {
        if (esi != edx) {
            goto label_6;
        }
        if (*((esp + 8)) >= eax) {
            goto label_6;
        }
    }
    eax -= *((esp + 4));
    edx -= *(esp);
    ecx = edx;
    ebx = eax;
label_6:
    edx = *((esp + 8));
    edx -= ebx;
    esi -= ecx;
    ecx = edi;
    eax = esi;
    eax <<= cl;
    ecx = ebp;
    edx >>= cl;
    ecx = ebp;
    esi >>= cl;
    eax |= edx;
    edx = esi;
    return eax;
label_5:
    edx = esi;
    ecx -= edi;
    edx -= *((esp + 0xc));
    *((esp + 4)) = ecx;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048f74 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x2083;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048c90 */
#include <stdint.h>
 
int32_t udivdi3 (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch) {
    uint32_t var_8h;
    int32_t var_ch;
    esi = *((esp + 0x3c));
    ebx = *((esp + 0x30));
    ecx = *((esp + 0x34));
    edi = *((esp + 0x38));
    *((esp + 8)) = ebx;
    edx = ecx;
    eax = edi;
    if (esi != 0) {
        goto label_1;
    }
    if (edi > ecx) {
        goto label_2;
    }
    if (edi == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
    }
    eax = ecx;
    edx = 0;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    ecx = eax;
    eax = ebx;
    edi = ecx;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    ebx = eax;
    do {
label_0:
        edx = edi;
        return eax;
label_1:
        if (esi <= ecx) {
            __asm ("bsr edi, esi");
            edi ^= 0x1f;
            if (esi == ecx) {
                goto label_3;
            }
            ebx = 0x20;
            ecx = edi;
            ebx -= edi;
            esi <<= cl;
            ecx = ebx;
            ebp >>= cl;
            ecx = edi;
            eax <<= cl;
            esi |= ebp;
            ecx = ebx;
            *((esp + 0xc)) = eax;
            eax = *((esp + 8));
            ebp >>= cl;
            ecx = edi;
            edx <<= cl;
            ecx = ebx;
            eax >>= cl;
            edx |= eax;
            eax = edx;
            edx = ebp;
            eax = edx:eax / esi;
            edx = edx:eax % esi;
            ebx = eax;
            edx:eax = eax * *((esp + 0xc));
            if (ebp >= edx) {
                esi = *((esp + 8));
                ecx = edi;
                esi <<= cl;
                if (esi >= eax) {
                    goto label_4;
                }
                if (ebp != edx) {
                    goto label_4;
                }
            }
            ebx--;
label_4:
            edi = 0;
            eax = ebx;
            edx = edi;
            return eax;
        }
        edi = 0;
        ebx = 0;
        eax = ebx;
        edx = edi;
        return eax;
label_2:
        eax = ebx;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        edi = 0;
        ebx = eax;
        edx = edi;
        return eax;
label_3:
        if (esi < ecx) {
            goto label_5;
        }
        ebx = 0;
    } while (eax > *((esp + 8)));
label_5:
    ebx = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048ab0 */
#include <stdint.h>
 
int32_t moddi3 (int32_t arg_40h, int32_t arg_44h, int32_t arg_48h, int32_t arg_4ch) {
    int32_t var_4h;
    int32_t var_ch;
    uint32_t var_10h;
    uint32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    edi = *((esp + 0x44));
    eax = *((esp + 0x48));
    edx = *((esp + 0x4c));
    esi = *((esp + 0x40));
    *((esp + 0xc)) = 0;
    *(esp) = eax;
    *((esp + 4)) = edx;
    eax = edx;
    if (edi < 0) {
        goto label_5;
    }
label_2:
    if (eax < 0) {
        goto label_6;
    }
label_1:
    ebx = *((esp + 4));
    ecx = *(esp);
    eax = esi;
    edx = edi;
    *((esp + 0x10)) = edi;
    *((esp + 0x14)) = esi;
    *((esp + 0x18)) = ecx;
    ecx = *(esp);
    *(esp) = edi;
    if (ebx == 0) {
        if (ebp <= edi) {
            goto label_7;
        }
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
        *(esp) = edx;
label_0:
        eax = *(esp);
        edx = 0;
    } else {
        ebp = *((esp + 0x10));
        if (ebx <= ebp) {
            goto label_8;
        }
        eax = esi;
        edx = ebp;
    }
    do {
label_3:
        ecx = *((esp + 0xc));
        if (ecx != 0) {
            eax = -eax;
            edx += 0;
            edx = -edx;
        }
        return eax;
label_8:
        __asm ("bsr edi, ebx");
        edi ^= 0x1f;
        *((esp + 0x1c)) = edi;
        if (edx != 0) {
            goto label_9;
        }
        if (ebx < *((esp + 0x10))) {
            goto label_10;
        }
        if (ecx <= *((esp + 0x14))) {
            goto label_10;
        }
label_4:
        eax = *((esp + 0x14));
        edx = *(esp);
    } while (1);
label_7:
    if (ecx == 0) {
        eax = 1;
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ecx = eax;
    }
    eax = *((esp + 0x10));
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax = *((esp + 0x14));
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *(esp) = edx;
    goto label_0;
label_6:
    esp = -esp;
    esp + 4 = -esp + 4;
    goto label_1;
label_5:
    esi = -esi;
    *((esp + 0xc)) = 0xffffffff;
    edi += 0;
    edi = -edi;
    goto label_2;
label_9:
    edi = *((esp + 0x1c));
    ebp = *((esp + 0x18));
    edx = 0x20;
    edx -= edi;
    ecx = edi;
    esi = edx;
    ebx <<= cl;
    *((esp + 0x14)) = edx;
    ecx = esi;
    edx = ebp;
    edx >>= cl;
    ecx = edx;
    edx = ebp;
    ebp = *((esp + 0x10));
    ecx |= ebx;
    *(esp) = ecx;
    ecx = edi;
    edx <<= cl;
    ebx = ebp;
    ecx = esi;
    ebx >>= cl;
    ecx = *((esp + 0x1c));
    edi = edx;
    edx = esi;
    esi = ebp;
    esi <<= cl;
    ecx = edx;
    edx = ebx;
    ebp >>= cl;
    ecx = *((esp + 0x1c));
    esi |= ebp;
    eax <<= cl;
    eax = esi;
    eax = *(edx:eax) / esp;
    edx = *(edx:eax) % esp;
    ebx = edx;
    edx:eax = eax * edi;
    esi = eax;
    ecx = edx;
    if (ebx >= edx) {
        if (ebx != edx) {
            goto label_11;
        }
        if (ebp >= eax) {
            goto label_11;
        }
    }
    eax -= edi;
    edx -= *(esp);
    ecx = edx;
    esi = eax;
label_11:
    eax = ebp;
    edi = *((esp + 0x1c));
    eax -= esi;
    ebx -= ecx;
    ecx = *((esp + 0x14));
    esi = ebx;
    esi <<= cl;
    ecx = edi;
    eax >>= cl;
    ecx = edi;
    esi |= eax;
    ebx >>= cl;
    eax = esi;
    edx = ebx;
    goto label_3;
label_10:
    eax = *((esp + 0x14));
    edx = *((esp + 0x10));
    eax -= ecx;
    edx -= ebx;
    *(esp) = edx;
    *((esp + 0x14)) = eax;
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
int32_t intermediate_10_double_word_signed_math (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h, int32_t arg_44h) {
    int32_t var_ch_2;
    int32_t var_8h;
    int32_t var_ch;
    eax = *((esp + 0x38));
    esi = *((esp + 0x30));
    edx = *((esp + 0x3c));
    edi = *((esp + 0x34));
    ebx = *((esp + 0x44));
    ebp = *((esp + 0x40));
    *((esp + 8)) = eax;
    eax += esi;
    *((esp + 0xc)) = edx;
    edx += edi;
    if (edx < ebx) {
        goto label_0;
    }
    if (edx <= ebx) {
        goto label_5;
    }
    puts (0x8048f94);
    do {
label_0:
        eax = esi;
        eax -= *((esp + 8));
        edx = edi;
        edx -= *((esp + 0xc));
        if (ebx <= edx) {
            if (ebx >= edx) {
                goto label_6;
            }
            puts (0x8048f98);
        }
label_2:
        eax = *((esp + 8));
        edx = *((esp + 0xc));
        ecx = eax;
        eax = edx;
        eax *= esi;
        ecx *= edi;
        ecx += eax;
        eax = *((esp + 8));
        edx:eax = eax * esi;
        edx += ecx;
        if (ebx <= edx) {
            if (ebx >= edx) {
                goto label_7;
            }
            puts ("mult");
        }
label_1:
        _divdi3 (esi, edi, *((esp + 0xc)), *((esp + 0xc)));
        if (ebx <= edx) {
            if (ebx >= edx) {
                goto label_8;
            }
label_4:
            puts ("diff");
        }
label_3:
        eax = _moddi3 (esi, edi, *((esp + 0xc)), *((esp + 0xc)));
        ebp ^= eax;
        ebx ^= edx;
        ebx |= ebp;
        if (ebx == 0) {
            goto label_9;
        }
        eax = 0;
        return eax;
label_5:
    } while (eax <= ebp);
    eax = puts (0x8048f94);
    goto label_0;
label_7:
    if (ebp >= eax) {
        goto label_1;
    }
    eax = puts ("mult");
    goto label_1;
label_6:
    if (ebp >= eax) {
        goto label_2;
    }
    eax = puts (0x8048f98);
    goto label_2;
label_8:
    if (ebp >= eax) {
        goto label_3;
    }
    goto label_4;
label_9:
    eax = puts ("modulo");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048904 */
#include <stdint.h>
 
int32_t intermediate_1_ternary_blocks (uint32_t arg_8h) {
    if (*((ebp + 8)) == 0x2a) {
        eax = 0;
    } else {
        eax = 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048810 */
#include <stdint.h>
 
uint32_t advanced_1_unrolled_loop (void) {
    ebx = 0x30;
    puts ("basic");
    do {
        ebx++;
        putchar (ebx);
    } while (ebx != 0x3a);
    ebx = 0x30;
    puts ("partial unrolled");
    do {
        putchar (ebx);
        eax = ebx + 1;
        ebx += 2;
        putchar (eax);
    } while (ebx != 0x3a);
    puts ("fully unrolled");
    putchar (0x30);
    putchar (0x31);
    putchar (0x32);
    putchar (0x33);
    putchar (0x34);
    putchar (0x35);
    putchar (0x36);
    putchar (0x37);
    putchar (0x38);
    eax = putchar (0x39);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048f10 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x20e7;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x804891b */
#include <stdint.h>
 
int32_t intermediate_2_other_in_blocks (uint32_t arg_8h) {
    if (*((ebp + 8)) == 0x2a) {
        eax = 0x64;
    } else {
        eax = 0xc9;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x80484c0 */
#include <stdint.h>
 
int32_t basic_1_ternary_simple (uint32_t arg_4h) {
    eax = 0;
    al = (*((esp + 4)) != 0x2a) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_1ch;
    int32_t var_10h;
    /* [14] -r-x section size 3122 named .text */
    ecx = esp + 4;
    esi = *(ecx);
    edx = *((ecx + 4));
    *((ebp - 0x1c)) = edx;
    edi = esi;
    edi >>= 0x1f;
    eax = basic_1_ternary_simple (esi, ecx, ebx, esi, edi, ebp);
    ebx = eax;
    eax = basic_2_ternary_other (esi);
    ebx += eax;
    eax = intermediate_1_ternary_blocks (esi);
    ebx += eax;
    eax = intermediate_2_other_in_blocks (esi);
    ebx += eax;
    eax = intermediate_10_double_word_signed_math (esi, edi, esi, edi, esi, edi);
    ebx += eax;
    eax = intermediate_10_double_word_unsigned_math (esi, edi, esi, edi, esi, edi);
    ebx += eax;
    eax = advanced_1_unrolled_loop ();
    edx = *((ebp - 0x1c));
    ebx += eax;
    edx = *(edx);
    edx = *(edx);
    esp = ebp - 0x10;
    eax = edx + ebx;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048680 */
#include <stdint.h>
 
int32_t intermediate_10_double_word_unsigned_math (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h, int32_t arg_3ch, int32_t arg_40h, int32_t arg_44h) {
    int32_t var_ch_2;
    int32_t var_8h;
    int32_t var_ch;
    eax = *((esp + 0x38));
    esi = *((esp + 0x30));
    edx = *((esp + 0x3c));
    edi = *((esp + 0x34));
    ebx = *((esp + 0x44));
    ebp = *((esp + 0x40));
    *((esp + 8)) = eax;
    eax += esi;
    *((esp + 0xc)) = edx;
    edx += edi;
    if (edx < ebx) {
        goto label_0;
    }
    if (edx <= ebx) {
        goto label_5;
    }
    puts (0x8048f94);
    do {
label_0:
        eax = esi;
        eax -= *((esp + 8));
        edx = edi;
        edx -= *((esp + 0xc));
        if (ebx <= edx) {
            if (ebx >= edx) {
                goto label_6;
            }
            puts (0x8048f98);
        }
label_2:
        eax = *((esp + 8));
        edx = *((esp + 0xc));
        ecx = eax;
        eax = edx;
        eax *= esi;
        ecx *= edi;
        ecx += eax;
        eax = *((esp + 8));
        edx:eax = eax * esi;
        edx += ecx;
        if (ebx <= edx) {
            if (ebx >= edx) {
                goto label_7;
            }
            puts ("mult");
        }
label_1:
        _udivdi3 (esi, edi, *((esp + 0xc)), *((esp + 0xc)));
        if (ebx <= edx) {
            if (ebx >= edx) {
                goto label_8;
            }
label_4:
            puts ("diff");
        }
label_3:
        eax = _umoddi3 (esi, edi, *((esp + 0xc)), *((esp + 0xc)));
        ebp ^= eax;
        ebx ^= edx;
        ebx |= ebp;
        if (ebx == 0) {
            goto label_9;
        }
        eax = 0;
        return eax;
label_5:
    } while (eax <= ebp);
    eax = puts (0x8048f94);
    goto label_0;
label_7:
    if (ebp >= eax) {
        goto label_1;
    }
    eax = puts ("mult");
    goto label_1;
label_6:
    if (ebp >= eax) {
        goto label_2;
    }
    eax = puts (0x8048f98);
    goto label_2;
label_8:
    if (ebp >= eax) {
        goto label_3;
    }
    goto label_4;
label_9:
    eax = puts ("modulo");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x80482cc */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x2d2b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/transformation/ia32_elf/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
