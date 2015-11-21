// Copyright 2015
#include <stdio.h>

struct ci {
    char c;   /* offset 0  */
              /* 3 unused bytes go here */
    int i;    /* offset 4 */
};

struct ic {
  int i;   /* offset 0 */
  char c;  /* offset 4 */
           /* 3 unused bytes go here*/
};

int main(int argc, char *argv[])
{
  printf("sizeof(struct ci) = %u\n", sizeof(struct ci));
  printf("sizeof(struct ic) = %u\n", sizeof(struct ic));
  return 0;
}


