#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
  char nome[100], endereco[150];
  int idade;
};

int main()
{
  struct pessoa p;
  printf("Digite os dados: \n");
  printf("Nome: ");
  fgets(p.nome, sizeof(p.nome), stdin);
  p.nome[strcspn(p.nome, "\n")] = 0;

  printf("Endereço: ");
  fgets(p.endereco, sizeof(p.endereco), stdin);
  p.endereco[strcspn(p.endereco, "\n")] = 0;

  printf("Idade: ");
  scanf("%d", &p.idade);

  printf("Nome = %s, Idade = %d, Endereço = %s\n", p.nome, p.idade, p.endereco);
  return 0;
}