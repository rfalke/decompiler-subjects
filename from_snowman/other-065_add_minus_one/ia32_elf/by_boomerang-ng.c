void _start(union { __size32; __size32 *; } param1);

/** address: 0x08048098 */
void _start(union { __size32; __size32 *; } param1)
{
    *(__size32*)param1--;
    *(__size32*)param1++;
}

