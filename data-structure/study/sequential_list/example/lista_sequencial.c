#include <stdio.h>
#include <stdlib.h>
#include "lista_sequencial.h";

struct lista
{
  int qtd;
  struct aluno dados[MAX];
};

Lista *cria_lista()
{
  Lista *li;
  li = (Lista *)malloc(sizeof(struct lista));
  if (li != NULL)
    li->qtd = 0;
  return li;
}

void libera_lista(Lista *li)
{
  free(li);
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al)
{
  if (li == NULL || pos <= 0 || pos >= li->qtd)
    return 0;
  *al = li->dados[pos - 1];
  return 1;
}

int consulta_lista_mat(Lista *li, int mat, struct aluno *al)
{
  if (li == NULL)
    return 0;
  int i = 0;
  while (i < li->qtd && li->dados[i].matricula != mat)
  {
    i++;
  }
  if (i == li->qtd)
    return 0;
  *al = li->dados[i];
  return 1;
}

int inserir_final(Lista *li, struct aluno al)
{
  if (li == NULL)
    return 0;
  if (li->qtd == MAX)
    return 0;
  li->dados[li->qtd] = al;
  li->qtd++;
  return 1;
}

int inserir_inicio(Lista *li, struct aluno al)
{
  if (li == NULL)
    return 0;
  if (li->qtd == MAX)
    return 0;
  int i = 0;
  for (i = li->qtd - 1; i >= 0; i--)
  {
    li->dados[i + 1] = li->dados[i];
  }
  li->dados[0] = al;
  li->qtd++;
  return 1;
}

int inserir_ordenada(Lista *li, struct aluno al)
{
  if (li == NULL)
    return 0;
  if (li->qtd == MAX)
    return 0;
  int k, i = 0;
  while (i < li->qtd && li->dados[i].matricula < al.matricula)
  {
    i++;
  }
  for (k = li->qtd - 1; k >= i; k--)
  {
    li->dados[k + 1] = li->dados[k];
  }
  li->dados[i] = al;
  li->qtd++;
  return 1;
}

int remove_lista(Lista *li, int mat)
{
  if (li == NULL)
    return 0;
  if (li->qtd == 0)
    return 0;
  int k, i = 0;
  while (i < li->qtd && li->dados[i].matricula != mat)
  {
    i++;
  }
  if (i == li->qtd)
    return 0;
  for (k = 1; k < li->qtd - 1; i++)
  {
    li->dados[k] = li->dados[k + 1];
  }
  li->qtd--;
  return 1;
}

int remove_lista_inicio(Lista *li)
{
  if (li == NULL)
    return 0;
  if (li->qtd == 0)
    return 0;
  int i = 0;
  for (i = 0; i < li->qtd - 1; i++)
  {
    li->dados[i] = li->dados[i + 1];
  }
  li->qtd++;
  return 1;
}

int remove_lista_final(Lista *li)
{
  if (li == NULL)
    return 0;
  if (li->qtd == 0)
    return 0;
  li->qtd--;
  return 1;
}

int remove_lista_otimizado(Lista *li, int mat)
{
  if (li == NULL)
    return 0;
  if (li->qtd == 0)
    return 0;

  int i = 0;
  while (i < li->qtd && li->dados[i].matricula != mat)
  {
    i++;
  }
  if (i == li->qtd)
    return 0;

  li->qtd--;
  li->dados[i] = li->dados[li->qtd];
  return 1;
}

int tamanho_lista(Lista *li)
{
  if (li == NULL)
    return -1;
  else
    return li->qtd;
}

int lista_cheia(Lista *li)
{
  if (li == NULL)
    return -1;
  else
    return (li->qtd == MAX);
}

int lista_vazia(Lista *li)
{
  if (li == NULL)
    return -1;
  else
    return (li->qtd == 0);
}

void imprimir_lista(Lista *li)
{
  if (li == NULL)
    return;
  int i = 0;
  for (i = 0; i < li->qtd; i++)
  {
    printf("Matricula: %d\n", li->dados[i].matricula);
    printf("Nome: %s\n", li->dados[i].nome);
    printf("Notas: %f %f %f\n", li->dados[i].n1,
           li->dados[i].n2,
           li->dados[i].n3);
    printf("-------------------------------\n");
  }
}