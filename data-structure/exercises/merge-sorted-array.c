#include <stdio.h>

void merge(int* nums1, int num1Size, int m, int* nums2, int nums2Size, int n) {
    // Declaring variables in relation:
    int i = m - 1; // total valid numbers of nums1
    int j = n - 1; // total valid numbers of nums2
    int k = num1Size - 1; // final array total
    // Filling nums1 backwards
    while(i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    // Filling the remaining value of nums2 if you have
    while(j >= 0) {
        nums1[k--] = nums2[j--];
    } 
}

int main() {
    int nums1[6] = { 1, 5, 6, 0, 0, 0 };
    int nums2[3] = { 2, 3, 4 };
    merge(nums1, 6, 3, nums2, 3, 3);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", nums1[i]);
    } 
    printf("\n");
    return 0;
}