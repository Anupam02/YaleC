// Copyright 2015
#include <stdio.h>

int main(int argc, char *argv[])
{
  char c;
  scanf("%c", &c);
  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("It is a Vowel\n");
      break;
    default:
      printf("It is a Consonent\n");
      break;
  }
  return 0;
}
