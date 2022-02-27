/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80489c0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 5428 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80488c8 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80489e4 */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x80489ed)(uint32_t) (ebx);
    ebx += 0x2d57;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048a10 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) != 0) {
        goto label_0;
    }
    eax = p.0;
    edx = *(eax);
    if (edx == 0) {
        goto label_1;
    }
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
        eax = p.0;
        edx = *(eax);
    } while (edx != 0);
label_1:
    *(obj.completed.1) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048a50 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    edx = *(obj.__JCR_LIST__);
    if (edx != 0) {
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
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049ed0 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    ebx = __CTOR_LIST__;
    eax = __CTOR_LIST__;
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
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048e70 */
#include <stdint.h>
 
int32_t quoting_options_from_style (void) {
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    ecx = 8;
    *((ebp - 0x38)) = edx;
    edx = 0;
    ebx = eax;
    edi = ebp - 0x34;
    eax = edx;
    memset (edi, eax, ecx);
    edx = *((ebp - 0x38));
    eax = ebx;
    *(ebx) = edx;
    edx = *((ebp - 0x34));
    *((ebx + 4)) = edx;
    edx = *((ebp - 0x30));
    *((ebx + 8)) = edx;
    edx = *((ebp - 0x2c));
    *((ebx + 0xc)) = edx;
    edx = *((ebp - 0x28));
    *((ebx + 0x10)) = edx;
    edx = *((ebp - 0x24));
    *((ebx + 0x14)) = edx;
    edx = *((ebp - 0x20));
    *((ebx + 0x18)) = edx;
    edx = *((ebp - 0x1c));
    *((ebx + 0x1c)) = edx;
    edx = *((ebp - 0x18));
    *((ebx + 0x20)) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048ed0 */
#include <stdint.h>
 
int32_t gettext_quote (void) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    *((ebp - 8)) = ebx;
    ebx = eax;
    eax = 5;
    *((ebp - 4)) = esi;
    esi = edx;
    *((esp + 8)) = eax;
    eax = dcgettext (0, ebx);
    ecx = eax;
    dl = (eax == ebx) ? 1 : 0;
    al = (esi == 6) ? 1 : 0;
    eax &= edx;
    if ((al & 1) != 0) {
        ecx = 0x804a3bc;
    }
    ebx = *((ebp - 8));
    eax = ecx;
    esi = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048828 */
#include <stdint.h>
 
void dcgettext (void) {
    dcgettext ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048f20 */
#include <stdint.h>
 
uint32_t quotearg_buffer_restyled (size_t arg_8h, char * arg_ch, size_t arg_10h) {
    char * var_6ch;
    int32_t var_64h;
    int32_t var_60h;
    char * var_5ch;
    int32_t var_58h;
    int32_t var_44h;
    int32_t var_40h;
    size_t var_3ch;
    uint32_t var_38h;
    char * var_34h;
    char * var_30h;
    char * var_2ch;
    char * var_28h;
    wchar_t * pwc;
    int32_t var_20h;
    int32_t var_1ch;
    char * s;
    size_t n;
    mbstate_t * ps;
label_6:
    *((ebp - 0x28)) = eax;
    *((ebp - 0x2c)) = edx;
    *((ebp - 0x30)) = ecx;
    *((ebp - 0x6c)) = 0;
    *((ebp - 0x38)) = 0;
    *((ebp - 0x3c)) = 0;
    *((ebp - 0x40)) = 0;
    eax = ctype_get_mb_cur_max ();
    eax--;
    al = (eax == 0) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x44)) = eax;
    if (*((ebp + 0xc)) <= 6) {
        eax = *((ebp + 0xc));
        /* switch table (7 cases) at 0x804a100 */
        edx = *((ebp - 0x2c));
        if (*((ebp - 0x6c)) < edx) {
            ecx = *((ebp - 0x28));
            *(ecx) = 0x22;
        }
        *((ebp - 0x6c)) = 1;
        *((ebp - 0x40)) = 1;
        *((ebp - 0x38)) = 0x804a3bc;
label_10:
        *((ebp - 0x3c)) = 1;
    }
label_9:
    *((ebp - 0x34)) = 0;
label_2:
    if (*((ebp + 8)) == -1) {
        goto label_16;
    }
    edx = *((ebp + 8));
    if (*((ebp - 0x34)) == edx) {
        goto label_17;
    }
label_0:
    eax = *((ebp - 0x40));
    if (eax != 0) {
        eax = *((ebp - 0x3c));
        if (eax == 0) {
            goto label_18;
        }
        eax = *((ebp - 0x34));
        edi = *((ebp - 0x3c));
        eax += edi;
        if (eax > *((ebp + 8))) {
            goto label_18;
        }
        esi = *((ebp - 0x34));
        eax = *((ebp - 0x30));
        ecx = *((ebp - 0x3c));
        edi = *((ebp - 0x38));
        eax += esi;
        esi = eax;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        if (ecx != ecx) {
            goto label_18;
        }
        eax = *((ebp - 0x2c));
        if (*((ebp - 0x6c)) < eax) {
            edx = *((ebp - 0x28));
            ecx = *((ebp - 0x6c));
            *((ecx + edx)) = 0x5c;
        }
        *((ebp - 0x6c))++;
    }
label_18:
    ebx = *((ebp - 0x30));
    esi = *((ebp - 0x34));
    ebx = *((esi + ebx));
    eax = (int32_t) bl;
    *((ebp - 0x58)) = bl;
    if (eax <= 0x7e) {
        /* switch table (127 cases) at 0x804a11c */
    }
    edi = *((ebp - 0x44));
    if (edi == 0) {
        goto label_19;
    }
    *((ebp - 0x5c)) = 1;
    eax = ctype_b_loc ();
    edx = *((ebp - 0x58));
    eax = *(eax);
    eax = *((eax + edx*2));
    eax &= 0x4000;
    *((ebp - 0x60)) = eax;
label_11:
    ecx = *((ebp - 0x40));
    edx = *((ebp - 0x60));
    al = (ecx != 0) ? 1 : 0;
    dl = (edx == 0) ? 1 : 0;
    eax &= edx;
    if ((al & 1) == 0) {
        goto label_4;
    }
label_12:
    ecx = *((ebp - 0x34));
    eax = *((ebp - 0x5c));
    ecx += eax;
    while (ecx > edx) {
        esi = *((ebp - 0x2c));
        if (*((ebp - 0x6c)) < esi) {
            eax = *((ebp - 0x58));
            ebx = *((ebp - 0x28));
            esi = *((ebp - 0x6c));
            *((esi + ebx)) = al;
        }
        *((ebp - 0x6c))++;
        eax = *((ebp - 0x30));
        *((ebp - 0x34)) = edx;
        eax = *((edx + eax));
        *((ebp - 0x58)) = al;
        edi = *((ebp - 0x40));
        esi = *((ebp - 0x60));
        al = (edi != 0) ? 1 : 0;
        dl = (esi == 0) ? 1 : 0;
        eax &= edx;
        if ((al & 1) != 0) {
            eax = *((ebp - 0x2c));
            if (*((ebp - 0x6c)) < eax) {
                edx = *((ebp - 0x28));
                ebx = *((ebp - 0x6c));
                *((ebx + edx)) = 0x5c;
            }
            *((ebp - 0x6c))++;
            esi = *((ebp - 0x2c));
            if (*((ebp - 0x6c)) < esi) {
                eax = *((ebp - 0x58));
                edx = *((ebp - 0x28));
                ebx = *((ebp - 0x6c));
                al >>= 6;
                al += 0x30;
                *((ebx + edx)) = al;
            }
            *((ebp - 0x6c))++;
            esi = *((ebp - 0x2c));
            if (*((ebp - 0x6c)) < esi) {
                eax = *((ebp - 0x58));
                edx = *((ebp - 0x28));
                ebx = *((ebp - 0x6c));
                al >>= 3;
                al &= 7;
                al += 0x30;
                *((ebx + edx)) = al;
            }
            *((ebp - 0x58)) &= 7;
            *((ebp - 0x6c))++;
            *((ebp - 0x58)) += 0x30;
        }
        edx = *((ebp - 0x34));
        edx++;
    }
    goto label_8;
label_16:
    esi = *((ebp - 0x30));
    eax = *((ebp - 0x34));
    if (*((eax + esi)) != 0) {
        goto label_0;
    }
label_17:
    ecx = *((ebp - 0x38));
    if (ecx == 0) {
        goto label_20;
    }
    ecx = *((ebp - 0x38));
    eax = *(ecx);
    if (al == 0) {
        goto label_20;
    }
    do {
        ebx = *((ebp - 0x2c));
        if (*((ebp - 0x6c)) < ebx) {
            esi = *((ebp - 0x28));
            edx = *((ebp - 0x6c));
            *((edx + esi)) = al;
        }
        *((ebp - 0x38))++;
        *((ebp - 0x6c))++;
        ecx = *((ebp - 0x38));
        eax = *(ecx);
    } while (al != 0);
label_20:
    ebx = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < ebx) {
        esi = *((ebp - 0x28));
        eax = *((ebp - 0x6c));
        *((eax + esi)) = 0;
    }
    eax = *((ebp - 0x6c));
    return eax;
label_19:
    *((ebp - 0x20)) = 0;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x5c)) = 0;
    *((ebp - 0x60)) = 1;
    if (*((ebp + 8)) == -1) {
        goto label_21;
    }
    do {
label_1:
        esi = ebp - 0x20;
        edx = ebp - 0x24;
        ebx = *((ebp - 0x34));
        esi = *((ebp - 0x5c));
        eax = *((ebp + 8));
        ebx += esi;
        eax -= ebx;
        eax = *((ebp - 0x30));
        eax += ebx;
        *((ebp - 0x64)) = eax;
        eax = mbrtowc (esi, eax, eax);
        edi = eax;
        if (eax == 0) {
            goto label_13;
        }
        if (eax == -1) {
            goto label_22;
        }
        if (eax == 0xfffffffe) {
            goto label_23;
        }
        eax = *((ebp - 0x24));
        esi = ebp - 0x20;
        eax = iswprint (eax);
        al = (eax != 0) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x5c)) += edi;
        eax = -eax;
        *((ebp - 0x60)) &= eax;
        eax = mbsinit (esi);
    } while (eax == 0);
    goto label_13;
