/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4010e0 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    eax = GetVersion (edi, esi, ebx);
    edx = 0;
    dl = ah;
    *(0x40892c) = edx;
    ecx = eax;
    ecx &= 0xff;
    *(0x408928) = ecx;
    ecx <<= 8;
    ecx += edx;
    *(0x408924) = ecx;
    eax >>= 0x10;
    *(0x408920) = eax;
    eax = fcn_00402b80 ();
    if (eax == 0) {
        fcn_00401200 (0x1c);
    }
    *((ebp - 4)) = 0;
    fcn_00402980 ();
    fcn_00402970 ();
    eax = GetCommandLineA ();
    *(0x409d04) = eax;
    eax = fcn_00402540 ();
    *(0x4088f8) = eax;
    if (eax != 0) {
        eax = *(0x409d04);
        if (eax != 0) {
            goto label_0;
        }
    }
    fcn_00401f00 (0xffffffffffffffff);
label_0:
    fcn_00402290 ();
    fcn_004021a0 ();
    fcn_00401ed0 ();
    eax = *(0x40893c);
    *(0x408940) = eax;
    eax = *(0x408934);
    ecx = *(0x408930);
    eax = fcn_00401000 (ecx);
    *((ebp - 0x1c)) = eax;
    fcn_00401f00 (eax);
    *((ebp - 4)) = 0xffffffff;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4010a0 */
#include <stdint.h>
 
