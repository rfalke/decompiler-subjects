_initterm()
{// addr = 0x00401B9C
    goto __imp___initterm;
}

L00401BB0()
{
    _push(196608);
    _push(65536);
    _controlfp();
    __esp = __esp + 8;
    return;
}

L00401BE0()
{
    return;
}

_controlfp()
{// addr = 0x00401BF6
    goto __imp___controlfp;
}

L00401BFC(_unknown_ __esp, intOrPtr _a4, intOrPtr _a8, intOrPtr _a12, intOrPtr _a16)
{
    __esp = __esp;
    _push(_a16);
    _push(_a12);
    _push(_a8);
    _push(_a4);
    L00401C60();
    return;
}

L00401C60()
{
    goto ( *4211728);
}

L00401C60()
{
    goto ( *4211728);
}

// Statistics:
//       4 Register nodes
//       0 Temporaries nodes
//       0 Casts
//      32 Statements
//       0 Labels
//       0 Gotos
//       6 Blocks
//      35 Nodes
//       0 Assembly nodes
//       1 Unknown Types


