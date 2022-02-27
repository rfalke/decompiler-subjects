/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4011a7 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_34h;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_4h;
    fcn_00403bd0 (0x4090d8);
    edi = 0x94;
    eax = 0x94;
    fcn_00403d30 ();
    *((ebp - 0x18)) = esp;
    esi = esp;
    *(esi) = edi;
    GetVersionExA (esi);
    ecx = *((esi + 0x10));
    *(0x40ba5c) = ecx;
    eax = *((esi + 4));
    *(0x40ba68) = eax;
    edx = *((esi + 8));
    *(0x40ba6c) = edx;
    esi = *((esi + 0xc));
    esi &= 0x7fff;
    *(0x40ba60) = esi;
    if (ecx != 2) {
        esi |= 0x8000;
        *(0x40ba60) = esi;
    }
    eax <<= 8;
    eax += edx;
    *(0x40ba64) = eax;
    edi = 0;
    eax = GetModuleHandleA (edi);
    if (*(eax) != 0x5a4d) {
        goto label_0;
    }
    ecx = *((eax + 0x3c));
    ecx += eax;
    if (*(ecx) != 0x4550) {
        goto label_0;
    }
    eax = *((ecx + 0x18));
    if (eax == 0x10b) {
        goto label_1;
    }
    while (*((ecx + 0x84)) <= 0xe) {
label_0:
        *((ebp - 0x1c)) = edi;
        goto label_2;
    }
    eax = 0;
    goto label_3;
label_1:
    if (*((ecx + 0x74)) <= 0xe) {
        goto label_0;
    }
    eax = 0;
label_3:
    al = (*((ecx + 0xe8)) != edi) ? 1 : 0;
    *((ebp - 0x1c)) = eax;
label_2:
    eax = fcn_00403b7f (edi);
    if (eax == 0) {
        if (*(0x40ba30) != 2) {
            fcn_00403391 ();
        }
        fcn_0040321a ();
        fcn_0040307f ();
    }
    fcn_00403add ();
    *((ebp - 4)) = edi;
    eax = fcn_00403932 ();
    if (eax < 0) {
        fcn_00401182 (0x1b);
    }
    eax = GetCommandLineA ();
    *(0x40d004) = eax;
    eax = fcn_00403810 ();
    *(0x40ba28) = eax;
    eax = fcn_0040376e ();
    if (eax < 0) {
        fcn_00401182 (8);
    }
    eax = fcn_0040353b ();
    if (eax < 0) {
        fcn_00401182 (9);
    }
    eax = fcn_004030af (1);
    *((ebp - 0x24)) = eax;
    if (eax != edi) {
        fcn_00401182 (eax);
    }
    eax = *(0x40ba7c);
    *(0x40ba80) = eax;
    eax = fcn_00401000 ();
    esi = eax;
    *((ebp - 0x28)) = esi;
    if (*((ebp - 0x1c)) == edi) {
        fcn_004031da (esi);
    }
    fcn_004031fc ();
    *((ebp - 4)) |= 0xffffffff;
    eax = esi;
    esp = ebp - 0x34;
    fcn_00403c0b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401114 */
#include <stdint.h>
 
