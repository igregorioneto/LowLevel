// C program to illustrate
// fgets()
#include <stdio.h>
#define MAX 50
int main()
{
  char str[MAX];
  // Max size if 50 defined
  fgets(str, MAX, stdin);
  printf("String is: \n");
  // displaying strings using puts
  puts(str);
  return 0;
}