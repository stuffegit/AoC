#include "day2.h"
#include <assert.h>
#include <stdio.h>

int comp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

void print_input() {
  FILE* fp = fopen("input", "r");
  assert(fp);

  int a[1000];

  while (fgets(char* restrict s, int n, fp)) {
  }
  for (int i = 0; i < 1000; i++) {
    fscanf(fp, "%d", &a[i]);
  }
  fseek(fp, 1, SEEK_CUR);

  fclose(fp);
}
