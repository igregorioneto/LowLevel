#include <stdio.h>

int main()
{
  int count = 0, mult = 3;
  while (count < 5) {
    printf("Multiple of 3 is %d\n", mult);
    mult += 3;
    count++;
  }
  return 0;
}