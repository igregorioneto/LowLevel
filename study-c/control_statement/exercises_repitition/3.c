#include <stdio.h>

int main()
{
  int i = 10;
  while (i >= 0) {
    if (i == 0) {
      printf("FIM");
      break;
    }

    printf("%d ", i);
    i--;
  }
  printf("\n");
  return 0;
}