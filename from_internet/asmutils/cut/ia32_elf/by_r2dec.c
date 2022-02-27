/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cut/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    *(0x8048337) = 9;
    do {
label_0:
        ebp |= ebp;
        if (ebp == 0) {
            goto label_4;
        }
        if (*(ebp) == 0x632d) {
            goto label_5;
        }
        if (*(ebp) != 0x7a2d) {
            if (*(ebp) == 0x642d) {
                goto label_6;
            }
            if (*(ebp) == 0x662d) {
                goto label_7;
            }
            if (*(ebp) == 0x2d2d) {
                goto label_8;
            }
            goto label_9;
        }
        *(0x8048338) = 1;
    } while (1);
label_5:
    ebp += 2;
    if (*(ebp) == 0) {
        ebp |= ebp;
        if (ebp == 0) {
            goto label_10;
        }
    }
    fcn_08048298 ();
    ecx = 0;
    ecx++;
    *(0x8048439) = ebx;
    *(0x804843d) = ecx;
    if (*(ebp) != 0x2d) {
        goto label_0;
    }
    ebp++;
    fcn_08048298 ();
    ebx -= *(0x8048439);
    if (ebx < 0) {
        goto label_10;
    }
    ebx++;
    *(0x804843d) = ebx;
    goto label_0;
label_6:
    ebp += 2;
    if (*(ebp) == 0) {
        ebp |= ebp;
        if (ebp == 0) {
            goto label_10;
        }
    }
    al = fcn_080482bc ();
    *(0x8048337) = al;
    goto label_0;
label_7:
    *(0x8048336) = 1;
    ebp += 2;
    if (*(ebp) != 0) {
        goto label_11;
    }
    ebp |= ebp;
    if (ebp == 0) {
        goto label_10;
    }
    do {
label_11:
        eax = fcn_08048298 ();
        if (ebx <= 0xff) {
            *((ebx + 0x8048339)) = 1;
        }
        ebp++;
    } while (*((ebp - 1)) == 0x2c);
    goto label_0;
label_8:
    ebp |= ebp;
    if (ebp != 0) {
        goto label_9;
    }
label_4:
    do {
        eax = 0;
        goto label_12;
label_9:
    } while (*(ebp) == 0x2d);
    ecx = 0;
    eax = 5;
    eax = sys_open (0xeb, ecx, edx);
    if (eax < 0) {
        goto label_10;
    }
label_12:
    *(0x8048441) = eax;
    edx = ebx;
    do {
label_3:
        esi = *(0x8048439);
        esi |= esi;
        if (esi == 0) {
            goto label_13;
        }
        esi--;
        if (esi == 0) {
            goto label_13;
        }
        *(0x8048335) = 0;
label_1:
        al = fcn_08048246 ();
    } while (al == 0xa);
    esi--;
    if (esi != 0) {
        goto label_1;
    }
label_13:
    *(0x8048335) = 0;
    esi = 0;
    esi++;
    edi = *(0x804843d);
    do {
        al = fcn_08048246 ();
        if (al == 0xa) {
            goto label_14;
        }
        if (*(0x8048336) != 0) {
            if (al == *(0x8048337)) {
                goto label_15;
            }
            if (esi > 0xff) {
                goto label_16;
            }
            if (*((esi + 0x8048339)) == 0) {
                goto label_2;
            }
            if (*(0x8048335) != 1) {
                goto label_17;
            }
            al = *(0x8048337);
            fcn_08048275 ();
        }
label_17:
        *(0x8048335) = 2;
        fcn_08048275 ();
label_2:
        edi--;
    } while (edi != 0);
    goto label_16;
label_15:
    esi++;
    if (*(0x8048338) == 1) {
        goto label_2;
    }
    if (*(0x8048335) != 2) {
        goto label_2;
    }
    *(0x8048335) = 1;
    goto label_2;
    do {
label_16:
        al = fcn_08048246 ();
    } while (al != 0xa);
label_14:
    fcn_08048275 ();
    goto label_3;
    do {
        eax = 1;
        eax = sys_exit (ebx);
label_10:
        bl = 1;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cut/ia32_elf/subject.exe @ 0x8048298 */
#include <stdint.h>
 
int32_t fcn_08048298 (void) {
    eax = 0;
    ecx = 0;
    do {
        cl = *(ebp);
        cl -= 0x30;
        if (cl < 0) {
            goto label_0;
        }
        if (cl > 9) {
            goto label_0;
        }
        ebp++;
        edx = 0;
        edx:eax = eax * *(0x80482b8);
        eax += ecx;
    } while (1);
label_0:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cut/ia32_elf/subject.exe @ 0x80482bc */
#include <stdint.h>
 
int8_t fcn_080482bc (void) {
    al = *(ebp);
    ebp++;
    if (al == 0x5c) {
        al = *(ebp);
        if (al == 0x61) {
            goto label_0;
        }
        if (al == 0x62) {
            goto label_1;
        }
        if (al == 0x74) {
            goto label_2;
        }
        if (al == 0x72) {
            goto label_3;
        }
        if (al == 0x6e) {
            goto label_4;
        }
        if (al < 0x30) {
            goto label_5;
        }
        if (al > 0x37) {
            goto label_5;
        }
        cl = 3;
        al -= 0x30;
        ah = al;
        ebp++;
        al = *(ebp);
        al -= 0x30;
        if (al >= 0) {
            if (al > 7) {
                goto label_6;
            }
            ebp++;
            ah <<= cl;
            ah ^= al;
            al = *(ebp);
            al -= 0x30;
            if (al < 0) {
                goto label_6;
            }
            if (al > 7) {
                goto label_6;
            }
            ebp++;
            ah <<= cl;
            ah ^= al;
        }
label_6:
        al = ah;
    }
label_5:
    return al;
label_0:
    al = 7;
    return al;
label_1:
    al = 8;
    return al;
label_2:
    al = 9;
    return al;
label_3:
    al = 0xd;
    return al;
label_4:
    al = 0xa;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cut/ia32_elf/subject.exe @ 0x8048246 */
#include <stdint.h>
 
int8_t fcn_08048246 (void) {
    do {
label_0:
        edx = ebp;
        edx -= 0x8048c45;
        if (edx != 0) {
            ecx = 0x8048c45;
            ebx = 1;
            eax = 4;
            eax = sys_write (ebx, ecx, edx);
        }
        ebx = *(0x8048441);
        bl = 0;
        if (ebx < edx) {
            goto label_1;
        }
        eax = 3;
        eax = sys_read (0x8048441, 0x8048445, 0x800);
    } while (eax < 0);
    if (eax == 0) {
        goto label_0;
    }
    ebx = 0x8048445;
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    edx += 0x8048445;
label_1:
    al = *(ebx);
    ebx++;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cut/ia32_elf/subject.exe @ 0x8048275 */
#include <stdint.h>
 
void fcn_08048275 (void) {
    *(ebp) = al;
    ebp++;
    if (ebp == 0x8049445) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x8048c45, 0x800);
        edx = 4;
        ebx = 4;
    }
}
