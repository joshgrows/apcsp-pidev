#include <stdio.h>

int main(void) {
 int d = 145678 ;
 int tmp = 0;
 for (int i = 1; i < 100; i++)
{
if ( d % i == 0){
  printf("%i divides evenly into %d\n", i, d);
}
}
printf("done");
}
