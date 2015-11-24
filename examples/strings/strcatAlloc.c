// Copyright 2015 YaleUniversity
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* return a freshly-malloc 'd copy of s */
/* or 0 if malloc fails */
/* It is the caller's responsibility to free the returned string when done. */
char *strcatAlloc(const char *s, const char *s1) {
  char *s2;

  s2 = malloc(strlen(s) + strlen(s1) + 1);

  if (s2 != 0) {
    strcat(s2, s);
    strcat(s2, s1);
  }

  return s2;
}

int main(int argc, char *argv[]) {
  char s2[10], s3[10];
  scanf("%s%s", s2, s3);
  char *s4;
  s4 = strcatAlloc(s2, s3);
  printf("%s\n", s4);
  free(s4);
  return 0;
}