label_21:
    ebx = *((ebp - 0x30));
    eax = strlen (ebx);
    *((ebp + 8)) = eax;
    goto label_1;
    eax = *((ebp - 0x34));
    if (eax == 0) {
        if (*((ebp + 0xc)) == 1) {
            goto label_24;
        }
    }
label_4:
    ebx = *((ebp - 0x40));
    ecx = *((ebp - 0x34));
    edx = ecx + 1;
    if (ebx == 0) {
        goto label_8;
    }
    eax = *((ebp - 0x58));
    ebx = *((ebp + 0x10));
    ecx = *((ebp - 0x58));
    al >>= 5;
    eax = (int32_t) al;
    eax = *((ebx + eax*4 + 4));
    ecx &= 0x1f;
    eax >>= cl;
    if ((al & 1) == 0) {
        goto label_8;
    }
label_3:
    eax = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < eax) {
        edx = *((ebp - 0x28));
        ecx = *((ebp - 0x6c));
        *((ecx + edx)) = 0x5c;
    }
    *((ebp - 0x6c))++;
    ebx = *((ebp - 0x34));
    edx = ebx + 1;
    do {
label_8:
        esi = *((ebp - 0x2c));
        if (*((ebp - 0x6c)) < esi) {
            eax = *((ebp - 0x58));
            ecx = *((ebp - 0x28));
            ebx = *((ebp - 0x6c));
            *((ebx + ecx)) = al;
        }
        *((ebp - 0x6c))++;
        *((ebp - 0x34)) = edx;
        goto label_2;
        eax = *((ebp - 0x58));
label_7:
        if (*((ebp + 0xc)) == 1) {
            goto label_24;
        }
label_5:
        ecx = *((ebp - 0x40));
        ebx = *((ebp - 0x34));
        edx = ebx + 1;
    } while (ecx == 0);
    *((ebp - 0x58)) = al;
    goto label_3;
    if (*((ebp + 0xc)) == 1) {
        goto label_24;
    }
    if (*((ebp + 0xc)) != 3) {
        goto label_4;
    }
    edx = *((ebp - 0x34));
    edx += 2;
    if (edx >= *((ebp + 8))) {
        goto label_4;
    }
    eax = *((ebp - 0x30));
    ecx = *((ebp - 0x34));
    if (*((ecx + eax + 1)) != 0x3f) {
        goto label_4;
    }
    ecx = *((ecx + eax + 2));
    eax = (int32_t) cl;
    eax -= 0x21;
    if (eax > 0x1d) {
        goto label_4;
    }
    /* switch table (30 cases) at 0x804a318 */
    if (*((ebp + 0xc)) == 1) {
        goto label_24;
    }
    if (*((ebp + 0xc)) != 2) {
        goto label_4;
    }
    esi = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < esi) {
        eax = *((ebp - 0x28));
        edx = *((ebp - 0x6c));
        *((edx + eax)) = 0x27;
    }
    *((ebp - 0x6c))++;
    ecx = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < ecx) {
        ebx = *((ebp - 0x28));
        esi = *((ebp - 0x6c));
        *((esi + ebx)) = 0x5c;
    }
    *((ebp - 0x6c))++;
    eax = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < eax) {
        edx = *((ebp - 0x28));
        ecx = *((ebp - 0x6c));
        *((ecx + edx)) = 0x27;
    }
