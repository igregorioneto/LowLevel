// C program to demonstrate the
// declaration, definition and
// initialization
#include <stdio.h>

int main() {
  // declaration and definition
  int defined_var;

  printf("Defined_var: %d\n", defined_var); // defined_var is used uninitialized

  // assignment
  defined_var = 12;

  // declaration + definition + initialization
  int ini_var = 25;

  printf("Value of defined_var after assignment: %d\n", defined_var);
  printf("Value of init_var: %d\n", ini_var);

  return 0;
}