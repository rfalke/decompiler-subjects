/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x80481f4 */
#include <stdint.h>
 
void entry0 (void) {
    eax = fcn_0804a1a4 (eax, esp);
    eax = sys_exit (0xea);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x804a1a4 */
#include <stdint.h>
 
int32_t fcn_0804a1a4 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_4h_3;
    int32_t var_4h_2;
    eax = *(0);
    *(0x8048124) = eax;
    eax = *((ebp + 8));
    *((ebp + 8)) += 0xffffffff;
    eax = 1;
    ecx = eax;
    eax = 0;
    al = (ecx > eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp + 0xc));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = 0x80481bc;
        eax = fopen (eax, eax);
        *(0x8048124) = eax;
    }
    eax = 1;
    eax = 0x1869f;
    eax = calloc (eax, eax);
    *(0x8048128) = eax;
    eax = 0x80481c0;
    eax = strcpy (eax, eax);
    eax = 0x30;
    ecx = eax;
    eax += ecx;
    *(0x804812c) = eax;
    eax = 1;
    eax = 0x1869f;
    eax = calloc (eax, eax);
    *(0x8048120) = eax;
    eax = 1;
    eax = 0x1869f;
    eax = calloc (eax, eax);
    *(0x8048114) = eax;
    *(0x8048118) = eax;
    eax = 1;
    eax = 0x1869f;
    eax = calloc (eax, eax);
    *(0x804810c) = eax;
    fcn_08048227 ();
    fcn_0804835d ();
    eax = 0;
    fcn_08049e97 (eax);
    eax = imp.stdin;
    eax = 0x250;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    uint32_t (*esp + 8)(uint32_t, uint32_t) (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048227 */
#include <stdint.h>
 
int32_t fcn_08048227 (void) {
    eax = imp.stdin;
    if (eax != 0) {
        eax = imp.stdin;
        *(0x8048130)++;
        eax = *(eax);
        *(0x8048108) = eax;
        eax = imp.stdin;
        eax = 2;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = 0;
            *(0x8048130) = eax;
            eax = imp.stdin;
            *(0x8048108) = eax;
        }
    } else {
        eax = imp.stdin;
        *(esp) = eax;
        eax = fgetc ();
        *(0x8048108) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x804835d */
#include <stdint.h>
 
int32_t fcn_0804835d (void) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    do {
label_0:
label_1:
        eax = imp.stdin;
        *(esp) = eax;
        eax = isspace ();
        eax = imp.stdin;
        eax = 0x23;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        ecx = eax;
        eax |= ecx;
        if (eax == 0) {
            goto label_4;
        }
        eax = imp.stdin;
        eax = 0x23;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_5;
        }
        fcn_08048227 ();
        fcn_0804835d ();
    } while (1);
    eax = imp.stdin;
    eax = 0x218;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_6;
    }
    fcn_0804835d ();
    goto label_0;
    eax = 0x20;
    fcn_08048205 (eax);
    eax = imp.stdin;
    eax = 1;
    ecx = eax;
    *(ecx) = eax;
    eax = imp.stdin;
    eax = 4;
    ecx = eax;
    eax += ecx;
    eax = imp.stdin;
    ecx = eax;
    *(ecx) = eax;
    do {
label_6:
        eax = imp.stdin;
        eax = 0xa;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_7;
        }
        eax = imp.stdin;
        fcn_08048205 (eax);
        fcn_08048227 ();
    } while (1);
label_7:
    eax = imp.stdin;
    fcn_08048205 (eax);
    eax = 2;
    fcn_08048205 (eax);
label_5:
    fcn_08048227 ();
    goto label_1;
label_4:
    eax = 0;
    *(0x8048104) = eax;
    eax = imp.stdin;
    *(0x80480fc) = eax;
    eax = fcn_080482b5 ();
    if (eax == 0) {
        goto label_8;
    }
    eax = 0x20;
    fcn_08048205 (eax);
    eax = imp.stdin;
    *(0x8048138) = eax;
    do {
        eax = fcn_080482b5 ();
        if (eax == 0) {
            goto label_9;
        }
        eax = imp.stdin;
        fcn_08048205 (eax);
        fcn_08048227 ();
    } while (1);
