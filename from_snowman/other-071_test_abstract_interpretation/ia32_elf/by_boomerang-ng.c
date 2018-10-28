void _start(union { __size16 *; __size32; unsigned int *; } param1);

/** address: 0x00000175 */
void _start(union { __size16 *; __size32; unsigned int *; } param1)
{
    unsigned short ax; 		// r0

    ax = *param1;
    *(int*)param1 = ((((ax) | 0x11220000) & ~0xffff | (ax & 0xff)) & ~0xff | 85) & ~0xff | 102;
}

