#include <stdio.h>

int main()
{
  char c[] = "Olá, tudo bem?\0";
  int count = 0;
  for (int i = 0; c[i] != '\0'; i++) {
    count++;
  }
  printf("Total de caracteres: %d\n", count);
  return 0;
}