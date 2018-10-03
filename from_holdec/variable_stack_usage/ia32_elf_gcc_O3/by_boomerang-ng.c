__size32 sum;// 4 bytes
int main(int argc, char *argv[]);
void with_alloca(unsigned int param1);
void with_array(unsigned int param1);
void fill(union { void *; __size32; } param1, unsigned int param2);
void use(union { __size32 *; __size32; } param1);

/** address: 0x08048310 */
int main(int argc, char *argv[])
{
    with_alloca(argc);
    with_array(argc);
    return 0;
}

/** address: 0x080484d0 */
void with_alloca(unsigned int param1)
{
    int eax; 		// r24
    int ebx; 		// r27
    int esp; 		// r28

    eax = param1 * 4 + 30 & ~0xf;
    *(unsigned int*)(esp - eax - 40) = param1;
    ebx = esp - eax - 13 & ~0xf;
    *(int*)(esp - eax - 44) = ebx;
    fill(*(esp - eax - 44), *(esp - eax - 40));
    *(int*)(esp - eax - 44) = (esp - 20);
    use(*(esp - eax - 44));
    *(int*)(esp - eax - 44) = ebx;
    use(*(esp - eax - 44));
    *(int*)(esp - eax - 44) = (esp - 16);
    use(*(esp - eax - 44));
    return;
}

/** address: 0x08048470 */
void with_array(unsigned int param1)
{
    int eax; 		// r24
    __size32 esp; 		// r28

    eax = param1 * 4 + 18 & ~0xf;
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

/** address: 0x08048450 */
void fill(union { void *; __size32; } param1, unsigned int param2)
{
    memset(param1, 120, param2 * 4);
    return;
}

/** address: 0x08048440 */
void use(union { __size32 *; __size32; } param1)
{
    __size32 eax; 		// r24

    eax = *param1;
    sum += eax;
    return;
}

