
long exit_on_error() {
    long result;
    if(result >= 0L) {
        return result;
    }
    write_stderr();
    inefficiently_write_as_hex(8L);
    write_stderr();
    inefficiently_write_as_hex(60L);
    write_stderr();
    while(1) {
        syscall();
        ud2();
        write_stderr();
    }
}

void inc_tens_digit() {
    // Decompilation error
}

long inefficiently_write_as_hex(long param0) {
    long result;
    do {
        error_write_buffer = *(unsigned char*)(((result >>> (param0 & 0x3fL)) & 0xfL) + (long)&hexdigits);
        write_stderr();
        param0 = (unsigned long)((unsigned int)param0 - 4);
    }
    while(!((param0 >>> 31L) & 0x1L));
    return result;
}

void start() {
    // Decompilation error
}

long swap_buffers(long param0, unsigned long param1) {
    long result;
    long v0;
    *(long*)&iovec_base = (unsigned char)(v0 & 0xffffffffffe00000L);
    gvar_C00008 = param1;
    do {
        syscall();
        result = exit_on_error();
        *(long*)&iovec_base = *(long*)&iovec_base + result;
        gvar_C00008 -= result;
    }
    while(gvar_C00008);
    return result;
}

long write_stderr() {
    syscall();
    return 1L;
}
