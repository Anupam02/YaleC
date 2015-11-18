/*
 * =====================================================================================
 *
 *       Filename:  countdown.c
 *
 *    Description:  Count down from COUNTDOWN_START (defined below) to 0.
 *                  Prints all numbers in the range including both endpoints
 *
 *        Version:  1.0
 *        Created:  Thursday 12 November 2015 12:39:03  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ANUPAM PATEL (), patel.anupam02@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#define COUNTDOWN_START (10)

int
main(int argc, char **argv)
{
    for (int i = COUNTDOWN_START; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}

