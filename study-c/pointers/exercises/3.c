#include <stdio.h>

int main()
{
  int x, y;
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  printf("Digite o valor de Y: ");
  scanf("%d", &y);

  int *ptX = &x, *ptY = &y;
  printf("X = %p, Y = %p\n", ptX, ptY);
  if (ptX > ptY) {
    printf("Endereço de memória X é maior que Y\n");
  } else {
    printf("Endereço de memória do Y é maior que o X\n");
  }

  return 0;
}