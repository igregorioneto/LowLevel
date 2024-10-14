// C program to demonstrate constant variable
#include <stdio.h>

int main() {
  // local variable
  int not_constant;

  // constant variable
  const int constant = 20;

  // changing values
  not_constant = 40;
  // constant = 22;

  printf("\tNot constant: %d\n\tConstant: %d\n", not_constant, constant);
  return 0;
}