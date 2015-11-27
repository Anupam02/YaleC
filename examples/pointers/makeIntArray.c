#include <stdlib.h>
#include <stdio.h>
/* allocates and return a new integer array with n elements */
/* calls abort() if there isn't enough space */
int *makeIntArray(int n) {
  int *a;
  a = malloc(sizeof(int) * n);
  /* If the system can't give you the space you asked for more space than it has)
   * malloc returns a null pointer. It is good practice to test the return value
   * of malloc whenever you call it.
   */

  if (a == 0)
    abort();                    /* die on failure */

  return a;
}

/* It is good practice to write a matching destructor that de-allocates an
 * object for each constructor (like makeIntArray) that makes one)
 */
void destroyIntArray(int *a) {
  free(a);
}

int main(int argc, char *argv[]) {
  size_t n;
  unsigned int i;
  n = 10;
  int *A;
  A = makeIntArray(n);
  for (i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  destroyIntArray(A);
  putchar('\n');
  return 0;
}

