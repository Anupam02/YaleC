// Copyright 2015  YaleUniversity
#include <stdio.h>
#include <stdlib.h>

static int compare_ints(void *key1, void *key2) {
  return *((int *) key1) - *((int *) key2);
}

int sort_int_array(int *a, int n) {
  qsort(a, n, sizeof(*a), compare_ints);
}

int main(int argc, char *argv[]) {
  int *A, n, i;
  printf("Please enter length of array: ");
  scanf("%d", &n);
  A = malloc(sizeof(int) * n);

  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  sort_int_array(A, n);
  printf("Array after qsort: ");
  for (i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }

  return 0;
}
