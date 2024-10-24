#include <stdio.h>

int main()
{
  char c[50];
  printf("Digite um nome: ");
  scanf("%s", c);
  if (c[0] == 'a' || c[0] == 'A') {
    printf("Nome: %s\n", c);
  }
  return 0;
}