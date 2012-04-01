L004003B0()
{
    goto ( *6295552);
}

func(struct s1* s1p)
{// addr = 0x004004AC
    _unknown_ _v16;
    _unknown_ __rbp;

    __rdi = __rdi;
    _v16 = __rdi;
     *_v16 = 1;
     *((char*)(_v16 + 8)) = 107;
     *((long long*)(_v16 + 16)) = 10;
    return;
}

int main()
{// addr = 0x004004D4
    _unknown_ __rbp;

    func();
    return __eax;
}

int main()
{// addr = 0x004004D4
    _unknown_ __rbp;

    @rec 0x004004AC@func@();
    return __eax;
}

// Statistics:
//       4 Register nodes
//       0 Temporaries nodes
//       2 Casts
//      26 Statements
//       0 Labels
//       0 Gotos
//       3 Blocks
//      32 Nodes
//       0 Assembly nodes
//       3 Unknown Types