uint32_t fcn_004010a0 (int32_t arg_10h, int32_t arg_10h_2) {
    eax = fcn_00401230 (0x406098);
    ecx = *((esp + 0x10));
    esi = eax;
    eax = fcn_00401330 (0x406098, ecx, esp + 0x10);
    edi = eax;
    fcn_004012d0 (esi, 0x406098);
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401230 */
#include <stdint.h>
 
int32_t fcn_00401230 (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = *((esi + 0x10));
    eax = fcn_00403060 (eax);
    if (eax != 0) {
        if (esi == 0x406098) {
            edi = 0;
        } else {
            if (esi != 0x4060b8) {
                goto label_0;
            }
            edi = 1;
        }
        ecx = *(0x408910);
        ecx++;
        *(0x408910) = ecx;
        eax = *((esi + 0xc));
        if ((eax & 0x10c) != 0) {
            goto label_0;
        }
        eax = *((edi*4 + 0x408908));
        if (eax == 0) {
            eax = fcn_00402fb0 (0x1000);
            *((edi*4 + 0x408908)) = eax;
            if (eax == 0) {
                goto label_0;
            }
        }
        eax = *((edi*4 + 0x408908));
        *((esi + 0x18)) = 0x1000;
        *((esi + 8)) = eax;
        *(esi) = eax;
        eax = *((esi + 0xc));
        *((esi + 4)) = 0x1000;
        eax |= 0x1102;
        *((esi + 0xc)) = eax;
        eax = 1;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401330 */
#include <stdint.h>
 
int32_t fcn_00401330 (int32_t arg_260h, int32_t arg_264h, int32_t arg_268h) {
    int32_t var_14h_2;
    int32_t var_18h_2;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_2ah;
    int32_t var_23h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_3ch;
    int32_t var_40h;
    int32_t var_44h;
    int32_t var_48h;
    int32_t var_4ch;
    int32_t var_50h;
    int32_t var_68h;
    uint32_t var_5ch;
    int32_t var_5dh;
    edi = *((esp + 0x264));
    ecx = 0;
    ebp = 0;
    *((esp + 0x1c)) = ecx;
    bl = *(edi);
    edi++;
    *((esp + 0x40)) = bl;
    *((esp + 0x264)) = edi;
    if (bl == 0) {
        goto label_2;
    }
    esi = *((esp + 0x28));
    goto label_3;
label_0:
    esi = *((esp + 0x28));
    ecx = *((esp + 0x3c));
label_3:
    eax = *((esp + 0x1c));
    edx = 0;
    if (eax < edx) {
        goto label_2;
    }
    if (bl >= 0x20) {
        if (bl <= 0x78) {
            eax = (int32_t) bl;
            al = *((eax + 0x404ff0));
            eax &= 0xf;
        }
    } else {
        eax = 0;
    }
    eax = *((ecx + eax*8 + 0x405010));
    eax >>= 4;
    *((esp + 0x3c)) = eax;
    if (eax > 7) {
        goto label_4;
    }
    /* switch table (8 cases) at 0x401bac */
    *((esp + 0x44)) = edx;
    *((esp + 0x34)) = edx;
    *((esp + 0x28)) = edx;
    *((esp + 0x24)) = edx;
    *((esp + 0x10)) = edx;
    *((esp + 0x18)) = 0xffffffff;
    *((esp + 0x2c)) = edx;
    goto label_4;
    eax = (int32_t) bl;
    eax += 0xffffffe0;
    if (eax > 0x10) {
        goto label_4;
    }
    ecx = 0;
    cl = *((eax + 0x401be4));
    /* switch table (6 cases) at 0x401bcc */
    eax = *((esp + 0x10));
    al |= 4;
    *((esp + 0x10)) = eax;
    goto label_4;
    eax = *((esp + 0x10));
    al |= 1;
    *((esp + 0x10)) = eax;
    goto label_4;
    eax = *((esp + 0x10));
    al |= 2;
    *((esp + 0x10)) = eax;
    goto label_4;
    eax = *((esp + 0x10));
    al |= 0x80;
    *((esp + 0x10)) = eax;
    goto label_4;
    eax = *((esp + 0x10));
    al |= 8;
    *((esp + 0x10)) = eax;
    goto label_4;
    if (bl == 0x2a) {
        eax = fcn_00401d90 (esp + 0x268);
        *((esp + 0x28)) = eax;
        if (eax >= 0) {
            goto label_4;
        }
        edx = *((esp + 0x10));
        edx |= 4;
        eax = -eax;
        *((esp + 0x10)) = edx;
        *((esp + 0x28)) = eax;
        goto label_4;
    }
    ecx = (int32_t) bl;
    eax = esi * 5;
    edx = ecx + eax*2 - 0x30;
    *((esp + 0x28)) = edx;
    goto label_4;
    *((esp + 0x18)) = edx;
    goto label_4;
    if (bl == 0x2a) {
        eax = fcn_00401d90 (esp + 0x268);
        *((esp + 0x18)) = eax;
        if (eax >= 0) {
            goto label_4;
        }
        *((esp + 0x18)) = 0xffffffff;
        goto label_4;
    }
    eax = *((esp + 0x18));
    edx = (int32_t) bl;
    ecx = eax * 5;
    eax = edx + ecx*2 - 0x30;
    *((esp + 0x18)) = eax;
    goto label_4;
    eax = (int32_t) bl;
    eax += 0xffffffb7;
    if (eax > 0x2e) {
        goto label_4;
    }
    ecx = 0;
    cl = *((eax + 0x401c0c));
    /* switch table (5 cases) at 0x401bf8 */
    eax = *((esp + 0x10));
    al |= 0x10;
    *((esp + 0x10)) = eax;
    goto label_4;
    if (*(edi) == 0x36) {
        if (*((edi + 1)) != 0x34) {
            goto label_5;
        }
        eax = *((esp + 0x10));
        edi += 2;
        ah |= 0x80;
        *((esp + 0x264)) = edi;
        *((esp + 0x10)) = eax;
        goto label_4;
    }
label_5:
    *((esp + 0x3c)) = edx;
    eax = *(0x406540);
    *((esp + 0x2c)) = edx;
    edx = *((esp + 0x40));
    edx &= 0xff;
    if ((*((eax + edx*2 + 1)) & 0x80) != 0) {
        edx = *((esp + 0x260));
        ecx = esp + 0x1c;
        eax = (int32_t) bl;
        fcn_00401cc0 (eax, edx, ecx);
        bl = *(edi);
        edi++;
        *((esp + 0x264)) = edi;
    }
    edx = *((esp + 0x260));
    ecx = esp + 0x1c;
    eax = (int32_t) bl;
    fcn_00401cc0 (eax, edx, ecx);
    goto label_4;
    eax = *((esp + 0x10));
    al |= 0x20;
    *((esp + 0x10)) = eax;
    goto label_4;
    eax = *((esp + 0x10));
    ah |= 8;
    *((esp + 0x10)) = eax;
    goto label_4;
    eax = (int32_t) bl;
    eax += 0xffffffbd;
    if (eax > 0x35) {
        goto label_6;
    }
    ecx = 0;
    cl = *((eax + 0x401c80));
    /* switch table (17 cases) at 0x401c3c */
    eax = *((esp + 0x10));
    if ((eax & 0x830) == 0) {
        ah |= 8;
        *((esp + 0x10)) = eax;
    }
    if ((*((esp + 0x10)) & 0x810) != 0) {
        eax = fcn_00401dd0 (esp + 0x268);
        eax = fcn_004031e0 (esp + 0x60, eax);
        if (ebp >= 0) {
            goto label_7;
        }
        edx = esp + 0x5c;
        *((esp + 0x34)) = 1;
        *((esp + 0x14)) = edx;
        goto label_6;
    }
    al = fcn_00401d90 (esp + 0x268);
    *((esp + 0x5c)) = al;
label_7:
    edx = esp + 0x5c;
    *((esp + 0x14)) = edx;
    goto label_6;
    eax = fcn_00401d90 (esp + 0x268);
    if (eax != 0) {
        ecx = *((eax + 4));
        if (ecx == 0) {
            goto label_8;
        }
        edx = *((esp + 0x10));
        if ((dh & 8) != 0) {
            ebp = *(eax);
            *((esp + 0x14)) = ecx;
            *((esp + 0x2c)) = 1;
            ebp >>= 1;
            goto label_6;
        }
        ebp = *(eax);
        *((esp + 0x2c)) = 0;
        *((esp + 0x14)) = ecx;
        goto label_6;
    }
label_8:
    edi = *(str._null_);
    ecx |= 0xffffffff;
    eax = 0;
    *((esp + 0x14)) = edi;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    goto label_6;
    eax = *((esp + 0x10));
    if ((eax & 0x830) == 0) {
        ah |= 8;
        *((esp + 0x10)) = eax;
    }
    eax = *((esp + 0x18));
    esi = 0x7fffffff;
    if (eax != -1) {
        esi = eax;
    }
    eax = fcn_00401d90 (esp + 0x268);
    ecx = eax;
    eax = *((esp + 0x14));
    *((esp + 0x14)) = ecx;
    if ((eax & 0x810) == 0) {
        goto label_9;
    }
    if (ecx == 0) {
        ecx = *(0x406074);
        *((esp + 0x14)) = ecx;
    }
    edx = esi;
    esi--;
    *((esp + 0x2c)) = 1;
    eax = ecx;
    if (edx == 0) {
        goto label_10;
    }
    do {
        if (*(eax) == 0) {
            goto label_10;
        }
        eax += 2;
        edx = esi;
        esi--;
    } while (edx != 0);
label_10:
    eax -= ecx;
    eax >>= 1;
    goto label_6;
label_9:
    if (ecx == 0) {
        ecx = *(str._null_);
        *((esp + 0x14)) = ecx;
    }
    edx = esi;
    esi--;
    eax = ecx;
    if (edx == 0) {
        goto label_11;
    }
    do {
        if (*(eax) == 0) {
            goto label_11;
        }
        eax++;
        edx = esi;
        esi--;
    } while (edx != 0);
label_11:
    eax -= ecx;
    goto label_6;
    fcn_00401d90 (esp + 0x268);
    cl = *((esp + 0x14));
    if ((cl & 0x20) != 0) {
        cx = *((esp + 0x1c));
        *((esp + 0x34)) = 1;
        *(eax) = cx;
        goto label_6;
    }
    edx = *((esp + 0x1c));
    *((esp + 0x34)) = 1;
    *(eax) = edx;
    goto label_6;
    *((esp + 0x44)) = 1;
    bl += 0x20;
    edx = *((esp + 0x10));
    eax = esp + 0x5c;
    *((esp + 0x14)) = eax;
    eax = *((esp + 0x18));
    edx |= 0x40;
    *((esp + 0x10)) = edx;
    if (eax < 0) {
        *((esp + 0x18)) = 6;
        if (eax != 0) {
        } else {
            goto label_12;
        }
        if (bl != 0x67) {
            goto label_12;
        }
    }
label_12:
    eax = *((esp + 0x268));
    edi = *((esp + 0x18));
    eax += 8;
    ecx = *((eax - 8));
    edx = *((eax - 4));
    eax = *((esp + 0x44));
    ecx = (int32_t) bl;
    edx = esp + 0x64;
    eax = esp + 0x58;
    uint32_t (*0x406528)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (1, edx, ecx, edi, eax);
    esi = *((esp + 0x24));
    esi &= 0x80;
    if (esi != 0) {
        if (edi != 0) {
            goto label_13;
        }
        uint32_t (*0x406534)(uint32_t) (esp + 0x5c);
    }
label_13:
    if (bl == 0x67) {
        if (esi != 0) {
            goto label_14;
        }
        uint32_t (*0x40652c)(uint32_t) (esp + 0x5c);
    }
label_14:
    if (*((esp + 0x5c)) == 0x2d) {
        eax = *((esp + 0x10));
        ah |= 1;
        *((esp + 0x10)) = eax;
        eax = esp + 0x5d;
        *((esp + 0x14)) = eax;
    }
    edi = *((esp + 0x14));
    ecx |= 0xffffffff;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    goto label_6;
    eax = *((esp + 0x10));
    *((esp + 0x30)) = 0xa;
    al |= 0x40;
    *((esp + 0x10)) = eax;
    goto label_15;
    *((esp + 0x30)) = 0xa;
    goto label_15;
    *((esp + 0x18)) = 8;
    *((esp + 0x38)) = 7;
    goto label_16;
    *((esp + 0x38)) = 0x27;
label_16:
    al = *((esp + 0x10));
    *((esp + 0x30)) = 0x10;
    if ((al & 0x80) != 0) {
        cl = *((esp + 0x38));
        *((esp + 0x22)) = 0x30;
        cl += 0x51;
        *((esp + 0x24)) = 2;
        *((esp + 0x23)) = cl;
        goto label_15;
        al = *((esp + 0x10));
        *((esp + 0x30)) = 8;
        if ((al & 0x80) == 0) {
            goto label_15;
        }
        eax = *((esp + 0x10));
        ah |= 2;
        *((esp + 0x10)) = eax;
    }
label_15:
    ebx = *((esp + 0x10));
    if ((bh & 0x80) != 0) {
        fcn_00401db0 (esp + 0x268);
    } else {
        if ((bl & 0x20) != 0) {
            if ((bl & 0x40) != 0) {
                ax = fcn_00401d90 (esp + 0x268);
                eax = (int32_t) ax;
                edx:eax = (int64_t) eax;
            } else {
            }
            eax = fcn_00401d90 (esp + 0x268);
            eax &= 0xffff;
            edx:eax = (int64_t) eax;
        } else {
            if ((bl & 0x40) != 0) {
                fcn_00401d90 (esp + 0x268);
                edx:eax = (int64_t) eax;
            } else {
                eax = fcn_00401d90 (esp + 0x268);
                edx = 0;
            }
        }
    }
    if ((bl & 0x40) != 0) {
        if (edx <= 0) {
            if (edx >= 0) {
                if (eax >= 0) {
                    goto label_17;
                }
            }
            eax = -eax;
            edx += 0;
            esi = eax;
            edx = -edx;
            bh |= 1;
            edi = edx;
            *((esp + 0x10)) = ebx;
        }
    } else {
label_17:
        esi = eax;
        edi = edx;
    }
    if ((bh & 0x80) == 0) {
        edi = 0;
    }
    ecx = *((esp + 0x18));
    if (ecx < 0) {
        ecx = 1;
    } else {
        ebx &= 0xfffffff7;
        *((esp + 0x10)) = ebx;
    }
    edx = esi;
    edx |= edi;
    if (edx == 0) {
        *((esp + 0x24)) = 0;
    }
    eax = esp + 0x25b;
    *((esp + 0x14)) = eax;
    do {
        edx = ecx;
        ecx--;
        *((esp + 0x18)) = ecx;
        if (edx <= 0) {
            ecx = esi;
            ecx |= edi;
            if (ecx == 0) {
                goto label_18;
            }
        }
        eax = *((esp + 0x30));
        edx:eax = (int64_t) eax;
        eax = fcn_004032d0 (esi, edi, ebp);
        edx = *((esp + 0x58));
        ebx = eax;
        ebx += 0x30;
        eax = fcn_00403260 (esi, edi, ebp, edx);
        esi = eax;
        edi = edx;
        if (ebx > 0x39) {
            ebx += *((esp + 0x38));
        }
        eax = *((esp + 0x14));
        ecx = *((esp + 0x18));
        *(eax) = bl;
        eax--;
        *((esp + 0x14)) = eax;
    } while (1);
label_18:
    ecx = *((esp + 0x10));
    ebp = esp + 0x25b;
    ebp -= eax;
    eax++;
    *((esp + 0x14)) = eax;
    if ((ch & 2) != 0) {
        if (*(eax) == 0x30) {
            if (ebp != 0) {
                goto label_6;
            }
        }
        eax--;
        ebp++;
        *((esp + 0x14)) = eax;
        *(eax) = 0x30;
    }
label_6:
    eax = *((esp + 0x34));
    if (eax != 0) {
        goto label_4;
    }
    ebx = *((esp + 0x10));
    if ((bl & 0x40) != 0) {
        if ((bh & 1) != 0) {
            *((esp + 0x22)) = 0x2d;
        } else {
            if ((bl & 1) != 0) {
                *((esp + 0x22)) = 0x2b;
            } else {
                if ((bl & 2) == 0) {
                    goto label_19;
                }
                *((esp + 0x22)) = 0x20;
            }
        }
        *((esp + 0x24)) = 1;
    }
label_19:
    edi = *((esp + 0x28));
    edx = *((esp + 0x24));
    edi -= edx;
    edi -= ebp;
    if ((bl & 0xc) == 0) {
        esi = *((esp + 0x260));
        fcn_00401d10 (0x20, edi, esi, esp + 0x1c);
    } else {
        esi = *((esp + 0x260));
    }
    edx = *((esp + 0x24));
    eax = esp + 0x2a;
    fcn_00401d50 (eax, edx, esi, esp + 0x1c);
    if ((bl & 8) != 0) {
        if ((bl & 4) != 0) {
            goto label_20;
        }
        fcn_00401d10 (0x30, edi, esi, esp + 0x1c);
    }
label_20:
    eax = *((esp + 0x2c));
    if (eax == 0) {
        goto label_21;
    }
    if (ebp <= 0) {
        goto label_21;
    }
    esi = *((esp + 0x14));
    ebx = ebp - 1;
    do {
        ax = *(esi);
        edx = esp + 0x48;
        esi += 2;
        eax = fcn_004031e0 (edx, eax);
        if (eax <= 0) {
            goto label_22;
        }
        edx = *((esp + 0x260));
        fcn_00401d50 (esp + 0x54, eax, edx, esp + 0x1c);
        ecx = ebx;
        ebx--;
    } while (ecx != 0);
label_22:
    ebx = *((esp + 0x10));
label_1:
    if ((bl & 4) != 0) {
        edx = *((esp + 0x260));
        fcn_00401d10 (0x20, edi, edx, esp + 0x1c);
    }
label_4:
    edi = *((esp + 0x264));
    bl = *(edi);
    edi++;
    *((esp + 0x40)) = bl;
    *((esp + 0x264)) = edi;
    if (bl != 0) {
        goto label_0;
    }
label_2:
    eax = *((esp + 0x1c));
    return eax;
label_21:
    eax = *((esp + 0x14));
    fcn_00401d50 (eax, ebp, esi, esp + 0x1c);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4012d0 */
#include <stdint.h>
 
int32_t fcn_004012d0 (int32_t arg_4h, int32_t arg_ch) {
    eax = *((esp + 4));
    if (eax != 0) {
        esi = *((esp + 0xc));
        eax = *((esi + 0xc));
        if ((ah & 0x10) == 0) {
            goto label_0;
        }
        fcn_004030e0 (esi);
        eax = *((esi + 0xc));
        ah &= 0xee;
        *((esi + 0x18)) = 0;
        *((esi + 0xc)) = eax;
        *(esi) = 0;
        *((esi + 8)) = 0;
        return eax;
    }
    eax = *((esp + 0xc));
    ecx = *((eax + 0xc));
    if ((ch & 0x10) != 0) {
        fcn_004030e0 (eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4030e0 */
#include <stdint.h>
 
int32_t fcn_004030e0 (int32_t arg_ch) {
    esi = *((esp + 0xc));
    ebx = 0;
    eax = *((esi + 0xc));
    ecx = *((esi + 0xc));
    ecx &= 3;
    if (cl == 2) {
        if ((eax & 0x108) == 0) {
            goto label_0;
        }
        eax = *((esi + 8));
        edi = *(esi);
        edi -= eax;
        if (edi <= 0) {
            goto label_0;
        }
        edx = *((esi + 0x10));
        eax = fcn_00403f10 (edx, eax, edi);
        eax = *((esi + 0xc));
        if (eax == edi) {
            if ((al & 0x80) == 0) {
                goto label_0;
            }
            al &= 0xfd;
            *((esi + 4)) = ebx;
            *((esi + 0xc)) = eax;
            eax = *((esi + 8));
            *(esi) = eax;
            eax = ebx;
            return eax;
        }
        al |= 0x20;
        ebx |= 0xffffffff;
        *((esi + 0xc)) = eax;
    }
label_0:
    eax = *((esi + 8));
    *((esi + 4)) = 0;
    *(esi) = eax;
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403f10 */
#include <stdint.h>
 
int32_t fcn_00403f10 (int32_t arg_4h, LPCVOID arg_438h_2, int32_t arg_438h) {
    int32_t var_10h_2;
    int32_t var_14h_2;
    DWORD var_18h;
    int32_t var_1ch_2;
    int32_t var_20h_2;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h_2;
    LPDWORD lpNumberOfBytesWritten;
    int32_t var_20h;
    int32_t var_24h;
    LPCVOID * lpBuffer;
    eax = *((esp + 4));
    ecx = *(0x408ce0);
    if (eax >= ecx) {
        goto label_2;
    }
    ecx = eax;
    esi = eax;
    ecx >>= 5;
    esi &= 0x1f;
    edx = *((ecx*4 + 0x408be0));
    edi = ecx*4 + 0x408be0;
    esi <<= 3;
    *((esp + 0x24)) = edi;
    *((esp + 0x14)) = esi;
    cl = *((esi + edx + 4));
    if ((cl & 1) == 0) {
        goto label_2;
    }
    ebx = *((esp + 0x438));
    ebp = 0;
    *((esp + 0x10)) = ebp;
    *((esp + 0x20)) = ebp;
    if (ebx == ebp) {
        eax = 0;
        return eax;
    }
    if ((cl & 0x20) != 0) {
        fcn_00404140 (eax, ebp, 2);
    }
    eax = *(edi);
    eax += esi;
    if ((*((eax + 4)) & 0x80) == 0) {
        goto label_3;
    }
    ebp = *((esp + 0x434));
    *((esp + 0x18)) = 0;
    edi = ebp;
    if (ebx <= 0) {
        goto label_1;
    }
label_0:
    eax = esp + 0x28;
    do {
        ecx = edi;
        ecx -= ebp;
        if (ecx >= ebx) {
            goto label_4;
        }
        cl = *(edi);
        edi++;
        if (cl == 0xa) {
            esi = *((esp + 0x20));
            *(eax) = 0xd;
            esi++;
            eax++;
            *((esp + 0x20)) = esi;
        }
        *(eax) = cl;
        eax++;
        edx = eax;
        ecx = esp + 0x28;
        edx -= ecx;
    } while (edx < 0x400);
label_4:
    esi = eax;
    edx = esp + 0x28;
    eax = esp + 0x1c;
    esi -= edx;
    edx = *((esp + 0x24));
    ecx = esp + 0x30;
    eax = *(edx);
    ecx = *((esp + 0x24));
    edx = *((ecx + eax));
    eax = WriteFile (edx, ecx, esi, eax, 0);
    if (eax == 0) {
        goto label_5;
    }
    eax = *((esp + 0x1c));
    edx = *((esp + 0x10));
    edx += eax;
    *((esp + 0x10)) = edx;
    if (eax < esi) {
        goto label_6;
    }
    eax = edi;
    eax -= ebp;
    if (eax < ebx) {
        goto label_0;
    }
    do {
label_6:
        esi = *((esp + 0x14));
label_1:
        eax = *((esp + 0x10));
        if (eax == 0) {
            eax = *((esp + 0x18));
            if (eax != 0) {
                if (eax == 5) {
                    *(0x408918) = eax;
                    *(0x408914) = 9;
                    eax |= 0xffffffff;
                    return eax;
                }
                eax = fcn_004043d0 (eax);
                eax |= 0xffffffff;
                return eax;
            }
            ecx = *((esp + 0x24));
            edx = *(ecx);
            if ((*((esi + edx + 4)) & 0x40) != 0) {
                if (*(ebp) != 0x1a) {
                    goto label_7;
                }
                eax = 0;
                return eax;
            }
label_7:
            *(0x408914) = 0x1c;
        } else {
            eax -= *((esp + 0x20));
            return eax;
label_2:
            *(0x408914) = 9;
        }
        *(0x408918) = 0;
        eax |= 0xffffffff;
        return eax;
label_5:
        eax = GetLastError ();
        *((esp + 0x18)) = eax;
    } while (1);
label_3:
    edx = *(eax);
    ecx = esp + 0x1c;
    ebp = *((esp + 0x438));
    eax = WriteFile (edx, ebp, ebx, ecx);
    if (eax != 0) {
        eax = *((esp + 0x1c));
        *((esp + 0x18)) = 0;
        *((esp + 0x10)) = eax;
        goto label_1;
    }
    eax = GetLastError ();
    *((esp + 0x18)) = eax;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404140 */
#include <stdint.h>
 
int32_t fcn_00404140 (int32_t arg_4h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 4));
    ecx = *(0x408ce0);
    if (eax < ecx) {
        ecx = eax;
        esi = eax;
        ecx >>= 5;
        esi &= 0x1f;
        edx = *((ecx*4 + 0x408be0));
        ebx = ecx*4 + 0x408be0;
        esi <<= 3;
        if ((*((edx + esi + 4)) & 1) == 0) {
            goto label_0;
        }
        eax = fcn_00404380 (eax);
        if (eax == -1) {
            *(0x408914) = 9;
            eax |= eax;
            return eax;
        }
        ecx = *((esp + 0x18));
        edx = *((esp + 0x14));
        eax = SetFilePointer (eax, edx, 0, ecx);
        edi = eax;
        if (edi == -1) {
            eax = GetLastError ();
        } else {
            eax = 0;
        }
        if (eax != 0) {
            eax = fcn_004043d0 (eax);
            eax |= 0xffffffff;
            return eax;
        }
        eax = *(ebx);
        cl = *((eax + esi + 4));
        eax = eax + esi + 4;
        cl &= 0xfd;
        *(eax) = cl;
        eax = edi;
        return eax;
    }
label_0:
    *(0x408914) = 9;
    *(0x408918) = 0;
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404380 */
#include <stdint.h>
 
int32_t fcn_00404380 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(0x408ce0);
    if (eax < ecx) {
        ecx = eax;
        eax &= 0x1f;
        ecx >>= 5;
        edx = *((ecx*4 + 0x408be0));
        cl = *((edx + eax*8 + 4));
        eax = edx + eax*8;
        if ((cl & 1) == 0) {
            goto label_0;
        }
        eax = *(eax);
        return eax;
    }
label_0:
    *(0x408914) = 9;
    *(0x408918) = 0;
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4043d0 */
#include <stdint.h>
 
int32_t fcn_004043d0 (int32_t arg_4h) {
    edx = *((esp + 4));
    *(0x408918) = edx;
    ecx = 0;
    eax = 0x408790;
    do {
        if (edx == *(eax)) {
            goto label_0;
        }
        eax += 8;
        ecx++;
    } while (eax < 0x4088f8);
    if (edx >= 0x13) {
        if (edx > 0x24) {
            goto label_1;
        }
        *(0x408914) = 0xd;
        return eax;
    }
label_1:
    if (edx >= 0xbc) {
        *(0x408914) = 8;
        if (edx <= 0xca) {
            goto label_2;
        }
    }
    *(0x408914) = 0x16;
label_2:
    return eax;
label_0:
    eax = *((ecx*8 + 0x408794));
    *(0x408914) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402b80 */
#include <stdint.h>
 
uint32_t fcn_00402b80 (void) {
    eax = HeapCreate (1, 0x1000, 0);
    *(0x408bd4) = eax;
    if (eax == 0) {
        return eax;
    }
    eax = fcn_004035e0 ();
    if (eax == 0) {
        eax = *(0x408bd4);
        eax = HeapDestroy (eax);
        eax = 0;
        return eax;
    }
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4035e0 */
#include <stdint.h>
 
int32_t fcn_004035e0 (void) {
    eax = *(0x406760);
    if (eax == -1) {
    } else {
        eax = *(0x408bd4);
        eax = HeapAlloc (eax, 0, 0x2020);
        if (ebp == 0) {
            goto label_0;
        }
    }
    eax = VirtualAlloc (0, 0x400000, 0x2000, 4);
    esi = eax;
    if (esi == 0) {
        goto label_1;
    }
    eax = void (*edi)(uint32_t, uint32_t, uint32_t, uint32_t) (esi, 0x10000, 0x1000, 4);
    if (eax == 0) {
        goto label_2;
    }
    if (ebp == 0x406750) {
        eax = *(0x406750);
        if (eax == 0) {
            *(0x406750) = 0x406750;
        }
        eax = *(0x406754);
        if (eax != 0) {
            goto label_3;
        }
        *(0x406754) = 0x406750;
    } else {
        *(ebp) = 0x406750;
        ecx = *(0x406754);
        *((ebp + 4)) = ecx;
        *(0x406754) = ebp;
        edx = *((ebp + 4));
        *(edx) = ebp;
    }
label_3:
    eax = esi + 0x400000;
    ecx = ebp + 0x18;
    edx = ebp + 0x98;
    *((ebp + 0x14)) = eax;
    *((ebp + 0x10)) = esi;
    *((ebp + 8)) = ecx;
    *((ebp + 0xc)) = edx;
    eax = 0;
    edi = 0xf1;
    do {
        edx = 0;
        dl = (eax >= 0x10) ? 1 : 0;
        edx--;
        ecx += 8;
        edx &= edi;
        edx--;
        eax++;
        *((ecx - 8)) = edx;
        *((ecx - 4)) = edi;
    } while (eax < 0x400);
    ecx = 0x4000;
    eax = 0;
    edi = esi;
    memset (edi, eax, ecx);
    eax = *((ebp + 0x10));
    eax += 0x10000;
    if (esi >= eax) {
        goto label_4;
    }
    ecx = 0xf0;
    al = 0xff;
    do {
        edx = esi + 8;
        *((esi + 4)) = ecx;
        *(esi) = edx;
        *((esi + 0xf8)) = al;
        edx = *((ebp + 0x10));
        esi += 0x1000;
        edx += 0x10000;
    } while (esi < edx);
label_4:
    eax = ebp;
    return eax;
label_2:
    VirtualFree (esi, 0, 0x8000);
label_1:
    if (ebp != 0x406750) {
        eax = *(0x408bd4);
        eax = HeapFree (eax, 0);
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401200 */
#include <stdint.h>
 
int32_t fcn_00401200 (int32_t arg_4h) {
    if (*(0x408900) != 2) {
        fcn_00402d90 ();
    }
    eax = *((esp + 4));
    fcn_00402dd0 (eax);
    uint32_t (*0x406068)(uint32_t) (0xff);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402d90 */
#include <stdint.h>
 
int32_t fcn_00402d90 (void) {
    eax = *(0x408900);
    if (eax != 1) {
        if (eax != 0) {
            goto label_0;
        }
        if (*(0x40606c) != 1) {
            goto label_0;
        }
    }
    fcn_00402dd0 (0xfc);
    eax = *(0x408b98);
    if (eax != 0) {
        void (*eax)() ();
    }
    fcn_00402dd0 (0xff);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402dd0 */
#include <stdint.h>
 
int32_t fcn_00402dd0 (int32_t arg_4h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_b4h_2;
    int32_t var_b4h;
    ecx = *((esp + 4));
    eax = 0x406498;
    ebp = 0;
    do {
        if (ecx == *(eax)) {
            goto label_0;
        }
        eax += 8;
        ebp++;
    } while (eax < 0x406528);
label_0:
    if (ecx != *((ebp*8 + 0x406498))) {
        goto label_1;
    }
    eax = *(0x408900);
    if (eax == 1) {
        goto label_2;
    }
    if (eax == 0) {
        if (*(0x40606c) == 1) {
            goto label_2;
        }
    }
    if (ecx == 0xfc) {
        goto label_1;
    }
    eax = esp + 0xb4;
    eax = GetModuleFileNameA (0, eax, 0x104);
    if (eax == 0) {
        ecx = 5;
        esi = "<program name unknown>";
        edi = esp + 0xb4;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 2;
        es:edi += 2;
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
    }
    edi = esp + 0xb4;
    ecx |= 0xffffffff;
    eax = 0;
    ebx = esp + 0xb4;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    if (ecx <= 0x3c) {
        goto label_3;
    }
    edi = esp + 0xb4;
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    do {
        ecx = ~ecx;
    } while (ecx != 0);
    ecx--;
    ebx = ecx;
    ecx = esp + 0xb8;
    ecx -= 0x3b;
    ebx += ecx;
    eax = fcn_00403d90 (ebx, 0x405358, 3);
label_3:
    ecx = 6;
    esi = "Runtime Error!\n\nProgram: ";
    edi = esp + 0x14;
    eax = 0;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 2;
    es:edi += 2;
    ecx |= 0xffffffff;
    edi = ebx;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    edi -= ecx;
    edx = esp + 0x14;
    ebx = ecx;
    esi = edi;
    ecx |= 0xffffffff;
    edi = edx;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ebx;
    edi--;
    ecx >>= 2;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = ebx;
    edx = esp + 0x14;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    edi = 0x405338;
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    edi -= ecx;
    esi = edi;
    ebx = ecx;
    edi = edx;
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ebx;
    edi--;
    ecx >>= 2;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = ebx;
    edx = esp + 0x1c;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    edi = *((ebp*8 + 0x40649c));
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    edi -= ecx;
    esi = edi;
    ebx = ecx;
    edi = edx;
    ecx |= 0xffffffff;
    do {
        __asm ("repne scasb al, byte es:[edi]");
    } while (ecx != 0);
    ecx = ebx;
    edi--;
    ecx >>= 2;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = ebx;
    eax = esp + 0x1c;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    fcn_00403d00 ();
    return eax;
label_2:
    eax = *(0x408be0);
    if (eax != 0) {
        esi = *((eax + 0x10));
        if (esi != -1) {
            goto label_4;
        }
    }
    eax = GetStdHandle (0xfffffffffffffff4);
    esi = eax;
label_4:
    edx = *((ebp*8 + 0x40649c));
    ecx = esp + 0x10;
    edi = edx;
    ecx |= 0xffffffff;
    eax = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    ecx--;
    WriteFile (esi, edx, ecx, ecx, 0);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402980 */
#include <stdint.h>
 
uint32_t fcn_00402980 (void) {
    int32_t var_10h;
    LPSTARTUPINFOA lpStartupInfo;
    uint32_t var_46h;
    int32_t var_48h;
    eax = fcn_00402fb0 (0x100);
    esi = eax;
    if (esi == 0) {
        fcn_00401200 (0x1b);
    }
    eax = esi + 0x100;
    *(0x408be0) = esi;
    *(0x408ce0) = 0x20;
    bl = 0xa;
    if (esi >= eax) {
        goto label_1;
    }
    do {
        *((esi + 4)) = 0;
        *(esi) = 0xffffffff;
        *((esi + 5)) = bl;
        ecx = *(0x408be0);
        esi += 8;
        ecx += 0x100;
    } while (esi < ecx);
label_1:
    GetStartupInfoA (esp + 0x14);
    if (*((esp + 0x46)) == 0) {
        goto label_2;
    }
    eax = *((esp + 0x48));
    if (eax == 0) {
        goto label_2;
    }
    ecx = *(eax);
    edi = eax + 4;
    *((esp + 0x10)) = ecx;
    ebp = edi + ecx;
    if (ecx >= 0x800) {
        *((esp + 0x10)) = 0x800;
    }
    eax = *((esp + 0x10));
    ecx = *(0x408ce0);
    if (ecx >= eax) {
        goto label_3;
    }
    esi = 0x408be4;
label_0:
    eax = fcn_00402fb0 (0x100);
    if (eax == 0) {
        goto label_4;
    }
    ecx = *(0x408ce0);
    *(esi) = eax;
    ecx += 0x20;
    *(0x408ce0) = ecx;
    ecx = eax + 0x100;
    if (eax >= ecx) {
        goto label_5;
    }
    do {
        *((eax + 4)) = 0;
        *(eax) = 0xffffffff;
        *((eax + 5)) = bl;
        edx = *(esi);
        eax += 8;
        edx += 0x100;
    } while (eax < edx);
label_5:
    eax = *(0x408ce0);
    ecx = *((esp + 0x10));
    esi += 4;
    if (eax < ecx) {
        goto label_0;
    }
    goto label_3;
label_4:
    ecx = *(0x408ce0);
    *((esp + 0x10)) = ecx;
label_3:
    eax = *((esp + 0x10));
    esi = 0;
    if (eax <= 0) {
        goto label_2;
    }
    do {
        ecx = *(ebp);
        if (ecx != -1) {
            al = *(edi);
            if ((al & 1) == 0) {
                goto label_6;
            }
            if ((al & 8) == 0) {
                eax = GetFileType (ecx);
                if (eax == 0) {
                    goto label_6;
                }
            }
            edx = esi;
            eax = esi;
            edx >>= 5;
            eax &= 0x1f;
            ecx = *((edx*4 + 0x408be0));
            edx = *(ebp);
            *((ecx + eax*8)) = edx;
            eax = ecx + eax*8;
            cl = *(edi);
            *((eax + 4)) = cl;
        }
label_6:
        eax = *((esp + 0x10));
        esi++;
        edi++;
        ebp += 4;
    } while (esi < eax);
label_2:
    ebp = *(sym.imp.KERNEL32.dll_GetStdHandle);
    ebx = 0;
    do {
        edx = *(0x408be0);
        eax = *((edx + ebx*8));
        esi = edx + ebx*8;
        if (eax == -1) {
            *((esi + 4)) = 0x81;
            if (ebx == 0) {
                eax = 0xfffffff6;
            } else {
                eax = ebx;
                eax--;
                eax = -eax;
                eax -= eax;
                eax += 0xfffffff5;
            }
            eax = void (*ebp)(uint32_t) (eax);
            edi = eax;
            if (edi != -1) {
                eax = GetFileType (edi);
                if (eax != 0) {
                    eax &= 0xff;
                    *(esi) = edi;
                    if (eax == 2) {
                        al = *((esi + 4));
                        al |= 0x40;
                        goto label_7;
                    }
                    if (eax != 3) {
                        goto label_8;
                    }
                    al = *((esi + 4));
                    al |= 8;
                }
                al = *((esi + 4));
                al |= 0x40;
            } else {
            } else {
                al = *((esi + 4));
                al |= 0x80;
            }
        }
label_7:
        *((esi + 4)) = al;
label_8:
        ebx++;
    } while (ebx < 3);
    eax = *(0x408ce0);
    SetHandleCount (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402970 */
#include <stdint.h>
 
void fcn_00402970 (void) {
    fcn_004026a0 (0xfffffffffffffffd);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4026a0 */
#include <stdint.h>
 
int32_t fcn_004026a0 (int32_t arg_4h) {
    uint32_t var_10h_2;
    int32_t var_16h;
    int32_t var_17h;
    LPCPINFO lpCPInfo;
    eax = *((esp + 4));
    eax = fcn_00402890 (eax);
    eax = *(0x408b7c);
    *((esp + 0x28)) = ebp;
    if (ebp == eax) {
        eax = 0;
        return eax;
    }
    esi = 0;
    if (ebp == esi) {
        eax = fcn_00402940 ();
        eax = 0;
        return eax;
    }
    edx = 0;
    eax = 0x406388;
    do {
        if (*(eax) == ebp) {
            goto label_3;
        }
        eax += 0x30;
        edx++;
    } while (eax < 0x406478);
    ecx = esp + 0x10;
    eax = GetCPInfo (ebp);
    if (eax != 1) {
        goto label_4;
    }
    ecx = 0x40;
    eax = 0;
    edi = 0x408a78;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    if (*((esp + 0x10)) <= 1) {
        goto label_5;
    }
    al = *((esp + 0x16));
    if (al == 0) {
        goto label_6;
    }
    edx = esp + 0x17;
label_0:
    cl = *(edx);
    if (cl == 0) {
        goto label_6;
    }
    eax = 0;
    ecx &= 0xff;
    al = *((edx - 1));
    if (eax > ecx) {
        goto label_7;
    }
    do {
        bl = *((eax + 0x408a79));
        bl |= 4;
        *((eax + 0x408a79)) = bl;
        eax++;
    } while (eax <= ecx);
label_7:
    al = *((edx + 1));
    edx += 2;
    if (al != 0) {
        goto label_0;
    }
label_6:
    eax = 1;
    do {
        bl = *((eax + 0x408a79));
        bl |= 8;
        *((eax + 0x408a79)) = bl;
        eax++;
    } while (eax < 0xff);
    *(0x408b7c) = ebp;
    eax = fcn_004028e0 (ebp);
    *(0x408b80) = eax;
    goto label_8;
label_5:
    *(0x408b7c) = esi;
    *(0x408b80) = esi;
label_8:
    edx = 0;
    eax = 0;
    *(0x408b88) = edx;
    *(0x408b8c) = edx;
    *(0x408b90) = edx;
    return eax;
label_4:
    if (*(0x408b94) != esi) {
        eax = fcn_00402940 ();
        eax = 0;
        return eax;
    }
    eax |= 0xffffffff;
    return eax;
label_3:
    ecx = 0x40;
    eax = 0;
    edi = 0x408a78;
    ebx = edx * 3;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    edi = 0;
    ebx <<= 4;
    ebp = ebx + 0x406398;
label_2:
    al = *(ebp);
    esi = ebp;
    if (al == 0) {
        goto label_9;
    }
label_1:
    cl = *((esi + 1));
    if (cl == 0) {
        goto label_9;
    }
    eax = 0;
    ecx &= 0xff;
    al = *(esi);
    if (eax > ecx) {
        goto label_10;
    }
    dl = *((edi + 0x406380));
    do {
        *((eax + 0x408a79)) |= dl;
        eax++;
    } while (eax <= ecx);
label_10:
    al = *((esi + 2));
    esi += 2;
    if (al != 0) {
        goto label_1;
    }
label_9:
    edi++;
    ebp += 8;
    if (edi < 4) {
        goto label_2;
    }
    eax = *((esp + 0x28));
    *(0x408b7c) = eax;
    eax = fcn_004028e0 (eax);
    ecx = *((ebx + 0x40638c));
    edx = *((ebx + 0x406390));
    *(0x408b80) = eax;
    eax = ebx + 0x40638c;
    *(0x408b88) = ecx;
    eax = *((eax + 8));
    *(0x408b8c) = edx;
    *(0x408b90) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402890 */
#include <stdint.h>
 
int32_t fcn_00402890 (int32_t arg_4h) {
    eax = *((esp + 4));
    *(0x408b94) = 0;
    if (eax == 0xfffffffe) {
        *(0x408b94) = 1;
    }
    if (eax == 0xfffffffd) {
        *(0x408b94) = 1;
    }
    if (eax == 0xfffffffc) {
        eax = *(0x408bb8);
        *(0x408b94) = 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402940 */
#include <stdint.h>
 
int32_t fcn_00402940 (void) {
    ecx = 0x40;
    eax = 0;
    edi = 0x408a78;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    eax = 0;
    *(0x408b7c) = eax;
    *(0x408b80) = eax;
    *(0x408b88) = eax;
    *(0x408b8c) = eax;
    *(0x408b90) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4028e0 */
#include <stdint.h>
 
int32_t fcn_004028e0 (int32_t arg_4h) {
    eax = *((esp + 4));
    eax += 0xfffffc5c;
    if (eax <= 0x12) {
        ecx = 0;
        cl = *((eax + 0x40292c));
        /* switch table (5 cases) at 0x402918 */
        eax = 0x411;
        return eax;
        eax = 0x804;
        return eax;
        eax = 0x412;
        return eax;
        eax = 0x404;
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402540 */
#include <stdint.h>
 
int32_t fcn_00402540 (void) {
    eax = *(0x408a70);
    ebp = *(sym.imp.KERNEL32.dll_GetEnvironmentStrings);
    esi = 0;
    ebx = 0;
    edi = *(sym.imp.KERNEL32.dll_GetEnvironmentStringsW);
    if (eax == 0) {
        eax = void (*edi)() ();
        esi = eax;
        if (esi != 0) {
            eax = 1;
        } else {
            eax = void (*ebp)() ();
            ebx = eax;
            if (ebx == 0) {
                goto label_2;
            }
            eax = 2;
        }
        *(0x408a70) = eax;
    }
    if (eax != 1) {
        goto label_3;
    }
    if (esi == 0) {
        eax = void (*edi)() ();
        esi = eax;
        if (esi == 0) {
            goto label_2;
        }
    }
    eax = esi;
    if (*(esi) == 0) {
        goto label_4;
    }
    do {
label_0:
        eax += 2;
    } while (*(eax) != 0);
    eax += 2;
    if (*(eax) != 0) {
        goto label_0;
    }
label_4:
    eax -= esi;
    eax >>= 1;
    eax++;
    eax = WideCharToMultiByte (0, 0, esi, ebp, 0, 0, 0);
    edi = eax;
    if (edi != 0) {
        eax = fcn_00402fb0 (edi);
        ebx = eax;
        if (ebx == 0) {
            goto label_5;
        }
        eax = WideCharToMultiByte (0, 0, esi, ebp, ebx, edi, 0);
        if (eax == 0) {
            fcn_00403590 (ebx);
            ebx = 0;
        }
        FreeEnvironmentStringsW (esi);
        eax = ebx;
        return eax;
    }
label_5:
    eax = FreeEnvironmentStringsW (esi);
    eax = 0;
    return eax;
label_3:
    if (eax != 2) {
        goto label_2;
    }
    if (ebx == 0) {
        eax = void (*ebp)() ();
        ebx = eax;
        if (ebx == 0) {
            goto label_2;
        }
    }
    cl = *(ebx);
    eax = ebx;
    if (cl == 0) {
        goto label_6;
    }
    do {
label_1:
        cl = *((eax + 1));
        eax++;
    } while (cl != 0);
    cl = *((eax + 1));
    eax++;
    if (cl != 0) {
        goto label_1;
    }
label_6:
    eax -= ebx;
    eax++;
    esi = eax;
    eax = fcn_00402fb0 (esi);
    if (ebp == 0) {
        eax = FreeEnvironmentStringsA (ebx);
        eax = 0;
        return eax;
    }
    ecx = esi;
    esi = ebx;
    eax = ecx;
    edi = ebp;
    ecx >>= 2;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = eax;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    FreeEnvironmentStringsA ();
    eax = ebp;
    return eax;
label_2:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401f00 */
#include <stdint.h>
 
int32_t fcn_00401f00 (int32_t arg_4h) {
    eax = *((esp + 4));
    fcn_00401f40 (eax, 0, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401f40 */
#include <stdint.h>
 
int32_t fcn_00401f40 (int32_t arg_14h_2, int32_t arg_ch, int32_t arg_14h, int32_t arg_18h) {
    eax = *(0x40895c);
    ebp = *((esp + 0xc));
    if (eax == 1) {
        eax = GetCurrentProcess (ebp);
        TerminateProcess (eax);
    }
    eax = *((esp + 0x14));
    ebx = *((esp + 0x18));
    *(0x408958) = 1;
    *(0x408954) = bl;
    if (eax != 0) {
        goto label_0;
    }
    ecx = *(0x408ce8);
    if (ecx == 0) {
        goto label_1;
    }
    esi = *(0x408ce4);
    esi -= 4;
    if (esi < ecx) {
        goto label_1;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
            ecx = *(0x408ce8);
        }
        esi -= 4;
    } while (esi >= ecx);
label_1:
    fcn_00401ff0 (0x406014, 0x40601c);
label_0:
    fcn_00401ff0 (0x406020, 0x406024);
    if (ebx == 0) {
        *(0x40895c) = 1;
        ExitProcess ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402290 */
#include <stdint.h>
 
uint32_t fcn_00402290 (void) {
    int32_t var_8h;
    int32_t var_ch;
    GetModuleFileNameA (0, 0x408968, 0x104, edi, esi);
    edi = *(0x409d04);
    *(0x40894c) = 0x408968;
    if (*(edi) == 0) {
        edi = 0x408968;
    }
    eax = esp + 0xc;
    ecx = esp + 8;
    fcn_00402330 (edi, 0, 0, ecx, eax);
    edx = *((esp + 0x20));
    eax = *((esp + 0x1c));
    eax = fcn_00402fb0 (edx + eax*4);
    esi = eax;
    if (esi == 0) {
        fcn_00401200 (8);
    }
    ecx = *((esp + 8));
    eax = esp + 0xc;
    edx = esi + ecx*4;
    fcn_00402330 (edi, esi, edx, eax, esp + 0xc);
    eax = *((esp + 0x1c));
    eax--;
    *(0x408934) = esi;
    *(0x408930) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4021a0 */
#include <stdint.h>
 
int32_t fcn_004021a0 (void) {
    int32_t var_10h;
    edx = *(0x4088f8);
    al = *(edx);
    esi = 0;
    if (al == 0) {
        goto label_0;
    }
    do {
        if (al != 0x3d) {
            esi++;
        }
        edi = edx;
        ecx |= 0xffffffff;
        eax = 0;
        __asm ("repne scasb al, byte es:[edi]");
        ecx = ~ecx;
        ecx--;
        al = *((edx + ecx + 1));
        edx = edx + ecx + 1;
    } while (al != 0);
label_0:
    eax = fcn_00402fb0 (esi*4 + 4);
    esi = eax;
    *((esp + 0x10)) = esi;
    *(0x40893c) = esi;
    if (esi == 0) {
        eax = fcn_00401200 (9);
    }
    ebp = *(0x4088f8);
    dl = *(ebp);
    if (dl == 0) {
        goto label_1;
    }
    do {
        edi = ebp;
        ecx |= 0xffffffff;
        eax = 0;
        __asm ("repne scasb al, byte es:[edi]");
        ecx = ~ecx;
        ecx--;
        ebx = ecx;
        ebx++;
        if (dl != 0x3d) {
            eax = fcn_00402fb0 (ebx);
            *(esi) = eax;
            if (eax == 0) {
                eax = fcn_00401200 (9);
            }
            edi = ebp;
            ecx |= 0xffffffff;
            eax = 0;
            __asm ("repne scasb al, byte es:[edi]");
            eax = *((esp + 0x10));
            ecx = ~ecx;
            edi -= ecx;
            edx = ecx;
            esi = edi;
            edi = *(eax);
            ecx >>= 2;
            *(es:edi) = *(esi);
            ecx--;
            esi += 4;
            es:edi += 4;
            ecx = edx;
            ecx &= 3;
            eax += 4;
            *(es:edi) = *(esi);
            ecx--;
            esi++;
            es:edi++;
            *((esp + 0x10)) = eax;
            esi = eax;
        }
        dl = *((ebp + ebx));
        ebp += ebx;
    } while (dl != 0);
label_1:
    eax = *(0x4088f8);
    fcn_00403590 (eax);
    *(0x4088f8) = 0;
    *(esi) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401ed0 */
#include <stdint.h>
 
int32_t fcn_00401ed0 (void) {
    eax = *(0x408cec);
    if (eax != 0) {
        void (*eax)() ();
    }
    fcn_00401ff0 (0x406008, 0x406010);
    fcn_00401ff0 (section..data, 0x406004);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401ff0 */
#include <stdint.h>
 
int32_t fcn_00401ff0 (int32_t arg_8h, int32_t arg_10h) {
    esi = *((esp + 8));
    edi = *((esp + 0x10));
    if (esi >= edi) {
        goto label_0;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi += 4;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t fcn_00401000 (int32_t arg_4h) {
    /* [00] -r-x section size 16384 named .text */
    eax = *((esp + 4));
    eax += 0xfffffffe;
    if (eax <= 5) {
        /* switch table (6 cases) at 0x401084 */
        eax = fcn_004010a0 ("Two!\n");
        eax = 0;
        return eax;
        eax = fcn_004010a0 ("Three!\n");
        eax = 0;
        return eax;
        eax = fcn_004010a0 ("Four!\n");
        eax = 0;
        return eax;
        eax = fcn_004010a0 ("Five!\n");
        eax = 0;
        return eax;
        eax = fcn_004010a0 ("Six!\n");
        eax = 0;
        return eax;
        eax = fcn_004010a0 ("Seven!\n");
        eax = 0;
        return eax;
    }
    eax = fcn_004010a0 ("Other!\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402010 */
#include <stdint.h>
 
int32_t fcn_00402010 (int32_t arg_4h, struct _EXCEPTION_POINTERS * ExceptionInfo) {
    eax = *((esp + 4));
    eax = fcn_00402150 (eax);
    if (eax == 0) {
        goto label_0;
    }
    ebx = *((eax + 8));
    if (ebx == 0) {
        goto label_0;
    }
    if (ebx == 5) {
        *((eax + 8)) = 0;
        eax = 1;
        return eax;
    }
    if (ebx == 1) {
        eax |= 0xffffffff;
        return eax;
    }
    ecx = *((esp + 0x14));
    ebp = *(0x408960);
    *(0x408960) = ecx;
    ecx = *((eax + 4));
    if (ecx != 8) {
        goto label_1;
    }
    esi = *(0x406370);
    edx = *(0x406374);
    edx += esi;
    if (esi >= edx) {
        goto label_2;
    }
    ecx = esi * 3;
    edx -= esi;
    ecx = ecx*4 + 0x406300;
    do {
        *(ecx) = 0;
        ecx += 0xc;
        edx--;
    } while (edx != 0);
label_2:
    eax = *(eax);
    ecx = *(0x40637c);
    esi = ecx;
    if (eax == 0xc000008e) {
        ecx = 0x83;
    } else {
        if (eax == 0xc0000090) {
            ecx = 0x81;
        } else {
            if (eax == 0xc0000091) {
                ecx = 0x84;
            } else {
                if (eax == 0xc0000093) {
                    ecx = 0x85;
                } else {
                    if (eax == 0xc000008d) {
                        ecx = 0x82;
                    } else {
                        if (eax == 0xc000008f) {
                            ecx = 0x86;
                        } else {
                            if (eax != 0xc0000092) {
                                goto label_3;
                            }
                            ecx = 0x8a;
                        }
                    }
                }
            }
        }
    }
    *(0x40637c) = ecx;
label_3:
    eax = void (*ebx)(uint32_t, uint32_t) (8, ecx);
    *(0x40637c) = esi;
    *(0x408960) = ebp;
    eax |= 0xffffffff;
    return eax;
label_1:
    *((eax + 8)) = 0;
    eax = void (*ebx)(uint32_t) (ecx);
    *(0x408960) = ebp;
    eax |= 0xffffffff;
    return eax;
label_0:
    edx = *((esp + 0x14));
    UnhandledExceptionFilter (edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402150 */
#include <stdint.h>
 
int32_t fcn_00402150 (int32_t arg_4h) {
    edx = *((esp + 4));
    ecx = *(0x4062f8);
    esi = *(0x406378);
    eax = 0x4062f8;
    if (ecx == edx) {
        goto label_0;
    }
    ecx = esi * 3;
    ecx = ecx*4 + 0x4062f8;
    do {
        eax += 0xc;
        if (eax >= ecx) {
            goto label_0;
        }
    } while (*(eax) != edx);
label_0:
    ecx = esi * 3;
    ecx = ecx*4 + 0x4062f8;
    if (eax < ecx) {
        if (*(eax) == edx) {
            goto label_1;
        }
    }
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401f20 */
#include <stdint.h>
 
int32_t fcn_00401f20 (int32_t arg_4h) {
    eax = *((esp + 4));
    fcn_00401f40 (eax, 1, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403060 */
#include <stdint.h>
 
int32_t fcn_00403060 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(0x408ce0);
    if (eax >= ecx) {
        eax = 0;
        return eax;
    }
    ecx = eax;
    eax &= 0x1f;
    ecx >>= 5;
    edx = *((ecx*4 + 0x408be0));
    al = *((edx + eax*8 + 4));
    eax &= 0x40;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402fb0 */
#include <stdint.h>
 
int32_t fcn_00402fb0 (int32_t arg_4h) {
    eax = *(0x408bcc);
    ecx = *((esp + 4));
    fcn_00402fd0 (ecx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402fd0 */
#include <stdint.h>
 
uint32_t fcn_00402fd0 (int32_t arg_8h, int32_t arg_10h) {
    esi = *((esp + 8));
    if (esi > 0xffffffe0) {
        goto label_0;
    }
    if (esi == 0) {
        esi = 1;
    }
    edi = *((esp + 0x10));
    do {
        if (esi <= 0xffffffe0) {
            eax = fcn_00403020 (esi);
        } else {
            eax = 0;
        }
        if (eax != 0) {
            goto label_1;
        }
        if (edi == 0) {
            goto label_1;
        }
        eax = fcn_00403e90 (esi);
    } while (eax != 0);
label_0:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401d90 */
#include <stdint.h>
 
int32_t fcn_00401d90 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(eax);
    ecx += 4;
    *(eax) = ecx;
    eax = ecx;
    eax = *((eax - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401cc0 */
#include <stdint.h>
 
int32_t fcn_00401cc0 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    ecx = *((esp + 8));
    eax = *((ecx + 4));
    eax--;
    *((ecx + 4)) = eax;
    if (eax >= 0) {
        edx = *(ecx);
        eax = *((esp + 4));
        *(edx) = al;
        edx = *(ecx);
        eax &= 0xff;
        edx++;
        *(ecx) = edx;
    } else {
        eax = *((esp + 4));
        eax = fcn_00403350 (eax, ecx);
    }
    if (eax == -1) {
        ecx = *((esp + 0xc));
        *(ecx) = eax;
        return eax;
    }
    eax = *((esp + 0xc));
    *(eax)++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401dd0 */
#include <stdint.h>
 
int32_t fcn_00401dd0 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(eax);
    ecx += 4;
    *(eax) = ecx;
    eax = ecx;
    ax = *((eax - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4031e0 */
#include <stdint.h>
 
int32_t fcn_004031e0 (int32_t arg_4h, LPCWCH lpWideCharStr) {
    int32_t var_4h;
    eax = *((esp + 4));
    if (eax == 0) {
        return eax;
    }
    ecx = *(0x408ba8);
    if (ecx == 0) {
        cx = *((esp + 8));
        if (cx > 0xff) {
            goto label_0;
        }
        *(eax) = cl;
        eax = 1;
        return eax;
    }
    edx = *(0x408780);
    ecx = *(0x408bb8);
    eax = esp + 0x18;
    eax = WideCharToMultiByte (ecx, 0x220, eax, 1, eax, edx, 0, esp + 4);
    if (eax != 0) {
        ecx = *((esp + 4));
        if (ecx == 0) {
            goto label_1;
        }
    }
label_0:
    *(0x408914) = 0x2a;
    eax |= 0xffffffff;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401db0 */
#include <stdint.h>
 
int32_t fcn_00401db0 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(eax);
    ecx += 8;
    *(eax) = ecx;
    eax = *((ecx - 8));
    edx = *((ecx - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4032d0 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_004032d0 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    eax = *((esp + 0x14));
    eax |= eax;
    if (eax == 0) {
        ecx = *((esp + 0x10));
        eax = *((esp + 0xc));
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax = *((esp + 8));
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax = edx;
        edx = 0;
        goto label_0;
    }
    ecx = eax;
    ebx = *((esp + 0x10));
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    do {
        ecx >>= 1;
        ebx = rotate_right32 (ebx, 1);
        edx >>= 1;
        eax = rotate_right32 (eax, 1);
        ecx |= ecx;
    } while (ecx != 0);
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ecx = eax;
    edx:eax = eax * *((esp + 0x14));
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    edx:eax = eax * *((esp + 0x10));
    edx += ecx;
    if (edx >= 0) {
        if (edx > *((esp + 0xc))) {
            goto label_1;
        }
        if (edx < *((esp + 0xc))) {
            goto label_2;
        }
        if (eax <= *((esp + 8))) {
            goto label_2;
        }
    }
label_1:
    eax -= *((esp + 0x10));
    edx -= *((esp + 0x14));
label_2:
    eax -= *((esp + 8));
    edx -= *((esp + 0xc));
    edx = -edx;
    eax = -eax;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403260 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00403260 (uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 0x18));
    eax |= eax;
    if (eax == 0) {
        ecx = *((esp + 0x14));
        eax = *((esp + 0x10));
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ebx = eax;
        eax = *((esp + 0xc));
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        edx = ebx;
        goto label_0;
    }
    ecx = eax;
    ebx = *((esp + 0x14));
    edx = *((esp + 0x10));
    eax = *((esp + 0xc));
    do {
        ecx >>= 1;
        ebx = rotate_right32 (ebx, 1);
        edx >>= 1;
        eax = rotate_right32 (eax, 1);
        ecx |= ecx;
    } while (ecx != 0);
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    esi = eax;
    edx:eax = eax * *((esp + 0x18));
    ecx = eax;
    eax = *((esp + 0x14));
    edx:eax = eax * esi;
    edx += ecx;
    if (edx >= 0) {
        if (edx > *((esp + 0x10))) {
            goto label_1;
        }
        if (edx < *((esp + 0x10))) {
            goto label_2;
        }
        if (eax <= *((esp + 0xc))) {
            goto label_2;
        }
    }
label_1:
    esi--;
label_2:
    edx = 0;
    eax = esi;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401d10 */
#include <stdint.h>
 
int32_t fcn_00401d10 (int32_t arg_14h, int32_t arg_10h, int32_t arg_1ch, int32_t arg_20h) {
    ebp = *((esp + 0x10));
    eax = ebp;
    ebp--;
    if (eax <= 0) {
        goto label_0;
    }
    esi = *((esp + 0x20));
    edi = *((esp + 0x1c));
    ebx = *((esp + 0x14));
    do {
        fcn_00401cc0 (ebx, edi, esi);
        eax = *(esi);
        if (eax == -1) {
            goto label_0;
        }
        ecx = ebp;
        ebp--;
    } while (ecx > 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x401d50 */
#include <stdint.h>
 
int32_t fcn_00401d50 (int32_t arg_14h, int32_t arg_10h, int32_t arg_1ch, int32_t arg_20h) {
    ebp = *((esp + 0x10));
    eax = ebp;
    ebp--;
    if (eax <= 0) {
        goto label_0;
    }
    edi = *((esp + 0x20));
    ebx = *((esp + 0x1c));
    esi = *((esp + 0x14));
    do {
        eax = *(esi);
        esi++;
        fcn_00401cc0 (eax, ebx, edi);
        eax = *(edi);
        if (eax == -1) {
            goto label_0;
        }
        ecx = ebp;
        ebp--;
    } while (ecx > 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403350 */
#include <stdint.h>
 
int32_t fcn_00403350 (int32_t arg_14h_2, int32_t arg_14h) {
    esi = *((esp + 0x14));
    eax = *((esi + 0xc));
    ebp = *((esi + 0x10));
    if ((al & 0x82) != 0) {
        if ((al & 0x40) != 0) {
            goto label_0;
        }
        ebx = 0;
        if ((al & 1) != 0) {
            *((esi + 4)) = ebx;
            if ((al & 0x10) == 0) {
                goto label_0;
            }
            ecx = *((esi + 8));
            al &= 0xfe;
            *(esi) = ecx;
            *((esi + 0xc)) = eax;
        }
        eax = *((esi + 0xc));
        *((esi + 4)) = ebx;
        al &= 0xef;
        al |= 2;
        *((esi + 0xc)) = eax;
        if ((eax & 0x10c) == 0) {
            if (esi != 0x406098) {
                if (esi != 0x4060b8) {
                    goto label_1;
                }
            }
            eax = fcn_00403060 (ebp);
            if (eax != 0) {
                goto label_2;
            }
label_1:
            fcn_00404200 (esi);
        }
label_2:
        if ((*((esi + 0xc)) & 0x108) != 0) {
            eax = *((esi + 8));
            edi = *(esi);
            ecx = *((esi + 0x18));
            edi -= eax;
            edx = eax + 1;
            ecx--;
            *(esi) = edx;
            *((esi + 4)) = ecx;
            if (edi > ebx) {
                eax = fcn_00403f10 (ebp, eax, edi);
                edx = *((esi + 8));
                ebx = eax;
                al = *((esp + 0x20));
                *(edx) = al;
            } else {
            }
            if (ebp != -1) {
                edx = ebp;
                eax = ebp;
                edx >>= 5;
                eax &= 0x1f;
                ecx = *((edx*4 + 0x408be0));
                eax = ecx + eax*8;
            } else {
                eax = 0x406478;
            }
            if ((*((eax + 4)) & 0x20) != 0) {
                fcn_00404140 (ebp, ebx, 2);
            }
            edx = *((esi + 8));
            al = *((esp + 0x14));
            *(edx) = al;
        } else {
            edi = 1;
            ecx = esp + 0x14;
            eax = fcn_00403f10 (ebp, ecx, edi);
            ebx = eax;
        }
        if (ebx != edi) {
            eax = *((esi + 0xc));
            al |= 0x20;
            *((esi + 0xc)) = eax;
            eax |= 0xffffffff;
            return eax;
        }
        eax = *((esp + 0x14));
        eax &= 0xff;
        return eax;
    }
label_0:
    al |= 0x20;
    *((esi + 0xc)) = eax;
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403480 */
#include <stdint.h>
 
int32_t fcn_00403480 (int32_t arg_10h, int32_t arg_14h) {
    esi = *((esp + 0x14));
    esi *= *((esp + 0x10));
    if (esi <= 0xffffffe0) {
        if (esi > 0) {
            esi += 0xf;
            esi &= 0xfffffff0;
        } else {
            esi = 0x10;
        }
    }
    ebx = *(sym.imp.KERNEL32.dll_HeapAlloc);
label_0:
    edx = 0;
    if (esi > 0xffffffe0) {
        goto label_1;
    }
    if (esi > *(0x408774)) {
        goto label_2;
    }
    eax = esi;
    eax >>= 4;
    eax = fcn_00403940 (eax);
    edx = eax;
    if (edx == 0) {
        goto label_3;
    }
    ecx = esi;
    eax = 0;
    edi = edx;
    ecx >>= 2;
    memset (edi, eax, ecx);
    ecx = ebp;
    ecx &= 3;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
label_2:
    if (edx != 0) {
        goto label_4;
    }
label_3:
    ecx = *(0x408bd4);
    eax = void (*ebx)(uint32_t, uint32_t, uint32_t) (ecx, 8, esi);
    edx = eax;
label_1:
    if (edx != 0) {
        goto label_4;
    }
    eax = *(0x408bcc);
    if (eax == 0) {
        goto label_4;
    }
    eax = fcn_00403e90 (esi);
    if (eax != 0) {
        goto label_0;
    }
    return eax;
label_4:
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403150 */
#include <stdint.h>
 
void fcn_00403150 (void) {
    fcn_00403160 (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403160 */
#include <stdint.h>
 
int32_t fcn_00403160 (int32_t arg_8h) {
    eax = *(0x409d00);
    ebx = *((esp + 8));
    ebp = 0;
    edi = 0;
    esi = 0;
    if (eax <= 0) {
        goto label_0;
    }
    do {
        eax = *(0x408cf0);
        eax = *((eax + esi*4));
        if (eax != 0) {
            ecx = *((eax + 0xc));
            if ((cl & 0x83) == 0) {
                goto label_1;
            }
            if (ebx == 1) {
                eax = fcn_00403090 (eax);
                if (eax == -1) {
                    goto label_1;
                }
                ebp++;
            } else {
                if (ebx != 0) {
                    goto label_1;
                }
                if ((cl & 2) == 0) {
                    goto label_1;
                }
                eax = fcn_00403090 (eax);
                if (eax != -1) {
                    goto label_1;
                }
                edi |= eax;
            }
        }
label_1:
        eax = *(0x409d00);
        esi++;
    } while (esi < eax);
label_0:
    eax = ebp;
    if (ebx != 1) {
        eax = edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403590 */
#include <stdint.h>
 
uint32_t fcn_00403590 (int32_t arg_ch) {
    int32_t var_4h;
    esi = *((esp + 0xc));
    if (esi != 0) {
        eax = esp + 0xc;
        ecx = esp + 4;
        eax = fcn_00403880 (esi, ecx, eax);
        if (eax != 0) {
            edx = *((esp + 0xc));
            eax = *((esp + 8));
            fcn_004038e0 (eax, edx, eax);
            return eax;
        }
        ecx = *(0x408bd4);
        HeapFree (ecx, 0, esi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403880 */
#include <stdint.h>
 
int32_t fcn_00403880 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    ecx = *((esp + 4));
    eax = 0x406750;
    do {
        if (ecx > *((eax + 0x10))) {
            if (ecx < *((eax + 0x14))) {
                goto label_0;
            }
        }
        eax = *(eax);
        if (eax == 0x406750) {
            goto label_1;
        }
    } while (1);
label_0:
    if ((cl & 0xf) == 0) {
        edx = ecx;
        edx &= 0xfff;
        if (edx < 0x100) {
            goto label_1;
        }
        edx = *((esp + 8));
        *(edx) = eax;
        edx = *((esp + 0xc));
        eax = ecx;
        eax &= 0xfffff000;
        ecx -= eax;
        *(edx) = eax;
        ecx -= 0x100;
        ecx >>= 4;
        eax = ecx + eax + 8;
        return eax;
    }
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4038e0 */
#include <stdint.h>
 
int32_t fcn_004038e0 (int32_t arg_4h, int32_t arg_8h, int32_t arg_10h) {
    eax = *((esp + 4));
    ecx = *((esp + 8));
    edx = 0;
    ecx -= *((eax + 0x10));
    ecx >>= 0xc;
    esi = *((eax + ecx*8 + 0x18));
    eax = eax + ecx*8 + 0x18;
    ecx = *((esp + 0x10));
    dl = *(ecx);
    esi += edx;
    *(eax) = esi;
    *(ecx) = 0;
    ecx = *(eax);
    *((eax + 4)) = 0xf1;
    if (ecx == 0xf0) {
        eax = *(0x408bbc);
        eax++;
        *(0x408bbc) = eax;
        if (eax != 0x20) {
            goto label_0;
        }
        fcn_004037b0 (0x10);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4037b0 */
#include <stdint.h>
 
int32_t fcn_004037b0 (int32_t arg_14h) {
    int32_t var_14h;
    edi = *(0x406754);
label_0:
    if (*((edi + 0x10)) == -1) {
        goto label_1;
    }
    ebp = 0;
    esi = edi + 0x2010;
    ebx = 0x3ff000;
    do {
        if (*(esi) == 0xf0) {
            eax = *((edi + 0x10));
            eax += ebx;
            eax = VirtualFree (eax, 0x1000, 0x4000);
            if (eax == 0) {
                goto label_2;
            }
            *(esi) = 0xffffffff;
            edx = *(0x408bbc);
            edx--;
            *(0x408bbc) = edx;
            eax = *((edi + 0xc));
            if (eax != 0) {
                if (eax <= esi) {
                    goto label_3;
                }
            }
            *((edi + 0xc)) = esi;
label_3:
            eax = *((esp + 0x14));
            ebp++;
            eax--;
            *((esp + 0x14)) = eax;
            if (eax == 0) {
                goto label_4;
            }
        }
label_2:
        ebx -= 0x1000;
        esi -= 8;
    } while (ebx >= 0);
label_4:
    edx = edi;
    edi = *((edi + 4));
    if (ebp == 0) {
        goto label_1;
    }
    if (*((edx + 0x18)) != -1) {
        goto label_1;
    }
    eax = 1;
    ecx = edx + 0x20;
    do {
        if (*(ecx) != -1) {
            goto label_5;
        }
        eax++;
        ecx += 8;
    } while (eax < 0x400);
label_5:
    if (eax == 0x400) {
        fcn_00403750 (edx);
    }
label_1:
    if (edi == *(0x406754)) {
        goto label_6;
    }
    eax = *((esp + 0x14));
    if (eax > 0) {
        goto label_0;
    }
label_6:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402330 */
#include <stdint.h>
 
int32_t fcn_00402330 (int32_t arg_14h, int32_t arg_10h_2, int32_t arg_18h, int32_t arg_10h, int32_t arg_24h) {
    eax = *((esp + 0x10));
    ebp = *((esp + 0x10));
    esi = *((esp + 0x18));
    edi = *((esp + 0x24));
    *(edi) = 0;
    *(eax) = 1;
    eax = *((esp + 0x14));
    ebx = 4;
    if (ebp != 0) {
        *(ebp) = esi;
        ebp += ebx;
        *((esp + 0x18)) = ebp;
    }
    if (*(eax) != 0x22) {
        goto label_2;
    }
    cl = *((eax + 1));
    eax++;
    if (cl == 0x22) {
        goto label_3;
    }
    do {
        if (cl == 0) {
            goto label_3;
        }
        ecx &= 0xff;
        if ((*((ecx + 0x408a79)) & bl) != 0) {
            edx = *(edi);
            edx++;
            *(edi) = edx;
            if (esi == 0) {
                goto label_4;
            }
            cl = *(eax);
            *(esi) = cl;
            esi++;
            eax++;
        }
label_4:
        edx = *(edi);
        edx++;
        *(edi) = edx;
        if (esi != 0) {
            dl = *(eax);
            *(esi) = dl;
            esi++;
        }
        cl = *((eax + 1));
        eax++;
    } while (cl != 0x22);
label_3:
    edx = *(edi);
    edx++;
    *(edi) = edx;
    if (esi != 0) {
        *(esi) = 0;
        esi++;
    }
    if (*(eax) != 0x22) {
        goto label_5;
    }
    eax++;
    goto label_5;
    do {
label_2:
        edx = *(edi);
        edx++;
        *(edi) = edx;
        if (esi != 0) {
            cl = *(eax);
            *(esi) = cl;
            esi++;
        }
        cl = *(eax);
        eax++;
        *((esp + 0x24)) = cl;
        edx = *((esp + 0x24));
        edx &= 0xff;
        if ((*((edx + 0x408a79)) & bl) != 0) {
            edx = *(edi);
            edx++;
            *(edi) = edx;
            if (esi != 0) {
                dl = *(eax);
                *(esi) = dl;
                esi++;
            }
            eax++;
        }
        if (cl == 0x20) {
            goto label_6;
        }
        if (cl == 0) {
            goto label_7;
        }
    } while (cl != 9);
label_6:
    if (cl == 0) {
label_7:
        eax--;
    } else {
        if (esi == 0) {
            goto label_5;
        }
        *((esi - 1)) = 0;
    }
label_5:
    edx = 0;
    *((esp + 0x24)) = edx;
label_1:
    if (*(eax) == 0) {
        goto label_8;
    }
    do {
        cl = *(eax);
        if (cl != 0x20) {
            if (cl != 9) {
                goto label_9;
            }
        }
        eax++;
    } while (1);
label_9:
    if (*(eax) == 0) {
        goto label_8;
    }
    if (ebp != 0) {
        *(ebp) = esi;
        ebp += ebx;
        *((esp + 0x18)) = ebp;
    }
    ecx = *((esp + 0x20));
    *(ecx)++;
label_0:
    bl = *(eax);
    ecx = 0;
    if (bl != 0x5c) {
        goto label_10;
    }
    do {
        bl = *((eax + 1));
        eax++;
        ecx++;
    } while (bl == 0x5c);
label_10:
    if (*(eax) == 0x22) {
        if ((cl & 1) == 0) {
            if (edx != 0) {
                if (*((eax + 1)) == 0x22) {
                    eax++;
                }
            } else {
                ebp = 0;
            }
            ebx = *((esp + 0x24));
            edx = 0;
            dl = (ebx == 0) ? 1 : 0;
            *((esp + 0x24)) = edx;
        }
        ecx >>= 1;
    }
    ebx = ecx;
    ecx--;
    if (ebx == 0) {
        goto label_11;
    }
    ecx++;
    do {
        if (esi != 0) {
            *(esi) = 0x5c;
            esi++;
        }
        ebx = *(edi);
        ebx++;
        ecx--;
        *(edi) = ebx;
    } while (ecx != 0);
label_11:
    cl = *(eax);
    if (cl != 0) {
        if (edx == 0) {
            if (cl == 0x20) {
                goto label_12;
            }
            if (cl == 9) {
                goto label_12;
            }
        }
        if (ebp != 0) {
            if (esi != 0) {
                ebx = ecx;
                ebx &= 0xff;
                if ((*((ebx + 0x408a79)) & 4) != 0) {
                    *(esi) = cl;
                    ecx = *(edi);
                    esi++;
                    eax++;
                    ecx++;
                    *(edi) = ecx;
                }
                cl = *(eax);
                *(esi) = cl;
                ecx = *(edi);
                esi++;
                ecx++;
                *(edi) = ecx;
                eax++;
                goto label_0;
            }
            ecx &= 0xff;
            if ((*((ecx + 0x408a79)) & 4) != 0) {
                ecx = *(edi);
                eax++;
                ecx++;
                *(edi) = ecx;
            }
            *(edi)++;
        }
        eax++;
        goto label_0;
    }
label_12:
    if (esi != 0) {
        *(esi) = 0;
        esi++;
    }
    ecx = *(edi);
    ebp = *((esp + 0x18));
    ecx++;
    ebx = 4;
    *(edi) = ecx;
    goto label_1;
label_8:
    if (ebp != 0) {
        *(ebp) = 0;
    }
    eax = *((esp + 0x20));
    ecx = *(eax);
    ecx++;
    *(eax) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404560 */
#include <stdint.h>
 
void RtlUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402c96 */
#include <stdint.h>
 
void fcn_00402c96 (int32_t arg_8h) {
    ebx = 0x406484;
    ecx = *((ebp + 8));
    *((ebx + 8)) = ecx;
    *((ebx + 4)) = eax;
    *((ebx + 0xc)) = ebp;
    ebx = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402bc0 */
#include <stdint.h>
 
void fcn_00402bc0 (PVOID TargetFrame) {
    RtlUnwind (*((ebp + 8)), 0x402bd8, 0, 0, ebp, edi, esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x402c02 */
#include <stdint.h>
 
int32_t fcn_00402c02 (int32_t arg_10h, uint32_t arg_24h) {
    int32_t var_8h;
    eax = *((esp + 0x10));
    *(fs:0) = esp;
    do {
        eax = *((esp + 0x20));
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        if (esi == -1) {
            goto label_0;
        }
        if (esi == *((esp + 0x24))) {
            goto label_0;
        }
        esi *= 3;
        ecx = *((ebx + esi*4));
        *((esp + 8)) = ecx;
        *((eax + 0xc)) = ecx;
        if (*((ebx + esi*4 + 4)) == 0) {
            eax = *((ebx + esi*4 + 8));
            fcn_00402c96 (0x101);
            uint32_t (*ebx + esi*4 + 8)() ();
        }
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403d90 */
#include <stdint.h>
 
int32_t fcn_00403d90 (int32_t arg_8h, int32_t arg_14h, int32_t arg_ch) {
    ecx = *((esp + 0xc));
    if (ecx == 0) {
        goto label_3;
    }
    ebx = ecx;
    esi = *((esp + 0x14));
    edi = *((esp + 0x10));
    if ((esi & 3) != 0) {
        goto label_4;
    }
    ecx >>= 2;
    if (ecx != 0) {
        goto label_5;
    }
    goto label_6;
    do {
label_4:
        al = *(esi);
        esi++;
        *(edi) = al;
        edi++;
        ecx--;
        if (ecx == 0) {
            goto label_7;
        }
        if (al == 0) {
            goto label_8;
        }
    } while ((esi & 3) != 0);
    ebx = ecx;
    ecx >>= 2;
    if (ecx != 0) {
        goto label_5;
    }
label_0:
    ebx &= 3;
    if (ebx == 0) {
        goto label_7;
    }
    do {
label_6:
        al = *(esi);
        esi++;
        *(edi) = al;
        edi++;
        if (al == 0) {
            goto label_9;
        }
        ebx--;
    } while (ebx != 0);
label_7:
    eax = *((esp + 0x10));
    esi = ebx;
    edi = ebx;
    return eax;
label_8:
    if ((edi & 3) == 0) {
        goto label_10;
    }
    do {
        *(edi) = al;
        edi++;
        ecx--;
        if (ecx == 0) {
            goto label_11;
        }
    } while ((edi & 3) != 0);
label_10:
    ebx = ecx;
    ecx >>= 2;
    if (ecx != 0) {
        goto label_12;
    }
    do {
label_2:
        *(edi) = al;
        edi++;
label_9:
        ebx--;
    } while (ebx != 0);
    esi = ebx;
label_3:
    eax = *((esp + 8));
    edi = ebx;
    return eax;
label_1:
    *(edi) = edx;
    edi += 4;
    ecx--;
    if (ecx == 0) {
        goto label_0;
    }
label_5:
    edx = 0x7efefeff;
    eax = *(esi);
    edx += eax;
    eax ^= 0xffffffff;
    eax ^= edx;
    edx = *(esi);
    esi += 4;
    if ((eax & 0x81010100) == 0) {
        goto label_1;
    }
    if (dl == 0) {
        goto label_13;
    }
    if (dh == 0) {
        goto label_14;
    }
    if ((edx & 0xff0000) == 0) {
        goto label_15;
    }
    if ((edx & 0xff000000) != 0) {
        goto label_1;
    }
    *(edi) = edx;
    goto label_16;
label_15:
    edx &= 0xffff;
    *(edi) = edx;
    goto label_16;
label_14:
    edx &= 0xff;
    *(edi) = edx;
    goto label_16;
label_13:
    edx = 0;
    *(edi) = edx;
label_16:
    edi += 4;
    eax = 0;
    ecx--;
    if (ecx == 0) {
        goto label_17;
    }
label_12:
    eax = 0;
    do {
        *(edi) = eax;
        edi += 4;
        ecx--;
    } while (ecx != 0);
label_17:
    ebx &= 3;
    if (ebx != 0) {
        goto label_2;
    }
label_11:
    eax = *((esp + 0x10));
    esi = ebx;
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403d00 */
#include <stdint.h>
 
int32_t fcn_00403d00 (int32_t arg_10h_2, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *(0x408bc0);
    ebx = 0;
    if (eax == 0) {
        eax = LoadLibraryA ("user32.dll");
        esi = eax;
        if (esi == 0) {
            goto label_0;
        }
        eax = GetProcAddress (esi, "MessageBoxA");
        *(0x408bc0) = eax;
        if (eax == 0) {
            goto label_0;
        }
        eax = void (*edi)(uint32_t, char*) (esi, "GetActiveWindow");
        *(0x408bc4) = eax;
        eax = void (*edi)(uint32_t, char*) (esi, "GetLastActivePopup");
        *(0x408bc8) = eax;
    }
    eax = *(0x408bc4);
    if (eax != 0) {
        eax = void (*eax)() ();
        ebx = eax;
    }
    if (ebx != 0) {
        eax = *(0x408bc8);
        if (eax == 0) {
            goto label_1;
        }
        eax = void (*eax)(uint32_t) (ebx);
        ebx = eax;
    }
label_1:
    eax = *((esp + 0x18));
    ecx = *((esp + 0x14));
    edx = *((esp + 0x10));
    eax = uint32_t (*0x408bc0)(uint32_t, uint32_t, uint32_t, uint32_t) (ebx, edx, ecx, eax);
    return eax;
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403020 */
#include <stdint.h>
 
int32_t fcn_00403020 (int32_t arg_4h) {
    eax = *((esp + 4));
    esi = eax + 0xf;
    eax = *(0x408774);
    esi &= 0xfffffff0;
    if (esi <= eax) {
        ecx = esi;
        ecx >>= 4;
        eax = fcn_00403940 (ecx);
        if (eax != 0) {
            goto label_0;
        }
    }
    edx = *(0x408bd4);
    HeapAlloc (edx, 0, esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403e90 */
#include <stdint.h>
 
int32_t fcn_00403e90 (int32_t arg_4h) {
    eax = *(0x408bd0);
    if (eax != 0) {
        ecx = *((esp + 4));
        eax = void (*eax)(uint32_t) (ecx);
        if (eax == 0) {
            goto label_0;
        }
        eax = 1;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403940 */
#include <stdint.h>
 
int32_t fcn_00403940 (int32_t arg_ch) {
    int32_t var_10h_2;
    int32_t var_18h;
    int32_t var_10h;
    ecx = *(0x408770);
    ebx = *((esp + 0xc));
    *((esp + 0x10)) = ecx;
label_0:
    eax = *((ecx + 0x10));
    if (eax == -1) {
        goto label_1;
    }
    edi = *((ecx + 8));
    ebp = ecx + 0x2018;
    esi = edi;
    esi -= ecx;
    esi -= 0x18;
    esi >>= 3;
    esi <<= 0xc;
    esi += eax;
    if (edi >= ebp) {
        goto label_2;
    }
    do {
        eax = *(edi);
        if (eax >= ebx) {
            if (*((edi + 4)) <= ebx) {
                goto label_3;
            }
            eax = fcn_00403b80 (esi, eax, ebx);
            if (eax != 0) {
                goto label_4;
            }
            ecx = *((esp + 0x10));
            *((edi + 4)) = ebx;
        }
label_3:
        edi += 8;
        esi += 0x1000;
    } while (edi < ebp);
label_2:
    ebp = *((ecx + 8));
    edi = *((ecx + 0x10));
    esi = ecx + 0x18;
    if (esi >= ebp) {
        goto label_1;
    }
    do {
        eax = *(esi);
        if (eax >= ebx) {
            if (*((esi + 4)) <= ebx) {
                goto label_5;
            }
            eax = fcn_00403b80 (edi, eax, ebx);
            if (eax != 0) {
                goto label_6;
            }
            ecx = *((esp + 0x10));
            *((esi + 4)) = ebx;
        }
label_5:
        esi += 8;
        edi += 0x1000;
    } while (esi < ebp);
label_1:
    ecx = *(ecx);
    eax = *(0x408770);
    *((esp + 0x10)) = ecx;
    if (ecx != eax) {
        goto label_0;
label_4:
        ecx = *((esp + 0x10));
        *(0x408770) = ecx;
        edx = *(edi);
        edx -= ebx;
        *(edi) = edx;
        *((ecx + 8)) = edi;
        return eax;
label_6:
        ecx = *((esp + 0x10));
        *(0x408770) = ecx;
        edx = *(esi);
        edx -= ebx;
        *(esi) = edx;
        *((ecx + 8)) = esi;
        return eax;
    }
    ecx |= 0xffffffff;
    do {
        if (*((ebp + 0x10)) != ecx) {
            eax = *((ebp + 0xc));
            if (eax != 0) {
                goto label_7;
            }
        }
        ebp = *(ebp);
        if (ebp == 0x406750) {
            goto label_8;
        }
    } while (1);
label_7:
    eax = *((ebp + 0xc));
    esi = *((ebp + 0x10));
    edi = eax;
    *((esp + 0x18)) = eax;
    edi -= ebp;
    edx = *(eax);
    edi -= 0x18;
    edi >>= 3;
    edi <<= 0xc;
    edi += esi;
    esi = 0;
    if (edx != ecx) {
        goto label_9;
    }
    do {
        if (esi >= 0x10) {
            goto label_9;
        }
        edx = *((eax + 8));
        eax += 8;
        esi++;
    } while (edx == ecx);
label_9:
    eax = esi;
    eax <<= 0xc;
    eax = VirtualAlloc (edi, eax, 0x1000, 4);
    if (eax != edi) {
        goto label_10;
    }
    edx = *((esp + 0x18));
    eax = *((esp + 0x10));
    ecx = 0;
    ecx = edx;
    if (esi <= 0) {
        goto label_11;
    }
    eax = edi + 4;
    do {
        edx = eax + 4;
        *(eax) = 0xf0;
        *((eax - 4)) = edx;
        *((eax + 0xf4)) = 0xff;
        *(ecx) = 0xf0;
        *((ecx + 4)) = 0xf1;
        eax += 0x1000;
        ecx += 8;
        esi--;
    } while (esi != 0);
    edx = *((esp + 0x18));
label_11:
    eax = ebp + 0x2018;
    *(0x408770) = ebp;
    if (ecx >= eax) {
        goto label_12;
    }
    do {
        if (*(ecx) == -1) {
            goto label_13;
        }
        ecx += 8;
    } while (ecx < eax);
label_13:
label_12:
    eax -= eax;
    eax &= ecx;
    *((ebp + 0xc)) = eax;
    *((edi + 8)) = bl;
    *((ebp + 8)) = edx;
    ecx = *(edx);
    ecx -= ebx;
    *(edx) = ecx;
    eax = *((edi + 4));
    eax -= ebx;
    ecx = edi + ebx + 8;
    *((edi + 4)) = eax;
    *(edi) = ecx;
    eax = edi + 0x100;
    return eax;
label_8:
    eax = fcn_004035e0 ();
    if (eax != 0) {
        ecx = *((eax + 0x10));
        *((ecx + 8)) = bl;
        edx = ecx + ebx + 8;
        *(0x408770) = eax;
        *(ecx) = edx;
        edx = 0xf0;
        edx -= ebx;
        ebx &= 0xff;
        *((ecx + 4)) = edx;
        edx = *((eax + 0x18));
        edx -= ebx;
        *((eax + 0x18)) = edx;
        eax = ecx + 0x100;
        return eax;
    }
label_10:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403eb0 */
#include <stdint.h>
 
int32_t fcn_00403eb0 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(0x408ce0);
    if (eax < ecx) {
        ecx = eax;
        edx = eax;
        ecx >>= 5;
        edx &= 0x1f;
        ecx = *((ecx*4 + 0x408be0));
        if ((*((ecx + edx*8 + 4)) & 1) == 0) {
            goto label_0;
        }
        eax = fcn_00404380 (eax);
        eax = FlushFileBuffers (eax);
        if (eax == 0) {
            eax = GetLastError ();
        } else {
            eax = 0;
        }
        if (eax == 0) {
            goto label_1;
        }
        *(0x408918) = eax;
    }
label_0:
    *(0x408914) = 9;
    eax |= 0xffffffff;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403090 */
#include <stdint.h>
 
uint32_t fcn_00403090 (int32_t arg_8h) {
    esi = *((esp + 8));
    if (esi == 0) {
        fcn_00403160 (esi);
        return;
    }
    eax = fcn_004030e0 (esi);
    if (eax != 0) {
        eax |= 0xffffffff;
        return eax;
    }
    eax = *((esi + 0xc));
    if ((ah & 0x40) != 0) {
        eax = *((esi + 0x10));
        eax = fcn_00403eb0 (eax);
        eax = -eax;
        eax -= eax;
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404200 */
#include <stdint.h>
 
int32_t fcn_00404200 (int32_t arg_8h) {
    eax = *(0x408910);
    eax++;
    *(0x408910) = eax;
    eax = fcn_00402fb0 (0x1000);
    ecx = *((esp + 8));
    *((ecx + 8)) = eax;
    eax = *((ecx + 0xc));
    if (eax != 0) {
        edx = *((ecx + 8));
        al |= 8;
        *((ecx + 0xc)) = eax;
        *((ecx + 0x18)) = 0x1000;
        *(ecx) = edx;
        *((ecx + 4)) = 0;
        return eax;
    }
    al |= 4;
    *((ecx + 0x18)) = 2;
    *((ecx + 0xc)) = eax;
    eax = ecx + 0x14;
    edx = eax;
    *((ecx + 8)) = eax;
    *(ecx) = edx;
    *((ecx + 4)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404260 */
#include <stdint.h>
 
int32_t fcn_00404260 (int32_t arg_8h) {
    esi = *((esp + 8));
    edi |= 0xffffffff;
    eax = *((esi + 0xc));
    if ((al & 0x40) != 0) {
        *((esi + 0xc)) = 0;
        eax |= 0xffffffff;
        esi = edi;
        return eax;
    }
    if ((al & 0x83) != 0) {
        eax = fcn_004030e0 (esi);
        edi = eax;
        fcn_00404520 (esi);
        eax = *((esi + 0x10));
        eax = fcn_00404440 (eax);
        if (eax < 0) {
            edi |= 0xffffffff;
            *((esi + 0xc)) = 0;
            eax = edi;
            return eax;
        }
        eax = *((esi + 0x1c));
        if (eax == 0) {
            goto label_0;
        }
        fcn_00403590 (eax);
        *((esi + 0x1c)) = 0;
    }
label_0:
    eax = edi;
    *((esi + 0xc)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404520 */
#include <stdint.h>
 
int32_t fcn_00404520 (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = *((esi + 0xc));
    if ((al & 0x83) != 0) {
        if ((al & 8) == 0) {
            goto label_0;
        }
        eax = *((esi + 8));
        fcn_00403590 (eax);
        eax = *((esi + 0xc));
        eax &= 0xfffffbf7;
        *((esi + 0xc)) = eax;
        eax = 0;
        *(esi) = eax;
        *((esi + 8)) = eax;
        *((esi + 4)) = eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x404440 */
#include <stdint.h>
 
int32_t fcn_00404440 (int32_t arg_10h) {
    eax = *(0x408ce0);
    esi = *((esp + 0x10));
    if (esi < eax) {
        eax = esi;
        edi = esi;
        eax >>= 5;
        edi &= 0x1f;
        ecx = *((eax*4 + 0x408be0));
        ebp = eax*4 + 0x408be0;
        edi <<= 3;
        if ((*((ecx + edi + 4)) & 1) == 0) {
            goto label_0;
        }
        eax = fcn_00404380 (esi);
        if (eax != -1) {
            if (esi != 1) {
                if (esi != 2) {
                    goto label_1;
                }
            }
            eax = fcn_00404380 (2);
            ebx = eax;
            eax = fcn_00404380 (1);
            if (eax != ebx) {
label_1:
                eax = fcn_00404380 (esi);
                eax = CloseHandle (eax);
                if (eax != 0) {
                    goto label_2;
                }
                eax = GetLastError ();
                ebx = eax;
            }
        } else {
label_2:
            ebx = 0;
        }
        fcn_004042e0 (esi);
        edx = *(ebp);
        *((edx + edi + 4)) = 0;
        if (ebx != 0) {
            eax = fcn_004043d0 (ebx);
            eax |= 0xffffffff;
            return eax;
        }
        eax = 0;
        return eax;
    }
label_0:
    *(0x408914) = 9;
    *(0x408918) = 0;
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403750 */
#include <stdint.h>
 
int32_t fcn_00403750 (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = *((esi + 0x10));
    VirtualFree (eax, 0, 0x8000, esi);
    if (*(0x408770) == esi) {
        ecx = *((esi + 4));
        *(0x408770) = ecx;
    }
    if (esi != 0x406750) {
        edx = *((esi + 4));
        eax = *(esi);
        *(edx) = eax;
        ecx = *(esi);
        edx = *((esi + 4));
        *((ecx + 4)) = edx;
        eax = *(0x408bd4);
        HeapFree (eax, 0, esi);
        return eax;
    }
    *(0x406760) = 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x403b80 */
#include <stdint.h>
 
int32_t fcn_00403b80 (uint32_t arg_14h, int32_t arg_18h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    edi = *((esp + 0x14));
    eax = *((edi + 4));
    ecx = *(edi);
    *((esp + 0x14)) = ecx;
    esi = ecx;
    ebx = edi + 0xf8;
    if (eax >= edx) {
        eax = ecx + edx;
        *(ecx) = dl;
        if (eax < ebx) {
            esi = *(edi);
            eax = *((edi + 4));
            esi += edx;
            eax -= edx;
            *(edi) = esi;
            *((edi + 4)) = eax;
        } else {
            edx = edi + 8;
            *((edi + 4)) = 0;
            *(edi) = edx;
        }
        eax = edi * 3;
        eax *= 5;
        edx = eax;
        eax = ecx + 8;
        eax <<= 4;
        eax -= edx;
        return eax;
    }
    eax += ecx;
    if (*(eax) != 0) {
        esi = eax;
    }
    eax = esi + edx;
    ebx = *((esp + 0x18));
    if (eax >= ebx) {
        goto label_2;
    }
label_0:
    al = *(esi);
    if (al != 0) {
        goto label_3;
    }
    eax = esi + 1;
    ecx = 1;
    if (*((esi + 1)) != 0) {
        goto label_4;
    }
    do {
        eax++;
        ecx++;
    } while (*(eax) == 0);
label_4:
    if (ecx >= edx) {
        goto label_5;
    }
    ebp = *((esp + 0x14));
    if (esi == ebp) {
        *((edi + 4)) = ecx;
        esi = eax;
        ecx = ebp;
    } else {
        ebx -= ecx;
        if (ebx < edx) {
            goto label_6;
        }
        ecx = *((esp + 0x14));
        esi = eax;
        goto label_7;
label_3:
        eax &= 0xff;
        esi += eax;
    }
label_7:
    ebp = esi + edx;
    eax = edi + 0xf8;
    if (ebp < eax) {
        goto label_0;
    }
    goto label_2;
label_5:
    eax = esi + edx;
    ebx = edi + 0xf8;
    if (eax < ebx) {
        ecx -= edx;
        *(edi) = eax;
        *((edi + 4)) = ecx;
        goto label_8;
    }
    ecx = edi + 8;
    *(edi) = ecx;
    goto label_9;
label_2:
    ebp = edi + 8;
    esi = ebp;
    if (esi >= ecx) {
        goto label_6;
    }
label_1:
    ecx = esi + edx;
    eax = edi + 0xf8;
    if (ecx >= eax) {
        goto label_6;
    }
    al = *(esi);
    if (al != 0) {
        goto label_10;
    }
    eax = esi + 1;
    ecx = 1;
    if (*((esi + 1)) != 0) {
        goto label_11;
    }
    do {
        eax++;
        ecx++;
    } while (*(eax) == 0);
label_11:
    if (ecx >= edx) {
        goto label_12;
    }
    ebx -= ecx;
    if (ebx < edx) {
        goto label_6;
    }
    esi = eax;
    goto label_13;
label_10:
    eax &= 0xff;
    esi += eax;
label_13:
    if (esi < *((esp + 0x14))) {
        goto label_1;
    }
    eax = 0;
    return eax;
label_12:
    eax = esi + edx;
    ebx = edi + 0xf8;
    if (eax < ebx) {
        ecx -= edx;
        *(edi) = eax;
        *((edi + 4)) = ecx;
    } else {
        *(edi) = ebp;
label_9:
        *((edi + 4)) = 0;
    }
label_8:
    eax = edi * 3;
    *(esi) = dl;
    edx = eax * 5;
    eax = esi + 8;
    eax <<= 4;
    eax -= edx;
    return eax;
label_6:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe @ 0x4042e0 */
#include <stdint.h>
 
int32_t fcn_004042e0 (int32_t arg_4h) {
    eax = *((esp + 4));
    ecx = *(0x408ce0);
    if (eax < ecx) {
        ecx = eax;
        esi = eax;
        ecx >>= 5;
        esi &= 0x1f;
        edx = *((ecx*4 + 0x408be0));
        edi = ecx*4 + 0x408be0;
        esi <<= 3;
        bl = *((edx + esi + 4));
        ecx = edx + esi;
        edx = 1;
        if ((dl & bl) == 0) {
            goto label_0;
        }
        if (*(ecx) == -1) {
            goto label_0;
        }
        if (*(0x40606c) == edx) {
            if (eax != 0) {
                eax--;
                if (eax != 0) {
                    eax--;
                    if (eax != 0) {
                        goto label_1;
                    }
                    SetStdHandle (0xfffffffffffffff4);
                    SetStdHandle (0xfffffffffffffff5);
                } else {
                } else {
                }
            }
            SetStdHandle (0xfffffffffffffff6, 0);
        }
label_1:
        eax = *(edi);
        *((eax + esi)) = 0xffffffff;
        eax = 0;
        return eax;
    }
label_0:
    *(0x408914) = 9;
    *(0x408918) = 0;
    eax |= 0xffffffff;
    return eax;
}
