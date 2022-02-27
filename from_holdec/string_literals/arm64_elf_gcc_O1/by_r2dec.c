/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x850 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 3684 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = __libc_csu_init;
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x7e0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x14018);
    x16 = 0x14018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x1638 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 = .init_array;
    x20 = 0x13db0;
    x20 -= x21;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x22 = x2;
    w24 = w0;
    x23 = x1;
    init ();
    x20 >>= 3;
    if (x20 == 0) {
        goto label_0;
    }
    x19 = 0x0;
    do {
        offset_0 = x19 << 3;
        x3 = *((x21 + offset_0));
        x2 = x22;
        x1 = x23;
        w0 = w24;
        x19++;
        uint64_t (*x3)(uint32_t, uint64_t, uint64_t, uint64_t) (w0, x1, x2, x3);
    } while (x20 != x19);
label_0:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x998 */
#include <stdint.h>
 
uint64_t dbg_main (int64_t arg2) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x1 = arg2;
    /* int main(int argc,char ** argv); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = x1;
    w1 = 0x27;
    x0 = *(x19);
    x0 = strchr (x0, w1);
    x1 = x0;
    x0 = "with single ' quote %p\n";
    printf (x0, x1);
    w1 = 0x22;
    x0 = *(x19);
    x0 = strchr (x0, w1);
    x1 = x0;
    x0 = "with double \" quote %p\n";
    printf (x0, x1);
    x1 = 0x1718;
    x0 = "with-null-byte";
    x0 = fopen (x0, x1);
    x20 = x0;
    x19 = "with null byte ";
    x3 = x0;
    x2 = 0x1;
    x1 = 0x11;
    x0 = x19;
    fwrite (x0, x1, x2, x3);
    x3 = x20;
    x2 = 0x11;
    x1 = 0x1;
    x0 = x19;
    fwrite (x0, x1, x2, x3);
    x0 = x20;
    fclose (x0);
    x0 = "hex=0x01 dec=1 char=";
    puts ("hex=0x01 dec=1 char=");
    x0 = "hex=0x02 dec=2 char=";
    puts ("hex=0x02 dec=2 char=");
    x0 = "hex=0x03 dec=3 char=";
    puts ("hex=0x03 dec=3 char=");
    x0 = 0x1000;
    x0 += sym..plt;
    puts (x0);
    x0 = 0x1000;
    x0 += sym.imp.__cxa_finalize;
    puts (x0);
    x0 = 0x1000;
    x0 += sym.imp.fopen;
    puts (x0);
    x0 = "hex=0x07 dec=7 char=\aFINI";
    puts ("hex=0x07 dec=7 char=\aFINI");
    x0 = 0x1000;
    x0 += sym.imp.puts;
    puts (x0);
    x0 = 0x1000;
    x0 += sym.imp.fwrite;
    puts (x0);
    x0 = 0x1000;
    x0 += entry0;
    puts (x0);
    x0 = "hex=0x0b dec=11 char=\vFINI";
    puts ("hex=0x0b dec=11 char=\vFINI");
    x0 = "hex=0x0c dec=12 char=\fFINI";
    puts ("hex=0x0c dec=12 char=\fFINI");
    x0 = "hex=0x0d dec=13 char=\rFINI";
    puts ("hex=0x0d dec=13 char=\rFINI");
    x0 = "hex=0x0e dec=14 char=";
    puts ("hex=0x0e dec=14 char=");
    x0 = "hex=0x0f dec=15 char=";
    puts ("hex=0x0f dec=15 char=");
    x0 = "hex=0x10 dec=16 char=";
    puts ("hex=0x10 dec=16 char=");
    x0 = "hex=0x11 dec=17 char=";
    puts ("hex=0x11 dec=17 char=");
    x0 = "hex=0x12 dec=18 char=";
    puts ("hex=0x12 dec=18 char=");
    x0 = "hex=0x13 dec=19 char=";
    puts ("hex=0x13 dec=19 char=");
    x0 = "hex=0x14 dec=20 char=";
    puts ("hex=0x14 dec=20 char=");
    x0 = "hex=0x15 dec=21 char=";
    puts ("hex=0x15 dec=21 char=");
    x0 = "hex=0x16 dec=22 char=";
    puts ("hex=0x16 dec=22 char=");
    x0 = "hex=0x17 dec=23 char=";
    puts ("hex=0x17 dec=23 char=");
    x0 = "hex=0x18 dec=24 char=";
    puts ("hex=0x18 dec=24 char=");
    x0 = "hex=0x19 dec=25 char=";
    puts ("hex=0x19 dec=25 char=");
    x0 = "hex=0x1a dec=26 char=";
    puts ("hex=0x1a dec=26 char=");
    x0 = "hex=0x1b dec=27 char=\eFINI";
    puts ("hex=0x1b dec=27 char=\eFINI");
    x0 = "hex=0x1c dec=28 char=";
    puts ("hex=0x1c dec=28 char=");
    x0 = "hex=0x1d dec=29 char=";
    puts ("hex=0x1d dec=29 char=");
    x0 = "hex=0x1e dec=30 char=";
    puts ("hex=0x1e dec=30 char=");
    x0 = "hex=0x1f dec=31 char=";
    puts ("hex=0x1f dec=31 char=");
    x0 = "hex=0x20 dec=32 char= FINI";
    puts ("hex=0x20 dec=32 char= FINI");
    x0 = "hex=0x21 dec=33 char=!FINI";
    puts ("hex=0x21 dec=33 char=!FINI");
    x0 = "hex=0x22 dec=34 char=\"FINI";
    puts ("hex=0x22 dec=34 char=\"FINI");
    x0 = "hex=0x23 dec=35 char=#FINI";
    puts ("hex=0x23 dec=35 char=#FINI");
    x0 = "hex=0x24 dec=36 char=$FINI";
    puts ("hex=0x24 dec=36 char=$FINI");
    x0 = "hex=0x25 dec=37 char=%FINI";
    puts ("hex=0x25 dec=37 char=%FINI");
    x0 = "hex=0x26 dec=38 char=&FINI";
    puts ("hex=0x26 dec=38 char=&FINI");
    x0 = "hex=0x27 dec=39 char='FINI";
    puts ("hex=0x27 dec=39 char='FINI");
    x0 = "hex=0x28 dec=40 char=(FINI";
    puts ("hex=0x28 dec=40 char=(FINI");
    x0 = "hex=0x29 dec=41 char=)FINI";
    puts ("hex=0x29 dec=41 char=)FINI");
    x0 = "hex=0x2a dec=42 char=*FINI";
    puts ("hex=0x2a dec=42 char=*FINI");
    x0 = "hex=0x2b dec=43 char=+FINI";
    puts ("hex=0x2b dec=43 char=+FINI");
    x0 = "hex=0x2c dec=44 char=,FINI";
    puts ("hex=0x2c dec=44 char=,FINI");
    x0 = "hex=0x2d dec=45 char=-FINI";
    puts ("hex=0x2d dec=45 char=-FINI");
    x0 = "hex=0x2e dec=46 char=.FINI";
    puts ("hex=0x2e dec=46 char=.FINI");
    x0 = "hex=0x2f dec=47 char=/FINI";
    puts ("hex=0x2f dec=47 char=/FINI");
    x0 = "hex=0x30 dec=48 char=0FINI";
    puts ("hex=0x30 dec=48 char=0FINI");
    x0 = "hex=0x31 dec=49 char=1FINI";
    puts ("hex=0x31 dec=49 char=1FINI");
    x0 = "hex=0x32 dec=50 char=2FINI";
    puts ("hex=0x32 dec=50 char=2FINI");
    x0 = "hex=0x33 dec=51 char=3FINI";
    puts ("hex=0x33 dec=51 char=3FINI");
    x0 = "hex=0x34 dec=52 char=4FINI";
    puts ("hex=0x34 dec=52 char=4FINI");
    x0 = "hex=0x35 dec=53 char=5FINI";
    puts ("hex=0x35 dec=53 char=5FINI");
    x0 = "hex=0x36 dec=54 char=6FINI";
    puts ("hex=0x36 dec=54 char=6FINI");
    x0 = "hex=0x37 dec=55 char=7FINI";
    puts ("hex=0x37 dec=55 char=7FINI");
    x0 = "hex=0x38 dec=56 char=8FINI";
    puts ("hex=0x38 dec=56 char=8FINI");
    x0 = "hex=0x39 dec=57 char=9FINI";
    puts ("hex=0x39 dec=57 char=9FINI");
    x0 = "hex=0x3a dec=58 char=:FINI";
    puts ("hex=0x3a dec=58 char=:FINI");
    x0 = "hex=0x3b dec=59 char=;FINI";
    puts ("hex=0x3b dec=59 char=;FINI");
    x0 = "hex=0x3c dec=60 char=<FINI";
    puts ("hex=0x3c dec=60 char=<FINI");
    x0 = "hex=0x3d dec=61 char==FINI";
    puts ("hex=0x3d dec=61 char==FINI");
    x0 = "hex=0x3e dec=62 char=>FINI";
    puts ("hex=0x3e dec=62 char=>FINI");
    x0 = "hex=0x3f dec=63 char=?FINI";
    puts ("hex=0x3f dec=63 char=?FINI");
    x0 = "hex=0x40 dec=64 char=@FINI";
    puts ("hex=0x40 dec=64 char=@FINI");
    x0 = "hex=0x41 dec=65 char=AFINI";
    puts ("hex=0x41 dec=65 char=AFINI");
    x0 = "hex=0x42 dec=66 char=BFINI";
    puts ("hex=0x42 dec=66 char=BFINI");
    x0 = "hex=0x43 dec=67 char=CFINI";
    puts ("hex=0x43 dec=67 char=CFINI");
    x0 = "hex=0x44 dec=68 char=DFINI";
    puts ("hex=0x44 dec=68 char=DFINI");
    x0 = "hex=0x45 dec=69 char=EFINI";
    puts ("hex=0x45 dec=69 char=EFINI");
    x0 = "hex=0x46 dec=70 char=FFINI";
    puts ("hex=0x46 dec=70 char=FFINI");
    x0 = "hex=0x47 dec=71 char=GFINI";
    puts ("hex=0x47 dec=71 char=GFINI");
    x0 = "hex=0x48 dec=72 char=HFINI";
    puts ("hex=0x48 dec=72 char=HFINI");
    x0 = "hex=0x49 dec=73 char=IFINI";
    puts ("hex=0x49 dec=73 char=IFINI");
    x0 = "hex=0x4a dec=74 char=JFINI";
    puts ("hex=0x4a dec=74 char=JFINI");
    x0 = "hex=0x4b dec=75 char=KFINI";
    puts ("hex=0x4b dec=75 char=KFINI");
    x0 = "hex=0x4c dec=76 char=LFINI";
    puts ("hex=0x4c dec=76 char=LFINI");
    x0 = "hex=0x4d dec=77 char=MFINI";
    puts ("hex=0x4d dec=77 char=MFINI");
    x0 = "hex=0x4e dec=78 char=NFINI";
    puts ("hex=0x4e dec=78 char=NFINI");
    x0 = "hex=0x4f dec=79 char=OFINI";
    puts ("hex=0x4f dec=79 char=OFINI");
    x0 = "hex=0x50 dec=80 char=PFINI";
    puts ("hex=0x50 dec=80 char=PFINI");
    x0 = "hex=0x51 dec=81 char=QFINI";
    puts ("hex=0x51 dec=81 char=QFINI");
    x0 = "hex=0x52 dec=82 char=RFINI";
    puts ("hex=0x52 dec=82 char=RFINI");
    x0 = "hex=0x53 dec=83 char=SFINI";
    puts ("hex=0x53 dec=83 char=SFINI");
    x0 = "hex=0x54 dec=84 char=TFINI";
    puts ("hex=0x54 dec=84 char=TFINI");
    x0 = "hex=0x55 dec=85 char=UFINI";
    puts ("hex=0x55 dec=85 char=UFINI");
    x0 = "hex=0x56 dec=86 char=VFINI";
    puts ("hex=0x56 dec=86 char=VFINI");
    x0 = "hex=0x57 dec=87 char=WFINI";
    puts ("hex=0x57 dec=87 char=WFINI");
    x0 = "hex=0x58 dec=88 char=XFINI";
    puts ("hex=0x58 dec=88 char=XFINI");
    x0 = "hex=0x59 dec=89 char=YFINI";
    puts ("hex=0x59 dec=89 char=YFINI");
    x0 = "hex=0x5a dec=90 char=ZFINI";
    puts ("hex=0x5a dec=90 char=ZFINI");
    x0 = "hex=0x5b dec=91 char=[FINI";
    puts ("hex=0x5b dec=91 char=[FINI");
    x0 = "hex=0x5c dec=92 char=\\FINI";
    puts ("hex=0x5c dec=92 char=\\FINI");
    x0 = "hex=0x5d dec=93 char=]FINI";
    puts ("hex=0x5d dec=93 char=]FINI");
    x0 = "hex=0x5e dec=94 char=^FINI";
    puts ("hex=0x5e dec=94 char=^FINI");
    x0 = "hex=0x5f dec=95 char=_FINI";
    puts ("hex=0x5f dec=95 char=_FINI");
    x0 = "hex=0x60 dec=96 char=`FINI";
    puts ("hex=0x60 dec=96 char=`FINI");
    x0 = "hex=0x61 dec=97 char=aFINI";
    puts ("hex=0x61 dec=97 char=aFINI");
    x0 = "hex=0x62 dec=98 char=bFINI";
    puts ("hex=0x62 dec=98 char=bFINI");
    x0 = "hex=0x63 dec=99 char=cFINI";
    puts ("hex=0x63 dec=99 char=cFINI");
    x0 = "hex=0x64 dec=100 char=dFINI";
    puts ("hex=0x64 dec=100 char=dFINI");
    x0 = "hex=0x65 dec=101 char=eFINI";
    puts ("hex=0x65 dec=101 char=eFINI");
    x0 = "hex=0x66 dec=102 char=fFINI";
    puts ("hex=0x66 dec=102 char=fFINI");
    x0 = "hex=0x67 dec=103 char=gFINI";
    puts ("hex=0x67 dec=103 char=gFINI");
    x0 = "hex=0x68 dec=104 char=hFINI";
    puts ("hex=0x68 dec=104 char=hFINI");
    x0 = "hex=0x69 dec=105 char=iFINI";
    puts ("hex=0x69 dec=105 char=iFINI");
    x0 = "hex=0x6a dec=106 char=jFINI";
    puts ("hex=0x6a dec=106 char=jFINI");
    x0 = "hex=0x6b dec=107 char=kFINI";
    puts ("hex=0x6b dec=107 char=kFINI");
    x0 = "hex=0x6c dec=108 char=lFINI";
    puts ("hex=0x6c dec=108 char=lFINI");
    x0 = "hex=0x6d dec=109 char=mFINI";
    puts ("hex=0x6d dec=109 char=mFINI");
    x0 = "hex=0x6e dec=110 char=nFINI";
    puts ("hex=0x6e dec=110 char=nFINI");
    x0 = "hex=0x6f dec=111 char=oFINI";
    puts ("hex=0x6f dec=111 char=oFINI");
    x0 = "hex=0x70 dec=112 char=pFINI";
    puts ("hex=0x70 dec=112 char=pFINI");
    x0 = "hex=0x71 dec=113 char=qFINI";
    puts ("hex=0x71 dec=113 char=qFINI");
    x0 = "hex=0x72 dec=114 char=rFINI";
    puts ("hex=0x72 dec=114 char=rFINI");
    x0 = "hex=0x73 dec=115 char=sFINI";
    puts ("hex=0x73 dec=115 char=sFINI");
    x0 = "hex=0x74 dec=116 char=tFINI";
    puts ("hex=0x74 dec=116 char=tFINI");
    x0 = "hex=0x75 dec=117 char=uFINI";
    puts ("hex=0x75 dec=117 char=uFINI");
    x0 = "hex=0x76 dec=118 char=vFINI";
    puts ("hex=0x76 dec=118 char=vFINI");
    x0 = "hex=0x77 dec=119 char=wFINI";
    puts ("hex=0x77 dec=119 char=wFINI");
    x0 = "hex=0x78 dec=120 char=xFINI";
    puts ("hex=0x78 dec=120 char=xFINI");
    x0 = "hex=0x79 dec=121 char=yFINI";
    puts ("hex=0x79 dec=121 char=yFINI");
    x0 = "hex=0x7a dec=122 char=zFINI";
    puts ("hex=0x7a dec=122 char=zFINI");
    x0 = "hex=0x7b dec=123 char={FINI";
    puts ("hex=0x7b dec=123 char={FINI");
    x0 = "hex=0x7c dec=124 char=|FINI";
    puts ("hex=0x7c dec=124 char=|FINI");
    x0 = "hex=0x7d dec=125 char=}FINI";
    puts ("hex=0x7d dec=125 char=}FINI");
    x0 = "hex=0x7e dec=126 char=~FINI";
    puts ("hex=0x7e dec=126 char=~FINI");
    x0 = "hex=0x7f dec=127 char=";
    puts ("hex=0x7f dec=127 char=");
    x0 = "hex=0x80 dec=128 char=";
    puts ("hex=0x80 dec=128 char=");
    x0 = "hex=0x81 dec=129 char=";
    puts ("hex=0x81 dec=129 char=");
    x0 = "hex=0x82 dec=130 char=";
    puts ("hex=0x82 dec=130 char=");
    x0 = "hex=0x83 dec=131 char=";
    puts ("hex=0x83 dec=131 char=");
    x0 = 0x2000;
    x0 += sym..plt;
    puts (x0);
    x0 = 0x2000;
    x0 += sym.imp.__cxa_finalize;
    puts (x0);
    x0 = 0x2000;
    x0 += sym.imp.fopen;
    puts (x0);
    x0 = "hex=0x87 dec=135 char=";
    puts ("hex=0x87 dec=135 char=");
    x0 = 0x2000;
    x0 += sym.imp.puts;
    puts (x0);
    x0 = 0x2000;
    x0 += sym.imp.fwrite;
    puts (x0);
    x0 = 0x2000;
    x0 += entry0;
    puts (x0);
    x0 = "hex=0x8b dec=139 char=";
    puts ("hex=0x8b dec=139 char=");
    x0 = "hex=0x8c dec=140 char=";
    puts ("hex=0x8c dec=140 char=");
    x0 = "hex=0x8d dec=141 char=";
    puts ("hex=0x8d dec=141 char=");
    x0 = "hex=0x8e dec=142 char=";
    puts ("hex=0x8e dec=142 char=");
    x0 = "hex=0x8f dec=143 char=";
    puts ("hex=0x8f dec=143 char=");
    x0 = "hex=0x90 dec=144 char=";
    puts ("hex=0x90 dec=144 char=");
    x0 = "hex=0x91 dec=145 char=";
    puts ("hex=0x91 dec=145 char=");
    x0 = "hex=0x92 dec=146 char=";
    puts ("hex=0x92 dec=146 char=");
    x0 = "hex=0x93 dec=147 char=";
    puts ("hex=0x93 dec=147 char=");
    x0 = "hex=0x94 dec=148 char=";
    puts ("hex=0x94 dec=148 char=");
    x0 = "hex=0x95 dec=149 char=";
    puts ("hex=0x95 dec=149 char=");
    x0 = "hex=0x96 dec=150 char=";
    puts ("hex=0x96 dec=150 char=");
    x0 = "hex=0x97 dec=151 char=";
    puts ("hex=0x97 dec=151 char=");
    x0 = "hex=0x98 dec=152 char=";
    puts ("hex=0x98 dec=152 char=");
    x0 = "hex=0x99 dec=153 char=";
    puts ("hex=0x99 dec=153 char=");
    x0 = "hex=0x9a dec=154 char=";
    puts ("hex=0x9a dec=154 char=");
    x0 = "hex=0x9b dec=155 char=";
    puts ("hex=0x9b dec=155 char=");
    x0 = "hex=0x9c dec=156 char=";
    puts ("hex=0x9c dec=156 char=");
    x0 = "hex=0x9d dec=157 char=";
    puts ("hex=0x9d dec=157 char=");
    x0 = "hex=0x9e dec=158 char=";
    puts ("hex=0x9e dec=158 char=");
    x0 = "hex=0x9f dec=159 char=";
    puts ("hex=0x9f dec=159 char=");
    x0 = "hex=0xa0 dec=160 char=";
    puts ("hex=0xa0 dec=160 char=");
    x0 = "hex=0xa1 dec=161 char=";
    puts ("hex=0xa1 dec=161 char=");
    x0 = "hex=0xa2 dec=162 char=";
    puts ("hex=0xa2 dec=162 char=");
    x0 = "hex=0xa3 dec=163 char=";
    puts ("hex=0xa3 dec=163 char=");
    x0 = "hex=0xa4 dec=164 char=";
    puts ("hex=0xa4 dec=164 char=");
    x0 = "hex=0xa5 dec=165 char=";
    puts ("hex=0xa5 dec=165 char=");
    x0 = "hex=0xa6 dec=166 char=";
    puts ("hex=0xa6 dec=166 char=");
    x0 = "hex=0xa7 dec=167 char=";
    puts ("hex=0xa7 dec=167 char=");
    x0 = "hex=0xa8 dec=168 char=";
    puts ("hex=0xa8 dec=168 char=");
    x0 = "hex=0xa9 dec=169 char=";
    puts ("hex=0xa9 dec=169 char=");
    x0 = "hex=0xaa dec=170 char=";
    puts ("hex=0xaa dec=170 char=");
    x0 = "hex=0xab dec=171 char=";
    puts ("hex=0xab dec=171 char=");
    x0 = "hex=0xac dec=172 char=";
    puts ("hex=0xac dec=172 char=");
    x0 = "hex=0xad dec=173 char=";
    puts ("hex=0xad dec=173 char=");
    x0 = "hex=0xae dec=174 char=";
    puts ("hex=0xae dec=174 char=");
    x0 = "hex=0xaf dec=175 char=";
    puts ("hex=0xaf dec=175 char=");
    x0 = "hex=0xb0 dec=176 char=";
    puts ("hex=0xb0 dec=176 char=");
    x0 = "hex=0xb1 dec=177 char=";
    puts ("hex=0xb1 dec=177 char=");
    x0 = "hex=0xb2 dec=178 char=";
    puts ("hex=0xb2 dec=178 char=");
    x0 = "hex=0xb3 dec=179 char=";
    puts ("hex=0xb3 dec=179 char=");
    x0 = "hex=0xb4 dec=180 char=";
    puts ("hex=0xb4 dec=180 char=");
    x0 = "hex=0xb5 dec=181 char=";
    puts ("hex=0xb5 dec=181 char=");
    x0 = "hex=0xb6 dec=182 char=";
    puts ("hex=0xb6 dec=182 char=");
    x0 = "hex=0xb7 dec=183 char=";
    puts ("hex=0xb7 dec=183 char=");
    x0 = "hex=0xb8 dec=184 char=";
    puts ("hex=0xb8 dec=184 char=");
    x0 = "hex=0xb9 dec=185 char=";
    puts ("hex=0xb9 dec=185 char=");
    x0 = "hex=0xba dec=186 char=";
    puts ("hex=0xba dec=186 char=");
    x0 = "hex=0xbb dec=187 char=";
    puts ("hex=0xbb dec=187 char=");
    x0 = "hex=0xbc dec=188 char=";
    puts ("hex=0xbc dec=188 char=");
    x0 = "hex=0xbd dec=189 char=";
    puts ("hex=0xbd dec=189 char=");
    x0 = "hex=0xbe dec=190 char=";
    puts ("hex=0xbe dec=190 char=");
    x0 = "hex=0xbf dec=191 char=";
    puts ("hex=0xbf dec=191 char=");
    x0 = "hex=0xc0 dec=192 char=";
    puts ("hex=0xc0 dec=192 char=");
    x0 = "hex=0xc1 dec=193 char=";
    puts ("hex=0xc1 dec=193 char=");
    x0 = "hex=0xc2 dec=194 char=";
    puts ("hex=0xc2 dec=194 char=");
    x0 = "hex=0xc3 dec=195 char=";
    puts ("hex=0xc3 dec=195 char=");
    x0 = "hex=0xc4 dec=196 char=";
    puts ("hex=0xc4 dec=196 char=");
    x0 = "hex=0xc5 dec=197 char=";
    puts ("hex=0xc5 dec=197 char=");
    x0 = "hex=0xc6 dec=198 char=";
    puts ("hex=0xc6 dec=198 char=");
    x0 = "hex=0xc7 dec=199 char=";
    puts ("hex=0xc7 dec=199 char=");
    x0 = "hex=0xc8 dec=200 char=";
    puts ("hex=0xc8 dec=200 char=");
    x0 = "hex=0xc9 dec=201 char=";
    puts ("hex=0xc9 dec=201 char=");
    x0 = "hex=0xca dec=202 char=";
    puts ("hex=0xca dec=202 char=");
    x0 = "hex=0xcb dec=203 char=";
    puts ("hex=0xcb dec=203 char=");
    x0 = "hex=0xcc dec=204 char=";
    puts ("hex=0xcc dec=204 char=");
    x0 = "hex=0xcd dec=205 char=";
    puts ("hex=0xcd dec=205 char=");
    x0 = "hex=0xce dec=206 char=";
    puts ("hex=0xce dec=206 char=");
    x0 = "hex=0xcf dec=207 char=";
    puts ("hex=0xcf dec=207 char=");
    x0 = "hex=0xd0 dec=208 char=";
    puts ("hex=0xd0 dec=208 char=");
    x0 = "hex=0xd1 dec=209 char=";
    puts ("hex=0xd1 dec=209 char=");
    x0 = "hex=0xd2 dec=210 char=";
    puts ("hex=0xd2 dec=210 char=");
    x0 = "hex=0xd3 dec=211 char=";
    puts ("hex=0xd3 dec=211 char=");
    x0 = "hex=0xd4 dec=212 char=";
    puts ("hex=0xd4 dec=212 char=");
    x0 = "hex=0xd5 dec=213 char=";
    puts ("hex=0xd5 dec=213 char=");
    x0 = "hex=0xd6 dec=214 char=";
    puts ("hex=0xd6 dec=214 char=");
    x0 = "hex=0xd7 dec=215 char=";
    puts ("hex=0xd7 dec=215 char=");
    x0 = "hex=0xd8 dec=216 char=";
    puts ("hex=0xd8 dec=216 char=");
    x0 = "hex=0xd9 dec=217 char=";
    puts ("hex=0xd9 dec=217 char=");
    x0 = "hex=0xda dec=218 char=";
    puts ("hex=0xda dec=218 char=");
    x0 = "hex=0xdb dec=219 char=";
    puts ("hex=0xdb dec=219 char=");
    x0 = "hex=0xdc dec=220 char=";
    puts ("hex=0xdc dec=220 char=");
    x0 = "hex=0xdd dec=221 char=";
    puts ("hex=0xdd dec=221 char=");
    x0 = "hex=0xde dec=222 char=";
    puts ("hex=0xde dec=222 char=");
    x0 = "hex=0xdf dec=223 char=";
    puts ("hex=0xdf dec=223 char=");
    x0 = "hex=0xe0 dec=224 char=";
    puts ("hex=0xe0 dec=224 char=");
    x0 = "hex=0xe1 dec=225 char=";
    puts ("hex=0xe1 dec=225 char=");
    x0 = "hex=0xe2 dec=226 char=";
    puts ("hex=0xe2 dec=226 char=");
    x0 = "hex=0xe3 dec=227 char=";
    puts ("hex=0xe3 dec=227 char=");
    x0 = "hex=0xe4 dec=228 char=";
    puts ("hex=0xe4 dec=228 char=");
    x0 = "hex=0xe5 dec=229 char=";
    puts ("hex=0xe5 dec=229 char=");
    x0 = "hex=0xe6 dec=230 char=";
    puts ("hex=0xe6 dec=230 char=");
    x0 = "hex=0xe7 dec=231 char=";
    puts ("hex=0xe7 dec=231 char=");
    x0 = "hex=0xe8 dec=232 char=";
    puts ("hex=0xe8 dec=232 char=");
    x0 = "hex=0xe9 dec=233 char=";
    puts ("hex=0xe9 dec=233 char=");
    x0 = "hex=0xea dec=234 char=";
    puts ("hex=0xea dec=234 char=");
    x0 = "hex=0xeb dec=235 char=";
    puts ("hex=0xeb dec=235 char=");
    x0 = "hex=0xec dec=236 char=";
    puts ("hex=0xec dec=236 char=");
    x0 = "hex=0xed dec=237 char=";
    puts ("hex=0xed dec=237 char=");
    x0 = "hex=0xee dec=238 char=";
    puts ("hex=0xee dec=238 char=");
    x0 = "hex=0xef dec=239 char=";
    puts ("hex=0xef dec=239 char=");
    x0 = "hex=0xf0 dec=240 char=";
    puts ("hex=0xf0 dec=240 char=");
    x0 = "hex=0xf1 dec=241 char=";
    puts ("hex=0xf1 dec=241 char=");
    x0 = "hex=0xf2 dec=242 char=";
    puts ("hex=0xf2 dec=242 char=");
    x0 = "hex=0xf3 dec=243 char=";
    puts ("hex=0xf3 dec=243 char=");
    x0 = "hex=0xf4 dec=244 char=";
    puts ("hex=0xf4 dec=244 char=");
    x0 = "hex=0xf5 dec=245 char=";
    puts ("hex=0xf5 dec=245 char=");
    x0 = "hex=0xf6 dec=246 char=";
    puts ("hex=0xf6 dec=246 char=");
    x0 = "hex=0xf7 dec=247 char=";
    puts ("hex=0xf7 dec=247 char=");
    x0 = "hex=0xf8 dec=248 char=";
    puts ("hex=0xf8 dec=248 char=");
    x0 = "hex=0xf9 dec=249 char=";
    puts ("hex=0xf9 dec=249 char=");
    x0 = "hex=0xfa dec=250 char=";
    puts ("hex=0xfa dec=250 char=");
    x0 = "hex=0xfb dec=251 char=";
    puts ("hex=0xfb dec=251 char=");
    x0 = "hex=0xfc dec=252 char=";
    puts ("hex=0xfc dec=252 char=");
    x0 = "hex=0xfd dec=253 char=";
    puts ("hex=0xfd dec=253 char=");
    x0 = "hex=0xfe dec=254 char=";
    puts ("hex=0xfe dec=254 char=");
    x0 = "hex=0xff dec=255 char=";
    puts ("hex=0xff dec=255 char=");
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x820 */
#include <stdint.h>
 
