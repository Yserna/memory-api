#include <stdio.h>
#include <stdlib.h>

int main() {

  int *array = (int)malloc(100*sizeof(int));
  int *middle = &array[50];
  free(middle);
  
  return 0;
}
