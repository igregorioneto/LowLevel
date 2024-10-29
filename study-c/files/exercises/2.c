#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f = fopen("arq.txt", "r");
  if (f == NULL) {
    printf("Erro na leitura do arquivo\n");
    return 0;
  }

  int count = 0;
  char ch;
  while ((ch = fgetc(f)) != EOF) {
    putchar(ch);
    if (ch == '\n') {
      count++;
    }
  }
  fclose(f);
  printf("\nQuantidade de elementos: %d\n", count + 1);

  return 0;
}