label_9:
    eax = imp.stdin;
    *(esp) = eax;
    eax = isdigit ();
    if (eax != 0) {
        eax = imp.stdin;
        *(esp) = eax;
        eax = 0;
        *((esp + 4)) = eax;
        eax = 0;
        *((esp + 8)) = eax;
        eax = strtol ();
        *(0x8048100) = eax;
        eax = 2;
        *(0x80480fc) = eax;
    } else {
        eax = imp.stdin;
        eax = 0x20;
        ecx = eax;
        *(ecx) = al;
        eax = imp.stdin;
        *(esp) = eax;
        eax = imp.stdin;
        eax = 1;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        *((esp + 4)) = eax;
        eax = strstr ();
        eax = imp.stdin;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        *(0x80480fc) = eax;
        eax = imp.stdin;
        eax = 0;
        ecx = eax;
        *(ecx) = al;
        eax = imp.stdin;
        eax = 8;
        ecx = eax;
        eax *= ecx;
        eax = 0x100;
        ecx = eax;
        eax += ecx;
        *(0x80480fc) = eax;
        eax = imp.stdin;
        eax = 0x218;
        ecx = eax;
        eax = 0;
        al = (ecx > eax) ? 1 : 0;
        if (eax == 0) {
            goto label_10;
        }
        eax = imp.stdin;
        eax = imp.stdin;
        ecx = eax;
        eax += ecx;
        *(0x80480fc) = eax;
        eax = imp.stdin;
        eax = *(eax);
        eax = 1;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_10;
        }
        eax = imp.stdin;
        eax = 4;
        ecx = eax;
        eax += ecx;
        eax = *(eax);
        *(0x8048130) = eax;
        eax = imp.stdin;
        *(0x8048134) = eax;
        fcn_08048227 ();
        fcn_0804835d ();
        goto label_0;
    }
label_10:
    goto label_11;
label_8:
    fcn_08048227 ();
    eax = imp.stdin;
    eax = 0x27;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = 2;
        *(0x80480fc) = eax;
        fcn_080482fe ();
        eax = imp.stdin;
        *(0x8048100) = eax;
        fcn_08048227 ();
        fcn_08048227 ();
        goto label_11;
    }
    eax = imp.stdin;
    eax = 0x2f;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = imp.stdin;
    eax = 0x2a;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax &= ecx;
    if (eax == 0) {
        goto label_12;
    }
    fcn_08048227 ();
label_2:
    eax = imp.stdin;
    if (eax == 0) {
        goto label_13;
    }
    do {
        eax = imp.stdin;
        eax = 0x2a;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_14;
        }
        fcn_08048227 ();
    } while (1);
label_14:
    fcn_08048227 ();
    eax = imp.stdin;
    eax = 0x2f;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = 0;
        *(0x8048108) = eax;
    }
    goto label_2;
label_13:
    fcn_08048227 ();
    fcn_0804835d ();
    goto label_0;
    goto label_11;
label_12:
    eax = 0x804813c;
    *((ebp - 4)) = eax;
label_3:
    eax = *((ebp - 4));
    *((ebp - 4))++;
    eax = *(eax);
    *((ebp - 8)) = eax;
    if (eax == 0) {
        goto label_11;
    }
    eax = *((ebp - 4));
    *((ebp - 4))++;
    eax = *(eax);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *(0x8048100) = eax;
    do {
        eax = *((ebp - 4));
        *((ebp - 4))++;
        eax = *(eax);
        eax = 0x62;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        *(0x8048104) = eax;
        eax = 0;
        ecx = eax;
        eax = 0;
        al = (ecx < eax) ? 1 : 0;
        if (eax == 0) {
            goto label_15;
        }
        eax = imp.stdin;
        eax = 0x40;
        ecx = eax;
        eax *= ecx;
        eax = imp.stdin;
        ecx = eax;
        eax += ecx;
        eax = 0x40;
        ecx = eax;
        eax += ecx;
        *(0x8048100) = eax;
    } while (1);
