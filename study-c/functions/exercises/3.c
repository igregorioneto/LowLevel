#include <stdio.h>

int positivoNegativo(int x) {
  if (x < 0)
    return -1;
  if (x > 0)
    return 1;
  return 0;
}

int main()
{
  int x;
  printf("Digite um valor: ");
  scanf("%d", &x);
  int y = positivoNegativo(x);
  printf("%d\n", y);
  return 0;
}