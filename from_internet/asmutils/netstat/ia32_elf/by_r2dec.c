/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80482b4 */
#include <stdint.h>
 
void entry0 (void) {
    ebx--;
    if (ebx == 0) {
        goto label_1;
    }
    do {
label_0:
        ebx |= ebx;
        if (ebx == 0) {
            goto label_1;
        }
    } while (*(ebx) != 0x2d);
    ebx++;
    if (*(ebx) != 0x2d) {
        void (*0x8048364)() ();
        goto label_0;
    }
    ebx++;
    fcn_080483e9 ();
    goto label_0;
label_1:
    fcn_08048412 ();
    if (*(0x8048916) != 0) {
        ecx = 0x804809d;
        edx = 0x1b;
        fcn_0804845b ();
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804810c, 0x43);
        fcn_080484b0 ();
    }
    if (*(0x8048915) != 0) {
        ecx = 0x80480b8;
        edx = 0x1a;
        fcn_0804845b ();
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804814f, 0x50);
        if (*(0x8048915) == 0) {
            goto label_2;
        }
        ecx = 6;
        esi = 0x8048097;
        edi = 0x8049b0d;
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
        edi = 0x80486cd;
        fcn_08048553 ();
    }
label_2:
    eax = 1;
    eax = sys_exit (0x8048076);
    do {
    } while (ecx != 0);
    ecx = 6;
    ebx--;
    do {
        ebx++;
        if (*(ebx) == 0) {
            goto label_3;
        }
        if (*(ebx) == 0x61) {
            *(0x8048914)++;
            *(0x8048912) = 0xa;
            *(0x8048913)++;
        }
        if (*(ebx) == 0x6c) {
            if (eax != 0) {
                goto label_4;
            }
            *(0x8048912) = 0xa;
            *(0x8048913) = 0;
        }
label_4:
        if (*(ebx) == 0x74) {
            *(0x8048918)++;
            *(0x804891b)++;
        }
        if (*(ebx) == 0x75) {
            *(0x8048919)++;
            *(0x804891b)++;
        }
        if (*(ebx) == 0x77) {
            *(0x804891a)++;
            *(0x804891b)++;
        }
        if (*(ebx) == 0x70) {
            *(0x8048910)++;
        }
        __asm ("loop 0x804836a");
    } while (1);
label_3:
    ecx = 6;
    eax = 6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80483e9 */
#include <stdint.h>
 