label_15:
    eax = *((ebp - 8));
    eax = imp.stdin;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = *((ebp - 0xc));
    eax = imp.stdin;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = *((ebp - 0xc));
    eax = 0x40;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax |= ecx;
    ecx = eax;
    eax &= ecx;
    if (eax != 0) {
        eax = *((ebp - 0xc));
        eax = imp.stdin;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_08048227 ();
            eax = 1;
            *(0x80480fc) = eax;
        }
    } else {
        goto label_3;
    }
label_11:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048205 */
#include <stdint.h>
 
int32_t fcn_08048205 (int32_t arg_8h) {
    eax = imp.stdin;
    *(0x804812c)++;
    eax = *((ebp + 8));
    ecx = eax;
    *(ecx) = al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x80482b5 */
#include <stdint.h>
 
int32_t fcn_080482b5 (void) {
    eax = imp.stdin;
    *(esp) = eax;
    eax = isalnum ();
    eax = imp.stdin;
    eax = 0x5f;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax |= ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x80482fe */
#include <stdint.h>
 
int32_t fcn_080482fe (void) {
    eax = imp.stdin;
    eax = 0x5c;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        fcn_08048227 ();
        eax = imp.stdin;
        eax = 0x6e;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_0;
        }
        eax = 0xa;
        *(0x8048108) = eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x804898b */
#include <stdint.h>
 
int32_t fcn_0804898b (int32_t arg_8h) {
    do {
        eax = *((ebp + 8));
        if (eax != 0) {
            eax = *((ebp + 8));
            eax = 1;
            ecx = 0;
            eax -= ecx;
            eax = -eax;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax != 0) {
                eax = 1;
            }
        } else {
            eax = 0;
        }
        if (eax == 0) {
            goto label_0;
        }
        eax = imp.stdin;
        *(0x8048118)++;
        eax = *((ebp + 8));
        ecx = eax;
        *(ecx) = al;
        eax = *((ebp + 8));
        eax = 8;
        ecx = eax;
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
        eax >>= cl;
        *((ebp + 8)) = eax;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048a74 */
#include <stdint.h>
 
int32_t fcn_08048a74 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    fcn_0804898b (eax);
    eax = imp.stdin;
    eax = *((ebp + 0xc));
    ecx = eax;
    *(ecx) = eax;
    eax = imp.stdin;
    *((ebp + 0xc)) = eax;
    eax = imp.stdin;
    eax = 4;
    ecx = eax;
    eax += ecx;
    *(0x8048118) = eax;
    eax = *((ebp + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048ad9 */
#include <stdint.h>
 
int32_t fcn_08048ad9 (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0xb8;
    eax = *((ebp + 8));
    fcn_08048a74 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048cd0 */
#include <stdint.h>
 
int32_t fcn_08048cd0 (int32_t arg_8h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
label_0:
    eax = 1;
    *((ebp - 4)) = eax;
    eax = imp.stdin;
    eax = 0x22;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_1;
    }
    eax = imp.stdin;
    fcn_08048ad9 (eax);
    do {
        eax = imp.stdin;
        eax = 0x22;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_2;
        }
        fcn_080482fe ();
        eax = imp.stdin;
        *(0x8048120)++;
        eax = imp.stdin;
        ecx = eax;
        *(ecx) = al;
        fcn_08048227 ();
    } while (1);
label_2:
    eax = imp.stdin;
    eax = 0;
    ecx = eax;
    *(ecx) = al;
    eax = imp.stdin;
    eax = 4;
    ecx = eax;
    eax += ecx;
    eax = 4;
    ecx = 0;
    eax -= ecx;
    eax = -eax;
    ecx = eax;
    eax &= ecx;
    *(0x8048120) = eax;
    fcn_08048227 ();
    fcn_0804835d ();
    goto label_3;
label_1:
    eax = imp.stdin;
    *((ebp - 0x10)) = eax;
    eax = imp.stdin;
    *((ebp - 0xc)) = eax;
    eax = imp.stdin;
    *((ebp - 8)) = eax;
    fcn_0804835d ();
    eax = *((ebp - 8));
    eax = 2;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp - 0xc));
        fcn_08048ad9 (eax);
    } else {
        eax = *((ebp - 0x10));
        eax = 2;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = 0;
            fcn_08048cd0 (eax);
            goto label_0;
            eax = 0xb9;
            eax = 0;
            fcn_08048a74 (eax, eax);
            eax = *((ebp - 8));
            eax = 0x21;
            ecx = eax;
            eax = 0;
            al = (ecx == eax) ? 1 : 0;
            if (eax != 0) {
                eax = *((ebp - 0xc));
                fcn_08048ba9 (eax);
            } else {
                eax = *((ebp - 0xc));
                fcn_0804898b (eax);
            }
        } else {
            eax = *((ebp - 8));
            eax = 0x28;
            ecx = eax;
            eax = 0;
            al = (ecx == eax) ? 1 : 0;
            if (eax != 0) {
                fcn_080498e4 ();
                fcn_0804835d ();
            } else {
                eax = *((ebp - 8));
                eax = 0x2a;
                ecx = eax;
                eax = 0;
                al = (ecx == eax) ? 1 : 0;
                if (eax != 0) {
                    fcn_0804835d ();
                    eax = imp.stdin;
                    *((ebp - 8)) = eax;
                    fcn_0804835d ();
                    fcn_0804835d ();
                    eax = imp.stdin;
                    eax = 0x2a;
                    ecx = eax;
                    eax = 0;
                    al = (ecx == eax) ? 1 : 0;
                    if (eax != 0) {
                        fcn_0804835d ();
                        fcn_0804835d ();
                        fcn_0804835d ();
                        fcn_0804835d ();
                        eax = 0;
                        *((ebp - 8)) = eax;
                    }
                    fcn_0804835d ();
                    eax = 0;
                    fcn_08048cd0 (eax);
                    goto label_0;
                    eax = imp.stdin;
                    eax = 0x3d;
                    ecx = eax;
                    eax = 0;
                    al = (ecx == eax) ? 1 : 0;
                    if (eax != 0) {
                        fcn_0804835d ();
                        eax = 0x50;
                        fcn_0804898b (eax);
                        fcn_080498e4 ();
                        eax = 0x59;
                        fcn_0804898b (eax);
                        eax = 0x188;
                        eax = *((ebp - 8));
                        eax = 0x100;
                        ecx = eax;
                        eax = 0;
                        al = (ecx == eax) ? 1 : 0;
                        ecx = eax;
                        eax += ecx;
                        fcn_0804898b (eax);
                    } else {
                        eax = *((ebp - 8));
                        if (eax == 0) {
                            goto label_4;
                        }
                        eax = *((ebp - 8));
                        eax = 0x100;
                        ecx = eax;
                        eax = 0;
                        al = (ecx == eax) ? 1 : 0;
                        if (eax != 0) {
                            eax = 0x8b;
                            fcn_0804898b (eax);
                        } else {
                            eax = 0xbe0f;
                            fcn_0804898b (eax);
                        }
                        eax = imp.stdin;
                        *(0x8048118)++;
                    }
label_4:
                } else {
                    eax = *((ebp - 8));
                    eax = 0x26;
                    ecx = eax;
                    eax = 0;
                    al = (ecx == eax) ? 1 : 0;
                    if (eax != 0) {
                        eax = 0xa;
                        eax = imp.stdin;
                        eax = *(eax);
                        fcn_08048c4f (eax, eax);
                        fcn_0804835d ();
                    } else {
                        eax = *((ebp - 8));
                        eax = *(eax);
                        *((ebp - 4)) = eax;
                        eax = *((ebp - 4));
                        ecx = 0;
                        eax = 0;
                        al = (ecx == eax) ? 1 : 0;
                        if (eax != 0) {
                            eax = 0;
                            *(esp) = eax;
                            eax = imp.stdin;
                            eax = dlsym (eax);
                            *((ebp - 4)) = eax;
                        }
                        eax = imp.stdin;
                        eax = 0x3d;
                        ecx = eax;
                        eax = 0;
                        al = (ecx == eax) ? 1 : 0;
                        eax = *((ebp + 8));
                        ecx = eax;
                        eax &= ecx;
                        if (eax != 0) {
                            fcn_0804835d ();
                            fcn_080498e4 ();
                            eax = 6;
                            eax = *((ebp - 4));
                            fcn_08048c4f (eax, eax);
                        } else {
                            eax = imp.stdin;
                            eax = 0x28;
                            ecx = eax;
                            eax = 0;
                            al = (ecx != eax) ? 1 : 0;
                            if (eax == 0) {
                                goto label_3;
                            }
                            eax = 8;
                            eax = *((ebp - 4));
                            fcn_08048c4f (eax, eax);
                            eax = imp.stdin;
                            eax = 0xb;
                            ecx = eax;
                            eax = 0;
                            al = (ecx == eax) ? 1 : 0;
                            if (eax == 0) {
                                goto label_3;
                            }
                            eax = 0;
                            eax = *((ebp - 4));
                            fcn_08048c4f (eax, eax);
                            eax = imp.stdin;
                            fcn_0804898b (eax);
                            fcn_0804835d ();
                        }
                    }
                }
            }
        }
    }
label_3:
    eax = imp.stdin;
    eax = 0x28;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_5;
    }
    eax = *((ebp - 4));
    eax = 1;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = 0x50;
        fcn_0804898b (eax);
    }
    eax = 0xec81;
    eax = 0;
    eax = fcn_08048a74 (eax, eax);
    *((ebp - 0xc)) = eax;
    fcn_0804835d ();
    eax = 0;
    *((ebp + 8)) = eax;
    do {
        eax = imp.stdin;
        eax = 0x29;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_6;
        }
        fcn_080498e4 ();
        eax = 0x248489;
        eax = *((ebp + 8));
        fcn_08048a74 (eax, eax);
        eax = imp.stdin;
        eax = 0x2c;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_0804835d ();
        }
        eax = *((ebp + 8));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp + 8)) = eax;
    } while (1);
