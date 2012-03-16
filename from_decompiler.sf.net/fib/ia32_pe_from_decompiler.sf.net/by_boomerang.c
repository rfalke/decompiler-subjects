void proc2(unsigned long long param1, unsigned int param2, unsigned int param3);
void _start();

// address: 0x401000
__size32 proc1(int param1) {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{21}

    if (param1 >= 1) {
        eax_1 = proc1(param1 - 2);
        eax = proc1(param1 - 1);
        eax += eax_1;
    } else {
        eax = 1;
    }
    return eax;
}

// address: 0x401050
void proc2(unsigned long long param1, unsigned int param2, unsigned int param3) {
    unsigned char al; 		// r8
    unsigned long long eax; 		// r24
    union { unsigned char * x3; unsigned int x4; } ecx; 		// r25
    union { unsigned char * x3; unsigned int x4; } ecx_1; 		// r25{64}
    unsigned long long edx; 		// r26
    unsigned long long esi; 		// r30

    ecx = param2;
    if (param2 < (unsigned int)(param2 + param3 - 1)) {
        esi = param1;
        do {
            ecx_1 = ecx;
            edx = (esi) * (unsigned long long)0xcccccccd >> 32;
            eax = edx / 8 * 5 + edx / 8 * 5;
            al = (unsigned char) esi - eax + 48;
            *(unsigned char*)ecx_1 = al;
            ecx = ecx_1 + 1;
            esi = edx / 8;
        } while (ecx_1 + 1 < (unsigned int)(param2 + param3 - 1));
    }
    *(__size8*)ecx = 0;
    return;
}

// address: 0x4010a0
void _start() {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{14}
    unsigned int esp; 		// r28

    eax_1 = proc1(9);
    eax = proc1(8);
    proc2(eax_1 + eax, (esp - 100), 100);
    return;
}

