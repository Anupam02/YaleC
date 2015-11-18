// Copyright 2015
#include <stdio.h>
#include <ctype.h>

/* return the next character from stdin without consuming it */
int peekchar(void) {
  int c;

  c = getchar();
  if (c != EOF)
    ungetc(c, stdin);            /* puts it back */
  printf("hi inside peekchar\n");
  return c;                /* returns first char from the buffer */
}
/* read an integer written in decimal notation from stdin until the first
 * non-digit and return it. Returns 0 if there are no digits. */
int readNumber(void) {
  int accumulator;        /* the number so far */
  int c;                  /* next character */

  accumulator = 0;

  while ((c = peekchar()) != EOF && isdigit(c)) {
    c = getchar();                     /* consume it */
    accumulator *= 10;                 /* shift previous digits over */
    accumulator += (c - '0');          /* add decimal value of new digit */
  }
  printf("hi inside readNumber\n");

  return accumulator;
}

int main(int argc, char *argv[])
{
  int n;
  n = readNumber();
  printf("%d\n", n);
  return 0;
}
 
