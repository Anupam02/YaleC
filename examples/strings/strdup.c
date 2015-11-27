#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* return a freshly-malloc 'd copy of s */
/* or 0 if malloc fails */
/* It is the caller's responsibility to free the returned string when done. */
char *strdup(const char *s) {
  char *s2;

  s2 = malloc(strlen(s) + 1);

  if (s2 != 0) {
    strcpy(s2, s);
  }

  return s2;
}

int main(int argc, char *argv[]) {
  char s1[10];
  scanf("%s", s1);
  char *s2;
  s2 = strdup(s1);
  printf("%s\n", s2);
  free(s2);
  return 0;
}
