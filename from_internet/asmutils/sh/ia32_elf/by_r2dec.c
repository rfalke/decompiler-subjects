/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    *(0x805d702) = 0x2f2e;
    fcn_080481c8 ();
    fcn_08048212 ();
    edi = ebp;
    edi |= edi;
    if (edi != 0) {
        ecx = 0;
        eax = 5;
        eax = sys_open (0xed, ecx, edx);
        eax |= eax;
        if (eax == 0) {
            eax = 0x80492db;
            fcn_08048e1c ();
            ebx = 2;
            eax = 1;
            eax = sys_exit (0x2);
        }
        *(0x805db54) = eax;
        *(0x805b59c) = 0x804926a;
    } else {
        *(0x805db23) = 1;
        eax = 0x8049254;
        fcn_08048df5 ();
        *(0x805db54) = edi;
        fcn_08048266 ();
        edi = 0x804950e;
        *(edi) = 1;
        edx = 0;
        ebx = 0x16;
        eax = 0x43;
        eax = sys_sigaction (0x16, 0x804950e, edx);
        *(edi) = 1;
        ebx = 0x15;
        eax = 0x43;
        eax = sys_sigaction (0x15, ecx, edx);
        *(edi) = 0x80490e2;
        ebx = 2;
        eax = 0x43;
        eax = sys_sigaction (0x2, ecx, edx);
        *(edi) = 0x8049100;
        ebx = 0x14;
        eax = 0x43;
        eax = sys_sigaction (0x14, ecx, edx);
        eax = 0x14;
        eax = sys_getpid ();
        *(0x805db58) = eax;
        ecx = 0;
        eax = 0x39;
        eax = sys_setpgid (0xea, ecx);
        ebx = 2;
        eax = 0x36;
        eax = sys_ioctl (0x2, 0x5410, 0x805db58);
        eax = 0x18;
        eax = sys_getuid16 ();
        ebx = 0x8049264;
        if (eax == 0) {
            ebx = 0x8049267;
        }
        *(0x805b59c) = ebx;
    }
    eax = 0;
    *(0x805d668) = eax;
    *(0x805d66c) = eax;
    *(0x805d670) = eax;
    *(0x805d674) = eax;
    *(0x805d678) = eax;
    do {
label_0:
        eax = *(0x805b59c);
        goto label_2;
label_1:
        eax = 0x804926d;
label_2:
        fcn_08048df5 ();
        eax = fcn_080482ea ();
    } while (eax == 0);
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    ecx = *(0x805d6fa);
    ecx |= ecx;
    if (ecx == 0) {
        *(0x805d6fa) = esp;
        ecx = esp;
    }
    *(ecx)++;
    eax = *(ecx);
    *(0x805d6f6) = eax;
    ebx = 0;
    eax = 0x2d;
    eax = sys_brk (ebx);
    edi = eax;
    eax += edx;
    eax = 0x2d;
    eax = sys_brk (0xea);
    esi = 0x804959a;
    ecx = edx;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    edi--;
    *(edi) = 0;
    tmp_1 = eax;
    eax = edx;
    edx = tmp_1;
    eax = fcn_0804874f ();
    if (eax == 0) {
        goto label_0;
    }
    if (eax < 0) {
        goto label_1;
    }
    fcn_08048b8c ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x80481c8 */
#include <stdint.h>
 
