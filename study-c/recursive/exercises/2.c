#include <stdio.h>

int fatorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * fatorial(n - 1);
}

int main()
{
  int x = 5;
  printf("%d\n", fatorial(x));
  return 0;
}