/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-008-restarter/ia32_pe/subject.exe @ 0x401130 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    int32_t var_10h;
    int32_t var_20h_2;
    int32_t var_20h;
    int32_t var_ch_3;
    int32_t var_ch_2;
    int32_t var_ch;
    eax = GetCommandLineW (esp + 0xc, edi, esi, ebx);
    eax = CommandLineToArgvW (eax);
    ebx = eax;
    if (ebx == 0) {
        eax = "CommandLineToArgvW";
        fcn_00401000 (0x40207c);
    }
    eax = *((esp + 0xc));
    if (eax != 5) {
        eax += 0x3e8;
        return eax;
    }
    edi = *((ebx + 4));
    ecx = 0;
    if (edi == 0) {
        goto label_0;
    }
    esi = ecx + 0x14;
    eax = edi;
    do {
        if (*(eax) == cx) {
            goto label_2;
        }
        eax += 2;
        esi--;
    } while (esi != 0);
label_0:
    edx = 0;
label_1:
    eax = 0;
    if (edx == 0) {
        goto label_3;
    }
    while (eax < edx) {
        esi = *((edi + eax*2));
        eax++;
        ecx *= 5;
        ecx = esi + ecx*2 - 0x30;
    }
label_3:
    eax = OpenProcess (1, 0, ecx);
    esi = eax;
    if (esi != 0) {
        goto label_4;
    }
    edx = *((ebx + 4));
    eax = "OpenProcess";
    fcn_00401000 (edx);
label_2:
    if (esi == 0) {
        goto label_0;
    }
    edx = 0x14;
    edx -= esi;
    goto label_1;
label_4:
    eax = TerminateProcess (esi, 0);
    if (eax == 0) {
        eax = "TerminateProcess";
        fcn_00401000 (0x40207c);
    }
    CloseHandle (esi);
    edi = *((ebx + 0xc));
    eax = fcn_004010a0 ();
    if (eax == 0) {
        esi = *((ebx + 0x10));
    } else {
        esi = *((ebx + 0xc));
    }
    eax = *((ebx + 8));
    eax = MoveFileW (eax, esi);
    if (eax == 0) {
        ecx = *((ebx + 8));
        eax = "MoveFileW";
        fcn_00401000 (ecx);
    }
    ecx = 0x44;
    eax = esp + 0x20;
    do {
        *(eax) = 0;
        eax++;
        ecx--;
    } while (ecx != 0);
    *((esp + 0x20)) = 0x44;
    ecx = 0x10;
    eax = esp + 0x10;
    do {
        *(eax) = 0;
        eax++;
        ecx--;
    } while (ecx != 0);
    eax = CreateProcessW (ecx, esi, ecx, ecx, ecx, ecx, ecx, ecx, esp + 0x24, esp + 0x10);
    if (eax == 0) {
        eax = "CreateProcessW";
        fcn_00401000 (esi);
    }
    if (esi == *((ebx + 0xc))) {
        goto label_5;
    }
    esi = 0x64;
    do {
        edi = *((ebx + 0xc));
        eax = fcn_004010a0 ();
        esi--;
    } while (esi != 0);
label_5:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-008-restarter/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
uint32_t fcn_00401000 (HLOCAL * arg_8h) {
    DWORD var_8h;
    int32_t var_4h;
    /* [00] -r-x section size 4096 named .text */
    ebx = eax;
    eax = GetLastError (edi, esi, ebx);
    edi = eax;
    FormatMessageW (0x1300, 0, edi, 0x400, ebp - 4, 0, 0);
    ecx = *((ebp - 4));
    eax = lstrlenW (ecx);
    *((ebp - 8)) = eax;
    eax = lstrlenW (ebx);
    ecx = *((ebp - 8));
    ecx += eax;
    eax = LocalAlloc (0x40, ecx + ecx + 0x2000);
    ecx = *((ebp + 8));
    esi = eax;
    eax = *((ebp - 4));
    wsprintfW (esi, 0x402080, ebx, ecx, edi, eax);
    edx = 0;
    *((esi + 0x800)) = dx;
    MessageBoxW (edx, esi, "Error", edx);
    eax = *((ebp - 4));
    LocalFree (eax);
    LocalFree (esi);
    ExitProcess (edi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-008-restarter/ia32_pe/subject.exe @ 0x4010a0 */
#include <stdint.h>
 
uint32_t fcn_004010a0 (void) {
    LPWIN32_FIND_DATAW lpFindFileData;
    esi = 0;
    eax = DeleteFileW (edi, esi, ebx);
    while (eax != 0) {
label_0:
        eax = 1;
        return eax;
        SetFileAttributesW (edi, 0x80);
        eax = void (*ebx)(uint32_t) (edi);
    }
    ebx = *(sym.imp.KERNEL32.dll_Sleep);
label_1:
    eax = DeleteFileW (edi);
    if (eax != 0) {
        goto label_0;
    }
    eax = FindFirstFileW (edi, ebp - 0x250);
    if (eax != -1) {
        goto label_2;
    }
    eax = GetLastError ();
    if (eax == 2) {
        goto label_0;
    }
    goto label_3;
label_2:
    FindClose (eax);
label_3:
    eax = void (*ebx)(uint32_t) (0x64);
    esi++;
    if (esi < 0xa) {
        goto label_1;
    }
    eax = 0;
    return eax;
}
