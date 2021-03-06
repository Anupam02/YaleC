
/* Given n , compute n! = 1*2*3*...*n */
/* Warning: will overflow on 32-bit machines if n > 12 */

int factorial(int n) {
  int i;
  int product;

  if (n < 2) return n;
  /* else */

  product = 1;

  for (i = 2; i <= n ; i++) {
    product *= i;
  }

  return product;
}

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  printf("%d\n", factorial(n));
  return 0;
}

