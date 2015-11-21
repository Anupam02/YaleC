// Copyright 2014 YaleUniversity
#include<stdio.h>
#include<stdlib.h>

/** Here is a typical use of realloc to build an array that grows as large as
    it needs to be
*/

/* read numbers from stdin until there aren't any more */
/* returns an array of all numbers read, or null on error */
/* returns the count of numbers read in *count */
int * readNumbers(int *count /* RETVAL */) {
  int myCount;           /* number of numbers read */
  int size;              /* size of block allocated so far */
  int *a;                /* block */
  int n;                 /* number read */

  myCount = 0;
  size = 1;

  a = malloc(sizeof(int) * size);     /* allocating zero bytes is tricky */
  if (a == 0) return 0;

  while (scanf("%d", &n) == 1) {
    /* is there room? */
    while (myCount >= size) {
      /* double the size to avoid calling realloc for every number read */
      size *= 2;
      a = realloc(a, sizeof(int) * size);
      if (a == 0) return 0;
      
    }

    /* put the new number in */
    a[myCount++] = n;
  }

  /* now trim off any excess space */
  a = realloc(a, sizeof(int) * myCount);
  /* note : if a == 0 at this point we'll just return it anyway */

  /* save out myCount */
  *count = myCount;

  return a;
}

int main(int argc, char *argv[]) {
  int *a;
  int *count;
  a = readNumbers(* count);
  return 0;
}


