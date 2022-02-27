/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048250 */
#include <stdint.h>
 
void entry0 (void) {
    eax = fcn_0804b4a3 (eax, esp);
    eax = sys_exit (0xea);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804b4a3 */
#include <stdint.h>
 
int32_t fcn_0804b4a3 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_4h_2;
    eax = *((ebp + 8));
    eax = 3;
    ecx = eax;
    eax = 0;
    al = (ecx < eax) ? 1 : 0;
    if (eax != 0) {
        eax = 0x80481f8;
        printf (eax);
        eax = 0;
    } else {
        eax = 1;
        eax = 0x1869f;
        eax = calloc (eax, eax);
        *(0x8048128) = eax;
        eax = 0x8048218;
        eax = strcpy (eax, eax);
        eax = 0x30;
        ecx = eax;
        eax += ecx;
        *(0x804812c) = eax;
        eax = 1;
        eax = 0x1869f;
        eax = calloc (eax, eax);
        *(0x804813c) = eax;
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
        eax = *((ebp + 0xc));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = 0x804824c;
        eax = fopen (eax, eax);
        *(0x8048124) = eax;
        eax = segment.ehdr;
        eax = *(0x804813c);
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        *(0x8048144) = eax;
        eax = *(0x8048120);
        eax = 0xfc;
        ecx = eax;
        eax += ecx;
        *(0x8048120) = eax;
        eax = *(0x8048118);
        eax = 0x11;
        ecx = eax;
        eax += ecx;
        *(0x8048118) = eax;
        fcn_08048283 ();
        fcn_080483b9 ();
        eax = 0;
        fcn_0804a170 (eax);
        eax = *((ebp + 0xc));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        eax = *(eax);
        fcn_0804a9f0 (eax);
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048283 */
#include <stdint.h>
 
int32_t fcn_08048283 (void) {
    eax = *(0x8048130);
    if (eax != 0) {
        eax = *(0x8048130);
        *(0x8048130)++;
        eax = *(eax);
        *(0x8048108) = eax;
        eax = *(0x8048108);
        eax = 2;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = 0;
            *(0x8048130) = eax;
            eax = *(0x8048134);
            *(0x8048108) = eax;
        }
    } else {
        eax = *(0x8048124);
        *(esp) = eax;
        eax = fgetc ();
        *(0x8048108) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x80483b9 */
#include <stdint.h>
 
int32_t fcn_080483b9 (void) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    do {
label_0:
label_1:
        eax = *(0x8048108);
        *(esp) = eax;
        eax = isspace ();
        eax = *(0x8048108);
        eax = 0x23;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        ecx = eax;
        eax |= ecx;
        if (eax == 0) {
            goto label_4;
        }
        eax = *(0x8048108);
        eax = 0x23;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_5;
        }
        fcn_08048283 ();
        fcn_080483b9 ();
    } while (1);
    eax = *(0x80480fc);
    eax = 0x218;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_6;
    }
    fcn_080483b9 ();
    goto label_0;
    eax = 0x20;
    fcn_08048261 (eax);
    eax = *(0x80480fc);
    eax = 1;
    ecx = eax;
    *(ecx) = eax;
    eax = *(0x80480fc);
    eax = 4;
    ecx = eax;
    eax += ecx;
    eax = *(0x804812c);
    ecx = eax;
    *(ecx) = eax;
    do {
label_6:
        eax = *(0x8048108);
        eax = 0xa;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_7;
        }
        eax = *(0x8048108);
        fcn_08048261 (eax);
        fcn_08048283 ();
    } while (1);
label_7:
    eax = *(0x8048108);
    fcn_08048261 (eax);
    eax = 2;
    fcn_08048261 (eax);
label_5:
    fcn_08048283 ();
    goto label_1;
label_4:
    eax = 0;
    *(0x8048104) = eax;
    eax = *(0x8048108);
    *(0x80480fc) = eax;
    eax = fcn_08048311 ();
    if (eax == 0) {
        goto label_8;
    }
    eax = 0x20;
    fcn_08048261 (eax);
    eax = *(0x804812c);
    *(0x8048138) = eax;
    do {
        eax = fcn_08048311 ();
        if (eax == 0) {
            goto label_9;
        }
        eax = *(0x8048108);
        fcn_08048261 (eax);
        fcn_08048283 ();
    } while (1);
label_9:
    eax = *(0x80480fc);
    *(esp) = eax;
    eax = isdigit ();
    if (eax != 0) {
        eax = *(0x8048138);
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
        eax = *(0x804812c);
        eax = 0x20;
        ecx = eax;
        *(ecx) = al;
        eax = *(0x8048128);
        *(esp) = eax;
        eax = *(0x8048138);
        eax = 1;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        *((esp + 4)) = eax;
        eax = strstr ();
        eax = *(0x8048128);
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        *(0x80480fc) = eax;
        eax = *(0x804812c);
        eax = 0;
        ecx = eax;
        *(ecx) = al;
        eax = *(0x80480fc);
        eax = 8;
        ecx = eax;
        eax *= ecx;
        eax = 0x100;
        ecx = eax;
        eax += ecx;
        *(0x80480fc) = eax;
        eax = *(0x80480fc);
        eax = 0x218;
        ecx = eax;
        eax = 0;
        al = (ecx > eax) ? 1 : 0;
        if (eax == 0) {
            goto label_10;
        }
        eax = *(0x804810c);
        eax = *(0x80480fc);
        ecx = eax;
        eax += ecx;
        *(0x80480fc) = eax;
        eax = *(0x80480fc);
        eax = *(eax);
        eax = 1;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_10;
        }
        eax = *(0x80480fc);
        eax = 4;
        ecx = eax;
        eax += ecx;
        eax = *(eax);
        *(0x8048130) = eax;
        eax = *(0x8048108);
        *(0x8048134) = eax;
        fcn_08048283 ();
        fcn_080483b9 ();
        goto label_0;
    }
