typedef unsigned char   undefined;




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = 0x105;
  iVar3 = 0x1105;
  _DAT_0000_739c = unaff_ES;
  _DAT_0000_739e = unaff_DS;
  do {
    iVar5 = iVar3;
    puVar6 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)0x0;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    iVar4 = iVar4 + -1;
    iVar3 = iVar5 + -1;
  } while (iVar4 != 0);
  _DAT_0000_7396 = 7;
  _DAT_0000_7398 = iVar5 + 0x722;
  _DAT_0000_739a = 0x1000;
  return;
}


