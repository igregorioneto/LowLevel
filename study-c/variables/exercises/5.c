#include <stdio.h>

int main()
{
  float x;
  printf("Digite um número: ");
  scanf("%f", &x);
  printf("A quinta parte do número %.2f é: %.2f\n", x, x / 5);
}