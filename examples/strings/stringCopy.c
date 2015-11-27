#include <stdio.h>
#include <string.h>

/* copy the substring of the src consisting of characters at positions
   start.. end-1 (inclusive) into dest */
/* If end-1 is past the end of src, copies only as many characters as
   available. */
/* If start is past the end of src, the results are unpredictable. */
/* Returns a pointer to dest */
char *copySubstring(char *dest, const char *src, int start, int end) {
  /* copy the substring */
  strncpy(dest, src + start, end - start);

  /* add null since strncpy probably didn't */
  dest[end-start] = '\0';

  return dest;
}

int main(int argc, char *argv[]) {
  char a[5];
  scanf("%s", a);
  printf("%s\n", a);
  return 0;
}

