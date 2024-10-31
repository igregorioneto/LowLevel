#include <stdio.h>
#include <stdlib.h>

float seriesS(int n) {
  if (n > 0)
    return (1 + n * n) / (float) n + seriesS(n - 1);
  else
    return 0;
}

int main()
{
  printf("S = %f\n", seriesS(5));
  return 0;
}