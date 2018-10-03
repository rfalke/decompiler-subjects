__size32 sum;// 4 bytes
int main(int argc, char *argv[]);
void with_alloca(unsigned int param1);
void with_array(unsigned int param1);
void fill(union { void *; __size32; } param1, unsigned int param2);
void use(union { __size32 *; __size32; } param1);

/** address: 0x080484f6 */
int main(int argc, char *argv[])
{
    with_alloca(argc);
    with_array(argc);
    return 0;
}

/** address: 0x0804849b */
void with_alloca(unsigned int param1)
{
    int ecx; 		// r25
    __size32 esp; 		// r28

    ecx = param1 * 4 + 15 & ~0xf;
    *(unsigned int*)(esp - ecx - 40) = param1;
    *(__size32*)(esp - ecx - 44) = esp - ecx - 28;
    fill(*(esp - ecx - 44), *(esp - ecx - 40));
    *(__size32*)(esp - ecx - 44) = (esp - 24);
    use(*(esp - ecx - 44));
    *(__size32*)(esp - ecx - 44) = esp - ecx - 28;
    use(*(esp - ecx - 44));
    *(__size32*)(esp - ecx - 44) = (esp - 20);
    use(*(esp - ecx - 44));
    return;
}

/** address: 0x08048436 */
void with_array(unsigned int param1)
{
    int ecx; 		// r25
    __size32 esp; 		// r28

    ecx = param1 * 4 + 15 & ~0xf;
    *(unsigned int*)(esp - ecx - 40) = param1;
    *(__size32*)(esp - ecx - 44) = esp - ecx - 28;
    fill(*(esp - ecx - 44), *(esp - ecx - 40));
    *(__size32*)(esp - ecx - 44) = (esp - 20);
    use(*(esp - ecx - 44));
    *(__size32*)(esp - ecx - 44) = esp - ecx - 28;
    use(*(esp - ecx - 44));
    *(__size32*)(esp - ecx - 44) = (esp - 24);
    use(*(esp - ecx - 44));
    return;
}

/** address: 0x08048419 */
void fill(union { void *; __size32; } param1, unsigned int param2)
{
    memset(param1, 120, param2 * 4);
    return;
}

/** address: 0x0804840c */
void use(union { __size32 *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *param1;
    sum += eax;
    return;
}

