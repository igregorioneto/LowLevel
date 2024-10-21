#include <stdio.h>

int main()
{
  int x, y, z, soma;
  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &y);
  printf("\nDigite o terceiro valor: ");
  scanf("%d", &z);
  soma = x + y + z;
  printf("\nA soma é: %d\n", soma);
}