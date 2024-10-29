#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file = fopen("../arq.txt", "r");
  if (file == NULL) {
    printf("Erro na leitura do arquivo\n");
    return 0;
  }

  char ch;
  int countVogal = 0, countCons = 0;

  while ((ch = fgetc(file)) != EOF) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      countVogal++;
    } else {
      countCons++;
    }
  }
  fclose(file);
  printf("\nVogais = %d, Consoantes = %d\n", countVogal, countCons);

  return 0;
}