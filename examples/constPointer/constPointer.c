#include <stdio.h>

int main(int argc, char *argv[])
{
  int x = 5;
  const int* p = &x;
  int *q;

  //*p = 1;       /* show error at compile */
  x = 3;       /* it also changes *p but does not give error */
  printf("*p = %d x = %d\n", *p, x);
  return 0;
}
