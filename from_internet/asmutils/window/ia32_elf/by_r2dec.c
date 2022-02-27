/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x80480dd */
#include <stdint.h>
 
int16_t entry0 (void) {
    fcn_080481fe ();
    edx = *(0x8048343);
    ecx = 0;
    ebx = 0x8051f8f;
    fcn_0804830a ();
    ax = 0x1bb0;
    ecx = edx;
    edi = 0x804834f;
    do {
        *(es:edi) = ax;
        ecx--;
        es:edi += 2;
    } while (ecx != 0);
    fcn_08048160 ();
    edx = *(0x8048343);
    ecx = 0;
    fcn_08048318 ();
    do {
label_0:
        edx = 1;
        ebx = 0;
        eax = 3;
        eax = sys_read (0x804834f, 0x804834b, 0x1);
    } while (eax < 0);
    al = *(0x804834b);
    if (al == 0x1b) {
        goto label_1;
    }
    if (al != 0xd) {
        goto label_0;
    }
label_1:
    edx = *(0x8048343);
    ecx = 0;
    ebx = 0x8051f8f;
    fcn_08048318 ();
    return fcn_080482a7 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x80481fe */
#include <stdint.h>
 
uint32_t fcn_080481fe (void) {
    __asm ("pushal");
    ecx = 2;
    ebx = 0x80481f3;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    *(0x8048347) = eax;
    if (eax >= 0) {
        edx = 4;
        eax = 3;
        eax = sys_read (0xea, 0x804833f, 0x4);
        eax = *(ecx);
        ax = al * ah;
        *(0x8048343) = eax;
        ecx = 4;
        ebx = 0;
        eax = 0x37;
        eax = sys_fcntl (ebx, 0x4, 0x800);
        ebx = 0;
        eax = 0x36;
        eax = sys_ioctl (ebx, 0x5401, 0x805bbf3);
        eax = 0x36;
        eax = sys_ioctl (ebx, ecx, 0x805bbcf);
        *(0x805bbdb) &= 0xfffffff4;
        *(0x805bbd3) |= 5;
        *(0x805bbcf) &= 0xfffffacf;
        *(0x805bbe5) = 0;
        *(0x805bbe6) = 1;
        ebx = 0;
        eax = 0x36;
        eax = sys_ioctl (ebx, 0x5402, 0x805bbcf);
        __asm ("popal");
        return eax;
    }
    ebx = 0;
    eax = 4;
    eax = sys_write (ebx, 0x80481e8, 0x16);
    return void (*0x8048159)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x8048159 */
#include <stdint.h>
 
void fcn_08048159 (void) {
    ebx = eax;
    eax = 1;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x804830a */
#include <stdint.h>
 
uint32_t fcn_0804830a (void) {
    __asm ("pushal");
    eax = fcn_08048326 ();
    eax = 0;
    al = 0xb4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x8048326 */
#include <stdint.h>
 
void fcn_08048326 (void) {
    fcn_080482f0 ();
    esi = edi + 4;
    esi -= 0x804834f;
    ecx = ebx;
    edx <<= 1;
    ebx = *(0x8048347);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
int32_t fcn_080482f0 (void) {
    eax = ecx;
    ax = al * *(0x8048340);
    edi = eax;
    eax = (int32_t) ch;
    edi += eax;
    edi <<= 1;
    edi += 0x804834f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x8048160 */
#include <stdint.h>
 
int16_t fcn_08048160 (void) {
    ecx = 0x201;
    fcn_080482f0 ();
    ecx = 0x40;
    ax = 0x1db;
    do {
        *(es:edi) = ax;
        ecx--;
        es:edi += 2;
    } while (ecx != 0);
    ecx = 0xa;
label_0:
    ecx += 0x201;
    fcn_080482f0 ();
    ax = 0xdd;
    *(es:edi) = ax;
    es:edi += 2;
    ecx = 0x3e;
    al = 0x20;
    *(es:edi) = ax;
    ecx--;
    es:edi += 2;
    al = 0xde;
    *(es:edi) = ax;
    es:edi += 2;
    al = 3;
    edi++;
    *(es:edi) = al;
    es:edi++;
    do {
        edi++;
    } while (ecx != 0);
    *(es:edi) = al;
    es:edi++;
    ecx = 0x3e;
    __asm ("loop 0x8048177");
    goto label_0;
    ecx = 0x20c;
    fcn_080482f0 ();
    ecx = 0x40;
    ax = 0x1db;
    *(es:edi) = ax;
    ecx--;
    es:edi += 2;
    al = 3;
    edi++;
    *(es:edi) = al;
    es:edi++;
    edi++;
    *(es:edi) = al;
    es:edi++;
    ecx = 0x40d;
    al = fcn_080482f0 ();
    ecx = 0x40;
    do {
        edi++;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x80481c5");
    } while (1);
    esi = 0x804804c;
    fcn_080482c6 ();
    esi = 0x804807c;
    fcn_080482c6 ();
    esi = 0x80480bf;
    fcn_080482c6 ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x8048318 */
#include <stdint.h>
 
uint32_t fcn_08048318 (void) {
    __asm ("pushal");
    eax = fcn_08048326 ();
    eax = 0;
    al = 0xb5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x80482a7 */
#include <stdint.h>
 
void fcn_080482a7 (void) {
    __asm ("pushal");
    edx = 0x805bbf3;
    ecx = 0x5402;
    ebx = 0;
    eax = 0x36;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax = 6;
    eax = sys_close (0x8048347);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/window/ia32_elf/subject.exe @ 0x80482c6 */
#include <stdint.h>
 
void fcn_080482c6 (void) {
    __asm ("pushal");
    eax = 0;
    ah = 7;
    do {
label_0:
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_1;
        }
        if (al == 1) {
            goto label_2;
        }
        if (al != 2) {
            goto label_3;
        }
        ax = *(esi);
        esi += 2;
        ecx = eax;
        fcn_080482f0 ();
    } while (1);
label_2:
    al = *(esi);
    esi++;
    ah = al;
    goto label_0;
label_3:
    *(es:edi) = ax;
    es:edi += 2;
    goto label_0;
label_1:
    __asm ("popal");
}