label_15:
    *((ebp - 0x6c))++;
    goto label_4;
    al = 0x72;
    if (*((ebp + 0xc)) != 1) {
        goto label_5;
    }
label_24:
    edx = *((ebp + 0x10));
    edx = 2;
    ecx = *((ebp + 8));
    ecx = *((ebp - 0x30));
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x28));
    quotearg_buffer_restyled (ecx, edx, edx);
    goto label_6;
    return eax;
    al = 0x66;
    goto label_5;
    al = 0x76;
    goto label_5;
    al = 0x6e;
    goto label_7;
    al = 0x74;
    goto label_7;
    al = 0x62;
    goto label_5;
    al = 0x61;
    goto label_5;
    ebx = *((ebp - 0x40));
    eax = *((ebp - 0x34));
    edx = eax + 1;
    if (ebx == 0) {
        goto label_8;
    }
    edx = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < edx) {
        ecx = *((ebp - 0x28));
        ebx = *((ebp - 0x6c));
        *((ebx + ecx)) = 0x5c;
    }
    *((ebp - 0x6c))++;
    esi = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < esi) {
        eax = *((ebp - 0x28));
        edx = *((ebp - 0x6c));
        *((edx + eax)) = 0x30;
    }
    *((ebp - 0x6c))++;
    ecx = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < ecx) {
        ebx = *((ebp - 0x28));
        esi = *((ebp - 0x6c));
        *((esi + ebx)) = 0x30;
    }
    *((ebp - 0x6c))++;
    *((ebp - 0x58)) = 0x30;
    goto label_4;
    edx = *((ebp + 0xc));
    eax = 0x804a3be;
    eax = gettext_quote ();
    edx = *((ebp + 0xc));
    edi = eax;
    eax = 0x804a3c0;
    eax = gettext_quote ();
    *((ebp - 0x38)) = edi;
    edx = eax;
    if (*(edi) == 0) {
        goto label_25;
    }
    do {
        ebx = *((ebp - 0x2c));
        if (*((ebp - 0x6c)) < ebx) {
            esi = *((ebp - 0x38));
            ecx = *((ebp - 0x28));
            ebx = *((ebp - 0x6c));
            eax = *(esi);
            *((ebx + ecx)) = al;
        }
        *((ebp - 0x38))++;
        *((ebp - 0x6c))++;
        esi = *((ebp - 0x38));
    } while (*(esi) != 0);
label_25:
    *((ebp - 0x40)) = 1;
    *((ebp - 0x38)) = edx;
    eax = strlen (edx);
    *((ebp - 0x3c)) = eax;
    goto label_9;
    *((ebp - 0x40)) = 1;
    goto label_9;
    eax = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < eax) {
        edx = *((ebp - 0x28));
        *(edx) = 0x27;
    }
    *((ebp - 0x6c)) = 1;
    *((ebp - 0x38)) = 0x804a3c0;
    goto label_10;
