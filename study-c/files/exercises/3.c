#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file = fopen("arq.txt", "r");
  if (file == NULL) {
    printf("Erro na leitura do arquivo 'arq.txt'\n");
    return 0;
  }

  char ch;
  int count = 0;
  while ((ch = fgetc(file)) != EOF) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      count++;
    }
  }
  printf("\nTotal de vogais: %d\n", count);
  return 0;
}