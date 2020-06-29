typedef unsigned char   undefined;

typedef unsigned int    undefined2;



void __cdecl16far entry(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_ES;
  
  iVar3 = 0x1f1;
  DAT_1000_1b0e = 0x217c;
  DAT_1000_1b0c = 5;
  DAT_1000_1b06 = 0xff;
  DAT_1000_1b04 = 0x1182;
  iVar4 = 0;
  DAT_1000_1b02 = 0x3c;
  iVar6 = 0x119c;
  iVar5 = 0x11f1;
  DAT_1000_1b08 = unaff_ES;
  DAT_1000_1b0a = unaff_ES;
  do {
    puVar7 = (undefined2 *)0x32;
    puVar8 = (undefined2 *)0x0;
    iVar6 = iVar6 + -1;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8),8);
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    iVar3 = iVar3 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar3);
  DAT_1000_1b00 = 0x1000;
  return;
}