label_22:
    *((ebp - 0x60)) = 0;
label_13:
    if (*((ebp - 0x5c)) <= 1) {
        goto label_11;
    }
    goto label_12;
label_23:
    *((ebp - 0x60)) = 0;
    if (ebx >= *((ebp + 8))) {
        goto label_13;
    }
    ecx = *((ebp - 0x64));
    if (*(ecx) == 0) {
        goto label_13;
    }
label_14:
    *((ebp - 0x5c))++;
    eax = *((ebp - 0x34));
    ebx = *((ebp - 0x5c));
    eax += ebx;
    if (eax >= *((ebp + 8))) {
        goto label_13;
    }
    ebx = *((ebp - 0x30));
    if (*((eax + ebx)) != 0) {
        goto label_14;
    }
    goto label_13;
    *((ebp - 0x58)) = cl;
    esi = *((ebp - 0x2c));
    *((ebp - 0x34)) = edx;
    if (*((ebp - 0x6c)) < esi) {
        eax = *((ebp - 0x28));
        edx = *((ebp - 0x6c));
        *((edx + eax)) = 0x3f;
    }
    *((ebp - 0x6c))++;
    ecx = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) < ecx) {
        ebx = *((ebp - 0x28));
        esi = *((ebp - 0x6c));
        *((esi + ebx)) = 0x5c;
    }
    *((ebp - 0x6c))++;
    eax = *((ebp - 0x2c));
    if (*((ebp - 0x6c)) >= eax) {
        goto label_15;
    }
    edx = *((ebp - 0x28));
    ecx = *((ebp - 0x6c));
    *((ecx + edx)) = 0x3f;
    goto label_15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048928 */
#include <stdint.h>
 
