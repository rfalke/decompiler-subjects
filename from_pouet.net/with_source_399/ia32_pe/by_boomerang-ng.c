int main(int argc, char *argv[]);

/** address: 0x004126d0 */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24

    eax = _amsg_exit();
    return eax;
}