label_10:
    goto label_11;
label_8:
    fcn_08048283 ();
    eax = *(0x80480fc);
    eax = 0x27;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = 2;
        *(0x80480fc) = eax;
        fcn_0804835a ();
        eax = *(0x8048108);
        *(0x8048100) = eax;
        fcn_08048283 ();
        fcn_08048283 ();
        goto label_11;
    }
    eax = *(0x80480fc);
    eax = 0x2f;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = *(0x8048108);
    eax = 0x2a;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax &= ecx;
    if (eax == 0) {
        goto label_12;
    }
    fcn_08048283 ();
label_2:
    eax = *(0x8048108);
    if (eax == 0) {
        goto label_13;
    }
    do {
        eax = *(0x8048108);
        eax = 0x2a;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_14;
        }
        fcn_08048283 ();
    } while (1);
label_14:
    fcn_08048283 ();
    eax = *(0x8048108);
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
    fcn_08048283 ();
    fcn_080483b9 ();
    goto label_0;
    goto label_11;
label_12:
    eax = 0x8048148;
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
        eax = *(0x8048100);
        eax = 0x40;
        ecx = eax;
        eax *= ecx;
        eax = *(0x8048104);
        ecx = eax;
        eax += ecx;
        eax = 0x40;
        ecx = eax;
        eax += ecx;
        *(0x8048100) = eax;
    } while (1);
label_15:
    eax = *((ebp - 8));
    eax = *(0x80480fc);
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = *((ebp - 0xc));
    eax = *(0x8048108);
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
        eax = *(0x8048108);
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_08048283 ();
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
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048261 */
#include <stdint.h>
 
