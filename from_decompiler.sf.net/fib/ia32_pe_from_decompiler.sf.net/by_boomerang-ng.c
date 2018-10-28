__size32 proc_0x00401000(int param1);
void proc_0x00401050(unsigned long long param1, unsigned int param2, unsigned int param3);
void _start();

/** address: 0x00401000 */
__size32 proc_0x00401000(int param1)
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{7}

    if (param1 >= 1) {
        eax_1 = proc_0x00401000(param1 - 2);
        eax = proc_0x00401000(param1 - 1);
        eax += eax_1;
    }
    else {
        eax = 1;
    }
    return eax;
}

/** address: 0x00401050 */
void proc_0x00401050(unsigned long long param1, unsigned int param2, unsigned int param3)
{
    unsigned int ecx; 		// r25
    union { unsigned int; unsigned char *; } ecx_1; 		// r25{9}
    __size32 ecx_2; 		// r25{13}
    long long edx; 		// r26
    unsigned long long esi; 		// r30
    union { unsigned char *; unsigned int; } local0; 		// ecx_1{9}
    union { __size8 *; unsigned int; } local1; 		// ecx{16}

    ecx = param2;
    local0 = ecx;
    local1 = ecx;
    if (param2 < (unsigned int)(param2 + param3 - 1)) {
        esi = param1;
        do {
            ecx_1 = local0;
            edx = (esi) * (unsigned long long)0xcccccccd >> 32;
            *(unsigned char*)ecx_1 = (unsigned char) esi - ((unsigned long long)edx >> 3) * 5 + ((unsigned long long)edx >> 3) * 5 + 48;
            ecx_2 = ecx_1 + 1;
            esi = (unsigned long long)edx >> 3;
            local0 = ecx_2;
            local1 = ecx_2;
        } while (ecx_1 + 1 < (unsigned int)(param2 + param3 - 1));
    }
    ecx = local1;
    *(__size8*)ecx = 0;
    return;
}

/** address: 0x004010a0 */
void _start()
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{2}
    unsigned int esp; 		// r28

    eax_1 = proc_0x00401000(9);
    eax = proc_0x00401000(8);
    proc_0x00401050(eax_1 + eax, (esp - 100), 100);
    return;
}

