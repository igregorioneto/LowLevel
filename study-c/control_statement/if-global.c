#include <stdio.h>

int main()
{
  int gfg = 0; // local variable for main
  printf("Before if-else block %d\n", gfg);
  if (1) {
    int gfg = 100;
    printf("if block %d\n", gfg);
  }
  printf("After if block %d\n", gfg);
  return 0;
}