label_6:
    eax = *((ebp - 0xc));
    eax = *((ebp + 8));
    ecx = eax;
    *(ecx) = eax;
    fcn_0804835d ();
    eax = *((ebp - 4));
    ecx = 0;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp - 8));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp - 8)) = eax;
        eax = *((ebp - 8));
        eax = 0xe8;
        eax = *((ebp - 8));
        eax = *(eax);
        eax = fcn_08048a74 (eax, eax);
        *(ecx) = eax;
    } else {
        eax = *((ebp - 4));
        eax = 1;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = 0x2494ff;
            eax = *((ebp + 8));
            fcn_08048a74 (eax, eax);
            eax = *((ebp + 8));
            eax = 4;
            ecx = eax;
            eax += ecx;
            *((ebp + 8)) = eax;
        } else {
            eax = 0xe8;
            *(esp) = eax;
            eax = *((ebp - 4));
            eax = imp.stdin;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            eax = 5;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            fcn_08048a74 (eax, eax);
        }
    }
    eax = *((ebp + 8));
    if (eax != 0) {
        eax = 0xc481;
        eax = *((ebp + 8));
        fcn_08048a74 (eax, eax);
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048ba9 */
#include <stdint.h>
 
int32_t fcn_08048ba9 (int32_t arg_8h) {
    eax = 0xc139;
    fcn_0804898b (eax);
    eax = 0;
    fcn_08048ad9 (eax);
    eax = 0xf;
    fcn_0804898b (eax);
    eax = *((ebp + 8));
    eax = 0x90;
    ecx = eax;
    eax += ecx;
    fcn_0804898b (eax);
    eax = 0xc0;
    fcn_0804898b (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x80498e4 */
#include <stdint.h>
 
int32_t fcn_080498e4 (void) {
    eax = 0xb;
    fcn_080495a9 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x80495a9 */
#include <stdint.h>
 
int32_t fcn_080495a9 (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    do {
label_0:
        eax = *((ebp + 8));
        *((ebp + 8)) += 0xffffffff;
        eax = 1;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = 1;
            fcn_08048cd0 (eax);
            goto label_1;
        }
        eax = *((ebp + 8));
        fcn_080495a9 (eax);
    } while (1);
    eax = 0;
    *((ebp - 0xc)) = eax;
    do {
        eax = *((ebp + 8));
        eax = imp.stdin;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_2;
        }
        eax = imp.stdin;
        *((ebp - 8)) = eax;
        eax = imp.stdin;
        *((ebp - 4)) = eax;
        fcn_0804835d ();
        eax = *((ebp + 8));
        eax = 8;
        ecx = eax;
        eax = 0;
        al = (ecx > eax) ? 1 : 0;
        if (eax != 0) {
            eax = *((ebp - 4));
            eax = *((ebp - 0xc));
            eax = fcn_08048b48 (eax, eax);
            *((ebp - 0xc)) = eax;
            eax = *((ebp + 8));
            fcn_080495a9 (eax);
            goto label_0;
        } else {
            eax = 0x50;
            fcn_0804898b (eax);
            eax = *((ebp + 8));
            fcn_080495a9 (eax);
            goto label_0;
            eax = 0x59;
            fcn_0804898b (eax);
            eax = *((ebp + 8));
            eax = 4;
            ecx = eax;
            eax = 0;
            al = (ecx == eax) ? 1 : 0;
            eax = *((ebp + 8));
            eax = 5;
            ecx = eax;
            eax = 0;
            al = (ecx == eax) ? 1 : 0;
            ecx = eax;
            eax |= ecx;
            if (eax != 0) {
                eax = *((ebp - 4));
                fcn_08048ba9 (eax);
            } else {
                eax = *((ebp - 4));
                fcn_0804898b (eax);
                eax = *((ebp - 8));
                eax = 0x25;
                ecx = eax;
                eax = 0;
                al = (ecx == eax) ? 1 : 0;
                if (eax == 0) {
                    goto label_3;
                }
                eax = 0x92;
                fcn_0804898b (eax);
            }
        }
label_3:
    } while (1);
label_2:
    eax = *((ebp - 0xc));
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = 8;
        ecx = eax;
        eax = 0;
        al = (ecx > eax) ? 1 : 0;
        if (eax != 0) {
            eax = 1;
        }
    } else {
        eax = 0;
    }
    if (eax != 0) {
        eax = *((ebp - 4));
        eax = *((ebp - 0xc));
        eax = fcn_08048b48 (eax, eax);
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 4));
        eax = 1;
        ecx = eax;
        eax ^= ecx;
        fcn_08048ad9 (eax);
        eax = 5;
        fcn_08048b0e (eax);
        eax = *((ebp - 0xc));
        fcn_08048a15 (eax);
        eax = *((ebp - 4));
        fcn_08048ad9 (eax);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048c4f */
#include <stdint.h>
 
int32_t fcn_08048c4f (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = *((ebp + 8));
    eax = 0x83;
    ecx = eax;
    eax += ecx;
    fcn_0804898b (eax);
    eax = *((ebp + 0xc));
    eax = 0x200;
    ecx = eax;
    eax = 0;
    al = (ecx < eax) ? 1 : 0;
    eax = 7;
    ecx = eax;
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    eax <<= cl;
    eax = 5;
    ecx = eax;
    eax |= ecx;
    eax = *((ebp + 0xc));
    fcn_08048a74 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048b48 */
#include <stdint.h>
 
int32_t fcn_08048b48 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = 0xfc085;
    fcn_0804898b (eax);
    eax = 0x84;
    eax = *((ebp + 8));
    ecx = eax;
    eax += ecx;
    eax = *((ebp + 0xc));
    fcn_08048a74 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048b0e */
#include <stdint.h>
 
int32_t fcn_08048b0e (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0xe9;
    eax = *((ebp + 8));
    fcn_08048a74 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8048a15 */
#include <stdint.h>
 
int32_t fcn_08048a15 (int32_t arg_8h) {
    int32_t var_4h;
    do {
        eax = *((ebp + 8));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 4)) = eax;
        eax = *((ebp + 8));
        eax = imp.stdin;
        eax = *((ebp + 8));
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = 4;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        ecx = eax;
        *(ecx) = eax;
        eax = *((ebp - 4));
        *((ebp + 8)) = eax;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x804990c */
#include <stdint.h>
 
int32_t fcn_0804990c (void) {
    int32_t var_4h;
    fcn_080498e4 ();
    eax = 0;
    eax = 0;
    fcn_08048b48 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8049950 */
#include <stdint.h>
 
int32_t fcn_08049950 (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    do {
label_0:
        eax = imp.stdin;
        eax = 0x120;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_1;
        }
        fcn_0804835d ();
        fcn_0804835d ();
        eax = fcn_0804990c ();
        *((ebp - 4)) = eax;
        fcn_0804835d ();
        eax = *((ebp + 8));
        fcn_08049950 (eax);
    } while (1);
    eax = imp.stdin;
    eax = 0x138;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        fcn_0804835d ();
        eax = 0;
        eax = fcn_08048b0e (eax);
        *((ebp - 8)) = eax;
        eax = *((ebp - 4));
        fcn_08048a15 (eax);
        eax = *((ebp + 8));
        fcn_08049950 (eax);
        goto label_0;
        eax = *((ebp - 8));
        fcn_08048a15 (eax);
    } else {
        eax = *((ebp - 4));
        fcn_08048a15 (eax);
    }
    goto label_2;
label_1:
    eax = imp.stdin;
    eax = 0x160;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = imp.stdin;
    eax = 0x1f8;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax |= ecx;
    if (eax != 0) {
        eax = imp.stdin;
        *((ebp - 0xc)) = eax;
        fcn_0804835d ();
        fcn_0804835d ();
        eax = *((ebp - 0xc));
        eax = 0x160;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = imp.stdin;
            *((ebp - 8)) = eax;
            eax = fcn_0804990c ();
            *((ebp - 4)) = eax;
        } else {
            eax = imp.stdin;
            eax = 0x3b;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax != 0) {
                fcn_080498e4 ();
            }
            fcn_0804835d ();
            eax = imp.stdin;
            *((ebp - 8)) = eax;
            eax = 0;
            *((ebp - 4)) = eax;
            eax = imp.stdin;
            eax = 0x3b;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax != 0) {
                eax = fcn_0804990c ();
                *((ebp - 4)) = eax;
            }
            fcn_0804835d ();
            eax = imp.stdin;
            eax = 0x29;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax == 0) {
                goto label_3;
            }
            eax = 0;
            eax = fcn_08048b0e (eax);
            *((ebp - 0xc)) = eax;
            fcn_080498e4 ();
            eax = *((ebp - 8));
            eax = imp.stdin;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            eax = 5;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            fcn_08048b0e (eax);
            eax = *((ebp - 0xc));
            fcn_08048a15 (eax);
            eax = *((ebp - 0xc));
            eax = 4;
            ecx = eax;
            eax += ecx;
            *((ebp - 8)) = eax;
        }
