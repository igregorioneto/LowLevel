#include <stdio.h>

int main()
{
  float x;
  printf("Digite a temperatura em Kelvin: ");
  scanf("%f", &x);
  float c = x - 273.15;
  printf("C = %.2f\n", c);
  return 0;
}