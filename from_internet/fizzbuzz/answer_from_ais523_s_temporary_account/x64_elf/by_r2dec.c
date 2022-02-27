/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_ais523_s_temporary_account/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
void entry0 (int64_t arg4) {
    rcx = arg4;
    /* [01] -r-x section size 2742 named .text */
    __asm ("vpand ymm0, ymm0, ymm0");
    __asm ("vmovdqa ymm10, ymmword [loc.lineno_low_init]");
    __asm ("vmovdqa ymm11, ymmword [loc.lineno_mid_base]");
    __asm ("vmovdqa ymm12, ymmword [loc.lineno_top_max]");
    __asm ("vmovdqa ymm13, ymmword [loc.ascii_offset]");
    __asm ("vmovdqa ymm14, ymmword [loc.biascii_offset]");
    __asm ("vmovdqa ymm15, ymmword [loc.bascii_offset]");
    __asm ("vmovdqa ymm8, ymmword [loc.endian_shuffle_init]");
    __asm ("vmovdqa ymm6, ymmword [loc.lineno_top_init]");
    eax = 0x80000000;
    __asm ("cpuid");
    if (eax < 0x80000006) {
        goto label_4;
    }
    eax = 0x80000006;
    __asm ("cpuid");
    ecx >>= 0x10;
    if (ecx == 0) {
        goto label_4;
    }
    ecx <<= 9;
    r13 = rcx;
    edi = 1;
    esi = 0x407;
    edx = ecx;
    eax = 0x48;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    if (eax == 0xfffffff7) {
        goto label_5;
    }
    if (eax == 0xffffffff) {
        goto label_6;
    }
    rax = exit_on_error ();
    if (rax != r13) {
        goto label_7;
    }
    rdi = loc_io_buffers;
    esi = 0x600000;
    edx = 0xe;
    eax = 0x1c;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    exit_on_error ();
    rbx = loc_io_buffers;
    __asm ("vmovdqu ymm0, ymmword [loc.fizzbuzz_intro]");
    __asm ("vmovdqu ymmword [rbx], ymm0");
    rbx += 0x1e;
    r14d = 2;
    r15d = 6;
    r11 = 0xa7a7a6946;
    r10 = 0xa7a7a7542;
    __asm ("vmovdqa xmm3, xmmword [loc.second_phase_constants]");
    __asm ("vmovdqa xmm1, xmmword [loc.line_number_init]");
label_0:
    ecx = r15d;
    do {
        *(rbx) = r10;
        rbx += 5;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        *(rbx) = r11;
        rbx += 5;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        *(rbx) = r11d;
        *((rbx + 4)) = r10;
        rbx += 9;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        *(rbx) = r11;
        rbx += 5;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        *(rbx) = r10;
        rbx += 5;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        *(rbx) = r11;
        rbx += 5;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        __asm ("vpaddb xmm0, xmm13, xmm1");
        __asm ("vpshufb xmm0, xmm0, xmm8");
        __asm ("vmovdqu xmmword [rbx], xmm0");
        rbx = rbx + r14 + 1;
        *((rbx - 1)) = 0xa;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        *(rbx) = r11;
        rbx += 5;
        __asm ("vpaddq xmm1, xmm3, xmm1");
        __asm ("vpmaxub xmm1, xmm6, xmm1");
        ecx--;
    } while (ecx != 0);
    r15d = r15 * 5;
    r15d += r15d;
    r14d++;
    __asm ("vpcmpeqb xmm0, xmm0, xmm0");
    __asm ("vpsubb ymm8, ymm8, ymm0");
    if (r14d != 6) {
        goto label_0;
    }
    rdx = rbx;
    edx &= 0x1fffff;
    swap_buffers (rdi);
    __asm ("vpermq ymm8, ymm8, 0xee");
    rax = loc_iovec_base;
    r13 += rax;
    r12 = r13 + 0xed8;
    r8 = 0xffffffffffffffff;
label_1:
    ecx = r14*8 + 0x2f;
    r9 = r15;
    r9 >>= 5;
    r9 *= rcx;
    __asm ("vmovdqa ymm4, ymm10");
    ecx = rcx * 5;
    ecx += ecx;
    edx = 0x180;
    eax = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    __asm ("vpxor ymm9, ymm9, ymm9");
    __asm ("vpinsrq xmm9, xmm9, rax, 0");
    __asm ("vpermq ymm9, ymm9, 0");
    edx = 1;
    eax = 0xb;
    eax -= r14d;
    if (eax <= 0) {
        eax = edx;
    }
    eax <<= 3;
    __asm ("vpxor xmm0, xmm0, xmm0");
    __asm ("vpinsrq xmm0, xmm0, rax, 0");
    __asm ("vpermq ymm0, ymm0, 0");
    __asm ("vpcmpeqb ymm5, ymm5, ymm5");
    __asm ("vpsrlq ymm5, ymm5, xmm0");
    __asm ("vpmaxub ymm5, ymm11, ymm5");
    __asm ("vpermq ymm0, ymm11, 0x55");
    __asm ("vpsubb ymm0, ymm0, ymm11");
    __asm ("vpaddq ymm5, ymm5, ymm0");
    __asm ("vpmaxub ymm5, ymm11, ymm5");
label_3:
    rdi = r13;
    r11 = 0xf6868697ba;
    r10 = 0xf686868bbe;
    __asm ("vpsubb ymm2, ymm15, ymm6");
    __asm ("vpshufb ymm2, ymm2, ymm8");
    eax = 0xd0;
    ecx = 0x14;
    do {
        *(rdi) = r10;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6cf;
        *(rdi) = r11;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6cd;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6cc;
        *(rdi) = r11d;
        *((rdi + 4)) = r10;
        rdi += 9;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6ca;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6c9;
        *(rdi) = r11;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6c7;
        al = inc_tens_digit ();
        *(rdi) = r10;
        rdi += 5;
        *(rdi) = r11;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6ce;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6cd;
        *(rdi) = r11;
        rdi += 5;
        *(rdi) = r10;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6ca;
        *(rdi) = r11;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6c8;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6c7;
        al = inc_tens_digit ();
        *(rdi) = r11d;
        *((rdi + 4)) = r10;
        rdi += 9;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6cf;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6ce;
        *(rdi) = r11;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6cc;
        *(rdi) = r10;
        rdi += 5;
        *(rdi) = r11;
        rdi += 5;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6c9;
        __asm ("vmovdqu xmmword [rdi], xmm2");
        rdi = rdi + r14 + 1;
        *((rdi - 3)) = al;
        *((rdi - 2)) = 0xf6c8;
        *(rdi) = r11;
        rdi += 5;
        inc_tens_digit ();
        ecx--;
    } while (ecx != 0);
    rax = r13;
    __asm ("vmovdqa ymm0, ymmword [rax]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0x20]");
    __asm ("vmovdqu ymmword [rdi], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0x20], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0x40]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0x60]");
    __asm ("vmovdqu ymmword [rdi + 0x40], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0x60], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0x80]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0xa0]");
    __asm ("vmovdqu ymmword [rdi + 0x80], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0xa0], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0xc0]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0xe0]");
    __asm ("vmovdqu ymmword [rdi + 0xc0], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0xe0], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0x100]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0x120]");
    __asm ("vmovdqu ymmword [rdi + 0x100], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0x120], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0x140]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0x160]");
    __asm ("vmovdqu ymmword [rdi + 0x140], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0x160], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0x180]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0x1a0]");
    __asm ("vmovdqu ymmword [rdi + 0x180], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0x1a0], ymm3");
    __asm ("vmovdqa ymm0, ymmword [rax + 0x1c0]");
    __asm ("vmovdqa ymm3, ymmword [rax + 0x1e0]");
    __asm ("vmovdqu ymmword [rdi + 0x1c0], ymm0");
    __asm ("vmovdqu ymmword [rdi + 0x1e0], ymm3");
label_2:
    r11 = r13;
    rdx = loc_iovec_base;
    r11 -= rdx;
    r11 >>= 5;
    if (r11 >= r9) {
        r11 = r9;
    }
    rax = rbx;
    eax &= 0x1ffe00;
    eax >>= 5;
    r11 -= rax;
    r9 -= r11;
    r11 <<= 5;
    r11 += rbx;
    __asm ("vpaddb ymm7, ymm14, ymm5");
    r10 = r13;
    r10 -= r12;
    do {
        rdx = rbp;
        __asm ("vmovdqu ymm2, ymmword [rdx]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx], ymm0");
        __asm ("vmovdqa ymm1, ymm4");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x20]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0x20], ymm0");
        __asm ("vpaddq ymm4, ymm9, ymm4");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x40]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0x40], ymm0");
        __asm ("vpandn ymm3, ymm1, ymm4");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x60]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0x60], ymm0");
        __asm ("vpsrlq ymm3, ymm3, 0x3f");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x80]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0x80], ymm0");
        __asm ("vpaddb ymm3, ymm3, ymm3");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0xa0]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0xa0], ymm0");
        __asm ("vpaddq ymm5, ymm5, ymm3");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0xc0]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0xc0], ymm0");
        __asm ("vpmaxub ymm5, ymm11, ymm5");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0xe0]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0xe0], ymm0");
        __asm ("vpaddb ymm7, ymm14, ymm5");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x100]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx + 0x100], ymm0");
        rbx += 0x200;
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x120]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0xe0], ymm0");
        rbp += 0x200;
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x140]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0xc0], ymm0");
        rax = rbp + r10;
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x160]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0xa0], ymm0");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x180]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0x80], ymm0");
        if (rbp >= r12) {
        }
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x1a0]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0x60], ymm0");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x1c0]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0x40], ymm0");
        __asm ("vmovdqu ymm2, ymmword [rdx + 0x1e0]");
        __asm ("vpshufb ymm0, ymm7, ymm2");
        __asm ("vpsubb ymm0, ymm0, ymm2");
        __asm ("vmovdqa ymmword [rbx - 0x20], ymm0");
    } while (rbx < r11);
    rbx = r11;
    rax = loc_iovec_base;
    rax -= r13;
    eax = -eax;
    rdx = rbx;
    edx &= 0x1fffff;
    if (edx >= eax) {
        rax = swap_buffers (rdi);
    }
    if (r9 == 0) {
        if (r14d == 0x12) {
            goto label_8;
        }
        r14d++;
        __asm ("vpcmpeqb ymm0, ymm0, ymm0");
        __asm ("vpsubb ymm8, ymm8, ymm0");
        r15 *= 5;
        r15 += r15;
        r12 += 0x140;
        goto label_1;
    }
    __asm ("vpshufd xmm0, xmm5, 0xed");
    __asm ("vpextrq rax, xmm0, 0");
    rdx = 0xffff0000ffff;
    rax |= rdx;
    if (rax != r8) {
        goto label_2;
    }
    if (r8 == -1) {
        __asm ("vpextrq rdx, xmm6, 1");
        rsi = rdx;
        rdx <<= 1;
        rdx >>= 1;
        rdx = ~rdx;
        __asm ("bsf rcx, rdx");
        rcx &= 0xfffffffffffffff8;
        rax = loc_alternate_representation_lookup_table;
        __asm ("vpshufb ymm6, ymm6, ymmword [rax + rcx*4]");
        rdx = rsi;
        rdx >>= cl;
        __asm ("vpinsrb xmm5, xmm5, edx, 7");
        __asm ("vpinsrb xmm5, xmm5, edx, 0xf");
        __asm ("vpermq ymm5, ymm5, 0x44");
        edx++;
        edx <<= 0x18;
        edx |= 0xf6ffff;
        r8d = edx;
        rdx <<= 0x20;
        r8 |= rdx;
        goto label_3;
    }
    __asm ("vpsubb ymm2, ymm15, ymm6");
    __asm ("vpshufb ymm0, ymm5, ymm2");
    __asm ("vpmaxub ymm6, ymm6, ymm0");
    __asm ("vpminub ymm6, ymm12, ymm6");
    __asm ("vpsllq ymm5, ymm5, 8");
    __asm ("vpsrlq ymm5, ymm5, 8");
    __asm ("vpmaxub ymm5, ymm11, ymm5");
    r8 = 0xffffffffffffffff;
    goto label_3;
