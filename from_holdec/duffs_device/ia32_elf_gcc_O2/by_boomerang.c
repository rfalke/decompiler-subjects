void copy1_four_times();
void copy1_eight_times();
void copy2_four_times(__size16 *param1, unsigned short *param2, int param3);
void copy2_eight_times(__size16 *param1, unsigned short *param2, int param3);

// address: 0x8048650
int main(int argc, char *argv[], char *envp[]) {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{15}
    __size32 ebp; 		// r29
    int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28

    eax_1 = malloc(200);
    eax = malloc(200); /* Warning: also results in ecx, edx */
    copy1_four_times(pc, eax, eax_1, 100, esi, edi, ebp, argc, argv, envp, eax, ecx, edx, esp - 4, eax_1, eax, SUBFLAGS32(esp - 12, 24, esp - 36), esp - 36 == 0, (unsigned int)(esp - 12) < 24);
}

// address: 0x80483d0
void copy1_four_times() {
}

// address: 0x8048470
void copy1_eight_times() {
}

// address: 0x8048520
void copy2_four_times(__size16 *param1, unsigned short *param2, int param3) {
    __size16 *eax; 		// r24
    unsigned int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 ecx_1; 		// r25{97}
    unsigned short *edx; 		// r26
    __size32 esi; 		// r30

    eax = param1;
    edx = param2;
    if (param3 > 0) {
        ecx = 4 - param3;
        esi = (param3 - 4 & 0xfffffffc) - param3 + 8;
        for(;;) {
            ecx_1 = ecx;
            if (ecx_1 == 2) {
L3:
                ebx = *(unsigned short*)edx;
                edx++;
                *(__size16*)eax = (unsigned short) ebx;
                eax++;
            } else {
                if (ecx_1 != 3) {
                    if (ecx_1 != 1) {
                        ebx = *(unsigned short*)edx;
                        edx++;
                        *(__size16*)eax = (unsigned short) ebx;
                        eax++;
                    }
                    ebx = *(unsigned short*)edx;
                    edx++;
                    *(__size16*)eax = (unsigned short) ebx;
                    eax++;
                    goto L3;
                }
            }
            ebx = *(unsigned short*)edx;
            ecx = ecx_1 + 4;
            *(__size16*)eax = (unsigned short) ebx;
            if (ecx_1 + 4 == esi) {
            }
            eax++;
            edx++;
        }
    }
    return;
}

// address: 0x80485a0
void copy2_eight_times(__size16 *param1, unsigned short *param2, int param3) {
    __size16 *eax; 		// r24
    __size16 *eax_1; 		// r24{142}
    unsigned int ebx; 		// r27
    unsigned int ecx; 		// r25
    unsigned int ecx_1; 		// r25{167}
    __size32 ecx_2; 		// r25{128}
    unsigned short *edx; 		// r26
    unsigned short *edx_1; 		// r26{143}
    __size32 esi; 		// r30
    __size16 *local0; 		// eax{126}
    unsigned short *local1; 		// edx{127}
    __size16 *local2; 		// eax{134}
    unsigned short *local3; 		// edx{135}
    __size16 *local4; 		// eax_1{142}
    unsigned short *local5; 		// edx_1{143}
    __size16 *local6; 		// eax_1{150}
    unsigned short *local7; 		// edx_1{151}
    __size16 *local8; 		// eax_1{158}
    unsigned short *local9; 		// edx_1{159}

    eax = param1;
    edx = param2;
    if (param3 > 0) {
        ecx = 8 - param3;
        esi = (param3 - 8 & 0xfffffff8) - param3 + 16;
        for(;;) {
            eax_1 = eax;
            ecx_1 = ecx;
            edx_1 = edx;
            local0 = eax_1;
            local1 = edx_1;
            local2 = eax_1;
            local3 = edx_1;
            local4 = eax_1;
            local5 = edx_1;
            local6 = eax_1;
            local7 = edx_1;
            local8 = eax_1;
            local9 = edx_1;
            if (ecx_1 > 7) {
L9:
                ebx = *(unsigned short*)edx_1;
                edx = edx_1 + 2;
                *(__size16*)eax_1 = (unsigned short) ebx;
                eax = eax_1 + 2;
                local0 = eax;
                local1 = edx;
            }
            switch(ecx_2) {
            case 0:
                goto L9;
            case 1:
                eax = local0;
                edx = local1;
                ebx = *(unsigned short*)edx;
                *(__size16*)eax = (unsigned short) ebx;
            case 2:
                ebx = *(unsigned short*)edx_1;
                edx = edx_1 + 2;
                *(__size16*)eax_1 = (unsigned short) ebx;
                eax = eax_1 + 2;
                local2 = eax;
                local3 = edx;
            case 3:
                eax = local2;
                edx = local3;
                ebx = *(unsigned short*)edx;
                *(__size16*)eax = (unsigned short) ebx;
            case 4:
                ebx = *(unsigned short*)edx_1;
                edx = edx_1 + 2;
                *(__size16*)eax_1 = (unsigned short) ebx;
                eax = eax_1 + 2;
                local4 = eax;
                local5 = edx;
            case 5:
                eax_1 = local4;
                edx_1 = local5;
                ebx = *(unsigned short*)edx_1;
                edx = edx_1 + 2;
                *(__size16*)eax_1 = (unsigned short) ebx;
                eax = eax_1 + 2;
                local6 = eax;
                local7 = edx;
            case 6:
                eax_1 = local6;
                edx_1 = local7;
                ebx = *(unsigned short*)edx_1;
                edx = edx_1 + 2;
                *(__size16*)eax_1 = (unsigned short) ebx;
                eax = eax_1 + 2;
                local8 = eax;
                local9 = edx;
                break;
            case 7:
            }
            eax_1 = local8;
            edx_1 = local9;
            ebx = *(unsigned short*)edx_1;
            ecx = ecx_1 + 8;
            *(__size16*)eax_1 = (unsigned short) ebx;
            if (ecx_1 + 8 == esi) {
            }
            eax = eax_1 + 2;
            edx = edx_1 + 2;
        }
    }
    return;
}

