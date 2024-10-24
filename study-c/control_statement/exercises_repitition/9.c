#include <stdio.h>

int main()
{
  int x, y = 1;
  printf("Enther the number: ");
  scanf("%d", &x);
  for (int i = 0; i < x; i++) {
    printf("%d ", y);
    y += 2;
  }
  printf("\n");
  return 0;
}