// Copyright 2015
#include <stdio.h>

/* doesn't work */
void doubler(int x) {
  x *= 2;
}

int main(int argc, char *argv[])
{
  int y;

  y = 1;

  doubler(y);      /* no effect on y */

  printf("%d\n", y);

  return 0;
}
