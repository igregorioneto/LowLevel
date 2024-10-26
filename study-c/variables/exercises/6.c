#include <stdio.h>

int main()
{
  float x;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &x);
  float f = x * (9.0/5.0) + 32.0;
  printf("F = %.2f\n", f);
  return 0;
}