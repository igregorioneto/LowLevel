#include <stdio.h>

int main()
{
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);
  for (int i = 0; i <= x; i++) {
    printf("%d ", i);
  }
  return 0;
}