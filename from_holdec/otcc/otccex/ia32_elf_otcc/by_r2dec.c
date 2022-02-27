/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/ia32_elf_otcc/subject.exe @ 0x8048198 */
#include <stdint.h>
 
void entry0 (void) {
    eax = fcn_08048450 (eax, esp);
    eax = sys_exit (0xea);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/ia32_elf_otcc/subject.exe @ 0x8048450 */
#include <stdint.h>
 
int32_t fcn_08048450 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_bp_4h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((ebp + 8));
    eax = 2;
    ecx = eax;
    eax = 0;
    al = (ecx != eax) ? 1 : 0;
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = 3;
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax != 0) {
            eax = 1;
        }
    } else {
        eax = 0;
    }
    if (eax != 0) {
        eax = *((ebp + 0xc));
        eax = *(eax);
        *((ebp - 4)) = eax;
        eax = *((ebp - 4));
        fcn_0804876b (eax);
        eax = 1;
    } else {
        eax = *((ebp + 0xc));
        eax = 4;
        ecx = eax;
        eax += ecx;
        eax = *(eax);
        eax = atoi (eax);
        *((ebp - 8)) = eax;
        eax = 0xa;
        *(0x80480fc) = eax;
        eax = *((ebp + 8));
        eax = 3;
        ecx = eax;
        eax = 0;
        al = (ecx >= eax) ? 1 : 0;
        if (eax != 0) {
            eax = *((ebp + 0xc));
            eax = 8;
            ecx = eax;
            eax += ecx;
            eax = *(eax);
            eax = atoi (eax);
            *(0x80480fc) = eax;
            eax = imp.stderr;
            eax = 2;
            ecx = eax;
            eax = 0;
            al = (ecx < eax) ? 1 : 0;
            if (eax == 0) {
                eax = imp.stderr;
                eax = 0x24;
                ecx = eax;
                eax = 0;
                al = (ecx > eax) ? 1 : 0;
                if (eax == 0) {
                    eax = 0;
                }
            } else {
                eax = 1;
            }
            if (eax != 0) {
                eax = *(0);
                eax = 0x8048104;
                fprintf (eax, eax);
                eax = 1;
            }
        } else {
            eax = 0x8048114;
            eax = *((ebp - 8));
            printf (eax, eax);
            eax = *((ebp - 8));
            eax = fcn_080481a9 (eax);
            eax = imp.stderr;
            fcn_080482bc (eax, eax);
            eax = 0x8048120;
            printf (eax);
            eax = 0x8048124;
            eax = *((ebp - 8));
            printf (eax, eax);
            eax = *((ebp - 8));
            eax = 0xc;
            ecx = eax;
            eax = 0;
            al = (ecx > eax) ? 1 : 0;
            if (eax != 0) {
                eax = 0x8048130;
                printf (eax);
            } else {
                eax = 0x804823d;
                *((ebp - 0xc)) = eax;
                eax = *((ebp - 0xc));
                eax = *((ebp - 8));
                eax = uint32_t (*esp + 4)(uint32_t) (eax);
                eax = imp.stderr;
                fcn_080482bc (eax, eax);
            }
            eax = 0x804813c;
            printf (eax);
            eax = 0;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/ia32_elf_otcc/subject.exe @ 0x804876b */
#include <stdint.h>
 
int32_t fcn_0804876b (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0x8048140;
    *(esp) = eax;
    eax = *((ebp + 8));
    printf (eax);
    eax = 0x8048154;
    printf (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/ia32_elf_otcc/subject.exe @ 0x80481a9 */
#include <stdint.h>
 
int32_t fcn_080481a9 (int32_t arg_8h) {
    do {
label_0:
        eax = *((ebp + 8));
        eax = 2;
        ecx = eax;
        eax = 0;
        al = (ecx <= eax) ? 1 : 0;
        if (eax != 0) {
            eax = 1;
            goto label_1;
        }
        eax = *((ebp + 8));
        eax = 1;
        ecx = eax;
        eax -= ecx;
        eax = -eax;
        eax = fcn_080481a9 (eax);
    } while (1);
    eax = *((ebp + 8));
    eax = 2;
    ecx = eax;
    eax -= ecx;
    eax = -eax;
    eax = fcn_080481a9 (eax);
    goto label_0;
    eax += ecx;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/ia32_elf_otcc/subject.exe @ 0x80482bc */
#include <stdint.h>
 
int32_t fcn_080482bc (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0x100;
    eax = malloc (ebp);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *((ebp - 8)) = eax;
    do {
        eax = 1;
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp + 8));
        eax = *((ebp + 0xc));
        ecx = eax;
        tmp_0 = eax;
        eax = ecx;
        ecx = tmp_0;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        tmp_1 = eax;
        eax = edx;
        edx = tmp_1;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        eax = 0xa;
        ecx = eax;
        eax = 0;
        al = (ecx >= eax) ? 1 : 0;
        if (eax != 0) {
            eax = *((ebp - 0xc));
            eax = 0x61;
            ecx = eax;
            eax += ecx;
            eax = 0xa;
            ecx = eax;
            eax -= ecx;
            eax = -eax;
            *((ebp - 0xc)) = eax;
        } else {
            eax = *((ebp - 0xc));
            eax = 0x30;
            ecx = eax;
            eax += ecx;
            *((ebp - 0xc)) = eax;
        }
        eax = *((ebp - 8));
        eax = *((ebp - 0xc));
        ecx = eax;
        *(ecx) = al;
        eax = *((ebp - 8));
        *((ebp - 8))++;
        eax = *((ebp + 8));
        eax = *((ebp + 0xc));
        ecx = eax;
        tmp_2 = eax;
        eax = ecx;
        ecx = tmp_2;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        *((ebp + 8)) = eax;
        eax = *((ebp + 8));
        eax = 0;
        ecx = eax;
        eax = 0;
        al = (ecx == eax) ? 1 : 0;
        if (eax != 0) {
        } else {
        }
    } while (1);
    do {
label_0:
        eax = *((ebp - 8));
        eax = *((ebp - 4));
        ecx = eax;
        eax = 0;
        al = (ecx != eax) ? 1 : 0;
        if (eax == 0) {
            goto label_1;
        }
        eax = *((ebp - 8));
        *((ebp - 8)) += 0xffffffff;
        eax = 0x8048100;
        eax = *((ebp - 8));
        eax = *(eax);
        printf (eax, eax);
    } while (1);
label_1:
    eax = *((ebp - 4));
    free (eax);
    return eax;
}
