
#include <stdio.h>

extern int add_one(int);
extern void not_endless_loop(void);
extern int return_constant(void);
extern void exec_python(void);

int main(int argc, char *argv[])
{
  if(argc==2) {
    exec_python();
  }
  not_endless_loop();
  printf("42+1=%d\n",add_one(42));
  int tmp=return_constant();
  int expected=0xBBC10300+2*0x05000000+0xF4EBC103+0xB9;
  printf("constant: 0x%08x = %d equal=%d\n", tmp, tmp, tmp==expected);
  return 0;
}
