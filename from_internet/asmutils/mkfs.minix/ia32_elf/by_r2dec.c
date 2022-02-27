/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mkfs.minix/ia32_elf/subject.exe @ 0x8048092 */
#include <stdint.h>
 
int32_t entry0 (void) {
label_1:
    edx = 0x8048811;
    ecx = 0x1260;
    ebx = eax;
    eax = 0x36;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    eax = *(0x8048811);
    eax <<= 9;
    eax |= eax;
    if (eax == 0) {
        edx = 2;
        ecx = 0;
        eax = 0x13;
        eax = sys_lseek (ebx, ecx, 0x2);
    }
    if (eax < 0x1800) {
        goto label_0;
    }
    eax >>= 0xa;
    ecx = 0;
    edx = 0;
    eax = 0x13;
    eax = sys_lseek (ebx, ecx, edx);
    eax = 0x13;
    goto label_2;
    do {
label_0:
        ebx = 1;
        eax = 1;
        eax = sys_exit (0x1);
        ebx = 1;
        ebx = 1;
        ebx = 1;
        ebx |= ebx;
    } while (ebx == 0);
    if (*(ebx) != 0x692d) {
        goto label_3;
    }
    ebx = 1;
    ebx |= ebx;
    if (ebx == 0) {
        goto label_0;
    }
    eax = void (*0x8048374)() ();
    *(0x804880d) = eax;
    ebx |= ebx;
    if (ebx == 0) {
        goto label_0;
    }
label_3:
    ecx = 2;
    eax = 5;
    eax = sys_open (ebx, 0x2, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x8048809) = eax;
    *(0x8048805) = ebx;
    ebx = 5;
    ebx |= ebx;
    if (ebx == 0) {
        goto label_1;
    }
    eax = void (*0x8048374)() ();
label_2:
    if (eax < 6) {
        goto label_0;
    }
    *(0x8048811) = eax;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80483a1, 0x14);
    *(0x8048837) = 0x400;
    *(0x804883f) = 1;
    *(0x804883d) = 0x138f;
    *(0x8048839) = 0x10081c00;
    eax = *(0x804880d);
    eax |= eax;
    if (eax == 0) {
        eax = *(0x8048811);
        *(0x804882f) = ax;
        edx = 0;
        ecx = 0;
        cl = 3;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
    }
    eax += 0x1f;
    eax &= 0xffe0;
    *(0x804880d) = eax;
    *(0x804882d) = ax;
    edx = 0;
    ecx = 0;
    ch = 0x20;
    eax += ecx;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *(0x8048831) = ax;
    eax <<= 0xa;
    *(0x8048815) = eax;
    eax = *(0x8048811);
    ebx = eax;
    ebx >>= 5;
    eax -= ebx;
    eax--;
    eax--;
    ax -= *(0x8048831);
    ecx--;
    edx:eax = eax * ecx;
    eax++;
    ecx++;
    ecx++;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    ebx = eax;
    ebx -= eax;
    *(0x804881d) = eax;
    *(0x8048833) = bx;
    ebx <<= 0xa;
    *(0x8048819) = ebx;
    eax = 0x8048c2d;
    *(0x8048821) = eax;
    eax += *(0x8048815);
    *(0x8048825) = eax;
    ecx = *(0x8048805);
    esi = *(0x8048805);
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    esi--;
    esi -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xe);
    edi = 0x80487f5;
    ax = 0x203a;
    *(es:edi) = ax;
    es:edi += 2;
    eax = *(0x804880d);
    fcn_0804838b ();
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xed);
    eax = 4;
    eax = sys_write (ebx, 0x80483b5, 0x9);
    edi = 4;
    eax = *(0x804881d);
    fcn_0804838b ();
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xed, 0xed);
    eax = 4;
    eax = sys_write (ebx, 0x80483be, 0x7);
    edi = *(0x8048821);
    *(edi) = 3;
    ebx = *(0x8048815);
    ebx += edi;
    eax = *(0x804880d);
    eax >>= 3;
    edi += eax;
    al = 0xfe;
    *(es:edi) = al;
    es:edi++;
    al = 0xff;
    do {
        *(es:edi) = al;
        es:edi++;
    } while (edi < ebx);
    edi = *(0x8048825);
    ebx = *(0x804880d);
    ebx >>= 5;
    eax = 2;
    ax += *(0x8048831);
    ax += *(0x8048833);
    eax += ebx;
    *(0x8048829) = eax;
    *(0x8048835) = ax;
    edi = *(0x8048825);
    *(edi) = 3;
    ebx = 8;
    eax = *(0x804881d);
    eax++;
    edx = 0;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ebx = *(0x8048819);
    ebx += edi;
    edi += eax;
    al = 1;
    cl = dl;
    al <<= cl;
    al--;
    al = ~al;
    *(edi) |= al;
    edi++;
    eax = 0;
    eax--;
    do {
        memset (edi, eax, ecx);
    } while (edi <= ebx);
    edx = 0;
    dh = 4;
    eax = 4;
    eax = sys_write (0x8048809, 0x80483f5, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_4;
    }
    eax = 4;
    eax = sys_write (ebx, 0x804882d, edx);
    eax |= eax;
    if (eax < 0) {
        goto label_4;
    }
    edx += *(0x8048819);
    eax = 4;
    eax = sys_write (ebx, 0x8048821, 0x8048815);
    eax |= eax;
    if (eax < 0) {
        goto label_4;
    }
    ecx += edx;
    edi = ecx;
    ax = 0x41ed;
    *(es:edi) = ax;
    es:edi += 2;
    eax = 0x18;
    eax = sys_getuid16 ();
    *(es:edi) = ax;
    es:edi += 2;
    eax = 0;
    al = 0x40;
    memset (edi, eax, ecx);
    eax = 0xd;
    eax = sys_time (0xea);
    memset (edi, eax, ecx);
    eax = 0x2f;
    eax = sys_getgid16 ();
    *(es:edi) = al;
    es:edi++;
    al = 2;
    *(es:edi) = al;
    es:edi++;
    eax = *(0x8048829);
    *(es:edi) = ax;
    es:edi += 2;
    ebx = 0x2f;
    ecx = 0x2f;
    esi = *(0x804880d);
    esi >>= 5;
    do {
        eax = 4;
        eax = sys_write (ebx, ecx, 0x400);
        ecx = 0x80483f5;
        eax |= eax;
        if (eax < 0) {
            goto label_4;
        }
        esi--;
    } while (esi != 0);
    edx = 0x40;
    eax = 4;
    eax = sys_write (ebx, 0x80483d1, 0x40);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
label_4:
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x80483c5, 0xc);
    ebx = 1;
    eax = 1;
    eax = sys_exit (0x1);
    ecx = 0xa;
    esi = ebx;
    ebx = 0;
    eax = 0;
    do {
        bl = *(esi);
        esi++;
        bl -= 0x30;
        if (bl < 0) {
            goto label_5;
        }
        edx:eax = eax * ecx;
        eax += ebx;
    } while (1);
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/mkfs.minix/ia32_elf/subject.exe @ 0x804838b */
#include <stdint.h>
 
uint32_t fcn_0804838b (void) {
    ecx = 0;
    ebx = 0xa;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        ecx++;
        eax |= eax;
    } while (eax != 0);
    do {
        eax = edx;
        al += 0x30;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x804839a");
    } while (1);
}
