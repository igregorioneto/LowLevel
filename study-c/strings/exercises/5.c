#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[100];
  printf("Digite um nome: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  int count = strlen(name);

  printf("\nQuantidade de caracteres: %d\n", count);
  return 0;
}