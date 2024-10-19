// C program to illustrate pointer arithmetic
#include <stdio.h>

int main()
{
  // declare an array
  int v[3] = { 10, 100, 200 };
  // declare pointer variable
  int* ptr;
  // assign the address of v[0] to ptr
  ptr = v;
  for (int i = 0; i < 3; i++) {
    // print value at address which is stored in ptr
    printf("Value of *ptr = %d\n", *ptr);
    //print value of ptr
    printf("Value of ptr = %p\n\n", ptr);
    // increment pointer ptr by 1
    ptr++;
  }
  return 0;
}