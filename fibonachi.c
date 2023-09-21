#include <stdio.h>
int main() {

  int i,c,n=12;
int a= 0, b = 1;

for (i = 1; i <= n; i++) {
   printf("%d, ", a);
    c =a + b;
    a = b;
    b = c;
    
  }

  return 0;
}