int32_t fcn_08048261 (int32_t arg_8h) {
    eax = *(0x804812c);
    *(0x804812c)++;
    eax = *((ebp + 8));
    ecx = eax;
    *(ecx) = al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048311 */
#include <stdint.h>
 
int32_t fcn_08048311 (void) {
    eax = *(0x8048108);
    *(esp) = eax;
    eax = isalnum ();
    eax = *(0x8048108);
    eax = 0x5f;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax |= ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804835a */
#include <stdint.h>
 
int32_t fcn_0804835a (void) {
    eax = *(0x8048108);
    eax = 0x5c;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        fcn_08048283 ();
        eax = *(0x8048108);
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
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048af6 */
#include <stdint.h>
 
int32_t fcn_08048af6 (int32_t arg_8h) {
    eax = *((ebp + 8));
    eax = *(eax);
    eax = 0xff;
    ecx = eax;
    eax &= ecx;
    eax = *((ebp + 8));
    eax = 1;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    eax = 0xff;
    ecx = eax;
    eax &= ecx;
    eax = 8;
    ecx = eax;
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    eax <<= cl;
    ecx = eax;
    eax |= ecx;
    eax = *((ebp + 8));
    eax = 2;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    eax = 0xff;
    ecx = eax;
    eax &= ecx;
    eax = 0x10;
    ecx = eax;
    tmp_1 = eax;
    eax = ecx;
    ecx = tmp_1;
    eax <<= cl;
    ecx = eax;
    eax |= ecx;
    eax = *((ebp + 8));
    eax = 3;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    eax = 0xff;
    ecx = eax;
    eax &= ecx;
    eax = 0x18;
    ecx = eax;
    tmp_2 = eax;
    eax = ecx;
    ecx = tmp_2;
    eax <<= cl;
    ecx = eax;
    eax |= ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048a71 */
#include <stdint.h>
 
int32_t fcn_08048a71 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    *((ebp + 8))++;
    eax = *((ebp + 0xc));
    ecx = eax;
    *(ecx) = al;
    eax = *((ebp + 8));
    *((ebp + 8))++;
    eax = *((ebp + 0xc));
    eax = 8;
    ecx = eax;
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    eax >>= cl;
    ecx = eax;
    *(ecx) = al;
    eax = *((ebp + 8));
    *((ebp + 8))++;
    eax = *((ebp + 0xc));
    eax = 0x10;
    ecx = eax;
    tmp_1 = eax;
    eax = ecx;
    ecx = tmp_1;
    eax >>= cl;
    ecx = eax;
    *(ecx) = al;
    eax = *((ebp + 8));
    *((ebp + 8))++;
    eax = *((ebp + 0xc));
    eax = 0x18;
    ecx = eax;
    tmp_2 = eax;
    eax = ecx;
    ecx = tmp_2;
    eax >>= cl;
    ecx = eax;
    *(ecx) = al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048b93 */
#include <stdint.h>
 
int32_t fcn_08048b93 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_sp_4h;
    do {
        eax = *((ebp + 8));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp + 8));
        eax = fcn_08048af6 (eax);
        *((ebp - 4)) = eax;
        eax = *((ebp + 8));
        eax = 1;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = *(eax);
        eax = 5;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = *((ebp + 0xc));
            eax = *(0x804813c);
            ecx = eax;
            eax = 0;
            al = (ecx >= eax) ? 1 : 0;
            if (eax != 0) {
                eax = *((ebp + 0xc));
                eax = *(0x8048120);
                ecx = eax;
                eax = 0;
                al = (ecx < eax) ? 1 : 0;
                if (eax != 0) {
                    eax = 1;
                }
            } else {
                eax = 0;
            }
            if (eax != 0) {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = *((ebp + 0xc));
                eax = *(0x8048144);
                ecx = eax;
                eax += ecx;
                fcn_08048a71 (eax, eax);
            } else {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = *((ebp + 0xc));
                eax = *(0x8048114);
                ecx = eax;
                eax -= ecx;
                eax = -eax;
                eax = *(0x8048140);
                ecx = eax;
                eax += ecx;
                eax = *(0x8048144);
                ecx = eax;
                eax += ecx;
                fcn_08048a71 (eax, eax);
            }
        } else {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = *((ebp + 0xc));
            eax = *((ebp + 8));
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            eax = 4;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            fcn_08048a71 (eax, eax);
        }
        eax = *((ebp - 4));
        *((ebp + 8)) = eax;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x80489e7 */
#include <stdint.h>
 
int32_t fcn_080489e7 (int32_t arg_8h) {
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
        eax = *(0x8048118);
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
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048d67 */
#include <stdint.h>
 
int32_t fcn_08048d67 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = *((ebp + 8));
    fcn_080489e7 (eax);
    eax = *(0x8048118);
    eax = *((ebp + 0xc));
    fcn_08048a71 (eax, eax);
    eax = *(0x8048118);
    *((ebp + 0xc)) = eax;
    eax = *(0x8048118);
    eax = 4;
    ecx = eax;
    eax += ecx;
    *(0x8048118) = eax;
    eax = *((ebp + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048de7 */
#include <stdint.h>
 
int32_t fcn_08048de7 (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0xb8;
    eax = *((ebp + 8));
    fcn_08048d67 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804905b */
#include <stdint.h>
 
int32_t fcn_0804905b (int32_t arg_8h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
label_0:
    eax = 1;
    *((ebp - 4)) = eax;
    eax = *(0x80480fc);
    eax = 0x22;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_1;
    }
    eax = *(0x8048120);
    eax = *(0x8048144);
    ecx = eax;
    eax += ecx;
    fcn_08048de7 (eax);
    do {
        eax = *(0x8048108);
        eax = 0x22;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_2;
        }
        fcn_0804835a ();
        eax = *(0x8048120);
        *(0x8048120)++;
        eax = *(0x8048108);
        ecx = eax;
        *(ecx) = al;
        fcn_08048283 ();
    } while (1);
label_2:
    eax = *(0x8048120);
    eax = 0;
    ecx = eax;
    *(ecx) = al;
    eax = *(0x8048120);
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
    fcn_08048283 ();
    fcn_080483b9 ();
    goto label_3;
label_1:
    eax = *(0x8048104);
    *((ebp - 0x10)) = eax;
    eax = *(0x8048100);
    *((ebp - 0xc)) = eax;
    eax = *(0x80480fc);
    *((ebp - 8)) = eax;
    fcn_080483b9 ();
    eax = *((ebp - 8));
    eax = 2;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp - 0xc));
        fcn_08048de7 (eax);
    } else {
        eax = *((ebp - 0x10));
        eax = 2;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = 0;
            fcn_0804905b (eax);
            goto label_0;
            eax = 0xb9;
            eax = 0;
            fcn_08048d67 (eax, eax);
            eax = *((ebp - 8));
            eax = 0x21;
            ecx = eax;
            eax = 0;
            al = (ecx == eax) ? 1 : 0;
            if (eax != 0) {
                eax = *((ebp - 0xc));
                fcn_08048eb7 (eax);
            } else {
                eax = *((ebp - 0xc));
                fcn_080489e7 (eax);
            }
        } else {
            eax = *((ebp - 8));
            eax = 0x28;
            ecx = eax;
            eax = 0;
            al = (ecx == eax) ? 1 : 0;
            if (eax != 0) {
                fcn_08049bbd ();
                fcn_080483b9 ();
            } else {
                eax = *((ebp - 8));
                eax = 0x2a;
                ecx = eax;
                eax = 0;
                al = (ecx == eax) ? 1 : 0;
                if (eax != 0) {
                    fcn_080483b9 ();
                    eax = *(0x80480fc);
                    *((ebp - 8)) = eax;
                    fcn_080483b9 ();
                    fcn_080483b9 ();
                    eax = *(0x80480fc);
                    eax = 0x2a;
                    ecx = eax;
                    eax = 0;
                    al = (ecx == eax) ? 1 : 0;
                    if (eax != 0) {
                        fcn_080483b9 ();
                        fcn_080483b9 ();
                        fcn_080483b9 ();
                        fcn_080483b9 ();
                        eax = 0;
                        *((ebp - 8)) = eax;
                    }
                    fcn_080483b9 ();
                    eax = 0;
                    fcn_0804905b (eax);
                    goto label_0;
                    eax = *(0x80480fc);
                    eax = 0x3d;
                    ecx = eax;
                    eax = 0;
                    al = (ecx == eax) ? 1 : 0;
                    if (eax != 0) {
                        fcn_080483b9 ();
                        eax = 0x50;
                        fcn_080489e7 (eax);
                        fcn_08049bbd ();
                        eax = 0x59;
                        fcn_080489e7 (eax);
                        eax = 0x188;
                        eax = *((ebp - 8));
                        eax = 0x100;
                        ecx = eax;
                        eax = 0;
                        al = (ecx == eax) ? 1 : 0;
                        ecx = eax;
                        eax += ecx;
                        fcn_080489e7 (eax);
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
                            fcn_080489e7 (eax);
                        } else {
                            eax = 0xbe0f;
                            fcn_080489e7 (eax);
                        }
                        eax = *(0x8048118);
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
                        eax = *(0x80480fc);
                        fcn_08048f5d (eax, eax);
                        fcn_080483b9 ();
                    } else {
                        eax = 0;
                        *((ebp - 4)) = eax;
                        eax = *(0x80480fc);
                        eax = 0x3d;
                        ecx = eax;
                        eax = 0;
                        al = (ecx == eax) ? 1 : 0;
                        eax = *((ebp + 8));
                        ecx = eax;
                        eax &= ecx;
                        if (eax != 0) {
                            fcn_080483b9 ();
                            fcn_08049bbd ();
                            eax = 6;
                            eax = *((ebp - 8));
                            fcn_08048f5d (eax, eax);
                        } else {
                            eax = *(0x80480fc);
                            eax = 0x28;
                            ecx = eax;
                            eax = 0;
                            al = (ecx != eax) ? 1 : 0;
                            if (eax == 0) {
                                goto label_3;
                            }
                            eax = 8;
                            eax = *((ebp - 8));
                            fcn_08048f5d (eax, eax);
                            eax = *(0x8048104);
                            eax = 0xb;
                            ecx = eax;
                            eax = 0;
                            al = (ecx == eax) ? 1 : 0;
                            if (eax == 0) {
                                goto label_3;
                            }
                            eax = 0;
                            eax = *((ebp - 8));
                            fcn_08048f5d (eax, eax);
                            eax = *(0x8048100);
                            fcn_080489e7 (eax);
                            fcn_080483b9 ();
                        }
                    }
                }
            }
        }
    }
