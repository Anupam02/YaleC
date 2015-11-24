// Copyright 2015 YaleUniversity
# include <stdio.h>

int main(int argc, char *argv[]) {
  int i;
  printf("argc = %d\n\n", argc);

  for (i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }

  printf("argv[argc] = %s\n", argv[argc]);

  return 0;
}
