#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size = 0, par = 0, impar = 0;
  printf("Tamanho do vetor: ");
  scanf("%d", &size);
  if (size <= 0) {
    printf("Error: Necessário ter um valor maior que 1\n");
    exit(1);
  }
  int *v = malloc(size * sizeof(int));
  if (v == NULL) {
    printf("Error: Sem espaço de memória");
    exit(1);
  }
  for (int i = 0; i < size; i++) {
    printf("%d#: ", i + 1);
    scanf("%d", &v[i]);
  }
  for (int i = 0; i < size; i++) {
    if (v[i] % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }
  printf("Pares = %d, Impares = %d\n", par, impar);
  free(v);
  return 0;
}