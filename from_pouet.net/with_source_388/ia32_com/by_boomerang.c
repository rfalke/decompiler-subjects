// address: 0x0
void proc1(__size32 *param1) {
    unsigned char al; 		// r8
    int eax; 		// r24

    al = (*0x75ba29a2 + 162);
    eax = 0x75ba29a2 >> 8 & 0xffffff | (al);
    if ( !ADDFLAGS8(162, *eax, al)) {
    }
    *(__size32*)param1 = *0xf3fc0154;
    return;
}

