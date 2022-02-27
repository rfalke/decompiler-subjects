/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4019e0 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    LPSTARTUPINFOA lpStartupInfo;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    _set_app_type (2, edi, esi, ebx);
    *(0x40312c) = 0xffffffff;
    *(0x403130) = 0xffffffff;
    _p_fmode ();
    ecx = *(0x403120);
    *(eax) = ecx;
    _p_commode ();
    edx = *(0x40311c);
    *(eax) = edx;
    eax = *(sym.imp.MSVCRT.dll__adjust_fdiv);
    ecx = *(eax);
    *(0x403128) = ecx;
    fcn_00401be0 ();
    eax = *(0x403040);
    if (eax == 0) {
        _setusermatherr (0x401bd0);
    }
    fcn_00401bb0 ();
    _initterm (0x403010, 0x403014);
    edx = *(0x403118);
    *((ebp - 0x6c)) = edx;
    ecx = *(0x403114);
    _getmainargs (ebp - 0x60, ebp - 0x70, ebp - 0x64, ecx, ebp - 0x6c);
    _initterm (section..data, 0x40300c);
    eax = _p_acmdln ();
    esi = *(eax);
    *((ebp - 0x74)) = esi;
    if (*(esi) != 0x22) {
        goto label_1;
    }
    do {
        esi++;
        *((ebp - 0x74)) = esi;
        al = *(esi);
        if (al == 0) {
            goto label_2;
        }
    } while (al != 0x22);
label_2:
    if (*(esi) != 0x22) {
        goto label_0;
    }
    esi++;
    *((ebp - 0x74)) = esi;
    do {
label_0:
        al = *(esi);
        if (al == 0) {
            goto label_3;
        }
        if (al > 0x20) {
            goto label_3;
        }
        esi++;
        *((ebp - 0x74)) = esi;
    } while (1);
label_3:
    *((ebp - 0x30)) = 0;
    GetStartupInfoA (ebp - 0x5c);
    if ((*((ebp - 0x30)) & 1) != 0) {
        eax = *((ebp - 0x2c));
        eax &= 0xffff;
    } else {
        eax = 0xa;
    }
    eax = GetModuleHandleA (0, 0, esi, eax);
    eax = main (eax);
    *((ebp - 0x68)) = eax;
    exit (rdi);
    *((ebp - 4)) = 0xffffffff;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
