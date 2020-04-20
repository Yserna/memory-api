#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p;
  p = malloc(10*sizeof(int));
  for (int i = 0; i < 10; i++) {
    *(p + i) = 0; // p[i] = 0
  }
  return 0;
}