label_3:
        fcn_0804835d ();
        eax = ebp - 4;
        fcn_08049950 (eax);
        goto label_0;
        eax = *((ebp - 8));
        eax = imp.stdin;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = 5;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        fcn_08048b0e (eax);
        eax = *((ebp - 4));
        fcn_08048a15 (eax);
        goto label_2;
    }
    eax = imp.stdin;
    eax = 0x7b;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_4;
    }
    fcn_0804835d ();
    eax = 1;
    fcn_08049e97 (eax);
    do {
        eax = imp.stdin;
        eax = 0x7d;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_5;
        }
        eax = *((ebp + 8));
        fcn_08049950 (eax);
        goto label_0;
    } while (1);
label_5:
    fcn_0804835d ();
    goto label_2;
label_4:
    eax = imp.stdin;
    eax = 0x1c0;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        fcn_0804835d ();
        eax = imp.stdin;
        eax = 0x3b;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax != 0) {
            fcn_080498e4 ();
        }
        eax = imp.stdin;
        eax = fcn_08048b0e (eax);
        *(0x8048110) = eax;
    } else {
        eax = imp.stdin;
        eax = 0x190;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_0804835d ();
            eax = *((ebp + 8));
            eax = *((ebp + 8));
            eax = *(eax);
            eax = fcn_08048b0e (eax);
            *(ecx) = eax;
        } else {
            eax = imp.stdin;
            eax = 0x3b;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax == 0) {
                goto label_6;
            }
            fcn_080498e4 ();
        }
    }
