#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define f(Z) {char*p=q+=Z+l;if(*p<'7')*p+=3;else{*p---=7;while(*p=='9')*p--='0';++*p;}}
#define v(N) {while(j<i){memcpy(t,buf,N);t+=n;if(t>=&out[65536]){char*u=out; \
           do{int w=write(1,u,&out[65536]-u);if(w>0)u+=w;}while(u<&out[65536 \
           ]);memcpy(out,out+65536,t-&out[65536]);t-=65536;}char*q=buf;f(4); \
           f(7);f(2);f(11);f(2);f(7);f(12);f(2);f(12);f(7);f(2);f(11);f(2);f \
           (7);f(12);f(2);j+=3;}}
char buf[256];
char out[65536 + 4096] = "1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n";
int main(void) {
  char *t = out + 30;
  unsigned long long i = 1, j = 1;
  for (int l = 1; l < 20; l++) {
    int n=sprintf(buf, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n", i, i, i, i, i, i, i + 1, i + 1, i + 1, i + 1, i + 1, i + 2, i + 2, i + 2, i + 2, i + 2);
    i*=10;
    v(n);
  }
  return 0;
}
