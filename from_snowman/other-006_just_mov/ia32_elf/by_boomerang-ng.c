void _start(__size32 param1);

/** address: 0x08048098 */
void _start(__size32 param1)
{
    *(__size32*)(param1 + 4) = 1000;
}

