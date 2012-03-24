// Decompiled by holdec 1.1 (2012-03-24)

// addr = 00401080.0
// signature= func(_main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? _main(???)
{
  reg_ag = ARG_0;
  (void) F_00401440();
  (void) ___main();
  if(reg_ag  >  7 || reg_ag  ==  0 || reg_ag  ==  1) {
    reg_var1 = 4198485;
  } else if(reg_ag  <  3 || reg_ag  >  7) {
    reg_var1 = 4198480;
  } else if(reg_ag  ==  3) {
    reg_var1 = 4198492;
  } else if(reg_ag  ==  4) {
    reg_var1 = 4198499;
  } else if(reg_ag  ==  5) {
    reg_var1 = 4198505;
  } else if(reg_ag  ==  6) {
    reg_var1 = 4198511;
  } else {
    reg_var1 = 4198516;
  }
  (void) _puts(reg_var1);
  return 0;
}