label_3:
    eax = *(0x80480fc);
    eax = 0x28;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_5;
    }
    eax = *((ebp - 4));
    if (eax != 0) {
        eax = 0x50;
        fcn_080489e7 (eax);
    }
    eax = 0xec81;
    eax = 0;
    eax = fcn_08048d67 (eax, eax);
    *((ebp - 0xc)) = eax;
    fcn_080483b9 ();
    eax = 0;
    *((ebp + 8)) = eax;
    do {
        eax = *(0x80480fc);
        eax = 0x29;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_6;
        }
        fcn_08049bbd ();
        eax = 0x248489;
        eax = *((ebp + 8));
        fcn_08048d67 (eax, eax);
        eax = *(0x80480fc);
        eax = 0x2c;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_080483b9 ();
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
    fcn_08048a71 (eax, eax);
    fcn_080483b9 ();
    eax = *((ebp - 4));
    if (eax != 0) {
        eax = 0x2494ff;
        eax = *((ebp + 8));
        fcn_08048d67 (eax, eax);
        eax = *((ebp + 8));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp + 8)) = eax;
    } else {
        eax = *((ebp - 8));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp - 8)) = eax;
        eax = *((ebp - 8));
        eax = 0xe8;
        eax = *((ebp - 8));
        eax = *(eax);
        eax = fcn_08048d67 (eax, eax);
        *(ecx) = eax;
    }
    eax = *((ebp + 8));
    if (eax != 0) {
        eax = 0xc481;
        eax = *((ebp + 8));
        fcn_08048d67 (eax, eax);
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048eb7 */
#include <stdint.h>
 
int32_t fcn_08048eb7 (int32_t arg_8h) {
    eax = 0xc139;
    fcn_080489e7 (eax);
    eax = 0;
    fcn_08048de7 (eax);
    eax = 0xf;
    fcn_080489e7 (eax);
    eax = *((ebp + 8));
    eax = 0x90;
    ecx = eax;
    eax += ecx;
    fcn_080489e7 (eax);
    eax = 0xc0;
    fcn_080489e7 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8049bbd */
#include <stdint.h>
 
int32_t fcn_08049bbd (void) {
    eax = 0xb;
    fcn_08049882 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8049882 */
#include <stdint.h>
 
int32_t fcn_08049882 (int32_t arg_8h) {
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
            fcn_0804905b (eax);
            goto label_1;
        }
        eax = *((ebp + 8));
        fcn_08049882 (eax);
    } while (1);
    eax = 0;
    *((ebp - 0xc)) = eax;
    do {
        eax = *((ebp + 8));
        eax = *(0x8048104);
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_2;
        }
        eax = *(0x80480fc);
        *((ebp - 8)) = eax;
        eax = *(0x8048100);
        *((ebp - 4)) = eax;
        fcn_080483b9 ();
        eax = *((ebp + 8));
        eax = 8;
        ecx = eax;
        eax = 0;
        al = (ecx > eax) ? 1 : 0;
        if (eax != 0) {
            eax = *((ebp - 4));
            eax = *((ebp - 0xc));
            eax = fcn_08048e56 (eax, eax);
            *((ebp - 0xc)) = eax;
            eax = *((ebp + 8));
            fcn_08049882 (eax);
            goto label_0;
        } else {
            eax = 0x50;
            fcn_080489e7 (eax);
            eax = *((ebp + 8));
            fcn_08049882 (eax);
            goto label_0;
            eax = 0x59;
            fcn_080489e7 (eax);
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
                fcn_08048eb7 (eax);
            } else {
                eax = *((ebp - 4));
                fcn_080489e7 (eax);
                eax = *((ebp - 8));
                eax = 0x25;
                ecx = eax;
                eax = 0;
                al = (ecx == eax) ? 1 : 0;
                if (eax == 0) {
                    goto label_3;
                }
                eax = 0x92;
                fcn_080489e7 (eax);
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
        eax = fcn_08048e56 (eax, eax);
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 4));
        eax = 1;
        ecx = eax;
        eax ^= ecx;
        fcn_08048de7 (eax);
        eax = 5;
        fcn_08048e1c (eax);
        eax = *((ebp - 0xc));
        fcn_08048d31 (eax);
        eax = *((ebp - 4));
        fcn_08048de7 (eax);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048f5d */
#include <stdint.h>
 
int32_t fcn_08048f5d (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = *((ebp + 8));
    eax = 0x83;
    ecx = eax;
    eax += ecx;
    fcn_080489e7 (eax);
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    if (eax != 0) {
        eax = *((ebp - 4));
        eax = 0x200;
        ecx = eax;
        eax = 0;
        al = (ecx < eax) ? 1 : 0;
        if (eax != 0) {
            eax = 1;
        }
    } else {
        eax = 0;
    }
    if (eax != 0) {
        eax = 0x85;
        eax = *((ebp - 4));
        fcn_08048d67 (eax, eax);
    } else {
        eax = *((ebp + 0xc));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        eax = 5;
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = fcn_08048d67 (eax, eax);
        *(ecx) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048e56 */
#include <stdint.h>
 
int32_t fcn_08048e56 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = 0xfc085;
    fcn_080489e7 (eax);
    eax = 0x84;
    eax = *((ebp + 8));
    ecx = eax;
    eax += ecx;
    eax = *((ebp + 0xc));
    fcn_08048d67 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048e1c */
#include <stdint.h>
 
int32_t fcn_08048e1c (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0xe9;
    eax = *((ebp + 8));
    fcn_08048d67 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8048d31 */
#include <stdint.h>
 
int32_t fcn_08048d31 (int32_t arg_8h) {
    int32_t var_4h;
    eax = *((ebp + 8));
    eax = *(0x8048118);
    fcn_08048b93 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8049be5 */
#include <stdint.h>
 
int32_t fcn_08049be5 (void) {
    int32_t var_4h;
    fcn_08049bbd ();
    eax = 0;
    eax = 0;
    fcn_08048e56 (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x8049c29 */
#include <stdint.h>
 
int32_t fcn_08049c29 (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    do {
label_0:
        eax = *(0x80480fc);
        eax = 0x120;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax == 0) {
            goto label_1;
        }
        fcn_080483b9 ();
        fcn_080483b9 ();
        eax = fcn_08049be5 ();
        *((ebp - 4)) = eax;
        fcn_080483b9 ();
        eax = *((ebp + 8));
        fcn_08049c29 (eax);
    } while (1);
    eax = *(0x80480fc);
    eax = 0x138;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        fcn_080483b9 ();
        eax = 0;
        eax = fcn_08048e1c (eax);
        *((ebp - 8)) = eax;
        eax = *((ebp - 4));
        fcn_08048d31 (eax);
        eax = *((ebp + 8));
        fcn_08049c29 (eax);
        goto label_0;
        eax = *((ebp - 8));
        fcn_08048d31 (eax);
    } else {
        eax = *((ebp - 4));
        fcn_08048d31 (eax);
    }
    goto label_2;
label_1:
    eax = *(0x80480fc);
    eax = 0x160;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = *(0x80480fc);
    eax = 0x1f8;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    ecx = eax;
    eax |= ecx;
    if (eax != 0) {
        eax = *(0x80480fc);
        *((ebp - 0xc)) = eax;
        fcn_080483b9 ();
        fcn_080483b9 ();
        eax = *((ebp - 0xc));
        eax = 0x160;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            eax = *(0x8048118);
            *((ebp - 8)) = eax;
            eax = fcn_08049be5 ();
            *((ebp - 4)) = eax;
        } else {
            eax = *(0x80480fc);
            eax = 0x3b;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax != 0) {
                fcn_08049bbd ();
            }
            fcn_080483b9 ();
            eax = *(0x8048118);
            *((ebp - 8)) = eax;
            eax = 0;
            *((ebp - 4)) = eax;
            eax = *(0x80480fc);
            eax = 0x3b;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax != 0) {
                eax = fcn_08049be5 ();
                *((ebp - 4)) = eax;
            }
            fcn_080483b9 ();
            eax = *(0x80480fc);
            eax = 0x29;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax == 0) {
                goto label_3;
            }
            eax = 0;
            eax = fcn_08048e1c (eax);
            *((ebp - 0xc)) = eax;
            fcn_08049bbd ();
            eax = *((ebp - 8));
            eax = *(0x8048118);
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            eax = 5;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            fcn_08048e1c (eax);
            eax = *((ebp - 0xc));
            fcn_08048d31 (eax);
            eax = *((ebp - 0xc));
            eax = 4;
            ecx = eax;
            eax += ecx;
            *((ebp - 8)) = eax;
        }
label_3:
        fcn_080483b9 ();
        eax = ebp - 4;
        fcn_08049c29 (eax);
        goto label_0;
        eax = *((ebp - 8));
        eax = *(0x8048118);
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = 5;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        fcn_08048e1c (eax);
        eax = *((ebp - 4));
        fcn_08048d31 (eax);
        goto label_2;
    }
    eax = *(0x80480fc);
    eax = 0x7b;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_4;
    }
    fcn_080483b9 ();
    eax = 1;
    fcn_0804a170 (eax);
    do {
        eax = *(0x80480fc);
        eax = 0x7d;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_5;
        }
        eax = *((ebp + 8));
        fcn_08049c29 (eax);
        goto label_0;
    } while (1);
