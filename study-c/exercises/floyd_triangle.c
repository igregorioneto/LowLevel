#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N = 6;
  int i, j, c = 0;
  for (i = 1; i <= N; i++) {
    for (j = 1; j <= i; j++) {
      c++;
      printf("%d ", c);
    }
    printf("\n");
  }
  return 0;
}