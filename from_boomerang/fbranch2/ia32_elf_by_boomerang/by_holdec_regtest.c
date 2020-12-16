// Decompiled by holdec

// address: 080483e4.0
// full-signature: func(main, return=[<int(signed, 4),null,unknown>], parameter=[<int(signed, 4),argc,unknown>, <ptr(ptr(int(undef, 1))),argv,unknown>], varargs=false)
s4 main(s4 argc, d1** argv)
{
  (void) STORE(&var_12_local + 4, 134514112);
  (void) scanf("%f", &input_value);
  (void) STORE(&var_12_local, WIDEN(input_value));
  (void) printf("a is %f, b is %f\n", 5.0, WIDEN(input_value));
  if(!FLOAT_ISNAN(input_value) && input_value == 5.0) {
    (void) STORE(&var_12_local + 4, 134514133);
    (void) puts("Equal");
  }
  if(input_value != 5.0 && FLOAT_ISNAN(input_value)) {
    (void) STORE(&var_12_local + 4, 134514139);
    (void) puts("Not Equal");
  }
  if(!FLOAT_ISNAN(input_value) && input_value < 5.0) {
    (void) STORE(&var_12_local + 4, 134514149);
    (void) puts("Greater");
  }
  if(!FLOAT_ISNAN(input_value) && input_value >= 5.0) {
    (void) STORE(&var_12_local + 4, 134514157);
    (void) puts("Less or Equal");
  }
  if(!FLOAT_ISNAN(input_value) && input_value <= 5.0) {
    (void) STORE(&var_12_local + 4, 134514171);
    (void) puts("Greater or Equal");
  }
  if(!FLOAT_ISNAN(input_value) && input_value > 5.0) {
    (void) STORE(&var_12_local + 4, 134514188);
    (void) puts("Less");
  }
  return 0;
}

