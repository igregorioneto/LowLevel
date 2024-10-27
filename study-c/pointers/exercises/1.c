#include <stdio.h>

int main()
{
  int x = 10;
  float y = 9.5;
  char z = 'a';
  int *pX = &x;
  float *pY = &y;
  char *pZ = &z;

  printf("Int = %d, Float = %.2f, Char = %c\n", x, y, z);
  *pX = 70;
  *pY = 10.0;
  *pZ = 'A';
  printf("Int = %d, Float = %.2f, Char = %c\n", *pX, *pY, *pZ);
  return 0;
}