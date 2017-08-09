
int main()
{
  asm("call overlapping1");
  asm("call overlapping2");
  asm("call overlapping3");
  asm("call overlapping4");
  return 0;
}
