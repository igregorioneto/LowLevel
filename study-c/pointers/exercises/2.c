#include <stdio.h>

int main()
{
  int x = 10, y = 10;
  int *ptX = &x, *ptY = &y;
  printf("X = %p, Y = %p\n", ptX, ptY);
  if (ptX > ptY) {
    printf("Endereço de memória maior é o X\n");
  } else {
    printf("Endereço de memória maior é o Y\n");
  }
  return 0;
}