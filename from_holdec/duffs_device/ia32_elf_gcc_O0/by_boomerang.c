void copy1_four_times();
void copy1_eight_times();
void copy2_four_times(__size16 *param1, unsigned short *param2, int param3);
void copy2_eight_times(__size16 *param1, unsigned short *param2, int param3);

// address: 0x8048704
int main(int argc, char *argv[], char *envp[]) {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{13}
    __size32 ebp; 		// r29
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28

    eax_1 = malloc(200);
    eax = malloc(200); /* Warning: also results in ecx, edx */
    copy1_four_times(pc, eax, eax_1, 100, 200, eax_1, eax, ebp, argc, argv, envp, eax, ecx, edx, esp - 4, SUBFLAGS32(esp - 4, 32, esp - 36), esp - 36 == 0, (unsigned int)(esp - 4) < 32);
}

// address: 0x80483f4
void copy1_four_times() {
}

// address: 0x8048498
void copy1_eight_times() {
}

// address: 0x8048586
void copy2_four_times(__size16 *param1, unsigned short *param2, int param3) {
    __size16 *eax; 		// r24
    unsigned int edx; 		// r26
    __size16 *local0; 		// m[esp + 4]
    unsigned short *local1; 		// m[esp + 8]
    __size16 *local10; 		// local0{122}
    unsigned short *local11; 		// local1{123}
    int local2; 		// m[esp + 12]
    __size16 *local3; 		// param1{115}
    unsigned short *local4; 		// param2{116}
    int local5; 		// param3{117}
    __size16 *local6; 		// local0{118}
    unsigned short *local7; 		// local1{119}
    __size16 *local8; 		// local0{120}
    unsigned short *local9; 		// local1{121}

    local3 = param1;
    local4 = param2;
    local5 = param3;
    if (param3 <= 0) {
    } else {
        param1 = local3;
        param2 = local4;
        param3 = local5;
        local6 = param1;
        local7 = param2;
        local8 = param1;
        local9 = param2;
        local10 = param1;
        local11 = param2;
        while (param3 != 0) {
            eax = 4 - param3;
            if (eax == 2) {
L4:
                local0 = local8;
                local1 = local9;
                edx = *(unsigned short*)local1;
                *(__size16*)local0 = (unsigned short) edx;
                local0++;
                local1++;
                local10 = local0;
                local11 = local1;
            } else {
                if (eax == 3) {
                    goto L3;
                } else {
                    if (eax == 1) {
                        goto L7;
                    } else {
                        edx = *(unsigned short*)param2;
                        *(__size16*)param1 = (unsigned short) edx;
                        local0 = param1 + 2;
                        local1 = param2 + 2;
                        local6 = local0;
                        local7 = local1;
                    }
L7:
                    local0 = local6;
                    local1 = local7;
                    edx = *(unsigned short*)local1;
                    *(__size16*)local0 = (unsigned short) edx;
                    local0++;
                    local1++;
                    local8 = local0;
                    local9 = local1;
                    goto L4;
                }
            }
L3:
            local0 = local10;
            local1 = local11;
            edx = *(unsigned short*)local1;
            *(__size16*)local0 = (unsigned short) edx;
            local0++;
            local1++;
            local2 = param3 - 4;
            local3 = local0;
            local4 = local1;
            local5 = local2;
            param1 = local3;
            param2 = local4;
            param3 = local5;
            local6 = param1;
            local7 = param2;
            local8 = param1;
            local9 = param2;
            local10 = param1;
            local11 = param2;
        }
    }
    return;
}

// address: 0x8048612
void copy2_eight_times(__size16 *param1, unsigned short *param2, int param3) {
    unsigned int eax; 		// r24
    unsigned int edx; 		// r26
    int local0; 		// m[esp + 12]
    __size16 *local1; 		// m[esp + 4]
    unsigned short *local10; 		// param2{177}
    __size16 *local11; 		// param1{178}
    unsigned short *local12; 		// param2{179}
    __size16 *local13; 		// param1{180}
    unsigned short *local14; 		// param2{181}
    unsigned short *local2; 		// m[esp + 8]
    __size16 *local3; 		// param1{170}
    unsigned short *local4; 		// param2{171}
    __size16 *local5; 		// param1{172}
    unsigned short *local6; 		// param2{173}
    __size16 *local7; 		// param1{174}
    unsigned short *local8; 		// param2{175}
    __size16 *local9; 		// param1{176}

    local3 = param1;
    local4 = param2;
    local5 = param1;
    local6 = param2;
    local7 = param1;
    local8 = param2;
    local9 = param1;
    local10 = param2;
    local11 = param1;
    local12 = param2;
    local13 = param1;
    local14 = param2;
    if (param3 <= 0) {
    } else {
        while (param3 != 0) {
            eax = 8 - param3;
            if (eax > 7) {
L10:
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local1 = param1 + 2;
                local2 = param2 + 2;
                local3 = local1;
                local4 = local2;
L9:
                param1 = local3;
                param2 = local4;
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local1 = param1 + 2;
                local2 = param2 + 2;
                local5 = local1;
                local6 = local2;
L8:
                param1 = local5;
                param2 = local6;
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local1 = param1 + 2;
                local2 = param2 + 2;
                local7 = local1;
                local8 = local2;
L7:
                param1 = local7;
                param2 = local8;
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local1 = param1 + 2;
                local2 = param2 + 2;
                local9 = local1;
                local10 = local2;
L6:
                param1 = local9;
                param2 = local10;
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
L5:
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local1 = param1 + 2;
                local2 = param2 + 2;
                local11 = local1;
                local12 = local2;
L4:
                param1 = local11;
                param2 = local12;
                edx = *(unsigned short*)param2;
                *(__size16*)param1 = (unsigned short) edx;
                local1 = param1 + 2;
                local2 = param2 + 2;
                local13 = local1;
                local14 = local2;
                break;
            }
            switch(8 - local0) {
            case 0:
                goto L10;
            case 1:
                goto L9;
            case 2:
                goto L8;
            case 3:
                goto L7;
            case 4:
                goto L6;
            case 5:
                goto L5;
            case 6:
                goto L4;
            case 7:
                break;
            }
            param1 = local13;
            param2 = local14;
            edx = *(unsigned short*)param2;
            *(__size16*)param1 = (unsigned short) edx;
        }
    }
    return;
}

