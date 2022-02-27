/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tr/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    eax = 0;
    do {
label_0:
        edi--;
        ebp |= ebp;
        if (ebp == 0) {
            goto label_1;
        }
        bl = *(ebp);
        ebp |= ebp;
        if (ebp == 0) {
            goto label_1;
        }
        if (*(ebp) == 0x732d) {
            goto label_5;
        }
        if (*(ebp) != 0x642d) {
            goto label_6;
        }
        al++;
    } while (1);
label_5:
    ah++;
    goto label_0;
label_6:
    ebx = 0;
    *(0x804824d) = ah;
    *(0x804824e) = al;
    al |= al;
    if (al == 0) {
        goto label_7;
    }
    do {
        *((ebx + 0x8048251)) = al;
        bl++;
    } while (bl != 0);
    esi = 0x8048351;
    eax = void (*0x8048172)() ();
    ebx = 0;
    cl = 0;
    eax |= eax;
    do {
        if (eax == 0) {
            goto label_8;
        }
        bl = *(esi);
        *((ebx + 0x8048251)) = cl;
        esi++;
        eax--;
    } while (1);
label_1:
    bl = 0;
    bl++;
    goto label_9;
    do {
label_7:
        *((ebx + 0x8048251)) = bl;
        bl++;
    } while (bl != 0);
    esi = 0x8048351;
    eax = void (*0x8048172)() ();
    ebp |= ebp;
    if (ebp == 0) {
        goto label_1;
    }
    esi = 0x8048451;
    eax = void (*0x8048172)() ();
    if (ebp != eax) {
        goto label_1;
    }
    eax |= eax;
    if (eax == 0) {
        goto label_8;
    }
    esi = 0x8048351;
    edi = 0x8048451;
    ebx = 0;
    do {
        bl = *(esi);
        esi++;
        cl = *(edi);
        edi++;
        *((ebx + 0x8048251)) = cl;
        eax--;
    } while (eax != 0);
label_8:
    edi = 0;
    do {
label_2:
        edx = 1;
        eax = 3;
        eax = sys_read (0xed, 0x8048250, 0x1);
        eax |= eax;
        if (eax == 0) {
            goto label_10;
        }
        ebx = 0;
        if (*(0x804824e) == 0) {
            bl = *(0x8048250);
            al = *((ebx + 0x8048251));
            goto label_11;
        }
        bl = *(0x8048250);
        cl = *((ebx + 0x8048251));
        cl |= cl;
    } while (cl == 0);
    al = bl;
label_11:
    if (*(0x804824d) == 0) {
        goto label_12;
    }
    if (al == *(0x804824f)) {
        goto label_2;
    }
label_12:
    *(0x804824f) = al;
    edx = 1;
    eax = 4;
    eax = sys_write (0xeb, 0x804824f, 0x1);
    goto label_2;
label_10:
    bl = 0;
label_9:
    eax = 1;
    eax = sys_exit (ebx);
    eax = 0;
    ecx = 0;
    ch++;
    cl++;
    edi = 0x8048550;
    do {
label_3:
        dl = *(ebp);
        edi++;
        ebp++;
        eax++;
        ecx--;
        if (ecx == 0) {
            goto label_13;
        }
        dl |= dl;
        if (dl == 0) {
            goto label_13;
        }
        if (dl == 0x5c) {
            goto label_14;
        }
        *(edi) = dl;
    } while (1);
label_14:
    ebp++;
    dl |= dl;
    if (dl != 0) {
        if (dl != 0x6e) {
            if (dl != 0x72) {
                if (dl != 0x74) {
                    if (dl != 0x62) {
                        if (dl != 0x61) {
                            fcn_0804823d ();
                            if (dl >= 0x61) {
                                dh = dl;
                                fcn_0804823a ();
                                if (dl < 0x61) {
                                    goto label_15;
                                }
                                ebp++;
                                dh <<= 3;
                                dh |= dl;
                                eax = fcn_0804823a ();
                                if (dh < 0) {
                                    goto label_15;
                                }
                                ebp++;
                                dh <<= 3;
                                dh |= dl;
                                dh = dl;
                                dh = 0xa;
                                dh = 0xd;
                                dh = 9;
                                dh = 8;
                            } else {
                            } else {
                            } else {
                            } else {
                            } else {
                            } else {
                                dh = 7;
                            }
                        }
                    }
                }
            }
        }
label_15:
        *(edi) = dh;
        goto label_3;
    }
label_13:
    edi = 0x8048551;
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    edx = 0;
    dh++;
    eax = 0;
label_4:
    dl = *(edi);
    edi++;
    if (dl != 0x5b) {
        goto label_16;
    }
    if (*((edi + 1)) != 0x2d) {
        goto label_16;
    }
    if (*((edi + 3)) != 0x5d) {
        goto label_16;
    }
    bl = *(edi);
    bh = *((edi + 2));
    edi += 4;
    if (bl <= bh) {
        goto label_17;
    }
    tmp_1 = bh;
    bh = bl;
    bl = tmp_1;
    do {
label_17:
        *(esi) = bl;
        eax++;
        esi++;
        edx--;
        if (edx == 0) {
            goto label_18;
        }
        bl++;
    } while (bl <= bh);
    goto label_19;
label_16:
    *(esi) = dl;
    edx--;
    if (edx != 0) {
        eax++;
        esi++;
label_19:
        __asm ("loop 0x80481fe");
        goto label_4;
    }
label_18:
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tr/ia32_elf/subject.exe @ 0x804823d */
#include <stdint.h>
 
void fcn_0804823d (void) {
    if (dl >= 0x30) {
        if (dl > 0x37) {
            goto label_0;
        }
        dl -= 0x30;
        return;
    }
label_0:
    __asm ("stc");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/tr/ia32_elf/subject.exe @ 0x804823a */
#include <stdint.h>
 
void fcn_0804823a (void) {
    dl = *(ebp);
}
