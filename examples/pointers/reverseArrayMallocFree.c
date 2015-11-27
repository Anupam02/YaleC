#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
/* reverse an array in place */
void reverseArray(int n, int a[n]) {
  /* algorithm: copy to a new array in reverse order */
  /* then copy back */

  int i;
  int *copy;

  copy = (int *) malloc(sizeof(int) * n);
  assert(copy);  /* or some other error check */

  for (i = 0; i < n; i++) {
    /* the -1 is needed to that a[0] goes to a[n-1] etc. */
    copy[n-i-1] = a[i];
  }

  for (i = 0; i < n; i++) {
    a[i] = copy[i];
  }
  free(copy);
}

int main(int argc, char *argv[]) {
  int n, i, a[n];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  reverseArray(n, a);
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);    
  }

  puts(10) // 10 for "\n" in ASCII
    return 0;
}

