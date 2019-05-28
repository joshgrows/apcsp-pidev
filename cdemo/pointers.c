#include <stdio.h>

int main()
{
  float d = 3;
  float e = 4;
  int a;
  int* ptrtoa;
  float* u;
  float* i;
  ptrtoa = &a;
  u = &d;
  i = &e;
  a = 5;
  d = 3;
  e = 4;
  printf("The value of a is %d\n", a);
  printf("the value of d is %d\n", d);
  printf("The value of e is %d\n", e);
  printf("The address of d is %d\n", &d);
  printf("The address of e is %d\n", &e);
  *ptrtoa = 6;
  *u = 4;
float t = *u;
  printf("value of t is %d\n", t);
  printf("it stores the value %d\n", t);
  printf("The value of a is %d\n", a);
  
  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
}
