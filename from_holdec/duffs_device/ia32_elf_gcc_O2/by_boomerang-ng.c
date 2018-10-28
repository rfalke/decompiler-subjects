int main(int argc, char *argv[]);
void copy1_four_times();
void copy1_eight_times();
void copy2_four_times(__size32 param1, __size32 param2, int param3);
void copy2_eight_times(__size32 param1, __size32 param2, int param3);

/** address: 0x08048650 */
int main(int argc, char *argv[])
{
    void *eax; 		// r24
    void *eax_1; 		// r24{2}
    int ebp; 		// r29
    int ecx; 		// r25
    union { void *; __size32; } edi; 		// r31
    int edx; 		// r26
    union { void *; __size32; } esi; 		// r30
    int esp; 		// r28

    eax_1 = malloc(200);
    eax = malloc(200); /* Warning: also results in ecx, edx */
    copy1_four_times(eax, ecx, edx, esp - 4, eax_1, eax, SUBFLAGS32(esp - 12, 24, esp - 36), esp == 36, (unsigned int)(esp - 12) < 24, ebp, edi, esi, 100, eax_1, eax, pc, argc, argv);
}

/** address: 0x080483d0 */
void copy1_four_times()
{
}

/** address: 0x08048470 */
void copy1_eight_times()
{
}

/** address: 0x08048520 */
void copy2_four_times(__size32 param1, __size32 param2, int param3)
{
    __size32 eax; 		// r24
    unsigned int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 ecx_1; 		// r25{13}
    __size32 edx; 		// r26

    eax = param1;
    edx = param2;
    if (param3 > 0) {
        ecx = 4 - param3;
        for(;;) {
            ecx_1 = ecx;
            if (ecx_1 == 2) {
bb0x804857d:
                ebx = *(unsigned short*)edx;
                edx += 2;
                *(__size16*)eax = (unsigned short) ebx;
                eax += 2;
            }
            else {
                if (ecx_1 != 3) {
                    if (ecx_1 != 1) {
                        ebx = *(unsigned short*)edx;
                        edx += 2;
                        *(__size16*)eax = (unsigned short) ebx;
                        eax += 2;
                    }
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                    goto bb0x804857d;
                }
            }
            ebx = *(unsigned short*)edx;
            ecx = ecx_1 + 4;
            *(__size16*)eax = (unsigned short) ebx;
            if (ecx_1 + 4 == (param3 - 4 & ~0x3) - param3 + 8) {
            }
            eax += 2;
            edx += 2;
        }
    }
    return;
}

/** address: 0x080485a0 */
void copy2_eight_times(__size32 param1, __size32 param2, int param3)
{
    __size32 eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ecx_1; 		// r25{59}
    int ecx_2; 		// r25{0}
    unsigned int ecx_5; 		// r25{8}
    unsigned int ecx_8; 		// r25{53}
    __size32 edx; 		// r26
    unsigned int local0; 		// ecx_1{59}

    eax = param1;
    edx = param2;
    if (param3 > 0) {
        ecx_5 = 8 - param3;
        local0 = ecx_5;
        for(;;) {
            ecx_1 = local0;
            if (ecx_1 > 7) {
            }
            else {
                switch(ecx_2) {
                case 0:
                    goto bb0x80485d0;
                case 1:
bb0x80485dc:
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                case 2:
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                case 3:
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                case 4:
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                case 5:
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                case 6:
                    ebx = *(unsigned short*)edx;
                    edx += 2;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax += 2;
                    break;
                case 7:
                }
                ebx = *(unsigned short*)edx;
                ecx_8 = ecx_1 + 8;
                *(__size16*)eax = (unsigned short) ebx;
                local0 = ecx_8;
                if (ecx_1 + 8 == (param3 - 8 & ~0x7) - param3 + 16) {
                    return;
                }
                eax += 2;
                edx += 2;
            }
bb0x80485d0:
            ebx = *(unsigned short*)edx;
            edx += 2;
            *(__size16*)eax = (unsigned short) ebx;
            eax += 2;
            goto bb0x80485dc;
        }
    }
    return;
}