uint32_t fcn_00401114 (int32_t arg_8h_2, int32_t arg_8h) {
    fcn_00401dbc (0x40b0c8, *((esp + 8)), esp + 8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401dbc */
#include <stdint.h>
 
int32_t fcn_00401dbc (int32_t arg_8h_2, int32_t arg_ch_2, int32_t arg_8h, int32_t arg_ch) {
    int32_t var_1e8h;
    int32_t var_1dch;
    uint32_t var_1d8h;
    int32_t var_1d4h;
    int32_t var_1d0h;
    int32_t var_1cch;
    uint32_t var_1c8h;
    int32_t var_1c4h;
    int32_t var_1c3h;
    uint32_t var_1c0h;
    uint32_t var_1bch;
    int32_t var_1b8h;
    uint32_t var_1b4h;
    int32_t var_1b0h;
    int32_t var_1ach;
    int32_t var_1a1h_2;
    int32_t var_1a8h;
    uint32_t var_19ch_2;
    int32_t var_1a1h;
    int32_t var_1a0h;
    int32_t var_196h_2;
    int32_t var_195h_2;
    uint32_t var_19ch;
    int32_t var_198h;
    uint32_t var_197h;
    uint32_t var_196h;
    uint32_t var_195h;
    int32_t var_194h;
    uint32_t var_18eh;
    uint32_t var_18dh;
    int32_t var_18ch;
    int32_t var_185h;
    int32_t var_184h;
    int32_t var_17bh;
    uint32_t var_17dh;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_4h_2;
    int32_t var_4h;
    fcn_00403bd0 (0x409160);
    eax = *(0x40b498);
    *((ebp - 0x1c)) = eax;
    eax = 0;
    *((ebp - 0x1bc)) = eax;
    *((ebp - 0x1d8)) = eax;
    *((ebp - 0x1b0)) = eax;
    *((ebp - 0x194)) = eax;
    *((ebp - 0x195)) = al;
    *((ebp - 0x184)) = eax;
    *((ebp - 0x1b8)) = eax;
label_0:
    esi = *((ebp + 0xc));
label_4:
    al = *(esi);
    if (al == 0) {
        goto label_5;
    }
    eax = (int32_t) al;
    if (*(0x40b4a0) > 1) {
        fcn_00404318 (eax, 8);
    } else {
        ecx = *(str.________________________________H);
        eax = *((ecx + eax*2));
        eax &= 8;
    }
    edi = 0;
    if (eax == edi) {
        goto label_6;
    }
    *((ebp - 0x184))--;
    do {
        *((ebp - 0x184))++;
        edx = *((ebp + 8));
        eax = fcn_00401da6 ();
        esi = eax;
        eax = fcn_004044e0 (esi);
    } while (eax != 0);
    if (esi == -1) {
        goto label_7;
    }
    fcn_00404474 (esi, *((ebp + 8)));
    do {
label_7:
        *((ebp + 0xc))++;
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = fcn_004044e0 (eax);
    } while (eax != 0);
    goto label_0;
label_6:
    esi = *((ebp + 0xc));
    if (*(esi) != 0x25) {
        goto label_8;
    }
    *((ebp - 0x1a0)) = edi;
    *((ebp - 0x198)) = 0;
    *((ebp - 0x19c)) = edi;
    *((ebp - 0x1b4)) = edi;
    *((ebp - 0x18c)) = edi;
    *((ebp - 0x1a1)) = 0;
    *((ebp - 0x197)) = 0;
    *((ebp - 0x18e)) = 0;
    *((ebp - 0x17d)) = 0;
    *((ebp - 0x196)) = 0;
    *((ebp - 0x185)) = 0;
    *((ebp - 0x18d)) = 1;
    *((ebp - 0x1c8)) = edi;
    do {
        esi++;
        ebx = *(esi);
        eax = (int32_t) bl;
        if (*(0x40b4a0) > 1) {
            fcn_00404318 (eax, 4);
        } else {
            ecx = *(str.________________________________H);
            eax = *((ecx + eax*2));
            eax &= 4;
        }
        if (eax != 0) {
            *((ebp - 0x1b4))++;
            eax = edi * 5;
            edi = ebx + eax*2 - 0x30;
        } else {
            if (ebx <= 0x4e) {
                if (ebx == 0x4e) {
                    goto label_9;
                }
                if (ebx != 0x2a) {
                    if (ebx == 0x46) {
                        goto label_9;
                    }
                    if (ebx != 0x49) {
                        if (ebx == 0x4c) {
                            *((ebp - 0x18d))++;
                        } else {
                            cl = *((esi + 1));
                            if (cl == 0x36) {
                                eax = esi + 2;
                                if (*(eax) != 0x34) {
                                    goto label_10;
                                }
                                esi = eax;
                                *((ebp - 0x1c8))++;
                                *((ebp - 0x1ac)) = 0;
                                *((ebp - 0x1a8)) = 0;
                                goto label_9;
                            }
label_10:
                            if (cl == 0x33) {
                                eax = esi + 2;
                                if (*(eax) != 0x32) {
                                    goto label_11;
                                }
                                esi = eax;
                                goto label_9;
                            }
label_11:
                            if (cl == 0x64) {
                                goto label_9;
                            }
                            if (cl == 0x69) {
                                goto label_9;
                            }
                            if (cl == 0x6f) {
                                goto label_9;
                            }
                            if (cl == 0x78) {
                                goto label_9;
                            }
                            if (cl != 0x58) {
                                goto label_12;
                            }
                            *((ebp - 0x18e))++;
                        } else {
                        } else {
                        }
                    }
                    if (ebx == 0x68) {
                        goto label_13;
                    }
                    if (ebx == 0x6c) {
                        goto label_14;
                    }
                    if (ebx == 0x77) {
                        goto label_15;
                    }
label_12:
                    *((ebp - 0x17d))++;
                    goto label_9;
label_14:
                    *((ebp - 0x18d))++;
label_15:
                    *((ebp - 0x185))++;
                    goto label_9;
label_13:
                    *((ebp - 0x18d))--;
                    *((ebp - 0x185))--;
                }
            }
        }
label_9:
    } while (*((ebp - 0x17d)) == 0);
    *((ebp - 0x18c)) = edi;
    *((ebp + 0xc)) = esi;
    if (*((ebp - 0x18e)) == 0) {
        eax = *((ebp + 0x10));
        *((ebp - 0x1dc)) = eax;
        eax += 4;
        *((ebp + 0x10)) = eax;
        ebx = *((eax - 4));
        *((ebp - 0x1b0)) = ebx;
    } else {
        ebx = *((ebp - 0x1b0));
    }
    *((ebp - 0x17d)) = 0;
    if (*((ebp - 0x185)) == 0) {
        al = *(esi);
        if (al != 0x53) {
            *((ebp - 0x185)) = 0xff;
            if (al != 0x43) {
                goto label_16;
            }
        }
        *((ebp - 0x185)) = 1;
    }
label_16:
    edi = *(esi);
    edi |= 0x20;
    *((ebp - 0x1c0)) = edi;
    if (edi == 0x6e) {
        goto label_17;
    }
    if (edi == 0x63) {
        goto label_18;
    }
    if (edi == 0x7b) {
        goto label_18;
    }
    do {
        *((ebp - 0x184))++;
        edx = *((ebp + 8));
        eax = fcn_00401da6 ();
        esi = eax;
        eax = fcn_004044e0 (esi);
    } while (eax != 0);
    *((ebp - 0x194)) = esi;
    esi = *((ebp + 0xc));
    goto label_17;
label_18:
    *((ebp - 0x184))++;
    edx = *((ebp + 8));
    eax = fcn_00401da6 ();
    *((ebp - 0x194)) = eax;
label_17:
    ecx = *((ebp - 0x1b4));
    if (ecx != 0) {
        if (*((ebp - 0x18c)) == 0) {
            goto label_19;
        }
    }
    if (edi > 0x6f) {
        goto label_20;
    }
    if (edi == 0x6f) {
        goto label_21;
    }
    if (edi == 0x63) {
        goto label_22;
    }
    if (edi == 0x64) {
        goto label_21;
    }
    if (edi <= 0x64) {
        goto label_23;
    }
    if (edi > 0x67) {
        if (edi != 0x69) {
            if (edi != 0x6e) {
                goto label_23;
            }
            eax = *((ebp - 0x184));
            if (*((ebp - 0x18e)) == 0) {
                goto label_24;
            }
            goto label_25;
        }
        edi = 0x64;
label_1:
        ebx = *((ebp - 0x194));
        if (ebx != 0x2d) {
            goto label_26;
        }
        *((ebp - 0x197)) = 1;
        goto label_27;
    }
    esi = ebp - 0x17c;
    ebx = *((ebp - 0x194));
    if (ebx == 0x2d) {
        *((ebp - 0x17c)) = bl;
        esi = ebp - 0x17b;
    } else {
        if (ebx != 0x2b) {
            goto label_28;
        }
    }
    *((ebp - 0x18c))--;
    *((ebp - 0x184))++;
    edi = *((ebp + 8));
    edx = *((ebp + 8));
    eax = fcn_00401da6 ();
    ebx = eax;
    *((ebp - 0x194)) = ebx;
    goto label_29;
label_28:
    edi = *((ebp + 8));
label_29:
    if (*((ebp - 0x1b4)) != 0) {
        if (*((ebp - 0x18c)) <= 0x15d) {
            goto label_30;
        }
    }
    *((ebp - 0x18c)) = 0x15d;
    do {
label_30:
        if (*(0x40b4a0) > 1) {
            fcn_00404318 (ebx, 4);
        } else {
            eax = *(str.________________________________H);
            eax = *((eax + ebx*2));
            eax &= 4;
        }
        if (eax == 0) {
            goto label_31;
        }
        eax = *((ebp - 0x18c));
        *((ebp - 0x18c))--;
        if (eax == 0) {
            goto label_31;
        }
        *((ebp - 0x19c))++;
        *(esi) = bl;
        esi++;
        *((ebp - 0x184))++;
        edx = edi;
        eax = fcn_00401da6 ();
        ebx = eax;
        *((ebp - 0x194)) = ebx;
    } while (1);
label_31:
    if (*(0x40b4a4) != bl) {
        goto label_32;
    }
    eax = *((ebp - 0x18c));
    *((ebp - 0x18c))--;
    if (eax == 0) {
        goto label_32;
    }
    *((ebp - 0x184))++;
    edx = edi;
    eax = fcn_00401da6 ();
    ebx = eax;
    al = *(0x40b4a4);
    *(esi) = al;
    esi++;
    do {
        *((ebp - 0x194)) = ebx;
        if (*(0x40b4a0) > 1) {
            fcn_00404318 (ebx, 4);
        } else {
            eax = *(str.________________________________H);
            eax = *((eax + ebx*2));
            eax &= 4;
        }
        if (eax == 0) {
            goto label_32;
        }
        eax = *((ebp - 0x18c));
        *((ebp - 0x18c))--;
        if (eax == 0) {
            goto label_32;
        }
        *((ebp - 0x19c))++;
        *(esi) = bl;
        esi++;
        *((ebp - 0x184))++;
        edx = edi;
        eax = fcn_00401da6 ();
        ebx = eax;
    } while (1);
label_32:
    if (*((ebp - 0x19c)) == 0) {
        goto label_33;
    }
    if (ebx != 0x65) {
        if (ebx != 0x45) {
            goto label_33;
        }
    }
    eax = *((ebp - 0x18c));
    *((ebp - 0x18c))--;
    if (eax == 0) {
        goto label_33;
    }
    *(esi) = 0x65;
    esi++;
    *((ebp - 0x184))++;
    edx = edi;
    eax = fcn_00401da6 ();
    ebx = eax;
    *((ebp - 0x194)) = ebx;
    if (ebx == 0x2d) {
        *(esi) = al;
        esi++;
    } else {
        if (ebx != 0x2b) {
            goto label_34;
        }
    }
    eax = *((ebp - 0x18c));
    *((ebp - 0x18c))--;
    if (eax != 0) {
        goto label_35;
    }
    *((ebp - 0x18c)) &= eax;
    while (1) {
label_35:
        edx = edi;
        *((ebp - 0x184))++;
        eax = fcn_00401da6 ();
        ebx = eax;
        *((ebp - 0x194)) = ebx;
label_34:
        if (*(0x40b4a0) > 1) {
            fcn_00404318 (ebx, 4);
        } else {
            eax = *(str.________________________________H);
            eax = *((eax + ebx*2));
            eax &= 4;
        }
        if (eax == 0) {
            goto label_33;
        }
        eax = *((ebp - 0x18c));
        *((ebp - 0x18c))--;
        if (eax == 0) {
            goto label_33;
        }
        *((ebp - 0x19c))++;
        *(esi) = bl;
        esi++;
    }
label_33:
    *((ebp - 0x184))--;
    if (ebx != -1) {
        fcn_00404474 (ebx, edi);
    }
    if (*((ebp - 0x19c)) == 0) {
        goto label_5;
    }
    if (*((ebp - 0x18e)) != 0) {
        goto label_25;
    }
    *((ebp - 0x1b8))++;
    *(esi) = 0;
    eax = *((ebp - 0x18d));
    eax--;
    uint32_t (*0x40b350)(uint32_t, uint32_t*, uint32_t) (eax, *((ebp - 0x1b0)), ebp - 0x17c);
    goto label_25;
label_22:
    if (ecx != 0) {
        goto label_36;
    }
    *((ebp - 0x1b4)) = 1;
    *((ebp - 0x18c))++;
    do {
label_36:
        if (*((ebp - 0x185)) <= 0) {
            goto label_37;
        }
        *((ebp - 0x196)) = 1;
        goto label_37;
label_20:
        eax = edi;
        eax -= 0x70;
        if (eax == 0) {
            goto label_38;
        }
        eax -= 3;
    } while (eax == 0);
    eax--;
    eax--;
    if (eax == 0) {
        goto label_21;
    }
    eax -= 3;
    if (eax == 0) {
        goto label_1;
    }
    eax -= 3;
    if (eax != 0) {
label_23:
        eax = *(esi);
        if (eax != *((ebp - 0x194))) {
label_19:
            goto label_39;
        }
        *((ebp - 0x195))--;
        if (*((ebp - 0x18e)) != 0) {
            goto label_25;
        }
        eax = *((ebp - 0x1dc));
        *((ebp + 0x10)) = eax;
        goto label_25;
    }
    if (*((ebp - 0x185)) > 0) {
        *((ebp - 0x196)) = 1;
    }
    edi = *((ebp + 0xc));
    edi++;
    *((ebp + 0xc)) = edi;
    *((ebp - 0x1d0)) = edi;
    if (*(edi) == 0x5e) {
        edi++;
        *((ebp - 0x1d0)) = edi;
        *((ebp - 0x1a1)) = 0xff;
    }
    ebx = *((ebp - 0x1bc));
    if (ebx == 0) {
        *((ebp - 4)) &= ebx;
        eax = 0x20;
        fcn_00403d30 (0x20);
        *((ebp - 0x18)) = esp;
        ebx = esp;
        *((ebp - 0x1bc)) = ebx;
        *((ebp - 4)) |= 0xffffffff;
    }
    al = fcn_004045e0 (ebx, 0, 0x20);
    if (*((ebp - 0x1c0)) != 0x7b) {
        goto label_40;
    }
    if (*(edi) != 0x5d) {
        goto label_40;
    }
    dl = 0x5d;
    edi++;
    *((ebx + 0xb)) = 0x20;
    goto label_41;
label_2:
    edi++;
    if (al != 0x2d) {
        goto label_42;
    }
    if (dl == 0) {
        goto label_42;
    }
    cl = *(edi);
    if (cl == 0x5d) {
        goto label_42;
    }
    edi++;
    if (dl < cl) {
        al = cl;
    } else {
        al = dl;
        dl = cl;
    }
    if (dl > al) {
        goto label_43;
    }
    esi = (int32_t) dl;
    al -= dl;
    al++;
    eax = (int32_t) al;
    *((ebp - 0x1d4)) = eax;
    do {
        eax = esi;
        eax >>= 3;
        eax += ebx;
        ecx = esi;
        ecx &= 7;
        dl = 1;
        dl <<= cl;
        *(eax) |= dl;
        esi++;
        *((ebp - 0x1d4))--;
    } while (*((ebp - 0x1d4)) != 0);
label_43:
    dl = 0;
    goto label_41;
label_42:
    *((ebp - 0x198)) = al;
    ecx = (int32_t) al;
    eax = ecx;
    eax >>= 3;
    eax += ebx;
    ecx &= 7;
    dl = 1;
    dl <<= cl;
    *(eax) |= dl;
label_40:
    dl = *((ebp - 0x198));
label_41:
    al = *(edi);
    if (al != 0x5d) {
        goto label_2;
    }
    if (al == 0) {
        goto label_5;
    }
    ebx = *((ebp - 0x1b0));
    if (*((ebp - 0x1c0)) == 0x7b) {
        *((ebp + 0xc)) = edi;
    }
    edi = *((ebp - 0x1c0));
label_37:
    esi = ebx;
    *((ebp - 0x184))--;
    if (*((ebp - 0x194)) != -1) {
        fcn_00404474 (*((ebp - 0x194)), *((ebp + 8)));
    }
label_3:
    if (*((ebp - 0x1b4)) != 0) {
        eax = *((ebp - 0x18c));
        *((ebp - 0x18c))--;
        if (eax == 0) {
            goto label_44;
        }
    }
    *((ebp - 0x184))++;
    edx = *((ebp + 8));
    eax = fcn_00401da6 ();
    *((ebp - 0x194)) = eax;
    if (eax == -1) {
        goto label_45;
    }
    if (edi != 0x63) {
        if (edi == 0x73) {
            if (eax >= 9) {
                if (eax <= 0xd) {
                    goto label_46;
                }
            }
            if (eax != 0x20) {
                goto label_47;
            }
        }
label_46:
        if (edi != 0x7b) {
            goto label_45;
        }
        ecx = eax;
        ecx &= 7;
        edx = 0;
        edx++;
        edx <<= cl;
        ecx = eax;
        ecx >>= 3;
        edi = *((ebp - 0x1bc));
        ecx = *((ecx + edi));
        edi = *((ebp - 0x1a1));
        ecx ^= edi;
        if ((ecx & edx) == 0) {
            goto label_45;
        }
        edi = *((ebp - 0x1c0));
    }
label_47:
    if (*((ebp - 0x18e)) != 0) {
        goto label_48;
    }
    if (*((ebp - 0x196)) == 0) {
        goto label_49;
    }
    *((ebp - 0x1c4)) = al;
    eax = (int32_t) al;
    ecx = *(str.________________________________H);
    if ((*((ecx + eax*2 + 1)) & 0x80) != 0) {
        *((ebp - 0x184))++;
        edx = *((ebp + 8));
        al = fcn_00401da6 ();
        *((ebp - 0x1c3)) = al;
    }
    fcn_00404509 (ebp - 0x1cc, ebp - 0x1c4, *(0x40b4a0));
    ax = *((ebp - 0x1cc));
    *(ebx) = ax;
    ebx++;
    ebx++;
    goto label_50;
label_26:
    if (ebx == 0x2b) {
label_27:
        *((ebp - 0x18c))--;
        if (*((ebp - 0x18c)) == 0) {
            if (ecx != 0) {
                *((ebp - 0x17d)) = 1;
            }
        } else {
            *((ebp - 0x184))++;
            edx = *((ebp + 8));
            eax = fcn_00401da6 ();
            ebx = eax;
            *((ebp - 0x194)) = ebx;
        }
    }
    if (ebx != 0x30) {
        goto label_51;
    }
    *((ebp - 0x184))++;
    edx = *((ebp + 8));
    eax = fcn_00401da6 ();
    ebx = eax;
    *((ebp - 0x194)) = ebx;
    if (bl == 0x78) {
        goto label_52;
    }
    if (bl == 0x58) {
        goto label_52;
    }
    *((ebp - 0x19c)) = 1;
    if (edi == 0x78) {
        goto label_53;
    }
    if (*((ebp - 0x1b4)) != 0) {
        *((ebp - 0x18c))--;
        if (*((ebp - 0x18c)) != 0) {
            goto label_54;
        }
        *((ebp - 0x17d))++;
    }
label_54:
    do {
        edi = 0x6f;
        goto label_51;
label_53:
        *((ebp - 0x184))--;
        if (ebx != -1) {
            fcn_00404474 (ebx, *((ebp + 8)));
        }
        ebx = 0x30;
        goto label_55;
label_52:
        *((ebp - 0x184))++;
        edx = *((ebp + 8));
        eax = fcn_00401da6 ();
        ebx = eax;
        *((ebp - 0x194)) = ebx;
        if (*((ebp - 0x1b4)) != 0) {
            *((ebp - 0x18c)) -= 2;
            if (*((ebp - 0x18c)) >= 1) {
                goto label_56;
            }
            *((ebp - 0x17d))++;
        }
label_56:
    } while (1);
label_49:
    *(ebx) = al;
    ebx++;
label_50:
    *((ebp - 0x1b0)) = ebx;
    goto label_3;
label_48:
    esi++;
    goto label_3;
label_45:
    *((ebp - 0x184))--;
    if (eax != -1) {
        fcn_00404474 (eax, *((ebp + 8)));
    }
label_44:
    if (esi == ebx) {
        goto label_5;
    }
    if (*((ebp - 0x18e)) != 0) {
        goto label_25;
    }
    *((ebp - 0x1b8))++;
    if (*((ebp - 0x1c0)) == 0x63) {
        goto label_25;
    }
    eax = *((ebp - 0x1b0));
    if (*((ebp - 0x196)) != 0) {
        *(eax) = 0;
        goto label_25;
    }
    *(eax) = 0;
    goto label_25;
label_38:
    *((ebp - 0x18d)) = 1;
label_21:
    ebx = *((ebp - 0x194));
    if (ebx == 0x2d) {
        *((ebp - 0x197)) = 1;
    } else {
        if (ebx != 0x2b) {
            goto label_51;
        }
    }
    *((ebp - 0x18c))--;
    if (*((ebp - 0x18c)) == 0) {
        if (ecx != 0) {
            *((ebp - 0x17d)) = 1;
        }
    } else {
        *((ebp - 0x184))++;
        edx = *((ebp + 8));
        eax = fcn_00401da6 ();
        ebx = eax;
label_55:
        *((ebp - 0x194)) = ebx;
    }
label_51:
    if (*((ebp - 0x1c8)) == 0) {
        goto label_57;
    }
    if (*((ebp - 0x17d)) != 0) {
        goto label_58;
    }
    esi = 0x80;
    do {
        if (edi != 0x78) {
            if (edi != 0x70) {
                if (*(0x40b4a0) > 1) {
                    fcn_00404318 (ebx, 4);
                } else {
                    eax = *(str.________________________________H);
                    eax = *((eax + ebx*2));
                    eax &= 4;
                }
                if (eax == 0) {
                    goto label_59;
                }
                if (edi == 0x6f) {
                    if (ebx >= 0x38) {
                        goto label_59;
                    }
                    eax = *((ebp - 0x1ac));
                    ecx = *((ebp - 0x1a8));
                    __asm ("shld ecx, eax, 3");
                    eax <<= 3;
                    *((ebp - 0x1ac)) = eax;
                    *((ebp - 0x1a8)) = ecx;
                    goto label_60;
                }
                eax = fcn_00404730 (*((ebp - 0x1ac)), *((ebp - 0x1a8)), 0xa, 0);
                *((ebp - 0x1ac)) = eax;
                *((ebp - 0x1a8)) = edx;
            }
        } else {
            if (*(0x40b4a0) > 1) {
                fcn_00404318 (ebx, esi);
            } else {
                eax = *(str.________________________________H);
                eax = *((eax + ebx*2));
                eax &= esi;
            }
            if (eax != 0) {
                eax = *((ebp - 0x1ac));
                ecx = *((ebp - 0x1a8));
                __asm ("shld ecx, eax, 4");
                eax <<= 4;
                *((ebp - 0x1ac)) = eax;
                *((ebp - 0x1a8)) = ecx;
                eax = ebx;
                eax = fcn_00401d74 ();
                ebx = eax;
            } else {
label_59:
                *((ebp - 0x17d))++;
            }
        }
label_60:
        if (*((ebp - 0x17d)) == 0) {
            *((ebp - 0x19c))++;
            eax = ebx - 0x30;
            edx:eax = (int64_t) eax;
            *((ebp - 0x1ac)) += eax;
            *((ebp - 0x1a8)) += edx;
            if (*((ebp - 0x1b4)) != 0) {
                *((ebp - 0x18c))--;
                if (*((ebp - 0x18c)) == 0) {
                    *((ebp - 0x17d)) = 1;
                }
                *((ebp - 0x184))++;
                edx = *((ebp + 8));
                eax = fcn_00401da6 ();
                ebx = eax;
            } else {
            } else {
                *((ebp - 0x184))--;
            }
        }
        if (ebx == -1) {
            goto label_61;
        }
        fcn_00404474 (ebx, *((ebp + 8)));
label_61:
    } while (*((ebp - 0x17d)) == 0);
    *((ebp - 0x194)) = ebx;
label_58:
    if (*((ebp - 0x197)) == 0) {
        goto label_62;
    }
    eax = *((ebp - 0x1ac));
    eax = -eax;
    ecx = *((ebp - 0x1a8));
    ecx += 0;
    ecx = -ecx;
    *((ebp - 0x1ac)) = eax;
    *((ebp - 0x1a8)) = ecx;
    goto label_62;
label_57:
    if (*((ebp - 0x17d)) != 0) {
        goto label_63;
    }
    esi = 0x80;
    do {
        if (edi != 0x78) {
            if (edi != 0x70) {
                if (*(0x40b4a0) > 1) {
                    fcn_00404318 (ebx, 4);
                } else {
                    eax = *(str.________________________________H);
                    eax = *((eax + ebx*2));
                    eax &= 4;
                }
                if (eax == 0) {
                    goto label_64;
                }
                if (edi == 0x6f) {
                    if (ebx >= 0x38) {
                        goto label_64;
                    }
                    *((ebp - 0x1a0)) <<= 3;
                    goto label_65;
                }
                eax = *((ebp - 0x1a0));
                eax *= 5;
                eax <<= 1;
                *((ebp - 0x1a0)) = eax;
            }
        } else {
            if (*(0x40b4a0) > 1) {
                fcn_00404318 (ebx, esi);
            } else {
                eax = *(str.________________________________H);
                eax = *((eax + ebx*2));
                eax &= esi;
            }
            if (eax != 0) {
                *((ebp - 0x1a0)) <<= 4;
                eax = ebx;
                eax = fcn_00401d74 ();
                ebx = eax;
            } else {
label_64:
                *((ebp - 0x17d))++;
            }
        }
label_65:
        if (*((ebp - 0x17d)) == 0) {
            *((ebp - 0x19c))++;
            eax = *((ebp - 0x1a0));
            eax = eax + ebx - 0x30;
            *((ebp - 0x1a0)) = eax;
            if (*((ebp - 0x1b4)) != 0) {
                *((ebp - 0x18c))--;
                if (*((ebp - 0x18c)) == 0) {
                    *((ebp - 0x17d)) = 1;
                }
                *((ebp - 0x184))++;
                edx = *((ebp + 8));
                eax = fcn_00401da6 ();
                ebx = eax;
            } else {
            } else {
                *((ebp - 0x184))--;
            }
        }
        if (ebx == -1) {
            goto label_66;
        }
        fcn_00404474 (ebx, *((ebp + 8)));
label_66:
    } while (*((ebp - 0x17d)) == 0);
    *((ebp - 0x194)) = ebx;
label_63:
    if (*((ebp - 0x197)) != 0) {
        ebp - 0x1a0 = -ebp - 0x1a0;
    }
label_62:
    if (edi == 0x46) {
        *((ebp - 0x19c)) = 0;
    }
    if (*((ebp - 0x19c)) == 0) {
        goto label_5;
    }
    if (*((ebp - 0x18e)) == 0) {
        *((ebp - 0x1b8))++;
        ebx = *((ebp - 0x1b0));
        eax = *((ebp - 0x1a0));
label_24:
        if (*((ebp - 0x1c8)) != 0) {
            eax = *((ebp - 0x1ac));
            *(ebx) = eax;
            eax = *((ebp - 0x1a8));
            *((ebx + 4)) = eax;
        } else {
            if (*((ebp - 0x18d)) != 0) {
                *(ebx) = eax;
            } else {
                *(ebx) = ax;
            }
        }
    }
label_25:
    *((ebp - 0x195))++;
    *((ebp + 0xc))++;
    esi = *((ebp + 0xc));
    goto label_67;
label_8:
    *((ebp - 0x184))++;
    edx = *((ebp + 8));
    eax = fcn_00401da6 ();
    ebx = eax;
    *((ebp - 0x194)) = ebx;
    eax = *(esi);
    esi++;
    *((ebp + 0xc)) = esi;
    if (eax == ebx) {
        eax = (int32_t) bl;
        ecx = *(str.________________________________H);
        if ((*((ecx + eax*2 + 1)) & 0x80) == 0) {
            goto label_67;
        }
        *((ebp - 0x184))++;
        edx = *((ebp + 8));
        eax = fcn_00401da6 ();
        ecx = *(esi);
        esi++;
        *((ebp + 0xc)) = esi;
        if (ecx == eax) {
            goto label_68;
        }
        if (eax == -1) {
            goto label_69;
        }
        fcn_00404474 (eax, *((ebp + 8)));
    }
label_69:
    if (ebx == -1) {
label_39:
        goto label_5;
    }
    fcn_00404474 (*((ebp - 0x194)), *((ebp + 8)));
    goto label_5;
label_68:
    *((ebp - 0x184))--;
label_67:
    if (*((ebp - 0x194)) != -1) {
        goto label_4;
    }
    if (*(esi) != 0x25) {
        goto label_5;
    }
    eax = *((ebp + 0xc));
    if (*((eax + 1)) == 0x6e) {
        goto label_0;
    }
label_5:
    if (*((ebp - 0x1d8)) == 1) {
        fcn_0040403c (*((ebp - 0x1bc)));
    }
    eax = *((ebp - 0x1b8));
    if (*((ebp - 0x194)) == -1) {
        if (eax != 0) {
            goto label_70;
        }
        if (*((ebp - 0x195)) != al) {
            goto label_70;
        }
        eax |= 0xffffffff;
    }
label_70:
    esp = ebp - 0x1e8;
    ecx = *((ebp - 0x1c));
    fcn_004041a2 ();
    fcn_00403c0b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4010e3 */
#include <stdint.h>
 
uint32_t fcn_004010e3 (int32_t arg_18h_2, int32_t arg_18h) {
    esi = 0x40b0e8;
    eax = fcn_0040136e (esi);
    edi = eax;
    eax = esp + 0x18;
    eax = fcn_004014c0 ();
    ebx = eax;
    fcn_004013f6 (edi, esi);
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40136e */
#include <stdint.h>
 
uint32_t fcn_0040136e (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = fcn_00403df1 (*((esi + 0x10)));
    if (eax != 0) {
        if (esi == 0x40b0e8) {
            eax = 0;
        } else {
            if (esi != 0x40b108) {
                goto label_0;
            }
            eax = 0;
            eax++;
        }
        *(0x40ba3c)++;
        if ((*((esi + 0xc)) & 0x10c) != 0) {
            goto label_0;
        }
        edi = eax*4 + 0x40ba34;
        ebx = 0x1000;
        if (*(edi) == 0) {
            eax = fcn_00403ddf (ebx);
            *(edi) = eax;
            if (eax == 0) {
                eax = esi + 0x14;
                *((esi + 8)) = eax;
                *(esi) = eax;
                eax = 2;
                *((esi + 0x18)) = eax;
                *((esi + 4)) = eax;
            }
        } else {
            edi = *(edi);
            *((esi + 8)) = edi;
            *(esi) = edi;
            *((esi + 0x18)) = ebx;
            *((esi + 4)) = ebx;
        }
        *((esi + 0xc)) |= 0x1102;
        edi = 2;
        eax = 0;
        ebx = 2;
        eax++;
        esi = 2;
        return eax;
    }
label_0:
    eax = 0;
    esi = 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4014c0 */
#include <stdint.h>
 
int32_t fcn_004014c0 (void) {
    ebp = esp - 0x1d4;
    eax = *(0x40b498);
    *((ebp + 0x1d0)) = eax;
    eax = 0;
    *((ebp - 0x48)) = eax;
    *((ebp - 0x4c)) = eax;
    *((ebp - 0x60)) = eax;
    eax = *((ebp + 0x1e0));
    bl = *(eax);
    ecx = 0;
    if (bl == 0) {
        goto label_5;
    }
    edi = eax;
    goto label_6;
label_4:
    ecx = *((ebp - 0x70));
label_6:
    edi++;
    *((ebp + 0x1e0)) = edi;
    if (*((ebp - 0x4c)) < 0) {
        goto label_7;
    }
    if (bl >= 0x20) {
        if (bl <= 0x78) {
            eax = (int32_t) bl;
            eax = *((eax + sym.imp.KERNEL32.dll_SetStdHandle));
            eax &= 0xf;
        }
    } else {
        eax = 0;
    }
    eax = *((ecx + eax*8 + 0x4090e8));
    eax >>= 4;
    ecx = 7;
    *((ebp - 0x70)) = eax;
    if (eax > ecx) {
        goto label_8;
    }
    /* switch table (8 cases) at 0x401c9a */
    eax = 0;
    *((ebp - 0x40)) |= 0xffffffff;
    *((ebp - 0x6c)) = eax;
    *((ebp - 0x64)) = eax;
    *((ebp - 0x58)) = eax;
    *((ebp - 0x54)) = eax;
    *((ebp - 0x3c)) = eax;
    *((ebp - 0x5c)) = eax;
    goto label_8;
    eax = (int32_t) bl;
    eax -= 0x20;
    if (eax != 0) {
        eax -= 3;
        if (eax != 0) {
            eax -= 8;
            if (eax != 0) {
                eax--;
                eax--;
                if (eax != 0) {
                    eax -= 3;
                    if (eax != 0) {
                        goto label_8;
                    }
                    *((ebp - 0x3c)) |= 8;
                    goto label_8;
                }
                *((ebp - 0x3c)) |= 4;
                goto label_8;
            }
            *((ebp - 0x3c)) |= 1;
            goto label_8;
        }
        *((ebp - 0x3c)) |= 0x80;
        goto label_8;
    }
    *((ebp - 0x3c)) |= 2;
    goto label_8;
    if (bl == 0x2a) {
        *((ebp + 0x1e4)) += 4;
        eax = *((ebp + 0x1e4));
        eax = *((eax - 4));
        *((ebp - 0x58)) = eax;
        if (eax >= 0) {
            goto label_8;
        }
        *((ebp - 0x3c)) |= 4;
        ebp - 0x58 = -ebp - 0x58;
        goto label_8;
    }
    eax = *((ebp - 0x58));
    ecx = (int32_t) bl;
    eax *= 5;
    eax = ecx + eax*2 - 0x30;
    *((ebp - 0x58)) = eax;
    goto label_8;
    *((ebp - 0x40)) = 0;
    goto label_8;
    if (bl == 0x2a) {
        *((ebp + 0x1e4)) += 4;
        eax = *((ebp + 0x1e4));
        eax = *((eax - 4));
        *((ebp - 0x40)) = eax;
        if (eax >= 0) {
            goto label_8;
        }
        *((ebp - 0x40)) |= 0xffffffff;
        goto label_8;
    }
    eax = *((ebp - 0x40));
    ecx = (int32_t) bl;
    eax *= 5;
    eax = ecx + eax*2 - 0x30;
    *((ebp - 0x40)) = eax;
    goto label_8;
    if (bl != 0x49) {
        if (bl != 0x68) {
            if (bl != 0x6c) {
                if (bl != 0x77) {
                    goto label_8;
                }
                *((ebp - 0x3b)) |= 8;
                goto label_8;
            }
            *((ebp - 0x3c)) |= 0x10;
            goto label_8;
        }
        *((ebp - 0x3c)) |= 0x20;
        goto label_8;
    }
    al = *(edi);
    if (al == 0x36) {
        if (*((edi + 1)) != 0x34) {
            goto label_9;
        }
        edi++;
        edi++;
        *((ebp - 0x3b)) |= 0x80;
        *((ebp + 0x1e0)) = edi;
        goto label_8;
    }
label_9:
    if (al == 0x33) {
        if (*((edi + 1)) != 0x32) {
            goto label_10;
        }
        edi++;
        edi++;
        *((ebp - 0x3b)) &= 0x7f;
        *((ebp + 0x1e0)) = edi;
        goto label_8;
    }
label_10:
    if (al == 0x64) {
        goto label_8;
    }
    if (al == 0x69) {
        goto label_8;
    }
    if (al == 0x6f) {
        goto label_8;
    }
    if (al == 0x75) {
        goto label_8;
    }
    if (al == 0x78) {
        goto label_8;
    }
    if (al == 0x58) {
        goto label_8;
    }
    *((ebp - 0x70)) = 0;
    ecx = *(str.________________________________H);
    *((ebp - 0x5c)) = 0;
    eax = (int32_t) bl;
    if ((*((ecx + eax*2 + 1)) & 0x80) != 0) {
        ecx = *((ebp + 0x1dc));
        esi = ebp - 0x4c;
        al = bl;
        fcn_00401432 ();
        bl = *(edi);
        edi++;
        *((ebp + 0x1e0)) = edi;
    }
    ecx = *((ebp + 0x1dc));
    esi = ebp - 0x4c;
    al = bl;
    fcn_00401432 ();
    goto label_8;
    eax = (int32_t) bl;
    if (eax > 0x67) {
        goto label_11;
    }
    if (eax < 0x65) {
        if (eax > 0x58) {
            goto label_12;
        }
        if (eax == 0x58) {
            goto label_13;
        }
        eax -= 0x43;
        if (eax == 0) {
            goto label_14;
        }
        eax--;
        eax--;
        if (eax != 0) {
            eax--;
            eax--;
            if (eax == 0) {
                goto label_15;
            }
            eax -= 0xc;
            if (eax != 0) {
                goto label_16;
            }
            if ((*((ebp - 0x3c)) & 0x830) == 0) {
                *((ebp - 0x3b)) |= 8;
            }
label_0:
            ecx = *((ebp - 0x40));
            if (ecx == -1) {
                ecx = 0x7fffffff;
            }
            *((ebp + 0x1e4)) += 4;
            eax = *((ebp + 0x1e4));
            eax = *((eax - 4));
            *((ebp - 0x44)) = eax;
            if ((*((ebp - 0x3c)) & 0x810) == 0) {
                goto label_17;
            }
            if (eax == 0) {
                eax = *(0x40b0c4);
                *((ebp - 0x44)) = eax;
            }
            eax = *((ebp - 0x44));
            *((ebp - 0x5c)) = 1;
            goto label_18;
        }
label_15:
        *((ebp - 0x6c)) = 1;
        bl += 0x20;
    }
    *((ebp - 0x3c)) |= 0x40;
    esi = ebp - 0x38;
    *((ebp - 0x44)) = esi;
    if (*((ebp - 0x40)) >= 0) {
        goto label_19;
    }
    *((ebp - 0x40)) = 6;
    goto label_20;
label_14:
    if ((*((ebp - 0x3c)) & 0x830) != 0) {
        goto label_21;
    }
    *((ebp - 0x3b)) |= 8;
    do {
label_21:
        *((ebp + 0x1e4)) += 4;
        eax = *((ebp + 0x1e4));
        if ((*((ebp - 0x3c)) & 0x810) == 0) {
            goto label_22;
        }
        eax = *((eax - 4));
        eax = fcn_0040410b (ebp - 0x38, eax);
        *((ebp - 0x48)) = eax;
        if (eax >= 0) {
            goto label_23;
        }
        *((ebp - 0x64)) = 1;
        goto label_23;
label_12:
        eax -= 0x5a;
        if (eax == 0) {
            goto label_24;
        }
        eax -= 9;
    } while (eax == 0);
    eax--;
    if (eax != 0) {
        goto label_16;
    }
    do {
        *((ebp - 0x3c)) |= 0x40;
label_1:
        *((ebp - 0x48)) = 0xa;
label_2:
        ebx = *((ebp - 0x3c));
        esi = 0x8000;
        if ((esi & ebx) == 0) {
            goto label_25;
        }
        ecx = *((ebp + 0x1e4));
        eax = *(ecx);
        edx = *((ecx + 4));
        ecx += 8;
        *((ebp + 0x1e4)) = ecx;
        goto label_26;
label_22:
        al = *((eax - 4));
        *((ebp - 0x38)) = al;
        *((ebp - 0x48)) = 1;
label_23:
        eax = ebp - 0x38;
        *((ebp - 0x44)) = eax;
        goto label_16;
label_24:
        *((ebp + 0x1e4)) += 4;
        eax = *((ebp + 0x1e4));
        eax = *((eax - 4));
        if (eax != 0) {
            ecx = *((eax + 4));
            if (ecx == 0) {
                goto label_27;
            }
            eax = *(eax);
            *((ebp - 0x44)) = ecx;
            if ((*((ebp - 0x3b)) & 8) != 0) {
                edx:eax = (int64_t) eax;
                eax -= edx;
                eax >>= 1;
                *((ebp - 0x5c)) = 1;
                goto label_28;
            }
            *((ebp - 0x5c)) = 0;
            goto label_28;
        }
label_27:
        eax = *(str._null_);
        *((ebp - 0x44)) = eax;
        fcn_00404080 ();
        goto label_29;
        if (*((ebp - 0x5c)) == 0) {
label_19:
            if (bl != 0x67) {
                goto label_20;
            }
            *((ebp - 0x40)) = 1;
        } else {
            eax = 0x200;
            if (*((ebp - 0x40)) > eax) {
                *((ebp - 0x40)) = eax;
            }
            edi = 0xa3;
            if (*((ebp - 0x40)) <= edi) {
                goto label_20;
            }
            eax = *((ebp - 0x40));
            eax += 0x15d;
            eax = fcn_00403ddf (eax);
            *((ebp - 0x60)) = eax;
            if (eax != 0) {
                *((ebp - 0x44)) = eax;
                esi = eax;
            } else {
                *((ebp - 0x40)) = edi;
            }
        }
label_20:
        eax = *((ebp + 0x1e4));
        ecx = *(eax);
        eax += 8;
        *((ebp + 0x1e4)) = eax;
        eax = *((eax - 4));
        *((ebp - 0x7c)) = eax;
        eax = (int32_t) bl;
        eax = ebp - 0x80;
        *((ebp - 0x80)) = ecx;
        uint32_t (*0x40b348)(uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t*) (eax, esi, eax, *((ebp - 0x40)), *((ebp - 0x6c)));
        edi = *((ebp - 0x3c));
        edi &= 0x80;
        if (edi != 0) {
            if (*((ebp - 0x40)) != 0) {
                goto label_30;
            }
            uint32_t (*0x40b354)(uint32_t) (esi);
        }
label_30:
        if (bl == 0x67) {
            if (edi != 0) {
                goto label_31;
            }
            uint32_t (*0x40b34c)(uint32_t) (esi);
        }
label_31:
        if (*(esi) == 0x2d) {
            *((ebp - 0x3b)) |= 1;
            esi++;
            *((ebp - 0x44)) = esi;
        }
label_29:
        eax = fcn_00404080 (esi);
        goto label_28;
label_11:
        eax -= 0x69;
    } while (eax == 0);
    eax -= 5;
    if (eax == 0) {
        goto label_32;
    }
    eax--;
    if (eax == 0) {
        goto label_33;
    }
    eax--;
    if (eax == 0) {
        goto label_34;
    }
    eax -= 3;
    if (eax == 0) {
        goto label_0;
    }
    eax--;
    eax--;
    if (eax == 0) {
        goto label_1;
    }
    eax -= 3;
    if (eax != 0) {
        goto label_16;
    }
    *((ebp - 0x68)) = 0x27;
    goto label_35;
    do {
        ecx--;
        if (*(eax) == 0) {
            goto label_36;
        }
        eax++;
        eax++;
label_18:
    } while (ecx != 0);
label_36:
    eax -= *((ebp - 0x44));
    eax >>= 1;
    goto label_28;
label_17:
    if (eax == 0) {
        eax = *(str._null_);
        *((ebp - 0x44)) = eax;
    }
    eax = *((ebp - 0x44));
    while (ecx != 0) {
        ecx--;
        if (*(eax) == 0) {
            goto label_37;
        }
        eax++;
    }
label_37:
    eax -= *((ebp - 0x44));
    goto label_28;
label_34:
    *((ebp - 0x40)) = 8;
label_13:
    *((ebp - 0x68)) = ecx;
label_35:
    *((ebp - 0x48)) = 0x10;
    if ((*((ebp - 0x3c)) & 0x80) == 0) {
        goto label_2;
    }
    al = *((ebp - 0x68));
    al += 0x51;
    *((ebp - 0x50)) = 0x30;
    *((ebp - 0x4f)) = al;
    *((ebp - 0x54)) = 2;
    goto label_2;
label_33:
    *((ebp - 0x48)) = 8;
    if ((*((ebp - 0x3c)) & 0x80) == 0) {
        goto label_2;
    }
    *((ebp - 0x3b)) |= 2;
    goto label_2;
label_32:
    *((ebp + 0x1e4)) += 4;
    eax = *((ebp + 0x1e4));
    eax = *((eax - 4));
    if ((*((ebp - 0x3c)) & 0x20) != 0) {
        cx = *((ebp - 0x4c));
        *(eax) = cx;
    } else {
        ecx = *((ebp - 0x4c));
        *(eax) = ecx;
    }
    *((ebp - 0x64)) = 1;
    goto label_38;
label_25:
    *((ebp + 0x1e4)) += 4;
    eax = *((ebp + 0x1e4));
    if ((bl & 0x20) == 0) {
        goto label_39;
    }
    if ((bl & 0x40) == 0) {
        goto label_40;
    }
    eax = *((eax - 4));
    do {
label_3:
        edx:eax = (int64_t) eax;
        goto label_26;
label_40:
        eax = *((eax - 4));
    } while (1);
label_39:
    eax = *((eax - 4));
    if ((bl & 0x40) != 0) {
        goto label_3;
    }
    edx = 0;
label_26:
    if ((bl & 0x40) != 0) {
        if (edx > 0) {
            goto label_41;
        }
        if (edx >= 0) {
            if (eax >= 0) {
                goto label_41;
            }
        }
        eax = -eax;
        edx += 0;
        edx = -edx;
        *((ebp - 0x3b)) |= 1;
    }
label_41:
    ebx = eax;
    edi = edx;
    if ((*((ebp - 0x3c)) & esi) == 0) {
        edi = 0;
    }
    if (*((ebp - 0x40)) < 0) {
        *((ebp - 0x40)) = 1;
    } else {
        *((ebp - 0x3c)) &= 0xfffffff7;
        eax = 0x200;
        if (*((ebp - 0x40)) <= eax) {
            goto label_42;
        }
        *((ebp - 0x40)) = eax;
    }
label_42:
    eax = ebx;
    eax |= edi;
    if (eax == 0) {
        *((ebp - 0x54)) = 0;
    }
    esi = ebp + 0x1c7;
    do {
        eax = *((ebp - 0x40));
        *((ebp - 0x40))--;
        if (eax <= 0) {
            eax = ebx;
            eax |= edi;
            if (eax == 0) {
                goto label_43;
            }
        }
        eax = *((ebp - 0x48));
        edx:eax = (int64_t) eax;
        eax = fcn_004041b0 (ebx, edi, eax, edx);
        ecx += 0x30;
        *((ebp - 0x74)) = ebx;
        ebx = eax;
        edi = edx;
        if (ecx > 0x39) {
            ecx += *((ebp - 0x68));
        }
        *(esi) = cl;
        esi--;
    } while (1);
label_43:
    eax = ebp + 0x1c7;
    eax -= esi;
    esi++;
    *((ebp - 0x48)) = eax;
    *((ebp - 0x44)) = esi;
    if ((*((ebp - 0x3b)) & 2) != 0) {
        ecx = esi;
        if (*(ecx) == 0x30) {
            if (eax != 0) {
                goto label_16;
            }
        }
        *((ebp - 0x44))--;
        ecx = *((ebp - 0x44));
        *(ecx) = 0x30;
        eax++;
label_28:
        *((ebp - 0x48)) = eax;
    }
label_16:
    if (*((ebp - 0x64)) != 0) {
        goto label_38;
    }
    ebx = *((ebp - 0x3c));
    if ((bl & 0x40) != 0) {
        if ((bh & 1) != 0) {
            *((ebp - 0x50)) = 0x2d;
        } else {
            if ((bl & 1) != 0) {
                *((ebp - 0x50)) = 0x2b;
            } else {
                if ((bl & 2) == 0) {
                    goto label_44;
                }
                *((ebp - 0x50)) = 0x20;
            }
        }
        *((ebp - 0x54)) = 1;
    }
label_44:
    esi = *((ebp - 0x58));
    esi -= *((ebp - 0x54));
    esi -= *((ebp - 0x48));
    if ((bl & 0xc) == 0) {
        eax = ebp - 0x4c;
        fcn_00401465 (0x20, esi, *((ebp + 0x1dc)));
    }
    edi = *((ebp + 0x1dc));
    eax = ebp - 0x4c;
    ecx = ebp - 0x50;
    fcn_00401489 (*((ebp - 0x54)));
    if ((bl & 8) != 0) {
        if ((bl & 4) != 0) {
            goto label_45;
        }
        eax = ebp - 0x4c;
        fcn_00401465 (0x30, esi, edi);
    }
label_45:
    if (*((ebp - 0x5c)) == 0) {
        goto label_46;
    }
    if (*((ebp - 0x48)) <= 0) {
        goto label_46;
    }
    eax = *((ebp - 0x48));
    ebx = *((ebp - 0x44));
    *((ebp - 0x74)) = eax;
    do {
        *((ebp - 0x74))--;
        eax = 0;
        ax = *(ebx);
        eax = fcn_0040410b (ebp + 0x1c8, eax);
        ebx++;
        ebx++;
        if (eax <= 0) {
            goto label_47;
        }
        edi = *((ebp + 0x1dc));
        eax = ebp - 0x4c;
        ecx = ebp + 0x1c8;
        fcn_00401489 (eax);
    } while (*((ebp - 0x74)) != 0);
    goto label_47;
label_46:
    ecx = *((ebp - 0x44));
    eax = ebp - 0x4c;
    fcn_00401489 (*((ebp - 0x48)));
label_47:
    if ((*((ebp - 0x3c)) & 4) != 0) {
        eax = ebp - 0x4c;
        fcn_00401465 (0x20, esi, *((ebp + 0x1dc)));
    }
label_38:
    if (*((ebp - 0x60)) != 0) {
        fcn_0040403c (*((ebp - 0x60)));
        *((ebp - 0x60)) = 0;
    }
label_8:
    edi = *((ebp + 0x1e0));
    bl = *(edi);
    if (bl != 0) {
        goto label_4;
    }
label_7:
label_5:
    ecx = *((ebp + 0x1d0));
    eax = *((ebp - 0x4c));
    fcn_004041a2 ();
    ebp += 0x1d4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4013f6 */
#include <stdint.h>
 
int32_t fcn_004013f6 (uint32_t arg_4h, int32_t arg_ch) {
    if (*((esp + 4)) != 0) {
        esi = *((esp + 0xc));
        if ((*((esi + 0xd)) & 0x10) == 0) {
            goto label_0;
        }
        fcn_00403e18 (esi);
        *((esi + 0xd)) &= 0xee;
        *((esi + 0x18)) = 0;
        *(esi) = 0;
        *((esi + 8)) = 0;
    } else {
        eax = *((esp + 0xc));
        if ((*((eax + 0xd)) & 0x10) == 0) {
            goto label_0;
        }
        fcn_00403e18 (eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40112c */
#include <stdint.h>
 
int32_t fcn_0040112c (void) {
    eax = 0x402fb3;
    *(0x40b348) = eax;
    *(0x40b34c) = 0x402c7b;
    *(0x40b350) = 0x402ce0;
    *(0x40b354) = 0x402c23;
    *(0x40b358) = 0x402cc6;
    *(0x40b35c) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403056 */
#include <stdint.h>
 
int32_t fcn_00403056 (void) {
    do {
        *(fp_stack--) = *(0x409190);
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x409188);
        *((ebp - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x10));
        fp_stack[0] /= *((ebp - 8));
        fp_stack[0] *= *((ebp - 8));
        *((ebp - 0x10)) -= fp_stack[0];
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x18));
        fp_status = fp_compare(fp_stack[0], *(0x409180));
        fp_stack++;
        ax = fp_status;
        if ((ah & 0x41) == 0) {
            eax = 0;
            eax++;
            return eax;
        }
        eax = 0;
        return eax;
        eax = GetModuleHandleA ("KERNEL32");
        if (eax != 0) {
            eax = GetProcAddress (eax, 0x409198);
            if (eax == 0) {
                goto label_0;
            }
            void (*eax)(uint32_t) (0);
            return eax;
        }
label_0:
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403004 */
#include <stdint.h>
 
void fcn_00403004 (void) {
    fcn_00405318 (0x10000, 0x30000);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405318 */
#include <stdint.h>
 
int32_t fcn_00405318 (int32_t arg_8h_2, int32_t arg_8h) {
    eax = *((esp + 8));
    eax &= 0xfff7ffff;
    fcn_004052e6 (*((esp + 8)), eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4052e6 */
#include <stdint.h>
 
uint32_t fcn_004052e6 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    __asm ("wait");
    ebx = *((ebp - 4));
    eax = fcn_004051c6 ();
    ebx = eax;
    eax = *((ebp + 0xc));
    eax = ~eax;
    ebx &= eax;
    eax = *((ebp + 8));
    eax &= *((ebp + 0xc));
    ebx |= eax;
    eax = fcn_00405258 ();
    *((ebp + 0xc)) = eax;
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4051c6 */
#include <stdint.h>
 
int32_t fcn_004051c6 (void) {
    eax = 0;
    if ((bl & 1) != 0) {
        eax = 0x10;
    }
    if ((bl & 4) != 0) {
        eax |= 8;
    }
    if ((bl & 8) != 0) {
        eax |= 4;
    }
    if ((bl & 0x10) != 0) {
        eax |= 2;
    }
    if ((bl & 0x20) != 0) {
        eax |= 1;
    }
    if ((bl & 2) != 0) {
        eax |= 0x80000;
    }
    edx = (int32_t) bx;
    ecx = edx;
    esi = 0xc00;
    ecx &= esi;
    edi = 0x300;
    if (ecx != 0) {
        if (ecx != 0x400) {
            if (ecx != 0x800) {
                if (ecx != esi) {
                    goto label_0;
                }
                eax |= edi;
                eax |= ebp;
            } else {
            } else {
                eax |= 0x100;
            }
        }
    }
label_0:
    edx &= edi;
    if (edx != 0) {
        if (edx != ebp) {
            goto label_1;
        }
        eax |= 0x10000;
    } else {
        eax |= 0x20000;
    }
label_1:
    esi = edi;
    if ((bh & 0x10) != 0) {
        eax |= 0x40000;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405258 */
#include <stdint.h>
 
int32_t fcn_00405258 (void) {
    eax = 0;
    if ((bl & 0x10) != 0) {
        eax++;
    }
    if ((bl & 8) != 0) {
        eax |= 4;
    }
    if ((bl & 4) != 0) {
        eax |= 8;
    }
    if ((bl & 2) != 0) {
        eax |= 0x10;
    }
    if ((bl & 1) != 0) {
        eax |= 0x20;
    }
    if ((ebx & 0x80000) != 0) {
        eax |= 2;
    }
    ecx = ebx;
    edx = 0x300;
    ecx &= edx;
    esi = 0x200;
    if (ecx != 0) {
        if (ecx != 0x100) {
            if (ecx != esi) {
                if (ecx != edx) {
                    goto label_0;
                }
                eax |= 0xc00;
                eax |= 0x800;
            } else {
            } else {
                eax |= 0x400;
            }
        }
    }
label_0:
    ecx = ebx;
    ecx &= 0x30000;
    if (ecx != 0) {
        if (ecx != 0x10000) {
            goto label_1;
        }
        eax |= esi;
    } else {
        eax |= edx;
    }
label_1:
    if ((ebx & 0x40000) != 0) {
        eax |= 0x1000;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403391 */
#include <stdint.h>
 
int32_t fcn_00403391 (void) {
    eax = *(0x40ba30);
    if (eax != 1) {
        if (eax != 0) {
            goto label_0;
        }
        if (*(0x40b0bc) != 1) {
            goto label_0;
        }
    }
    fcn_0040321a ();
    eax = *(0x40baa0);
    if (eax != 0) {
        void (*eax)() ();
    }
    fcn_0040321a ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40321a */
#include <stdint.h>
 
int32_t fcn_0040321a (void) {
    ebp = esp - 0x8c;
    eax = *(0x40b498);
    ecx = *((ebp + 0x94));
    *((ebp + 0x88)) = eax;
    edx = 0;
    eax = 0;
    do {
        if (ecx == *((eax*8 + 0x40b360))) {
            goto label_0;
        }
        eax++;
    } while (eax < 0x13);
label_0:
    esi = eax;
    esi <<= 3;
    if (ecx == *((esi + 0x40b360))) {
        eax = *(0x40ba30);
        if (eax != 1) {
            if (eax == edx) {
                if (*(0x40b0bc) == 1) {
                    goto label_1;
                }
            }
            if (ecx == 0xfc) {
                goto label_2;
            }
            *((ebp + 0x84)) = dl;
            eax = GetModuleFileNameA (edx, ebp - 0x80, 0x104);
            if (eax == 0) {
                eax = ebp - 0x80;
                fcn_00404f20 (eax, "<program name unknown>");
            }
            edi = ebp - 0x80;
            eax = edi;
            eax = fcn_00404080 (eax);
            eax++;
            if (eax > 0x3c) {
                eax = edi;
                eax = fcn_00404080 (eax);
                edi = eax;
                eax = ebp - 0x80;
                eax -= 0x3b;
                edi += eax;
                fcn_004054f0 (edi, 0x4095c8, 3);
            }
            eax = fcn_00404080 (edi);
            ebx = eax;
            fcn_00404080 (*((esi + 0x40b364)));
            eax = ebx + eax + 0x1c;
            eax += 3;
            eax &= 0xfffffffc;
            fcn_00403d30 ();
            ebx = esp;
            fcn_00404f20 (ebx, "Runtime Error!\n\nProgram: ");
            fcn_00404f30 (ebx, edi);
            fcn_00404f30 (ebx, 0x4095a8);
            fcn_00404f30 (ebx, *((esi + 0x40b364)));
            fcn_004053ea (ebx, "Microsoft Visual C++ Runtime Library", 0x12010);
        } else {
label_1:
            eax = ebp + 0x94;
            eax = fcn_00404080 (esi + 0x40b364);
            eax = GetStdHandle (0xfffffffffffffff4, *(esi), eax);
            WriteFile (eax);
        }
    }
label_2:
    esp = ebp - 0x8c;
    ecx = *((ebp + 0x88));
    fcn_004041a2 ();
    ebp += 0x8c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403bd0 */
#include <stdint.h>
 
int32_t fcn_00403bd0 (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h_2;
    int32_t var_4h;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *((ebp - 8));
    *((ebp - 0x18)) = esp;
    eax = *((ebp - 4));
    *((ebp - 4)) = 0xffffffff;
    *((ebp - 8)) = eax;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403d30 */
#include <stdint.h>
 
int32_t fcn_00403d30 (int32_t arg_8h) {
    if (eax < 0x1000) {
        eax = -eax;
        eax += esp;
        eax += 4;
        tmp_0 = eax;
        eax = esp;
        esp = tmp_0;
        eax = *(eax);
        return eax;
    }
    ecx = esp + 8;
    do {
        ecx -= 0x1000;
        eax -= 0x1000;
    } while (eax >= 0x1000);
    ecx -= eax;
    eax = esp;
    ecx = *(eax);
    eax = *((eax + 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403b7f */
#include <stdint.h>
 
int32_t fcn_00403b7f (uint32_t arg_4h) {
    eax = 0;
    al = (*((esp + 4)) == eax) ? 1 : 0;
    eax = HeapCreate (eax, 0x1000, 0);
    *(0x40bec0) = eax;
    if (eax != 0) {
        eax = fcn_00403b65 ();
        *(0x40bec4) = eax;
        if (eax != 3) {
            goto label_0;
        }
        eax = fcn_00405d3d ();
        if (eax != 0) {
            goto label_0;
        }
        eax = HeapDestroy (*(0x40bec0));
    }
    eax = 0;
    return eax;
label_0:
    eax = 0;
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403b65 */
#include <stdint.h>
 
int32_t fcn_00403b65 (void) {
    if (*(0x40ba5c) == 2) {
        if (*(0x40ba68) < 5) {
            goto label_0;
        }
        eax = 0;
        eax++;
        return eax;
    }
label_0:
    eax = 3;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405d3d */
#include <stdint.h>
 
uint32_t fcn_00405d3d (void) {
    int32_t var_4h;
    eax = HeapAlloc (*(0x40bec0), 0, 0x140);
    *(0x40bc80) = eax;
    if (eax == 0) {
        return eax;
    }
    ecx = *((esp + 4));
    *(0x40bc78) = 0;
    *(0x40bc7c) = 0;
    *(0x40bc88) = eax;
    eax = 0;
    *(0x40bc84) = ecx;
    *(0x40bc8c) = 0x10;
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40307f */
#include <stdint.h>
 
uint32_t fcn_0040307f (void) {
    int32_t var_4h_3;
    int32_t var_4h_2;
    UINT uExitCode;
    eax = GetModuleHandleA ("mscoree.dll");
    if (eax != 0) {
        eax = GetProcAddress (eax, "CorExitProcess");
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t*) (*((esp + 4)));
    }
label_0:
    ExitProcess (*((esp + 4)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403add */
#include <stdint.h>
 
int32_t fcn_00403add (void) {
    uint32_t var_1ch;
    int32_t var_4h;
    fcn_00403bd0 (0x4095e8);
    *((ebp - 0x1c)) = 0x409dfc;
    do {
        if (*((ebp - 0x1c)) >= 0x409dfc) {
            goto label_0;
        }
        *((ebp - 4)) = 0;
        eax = *((ebp - 0x1c));
        eax = *(eax);
        if (eax != 0) {
            void (*eax)() ();
        }
        *((ebp - 4)) |= 0xffffffff;
        *((ebp - 0x1c)) += 4;
    } while (1);
label_0:
    fcn_00403c0b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403932 */
#include <stdint.h>
 
uint32_t fcn_00403932 (void) {
    LPSTARTUPINFOA lpStartupInfo;
    uint32_t var_3eh;
    int32_t var_40h;
    eax = fcn_00403ddf (0x100);
    if (eax == 0) {
        eax |= 0xffffffff;
        goto label_1;
    }
    *(0x40bee0) = eax;
    *(0x40bec8) = 0x20;
    ecx = eax + 0x100;
    while (eax < ecx) {
        *(eax) |= 0xffffffff;
        *((eax + 4)) = 0;
        *((eax + 5)) = 0xa;
        ecx = *(0x40bee0);
        eax += 8;
        ecx += 0x100;
    }
    GetStartupInfoA (esp + 0xc, edi, esi, ebx);
    if (*((esp + 0x3e)) == 0) {
        goto label_2;
    }
    eax = *((esp + 0x40));
    if (eax == 0) {
        goto label_2;
    }
    esi = *(eax);
    ebp = eax + 4;
    eax = 0x800;
    ebx = esi + ebp;
    if (esi >= eax) {
        esi = eax;
    }
    if (*(0x40bec8) >= esi) {
        goto label_3;
    }
    edi = 0x40bee4;
label_0:
    eax = fcn_00403ddf (0x100);
    if (eax == 0) {
        goto label_4;
    }
    *(0x40bec8) += 0x20;
    *(edi) = eax;
    ecx = eax + 0x100;
    while (eax < ecx) {
        *(eax) |= 0xffffffff;
        *((eax + 4)) = 0;
        *((eax + 5)) = 0xa;
        ecx = *(edi);
        eax += 8;
        ecx += 0x100;
    }
    edi += 4;
    if (*(0x40bec8) < esi) {
        goto label_0;
    }
    goto label_3;
label_4:
    esi = *(0x40bec8);
label_3:
    edi = 0;
    if (esi <= 0) {
        goto label_5;
    }
    do {
        eax = *(ebx);
        if (eax != -1) {
            cl = *(ebp);
            if ((cl & 1) == 0) {
                goto label_6;
            }
            if ((cl & 8) == 0) {
                eax = GetFileType (eax);
                if (eax == 0) {
                    goto label_6;
                }
            }
            eax = edi;
            eax >>= 5;
            eax = *((eax*4 + 0x40bee0));
            ecx = edi;
            ecx &= 0x1f;
            eax = eax + ecx*8;
            ecx = *(ebx);
            *(eax) = ecx;
            cl = *(ebp);
            *((eax + 4)) = cl;
        }
label_6:
        edi++;
        ebp++;
        ebx += 4;
    } while (edi < esi);
label_5:
label_2:
    ebx = 0;
    do {
        eax = *(0x40bee0);
        esi = eax + ebx*8;
        if (*(esi) == -1) {
            *((esi + 4)) = 0x81;
            if (ebx == 0) {
                eax = 0xfffffffffffffff6;
            } else {
                eax = ebx;
                eax--;
                eax = -eax;
                eax -= eax;
                eax += 0xfffffff5;
            }
            eax = GetStdHandle (eax);
            edi = eax;
            if (edi != -1) {
                eax = GetFileType (edi);
                if (eax == 0) {
                    goto label_7;
                }
                eax &= 0xff;
                *(esi) = edi;
                if (eax != 2) {
                    goto label_8;
                }
            }
label_7:
            *((esi + 4)) |= 0x40;
            goto label_9;
label_8:
            if (eax != 3) {
                goto label_9;
            }
            *((esi + 4)) |= 8;
        } else {
            *((esi + 4)) |= 0x80;
        }
label_9:
        ebx++;
    } while (ebx < 3);
    eax = SetHandleCount (*(0x40bec8));
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401182 */
#include <stdint.h>
 
void fcn_00401182 (int32_t arg_4h) {
    if (*(0x40ba30) != 2) {
        fcn_00403391 ();
    }
    fcn_0040321a ();
    uint32_t (*0x40b0b8)(uint32_t) (0xff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403810 */
#include <stdint.h>
 
int32_t fcn_00403810 (void) {
    int32_t var_10h_3;
    int32_t var_10h_2;
    int32_t var_10h;
    int32_t var_34h;
    eax = *(0x40bbb0);
    edi = *(sym.imp.KERNEL32.dll_GetEnvironmentStringsW);
    ebx = 0;
    esi = 0;
    if (eax == ebx) {
        eax = void (*edi)() ();
        esi = eax;
        if (esi != ebx) {
            *(0x40bbb0) = 1;
            goto label_2;
        }
        eax = GetLastError ();
        if (eax == 0x78) {
            eax = ebp;
            *(0x40bbb0) = eax;
        } else {
            eax = *(0x40bbb0);
        }
    }
    if (eax != 1) {
        goto label_3;
    }
label_2:
    if (esi == ebx) {
        eax = void (*edi)() ();
        esi = eax;
        if (esi == ebx) {
            goto label_4;
        }
    }
    eax = esi;
    if (*(esi) == bx) {
        goto label_5;
    }
    do {
label_0:
        eax += ebp;
    } while (*(eax) != bx);
    eax += ebp;
    if (*(eax) != bx) {
        goto label_0;
    }
label_5:
    eax -= esi;
    eax >>= 1;
    eax++;
    eax = WideCharToMultiByte (ebx, ebx, esi, eax, ebx, ebx, ebx, ebx);
    if (ebp != ebx) {
        eax = fcn_00403ddf (ebp);
        *((esp + 0x10)) = eax;
        if (eax == ebx) {
            goto label_6;
        }
        eax = void (*edi)(uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t) (ebx, ebx, esi, *((esp + 0x24)), eax, ebp, ebx, ebx);
        if (eax == 0) {
            fcn_0040403c (*((esp + 0x10)));
        }
        ebx = *((esp + 0x10));
    }
label_6:
    FreeEnvironmentStringsW (ebx);
    eax = ebx;
    goto label_7;
label_3:
    if (eax == ebp) {
        goto label_8;
    }
    while (esi == ebx) {
label_4:
        eax = 0;
        goto label_7;
label_8:
        eax = GetEnvironmentStrings ();
        esi = eax;
    }
    if (*(esi) == bl) {
        goto label_9;
    }
    do {
label_1:
        eax++;
    } while (*(eax) != bl);
    eax++;
    if (*(eax) != bl) {
        goto label_1;
    }
label_9:
    eax -= esi;
    eax++;
    eax = fcn_00403ddf (ebp);
    edi = eax;
    if (edi == ebx) {
        edi = 0;
    } else {
        fcn_00405a00 (edi, esi, ebp);
    }
    FreeEnvironmentStringsA (esi);
    eax = edi;
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40376e */
#include <stdint.h>
 
int32_t fcn_0040376e (void) {
    int32_t var_8h;
    int32_t var_4h;
    edi = 0;
    if (*(0x40bfec) == edi) {
        fcn_004059de ();
    }
    esi = 0x40baa8;
    *(0x40bbac) = 0;
    GetModuleFileNameA (edi, esi, 0x104);
    eax = *(0x40d004);
    *(0x40ba8c) = esi;
    if (eax != edi) {
        ebx = eax;
        if (*(eax) != 0) {
            goto label_0;
        }
    }
    ebx = esi;
label_0:
    esi = ebp - 8;
    ecx = 0;
    eax = ebx;
    fcn_00403602 (edi, ebp - 4);
    esi = *((ebp - 4));
    eax = *((ebp - 8));
    esi <<= 2;
    eax += esi;
    eax = fcn_00403ddf (eax);
    edi = eax;
    if (edi == 0) {
        eax |= 0xffffffff;
    } else {
        ecx = esi + edi;
        esi = ebp - 8;
        eax = ebx;
        fcn_00403602 (edi, ebp - 4);
        eax = *((ebp - 4));
        eax--;
        *(0x40ba70) = eax;
        *(0x40ba74) = edi;
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40353b */
#include <stdint.h>
 
uint32_t fcn_0040353b (void) {
    ebx = 0;
    if (*(0x40bfec) == ebx) {
        al = fcn_004059de ();
    }
    esi = *(0x40ba28);
    edi = 0;
    if (esi != ebx) {
        goto label_0;
    }
    goto label_1;
    do {
        if (al != 0x3d) {
            edi++;
        }
        fcn_00404080 (esi);
        esi = esi + eax + 1;
label_0:
        al = *(esi);
    } while (al != bl);
    eax = fcn_00403ddf (edi*4 + 4);
    edi = eax;
    *(0x40ba7c) = edi;
    if (edi == ebx) {
label_1:
        eax |= 0xffffffff;
        goto label_2;
    }
    esi = *(0x40ba28);
    while (*(esi) != bl) {
        eax = fcn_00404080 (esi);
        ebp++;
        if (*(esi) != 0x3d) {
            eax = fcn_00403ddf (ebp);
            *(edi) = eax;
            if (eax == ebx) {
                goto label_3;
            }
            fcn_00404f20 (eax, esi);
            edi += 4;
        }
        esi += ebp;
    }
    eax = fcn_0040403c (*(0x40ba28));
    *(0x40ba28) = ebx;
    *(edi) = ebx;
    *(0x40bfe0) = 1;
    eax = 0;
    do {
label_2:
        return eax;
label_3:
        eax = fcn_0040403c (*(0x40ba7c));
        *(0x40ba7c) = ebx;
        eax |= 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4030af */
#include <stdint.h>
 
int32_t fcn_004030af (int32_t arg_4h) {
    eax = *(0x40b0ac);
    if (eax != 0) {
        eax = void (*eax)(uint32_t*) (*((esp + 4)));
    }
    ecx = 0x40b00c;
    edi = 0x40b01c;
    eax = 0;
    esi = ecx;
    if (ecx >= edi) {
        goto label_0;
    }
    do {
        if (eax != 0) {
            goto label_1;
        }
        ecx = *(esi);
        if (ecx != 0) {
            eax = void (*ecx)() ();
        }
        esi += 4;
    } while (esi < edi);
    if (eax != 0) {
        goto label_1;
    }
label_0:
    fcn_004053b0 (0x403b21);
    esi = section..data;
    eax = section..data;
    edi = 0x40b008;
    if (eax >= edi) {
        goto label_2;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            eax = void (*eax)() ();
        }
        esi += 4;
    } while (esi < edi);
label_2:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401000 */
#include <stdint.h>
 
uint32_t fcn_00401000 (void) {
    int32_t var_8h;
    int32_t var_4h;
    /* [00] -r-x section size 32768 named .text */
    *((ebp - 4)) = 0x40a00000;
    fcn_00401114 (0x40b040, ebp - 8);
    *(fp_stack--) = *((ebp - 8));
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fcn_004010e3 ("a is %f, b is %f\n");
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 0x44) != 0) {
        ax = fcn_004010e3 ("Equal\n");
    }
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 0x44) == 0) {
        ax = fcn_004010e3 ("Not Equal\n");
    }
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], *((ebp - 8)));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x41) == 0) {
        ax = fcn_004010e3 ("Greater\n");
    }
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], *((ebp - 8)));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x41) != 0) {
        ax = fcn_004010e3 ("Less or Equal\n");
    }
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], *((ebp - 8)));
    fp_stack++;
    ax = fp_status;
    if ((ah & 1) == 0) {
        ax = fcn_004010e3 ("Greater or Equal\n");
    }
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], *((ebp - 8)));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) != 0) {
        eax = fcn_004010e3 ("Less\n");
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4031da */
#include <stdint.h>
 
void fcn_004031da (int32_t arg_ch) {
    fcn_00403119 (*((esp + 0xc)), 0, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403119 */
#include <stdint.h>
 
uint32_t fcn_00403119 (UINT uExitCode, uint32_t arg_ch, uint32_t arg_10h) {
    esi = 0;
    esi++;
    if (*(0x40ba9c) == esi) {
        eax = GetCurrentProcess (*((ebp + 8)));
        TerminateProcess (eax);
    }
    al = *((ebp + 0x10));
    *(0x40ba98) = esi;
    *(0x40ba94) = al;
    if (*((ebp + 0xc)) != 0) {
        goto label_0;
    }
    ecx = *(0x40bfe8);
    if (ecx == 0) {
        goto label_1;
    }
    eax = *(0x40bfe4);
    eax -= 4;
    while (eax >= *(0x40bfe8)) {
        eax = *(eax);
        if (eax != 0) {
            void (*eax)() ();
        }
        eax = *(0x40bfe4);
        eax -= 4;
        *(0x40bfe4) = eax;
    }
label_1:
    eax = 0x40b020;
    esi = 0x40b028;
    edi = eax;
    if (eax >= esi) {
        goto label_0;
    }
    do {
        eax = *(edi);
        if (eax != 0) {
            void (*eax)() ();
        }
        edi += 4;
    } while (edi < esi);
label_0:
    eax = 0x40b02c;
    esi = 0x40b030;
    edi = eax;
    if (eax >= esi) {
        goto label_2;
    }
    do {
        eax = *(edi);
        if (eax != 0) {
            void (*eax)() ();
        }
        edi += 4;
    } while (edi < esi);
label_2:
    if (*((ebp + 0x10)) == 0) {
        *(0x40ba9c) = 1;
        fcn_0040307f ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4031fc */
#include <stdint.h>
 
void fcn_004031fc (void) {
    fcn_00403119 (0, 0, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4033ca */
#include <stdint.h>
 
int32_t fcn_004033ca (int32_t arg_8h, struct _EXCEPTION_POINTERS * ExceptionInfo) {
    edx = *((ebp + 8));
    eax = *(0x40b478);
    ecx = 0x40b3f8;
    do {
        if (*(ecx) == edx) {
            goto label_0;
        }
        esi = eax * 3;
        ecx += 0xc;
        esi = esi*4 + 0x40b3f8;
    } while (ecx < esi);
label_0:
    eax *= 3;
    eax = eax*4 + 0x40b3f8;
    if (ecx < eax) {
        if (*(ecx) == edx) {
            goto label_1;
        }
    }
    ecx = 0;
label_1:
    if (ecx == 0) {
        goto label_2;
    }
    ebx = *((ecx + 8));
    if (ebx == 0) {
        goto label_2;
    }
    if (ebx == 5) {
        *((ecx + 8)) = 0;
        eax = 0;
        eax++;
        goto label_3;
    }
    if (ebx == 1) {
        goto label_4;
    }
    eax = *(0x40baa4);
    *((ebp + 8)) = eax;
    eax = *((ebp + 0xc));
    *(0x40baa4) = eax;
    eax = *((ecx + 4));
    if (eax != 8) {
        goto label_5;
    }
    eax = *(0x40b470);
    edx = *(0x40b474);
    edx += eax;
    if (eax >= edx) {
        goto label_6;
    }
    esi = eax * 3;
    esi = esi*4 + 0x40b400;
    edx -= eax;
    do {
        *(esi) = 0;
        esi += 0xc;
        edx--;
    } while (edx != 0);
label_6:
    ecx = *(ecx);
    esi = *(0x40b47c);
    if (ecx == 0xc000008e) {
        *(0x40b47c) = 0x83;
    } else {
        if (ecx == 0xc0000090) {
            *(0x40b47c) = 0x81;
        } else {
            if (ecx == 0xc0000091) {
                *(0x40b47c) = 0x84;
            } else {
                if (ecx == 0xc0000093) {
                    *(0x40b47c) = 0x85;
                } else {
                    if (ecx == 0xc000008d) {
                        *(0x40b47c) = 0x82;
                    } else {
                        if (ecx == 0xc000008f) {
                            *(0x40b47c) = 0x86;
                        } else {
                            if (ecx != 0xc0000092) {
                                goto label_7;
                            }
                            *(0x40b47c) = 0x8a;
                        }
                    }
                }
            }
        }
    }
label_7:
    eax = void (*ebx)(uint32_t, uint32_t*) (8, *(0x40b47c));
    *(0x40b47c) = esi;
    goto label_8;
label_5:
    *((ecx + 8)) = 0;
    void (*ebx)(uint32_t) (eax);
label_8:
    eax = *((ebp + 8));
    *(0x40baa4) = eax;
label_4:
    eax |= 0xffffffff;
    goto label_3;
label_2:
    UnhandledExceptionFilter (*((ebp + 0xc)));
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4031eb */
#include <stdint.h>
 
void fcn_004031eb (int32_t arg_ch) {
    fcn_00403119 (*((esp + 0xc)), 1, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40320b */
#include <stdint.h>
 
void fcn_0040320b (void) {
    fcn_00403119 (0, 1, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403c0b */
#include <stdint.h>
 
void fcn_00403c0b (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403df1 */
#include <stdint.h>
 
int32_t fcn_00403df1 (int32_t arg_4h) {
    eax = *((esp + 4));
    if (eax >= *(0x40bec8)) {
        eax = 0;
        return eax;
    }
    ecx = eax;
    ecx >>= 5;
    ecx = *((ecx*4 + 0x40bee0));
    eax &= 0x1f;
    eax = *((ecx + eax*8 + 4));
    eax &= 0x40;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403ddf */
#include <stdint.h>
 
void fcn_00403ddf (int32_t arg_8h) {
    fcn_00403db3 (*((esp + 8)), *(0x40bc48));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403db3 */
#include <stdint.h>
 
uint32_t fcn_00403db3 (int32_t arg_4h_2, uint32_t arg_4h, uint32_t arg_8h) {
    if (*((esp + 4)) > 0xffffffe0) {
        goto label_0;
    }
    do {
        eax = fcn_00403d6d (*((esp + 4)));
        if (eax != 0) {
            goto label_1;
        }
        if (*((esp + 8)) == eax) {
            goto label_1;
        }
        eax = fcn_00406b77 (*((esp + 4)));
    } while (eax != 0);
label_0:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403e18 */
#include <stdint.h>
 
int32_t fcn_00403e18 (int32_t arg_ch) {
    esi = *((esp + 0xc));
    eax = *((esi + 0xc));
    ecx = *((esi + 0xc));
    cl &= 3;
    ebx = 0;
    if (cl == 2) {
        if ((ax & 0x108) == 0) {
            goto label_0;
        }
        eax = *((esi + 8));
        edi = *(esi);
        edi -= eax;
        if (edi > 0) {
            eax = fcn_00406b92 ();
            if (eax == edi) {
                eax = *((esi + 0xc));
                if (al >= 0) {
                    goto label_1;
                }
                eax &= 0xfffffffd;
                *((esi + 0xc)) = eax;
            } else {
                *((esi + 0xc)) |= 0x20;
                ebx |= 0xffffffff;
            }
        }
label_1:
    }
label_0:
    eax = *((esi + 8));
    *((esi + 4)) = 0;
    *(esi) = eax;
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403f26 */
#include <stdint.h>
 
int32_t fcn_00403f26 (int32_t arg_8h, uint32_t arg_ch) {
    esi = *((ebp + 0xc));
    eax = *((esi + 0xc));
    ebx = *((esi + 0x10));
    if ((al & 0x82) != 0) {
        if ((al & 0x40) == 0) {
            if ((al & 1) != 0) {
                *((esi + 4)) = 0;
                if ((al & 0x10) == 0) {
                    goto label_0;
                }
                ecx = *((esi + 8));
                eax &= 0xfffffffe;
                *(esi) = ecx;
                *((esi + 0xc)) = eax;
            }
            eax = *((esi + 0xc));
            *((esi + 4)) = 0;
            *((ebp + 0xc)) = 0;
            eax &= 0xffffffef;
            eax |= 2;
            *((esi + 0xc)) = eax;
            if ((ax & 0x10c) == 0) {
                if (esi != 0x40b0e8) {
                    if (esi != 0x40b108) {
                        goto label_1;
                    }
                }
                eax = fcn_00403df1 (ebx);
                if (eax != 0) {
                    goto label_2;
                }
label_1:
                fcn_00406e65 (esi);
            }
label_2:
            if ((*((esi + 0xc)) & 0x108) != 0) {
                eax = *((esi + 8));
                edi = *(esi);
                ecx = eax + 1;
                *(esi) = ecx;
                ecx = *((esi + 0x18));
                edi -= eax;
                ecx--;
                *((esi + 4)) = ecx;
                if (edi > 0) {
                    eax = fcn_00406b92 ();
                    *((ebp + 0xc)) = eax;
                } else {
                    if (ebx != -1) {
                        eax = ebx;
                        eax >>= 5;
                        eax = *((eax*4 + 0x40bee0));
                        ecx = ebx;
                        ecx &= 0x1f;
                        eax = eax + ecx*8;
                    } else {
                        eax = 0x40b480;
                    }
                    if ((*((eax + 4)) & 0x20) == 0) {
                        goto label_3;
                    }
                    fcn_00406dd9 (ebx, 0);
                }
label_3:
                eax = *((esi + 8));
                cl = *((ebp + 8));
                *(eax) = cl;
            } else {
                edi = 0;
                edi++;
                eax = ebp + 8;
                eax = fcn_00406b92 ();
                *((ebp + 0xc)) = eax;
            }
            if (*((ebp + 0xc)) != edi) {
                *((esi + 0xc)) |= 0x20;
                goto label_4;
            }
            eax = *((ebp + 8));
            eax &= 0xff;
        }
    } else {
label_0:
        eax |= 0x20;
        *((esi + 0xc)) = eax;
label_4:
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401432 */
#include <stdint.h>
 
uint32_t fcn_00401432 (void) {
    if ((*((ecx + 0xc)) & 0x40) != 0) {
        if (*((ecx + 8)) == 0) {
            goto label_0;
        }
    }
    *((ecx + 4))--;
    if (*((ecx + 4)) >= 0) {
        edx = *(ecx);
        *(edx) = al;
        *(ecx)++;
        eax = (int32_t) al;
    } else {
        eax = (int32_t) al;
        eax = fcn_00403f26 (eax, ecx);
    }
    if (eax == -1) {
        *(esi) |= eax;
        return eax;
    }
label_0:
    *(esi)++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40410b */
#include <stdint.h>
 
int32_t fcn_0040410b (uint32_t arg_8h, LPCWCH lpWideCharStr) {
    eax = *((ebp + 8));
    esi = 0;
    if (eax == esi) {
        eax = 0;
    } else {
        if (*(0x40bc54) == esi) {
            cx = *((ebp + 0xc));
            if (cx <= 0xff) {
                *(eax) = cl;
                eax = 0;
                eax++;
            } else {
                *((ebp + 8)) = esi;
                eax = WideCharToMultiByte (*(0x40bc64), esi, ebp + 0xc, 1, eax, *(0x40b4a0), esi, ebp + 8);
                if (eax == esi) {
                    goto label_0;
                }
                if (*((ebp + 8)) == esi) {
                    goto label_1;
                }
            }
label_0:
            *(0x40ba50) = 0x2a;
            eax |= 0xffffffff;
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404080 */
#include <stdint.h>
 
int32_t fcn_00404080 (int32_t arg_4h) {
    ecx = *((esp + 4));
    if ((ecx & 3) == 0) {
        goto label_0;
    }
    do {
        al = *(ecx);
        ecx++;
        if (al == 0) {
            goto label_1;
        }
    } while ((ecx & 3) != 0);
    eax += 0;
    do {
label_0:
        eax = *(ecx);
        edx = 0x7efefeff;
        edx += eax;
        eax ^= 0xffffffff;
        eax ^= edx;
        ecx += 4;
    } while ((eax & 0x81010100) == 0);
    eax = *((ecx - 4));
    if (al != 0) {
        if (ah != 0) {
            if ((eax & 0xff0000) != 0) {
                if ((eax & 0xff000000) != 0) {
                    goto label_0;
                }
label_1:
                eax = ecx - 1;
                ecx = *((esp + 4));
                eax -= ecx;
                return eax;
            }
            eax = ecx - 2;
            ecx = *((esp + 4));
            eax -= ecx;
            return eax;
        }
        eax = ecx - 3;
        ecx = *((esp + 4));
        eax -= ecx;
        return eax;
    }
    eax = ecx - 4;
    ecx = *((esp + 4));
    eax -= ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4041b0 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_004041b0 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    eax = *((esp + 0x14));
    eax |= eax;
    if (eax == 0) {
        ecx = *((esp + 0x10));
        eax = *((esp + 0xc));
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ebx = eax;
        eax = *((esp + 8));
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        esi = eax;
        eax = ebx;
        edx:eax = eax * *((esp + 0x10));
        ecx = eax;
        eax = esi;
        edx:eax = eax * *((esp + 0x10));
        edx += ecx;
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
    esi = eax;
    edx:eax = eax * *((esp + 0x14));
    ecx = eax;
    eax = *((esp + 0x10));
    edx:eax = eax * esi;
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
    esi--;
    eax -= *((esp + 0x10));
    edx -= *((esp + 0x14));
label_2:
    ebx = 0;
label_0:
    eax -= *((esp + 8));
    edx -= *((esp + 0xc));
    edx = -edx;
    eax = -eax;
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401465 */
#include <stdint.h>
 
int8_t fcn_00401465 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = eax;
    while (*((ebp + 0xc)) > 0) {
        ecx = *((ebp + 0x10));
        al = *((ebp + 8));
        *((ebp + 0xc))--;
        fcn_00401432 ();
        if (*(esi) == -1) {
            goto label_0;
        }
    }
label_0:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401489 */
#include <stdint.h>
 
int32_t fcn_00401489 (int32_t arg_ch) {
    esi = eax;
    ebx = ecx;
    if ((*((edi + 0xc)) & 0x40) == 0) {
        goto label_0;
    }
    if (*((edi + 8)) != 0) {
        goto label_0;
    }
    eax = *((esp + 0xc));
    *(esi) += eax;
    goto label_1;
    do {
        al = *(ebx);
        ecx = edi;
        fcn_00401432 ();
        ebx++;
        if (*(esi) == -1) {
            goto label_1;
        }
label_0:
    } while (*((esp + 0xc)) > 0);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40403c */
#include <stdint.h>
 
uint32_t fcn_0040403c (int32_t arg_8h) {
    esi = *((esp + 8));
    if (esi != 0) {
        if (*(0x40bec4) == 3) {
            eax = fcn_00405d85 ();
            if (eax == 0) {
                goto label_0;
            }
            fcn_00405db0 (eax);
            return eax;
        }
label_0:
        HeapFree (*(0x40bec0), 0);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405d85 */
#include <stdint.h>
 
int32_t fcn_00405d85 (int32_t arg_4h) {
    eax = *(0x40bc7c);
    ecx = eax * 5;
    eax = *(0x40bc80);
    ecx = eax + ecx*4;
    while (eax < ecx) {
        edx = *((esp + 4));
        edx -= *((eax + 0xc));
        if (edx < 0x100000) {
            goto label_0;
        }
        eax += 0x14;
    }
    eax = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405db0 */
#include <stdint.h>
 
int32_t fcn_00405db0 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_fh) {
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ecx = *((ebp + 8));
    eax = *((ecx + 0x10));
    esi = *((ebp + 0xc));
    edi = esi;
    edi -= *((ecx + 0xc));
    esi += 0xfffffffc;
    edi >>= 0xf;
    ecx = edi;
    ecx *= 0x204;
    ecx = ecx + eax + 0x144;
    *((ebp - 0x10)) = ecx;
    ecx = *(esi);
    ecx--;
    *((ebp - 4)) = ecx;
    if ((cl & 1) == 0) {
        ebx = ecx + esi;
        edx = *(ebx);
        *((ebp - 0xc)) = edx;
        edx = *((esi - 4));
        *((ebp - 8)) = edx;
        edx = *((ebp - 0xc));
        *((ebp + 0xc)) = ebx;
        if ((dl & 1) == 0) {
            edx >>= 4;
            edx--;
            if (edx > 0x3f) {
                edx = 0x3f;
            }
            ecx = *((ebx + 4));
            if (ecx == *((ebx + 8))) {
                ebx = 0x80000000;
                if (edx < 0x20) {
                    ecx = edx;
                    ebx >>= cl;
                    ecx = edx + eax + 4;
                    ebx = ~ebx;
                    *((eax + edi*4 + 0x44)) &= ebx;
                    *(ecx)--;
                    if (*(ecx) != 0) {
                        goto label_0;
                    }
                    ecx = *((ebp + 8));
                    *(ecx) &= ebx;
                } else {
                    ecx = edx - 0x20;
                    ebx >>= cl;
                    ecx = edx + eax + 4;
                    ebx = ~ebx;
                    *((eax + edi*4 + 0xc4)) &= ebx;
                    *(ecx)--;
                    if (*(ecx) != 0) {
                        goto label_0;
                    }
                    ecx = *((ebp + 8));
                    *((ecx + 4)) &= ebx;
                }
label_0:
                ebx = *((ebp + 0xc));
            }
            edx = *((ebx + 8));
            ebx = *((ebx + 4));
            ecx = *((ebp - 4));
            ecx += *((ebp - 0xc));
            *((edx + 4)) = ebx;
            edx = *((ebp + 0xc));
            ebx = *((edx + 4));
            edx = *((edx + 8));
            *((ebx + 8)) = edx;
            *((ebp - 4)) = ecx;
        }
        edx = ecx;
        edx >>= 4;
        edx--;
        if (edx > 0x3f) {
            edx = 0x3f;
        }
        ebx = *((ebp - 8));
        ebx &= 1;
        *((ebp - 0xc)) = ebx;
        if (ebx == 0) {
            esi -= *((ebp - 8));
            ebx = *((ebp - 8));
            ebx >>= 4;
            *((ebp + 0xc)) = esi;
            ebx--;
            esi = 0x3f;
            if (ebx > esi) {
                ebx = esi;
            }
            ecx += *((ebp - 8));
            edx = ecx;
            edx >>= 4;
            edx--;
            *((ebp - 4)) = ecx;
            if (edx > esi) {
                edx = esi;
            }
            if (ebx != edx) {
                ecx = *((ebp + 0xc));
                esi = *((ecx + 4));
                if (esi == *((ecx + 8))) {
                    esi = 0x80000000;
                    if (ebx < 0x20) {
                        ecx = ebx;
                        esi >>= cl;
                        esi = ~esi;
                        *((eax + edi*4 + 0x44)) &= esi;
                        *((ebx + eax + 4))--;
                        if (*((ebx + eax + 4)) != 0) {
                            goto label_1;
                        }
                        ecx = *((ebp + 8));
                        *(ecx) &= esi;
                    } else {
                        ecx = ebx - 0x20;
                        esi >>= cl;
                        esi = ~esi;
                        *((eax + edi*4 + 0xc4)) &= esi;
                        *((ebx + eax + 4))--;
                        if (*((ebx + eax + 4)) != 0) {
                            goto label_1;
                        }
                        ecx = *((ebp + 8));
                        *((ecx + 4)) &= esi;
                    }
                }
label_1:
                ecx = *((ebp + 0xc));
                esi = *((ecx + 8));
                ecx = *((ecx + 4));
                *((esi + 4)) = ecx;
                ecx = *((ebp + 0xc));
                esi = *((ecx + 4));
                ecx = *((ecx + 8));
                *((esi + 8)) = ecx;
            }
            esi = *((ebp + 0xc));
        } else {
            ebx = *((ebp + 8));
        }
        if (*((ebp - 0xc)) == 0) {
            if (ebx == edx) {
                goto label_2;
            }
        }
        ecx = *((ebp - 0x10));
        ecx = ecx + edx*8;
        ebx = *((ecx + 4));
        *((esi + 8)) = ecx;
        *((esi + 4)) = ebx;
        *((ecx + 4)) = esi;
        ecx = *((esi + 4));
        *((ecx + 8)) = esi;
        ecx = *((esi + 4));
        if (ecx == *((esi + 8))) {
            cl = *((edx + eax + 4));
            *((ebp + 0xf)) = cl;
            cl++;
            *((edx + eax + 4)) = cl;
            if (edx < 0x20) {
                if (*((ebp + 0xf)) == 0) {
                    ecx = edx;
                    ebx = 0x80000000;
                    ebx >>= cl;
                    ecx = *((ebp + 8));
                    *(ecx) |= ebx;
                }
                ebx = 0x80000000;
                ecx = edx;
                ebx >>= cl;
                eax = eax + edi*4 + 0x44;
                *(eax) |= ebx;
            } else {
                if (*((ebp + 0xf)) == 0) {
                    ecx = edx - 0x20;
                    ebx = 0x80000000;
                    ebx >>= cl;
                    ecx = *((ebp + 8));
                    *((ecx + 4)) |= ebx;
                }
                ecx = edx - 0x20;
                edx = 0x80000000;
                edx >>= cl;
                eax = eax + edi*4 + 0xc4;
                *(eax) |= edx;
            }
        }
label_2:
        eax = *((ebp - 4));
        *(esi) = eax;
        *((eax + esi - 4)) = eax;
        eax = *((ebp - 0x10));
        *(eax)--;
        if (*(eax) == 0) {
            eax = *(0x40bc78);
            if (eax != 0) {
                ecx = *(0x40bc90);
                ecx <<= 0xf;
                ecx += *((eax + 0xc));
                ebx = 0x8000;
                VirtualFree (ecx, ebx, 0x4000);
                ecx = *(0x40bc90);
                eax = *(0x40bc78);
                edx = 0x80000000;
                edx >>= cl;
                *((eax + 8)) |= edx;
                eax = *(0x40bc78);
                eax = *((eax + 0x10));
                ecx = *(0x40bc90);
                *((eax + ecx*4 + 0xc4)) = 0;
                eax = *(0x40bc78);
                eax = *((eax + 0x10));
                *((eax + 0x43))--;
                eax = *(0x40bc78);
                ecx = *((eax + 0x10));
                if (*((ecx + 0x43)) == 0) {
                    *((eax + 4)) &= 0xfffffffe;
                    eax = *(0x40bc78);
                }
                if (*((eax + 8)) != -1) {
                    goto label_3;
                }
                void (*esi)(uint32_t*, uint32_t, uint32_t) (*((eax + 0xc)), 0, ebx);
                eax = *(0x40bc78);
                HeapFree (*(0x40bec0), 0, *((eax + 0x10)));
                eax = *(0x40bc7c);
                edx = *(0x40bc80);
                eax *= 5;
                eax <<= 2;
                ecx = eax;
                eax = *(0x40bc78);
                ecx -= eax;
                fcn_00404be0 (eax, eax + 0x14, ecx + edx - 0x14);
                eax = *((ebp + 8));
                *(0x40bc7c)--;
                if (eax > *(0x40bc78)) {
                    *((ebp + 8)) -= 0x14;
                }
                eax = *(0x40bc80);
                *(0x40bc88) = eax;
            }
label_3:
            eax = *((ebp + 8));
            *(0x40bc78) = eax;
            *(0x40bc90) = edi;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4041a2 */
#include <stdint.h>
 
void fcn_004041a2 (void) {
    int32_t var_4h;
    do {
        fcn_00403bd0 (0x409b10);
        *((ebp - 4)) = 0;
        fcn_00406f0f (1);
        *((ebp - 4)) |= 0xffffffff;
        ExitProcess (3);
        if (ecx == *(0x40b498)) {
            return;
        }
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406f0f */
#include <stdint.h>
 
int32_t fcn_00406f0f (int32_t arg_8h) {
    char * var_128h_2;
    int32_t var_124h_2;
    char * var_128h;
    LPSTR lpFilename;
    int32_t var_18h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    fcn_00403bd0 (0x409d30);
    eax = *(0x40b498);
    *((ebp - 0x1c)) = eax;
    eax = *(0x40bc6c);
    ecx = 0;
    if (eax != ecx) {
        *((ebp - 4)) = ecx;
        void (*eax)(uint32_t*, uint32_t*) (*((ebp + 8)), *((ebp + 0xc)));
        *((ebp - 4)) |= 0xffffffff;
    } else {
        eax = *((ebp + 8));
        eax--;
        if (eax != 0) {
            edi = "Unknown security failure detected!";
            *((ebp - 0x128)) = "A security error of unknown cause has been detected which has\ncorrupted the program's internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
            esi = 0xd4;
        } else {
            edi = "Buffer overrun detected!";
            *((ebp - 0x128)) = "A buffer overrun has been detected which has corrupted the program's\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
            esi = 0xb9;
        }
        *((ebp - 0x20)) = cl;
        eax = GetModuleFileNameA (ecx, ebp - 0x124, 0x104);
        if (eax == 0) {
            fcn_00404f20 (ebp - 0x124, "<program name unknown>");
        }
        ebx = ebp - 0x124;
        eax = ebx;
        eax = fcn_00404080 (eax);
        eax += 0xb;
        if (eax > 0x3c) {
            eax = ebx;
            eax = fcn_00404080 (eax);
            ebx = eax;
            eax = ebp - 0x124;
            eax -= 0x31;
            ebx += eax;
            fcn_004054f0 (ebx, 0x4095c8, 3);
        }
        fcn_00404080 (ebx);
        eax = eax + esi + 0xc;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00403d30 ();
        *((ebp - 0x18)) = esp;
        esi = esp;
        fcn_00404f20 (esi, edi);
        edi = 0x4095a8;
        fcn_00404f30 (esi, edi);
        fcn_00404f30 (esi, "Program: ");
        fcn_00404f30 (esi, ebx);
        fcn_00404f30 (esi, edi);
        fcn_00404f30 (esi, *((ebp - 0x128)));
        fcn_004053ea (esi, "Microsoft Visual C++ Runtime Library", 0x12010);
    }
    fcn_004031eb (3);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404245 */
#include <stdint.h>
 
uint32_t fcn_00404245 (int32_t arg_ch, int32_t arg_10h) {
    esi = *((esp + 0xc));
    esi *= *((esp + 0x10));
    ebx = esi;
    if (esi != 0) {
        goto label_0;
    }
    esi++;
    do {
label_0:
        edi = 0;
        if (esi <= 0xffffffe0) {
            if (*(0x40bec4) == 3) {
                esi += 0xf;
                esi &= 0xfffffff0;
                if (ebx > *(0x40bc84)) {
                    goto label_1;
                }
                eax = fcn_00406564 (ebx);
                edi = eax;
                if (edi != 0) {
                    goto label_2;
                }
            }
label_1:
            eax = HeapAlloc (*(0x40bec0), 8, esi);
            edi = eax;
            if (edi != 0) {
                goto label_3;
            }
        }
        if (*(0x40bc48) == 0) {
            goto label_3;
        }
        eax = fcn_00406b77 (esi);
    } while (eax != 0);
    goto label_4;
label_2:
    fcn_004045e0 (edi, 0, ebx);
label_3:
    eax = edi;
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403f1d */
#include <stdint.h>
 
void fcn_00403f1d (void) {
    fcn_00403eb0 (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403eb0 */
#include <stdint.h>
 
int32_t fcn_00403eb0 (uint32_t arg_10h) {
    esi = 0;
    ebx = 0;
    edi = 0;
    if (*(0x40d000) <= esi) {
        goto label_0;
    }
    do {
        eax = *(0x40bff0);
        eax = *((eax + esi*4));
        if (eax != 0) {
            ecx = *((eax + 0xc));
            if ((cl & 0x83) == 0) {
                goto label_1;
            }
            if (*((esp + 0x10)) == 1) {
                eax = fcn_00403e75 (eax);
                if (eax == -1) {
                    goto label_1;
                }
                ebx++;
            } else {
                if (*((esp + 0x10)) != 0) {
                    goto label_1;
                }
                if ((cl & 2) == 0) {
                    goto label_1;
                }
                eax = fcn_00403e75 (eax);
                if (eax != -1) {
                    goto label_1;
                }
                edi |= eax;
            }
        }
label_1:
        esi++;
    } while (esi < *(0x40d000));
label_0:
    eax = ebx;
    if (*((esp + 0x10)) != 1) {
        eax = edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404318 */
#include <stdint.h>
 
int32_t fcn_00404318 (int32_t arg_8h, int32_t arg_ah, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_3h;
    int32_t var_2h;
    eax = *((ebp + 8));
    ecx = eax + 1;
    if (ecx <= 0x100) {
        ecx = *(str.________________________________H);
        eax = *((ecx + eax*2));
    } else {
        ecx = eax;
        ecx >>= 8;
        esi = *(str.________________________________H);
        edx = (int32_t) cl;
        if ((*((esi + edx*2 + 1)) & 0x80) != 0) {
            *((ebp - 3)) = al;
            *((ebp - 4)) = cl;
            *((ebp - 2)) = 0;
            eax = 2;
        } else {
            *((ebp - 4)) = al;
            eax = 0;
            *((ebp - 3)) = 0;
            eax++;
        }
        ecx = ebp + 0xa;
        eax = fcn_004070ad (1, ebp - 4, eax, ecx, *(0x40bc64), *(0x40bc54), 1);
        if (eax == 0) {
            return eax;
        }
        eax = *((ebp + 0xa));
    }
    eax &= *((ebp + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404396 */
#include <stdint.h>
 
int32_t fcn_00404396 (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = *((esi + 0xc));
    if ((al & 0x83) != 0) {
        if ((al & 0x40) != 0) {
            goto label_0;
        }
        if ((al & 2) != 0) {
            eax |= 0x20;
            *((esi + 0xc)) = eax;
        } else {
            eax |= 1;
            *((esi + 0xc)) = eax;
            if ((ax & 0x10c) == 0) {
                fcn_00406e65 (esi);
            } else {
                eax = *((esi + 8));
                *(esi) = eax;
            }
            eax = fcn_00407267 (*((esi + 0x10)), *((esi + 8)), *((esi + 0x18)));
            *((esi + 4)) = eax;
            if (eax != 0) {
                if (eax == -1) {
                    goto label_1;
                }
                edx = *((esi + 0xc));
                if ((dl & 0x82) == 0) {
                    ecx = *((esi + 0x10));
                    if (ecx != -1) {
                        edi = ecx;
                        edi >>= 5;
                        edi = *((edi*4 + 0x40bee0));
                        ecx &= 0x1f;
                        edi = edi + ecx*8;
                    } else {
                        edi = 0x40b480;
                    }
                    cl = *((edi + 4));
                    cl &= 0x82;
                    if (cl != 0x82) {
                        goto label_2;
                    }
                    edx |= 0x2000;
                    *((esi + 0xc)) = edx;
                }
label_2:
                if (*((esi + 0x18)) == 0x200) {
                    ecx = *((esi + 0xc));
                    if ((cl & 8) == 0) {
                        goto label_3;
                    }
                    if ((ch & 4) != 0) {
                        goto label_3;
                    }
                    *((esi + 0x18)) = 0x1000;
                }
label_3:
                ecx = *(esi);
                eax--;
                *((esi + 4)) = eax;
                eax = *(ecx);
                ecx++;
                *(esi) = ecx;
                esi = edi;
                return eax;
            }
label_1:
            eax = -eax;
            eax -= eax;
            eax &= 0x10;
            eax += 0x10;
            *((esi + 0xc)) |= eax;
            *((esi + 4)) = 0;
        }
    }
label_0:
    eax |= 0xffffffff;
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401da6 */
#include <stdint.h>
 
uint32_t fcn_00401da6 (void) {
    *((edx + 4))--;
    if (*((edx + 4)) >= 0) {
        ecx = *(edx);
        eax = *(ecx);
        ecx++;
        *(edx) = ecx;
        return eax;
    }
    fcn_00404396 (edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4044e0 */
#include <stdint.h>
 
int32_t fcn_004044e0 (int32_t arg_8h, int32_t arg_4h) {
    if (*(0x40b4a0) > 1) {
        fcn_00404318 (*((esp + 8)), 8);
        return;
    }
    eax = *((esp + 4));
    ecx = *(str.________________________________H);
    eax = *((ecx + eax*2));
    eax &= 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404474 */
#include <stdint.h>
 
int32_t fcn_00404474 (int32_t arg_8h, int32_t arg_10h) {
    ebx = *((esp + 8));
    if (ebx != -1) {
        esi = *((esp + 0x10));
        eax = *((esi + 0xc));
        if ((al & 1) == 0) {
            if (al >= 0) {
                goto label_0;
            }
            if ((al & 2) != 0) {
                goto label_0;
            }
        }
        if (*((esi + 8)) == 0) {
            fcn_00406e65 (esi);
        }
        eax = *(esi);
        if (eax == *((esi + 8))) {
            if (*((esi + 4)) != 0) {
                goto label_0;
            }
            eax++;
            *(esi) = eax;
        }
        *(esi)--;
        eax = *(esi);
        if ((*((esi + 0xc)) & 0x40) == 0) {
            goto label_1;
        }
        if (*(eax) == bl) {
            goto label_2;
        }
        eax++;
        *(esi) = eax;
    }
label_0:
    eax |= 0xffffffff;
    do {
        return eax;
label_1:
        *(eax) = bl;
label_2:
        eax = *((esi + 0xc));
        *((esi + 4))++;
        eax &= 0xffffffef;
        eax |= 1;
        *((esi + 0xc)) = eax;
        eax = ebx;
        eax &= 0xff;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404640 */
#include <stdint.h>
 
uint32_t fcn_00404640 (void) {
    int32_t var_58h;
    LPSYSTEM_INFO lpSystemInfo;
    int32_t var_48h;
    PMEMORY_BASIC_INFORMATION lpBuffer;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_13h;
    PDWORD lpflOldProtect;
    SIZE_T dwSize;
    LPCVOID lpAddress;
    eax = 4;
    fcn_00403d30 (4);
    esi = esp;
    eax = VirtualQuery (esi, ebp - 0x28, 0x1c);
    if (eax == 0) {
        goto label_0;
    }
    ebx = *((ebp - 0x24));
    GetSystemInfo (ebp - 0x4c);
    ecx = *((ebp - 0x48));
    eax = *(0x40ba5c);
    edi = ecx - 1;
    edi = ~edi;
    edi &= esi;
    edi -= ecx;
    esi = eax;
    esi--;
    esi = -esi;
    esi -= esi;
    esi &= 0xfffffff1;
    esi += 0x11;
    esi *= ecx;
    esi += ebx;
    *((ebp - 8)) = ecx;
    if (edi < esi) {
        goto label_0;
    }
    if (eax == 1) {
        goto label_1;
    }
    *((ebp - 4)) = ebx;
    ebx = 0x1000;
    do {
        eax = VirtualQuery (*((ebp - 4)), ebp - 0x28, 0x1c);
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp - 0x1c));
        *((ebp - 4)) += eax;
    } while ((*((ebp - 0x18)) & ebx) == 0);
    eax = *((ebp - 0x28));
    *((ebp - 4)) = eax;
    if ((*((ebp - 0x13)) & 1) != 0) {
        eax = 0;
        eax++;
    } else {
        if (edi < eax) {
label_0:
            eax = 0;
        } else {
            if (eax < esi) {
                *((ebp - 4)) = esi;
            }
            VirtualAlloc (*((ebp - 4)), *((ebp - 8)), ebx, 4);
            eax = *(0x40ba5c);
            goto label_2;
label_1:
            *((ebp - 4)) = edi;
label_2:
            eax--;
            eax = -eax;
            eax -= eax;
            eax &= 0x103;
            eax++;
            VirtualProtect (*((ebp - 4)), *((ebp - 8)), eax, ebp - 0xc);
        }
    }
    esp = ebp - 0x58;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4045e0 */
#include <stdint.h>
 
int32_t fcn_004045e0 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    ecx = *((esp + 4));
    if (edx == 0) {
        goto label_0;
    }
    eax = 0;
    al = *((esp + 8));
    edi = ecx;
    if (edx < 4) {
        goto label_1;
    }
    ecx = -ecx;
    ecx &= 3;
    if (ecx == 0) {
        goto label_2;
    }
    edx -= ecx;
    do {
        *(edi) = al;
        edi++;
        ecx--;
    } while (ecx != 0);
label_2:
    ecx = eax;
    eax <<= 8;
    eax += ecx;
    ecx = eax;
    eax <<= 0x10;
    eax += ecx;
    ecx = edx;
    edx &= 3;
    ecx >>= 2;
    if (ecx == 0) {
        goto label_1;
    }
    memset (edi, eax, ecx);
    if (edx == 0) {
        goto label_3;
    }
    do {
label_1:
        *(edi) = al;
        edi++;
        edx--;
    } while (edx != 0);
label_3:
    eax = *((esp + 8));
    return eax;
label_0:
    eax = *((esp + 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404509 */
#include <stdint.h>
 
int32_t fcn_00404509 (LPWSTR lpWideCharStr, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0xc));
    ebx = 0;
    if (esi != ebx) {
        if (*((ebp + 0x10)) == ebx) {
            goto label_3;
        }
        al = *(esi);
        if (al != bl) {
            goto label_4;
        }
        eax = *((ebp + 8));
        if (eax == ebx) {
            goto label_3;
        }
        *(eax) = bx;
    }
label_3:
    eax = 0;
    do {
label_0:
        ebx = esi;
        return eax;
label_4:
        if (*(0x40bc54) != ebx) {
            goto label_5;
        }
        ecx = *((ebp + 8));
        if (ecx != ebx) {
            ax = (int16_t) al;
            *(ecx) = ax;
        }
label_1:
        eax = 0;
        eax++;
    } while (1);
label_5:
    ecx = *(str.________________________________H);
    eax = (int32_t) al;
    if ((*((ecx + eax*2 + 1)) & 0x80) == 0) {
        goto label_6;
    }
    eax = *(0x40b4a0);
    if (eax <= 1) {
        goto label_7;
    }
    if (*((ebp + 0x10)) < eax) {
        goto label_8;
    }
    ecx = 0;
    cl = (*((ebp + 8)) != ebx) ? 1 : 0;
    eax = MultiByteToWideChar (*(0x40bc64), 9, esi, eax, *((ebp + 8)), ecx);
    eax = *(0x40b4a0);
    if (eax != 0) {
        goto label_0;
    }
label_7:
    if (*((ebp + 0x10)) < eax) {
label_8:
        goto label_2;
    }
    if (*((esi + 1)) != bl) {
        goto label_0;
    }
label_2:
    *(0x40ba50) = 0x2a;
    eax |= 0xffffffff;
    goto label_0;
label_6:
    eax = 0;
    al = (*((ebp + 8)) != ebx) ? 1 : 0;
    eax = MultiByteToWideChar (*(0x40bc64), 9, esi, 1, *((ebp + 8)), eax);
    if (eax != 0) {
        goto label_1;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404730 */
#include <stdint.h>
 
int32_t fcn_00404730 (int32_t arg_8h_2, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((esp + 8));
    ecx = *((esp + 0x10));
    ecx |= eax;
    ecx = *((esp + 0xc));
    if (ecx == 0) {
        eax = *((esp + 4));
        edx:eax = eax * ecx;
        return eax;
    }
    edx:eax = eax * ecx;
    ebx = eax;
    eax = *((esp + 8));
    edx:eax = eax * *((esp + 0x14));
    ebx += eax;
    eax = *((esp + 8));
    edx:eax = eax * ecx;
    edx += ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x401d74 */
#include <stdint.h>
 
int32_t fcn_00401d74 (void) {
    esi = eax;
    if (*(0x40b4a0) > 1) {
        fcn_00404318 (esi, 4);
    } else {
        eax = *(str.________________________________H);
        eax = *((eax + esi*2));
        eax &= 4;
    }
    if (eax == 0) {
        esi &= 0xffffffdf;
        esi -= 7;
    }
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404764 */
#include <stdint.h>
 
int32_t fcn_00404764 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_7h;
    int32_t var_4h;
    int32_t var_3h;
    int32_t var_2h;
    ebx = *((ebp + 8));
    if (*(0x40bc54) != 0) {
        if (*(0x40b5f0) != 0) {
            if (ebx <= 0x7f) {
                goto label_0;
            }
        }
        esi = 0;
        edi = 0x100;
        esi++;
        if (ebx < edi) {
            if (*(0x40b4a0) > esi) {
                fcn_00404318 (ebx, esi);
            } else {
                eax = *(str.________________________________H);
                eax = *((eax + ebx*2));
                eax &= esi;
            }
            if (eax == 0) {
                goto label_1;
            }
        }
        edx = *(str.________________________________H);
        eax = ebx;
        eax >>= 8;
        ecx = (int32_t) al;
        if ((*((edx + ecx*2 + 1)) & 0x80) != 0) {
            *((ebp - 4)) = al;
            *((ebp - 3)) = bl;
            *((ebp - 2)) = 0;
            eax = 2;
        } else {
            *((ebp - 4)) = bl;
            *((ebp - 3)) = 0;
            eax = esi;
        }
        ecx = ebp - 8;
        eax = fcn_00407455 (*(0x40bc54), edi, ebp - 4, eax, ecx, 3, *(0x40bc64), esi);
        if (eax != 0) {
            if (eax == esi) {
                eax = *((ebp - 8));
                goto label_2;
            }
            ecx = *((ebp - 7));
            eax = 0;
            ah = *((ebp - 8));
            eax |= ecx;
        } else {
label_0:
            if (ebx < 0x41) {
                goto label_1;
            }
            eax = ebx + 0x20;
            if (ebx <= 0x5a) {
                goto label_2;
            }
        }
label_1:
        eax = ebx;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404b5d */
#include <stdint.h>
 
int32_t fcn_00404b5d (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    eax = 0;
    fcn_004079c9 (ebp - 0x10, ebp - 0x14, *((ebp + 0xc)), eax, eax, eax, eax);
    fcn_00404b31 (ebp - 0x10, *((ebp + 8)));
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4079c9 */
#include <stdint.h>
 
int32_t fcn_004079c9 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, uint32_t arg_20h) {
    uint32_t var_5ch;
    uint32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_19h;
    int32_t var_14h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t var_ah;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    eax = ebp - 0x30;
    *((ebp - 0x3c)) = eax;
    eax = 0;
    edx = 0;
    edi = *((ebp + 0x10));
    edx++;
    *((ebp - 0x50)) = eax;
    *((ebp - 0x4c)) = edx;
    *((ebp - 0x34)) = eax;
    *((ebp - 0x44)) = eax;
    *((ebp - 0x58)) = eax;
    *((ebp - 0x5c)) = eax;
    *((ebp - 0x54)) = eax;
    *((ebp - 0x38)) = eax;
    *((ebp - 0x48)) = eax;
    *((ebp - 0x40)) = edi;
    do {
        cl = *(edi);
        if (cl != 0x20) {
            if (cl == 9) {
                goto label_8;
            }
            if (cl == 0xa) {
                goto label_8;
            }
            if (cl != 0xd) {
                goto label_9;
            }
        }
label_8:
        edi++;
    } while (1);
label_9:
    esi = 4;
    do {
label_0:
        bl = *(edi);
        edi++;
        if (eax > 0xb) {
            goto label_10;
        }
        /* switch table (12 cases) at 0x407e20 */
        if (bl >= 0x31) {
            if (bl > 0x39) {
                goto label_11;
            }
label_1:
            goto label_12;
        }
label_11:
        if (bl == *(0x40b4a4)) {
label_3:
            goto label_13;
        }
        eax = (int32_t) bl;
        eax -= 0x2b;
        if (eax == 0) {
            goto label_14;
        }
        eax--;
        eax--;
        if (eax != 0) {
            eax -= 3;
            if (eax == 0) {
                goto label_15;
            }
label_2:
            edi--;
            goto label_16;
        }
        eax = 2;
        *((ebp - 0x50)) = 0x8000;
    } while (1);
label_14:
    *((ebp - 0x50)) = 0;
    eax = 2;
    goto label_0;
    *((ebp - 0x44)) = edx;
    if (bl < 0x31) {
        goto label_17;
    }
    if (bl <= 0x39) {
        goto label_1;
    }
label_17:
    if (bl == *(0x40b4a4)) {
        goto label_18;
    }
    if (bl == 0x2b) {
        goto label_4;
    }
    if (bl == 0x2d) {
        goto label_4;
    }
    if (bl == 0x30) {
        goto label_15;
    }
label_5:
    if (bl <= 0x43) {
        goto label_2;
    }
    if (bl <= 0x45) {
        goto label_19;
    }
    if (bl <= 0x63) {
        goto label_2;
    }
    if (bl > 0x65) {
        goto label_2;
    }
label_19:
    goto label_13;
label_4:
    edi--;
    goto label_13;
    if (bl < 0x31) {
        goto label_20;
    }
    if (bl <= 0x39) {
        goto label_1;
    }
label_20:
    if (bl == *(0x40b4a4)) {
        goto label_3;
    }
    if (bl != 0x30) {
        goto label_21;
    }
label_15:
    eax = edx;
    goto label_0;
    *((ebp - 0x44)) = edx;
    do {
        eax = (int32_t) bl;
        if (*(0x40b4a0) > edx) {
            fcn_00404318 (eax, esi);
            edx = 0;
            edx++;
        } else {
            ecx = *(str.________________________________H);
            eax = *((ecx + eax*2));
            eax &= esi;
        }
        if (eax == 0) {
            goto label_22;
        }
        if (*((ebp - 0x34)) < 0x19) {
            eax = *((ebp - 0x3c));
            *((ebp - 0x34))++;
            bl -= 0x30;
            *((ebp - 0x3c))++;
            *(eax) = bl;
        } else {
            *((ebp - 0x38))++;
        }
        bl = *(edi);
        edi++;
    } while (1);
label_22:
    if (bl != *(0x40b4a4)) {
        goto label_23;
    }
label_18:
    eax = esi;
    goto label_0;
    *((ebp - 0x44)) = edx;
    *((ebp - 0x58)) = edx;
    if (*((ebp - 0x34)) != 0) {
        goto label_24;
    }
    while (bl == 0x30) {
        *((ebp - 0x38))--;
        bl = *(edi);
        edi++;
    }
    do {
label_24:
        eax = (int32_t) bl;
        if (*(0x40b4a0) > edx) {
            fcn_00404318 (eax, esi);
            edx = 0;
            edx++;
        } else {
            ecx = *(str.________________________________H);
            eax = *((ecx + eax*2));
            eax &= esi;
        }
        if (eax == 0) {
            goto label_23;
        }
        if (*((ebp - 0x34)) < 0x19) {
            *((ebp - 0x34))++;
            eax = *((ebp - 0x3c));
            bl -= 0x30;
            *((ebp - 0x3c))++;
            *((ebp - 0x38))--;
            *(eax) = bl;
        }
        bl = *(edi);
        edi++;
    } while (1);
label_23:
    if (bl == 0x2b) {
        goto label_4;
    }
    if (bl == 0x2d) {
        goto label_4;
    }
    goto label_5;
    *((ebp - 0x58)) = edx;
    eax = (int32_t) bl;
    if (*(0x40b4a0) > edx) {
        fcn_00404318 (eax, esi);
        edx = 0;
        edx++;
    } else {
        ecx = *(str.________________________________H);
        eax = *((ecx + eax*2));
        eax &= esi;
    }
    if (eax == 0) {
        goto label_21;
    }
    eax = esi;
    goto label_25;
    ecx = edi - 2;
    *((ebp - 0x40)) = ecx;
    if (bl >= 0x31) {
        if (bl <= 0x39) {
            goto label_26;
        }
    }
    eax = (int32_t) bl;
    eax -= 0x2b;
    if (eax == 0) {
        goto label_27;
    }
    eax--;
    eax--;
    if (eax == 0) {
        goto label_28;
    }
    eax -= 3;
    if (eax != 0) {
        goto label_29;
    }
label_6:
    goto label_13;
    *((ebp - 0x5c)) = edx;
    while (bl == 0x30) {
        bl = *(edi);
        edi++;
    }
    if (bl < 0x31) {
        goto label_2;
    }
    if (bl > 0x39) {
        goto label_2;
    }
    goto label_26;
    if (bl >= 0x31) {
        if (bl > 0x39) {
            goto label_30;
        }
label_26:
label_12:
        eax = 9;
label_25:
        edi--;
        goto label_0;
    }
label_30:
    if (bl == 0x30) {
        goto label_6;
    }
label_21:
    edi = *((ebp - 0x40));
    goto label_16;
    if (*((ebp + 0x20)) != 0) {
        eax = (int32_t) bl;
        eax -= 0x2b;
        ecx = edi - 1;
        *((ebp - 0x40)) = ecx;
        if (eax != 0) {
            eax--;
            eax--;
            if (eax != 0) {
                goto label_29;
            }
label_28:
            *((ebp - 0x4c)) |= 0xffffffff;
            eax = 7;
            goto label_0;
        }
label_27:
label_13:
        eax = 7;
        goto label_0;
    }
    eax = 0xa;
    edi--;
label_10:
    if (eax != 0xa) {
        goto label_0;
    }
    goto label_16;
    *((ebp - 0x5c)) = 1;
    esi = 0;
    do {
        eax = (int32_t) bl;
        if (*(0x40b4a0) > 1) {
            fcn_00404318 (eax, 4);
        } else {
            ecx = *(str.________________________________H);
            eax = *((ecx + eax*2));
            eax &= 4;
        }
        if (eax == 0) {
            goto label_31;
        }
        ecx = (int32_t) bl;
        eax = esi * 5;
        esi = ecx + eax*2 - 0x30;
        if (esi > 0x1450) {
            goto label_32;
        }
        bl = *(edi);
        edi++;
    } while (1);
label_32:
    esi = 0x1451;
label_31:
    *((ebp - 0x54)) = esi;
label_7:
    eax = (int32_t) bl;
    if (*(0x40b4a0) > 1) {
        fcn_00404318 (eax, 4);
    } else {
        ecx = *(str.________________________________H);
        eax = *((ecx + eax*2));
        eax &= 4;
    }
    if (eax == 0) {
        goto label_2;
    }
    bl = *(edi);
    edi++;
    goto label_7;
label_29:
    edi = ecx;
label_16:
    eax = *((ebp + 0xc));
    *(eax) = edi;
    if (*((ebp - 0x44)) == 0) {
        goto label_33;
    }
    eax = 0x18;
    if (*((ebp - 0x34)) > eax) {
        if (*((ebp - 0x19)) >= 5) {
            *((ebp - 0x19))++;
        }
        *((ebp - 0x34)) = eax;
        eax = *((ebp - 0x3c));
        eax--;
        *((ebp - 0x38))++;
    } else {
        eax = *((ebp - 0x3c));
    }
    if (*((ebp - 0x34)) <= 0) {
        goto label_34;
    }
    while (*(eax) == 0) {
        *((ebp - 0x34))--;
        *((ebp - 0x38))++;
        eax--;
    }
    fcn_004078eb (ebp - 0x30, *((ebp - 0x34)), ebp - 0x14);
    eax = *((ebp - 0x54));
    ecx = 0;
    if (*((ebp - 0x4c)) < ecx) {
        eax = -eax;
    }
    eax += *((ebp - 0x38));
    if (*((ebp - 0x5c)) == ecx) {
        eax += *((ebp + 0x18));
    }
    if (*((ebp - 0x58)) == ecx) {
        eax -= *((ebp + 0x1c));
    }
    if (eax <= 0x1450) {
        if (eax >= 0xffffebb0) {
            fcn_00408948 (ebp - 0x14, eax, *((ebp + 0x14)));
            edx = *((ebp - 0x14));
            ebx = *((ebp - 0x12));
            esi = *((ebp - 0xe));
            eax = *((ebp - 0xa));
            goto label_35;
label_33:
            *((ebp - 0x48)) = 4;
        } else {
            ebx = 0;
            eax = 0x7fff;
            esi = 0x80000000;
            edx = 0;
            *((ebp - 0x48)) = 2;
            goto label_35;
        }
        *((ebp - 0x48)) = 1;
    }
label_34:
    edx = 0;
    eax = 0;
    esi = 0;
    ebx = 0;
label_35:
    ecx = *((ebp + 8));
    eax |= *((ebp - 0x50));
    *((ecx + 6)) = esi;
    *((ecx + 2)) = ebx;
    *((ecx + 0xa)) = ax;
    eax = *((ebp - 0x48));
    *(ecx) = dx;
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404b31 */
#include <stdint.h>
 
void fcn_00404b31 (int32_t arg_ch_2, int32_t arg_ch) {
    fcn_004049d9 (*((esp + 0xc)), *((esp + 0xc)), 0x40b4b0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4049d9 */
#include <stdint.h>
 
int32_t fcn_004049d9 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_ch;
    int32_t var_9h;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    ecx = *((eax + 0xa));
    esi = *((ebp + 0x10));
    edi = ecx;
    ecx &= 0x8000;
    *((ebp + 8)) = ecx;
    ecx = *((eax + 6));
    *((ebp - 0xc)) = ecx;
    ecx = *((eax + 2));
    eax = *(eax);
    eax <<= 0x10;
    edi &= 0x7fff;
    edi -= 0x3fff;
    *((ebp - 4)) = eax;
    eax = ebp - 0xc;
    *((ebp - 8)) = ecx;
    if (edi != 0xffffc001) {
        goto label_0;
    }
    ebx = 0;
    eax = fcn_00404945 ();
    if (eax != 0) {
        goto label_1;
    }
    edi = ebp - 0xc;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    do {
        eax = 2;
        goto label_2;
label_0:
        fcn_0040492a (ebp - 0x18);
        eax = fcn_004048b8 (ebp - 0xc, *((esi + 8)));
        if (eax != 0) {
            edi++;
        }
        eax = *((esi + 4));
        ecx = *((esi + 4));
        ecx -= *((esi + 8));
        if (edi < ecx) {
            eax = 0;
            edi = ebp - 0xc;
            memset (edi, eax, ecx);
            memset (edi, eax, ecx);
            memset (edi, eax, ecx);
        } else {
            if (edi > eax) {
                goto label_3;
            }
            eax -= edi;
            edi = eax;
            fcn_0040492a (ebp - 0xc, ebp - 0x18);
            eax = ebp - 0xc;
            fcn_0040495e (eax, edi);
            fcn_004048b8 (ebp - 0xc, *((esi + 8)));
            eax = *((esi + 0xc));
            eax++;
            eax = fcn_0040495e (ebp - 0xc, eax);
        }
        ebx = 0;
    } while (1);
label_3:
    if (edi >= *(esi)) {
        eax = 0;
        edi = ebp - 0xc;
        memset (edi, eax, ecx);
        memset (edi, eax, ecx);
        memset (edi, eax, ecx);
        *((ebp - 9)) |= 0x80;
        eax = fcn_0040495e (ebp - 0xc);
        ebx = *((esi + 0x14));
        ebx += *(esi);
        eax = 0;
        eax++;
    } else {
        ebx = *((esi + 0x14));
        *((ebp - 9)) &= 0x7f;
        ebx += edi;
        eax = fcn_0040495e (ebp - 0xc);
label_1:
        eax = 0;
    }
label_2:
    ecx = 0x1f;
    ecx -= *((esi + 0xc));
    esi = *((esi + 0x10));
    ebx <<= cl;
    ecx = *((ebp + 8));
    ecx = -ecx;
    ecx -= ecx;
    ecx &= 0x80000000;
    ebx |= ecx;
    ebx |= *((ebp - 0xc));
    if (esi == 0x40) {
        ecx = *((ebp + 0xc));
        edx = *((ebp - 8));
        *((ecx + 4)) = ebx;
        *(ecx) = edx;
    } else {
        if (esi != 0x20) {
            goto label_4;
        }
        ecx = *((ebp + 0xc));
        *(ecx) = ebx;
    }
label_4:
    edi = 0x1f;
    esi = 0x1f;
    ebx = 0x1f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404b9a */
#include <stdint.h>
 
int32_t fcn_00404b9a (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    eax = 0;
    fcn_004079c9 (ebp - 0x10, ebp - 0x14, *((ebp + 0xc)), eax, eax, eax, eax);
    fcn_00404b47 (ebp - 0x10, *((ebp + 8)));
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404b47 */
#include <stdint.h>
 
void fcn_00404b47 (int32_t arg_ch_2, int32_t arg_ch) {
    fcn_004049d9 (*((esp + 0xc)), *((esp + 0xc)), 0x40b4c8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404be0 */
#include <stdint.h>
 
int32_t fcn_00404be0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edi = *((ebp + 8));
    eax = ecx;
    edx = ecx;
    eax += esi;
    if (edi > esi) {
        if (edi < eax) {
            goto label_0;
        }
    }
    if ((edi & 3) != 0) {
        goto label_1;
    }
    ecx >>= 2;
    edx &= 3;
    if (ecx < 8) {
        goto label_2;
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    /* switch table (4 cases) at 0x404d2c */
label_1:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x404cc0 */
label_2:
    eax = *((esi + ecx*4 - 0x1c));
    *((edi + ecx*4 - 0x1c)) = eax;
    eax = *((esi + ecx*4 - 0x18));
    *((edi + ecx*4 - 0x18)) = eax;
    eax = *((esi + ecx*4 - 0x14));
    *((edi + ecx*4 - 0x14)) = eax;
    eax = *((esi + ecx*4 - 0x10));
    *((edi + ecx*4 - 0x10)) = eax;
    eax = *((esi + ecx*4 - 0xc));
    *((edi + ecx*4 - 0xc)) = eax;
    eax = *((esi + ecx*4 - 8));
    *((edi + ecx*4 - 8)) = eax;
    eax = *((esi + ecx*4 - 4));
    *((edi + ecx*4 - 4)) = eax;
    eax = ecx*4;
    esi += eax;
    edi += eax;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
label_0:
    esi = ecx + esi - 4;
    edi = ecx + edi - 4;
    if ((edi & 3) == 0) {
        ecx >>= 2;
        edx &= 3;
        if (ecx >= 8) {
            __asm ("std");
            *(es:edi) = *(esi);
            ecx--;
            esi += 4;
            es:edi += 4;
            /* switch table (4 cases) at 0x404ec8 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x404e78 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x404ec8 */
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    do {
        eax = *((ebp + 8));
    } while (ecx != 0);
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x402d1e */
#include <stdint.h>
 
uint32_t fcn_00402d1e (void) {
    esi = eax;
    if (edi != 0) {
        eax = fcn_00404080 (esi);
        eax++;
        esi += edi;
        fcn_00404be0 (esi, esi, eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405149 */
#include <stdint.h>
 
int32_t fcn_00405149 (int32_t arg_8h) {
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    fcn_0040508f (ebp - 0x10, ebp + 8);
    esi = ebp - 0x10;
    edi = esp;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 2;
    es:edi += 2;
    eax = fcn_00407e50 (0x11, 0, 0x40bbb4);
    ecx = *((ebp - 4));
    *(0x40bbd8) = eax;
    eax = *(0x40bbb6);
    *(0x40bbd0) = eax;
    eax = *(0x40bbb4);
    *(0x40bbd4) = eax;
    *(0x40bbdc) = 0x40bbb8;
    eax = 0x40bbd0;
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40508f */
#include <stdint.h>
 
int32_t fcn_0040508f (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    edx = *((ebp + 0xc));
    eax = 0;
    ax = *((edx + 6));
    edi = 0x7ff;
    esi = 0x80000000;
    *((ebp - 4)) = esi;
    ecx = eax;
    ecx >>= 4;
    eax &= 0x8000;
    ecx &= edi;
    *((ebp + 0xc)) = eax;
    eax = *((edx + 4));
    edx = *(edx);
    ebx = (int32_t) cx;
    eax &= 0xfffff;
    if (ebx != 0) {
        if (ebx != edi) {
            edi = ecx + 0x3c00;
        } else {
            edi = 0x7fff;
        }
    } else {
        ebx = 0;
        if (eax == ebx) {
            if (edx != ebx) {
                goto label_0;
            }
            eax = *((ebp + 8));
            *((eax + 4)) = ebx;
            *(eax) = ebx;
            *((eax + 8)) = bx;
            goto label_1;
        }
label_0:
        edi = ecx + 0x3c01;
        *((ebp - 4)) = ebx;
    }
    ecx = edx;
    ecx >>= 0x15;
    eax <<= 0xb;
    ecx |= eax;
    ecx |= *((ebp - 4));
    eax = *((ebp + 8));
    edx <<= 0xb;
    *((eax + 4)) = ecx;
    *(eax) = edx;
    if ((esi & ecx) != 0) {
        goto label_2;
    }
    do {
        ecx = *(eax);
        edx = *((eax + 4));
        ebx = ecx;
        edx <<= 1;
        ebx >>= 0x1f;
        edx |= ebx;
        ecx += ecx;
        edi += 0xffff;
        *((eax + 4)) = edx;
        *(eax) = ecx;
    } while ((esi & edx) == 0);
label_2:
    ecx = *((ebp + 0xc));
    ecx |= edi;
    *((eax + 8)) = cx;
label_1:
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407e50 */
#include <stdint.h>
 
int32_t fcn_00407e50 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_1ch;
    int32_t var_1bh;
    int32_t var_1ah;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_17h;
    int32_t var_16h;
    int32_t var_15h;
    int32_t var_14h;
    int32_t var_13h;
    int32_t var_12h;
    int32_t var_11h;
    int32_t var_10h;
    uint32_t var_eh;
    int32_t var_ah;
    uint32_t var_6h;
    int32_t var_5h;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    ebx = *((ebp + 0x1c));
    ecx = eax;
    esi = 0x7fff;
    ecx &= 0x8000;
    eax &= esi;
    *((ebp - 0x1c)) = 0xcc;
    *((ebp - 0x1b)) = 0xcc;
    *((ebp - 0x1a)) = 0xcc;
    *((ebp - 0x19)) = 0xcc;
    *((ebp - 0x18)) = 0xcc;
    *((ebp - 0x17)) = 0xcc;
    *((ebp - 0x16)) = 0xcc;
    *((ebp - 0x15)) = 0xcc;
    *((ebp - 0x14)) = 0xcc;
    *((ebp - 0x13)) = 0xcc;
    *((ebp - 0x12)) = 0xfb;
    *((ebp - 0x11)) = 0x3f;
    *((ebp - 0x2c)) = 1;
    edx = eax;
    if (cx != 0) {
        *((ebx + 2)) = 0x2d;
    } else {
        *((ebx + 2)) = 0x20;
    }
    edi = *((ebp + 0xc));
    if (dx == 0) {
        if (edi != 0) {
            goto label_2;
        }
        if (*((ebp + 8)) == edi) {
            goto label_3;
        }
    }
label_2:
    if (dx != si) {
        goto label_4;
    }
    eax = 0x80000000;
    *(ebx) = 1;
    if (edi == eax) {
        if (*((ebp + 8)) == 0) {
            goto label_5;
        }
    }
    if ((edi & 0x40000000) == 0) {
        goto label_6;
    }
label_5:
    if (cx != 0) {
        if (edi == 0xc0000000) {
            if (*((ebp + 8)) != 0) {
                goto label_7;
            }
        }
    } else {
        if (edi != eax) {
            goto label_7;
        }
        if (*((ebp + 8)) != 0) {
            goto label_7;
        }
    }
    fcn_00404f20 (ebx + 4, "1#INF");
    *((ebx + 3)) = 5;
    do {
        *((ebp - 0x2c)) = 0;
        goto label_8;
label_7:
label_6:
        fcn_00404f20 (ebx + 4, "1#QNAN");
        *((ebx + 3)) = 6;
    } while (1);
label_4:
    eax = (int32_t) dx;
    esi = eax;
    eax *= 0x4d10;
    *((ebp - 0x10)) = 0;
    ecx = edi;
    ecx >>= 0x18;
    esi >>= 8;
    ecx = esi + ecx*2;
    ecx *= 0x4d;
    esi = ecx + eax - 0x134312f4;
    eax = *((ebp + 8));
    *((ebp - 0xe)) = eax;
    esi >>= 0x10;
    eax = (int32_t) si;
    eax = -eax;
    *((ebp - 6)) = dx;
    *((ebp - 0xa)) = edi;
    fcn_00408948 (ebp - 0x10, eax, 1);
    if (*((ebp - 6)) >= 0x3fff) {
        esi++;
        fcn_00408716 (ebp - 0x10, ebp - 0x1c);
    }
    edi = *((ebp + 0x14));
    *(ebx) = si;
    if ((*((ebp + 0x18)) & 1) != 0) {
        eax = (int32_t) si;
        edi += eax;
        if (edi > 0) {
            goto label_9;
        }
label_3:
        *((ebx + 4)) = 0x30;
        goto label_10;
    }
label_9:
    if (edi > 0x15) {
        edi = 0x15;
    }
    esi = *((ebp - 6));
    esi -= 0x3ffe;
    *((ebp - 6)) = 0;
    *((ebp + 0x10)) = 8;
    do {
        fcn_00407890 (ebp - 0x10);
        *((ebp + 0x10))--;
    } while (*((ebp + 0x10)) != 0);
    if (esi >= 0) {
        goto label_11;
    }
    esi = -esi;
    esi &= 0xff;
    if (esi <= 0) {
        goto label_11;
    }
    do {
        fcn_004078be (ebp - 0x10);
        esi--;
    } while (esi != 0);
label_11:
    ecx = edi + 1;
    eax = ebx + 4;
    *((ebp - 0x30)) = eax;
    if (ecx <= 0) {
        goto label_12;
    }
    *((ebp + 0x10)) = ecx;
    do {
        esi = ebp - 0x10;
        edi = ebp - 0x28;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        fcn_00407890 (ebp - 0x10);
        fcn_00407890 (ebp - 0x10);
        fcn_00407832 (ebp - 0x10, ebp - 0x28);
        fcn_00407890 (ebp - 0x10);
        al = *((ebp - 5));
        ecx = *((ebp - 0x30));
        al += 0x30;
        *((ebp - 0x30))++;
        *((ebp + 0x10))--;
        *(ecx) = al;
        *((ebp - 5)) = 0;
    } while (*((ebp + 0x10)) != 0);
    eax = *((ebp - 0x30));
label_12:
    eax--;
    cl = *(eax);
    eax--;
    ecx = ebx + 4;
    if (cl < 0x35) {
        goto label_13;
    }
    while (eax >= ecx) {
        if (*(eax) != 0x39) {
            goto label_14;
        }
        *(eax) = 0x30;
        eax--;
    }
label_14:
    if (eax < ecx) {
        eax++;
        *(ebx)++;
    }
    *(eax)++;
label_0:
    al -= bl;
    al -= 3;
    *((ebx + 3)) = al;
    eax = (int32_t) al;
    *((eax + ebx + 4)) = 0;
label_8:
    eax = *((ebp - 0x2c));
label_1:
    ecx = *((ebp - 4));
    eax = fcn_004041a2 ();
    return eax;
    do {
        if (*(eax) != 0x30) {
            goto label_15;
        }
        eax--;
label_13:
    } while (eax >= ecx);
label_15:
    if (eax >= ecx) {
        goto label_0;
    }
    *(ecx) = 0x30;
label_10:
    *(ebx) = 0;
    eax = 0;
    *((ebx + 2)) = 0x20;
    *((ebx + 3)) = 1;
    *((ebx + 5)) = 0;
    eax++;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405018 */
#include <stdint.h>
 
int32_t fcn_00405018 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    edx = *((ebp + 0x10));
    ecx = *((edx + 0xc));
    ebx = *((ebp + 0xc));
    esi = *((ebp + 8));
    edi = esi + 1;
    *(esi) = 0x30;
    eax = edi;
    if (ebx <= 0) {
        goto label_0;
    }
    *((ebp + 8)) = ebx;
    ebx = 0;
    do {
        dl = *(ecx);
        if (dl != 0) {
            edx = (int32_t) dl;
            ecx++;
        } else {
            edx = 0x30;
        }
        *(eax) = dl;
        eax++;
        *((ebp + 8))--;
    } while (*((ebp + 8)) != 0);
    edx = *((ebp + 0x10));
label_0:
    *(eax) = 0;
    if (ebx < 0) {
        goto label_1;
    }
    if (*(ecx) < 0x35) {
        goto label_1;
    }
    while (*(eax) == 0x39) {
        *(eax) = 0x30;
        eax--;
    }
    *(eax)++;
label_1:
    if (*(esi) == 0x31) {
        *((edx + 4))++;
    } else {
        eax = fcn_00404080 (edi);
        eax++;
        fcn_00404be0 (esi, edi, eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404f20 */
#include <stdint.h>
 
int32_t fcn_00404f20 (int32_t arg_8h, int32_t arg_ch) {
    edi = *((esp + 8));
    ecx = *((esp + 0xc));
    if ((ecx & 3) == 0) {
        goto label_1;
    }
    do {
        dl = *(ecx);
        ecx++;
        if (dl == 0) {
            goto label_2;
        }
        *(edi) = dl;
        edi++;
    } while ((ecx & 3) != 0);
    while ((eax & 0x81010100) == 0) {
label_0:
        *(edi) = edx;
        edi += 4;
label_1:
        edx = 0x7efefeff;
        eax = *(ecx);
        edx += eax;
        eax ^= 0xffffffff;
        eax ^= edx;
        edx = *(ecx);
        ecx += 4;
    }
    if (dl != 0) {
        if (dh != 0) {
            if ((edx & 0xff0000) != 0) {
                if ((edx & 0xff000000) != 0) {
                    goto label_0;
                }
                *(edi) = edx;
                eax = *((esp + 8));
                return eax;
            }
            *(edi) = dx;
            eax = *((esp + 8));
            *((edi + 2)) = 0;
            return eax;
        }
        *(edi) = dx;
        eax = *((esp + 8));
        return eax;
    }
label_2:
    *(edi) = dl;
    eax = *((esp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x402e2c */
#include <stdint.h>
 
int32_t fcn_00402e2c (int32_t arg_14h, int32_t arg_ch, int32_t arg_24h) {
    ebx = *((esp + 0xc));
    if (*(0x40ba44) != 0) {
        eax = *(0x40ba48);
        esi = *(0x40ba40);
        if (eax != *((esp + 0x1c))) {
            goto label_0;
        }
        ecx = 0;
        cl = (*(esi) == 0x2d) ? 1 : 0;
        ecx += eax;
        ecx += ebx;
        eax = ecx;
        *(eax) = 0x30;
        *((eax + 1)) = 0;
    } else {
        eax = *((esp + 0x14));
        eax = fcn_00405149 (*(eax));
        esi = eax;
        eax = *((esi + 4));
        eax += *((esp + 0x24));
        eax = 0;
        al = (*(esi) == 0x2d) ? 1 : 0;
        eax += ebx;
        fcn_00405018 (eax, eax, esi);
    }
label_0:
    if (*(esi) == 0x2d) {
        *(ebx) = 0x2d;
        ebp = ebx + 1;
    }
    eax = *((esi + 4));
    edi = 0;
    edi++;
    if (eax <= 0) {
        eax = ebp;
        eax = fcn_00402d1e ();
        *(ebp) = 0x30;
        ebp++;
    } else {
        ebp += eax;
    }
    if (*((esp + 0x1c)) > 0) {
        eax = ebp;
        fcn_00402d1e ();
        al = *(0x40b4a4);
        *(ebp) = al;
        esi = *((esi + 4));
        ebp++;
        if (esi >= 0) {
            goto label_1;
        }
        esi = -esi;
        if (*(0x40ba44) == 0) {
            if (*((esp + 0x1c)) < esi) {
                goto label_2;
            }
        }
        *((esp + 0x1c)) = esi;
label_2:
        edi = *((esp + 0x1c));
        eax = ebp;
        fcn_00402d1e ();
        fcn_004045e0 (ebp, 0x30, edi);
    }
label_1:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x402d3b */
#include <stdint.h>
 
int32_t fcn_00402d3b (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h) {
    if (*(0x40ba44) != 0) {
        ebx = *((ebp + 0x10));
        eax = *(0x40ba40);
        ecx = 0;
        cl = (ebx > 0) ? 1 : 0;
        edx = 0;
        esi = eax;
        dl = (*(eax) == 0x2d) ? 1 : 0;
        edi = ecx;
        edx += *((ebp + 0xc));
        eax = edx;
        fcn_00402d1e ();
    } else {
        eax = *((ebp + 8));
        eax = fcn_00405149 (*(eax));
        ebx = *((ebp + 0x10));
        esi = eax;
        eax = 0;
        al = (*(esi) == 0x2d) ? 1 : 0;
        ecx = 0;
        cl = (ebx > 0) ? 1 : 0;
        eax += *((ebp + 0xc));
        ecx += eax;
        fcn_00405018 (ecx, ebx + 1, esi);
    }
    eax = *((ebp + 0xc));
    if (*(esi) == 0x2d) {
        *(eax) = 0x2d;
        eax++;
    }
    if (ebx > 0) {
        edi = eax + 1;
        cl = *(edi);
        *(eax) = cl;
        cl = *(0x40b4a4);
        eax = edi;
        *(eax) = cl;
    }
    ecx = 0;
    cl = (*(0x40ba44) == cl) ? 1 : 0;
    ecx += eax;
    ecx += ebx;
    eax = fcn_00404f20 (ecx, "e+000");
    ecx = eax;
    if (*((ebp + 0x14)) != 0) {
        *(ecx) = 0x45;
    }
    eax = *((esi + 0xc));
    ecx++;
    if (*(eax) != 0x30) {
        eax = *((esi + 4));
        eax--;
        if (eax < 0) {
            eax = -eax;
            *(ecx) = 0x2d;
        }
        ecx++;
        if (eax >= 0x64) {
            edx:eax = (int64_t) eax;
            esi = 0x64;
            eax = edx:eax / esi;
            edx = edx:eax % esi;
            *(ecx) += al;
            eax = edx;
        }
        ecx++;
        if (eax >= 0xa) {
            edx:eax = (int64_t) eax;
            esi = 0xa;
            eax = edx:eax / esi;
            edx = edx:eax % esi;
            *(ecx) += al;
            eax = edx;
        }
        *((ecx + 1)) += al;
    }
    eax = *((ebp + 0xc));
    edi = 0xa;
    esi = 0xa;
    ebx = 0xa;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x402f09 */
#include <stdint.h>
 
uint32_t fcn_00402f09 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    esi = *((ebp + 8));
    eax = fcn_00405149 (*(esi));
    ecx = *((eax + 4));
    ebx = *((ebp + 0x10));
    ecx--;
    *(0x40ba48) = ecx;
    ecx = 0;
    cl = (*(eax) == 0x2d) ? 1 : 0;
    *(0x40ba40) = eax;
    ecx += *((ebp + 0xc));
    edi = ecx;
    fcn_00405018 (edi, ebx, eax);
    eax = *(0x40ba40);
    eax = *((eax + 4));
    eax--;
    *(0x40ba48) = eax;
    cl = (*(0x40ba48) < eax) ? 1 : 0;
    *(0x40ba4c) = cl;
    if (eax < 0xfffffffc) {
        goto label_0;
    }
    if (eax >= ebx) {
        goto label_0;
    }
    if (cl == 0) {
        goto label_1;
    }
    do {
        al = *(edi);
        edi++;
    } while (al != 0);
    *((edi - 2)) = al;
label_1:
    *(0x40ba44) = 1;
    fcn_00402e2c (esi, *((ebp + 0xc)), ebx);
    goto label_2;
label_0:
    *(0x40ba44) = 1;
    fcn_00402d3b (esi, *((ebp + 0xc)), ebx, *((ebp + 0x14)));
label_2:
    *(0x40ba44) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4053b0 */
#include <stdint.h>
 
uint32_t fcn_004053b0 (int32_t arg_4h) {
    eax = fcn_0040532e (*((esp + 4)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40532e */
#include <stdint.h>
 
uint32_t fcn_0040532e (int32_t arg_8h) {
    eax = fcn_00408240 (*(0x40bfe8), esi);
    ecx = *(0x40bfe4);
    esi = eax;
    eax = *(0x40bfe8);
    edx = ecx;
    edx -= eax;
    edx += 4;
    if (esi < edx) {
        ecx = 0x800;
        if (esi < ecx) {
            ecx = esi;
        }
        ecx += esi;
        eax = fcn_004080de (eax, ecx);
        if (eax == 0) {
            esi += 0x10;
            eax = fcn_004080de (*(0x40bfe8), esi);
            if (eax != 0) {
                goto label_0;
            }
            return eax;
        }
label_0:
        ecx = *(0x40bfe4);
        ecx -= *(0x40bfe8);
        *(0x40bfe8) = eax;
        ecx >>= 2;
        ecx = eax + ecx*4;
        *(0x40bfe4) = ecx;
    }
    eax = *((esp + 8));
    *(ecx) = eax;
    *(0x40bfe4) += 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4054f0 */
#include <stdint.h>
 
int32_t fcn_004054f0 (int32_t arg_8h, int32_t arg_14h, int32_t arg_ch) {
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
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404f30 */
#include <stdint.h>
 
int32_t fcn_00404f30 (int32_t arg_4h, int32_t arg_ch) {
    ecx = *((esp + 4));
    if ((ecx & 3) == 0) {
        goto label_0;
    }
    do {
        al = *(ecx);
        ecx++;
        if (al == 0) {
            goto label_1;
        }
    } while ((ecx & 3) != 0);
    do {
label_0:
        eax = *(ecx);
        edx = 0x7efefeff;
        edx += eax;
        eax ^= 0xffffffff;
        eax ^= edx;
        ecx += 4;
    } while ((eax & 0x81010100) == 0);
    eax = *((ecx - 4));
    if (al != 0) {
        if (ah != 0) {
            if ((eax & 0xff0000) != 0) {
                if ((eax & 0xff000000) != 0) {
                    goto label_0;
                }
label_1:
                edi = ecx - 1;
                void (*0x404f95)() ();
            }
            edi = ecx - 2;
            void (*0x404f95)() ();
        }
        edi = ecx - 3;
        void (*0x404f95)() ();
    }
    edi = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4053ea */
#include <stdint.h>
 
uint32_t fcn_004053ea (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_12h) {
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    ebx = 0;
    if (*(0x40bbe0) == ebx) {
        eax = LoadLibraryA ("user32.dll");
        edi = eax;
        if (edi == ebx) {
            goto label_0;
        }
        eax = GetProcAddress (edi, "MessageBoxA");
        *(0x40bbe0) = eax;
        if (eax == 0) {
            goto label_0;
        }
        eax = void (*esi)(uint32_t, char*) (edi, "GetActiveWindow");
        *(0x40bbe4) = eax;
        eax = void (*esi)(uint32_t, char*) (edi, "GetLastActivePopup");
        *(0x40bbe8) = eax;
        if (*(0x40ba5c) != 2) {
            goto label_1;
        }
        eax = void (*esi)(uint32_t, char*) (edi, "GetUserObjectInformationA");
        *(0x40bbf0) = eax;
        if (eax == 0) {
            goto label_1;
        }
        eax = void (*esi)(uint32_t, char*) (edi, "GetProcessWindowStation");
        *(0x40bbec) = eax;
    }
label_1:
    eax = *(0x40bbec);
    if (eax != 0) {
        eax = void (*eax)() ();
        if (eax != 0) {
            eax = uint32_t (*0x40bbf0)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (eax, 1, ebp - 0x10, 0xc, ebp - 4);
            if (eax == 0) {
                goto label_2;
            }
            if ((*((ebp - 8)) & 1) != 0) {
                goto label_3;
            }
        }
label_2:
        if (*(0x40ba68) >= 4) {
            *((ebp + 0x12)) |= 0x20;
            goto label_4;
label_0:
            eax = 0;
            goto label_5;
        }
        *((ebp + 0x12)) |= 4;
    } else {
label_3:
        eax = *(0x40bbe4);
        if (eax == 0) {
            goto label_4;
        }
        eax = void (*eax)() ();
        ebx = eax;
        if (ebx == 0) {
            goto label_4;
        }
        eax = *(0x40bbe8);
        if (eax == 0) {
            goto label_4;
        }
        eax = void (*eax)(uint32_t) (ebx);
        ebx = eax;
    }
label_4:
    uint32_t (*0x40bbe0)(uint32_t, uint32_t*, uint32_t*, uint32_t*) (ebx, *((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)));
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4059de */
#include <stdint.h>
 
uint32_t fcn_004059de (void) {
    if (*(0x40bfec) == 0) {
        eax = fcn_004057f8 (0xfffffffffffffffd);
        *(0x40bfec) = 1;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4057f8 */
#include <stdint.h>
 
int32_t fcn_004057f8 (int32_t arg_8h) {
    uint32_t var_1ch;
    LPCPINFO lpCPInfo;
    uint32_t var_12h;
    int32_t var_11h;
    int32_t var_4h;
    eax = *(0x40b498);
    esi = *((ebp + 8));
    ebx = 0;
    *((ebp - 4)) = eax;
    *(0x40bbf4) = ebx;
    if (esi == 0xfffffffe) {
        *(0x40bbf4) = 1;
        GetOEMCP ();
    } else {
        if (esi == 0xfffffffd) {
            *(0x40bbf4) = 1;
            GetACP ();
        } else {
            if (esi != 0xfffffffc) {
                goto label_3;
            }
            eax = *(0x40bc64);
            *(0x40bbf4) = 1;
        }
    }
    *((ebp + 8)) = eax;
    esi = eax;
label_3:
    if (esi == *(0x40bda4)) {
        goto label_4;
    }
    if (esi == ebx) {
        goto label_5;
    }
    edx = 0;
    eax = 0;
    do {
        if (*((eax + 0x40b4e8)) == esi) {
            goto label_6;
        }
        eax += 0x30;
        edx++;
    } while (eax < 0xf0);
    eax = GetCPInfo (esi, ebp - 0x18);
    if (eax != 1) {
        goto label_7;
    }
    eax = 0;
    ecx = 0x40;
    edi = 0x40bca0;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    edi = 0;
    edi++;
    *(0x40bda4) = esi;
    *(0x40bc94) = ebx;
    if (*((ebp - 0x18)) <= edi) {
        goto label_8;
    }
    if (*((ebp - 0x12)) == 0) {
        goto label_9;
    }
    ecx = ebp - 0x11;
label_2:
    dl = *(ecx);
    if (dl == 0) {
        goto label_9;
    }
    eax = *((ecx - 1));
    edx = (int32_t) dl;
    goto label_10;
label_6:
    eax = 0;
    ecx = 0x40;
    edi = 0x40bca0;
    memset (edi, eax, ecx);
    ecx = edx * 3;
    ecx <<= 4;
    *((ebp - 0x1c)) = ebx;
    *(es:edi) = al;
    es:edi++;
    ebx = ecx + 0x40b4f8;
label_1:
    al = *(ebx);
    esi = ebx;
    goto label_11;
label_0:
    dl = *((esi + 1));
    if (dl == 0) {
        goto label_12;
    }
    eax = (int32_t) al;
    edi = (int32_t) dl;
    if (eax > edi) {
        goto label_13;
    }
    edx = *((ebp - 0x1c));
    dl = *((edx + 0x40b4e0));
    do {
        *((eax + 0x40bca1)) |= dl;
        eax++;
    } while (eax <= edi);
label_13:
    esi++;
    esi++;
    al = *(esi);
label_11:
    if (al != 0) {
        goto label_0;
    }
label_12:
    *((ebp - 0x1c))++;
    ebx += 8;
    if (*((ebp - 0x1c)) < 4) {
        goto label_1;
    }
    eax = *((ebp + 8));
    *(0x40bda4) = eax;
    *(0x40bc98) = 1;
    eax = fcn_00405614 ();
    esi = ecx + 0x40b4ec;
    edi = 0x40bdb0;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(0x40bc94) = eax;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    goto label_14;
    do {
        *((eax + 0x40bca1)) |= 4;
        eax++;
label_10:
    } while (eax <= edx);
    ecx++;
    ecx++;
    if (*((ecx - 1)) != 0) {
        goto label_2;
    }
label_9:
    eax = edi;
    do {
        *((eax + 0x40bca1)) |= 8;
        eax++;
    } while (eax < 0xff);
    eax = esi;
    eax = fcn_00405614 ();
    *(0x40bc94) = eax;
    *(0x40bc98) = edi;
    goto label_15;
label_8:
    *(0x40bc98) = ebx;
label_15:
    eax = 0;
    edi = 0x40bdb0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    goto label_14;
label_7:
    if (*(0x40bbf4) != ebx) {
label_5:
        fcn_00405643 ();
label_14:
        eax = fcn_0040566c ();
label_4:
        eax = 0;
    } else {
        eax |= 0xffffffff;
    }
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403602 */
#include <stdint.h>
 
int32_t fcn_00403602 (uint32_t arg_8h, int32_t arg_ch) {
    uint32_t var_4h;
    ebx = *((ebp + 0xc));
    edx = 0;
    *(esi) = edx;
    edi = ecx;
    *(ebx) = 1;
    if (*((ebp + 8)) == edx) {
        goto label_0;
    }
    ecx = *((ebp + 8));
    *((ebp + 8)) += 4;
    *(ecx) = edi;
    do {
label_0:
        if (*(eax) == 0x22) {
            ecx = 0;
            cl = (edx == 0) ? 1 : 0;
            eax++;
            edx = ecx;
            cl = 0x22;
        } else {
            *(esi)++;
            if (edi != 0) {
                cl = *(eax);
                *(edi) = cl;
                edi++;
            }
            cl = *(eax);
            ebx = (int32_t) cl;
            eax++;
            if ((*((ebx + 0x40bca1)) & 4) != 0) {
                *(esi)++;
                if (edi != 0) {
                    bl = *(eax);
                    *(edi) = bl;
                    edi++;
                }
                eax++;
            }
            ebx = *((ebp + 0xc));
            if (cl == 0) {
                goto label_4;
            }
        }
    } while (edx != 0);
    if (cl == 0x20) {
        goto label_5;
    }
    if (cl != 9) {
        goto label_0;
    }
label_5:
    if (edi != 0) {
        *((edi - 1)) = 0;
    }
label_1:
    *((ebp - 4)) = 0;
label_3:
    if (*(eax) == 0) {
        goto label_6;
    }
    do {
        cl = *(eax);
        if (cl != 0x20) {
            if (cl != 9) {
                goto label_7;
            }
        }
        eax++;
    } while (1);
label_4:
    eax--;
    goto label_1;
label_7:
    if (*(eax) == 0) {
        goto label_6;
    }
    if (*((ebp + 8)) != 0) {
        ecx = *((ebp + 8));
        *((ebp + 8)) += 4;
        *(ecx) = edi;
    }
    *(ebx)++;
label_2:
    ebx = 0;
    ebx++;
    edx = 0;
    while (*(eax) == 0x5c) {
        eax++;
        edx++;
    }
    if (*(eax) == 0x22) {
        if ((dl & 1) == 0) {
            if (*((ebp - 4)) != 0) {
                ecx = eax + 1;
                if (*(ecx) == 0x22) {
                    eax = ecx;
                }
            } else {
                ebx = 0;
            }
            ecx = 0;
            cl = (*((ebp - 4)) == ecx) ? 1 : 0;
            *((ebp - 4)) = ecx;
        }
        edx >>= 1;
    }
    if (edx == 0) {
        goto label_8;
    }
    do {
        if (edi != 0) {
            *(edi) = 0x5c;
            edi++;
        }
        *(esi)++;
        edx--;
    } while (edx != 0);
label_8:
    cl = *(eax);
    if (cl != 0) {
        if (*((ebp - 4)) == 0) {
            if (cl == 0x20) {
                goto label_9;
            }
            if (cl == 9) {
                goto label_9;
            }
        }
        if (ebx != 0) {
            if (edi != 0) {
                edx = (int32_t) cl;
                if ((*((edx + 0x40bca1)) & 4) != 0) {
                    *(edi) = cl;
                    edi++;
                    eax++;
                    *(esi)++;
                }
                cl = *(eax);
                *(edi) = cl;
                edi++;
            } else {
                ecx = (int32_t) cl;
                if ((*((ecx + 0x40bca1)) & 4) == 0) {
                    goto label_10;
                }
                eax++;
                *(esi)++;
            }
label_10:
            *(esi)++;
        }
        eax++;
        goto label_2;
    }
label_9:
    if (edi != 0) {
        *(edi) = 0;
        edi++;
    }
    *(esi)++;
    ebx = *((ebp + 0xc));
    goto label_3;
label_6:
    eax = *((ebp + 8));
    if (eax != 0) {
        *(eax) = 0;
    }
    *(ebx)++;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405a00 */
#include <stdint.h>
 
int32_t fcn_00405a00 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edi = *((ebp + 8));
    eax = ecx;
    edx = ecx;
    eax += esi;
    if (edi > esi) {
        if (edi < eax) {
            goto label_0;
        }
    }
    if ((edi & 3) != 0) {
        goto label_1;
    }
    ecx >>= 2;
    edx &= 3;
    if (ecx < 8) {
        goto label_2;
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    /* switch table (4 cases) at 0x405b4c */
label_1:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x405ae0 */
label_2:
    eax = *((esi + ecx*4 - 0x1c));
    *((edi + ecx*4 - 0x1c)) = eax;
    eax = *((esi + ecx*4 - 0x18));
    *((edi + ecx*4 - 0x18)) = eax;
    eax = *((esi + ecx*4 - 0x14));
    *((edi + ecx*4 - 0x14)) = eax;
    eax = *((esi + ecx*4 - 0x10));
    *((edi + ecx*4 - 0x10)) = eax;
    eax = *((esi + ecx*4 - 0xc));
    *((edi + ecx*4 - 0xc)) = eax;
    eax = *((esi + ecx*4 - 8));
    *((edi + ecx*4 - 8)) = eax;
    eax = *((esi + ecx*4 - 4));
    *((edi + ecx*4 - 4)) = eax;
    eax = ecx*4;
    esi += eax;
    edi += eax;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
label_0:
    esi = ecx + esi - 4;
    edi = ecx + edi - 4;
    if ((edi & 3) == 0) {
        ecx >>= 2;
        edx &= 3;
        if (ecx >= 8) {
            __asm ("std");
            *(es:edi) = *(esi);
            ecx--;
            esi += 4;
            es:edi += 4;
            /* switch table (4 cases) at 0x405ce8 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x405c98 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x405ce8 */
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    do {
        eax = *((ebp + 8));
    } while (ecx != 0);
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40694e */
#include <stdint.h>
 
int32_t fcn_0040694e (uint32_t arg_8h) {
    PMEMORY_BASIC_INFORMATION lpBuffer;
    int32_t var_1ch;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    esi = *((ebp + 8));
    ebx = *((esi + 8));
    if ((bl & 3) == 0) {
        eax = *(fs:0x18);
        *((ebp + 8)) = eax;
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        *((ebp - 4)) = ecx;
        if (ebx < ecx) {
            goto label_1;
        }
        if (ebx >= *((eax + 4))) {
            goto label_1;
        }
    }
    eax = 0;
    goto label_2;
label_1:
    edi = *((esi + 0xc));
    if (edi == -1) {
label_0:
        eax = 0;
        eax++;
        goto label_3;
    }
    edx = 0;
    *((ebp + 8)) = edx;
    eax = ebx;
    do {
        ecx = *(eax);
        if (ecx != -1) {
            if (ecx >= edx) {
                goto label_4;
            }
        }
        if (*((eax + 4)) != 0) {
            *((ebp + 8))++;
        }
        edx++;
        eax += 0xc;
    } while (edx <= edi);
    if (*((ebp + 8)) != 0) {
        eax = *((esi - 8));
        if (eax < *((ebp - 4))) {
            goto label_4;
        }
        if (eax >= esi) {
            goto label_4;
        }
    }
    eax = *(0x40bbf8);
    edi = ebx;
    edi &= 0xfffff000;
    esi = 0;
    if (eax <= 0) {
        goto label_5;
    }
    do {
        if (*((esi*4 + 0x40bc00)) == edi) {
            goto label_6;
        }
        esi++;
    } while (esi < eax);
label_5:
    eax = VirtualQuery (ebx, ebp - 0x20, 0x1c);
    if (eax == 0) {
        goto label_7;
    }
    if (*((ebp - 8)) != 0x1000000) {
        goto label_7;
    }
    if ((*((ebp - 0xc)) & 0xcc) != 0) {
        ecx = *((ebp - 0x1c));
        if (*(ecx) != 0x5a4d) {
            goto label_7;
        }
        eax = *((ecx + 0x3c));
        eax += ecx;
        if (*(eax) != 0x4550) {
            goto label_7;
        }
        if (*((eax + 0x18)) != 0x10b) {
            goto label_7;
        }
        ebx -= ecx;
        ecx = *((eax + 0x14));
        ecx = ecx + eax + 0x18;
        if (*((eax + 6)) <= 0) {
            goto label_7;
        }
        eax = *((ecx + 0xc));
        if (ebx < eax) {
            goto label_8;
        }
        edx = *((ecx + 8));
        edx += eax;
        if (ebx >= edx) {
            goto label_8;
        }
        if ((*((ecx + 0x27)) & 0x80) != 0) {
            goto label_4;
        }
    }
label_8:
    eax = InterlockedExchange (0x40bc40, 1);
    if (eax != 0) {
        goto label_0;
    }
    ecx = *(0x40bbf8);
    edx = ecx;
    if (ecx <= 0) {
        goto label_9;
    }
    eax = ecx*4 + 0x40bbfc;
    do {
        if (*(eax) == edi) {
            goto label_9;
        }
        edx--;
        eax -= 4;
    } while (edx > 0);
label_9:
    if (edx != 0) {
        goto label_10;
    }
    ebx = 0xf;
    if (ecx <= ebx) {
        ebx = ecx;
    }
    edx = 0;
    if (ebx < 0) {
        goto label_11;
    }
    do {
        eax = edx*4 + 0x40bc00;
        esi = *(eax);
        edx++;
        *(eax) = edi;
        edi = esi;
    } while (edx <= ebx);
label_11:
    if (ecx < 0x10) {
        ecx++;
        *(0x40bbf8) = ecx;
    }
label_10:
    eax = InterlockedExchange (0x40bc40, 0);
    goto label_0;
label_4:
    eax = 0;
    goto label_3;
label_6:
    if (esi <= 0) {
        goto label_0;
    }
    eax = InterlockedExchange (0x40bc40, 1);
    if (eax != 0) {
        goto label_0;
    }
    if (*((esi*4 + 0x40bc00)) == edi) {
        goto label_12;
    }
    eax = *(0x40bbf8);
    esi = eax - 1;
    if (esi < 0) {
        goto label_13;
    }
    do {
        if (*((esi*4 + 0x40bc00)) == edi) {
            goto label_14;
        }
        esi--;
    } while (esi >= 0);
label_14:
    if (esi < 0) {
label_13:
        if (eax < 0x10) {
            eax++;
            *(0x40bbf8) = eax;
        }
        esi = eax - 1;
        if (eax == 0) {
        } else {
            goto label_15;
        }
    }
label_12:
    ecx = 0;
    if (esi < 0) {
        goto label_15;
    }
    do {
        eax = ecx*4 + 0x40bc00;
        edx = *(eax);
        ecx++;
        *(eax) = edi;
        edi = edx;
    } while (ecx <= esi);
label_15:
    eax = void (*ebx)(uint32_t, uint32_t) (0x40bc40, 0);
    goto label_0;
label_7:
    eax |= 0xffffffff;
label_3:
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406860 */
#include <stdint.h>
 
void fcn_00406860 (PVOID TargetFrame) {
    RtlUnwind (*((ebp + 8)), 0x406878, 0, 0, ebp, edi, esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408ab6 */
#include <stdint.h>
 
void RtlUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4068a2 */
#include <stdint.h>
 
int32_t fcn_004068a2 (int32_t arg_10h, uint32_t arg_24h) {
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
            fcn_00406936 (0x101);
            uint32_t (*ebx + esi*4 + 8)() ();
        }
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406936 */
#include <stdint.h>
 
void fcn_00406936 (int32_t arg_8h) {
    ebx = 0x40b5e0;
    ecx = *((ebp + 8));
    *((ebx + 8)) = ecx;
    *((ebx + 4)) = eax;
    *((ebx + 0xc)) = ebp;
    ebx = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406564 */
#include <stdint.h>
 
int32_t fcn_00406564 (int32_t arg_8h, uint32_t arg_bh) {
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    ecx = *((ebp + 8));
    eax = *(0x40bc7c);
    edx = *(0x40bc80);
    ecx += 0x17;
    ecx &= 0xfffffff0;
    *((ebp - 0x10)) = ecx;
    ecx >>= 4;
    eax *= 5;
    ecx--;
    edi = edx + eax*4;
    *((ebp - 4)) = edi;
    if (ecx < 0x20) {
        esi |= 0xffffffff;
        esi >>= cl;
        *((ebp - 8)) |= 0xffffffff;
    } else {
        ecx += 0xffffffe0;
        eax |= 0xffffffff;
        esi = 0;
        eax >>= cl;
        *((ebp - 8)) = eax;
    }
    eax = *(0x40bc88);
    ebx = *(0x40bc88);
    *((ebp - 0xc)) = esi;
    while (ebx < *((ebp - 4))) {
        ecx = *((ebx + 4));
        edi = *(ebx);
        ecx &= *((ebp - 8));
        edi &= esi;
        ecx |= edi;
        if (ecx != 0) {
            goto label_1;
        }
        ebx += 0x14;
        *((ebp + 8)) = ebx;
    }
label_1:
    if (ebx != *((ebp - 4))) {
        goto label_0;
    }
    ebx = edx;
    while (ebx < eax) {
        ecx = *((ebx + 4));
        edi = *(ebx);
        ecx &= *((ebp - 8));
        edi &= esi;
        ecx |= edi;
        if (ecx != 0) {
            goto label_2;
        }
        ebx += 0x14;
        *((ebp + 8)) = ebx;
    }
label_2:
    if (ebx == eax) {
        goto label_3;
    }
label_0:
    *(0x40bc88) = ebx;
    eax = *((ebx + 0x10));
    edx = *(eax);
    *((ebp - 4)) = edx;
    if (edx != -1) {
        ecx = *((eax + edx*4 + 0xc4));
        edi = *((eax + edx*4 + 0x44));
        ecx &= *((ebp - 8));
        edi &= esi;
        ecx |= edi;
        if (ecx != 0) {
            goto label_4;
        }
    }
    edx = *((eax + 0xc4));
    edx &= *((ebp - 8));
    *((ebp - 4)) = 0;
    ecx = eax + 0x44;
    esi = *(ecx);
    esi &= *((ebp - 0xc));
    edx |= esi;
    esi = *((ebp - 0xc));
    if (edx != 0) {
        goto label_5;
    }
    do {
        edx = *((ecx + 0x84));
        edx &= *((ebp - 8));
        *((ebp - 4))++;
        ecx += 4;
        edi = *(ecx);
        edi &= esi;
        edx |= edi;
    } while (edx == 0);
label_5:
    edx = *((ebp - 4));
label_4:
    ecx = *((ebp - 4));
    ecx *= 0x204;
    ecx = ecx + eax + 0x144;
    *((ebp - 0xc)) = ecx;
    ecx = *((eax + edx*4 + 0x44));
    edi = 0;
    ecx &= esi;
    if (ecx != 0) {
        goto label_6;
    }
    ecx = *((eax + edx*4 + 0xc4));
    ecx &= *((ebp - 8));
    edi = 0x20;
    goto label_6;
    do {
        if (*((ebx + 8)) != 0) {
            goto label_7;
        }
        ebx += 0x14;
        *((ebp + 8)) = ebx;
label_3:
    } while (ebx < *((ebp - 4)));
label_7:
    if (ebx != *((ebp - 4))) {
        goto label_8;
    }
    ebx = edx;
    while (ebx < eax) {
        if (*((ebx + 8)) != 0) {
            goto label_9;
        }
        ebx += 0x14;
        *((ebp + 8)) = ebx;
    }
label_9:
    if (ebx == eax) {
        eax = fcn_004060c8 ();
        ebx = eax;
        *((ebp + 8)) = ebx;
        if (ebx == 0) {
            goto label_10;
        }
    }
label_8:
    eax = fcn_0040617f (ebx);
    ecx = *((ebx + 0x10));
    *(ecx) = eax;
    eax = *((ebx + 0x10));
    if (*(eax) != -1) {
        goto label_0;
    }
label_10:
    eax = 0;
    goto label_11;
    do {
        ecx <<= 1;
        edi++;
label_6:
    } while (ecx >= 0);
    ecx = *((ebp - 0xc));
    edx = *((ecx + edi*8 + 4));
    ecx = *(edx);
    ecx -= *((ebp - 0x10));
    esi = ecx;
    esi >>= 4;
    esi--;
    *((ebp - 8)) = ecx;
    if (esi > 0x3f) {
        esi = 0x3f;
    }
    if (esi != edi) {
        ecx = *((edx + 4));
        if (ecx == *((edx + 8))) {
            ebx = 0x80000000;
            if (edi < 0x20) {
                ecx = edi;
                ebx >>= cl;
                ecx = *((ebp - 4));
                edi = eax + edi + 4;
                ebx = ~ebx;
                *((ebp - 0x14)) = ebx;
                ebx &= *((eax + ecx*4 + 0x44));
                *((eax + ecx*4 + 0x44)) = ebx;
                *(edi)--;
                if (*(edi) == 0) {
                    ecx = *((ebp - 0x14));
                    ebx = *((ebp + 8));
                    *(ebx) &= ecx;
                } else {
                    ecx = edi - 0x20;
                    ebx >>= cl;
                    ecx = *((ebp - 4));
                    ecx = eax + ecx*4 + 0xc4;
                    edi = eax + edi + 4;
                    ebx = ~ebx;
                    *(ecx) &= ebx;
                    *(edi)--;
                    *((ebp - 0x14)) = ebx;
                    if (*(edi) == 0) {
                        ebx = *((ebp + 8));
                        ecx = *((ebp - 0x14));
                        *((ebx + 4)) &= ecx;
                    }
                } else {
                    ebx = *((ebp + 8));
                }
            }
        }
        ecx = *((edx + 8));
        edi = *((edx + 4));
        *((ecx + 4)) = edi;
        ecx = *((edx + 4));
        edi = *((edx + 8));
        *((ecx + 8)) = edi;
        if (*((ebp - 8)) == 0) {
            goto label_12;
        }
        ecx = *((ebp - 0xc));
        ecx = ecx + esi*8;
        edi = *((ecx + 4));
        *((edx + 8)) = ecx;
        *((edx + 4)) = edi;
        *((ecx + 4)) = edx;
        ecx = *((edx + 4));
        *((ecx + 8)) = edx;
        ecx = *((edx + 4));
        if (ecx == *((edx + 8))) {
            cl = *((esi + eax + 4));
            *((ebp + 0xb)) = cl;
            cl++;
            *((esi + eax + 4)) = cl;
            if (esi < 0x20) {
                if (*((ebp + 0xb)) == 0) {
                    edi = 0x80000000;
                    ecx = esi;
                    edi >>= cl;
                    *(ebx) |= edi;
                }
                ecx = esi;
                edi = 0x80000000;
                edi >>= cl;
                ecx = *((ebp - 4));
                *((eax + ecx*4 + 0x44)) |= edi;
            } else {
                if (*((ebp + 0xb)) == 0) {
                    ecx = esi - 0x20;
                    edi = 0x80000000;
                    edi >>= cl;
                    *((ebx + 4)) |= edi;
                }
                ecx = *((ebp - 4));
                edi = eax + ecx*4 + 0xc4;
                ecx = esi - 0x20;
                esi = 0x80000000;
                esi >>= cl;
                *(edi) |= esi;
            }
        }
        ecx = *((ebp - 8));
    }
    if (ecx != 0) {
        *(edx) = ecx;
        *((ecx + edx - 4)) = ecx;
        goto label_13;
label_12:
        ecx = *((ebp - 8));
    }
label_13:
    esi = *((ebp - 0x10));
    edx += ecx;
    ecx = esi + 1;
    *(edx) = ecx;
    *((edx + esi - 4)) = ecx;
    esi = *((ebp - 0xc));
    ecx = *(esi);
    edi = ecx + 1;
    *(esi) = edi;
    if (ecx == 0) {
        if (ebx != *(0x40bc78)) {
            goto label_14;
        }
        ecx = *((ebp - 4));
        if (ecx != *(0x40bc90)) {
            goto label_14;
        }
        *(0x40bc78) = 0;
    }
label_14:
    ecx = *((ebp - 4));
    *(eax) = ecx;
    eax = edx + 4;
label_11:
    edi = 0x3f;
    esi = 0x3f;
    ebx = 0x3f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403d6d */
#include <stdint.h>
 
uint32_t fcn_00403d6d (int32_t arg_8h) {
    esi = *((esp + 8));
    if (*(0x40bec4) == 3) {
        if (esi > *(0x40bc84)) {
            goto label_0;
        }
        eax = fcn_00406564 (esi);
        if (eax != 0) {
            goto label_1;
        }
    }
label_0:
    if (esi == 0) {
        esi++;
    }
    if (*(0x40bec4) != 1) {
        esi += 0xf;
        esi &= 0xfffffff0;
    }
    HeapAlloc (*(0x40bec0), 0, esi);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406b77 */
#include <stdint.h>
 
int32_t fcn_00406b77 (int32_t arg_4h) {
    eax = *(0x40bc44);
    if (eax != 0) {
        eax = void (*eax)(uint32_t*) (*((esp + 4)));
        if (eax == 0) {
            goto label_0;
        }
        eax = 0;
        eax++;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406b92 */
#include <stdint.h>
 
int32_t fcn_00406b92 (void) {
    ebp = esp - 0x39c;
    ecx = *((ebp + 0x3a4));
    eax = *(0x40b498);
    *((ebp + 0x398)) = eax;
    if (ecx >= *(0x40bec8)) {
        goto label_3;
    }
    eax = ecx;
    eax >>= 5;
    ebx = eax*4 + 0x40bee0;
    eax = *(ebx);
    esi = ecx;
    esi &= 0x1f;
    esi <<= 3;
    al = *((eax + esi + 4));
    *((ebp - 0x80)) = ebx;
    if ((al & 1) == 0) {
        goto label_3;
    }
    edi = 0;
    *((ebp - 0x74)) = edi;
    *((ebp - 0x7c)) = edi;
    if (*((ebp + 0x3ac)) == edi) {
label_2:
        eax = 0;
        goto label_4;
    }
    if ((al & 0x20) != 0) {
        fcn_004082d7 (ecx, edi, edi, 2);
    }
    eax = *(ebx);
    eax += esi;
    if ((*((eax + 4)) & 0x80) == 0) {
        goto label_5;
    }
    eax = *((ebp + 0x3a8));
    *((ebp - 0x70)) = eax;
    *((ebp + 0x3a4)) = edi;
    if (*((ebp + 0x3ac)) <= edi) {
        goto label_6;
    }
label_0:
    ecx = *((ebp - 0x70));
    ecx -= *((ebp + 0x3a8));
    eax = ebp - 0x6c;
    do {
        if (ecx >= *((ebp + 0x3ac))) {
            goto label_7;
        }
        edx = *((ebp - 0x70));
        *((ebp - 0x70))++;
        dl = *(edx);
        ecx++;
        if (dl == 0xa) {
            *((ebp - 0x7c))++;
            *(eax) = 0xd;
            eax++;
            edi++;
        }
        ebx = *((ebp - 0x80));
        *(eax) = dl;
        eax++;
        edi++;
    } while (edi < 0x400);
label_7:
    edi = eax;
    eax = ebp - 0x6c;
    edi -= eax;
    eax = *(ebx);
    eax = WriteFile (*((eax + esi)), ebp - 0x6c, edi, ebp - 0x78, 0);
    if (eax == 0) {
        goto label_8;
    }
    eax = *((ebp - 0x78));
    *((ebp - 0x74)) += eax;
    if (eax < edi) {
        goto label_9;
    }
    eax = *((ebp - 0x70));
    eax -= *((ebp + 0x3a8));
    edi = 0;
    if (eax < *((ebp + 0x3ac))) {
        goto label_0;
    }
    goto label_1;
label_8:
    eax = GetLastError ();
    *((ebp + 0x3a4)) = eax;
label_9:
    edi = 0;
    do {
label_1:
        eax = *((ebp - 0x74));
        if (eax != edi) {
            goto label_10;
        }
        if (*((ebp + 0x3a4)) == edi) {
            goto label_6;
        }
        eax = 5;
        if (*((ebp + 0x3a4)) != eax) {
            goto label_11;
        }
        *(0x40ba54) = eax;
        goto label_12;
label_5:
        eax = WriteFile (*(eax), *((ebp + 0x3a8)), *((ebp + 0x3ac)), ebp - 0x78, edi);
        if (eax == 0) {
            goto label_13;
        }
        eax = *((ebp - 0x78));
        *((ebp + 0x3a4)) = edi;
        *((ebp - 0x74)) = eax;
    } while (1);
label_13:
    eax = GetLastError ();
    *((ebp + 0x3a4)) = eax;
    goto label_1;
label_11:
    fcn_00408278 (*((ebp + 0x3a4)));
    goto label_14;
label_6:
    eax = *(ebx);
    if ((*((eax + esi + 4)) & 0x40) == 0) {
        goto label_15;
    }
    eax = *((ebp + 0x3a8));
    if (*(eax) == 0x1a) {
        goto label_2;
    }
label_15:
    *(0x40ba50) = 0x1c;
    *(0x40ba54) = edi;
    goto label_14;
label_10:
    eax -= *((ebp - 0x7c));
    goto label_4;
label_3:
    *(0x40ba54) = 0;
label_12:
    *(0x40ba50) = 9;
label_14:
    eax |= 0xffffffff;
label_4:
    ecx = *((ebp + 0x398));
    fcn_004041a2 ();
    ebp += 0x39c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406d82 */
#include <stdint.h>
 
int32_t fcn_00406d82 (int32_t arg_4h) {
    eax = *((esp + 4));
    if (eax < *(0x40bec8)) {
        ecx = eax;
        ecx >>= 5;
        ecx = *((ecx*4 + 0x40bee0));
        edx = eax;
        edx &= 0x1f;
        if ((*((ecx + edx*8 + 4)) & 1) == 0) {
            goto label_0;
        }
        eax = fcn_004083f0 (eax);
        eax = FlushFileBuffers (eax);
        if (eax == 0) {
            eax = GetLastError ();
        } else {
            eax = 0;
        }
        if (eax == 0) {
            goto label_1;
        }
        *(0x40ba54) = eax;
    }
label_0:
    *(0x40ba50) = 9;
    eax |= 0xffffffff;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x403e75 */
#include <stdint.h>
 
uint32_t fcn_00403e75 (int32_t arg_8h) {
    esi = *((esp + 8));
    if (esi == 0) {
        fcn_00403eb0 (esi);
        return;
    }
    eax = fcn_00403e18 (esi);
    if (eax != 0) {
        eax |= 0xffffffff;
        return eax;
    }
    if ((*((esi + 0xd)) & 0x40) != 0) {
        eax = fcn_00406d82 (*((esi + 0x10)));
        eax = -eax;
        eax -= eax;
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406e65 */
#include <stdint.h>
 
uint32_t fcn_00406e65 (int32_t arg_4h) {
    *(0x40ba3c)++;
    eax = fcn_00403ddf (0x1000);
    ecx = *((esp + 4));
    *((ecx + 8)) = eax;
    if (eax != 0) {
        *((ecx + 0xc)) |= 8;
        *((ecx + 0x18)) = 0x1000;
    } else {
        *((ecx + 0xc)) |= 4;
        eax = ecx + 0x14;
        *((ecx + 8)) = eax;
        *((ecx + 0x18)) = 2;
    }
    eax = *((ecx + 8));
    *((ecx + 4)) = 0;
    *(ecx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406dd9 */
#include <stdint.h>
 
int32_t fcn_00406dd9 (LONG lDistanceToMove, int32_t arg_18h) {
    eax = *((esp + 4));
    if (eax < *(0x40bec8)) {
        ecx = eax;
        ecx >>= 5;
        esi = eax;
        esi &= 0x1f;
        edi = ecx*4 + 0x40bee0;
        ecx = *(edi);
        esi <<= 3;
        if ((*((ecx + esi + 4)) & 1) != 0) {
            eax = fcn_004083f0 (eax);
            if (eax == -1) {
                goto label_0;
            }
            eax = SetFilePointer (eax, *((esp + 0x1c)), 0, *((esp + 0x18)));
            ebx = eax;
            if (ebx == -1) {
                eax = GetLastError ();
            } else {
                eax = 0;
            }
            if (eax != 0) {
                fcn_00408278 (eax);
                goto label_1;
            }
            eax = *(edi);
            eax = eax + esi + 4;
            *(eax) &= 0xfd;
            eax = ebx;
        }
    } else {
        *(0x40ba54) = 0;
label_0:
        *(0x40ba50) = 9;
label_1:
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407057 */
#include <stdint.h>
 
int32_t fcn_00407057 (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = *((esi + 0xc));
    edi |= 0xffffffff;
    if ((al & 0x40) != 0) {
        eax |= 0xffffffff;
    } else {
        if ((al & 0x83) != 0) {
            eax = fcn_00403e18 (esi);
            edi = eax;
            fcn_004084df (esi);
            eax = fcn_0040842c (*((esi + 0x10)));
            if (eax < 0) {
                edi |= 0xffffffff;
            } else {
                eax = *((esi + 0x1c));
                if (eax == 0) {
                    goto label_0;
                }
                fcn_0040403c (eax);
                *((esi + 0x1c)) = 0;
            }
        }
label_0:
        eax = edi;
    }
    *((esi + 0xc)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4070ad */
#include <stdint.h>
 
uint32_t fcn_004070ad (int32_t arg_20h_2, DWORD arg_8h, LPCCH lpMultiByteStr, int32_t cbMultiByte, LPWORD arg_14h, UINT CodePage, int32_t arg_1ch, uint32_t arg_20h) {
    int32_t var_2ch;
    int32_t var_28h_2;
    BOOL var_24h_2;
    uint32_t var_20h_2;
    LPWORD lpCharType;
    int32_t var_38h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    DWORD dwInfoType;
    LPCCH var_ch;
    int32_t var_10h;
    LPWORD var_14h;
    UINT var_18h;
    int32_t var_4h;
    fcn_00403bd0 (0x409d40);
    esi = 0;
    if (*(0x40bc70) == esi) {
        edi = 0;
        edi++;
        eax = GetStringTypeW (edi, 0x409d3c, edi, ebp - 0x1c);
        if (eax != 0) {
            *(0x40bc70) = edi;
        } else {
            eax = GetLastError ();
            if (eax != 0x78) {
                goto label_0;
            }
            *(0x40bc70) = 2;
        }
    }
label_0:
    eax = *(0x40bc70);
    if (eax != 2) {
        if (eax == esi) {
            goto label_1;
        }
        if (eax != 1) {
            goto label_2;
        }
        *((ebp - 0x24)) = esi;
        *((ebp - 0x20)) = esi;
        if (*((ebp + 0x18)) == esi) {
            eax = *(0x40bc64);
            *((ebp + 0x18)) = eax;
        }
        eax = 0;
        al = (*((ebp + 0x20)) != esi) ? 1 : 0;
        eax = MultiByteToWideChar (*((ebp + 0x18)), eax*8 + 1, *((ebp + 0xc)), *((ebp + 0x10)), esi, esi);
        edi = eax;
        *((ebp - 0x28)) = edi;
        if (edi == 0) {
            goto label_2;
        }
        *((ebp - 4)) = 0;
        ebx = edi + edi;
        eax = ebx;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00403d30 ();
        *((ebp - 0x18)) = esp;
        esi = esp;
        *((ebp - 0x2c)) = esi;
        fcn_004045e0 (esi, 0, ebx);
        *((ebp - 4)) |= 0xffffffff;
        if (esi == 0) {
            eax = fcn_00404245 (2, edi);
            esi = eax;
            if (esi == 0) {
                goto label_2;
            }
            *((ebp - 0x20)) = 1;
        }
        eax = MultiByteToWideChar (*((ebp + 0x18)), 1, *((ebp + 0xc)), *((ebp + 0x10)), esi, edi);
        if (eax != 0) {
            eax = GetStringTypeW (*((ebp + 8)), esi, eax, *((ebp + 0x14)));
            *((ebp - 0x24)) = eax;
        }
        if (*((ebp - 0x20)) != 0) {
            fcn_0040403c (esi);
        }
        eax = *((ebp - 0x24));
        goto label_3;
    }
label_1:
    ebx = *((ebp + 0x1c));
    if (ebx == esi) {
        ebx = *(0x40bc54);
    }
    edi = *((ebp + 0x18));
    if (edi == 0) {
        edi = *(0x40bc64);
    }
    eax = fcn_0040850a (ebx);
    while (esi == 0) {
label_2:
        eax = 0;
        goto label_3;
        if (eax == edi) {
            goto label_4;
        }
        eax = fcn_0040854d (edi, eax, *((ebp + 0xc)), ebp + 0x10, 0);
        esi = eax;
    }
    *((ebp + 0xc)) = esi;
label_4:
    eax = GetStringTypeA (ebx, *((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
    edi = eax;
    if (esi != 0) {
        fcn_0040403c (esi);
    }
    eax = edi;
label_3:
    esp = ebp - 0x38;
    fcn_00403c0b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407267 */
#include <stdint.h>
 
int32_t fcn_00407267 (int32_t arg_8h, uint32_t arg_ch, DWORD * nNumberOfBytesToRead) {
    LPDWORD * lpNumberOfBytesRead;
    int32_t var_ch;
    uint32_t var_8h;
    LPVOID * lpBuffer;
    esi = *((ebp + 8));
    if (esi >= *(0x40bec8)) {
        goto label_0;
    }
    eax = esi;
    eax >>= 5;
    edi = eax*4 + 0x40bee0;
    eax = *(edi);
    esi &= 0x1f;
    esi <<= 3;
    eax += esi;
    dl = *((eax + 4));
    if ((dl & 1) == 0) {
        goto label_0;
    }
    *((ebp - 0xc)) = 0;
    ebx = *((ebp + 0xc));
    ecx = *((ebp + 0xc));
    if (*((ebp + 0x10)) != 0) {
        if ((dl & 2) != 0) {
            goto label_1;
        }
        if ((dl & 0x48) != 0) {
            if (*((eax + 5)) == 0xa) {
                goto label_2;
            }
            eax = *(edi);
            al = *((eax + esi + 5));
            *((ebp + 0x10))--;
            *(ebx) = al;
            eax = *(edi);
            ecx = ebx + 1;
            *((ebp - 0xc)) = 1;
            *((eax + esi + 5)) = 0xa;
        }
label_2:
        eax = *(edi);
        eax = ReadFile (*((eax + esi)), ecx, *((ebp + 0x10)), ebp - 0x10, 0);
        if (eax != 0) {
            goto label_3;
        }
        eax = GetLastError ();
        ecx = 5;
        if (eax == ecx) {
            *(0x40ba54) = ecx;
            goto label_4;
        }
        if (eax != 0x6d) {
            goto label_5;
        }
    }
label_1:
    eax = 0;
    goto label_6;
label_5:
    fcn_00408278 (eax);
    goto label_7;
label_3:
    eax = *((ebp - 0x10));
    ecx = *(edi);
    *((ebp - 0xc)) += eax;
    if ((*((ecx + esi + 4)) & 0x80) == 0) {
        goto label_8;
    }
    if (eax != 0) {
        if (*(ebx) == 0xa) {
            eax = ecx;
            eax = eax + esi + 4;
            *(eax) |= 4;
        }
    } else {
        eax = *(edi);
        eax = eax + esi + 4;
        *(eax) &= 0xfb;
    }
    eax = *((ebp + 0xc));
    ecx = *((ebp - 0xc));
    ecx += eax;
    *((ebp - 8)) = eax;
    *((ebp - 0xc)) = ecx;
    if (eax >= ecx) {
        goto label_9;
    }
    do {
        eax = *((ebp - 8));
        al = *(eax);
        if (al == 0x1a) {
            goto label_10;
        }
        if (al != 0xd) {
            *(ebx) = al;
            ebx++;
            *((ebp - 8))++;
        } else {
            ecx--;
            if (*((ebp - 8)) < ecx) {
                eax = *((ebp - 8));
                eax++;
                if (*(eax) == 0xa) {
                    *((ebp - 8)) += 2;
                } else {
                    *((ebp - 8)) = eax;
                } else {
                    *((ebp - 8))++;
                    eax = *(edi);
                    eax = ReadFile (*((eax + esi)), ebp - 1, 1, ebp - 0x10, 0);
                    if (eax == 0) {
                        eax = GetLastError ();
                        if (eax != 0) {
                            goto label_11;
                        }
                    }
                    if (*((ebp - 0x10)) == 0) {
                        goto label_11;
                    }
                    eax = *(edi);
                    if ((*((eax + esi + 4)) & 0x48) != 0) {
                        al = *((ebp - 1));
                        if (al == 0xa) {
                            goto label_12;
                        }
                        *(ebx) = 0xd;
                        ecx = *(edi);
                        *((ecx + esi + 5)) = al;
                        goto label_13;
                    }
                    if (ebx != *((ebp + 0xc))) {
                        goto label_14;
                    }
                    if (*((ebp - 1)) != 0xa) {
                        goto label_14;
                    }
                }
label_12:
                *(ebx) = 0xa;
                goto label_13;
label_14:
                fcn_00406dd9 (*((ebp + 8)), 0xffffffffffffffff);
                if (*((ebp - 1)) == 0xa) {
                    goto label_15;
                }
            }
label_11:
            *(ebx) = 0xd;
label_13:
            ebx++;
        }
label_15:
        ecx = *((ebp - 0xc));
    } while (*((ebp - 8)) < ecx);
    goto label_9;
label_10:
    eax = *(edi);
    if ((*((eax + esi + 4)) & 0x40) == 0) {
        esi = eax + esi + 4;
        *(esi) |= 2;
    }
label_9:
    ebx -= *((ebp + 0xc));
    *((ebp - 0xc)) = ebx;
label_8:
    eax = *((ebp - 0xc));
    goto label_6;
label_0:
    *(0x40ba54) = 0;
label_4:
    *(0x40ba50) = 9;
label_7:
    eax |= 0xffffffff;
label_6:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407455 */
#include <stdint.h>
 
uint32_t fcn_00407455 (UINT CodePage, uint32_t arg_24h, LCID arg_8h, DWORD arg_ch, LPCSTR arg_10h, int32_t cchSrc, LPSTR arg_18h, int32_t arg_1ch, uint32_t arg_20h) {
    int32_t var_38h_2;
    int32_t var_34h;
    int32_t var_30h_2;
    LPWSTR var_20h;
    LPCWSTR lpSrcStr;
    int32_t var_18h_3;
    int32_t var_44h;
    int32_t var_40h_2;
    int32_t var_3ch_2;
    uint32_t var_38h;
    uint32_t var_54h;
    int32_t var_30h;
    int32_t var_2ch;
    LCID var_48h;
    DWORD var_24h_2;
    int32_t var_40h;
    LPWSTR lpWideCharStr;
    LPWSTR lpDestStr;
    int32_t cchDest;
    UINT var_20h_2;
    int32_t var_24h_3;
    uint32_t var_28h;
    int32_t var_24h;
    LCID Locale;
    DWORD dwMapFlags;
    int32_t var_dh;
    LPCCH lpMultiByteStr;
    int32_t cbMultiByte;
    int32_t var_18h_2;
    int32_t var_4h;
    fcn_00403bd0 (0x409d50);
    ebx = 0;
    if (*(0x40bc74) == ebx) {
        esi = 0;
        esi++;
        eax = LCMapStringW (ebx, 0x100, 0x409d3c, esi, ebx, ebx);
        if (eax != 0) {
            *(0x40bc74) = esi;
        } else {
            eax = GetLastError ();
            if (eax != 0x78) {
                goto label_0;
            }
            *(0x40bc74) = 2;
        }
    }
label_0:
    if (*((ebp + 0x14)) <= ebx) {
        goto label_1;
    }
    ecx = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    do {
        ecx--;
        if (*(eax) == bl) {
            goto label_2;
        }
        eax++;
    } while (ecx != ebx);
    ecx |= 0xffffffff;
label_2:
    eax |= 0xffffffff;
    eax -= ecx;
    *((ebp + 0x14)) += eax;
label_1:
    eax = *(0x40bc74);
    if (eax != 2) {
        if (eax == ebx) {
            goto label_3;
        }
        if (eax != 1) {
            goto label_4;
        }
        edi = 0;
        *((ebp - 0x2c)) = edi;
        *((ebp - 0x38)) = ebx;
        *((ebp - 0x34)) = ebx;
        if (*((ebp + 0x20)) == ebx) {
            eax = *(0x40bc64);
            *((ebp + 0x20)) = eax;
        }
        eax = 0;
        al = (*((ebp + 0x24)) != ebx) ? 1 : 0;
        eax = MultiByteToWideChar (*((ebp + 0x20)), eax*8 + 1, *((ebp + 0x10)), *((ebp + 0x14)), ebx, ebx);
        esi = eax;
        *((ebp - 0x30)) = esi;
        if (esi == ebx) {
            goto label_4;
        }
        *((ebp - 4)) = 1;
        eax = esi + esi;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00403d30 ();
        *((ebp - 0x18)) = esp;
        eax = esp;
        *((ebp - 0x1c)) = eax;
        *((ebp - 4)) |= 0xffffffff;
        if (*((ebp - 0x1c)) == ebx) {
            eax = fcn_00403ddf (esi + esi);
            *((ebp - 0x1c)) = eax;
            if (eax == ebx) {
                goto label_4;
            }
            *((ebp - 0x38)) = 1;
        }
        eax = MultiByteToWideChar (*((ebp + 0x20)), 1, *((ebp + 0x10)), *((ebp + 0x14)), *((ebp - 0x1c)), esi);
        if (eax != 0) {
            eax = LCMapStringW (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x1c)), esi, ebx, ebx);
            edi = eax;
            *((ebp - 0x2c)) = edi;
            if (edi == ebx) {
                goto label_5;
            }
            if ((*((ebp + 0xd)) & 4) != 0) {
                if (*((ebp + 0x1c)) == ebx) {
                    goto label_5;
                }
                if (edi > *((ebp + 0x1c))) {
                    goto label_5;
                }
                LCMapStringW (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x1c)), esi, *((ebp + 0x18)), *((ebp + 0x1c)));
            } else {
                *((ebp - 4)) = 2;
                eax = edi + edi;
                eax += 3;
                eax &= 0xfffffffc;
                fcn_00403d30 ();
                *((ebp - 0x18)) = esp;
                eax = esp;
                *((ebp - 0x20)) = eax;
                *((ebp - 4)) |= 0xffffffff;
                if (*((ebp - 0x20)) == ebx) {
                    eax = fcn_00403ddf (edi + edi);
                    *((ebp - 0x20)) = eax;
                    if (eax == ebx) {
                        goto label_5;
                    }
                    *((ebp - 0x34)) = 1;
                }
                eax = LCMapStringW (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x1c)), esi, *((ebp - 0x20)), edi);
                if (eax == 0) {
                    goto label_5;
                }
                if (*((ebp + 0x1c)) == ebx) {
                } else {
                }
                eax = WideCharToMultiByte (*((ebp + 0x20)), ebx, *((ebp - 0x20)), edi, *((ebp + 0x18)), *((ebp + 0x1c)));
                edi = eax;
            }
        }
label_5:
        if (*((ebp - 0x34)) != ebx) {
            fcn_0040403c (*((ebp - 0x20)));
        }
        if (*((ebp - 0x38)) != ebx) {
            fcn_0040403c (*((ebp - 0x1c)));
        }
        eax = edi;
        goto label_6;
    }
label_3:
    *((ebp - 0x28)) = ebx;
    edi = 0;
    *((ebp - 0x3c)) = ebx;
    if (*((ebp + 8)) == ebx) {
        eax = *(0x40bc54);
        *((ebp + 8)) = eax;
    }
    if (*((ebp + 0x20)) == ebx) {
        eax = *(0x40bc64);
        *((ebp + 0x20)) = eax;
    }
    eax = fcn_0040850a (*((ebp + 8)));
    *((ebp - 0x40)) = eax;
    while (eax == ebx) {
label_4:
        eax = 0;
        goto label_6;
        if (eax == *((ebp + 0x20))) {
            goto label_7;
        }
        eax = fcn_0040854d (*((ebp + 0x20)), eax, *((ebp + 0x10)), ebp + 0x14, ebx);
        *((ebp - 0x28)) = eax;
    }
    eax = LCMapStringA (*((ebp + 8)), *((ebp + 0xc)), eax, *((ebp + 0x14)), ebx, ebx);
    esi = eax;
    *((ebp - 0x24)) = esi;
    if (esi != ebx) {
        *((ebp - 4)) = ebx;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00403d30 ();
        *((ebp - 0x18)) = esp;
        edi = esp;
        *((ebp - 0x44)) = edi;
        fcn_004045e0 (edi, ebx, esi);
        *((ebp - 4)) |= 0xffffffff;
        if (edi == ebx) {
            eax = fcn_00403ddf (*((ebp - 0x24)));
            edi = eax;
            if (edi == ebx) {
                goto label_8;
            }
            fcn_004045e0 (edi, ebx, *((ebp - 0x24)));
            *((ebp - 0x3c)) = 1;
        }
        eax = LCMapStringA (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x28)), *((ebp + 0x14)), edi, *((ebp - 0x24)));
        *((ebp - 0x24)) = eax;
        if (eax == ebx) {
label_8:
            esi = 0;
        } else {
        }
        eax = fcn_0040854d (*((ebp - 0x40)), *((ebp + 0x20)), edi, ebp - 0x24, *((ebp + 0x18)));
        esi = eax;
        esi = -esi;
        esi -= esi;
        esi = -esi;
    } else {
        esi = *((ebp - 0x48));
    }
    if (*((ebp - 0x3c)) != ebx) {
        fcn_0040403c (edi);
        goto label_9;
label_7:
        eax = LCMapStringA (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)));
        esi = eax;
    }
label_9:
    if (*((ebp - 0x28)) != ebx) {
        fcn_0040403c (*((ebp - 0x28)));
    }
    eax = esi;
label_6:
    esp = ebp - 0x54;
    fcn_00403c0b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407811 */
#include <stdint.h>
 
int32_t fcn_00407811 (int32_t arg_4h, int32_t arg_ch, int32_t arg_10h) {
    edx = *((esp + 4));
    esi = *((esp + 0xc));
    ecx = edx + esi;
    eax = 0;
    if (ecx >= edx) {
        if (ecx >= esi) {
            goto label_0;
        }
    }
    eax = 0;
    eax++;
label_0:
    edx = *((esp + 0x10));
    *(edx) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404839 */
#include <stdint.h>
 
int32_t fcn_00404839 (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 8));
    ecx = 0x20;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ecx = 0x1f;
    ecx -= edx;
    edx |= 0xffffffff;
    edx <<= cl;
    ecx = *((esp + 4));
    edx = ~edx;
    if ((*((ecx + eax*4)) & edx) == 0) {
        goto label_1;
    }
    do {
        eax = 0;
        return eax;
label_0:
    } while (*((ecx + eax*4)) != 0);
label_1:
    eax++;
    if (eax < 3) {
        goto label_0;
    }
    eax = 0;
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40486b */
#include <stdint.h>
 
int32_t fcn_0040486b (int32_t arg_ch, int32_t arg_8h) {
    eax = *((esp + 8));
    ecx = 0x20;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    edi = *((esp + 0xc));
    esi = eax;
    eax = edi + esi*4;
    ecx = 0x1f;
    ecx -= edx;
    edx = 0;
    edx++;
    edx <<= cl;
    eax = fcn_00407811 (*(eax), edx, 0x1f);
    esi--;
    if (esi < 0) {
        goto label_0;
    }
    edi = edi + esi*4;
    do {
        if (eax == 0) {
            goto label_0;
        }
        fcn_00407811 (*(edi), 1, edi);
        esi--;
        edi -= 4;
    } while (esi >= 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x404945 */
#include <stdint.h>
 
int32_t fcn_00404945 (int32_t arg_4h) {
    eax = 0;
    do {
        ecx = *((esp + 4));
        if (*((ecx + eax*4)) != 0) {
            goto label_0;
        }
        eax++;
    } while (eax < 3);
    eax = 0;
    eax++;
    return eax;
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40492a */
#include <stdint.h>
 
int32_t fcn_0040492a (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 8));
    ecx = *((esp + 4));
    edx = 3;
    ecx -= eax;
    do {
        esi = *(eax);
        *((ecx + eax)) = esi;
        eax += 4;
        edx--;
    } while (edx != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4048b8 */
#include <stdint.h>
 
uint32_t fcn_004048b8 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    *((ebp - 4)) = 0;
    edi = *((ebp + 0xc));
    edi--;
    eax = edi + 1;
    ecx = 0x20;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = 0x1f;
    esi -= edx;
    edx = 0;
    edx++;
    ecx = esi;
    edx <<= cl;
    ebx = eax;
    eax = *((ebp + 8));
    if ((*((eax + ebx*4)) & edx) != 0) {
        eax = fcn_00404839 (eax, edi + 1);
        if (eax == 0) {
            eax = fcn_0040486b (*((ebp + 8)), edi);
            *((ebp - 4)) = eax;
        }
        eax = *((ebp + 8));
    }
    edx |= 0xffffffff;
    ecx = esi;
    edx <<= cl;
    ecx = 3;
    *((eax + ebx*4)) &= edx;
    ebx++;
    if (ebx < ecx) {
        edi = eax + ebx*4;
        ecx -= ebx;
        eax = 0;
        memset (edi, eax, ecx);
    }
    eax = *((ebp - 4));
    edi = 3;
    esi = 3;
    ebx = 3;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40495e */
#include <stdint.h>
 
int32_t fcn_0040495e (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0xc));
    esi = 0x20;
    edx:eax = (int64_t) eax;
    ecx = esi;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ebx = *((ebp + 8));
    edi |= 0xffffffff;
    *((ebp + 0xc)) = esi;
    ecx = edx;
    edi <<= cl;
    *((ebp - 8)) = eax;
    eax = 0;
    *((ebp + 0xc)) -= edx;
    edi = ~edi;
    *((ebp - 4)) = eax;
    do {
        esi = *((ebx + eax*4));
        ecx = *((ebx + eax*4));
        ecx &= edi;
        *((ebp - 0xc)) = ecx;
        ecx = edx;
        esi >>= cl;
        ecx = *((ebp + 0xc));
        esi |= *((ebp - 4));
        *((ebx + eax*4)) = esi;
        esi = *((ebp - 0xc));
        esi <<= cl;
        eax++;
        *((ebp - 4)) = esi;
    } while (eax < 3);
    eax = 2;
    ecx = eax;
    ecx -= *((ebp - 8));
    ecx = ebx + ecx*4;
    do {
        if (eax >= *((ebp - 8))) {
            edx = *(ecx);
            *((ebx + eax*4)) = edx;
        } else {
            *((ebx + eax*4)) = 0;
        }
        eax--;
        ecx -= 4;
    } while (eax >= 0);
    edi = 2;
    esi = 2;
    ebx = 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408240 */
#include <stdint.h>
 
uint32_t fcn_00408240 (int32_t arg_8h, int32_t arg_8h_2) {
    if (*(0x40bec4) == 3) {
        esi = *((esp + 8));
        eax = fcn_00405d85 (esi);
        if (eax != 0) {
            eax = *((esi - 4));
            eax -= 9;
            return eax;
        }
    } else {
    }
    HeapSize (*(0x40bec0), 0, *((esp + 8)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4080de */
#include <stdint.h>
 
uint32_t fcn_004080de (int32_t arg_8h, int32_t arg_18h) {
    ebx = *((esp + 8));
    if (ebx == 0) {
        fcn_00403ddf (*((esp + 0x14)));
        goto label_0;
    }
    esi = *((esp + 0x18));
    if (esi == 0) {
        fcn_0040403c (ebx);
        goto label_1;
    }
    if (*(0x40bec4) != 3) {
        goto label_2;
    }
    do {
        edi = 0;
        if (esi <= 0xffffffe0) {
            eax = fcn_00405d85 (ebx);
            if (ebp != 0) {
                if (esi <= *(0x40bc84)) {
                    eax = fcn_00406285 (ebp, ebx, esi);
                    if (eax != 0) {
                        edi = ebx;
                    } else {
                        eax = fcn_00406564 (esi);
                        edi = eax;
                        if (edi == 0) {
                            goto label_3;
                        }
                        eax = *((ebx - 4));
                        eax--;
                        if (eax >= esi) {
                            eax = esi;
                        }
                        fcn_00405a00 (edi, ebx, eax);
                        eax = fcn_00405d85 (ebx);
                        fcn_00405db0 (ebp, ebx);
                    }
                    if (edi != 0) {
                        goto label_4;
                    }
                }
label_3:
                if (esi == 0) {
                    esi++;
                }
                esi += 0xf;
                esi &= 0xfffffff0;
                eax = HeapAlloc (*(0x40bec0), 0, esi);
                edi = eax;
                if (edi != 0) {
                    eax = *((ebx - 4));
                    eax--;
                    if (eax >= esi) {
                        eax = esi;
                    }
                    fcn_00405a00 (edi, ebx, eax);
                    fcn_00405db0 (ebp, ebx);
                }
label_4:
                if (ebp != 0) {
                    goto label_5;
                }
            }
            if (esi == 0) {
                esi++;
            }
            esi += 0xf;
            esi &= 0xfffffff0;
            eax = HeapReAlloc (*(0x40bec0), 0, ebx, esi);
            edi = eax;
label_5:
            if (edi != 0) {
                goto label_6;
            }
        }
        if (*(0x40bc48) == 0) {
            goto label_6;
        }
        eax = fcn_00406b77 (esi);
    } while (eax != 0);
    goto label_1;
label_6:
    eax = edi;
    goto label_7;
    do {
label_2:
        eax = 0;
        if (esi <= 0xffffffe0) {
            if (esi == 0) {
                esi++;
            }
            eax = HeapReAlloc (*(0x40bec0), 0, ebx, esi);
            if (eax != 0) {
                goto label_7;
            }
        }
        if (*(0x40bc48) == 0) {
            goto label_7;
        }
        eax = fcn_00406b77 (esi);
    } while (eax != 0);
label_1:
    eax = 0;
label_7:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405614 */
#include <stdint.h>
 
int32_t fcn_00405614 (void) {
    eax -= 0x3a4;
    if (eax != 0) {
        eax -= 4;
        if (eax != 0) {
            eax -= 0xd;
            if (eax != 0) {
                eax--;
                if (eax != 0) {
                    eax = 0;
                    return eax;
                }
                eax = 0x404;
                return eax;
            }
            eax = 0x412;
            return eax;
        }
        eax = 0x804;
        return eax;
    }
    eax = 0x411;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x405643 */
#include <stdint.h>
 
int32_t fcn_00405643 (void) {
    eax = 0;
    ecx = 0x40;
    edi = 0x40bca0;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    eax = 0;
    *(0x40bda4) = eax;
    *(0x40bc98) = eax;
    *(0x40bc94) = eax;
    edi = 0x40bdb0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    edi = 0x40;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40566c */
#include <stdint.h>
 
int32_t fcn_0040566c (void) {
    int32_t var_518h;
    int32_t var_318h;
    int32_t var_218h;
    int32_t var_118h;
    LPCPINFO lpCPInfo;
    int32_t var_12h;
    int32_t var_11h;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    eax = GetCPInfo (*(0x40bda4), ebp - 0x18, esi);
    esi = 0x100;
    if (eax != 1) {
        goto label_2;
    }
    eax = 0;
    do {
        *((ebp + eax - 0x118)) = al;
        eax++;
    } while (eax < esi);
    al = *((ebp - 0x12));
    *((ebp - 0x118)) = 0x20;
    if (al == 0) {
        goto label_3;
    }
    edx = ebp - 0x11;
    do {
        ecx = *(edx);
        eax = (int32_t) al;
        if (eax <= ecx) {
            ecx -= eax;
            ecx++;
            ebx = ecx;
            ecx >>= 2;
            edi = ebp + eax - 0x118;
            eax = 0x20202020;
            memset (edi, eax, ecx);
            ecx = ebx;
            ecx &= 3;
            *(es:edi) = al;
            ecx--;
            es:edi++;
        }
        edx++;
        al = *(edx);
        edx++;
    } while (al != 0);
    ebx = edi;
label_3:
    eax = ebp - 0x518;
    fcn_004070ad (1, ebp - 0x118, esi, eax, *(0x40bda4), *(0x40bc94), 0);
    do {
    } while (ecx != 0);
    eax = ebp - 0x218;
    fcn_00407455 (*(0x40bc94), esi, ebp - 0x118, esi, eax, esi, *(0x40bda4), 0);
    eax = ebp - 0x318;
    eax = fcn_00407455 (*(0x40bc94), 0x200, ebp - 0x118, esi, eax, esi, *(0x40bda4), 0);
    eax = 0;
label_0:
    cx = *((ebp + eax*2 - 0x518));
    if ((cl & 1) == 0) {
        goto label_4;
    }
    *((eax + 0x40bca1)) |= 0x10;
    cl = *((ebp + eax - 0x218));
    do {
        *((eax + 0x40bdc0)) = cl;
        goto label_5;
label_4:
        if ((cl & 2) == 0) {
            goto label_6;
        }
        *((eax + 0x40bca1)) |= 0x20;
        cl = *((ebp + eax - 0x318));
    } while (1);
label_6:
    *((eax + 0x40bdc0)) = 0;
label_5:
    eax++;
    if (eax < esi) {
        goto label_0;
    }
    goto label_7;
label_2:
    eax = 0;
label_1:
    if (eax < 0x41) {
        goto label_8;
    }
    if (eax > 0x5a) {
        goto label_8;
    }
    *((eax + 0x40bca1)) |= 0x10;
    cl = al;
    cl += 0x20;
    do {
        *((eax + 0x40bdc0)) = cl;
        goto label_9;
label_8:
        if (eax < 0x61) {
            goto label_10;
        }
        if (eax > 0x7a) {
            goto label_10;
        }
        *((eax + 0x40bca1)) |= 0x20;
        cl = al;
        cl -= 0x20;
    } while (1);
label_10:
    *((eax + 0x40bdc0)) = 0;
label_9:
    eax++;
    if (eax < esi) {
        goto label_1;
    }
label_7:
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4060c8 */
#include <stdint.h>
 
int32_t fcn_004060c8 (void) {
    eax = *(0x40bc7c);
    ecx = *(0x40bc8c);
    edi = 0;
    if (eax == ecx) {
        eax = ecx * 5;
        eax <<= 2;
        eax = HeapReAlloc (*(0x40bec0), edi, *(0x40bc80), eax);
        if (eax == edi) {
            eax = 0;
            return eax;
        }
        *(0x40bc8c) += 0x10;
        *(0x40bc80) = eax;
        eax = *(0x40bc7c);
    }
    ecx = *(0x40bc80);
    eax *= 5;
    esi = ecx + eax*4;
    eax = HeapAlloc (*(0x40bec0), 8, 0x41c4, esi);
    *((esi + 0x10)) = eax;
    while (1) {
        eax = 0;
        goto label_0;
        eax = VirtualAlloc (edi, 0x100000, 0x2000, 4);
        *((esi + 0xc)) = eax;
        if (eax != edi) {
            goto label_1;
        }
        HeapFree (*(0x40bec0), edi, *((esi + 0x10)));
    }
label_1:
    *((esi + 8)) |= 0xffffffff;
    *(esi) = edi;
    *((esi + 4)) = edi;
    *(0x40bc7c)++;
    eax = *((esi + 0x10));
    *(eax) |= 0xffffffff;
    eax = esi;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40617f */
#include <stdint.h>
 
int32_t fcn_0040617f (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    ecx = *((ebp + 8));
    eax = *((ecx + 8));
    esi = *((ecx + 0x10));
    ebx = 0;
    while (eax >= 0) {
        eax <<= 1;
        ebx++;
    }
    eax = ebx;
    eax *= 0x204;
    eax = eax + esi + 0x144;
    *((ebp - 8)) = eax;
    edx = 0x3f;
    do {
        *((eax + 8)) = eax;
        *((eax + 4)) = eax;
        eax += 8;
        edx--;
    } while (edx != 0);
    edi = ebx;
    edi <<= 0xf;
    edi += *((ecx + 0xc));
    eax = VirtualAlloc (edi, 0x8000, 0x1000, 4);
    if (eax == 0) {
        eax |= 0xffffffff;
        goto label_0;
    }
    edx = edi + 0x7000;
    *((ebp - 4)) = edx;
    if (edi > edx) {
        goto label_1;
    }
    ecx = edx;
    ecx -= edi;
    ecx >>= 0xc;
    eax = edi + 0x10;
    ecx++;
    do {
        *((eax - 8)) |= 0xffffffff;
        *((eax + 0xfec)) |= 0xffffffff;
        edx = eax + 0xffc;
        *(eax) = edx;
        edx = eax - 0x1004;
        *((eax - 4)) = 0xff0;
        *((eax + 4)) = edx;
        *((eax + 0xfe8)) = 0xff0;
        eax += 0x1000;
        ecx--;
    } while (ecx != 0);
    edx = *((ebp - 4));
label_1:
    eax = *((ebp - 8));
    eax += 0x1f8;
    ecx = edi + 0xc;
    *((eax + 4)) = ecx;
    *((ecx + 8)) = eax;
    ecx = edx + 0xc;
    *((eax + 8)) = ecx;
    *((ecx + 4)) = eax;
    *((esi + ebx*4 + 0x44)) = 0;
    edi = 0;
    edi++;
    *((esi + ebx*4 + 0xc4)) = edi;
    al = *((esi + 0x43));
    cl = *((esi + 0x43));
    cl++;
    eax = *((ebp + 8));
    *((esi + 0x43)) = cl;
    if (al == 0) {
        *((eax + 4)) |= edi;
    }
    edx = 0x80000000;
    ecx = ebx;
    edx >>= cl;
    edx = ~edx;
    *((eax + 8)) &= edx;
    eax = ebx;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4082d7 */
#include <stdint.h>
 
int32_t fcn_004082d7 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, DWORD dwMoveMethod) {
    LONG lDistanceToMove;
    PLONG lpDistanceToMoveHigh;
    eax = *((ebp + 8));
    if (eax < *(0x40bec8)) {
        ecx = eax;
        ecx >>= 5;
        esi = eax;
        esi &= 0x1f;
        edi = ecx*4 + 0x40bee0;
        ecx = *(edi);
        esi <<= 3;
        if ((*((ecx + esi + 4)) & 1) != 0) {
            ecx = *((ebp + 0xc));
            *((ebp - 8)) = ecx;
            ecx = *((ebp + 0x10));
            *((ebp - 4)) = ecx;
            eax = fcn_004083f0 (eax);
            if (eax == -1) {
                goto label_0;
            }
            eax = SetFilePointer (eax, *((ebp - 8)), ebp - 4, *((ebp + 0x14)));
            *((ebp - 8)) = eax;
            if (eax == -1) {
                eax = GetLastError ();
                if (eax == 0) {
                    goto label_1;
                }
                fcn_00408278 (eax);
                goto label_2;
            }
label_1:
            eax = *(edi);
            eax = eax + esi + 4;
            *(eax) &= 0xfd;
            eax = *((ebp - 8));
            edx = *((ebp - 4));
        }
    } else {
        *(0x40ba54) = 0;
label_0:
        *(0x40ba50) = 9;
label_2:
        eax |= 0xffffffff;
        edx |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408278 */
#include <stdint.h>
 
int32_t fcn_00408278 (int32_t arg_4h) {
    eax = *((esp + 4));
    *(0x40ba54) = eax;
    ecx = 0;
    do {
        if (eax == *((ecx*8 + 0x40b5f8))) {
            goto label_0;
        }
        ecx++;
    } while (ecx < 0x2d);
    if (eax >= 0x13) {
        if (eax > 0x24) {
            goto label_1;
        }
        *(0x40ba50) = 0xd;
        return eax;
label_0:
        eax = *((ecx*8 + 0x40b5fc));
        *(0x40ba50) = eax;
        return eax;
    }
label_1:
    if (eax >= 0xbc) {
        *(0x40ba50) = 8;
        if (eax <= 0xca) {
            goto label_2;
        }
    }
    *(0x40ba50) = 0x16;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4083f0 */
#include <stdint.h>
 
int32_t fcn_004083f0 (int32_t arg_4h) {
    eax = *((esp + 4));
    if (eax < *(0x40bec8)) {
        ecx = eax;
        ecx >>= 5;
        ecx = *((ecx*4 + 0x40bee0));
        eax &= 0x1f;
        eax = ecx + eax*8;
        if ((*((eax + 4)) & 1) == 0) {
            goto label_0;
        }
        eax = *(eax);
        return eax;
    }
label_0:
    *(0x40ba54) = 0;
    *(0x40ba50) = 9;
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4084df */
#include <stdint.h>
 
int32_t fcn_004084df (int32_t arg_8h) {
    esi = *((esp + 8));
    eax = *((esi + 0xc));
    if ((al & 0x83) != 0) {
        if ((al & 8) == 0) {
            goto label_0;
        }
        eax = fcn_0040403c (*((esi + 8)));
        *((esi + 0xc)) &= 0xfbf7;
        eax = 0;
        *(esi) = eax;
        *((esi + 8)) = eax;
        *((esi + 4)) = eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40842c */
#include <stdint.h>
 
int32_t fcn_0040842c (int32_t arg_14h) {
    edi = *((esp + 0x14));
    if (edi < *(0x40bec8)) {
        eax = edi;
        eax >>= 5;
        esi = edi;
        esi &= 0x1f;
        ebx = eax*4 + 0x40bee0;
        eax = *(ebx);
        esi <<= 3;
        if ((*((eax + esi + 4)) & 1) != 0) {
            eax = fcn_004083f0 (edi);
            if (eax != -1) {
                if (edi != 1) {
                    if (edi != 2) {
                        goto label_0;
                    }
                }
                eax = fcn_004083f0 (2);
                eax = fcn_004083f0 (1);
                if (eax != ebp) {
label_0:
                    eax = fcn_004083f0 (edi);
                    eax = CloseHandle (eax);
                    if (eax != 0) {
                        goto label_1;
                    }
                    eax = GetLastError ();
                }
            } else {
label_1:
                ebp = 0;
            }
            fcn_00408376 (edi);
            eax = *(ebx);
            *((eax + esi + 4)) = 0;
            if (ebp != 0) {
                eax = fcn_00408278 (ebp);
                goto label_2;
            }
            eax = 0;
        }
    } else {
        *(0x40ba54) = 0;
        *(0x40ba50) = 9;
label_2:
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40850a */
#include <stdint.h>
 
int32_t fcn_0040850a (LCID Locale) {
    LPSTR lpLCData;
    int32_t var_6h;
    int32_t var_4h;
    eax = *(0x40b498);
    *((ebp - 4)) = eax;
    *((ebp - 6)) = 0;
    eax = GetLocaleInfoA (*((ebp + 8)), 0x1004, ebp - 0xc, 6);
    if (eax == 0) {
        eax |= 0xffffffff;
    } else {
        fcn_004089ce (ebp - 0xc);
    }
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x40854d */
#include <stdint.h>
 
int32_t fcn_0040854d (LPCCH lpMultiByteStr, DWORD arg_14h_2, uint32_t arg_8h, uint32_t arg_ch, int32_t arg_14h) {
    int32_t var_48h_2;
    int32_t var_54h;
    uint32_t cbMultiByte;
    uint32_t var_3ch_2;
    int32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_4h_2;
    UINT CodePage;
    UINT var_4h;
    fcn_00403bd0 (0x409d98);
    eax = *(0x40b498);
    *((ebp - 0x1c)) = eax;
    edi = 0;
    *((ebp - 0x34)) = edi;
    *((ebp - 0x44)) = edi;
    eax = *((ebp + 0x14));
    ebx = *(eax);
    *((ebp - 0x40)) = ebx;
    *((ebp - 0x3c)) = edi;
    eax = *((ebp + 8));
    if (eax != *((ebp + 0xc))) {
        eax = GetCPInfo (eax, ebp - 0x30);
        if (eax != 0) {
            if (*((ebp - 0x30)) != 1) {
                goto label_0;
            }
            eax = void (*esi)(uint32_t*, uint32_t) (*((ebp + 0xc)), ebp - 0x30);
            if (eax == 0) {
                goto label_0;
            }
            if (*((ebp - 0x30)) != 1) {
                goto label_0;
            }
            *((ebp - 0x3c)) = 1;
        }
label_0:
        if (*((ebp - 0x3c)) != edi) {
            if (ebx != -1) {
                esi = ebx;
            } else {
                eax = fcn_00404080 (*((ebp + 0x10)));
                esi = eax;
                esi++;
            }
            *((ebp - 0x38)) = esi;
        } else {
            esi = *((ebp - 0x38));
        }
        if (*((ebp - 0x3c)) == edi) {
            eax = MultiByteToWideChar (*((ebp + 8)), 1, *((ebp + 0x10)), ebx, edi, edi);
            esi = eax;
            *((ebp - 0x38)) = esi;
            if (esi == edi) {
                goto label_1;
            }
        }
        *((ebp - 4)) = edi;
        eax = esi + esi;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00403d30 ();
        *((ebp - 0x18)) = esp;
        ebx = esp;
        *((ebp - 0x48)) = ebx;
        fcn_004045e0 (ebx, edi, esi + esi);
        *((ebp - 4)) |= 0xffffffff;
        if (ebx == edi) {
            eax = fcn_00404245 (2, esi);
            ebx = eax;
            if (ebx == edi) {
label_1:
                eax = 0;
                goto label_2;
            }
            *((ebp - 0x44)) = 1;
        }
        eax = MultiByteToWideChar (*((ebp + 8)), 1, *((ebp + 0x10)), *((ebp - 0x40)), ebx, esi);
        if (eax == 0) {
            goto label_3;
        }
        if (*((ebp + 0x18)) != edi) {
            eax = WideCharToMultiByte (*((ebp + 0xc)), edi, ebx, esi, *((ebp + 0x18)), *((ebp + 0x1c)), edi, edi);
            if (eax == 0) {
                goto label_3;
            }
            eax = *((ebp + 0x18));
            *((ebp - 0x34)) = eax;
        } else {
        } else {
        }
    }
    if (*((ebp - 0x3c)) == edi) {
        eax = WideCharToMultiByte (*((ebp + 0xc)), edi, ebx, esi, edi, edi, edi, edi);
        esi = eax;
        if (esi == edi) {
            goto label_3;
        }
    }
    eax = fcn_00404245 (1, esi);
    *((ebp - 0x34)) = eax;
    if (eax == edi) {
        goto label_3;
    }
    eax = WideCharToMultiByte (*((ebp + 0xc)), edi, ebx, esi, eax, esi, edi, edi);
    if (eax == edi) {
        eax = fcn_0040403c (*((ebp - 0x34)));
        *((ebp - 0x34)) = edi;
    } else {
        if (*((ebp - 0x40)) == -1) {
            goto label_3;
        }
        ecx = *((ebp + 0x14));
        *(ecx) = eax;
        ebx = *((ebp - 0x48));
    }
label_3:
    if (*((ebp - 0x44)) != edi) {
        fcn_0040403c (ebx);
    }
    eax = *((ebp - 0x34));
label_2:
    esp = ebp - 0x54;
    ecx = *((ebp - 0x1c));
    fcn_004041a2 ();
    fcn_00403c0b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407890 */
#include <stdint.h>
 
int32_t fcn_00407890 (int32_t arg_4h) {
    eax = *((esp + 4));
    esi = *(eax);
    ecx = *(eax);
    esi += esi;
    edi = *((eax + 4));
    ecx >>= 0x1f;
    *(eax) = esi;
    esi = edi + edi;
    esi |= ecx;
    ecx = *((eax + 8));
    edx = edi;
    edx >>= 0x1f;
    ecx <<= 1;
    ecx |= edx;
    *((eax + 4)) = esi;
    *((eax + 8)) = ecx;
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x407832 */
#include <stdint.h>
 
uint32_t fcn_00407832 (int32_t arg_8h, int32_t arg_10h) {
    esi = *((esp + 8));
    edi = *((esp + 0x10));
    eax = fcn_00407811 (*(esi), *(edi), esi);
    if (eax != 0) {
        eax = fcn_00407811 (*(eax), 1, esi + 4);
        if (eax == 0) {
            goto label_0;
        }
        *((esi + 8))++;
    }
label_0:
    eax = fcn_00407811 (*(eax), *((edi + 4)), esi + 4);
    if (eax != 0) {
        *((esi + 8))++;
    }
    fcn_00407811 (*(eax), *((edi + 8)), esi + 8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4078eb */
#include <stdint.h>
 
int32_t fcn_004078eb (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x40b498);
    ebx = *((ebp + 0x10));
    edx = 0;
    *((ebp - 4)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = 0x404e;
    *(ebx) = edx;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = edx;
    if (eax <= edx) {
        goto label_0;
    }
    *((ebp + 0x10)) = eax;
    do {
        esi = ebx;
        edi = ebp - 0x10;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        fcn_00407890 (ebx);
        fcn_00407890 (ebx);
        fcn_00407832 (ebx, ebp - 0x10);
        fcn_00407890 (ebx);
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0xc)) = 0;
        *((ebp - 8)) = 0;
        *((ebp - 0x10)) = eax;
        fcn_00407832 (ebx, ebp - 0x10);
        *((ebp + 8))++;
        *((ebp + 0x10))--;
    } while (*((ebp + 0x10)) != 0);
    edx = 0;
label_0:
    if (*((ebx + 8)) != edx) {
        goto label_1;
    }
    edi = *((ebx + 8));
    do {
        ecx = *((ebx + 4));
        *((ebp - 0x14)) += 0xfff0;
        eax = ecx;
        eax >>= 0x10;
        edi = eax;
        eax = *(ebx);
        esi = *(ebx);
        esi >>= 0x10;
        ecx <<= 0x10;
        esi |= ecx;
        eax <<= 0x10;
        *((ebx + 4)) = esi;
        *(ebx) = eax;
    } while (edi == edx);
    *((ebx + 8)) = edi;
label_1:
    esi = 0x8000;
    while ((*((ebx + 8)) & esi) == 0) {
        fcn_00407890 (ebx);
        *((ebp - 0x14)) += 0xffff;
    }
    ax = *((ebp - 0x14));
    ecx = *((ebp - 4));
    *((ebx + 0xa)) = ax;
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408948 */
#include <stdint.h>
 
int32_t fcn_00408948 (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h) {
    int32_t var_10h;
    int32_t var_eh;
    int32_t var_4h;
    eax = *(0x40b498);
    ebx = 0x40b760;
    ecx = 0;
    ebx -= 0x60;
    *((ebp - 4)) = eax;
    if (*((ebp + 0xc)) == ecx) {
        goto label_0;
    }
    if (*((ebp + 0xc)) < ecx) {
        ebp + 0xc = -ebp + 0xc;
        ebx = 0x40b8c0;
        ebx -= 0x60;
    }
    if (*((ebp + 0x10)) == ecx) {
        eax = *((ebp + 8));
        *(eax) = cx;
    }
    if (*((ebp + 0xc)) == ecx) {
        goto label_0;
    }
    do {
        eax = *((ebp + 0xc));
        *((ebp + 0xc)) >>= 3;
        eax &= 7;
        ebx += 0x54;
        if (eax != ecx) {
            eax *= 3;
            esi = ebx + eax*4;
            if (*(esi) >= 0x8000) {
                edi = ebp - 0x10;
                *(es:edi) = *(esi);
                esi += 4;
                es:edi += 4;
                *(es:edi) = *(esi);
                esi += 4;
                es:edi += 4;
                *(es:edi) = *(esi);
                esi += 4;
                es:edi += 4;
                *((ebp - 0xe))--;
            }
            fcn_00408716 (*((ebp + 8)), ebp - 0x10);
            ecx = 0;
        }
    } while (*((ebp + 0xc)) != ecx);
label_0:
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408716 */
#include <stdint.h>
 
int32_t fcn_00408716 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_eh;
    int32_t var_ch;
    uint32_t var_ah;
    int32_t var_8h;
    uint32_t var_6h;
    int32_t var_5h;
    int32_t var_4h;
    eax = *(0x40b498);
    ebx = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = 0;
    ecx = 0;
    cx = *((ebx + 0xa));
    esi = *((ebp + 8));
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x10)) = eax;
    *((ebp - 0xc)) = eax;
    *((ebp - 8)) = eax;
    ax = *((esi + 0xa));
    edi = ecx;
    edx = 0x7fff;
    ecx &= edx;
    edi ^= eax;
    eax &= edx;
    edi &= 0x8000;
    edx = ecx + eax;
    *((ebp + 8)) = edx;
    if (ax >= 0x7fff) {
        goto label_1;
    }
    if (cx >= 0x7fff) {
        goto label_1;
    }
    if (dx > 0xbffd) {
        goto label_1;
    }
    if (dx <= 0x3fbf) {
        eax = 0;
    } else {
        edx = 0x7fffffff;
        if (ax == 0) {
            *((ebp + 8))++;
            eax = 0;
            if ((*((esi + 8)) & edx) != 0) {
                goto label_2;
            }
            if (*((esi + 4)) != eax) {
                goto label_2;
            }
            if (*(esi) != eax) {
                goto label_2;
            }
            goto label_3;
        }
        eax = 0;
label_2:
        if (cx != ax) {
            goto label_4;
        }
        *((ebp + 8))++;
        if ((*((ebx + 8)) & edx) != 0) {
            goto label_4;
        }
        if (*((ebx + 4)) != eax) {
            goto label_4;
        }
        if (*(ebx) != eax) {
            goto label_4;
        }
    }
    *((esi + 8)) = eax;
    *((esi + 4)) = eax;
    *(esi) = eax;
    goto label_5;
label_4:
    *((ebp - 0x18)) = eax;
    eax = ebp - 0xc;
    *((ebp - 0x14)) = eax;
    *((ebp + 0xc)) = 5;
label_0:
    eax = *((ebp - 0x18));
    eax += eax;
    if (*((ebp + 0xc)) <= 0) {
        goto label_6;
    }
    eax += esi;
    *((ebp - 0x24)) = eax;
    eax = *((ebp + 0xc));
    ecx = ebx + 8;
    *((ebp - 0x20)) = ecx;
    *((ebp - 0x28)) = eax;
    do {
        eax = *((ebp - 0x20));
        ecx = *((ebp - 0x24));
        ecx = *(ecx);
        eax = *(eax);
        eax *= ecx;
        ecx = *((ebp - 0x14));
        ecx += 0xfffffffc;
        eax = fcn_00407811 (*(ecx), eax, ecx);
        if (eax != 0) {
            eax = *((ebp - 0x14));
            *(eax)++;
        }
        *((ebp - 0x24)) += 2;
        *((ebp - 0x20)) -= 2;
        *((ebp - 0x28))--;
    } while (*((ebp - 0x28)) != 0);
label_6:
    *((ebp - 0x14)) += 2;
    *((ebp - 0x18))++;
    *((ebp + 0xc))--;
    if (*((ebp + 0xc)) > 0) {
        goto label_0;
    }
    *((ebp + 8)) += 0xc002;
    if (*((ebp + 8)) <= 0) {
        goto label_7;
    }
    do {
        if ((*((ebp - 5)) & 0x80) != 0) {
            goto label_8;
        }
        fcn_00407890 (ebp - 0x10);
        *((ebp + 8)) += 0xffff;
    } while (*((ebp + 8)) > 0);
label_8:
    if (*((ebp + 8)) > 0) {
        goto label_9;
    }
label_7:
    *((ebp + 8)) += 0xffff;
    if (*((ebp + 8)) >= 0) {
        goto label_9;
    }
    eax = *((ebp + 8));
    eax = -eax;
    ebx = (int32_t) ax;
    *((ebp + 8)) += ebx;
    do {
        if ((*((ebp - 0x10)) & 1) != 0) {
            *((ebp - 0x1c))++;
        }
        fcn_004078be (ebp - 0x10);
        ebx--;
    } while (ebx != 0);
    if (*((ebp - 0x1c)) != 0) {
        *((ebp - 0x10)) |= 1;
    }
label_9:
    if (*((ebp - 0x10)) <= 0x8000) {
        eax = *((ebp - 0x10));
        eax &= 0x1ffff;
        if (eax != 0x18000) {
            goto label_10;
        }
    }
    if (*((ebp - 0xe)) == -1) {
        *((ebp - 0xe)) = 0;
        if (*((ebp - 0xa)) == -1) {
            *((ebp - 0xa)) = 0;
            if (*((ebp - 6)) == 0xffff) {
                *((ebp + 8))++;
                *((ebp - 6)) = 0x8000;
            } else {
                *((ebp - 6))++;
            }
        } else {
            *((ebp - 0xa))++;
        }
    } else {
        *((ebp - 0xe))++;
    }
label_10:
    eax = *((ebp + 8));
    if (ax < 0x7fff) {
        cx = *((ebp - 0xe));
        *(esi) = cx;
        ecx = *((ebp - 0xc));
        *((esi + 2)) = ecx;
        ecx = *((ebp - 8));
        *((esi + 6)) = ecx;
        eax |= edi;
label_3:
        *((esi + 0xa)) = ax;
    } else {
label_1:
        di = -di;
        edi -= edi;
        *((esi + 4)) = 0;
        edi &= 0x80000000;
        edi += 0x7fff8000;
        *(esi) = 0;
        *((esi + 8)) = edi;
    }
label_5:
    ecx = *((ebp - 4));
    fcn_004041a2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4078be */
#include <stdint.h>
 
int32_t fcn_004078be (int32_t arg_4h) {
    eax = *((esp + 4));
    edx = *((eax + 8));
    ecx = *((eax + 4));
    edi = ecx;
    esi = edx;
    ecx >>= 1;
    esi <<= 0x1f;
    ecx |= esi;
    *((eax + 4)) = ecx;
    ecx = *(eax);
    edi <<= 0x1f;
    ecx >>= 1;
    ecx |= edi;
    edx >>= 1;
    *((eax + 8)) = edx;
    *(eax) = ecx;
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x406285 */
#include <stdint.h>
 
int32_t fcn_00406285 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_fh, int32_t arg_10h, uint32_t arg_13h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ecx = *((ebp + 8));
    eax = *((ecx + 0x10));
    esi = *((ebp + 0x10));
    edi = *((ebp + 0xc));
    edx = *((ebp + 0xc));
    edx -= *((ecx + 0xc));
    esi += 0x17;
    edx >>= 0xf;
    ecx = edx;
    ecx *= 0x204;
    ecx = ecx + eax + 0x144;
    *((ebp - 0xc)) = ecx;
    ecx = *((edi - 4));
    esi &= 0xfffffff0;
    ecx--;
    edi = ecx + edi - 4;
    ebx = *(edi);
    *((ebp + 0x10)) = ecx;
    *((ebp - 4)) = ebx;
    if (esi > ecx) {
        if ((bl & 1) == 0) {
            ebx += ecx;
            if (esi <= ebx) {
                ecx = *((ebp - 4));
                ecx >>= 4;
                ecx--;
                *((ebp - 8)) = ecx;
                if (ecx > 0x3f) {
                    ecx = 0x3f;
                    *((ebp - 8)) = ecx;
                }
                ebx = *((edi + 4));
                if (ebx == *((edi + 8))) {
                    ebx = 0x80000000;
                    if (ecx < 0x20) {
                        ebx >>= cl;
                        ecx = *((ebp - 8));
                        ecx = ecx + eax + 4;
                        ebx = ~ebx;
                        *((eax + edx*4 + 0x44)) &= ebx;
                        *(ecx)--;
                        if (*(ecx) != 0) {
                            goto label_0;
                        }
                        ecx = *((ebp + 8));
                        *(ecx) &= ebx;
                    } else {
                        ecx += 0xffffffe0;
                        ebx >>= cl;
                        ecx = *((ebp - 8));
                        ecx = ecx + eax + 4;
                        ebx = ~ebx;
                        *((eax + edx*4 + 0xc4)) &= ebx;
                        *(ecx)--;
                        if (*(ecx) != 0) {
                            goto label_0;
                        }
                        ecx = *((ebp + 8));
                        *((ecx + 4)) &= ebx;
                    }
                }
label_0:
                ecx = *((edi + 8));
                ebx = *((edi + 4));
                *((ecx + 4)) = ebx;
                ecx = *((edi + 4));
                edi = *((edi + 8));
                *((ecx + 8)) = edi;
                ecx = *((ebp + 0x10));
                ecx -= esi;
                *((ebp - 4)) += ecx;
                if (*((ebp - 4)) > 0) {
                    edi = *((ebp - 4));
                    ecx = *((ebp + 0xc));
                    edi >>= 4;
                    edi--;
                    ecx = ecx + esi - 4;
                    if (edi > 0x3f) {
                        edi = 0x3f;
                    }
                    ebx = *((ebp - 0xc));
                    ebx = ebx + edi*8;
                    *((ebp + 0x10)) = ebx;
                    ebx = *((ebx + 4));
                    *((ecx + 4)) = ebx;
                    ebx = *((ebp + 0x10));
                    *((ecx + 8)) = ebx;
                    *((ebx + 4)) = ecx;
                    ebx = *((ecx + 4));
                    *((ebx + 8)) = ecx;
                    ebx = *((ecx + 4));
                    if (ebx == *((ecx + 8))) {
                        cl = *((edi + eax + 4));
                        *((ebp + 0x13)) = cl;
                        cl++;
                        *((edi + eax + 4)) = cl;
                        if (edi < 0x20) {
                            if (*((ebp + 0x13)) == 0) {
                                ecx = edi;
                                ebx = 0x80000000;
                                ebx >>= cl;
                                ecx = *((ebp + 8));
                                *(ecx) |= ebx;
                            }
                            eax = eax + edx*4 + 0x44;
                            ecx = edi;
                        } else {
                            if (*((ebp + 0x13)) == 0) {
                                ecx = edi - 0x20;
                                ebx = 0x80000000;
                                ebx >>= cl;
                                ecx = *((ebp + 8));
                                *((ecx + 4)) |= ebx;
                            }
                            eax = eax + edx*4 + 0xc4;
                            ecx = edi - 0x20;
                        }
                        edx = 0x80000000;
                        edx >>= cl;
                        *(eax) |= edx;
                    }
                    edx = *((ebp + 0xc));
                    ecx = *((ebp - 4));
                    eax = edx + esi - 4;
                    *(eax) = ecx;
                    *((ecx + eax - 4)) = ecx;
                } else {
                    edx = *((ebp + 0xc));
                }
                eax = esi + 1;
                *((edx - 4)) = eax;
                *((edx + esi - 8)) = eax;
            }
            eax = 0;
        } else {
        } else {
            if (*(eax) >= 0) {
                goto label_1;
            }
            ebx = *((ebp + 0xc));
            *((ebp + 0x10)) -= esi;
            ecx = esi + 1;
            *((ebx - 4)) = ecx;
            ebx = ebx + esi - 4;
            esi = *((ebp + 0x10));
            esi >>= 4;
            esi--;
            *((ebp + 0xc)) = ebx;
            *((ebx - 4)) = ecx;
            if (esi > 0x3f) {
                esi = 0x3f;
            }
            if ((*((ebp - 4)) & 1) == 0) {
                esi = *((ebp - 4));
                esi >>= 4;
                esi--;
                if (esi > 0x3f) {
                    esi = 0x3f;
                }
                ecx = *((edi + 4));
                if (ecx == *((edi + 8))) {
                    ebx = 0x80000000;
                    if (esi < 0x20) {
                        ecx = esi;
                        ebx >>= cl;
                        esi = esi + eax + 4;
                        ebx = ~ebx;
                        *((eax + edx*4 + 0x44)) &= ebx;
                        *(esi)--;
                        if (*(esi) != 0) {
                            goto label_2;
                        }
                        ecx = *((ebp + 8));
                        *(ecx) &= ebx;
                    } else {
                        ecx = esi - 0x20;
                        ebx >>= cl;
                        ecx = esi + eax + 4;
                        ebx = ~ebx;
                        *((eax + edx*4 + 0xc4)) &= ebx;
                        *(ecx)--;
                        if (*(ecx) != 0) {
                            goto label_2;
                        }
                        ecx = *((ebp + 8));
                        *((ecx + 4)) &= ebx;
                    }
label_2:
                    ebx = *((ebp + 0xc));
                }
                ecx = *((edi + 8));
                esi = *((edi + 4));
                *((ecx + 4)) = esi;
                esi = *((edi + 8));
                ecx = *((edi + 4));
                *((ecx + 8)) = esi;
                esi = *((ebp + 0x10));
                esi += *((ebp - 4));
                *((ebp + 0x10)) = esi;
                esi >>= 4;
                esi--;
                if (esi <= 0x3f) {
                    goto label_3;
                }
                esi = 0x3f;
            }
label_3:
            ecx = *((ebp - 0xc));
            ecx = ecx + esi*8;
            edi = *((ecx + 4));
            *((ebx + 8)) = ecx;
            *((ebx + 4)) = edi;
            *((ecx + 4)) = ebx;
            ecx = *((ebx + 4));
            *((ecx + 8)) = ebx;
            ecx = *((ebx + 4));
            if (ecx == *((ebx + 8))) {
                cl = *((esi + eax + 4));
                *((ebp + 0xf)) = cl;
                cl++;
                *((esi + eax + 4)) = cl;
                if (esi < 0x20) {
                    if (*((ebp + 0xf)) == 0) {
                        ecx = esi;
                        edi = 0x80000000;
                        edi >>= cl;
                        ecx = *((ebp + 8));
                        *(ecx) |= edi;
                    }
                    eax = eax + edx*4 + 0x44;
                    ecx = esi;
                } else {
                    if (*((ebp + 0xf)) == 0) {
                        ecx = esi - 0x20;
                        edi = 0x80000000;
                        edi >>= cl;
                        ecx = *((ebp + 8));
                        *((ecx + 4)) |= edi;
                    }
                    eax = eax + edx*4 + 0xc4;
                    ecx = esi - 0x20;
                }
                edx = 0x80000000;
                edx >>= cl;
                *(eax) |= edx;
            }
            eax = *((ebp + 0x10));
            *(ebx) = eax;
            *((eax + ebx - 4)) = eax;
        }
label_1:
        eax = 0;
        eax++;
    }
    edi = 0x3f;
    esi = 0x3f;
    ebx = 0x3f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408376 */
#include <stdint.h>
 
int32_t fcn_00408376 (int32_t arg_4h) {
    ecx = *((esp + 4));
    if (ecx < *(0x40bec8)) {
        eax = ecx;
        eax >>= 5;
        esi = ecx;
        edi = eax*4 + 0x40bee0;
        eax = *(edi);
        esi &= 0x1f;
        esi <<= 3;
        eax += esi;
        if ((*((eax + 4)) & 1) != 0) {
            if (*(eax) == -1) {
                goto label_0;
            }
            if (*(0x40b0bc) == 1) {
                eax = 0;
                ecx -= eax;
                if (ecx != 0) {
                    ecx--;
                    if (ecx != 0) {
                        ecx--;
                        if (ecx != 0) {
                            goto label_1;
                        }
                        SetStdHandle (0xfffffffffffffff4);
                        SetStdHandle (0xfffffffffffffff5);
                    } else {
                    } else {
                    }
                }
                SetStdHandle (0xfffffffffffffff6, eax);
            }
label_1:
            eax = *(edi);
            *((esi + eax)) |= 0xffffffff;
            eax = 0;
        }
    } else {
label_0:
        *(0x40ba54) = 0;
        *(0x40ba50) = 9;
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x4089ce */
#include <stdint.h>
 
uint32_t fcn_004089ce (int32_t arg_8h) {
    esi = *((esp + 8));
    while (eax != 0) {
        esi++;
        eax = *(esi);
        eax = fcn_00408a26 (eax);
    }
    ecx = *(esi);
    esi++;
    edx = ecx;
    if (ecx != 0x2d) {
        if (ecx != 0x2b) {
            goto label_0;
        }
    }
    ecx = *(esi);
    esi++;
label_0:
    eax = 0;
    do {
        if (ecx >= 0x30) {
            if (ecx <= 0x39) {
                ecx -= 0x30;
            }
        } else {
            ecx |= 0xffffffff;
        }
        if (ecx == -1) {
            goto label_1;
        }
        eax *= 5;
        eax = ecx + eax*2;
        ecx = *(esi);
        esi++;
    } while (1);
label_1:
    if (edx == 0x2d) {
        eax = -eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe @ 0x408a26 */
#include <stdint.h>
 
int32_t fcn_00408a26 (int32_t arg_8h, int32_t arg_ah, int32_t arg_bh) {
    int32_t var_4h;
    uint32_t var_2h;
    ecx = *((ebp + 8));
    if (ecx <= 0xff) {
        goto label_1;
    }
    *((ebp - 4)) = 0;
    eax = 0;
    edi = ebp - 2;
    *(es:edi) = ax;
    es:edi += 2;
    eax = ecx;
    eax >>= 8;
    *((ebp + 0xa)) = al;
    *((ebp + 0xb)) = cl;
    while (eax == 0) {
label_0:
        eax = 0;
        return eax;
        eax = ebp - 4;
        eax = fcn_004070ad (1, ebp + 0xa, 2, eax, *(0x40bda4), *(0x40bc94), 1);
    }
    if (*((ebp - 2)) != 0) {
        goto label_0;
    }
    if ((*((ebp - 4)) & 8) == 0) {
        goto label_0;
    }
    eax = 0;
    eax++;
    return eax;
label_1:
    if (*(0x40b4a0) > 1) {
        fcn_00404318 (ecx, 8);
        return eax;
    }
    eax = *(str.________________________________H);
    eax = *((eax + ecx*2));
    eax &= 8;
    return eax;
}
