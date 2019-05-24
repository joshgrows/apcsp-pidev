#include<stdio.h>

int main()
{
  int a = 545;
float b = 12.34;
char c = 4;
double d = 123.456;
unsigned int e = 4;
signed int f = 4;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
printf("float b value: %d and size: %d bytes\n", b, sizeof(b));
printf("chr c value: %d and size: %d bytes\n", c, sizeof(c));
printf("double d value: %d and size: %d bytes\n", d, sizeof(d));
printf("int e value: %d and size: %d bytes\n", e, sizeof(e));
printf("int f value: %d and size: %d bytes\n", f, sizeof(f));
}

