// Copyright 2015
#include <stdio.h>

/* return the next character from stdin without consuming it */
int peekchar(void) {
  int c;

  c = getchar();
  if (c != EOF)
    ungetc(c, stdin);          /* puts it back */

  return c;
}

int main(int argc, char *argv[])
{
  int c;
  c = peekchar();
  printf("%d\n", c);
  return 0;
}

