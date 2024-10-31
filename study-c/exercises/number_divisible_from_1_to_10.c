#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, nro;
  N = nro = 10;
  int i, achou = 0;
  while (achou == 0) {
    achou = 1;
    for (i = 2; i <= N; i++) {
      if (nro % i != 0) {
        achou = 0;
        break;
      }
    }
    if (achou == 1) {
      printf("Nro = %d\n", nro);
    } else {
      nro += 2;
    }
  }

  return 0;
}