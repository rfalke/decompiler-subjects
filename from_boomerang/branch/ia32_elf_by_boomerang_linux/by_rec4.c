int scanf(char* format)
{// addr = 0x080482C4
    goto __imp__scanf;
}

__libc_start_main()
{// addr = 0x080482D4
    goto __imp____libc_start_main;
}

int fwrite(void* src, int sz, int nitems, struct _IO_FILE* fp)
{// addr = 0x080482E4
    goto __imp__fwrite;
}

L0804832E()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 5386 + 24));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

L0804832E()
{
    _unknown_ _t3;
    _unknown_ _t5;

    _pop(__ebx);
    __eax =  *((intOrPtr*)(_t3 + 5386 + 24));
    if(__eax != 0) {
         *__eax();
    }
    _pop(__ebp);
    return;
}

// Statistics:
//       5 Register nodes
//       1 Temporaries nodes
//       1 Casts
//      21 Statements
//       0 Labels
//       0 Gotos
//       4 Blocks
//      26 Nodes
//       0 Assembly nodes
//       2 Unknown Types


