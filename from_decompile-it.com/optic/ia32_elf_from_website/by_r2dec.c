/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048da0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 162588 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048bb0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048ad0 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x8048adc)(uint32_t) (ebx);
    ebx += 0x2d518;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b60 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048e30 */
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
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8070890 */
#include <stdint.h>
 
int32_t do_global_ctors_aux (void) {
    eax = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x80708bc */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x80708c8)(uint32_t) (ebx);
    ebx += 0x572c;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048dd0 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.7065) != 0) {
        goto label_0;
    }
    eax = *(obj.dtor_idx.7067);
    ebx = obj.__DTOR_END__;
    ebx -= obj.__DTOR_LIST__;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(obj.dtor_idx.7067) = eax;
        uint32_t (*eax*4 + obj.__DTOR_LIST__)() ();
        eax = *(obj.dtor_idx.7067);
    } while (eax < ebx);
label_1:
    *(obj.completed.7065) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8067a9c */
#include <stdint.h>
 
int32_t dbg_hdr_skip_int (void) {
    wffile_type wff;
    int32_t var_cch;
    int32_t var_3ch;
    int32_t var_38h;
    integer(kind=4) unitfi;
    integer(kind=4) ierr;
    int32_t var_4h;
    /* void hdr_skip_int(integer(kind=4) unitfi,integer(kind=4) ierr); */
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0xd0)) = eax;
    *((ebp - 0xcc)) = 0;
    *((ebp - 0x38)) = 0;
    *((ebp - 0x3c)) = 0;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = ebp - 0xd0;
    *(esp) = eax;
    hdr_skip_wfftype_ ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8067adf */
#include <stdint.h>
 
int32_t dbg_hdr_skip_wfftype (void) {
    int32_t var_220h;
    int32_t var_21ch;
    int32_t var_218h;
    int32_t var_214h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    integer(kind=4) usepaw;
    integer(kind=4) npsp;
    integer(kind=4)[18] integers;
    integer(kind=4) headform;
    int32_t var_16h;
    integer(kind=4) mu;
    integer(kind=4) unit;
    wffile_type wff;
    integer(kind=4) ierr;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void hdr_skip_wfftype(wffile_type wff,integer(kind=4) ierr); */
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0xc));
    *(eax) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_0;
        }
        eax = *((ebp + 8));
        edx = *((eax + 0x94));
        eax = *((ebp + 8));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_0;
        }
    }
    *((ebp - 0x7c)) = 0x8072f68;
    *((ebp - 0x78)) = 0x6e;
    *((ebp - 0x84)) = 0;
    eax = *((ebp - 0xc));
    *((ebp - 0x80)) = eax;
    eax = ebp - 0x84;
    *(esp) = eax;
    gfortran_st_rewind ();
    *((ebp - 0x218)) = 0x8072f68;
    *((ebp - 0x214)) = 0x71;
    *((ebp - 0x220)) = 0;
    eax = *((ebp - 0xc));
    *((ebp - 0x21c)) = eax;
    eax = ebp - 0x220;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 6;
    eax = ebp - 0x16;
    *((esp + 4)) = eax;
    eax = ebp - 0x220;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x1c;
    *((esp + 4)) = eax;
    eax = ebp - 0x220;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x220;
    *(esp) = eax;
    gfortran_st_read_done ();
    eax = *((ebp - 0x1c));
    if (eax != 1) {
        eax = *((ebp - 0x1c));
        if (eax == 2) {
            goto label_1;
        }
        eax = *((ebp - 0x1c));
        if (eax == 0x33) {
            goto label_1;
        }
        eax = *((ebp - 0x1c));
        if (eax == 0x34) {
            goto label_1;
        }
        eax = *((ebp - 0x1c));
        if (eax == 0x65) {
            goto label_1;
        }
        eax = *((ebp - 0x1c));
        if (eax != 0x66) {
            goto label_2;
        }
    }
label_1:
    *((ebp - 0x1c)) = 0x16;
label_2:
    eax = *((ebp - 0x1c));
    if (eax <= 0x2b) {
        *((ebp - 0x218)) = 0x8072f68;
        *((ebp - 0x214)) = 0x79;
        *((ebp - 0x220)) = 0;
        eax = *((ebp - 0xc));
        *((ebp - 0x21c)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read ();
        *((ebp - 0x94)) = 0x109;
        *((ebp - 0x8c)) = 1;
        *((ebp - 0x88)) = 0xd;
        *((ebp - 0x90)) = 1;
        eax = ebp - 0x60;
        *((ebp - 0x9c)) = eax;
        *((ebp - 0x98)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x9c;
        *((esp + 4)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 4;
        eax = ebp - 0x64;
        *((esp + 4)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read_done ();
    } else {
        *((ebp - 0x218)) = 0x8072f68;
        *((ebp - 0x214)) = 0x7b;
        *((ebp - 0x220)) = 0;
        eax = *((ebp - 0xc));
        *((ebp - 0x21c)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read ();
        *((ebp - 0xac)) = 0x109;
        *((ebp - 0xa4)) = 1;
        *((ebp - 0xa0)) = 0xd;
        *((ebp - 0xa8)) = 1;
        eax = ebp - 0x60;
        *((ebp - 0xb4)) = eax;
        *((ebp - 0xb0)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0xb4;
        *((esp + 4)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 4;
        eax = ebp - 0x64;
        *((esp + 4)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((ebp - 0xc4)) = 0x109;
        *((ebp - 0xbc)) = 1;
        *((ebp - 0xb8)) = 3;
        *((ebp - 0xc0)) = 1;
        eax = ebp - 0x60;
        eax += 0x38;
        *((ebp - 0xcc)) = eax;
        *((ebp - 0xc8)) = 0xfffffff1;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0xcc;
        *((esp + 4)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 4;
        eax = ebp - 0x68;
        *((esp + 4)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read_done ();
    }
    eax = *((ebp - 0x64));
    ebx = eax + 2;
    *((ebp - 0x10)) = 1;
    if (*((ebp - 0x10)) > ebx) {
        goto label_3;
    }
    while (eax == 0) {
        *((ebp - 0x218)) = 0x8072f68;
        *((ebp - 0x214)) = 0x80;
        *((ebp - 0x220)) = 0;
        eax = *((ebp - 0xc));
        *((ebp - 0x21c)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read ();
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read_done ();
        al = (*((ebp - 0x10)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x10))++;
    }
label_3:
    eax = *((ebp - 0x1c));
    if (eax > 0x2b) {
        eax = *((ebp - 0x68));
        if (eax != 1) {
            goto label_0;
        }
        *((ebp - 0x218)) = 0x8072f68;
        *((ebp - 0x214)) = 0x83;
        *((ebp - 0x220)) = 0;
        eax = *((ebp - 0xc));
        *((ebp - 0x21c)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read ();
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x218)) = 0x8072f68;
        *((ebp - 0x214)) = 0x84;
        *((ebp - 0x220)) = 0;
        eax = *((ebp - 0xc));
        *((ebp - 0x21c)) = eax;
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read ();
        eax = ebp - 0x220;
        *(esp) = eax;
        gfortran_st_read_done ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8070820 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8067f38 */
#include <stdint.h>
 
int32_t dbg_rwwf (void) {
    int32_t var_578h;
    int32_t var_574h;
    int32_t var_570h;
    int32_t var_56ch;
    int32_t var_568h;
    int32_t var_564h;
    int32_t var_560h;
    int32_t var_55ch;
    int32_t var_558h;
    int32_t var_554h;
    int32_t var_550h;
    int32_t var_54ch;
    int32_t var_540h;
    int32_t var_53ch;
    char * var_538h;
    int32_t var_534h;
    int32_t var_528h;
    int32_t var_514h;
    int32_t var_510h;
    int32_t var_50ch;
    int32_t var_500h;
    int32_t var_4fch;
    int32_t var_3ech;
    int32_t var_3e8h;
    char * var_3e4h;
    int32_t var_3e0h;
    int32_t var_3dch;
    int32_t var_3d8h;
    int32_t var_3d4h;
    int32_t var_3d0h;
    int32_t var_3cch;
    int32_t var_3c0h;
    char * var_3bch;
    int32_t var_3b8h;
    int32_t var_3ach;
    int32_t var_3a8h;
    int32_t var_298h;
    int32_t var_294h;
    int32_t var_290h;
    int32_t var_28ch;
    int32_t var_288h;
    int32_t var_284h;
    int32_t var_280h;
    int32_t var_27ch;
    int32_t var_278h;
    int32_t var_274h;
    int32_t var_270h;
    int32_t var_26ch;
    int32_t var_268h;
    int32_t var_264h;
    int32_t var_260h;
    integer(kind=4) unitwf;
    real(kind=8)[3] tsec;
    integer(kind=4) nspinor1;
    integer(kind=4) nrec;
    integer(kind=4) npwso1;
    integer(kind=4) npw1;
    int32_t var_238h;
    integer(kind=4) ios;
    integer(kind=4) ubound.0;
    integer(kind=4) ubound.2;
    integer(kind=4) iband;
    integer(kind=4) indxx;
    integer(kind=4) ipw;
    integer(kind=4) ubound.4;
    integer(kind=4) nband1;
    integer(kind=4) ncid_hdr;
    integer(kind=4) ubound.6;
    integer(kind=4) use_f90;
    real(kind=8)[3][5] cg;
    real(kind=8)[5] eigen;
    integer(kind=4) formeig;
    integer(kind=4) headform;
    integer(kind=4) icg;
    integer(kind=4) ikpt;
    integer(kind=4) isppol;
    integer(kind=4)[4][4] kg_k;
    integer(kind=4) mband;
    integer(kind=4) mcg;
    integer(kind=4) nband;
    integer(kind=4) nband_disk;
    integer(kind=4) npw;
    integer(kind=4) nspinor;
    real(kind=8)[4] occ;
    integer(kind=4) option;
    integer(kind=4) optkg;
    integer(kind=4) tim_rwwf;
    wffile_type wff;
    char * var_4h;
    char * var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_sp_1ch;
    int32_t var_sp_20h;
    int32_t var_sp_24h;
    int32_t var_28h;
    int32_t var_sp_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    int32_t var_sp_3ch;
    int32_t var_sp_40h;
    int32_t var_44h;
    /* void rwwf(real(kind=8)[3][5] cg,real(kind=8)[5] eigen,integer(kind=4) formeig,integer(kind=4) headform,integer(kind=4) icg,integer(kind=4) ikpt,integer(kind=4) isppol,integer(kind=4)[4][4] kg_k,integer(kind=4) mband,integer(kind=4) mcg,integer(kind=4) nband,integer(kind=4) nband_disk,integer(kind=4) npw,integer(kind=4) nspinor,real(kind=8)[4] occ,integer(kind=4) option,integer(kind=4) optkg,integer(kind=4) tim_rwwf,wffile_type wff); */
    eax = *((ebp + 0x48));
    edx = *(eax);
    eax = *((ebp + 0x38));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x2c)) = eax;
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x2c));
    eax += eax;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0x28));
    eax = *(eax);
    edx = eax + eax;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((esp + 4)) = eax;
    *(esp) = edx;
    eax = gfortran_pow_i4_i4 ();
    edx = eax;
    eax = *((ebp + 0x28));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x3c));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x550)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x54c)) = ebx;
    eax = *((ebp - 0x550));
    edx = *((ebp - 0x54c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x558)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x554)) = ebx;
    eax = *((ebp - 0x558));
    edx = *((ebp - 0x554));
    eax = *((ebp + 0x2c));
    eax = *(eax);
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0x40));
    edx = eax + eax;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x560)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x55c)) = ebx;
    eax = *((ebp - 0x560));
    edx = *((ebp - 0x55c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x568)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x564)) = ebx;
    eax = *((ebp - 0x568));
    edx = *((ebp - 0x564));
    eax = *((ebp + 0x28));
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x20));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x570)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x56c)) = ebx;
    eax = *((ebp - 0x570));
    edx = *((ebp - 0x56c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x578)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x574)) = ebx;
    eax = *((ebp - 0x578));
    edx = *((ebp - 0x574));
    eax = *((ebp + 0x4c));
    eax = *(eax);
    eax += 0x10e;
    *((ebp - 0x260)) = eax;
    eax = ebp - 0x258;
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x8072f78;
    eax = ebp - 0x260;
    *(esp) = eax;
    timab_ ();
    eax = *((ebp + 0x30));
    edx = *(eax);
    eax = *((ebp + 0x28));
    eax = *(eax);
    if (edx > eax) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == -1) {
            goto label_0;
        }
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0xb4;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS";
        *((ebp - 0x3b8)) = 0x17;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x1e;
        *((esp + 4)) = 0x8072faa;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x8072fc8;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x30));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0xc;
        *((esp + 4)) = 0x8072fd9;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x28));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
label_0:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax != 0) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        if (eax == 1) {
            goto label_1;
        }
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0xbe;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(a,a,a,a,a,a,i5,a)";
        *((ebp - 0x3b8)) = 0x12;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "  The argument formeig should be 0 or 1.  However, formeig=";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x13;
        *((esp + 4)) = 0x807302c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
label_1:
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax != 1) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 2) {
            goto label_2;
        }
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 3) {
            goto label_2;
        }
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 4) {
            goto label_2;
        }
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == -1) {
            goto label_2;
        }
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 0xfffffffe) {
            goto label_2;
        }
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 0xfffffffc) {
            goto label_2;
        }
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0xc9;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(a,a,a,a,a,a,i5,a)";
        *((ebp - 0x3b8)) = 0x12;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x32;
        *((esp + 4)) = "  The argument option should be 1, 2, 3, -1 or -2.  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x12;
        *((esp + 4)) = 0x8073072;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x44));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
label_2:
    eax = *((ebp + 0x50));
    eax = *(eax);
    *((ebp - 0x25c)) = eax;
    eax = *((ebp - 0x25c));
    *((ebp - 0x24)) = eax;
    *((ebp - 0x1c)) = 0;
    eax = *((ebp + 0x50));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x50));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_3;
        }
        eax = *((ebp + 0x50));
        edx = *((eax + 0x94));
        eax = *((ebp + 0x50));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_3;
        }
    }
    *((ebp - 0x1c)) = 1;
label_3:
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax == 2) {
        goto label_4;
    }
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax == 4) {
        goto label_4;
    }
    eax = *((ebp + 0x14));
    eax = *(eax);
    if (eax <= 0x27) {
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (eax != 0) {
            goto label_5;
        }
    }
    eax = *((ebp + 0x50));
    *((esp + 0x14)) = eax;
    eax = ebp - 0x248;
    *((esp + 0x10)) = eax;
    eax = ebp - 0x23c;
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x34));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x1c));
    *((esp + 4)) = eax;
    eax = ebp - 0x44;
    *(esp) = eax;
    wffreadnpwrec_ ();
    edx = *((ebp - 0x23c));
    eax = *((ebp - 0x248));
    eax *= edx;
    *((ebp - 0x240)) = eax;
    eax = *((ebp - 0x44));
    if (eax != 0) {
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0x109;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = 0x8073084;
        *((ebp - 0x3b8)) = 0x1d;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x80730a1;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x34;
        *((esp + 4)) = 0x80730d8;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x25c;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x807310c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x44;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x22;
        *((esp + 4)) = ". Your file is likely not correct.";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x23;
        *((esp + 4)) = "  Action: check your input wf file.";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
        goto label_6;
label_5:
        if (*((ebp - 0x1c)) == 1) {
            *((ebp - 0x3e4)) = "rwwf.F90";
            *((ebp - 0x3e0)) = 0x110;
            *((ebp - 0x44)) = 0;
            eax = ebp - 0x44;
            *((ebp - 0x3d4)) = eax;
            *((ebp - 0x3ec)) = 0x20;
            eax = *((ebp - 0x25c));
            *((ebp - 0x3e8)) = eax;
            eax = ebp - 0x3ec;
            *(esp) = eax;
            gfortran_st_read ();
            *((esp + 8)) = 4;
            eax = ebp - 0x240;
            *((esp + 4)) = eax;
            eax = ebp - 0x3ec;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 4;
            eax = *((ebp + 0x34));
            *((esp + 4)) = eax;
            eax = ebp - 0x3ec;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = ebp - 0x3ec;
            *(esp) = eax;
            gfortran_st_read_done ();
        }
        eax = *((ebp - 0x44));
        if (eax == 0) {
            goto label_6;
        }
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0x11f;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = 0x8073084;
        *((ebp - 0x3b8)) = 0x1d;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x80730a1;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2c;
        *((esp + 4)) = "  the (npw,nband) record of a wf file, unit=  Reading option of rwwf. One should have npw=npw1  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit=";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x25c;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x807310c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x44;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x22;
        *((esp + 4)) = ". Your file is likely not correct.";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x23;
        *((esp + 4)) = "  Action: check your input wf file.";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    } else {
    }
label_6:
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax != 1) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != 0xfffffffe) {
            goto label_7;
        }
    }
    eax = *((ebp + 0x14));
    eax = *(eax);
    if (eax <= 0x27) {
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (eax != 0) {
            goto label_8;
        }
    }
    eax = *((ebp + 0x38));
    edx = *(eax);
    eax = *((ebp - 0x23c));
    if (edx != eax) {
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0x133;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS";
        *((ebp - 0x3b8)) = 0x17;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x32;
        *((esp + 4)) = 0x8073190;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xf;
        *((esp + 4)) = 0x80731c2;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x38));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0xb;
        *((esp + 4)) = 0x80731d1;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x23c;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
    eax = *((ebp + 0x3c));
    edx = *(eax);
    eax = *((ebp - 0x248));
    if (edx != eax) {
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0x13b;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS";
        *((ebp - 0x3b8)) = 0x17;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3a;
        *((esp + 4)) = 0x80731dc;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x13;
        *((esp + 4)) = 0x8073216;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x3c));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0xf;
        *((esp + 4)) = 0x8073229;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x248;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
        goto label_7;
label_8:
        eax = *((ebp + 0x38));
        edx = *(eax);
        eax = *((ebp + 0x3c));
        eax = *(eax);
        edx *= eax;
        eax = *((ebp - 0x240));
        if (edx == eax) {
            goto label_7;
        }
        *((ebp - 0x3e4)) = "rwwf.F90";
        *((ebp - 0x3e0)) = 0x146;
        eax = ebp - 0x238;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS";
        *((ebp - 0x3b8)) = 0x17;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x36;
        *((esp + 4)) = 0x8073238;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x807326e;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0x38));
        edx = *(eax);
        eax = *((ebp + 0x3c));
        eax = *(eax);
        eax *= edx;
        *((ebp - 0x264)) = eax;
        *((esp + 8)) = 4;
        eax = ebp - 0x264;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x807327f;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x240;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    } else {
    }
label_7:
    eax = *((ebp + 0x14));
    eax = *(eax);
    if (eax <= 0x27) {
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (eax != 0) {
            goto label_9;
        }
    }
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax != 1) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 0xfffffffe) {
            goto label_10;
        }
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != 3) {
            goto label_11;
        }
    }
label_10:
    eax = *((ebp + 0x48));
    eax = *(eax);
    if (eax != 0) {
        if (*((ebp - 0x1c)) == 1) {
            *((ebp - 0x538)) = "rwwf.F90";
            *((ebp - 0x534)) = 0x155;
            *((ebp - 0x44)) = 0;
            eax = ebp - 0x44;
            *((ebp - 0x528)) = eax;
            *((ebp - 0x540)) = 0x20;
            eax = *((ebp - 0x25c));
            *((ebp - 0x53c)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_read ();
            eax = *((ebp + 0x38));
            eax = *(eax);
            *((ebp - 0x3e4)) = 0x10a;
            *((ebp - 0x3dc)) = 1;
            *((ebp - 0x3d8)) = 3;
            *((ebp - 0x3e0)) = 1;
            *((ebp - 0x3d0)) = 1;
            *((ebp - 0x3cc)) = eax;
            *((ebp - 0x3d4)) = 3;
            eax = *((ebp + 0x24));
            *((ebp - 0x3ec)) = eax;
            *((ebp - 0x3e8)) = 0xfffffffc;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 4;
            eax = ebp - 0x3ec;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_read_done ();
        } else {
label_11:
            eax = *((ebp + 0x50));
            *((esp + 8)) = eax;
            *((esp + 4)) = 0x8072f78;
            eax = ebp - 0x44;
            *(esp) = eax;
            wffreadskiprec_ ();
        } else {
        }
    }
    eax = *((ebp - 0x44));
    if (eax != 0) {
        *((ebp - 0x538)) = "rwwf.F90";
        *((ebp - 0x534)) = 0x17e;
        eax = ebp - 0x238;
        *((ebp - 0x500)) = eax;
        *((ebp - 0x4fc)) = 0x1f4;
        *((ebp - 0x514)) = 0;
        *((ebp - 0x53c)) = 0;
        *((ebp - 0x510)) = 0x8073084;
        *((ebp - 0x50c)) = 0x1d;
        *((ebp - 0x540)) = 0x5000;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x80730a1;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=";
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x24;
        *((esp + 4)) = 0x807328c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x25c;
        *((esp + 4)) = eax;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x807310c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x44;
        *((esp + 4)) = eax;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x22;
        *((esp + 4)) = ". Your file is likely not correct.";
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x23;
        *((esp + 4)) = "  Action: check your input wf file.";
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
label_9:
    eax = *((ebp + 0x30));
    eax = *(eax);
    edx = *((ebp + 0x34));
    edx = *(edx);
    if (edx < eax) {
        eax = edx;
    }
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 0) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != 1) {
            eax = *((ebp + 0x44));
            eax = *(eax);
            if (eax == 3) {
                goto label_12;
            }
            eax = *((ebp + 0x44));
            eax = *(eax);
            if (eax != 0xfffffffc) {
                goto label_13;
            }
        }
label_12:
        if (*((ebp - 0x1c)) == 1) {
            *((ebp - 0x538)) = "rwwf.F90";
            *((ebp - 0x534)) = 0x18c;
            *((ebp - 0x44)) = 0;
            eax = ebp - 0x44;
            *((ebp - 0x528)) = eax;
            *((ebp - 0x540)) = 0x20;
            eax = *((ebp - 0x25c));
            *((ebp - 0x53c)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_read ();
            eax = *((ebp - 0x28));
            *((ebp - 0x274)) = 0x219;
            *((ebp - 0x26c)) = 1;
            *((ebp - 0x268)) = eax;
            *((ebp - 0x270)) = 1;
            eax = *((ebp + 0xc));
            *((ebp - 0x27c)) = eax;
            *((ebp - 0x278)) = 0xffffffff;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x27c;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_read_done ();
            goto label_14;
label_13:
            eax = *((ebp + 0x50));
            *((esp + 8)) = eax;
            *((esp + 4)) = 0x8072f78;
            eax = ebp - 0x44;
            *(esp) = eax;
            wffreadskiprec_ ();
        } else {
        }
label_14:
        eax = *((ebp - 0x44));
        if (eax == 0) {
            goto label_15;
        }
        *((ebp - 0x538)) = "rwwf.F90";
        *((ebp - 0x534)) = 0x1a4;
        eax = ebp - 0x238;
        *((ebp - 0x500)) = eax;
        *((ebp - 0x4fc)) = 0x1f4;
        *((ebp - 0x514)) = 0;
        *((ebp - 0x53c)) = 0;
        *((ebp - 0x510)) = 0x8073084;
        *((ebp - 0x50c)) = 0x1d;
        *((ebp - 0x540)) = 0x5000;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x80730a1;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=";
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2a;
        *((esp + 4)) = 0x80732b0;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x25c;
        *((esp + 4)) = eax;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x807310c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x44;
        *((esp + 4)) = eax;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x22;
        *((esp + 4)) = ". Your file is likely not correct.";
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x23;
        *((esp + 4)) = "  Action: check your input wf file.";
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x540;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
label_15:
    *((ebp - 0x34)) = 0;
    eax = *((ebp + 0x30));
    eax = *(eax);
    edx = *((ebp + 0x34));
    edx = *(edx);
    if (edx < eax) {
        eax = edx;
    }
    *((ebp - 0x28)) = eax;
    if (*((ebp - 0x28)) <= 0) {
        goto label_16;
    }
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax == -1) {
        goto label_16;
    }
    ebx = *((ebp - 0x28));
    *((ebp - 0x38)) = 1;
    if (*((ebp - 0x38)) > ebx) {
        goto label_16;
    }
    while (eax == 0) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        if (eax == 1) {
            eax = *((ebp + 0x44));
            eax = *(eax);
            if (eax != 1) {
                eax = *((ebp + 0x44));
                eax = *(eax);
                if (eax == 3) {
                    goto label_17;
                }
                eax = *((ebp + 0x44));
                eax = *(eax);
                if (eax != 0xfffffffc) {
                    goto label_18;
                }
            }
label_17:
            if (*((ebp - 0x1c)) == 1) {
                *((ebp - 0x538)) = "rwwf.F90";
                *((ebp - 0x534)) = 0x1db;
                *((ebp - 0x44)) = 0;
                eax = ebp - 0x44;
                *((ebp - 0x528)) = eax;
                *((ebp - 0x540)) = 0x20;
                eax = *((ebp - 0x25c));
                *((ebp - 0x53c)) = eax;
                eax = ebp - 0x540;
                *(esp) = eax;
                gfortran_st_read ();
                eax = *((ebp - 0x34));
                eax++;
                edx = *((ebp - 0x28));
                edx += edx;
                edx += *((ebp - 0x34));
                *((ebp - 0x28c)) = 0x219;
                *((ebp - 0x284)) = 1;
                ecx = 1;
                ecx -= eax;
                edx = ecx + edx;
                *((ebp - 0x280)) = edx;
                *((ebp - 0x288)) = 1;
                edx = eax - 1;
                edx <<= 3;
                edx += *((ebp + 0xc));
                *((ebp - 0x294)) = edx;
                eax = -eax;
                *((ebp - 0x290)) = eax;
                *((esp + 0xc)) = 0;
                *((esp + 8)) = 8;
                eax = ebp - 0x294;
                *((esp + 4)) = eax;
                eax = ebp - 0x540;
                *(esp) = eax;
                gfortran_transfer_array ();
                eax = ebp - 0x540;
                *(esp) = eax;
                gfortran_st_read_done ();
            }
            eax = *((ebp - 0x28));
            eax += eax;
            *((ebp - 0x34)) += eax;
            goto label_19;
label_18:
            eax = *((ebp + 0x50));
            *((esp + 8)) = eax;
            *((esp + 4)) = 0x8072f78;
            eax = ebp - 0x44;
            *(esp) = eax;
            wffreadskiprec_ ();
label_19:
            eax = *((ebp - 0x44));
            if (eax == 0) {
                goto label_20;
            }
            *((ebp - 0x538)) = "rwwf.F90";
            *((ebp - 0x534)) = 0x1ee;
            eax = ebp - 0x238;
            *((ebp - 0x500)) = eax;
            *((ebp - 0x4fc)) = 0x1f4;
            *((ebp - 0x514)) = 0;
            *((ebp - 0x53c)) = 0;
            *((ebp - 0x510)) = 0x8073084;
            *((ebp - 0x50c)) = 0x1d;
            *((ebp - 0x540)) = 0x5000;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0xe;
            *((esp + 4)) = 0x80730a1;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x28;
            *((esp + 4)) = "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x2c;
            *((esp + 4)) = "  a RF eigenvalue record of a wf file, unit=  a RF wf record of a wf file, unit=";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            eax = ebp - 0x25c;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0xe;
            *((esp + 4)) = 0x807310c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            eax = ebp - 0x44;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 0x22;
            *((esp + 4)) = ". Your file is likely not correct.";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x23;
            *((esp + 4)) = "  Action: check your input wf file.";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((esp + 0x10)) = 4;
            *((esp + 0xc)) = 0x1f4;
            *((esp + 8)) = 0x8072fe6;
            eax = ebp - 0x238;
            *((esp + 4)) = eax;
            wrtout_ (0x8072fec);
            *((esp + 4)) = 4;
            *(esp) = 0x8072fe6;
            leave_new_ ();
        }
label_20:
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != 1) {
            eax = *((ebp + 0x44));
            eax = *(eax);
            if (eax != 0xfffffffe) {
                goto label_21;
            }
        }
        eax = *((ebp - 0x38));
        edx = eax - 1;
        eax = *((ebp - 0x240));
        edx *= eax;
        eax = *((ebp + 0x18));
        eax = *(eax);
        eax = edx + eax;
        *((ebp - 0x30)) = eax;
        if (*((ebp - 0x1c)) == 1) {
            *((ebp - 0x538)) = "rwwf.F90";
            *((ebp - 0x534)) = 0x1fa;
            *((ebp - 0x44)) = 0;
            eax = ebp - 0x44;
            *((ebp - 0x528)) = eax;
            *((ebp - 0x540)) = 0x20;
            eax = *((ebp - 0x25c));
            *((ebp - 0x53c)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_read ();
            eax = *((ebp - 0x30));
            eax++;
            edx = *((ebp - 0x240));
            edx += *((ebp - 0x30));
            *((ebp - 0x3e4)) = 0x21a;
            *((ebp - 0x3dc)) = 1;
            *((ebp - 0x3d8)) = 2;
            *((ebp - 0x3e0)) = 1;
            *((ebp - 0x3d0)) = 1;
            ecx = 1;
            ecx -= eax;
            edx = ecx + edx;
            *((ebp - 0x3cc)) = edx;
            *((ebp - 0x3d4)) = 2;
            edx = eax - 1;
            edx += edx;
            edx <<= 3;
            edx += *((ebp + 8));
            *((ebp - 0x3ec)) = edx;
            edx = 1;
            ecx = 1;
            ecx -= eax;
            eax = ecx;
            eax += eax;
            eax -= 3;
            *((ebp - 0x3e8)) = eax;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x3ec;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_read_done ();
            goto label_22;
label_21:
            eax = *((ebp + 0x44));
            eax = *(eax);
            if (eax == 0xfffffffc) {
                goto label_22;
            }
            eax = *((ebp + 0x50));
            *((esp + 8)) = eax;
            *((esp + 4)) = 0x8072f78;
            eax = ebp - 0x44;
            *(esp) = eax;
            wffreadskiprec_ ();
        } else {
        }
label_22:
        eax = *((ebp - 0x44));
        if (eax != 0) {
            *((ebp - 0x538)) = "rwwf.F90";
            *((ebp - 0x534)) = 0x20d;
            eax = ebp - 0x238;
            *((ebp - 0x500)) = eax;
            *((ebp - 0x4fc)) = 0x1f4;
            *((ebp - 0x514)) = 0;
            *((ebp - 0x53c)) = 0;
            *((ebp - 0x510)) = 0x8073084;
            *((ebp - 0x50c)) = 0x1d;
            *((ebp - 0x540)) = 0x5000;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0xe;
            *((esp + 4)) = 0x80730a1;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x28;
            *((esp + 4)) = "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x24;
            *((esp + 4)) = 0x8073308;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            eax = ebp - 0x25c;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0xe;
            *((esp + 4)) = 0x807310c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            eax = ebp - 0x44;
            *((esp + 4)) = eax;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 0x22;
            *((esp + 4)) = ". Your file is likely not correct.";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8072f9c;
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x23;
            *((esp + 4)) = "  Action: check your input wf file.";
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0x540;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((esp + 0x10)) = 4;
            *((esp + 0xc)) = 0x1f4;
            *((esp + 8)) = 0x8072fe6;
            eax = ebp - 0x238;
            *((esp + 4)) = eax;
            wrtout_ (0x8072fec);
            *((esp + 4)) = 4;
            *(esp) = 0x8072fe6;
            leave_new_ ();
        }
        al = (*((ebp - 0x38)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x38))++;
    }
label_16:
    eax = *((ebp + 0x30));
    edx = *(eax);
    eax = *((ebp + 0x34));
    eax = *(eax);
    if (edx >= eax) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != -1) {
            goto label_23;
        }
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    ecx = eax + 1;
    eax = *((ebp + 0x34));
    edx = *(eax);
    eax = *((ebp + 0x30));
    eax = *(eax);
    ebx = edx;
    ebx -= eax;
    eax = ebx;
    eax *= ecx;
    *((ebp - 0x244)) = eax;
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax == -1) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        edx = eax + 1;
        eax = *((ebp + 0x34));
        eax = *(eax);
        eax *= edx;
        *((ebp - 0x244)) = eax;
    }
    eax = *((ebp + 0x50));
    *((esp + 8)) = eax;
    eax = ebp - 0x244;
    *((esp + 4)) = eax;
    eax = ebp - 0x44;
    *(esp) = eax;
    wffreadskiprec_ ();
    goto label_24;
label_4:
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax != 2) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != 4) {
            goto label_24;
        }
    }
    eax = *((ebp + 0x50));
    *((esp + 0x44)) = eax;
    eax = *((ebp + 0x48));
    *((esp + 0x40)) = eax;
    eax = *((ebp + 0x44));
    *((esp + 0x3c)) = eax;
    eax = *((ebp + 0x40));
    *((esp + 0x38)) = eax;
    eax = *((ebp + 0x3c));
    *((esp + 0x34)) = eax;
    eax = *((ebp + 0x38));
    *((esp + 0x30)) = eax;
    eax = *((ebp + 0x34));
    *((esp + 0x2c)) = eax;
    eax = *((ebp + 0x30));
    *((esp + 0x28)) = eax;
    eax = *((ebp + 0x2c));
    *((esp + 0x24)) = eax;
    eax = *((ebp + 0x28));
    *((esp + 0x20)) = eax;
    eax = *((ebp + 0x24));
    *((esp + 0x1c)) = eax;
    eax = *((ebp + 0x20));
    *((esp + 0x18)) = eax;
    eax = *((ebp + 0x1c));
    *((esp + 0x14)) = eax;
    eax = *((ebp + 0x18));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    writewf_ ();
    goto label_24;
label_23:
label_24:
    eax = *((ebp + 0x4c));
    eax = *(eax);
    eax += 0x10e;
    *((ebp - 0x298)) = eax;
    eax = ebp - 0x258;
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x807332c;
    eax = ebp - 0x298;
    *(esp) = eax;
    timab_ ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806a30d */
#include <stdint.h>
 
int32_t dbg_writewf (void) {
    int32_t var_538h;
    int32_t var_534h;
    int32_t var_530h;
    int32_t var_52ch;
    int32_t var_528h;
    int32_t var_524h;
    int32_t var_520h;
    int32_t var_51ch;
    int32_t var_518h;
    int32_t var_514h;
    int32_t var_510h;
    int32_t var_50ch;
    int32_t var_500h;
    int32_t var_4fch;
    char * var_4f8h;
    int32_t var_4f4h;
    int32_t var_3ach;
    int32_t var_3a8h;
    char * var_3a4h;
    int32_t var_3a0h;
    int32_t var_39ch;
    int32_t var_398h;
    int32_t var_394h;
    int32_t var_390h;
    int32_t var_38ch;
    int32_t var_380h;
    char * var_37ch;
    int32_t var_378h;
    int32_t var_36ch;
    int32_t var_368h;
    int32_t var_258h;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ch;
    int32_t var_248h;
    int32_t var_244h;
    int32_t var_240h;
    integer(kind=4) ios;
    integer(kind=4) ubound.61;
    integer(kind=4) ubound.63;
    integer(kind=4) iband;
    integer(kind=4) ii;
    integer(kind=4) ipw;
    integer(kind=4) ubound.65;
    integer(kind=4) nband2;
    integer(kind=4) ncid_hdr;
    integer(kind=4) npwso;
    integer(kind=4) ubound.67;
    integer(kind=4) unitwf;
    integer(kind=4) use_f90;
    real(kind=8)[3][5] cg;
    real(kind=8)[5] eigen;
    integer(kind=4) formeig;
    integer(kind=4) headform;
    integer(kind=4) icg;
    integer(kind=4) ikpt;
    integer(kind=4) isppol;
    integer(kind=4)[4][4] kg_k;
    integer(kind=4) mband;
    integer(kind=4) mcg;
    integer(kind=4) nband;
    integer(kind=4) nband_disk;
    integer(kind=4) npw;
    integer(kind=4) nspinor;
    real(kind=8)[4] occ;
    integer(kind=4) option;
    integer(kind=4) optkg;
    wffile_type wff;
    char * var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void writewf(real(kind=8)[3][5] cg,real(kind=8)[5] eigen,integer(kind=4) formeig,integer(kind=4) headform,integer(kind=4) icg,integer(kind=4) ikpt,integer(kind=4) isppol,integer(kind=4)[4][4] kg_k,integer(kind=4) mband,integer(kind=4) mcg,integer(kind=4) nband,integer(kind=4) nband_disk,integer(kind=4) npw,integer(kind=4) nspinor,real(kind=8)[4] occ,integer(kind=4) option,integer(kind=4) optkg,wffile_type wff); */
    eax = *((ebp + 0x48));
    edx = *(eax);
    eax = *((ebp + 0x38));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x34)) = eax;
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x34));
    eax += eax;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0x28));
    eax = *(eax);
    edx = eax + eax;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((esp + 4)) = eax;
    *(esp) = edx;
    eax = gfortran_pow_i4_i4 ();
    edx = eax;
    eax = *((ebp + 0x28));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0x44));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x510)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x50c)) = ecx;
    eax = *((ebp - 0x510));
    edx = *((ebp - 0x50c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x518)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x514)) = ecx;
    eax = *((ebp - 0x518));
    edx = *((ebp - 0x514));
    eax = *((ebp + 0x28));
    eax = *(eax);
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x24));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x520)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x51c)) = ecx;
    eax = *((ebp - 0x520));
    edx = *((ebp - 0x51c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x528)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x524)) = ecx;
    eax = *((ebp - 0x528));
    edx = *((ebp - 0x524));
    eax = *((ebp + 0x2c));
    eax = *(eax);
    *((ebp - 0x48)) = eax;
    eax = *((ebp - 0x48));
    eax += eax;
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x530)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x52c)) = ecx;
    eax = *((ebp - 0x530));
    edx = *((ebp - 0x52c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x538)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x534)) = ecx;
    eax = *((ebp - 0x538));
    edx = *((ebp - 0x534));
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax != 2) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax == 4) {
            goto label_0;
        }
        *((ebp - 0x3a4)) = "rwwf.F90";
        *((ebp - 0x3a0)) = 0x2d6;
        eax = ebp - 0x240;
        *((ebp - 0x36c)) = eax;
        *((ebp - 0x368)) = 0x1f4;
        *((ebp - 0x380)) = 0;
        *((ebp - 0x3a8)) = 0;
        *((ebp - 0x37c)) = "(a,a,a,a,a,a,i5,a)";
        *((ebp - 0x378)) = 0x12;
        *((ebp - 0x3ac)) = 0x5000;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x10;
        *((esp + 4)) = " writewf : BUG -  The argument option should be 2 or 4.";
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x27;
        *((esp + 4)) = 0x8073340;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x12;
        *((esp + 4)) = 0x8073072;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x44));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x240;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
label_0:
    eax = *((ebp + 0x4c));
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x20));
    *((ebp - 0x2c)) = eax;
    *((ebp - 0x1c)) = 0;
    eax = *((ebp + 0x4c));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x4c));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_1;
        }
        eax = *((ebp + 0x4c));
        edx = *((eax + 0x94));
        eax = *((ebp + 0x4c));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_1;
        }
    }
    *((ebp - 0x1c)) = 1;
label_1:
    eax = *((ebp + 0x30));
    edx = *(eax);
    eax = *((ebp + 0x34));
    eax = *(eax);
    if (edx < eax) {
        *((ebp - 0x3a4)) = "rwwf.F90";
        *((ebp - 0x3a0)) = 0x2e8;
        eax = ebp - 0x240;
        *((ebp - 0x36c)) = eax;
        *((ebp - 0x368)) = 0x1f4;
        *((ebp - 0x380)) = 0;
        *((ebp - 0x3a8)) = 0;
        *((ebp - 0x37c)) = "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS";
        *((ebp - 0x378)) = 0x17;
        *((ebp - 0x3ac)) = 0x5000;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x8072f9d;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3b;
        *((esp + 4)) = "  Writing option of rwwf. One should have nband<=nband_disk, and nband_disk=wffclose.F90";
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072f9c;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x8072fc8;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x30));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x80733a3;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x34));
        *((esp + 4)) = eax;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072fe5;
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ac;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8072fe6;
        eax = ebp - 0x240;
        *((esp + 4)) = eax;
        wrtout_ (0x8072fec);
        *((esp + 4)) = 4;
        *(esp) = 0x8072fe6;
        leave_new_ ();
    }
    eax = *((ebp + 0x4c));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x3c));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x38));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0x4c;
    *(esp) = eax;
    wffwritenpwrec_ ();
    eax = *((ebp + 0x48));
    eax = *(eax);
    if (eax != 0) {
        eax = *((ebp + 0x44));
        eax = *(eax);
        if (eax != 4) {
            if (*((ebp - 0x1c)) != 1) {
                goto label_2;
            }
            *((ebp - 0x4f8)) = "rwwf.F90";
            *((ebp - 0x4f4)) = 0x2f8;
            *((ebp - 0x500)) = 0;
            eax = *((ebp - 0x20));
            *((ebp - 0x4fc)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write ();
            eax = *((ebp + 0x48));
            edx = *(eax);
            eax = *((ebp + 0x38));
            eax = *(eax);
            eax *= edx;
            *((ebp - 0x3a4)) = 0x10a;
            *((ebp - 0x39c)) = 1;
            *((ebp - 0x398)) = 3;
            *((ebp - 0x3a0)) = 1;
            *((ebp - 0x390)) = 1;
            *((ebp - 0x38c)) = eax;
            *((ebp - 0x394)) = 3;
            eax = *((ebp + 0x24));
            *((ebp - 0x3ac)) = eax;
            *((ebp - 0x3a8)) = 0xfffffffc;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 4;
            eax = ebp - 0x3ac;
            *((esp + 4)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write_done ();
        }
    } else {
        if (*((ebp - 0x1c)) != 1) {
            goto label_3;
        }
        *((ebp - 0x4f8)) = "rwwf.F90";
        *((ebp - 0x4f4)) = 0x31f;
        *((ebp - 0x500)) = 0;
        eax = *((ebp - 0x20));
        *((ebp - 0x4fc)) = eax;
        eax = ebp - 0x500;
        *(esp) = eax;
        gfortran_st_write ();
        eax = ebp - 0x500;
        *(esp) = eax;
        gfortran_st_write_done ();
        goto label_3;
label_2:
    }
label_3:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax != 0) {
        goto label_4;
    }
    if (*((ebp - 0x1c)) != 1) {
        goto label_5;
    }
    *((ebp - 0x4f8)) = "rwwf.F90";
    *((ebp - 0x4f4)) = 0x36d;
    *((ebp - 0x500)) = 0;
    eax = *((ebp - 0x20));
    *((ebp - 0x4fc)) = eax;
    eax = ebp - 0x500;
    *(esp) = eax;
    gfortran_st_write ();
    eax = *((ebp + 0x34));
    ebx = *(eax);
    *((ebp - 0x40)) = 1;
    if (*((ebp - 0x40)) > ebx) {
        goto label_6;
    }
    while (eax == 0) {
        eax = *((ebp - 0x40));
        eax--;
        eax <<= 3;
        eax += *((ebp + 0xc));
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x500;
        *(esp) = eax;
        gfortran_transfer_real ();
        al = (*((ebp - 0x40)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x40))++;
    }
label_6:
    eax = *((ebp + 0x34));
    ebx = *(eax);
    *((ebp - 0x40)) = 1;
    if (*((ebp - 0x40)) > ebx) {
        goto label_7;
    }
    while (eax == 0) {
        eax = *((ebp - 0x40));
        eax--;
        eax <<= 3;
        eax += *((ebp + 0x40));
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x500;
        *(esp) = eax;
        gfortran_transfer_real ();
        al = (*((ebp - 0x40)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x40))++;
    }
label_7:
    eax = ebp - 0x500;
    *(esp) = eax;
    gfortran_st_write_done ();
label_5:
    eax = *((ebp + 0x44));
    eax = *(eax);
    if (eax == 4) {
        goto label_8;
    }
    eax = *((ebp + 0x38));
    edx = *(eax);
    eax = *((ebp + 0x3c));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x34));
    ebx = *(eax);
    *((ebp - 0x40)) = 1;
    if (*((ebp - 0x40)) > ebx) {
        goto label_8;
    }
    do {
        eax = *((ebp - 0x40));
        eax--;
        edx = eax;
        edx *= *((ebp - 0x28));
        eax = *((ebp + 0x18));
        eax = *(eax);
        eax = edx + eax;
        *((ebp - 0x38)) = eax;
        if (*((ebp - 0x1c)) == 1) {
            *((ebp - 0x4f8)) = "rwwf.F90";
            *((ebp - 0x4f4)) = 0x37c;
            *((ebp - 0x500)) = 0;
            eax = *((ebp - 0x20));
            *((ebp - 0x4fc)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write ();
            eax = *((ebp - 0x38));
            eax++;
            edx = *((ebp - 0x28));
            ecx = *((ebp - 0x38));
            ecx += edx;
            *((ebp - 0x3a4)) = 0x21a;
            *((ebp - 0x39c)) = 1;
            *((ebp - 0x398)) = 2;
            *((ebp - 0x3a0)) = 1;
            *((ebp - 0x390)) = 1;
            edx = 1;
            edx -= eax;
            edx += ecx;
            *((ebp - 0x38c)) = edx;
            *((ebp - 0x394)) = 2;
            edx = eax - 1;
            edx += edx;
            edx <<= 3;
            edx += *((ebp + 8));
            *((ebp - 0x3ac)) = edx;
            edx = 1;
            ecx = 1;
            ecx -= eax;
            eax = ecx;
            eax += eax;
            eax -= 3;
            *((ebp - 0x3a8)) = eax;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x3ac;
            *((esp + 4)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write_done ();
        }
        al = (*((ebp - 0x40)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x40))++;
        if (eax != 0) {
            goto label_8;
        }
    } while (1);
label_4:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax != 1) {
        goto label_8;
    }
    eax = *((ebp + 0x38));
    edx = *(eax);
    eax = *((ebp + 0x3c));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x34));
    eax = *(eax);
    eax += eax;
    *((ebp - 0x30)) = eax;
    eax = *((ebp + 0x34));
    ebx = *(eax);
    *((ebp - 0x40)) = 1;
    if (*((ebp - 0x40)) > ebx) {
        goto label_8;
    }
    while (eax == 0) {
        eax = *((ebp - 0x40));
        eax--;
        edx = eax;
        edx *= *((ebp - 0x28));
        eax = *((ebp + 0x18));
        eax = *(eax);
        eax = edx + eax;
        *((ebp - 0x38)) = eax;
        eax = *((ebp - 0x40));
        eax--;
        eax *= *((ebp - 0x30));
        *((ebp - 0x3c)) = eax;
        if (*((ebp - 0x1c)) == 1) {
            *((ebp - 0x4f8)) = "rwwf.F90";
            *((ebp - 0x4f4)) = 0x38e;
            *((ebp - 0x500)) = 0;
            eax = *((ebp - 0x20));
            *((ebp - 0x4fc)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write ();
            eax = *((ebp - 0x3c));
            eax++;
            edx = *((ebp - 0x3c));
            ecx = *((ebp - 0x30));
            ecx += edx;
            *((ebp - 0x250)) = 0x219;
            *((ebp - 0x248)) = 1;
            edx = 1;
            edx -= eax;
            edx += ecx;
            *((ebp - 0x244)) = edx;
            *((ebp - 0x24c)) = 1;
            edx = eax - 1;
            edx <<= 3;
            edx += *((ebp + 0xc));
            *((ebp - 0x258)) = edx;
            eax = -eax;
            *((ebp - 0x254)) = eax;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x258;
            *((esp + 4)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write_done ();
            eax = *((ebp + 0x44));
            eax = *(eax);
            if (eax == 4) {
                goto label_9;
            }
            *((ebp - 0x4f8)) = "rwwf.F90";
            *((ebp - 0x4f4)) = 0x390;
            *((ebp - 0x500)) = 0;
            eax = *((ebp - 0x20));
            *((ebp - 0x4fc)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write ();
            eax = *((ebp - 0x38));
            eax++;
            edx = *((ebp - 0x38));
            ecx = *((ebp - 0x28));
            ecx += edx;
            *((ebp - 0x3a4)) = 0x21a;
            *((ebp - 0x39c)) = 1;
            *((ebp - 0x398)) = 2;
            *((ebp - 0x3a0)) = 1;
            *((ebp - 0x390)) = 1;
            edx = 1;
            edx -= eax;
            edx += ecx;
            *((ebp - 0x38c)) = edx;
            *((ebp - 0x394)) = 2;
            edx = eax - 1;
            edx += edx;
            edx <<= 3;
            edx += *((ebp + 8));
            *((ebp - 0x3ac)) = edx;
            edx = 1;
            ecx = 1;
            ecx -= eax;
            eax = ecx;
            eax += eax;
            eax -= 3;
            *((ebp - 0x3a8)) = eax;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x3ac;
            *((esp + 4)) = eax;
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x500;
            *(esp) = eax;
            gfortran_st_write_done ();
        }
label_9:
        al = (*((ebp - 0x40)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x40))++;
    }
label_8:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806f560 */
#include <stdint.h>
 
int32_t dbg_timein (void) {
    int32_t var_3dch;
    int32_t var_3d0h;
    int32_t var_3cch;
    char * var_3c8h;
    int32_t var_3c4h;
    int32_t var_3a4h;
    char * var_3a0h;
    int32_t var_39ch;
    int32_t var_390h;
    int32_t var_38ch;
    int32_t var_27ch;
    int32_t var_278h;
    int32_t var_274h;
    int32_t var_270h;
    int32_t var_26ch;
    int32_t var_268h;
    int32_t var_264h;
    int32_t var_260h;
    int32_t var_25ch;
    int32_t var_258h;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ah;
    integer(kind=4)[9] values;
    int32_t var_23ch;
    int32_t var_238h;
    int32_t var_230h;
    int32_t var_22ch;
    int32_t var_228h;
    int32_t var_224h;
    int32_t var_220h;
    int32_t var_216h;
    int32_t var_22h;
    integer(kind=4) count_rate;
    integer(kind=4) count_max;
    integer(kind=4) count;
    integer(kind=4) months;
    real(kind=8) cpu;
    real(kind=8) wall;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    int32_t var_sp_18h;
    /* void timein(real(kind=8) cpu,real(kind=8) wall); */
    eax = *((ebp + 8));
    *(fp_stack--) = 0.0;
    *(eax) = fp_stack[0];
    fp_stack--;
    eax = ebp - 0x14;
    *((esp + 8)) = eax;
    eax = ebp - 0x18;
    *((esp + 4)) = eax;
    eax = ebp - 0x10;
    *(esp) = eax;
    gfortran_system_clock_4 ();
    eax = *((ebp - 0x10));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    eax = *((ebp - 0x18));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(eax) = fp_stack[0];
    fp_stack--;
    eax = start.1509;
    if (eax == 1) {
        *(obj.start.1509) = 0;
        *((ebp - 0x25c)) = 0x109;
        *((ebp - 0x254)) = 1;
        *((ebp - 0x250)) = 8;
        *((ebp - 0x258)) = 1;
        eax = ebp - 0x240;
        *((ebp - 0x264)) = eax;
        *((ebp - 0x260)) = 0xffffffff;
        *((esp + 0x18)) = 0xa;
        *((esp + 0x14)) = 0xa;
        *((esp + 0x10)) = 0xa;
        eax = ebp - 0x264;
        *((esp + 0xc)) = eax;
        eax = ebp - 0x24a;
        *((esp + 8)) = eax;
        eax = ebp - 0x220;
        *((esp + 4)) = eax;
        eax = ebp - 0x22;
        *(esp) = eax;
        gfortran_date_and_time ();
        eax = *((ebp - 0x240));
        *(obj.year_init.1513) = eax;
        eax = *((ebp - 0x23c));
        *(obj.month_init.1506) = eax;
    }
    *((ebp - 0x274)) = 0x109;
    *((ebp - 0x26c)) = 1;
    *((ebp - 0x268)) = 8;
    *((ebp - 0x270)) = 1;
    eax = ebp - 0x240;
    *((ebp - 0x27c)) = eax;
    *((ebp - 0x278)) = 0xffffffff;
    *((esp + 0x18)) = 0xa;
    *((esp + 0x14)) = 0xa;
    *((esp + 0x10)) = 0xa;
    eax = ebp - 0x27c;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x24a;
    *((esp + 8)) = eax;
    eax = ebp - 0x220;
    *((esp + 4)) = eax;
    eax = ebp - 0x22;
    *(esp) = eax;
    gfortran_date_and_time ();
    eax = *((ebp - 0x238));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    *(fp_stack--) = *(0x8074290);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x230));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8074298);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x22c));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    *(fp_stack--) = *(0x80742a0);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x228));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x224));
    *((ebp - 0x3dc)) = eax;
    *(fp_stack--) = *((ebp - 0x3dc));
    *(fp_stack--) = *(0x80742a8);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0xc));
    *(eax) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x23c));
    *(obj.month_now.1507) = eax;
    edx = *(obj.month_now.1507);
    eax = *(obj.month_init.1506);
    if (edx == eax) {
        goto label_0;
    }
    eax = *(obj.year_init.1513);
    edx = eax + 1;
    eax = *((ebp - 0x240));
    if (edx == eax) {
        eax = *(obj.month_now.1507);
        eax += 0xc;
        *(obj.month_now.1507) = eax;
    }
    edx = *(obj.month_now.1507);
    eax = *(obj.month_init.1506);
    if (edx <= eax) {
        *((ebp - 0x3c8)) = "timein.F90";
        *((ebp - 0x3c4)) = 0xd3;
        eax = ebp - 0x216;
        *((ebp - 0x390)) = eax;
        *((ebp - 0x38c)) = 0x1f4;
        *((ebp - 0x3a4)) = 0;
        *((ebp - 0x3cc)) = 0;
        *((ebp - 0x3a0)) = "(a,a,a,a)\n timein : BUG -  Problem with month and year numbers.COLL";
        *((ebp - 0x39c)) = 9;
        *((ebp - 0x3d0)) = 0x5000;
        eax = ebp - 0x3d0;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807424c;
        eax = ebp - 0x3d0;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xf;
        *((esp + 4)) = 0x807424d;
        eax = ebp - 0x3d0;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807424c;
        eax = ebp - 0x3d0;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x26;
        *((esp + 4)) = 0x807425c;
        eax = ebp - 0x3d0;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3d0;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8074282;
        eax = ebp - 0x216;
        *((esp + 4)) = eax;
        wrtout_ (0x8074288);
        *((esp + 4)) = 4;
        *(esp) = 0x8074282;
        leave_new_ ();
    }
    edx = *(obj.month_init.1506);
    eax = *(obj.month_now.1507);
    eax--;
    *((ebp - 0xc)) = edx;
    if (*((ebp - 0xc)) > eax) {
        goto label_0;
    }
    while (edx == 0) {
        edx = *((ebp + 0xc));
        *(fp_stack--) = *(edx);
        edx = *((ebp - 0xc));
        edx--;
        edx = *((edx*4 + obj.nday.1537));
        *((ebp - 0x3dc)) = edx;
        *(fp_stack--) = *((ebp - 0x3dc));
        *(fp_stack--) = *(0x80742b0);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        edx = *((ebp + 0xc));
        *(edx) = fp_stack[0];
        fp_stack--;
        dl = (*((ebp - 0xc)) == eax) ? 1 : 0;
        edx = (int32_t) dl;
        *((ebp - 0xc))++;
    }
label_0:
    eax = *(obj.year_init.1513);
    eax &= 3;
    if (eax == 0) {
        eax = *(obj.month_init.1506);
        if (eax > 2) {
            goto label_1;
        }
        eax = *(obj.month_now.1507);
        if (eax <= 2) {
            goto label_1;
        }
        eax = *((ebp + 0xc));
        *(fp_stack--) = *(eax);
        *(fp_stack--) = *(0x8074298);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = *((ebp + 0xc));
        *(eax) = fp_stack[0];
        fp_stack--;
    }
label_1:
    eax = *((ebp - 0x240));
    eax &= 3;
    if (eax == 0) {
        eax = *(obj.month_init.1506);
        if (eax > 0xe) {
            goto label_2;
        }
        eax = *(obj.month_now.1507);
        if (eax <= 0xe) {
            goto label_2;
        }
        eax = *((ebp + 0xc));
        *(fp_stack--) = *(eax);
        *(fp_stack--) = *(0x8074298);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = *((ebp + 0xc));
        *(eax) = fp_stack[0];
        fp_stack--;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806c41c */
#include <stdint.h>
 
int32_t dbg_sym2cart (void) {
    int32_t var_130h;
    int32_t var_12ch;
    int32_t var_128h;
    int32_t var_124h;
    int32_t var_11ch;
    int32_t var_118h;
    int32_t var_114h;
    int32_t var_110h;
    int32_t var_10ch;
    real(kind=8)[4][4] tmp;
    real(kind=8)[4][4] rsymcart;
    real(kind=8)[4][4] rsym;
    integer(kind=4) isym;
    integer(kind=4) ubound.0;
    integer(kind=4) ubound.2;
    real(kind=8)[4][4] gprimd;
    integer(kind=4) nsym;
    real(kind=8)[4][4] rprimd;
    integer(kind=4)[4][4][4] symrel;
    real(kind=8)[4][4][4] symcart;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    size_t var_18h;
    int32_t var_sp_1ch;
    int32_t var_sp_20h;
    int32_t var_sp_24h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    int32_t var_34h;
    int32_t var_38h;
    /* void sym2cart(real(kind=8)[4][4] gprimd,integer(kind=4) nsym,real(kind=8)[4][4] rprimd,integer(kind=4)[4][4][4] symrel,real(kind=8)[4][4][4] symcart); */
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    edx = *((ebp - 0x1c));
    eax = *((ebp - 0x1c));
    eax <<= 3;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x128)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x124)) = ecx;
    eax = *((ebp - 0x128));
    edx = *((ebp - 0x124));
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    edx = *((ebp - 0x20));
    eax = *((ebp - 0x20));
    eax <<= 3;
    eax += edx;
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x130)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x12c)) = ecx;
    eax = *((ebp - 0x130));
    edx = *((ebp - 0x12c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x11c)) = eax;
    *((ebp - 0x24)) = 1;
    eax = *((ebp - 0x11c));
    if (*((ebp - 0x24)) > eax) {
        goto label_3;
    }
    goto label_4;
label_2:
label_4:
    edx = *((ebp - 0x24));
    eax = *((ebp - 0x24));
    eax <<= 3;
    eax += edx;
    eax -= 0xd;
    *((ebp - 0x118)) = eax;
    edx = 1;
label_0:
    if (edx > 3) {
        goto label_5;
    }
    eax = edx;
    eax += eax;
    eax += edx;
    edi = *((ebp - 0x118));
    edi = eax + edi;
    eax = edx;
    eax += eax;
    eax += edx;
    eax -= 4;
    *((ebp - 0x114)) = eax;
    ecx = 1;
    do {
        if (ecx > 3) {
            goto label_6;
        }
        esi = *((ebp - 0x114));
        esi = ecx + esi;
        ebx = ecx + edi;
        eax = *((ebp + 0x14));
        eax = *((eax + ebx*4));
        *((ebp - 0x10c)) = eax;
        *(fp_stack--) = *((ebp - 0x10c));
        *((ebp + esi*8 - 0x70)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (1);
label_6:
    edx++;
    goto label_0;
label_5:
    *((esp + 0x38)) = 1;
    *((esp + 0x34)) = 1;
    *((esp + 0x30)) = 0x8073820;
    eax = ebp - 0x100;
    *((esp + 0x2c)) = eax;
    *((esp + 0x28)) = 0x8073828;
    *((esp + 0x24)) = 0x8073820;
    eax = ebp - 0x70;
    *((esp + 0x20)) = eax;
    *((esp + 0x1c)) = 0x8073820;
    eax = *((ebp + 0x10));
    *((esp + 0x18)) = eax;
    *((esp + 0x14)) = 0x8073830;
    *((esp + 0x10)) = 0x8073820;
    *((esp + 0xc)) = 0x8073820;
    *((esp + 8)) = 0x8073820;
    *((esp + 4)) = 0x8073838;
    *(esp) = 0x8073838;
    dgemm_ ();
    *((esp + 0x38)) = 1;
    *((esp + 0x34)) = 1;
    *((esp + 0x30)) = 0x8073820;
    eax = ebp - 0xb8;
    *((esp + 0x2c)) = eax;
    *((esp + 0x28)) = 0x8073828;
    *((esp + 0x24)) = 0x8073820;
    eax = *((ebp + 8));
    *((esp + 0x20)) = eax;
    *((esp + 0x1c)) = 0x8073820;
    eax = ebp - 0x100;
    *((esp + 0x18)) = eax;
    *((esp + 0x14)) = 0x8073830;
    *((esp + 0x10)) = 0x8073820;
    *((esp + 0xc)) = 0x8073820;
    *((esp + 8)) = 0x8073820;
    *((esp + 4)) = 0x8073838;
    *(esp) = 0x8073838;
    dgemm_ ();
    edx = *((ebp - 0x24));
    eax = *((ebp - 0x24));
    eax <<= 3;
    eax += edx;
    eax -= 0xd;
    *((ebp - 0x110)) = eax;
    edx = 1;
label_1:
    if (edx > 3) {
        goto label_7;
    }
    eax = edx;
    eax += eax;
    eax += edx;
    esi = eax - 4;
    eax = edx;
    eax += eax;
    eax += edx;
    edi = *((ebp - 0x110));
    edi = eax + edi;
    ecx = 1;
    do {
        if (ecx > 3) {
            goto label_8;
        }
        ebx = ecx + edi;
        eax = ecx + esi;
        *(fp_stack--) = *((ebp + eax*8 - 0xb8));
        eax = *((ebp + 0x18));
        *((eax + ebx*8)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (1);
label_8:
    edx++;
    goto label_1;
label_7:
    ecx = *((ebp - 0x11c));
    al = (*((ebp - 0x24)) == ecx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x24))++;
    if (eax == 0) {
        goto label_2;
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806d1a4 */
#include <stdint.h>
 
int32_t dbg_mvrecord (void) {
    int32_t var_17ch;
    int32_t var_178h;
    char * var_174h;
    int32_t var_170h;
    int32_t var_164h;
    int32_t var_28h;
    int32_t var_24h;
    char * var_20h;
    int32_t var_1ch;
    int32_t var_10h;
    integer(kind=4) irec;
    integer(kind=4) ierr;
    integer(kind=4) nrec;
    integer(kind=4) unitfile;
    /* void mvrecord(integer(kind=4) ierr,integer(kind=4) nrec,integer(kind=4) unitfile); */
    eax = *((ebp + 0xc));
    eax = *(eax);
    if (eax <= 0) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    ebx = *(eax);
    *((ebp - 0xc)) = 1;
    if (*((ebp - 0xc)) > ebx) {
        goto label_1;
    }
    do {
        *((ebp - 0x174)) = "mvrecord.F90";
        *((ebp - 0x170)) = 0x3c;
        eax = *((ebp + 8));
        *(eax) = 0;
        eax = *((ebp + 8));
        *((ebp - 0x164)) = eax;
        *((ebp - 0x17c)) = 0x20;
        eax = *((ebp + 0x10));
        eax = *(eax);
        *((ebp - 0x178)) = eax;
        eax = ebp - 0x17c;
        *(esp) = eax;
        gfortran_st_read ();
        eax = ebp - 0x17c;
        *(esp) = eax;
        gfortran_st_read_done ();
        al = (*((ebp - 0xc)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0xc))++;
        if (eax != 0) {
            goto label_1;
        }
    } while (1);
label_0:
    eax = *((ebp + 0xc));
    eax = *(eax);
    ebx = *(eax);
    ebx = -ebx;
    *((ebp - 0xc)) = 1;
    if (*((ebp - 0xc)) > ebx) {
        goto label_1;
    }
    while (eax == 0) {
        *((ebp - 0x20)) = "mvrecord.F90";
        *((ebp - 0x1c)) = 0x41;
        eax = *((ebp + 8));
        *(eax) = 0;
        eax = *((ebp + 8));
        *((ebp - 0x10)) = eax;
        *((ebp - 0x28)) = 0x20;
        eax = *((ebp + 0x10));
        eax = *(eax);
        *((ebp - 0x24)) = eax;
        eax = ebp - 0x28;
        *(esp) = eax;
        gfortran_st_backspace ();
        al = (*((ebp - 0xc)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0xc))++;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806b480 */
#include <stdint.h>
 
int32_t dbg_wffwritenpwrec (void) {
    int32_t var_15ch;
    int32_t var_158h;
    char * var_154h;
    int32_t var_150h;
    int32_t var_144h;
    integer(kind=4) ierr;
    integer(kind=4) nband_disk;
    integer(kind=4) npw;
    integer(kind=4) nspinor;
    wffile_type wff;
    int32_t var_4h;
    int32_t var_8h;
    /* void wffwritenpwrec(integer(kind=4) ierr,integer(kind=4) nband_disk,integer(kind=4) npw,integer(kind=4) nspinor,wffile_type wff); */
    eax = *((ebp + 8));
    *(eax) = 0;
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_0;
        }
        eax = *((ebp + 0x18));
        edx = *((eax + 0x94));
        eax = *((ebp + 0x18));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_0;
        }
    }
    *((ebp - 0x154)) = "wffwritenpwrec.F90";
    *((ebp - 0x150)) = 0x41;
    eax = *((ebp + 8));
    *(eax) = 0;
    eax = *((ebp + 8));
    *((ebp - 0x144)) = eax;
    *((ebp - 0x15c)) = 0x20;
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x158)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_st_write_done ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x804ddd8 */
#include <stdint.h>
 
int32_t dbg_linopt (int32_t arg_4ch) {
    int32_t var_4fch;
    int32_t var_4ech;
    int32_t var_4e8h;
    int32_t var_4e4h;
    int32_t var_4e0h;
    int32_t var_4dch;
    int32_t var_4d8h;
    int32_t var_4d4h;
    int32_t var_4d0h;
    int32_t var_4cch;
    int32_t var_4c8h;
    int32_t var_4c4h;
    int32_t var_4c0h;
    int32_t var_4bch;
    int32_t var_4b8h;
    int32_t var_4b4h;
    int32_t var_4b0h;
    int32_t var_4ach;
    int32_t var_498h;
    int32_t var_494h;
    int32_t var_490h;
    int32_t var_48ch;
    int32_t var_488h;
    int32_t var_484h;
    int32_t var_480h;
    int32_t var_47ch;
    int32_t var_478h;
    int32_t var_474h;
    int32_t var_470h;
    int32_t var_46ch;
    int32_t var_468h;
    int32_t var_464h;
    int32_t var_460h;
    int32_t var_45ch;
    int32_t var_458h;
    int32_t var_454h;
    int32_t var_450h;
    int32_t var_44ch;
    int32_t var_448h;
    int32_t var_444h;
    int32_t var_440h;
    int32_t var_43ch;
    int32_t var_438h;
    int32_t var_434h;
    int32_t var_430h;
    int32_t var_42ch;
    int32_t var_41ch;
    int32_t var_418h;
    char * var_414h;
    int32_t var_410h;
    int32_t var_3fch;
    int32_t var_3f8h;
    int32_t var_3ech;
    int32_t var_3e8h;
    int32_t var_3e4h;
    int32_t var_3e0h;
    int32_t var_3cch;
    int32_t var_3c8h;
    int32_t var_2c8h;
    int32_t var_2c0h;
    int32_t var_2b8h;
    int32_t var_2b0h;
    int32_t var_2a8h;
    int32_t var_2a0h;
    int32_t var_298h;
    int32_t var_290h;
    int32_t var_288h;
    int32_t var_280h;
    int32_t var_27ch;
    complex(kind=8) w;
    real(kind=8)[5][5] sym;
    int32_t var_260h;
    int32_t var_25ch;
    int32_t var_258h;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ch;
    int32_t var_248h;
    int32_t var_244h;
    real(kind=8)[5][5] s;
    int32_t var_23ch;
    int32_t var_238h;
    int32_t var_234h;
    int32_t var_230h;
    int32_t var_22ch;
    int32_t var_228h;
    int32_t var_224h;
    int32_t var_220h;
    integer(kind=4) ik;
    complex(kind=8) ieta;
    void * s1;
    complex(kind=8)[5] eps;
    int32_t var_104h;
    int32_t var_100h;
    int32_t var_fch;
    int32_t var_f8h;
    int32_t var_f4h;
    real(kind=8) ene;
    complex(kind=8)[5] chi;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    complex(kind=8) b12;
    complex(kind=8) b11;
    real(kind=8) const;
    real(kind=8) corec;
    real(kind=8) e1;
    real(kind=8) e12;
    real(kind=8) e2;
    real(kind=8) emax;
    real(kind=8) emin;
    integer(kind=4) ubound.0;
    integer(kind=4) ubound.1;
    integer(kind=4) ubound.3;
    real(kind=8) ha2ev;
    integer(kind=4) i;
    integer(kind=4) isp;
    integer(kind=4) ist1;
    integer(kind=4) ist2;
    integer(kind=4) isym;
    integer(kind=4) iw;
    integer(kind=4) j;
    integer(kind=4) lx;
    integer(kind=4) ly;
    integer(kind=4) ubound.7;
    integer(kind=4) ubound.8;
    integer(kind=4) ubound.10;
    integer(kind=4) ubound.14;
    integer(kind=4) ubound.15;
    integer(kind=4) ubound.17;
    integer(kind=4) ubound.20;
    integer(kind=4) ubound.24;
    integer(kind=4) ubound.26;
    integer(kind=4) nspin;
    real(kind=8) omega;
    integer(kind=4) nkpt;
    real(kind=8)[4] wkpt;
    integer(kind=4) nsymcrys;
    real(kind=8)[4][4][4] symcrys;
    integer(kind=4) nstval;
    real(kind=8)[5][4][4] occv;
    real(kind=8)[5][5][5] evalv;
    real(kind=8) efermi;
    complex(kind=8)[4][4][4][4][4] pmat;
    integer(kind=4) v1;
    integer(kind=4) v2;
    integer(kind=4) nmesh;
    real(kind=8) de;
    real(kind=8) sc;
    real(kind=8) brod;
    integer(kind=4) const _fnam;
    char * s2;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    char * var_14h;
    /* void linopt(integer(kind=4) nspin,real(kind=8) omega,integer(kind=4) nkpt,real(kind=8)[4] wkpt,integer(kind=4) nsymcrys,real(kind=8)[4][4][4] symcrys,integer(kind=4) nstval,real(kind=8)[5][4][4] occv,real(kind=8)[5][5][5] evalv,real(kind=8) efermi,complex(kind=8)[4][4][4][4][4] pmat,integer(kind=4) v1,integer(kind=4) v2,integer(kind=4) nmesh,real(kind=8) de,real(kind=8) sc,real(kind=8) brod,integer(kind=4) const _fnam); */
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    edx = *((ebp - 0x20));
    eax = *((ebp - 0x20));
    eax <<= 3;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x74)) = eax;
    eax = *((ebp - 0x74));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0x44c)) = ecx;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x70)) = eax;
    eax = *((ebp - 0x44c));
    eax *= *((ebp - 0x70));
    edx = 0;
    ebx = edx;
    __asm ("cmovns ebx, eax");
    *((ebp - 0x448)) = ebx;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x6c)) = eax;
    eax = *((ebp - 0x448));
    eax *= *((ebp - 0x6c));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4b0)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4ac)) = ebx;
    eax = *((ebp - 0x4b0));
    edx = *((ebp - 0x4ac));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4b8)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4b4)) = ebx;
    eax = *((ebp - 0x4b8));
    edx = *((ebp - 0x4b4));
    eax = *((ebp - 0x44c));
    eax = ~eax;
    edx = eax;
    edx -= *((ebp - 0x448));
    *((ebp - 0x498)) = edx;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x30));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0x444)) = ecx;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x444));
    eax *= *((ebp - 0x2c));
    edx = 0;
    ebx = edx;
    __asm ("cmovns ebx, eax");
    *((ebp - 0x440)) = ebx;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x440));
    eax *= *((ebp - 0x28));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0x43c)) = ecx;
    eax = *((ebp - 0x43c));
    eax += eax;
    edx = *((ebp - 0x43c));
    edx = eax + edx;
    eax = 0;
    ebx = eax;
    __asm ("cmovns ebx, edx");
    *((ebp - 0x438)) = ebx;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x438));
    eax *= *((ebp - 0x24));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4c0)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4bc)) = ebx;
    eax = *((ebp - 0x4c0));
    edx = *((ebp - 0x4bc));
    __asm ("shld edx, eax, 7");
    eax <<= 7;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4c8)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4c4)) = ebx;
    eax = *((ebp - 0x4c8));
    edx = *((ebp - 0x4c4));
    eax = *((ebp - 0x444));
    eax = ~eax;
    eax -= *((ebp - 0x440));
    eax -= *((ebp - 0x43c));
    edx = eax;
    edx -= *((ebp - 0x438));
    *((ebp - 0x490)) = edx;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4d0)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4cc)) = ebx;
    eax = *((ebp - 0x4d0));
    edx = *((ebp - 0x4cc));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4d8)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4d4)) = ebx;
    eax = *((ebp - 0x4d8));
    edx = *((ebp - 0x4d4));
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x3c));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0x434)) = ecx;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x38)) = eax;
    eax = *((ebp - 0x434));
    eax *= *((ebp - 0x38));
    edx = 0;
    ebx = edx;
    __asm ("cmovns ebx, eax");
    *((ebp - 0x430)) = ebx;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x430));
    eax *= *((ebp - 0x34));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4e0)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4dc)) = ebx;
    eax = *((ebp - 0x4e0));
    edx = *((ebp - 0x4dc));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x4e8)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x4e4)) = ebx;
    eax = *((ebp - 0x4e8));
    edx = *((ebp - 0x4e4));
    eax = *((ebp - 0x434));
    eax = ~eax;
    edx = eax;
    edx -= *((ebp - 0x430));
    *((ebp - 0x494)) = edx;
    *((ebp - 0xe8)) = 0;
    *((ebp - 0x108)) = 0;
    *((ebp - 0x240)) = 0;
    *((ebp - 0x264)) = 0;
    eax = *((ebp + 0x34));
    eax = *(eax);
    if (eax > 0) {
        eax = *((ebp + 0x38));
        eax = *(eax);
        if (eax <= 0) {
            goto label_11;
        }
        eax = *((ebp + 0x34));
        eax = *(eax);
        if (eax > 3) {
            goto label_11;
        }
        eax = *((ebp + 0x38));
        eax = *(eax);
        if (eax <= 3) {
            goto label_12;
        }
    }
label_11:
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0x6a;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "---------------------------------------------";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0x6b;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "    Error in linopt:                         ";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0x6c;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "    the polarisation directions incorrect    ";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0x6d;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "    1=x and 2=y and 3=z                      ";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0x6e;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "---------------------------------------------";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *(esp) = 0xffffffff;
    gfortran_stop_numeric ();
label_12:
    eax = *((ebp + 0x3c));
    eax = *(eax);
    if (eax <= 0) {
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x73;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x74;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    Error in linopt:                         ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x75;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number of energy mesh points incorrect   ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x76;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number has to integer greater than 0     ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x77;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    nmesh*de = max energy for calculation    ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x78;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *(esp) = 0xffffffff;
        gfortran_stop_numeric ();
    }
    eax = *((ebp + 0x40));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x7d;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x7e;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    Error in linopt:                         ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x7f;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    energy step is incorrect                 ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x80;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number has to real greater than 0.0      ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x81;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    nmesh*de = max energy for calculation    ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x82;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *(esp) = 0xffffffff;
        gfortran_stop_numeric ();
    }
    eax = *((ebp + 0x44));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x87;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x88;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    Error in linopt:                         ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x89;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    scissors shift is incorrect              ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x8a;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number has to real greater than 0.0      ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x8b;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *(esp) = 0xffffffff;
        gfortran_stop_numeric ();
    }
    eax = *((ebp + 0x48));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8071608);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x90;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x91;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    ATTENTION: broadening is quite high      ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x92;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    ideally should be less than 0.005        ";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x93;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
    } else {
        eax = *((ebp + 0x48));
        *(fp_stack--) = *(eax);
        *(fp_stack--) = *(0x8071610);
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
            goto label_13;
        }
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x95;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005   Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x96;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x80712d4;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x97;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x80712fc;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x98;
        *((ebp - 0x41c)) = 0x80;
        *((ebp - 0x418)) = 6;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005   Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
label_13:
    *((ebp - 0xe0)) = 0x421;
    *((ebp - 0xd8)) = 1;
    eax = *((ebp + 0x3c));
    eax = *(eax);
    *((ebp - 0xd4)) = eax;
    *((ebp - 0xdc)) = 1;
    eax = *((ebp + 0x3c));
    eax = *(eax);
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp + 0x3c));
    eax = *(eax);
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        edx = 0;
    } else {
        edx <<= 4;
    }
    eax = *((ebp - 0xe8));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071324;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xe8)) = eax;
        *((ebp - 0xe4)) = 0xffffffff;
        *((ebp - 0x100)) = 0x421;
        *((ebp - 0xf8)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        *((ebp - 0xf4)) = eax;
        *((ebp - 0xfc)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp + 0x3c));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x807137b;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 157 of file linopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_14;
    }
    edx <<= 4;
label_14:
    eax = *((ebp - 0x108));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071324;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x108)) = eax;
        *((ebp - 0x104)) = 0xffffffff;
        *((ebp - 0x238)) = 0x21a;
        *((ebp - 0x230)) = 1;
        *((ebp - 0x22c)) = 3;
        *((ebp - 0x234)) = 1;
        *((ebp - 0x224)) = 1;
        *((ebp - 0x220)) = 3;
        *((ebp - 0x228)) = 3;
        eax = *((ebp - 0x240));
        if (eax != 0) {
        } else {
            *((esp + 8)) = 0x80713d3;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 157 of file linopt.F90";
            gfortran_runtime_error_at ();
        }
        eax = malloc (0x48);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x240)) = eax;
        *((ebp - 0x23c)) = 0xfffffffc;
        *((ebp - 0x25c)) = 0x21a;
        *((ebp - 0x254)) = 1;
        *((ebp - 0x250)) = 3;
        *((ebp - 0x258)) = 1;
        *((ebp - 0x248)) = 1;
        *((ebp - 0x244)) = 3;
        *((ebp - 0x24c)) = 3;
        eax = *((ebp - 0x264));
        if (eax == 0) {
            goto label_15;
        }
        goto label_16;
    }
    *((esp + 8)) = 0x80713d7;
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 158 of file linopt.F90";
    gfortran_runtime_error_at ();
label_15:
    eax = malloc (0x48);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    *((ebp - 0x264)) = eax;
    *((ebp - 0x260)) = 0xfffffffc;
    eax = *((ebp + 0x48));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 0.0;
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_stack[0] *= fp_stack[2];
    fp_tmp_2 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_tmp_3 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    *((ebp - 0x218)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x210)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x42c)) = eax;
    *(fp_stack--) = *((ebp - 0x42c));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0xb0)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8071618);
    *((ebp - 0x68)) = fp_stack[0];
    fp_stack--;
    edx = ebp - 0x280;
    eax = *((ebp + 0x4c));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = edx;
    eax = ebp - 0x27c;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0x27c));
    eax += 0xb;
    edx = eax;
    edx <<= 5;
    if (edx >= 0) {
        goto label_17;
label_16:
        *((esp + 8)) = 0x80713fb;
        *((esp + 4)) = "Attempting to allocate already allocated array '%s';
        *(esp) = "At line 158 of file linopt.F90";
        gfortran_runtime_error_at ();
    }
    *(esp) = "Attempt to allocate a negative amount of memory.";
    gfortran_runtime_error ();
label_17:
    eax = 1;
    if (edx > 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0x280));
    edx = *((ebp - 0x27c));
    eax = *((ebp - 0x27c));
    eax += 0xb;
    *((esp + 0x14)) = "-linopt.outofFORMATTEDWRITE(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)";
    *((esp + 0x10)) = 0xb;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0x27c));
    if (eax > 0) {
        eax = *((ebp - 0x280));
        if (eax == 0) {
            goto label_18;
        }
        free (eax);
    }
label_18:
    eax = *((ebp - 0x27c));
    ebx = eax + 0xb;
    if (ebx > 0xff) {
        eax = ebp - 0x208;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0x208;
        memmove (eax, esi, ebx);
        eax = 0x100;
        ecx = 0x100;
        ecx -= ebx;
        eax = ebx;
        edx = ebp - 0x208;
        edx += eax;
        memset (edx, 0x20, ecx);
    }
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    eax = *((ebp - 0x264));
    *((ebp - 0x480)) = eax;
    ecx = *((ebp - 0x260));
    *((ebp - 0x484)) = ecx;
    ebx = *((ebp - 0x254));
    *((ebp - 0x488)) = ebx;
    eax = *((ebp - 0x250));
    *((ebp - 0x48c)) = eax;
    eax = *((ebp - 0x248));
    edi = *((ebp - 0x244));
    esi = *((ebp - 0x258));
    ecx = eax;
label_0:
    if (ecx > edi) {
        goto label_19;
    }
    eax = *((ebp - 0x24c));
    eax *= ecx;
    edx = *((ebp - 0x484));
    edx += eax;
    *((ebp - 0x4fc)) = edx;
    edx = *((ebp - 0x488));
    do {
        if (edx > *((ebp - 0x48c))) {
            goto label_20;
        }
        eax = edx;
        eax *= esi;
        ebx = *((ebp - 0x4fc));
        ebx += eax;
        *((ebp - 0x4ec)) = ebx;
        *(fp_stack--) = 0.0;
        eax = *((ebp - 0x4ec));
        ebx = *((ebp - 0x480));
        *((ebx + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_20:
    ecx++;
    goto label_0;
label_19:
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x47c)) = eax;
    *((ebp - 0x50)) = 1;
    eax = *((ebp - 0x47c));
    if (*((ebp - 0x50)) > eax) {
        goto label_21;
    }
    goto label_22;
label_3:
label_22:
    eax = *((ebp - 0x240));
    *((ebp - 0x46c)) = eax;
    edx = *((ebp - 0x23c));
    *((ebp - 0x470)) = edx;
    edx = *((ebp - 0x230));
    eax = *((ebp - 0x224));
    ecx = *((ebp - 0x50));
    edx--;
    *((ebp - 0x474)) = edx;
    eax--;
    *((ebp - 0x478)) = eax;
    eax = ecx;
    eax <<= 3;
    eax += ecx;
    eax -= 0xd;
    *((ebp - 0x464)) = eax;
    ecx = *((ebp - 0x234));
    *((ebp - 0x468)) = ecx;
    esi = 1;
label_1:
    if (esi > 3) {
        goto label_23;
    }
    eax = esi;
    eax += eax;
    eax += esi;
    ebx = *((ebp - 0x464));
    ebx += eax;
    *((ebp - 0x460)) = ebx;
    edx = *((ebp - 0x478));
    edx = esi + edx;
    eax = *((ebp - 0x228));
    eax *= edx;
    edi = *((ebp - 0x470));
    edi = eax + edi;
    ecx = 1;
    do {
        if (ecx > 3) {
            goto label_24;
        }
        eax = *((ebp - 0x474));
        eax = ecx + eax;
        eax *= *((ebp - 0x468));
        ebx = eax + edi;
        edx = *((ebp - 0x460));
        edx = ecx + edx;
        eax = *((ebp + 0x1c));
        *(fp_stack--) = *((eax + edx*8));
        eax = *((ebp - 0x46c));
        *((eax + ebx*8)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (1);
label_24:
    esi++;
    goto label_1;
label_23:
    *((ebp - 0x60)) = 1;
    if (*((ebp - 0x60)) > 3) {
        goto label_25;
    }
    goto label_26;
label_2:
label_26:
    *((ebp - 0x48)) = 1;
    if (*((ebp - 0x48)) > 3) {
        goto label_27;
    }
    while (eax == 0) {
        eax = *((ebp - 0x264));
        edi = *((ebp - 0x264));
        eax = *((ebp - 0x258));
        edx = *((ebp - 0x258));
        edx *= *((ebp - 0x60));
        eax = *((ebp - 0x24c));
        eax *= *((ebp - 0x48));
        edx += eax;
        eax = *((ebp - 0x260));
        esi = edx + eax;
        eax = *((ebp - 0x264));
        ecx = *((ebp - 0x264));
        eax = *((ebp - 0x258));
        edx = *((ebp - 0x258));
        edx *= *((ebp - 0x60));
        eax = *((ebp - 0x24c));
        eax *= *((ebp - 0x48));
        edx += eax;
        eax = *((ebp - 0x260));
        eax = edx + eax;
        *(fp_stack--) = *((ecx + eax*8));
        eax = *((ebp - 0x240));
        ebx = *((ebp - 0x240));
        eax = *((ebp - 0x234));
        ecx = *((ebp - 0x234));
        ecx *= *((ebp - 0x60));
        eax = *((ebp + 0x34));
        edx = *(eax);
        eax = *((ebp - 0x228));
        eax *= edx;
        edx = ecx + eax;
        eax = *((ebp - 0x23c));
        eax = edx + eax;
        *(fp_stack--) = *((ebx + eax*8));
        eax = *((ebp - 0x240));
        ebx = *((ebp - 0x240));
        eax = *((ebp - 0x234));
        ecx = *((ebp - 0x234));
        ecx *= *((ebp - 0x48));
        eax = *((ebp + 0x38));
        edx = *(eax);
        eax = *((ebp - 0x228));
        eax *= edx;
        edx = ecx + eax;
        eax = *((ebp - 0x23c));
        eax = edx + eax;
        *(fp_stack--) = *((ebx + eax*8));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((edi + esi*8)) = fp_stack[0];
        fp_stack--;
        al = (*((ebp - 0x48)) == 3) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x48))++;
    }
label_27:
    al = (*((ebp - 0x60)) == 3) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x60))++;
    if (eax == 0) {
        goto label_2;
    }
label_25:
    edx = *((ebp - 0x47c));
    al = (*((ebp - 0x50)) == edx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x50))++;
    if (eax == 0) {
        goto label_3;
    }
label_21:
    *(fp_stack--) = 0.0;
    *((ebp - 0x80)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0x88)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x10));
    esi = *(eax);
    *((ebp - 0x21c)) = 1;
    eax = *((ebp - 0x21c));
    if (eax > esi) {
        goto label_28;
    }
    goto label_29;
label_5:
label_29:
    eax = *((ebp + 8));
    ebx = *(eax);
    *((ebp - 0x5c)) = 1;
    if (*((ebp - 0x5c)) > ebx) {
        goto label_30;
    }
    goto label_31;
label_4:
label_31:
    eax = *((ebp + 0x20));
    ecx = *(eax);
    *((ebp - 0x58)) = 1;
    if (*((ebp - 0x58)) > ecx) {
        goto label_32;
    }
    while (eax == 0) {
        *(fp_stack--) = *((ebp - 0x80));
        edx = *((ebp - 0x44c));
        edx *= *((ebp - 0x5c));
        eax = *((ebp - 0x21c));
        eax *= *((ebp - 0x448));
        eax = edx + eax;
        eax += *((ebp - 0x58));
        edx = *((ebp - 0x498));
        edx = eax + edx;
        eax = *((ebp + 0x28));
        *(fp_stack--) = *((eax + edx*8));
        fp_tmp_5 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        edx = (int32_t) al;
        __asm ("setp al");
        eax = (int32_t) al;
        eax |= edx;
        if (eax != 0) {
            fp_stack++;
        } else {
            fp_stack[1] = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0x80)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x88));
        edx = *((ebp - 0x44c));
        edx *= *((ebp - 0x5c));
        eax = *((ebp - 0x21c));
        eax *= *((ebp - 0x448));
        eax = edx + eax;
        eax += *((ebp - 0x58));
        edx = *((ebp - 0x498));
        edx = eax + edx;
        eax = *((ebp + 0x28));
        *(fp_stack--) = *((eax + edx*8));
        fp_tmp_6 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        edx = (int32_t) al;
        __asm ("setp al");
        eax = (int32_t) al;
        eax |= edx;
        if (eax != 0) {
            fp_stack++;
        } else {
            fp_stack[1] = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        al = (*((ebp - 0x58)) == ecx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x58))++;
    }
label_32:
    al = (*((ebp - 0x5c)) == ebx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x5c))++;
    if (eax == 0) {
        goto label_4;
    }
label_30:
    eax = *((ebp - 0x21c));
    al = (eax == esi) ? 1 : 0;
    edx = (int32_t) al;
    eax = *((ebp - 0x21c));
    eax++;
    *((ebp - 0x21c)) = eax;
    if (edx == 0) {
        goto label_5;
    }
label_28:
    eax = *((ebp - 0xe8));
    ecx = *((ebp - 0xe8));
    edi = *((ebp - 0xe4));
    eax = *((ebp - 0xd8));
    esi = *((ebp - 0xd4));
    ebx = *((ebp - 0xdc));
    edx = eax;
    do {
        if (edx > esi) {
            goto label_33;
        }
        eax = edx;
        eax *= ebx;
        eax += edi;
        eax <<= 4;
        *(fp_stack--) = 0.0;
        *((eax + ecx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((eax + ecx + 8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_33:
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x45c)) = eax;
    *((ebp - 0x21c)) = 1;
    eax = *((ebp - 0x21c));
    if (eax > *((ebp - 0x45c))) {
        goto label_34;
    }
    goto label_35;
label_10:
label_35:
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xbc;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 4;
    eax = ebp - 0x21c;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071455;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x458)) = eax;
    *((ebp - 0x5c)) = 1;
    ecx = *((ebp - 0x458));
    if (*((ebp - 0x5c)) > ecx) {
        goto label_36;
    }
    goto label_37;
label_9:
label_37:
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x454)) = eax;
    *((ebp - 0x58)) = 1;
    ebx = *((ebp - 0x454));
    if (*((ebp - 0x58)) > ebx) {
        goto label_38;
    }
    goto label_39;
label_8:
label_39:
    edx = *((ebp - 0x44c));
    edx *= *((ebp - 0x5c));
    eax = *((ebp - 0x21c));
    eax *= *((ebp - 0x448));
    eax = edx + eax;
    eax += *((ebp - 0x58));
    edx = *((ebp - 0x498));
    edx = eax + edx;
    eax = *((ebp + 0x28));
    *(fp_stack--) = *((eax + edx*8));
    *((ebp - 0xa0)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x2c));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *((ebp - 0xa0));
    fp_tmp_7 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax == 0) {
        goto label_40;
    }
    edx = *((ebp - 0x58));
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x450)) = eax;
    *((ebp - 0x54)) = edx;
    eax = *((ebp - 0x450));
    if (*((ebp - 0x54)) > eax) {
        goto label_40;
    }
    goto label_41;
label_7:
label_41:
    edx = *((ebp - 0x44c));
    edx *= *((ebp - 0x5c));
    eax = *((ebp - 0x21c));
    eax *= *((ebp - 0x448));
    eax = edx + eax;
    eax += *((ebp - 0x54));
    edx = *((ebp - 0x498));
    edx = eax + edx;
    eax = *((ebp + 0x28));
    *(fp_stack--) = *((eax + edx*8));
    *((ebp - 0x90)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x2c));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *((ebp - 0x90));
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax == 0) {
        goto label_42;
    }
    *(fp_stack--) = *((ebp - 0xa0));
    fp_stack[0] -= *((ebp - 0x90));
    eax = *((ebp + 0x44));
    *(fp_stack--) = *(eax);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *((ebp - 0x98)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x44));
    *(fp_stack--) = *(eax);
    fp_stack[0] += *((ebp - 0x98));
    *(fp_stack--) = *((ebp - 0x98));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0xa8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0xc0)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0xb8)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x44)) = 1;
    if (*((ebp - 0x44)) > 3) {
        goto label_43;
    }
    goto label_44;
label_6:
label_44:
    *((ebp - 0x40)) = 1;
    if (*((ebp - 0x40)) > 3) {
        goto label_45;
    }
    while (eax == 0) {
        eax = *((ebp - 0x264));
        ecx = *((ebp - 0x264));
        eax = *((ebp - 0x258));
        edx = *((ebp - 0x258));
        edx *= *((ebp - 0x44));
        eax = *((ebp - 0x24c));
        eax *= *((ebp - 0x40));
        edx += eax;
        eax = *((ebp - 0x260));
        eax = edx + eax;
        *(fp_stack--) = *((ecx + eax*8));
        *(fp_stack--) = 0.0;
        edx = *((ebp - 0x444));
        edx *= *((ebp - 0x54));
        eax = *((ebp - 0x21c));
        eax *= *((ebp - 0x440));
        eax = edx + eax;
        ecx = eax;
        ecx += *((ebp - 0x58));
        edx = *((ebp - 0x438));
        edx *= *((ebp - 0x5c));
        eax = *((ebp - 0x43c));
        eax *= *((ebp - 0x44));
        eax = edx + eax;
        eax = ecx + eax;
        eax += *((ebp - 0x490));
        edx = *((ebp + 0x30));
        eax <<= 4;
        *(fp_stack--) = *((eax + edx));
        *(fp_stack--) = *((eax + edx + 8));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_tmp_8 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_8;
        fp_stack[0] *= fp_stack[5];
        fp_stack++;
        fp_tmp_9 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_9;
        fp_stack[0] *= fp_stack[3];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_tmp_10 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_10;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        edx = *((ebp - 0x444));
        edx *= *((ebp - 0x54));
        eax = *((ebp - 0x21c));
        eax *= *((ebp - 0x440));
        eax = edx + eax;
        ecx = eax;
        ecx += *((ebp - 0x58));
        edx = *((ebp - 0x438));
        edx *= *((ebp - 0x5c));
        eax = *((ebp - 0x43c));
        eax *= *((ebp - 0x40));
        eax = edx + eax;
        eax = ecx + eax;
        eax += *((ebp - 0x490));
        edx = *((ebp + 0x30));
        eax <<= 4;
        *(fp_stack--) = *((eax + edx));
        *(fp_stack--) = *((eax + edx + 8));
        fp_stack[0] = -fp_stack[0];
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_tmp_11 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_11;
        fp_stack[0] *= fp_stack[4];
        fp_stack++;
        fp_tmp_12 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_12;
        fp_stack[0] *= fp_stack[4];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_tmp_13 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_13;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0xc0));
        *(fp_stack--) = *((ebp - 0xb8));
        fp_tmp_14 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_14;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_15 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_15;
        *((ebp - 0xc0)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0xb8)) = fp_stack[0];
        fp_stack--;
        al = (*((ebp - 0x40)) == 3) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x40))++;
    }
label_45:
    al = (*((ebp - 0x44)) == 3) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x44))++;
    if (eax == 0) {
        goto label_6;
    }
label_43:
    *(fp_stack--) = *((ebp - 0x98));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((ebp - 0xb0));
    *(fp_stack--) = 0.0;
    *(fp_stack--) = *((ebp - 0xc0));
    *(fp_stack--) = *((ebp - 0xb8));
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    fp_tmp_16 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_16;
    fp_stack[0] *= fp_stack[5];
    fp_stack++;
    fp_tmp_17 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_17;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_tmp_18 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_18;
    fp_stack[0] += fp_stack[2];
    fp_stack++;
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = 0.0;
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[2];
    *(fp_stack--) = fp_stack[4];
    fp_stack[0] *= fp_stack[2];
    fp_tmp_19 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_19;
    fp_stack[0] *= fp_stack[4];
    fp_stack++;
    fp_tmp_20 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_20;
    fp_stack[0] *= fp_stack[4];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_tmp_21 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_21;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = 0.0;
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    fp_tmp_22 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_22;
    fp_stack[0] *= fp_stack[5];
    fp_stack++;
    fp_tmp_23 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_23;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_tmp_24 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_24;
    fp_stack[0] += fp_stack[2];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[3] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = 0.0;
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] *= fp_stack[4];
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    fp_tmp_25 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_25;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_tmp_26 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_26;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_stack[0] -= fp_stack[3];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_27 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_27;
    *((ebp - 0xd0)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0xc8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x3c));
    esi = *(eax);
    *((ebp - 0x4c)) = 2;
    if (*((ebp - 0x4c)) > esi) {
        goto label_42;
    }
    while (eax == 0) {
        eax = *((ebp - 0x4c));
        eax--;
        *((ebp - 0x42c)) = eax;
        *(fp_stack--) = *((ebp - 0x42c));
        eax = *((ebp + 0x40));
        *(fp_stack--) = *(eax);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 0.0;
        *(fp_stack--) = *((ebp - 0x218));
        *(fp_stack--) = *((ebp - 0x210));
        fp_tmp_28 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_28;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_29 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_29;
        *((ebp - 0x278)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x270)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xe8));
        ebx = *((ebp - 0xe8));
        eax = *((ebp - 0xdc));
        edx = *((ebp - 0xdc));
        edx *= *((ebp - 0x4c));
        eax = *((ebp - 0xe4));
        edi = edx + eax;
        eax = *((ebp - 0xe8));
        ecx = *((ebp - 0xe8));
        eax = *((ebp - 0xdc));
        edx = *((ebp - 0xdc));
        edx *= *((ebp - 0x4c));
        eax = *((ebp - 0xe4));
        eax = edx + eax;
        eax <<= 4;
        *(fp_stack--) = *((eax + ecx));
        *(fp_stack--) = *((eax + ecx + 8));
        eax = *((ebp - 0x21c));
        edx = eax - 1;
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + edx*8));
        edx = *((ebp - 0x434));
        edx *= *((ebp - 0x5c));
        eax = *((ebp - 0x21c));
        eax *= *((ebp - 0x430));
        eax = edx + eax;
        eax += *((ebp - 0x58));
        edx = *((ebp - 0x494));
        edx = eax + edx;
        eax = *((ebp + 0x24));
        *(fp_stack--) = *((eax + edx*8));
        edx = *((ebp - 0x434));
        edx *= *((ebp - 0x5c));
        eax = *((ebp - 0x21c));
        eax *= *((ebp - 0x430));
        eax = edx + eax;
        eax += *((ebp - 0x54));
        edx = *((ebp - 0x494));
        edx = eax + edx;
        eax = *((ebp + 0x24));
        *(fp_stack--) = *((eax + edx*8));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x4a0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((ebp - 0x4a8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x98));
        fp_stack[0] = -fp_stack[0];
        *(fp_stack--) = 0.0;
        *(fp_stack--) = *((ebp - 0x278));
        *(fp_stack--) = *((ebp - 0x270));
        fp_tmp_30 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_30;
        fp_stack[0] -= fp_stack[3];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0xd0));
        *(fp_stack--) = *((ebp - 0xc8));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] = abs(fp_stack[0]);
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] = abs(fp_stack[0]);
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        eax = (int32_t) al;
        if (eax != 0) {
            *(fp_stack--) = fp_stack[3];
            fp_stack[0] /= fp_stack[3];
            fp_stack[4] *= fp_stack[0];
            fp_tmp_31 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_31;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            *(fp_stack--) = fp_stack[1];
            fp_stack[0] *= fp_stack[4];
            fp_stack[0] += fp_stack[1];
            fp_tmp_32 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_32;
            fp_stack[0] *= fp_stack[4];
            fp_stack++;
            fp_tmp_33 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_33;
            fp_stack[1] -= fp_stack[0];
            fp_stack++;
            fp_tmp_34 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_34;
            fp_stack[0] /= fp_stack[1];
            fp_tmp_35 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_35;
            fp_stack[1] /= fp_stack[0];
            fp_stack++;
        } else {
            *(fp_stack--) = fp_stack[2];
            fp_stack[0] /= fp_stack[4];
            fp_stack[3] *= fp_stack[0];
            fp_tmp_36 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_36;
            fp_stack[0] += fp_stack[4];
            fp_stack++;
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] *= fp_stack[3];
            fp_stack[0] += fp_stack[2];
            fp_tmp_37 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_37;
            fp_stack[0] *= fp_stack[3];
            fp_stack++;
            fp_stack[2] -= fp_stack[0];
            fp_stack++;
            fp_stack[0] /= fp_stack[2];
            fp_tmp_38 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_38;
            fp_stack[2] /= fp_stack[0];
            fp_stack++;
            fp_tmp_39 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_39;
        }
        *(fp_stack--) = *((ebp - 0x4a0));
        *(fp_stack--) = *((ebp - 0x4a8));
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[4];
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[4];
        fp_tmp_40 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_40;
        fp_stack[0] *= fp_stack[3];
        fp_stack++;
        fp_tmp_41 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_41;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_tmp_42 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_42;
        fp_stack[2] -= fp_stack[0];
        fp_stack++;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_43 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_43;
        eax = edi;
        eax <<= 4;
        *((eax + ebx)) = fp_stack[0];
        fp_stack--;
        *((eax + ebx + 8)) = fp_stack[0];
        fp_stack--;
        al = (*((ebp - 0x4c)) == esi) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x4c))++;
    }
label_42:
    eax = *((ebp - 0x450));
    al = (*((ebp - 0x54)) == eax) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x54))++;
    if (eax == 0) {
        goto label_7;
    }
label_40:
    edx = *((ebp - 0x454));
    al = (*((ebp - 0x58)) == edx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x58))++;
    if (eax == 0) {
        goto label_8;
    }
label_38:
    ecx = *((ebp - 0x458));
    al = (*((ebp - 0x5c)) == ecx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x5c))++;
    if (eax == 0) {
        goto label_9;
    }
label_36:
    eax = *((ebp - 0x21c));
    al = (eax == *((ebp - 0x45c))) ? 1 : 0;
    edx = (int32_t) al;
    eax = *((ebp - 0x21c));
    eax++;
    *((ebp - 0x21c)) = eax;
    if (edx == 0) {
        goto label_10;
    }
label_34:
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe1;
    eax = ebp - 0x208;
    *((ebp - 0x3f8)) = eax;
    *((ebp - 0x3fc)) = 0x100;
    *((ebp - 0x3e4)) = 0x8071457;
    *((ebp - 0x3e0)) = 9;
    *((ebp - 0x3c8)) = 0x8071460;
    *((ebp - 0x3cc)) = 5;
    *((ebp - 0x41c)) = 0x4900;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe3;
    *((ebp - 0x3ec)) = 0x8071465;
    *((ebp - 0x3e8)) = 3;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x21;
    *((esp + 4)) = 0x8071468;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe4;
    *((ebp - 0x3ec)) = 0x8071489;
    *((ebp - 0x3e8)) = 9;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8071492;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 0x18;
    *((esp + 4)) = 0x80714ad;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe5;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x19;
    *((esp + 4)) = 0x80714c5;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 0x18;
    *((esp + 4)) = 0x80714ad;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe6;
    *((ebp - 0x3ec)) = 0x80714de;
    *((ebp - 0x3e8)) = 0xb;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xd;
    *((esp + 4)) = 0x80714e9;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0x218));
    *((ebp - 0x288)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x288;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *(fp_stack--) = *((ebp - 0x210));
    *((ebp - 0x290)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x290;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe7;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x80714f6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = ebp - 0x218;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_complex ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe8;
    *((ebp - 0x3ec)) = 0x8071507;
    *((ebp - 0x3e8)) = 0xa;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8071511;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xe9;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x13;
    *((esp + 4)) = 0x8071522;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xea;
    *((ebp - 0x3ec)) = 0x8071535;
    *((ebp - 0x3e8)) = 0x15;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x807154a;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0x88));
    fp_stack[0] -= *((ebp - 0x80));
    fp_stack[0] *= *((ebp - 0x68));
    *((ebp - 0x298)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x298;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x807155a;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0x88));
    fp_stack[0] -= *((ebp - 0x80));
    *((ebp - 0x2a0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x2a0;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x807155c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xeb;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 6;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xe;
    *((esp + 4)) = 0x807155e;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0x88));
    fp_stack[0] -= *((ebp - 0x80));
    fp_stack[0] *= *((ebp - 0x68));
    *((ebp - 0x2a8)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x2a8;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x807155a;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0x88));
    fp_stack[0] -= *((ebp - 0x80));
    *((ebp - 0x2b0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x2b0;
    *((esp + 4)) = eax;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x807155c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp - 0x108));
    edx = *((ebp - 0x108));
    ebx = *((ebp - 0x104));
    eax = *((ebp - 0xf8));
    edi = *((ebp - 0xf4));
    esi = *((ebp - 0xfc));
    do {
        if (eax > edi) {
            goto label_46;
        }
        ecx = eax;
        ecx *= esi;
        ecx += ebx;
        ecx <<= 4;
        *(fp_stack--) = 0.0;
        *((ecx + edx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((ecx + edx + 8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_46:
    eax = *((ebp + 0x3c));
    ebx = *(eax);
    *((ebp - 0x4c)) = 2;
    if (*((ebp - 0x4c)) > ebx) {
        goto label_47;
    }
    while (eax == 0) {
        eax = *((ebp - 0x4c));
        eax--;
        *((ebp - 0x42c)) = eax;
        *(fp_stack--) = *((ebp - 0x42c));
        eax = *((ebp + 0x40));
        *(fp_stack--) = *(eax);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xf0));
        fp_stack[0] *= *((ebp - 0x68));
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x108));
        edx = *((ebp - 0xfc));
        ecx = *((ebp - 0xfc));
        ecx *= *((ebp - 0x4c));
        edx = *((ebp - 0x104));
        edi = ecx + edx;
        edx = *((ebp - 0xe8));
        ecx = *((ebp - 0xdc));
        esi = *((ebp - 0xdc));
        esi *= *((ebp - 0x4c));
        ecx = *((ebp - 0xe4));
        ecx = esi + ecx;
        ecx <<= 4;
        *(fp_stack--) = *((ecx + edx));
        *(fp_stack--) = *((ecx + edx + 8));
        *(fp_stack--) = *(0x8071620);
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 0.0;
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] *= fp_stack[4];
        fp_stack++;
        *(fp_stack--) = *(0x8071620);
        fp_stack[0] *= fp_stack[3];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_tmp_44 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_44;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        edx = edi;
        edx <<= 4;
        *((edx + eax)) = fp_stack[0];
        fp_stack--;
        *((edx + eax + 8)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0xf1;
        *((ebp - 0x3ec)) = 0x807156c;
        *((ebp - 0x3e8)) = 9;
        *((ebp - 0x41c)) = 0x1000;
        *((ebp - 0x418)) = 0x5c;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        eax = ebp - 0xf0;
        *((esp + 4)) = eax;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp - 0x108));
        edx = *((ebp - 0xfc));
        ecx = *((ebp - 0xfc));
        ecx *= *((ebp - 0x4c));
        edx = *((ebp - 0x104));
        edx = ecx + edx;
        edx <<= 4;
        *(fp_stack--) = *((edx + eax + 8));
        *((ebp - 0x2b8)) = fp_stack[0];
        fp_stack--;
        *((esp + 8)) = 8;
        eax = ebp - 0x2b8;
        *((esp + 4)) = eax;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        al = (*((ebp - 0x4c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x4c))++;
    }
label_47:
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xf3;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xf4;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xf5;
    *((ebp - 0x3ec)) = 0x8071465;
    *((ebp - 0x3e8)) = 3;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x21;
    *((esp + 4)) = " # Energy(eV)         Re(chi1(w))";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0x3c));
    ebx = *(eax);
    *((ebp - 0x4c)) = 2;
    if (*((ebp - 0x4c)) > ebx) {
        goto label_48;
    }
    while (eax == 0) {
        eax = *((ebp - 0x4c));
        eax--;
        *((ebp - 0x42c)) = eax;
        *(fp_stack--) = *((ebp - 0x42c));
        eax = *((ebp + 0x40));
        *(fp_stack--) = *(eax);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xf0));
        fp_stack[0] *= *((ebp - 0x68));
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0xf9;
        *((ebp - 0x3ec)) = 0x807156c;
        *((ebp - 0x3e8)) = 9;
        *((ebp - 0x41c)) = 0x1000;
        *((ebp - 0x418)) = 0x5c;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        eax = ebp - 0xf0;
        *((esp + 4)) = eax;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp - 0x108));
        edx = *((ebp - 0xfc));
        ecx = *((ebp - 0xfc));
        ecx *= *((ebp - 0x4c));
        edx = *((ebp - 0x104));
        edx = ecx + edx;
        edx <<= 4;
        *(fp_stack--) = *((edx + eax));
        *((ebp - 0x2c0)) = fp_stack[0];
        fp_stack--;
        *((esp + 8)) = 8;
        eax = ebp - 0x2c0;
        *((esp + 4)) = eax;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        al = (*((ebp - 0x4c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x4c))++;
    }
label_48:
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xfb;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xfc;
    *((ebp - 0x41c)) = 0x80;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0xfd;
    *((ebp - 0x3ec)) = 0x8071465;
    *((ebp - 0x3e8)) = 3;
    *((ebp - 0x41c)) = 0x1000;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x22;
    *((esp + 4)) = " # Energy(eV)         abs(chi1(w))";
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0x3c));
    ebx = *(eax);
    *((ebp - 0x4c)) = 2;
    if (*((ebp - 0x4c)) > ebx) {
        goto label_49;
    }
    while (eax == 0) {
        eax = *((ebp - 0x4c));
        eax--;
        *((ebp - 0x42c)) = eax;
        *(fp_stack--) = *((ebp - 0x42c));
        eax = *((ebp + 0x40));
        *(fp_stack--) = *(eax);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xf0));
        fp_stack[0] *= *((ebp - 0x68));
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x414)) = "linopt.F90";
        *((ebp - 0x410)) = 0x101;
        *((ebp - 0x3ec)) = 0x807156c;
        *((ebp - 0x3e8)) = 9;
        *((ebp - 0x41c)) = 0x1000;
        *((ebp - 0x418)) = 0x5c;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        eax = ebp - 0xf0;
        *((esp + 4)) = eax;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp - 0x108));
        edx = *((ebp - 0xfc));
        ecx = *((ebp - 0xfc));
        ecx *= *((ebp - 0x4c));
        edx = *((ebp - 0x104));
        edx = ecx + edx;
        edx <<= 4;
        *(fp_stack--) = *((edx + eax));
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((edx + eax + 8));
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        cabs ();
        *((ebp - 0x2c8)) = fp_stack[0];
        fp_stack--;
        *((esp + 8)) = 8;
        eax = ebp - 0x2c8;
        *((esp + 4)) = eax;
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x41c;
        *(esp) = eax;
        gfortran_st_write_done ();
        al = (*((ebp - 0x4c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x4c))++;
    }
label_49:
    *((ebp - 0x414)) = "linopt.F90";
    *((ebp - 0x410)) = 0x105;
    *((ebp - 0x41c)) = 0;
    *((ebp - 0x418)) = 0x5c;
    eax = ebp - 0x41c;
    *(esp) = eax;
    gfortran_st_close ();
    eax = *((ebp - 0x240));
    if (eax == 0) {
        *((esp + 8)) = 0x80713d7;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 263 of file linopt.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x240));
    free (eax);
    *((ebp - 0x240)) = 0;
    eax = *((ebp - 0x264));
    if (eax == 0) {
        *((esp + 8)) = 0x80713fb;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 263 of file linopt.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x264));
    free (eax);
    *((ebp - 0x264)) = 0;
    eax = *((ebp - 0xe8));
    if (eax == 0) {
        *((esp + 8)) = 0x807137b;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 263 of file linopt.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xe8));
    free (eax);
    *((ebp - 0xe8)) = 0;
    eax = *((ebp - 0x108));
    if (eax == 0) {
        *((esp + 8)) = 0x80713d3;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 263 of file linopt.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x108));
    free (eax);
    *((ebp - 0x108)) = 0;
    eax = *((ebp - 0x264));
    if (eax != 0) {
        eax = *((ebp - 0x264));
        free (eax);
    }
    *((ebp - 0x264)) = 0;
    eax = *((ebp - 0x240));
    if (eax != 0) {
        eax = *((ebp - 0x240));
        free (eax);
    }
    *((ebp - 0x240)) = 0;
    eax = *((ebp - 0x108));
    if (eax != 0) {
        eax = *((ebp - 0x108));
        free (eax);
    }
    *((ebp - 0x108)) = 0;
    eax = *((ebp - 0xe8));
    if (eax != 0) {
        eax = *((ebp - 0xe8));
        free (eax);
    }
    *((ebp - 0xe8)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806aeac */
#include <stdint.h>
 
int32_t dbg_wffclose (void) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    wffile_type wff;
    integer(kind=4) ier;
    /* void wffclose(wffile_type wff,integer(kind=4) ier); */
    eax = *((ebp + 0xc));
    *(eax) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax == 0) {
        *((ebp - 0x24)) = 0x80733b4;
        *((ebp - 0x20)) = 0x47;
        *((ebp - 0x2c)) = 0;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x28)) = eax;
        eax = ebp - 0x2c;
        *(esp) = eax;
        gfortran_st_close ();
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_0;
        }
        eax = *((ebp + 8));
        edx = *((eax + 0x94));
        eax = *((ebp + 8));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_0;
        }
        *((ebp - 0x24)) = 0x80733b4;
        *((ebp - 0x20)) = 0x5a;
        *((ebp - 0x2c)) = 0;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x28)) = eax;
        eax = ebp - 0x2c;
        *(esp) = eax;
        gfortran_st_close ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806cbe4 */
#include <stdint.h>
 
int32_t dbg_mati3inv (void) {
    int32_t var_3c0h;
    int32_t var_3bch;
    int32_t var_3ach;
    int32_t var_3a8h;
    char * var_3a4h;
    int32_t var_3a0h;
    int32_t var_380h;
    char * var_37ch;
    int32_t var_378h;
    int32_t var_36ch;
    int32_t var_368h;
    int32_t var_258h;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ch;
    int32_t var_248h;
    int32_t var_244h;
    int32_t var_240h;
    int32_t var_23ch;
    int32_t var_238h;
    integer(kind=4)[4][4] tt;
    int32_t var_230h;
    int32_t var_22ch;
    int32_t var_228h;
    int32_t var_224h;
    int32_t var_220h;
    int32_t var_21ch;
    int32_t var_218h;
    int32_t var_214h;
    int32_t var_210h;
    integer(kind=4) dd;
    integer(kind=4)[4][4] mm;
    integer(kind=4)[4][4] mit;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void mati3inv(integer(kind=4)[4][4] mm,integer(kind=4)[4][4] mit); */
    eax = *((ebp + 8));
    edx = *((eax + 0x10));
    eax = *((ebp + 8));
    eax = *((eax + 0x20));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 0x14));
    eax = *((ebp + 8));
    eax = *((eax + 0x1c));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x234)) = eax;
    eax = *((ebp + 8));
    edx = *((eax + 0x14));
    eax = *((ebp + 8));
    eax = *((eax + 0x18));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 0xc));
    eax = *((ebp + 8));
    eax = *((eax + 0x20));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x230)) = eax;
    eax = *((ebp + 8));
    edx = *((eax + 0xc));
    eax = *((ebp + 8));
    eax = *((eax + 0x1c));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 0x10));
    eax = *((ebp + 8));
    eax = *((eax + 0x18));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x22c)) = eax;
    eax = *((ebp + 8));
    edx = *((eax + 8));
    eax = *((ebp + 8));
    eax = *((eax + 0x1c));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 4));
    eax = *((ebp + 8));
    eax = *((eax + 0x20));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x228)) = eax;
    eax = *((ebp + 8));
    edx = *(eax);
    eax = *((ebp + 8));
    eax = *((eax + 0x20));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 8));
    eax = *((ebp + 8));
    eax = *((eax + 0x18));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x224)) = eax;
    eax = *((ebp + 8));
    edx = *((eax + 4));
    eax = *((ebp + 8));
    eax = *((eax + 0x18));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *(eax);
    eax = *((ebp + 8));
    eax = *((eax + 0x1c));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x220)) = eax;
    eax = *((ebp + 8));
    edx = *((eax + 4));
    eax = *((ebp + 8));
    eax = *((eax + 0x14));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 8));
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x21c)) = eax;
    eax = *((ebp + 8));
    edx = *((eax + 8));
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *(eax);
    eax = *((ebp + 8));
    eax = *((eax + 0x14));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x218)) = eax;
    eax = *((ebp + 8));
    edx = *(eax);
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 4));
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    eax *= ecx;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x214)) = eax;
    eax = *((ebp + 8));
    edx = *(eax);
    eax = *((ebp - 0x234));
    edx *= eax;
    eax = *((ebp + 8));
    ecx = *((eax + 4));
    eax = *((ebp - 0x230));
    eax *= ecx;
    ecx = edx + eax;
    eax = *((ebp + 8));
    edx = *((eax + 8));
    eax = *((ebp - 0x22c));
    eax *= edx;
    eax = ecx + eax;
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) == 0) {
        goto label_1;
    }
    edi = *((ebp - 0x1c));
    ecx = 1;
label_0:
    if (ecx > 3) {
        goto label_2;
    }
    eax = ecx;
    eax += eax;
    eax += ecx;
    eax -= 4;
    *((ebp - 0x3bc)) = eax;
    eax = ecx;
    eax += eax;
    eax += ecx;
    eax -= 4;
    *((ebp - 0x3c0)) = eax;
    ebx = 1;
    do {
        if (ebx > 3) {
            goto label_3;
        }
        esi = *((ebp - 0x3c0));
        esi = ebx + esi;
        eax = *((ebp - 0x3bc));
        eax = ebx + eax;
        eax = *((ebp + eax*4 - 0x234));
        edx = *((ebp + eax*4 - 0x234));
        edx >>= 0x1f;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        edx = eax;
        eax = *((ebp + 0xc));
        *((eax + esi*4)) = edx;
        ebx++;
    } while (1);
label_3:
    ecx++;
    goto label_0;
label_1:
    *((ebp - 0x3a4)) = "mati3inv.F90";
    *((ebp - 0x3a0)) = 0x5a;
    eax = ebp - 0x210;
    *((ebp - 0x36c)) = eax;
    *((ebp - 0x368)) = 0x1f4;
    *((ebp - 0x380)) = 0;
    *((ebp - 0x3a8)) = 0;
    *((ebp - 0x37c)) = "(5a,2x,9i5,a)\n mati3inv : BUG -  Attempting to invert integer array   ==> determinant is zero.COLL";
    *((ebp - 0x378)) = 0xd;
    *((ebp - 0x3ac)) = 0x5000;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x807390a;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x807390b;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x807390a;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x24;
    *((esp + 4)) = 0x807391c;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x807390a;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x250)) = 0x10a;
    *((ebp - 0x248)) = 1;
    *((ebp - 0x244)) = 3;
    *((ebp - 0x24c)) = 1;
    *((ebp - 0x23c)) = 1;
    *((ebp - 0x238)) = 3;
    *((ebp - 0x240)) = 3;
    eax = *((ebp + 8));
    *((ebp - 0x258)) = eax;
    *((ebp - 0x254)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    eax = ebp - 0x258;
    *((esp + 4)) = eax;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_array ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8073940;
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x3ac;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x807395b;
    eax = ebp - 0x210;
    *((esp + 4)) = eax;
    wrtout_ (0x8073960);
    *((esp + 4)) = 4;
    *(esp) = 0x807395b;
    leave_new_ ();
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806f9a4 */
#include <stdint.h>
 
int32_t dbg_wrtout (char * arg_ch) {
    int32_t var_668h;
    int32_t var_664h;
    int32_t var_660h;
    int32_t var_65ch;
    char * var_638h;
    int32_t var_634h;
    int32_t var_46ch;
    int32_t var_464h;
    int32_t var_460h;
    int32_t var_45ch;
    int32_t var_454h;
    int32_t var_450h;
    int32_t var_44ch;
    int32_t var_448h;
    int32_t var_444h;
    int32_t var_440h;
    int32_t var_43ch;
    int32_t var_438h;
    int32_t var_434h;
    int32_t var_430h;
    int32_t var_42ch;
    int32_t var_428h;
    int32_t var_424h;
    int32_t var_420h;
    int32_t var_41ch;
    int32_t var_418h;
    int32_t var_413h;
    void * s;
    void * s1;
    integer(kind=4) lenmessage;
    integer(kind=4) rtnpos;
    logical(kind=4) test_mpi;
    integer(kind=4) unit;
    integer(kind=4) const _message;
    integer(kind=4) const _mode_paral;
    char * s2;
    size_t n;
    char * var_ch;
    int32_t var_10h;
    char * var_14h;
    /* void wrtout(integer(kind=4) unit,integer(kind=4) const _message,integer(kind=4) const _mode_paral); */
    *((ebp - 0x1c)) = 0;
    *((esp + 0xc)) = 0x80742b8;
    *((esp + 8)) = 1;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    *(esp) = 0x1f4;
    eax = gfortran_compare_string ();
    if (eax == 0) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    eax = ebp - 0x218;
    memmove (eax, eax, 0x1f4);
    *((ebp - 0x24)) = 0x1f4;
    *((esp + 0x10)) = 0;
    *((esp + 0xc)) = 0x80742b9;
    *((esp + 8)) = 1;
    eax = ebp - 0x218;
    *((esp + 4)) = eax;
    *(esp) = 0x1f4;
    eax = gfortran_string_index ();
    *((ebp - 0x20)) = eax;
    do {
        if (*((ebp - 0x20)) == 0) {
            goto label_1;
        }
        eax = *((ebp - 0x20));
        eax--;
        edx = 0;
        ebx = edx;
        __asm ("cmovns ebx, eax");
        if (ebx > 0x1f3) {
            eax = ebp - 0x218;
            eax = ebp - 0x40c;
            memmove (eax, eax, 0x1f4);
        } else {
            eax = ebp - 0x218;
            eax = ebp - 0x40c;
            memmove (eax, eax, ebx);
            eax = 0x1f4;
            edx = 0x1f4;
            edx -= ebx;
            ecx = ebx;
            eax = ebp - 0x40c;
            eax += ecx;
            memset (eax, 0x20, edx);
        }
        *((ebp - 0x660)) = 0x80742ba;
        *((ebp - 0x65c)) = 0x9e;
        *((ebp - 0x638)) = "(a)BUG";
        *((ebp - 0x634)) = 3;
        *((ebp - 0x668)) = 0x1000;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x664)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write ();
        eax = ebp - 0x41c;
        edx = ebp - 0x40c;
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 0x1f4;
        *((esp + 4)) = eax;
        eax = ebp - 0x418;
        *(esp) = eax;
        gfortran_string_trim ();
        edx = *((ebp - 0x418));
        eax = *((ebp - 0x41c));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp - 0x418));
        if (eax > 0) {
            eax = *((ebp - 0x41c));
            if (eax == 0) {
                goto label_2;
            }
            free (eax);
        }
label_2:
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp - 0x20));
        eax++;
        edx = 1;
        edx -= eax;
        edx += *((ebp - 0x24));
        ecx = 0;
        ebx = ecx;
        __asm ("cmovns ebx, edx");
        if (ebx > 0x1f3) {
            edx = eax;
            eax = ebp - 0x218;
            edx--;
            eax += edx;
            eax = ebp - 0x218;
            eax = memmove (eax, eax, 0x1f4);
        } else {
            edx = eax;
            eax = ebp - 0x218;
            edx--;
            eax += edx;
            eax = ebp - 0x218;
            memmove (eax, eax, ebx);
            eax = 0x1f4;
            edx = 0x1f4;
            edx -= ebx;
            ecx = ebx;
            eax = ebp - 0x218;
            eax += ecx;
            memset (eax, 0x20, edx);
        }
        eax = *((ebp - 0x20));
        *((ebp - 0x24)) -= eax;
        *((esp + 0x10)) = 0;
        *((esp + 0xc)) = 0x80742b9;
        *((esp + 8)) = 1;
        eax = ebp - 0x218;
        *((esp + 4)) = eax;
        *(esp) = 0x1f4;
        eax = gfortran_string_index ();
        *((ebp - 0x20)) = eax;
    } while (1);
label_1:
    *((ebp - 0x660)) = 0x80742ba;
    *((ebp - 0x65c)) = 0xa3;
    *((ebp - 0x638)) = "(a)BUG";
    *((ebp - 0x634)) = 3;
    *((ebp - 0x668)) = 0x1000;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x664)) = eax;
    eax = ebp - 0x668;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x424;
    edx = ebp - 0x218;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x420;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x420));
    eax = *((ebp - 0x424));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = ebp - 0x668;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp - 0x420));
    if (eax > 0) {
        eax = *((ebp - 0x424));
        if (eax == 0) {
            goto label_3;
        }
        free (eax);
    }
label_3:
    eax = ebp - 0x668;
    *(esp) = eax;
    gfortran_st_write_done ();
    goto label_4;
label_0:
    *((ebp - 0x660)) = 0x80742ba;
    *((ebp - 0x65c)) = 0xa5;
    *((ebp - 0x668)) = 0x80;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x664)) = eax;
    eax = ebp - 0x668;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x668;
    *(esp) = eax;
    gfortran_st_write_done ();
label_4:
    eax = ebp - 0x42c;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x428;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x42c));
    eax = *((ebp - 0x428));
    *((esp + 0x10)) = 0;
    *((esp + 0xc)) = 0x80742c8;
    *((esp + 8)) = 3;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_string_index ();
    al = (eax != 0) ? 1 : 0;
    ebx = (int32_t) al;
    eax = *((ebp - 0x428));
    if (eax > 0) {
        eax = *((ebp - 0x42c));
        if (eax == 0) {
            goto label_5;
        }
        free (eax);
    }
label_5:
    if (ebx != 0) {
        *((ebp - 0x660)) = 0x80742ba;
        *((ebp - 0x65c)) = 0xa9;
        *((ebp - 0x638)) = "(a)BUG";
        *((ebp - 0x634)) = 3;
        *((ebp - 0x668)) = 0x1000;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x664)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x20;
        *((esp + 4)) = "  Action : contact ABINIT group.Calculation completed(a,i5,a,i4,a).Delivered WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT";
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x660)) = 0x80742ba;
        *((ebp - 0x65c)) = 0xaa;
        *((ebp - 0x668)) = 0x80;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x664)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write ();
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    eax = ebp - 0x43c;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x438;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = ebp - 0x434;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x430;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x43c));
    eax = *((ebp - 0x438));
    *((esp + 0x10)) = 0;
    *((esp + 0xc)) = 0x80742c8;
    *((esp + 8)) = 3;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_string_index ();
    if (eax == 0) {
        edx = *((ebp - 0x434));
        eax = *((ebp - 0x430));
        *((esp + 0x10)) = 0;
        *((esp + 0xc)) = 0x80742ec;
        *((esp + 8)) = 0x15;
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = gfortran_string_index ();
        if (eax == 0) {
            goto label_6;
        }
    }
    eax = 1;
    goto label_7;
label_6:
    eax = 0;
label_7:
    ebx = 0;
    eax = *((ebp - 0x430));
    if (eax > 0) {
        eax = *((ebp - 0x434));
        if (eax == 0) {
            goto label_8;
        }
        free (eax);
    }
label_8:
    eax = *((ebp - 0x438));
    if (eax > 0) {
        eax = *((ebp - 0x43c));
        if (eax == 0) {
            goto label_9;
        }
        free (eax);
    }
label_9:
    if (ebx != 0) {
        eax = *(obj.nwarning.1508);
        if (eax <= 0x270f) {
            eax = *(obj.ncomment.1507);
            if (eax <= 0x3e7) {
                *((ebp - 0x660)) = 0x80742ba;
                *((ebp - 0x65c)) = 0xb1;
                *((ebp - 0x638)) = 0x8074301;
                *((ebp - 0x634)) = 0xd;
                *((ebp - 0x668)) = 0x1000;
                eax = *((ebp + 8));
                eax = *(eax);
                *((ebp - 0x664)) = eax;
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_st_write ();
                *((esp + 8)) = 0xa;
                *((esp + 4)) = 0x807430e;
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_transfer_character ();
                *((esp + 8)) = 4;
                *((esp + 4)) = 0x80761f4;
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 0xd;
                *((esp + 4)) = 0x8074318;
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_transfer_character ();
                *((esp + 8)) = 4;
                *((esp + 4)) = 0x80761f8;
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 0x16;
                *((esp + 4)) = 0x8074325;
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_transfer_character ();
                eax = ebp - 0x668;
                *(esp) = eax;
                gfortran_st_write_done ();
            }
        } else {
            *((ebp - 0x660)) = 0x80742ba;
            *((ebp - 0x65c)) = 0xb4;
            *((ebp - 0x638)) = 0x807433b;
            *((ebp - 0x634)) = 0xd;
            *((ebp - 0x668)) = 0x1000;
            eax = *((ebp + 8));
            eax = *(eax);
            *((ebp - 0x664)) = eax;
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0xa;
            *((esp + 4)) = 0x807430e;
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            *((esp + 4)) = 0x80761f4;
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 0xd;
            *((esp + 4)) = 0x8074318;
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            *((esp + 4)) = 0x80761f8;
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 0x16;
            *((esp + 4)) = 0x8074325;
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0x668;
            *(esp) = eax;
            gfortran_st_write_done ();
        }
        eax = *(obj.iexit.1504);
        if (eax == 0) {
            goto label_10;
        }
        *((ebp - 0x660)) = 0x80742ba;
        *((ebp - 0x65c)) = 0xb7;
        *((ebp - 0x638)) = "(a)BUG";
        *((ebp - 0x634)) = 3;
        *((ebp - 0x668)) = 0x1000;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x664)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x23;
        *((esp + 4)) = 0x8074348;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
label_10:
    eax = ebp - 0x444;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x440;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x444));
    eax = *((ebp - 0x440));
    *((esp + 0x10)) = 0;
    *((esp + 0xc)) = 0x807436b;
    *((esp + 8)) = 4;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_string_index ();
    al = (eax != 0) ? 1 : 0;
    ebx = (int32_t) al;
    eax = *((ebp - 0x440));
    if (eax > 0) {
        eax = *((ebp - 0x444));
        if (eax == 0) {
            goto label_11;
        }
        free (eax);
    }
label_11:
    if (ebx != 0) {
        *(obj.iexit.1504) = 1;
    }
    eax = ebp - 0x44c;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x448;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x44c));
    eax = *((ebp - 0x448));
    *((esp + 0x10)) = 0;
    *((esp + 0xc)) = 0x807436f;
    *((esp + 8)) = 7;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_string_index ();
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 6) {
            eax = 1;
        }
    } else {
        eax = 0;
    }
    ebx = 0;
    eax = *((ebp - 0x448));
    if (eax > 0) {
        eax = *((ebp - 0x44c));
        if (eax == 0) {
            goto label_12;
        }
        free (eax);
    }
label_12:
    if (ebx != 0) {
        eax = *(obj.nwarning.1508);
        eax++;
        *(obj.nwarning.1508) = eax;
    }
    eax = ebp - 0x454;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x1f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x450;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x454));
    eax = *((ebp - 0x450));
    *((esp + 0x10)) = 0;
    *((esp + 0xc)) = 0x8074376;
    *((esp + 8)) = 7;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_string_index ();
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 6) {
            eax = 1;
        }
    } else {
        eax = 0;
    }
    ebx = 0;
    eax = *((ebp - 0x450));
    if (eax > 0) {
        eax = *((ebp - 0x454));
        if (eax == 0) {
            goto label_13;
        }
        free (eax);
    }
label_13:
    if (ebx != 0) {
        eax = *(obj.ncomment.1507);
        eax++;
        *(obj.ncomment.1507) = eax;
    }
    if (*((ebp - 0x1c)) == 0) {
        goto label_14;
    }
    do {
        if (*((ebp - 0x20)) == 0) {
            goto label_15;
        }
        eax = ebp - 0x45c;
        *((esp + 0x14)) = 0x80742b8;
        *((esp + 0x10)) = 1;
        edx = ebp - 0x413;
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 7;
        *((esp + 4)) = eax;
        *(esp) = 8;
        gfortran_concat_string ();
        eax = *((ebp - 0x20));
        ebx = eax - 1;
        eax = 0;
        __asm ("cmovns eax, ebx");
        eax += 8;
        eax <<= 5;
        if (eax < 0) {
            *(esp) = "Attempt to allocate a negative amount of memory.";
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Memory allocation failed";
            eax = gfortran_os_error ();
        }
        esi = eax;
        eax = 0;
        edx = eax;
        __asm ("cmovns edx, ebx");
        eax = ebp - 0x45c;
        ecx = 0;
        __asm ("cmovns ecx, ebx");
        edi = ecx + 8;
        ecx = *((ebp + 0xc));
        *((esp + 0x14)) = ecx;
        *((esp + 0x10)) = edx;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 8;
        *((esp + 4)) = esi;
        *(esp) = edi;
        gfortran_concat_string ();
        eax = 0;
        __asm ("cmovns eax, ebx");
        ebx = eax + 8;
        if (ebx > 0x1f3) {
            eax = ebp - 0x40c;
            memmove (eax, esi, 0x1f4);
        } else {
            eax = ebp - 0x40c;
            memmove (eax, esi, ebx);
            eax = 0x1f4;
            edx = 0x1f4;
            edx -= ebx;
            ecx = ebx;
            eax = ebp - 0x40c;
            eax += ecx;
            memset (eax, 0x20, edx);
        }
        eax = esi;
        if (eax != 0) {
            free (eax);
        }
        *((ebp - 0x660)) = 0x80742ba;
        *((ebp - 0x65c)) = 0xdc;
        *((ebp - 0x638)) = "(a)BUG";
        *((ebp - 0x634)) = 3;
        *((ebp - 0x668)) = 0x1000;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x664)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write ();
        eax = ebp - 0x464;
        edx = ebp - 0x40c;
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 0x1f4;
        *((esp + 4)) = eax;
        eax = ebp - 0x460;
        *(esp) = eax;
        gfortran_string_trim ();
        edx = *((ebp - 0x460));
        eax = *((ebp - 0x464));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp - 0x460));
        if (eax > 0) {
            eax = *((ebp - 0x464));
            if (eax == 0) {
                goto label_16;
            }
            free (eax);
        }
label_16:
        eax = ebp - 0x668;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp - 0x20));
        eax++;
        edx = 0x1f5;
        edx -= eax;
        ecx = 0;
        ebx = ecx;
        __asm ("cmovns ebx, edx");
        if (ebx > 0x1f3) {
            eax--;
            eax += *((ebp + 0xc));
            eax = *((ebp + 0xc));
            eax = memmove (eax, eax, 0x1f4);
        } else {
            eax--;
            eax += *((ebp + 0xc));
            eax = *((ebp + 0xc));
            memmove (eax, eax, ebx);
            eax = 0x1f4;
            edx = 0x1f4;
            edx -= ebx;
            eax = ebx;
            eax += *((ebp + 0xc));
            memset (eax, 0x20, edx);
        }
        *((esp + 0x10)) = 0;
        *((esp + 0xc)) = 0x80742b9;
        *((esp + 8)) = 1;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        *(esp) = 0x1f4;
        eax = gfortran_string_index ();
        *((ebp - 0x20)) = eax;
    } while (1);
label_15:
    eax = ebp - 0x46c;
    *((esp + 0x14)) = 0x80742b8;
    *((esp + 0x10)) = 1;
    edx = ebp - 0x413;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 7;
    *((esp + 4)) = eax;
    *(esp) = 8;
    gfortran_concat_string ();
    edx = ebp - 0x46c;
    eax = ebp - 0x668;
    ecx = *((ebp + 0xc));
    *((esp + 0x14)) = ecx;
    *((esp + 0x10)) = 0x1f4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    *(esp) = 0x1fc;
    gfortran_concat_string ();
    eax = ebp - 0x668;
    eax = ebp - 0x40c;
    memmove (eax, eax, 0x1f4);
label_14:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806b330 */
#include <stdint.h>
 
int32_t dbg_wffreadnpwrec (void) {
    int32_t var_15ch;
    int32_t var_158h;
    char * var_154h;
    int32_t var_150h;
    int32_t var_144h;
    integer(kind=4) ierr;
    integer(kind=4) ikpt;
    integer(kind=4) nband_disk;
    integer(kind=4) npw;
    integer(kind=4) nspinor;
    wffile_type wff;
    int32_t var_4h;
    int32_t var_8h;
    /* void wffreadnpwrec(integer(kind=4) ierr,integer(kind=4) ikpt,integer(kind=4) nband_disk,integer(kind=4) npw,integer(kind=4) nspinor,wffile_type wff); */
    eax = *((ebp + 8));
    *(eax) = 0;
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_0;
        }
        eax = *((ebp + 0x1c));
        edx = *((eax + 0x94));
        eax = *((ebp + 0x1c));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_0;
        }
    }
    *((ebp - 0x154)) = "wffreadnpwrec.F90";
    *((ebp - 0x150)) = 0x5f;
    eax = *((ebp + 8));
    *(eax) = 0;
    eax = *((ebp + 8));
    *((ebp - 0x144)) = eax;
    *((ebp - 0x15c)) = 0x20;
    eax = *((ebp + 0x1c));
    eax = *(eax);
    *((ebp - 0x158)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x18));
    *((esp + 4)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x15c;
    *(esp) = eax;
    gfortran_st_read_done ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x805cb14 */
#include <stdint.h>
 
int32_t dbg_hdr_io_int (void) {
    int32_t var_99ch;
    int32_t var_994h;
    int32_t var_990h;
    int32_t var_98ch;
    int32_t var_97ch;
    int32_t var_978h;
    void * var_974h;
    int32_t var_970h;
    int32_t var_914h;
    int32_t var_910h;
    int32_t var_90ch;
    int32_t var_908h;
    int32_t var_904h;
    int32_t var_900h;
    int32_t var_8fch;
    int32_t var_8f8h;
    int32_t var_8f4h;
    int32_t var_8f0h;
    int32_t var_8ech;
    int32_t var_8e8h;
    int32_t var_8e4h;
    int32_t var_8e0h;
    int32_t var_8dch;
    int32_t var_8d8h;
    int32_t var_8d4h;
    int32_t var_8d0h;
    int32_t var_8cch;
    int32_t var_8c8h;
    int32_t var_8c4h;
    int32_t var_8c0h;
    int32_t var_8bch;
    int32_t var_8b8h;
    int32_t var_8b4h;
    int32_t var_8b0h;
    int32_t var_8ach;
    int32_t var_8a8h;
    int32_t var_8a4h;
    uint32_t var_8a0h;
    int32_t var_89ch;
    int32_t var_898h;
    int32_t var_894h;
    int32_t var_890h;
    int32_t var_88ch;
    int32_t var_888h;
    int32_t var_884h;
    int32_t var_880h;
    int32_t var_87ch;
    int32_t var_85ch;
    char * var_858h;
    int32_t var_854h;
    int32_t var_848h;
    int32_t var_844h;
    int32_t var_734h;
    int32_t var_730h;
    int32_t var_72ch;
    int32_t var_728h;
    int32_t var_724h;
    int32_t var_720h;
    int32_t var_71ch;
    int32_t var_718h;
    int32_t var_714h;
    int32_t var_708h;
    char * var_704h;
    int32_t var_700h;
    int32_t var_6f4h;
    int32_t var_6f0h;
    int32_t var_5e0h;
    int32_t var_5dch;
    int32_t var_5d8h;
    int32_t var_5d4h;
    int32_t var_5d0h;
    int32_t var_5cch;
    int32_t var_5c8h;
    int32_t var_5c4h;
    int32_t var_5c0h;
    int32_t var_5bch;
    int32_t var_5b8h;
    int32_t var_5b4h;
    int32_t var_5b0h;
    int32_t var_5ach;
    int32_t var_5a8h;
    int32_t var_5a4h;
    int32_t var_5a0h;
    int32_t var_59ch;
    int32_t var_598h;
    int32_t var_594h;
    int32_t var_590h;
    int32_t var_58ch;
    int32_t var_588h;
    int32_t var_584h;
    int32_t var_580h;
    int32_t var_57ch;
    int32_t var_578h;
    int32_t var_574h;
    int32_t var_570h;
    int32_t var_56ch;
    int32_t var_568h;
    int32_t var_564h;
    int32_t var_560h;
    int32_t var_55ch;
    int32_t var_558h;
    int32_t var_554h;
    int32_t var_550h;
    int32_t var_54ch;
    int32_t var_548h;
    int32_t var_544h;
    int32_t var_540h;
    int32_t var_53ch;
    int32_t var_538h;
    int32_t var_534h;
    int32_t var_530h;
    int32_t var_52ch;
    int32_t var_528h;
    int32_t var_524h;
    int32_t var_520h;
    int32_t var_51ch;
    int32_t var_518h;
    int32_t var_514h;
    int32_t var_510h;
    int32_t var_50ch;
    int32_t var_508h;
    int32_t var_504h;
    int32_t var_500h;
    int32_t var_4fch;
    int32_t var_4f8h;
    int32_t var_4f4h;
    int32_t var_4f0h;
    int32_t var_4ech;
    int32_t var_4e8h;
    int32_t var_4e4h;
    int32_t var_4e0h;
    int32_t var_4dch;
    int32_t var_4d8h;
    int32_t var_4d4h;
    int32_t var_4d0h;
    int32_t var_4cch;
    int32_t var_4c8h;
    int32_t var_4c4h;
    int32_t var_4c0h;
    int32_t var_4bch;
    int32_t var_4b8h;
    int32_t var_4b4h;
    int32_t var_4b0h;
    int32_t var_4ach;
    int32_t var_4a8h;
    int32_t var_4a4h;
    int32_t var_4a0h;
    int32_t var_49ch;
    int32_t var_498h;
    int32_t var_494h;
    int32_t var_490h;
    int32_t var_48ch;
    int32_t var_488h;
    int32_t var_484h;
    int32_t var_480h;
    int32_t var_47ch;
    int32_t var_478h;
    int32_t var_474h;
    int32_t var_470h;
    int32_t var_46ch;
    int32_t var_468h;
    int32_t var_464h;
    int32_t var_460h;
    int32_t var_45ch;
    int32_t var_458h;
    int32_t var_454h;
    int32_t var_450h;
    int32_t var_44ch;
    int32_t var_448h;
    int32_t var_438h;
    int32_t var_434h;
    int32_t var_430h;
    int32_t var_42ch;
    int32_t var_428h;
    int32_t var_424h;
    int32_t var_420h;
    int32_t var_41ch;
    int32_t var_418h;
    int32_t var_414h;
    int32_t var_410h;
    int32_t var_40ch;
    int32_t var_408h;
    int32_t var_404h;
    int32_t var_400h;
    int32_t var_3fch;
    int32_t var_3f8h;
    int32_t var_3f4h;
    int32_t var_3f0h;
    int32_t var_3ech;
    int32_t var_3e8h;
    int32_t var_3e4h;
    int32_t var_3e0h;
    int32_t var_3dch;
    int32_t var_3d8h;
    int32_t var_3d4h;
    int32_t var_3d0h;
    int32_t var_3cch;
    int32_t var_3c8h;
    int32_t var_3c4h;
    int32_t var_3c0h;
    int32_t var_3bch;
    int32_t var_3b8h;
    int32_t var_3b4h;
    int32_t var_3b0h;
    int32_t var_3ach;
    int32_t var_3a8h;
    int32_t var_3a4h;
    int32_t var_3a0h;
    int32_t var_39ch;
    int32_t var_398h;
    int32_t var_394h;
    int32_t var_390h;
    int32_t var_38ch;
    int32_t var_388h;
    int32_t var_384h;
    int32_t var_380h;
    int32_t var_37ch;
    int32_t var_378h;
    int32_t var_374h;
    int32_t var_370h;
    int32_t var_36ch;
    int32_t var_368h;
    int32_t var_364h;
    int32_t var_360h;
    int32_t var_35ch;
    int32_t var_358h;
    int32_t var_354h;
    int32_t var_350h;
    int32_t var_34ch;
    int32_t var_348h;
    int32_t var_344h;
    int32_t var_340h;
    int32_t var_33ch;
    int32_t var_338h;
    int32_t var_334h;
    int32_t var_330h;
    int32_t var_32ch;
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    int32_t var_31ch;
    int32_t var_318h;
    int32_t var_314h;
    int32_t var_310h;
    int32_t var_30ch;
    int32_t var_2fch;
    int32_t var_2f8h;
    int32_t var_2f4h;
    int32_t var_2f0h;
    integer(kind=4) ntypat;
    integer(kind=4) nsym;
    integer(kind=4) nsppol;
    integer(kind=4)[5][5] nsel;
    int32_t var_2d0h;
    int32_t var_2cch;
    int32_t var_2c8h;
    int32_t var_2c4h;
    int32_t var_2c0h;
    int32_t var_2bch;
    int32_t var_2b8h;
    int32_t var_2b4h;
    integer(kind=4) npsp;
    integer(kind=4) nkpt;
    integer(kind=4) natom;
    integer(kind=4) mmax;
    int32_t var_2a0h;
    integer(kind=4) lmax;
    integer(kind=4) lloc;
    integer(kind=4) ispden;
    integer(kind=4) ierr;
    integer(kind=4)[5] ibuffer;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    integer(kind=4) iatom;
    integer(kind=4) headform;
    int32_t var_7ah;
    real(kind=8)[5] buffer;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    uint32_t var_60h;
    integer(kind=4) bantot;
    real(kind=8)[4] acell;
    integer(kind=4) bsize;
    integer(kind=4) ii;
    integer(kind=4) ikpt;
    integer(kind=4) ipsp;
    integer(kind=4) isym;
    integer(kind=4) itypat;
    integer(kind=4) lmn2_size;
    integer(kind=4) natinc;
    integer(kind=4) nselect;
    integer(kind=4) fform;
    hdr_type hdr;
    integer(kind=4) rdwr;
    integer(kind=4) unitfi;
    char * s2;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    void * var_14h;
    int32_t var_18h;
    int32_t var_sp_1ch;
    int32_t var_sp_20h;
    int32_t var_24h;
    /* void hdr_io_int(integer(kind=4) fform,hdr_type hdr,integer(kind=4) rdwr,integer(kind=4) unitfi); */
    *((ebp - 0x74)) = 0;
    *((ebp - 0x9c)) = 0;
    *((ebp - 0x2d4)) = 0;
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax != 1) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        if (eax != 5) {
            goto label_6;
        }
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 1) {
        *((ebp - 0x2f4)) = 0x8072540;
        *((ebp - 0x2f0)) = 0xae;
        *((ebp - 0x2fc)) = 0;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x2f8)) = eax;
        eax = ebp - 0x2fc;
        *(esp) = eax;
        gfortran_st_rewind ();
    }
    *((ebp - 0x72c)) = 0x8072540;
    *((ebp - 0x728)) = 0xb3;
    *((ebp - 0xa0)) = 0;
    eax = ebp - 0xa0;
    *((ebp - 0x71c)) = eax;
    *((ebp - 0x734)) = 0x20;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x730)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 6;
    eax = ebp - 0x7a;
    *((esp + 4)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_st_read_done ();
    eax = *((ebp - 0xa0));
    if (eax != 0) {
        eax = *((ebp + 8));
        *(eax) = 0;
        goto label_7;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    if (eax != 1) {
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 2) {
            goto label_8;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x33) {
            goto label_8;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x34) {
            goto label_8;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x65) {
            goto label_8;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax != 0x66) {
            goto label_9;
        }
    }
label_8:
    *((ebp - 0x80)) = 0x16;
    goto label_10;
label_9:
    *((ebp - 0x310)) = 0x8072540;
    *((ebp - 0x30c)) = 0xc5;
    *((ebp - 0x318)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x314)) = eax;
    eax = ebp - 0x318;
    *(esp) = eax;
    gfortran_st_backspace ();
    *((ebp - 0x72c)) = 0x8072540;
    *((ebp - 0x728)) = 0xc6;
    *((ebp - 0x734)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x730)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 6;
    eax = ebp - 0x7a;
    *((esp + 4)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x80;
    *((esp + 4)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x734;
    *(esp) = eax;
    gfortran_st_read_done ();
    eax = *((ebp - 0x80));
    if (eax != 0x17) {
        eax = *((ebp - 0x80));
        if (eax == 0x22) {
            goto label_10;
        }
        eax = *((ebp - 0x80));
        if (eax == 0x28) {
            goto label_10;
        }
        eax = *((ebp - 0x80));
        if (eax == 0x29) {
            goto label_10;
        }
        eax = *((ebp - 0x80));
        if (eax == 0x2a) {
            goto label_10;
        }
        eax = *((ebp - 0x80));
        if (eax == 0x2c) {
            goto label_10;
        }
        eax = *((ebp - 0x80));
        if (eax == 0x35) {
            goto label_10;
        }
        *((ebp - 0x72c)) = 0x8072540;
        *((ebp - 0x728)) = 0xd3;
        eax = ebp - 0x2a0;
        *((ebp - 0x6f4)) = eax;
        *((ebp - 0x6f0)) = 0x1f4;
        *((ebp - 0x708)) = 0;
        *((ebp - 0x730)) = 0;
        *((ebp - 0x704)) = "(4a,i3,3a,i8,3a)\n hdr_io : ERROR -";
        *((ebp - 0x700)) = 0x10;
        *((ebp - 0x734)) = 0x5000;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x807255c;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3b;
        *((esp + 4)) = "  The first line of the (WF, DEN or POT) file read in unit  is erroneous.  headform is ";
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 0x14));
        *((esp + 4)) = eax;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x80725ab;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = 0x80725b9;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x80;
        *((esp + 4)) = eax;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x32;
        *((esp + 4)) = ", while it should be 23, 34, 40, 41, 42, 44 or 53.";
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2e;
        *((esp + 4)) = "  Action : check the correctness of your file.COLL";
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x734;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x807262a;
        eax = ebp - 0x2a0;
        *((esp + 4)) = eax;
        wrtout_ (0x8072630);
        *((esp + 4)) = 4;
        *(esp) = 0x807262a;
        leave_new_ ();
    }
label_10:
    eax = *((ebp + 0xc));
    edx = eax + 0x318;
    eax = ebp - 0x7a;
    memmove (edx, eax, 6);
    edx = *((ebp - 0x80));
    eax = *((ebp + 0xc));
    *((eax + 8)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x20)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x24)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x34)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x38)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x3c)) = 0;
    eax = *((ebp + 0xc));
    *(fp_stack--) = 0.0;
    *((eax + 0x184)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *(fp_stack--) = 0.0;
    *((eax + 0x18c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *(fp_stack--) = 0.0;
    *((eax + 0x194)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    ecx = eax + 0x1bc;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_11;
        }
        edx = eax - 1;
        *(fp_stack--) = 0.0;
        *((ecx + edx*8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_11:
    eax = *((ebp + 0xc));
    *(fp_stack--) = 0.0;
    *((eax + 0x21c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *(fp_stack--) = 0.0;
    *((eax + 0x224)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *(fp_stack--) = 0.0;
    *((eax + 0x22c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x80));
    if (eax == 0x16) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0xf7;
        *((ebp - 0x888)) = 0;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 4;
        eax = ebp - 0x5c;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 4;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 0xc;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 0x10;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 4;
        eax = ebp - 0x2a8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((ebp - 0x328)) = 0x109;
        *((ebp - 0x320)) = 1;
        *((ebp - 0x31c)) = 3;
        *((ebp - 0x324)) = 1;
        eax = *((ebp + 0xc));
        eax += 0x40;
        *((ebp - 0x330)) = eax;
        *((ebp - 0x32c)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x330;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 4;
        eax = ebp - 0x2ac;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 4;
        eax = ebp - 0x2d8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 4;
        eax = ebp - 0x2dc;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 4;
        eax = ebp - 0x2e0;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((ebp - 0x340)) = 0x219;
        *((ebp - 0x338)) = 1;
        *((ebp - 0x334)) = 3;
        *((ebp - 0x33c)) = 1;
        eax = ebp - 0x58;
        *((ebp - 0x348)) = eax;
        *((ebp - 0x344)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x348;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = *((ebp + 0xc));
        eax += 0x19c;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((ebp - 0x72c)) = 0x21a;
        *((ebp - 0x724)) = 1;
        *((ebp - 0x720)) = 3;
        *((ebp - 0x728)) = 1;
        *((ebp - 0x718)) = 1;
        *((ebp - 0x714)) = 3;
        *((ebp - 0x71c)) = 3;
        eax = *((ebp + 0xc));
        eax += 0x1d4;
        *((ebp - 0x734)) = eax;
        *((ebp - 0x730)) = 0xfffffffc;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x734;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_read_done ();
        eax = *((ebp - 0x2e0));
        *((ebp - 0x2b0)) = eax;
    } else {
        eax = *((ebp - 0x80));
        if (eax == 0x17) {
            *((ebp - 0x880)) = 0x8072540;
            *((ebp - 0x87c)) = 0xff;
            *((ebp - 0x888)) = 0;
            eax = *((ebp + 0x14));
            eax = *(eax);
            *((ebp - 0x884)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_read ();
            *((esp + 8)) = 4;
            eax = ebp - 0x5c;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 4;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0xc;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x10;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 4;
            eax = ebp - 0x2a8;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((ebp - 0x358)) = 0x109;
            *((ebp - 0x350)) = 1;
            *((ebp - 0x34c)) = 3;
            *((ebp - 0x354)) = 1;
            eax = *((ebp + 0xc));
            eax += 0x40;
            *((ebp - 0x360)) = eax;
            *((ebp - 0x35c)) = 0xffffffff;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 4;
            eax = ebp - 0x360;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_array ();
            *((esp + 8)) = 4;
            eax = ebp - 0x2ac;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x20;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x24;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 4;
            eax = ebp - 0x2d8;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 4;
            eax = ebp - 0x2dc;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 4;
            eax = ebp - 0x2e0;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x34;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((ebp - 0x370)) = 0x219;
            *((ebp - 0x368)) = 1;
            *((ebp - 0x364)) = 3;
            *((ebp - 0x36c)) = 1;
            eax = ebp - 0x58;
            *((ebp - 0x378)) = eax;
            *((ebp - 0x374)) = 0xffffffff;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x378;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = *((ebp + 0xc));
            eax += 0x19c;
            *((esp + 8)) = 8;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_real ();
            *((ebp - 0x72c)) = 0x21a;
            *((ebp - 0x724)) = 1;
            *((ebp - 0x720)) = 3;
            *((ebp - 0x728)) = 1;
            *((ebp - 0x718)) = 1;
            *((ebp - 0x714)) = 3;
            *((ebp - 0x71c)) = 3;
            eax = *((ebp + 0xc));
            eax += 0x1d4;
            *((ebp - 0x734)) = eax;
            *((ebp - 0x730)) = 0xfffffffc;
            *((esp + 0xc)) = 0;
            *((esp + 8)) = 8;
            eax = ebp - 0x734;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_array ();
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_read_done ();
            eax = *((ebp - 0x2e0));
            *((ebp - 0x2b0)) = eax;
        } else {
            eax = *((ebp - 0x80));
            if (eax == 0x22) {
                *((ebp - 0x880)) = 0x8072540;
                *((ebp - 0x87c)) = 0x107;
                *((ebp - 0x888)) = 0;
                eax = *((ebp + 0x14));
                eax = *(eax);
                *((ebp - 0x884)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_st_read ();
                *((esp + 8)) = 4;
                eax = ebp - 0x5c;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 4;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 0xc;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 0x10;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 4;
                eax = ebp - 0x2a8;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((ebp - 0x388)) = 0x109;
                *((ebp - 0x380)) = 1;
                *((ebp - 0x37c)) = 3;
                *((ebp - 0x384)) = 1;
                eax = *((ebp + 0xc));
                eax += 0x40;
                *((ebp - 0x390)) = eax;
                *((ebp - 0x38c)) = 0xffffffff;
                *((esp + 0xc)) = 0;
                *((esp + 8)) = 4;
                eax = ebp - 0x390;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_array ();
                *((esp + 8)) = 4;
                eax = ebp - 0x2ac;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 0x20;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 0x24;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 4;
                eax = ebp - 0x2d8;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 4;
                eax = ebp - 0x2dc;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 4;
                eax = ebp - 0x2b0;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                *((esp + 8)) = 4;
                eax = ebp - 0x2e0;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 0x34;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = *((ebp + 0xc));
                eax += 0x19c;
                *((esp + 8)) = 8;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_real ();
                *((ebp - 0x72c)) = 0x21a;
                *((ebp - 0x724)) = 1;
                *((ebp - 0x720)) = 3;
                *((ebp - 0x728)) = 1;
                *((ebp - 0x718)) = 1;
                *((ebp - 0x714)) = 3;
                *((ebp - 0x71c)) = 3;
                eax = *((ebp + 0xc));
                eax += 0x1d4;
                *((ebp - 0x734)) = eax;
                *((ebp - 0x730)) = 0xfffffffc;
                *((esp + 0xc)) = 0;
                *((esp + 8)) = 8;
                eax = ebp - 0x734;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_array ();
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_st_read_done ();
            } else {
                eax = *((ebp - 0x80));
                if (eax == 0x28) {
                    *((ebp - 0x880)) = 0x8072540;
                    *((ebp - 0x87c)) = 0x10e;
                    *((ebp - 0x888)) = 0;
                    eax = *((ebp + 0x14));
                    eax = *(eax);
                    *((ebp - 0x884)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_st_read ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x5c;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 4;
                    *((esp + 8)) = 4;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 0xc;
                    *((esp + 8)) = 4;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 0x10;
                    *((esp + 8)) = 4;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x2a8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    *((ebp - 0x3a0)) = 0x109;
                    *((ebp - 0x398)) = 1;
                    *((ebp - 0x394)) = 3;
                    *((ebp - 0x39c)) = 1;
                    eax = *((ebp + 0xc));
                    eax += 0x40;
                    *((ebp - 0x3a8)) = eax;
                    *((ebp - 0x3a4)) = 0xffffffff;
                    *((esp + 0xc)) = 0;
                    *((esp + 8)) = 4;
                    eax = ebp - 0x3a8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_array ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x2ac;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 0x20;
                    *((esp + 8)) = 4;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 0x24;
                    *((esp + 8)) = 4;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x2d8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x2dc;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x2b0;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    *((esp + 8)) = 4;
                    eax = ebp - 0x2e0;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 0x34;
                    *((esp + 8)) = 4;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_integer ();
                    eax = *((ebp + 0xc));
                    eax += 0x184;
                    *((esp + 8)) = 8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_real ();
                    eax = *((ebp + 0xc));
                    eax += 0x194;
                    *((esp + 8)) = 8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_real ();
                    eax = *((ebp + 0xc));
                    eax += 0x19c;
                    *((esp + 8)) = 8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_real ();
                    *((ebp - 0x72c)) = 0x21a;
                    *((ebp - 0x724)) = 1;
                    *((ebp - 0x720)) = 3;
                    *((ebp - 0x728)) = 1;
                    *((ebp - 0x718)) = 1;
                    *((ebp - 0x714)) = 3;
                    *((ebp - 0x71c)) = 3;
                    eax = *((ebp + 0xc));
                    eax += 0x1d4;
                    *((ebp - 0x734)) = eax;
                    *((ebp - 0x730)) = 0xfffffffc;
                    *((esp + 0xc)) = 0;
                    *((esp + 8)) = 8;
                    eax = ebp - 0x734;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_array ();
                    eax = *((ebp + 0xc));
                    eax += 0x224;
                    *((esp + 8)) = 8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_real ();
                    eax = *((ebp + 0xc));
                    eax += 0x22c;
                    *((esp + 8)) = 8;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_transfer_real ();
                    eax = ebp - 0x888;
                    *(esp) = eax;
                    gfortran_st_read_done ();
                } else {
                    eax = *((ebp - 0x80));
                    if (eax == 0x29) {
                        *((ebp - 0x880)) = 0x8072540;
                        *((ebp - 0x87c)) = 0x115;
                        *((ebp - 0x888)) = 0;
                        eax = *((ebp + 0x14));
                        eax = *(eax);
                        *((ebp - 0x884)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_st_read ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x5c;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 4;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0xc;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0x10;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x2a8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        *((ebp - 0x3b8)) = 0x109;
                        *((ebp - 0x3b0)) = 1;
                        *((ebp - 0x3ac)) = 3;
                        *((ebp - 0x3b4)) = 1;
                        eax = *((ebp + 0xc));
                        eax += 0x40;
                        *((ebp - 0x3c0)) = eax;
                        *((ebp - 0x3bc)) = 0xffffffff;
                        *((esp + 0xc)) = 0;
                        *((esp + 8)) = 4;
                        eax = ebp - 0x3c0;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_array ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x2ac;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0x20;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0x24;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x2d8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x2dc;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x2b0;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        *((esp + 8)) = 4;
                        eax = ebp - 0x2e0;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0x34;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0x38;
                        *((esp + 8)) = 4;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_integer ();
                        eax = *((ebp + 0xc));
                        eax += 0x184;
                        *((esp + 8)) = 8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_real ();
                        eax = *((ebp + 0xc));
                        eax += 0x194;
                        *((esp + 8)) = 8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_real ();
                        eax = *((ebp + 0xc));
                        eax += 0x19c;
                        *((esp + 8)) = 8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_real ();
                        *((ebp - 0x3d0)) = 0x219;
                        *((ebp - 0x3c8)) = 1;
                        *((ebp - 0x3c4)) = 3;
                        *((ebp - 0x3cc)) = 1;
                        eax = *((ebp + 0xc));
                        eax += 0x1bc;
                        *((ebp - 0x3d8)) = eax;
                        *((ebp - 0x3d4)) = 0xffffffff;
                        *((esp + 0xc)) = 0;
                        *((esp + 8)) = 8;
                        eax = ebp - 0x3d8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_array ();
                        *((ebp - 0x72c)) = 0x21a;
                        *((ebp - 0x724)) = 1;
                        *((ebp - 0x720)) = 3;
                        *((ebp - 0x728)) = 1;
                        *((ebp - 0x718)) = 1;
                        *((ebp - 0x714)) = 3;
                        *((ebp - 0x71c)) = 3;
                        eax = *((ebp + 0xc));
                        eax += 0x1d4;
                        *((ebp - 0x734)) = eax;
                        *((ebp - 0x730)) = 0xfffffffc;
                        *((esp + 0xc)) = 0;
                        *((esp + 8)) = 8;
                        eax = ebp - 0x734;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_array ();
                        eax = *((ebp + 0xc));
                        eax += 0x224;
                        *((esp + 8)) = 8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_real ();
                        eax = *((ebp + 0xc));
                        eax += 0x22c;
                        *((esp + 8)) = 8;
                        *((esp + 4)) = eax;
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_transfer_real ();
                        eax = ebp - 0x888;
                        *(esp) = eax;
                        gfortran_st_read_done ();
                    } else {
                        eax = *((ebp - 0x80));
                        if (eax == 0x2a) {
                            *((ebp - 0x880)) = 0x8072540;
                            *((ebp - 0x87c)) = 0x11d;
                            *((ebp - 0x888)) = 0;
                            eax = *((ebp + 0x14));
                            eax = *(eax);
                            *((ebp - 0x884)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_st_read ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x5c;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 4;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0xc;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x10;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2a8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((ebp - 0x3e8)) = 0x109;
                            *((ebp - 0x3e0)) = 1;
                            *((ebp - 0x3dc)) = 3;
                            *((ebp - 0x3e4)) = 1;
                            eax = *((ebp + 0xc));
                            eax += 0x40;
                            *((ebp - 0x3f0)) = eax;
                            *((ebp - 0x3ec)) = 0xffffffff;
                            *((esp + 0xc)) = 0;
                            *((esp + 8)) = 4;
                            eax = ebp - 0x3f0;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_array ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2ac;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x20;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x24;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2d8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2dc;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2b0;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2e0;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x34;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x38;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x184;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x194;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x19c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            *((ebp - 0x400)) = 0x219;
                            *((ebp - 0x3f8)) = 1;
                            *((ebp - 0x3f4)) = 3;
                            *((ebp - 0x3fc)) = 1;
                            eax = *((ebp + 0xc));
                            eax += 0x1bc;
                            *((ebp - 0x408)) = eax;
                            *((ebp - 0x404)) = 0xffffffff;
                            *((esp + 0xc)) = 0;
                            *((esp + 8)) = 8;
                            eax = ebp - 0x408;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_array ();
                            *((ebp - 0x72c)) = 0x21a;
                            *((ebp - 0x724)) = 1;
                            *((ebp - 0x720)) = 3;
                            *((ebp - 0x728)) = 1;
                            *((ebp - 0x718)) = 1;
                            *((ebp - 0x714)) = 3;
                            *((ebp - 0x71c)) = 3;
                            eax = *((ebp + 0xc));
                            eax += 0x1d4;
                            *((ebp - 0x734)) = eax;
                            *((ebp - 0x730)) = 0xfffffffc;
                            *((esp + 0xc)) = 0;
                            *((esp + 8)) = 8;
                            eax = ebp - 0x734;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_array ();
                            eax = *((ebp + 0xc));
                            eax += 0x21c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x224;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x22c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_st_read_done ();
                        } else {
                            eax = *((ebp - 0x80));
                            if (eax <= 0x2b) {
                                goto label_12;
                            }
                            *((ebp - 0x880)) = 0x8072540;
                            *((ebp - 0x87c)) = 0x125;
                            *((ebp - 0x888)) = 0;
                            eax = *((ebp + 0x14));
                            eax = *(eax);
                            *((ebp - 0x884)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_st_read ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x5c;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 4;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0xc;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x10;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2a8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((ebp - 0x418)) = 0x109;
                            *((ebp - 0x410)) = 1;
                            *((ebp - 0x40c)) = 3;
                            *((ebp - 0x414)) = 1;
                            eax = *((ebp + 0xc));
                            eax += 0x40;
                            *((ebp - 0x420)) = eax;
                            *((ebp - 0x41c)) = 0xffffffff;
                            *((esp + 0xc)) = 0;
                            *((esp + 8)) = 4;
                            eax = ebp - 0x420;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_array ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2ac;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x20;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x24;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2d8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2dc;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2b0;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 4;
                            eax = ebp - 0x2e0;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x34;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x38;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x3c;
                            *((esp + 8)) = 4;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            eax = *((ebp + 0xc));
                            eax += 0x184;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x18c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x194;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x19c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            *((ebp - 0x430)) = 0x219;
                            *((ebp - 0x428)) = 1;
                            *((ebp - 0x424)) = 3;
                            *((ebp - 0x42c)) = 1;
                            eax = *((ebp + 0xc));
                            eax += 0x1bc;
                            *((ebp - 0x438)) = eax;
                            *((ebp - 0x434)) = 0xffffffff;
                            *((esp + 0xc)) = 0;
                            *((esp + 8)) = 8;
                            eax = ebp - 0x438;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_array ();
                            *((ebp - 0x72c)) = 0x21a;
                            *((ebp - 0x724)) = 1;
                            *((ebp - 0x720)) = 3;
                            *((ebp - 0x728)) = 1;
                            *((ebp - 0x718)) = 1;
                            *((ebp - 0x714)) = 3;
                            *((ebp - 0x71c)) = 3;
                            eax = *((ebp + 0xc));
                            eax += 0x1d4;
                            *((ebp - 0x734)) = eax;
                            *((ebp - 0x730)) = 0xfffffffc;
                            *((esp + 0xc)) = 0;
                            *((esp + 8)) = 8;
                            eax = ebp - 0x734;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_array ();
                            eax = *((ebp + 0xc));
                            eax += 0x21c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x224;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = *((ebp + 0xc));
                            eax += 0x22c;
                            *((esp + 8)) = 8;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_transfer_real ();
                            eax = ebp - 0x888;
                            *(esp) = eax;
                            gfortran_st_read_done ();
                        }
                    }
                }
            }
        }
    }
label_12:
    edx = *((ebp - 0x5c));
    eax = *((ebp + 0xc));
    *(eax) = edx;
    edx = *((ebp - 0x2a8));
    eax = *((ebp + 0xc));
    *((eax + 0x14)) = edx;
    edx = *((ebp - 0x2ac));
    eax = *((ebp + 0xc));
    *((eax + 0x18)) = edx;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0x1c)) = edx;
    edx = *((ebp - 0x2d8));
    eax = *((ebp + 0xc));
    *((eax + 0x28)) = edx;
    edx = *((ebp - 0x2dc));
    eax = *((ebp + 0xc));
    *((eax + 0x2c)) = edx;
    edx = *((ebp - 0x2e0));
    eax = *((ebp + 0xc));
    *((eax + 0x30)) = edx;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *((eax + 0x194));
    *(fp_stack--) = *(0x8072f60);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = *((ebp - 0x80));
        if (eax > 0x2b) {
            goto label_13;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x33) {
            goto label_13;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x34) {
            goto label_13;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x65) {
            goto label_13;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == 0x66) {
            goto label_13;
        }
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x138;
        eax = ebp - 0x2a0;
        *((ebp - 0x848)) = eax;
        *((ebp - 0x844)) = 0x1f4;
        *((ebp - 0x85c)) = 0;
        *((ebp - 0x884)) = 0;
        *((ebp - 0x858)) = "(4a,es16.6,9a)  The value of ecutsm is";
        *((ebp - 0x854)) = 0xe;
        *((ebp - 0x888)) = 0x5000;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x807255c;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x18;
        *((esp + 4)) = 0x8072642;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax += 0x194;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 0x32;
        *((esp + 4)) = ", while the file has been produced prior to v4.4 .";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x52;
        *((esp + 4)) = "  The definition of the smearing function has changed, so that you are not allowed";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x53;
        *((esp + 4)) = "  to restart from a old wavefunction file. By contrast, you can restart from an old";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x5b;
        *((esp + 4)) = "  potential or density file, and perform a self-consistent cycle with a new ABINIT version.";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x807255b;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x64;
        *((esp + 4)) = "  Action : produce a density or potential file using the old version of ABINIT, and restart from it.Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x807262a;
        eax = ebp - 0x2a0;
        *((esp + 4)) = eax;
        wrtout_ (0x8072630);
        *((esp + 4)) = 4;
        *(esp) = 0x807262a;
        leave_new_ ();
    }
label_13:
    eax = *((ebp + 0xc));
    *((eax + 0x54)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x5c)) = 1;
    edx = *((ebp - 0x2ac));
    eax = *((ebp + 0xc));
    *((eax + 0x60)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x58)) = 1;
    eax = *((ebp - 0x2ac));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2ac));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x4c)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x50)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x23c)) = 0x21a;
    eax = *((ebp + 0xc));
    *((eax + 0x244)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x248)) = 3;
    eax = *((ebp + 0xc));
    *((eax + 0x240)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x250)) = 1;
    edx = *((ebp - 0x2ac));
    eax = *((ebp + 0xc));
    *((eax + 0x254)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x24c)) = 3;
    eax = *((ebp - 0x2ac));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp - 0x2ac));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x234)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x238)) = 0xfffffffc;
    eax = *((ebp + 0xc));
    *((eax + 0x6c)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x74)) = 1;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0x78)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x70)) = 1;
    eax = *((ebp - 0x2b0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2b0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x64)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x68)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x84)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x8c)) = 1;
    edx = *((ebp - 0x2ac));
    eax = *((ebp - 0x2d8));
    edx *= eax;
    eax = *((ebp + 0xc));
    *((eax + 0x90)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x88)) = 1;
    edx = *((ebp - 0x2ac));
    eax = *((ebp - 0x2d8));
    eax *= edx;
    edx = 0;
    __asm ("cmovns edx, eax");
    ecx = *((ebp - 0x2ac));
    eax = *((ebp - 0x2d8));
    eax *= ecx;
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x7c)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x80)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x9c)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0xa4)) = 1;
    edx = *((ebp - 0x2ac));
    eax = *((ebp + 0xc));
    *((eax + 0xa8)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0xa0)) = 1;
    eax = *((ebp - 0x2ac));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2ac));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x94)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x98)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x260)) = 0x219;
    eax = *((ebp + 0xc));
    *((eax + 0x268)) = 1;
    edx = *((ebp - 0x5c));
    eax = *((ebp + 0xc));
    *((eax + 0x26c)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x264)) = 1;
    eax = *((ebp - 0x5c));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x5c));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x258)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x25c)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0xb4)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0xbc)) = 1;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0xc0)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0xb8)) = 1;
    eax = *((ebp - 0x2b0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2b0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0xac)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0xb0)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0xcc)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0xd4)) = 1;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0xd8)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0xd0)) = 1;
    eax = *((ebp - 0x2b0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2b0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0xc4)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0xc8)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0xe4)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0xec)) = 1;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0xf0)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0xe8)) = 1;
    eax = *((ebp - 0x2b0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2b0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0xdc)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0xe0)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0xfc)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x104)) = 1;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0x108)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x100)) = 1;
    eax = *((ebp - 0x2b0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2b0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0xf4)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0xf8)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x114)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x11c)) = 1;
    edx = *((ebp - 0x2e0));
    eax = *((ebp + 0xc));
    *((eax + 0x120)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x118)) = 1;
    eax = *((ebp - 0x2e0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2e0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x10c)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x110)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x12c)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x134)) = 1;
    edx = *((ebp - 0x2dc));
    eax = *((ebp + 0xc));
    *((eax + 0x138)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x130)) = 1;
    eax = *((ebp - 0x2dc));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2dc));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x124)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x128)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x144)) = 0x10b;
    eax = *((ebp + 0xc));
    *((eax + 0x14c)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x150)) = 3;
    eax = *((ebp + 0xc));
    *((eax + 0x148)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x158)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x15c)) = 3;
    eax = *((ebp + 0xc));
    *((eax + 0x154)) = 3;
    eax = *((ebp + 0xc));
    *((eax + 0x164)) = 1;
    edx = *((ebp - 0x2dc));
    eax = *((ebp + 0xc));
    *((eax + 0x168)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x160)) = 9;
    eax = *((ebp - 0x2dc));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    eax <<= 3;
    edx = eax + edx;
    eax = *((ebp - 0x2dc));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x13c)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x140)) = 0xfffffff3;
    eax = *((ebp + 0xc));
    *((eax + 0x328)) = 0x2131;
    eax = *((ebp + 0xc));
    *((eax + 0x330)) = 1;
    edx = *((ebp - 0x2b0));
    eax = *((ebp + 0xc));
    *((eax + 0x334)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x32c)) = 1;
    eax = *((ebp - 0x2b0));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2b0));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx;
        eax <<= 2;
        edx = eax;
        edx <<= 5;
        eax += edx;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x320)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x324)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x278)) = 0x21a;
    eax = *((ebp + 0xc));
    *((eax + 0x280)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x284)) = 3;
    eax = *((ebp + 0xc));
    *((eax + 0x27c)) = 1;
    eax = *((ebp + 0xc));
    *((eax + 0x28c)) = 1;
    edx = *((ebp - 0x2dc));
    eax = *((ebp + 0xc));
    *((eax + 0x290)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x288)) = 3;
    eax = *((ebp - 0x2dc));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp - 0x2dc));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x270)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x274)) = 0xfffffffc;
    eax = *((ebp + 0xc));
    *((eax + 0x174)) = 0x109;
    eax = *((ebp + 0xc));
    *((eax + 0x17c)) = 1;
    edx = *((ebp - 0x2a8));
    eax = *((ebp + 0xc));
    *((eax + 0x180)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x178)) = 1;
    eax = *((ebp - 0x2a8));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2a8));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    if (eax < 0) {
        *(esp) = 0x80727f8;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    edx = *((ebp + 0xc));
    *((edx + 0x16c)) = eax;
    eax = *((ebp + 0xc));
    *((eax + 0x170)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((eax + 0x29c)) = 0x219;
    eax = *((ebp + 0xc));
    *((eax + 0x2a4)) = 1;
    edx = *((ebp - 0x2ac));
    eax = *((ebp + 0xc));
    *((eax + 0x2a8)) = edx;
    eax = *((ebp + 0xc));
    *((eax + 0x2a0)) = 1;
    eax = *((ebp - 0x2ac));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0x2ac));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax == 0) {
        void (*0x805f905)() ();
    }
label_6:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax != 2) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        if (eax != 6) {
            goto label_14;
        }
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 2) {
        *((ebp - 0x44c)) = 0x8072540;
        *((ebp - 0x448)) = 0x1ec;
        *((ebp - 0x454)) = 0;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x450)) = eax;
        eax = ebp - 0x454;
        *(esp) = eax;
        gfortran_st_rewind ();
    }
    *((ebp - 0x80)) = 0x35;
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x1f1;
    *((ebp - 0x888)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = *((ebp + 0xc));
    eax += 0x318;
    *((esp + 8)) = 6;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x80;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x1f8;
    *((ebp - 0x888)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = *((ebp + 0xc));
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 4;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0xc;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x10;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x14;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((ebp - 0x464)) = 0x109;
    *((ebp - 0x45c)) = 1;
    *((ebp - 0x458)) = 3;
    *((ebp - 0x460)) = 1;
    eax = *((ebp + 0xc));
    eax += 0x40;
    *((ebp - 0x46c)) = eax;
    *((ebp - 0x468)) = 0xffffffff;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    eax = ebp - 0x46c;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x18;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x20;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x24;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x28;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x2c;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x1c;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x30;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x34;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x38;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x3c;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x184;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x18c;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x194;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x19c;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((ebp - 0x47c)) = 0x219;
    *((ebp - 0x474)) = 1;
    *((ebp - 0x470)) = 3;
    *((ebp - 0x478)) = 1;
    eax = *((ebp + 0xc));
    eax += 0x1bc;
    *((ebp - 0x484)) = eax;
    *((ebp - 0x480)) = 0xffffffff;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x484;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    *((ebp - 0x72c)) = 0x21a;
    *((ebp - 0x724)) = 1;
    *((ebp - 0x720)) = 3;
    *((ebp - 0x728)) = 1;
    *((ebp - 0x718)) = 1;
    *((ebp - 0x714)) = 3;
    *((ebp - 0x71c)) = 3;
    eax = *((ebp + 0xc));
    eax += 0x1d4;
    *((ebp - 0x734)) = eax;
    *((ebp - 0x730)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x734;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x21c;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x224;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x22c;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x1fd;
    *((ebp - 0x888)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = *((ebp + 0xc));
    eax += 0x4c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x7c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x94;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x10c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x124;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x13c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x16c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x234;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x258;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x270;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x300;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x294;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    ebx = *((eax + 0x1c));
    *((ebp - 0x30)) = 1;
    if (*((ebp - 0x30)) > ebx) {
        goto label_15;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x207;
        *((ebp - 0x888)) = 0;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x320));
        edx = *((eax + 0x320));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x32c));
        ecx = *((eax + 0x32c));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x324));
        eax = ecx + eax;
        eax <<= 2;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax = edx + eax;
        *((esp + 8)) = 0x84;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2e8));
        edx = *((eax + 0x2e8));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2f4));
        ecx = *((eax + 0x2f4));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2ec));
        eax = ecx + eax;
        eax <<= 3;
        eax = edx + eax;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2d0));
        edx = *((eax + 0x2d0));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2dc));
        ecx = *((eax + 0x2dc));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2d4));
        eax = ecx + eax;
        eax <<= 3;
        eax = edx + eax;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xdc));
        edx = *((eax + 0xdc));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xe8));
        ecx = *((eax + 0xe8));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xe0));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xc4));
        edx = *((eax + 0xc4));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xd0));
        ecx = *((eax + 0xd0));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xc8));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xac));
        edx = *((eax + 0xac));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xb8));
        ecx = *((eax + 0xb8));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xb0));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xf4));
        edx = *((eax + 0xf4));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x100));
        ecx = *((eax + 0x100));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xf8));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x64));
        edx = *((eax + 0x64));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x70));
        ecx = *((eax + 0x70));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x68));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        al = (*((ebp - 0x30)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x30))++;
    }
label_15:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x210;
    *((ebp - 0x888)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = *((ebp + 0xc));
    eax += 0x1b4;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x2ac;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x1a4;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x1ac;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 0x3c));
    if (eax != 1) {
        goto label_16;
    }
    *((ebp - 0x2cc)) = 0x10a;
    *((ebp - 0x2c4)) = 1;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x20));
    *((ebp - 0x2c0)) = eax;
    *((ebp - 0x2c8)) = 1;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x20));
    edx = 0;
    __asm ("cmovs eax, edx");
    *((ebp - 0x2b8)) = 1;
    edx = *((ebp + 0xc));
    edx = *((edx + 0x14));
    *((ebp - 0x2b4)) = edx;
    *((ebp - 0x2bc)) = eax;
    edx = *((ebp + 0xc));
    edx = *((edx + 0x14));
    ecx = 0;
    __asm ("cmovs edx, ecx");
    edx *= eax;
    ebx = eax;
    ebx = ~ebx;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x20));
    al = (eax <= 0) ? 1 : 0;
    ecx = (int32_t) al;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x14));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    eax |= ecx;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    edx = *((ebp - 0x2d4));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x80727f8;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x2d4)) = eax;
        *((ebp - 0x2d0)) = ebx;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14));
        *((ebp - 0x914)) = eax;
        *((ebp - 0x84)) = 1;
        eax = *((ebp - 0x84));
        if (eax <= *((ebp - 0x914))) {
            goto label_17;
        }
        goto label_18;
    }
    *((esp + 8)) = "nsel";
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 531 of file hdr_io.F90";
    gfortran_runtime_error_at ();
label_0:
label_17:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    edx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    ecx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    ecx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = ecx + eax;
    eax <<= 3;
    ecx = eax;
    ecx <<= 5;
    eax += ecx;
    eax += edx;
    eax += 0x18;
    eax = *(eax);
    *((ebp - 0x904)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    edx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    ecx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    ecx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = ecx + eax;
    eax <<= 3;
    ecx = eax;
    ecx <<= 5;
    eax += ecx;
    eax += edx;
    eax += 0x1c;
    eax = *(eax);
    *((ebp - 0x908)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x20));
    *((ebp - 0x90c)) = eax;
    eax = *((ebp - 0x2d4));
    *((ebp - 0x910)) = eax;
    esi = *((ebp - 0x2d0));
    ebx = *((ebp - 0x84));
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    ecx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    edx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = edx + eax;
    eax <<= 3;
    edx = eax;
    edx <<= 5;
    eax += edx;
    eax += ecx;
    eax += 0x24;
    edi = *(eax);
    eax = *((ebp - 0x2bc));
    eax *= ebx;
    esi = eax + esi;
    edx = *((ebp - 0x2c8));
    *((ebp - 0x99c)) = edx;
    edx = 1;
    do {
        if (edx > *((ebp - 0x90c))) {
            goto label_19;
        }
        eax = *((ebp - 0x99c));
        eax *= edx;
        eax += esi;
        *((ebp - 0x994)) = eax;
        eax = edx;
        eax *= edi;
        eax += *((ebp - 0x908));
        ecx = *((ebp - 0x904));
        eax = *((ecx + eax*4));
        *((ebp - 0x990)) = eax;
        ecx = *((ebp - 0x990));
        ebx = *((ebp - 0x994));
        eax = *((ebp - 0x910));
        *((eax + ebx*4)) = ecx;
        edx++;
    } while (1);
label_19:
    eax = *((ebp - 0x84));
    al = (eax == *((ebp - 0x914))) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x84));
    edx++;
    *((ebp - 0x84)) = edx;
    if (eax == 0) {
        goto label_0;
    }
label_18:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x217;
    *((ebp - 0x888)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = *((ebp + 0xc));
    ebx = *((eax + 0x14));
    *((ebp - 0x84)) = 1;
    eax = *((ebp - 0x84));
    if (eax > ebx) {
        goto label_20;
    }
    goto label_21;
label_1:
label_21:
    eax = *((ebp + 0xc));
    esi = *((eax + 0x20));
    *((ebp - 0xa4)) = 1;
    eax = *((ebp - 0xa4));
    if (eax > esi) {
        goto label_22;
    }
    while (eax == 0) {
        eax = *((ebp - 0x2d4));
        ecx = *((ebp - 0x2c8));
        edx = *((ebp - 0xa4));
        ecx *= edx;
        edi = *((ebp - 0x2bc));
        edx = *((ebp - 0x84));
        edx *= edi;
        ecx += edx;
        edx = *((ebp - 0x2d0));
        edx = ecx + edx;
        edx <<= 2;
        eax += edx;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp - 0xa4));
        al = (eax == esi) ? 1 : 0;
        eax = (int32_t) al;
        edx = *((ebp - 0xa4));
        edx++;
        *((ebp - 0xa4)) = edx;
    }
label_22:
    eax = *((ebp - 0x84));
    al = (eax == ebx) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x84));
    edx++;
    *((ebp - 0x84)) = edx;
    if (eax == 0) {
        goto label_1;
    }
label_20:
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    ebx = 0;
    eax = *((ebp - 0x2d4));
    edi = *((ebp - 0x2d4));
    esi = *((ebp - 0x2d0));
    *((ebp - 0x8f4)) = esi;
    eax = *((ebp - 0x2c4));
    *((ebp - 0x8f8)) = eax;
    edx = *((ebp - 0x2c0));
    *((ebp - 0x8fc)) = edx;
    eax = *((ebp - 0x2b8));
    ecx = *((ebp - 0x2b4));
    *((ebp - 0x900)) = ecx;
    esi = *((ebp - 0x2c8));
    *((ebp - 0x8f0)) = esi;
    ecx = eax;
label_2:
    if (ecx > *((ebp - 0x900))) {
        goto label_23;
    }
    eax = *((ebp - 0x2bc));
    eax *= ecx;
    esi = *((ebp - 0x8f4));
    esi = eax + esi;
    edx = *((ebp - 0x8f8));
    do {
        if (edx > *((ebp - 0x8fc))) {
            goto label_24;
        }
        eax = *((ebp - 0x8f0));
        eax *= edx;
        eax += esi;
        eax = *((edi + eax*4));
        ebx += eax;
        edx++;
    } while (1);
label_24:
    ecx++;
    goto label_2;
label_23:
    *((ebp - 0x3c)) = ebx;
    *((ebp - 0x94)) = 0x109;
    *((ebp - 0x8c)) = 1;
    eax = *((ebp - 0x3c));
    *((ebp - 0x88)) = eax;
    *((ebp - 0x90)) = 1;
    eax = 0;
    edx = eax;
    __asm ("cmovns edx, dword [ebp - 0x3c]");
    al = (*((ebp - 0x3c)) <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    edx = *((ebp - 0x9c));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x80727f8;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x9c)) = eax;
        *((ebp - 0x98)) = 0xffffffff;
        *((ebp - 0x6c)) = 0x219;
        *((ebp - 0x64)) = 1;
        eax = *((ebp - 0x3c));
        *((ebp - 0x60)) = eax;
        *((ebp - 0x68)) = 1;
        eax = 0;
        edx = eax;
        __asm ("cmovns edx, dword [ebp - 0x3c]");
        al = (*((ebp - 0x3c)) <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "ibuffer";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 537 of file hdr_io.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_25;
    }
    eax = edx*8;
label_25:
    edx = *((ebp - 0x74));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x80727f8;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x74)) = eax;
        *((ebp - 0x70)) = 0xffffffff;
        *((ebp - 0x38)) = 0;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14));
        *((ebp - 0x8ec)) = eax;
        *((ebp - 0x84)) = 1;
        eax = *((ebp - 0x84));
        if (eax <= *((ebp - 0x8ec))) {
            goto label_26;
        }
        goto label_27;
    }
    *((esp + 8)) = "buffer";
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 537 of file hdr_io.F90";
    gfortran_runtime_error_at ();
label_4:
label_26:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x20));
    *((ebp - 0x8e8)) = eax;
    *((ebp - 0xa4)) = 1;
    eax = *((ebp - 0xa4));
    if (eax > *((ebp - 0x8e8))) {
        goto label_28;
    }
    goto label_29;
label_3:
label_29:
    eax = *((ebp - 0x2d4));
    ecx = *((ebp - 0x2c8));
    edx = *((ebp - 0xa4));
    ecx *= edx;
    ebx = *((ebp - 0x2bc));
    edx = *((ebp - 0x84));
    edx *= ebx;
    ecx += edx;
    edx = *((ebp - 0x2d0));
    edx = ecx + edx;
    eax = *((eax + edx*4));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    edx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    ecx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    ecx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = ecx + eax;
    eax <<= 3;
    ecx = eax;
    ecx <<= 5;
    eax += ecx;
    eax += edx;
    eax += 0x48;
    eax = *(eax);
    *((ebp - 0x8d4)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    edx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    ecx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    ecx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = ecx + eax;
    eax <<= 3;
    ecx = eax;
    ecx <<= 5;
    eax += ecx;
    eax += edx;
    eax += 0x4c;
    esi = *(eax);
    eax = *((ebp - 0x1c));
    *((ebp - 0x8d8)) = eax;
    eax = *((ebp - 0x9c));
    *((ebp - 0x8dc)) = eax;
    edx = *((ebp - 0x98));
    *((ebp - 0x8e0)) = edx;
    eax = *((ebp - 0x38));
    eax++;
    ebx = *((ebp - 0xa4));
    eax--;
    *((ebp - 0x8e4)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    ecx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    edx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = edx + eax;
    eax <<= 3;
    edx = eax;
    edx <<= 5;
    eax += edx;
    eax += ecx;
    eax += 0x60;
    eax = *(eax);
    eax *= ebx;
    edi = eax + esi;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    ecx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    edx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = edx + eax;
    eax <<= 3;
    edx = eax;
    edx <<= 5;
    eax += edx;
    eax += ecx;
    eax += 0x54;
    esi = *(eax);
    ecx = *((ebp - 0x90));
    *((ebp - 0x99c)) = ecx;
    edx = 1;
    do {
        if (edx > *((ebp - 0x8d8))) {
            goto label_30;
        }
        eax = *((ebp - 0x8e4));
        eax = edx + eax;
        eax *= *((ebp - 0x99c));
        ebx = *((ebp - 0x8e0));
        ebx += eax;
        *((ebp - 0x994)) = ebx;
        eax = edx;
        eax *= esi;
        eax += edi;
        ecx = *((ebp - 0x8d4));
        eax = *((ecx + eax*4));
        *((ebp - 0x990)) = eax;
        ecx = *((ebp - 0x990));
        ebx = *((ebp - 0x994));
        eax = *((ebp - 0x8dc));
        *((eax + ebx*4)) = ecx;
        edx++;
    } while (1);
label_30:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    edx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    ecx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    ecx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = ecx + eax;
    eax <<= 3;
    ecx = eax;
    ecx <<= 5;
    eax += ecx;
    eax += edx;
    eax += 0xc0;
    eax = *(eax);
    *((ebp - 0x8c0)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    edx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    ecx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    ecx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = ecx + eax;
    eax <<= 3;
    ecx = eax;
    ecx <<= 5;
    eax += ecx;
    eax += edx;
    eax += 0xc4;
    esi = *(eax);
    ebx = *((ebp - 0x1c));
    *((ebp - 0x8c4)) = ebx;
    eax = *((ebp - 0x74));
    *((ebp - 0x8c8)) = eax;
    eax = *((ebp - 0x70));
    *((ebp - 0x8cc)) = eax;
    eax = *((ebp - 0x38));
    eax++;
    ebx = *((ebp - 0xa4));
    eax--;
    *((ebp - 0x8d0)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    ecx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    edx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = edx + eax;
    eax <<= 3;
    edx = eax;
    edx <<= 5;
    eax += edx;
    eax += ecx;
    eax += 0xd8;
    eax = *(eax);
    eax *= ebx;
    edi = eax + esi;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x338));
    ecx = *((eax + 0x338));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x344));
    eax = *((ebp - 0x84));
    edx *= eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x33c));
    eax = edx + eax;
    eax <<= 3;
    edx = eax;
    edx <<= 5;
    eax += edx;
    eax += ecx;
    eax += 0xcc;
    esi = *(eax);
    ebx = *((ebp - 0x68));
    edx = 1;
    do {
        if (edx > *((ebp - 0x8c4))) {
            goto label_31;
        }
        eax = *((ebp - 0x8d0));
        eax = edx + eax;
        eax *= ebx;
        ecx = *((ebp - 0x8cc));
        ecx += eax;
        *((ebp - 0x994)) = ecx;
        eax = edx;
        eax *= esi;
        eax += edi;
        *((ebp - 0x990)) = eax;
        eax = *((ebp - 0x990));
        ecx = *((ebp - 0x8c0));
        *(fp_stack--) = *((ecx + eax*8));
        eax = *((ebp - 0x994));
        ecx = *((ebp - 0x8c8));
        *((ecx + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_31:
    eax = *((ebp - 0x1c));
    *((ebp - 0x38)) += eax;
    eax = *((ebp - 0xa4));
    al = (eax == *((ebp - 0x8e8))) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0xa4));
    edx++;
    *((ebp - 0xa4)) = edx;
    if (eax == 0) {
        goto label_3;
    }
label_28:
    eax = *((ebp - 0x84));
    al = (eax == *((ebp - 0x8ec))) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x84));
    edx++;
    *((ebp - 0x84)) = edx;
    if (eax == 0) {
        goto label_4;
    }
label_27:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x223;
    *((ebp - 0x888)) = 0;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    eax = ebp - 0x9c;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x74;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp - 0x9c));
    if (eax == 0) {
        *((esp + 8)) = "ibuffer";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 548 of file hdr_io.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x9c));
    free (eax);
    *((ebp - 0x9c)) = 0;
    eax = *((ebp - 0x74));
    if (eax == 0) {
        *((esp + 8)) = "buffer";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 548 of file hdr_io.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x74));
    free (eax);
    *((ebp - 0x74)) = 0;
    eax = *((ebp - 0x2d4));
    if (eax == 0) {
        *((esp + 8)) = "nsel";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 548 of file hdr_io.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x2d4));
    free (eax);
    *((ebp - 0x2d4)) = 0;
    goto label_7;
label_14:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax != 3) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        if (eax != 4) {
            goto label_7;
        }
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x22e;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x50;
    *((esp + 4)) = " =============================================================================== ECHO of part of the ABINIT file header  ECHO of the ABINIT file header   First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)";
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 3) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x22f;
        *((ebp - 0x858)) = 0x807297f;
        *((ebp - 0x854)) = 3;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x80729d4;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 4) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x230;
        *((ebp - 0x858)) = 0x807297f;
        *((ebp - 0x854)) = 3;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x20;
        *((esp + 4)) = 0x80729fc;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x231;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8072a1c;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x232;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xf;
    *((esp + 4)) = 0x8072a1d;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x234;
    *((ebp - 0x858)) = 0x8072a2c;
    *((ebp - 0x854)) = 0xa;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x19;
    *((esp + 4)) = 0x8072a36;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x318;
    *((esp + 8)) = 6;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 8;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x236;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8072a1c;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x237;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x8072a4f;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x239;
    *((ebp - 0x858)) = 0x8072a5f;
    *((ebp - 0x854)) = 7;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072a66;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0xc;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x10;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp + 0xc));
    eax += 0x14;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x23b;
    *((ebp - 0x858)) = 0x8072a5f;
    *((ebp - 0x854)) = 7;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072a80;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x494)) = 0x109;
    *((ebp - 0x48c)) = 1;
    *((ebp - 0x488)) = 3;
    *((ebp - 0x490)) = 1;
    eax = *((ebp + 0xc));
    eax += 0x40;
    *((ebp - 0x49c)) = eax;
    *((ebp - 0x498)) = 0xffffffff;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    eax = ebp - 0x49c;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = *((ebp + 0xc));
    eax += 0x18;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax > 0x16) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x23f;
        *((ebp - 0x858)) = 0x8072a9a;
        *((ebp - 0x854)) = 7;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x1a;
        *((esp + 4)) = 0x8072aa1;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax += 0x20;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 0x24;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax <= 0x17) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x244;
        *((ebp - 0x858)) = 0x8072a5f;
        *((ebp - 0x854)) = 7;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x1b;
        *((esp + 4)) = 0x8072abb;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax += 0x28;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 0x2c;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 0x30;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = *((ebp + 0xc));
        eax += 0x34;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    } else {
        eax = *((ebp + 0xc));
        eax = *((eax + 8));
        if (eax <= 0x28) {
            *((ebp - 0x880)) = 0x8072540;
            *((ebp - 0x87c)) = 0x247;
            *((ebp - 0x858)) = 0x8072ad6;
            *((ebp - 0x854)) = 7;
            *((ebp - 0x888)) = 0x1000;
            eax = *((ebp + 0x14));
            eax = *(eax);
            *((ebp - 0x884)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x20;
            *((esp + 4)) = " nsppol,nsym,npsp,ntypat,occopt=(a,6i6)";
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = *((ebp + 0xc));
            eax += 0x28;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x2c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x1c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x30;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x34;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write_done ();
        } else {
            eax = *((ebp + 0xc));
            eax = *((eax + 8));
            if (eax != 0x29) {
                eax = *((ebp + 0xc));
                eax = *((eax + 8));
                if (eax != 0x2a) {
                    goto label_32;
                }
            }
            *((ebp - 0x880)) = 0x8072540;
            *((ebp - 0x87c)) = 0x24b;
            *((ebp - 0x858)) = 0x8072b00;
            *((ebp - 0x854)) = 7;
            *((ebp - 0x888)) = 0x1000;
            eax = *((ebp + 0x14));
            eax = *(eax);
            *((ebp - 0x884)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x29;
            *((esp + 4)) = " nsppol,nsym,npsp,ntypat,occopt,pertcase= nsppol,nsym,npsp,ntypat =(a,3i6) occopt,pertcase,usepaw  =(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  =";
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = *((ebp + 0xc));
            eax += 0x28;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x2c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x1c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x30;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x34;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x38;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write_done ();
            goto label_33;
label_32:
            eax = *((ebp + 0xc));
            eax = *((eax + 8));
            if (eax <= 0x2b) {
                goto label_33;
            }
            *((ebp - 0x880)) = 0x8072540;
            *((ebp - 0x87c)) = 0x24e;
            *((ebp - 0x858)) = 0x8072a5f;
            *((ebp - 0x854)) = 7;
            *((ebp - 0x888)) = 0x1000;
            eax = *((ebp + 0x14));
            eax = *(eax);
            *((ebp - 0x884)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x1a;
            *((esp + 4)) = 0x8072b31;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = *((ebp + 0xc));
            eax += 0x28;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x2c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x1c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x30;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((ebp - 0x880)) = 0x8072540;
            *((ebp - 0x87c)) = 0x250;
            *((ebp - 0x858)) = 0x8072b4b;
            *((ebp - 0x854)) = 7;
            *((ebp - 0x888)) = 0x1000;
            eax = *((ebp + 0x14));
            eax = *(eax);
            *((ebp - 0x884)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x1a;
            *((esp + 4)) = 0x8072b52;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = *((ebp + 0xc));
            eax += 0x34;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x38;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = *((ebp + 0xc));
            eax += 0x3c;
            *((esp + 8)) = 4;
            *((esp + 4)) = eax;
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = ebp - 0x888;
            *(esp) = eax;
            gfortran_st_write_done ();
        }
    }
label_33:
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax != 0x28) {
        eax = *((ebp + 0xc));
        eax = *((eax + 8));
        if (eax == 0x29) {
            goto label_34;
        }
        eax = *((ebp + 0xc));
        eax = *((eax + 8));
        if (eax != 0x2a) {
            goto label_35;
        }
    }
label_34:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x254;
    *((ebp - 0x858)) = 0x8072b6c;
    *((ebp - 0x854)) = 0xc;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072b78;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x184;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x194;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    goto label_36;
label_35:
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax > 0x2b) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x257;
        *((ebp - 0x858)) = 0x8072b92;
        *((ebp - 0x854)) = 0xc;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x1a;
        *((esp + 4)) = 0x8072b9e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax += 0x184;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp + 0xc));
        eax += 0x18c;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp + 0xc));
        eax += 0x194;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
label_36:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x25a;
    *((ebp - 0x858)) = 0x8072bb8;
    *((ebp - 0x854)) = 0xc;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072bc4;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x19c;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax > 0x28) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x25d;
        *((ebp - 0x858)) = 0x8072b92;
        *((ebp - 0x854)) = 0xc;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x1a;
        *((esp + 4)) = 0x8072bde;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((ebp - 0x4ac)) = 0x219;
        *((ebp - 0x4a4)) = 1;
        *((ebp - 0x4a0)) = 3;
        *((ebp - 0x4a8)) = 1;
        eax = *((ebp + 0xc));
        eax += 0x1bc;
        *((ebp - 0x4b4)) = eax;
        *((ebp - 0x4b0)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x4b4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x260;
    *((ebp - 0x858)) = 0x8072b92;
    *((ebp - 0x854)) = 0xc;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072bf8;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x4c4)) = 0x219;
    *((ebp - 0x4bc)) = 1;
    *((ebp - 0x4b8)) = 3;
    *((ebp - 0x4c0)) = 1;
    eax = *((ebp + 0xc));
    eax += 0x1d4;
    *((ebp - 0x4cc)) = eax;
    *((ebp - 0x4c8)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x4cc;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x261;
    *((ebp - 0x858)) = 0x8072b92;
    *((ebp - 0x854)) = 0xc;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072c12;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x4dc)) = 0x219;
    *((ebp - 0x4d4)) = 1;
    *((ebp - 0x4d0)) = 3;
    *((ebp - 0x4d8)) = 1;
    eax = *((ebp + 0xc));
    eax += 0x1ec;
    *((ebp - 0x4e4)) = eax;
    *((ebp - 0x4e0)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x4e4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x262;
    *((ebp - 0x858)) = 0x8072b92;
    *((ebp - 0x854)) = 0xc;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072c2c;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x4f4)) = 0x219;
    *((ebp - 0x4ec)) = 1;
    *((ebp - 0x4e8)) = 3;
    *((ebp - 0x4f0)) = 1;
    eax = *((ebp + 0xc));
    eax += 0x204;
    *((ebp - 0x4fc)) = eax;
    *((ebp - 0x4f8)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x4fc;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax != 0x28) {
        eax = *((ebp + 0xc));
        eax = *((eax + 8));
        if (eax != 0x29) {
            goto label_37;
        }
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x265;
    *((ebp - 0x858)) = 0x8072b6c;
    *((ebp - 0x854)) = 0xc;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1a;
    *((esp + 4)) = 0x8072c46;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x224;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x22c;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    goto label_38;
label_37:
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax > 0x29) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x268;
        *((ebp - 0x858)) = 0x8072b92;
        *((ebp - 0x854)) = 0xc;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x1a;
        *((esp + 4)) = 0x8072c60;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax += 0x21c;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp + 0xc));
        eax += 0x224;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = *((ebp + 0xc));
        eax += 0x22c;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
label_38:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x26b;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 3) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x26d;
        *((ebp - 0x858)) = 0x8072c7a;
        *((ebp - 0x854)) = 8;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x14;
        *((esp + 4)) = 0x8072c82;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x1c));
        eax += 2;
        *((ebp - 0x500)) = eax;
        *((esp + 8)) = 4;
        eax = ebp - 0x500;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x14;
        *((esp + 4)) = 0x8072c96;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        goto label_7;
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x270;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xf;
    *((esp + 4)) = 0x8072caa;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x271;
    *((ebp - 0x858)) = 0x8072cb9;
    *((ebp - 0x854)) = 0xd;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072cc6;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x4c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x272;
    *((ebp - 0x858)) = 0x8072cb9;
    *((ebp - 0x854)) = 0xd;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072cce;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x7c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x273;
    *((ebp - 0x858)) = 0x8072cd6;
    *((ebp - 0x854)) = 0xd;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072ce3;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x94;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax > 0x27) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x276;
        *((ebp - 0x858)) = 0x8072cb9;
        *((ebp - 0x854)) = 0xd;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0xa;
        *((esp + 4)) = 0x8072ceb;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax += 0x10c;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax > 0x27) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x27a;
        *((ebp - 0x858)) = 0x807297f;
        *((ebp - 0x854)) = 3;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072cf5;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x27b;
        *((ebp - 0x858)) = 0x8072cfd;
        *((ebp - 0x854)) = 0xc;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        eax = *((ebp + 0xc));
        eax += 0x124;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x27e;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072d09;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 0x2c));
    edx = *((eax + 0x2c));
    edx >>= 0x1f;
    eax = edx + eax;
    eax >>= 1;
    *((ebp - 0x8bc)) = eax;
    *((ebp - 0x2c)) = 1;
    ebx = *((ebp - 0x8bc));
    if (*((ebp - 0x2c)) > ebx) {
        goto label_39;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x281;
        *((ebp - 0x858)) = 0x8072d11;
        *((ebp - 0x854)) = 0xd;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edi = *((eax + 0x14c));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x150));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x158));
        *((ebp - 0x8b4)) = eax;
        eax = *((ebp + 0xc));
        ebx = *((eax + 0x15c));
        eax = *((ebp - 0x2c));
        eax += eax;
        eax--;
        *((ebp - 0x8b8)) = eax;
        *((ebp - 0x72c)) = 0x10a;
        eax = *((ebp + 0xc));
        esi = *((eax + 0x148));
        *((ebp - 0x724)) = 1;
        eax = 1;
        eax -= edi;
        eax += edx;
        *((ebp - 0x720)) = eax;
        *((ebp - 0x728)) = esi;
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x154));
        *((ebp - 0x718)) = 1;
        eax = 1;
        eax -= *((ebp - 0x8b4));
        eax += ebx;
        *((ebp - 0x714)) = eax;
        *((ebp - 0x71c)) = ecx;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x13c));
        ebx = *((eax + 0x13c));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14c));
        edx = edi;
        edx -= eax;
        eax = edx;
        edx *= esi;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x158));
        esi = *((ebp - 0x8b4));
        esi -= eax;
        eax = esi;
        eax *= ecx;
        edx += eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x164));
        ecx = *((ebp - 0x8b8));
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x160));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 2;
        eax = ebx + eax;
        *((ebp - 0x734)) = eax;
        *((ebp - 0x730)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x734;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 2;
        *((esp + 4)) = 0x8072d26;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edi = *((eax + 0x14c));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x150));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x158));
        *((ebp - 0x8ac)) = eax;
        eax = *((ebp + 0xc));
        ebx = *((eax + 0x15c));
        eax = *((ebp - 0x2c));
        eax += eax;
        *((ebp - 0x8b0)) = eax;
        *((ebp - 0x72c)) = 0x10a;
        eax = *((ebp + 0xc));
        esi = *((eax + 0x148));
        *((ebp - 0x724)) = 1;
        eax = 1;
        eax -= edi;
        eax += edx;
        *((ebp - 0x720)) = eax;
        *((ebp - 0x728)) = esi;
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x154));
        *((ebp - 0x718)) = 1;
        eax = 1;
        eax -= *((ebp - 0x8ac));
        eax += ebx;
        *((ebp - 0x714)) = eax;
        *((ebp - 0x71c)) = ecx;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x13c));
        ebx = *((eax + 0x13c));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14c));
        edx = edi;
        edx -= eax;
        eax = edx;
        edx *= esi;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x158));
        esi = *((ebp - 0x8ac));
        esi -= eax;
        eax = esi;
        eax *= ecx;
        edx += eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x164));
        ecx = *((ebp - 0x8b0));
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x160));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 2;
        eax = ebx + eax;
        *((ebp - 0x734)) = eax;
        *((ebp - 0x730)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x734;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp - 0x8bc));
        al = (*((ebp - 0x2c)) == eax) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x2c))++;
    }
label_39:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x2c));
    edx = *((eax + 0x2c));
    edx >>= 0x1f;
    eax = edx + eax;
    eax >>= 1;
    edx = eax + eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x2c));
    if (edx != eax) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x283;
        *((ebp - 0x858)) = 0x8072d28;
        *((ebp - 0x854)) = 7;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14c));
        *((ebp - 0x8a4)) = eax;
        eax = *((ebp + 0xc));
        edx = *((eax + 0x150));
        eax = *((ebp + 0xc));
        edi = *((eax + 0x158));
        eax = *((ebp + 0xc));
        ebx = *((eax + 0x15c));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2c));
        *((ebp - 0x8a8)) = eax;
        *((ebp - 0x72c)) = 0x10a;
        eax = *((ebp + 0xc));
        esi = *((eax + 0x148));
        *((ebp - 0x724)) = 1;
        eax = 1;
        eax -= *((ebp - 0x8a4));
        eax += edx;
        *((ebp - 0x720)) = eax;
        *((ebp - 0x728)) = esi;
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x154));
        *((ebp - 0x718)) = 1;
        eax = 1;
        eax -= edi;
        eax += ebx;
        *((ebp - 0x714)) = eax;
        *((ebp - 0x71c)) = ecx;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x13c));
        ebx = *((eax + 0x13c));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14c));
        edx = *((ebp - 0x8a4));
        edx -= eax;
        eax = edx;
        edx *= esi;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x158));
        esi = edi;
        esi -= eax;
        eax = esi;
        eax *= ecx;
        edx += eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x164));
        ecx = *((ebp - 0x8a8));
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x160));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 2;
        eax = ebx + eax;
        *((ebp - 0x734)) = eax;
        *((ebp - 0x730)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x734;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x285;
    *((ebp - 0x858)) = 0x8072cb9;
    *((ebp - 0x854)) = 0xd;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072d2f;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x16c;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x286;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x3a;
    *((esp + 4)) = " kptns =                 (max 50 k-points will be written)(a,3es16.6) wtk =(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,";
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 0x18));
    if (eax > 0x32) {
        eax = 0x32;
    }
    ebx = 0x32;
    *((ebp - 0x34)) = 1;
    if (*((ebp - 0x34)) > ebx) {
        goto label_40;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x288;
        *((ebp - 0x858)) = 0x8072d72;
        *((ebp - 0x854)) = 0xb;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edx = *((eax + 0x244));
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x248));
        edi = *((ebp - 0x34));
        *((ebp - 0x510)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x240));
        *((ebp - 0x508)) = 1;
        esi = 1;
        esi -= edx;
        ecx = esi + ecx;
        *((ebp - 0x504)) = ecx;
        *((ebp - 0x50c)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x234));
        esi = *((ecx + 0x234));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x244));
        edx -= ecx;
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x250));
        ecx = edi;
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x24c));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 3;
        eax = esi + eax;
        *((ebp - 0x518)) = eax;
        *((ebp - 0x514)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x518;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        al = (*((ebp - 0x34)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x34))++;
    }
label_40:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x28a;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 6;
    *((esp + 4)) = 0x8072d7d;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 0x18));
    *((ebp - 0x34)) = 1;
    if (eax <= 0) {
        goto label_41;
    }
    eax--;
    *((ebp - 0x990)) = eax;
    edx = 0xcccccccd;
    eax = *((ebp - 0x990));
    edx:eax = eax * edx;
    ebx = edx;
    ebx >>= 3;
    do {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x28c;
        *((ebp - 0x858)) = 0x8072d83;
        *((ebp - 0x854)) = 0xa;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        edx = *((ebp - 0x34));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x18));
        ecx = *((ebp - 0x34));
        ecx += 9;
        if (ecx < eax) {
            eax = ecx;
        }
        *((ebp - 0x528)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2a0));
        *((ebp - 0x520)) = 1;
        esi = 1;
        esi -= edx;
        ecx = esi + ecx;
        *((ebp - 0x51c)) = ecx;
        *((ebp - 0x524)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x294));
        esi = *((ecx + 0x294));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x2a4));
        edx -= ecx;
        eax *= edx;
        eax <<= 3;
        eax = esi + eax;
        *((ebp - 0x530)) = eax;
        *((ebp - 0x52c)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x530;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x34)) += 0xa;
        if (ebx == 0) {
            goto label_41;
        }
        ebx--;
    } while (1);
label_41:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x28e;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072d8d;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x38)) = 1;
    if (eax <= 0) {
        goto label_42;
    }
    eax--;
    *((ebp - 0x990)) = eax;
    edx = 0xcccccccd;
    eax = *((ebp - 0x990));
    edx:eax = eax * edx;
    ebx = edx;
    ebx >>= 3;
    do {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x290;
        *((ebp - 0x858)) = 0x8072d83;
        *((ebp - 0x854)) = 0xa;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        edx = *((ebp - 0x38));
        eax = *((ebp + 0xc));
        eax = *(eax);
        ecx = *((ebp - 0x38));
        ecx += 9;
        if (ecx < eax) {
            eax = ecx;
        }
        *((ebp - 0x540)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x264));
        *((ebp - 0x538)) = 1;
        esi = 1;
        esi -= edx;
        ecx = esi + ecx;
        *((ebp - 0x534)) = ecx;
        *((ebp - 0x53c)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x258));
        esi = *((ecx + 0x258));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x268));
        edx -= ecx;
        eax *= edx;
        eax <<= 3;
        eax = esi + eax;
        *((ebp - 0x548)) = eax;
        *((ebp - 0x544)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x548;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x38)) += 0xa;
        if (ebx == 0) {
            goto label_42;
        }
        ebx--;
    } while (1);
label_42:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x292;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072d95;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    eax = *((eax + 0x2c));
    edx = *((eax + 0x2c));
    edx >>= 0x1f;
    eax = edx + eax;
    eax >>= 1;
    ebx = eax;
    *((ebp - 0x2c)) = 1;
    if (*((ebp - 0x2c)) > ebx) {
        goto label_43;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x295;
        *((ebp - 0x858)) = 0x8072d9d;
        *((ebp - 0x854)) = 0x13;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edx = *((eax + 0x280));
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x284));
        eax = *((ebp - 0x2c));
        eax += eax;
        edi = eax - 1;
        *((ebp - 0x558)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x27c));
        *((ebp - 0x550)) = 1;
        esi = 1;
        esi -= edx;
        ecx = esi + ecx;
        *((ebp - 0x54c)) = ecx;
        *((ebp - 0x554)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x270));
        esi = *((ecx + 0x270));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x280));
        edx -= ecx;
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x28c));
        ecx = edi;
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x288));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 3;
        eax = esi + eax;
        *((ebp - 0x560)) = eax;
        *((ebp - 0x55c)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x560;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 2;
        *((esp + 4)) = 0x8072d26;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edx = *((eax + 0x280));
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x284));
        eax = *((ebp - 0x2c));
        edi = eax + eax;
        *((ebp - 0x570)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x27c));
        *((ebp - 0x568)) = 1;
        esi = 1;
        esi -= edx;
        ecx = esi + ecx;
        *((ebp - 0x564)) = ecx;
        *((ebp - 0x56c)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x270));
        esi = *((ecx + 0x270));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x280));
        edx -= ecx;
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x28c));
        ecx = edi;
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x288));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 3;
        eax = esi + eax;
        *((ebp - 0x578)) = eax;
        *((ebp - 0x574)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x578;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        al = (*((ebp - 0x2c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x2c))++;
    }
label_43:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x2c));
    edx = *((eax + 0x2c));
    edx >>= 0x1f;
    eax = edx + eax;
    eax >>= 1;
    edx = eax + eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x2c));
    if (edx != eax) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x297;
        *((ebp - 0x858)) = 0x8072db0;
        *((ebp - 0x854)) = 0xa;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edx = *((eax + 0x280));
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x284));
        eax = *((ebp + 0xc));
        esi = *((eax + 0x2c));
        *((ebp - 0x588)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x27c));
        *((ebp - 0x580)) = 1;
        ebx = 1;
        ebx -= edx;
        ecx = ebx + ecx;
        *((ebp - 0x57c)) = ecx;
        *((ebp - 0x584)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x270));
        ebx = *((ecx + 0x270));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x280));
        edx -= ecx;
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x28c));
        ecx = esi;
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x288));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 3;
        eax = ebx + eax;
        *((ebp - 0x590)) = eax;
        *((ebp - 0x58c)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x590;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x298;
    *((ebp - 0x858)) = 0x8072dba;
    *((ebp - 0x854)) = 0xf;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x8072dc9;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x300;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x299;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x29b;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x17;
    *((esp + 4)) = 0x8072dd1;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    ebx = *((eax + 0x1c));
    *((ebp - 0x30)) = 1;
    if (*((ebp - 0x30)) > ebx) {
        goto label_44;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x29d;
        *((ebp - 0x858)) = 0x8072de8;
        *((ebp - 0x854)) = 5;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 7;
        *((esp + 4)) = 0x8072ded;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x320));
        edx = *((eax + 0x320));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x32c));
        ecx = *((eax + 0x32c));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x324));
        eax = ecx + eax;
        eax <<= 2;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        edx += eax;
        eax = ebp - 0x598;
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 0x84;
        *((esp + 4)) = eax;
        eax = ebp - 0x594;
        *(esp) = eax;
        gfortran_string_trim ();
        edx = *((ebp - 0x594));
        eax = *((ebp - 0x598));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp - 0x594));
        if (eax > 0) {
            eax = *((ebp - 0x598));
            if (eax == 0) {
                goto label_45;
            }
            free (eax);
        }
label_45:
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x2a1;
        *((ebp - 0x858)) = 0x8072df4;
        *((ebp - 0x854)) = 0x23;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0xb;
        *((esp + 4)) = 0x8072e17;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2e8));
        edx = *((eax + 0x2e8));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2f4));
        ecx = *((eax + 0x2f4));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2ec));
        eax = ecx + eax;
        eax <<= 3;
        eax = edx + eax;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 0xa;
        *((esp + 4)) = 0x8072e22;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2d0));
        edx = *((eax + 0x2d0));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2dc));
        ecx = *((eax + 0x2dc));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2d4));
        eax = ecx + eax;
        eax <<= 3;
        eax = edx + eax;
        *((esp + 8)) = 8;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072e2c;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xdc));
        edx = *((eax + 0xdc));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xe8));
        ecx = *((eax + 0xe8));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xe0));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 9;
        *((esp + 4)) = 0x8072e34;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xc4));
        edx = *((eax + 0xc4));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xd0));
        ecx = *((eax + 0xd0));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xc8));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 9;
        *((esp + 4)) = 0x8072e3d;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xac));
        edx = *((eax + 0xac));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xb8));
        ecx = *((eax + 0xb8));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xb0));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072e46;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0xf4));
        edx = *((eax + 0xf4));
        eax = *((ebp + 0xc));
        eax = *((eax + 0x100));
        ecx = *((eax + 0x100));
        ecx *= *((ebp - 0x30));
        eax = *((ebp + 0xc));
        eax = *((eax + 0xf8));
        eax = ecx + eax;
        eax <<= 2;
        eax = edx + eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp + 0xc));
        eax = *((eax + 8));
        if (eax > 0x2b) {
            eax = *((ebp + 0xc));
            eax = *((eax + 0x3c));
            if (eax == 1) {
                *((ebp - 0x880)) = 0x8072540;
                *((ebp - 0x87c)) = 0x2a4;
                *((ebp - 0x858)) = 0x8072e4e;
                *((ebp - 0x854)) = 6;
                *((ebp - 0x888)) = 0x1000;
                eax = *((ebp + 0x14));
                eax = *(eax);
                *((ebp - 0x884)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_st_write ();
                *((esp + 8)) = 0xb;
                *((esp + 4)) = 0x8072e54;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_character ();
                eax = *((ebp + 0xc));
                eax = *((eax + 0x64));
                edx = *((eax + 0x64));
                eax = *((ebp + 0xc));
                eax = *((eax + 0x70));
                ecx = *((eax + 0x70));
                ecx *= *((ebp - 0x30));
                eax = *((ebp + 0xc));
                eax = *((eax + 0x68));
                eax = ecx + eax;
                eax <<= 2;
                eax = edx + eax;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_st_write_done ();
            } else {
                *((ebp - 0x880)) = 0x8072540;
                *((ebp - 0x87c)) = 0x2a6;
                *((ebp - 0x858)) = 0x8072e4e;
                *((ebp - 0x854)) = 6;
                *((ebp - 0x888)) = 0x1000;
                eax = *((ebp + 0x14));
                eax = *(eax);
                *((ebp - 0x884)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_st_write ();
                *((esp + 8)) = 0xb;
                *((esp + 4)) = 0x8072e5f;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_character ();
                eax = *((ebp + 0xc));
                eax = *((eax + 0x64));
                edx = *((eax + 0x64));
                eax = *((ebp + 0xc));
                eax = *((eax + 0x70));
                ecx = *((eax + 0x70));
                ecx *= *((ebp - 0x30));
                eax = *((ebp + 0xc));
                eax = *((eax + 0x68));
                eax = ecx + eax;
                eax <<= 2;
                eax = edx + eax;
                *((esp + 8)) = 4;
                *((esp + 4)) = eax;
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = ebp - 0x888;
                *(esp) = eax;
                gfortran_st_write_done ();
            }
        }
        al = (*((ebp - 0x30)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x30))++;
    }
label_44:
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x2ac;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8072a1c;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x2ad;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xe;
    *((esp + 4)) = 0x8072e6a;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x2af;
    *((ebp - 0x858)) = 0x8072e78;
    *((ebp - 0x854)) = 0x19;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8072e91;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0xc));
    eax += 0x1b4;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x1a4;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = *((ebp + 0xc));
    eax += 0x1ac;
    *((esp + 8)) = 8;
    *((esp + 4)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x2b0;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 7;
    *((esp + 4)) = 0x8072ea5;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 0xc));
    ebx = *((eax + 0x14));
    *((ebp - 0x84)) = 1;
    eax = *((ebp - 0x84));
    if (eax > ebx) {
        goto label_46;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x2b2;
        *((ebp - 0x858)) = 0x8072d72;
        *((ebp - 0x854)) = 0xb;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x8072d1e;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp + 0xc));
        edx = *((eax + 0x2bc));
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x2c0));
        edi = *((ebp - 0x84));
        *((ebp - 0x5a8)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2b8));
        *((ebp - 0x5a0)) = 1;
        esi = 1;
        esi -= edx;
        ecx = esi + ecx;
        *((ebp - 0x59c)) = ecx;
        *((ebp - 0x5a4)) = eax;
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x2ac));
        esi = *((ecx + 0x2ac));
        ecx = *((ebp + 0xc));
        ecx = *((ecx + 0x2bc));
        edx -= ecx;
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2c8));
        ecx = edi;
        ecx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x2c4));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 3;
        eax = esi + eax;
        *((ebp - 0x5b0)) = eax;
        *((ebp - 0x5ac)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x5b0;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp - 0x84));
        al = (eax == ebx) ? 1 : 0;
        eax = (int32_t) al;
        edx = *((ebp - 0x84));
        edx++;
        *((ebp - 0x84)) = edx;
    }
label_46:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x3c));
    if (eax != 1) {
        goto label_47;
    }
    *((ebp - 0x20)) = 1;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x14));
    if (eax > 1) {
        eax = *((ebp + 0xc));
        eax = *((eax + 0x14));
        eax--;
        *((ebp - 0x20)) = eax;
    }
    eax = *((ebp + 0xc));
    eax = *((eax + 0x14));
    edx = *((ebp - 0x20));
    *((ebp - 0x89c)) = edx;
    *((ebp - 0x84)) = 1;
    if (*((ebp - 0x89c)) > 0) {
        if (eax <= 0) {
            goto label_47;
        }
        eax--;
        ecx = *((ebp - 0x89c));
        *((ebp - 0x98c)) = ecx;
        edx = 0;
        eax = *(edx:eax) / ebp - 0x98c;
        edx = *(edx:eax) % ebp - 0x98c;
        *((ebp - 0x8a0)) = eax;
    } else {
        if (eax > 1) {
            goto label_47;
        }
        edx = 1;
        ecx = 1;
        ecx -= eax;
        eax = ecx;
        edx = *((ebp - 0x89c));
        edx = -edx;
        *((ebp - 0x98c)) = edx;
        edx = 0;
        eax = *(edx:eax) / ebp - 0x98c;
        edx = *(edx:eax) % ebp - 0x98c;
        *((ebp - 0x8a0)) = eax;
    }
label_5:
    eax = *((ebp + 0xc));
    eax = *((eax + 0x16c));
    edx = *((ebp + 0xc));
    ecx = *((edx + 0x178));
    edx = *((ebp - 0x84));
    ecx *= edx;
    edx = *((ebp + 0xc));
    edx = *((edx + 0x170));
    edx = ecx + edx;
    eax = *((eax + edx*4));
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x20));
    *((ebp - 0x898)) = eax;
    *((ebp - 0xa4)) = 1;
    eax = *((ebp - 0xa4));
    if (eax > *((ebp - 0x898))) {
        goto label_48;
    }
    while (eax == 0) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x2bb;
        *((ebp - 0x858)) = 0x8072eac;
        *((ebp - 0x854)) = 0xd;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 7;
        *((esp + 4)) = 0x8072eb9;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x84;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8072ec0;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0xa4;
        *((esp + 4)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x30;
        *((esp + 4)) = ")=  (max 12 non-zero components will be written)";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        ecx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        ecx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0xd0;
        edi = *(eax);
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0xd4;
        ebx = *(eax);
        ecx = *((ebp - 0xa4));
        *((ebp - 0x88c)) = ecx;
        *((ebp - 0x5d8)) = 0x219;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0xcc;
        esi = *(eax);
        *((ebp - 0x5d0)) = 1;
        eax = 1;
        eax -= edi;
        eax += ebx;
        *((ebp - 0x5cc)) = eax;
        *((ebp - 0x5d4)) = esi;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0xc0;
        eax = *(eax);
        *((ebp - 0x97c)) = eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0xd0;
        eax = *(eax);
        ebx = edi;
        ebx -= eax;
        eax = ebx;
        esi *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0xdc;
        eax = *(eax);
        ebx = *((ebp - 0x88c));
        ebx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0xd8;
        eax = *(eax);
        eax *= ebx;
        eax = esi + eax;
        eax <<= 3;
        eax += *((ebp - 0x97c));
        *((ebp - 0x5e0)) = eax;
        *((ebp - 0x5dc)) = 0;
        eax = ebp - 0x5e0;
        *(esp) = eax;
        eax = gfortran_internal_pack ();
        *((ebp - 0x890)) = eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x58;
        edi = *(eax);
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x5c;
        ebx = *(eax);
        esi = *((ebp - 0xa4));
        *((ebp - 0x894)) = esi;
        *((ebp - 0x5c0)) = 0x109;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x54;
        esi = *(eax);
        *((ebp - 0x5b8)) = 1;
        eax = 1;
        eax -= edi;
        eax += ebx;
        *((ebp - 0x5b4)) = eax;
        *((ebp - 0x5bc)) = esi;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x48;
        eax = *(eax);
        *((ebp - 0x978)) = eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x58;
        eax = *(eax);
        edx = edi;
        edx -= eax;
        eax = edx;
        esi *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x64;
        eax = *(eax);
        ebx = *((ebp - 0x894));
        ebx -= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x60;
        eax = *(eax);
        eax *= ebx;
        eax = esi + eax;
        eax <<= 2;
        eax += *((ebp - 0x978));
        *((ebp - 0x5c8)) = eax;
        *((ebp - 0x5c4)) = 0;
        eax = ebp - 0x5c8;
        *(esp) = eax;
        eax = gfortran_internal_pack ();
        esi = eax;
        eax = *((ebp - 0x9c));
        *((ebp - 0x974)) = eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x64));
        ecx = *((eax + 0x64));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x70));
        eax = *((ebp - 0xa4));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x68));
        eax = edx + eax;
        eax <<= 2;
        eax = ecx + eax;
        *((ebp - 0x970)) = eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x18;
        eax = *(eax);
        edi = *(eax);
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x24;
        edx = *(eax);
        eax = *((ebp - 0xa4));
        ebx = edx;
        ebx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x338));
        ecx = *((eax + 0x338));
        eax = *((ebp + 0xc));
        edx = *((eax + 0x344));
        eax = *((ebp - 0x84));
        edx *= eax;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x33c));
        eax = edx + eax;
        eax <<= 3;
        edx = eax;
        edx <<= 5;
        eax += edx;
        eax += ecx;
        eax += 0x1c;
        eax = *(eax);
        eax = ebx + eax;
        eax <<= 2;
        eax = edi + eax;
        *((esp + 0x24)) = 0x8072ef4;
        *((esp + 0x20)) = 0x8072ef8;
        *((esp + 0x1c)) = esi;
        *((esp + 0x18)) = 0x8072ef4;
        ecx = *((ebp - 0x974));
        *((esp + 0x14)) = ecx;
        *((esp + 0x10)) = 0x8072f00;
        *((esp + 0xc)) = 0x8072ef4;
        ebx = *((ebp - 0x970));
        *((esp + 8)) = ebx;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x890));
        *(esp) = eax;
        print_ij_ ();
        eax = *((ebp - 0x5e0));
        edx = *((ebp - 0x5e0));
        eax = *((ebp - 0x890));
        if (edx != eax) {
            eax = *((ebp - 0x890));
            if (eax == 0) {
                goto label_49;
            }
            free (eax);
        }
label_49:
        eax = *((ebp - 0x5c8));
        edx = *((ebp - 0x5c8));
        eax = esi;
        if (edx != eax) {
            eax = esi;
            if (eax == 0) {
                goto label_50;
            }
            free (eax);
        }
label_50:
        eax = *((ebp - 0xa4));
        al = (eax == *((ebp - 0x898))) ? 1 : 0;
        eax = (int32_t) al;
        edx = *((ebp - 0xa4));
        edx++;
        *((ebp - 0xa4)) = edx;
    }
label_48:
    eax = *((ebp - 0x84));
    eax += *((ebp - 0x89c));
    *((ebp - 0x84)) = eax;
    if (*((ebp - 0x8a0)) != 0) {
        *((ebp - 0x8a0))--;
        goto label_5;
    }
label_47:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 3) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x2c4;
        *((ebp - 0x858)) = 0x807297f;
        *((ebp - 0x854)) = 3;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x30;
        *((esp + 4)) = " End the ECHO of part of the ABINIT file header  End the ECHO of the ABINIT file header ";
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax == 4) {
        *((ebp - 0x880)) = 0x8072540;
        *((ebp - 0x87c)) = 0x2c5;
        *((ebp - 0x858)) = 0x807297f;
        *((ebp - 0x854)) = 3;
        *((ebp - 0x888)) = 0x1000;
        eax = *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x884)) = eax;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x8072f34;
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x888;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x880)) = 0x8072540;
    *((ebp - 0x87c)) = 0x2c7;
    *((ebp - 0x858)) = 0x807297f;
    *((ebp - 0x854)) = 3;
    *((ebp - 0x888)) = 0x1000;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x884)) = eax;
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x50;
    *((esp + 4)) = " =============================================================================== ECHO of part of the ABINIT file header  ECHO of the ABINIT file header   First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)";
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x888;
    *(esp) = eax;
    gfortran_st_write_done ();
    goto label_7;
label_16:
label_7:
    eax = *((ebp - 0x2d4));
    if (eax != 0) {
        eax = *((ebp - 0x2d4));
        free (eax);
    }
    *((ebp - 0x2d4)) = 0;
    eax = *((ebp - 0x9c));
    if (eax != 0) {
        eax = *((ebp - 0x9c));
        free (eax);
    }
    *((ebp - 0x9c)) = 0;
    eax = *((ebp - 0x74));
    if (eax != 0) {
        eax = *((ebp - 0x74));
        free (eax);
    }
    *((ebp - 0x74)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806af3c */
#include <stdint.h>
 
int32_t dbg_wffopen (size_t arg_10h) {
    int32_t var_388h;
    int32_t var_384h;
    char * var_380h;
    int32_t var_37ch;
    int32_t var_368h;
    size_t var_364h;
    int32_t var_35ch;
    int32_t var_358h;
    int32_t var_354h;
    char * var_350h;
    int32_t var_34ch;
    int32_t var_348h;
    int32_t var_344h;
    int32_t var_234h;
    int32_t var_230h;
    char * var_22ch;
    int32_t var_228h;
    int32_t var_218h;
    int32_t var_214h;
    char * var_210h;
    int32_t var_20ch;
    int32_t var_1fch;
    integer(kind=4) accesswff;
    integer(kind=4) spacecomm;
    integer(kind=4) ier;
    wffile_type wff;
    integer(kind=4) master;
    integer(kind=4) me;
    integer(kind=4) unwff;
    integer(kind=4) const _filename;
    size_t s2;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    /* void wffopen(integer(kind=4) accesswff,integer(kind=4) spacecomm,integer(kind=4) ier,wffile_type wff,integer(kind=4) master,integer(kind=4) me,integer(kind=4) unwff,integer(kind=4) const _filename); */
    eax = *((ebp + 0x24));
    edx = *(eax);
    eax = *((ebp + 0x18));
    *(eax) = edx;
    eax = *((ebp + 8));
    edx = *(eax);
    eax = *((ebp + 0x18));
    *((eax + 4)) = edx;
    eax = *((ebp + 0x18));
    edx = eax + 0x10;
    eax = *((ebp + 0x10));
    memmove (edx, eax, 0x84);
    eax = *((ebp + 0x20));
    edx = *(eax);
    eax = *((ebp + 0x18));
    *((eax + 0x98)) = edx;
    eax = *((ebp + 0x1c));
    edx = *(eax);
    eax = *((ebp + 0x18));
    *((eax + 0x94)) = edx;
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebp + 0x18));
    *((eax + 0xa0)) = edx;
    eax = *((ebp + 0x14));
    *(eax) = 0;
    eax = *((ebp + 8));
    eax = *(eax);
    if (eax == 0) {
        *((ebp - 0x380)) = "wffopen.F90";
        *((ebp - 0x37c)) = 0x6d;
        eax = *((ebp + 0x10));
        *((ebp - 0x364)) = eax;
        *((ebp - 0x368)) = 0x84;
        *((ebp - 0x350)) = "unformatted(8a,i6,3a)\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL";
        *((ebp - 0x34c)) = 0xb;
        *((ebp - 0x388)) = 0x900;
        eax = *((ebp + 0x24));
        eax = *(eax);
        *((ebp - 0x384)) = eax;
        eax = ebp - 0x388;
        *(esp) = eax;
        gfortran_st_open ();
        *((ebp - 0x210)) = "wffopen.F90";
        *((ebp - 0x20c)) = 0x6e;
        *((ebp - 0x218)) = 0;
        eax = *((ebp + 0x24));
        eax = *(eax);
        *((ebp - 0x214)) = eax;
        eax = ebp - 0x218;
        *(esp) = eax;
        gfortran_st_rewind ();
    } else {
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax == -1) {
            eax = *((ebp + 0x1c));
            edx = *(eax);
            eax = *((ebp + 0x20));
            eax = *(eax);
            if (edx != eax) {
                goto label_0;
            }
            *((ebp - 0x380)) = "wffopen.F90";
            *((ebp - 0x37c)) = 0x73;
            eax = *((ebp + 0x10));
            *((ebp - 0x364)) = eax;
            *((ebp - 0x368)) = 0x84;
            *((ebp - 0x350)) = "unformatted(8a,i6,3a)\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL";
            *((ebp - 0x34c)) = 0xb;
            *((ebp - 0x388)) = 0x900;
            eax = *((ebp + 0x24));
            eax = *(eax);
            *((ebp - 0x384)) = eax;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_st_open ();
            *((ebp - 0x22c)) = "wffopen.F90";
            *((ebp - 0x228)) = 0x74;
            *((ebp - 0x234)) = 0;
            eax = *((ebp + 0x24));
            eax = *(eax);
            *((ebp - 0x230)) = eax;
            eax = ebp - 0x234;
            *(esp) = eax;
            gfortran_st_rewind ();
        } else {
            *((ebp - 0x380)) = "wffopen.F90";
            *((ebp - 0x37c)) = 0xab;
            eax = ebp - 0x1fc;
            *((ebp - 0x348)) = eax;
            *((ebp - 0x344)) = 0x1f4;
            *((ebp - 0x35c)) = 0;
            *((ebp - 0x384)) = 0;
            *((ebp - 0x358)) = 0x80733db;
            *((ebp - 0x354)) = 0xa;
            *((ebp - 0x388)) = 0x5000;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x80733e5;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x12;
            *((esp + 4)) = 0x80733e6;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x80733e5;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x40;
            *((esp + 4)) = 0x80733f8;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x80733e5;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x36;
            *((esp + 4)) = 0x8073438;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x80733e5;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x19;
            *((esp + 4)) = 0x807346e;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 4;
            eax = *((ebp + 8));
            *((esp + 4)) = eax;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_integer ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x8073487;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 1;
            *((esp + 4)) = 0x80733e5;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            *((esp + 8)) = 0x36;
            *((esp + 4)) = 0x8073488;
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0x388;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((esp + 0x10)) = 4;
            *((esp + 0xc)) = 0x1f4;
            *((esp + 8)) = 0x80734be;
            eax = ebp - 0x1fc;
            *((esp + 4)) = eax;
            wrtout_ (0x80734c4);
            *((esp + 4)) = 4;
            *(esp) = 0x80734be;
            leave_new_ ();
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806c6ec */
#include <stdint.h>
 
int32_t dbg_canon9 (void) {
    real(kind=8) num;
    real(kind=8) red;
    real(kind=8) shift;
    /* void canon9(real(kind=8) num,real(kind=8) red,real(kind=8) shift); */
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax == 0) {
        goto label_0;
    }
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8073840);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8073848);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
        __asm ("sahf");
    } while (eax == 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8073840);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8073848);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0xc));
    *(eax) = fp_stack[0];
    fp_stack--;
    goto label_1;
label_0:
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8073840);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8073848);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
        __asm ("sahf");
    } while (eax == 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8073840);
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *(0x8073848);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0xc));
    *(eax) = fp_stack[0];
    fp_stack--;
label_1:
    eax = *((ebp + 0xc));
    *(fp_stack--) = *(eax);
    fp_stack[0] = abs(fp_stack[0]);
    *(fp_stack--) = *(0x8073848);
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = *((ebp + 0xc));
        *(fp_stack--) = 0.0;
        *(eax) = fp_stack[0];
        fp_stack--;
    }
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 0xc));
    *(fp_stack--) = *(eax);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x10));
    *(eax) = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806d2a0 */
#include <stdint.h>
 
int32_t dbg_print_ij (void) {
    int32_t var_48ch;
    int32_t var_480h;
    int32_t var_47ch;
    int32_t var_478h;
    int32_t var_474h;
    int32_t var_470h;
    int32_t var_46ch;
    int32_t var_468h;
    int32_t var_464h;
    int32_t var_460h;
    int32_t var_45ch;
    int32_t var_458h;
    int32_t var_454h;
    int32_t var_450h;
    int32_t var_44ch;
    int32_t var_448h;
    int32_t var_444h;
    int32_t var_440h;
    int32_t var_43ch;
    int32_t var_438h;
    int32_t var_434h;
    int32_t var_430h;
    int32_t var_42ch;
    int32_t var_428h;
    int32_t var_424h;
    int32_t var_420h;
    int32_t var_41ch;
    int32_t var_418h;
    int32_t var_414h;
    int32_t var_410h;
    int32_t var_40ch;
    int32_t var_404h;
    int32_t var_400h;
    char * var_3fch;
    int32_t var_3f8h;
    int32_t var_3d8h;
    char * var_3d4h;
    int32_t var_3d0h;
    int32_t var_3c4h;
    int32_t var_3c0h;
    int32_t var_2b0h;
    int32_t var_2ach;
    int32_t var_2a8h;
    int32_t var_2a4h;
    int32_t var_2a0h;
    int32_t var_29ch;
    int32_t var_298h;
    int32_t var_294h;
    int32_t var_290h;
    int32_t var_28ch;
    int32_t var_288h;
    int32_t var_284h;
    real(kind=8) testval;
    real(kind=8)[5][5] prtab;
    int32_t var_270h;
    int32_t var_26ch;
    int32_t var_268h;
    int32_t var_264h;
    int32_t var_260h;
    int32_t var_25ch;
    int32_t var_258h;
    uint32_t var_254h;
    integer(kind=4) nhigh;
    int32_t var_24ch;
    real(kind=8)[5] b_ij;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    integer(kind=4) ubound.0;
    integer(kind=4) ilmn;
    integer(kind=4) ilmn1;
    integer(kind=4) j0lmn;
    integer(kind=4) jlmn;
    integer(kind=4) jlmn1;
    integer(kind=4) klmn;
    integer(kind=4) nmin;
    integer(kind=4) ubound.2;
    integer(kind=4) ubound.4;
    real(kind=8)[5] a_ij;
    integer(kind=4) adim;
    integer(kind=4) ndim;
    integer(kind=4) opt_io;
    integer(kind=4) opt_l;
    integer(kind=4)[4] opt_l_index;
    integer(kind=4) opt_pack;
    integer(kind=4)[4] pack2ij;
    real(kind=8) test_value;
    integer(kind=4) unt;
    char * var_4h;
    char * var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void print_ij(real(kind=8)[5] a_ij,integer(kind=4) adim,integer(kind=4) ndim,integer(kind=4) opt_io,integer(kind=4) opt_l,integer(kind=4)[4] opt_l_index,integer(kind=4) opt_pack,integer(kind=4)[4] pack2ij,real(kind=8) test_value,integer(kind=4) unt); */
    eax = *((ebp + 0x18));
    eax = *(eax);
    eax++;
    edx = eax;
    if (edx > 1) {
        edx = 1;
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x20));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0x40));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x460)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x45c)) = ebx;
    eax = *((ebp - 0x460));
    edx = *((ebp - 0x45c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    edi = eax;
    edi &= 0xffffffff;
    *((ebp - 0x468)) = edi;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x464)) = ecx;
    eax = *((ebp - 0x468));
    edx = *((ebp - 0x464));
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebp + 0x20));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x470)) = ebx;
    edi = edx;
    edi &= 0xf;
    *((ebp - 0x46c)) = edi;
    eax = *((ebp - 0x470));
    edx = *((ebp - 0x46c));
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x478)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x474)) = ebx;
    eax = *((ebp - 0x478));
    edx = *((ebp - 0x474));
    *((ebp - 0x58)) = 0;
    *((ebp - 0x274)) = 0;
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax > 0xc) {
        eax = 0xc;
    }
    *((ebp - 0x24)) = eax;
    eax = *((ebp + 0x18));
    eax = *(eax);
    if (eax < 0) {
        goto label_3;
    }
    edx = 0;
    esi = *((ebp - 0x20));
    eax = *((ebp + 0x18));
    edi = *(eax);
    eax = 1;
    do {
        if (eax > esi) {
            goto label_4;
        }
        ebx = eax - 1;
        ecx = *((ebp + 0x1c));
        ecx = *((ecx + ebx*4));
        if (ecx == edi) {
            edx++;
        }
        eax++;
    } while (1);
label_4:
    *((ebp - 0x24)) = edx;
label_3:
    *((ebp - 0x26c)) = 0x21a;
    *((ebp - 0x264)) = 1;
    eax = *((ebp - 0x24));
    *((ebp - 0x260)) = eax;
    *((ebp - 0x268)) = 1;
    eax = 0;
    __asm ("cmovns eax, dword [ebp - 0x24]");
    *((ebp - 0x258)) = 1;
    edx = *((ebp - 0x24));
    *((ebp - 0x254)) = edx;
    *((ebp - 0x25c)) = eax;
    edx = 0;
    __asm ("cmovns edx, dword [ebp - 0x24]");
    edx *= eax;
    ebx = eax;
    ebx = ~ebx;
    al = (*((ebp - 0x24)) <= 0) ? 1 : 0;
    ecx = (int32_t) al;
    al = (*((ebp - 0x24)) <= 0) ? 1 : 0;
    eax = (int32_t) al;
    eax |= ecx;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    edx = *((ebp - 0x274));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = "Attempt to allocate negative amount of memory. Possible integer overflow";
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x274)) = eax;
        *((ebp - 0x270)) = ebx;
        *((ebp - 0x50)) = 0x219;
        *((ebp - 0x48)) = 1;
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *((ebp + 0x10));
        eax = *(eax);
        eax++;
        eax *= edx;
        edx = eax;
        edx >>= 0x1f;
        eax = edx + eax;
        eax >>= 1;
        *((ebp - 0x44)) = eax;
        *((ebp - 0x4c)) = 1;
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *((ebp + 0x10));
        eax = *(eax);
        eax++;
        eax *= edx;
        if (eax <= 1) {
        } else {
            *((esp + 8)) = "prtab";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 92 of file print_ij.F90";
            gfortran_runtime_error_at ();
        }
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *((ebp + 0x10));
        eax = *(eax);
        eax++;
        eax *= edx;
        edx = eax;
        edx >>= 0x1f;
        eax = edx + eax;
        eax >>= 1;
        goto label_5;
    }
    eax = 0;
label_5:
    edx = 0;
    eax = *((ebp + 0x10));
    ecx = *(eax);
    eax = *((ebp + 0x10));
    eax = *(eax);
    eax++;
    eax *= ecx;
    al = (eax <= 1) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    edx = *((ebp - 0x58));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = "Attempt to allocate negative amount of memory. Possible integer overflow";
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x58)) = eax;
        *((ebp - 0x54)) = 0xffffffff;
        eax = *((ebp + 0x20));
        eax = *(eax);
        if (eax == 0) {
            goto label_6;
        }
        goto label_7;
    }
    *((esp + 8)) = "b_ij";
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 95 of file print_ij.F90";
    gfortran_runtime_error_at ();
label_6:
    edi = *((ebp - 0x40));
    *((ebp - 0x454)) = edi;
    eax = *((ebp - 0x58));
    esi = *((ebp - 0x58));
    edi = *((ebp - 0x54));
    eax = *((ebp - 0x48));
    eax--;
    *((ebp - 0x458)) = eax;
    eax = *((ebp - 0x4c));
    *((ebp - 0x450)) = eax;
    edx = 1;
    do {
        if (edx > *((ebp - 0x454))) {
            goto label_8;
        }
        eax = *((ebp - 0x458));
        eax = edx + eax;
        eax *= *((ebp - 0x450));
        ebx = eax + edi;
        ecx = edx - 1;
        eax = *((ebp + 8));
        *(fp_stack--) = *((eax + ecx*8));
        *((esi + ebx*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_7:
    eax = *((ebp - 0x58));
    edx = *((ebp - 0x58));
    ebx = *((ebp - 0x54));
    eax = *((ebp - 0x48));
    edi = *((ebp - 0x44));
    esi = *((ebp - 0x4c));
    do {
        if (eax > edi) {
            goto label_9;
        }
        ecx = eax;
        ecx *= esi;
        ecx += ebx;
        *(fp_stack--) = 0.0;
        *((edx + ecx*8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_9:
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x28)) = 1;
    if (*((ebp - 0x28)) > eax) {
        goto label_8;
    }
    while (edx == 0) {
        edx = *((ebp - 0x58));
        ecx = *((ebp - 0x28));
        ebx = ecx - 1;
        ecx = *((ebp + 0x24));
        ebx = *((ecx + ebx*4));
        ecx = *((ebp - 0x4c));
        ebx *= ecx;
        ecx = *((ebp - 0x54));
        ebx += ecx;
        ecx = *((ebp - 0x28));
        esi = ecx - 1;
        ecx = *((ebp + 8));
        *(fp_stack--) = *((ecx + esi*8));
        *((edx + ebx*8)) = fp_stack[0];
        fp_stack--;
        dl = (*((ebp - 0x28)) == eax) ? 1 : 0;
        edx = (int32_t) dl;
        *((ebp - 0x28))++;
    }
label_8:
    *((ebp - 0x2c)) = 0;
    eax = *((ebp + 0x10));
    edi = *(eax);
    *((ebp - 0x30)) = 1;
    if (*((ebp - 0x30)) > edi) {
        goto label_10;
    }
    goto label_11;
label_0:
label_11:
    eax = *((ebp + 0x18));
    eax = *(eax);
    if (eax < 0) {
        eax = *((ebp - 0x30));
        *((ebp - 0x2c)) = eax;
        eax = *((ebp - 0x2c));
        if (eax > *((ebp - 0x24))) {
            goto label_12;
        }
    } else {
        eax = *((ebp - 0x30));
        edx = eax - 1;
        eax = *((ebp + 0x1c));
        edx = *((eax + edx*4));
        eax = *((ebp + 0x18));
        eax = *(eax);
        if (edx != eax) {
            goto label_12;
        }
        *((ebp - 0x2c))++;
    }
    *((ebp - 0x38)) = 0;
    eax = *((ebp - 0x30));
    eax--;
    eax *= *((ebp - 0x30));
    edx = eax;
    edx >>= 0x1f;
    eax = edx + eax;
    eax >>= 1;
    *((ebp - 0x34)) = eax;
    edx = *((ebp - 0x30));
    *((ebp - 0x44c)) = edx;
    *((ebp - 0x3c)) = 1;
    ecx = *((ebp - 0x44c));
    if (*((ebp - 0x3c)) > ecx) {
        goto label_12;
    }
    while (eax == 0) {
        eax = *((ebp + 0x18));
        eax = *(eax);
        if (eax < 0) {
            eax = *((ebp - 0x3c));
            *((ebp - 0x38)) = eax;
        } else {
            eax = *((ebp - 0x3c));
            edx = eax - 1;
            eax = *((ebp + 0x1c));
            edx = *((eax + edx*4));
            eax = *((ebp + 0x18));
            eax = *(eax);
            if (edx != eax) {
                goto label_13;
            }
            *((ebp - 0x38))++;
        }
        eax = *((ebp - 0x3c));
        edx = *((ebp - 0x34));
        eax = edx + eax;
        *((ebp - 0x28)) = eax;
        eax = *((ebp - 0x274));
        ecx = *((ebp - 0x274));
        eax = *((ebp - 0x268));
        edx = *((ebp - 0x268));
        edx *= *((ebp - 0x2c));
        eax = *((ebp - 0x25c));
        eax *= *((ebp - 0x38));
        edx += eax;
        eax = *((ebp - 0x270));
        ebx = edx + eax;
        eax = *((ebp - 0x58));
        edx = *((ebp - 0x58));
        eax = *((ebp - 0x4c));
        esi = *((ebp - 0x4c));
        esi *= *((ebp - 0x28));
        eax = *((ebp - 0x54));
        eax = esi + eax;
        *(fp_stack--) = *((edx + eax*8));
        *((ecx + ebx*8)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x274));
        ecx = *((ebp - 0x274));
        eax = *((ebp - 0x268));
        edx = *((ebp - 0x268));
        edx *= *((ebp - 0x38));
        eax = *((ebp - 0x25c));
        eax *= *((ebp - 0x2c));
        edx += eax;
        eax = *((ebp - 0x270));
        esi = edx + eax;
        eax = *((ebp - 0x274));
        ebx = *((ebp - 0x274));
        eax = *((ebp - 0x268));
        edx = *((ebp - 0x268));
        edx *= *((ebp - 0x2c));
        eax = *((ebp - 0x25c));
        eax *= *((ebp - 0x38));
        edx += eax;
        eax = *((ebp - 0x270));
        eax = edx + eax;
        *(fp_stack--) = *((ebx + eax*8));
        *((ecx + esi*8)) = fp_stack[0];
        fp_stack--;
label_13:
        ebx = *((ebp - 0x44c));
        al = (*((ebp - 0x3c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x3c))++;
    }
label_12:
    al = (*((ebp - 0x30)) == edi) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x30))++;
    if (eax == 0) {
        goto label_0;
    }
label_10:
    eax = *((ebp - 0x58));
    if (eax == 0) {
        *((esp + 8)) = "b_ij";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 129 of file print_ij.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x58));
    free (eax);
    *((ebp - 0x58)) = 0;
    eax = *((ebp + 0x2c));
    eax = *(eax);
    if (eax != 2) {
        goto label_14;
    }
    eax = *((ebp - 0x274));
    *((ebp - 0x428)) = eax;
    edi = *((ebp - 0x270));
    *((ebp - 0x42c)) = edi;
    eax = *((ebp - 0x264));
    *((ebp - 0x430)) = eax;
    edx = *((ebp - 0x260));
    *((ebp - 0x434)) = edx;
    ecx = *((ebp - 0x258));
    ebx = *((ebp - 0x254));
    *((ebp - 0x438)) = ebx;
    eax = *((ebp - 0x274));
    *((ebp - 0x43c)) = eax;
    edi = *((ebp - 0x270));
    *((ebp - 0x440)) = edi;
    edx = *((ebp - 0x264));
    eax = *((ebp - 0x258));
    ebx = edx;
    ebx -= *((ebp - 0x430));
    *((ebp - 0x444)) = ebx;
    edi = eax;
    edi -= ecx;
    *((ebp - 0x448)) = edi;
    eax = *((ebp - 0x268));
    *((ebp - 0x420)) = eax;
    edx = *((ebp - 0x268));
    *((ebp - 0x424)) = edx;
    ebx = ecx;
label_1:
    if (ebx > *((ebp - 0x438))) {
        goto label_14;
    }
    eax = *((ebp - 0x25c));
    eax *= ebx;
    edi = *((ebp - 0x42c));
    edi = eax + edi;
    edx = *((ebp - 0x448));
    edx = ebx + edx;
    eax = *((ebp - 0x25c));
    eax *= edx;
    esi = *((ebp - 0x440));
    esi = eax + esi;
    edx = *((ebp - 0x430));
    do {
        if (edx > *((ebp - 0x434))) {
            goto label_15;
        }
        eax = *((ebp - 0x444));
        eax = edx + eax;
        eax *= *((ebp - 0x424));
        eax += esi;
        *((ebp - 0x48c)) = eax;
        eax = *((ebp - 0x420));
        eax *= edx;
        eax += edi;
        *((ebp - 0x47c)) = eax;
        ecx = *((ebp - 0x47c));
        eax = *((ebp - 0x428));
        *(fp_stack--) = *((eax + ecx*8));
        *(fp_stack--) = *(0x8073c58);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ecx = *((ebp - 0x48c));
        eax = *((ebp - 0x43c));
        *((eax + ecx*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_15:
    ebx++;
    goto label_1;
label_14:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax > 0xc) {
        eax = *((ebp + 0x18));
        eax = *(eax);
        if (eax < 0) {
            goto label_16;
        }
    }
    ebx = *((ebp - 0x24));
    *((ebp - 0x3c)) = 1;
    if (*((ebp - 0x3c)) > ebx) {
        goto label_17;
    }
    do {
        *((ebp - 0x3fc)) = "print_ij.F90";
        *((ebp - 0x3f8)) = 0x87;
        eax = ebp - 0x24c;
        *((ebp - 0x3c4)) = eax;
        *((ebp - 0x3c0)) = 0x1f4;
        *((ebp - 0x3d8)) = 0;
        *((ebp - 0x400)) = 0;
        *((ebp - 0x3d4)) = "(100(1x,f9.5))COLL";
        *((ebp - 0x3d0)) = 0xe;
        *((ebp - 0x404)) = 0x5000;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_st_write ();
        edx = *((ebp - 0x24));
        esi = *((ebp - 0x3c));
        *((ebp - 0x290)) = 0x219;
        eax = *((ebp - 0x25c));
        *((ebp - 0x288)) = 1;
        *((ebp - 0x284)) = edx;
        *((ebp - 0x28c)) = eax;
        edx = *((ebp - 0x274));
        ecx = *((ebp - 0x264));
        esi -= ecx;
        ecx = *((ebp - 0x268));
        ecx *= esi;
        esi = *((ebp - 0x258));
        *((ebp - 0x480)) = 1;
        edi = *((ebp - 0x480));
        edi -= esi;
        esi = edi;
        eax *= esi;
        eax = ecx + eax;
        eax <<= 3;
        eax = edx + eax;
        *((ebp - 0x298)) = eax;
        *((ebp - 0x294)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x298;
        *((esp + 4)) = eax;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8073ab8;
        eax = ebp - 0x24c;
        *((esp + 4)) = eax;
        wrtout_ (0x8073abc);
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (eax == 2) {
            *((esp + 0x10)) = 4;
            *((esp + 0xc)) = 0x1f4;
            *((esp + 8)) = 0x8073ab8;
            eax = ebp - 0x24c;
            *((esp + 4)) = eax;
            wrtout_ (0x8073ac0);
        }
        al = (*((ebp - 0x3c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x3c))++;
        if (eax != 0) {
            goto label_18;
        }
    } while (1);
label_16:
    ebx = *((ebp - 0x24));
    *((ebp - 0x3c)) = 1;
    if (*((ebp - 0x3c)) > ebx) {
        goto label_19;
    }
    while (eax == 0) {
        *((ebp - 0x3fc)) = "print_ij.F90";
        *((ebp - 0x3f8)) = 0x8d;
        eax = ebp - 0x24c;
        *((ebp - 0x3c4)) = eax;
        *((ebp - 0x3c0)) = 0x1f4;
        *((ebp - 0x3d8)) = 0;
        *((ebp - 0x400)) = 0;
        *((ebp - 0x3d4)) = "(12(1x,f9.5),a) ...(3x,a,i2,a)...  only \f";
        *((ebp - 0x3d0)) = 0xf;
        *((ebp - 0x404)) = 0x5000;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_st_write ();
        edx = *((ebp - 0x24));
        esi = *((ebp - 0x3c));
        *((ebp - 0x2a8)) = 0x219;
        eax = *((ebp - 0x25c));
        *((ebp - 0x2a0)) = 1;
        *((ebp - 0x29c)) = edx;
        *((ebp - 0x2a4)) = eax;
        edx = *((ebp - 0x274));
        ecx = *((ebp - 0x264));
        esi -= ecx;
        ecx = *((ebp - 0x268));
        ecx *= esi;
        esi = *((ebp - 0x258));
        *((ebp - 0x480)) = 1;
        edi = *((ebp - 0x480));
        edi -= esi;
        esi = edi;
        eax *= esi;
        eax = ecx + eax;
        eax <<= 3;
        eax = edx + eax;
        *((ebp - 0x2b0)) = eax;
        *((ebp - 0x2ac)) = 0;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x2b0;
        *((esp + 4)) = eax;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 4;
        *((esp + 4)) = 0x8073ad3;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8073ab8;
        eax = ebp - 0x24c;
        *((esp + 4)) = eax;
        wrtout_ (0x8073abc);
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (eax == 2) {
            *((esp + 0x10)) = 4;
            *((esp + 0xc)) = 0x1f4;
            *((esp + 8)) = 0x8073ab8;
            eax = ebp - 0x24c;
            *((esp + 4)) = eax;
            wrtout_ (0x8073ac0);
        }
        al = (*((ebp - 0x3c)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x3c))++;
    }
label_19:
    *((ebp - 0x3fc)) = "print_ij.F90";
    *((ebp - 0x3f8)) = 0x91;
    eax = ebp - 0x24c;
    *((ebp - 0x3c4)) = eax;
    *((ebp - 0x3c0)) = 0x1f4;
    *((ebp - 0x3d8)) = 0;
    *((ebp - 0x400)) = 0;
    *((ebp - 0x3d4)) = 0x8073ad7;
    *((ebp - 0x3d0)) = 0xb;
    *((ebp - 0x404)) = 0x5000;
    eax = ebp - 0x404;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xa;
    *((esp + 4)) = 0x8073ae2;
    eax = ebp - 0x404;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    *((esp + 4)) = 0x8073aec;
    eax = ebp - 0x404;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 0x21;
    *((esp + 4)) = "  components have been written...(5a,i3,a,f6.1,7a) print_ij: WARNING -\n";
    eax = ebp - 0x404;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x404;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x8073ab8;
    eax = ebp - 0x24c;
    *((esp + 4)) = eax;
    wrtout_ (0x8073abc);
    eax = *((ebp + 0x14));
    eax = *(eax);
    if (eax == 2) {
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8073ab8;
        eax = ebp - 0x24c;
        *((esp + 4)) = eax;
        wrtout_ (0x8073ac0);
        goto label_20;
label_17:
        goto label_20;
label_18:
    }
label_20:
    eax = *((ebp + 0x28));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax == 0) {
        goto label_21;
    }
    eax = *((ebp + 0x28));
    *(fp_stack--) = *(eax);
    *((ebp - 0x280)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x2c));
    eax = *(eax);
    if (eax == 2) {
        *(fp_stack--) = *((ebp - 0x280));
        *(fp_stack--) = *(0x8073c58);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x280)) = fp_stack[0];
        fp_stack--;
    }
    *((ebp - 0x250)) = 0;
    ebx = 0;
    eax = *((ebp - 0x274));
    edi = *((ebp - 0x274));
    eax = *((ebp - 0x270));
    *((ebp - 0x410)) = eax;
    edx = *((ebp - 0x264));
    *((ebp - 0x414)) = edx;
    ecx = *((ebp - 0x260));
    *((ebp - 0x418)) = ecx;
    eax = *((ebp - 0x258));
    edx = *((ebp - 0x254));
    *((ebp - 0x41c)) = edx;
    *(fp_stack--) = *((ebp - 0x280));
    ecx = *((ebp - 0x268));
    *((ebp - 0x40c)) = ecx;
    ecx = eax;
label_2:
    if (ecx > *((ebp - 0x41c))) {
        goto label_22;
    }
    eax = *((ebp - 0x25c));
    eax *= ecx;
    esi = *((ebp - 0x410));
    esi = eax + esi;
    edx = *((ebp - 0x414));
    do {
        if (edx > *((ebp - 0x418))) {
            goto label_23;
        }
        eax = *((ebp - 0x40c));
        eax *= edx;
        eax += esi;
        *(fp_stack--) = *((edi + eax*8));
        fp_stack[0] = abs(fp_stack[0]);
        fp_stack--;
        al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            ebx++;
        }
        edx++;
    } while (1);
label_23:
    ecx++;
    goto label_2;
label_22:
    fp_stack++;
    *((ebp - 0x250)) = ebx;
    eax = *((ebp - 0x250));
    if (eax > 0) {
        *((ebp - 0x3fc)) = "print_ij.F90";
        *((ebp - 0x3f8)) = 0xa0;
        eax = ebp - 0x24c;
        *((ebp - 0x3c4)) = eax;
        *((ebp - 0x3c0)) = 0x1f4;
        *((ebp - 0x3d8)) = 0;
        *((ebp - 0x400)) = 0;
        *((ebp - 0x3d4)) = 0x8073b11;
        *((ebp - 0x3d0)) = 0x11;
        *((ebp - 0x404)) = 0x5000;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x14;
        *((esp + 4)) = 0x8073b22;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073b36;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2a;
        *((esp + 4)) = "  The matrix seems to have high value(s) !  (";
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073b36;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 3;
        *((esp + 4)) = 0x8073b62;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = ebp - 0x250;
        *((esp + 4)) = eax;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0x26;
        *((esp + 4)) = " components have a value greater than ).  It can cause instabilities during SCF convergence.  Action: you should check your atomic dataset (psp file)";
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 8;
        eax = ebp - 0x280;
        *((esp + 4)) = eax;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 2;
        *((esp + 4)) = 0x8073b8e;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073b36;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x34;
        *((esp + 4)) = 0x8073b90;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073b36;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x39;
        *((esp + 4)) = 0x8073bc4;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073b36;
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x34;
        *((esp + 4)) = "          and look for \"high\" projector functions...At line 166 of file print_ij.F90";
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x404;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8073ab8;
        eax = ebp - 0x24c;
        *((esp + 4)) = eax;
        wrtout_ (0x8073abc);
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (eax != 2) {
            goto label_21;
        }
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x8073ab8;
        eax = ebp - 0x24c;
        *((esp + 4)) = eax;
        wrtout_ (0x8073ac0);
    }
label_21:
    eax = *((ebp - 0x274));
    if (eax == 0) {
        *((esp + 8)) = "prtab";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = 0x8073c34;
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x274));
    free (eax);
    *((ebp - 0x274)) = 0;
    eax = *((ebp - 0x274));
    if (eax != 0) {
        eax = *((ebp - 0x274));
        free (eax);
    }
    *((ebp - 0x274)) = 0;
    eax = *((ebp - 0x58));
    if (eax != 0) {
        eax = *((ebp - 0x58));
        free (eax);
    }
    *((ebp - 0x58)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8070830 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x57b9;
    _init ();
    edi = ebx - 0x108;
    eax = ebx - 0x108;
    edi -= eax;
    edi >>= 2;
    if (edi == 0) {
        goto label_0;
    }
    esi = 0;
    do {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        uint32_t (*ebx + esi*4 - 0x108)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x805b8d4 */
#include <stdint.h>
 
int32_t dbg_getwtk (void) {
    int32_t var_2a8h;
    int32_t var_2a4h;
    int32_t var_2a0h;
    int32_t var_29ch;
    int32_t var_298h;
    int32_t var_294h;
    int32_t var_290h;
    int32_t var_28ch;
    int32_t var_288h;
    int32_t var_284h;
    int32_t var_280h;
    int32_t var_27ch;
    int32_t var_278h;
    int32_t var_274h;
    int32_t var_270h;
    int32_t var_26ch;
    int32_t var_268h;
    int32_t var_264h;
    int32_t var_260h;
    int32_t var_25ch;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ch;
    int32_t var_248h;
    int32_t var_244h;
    int32_t var_240h;
    int32_t var_23ch;
    int32_t var_22ch;
    int32_t var_228h;
    char * var_224h;
    int32_t var_220h;
    int32_t var_21ch;
    int32_t var_218h;
    int32_t var_214h;
    int32_t var_210h;
    int32_t var_20ch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    real(kind=8)[4] tsymkpt;
    real(kind=8) tmp;
    real(kind=8)[4] symkpt;
    real(kind=8) shift;
    integer(kind=4) ikpt;
    real(kind=8)[4] dkpt;
    integer(kind=4) istar;
    integer(kind=4) isym;
    integer(kind=4) itim;
    integer(kind=4) ubound.0;
    integer(kind=4) ubound.2;
    real(kind=8)[4][5] * kptstar;
    integer(kind=4) new;
    integer(kind=4) nkpt_tot;
    integer(kind=4) ubound.4;
    integer(kind=4)[5] * nstar;
    integer(kind=4) ubound.6;
    real(kind=8)[4][4][4] * rsymrel;
    integer(kind=4) ubound.8;
    real(kind=8) timsign;
    integer(kind=4) ubound.10;
    real(kind=8)[4][5] kpt;
    integer(kind=4) nkpt;
    integer(kind=4) nsym;
    integer(kind=4)[4][4][4] symrel;
    real(kind=8)[4] wtk;
    char * var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_sp_1ch;
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_sp_2ch;
    /* void getwtk(real(kind=8)[4][5] kpt,integer(kind=4) nkpt,integer(kind=4) nsym,integer(kind=4)[4][4][4] symrel,real(kind=8)[4] wtk); */
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x2c)) = eax;
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x2c));
    eax <<= 3;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x50)) = eax;
    edx = *((ebp - 0x50));
    eax = *((ebp - 0x50));
    eax += eax;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x260)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x25c)) = ebx;
    eax = *((ebp - 0x260));
    edx = *((ebp - 0x25c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x268)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x264)) = ebx;
    eax = *((ebp - 0x268));
    edx = *((ebp - 0x264));
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x270)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x26c)) = ebx;
    eax = *((ebp - 0x270));
    edx = *((ebp - 0x26c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x278)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x274)) = ebx;
    eax = *((ebp - 0x278));
    edx = *((ebp - 0x274));
    eax = *((ebp + 0xc));
    eax = *(eax);
    edx = eax + eax;
    eax = *((ebp + 0x10));
    eax = *(eax);
    eax *= edx;
    *((ebp - 0x4c)) = eax;
    edx = *((ebp - 0x4c));
    eax = *((ebp - 0x4c));
    eax += eax;
    edx = eax + edx;
    eax = 0;
    ecx = eax;
    __asm ("cmovns ecx, edx");
    eax = ecx;
    edx = 0;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x280)) = ebx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x27c)) = ebx;
    eax = *((ebp - 0x280));
    edx = *((ebp - 0x27c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x288)) = ebx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x284)) = ebx;
    eax = *((ebp - 0x288));
    edx = *((ebp - 0x284));
    eax = ecx*8;
    if (eax < 0) {
        *(esp) = "Attempt to allocate a negative amount of memory.";
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    *((ebp - 0x48)) = eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x3c));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    eax = ecx;
    edx = 0;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x290)) = ebx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x28c)) = ebx;
    eax = *((ebp - 0x290));
    edx = *((ebp - 0x28c));
    __asm ("shld edx, eax, 5");
    eax <<= 5;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x298)) = ebx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x294)) = ebx;
    eax = *((ebp - 0x298));
    edx = *((ebp - 0x294));
    eax = ecx*4;
    if (eax < 0) {
        *(esp) = "Attempt to allocate a negative amount of memory.";
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    *((ebp - 0x38)) = eax;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x34)) = eax;
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x34));
    eax <<= 3;
    eax += edx;
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    eax = ecx;
    edx = 0;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x2a0)) = ebx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x29c)) = ebx;
    eax = *((ebp - 0x2a0));
    edx = *((ebp - 0x29c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0x2a8)) = ebx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0x2a4)) = ebx;
    eax = *((ebp - 0x2a8));
    edx = *((ebp - 0x2a4));
    eax = ecx*8;
    if (eax < 0) {
        *(esp) = "Attempt to allocate a negative amount of memory.";
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    *((ebp - 0x30)) = eax;
    eax = *((ebp + 0x10));
    edi = *(eax);
    *((ebp - 0x58)) = 1;
    if (*((ebp - 0x58)) > edi) {
        goto label_7;
    }
    goto label_8;
label_1:
label_8:
    ecx = *((ebp - 0x58));
    edx = *((ebp - 0x58));
    eax = ecx;
    eax <<= 3;
    eax += ecx;
    eax -= 0xd;
    *((ebp - 0x250)) = eax;
    eax = edx;
    eax <<= 3;
    eax += edx;
    eax -= 0xd;
    *((ebp - 0x254)) = eax;
    edx = 1;
label_0:
    if (edx > 3) {
        goto label_9;
    }
    eax = edx;
    eax += eax;
    eax += edx;
    ecx = *((ebp - 0x250));
    ecx += eax;
    *((ebp - 0x248)) = ecx;
    eax = edx;
    eax += eax;
    eax += edx;
    ebx = *((ebp - 0x254));
    ebx += eax;
    *((ebp - 0x24c)) = ebx;
    ebx = 1;
    do {
        if (ebx > 3) {
            goto label_10;
        }
        esi = *((ebp - 0x24c));
        esi = ebx + esi;
        ecx = *((ebp - 0x248));
        ecx = ebx + ecx;
        eax = *((ebp + 0x14));
        eax = *((eax + ecx*4));
        *((ebp - 0x23c)) = eax;
        *(fp_stack--) = *((ebp - 0x23c));
        eax = *((ebp - 0x30));
        *((eax + esi*8)) = fp_stack[0];
        fp_stack--;
        ebx++;
    } while (1);
label_10:
    edx++;
    goto label_0;
label_9:
    al = (*((ebp - 0x58)) == edi) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x58))++;
    if (eax == 0) {
        goto label_1;
    }
label_7:
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x244)) = eax;
    *((ebp - 0x7c)) = 1;
    eax = *((ebp - 0x7c));
    if (eax > *((ebp - 0x244))) {
        goto label_11;
    }
    goto label_12;
label_6:
label_12:
    *((ebp - 0x224)) = "getwtk.F90";
    *((ebp - 0x220)) = 0x4a;
    *((ebp - 0x22c)) = 0x80;
    *((ebp - 0x228)) = 6;
    eax = ebp - 0x22c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = " getwtk : ikpt = ";
    eax = ebp - 0x22c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x7c;
    *((esp + 4)) = eax;
    eax = ebp - 0x22c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x22c;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp - 0x7c));
    edx = eax - 1;
    eax = *((ebp - 0x38));
    *((eax + edx*4)) = 0;
    esi = *((ebp - 0x4c));
    edx = 1;
label_2:
    if (edx > esi) {
        goto label_13;
    }
    eax = edx;
    eax += eax;
    eax += edx;
    edi = eax - 4;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_14;
        }
        ebx = eax + edi;
        ecx = *((ebp - 0x48));
        *(fp_stack--) = 0.0;
        *((ecx + ebx*8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_14:
    edx++;
    goto label_2;
label_13:
    eax = *((ebp + 0x10));
    edi = *(eax);
    *((ebp - 0x58)) = 1;
    if (*((ebp - 0x58)) > edi) {
        goto label_15;
    }
    goto label_16;
label_5:
label_16:
    eax = *((ebp - 0x58));
    *((ebp - 0x224)) = 0x21a;
    *((ebp - 0x21c)) = 1;
    *((ebp - 0x218)) = 3;
    *((ebp - 0x220)) = 1;
    *((ebp - 0x210)) = 1;
    *((ebp - 0x20c)) = 3;
    *((ebp - 0x214)) = 3;
    edx = eax - 1;
    eax = edx;
    eax <<= 3;
    eax += edx;
    eax <<= 3;
    eax += *((ebp - 0x30));
    *((ebp - 0x22c)) = eax;
    *((ebp - 0x228)) = 0xfffffff3;
    eax = ebp - 0x22c;
    *(esp) = eax;
    eax = gfortran_internal_pack ();
    esi = eax;
    eax = *((ebp - 0x7c));
    *((ebp - 0xd0)) = 0x219;
    *((ebp - 0xc8)) = 1;
    *((ebp - 0xc4)) = 3;
    *((ebp - 0xcc)) = 1;
    edx = eax - 1;
    eax = edx;
    eax += eax;
    eax += edx;
    eax <<= 3;
    eax += *((ebp + 8));
    *((ebp - 0xd8)) = eax;
    *((ebp - 0xd4)) = 0xfffffffc;
    eax = ebp - 0xd8;
    *(esp) = eax;
    eax = gfortran_internal_pack ();
    ebx = eax;
    *((esp + 0x2c)) = 1;
    *((esp + 0x28)) = 0x8072508;
    eax = ebp - 0xa0;
    *((esp + 0x24)) = eax;
    *((esp + 0x20)) = 0x8072510;
    *((esp + 0x1c)) = 0x8072508;
    *((esp + 0x18)) = ebx;
    *((esp + 0x14)) = 0x8072518;
    *((esp + 0x10)) = esi;
    *((esp + 0xc)) = 0x8072520;
    *((esp + 8)) = 0x8072518;
    *((esp + 4)) = 0x8072518;
    *(esp) = 0x8072528;
    dgemv_ ();
    eax = *((ebp - 0x22c));
    edx = *((ebp - 0x22c));
    eax = esi;
    if (edx != eax) {
        *((esp + 4)) = esi;
        eax = ebp - 0x22c;
        *(esp) = eax;
        gfortran_internal_unpack ();
        eax = esi;
        if (eax == 0) {
            goto label_17;
        }
        free (eax);
    }
label_17:
    eax = *((ebp - 0xd8));
    edx = *((ebp - 0xd8));
    eax = ebx;
    if (edx != eax) {
        *((esp + 4)) = ebx;
        eax = ebp - 0xd8;
        *(esp) = eax;
        gfortran_internal_unpack ();
        eax = ebx;
        if (eax == 0) {
            goto label_18;
        }
        free (eax);
    }
label_18:
    *((ebp - 0x54)) = 0;
    if (*((ebp - 0x54)) > 1) {
        goto label_19;
    }
    goto label_20;
label_4:
label_20:
    *(fp_stack--) = *((ebp - 0x54));
    *(fp_stack--) = *(0x8072530);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x28));
    eax = 1;
    do {
        if (eax > 3) {
            goto label_21;
        }
        edx = eax - 1;
        ecx = eax - 1;
        *(fp_stack--) = *((ebp + ecx*8 - 0xa0));
        fp_stack[0] *= fp_stack[1];
        *((ebp + edx*8 - 0xc0)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_21:
    fp_stack++;
    eax = ebp - 0x88;
    *((esp + 8)) = eax;
    eax = ebp - 0xa8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc0;
    *(esp) = eax;
    canon9_ ();
    *(fp_stack--) = *((ebp - 0xa8));
    *((ebp - 0xc0)) = fp_stack[0];
    fp_stack--;
    eax = ebp - 0x88;
    *((esp + 8)) = eax;
    eax = ebp - 0xa8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc0;
    eax += 8;
    *(esp) = eax;
    canon9_ ();
    *(fp_stack--) = *((ebp - 0xa8));
    *((ebp - 0xb8)) = fp_stack[0];
    fp_stack--;
    eax = ebp - 0x88;
    *((esp + 8)) = eax;
    eax = ebp - 0xa8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc0;
    eax += 0x10;
    *(esp) = eax;
    canon9_ ();
    *(fp_stack--) = *((ebp - 0xa8));
    *((ebp - 0xb0)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x44)) = 1;
    eax = *((ebp - 0x7c));
    edx = eax - 1;
    eax = *((ebp - 0x38));
    ecx = *((eax + edx*4));
    *((ebp - 0x5c)) = 1;
    if (*((ebp - 0x5c)) > ecx) {
        goto label_22;
    }
    goto label_23;
label_3:
label_23:
    edx = *((ebp - 0x5c));
    eax = *((ebp - 0x5c));
    eax += eax;
    eax += edx;
    eax -= 4;
    *((ebp - 0x240)) = eax;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_24;
        }
        esi = eax - 1;
        edx = eax - 1;
        *(fp_stack--) = *((ebp + edx*8 - 0xc0));
        ebx = *((ebp - 0x240));
        ebx = eax + ebx;
        edx = *((ebp - 0x48));
        *(fp_stack--) = *((edx + ebx*8));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = abs(fp_stack[0]);
        *((ebp + esi*8 - 0x78)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_24:
    *(fp_stack--) = 0.0;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_25;
        }
        edx = eax - 1;
        *(fp_stack--) = *((ebp + edx*8 - 0x78));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax++;
    } while (1);
label_25:
    *(fp_stack--) = *(0x8072538);
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0x44)) = 0;
        goto label_22;
    }
    al = (*((ebp - 0x5c)) == ecx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x5c))++;
    if (eax == 0) {
        goto label_3;
    }
label_22:
    if (*((ebp - 0x44)) != 1) {
        goto label_26;
    }
    eax = *((ebp - 0x7c));
    edx = eax - 1;
    eax = *((ebp - 0x7c));
    ecx = eax - 1;
    eax = *((ebp - 0x38));
    eax = *((eax + ecx*4));
    ecx = eax + 1;
    eax = *((ebp - 0x38));
    *((eax + edx*4)) = ecx;
    eax = *((ebp - 0x7c));
    edx = eax - 1;
    eax = *((ebp - 0x38));
    edx = *((eax + edx*4));
    eax = *((eax + edx*4));
    eax += eax;
    eax += edx;
    ebx = eax - 4;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_26;
        }
        ecx = eax + ebx;
        edx = eax - 1;
        *(fp_stack--) = *((ebp + edx*8 - 0xc0));
        edx = *((ebp - 0x48));
        *((edx + ecx*8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_26:
    al = (*((ebp - 0x54)) == 1) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x54))++;
    if (eax == 0) {
        goto label_4;
    }
label_19:
    al = (*((ebp - 0x58)) == edi) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x58))++;
    if (eax == 0) {
        goto label_5;
    }
label_15:
    eax = *((ebp - 0x7c));
    al = (eax == *((ebp - 0x244))) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x7c));
    edx++;
    *((ebp - 0x7c)) = edx;
    if (eax == 0) {
        goto label_6;
    }
label_11:
    edx = 0;
    esi = *((ebp - 0x3c));
    eax = 1;
    do {
        if (eax > esi) {
            goto label_27;
        }
        ebx = eax - 1;
        ecx = *((ebp - 0x38));
        ecx = *((ecx + ebx*4));
        edx += ecx;
        eax++;
    } while (1);
label_27:
    *((ebp - 0x40)) = edx;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x7c)) = 1;
    edx = *((ebp - 0x7c));
    if (edx > eax) {
        goto label_28;
    }
    while (edx == 0) {
        edx = *((ebp - 0x7c));
        ecx = edx - 1;
        edx = *((ebp - 0x7c));
        ebx = edx - 1;
        edx = *((ebp - 0x38));
        edx = *((edx + ebx*4));
        *((ebp - 0x23c)) = edx;
        *(fp_stack--) = *((ebp - 0x23c));
        *(fp_stack--) = *((ebp - 0x40));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        edx = *((ebp + 0x18));
        *((edx + ecx*8)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x7c));
        dl = (edx == eax) ? 1 : 0;
        edx = (int32_t) dl;
        ecx = *((ebp - 0x7c));
        ecx++;
        *((ebp - 0x7c)) = ecx;
    }
label_28:
    eax = *((ebp - 0x30));
    if (eax != 0) {
        free (eax);
    }
    eax = *((ebp - 0x38));
    if (eax != 0) {
        free (eax);
    }
    eax = *((ebp - 0x48));
    if (eax != 0) {
        free (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8070748 */
#include <stdint.h>
 
uint32_t dbg_leave_myproc (void) {
    int32_t var_104h_2;
    int32_t var_100h_2;
    char * var_fch_2;
    int32_t var_f8h_2;
    logical(kind=4) testopen;
    int32_t var_104h;
    int32_t var_100h;
    char * var_fch;
    int32_t var_f8h;
    int32_t var_e4h;
    int32_t var_ch;
    /* void leave_myproc(va_args ...); */
    *((ebp - 0xfc)) = "leave_myproc.F90";
    *((ebp - 0xf8)) = 0x38;
    eax = ebp - 0xc;
    *((ebp - 0xe4)) = eax;
    *((ebp - 0x104)) = 0x100;
    *((ebp - 0x100)) = 7;
    eax = ebp - 0x104;
    *(esp) = eax;
    gfortran_st_inquire ();
    eax = *((ebp - 0xc));
    if (eax != 0) {
        *((ebp - 0xfc)) = "leave_myproc.F90";
        *((ebp - 0xf8)) = 0x39;
        *((ebp - 0x104)) = 0;
        *((ebp - 0x100)) = 7;
        eax = ebp - 0x104;
        *(esp) = eax;
        gfortran_st_close ();
    }
    *(esp) = 0x80743e0;
    gfortran_exit_i4 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b80 */
#include <stdint.h>
 
void gfortran_st_inquire (void) {
    gfortran_st_inquire ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c70 */
#include <stdint.h>
 
void gfortran_st_close (void) {
    gfortran_st_close ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b20 */
#include <stdint.h>
 
void gfortran_exit_i4 (void) {
    gfortran_exit_i4 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d90 */
#include <stdint.h>
 
void gfortran_store_exe_path (void) {
    gfortran_store_exe_path ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c00 */
#include <stdint.h>
 
void gfortran_set_args (void) {
    gfortran_set_args ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048e54 */
#include <stdint.h>
 
uint32_t dbg_optic (void) {
    int32_t var_1484h;
    int32_t var_1480h;
    int32_t var_147ch;
    int32_t var_1474h;
    int32_t var_1470h;
    int32_t var_146ch;
    int32_t var_1460h;
    int32_t var_145ch;
    int32_t var_1458h;
    int32_t var_1454h;
    int32_t var_1450h;
    int32_t var_144ch;
    int32_t var_1448h;
    int32_t var_1444h;
    int32_t var_1440h;
    int32_t var_143ch;
    int32_t var_1438h;
    int32_t var_1434h;
    int32_t var_1430h;
    int32_t var_142ch;
    int32_t var_1428h;
    int32_t var_1424h;
    int32_t var_1420h;
    int32_t var_141ch;
    int32_t var_1418h;
    int32_t var_1414h;
    int32_t var_1410h;
    int32_t var_140ch;
    int32_t var_1408h;
    int32_t var_1404h;
    int32_t var_1400h;
    int32_t var_13fch;
    int32_t var_13f8h;
    int32_t var_13f4h;
    int32_t var_13f0h;
    int32_t var_13ech;
    int32_t var_13e8h;
    int32_t var_13e4h;
    int32_t var_13e0h;
    int32_t var_13dch;
    int32_t var_13d8h;
    int32_t var_13d4h;
    int32_t var_13d0h;
    int32_t var_13cch;
    int32_t var_13c8h;
    int32_t var_13c4h;
    int32_t var_13c0h;
    int32_t var_13bch;
    int32_t var_13b8h;
    int32_t var_13b4h;
    int32_t var_13b0h;
    int32_t var_13ach;
    int32_t var_13a8h;
    int32_t var_13a4h;
    int32_t var_13a0h;
    int32_t var_139ch;
    int32_t var_1398h;
    int32_t var_1394h;
    int32_t var_1390h;
    int32_t var_138ch;
    int32_t var_1388h;
    int32_t var_1384h;
    int32_t var_1380h;
    int32_t var_137ch;
    int32_t var_1378h;
    int32_t var_1374h;
    int32_t var_1370h;
    int32_t var_136ch;
    int32_t var_1368h;
    int32_t var_1364h;
    int32_t var_1360h;
    int32_t var_135ch;
    int32_t var_1358h;
    int32_t var_1354h;
    int32_t var_1350h;
    int32_t var_134eh;
    int32_t var_134ch;
    int32_t var_1340h;
    int32_t var_133ch;
    int32_t var_1338h;
    int32_t var_1334h;
    int32_t var_1330h;
    int32_t var_132ch;
    int32_t var_1328h;
    int32_t var_1324h;
    int32_t var_1320h;
    int32_t var_131ch;
    char * var_1310h;
    int32_t var_130ch;
    int32_t var_1308h;
    int32_t var_1304h;
    int32_t var_11ech;
    int32_t var_11e8h;
    int32_t var_11e4h;
    int32_t var_11e0h;
    int32_t var_11dch;
    int32_t var_11d8h;
    int32_t var_11d4h;
    int32_t var_11d0h;
    int32_t var_11cch;
    int32_t var_11c8h;
    int32_t var_11c4h;
    int32_t var_11c0h;
    int32_t var_11bch;
    int32_t var_11a8h;
    int32_t var_11a4h;
    int32_t var_11a0h;
    int32_t var_119ch;
    int32_t var_1198h;
    int32_t var_1194h;
    int32_t var_1190h;
    int32_t var_118ch;
    int32_t var_1188h;
    int32_t var_1184h;
    int32_t var_1180h;
    int32_t var_117ch;
    int32_t var_1178h;
    int32_t var_1174h;
    int32_t var_1170h;
    int32_t var_116ch;
    int32_t var_1168h;
    int32_t var_1164h;
    int32_t var_1160h;
    int32_t var_115ch;
    int32_t var_1158h;
    int32_t var_1154h;
    int32_t var_1150h;
    int32_t var_114ch;
    int32_t var_1148h;
    int32_t var_1144h;
    int32_t var_1140h;
    int32_t var_113ch;
    int32_t var_1138h;
    int32_t var_1134h;
    int32_t var_1130h;
    int32_t var_1124h;
    int32_t var_1120h;
    int32_t var_111ch;
    int32_t var_1118h;
    int32_t var_1114h;
    int32_t var_1110h;
    int32_t var_110ch;
    int32_t var_1108h;
    int32_t var_1104h;
    int32_t var_1100h;
    int32_t var_10fch;
    int32_t var_10f8h;
    int32_t var_10f4h;
    int32_t var_10f0h;
    int32_t var_10ech;
    int32_t var_10e8h;
    int32_t var_10e4h;
    int32_t var_10e0h;
    int32_t var_10dch;
    int32_t var_10d8h;
    int32_t var_10d4h;
    int32_t var_10d0h;
    int32_t var_10c0h;
    int32_t var_10bch;
    real(kind=8)[5] wtk;
    int32_t var_10b4h;
    int32_t var_10b0h;
    int32_t var_10ach;
    int32_t var_10a8h;
    int32_t var_10a4h;
    wffile_type wff3;
    wffile_type wff2;
    wffile_type wff1;
    wffile_type wff0;
    real(kind=8) ucvol;
    real(kind=8) tsmear;
    real(kind=8) tol;
    void * s;
    integer(kind=4) tim_rwwf;
    integer(kind=4)[5][5][5] symrel;
    int32_t var_c60h;
    int32_t var_c5ch;
    int32_t var_c58h;
    int32_t var_c54h;
    int32_t var_c50h;
    int32_t var_c4ch;
    int32_t var_c48h;
    int32_t var_c44h;
    int32_t var_c40h;
    int32_t var_c3ch;
    int32_t var_c38h;
    integer(kind=4)[5][5][5] symrec;
    int32_t var_c30h;
    int32_t var_c2ch;
    int32_t var_c28h;
    int32_t var_c24h;
    int32_t var_c20h;
    int32_t var_c1ch;
    int32_t var_c18h;
    int32_t var_c14h;
    int32_t var_c10h;
    int32_t var_c0ch;
    int32_t var_c08h;
    real(kind=8)[5][5][5] symcart;
    int32_t var_c00h;
    int32_t var_bfch;
    int32_t var_bf8h;
    int32_t var_bf4h;
    int32_t var_bf0h;
    int32_t var_bech;
    int32_t var_be8h;
    int32_t var_be4h;
    int32_t var_be0h;
    int32_t var_bdch;
    int32_t var_bd8h;
    integer(kind=4) spacecomm;
    real(kind=8) sc;
    int32_t var_bc4h;
    int32_t var_bc0h;
    int32_t var_bbch;
    real(kind=8)[4][4] rprimd;
    real(kind=8)[4][4] rmet;
    integer(kind=4) rdwr;
    complex(kind=8)[5][5][5][5][5][5] pmat;
    int32_t var_b20h;
    int32_t var_b1ch;
    int32_t var_b18h;
    int32_t var_b14h;
    int32_t var_b10h;
    int32_t var_b0ch;
    int32_t var_b08h;
    int32_t var_b04h;
    int32_t var_b00h;
    int32_t var_afch;
    int32_t var_af8h;
    int32_t var_af4h;
    int32_t var_af0h;
    int32_t var_aech;
    int32_t var_ae8h;
    int32_t var_ae4h;
    int32_t var_ae0h;
    int32_t var_adch;
    int32_t var_ad8h;
    int32_t var_ad4h;
    real(kind=8)[5] occ;
    int32_t var_acch;
    int32_t var_ac8h;
    int32_t var_ac4h;
    int32_t var_ac0h;
    int32_t var_abch;
    integer(kind=4) nsym;
    integer(kind=4) nsppol;
    integer(kind=4) nomega;
    integer(kind=4)[28] nlinflag;
    integer(kind=4) nlin3;
    integer(kind=4) nlin2;
    integer(kind=4) nlin1;
    integer(kind=4) nkpt;
    integer(kind=4) nband1;
    integer(kind=4)[5] nband;
    int32_t var_a28h;
    int32_t var_a24h;
    int32_t var_a20h;
    int32_t var_a1ch;
    int32_t var_a18h;
    integer(kind=4) natom;
    integer(kind=4) mnlinflag;
    integer(kind=4) mlinflag;
    integer(kind=4) me;
    integer(kind=4) mband;
    real(kind=8) maxomega;
    integer(kind=4) master;
    integer(kind=4)[10] linflag;
    integer(kind=4) lin2;
    integer(kind=4) lin1;
    real(kind=8)[5][5] kpt;
    int32_t var_9c0h;
    int32_t var_9bch;
    int32_t var_9b8h;
    int32_t var_9b4h;
    int32_t var_9b0h;
    int32_t var_9ach;
    int32_t var_9a8h;
    int32_t var_9a4h;
    integer(kind=4) isppol;
    integer(kind=4) ikpt;
    integer(kind=4) ierr;
    integer(kind=4) headform;
    hdr_type hdr;
    int32_t var_988h;
    int32_t var_97ch;
    int32_t var_978h;
    int32_t var_96ch;
    int32_t var_968h;
    int32_t var_964h;
    int32_t var_960h;
    int32_t var_95ch;
    int32_t var_914h;
    int32_t var_910h;
    int32_t var_908h;
    int32_t var_854h;
    int32_t var_850h;
    int32_t var_848h;
    int32_t var_844h;
    int32_t var_840h;
    int32_t var_83ch;
    int32_t var_838h;
    int32_t var_834h;
    int32_t var_830h;
    int32_t var_82ch;
    int32_t var_828h;
    int32_t var_75ch;
    int32_t var_758h;
    int32_t var_750h;
    int32_t var_74ch;
    int32_t var_748h;
    int32_t var_744h;
    int32_t var_740h;
    int32_t var_73ch;
    int32_t var_738h;
    int32_t var_734h;
    int32_t var_72ch;
    real(kind=8)[4][4] gprimd;
    real(kind=8)[4][4] gmet_inv;
    real(kind=8)[4][4] gmet;
    integer(kind=4) formeig;
    int32_t var_564h;
    int32_t var_464h;
    int32_t var_3e0h;
    int32_t var_35ch;
    int32_t var_2d8h;
    int32_t var_254h;
    int32_t var_1d0h;
    integer(kind=4) fform0;
    real(kind=8) fermie;
    real(kind=8)[5] eigtmp;
    int32_t var_13ch;
    int32_t var_138h;
    int32_t var_134h;
    int32_t var_130h;
    int32_t var_12ch;
    real(kind=8)[5] eigen13;
    int32_t var_124h;
    int32_t var_120h;
    int32_t var_11ch;
    int32_t var_118h;
    int32_t var_114h;
    real(kind=8)[5] eigen12;
    int32_t var_10ch;
    int32_t var_108h;
    int32_t var_104h;
    int32_t var_100h;
    int32_t var_fch;
    real(kind=8)[5] eigen11;
    int32_t var_f4h;
    int32_t var_f0h;
    int32_t var_ech;
    int32_t var_e8h;
    int32_t var_e4h;
    real(kind=8)[5] eigen0;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    real(kind=8)[5] eig0tmp;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    real(kind=8) ecut;
    real(kind=8) domega;
    real(kind=8)[5] doccde;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    real(kind=8)[5] cond_nd;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    real(kind=8)[5] cond_kg;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    void * s1;
    integer(kind=4) accesswff;
    integer(kind=4) bantot;
    integer(kind=4) bdtot0_index;
    integer(kind=4) bdtot_index;
    integer(kind=4) formeig0;
    integer(kind=4) ii;
    integer(kind=4) isym;
    integer(kind=4) nspinor;
    integer(kind=4) ntypat;
    integer(kind=4) occopt;
    char * s2;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    char * var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    /* void optic(va_args ...); */
    *((ebp - 0x70)) = 0;
    *((ebp - 0x88)) = 0;
    *((ebp - 0xa0)) = 0;
    *((ebp - 0xc8)) = 0;
    *((ebp - 0xe0)) = 0;
    *((ebp - 0xf8)) = 0;
    *((ebp - 0x110)) = 0;
    *((ebp - 0x128)) = 0;
    *((ebp - 0x140)) = 0;
    *((ebp - 0x9c4)) = 0;
    *((ebp - 0xa2c)) = 0;
    *((ebp - 0xad0)) = 0;
    *((ebp - 0xb24)) = 0;
    *((ebp - 0xc04)) = 0;
    *((ebp - 0xc34)) = 0;
    *((ebp - 0xc64)) = 0;
    *((ebp - 0x10b8)) = 0;
    *((esp + 4)) = 0x8071020;
    *(esp) = 8;
    gfortran_set_options ();
    eax = ebp - 0x58;
    memmove (eax, "OPTIC                   ", 0x18);
    *((esp + 0x10)) = 6;
    *((esp + 0xc)) = 0x18;
    *((esp + 8)) = 0x8070918;
    eax = ebp - 0x58;
    herald_ (eax, "5.3.4 optic.F90");
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x8b;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2b;
    *((esp + 4)) = " Please, give the name of the data file ...";
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x8c;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 5;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x1d0;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x8d;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1f;
    *((esp + 4)) = " The name of the data file is :";
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x1d0;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x8e;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = " Please, give the name of the output file ...";
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x8f;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 5;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x464;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x90;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x21;
    *((esp + 4)) = " The name of the output file is :";
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x464;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x91;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x4c;
    *((esp + 4)) = " Please, give the root name for the (non)linear optical data output file ... The root name of the output files is :formatted\n";
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x92;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 5;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x100;
    eax = ebp - 0x564;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x93;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x27;
    *((esp + 4)) = 0x8070a1c;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x10c0;
    edx = ebp - 0x564;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = eax;
    eax = ebp - 0x10bc;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x10bc));
    eax = *((ebp - 0x10c0));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp - 0x10bc));
    if (eax > 0) {
        eax = *((ebp - 0x10c0));
        if (eax == 0) {
            goto label_6;
        }
        free (eax);
    }
label_6:
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x96;
    eax = ebp - 0x1d0;
    *((ebp - 0x131c)) = eax;
    *((ebp - 0x1320)) = 0x84;
    *((ebp - 0x1308)) = 0x8070a43;
    *((ebp - 0x1304)) = 9;
    *((ebp - 0x1340)) = 0x900;
    *((ebp - 0x133c)) = 0xf;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0x10d4)) = 0x8070922;
    *((ebp - 0x10d0)) = 0x97;
    *((ebp - 0x10dc)) = 0;
    *((ebp - 0x10d8)) = 0xf;
    eax = ebp - 0x10dc;
    *(esp) = eax;
    gfortran_st_rewind ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x98;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 0xf;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x2d8;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x99;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 0xf;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x35c;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x9a;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 0xf;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x3e0;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x9b;
    *((ebp - 0x1310)) = 0x807092c;
    *((ebp - 0x130c)) = 3;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 0xf;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read ();
    *((esp + 8)) = 0x84;
    eax = ebp - 0x254;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_read_done ();
    *((ebp - 0x40)) = 0;
    *((ebp - 0xbd4)) = 0;
    *((ebp - 0x9f4)) = 0;
    *((ebp - 0xa08)) = 0;
    *((esp + 0x20)) = 0x84;
    *((esp + 0x1c)) = 0x8070a4c;
    eax = ebp - 0xa08;
    *((esp + 0x18)) = eax;
    eax = ebp - 0x9f4;
    *((esp + 0x14)) = eax;
    eax = ebp - 0xe48;
    *((esp + 0x10)) = eax;
    eax = ebp - 0x998;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x254;
    *((esp + 8)) = eax;
    eax = ebp - 0xbd4;
    *((esp + 4)) = eax;
    eax = ebp - 0x40;
    wffopen_ (eax);
    *((esp + 0x20)) = 0x84;
    *((esp + 0x1c)) = 0x8070a50;
    eax = ebp - 0xa08;
    *((esp + 0x18)) = eax;
    eax = ebp - 0x9f4;
    *((esp + 0x14)) = eax;
    eax = ebp - 0xf10;
    *((esp + 0x10)) = eax;
    eax = ebp - 0x998;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x2d8;
    *((esp + 8)) = eax;
    eax = ebp - 0xbd4;
    *((esp + 4)) = eax;
    eax = ebp - 0x40;
    wffopen_ (eax);
    *((esp + 0x20)) = 0x84;
    *((esp + 0x1c)) = 0x8070a54;
    eax = ebp - 0xa08;
    *((esp + 0x18)) = eax;
    eax = ebp - 0x9f4;
    *((esp + 0x14)) = eax;
    eax = ebp - 0xfd8;
    *((esp + 0x10)) = eax;
    eax = ebp - 0x998;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x35c;
    *((esp + 8)) = eax;
    eax = ebp - 0xbd4;
    *((esp + 4)) = eax;
    eax = ebp - 0x40;
    wffopen_ (eax);
    *((esp + 0x20)) = 0x84;
    *((esp + 0x1c)) = 0x8070a58;
    eax = ebp - 0xa08;
    *((esp + 0x18)) = eax;
    eax = ebp - 0x9f4;
    *((esp + 0x14)) = eax;
    eax = ebp - 0x10a0;
    *((esp + 0x10)) = eax;
    eax = ebp - 0x998;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x3e0;
    *((esp + 8)) = eax;
    eax = ebp - 0xbd4;
    *((esp + 4)) = eax;
    eax = ebp - 0x40;
    wffopen_ (eax);
    *((ebp - 0xb28)) = 1;
    eax = ebp - 0xe48;
    *((esp + 0xc)) = eax;
    eax = ebp - 0xb28;
    *((esp + 8)) = eax;
    eax = ebp - 0x990;
    *((esp + 4)) = eax;
    eax = ebp - 0x14c;
    *(esp) = eax;
    hdr_io_wfftype_ ();
    eax = *((ebp - 0x988));
    *((ebp - 0x994)) = eax;
    eax = *((ebp - 0x990));
    *((ebp - 0x3c)) = eax;
    *(fp_stack--) = *((ebp - 0x7f4));
    *((ebp - 0xb0)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x97c));
    *((ebp - 0xa14)) = eax;
    eax = *((ebp - 0x978));
    *((ebp - 0xa34)) = eax;
    eax = *((ebp - 0x96c));
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x968));
    *((ebp - 0xab4)) = eax;
    eax = *((ebp - 0x960));
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x95c));
    *((ebp - 0x1c)) = eax;
    eax = ebp - 0x990;
    esi = eax + 0x1d4;
    eax = 1;
label_0:
    if (eax > 3) {
        goto label_7;
    }
    edx = eax;
    edx += edx;
    edx += eax;
    edi = edx - 4;
    edx = eax;
    edx += edx;
    edx += eax;
    edx -= 4;
    *((ebp - 0x1460)) = edx;
    edx = 1;
    do {
        if (edx > 3) {
            goto label_8;
        }
        ecx = *((ebp - 0x1460));
        ecx = edx + ecx;
        ebx = edx + edi;
        *(fp_stack--) = *((esi + ebx*8));
        *((ebp + ecx*8 - 0xbb8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_8:
    eax++;
    goto label_0;
label_7:
    *((ebp - 0xa24)) = 0x109;
    *((ebp - 0xa1c)) = 1;
    edx = *((ebp - 0xa34));
    eax = *((ebp - 0xab4));
    eax *= edx;
    *((ebp - 0xa18)) = eax;
    *((ebp - 0xa20)) = 1;
    edx = *((ebp - 0xa34));
    eax = *((ebp - 0xab4));
    eax *= edx;
    edx = 0;
    __asm ("cmovns edx, eax");
    ecx = *((ebp - 0xa34));
    eax = *((ebp - 0xab4));
    eax *= ecx;
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    edx = *((ebp - 0xa2c));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xa2c)) = eax;
        *((ebp - 0xa28)) = 0xffffffff;
        *((ebp - 0xac8)) = 0x219;
        *((ebp - 0xac0)) = 1;
        eax = *((ebp - 0x3c));
        *((ebp - 0xabc)) = eax;
        *((ebp - 0xac4)) = 1;
        eax = 0;
        edx = eax;
        __asm ("cmovns edx, dword [ebp - 0x3c]");
        al = (*((ebp - 0x3c)) <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "nband";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 180 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_9;
    }
    eax = edx*8;
label_9:
    edx = *((ebp - 0xad0));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xad0)) = eax;
        *((ebp - 0xacc)) = 0xffffffff;
        *(fp_stack--) = *((ebp - 0x7e4));
        *((ebp - 0x148)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x738));
        esi = *((ebp - 0x738));
        edi = *((ebp - 0x734));
        eax = *((ebp - 0x3c));
        *((ebp - 0x1458)) = eax;
        eax = *((ebp - 0xad0));
        ebx = *((ebp - 0xad0));
        edx = *((ebp - 0xacc));
        *((ebp - 0x145c)) = edx;
        ecx = *((ebp - 0x72c));
        *((ebp - 0x1450)) = ecx;
        eax = *((ebp - 0xac4));
        *((ebp - 0x1454)) = eax;
        edx = 1;
    } else {
        *((esp + 8)) = 0x8070b0e;
        *((esp + 4)) = "Attempting to allocate already allocated array '%s';
        *(esp) = "At line 180 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    do {
        if (edx > *((ebp - 0x1458))) {
            goto label_10;
        }
        eax = *((ebp - 0x1454));
        eax *= edx;
        ecx = *((ebp - 0x145c));
        ecx = eax + ecx;
        eax = *((ebp - 0x1450));
        eax *= edx;
        eax += edi;
        *(fp_stack--) = *((esi + eax*8));
        *((ebx + ecx*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_10:
    eax = *((ebp - 0x914));
    esi = *((ebp - 0x914));
    edi = *((ebp - 0x910));
    edx = *((ebp - 0xa34));
    eax = *((ebp - 0xab4));
    ecx = edx;
    ecx *= eax;
    *((ebp - 0x1448)) = ecx;
    eax = *((ebp - 0xa2c));
    ebx = *((ebp - 0xa2c));
    eax = *((ebp - 0xa28));
    *((ebp - 0x144c)) = eax;
    edx = *((ebp - 0x908));
    *((ebp - 0x1440)) = edx;
    ecx = *((ebp - 0xa20));
    *((ebp - 0x1444)) = ecx;
    edx = 1;
    do {
        if (edx > *((ebp - 0x1448))) {
            goto label_11;
        }
        eax = *((ebp - 0x1444));
        eax *= edx;
        ecx = *((ebp - 0x144c));
        ecx = eax + ecx;
        eax = *((ebp - 0x1440));
        eax *= edx;
        eax += edi;
        eax = *((esi + eax*4));
        *((ebx + ecx*4)) = eax;
        edx++;
    } while (1);
label_11:
    eax = *((ebp - 0x964));
    *((ebp - 0xab8)) = eax;
    *((ebp - 0xc5c)) = 0x10b;
    *((ebp - 0xc54)) = 1;
    *((ebp - 0xc50)) = 3;
    *((ebp - 0xc58)) = 1;
    *((ebp - 0xc48)) = 1;
    *((ebp - 0xc44)) = 3;
    *((ebp - 0xc4c)) = 3;
    *((ebp - 0xc3c)) = 1;
    eax = *((ebp - 0xab8));
    *((ebp - 0xc38)) = eax;
    *((ebp - 0xc40)) = 9;
    eax = *((ebp - 0xab8));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    eax <<= 3;
    edx = eax + edx;
    eax = *((ebp - 0xab8));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    edx = *((ebp - 0xc64));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xc64)) = eax;
        *((ebp - 0xc60)) = 0xfffffff3;
        *((ebp - 0xc2c)) = 0x10b;
        *((ebp - 0xc24)) = 1;
        *((ebp - 0xc20)) = 3;
        *((ebp - 0xc28)) = 1;
        *((ebp - 0xc18)) = 1;
        *((ebp - 0xc14)) = 3;
        *((ebp - 0xc1c)) = 3;
        *((ebp - 0xc0c)) = 1;
        eax = *((ebp - 0xab8));
        *((ebp - 0xc08)) = eax;
        *((ebp - 0xc10)) = 9;
        eax = *((ebp - 0xab8));
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = edx;
        eax <<= 3;
        edx = eax + edx;
        eax = *((ebp - 0xab8));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "symrel";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 186 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_12;
    }
    eax = edx*4;
label_12:
    edx = *((ebp - 0xc34));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xc34)) = eax;
        *((ebp - 0xc30)) = 0xfffffff3;
        eax = *((ebp - 0x854));
        *((ebp - 0x1410)) = eax;
        ebx = *((ebp - 0x850));
        *((ebp - 0x1414)) = ebx;
        esi = *((ebp - 0x844));
        *((ebp - 0x1418)) = esi;
        edi = *((ebp - 0x840));
        *((ebp - 0x141c)) = edi;
        eax = *((ebp - 0x838));
        *((ebp - 0x1420)) = eax;
        edx = *((ebp - 0x834));
        *((ebp - 0x1424)) = edx;
        ebx = *((ebp - 0x82c));
        ecx = *((ebp - 0x828));
        *((ebp - 0x1428)) = ecx;
        eax = *((ebp - 0xc64));
        *((ebp - 0x142c)) = eax;
        esi = *((ebp - 0xc60));
        *((ebp - 0x1430)) = esi;
        ecx = *((ebp - 0xc54));
        edx = *((ebp - 0xc48));
        eax = *((ebp - 0xc3c));
        edi = ecx;
        edi -= *((ebp - 0x1418));
        *((ebp - 0x1434)) = edi;
        ecx = edx;
        ecx -= *((ebp - 0x1420));
        *((ebp - 0x1438)) = ecx;
        esi = eax;
        esi -= ebx;
        *((ebp - 0x143c)) = esi;
        edi = *((ebp - 0x848));
        *((ebp - 0x1408)) = edi;
        eax = *((ebp - 0xc58));
        *((ebp - 0x140c)) = eax;
        esi = ebx;
    } else {
        *((esp + 8)) = "symrec";
        *((esp + 4)) = "Attempting to allocate already allocated array '%s';
        *(esp) = "At line 186 of file optic.F90";
        gfortran_runtime_error_at ();
    }
label_2:
    if (esi > *((ebp - 0x1428))) {
        goto label_13;
    }
    eax = *((ebp - 0x830));
    eax *= esi;
    edx = *((ebp - 0x1414));
    edx += eax;
    *((ebp - 0x1400)) = edx;
    edx = *((ebp - 0x143c));
    edx = esi + edx;
    eax = *((ebp - 0xc40));
    eax *= edx;
    ecx = *((ebp - 0x1430));
    ecx += eax;
    *((ebp - 0x1404)) = ecx;
    ebx = *((ebp - 0x1420));
label_1:
    if (ebx > *((ebp - 0x1424))) {
        goto label_14;
    }
    eax = *((ebp - 0x83c));
    eax *= ebx;
    edi = *((ebp - 0x1400));
    edi += eax;
    *((ebp - 0x13fc)) = edi;
    edx = *((ebp - 0x1438));
    edx = ebx + edx;
    eax = *((ebp - 0xc4c));
    eax *= edx;
    edx = *((ebp - 0x1404));
    edx += eax;
    *((ebp - 0x1484)) = edx;
    edx = *((ebp - 0x1418));
    do {
        if (edx > *((ebp - 0x141c))) {
            goto label_15;
        }
        eax = *((ebp - 0x1434));
        eax = edx + eax;
        eax *= *((ebp - 0x140c));
        ecx = *((ebp - 0x1484));
        ecx += eax;
        *((ebp - 0x1480)) = ecx;
        eax = *((ebp - 0x1408));
        eax *= edx;
        eax += *((ebp - 0x13fc));
        edi = *((ebp - 0x1410));
        eax = *((edi + eax*4));
        *((ebp - 0x147c)) = eax;
        edi = *((ebp - 0x147c));
        eax = *((ebp - 0x1480));
        ecx = *((ebp - 0x142c));
        *((ecx + eax*4)) = edi;
        edx++;
    } while (1);
label_15:
    ebx++;
    goto label_1;
label_14:
    esi++;
    goto label_2;
label_13:
    eax = *((ebp - 0xab8));
    *((ebp - 0x13f8)) = eax;
    *((ebp - 0x28)) = 1;
    edx = *((ebp - 0x13f8));
    if (*((ebp - 0x28)) > edx) {
        goto label_16;
    }
    while (eax == 0) {
        edi = *((ebp - 0xc54));
        edx = *((ebp - 0xc50));
        ecx = *((ebp - 0xc48));
        *((ebp - 0x13e4)) = ecx;
        ebx = *((ebp - 0xc44));
        esi = *((ebp - 0x28));
        *((ebp - 0x13e8)) = esi;
        *((ebp - 0x11e4)) = 0x10a;
        esi = *((ebp - 0xc58));
        *((ebp - 0x11dc)) = 1;
        eax = 1;
        eax -= edi;
        eax += edx;
        *((ebp - 0x11d8)) = eax;
        *((ebp - 0x11e0)) = esi;
        ecx = *((ebp - 0xc4c));
        *((ebp - 0x11d0)) = 1;
        eax = 1;
        eax -= *((ebp - 0x13e4));
        eax += ebx;
        *((ebp - 0x11cc)) = eax;
        *((ebp - 0x11d4)) = ecx;
        eax = *((ebp - 0xc64));
        ebx = *((ebp - 0xc64));
        eax = *((ebp - 0xc54));
        edx = edi;
        edx -= eax;
        eax = edx;
        edx *= esi;
        eax = *((ebp - 0xc48));
        esi = *((ebp - 0x13e4));
        esi -= eax;
        eax = esi;
        eax *= ecx;
        edx += eax;
        eax = *((ebp - 0xc3c));
        ecx = *((ebp - 0x13e8));
        ecx -= eax;
        eax = *((ebp - 0xc40));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 2;
        eax = ebx + eax;
        *((ebp - 0x11ec)) = eax;
        *((ebp - 0x11e8)) = 0;
        eax = ebp - 0x11ec;
        *(esp) = eax;
        eax = gfortran_internal_pack ();
        esi = eax;
        edi = *((ebp - 0xc24));
        *((ebp - 0x13ec)) = edi;
        edx = *((ebp - 0xc20));
        eax = *((ebp - 0xc18));
        *((ebp - 0x13f0)) = eax;
        ebx = *((ebp - 0xc14));
        ecx = *((ebp - 0x28));
        *((ebp - 0x13f4)) = ecx;
        *((ebp - 0x1338)) = 0x10a;
        edi = *((ebp - 0xc28));
        *((ebp - 0x1330)) = 1;
        eax = 1;
        eax -= *((ebp - 0x13ec));
        eax += edx;
        *((ebp - 0x132c)) = eax;
        *((ebp - 0x1334)) = edi;
        ecx = *((ebp - 0xc1c));
        *((ebp - 0x1324)) = 1;
        eax = 1;
        eax -= *((ebp - 0x13f0));
        eax += ebx;
        *((ebp - 0x1320)) = eax;
        *((ebp - 0x1328)) = ecx;
        eax = *((ebp - 0xc34));
        ebx = *((ebp - 0xc34));
        eax = *((ebp - 0xc24));
        edx = *((ebp - 0x13ec));
        edx -= eax;
        eax = edx;
        edx *= edi;
        eax = *((ebp - 0xc18));
        edi = *((ebp - 0x13f0));
        edi -= eax;
        eax = edi;
        eax *= ecx;
        edx += eax;
        eax = *((ebp - 0xc0c));
        ecx = *((ebp - 0x13f4));
        ecx -= eax;
        eax = *((ebp - 0xc10));
        eax *= ecx;
        eax = edx + eax;
        eax <<= 2;
        eax = ebx + eax;
        *((ebp - 0x1340)) = eax;
        *((ebp - 0x133c)) = 0;
        eax = ebp - 0x1340;
        *(esp) = eax;
        eax = gfortran_internal_pack ();
        ebx = eax;
        *((esp + 4)) = ebx;
        *(esp) = esi;
        mati3inv_ ();
        eax = *((ebp - 0x11ec));
        edx = *((ebp - 0x11ec));
        eax = esi;
        if (edx != eax) {
            eax = esi;
            if (eax == 0) {
                goto label_17;
            }
            free (eax);
        }
label_17:
        eax = *((ebp - 0x1340));
        edx = *((ebp - 0x1340));
        eax = ebx;
        if (edx != eax) {
            *((esp + 4)) = ebx;
            eax = ebp - 0x1340;
            *(esp) = eax;
            gfortran_internal_unpack ();
            eax = ebx;
            if (eax == 0) {
                goto label_18;
            }
            free (eax);
        }
label_18:
        eax = *((ebp - 0x13f8));
        al = (*((ebp - 0x28)) == eax) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x28))++;
    }
label_16:
    *((ebp - 0x9bc)) = 0x21a;
    *((ebp - 0x9b4)) = 1;
    *((ebp - 0x9b0)) = 3;
    *((ebp - 0x9b8)) = 1;
    *((ebp - 0x9a8)) = 1;
    eax = *((ebp - 0xa34));
    *((ebp - 0x9a4)) = eax;
    *((ebp - 0x9ac)) = 3;
    eax = *((ebp - 0xa34));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp - 0xa34));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    edx = *((ebp - 0x9c4));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x9c4)) = eax;
        *((ebp - 0x9c0)) = 0xfffffffc;
        eax = *((ebp - 0x75c));
        *((ebp - 0x13c0)) = eax;
        edx = *((ebp - 0x758));
        *((ebp - 0x13c4)) = edx;
        ecx = *((ebp - 0x74c));
        *((ebp - 0x13c8)) = ecx;
        ebx = *((ebp - 0x748));
        *((ebp - 0x13cc)) = ebx;
        ecx = *((ebp - 0x740));
        esi = *((ebp - 0x73c));
        *((ebp - 0x13d0)) = esi;
        eax = *((ebp - 0x9c4));
        *((ebp - 0x13d4)) = eax;
        edi = *((ebp - 0x9c0));
        *((ebp - 0x13d8)) = edi;
        edx = *((ebp - 0x9b4));
        eax = *((ebp - 0x9a8));
        ebx = edx;
        ebx -= *((ebp - 0x13c8));
        *((ebp - 0x13dc)) = ebx;
        esi = eax;
        esi -= ecx;
        *((ebp - 0x13e0)) = esi;
        edi = *((ebp - 0x750));
        *((ebp - 0x13b8)) = edi;
        eax = *((ebp - 0x9b8));
        *((ebp - 0x13bc)) = eax;
        ebx = ecx;
    } else {
        *((esp + 8)) = 0x8070b3e;
        *((esp + 4)) = "Attempting to allocate already allocated array '%s';
        *(esp) = "At line 192 of file optic.F90";
        gfortran_runtime_error_at ();
    }
label_3:
    if (ebx > *((ebp - 0x13d0))) {
        goto label_19;
    }
    eax = *((ebp - 0x744));
    eax *= ebx;
    edi = *((ebp - 0x13c4));
    edi = eax + edi;
    edx = *((ebp - 0x13e0));
    edx = ebx + edx;
    eax = *((ebp - 0x9ac));
    eax *= edx;
    esi = *((ebp - 0x13d8));
    esi = eax + esi;
    edx = *((ebp - 0x13c8));
    do {
        if (edx > *((ebp - 0x13cc))) {
            goto label_20;
        }
        eax = *((ebp - 0x13dc));
        eax = edx + eax;
        eax *= *((ebp - 0x13bc));
        eax += esi;
        *((ebp - 0x1480)) = eax;
        eax = *((ebp - 0x13b8));
        eax *= edx;
        eax += edi;
        *((ebp - 0x147c)) = eax;
        ecx = *((ebp - 0x147c));
        eax = *((ebp - 0x13c0));
        *(fp_stack--) = *((eax + ecx*8));
        ecx = *((ebp - 0x1480));
        eax = *((ebp - 0x13d4));
        *((eax + ecx*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_20:
    ebx++;
    goto label_3;
label_19:
    ecx = 0x80000000;
    eax = *((ebp - 0xa2c));
    ebx = *((ebp - 0xa2c));
    edi = *((ebp - 0xa28));
    eax = *((ebp - 0xa1c));
    edx = *((ebp - 0xa18));
    *((ebp - 0x13b4)) = edx;
    esi = *((ebp - 0xa20));
    edx = eax;
    do {
        if (edx > *((ebp - 0x13b4))) {
            goto label_21;
        }
        eax = edx;
        eax *= esi;
        eax += edi;
        eax = *((ebx + eax*4));
        if (eax > ecx) {
            eax = edx;
            eax *= esi;
            eax += edi;
            ecx = *((ebx + eax*4));
        }
        edx++;
    } while (1);
label_21:
    *((ebp - 0xa04)) = ecx;
    eax = *((ebp - 0xa34));
    *((ebp - 0x2c)) = 1;
    if (*((ebp - 0x2c)) > eax) {
        goto label_22;
    }
    while (edx == 0) {
        edx = *((ebp - 0xa2c));
        ecx = *((ebp - 0xa20));
        ebx = *((ebp - 0xa20));
        ebx *= *((ebp - 0x2c));
        ecx = *((ebp - 0xa28));
        ecx = ebx + ecx;
        ecx = *((edx + ecx*4));
        edx = *((ebp - 0xa04));
        if (ecx != edx) {
            *((ebp - 0x1338)) = 0x8070922;
            *((ebp - 0x1334)) = 0xc7;
            *((ebp - 0x1340)) = 0x80;
            *((ebp - 0x133c)) = 6;
            eax = ebp - 0x1340;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x32;
            *((esp + 4)) = "optic : Error : nband must be constant across kpts(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp";
            eax = ebp - 0x1340;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0x1340;
            *(esp) = eax;
            gfortran_st_write_done ();
            *(esp) = 0xffffffff;
            eax = gfortran_stop_numeric ();
        }
        dl = (*((ebp - 0x2c)) == eax) ? 1 : 0;
        edx = (int32_t) dl;
        *((ebp - 0x2c))++;
    }
label_22:
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xcc;
    *((ebp - 0x1340)) = 0x80;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xcd;
    *((ebp - 0x1310)) = 0x8070b92;
    *((ebp - 0x130c)) = 0xc;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070b9e;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x10ec)) = 0x219;
    *((ebp - 0x10e4)) = 1;
    *((ebp - 0x10e0)) = 3;
    *((ebp - 0x10e8)) = 3;
    eax = ebp - 0xbb8;
    *((ebp - 0x10f4)) = eax;
    *((ebp - 0x10f0)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x10f4;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xce;
    *((ebp - 0x1310)) = 0x8070b92;
    *((ebp - 0x130c)) = 0xc;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070bb2;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x1104)) = 0x219;
    *((ebp - 0x10fc)) = 1;
    *((ebp - 0x10f8)) = 3;
    *((ebp - 0x1100)) = 3;
    eax = ebp - 0xbb8;
    eax += 8;
    *((ebp - 0x110c)) = eax;
    *((ebp - 0x1108)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x110c;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xcf;
    *((ebp - 0x1310)) = 0x8070b92;
    *((ebp - 0x130c)) = 0xc;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070bb2;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((ebp - 0x111c)) = 0x219;
    *((ebp - 0x1114)) = 1;
    *((ebp - 0x1110)) = 3;
    *((ebp - 0x1118)) = 3;
    eax = ebp - 0xbb8;
    eax += 0x10;
    *((ebp - 0x1124)) = eax;
    *((ebp - 0x1120)) = 0xfffffffc;
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 8;
    eax = ebp - 0x1124;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_array ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xd0;
    *((ebp - 0x1310)) = 0x8070bc6;
    *((ebp - 0x130c)) = 6;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070bcc;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0xa14;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xd1;
    *((ebp - 0x1310)) = 0x8070be0;
    *((ebp - 0x130c)) = 7;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070be7;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0xa34;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = ebp - 0xa04;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xd2;
    *((ebp - 0x1310)) = 0x8070bfb;
    *((ebp - 0x130c)) = 0xc;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070c07;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = ebp - 0xb0;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8070c1b;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0xd3;
    *((ebp - 0x1310)) = 0x8070c1e;
    *((ebp - 0x130c)) = 0x13;
    *((ebp - 0x1340)) = 0x1000;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x14;
    *((esp + 4)) = 0x8070c31;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = ebp - 0x148;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8070c1b;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0x148));
    *(fp_stack--) = *(0x8071040);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((ebp - 0x1130)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x1130;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8070c45;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x30)) = 0;
    *((ebp - 0x568)) = 1;
    *((ebp - 0xc68)) = 0;
    *((ebp - 0x138)) = 0x219;
    *((ebp - 0x130)) = 1;
    edx = *((ebp - 0xa04));
    eax = *((ebp - 0xa04));
    eax *= edx;
    eax += eax;
    *((ebp - 0x12c)) = eax;
    *((ebp - 0x134)) = 1;
    edx = *((ebp - 0xa04));
    eax = *((ebp - 0xa04));
    eax *= edx;
    eax += eax;
    edx = 0;
    __asm ("cmovns edx, eax");
    ecx = *((ebp - 0xa04));
    eax = *((ebp - 0xa04));
    eax *= ecx;
    eax += eax;
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    edx = *((ebp - 0x140));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x140)) = eax;
        *((ebp - 0x13c)) = 0xffffffff;
        *((ebp - 0xc0)) = 0x219;
        *((ebp - 0xb8)) = 1;
        eax = *((ebp - 0xa04));
        *((ebp - 0xb4)) = eax;
        *((ebp - 0xbc)) = 1;
        eax = *((ebp - 0xa04));
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp - 0xa04));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x8070c48;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 215 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_23;
    }
    eax = edx*8;
label_23:
    edx = *((ebp - 0xc8));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xc8)) = eax;
        *((ebp - 0xc4)) = 0xffffffff;
        eax = ebp - 0x998;
        *((esp + 4)) = eax;
        eax = ebp - 0xf10;
        *(esp) = eax;
        hdr_skip_wfftype_ ();
        eax = ebp - 0x998;
        *((esp + 4)) = eax;
        eax = ebp - 0xfd8;
        *(esp) = eax;
        hdr_skip_wfftype_ ();
        eax = ebp - 0x998;
        *((esp + 4)) = eax;
        eax = ebp - 0x10a0;
        *(esp) = eax;
        hdr_skip_wfftype_ ();
        *((ebp - 0xd8)) = 0x219;
        *((ebp - 0xd0)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        *((ebp - 0xcc)) = eax;
        *((ebp - 0xd4)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        edx = 0;
        __asm ("cmovns edx, eax");
        ecx = *((ebp - 0xa04));
        eax = *((ebp - 0xa34));
        ecx *= eax;
        eax = *((ebp - 0xab4));
        eax *= ecx;
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "eig0tmp";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 215 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_24;
    }
    eax = edx*8;
label_24:
    edx = *((ebp - 0xe0));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xe0)) = eax;
        *((ebp - 0xdc)) = 0xffffffff;
        *((ebp - 0xf0)) = 0x219;
        *((ebp - 0xe8)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= edx;
        edx = eax + eax;
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        *((ebp - 0xe4)) = eax;
        *((ebp - 0xec)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= edx;
        edx = eax + eax;
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        edx = 0;
        __asm ("cmovns edx, eax");
        ecx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= ecx;
        ecx = eax + eax;
        eax = *((ebp - 0xa34));
        ecx *= eax;
        eax = *((ebp - 0xab4));
        eax *= ecx;
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "eigen0";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 221 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_25;
    }
    eax = edx*8;
label_25:
    edx = *((ebp - 0xf8));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xf8)) = eax;
        *((ebp - 0xf4)) = 0xffffffff;
        *((ebp - 0x108)) = 0x219;
        *((ebp - 0x100)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= edx;
        edx = eax + eax;
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        *((ebp - 0xfc)) = eax;
        *((ebp - 0x104)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= edx;
        edx = eax + eax;
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        edx = 0;
        __asm ("cmovns edx, eax");
        ecx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= ecx;
        ecx = eax + eax;
        eax = *((ebp - 0xa34));
        ecx *= eax;
        eax = *((ebp - 0xab4));
        eax *= ecx;
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "eigen11";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 222 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_26;
    }
    eax = edx*8;
label_26:
    edx = *((ebp - 0x110));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x110)) = eax;
        *((ebp - 0x10c)) = 0xffffffff;
        *((ebp - 0x120)) = 0x219;
        *((ebp - 0x118)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= edx;
        edx = eax + eax;
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        *((ebp - 0x114)) = eax;
        *((ebp - 0x11c)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= edx;
        edx = eax + eax;
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        edx = 0;
        __asm ("cmovns edx, eax");
        ecx = *((ebp - 0xa04));
        eax = *((ebp - 0xa04));
        eax *= ecx;
        ecx = eax + eax;
        eax = *((ebp - 0xa34));
        ecx *= eax;
        eax = *((ebp - 0xab4));
        eax *= ecx;
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "eigen12";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 223 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_27;
    }
    eax = edx*8;
label_27:
    edx = *((ebp - 0x128));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x128)) = eax;
        *((ebp - 0x124)) = 0xffffffff;
        *((ebp - 0x38)) = 0;
        *((ebp - 0x34)) = 0;
        ecx = *((ebp - 0xab4));
        *((ebp - 0x13b0)) = ecx;
        *((ebp - 0x9a0)) = 1;
        eax = *((ebp - 0x9a0));
        if (eax <= *((ebp - 0x13b0))) {
            goto label_28;
        }
        goto label_29;
    }
    *((esp + 8)) = "eigen13";
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 224 of file optic.F90";
    gfortran_runtime_error_at ();
label_5:
label_28:
    ebx = *((ebp - 0xa34));
    *((ebp - 0x13ac)) = ebx;
    *((ebp - 0x99c)) = 1;
    eax = *((ebp - 0x99c));
    if (eax > *((ebp - 0x13ac))) {
        goto label_30;
    }
    goto label_31;
label_4:
label_31:
    eax = *((ebp - 0xa2c));
    edx = *((ebp - 0x9a0));
    ecx = edx - 1;
    edx = *((ebp - 0xa34));
    ecx *= edx;
    edx = *((ebp - 0x99c));
    ecx += edx;
    edx = *((ebp - 0xa20));
    ecx *= edx;
    edx = *((ebp - 0xa28));
    edx = ecx + edx;
    eax = *((eax + edx*4));
    *((ebp - 0xa30)) = eax;
    eax = *((ebp - 0xc8));
    edx = ebp - 0xe48;
    *((esp + 0x20)) = edx;
    edx = ebp - 0xc68;
    *((esp + 0x1c)) = edx;
    edx = ebp - 0xa30;
    *((esp + 0x18)) = edx;
    edx = ebp - 0xa04;
    *((esp + 0x14)) = edx;
    edx = ebp - 0x9a0;
    *((esp + 0x10)) = edx;
    edx = ebp - 0x99c;
    *((esp + 0xc)) = edx;
    edx = ebp - 0x994;
    *((esp + 8)) = edx;
    *((esp + 4)) = 0x8070d0c;
    *(esp) = eax;
    wffreadeigk_ ();
    eax = *((ebp - 0xc8));
    *((ebp - 0x1398)) = eax;
    esi = *((ebp - 0xc4));
    *((ebp - 0x139c)) = esi;
    edi = *((ebp - 0xa30));
    *((ebp - 0x13a0)) = edi;
    eax = *((ebp - 0xe0));
    *((ebp - 0x13a4)) = eax;
    eax = *((ebp - 0xdc));
    *((ebp - 0x13a8)) = eax;
    eax = *((ebp - 0x38));
    eax++;
    edi = eax - 1;
    esi = *((ebp - 0xbc));
    ebx = *((ebp - 0xd4));
    edx = 1;
    do {
        if (edx > *((ebp - 0x13a0))) {
            goto label_32;
        }
        eax = edx + edi;
        eax *= ebx;
        ecx = *((ebp - 0x13a8));
        ecx += eax;
        *((ebp - 0x1480)) = ecx;
        eax = edx;
        eax *= esi;
        *((ebp - 0x147c)) = eax;
        ecx = *((ebp - 0x139c));
        ecx += *((ebp - 0x147c));
        *((ebp - 0x147c)) = ecx;
        eax = *((ebp - 0x147c));
        ecx = *((ebp - 0x1398));
        *(fp_stack--) = *((ecx + eax*8));
        eax = *((ebp - 0x1480));
        ecx = *((ebp - 0x13a4));
        *((ecx + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_32:
    eax = *((ebp - 0x140));
    edx = ebp - 0xf10;
    *((esp + 0x20)) = edx;
    edx = ebp - 0xc68;
    *((esp + 0x1c)) = edx;
    edx = ebp - 0xa30;
    *((esp + 0x18)) = edx;
    edx = ebp - 0xa04;
    *((esp + 0x14)) = edx;
    edx = ebp - 0x9a0;
    *((esp + 0x10)) = edx;
    edx = ebp - 0x99c;
    *((esp + 0xc)) = edx;
    edx = ebp - 0x994;
    *((esp + 8)) = edx;
    edx = ebp - 0x568;
    *((esp + 4)) = edx;
    *(esp) = eax;
    wffreadeigk_ ();
    eax = *((ebp - 0x140));
    *((ebp - 0x1384)) = eax;
    ebx = *((ebp - 0x13c));
    *((ebp - 0x1388)) = ebx;
    eax = *((ebp - 0xa30));
    eax *= eax;
    eax += eax;
    *((ebp - 0x138c)) = eax;
    eax = *((ebp - 0xf8));
    *((ebp - 0x1390)) = eax;
    esi = *((ebp - 0xf4));
    *((ebp - 0x1394)) = esi;
    eax = *((ebp - 0x34));
    eax++;
    edi = eax - 1;
    esi = *((ebp - 0x134));
    ebx = *((ebp - 0xec));
    edx = 1;
    do {
        if (edx > *((ebp - 0x138c))) {
            goto label_33;
        }
        eax = edx + edi;
        eax *= ebx;
        ecx = *((ebp - 0x1394));
        ecx += eax;
        *((ebp - 0x1480)) = ecx;
        eax = edx;
        eax *= esi;
        *((ebp - 0x147c)) = eax;
        ecx = *((ebp - 0x1388));
        ecx += *((ebp - 0x147c));
        *((ebp - 0x147c)) = ecx;
        eax = *((ebp - 0x147c));
        ecx = *((ebp - 0x1384));
        *(fp_stack--) = *((ecx + eax*8));
        eax = *((ebp - 0x1480));
        ecx = *((ebp - 0x1390));
        *((ecx + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_33:
    eax = *((ebp - 0x140));
    edx = ebp - 0xfd8;
    *((esp + 0x20)) = edx;
    edx = ebp - 0xc68;
    *((esp + 0x1c)) = edx;
    edx = ebp - 0xa30;
    *((esp + 0x18)) = edx;
    edx = ebp - 0xa04;
    *((esp + 0x14)) = edx;
    edx = ebp - 0x9a0;
    *((esp + 0x10)) = edx;
    edx = ebp - 0x99c;
    *((esp + 0xc)) = edx;
    edx = ebp - 0x994;
    *((esp + 8)) = edx;
    edx = ebp - 0x568;
    *((esp + 4)) = edx;
    *(esp) = eax;
    wffreadeigk_ ();
    eax = *((ebp - 0x140));
    *((ebp - 0x1370)) = eax;
    ebx = *((ebp - 0x13c));
    *((ebp - 0x1374)) = ebx;
    eax = *((ebp - 0xa30));
    eax *= eax;
    eax += eax;
    *((ebp - 0x1378)) = eax;
    eax = *((ebp - 0x110));
    *((ebp - 0x137c)) = eax;
    esi = *((ebp - 0x10c));
    *((ebp - 0x1380)) = esi;
    eax = *((ebp - 0x34));
    eax++;
    edi = eax - 1;
    esi = *((ebp - 0x134));
    ebx = *((ebp - 0x104));
    edx = 1;
    do {
        if (edx > *((ebp - 0x1378))) {
            goto label_34;
        }
        eax = edx + edi;
        eax *= ebx;
        ecx = *((ebp - 0x1380));
        ecx += eax;
        *((ebp - 0x1480)) = ecx;
        eax = edx;
        eax *= esi;
        *((ebp - 0x147c)) = eax;
        ecx = *((ebp - 0x1374));
        ecx += *((ebp - 0x147c));
        *((ebp - 0x147c)) = ecx;
        eax = *((ebp - 0x147c));
        ecx = *((ebp - 0x1370));
        *(fp_stack--) = *((ecx + eax*8));
        eax = *((ebp - 0x1480));
        ecx = *((ebp - 0x137c));
        *((ecx + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_34:
    eax = *((ebp - 0x140));
    edx = ebp - 0x10a0;
    *((esp + 0x20)) = edx;
    edx = ebp - 0xc68;
    *((esp + 0x1c)) = edx;
    edx = ebp - 0xa30;
    *((esp + 0x18)) = edx;
    edx = ebp - 0xa04;
    *((esp + 0x14)) = edx;
    edx = ebp - 0x9a0;
    *((esp + 0x10)) = edx;
    edx = ebp - 0x99c;
    *((esp + 0xc)) = edx;
    edx = ebp - 0x994;
    *((esp + 8)) = edx;
    edx = ebp - 0x568;
    *((esp + 4)) = edx;
    *(esp) = eax;
    wffreadeigk_ ();
    eax = *((ebp - 0x140));
    *((ebp - 0x135c)) = eax;
    ebx = *((ebp - 0x13c));
    *((ebp - 0x1360)) = ebx;
    eax = *((ebp - 0xa30));
    eax *= eax;
    eax += eax;
    *((ebp - 0x1364)) = eax;
    eax = *((ebp - 0x128));
    *((ebp - 0x1368)) = eax;
    esi = *((ebp - 0x124));
    *((ebp - 0x136c)) = esi;
    eax = *((ebp - 0x34));
    eax++;
    edi = eax - 1;
    esi = *((ebp - 0x134));
    ebx = *((ebp - 0x11c));
    edx = 1;
    do {
        if (edx > *((ebp - 0x1364))) {
            goto label_35;
        }
        eax = edx + edi;
        eax *= ebx;
        ecx = *((ebp - 0x136c));
        ecx += eax;
        *((ebp - 0x1480)) = ecx;
        eax = edx;
        eax *= esi;
        *((ebp - 0x147c)) = eax;
        ecx = *((ebp - 0x1360));
        ecx += *((ebp - 0x147c));
        *((ebp - 0x147c)) = ecx;
        eax = *((ebp - 0x147c));
        ecx = *((ebp - 0x135c));
        *(fp_stack--) = *((ecx + eax*8));
        eax = *((ebp - 0x1480));
        ecx = *((ebp - 0x1368));
        *((ecx + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_35:
    eax = *((ebp - 0xa30));
    *((ebp - 0x38)) += eax;
    eax = *((ebp - 0xa30));
    eax *= eax;
    eax += eax;
    *((ebp - 0x34)) += eax;
    eax = *((ebp - 0x99c));
    al = (eax == *((ebp - 0x13ac))) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x99c));
    edx++;
    *((ebp - 0x99c)) = edx;
    if (eax == 0) {
        goto label_4;
    }
label_30:
    eax = *((ebp - 0x9a0));
    al = (eax == *((ebp - 0x13b0))) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x9a0));
    edx++;
    *((ebp - 0x9a0)) = edx;
    if (eax == 0) {
        goto label_5;
    }
label_29:
    eax = ebp - 0x998;
    *((esp + 4)) = eax;
    eax = ebp - 0xe48;
    *(esp) = eax;
    wffclose_ ();
    eax = ebp - 0x998;
    *((esp + 4)) = eax;
    eax = ebp - 0xf10;
    *(esp) = eax;
    wffclose_ ();
    eax = ebp - 0x998;
    *((esp + 4)) = eax;
    eax = ebp - 0xfd8;
    *(esp) = eax;
    wffclose_ ();
    eax = ebp - 0x998;
    *((esp + 4)) = eax;
    eax = ebp - 0x10a0;
    *(esp) = eax;
    wffclose_ ();
    eax = *((ebp - 0x140));
    if (eax == 0) {
        *((esp + 8)) = 0x8070c48;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 246 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x140));
    free (eax);
    *((ebp - 0x140)) = 0;
    eax = *((ebp - 0xc8));
    if (eax == 0) {
        *((esp + 8)) = "eig0tmp";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 246 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xc8));
    free (eax);
    *((ebp - 0xc8)) = 0;
    eax = ebp - 0xd80;
    *((esp + 0x14)) = eax;
    eax = ebp - 0xbb8;
    *((esp + 0x10)) = eax;
    eax = ebp - 0xb70;
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x8070d58;
    eax = ebp - 0x640;
    *((esp + 4)) = eax;
    eax = ebp - 0x5b0;
    *(esp) = eax;
    metric_ ();
    eax = ebp - 0x5f8;
    *((esp + 4)) = eax;
    eax = ebp - 0x5b0;
    *(esp) = eax;
    matr3inv_ ();
    *((ebp - 0x10b0)) = 0x219;
    *((ebp - 0x10a8)) = 1;
    eax = *((ebp - 0xa34));
    *((ebp - 0x10a4)) = eax;
    *((ebp - 0x10ac)) = 1;
    eax = *((ebp - 0xa34));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = *((ebp - 0xa34));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*8;
    }
    edx = *((ebp - 0x10b8));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x10b8)) = eax;
        *((ebp - 0x10b4)) = 0xffffffff;
        eax = *((ebp - 0x10b8));
        ecx = *((ebp - 0x10b8));
        eax = *((ebp - 0xc34));
        edx = *((ebp - 0xc34));
        eax = *((ebp - 0x9c4));
        *((esp + 0x10)) = ecx;
        *((esp + 0xc)) = edx;
        edx = ebp - 0xab8;
        *((esp + 8)) = edx;
        edx = ebp - 0xa34;
        *((esp + 4)) = edx;
        *(esp) = eax;
        getwtk_ ();
        *((ebp - 0x98)) = 0x219;
        *((ebp - 0x90)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        *((ebp - 0x8c)) = eax;
        *((ebp - 0x94)) = 1;
        edx = *((ebp - 0xa04));
        eax = *((ebp - 0xa34));
        edx *= eax;
        eax = *((ebp - 0xab4));
        eax *= edx;
        edx = 0;
        __asm ("cmovns edx, eax");
        ecx = *((ebp - 0xa04));
        eax = *((ebp - 0xa34));
        ecx *= eax;
        eax = *((ebp - 0xab4));
        eax *= ecx;
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x8070d5c;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 256 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_36;
    }
    eax = edx*8;
label_36:
    edx = *((ebp - 0xa0));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xa0)) = eax;
        *((ebp - 0x9c)) = 0xffffffff;
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x105;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 8;
        eax = ebp - 0xd78;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x117;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 8;
        eax = ebp - 0xa8;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 8;
        eax = ebp - 0xa00;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *(fp_stack--) = *((ebp - 0xa00));
        *(fp_stack--) = *((ebp - 0xa8));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x134e));
        ah = 0xc;
        *((ebp - 0x1350)) = ax;
        *((ebp - 0x134c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x134c));
        *((ebp - 0xab0)) = eax;
        eax = *((ebp - 0xab0));
        *((ebp - 0x134c)) = eax;
        *(fp_stack--) = *((ebp - 0x134c));
        *(fp_stack--) = *((ebp - 0xa8));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0xa00)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x80)) = 0x219;
        *((ebp - 0x78)) = 1;
        eax = *((ebp - 0xab0));
        *((ebp - 0x74)) = eax;
        *((ebp - 0x7c)) = 1;
        eax = *((ebp - 0xab0));
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp - 0xab0));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "doccde";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 259 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_37;
    }
    eax = edx*8;
label_37:
    edx = *((ebp - 0x88));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x88)) = eax;
        *((ebp - 0x84)) = 0xffffffff;
        *((ebp - 0x68)) = 0x219;
        *((ebp - 0x60)) = 1;
        eax = *((ebp - 0xab0));
        *((ebp - 0x5c)) = eax;
        *((ebp - 0x64)) = 1;
        eax = *((ebp - 0xab0));
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp - 0xab0));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "cond_nd";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 282 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_38;
    }
    eax = edx*8;
label_38:
    edx = *((ebp - 0x70));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = 0xffffffff;
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x11d;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 8;
        eax = ebp - 0xbd0;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x11e;
        *((ebp - 0x1310)) = "(a,f10.5,a) Scissor shift     = Tolerance on closeness to singularities     =";
        *((ebp - 0x130c)) = 0xb;
        *((ebp - 0x1340)) = 0x1000;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x14;
        *((esp + 4)) = 0x8070dd4;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 8;
        eax = ebp - 0xbd0;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 3;
        *((esp + 4)) = 0x8070c1b;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x120;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 8;
        eax = ebp - 0xd70;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x121;
        *((ebp - 0x1310)) = "(a,f10.5,a) Scissor shift     = Tolerance on closeness to singularities     =";
        *((ebp - 0x130c)) = 0xb;
        *((ebp - 0x1340)) = 0x1000;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2e;
        *((esp + 4)) = 0x8070de8;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 8;
        eax = ebp - 0xd70;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_real ();
        *((esp + 8)) = 3;
        *((esp + 4)) = 0x8070c1b;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x123;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 4;
        eax = ebp - 0xa0c;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x124;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        eax = *((ebp - 0xa0c));
        *((ebp - 0x1140)) = 0x109;
        *((ebp - 0x1138)) = 1;
        *((ebp - 0x1134)) = eax;
        *((ebp - 0x113c)) = 1;
        eax = ebp - 0x9f0;
        *((ebp - 0x1148)) = eax;
        *((ebp - 0x1144)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x1148;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x125;
        *((ebp - 0x1310)) = 0x807092c;
        *((ebp - 0x130c)) = 3;
        *((ebp - 0x1340)) = 0x1000;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x22;
        *((esp + 4)) = " linear coeffs to be calculated : (9i3)";
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x127;
        *((ebp - 0x1310)) = 0x8070e3a;
        *((ebp - 0x130c)) = 5;
        *((ebp - 0x1340)) = 0x1000;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        eax = *((ebp - 0xa0c));
        *((ebp - 0x1158)) = 0x109;
        *((ebp - 0x1150)) = 1;
        *((ebp - 0x114c)) = eax;
        *((ebp - 0x1154)) = 1;
        eax = ebp - 0x9f0;
        *((ebp - 0x1160)) = eax;
        *((ebp - 0x115c)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x1160;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x128;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        *((esp + 8)) = 4;
        eax = ebp - 0xa10;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x129;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read ();
        eax = *((ebp - 0xa10));
        *((ebp - 0x1170)) = 0x109;
        *((ebp - 0x1168)) = 1;
        *((ebp - 0x1164)) = eax;
        *((ebp - 0x116c)) = 1;
        eax = ebp - 0xaac;
        *((ebp - 0x1178)) = eax;
        *((ebp - 0x1174)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x1178;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_read_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x12a;
        *((ebp - 0x1310)) = 0x807092c;
        *((ebp - 0x130c)) = 3;
        *((ebp - 0x1340)) = 0x1000;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x26;
        *((esp + 4)) = " non-linear coeffs to be calculated : (27i4)cond_kg";
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x12c;
        *((ebp - 0x1310)) = 0x8070e66;
        *((ebp - 0x130c)) = 6;
        *((ebp - 0x1340)) = 0x1000;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        eax = *((ebp - 0xa10));
        *((ebp - 0x1188)) = 0x109;
        *((ebp - 0x1180)) = 1;
        *((ebp - 0x117c)) = eax;
        *((ebp - 0x1184)) = 1;
        eax = ebp - 0xaac;
        *((ebp - 0x1190)) = eax;
        *((ebp - 0x118c)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 4;
        eax = ebp - 0x1190;
        *((esp + 4)) = eax;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_array ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x12e;
        *((ebp - 0x1340)) = 0;
        *((ebp - 0x133c)) = 0xf;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_close ();
        *((ebp - 0xbfc)) = 0x21b;
        *((ebp - 0xbf4)) = 1;
        *((ebp - 0xbf0)) = 3;
        *((ebp - 0xbf8)) = 1;
        *((ebp - 0xbe8)) = 1;
        *((ebp - 0xbe4)) = 3;
        *((ebp - 0xbec)) = 3;
        *((ebp - 0xbdc)) = 1;
        eax = *((ebp - 0xab8));
        *((ebp - 0xbd8)) = eax;
        *((ebp - 0xbe0)) = 9;
        eax = *((ebp - 0xab8));
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = edx;
        eax <<= 3;
        edx = eax + edx;
        eax = *((ebp - 0xab8));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x8070e6c;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 282 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_39;
    }
    eax = edx*8;
label_39:
    edx = *((ebp - 0xc04));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xc04)) = eax;
        *((ebp - 0xc00)) = 0xfffffff3;
        eax = *((ebp - 0xc04));
        edx = *((ebp - 0xc04));
        eax = *((ebp - 0xc64));
        *((esp + 0x10)) = edx;
        *((esp + 0xc)) = eax;
        eax = ebp - 0xbb8;
        *((esp + 8)) = eax;
        eax = ebp - 0xab8;
        *((esp + 4)) = eax;
        eax = ebp - 0x640;
        *(esp) = eax;
        sym2cart_ ();
        *((ebp - 0xb1c)) = 0x426;
        *((ebp - 0xb14)) = 1;
        *((ebp - 0xb10)) = 2;
        *((ebp - 0xb18)) = 1;
        *((ebp - 0xb08)) = 1;
        eax = *((ebp - 0xa04));
        *((ebp - 0xb04)) = eax;
        *((ebp - 0xb0c)) = 2;
        eax = *((ebp - 0xa04));
        edx = 0;
        __asm ("cmovs eax, edx");
        ebx = eax + eax;
        *((ebp - 0xafc)) = 1;
        eax = *((ebp - 0xa04));
        *((ebp - 0xaf8)) = eax;
        *((ebp - 0xb00)) = ebx;
        eax = *((ebp - 0xa04));
        edx = 0;
        __asm ("cmovs eax, edx");
        edx = eax;
        edx *= ebx;
        *((ebp - 0xaf0)) = 1;
        eax = *((ebp - 0xa34));
        *((ebp - 0xaec)) = eax;
        *((ebp - 0xaf4)) = edx;
        eax = *((ebp - 0xa34));
        ecx = 0;
        __asm ("cmovs eax, ecx");
        eax *= edx;
        *((ebp - 0xae4)) = 1;
        *((ebp - 0xae0)) = 3;
        *((ebp - 0xae8)) = eax;
        ecx = eax;
        ecx += ecx;
        ecx += eax;
        *((ebp - 0xad8)) = 1;
        esi = *((ebp - 0xab4));
        *((ebp - 0xad4)) = esi;
        *((ebp - 0xadc)) = ecx;
        esi = *((ebp - 0xab4));
        edi = 0;
        __asm ("cmovs esi, edi");
        esi *= ecx;
        *((ebp - 0x1484)) = 0xfffffffd;
        edi = *((ebp - 0x1484));
        edi -= ebx;
        ebx = edi;
        edi -= edx;
        edx = edi;
        ebx = edi;
        ebx -= eax;
        eax = ebx;
        ebx -= ecx;
        eax = *((ebp - 0xa04));
        al = (eax <= 0) ? 1 : 0;
        edx = (int32_t) al;
        eax = *((ebp - 0xa04));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        edx |= eax;
        eax = *((ebp - 0xa34));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        edx |= eax;
        eax = *((ebp - 0xab4));
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        eax |= edx;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "symcart";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 304 of file optic.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_40;
    }
    eax = esi;
    eax <<= 4;
label_40:
    edx = *((ebp - 0xb24));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = 0x8070a5c;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xb24)) = eax;
        *((ebp - 0xb20)) = ebx;
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x134;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x17;
        *((esp + 4)) = " optic : Call pmat2cart optic : Call linoptpmat";
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        eax = *((ebp - 0xb24));
        ebx = *((ebp - 0xb24));
        eax = *((ebp - 0x128));
        ecx = *((ebp - 0x128));
        eax = *((ebp - 0x110));
        edx = *((ebp - 0x110));
        eax = *((ebp - 0xf8));
        esi = ebp - 0xbb8;
        *((esp + 0x1c)) = esi;
        *((esp + 0x18)) = ebx;
        ebx = ebp - 0xab4;
        *((esp + 0x14)) = ebx;
        ebx = ebp - 0xa34;
        *((esp + 0x10)) = ebx;
        ebx = ebp - 0xa04;
        *((esp + 0xc)) = ebx;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        *(esp) = eax;
        pmat2cart_ ();
        *((ebp - 0x1338)) = 0x8070922;
        *((ebp - 0x1334)) = 0x141;
        *((ebp - 0x1340)) = 0x80;
        *((ebp - 0x133c)) = 6;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x14;
        *((esp + 4)) = 0x8070eb1;
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1340;
        *(esp) = eax;
        gfortran_st_write_done ();
        esi = *((ebp - 0xa0c));
        *((ebp - 0x1358)) = esi;
        *((ebp - 0x2c)) = 1;
        edi = *((ebp - 0x1358));
        if (*((ebp - 0x2c)) <= edi) {
            goto label_41;
        }
        goto label_42;
    }
    *((esp + 8)) = 0x8070ec5;
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 307 of file optic.F90";
    gfortran_runtime_error_at ();
label_41:
    eax = *((ebp - 0x2c));
    eax--;
    eax = *((ebp + eax*4 - 0x9f0));
    *((ebp - 0x134c)) = eax;
    *(fp_stack--) = *((ebp - 0x134c));
    *(fp_stack--) = *(0x8071048);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x134e));
    ah = 0xc;
    *((ebp - 0x1350)) = ax;
    *((ebp - 0x134c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x134c));
    *((ebp - 0x9c8)) = eax;
    eax = *((ebp - 0x2c));
    eax--;
    ecx = *((ebp + eax*4 - 0x9f0));
    edx = 0x66666667;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 2;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax <<= 2;
    eax += edx;
    eax += eax;
    edx = ecx;
    edx -= eax;
    *((ebp - 0x9cc)) = edx;
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x146;
    *((ebp - 0x1340)) = 0x80;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 8;
    *((esp + 4)) = " linopt Attempt to allocate a negative amount of memory.";
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x9c8;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = ebp - 0x9cc;
    *((esp + 4)) = eax;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 8)) = 4;
    eax = ebp - 0xbbc;
    *((esp + 4)) = eax;
    eax = ebp - 0x9c8;
    int2char4_ (eax);
    *((esp + 8)) = 4;
    eax = ebp - 0xbc0;
    *((esp + 4)) = eax;
    eax = ebp - 0x9cc;
    int2char4_ (eax);
    eax = ebp - 0x11a8;
    edx = ebp - 0x564;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = eax;
    eax = ebp - 0x11a4;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0x11a4));
    eax++;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    edx = *((ebp - 0x11a8));
    eax = *((ebp - 0x11a4));
    ecx = *((ebp - 0x11a4));
    ecx++;
    *((esp + 0x14)) = "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90";
    *((esp + 0x10)) = 1;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = eax;
    *((esp + 4)) = esi;
    *(esp) = ecx;
    gfortran_concat_string ();
    eax = *((ebp - 0x11a4));
    if (eax > 0) {
        eax = *((ebp - 0x11a8));
        if (eax == 0) {
            goto label_43;
        }
        free (eax);
    }
label_43:
    eax = ebp - 0x11a0;
    edx = ebp - 0xbbc;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x119c;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    ebx = eax;
    edi = *((ebp - 0x11a0));
    ecx = *((ebp - 0x119c));
    eax = *((ebp - 0x11a4));
    eax++;
    *((ebp - 0x1474)) = eax;
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    *((esp + 0x14)) = edi;
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = esi;
    edx = *((ebp - 0x1474));
    *((esp + 8)) = edx;
    *((esp + 4)) = ebx;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0x119c));
    if (eax > 0) {
        eax = *((ebp - 0x11a0));
        if (eax == 0) {
            goto label_44;
        }
        free (eax);
    }
label_44:
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    eax++;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    edi = eax;
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    edx += eax;
    eax = *((ebp - 0x11a4));
    ecx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = ecx + eax;
    eax++;
    *((esp + 0x14)) = "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90";
    *((esp + 0x10)) = 1;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = edx;
    *((esp + 4)) = edi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = ebx;
    if (eax != 0) {
        free (eax);
    }
    eax = ebp - 0x1198;
    edx = ebp - 0xbc0;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x1194;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    edx = eax + 1;
    eax = *((ebp - 0x1194));
    eax = edx + eax;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0x1198));
    *((ebp - 0x1470)) = ecx;
    ebx = *((ebp - 0x1194));
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    ecx = eax + 1;
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    edx = eax + 1;
    eax = *((ebp - 0x1194));
    eax = edx + eax;
    edx = *((ebp - 0x1470));
    *((esp + 0x14)) = edx;
    *((esp + 0x10)) = ebx;
    *((esp + 0xc)) = edi;
    *((esp + 8)) = ecx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0x1194));
    if (eax > 0) {
        eax = *((ebp - 0x1198));
        if (eax == 0) {
            goto label_45;
        }
        free (eax);
    }
label_45:
    eax = edi;
    if (eax != 0) {
        free (eax);
    }
    eax = *((ebp - 0x11a4));
    edx = eax + 1;
    eax = *((ebp - 0x119c));
    eax = edx + eax;
    edx = eax + 1;
    eax = *((ebp - 0x1194));
    ebx = edx + eax;
    if (ebx > 0xff) {
        eax = ebp - 0xd68;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0xd68;
        memmove (eax, esi, ebx);
        eax = 0x100;
        edx = 0x100;
        edx -= ebx;
        ecx = ebx;
        eax = ebp - 0xd68;
        eax += ecx;
        memset (eax, 0x20, edx);
    }
    eax = esi;
    if (eax == 0) {
        void (*0x804cdb0)() ();
    }
label_42:
    *((ebp - 0x1338)) = 0x8070922;
    *((ebp - 0x1334)) = 0x150;
    *((ebp - 0x1340)) = 0x80;
    *((ebp - 0x133c)) = 6;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x15;
    *((esp + 4)) = 0x8070f3b;
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1340;
    *(esp) = eax;
    gfortran_st_write_done ();
    ebx = *((ebp - 0xa10));
    *((ebp - 0x1354)) = ebx;
    *((ebp - 0x2c)) = 1;
    esi = *((ebp - 0x1354));
    if (*((ebp - 0x2c)) > esi) {
        goto label_46;
    }
    eax = *((ebp - 0x2c));
    eax--;
    eax = *((ebp + eax*4 - 0xaac));
    *((ebp - 0x134c)) = eax;
    *(fp_stack--) = *((ebp - 0x134c));
    *(fp_stack--) = *(0x8071050);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x134e));
    ah = 0xc;
    *((ebp - 0x1350)) = ax;
    *((ebp - 0x134c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x134c));
    *((ebp - 0xa38)) = eax;
    eax = *((ebp - 0x2c));
    eax--;
    eax = *((ebp + eax*4 - 0xaac));
    *((ebp - 0x134c)) = eax;
    *(fp_stack--) = *((ebp - 0x134c));
    eax = *((ebp - 0xa38));
    *((ebp - 0x134c)) = eax;
    *(fp_stack--) = *((ebp - 0x134c));
    *(fp_stack--) = *(0x8071058);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8071048);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((ebp - 0x134c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x134c));
    *((ebp - 0xa3c)) = eax;
    eax = *((ebp - 0x2c));
    eax--;
    ecx = *((ebp + eax*4 - 0xaac));
    edx = 0x66666667;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 2;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax <<= 2;
    eax += edx;
    eax += eax;
    edx = ecx;
    edx -= eax;
    *((ebp - 0xa40)) = edx;
    *((esp + 8)) = 4;
    eax = ebp - 0xbbc;
    *((esp + 4)) = eax;
    eax = ebp - 0xa38;
    int2char4_ (eax);
    *((esp + 8)) = 4;
    eax = ebp - 0xbc0;
    *((esp + 4)) = eax;
    eax = ebp - 0xa3c;
    int2char4_ (eax);
    *((esp + 8)) = 4;
    eax = ebp - 0xbc4;
    *((esp + 4)) = eax;
    eax = ebp - 0xa40;
    int2char4_ (eax);
    eax = ebp - 0x11c8;
    edx = ebp - 0x564;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = eax;
    eax = ebp - 0x11c4;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0x11c4));
    eax++;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    edx = *((ebp - 0x11c8));
    eax = *((ebp - 0x11c4));
    ecx = *((ebp - 0x11c4));
    ecx++;
    *((esp + 0x14)) = "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90";
    *((esp + 0x10)) = 1;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = eax;
    *((esp + 4)) = esi;
    *(esp) = ecx;
    gfortran_concat_string ();
    eax = *((ebp - 0x11c4));
    if (eax > 0) {
        eax = *((ebp - 0x11c8));
        if (eax == 0) {
            goto label_47;
        }
        free (eax);
    }
label_47:
    eax = ebp - 0x11c0;
    edx = ebp - 0xbbc;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 4;
    *((esp + 4)) = eax;
    eax = ebp - 0x11bc;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0x11c4));
    edx = eax + 1;
    eax = *((ebp - 0x11bc));
    eax = edx + eax;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    ebx = eax;
    edi = *((ebp - 0x11c0));
    ecx = *((ebp - 0x11bc));
    eax = *((ebp - 0x11c4));
    eax++;
    *((ebp - 0x146c)) = eax;
    eax = *((ebp - 0x11c4));
    edx = eax + 1;
    eax = *((ebp - 0x11bc));
    eax = edx + eax;
    *((esp + 0x14)) = edi;
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = esi;
    edx = *((ebp - 0x146c));
    *((esp + 8)) = edx;
    *((esp + 4)) = ebx;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0x11bc));
    if (eax > 0) {
        eax = *((ebp - 0x11c0));
        if (eax == 0) {
            goto label_48;
        }
        free (eax);
    }
label_48:
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    eax = *((ebp - 0x11c4));
    edx = eax + 1;
    eax = *((ebp - 0x11bc));
    eax = edx + eax;
    eax++;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8070ef0;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    eax = *((ebp - 0x11c4));
    edx = eax + 1;
    eax = *((ebp - 0x11bc));
    edx += eax;
    eax = *((ebp - 0x11c4));
    ecx = eax + 1;
    eax = *((ebp - 0x11bc));
    eax = ecx + eax;
    eax++;
    *((esp + 0x14)) = "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90";
    *((esp + 0x10)) = 1;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = ebx;
    if (eax == 0) {
        void (*0x804d2ae)() ();
    }
label_46:
    eax = *((ebp - 0xa2c));
    if (eax == 0) {
        *((esp + 8)) = "nband";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = 0x8070f59;
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xa2c));
    free (eax);
    *((ebp - 0xa2c)) = 0;
    eax = *((ebp - 0xad0));
    if (eax == 0) {
        *((esp + 8)) = 0x8070b0e;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 352 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xad0));
    free (eax);
    *((ebp - 0xad0)) = 0;
    eax = *((ebp - 0xf8));
    if (eax == 0) {
        *((esp + 8)) = "eigen11";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 353 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xf8));
    free (eax);
    *((ebp - 0xf8)) = 0;
    eax = *((ebp - 0x110));
    if (eax == 0) {
        *((esp + 8)) = "eigen12";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 353 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x110));
    free (eax);
    *((ebp - 0x110)) = 0;
    eax = *((ebp - 0x128));
    if (eax == 0) {
        *((esp + 8)) = "eigen13";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 353 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x128));
    free (eax);
    *((ebp - 0x128)) = 0;
    eax = *((ebp - 0xe0));
    if (eax == 0) {
        *((esp + 8)) = "eigen0";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 354 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xe0));
    free (eax);
    *((ebp - 0xe0)) = 0;
    eax = *((ebp - 0xa0));
    if (eax == 0) {
        *((esp + 8)) = "doccde";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 354 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0xa0));
    free (eax);
    *((ebp - 0xa0)) = 0;
    eax = *((ebp - 0x10b8));
    if (eax == 0) {
        *((esp + 8)) = 0x8070d5c;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 354 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x10b8));
    free (eax);
    *((ebp - 0x10b8)) = 0;
    eax = *((ebp - 0x88));
    if (eax == 0) {
        *((esp + 8)) = "cond_nd";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 355 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x88));
    free (eax);
    *((ebp - 0x88)) = 0;
    eax = *((ebp - 0x70));
    if (eax == 0) {
        *((esp + 8)) = 0x8070e6c;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 355 of file optic.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x70));
    free (eax);
    *((ebp - 0x70)) = 0;
    eax = *((ebp - 0x9c4));
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x804dab4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x805b598 */
#include <stdint.h>
 
int32_t dbg_wffreadeigk (void) {
    int32_t var_80h;
    int32_t var_7ch;
    integer(kind=4) optkg;
    integer(kind=4) option;
    real(kind=8)[5] occ_dum;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    integer(kind=4) nspinor;
    integer(kind=4) npw;
    integer(kind=4) nband_disk;
    integer(kind=4) mcg;
    integer(kind=4)[5][5] kg_dum;
    int32_t var_bp_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    integer(kind=4) icg;
    real(kind=8)[3][2] cg_dum;
    integer(kind=4) ubound.0;
    real(kind=8)[4] eigen;
    integer(kind=4) formeig;
    integer(kind=4) headform;
    integer(kind=4) ikpt;
    integer(kind=4) isppol;
    integer(kind=4) mband;
    integer(kind=4) nband;
    integer(kind=4) tim_rwwf;
    wffile_type wff;
    int32_t var_4h;
    char * var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_sp_24h;
    int32_t var_sp_28h;
    int32_t var_sp_2ch;
    int32_t var_sp_30h;
    int32_t var_sp_34h;
    int32_t var_sp_38h;
    int32_t var_sp_3ch;
    int32_t var_sp_40h;
    int32_t var_44h;
    int32_t var_sp_48h;
    /* void wffreadeigk(real(kind=8)[4] eigen,integer(kind=4) formeig,integer(kind=4) headform,integer(kind=4) ikpt,integer(kind=4) isppol,integer(kind=4) mband,integer(kind=4) nband,integer(kind=4) tim_rwwf,wffile_type wff); */
    eax = *((ebp + 0x1c));
    eax = *(eax);
    edx = eax + eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((esp + 4)) = eax;
    *(esp) = edx;
    eax = gfortran_pow_i4_i4 ();
    edx = *((ebp + 0x1c));
    edx = *(edx);
    eax *= edx;
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x80)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x7c)) = ecx;
    eax = *((ebp - 0x80));
    edx = *((ebp - 0x7c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ebx = eax;
    bh &= 0xff;
    esi = edx;
    esi &= 0xf;
    eax = ebx;
    edx = esi;
    *((ebp - 0x48)) = 0;
    *((ebp - 0x70)) = 0;
    *((ebp - 0x74)) = 3;
    *((ebp - 0x4c)) = 1;
    *((ebp - 0x24)) = 0;
    *((ebp - 0x78)) = 0;
    *((ebp - 0x40)) = 0x10a;
    *((ebp - 0x38)) = 1;
    *((ebp - 0x34)) = 3;
    *((ebp - 0x3c)) = 1;
    *((ebp - 0x2c)) = 1;
    eax = *((ebp - 0x78));
    *((ebp - 0x28)) = eax;
    *((ebp - 0x30)) = 3;
    eax = *((ebp - 0x78));
    edx = 0;
    __asm ("cmovns edx, eax");
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp - 0x78));
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        eax = 0;
    } else {
        eax = edx*4;
    }
    edx = *((ebp - 0x48));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = "Attempt to allocate negative amount of memory. Possible integer overflow";
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x48)) = eax;
        *((ebp - 0x44)) = 0xfffffffc;
        *((ebp - 0x68)) = 0x219;
        *((ebp - 0x60)) = 1;
        eax = *((ebp + 0x1c));
        eax = *(eax);
        *((ebp - 0x5c)) = eax;
        *((ebp - 0x64)) = 1;
        eax = *((ebp + 0x1c));
        eax = *(eax);
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp + 0x1c));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "kg_dum";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 88 of file WffReadEigK.F90";
            gfortran_runtime_error_at ();
        }
        eax = 0;
        goto label_0;
    }
    eax = edx*8;
label_0:
    edx = *((ebp - 0x70));
    if (edx == 0) {
        if (eax < 0) {
            *(esp) = "Attempt to allocate negative amount of memory. Possible integer overflow";
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = 0xffffffff;
        eax = *((ebp - 0x70));
        edx = *((ebp - 0x70));
        eax = *((ebp - 0x48));
        ecx = *((ebp + 0x28));
        *((esp + 0x48)) = ecx;
        ecx = *((ebp + 0x24));
        *((esp + 0x44)) = ecx;
        ecx = ebp - 0x78;
        *((esp + 0x40)) = ecx;
        ecx = ebp - 0x74;
        *((esp + 0x3c)) = ecx;
        *((esp + 0x38)) = edx;
        edx = ebp - 0x58;
        *((esp + 0x34)) = edx;
        edx = ebp - 0x54;
        *((esp + 0x30)) = edx;
        edx = ebp - 0x50;
        *((esp + 0x2c)) = edx;
        edx = *((ebp + 0x20));
        *((esp + 0x28)) = edx;
        edx = ebp - 0x4c;
        *((esp + 0x24)) = edx;
        edx = *((ebp + 0x1c));
        *((esp + 0x20)) = edx;
        *((esp + 0x1c)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 0x18)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 0x14)) = eax;
        eax = ebp - 0x24;
        *((esp + 0x10)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        eax = ebp - 0x20;
        *(esp) = eax;
        rwwf_ ();
        eax = *((ebp - 0x48));
        if (eax != 0) {
        } else {
            *((esp + 8)) = "occ_dum";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 88 of file WffReadEigK.F90";
            gfortran_runtime_error_at ();
        }
        *((esp + 8)) = "kg_dum";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 97 of file WffReadEigK.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x48));
    free (eax);
    *((ebp - 0x48)) = 0;
    eax = *((ebp - 0x70));
    if (eax == 0) {
        *((esp + 8)) = "occ_dum";
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 97 of file WffReadEigK.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp - 0x70));
    free (eax);
    *((ebp - 0x70)) = 0;
    eax = *((ebp - 0x70));
    if (eax != 0) {
        eax = *((ebp - 0x70));
        free (eax);
    }
    *((ebp - 0x70)) = 0;
    eax = *((ebp - 0x48));
    if (eax != 0) {
        eax = *((ebp - 0x48));
        free (eax);
    }
    *((ebp - 0x48)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806e304 */
#include <stdint.h>
 
int32_t dbg_herald (void * arg_8h, char * arg_ch) {
    int32_t var_210h;
    int32_t var_20ch;
    int32_t var_20ah;
    int32_t var_1fch;
    int32_t var_1f8h;
    int32_t var_1f4h;
    int32_t var_1f0h;
    char * var_1cch;
    int32_t var_1c8h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    integer(kind=4) yyyy;
    integer(kind=4)[9] values;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_3bh;
    int32_t var_36h;
    int32_t var_2ch;
    integer(kind=4) dd;
    integer(kind=4) day;
    integer(kind=4) ja;
    integer(kind=4) jdn;
    integer(kind=4) jm;
    integer(kind=4) jy;
    integer(kind=4) mm;
    integer(kind=4) iout;
    integer(kind=4) const _code_name;
    integer(kind=4) const _code_version;
    char * var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    /* void herald(integer(kind=4) iout,integer(kind=4) const _code_name,integer(kind=4) const _code_version); */
    *((ebp - 0x1f4)) = 0x8073c60;
    *((ebp - 0x1f0)) = 0x41;
    *((ebp - 0x1cc)) = "(/,a,a,a,a,a).Version  of  (a,a,a,/)";
    *((ebp - 0x1c8)) = 0xd;
    *((ebp - 0x1fc)) = 0x1000;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1f8)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 9;
    *((esp + 4)) = 0x8073c78;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 6;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    *((esp + 4)) = 0x8073c81;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x68;
    edx = *((ebp + 8));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x18;
    *((esp + 4)) = eax;
    eax = ebp - 0x64;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x64));
    eax = *((ebp - 0x68));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp - 0x64));
    if (eax > 0) {
        eax = *((ebp - 0x68));
        if (eax == 0) {
            goto label_0;
        }
        free (eax);
    }
label_0:
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8073c85;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1f4)) = 0x8073c60;
    *((ebp - 0x1f0)) = 0x47;
    *((ebp - 0x1cc)) = 0x8073c86;
    *((ebp - 0x1c8)) = 9;
    *((ebp - 0x1fc)) = 0x1000;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1f8)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x25;
    *((esp + 4)) = ".(sequential version, prepared for a i686_linux_UNKNOWN computer) (a,/,a,a,a,/,a,/,a,/,a,/)";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x12;
    *((esp + 4)) = 0x8073cb5;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0xb;
    *((esp + 4)) = 0x8073cc7;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1f4)) = 0x8073c60;
    *((ebp - 0x1f0)) = 0x50;
    *((ebp - 0x1cc)) = 0x8073cd2;
    *((ebp - 0x1c8)) = 0x19;
    *((ebp - 0x1fc)) = 0x1000;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1f8)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x28;
    *((esp + 4)) = ".Copyright (C) 1998-2007 ABINIT group .  comes with ABSOLUTELY NO WARRANTY.";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8073c85;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x70;
    edx = *((ebp + 8));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x18;
    *((esp + 4)) = eax;
    eax = ebp - 0x6c;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x6c));
    eax = *((ebp - 0x70));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp - 0x6c));
    if (eax > 0) {
        eax = *((ebp - 0x70));
        if (eax == 0) {
            goto label_1;
        }
        free (eax);
    }
label_1:
    *((esp + 8)) = 0x23;
    *((esp + 4)) = 0x8073d14;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x3c;
    *((esp + 4)) = " It is free software, and you are welcome to redistribute it under certain conditions (GNU General Public License,";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x36;
    *((esp + 4)) = 0x8073d74;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x3d;
    *((esp + 4)) = " see ~abinit/COPYING or http://www.gnu.org/copyleft/gpl.txt).ABINIT-GW(a,a,a,/,a,/,a,/)";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = ebp - 0x78;
    edx = *((ebp + 8));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x18;
    *((esp + 4)) = eax;
    eax = ebp - 0x74;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x78));
    eax = *((ebp - 0x74));
    *((esp + 0xc)) = 0x8073de9;
    *((esp + 8)) = 9;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_compare_string ();
    al = (eax == 0) ? 1 : 0;
    ebx = (int32_t) al;
    eax = *((ebp - 0x74));
    if (eax > 0) {
        eax = *((ebp - 0x78));
        if (eax == 0) {
            goto label_2;
        }
        free (eax);
    }
label_2:
    if (ebx != 0) {
        *((ebp - 0x1f4)) = 0x8073c60;
        *((ebp - 0x1f0)) = 0x56;
        *((ebp - 0x1cc)) = 0x8073df2;
        *((ebp - 0x1c8)) = 0x11;
        *((ebp - 0x1fc)) = 0x1000;
        eax = *((ebp + 0x10));
        eax = *(eax);
        *((ebp - 0x1f8)) = eax;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073c85;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x80;
        edx = *((ebp + 8));
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 0x18;
        *((esp + 4)) = eax;
        eax = ebp - 0x7c;
        *(esp) = eax;
        gfortran_string_trim ();
        edx = *((ebp - 0x7c));
        eax = *((ebp - 0x80));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp - 0x7c));
        if (eax > 0) {
            eax = *((ebp - 0x80));
            if (eax == 0) {
                goto label_3;
            }
            free (eax);
        }
label_3:
        *((esp + 8)) = 0x21;
        *((esp + 4)) = " has originally been developed by";
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3a;
        *((esp + 4)) = " R.W. Godby, V. Olevano, G. Onida, L. Reining, M. Torrent,";
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2e;
        *((esp + 4)) = " and incorporated in ABINIT by G.M. Rignanese.OPTIC(a,a,a,/,a,/,a,/,a,/,a,/) Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : ";
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    eax = ebp - 0x88;
    edx = *((ebp + 8));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x18;
    *((esp + 4)) = eax;
    eax = ebp - 0x84;
    *(esp) = eax;
    gfortran_string_trim ();
    edx = *((ebp - 0x88));
    eax = *((ebp - 0x84));
    *((esp + 0xc)) = 0x8073e92;
    *((esp + 8)) = 5;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = gfortran_compare_string ();
    al = (eax == 0) ? 1 : 0;
    ebx = (int32_t) al;
    eax = *((ebp - 0x84));
    if (eax > 0) {
        eax = *((ebp - 0x88));
        if (eax == 0) {
            goto label_4;
        }
        free (eax);
    }
label_4:
    if (ebx != 0) {
        *((ebp - 0x1f4)) = 0x8073c60;
        *((ebp - 0x1f0)) = 0x5f;
        *((ebp - 0x1cc)) = 0x8073e97;
        *((ebp - 0x1c8)) = 0x19;
        *((ebp - 0x1fc)) = 0x1000;
        eax = *((ebp + 0x10));
        eax = *(eax);
        *((ebp - 0x1f8)) = eax;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x8073c85;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x90;
        edx = *((ebp + 8));
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 0x18;
        *((esp + 4)) = eax;
        eax = ebp - 0x8c;
        *(esp) = eax;
        gfortran_string_trim ();
        edx = *((ebp - 0x8c));
        eax = *((ebp - 0x90));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = *((ebp - 0x8c));
        if (eax > 0) {
            eax = *((ebp - 0x90));
            if (eax == 0) {
                goto label_5;
            }
            free (eax);
        }
label_5:
        *((esp + 8)) = 0x21;
        *((esp + 4)) = " has originally been developed by";
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x4b;
        *((esp + 4)) = 0x8073eb0;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x13;
        *((esp + 4)) = 0x8073efb;
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x55;
        *((esp + 4)) = " S. Sharma, J. K. Dewhurst and C. Ambrosch-Draxl, Phys. Rev. B 67, 165332 (2003), and";
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3f;
        *((esp + 4)) = " S. Sharma and C. Ambrosch-Draxl, Physica Scripta T 109 (2004).(a,/,a,/,a,/,a,/,a)";
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x1fc;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x1f4)) = 0x8073c60;
    *((ebp - 0x1f0)) = 0x67;
    *((ebp - 0x1cc)) = 0x8073fa7;
    *((ebp - 0x1c8)) = 0x13;
    *((ebp - 0x1fc)) = 0x1000;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1f8)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x3d;
    *((esp + 4)) = " ABINIT is a project of the Universite Catholique de Louvain,";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x54;
    *((esp + 4)) = " Corning Inc. and other collaborators, see ~abinit/doc/developers/contributors.txt . Please read ~abinit/doc/users/acknowledgments.html for suggested";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x41;
    *((esp + 4)) = 0x8074050;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x26;
    *((esp + 4)) = " acknowledgments of the ABINIT effort.";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x32;
    *((esp + 4)) = " For more information, see http://www.abinit.org .(/,a,a,1x,i2,1x,a,1x,i4,a).Starting date : .";
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xa0)) = 0x109;
    *((ebp - 0x98)) = 1;
    *((ebp - 0x94)) = 8;
    *((ebp - 0x9c)) = 1;
    eax = ebp - 0x5c;
    *((ebp - 0xa8)) = eax;
    *((ebp - 0xa4)) = 0xffffffff;
    *((esp + 0x18)) = 5;
    *((esp + 0x14)) = 0xa;
    *((esp + 0x10)) = 8;
    eax = ebp - 0xa8;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x3b;
    *((esp + 8)) = eax;
    eax = ebp - 0x36;
    *((esp + 4)) = eax;
    eax = ebp - 0x2c;
    *(esp) = eax;
    gfortran_date_and_time ();
    eax = *((ebp - 0x5c));
    *((ebp - 0x60)) = eax;
    eax = *((ebp - 0x58));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0x54));
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0xc)) > 2) {
        eax = *((ebp - 0x60));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0xc));
        eax++;
        *((ebp - 0x14)) = eax;
    } else {
        eax = *((ebp - 0x60));
        eax--;
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0xc));
        eax += 0xd;
        *((ebp - 0x14)) = eax;
    }
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x8074120);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x20a));
    ah = 0xc;
    *((ebp - 0x20c)) = ax;
    *((ebp - 0x210)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0x210));
    *(fp_stack--) = *((ebp - 0x14));
    *(fp_stack--) = *(0x8074128);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((ebp - 0x210)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x210));
    edx += eax;
    eax = *((ebp - 0x24));
    eax = edx + eax;
    eax += 0x1a42a3;
    *((ebp - 0x18)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x8074130);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((ebp - 0x1c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x18));
    eax += 2;
    edx = eax;
    edx -= *((ebp - 0x1c));
    *(fp_stack--) = *((ebp - 0x1c));
    *(fp_stack--) = *(0x8074138);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((ebp - 0x210)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x210));
    eax = edx + eax;
    *((ebp - 0x18)) = eax;
    ecx = *((ebp - 0x18));
    edx = 0x92492493;
    eax = ecx;
    edx:eax = eax * edx;
    eax = edx + ecx;
    edx = eax;
    edx >>= 2;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax <<= 3;
    eax -= edx;
    edx = ecx;
    edx -= eax;
    eax = edx + 1;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x1f4)) = 0x8073c60;
    *((ebp - 0x1f0)) = 0x7e;
    *((ebp - 0x1cc)) = 0x80740ee;
    *((ebp - 0x1c8)) = 0x1a;
    *((ebp - 0x1fc)) = 0x1000;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1f8)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8074108;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp - 0x20));
    edx = eax - 1;
    eax = edx;
    eax += eax;
    eax += edx;
    eax += obj.daynam.1506;
    *((esp + 8)) = 3;
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x24;
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = *((ebp - 0xc));
    edx = eax - 1;
    eax = edx;
    eax += eax;
    eax += edx;
    eax += obj.monnam.1558;
    *((esp + 8)) = 3;
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x60;
    *((esp + 4)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8074119;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0x1f4)) = 0x8073c60;
    *((ebp - 0x1f0)) = 0x80;
    *((ebp - 0x1fc)) = 0x80;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x1f8)) = eax;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8073c85;
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x1fc;
    *(esp) = eax;
    gfortran_st_write_done ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x805caa0 */
#include <stdint.h>
 
int32_t dbg_hdr_io_wfftype (void) {
    integer(kind=4) fform;
    hdr_type hdr;
    integer(kind=4) rdwr;
    wffile_type wff;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void hdr_io_wfftype(integer(kind=4) fform,hdr_type hdr,integer(kind=4) rdwr,wffile_type wff); */
    eax = *((ebp + 0x14));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x14));
        eax = *((eax + 4));
        if (eax == -1) {
            eax = *((ebp + 0x14));
            edx = *((eax + 0x94));
            eax = *((ebp + 0x14));
            eax = *((eax + 0x98));
            if (edx == eax) {
                goto label_0;
            }
        }
        eax = *((ebp + 0x14));
        eax = *((eax + 4));
        if (eax != 1) {
            goto label_1;
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0x94));
        eax = *((ebp + 0x14));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_1;
        }
    }
label_0:
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    hdr_io_int_ ();
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x805acd4 */
#include <stdint.h>
 
int32_t dbg_hdr_clean (void) {
    integer(kind=4) iatom;
    hdr_type hdr;
    int32_t var_4h;
    int32_t var_8h;
    /* void hdr_clean(hdr_type hdr); */
    eax = *((ebp + 8));
    eax = *((eax + 0x4c));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 59 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x4c));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x4c)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x234));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 60 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x234));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x234)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x64));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 61 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x64));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x64)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x7c));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 62 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x7c));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x7c)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x94));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 63 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x94));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x94)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x258));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 64 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x258));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x258)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0xac));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 65 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0xac));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0xac)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0xc4));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 66 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0xc4));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0xc4)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0xdc));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 67 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0xdc));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0xdc)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0xf4));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 68 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0xf4));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0xf4)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x10c));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 69 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x10c));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x10c)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x124));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 70 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x124));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x124)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x13c));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 71 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x13c));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x13c)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x320));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 72 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x320));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x320)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x270));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 73 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x270));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x270)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x16c));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 74 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x16c));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x16c)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x294));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 75 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x294));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x294)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x2ac));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 76 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x2ac));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x2ac)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x2d0));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 77 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x2d0));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x2d0)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x2e8));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 78 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x2e8));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x2e8)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x300));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 79 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x300));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x300)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 0x3c));
    if (eax != 1) {
        goto label_0;
    }
    eax = *((ebp + 8));
    ebx = *((eax + 0x14));
    *((ebp - 0xc)) = 1;
    if (*((ebp - 0xc)) > ebx) {
        goto label_1;
    }
    while (eax == 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0x18;
        eax = *(eax);
        if (eax == 0) {
            *((esp + 8)) = 0x8071fe0;
            *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
            *(esp) = "At line 82 of file hdr_clean.F90";
            gfortran_runtime_error_at ();
        }
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0x18;
        eax = *(eax);
        free (eax);
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0x18;
        *(eax) = 0;
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0xc0;
        eax = *(eax);
        if (eax == 0) {
            *((esp + 8)) = 0x8071fe0;
            *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
            *(esp) = "At line 83 of file hdr_clean.F90";
            gfortran_runtime_error_at ();
        }
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0xc0;
        eax = *(eax);
        free (eax);
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0xc0;
        *(eax) = 0;
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0x48;
        eax = *(eax);
        if (eax == 0) {
            *((esp + 8)) = 0x8071fe0;
            *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
            *(esp) = "At line 84 of file hdr_clean.F90";
            gfortran_runtime_error_at ();
        }
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0x48;
        eax = *(eax);
        free (eax);
        eax = *((ebp + 8));
        eax = *((eax + 0x338));
        edx = *((eax + 0x338));
        eax = *((ebp + 8));
        eax = *((eax + 0x344));
        ecx = *((eax + 0x344));
        ecx *= *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = *((eax + 0x33c));
        eax = ecx + eax;
        eax <<= 3;
        ecx = eax;
        ecx <<= 5;
        eax += ecx;
        eax += edx;
        eax += 0x48;
        *(eax) = 0;
        al = (*((ebp - 0xc)) == ebx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0xc))++;
    }
label_1:
    eax = *((ebp + 8));
    eax = *((eax + 0x338));
    if (eax == 0) {
        *((esp + 8)) = 0x8071fe0;
        *((esp + 4)) = "Attempt to DEALLOCATE unallocated '%s';
        *(esp) = "At line 86 of file hdr_clean.F90";
        gfortran_runtime_error_at ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x338));
    free (eax);
    eax = *((ebp + 8));
    *((eax + 0x338)) = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806d008 */
#include <stdint.h>
 
int32_t dbg_matr3inv (void) {
    real(kind=8) dd;
    real(kind=8) t1;
    real(kind=8) t2;
    real(kind=8) t3;
    real(kind=8)[4][4] aa;
    real(kind=8)[4][4] ait;
    /* void matr3inv(real(kind=8)[4][4] aa,real(kind=8)[4][4] ait); */
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x20));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x40));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x28));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x38));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x28));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x30));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x18));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x40));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x18));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x38));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x20));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x30));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    fp_stack[0] *= *((ebp - 0x18));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 8));
    fp_stack[0] *= *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x10));
    fp_stack[0] *= *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *(eax) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x10));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x38));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 8));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x40));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x40));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x10));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x30));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x20)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 8));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x30));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x38));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x28)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 8));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x28));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x10));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x20));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x30)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x10));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x18));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x28));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x38)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x20));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 8));
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + 0x18));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= *((ebp - 0x20));
    eax = *((ebp + 0xc));
    *((eax + 0x40)) = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806b428 */
#include <stdint.h>
 
int32_t dbg_wffreadskiprec (void) {
    integer(kind=4) ierr;
    integer(kind=4) nrec;
    wffile_type wff;
    int32_t var_4h;
    int32_t var_8h;
    /* void wffreadskiprec(integer(kind=4) ierr,integer(kind=4) nrec,wffile_type wff); */
    eax = *((ebp + 8));
    *(eax) = 0;
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
        if (eax != -1) {
            goto label_0;
        }
        eax = *((ebp + 0x10));
        edx = *((eax + 0x94));
        eax = *((ebp + 0x10));
        eax = *((eax + 0x98));
        if (edx != eax) {
            goto label_0;
        }
    }
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    mvrecord_ ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x805c23c */
#include <stdint.h>
 
int32_t dbg_pmat2cart (void) {
    int32_t var_178h;
    int32_t var_174h;
    int32_t var_170h;
    int32_t var_16ch;
    int32_t var_168h;
    int32_t var_164h;
    int32_t var_160h;
    int32_t var_15ch;
    int32_t var_158h;
    int32_t var_154h;
    int32_t var_150h;
    int32_t var_14ch;
    int32_t var_114h;
    int32_t var_110h;
    int32_t var_10ch;
    int32_t var_108h;
    int32_t var_104h;
    int32_t var_100h;
    int32_t var_fch;
    int32_t var_f8h;
    int32_t var_f4h;
    int32_t var_f0h;
    int32_t var_ech;
    int32_t var_e8h;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    real(kind=8)[4][4] rprim;
    integer(kind=4) ubound.0;
    integer(kind=4) ubound.1;
    integer(kind=4) ubound.3;
    integer(kind=4) ubound.5;
    integer(kind=4) ubound.9;
    integer(kind=4) ubound.10;
    integer(kind=4) ubound.12;
    integer(kind=4) ubound.14;
    integer(kind=4) ubound.18;
    integer(kind=4) ubound.19;
    integer(kind=4) ubound.21;
    integer(kind=4) ubound.23;
    integer(kind=4) iband1;
    integer(kind=4) iband2;
    integer(kind=4) ii;
    integer(kind=4) ikpt;
    integer(kind=4) isppol;
    real(kind=8) norm;
    integer(kind=4) ubound.27;
    integer(kind=4) ubound.28;
    integer(kind=4) ubound.30;
    integer(kind=4) ubound.33;
    real(kind=8)[3][5][5][5][5] eigen11;
    real(kind=8)[3][5][5][5][5] eigen12;
    real(kind=8)[3][5][5][5][5] eigen13;
    integer(kind=4) mband;
    integer(kind=4) nkpt;
    integer(kind=4) nsppol;
    complex(kind=8)[4][4][4][4][4] pmat;
    real(kind=8)[4][4] rprimd;
    /* void pmat2cart(real(kind=8)[3][5][5][5][5] eigen11,real(kind=8)[3][5][5][5][5] eigen12,real(kind=8)[3][5][5][5][5] eigen13,integer(kind=4) mband,integer(kind=4) nkpt,integer(kind=4) nsppol,complex(kind=8)[4][4][4][4][4] pmat,real(kind=8)[4][4] rprimd); */
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x20));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xf4)) = ecx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0xf4));
    eax *= *((ebp - 0x1c));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xf0)) = ecx;
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0xf0));
    eax *= *((ebp - 0x18));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xec)) = ecx;
    eax = *((ebp - 0xec));
    eax += eax;
    edx = *((ebp - 0xec));
    edx = eax + edx;
    eax = 0;
    ecx = eax;
    __asm ("cmovns ecx, edx");
    *((ebp - 0xe8)) = ecx;
    eax = *((ebp + 0x1c));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0xe8));
    eax *= *((ebp - 0x14));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 7");
    eax <<= 7;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp - 0xf4));
    eax = ~eax;
    eax -= *((ebp - 0xf0));
    eax -= *((ebp - 0xec));
    edx = eax;
    edx -= *((ebp - 0xe8));
    *((ebp - 0x108)) = edx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x6c)) = eax;
    eax = *((ebp - 0x6c));
    edx = eax + eax;
    eax = 0;
    ecx = eax;
    __asm ("cmovns ecx, edx");
    *((ebp - 0xe4)) = ecx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x68)) = eax;
    eax = *((ebp - 0xe4));
    eax *= *((ebp - 0x68));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xe0)) = ecx;
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x64)) = eax;
    eax = *((ebp - 0xe0));
    eax *= *((ebp - 0x64));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xdc)) = ecx;
    eax = *((ebp + 0x1c));
    eax = *(eax);
    *((ebp - 0x60)) = eax;
    eax = *((ebp - 0xdc));
    eax *= *((ebp - 0x60));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x150)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x14c)) = ecx;
    eax = *((ebp - 0x150));
    edx = *((ebp - 0x14c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x158)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x154)) = ecx;
    eax = *((ebp - 0x158));
    edx = *((ebp - 0x154));
    eax = 0xfffffffd;
    eax -= *((ebp - 0xe4));
    eax -= *((ebp - 0xe0));
    edx = eax;
    edx -= *((ebp - 0xdc));
    *((ebp - 0x114)) = edx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x5c)) = eax;
    eax = *((ebp - 0x5c));
    edx = eax + eax;
    eax = 0;
    ecx = eax;
    __asm ("cmovns ecx, edx");
    *((ebp - 0xd8)) = ecx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x58)) = eax;
    eax = *((ebp - 0xd8));
    eax *= *((ebp - 0x58));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xd4)) = ecx;
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x54)) = eax;
    eax = *((ebp - 0xd4));
    eax *= *((ebp - 0x54));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xd0)) = ecx;
    eax = *((ebp + 0x1c));
    eax = *(eax);
    *((ebp - 0x50)) = eax;
    eax = *((ebp - 0xd0));
    eax *= *((ebp - 0x50));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x160)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x15c)) = ecx;
    eax = *((ebp - 0x160));
    edx = *((ebp - 0x15c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x168)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x164)) = ecx;
    eax = *((ebp - 0x168));
    edx = *((ebp - 0x164));
    eax = 0xfffffffd;
    eax -= *((ebp - 0xd8));
    eax -= *((ebp - 0xd4));
    edx = eax;
    edx -= *((ebp - 0xd0));
    *((ebp - 0x110)) = edx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x4c)) = eax;
    eax = *((ebp - 0x4c));
    edx = eax + eax;
    eax = 0;
    ecx = eax;
    __asm ("cmovns ecx, edx");
    *((ebp - 0xcc)) = ecx;
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0x48)) = eax;
    eax = *((ebp - 0xcc));
    eax *= *((ebp - 0x48));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xc8)) = ecx;
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0xc8));
    eax *= *((ebp - 0x44));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xc4)) = ecx;
    eax = *((ebp + 0x1c));
    eax = *(eax);
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0xc4));
    eax *= *((ebp - 0x40));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x170)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x16c)) = ecx;
    eax = *((ebp - 0x170));
    edx = *((ebp - 0x16c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0x178)) = ecx;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0x174)) = ecx;
    eax = *((ebp - 0x178));
    edx = *((ebp - 0x174));
    eax = 0xfffffffd;
    eax -= *((ebp - 0xcc));
    eax -= *((ebp - 0xc8));
    edx = eax;
    edx -= *((ebp - 0xc4));
    *((ebp - 0x10c)) = edx;
    *((ebp - 0x34)) = 1;
    if (*((ebp - 0x34)) > 3) {
        goto label_5;
    }
    goto label_6;
label_0:
label_6:
    eax = *((ebp - 0x34));
    edx = eax - 1;
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp + 0x24));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0x34));
    edx = eax - 1;
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp + 0x24));
    *(fp_stack--) = *((eax + edx*8));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x34));
    eax += eax;
    eax += edx;
    edx = eax - 2;
    eax = *((ebp + 0x24));
    *(fp_stack--) = *((eax + edx*8));
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x34));
    eax += eax;
    eax += edx;
    edx = eax - 2;
    eax = *((ebp + 0x24));
    *(fp_stack--) = *((eax + edx*8));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x34));
    edx = eax + 1;
    eax = edx;
    eax += eax;
    eax += edx;
    edx = eax - 4;
    eax = *((ebp + 0x24));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0x34));
    edx = eax + 1;
    eax = edx;
    eax += eax;
    eax += edx;
    edx = eax - 4;
    eax = *((ebp + 0x24));
    *(fp_stack--) = *((eax + edx*8));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0x34));
    *(fp_stack--) = *((ebp - 0x28));
    ecx = *((ebp - 0x34));
    eax = edx;
    eax += eax;
    eax += edx;
    edi = eax - 4;
    eax = ecx;
    eax += eax;
    eax += ecx;
    esi = eax - 4;
    ecx = 1;
    do {
        if (ecx > 3) {
            goto label_7;
        }
        ebx = ecx + esi;
        edx = ecx + edi;
        eax = *((ebp + 0x24));
        *(fp_stack--) = *((eax + edx*8));
        fp_stack[0] /= fp_stack[1];
        *((ebp + ebx*8 - 0xb8)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (1);
label_7:
    fp_stack++;
    al = (*((ebp - 0x34)) == 3) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x34))++;
    if (eax == 0) {
        goto label_0;
    }
label_5:
    eax = *((ebp + 0x1c));
    eax = *(eax);
    *((ebp - 0x104)) = eax;
    *((ebp - 0x2c)) = 1;
    ecx = *((ebp - 0x104));
    if (*((ebp - 0x2c)) > ecx) {
        goto label_8;
    }
    goto label_9;
label_4:
label_9:
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x100)) = eax;
    *((ebp - 0x30)) = 1;
    eax = *((ebp - 0x100));
    if (*((ebp - 0x30)) > eax) {
        goto label_10;
    }
    goto label_11;
label_3:
label_11:
    eax = *((ebp + 0x14));
    eax = *(eax);
    *((ebp - 0xfc)) = eax;
    *((ebp - 0x3c)) = 1;
    edx = *((ebp - 0xfc));
    if (*((ebp - 0x3c)) > edx) {
        goto label_12;
    }
    goto label_13;
label_2:
label_13:
    eax = *((ebp + 0x14));
    edi = *(eax);
    *((ebp - 0x38)) = 1;
    if (*((ebp - 0x38)) > edi) {
        goto label_14;
    }
    goto label_15;
label_1:
label_15:
    esi = *((ebp - 0x108));
    eax = *((ebp - 0x38));
    edx = eax + eax;
    eax = *((ebp - 0xe4));
    eax *= *((ebp - 0x3c));
    eax = edx + eax;
    ecx = eax + 1;
    edx = *((ebp - 0xdc));
    edx *= *((ebp - 0x2c));
    eax = *((ebp - 0xe0));
    eax *= *((ebp - 0x30));
    eax = edx + eax;
    eax = ecx + eax;
    edx = *((ebp - 0x114));
    edx = eax + edx;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0x38));
    eax++;
    edx = eax + eax;
    eax = *((ebp - 0xe4));
    eax *= *((ebp - 0x3c));
    ecx = edx + eax;
    edx = *((ebp - 0xdc));
    edx *= *((ebp - 0x2c));
    eax = *((ebp - 0xe0));
    eax *= *((ebp - 0x30));
    eax = edx + eax;
    eax = ecx + eax;
    edx = *((ebp - 0x114));
    edx = eax + edx;
    eax = *((ebp + 8));
    *(fp_stack--) = *((eax + edx*8));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((ebp - 0x140)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x148)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x38));
    edx = eax + eax;
    eax = *((ebp - 0xd8));
    eax *= *((ebp - 0x3c));
    eax = edx + eax;
    ecx = eax + 1;
    edx = *((ebp - 0xd0));
    edx *= *((ebp - 0x2c));
    eax = *((ebp - 0xd4));
    eax *= *((ebp - 0x30));
    eax = edx + eax;
    eax = ecx + eax;
    edx = *((ebp - 0x110));
    edx = eax + edx;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0x38));
    eax++;
    edx = eax + eax;
    eax = *((ebp - 0xd8));
    eax *= *((ebp - 0x3c));
    ecx = edx + eax;
    edx = *((ebp - 0xd0));
    edx *= *((ebp - 0x2c));
    eax = *((ebp - 0xd4));
    eax *= *((ebp - 0x30));
    eax = edx + eax;
    eax = ecx + eax;
    edx = *((ebp - 0x110));
    edx = eax + edx;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *((eax + edx*8));
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((ebp - 0x130)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x138)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x38));
    edx = eax + eax;
    eax = *((ebp - 0xcc));
    eax *= *((ebp - 0x3c));
    eax = edx + eax;
    ecx = eax + 1;
    edx = *((ebp - 0xc4));
    edx *= *((ebp - 0x2c));
    eax = *((ebp - 0xc8));
    eax *= *((ebp - 0x30));
    eax = edx + eax;
    eax = ecx + eax;
    edx = *((ebp - 0x10c));
    edx = eax + edx;
    eax = *((ebp + 0x10));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0x38));
    eax++;
    edx = eax + eax;
    eax = *((ebp - 0xcc));
    eax *= *((ebp - 0x3c));
    ecx = edx + eax;
    edx = *((ebp - 0xc4));
    edx *= *((ebp - 0x2c));
    eax = *((ebp - 0xc8));
    eax *= *((ebp - 0x30));
    eax = edx + eax;
    eax = ecx + eax;
    edx = *((ebp - 0x10c));
    edx = eax + edx;
    eax = *((ebp + 0x10));
    *(fp_stack--) = *((eax + edx*8));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    *((ebp - 0x120)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x128)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0x38));
    eax = *((ebp - 0x3c));
    ecx = *((ebp - 0x30));
    ebx = *((ebp - 0x2c));
    edx = esi + edx;
    eax *= *((ebp - 0xf4));
    edx = eax + edx;
    eax = *((ebp - 0xf0));
    eax *= ecx;
    edx = eax + edx;
    eax = *((ebp - 0xe8));
    eax *= ebx;
    eax += edx;
    *((ebp - 0xf8)) = eax;
    ebx = *((ebp - 0xec));
    ecx = 1;
    do {
        if (ecx > 3) {
            goto label_16;
        }
        eax = ecx;
        eax *= ebx;
        esi = *((ebp - 0xf8));
        esi = eax + esi;
        eax = ecx - 1;
        *(fp_stack--) = *((ebp + eax*8 - 0xb8));
        *(fp_stack--) = 0.0;
        *(fp_stack--) = *((ebp - 0x140));
        *(fp_stack--) = *((ebp - 0x148));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_tmp_3 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_4 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_5 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        fp_stack[3] -= fp_stack[0];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = ecx + 2;
        *(fp_stack--) = *((ebp + eax*8 - 0xb8));
        *(fp_stack--) = 0.0;
        *(fp_stack--) = *((ebp - 0x130));
        *(fp_stack--) = *((ebp - 0x138));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_tmp_6 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_7 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_7;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_8 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_8;
        fp_stack[0] -= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = ecx + 5;
        *(fp_stack--) = *((ebp + eax*8 - 0xb8));
        *(fp_stack--) = 0.0;
        *(fp_stack--) = *((ebp - 0x120));
        *(fp_stack--) = *((ebp - 0x128));
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_tmp_9 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_9;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_10 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_10;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_11 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_11;
        fp_stack[0] -= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_12 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_12;
        edx = *((ebp + 0x20));
        eax = esi;
        eax <<= 4;
        *((eax + edx)) = fp_stack[0];
        fp_stack--;
        *((eax + edx + 8)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (1);
label_16:
    al = (*((ebp - 0x38)) == edi) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x38))++;
    if (eax == 0) {
        goto label_1;
    }
label_14:
    ecx = *((ebp - 0xfc));
    al = (*((ebp - 0x3c)) == ecx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x3c))++;
    if (eax == 0) {
        goto label_2;
    }
label_12:
    eax = *((ebp - 0x100));
    al = (*((ebp - 0x30)) == eax) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x30))++;
    if (eax == 0) {
        goto label_3;
    }
label_10:
    edx = *((ebp - 0x104));
    al = (*((ebp - 0x2c)) == edx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x2c))++;
    if (eax == 0) {
        goto label_4;
    }
label_8:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806b578 */
#include <stdint.h>
 
int32_t dbg_metric (void) {
    int32_t var_3ech;
    int32_t var_3e8h;
    char * var_3e4h;
    int32_t var_3e0h;
    int32_t var_3c0h;
    char * var_3bch;
    int32_t var_3b8h;
    int32_t var_3ach;
    int32_t var_3a8h;
    int32_t var_298h;
    int32_t var_294h;
    int32_t var_290h;
    int32_t var_28ch;
    int32_t var_288h;
    int32_t var_284h;
    int32_t var_280h;
    int32_t var_278h;
    int32_t var_270h;
    int32_t var_268h;
    int32_t var_264h;
    int32_t var_260h;
    int32_t var_25ch;
    int32_t var_258h;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ch;
    int32_t var_248h;
    int32_t var_244h;
    int32_t var_240h;
    int32_t var_23ch;
    int32_t var_238h;
    int32_t var_234h;
    int32_t var_230h;
    int32_t var_22ch;
    int32_t var_228h;
    int32_t var_224h;
    integer(kind=4) nu;
    int32_t var_21ch;
    real(kind=8)[4] angle;
    integer(kind=4) ii;
    real(kind=8)[4][4] gmet;
    real(kind=8)[4][4] gprimd;
    integer(kind=4) iout;
    real(kind=8)[4][4] rmet;
    real(kind=8)[4][4] rprimd;
    real(kind=8) ucvol;
    char * var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    /* void metric(real(kind=8)[4][4] gmet,real(kind=8)[4][4] gprimd,integer(kind=4) iout,real(kind=8)[4][4] rmet,real(kind=8)[4][4] rprimd,real(kind=8) ucvol); */
    eax = *((ebp + 0x18));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x20));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x40));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x28));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x38));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 8));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x28));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x30));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x18));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x40));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x10));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x18));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x38));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x20));
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + 0x30));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x1c));
    *(eax) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x1c));
    *(fp_stack--) = *(eax);
    fp_stack[0] = abs(fp_stack[0]);
    *(fp_stack--) = *(0x8073800);
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0x3e4)) = "metric.F90";
        *((ebp - 0x3e0)) = 0x67;
        eax = ebp - 0x21c;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(8a)\n metric : ERROR -";
        *((ebp - 0x3b8)) = 4;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x8073500;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x39;
        *((esp + 4)) = "  Input rprim and acell gives vanishing unit cell volume.";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x44;
        *((esp + 4)) = "  This indicates linear dependency between primitive lattice vectors  Action : correct either rprim or acell in input file.COLL";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x37;
        *((esp + 4)) = 0x8073594;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x80735cb;
        eax = ebp - 0x21c;
        *((esp + 4)) = eax;
        wrtout_ (0x80735d0);
        *((esp + 4)) = 4;
        *(esp) = 0x80735cb;
        leave_new_ ();
    }
    eax = *((ebp + 0x1c));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0x3e4)) = "metric.F90";
        *((ebp - 0x3e0)) = 0x76;
        eax = ebp - 0x21c;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = "(5a,3(a,3es16.6,a),7a)";
        *((ebp - 0x3b8)) = 0x16;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x11;
        *((esp + 4)) = 0x8073500;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "  Current rprimd gives negative (R1xR2).R3 .   Rprimd =          ";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xa;
        *((esp + 4)) = 0x8073619;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((ebp - 0x230)) = 0x219;
        *((ebp - 0x228)) = 1;
        *((ebp - 0x224)) = 3;
        *((ebp - 0x22c)) = 1;
        eax = *((ebp + 0x18));
        *((ebp - 0x238)) = eax;
        *((ebp - 0x234)) = 0xfffffffc;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x238;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xa;
        *((esp + 4)) = 0x8073623;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((ebp - 0x248)) = 0x219;
        *((ebp - 0x240)) = 1;
        *((ebp - 0x23c)) = 3;
        *((ebp - 0x244)) = 1;
        eax = *((ebp + 0x18));
        eax += 0x18;
        *((ebp - 0x250)) = eax;
        *((ebp - 0x24c)) = 0xfffffffc;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x250;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xa;
        *((esp + 4)) = 0x8073623;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((ebp - 0x260)) = 0x219;
        *((ebp - 0x258)) = 1;
        *((ebp - 0x254)) = 3;
        *((ebp - 0x25c)) = 1;
        eax = *((ebp + 0x18));
        eax += 0x30;
        *((ebp - 0x268)) = eax;
        *((ebp - 0x264)) = 0xfffffffc;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x268;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3d;
        *((esp + 4)) = "  Action : if the cell size and shape are fixed (optcell==0),";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x2b;
        *((esp + 4)) = "   exchange two of the input rprim vectors;";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x3e;
        *((esp + 4)) = "   if you are optimizing the cell size and shape (optcell/=0),";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80734ff;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0x49;
        *((esp + 4)) = "   maybe the move was too large, and you might try to decrease strprecon.(a,a) Real(R)+Recip(G) space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):";
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x80735cb;
        eax = ebp - 0x21c;
        *((esp + 4)) = eax;
        wrtout_ (0x80735d0);
        *((esp + 4)) = 4;
        *(esp) = 0x80735cb;
        leave_new_ ();
    }
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 0x18));
    *(esp) = eax;
    matr3inv_ ();
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax < 0) {
        goto label_3;
    }
    *((ebp - 0x3e4)) = "metric.F90";
    *((ebp - 0x3e0)) = 0x81;
    eax = ebp - 0x21c;
    *((ebp - 0x3ac)) = eax;
    *((ebp - 0x3a8)) = 0x1f4;
    *((ebp - 0x3c0)) = 0;
    *((ebp - 0x3e8)) = 0;
    *((ebp - 0x3bc)) = 0x8073725;
    *((ebp - 0x3b8)) = 5;
    *((ebp - 0x3ec)) = 0x5000;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x12;
    *((esp + 4)) = 0x807372a;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x3e;
    *((esp + 4)) = 0x807373c;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x80735cb;
    eax = ebp - 0x21c;
    *((esp + 4)) = eax;
    eax = *((ebp + 0x10));
    wrtout_ (eax);
    *((ebp - 0x220)) = 1;
    eax = *((ebp - 0x220));
    if (eax > 3) {
        goto label_4;
    }
    goto label_5;
label_0:
label_5:
    *((ebp - 0x3e4)) = "metric.F90";
    *((ebp - 0x3e0)) = 0x86;
    eax = ebp - 0x21c;
    *((ebp - 0x3ac)) = eax;
    *((ebp - 0x3a8)) = 0x1f4;
    *((ebp - 0x3c0)) = 0;
    *((ebp - 0x3e8)) = 0;
    *((ebp - 0x3bc)) = "(1x,a,i1,a,3f11.7,2x,a,i1,a,3f11.7)R()=G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees";
    *((ebp - 0x3b8)) = 0x23;
    *((ebp - 0x3ec)) = 0x5000;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x807379f;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x220;
    *((esp + 4)) = eax;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x80737a1;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    edx = *((ebp - 0x220));
    eax = *((ebp - 0x220));
    eax += eax;
    eax += edx;
    esi = eax - 4;
    ebx = 1;
    do {
        if (ebx > 3) {
            goto label_6;
        }
        edx = ebx + esi;
        eax = *((ebp + 0x18));
        *(fp_stack--) = *((eax + edx*8));
        *(fp_stack--) = *(0x8073808);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x270)) = fp_stack[0];
        fp_stack--;
        *((esp + 8)) = 8;
        eax = ebp - 0x270;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_real ();
        ebx++;
    } while (1);
label_6:
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x80737a3;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = ebp - 0x220;
    *((esp + 4)) = eax;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x80737a1;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    edx = *((ebp - 0x220));
    eax = *((ebp - 0x220));
    eax += eax;
    eax += edx;
    esi = eax - 4;
    ebx = 1;
    do {
        if (ebx > 3) {
            goto label_7;
        }
        edx = ebx + esi;
        eax = *((ebp + 0xc));
        *(fp_stack--) = *((eax + edx*8));
        *(fp_stack--) = *(0x8073808);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x278)) = fp_stack[0];
        fp_stack--;
        *((esp + 8)) = 8;
        eax = ebp - 0x278;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_real ();
        ebx++;
    } while (1);
label_7:
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x80735cb;
    eax = ebp - 0x21c;
    *((esp + 4)) = eax;
    eax = *((ebp + 0x10));
    wrtout_ (eax);
    eax = *((ebp - 0x220));
    al = (eax == 3) ? 1 : 0;
    eax = (int32_t) al;
    edx = *((ebp - 0x220));
    edx++;
    *((ebp - 0x220)) = edx;
    if (eax == 0) {
        goto label_0;
    }
label_4:
    *((ebp - 0x3e4)) = "metric.F90";
    *((ebp - 0x3e0)) = 0x8a;
    eax = ebp - 0x21c;
    *((ebp - 0x3ac)) = eax;
    *((ebp - 0x3a8)) = 0x1f4;
    *((ebp - 0x3c0)) = 0;
    *((ebp - 0x3e8)) = 0;
    *((ebp - 0x3bc)) = 0x80737a5;
    *((ebp - 0x3b8)) = 0xe;
    *((ebp - 0x3ec)) = 0x5000;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x18;
    *((esp + 4)) = 0x80737b3;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = *((ebp + 0x1c));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8073808);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x280)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0x280;
    *((esp + 4)) = eax;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 7;
    *((esp + 4)) = 0x80737cb;
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x3ec;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x80735cb;
    eax = ebp - 0x21c;
    *((esp + 4)) = eax;
    eax = *((ebp + 0x10));
    wrtout_ (eax);
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x80735cb;
    eax = ebp - 0x21c;
    *((esp + 4)) = eax;
    wrtout_ (0x80735d0);
label_3:
    *((ebp - 0xc)) = 1;
    if (*((ebp - 0xc)) > 3) {
        goto label_8;
    }
    goto label_9;
label_1:
label_9:
    eax = *((ebp - 0xc));
    edx = eax - 1;
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + edx*8));
    edx = *((ebp - 0xc));
    eax = *((ebp - 0xc));
    eax += eax;
    eax += edx;
    edx = eax - 2;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0xc));
    edx = eax + 1;
    eax = edx;
    eax += eax;
    eax += edx;
    edx = eax - 4;
    eax = *((ebp + 0x18));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0xc));
    esi = eax - 4;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_10;
        }
        edx = eax;
        edx += edx;
        edx += eax;
        ebx = edx + esi;
        ecx = eax - 1;
        edx = ecx;
        edx += edx;
        ecx = edx + ecx;
        edx = *((ebp + 0x18));
        *(fp_stack--) = *((edx + ecx*8));
        fp_stack[0] *= fp_stack[3];
        edx = eax;
        edx += edx;
        edx += eax;
        ecx = edx - 2;
        edx = *((ebp + 0x18));
        *(fp_stack--) = *((edx + ecx*8));
        fp_stack[0] *= fp_stack[3];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        edx = eax;
        edx += edx;
        edx += eax;
        ecx = edx - 1;
        edx = *((ebp + 0x18));
        *(fp_stack--) = *((edx + ecx*8));
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        edx = *((ebp + 0x14));
        *((edx + ebx*8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_10:
    fp_stack++;
    fp_stack++;
    fp_stack++;
    al = (*((ebp - 0xc)) == 3) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0xc))++;
    if (eax == 0) {
        goto label_1;
    }
label_8:
    *((ebp - 0xc)) = 1;
    if (*((ebp - 0xc)) > 3) {
        goto label_11;
    }
    goto label_12;
label_2:
label_12:
    eax = *((ebp - 0xc));
    edx = eax - 1;
    eax = edx;
    eax += eax;
    edx = eax + edx;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *((eax + edx*8));
    edx = *((ebp - 0xc));
    eax = *((ebp - 0xc));
    eax += eax;
    eax += edx;
    edx = eax - 2;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0xc));
    edx = eax + 1;
    eax = edx;
    eax += eax;
    eax += edx;
    edx = eax - 4;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *((eax + edx*8));
    eax = *((ebp - 0xc));
    esi = eax - 4;
    eax = 1;
    do {
        if (eax > 3) {
            goto label_13;
        }
        edx = eax;
        edx += edx;
        edx += eax;
        ebx = edx + esi;
        ecx = eax - 1;
        edx = ecx;
        edx += edx;
        ecx = edx + ecx;
        edx = *((ebp + 0xc));
        *(fp_stack--) = *((edx + ecx*8));
        fp_stack[0] *= fp_stack[3];
        edx = eax;
        edx += edx;
        edx += eax;
        ecx = edx - 2;
        edx = *((ebp + 0xc));
        *(fp_stack--) = *((edx + ecx*8));
        fp_stack[0] *= fp_stack[3];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        edx = eax;
        edx += edx;
        edx += eax;
        ecx = edx - 1;
        edx = *((ebp + 0xc));
        *(fp_stack--) = *((edx + ecx*8));
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        edx = *((ebp + 8));
        *((edx + ebx*8)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (1);
label_13:
    fp_stack++;
    fp_stack++;
    fp_stack++;
    al = (*((ebp - 0xc)) == 3) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0xc))++;
    if (eax == 0) {
        goto label_2;
    }
label_11:
    eax = *((ebp + 0x10));
    eax = *(eax);
    if (eax >= 0) {
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x38));
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x20));
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x40));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        acos ();
        *(fp_stack--) = *(0x8073810);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8073818);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x28)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x30));
        eax = *((ebp + 0x14));
        *(fp_stack--) = *(eax);
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x40));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        acos ();
        *(fp_stack--) = *(0x8073810);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8073818);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x18));
        eax = *((ebp + 0x14));
        *(fp_stack--) = *(eax);
        eax = *((ebp + 0x14));
        *(fp_stack--) = *((eax + 0x20));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        acos ();
        *(fp_stack--) = *(0x8073810);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8073818);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x3e4)) = "metric.F90";
        *((ebp - 0x3e0)) = 0xa3;
        eax = ebp - 0x21c;
        *((ebp - 0x3ac)) = eax;
        *((ebp - 0x3a8)) = 0x1f4;
        *((ebp - 0x3c0)) = 0;
        *((ebp - 0x3e8)) = 0;
        *((ebp - 0x3bc)) = 0x80737d2;
        *((ebp - 0x3b8)) = 0xd;
        *((ebp - 0x3ec)) = 0x5000;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x13;
        *((esp + 4)) = 0x80737df;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((ebp - 0x290)) = 0x219;
        *((ebp - 0x288)) = 1;
        *((ebp - 0x284)) = 3;
        *((ebp - 0x28c)) = 1;
        eax = ebp - 0x28;
        *((ebp - 0x298)) = eax;
        *((ebp - 0x294)) = 0xffffffff;
        *((esp + 0xc)) = 0;
        *((esp + 8)) = 8;
        eax = ebp - 0x298;
        *((esp + 4)) = eax;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_array ();
        *((esp + 8)) = 8;
        *((esp + 4)) = 0x80737f2;
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x3ec;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x80735cb;
        eax = ebp - 0x21c;
        *((esp + 4)) = eax;
        eax = *((ebp + 0x10));
        wrtout_ (eax);
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x80735cb;
        eax = ebp - 0x21c;
        *((esp + 4)) = eax;
        wrtout_ (0x80735d0);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8050b5c */
#include <stdint.h>
 
int32_t dbg_nlinopt (int32_t arg_50h) {
    int32_t var_e3ch;
    int32_t var_e2ch;
    int32_t var_e28h;
    int32_t var_e24h;
    int32_t var_e20h;
    int32_t var_e1ch;
    int32_t var_e18h;
    int32_t var_e14h;
    int32_t var_e10h;
    int32_t var_e0ch;
    int32_t var_e08h;
    int32_t var_e04h;
    int32_t var_e00h;
    int32_t var_dfch;
    int32_t var_d98h;
    int32_t var_d94h;
    int32_t var_d90h;
    int32_t var_d8ch;
    int32_t var_d88h;
    int32_t var_d84h;
    int32_t var_d80h;
    int32_t var_d7ch;
    int32_t var_d78h;
    int32_t var_d74h;
    int32_t var_d70h;
    int32_t var_d6ch;
    int32_t var_d68h;
    int32_t var_d64h;
    int32_t var_d60h;
    int32_t var_d5ch;
    int32_t var_d58h;
    int32_t var_d54h;
    int32_t var_d50h;
    int32_t var_d4ch;
    int32_t var_d48h;
    int32_t var_d44h;
    int32_t var_d40h;
    int32_t var_d3ch;
    int32_t var_d38h;
    int32_t var_d34h;
    int32_t var_d30h;
    int32_t var_d2ch;
    int32_t var_cc8h;
    int32_t var_cc4h;
    int32_t var_cc0h;
    int32_t var_cbch;
    int32_t var_cb8h;
    int32_t var_cb4h;
    int32_t var_cach;
    int32_t var_c9ch;
    int32_t var_c98h;
    int32_t var_c94h;
    int32_t var_c90h;
    int32_t var_c7ch;
    int32_t var_c78h;
    int32_t var_c6ch;
    int32_t var_c68h;
    int32_t var_c64h;
    int32_t var_c60h;
    int32_t var_c4ch;
    int32_t var_c48h;
    int32_t var_ae0h;
    int32_t var_ad8h;
    int32_t var_ad0h;
    int32_t var_ac8h;
    int32_t var_ac0h;
    int32_t var_ab8h;
    int32_t var_ab0h;
    int32_t var_aa8h;
    int32_t var_aa0h;
    int32_t var_a98h;
    int32_t var_a90h;
    int32_t var_a8ch;
    int32_t var_a88h;
    int32_t var_a84h;
    int32_t var_a80h;
    int32_t var_a7ch;
    int32_t var_a78h;
    int32_t var_a74h;
    int32_t var_a70h;
    int32_t var_a6ch;
    complex(kind=8) zi;
    complex(kind=8) w;
    real(kind=8) totre;
    real(kind=8) totim;
    real(kind=8) totabs;
    real(kind=8)[5][5][5] sym;
    int32_t var_a28h;
    int32_t var_a24h;
    int32_t var_a20h;
    int32_t var_a1ch;
    int32_t var_a18h;
    int32_t var_a14h;
    int32_t var_a10h;
    int32_t var_a0ch;
    int32_t var_a08h;
    int32_t var_a04h;
    int32_t var_a00h;
    int32_t var_9fch;
    int32_t var_9f8h;
    int32_t var_9f4h;
    int32_t var_9f0h;
    int32_t var_9ech;
    int32_t var_9e8h;
    int32_t var_9e4h;
    int32_t var_9e0h;
    int32_t var_9dch;
    complex(kind=8)[5][5][5][5][5] pz;
    int32_t var_9d4h;
    int32_t var_9d0h;
    int32_t var_9cch;
    int32_t var_9c8h;
    int32_t var_9c4h;
    int32_t var_9c0h;
    int32_t var_9bch;
    int32_t var_9b8h;
    int32_t var_9b4h;
    int32_t var_9b0h;
    int32_t var_9ach;
    int32_t var_9a8h;
    int32_t var_9a4h;
    int32_t var_9a0h;
    int32_t var_99ch;
    int32_t var_998h;
    int32_t var_994h;
    complex(kind=8)[5][5][5][5][5] py;
    int32_t var_98ch;
    int32_t var_988h;
    int32_t var_984h;
    int32_t var_980h;
    int32_t var_97ch;
    int32_t var_978h;
    int32_t var_974h;
    int32_t var_970h;
    int32_t var_96ch;
    int32_t var_968h;
    int32_t var_964h;
    int32_t var_960h;
    int32_t var_95ch;
    int32_t var_958h;
    int32_t var_954h;
    int32_t var_950h;
    int32_t var_94ch;
    complex(kind=8)[5][5][5][5][5] px;
    int32_t var_944h;
    int32_t var_940h;
    int32_t var_93ch;
    int32_t var_938h;
    int32_t var_934h;
    int32_t var_930h;
    int32_t var_92ch;
    int32_t var_928h;
    int32_t var_924h;
    int32_t var_920h;
    int32_t var_91ch;
    int32_t var_918h;
    int32_t var_914h;
    int32_t var_910h;
    int32_t var_90ch;
    int32_t var_908h;
    int32_t var_904h;
    complex(kind=8) mat2w_tra;
    complex(kind=8) mat2w;
    complex(kind=8) mat1w3_tra;
    complex(kind=8) mat1w2;
    complex(kind=8) mat1w1;
    complex(kind=8)[5] intra2w;
    int32_t var_8a8h;
    int32_t var_8a4h;
    int32_t var_8a0h;
    int32_t var_89ch;
    int32_t var_898h;
    complex(kind=8)[5] intra1w;
    int32_t var_890h;
    int32_t var_88ch;
    int32_t var_888h;
    int32_t var_884h;
    int32_t var_880h;
    complex(kind=8)[5] inter2w;
    int32_t var_878h;
    int32_t var_874h;
    int32_t var_870h;
    int32_t var_86ch;
    int32_t var_868h;
    complex(kind=8)[5] inter1w;
    int32_t var_860h;
    int32_t var_85ch;
    int32_t var_858h;
    int32_t var_854h;
    int32_t var_850h;
    integer(kind=4) ik;
    complex(kind=8) idel;
    void * var_838h;
    void * var_738h;
    void * var_638h;
    void * s;
    void * s1;
    real(kind=8) ene;
    complex(kind=8)[5][5][5] delta;
    int32_t var_32ch;
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    int32_t var_31ch;
    int32_t var_318h;
    int32_t var_314h;
    int32_t var_310h;
    int32_t var_30ch;
    int32_t var_308h;
    int32_t var_304h;
    complex(kind=8) b331;
    complex(kind=8) b31_32;
    complex(kind=8) b313;
    complex(kind=8) b312;
    complex(kind=8) b311;
    complex(kind=8) b243;
    complex(kind=8) b242;
    complex(kind=8) b241;
    complex(kind=8) b24;
    complex(kind=8) b231;
    complex(kind=8) b223;
    complex(kind=8) b222;
    complex(kind=8) b221;
    complex(kind=8) b21_22;
    complex(kind=8) b213;
    complex(kind=8) b212;
    complex(kind=8) b211;
    complex(kind=8) b133;
    complex(kind=8) b132;
    complex(kind=8) b131;
    complex(kind=8) b12_13;
    complex(kind=8) b123;
    complex(kind=8) b122;
    complex(kind=8) b121;
    complex(kind=8) b113;
    complex(kind=8) b112;
    complex(kind=8) b111;
    complex(kind=8) b11;
    real(kind=8) au2esu;
    real(kind=8) const;
    real(kind=8) const_au;
    real(kind=8) corec;
    real(kind=8) e1;
    real(kind=8) e12;
    real(kind=8) e2;
    real(kind=8) el;
    real(kind=8) em;
    real(kind=8) emax;
    real(kind=8) emin;
    real(kind=8) en;
    integer(kind=4) ubound.0;
    integer(kind=4) ubound.1;
    integer(kind=4) ubound.3;
    real(kind=8) ha2ev;
    integer(kind=4) i;
    integer(kind=4) i1;
    integer(kind=4) i2;
    integer(kind=4) i3;
    integer(kind=4) isp;
    integer(kind=4) ist1;
    integer(kind=4) ist2;
    integer(kind=4) istl;
    integer(kind=4) istm;
    integer(kind=4) istn;
    integer(kind=4) isym;
    integer(kind=4) iw;
    integer(kind=4) j;
    integer(kind=4) k;
    integer(kind=4) lx;
    integer(kind=4) ly;
    integer(kind=4) lz;
    integer(kind=4) ubound.7;
    integer(kind=4) ubound.8;
    integer(kind=4) ubound.10;
    integer(kind=4) ubound.13;
    integer(kind=4) ubound.17;
    real(kind=8) t1;
    real(kind=8) t2;
    real(kind=8) t3;
    real(kind=8) tst;
    integer(kind=4) ubound.19;
    real(kind=8) wlm;
    real(kind=8) wln;
    real(kind=8) wml;
    real(kind=8) wmn;
    real(kind=8) wnl;
    real(kind=8) wnm;
    integer(kind=4) nspin;
    real(kind=8) omega;
    integer(kind=4) nkpt;
    real(kind=8)[5] wkpt;
    integer(kind=4) nsymcrys;
    real(kind=8)[4][4][5] symcrys;
    integer(kind=4) nstval;
    real(kind=8)[5][5][5] evalv;
    real(kind=8) efermi;
    complex(kind=8)[5][5][5][4][5] pmat;
    integer(kind=4) v1;
    integer(kind=4) v2;
    integer(kind=4) v3;
    integer(kind=4) nmesh;
    real(kind=8) de;
    real(kind=8) sc;
    real(kind=8) brod;
    real(kind=8) tol;
    integer(kind=4) const _fnam;
    char * s2;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    char * var_14h;
    /* void nlinopt(integer(kind=4) nspin,real(kind=8) omega,integer(kind=4) nkpt,real(kind=8)[5] wkpt,integer(kind=4) nsymcrys,real(kind=8)[4][4][5] symcrys,integer(kind=4) nstval,real(kind=8)[5][5][5] evalv,real(kind=8) efermi,complex(kind=8)[5][5][5][4][5] pmat,integer(kind=4) v1,integer(kind=4) v2,integer(kind=4) v3,integer(kind=4) nmesh,real(kind=8) de,real(kind=8) sc,real(kind=8) brod,real(kind=8) tol,integer(kind=4) const _fnam); */
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x74)) = eax;
    edx = *((ebp - 0x74));
    eax = *((ebp - 0x74));
    eax <<= 3;
    edx = eax + edx;
    eax = 0;
    __asm ("cmovns eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    ebx = edx;
    ebx &= 0xf;
    eax = ecx;
    edx = ebx;
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    esi = eax;
    esi &= 0xffffffff;
    edi = edx;
    edi &= 0xf;
    eax = esi;
    edx = edi;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0xdc)) = eax;
    eax = *((ebp - 0xdc));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xcc8)) = ecx;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0xd8)) = eax;
    eax = *((ebp - 0xcc8));
    eax *= *((ebp - 0xd8));
    edx = 0;
    ebx = edx;
    __asm ("cmovns ebx, eax");
    *((ebp - 0xcc4)) = ebx;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0xd4)) = eax;
    eax = *((ebp - 0xcc4));
    eax *= *((ebp - 0xd4));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    esi = eax;
    esi &= 0xffffffff;
    *((ebp - 0xe00)) = esi;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0xdfc)) = ecx;
    eax = *((ebp - 0xe00));
    edx = *((ebp - 0xdfc));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0xe08)) = ebx;
    esi = edx;
    esi &= 0xf;
    *((ebp - 0xe04)) = esi;
    eax = *((ebp - 0xe08));
    edx = *((ebp - 0xe04));
    eax = *((ebp - 0xcc8));
    eax = ~eax;
    edx = eax;
    edx -= *((ebp - 0xcc4));
    *((ebp - 0xd98)) = edx;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x84)) = eax;
    eax = *((ebp - 0x84));
    edx = 0;
    ecx = edx;
    __asm ("cmovns ecx, eax");
    *((ebp - 0xcc0)) = ecx;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x80)) = eax;
    eax = *((ebp - 0xcc0));
    eax *= *((ebp - 0x80));
    edx = 0;
    ebx = edx;
    __asm ("cmovns ebx, eax");
    *((ebp - 0xcbc)) = ebx;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x7c)) = eax;
    eax = *((ebp - 0xcbc));
    eax *= *((ebp - 0x7c));
    edx = 0;
    esi = edx;
    __asm ("cmovns esi, eax");
    *((ebp - 0xcb8)) = esi;
    eax = *((ebp - 0xcb8));
    eax += eax;
    edx = *((ebp - 0xcb8));
    edx = eax + edx;
    eax = 0;
    ecx = eax;
    __asm ("cmovns ecx, edx");
    *((ebp - 0xcb4)) = ecx;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x78)) = eax;
    eax = *((ebp - 0xcb4));
    eax *= *((ebp - 0x78));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ebx = eax;
    bh &= 0xff;
    *((ebp - 0xe10)) = ebx;
    esi = edx;
    esi &= 0xf;
    *((ebp - 0xe0c)) = esi;
    eax = *((ebp - 0xe10));
    edx = *((ebp - 0xe0c));
    __asm ("shld edx, eax, 7");
    eax <<= 7;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0xe18)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0xe14)) = ebx;
    eax = *((ebp - 0xe18));
    edx = *((ebp - 0xe14));
    eax = *((ebp - 0xcc0));
    eax = ~eax;
    eax -= *((ebp - 0xcbc));
    eax -= *((ebp - 0xcb8));
    esi = eax;
    esi -= *((ebp - 0xcb4));
    *((ebp - 0xd94)) = esi;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x4c)) = eax;
    eax = *((ebp - 0x4c));
    edx = 0;
    __asm ("cmovs eax, edx");
    edx = 0;
    ecx = eax;
    ch &= 0xff;
    *((ebp - 0xe20)) = ecx;
    ebx = edx;
    ebx &= 0xf;
    *((ebp - 0xe1c)) = ebx;
    eax = *((ebp - 0xe20));
    edx = *((ebp - 0xe1c));
    __asm ("shld edx, eax, 6");
    eax <<= 6;
    esi = eax;
    esi &= 0xffffffff;
    *((ebp - 0xe28)) = esi;
    ecx = edx;
    ecx &= 0xf;
    *((ebp - 0xe24)) = ecx;
    eax = *((ebp - 0xe28));
    edx = *((ebp - 0xe24));
    *((ebp - 0x330)) = 0;
    *((ebp - 0x864)) = 0;
    *((ebp - 0x87c)) = 0;
    *((ebp - 0x894)) = 0;
    *((ebp - 0x8ac)) = 0;
    *((ebp - 0x948)) = 0;
    *((ebp - 0x990)) = 0;
    *((ebp - 0x9d8)) = 0;
    *((ebp - 0x9fc)) = 0;
    *((ebp - 0xa2c)) = 0;
    *(fp_stack--) = 0.0;
    *((ebp - 0xa68)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    *((ebp - 0xa60)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x48));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    *(fp_stack--) = *((ebp - 0xa68));
    *(fp_stack--) = *((ebp - 0xa60));
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    fp_tmp_0 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] *= fp_stack[5];
    fp_stack++;
    fp_tmp_1 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_stack[0] += fp_stack[2];
    fp_stack++;
    *((ebp - 0x848)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x840)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0xcac)) = eax;
    *(fp_stack--) = *((ebp - 0xcac));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8071f68);
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0x130)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8071f70);
    *((ebp - 0x140)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x130));
    fp_stack[0] *= *((ebp - 0x140));
    *((ebp - 0x138)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8071f78);
    *((ebp - 0xd0)) = fp_stack[0];
    fp_stack--;
    edx = ebp - 0xa70;
    eax = *((ebp + 0x50));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = edx;
    eax = ebp - 0xa6c;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0xa6c));
    eax += 0xd;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8071628;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0xa70));
    edx = *((ebp - 0xa6c));
    eax = *((ebp - 0xa6c));
    eax += 0xd;
    *((esp + 0x14)) = "-ChiTotIm.out-ChiTotRe.out-ChiIm.out-ChiRe.out-ChiAbs.outnlinopt.F90";
    *((esp + 0x10)) = 0xd;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0xa6c));
    if (eax > 0) {
        eax = *((ebp - 0xa70));
        if (eax == 0) {
            goto label_6;
        }
        free (eax);
    }
label_6:
    eax = *((ebp - 0xa6c));
    ebx = eax + 0xd;
    if (ebx > 0xff) {
        eax = ebp - 0x438;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0x438;
        memmove (eax, esi, ebx);
        eax = 0x100;
        ecx = 0x100;
        ecx -= ebx;
        eax = ebx;
        edx = ebp - 0x438;
        edx += eax;
        memset (edx, 0x20, ecx);
    }
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    edx = ebp - 0xa78;
    eax = *((ebp + 0x50));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = edx;
    eax = ebp - 0xa74;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0xa74));
    eax += 0xd;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8071628;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0xa78));
    edx = *((ebp - 0xa74));
    eax = *((ebp - 0xa74));
    eax += 0xd;
    *((esp + 0x14)) = 0x807167f;
    *((esp + 0x10)) = 0xd;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0xa74));
    if (eax > 0) {
        eax = *((ebp - 0xa78));
        if (eax == 0) {
            goto label_7;
        }
        free (eax);
    }
label_7:
    eax = *((ebp - 0xa74));
    ebx = eax + 0xd;
    if (ebx > 0xff) {
        eax = ebp - 0x538;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0x538;
        memmove (eax, esi, ebx);
        eax = 0x100;
        ecx = 0x100;
        ecx -= ebx;
        eax = ebx;
        edx = ebp - 0x538;
        edx += eax;
        memset (edx, 0x20, ecx);
    }
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    edx = ebp - 0xa80;
    eax = *((ebp + 0x50));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = edx;
    eax = ebp - 0xa7c;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0xa7c));
    eax += 0xa;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8071628;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0xa80));
    edx = *((ebp - 0xa7c));
    eax = *((ebp - 0xa7c));
    eax += 0xa;
    *((esp + 0x14)) = 0x807168c;
    *((esp + 0x10)) = 0xa;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0xa7c));
    if (eax > 0) {
        eax = *((ebp - 0xa80));
        if (eax == 0) {
            goto label_8;
        }
        free (eax);
    }
label_8:
    eax = *((ebp - 0xa7c));
    ebx = eax + 0xa;
    if (ebx > 0xff) {
        eax = ebp - 0x638;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0x638;
        memmove (eax, esi, ebx);
        eax = 0x100;
        ecx = 0x100;
        ecx -= ebx;
        eax = ebx;
        edx = ebp - 0x638;
        edx += eax;
        memset (edx, 0x20, ecx);
    }
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    edx = ebp - 0xa88;
    eax = *((ebp + 0x50));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = edx;
    eax = ebp - 0xa84;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0xa84));
    eax += 0xa;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8071628;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0xa88));
    edx = *((ebp - 0xa84));
    eax = *((ebp - 0xa84));
    eax += 0xa;
    *((esp + 0x14)) = 0x8071696;
    *((esp + 0x10)) = 0xa;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0xa84));
    if (eax > 0) {
        eax = *((ebp - 0xa88));
        if (eax == 0) {
            goto label_9;
        }
        free (eax);
    }
label_9:
    eax = *((ebp - 0xa84));
    ebx = eax + 0xa;
    if (ebx > 0xff) {
        eax = ebp - 0x738;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0x738;
        memmove (eax, esi, ebx);
        eax = 0x100;
        ecx = 0x100;
        ecx -= ebx;
        eax = ebx;
        edx = ebp - 0x738;
        edx += eax;
        memset (edx, 0x20, ecx);
    }
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    edx = ebp - 0xa90;
    eax = *((ebp + 0x50));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0x100;
    *((esp + 4)) = edx;
    eax = ebp - 0xa8c;
    *(esp) = eax;
    gfortran_string_trim ();
    eax = *((ebp - 0xa8c));
    eax += 0xb;
    eax <<= 5;
    if (eax < 0) {
        *(esp) = 0x8071628;
        eax = gfortran_runtime_error ();
    }
    edx = 1;
    if (eax <= 0) {
        eax = edx;
    }
    eax = malloc (eax);
    if (eax == 0) {
        *(esp) = "Memory allocation failed";
        eax = gfortran_os_error ();
    }
    esi = eax;
    ecx = *((ebp - 0xa90));
    edx = *((ebp - 0xa8c));
    eax = *((ebp - 0xa8c));
    eax += 0xb;
    *((esp + 0x14)) = 0x80716a0;
    *((esp + 0x10)) = 0xb;
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = esi;
    *(esp) = eax;
    gfortran_concat_string ();
    eax = *((ebp - 0xa8c));
    if (eax > 0) {
        eax = *((ebp - 0xa90));
        if (eax == 0) {
            goto label_10;
        }
        free (eax);
    }
label_10:
    eax = *((ebp - 0xa8c));
    ebx = eax + 0xb;
    if (ebx > 0xff) {
        eax = ebp - 0x838;
        memmove (eax, esi, 0x100);
    } else {
        eax = ebp - 0x838;
        memmove (eax, esi, ebx);
        eax = 0x100;
        ecx = 0x100;
        ecx -= ebx;
        eax = ebx;
        edx = ebp - 0x838;
        edx += eax;
        memset (edx, 0x20, ecx);
    }
    eax = esi;
    if (eax != 0) {
        free (eax);
    }
    *(fp_stack--) = *(0x8071f80);
    *((ebp - 0x58)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x18));
    ecx = *(eax);
    *((ebp - 0xa0)) = 1;
    if (*((ebp - 0xa0)) > ecx) {
        goto label_11;
    }
    while (eax == 0) {
        eax = *((ebp - 0xa0));
        edx = eax - 1;
        eax = edx;
        eax <<= 3;
        edx = eax + edx;
        eax = *((ebp + 0x1c));
        *(fp_stack--) = *((eax + edx*8));
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x70)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0xa0));
        eax = *((ebp - 0xa0));
        eax <<= 3;
        eax += edx;
        edx = eax - 5;
        eax = *((ebp + 0x1c));
        *(fp_stack--) = *((eax + edx*8));
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x68)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0xa0));
        eax = *((ebp - 0xa0));
        eax <<= 3;
        eax += edx;
        edx = eax - 1;
        eax = *((ebp + 0x1c));
        *(fp_stack--) = *((eax + edx*8));
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x60)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x70));
        fp_stack[0] = abs(fp_stack[0]);
        *(fp_stack--) = *((ebp - 0x58));
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        eax = (int32_t) al;
        if (eax != 0) {
            *(fp_stack--) = *((ebp - 0x68));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            *(fp_stack--) = *((ebp - 0x60));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            edx = *((ebp - 0xa0));
            eax = *((ebp - 0xa0));
            eax <<= 3;
            eax += edx;
            edx = eax - 6;
            eax = *((ebp + 0x1c));
            *(fp_stack--) = *((eax + edx*8));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            edx = *((ebp - 0xa0));
            eax = *((ebp - 0xa0));
            eax <<= 3;
            eax += edx;
            edx = eax - 3;
            eax = *((ebp + 0x1c));
            *(fp_stack--) = *((eax + edx*8));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            edx = *((ebp - 0xa0));
            eax = *((ebp - 0xa0));
            eax <<= 3;
            eax += edx;
            edx = eax - 8;
            eax = *((ebp + 0x1c));
            *(fp_stack--) = *((eax + edx*8));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            edx = *((ebp - 0xa0));
            eax = *((ebp - 0xa0));
            eax <<= 3;
            eax += edx;
            edx = eax - 2;
            eax = *((ebp + 0x1c));
            *(fp_stack--) = *((eax + edx*8));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            edx = *((ebp - 0xa0));
            eax = *((ebp - 0xa0));
            eax <<= 3;
            eax += edx;
            edx = eax - 7;
            eax = *((ebp + 0x1c));
            *(fp_stack--) = *((eax + edx*8));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            eax = *((ebp - 0xa0));
            edx = eax + 1;
            eax = edx;
            eax <<= 3;
            eax += edx;
            edx = eax - 0xd;
            eax = *((ebp + 0x1c));
            *(fp_stack--) = *((eax + edx*8));
            fp_stack[0] = abs(fp_stack[0]);
            *(fp_stack--) = *((ebp - 0x58));
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            eax = (int32_t) al;
            if (eax == 0) {
                goto label_12;
            }
            *((ebp - 0xc94)) = 0x80716ab;
            *((ebp - 0xc90)) = 0xb0;
            *((ebp - 0xc9c)) = 0x80;
            *((ebp - 0xc98)) = 6;
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x29;
            *((esp + 4)) = "-----------------------------------------";
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((ebp - 0xc94)) = 0x80716ab;
            *((ebp - 0xc90)) = 0xb1;
            *((ebp - 0xc9c)) = 0x80;
            *((ebp - 0xc98)) = 6;
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x29;
            *((esp + 4)) = "    the crystal has inversion symmetry   ";
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((ebp - 0xc94)) = 0x80716ab;
            *((ebp - 0xc90)) = 0xb2;
            *((ebp - 0xc9c)) = 0x80;
            *((ebp - 0xc98)) = 6;
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x29;
            *((esp + 4)) = "    the SHG sussceptibility is zero      ";
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write_done ();
            *((ebp - 0xc94)) = 0x80716ab;
            *((ebp - 0xc90)) = 0xb3;
            *((ebp - 0xc9c)) = 0x80;
            *((ebp - 0xc98)) = 6;
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 0x29;
            *((esp + 4)) = "-----------------------------------------";
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_transfer_character ();
            eax = ebp - 0xc9c;
            *(esp) = eax;
            gfortran_st_write_done ();
            *(esp) = 0xffffffff;
            gfortran_stop_numeric ();
        }
label_12:
        al = (*((ebp - 0xa0)) == ecx) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0xa0))++;
    }
label_11:
    eax = *((ebp + 0x30));
    eax = *(eax);
    if (eax > 0) {
        eax = *((ebp + 0x34));
        eax = *(eax);
        if (eax <= 0) {
            goto label_13;
        }
        eax = *((ebp + 0x38));
        eax = *(eax);
        if (eax <= 0) {
            goto label_13;
        }
        eax = *((ebp + 0x30));
        eax = *(eax);
        if (eax > 3) {
            goto label_13;
        }
        eax = *((ebp + 0x34));
        eax = *(eax);
        if (eax > 3) {
            goto label_13;
        }
        eax = *((ebp + 0x38));
        eax = *(eax);
        if (eax <= 3) {
            goto label_14;
        }
    }
label_13:
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0xba;
    *((ebp - 0xc9c)) = 0x80;
    *((ebp - 0xc98)) = 6;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "---------------------------------------------";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0xbb;
    *((ebp - 0xc9c)) = 0x80;
    *((ebp - 0xc98)) = 6;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "    Error in nlinopt:                        ";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0xbc;
    *((ebp - 0xc9c)) = 0x80;
    *((ebp - 0xc98)) = 6;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "    the polarisation directions incorrect    ";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0xbd;
    *((ebp - 0xc9c)) = 0x80;
    *((ebp - 0xc98)) = 6;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "    1=x,  2=y  and 3=z                       ";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0xbe;
    *((ebp - 0xc9c)) = 0x80;
    *((ebp - 0xc98)) = 6;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x2d;
    *((esp + 4)) = "---------------------------------------------";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *(esp) = 0xffffffff;
    gfortran_stop_numeric ();
label_14:
    eax = *((ebp + 0x3c));
    eax = *(eax);
    if (eax <= 0) {
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xc3;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xc4;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    Error in nlinopt:                        ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xc5;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number of energy mesh points incorrect   ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xc6;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number has to integer greater than 0     ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xc7;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    nmesh*de = max energy for calculation    ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xc8;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *(esp) = 0xffffffff;
        gfortran_stop_numeric ();
    }
    eax = *((ebp + 0x40));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xcd;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xce;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    Error in nlinopt:                        ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xcf;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    energy step is incorrect                 ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xd0;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number has to real greater than 0.0      ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xd1;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    nmesh*de = max energy for calculation    ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xd2;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *(esp) = 0xffffffff;
        gfortran_stop_numeric ();
    }
    eax = *((ebp + 0x44));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xd7;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xd8;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    Error in nlinopt:                        ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xd9;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    scissors shift is incorrect              ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xda;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    number has to real greater than 0.0      ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xdb;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *(esp) = 0xffffffff;
        gfortran_stop_numeric ();
    }
    eax = *((ebp + 0x48));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8071f88);
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe0;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe1;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    ATTENTION: broadening is quite high      ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe2;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "    ideally should be less than 0.005        ";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe3;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x2d;
        *((esp + 4)) = "---------------------------------------------";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
    } else {
        eax = *((ebp + 0x48));
        *(fp_stack--) = *(eax);
        *(fp_stack--) = *(0x8071f90);
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
            goto label_15;
        }
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe5;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe6;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x80719a4;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe7;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x80719cc;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xe8;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
label_15:
    eax = *((ebp + 0x4c));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8071f98);
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    if (eax != 0) {
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xec;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xed;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x80719f4;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xee;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = 0x8071a1c;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((ebp - 0xc94)) = 0x80716ab;
        *((ebp - 0xc90)) = 0xef;
        *((ebp - 0xc9c)) = 0x80;
        *((ebp - 0xc98)) = 6;
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 0x28;
        *((esp + 4)) = "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow";
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0xc9c;
        *(esp) = eax;
        gfortran_st_write_done ();
    }
    *((ebp - 0x940)) = 0x425;
    *((ebp - 0x938)) = 1;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x934)) = eax;
    *((ebp - 0x93c)) = 1;
    eax = *((ebp + 0x20));
    eax = *(eax);
    edx = 0;
    esi = edx;
    __asm ("cmovns esi, eax");
    *((ebp - 0x92c)) = 1;
    eax = *((ebp + 0x20));
    eax = *(eax);
    *((ebp - 0x928)) = eax;
    *((ebp - 0x930)) = esi;
    eax = *((ebp + 0x20));
    eax = *(eax);
    edx = 0;
    __asm ("cmovs eax, edx");
    ebx = eax;
    ebx *= esi;
    *((ebp - 0x920)) = 1;
    *((ebp - 0x91c)) = 3;
    *((ebp - 0x924)) = ebx;
    eax = ebx;
    eax += eax;
    ecx = eax + ebx;
    *((ebp - 0x914)) = 1;
    *((ebp - 0x910)) = 3;
    *((ebp - 0x918)) = ecx;
    eax = ecx;
    eax += eax;
    edx = eax + ecx;
    *((ebp - 0x908)) = 1;
    *((ebp - 0x904)) = 3;
    *((ebp - 0x90c)) = edx;
    eax = edx;
    eax += eax;
    edi = eax + edx;
    eax = esi;
    eax = ~eax;
    eax -= ebx;
    eax -= ecx;
    ebx = eax;
    ebx -= edx;
    eax = *((ebp + 0x20));
    eax = *(eax);
    al = (eax <= 0) ? 1 : 0;
    edx = (int32_t) al;
    eax = *((ebp + 0x20));
    eax = *(eax);
    al = (eax <= 0) ? 1 : 0;
    eax = (int32_t) al;
    eax |= edx;
    if (eax != 0) {
        edx = 0;
    } else {
        edx = edi;
        edx <<= 4;
    }
    eax = *((ebp - 0x948));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x948)) = eax;
        *((ebp - 0x944)) = ebx;
        *((ebp - 0x988)) = 0x425;
        *((ebp - 0x980)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        *((ebp - 0x97c)) = eax;
        *((ebp - 0x984)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        edx = 0;
        esi = edx;
        __asm ("cmovns esi, eax");
        *((ebp - 0x974)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        *((ebp - 0x970)) = eax;
        *((ebp - 0x978)) = esi;
        eax = *((ebp + 0x20));
        eax = *(eax);
        edx = 0;
        __asm ("cmovs eax, edx");
        ebx = eax;
        ebx *= esi;
        *((ebp - 0x968)) = 1;
        *((ebp - 0x964)) = 3;
        *((ebp - 0x96c)) = ebx;
        eax = ebx;
        eax += eax;
        ecx = eax + ebx;
        *((ebp - 0x95c)) = 1;
        *((ebp - 0x958)) = 3;
        *((ebp - 0x960)) = ecx;
        eax = ecx;
        eax += eax;
        edx = eax + ecx;
        *((ebp - 0x950)) = 1;
        *((ebp - 0x94c)) = 3;
        *((ebp - 0x954)) = edx;
        eax = edx;
        eax += eax;
        edi = eax + edx;
        eax = esi;
        eax = ~eax;
        eax -= ebx;
        eax -= ecx;
        ebx = eax;
        ebx -= edx;
        eax = *((ebp + 0x20));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        edx = (int32_t) al;
        eax = *((ebp + 0x20));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        eax |= edx;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x8071a9b;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 245 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_16;
    }
    edx = edi;
    edx <<= 4;
label_16:
    eax = *((ebp - 0x990));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x990)) = eax;
        *((ebp - 0x98c)) = ebx;
        *((ebp - 0x9d0)) = 0x425;
        *((ebp - 0x9c8)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        *((ebp - 0x9c4)) = eax;
        *((ebp - 0x9cc)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        edx = 0;
        esi = edx;
        __asm ("cmovns esi, eax");
        *((ebp - 0x9bc)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        *((ebp - 0x9b8)) = eax;
        *((ebp - 0x9c0)) = esi;
        eax = *((ebp + 0x20));
        eax = *(eax);
        edx = 0;
        __asm ("cmovs eax, edx");
        ebx = eax;
        ebx *= esi;
        *((ebp - 0x9b0)) = 1;
        *((ebp - 0x9ac)) = 3;
        *((ebp - 0x9b4)) = ebx;
        eax = ebx;
        eax += eax;
        ecx = eax + ebx;
        *((ebp - 0x9a4)) = 1;
        *((ebp - 0x9a0)) = 3;
        *((ebp - 0x9a8)) = ecx;
        eax = ecx;
        eax += eax;
        edx = eax + ecx;
        *((ebp - 0x998)) = 1;
        *((ebp - 0x994)) = 3;
        *((ebp - 0x99c)) = edx;
        eax = edx;
        eax += eax;
        edi = eax + edx;
        eax = esi;
        eax = ~eax;
        eax -= ebx;
        eax -= ecx;
        ebx = eax;
        ebx -= edx;
        eax = *((ebp + 0x20));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        edx = (int32_t) al;
        eax = *((ebp + 0x20));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        eax |= edx;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x8071af4;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 246 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_17;
    }
    edx = edi;
    edx <<= 4;
label_17:
    eax = *((ebp - 0x9d8));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x9d8)) = eax;
        *((ebp - 0x9d4)) = ebx;
        *((ebp - 0x874)) = 0x421;
        *((ebp - 0x86c)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        *((ebp - 0x868)) = eax;
        *((ebp - 0x870)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp + 0x3c));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = 0x8071b18;
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 247 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_18;
    }
    edx <<= 4;
label_18:
    eax = *((ebp - 0x87c));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x87c)) = eax;
        *((ebp - 0x878)) = 0xffffffff;
        *((ebp - 0x85c)) = 0x421;
        *((ebp - 0x854)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        *((ebp - 0x850)) = eax;
        *((ebp - 0x858)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp + 0x3c));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "inter2w";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 248 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_19;
    }
    edx <<= 4;
label_19:
    eax = *((ebp - 0x864));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x864)) = eax;
        *((ebp - 0x860)) = 0xffffffff;
        *((ebp - 0x8a4)) = 0x421;
        *((ebp - 0x89c)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        *((ebp - 0x898)) = eax;
        *((ebp - 0x8a0)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp + 0x3c));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "inter1w";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 249 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_20;
    }
    edx <<= 4;
label_20:
    eax = *((ebp - 0x8ac));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x8ac)) = eax;
        *((ebp - 0x8a8)) = 0xffffffff;
        *((ebp - 0x88c)) = 0x421;
        *((ebp - 0x884)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        *((ebp - 0x880)) = eax;
        *((ebp - 0x888)) = 1;
        eax = *((ebp + 0x3c));
        eax = *(eax);
        edx = 0;
        __asm ("cmovns edx, eax");
        eax = *((ebp + 0x3c));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "intra2w";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 250 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_21;
    }
    edx <<= 4;
label_21:
    eax = *((ebp - 0x894));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x894)) = eax;
        *((ebp - 0x890)) = 0xffffffff;
        *((ebp - 0x328)) = 0x423;
        *((ebp - 0x320)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        *((ebp - 0x31c)) = eax;
        *((ebp - 0x324)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        edx = 0;
        ecx = edx;
        __asm ("cmovns ecx, eax");
        *((ebp - 0x314)) = 1;
        eax = *((ebp + 0x20));
        eax = *(eax);
        *((ebp - 0x310)) = eax;
        *((ebp - 0x318)) = ecx;
        eax = *((ebp + 0x20));
        eax = *(eax);
        edx = 0;
        __asm ("cmovs eax, edx");
        edx = eax;
        edx *= ecx;
        *((ebp - 0x308)) = 1;
        *((ebp - 0x304)) = 3;
        *((ebp - 0x30c)) = edx;
        eax = edx;
        eax += eax;
        ebx = eax + edx;
        eax = ecx;
        eax = ~eax;
        esi = eax;
        esi -= edx;
        eax = *((ebp + 0x20));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        edx = (int32_t) al;
        eax = *((ebp + 0x20));
        eax = *(eax);
        al = (eax <= 0) ? 1 : 0;
        eax = (int32_t) al;
        eax |= edx;
        if (eax == 0) {
        } else {
            *((esp + 8)) = "intra1w";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 251 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        edx = 0;
        goto label_22;
    }
    edx = ebx;
    edx <<= 4;
label_22:
    eax = *((ebp - 0x330));
    if (eax == 0) {
        eax = edx;
        if (eax < 0) {
            *(esp) = 0x8071a44;
            eax = gfortran_runtime_error ();
        }
        edx = 1;
        if (eax <= 0) {
            eax = edx;
        }
        eax = malloc (eax);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0x330)) = eax;
        *((ebp - 0x32c)) = esi;
        *((ebp - 0xa24)) = 0x21b;
        *((ebp - 0xa1c)) = 1;
        *((ebp - 0xa18)) = 3;
        *((ebp - 0xa20)) = 1;
        *((ebp - 0xa10)) = 1;
        *((ebp - 0xa0c)) = 3;
        *((ebp - 0xa14)) = 3;
        *((ebp - 0xa04)) = 1;
        *((ebp - 0xa00)) = 3;
        *((ebp - 0xa08)) = 9;
        eax = *((ebp - 0xa2c));
        if (eax != 0) {
        } else {
            *((esp + 8)) = "delta";
            *((esp + 4)) = "Attempting to allocate already allocated array '%s';
            *(esp) = "At line 252 of file nlinopt.F90";
            gfortran_runtime_error_at ();
        }
        eax = malloc (0xd8);
        if (eax == 0) {
            *(esp) = "Out of memory";
            eax = gfortran_os_error ();
        }
        *((ebp - 0xa2c)) = eax;
        *((ebp - 0xa28)) = 0xfffffff3;
        *((ebp - 0x9f4)) = 0x21a;
        *((ebp - 0x9ec)) = 1;
        *((ebp - 0x9e8)) = 3;
        *((ebp - 0x9f0)) = 1;
        *((ebp - 0x9e0)) = 1;
        *((ebp - 0x9dc)) = 3;
        *((ebp - 0x9e4)) = 3;
        eax = *((ebp - 0x9fc));
        if (eax == 0) {
            goto label_23;
        }
        goto label_24;
    }
    *((esp + 8)) = 0x8071c04;
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 253 of file nlinopt.F90";
    gfortran_runtime_error_at ();
label_23:
    eax = malloc (0x48);
    if (eax == 0) {
        *(esp) = "Out of memory";
        eax = gfortran_os_error ();
    }
    *((ebp - 0x9fc)) = eax;
    *((ebp - 0x9f8)) = 0xfffffffc;
    eax = *((ebp - 0xa2c));
    *((ebp - 0xd78)) = eax;
    ebx = *((ebp - 0xa28));
    *((ebp - 0xd7c)) = ebx;
    esi = *((ebp - 0xa1c));
    *((ebp - 0xd80)) = esi;
    eax = *((ebp - 0xa18));
    *((ebp - 0xd84)) = eax;
    edx = *((ebp - 0xa10));
    *((ebp - 0xd88)) = edx;
    ecx = *((ebp - 0xa0c));
    *((ebp - 0xd8c)) = ecx;
    eax = *((ebp - 0xa04));
    ebx = *((ebp - 0xa00));
    *((ebp - 0xd90)) = ebx;
    esi = *((ebp - 0xa20));
    *((ebp - 0xd74)) = esi;
    ebx = eax;
    goto label_1;
label_24:
    *((esp + 8)) = 0x8071c28;
    *((esp + 4)) = "Attempting to allocate already allocated array '%s';
    *(esp) = "At line 254 of file nlinopt.F90";
    gfortran_runtime_error_at ();
label_1:
    if (ebx > *((ebp - 0xd90))) {
        goto label_25;
    }
    eax = *((ebp - 0xa08));
    eax *= ebx;
    edi = *((ebp - 0xd7c));
    edi = eax + edi;
    ecx = *((ebp - 0xd88));
label_0:
    if (ecx > *((ebp - 0xd8c))) {
        goto label_26;
    }
    eax = *((ebp - 0xa14));
    eax *= ecx;
    eax += edi;
    *((ebp - 0xe3c)) = eax;
    edx = *((ebp - 0xd80));
    do {
        if (edx > *((ebp - 0xd84))) {
            goto label_27;
        }
        eax = *((ebp - 0xd74));
        eax *= edx;
        esi = *((ebp - 0xe3c));
        esi += eax;
        *((ebp - 0xe2c)) = esi;
        *(fp_stack--) = 0.0;
        eax = *((ebp - 0xe2c));
        esi = *((ebp - 0xd78));
        *((esi + eax*8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_27:
    ecx++;
    goto label_0;
label_26:
    ebx++;
    goto label_1;
label_25:
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0xd70)) = eax;
    *((ebp - 0xa0)) = 1;
    eax = *((ebp - 0xd70));
    if (*((ebp - 0xa0)) > eax) {
        goto label_28;
    }
    goto label_29;
label_3:
label_29:
    eax = *((ebp - 0x9fc));
    *((ebp - 0xd60)) = eax;
    edx = *((ebp - 0x9f8));
    *((ebp - 0xd64)) = edx;
    edx = *((ebp - 0x9ec));
    eax = *((ebp - 0x9e0));
    ecx = *((ebp - 0xa0));
    edx--;
    *((ebp - 0xd68)) = edx;
    eax--;
    *((ebp - 0xd6c)) = eax;
    eax = ecx;
    eax <<= 3;
    eax += ecx;
    eax -= 0xd;
    *((ebp - 0xd58)) = eax;
    ecx = *((ebp - 0x9f0));
    *((ebp - 0xd5c)) = ecx;
    esi = 1;
label_2:
    if (esi > 3) {
        goto label_30;
    }
    eax = esi;
    eax += eax;
    eax += esi;
    ebx = *((ebp - 0xd58));
    ebx += eax;
    *((ebp - 0xd54)) = ebx;
    edx = *((ebp - 0xd6c));
    edx = esi + edx;
    eax = *((ebp - 0x9e4));
    eax *= edx;
    edi = *((ebp - 0xd64));
    edi = eax + edi;
    ecx = 1;
    do {
        if (ecx > 3) {
            goto label_31;
        }
        eax = *((ebp - 0xd68));
        eax = ecx + eax;
        eax *= *((ebp - 0xd5c));
        ebx = eax + edi;
        edx = *((ebp - 0xd54));
        edx = ecx + edx;
        eax = *((ebp + 0x1c));
        *(fp_stack--) = *((eax + edx*8));
        eax = *((ebp - 0xd60));
        *((eax + ebx*8)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (1);
label_31:
    esi++;
    goto label_2;
label_30:
    *((ebp - 0xc8)) = 1;
    if (*((ebp - 0xc8)) > 3) {
        goto label_32;
    }
    while (eax == 0) {
        *((ebp - 0x98)) = 1;
        if (*((ebp - 0x98)) <= 3) {
            void (*0x8053291)() ();
        }
        al = (*((ebp - 0xc8)) == 3) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0xc8))++;
    }
label_32:
    edx = *((ebp - 0xd70));
    al = (*((ebp - 0xa0)) == edx) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0xa0))++;
    if (eax == 0) {
        goto label_3;
    }
label_28:
    eax = *((ebp - 0x87c));
    ecx = *((ebp - 0x87c));
    edi = *((ebp - 0x878));
    eax = *((ebp - 0x86c));
    esi = *((ebp - 0x868));
    ebx = *((ebp - 0x870));
    edx = eax;
    do {
        if (edx > esi) {
            goto label_33;
        }
        eax = edx;
        eax *= ebx;
        eax += edi;
        eax <<= 4;
        *(fp_stack--) = 0.0;
        *((eax + ecx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((eax + ecx + 8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_33:
    eax = *((ebp - 0x864));
    ecx = *((ebp - 0x864));
    edi = *((ebp - 0x860));
    eax = *((ebp - 0x854));
    esi = *((ebp - 0x850));
    ebx = *((ebp - 0x858));
    edx = eax;
    do {
        if (edx > esi) {
            goto label_34;
        }
        eax = edx;
        eax *= ebx;
        eax += edi;
        eax <<= 4;
        *(fp_stack--) = 0.0;
        *((eax + ecx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((eax + ecx + 8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_34:
    eax = *((ebp - 0x8ac));
    ecx = *((ebp - 0x8ac));
    edi = *((ebp - 0x8a8));
    eax = *((ebp - 0x89c));
    esi = *((ebp - 0x898));
    ebx = *((ebp - 0x8a0));
    edx = eax;
    do {
        if (edx > esi) {
            goto label_35;
        }
        eax = edx;
        eax *= ebx;
        eax += edi;
        eax <<= 4;
        *(fp_stack--) = 0.0;
        *((eax + ecx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((eax + ecx + 8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_35:
    eax = *((ebp - 0x894));
    ecx = *((ebp - 0x894));
    edi = *((ebp - 0x890));
    eax = *((ebp - 0x884));
    esi = *((ebp - 0x880));
    ebx = *((ebp - 0x888));
    edx = eax;
    do {
        if (edx > esi) {
            goto label_36;
        }
        eax = edx;
        eax *= ebx;
        eax += edi;
        eax <<= 4;
        *(fp_stack--) = 0.0;
        *((eax + ecx)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((eax + ecx + 8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_36:
    eax = *((ebp - 0x330));
    edi = *((ebp - 0x330));
    ecx = *((ebp - 0x32c));
    *((ebp - 0xd3c)) = ecx;
    ebx = *((ebp - 0x320));
    *((ebp - 0xd40)) = ebx;
    esi = *((ebp - 0x31c));
    *((ebp - 0xd44)) = esi;
    eax = *((ebp - 0x314));
    *((ebp - 0xd48)) = eax;
    edx = *((ebp - 0x310));
    *((ebp - 0xd4c)) = edx;
    eax = *((ebp - 0x308));
    ecx = *((ebp - 0x304));
    *((ebp - 0xd50)) = ecx;
    ebx = *((ebp - 0x324));
    *((ebp - 0xd38)) = ebx;
    ebx = eax;
label_5:
    if (ebx > *((ebp - 0xd50))) {
        goto label_37;
    }
    eax = *((ebp - 0x30c));
    eax *= ebx;
    esi = *((ebp - 0xd3c));
    esi += eax;
    *((ebp - 0xd34)) = esi;
    ecx = *((ebp - 0xd48));
label_4:
    if (ecx > *((ebp - 0xd4c))) {
        goto label_38;
    }
    eax = *((ebp - 0x318));
    eax *= ecx;
    esi = *((ebp - 0xd34));
    esi = eax + esi;
    edx = *((ebp - 0xd40));
    do {
        if (edx > *((ebp - 0xd44))) {
            goto label_39;
        }
        eax = *((ebp - 0xd38));
        eax *= edx;
        eax += esi;
        eax <<= 4;
        *(fp_stack--) = 0.0;
        *((eax + edi)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((eax + edi + 8)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (1);
label_39:
    ecx++;
    goto label_4;
label_38:
    ebx++;
    goto label_5;
label_37:
    *(fp_stack--) = 0.0;
    *((ebp - 0xf0)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0xf8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0xd30)) = eax;
    *((ebp - 0x84c)) = 1;
    eax = *((ebp - 0x84c));
    if (eax > *((ebp - 0xd30))) {
        goto label_40;
    }
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x115;
    *((ebp - 0xc9c)) = 0x80;
    *((ebp - 0xc98)) = 6;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 4;
    eax = ebp - 0x84c;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 2;
    *((esp + 4)) = "ofFORMATTEDWRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0xd2c)) = eax;
    *((ebp - 0xb8)) = 1;
    eax = *((ebp - 0xd2c));
    if (*((ebp - 0xb8)) > eax) {
        void (*0x8057a9d)() ();
    }
label_40:
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x25f;
    eax = ebp - 0x438;
    *((ebp - 0xc78)) = eax;
    *((ebp - 0xc7c)) = 0x100;
    *((ebp - 0xc64)) = 0x8071c4e;
    *((ebp - 0xc60)) = 9;
    *((ebp - 0xc48)) = 0x8071c57;
    *((ebp - 0xc4c)) = 5;
    *((ebp - 0xc9c)) = 0x4900;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x260;
    eax = ebp - 0x538;
    *((ebp - 0xc78)) = eax;
    *((ebp - 0xc7c)) = 0x100;
    *((ebp - 0xc64)) = 0x8071c4e;
    *((ebp - 0xc60)) = 9;
    *((ebp - 0xc48)) = 0x8071c57;
    *((ebp - 0xc4c)) = 5;
    *((ebp - 0xc9c)) = 0x4900;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x261;
    eax = ebp - 0x638;
    *((ebp - 0xc78)) = eax;
    *((ebp - 0xc7c)) = 0x100;
    *((ebp - 0xc64)) = 0x8071c4e;
    *((ebp - 0xc60)) = 9;
    *((ebp - 0xc48)) = 0x8071c57;
    *((ebp - 0xc4c)) = 5;
    *((ebp - 0xc9c)) = 0x4900;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x262;
    eax = ebp - 0x738;
    *((ebp - 0xc78)) = eax;
    *((ebp - 0xc7c)) = 0x100;
    *((ebp - 0xc64)) = 0x8071c4e;
    *((ebp - 0xc60)) = 9;
    *((ebp - 0xc48)) = 0x8071c57;
    *((ebp - 0xc4c)) = 5;
    *((ebp - 0xc9c)) = 0x4900;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x263;
    eax = ebp - 0x838;
    *((ebp - 0xc78)) = eax;
    *((ebp - 0xc7c)) = 0x100;
    *((ebp - 0xc64)) = 0x8071c4e;
    *((ebp - 0xc60)) = 9;
    *((ebp - 0xc48)) = 0x8071c57;
    *((ebp - 0xc4c)) = 5;
    *((ebp - 0xc9c)) = 0x4900;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_open ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x265;
    *((ebp - 0xc6c)) = 0x8071c5c;
    *((ebp - 0xc68)) = 7;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8071c63;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x30));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x266;
    *((ebp - 0xc6c)) = 0x8071c7e;
    *((ebp - 0xc68)) = 0xa;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xc;
    *((esp + 4)) = 0x8071c88;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x4c));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x267;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xd;
    *((esp + 4)) = 0x8071ca0;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x48));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x268;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8071caf;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x269;
    *((ebp - 0xc6c)) = 0x8071cc0;
    *((ebp - 0xc68)) = 0x15;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x8071cd5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    fp_stack[0] *= *((ebp - 0xd0));
    *((ebp - 0xa98)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xa98;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071ce5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    *((ebp - 0xaa0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xaa0;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x26a;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x37;
    *((esp + 4)) = " # Energy      Tot-Im Chi(-2w,w,w)  Tot-Im Chi(-2w,w,w)";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x26b;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x36;
    *((esp + 4)) = " # eV          *10^-7 esu        *10^-12 m/V SI units  # ";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x26c;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5c;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8071d5a;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x26e;
    *((ebp - 0xc6c)) = 0x8071c5c;
    *((ebp - 0xc68)) = 7;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8071c63;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x30));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x26f;
    *((ebp - 0xc6c)) = 0x8071c7e;
    *((ebp - 0xc68)) = 0xa;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xc;
    *((esp + 4)) = 0x8071c88;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x4c));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x270;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xd;
    *((esp + 4)) = 0x8071ca0;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x48));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x271;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8071caf;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x272;
    *((ebp - 0xc6c)) = 0x8071cc0;
    *((ebp - 0xc68)) = 0x15;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x8071cd5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    fp_stack[0] *= *((ebp - 0xd0));
    *((ebp - 0xaa8)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xaa8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071ce5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    *((ebp - 0xab0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xab0;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x273;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x37;
    *((esp + 4)) = " # Energy      Tot-Im Chi(-2w,w,w)  Tot-Im Chi(-2w,w,w)";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x274;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x36;
    *((esp + 4)) = " # eV          *10^-7 esu        *10^-12 m/V SI units  # ";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x275;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5d;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8071d5a;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x277;
    *((ebp - 0xc6c)) = 0x8071c5c;
    *((ebp - 0xc68)) = 7;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8071c63;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x30));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x278;
    *((ebp - 0xc6c)) = 0x8071c7e;
    *((ebp - 0xc68)) = 0xa;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xc;
    *((esp + 4)) = 0x8071c88;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x4c));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x279;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xd;
    *((esp + 4)) = 0x8071ca0;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x48));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x27a;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8071caf;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x27b;
    *((ebp - 0xc6c)) = 0x8071cc0;
    *((ebp - 0xc68)) = 0x15;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x8071cd5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    fp_stack[0] *= *((ebp - 0xd0));
    *((ebp - 0xab8)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xab8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071ce5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    *((ebp - 0xac0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xac0;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x27c;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x35;
    *((esp + 4)) = " # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w) # in esu";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x27d;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 9;
    *((esp + 4)) = 0x8071d95;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x27e;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5e;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8071d5a;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x280;
    *((ebp - 0xc6c)) = 0x8071c5c;
    *((ebp - 0xc68)) = 7;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8071c63;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x30));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x281;
    *((ebp - 0xc6c)) = 0x8071c7e;
    *((ebp - 0xc68)) = 0xa;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xc;
    *((esp + 4)) = 0x8071c88;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x4c));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x282;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xd;
    *((esp + 4)) = 0x8071ca0;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x48));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x283;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8071caf;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x284;
    *((ebp - 0xc6c)) = 0x8071cc0;
    *((ebp - 0xc68)) = 0x15;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x8071cd5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    fp_stack[0] *= *((ebp - 0xd0));
    *((ebp - 0xac8)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xac8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071ce5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    *((ebp - 0xad0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xad0;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x285;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x35;
    *((esp + 4)) = " # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w) # in esu";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x286;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 9;
    *((esp + 4)) = 0x8071d95;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x287;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x5f;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8071d5a;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x289;
    *((ebp - 0xc6c)) = 0x8071c5c;
    *((ebp - 0xc68)) = 7;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x1b;
    *((esp + 4)) = 0x8071c63;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x30));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x34));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    *((esp + 8)) = 4;
    eax = *((ebp + 0x38));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x28a;
    *((ebp - 0xc6c)) = 0x8071c7e;
    *((ebp - 0xc68)) = 0xa;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xc;
    *((esp + 4)) = 0x8071c88;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x4c));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x28b;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0xd;
    *((esp + 4)) = 0x8071ca0;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x48));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x28c;
    *((ebp - 0xc6c)) = 0x8071c94;
    *((ebp - 0xc68)) = 0xc;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x11;
    *((esp + 4)) = 0x8071caf;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    eax = *((ebp + 0x44));
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x28d;
    *((ebp - 0xc6c)) = 0x8071cc0;
    *((ebp - 0xc68)) = 0x15;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x10;
    *((esp + 4)) = 0x8071cd5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    fp_stack[0] *= *((ebp - 0xd0));
    *((ebp - 0xad8)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xad8;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071ce5;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    *(fp_stack--) = *((ebp - 0xf8));
    fp_stack[0] -= *((ebp - 0xf0));
    *((ebp - 0xae0)) = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = 8;
    eax = ebp - 0xae0;
    *((esp + 4)) = eax;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_real ();
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8071cad;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x28e;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x35;
    *((esp + 4)) = " # Energy(eV)  |TotChi(-2w,w,w)|   |Tot Chi(-2w,w,w)|(f15.6,2es15.6)(f15.6,4es15.6)";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x28f;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 0x36;
    *((esp + 4)) = " # eV          *10^-7 esu        *10^-12 m/V SI units  # ";
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((ebp - 0xc94)) = 0x80716ab;
    *((ebp - 0xc90)) = 0x290;
    *((ebp - 0xc6c)) = 0x8071ce7;
    *((ebp - 0xc68)) = 3;
    *((ebp - 0xc9c)) = 0x1000;
    *((ebp - 0xc98)) = 0x60;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 3;
    *((esp + 4)) = 0x8071d5a;
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0xc9c;
    *(esp) = eax;
    gfortran_st_write_done ();
    *(fp_stack--) = 0.0;
    *((ebp - 0xa40)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0xa48)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0xa38)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x3c));
    ebx = *(eax);
    *((ebp - 0x9c)) = 2;
    if (*((ebp - 0x9c)) <= ebx) {
        void (*0x8059780)() ();
    }
    eax = *((ebp - 0x948));
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x805a057)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806c7b0 */
#include <stdint.h>
 
int32_t dbg_int2char4 (char * arg_ch) {
    int32_t var_350h;
    int32_t var_34ch;
    int32_t var_348h;
    int32_t var_344h;
    int32_t var_324h;
    char * var_320h;
    int32_t var_31ch;
    int32_t var_310h;
    int32_t var_30ch;
    int32_t var_1fch;
    integer(kind=4) iint;
    integer(kind=4) const _string;
    char * var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void int2char4(integer(kind=4) iint,integer(kind=4) const _string); */
    eax = *((ebp + 8));
    eax = *(eax);
    if (eax >= 0) {
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax <= 0x270f) {
            goto label_0;
        }
    }
    *((ebp - 0x348)) = 0x8073850;
    *((ebp - 0x344)) = 0x41;
    eax = ebp - 0x1fc;
    *((ebp - 0x310)) = eax;
    *((ebp - 0x30c)) = 0x1f4;
    *((ebp - 0x324)) = 0;
    *((ebp - 0x34c)) = 0;
    *((ebp - 0x320)) = "(a,a,a,a,a,a,i10)\n int2char4: ERROR -";
    *((ebp - 0x31c)) = 0x11;
    *((ebp - 0x350)) = 0x5000;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x807386f;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x13;
    *((esp + 4)) = 0x8073870;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x807386f;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x3a;
    *((esp + 4)) = "  The integer argument should be between 0 and 9999, while  it is COLL";
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x807386f;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 8;
    *((esp + 4)) = 0x80738be;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 4;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_integer ();
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x80738c6;
    eax = ebp - 0x1fc;
    *((esp + 4)) = eax;
    wrtout_ (0x80738cc);
    *((esp + 4)) = 4;
    *(esp) = 0x80738c6;
    leave_new_ ();
label_0:
    eax = *((ebp + 8));
    eax = *(eax);
    if (eax <= 9) {
        *((ebp - 0x348)) = 0x8073850;
        *((ebp - 0x344)) = 0x46;
        eax = *((ebp + 0xc));
        *((ebp - 0x310)) = eax;
        *((ebp - 0x30c)) = 4;
        *((ebp - 0x324)) = 0;
        *((ebp - 0x34c)) = 0;
        *((ebp - 0x320)) = "(\"000\",i1)(\"00\",i2)(\"0\",i3)(i4)";
        *((ebp - 0x31c)) = 0xa;
        *((ebp - 0x350)) = 0x5000;
        eax = ebp - 0x350;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 4;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        eax = ebp - 0x350;
        *(esp) = eax;
        gfortran_transfer_integer ();
        eax = ebp - 0x350;
        *(esp) = eax;
        gfortran_st_write_done ();
    } else {
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax <= 0x63) {
            *((ebp - 0x348)) = 0x8073850;
            *((ebp - 0x344)) = 0x48;
            eax = *((ebp + 0xc));
            *((ebp - 0x310)) = eax;
            *((ebp - 0x30c)) = 4;
            *((ebp - 0x324)) = 0;
            *((ebp - 0x34c)) = 0;
            *((ebp - 0x320)) = 0x80738da;
            *((ebp - 0x31c)) = 9;
            *((ebp - 0x350)) = 0x5000;
            eax = ebp - 0x350;
            *(esp) = eax;
            gfortran_st_write ();
            *((esp + 8)) = 4;
            eax = *((ebp + 8));
            *((esp + 4)) = eax;
            eax = ebp - 0x350;
            *(esp) = eax;
            gfortran_transfer_integer ();
            eax = ebp - 0x350;
            *(esp) = eax;
            gfortran_st_write_done ();
        } else {
            eax = *((ebp + 8));
            eax = *(eax);
            if (eax <= 0x3e7) {
                *((ebp - 0x348)) = 0x8073850;
                *((ebp - 0x344)) = 0x4a;
                eax = *((ebp + 0xc));
                *((ebp - 0x310)) = eax;
                *((ebp - 0x30c)) = 4;
                *((ebp - 0x324)) = 0;
                *((ebp - 0x34c)) = 0;
                *((ebp - 0x320)) = 0x80738e3;
                *((ebp - 0x31c)) = 8;
                *((ebp - 0x350)) = 0x5000;
                eax = ebp - 0x350;
                *(esp) = eax;
                gfortran_st_write ();
                *((esp + 8)) = 4;
                eax = *((ebp + 8));
                *((esp + 4)) = eax;
                eax = ebp - 0x350;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = ebp - 0x350;
                *(esp) = eax;
                gfortran_st_write_done ();
            } else {
                *((ebp - 0x348)) = 0x8073850;
                *((ebp - 0x344)) = 0x4c;
                eax = *((ebp + 0xc));
                *((ebp - 0x310)) = eax;
                *((ebp - 0x30c)) = 4;
                *((ebp - 0x324)) = 0;
                *((ebp - 0x34c)) = 0;
                *((ebp - 0x320)) = 0x80738eb;
                *((ebp - 0x31c)) = 4;
                *((ebp - 0x350)) = 0x5000;
                eax = ebp - 0x350;
                *(esp) = eax;
                gfortran_st_write ();
                *((esp + 8)) = 4;
                eax = *((ebp + 8));
                *((esp + 4)) = eax;
                eax = ebp - 0x350;
                *(esp) = eax;
                gfortran_transfer_integer ();
                eax = ebp - 0x350;
                *(esp) = eax;
                gfortran_st_write_done ();
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806edd8 */
#include <stdint.h>
 
uint32_t dbg_leave_new (void) {
    int32_t var_350h;
    int32_t var_34ch;
    int32_t var_348h;
    int32_t var_344h;
    int32_t var_324h;
    char * var_320h;
    int32_t var_31ch;
    int32_t var_310h;
    int32_t var_30ch;
    int32_t var_1fch;
    integer(kind=4) const _mode_paral;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void leave_new(integer(kind=4) const _mode_paral); */
    *((ebp - 0x348)) = 0x8074140;
    *((ebp - 0x344)) = 0x86;
    eax = ebp - 0x1fc;
    *((ebp - 0x310)) = eax;
    *((ebp - 0x30c)) = 0x1f4;
    *((ebp - 0x324)) = 0;
    *((ebp - 0x34c)) = 0;
    *((ebp - 0x320)) = "(a,a)\n leave_new : decision taken to exit ...PERS";
    *((ebp - 0x31c)) = 5;
    *((ebp - 0x350)) = 0x5000;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_st_write ();
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8074153;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    *((esp + 8)) = 0x27;
    *((esp + 4)) = 0x8074154;
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_transfer_character ();
    eax = ebp - 0x350;
    *(esp) = eax;
    gfortran_st_write_done ();
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = 0x1f4;
    *((esp + 8)) = 0x807417b;
    eax = ebp - 0x1fc;
    *((esp + 4)) = eax;
    wrtout_ (0x8074180);
    leave_myproc_ ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048cd0 */
#include <stdint.h>
 
void gfortran_st_write (void) {
    gfortran_st_write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048cc0 */
#include <stdint.h>
 
void gfortran_transfer_character (void) {
    gfortran_transfer_character ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b50 */
#include <stdint.h>
 
void gfortran_st_write_done (void) {
    gfortran_st_write_done ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x807088a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x80707e0 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_8h;
    int32_t var_ch_2;
    int32_t var_4h;
    ebx = *((ebp + 0xc));
    eax = *(ebx);
    *(esp) = eax;
    gfortran_store_exe_path ();
    eax = *((ebp + 8));
    *((esp + 4)) = ebx;
    *(esp) = eax;
    gfortran_set_args ();
    eax = MAIN_ ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x806eecc */
#include <stdint.h>
 
int32_t dbg_timab (void) {
    int32_t var_364h;
    int32_t var_360h;
    char * var_35ch;
    int32_t var_358h;
    int32_t var_338h;
    char * var_334h;
    int32_t var_330h;
    int32_t var_324h;
    int32_t var_320h;
    real(kind=8) wall;
    int32_t var_204h;
    real(kind=8) cpu;
    integer(kind=4) nn;
    integer(kind=4) option;
    real(kind=8)[3] tottim;
    char * c;
    size_t n;
    int32_t var_ch;
    int32_t var_10h;
    /* void timab(integer(kind=4) nn,integer(kind=4) option,real(kind=8)[3] tottim); */
    eax = *((ebp + 0xc));
    eax = *(eax);
    if (eax == 5) {
        eax = *((ebp + 8));
        eax = *(eax);
        *(obj.__defs_time_MOD_timopt) = eax;
    }
    eax = __defs_time_MOD_timopt;
    if (eax != 0) {
        eax = *((ebp + 0xc));
        eax = *(eax);
        if (eax == 5) {
            goto label_0;
        }
        eax = *((ebp + 8));
        eax = *(eax);
        if (eax >= 0) {
            eax = *((ebp + 8));
            eax = *(eax);
            if (eax <= 0x257) {
                goto label_1;
            }
        }
        *((ebp - 0x35c)) = "timab.F90";
        *((ebp - 0x358)) = 0x77;
        eax = ebp - 0x204;
        *((ebp - 0x324)) = eax;
        *((ebp - 0x320)) = 0x1f4;
        *((ebp - 0x338)) = 0;
        *((ebp - 0x360)) = 0;
        *((ebp - 0x334)) = "(a,a,a,a,i6,a,i8,a)\n timab: BUG -  dim mtim=";
        *((ebp - 0x330)) = 0x13;
        *((ebp - 0x364)) = 0x5000;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_st_write ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80741a1;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xd;
        *((esp + 4)) = 0x80741a2;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80741a1;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 0xb;
        *((esp + 4)) = 0x80741af;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        *((esp + 4)) = 0x80741bc;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 0xe;
        *((esp + 4)) = " but input nn=.PERS";
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_character ();
        *((esp + 8)) = 4;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_integer ();
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x80741ce;
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_transfer_character ();
        eax = ebp - 0x364;
        *(esp) = eax;
        gfortran_st_write_done ();
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = 0x1f4;
        *((esp + 8)) = 0x80741cf;
        eax = ebp - 0x204;
        *((esp + 4)) = eax;
        wrtout_ (0x80741d4);
        *((esp + 4)) = 4;
        *(esp) = 0x80741cf;
        leave_new_ ();
label_1:
        eax = *((ebp + 0xc));
        eax = *(eax);
        if (eax == 0) {
            eax = __defs_time_MOD_acctim;
            edx = 0x2570;
            memset (eax, 0, edx);
            eax = __defs_time_MOD_tzero;
            edx = 0x2570;
            memset (eax, 0, edx);
            ebx = __defs_time_MOD_ncount;
            eax = 0;
            edx = 0x257;
            edi = ebx;
            ecx = edx;
            memset (edi, eax, ecx);
        } else {
            eax = *((ebp + 0xc));
            eax = *(eax);
            if (eax == 1) {
                eax = ebp - 0x210;
                *((esp + 4)) = eax;
                eax = ebp - 0x10;
                *(esp) = eax;
                timein_ ();
                eax = *((ebp + 8));
                eax = *(eax);
                eax--;
                eax += eax;
                *(fp_stack--) = *((ebp - 0x10));
                *((eax*8 + obj.__defs_time_MOD_tzero)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp + 8));
                eax = *(eax);
                eax++;
                eax += eax;
                eax -= 3;
                *(fp_stack--) = *((ebp - 0x210));
                *((eax*8 + obj.__defs_time_MOD_tzero)) = fp_stack[0];
                fp_stack--;
            } else {
                eax = *((ebp + 0xc));
                eax = *(eax);
                if (eax == 2) {
                    eax = ebp - 0x210;
                    *((esp + 4)) = eax;
                    eax = ebp - 0x10;
                    *(esp) = eax;
                    timein_ ();
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax--;
                    edx = eax + eax;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax--;
                    eax += eax;
                    *(fp_stack--) = *((eax*8 + obj.__defs_time_MOD_acctim));
                    *(fp_stack--) = *((ebp - 0x10));
                    fp_stack[0] += fp_stack[1];
                    fp_stack++;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax--;
                    eax += eax;
                    *(fp_stack--) = *((eax*8 + obj.__defs_time_MOD_tzero));
                    fp_stack[0] -= fp_stack[1];
                    fp_stack++;
                    *((edx*8 + obj.__defs_time_MOD_acctim)) = fp_stack[0];
                    fp_stack--;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax++;
                    eax += eax;
                    edx = eax - 3;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax++;
                    eax += eax;
                    eax -= 3;
                    *(fp_stack--) = *((eax*8 + obj.__defs_time_MOD_acctim));
                    *(fp_stack--) = *((ebp - 0x210));
                    fp_stack[0] += fp_stack[1];
                    fp_stack++;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax++;
                    eax += eax;
                    eax -= 3;
                    *(fp_stack--) = *((eax*8 + obj.__defs_time_MOD_tzero));
                    fp_stack[0] -= fp_stack[1];
                    fp_stack++;
                    *((edx*8 + obj.__defs_time_MOD_acctim)) = fp_stack[0];
                    fp_stack--;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    edx = eax - 1;
                    eax = *((ebp + 8));
                    eax = *(eax);
                    eax--;
                    eax = *((eax*4 + obj.__defs_time_MOD_ncount));
                    eax++;
                    *((edx*4 + obj.__defs_time_MOD_ncount)) = eax;
                } else {
                    eax = *((ebp + 0xc));
                    eax = *(eax);
                    if (eax == 3) {
                        *((ebp - 0x35c)) = "timab.F90";
                        *((ebp - 0x358)) = 0x94;
                        eax = ebp - 0x204;
                        *((ebp - 0x324)) = eax;
                        *((ebp - 0x320)) = 0x1f4;
                        *((ebp - 0x338)) = 0;
                        *((ebp - 0x360)) = 0;
                        *((ebp - 0x334)) = "(a,a,a,a)";
                        *((ebp - 0x330)) = 9;
                        *((ebp - 0x364)) = 0x5000;
                        eax = ebp - 0x364;
                        *(esp) = eax;
                        gfortran_st_write ();
                        *((esp + 8)) = 1;
                        *((esp + 4)) = 0x80741a1;
                        eax = ebp - 0x364;
                        *(esp) = eax;
                        gfortran_transfer_character ();
                        *((esp + 8)) = 0xd;
                        *((esp + 4)) = 0x80741a2;
                        eax = ebp - 0x364;
                        *(esp) = eax;
                        gfortran_transfer_character ();
                        *((esp + 8)) = 1;
                        *((esp + 4)) = 0x80741a1;
                        eax = ebp - 0x364;
                        *(esp) = eax;
                        gfortran_transfer_character ();
                        *((esp + 8)) = 0x24;
                        *((esp + 4)) = " option 3 not valid (use time_accu).(a,a,a,a,i10,a)  Input option not valid, =";
                        eax = ebp - 0x364;
                        *(esp) = eax;
                        gfortran_transfer_character ();
                        eax = ebp - 0x364;
                        *(esp) = eax;
                        gfortran_st_write_done ();
                        *((esp + 0x10)) = 4;
                        *((esp + 0xc)) = 0x1f4;
                        *((esp + 8)) = 0x80741cf;
                        eax = ebp - 0x204;
                        *((esp + 4)) = eax;
                        wrtout_ (0x80741d4);
                        *((esp + 4)) = 4;
                        *(esp) = 0x80741cf;
                        leave_new_ ();
                    } else {
                        eax = *((ebp + 0xc));
                        eax = *(eax);
                        if (eax == 4) {
                            eax = ebp - 0x210;
                            *((esp + 4)) = eax;
                            eax = ebp - 0x10;
                            *(esp) = eax;
                            timein_ ();
                            *(fp_stack--) = *((ebp - 0x10));
                            eax = *((ebp + 8));
                            eax = *(eax);
                            eax--;
                            eax += eax;
                            *(fp_stack--) = *((eax*8 + obj.__defs_time_MOD_tzero));
                            fp_stack[0] -= fp_stack[1];
                            fp_stack++;
                            eax = *((ebp + 0x10));
                            *(eax) = fp_stack[0];
                            fp_stack--;
                            *(fp_stack--) = *((ebp - 0x210));
                            eax = *((ebp + 8));
                            eax = *(eax);
                            eax++;
                            eax += eax;
                            eax -= 3;
                            *(fp_stack--) = *((eax*8 + obj.__defs_time_MOD_tzero));
                            fp_stack[0] -= fp_stack[1];
                            fp_stack++;
                            eax = *((ebp + 0x10));
                            *((eax + 8)) = fp_stack[0];
                            fp_stack--;
                        } else {
                            *((ebp - 0x35c)) = "timab.F90";
                            *((ebp - 0x358)) = 0x9f;
                            eax = ebp - 0x204;
                            *((ebp - 0x324)) = eax;
                            *((ebp - 0x320)) = 0x1f4;
                            *((ebp - 0x338)) = 0;
                            *((ebp - 0x360)) = 0;
                            *((ebp - 0x334)) = 0x8074208;
                            *((ebp - 0x330)) = 0xf;
                            *((ebp - 0x364)) = 0x5000;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_st_write ();
                            *((esp + 8)) = 1;
                            *((esp + 4)) = 0x80741a1;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_transfer_character ();
                            *((esp + 8)) = 0xd;
                            *((esp + 4)) = 0x80741a2;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_transfer_character ();
                            *((esp + 8)) = 1;
                            *((esp + 4)) = 0x80741a1;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_transfer_character ();
                            *((esp + 8)) = 0x1b;
                            *((esp + 4)) = 0x8074217;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_transfer_character ();
                            *((esp + 8)) = 4;
                            eax = *((ebp + 0xc));
                            *((esp + 4)) = eax;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_transfer_integer ();
                            *((esp + 8)) = 1;
                            *((esp + 4)) = 0x80741ce;
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_transfer_character ();
                            eax = ebp - 0x364;
                            *(esp) = eax;
                            gfortran_st_write_done ();
                            *((esp + 0x10)) = 4;
                            *((esp + 0xc)) = 0x1f4;
                            *((esp + 8)) = 0x80741cf;
                            eax = ebp - 0x204;
                            *((esp + 4)) = eax;
                            wrtout_ (0x80741d4);
                            *((esp + 4)) = 4;
                            *(esp) = 0x80741cf;
                            leave_new_ ();
                        }
                    }
                }
            }
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b10 */
#include <stdint.h>
 
void gfortran_os_error (void) {
    gfortran_os_error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b30 */
#include <stdint.h>
 
void gfortran_st_open (void) {
    gfortran_st_open ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b40 */
#include <stdint.h>
 
void dgemm_ (void) {
    dgemm_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b70 */
#include <stdint.h>
 
void gfortran_date_and_time (void) {
    gfortran_date_and_time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048b90 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048ba0 */
#include <stdint.h>
 
void gfortran_transfer_complex (void) {
    gfortran_transfer_complex ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048bc0 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048bd0 */
#include <stdint.h>
 
void gfortran_transfer_array (void) {
    gfortran_transfer_array ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048be0 */
#include <stdint.h>
 
void gfortran_st_read_done (void) {
    gfortran_st_read_done ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048bf0 */
#include <stdint.h>
 
void gfortran_set_options (void) {
    gfortran_set_options ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c10 */
#include <stdint.h>
 
void gfortran_internal_unpack (void) {
    gfortran_internal_unpack ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c20 */
#include <stdint.h>
 
void gfortran_concat_string (void) {
    gfortran_concat_string ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c30 */
#include <stdint.h>
 
void gfortran_runtime_error_at (void) {
    gfortran_runtime_error_at ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c40 */
#include <stdint.h>
 
void acos (void) {
    acos ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c50 */
#include <stdint.h>
 
void gfortran_transfer_integer (void) {
    gfortran_transfer_integer ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c60 */
#include <stdint.h>
 
void gfortran_system_clock_4 (void) {
    gfortran_system_clock_4 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c80 */
#include <stdint.h>
 
void gfortran_runtime_error (void) {
    gfortran_runtime_error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048c90 */
#include <stdint.h>
 
void gfortran_st_backspace (void) {
    gfortran_st_backspace ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048ca0 */
#include <stdint.h>
 
void gfortran_string_trim (void) {
    gfortran_string_trim ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048cb0 */
#include <stdint.h>
 
void cabs (void) {
    cabs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048ce0 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048cf0 */
#include <stdint.h>
 
void gfortran_internal_pack (void) {
    gfortran_internal_pack ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d00 */
#include <stdint.h>
 
void gfortran_string_index (void) {
    gfortran_string_index ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d10 */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d20 */
#include <stdint.h>
 
void gfortran_st_rewind (void) {
    gfortran_st_rewind ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d30 */
#include <stdint.h>
 
void gfortran_st_read (void) {
    gfortran_st_read ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d40 */
#include <stdint.h>
 
void dgemv_ (void) {
    dgemv_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d50 */
#include <stdint.h>
 
void gfortran_transfer_real (void) {
    gfortran_transfer_real ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d60 */
#include <stdint.h>
 
void gfortran_stop_numeric (void) {
    gfortran_stop_numeric ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d70 */
#include <stdint.h>
 
void gfortran_compare_string (void) {
    gfortran_compare_string ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/optic/ia32_elf_from_website/subject.exe @ 0x8048d80 */
#include <stdint.h>
 
void gfortran_pow_i4_i4 (void) {
    gfortran_pow_i4_i4 ();
}
