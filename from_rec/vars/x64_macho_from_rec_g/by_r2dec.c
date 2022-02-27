/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars/x64_macho_from_rec_g/subject.exe @ 0x100000df8 */
#include <stdint.h>
 
uint32_t entry0 (int64_t arg_8h, int64_t arg_10h) {
    /* [00] -r-x section size 229 named 0.__TEXT.__text */
    rdi = *((rbp + 8));
    rsi = rbp + 0x10;
    edx = edi;
    edx++;
    edx <<= 3;
    rdx += rsi;
    rcx = rdx;
    while (*(rcx) != 0) {
        rcx += 8;
    }
    rcx += 8;
    eax = _main ();
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars/x64_macho_from_rec_g/subject.exe @ 0x100000e34 */
#include <stdint.h>
 
int64_t func (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    *((rbp - 8)) = rdi;
    rax = *((rbp - 8));
    *(rax) = 1;
    rax = *((rbp - 8));
    *((rax + 0x10)) = 0x6b;
    rax = *((rbp - 8));
    *((rax + 0x18)) = 0xa;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars/x64_macho_from_rec_g/subject.exe @ 0x100000e5c */
#include <stdint.h>
 
uint64_t func2 (void) {
    rax = sym__gs1;
    *(rax) = 1;
    rdx = sym__gs1;
    rax = sym__gs1;
    *((rdx + 8)) = rax;
    rax = sym__gs1;
    *((rax + 0x10)) = 0x6b;
    rax = sym__gs1;
    *((rax + 0x18)) = 0xa;
    rax = sym__gs1;
    rax = *((rax + 8));
    *(rax) = 2;
    rax = sym__gs1;
    rax = *((rax + 8));
    rax = *((rax + 8));
    *(rax) = 3;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars/x64_macho_from_rec_g/subject.exe @ 0x100000ec1 */
#include <stdint.h>
 
int32_t main (void) {
    rdi = sym__gs1;
    _func ();
    eax = 0;
    _func2 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars/x64_macho_from_rec_g/subject.exe @ 0x100000ee4 */
#include <stdint.h>
 
void stub_helpers (void) {
    /* [02] -r-x section size 26 named 2.__TEXT.__stub_helper */
    r11 = 0x100001008;
    dyld_stub_binder ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars/x64_macho_from_rec_g/subject.exe @ 0x100000ede */
#include <stdint.h>
 
void exit (void) {
    /* [01] -r-x section size 6 named 1.__TEXT.__symbol_stub1 */
    exit ();
}
