int main(int argc, char *argv[]);
__size32 test_1(unsigned long long param1);
__size32 test_2(unsigned long long param1);
__size32 test_3(unsigned int param1);

/** address: 0x08048310 */
int main(int argc, char *argv[])
{
    long long eax_2; 		// r24{29}
    unsigned int eax_5; 		// r24{30}
    long long eax_8; 		// r24{31}
    unsigned long long ebx; 		// r27
    unsigned long long edi; 		// r31
    int local0; 		// m[esp - 64]
    unsigned int local1; 		// m[esp - 68]
    long long local2; 		// m[esp - 72]
    unsigned long long local3; 		// m[esp - 76]
    __size32 local4; 		// m[esp - 80]
    unsigned int local5; 		// m[esp - 84]

    ebx = 0;
    edi = 0;
    for(;;) {
        eax_2 = test_1(ebx * 0xf4240);
        eax_5 = test_2(ebx * 0xf4240);
        eax_8 = test_3(ebx * 0xf4240);
        if (eax_2 == eax_5) {
            if (eax_2 != eax_8) {
bb0x8048366:
                local0 = eax_5 - eax_2;
                local1 = eax_5;
                local2 = eax_2;
                local3 = ebx * 0xf4240;
                local4 = 0x8048564;
                printf("%u %u %u (diff=%d) %u (diff=%d)\n", ebx * 0xf4240, eax_2, eax_5, eax_5 - eax_2, eax_8, eax_8 - eax_2);
            }
        }
        else {
            goto bb0x8048366;
        }
        if (edi != 0 && edi > ebx * 0xf4240) {
            return 0;
        }
        edi = ebx * 0xf4240;
        ebx++;
    }
}

/** address: 0x08048490 */
__size32 test_1(unsigned long long param1)
{
    unsigned long long edx_1; 		// r26{3}

    edx_1 = (param1) * 0x24924925 >> 32;
    return ((unsigned int)(param1 - edx_1) >> 1) + edx_1 >> 2;
}

/** address: 0x080484b0 */
__size32 test_2(unsigned long long param1)
{
    unsigned long long edx_1; 		// r26{3}

    edx_1 = (param1) * 0x24924925 >> 32;
    return (unsigned int)(edx_1 + ((unsigned int)(param1 - edx_1) >> 1)) >> 2;
}

/** address: 0x080484d0 */
__size32 test_3(unsigned int param1)
{
    return (param1) * 0x24924925 >> 32;
}

