/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a0c0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_0804a0f7 ();
    ebx += 0xff2c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x2ec0, ebx - 0x2e60);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a0f7 */
#include <stdint.h>
 
void fcn_0804a0f7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a120 */
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a160 */
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a1a0 */
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
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a1d0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804eccb */
#include <stdint.h>
 
int32_t inst_105_values_var_0 (void) {
    eax = 0xfdf4c820;
    ebx = 0x33752850;
    ecx = 0x2ee6413c;
    edx = 0xa8edf9a2;
    esi = 0x8031c636;
    edi = 0x603a03ea;
    eax = -eax;
    ah++;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc068f10d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053a78 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_220_values_var_0 (void) {
    eax = 0xeb970e17;
    ebx = 0x1b04370d;
    ecx = 0x7af3be3b;
    edx = 0xed7a2ca7;
    esi = 0x31ee3741;
    edi = 0x471d8085;
    eax = -eax;
    esi = rotate_left32 (esi, 0x4f);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcd34c436;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80559af */
#include <stdint.h>
 
int32_t inst_263_values_var_0 (void) {
    eax = 0x5a628d34;
    ebx = 0x4ed80dbc;
    ecx = 0xb74e729a;
    edx = 0x89cb4896;
    esi = 0x398f8a02;
    edi = 0x7c94d79;
    eax = -eax;
    cl &= 0xf;
    __asm ("shld bx, ax, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x887bf7cc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80571a0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d676 */
#include <stdint.h>
 
int32_t inst_73_flags_var_0 (void) {
    eax = 0xc61da788;
    ebx = 0x8f3687d4;
    ecx = 0xb96caf45;
    edx = 0xfee10447;
    esi = 0x1d77971b;
    edi = 0x7692d366;
    eax = -eax;
    if (? > ?) {
        di = dx;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fbb1 */
#include <stdint.h>
 
int32_t inst_126_flags_var_0 (void) {
    eax = 0xc8d0f9be;
    ebx = 0xf3586e0b;
    ecx = 0x144ce8e7;
    edx = 0x9b064521;
    esi = 0x7104c681;
    edi = 0x68e6583;
    eax = -eax;
    ax = 0xdb86;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fb0e */
#include <stdint.h>
 
int32_t inst_125_flags_var_0 (void) {
    eax = 0x5ecbbd39;
    ebx = 0xc995a956;
    ecx = 0x2e93f374;
    edx = 0x2fcec5fb;
    esi = 0xac60ed85;
    edi = 0xb61236f6;
    eax = -eax;
    ch = bl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80564c4 */
#include <stdint.h>
 
int32_t inst_278_flags_var_0 (void) {
    eax = 0x567420c3;
    ebx = 0x55fc739b;
    ecx = 0x4018bc62;
    edx = 0xf8de02ea;
    esi = 0xd08b696e;
    edi = 0x7a71030d;
    eax = -eax;
    eax = 1;
    if ((bl & ch) < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054482 */
#include <stdint.h>
 
int32_t inst_233_flags_var_0 (void) {
    eax = 0x604c02c5;
    ebx = 0x33dfbddf;
    ecx = 0xc5928cc4;
    edx = 0xcd260613;
    esi = 0xe4f7f88d;
    edi = 0xb9e1bdab;
    eax = -eax;
    __asm ("stc");
    si -= 0x7d77;
    eax = 1;
    if (si < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (si < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80505bc */
#include <stdint.h>
 
int32_t inst_141_flags_var_0 (void) {
    eax = 0x97121165;
    ebx = 0x43590473;
    ecx = 0xc851363b;
    edx = 0xacf5e2a6;
    esi = 0x4204713b;
    edi = 0xdff0def1;
    eax = -eax;
    dx = ~dx;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80554f4 */
#include <stdint.h>
 
int32_t inst_256_flags_var_0 (void) {
    eax = 0x7f9f7bf0;
    ebx = 0xbbfa33d6;
    ecx = 0x251c3b4;
    edx = 0x5b5d3fcb;
    esi = 0x8e72f055;
    edi = 0x6210f859;
    eax = -eax;
    cl = (? >= ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80534f3 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_211_flags_var_0 (void) {
    eax = 0x9eaaab13;
    ebx = 0xdb2d529f;
    ecx = 0xad85bfc3;
    edx = 0x2767506e;
    esi = 0xdeb73f04;
    edi = 0x26dd1fa2;
    eax = -eax;
    __asm ("clc");
    ebp = rotate_right32 (ebp, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051746 */
#include <stdint.h>
 
int32_t inst_166_flags_var_0 (void) {
    eax = 0x6ce0647b;
    ebx = 0xc486018e;
    ecx = 0x50e02348;
    edx = 0x6783628;
    esi = 0xb820d476;
    edi = 0x900e67a5;
    eax = -eax;
    ch >>= 0x31;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f882 */
#include <stdint.h>
 
int32_t inst_121_flags_var_0 (void) {
    eax = 0x2eb5e247;
    ebx = 0xfed73f4f;
    ecx = 0xf2efbc6a;
    edx = 0x3b770701;
    esi = 0xdaf9c387;
    edi = 0xf6823cae;
    eax = -eax;
    __asm ("lahf");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a81f */
#include <stdint.h>
 
int32_t inst_8_flags_var_0 (void) {
    eax = 0x8f10ab75;
    ebx = 0xba027206;
    ecx = 0x722d14d2;
    edx = 0x6c8e586c;
    esi = 0xc3e461a7;
    edi = 0xcb2f25d4;
    eax = -eax;
    ebp += 0xff678ac6;
    eax = 1;
    if (ebp < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebp < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056a38 */
#include <stdint.h>
 
int32_t inst_285_flags_var_0 (void) {
    eax = 0x2806a674;
    ebx = 0x973f0b6b;
    ecx = 0x281d97e3;
    edx = 0x618f4230;
    esi = 0x7be8a37f;
    edi = 0x6aba1635;
    eax = -eax;
    __asm ("xadd edi, edi");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xe;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805102c */
#include <stdint.h>
 
int32_t inst_156_values_var_0 (void) {
    eax = 0xc8c5992f;
    ebx = 0xf7671141;
    ecx = 0x297e5057;
    edx = 0xae41d570;
    esi = 0xf1c1097e;
    edi = 0x750320;
    eax = -eax;
    di >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2c19e636;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f298 */
#include <stdint.h>
 
int32_t inst_113_values_var_0 (void) {
    eax = 0xade2caef;
    ebx = 0x8fc94bc1;
    ecx = 0x3337dd5e;
    edx = 0xd0c0b7c2;
    esi = 0x766f6b7;
    edi = 0xd19744a5;
    eax = -eax;
    edx:eax = eax * ebp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x554cdcb3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050c47 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_150_flags_var_0 (void) {
    eax = 0x196ae582;
    ebx = 0xd7a07125;
    ecx = 0x86938286;
    edx = 0xa2c4cb78;
    esi = 0xb8a922a1;
    edi = 0x5080f816;
    eax = -eax;
    al = rotate_right8 (al, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805012d */
#include <stdint.h>
 
int32_t inst_135_values_var_0 (void) {
    eax = 0x12cfabb7;
    ebx = 0xe1550238;
    ecx = 0x93987dfd;
    edx = 0x89b1f72;
    esi = 0x58f54a16;
    edi = 0x990db507;
    eax = -eax;
    ecx = (int32_t) dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5ef2cde4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80525ea */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_189_flags_var_0 (void) {
    eax = 0xd0301ced;
    ebx = 0xae1d7185;
    ecx = 0x5fa72c18;
    edx = 0x112285aa;
    esi = 0x407ed4c5;
    edi = 0x8dcb1c84;
    eax = -eax;
    edi = rotate_left32 (edi, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a3ea */
#include <stdint.h>
 
int32_t inst_3_values_var_0 (void) {
    eax = 0xc4964c23;
    ebx = 0x4ff60beb;
    ecx = 0xb17b216c;
    edx = 0xbd45b2a2;
    esi = 0x182b13b0;
    edi = 0x64446cb2;
    eax = -eax;
    __asm ("aas");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x673fb06e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052829 */
#include <stdint.h>
 
int32_t inst_193_values_var_0 (void) {
    eax = 0x4fe6aef1;
    ebx = 0x449292c7;
    ecx = 0xa96411b8;
    edx = 0x7ff53500;
    esi = 0xa8859c15;
    edi = 0x764b48cf;
    eax = -eax;
    ebx >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x94fca5ae;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80500d0 */
#include <stdint.h>
 
int32_t inst_134_flags_var_0 (void) {
    eax = 0xe785a932;
    ebx = 0x24227ccc;
    ecx = 0xdd41e6cc;
    edx = 0x7ef84e2a;
    esi = 0x245e1f0a;
    edi = 0xdd786c86;
    eax = -eax;
    ebx = (int32_t) bh;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ffe5 */
#include <stdint.h>
 
int32_t inst_133_values_var_0 (void) {
    eax = 0x5c6ad88e;
    ebx = 0xdd2be5a9;
    ecx = 0x1e1054f8;
    edx = 0xf780684e;
    esi = 0x3532af4d;
    edi = 0x65021c30;
    eax = -eax;
    dx = (int16_t) dh;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8b0be45f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e012 */
#include <stdint.h>
 
int32_t inst_88_flags_var_0 (void) {
    eax = 0x8a677235;
    ebx = 0x34fda25e;
    ecx = 0xfce56f6;
    edx = 0xadf175b7;
    esi = 0xd746f2cc;
    edi = 0x7c3f9fea;
    eax = -eax;
    if (? <= ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c2ed */
#include <stdint.h>
 
int32_t inst_43_flags_var_0 (void) {
    eax = 0x3ed62b8;
    ebx = 0xd4d0e3b3;
    ecx = 0x89544afb;
    edx = 0xbe26bab2;
    esi = 0xf8473eb0;
    edi = 0xb260e86;
    eax = -eax;
    __asm ("btc cx, 0xb0");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8057079 */
#include <stdint.h>
 
int32_t inst_294_values_var_0 (void) {
    eax = 0xd2d40cf7;
    ebx = 0x43421e16;
    ecx = 0x37c809a0;
    edx = 0xe8c44a9e;
    esi = 0x531b2cb4;
    edi = 0xba2bff4a;
    eax = -eax;
    edi ^= esi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9e1837f2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052a72 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_196_flags_var_0 (void) {
    eax = 0x192d681b;
    ebx = 0x26526562;
    ecx = 0xd7e3ba32;
    edx = 0x48351b21;
    esi = 0x3e8be9c2;
    edi = 0xdb1e8a22;
    eax = -eax;
    dx = rotate_left16 (dx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050c02 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_150_values_var_0 (void) {
    eax = 0xa7102dea;
    ebx = 0x88005f2e;
    ecx = 0xf34d35b0;
    edx = 0x1f4ed6c8;
    esi = 0x7183a37;
    edi = 0x94752f90;
    eax = -eax;
    dl = rotate_right8 (dl, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x535ff864;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80552c5 */
#include <stdint.h>
 
int32_t inst_253_values_var_0 (void) {
    eax = 0x14f4f3e9;
    ebx = 0x8a4fe1f7;
    ecx = 0xe631c97d;
    edx = 0xcc41eb22;
    esi = 0x718f006f;
    edi = 0x151a398e;
    eax = -eax;
    __asm ("setp ah");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3ee81a5e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80525a5 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_189_values_var_0 (void) {
    eax = 0xd105a197;
    ebx = 0x40e94102;
    ecx = 0x72afd62c;
    edx = 0x2c875dbf;
    esi = 0x9abbdf69;
    edi = 0x80055df9;
    eax = -eax;
    ecx = rotate_left32 (ecx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x661249a8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055268 */
#include <stdint.h>
 
int32_t inst_252_flags_var_0 (void) {
    eax = 0x71da977e;
    ebx = 0x35cf970e;
    ecx = 0x347033c9;
    edx = 0x7dcca0a7;
    esi = 0xd96eacac;
    edi = 0xd9dafd20;
    eax = -eax;
    __asm ("setns bh");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d06c */
#include <stdint.h>
 
int32_t inst_64_values_var_0 (void) {
    eax = 0x63366994;
    ebx = 0x744b947b;
    ecx = 0x96db4f0a;
    edx = 0x88727ea1;
    esi = 0x64ede76a;
    edi = 0xe3c68dc0;
    eax = -eax;
    if (? < ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x88c7f401;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b410 */
#include <stdint.h>
 
int32_t inst_23_values_var_0 (void) {
    eax = 0xcfd6ba42;
    ebx = 0xf0f57ba7;
    ecx = 0xff997db9;
    edx = 0xf48f94fa;
    esi = 0x3a2c4a43;
    edi = 0xa9807c97;
    eax = -eax;
    dh += bh;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3069d154;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053932 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_218_values_var_0 (void) {
    eax = 0x9869eea5;
    ebx = 0x6bc661ef;
    ecx = 0x8f385a8f;
    edx = 0xc4e74ea8;
    esi = 0xa3a9be47;
    edi = 0x4268781d;
    eax = -eax;
    cx = rotate_left16 (cx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7bc6f15e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053a1b */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_219_flags_var_0 (void) {
    eax = 0x47bce165;
    ebx = 0xed678281;
    ecx = 0x52dbf105;
    edx = 0xa4f55063;
    esi = 0x606e5efe;
    edi = 0xc92666a4;
    eax = -eax;
    si = rotate_right16 (si, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fcb2 */
#include <stdint.h>
 
int32_t inst_128_values_var_0 (void) {
    eax = 0x1673062c;
    ebx = 0xd03064d3;
    ecx = 0xd8c4b98a;
    edx = 0xfe91fa84;
    esi = 0xa56b18ca;
    edi = 0xc4e2925d;
    eax = -eax;
    edi = 0xd098267b;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x63b0bcfa;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804efc4 */
#include <stdint.h>
 
int32_t inst_109_values_var_0 (void) {
    eax = 0x65a3f47e;
    ebx = 0x6431ea45;
    ecx = 0x27fc857b;
    edx = 0x9e4debd3;
    esi = 0x9b21490;
    edi = 0x8ac35aa1;
    eax = -eax;
    si |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / si;
    dx = dx:ax % si;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x20c9462d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805083e */
#include <stdint.h>
 
int32_t inst_145_values_var_0 (void) {
    eax = 0xeb484b0;
    ebx = 0x64c7343c;
    ecx = 0x7910a694;
    edx = 0x34140702;
    esi = 0x1f346fda;
    edi = 0x2c428e60;
    eax = -eax;
    dx |= 0x8fa6;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf491595a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e8fd */
#include <stdint.h>
 
int32_t inst_100_values_var_0 (void) {
    eax = 0x2fde1ec8;
    ebx = 0x303d7fd5;
    ecx = 0x78bf4d56;
    edx = 0x6a50c35d;
    esi = 0x738ba578;
    edi = 0x6ec7f0ed;
    eax = -eax;
    __asm ("daa");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4e846703;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052c88 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_199_flags_var_0 (void) {
    eax = 0xdd9dff42;
    ebx = 0x5a965c8d;
    ecx = 0x515766b4;
    edx = 0xf8aa58c0;
    esi = 0x3638e511;
    edi = 0x55a9a5f;
    eax = -eax;
    edx = rotate_right32 (edx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f5b9 */
#include <stdint.h>
 
int32_t inst_117_flags_var_0 (void) {
    eax = 0x5933513f;
    ebx = 0xdcdae030;
    ecx = 0xf5d7e3d8;
    edx = 0xca975056;
    esi = 0xbd12f6b9;
    edi = 0x80b6eaa8;
    eax = -eax;
    edi = eax * 0xefa1e3ff;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805165d */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_165_values_var_0 (void) {
    eax = 0x53368c48;
    ebx = 0x3146c6b9;
    ecx = 0x2995c60a;
    edx = 0xbcacd874;
    esi = 0xdc5200fc;
    edi = 0xa80efba6;
    eax = -eax;
    dl = rotate_right8 (dl, 0xa6);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x873442bf;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f78d */
#include <stdint.h>
 
int32_t inst_120_values_var_0 (void) {
    eax = 0x19fe5508;
    ebx = 0x21e29802;
    ecx = 0x9f8b0904;
    edx = 0xc23a3fc4;
    esi = 0x2872263e;
    edi = 0x3cfd0dfb;
    eax = -eax;
    edx:eax = eax * edi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcce8bf9a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a110 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cc90 */
#include <stdint.h>
 
int32_t inst_58_values_var_0 (void) {
    eax = 0x5fb6acd7;
    ebx = 0xd4d9e5ab;
    ecx = 0xdc259f4e;
    edx = 0xca42a731;
    esi = 0x6003bf74;
    edi = 0xc95a47b9;
    eax = -eax;
    __asm ("cmc");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x977b184e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ad8e */
#include <stdint.h>
 
int32_t inst_15_values_var_0 (void) {
    eax = 0x584bde84;
    ebx = 0x16bd7079;
    ecx = 0xce9bb35d;
    edx = 0x186c8a09;
    esi = 0x1aaa3c8;
    edi = 0x5e2c3508;
    eax = -eax;
    __asm ("stc");
    edi += ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x84cf095e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805036a */
#include <stdint.h>
 
int32_t inst_138_values_var_0 (void) {
    eax = 0xa246c218;
    ebx = 0xc5c8d5cc;
    ecx = 0x25e29509;
    edx = 0x19963d42;
    esi = 0x3c4c49d1;
    edi = 0xcae43f45;
    eax = -eax;
    edi = -edi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3c5c7f7e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805530b */
#include <stdint.h>
 
int32_t inst_253_flags_var_0 (void) {
    eax = 0xb5b19c2;
    ebx = 0x2aa0257e;
    ecx = 0xed546866;
    edx = 0x14a0c4be;
    esi = 0x1854b977;
    edi = 0x22941a5a;
    eax = -eax;
    __asm ("setp bl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a288 */
#include <stdint.h>
 
int32_t inst_1_values_var_0 (void) {
    eax = 0xd95f520f;
    ebx = 0x1b629e94;
    ecx = 0xfd9aa3a2;
    edx = 0x2b1c9d2f;
    esi = 0xe33b5de8;
    edi = 0x29671ebc;
    eax = -eax;
    __asm ("aad 0x5d");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x51e67cd3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052b25 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_197_flags_var_0 (void) {
    eax = 0xc9346494;
    ebx = 0xb3528f9f;
    ecx = 0x4bfa49ff;
    edx = 0xeee54ece;
    esi = 0xd1b022b0;
    edi = 0xad55da14;
    eax = -eax;
    bx = rotate_right16 (bx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055d3c */
#include <stdint.h>
 
int32_t inst_268_flags_var_0 (void) {
    eax = 0x6bdf5905;
    ebx = 0xc3d308c6;
    ecx = 0xac6a6962;
    edx = 0x6cfc09a8;
    esi = 0xe38867c9;
    edi = 0xc0508295;
    eax = -eax;
    __asm ("shrd cx, ax, 6");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053e08 */
#include <stdint.h>
 
int32_t inst_225_flags_var_0 (void) {
    eax = 0xe468aefb;
    ebx = 0x2e8bdc7a;
    ecx = 0x5d6b99fd;
    edx = 0x10f33aa5;
    esi = 0x47ca89c9;
    edi = 0xfa9ff242;
    eax = -eax;
    bl -= 0x13;
    eax = 1;
    if (bl < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805094a */
#include <stdint.h>
 
int32_t inst_146_flags_var_0 (void) {
    eax = 0x191500e7;
    ebx = 0x39c6d1ce;
    ecx = 0xa78f015d;
    edx = 0x97c67796;
    esi = 0x5472c3ff;
    edi = 0x2fc43de4;
    eax = -eax;
    di |= bp;
    eax = 1;
    if (di < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ea03 */
#include <stdint.h>
 
int32_t inst_101_flags_var_0 (void) {
    eax = 0xc2fd0b4;
    ebx = 0xc378bd50;
    ecx = 0x3408ad5c;
    edx = 0xfa26d672;
    esi = 0xafa020a;
    edi = 0xa6d11c87;
    eax = -eax;
    __asm ("das");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054fdc */
#include <stdint.h>
 
int32_t inst_248_flags_var_0 (void) {
    eax = 0x68189d81;
    ebx = 0x18755b0;
    ecx = 0x81f57140;
    edx = 0xc3eccde7;
    esi = 0x260c0bac;
    edi = 0xb1757d02;
    eax = -eax;
    dl = (? != ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80530bd */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_205_flags_var_0 (void) {
    eax = 0x3fc944e1;
    ebx = 0x36daceb7;
    ecx = 0x61f4e3e7;
    edx = 0x9e487661;
    esi = 0xa2a7b282;
    edi = 0x3d6d3a5;
    eax = -eax;
    __asm ("stc");
    esi = rotate_right32 (esi, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e82f */
#include <stdint.h>
 
int32_t inst_99_values_var_0 (void) {
    eax = 0x8b0609cd;
    ebx = 0xbab09b32;
    ecx = 0x92abd313;
    edx = 0x4c306f56;
    esi = 0x7b26149a;
    edi = 0x695d5f24;
    eax = -eax;
    __asm ("cmpxchg edi, edx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd31a92cb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cb4a */
#include <stdint.h>
 
int32_t inst_56_values_var_0 (void) {
    eax = 0x2f69f695;
    ebx = 0x4d39d002;
    ecx = 0x2009a198;
    edx = 0x853ea869;
    esi = 0x4347c0a1;
    edi = 0x30fe9d29;
    eax = -eax;
    eax = (int32_t) ax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x38acb598;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804abe8 */
#include <stdint.h>
 
int32_t inst_13_values_var_0 (void) {
    eax = 0x230fe48d;
    ebx = 0x29f45246;
    ecx = 0x70c756e4;
    edx = 0xe745750f;
    esi = 0x683724cd;
    edi = 0x918a85f6;
    eax = -eax;
    __asm ("stc");
    cx += dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x75ccc8dc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050ad5 */
#include <stdint.h>
 
int32_t inst_148_flags_var_0 (void) {
    eax = 0x220212c9;
    ebx = 0x5168d89b;
    ecx = 0x7d5b150a;
    edx = 0x6519d88f;
    esi = 0x76528b9e;
    edi = 0x573c3cca;
    eax = -eax;
    ebx |= esi;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804eb8a */
#include <stdint.h>
 
int32_t inst_103_flags_var_0 (void) {
    eax = 0x7a7d3420;
    ebx = 0xfab4018;
    ecx = 0xa4187b95;
    edx = 0x7a19228;
    esi = 0x711dde9e;
    edi = 0xf3eaf1d6;
    eax = -eax;
    bp--;
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bp < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x18;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e15a */
#include <stdint.h>
 
int32_t inst_90_flags_var_0 (void) {
    eax = 0xdbb605a3;
    ebx = 0x114b7802;
    ecx = 0x8ca3aeb6;
    edx = 0x5596ed89;
    esi = 0x4b14204d;
    edi = 0x3fdcfdb1;
    eax = -eax;
    if (? > ?) {
        edi = esi;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80549f3 */
#include <stdint.h>
 
int32_t inst_240_values_var_0 (void) {
    eax = 0x9c4d2b3;
    ebx = 0xfbf283ff;
    ecx = 0xe1702670;
    edx = 0x464d6f1d;
    esi = 0x232eae33;
    edi = 0x852a96db;
    eax = -eax;
    __asm ("clc");
    dx -= bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x261c8be7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e7a6 */
#include <stdint.h>
 
int32_t inst_98_flags_var_0 (void) {
    eax = 0xc506b5cf;
    ebx = 0xa1a81454;
    ecx = 0x655b99c1;
    edx = 0x28d9dd9;
    esi = 0xbf6c3655;
    edi = 0x202e3e21;
    eax = -eax;
    __asm ("cmpxchg bp, ax");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x10;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804caee */
#include <stdint.h>
 
int32_t inst_55_flags_var_0 (void) {
    eax = 0xc30eb181;
    ebx = 0xd7e859c9;
    ecx = 0x1834b47a;
    edx = 0x2a8880ce;
    esi = 0x69f363af;
    edi = 0xae884d98;
    eax = -eax;
    __asm ("cwd");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ab5d */
#include <stdint.h>
 
int32_t inst_12_flags_var_0 (void) {
    eax = 0xaf746e49;
    ebx = 0x8766447b;
    ecx = 0x2b0dff38;
    edx = 0xc0d1e64d;
    esi = 0x8e6e8854;
    edi = 0x422b92f3;
    eax = -eax;
    __asm ("stc");
    bx += 0x6973;
    eax = 1;
    if (bx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xa;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051d58 */
#include <stdint.h>
 
int32_t inst_176_values_var_0 (void) {
    eax = 0xc92bd3d6;
    ebx = 0xf543c2d6;
    ecx = 0x14d8921c;
    edx = 0xea9d760b;
    esi = 0xaf172a41;
    edi = 0x423fef28;
    eax = -eax;
    bx >>= 0xdd;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xaf7116ed;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804da4e */
#include <stdint.h>
 
int32_t inst_79_flags_var_0 (void) {
    eax = 0x18cf0e9f;
    ebx = 0xf2d98669;
    ecx = 0xeb64033a;
    edx = 0x97884cab;
    esi = 0x3c18f843;
    edi = 0xd80b95fc;
    eax = -eax;
    __asm ("cmovp cx, si");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bb72 */
#include <stdint.h>
 
int32_t inst_32_flags_var_0 (void) {
    eax = 0xcfb83dab;
    ebx = 0xc36b2234;
    ecx = 0x99c3076e;
    edx = 0xe54a2961;
    esi = 0xd50f5985;
    edi = 0x51d7141e;
    eax = -eax;
    eax &= 0x412ea0ba;
    eax = 1;
    if (eax < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80511d8 */
#include <stdint.h>
 
int32_t inst_158_flags_var_0 (void) {
    eax = 0xd1bea295;
    ebx = 0x47098be6;
    ecx = 0x7cddb868;
    edx = 0xdc96f588;
    esi = 0x2244d7a6;
    edi = 0xfe9e4ebe;
    eax = -eax;
    cx >>= 1;
    eax = 1;
    if (cx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f449 */
#include <stdint.h>
 
int32_t inst_115_flags_var_0 (void) {
    eax = 0x4fe94514;
    ebx = 0x42d82b76;
    ecx = 0xef9d1df7;
    edx = 0xfac356f7;
    esi = 0xa5fe3990;
    edi = 0xaf11438f;
    eax = -eax;
    eax *= 0xc45a6591;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050fbf */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_155_flags_var_0 (void) {
    eax = 0x9043f305;
    ebx = 0x8bb59f69;
    ecx = 0x670e278e;
    edx = 0x90b742d9;
    esi = 0x3bf63cab;
    edi = 0x338130fe;
    eax = -eax;
    bp = rotate_right16 (bp, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f22b */
#include <stdint.h>
 
int32_t inst_112_flags_var_0 (void) {
    eax = 0xbf3076dc;
    ebx = 0x65610289;
    ecx = 0x10a31d68;
    edx = 0xba91c735;
    esi = 0x5baf0ba0;
    edi = 0x772f3059;
    eax = -eax;
    dx:ax = ax * bp;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056b05 */
#include <stdint.h>
 
int32_t inst_286_flags_var_0 (void) {
    eax = 0xb20cf2f8;
    ebx = 0xc2a9edfc;
    ecx = 0xde6b9523;
    edx = 0xef9b2229;
    esi = 0xec291b28;
    edi = 0x76647a10;
    eax = -eax;
    tmp_0 = bh;
    bh = ch;
    ch = tmp_0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a339 */
#include <stdint.h>
 
int32_t inst_2_values_var_0 (void) {
    eax = 0x1b8fb77b;
    ebx = 0x57a30a1e;
    ecx = 0x3d30bbe4;
    edx = 0x78aebc24;
    esi = 0x4914433b;
    edi = 0xbc7445da;
    eax = -eax;
    __asm ("aam 0x4f");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x67f44f97;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055e3e */
#include <stdint.h>
 
int32_t inst_270_values_var_0 (void) {
    eax = 0xddbf7e10;
    ebx = 0xb381209e;
    ecx = 0x3dce54df;
    edx = 0x31cad2a2;
    esi = 0x288dcac7;
    edi = 0x8f1fbc4c;
    eax = -eax;
    __asm ("shrd esi, ebx, 0xdb");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x85894dd9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80545dd */
#include <stdint.h>
 
int32_t inst_235_values_var_0 (void) {
    eax = 0xbd98d8af;
    ebx = 0xc01df142;
    ecx = 0xe708a97e;
    edx = 0x87cb9c72;
    esi = 0x1545e85f;
    edi = 0xf5f90dfa;
    eax = -eax;
    __asm ("stc");
    edx -= 0x7443b5d5;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3dba0fdc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c039 */
#include <stdint.h>
 
int32_t inst_39_flags_var_0 (void) {
    eax = 0x7234b0ae;
    ebx = 0x57b85961;
    ecx = 0x122060d7;
    edx = 0x6a960ec6;
    esi = 0xa11d3a7;
    edi = 0x4e41b6f2;
    eax = -eax;
    eax = 1;
    if (((cx >> 0x20) & 1) < 0) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054851 */
#include <stdint.h>
 
int32_t inst_238_values_var_0 (void) {
    eax = 0x44b5899d;
    ebx = 0x96df2417;
    ecx = 0x6c319f98;
    edx = 0xd8298326;
    esi = 0xda71d8d1;
    edi = 0xade3641;
    eax = -eax;
    __asm ("clc");
    cl -= dh;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb08bc9c5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fac9 */
#include <stdint.h>
 
int32_t inst_125_values_var_0 (void) {
    eax = 0xf3080959;
    ebx = 0x72183674;
    ecx = 0x434d2f92;
    edx = 0x61204bcd;
    esi = 0xb8130993;
    edi = 0x9ff6326a;
    eax = -eax;
    al = dh;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb57e9b5c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b043 */
#include <stdint.h>
 
int32_t inst_18_flags_var_0 (void) {
    eax = 0x2df65d76;
    ebx = 0xeae94130;
    ecx = 0xafc907c5;
    edx = 0x87f9aa51;
    esi = 0x2dd2b867;
    edi = 0x65323c9b;
    eax = -eax;
    __asm ("clc");
    cx += 0xf1d2;
    eax = 1;
    if (cx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (cx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d1b4 */
#include <stdint.h>
 
int32_t inst_66_values_var_0 (void) {
    eax = 0xe6543904;
    ebx = 0xf41d2290;
    ecx = 0x3d79ad8d;
    edx = 0x1de0a2c4;
    esi = 0x1daade0;
    edi = 0x52107e01;
    eax = -eax;
    if (? >= ?) {
        esi = ecx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcc69dc1e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b5ae */
#include <stdint.h>
 
int32_t inst_25_values_var_0 (void) {
    eax = 0x5aded848;
    ebx = 0xf1e5e74f;
    ecx = 0x58c0cd3b;
    edx = 0x341ec58e;
    esi = 0x657f4e07;
    edi = 0x33de83c6;
    eax = -eax;
    dx += cx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x659e5f98;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bd55 */
#include <stdint.h>
 
int32_t inst_35_values_var_0 (void) {
    eax = 0xd623bb47;
    ebx = 0x309549c4;
    ecx = 0xc68646f8;
    edx = 0x1df8e435;
    esi = 0x73a4152b;
    edi = 0xe9cfff83;
    eax = -eax;
    __asm ("bsr edx, edx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7d2cac7a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054b99 */
#include <stdint.h>
 
int32_t inst_242_values_var_0 (void) {
    eax = 0x2cd80a7c;
    ebx = 0x76fdd787;
    ecx = 0x8b7e5e0f;
    edx = 0xc7740eb0;
    esi = 0x2ca4d3f9;
    edi = 0x9dcb4ee0;
    eax = -eax;
    __asm ("clc");
    ebx -= esi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb429b4f6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056ba6 */
#include <stdint.h>
 
int32_t inst_287_flags_var_0 (void) {
    eax = 0xe7e11668;
    ebx = 0xd954a7a2;
    ecx = 0x149c160b;
    edx = 0x2d4e5c68;
    esi = 0xa7af03ff;
    edi = 0xef618a38;
    eax = -eax;
    tmp_0 = ax;
    ax = dx;
    dx = tmp_0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804db4f */
#include <stdint.h>
 
int32_t inst_81_values_var_0 (void) {
    eax = 0xa7512b67;
    ebx = 0x9905b8e2;
    ecx = 0xc8f762a8;
    edx = 0x9295233f;
    esi = 0x480c93a9;
    edi = 0xd4e1167e;
    eax = -eax;
    __asm ("cmovnp bx, bx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9bf718f7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052030 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_180_flags_var_0 (void) {
    eax = 0xc1359fc5;
    ebx = 0xbe482d20;
    ecx = 0x38bc10f0;
    edx = 0xfed94be;
    esi = 0x35b81771;
    edi = 0xb2e2a755;
    eax = -eax;
    di = rotate_right16 (di, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805133b */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_160_flags_var_0 (void) {
    eax = 0xfb172322;
    ebx = 0x6ae9a04;
    ecx = 0x75f9d2b1;
    edx = 0xe12a1c24;
    esi = 0x8eb8e110;
    edi = 0x929e69bc;
    eax = -eax;
    ecx = rotate_right32 (ecx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80546b3 */
#include <stdint.h>
 
int32_t inst_236_values_var_0 (void) {
    eax = 0x4282ac7a;
    ebx = 0x1cf985f0;
    ecx = 0x63079532;
    edx = 0x5161773;
    esi = 0xaafdaa7b;
    edi = 0xee40043c;
    eax = -eax;
    __asm ("stc");
    esi -= ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3cf39012;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052276 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_184_values_var_0 (void) {
    eax = 0xaa4f5af7;
    ebx = 0xb162484c;
    ecx = 0x5861e58b;
    edx = 0x31ee67d8;
    esi = 0x287a8d2f;
    edi = 0xb5f8acb5;
    eax = -eax;
    ebx = rotate_left32 (ebx, 0x2a);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x43ef34a0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ff88 */
#include <stdint.h>
 
int32_t inst_132_flags_var_0 (void) {
    eax = 0x4f2896cb;
    ebx = 0xddcbb75b;
    ecx = 0x560e9fcc;
    edx = 0x7f8fa1ef;
    esi = 0x349c6d78;
    edi = 0x11514813;
    eax = -eax;
    ebp = (int32_t) bx;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a8ef */
#include <stdint.h>
 
int32_t inst_9_flags_var_0 (void) {
    eax = 0x8172768f;
    ebx = 0x695ce213;
    ecx = 0x98a58a3e;
    edx = 0xcfa7eacd;
    esi = 0x69eb3697;
    edi = 0xa0974842;
    eax = -eax;
    ecx += ebp;
    eax = 1;
    if (ecx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ecx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x18;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d4e7 */
#include <stdint.h>
 
int32_t inst_71_values_var_0 (void) {
    eax = 0x5a00f2ef;
    ebx = 0x47f7a6f4;
    ecx = 0x3eaf6483;
    edx = 0x9df99df5;
    esi = 0xb0d3505a;
    edi = 0x39e9238b;
    eax = -eax;
    if (? <= ?) {
        cx = bp;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe1a28aa5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056854 */
#include <stdint.h>
 
int32_t inst_283_values_var_0 (void) {
    eax = 0x98527d77;
    ebx = 0x4fbc85eb;
    ecx = 0xa72dd9f4;
    edx = 0x953cb623;
    esi = 0xc8fd65e0;
    edi = 0x52cbc29f;
    eax = -eax;
    __asm ("xadd al, dh");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x96f0ff75;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c559 */
#include <stdint.h>
 
int32_t inst_47_values_var_0 (void) {
    eax = 0x5390b3b2;
    ebx = 0x568df90;
    ecx = 0xf5f965ff;
    edx = 0xc837ad04;
    esi = 0xf7d5ee24;
    edi = 0x32eaa9f1;
    eax = -eax;
    __asm ("btr ax, 0x3c");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2f97c959;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055f29 */
#include <stdint.h>
 
int32_t inst_271_flags_var_0 (void) {
    eax = 0xdf9cc8fb;
    ebx = 0xd4159967;
    ecx = 0xc383389d;
    edx = 0x90806634;
    esi = 0x83a0d59e;
    edi = 0x15fa1b7d;
    eax = -eax;
    bh -= 0xd0;
    eax = 1;
    if (bh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bh < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d0b2 */
#include <stdint.h>
 
int32_t inst_64_flags_var_0 (void) {
    eax = 0x43cdc33f;
    ebx = 0x6f67bb82;
    ecx = 0x8dda1e60;
    edx = 0xdd2975d0;
    esi = 0xfecfa731;
    edi = 0x30c96ee3;
    eax = -eax;
    if (? < ?) {
        eax = edx;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b455 */
#include <stdint.h>
 
int32_t inst_23_flags_var_0 (void) {
    eax = 0xdc031921;
    ebx = 0x5230dae2;
    ecx = 0xdcefdb3;
    edx = 0x6af96b2;
    esi = 0x645832bb;
    edi = 0x12703341;
    eax = -eax;
    dl += dl;
    eax = 1;
    if (dl < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055823 */
#include <stdint.h>
 
int32_t inst_261_values_var_0 (void) {
    eax = 0xe4362af4;
    ebx = 0xdc30879a;
    ecx = 0x56fe9a58;
    edx = 0xa61faeaf;
    esi = 0x76d48c80;
    edi = 0xa6de815d;
    eax = -eax;
    __asm ("shrd di, di, 1");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc9045d6a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052adf */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_197_values_var_0 (void) {
    eax = 0x9100f0ee;
    ebx = 0xce171dea;
    ecx = 0x10a2260d;
    edx = 0xec39a1bb;
    esi = 0xb51a9dee;
    edi = 0x9c2ac302;
    eax = -eax;
    dx = rotate_right16 (dx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc5a43c19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b924 */
#include <stdint.h>
 
int32_t inst_29_flags_var_0 (void) {
    eax = 0xe667eaca;
    ebx = 0xc7f2004;
    ecx = 0xcb1905d8;
    edx = 0x8daca443;
    esi = 0x9a7851eb;
    edi = 0xc3e19b37;
    eax = -eax;
    bh &= bh;
    eax = 1;
    if (bh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c401 */
#include <stdint.h>
 
int32_t inst_45_values_var_0 (void) {
    eax = 0x4bcb34ef;
    ebx = 0x145d8da4;
    ecx = 0x28abdf7a;
    edx = 0xf83ca378;
    esi = 0xa3f38fc;
    edi = 0x232de7fb;
    eax = -eax;
    __asm ("btr bp, bp");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6af0eb2e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80551c5 */
#include <stdint.h>
 
int32_t inst_251_flags_var_0 (void) {
    eax = 0x15037ba5;
    ebx = 0x8d8c42ce;
    ecx = 0xba34c593;
    edx = 0x90b70b07;
    esi = 0xbc502b11;
    edi = 0xb28f2024;
    eax = -eax;
    __asm ("sets al");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050700 */
#include <stdint.h>
 
int32_t inst_143_flags_var_0 (void) {
    eax = 0x83483f72;
    ebx = 0xa1c729c6;
    ecx = 0x254fc9ad;
    edx = 0x8443ddde;
    esi = 0xbf1e5a64;
    edi = 0xa4208095;
    eax = -eax;
    dh |= 0xfd;
    eax = 1;
    if (dh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80562f0 */
#include <stdint.h>
 
int32_t inst_276_values_var_0 (void) {
    eax = 0x8a191ffe;
    ebx = 0x7189beac;
    ecx = 0xe19969d2;
    edx = 0x390167bf;
    esi = 0x389c4ab3;
    edi = 0xded56d27;
    eax = -eax;
    ebp -= ebp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x197d2819;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805429c */
#include <stdint.h>
 
int32_t inst_231_values_var_0 (void) {
    eax = 0x77829bd4;
    ebx = 0xb0d86b2f;
    ecx = 0x7cf11b55;
    edx = 0x2733043e;
    esi = 0x2ae420eb;
    edi = 0x21ca6b19;
    eax = -eax;
    __asm ("stc");
    al -= 0x5a;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x761b0765;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ccd4 */
#include <stdint.h>
 
int32_t inst_58_flags_var_0 (void) {
    eax = 0xe4764517;
    ebx = 0x98d851c7;
    ecx = 0x3c543e05;
    edx = 0x29623103;
    esi = 0x27e7dfed;
    edi = 0xd81b2235;
    eax = -eax;
    __asm ("cmc");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804add4 */
#include <stdint.h>
 
int32_t inst_15_flags_var_0 (void) {
    eax = 0xa377113d;
    ebx = 0x1b7ade6;
    ecx = 0x1771ebfd;
    edx = 0x50ee6673;
    esi = 0xd44e971e;
    edi = 0xf4518665;
    eax = -eax;
    __asm ("stc");
    edx += ebx;
    eax = 1;
    if (edx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055fb1 */
#include <stdint.h>
 
int32_t inst_272_values_var_0 (void) {
    eax = 0x14b67a01;
    ebx = 0x248eb796;
    ecx = 0x23247c98;
    edx = 0xbc5a050c;
    esi = 0xee1c1b9;
    edi = 0xb5aaa23e;
    eax = -eax;
    ch -= al;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7f1f50b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80555f4 */
#include <stdint.h>
 
int32_t inst_258_values_var_0 (void) {
    eax = 0x226c1aa;
    ebx = 0xf8cf0700;
    ecx = 0xb814e8cb;
    edx = 0xc0e923a1;
    esi = 0xbc18a5b8;
    edi = 0x3af34cc2;
    eax = -eax;
    dl = (? > ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x872dcc5b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053603 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_213_values_var_0 (void) {
    eax = 0x288e51a7;
    ebx = 0x1455b3c5;
    ecx = 0xe86b9c10;
    edx = 0x55f011f2;
    esi = 0x8d056eb9;
    edi = 0xd87c711f;
    eax = -eax;
    dl = rotate_right8 (dl, 0xd5);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x965472be;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056d65 */
#include <stdint.h>
 
int32_t inst_290_values_var_0 (void) {
    eax = 0xedfeeacf;
    ebx = 0x42abcc35;
    ecx = 0x3bab4bce;
    edx = 0x9d15b2f9;
    esi = 0xb4a2373e;
    edi = 0x5466f344;
    eax = -eax;
    bh ^= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe58e917f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056540 */
#include <stdint.h>
 
int32_t inst_279_values_var_0 (void) {
    eax = 0x3572de15;
    ebx = 0xc19daa25;
    ecx = 0xcffa30b7;
    edx = 0x9e949d9f;
    esi = 0x9c00bed;
    edi = 0x100bb1ac;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1b5a9f49;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805450d */
#include <stdint.h>
 
int32_t inst_234_values_var_0 (void) {
    eax = 0xdb9c6c22;
    ebx = 0xe2f6c57a;
    ecx = 0x62e17270;
    edx = 0xf96bac18;
    esi = 0x340c24f9;
    edi = 0xc0c94ccb;
    eax = -eax;
    __asm ("stc");
    di -= bx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x43cab0c7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80512f6 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_160_values_var_0 (void) {
    eax = 0x7ef78e09;
    ebx = 0x7c7aa253;
    ecx = 0xf89be3a2;
    edx = 0x51f14f02;
    esi = 0x6e66dcc1;
    edi = 0x1dd1d8ba;
    eax = -eax;
    ebx = rotate_right32 (ebx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x200a1029;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c6fc */
#include <stdint.h>
 
int32_t inst_49_flags_var_0 (void) {
    eax = 0xa18fec3c;
    ebx = 0xacafad60;
    ecx = 0x64359cf;
    edx = 0xeea61382;
    esi = 0xf10886aa;
    edi = 0xb94a3088;
    eax = -eax;
    __asm ("bts di, di");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055122 */
#include <stdint.h>
 
int32_t inst_250_flags_var_0 (void) {
    eax = 0x5e8b8fb7;
    ebx = 0x4d324dde;
    ecx = 0x47efc82b;
    edx = 0x53a7296e;
    esi = 0x89c5b3f2;
    edi = 0x7c0470d5;
    eax = -eax;
    dh = (? > ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80517e9 */
#include <stdint.h>
 
int32_t inst_167_flags_var_0 (void) {
    eax = 0x7b481d54;
    ebx = 0x1a233c95;
    ecx = 0x569b685a;
    edx = 0x8fa64007;
    esi = 0x13dfac1a;
    edi = 0x71ea2cf3;
    eax = -eax;
    ah <<= 0x52;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f923 */
#include <stdint.h>
 
int32_t inst_122_flags_var_0 (void) {
    eax = 0x942901b3;
    ebx = 0x5b984f97;
    ecx = 0x89ea15d4;
    edx = 0x43485b9d;
    esi = 0x97d7f9e4;
    edi = 0x744acd62;
    eax = -eax;
    di = esi + ecx*8 - 0x37f1c843;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054ef3 */
#include <stdint.h>
 
int32_t inst_247_values_var_0 (void) {
    eax = 0x2810d50e;
    ebx = 0xf3ac370a;
    ecx = 0xec551451;
    edx = 0xf367b8a8;
    esi = 0x7101cc5b;
    edi = 0x57dd4993;
    eax = -eax;
    cl = (? == ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2e2fa385;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052fc4 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_204_values_var_0 (void) {
    eax = 0xa3393423;
    ebx = 0xafec6407;
    ecx = 0x7718c38a;
    edx = 0xbce28367;
    esi = 0x7f2dae2c;
    edi = 0x465ed99a;
    eax = -eax;
    __asm ("stc");
    ebx = rotate_left32 (ebx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7599d4f2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d9aa */
#include <stdint.h>
 
int32_t inst_78_flags_var_0 (void) {
    eax = 0xcb662c8c;
    ebx = 0x9ad3c963;
    ecx = 0x3a9839d8;
    edx = 0xfe4496f4;
    esi = 0x78c0c8cd;
    edi = 0x5a16b7a9;
    eax = -eax;
    __asm ("cmovns ebx, edi");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804baad */
#include <stdint.h>
 
int32_t inst_31_flags_var_0 (void) {
    eax = 0x6d17169a;
    ebx = 0xac8feb20;
    ecx = 0xa6790ebc;
    edx = 0xaff3d2b4;
    esi = 0xc25bde45;
    edi = 0xec6da871;
    eax = -eax;
    bp &= ax;
    eax = 1;
    if (bp < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053747 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_215_values_var_0 (void) {
    eax = 0x8bb8d2bc;
    ebx = 0x700efe13;
    ecx = 0x9a7cecd0;
    edx = 0x2cb0fb33;
    esi = 0x47be22f4;
    edi = 0x666d96ef;
    eax = -eax;
    cl = rotate_right8 (cl, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x189b8c0b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055222 */
#include <stdint.h>
 
int32_t inst_252_values_var_0 (void) {
    eax = 0x10ba8f9f;
    ebx = 0xa6798c8e;
    ecx = 0x5bac86b4;
    edx = 0x8f87cb94;
    esi = 0x7d8dc9c4;
    edi = 0x8e2ab5e1;
    eax = -eax;
    __asm ("setns al");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x91e19d41;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805382f */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_216_flags_var_0 (void) {
    eax = 0x204412c8;
    ebx = 0x52806838;
    ecx = 0xfef012d2;
    edx = 0x688ebce5;
    esi = 0xca62efdf;
    edi = 0x2cd091e4;
    eax = -eax;
    bp = rotate_left16 (bp, 0xf);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051bb2 */
#include <stdint.h>
 
int32_t inst_173_flags_var_0 (void) {
    eax = 0x6f200724;
    ebx = 0xcb55950f;
    ecx = 0x24af18b;
    edx = 0x6c2d8e71;
    esi = 0xf07c4700;
    edi = 0x4d395509;
    eax = -eax;
    dh >>= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051ea2 */
#include <stdint.h>
 
int32_t inst_178_values_var_0 (void) {
    eax = 0x76f4c352;
    ebx = 0xd17c572e;
    ecx = 0xfb18d765;
    edx = 0xeda6a4e0;
    esi = 0xf03f591;
    edi = 0xcfe7e64;
    eax = -eax;
    di >>= 0x31;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7020e4f0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050173 */
#include <stdint.h>
 
int32_t inst_135_flags_var_0 (void) {
    eax = 0x1f27d3d3;
    ebx = 0x93497bce;
    ecx = 0x2e53e796;
    edx = 0x843a346f;
    esi = 0x423c29e9;
    edi = 0x7a226b3;
    eax = -eax;
    esi = (int32_t) dx;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056335 */
#include <stdint.h>
 
int32_t inst_276_flags_var_0 (void) {
    eax = 0xef79605f;
    ebx = 0x96099181;
    ecx = 0xb02ded99;
    edx = 0x7e14d959;
    esi = 0xef5d48fc;
    edi = 0xcba284cd;
    eax = -eax;
    edx -= eax;
    eax = 1;
    if (edx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80542e2 */
#include <stdint.h>
 
int32_t inst_231_flags_var_0 (void) {
    eax = 0xfd885fc2;
    ebx = 0x562eb816;
    ecx = 0xc1ba440f;
    edx = 0x51092844;
    esi = 0x9d148812;
    edi = 0xe39c7d94;
    eax = -eax;
    __asm ("stc");
    ch -= 0x7d;
    eax = 1;
    if (ch < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ch < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053223 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_207_flags_var_0 (void) {
    eax = 0x9121935d;
    ebx = 0x69d1aa72;
    ecx = 0x4fe5c5a6;
    edx = 0xa689a1b;
    esi = 0x89e81f64;
    edi = 0xb69056e2;
    eax = -eax;
    __asm ("clc");
    bh = rotate_right8 (bh, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052319 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_185_values_var_0 (void) {
    eax = 0x5c2b1b50;
    ebx = 0x51ae10c6;
    ecx = 0x329a0e32;
    edx = 0x981abd4c;
    esi = 0x458d61a2;
    edi = 0xc99cda1b;
    eax = -eax;
    edi = rotate_right32 (edi, 0xcf);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9e11fdc7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f6da */
#include <stdint.h>
 
int32_t inst_119_values_var_0 (void) {
    eax = 0x1173d2e5;
    ebx = 0x4b975a86;
    ecx = 0xdf2fa574;
    edx = 0x73eaa24b;
    esi = 0x5238bae;
    edi = 0x6fd7c59f;
    eax = -eax;
    dx:ax = ax * di;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3b4532bf;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80571a8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2e4b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805128a */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_159_flags_var_0 (void) {
    eax = 0xf7856ee4;
    ebx = 0x11dbd3fb;
    ecx = 0xd2a6240c;
    edx = 0xd4f638be;
    esi = 0x60a877c0;
    edi = 0x7eb29518;
    eax = -eax;
    edi = rotate_left32 (edi, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f501 */
#include <stdint.h>
 
int32_t inst_116_flags_var_0 (void) {
    eax = 0xda55fd17;
    ebx = 0x26334fdb;
    ecx = 0xcdde5976;
    edx = 0xf7e37d4c;
    esi = 0x7797a5bf;
    edi = 0x47c835d9;
    eax = -eax;
    dx = si * 0x921;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dc97 */
#include <stdint.h>
 
int32_t inst_83_values_var_0 (void) {
    eax = 0xfb7cf054;
    ebx = 0x51f3e68a;
    ecx = 0xd6a70b97;
    edx = 0x2ba97255;
    esi = 0x3c3322ec;
    edi = 0x45cc03e4;
    eax = -eax;
    if (? < ?) {
        dx = si;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa8abceb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fb6a */
#include <stdint.h>
 
int32_t inst_126_values_var_0 (void) {
    eax = 0xc26d657d;
    ebx = 0x350090c9;
    ecx = 0xc32631a6;
    edx = 0x143c4949;
    esi = 0x902ee4ec;
    edi = 0x4c40b753;
    eax = -eax;
    di = 0x982;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1f7cfea;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ed10 */
#include <stdint.h>
 
int32_t inst_105_flags_var_0 (void) {
    eax = 0xf6e49722;
    ebx = 0xcac05189;
    ecx = 0x7e903df1;
    edx = 0x25b737e9;
    esi = 0x85cd2ec4;
    edi = 0xe10fb863;
    eax = -eax;
    bl++;
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056ac0 */
#include <stdint.h>
 
int32_t inst_286_values_var_0 (void) {
    eax = 0x518c03ee;
    ebx = 0xa95eacf7;
    ecx = 0xd0b855cc;
    edx = 0x990b3b67;
    esi = 0x2dfe580b;
    edi = 0xc7927f81;
    eax = -eax;
    tmp_0 = bh;
    bh = cl;
    cl = tmp_0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcd8a808d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80523bc */
#include <stdint.h>
 
int32_t inst_186_values_var_0 (void) {
    eax = 0xfad85e4c;
    ebx = 0xf77b1435;
    ecx = 0x77ddefe2;
    edx = 0x6a596487;
    esi = 0x1a205004;
    edi = 0x9073882;
    eax = -eax;
    ebp >>= 0xf7;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x20192ca;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e351 */
#include <stdint.h>
 
int32_t inst_93_values_var_0 (void) {
    eax = 0xc8b41186;
    ebx = 0x70db410b;
    ecx = 0x42f2239;
    edx = 0x40ef9a68;
    esi = 0xbfe93999;
    edi = 0x8beb4610;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf728f5f6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c762 */
#include <stdint.h>
 
int32_t inst_50_values_var_0 (void) {
    eax = 0x6ca8592f;
    ebx = 0x37103778;
    ecx = 0xb2fdbb07;
    edx = 0x6961c2aa;
    esi = 0x1a4c9d39;
    edi = 0x82e05682;
    eax = -eax;
    __asm ("bts ebx, eax");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x41bba8a8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051b11 */
#include <stdint.h>
 
int32_t inst_172_flags_var_0 (void) {
    eax = 0x3af5a8e8;
    ebx = 0x38b5812d;
    ecx = 0x926b6ad6;
    edx = 0x63d33969;
    esi = 0x8e86c16d;
    edi = 0x5a04c363;
    eax = -eax;
    al <<= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d906 */
#include <stdint.h>
 
int32_t inst_77_flags_var_0 (void) {
    eax = 0x345503a8;
    ebx = 0x1cf91d01;
    ecx = 0xc00f8b6c;
    edx = 0xbd1de6cd;
    esi = 0x77ecd929;
    edi = 0x41d367aa;
    eax = -eax;
    __asm ("cmovns ax, ax");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b9e8 */
#include <stdint.h>
 
int32_t inst_30_flags_var_0 (void) {
    eax = 0x9b862864;
    ebx = 0xa1f0cbb5;
    ecx = 0xaecd870b;
    edx = 0x21b4ca3f;
    esi = 0x85bd39ac;
    edi = 0x98d4df8;
    eax = -eax;
    dx &= 0xfdb5;
    eax = 1;
    if (dx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80529c0 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_195_flags_var_0 (void) {
    eax = 0xdf8b059d;
    ebx = 0xce90041d;
    ecx = 0xa9061990;
    edx = 0x4a2c987c;
    esi = 0xf63fb37b;
    edi = 0x3b4b0a52;
    eax = -eax;
    al = rotate_right8 (al, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cfc7 */
#include <stdint.h>
 
int32_t inst_63_values_var_0 (void) {
    eax = 0x9301f907;
    ebx = 0x74fed9e4;
    ecx = 0xcaf80f6;
    edx = 0x38ad76fc;
    esi = 0x503290b5;
    edi = 0xddc40d6a;
    eax = -eax;
    if (? < ?) {
        cx = si;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfa915594;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b342 */
#include <stdint.h>
 
int32_t inst_22_values_var_0 (void) {
    eax = 0x231476cb;
    ebx = 0x3b8390d;
    ecx = 0x835e65cb;
    edx = 0xb611b6fb;
    esi = 0xdb2bdaa5;
    edi = 0xd3255c8b;
    eax = -eax;
    bl += 0x3e;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x58b668;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dddf */
#include <stdint.h>
 
int32_t inst_85_values_var_0 (void) {
    eax = 0x7975bd18;
    ebx = 0x70f5b1cf;
    ecx = 0x81841a17;
    edx = 0xcd927716;
    esi = 0x87bbdf53;
    edi = 0x452422f8;
    eax = -eax;
    if (? >= ?) {
        di = dx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1876e46;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c0a0 */
#include <stdint.h>
 
int32_t inst_40_values_var_0 (void) {
    eax = 0x35087a60;
    ebx = 0xf5b41f40;
    ecx = 0xa746bab0;
    edx = 0x6720271b;
    esi = 0x338f9072;
    edi = 0xa3aceb17;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbdfdab86;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051fea */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_180_values_var_0 (void) {
    eax = 0x39d4d92b;
    ebx = 0x2b4146a4;
    ecx = 0x78e0a6e4;
    edx = 0xd2aae59c;
    esi = 0xd8a410ff;
    edi = 0xf5d3788f;
    eax = -eax;
    cx = rotate_right16 (cx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x79d27af6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805491f */
#include <stdint.h>
 
int32_t inst_239_values_var_0 (void) {
    eax = 0x85a9051f;
    ebx = 0xc8dbac19;
    ecx = 0x50007838;
    edx = 0x135aee55;
    esi = 0x5884d7e3;
    edi = 0xa270c837;
    eax = -eax;
    __asm ("clc");
    si -= 0x3e62;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4d0dcb3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051072 */
#include <stdint.h>
 
int32_t inst_156_flags_var_0 (void) {
    eax = 0x6e177e04;
    ebx = 0x8022986d;
    ecx = 0xff47d61f;
    edx = 0x8a558d71;
    esi = 0xfe63634b;
    edi = 0xb0de8687;
    eax = -eax;
    cx >>= 1;
    eax = 1;
    if (cx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f2dd */
#include <stdint.h>
 
int32_t inst_113_flags_var_0 (void) {
    eax = 0x8ec2b22f;
    ebx = 0x50385581;
    ecx = 0xfca17520;
    edx = 0xd5da3171;
    esi = 0x7b8dedff;
    edi = 0xf06b57f0;
    eax = -eax;
    edx:eax = eax * edi;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805047a */
#include <stdint.h>
 
int32_t inst_139_flags_var_0 (void) {
    eax = 0xdb6c083;
    ebx = 0x9b409677;
    ecx = 0xd0b6b3d1;
    edx = 0xa84db99d;
    esi = 0xd91187f1;
    edi = 0x8e34c76d;
    eax = -eax;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d58c */
#include <stdint.h>
 
int32_t inst_72_values_var_0 (void) {
    eax = 0x8414aab;
    ebx = 0x20b1ee79;
    ecx = 0xfd50153f;
    edx = 0x1d3d3af2;
    esi = 0xb21b6dd1;
    edi = 0x9fbb3f;
    eax = -eax;
    if (? <= ?) {
        edi = eax;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7c7bbb77;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805607d */
#include <stdint.h>
 
int32_t inst_273_values_var_0 (void) {
    eax = 0x7e36b4c4;
    ebx = 0x3c47aca5;
    ecx = 0x133799bb;
    edx = 0x1c6ed6b1;
    esi = 0xf363c09c;
    edi = 0x1672e40c;
    eax = -eax;
    dx -= 0xa9eb;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7694ebe9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056793 */
#include <stdint.h>
 
int32_t inst_282_values_var_0 (void) {
    eax = 0xcc522751;
    ebx = 0x8ff67301;
    ecx = 0x7cd8d5f1;
    edx = 0x14d1c372;
    esi = 0x16877e98;
    edi = 0x9d66443a;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x264c5ff1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ee97 */
#include <stdint.h>
 
int32_t inst_107_flags_var_0 (void) {
    eax = 0xcb0bc376;
    ebx = 0x87e4a3c8;
    ecx = 0x17484a23;
    edx = 0xd4e1f31;
    esi = 0xcd44f6a4;
    edi = 0x76aab810;
    eax = -eax;
    esi++;
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (esi < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80528ca */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_194_values_var_0 (void) {
    eax = 0x1a99f133;
    ebx = 0x8bee9873;
    ecx = 0xbe717b5b;
    edx = 0xb14074f2;
    esi = 0x13079635;
    edi = 0x82751549;
    eax = -eax;
    ah = rotate_left8 (ah, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8e65f46;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051b6d */
#include <stdint.h>
 
int32_t inst_173_values_var_0 (void) {
    eax = 0xfca19d3f;
    ebx = 0xe24a805f;
    ecx = 0x1853e4a8;
    edx = 0xdbe36654;
    esi = 0xf8ae0492;
    edi = 0x77966f5a;
    eax = -eax;
    bh >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb777bbca;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805235f */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_185_flags_var_0 (void) {
    eax = 0x63dc31e9;
    ebx = 0xebdee27;
    ecx = 0x7f46c902;
    edx = 0xf65f606d;
    esi = 0xe573ffa6;
    edi = 0xdc265b06;
    eax = -eax;
    edx = rotate_right32 (edx, 0xfd);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051c0e */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_174_values_var_0 (void) {
    eax = 0x6626110;
    ebx = 0xf1b7ecb5;
    ecx = 0x8dd4a958;
    edx = 0x101e8143;
    esi = 0x146c3aa9;
    edi = 0xafa29494;
    eax = -eax;
    di = rotate_left16 (di, 0xa0);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2cf8b376;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80558ea */
#include <stdint.h>
 
int32_t inst_262_values_var_0 (void) {
    eax = 0xf8aa0e14;
    ebx = 0x41f1f33d;
    ecx = 0x43baa3f4;
    edx = 0x311f0806;
    esi = 0x11069882;
    edi = 0xa6534b36;
    eax = -eax;
    __asm ("shrd edx, esi, 1");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd1181e42;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cddc */
#include <stdint.h>
 
int32_t inst_60_values_var_0 (void) {
    eax = 0x9e24aa4a;
    ebx = 0x411feec2;
    ecx = 0xc238c0c2;
    edx = 0x7feac636;
    esi = 0x6d104b49;
    edi = 0x5a87a35c;
    eax = -eax;
    __asm ("cmovo eax, ebx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xac81da98;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d257 */
#include <stdint.h>
 
int32_t inst_67_values_var_0 (void) {
    eax = 0xb330f08;
    ebx = 0xd65e9fea;
    ecx = 0xd55a10ba;
    edx = 0x46a874c8;
    esi = 0xecd396e4;
    edi = 0x6a33dc87;
    eax = -eax;
    if (? == ?) {
        si = dx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe55cda68;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b67c */
#include <stdint.h>
 
int32_t inst_26_values_var_0 (void) {
    eax = 0xa25f2729;
    ebx = 0x3348764c;
    ecx = 0x84c3bee9;
    edx = 0xd21226cc;
    esi = 0x6904c151;
    edi = 0xe6ba32d2;
    eax = -eax;
    ebx += 0x6dbc289e;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb958cdf3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051600 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_164_flags_var_0 (void) {
    eax = 0xa52b1355;
    ebx = 0xf9faca1c;
    ecx = 0x76e4b2be;
    edx = 0xc0effd02;
    esi = 0xaf8dd028;
    edi = 0xb8adb263;
    eax = -eax;
    cl = rotate_left8 (cl, 0x15);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055ff6 */
#include <stdint.h>
 
int32_t inst_272_flags_var_0 (void) {
    eax = 0x1d4fa0fa;
    ebx = 0xd4598f3f;
    ecx = 0x142f91ff;
    edx = 0x896bf3ad;
    esi = 0xee9985b;
    edi = 0x4c7436fa;
    eax = -eax;
    dh -= ch;
    eax = 1;
    if (dh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dh < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bf8c */
#include <stdint.h>
 
int32_t inst_38_flags_var_0 (void) {
    eax = 0x786049f7;
    ebx = 0xc789449c;
    ecx = 0xee050b60;
    edx = 0x4b7450ef;
    esi = 0x5ec6607;
    edi = 0x36bd7c4d;
    eax = -eax;
    eax = 1;
    if (((eax >> ebp) & 1) < 0) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d342 */
#include <stdint.h>
 
int32_t inst_68_flags_var_0 (void) {
    eax = 0xd972b69;
    ebx = 0x9584d49e;
    ecx = 0xba272271;
    edx = 0xba823335;
    esi = 0x2f8c6685;
    edi = 0xfa1154dd;
    eax = -eax;
    if (? == ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b795 */
#include <stdint.h>
 
int32_t inst_27_flags_var_0 (void) {
    eax = 0x2f97b977;
    ebx = 0x8ece5039;
    ecx = 0xeca1069d;
    edx = 0x5c8e5fb7;
    esi = 0x4480417b;
    edi = 0x3b39c192;
    eax = -eax;
    ebx += eax;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x13;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fdfa */
#include <stdint.h>
 
int32_t inst_130_values_var_0 (void) {
    eax = 0xc56aab97;
    ebx = 0x5c7f1c92;
    ecx = 0xd67fd500;
    edx = 0x4840d0e5;
    esi = 0xef8dcfce;
    edi = 0x5b4eadc;
    eax = -eax;
    bx = (int16_t) bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x35163d35;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050215 */
#include <stdint.h>
 
int32_t inst_136_flags_var_0 (void) {
    eax = 0xcafd6dee;
    ebx = 0x67465969;
    ecx = 0x26011b0d;
    edx = 0xaab5f701;
    esi = 0x7404460a;
    edi = 0xc01773b4;
    eax = -eax;
    dl = -dl;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d39f */
#include <stdint.h>
 
int32_t inst_69_values_var_0 (void) {
    eax = 0xe7e9bf19;
    ebx = 0x85ee2275;
    ecx = 0x781f9f86;
    edx = 0x72e3611f;
    esi = 0x224d26eb;
    edi = 0x4526015;
    eax = -eax;
    if (? != ?) {
        dx = si;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xebdfeb3b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b81c */
#include <stdint.h>
 
int32_t inst_28_values_var_0 (void) {
    eax = 0x848524a6;
    ebx = 0x6fbcc7b7;
    ecx = 0x46f2c754;
    edx = 0xb11e09e8;
    esi = 0x352bd3d3;
    edi = 0xb8e47fc9;
    eax = -eax;
    ch &= 0xa6;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x848b8fae;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bcf8 */
#include <stdint.h>
 
int32_t inst_34_flags_var_0 (void) {
    eax = 0x846d0df2;
    ebx = 0x764d9722;
    ecx = 0x732a5ba;
    edx = 0xb7870d30;
    esi = 0xdfc25c99;
    edi = 0xd762b50;
    eax = -eax;
    __asm ("bsf esi, edi");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dd3c */
#include <stdint.h>
 
int32_t inst_84_values_var_0 (void) {
    eax = 0x8e731f;
    ebx = 0xbe659b9;
    ecx = 0x366fc903;
    edx = 0x715c8e6f;
    esi = 0xb6e589be;
    edi = 0x2e9dd2ad;
    eax = -eax;
    if (? < ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa0428e6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fc0f */
#include <stdint.h>
 
int32_t inst_127_values_var_0 (void) {
    eax = 0x315f8dda;
    ebx = 0x3129aace;
    ecx = 0x3d4c2430;
    edx = 0x4cca5540;
    esi = 0x74c3e0aa;
    edi = 0x13e41366;
    eax = -eax;
    di = bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8f11877c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dfcc */
#include <stdint.h>
 
int32_t inst_88_values_var_0 (void) {
    eax = 0x96e9f7d;
    ebx = 0xbb44e785;
    ecx = 0x71fe2405;
    edx = 0xfbcc30ab;
    esi = 0x6d5ce812;
    edi = 0x4bb1c6f4;
    eax = -eax;
    if (? <= ?) {
        esi = edx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8f5d9d60;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c2a5 */
#include <stdint.h>
 
int32_t inst_43_values_var_0 (void) {
    eax = 0x5e6d0277;
    ebx = 0x30e7ee52;
    ecx = 0x45630a30;
    edx = 0xf64899da;
    esi = 0x64828a20;
    edi = 0x6bcacb63;
    eax = -eax;
    __asm ("btc ax, 0x23");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe0c6c7ba;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80559f9 */
#include <stdint.h>
 
int32_t inst_263_flags_var_0 (void) {
    eax = 0x468c3cd4;
    ebx = 0x93b63567;
    ecx = 0xe3996b87;
    edx = 0x77c3b4c0;
    esi = 0x40126372;
    edi = 0xe7e3238b;
    eax = -eax;
    cl &= 0xf;
    __asm ("shld bp, ax, cl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053abe */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_220_flags_var_0 (void) {
    eax = 0x63031be8;
    ebx = 0xdeba7a35;
    ecx = 0xe4a5fb3c;
    edx = 0x655f341c;
    esi = 0x514c059b;
    edi = 0x9c680f32;
    eax = -eax;
    edx = rotate_left32 (edx, 0x5b);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052219 */
#include <stdint.h>
 
int32_t inst_183_flags_var_0 (void) {
    eax = 0x90d38737;
    ebx = 0x4d645989;
    ecx = 0x49250b3f;
    edx = 0x18a1aeb8;
    esi = 0x4f46863c;
    edi = 0x7f74239f;
    eax = -eax;
    ax >>= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ef61 */
#include <stdint.h>
 
int32_t inst_108_flags_var_0 (void) {
    eax = 0xab2519fc;
    ebx = 0xe940119d;
    ecx = 0xdc9cc56;
    edx = 0x6bce9ed7;
    esi = 0x1cddd85a;
    edi = 0xffe93ced;
    eax = -eax;
    bl |= 0xc0;
    ax &= 0x3fff;
    al = ax / bl;
    ah = ax % bl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050cb3 */
#include <stdint.h>
 
int32_t inst_151_values_var_0 (void) {
    eax = 0xe8135134;
    ebx = 0x8bdcad1e;
    ecx = 0x8cfa92c6;
    edx = 0x7a245f4e;
    esi = 0xf572cde9;
    edi = 0x2745e73b;
    eax = -eax;
    ch >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa8bfdd3a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051a70 */
#include <stdint.h>
 
int32_t inst_171_flags_var_0 (void) {
    eax = 0xb1d32bcc;
    ebx = 0xdab38556;
    ecx = 0x6a97181d;
    edx = 0x20bb079;
    esi = 0x4ce6fd39;
    edi = 0x4dfd1854;
    eax = -eax;
    bh >>= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fd59 */
#include <stdint.h>
 
int32_t inst_129_values_var_0 (void) {
    eax = 0x396a222b;
    ebx = 0x2f65fca3;
    ecx = 0xc828eb25;
    edx = 0xb0e1ef63;
    esi = 0xc69dc06f;
    edi = 0xb982cf3a;
    eax = -eax;
    edi = esi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xde114f54;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805586b */
#include <stdint.h>
 
int32_t inst_261_flags_var_0 (void) {
    eax = 0x24d1b75c;
    ebx = 0x34947a60;
    ecx = 0x793081f8;
    edx = 0x4b59e37;
    esi = 0x39764f6b;
    edi = 0x68b1f411;
    eax = -eax;
    __asm ("shrd di, cx, 1");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d964 */
#include <stdint.h>
 
int32_t inst_78_values_var_0 (void) {
    eax = 0x615678ed;
    ebx = 0x33bfc334;
    ecx = 0xbc3dc5f3;
    edx = 0xb7319b45;
    esi = 0x5a39c27a;
    edi = 0xf49577aa;
    eax = -eax;
    __asm ("cmovns ebp, ebx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2467428e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ba67 */
#include <stdint.h>
 
int32_t inst_31_values_var_0 (void) {
    eax = 0xf6a57278;
    ebx = 0x20f5f0fd;
    ecx = 0x50864ab9;
    edx = 0xe64b2a2a;
    esi = 0x8184b2e2;
    edi = 0xe265dc51;
    eax = -eax;
    ax &= cx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd960512a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054a3a */
#include <stdint.h>
 
int32_t inst_240_flags_var_0 (void) {
    eax = 0xf3d77da;
    ebx = 0xcb4b6ff2;
    ecx = 0x9c6408af;
    edx = 0xf77468b5;
    esi = 0x866f4c9b;
    edi = 0x117645b7;
    eax = -eax;
    __asm ("clc");
    ax -= cx;
    eax = 1;
    if (ax < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ax < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x16;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80507c2 */
#include <stdint.h>
 
int32_t inst_144_flags_var_0 (void) {
    eax = 0x4d0aa5da;
    ebx = 0xcb3900ac;
    ecx = 0x7d6f7f6b;
    edx = 0xea66dc8e;
    esi = 0x4b2f1cfd;
    edi = 0x13184cbc;
    eax = -eax;
    ah |= dl;
    eax = 1;
    if (ah < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d00e */
#include <stdint.h>
 
int32_t inst_63_flags_var_0 (void) {
    eax = 0xc95b19a0;
    ebx = 0xca31a3bd;
    ecx = 0x571c75f3;
    edx = 0x64de2b3b;
    esi = 0x51f63962;
    edi = 0x8a90fffc;
    eax = -eax;
    if (? < ?) {
        bx = si;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b388 */
#include <stdint.h>
 
int32_t inst_22_flags_var_0 (void) {
    eax = 0x3942c3ce;
    ebx = 0x92c04049;
    ecx = 0x5dc8671b;
    edx = 0xa4a4b064;
    esi = 0x99a9119f;
    edi = 0xe8232af5;
    eax = -eax;
    bh += 0xcf;
    eax = 1;
    if (bh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bh < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055697 */
#include <stdint.h>
 
int32_t inst_259_values_var_0 (void) {
    eax = 0x443687f0;
    ebx = 0x5d6ca58e;
    ecx = 0xbf7f091a;
    edx = 0x52e8544e;
    esi = 0x34571109;
    edi = 0x89686e96;
    eax = -eax;
    __asm ("shld di, cx, 1");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcf187166;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80536a6 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_214_values_var_0 (void) {
    eax = 0x82293bc9;
    ebx = 0x368c2a7b;
    ecx = 0x77e1c048;
    edx = 0x150e1d54;
    esi = 0x95043555;
    edi = 0x9a2be20d;
    eax = -eax;
    cl = rotate_left8 (cl, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb81ed787;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80515ba */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_164_values_var_0 (void) {
    eax = 0x359e3d62;
    ebx = 0xa70ee12b;
    ecx = 0xbf2810db;
    edx = 0x75808255;
    esi = 0xb5d3a375;
    edi = 0x8eda901b;
    eax = -eax;
    dh = rotate_left8 (dh, 0xc0);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xdd7d7ef0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fd9e */
#include <stdint.h>
 
int32_t inst_129_flags_var_0 (void) {
    eax = 0x33b33d29;
    ebx = 0x366f64d3;
    ecx = 0xa90876e9;
    edx = 0xbc31113a;
    esi = 0x4a56db30;
    edi = 0x567d255c;
    eax = -eax;
    esi = ebx;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b8df */
#include <stdint.h>
 
int32_t inst_29_values_var_0 (void) {
    eax = 0xb4602a11;
    ebx = 0x9f4bf5ba;
    ecx = 0xc99247c7;
    edx = 0xcd6bd9ce;
    esi = 0xcd4405f3;
    edi = 0x33a8c9d3;
    eax = -eax;
    cl &= bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x59bbe018;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053345 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_209_values_var_0 (void) {
    eax = 0xafce597;
    ebx = 0x71fabde3;
    ecx = 0x8b37af0b;
    edx = 0x90f5a1ac;
    esi = 0xdd6103dd;
    edi = 0xe22de8b;
    eax = -eax;
    __asm ("clc");
    cx = rotate_right16 (cx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x409d7a44;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d1fa */
#include <stdint.h>
 
int32_t inst_66_flags_var_0 (void) {
    eax = 0xd4a2a3a8;
    ebx = 0x3e615477;
    ecx = 0x6637386c;
    edx = 0xb8413d1;
    esi = 0x92888a57;
    edi = 0x1e465e37;
    eax = -eax;
    if (? >= ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b5f4 */
#include <stdint.h>
 
int32_t inst_25_flags_var_0 (void) {
    eax = 0x399054d9;
    ebx = 0x3d3dbde4;
    ecx = 0x936e1772;
    edx = 0x62549582;
    esi = 0xa9ff8812;
    edi = 0xf06e5836;
    eax = -eax;
    ax += dx;
    eax = 1;
    if (ax < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ax < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056607 */
#include <stdint.h>
 
int32_t inst_280_values_var_0 (void) {
    eax = 0x9f94df19;
    ebx = 0x4f8b708b;
    ecx = 0xcef8d505;
    edx = 0xd137be0a;
    esi = 0x1a45a257;
    edi = 0xbf73fd4f;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x94e32926;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a7d6 */
#include <stdint.h>
 
int32_t inst_8_values_var_0 (void) {
    eax = 0xdbae8451;
    ebx = 0x2d985a48;
    ecx = 0x4233c229;
    edx = 0xb54dbf55;
    esi = 0x2e518b61;
    edi = 0x3def403c;
    eax = -eax;
    edx += 0xefd11dee;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcc546c51;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050f0c */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_154_flags_var_0 (void) {
    eax = 0xe5e1eeaa;
    ebx = 0x5010931f;
    ecx = 0x54efec31;
    edx = 0xc56611e8;
    esi = 0xefee5e43;
    edi = 0xe11253bc;
    eax = -eax;
    bx = rotate_left16 (bx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f179 */
#include <stdint.h>
 
int32_t inst_111_flags_var_0 (void) {
    eax = 0x2abe594e;
    ebx = 0xd46baf5b;
    ecx = 0xf7e1f5cc;
    edx = 0xf400a0a2;
    esi = 0x5bf99b5d;
    edi = 0x2aac833;
    eax = -eax;
    ax = al * cl;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80519cf */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_170_flags_var_0 (void) {
    eax = 0x5ab86ae5;
    ebx = 0xd1b8b77;
    ecx = 0xc3a1283b;
    edx = 0xa30ae102;
    esi = 0xc779d87b;
    edi = 0xb3bac107;
    eax = -eax;
    ah = rotate_right8 (ah, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80539d5 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_219_values_var_0 (void) {
    eax = 0xcedcaf5a;
    ebx = 0xbbea89ad;
    ecx = 0x7f26e602;
    edx = 0x7369810e;
    esi = 0x5b28a029;
    edi = 0x69f1ba92;
    eax = -eax;
    dx = rotate_right16 (dx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x66ea3f42;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052788 */
#include <stdint.h>
 
int32_t inst_192_values_var_0 (void) {
    eax = 0x68e8963d;
    ebx = 0x47163752;
    ecx = 0x5a225919;
    edx = 0x91479e15;
    esi = 0x3f304751;
    edi = 0x9e755d62;
    eax = -eax;
    edx <<= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x44eebf83;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805002c */
#include <stdint.h>
 
int32_t inst_133_flags_var_0 (void) {
    eax = 0xd5d22e17;
    ebx = 0xb0050cc2;
    ecx = 0xf8ebaa99;
    edx = 0x7b24b946;
    esi = 0x255a6a08;
    edi = 0x6695de52;
    eax = -eax;
    bp = (int16_t) al;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f66e */
#include <stdint.h>
 
int32_t inst_118_flags_var_0 (void) {
    eax = 0xfb6a79fa;
    ebx = 0x4f7f5199;
    ecx = 0x6b7aa036;
    edx = 0x50cc5652;
    esi = 0xc9ead367;
    edi = 0xce8c470b;
    eax = -eax;
    ax = al * bl;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e469 */
#include <stdint.h>
 
int32_t inst_94_flags_var_0 (void) {
    eax = 0x2f0adc2e;
    ebx = 0x22172093;
    ecx = 0x4d91f731;
    edx = 0xe349f229;
    esi = 0xaee9252e;
    edi = 0x3df02ccf;
    eax = -eax;
    eax = 1;
    if (bx < si) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bx < si) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c855 */
#include <stdint.h>
 
int32_t inst_51_flags_var_0 (void) {
    eax = 0x646c352c;
    ebx = 0x39bb6929;
    ecx = 0xc41c3ab5;
    edx = 0xbf1393e;
    esi = 0xd826c8e7;
    edi = 0x9783819c;
    eax = -eax;
    __asm ("bts cx, 0xe1");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051f8d */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_179_flags_var_0 (void) {
    eax = 0xc2d6fcc8;
    ebx = 0xc4e4ffc;
    ecx = 0xc911004;
    edx = 0x29d70ec6;
    esi = 0x9d11c077;
    edi = 0xaffe746d;
    eax = -eax;
    cx = rotate_left16 (cx, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054781 */
#include <stdint.h>
 
int32_t inst_237_values_var_0 (void) {
    eax = 0x504c211b;
    ebx = 0x4d8e7c58;
    ecx = 0x9dbc3ef;
    edx = 0xef1e2440;
    esi = 0xc8a1e344;
    edi = 0x6389ac9;
    eax = -eax;
    __asm ("clc");
    ah -= 0xf8;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1329263f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051f47 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_179_values_var_0 (void) {
    eax = 0x2961ffaf;
    ebx = 0x5650288d;
    ecx = 0x78cdccd2;
    edx = 0xaa39af7f;
    esi = 0xecfb03f2;
    edi = 0x2aec36c0;
    eax = -eax;
    cx = rotate_left16 (cx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9090eab0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051e44 */
#include <stdint.h>
 
int32_t inst_177_flags_var_0 (void) {
    eax = 0x1d2d3577;
    ebx = 0xddf0e546;
    ecx = 0x57ffa37c;
    edx = 0x72822b17;
    esi = 0xf91991d6;
    edi = 0x8b4a6c6;
    eax = -eax;
    di <<= 0xd8;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805077d */
#include <stdint.h>
 
int32_t inst_144_values_var_0 (void) {
    eax = 0x7c5b1569;
    ebx = 0x7d3997c8;
    ecx = 0xcf397805;
    edx = 0x3147d448;
    esi = 0xeff47225;
    edi = 0x930dff3f;
    eax = -eax;
    ch |= ah;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xae82c322;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056b61 */
#include <stdint.h>
 
int32_t inst_287_values_var_0 (void) {
    eax = 0xdfdeb915;
    ebx = 0xa6d47c73;
    ecx = 0xc75497e5;
    edx = 0xcd45de82;
    esi = 0x7e88f391;
    edi = 0x502fba31;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5e334199;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056c47 */
#include <stdint.h>
 
int32_t inst_288_flags_var_0 (void) {
    eax = 0xc61dc964;
    ebx = 0xee3750a1;
    ecx = 0xca85a0a8;
    edx = 0xfe252015;
    esi = 0xceb71b6e;
    edi = 0xa7f398b1;
    eax = -eax;
    tmp_0 = edx;
    edx = esi;
    esi = tmp_0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056195 */
#include <stdint.h>
 
int32_t inst_274_flags_var_0 (void) {
    eax = 0x64fa9630;
    ebx = 0xab65d8bb;
    ecx = 0xf02eeda3;
    edx = 0x3171e65e;
    esi = 0xaa4dbf9;
    edi = 0x593d9ea7;
    eax = -eax;
    di -= bx;
    eax = 1;
    if (di < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (di < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056265 */
#include <stdint.h>
 
int32_t inst_275_flags_var_0 (void) {
    eax = 0x61a9634a;
    ebx = 0x785ccd37;
    ecx = 0x8d2e8695;
    edx = 0x8f65bdf6;
    esi = 0x258e8fa2;
    edi = 0x95252157;
    eax = -eax;
    ebx -= 0x65d2b5e3;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054215 */
#include <stdint.h>
 
int32_t inst_230_flags_var_0 (void) {
    eax = 0xbed3b9ee;
    ebx = 0x52d29f82;
    ecx = 0xc522268b;
    edx = 0x6edf1c77;
    esi = 0x15d2891f;
    edi = 0x5386210b;
    eax = -eax;
    ecx -= eax;
    eax = 1;
    if (ecx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ecx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805029c */
#include <stdint.h>
 
int32_t inst_137_values_var_0 (void) {
    eax = 0x9ccceb1b;
    ebx = 0x1aaceb5d;
    ecx = 0x6a43e20b;
    edx = 0x5189bc90;
    esi = 0x5a9fc0f7;
    edi = 0x64e5cc76;
    eax = -eax;
    dx = -dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x304733ca;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050904 */
#include <stdint.h>
 
int32_t inst_146_values_var_0 (void) {
    eax = 0x43dca65a;
    ebx = 0xf6f00bb;
    ecx = 0x64e741ca;
    edx = 0x750c9c86;
    esi = 0x65d83fa;
    edi = 0x76fe2314;
    eax = -eax;
    ax |= bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbf4025f1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e9bf */
#include <stdint.h>
 
int32_t inst_101_values_var_0 (void) {
    eax = 0xdfc7716e;
    ebx = 0xb489db8f;
    ecx = 0x98327786;
    edx = 0x6bfb932d;
    esi = 0xabeb4915;
    edi = 0xf560dce;
    eax = -eax;
    __asm ("das");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x12f68019;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a708 */
#include <stdint.h>
 
int32_t inst_7_values_var_0 (void) {
    eax = 0x99de2608;
    ebx = 0x3d2ea00d;
    ecx = 0xda2c2e88;
    edx = 0x1a171f2f;
    esi = 0x21f51bca;
    edi = 0xf987a435;
    eax = -eax;
    cx += bx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2d952c1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80517a3 */
#include <stdint.h>
 
int32_t inst_167_values_var_0 (void) {
    eax = 0x2114b6ca;
    ebx = 0x4f5eb592;
    ecx = 0xfa2651c5;
    edx = 0x5da520e0;
    esi = 0x4767f8fb;
    edi = 0x9fd079d1;
    eax = -eax;
    bh <<= 0xb7;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9fcd6751;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f8dd */
#include <stdint.h>
 
int32_t inst_122_values_var_0 (void) {
    eax = 0x21c1ce65;
    ebx = 0x2e85d5b4;
    ecx = 0x69a039eb;
    edx = 0xeba0c28f;
    esi = 0x7ddd4c25;
    edi = 0xb8bec994;
    eax = -eax;
    di = edx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xaad7ada2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052646 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_190_values_var_0 (void) {
    eax = 0x5552ddf2;
    ebx = 0xd5ddffca;
    ecx = 0x2f70560;
    edx = 0xce98a989;
    esi = 0x499af025;
    edi = 0x4d18f8df;
    eax = -eax;
    ebx = rotate_right32 (ebx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc3b08ab7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e5c5 */
#include <stdint.h>
 
int32_t inst_96_values_var_0 (void) {
    eax = 0xf5527719;
    ebx = 0xe87ec239;
    ecx = 0x48e45687;
    edx = 0x7f235840;
    esi = 0xb623bb80;
    edi = 0xe01bb9be;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x39abbddf;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c969 */
#include <stdint.h>
 
int32_t inst_53_values_var_0 (void) {
    eax = 0xc808d095;
    ebx = 0x1ba9e282;
    ecx = 0x679893b2;
    edx = 0xfeb1ee6;
    esi = 0x77a42f58;
    edi = 0xb049bdf4;
    eax = -eax;
    ax = (int16_t) al;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5adcb3fb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a976 */
#include <stdint.h>
 
int32_t inst_10_values_var_0 (void) {
    eax = 0x68e36adc;
    ebx = 0xc949f4f3;
    ecx = 0xa879cb59;
    edx = 0xc7a03376;
    esi = 0x341c067e;
    edi = 0xca119bc3;
    eax = -eax;
    __asm ("stc");
    bl += 0xdd;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xefe35994;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bf46 */
#include <stdint.h>
 
int32_t inst_38_values_var_0 (void) {
    eax = 0x52cdb377;
    ebx = 0xcac185d2;
    ecx = 0x809de8a6;
    edx = 0x48e8a168;
    esi = 0x8adfc7fd;
    edi = 0x81d741f1;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc6f2559;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805388d */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_217_values_var_0 (void) {
    eax = 0xcc0fec05;
    ebx = 0x9abd757;
    ecx = 0x12ecdebc;
    edx = 0x71bbcdd3;
    esi = 0x7918b41d;
    edi = 0xfa506adf;
    eax = -eax;
    di = rotate_right16 (di, 0xaa);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8bf17505;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d156 */
#include <stdint.h>
 
int32_t inst_65_flags_var_0 (void) {
    eax = 0x75872eec;
    ebx = 0xf1678660;
    ecx = 0x663f8fec;
    edx = 0xf1657b5a;
    esi = 0x1b4d5adc;
    edi = 0x1a37bb40;
    eax = -eax;
    if (? >= ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b524 */
#include <stdint.h>
 
int32_t inst_24_flags_var_0 (void) {
    eax = 0xeb2b31fe;
    ebx = 0x9588ce2f;
    ecx = 0xe57dec25;
    edx = 0xf9bfc6f5;
    esi = 0x7f9fed8e;
    edi = 0x8de1b587;
    eax = -eax;
    bx += 0x429a;
    eax = 1;
    if (bx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x15;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056f33 */
#include <stdint.h>
 
int32_t inst_292_flags_var_0 (void) {
    eax = 0xa6f1191a;
    ebx = 0xf802dcba;
    ecx = 0x936f6137;
    edx = 0xabc72f07;
    esi = 0x99cd1898;
    edi = 0x5905265c;
    eax = -eax;
    di ^= dx;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d5d2 */
#include <stdint.h>
 
int32_t inst_72_flags_var_0 (void) {
    eax = 0xe9602e17;
    ebx = 0xb4d1411;
    ecx = 0x3c1a7940;
    edx = 0x98588158;
    esi = 0x66d07529;
    edi = 0x6e3b5825;
    eax = -eax;
    if (? <= ?) {
        ebx = edx;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052502 */
#include <stdint.h>
 
int32_t inst_188_values_var_0 (void) {
    eax = 0x6ffcca9f;
    ebx = 0x8977f48d;
    ecx = 0xa6e9629b;
    edx = 0x4a701661;
    esi = 0xfbd1536b;
    edi = 0x53589fbc;
    eax = -eax;
    esi >>= 0xc8;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa717b24f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804df6e */
#include <stdint.h>
 
int32_t inst_87_flags_var_0 (void) {
    eax = 0xd608603b;
    ebx = 0x8de8abbf;
    ecx = 0x55a04586;
    edx = 0xb1cb56a5;
    esi = 0x7786e65e;
    edi = 0x8f4d7c71;
    eax = -eax;
    if (? <= ?) {
        dx = bx;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c240 */
#include <stdint.h>
 
int32_t inst_42_flags_var_0 (void) {
    eax = 0x20d9b630;
    ebx = 0xcadb82e6;
    ecx = 0x24bab66e;
    edx = 0x10726816;
    esi = 0xf93f22ce;
    edi = 0xd7fec4c1;
    eax = -eax;
    __asm ("btc edx, ebx");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805188c */
#include <stdint.h>
 
int32_t inst_168_flags_var_0 (void) {
    eax = 0x2d23aa17;
    ebx = 0x2d2c42c1;
    ecx = 0x23fd01c1;
    edx = 0xf5a969e3;
    esi = 0x5d37e77e;
    edi = 0x7e18842b;
    eax = -eax;
    ch >>= 0x31;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f9cb */
#include <stdint.h>
 
int32_t inst_123_flags_var_0 (void) {
    eax = 0xd1d077e2;
    ebx = 0x79c43bac;
    ecx = 0xde34a09d;
    edx = 0xc69a3c9c;
    esi = 0x10df6ed2;
    edi = 0x33cccd89;
    eax = -eax;
    edi = edx + ebx*2;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c448 */
#include <stdint.h>
 
int32_t inst_45_flags_var_0 (void) {
    eax = 0xaa6a2a63;
    ebx = 0x67e6a849;
    ecx = 0x3dea4a8b;
    edx = 0xc204bf59;
    esi = 0x537b0d12;
    edi = 0xd1343ab3;
    eax = -eax;
    __asm ("btr di, dx");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050b51 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_149_values_var_0 (void) {
    eax = 0xbeee5717;
    ebx = 0x581d0bef;
    ecx = 0xfbe5d148;
    edx = 0x3daac31d;
    esi = 0xb7fd87be;
    edi = 0xc4def860;
    eax = -eax;
    cl = rotate_left8 (cl, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb1cb62ac;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ec09 */
#include <stdint.h>
 
int32_t inst_104_values_var_0 (void) {
    eax = 0x19bb780d;
    ebx = 0x9f5b7d2c;
    ecx = 0x67b07657;
    edx = 0xe4273149;
    esi = 0x6d5fa489;
    edi = 0xa31c4db2;
    eax = -eax;
    ecx--;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x121e49f2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ce7f */
#include <stdint.h>
 
int32_t inst_61_values_var_0 (void) {
    eax = 0x16c9f0e3;
    ebx = 0x75853212;
    ecx = 0xb49b78f;
    edx = 0x3eefdeab;
    esi = 0xdc147157;
    edi = 0x7274974b;
    eax = -eax;
    __asm ("cmovno cx, ax");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc982d4b0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b19e */
#include <stdint.h>
 
int32_t inst_20_values_var_0 (void) {
    eax = 0x9c7c2e80;
    ebx = 0x3599c7d4;
    ecx = 0xa3ddf494;
    edx = 0x57f0ad10;
    esi = 0x7df1a03e;
    edi = 0xaac92c1e;
    eax = -eax;
    __asm ("clc");
    ebx += 0x586b287e;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9a8b99d2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052548 */
#include <stdint.h>
 
int32_t inst_188_flags_var_0 (void) {
    eax = 0x41962d89;
    ebx = 0x34366dee;
    ecx = 0x52be8788;
    edx = 0xc28f53ae;
    esi = 0x11721b00;
    edi = 0x53ae4838;
    eax = -eax;
    ecx >>= 0x83;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d2fc */
#include <stdint.h>
 
int32_t inst_68_values_var_0 (void) {
    eax = 0xcdf9cccf;
    ebx = 0x6cbe4dca;
    ecx = 0xb573d5d5;
    edx = 0xc66f3585;
    esi = 0x282638b4;
    edi = 0xb4cb2efd;
    eax = -eax;
    if (? == ?) {
        eax = edx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbd32b122;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b750 */
#include <stdint.h>
 
int32_t inst_27_values_var_0 (void) {
    eax = 0xc4749eac;
    ebx = 0xf30cb79c;
    ecx = 0xad4f743e;
    edx = 0xc9c62a90;
    esi = 0x32cb7bc3;
    edi = 0x32e73f69;
    eax = -eax;
    ebp += ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x67c0c294;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051192 */
#include <stdint.h>
 
int32_t inst_158_values_var_0 (void) {
    eax = 0xc2e4c211;
    ebx = 0x9f6ba557;
    ecx = 0x9da484a3;
    edx = 0xdf79bac5;
    esi = 0x7d43e39e;
    edi = 0x66bdb598;
    eax = -eax;
    dx >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x64d75f71;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f400 */
#include <stdint.h>
 
int32_t inst_115_values_var_0 (void) {
    eax = 0x61d565f7;
    ebx = 0xc668bded;
    ecx = 0xd6f8b93b;
    edx = 0x8374fef7;
    esi = 0x221e5931;
    edi = 0x60a076bd;
    eax = -eax;
    ecx *= 0xcc22c711;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7f34152e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e875 */
#include <stdint.h>
 
int32_t inst_99_flags_var_0 (void) {
    eax = 0x834d5acb;
    ebx = 0x440d3450;
    ecx = 0x40a23b7b;
    edx = 0xb2f5c207;
    esi = 0x894e988e;
    edi = 0x436d84b0;
    eax = -eax;
    __asm ("cmpxchg esi, ebx");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cb8e */
#include <stdint.h>
 
int32_t inst_56_flags_var_0 (void) {
    eax = 0x1f34839b;
    ebx = 0xcbfc21de;
    ecx = 0xea00d400;
    edx = 0x87bbfbf4;
    esi = 0x5befde90;
    edi = 0xf151f91;
    eax = -eax;
    eax = (int32_t) ax;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ac2f */
#include <stdint.h>
 
int32_t inst_13_flags_var_0 (void) {
    eax = 0xcb04b595;
    ebx = 0x8e7a344d;
    ecx = 0x31bfac50;
    edx = 0x9f2a169;
    esi = 0xce129afa;
    edi = 0xeaf362f2;
    eax = -eax;
    __asm ("stc");
    di += bx;
    eax = 1;
    if (di < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (di < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ce22 */
#include <stdint.h>
 
int32_t inst_60_flags_var_0 (void) {
    eax = 0x79dc60ee;
    ebx = 0x5d6723b1;
    ecx = 0x66b611f3;
    edx = 0xfeec3bd4;
    esi = 0xe55ebebb;
    edi = 0x6511ac45;
    eax = -eax;
    __asm ("cmovo eax, ebp");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050e5a */
#include <stdint.h>
 
int32_t inst_153_flags_var_0 (void) {
    eax = 0x9f4bb6fa;
    ebx = 0x7c9d85c9;
    ecx = 0xc312581b;
    edx = 0x9de5211b;
    esi = 0x5a1f048e;
    edi = 0xdce8926;
    eax = -eax;
    al >>= 1;
    eax = 1;
    if (al < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f0cc */
#include <stdint.h>
 
int32_t inst_110_flags_var_0 (void) {
    eax = 0x497fbf75;
    ebx = 0x72ecf88b;
    ecx = 0x22205e68;
    edx = 0x8ce0030;
    esi = 0x85cd8b7b;
    edi = 0x85838e82;
    eax = -eax;
    ebp |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052130 */
#include <stdint.h>
 
int32_t inst_182_values_var_0 (void) {
    eax = 0x9b29d850;
    ebx = 0x2208aebb;
    ecx = 0x7dbd5387;
    edx = 0xf6607f16;
    esi = 0x44d3a9b2;
    edi = 0x632a5a86;
    eax = -eax;
    bx <<= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1cf34139;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dbf4 */
#include <stdint.h>
 
int32_t inst_82_values_var_0 (void) {
    eax = 0xea9c394d;
    ebx = 0xc00bc71d;
    ecx = 0x3bee8aad;
    edx = 0xe651162f;
    esi = 0xeb952cf4;
    edi = 0xef83b4d1;
    eax = -eax;
    __asm ("cmovnp edx, edi");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6362c086;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d8bf */
#include <stdint.h>
 
int32_t inst_77_values_var_0 (void) {
    eax = 0x729fa886;
    ebx = 0x5f944978;
    ecx = 0x231885d0;
    edx = 0x9e1799be;
    esi = 0x28ee03ae;
    edi = 0xc1f32977;
    eax = -eax;
    __asm ("cmovns si, bx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6799aed9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b9a0 */
#include <stdint.h>
 
int32_t inst_30_values_var_0 (void) {
    eax = 0xc9211204;
    ebx = 0x96762952;
    ecx = 0xb9564860;
    edx = 0xa4809966;
    esi = 0x2c7a0cfb;
    edi = 0xcc7fb89e;
    eax = -eax;
    bp &= 0xbd5b;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf5e2c7f0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bee0 */
#include <stdint.h>
 
int32_t inst_37_flags_var_0 (void) {
    eax = 0x8e1c008d;
    ebx = 0xd5af18a9;
    ecx = 0x8b2ffd43;
    edx = 0x2b47af66;
    esi = 0xb2416590;
    edi = 0x724e9d8b;
    eax = -eax;
    eax = 1;
    if (((si >> bx) & 1) < 0) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055e85 */
#include <stdint.h>
 
int32_t inst_270_flags_var_0 (void) {
    eax = 0x83e32603;
    ebx = 0x7713dc16;
    ecx = 0xfb11e8b3;
    edx = 0x2ce751c7;
    esi = 0x7bd512a;
    edi = 0x66d0e5ca;
    eax = -eax;
    __asm ("shrd ecx, ebx, 0x97");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051c55 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_174_flags_var_0 (void) {
    eax = 0xb2c93fbb;
    ebx = 0x70bbb4f1;
    ecx = 0xecd87da9;
    edx = 0x7f17ee72;
    esi = 0xb3ad8867;
    edi = 0xffcbedc5;
    eax = -eax;
    bx = rotate_left16 (bx, 0x8e);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80537e8 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_216_values_var_0 (void) {
    eax = 0x9fc4d41;
    ebx = 0x4c0644bd;
    ecx = 0xe431bc05;
    edx = 0x75641eef;
    esi = 0xa4e28706;
    edi = 0x45d4085c;
    eax = -eax;
    cx = rotate_left16 (cx, 0x6b);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd7939a1a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054d0a */
#include <stdint.h>
 
int32_t inst_244_values_var_0 (void) {
    eax = 0xe3984345;
    ebx = 0x27bc6bdb;
    ecx = 0xe405d31b;
    edx = 0x8088ce78;
    esi = 0x27b5e66a;
    edi = 0x93fe33be;
    eax = -eax;
    __asm ("setno ah");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x596150bd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052da7 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_201_values_var_0 (void) {
    eax = 0xb33e6139;
    ebx = 0xd2cb6063;
    ecx = 0x6179022b;
    edx = 0xc6d779bd;
    esi = 0xeaa664c0;
    edi = 0x16371d57;
    eax = -eax;
    __asm ("stc");
    ch = rotate_right8 (ch, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xef421772;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056fb0 */
#include <stdint.h>
 
int32_t inst_293_values_var_0 (void) {
    eax = 0x5df34db4;
    ebx = 0x7fb48a10;
    ecx = 0x148515cc;
    edx = 0x3ee5dec2;
    esi = 0xbbcab518;
    edi = 0x9c0e5835;
    eax = -eax;
    ecx ^= 0x739df763;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd33e1fad;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805051a */
#include <stdint.h>
 
int32_t inst_140_flags_var_0 (void) {
    eax = 0xab227bac;
    ebx = 0xddf68dc8;
    ecx = 0x514f68a5;
    edx = 0xbe689f5c;
    esi = 0x762fd065;
    edi = 0x8a0a4cfe;
    eax = -eax;
    cl = ~cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fc55 */
#include <stdint.h>
 
int32_t inst_127_flags_var_0 (void) {
    eax = 0xe68d2ac9;
    ebx = 0x8dbbb33f;
    ecx = 0xdb188d60;
    edx = 0x5b6712ad;
    esi = 0x6df043ac;
    edi = 0x6ec3b4fb;
    eax = -eax;
    si = dx;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052c43 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_199_values_var_0 (void) {
    eax = 0x68140a88;
    ebx = 0x9eeec077;
    ecx = 0xabd1e209;
    edx = 0x442da268;
    esi = 0x9d9a443c;
    edi = 0xb9095973;
    eax = -eax;
    ebx = rotate_right32 (ebx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6cd26322;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050ec6 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_154_values_var_0 (void) {
    eax = 0x2727434f;
    ebx = 0x2db26c5a;
    ecx = 0xa2c8127a;
    edx = 0x75fe3d9d;
    esi = 0xcc870f79;
    edi = 0xef8c7efa;
    eax = -eax;
    di = rotate_left16 (di, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb3284bab;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f134 */
#include <stdint.h>
 
int32_t inst_111_values_var_0 (void) {
    eax = 0xa084c8d3;
    ebx = 0xe10e2d7d;
    ecx = 0x3cbe8171;
    edx = 0xc071c01b;
    esi = 0x31c717ff;
    edi = 0xb59d65f9;
    eax = -eax;
    ax = al * ch;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x835e78c5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056eed */
#include <stdint.h>
 
int32_t inst_292_values_var_0 (void) {
    eax = 0x25c425d6;
    ebx = 0xe023cea2;
    ecx = 0x2ead6334;
    edx = 0x87963899;
    esi = 0x8e0f6435;
    edi = 0xc8fd560f;
    eax = -eax;
    bp ^= dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9ed8de60;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c5a1 */
#include <stdint.h>
 
int32_t inst_47_flags_var_0 (void) {
    eax = 0x21fec364;
    ebx = 0x583c9fc9;
    ecx = 0xd7ada152;
    edx = 0x6c996c6;
    esi = 0xc4f79c99;
    edi = 0x88f73b47;
    eax = -eax;
    __asm ("btr ax, 0x83");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e1b7 */
#include <stdint.h>
 
int32_t inst_91_values_var_0 (void) {
    eax = 0x782f2c8c;
    ebx = 0x2b70e4cb;
    ecx = 0x2ed6d724;
    edx = 0xaea72359;
    esi = 0xe6bbcb04;
    edi = 0x41b29061;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf76f3318;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804de26 */
#include <stdint.h>
 
int32_t inst_85_flags_var_0 (void) {
    eax = 0xd5a18f6a;
    ebx = 0x55eaaa95;
    ecx = 0xc85d9bf8;
    edx = 0xffff634d;
    esi = 0xde6491b5;
    edi = 0xac33ed97;
    eax = -eax;
    if (? >= ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c0e7 */
#include <stdint.h>
 
int32_t inst_40_flags_var_0 (void) {
    eax = 0x4cdf5196;
    ebx = 0xf848014b;
    ecx = 0x4c84991d;
    edx = 0x62c257aa;
    esi = 0x7c5727ca;
    edi = 0xfee79b89;
    eax = -eax;
    eax = 1;
    if (((edi >> 0xfb) & 1) < 0) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054145 */
#include <stdint.h>
 
int32_t inst_229_flags_var_0 (void) {
    eax = 0xcf89ea8e;
    ebx = 0x123b022b;
    ecx = 0x5c8dcfeb;
    edx = 0xd7c1961e;
    esi = 0x36556fa;
    edi = 0xc8093276;
    eax = -eax;
    ebx -= 0x6d7c0987;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050a10 */
#include <stdint.h>
 
int32_t inst_147_flags_var_0 (void) {
    eax = 0x534e7d74;
    ebx = 0xe284d9a0;
    ecx = 0x3e1e9896;
    edx = 0xf8009a05;
    esi = 0x458331b3;
    edi = 0x997c316b;
    eax = -eax;
    edi |= 0x641e9f04;
    eax = 1;
    if (edi < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804eac6 */
#include <stdint.h>
 
int32_t inst_102_flags_var_0 (void) {
    eax = 0x3ad29469;
    ebx = 0x4800ad4d;
    ecx = 0xe2725d67;
    edx = 0xaacd4f7;
    esi = 0xbc9c258;
    edi = 0xc2f5c6a0;
    eax = -eax;
    cl--;
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (cl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80540fc */
#include <stdint.h>
 
int32_t inst_229_values_var_0 (void) {
    eax = 0x3d6ff9f1;
    ebx = 0xbd29a617;
    ecx = 0xfe7e8f35;
    edx = 0xd59ad0d5;
    esi = 0x4e21352c;
    edi = 0xabfd4243;
    eax = -eax;
    esi -= 0x3266383e;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2602544b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804db96 */
#include <stdint.h>
 
int32_t inst_81_flags_var_0 (void) {
    eax = 0x66ccec59;
    ebx = 0x1078b033;
    ecx = 0x7b708814;
    edx = 0xc454fdf3;
    esi = 0x923f3759;
    edi = 0xb6547024;
    eax = -eax;
    __asm ("cmovnp di, ax");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051dfd */
#include <stdint.h>
 
int32_t inst_177_values_var_0 (void) {
    eax = 0x34c95051;
    ebx = 0x12b9bae8;
    ecx = 0xc93c2daf;
    edx = 0x66364d27;
    esi = 0xeca0cea;
    edi = 0x51c7859a;
    eax = -eax;
    ax <<= 0xf;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x35d47b8a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e06f */
#include <stdint.h>
 
int32_t inst_89_values_var_0 (void) {
    eax = 0xa818db6d;
    ebx = 0x67707162;
    ecx = 0xca71daf7;
    edx = 0xb78a947d;
    esi = 0xab8b009d;
    edi = 0x8c3c6b69;
    eax = -eax;
    if (? > ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x568ddd76;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c354 */
#include <stdint.h>
 
int32_t inst_44_values_var_0 (void) {
    eax = 0x265368a2;
    ebx = 0x3ddf4f02;
    ecx = 0x33866fb8;
    edx = 0xf7f46e76;
    esi = 0x316810a6;
    edi = 0x31007019;
    eax = -eax;
    __asm ("btc ecx, 0xfc");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9a69c07e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c4ae */
#include <stdint.h>
 
int32_t inst_46_values_var_0 (void) {
    eax = 0x7cf885ca;
    ebx = 0x4bd1f09b;
    ecx = 0x82799077;
    edx = 0x15c23bb7;
    esi = 0x1f82153f;
    edi = 0x126334a0;
    eax = -eax;
    __asm ("btr ebx, esi");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x419155fd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051cfa */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_175_flags_var_0 (void) {
    eax = 0x84cb9a47;
    ebx = 0x44071267;
    ecx = 0xc0759db5;
    edx = 0xb777ff2a;
    esi = 0xfbd72433;
    edi = 0xe180bd10;
    eax = -eax;
    bp = rotate_right16 (bp, 0xdf);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053978 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_218_flags_var_0 (void) {
    eax = 0xd527d0b6;
    ebx = 0x6deb3c0d;
    ecx = 0x5e569c63;
    edx = 0xbe59faa9;
    esi = 0x1a0b2b91;
    edi = 0x89985dcb;
    eax = -eax;
    bp = rotate_left16 (bp, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80518e9 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_169_values_var_0 (void) {
    eax = 0x1e45c63c;
    ebx = 0xfbafe500;
    ecx = 0x5d3a1153;
    edx = 0x4c1210e0;
    esi = 0xb6dcff5b;
    edi = 0xc9f78ab;
    eax = -eax;
    bh = rotate_left8 (bh, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe28b5971;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fa28 */
#include <stdint.h>
 
int32_t inst_124_values_var_0 (void) {
    eax = 0x9206fbc3;
    ebx = 0x3dd58ae0;
    ecx = 0x49b070cd;
    edx = 0xdc68ab28;
    esi = 0x5bc9d4ac;
    edi = 0x675682a5;
    eax = -eax;
    bh = 0x55;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xed9b2d0f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050d64 */
#include <stdint.h>
 
int32_t inst_152_values_var_0 (void) {
    eax = 0x14b4e91c;
    ebx = 0xbe43f6ee;
    ecx = 0xde675360;
    edx = 0x1d858688;
    esi = 0x54e98c19;
    edi = 0xcc0c8e97;
    eax = -eax;
    ah <<= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4444017d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e75f */
#include <stdint.h>
 
int32_t inst_98_values_var_0 (void) {
    eax = 0xff7e0774;
    ebx = 0x8ff15e4d;
    ecx = 0x662f9bbc;
    edx = 0x9670ae35;
    esi = 0x1a253666;
    edi = 0x4ae65db3;
    eax = -eax;
    __asm ("cmpxchg bp, bx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x30cd733;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804caa9 */
#include <stdint.h>
 
int32_t inst_55_values_var_0 (void) {
    eax = 0x179a1f52;
    ebx = 0x96f3ec82;
    ecx = 0xf90a4d90;
    edx = 0xba1d805e;
    esi = 0x4c65d51a;
    edi = 0x5ad543c9;
    eax = -eax;
    __asm ("cwd");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xedcdc97d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ab14 */
#include <stdint.h>
 
int32_t inst_12_values_var_0 (void) {
    eax = 0xeea024df;
    ebx = 0xd3a45bfa;
    ecx = 0x77289bab;
    edx = 0x8e0708b3;
    esi = 0xd9a2cc05;
    edi = 0xd0c3cbaa;
    eax = -eax;
    __asm ("stc");
    cx += 0x4fbf;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf29465b7;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b115 */
#include <stdint.h>
 
int32_t inst_19_flags_var_0 (void) {
    eax = 0x6867cea7;
    ebx = 0xf9920df6;
    ecx = 0xa29cb25;
    edx = 0xed124c80;
    esi = 0xc2c29416;
    edi = 0x972fb06e;
    eax = -eax;
    __asm ("clc");
    ax += bp;
    eax = 1;
    if (ax < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ax < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x10;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805563a */
#include <stdint.h>
 
int32_t inst_258_flags_var_0 (void) {
    eax = 0x3d824dec;
    ebx = 0x3383c507;
    ecx = 0xa47499c9;
    edx = 0xac0bff2;
    esi = 0x2299ced7;
    edi = 0x2681c2f2;
    eax = -eax;
    ah = (? > ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053649 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_213_flags_var_0 (void) {
    eax = 0x12bb86;
    ebx = 0x30a526f1;
    ecx = 0xcda6b5d9;
    edx = 0xcb7beeda;
    esi = 0xb1390713;
    edi = 0x31aa3d1a;
    eax = -eax;
    dh = rotate_right8 (dh, 0x8a);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d444 */
#include <stdint.h>
 
int32_t inst_70_values_var_0 (void) {
    eax = 0x16388966;
    ebx = 0xa2e87438;
    ecx = 0x535612eb;
    edx = 0x60274310;
    esi = 0x73e40ce0;
    edi = 0x603e198;
    eax = -eax;
    if (? != ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9d44cdcc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dcde */
#include <stdint.h>
 
int32_t inst_83_flags_var_0 (void) {
    eax = 0x8459be9c;
    ebx = 0x76120227;
    ecx = 0xcfcbc671;
    edx = 0x4c8bde07;
    esi = 0x7d914bb0;
    edi = 0xdb9a05c5;
    eax = -eax;
    if (? < ?) {
        dx = bp;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051125 */
#include <stdint.h>
 
int32_t inst_157_flags_var_0 (void) {
    eax = 0xf602b42;
    ebx = 0x2ea7a165;
    ecx = 0x1ed7276d;
    edx = 0x73dd4fea;
    esi = 0xd56149dc;
    edi = 0xcc562ff9;
    eax = -eax;
    bx <<= 1;
    eax = 1;
    if (bx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f391 */
#include <stdint.h>
 
int32_t inst_114_flags_var_0 (void) {
    eax = 0x6f819959;
    ebx = 0x77037b3c;
    ecx = 0xc3d71fbc;
    edx = 0x7079fcf6;
    esi = 0x771729c8;
    edi = 0xbfa6118c;
    eax = -eax;
    si *= 0x6b16;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051245 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_159_values_var_0 (void) {
    eax = 0xb859e73c;
    ebx = 0x5236d69c;
    ecx = 0x81052e7e;
    edx = 0xda666121;
    esi = 0xd8d224f6;
    edi = 0xa3e4e4c1;
    eax = -eax;
    edx = rotate_left32 (edx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xeaf6e099;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f4b9 */
#include <stdint.h>
 
int32_t inst_116_values_var_0 (void) {
    eax = 0xe4fdedb6;
    ebx = 0xa33028f4;
    ecx = 0x13ab2233;
    edx = 0x4593def;
    esi = 0xa2e42cc3;
    edi = 0xa93e083;
    eax = -eax;
    bp = dx * 0xdbce;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x768f3f8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bc36 */
#include <stdint.h>
 
int32_t inst_33_flags_var_0 (void) {
    eax = 0xddb23803;
    ebx = 0xfa8afa6c;
    ecx = 0xb52f6128;
    edx = 0xf8bf921;
    esi = 0xe23b8c5c;
    edi = 0xc228b815;
    eax = -eax;
    ebx &= edx;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80501d0 */
#include <stdint.h>
 
int32_t inst_136_values_var_0 (void) {
    eax = 0xffdd5f01;
    ebx = 0xb1adb5f4;
    ecx = 0x3488be7e;
    edx = 0x8700e856;
    esi = 0x78e1b65e;
    edi = 0x846f3f0a;
    eax = -eax;
    ch = -ch;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb6aef17f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051ee9 */
#include <stdint.h>
 
int32_t inst_178_flags_var_0 (void) {
    eax = 0x956cb0e3;
    ebx = 0xd95efd2f;
    ecx = 0x180593d7;
    edx = 0x6a65e8b4;
    esi = 0xeeb88b03;
    edi = 0xa108af7;
    eax = -eax;
    ax >>= 0x7b;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80522bc */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_184_flags_var_0 (void) {
    eax = 0x90335432;
    ebx = 0x909d85e9;
    ecx = 0x31f06d47;
    edx = 0x3fe32344;
    esi = 0x881bb952;
    edi = 0xc3c5dee5;
    eax = -eax;
    ecx = rotate_left32 (ecx, 0xdb);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805575e */
#include <stdint.h>
 
int32_t inst_260_values_var_0 (void) {
    eax = 0x60164b02;
    ebx = 0x91dbd6ba;
    ecx = 0x2ba46920;
    edx = 0xa9848795;
    esi = 0xad6ccd93;
    edi = 0xfb429b39;
    eax = -eax;
    __asm ("shld ebp, ebx, 1");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xac0f3e0e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804deca */
#include <stdint.h>
 
int32_t inst_86_flags_var_0 (void) {
    eax = 0x78278762;
    ebx = 0xaf60c2a;
    ecx = 0xbf8d0515;
    edx = 0xeec391b9;
    esi = 0xf530b90;
    edi = 0x22812070;
    eax = -eax;
    if (? >= ?) {
        edx = edi;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c194 */
#include <stdint.h>
 
int32_t inst_41_flags_var_0 (void) {
    eax = 0x1c210be3;
    ebx = 0x77583d81;
    ecx = 0xd1e6737b;
    edx = 0xe73e8e0d;
    esi = 0x4892cbf5;
    edi = 0xd1a7e719;
    eax = -eax;
    __asm ("btc dx, si");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805540b */
#include <stdint.h>
 
int32_t inst_255_values_var_0 (void) {
    eax = 0x412e5ebc;
    ebx = 0xa811c5e4;
    ecx = 0xca27230e;
    edx = 0xd89a35cd;
    esi = 0x70dbf03d;
    edi = 0xeb44a03b;
    eax = -eax;
    cl = (? < ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf7bf6dd5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80533fa */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_210_values_var_0 (void) {
    eax = 0x3a94a9cf;
    ebx = 0xb2eddd56;
    ecx = 0x1184ec06;
    edx = 0x8438769a;
    esi = 0xeaabe909;
    edi = 0x529d2860;
    eax = -eax;
    __asm ("clc");
    edx = rotate_left32 (edx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xaf874a45;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a49c */
#include <stdint.h>
 
int32_t inst_4_values_var_0 (void) {
    eax = 0xdd2f638c;
    ebx = 0x420302c;
    ecx = 0xc15310a9;
    edx = 0xd08d4ba6;
    esi = 0xf211b8f3;
    edi = 0x75e4514b;
    eax = -eax;
    dh += 5;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe4ee172d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055de1 */
#include <stdint.h>
 
int32_t inst_269_flags_var_0 (void) {
    eax = 0x5d3a419d;
    ebx = 0xac0a7edd;
    ecx = 0xd7a20f29;
    edx = 0x20d33b96;
    esi = 0xd0391d8f;
    edi = 0x948305ce;
    eax = -eax;
    __asm ("shrd ebp, ebp, cl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053ed5 */
#include <stdint.h>
 
int32_t inst_226_flags_var_0 (void) {
    eax = 0xe499047b;
    ebx = 0x8469f614;
    ecx = 0x8db7132c;
    edx = 0xa3718497;
    esi = 0x3215c816;
    edi = 0x769f4f1a;
    eax = -eax;
    bl -= ah;
    eax = 1;
    if (bl < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x15;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ff42 */
#include <stdint.h>
 
int32_t inst_132_values_var_0 (void) {
    eax = 0x80189b9b;
    ebx = 0xd214f3c8;
    ecx = 0x1a8dce57;
    edx = 0x48739fac;
    esi = 0x655e1b70;
    edi = 0x4a0c8a05;
    eax = -eax;
    ebx = (int32_t) bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5bacb5e1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053fa4 */
#include <stdint.h>
 
int32_t inst_227_flags_var_0 (void) {
    eax = 0x80c0780e;
    ebx = 0xeadabc89;
    ecx = 0xd8a14771;
    edx = 0xbcd17922;
    esi = 0x96d13c3;
    edi = 0xcfe9c13b;
    eax = -eax;
    cx -= 0xd571;
    eax = 1;
    if (cx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (cx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x15;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805272c */
#include <stdint.h>
 
int32_t inst_191_flags_var_0 (void) {
    eax = 0xc9d13b24;
    ebx = 0x76d4c446;
    ecx = 0xfb1f5e86;
    edx = 0xec6b83ba;
    esi = 0xe98d078b;
    edi = 0xd2025a4b;
    eax = -eax;
    ecx >>= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805689a */
#include <stdint.h>
 
int32_t inst_283_flags_var_0 (void) {
    eax = 0xbea6ff5;
    ebx = 0xe6a50f1c;
    ecx = 0x1e2a8d5a;
    edx = 0x1d5c5742;
    esi = 0x452c7c05;
    edi = 0x19902983;
    eax = -eax;
    __asm ("xadd al, bh");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x10;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051846 */
#include <stdint.h>
 
int32_t inst_168_values_var_0 (void) {
    eax = 0xc4050db7;
    ebx = 0xf413abb9;
    ecx = 0x49227515;
    edx = 0x8ceaf04;
    esi = 0x23ed6910;
    edi = 0xb208de02;
    eax = -eax;
    cl >>= 0xb;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5da9619b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f985 */
#include <stdint.h>
 
int32_t inst_123_values_var_0 (void) {
    eax = 0x30c640a4;
    ebx = 0x5e74ee40;
    ecx = 0xd1ce9e92;
    edx = 0x718e4350;
    esi = 0x75477f17;
    edi = 0x7ac0655;
    eax = -eax;
    edx = edx + esi*2;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9db1a50b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80567d8 */
#include <stdint.h>
 
int32_t inst_282_flags_var_0 (void) {
    eax = 0xb65beb6d;
    ebx = 0x1edf2eb6;
    ecx = 0xb4d2668e;
    edx = 0x52a03c87;
    esi = 0x9b03afcf;
    edi = 0xd7ccf948;
    eax = -eax;
    eax = 1;
    if ((ebx & edx) < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054f39 */
#include <stdint.h>
 
int32_t inst_247_flags_var_0 (void) {
    eax = 0xd30b2707;
    ebx = 0x791768f1;
    ecx = 0x9a87e527;
    edx = 0x53f79aff;
    esi = 0x433b3c37;
    edi = 0x4d3f0f3;
    eax = -eax;
    dl = (? == ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805300a */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_204_flags_var_0 (void) {
    eax = 0x317dedfe;
    ebx = 0x15542f3;
    ecx = 0x3537b9c1;
    edx = 0x7892f643;
    esi = 0x8528d439;
    edi = 0x5126098f;
    eax = -eax;
    __asm ("stc");
    ebx = rotate_left32 (ebx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054d50 */
#include <stdint.h>
 
int32_t inst_244_flags_var_0 (void) {
    eax = 0x9f4e7676;
    ebx = 0xbbc6d9fe;
    ecx = 0x88acf279;
    edx = 0x65271e6d;
    esi = 0xb9adcdf2;
    edi = 0x66714243;
    eax = -eax;
    __asm ("setno dl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052ded */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_201_flags_var_0 (void) {
    eax = 0x2a765b62;
    ebx = 0x8cf62238;
    ecx = 0xb4b6c7bb;
    edx = 0xdd43bfc1;
    esi = 0xca6fe628;
    edi = 0xb885bd4b;
    eax = -eax;
    __asm ("stc");
    al = rotate_right8 (al, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805647f */
#include <stdint.h>
 
int32_t inst_278_values_var_0 (void) {
    eax = 0x7f62cbfd;
    ebx = 0x28662f6e;
    ecx = 0xdd064e84;
    edx = 0xf3e27faf;
    esi = 0x650b822c;
    edi = 0x6ce358a8;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4a890639;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054439 */
#include <stdint.h>
 
int32_t inst_233_values_var_0 (void) {
    eax = 0x2a2dcecf;
    ebx = 0x25e12e32;
    ecx = 0x28cd2fe9;
    edx = 0x7eff6597;
    esi = 0x184f9737;
    edi = 0x22fc0635;
    eax = -eax;
    __asm ("stc");
    si -= 0x85c5;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x605bc156;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80569f2 */
#include <stdint.h>
 
int32_t inst_285_values_var_0 (void) {
    eax = 0x1921769c;
    ebx = 0x7acf42bb;
    ecx = 0x87b9a0c4;
    edx = 0xf6a9ad51;
    esi = 0x53f557f7;
    edi = 0xe53928bf;
    eax = -eax;
    __asm ("xadd edx, eax");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1958aeec;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80566ca */
#include <stdint.h>
 
int32_t inst_281_values_var_0 (void) {
    eax = 0x6c52b41;
    ebx = 0x6226538;
    ecx = 0xdb6744c5;
    edx = 0x61ebcaef;
    esi = 0x80d42521;
    edi = 0xdc48def3;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3a3f3f8a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e6d7 */
#include <stdint.h>
 
int32_t inst_97_flags_var_0 (void) {
    eax = 0x663e36be;
    ebx = 0x6a63a889;
    ecx = 0x33fa042a;
    edx = 0xb65683f9;
    esi = 0xf38755b;
    edi = 0x73c000f7;
    eax = -eax;
    __asm ("cmpxchg bl, cl");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ca4e */
#include <stdint.h>
 
int32_t inst_54_flags_var_0 (void) {
    eax = 0xc4bc7176;
    ebx = 0xecfa44e6;
    ecx = 0xfd4f37cf;
    edx = 0x2ef19147;
    esi = 0xb72939e8;
    edi = 0xe983ec91;
    eax = -eax;
    edx:eax = (int64_t) eax;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804aa8c */
#include <stdint.h>
 
int32_t inst_11_flags_var_0 (void) {
    eax = 0xabb4baf7;
    ebx = 0xacdde20c;
    ecx = 0x6b3f35c0;
    edx = 0x297663e;
    esi = 0x688d1e14;
    edi = 0x8f6817b5;
    eax = -eax;
    __asm ("stc");
    dl += dl;
    eax = 1;
    if (dl < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x14;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80516a3 */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_165_flags_var_0 (void) {
    eax = 0x385e95bd;
    ebx = 0x9e763099;
    ecx = 0xb424e51e;
    edx = 0x4614f175;
    esi = 0x4cd66200;
    edi = 0xd0974432;
    eax = -eax;
    dh = rotate_right8 (dh, 0x98);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f7d2 */
#include <stdint.h>
 
int32_t inst_120_flags_var_0 (void) {
    eax = 0xcd9c34d8;
    ebx = 0xdad58202;
    ecx = 0xc1d69b10;
    edx = 0x67a69622;
    esi = 0xa6cee2af;
    edi = 0x38de949f;
    eax = -eax;
    edx:eax = eax * eax;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054e50 */
#include <stdint.h>
 
int32_t inst_246_values_var_0 (void) {
    eax = 0x3e7fa7bb;
    ebx = 0x366aee02;
    ecx = 0xecf33b55;
    edx = 0x3b8ba299;
    esi = 0x5cee13be;
    edi = 0xce6456a7;
    eax = -eax;
    ch = (? >= ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4460d6bb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052f0f */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_203_values_var_0 (void) {
    eax = 0xabffe64e;
    ebx = 0x8606fcbc;
    ecx = 0xb71174da;
    edx = 0x2818553f;
    esi = 0x910b4e83;
    edi = 0x7c1e4e3;
    eax = -eax;
    __asm ("stc");
    bp = rotate_right16 (bp, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x20c2cc8a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055ee3 */
#include <stdint.h>
 
int32_t inst_271_values_var_0 (void) {
    eax = 0x6a99d837;
    ebx = 0xaf25dc1b;
    ecx = 0x16b01569;
    edx = 0x39faec28;
    esi = 0xde837423;
    edi = 0x7cfdd8bb;
    eax = -eax;
    ah -= 0x9d;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x797c5556;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80524a5 */
#include <stdint.h>
 
int32_t inst_187_flags_var_0 (void) {
    eax = 0xaa64428d;
    ebx = 0xebef8115;
    ecx = 0x4b41d32a;
    edx = 0xc7024b09;
    esi = 0x348dcde0;
    edi = 0xd7373750;
    eax = -eax;
    ecx <<= 0x62;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051a2b */
#include <stdint.h>
 
int32_t inst_171_values_var_0 (void) {
    eax = 0x1eb87c0d;
    ebx = 0x20ae6747;
    ecx = 0xa8c254a5;
    edx = 0x1be72e54;
    esi = 0x6cd61c9e;
    edi = 0x271ce397;
    eax = -eax;
    bh >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc94105f8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bcb2 */
#include <stdint.h>
 
int32_t inst_34_values_var_0 (void) {
    eax = 0x3c39648a;
    ebx = 0x40635af5;
    ecx = 0xaee889ca;
    edx = 0xffbc4597;
    esi = 0xd735b893;
    edi = 0xabfdd5dc;
    eax = -eax;
    __asm ("bsf ecx, eax");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1ce157cb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051cb3 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_175_values_var_0 (void) {
    eax = 0xe8ef8703;
    ebx = 0x8ad71355;
    ecx = 0x13b282a3;
    edx = 0x47d3c803;
    esi = 0x69e6466d;
    edi = 0x8efb093b;
    eax = -eax;
    bx = rotate_right16 (bx, 0x15);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x33bc9943;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8057140 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2eb3;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf0;
    eax = ebx - 0xf4;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf4)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804edd4 */
#include <stdint.h>
 
int32_t inst_106_flags_var_0 (void) {
    eax = 0xd35834ea;
    ebx = 0xb093e6b8;
    ecx = 0x26f9fa7d;
    edx = 0xe3549b02;
    esi = 0x274f1cf4;
    edi = 0xa54d3254;
    eax = -eax;
    cx++;
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (cx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056daa */
#include <stdint.h>
 
int32_t inst_290_flags_var_0 (void) {
    eax = 0x1fde50fb;
    ebx = 0x21adf542;
    ecx = 0xede03d72;
    edx = 0x6153e149;
    esi = 0x8c104e1d;
    edi = 0xd68a1145;
    eax = -eax;
    dl ^= al;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a8aa */
#include <stdint.h>
 
int32_t inst_9_values_var_0 (void) {
    eax = 0x29161043;
    ebx = 0x84c16f8c;
    ecx = 0x8af0b086;
    edx = 0xcf03bbd8;
    esi = 0x358257ea;
    edi = 0x5804bed8;
    eax = -eax;
    esi += ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9e2e0bed;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80554ae */
#include <stdint.h>
 
int32_t inst_256_values_var_0 (void) {
    eax = 0x9f838cd;
    ebx = 0xcfb9b2e7;
    ecx = 0x839500ff;
    edx = 0x47179c72;
    esi = 0x41ca8a00;
    edi = 0x1698b611;
    eax = -eax;
    cl = (? >= ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1b3362b4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80534ad */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_211_values_var_0 (void) {
    eax = 0x832f210c;
    ebx = 0x9b174c6b;
    ecx = 0xb0177a05;
    edx = 0x9b5dc7bb;
    esi = 0xaf95d514;
    edi = 0xd7edf067;
    eax = -eax;
    __asm ("clc");
    ebp = rotate_right32 (ebp, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x41a73d6d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805245f */
#include <stdint.h>
 
int32_t inst_187_values_var_0 (void) {
    eax = 0xb7d3f3f;
    ebx = 0x324fdeba;
    ecx = 0x7ac6aa66;
    edx = 0xeea02154;
    esi = 0x327cbfce;
    edi = 0x568c6c59;
    eax = -eax;
    eax <<= 0x8b;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc192c99c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a4e2 */
#include <stdint.h>
 
int32_t inst_4_flags_var_0 (void) {
    eax = 0x97c7d58b;
    ebx = 0xf045c543;
    ecx = 0xe620a02f;
    edx = 0x1ab1bba2;
    esi = 0x3db74ce9;
    edi = 0xa0693087;
    eax = -eax;
    ch += 0xfd;
    eax = 1;
    if (ch < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ch < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fe41 */
#include <stdint.h>
 
int32_t inst_130_flags_var_0 (void) {
    eax = 0xc47ddb52;
    ebx = 0xc98e61f5;
    ecx = 0x5cc5d3e6;
    edx = 0x3b21e4d3;
    esi = 0x6add5ff6;
    edi = 0x14fd3ade;
    eax = -eax;
    bx = (int16_t) bl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e285 */
#include <stdint.h>
 
int32_t inst_92_values_var_0 (void) {
    eax = 0xe28123e5;
    ebx = 0x82f5a38f;
    ecx = 0xaaf7509;
    edx = 0x57ef338e;
    esi = 0x432950c8;
    edi = 0xa28c6734;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x780d2639;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052402 */
#include <stdint.h>
 
int32_t inst_186_flags_var_0 (void) {
    eax = 0xda161d7b;
    ebx = 0x9ae09c88;
    ecx = 0x1f0697d8;
    edx = 0xf1486a60;
    esi = 0xbd7edb2f;
    edi = 0x824cf794;
    eax = -eax;
    ecx >>= 0x3b;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055a5a */
#include <stdint.h>
 
int32_t inst_264_values_var_0 (void) {
    eax = 0xa2817c8a;
    ebx = 0x8d9518d3;
    ecx = 0x4c3359fa;
    edx = 0xdafe0f92;
    esi = 0x31a38647;
    edi = 0x21a63f23;
    eax = -eax;
    __asm ("shld si, si, 2");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6301d664;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053b1b */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_221_values_var_0 (void) {
    eax = 0xefc97c33;
    ebx = 0x92eecab1;
    ecx = 0xcda2a255;
    edx = 0x3eb5ea81;
    esi = 0x8813445b;
    edi = 0x2f8abb61;
    eax = -eax;
    ebx = rotate_right32 (ebx, 0x2c);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8dfd2a7a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054cad */
#include <stdint.h>
 
int32_t inst_243_flags_var_0 (void) {
    eax = 0xaa7ed056;
    ebx = 0x7d429f9a;
    ecx = 0xd85cba49;
    edx = 0x6cbe4bfc;
    esi = 0xb1a3becb;
    edi = 0x5ab9cc3f;
    eax = -eax;
    __asm ("seto bh");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052d3a */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_200_flags_var_0 (void) {
    eax = 0xb678ccbb;
    ebx = 0xa37e101;
    ecx = 0x3e0324f;
    edx = 0x24b223f7;
    esi = 0xa3422f83;
    edi = 0xd2f6fe23;
    eax = -eax;
    __asm ("stc");
    bh = rotate_left8 (bh, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054f96 */
#include <stdint.h>
 
int32_t inst_248_values_var_0 (void) {
    eax = 0xcbb4e7a1;
    ebx = 0xae4778dd;
    ecx = 0xec6c002c;
    edx = 0x6f9608ec;
    esi = 0x304c8aa1;
    edi = 0x5a2f4a37;
    eax = -eax;
    dl = (? != ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9c737f19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053077 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_205_values_var_0 (void) {
    eax = 0x55641efc;
    ebx = 0x4fd0915c;
    ecx = 0x8cddc773;
    edx = 0x89a899ac;
    esi = 0x316c7662;
    edi = 0x487a02ff;
    eax = -eax;
    __asm ("stc");
    ebx = rotate_right32 (ebx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x73d541c0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bdf8 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t inst_36_values_var_0 (void) {
    eax = 0x4444e9c0;
    ebx = 0x3592aa83;
    ecx = 0xa7e22ca4;
    edx = 0xc5352608;
    esi = 0xc19e866;
    edi = 0x7b01d223;
    eax = -eax;
    ebx = SWAP32 (ebx);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa1e113f5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cf6a */
#include <stdint.h>
 
int32_t inst_62_flags_var_0 (void) {
    eax = 0x3d4ba35e;
    ebx = 0x99225a3c;
    ecx = 0xc1b2aad5;
    edx = 0x8362c531;
    esi = 0xd8e10650;
    edi = 0xcb9a2a83;
    eax = -eax;
    __asm ("cmovno ebp, ebp");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b2ba */
#include <stdint.h>
 
int32_t inst_21_flags_var_0 (void) {
    eax = 0x1b1d8042;
    ebx = 0x50ea58b9;
    ecx = 0x8959d1f5;
    edx = 0xaa91e55f;
    esi = 0xbf0b7ac9;
    edi = 0x294fa748;
    eax = -eax;
    __asm ("clc");
    eax += edi;
    eax = 1;
    if (eax < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (eax < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x15;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054df3 */
#include <stdint.h>
 
int32_t inst_245_flags_var_0 (void) {
    eax = 0xc1e67ac0;
    ebx = 0x30f45ac9;
    ecx = 0x6722923d;
    edx = 0x9db5835;
    esi = 0x92504a1e;
    edi = 0xc7f5f5ac;
    eax = -eax;
    cl = (? < ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052ea1 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_202_flags_var_0 (void) {
    eax = 0xc779712e;
    ebx = 0xb70018a4;
    ecx = 0xc812050b;
    edx = 0xfd0f86c7;
    esi = 0x10f7864;
    edi = 0x414b5a2;
    eax = -eax;
    __asm ("stc");
    ax = rotate_left16 (ax, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052bd7 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_198_flags_var_0 (void) {
    eax = 0x6e6cef1d;
    ebx = 0xec1782e3;
    ecx = 0xc55b5dbe;
    edx = 0x38273e0f;
    esi = 0xca2e1870;
    edi = 0xf53b0f46;
    eax = -eax;
    ebx = rotate_left32 (ebx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055551 */
#include <stdint.h>
 
int32_t inst_257_values_var_0 (void) {
    eax = 0x29e6bc3a;
    ebx = 0x38c44da2;
    ecx = 0xc10cc200;
    edx = 0xc9f550ce;
    esi = 0x2e7454d7;
    edi = 0xc9526273;
    eax = -eax;
    bl = (? <= ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfcfaf2b5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053560 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_212_values_var_0 (void) {
    eax = 0xe50ecf0f;
    ebx = 0x48d564f6;
    ecx = 0x1768d05f;
    edx = 0xef17ce45;
    esi = 0xfcbc23f7;
    edi = 0x59a492a3;
    eax = -eax;
    bl = rotate_left8 (bl, 0x29);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x24391609;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80538d4 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_217_flags_var_0 (void) {
    eax = 0x6ee4de83;
    ebx = 0x83767673;
    ecx = 0xb6e8c004;
    edx = 0xa50eab55;
    esi = 0xe900a590;
    edi = 0x52f99597;
    eax = -eax;
    dx = rotate_right16 (dx, 0x29);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050576 */
#include <stdint.h>
 
int32_t inst_141_values_var_0 (void) {
    eax = 0x91138e92;
    ebx = 0xcda074ed;
    ecx = 0x485b1a89;
    edx = 0xacc19b62;
    esi = 0x84257ce4;
    edi = 0x445f2aa6;
    eax = -eax;
    si = ~si;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3aa758c4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054897 */
#include <stdint.h>
 
int32_t inst_238_flags_var_0 (void) {
    eax = 0x5da58c2c;
    ebx = 0x2f458aad;
    ecx = 0xbcabec3;
    edx = 0xb53bcc7;
    esi = 0x728c5d43;
    edi = 0x8460d836;
    eax = -eax;
    __asm ("clc");
    dh -= dh;
    eax = 1;
    if (dh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dh < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054b0d */
#include <stdint.h>
 
int32_t inst_241_flags_var_0 (void) {
    eax = 0x8aab11f2;
    ebx = 0x80a695eb;
    ecx = 0xd9b003c0;
    edx = 0xc568dcd6;
    esi = 0x5bbeee56;
    edi = 0x7bd6fd56;
    eax = -eax;
    __asm ("clc");
    ebx -= 0xf35b7d24;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a100 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d6d4 */
#include <stdint.h>
 
int32_t inst_74_values_var_0 (void) {
    eax = 0x9a7374e4;
    ebx = 0xa5dfe2b8;
    ecx = 0x954cedbf;
    edx = 0x932c31df;
    esi = 0x6676c99;
    edi = 0xd3dd7b82;
    eax = -eax;
    if (? > ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6e5bcb20;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80557a5 */
#include <stdint.h>
 
int32_t inst_260_flags_var_0 (void) {
    eax = 0xaaadf45;
    ebx = 0x56c76a1d;
    ecx = 0xcb5cd527;
    edx = 0xa3388adc;
    esi = 0xd1807edb;
    edi = 0x3bb0e02f;
    eax = -eax;
    __asm ("shld ebx, eax, 1");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xa;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804be99 */
#include <stdint.h>
 
int32_t inst_37_values_var_0 (void) {
    eax = 0xdf8ef151;
    ebx = 0x19c905a6;
    ecx = 0xf6f429c7;
    edx = 0x2eba6210;
    esi = 0xe2bc4ea4;
    edi = 0x99576df6;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4a2ca90;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056e6e */
#include <stdint.h>
 
int32_t inst_291_flags_var_0 (void) {
    eax = 0xa7f4a44a;
    ebx = 0x7c0ec944;
    ecx = 0xa2b4d915;
    edx = 0x8c319fb4;
    esi = 0xfb94cdcc;
    edi = 0xf1b705c7;
    eax = -eax;
    si ^= 0x8078;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805192e */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_169_flags_var_0 (void) {
    eax = 0x9d69d91a;
    ebx = 0x80d9e2bb;
    ecx = 0x52fd4c95;
    edx = 0xf479cef4;
    esi = 0xe278f7be;
    edi = 0xc7966bc3;
    eax = -eax;
    bh = rotate_left8 (bh, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fa6d */
#include <stdint.h>
 
int32_t inst_124_flags_var_0 (void) {
    eax = 0x9c36a4ae;
    ebx = 0x19a4857d;
    ecx = 0x6c0d8633;
    edx = 0x9c6c6835;
    esi = 0x80d0c891;
    edi = 0x650dff58;
    eax = -eax;
    bl = 0x56;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050619 */
#include <stdint.h>
 
int32_t inst_142_values_var_0 (void) {
    eax = 0x1839b669;
    ebx = 0x674d5e59;
    ecx = 0xe6918f61;
    edx = 0xde429cf3;
    esi = 0xe003045;
    edi = 0xfc0c0146;
    eax = -eax;
    ebp = ~ebp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x861dc50d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804daf2 */
#include <stdint.h>
 
int32_t inst_80_flags_var_0 (void) {
    eax = 0x40eb821a;
    ebx = 0x4ff06c89;
    ecx = 0xaeac79c9;
    edx = 0xb4de7344;
    esi = 0x69610d68;
    edi = 0xd66cb3d;
    eax = -eax;
    __asm ("cmovp edx, eax");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a74e */
#include <stdint.h>
 
int32_t inst_7_flags_var_0 (void) {
    eax = 0xa3da7531;
    ebx = 0xece3bf45;
    ecx = 0x8e4b90f2;
    edx = 0x15073a72;
    esi = 0xeea78261;
    edi = 0x4ce8195d;
    eax = -eax;
    dx += ax;
    eax = 1;
    if (dx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805008a */
#include <stdint.h>
 
int32_t inst_134_values_var_0 (void) {
    eax = 0xcd5c0b7e;
    ebx = 0x8ea6d2c1;
    ecx = 0xececda77;
    edx = 0x5c35815c;
    esi = 0xf9f93db8;
    edi = 0x3c718c5f;
    eax = -eax;
    edx = (int32_t) bh;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc166f772;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804daac */
#include <stdint.h>
 
int32_t inst_80_values_var_0 (void) {
    eax = 0xc900b2b0;
    ebx = 0xa5e432e;
    ecx = 0x7c7ba46;
    edx = 0xc06e4488;
    esi = 0x8d9061aa;
    edi = 0x6871b15b;
    eax = -eax;
    __asm ("cmovp esi, edi");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3a752bee;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80527cd */
#include <stdint.h>
 
int32_t inst_192_flags_var_0 (void) {
    eax = 0x579e6f2a;
    ebx = 0xd5b7f5a5;
    ecx = 0xd7068078;
    edx = 0x75f3ca65;
    esi = 0x932d2ac;
    edi = 0x868e3f25;
    eax = -eax;
    ecx <<= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e60a */
#include <stdint.h>
 
int32_t inst_96_flags_var_0 (void) {
    eax = 0xfb9facc4;
    ebx = 0x60e307e5;
    ecx = 0x6d777b1b;
    edx = 0x1443f01;
    esi = 0xcee04c14;
    edi = 0xc30b77d2;
    eax = -eax;
    eax = 1;
    if (edx < edx) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edx < edx) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c9ae */
#include <stdint.h>
 
int32_t inst_53_flags_var_0 (void) {
    eax = 0x3511c470;
    ebx = 0xec8b9b66;
    ecx = 0x24fd687d;
    edx = 0x1154da25;
    esi = 0x6c5fac14;
    edi = 0xf2b43dd3;
    eax = -eax;
    ax = (int16_t) al;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a9bd */
#include <stdint.h>
 
int32_t inst_10_flags_var_0 (void) {
    eax = 0xfcfa228b;
    ebx = 0x5a5693b1;
    ecx = 0x97689b1c;
    edx = 0x6835fd5d;
    esi = 0xa43d2fe5;
    edi = 0xfc4e2cb5;
    eax = -eax;
    __asm ("stc");
    bh += 0x8c;
    eax = 1;
    if (bh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bh < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x13;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c64f */
#include <stdint.h>
 
int32_t inst_48_flags_var_0 (void) {
    eax = 0x9eefe64c;
    ebx = 0x794ba8a6;
    ecx = 0x700ea3d0;
    edx = 0xe0ab209c;
    esi = 0x14f542e7;
    edi = 0x20962cbd;
    eax = -eax;
    __asm ("btr eax, 5");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054074 */
#include <stdint.h>
 
int32_t inst_228_flags_var_0 (void) {
    eax = 0xb58340f7;
    ebx = 0x891b4ce9;
    ecx = 0x74d9498e;
    edx = 0x5988c28c;
    esi = 0xd91f99f9;
    edi = 0x894a633c;
    eax = -eax;
    cx -= bx;
    eax = 1;
    if (cx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (cx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055c49 */
#include <stdint.h>
 
int32_t inst_267_values_var_0 (void) {
    eax = 0xddab0867;
    ebx = 0x49da47a8;
    ecx = 0x3dd3aa95;
    edx = 0xdd9999a3;
    esi = 0xf5c99894;
    edi = 0xf478371a;
    eax = -eax;
    cl &= 0xf;
    __asm ("shrd di, si, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x240132c2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053d00 */
#include <stdint.h>
 
int32_t inst_224_values_var_0 (void) {
    eax = 0x481a3e5;
    ebx = 0xa5903607;
    ecx = 0xff834c11;
    edx = 0xfbe9b542;
    esi = 0xfb45d08d;
    edi = 0x49e28562;
    eax = -eax;
    __asm ("sahf");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x733082ad;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805507f */
#include <stdint.h>
 
int32_t inst_249_flags_var_0 (void) {
    eax = 0xb45821a2;
    ebx = 0x760ca77;
    ecx = 0xcfd73924;
    edx = 0xb43d7d2d;
    esi = 0x42504be8;
    edi = 0x4202e000;
    eax = -eax;
    al = (? <= ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053170 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_206_flags_var_0 (void) {
    eax = 0xd426ee38;
    ebx = 0x6d5d0430;
    ecx = 0xdc6a3de4;
    edx = 0x14b17c3b;
    esi = 0xaeb0ff2f;
    edi = 0x4ac954ad;
    eax = -eax;
    __asm ("clc");
    ch = rotate_left8 (ch, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804df27 */
#include <stdint.h>
 
int32_t inst_87_values_var_0 (void) {
    eax = 0xf94f48be;
    ebx = 0x863663e7;
    ecx = 0xbd29ffb0;
    edx = 0xd78b3191;
    esi = 0xa967c8c6;
    edi = 0x86d33a80;
    eax = -eax;
    if (? <= ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5b2f1e53;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c1fa */
#include <stdint.h>
 
int32_t inst_42_values_var_0 (void) {
    eax = 0x822ac25c;
    ebx = 0xca5311df;
    ecx = 0x15044022;
    edx = 0x8443959a;
    esi = 0x65cd081a;
    edi = 0x39ceb6ea;
    eax = -eax;
    __asm ("btc esi, ebx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4908c628;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80556df */
#include <stdint.h>
 
int32_t inst_259_flags_var_0 (void) {
    eax = 0xd2285fd4;
    ebx = 0x42435e41;
    ecx = 0x1ee28be0;
    edx = 0x7e21c4c3;
    esi = 0x29731959;
    edi = 0x7da53bbd;
    eax = -eax;
    __asm ("shld bp, ax, 1");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80536eb */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_214_flags_var_0 (void) {
    eax = 0xc4bd2256;
    ebx = 0x8a8e8754;
    ecx = 0x3069ea90;
    edx = 0x74803e2a;
    esi = 0xff6cf578;
    edi = 0xd75c52a0;
    eax = -eax;
    cl = rotate_left8 (cl, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055451 */
#include <stdint.h>
 
int32_t inst_255_flags_var_0 (void) {
    eax = 0x25c3b59f;
    ebx = 0x9c082ccd;
    ecx = 0xfdccbf52;
    edx = 0x9d7ac004;
    esi = 0x25d4a01b;
    edi = 0x54981f1c;
    eax = -eax;
    cl = (? < ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053440 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_210_flags_var_0 (void) {
    eax = 0x6e6bddfd;
    ebx = 0x4d4fc240;
    ecx = 0xaa948eb3;
    edx = 0x24c35e3c;
    esi = 0x1dc443fe;
    edi = 0x357aefe1;
    eax = -eax;
    __asm ("clc");
    esi = rotate_left32 (esi, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80506ba */
#include <stdint.h>
 
int32_t inst_143_values_var_0 (void) {
    eax = 0x350b475c;
    ebx = 0x3d834a2e;
    ecx = 0xd7cf0fa6;
    edx = 0x241b126b;
    esi = 0xe587e357;
    edi = 0x5ac44b37;
    eax = -eax;
    bh |= 0xba;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9ef7e7a4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80546f9 */
#include <stdint.h>
 
int32_t inst_236_flags_var_0 (void) {
    eax = 0x1f5a804f;
    ebx = 0xba8c21ec;
    ecx = 0x14f0b8b0;
    edx = 0x43bfb5ec;
    esi = 0xbc5f584b;
    edi = 0xa22d64d7;
    eax = -eax;
    __asm ("stc");
    esi -= edx;
    eax = 1;
    if (esi < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (esi < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x12;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055cf4 */
#include <stdint.h>
 
int32_t inst_268_values_var_0 (void) {
    eax = 0xcaff2f3a;
    ebx = 0x895e0895;
    ecx = 0x3982c87d;
    edx = 0xfbe5dfe2;
    esi = 0xf4ce0be7;
    edi = 0x326fe7a0;
    eax = -eax;
    __asm ("shrd bp, dx, 0xc");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb2cb7365;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053dc2 */
#include <stdint.h>
 
int32_t inst_225_values_var_0 (void) {
    eax = 0xe3f95c99;
    ebx = 0x3c0dc2b0;
    ecx = 0x879b6b8e;
    edx = 0x8430d47b;
    esi = 0x689ccb62;
    edi = 0xd310fed1;
    eax = -eax;
    ch -= 0x82;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2869cc01;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051458 */
#include <stdint.h>
 
int32_t inst_162_values_var_0 (void) {
    eax = 0x85ec9393;
    ebx = 0xd3b8f034;
    ecx = 0xaa6e47ad;
    edx = 0xd458021d;
    esi = 0xf587ccaa;
    edi = 0x88a054c4;
    eax = -eax;
    edi <<= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa78df771;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055c93 */
#include <stdint.h>
 
int32_t inst_267_flags_var_0 (void) {
    eax = 0x544af17d;
    ebx = 0x97c54685;
    ecx = 0xa9b87d0a;
    edx = 0x2f7a0339;
    esi = 0xfc1d47df;
    edi = 0x376d115e;
    eax = -eax;
    cl &= 0xf;
    __asm ("shrd bp, di, cl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053d44 */
#include <stdint.h>
 
int32_t inst_224_flags_var_0 (void) {
    eax = 0x3929f19c;
    ebx = 0xcbf21c4c;
    ecx = 0x1bd69ebd;
    edx = 0x6582baf9;
    esi = 0x1d3f502c;
    edi = 0x227d4626;
    eax = -eax;
    __asm ("sahf");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80563bc */
#include <stdint.h>
 
int32_t inst_277_values_var_0 (void) {
    eax = 0x7232ab61;
    ebx = 0x72067917;
    ecx = 0x8460c84e;
    edx = 0xcd4764bc;
    esi = 0x210c8a38;
    edi = 0xec3a6cce;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1fbecf6b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805436b */
#include <stdint.h>
 
int32_t inst_232_values_var_0 (void) {
    eax = 0x63efcb29;
    ebx = 0x171b04ed;
    ecx = 0x4a4a8d49;
    edx = 0xc5c41f76;
    esi = 0x375b9a73;
    edi = 0x236492b0;
    eax = -eax;
    __asm ("stc");
    cl -= ch;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xdae66ddd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805149d */
#include <stdint.h>
 
int32_t inst_162_flags_var_0 (void) {
    eax = 0xcf01852b;
    ebx = 0xc657921a;
    ecx = 0x822c4e82;
    edx = 0x19c95f3f;
    esi = 0xbc7b3729;
    edi = 0x7effc743;
    eax = -eax;
    edx <<= 1;
    eax = 1;
    if (edx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dd82 */
#include <stdint.h>
 
int32_t inst_84_flags_var_0 (void) {
    eax = 0xd62337e2;
    ebx = 0x792e7f65;
    ecx = 0x299daf6c;
    edx = 0xad86a27b;
    esi = 0x47e684c3;
    edi = 0xcbe3bef;
    eax = -eax;
    if (? < ?) {
        ecx = edi;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e114 */
#include <stdint.h>
 
int32_t inst_90_values_var_0 (void) {
    eax = 0x62070d5c;
    ebx = 0x2a93e913;
    ecx = 0xddd11974;
    edx = 0x9b6a1f3d;
    esi = 0xcb4a4bec;
    edi = 0x9f8eddae;
    eax = -eax;
    if (? > ?) {
        ecx = edx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x59ea361f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050436 */
#include <stdint.h>
 
int32_t inst_139_values_var_0 (void) {
    eax = 0x50f4b608;
    ebx = 0x95fefbfb;
    ecx = 0x1ad413d8;
    edx = 0x50144adf;
    esi = 0xccaa8220;
    edi = 0x49cd6ab6;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x806bc66b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055039 */
#include <stdint.h>
 
int32_t inst_249_values_var_0 (void) {
    eax = 0x4a8029d1;
    ebx = 0xe702dda2;
    ecx = 0x2c57122b;
    edx = 0xf7aafa8;
    esi = 0x35288478;
    edi = 0x1bc67a4f;
    eax = -eax;
    dl = (? <= ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x76f3d6aa;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805312a */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_206_values_var_0 (void) {
    eax = 0xf61b5e4b;
    ebx = 0x671cf4c;
    ecx = 0xd98a2c1c;
    edx = 0x1986ff07;
    esi = 0xd51b6721;
    edi = 0x8c3bced7;
    eax = -eax;
    __asm ("clc");
    dl = rotate_left8 (dl, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x252cdd4e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052a2c */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_196_values_var_0 (void) {
    eax = 0x6dcf75d5;
    ebx = 0x6eb0bd68;
    ecx = 0x49f38ea6;
    edx = 0x677bd8a;
    esi = 0x82b2f050;
    edi = 0x4db24a89;
    eax = -eax;
    bx = rotate_left16 (bx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x683de6d1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d862 */
#include <stdint.h>
 
int32_t inst_76_flags_var_0 (void) {
    eax = 0x54014b21;
    ebx = 0x67062b59;
    ecx = 0x439e8bd9;
    edx = 0x8e9c8bbc;
    esi = 0xc17483f4;
    edi = 0xfb5861c2;
    eax = -eax;
    __asm ("cmovs esi, edx");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e0b6 */
#include <stdint.h>
 
int32_t inst_89_flags_var_0 (void) {
    eax = 0x87632f2f;
    ebx = 0x7977dd82;
    ecx = 0x771c5ac3;
    edx = 0xf80c636;
    esi = 0x4f336aea;
    edi = 0xb673c0be;
    eax = -eax;
    if (? > ?) {
        cx = bx;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c39b */
#include <stdint.h>
 
int32_t inst_44_flags_var_0 (void) {
    eax = 0x21a58815;
    ebx = 0x9a39efd6;
    ecx = 0x1f7ab6f5;
    edx = 0xc8e970f4;
    esi = 0x2d4d1e9d;
    edi = 0x48e16ea2;
    eax = -eax;
    __asm ("btc ebx, 0x22");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055aa2 */
#include <stdint.h>
 
int32_t inst_264_flags_var_0 (void) {
    eax = 0x2e6475ae;
    ebx = 0x858c526f;
    ecx = 0xd8c8b942;
    edx = 0xb1830031;
    esi = 0x15b33144;
    edi = 0xaa2015bb;
    eax = -eax;
    __asm ("shld si, dx, 2");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053b61 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_221_flags_var_0 (void) {
    eax = 0x73bc178d;
    ebx = 0xdc41a2d8;
    ecx = 0x7b524732;
    edx = 0x33a468ef;
    esi = 0x328a555d;
    edi = 0x531022ab;
    eax = -eax;
    ebp = rotate_right32 (ebp, 0xde);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a37e */
#include <stdint.h>
 
int32_t inst_2_flags_var_0 (void) {
    eax = 0x7afc5826;
    ebx = 0x50d67964;
    ecx = 0x5f1cdc36;
    edx = 0x47bde85d;
    esi = 0xb3968c33;
    edi = 0x2dc882e1;
    eax = -eax;
    __asm ("aam 0xd8");
    edi = 0;
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8049060 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_8h;
    /* [13] -r-x section size 57669 named .text */
    ecx = esp + 4;
    eax = inst_0_values_var_0 (ecx, ebx, ebp);
    ebx = eax;
    eax = inst_0_flags_var_0 ();
    ebx += eax;
    eax = inst_1_values_var_0 ();
    ebx += eax;
    eax = inst_1_flags_var_0 ();
    ebx += eax;
    eax = inst_2_values_var_0 ();
    ebx += eax;
    eax = inst_2_flags_var_0 ();
    ebx += eax;
    eax = inst_3_values_var_0 ();
    ebx += eax;
    eax = inst_3_flags_var_0 ();
    ebx += eax;
    eax = inst_4_values_var_0 ();
    ebx += eax;
    eax = inst_4_flags_var_0 ();
    ebx += eax;
    eax = inst_5_values_var_0 ();
    ebx += eax;
    eax = inst_5_flags_var_0 ();
    ebx += eax;
    eax = inst_6_values_var_0 ();
    ebx += eax;
    eax = inst_6_flags_var_0 ();
    ebx += eax;
    eax = inst_7_values_var_0 ();
    ebx += eax;
    eax = inst_7_flags_var_0 ();
    ebx += eax;
    eax = inst_8_values_var_0 ();
    ebx += eax;
    eax = inst_8_flags_var_0 ();
    ebx += eax;
    eax = inst_9_values_var_0 ();
    ebx += eax;
    eax = inst_9_flags_var_0 ();
    ebx += eax;
    eax = inst_10_values_var_0 ();
    ebx += eax;
    eax = inst_10_flags_var_0 ();
    ebx += eax;
    eax = inst_11_values_var_0 ();
    ebx += eax;
    eax = inst_11_flags_var_0 ();
    ebx += eax;
    eax = inst_12_values_var_0 ();
    ebx += eax;
    eax = inst_12_flags_var_0 ();
    ebx += eax;
    eax = inst_13_values_var_0 ();
    ebx += eax;
    eax = inst_13_flags_var_0 ();
    ebx += eax;
    eax = inst_14_values_var_0 ();
    ebx += eax;
    eax = inst_14_flags_var_0 ();
    ebx += eax;
    eax = inst_15_values_var_0 ();
    ebx += eax;
    eax = inst_15_flags_var_0 ();
    ebx += eax;
    eax = inst_16_values_var_0 ();
    ebx += eax;
    eax = inst_16_flags_var_0 ();
    ebx += eax;
    eax = inst_17_values_var_0 ();
    ebx += eax;
    eax = inst_17_flags_var_0 ();
    ebx += eax;
    eax = inst_18_values_var_0 ();
    ebx += eax;
    eax = inst_18_flags_var_0 ();
    ebx += eax;
    eax = inst_19_values_var_0 ();
    ebx += eax;
    eax = inst_19_flags_var_0 ();
    ebx += eax;
    eax = inst_20_values_var_0 ();
    ebx += eax;
    eax = inst_20_flags_var_0 ();
    ebx += eax;
    eax = inst_21_values_var_0 ();
    ebx += eax;
    eax = inst_21_flags_var_0 ();
    ebx += eax;
    eax = inst_22_values_var_0 ();
    ebx += eax;
    eax = inst_22_flags_var_0 ();
    ebx += eax;
    eax = inst_23_values_var_0 ();
    ebx += eax;
    eax = inst_23_flags_var_0 ();
    ebx += eax;
    eax = inst_24_values_var_0 ();
    ebx += eax;
    eax = inst_24_flags_var_0 ();
    ebx += eax;
    eax = inst_25_values_var_0 ();
    ebx += eax;
    eax = inst_25_flags_var_0 ();
    ebx += eax;
    eax = inst_26_values_var_0 ();
    ebx += eax;
    eax = inst_26_flags_var_0 ();
    ebx += eax;
    eax = inst_27_values_var_0 ();
    ebx += eax;
    eax = inst_27_flags_var_0 ();
    ebx += eax;
    eax = inst_28_values_var_0 ();
    ebx += eax;
    eax = inst_28_flags_var_0 ();
    ebx += eax;
    eax = inst_29_values_var_0 ();
    ebx += eax;
    eax = inst_29_flags_var_0 ();
    ebx += eax;
    eax = inst_30_values_var_0 ();
    ebx += eax;
    eax = inst_30_flags_var_0 ();
    ebx += eax;
    eax = inst_31_values_var_0 ();
    ebx += eax;
    eax = inst_31_flags_var_0 ();
    ebx += eax;
    eax = inst_32_values_var_0 ();
    ebx += eax;
    eax = inst_32_flags_var_0 ();
    ebx += eax;
    eax = inst_33_values_var_0 ();
    ebx += eax;
    eax = inst_33_flags_var_0 ();
    ebx += eax;
    eax = inst_34_values_var_0 ();
    ebx += eax;
    eax = inst_34_flags_var_0 ();
    ebx += eax;
    eax = inst_35_values_var_0 ();
    ebx += eax;
    eax = inst_35_flags_var_0 ();
    ebx += eax;
    eax = inst_36_values_var_0 ();
    ebx += eax;
    eax = inst_36_flags_var_0 ();
    ebx += eax;
    eax = inst_37_values_var_0 ();
    ebx += eax;
    eax = inst_37_flags_var_0 ();
    ebx += eax;
    eax = inst_38_values_var_0 ();
    ebx += eax;
    eax = inst_38_flags_var_0 ();
    ebx += eax;
    eax = inst_39_values_var_0 ();
    ebx += eax;
    eax = inst_39_flags_var_0 ();
    ebx += eax;
    eax = inst_40_values_var_0 ();
    ebx += eax;
    eax = inst_40_flags_var_0 ();
    ebx += eax;
    eax = inst_41_values_var_0 ();
    ebx += eax;
    eax = inst_41_flags_var_0 ();
    ebx += eax;
    eax = inst_42_values_var_0 ();
    ebx += eax;
    eax = inst_42_flags_var_0 ();
    ebx += eax;
    eax = inst_43_values_var_0 ();
    ebx += eax;
    eax = inst_43_flags_var_0 ();
    ebx += eax;
    eax = inst_44_values_var_0 ();
    ebx += eax;
    eax = inst_44_flags_var_0 ();
    ebx += eax;
    eax = inst_45_values_var_0 ();
    ebx += eax;
    eax = inst_45_flags_var_0 ();
    ebx += eax;
    eax = inst_46_values_var_0 ();
    ebx += eax;
    eax = inst_46_flags_var_0 ();
    ebx += eax;
    eax = inst_47_values_var_0 ();
    ebx += eax;
    eax = inst_47_flags_var_0 ();
    ebx += eax;
    eax = inst_48_values_var_0 ();
    ebx += eax;
    eax = inst_48_flags_var_0 ();
    ebx += eax;
    eax = inst_49_values_var_0 ();
    ebx += eax;
    eax = inst_49_flags_var_0 ();
    ebx += eax;
    eax = inst_50_values_var_0 ();
    ebx += eax;
    eax = inst_50_flags_var_0 ();
    ebx += eax;
    eax = inst_51_values_var_0 ();
    ebx += eax;
    eax = inst_51_flags_var_0 ();
    ebx += eax;
    eax = inst_52_values_var_0 ();
    ebx += eax;
    eax = inst_52_flags_var_0 ();
    ebx += eax;
    eax = inst_53_values_var_0 ();
    ebx += eax;
    eax = inst_53_flags_var_0 ();
    ebx += eax;
    eax = inst_54_values_var_0 ();
    ebx += eax;
    eax = inst_54_flags_var_0 ();
    ebx += eax;
    eax = inst_55_values_var_0 ();
    ebx += eax;
    eax = inst_55_flags_var_0 ();
    ebx += eax;
    eax = inst_56_values_var_0 ();
    ebx += eax;
    eax = inst_56_flags_var_0 ();
    ebx += eax;
    eax = inst_57_values_var_0 ();
    ebx += eax;
    eax = inst_57_flags_var_0 ();
    ebx += eax;
    eax = inst_58_values_var_0 ();
    ebx += eax;
    eax = inst_58_flags_var_0 ();
    ebx += eax;
    eax = inst_59_values_var_0 ();
    ebx += eax;
    eax = inst_59_flags_var_0 ();
    ebx += eax;
    eax = inst_60_values_var_0 ();
    ebx += eax;
    eax = inst_60_flags_var_0 ();
    ebx += eax;
    eax = inst_61_values_var_0 ();
    ebx += eax;
    eax = inst_61_flags_var_0 ();
    ebx += eax;
    eax = inst_62_values_var_0 ();
    ebx += eax;
    eax = inst_62_flags_var_0 ();
    ebx += eax;
    eax = inst_63_values_var_0 ();
    ebx += eax;
    eax = inst_63_flags_var_0 ();
    ebx += eax;
    eax = inst_64_values_var_0 ();
    ebx += eax;
    eax = inst_64_flags_var_0 ();
    ebx += eax;
    eax = inst_65_values_var_0 ();
    ebx += eax;
    eax = inst_65_flags_var_0 ();
    ebx += eax;
    eax = inst_66_values_var_0 ();
    ebx += eax;
    eax = inst_66_flags_var_0 ();
    ebx += eax;
    eax = inst_67_values_var_0 ();
    ebx += eax;
    eax = inst_67_flags_var_0 ();
    ebx += eax;
    eax = inst_68_values_var_0 ();
    ebx += eax;
    eax = inst_68_flags_var_0 ();
    ebx += eax;
    eax = inst_69_values_var_0 ();
    ebx += eax;
    eax = inst_69_flags_var_0 ();
    ebx += eax;
    eax = inst_70_values_var_0 ();
    ebx += eax;
    eax = inst_70_flags_var_0 ();
    ebx += eax;
    eax = inst_71_values_var_0 ();
    ebx += eax;
    eax = inst_71_flags_var_0 ();
    ebx += eax;
    eax = inst_72_values_var_0 ();
    ebx += eax;
    eax = inst_72_flags_var_0 ();
    ebx += eax;
    eax = inst_73_values_var_0 ();
    ebx += eax;
    eax = inst_73_flags_var_0 ();
    ebx += eax;
    eax = inst_74_values_var_0 ();
    ebx += eax;
    eax = inst_74_flags_var_0 ();
    ebx += eax;
    eax = inst_75_values_var_0 ();
    ebx += eax;
    eax = inst_75_flags_var_0 ();
    ebx += eax;
    eax = inst_76_values_var_0 ();
    ebx += eax;
    eax = inst_76_flags_var_0 ();
    ebx += eax;
    eax = inst_77_values_var_0 ();
    ebx += eax;
    eax = inst_77_flags_var_0 ();
    ebx += eax;
    eax = inst_78_values_var_0 ();
    ebx += eax;
    eax = inst_78_flags_var_0 ();
    ebx += eax;
    eax = inst_79_values_var_0 ();
    ebx += eax;
    eax = inst_79_flags_var_0 ();
    ebx += eax;
    eax = inst_80_values_var_0 ();
    ebx += eax;
    eax = inst_80_flags_var_0 ();
    ebx += eax;
    eax = inst_81_values_var_0 ();
    ebx += eax;
    eax = inst_81_flags_var_0 ();
    ebx += eax;
    eax = inst_82_values_var_0 ();
    ebx += eax;
    eax = inst_82_flags_var_0 ();
    ebx += eax;
    eax = inst_83_values_var_0 ();
    ebx += eax;
    eax = inst_83_flags_var_0 ();
    ebx += eax;
    eax = inst_84_values_var_0 ();
    ebx += eax;
    eax = inst_84_flags_var_0 ();
    ebx += eax;
    eax = inst_85_values_var_0 ();
    ebx += eax;
    eax = inst_85_flags_var_0 ();
    ebx += eax;
    eax = inst_86_values_var_0 ();
    ebx += eax;
    eax = inst_86_flags_var_0 ();
    ebx += eax;
    eax = inst_87_values_var_0 ();
    ebx += eax;
    eax = inst_87_flags_var_0 ();
    ebx += eax;
    eax = inst_88_values_var_0 ();
    ebx += eax;
    eax = inst_88_flags_var_0 ();
    ebx += eax;
    eax = inst_89_values_var_0 ();
    ebx += eax;
    eax = inst_89_flags_var_0 ();
    ebx += eax;
    eax = inst_90_values_var_0 ();
    ebx += eax;
    eax = inst_90_flags_var_0 ();
    ebx += eax;
    eax = inst_91_values_var_0 ();
    ebx += eax;
    eax = inst_91_flags_var_0 ();
    ebx += eax;
    eax = inst_92_values_var_0 ();
    ebx += eax;
    eax = inst_92_flags_var_0 ();
    ebx += eax;
    eax = inst_93_values_var_0 ();
    ebx += eax;
    eax = inst_93_flags_var_0 ();
    ebx += eax;
    eax = inst_94_values_var_0 ();
    ebx += eax;
    eax = inst_94_flags_var_0 ();
    ebx += eax;
    eax = inst_95_values_var_0 ();
    ebx += eax;
    eax = inst_95_flags_var_0 ();
    ebx += eax;
    eax = inst_96_values_var_0 ();
    ebx += eax;
    eax = inst_96_flags_var_0 ();
    ebx += eax;
    eax = inst_97_values_var_0 ();
    ebx += eax;
    eax = inst_97_flags_var_0 ();
    ebx += eax;
    eax = inst_98_values_var_0 ();
    ebx += eax;
    eax = inst_98_flags_var_0 ();
    ebx += eax;
    eax = inst_99_values_var_0 ();
    ebx += eax;
    eax = inst_99_flags_var_0 ();
    ebx += eax;
    eax = inst_100_values_var_0 ();
    ebx += eax;
    eax = inst_100_flags_var_0 ();
    ebx += eax;
    eax = inst_101_values_var_0 ();
    ebx += eax;
    eax = inst_101_flags_var_0 ();
    ebx += eax;
    eax = inst_102_values_var_0 ();
    ebx += eax;
    eax = inst_102_flags_var_0 ();
    ebx += eax;
    eax = inst_103_values_var_0 ();
    ebx += eax;
    eax = inst_103_flags_var_0 ();
    ebx += eax;
    eax = inst_104_values_var_0 ();
    ebx += eax;
    eax = inst_104_flags_var_0 ();
    ebx += eax;
    eax = inst_105_values_var_0 ();
    ebx += eax;
    eax = inst_105_flags_var_0 ();
    ebx += eax;
    eax = inst_106_values_var_0 ();
    ebx += eax;
    eax = inst_106_flags_var_0 ();
    ebx += eax;
    eax = inst_107_values_var_0 ();
    ebx += eax;
    eax = inst_107_flags_var_0 ();
    ebx += eax;
    eax = inst_108_values_var_0 ();
    ebx += eax;
    eax = inst_108_flags_var_0 ();
    ebx += eax;
    eax = inst_109_values_var_0 ();
    ebx += eax;
    eax = inst_109_flags_var_0 ();
    ebx += eax;
    eax = inst_110_values_var_0 ();
    ebx += eax;
    eax = inst_110_flags_var_0 ();
    ebx += eax;
    eax = inst_111_values_var_0 ();
    ebx += eax;
    eax = inst_111_flags_var_0 ();
    ebx += eax;
    eax = inst_112_values_var_0 ();
    ebx += eax;
    eax = inst_112_flags_var_0 ();
    ebx += eax;
    eax = inst_113_values_var_0 ();
    ebx += eax;
    eax = inst_113_flags_var_0 ();
    ebx += eax;
    eax = inst_114_values_var_0 ();
    ebx += eax;
    eax = inst_114_flags_var_0 ();
    ebx += eax;
    eax = inst_115_values_var_0 ();
    ebx += eax;
    eax = inst_115_flags_var_0 ();
    ebx += eax;
    eax = inst_116_values_var_0 ();
    ebx += eax;
    eax = inst_116_flags_var_0 ();
    ebx += eax;
    eax = inst_117_values_var_0 ();
    ebx += eax;
    eax = inst_117_flags_var_0 ();
    ebx += eax;
    eax = inst_118_values_var_0 ();
    ebx += eax;
    eax = inst_118_flags_var_0 ();
    ebx += eax;
    eax = inst_119_values_var_0 ();
    ebx += eax;
    eax = inst_119_flags_var_0 ();
    ebx += eax;
    eax = inst_120_values_var_0 ();
    ebx += eax;
    eax = inst_120_flags_var_0 ();
    ebx += eax;
    eax = inst_121_values_var_0 ();
    ebx += eax;
    eax = inst_121_flags_var_0 ();
    ebx += eax;
    eax = inst_122_values_var_0 ();
    ebx += eax;
    eax = inst_122_flags_var_0 ();
    ebx += eax;
    eax = inst_123_values_var_0 ();
    ebx += eax;
    eax = inst_123_flags_var_0 ();
    ebx += eax;
    eax = inst_124_values_var_0 ();
    ebx += eax;
    eax = inst_124_flags_var_0 ();
    ebx += eax;
    eax = inst_125_values_var_0 ();
    ebx += eax;
    eax = inst_125_flags_var_0 ();
    ebx += eax;
    eax = inst_126_values_var_0 ();
    ebx += eax;
    eax = inst_126_flags_var_0 ();
    ebx += eax;
    eax = inst_127_values_var_0 ();
    ebx += eax;
    eax = inst_127_flags_var_0 ();
    ebx += eax;
    eax = inst_128_values_var_0 ();
    ebx += eax;
    eax = inst_128_flags_var_0 ();
    ebx += eax;
    eax = inst_129_values_var_0 ();
    ebx += eax;
    eax = inst_129_flags_var_0 ();
    ebx += eax;
    eax = inst_130_values_var_0 ();
    ebx += eax;
    eax = inst_130_flags_var_0 ();
    ebx += eax;
    eax = inst_131_values_var_0 ();
    ebx += eax;
    eax = inst_131_flags_var_0 ();
    ebx += eax;
    eax = inst_132_values_var_0 ();
    ebx += eax;
    eax = inst_132_flags_var_0 ();
    ebx += eax;
    eax = inst_133_values_var_0 ();
    ebx += eax;
    eax = inst_133_flags_var_0 ();
    ebx += eax;
    eax = inst_134_values_var_0 ();
    ebx += eax;
    eax = inst_134_flags_var_0 ();
    ebx += eax;
    eax = inst_135_values_var_0 ();
    ebx += eax;
    eax = inst_135_flags_var_0 ();
    ebx += eax;
    eax = inst_136_values_var_0 ();
    ebx += eax;
    eax = inst_136_flags_var_0 ();
    ebx += eax;
    eax = inst_137_values_var_0 ();
    ebx += eax;
    eax = inst_137_flags_var_0 ();
    ebx += eax;
    eax = inst_138_values_var_0 ();
    ebx += eax;
    eax = inst_138_flags_var_0 ();
    ebx += eax;
    eax = inst_139_values_var_0 ();
    ebx += eax;
    eax = inst_139_flags_var_0 ();
    ebx += eax;
    eax = inst_140_values_var_0 ();
    ebx += eax;
    eax = inst_140_flags_var_0 ();
    ebx += eax;
    eax = inst_141_values_var_0 ();
    ebx += eax;
    eax = inst_141_flags_var_0 ();
    ebx += eax;
    eax = inst_142_values_var_0 ();
    ebx += eax;
    eax = inst_142_flags_var_0 ();
    ebx += eax;
    eax = inst_143_values_var_0 ();
    ebx += eax;
    eax = inst_143_flags_var_0 ();
    ebx += eax;
    eax = inst_144_values_var_0 ();
    ebx += eax;
    eax = inst_144_flags_var_0 ();
    ebx += eax;
    eax = inst_145_values_var_0 ();
    ebx += eax;
    eax = inst_145_flags_var_0 ();
    ebx += eax;
    eax = inst_146_values_var_0 ();
    ebx += eax;
    eax = inst_146_flags_var_0 ();
    ebx += eax;
    eax = inst_147_values_var_0 ();
    ebx += eax;
    eax = inst_147_flags_var_0 ();
    ebx += eax;
    eax = inst_148_values_var_0 ();
    ebx += eax;
    eax = inst_148_flags_var_0 ();
    ebx += eax;
    eax = inst_149_values_var_0 ();
    ebx += eax;
    eax = inst_149_flags_var_0 ();
    ebx += eax;
    eax = inst_150_values_var_0 ();
    ebx += eax;
    eax = inst_150_flags_var_0 ();
    ebx += eax;
    eax = inst_151_values_var_0 ();
    ebx += eax;
    eax = inst_151_flags_var_0 ();
    ebx += eax;
    eax = inst_152_values_var_0 ();
    ebx += eax;
    eax = inst_152_flags_var_0 ();
    ebx += eax;
    eax = inst_153_values_var_0 ();
    ebx += eax;
    eax = inst_153_flags_var_0 ();
    ebx += eax;
    eax = inst_154_values_var_0 ();
    ebx += eax;
    eax = inst_154_flags_var_0 ();
    ebx += eax;
    eax = inst_155_values_var_0 ();
    ebx += eax;
    eax = inst_155_flags_var_0 ();
    ebx += eax;
    eax = inst_156_values_var_0 ();
    ebx += eax;
    eax = inst_156_flags_var_0 ();
    ebx += eax;
    eax = inst_157_values_var_0 ();
    ebx += eax;
    eax = inst_157_flags_var_0 ();
    ebx += eax;
    eax = inst_158_values_var_0 ();
    ebx += eax;
    eax = inst_158_flags_var_0 ();
    ebx += eax;
    eax = inst_159_values_var_0 ();
    ebx += eax;
    eax = inst_159_flags_var_0 ();
    ebx += eax;
    eax = inst_160_values_var_0 ();
    ebx += eax;
    eax = inst_160_flags_var_0 ();
    ebx += eax;
    eax = inst_161_values_var_0 ();
    ebx += eax;
    eax = inst_161_flags_var_0 ();
    ebx += eax;
    eax = inst_162_values_var_0 ();
    ebx += eax;
    eax = inst_162_flags_var_0 ();
    ebx += eax;
    eax = inst_163_values_var_0 ();
    ebx += eax;
    eax = inst_163_flags_var_0 ();
    ebx += eax;
    eax = inst_164_values_var_0 ();
    ebx += eax;
    eax = inst_164_flags_var_0 ();
    ebx += eax;
    eax = inst_165_values_var_0 ();
    ebx += eax;
    eax = inst_165_flags_var_0 ();
    ebx += eax;
    eax = inst_166_values_var_0 ();
    ebx += eax;
    eax = inst_166_flags_var_0 ();
    ebx += eax;
    eax = inst_167_values_var_0 ();
    ebx += eax;
    eax = inst_167_flags_var_0 ();
    ebx += eax;
    eax = inst_168_values_var_0 ();
    ebx += eax;
    eax = inst_168_flags_var_0 ();
    ebx += eax;
    eax = inst_169_values_var_0 ();
    ebx += eax;
    eax = inst_169_flags_var_0 ();
    ebx += eax;
    eax = inst_170_values_var_0 ();
    ebx += eax;
    eax = inst_170_flags_var_0 ();
    ebx += eax;
    eax = inst_171_values_var_0 ();
    ebx += eax;
    eax = inst_171_flags_var_0 ();
    ebx += eax;
    eax = inst_172_values_var_0 ();
    ebx += eax;
    eax = inst_172_flags_var_0 ();
    ebx += eax;
    eax = inst_173_values_var_0 ();
    ebx += eax;
    eax = inst_173_flags_var_0 ();
    ebx += eax;
    eax = inst_174_values_var_0 ();
    ebx += eax;
    eax = inst_174_flags_var_0 ();
    ebx += eax;
    eax = inst_175_values_var_0 ();
    ebx += eax;
    eax = inst_175_flags_var_0 ();
    ebx += eax;
    eax = inst_176_values_var_0 ();
    ebx += eax;
    eax = inst_176_flags_var_0 ();
    ebx += eax;
    eax = inst_177_values_var_0 ();
    ebx += eax;
    eax = inst_177_flags_var_0 ();
    ebx += eax;
    eax = inst_178_values_var_0 ();
    ebx += eax;
    eax = inst_178_flags_var_0 ();
    ebx += eax;
    eax = inst_179_values_var_0 ();
    ebx += eax;
    eax = inst_179_flags_var_0 ();
    ebx += eax;
    eax = inst_180_values_var_0 ();
    ebx += eax;
    eax = inst_180_flags_var_0 ();
    ebx += eax;
    eax = inst_181_values_var_0 ();
    ebx += eax;
    eax = inst_181_flags_var_0 ();
    ebx += eax;
    eax = inst_182_values_var_0 ();
    ebx += eax;
    eax = inst_182_flags_var_0 ();
    ebx += eax;
    eax = inst_183_values_var_0 ();
    ebx += eax;
    eax = inst_183_flags_var_0 ();
    ebx += eax;
    eax = inst_184_values_var_0 ();
    ebx += eax;
    eax = inst_184_flags_var_0 ();
    ebx += eax;
    eax = inst_185_values_var_0 ();
    ebx += eax;
    eax = inst_185_flags_var_0 ();
    ebx += eax;
    eax = inst_186_values_var_0 ();
    ebx += eax;
    eax = inst_186_flags_var_0 ();
    ebx += eax;
    eax = inst_187_values_var_0 ();
    ebx += eax;
    eax = inst_187_flags_var_0 ();
    ebx += eax;
    eax = inst_188_values_var_0 ();
    ebx += eax;
    eax = inst_188_flags_var_0 ();
    ebx += eax;
    eax = inst_189_values_var_0 ();
    ebx += eax;
    eax = inst_189_flags_var_0 ();
    ebx += eax;
    eax = inst_190_values_var_0 ();
    ebx += eax;
    eax = inst_190_flags_var_0 ();
    ebx += eax;
    eax = inst_191_values_var_0 ();
    ebx += eax;
    eax = inst_191_flags_var_0 ();
    ebx += eax;
    eax = inst_192_values_var_0 ();
    ebx += eax;
    eax = inst_192_flags_var_0 ();
    ebx += eax;
    eax = inst_193_values_var_0 ();
    ebx += eax;
    eax = inst_193_flags_var_0 ();
    ebx += eax;
    eax = inst_194_values_var_0 ();
    ebx += eax;
    eax = inst_194_flags_var_0 ();
    ebx += eax;
    eax = inst_195_values_var_0 ();
    ebx += eax;
    eax = inst_195_flags_var_0 ();
    ebx += eax;
    eax = inst_196_values_var_0 ();
    ebx += eax;
    eax = inst_196_flags_var_0 ();
    ebx += eax;
    eax = inst_197_values_var_0 ();
    ebx += eax;
    eax = inst_197_flags_var_0 ();
    ebx += eax;
    eax = inst_198_values_var_0 ();
    ebx += eax;
    eax = inst_198_flags_var_0 ();
    ebx += eax;
    eax = inst_199_values_var_0 ();
    ebx += eax;
    eax = inst_199_flags_var_0 ();
    ebx += eax;
    eax = inst_200_values_var_0 ();
    ebx += eax;
    eax = inst_200_flags_var_0 ();
    ebx += eax;
    eax = inst_201_values_var_0 ();
    ebx += eax;
    eax = inst_201_flags_var_0 ();
    ebx += eax;
    eax = inst_202_values_var_0 ();
    ebx += eax;
    eax = inst_202_flags_var_0 ();
    ebx += eax;
    eax = inst_203_values_var_0 ();
    ebx += eax;
    eax = inst_203_flags_var_0 ();
    ebx += eax;
    eax = inst_204_values_var_0 ();
    ebx += eax;
    eax = inst_204_flags_var_0 ();
    ebx += eax;
    eax = inst_205_values_var_0 ();
    ebx += eax;
    eax = inst_205_flags_var_0 ();
    ebx += eax;
    eax = inst_206_values_var_0 ();
    ebx += eax;
    eax = inst_206_flags_var_0 ();
    ebx += eax;
    eax = inst_207_values_var_0 ();
    ebx += eax;
    eax = inst_207_flags_var_0 ();
    ebx += eax;
    eax = inst_208_values_var_0 ();
    ebx += eax;
    eax = inst_208_flags_var_0 ();
    ebx += eax;
    eax = inst_209_values_var_0 ();
    ebx += eax;
    eax = inst_209_flags_var_0 ();
    ebx += eax;
    eax = inst_210_values_var_0 ();
    ebx += eax;
    eax = inst_210_flags_var_0 ();
    ebx += eax;
    eax = inst_211_values_var_0 ();
    ebx += eax;
    eax = inst_211_flags_var_0 ();
    ebx += eax;
    eax = inst_212_values_var_0 ();
    ebx += eax;
    eax = inst_212_flags_var_0 ();
    ebx += eax;
    eax = inst_213_values_var_0 ();
    ebx += eax;
    eax = inst_213_flags_var_0 ();
    ebx += eax;
    eax = inst_214_values_var_0 ();
    ebx += eax;
    eax = inst_214_flags_var_0 ();
    ebx += eax;
    eax = inst_215_values_var_0 ();
    ebx += eax;
    eax = inst_215_flags_var_0 ();
    ebx += eax;
    eax = inst_216_values_var_0 ();
    ebx += eax;
    eax = inst_216_flags_var_0 ();
    ebx += eax;
    eax = inst_217_values_var_0 ();
    ebx += eax;
    eax = inst_217_flags_var_0 ();
    ebx += eax;
    eax = inst_218_values_var_0 ();
    ebx += eax;
    eax = inst_218_flags_var_0 ();
    ebx += eax;
    eax = inst_219_values_var_0 ();
    ebx += eax;
    eax = inst_219_flags_var_0 ();
    ebx += eax;
    eax = inst_220_values_var_0 ();
    ebx += eax;
    eax = inst_220_flags_var_0 ();
    ebx += eax;
    eax = inst_221_values_var_0 ();
    ebx += eax;
    eax = inst_221_flags_var_0 ();
    ebx += eax;
    eax = inst_222_values_var_0 ();
    ebx += eax;
    eax = inst_222_flags_var_0 ();
    ebx += eax;
    eax = inst_223_values_var_0 ();
    ebx += eax;
    eax = inst_223_flags_var_0 ();
    ebx += eax;
    eax = inst_224_values_var_0 ();
    ebx += eax;
    eax = inst_224_flags_var_0 ();
    ebx += eax;
    eax = inst_225_values_var_0 ();
    ebx += eax;
    eax = inst_225_flags_var_0 ();
    ebx += eax;
    eax = inst_226_values_var_0 ();
    ebx += eax;
    eax = inst_226_flags_var_0 ();
    ebx += eax;
    eax = inst_227_values_var_0 ();
    ebx += eax;
    eax = inst_227_flags_var_0 ();
    ebx += eax;
    eax = inst_228_values_var_0 ();
    ebx += eax;
    eax = inst_228_flags_var_0 ();
    ebx += eax;
    eax = inst_229_values_var_0 ();
    ebx += eax;
    eax = inst_229_flags_var_0 ();
    ebx += eax;
    eax = inst_230_values_var_0 ();
    ebx += eax;
    eax = inst_230_flags_var_0 ();
    ebx += eax;
    eax = inst_231_values_var_0 ();
    ebx += eax;
    eax = inst_231_flags_var_0 ();
    ebx += eax;
    eax = inst_232_values_var_0 ();
    ebx += eax;
    eax = inst_232_flags_var_0 ();
    ebx += eax;
    eax = inst_233_values_var_0 ();
    ebx += eax;
    eax = inst_233_flags_var_0 ();
    ebx += eax;
    eax = inst_234_values_var_0 ();
    ebx += eax;
    eax = inst_234_flags_var_0 ();
    ebx += eax;
    eax = inst_235_values_var_0 ();
    ebx += eax;
    eax = inst_235_flags_var_0 ();
    ebx += eax;
    eax = inst_236_values_var_0 ();
    ebx += eax;
    eax = inst_236_flags_var_0 ();
    ebx += eax;
    eax = inst_237_values_var_0 ();
    ebx += eax;
    eax = inst_237_flags_var_0 ();
    ebx += eax;
    eax = inst_238_values_var_0 ();
    ebx += eax;
    eax = inst_238_flags_var_0 ();
    ebx += eax;
    eax = inst_239_values_var_0 ();
    ebx += eax;
    eax = inst_239_flags_var_0 ();
    ebx += eax;
    eax = inst_240_values_var_0 ();
    ebx += eax;
    eax = inst_240_flags_var_0 ();
    ebx += eax;
    eax = inst_241_values_var_0 ();
    ebx += eax;
    eax = inst_241_flags_var_0 ();
    ebx += eax;
    eax = inst_242_values_var_0 ();
    ebx += eax;
    eax = inst_242_flags_var_0 ();
    ebx += eax;
    eax = inst_243_values_var_0 ();
    ebx += eax;
    eax = inst_243_flags_var_0 ();
    ebx += eax;
    eax = inst_244_values_var_0 ();
    ebx += eax;
    eax = inst_244_flags_var_0 ();
    ebx += eax;
    eax = inst_245_values_var_0 ();
    ebx += eax;
    eax = inst_245_flags_var_0 ();
    ebx += eax;
    eax = inst_246_values_var_0 ();
    ebx += eax;
    eax = inst_246_flags_var_0 ();
    ebx += eax;
    eax = inst_247_values_var_0 ();
    ebx += eax;
    eax = inst_247_flags_var_0 ();
    ebx += eax;
    eax = inst_248_values_var_0 ();
    ebx += eax;
    eax = inst_248_flags_var_0 ();
    ebx += eax;
    eax = inst_249_values_var_0 ();
    ebx += eax;
    eax = inst_249_flags_var_0 ();
    ebx += eax;
    eax = inst_250_values_var_0 ();
    ebx += eax;
    eax = inst_250_flags_var_0 ();
    ebx += eax;
    eax = inst_251_values_var_0 ();
    ebx += eax;
    eax = inst_251_flags_var_0 ();
    ebx += eax;
    eax = inst_252_values_var_0 ();
    ebx += eax;
    eax = inst_252_flags_var_0 ();
    ebx += eax;
    eax = inst_253_values_var_0 ();
    ebx += eax;
    eax = inst_253_flags_var_0 ();
    ebx += eax;
    eax = inst_254_values_var_0 ();
    ebx += eax;
    eax = inst_254_flags_var_0 ();
    ebx += eax;
    eax = inst_255_values_var_0 ();
    ebx += eax;
    eax = inst_255_flags_var_0 ();
    ebx += eax;
    eax = inst_256_values_var_0 ();
    ebx += eax;
    eax = inst_256_flags_var_0 ();
    ebx += eax;
    eax = inst_257_values_var_0 ();
    ebx += eax;
    eax = inst_257_flags_var_0 ();
    ebx += eax;
    eax = inst_258_values_var_0 ();
    ebx += eax;
    eax = inst_258_flags_var_0 ();
    ebx += eax;
    eax = inst_259_values_var_0 ();
    ebx += eax;
    eax = inst_259_flags_var_0 ();
    ebx += eax;
    eax = inst_260_values_var_0 ();
    ebx += eax;
    eax = inst_260_flags_var_0 ();
    ebx += eax;
    eax = inst_261_values_var_0 ();
    ebx += eax;
    eax = inst_261_flags_var_0 ();
    ebx += eax;
    eax = inst_262_values_var_0 ();
    ebx += eax;
    eax = inst_262_flags_var_0 ();
    ebx += eax;
    eax = inst_263_values_var_0 ();
    ebx += eax;
    eax = inst_263_flags_var_0 ();
    ebx += eax;
    eax = inst_264_values_var_0 ();
    ebx += eax;
    eax = inst_264_flags_var_0 ();
    ebx += eax;
    eax = inst_265_values_var_0 ();
    ebx += eax;
    eax = inst_265_flags_var_0 ();
    ebx += eax;
    eax = inst_266_values_var_0 ();
    ebx += eax;
    eax = inst_266_flags_var_0 ();
    ebx += eax;
    eax = inst_267_values_var_0 ();
    ebx += eax;
    eax = inst_267_flags_var_0 ();
    ebx += eax;
    eax = inst_268_values_var_0 ();
    ebx += eax;
    eax = inst_268_flags_var_0 ();
    ebx += eax;
    eax = inst_269_values_var_0 ();
    ebx += eax;
    eax = inst_269_flags_var_0 ();
    ebx += eax;
    eax = inst_270_values_var_0 ();
    ebx += eax;
    eax = inst_270_flags_var_0 ();
    ebx += eax;
    eax = inst_271_values_var_0 ();
    ebx += eax;
    eax = inst_271_flags_var_0 ();
    ebx += eax;
    eax = inst_272_values_var_0 ();
    ebx += eax;
    eax = inst_272_flags_var_0 ();
    ebx += eax;
    eax = inst_273_values_var_0 ();
    ebx += eax;
    eax = inst_273_flags_var_0 ();
    ebx += eax;
    eax = inst_274_values_var_0 ();
    ebx += eax;
    eax = inst_274_flags_var_0 ();
    ebx += eax;
    eax = inst_275_values_var_0 ();
    ebx += eax;
    eax = inst_275_flags_var_0 ();
    ebx += eax;
    eax = inst_276_values_var_0 ();
    ebx += eax;
    eax = inst_276_flags_var_0 ();
    ebx += eax;
    eax = inst_277_values_var_0 ();
    ebx += eax;
    eax = inst_277_flags_var_0 ();
    ebx += eax;
    eax = inst_278_values_var_0 ();
    ebx += eax;
    eax = inst_278_flags_var_0 ();
    ebx += eax;
    eax = inst_279_values_var_0 ();
    ebx += eax;
    eax = inst_279_flags_var_0 ();
    ebx += eax;
    eax = inst_280_values_var_0 ();
    ebx += eax;
    eax = inst_280_flags_var_0 ();
    ebx += eax;
    eax = inst_281_values_var_0 ();
    ebx += eax;
    eax = inst_281_flags_var_0 ();
    ebx += eax;
    eax = inst_282_values_var_0 ();
    ebx += eax;
    eax = inst_282_flags_var_0 ();
    ebx += eax;
    eax = inst_283_values_var_0 ();
    ebx += eax;
    eax = inst_283_flags_var_0 ();
    ebx += eax;
    eax = inst_284_values_var_0 ();
    ebx += eax;
    eax = inst_284_flags_var_0 ();
    ebx += eax;
    eax = inst_285_values_var_0 ();
    ebx += eax;
    eax = inst_285_flags_var_0 ();
    ebx += eax;
    eax = inst_286_values_var_0 ();
    ebx += eax;
    eax = inst_286_flags_var_0 ();
    ebx += eax;
    eax = inst_287_values_var_0 ();
    ebx += eax;
    eax = inst_287_flags_var_0 ();
    ebx += eax;
    eax = inst_288_values_var_0 ();
    ebx += eax;
    eax = inst_288_flags_var_0 ();
    ebx += eax;
    eax = inst_289_values_var_0 ();
    ebx += eax;
    eax = inst_289_flags_var_0 ();
    ebx += eax;
    eax = inst_290_values_var_0 ();
    ebx += eax;
    eax = inst_290_flags_var_0 ();
    ebx += eax;
    eax = inst_291_values_var_0 ();
    ebx += eax;
    eax = inst_291_flags_var_0 ();
    ebx += eax;
    eax = inst_292_values_var_0 ();
    ebx += eax;
    eax = inst_292_flags_var_0 ();
    ebx += eax;
    eax = inst_293_values_var_0 ();
    ebx += eax;
    eax = inst_293_flags_var_0 ();
    ebx += eax;
    eax = inst_294_values_var_0 ();
    ebx += eax;
    eax = inst_294_flags_var_0 ();
    ebx += eax;
    if (ebx == 0) {
        esp = ebp - 8;
        eax = 0;
        esp = ecx - 4;
        return eax;
    }
    return assert_fail ("sum==0", "source_base_and_packedbcd_inst__1_var__no_complex.c", 0x4a7, "main");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a1d6 */
#include <stdint.h>
 
int32_t inst_0_values_var_0 (void) {
    eax = 0x6c6e89c4;
    ebx = 0x1ea0875a;
    ecx = 0x2cd4d769;
    edx = 0xd5d35e89;
    esi = 0xc440e1a2;
    edi = 0x55b180d6;
    eax = -eax;
    __asm ("aaa");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb8410427;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a21a */
#include <stdint.h>
 
int32_t inst_0_flags_var_0 (void) {
    eax = 0xa74a51fc;
    ebx = 0x6d4fa4db;
    ecx = 0xdd8e69da;
    edx = 0x9caabe45;
    esi = 0x715712cd;
    edi = 0xde51f60c;
    eax = -eax;
    __asm ("aaa");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x11;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a2cd */
#include <stdint.h>
 
int32_t inst_1_flags_var_0 (void) {
    eax = 0x23095e78;
    ebx = 0x9372a12e;
    ecx = 0x3fb4897a;
    edx = 0xa827d845;
    esi = 0xbbc6bef9;
    edi = 0xb6b16256;
    eax = -eax;
    __asm ("aad 0x54");
    edi = 0;
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a42e */
#include <stdint.h>
 
int32_t inst_3_flags_var_0 (void) {
    eax = 0xfd144e90;
    ebx = 0xec2b64bc;
    ecx = 0xc9118f5d;
    edx = 0x3fe778af;
    esi = 0x8cb63388;
    edi = 0x39e5d90;
    eax = -eax;
    __asm ("aas");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a56a */
#include <stdint.h>
 
int32_t inst_5_values_var_0 (void) {
    eax = 0x97039d6a;
    ebx = 0xc0e668b6;
    ecx = 0xeb01a95a;
    edx = 0x379cb621;
    esi = 0x59163190;
    edi = 0x9a5d521b;
    eax = -eax;
    cl += ah;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd5baa757;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a5af */
#include <stdint.h>
 
int32_t inst_5_flags_var_0 (void) {
    eax = 0xfefa280;
    ebx = 0x389f032f;
    ecx = 0x6a1712d7;
    edx = 0xbf5d0b08;
    esi = 0xf7bf8f35;
    edi = 0x27fe8892;
    eax = -eax;
    ch += dh;
    eax = 1;
    if (ch < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ch < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a636 */
#include <stdint.h>
 
int32_t inst_6_values_var_0 (void) {
    eax = 0x72d97801;
    ebx = 0x130dc279;
    ecx = 0x209cfcfb;
    edx = 0xfa6f9630;
    esi = 0x8857f33d;
    edi = 0x7427469c;
    eax = -eax;
    si += 0xe816;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x31df4317;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804a67e */
#include <stdint.h>
 
int32_t inst_6_flags_var_0 (void) {
    eax = 0xe461f5b8;
    ebx = 0x76b60462;
    ecx = 0x9bfecb55;
    edx = 0xa671ad0e;
    esi = 0x8b84e173;
    edi = 0xb1b84abd;
    eax = -eax;
    bp += 0xfa1;
    eax = 1;
    if (bp < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bp < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804aa46 */
#include <stdint.h>
 
int32_t inst_11_values_var_0 (void) {
    eax = 0x3e8851ad;
    ebx = 0x7456b997;
    ecx = 0x2b731fd6;
    edx = 0xe88acb9e;
    esi = 0xb2b8dd29;
    edi = 0x5b657e8f;
    eax = -eax;
    __asm ("stc");
    cl += dl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x27e2e939;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804acb8 */
#include <stdint.h>
 
int32_t inst_14_values_var_0 (void) {
    eax = 0x61e1ef7f;
    ebx = 0x1e51a95c;
    ecx = 0x90372472;
    edx = 0xa6dcd773;
    esi = 0x3759f9c8;
    edi = 0x23daf4ac;
    eax = -eax;
    __asm ("stc");
    ecx += 0xf1e36a78;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x77640c36;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ad02 */
#include <stdint.h>
 
int32_t inst_14_flags_var_0 (void) {
    eax = 0x2bd3f405;
    ebx = 0x658173b7;
    ecx = 0x9cb8fcfb;
    edx = 0x572c3cd8;
    esi = 0x4785ed11;
    edi = 0x1662d725;
    eax = -eax;
    __asm ("stc");
    edx += 0x3248df0d;
    eax = 1;
    if (edx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ae5c */
#include <stdint.h>
 
int32_t inst_16_values_var_0 (void) {
    eax = 0x2845d1df;
    ebx = 0x1edd7196;
    ecx = 0x8613d1d3;
    edx = 0x937070f3;
    esi = 0xe5c14c73;
    edi = 0x139af23b;
    eax = -eax;
    __asm ("clc");
    ch += 0x53;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x490038c2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804aea3 */
#include <stdint.h>
 
int32_t inst_16_flags_var_0 (void) {
    eax = 0xdaeee442;
    ebx = 0xd1d5f34b;
    ecx = 0x9ef29d98;
    edx = 0x35599d82;
    esi = 0x5cc614fc;
    edi = 0xcfad8ad3;
    eax = -eax;
    __asm ("clc");
    ah += 0x25;
    eax = 1;
    if (ah < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ah < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x10;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804af2c */
#include <stdint.h>
 
int32_t inst_17_values_var_0 (void) {
    eax = 0xdacf4cc4;
    ebx = 0x46ce3dc3;
    ecx = 0xb21f7bcf;
    edx = 0xef6e5b92;
    esi = 0x12d5607f;
    edi = 0x7622733f;
    eax = -eax;
    __asm ("clc");
    cl += bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6714d15c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804af72 */
#include <stdint.h>
 
int32_t inst_17_flags_var_0 (void) {
    eax = 0xd6213ca3;
    ebx = 0x6465bb34;
    ecx = 0x9463b345;
    edx = 0x7e11512;
    esi = 0xf01b6292;
    edi = 0x8f6249be;
    eax = -eax;
    __asm ("clc");
    ch += dl;
    eax = 1;
    if (ch < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ch < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804affa */
#include <stdint.h>
 
int32_t inst_18_values_var_0 (void) {
    eax = 0x2f77eab7;
    ebx = 0x4f0bf1f6;
    ecx = 0x6a853c62;
    edx = 0x6678cee8;
    esi = 0xa5a93e3a;
    edi = 0xb44eb077;
    eax = -eax;
    __asm ("clc");
    cx += 0x71ca;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb1585764;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b0ce */
#include <stdint.h>
 
int32_t inst_19_values_var_0 (void) {
    eax = 0xa2cc766e;
    ebx = 0x57a8cd80;
    ecx = 0x2266cb89;
    edx = 0x3cebb35f;
    esi = 0x6b22c09c;
    edi = 0xe437c4f8;
    eax = -eax;
    __asm ("clc");
    ax += bp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb979e7ea;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b1e8 */
#include <stdint.h>
 
int32_t inst_20_flags_var_0 (void) {
    eax = 0x641e9579;
    ebx = 0x6e5ea1f;
    ecx = 0x36fd0b14;
    edx = 0x76518934;
    esi = 0x72237db4;
    edi = 0xf74b502e;
    eax = -eax;
    __asm ("clc");
    edx += 0x1fce7773;
    eax = 1;
    if (edx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xa;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b274 */
#include <stdint.h>
 
int32_t inst_21_values_var_0 (void) {
    eax = 0xc3f53336;
    ebx = 0x185568e8;
    ecx = 0x3e480fcb;
    edx = 0x240b9573;
    esi = 0xb1e5daeb;
    edi = 0xb788cb2;
    eax = -eax;
    __asm ("clc");
    ebx += ecx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2c46f7c1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b4dc */
#include <stdint.h>
 
int32_t inst_24_values_var_0 (void) {
    eax = 0xb8d42650;
    ebx = 0x424e7c4;
    ecx = 0xdc4a350f;
    edx = 0x86360111;
    esi = 0x960c8334;
    edi = 0x80015390;
    eax = -eax;
    bp += 0xd224;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2bfbef0f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b6c5 */
#include <stdint.h>
 
int32_t inst_26_flags_var_0 (void) {
    eax = 0x15c6aef5;
    ebx = 0xc03487f3;
    ecx = 0xf215f55e;
    edx = 0x6a7c238c;
    esi = 0xb9f0b12c;
    edi = 0xb26a9748;
    eax = -eax;
    ebx += 0xb02e4efe;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x13;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804b862 */
#include <stdint.h>
 
int32_t inst_28_flags_var_0 (void) {
    eax = 0x2ddde292;
    ebx = 0xc208015;
    ecx = 0xf166f485;
    edx = 0x61369d53;
    esi = 0xfe23eb02;
    edi = 0xf842ee86;
    eax = -eax;
    cl &= 0xf8;
    eax = 1;
    if (cl < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bb2a */
#include <stdint.h>
 
int32_t inst_32_values_var_0 (void) {
    eax = 0xcd7e7aa;
    ebx = 0x7ab62f26;
    ecx = 0x94a9cad5;
    edx = 0x1291c538;
    esi = 0x53fb5761;
    edi = 0xcb87b24b;
    eax = -eax;
    eax &= 0xd3c64006;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe5b6708e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bbf1 */
#include <stdint.h>
 
int32_t inst_33_values_var_0 (void) {
    eax = 0x8b4d92c1;
    ebx = 0xdcb8cf83;
    ecx = 0xc749e45;
    edx = 0x9781f492;
    esi = 0x1a698916;
    edi = 0x14d679d1;
    eax = -eax;
    esi &= esi;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf55cd789;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bd9b */
#include <stdint.h>
 
int32_t inst_35_flags_var_0 (void) {
    eax = 0x575b44cc;
    ebx = 0x9a80555;
    ecx = 0xc0bf08c;
    edx = 0xc5f16c34;
    esi = 0x647ea8f;
    edi = 0xa0413ae8;
    eax = -eax;
    __asm ("bsr edx, edx");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804be3d */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t inst_36_flags_var_0 (void) {
    eax = 0xa4ee8695;
    ebx = 0x4f11a9ac;
    ecx = 0xc80218d;
    edx = 0x3cff6e1f;
    esi = 0x309c7753;
    edi = 0xbdca2b4f;
    eax = -eax;
    esi = SWAP32 (esi);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804bff1 */
#include <stdint.h>
 
int32_t inst_39_values_var_0 (void) {
    eax = 0xa6380069;
    ebx = 0x4c9b4e59;
    ecx = 0x67f316ff;
    edx = 0x419acbb0;
    esi = 0x777d0771;
    edi = 0x49df498d;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfc742b97;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c14d */
#include <stdint.h>
 
int32_t inst_41_values_var_0 (void) {
    eax = 0x8659c993;
    ebx = 0xd7ca29a1;
    ecx = 0xfeab6ec5;
    edx = 0x3d501987;
    esi = 0x8353b279;
    edi = 0x516e7b81;
    eax = -eax;
    __asm ("btc dx, bx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x205fd5e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c4f4 */
#include <stdint.h>
 
int32_t inst_46_flags_var_0 (void) {
    eax = 0x1676bc12;
    ebx = 0x9caa4ba6;
    ecx = 0x2ae8e674;
    edx = 0x24fe962a;
    esi = 0x4e3957df;
    edi = 0x8d1e9822;
    eax = -eax;
    __asm ("btr ebx, eax");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c608 */
#include <stdint.h>
 
int32_t inst_48_values_var_0 (void) {
    eax = 0x6f0c883b;
    ebx = 0x29b448f3;
    ecx = 0xbb65b70f;
    edx = 0x67885eea;
    esi = 0xc01dfd3a;
    edi = 0xc4f9e8e8;
    eax = -eax;
    __asm ("btr ebx, 0x69");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6f85b9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c6b5 */
#include <stdint.h>
 
int32_t inst_49_values_var_0 (void) {
    eax = 0x58d7b685;
    ebx = 0x2222a002;
    ecx = 0x180471f;
    edx = 0x7461f5d7;
    esi = 0x60e6c9e8;
    edi = 0xddaea4b2;
    eax = -eax;
    __asm ("bts dx, si");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x80a240f1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c7a8 */
#include <stdint.h>
 
int32_t inst_50_flags_var_0 (void) {
    eax = 0xaa6c568e;
    ebx = 0x951a81b2;
    ecx = 0xada823d0;
    edx = 0x43a0665;
    esi = 0x18a14a98;
    edi = 0x6d55115a;
    eax = -eax;
    __asm ("bts edi, ebx");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c80d */
#include <stdint.h>
 
int32_t inst_51_values_var_0 (void) {
    eax = 0x7b8835e0;
    ebx = 0xb3345b7f;
    ecx = 0x954c8782;
    edx = 0xef2c4eb2;
    esi = 0xfc218e37;
    edi = 0x18d4de3c;
    eax = -eax;
    __asm ("bts bx, 0x8d");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x5adf0d88;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c8bc */
#include <stdint.h>
 
int32_t inst_52_values_var_0 (void) {
    eax = 0x328d562d;
    ebx = 0xccf0f439;
    ecx = 0x1f7bd455;
    edx = 0x8b080f50;
    esi = 0x379a62c4;
    edi = 0xffa6a8b6;
    eax = -eax;
    __asm ("bts ebp, 0xe1");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xab676d4e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804c903 */
#include <stdint.h>
 
int32_t inst_52_flags_var_0 (void) {
    eax = 0x7de8c947;
    ebx = 0x58810b89;
    ecx = 0x7b63c8da;
    edx = 0x81714926;
    esi = 0x6d2c49f1;
    edi = 0xe2908cdd;
    eax = -eax;
    __asm ("bts ecx, 0xae");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ca0a */
#include <stdint.h>
 
int32_t inst_54_values_var_0 (void) {
    eax = 0xb45b0d6d;
    ebx = 0xd426d858;
    ecx = 0xd5198035;
    edx = 0x2f705761;
    esi = 0x634db98a;
    edi = 0x96a1e053;
    eax = -eax;
    edx:eax = (int64_t) eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x146a1aa2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cbe9 */
#include <stdint.h>
 
int32_t inst_57_values_var_0 (void) {
    eax = 0x3a31dfb4;
    ebx = 0x90f025e8;
    ecx = 0x2cab694c;
    edx = 0x7bb7d8;
    esi = 0x1b3b7542;
    edi = 0x7193efa7;
    eax = -eax;
    __asm ("clc");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfe6eda13;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cc2d */
#include <stdint.h>
 
int32_t inst_57_flags_var_0 (void) {
    eax = 0x965d3f03;
    ebx = 0xd93fb383;
    ecx = 0xc3965f3a;
    edx = 0x7c31f94d;
    esi = 0x4afc03c;
    edi = 0x96c224b7;
    eax = -eax;
    __asm ("clc");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cd37 */
#include <stdint.h>
 
int32_t inst_59_values_var_0 (void) {
    eax = 0x6681a582;
    ebx = 0x8da907b2;
    ecx = 0x2365f131;
    edx = 0x87496378;
    esi = 0x6ee57e68;
    edi = 0xd2caf5db;
    eax = -eax;
    __asm ("cmovo ax, cx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8967d4c6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cd7e */
#include <stdint.h>
 
int32_t inst_59_flags_var_0 (void) {
    eax = 0x29f9117f;
    ebx = 0x410d9bf6;
    ecx = 0x1675f56a;
    edx = 0xd18d99b8;
    esi = 0x30dc9974;
    edi = 0x5c0cf7c5;
    eax = -eax;
    __asm ("cmovo si, si");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cec6 */
#include <stdint.h>
 
int32_t inst_61_flags_var_0 (void) {
    eax = 0xe28ab1fa;
    ebx = 0x586c324a;
    ecx = 0x336d8921;
    edx = 0xd483fd14;
    esi = 0x29f9c948;
    edi = 0xdcef5c33;
    eax = -eax;
    __asm ("cmovno si, bp");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804cf24 */
#include <stdint.h>
 
int32_t inst_62_values_var_0 (void) {
    eax = 0x457d45c6;
    ebx = 0xb30b75ef;
    ecx = 0x1c0cbb7e;
    edx = 0x19b27d88;
    esi = 0x45c42a1c;
    edi = 0xcbfa23c4;
    eax = -eax;
    __asm ("cmovno eax, ebx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xeeaa77b0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d10f */
#include <stdint.h>
 
int32_t inst_65_values_var_0 (void) {
    eax = 0x70b95dfb;
    ebx = 0xb9581590;
    ecx = 0x8e90d0a5;
    edx = 0xed3ce6fe;
    esi = 0xae58bd9a;
    edi = 0x281a517f;
    eax = -eax;
    if (? >= ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd7f60623;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d29e */
#include <stdint.h>
 
int32_t inst_67_flags_var_0 (void) {
    eax = 0x5d7d7a8d;
    ebx = 0x874fe396;
    ecx = 0xc8fe1cb4;
    edx = 0xc48b1bbd;
    esi = 0xf458984e;
    edi = 0x62b6eaf5;
    eax = -eax;
    if (? == ?) {
        si = bp;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d3e6 */
#include <stdint.h>
 
int32_t inst_69_flags_var_0 (void) {
    eax = 0x4777922b;
    ebx = 0x53abfa42;
    ecx = 0xcc90a54f;
    edx = 0xec1a013b;
    esi = 0x617635e7;
    edi = 0xfe9a8738;
    eax = -eax;
    if (? != ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d48a */
#include <stdint.h>
 
int32_t inst_70_flags_var_0 (void) {
    eax = 0xdc7d1869;
    ebx = 0xf84fa979;
    ecx = 0x859910a9;
    edx = 0x72962449;
    esi = 0x3cf1195e;
    edi = 0x40cc77cd;
    eax = -eax;
    if (? != ?) {
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d52e */
#include <stdint.h>
 
int32_t inst_71_flags_var_0 (void) {
    eax = 0x30c21e89;
    ebx = 0x33147f47;
    ecx = 0xb367b226;
    edx = 0x61f7d796;
    esi = 0x422143c9;
    edi = 0xdaad61b2;
    eax = -eax;
    if (? <= ?) {
        ax = di;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d62f */
#include <stdint.h>
 
int32_t inst_73_values_var_0 (void) {
    eax = 0xcac7ff40;
    ebx = 0xf4736473;
    ecx = 0x22e57026;
    edx = 0x5b1b2777;
    esi = 0x2860b02d;
    edi = 0xd2654507;
    eax = -eax;
    if (? > ?) {
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8f16216d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d71a */
#include <stdint.h>
 
int32_t inst_74_flags_var_0 (void) {
    eax = 0xc9ddee50;
    ebx = 0x83ee86d3;
    ecx = 0x855def25;
    edx = 0xb0c29fab;
    esi = 0x66cd3a3c;
    edi = 0xc6d1903b;
    eax = -eax;
    if (? > ?) {
        ebx = edx;
    }
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d777 */
#include <stdint.h>
 
int32_t inst_75_values_var_0 (void) {
    eax = 0x8d9999ab;
    ebx = 0xc3fa495d;
    ecx = 0x5d5cb8a9;
    edx = 0x35ff474a;
    esi = 0x7aad955b;
    edi = 0xd0722d38;
    eax = -eax;
    __asm ("cmovs si, cx");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x37134234;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d7be */
#include <stdint.h>
 
int32_t inst_75_flags_var_0 (void) {
    eax = 0x8e48e111;
    ebx = 0xe90378dc;
    ecx = 0x3e1d9088;
    edx = 0x26dc8a90;
    esi = 0x74fe758e;
    edi = 0xeeb29048;
    eax = -eax;
    __asm ("cmovs bx, si");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804d81c */
#include <stdint.h>
 
int32_t inst_76_values_var_0 (void) {
    eax = 0xab0f1ce;
    ebx = 0x480e172;
    ecx = 0x4ab772b9;
    edx = 0xa9cb0dd6;
    esi = 0xf2f8f397;
    edi = 0x1bc4afc0;
    eax = -eax;
    __asm ("cmovs ebx, esi");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xce16d096;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804da07 */
#include <stdint.h>
 
int32_t inst_79_values_var_0 (void) {
    eax = 0x5fab5f22;
    ebx = 0xb60a55a4;
    ecx = 0x46da1c8;
    edx = 0x58c2ac3c;
    esi = 0x1d84a5c2;
    edi = 0x2d8fef0a;
    eax = -eax;
    __asm ("cmovp di, di");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa9b08f92;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804dc3a */
#include <stdint.h>
 
int32_t inst_82_flags_var_0 (void) {
    eax = 0x73e268d2;
    ebx = 0x949f175f;
    ecx = 0x5084e794;
    edx = 0xd8889615;
    esi = 0xf30e3be3;
    edi = 0x4d167de9;
    eax = -eax;
    __asm ("cmovnp eax, edx");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804de84 */
#include <stdint.h>
 
int32_t inst_86_values_var_0 (void) {
    eax = 0xe5dd0a32;
    ebx = 0x73f7f843;
    ecx = 0xea62aeb2;
    edx = 0x59e96b43;
    esi = 0x2d9200ea;
    edi = 0xe8ed3543;
    eax = -eax;
    if (? >= ?) {
        ecx = edx;
    }
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbfeda2c9;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e1fd */
#include <stdint.h>
 
int32_t inst_91_flags_var_0 (void) {
    eax = 0xf0c424dd;
    ebx = 0xbd14aae2;
    ecx = 0x51af9d58;
    edx = 0x612b3558;
    esi = 0x95fd2323;
    edi = 0x1d31f0cd;
    eax = -eax;
    eax = 1;
    if (dh < 0x1a) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dh < 0x1a) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x14;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e2ca */
#include <stdint.h>
 
int32_t inst_92_flags_var_0 (void) {
    eax = 0x70dc5d77;
    ebx = 0x58198380;
    ecx = 0xc2d30acf;
    edx = 0x6fcecdb9;
    esi = 0xe51b2e2c;
    edi = 0x21595394;
    eax = -eax;
    eax = 1;
    if (dl < al) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dl < al) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e399 */
#include <stdint.h>
 
int32_t inst_93_flags_var_0 (void) {
    eax = 0xb3ff63bc;
    ebx = 0x4e9599c9;
    ecx = 0x4710cdce;
    edx = 0x384e7b16;
    esi = 0x9a7c0ae;
    edi = 0x536a1337;
    eax = -eax;
    eax = 1;
    if (bp < 0x11b0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bp < 0x11b0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e423 */
#include <stdint.h>
 
int32_t inst_94_values_var_0 (void) {
    eax = 0xb921d749;
    ebx = 0x4238bade;
    ecx = 0xef74590e;
    edx = 0xd2da603c;
    esi = 0xa73d6f0;
    edi = 0xdd489c3e;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xeff4bb2c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e4f1 */
#include <stdint.h>
 
int32_t inst_95_values_var_0 (void) {
    eax = 0x837a9f32;
    ebx = 0x9e2239ff;
    ecx = 0x2adb3469;
    edx = 0x5d177771;
    esi = 0xe10a9cd7;
    edi = 0x1c4d8c6c;
    eax = -eax;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x796367ef;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e53a */
#include <stdint.h>
 
int32_t inst_95_flags_var_0 (void) {
    eax = 0x702145bf;
    ebx = 0xd813206d;
    ecx = 0xa86ba499;
    edx = 0x7abcedf;
    esi = 0x617560b5;
    edi = 0x460cdaf7;
    eax = -eax;
    eax = 1;
    if (edi < 0x3105871d) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edi < 0x3105871d) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x10;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e691 */
#include <stdint.h>
 
int32_t inst_97_values_var_0 (void) {
    eax = 0x10803946;
    ebx = 0x3f39dd04;
    ecx = 0x148a4feb;
    edx = 0xc60e7c7;
    esi = 0x35bf34be;
    edi = 0x9346752b;
    eax = -eax;
    __asm ("cmpxchg bh, dl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x4dc89801;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804e941 */
#include <stdint.h>
 
int32_t inst_100_flags_var_0 (void) {
    eax = 0xb0f21e91;
    ebx = 0xc1dfcb60;
    ecx = 0xcbbd2c1a;
    edx = 0xf476eac7;
    esi = 0x36083dd0;
    edi = 0xd26cb84f;
    eax = -eax;
    __asm ("daa");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ea81 */
#include <stdint.h>
 
int32_t inst_102_values_var_0 (void) {
    eax = 0x7cb17ab7;
    ebx = 0xe32cf6d0;
    ecx = 0x6050b45d;
    edx = 0xe5d3378f;
    esi = 0x581e9486;
    edi = 0x6adf7928;
    eax = -eax;
    ch--;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb00b4121;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804eb45 */
#include <stdint.h>
 
int32_t inst_103_values_var_0 (void) {
    eax = 0x8a330b82;
    ebx = 0x77abd61e;
    ecx = 0xad606ce5;
    edx = 0x25cbda19;
    esi = 0x2ccf6bde;
    edi = 0x55cb1278;
    eax = -eax;
    cx--;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x22def61;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ec4d */
#include <stdint.h>
 
int32_t inst_104_flags_var_0 (void) {
    eax = 0xa78afbf9;
    ebx = 0x9626bbaf;
    ecx = 0x8d285686;
    edx = 0xf9887143;
    esi = 0x878c124a;
    edi = 0x2676ce94;
    eax = -eax;
    edx--;
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (edx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ed8f */
#include <stdint.h>
 
int32_t inst_106_values_var_0 (void) {
    eax = 0xc8fb3e8;
    ebx = 0x3d3ef26a;
    ecx = 0xa91f9109;
    edx = 0x34e0df8f;
    esi = 0xaf770e80;
    edi = 0xcb027533;
    eax = -eax;
    bx++;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x3b522fbb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ee53 */
#include <stdint.h>
 
int32_t inst_107_values_var_0 (void) {
    eax = 0x67682204;
    ebx = 0x142b98f5;
    ecx = 0xbc89d9d8;
    edx = 0x53140c41;
    esi = 0xd83ea354;
    edi = 0xf8f71f03;
    eax = -eax;
    ecx++;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x479130b0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804ef15 */
#include <stdint.h>
 
int32_t inst_108_values_var_0 (void) {
    eax = 0x97c65877;
    ebx = 0x6b4db27a;
    ecx = 0x5ef854c9;
    edx = 0xefe714b9;
    esi = 0x4fe133b3;
    edi = 0x46d255a3;
    eax = -eax;
    dl |= 0xc0;
    ax &= 0x3fff;
    al = ax / dl;
    ah = ax % dl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa06bdd55;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f014 */
#include <stdint.h>
 
int32_t inst_109_flags_var_0 (void) {
    eax = 0xe7d6917f;
    ebx = 0xb76291ba;
    ecx = 0x231ca269;
    edx = 0xb8f2fed5;
    esi = 0x55adef53;
    edi = 0xd4049d79;
    eax = -eax;
    si |= 0xc000;
    dx &= 0x3fff;
    ax = dx:ax / si;
    dx = dx:ax % si;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f07b */
#include <stdint.h>
 
int32_t inst_110_values_var_0 (void) {
    eax = 0x6500ced5;
    ebx = 0xdaae75ca;
    ecx = 0x7290876d;
    edx = 0xbaaab988;
    esi = 0x566fbc3b;
    edi = 0xaaa798ab;
    eax = -eax;
    ebp |= 0xc0000000;
    edx &= 0x3fffffff;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe718ab00;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f1e5 */
#include <stdint.h>
 
int32_t inst_112_values_var_0 (void) {
    eax = 0xf055de2a;
    ebx = 0xa98483a0;
    ecx = 0x7a546883;
    edx = 0x7350461;
    esi = 0x24719d36;
    edi = 0x1aa04081;
    eax = -eax;
    dx:ax = ax * dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xbc160661;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f349 */
#include <stdint.h>
 
int32_t inst_114_values_var_0 (void) {
    eax = 0x887c2aa8;
    ebx = 0xd5e751b3;
    ecx = 0xd83e57cd;
    edx = 0x3b615ac7;
    esi = 0x5e4c7c65;
    edi = 0xe9d8ce3e;
    eax = -eax;
    cx *= 0x5efd;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xeabdfcee;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f570 */
#include <stdint.h>
 
int32_t inst_117_values_var_0 (void) {
    eax = 0x7eb7d8a3;
    ebx = 0x2e51b756;
    ecx = 0x61548728;
    edx = 0x613e1b77;
    esi = 0xc24a227f;
    edi = 0x1c4e4185;
    eax = -eax;
    eax = esi * 0x23c8d2e4;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x100c844f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f629 */
#include <stdint.h>
 
int32_t inst_118_values_var_0 (void) {
    eax = 0x961bce36;
    ebx = 0x933c9c00;
    ecx = 0x4c237bf4;
    edx = 0xfc63af;
    esi = 0x18a72c22;
    edi = 0xd6b44b46;
    eax = -eax;
    ax = al * bl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb2d65d55;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f720 */
#include <stdint.h>
 
int32_t inst_119_flags_var_0 (void) {
    eax = 0x6f0433b0;
    ebx = 0x97479517;
    ecx = 0x7121de80;
    edx = 0x88b18763;
    esi = 0xc6ad83bb;
    edi = 0x5a94be65;
    eax = -eax;
    dx:ax = ax * ax;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804f83e */
#include <stdint.h>
 
int32_t inst_121_values_var_0 (void) {
    eax = 0x4b8bc6db;
    ebx = 0x1bab1029;
    ecx = 0x52f18f17;
    edx = 0xa5e5b0c2;
    esi = 0x8e2eb237;
    edi = 0x961688ef;
    eax = -eax;
    __asm ("lahf");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x342868d5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fcfa */
#include <stdint.h>
 
int32_t inst_128_flags_var_0 (void) {
    eax = 0x121d6460;
    ebx = 0x5a5b37b9;
    ecx = 0xf1dee101;
    edx = 0x232bcebb;
    esi = 0x6be2329c;
    edi = 0x327a93bf;
    eax = -eax;
    eax = 0x88766254;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fe9f */
#include <stdint.h>
 
int32_t inst_131_values_var_0 (void) {
    eax = 0x283054a4;
    ebx = 0x1e3c450c;
    ecx = 0xc6d42248;
    edx = 0xed0f97e1;
    esi = 0x9e82311d;
    edi = 0x2ed6e0b8;
    eax = -eax;
    ebp = (int32_t) al;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7748bcc2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x804fee5 */
#include <stdint.h>
 
int32_t inst_131_flags_var_0 (void) {
    eax = 0x88b2f835;
    ebx = 0x305a6bda;
    ecx = 0xb803db27;
    edx = 0xb46be0c4;
    esi = 0x8766f283;
    edi = 0x76cf9d8;
    eax = -eax;
    ecx = (int32_t) dl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80502e2 */
#include <stdint.h>
 
int32_t inst_137_flags_var_0 (void) {
    eax = 0xe285f54d;
    ebx = 0xb96e109;
    ecx = 0x171c9e62;
    edx = 0x939dee3d;
    esi = 0xe63f7c2f;
    edi = 0x9ed0476e;
    eax = -eax;
    bp = -bp;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x11;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80503af */
#include <stdint.h>
 
int32_t inst_138_flags_var_0 (void) {
    eax = 0xb2a822c1;
    ebx = 0x50f14866;
    ecx = 0x553e53d5;
    edx = 0x1a863746;
    esi = 0x175cffc7;
    edi = 0x8e130fcd;
    eax = -eax;
    eax = -eax;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x19;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80504d5 */
#include <stdint.h>
 
int32_t inst_140_values_var_0 (void) {
    eax = 0x8f458254;
    ebx = 0x662a2321;
    ecx = 0x203a83cc;
    edx = 0xf66dd2bf;
    esi = 0xd0397ee7;
    edi = 0x3ed1789f;
    eax = -eax;
    cl = ~cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x59f763d3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805065e */
#include <stdint.h>
 
int32_t inst_142_flags_var_0 (void) {
    eax = 0x23485ce7;
    ebx = 0x7a5b453d;
    ecx = 0x66c05d6;
    edx = 0x5b22b184;
    esi = 0x8bdc5ea1;
    edi = 0x3f2d65a6;
    eax = -eax;
    ecx = ~ecx;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050886 */
#include <stdint.h>
 
int32_t inst_145_flags_var_0 (void) {
    eax = 0x3f57d60f;
    ebx = 0xb7601b1e;
    ecx = 0xf7783e81;
    edx = 0x29bb8cf7;
    esi = 0xf5732845;
    edi = 0x42a13872;
    eax = -eax;
    ax |= 0x636a;
    eax = 1;
    if (ax < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80509c7 */
#include <stdint.h>
 
int32_t inst_147_values_var_0 (void) {
    eax = 0x36273ff1;
    ebx = 0x4aff410a;
    ecx = 0x8dcfacc;
    edx = 0xfb2f2532;
    esi = 0x27d72062;
    edi = 0x490456b6;
    eax = -eax;
    esi |= 0xb3c4d3ab;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9e6330d5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050a90 */
#include <stdint.h>
 
int32_t inst_148_values_var_0 (void) {
    eax = 0x7f417e1f;
    ebx = 0x49afce6e;
    ecx = 0xaea911d7;
    edx = 0xbecb3fc9;
    esi = 0x43594d56;
    edi = 0x48a5ad0a;
    eax = -eax;
    esi |= edx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xab369257;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050b96 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_149_flags_var_0 (void) {
    eax = 0xd214381b;
    ebx = 0xd7c0c1fa;
    ecx = 0x46536c9e;
    edx = 0x9ae9d53c;
    esi = 0x38bda6a4;
    edi = 0xd414121f;
    eax = -eax;
    al = rotate_left8 (al, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050cf8 */
#include <stdint.h>
 
int32_t inst_151_flags_var_0 (void) {
    eax = 0x72921aef;
    ebx = 0xf18d0237;
    ecx = 0xa09b1c0c;
    edx = 0xd84ad83a;
    esi = 0x9cce47fc;
    edi = 0xc3a46c5e;
    eax = -eax;
    bh >>= 1;
    eax = 1;
    if (bh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050da9 */
#include <stdint.h>
 
int32_t inst_152_flags_var_0 (void) {
    eax = 0x65a654f4;
    ebx = 0x7c13b6e6;
    ecx = 0xcfc759a5;
    edx = 0x523f9067;
    esi = 0x47a33d5c;
    edi = 0x7dd1e10c;
    eax = -eax;
    ch <<= 1;
    eax = 1;
    if (ch < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050e15 */
#include <stdint.h>
 
int32_t inst_153_values_var_0 (void) {
    eax = 0x8f484107;
    ebx = 0x211bf442;
    ecx = 0x189fdb3f;
    edx = 0xbd32e37f;
    esi = 0xdfbed733;
    edi = 0x4dcf3f71;
    eax = -eax;
    dl >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x950240c0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8050f79 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_155_values_var_0 (void) {
    eax = 0x9ba01906;
    ebx = 0x691b03cc;
    ecx = 0x69e9b0b6;
    edx = 0x88a12fd7;
    esi = 0xa3fa70b4;
    edi = 0xf5a94e2f;
    eax = -eax;
    ax = rotate_right16 (ax, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x21c186b8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80510df */
#include <stdint.h>
 
int32_t inst_157_values_var_0 (void) {
    eax = 0x8f7ab5af;
    ebx = 0x50acba7e;
    ecx = 0x4e08572e;
    edx = 0xa4d3f905;
    esi = 0x818a76d1;
    edi = 0xf8f862de;
    eax = -eax;
    cx <<= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf649b830;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80513a7 */
#include <stdint.h>
 
int32_t inst_161_values_var_0 (void) {
    eax = 0x72da3acb;
    ebx = 0x8a3addbc;
    ecx = 0x1c359236;
    edx = 0x49166445;
    esi = 0xe8ee4298;
    edi = 0xfb584292;
    eax = -eax;
    eax >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf6c003e0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80513ec */
#include <stdint.h>
 
int32_t inst_161_flags_var_0 (void) {
    eax = 0xd27397b1;
    ebx = 0xf10a7344;
    ecx = 0x41bd75cd;
    edx = 0xfba9c143;
    esi = 0x15261a01;
    edi = 0xba5692be;
    eax = -eax;
    ecx >>= 1;
    eax = 1;
    if (ecx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051509 */
#include <stdint.h>
 
int32_t inst_163_values_var_0 (void) {
    eax = 0xb84b1bad;
    ebx = 0x408c3f17;
    ecx = 0xc0a05623;
    edx = 0xc9184496;
    esi = 0xb6b49263;
    edi = 0xe3438277;
    eax = -eax;
    ebp >>= 1;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd12173ea;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805154e */
#include <stdint.h>
 
int32_t inst_163_flags_var_0 (void) {
    eax = 0x7b3df3d3;
    ebx = 0x5ede322f;
    ecx = 0x2213e84;
    edx = 0xeb4752f;
    esi = 0x77b4e831;
    edi = 0x3dbfde66;
    eax = -eax;
    edi >>= 1;
    eax = 1;
    if (edi < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051700 */
#include <stdint.h>
 
int32_t inst_166_values_var_0 (void) {
    eax = 0x17773336;
    ebx = 0xb31aa16;
    ecx = 0x8a52fade;
    edx = 0x8766feb5;
    esi = 0x4ad6f869;
    edi = 0xe7eec372;
    eax = -eax;
    bl >>= 0x4c;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xdcc9621;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805198a */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_170_values_var_0 (void) {
    eax = 0xb2f7b453;
    ebx = 0x3f7f4e99;
    ecx = 0x7e3d62d7;
    edx = 0x3245c68d;
    esi = 0x7e2e4a81;
    edi = 0x1b17146e;
    eax = -eax;
    cl = rotate_right8 (cl, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcd1f5191;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051acc */
#include <stdint.h>
 
int32_t inst_172_values_var_0 (void) {
    eax = 0x42e43e09;
    ebx = 0x6386de2f;
    ecx = 0x2bc8785b;
    edx = 0x49ea850a;
    esi = 0x5f0e67f7;
    edi = 0x94229ecb;
    eax = -eax;
    cl <<= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x292de7ee;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8051d9f */
#include <stdint.h>
 
int32_t inst_176_flags_var_0 (void) {
    eax = 0x3fc137e8;
    ebx = 0xc00ebbd4;
    ecx = 0x9c710f8b;
    edx = 0x9995e42;
    esi = 0x6ffc7505;
    edi = 0xa0f7a1ff;
    eax = -eax;
    dx >>= 0x40;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805208d */
#include <stdint.h>
 
int32_t inst_181_values_var_0 (void) {
    eax = 0x61f6c8af;
    ebx = 0x52ca36c4;
    ecx = 0x5fbe7076;
    edx = 0x16f61d0f;
    esi = 0xf81638c0;
    edi = 0x6e070d7b;
    eax = -eax;
    si >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x677b0859;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80520d3 */
#include <stdint.h>
 
int32_t inst_181_flags_var_0 (void) {
    eax = 0x7e01ff67;
    ebx = 0x5767cc32;
    ecx = 0xd6a20d0f;
    edx = 0x694f9fed;
    esi = 0x18c520f0;
    edi = 0xdfefb8d8;
    eax = -eax;
    di >>= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052176 */
#include <stdint.h>
 
int32_t inst_182_flags_var_0 (void) {
    eax = 0xb737a513;
    ebx = 0xf2e2e8a2;
    ecx = 0x2374c4f8;
    edx = 0x3aef9612;
    esi = 0x809eb96a;
    edi = 0xbf21c440;
    eax = -eax;
    si <<= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80521d3 */
#include <stdint.h>
 
int32_t inst_183_values_var_0 (void) {
    eax = 0x778bedc;
    ebx = 0xb800f0c;
    ecx = 0xfd2e4d92;
    edx = 0xb4ea7c11;
    esi = 0xf3989a07;
    edi = 0xa638ce69;
    eax = -eax;
    di >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xfe9bfcf2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805268b */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_190_flags_var_0 (void) {
    eax = 0x295cdfb4;
    ebx = 0x82418e08;
    ecx = 0x9868520b;
    edx = 0xac59278b;
    esi = 0xbb8d744;
    edi = 0xdb8fed23;
    eax = -eax;
    ebp = rotate_right32 (ebp, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80526e7 */
#include <stdint.h>
 
int32_t inst_191_values_var_0 (void) {
    eax = 0x135828e3;
    ebx = 0xa2d5a87a;
    ecx = 0x3b7844b2;
    edx = 0x36fd4526;
    esi = 0x69bc1f4c;
    edi = 0xd1437d4d;
    eax = -eax;
    ecx >>= cl;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xce785f74;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805286e */
#include <stdint.h>
 
int32_t inst_193_flags_var_0 (void) {
    eax = 0xffd182ef;
    ebx = 0x2bca3e2d;
    ecx = 0x66a6b930;
    edx = 0xd091fb34;
    esi = 0xefb2e20c;
    edi = 0xecc97a4f;
    eax = -eax;
    edx >>= cl;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805290f */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_194_flags_var_0 (void) {
    eax = 0x7ecccdc;
    ebx = 0x7c6d593e;
    ecx = 0x706b68ef;
    edx = 0x576d49a9;
    esi = 0xd186dac;
    edi = 0xdc01d55b;
    eax = -eax;
    ah = rotate_left8 (ah, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805297b */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_195_values_var_0 (void) {
    eax = 0xcc1bae01;
    ebx = 0x41399b0e;
    ecx = 0x61647df;
    edx = 0x2de89ec4;
    esi = 0xd41321d7;
    edi = 0x141b1406;
    eax = -eax;
    bh = rotate_right8 (bh, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x95a3a239;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052b92 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_198_values_var_0 (void) {
    eax = 0x1d87f09;
    ebx = 0x5d27d1fb;
    ecx = 0xece34c2;
    edx = 0x9efa41ec;
    esi = 0x143860a;
    edi = 0xcb51506b;
    eax = -eax;
    ecx = rotate_left32 (ecx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xd411ae46;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052cf4 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_200_values_var_0 (void) {
    eax = 0xa7aecdcd;
    ebx = 0xdf98e423;
    ecx = 0xc1d1d554;
    edx = 0xc5f5b29a;
    esi = 0x711c0af8;
    edi = 0x87bc3c87;
    eax = -eax;
    __asm ("stc");
    cl = rotate_left8 (cl, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x8cb312d2;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052e5a */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_202_values_var_0 (void) {
    eax = 0x9277f08f;
    ebx = 0x762dd70c;
    ecx = 0xeede65e5;
    edx = 0x868c0162;
    esi = 0x6eb3bbb7;
    edi = 0x7c734db6;
    eax = -eax;
    __asm ("stc");
    bp = rotate_left16 (bp, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe6e4360a;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8052f56 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_203_flags_var_0 (void) {
    eax = 0x7d736239;
    ebx = 0xc538009b;
    ecx = 0xdb3b8b95;
    edx = 0xa49af7c4;
    esi = 0x59b27e57;
    edi = 0x163245c0;
    eax = -eax;
    __asm ("stc");
    bx = rotate_right16 (bx, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 3;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80531dd */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_207_values_var_0 (void) {
    eax = 0x218ed587;
    ebx = 0x710a264;
    ecx = 0x93da5485;
    edx = 0x1563d098;
    esi = 0x46d64abc;
    edi = 0xfb08fffe;
    eax = -eax;
    __asm ("clc");
    ah = rotate_right8 (ah, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x58f95ed1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053290 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_208_values_var_0 (void) {
    eax = 0xbe2d1813;
    ebx = 0xf8ac2f11;
    ecx = 0x3ad4f4c6;
    edx = 0xed71b8a9;
    esi = 0x7ff7fe9a;
    edi = 0x2720e2f1;
    eax = -eax;
    __asm ("clc");
    cx = rotate_left16 (cx, 1);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x891df452;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80532d7 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_208_flags_var_0 (void) {
    eax = 0x6ad12b27;
    ebx = 0x6ced65cd;
    ecx = 0xa3b759b3;
    edx = 0x9ca0ba71;
    esi = 0x507dad8;
    edi = 0x2a3673dd;
    eax = -eax;
    __asm ("clc");
    ax = rotate_left16 (ax, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805338c */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_209_flags_var_0 (void) {
    eax = 0x3694ead7;
    ebx = 0xaa8b34f2;
    ecx = 0xdad3ea71;
    edx = 0x33e9efcd;
    esi = 0x622d35f9;
    edi = 0x897fc0e3;
    eax = -eax;
    __asm ("clc");
    si = rotate_right16 (si, 1);
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax--;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80535a6 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_212_flags_var_0 (void) {
    eax = 0x727de4b7;
    ebx = 0x2dfbd336;
    ecx = 0x50b8818e;
    edx = 0xe0260c47;
    esi = 0xefa66072;
    edi = 0x546204a8;
    eax = -eax;
    ch = rotate_left8 (ch, 0x1b);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805378c */
#include <stdint.h>
 
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_215_flags_var_0 (void) {
    eax = 0xf82b0071;
    ebx = 0xc6f0b755;
    ecx = 0xb05db140;
    edx = 0xbc634a91;
    esi = 0xf6363788;
    edi = 0x35eff458;
    eax = -eax;
    dh = rotate_right8 (dh, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053bbe */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_222_values_var_0 (void) {
    eax = 0x906dcc21;
    ebx = 0x701e9b5c;
    ecx = 0xcf24d9f1;
    edx = 0x13f92409;
    esi = 0xab82520e;
    edi = 0x5295fcbf;
    eax = -eax;
    ebp = rotate_left32 (ebp, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x507e9d46;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053c03 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t inst_222_flags_var_0 (void) {
    eax = 0x6460c2d2;
    ebx = 0x57884f5e;
    ecx = 0x79c06c53;
    edx = 0x86d17476;
    esi = 0x8757e83e;
    edi = 0xf5b3f98d;
    eax = -eax;
    edi = rotate_left32 (edi, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053c5f */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_223_values_var_0 (void) {
    eax = 0x941a4b5e;
    ebx = 0x53fd3701;
    ecx = 0x6c87aab9;
    edx = 0x478febc1;
    esi = 0x2fe890a5;
    edi = 0x404fbaec;
    eax = -eax;
    edx = rotate_right32 (edx, cl);
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc8ef6081;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053ca4 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t inst_223_flags_var_0 (void) {
    eax = 0x1a857af6;
    ebx = 0xaa8d85d;
    ecx = 0x2fd25c8e;
    edx = 0x919e5ab8;
    esi = 0x5db9ae38;
    edi = 0x38515160;
    eax = -eax;
    edx = rotate_right32 (edx, cl);
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053e90 */
#include <stdint.h>
 
int32_t inst_226_values_var_0 (void) {
    eax = 0x9b93997d;
    ebx = 0x18af5020;
    ecx = 0x1eda3109;
    edx = 0x9e6f6919;
    esi = 0x4d1127fd;
    edi = 0x5113b731;
    eax = -eax;
    bh -= ah;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x12074ee6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8053f5c */
#include <stdint.h>
 
int32_t inst_227_values_var_0 (void) {
    eax = 0x9586816f;
    ebx = 0x9ce51a42;
    ecx = 0x345742cd;
    edx = 0x897a15f4;
    esi = 0x4ecee302;
    edi = 0x2228009f;
    eax = -eax;
    dx -= 0x5e5c;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xdbc087c8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805402e */
#include <stdint.h>
 
int32_t inst_228_values_var_0 (void) {
    eax = 0xb9937d4a;
    ebx = 0x6ca86315;
    ecx = 0xf5f47f9b;
    edx = 0xa171d0fe;
    esi = 0xdc2cfb8;
    edi = 0x62974aef;
    eax = -eax;
    cx -= cx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xb3122196;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80541d0 */
#include <stdint.h>
 
int32_t inst_230_values_var_0 (void) {
    eax = 0xe91567df;
    ebx = 0x60c7318e;
    ecx = 0x97b92506;
    edx = 0x1bde5efa;
    esi = 0xb1bc59b0;
    edi = 0x40af1357;
    eax = -eax;
    eax -= ebp;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x1db4bab5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80543b1 */
#include <stdint.h>
 
int32_t inst_232_flags_var_0 (void) {
    eax = 0xb3dd5aff;
    ebx = 0x9e524e5b;
    ecx = 0x4b554699;
    edx = 0x54800cd4;
    esi = 0x735f25f2;
    edi = 0x562403fe;
    eax = -eax;
    __asm ("stc");
    bl -= dl;
    eax = 1;
    if (bl < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bl < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054554 */
#include <stdint.h>
 
int32_t inst_234_flags_var_0 (void) {
    eax = 0xe849d9b6;
    ebx = 0xfa937018;
    ecx = 0x8d48c43;
    edx = 0x889729f9;
    esi = 0x714b0e05;
    edi = 0x5ffd067f;
    eax = -eax;
    __asm ("stc");
    bp -= dx;
    eax = 1;
    if (bp < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bp < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054627 */
#include <stdint.h>
 
int32_t inst_235_flags_var_0 (void) {
    eax = 0xd58e79ed;
    ebx = 0x9706dee9;
    ecx = 0xd39b3404;
    edx = 0xfe110ddd;
    esi = 0xc7430607;
    edi = 0x69fa2058;
    eax = -eax;
    __asm ("stc");
    ecx -= 0xb1c97792;
    eax = 1;
    if (ecx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ecx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80547c8 */
#include <stdint.h>
 
int32_t inst_237_flags_var_0 (void) {
    eax = 0x9f33e992;
    ebx = 0x72a92f07;
    ecx = 0xf9e7cac0;
    edx = 0x687a5152;
    esi = 0x6babcc14;
    edi = 0x24315dd5;
    eax = -eax;
    __asm ("clc");
    dh -= 0xe2;
    eax = 1;
    if (dh < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dh < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x15;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054968 */
#include <stdint.h>
 
int32_t inst_239_flags_var_0 (void) {
    eax = 0xe484e8dd;
    ebx = 0x94c4695;
    ecx = 0x8fa1f7bc;
    edx = 0x7530e170;
    esi = 0x974ec42b;
    edi = 0xf4abc44d;
    eax = -eax;
    __asm ("clc");
    bp -= 0x5c02;
    eax = 1;
    if (bp < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (bp < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054ac3 */
#include <stdint.h>
 
int32_t inst_241_values_var_0 (void) {
    eax = 0x8cc3dfe2;
    ebx = 0x3ef09f02;
    ecx = 0xa0ee4088;
    edx = 0x69479f43;
    esi = 0xb772fa1b;
    edi = 0xa51c7a56;
    eax = -eax;
    __asm ("clc");
    edi -= 0x8a050950;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x32450dda;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054bdf */
#include <stdint.h>
 
int32_t inst_242_flags_var_0 (void) {
    eax = 0x70e8af71;
    ebx = 0xc40901bf;
    ecx = 0xa74af322;
    edx = 0x1aee2a63;
    esi = 0x4d221b8c;
    edi = 0xebedaafc;
    eax = -eax;
    __asm ("clc");
    ebx -= ebp;
    eax = 1;
    if (ebx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (ebx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054c67 */
#include <stdint.h>
 
int32_t inst_243_values_var_0 (void) {
    eax = 0xe3d4cba0;
    ebx = 0x737310d7;
    ecx = 0x5805fc18;
    edx = 0xd9535ead;
    esi = 0x5b1e3cdb;
    edi = 0xa8934cab;
    eax = -eax;
    __asm ("seto bl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xc1014aa6;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054dad */
#include <stdint.h>
 
int32_t inst_245_values_var_0 (void) {
    eax = 0xec286470;
    ebx = 0x45427123;
    ecx = 0x787918c2;
    edx = 0x96c2f2b3;
    esi = 0x9534a933;
    edi = 0x9347c325;
    eax = -eax;
    bl = (? < ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x939a35e1;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8054e96 */
#include <stdint.h>
 
int32_t inst_246_flags_var_0 (void) {
    eax = 0x914e379c;
    ebx = 0xbd5d6cd3;
    ecx = 0x522a2d91;
    edx = 0xd16b1314;
    esi = 0x59789db0;
    edi = 0x18c1f57c;
    eax = -eax;
    ah = (? >= ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80550dc */
#include <stdint.h>
 
int32_t inst_250_values_var_0 (void) {
    eax = 0xf9621793;
    ebx = 0x45f94e67;
    ecx = 0xb13eb13c;
    edx = 0xd4f5e7ee;
    esi = 0xb1e45416;
    edi = 0x99d4658;
    eax = -eax;
    ch = (? > ?) ? 1 : 0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7521c51d;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805517f */
#include <stdint.h>
 
int32_t inst_251_values_var_0 (void) {
    eax = 0x9b2e2de3;
    ebx = 0x619f2a13;
    ecx = 0x3dedc887;
    edx = 0xda948d1b;
    esi = 0x4aede6b1;
    edi = 0x8e8d36c7;
    eax = -eax;
    __asm ("sets al");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xa63417b5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055368 */
#include <stdint.h>
 
int32_t inst_254_values_var_0 (void) {
    eax = 0x504e13f4;
    ebx = 0xa807b9c1;
    ecx = 0x710e8b09;
    edx = 0x92f6b2cf;
    esi = 0x6890d12;
    edi = 0x206a4842;
    eax = -eax;
    __asm ("setnp dl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x2a6d8565;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80553ae */
#include <stdint.h>
 
int32_t inst_254_flags_var_0 (void) {
    eax = 0x61193dc7;
    ebx = 0xac91eb84;
    ecx = 0x207d8e4a;
    edx = 0x9e7c8b0f;
    esi = 0x6887488f;
    edi = 0xa442144;
    eax = -eax;
    __asm ("setnp bl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055597 */
#include <stdint.h>
 
int32_t inst_257_flags_var_0 (void) {
    eax = 0x9d36654c;
    ebx = 0x21f0ef62;
    ecx = 0x9b39db9c;
    edx = 0x521904a8;
    esi = 0xbc649f53;
    edi = 0xcdfd10c1;
    eax = -eax;
    cl = (? <= ?) ? 1 : 0;
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055931 */
#include <stdint.h>
 
int32_t inst_262_flags_var_0 (void) {
    eax = 0xefc28435;
    ebx = 0xdb6c6088;
    ecx = 0x1521f63e;
    edx = 0x2b712c4f;
    esi = 0x47df8228;
    edi = 0x75de0d7f;
    eax = -eax;
    __asm ("shrd edi, eax, 1");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xb;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055b01 */
#include <stdint.h>
 
int32_t inst_265_values_var_0 (void) {
    eax = 0x65b10fec;
    ebx = 0x51f1b90c;
    ecx = 0x759263f9;
    edx = 0x7de020af;
    esi = 0xdad2d0f2;
    edi = 0x12823547;
    eax = -eax;
    __asm ("shld edi, ebx, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x7b6338b5;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055b47 */
#include <stdint.h>
 
int32_t inst_265_flags_var_0 (void) {
    eax = 0xf6fb347b;
    ebx = 0xc855f285;
    ecx = 0x88bf889;
    edx = 0x885c066d;
    esi = 0xa71d7a0;
    edi = 0x99347419;
    eax = -eax;
    __asm ("shld ecx, ebp, cl");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055ba4 */
#include <stdint.h>
 
int32_t inst_266_values_var_0 (void) {
    eax = 0x7e71831a;
    ebx = 0x1ccaac62;
    ecx = 0xdec4bbe8;
    edx = 0xcc4f31d6;
    esi = 0xe57308d2;
    edi = 0x55b2820f;
    eax = -eax;
    __asm ("shld eax, ebx, 0xfc");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf8bd12fd;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055beb */
#include <stdint.h>
 
int32_t inst_266_flags_var_0 (void) {
    eax = 0xc4b3bf61;
    ebx = 0xe3c8308c;
    ecx = 0x795af1ef;
    edx = 0xa697a011;
    esi = 0x988f039b;
    edi = 0x806b505f;
    eax = -eax;
    __asm ("shld edi, edi, 0xb7");
    edi = 0;
    esi = 0;
    edx = 0;
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8055d9b */
#include <stdint.h>
 
int32_t inst_269_values_var_0 (void) {
    eax = 0xdf905323;
    ebx = 0xa70aaaf5;
    ecx = 0x1d67f2b4;
    edx = 0xaccd0d89;
    esi = 0x98aec89d;
    edi = 0xe74f0d8a;
    eax = -eax;
    __asm ("shrd ecx, edx, cl");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xf68a1d6e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80560c5 */
#include <stdint.h>
 
int32_t inst_273_flags_var_0 (void) {
    eax = 0x3f2e15;
    ebx = 0x358b31d4;
    ecx = 0x9fcf2e70;
    edx = 0x43e56a7c;
    esi = 0xc151e2a8;
    edi = 0x5cf4ab0f;
    eax = -eax;
    dx -= 0xba3d;
    eax = 1;
    if (dx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (dx < 0) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1f;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805614f */
#include <stdint.h>
 
int32_t inst_274_values_var_0 (void) {
    eax = 0x9ea91c57;
    ebx = 0x3f19cffe;
    ecx = 0x4f2767d7;
    edx = 0xa8718281;
    esi = 0x1df269cc;
    edi = 0x9e2acb5e;
    eax = -eax;
    cx -= dx;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x635e3ad0;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805621d */
#include <stdint.h>
 
int32_t inst_275_values_var_0 (void) {
    eax = 0x14bcef32;
    ebx = 0x59cd15de;
    ecx = 0x4266780c;
    edx = 0xe6e15d6e;
    esi = 0xf2b94fc;
    edi = 0x2b6c4583;
    eax = -eax;
    eax -= 0x5986e10e;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x93baf96b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056402 */
#include <stdint.h>
 
int32_t inst_277_flags_var_0 (void) {
    eax = 0x734f6629;
    ebx = 0x66fb64a1;
    ecx = 0x99cecee9;
    edx = 0xc62ea96a;
    esi = 0xc37bdef6;
    edi = 0xfa9a297;
    eax = -eax;
    eax = 1;
    if ((ah & 0xa9) < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 8;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056588 */
#include <stdint.h>
 
int32_t inst_279_flags_var_0 (void) {
    eax = 0x44f4b297;
    ebx = 0xbae4363c;
    ecx = 0xd582a201;
    edx = 0x40b86298;
    esi = 0x5be81f59;
    edi = 0x734cc7ba;
    eax = -eax;
    eax = 1;
    if ((di & 0x3403) < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x805664d */
#include <stdint.h>
 
int32_t inst_280_flags_var_0 (void) {
    eax = 0xc67816ae;
    ebx = 0x642748b8;
    ecx = 0x4cb3a9c0;
    edx = 0xd01efca6;
    esi = 0xf239a8e7;
    edi = 0x1a5f5cf2;
    eax = -eax;
    eax = 1;
    if (dx < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056713 */
#include <stdint.h>
 
int32_t inst_281_flags_var_0 (void) {
    eax = 0x847ebf12;
    ebx = 0x5257cdb5;
    ecx = 0xd5eceb57;
    edx = 0x5da209ba;
    esi = 0xa8c593a9;
    edi = 0x864b2daf;
    eax = -eax;
    eax = 1;
    if ((ebx & 0xc701f467) < 0) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056922 */
#include <stdint.h>
 
int32_t inst_284_values_var_0 (void) {
    eax = 0xb5c72883;
    ebx = 0xcd6ab947;
    ecx = 0x15fe6911;
    edx = 0xe5533ae2;
    esi = 0xded443bc;
    edi = 0x5bf1b829;
    eax = -eax;
    __asm ("xadd si, ax");
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xe9e9ec3c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056969 */
#include <stdint.h>
 
int32_t inst_284_flags_var_0 (void) {
    eax = 0x7863de2e;
    ebx = 0x475f9fbd;
    ecx = 0xefda645c;
    edx = 0xb3143fbc;
    esi = 0x8ebd6032;
    edi = 0xe846ed9;
    eax = -eax;
    __asm ("xadd di, cx");
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    al = 0;
    __asm ("aaa");
    eax = 0x10;
    if (? < ?) {
        ecx = eax;
    }
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0x1e;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056c02 */
#include <stdint.h>
 
int32_t inst_288_values_var_0 (void) {
    eax = 0xb9816dc4;
    ebx = 0xe4641742;
    ecx = 0xc2e8ce05;
    edx = 0x85fd169;
    esi = 0x5ac732e5;
    edi = 0x41bf9174;
    eax = -eax;
    tmp_0 = ebp;
    ebp = esi;
    esi = tmp_0;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x6e002c8b;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056ca3 */
#include <stdint.h>
 
int32_t inst_289_values_var_0 (void) {
    eax = 0xd7081977;
    ebx = 0xe98cdc7a;
    ecx = 0x4f95d171;
    edx = 0x5b683e3b;
    esi = 0xe4af5096;
    edi = 0x7f0a6259;
    eax = -eax;
    bh ^= 0xa4;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0x9db05639;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056ce9 */
#include <stdint.h>
 
int32_t inst_289_flags_var_0 (void) {
    eax = 0xd39ed7cd;
    ebx = 0x14ffc371;
    ecx = 0x65249b7b;
    edx = 0x743a8c31;
    esi = 0xa9841538;
    edi = 0x399d8b31;
    eax = -eax;
    al ^= 0x39;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 4;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056e26 */
#include <stdint.h>
 
int32_t inst_291_values_var_0 (void) {
    eax = 0xd2cd6537;
    ebx = 0x939c1d95;
    ecx = 0xd7fcb255;
    edx = 0x79b0879e;
    esi = 0x55322c29;
    edi = 0xef60f357;
    eax = -eax;
    cx ^= 0x9a4a;
    eax += ebx;
    eax += ecx;
    eax += edx;
    eax += ebp;
    eax += esi;
    eax += edi;
    eax -= 0xcb21873c;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8056ff9 */
#include <stdint.h>
 
int32_t inst_293_flags_var_0 (void) {
    eax = 0xa2519fe4;
    ebx = 0xd56bef88;
    ecx = 0xab263aee;
    edx = 0x5fe23ffd;
    esi = 0xbd9e1978;
    edi = 0xa6fd25fc;
    eax = -eax;
    ebp ^= 0x4fca601d;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x80570be */
#include <stdint.h>
 
int32_t inst_294_flags_var_0 (void) {
    eax = 0xbbd8b48d;
    ebx = 0x66eed27b;
    ecx = 0x5f0677f3;
    edx = 0xbba55135;
    esi = 0x7a38d77a;
    edi = 0x3efe9fb4;
    eax = -eax;
    ebx ^= edx;
    eax = 1;
    if (? < ?) {
    }
    edi = 0;
    eax = 2;
    __asm ("cmovo edi, eax");
    esi = 0;
    eax = 4;
    __asm ("cmovp esi, eax");
    edx = 0;
    eax = 8;
    __asm ("cmovs edx, eax");
    ecx = 0;
    eax = 0;
    eax += ebp;
    eax += edi;
    eax += esi;
    eax += edx;
    eax += ecx;
    eax -= 0xc;
    edi = gs;
    esi = gs;
    ebx = gs;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/stress_int_ia32/ia32_elf_base_and_packedbcd_inst__1_var__no_complex/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x10ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
