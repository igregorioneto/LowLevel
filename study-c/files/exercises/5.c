#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file = fopen("../arq.txt", "r");
  if (file == NULL) {
    printf("Erro ao carregar arquivo\n");
    return 0;
  }

  char ch, c;
  int count = 0;

  printf("\nDigite uma letra: ");
  scanf("%c", &c);

  while((ch = fgetc(file)) != EOF) {
    if (ch == c) {
      count++;
    }
  }

  fclose(file);

  printf("\nTotal de vezes que apareceu a letra %c = %d\n", c, count);

  return 0;
}