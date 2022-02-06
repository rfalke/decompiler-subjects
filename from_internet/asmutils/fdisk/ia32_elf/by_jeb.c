
int start(int param0, unsigned int param1) {
    int* ptr0;
    unsigned int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    unsigned int v7;
    char v8;
    unsigned int v9 = v7;
    char v10 = v9 == 2;
    char v11 = (int)v9 < 2;
    char v12 = __parity__((unsigned char)v9 - 2);
    char v13 = v9 < 2;
    char v14 = (((v9 - 2) ^ v9) & (v9 ^ 0x2)) < 0;
    char v15 = (((v9 - 2) ^ (v9 ^ 0x2)) >>> 4) & 0x1;
    if(v10) {
        int v16 = param0;
        v6 = param1;
        int v17 = 0;
        v5 = 1;
        v4 = 0;
        v3 = 1;
        v2 = 0;
        v1 = 0;
        int v18 = 0x8000;
        param1 = 5;
        v0 = 5;
        ptr0 = &v8;
        interrupt(128);
    }
    v6 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v2 = 0;
    v1 = 0;
    v7 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80481A6() {
    char v0;
    int v1 = (unsigned int)gvar_80484FA;
    int v2 = sub_80483DF();
    int v3 = 1;
    int v4 = "/S  FAT16 FAT32 Extended Linux ext2 Linux swap BSD slice Unk update me! FreeBad sector signature ! - Do not panic might be fdisk bug...\n";
    int v5 = 1;
    int v6 = 4;
    int v7 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

void sub_80481EB() {
    char v0 = gvar_804870E == 0x55aa;
    char v1 = (short)gvar_804870E < 0x55aa;
    char v2 = __parity__((unsigned char)gvar_804870E - 0xaa);
    char v3 = gvar_804870E < 0x55aa;
    char v4 = (((gvar_804870E - 0x55aa) ^ gvar_804870E) & (gvar_804870E ^ 0x55aa)) < 0;
    char v5 = (((gvar_804870E - 0x55aa) ^ (gvar_804870E ^ 0x55aa)) >>> 4) & 0x1;
    jump v0 ? &sub_804821D: &sub_80481F6;
}

void sub_80481F6() {
    char v0 = gvar_804870E == 0xaa55;
    char v1 = (short)gvar_804870E < 0xffffaa55;
    char v2 = __parity__((unsigned char)gvar_804870E - 85);
    char v3 = gvar_804870E < 0xaa55;
    char v4 = (((gvar_804870E - 0xaa55) ^ gvar_804870E) & (gvar_804870E ^ 0xaa55)) < 0;
    char v5 = (((gvar_804870E - 0xaa55) ^ (gvar_804870E ^ 0xaa55)) >>> 4) & 0x1;
    jump v0 ? &sub_804821D: &sub_8048201;
}
