#include <stdio.h>

int main()
{
  int A[] = { 1, 0, 5, -2, -5, 7 };
  int sum = A[0] + A[1] + A[5];
  printf("A soma é: %d\n", sum);
  A[4] = 100;
  for (int i = 0; i < 6; i++) {
    printf("%d\n", A[i]);
  }
  return 0;
}