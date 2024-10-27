#include <stdio.h>

int main()
{
  int num[] = { 1,2,3,4,5,6,7,8 };
  int x, y;
  printf("Digite a posição X: ");
  scanf("%d", &x);
  printf("Digite a posição Y: ");
  scanf("%d", &y);

  if (x < 0 || x > 7 || y < 0 || y > 7) {
    printf("Posição menor que 0 e maior que 7\n");
    return 0;
  }
  int sum = num[x] + num[y];
  printf("Soma das posições: %d\n", sum);

  return 0;
}