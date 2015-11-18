/*
 * =====================================================================================
 *
 *       Filename:  testPrintBinary.c
 *
 *    Description:  Program to test and print Binary
 *
 *        Version:  1.0
 *        Created:  Wednesday 11 November 2015 01:53:07  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ANUPAM PATEL (), patel.anupam02@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*  print out all bits of n */
void print_binary(unsigned int n)
{
    unsigned int mask = 0;

    /* this grotesque hack creates a bit patterns 1000...  */
    /* regardless of the size of the unsigned int */
    mask = ~mask ^ (~mask >> 1);

    for(; mask != 0; mask >>= 1) {
        putchar((n & mask) ? '1' : '0');
    }
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s n\n", argv[0]);
        return 1;
    }

    print_binary(atoi(argv[1]));
    putchar('\n');

    return 0;
}
