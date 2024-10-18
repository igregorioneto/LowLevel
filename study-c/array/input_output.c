// C program to perform input and output on array
#include <stdio.h>

int main()
{
  // declaring an integer array
  int arr[5];
  // taking input to array elements one by one
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  // printing elements
  printf("Array elements: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}