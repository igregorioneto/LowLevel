// C program to declare and print local variable inside a function
#include <stdio.h>

void function() {
  int x = 10; // local variable
  printf("%d\n", x);
}

int main() {
  function();
  return 0;
}