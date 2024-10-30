#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
  char name[100], gen;
  int age;
};

int main()
{
  struct pessoa p;
  printf("Digite o nome: ");
  fgets(p.name, sizeof(p.name), stdin);
  p.name[strcspn(p.name, "\n")] = '\0';

  printf("Digite o sexo: ");
  scanf("%c", &p.gen);

  printf("Digite a idade: ");
  scanf("%d", &p.age);

  if (p.age < 25 && p.gen == 'F') {
    printf("\nACEITA\n");
  } else {
    printf("\nNÃO ACEITA\n");
  }

  return 0;
}