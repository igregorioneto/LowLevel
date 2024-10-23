#include <stdio.h>

int main()
{
  int i = 0, sum = 0, v = 0;
  while (i < 10) {
    printf("Enter is number %d#: ", i + 1);
    scanf("%d", &v);
    sum += v;
    v = 0;
    i++;
  }
  printf("The sum of the numbers is: %d\n", sum);
  return 0;
}