#include <stdio.h>
#include "myString.h"

int main(int argc, char *argv[]) {
  struct string *mystring;
  mystring = makeString("Anupam Patel");
  printf("string length = %d\n", stringLength(mystring));
  return 0;
}
