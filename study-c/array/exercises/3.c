#include <stdio.h>

int main()
{
  float A[] = { 10.5, 1.1, 1.8, 7.0, 4.5, 6.7, 4.9, 8.8, 9.1, 10.1 }, B[10];
  for (int i = 0; i < 10; i++) {
    B[i] = A[i] * A[i];
  }
  for (int i = 0; i < 10; i++) {
    printf("Valor da posição %d# do vetor A = %2.f e do vetor B = %.2f\n", i + 1, A[i], B[i] );
  }
  return 0;
}