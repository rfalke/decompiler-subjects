void f(union { __size32 *; __size32; } param1);

/** address: 0x080480b8 */
void f(union { __size32 *; __size32; } param1)
{
    *(__size32*)param1 = 10;
    *(__size32*)(param1 + 4) = 20;
    return;
}

