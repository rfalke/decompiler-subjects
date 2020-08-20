extern int log_size_10_var_000(void);
extern int log_size_10_var_001(void);
extern int log_size_10_var_002(void);
extern int log_size_10_var_003(void);
extern int log_size_10_var_004(void);
extern int log_size_10_var_005(void);
extern int log_size_10_var_006(void);
extern int log_size_10_var_007(void);
extern int log_size_10_var_008(void);
extern int log_size_10_var_009(void);


#include <stdio.h>
#include <assert.h>


int main(int argc, char *argv[])
{
  int sum=0;
  {int x=log_size_10_var_000(); sum+=x;}
  {int x=log_size_10_var_001(); sum+=x;}
  {int x=log_size_10_var_002(); sum+=x;}
  {int x=log_size_10_var_003(); sum+=x;}
  {int x=log_size_10_var_004(); sum+=x;}
  {int x=log_size_10_var_005(); sum+=x;}
  {int x=log_size_10_var_006(); sum+=x;}
  {int x=log_size_10_var_007(); sum+=x;}
  {int x=log_size_10_var_008(); sum+=x;}
  {int x=log_size_10_var_009(); sum+=x;}

  assert(sum==0);
  return 0;
}