void fcn_080483e9 (void) {
    if (*(ebx) == 0x78696e75) {
        *(0x8048915)++;
        *(0x8048917)++;
    }
    if (*(ebx) == 0x74656e69) {
        *(0x8048916)++;
        *(0x8048917)++;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x8048412 */
#include <stdint.h>
 
void fcn_08048412 (void) {
    if (*(0x804891b) == 0) {
        *(0x8048918)++;
        *(0x8048919)++;
        *(0x804891a)++;
    }
    if (*(0x8048914) == 0) {
        if (*(0x8048912) != 0) {
            goto label_0;
        }
        *(0x8048913)++;
    }
label_0:
    if (*(0x8048917) == 0) {
        *(0x8048915)++;
        *(0x8048916)++;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x804845b */
#include <stdint.h>
 
void fcn_0804845b (void) {
    ebx = 1;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (*(0x8048914) != 0) {
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x80480f1, 0x1b);
    } else {
        if (*(0x8048913) != 0) {
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x80480e2, 0xf);
        } else {
            ebx = 1;
            eax = 4;
            eax = sys_write (0x1, 0x80480d2, 0x10);
        }
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80484b0 */
#include <stdint.h>
 
void fcn_080484b0 (void) {
    if (*(0x8048918) == 0) {
        goto label_0;
    }
    ecx = 6;
    esi = 0x8048085;
    edi = 0x8049aca;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    ebx = 0x804804c;
    edi = 0x8048639;
    fcn_08048553 ();
label_0:
    if (*(0x8048919) != 0) {
        ecx = 6;
        esi = 0x804808b;
        edi = 0x8049aca;
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
        ebx = 0x804805a;
        edi = 0x8048639;
        fcn_08048553 ();
    }
    if (*(0x804891a) == 0) {
        goto label_1;
    }
    do {
        ecx = 6;
    } while (ecx != 0);
    esi = 0x8048091;
    edi = 0x8049aca;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ebx = 0x8048068;
    edi = 0x8048639;
    fcn_08048553 ();
label_1:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x8048553 */
#include <stdint.h>
 
void fcn_08048553 (void) {
    __asm ("pushal");
    ecx = 0;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0) {
        ebx = eax;
        fcn_08048568 ();
    }
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x8048568 */
#include <stdint.h>
 
int32_t fcn_08048568 (void) {
label_0:
    __asm ("pushal");
    eax = 0x20;
    ecx = 0;
    ch = 1;
    edi = 0x804991c;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
    esi = 0x804991c;
    do {
        edx = 1;
        eax = 3;
        eax = sys_read (ebx, 0xe, 0x1);
        if (eax <= 0) {
            goto label_1;
        }
        al = *(esi);
        esi++;
        if (eax == 0xa) {
            goto label_2;
        }
    } while (1);
label_2:
    if (*(0x804991c) == 0x6c732020) {
        goto label_0;
    }
    if (*(0x804991c) == 0x206d754e) {
        goto label_0;
    }
    void (*edi)() ();
    fcn_080485b8 ();
    goto label_0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80485b8 */
#include <stdint.h>
 
void fcn_080485b8 (void) {
    __asm ("pushal");
    if (*(0x8049b5d) != 0xa) {
        if (*(0x8049b0d) == 0x78696e75) {
            if (*(0x8049b5d) != 1) {
                goto label_0;
            }
            ebx = *(0x8049b63);
            ebx &= 0x10000;
            if (ebx == 0) {
                goto label_0;
            }
        } else {
            if (*(0x8049b5d) != 0) {
                goto label_0;
            }
        }
    }
    if (*(0x8048912) == 0) {
        goto label_1;
label_0:
        if (*(0x8048913) == 0) {
            goto label_1;
        }
    }
    if (*(0x8049b62) == 0) {
        ecx = 0x8049aca;
        edx = 0x43;
    } else {
        if (*(0x8049b62) != 1) {
            goto label_1;
        }
    }
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8049b0d, 0x50);
label_1:
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80488a8 */
#include <stdint.h>
 
void fcn_080488a8 (void) {
    fcn_080488c4 ();
    *(0x8049b5e) = edx;
    esi = 0x8049b5e;
    fcn_080488ec ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80488c4 */
#include <stdint.h>
 
uint32_t fcn_080488c4 (void) {
    eax = fcn_080487f8 ();
    edx = eax;
    edx <<= 0x18;
    eax = fcn_080487f8 ();
    eax <<= 0x10;
    edx += eax;
    eax = fcn_080487f8 ();
    eax <<= 8;
    edx += eax;
    eax = fcn_080487f8 ();
    edx += eax;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80487f8 */
#include <stdint.h>
 
int32_t fcn_080487f8 (void) {
    eax = 0;
    ebx = 0;
    ax = *(esi);
    esi += 2;
    ecx = 2;
    ebx = eax;
    ebx &= 0xff;
    do {
        if (ebx <= 0x39) {
            ebx -= 0x30;
        } else {
            if (ebx <= 0x5a) {
                ebx -= 0x37;
            } else {
                ebx -= 0x57;
            }
        }
        ecx--;
        if (ecx == 0) {
            goto label_0;
        }
        ebx <<= 4;
        edx = ebx;
        eax &= 0xff00;
        eax >>= 8;
        ebx = eax;
    } while (1);
label_0:
    edx += ebx;
    eax = edx;
    edx = 2;
    ecx = 2;
    ebx = 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x80488ec */
#include <stdint.h>
 
void fcn_080488ec (void) {
    ecx = 4;
    eax = 0;
    do {
        al = *(esi);
        esi++;
        edx = 0;
        fcn_08048842 ();
        ecx--;
        if (ecx == 0) {
            goto label_0;
        }
        eax = 0x2e;
        *(es:edi) = al;
        es:edi++;
    } while (1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x8048884 */
#include <stdint.h>
 
void fcn_08048884 (void) {
    fcn_0804886c ();
    edx = 0;
    fcn_08048842 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x804886c */
#include <stdint.h>
 
uint32_t fcn_0804886c (void) {
    eax = fcn_080487f8 ();
    eax <<= 8;
    edx = eax;
    eax = fcn_080487f8 ();
    edx += eax;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x8048842 */
#include <stdint.h>
 
void fcn_08048842 (void) {
    do {
        eax |= eax;
        if (eax == 0) {
            edx |= edx;
            if (edx == 0) {
                goto label_0;
            }
            goto label_1;
        }
        edx = 0;
        ebx = 0xa;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        fcn_08048842 ();
    } while (1);
label_0:
    eax = edx;
    eax += 0x30;
    *(es:edi) = al;
    es:edi++;
label_1:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/netstat/ia32_elf/subject.exe @ 0x8048895 */
#include <stdint.h>
 
void fcn_08048895 (void) {
    fcn_080488c4 ();
    edx = 0;
    fcn_08048842 ();
}
