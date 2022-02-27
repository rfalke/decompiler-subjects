/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401ab6 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    int32_t var_4h;
label_0:
    fcn_00401ea0 (0x4060d0);
    ebx = 0;
    if (*(0x40749c) == ebx) {
        HeapSetInformation (ebx, 1, ebx, ebx);
    }
    *((ebp - 4)) = ebx;
    eax = *(fs:0x18);
    esi = *((eax + 4));
    *((ebp - 0x1c)) = ebx;
    edi = 0x407484;
    do {
        eax = InterlockedCompareExchange (edi, esi, ebx);
        if (eax == ebx) {
            goto label_1;
        }
        if (eax == esi) {
            esi = 0;
            esi++;
            *((ebp - 0x1c)) = esi;
            goto label_2;
        }
        Sleep (0x3e8);
    } while (1);
label_1:
    esi = 0;
    esi++;
label_2:
    eax = *(0x407474);
    if (eax == esi) {
        _amsg_exit (0x1f);
    } else {
        eax = *(0x407474);
        if (eax == 0) {
            *(0x407474) = esi;
            eax = _initterm_e (0x40530c, 0x405618);
            if (eax == 0) {
                goto label_3;
            }
            *((ebp - 4)) = 0xfffffffe;
            eax = 0xff;
            goto label_4;
        }
        *(0x40713c) = esi;
    }
label_3:
    eax = *(0x407474);
    if (eax == esi) {
        _initterm (section..rdata, 0x405208);
        *(0x407474) = 2;
    }
    if (*((ebp - 0x1c)) == ebx) {
        InterlockedExchange (edi, ebx);
    }
    if (*(0x4074a0) != ebx) {
        eax = fcn_00401dd0 ();
        if (eax == 0) {
            goto label_5;
        }
        uint32_t (*0x4074a0)(uint32_t, uint32_t, uint32_t) (ebx, 2, ebx);
    }
label_5:
    eax = *(0x407124);
    ecx = *(sym.imp.MSVCR100.dll___initenv);
    *(ecx) = eax;
    eax = fcn_00401032 ();
    *(0x407138) = eax;
    if (*(0x40712c) == ebx) {
        exit (rdi);
        eax = *((ebp - 0x14));
        ecx = *(eax);
        ecx = *(ecx);
        *((ebp - 0x20)) = ecx;
        _XcptFilter (ecx, eax);
        return eax;
    }
    if (*(0x40713c) == ebx) {
        _cexit ();
    }
    *((ebp - 4)) = 0xfffffffe;
    eax = *(0x407138);
label_4:
    fcn_00401ee5 ();
    return eax;
    fcn_00401f80 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401037 */
#include <stdint.h>
 
