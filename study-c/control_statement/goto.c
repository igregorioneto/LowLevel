// C program to print numbers
// from 1 to 10 using goto
// statement
#include <stdio.h>

void printNumbers() {
  int n = 1;
  label:
    printf("%d ", n);
    n++;
    if (n <= 10)
      goto label;
}

// Driver program to test above function
int main()
{
  printNumbers();
  printf("\n");
  return 0;
}