#include <stdio.h>
#include <limits.h>

int main()
{
  int min = INT_MAX, max = 0, x;
  for (int i = 0; i < 10; i++) {
    printf("Enter is number %d#: ", i);
    scanf("%d", &x);
    if (x < min)
      min = x;
    if (x > max)
      max = x;
    x = 0;
  }
  printf("Number min is %d and number max is %d\n", min, max);
  return 0;
}