#include <stdio.h>

int main()
{
  int x, count = 0, sum = 0;
  for (int i = 0; i < 10; i++) {
    printf("Enter the number %d#: ", i + 1);
    scanf("%d", &x);
    if (x < 0)
      continue;
    sum += x;
    count++;
    x = 0;
  }
  printf("The average is: %d\n", sum / count);
  return 0;
}