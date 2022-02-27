/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dc/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    edi = 0x80481da;
    do {
label_0:
        ebp--;
        if (ebp == 0) {
            goto label_3;
        }
        if (*(ebx) < 0x30) {
            goto label_4;
        }
        if (*(ebx) > 0x39) {
            goto label_4;
        }
        fcn_08048147 ();
    } while (1);
label_3:
    eax = fcn_08048166 ();
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    fcn_08048117 ();
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    do {
        fcn_08048174 ();
        eax = fcn_08048117 ();
        goto label_0;
label_1:
        eax = -eax;
        goto label_2;
label_4:
        eax = fcn_08048166 ();
        tmp_1 = eax;
        eax = ecx;
        ecx = tmp_1;
    } while (*(ebx) == 0x70);
    if (*(ebx) == 0x21) {
        goto label_1;
    }
    if (*(ebx) == 0x7e) {
        goto label_1;
    }
    if (*(ebx) == 0x6e) {
        goto label_1;
    }
    if (*(ebx) == 0x64) {
        goto label_0;
    }
    eax = fcn_08048166 ();
    tmp_2 = eax;
    eax = ecx;
    ecx = tmp_2;
    if (*(ebx) == 0x2b) {
        goto label_5;
    }
    if (*(ebx) == 0x2d) {
        goto label_6;
    }
    if (*(ebx) == 0x2a) {
        goto label_7;
    }
    if (*(ebx) == 0x78) {
        goto label_7;
    }
    if (*(ebx) == 0x2f) {
        goto label_8;
    }
    if (*(ebx) == 0x25) {
        goto label_9;
    }
    if (*(ebx) == 0x61) {
        goto label_10;
    }
    if (*(ebx) == 0x6f) {
        goto label_11;
    }
    if (*(ebx) == 0x78) {
        goto label_12;
    }
    if (*(ebx) == 0x65) {
        goto label_12;
    }
    goto label_13;
    do {
label_2:
        eax = fcn_08048174 ();
        goto label_0;
label_5:
        eax += ecx;
    } while (1);
label_6:
    eax -= ecx;
    goto label_2;
label_7:
    edx = 0;
    edx:eax = eax * ecx;
    goto label_2;
label_10:
    eax &= ecx;
    goto label_2;
label_11:
    eax |= ecx;
    goto label_2;
label_12:
    eax ^= ecx;
    goto label_2;
label_8:
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    goto label_2;
label_9:
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    tmp_3 = eax;
    eax = edx;
    edx = tmp_3;
    goto label_2;
label_13:
    ecx = 0x80481d3;
    edx = 7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dc/ia32_elf/subject.exe @ 0x8048147 */
#include <stdint.h>
 
int32_t fcn_08048147 (void) {
    eax = 0;
    ecx = 0;
    do {
        cl = *(ebx);
        cl -= 0x30;
        if (cl < 0) {
            goto label_0;
        }
        if (cl > 9) {
            goto label_0;
        }
        edx = 0xa;
        edx:eax = eax * edx;
        eax += ecx;
        ebx++;
    } while (1);
label_0:
    return void (*0x8048174)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dc/ia32_elf/subject.exe @ 0x8048166 */
#include <stdint.h>
 
void fcn_08048166 (void) {
    if (edi <= 0x80481da) {
        void (*0x804818e)() ();
    }
    edi -= 4;
    ecx = *(edi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dc/ia32_elf/subject.exe @ 0x8048117 */
#include <stdint.h>
 
uint32_t fcn_08048117 (void) {
    ecx = 0;
    ebx = 0xa;
    edi = 0x80483da;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        ecx++;
        eax |= eax;
    } while (eax != 0);
    edx = ecx;
    edx++;
    do {
        eax = edx;
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x804812f");
    } while (1);
    al = 0xa;
    *(es:edi) = al;
    es:edi++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80483da, edx);
    edi = 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/dc/ia32_elf/subject.exe @ 0x8048174 */
#include <stdint.h>
 
int32_t fcn_08048174 (void) {
    if (edi < 0x804825a) {
        *(edi) = eax;
        edi += 4;
        return;
    }
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x80481b4, 0xf);
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
    if (edi != 0) {
        __asm ("arpl word [ebx + 0x20], bp");
        __asm ("outsd dx, dword [esi]");
        if (edi <= 0) {
            goto label_0;
        }
        if (edi < 0) {
            goto label_1;
        }
        __asm ("insb byte es:[edi], dx");
        __asm ("outsd dx, dword [esi]");
        if (edi <= 0) {
            if (edi == 0) {
                goto label_2;
            }
            __asm ("arpl word [ebx + 0x20], bp");
            if (edi != 0) {
                goto label_3;
            }
            if (edi < 0) {
                goto label_4;
            }
        }
        if (edi < 0) {
            goto label_4;
        }
        __asm ("insb byte es:[edi], dx");
        __asm ("outsd dx, dword [esi]");
        if (edi <= 0) {
            edx++;
            __asm ("popal");
            *((fs:edi + 0x70)) &= ch;
            al |= *(eax);
            *(eax) += al;
        }
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
    }
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_0:
    *(eax) += al;
    *(eax) += al;
label_1:
    *(eax) += al;
label_2:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
label_4:
    *(eax) += al;
    *(eax) += al;
label_3:
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
}