void fcn_00401037 (int32_t arg_8h) {
    int32_t var_4h;
    return void (*0x4010c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x4010c0 */
#include <stdint.h>
 
int32_t loc_004010c0 (int32_t arg_8h) {
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *((ebp - 4));
    ecx = *((ebp + 8));
    *(eax) = ecx;
    edx = *(sym.imp.MSVCP100.dll_class_std::basic_ostream_char__struct_std::char_traits_char______cdecl_std::endl_class_std::basic_ostream_char__struct_std::char_traits_char____);
    eax = *(sym.imp.MSVCP100.dll_class_std::basic_ostream_char__struct_std::char_traits_char___std::cout);
    eax = fcn_00401028 ();
    ecx = eax;
    public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ostream_char_struct_std::char_traits_char_::operator_class_std::basic_ostream_char_struct_std::char_traits_char_cdecl_class_std::basic_ostream_char_struct_std::char_traits_char_ ();
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401028 */
#include <stdint.h>
 
int32_t fcn_00401028 (void) {
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch_3;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch_2;
    int32_t var_ch;
    eax = *(fs:0);
    eax = *(section..data);
    eax ^= ebp;
    eax = ebp - 0xc;
    *(fs:0) = eax;
    *((ebp - 0x10)) = esp;
    *((ebp - 0x14)) = 0;
    eax = *((ebp + 0xc));
    eax = fcn_0040100f (eax);
    ecx = 0;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x1c)) = ecx;
    edx = *((ebp + 8));
    eax = *(edx);
    ecx = *((ebp + 8));
    ecx += *((eax + 4));
    eax = public_long_long_int64_thiscall_std::ios_base::width_void_const ();
    *((ebp - 0x4c)) = eax;
    *((ebp - 0x48)) = edx;
    if (*((ebp - 0x48)) >= 0) {
        if (*((ebp - 0x48)) <= 0) {
            if (*((ebp - 0x4c)) <= 0) {
                goto label_0;
            }
        }
        ecx = *((ebp + 8));
        edx = *(ecx);
        ecx = *((ebp + 8));
        ecx += *((edx + 4));
        eax = public_long_long_int64_thiscall_std::ios_base::width_void_const ();
        *((ebp - 0x54)) = eax;
        *((ebp - 0x50)) = edx;
        eax = *((ebp - 0x50));
        if (eax >= *((ebp - 0x1c))) {
            if (eax <= *((ebp - 0x1c))) {
                ecx = *((ebp - 0x54));
                if (ecx <= *((ebp - 0x20))) {
                    goto label_0;
                }
            }
            edx = *((ebp + 8));
            eax = *(edx);
            ecx = *((ebp + 8));
            ecx += *((eax + 4));
            eax = public_long_long_int64_thiscall_std::ios_base::width_void_const ();
            eax -= *((ebp - 0x20));
            edx -= *((ebp - 0x1c));
            *((ebp - 0x5c)) = eax;
            *((ebp - 0x58)) = edx;
        }
    } else {
label_0:
        *((ebp - 0x5c)) = 0;
        *((ebp - 0x58)) = 0;
    }
    ecx = *((ebp - 0x5c));
    *((ebp - 0x28)) = ecx;
    edx = *((ebp - 0x58));
    *((ebp - 0x24)) = edx;
    eax = *((ebp + 8));
    ecx = ebp - 0x30;
    fcn_0040103c (eax);
    ecx = ebp - 0x30;
    eax = fcn_0040100a ();
    if (eax == -1) {
        ecx = *((ebp - 0x14));
        ecx |= 4;
        *((ebp - 0x14)) = ecx;
        goto label_1;
    }
    *((ebp - 4)) = 0;
    edx = *((ebp + 8));
    eax = *(edx);
    ecx = *((ebp + 8));
    ecx += *((eax + 4));
    eax = public_int_thiscall_std::ios_base::flags_void_const ();
    eax &= 0x1c0;
    if (eax == 0x40) {
        goto label_2;
    }
    while (1) {
        ecx = *((ebp - 0x28));
        ecx--;
        edx = *((ebp - 0x24));
        *((ebp - 0x28)) = ecx;
        *((ebp - 0x24)) = edx;
        if (*((ebp - 0x24)) < 0) {
            goto label_2;
        }
        if (*((ebp - 0x24)) <= 0) {
            if (*((ebp - 0x28)) <= 0) {
                goto label_2;
            }
        }
        eax = *((ebp + 8));
        ecx = *(eax);
        edx = *((ebp + 8));
        edx += *((ecx + 4));
        ecx = edx;
        al = public_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::fill_void_const ();
        eax = (int32_t) al;
        ecx = *((ebp + 8));
        edx = *(ecx);
        ecx = *((ebp + 8));
        ecx += *((edx + 4));
        eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const (eax);
        ecx = eax;
        eax = public_int_thiscall_std::basic_streambuf_char_struct_std::char_traits_char_::sputc_char_ ();
        *((ebp - 0x34)) = eax;
        eax = fcn_0040101e ();
        *((ebp - 0x38)) = eax;
        al = fcn_00401014 (ebp - 0x38, ebp - 0x34);
        edx = (int32_t) al;
        if (edx != 0) {
            eax = *((ebp - 0x14));
            eax |= 4;
            *((ebp - 0x14)) = eax;
        } else {
        }
    }
label_2:
    if (*((ebp - 0x14)) == 0) {
        ecx = *((ebp - 0x1c));
        edx = *((ebp - 0x20));
        eax = *((ebp + 0xc));
        ecx = *((ebp + 8));
        edx = *(ecx);
        ecx = *((ebp + 8));
        ecx += *((edx + 4));
        eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const (eax, edx, ecx);
        ecx = eax;
        eax = public_long_long_int64_thiscall_std::basic_streambuf_char_struct_std::char_traits_char_::sputn_char_const_long_long_int64_ ();
        *((ebp - 0x64)) = eax;
        *((ebp - 0x60)) = edx;
        eax = *((ebp - 0x64));
        if (eax == *((ebp - 0x20))) {
            ecx = *((ebp - 0x60));
            if (ecx == *((ebp - 0x1c))) {
                goto label_3;
            }
        }
        edx = *((ebp - 0x14));
        edx |= 4;
        *((ebp - 0x14)) = edx;
    }
label_3:
    if (*((ebp - 0x14)) != 0) {
        goto label_4;
    }
    while (1) {
        eax = *((ebp - 0x28));
        eax--;
        ecx = *((ebp - 0x24));
        *((ebp - 0x28)) = eax;
        *((ebp - 0x24)) = ecx;
        if (*((ebp - 0x24)) < 0) {
            goto label_4;
        }
        if (*((ebp - 0x24)) <= 0) {
            if (*((ebp - 0x28)) <= 0) {
                goto label_4;
            }
        }
        edx = *((ebp + 8));
        eax = *(edx);
        ecx = *((ebp + 8));
        ecx += *((eax + 4));
        al = public_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::fill_void_const ();
        ecx = (int32_t) al;
        edx = *((ebp + 8));
        eax = *(edx);
        ecx = *((ebp + 8));
        ecx += *((eax + 4));
        eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const (ecx);
        ecx = eax;
        eax = public_int_thiscall_std::basic_streambuf_char_struct_std::char_traits_char_::sputc_char_ ();
        *((ebp - 0x3c)) = eax;
        eax = fcn_0040101e ();
        *((ebp - 0x40)) = eax;
        al = fcn_00401014 (ebp - 0x40, ebp - 0x3c);
        eax = (int32_t) al;
        if (eax != 0) {
            ecx = *((ebp - 0x14));
            ecx |= 4;
            *((ebp - 0x14)) = ecx;
        } else {
        }
    }
label_4:
    edx = *((ebp + 8));
    eax = *(edx);
    ecx = *((ebp + 8));
    ecx += *((eax + 4));
    public_long_long_int64_thiscall_std::ios_base::width_long_long_int64_ (0, 0);
    *((ebp - 4)) = 0xffffffff;
label_1:
    eax = *((ebp - 0x14));
    ecx = *((ebp + 8));
    edx = *(ecx);
    ecx = *((ebp + 8));
    ecx += *((edx + 4));
    public_void_thiscall_std::basic_ios_char_struct_std::char_traits_char_::setstate_int_bool_ (eax, 0);
    eax = *((ebp + 8));
    *((ebp - 0x44)) = eax;
    ecx = ebp - 0x30;
    fcn_00401023 ();
    eax = *((ebp - 0x44));
    ecx = *((ebp - 0xc));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401019 */
#include <stdint.h>
 
void fcn_00401019 (int32_t arg_8h) {
    int32_t var_4h;
    return void (*0x401150)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401150 */
#include <stdint.h>
 
int32_t loc_00401150 (int32_t arg_8h) {
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *(sym.imp.MSVCP100.dll_class_std::basic_ostream_char__struct_std::char_traits_char______cdecl_std::endl_class_std::basic_ostream_char__struct_std::char_traits_char____);
    ecx = *((ebp - 4));
    edx = *(ecx);
    edx += *((ebp + 8));
    ecx = *(sym.imp.MSVCP100.dll_class_std::basic_ostream_char__struct_std::char_traits_char___std::cout);
    eax = public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ostream_char_struct_std::char_traits_char_::operator_int_ (edx, eax, ecx);
    ecx = eax;
    public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ostream_char_struct_std::char_traits_char_::operator_class_std::basic_ostream_char_struct_std::char_traits_char_cdecl_class_std::basic_ostream_char_struct_std::char_traits_char_ ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401005 */
#include <stdint.h>
 
void fcn_00401005 (void) {
    int32_t var_4h;
    return void (*0x401110)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401110 */
#include <stdint.h>
 
int32_t loc_00401110 (void) {
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *(sym.imp.MSVCP100.dll_class_std::basic_ostream_char__struct_std::char_traits_char______cdecl_std::endl_class_std::basic_ostream_char__struct_std::char_traits_char____);
    ecx = *(sym.imp.MSVCP100.dll_class_std::basic_ostream_char__struct_std::char_traits_char___std::cout);
    eax = fcn_00401028 ();
    ecx = eax;
    public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ostream_char_struct_std::char_traits_char_::operator_class_std::basic_ostream_char_struct_std::char_traits_char_cdecl_class_std::basic_ostream_char_struct_std::char_traits_char_ ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40100f */
#include <stdint.h>
 
void fcn_0040100f (int32_t arg_8h) {
    return void (*0x401530)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401530 */
#include <stdint.h>
 
int32_t loc_00401530 (char * s) {
    eax = *((ebp + 8));
    strlen (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x4017d4 */
#include <stdint.h>
 
void strlen (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40103c */
#include <stdint.h>
 
void fcn_0040103c (int32_t arg_8h) {
    int32_t var_4h;
    return void (*0x401580)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401580 */
#include <stdint.h>
 
int32_t loc_00401580 (int32_t arg_8h) {
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *((ebp + 8));
    ecx = *((ebp - 4));
    fcn_00401041 (eax);
    ecx = *((ebp + 8));
    edx = *(ecx);
    ecx = *((ebp + 8));
    ecx += *((edx + 4));
    al = public_bool_thiscall_std::ios_base::good_void_const ();
    eax = (int32_t) al;
    if (eax != 0) {
        ecx = *((ebp + 8));
        edx = *(ecx);
        ecx = *((ebp + 8));
        ecx += *((edx + 4));
        eax = public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::tie_void_const ();
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp + 8));
        ecx = *(eax);
        edx = *((ebp + 8));
        edx += *((ecx + 4));
        ecx = edx;
        eax = public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::tie_void_const ();
        ecx = eax;
        public_class_std::basic_ostream_char_struct_std::char_traits_char_thiscall_std::basic_ostream_char_struct_std::char_traits_char_::flush_void_ ();
    }
label_0:
    eax = *((ebp + 8));
    ecx = *(eax);
    edx = *((ebp + 8));
    edx += *((ecx + 4));
    ecx = edx;
    al = public_bool_thiscall_std::ios_base::good_void_const ();
    ecx = *((ebp - 4));
    *((ecx + 4)) = al;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401041 */
#include <stdint.h>
 
void fcn_00401041 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x401690)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401690 */
#include <stdint.h>
 
int32_t loc_00401690 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *((ebp - 4));
    ecx = *((ebp + 8));
    *(eax) = ecx;
    edx = *((ebp - 4));
    eax = *(edx);
    ecx = *(eax);
    edx = *((ebp - 4));
    eax = *(edx);
    eax += *((ecx + 4));
    ecx = eax;
    eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const ();
    if (eax != 0) {
        ecx = *((ebp - 4));
        edx = *(ecx);
        eax = *(edx);
        ecx = *((ebp - 4));
        ecx = *(ecx);
        ecx += *((eax + 4));
        eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const ();
        *((ebp - 8)) = eax;
        edx = *((ebp - 8));
        eax = *(edx);
        ecx = *((ebp - 8));
        edx = *((eax + 4));
        void (*edx)() ();
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40100a */
#include <stdint.h>
 
void fcn_0040100a (void) {
    int32_t var_4h;
    return void (*0x401660)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401660 */
#include <stdint.h>
 
int32_t loc_00401660 (void) {
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *((ebp - 4));
    eax = *((eax + 4));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40101e */
#include <stdint.h>
 
void fcn_0040101e (void) {
    return void (*0x401570)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401570 */
#include <stdint.h>
 
int32_t loc_00401570 (void) {
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401014 */
#include <stdint.h>
 
void fcn_00401014 (int32_t arg_8h, int32_t arg_ch) {
    return void (*0x401550)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401550 */
#include <stdint.h>
 
int32_t loc_00401550 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    edx = *(eax);
    eax = 0;
    al = (edx == *(ecx)) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401023 */
#include <stdint.h>
 
void fcn_00401023 (void) {
    int32_t var_4h;
    return void (*0x401620)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401620 */
#include <stdint.h>
 
uint32_t loc_00401620 (void) {
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    al = uint32_t (*bool __cdecl std::uncaught_exception(void))(uint32_t) (ecx);
    eax = (int32_t) al;
    if (eax == 0) {
        ecx = *((ebp - 4));
        ecx = *(ecx);
        public_void_thiscall_std::basic_ostream_char_struct_std::char_traits_char_::_Osfx_void_ ();
    }
    ecx = *((ebp - 4));
    fcn_0040102d ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40102d */
#include <stdint.h>
 
void fcn_0040102d (void) {
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x401700)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401700 */
#include <stdint.h>
 
int32_t loc_00401700 (void) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 4)) = ecx;
    eax = *((ebp - 4));
    ecx = *(eax);
    edx = *(ecx);
    eax = *((ebp - 4));
    ecx = *(eax);
    ecx += *((edx + 4));
    eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const ();
    if (eax != 0) {
        ecx = *((ebp - 4));
        edx = *(ecx);
        eax = *(edx);
        ecx = *((ebp - 4));
        ecx = *(ecx);
        ecx += *((eax + 4));
        eax = public_class_std::basic_streambuf_char_struct_std::char_traits_char_thiscall_std::basic_ios_char_struct_std::char_traits_char_::rdbuf_void_const ();
        *((ebp - 8)) = eax;
        edx = *((ebp - 8));
        eax = *(edx);
        ecx = *((ebp - 8));
        edx = *((eax + 8));
        void (*edx)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401cc3 */
#include <stdint.h>
 
uint32_t fcn_00401cc3 (int32_t arg_8h) {
    eax = fcn_00401c22 (*((ebp + 8)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401c22 */
#include <stdint.h>
 
uint32_t fcn_00401c22 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00401ea0 (0x4060f0);
    eax = DecodePointer (*(0x407498));
    *((ebp - 0x1c)) = eax;
    if (eax == -1) {
        _onexit (*((ebp + 8)));
    } else {
        _lock (8);
        *((ebp - 4)) = 0;
        eax = void (*esi)(uint32_t*) (*(0x407498));
        *((ebp - 0x1c)) = eax;
        eax = void (*esi)(uint32_t*) (*(0x407488));
        *((ebp - 0x20)) = eax;
        eax = EncodePointer (*((ebp + 8)), ebp - 0x1c, ebp - 0x20);
        eax = _dllonexit (eax);
        *((ebp - 0x24)) = eax;
        eax = EncodePointer (*((ebp - 0x1c)));
        *(0x407498) = eax;
        eax = EncodePointer (*((ebp - 0x20)));
        *(0x407488) = eax;
        *((ebp - 4)) = 0xfffffffe;
        fcn_00401cba ();
        eax = *((ebp - 0x24));
    }
    fcn_00401ee5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401c16 */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401ea0 */
#include <stdint.h>
 
int32_t fcn_00401ea0 (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *(section..data);
    *((ebp - 4)) ^= eax;
    eax ^= ebp;
    *((ebp - 0x18)) = esp;
    eax = *((ebp - 4));
    *((ebp - 4)) = 0xfffffffe;
    *((ebp - 8)) = eax;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401e92 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401e8c */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401dd0 */
#include <stdint.h>
 
int32_t fcn_00401dd0 (void) {
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_4h;
    int32_t var_8h_2;
    int32_t var_10h;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(section..data);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    eax = fcn_00401d40 (0x400000);
    if (eax == 0) {
        void (*0x401e71)() ();
    }
    eax = *((ebp + 8));
    eax -= 0x400000;
    eax = fcn_00401d80 (0x400000, eax);
    if (eax == 0) {
        void (*0x401e71)() ();
    }
    eax = *((eax + 0x24));
    eax >>= 0x1f;
    eax = ~eax;
    eax &= 1;
    *((ebp - 4)) = 0xfffffffe;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401d40 */
#include <stdint.h>
 
int32_t fcn_00401d40 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = 0x5a4d;
    while (*(eax) != 0x4550) {
        eax = 0;
        return eax;
        eax = *((ecx + 0x3c));
        eax += ecx;
    }
    edx = 0;
    ecx = 0x10b;
    dl = (*((eax + 0x18)) == cx) ? 1 : 0;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401d80 */
#include <stdint.h>
 
int32_t fcn_00401d80 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    ecx = *((eax + 0x3c));
    ecx += eax;
    eax = *((ecx + 0x14));
    esi = *((ecx + 6));
    edx = 0;
    eax = eax + ecx + 0x18;
    if (esi == 0) {
        goto label_0;
    }
    edi = *((ebp + 0xc));
    do {
        ecx = *((eax + 0xc));
        if (edi >= ecx) {
            ebx = *((eax + 8));
            ebx += ecx;
            if (edi < ebx) {
                goto label_1;
            }
        }
        edx++;
        eax += 0x28;
    } while (edx < esi);
label_0:
    eax = 0;
label_1:
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401032 */
#include <stdint.h>
 
void fcn_00401032 (void) {
    int32_t var_4h;
    return void (*0x401090)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401090 */
#include <stdint.h>
 
uint32_t loc_00401090 (void) {
    int32_t var_4h;
    ecx = ebp - 4;
    fcn_00401037 (0xa);
    ecx = ebp - 4;
    fcn_00401019 (0x14);
    ecx = ebp - 4;
    eax = fcn_00401005 ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401d32 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401ee5 */
#include <stdint.h>
 
void fcn_00401ee5 (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401cda */
#include <stdint.h>
 
int32_t fcn_00401cda (void) {
    eax = 0x405c60;
    esi = 0x405d60;
    edi = eax;
    if (eax >= esi) {
        goto label_0;
    }
    do {
        eax = *(edi);
        if (eax != 0) {
            void (*eax)() ();
        }
        edi += 4;
    } while (edi < esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401f77 */
#include <stdint.h>
 
int32_t fcn_00401f77 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401f45 */
#include <stdint.h>
 
uint32_t fcn_00401f45 (void) {
    esi = 0;
    eax = _controlfp_s (esi, 0x10000, 0x30000, esi);
    if (eax != 0) {
        _invoke_watson (esi, esi, esi, esi, esi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x402046 */
#include <stdint.h>
 
void _controlfp_s (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x402040 */
#include <stdint.h>
 
void _invoke_watson (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401f80 */
#include <stdint.h>
 
int32_t fcn_00401f80 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_ch;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_4h;
    eax = *(section..data);
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    edi = 0xbb40e64e;
    ebx = 0xffff0000;
    if (eax != edi) {
        if ((ebx & eax) != 0) {
            eax = ~eax;
            *(0x407004) = eax;
        }
    } else {
        GetSystemTimeAsFileTime (ebp - 8, esi);
        esi = *((ebp - 4));
        esi ^= *((ebp - 8));
        eax = GetCurrentProcessId ();
        esi ^= eax;
        eax = GetCurrentThreadId ();
        esi ^= eax;
        eax = GetTickCount ();
        esi ^= eax;
        QueryPerformanceCounter (ebp - 0x10);
        eax = *((ebp - 0xc));
        eax ^= *((ebp - 0x10));
        esi ^= eax;
        if (esi == edi) {
            esi = 0xbb40e64f;
        } else {
            if ((ebx & esi) != 0) {
                goto label_0;
            }
            eax = esi;
            eax |= 0x4711;
            eax <<= 0x10;
            esi |= eax;
        }
label_0:
        *(section..data) = esi;
        esi = ~esi;
        *(0x407004) = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40201c */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x402022 */
#include <stdint.h>
 
void void_cdecl_terminate_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x402034 */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40202e */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401cba */
#include <stdint.h>
 
void fcn_00401cba (void) {
    _unlock (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x402028 */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x40203a */
#include <stdint.h>
 
void _except_handler4_common (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x4017c4 */
#include <stdint.h>
 
void fcn_004017c4 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    if (ecx == *(section..data)) {
        return;
    }
    return void (*0x401ac0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-060_thiscall/ia32_pe/subject.exe @ 0x401ac0 */
#include <stdint.h>
 
int32_t loc_00401ac0 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    *(0x407248) = eax;
    *(0x407244) = ecx;
    *(0x407240) = edx;
    *(0x40723c) = ebx;
    *(0x407238) = esi;
    *(0x407234) = edi;
    *(0x407260) = ss;
    *(0x407254) = cs;
    *(0x407230) = ds;
    *(0x40722c) = es;
    *(0x407228) = fs;
    *(0x407224) = gs;
    __asm ("pushfd");
    eax = *(ebp);
    *(0x40724c) = eax;
    eax = *((ebp + 4));
    *(0x407250) = eax;
    eax = ebp + 8;
    *(0x40725c) = eax;
    eax = *((ebp - 0x320));
    *(0x407198) = 0x10001;
    eax = *(0x407250);
    *(0x40714c) = eax;
    *(0x407140) = 0xc0000409;
    *(0x407144) = 1;
    eax = *(section..data);
    *((ebp - 0x328)) = eax;
    eax = *(0x407004);
    *((ebp - 0x324)) = eax;
    eax = IsDebuggerPresent ();
    *(0x407190) = eax;
    _crt_debugger_hook (1);
    SetUnhandledExceptionFilter (0);
    UnhandledExceptionFilter (0x405860);
    if (*(0x407190) == 0) {
        _crt_debugger_hook (1);
    }
    eax = GetCurrentProcess (0xc0000409);
    TerminateProcess (eax);
    return eax;
}
