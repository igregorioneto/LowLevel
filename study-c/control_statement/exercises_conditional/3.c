#include <stdio.h>
#include <math.h>

int main()
{
  float x;
  printf("Enter a number: ");
  scanf("%f", &x);
  if (x > 0) {
    printf("Square root of the number is: %.2f\n", sqrt(x));
  } else {
    printf("The square value is: %.2f\n", x * x);
  }
  return 0;
}