#include <stdio.h>
#include <string.h>

int strcmp(const char *s1, const char *s2) {
  while (*s1 && *s2 && *s1 == *s2) {
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

int main(int argc, char *argv[]) {
  char myName[10] = {'A', 'n', 'u', 'p', 'a', 'm', '\0'};
  char MyName[10] = {'A', 'n', 'u', 'p', 'a', 'm', '\0'};

  if (!strcmp(myName, MyName))   // C lets you override the library function
    printf("%s\n", MyName);
  return 0;
}
