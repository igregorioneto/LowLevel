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
  int count_alphabet[26] = {0};

  while ((ch = fgetc(file)) != EOF) {
    if (ch >= 'a' && ch <= 'z') {
      count_alphabet[ch - 'a']++;
    }
    if (ch >= 'A' && ch <= 'Z') {
      count_alphabet[ch - 'A']++;
    }
  }

  fclose(file);

  printf("\nTotal de letras do alfabeto:\n");
  for (int i = 0; i < 26; i++) {
    printf("%c: %d\n", 'A' + i, count_alphabet[i]);
  }

  return 0;
}