label_8:
    edi = 1;
    rsi = 0x0040200b;
    rdx = 5;
    eax = 1;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    exit_on_error ();
    edi = 0;
    void (*0x4019f1)() ();
label_4:
    rsi = loc_cpuid_error_message;
    edx = 0x60;
    write_stderr ();
    edi = 0x3b;
    void (*0x4019f1)() ();
label_5:
    rsi = loc_pipe_error_message;
    edx = 0x40;
    write_stderr ();
    edi = 0x49;
    void (*0x4019f1)() ();
label_6:
    rsi = loc_pipe_perm_error_message_part_1;
    edx = 0x60;
    write_stderr ();
    rax = r13;
    ecx = 0x1c;
    loc_inefficiently_write_as_hex (rdi);
    rsi = loc_pipe_perm_error_message_part_2;
    edx = 2;
    rax = write_stderr ();
    edi = 0x4d;
    void (*0x4019f1)() ();
label_7:
    rsi = loc_pipe_size_error_message_part_1;
    edx = 0x3b;
    write_stderr ();
    rax = r13;
    ecx = 0x1c;
    loc_inefficiently_write_as_hex (rdi);
    rsi = loc_pipe_size_error_message_part_2;
    edx = 0x10;
    write_stderr ();
    ecx = 0x1c;
    loc_inefficiently_write_as_hex (rdi);
    rsi = loc_pipe_size_error_message_part_3;
    edx = 0x8d;
    write_stderr ();
    edi = 0x49;
    return void (*0x4019f1)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_ais523_s_temporary_account/x64_elf/subject.exe @ 0x401991 */
