#include <stdio.h>

int main()
{
  int sum;
  for (int i = 1; i <= 50; i++) {
    if (i % 2 == 0)
      sum += i;
  }
  printf("Sum numbers: %d\n", sum);
  return 0;
}