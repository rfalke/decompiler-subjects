/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [00] -r-x section size 4096 named .text */
    eax = LoadLibraryA ("kernel32");
    *(0x403009) = eax;
    if (eax != 0) {
        eax = GetProcAddress (*(0x403009), "WinExec");
        *(0x403015) = eax;
        if (eax != 0) {
            eax = CreateFileA ("XOROX-KO.exe", 0x40000000, 0, 0, 3, 0x80, 0);
            *(0x40304e) = eax;
            eax++;
            if (eax == 0) {
                goto label_0;
            }
            SetFilePointer (*(0x40304e), 0x31, 0, 0);
            WriteFile (*(0x40304e), 0x403015, 4, 0x403052, 0);
            CloseHandle (*(0x40304e));
        }
    } else {
label_0:
        MessageBoxA (0, "ERROR! (>_<)", "XOROX-KO SETUP", 0);
        goto label_1;
    }
    MessageBoxA (0, "DONE! (^_^)", "XOROX-KO SETUP", 0);
label_1:
    FreeLibrary (*(0x403009));
    ExitProcess (0);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010e8 */
#include <stdint.h>
 
void LoadLibraryA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010e2 */
#include <stdint.h>
 
void GetProcAddress (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010d0 */
#include <stdint.h>
 
void CreateFileA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010ee */
#include <stdint.h>
 
void SetFilePointer (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010f4 */
#include <stdint.h>
 
void WriteFile (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010ca */
#include <stdint.h>
 
void CloseHandle (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010c4 */
#include <stdint.h>
 
void MessageBoxA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010dc */
#include <stdint.h>
 
void FreeLibrary (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_354/ia32_pe/subject.exe @ 0x4010d6 */
#include <stdint.h>
 
void ExitProcess (void) {
}
