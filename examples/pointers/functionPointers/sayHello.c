// Copyright 2015 YaleUniversity
/* Functional "hello world" program */

#include<stdio.h>

int main(int argc, char *argv[]) {
  /* function for emitting text */
  int (*say)(const char *);

  say = puts;

  say("hello world");
  return 0;
}
