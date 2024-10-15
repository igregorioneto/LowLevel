// C program to print integer data types
#include <stdio.h>

int main()
{
  // Integer value with positive value
  int a = 9;
  // Integer value with negative value
  int b = -9;
  // U or u is used for Unsigned int in C
  int c = 89U;
  // L or l used for long int in C
  long int d = 99998L;

  printf("Integer value with positive data: %d\n", a);
  printf("Integer value with negative data: %d\n", b);
  printf("Integer value with unsigned int data: %d\n", c);
  printf("Integer value with long int data: %d\n", d);

  return 0;
}