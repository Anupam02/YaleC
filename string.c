#include <stdio.h>

int main(int argc, char const *argv[]) {
  char hi[3];

  hi[0] = 'h';
  hi[1] = 'i';
  hi[2] = '\0';

  puts(hi);
  return 0;
}