int8_t fcn_080481c8 (void) {
    ebx = 0;
    eax = 0x2d;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    *(0x805d5a0) = eax;
    *(0x805d706) = 1;
    edx = eax;
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    esi = edi;
    fcn_0804823d ();
    ebx += ecx;
    ebx += 8;
    eax = 0x2d;
    eax = sys_brk (ebx);
    tmp_1 = edi;
    edi = edx;
    edx = tmp_1;
    *(edi) = 0x4c454853;
    *((edi + 4)) = 0x20223d4c;
    edi += 7;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    edi--;
    al = 0x22;
    *(es:edi) = al;
    es:edi++;
    al = 0;
    *(es:edi) = al;
    es:edi++;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x804823d */
#include <stdint.h>
 
int32_t fcn_0804823d (void) {
    ecx = 0;
    eax = 0;
    ecx--;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = -ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048212 */
#include <stdint.h>
 
void fcn_08048212 (void) {
    ebp |= ebp;
    if (ebp == 0) {
        goto label_0;
    }
    do {
        eax |= eax;
    } while (eax != 0);
    do {
label_0:
        eax |= eax;
        if (eax == 0) {
            goto label_1;
        }
        edx = *(0x805d706);
        *((edx*4 + 0x805d5a0)) = eax;
        edx++;
        *(0x805d706) = edx;
    } while (edx != 0x32);
label_1:
    return void (*ebx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048e1c */
#include <stdint.h>
 
uint32_t fcn_08048e1c (void) {
    __asm ("pushal");
    edi = eax;
    eax = fcn_0804823d ();
    ecx--;
    ecx--;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0xea, 0xec);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048df5 */
#include <stdint.h>
 
void fcn_08048df5 (void) {
    __asm ("pushal");
    edi = eax;
    fcn_0804823d ();
    ecx--;
    ecx--;
    fcn_08048e06 ();
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048e06 */
#include <stdint.h>
 
void fcn_08048e06 (void) {
    if (*(0x805db23) != 0) {
        edx = ecx;
        ecx = eax;
        ebx = 1;
        eax = 4;
        eax = sys_write (ebx, ecx, edx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048266 */
#include <stdint.h>
 
int32_t fcn_08048266 (void) {
    if (*(0x805db54) == 0) {
        *(0x805d6fe) = 0x20082008;
        ebx = 0;
        eax = 0x36;
        eax = sys_ioctl (ebx, 0x5401, 0x805d6cc);
        eax = *(0x805d6d8);
        eax &= 0xfffffff5;
        *(0x805d6d8) = eax;
        ebx = 0;
        eax = 0x36;
        eax = sys_ioctl (ebx, 0x5402, edx);
        0x805d6d8 = 0x36;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x80482ea */
#include <stdint.h>
 
void fcn_080482ea (void) {
    uint32_t var_4h;
    edi = 0x804959a;
    *(edi) = 0;
label_0:
    al = fcn_080482c6 ();
    if (al == 9) {
        goto label_10;
    }
    if (al == 0x1b) {
        goto label_11;
    }
    if (al == 8) {
        goto label_12;
    }
    if (al == 0x7f) {
        goto label_12;
    }
    if (al == 4) {
        goto label_13;
    }
    if (al == 0xc) {
        goto label_14;
    }
    eax = 0x805d6f3;
    ecx = 1;
    fcn_08048e06 ();
    al = *(0x805d6f3);
    if (al == 0xa) {
        goto label_15;
    }
    ah = 0;
    if (*(edi) == ah) {
        goto label_16;
    }
    do {
        tmp_0 = edi;
        edi = al;
        al = tmp_0;
        edi++;
        al |= al;
    } while (al != 0);
    *(edi) = ah;
    edi++;
    eax = 0x80494ff;
    ecx = 4;
    fcn_08048e06 ();
    eax = edi;
    ecx = 1;
    fcn_08048e06 ();
    eax = 0x805d6fe;
    ecx = 1;
    ax = fcn_08048e06 ();
    do {
        goto label_0;
label_16:
        *(edi) = ax;
        edi++;
    } while (1);
    do {
label_15:
        if (*(edi) == 0) {
            goto label_17;
        }
        edi++;
    } while (1);
label_17:
    *(edi) = 0xa;
    tmp_1 = eax;
    eax = edi;
    edi = tmp_1;
    eax -= 0x8049599;
    ebx = eax;
    ebx--;
    if (ebx == 0) {
        eax = 0;
    }
    return eax;
label_14:
    fcn_0804911e ();
    void (*0x8048155)() ();
label_12:
    if (edi == 0x804959a) {
        goto label_2;
    }
    if (*(edi) == 0) {
        goto label_18;
    }
    do {
        al = *(edi);
        edi++;
        *((edi - 2)) = al;
        al |= al;
    } while (al != 0);
    eax = 0x8049504;
    ecx = 5;
    fcn_08048e06 ();
    edi--;
    al = *(edi);
    *(0x805d6ff) = al;
    eax = 0x805d6ff;
    ecx = 2;
    fcn_08048e06 ();
    do {
label_1:
        goto label_0;
label_18:
        edi--;
        *(edi) = 0;
        *(0x805d6ff) = 0x20;
        eax = 0x805d6fe;
        ecx = 3;
        fcn_08048e06 ();
    } while (1);
label_11:
    edx = 2;
    eax = 3;
    eax = sys_read (0x805db54, 0x805d6f4, 0x2);
    if (*(ecx) == 0x445b) {
        goto label_19;
    }
    if (*(ecx) != 0x435b) {
        edx = 0x805d6f6;
        if (*(ecx) != 0x415b) {
            if (*(ecx) != 0x425b) {
                goto label_1;
            }
            *(edx)++;
            goto label_20;
        }
        if (*(edx) == 0) {
            goto label_2;
        }
        *(edx)--;
        goto label_20;
    }
    if (*(edi) == 0) {
        goto label_2;
    }
    eax = edi;
    ecx = 1;
    fcn_08048e06 ();
    edi++;
    goto label_1;
    do {
label_2:
        eax = 0x8049509;
        ecx = 1;
        fcn_08048e06 ();
        goto label_3;
label_19:
    } while (edi == 0x804959a);
    edi--;
    eax = 0x805d6fe;
    ecx = 1;
    fcn_08048e06 ();
label_3:
    goto label_0;
label_20:
    ebx = *(0x805d6fa);
    ebx |= ebx;
    if (ebx == 0) {
        goto label_2;
    }
    ecx = *(edx);
    if (ecx >= *(ebx)) {
        *(edx)--;
        goto label_2;
    }
    ecx++;
    ecx <<= 2;
    ebx -= ecx;
    edi = *(ebx);
    esi = *(ebx);
    fcn_0804823d ();
    edi = 0x804959a;
    ecx--;
    ebp--;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    edi--;
    eax = 0x80494fa;
    ecx = 5;
    fcn_08048e06 ();
    eax = *(0x805b59c);
    fcn_08048df5 ();
    eax = 0x804959a;
    ecx = ebp;
    fcn_08048e06 ();
    goto label_3;
    do {
        edx |= edx;
        if (edx != 0) {
            goto label_21;
        }
        edx = edi;
        goto label_21;
label_10:
        tmp_2 = edi;
        edi = esi;
        esi = tmp_2;
        edi = 0x804959a;
        eax = 0x804959a;
        *(0x805d90f) = 0;
        *(0x805db0d) = 0;
        *(0x805d90a) = edi;
        eax = fcn_0804823d ();
        ebx = 0x805d702;
        edx = 0;
label_4:
        edi--;
        if (edi == eax) {
            goto label_22;
        }
    } while (*(edi) == 0x2f);
label_21:
    if (*(edi) != 0x20) {
        goto label_4;
    }
    edi++;
    ebx = edi;
    edx |= edx;
    if (edx == 0) {
label_22:
        if (*(eax) == 0x2f) {
            edx |= edx;
            if (edx == 0) {
                edx = eax;
            }
            ebx = eax;
        } else {
            if (*(eax) == 0x2e) {
                edx |= edx;
                if (edx != 0) {
                    goto label_23;
                }
            }
            ebx = 0x805d702;
            edx = 0x805d702;
            edx++;
            *(0x805d90a) = edi;
        }
    } else {
label_23:
        edx++;
        *(0x805d90a) = edx;
        edx--;
    }
    eax = 0x6a;
    eax = sys_newstat (ebx, 0x805d68c);
    if (eax >= 0) {
        eax = *(0x805d694);
        eax &= 0x4000;
        if (eax != 0) {
            goto label_24;
        }
        eax = 0x8049509;
        ecx = 1;
        al = fcn_08048e06 ();
        goto label_0;
    }
label_24:
    al = 0;
    tmp_3 = edx;
    edx = al;
    al = tmp_3;
    tmp_4 = eax;
    eax = ebp;
    ebp = tmp_4;
    do {
        if (ebx == edx) {
            ebx++;
        }
        eax = 5;
        eax = sys_open (0x805d702, 0x10000, edx);
        eax |= eax;
        if (eax >= 0) {
            goto label_25;
        }
        ebx = 0x805d702;
    } while (1);
label_25:
    tmp_5 = eax;
    eax = ebp;
    ebp = tmp_5;
    tmp_6 = edx;
    edx = al;
    al = tmp_6;
    tmp_7 = edi;
    edi = esi;
    esi = tmp_7;
label_5:
    edx = 0;
    dh = 2;
    ecx = 0x805d70a;
    ebx = ebp;
    eax = 0;
    al = 0x8d;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax |= eax;
    if (eax == 0) {
        goto label_26;
    }
    eax += ecx;
    edx = 0;
    do {
        ecx += edx;
        edx = ecx;
        esi = *(0x805d90a);
        if (eax <= ecx) {
            goto label_27;
        }
        edx += 0xa;
        tmp_8 = edi;
        edi = edx;
        edx = tmp_8;
        al = fcn_0804824a ();
        esi--;
        tmp_9 = edi;
        edi = edx;
        edx = tmp_9;
        if (edx != esi) {
        }
        edx = *((ecx + 8));
    } while (1);
label_27:
    esi |= esi;
    if (esi == 0) {
        goto label_5;
    }
    if (*((esp + 4)) != 0) {
        goto label_28;
    }
    if (*(0x805d90f) != 0) {
        goto label_28;
    }
    tmp_10 = edi;
    edi = ebx;
    ebx = tmp_10;
    edi = 0x805d90f;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    tmp_11 = edi;
    edi = ebx;
    ebx = tmp_11;
    goto label_5;
label_6:
    eax = 0x80494fa;
    ecx = 5;
    al = fcn_08048e06 ();
    do {
        edi = *(0x805d90a);
    } while (ecx != 0);
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    esi = edi;
    __asm ("std");
    do {
        al = *(esi);
        esi++;
        if (esi == 0x804959a) {
            goto label_29;
        }
    } while (al != 0x20);
    esi++;
    esi++;
label_29:
    eax = 0x6a;
    eax = sys_newstat (0xe, 0x805d68c);
    if (eax >= 0) {
        eax = *(0x805d694);
        ebx = 0x4000;
        eax &= ebx;
        if (eax != ebx) {
            goto label_30;
        }
        edi--;
        *(edi) = 0x2f;
        edi++;
        edi++;
    }
label_30:
    eax = 0x6a;
    edi--;
    goto label_31;
label_7:
    goto label_28;
label_26:
    esi = 0x805d90f;
    if (*(esi) == 0) {
        goto label_32;
    }
    if (*(0x805db0d) == 0) {
        goto label_6;
    }
label_32:
    if (*(esi) != 0) {
        goto label_7;
    }
    esi = 0x805da0e;
    if (*(esi) != 0) {
        goto label_6;
    }
label_31:
    eax = 0x80494fa;
    ecx = 5;
    fcn_08048e06 ();
    eax = *(0x805b59c);
    fcn_08048df5 ();
    eax = 0x804959a;
    fcn_08048df5 ();
    eax = 6;
    eax = sys_close (0xeb);
    edi = 6;
    goto label_0;
label_8:
    *(0x805d90f) = 0;
    goto label_5;
label_28:
    if (*(0x805db0d) != 0) {
        goto label_33;
    }
    eax = 0x805d90f;
    if (*(eax) != 0) {
    }
    esi = *(esp);
    tmp_12 = edi;
    edi = ebx;
    ebx = tmp_12;
    ecx = esi;
    edi = 0x805da0e;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    tmp_13 = esi;
    esi = ecx;
    ecx = tmp_13;
    tmp_14 = edi;
    edi = ebx;
    ebx = tmp_14;
    esi--;
    *(esp) = esi;
    *(esi) = 0xa;
label_33:
    *(0x805db0d)++;
label_9:
    edx |= edx;
    if (edx == 0) {
        goto label_8;
    }
    esi = 0x805da0e;
    ebx = edx;
    if (*(ebx) == 0xa) {
        goto label_34;
    }
    ebx--;
    do {
label_34:
        ebx++;
        al = *(esi);
        esi++;
    } while (al == *(ebx));
    esi--;
    *(esi) = 0;
    tmp_15 = esi;
    esi = edi;
    edi = tmp_15;
    edi = edx;
    fcn_0804823d ();
    edi--;
    ecx--;
    *(edi) = 0xa;
    tmp_16 = esi;
    esi = edi;
    edi = tmp_16;
    eax = edx;
    fcn_08048e06 ();
    goto label_9;
label_13:
    fcn_080482ab ();
    eax = 0x80492d3;
    fcn_08048df5 ();
    eax = 1;
    eax = sys_exit (0x805db50);
    eax = 0xc;
    eax = sys_chdir (0x805b5a4);
    if (eax < 0) {
        eax = 0x80492bb;
        fcn_08048e1c ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x804874f */
#include <stdint.h>
 
void fcn_0804874f (void) {
    int32_t var_4h;
label_3:
    esi = 0x804959a;
    esi += *(0x805d674);
    ebx = *(0x805d668);
    ecx = eax;
    edx = *(0x805d66c);
    edi = 0x804a59a;
    ebp = *(0x805d678);
    edi += *(0x805d670);
    do {
label_1:
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_5;
        }
        if ((ebx & 1) == 0) {
            if (al == 0x23) {
                goto label_5;
            }
            if (al == 0x24) {
                goto label_6;
            }
            if (al == 9) {
                goto label_7;
            }
            if (al == 0xa) {
                goto label_5;
            }
            if (al == 0x20) {
                goto label_7;
            }
            if (al == 0x3e) {
                goto label_8;
            }
            if (al == 0x3c) {
                goto label_9;
            }
            if (al == 0x3f) {
                goto label_10;
            }
            if (al == 0x2a) {
                goto label_10;
            }
            if (al == 0x7c) {
                if (*(esi) == 0x7c) {
                    goto label_11;
                }
                if (*((esi - 2)) != 0x7c) {
                    goto label_12;
                }
            }
label_11:
            *((ebp*4 + 0x805b5a0)) = edi;
            ebp++;
            edx++;
            ebx |= 1;
        }
        if (al == 0x22) {
            ebx ^= 2;
        } else {
            if ((ebx & 2) == 0) {
                if (al != 9) {
                    if (al == 0xa) {
                        goto label_5;
                    }
                    if (al == 0x3e) {
                        goto label_8;
                    }
                    if (al == 0x3c) {
                        goto label_9;
                    }
                    if (al == 0x3f) {
                        goto label_10;
                    }
                    if (al == 0x2a) {
                        goto label_10;
                    }
                    if (al == 0x7c) {
                        if (*(esi) == 0x7c) {
                            goto label_13;
                        }
                        if (*((esi - 2)) != 0x7c) {
                            goto label_12;
                        }
                    }
label_13:
                    if (al != 0x20) {
                        goto label_14;
                    }
                }
                eax = 0;
                ebx &= 0xfffffffe;
            }
label_14:
            *(es:edi) = al;
            es:edi++;
        }
label_7:
        ecx--;
    } while (ecx != 0);
label_5:
    if ((ebx & 2) == 0) {
        eax = 0;
        *(es:edi) = al;
        es:edi++;
        if ((ebx & 0x10) == 0) {
            if ((ebx & 8) == 0) {
                goto label_2;
label_9:
                ebx |= 8;
                return eax;
label_8:
                eax = ebx;
                ebx |= 0x10;
                if (eax == ebx) {
                    ebx |= 0x20;
                }
                return eax;
            }
            ebp--;
            edx--;
            ecx = 0;
            ch = 0x80;
            eax = 5;
            eax = sys_open (0xeb00805b5a0, ecx, edx);
            *(0x805d67c) = eax;
        } else {
            ebp--;
            edx--;
            ecx = 0x8041;
            if ((ebx & 0x20) != 0) {
                ecx |= 0x400;
            } else {
                ecx |= 0x200;
            }
            eax = 5;
            eax = sys_open (0xeb00805b5a0, ecx, 0x1a4);
            *(0x805d680) = eax;
        }
label_2:
        eax = 0;
        *((ebp*4 + 0x805b5a0)) = eax;
        *(0x805d668) = eax;
        *(0x805d66c) = eax;
        *(0x805d670) = eax;
        *(0x805d674) = eax;
        *(0x805d678) = eax;
        eax = edx;
        return eax;
    }
    eax = 0;
    *(0x805d674) = eax;
    eax--;
    *(0x805d668) = ebx;
    edi -= 0x804a59a;
    *(0x805d66c) = edx;
    *(0x805d670) = edi;
    *(0x805d678) = ebp;
    return eax;
label_6:
    edi = esi;
    esi = 0x805d5a0;
    ecx = *(edi);
    edx = *(edi);
    do {
label_0:
        eax = *(esi);
        esi += 4;
        eax |= eax;
        if (eax == 0) {
            goto label_15;
        }
    } while (*(eax) != dl);
    esi = eax;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    if (*((edi - 1)) > 0x20) {
        esi = edi;
        goto label_0;
    }
    edx = edi;
    edx = edi;
    *((ebp*4 + 0x805b5a0)) = esi;
    ebp++;
    esi = edi;
    edx = edi;
    edx = edi;
    edx++;
    goto label_16;
label_15:
    esi = edi;
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_17;
        }
    } while (al > 0x20);
label_17:
    edx = edi;
label_16:
    ecx = edi;
    goto label_1;
label_12:
    eax = 0;
    *(es:edi) = al;
    es:edi++;
    void (*0x80488d8)() ();
    goto label_2;
    esi -= 0x804959a;
    *(0x805d674) = esi;
    eax = 0x2a;
    eax = sys_pipe (0x805d684);
    eax = *(0x805d688);
    *(0x805d680) = eax;
    eax = 0x2a;
    *(0x805db22) = 1;
    fcn_08048b8c ();
    eax = *(0x805d684);
    *(0x805d67c) = eax;
    goto label_3;
label_10:
    *(0x805d90f) = 0;
    if ((ebx & 1) == 0) {
        goto label_18;
    }
    ebx &= 0xfffffffe;
    __asm ("std");
    esi = edi;
    edi = *((ebp*4 + 0x805b59c));
    do {
        if (esi == edi) {
            goto label_19;
        }
        al = *(esi);
        esi++;
    } while (al != 0x2f);
    ecx = esi;
    ecx -= edi;
    ecx++;
    esi = edi;
    edi = 0x805d90f;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    al = 0;
    *(es:edi) = al;
    es:edi++;
    goto label_20;
label_19:
    esi--;
label_20:
    esi++;
    edi = 0x805da0e;
    ecx = edi;
    ecx -= esi;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    *((ebp*4 + 0x805b5a0)) = edi;
    al = 0;
    *(es:edi) = al;
    es:edi++;
    edi = ecx;
    esi = ecx;
    eax = ecx;
    edx--;
    ebp--;
    edi = *((ebp*4 + 0x805b5a0));
    __asm ("pushal");
    edi = *((ebp*4 + 0x805b5a4));
    ebx = 0x805d90f;
    if (*(ebx) == 0) {
        ebx = 0x805d702;
        goto label_21;
label_18:
        __asm ("pushal");
        edi = 0x805da0e;
        ebx = 0x805d702;
    }
label_21:
    *(es:edi) = al;
    es:edi++;
    do {
        al = *(esi);
        esi++;
        if (al == 0xa) {
            goto label_22;
        }
        if (al == 9) {
            goto label_22;
        }
        if (al == 0x20) {
            goto label_22;
        }
        *(es:edi) = al;
        es:edi++;
        *((ebp + 0x1c))--;
    } while (1);
label_22:
    esi--;
    *((ebp + 8)) = esi;
    *((ebp + 0x20)) = eax;
    al = 0;
    *(es:edi) = al;
    es:edi++;
    eax = 5;
    eax = sys_open (ebx, 0x10000, edx);
    ebx = eax;
    eax |= eax;
    if (eax >= 0) {
        goto label_23;
    }
    eax = 5;
    __asm ("popal");
    goto label_1;
    do {
label_23:
        edx = 0;
        dh = 2;
        ecx = 0x805d70a;
        eax = 0;
        al = 0x8d;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax |= eax;
        if (eax == 0) {
            goto label_24;
        }
        eax += ecx;
        edx = 0;
label_4:
        ecx += edx;
        edx = ecx;
        esi = 0x805da0e;
    } while (eax <= ecx);
    edx += 0xa;
    tmp_0 = edi;
    edi = edx;
    edx = tmp_0;
    eax = fcn_0804824a ();
    edi--;
    esi--;
    eax = *((esp + 4));
    if (*(esi) != al) {
        goto label_25;
    }
    al = fcn_08048af2 ();
    if (*(esi) != al) {
        goto label_25;
    }
    edi = *((ebp + 4));
    *((ebp + 0x18))++;
    esi = *((ebp + 0xc));
    *((esi*4 + 0x805b5a0)) = edi;
    esi++;
    *((ebp + 0xc)) = esi;
    esi = edx;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
        al |= al;
    } while (al != 0);
    *((ebp + 4)) = edi;
label_25:
    edx = *((ecx + 8));
    goto label_4;
label_24:
    eax = 6;
    eax = sys_close (ebx);
    __asm ("popal");
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048b8c */
#include <stdint.h>
 
int32_t fcn_08048b8c (void) {
    ebx = 0x8049394;
    do {
        edi = *(0x805b5a0);
        esi = *(ebx);
        if (esi == 0) {
            goto label_2;
        }
        fcn_0804824a ();
        if (ecx == 0) {
            goto label_3;
        }
        ebx += 0xc;
    } while (1);
label_3:
    eax = *((ebx + 8));
    if (eax != 0) {
        uint32_t (*ebx + 4)() ();
    }
label_2:
    fcn_080482ab ();
    eax = 2;
    eax = sys_fork (ebx);
    if (eax != 0) {
        goto label_4;
    }
    if (*(0x805db23) != 0) {
        eax = 0x14;
        eax = sys_getpid ();
        edx = 0x805db58;
        *(edx) = eax;
        ecx = 0;
        eax = 0x39;
        eax = sys_setpgid (0xea, ecx);
        ebx = 2;
        eax = 0x36;
        eax = sys_ioctl (0x2, 0x5410, edx);
        *(0x804950e) = 0;
        edx = 0;
        ebx = 2;
        eax = 0x43;
        eax = sys_sigaction (0x2, 0x804950e, edx);
        ebx = 0x14;
        eax = 0x43;
        eax = sys_sigaction (0x14, ecx, edx);
    }
    eax = 0;
    if (eax != *(0x805d680)) {
        ecx = 1;
        eax = 0x3f;
        eax = sys_dup2 (0x805d680, 0x1);
        eax = 6;
        eax = sys_close (ebx);
    }
    eax = 0;
    if (eax != *(0x805d67c)) {
        ecx = 0;
        eax = 0x3f;
        eax = sys_dup2 (0x805d67c, ecx);
        eax = 6;
        eax = sys_close (ebx);
    }
    edi = *(0x805b5a0);
    fcn_0804823d ();
    edi = *(0x805b5a0);
    al = 0x2f;
    __asm ("repne scasb al, byte es:[edi]");
    if (ecx != 0) {
        eax = 0xb;
        eax = sys_execve (0x805b5a0, 0x805b5a0, 0x805d5a0, esi);
        goto label_5;
    }
    esi = 0x80494bd;
label_0:
    edi = 0x805a59a;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0);
    edi--;
    al = 0x2f;
    *(es:edi) = al;
    es:edi++;
    esi = *(0x805b5a0);
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0);
    eax = 0xb;
    eax = sys_execve (0x805a59a, 0x805b5a0, 0x805d5a0, esi);
    ebp--;
    if (ebp != 0) {
        goto label_0;
    }
label_5:
    eax = *(0x805b5a0);
    fcn_08048e1c ();
    eax = 0x8049270;
    fcn_08048e1c ();
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
label_4:
    *(0x805db24) = eax;
    ecx = *(0x805d680);
    ebx |= ebx;
    if (ebx != 0) {
        eax = 6;
        eax = sys_close (0x805d67c);
    }
    if (ecx != 1) {
        ecx |= ecx;
        if (ecx == 0) {
            goto label_6;
        }
        eax = 6;
        eax = sys_close (0xec);
    }
label_6:
    eax = 0;
    *(0x805d67c) = eax;
    *(0x805d680) = eax;
    eax = *(0x805db24);
    if (*(0x805db22) != 0) {
        goto label_7;
    }
    do {
label_1:
        esi = 0;
        edx = 2;
        eax = 0x72;
        eax = sys_wait4 (0xffffffff, 0x805db50, 0x2, esi);
    } while (eax < 0);
    if (*(0x805db24) != eax) {
        fcn_08048b38 ();
        goto label_1;
    }
    *(0x805db24) = 0;
    if (*(0x805db23) != 0) {
        if (*(0x805db50) != 0x7f) {
            goto label_8;
        }
label_7:
        ebx = 0;
        eax = fcn_08048dd5 ();
        edi |= edi;
        if (edi == 0) {
            eax = syscall_3h (eax, ebx, ecx, edx, esi, edi, edp);
        }
        *(edi) = eax;
        edi -= 0x805db28;
        eax = edi;
        eax >>= 2;
        al += 0x30;
        ah = 0xa;
        *(0x805db0e) = ax;
        if (*(0x805db22) != 0) {
            goto label_8;
        }
        eax = 0x80492ee;
        fcn_08048df5 ();
        eax = 0x805db0e;
        ecx = 2;
        fcn_08048e06 ();
    }
label_8:
    fcn_080482ab ();
    eax = 0x14;
    eax = sys_getpid ();
    *(0x805db58) = eax;
    ecx = 0;
    eax = 0x39;
    eax = sys_setpgid (0xea, ecx);
    ebx = 2;
    eax = 0x36;
    eax = sys_ioctl (0x2, 0x5410, 0x805db58);
    *(0x805db22) = 0;
    return void (*0x8048266)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x80482c6 */
#include <stdint.h>
 
int8_t fcn_080482c6 (void) {
    edx = 1;
    ecx = 0x805d6f3;
    ebx = *(0x805db54);
    eax = 3;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        void (*0x8048ee4)() ();
    }
    if (eax == 0) {
        void (*0x8048ee4)() ();
    }
    al = *(ecx);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x804911e */
#include <stdint.h>
 
int32_t fcn_0804911e (void) {
    eax = 0x8049129;
    fcn_08048df5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x804824a */
#include <stdint.h>
 
void fcn_0804824a (void) {
    fcn_0804823d ();
    edx = ecx;
    edi = esi;
    fcn_0804823d ();
    if (ecx < edx) {
        ecx = edx;
    }
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048af2 */
#include <stdint.h>
 
void fcn_08048af2 (void) {
    esi++;
    do {
label_0:
        if (al == 0x2a) {
            al = fcn_08048b1b ();
            if (al == 0x2a) {
                goto label_1;
            }
            goto label_2;
        }
        if (al != 0x3f) {
            goto label_3;
        }
        edi++;
        al = *(esi);
        esi++;
    } while (1);
label_3:
    ah = *(edi);
    eax |= eax;
    if (eax != 0) {
        if (ah == al) {
            goto label_1;
        }
    }
label_2:
    return;
label_1:
    al = *(esi);
    esi++;
    edi++;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048b1b */
#include <stdint.h>
 
void fcn_08048b1b (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_0;
        }
    } while (al == 0x2a);
    do {
        ah = *(edi);
        if (al == ah) {
            return al;
        }
        ah |= ah;
        if (ah == 0) {
            goto label_1;
        }
        edi++;
    } while (1);
label_1:
    ah++;
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048dd5 */
#include <stdint.h>
 
void fcn_08048dd5 (void) {
    esi = 0x805db28;
    do {
        if (esi >= 0x805db50) {
            goto label_0;
        }
        eax = *(esi);
        esi += 4;
    } while (eax != ebx);
    edi = esi;
    edi -= 4;
    do {
        eax = esi;
        return;
label_0:
        edi = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x80482ab */
#include <stdint.h>
 
void fcn_080482ab (void) {
    if (*(0x805db54) == 0) {
        edx = 0x805d6cc;
        ecx = 0x5402;
        ebx = 0;
        eax = 0x36;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048b38 */
#include <stdint.h>
 
uint32_t fcn_08048b38 (void) {
    if (*(0x805db50) == 0x7f) {
        ebx = 0;
        eax = fcn_08048dd5 ();
        edi |= edi;
        if (edi == 0) {
            eax = syscall_3h (eax, ebx, ecx, edx, esi, edi, edp);
        }
        *(edi) = eax;
        edi -= 0x805db28;
        eax = edi;
        eax >>= 2;
        ah = 0xa;
        al += 0x30;
        *(0x805db0e) = ax;
        eax = 0x80492ee;
        fcn_08048df5 ();
        eax = 0x805db0e;
        ecx = 2;
        eax = fcn_08048e06 ();
    }
    ebx = eax;
    eax = fcn_08048dd5 ();
    edi |= edi;
    if (edi != 0) {
        eax = 0;
        *(edi) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sh/ia32_elf/subject.exe @ 0x8048fea */
#include <stdint.h>
 
int32_t fcn_08048fea (void) {
    do {
        fcn_08048df5 ();
        return;
        eax = 0x8049308;
    } while (1);
}
