// Copyright 2015 YaleUniversity
#include <stdio.h>

char *strcpy1a(char * dest, const char *src) {
  int i;

  for (i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
  }

  /* note that the final null in source is not copied by the loop */
  dest[i] = '\0';

  return dest;
}

int main(int argc, char *argv[]) {
  char firstName[10] = {'A', 'n', 'u', 'p', 'a', 'm', '\0'};
  char lastName[10] = {'P', 'a', 't', 'e', 'l', '\0'};
  char *ans;
  ans = strcpy1a(firstName, lastName);

  printf("%s\n", ans);
  printf("%s\n", firstName);
  return 0;
}