label_5:
    fcn_080483b9 ();
    goto label_2;
label_4:
    eax = *(0x80480fc);
    eax = 0x1c0;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        fcn_080483b9 ();
        eax = *(0x80480fc);
        eax = 0x3b;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax != 0) {
            fcn_08049bbd ();
        }
        eax = *(0x8048110);
        eax = fcn_08048e1c (eax);
        *(0x8048110) = eax;
    } else {
        eax = *(0x80480fc);
        eax = 0x190;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_080483b9 ();
            eax = *((ebp + 8));
            eax = *((ebp + 8));
            eax = *(eax);
            eax = fcn_08048e1c (eax);
            *(ecx) = eax;
        } else {
            eax = *(0x80480fc);
            eax = 0x3b;
            ecx = eax;
            eax = 0;
            al = (ecx != eax) ? 1 : 0;
            if (eax == 0) {
                goto label_6;
            }
            fcn_08049bbd ();
        }
    }
label_6:
    fcn_080483b9 ();
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804a170 */
#include <stdint.h>
 
int32_t fcn_0804a170 (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_sp_4h;
label_0:
    eax = *(0x80480fc);
    eax = 0x100;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    eax = *(0x80480fc);
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
    eax = *(0x80480fc);
    eax = 0x100;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_2;
    }
    fcn_080483b9 ();
    do {
        eax = *(0x80480fc);
        eax = 0x3b;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_3;
        }
        eax = *((ebp + 8));
        if (eax != 0) {
            eax = *(0x804811c);
            eax = 4;
            ecx = eax;
            eax += ecx;
            *(0x804811c) = eax;
            eax = *(0x80480fc);
            eax = *(0x804811c);
            ecx = 0;
            eax -= ecx;
            eax = -eax;
            ecx = eax;
            *(ecx) = eax;
        } else {
            eax = *(0x80480fc);
            eax = *(0x8048120);
            ecx = eax;
            *(ecx) = eax;
            eax = *(0x8048120);
            eax = 4;
            ecx = eax;
            eax += ecx;
            *(0x8048120) = eax;
        }
        fcn_080483b9 ();
        eax = *(0x80480fc);
        eax = 0x2c;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_080483b9 ();
        }
    } while (1);
