#include <stdio.h>

int somaAoCubo(int n) {
  if (n <= 0) {
    return 0;
  }
  return (n * n * n) + somaAoCubo(n - 1);
}

int main()
{
  int x = 5;
  printf("%d\n", somaAoCubo(x));
  return 0;
}