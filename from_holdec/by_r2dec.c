/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049180 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080491b7 ();
    ebx += 0x2e6c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2ba0, ebx - 0x2b30);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80491b7 */
#include <stdint.h>
 
void fcn_080491b7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80491e0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.0;
    if (eax != obj.completed.0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.0);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049220 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.0;
    eax -= obj.completed.0;
    edx = eax;
    eax >>= 0x1f;
    edx >>= 2;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.0, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049260 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049290 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80494d0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80491d0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80494d5 */
#include <stdint.h>
 
void x86_get_pc_thunk_bp (void) {
    ebp = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049330 */
#include <stdint.h>
 
uint32_t char_and1 (void) {
    eax = *(obj.gchar1);
    al &= *(obj.gchar2);
    if (al != 0xff) {
        printf ("  no");
        return eax;
    }
    printf (" yes");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80492f0 */
#include <stdint.h>
 
int16_t char_or2 (void) {
    ax = *(obj.gshort1);
    al |= ah;
    if (al == 0) {
        printf (" yes");
        return ax;
    }
    printf ("  no");
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80494dc */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2b17;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80493d0 */
#include <stdint.h>
 
int16_t char_and3 (void) {
    ax = *(obj.gshort1);
    al &= ah;
    al++;
    if (al != 0) {
        printf ("  no");
        return ax;
    }
    printf (" yes");
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049460 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    _x86_get_pc_thunk_bp ();
    ebp += 0x2b96;
    ebx = ebp;
    edi = *((esp + 0x28));
    _init (ebx, esi, edi);
    ebx = ebp - 0xf0;
    eax = ebp - 0xf4;
    ebx -= eax;
    ebx >>= 2;
    if (ebx == 0) {
        goto label_0;
    }
    esi = 0;
    do {
        uint32_t (*ebp + esi*4 - 0xf4)(uint32_t*, uint32_t*, uint32_t) (*((esp + 0x2c)), *((esp + 0x2c)), edi);
        esi++;
    } while (ebx != esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80491c0 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x80492a0 */
#include <stdint.h>
 
uint32_t char_or1 (void) {
    eax = *(obj.gchar1);
    al |= *(obj.gchar2);
    if (al != 0) {
        printf ("  no");
        return eax;
    }
    printf (" yes");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049070 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_4h;
    /* [14] -r-x section size 1129 named .text */
    ecx = esp + 4;
    *(obj.gchar1) = 1;
    *(obj.gchar2) = 0;
    printf ("both (%d,%d) zero:");
    char_or1 ();
    eax = puts (0x804a05a);
    eax = 0;
    *(obj.gshort1) = ax;
    printf ("short (%d) zero:");
    char_or2 ();
    puts (0x804a05a);
    *(obj.gchar1) = 1;
    *(obj.gchar2) = 0xff;
    printf ("both (%d,%d) 255:");
    char_and1 ();
    char_and1 ();
    eax = puts (0x804a05a);
    eax = 0;
    *(obj.gshort1) = ax;
    printf ("short (%d) -1:");
    char_and3 ();
    puts (0x804a05a);
    *(obj.gchar1) = 1;
    *(obj.gchar2) = 2;
    printf ("both (%d,%d) equal:");
    char_xor1 ();
    eax = puts (0x804a05a);
    ecx = *((ebp - 4));
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049410 */
#include <stdint.h>
 
int8_t char_xor1 (void) {
    al = *(obj.gchar1);
    bl = *(obj.gchar2);
    bl ^= al;
    if (? != ?) {
        printf ("  no");
        return al;
    }
    printf (" yes");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049380 */
#include <stdint.h>
 
uint32_t char_and2 (void) {
    eax = *(obj.gchar1);
    al &= *(obj.gchar2);
    al++;
    if (al != 0) {
        printf ("  no");
        return eax;
    }
    printf (" yes");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [12] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