void ctype_get_mb_cur_max (void) {
    ctype_get_mb_cur_max ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80489a8 */
#include <stdint.h>
 
void ctype_b_loc (void) {
    ctype_b_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80488b8 */
#include <stdint.h>
 
void mbrtowc (void) {
    mbrtowc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048958 */
#include <stdint.h>
 
void iswprint (void) {
    iswprint ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048988 */
#include <stdint.h>
 
void mbsinit (void) {
    mbsinit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80488a8 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80495c0 */
#include <stdint.h>
 
uint32_t quotearg_n_options (int32_t arg_8h) {
    int32_t var_18h_2;
    int32_t var_14h_2;
    int32_t var_10h_2;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    void ** var_10h;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    *((ebp - 0x10)) = eax;
    *((ebp - 0x14)) = edx;
    *((ebp - 0x18)) = ecx;
    eax = errno_location ();
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x10));
    if (eax < 0) {
        goto label_0;
    }
    eax = *((ebp - 0x10));
    if (*(obj.nslots.1) > eax) {
        goto label_1;
    }
    esi = eax;
    esi++;
    if (esi > 0x1fffffff) {
        goto label_2;
    }
    ebx = *(obj.slotvec.3);
    while (1) {
        eax = esi*8;
        eax = xrealloc (ebx, eax);
        *(obj.slotvec.3) = eax;
        ebx = eax;
        eax = *(obj.nslots.1);
        edx = esi;
        edx -= eax;
        edi = ebx + eax*8;
        eax = edx*8;
        if (eax > 7) {
            if ((edi & 4) == 0) {
                goto label_3;
            }
            *(edi) = 0;
            eax -= 4;
            edi += 4;
        }
label_3:
        ecx = eax;
        ecx >>= 2;
        eax = 0;
        memset (edi, eax, ecx);
        *(obj.nslots.1) = esi;
label_1:
        edx = *((ebp - 0x10));
        eax = *(obj.slotvec.3);
        esi = *((eax + edx*8));
        edi = *((eax + edx*8 + 4));
        eax = *((ebp + 8));
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x14));
        eax = quotearg_buffer (eax, esi, eax);
        if (esi <= eax) {
            ebx = *(obj.slotvec.3);
            esi = eax + 1;
            edx = *((ebp - 0x10));
            *((ebx + edx*8)) = esi;
            if (edi != obj.slot0.0) {
                free (edi);
                ebx = *(obj.slotvec.3);
            }
            eax = xmalloc (esi);
            edi = eax;
            edx = *((ebp + 8));
            eax = *((ebp - 0x10));
            *((ebx + eax*8 + 4)) = edi;
            eax = *((ebp - 0x18));
            edx = *((ebp - 0x14));
            quotearg_buffer (edx, esi, edx);
        }
        errno_location ();
        edx = *((ebp - 0x1c));
        *(eax) = edx;
        eax = edi;
        return eax;
        eax = xmalloc (8);
        *(obj.slotvec.3) = eax;
        ebx = eax;
        edx = *(obj.slot0.0);
        eax = *(obj.slotvec0.2);
        *((ebx + 4)) = edx;
        *(ebx) = eax;
    }
label_0:
    abort ();
label_2:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049b20 */
#include <stdint.h>
 
int32_t xalloc_die (void) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    eax = xalloc_fail_func;
    while (1) {
        *(esp) = 0;
        ecx = xalloc_msg_memory_exhausted;
        eax = 5;
        eax = dcgettext (ecx, eax);
        *((esp + 0xc)) = eax;
        eax = 0;
        edx = 0x804a0bc;
        eax = *(obj.exit_failure);
        error (eax, eax, edx);
        eax = abort ();
        void (*eax)() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049cf0 */
#include <stdint.h>
 
int32_t xmalloc (size_t size) {
    eax = *((ebp + 8));
    eax = malloc (eax);
    if (eax != 0) {
        return eax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048868 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048908 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049af0 */
#include <stdint.h>
 
uint32_t version_etc (int32_t arg_8h, char * arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    char * var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    eax = ebp + 0x18;
    eax = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    version_etc_va (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80498d0 */
#include <stdint.h>
 
int32_t version_etc_va (int32_t arg_8h, char * arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_14h;
    int32_t var_10h;
    char * format;
    va_list ap;
    int32_t var_ch;
    int32_t var_sp_10h;
    ebx = 0;
    eax = *((ebp + 0x10));
    edi = *((ebp + 0x18));
    esi = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    ecx = *((ebp + 0xc));
    edx = edi + 4;
    *((ebp - 0x14)) = eax;
    eax = *(edi);
    if (eax == 0) {
        goto label_5;
    }
    do {
        eax = edx;
        ebx++;
        eax = *(eax);
        edx += 4;
    } while (eax != 0);
label_5:
    if (ecx == 0) {
        goto label_6;
    }
    eax = *((ebp - 0x14));
    *((esp + 0x10)) = eax;
    eax = *((ebp - 0x10));
    *((esp + 8)) = ecx;
    *(esp) = esi;
    eax = "%s (%s) %s\n";
    fprintf (eax, eax);
label_2:
    if (ebx <= 9) {
        /* switch table (10 cases) at 0x804a620 */
    }
    eax = 5;
    *((esp + 8)) = eax;
    eax = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    do {
label_0:
label_1:
        eax = dcgettext (0, eax);
        vfprintf (esi, eax, edi);
        eax = *((esi + 0x14));
        if (eax >= *((esi + 0x18))) {
            goto label_7;
        }
        *(eax) = 0xa;
        *((esi + 0x14))++;
label_4:
        *((esp + 4)) = esi;
        eax = *(obj.version_etc_copyright);
        *(esp) = eax;
        fputs_unlocked ();
        eax = *((esi + 0x14));
        if (eax >= *((esi + 0x18))) {
            goto label_8;
        }
        *(eax) = 0xa;
        *((esi + 0x14))++;
label_3:
        *((ebp + 0xc)) = esi;
        edx = 5;
        eax = "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n";
        *((esp + 8)) = edx;
        eax = dcgettext (0, eax);
        *((ebp + 8)) = eax;
        void (*0x80487f8)() ();
        eax = 5;
        *((esp + 8)) = eax;
        eax = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    } while (1);
    eax = 5;
    *((esp + 8)) = eax;
    eax = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
    goto label_0;
    ecx = 5;
    edx = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
    *((esp + 8)) = ecx;
    *((esp + 4)) = edx;
    goto label_1;
    eax = 5;
    ebx = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
    *((esp + 8)) = eax;
    *((esp + 4)) = ebx;
    goto label_1;
    eax = 5;
    *((esp + 8)) = eax;
    eax = "Written by %s, %s, %s,\n%s, and %s.\n";
    goto label_0;
    eax = 5;
    *((esp + 8)) = eax;
    eax = "Written by %s, %s, %s,\nand %s.\n";
    goto label_0;
    edx = 5;
    eax = "Written by %s, %s, and %s.\n";
    *((esp + 8)) = edx;
    goto label_0;
    ebx = 5;
    ecx = "Written by %s and %s.\n";
    *((esp + 8)) = ebx;
    *((esp + 4)) = ecx;
    goto label_1;
    eax = 5;
    *((esp + 8)) = eax;
    eax = "Written by %s.\n";
    goto label_0;
    abort ();
label_6:
    eax = *((ebp - 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x10));
    *(esp) = esi;
    eax = "%s %s\n";
    fprintf (eax, eax);
    goto label_2;
label_8:
    *(esp) = esi;
    ecx = 0xa;
    *((esp + 4)) = ecx;
    overflow ();
    goto label_3;
label_7:
    *(esp) = esi;
    ebx = 0xa;
    *((esp + 4)) = ebx;
    overflow ();
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80498b0 */
#include <stdint.h>
 
int32_t quotearg (int32_t arg_8h) {
    int32_t var_4h;
    eax = *((ebp + 8));
    quotearg_n (0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049890 */
#include <stdint.h>
 
int32_t quotearg_n (int32_t arg_8h, int32_t arg_ch) {
    ecx = 0xffffffff;
    eax = *((ebp + 8));
    *((ebp + 8)) = 0x804b920;
    edx = *((ebp + 0xc));
    return quotearg_n_options ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049750 */
#include <stdint.h>
 
int32_t quotearg_char (void) {
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch_2;
    int32_t var_18h_2;
    int32_t var_4h_2;
    int32_t var_8h_2;
    int32_t var_4h;
    int32_t var_8h;
    ebx = ebp - 0x38;
    edx = *((ebp + 0xc));
    eax = default_quoting_options;
    *((ebp - 0x38)) = eax;
    eax = .comment;
    *((ebp - 0x34)) = eax;
    eax = .comment;
    *((ebp - 0x30)) = eax;
    eax = .comment;
    *((ebp - 0x2c)) = eax;
    eax = .comment;
    *((ebp - 0x28)) = eax;
    eax = .comment;
    *((ebp - 0x24)) = eax;
    eax = .comment;
    *((ebp - 0x20)) = eax;
    eax = .comment;
    *((ebp - 0x1c)) = eax;
    eax = .comment;
    *((ebp - 0x18)) = eax;
    eax = 1;
    eax = set_char_quoting (ebx, edx, eax);
    ecx = 0xffffffff;
    eax = 0;
    edx = *((ebp + 8));
    quotearg_n_options (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048a80 */
#include <stdint.h>
 
int32_t usage (int32_t status) {
    int32_t var_4h;
    int32_t var_8h;
    edx = 5;
    eax = "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n";
    *((esp + 8)) = edx;
    eax = dcgettext (0, eax);
    *(esp) = eax;
    edx = program_name;
    *((esp + 8)) = edx;
    printf (edx);
    *(esp) = 0;
    eax = 5;
    eax = "      --help     display this help and exit\n";
    eax = dcgettext (eax, eax);
    *(esp) = eax;
    edx = stdout;
    *((esp + 4)) = edx;
    fputs_unlocked ();
    *(esp) = 0;
    eax = 5;
    eax = "      --version  output version information and exit\n";
    eax = dcgettext (eax, eax);
    *(esp) = eax;
    edx = stdout;
    *((esp + 4)) = edx;
    fputs_unlocked ();
    *(esp) = 0;
    ecx = "\nReport bugs to <%s>.\n";
    eax = 5;
    eax = dcgettext (ecx, eax);
    *(esp) = eax;
    edx = "bug-coreutils@gnu.org";
    printf (edx);
    eax = *((ebp + 8));
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80488f8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80487f8 */
#include <stdint.h>
 
void fputs_unlocked (void) {
    fputs_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048938 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049d80 */
#include <stdint.h>
 
int32_t xnmalloc (int32_t arg_8h, int32_t arg_ch) {
    edx = 0;
    eax = 0xffffffff;
    ebx = *((ebp + 0xc));
    ecx = *((ebp + 8));
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    if (eax >= ecx) {
        ecx *= ebx;
        eax = malloc (ecx);
        if (eax == 0) {
            goto label_0;
        }
        return eax;
    }
label_0:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049e88 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049ef4 */
#include <stdint.h>
 
uint32_t fini (void) {
    /* [14] -r-x section size 26 named .fini */
    eax = void (*0x8049efd)(uint32_t) (ebx);
    ebx += 0x1847;
    _do_global_dtors_aux (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048c80 */
#include <stdint.h>
 
int32_t close_stdout (void) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    int32_t var_10h;
    edx = stdout;
    eax = *(edx);
    eax >>= 5;
    eax &= 1;
    ebx -= ebx;
    if (ebx != 0) {
        *(esp) = edx;
        eax = fpending ();
        if (eax == 0) {
            goto label_0;
        }
        edx = stdout;
    }
    eax = fclose (edx);
    if (eax != 0) {
        eax = errno_location ();
        ebx = *(eax);
    }
    if (ebx >= 0) {
        *(esp) = 0;
        esi = 5;
        ecx = "write error";
        eax = dcgettext (ecx, esi);
        esi = eax;
        eax = file_name;
        if (eax == 0) {
            goto label_1;
        }
        eax = quotearg_colon (eax);
        *((esp + 0xc)) = eax;
        eax = *(obj.exit_failure);
        edx = "%s: %s";
        *((esp + 0x10)) = esi;
        error (eax, ebx, edx);
    }
label_0:
    return eax;
label_1:
    *((esp + 0xc)) = esi;
    eax = 0x804a0bc;
    eax = *(obj.exit_failure);
    error (eax, ebx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049ca0 */
#include <stdint.h>
 
int32_t xnrealloc (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_8h_3;
    int32_t var_4h_2;
    size_t size;
    int32_t var_8h;
    int32_t var_4h;
    edx = 0;
    *((ebp - 4)) = esi;
    esi = *((ebp + 0x10));
    eax = 0xffffffff;
    *((ebp - 8)) = ebx;
    ecx = *((ebp + 0xc));
    ebx = *((ebp + 8));
    eax = edx:eax / esi;
    edx = edx:eax % esi;
    if (eax >= ecx) {
        ecx *= esi;
        eax = realloc (ebx, ecx);
        if (eax == 0) {
            goto label_0;
        }
        ebx = *((ebp - 8));
        esi = *((ebp - 4));
        return eax;
    }
label_0:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80488d8 */
#include <stdint.h>
 
void realloc (void) {
    realloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049dc0 */
#include <stdint.h>
 
uint32_t libc_csu_fini (void) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 0xc)) = ebx;
    _i686_get_pc_thunk_bx ();
    ebx += 0x1976;
    *((ebp - 4)) = edi;
    eax = ebx - 0xe4;
    edi = ebx - 0xe4;
    *((ebp - 8)) = esi;
    eax -= edi;
    eax >>= 2;
    esi = eax - 1;
    if (eax != 0) {
        goto label_0;
    }
    _fini ();
    ebx = *((ebp - 0xc));
    esi = *((ebp - 8));
    edi = *((ebp - 4));
    return eax;
    do {
label_0:
        uint32_t (*edi + esi*4)() ();
        eax = esi;
        esi--;
    } while (eax != 0);
    _fini ();
    ebx = *((ebp - 0xc));
    esi = *((ebp - 8));
    edi = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049830 */
#include <stdint.h>
 
int32_t quotearg_n_style (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_38h;
    ebx = ebp - 0x38;
    edx = *((ebp + 0xc));
    eax = ebx;
    quoting_options_from_style (ebx);
    ecx = 0xffffffff;
    edx = *((ebp + 0x10));
    eax = *((ebp + 8));
    quotearg_n_options (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049560 */
#include <stdint.h>
 
uint32_t quotearg_buffer (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    *((ebp - 4)) = edi;
    edi = *((ebp + 0x18));
    *((ebp - 0xc)) = ebx;
    *((ebp - 8)) = esi;
    while (1) {
        eax = errno_location ();
        esi = *(eax);
        ebx = eax;
        eax = *(edi);
        eax = *((ebp + 0x14));
        ecx = *((ebp + 0x10));
        edx = *((ebp + 0xc));
        eax = *((ebp + 8));
        quotearg_buffer_restyled (eax, eax, edi);
        *(ebx) = esi;
        ebx = *((ebp - 0xc));
        esi = *((ebp - 8));
        edi = *((ebp - 4));
        return eax;
        edi = default_quoting_options;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80487b0 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048d70 */
#include <stdint.h>
 
int32_t set_quoting_style (int32_t arg_8h, int32_t arg_ch) {
    edx = *((ebp + 8));
    if (edx != 0) {
        eax = *((ebp + 0xc));
        *(edx) = eax;
        return eax;
    }
    edx = default_quoting_options;
    eax = *((ebp + 0xc));
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049800 */
#include <stdint.h>
 
int32_t quotearg_n_style_mem (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_38h;
    ebx = ebp - 0x38;
    edx = *((ebp + 0xc));
    eax = ebx;
    quoting_options_from_style (ebx);
    ecx = *((ebp + 0x14));
    edx = *((ebp + 0x10));
    eax = *((ebp + 8));
    quotearg_n_options (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048d50 */
#include <stdint.h>
 
int32_t get_quoting_style (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax != 0) {
        eax = *(eax);
        return eax;
    }
    eax = default_quoting_options;
    eax = *(eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049b80 */
#include <stdint.h>
 
int32_t xcalloc (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h_4;
    int32_t var_8h_5;
    int32_t var_ch_5;
    int32_t var_ch_4;
    size_t size;
    edx = 0;
    eax = 0xffffffff;
    ecx = *((ebp + 0xc));
    ebx = *((ebp + 8));
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    if (eax >= ebx) {
        eax = calloc (ebx, ecx);
        if (eax == 0) {
            goto label_0;
        }
        return eax;
    }
label_0:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048948 */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049bc0 */
#include <stdint.h>
 
int32_t xrealloc (void) {
    void * ptr;
    int32_t var_ch;
    size_t size;
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    eax = realloc (edx, eax);
    if (eax != 0) {
        return eax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048e00 */
#include <stdint.h>
 
uint32_t clone_quoting_options (void ** arg_8h) {
    eax = errno_location ();
    esi = *(eax);
    ebx = eax;
    eax = xmalloc (0x24);
    edx = *((ebp + 8));
    ecx = eax;
    while (1) {
        eax = *(edx);
        *(ecx) = eax;
        eax = *((edx + 4));
        *((ecx + 4)) = eax;
        eax = *((edx + 8));
        *((ecx + 8)) = eax;
        eax = *((edx + 0xc));
        *((ecx + 0xc)) = eax;
        eax = *((edx + 0x10));
        *((ecx + 0x10)) = eax;
        eax = *((edx + 0x14));
        *((ecx + 0x14)) = eax;
        eax = *((edx + 0x18));
        *((ecx + 0x18)) = eax;
        eax = *((edx + 0x1c));
        *((ecx + 0x1c)) = eax;
        eax = *((edx + 0x20));
        *((ecx + 0x20)) = eax;
        eax = ecx;
        *(ebx) = esi;
        return eax;
        edx = default_quoting_options;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049e30 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 0xc)) = ebx;
    *((ebp - 8)) = esi;
    esi = 0;
    _i686_get_pc_thunk_bx ();
    ebx += 0x1901;
    *((ebp - 4)) = edi;
    _init ();
    edx = ebx - 0xe4;
    eax = ebx - 0xe4;
    edx -= eax;
    edx >>= 2;
    if (esi >= edx) {
        goto label_0;
    }
    *((ebp - 0x10)) = eax;
    edi = edx;
    do {
        uint32_t (*eax + esi*4)() ();
        esi++;
        eax = *((ebp - 0x10));
    } while (esi < edi);
label_0:
    ebx = *((ebp - 0xc));
    esi = *((ebp - 8));
    edi = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048b60 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    char * dirname;
    int32_t var_sp_8h;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    int32_t var_14h;
    *((ebp - 0xc)) = ebx;
    ebx = *((ebp + 0xc));
    *((ebp - 8)) = esi;
    *((ebp - 4)) = edi;
    eax = *(ebx);
    *(obj.program_name) = eax;
    eax = 0x804a03c;
    setlocale (6, eax);
    eax = "/usr/share/locale";
    bindtextdomain (0x804a09d, eax);
    textdomain (0x804a09d);
    atexit (sym.close_stdout);
    while (eax != 0) {
label_0:
        exit (0);
        eax = getenv ("POSIXLY_CORRECT");
    }
    eax = *((ebx + 4));
    edi = "--help";
    *((ebp - 0x10)) = eax;
    esi = *((ebp - 0x10));
    eax = 7;
    ecx = 7;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (eax == 0) {
        goto label_1;
    }
    esi = *((ebp - 0x10));
    eax = 0xa;
    edi = "--version";
    ecx = eax;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (eax != 0) {
        goto label_0;
    }
    eax = 0;
    edi = "Jim Meyering";
    esi = "5.2.1";
    eax = stdout;
    ebx = "GNU coreutils";
    ecx = "true";
    version_etc (eax, ecx, ebx);
    goto label_0;
label_1:
    return usage (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049860 */
#include <stdint.h>
 
int32_t quotearg_style (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    quotearg_n_style (0, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049c30 */
#include <stdint.h>
 
int32_t x2nrealloc (void) {
    int32_t var_ch_6;
    int32_t var_8h_4;
    int32_t var_8h_5;
    int32_t var_ch_5;
    int32_t var_ch_4;
    int32_t var_8h_3;
    int32_t var_bp_4h;
    int32_t var_8h_2;
    int32_t var_ch_3;
    int32_t var_10h;
    *((ebp - 4)) = edi;
    edi = *((ebp + 8));
    *((ebp - 8)) = esi;
    esi = *((ebp + 0xc));
    *((ebp - 0xc)) = ebx;
    ecx = *(esi);
    ebx = *((ebp + 0x10));
    if (edi == 0) {
        goto label_1;
    }
    edx = 0;
    eax = 0x7fffffff;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    if (eax < ecx) {
        goto label_2;
    }
    ecx += ecx;
    do {
label_0:
        *(esi) = ecx;
        ecx *= ebx;
        *((ebp + 8)) = edi;
        ebx = *((ebp - 0xc));
        esi = *((ebp - 8));
        edi = *((ebp - 4));
        *((ebp + 0xc)) = ecx;
        void (*0x8049bc0)() ();
label_1:
    } while (ecx != 0);
    edx = 0;
    eax = 0x40;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ecx = eax;
    eax = 0;
    al = (ecx == 0) ? 1 : 0;
    ecx += eax;
    goto label_0;
label_2:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049d50 */
#include <stdint.h>
 
uint32_t xzalloc (size_t size) {
    int32_t c;
    size_t n;
    ebx = *((ebp + 8));
    eax = xmalloc (ebx);
    edx = 0;
    memset (eax, edx, ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048978 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80497e0 */
#include <stdint.h>
 
int32_t quotearg_colon (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0x3a;
    eax = *((ebp + 8));
    quotearg_char (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049e90 */
#include <stdint.h>
 
int32_t atexit (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = 0;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x18a6;
    edx = *((ebx - 8));
    if (edx != 0) {
        eax = *(edx);
    }
    *((esp + 8)) = eax;
    eax = 0;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    cxa_atexit ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048848 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048c70 */
#include <stdint.h>
 
int32_t close_stdout_set_file_name (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(obj.file_name) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049bf0 */
#include <stdint.h>
 
int32_t x2realloc (void) {
    int32_t var_8h_5;
    int32_t var_ch_5;
    int32_t var_ch_2;
    int32_t var_4h;
    ecx = *((ebp + 8));
    edx = *((ebp + 0xc));
    eax = *(edx);
    if (ecx == 0) {
        goto label_1;
    }
    if (eax < 0) {
        goto label_2;
    }
    eax += eax;
    do {
label_0:
        *(edx) = eax;
        *((ebp + 0xc)) = eax;
        *((ebp + 8)) = ecx;
        void (*0x8049bc0)() ();
label_1:
    } while (eax != 0);
    eax = 0x40;
    goto label_0;
label_2:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048d90 */
#include <stdint.h>
 
int32_t set_char_quoting (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((ebp + 8));
    ebx = *((ebp + 0x10));
    ecx = *((ebp + 0xc));
    dl = cl;
    dl >>= 5;
    edx = (int32_t) dl;
    edx <<= 2;
    esi = edx + eax + 4;
    if (eax != 0) {
        edx = *(esi);
        ecx &= 0x1f;
        ebx &= 1;
        eax = edx;
        eax >>= cl;
        eax &= 1;
        ebx ^= eax;
        ebx <<= cl;
        edx ^= ebx;
        *(esi) = edx;
        esi = ebx;
        return eax;
    }
    esi = edx + 0x804b924;
    edx = *(esi);
    ecx &= 0x1f;
    ebx &= 1;
    eax = edx;
    eax >>= cl;
    eax &= 1;
    ebx ^= eax;
    ebx <<= cl;
    edx ^= ebx;
    *(esi) = edx;
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8049d20 */
#include <stdint.h>
 
uint32_t xclone (void) {
    void ** var_bp_8h;
    size_t size;
    void * s2;
    size_t n;
    ebx = *((ebp + 0xc));
    eax = xmalloc (ebx);
    edx = *((ebp + 8));
    memcpy (eax, edx, ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80487d8 */
#include <stdint.h>
 
void fpending (void) {
    fpending ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80487e8 */
#include <stdint.h>
 
void overflow (void) {
    overflow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048808 */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048818 */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048838 */
#include <stdint.h>
 
void setlocale (void) {
    setlocale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048858 */
#include <stdint.h>
 
void errno_location (void) {
    errno_location ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048878 */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048888 */
#include <stdint.h>
 
void vfprintf (void) {
    vfprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048898 */
#include <stdint.h>
 
void bindtextdomain (void) {
    bindtextdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x80488e8 */
#include <stdint.h>
 
void textdomain (void) {
    textdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048918 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048968 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/true/ia32_elf_from_suse/subject.exe @ 0x8048998 */
#include <stdint.h>
 
void error (void) {
    error ();
}
