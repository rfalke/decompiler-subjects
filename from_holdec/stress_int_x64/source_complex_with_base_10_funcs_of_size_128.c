extern long log_size_7_var_000(void);
extern long log_size_7_var_001(void);
extern long log_size_7_var_002(void);
extern long log_size_7_var_003(void);
extern long log_size_7_var_004(void);
extern long log_size_7_var_005(void);
extern long log_size_7_var_006(void);
extern long log_size_7_var_007(void);
extern long log_size_7_var_008(void);
extern long log_size_7_var_009(void);


#include <stdio.h>
#include <assert.h>


int main(int argc, char *argv[])
{
  long sum=0;
  {long x=log_size_7_var_000(); sum+=x;}
  {long x=log_size_7_var_001(); sum+=x;}
  {long x=log_size_7_var_002(); sum+=x;}
  {long x=log_size_7_var_003(); sum+=x;}
  {long x=log_size_7_var_004(); sum+=x;}
  {long x=log_size_7_var_005(); sum+=x;}
  {long x=log_size_7_var_006(); sum+=x;}
  {long x=log_size_7_var_007(); sum+=x;}
  {long x=log_size_7_var_008(); sum+=x;}
  {long x=log_size_7_var_009(); sum+=x;}

  assert(sum==0);
  return 0;
}
