#include <stdio.h>

int main()
{
  int x;
  printf("Digite um número par: ");
  scanf("%d", &x);
  if (x % 2 != 0) {
    printf("Número não é par\n");
    return 0;
  }
  for (int i = 0; i <= x; i+=2) {
    printf("%d ", i);
  }
  return 0;
}