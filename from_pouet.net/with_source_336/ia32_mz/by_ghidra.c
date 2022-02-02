typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 unaff_ES;
  
  puVar4 = (undefined *)(DAT_1025_000c + -1);
  _DAT_0000_061c = DAT_1025_000a + 0x1025;
  puVar5 = puVar4;
  _DAT_0000_061e = unaff_ES;
  for (iVar3 = DAT_1025_000c; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  _DAT_0000_061a = 0x2b;
  return;
}


