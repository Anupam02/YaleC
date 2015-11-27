# include <stdio.h>
# include <stdlib.h>
# include <math.h>

/** return 1 if n is prime, 0 otherwise */
int isPrime(int n)
{
  int factor;

  if (n < 2) return 0;
  /* else */
  for (factor = 2; factor < sqrt(n)+1; factor++) {
    if (n % factor == 0) return 0;
  }
  /* else */
  return 1;
}

/** return number of primes < n */
int countPrimes(int n)
{
  int i;
  int count;

  count = 0;

  for (i = 0; i < n; i++) {
    if (isPrime(i)) count++;
  }

  return count;
}

int main(int argc, char *argv[])
{
  if (argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    return 1;
  }

  printf("%d\n", countPrimes(atoi(argv[1])) );
  return 0;
}
