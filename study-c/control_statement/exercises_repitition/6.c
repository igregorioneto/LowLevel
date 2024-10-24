#include <stdio.h>

int main()
{
  int x, sum = 0;
  for (int i = 0; i < 10; i++) {
    printf("Enter the number %d#: ", i + 1);
    scanf("%d", &x);
    sum += x;
    x = 0;
  }
  printf("The average is: %.2f\n", sum / 10.0);
  return 0;
}