#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[100];
  printf("Digite um nome: ");
  scanf("%s", name);

  for (int i = 0; i < 4; i++) {
    printf("%c", name[i]);
  }
  printf("\n");
  return 0;
}