/*
 * =====================================================================================
 *
 *       Filename:  binRepresentationGeeksForGeeks.c
 *
 *    Description:  Program to know the binary equivalent of unsigned int 
 *                  as per geeks for geeks
 *
 *        Version:  1.0
 *        Created:  Wednesday 11 November 2015 01:24:17  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ANUPAM PATEL (), patel.anupam02@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

# include <stdio.h>

void bin(unsigned int n) {
  unsigned int i;
  for (i = 1<<31; i > 0; i /= 2)
    (n & i)?printf("1"):printf("0");
}

int main(int argc, char *argv[])
{
  bin(4);
  printf("\n");
  bin(7);
  printf("\n");
  return 0;
}



