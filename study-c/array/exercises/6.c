#include <stdio.h>
#include <limits.h>

int main()
{
  int num[] = { 1, 2, 3,4,5,6,7,8,9,10 };
  int max = 0, min = INT_MAX;
  for (int i = 0; i < 10; i++) {
    if (max < num[i]) {
      max = num[i];
    }
    if (min > num[i]) {
      min = num[i];
    }
  }
  printf("MAX = %d, MIN = %d\n", max, min);
  return 0;
}