label_3:
    fcn_080483b9 ();
    goto label_4;
label_2:
    eax = *(0x80480fc);
    eax = *(0x8048118);
    ecx = eax;
    *(ecx) = eax;
    fcn_080483b9 ();
    fcn_080483b9 ();
    eax = 8;
    *((ebp - 4)) = eax;
    do {
        eax = *(0x80480fc);
        eax = 0x29;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_5;
        }
        eax = *(0x80480fc);
        eax = *((ebp - 4));
        ecx = eax;
        *(ecx) = eax;
        eax = *((ebp - 4));
        eax = 4;
        ecx = eax;
        eax += ecx;
        *((ebp - 4)) = eax;
        fcn_080483b9 ();
        eax = *(0x80480fc);
        eax = 0x2c;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
            fcn_080483b9 ();
        }
    } while (1);
label_5:
    fcn_080483b9 ();
    eax = 0;
    *(0x804811c) = eax;
    *(0x8048110) = eax;
    eax = 0xe58955;
    fcn_080489e7 (eax);
    eax = 0xec81;
    eax = 0;
    eax = fcn_08048d67 (eax, eax);
    *((ebp - 4)) = eax;
    eax = 0;
    fcn_08049c29 (eax);
    eax = *(0x8048110);
    fcn_08048d31 (eax);
    eax = 0xc3c9;
    fcn_080489e7 (eax);
    eax = *((ebp - 4));
    eax = *(0x804811c);
    fcn_08048a71 (eax, eax);
label_4:
    goto label_0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804a46f */
#include <stdint.h>
 
