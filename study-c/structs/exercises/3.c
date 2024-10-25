#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
  char nome[100], curso[100], matricula[50];
};

int main()
{
  struct aluno a[5];
  printf("Preencha a lista de alunos: \n");
  for (int i = 0; i < 5; i++) {
    printf("Aluno %d#\n", i + 1);

    printf("Nome: ");
    fgets(a[i].nome, sizeof(a[i].nome), stdin);
    a[i].nome[strcspn(a[i].nome, "\n")] = 0;

    printf("Curso: ");
    fgets(a[i].curso, sizeof(a[i].curso), stdin);
    a[i].curso[strcspn(a[i].curso, "\n")] = 0;

    printf("Número de matrícula: ");
    fgets(a[i].matricula, sizeof(a[i].matricula), stdin);
    a[i].matricula[strcspn(a[i].matricula, "\n")] = 0;

    printf("===============\n");
  }

  for (int i = 0; i < 5; i++) {
    printf("Aluno %d#, Nome = %s, Curso = %s, Matrícula = %s\n", i + 1, a[i].nome, a[i].curso, a[i].matricula);
  }

  return 0;
}