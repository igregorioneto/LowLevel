#include <stdio.h>

int sum(int n) {
  if (n <= 0) {
    return 0;
  }
  return n + sum(n - 1);
}

int main()
{
  int x = 5;
  printf("%d\n", sum(x));
  return 0;
}