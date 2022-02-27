/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x7f6840 */
#include <stdint.h>
 
void entry0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    fcn_007f6ac0 (rdi, rsi);
    rsi += rdi;
    ebx = 0;
    ecx = 0;
    rbp |= 0xffffffffffffffff;
    fcn_007f68b0 (rdx, rdi, rdx);
    ebx += ebx;
    if (ebx != 0) {
        return;
    }
    ebx = *(rsi);
    rsi -= 0xfffffffffffffffc;
    ebx += ebx;
    dl = *(rsi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x7f6ac0 */
#include <stdint.h>
 
uint64_t fcn_007f6ac0 (int64_t arg2, int64_t arg1) {
    int64_t var_9h;
    rsi = arg2;
    rdi = arg1;
    rax = rbp - 9;
    r15d = *(rax);
    rax -= r15;
    edx = *((rax + 0x38));
    edx *= 0x38;
    edx += 0x58;
    r15d -= edx;
    eax = fcn_007f6a55 (rdi, rsi, rdx, rax + rdx, r8);
    tmp_0 = eax;
    eax = esp;
    esp = tmp_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x7f6a55 */
#include <stdint.h>
 
uint64_t fcn_007f6a55 (signed int64_t arg_20h, int64_t arg_61h, signed int64_t arg_64h, int64_t arg5, int64_t arg4) {
    int64_t var_8h;
    int64_t var_18h;
    r8 = arg5;
    rcx = arg4;
    do {
        rdx = 0x1e;
        rax = void (*0x7f6a44)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (rdi, rsi, rdx, rcx, r8);
        rdi = r12;
        r8 = r12;
        if (? >= ?) {
            rdi = r12;
            *((r14 + 0x61)) &= r12b;
            ebp = *((rbp + 0x64)) * 0xa000a2e;
            *((rcx + rcx*2)) += ah;
            __asm ("outsb dx, byte [rsi]");
            __asm ("outsw dx, word [rsi]");
            ebp = *((rbp + 0x20)) * 0x70207369;
        }
        if (ah != *(rax)) {
            if (ah !overflow *(rax)) {
            }
            *((rbp + 0x61)) &= dl;
            __asm ("insd dword [rdi], dx");
            *((cs:rcx + 0x6c)) &= al;
            __asm ("insb byte [rdi], dx");
            *((rdx + 0x69)) &= dl;
            if (*((rdx + 0x69)) >= 0) {
                goto label_0;
            }
            if (*((rdx + 0x69)) < 0) {
                goto label_1;
            }
            *((cs:rdx + rcx)) &= ah;
            *((rax + 0x6a5e9090)) += dl;
            bl += *((rdi + 0x6a));
            *((rax + 0xf)) += ebx;
            eax += 0x6a5f7f6a;
            rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
            rbx = 0x52207374;
        }
        *((rax + 0xc)) += ch;
        *(rax) += al;
        edi = 0x1200000;
        rdx = 7;
        esi = 0xc6d958;
        r10 = 0x32;
        r8d -= r8d;
        rax = 9;
        rax = sys_link (rdi, rsi);
    } while (edi != eax);
    esi = segment.LOAD0;
    edx = edi;
    edx -= esi;
    if (edx != 0) {
        ebp += edx;
        ecx = ebx;
label_0:
        __asm ("int1");
        ecx >>= 3;
        *(rdi) = *(rsi);
        rcx--;
        rsi += 8;
        rdi += 8;
    }
    tmp_0 = eax;
    eax = edi;
    edi = tmp_0;
    rsi = rbx;
    tmp_1 = eax;
    eax = edx;
    edx = tmp_1;
    eax = *(rsi);
    rsi += 4;
    rcx = rsp;
label_1:
    ecx = esp;
    eax = *(rsi);
    rsi += 4;
    tmp_2 = eax;
    eax = edi;
    edi = tmp_2;
    eax = *(rsi);
    rsi += 4;
    r8d = (int32_t) al;
    tmp_3 = rsi;
    rsi = rdi;
    rdi = tmp_3;
    void (*rbp)(uint64_t, uint64_t) (rax, rax);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x7f68b0 */
#include <stdint.h>
 
uint64_t fcn_007f68b0 (int64_t arg4, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    if (r8b == 8) {
        goto label_0;
    }
    goto label_1;
    do {
        rsi++;
        *(rdi) = dl;
        rdi++;
label_0:
        dl = *(rsi);
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(rsi);
            rsi -= 0xfffffffffffffffc;
            ebx += ebx;
            dl = *(rsi);
        }
    } while (ebx < 0);
    eax = rcx + 1;
    while (ebx >= 0) {
        eax--;
        eax = void (*r11)() ();
        eax += eax;
        eax = void (*r11)() ();
        eax += eax;
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(rsi);
            rsi -= 0xfffffffffffffffc;
            ebx += ebx;
            dl = *(rsi);
        }
    }
    eax -= 3;
    if (eax >= 0) {
        eax <<= 8;
        edx = (int32_t) dl;
        eax |= edx;
        rsi++;
        eax ^= 0xffffffff;
        if (rsi == 0) {
            goto label_1;
        }
        eax >>= 1;
        rbp = (int64_t) eax;
        if (eax < 0) {
            goto label_2;
        }
    } else {
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(rsi);
            rsi -= 0xfffffffffffffffc;
            ebx += ebx;
        }
        if (ebx < 0) {
            goto label_2;
        }
    }
    ecx++;
    ebx += ebx;
    if (ebx == 0) {
        ebx = *(rsi);
        rsi -= 0xfffffffffffffffc;
        ebx += ebx;
    }
    if (ebx < 0) {
        goto label_2;
    }
    do {
        void (*r11)() ();
        ecx += ecx;
        ebx += ebx;
        if (ebx == 0) {
            ebx = *(rsi);
            rsi -= 0xfffffffffffffffc;
            ebx += ebx;
        }
    } while (ebx >= 0);
    ecx += 2;
    goto label_3;
label_2:
    void (*r11)() ();
    ecx += ecx;
label_3:
    ecx += 2;
    fcn_007f6872 (rdi, rsi);
    goto label_0;
label_1:
    rax = rsi;
    rax -= rcx;
    rdi -= rdx;
    *(rcx) = edi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x57acbf */
#include <stdint.h>
 
void fcn_0057acbf (void) {
    memset (rdi, eax, rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x51cb18 */
#include <stdint.h>
 
int32_t fcn_0051cb18 (void) {
    do {
        bl += dl;
        eax |= 0xe6558589;
        al ^= *((rbx - 0x68));
    } while (eax <= 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x71d73e */
#include <stdint.h>
 
int8_t fcn_0071d73e (void) {
    ebx &= *(rbx);
    al |= 0x12;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_orig/subject.exe @ 0x7f6872 */
#include <stdint.h>
 
uint64_t fcn_007f6872 (uint32_t arg4, int64_t arg1) {
    rcx = arg4;
    rdi = arg1;
    rax = rdi + rbp;
    dl = *(rax);
    if (ecx <= 5) {
        goto label_0;
    }
    if (rbp > 0xfffffffffffffffc) {
        goto label_0;
    }
    ecx -= 4;
    do {
        edx = *(rax);
        rax += 4;
        ecx -= 4;
        *(rdi) = edx;
        rdi = rdi + 4;
    } while (ecx >= 0);
    ecx += 4;
    dl = *(rax);
    if (ecx == 0) {
        goto label_1;
    }
    do {
label_0:
        rax++;
        *(rdi) = dl;
        ecx--;
        dl = *(rax);
        rdi = rdi + 1;
    } while (ecx != 0);
label_1:
    return rax;
}
