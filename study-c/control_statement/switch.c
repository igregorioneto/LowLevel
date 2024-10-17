// C program to illustrate the us of switch statement
#include <stdio.h>

int main()
{
  // variable to be used in switch statement
  int var = 2;

  // declaring switch cases
  switch(var) {
    case 1:
      printf("Case 1 is executed\n");
      break;
    case 2:
      printf("Case 2 is executed\n");
      break;
    default:
      printf("Default Case is executed\n");
      break;
  }

  return 0;
}