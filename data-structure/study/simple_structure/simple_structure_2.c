#include <stdio.h>
#include <stdlib.h>
#define alturaMaxima 255

typedef struct
{
  int peso;
  int altura;
} PesoAltura;

int main()
{
  int x;
  PesoAltura *pessoa1;
  printf("Valor inicial do endereço: %p\n", pessoa1);
  pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
  printf("Peso: %d, Altura: %d\n", pessoa1->peso, pessoa1->altura);
  pessoa1->peso = 80;
  pessoa1->altura = 185;

  printf("Peso: %d, Altura: %d\n", pessoa1->peso, pessoa1->altura);
  if (pessoa1->altura > alturaMaxima)
  {
    printf("Altura acima da maxima\n");
  }
  else
  {
    printf("Altura abaixo da máxima\n");
  }

  printf("%p %p %p\n", &x, &pessoa1, pessoa1);
}