int32_t fcn_0804a46f (int32_t arg_8h) {
    int32_t var_4h;
    eax = *(0x8048120);
    eax = *((ebp + 8));
    fcn_08048a71 (eax, eax);
    eax = *(0x8048120);
    eax = 4;
    ecx = eax;
    eax += ecx;
    *(0x8048120) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804a570 */
#include <stdint.h>
 
int32_t fcn_0804a570 (int32_t arg_8h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0;
    *((ebp - 0x10)) = eax;
    eax = *(0x8048128);
    *((ebp - 4)) = eax;
label_0:
    eax = 1;
    if (eax == 0) {
        goto label_1;
    }
    eax = *((ebp - 4));
    *((ebp - 4))++;
    eax = *((ebp - 4));
    *((ebp - 8)) = eax;
    do {
        eax = *((ebp - 4));
        eax = *(eax);
        eax = 0x20;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax != 0) {
            eax = *((ebp - 4));
            eax = *(0x804812c);
            ecx = eax;
            eax = 0;
            al = (ecx < eax) ? 1 : 0;
            if (eax != 0) {
                eax = 1;
            }
        } else {
            eax = 0;
        }
        if (eax == 0) {
            goto label_2;
        }
        eax = *((ebp - 4));
        *((ebp - 4))++;
    } while (1);
label_2:
    eax = *((ebp - 4));
    eax = *(0x804812c);
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        goto label_1;
    }
    eax = *(0x804810c);
    eax = *((ebp - 8));
    eax = *(0x8048128);
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    eax = 8;
    ecx = eax;
    eax *= ecx;
    ecx = eax;
    eax += ecx;
    eax = 0x100;
    ecx = eax;
    eax += ecx;
    eax = 8;
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    *(0x80480fc) = eax;
    eax = *(0x80480fc);
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    eax = *(0x80480fc);
    eax = 4;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    if (eax != 0) {
        eax = *((ebp - 0x14));
        eax = 1;
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
        goto label_3;
    }
    eax = *((ebp - 0x14));
    ecx = 0;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax == 0) {
        goto label_4;
    }
    eax = *((ebp + 8));
    ecx = 0;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = *(0x8048120);
        *(esp) = eax;
        eax = *((ebp - 8));
        *((esp + 4)) = eax;
        eax = *((ebp - 4));
        eax = *((ebp - 8));
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        memcpy (eax);
        eax = *(0x8048120);
        eax = *((ebp - 4));
        ecx = eax;
        eax += ecx;
        eax = *((ebp - 8));
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = 1;
        ecx = eax;
        eax += ecx;
        *(0x8048120) = eax;
        goto label_5;
    }
    eax = *((ebp + 8));
    eax = 1;
    ecx = eax;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp - 0x10));
        eax = 0x16;
        ecx = eax;
        eax += ecx;
        fcn_0804a46f (eax);
        eax = 0;
        fcn_0804a46f (eax);
        eax = 0;
        fcn_0804a46f (eax);
        eax = 0x10;
        fcn_0804a46f (eax);
        eax = *((ebp - 0x10));
        eax = *((ebp - 4));
        ecx = eax;
        eax += ecx;
        eax = *((ebp - 8));
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = 1;
        ecx = eax;
        eax += ecx;
        *((ebp - 0x10)) = eax;
        goto label_5;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x10))++;
    do {
        eax = *((ebp - 0xc));
        if (eax == 0) {
            goto label_5;
        }
        eax = *((ebp - 0xc));
        eax = fcn_08048af6 (eax);
        *((ebp - 8)) = eax;
        eax = *((ebp - 0xc));
        eax = 1;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = *(eax);
        eax = 5;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        *((ebp - 0x18)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        eax = *((ebp - 0x18));
        ecx = 0;
        eax -= ecx;
        eax = -eax;
        eax = 4;
        ecx = eax;
        eax *= ecx;
        fcn_08048a71 (eax, eax);
        eax = *((ebp - 0xc));
        eax = *(0x8048114);
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = *(0x8048140);
        ecx = eax;
        eax += ecx;
        eax = *(0x8048144);
        ecx = eax;
        eax += ecx;
        fcn_0804a46f (eax);
        eax = *((ebp - 0x10));
        eax = 0x100;
        ecx = eax;
        eax *= ecx;
        eax = *((ebp - 0x18));
        ecx = eax;
        eax += ecx;
        eax = 1;
        ecx = eax;
        eax += ecx;
        fcn_0804a46f (eax);
        eax = *((ebp - 8));
        *((ebp - 0xc)) = eax;
    } while (1);
label_5:
    goto label_3;
label_4:
    eax = *((ebp + 8));
    ecx = 0;
    eax = 0;
    al = (ecx == eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp - 0xc));
        eax = *((ebp - 0x14));
        fcn_08048b93 (eax, eax);
    }
label_3:
    goto label_0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804a4ba */
#include <stdint.h>
 
int32_t fcn_0804a4ba (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    fcn_0804a46f (eax);
    eax = *((ebp + 8));
    eax = segment.ehdr;
    ecx = eax;
    eax += ecx;
    *((ebp + 8)) = eax;
    eax = *((ebp + 8));
    fcn_0804a46f (eax);
    eax = *((ebp + 8));
    fcn_0804a46f (eax);
    eax = *((ebp + 0xc));
    fcn_0804a46f (eax);
    eax = *((ebp + 0xc));
    fcn_0804a46f (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccelf/ia32_elf_otcc/subject.exe @ 0x804a9f0 */
#include <stdint.h>
 
int32_t fcn_0804a9f0 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_bp_4h;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *(0x8048120);
    *(0x8048140) = eax;
    eax = *(0x8048118);
    eax = *(0x8048114);
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    *((ebp - 0x24)) = eax;
    eax = *(0x8048114);
    *(0x8048118) = eax;
    eax = 0x505458;
    fcn_080489e7 (eax);
    eax = *(0x804810c);
    eax = 0x250;
    ecx = eax;
    eax += ecx;
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    eax = 0xe8;
    *(esp) = eax;
    eax = *((ebp - 0x20));
    eax = *(0x8048118);
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    eax = 5;
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    fcn_08048d67 (eax, eax);
    eax = 0xc389;
    fcn_080489e7 (eax);
    eax = 1;
    fcn_08048de7 (eax);
    eax = 0x80cd;
    fcn_080489e7 (eax);
    eax = *(0x8048120);
    eax = *((ebp - 0x24));
    ecx = eax;
    eax += ecx;
    *(0x8048120) = eax;
    eax = *(0x8048120);
    *((ebp - 8)) = eax;
    eax = *(0x8048120);
    *(0x8048120)++;
    eax = *(0x8048120);
    *(esp) = eax;
    eax = 0x80481c8;
    eax = strcpy (eax);
    eax = 0xa;
    ecx = eax;
    eax += ecx;
    *(0x8048120) = eax;
    eax = *(0x8048120);
    *(esp) = eax;
    eax = 0x80481d4;
    eax = strcpy (eax);
    eax = 0xb;
    ecx = eax;
    eax += ecx;
    *(0x8048120) = eax;
    eax = 0;
    fcn_0804a570 (eax);
    eax = *(0x8048120);
    eax = *((ebp - 8));
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    *((ebp - 0xc)) = eax;
    eax = *(0x8048120);
    eax = 3;
    ecx = eax;
    eax += ecx;
    eax = 4;
    ecx = 0;
    eax -= ecx;
    eax = -eax;
    ecx = eax;
    eax &= ecx;
    *(0x8048120) = eax;
    eax = *(0x8048120);
    *((ebp - 0x10)) = eax;
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a570 (eax);
    eax = *(0x8048120);
    *((ebp - 0x14)) = eax;
    eax = *(0x8048120);
    eax = *((ebp - 0x10));
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    eax = 0x10;
    ecx = eax;
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *((ebp - 0x1c)) = eax;
    eax = 1;
    fcn_0804a46f (eax);
    eax = *((ebp - 0x1c));
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 2;
    *((ebp - 0x20)) = eax;
    do {
        eax = *((ebp - 0x20));
        eax = *((ebp - 0x1c));
        ecx = eax;
        eax = 0;
        al = (ecx < eax) ? 1 : 0;
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp - 0x20));
        *((ebp - 0x20))++;
        fcn_0804a46f (eax);
    } while (1);
