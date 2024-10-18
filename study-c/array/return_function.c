// C Program to return array from a function
#include <stdio.h>

int* func() {
  static int arr[5] = { 10, 20, 30, 40, 50 };
  return arr;
}

int main()
{
  int* ptr = func();
  printf("Array Elements: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", *ptr++);
  }
  return 0;
}