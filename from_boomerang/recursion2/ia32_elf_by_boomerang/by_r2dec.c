/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80482d8 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 1000 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80482a8 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80482fc */
#include <stdint.h>
 
void call_gmon_start (void) {
    void (*0x8048306)(uint32_t, uint32_t) (ecx, ebx);
    ebx += 0x14e6;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80482c8 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048320 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.4583) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(obj.p.4582) = eax;
        void (*edx)() ();
label_0:
        eax = *(obj.p.4582);
        edx = *(eax);
    } while (edx != 0);
    *(obj.completed.4583) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048354 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048698 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        void (*eax)() ();
        eax = *((ebx - 4));
        ebx -= 4;
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80483d6 */
#include <stdint.h>
 
int32_t b (void) {
    eax = *(obj.b_c);
    eax--;
    *(obj.b_c) = eax;
    eax = *(obj.b_c);
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        c ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
    }
    eax = *(obj.res);
    eax += 2;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048408 */
#include <stdint.h>
 
int32_t c (void) {
    eax = *(obj.c_d);
    eax--;
    *(obj.c_d) = eax;
    eax = *(obj.c_d);
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        d ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
    }
    eax = *(obj.c_f);
    eax--;
    *(obj.c_f) = eax;
    eax = *(obj.c_f);
    if (eax >= 0) {
        f ();
    }
    eax = c_h;
    eax--;
    *(obj.c_h) = eax;
    eax = c_h;
    if (eax >= 0) {
        h ();
    }
    eax = c_j;
    eax--;
    *(obj.c_j) = eax;
    eax = c_j;
    if (eax >= 0) {
        tmp_2 = edx;
        edx = ecx;
        ecx = tmp_2;
        j ();
        tmp_3 = edx;
        edx = ecx;
        ecx = tmp_3;
    }
    eax = c_l;
    eax--;
    *(obj.c_l) = eax;
    eax = c_l;
    if (eax >= 0) {
        tmp_4 = edx;
        edx = ecx;
        ecx = tmp_4;
        l ();
        tmp_5 = edx;
        edx = ecx;
        ecx = tmp_5;
    }
    eax = *(obj.res);
    eax += 3;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80485a6 */
#include <stdint.h>
 
int32_t j (void) {
    eax = j_k;
    eax--;
    *(obj.j_k) = eax;
    eax = j_k;
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        k ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
    }
    eax = *(obj.res);
    eax += 0x17;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80485d8 */
#include <stdint.h>
 
int32_t k (void) {
    eax = k_e;
    eax--;
    *(obj.k_e) = eax;
    eax = k_e;
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        e ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
        edx--;
    }
    eax = *(obj.res);
    eax += 0x1b;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80484d8 */
#include <stdint.h>
 
int32_t e (void) {
    eax = *(obj.e_c);
    eax--;
    *(obj.e_c) = eax;
    eax = *(obj.e_c);
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        c ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
    }
    eax = *(obj.res);
    eax += 7;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x804850a */
#include <stdint.h>
 
int32_t f (void) {
    eax = *(obj.f_g);
    eax--;
    *(obj.f_g) = eax;
    eax = *(obj.f_g);
    if (eax >= 0) {
        g ();
    }
    eax = *(obj.res);
    eax += 0xb;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048538 */
#include <stdint.h>
 
int32_t g (void) {
    eax = *(obj.g_f);
    eax--;
    *(obj.g_f) = eax;
    eax = *(obj.g_f);
    if (eax >= 0) {
        f ();
    }
    eax = *(obj.res);
    eax += 0xd;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048690 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x804860b */
#include <stdint.h>
 
int32_t l (void) {
    eax = l_b;
    eax--;
    *(obj.l_b) = eax;
    eax = l_b;
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        b ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
    }
    eax = *(obj.res);
    eax += 0x1d;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048280 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048594 */
#include <stdint.h>
 
int32_t i (void) {
    eax = *(obj.res);
    eax += 0x13;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048640 */
#include <stdint.h>
 
uint32_t libc_csu_init (void) {
    uint32_t var_10h;
    void (*0x804864e)(uint32_t, uint32_t, uint32_t) (ebx, esi, edi);
    ebx += 0x119e;
    init ();
    eax = ebx - 0xe0;
    edx = ebx - 0xe0;
    eax -= edx;
    eax >>= 2;
    *((ebp - 0x10)) = eax;
    if (eax == 0) {
        return eax;
    }
    edi = 0;
    esi = edx;
    do {
        uint32_t (*esi)() ();
        edi++;
        esi += 4;
    } while (edi < *((ebp - 0x10)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x804837c */
#include <stdint.h>
 
int32_t main (void) {
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    ecx = 0x37;
    edx = 0x63;
    b ();
    printf ("ecx is %d, edx is %d\n");
    eax = *(obj.res);
    printf ("res is %d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80482b8 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80484a6 */
#include <stdint.h>
 
int32_t d (void) {
    eax = *(obj.d_e);
    eax--;
    *(obj.d_e) = eax;
    eax = *(obj.d_e);
    if (eax >= 0) {
        tmp_0 = edx;
        edx = ecx;
        ecx = tmp_0;
        e ();
        tmp_1 = edx;
        edx = ecx;
        ecx = tmp_1;
    }
    eax = *(obj.res);
    eax += 5;
    *(obj.res) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x80486c0 */
#include <stdint.h>
 
void fini (void) {
    /* [13] -r-x section size 26 named .fini */
    void (*0x80486ca)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x1122;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe @ 0x8048566 */
#include <stdint.h>
 
int32_t h (void) {
    eax = h_i;
    eax--;
    *(obj.h_i) = eax;
    eax = h_i;
    if (eax >= 0) {
        i ();
    }
    eax = *(obj.res);
    eax += 0x11;
    *(obj.res) = eax;
    return eax;
}
