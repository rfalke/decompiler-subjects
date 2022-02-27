/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80490d0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049107 ();
    ebx += 0x2f1c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2d40, ebx - 0x2ce0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049107 */
#include <stdint.h>
 
void fcn_08049107 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049130 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.6844;
    if (eax != obj.completed.6844) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6844);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049170 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6844;
    eax -= obj.completed.6844;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6844, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80491b0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.6844) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6844) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80491e0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049320 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80492b5 */
#include <stdint.h>
 
int32_t add_one (int32_t arg_4h) {
    eax = *((esp + 4));
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049120 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x804929a */
#include <stdint.h>
 
int32_t return_constant (void) {
    eax = 0xbbc10300;
    eax += ecx;
    ebx = 0xb9;
    eax += 0xf4ebc103;
    eax += ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049328 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ccb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80491e6 */
#include <stdint.h>
 
int32_t exec_python (void) {
    eax += 0x1ebc031;
    do {
        eax = 0;
        goto label_0;
        eax += 0x1eb9050;
label_0:
        goto label_1;
        eax += 0x1eb10b0;
label_1:
        al = 0x10;
        goto label_2;
        eax += 0x1ebe0f7;
label_2:
        edx:eax = eax * eax;
        goto label_3;
        eax += 0x1ebe0f7;
label_3:
        edx:eax = eax * eax;
        goto label_4;
        eax += 0x1ebc389;
label_4:
        ebx = eax;
        goto label_5;
        eax += 0x1eb6eb4;
label_5:
        ah = 0x6e;
        goto label_6;
        eax += 0x1eb6fb0;
label_6:
        al = 0x6f;
        goto label_7;
        eax += 0x1ebe3f7;
label_7:
        edx:eax = eax * ebx;
        goto label_8;
        eax += 0x1eb68b4;
label_8:
        ah = 0x68;
        goto label_9;
        eax += 0x1eb74b0;
label_9:
        al = 0x74;
        goto label_10;
        eax += 0x1eb9050;
label_10:
        goto label_11;
        eax += 0x1eb79b4;
label_11:
        ah = 0x79;
        goto label_12;
        eax += 0x1eb70b0;
label_12:
        al = 0x70;
        goto label_13;
        eax += 0x1ebe3f7;
label_13:
        edx:eax = eax * ebx;
        goto label_14;
        eax += 0x1eb2fb4;
label_14:
        ah = 0x2f;
        goto label_15;
        eax += 0x1eb6eb0;
label_15:
        al = 0x6e;
        goto label_16;
        eax += 0x1eb9050;
label_16:
        goto label_17;
        eax += 0x1eb69b4;
label_17:
        ah = 0x69;
        goto label_18;
        eax += 0x1eb62b0;
label_18:
        al = 0x62;
        goto label_19;
        eax += 0x1ebe3f7;
label_19:
        edx:eax = eax * ebx;
        goto label_20;
        eax += 0x1eb2fb4;
label_20:
        ah = 0x2f;
        goto label_21;
        eax += 0x1eb72b0;
label_21:
        al = 0x72;
        goto label_22;
        eax += 0x1eb9050;
label_22:
        goto label_23;
        eax += 0x1eb73b4;
label_23:
        ah = 0x73;
        goto label_24;
        eax += 0x1eb75b0;
label_24:
        al = 0x75;
        goto label_25;
        eax += 0x1ebe3f7;
label_25:
        edx:eax = eax * ebx;
        goto label_26;
        eax += 0x1eb2fb4;
label_26:
        ah = 0x2f;
        goto label_27;
        eax += 0x1eb2fb0;
label_27:
        al = 0x2f;
        goto label_28;
        eax += 0x1eb9050;
label_28:
        goto label_29;
        eax += 0x1ebc931;
label_29:
        ecx = 0;
        goto label_30;
        eax += 0x1ebe1f7;
label_30:
        edx:eax = eax * ecx;
        goto label_31;
        eax += 0x1ebe389;
label_31:
        ebx = esp;
        goto label_32;
        eax += 0x1eb0bb0;
label_32:
        al = 0xb;
        goto label_33;
        eax += 0x1eb80cd;
label_33:
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        goto label_34;
    } while (1);
label_34:
    ebp--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80492ab */
#include <stdint.h>
 
void loc_start (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x80492c0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2d33;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf8;
    eax = ebx - 0xfc;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xfc)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049110 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_4h;
    int32_t argc;
    /* int main(int argc,char ** argv); */
    ecx = esp + 4;
    while (1) {
        _start ();
        eax = add_one (0x2a);
        printf ("42+1=%d\n");
        eax = return_constant ();
        edx = 0;
        dl = (eax == 0xbaacc4bc) ? 1 : 0;
        eax = printf ("constant: 0x%08x = %d equal=%d\n");
        ecx = *((ebp - 4));
        eax = 0;
        esp = ecx - 4;
        return eax;
        exec_python ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/overlapping_instructions/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
