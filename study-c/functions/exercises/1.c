#include <stdio.h>

int dobro(int x) {
  return x * x;
}

int main()
{
  int x = 5;
  int y = dobro(x);
  printf("O dobro de %d é %d\n", x, y);
  return 0;
}