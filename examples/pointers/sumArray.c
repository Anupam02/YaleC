#include <stdio.h>

/** return the sum of the values in a, an array of size n */
/** can also be written as int sumArray(int n, const int A[]) */

int sumArray(int n, const int *a) {
  int i;
  int sum;

  sum = 0;
  for (i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}

int main(int argc, char *argv[])
{
  int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int size = 10;
  int sum;
  sum = sumArray(size, A);
  printf("%d\n", sum);
  return 0;
}

