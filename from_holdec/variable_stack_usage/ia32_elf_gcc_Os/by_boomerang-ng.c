__size32 sum;// 4 bytes
int main(int argc, char *argv[]);
void with_alloca(unsigned int param1);
void with_array(unsigned int param1);
void fill(union { __size8 *; __size32; } param1, unsigned int param2);
void use(union { __size32 *; __size32; } param1);

/** address: 0x080482e0 */
int main(int argc, char *argv[])
{
    with_alloca(argc);
    with_array(argc);
    return 0;
}

/** address: 0x08048474 */
void with_alloca(unsigned int param1)
{
    int eax; 		// r24
    int edx; 		// r26
    int esp; 		// r28

    eax = param1 * 4 + 30 & ~0xf;
    *(int*)(esp - eax - 32) = eax;
    *(int*)(esp - eax - 36) = eax;
    *(unsigned int*)(esp - eax - 40) = param1;
    edx = esp - eax - 13 & ~0xf;
    *(int*)(esp - eax - 44) = edx;
    fill(*(esp - eax - 44), *(esp - eax - 40));
    *(int*)(esp - eax - 44) = (esp - 20);
    use(*(esp - eax - 44));
    *(int*)(esp - eax - 44) = edx;
    use(*(esp - eax - 44));
    *(int*)(esp - eax - 44) = (esp - 16);
    use(*(esp - eax - 44));
    return;
}

/** address: 0x08048423 */
void with_array(unsigned int param1)
{
    int eax; 		// r24
    __size32 esp; 		// r28

    eax = param1 * 4 + 18 & ~0xf;
    *(int*)(esp - eax - 32) = eax;
    *(int*)(esp - eax - 36) = eax;
    *(unsigned int*)(esp - eax - 40) = param1;
    *(__size32*)(esp - eax - 44) = esp - eax - 28;
    fill(*(esp - eax - 44), *(esp - eax - 40));
    *(__size32*)(esp - eax - 44) = (esp - 20);
    use(*(esp - eax - 44));
    *(__size32*)(esp - eax - 44) = esp - eax - 28;
    use(*(esp - eax - 44));
    *(__size32*)(esp - eax - 44) = (esp - 16);
    use(*(esp - eax - 44));
    return;
}

/** address: 0x0804840b */
void fill(union { __size8 *; __size32; } param1, unsigned int param2)
{
    if (param2 * 4 != 0) {
        *(__size8*)param1 = 120;
    }
    return;
}

/** address: 0x080483fb */
void use(union { __size32 *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *param1;
    sum += eax;
    return;
}

