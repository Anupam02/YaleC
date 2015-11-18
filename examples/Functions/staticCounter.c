
// Copyright 2015
#include <stdio.h>

/* return the number of times the function has been called */
int counter(void) {
  static count = 0;

  return ++count;
}

int main(int argc, char *argv[])
{
  int callCount;
  callCount = counter();
  callCount = counter();
  callCount = counter();
  callCount = counter();
  printf("No of Times counter called : %d\n", callCount);
  return 0;
}