label_0:
    eax = 0;
    fcn_0804a46f (eax);
    eax = *(0x8048120);
    *((ebp - 0x18)) = eax;
    eax = 2;
    fcn_0804a570 (eax);
    eax = *(0x8048140);
    *(esp) = eax;
    eax = *(0x8048114);
    *((esp + 4)) = eax;
    eax = *((ebp - 0x24));
    memcpy (eax);
    eax = *(0x8048120);
    *((ebp - 4)) = eax;
    eax = *(0x804813c);
    *(0x8048120) = eax;
    eax = 0x464c457f;
    fcn_0804a46f (eax);
    eax = 0x10101;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0x30002;
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a46f (eax);
    eax = *(0x8048140);
    eax = *(0x8048144);
    ecx = eax;
    eax += ecx;
    fcn_0804a46f (eax);
    eax = 0x30;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0x200034;
    fcn_0804a46f (eax);
    eax = 3;
    fcn_0804a46f (eax);
    eax = 3;
    fcn_0804a46f (eax);
    eax = 0x90;
    eax = 0x13;
    fcn_0804a4ba (eax, eax);
    eax = 4;
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a46f (eax);
    eax = 0;
    *(esp) = eax;
    eax = *((ebp - 4));
    eax = *(0x804813c);
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    fcn_0804a4ba (eax, eax);
    eax = 7;
    fcn_0804a46f (eax);
    eax = 0x1000;
    fcn_0804a46f (eax);
    eax = 2;
    fcn_0804a46f (eax);
    eax = 0xa4;
    eax = 0x58;
    fcn_0804a4ba (eax, eax);
    eax = 6;
    fcn_0804a46f (eax);
    eax = 4;
    fcn_0804a46f (eax);
    eax = *(0x8048120);
    *(esp) = eax;
    eax = 0x80481e0;
    eax = strcpy (eax);
    eax = 0x14;
    ecx = eax;
    eax += ecx;
    *(0x8048120) = eax;
    eax = 1;
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a46f (eax);
    eax = 1;
    fcn_0804a46f (eax);
    eax = 0xb;
    fcn_0804a46f (eax);
    eax = 4;
    fcn_0804a46f (eax);
    eax = *((ebp - 0x14));
    eax = *(0x8048144);
    ecx = eax;
    eax += ecx;
    fcn_0804a46f (eax);
    eax = 6;
    fcn_0804a46f (eax);
    eax = *((ebp - 0x10));
    eax = *(0x8048144);
    ecx = eax;
    eax += ecx;
    fcn_0804a46f (eax);
    eax = 5;
    fcn_0804a46f (eax);
    eax = *((ebp - 8));
    eax = *(0x8048144);
    ecx = eax;
    eax += ecx;
    fcn_0804a46f (eax);
    eax = 0xa;
    fcn_0804a46f (eax);
    eax = *((ebp - 0xc));
    fcn_0804a46f (eax);
    eax = 0xb;
    fcn_0804a46f (eax);
    eax = 0x10;
    fcn_0804a46f (eax);
    eax = 0x11;
    fcn_0804a46f (eax);
    eax = *((ebp - 0x18));
    eax = *(0x8048144);
    ecx = eax;
    eax += ecx;
    fcn_0804a46f (eax);
    eax = 0x12;
    fcn_0804a46f (eax);
    eax = *((ebp - 4));
    eax = *((ebp - 0x18));
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    fcn_0804a46f (eax);
    eax = 0x13;
    fcn_0804a46f (eax);
    eax = 8;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = 0;
    fcn_0804a46f (eax);
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = 0x80481f4;
    eax = fopen (eax);
    *((ebp - 0x20)) = eax;
    eax = *(0x804813c);
    *(esp) = eax;
    eax = 1;
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    eax = *(0x804813c);
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    *((esp + 8)) = eax;
    eax = *((ebp - 0x20));
    fwrite (eax);
    eax = *((ebp - 0x20));
    fclose (eax);
    return eax;
}
