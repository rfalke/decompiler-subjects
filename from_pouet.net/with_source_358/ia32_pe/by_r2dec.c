/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [00] -r-x section size 4096 named .text */
    eax = LoadLibraryA ("kernel32");
    *(0x403016) = eax;
    if (eax != 0) {
        eax = LoadLibraryA ("user32");
        *(0x40301a) = eax;
        if (eax != 0) {
            eax = LoadLibraryA ("gdi32");
            *(0x40301e) = eax;
            if (eax == 0) {
                goto label_0;
            }
            eax = GetProcAddress (*(0x403016), "LoadLibraryA");
            *(0x403048) = eax;
            if (eax == 0) {
                goto label_0;
            }
            eax = GetProcAddress (*(0x40301a), "GetDC");
            *(0x40304c) = eax;
            if (eax == 0) {
                goto label_0;
            }
            eax = GetProcAddress (*(0x40301e), "SetPixel");
            *(0x403050) = eax;
            if (eax == 0) {
                goto label_0;
            }
            eax = GetProcAddress (*(0x40301a), "ReleaseDC");
            *(0x403054) = eax;
            if (eax == 0) {
                goto label_0;
            }
            eax = CreateFileA ("ROXOR-2A.exe", 0x40000000, 0, 0, 3, 0x80, 0);
            *(0x40308d) = eax;
            eax++;
            if (eax == 0) {
                goto label_0;
            }
            SetFilePointer (*(0x40308d), 0xba, 0, 0);
            WriteFile (*(0x40308d), 0x403048, 4, 0x403091, 0);
            SetFilePointer (*(0x40308d), 0xc4, 0, 0);
            WriteFile (*(0x40308d), 0x40304c, 4, 0x403091, 0);
            SetFilePointer (*(0x40308d), 0xdd, 0, 0);
            WriteFile (*(0x40308d), 0x403050, 4, 0x403091, 0);
            SetFilePointer (*(0x40308d), 0xf7, 0, 0);
            WriteFile (*(0x40308d), 0x403054, 4, 0x403091, 0);
            CloseHandle (*(0x40308d));
        }
    } else {
label_0:
        void (*0x4011f4)() ();
        goto label_1;
    }
    void (*0x4011f4)() ();
label_1:
    FreeLibrary (*(0x403016));
    FreeLibrary (*(0x40301a));
    FreeLibrary (*(0x40301e));
    ExitProcess (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x401218 */
#include <stdint.h>
 
void LoadLibraryA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x401212 */
#include <stdint.h>
 
void GetProcAddress (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x401200 */
#include <stdint.h>
 
void CreateFileA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x40121e */
#include <stdint.h>
 
void SetFilePointer (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x401224 */
#include <stdint.h>
 
void WriteFile (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x4011fa */
#include <stdint.h>
 
void CloseHandle (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x40120c */
#include <stdint.h>
 
void FreeLibrary (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_358/ia32_pe/subject.exe @ 0x401206 */
#include <stdint.h>
 
void ExitProcess (void) {
}
