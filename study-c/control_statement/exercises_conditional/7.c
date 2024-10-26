#include <stdio.h>

int main()
{
  int x, y;
  printf("Digite um número: ");
  scanf("%d", &x);
  printf("Digite outro número: ");
  scanf("%d", &y);
  if (x > y) {
    printf("Maior = %d\n", x);
  } else if (y > x) {
    printf("Maior = %d\n", y);
  } else {
    printf("Números Iguais\n");
  }
  return 0;
}