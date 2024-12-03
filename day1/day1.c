#include "day1.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

void print_input() {
  FILE* fp = fopen("input", "r");
  assert(fp);

  int a[1000];
  int b[1000];
  for (int i = 0; i < 1000; i++) {
    fscanf(fp, "%d %d", &a[i], &b[i]);
  }

  qsort(a, 1000, sizeof(int), comp);
  qsort(b, 1000, sizeof(int), comp);

  int distance = 0;
  for (int i = 0; i < 1000; i++) {
    if ((a[i] - b[i]) < 0) {
      distance += (a[i] - b[i]) * -1;
    } else {
      distance += a[i] - b[i];
    }
  }
  printf("%d\n", distance);
  fclose(fp);
}
