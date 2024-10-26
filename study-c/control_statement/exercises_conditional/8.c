#include <stdio.h>

int main()
{
  float x, y;
  printf("Digite uma nota: ");
  scanf("%f", &x);
  printf("Digite outra nota: ");
  scanf("%f", &y);
  if (x < 0 || x > 10 || y < 0 || y > 10) {
    printf("Notas inválidas!\n");
    return 0;
  }
  float media = (x + y) / 2.0;
  printf("Média = %.2f\n", media);
  return 0;
}