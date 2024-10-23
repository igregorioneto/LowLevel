#include <stdio.h>

int main()
{
  int x, y;
  printf("Digite o primeiro número: ");
  scanf("%d", &x);
  printf("Digite o segundo número: ");
  scanf("%d", &y);
  if (x > y) {
    printf("O primeiro número é maior que o segundo!\n");
  } else {
    printf("O segundo número é maior que o primeiro!\n");
  }
  return 0;
}