#include <stdint.h>
 
void loc_exit_on_error (void) {
    if (rax >= 0) {
        return;
    }
    rsi = loc_error_message_part_1;
    edx = 0x17;
    write_stderr ();
    rax = -rax;
    rcx = 8;
    loc_inefficiently_write_as_hex (rdi);
    rsi = loc_error_message_part_2;
    edx = 0xa;
    write_stderr ();
    rax -= 5;
    rcx = 0x3c;
    loc_inefficiently_write_as_hex (rdi);
    rsi = loc_error_message_part_3;
    edx = 0x13;
    write_stderr ();
    edi = 0x4a;
    eax = 0xe7;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("ud2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_ais523_s_temporary_account/x64_elf/subject.exe @ 0x401950 */
#include <stdint.h>
 
int32_t loc_write_stderr (void) {
    edi = 2;
    eax = 1;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_ais523_s_temporary_account/x64_elf/subject.exe @ 0x40195d */
#include <stdint.h>
 
void loc_inefficiently_write_as_hex (int64_t arg4) {
    rcx = arg4;
    do {
        rax >>= cl;
        rax &= 0xf;
        rcx = "0123456789ABCDEFEncountered OS error 0x at RIP 0x, exiting program.\nError: your CPUID command does not support command 0x80000006 (AMD-style L2 cache information).\nThis program can only output to a pipe (try piping into `cat`?)\nCannot allocate a sufficiently large kernel buffer.\nTry setting /proc/sys/fs/pipe-max-size to 0x.\nFailed to resize the kernel pipe buffer.\nRequested size: 0x\nActual size: 0x\n(If the buffer is too large, this may cause errors;\nthe program could run too far ahead and overwrite\nmemory before it had been read from.)\n";
        rax = *((rcx + rax));
        *(loc.error_write_buffer) = al;
        rsi = loc_error_write_buffer;
        edx = 1;
        write_stderr ();
        ecx -= 4;
    } while (ecx >= 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_ais523_s_temporary_account/x64_elf/subject.exe @ 0x401297 */
#include <stdint.h>
 
uint64_t loc_swap_buffers (int64_t arg3) {
    rdx = arg3;
    rbx &= 0xffffffffffe00000;
    *(loc.iovec_base) = rbx;
    *(0x00c00008) = rdx;
    edi = 1;
    rsi = loc_iovec_base;
    edx = 1;
    r10d = 0;
    do {
        eax = 0x116;
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        rax = exit_on_error ();
        *(rsi) += rax;
        *((rsi + 8)) -= rax;
    } while (*((rsi + 8)) != 0);
    rbx ^= 0x200000;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_ais523_s_temporary_account/x64_elf/subject.exe @ 0x40139e */
#include <stdint.h>
 
int32_t loc_inc_tens_digit (void) {
    if (al != 0xc7) {
        eax--;
        return eax;
    }
    eax = 0xd0;
    __asm ("vpermq ymm2, ymm2, 0x4e");
    return eax;
}
