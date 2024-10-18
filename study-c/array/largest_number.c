// C program to find the largest number in the array
#include <stdio.h>

// function to return max value
int getMax(int* arr, int size) {
  int max = arr[0];
  for (int i = 0; i < size; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

// Driver code
int main()
{
  int arr[10] = { 135, 165, 1, 16, 511, 65, 654, 654, 169, 4 };
  int n = sizeof(arr) / sizeof(float);
  printf("Largest Number in the Array: %d", getMax(arr, n));
  return 0;
}