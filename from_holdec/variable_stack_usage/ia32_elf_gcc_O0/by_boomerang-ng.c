__size32 sum;// 4 bytes
int main(int argc, char *argv[]);
void with_alloca(unsigned int param1);
void with_array(unsigned int param1);
void fill(union { void *; __size32; } param1, unsigned int param2);
void use(union { __size32 *; __size32; } param1);

/** address: 0x08048560 */
int main(int argc, char *argv[])
{
    with_alloca(argc);
    with_array(argc);
    return 0;
}

/** address: 0x080484da */
void with_alloca(unsigned int param1)
{
    int eax; 		// r24
    __size32 esp_1; 		// r28{3}
    __size32 esp_4; 		// r28{1}

    esp_1 = esp_4 - (param1 * 4 + 30) / 16 * 16 - 28;
    eax = esp_1 + 15 >> 4 << 4;
    *(unsigned int*)(esp_1 - 12) = param1;
    *(int*)(esp_1 - 16) = eax;
    fill(*(esp_1 - 16), *(esp_1 - 12));
    *(__size32*)(esp_1 - 16) = (esp_4 - 20);
    use(*(esp_1 - 16));
    *(int*)(esp_1 - 16) = eax;
    use(*(esp_1 - 16));
    *(__size32*)(esp_1 - 16) = (esp_4 - 24);
    use(*(esp_1 - 16));
    return;
}

/** address: 0x08048442 */
void with_array(unsigned int param1)
{
    unsigned int eax; 		// r24
    __size32 esp_1; 		// r28{3}
    __size32 esp_4; 		// r28{1}

    esp_1 = esp_4 - (param1 * 4 + 18) / 16 * 16 - 28;
    eax = (esp_1 + 3 >> 2) * 4;
    *(unsigned int*)(esp_1 - 12) = param1;
    *(unsigned int*)(esp_1 - 16) = eax;
    fill(*(esp_1 - 16), *(esp_1 - 12));
    *(__size32*)(esp_1 - 16) = (esp_4 - 24);
    use(*(esp_1 - 16));
    *(unsigned int*)(esp_1 - 16) = eax;
    use(*(esp_1 - 16));
    *(__size32*)(esp_1 - 16) = (esp_4 - 28);
    use(*(esp_1 - 16));
    return;
}

/** address: 0x08048422 */
void fill(union { void *; __size32; } param1, unsigned int param2)
{
    memset(param1, 120, param2 * 4);
    return;
}

/** address: 0x0804840b */
void use(union { __size32 *; __size32; } param1)
{
    __size32 edx; 		// r26

    edx = *param1;
    sum += edx;
    return;
}

