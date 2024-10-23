#include <stdio.h>
#include <math.h>

int main()
{
  float x;
  printf("Enter a number: ");
  scanf("%f", &x);
  if (x > 0) {
    printf("The square root of number is: %.2f\n", sqrt(x));
    printf("Square value is: %.2f\n", x * x);
  }
  return 0;
}