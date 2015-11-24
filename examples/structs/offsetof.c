// Copyright 2015 YaleUniversity
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
  struct foo {
    int i;
    char c;
    long long int ld;
    double d;
    float f;
    char *s;
  };

  printf("i is at %u\n", offsetof(struct foo, i));
  printf("c is at %u\n", offsetof(struct foo, c));
  printf("ld is at %u\n", offsetof(struct foo, ld));
  printf("d is at %u\n", offsetof(struct foo, d));
  printf("f is at %u\n", offsetof(struct foo, f));
  printf("s is at %u\n", offsetof(struct foo, s));
  return 0;
}
