#include <stdio.h>

int main(int argc, char *argv[]) {
  int i, power;

  for (i = 0, power = 1; power < 1000; i++, power *= 2) {
    printf("2^%d = %d\n", i, power);
  }
  return 0;
}