label_6:
    fcn_0804835d ();
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otcc/ia32_elf_otcc/subject.exe @ 0x8049e97 */
#include <stdint.h>
 
int32_t fcn_08049e97 (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_sp_4h;
label_0:
    eax = imp.stdin;
    eax = 0x100;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = imp.stdin;
    eax = 1;
    ecx = 0;
    eax -= ecx;
    eax = -eax;
    ecx = eax;
    eax = 0;
    al = (ecx != eax) ? 1 : 0;
    eax = *((ebp + 8));
    ecx = 0;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax &= ecx;
    ecx = eax;
    eax |= ecx;
    if (eax == 0) {
        goto label_1;
    }
    eax = imp.stdin;
    eax = 0x100;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_2;
    }
    fcn_0804835d ();
    do {
        eax = imp.stdin;
        eax = 0x3b;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_3;
        }
        eax = *((ebp + 8));
        if (eax != 0) {
            eax = imp.stdin;
            eax = 4;
            ecx = eax;
            eax += ecx;
            *(0x804811c) = eax;
            eax = imp.stdin;
            eax = imp.stdin;
            ecx = 0;
            eax -= ecx;
            eax = -eax;
            ecx = eax;
            *(ecx) = eax;
        } else {
            eax = imp.stdin;
            eax = imp.stdin;
            ecx = eax;
            *(ecx) = eax;
            eax = imp.stdin;
            eax = 4;
            ecx = eax;
            eax += ecx;
            *(0x8048120) = eax;
        }
        fcn_0804835d ();
        eax = imp.stdin;
        eax = 0x2c;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_0804835d ();
        }
    } while (1);
