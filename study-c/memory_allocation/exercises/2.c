#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &size);
  int *v = malloc(size * sizeof(int));
  if (v == NULL) {
    printf("Error: Memória inválida");
    exit(1);
  }
  for (int i = 0; i < size; i++) {
    printf("%d#: ", i + 1);
    scanf("%d", &v[i]);
  }
  for (int i = 0; i < size; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  free(v);

  return 0;
}