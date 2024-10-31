#include <stdio.h>

int min(int *array, int arrayLength)
{
  int min = array[0];
  for (int i = 0; i < arrayLength; i++) 
  {
    if (min > array[i]) 
    {
      min = array[i];
    }
  }
  return min;
}

int max(int *array, int arrayLength)
{
  int max = array[0];
  for (int i = 0; i < arrayLength; i++) 
  {
    if (max < array[i])
    {
      max = array[i];
    }
  }
  return max;
}

int main()
{
  int arr1[] = {4, 6, 2, 1, 9, 63, -134, 566};
  int arr2[] = {-52, 56, 30, 29, -54, 0, -110};
  int arr3[] = {42, 54, 65, 87, 0};
  int arr4[] = {5};

  int n1 = sizeof(arr1) / sizeof(int);
  int n2 = sizeof(arr2) / sizeof(int);
  int n3 = sizeof(arr3) / sizeof(int);
  int n4 = sizeof(arr4) / sizeof(int);
  printf("-> max = %d, min = %d\n", max(arr1, n1), min(arr1, n1));
  printf("-> max = %d, min = %d\n", max(arr2, n2), min(arr2, n2));
  printf("-> max = %d, min = %d\n", max(arr3, n3), min(arr3, n3));
  printf("-> max = %d, min = %d\n", max(arr4, n4), min(arr4, n4));

  return 0;
}