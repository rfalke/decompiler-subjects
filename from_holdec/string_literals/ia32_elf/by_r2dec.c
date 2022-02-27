/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80490a2 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80483f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80490e0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804c02f;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8049110 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8049150 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8049170 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8049110)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8049200 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80490d0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8049204 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x2df3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80491a0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2e57;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    _init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8048420 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_8h;
    /* [14] -r-x section size 3554 named .text */
    ecx = esp + 4;
    ebx = *((ecx + 4));
    eax = strchr (*(ebx), 0x27);
    printf ("with single ' quote %p\n");
    eax = strchr (*(ebx), 0x22);
    printf ("with double \" quote %p\n");
    eax = fopen ("with-null-byte", 0x8049254);
    ebx = eax;
    fwrite ("with null byte ", 0x11, 1, eax);
    fwrite ("with null byte ", 1, 0x11, ebx);
    fclose (ebx);
    puts ("hex=0x01 dec=1 char=");
    puts ("hex=0x02 dec=2 char=");
    puts ("hex=0x03 dec=3 char=");
    puts ("hex=0x04 dec=4 char=");
    puts ("hex=0x05 dec=5 char=");
    puts ("hex=0x06 dec=6 char=");
    puts ("hex=0x07 dec=7 char=\aFINI");
    puts ("hex=0x08 dec=8 char=\bFINI");
    puts ("hex=0x09 dec=9 char=\tFINI");
    puts ("hex=0x0a dec=10 char=\nFINI");
    puts ("hex=0x0b dec=11 char=\vFINI");
    puts ("hex=0x0c dec=12 char=\fFINI");
    puts ("hex=0x0d dec=13 char=\rFINI");
    puts ("hex=0x0e dec=14 char=");
    puts ("hex=0x0f dec=15 char=");
    puts ("hex=0x10 dec=16 char=");
    puts ("hex=0x11 dec=17 char=");
    puts ("hex=0x12 dec=18 char=");
    puts ("hex=0x13 dec=19 char=");
    puts ("hex=0x14 dec=20 char=");
    puts ("hex=0x15 dec=21 char=");
    puts ("hex=0x16 dec=22 char=");
    puts ("hex=0x17 dec=23 char=");
    puts ("hex=0x18 dec=24 char=");
    puts ("hex=0x19 dec=25 char=");
    puts ("hex=0x1a dec=26 char=");
    puts ("hex=0x1b dec=27 char=\eFINI");
    puts ("hex=0x1c dec=28 char=");
    puts ("hex=0x1d dec=29 char=");
    puts ("hex=0x1e dec=30 char=");
    puts ("hex=0x1f dec=31 char=");
    puts ("hex=0x20 dec=32 char= FINI");
    puts ("hex=0x21 dec=33 char=!FINI");
    puts ("hex=0x22 dec=34 char=\"FINI");
    puts ("hex=0x23 dec=35 char=#FINI");
    puts ("hex=0x24 dec=36 char=$FINI");
    puts ("hex=0x25 dec=37 char=%FINI");
    puts ("hex=0x26 dec=38 char=&FINI");
    puts ("hex=0x27 dec=39 char='FINI");
    puts ("hex=0x28 dec=40 char=(FINI");
    puts ("hex=0x29 dec=41 char=)FINI");
    puts ("hex=0x2a dec=42 char=*FINI");
    puts ("hex=0x2b dec=43 char=+FINI");
    puts ("hex=0x2c dec=44 char=,FINI");
    puts ("hex=0x2d dec=45 char=-FINI");
    puts ("hex=0x2e dec=46 char=.FINI");
    puts ("hex=0x2f dec=47 char=/FINI");
    puts ("hex=0x30 dec=48 char=0FINI");
    puts ("hex=0x31 dec=49 char=1FINI");
    puts ("hex=0x32 dec=50 char=2FINI");
    puts ("hex=0x33 dec=51 char=3FINI");
    puts ("hex=0x34 dec=52 char=4FINI");
    puts ("hex=0x35 dec=53 char=5FINI");
    puts ("hex=0x36 dec=54 char=6FINI");
    puts ("hex=0x37 dec=55 char=7FINI");
    puts ("hex=0x38 dec=56 char=8FINI");
    puts ("hex=0x39 dec=57 char=9FINI");
    puts ("hex=0x3a dec=58 char=:FINI");
    puts ("hex=0x3b dec=59 char=;FINI");
    puts ("hex=0x3c dec=60 char=<FINI");
    puts ("hex=0x3d dec=61 char==FINI");
    puts ("hex=0x3e dec=62 char=>FINI");
    puts ("hex=0x3f dec=63 char=?FINI");
    puts ("hex=0x40 dec=64 char=@FINI");
    puts ("hex=0x41 dec=65 char=AFINI");
    puts ("hex=0x42 dec=66 char=BFINI");
    puts ("hex=0x43 dec=67 char=CFINI");
    puts ("hex=0x44 dec=68 char=DFINI");
    puts ("hex=0x45 dec=69 char=EFINI");
    puts ("hex=0x46 dec=70 char=FFINI");
    puts ("hex=0x47 dec=71 char=GFINI");
    puts ("hex=0x48 dec=72 char=HFINI");
    puts ("hex=0x49 dec=73 char=IFINI");
    puts ("hex=0x4a dec=74 char=JFINI");
    puts ("hex=0x4b dec=75 char=KFINI");
    puts ("hex=0x4c dec=76 char=LFINI");
    puts ("hex=0x4d dec=77 char=MFINI");
    puts ("hex=0x4e dec=78 char=NFINI");
    puts ("hex=0x4f dec=79 char=OFINI");
    puts ("hex=0x50 dec=80 char=PFINI");
    puts ("hex=0x51 dec=81 char=QFINI");
    puts ("hex=0x52 dec=82 char=RFINI");
    puts ("hex=0x53 dec=83 char=SFINI");
    puts ("hex=0x54 dec=84 char=TFINI");
    puts ("hex=0x55 dec=85 char=UFINI");
    puts ("hex=0x56 dec=86 char=VFINI");
    puts ("hex=0x57 dec=87 char=WFINI");
    puts ("hex=0x58 dec=88 char=XFINI");
    puts ("hex=0x59 dec=89 char=YFINI");
    puts ("hex=0x5a dec=90 char=ZFINI");
    puts ("hex=0x5b dec=91 char=[FINI");
    puts ("hex=0x5c dec=92 char=\\FINI");
    puts ("hex=0x5d dec=93 char=]FINI");
    puts ("hex=0x5e dec=94 char=^FINI");
    puts ("hex=0x5f dec=95 char=_FINI");
    puts ("hex=0x60 dec=96 char=`FINI");
    puts ("hex=0x61 dec=97 char=aFINI");
    puts ("hex=0x62 dec=98 char=bFINI");
    puts ("hex=0x63 dec=99 char=cFINI");
    puts ("hex=0x64 dec=100 char=dFINI");
    puts ("hex=0x65 dec=101 char=eFINI");
    puts ("hex=0x66 dec=102 char=fFINI");
    puts ("hex=0x67 dec=103 char=gFINI");
    puts ("hex=0x68 dec=104 char=hFINI");
    puts ("hex=0x69 dec=105 char=iFINI");
    puts ("hex=0x6a dec=106 char=jFINI");
    puts ("hex=0x6b dec=107 char=kFINI");
    puts ("hex=0x6c dec=108 char=lFINI");
    puts ("hex=0x6d dec=109 char=mFINI");
    puts ("hex=0x6e dec=110 char=nFINI");
    puts ("hex=0x6f dec=111 char=oFINI");
    puts ("hex=0x70 dec=112 char=pFINI");
    puts ("hex=0x71 dec=113 char=qFINI");
    puts ("hex=0x72 dec=114 char=rFINI");
    puts ("hex=0x73 dec=115 char=sFINI");
    puts ("hex=0x74 dec=116 char=tFINI");
    puts ("hex=0x75 dec=117 char=uFINI");
    puts ("hex=0x76 dec=118 char=vFINI");
    puts ("hex=0x77 dec=119 char=wFINI");
    puts ("hex=0x78 dec=120 char=xFINI");
    puts ("hex=0x79 dec=121 char=yFINI");
    puts ("hex=0x7a dec=122 char=zFINI");
    puts ("hex=0x7b dec=123 char={FINI");
    puts ("hex=0x7c dec=124 char=|FINI");
    puts ("hex=0x7d dec=125 char=}FINI");
    puts ("hex=0x7e dec=126 char=~FINI");
    puts ("hex=0x7f dec=127 char=");
    puts ("hex=0x80 dec=128 char=");
    puts ("hex=0x81 dec=129 char=");
    puts ("hex=0x82 dec=130 char=");
    puts ("hex=0x83 dec=131 char=");
    puts ("hex=0x84 dec=132 char=");
    puts ("hex=0x85 dec=133 char=");
    puts ("hex=0x86 dec=134 char=");
    puts ("hex=0x87 dec=135 char=");
    puts ("hex=0x88 dec=136 char=");
    puts ("hex=0x89 dec=137 char=");
    puts ("hex=0x8a dec=138 char=");
    puts ("hex=0x8b dec=139 char=");
    puts ("hex=0x8c dec=140 char=");
    puts ("hex=0x8d dec=141 char=");
    puts ("hex=0x8e dec=142 char=");
    puts ("hex=0x8f dec=143 char=");
    puts ("hex=0x90 dec=144 char=");
    puts ("hex=0x91 dec=145 char=");
    puts ("hex=0x92 dec=146 char=");
    puts ("hex=0x93 dec=147 char=");
    puts ("hex=0x94 dec=148 char=");
    puts ("hex=0x95 dec=149 char=");
    puts ("hex=0x96 dec=150 char=");
    puts ("hex=0x97 dec=151 char=");
    puts ("hex=0x98 dec=152 char=");
    puts ("hex=0x99 dec=153 char=");
    puts ("hex=0x9a dec=154 char=");
    puts ("hex=0x9b dec=155 char=");
    puts ("hex=0x9c dec=156 char=");
    puts ("hex=0x9d dec=157 char=");
    puts ("hex=0x9e dec=158 char=");
    puts ("hex=0x9f dec=159 char=");
    puts ("hex=0xa0 dec=160 char=");
    puts ("hex=0xa1 dec=161 char=");
    puts ("hex=0xa2 dec=162 char=");
    puts ("hex=0xa3 dec=163 char=");
    puts ("hex=0xa4 dec=164 char=");
    puts ("hex=0xa5 dec=165 char=");
    puts ("hex=0xa6 dec=166 char=");
    puts ("hex=0xa7 dec=167 char=");
    puts ("hex=0xa8 dec=168 char=");
    puts ("hex=0xa9 dec=169 char=");
    puts ("hex=0xaa dec=170 char=");
    puts ("hex=0xab dec=171 char=");
    puts ("hex=0xac dec=172 char=");
    puts ("hex=0xad dec=173 char=");
    puts ("hex=0xae dec=174 char=");
    puts ("hex=0xaf dec=175 char=");
    puts ("hex=0xb0 dec=176 char=");
    puts ("hex=0xb1 dec=177 char=");
    puts ("hex=0xb2 dec=178 char=");
    puts ("hex=0xb3 dec=179 char=");
    puts ("hex=0xb4 dec=180 char=");
    puts ("hex=0xb5 dec=181 char=");
    puts ("hex=0xb6 dec=182 char=");
    puts ("hex=0xb7 dec=183 char=");
    puts ("hex=0xb8 dec=184 char=");
    puts ("hex=0xb9 dec=185 char=");
    puts ("hex=0xba dec=186 char=");
    puts ("hex=0xbb dec=187 char=");
    puts ("hex=0xbc dec=188 char=");
    puts ("hex=0xbd dec=189 char=");
    puts ("hex=0xbe dec=190 char=");
    puts ("hex=0xbf dec=191 char=");
    puts ("hex=0xc0 dec=192 char=");
    puts ("hex=0xc1 dec=193 char=");
    puts ("hex=0xc2 dec=194 char=");
    puts ("hex=0xc3 dec=195 char=");
    puts ("hex=0xc4 dec=196 char=");
    puts ("hex=0xc5 dec=197 char=");
    puts ("hex=0xc6 dec=198 char=");
    puts ("hex=0xc7 dec=199 char=");
    puts ("hex=0xc8 dec=200 char=");
    puts ("hex=0xc9 dec=201 char=");
    puts ("hex=0xca dec=202 char=");
    puts ("hex=0xcb dec=203 char=");
    puts ("hex=0xcc dec=204 char=");
    puts ("hex=0xcd dec=205 char=");
    puts ("hex=0xce dec=206 char=");
    puts ("hex=0xcf dec=207 char=");
    puts ("hex=0xd0 dec=208 char=");
    puts ("hex=0xd1 dec=209 char=");
    puts ("hex=0xd2 dec=210 char=");
    puts ("hex=0xd3 dec=211 char=");
    puts ("hex=0xd4 dec=212 char=");
    puts ("hex=0xd5 dec=213 char=");
    puts ("hex=0xd6 dec=214 char=");
    puts ("hex=0xd7 dec=215 char=");
    puts ("hex=0xd8 dec=216 char=");
    puts ("hex=0xd9 dec=217 char=");
    puts ("hex=0xda dec=218 char=");
    puts ("hex=0xdb dec=219 char=");
    puts ("hex=0xdc dec=220 char=");
    puts ("hex=0xdd dec=221 char=");
    puts ("hex=0xde dec=222 char=");
    puts ("hex=0xdf dec=223 char=");
    puts ("hex=0xe0 dec=224 char=");
    puts ("hex=0xe1 dec=225 char=");
    puts ("hex=0xe2 dec=226 char=");
    puts ("hex=0xe3 dec=227 char=");
    puts ("hex=0xe4 dec=228 char=");
    puts ("hex=0xe5 dec=229 char=");
    puts ("hex=0xe6 dec=230 char=");
    puts ("hex=0xe7 dec=231 char=");
    puts ("hex=0xe8 dec=232 char=");
    puts ("hex=0xe9 dec=233 char=");
    puts ("hex=0xea dec=234 char=");
    puts ("hex=0xeb dec=235 char=");
    puts ("hex=0xec dec=236 char=");
    puts ("hex=0xed dec=237 char=");
    puts ("hex=0xee dec=238 char=");
    puts ("hex=0xef dec=239 char=");
    puts ("hex=0xf0 dec=240 char=");
    puts ("hex=0xf1 dec=241 char=");
    puts ("hex=0xf2 dec=242 char=");
    puts ("hex=0xf3 dec=243 char=");
    puts ("hex=0xf4 dec=244 char=");
    puts ("hex=0xf5 dec=245 char=");
    puts ("hex=0xf6 dec=246 char=");
    puts ("hex=0xf7 dec=247 char=");
    puts ("hex=0xf8 dec=248 char=");
    puts ("hex=0xf9 dec=249 char=");
    puts ("hex=0xfa dec=250 char=");
    puts ("hex=0xfb dec=251 char=");
    puts ("hex=0xfc dec=252 char=");
    puts ("hex=0xfd dec=253 char=");
    puts ("hex=0xfe dec=254 char=");
    eax = puts ("hex=0xff dec=255 char=");
    esp = ebp - 8;
    eax = 0;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8048368 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x3c8f;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
