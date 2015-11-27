#include <stdio.h>
#include <stdlib.h>

enum foo { FOO };
enum apple { MACINTOSH, CORTLAND, KASHMIRI_APPLES };
enum orange { NAVEL, NAGPURI, TANGERINE };

int main(int argc, char *argv[]) {
  enum foo x;

  if (argc != 1) {
    fprintf(stderr, "Usage: %s \n", argv[0]);
    return 1;
  }
  printf("FOO = %d\n", FOO);
  printf("sizeof(enum foo) = %d\n", sizeof(enum foo));

  x = 127;

  printf("x = %d\n", x);

  /* note we can add apples and oranges */
  printf("%d\n", NAVEL + TANGERINE);
  printf("MACINTOSH = %d\n", MACINTOSH);
  printf("CORTLAND = %d\n", CORTLAND);
  printf("KASHMIRI_APPLES = %d\n", KASHMIRI_APPLES);
  
  return 0;
}
