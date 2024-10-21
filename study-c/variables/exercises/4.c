#include <stdio.h>

int main()
{
  float x, sqtr;
  printf("Digite um numero: ");
  scanf("%f", &x);
  sqtr = x * x;
  printf("O quadrado do número é: %.2f\n", sqtr);
}