void strchr () {
    x17 = *(0x14038);
    x16 = 0x14038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x840 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x14048);
    x16 = 0x14048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x7d0 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x14010);
    x16 = 0x14010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x830 */
#include <stdint.h>
 
void fwrite () {
    x17 = *(0x14040);
    x16 = 0x14040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x7c0 */
#include <stdint.h>
 
void fclose () {
    x16 = 0x14000;
    x17 = *(0x14008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x810 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x14030);
    x16 = 0x14030;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x16b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x888 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x7f0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x14060;
    x0 = 0x14060;
    x1 += 7;
    x1 -= x0;
    if (x1 >= 0xe) {
        x1 = .comment;
        if (x1 == 0) {
            goto label_0;
        }
        uint64_t (*x1)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x8d8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x14060;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x14060;
    x1 >>= 1;
    if (x1 != 0) {
        x2 = .comment;
        if (x2 == 0) {
            goto label_0;
        }
        uint64_t (*x2)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x918 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x14000;
    w0 = *((x19 + 0x60));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x14058);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x60)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x7b0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x14000;
    x17 = *(0x14000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x960 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x8d8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x8d8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x16b4 */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [14] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x778 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [11] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x800 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x14028);
    x16 = 0x14028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/string_literals/arm64_elf_gcc_O1/subject.exe @ 0x790 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 192 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x13ff8;
    return uint64_t (*x17)() ();
}
