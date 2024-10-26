#include <stdio.h>

int main()
{
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);
  for (int i = x; i >= 0; i--) {
    printf("%d ", i);
  }
  return 0;
}