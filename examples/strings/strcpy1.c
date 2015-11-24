// Copyright 2015 YaleUniversity
#include <stdio.h>

void strcpy1(char *dest, const char *src) {
  /* The loop terminates when *src == '\0' == 0 */
  /* as '\0' as well null pointer both behaves as 0 in if, while etc. */
  while (*dest++ = *src++) continue;
}

int main(int argc, char *argv[]) {
  char firstName[10] = {'A', 'n', 'u', 'p', 'a', 'm', '\0'};
  char lastName[10] = {'P', 'a', 't', 'e', 'l', '\0'};

  strcpy1(firstName, lastName);

  printf("%s\n", firstName);
  return 0;
}


