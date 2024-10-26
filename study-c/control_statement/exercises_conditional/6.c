#include <stdio.h>

int main()
{
  int x = 10, y = 15;
  if (x > y) {
    printf("X é maior que Y\n");
    printf("Diferença: %d\n", x - y);
  } else {
    printf("Y é maior que X\n");
    printf("Diferença: %d\n", y - x);
  }
  return 0;
}