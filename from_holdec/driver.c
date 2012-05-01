#include <stdio.h>
#include <assert.h>

extern int dest_eax;
extern int dest_ebx;
extern int dest_ecx;
extern int dest_edx;
extern int dest_ebp;
extern int dest_esi;
extern int dest_edi;
extern int dest_esp_diff;

extern short int dest_flags;

extern char dest_cc_o;  // 0
extern char dest_cc_no; // 1
extern char dest_cc_c;  // 2
extern char dest_cc_nc; // 3
extern char dest_cc_z;  // 4
extern char dest_cc_nz; // 5
extern char dest_cc_be; // 6
extern char dest_cc_a;  // 7
extern char dest_cc_s;  // 8
extern char dest_cc_ns; // 9
extern char dest_cc_p;  // a
extern char dest_cc_np; // b
extern char dest_cc_l;  // c
extern char dest_cc_nl; // d
extern char dest_cc_le; // e
extern char dest_cc_g;  // f

#define SHOW_REG(STR,N) printf("%-10s: 0x%08x  %11d  %11u\n", STR, N, N, N);
#define FLAGBIT(n) (!!(dest_flags&(1<<(n))))

void printInfo(void) {
    printf("register        hex        signed      unsigned\n");

    SHOW_REG("eax", dest_eax);
    SHOW_REG("ebx", dest_ebx);
    SHOW_REG("ecx", dest_ecx);
    SHOW_REG("edx", dest_edx);

    SHOW_REG("ebp", dest_ebp);
    SHOW_REG("esi", dest_esi);
    SHOW_REG("edi", dest_edi);
    SHOW_REG("esp diff", dest_esp_diff);

    printf("%-10s:     0x%04x   ID-OSZ-APC:%d%d-%d%d%d-%d%d%d\n", "flags", dest_flags, 
	   FLAGBIT(9), FLAGBIT(10), FLAGBIT(11), FLAGBIT(7), FLAGBIT(6), FLAGBIT(4), FLAGBIT(2), FLAGBIT(0));

    assert(dest_cc_o!=dest_cc_no);
    assert(dest_cc_c!=dest_cc_nc);
    assert(dest_cc_z!=dest_cc_nz);
    assert(dest_cc_be!=dest_cc_a);
    assert(dest_cc_s!=dest_cc_ns);
    assert(dest_cc_p!=dest_cc_np);
    assert(dest_cc_l!=dest_cc_nl);
    assert(dest_cc_le!=dest_cc_g);

    printf("%-10s: parity:%d overflow:%d ==:%d  <0:%d  unsigned (<:%d, <=:%d) signed (<:%d, <=:%d)\n", "cc",
	   dest_cc_p,
	   dest_cc_o,
	   dest_cc_z,
	   dest_cc_s,

	   dest_cc_c,
	   dest_cc_be,
	   dest_cc_l, 
	   dest_cc_le);
}

int main() {

#include "driver_inc.c"

    return 0;
}
