#include <stdio.h>

int main()
{
  for (int i = 1; i <= 100; i++)
  {
    printf("Number is: %d\n", i);
  }

  int i = 1;
  while (i <= 100) {    
    printf("Number is: %d\n", i);
    i++;
  }

  i = 1;
  do {
    printf("Number is: %d\n", i);
    i++;
  } while(i <= 100);

  return 0;
}