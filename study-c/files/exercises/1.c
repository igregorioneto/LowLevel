#include <stdio.h>

int main()
{
  FILE *file = fopen("arq.txt", "w");
  if (file == NULL) {
    printf("Erro ao ler arquivo para escrever\n");
    return 0;
  }

  char ch;
  printf("Digite caracteres para gravar no arquivo (digite '0' para terminar): ");
  while (1) {
    scanf(" %c", &ch);
    if (ch == '0') {
      break;
    }
    fputc(ch, file);
  }

  fclose(file);

  file = fopen("arq.txt", "r");
  if (file == NULL) {
    printf("Erro na leitura do arquivo\n");
    return 0;
  }

  printf("\nConteúdo do arquivo 'arq.txt': \n");
  while ((ch = fgetc(file) != EOF)) {
    putchar(ch);
  }
  printf("\n");

  fclose(file);

  return 0;
}