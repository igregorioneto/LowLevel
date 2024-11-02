#include <stdio.h>
#include <malloc.h>

int main() {
    int* y = (int*) malloc(sizeof(int)); // 0940 -> 2200
    *y = 20; // 2200[20]
    int z = sizeof(int); // 0936 - 4
    printf("*y=%i z=%i\n", *y, z);
    return 0;
}