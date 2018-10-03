__size32 gcd(int param1, int param2);

/** address: 0x08048094 */
__size32 gcd(int param1, int param2)
{
    int eax; 		// r24
    __size32 edx; 		// r26

    if (param2 != 0) {
        eax = gcd(param2, (param1 >> 31 << 32 | param1) % param2); /* Warning: also results in edx */
    }
    else {
        eax = param1;
    }
    return eax; /* WARNING: Also returning: edx := edx */
}

