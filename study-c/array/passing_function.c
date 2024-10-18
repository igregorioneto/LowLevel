// C program to pass an array to a function
#include <stdio.h>

void printArray(int arr[], int size) {
  printf("Size of Array in Functions: %d\n", sizeof(arr)); // return a pointer
  printf("Array elements: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int arr[5] = { 10, 20, 30, 40, 50 };
  printf("Size of array in main(): %d\n", sizeof(arr));
  printArray(arr, 5);
  return 0;
}