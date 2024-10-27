#include <stdio.h>

int main()
{
  int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int count = 0;
  for (int i = 0; i < 10; i++) {
    if (num[i] % 2 == 0) {
      printf("%d ", num[i]);
      count++;
    }
  }
  printf("\nQuantidade de valores pares: %d\n", count);
  return 0;
}