label_3:
    fcn_0804835d ();
    goto label_4;
label_2:
    eax = imp.stdin;
    eax = 4;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    fcn_08048a15 (eax);
    eax = imp.stdin;
    eax = imp.stdin;
    ecx = eax;
    *(ecx) = eax;
    fcn_0804835d ();
    fcn_0804835d ();
    eax = 8;
    *((ebp - 4)) = eax;
    do {
        eax = imp.stdin;
        eax = 0x29;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_5;
        }
        eax = imp.stdin;
        eax = *((ebp - 4));
        ecx = eax;
        *(ecx) = eax;
        eax = *((ebp - 4));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp - 4)) = eax;
        fcn_0804835d ();
        eax = imp.stdin;
        eax = 0x2c;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_0804835d ();
        }
    } while (1);
label_5:
    fcn_0804835d ();
    eax = 0;
    *(0x804811c) = eax;
    *(0x8048110) = eax;
    eax = 0xe58955;
    fcn_0804898b (eax);
    eax = 0xec81;
    eax = 0;
    eax = fcn_08048a74 (eax, eax);
    *((ebp - 4)) = eax;
    eax = 0;
    fcn_08049950 (eax);
    eax = imp.stdin;
    fcn_08048a15 (eax);
    eax = 0xc3c9;
    fcn_0804898b (eax);
    eax = *((ebp - 4));
    eax = imp.stdin;
    ecx = eax;
    *(ecx) = eax;
label_4:
    goto label_0;
label_1:
    return eax;
}