label_1:
    if (*(esi) <= 0x20) {
        goto label_0;
    }
    esi++;
    *((ebp - 0x74)) = esi;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401bfc */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv, char ** envp, int32_t arg_10h) {
    MFC42_DLL_AfxWinMain (*((esp + 0x10)), *((esp + 0x10)), *((esp + 0x10)), *((esp + 0x10)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401c60 */
#include <stdint.h>
 
void MFC42_DLL_AfxWinMain (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401818 */
#include <stdint.h>
 
void fcn_00401818 (void) {
    uint32_t (*0x40430c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401060 */
#include <stdint.h>
 
void fcn_00401060 (void) {
    return void (*0x401824)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401824 */
#include <stdint.h>
 
void MFC42_DLL_CWinApp::CWinApp (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40181e */
#include <stdint.h>
 
void MFC42_DLL_operatordelete (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401080 */
#include <stdint.h>
 
int32_t fcn_00401080 (void) {
    do {
        esi = ecx;
        fcn_00401818 ();
        *(esi) = 0x402038;
        eax = esi;
        return eax;
        ecx = 0x403048;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4019a0 */
#include <stdint.h>
 
int32_t fcn_004019a0 (int32_t arg_4h) {
    eax = *((esp + 4));
    eax = fcn_00401970 (eax);
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401970 */
#include <stdint.h>
 
int32_t fcn_00401970 (int32_t arg_4h) {
    if (*(0x403130) == -1) {
        eax = *((esp + 4));
        _onexit (eax);
        return eax;
    }
    ecx = *((esp + 4));
    _dllonexit (ecx, 0x403130, 0x40312c);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401b90 */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401836 */
#include <stdint.h>
 
void MFC42_DLL_CWinApp::Enable3dControls (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401150 */
#include <stdint.h>
 
int32_t fcn_00401150 (int32_t arg_14h) {
    HICON * var_8h;
    int32_t var_ch;
    int32_t var_10h;
    eax = *(fs:0);
    *(fs:0) = esp;
    eax = *((esp + 0x14));
    esi = ecx;
    MFC42_DLL_CDialog::CDialog (0x66, eax, esi, ecx, eax, 0x401c98, 0xffffffffffffffff);
    *(esi) = 0x402138;
    MFC42_DLL_AfxGetModuleState (0);
    eax = MFC42_DLL_AfxFindResourceHandle (0x80, 0xe, 0x80);
    eax = LoadIconA (eax);
    ecx = *((esp + 8));
    *((esi + 0x60)) = eax;
    eax = esi;
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4018fc */
#include <stdint.h>
 
void MFC42_DLL_CDialog::CDialog (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4018f6 */
#include <stdint.h>
 
void MFC42_DLL_AfxGetModuleState (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4018f0 */
#include <stdint.h>
 
void MFC42_DLL_AfxFindResourceHandle (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401830 */
#include <stdint.h>
 
void MFC42_DLL_CDialog::DoModal (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40182a */
#include <stdint.h>
 
void fcn_0040182a (void) {
    uint32_t (*0x404318)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401120 */
#include <stdint.h>
 
void fcn_00401120 (void) {
    return void (*0x40182a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401902 */
#include <stdint.h>
 
void MFC42_DLL_CDialog::OnInitDialog (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401962 */
#include <stdint.h>
 
void MFC42_DLL_CPaintDC::CPaintDC (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40195c */
#include <stdint.h>
 
void MFC42_DLL_CDC::SetMapMode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401956 */
#include <stdint.h>
 
void MFC42_DLL_CBrush::CBrush (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401950 */
#include <stdint.h>
 
void MFC42_DLL_CDC::MoveTo (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40194a */
#include <stdint.h>
 
void MFC42_DLL_CDC::LineTo (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401944 */
#include <stdint.h>
 
void MFC42_DLL_CPen::CPen (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40193e */
#include <stdint.h>
 
void MFC42_DLL_CDC::SelectObject_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401938 */
#include <stdint.h>
 
void MFC42_DLL_CDC::SetTextAlign (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401932 */
#include <stdint.h>
 
void MFC42_DLL_CDC::SetBkMode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4019d0 */
#include <stdint.h>
 
void _ftol (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40192c */
#include <stdint.h>
 
void MFC42_DLL_CGdiObject::Attach (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401926 */
#include <stdint.h>
 
void MFC42_DLL_CDC::SelectObject (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401920 */
#include <stdint.h>
 
void MFC42_DLL_CGdiObject::DeleteObject (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x40191a */
#include <stdint.h>
 
void fcn_0040191a (void) {
    uint32_t (*0x4043bc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4015c0 */
#include <stdint.h>
 
int32_t fcn_004015c0 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_10h;
    eax = *(fs:0);
    *(fs:0) = esp;
    esi = ecx;
    *(esi) = 0x402228;
    MFC42_DLL_CGdiObject::DeleteObject (esi, ecx, eax, 0x401d08, 0xffffffffffffffff);
    ecx = *((esp + 8));
    *(esi) = 0x402210;
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x4016d0 */
#include <stdint.h>
 
int32_t fcn_004016d0 (void) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_10h;
    eax = *(fs:0);
    *(fs:0) = esp;
    esi = ecx;
    *(esi) = 0x402228;
    MFC42_DLL_CGdiObject::DeleteObject (esi, ecx, eax, 0x401d68, 0xffffffffffffffff);
    ecx = *((esp + 8));
    *(esi) = 0x402210;
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401be0 */
#include <stdint.h>
 
void fcn_00401be0 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401bb0 */
#include <stdint.h>
 
void fcn_00401bb0 (void) {
    _controlfp (0x10000, 0x30000);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401bf6 */
#include <stdint.h>
 
void _controlfp (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401b9c */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401b96 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe @ 0x401c14 */
#include <stdint.h>
 
void fcn_00401c14 (int32_t arg_4h, int32_t arg_8h) {
    MFC42_DLL_AfxGetModuleState ();
    ecx = *((esp + 4));
    edx = *((esp + 8));
    *((eax + 0x14)) = cl;
    *((eax + 0x1040)) = edx;
    if (ecx == 0) {
        _setmbcp (0xfffffffffffffffd);
    }
    eax = 1;
}
