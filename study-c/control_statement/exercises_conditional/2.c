#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);
  if (x <= 0) {
    printf("Valor inválido\n");
  } else {
    printf("A raíz quadrada do número %d é: %.2f\n", x ,sqrt(x));
  }
  return 0;
}