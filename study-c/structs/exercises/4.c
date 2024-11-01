#include <stdio.h>
#include <stdlib.h>

struct aluno {
  char nome[100], matricula[100];
  float prova1, prova2, prova3;
};

int main()
{
  struct aluno a[5];
  int i;
  for (i = 0; i < 5; i++) {
    printf("Nome do aluno %d#: ", i + 1);
    scanf("%s",a[i].nome);
    printf("Matrícula: ");
    scanf("%s", a[i].matricula);
    printf("Prova 1: ");
    scanf("%f", &a[i].prova1);
    printf("Prova 2: ");
    scanf("%f", &a[i].prova2);
    printf("Prova 3: ");
    scanf("%f", &a[i].prova3);
  }

  float maiorMedia = 0, menorMedia = 10, prova1 = 0;
  struct aluno aMaiorMedia, aMenorMedia, aMaiorNotaProva1;
  for (i = 0; i < 5; i++) {
    float media = (a[i].prova1 + a[i].prova2 + a[i].prova3) / 3.0;
    if (a[i].prova1 > prova1) {
      prova1 = a[i].prova1;
      aMaiorNotaProva1 = a[i];
    }
    if (media > maiorMedia) {
      maiorMedia = media;
      aMaiorMedia = a[i];
    }
    if (media < menorMedia) {
      menorMedia = media;
      aMenorMedia = a[i];
    }
    if (media > 6.0) {
      printf("Aluno %s aprovado!\n", a[i].nome);
    } else {
      printf("Aluno %s reprovado!\n", a[i].nome);
    }
  }

  printf("Maior nota da primeira prova = %s com nota %.2f\n", aMaiorNotaProva1.nome, aMaiorNotaProva1.prova1);
  printf("Maior media aluno = %s com media %.2f\n", aMaiorMedia.nome, maiorMedia);
  printf("Menor media aluno = %s com media %.2f\n", aMenorMedia.nome, menorMedia);

}