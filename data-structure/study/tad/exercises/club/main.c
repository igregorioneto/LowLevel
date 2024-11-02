#include <stdio.h>
#include <stdlib.h>
#include "club.c"

int main()
{
  struct Club *c = malloc(sizeof(struct Club));
  if (c == NULL) {
    printf("Falha na alocação de memória\n");
    return 1;
  }

  char name[100] = "Clube";
  float price = 50.5;
  int capacity = 15;

  reserve(c, name, price, capacity);

  printf("Preço total da reserva: %.2f\n", price_reserve(c));

  free(c);

  return 0;
}