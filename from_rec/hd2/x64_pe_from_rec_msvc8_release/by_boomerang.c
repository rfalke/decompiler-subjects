void _start();

// address: 0x19d5
void proc1(__size8 param1) {
    __size32 eax; 		// r24

    eax = 0x4c000008 - *0x4c000008;
    *(__size8*)(eax + 59) = param1 + 0x4c000008;
}

// address: 0x15f1
void _start() {
    __size32 eax; 		// r24
    unsigned int esp; 		// r28

    proc1(pc, eax - 1, SUBFLAGS32(esp, 40, (esp - 40)), esp - 40 == 0, esp < 40);
}

