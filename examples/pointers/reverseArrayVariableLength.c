// Copyright 2015
#include <stdio.h>

/* reverse an array in place */
void reverseArray(int n, int a[n]) {
  /* algorithm: copy to a new array in reverse order */
  /* then copy back */

  int i;
  int copy[n];

  for (i = 0; i < n; i++) {
    /* the -1 is needed to that a[0] goes to a[n-1] etc. */
    copy[n-i-1] = a[i];
  }

  for (i = 0; i < n; i++) {
    a[i] = copy[i];
  }
}

int main(int argc, char *argv[]) {
  int n,i,a[n]; // for c99
  scanf("%d",&n);

  for (i = 0; i < n; i++) {
    scanf("%d",&a[i]);
  }
  reverseArray(n, a);

  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar(10); // 10 is ASCII for newline

  return 0;
}

