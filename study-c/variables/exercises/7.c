#include <stdio.h>

int main()
{
  float x;
  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &x);
  float c = 5.0 * (x - 32.0) / 9.0;
  printf("C = %.2f\n", c);
  return 0;
}