/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x8048057 */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
label_1:
        ebx = *(0x804826f);
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebp = 0;
        *(0x804826f) = 1;
        ebx = 1;
        ebx--;
    } while (ebx == 0);
    esi = 1;
    do {
        edi = 1;
        if (*(edi) != 0x712d) {
            goto label_4;
        }
        al |= 1;
label_0:
        ebx--;
    } while (1);
label_4:
    if (*(edi) == 0x632d) {
        al |= 4;
        goto label_0;
    }
    if (*(edi) == 0x622d) {
        al |= 0x80;
        goto label_0;
    }
    if (*(edi) == 0x762d) {
        al |= 2;
        goto label_0;
    }
    *(0x8048274) = al;
    ebx--;
    if (ebx == 0) {
        goto label_3;
    }
    *(0x804825b) = ebx;
label_2:
    ebx = 1;
    ebx |= ebx;
    if (ebx == 0) {
        goto label_1;
    }
    eax = 0;
    *(0x8048263) = eax;
    *(0x8048267) = eax;
    *(0x804825f) = ebx;
    ecx = 0;
    eax = 5;
    eax = sys_open (ebx, ecx, edx);
    if (eax < 0) {
        goto label_2;
    }
label_3:
    esi = 0x8048285;
    fcn_080481d7 ();
    if (*(0x8048273) == 0) {
        goto label_5;
    }
    if ((*(0x8048274) & 4) == 0) {
        goto label_2;
    }
    fcn_0804813b ();
    fcn_08048190 ();
    goto label_2;
label_5:
    eax = fcn_0804821c ();
    edx = *(0x8048274);
    bh = (eax == 0) ? 1 : 0;
    bl = ((dl & 2) == 0) ? 1 : 0;
    bl ^= bh;
    if ((dl & 2) == 0) {
        goto label_3;
    }
    *(0x804826f) = 0;
    if ((dl & 1) != 0) {
        goto label_3;
    }
    *(0x8048263)++;
    if ((dl & 4) != 0) {
        goto label_3;
    }
    fcn_0804813b ();
    fcn_08048168 ();
    eax = fcn_0804824a ();
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xea);
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x80481d7 */
#include <stdint.h>
 
int8_t fcn_080481d7 (void) {
    __asm ("pushal");
    *(0x8048273) = 1;
    0x804826b = 0x8048267;
    do {
        edx = 1;
        eax = 3;
        eax = sys_read (0xeb, 0x8048273, 0x1);
        if (eax != edx) {
            goto label_0;
        }
        *(0x8048267)++;
        al = *(0x8048273);
        *(esi) = al;
        esi++;
    } while (al != 0xa);
    *(esi) = 0;
    *(0x8048273) = 0;
label_0:
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x804813b */
#include <stdint.h>
 
uint32_t fcn_0804813b (void) {
    if (*(0x804825b) > 1) {
        __asm ("pushal");
        esi = *(0x804825f);
        eax = fcn_0804824a ();
        *((esi + eax)) = 0x3a;
        eax++;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xe, 0xea);
        *((esi + eax - 1)) = 0;
        __asm ("popal");
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x804824a */
#include <stdint.h>
 
int32_t fcn_0804824a (void) {
    edi = esi;
    eax = esi;
    edi--;
    do {
        edi++;
    } while (*(edi) != 0);
    tmp_0 = eax;
    eax = edi;
    edi = tmp_0;
    eax -= edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x8048190 */
#include <stdint.h>
 
int32_t fcn_08048190 (void) {
    __asm ("pushal");
    eax = *(0x8048263);
    fcn_080481af ();
    *(edi) = 0xa;
    edx -= esi;
    edx++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xed);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x80481af */
#include <stdint.h>
 
uint32_t fcn_080481af (void) {
    edi = 0x8048275;
    ecx = 0xa;
    esi = edi;
    do {
        edx -= edx;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        if (eax == 0) {
            goto label_0;
        }
        void (*0x80481b9)() ();
    } while (1);
label_0:
    dl += 0x30;
    if (dl > 0x39) {
        dl += 0x27;
    }
    *(edi) = dl;
    edi++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x804821c */
#include <stdint.h>
 
int32_t fcn_0804821c (void) {
    eax = 0;
    if (*(esi) == 0) {
        goto label_0;
    }
    esi = edi;
    eax = fcn_0804824a ();
    ecx = eax;
    ecx |= ecx;
    if (ecx == 0) {
        goto label_1;
    }
    do {
        eax = 0;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        ecx = edi;
        if (ecx == 0) {
            goto label_0;
        }
    } while (*(esi) != 0);
    goto label_1;
label_0:
    eax = esi;
label_1:
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/grep/ia32_elf/subject.exe @ 0x8048168 */
#include <stdint.h>
 
int32_t fcn_08048168 (void) {
    if ((*(0x8048274) & 0x80) != 0) {
        __asm ("pushal");
        eax = *(0x804826b);
        fcn_080481af ();
        *(edi) = 0x3a;
        edx -= esi;
        edx++;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xe, 0xed);
        __asm ("popal");
    }
    return eax;
}
