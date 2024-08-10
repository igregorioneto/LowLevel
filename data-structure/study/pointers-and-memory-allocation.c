#include <stdio.h>

int main() {
    int x = 25; // 9000
    int* y = &x; //3000 -> 9000
    *y = 30;
    printf("Valor atual do x: %i\n", x);
    return 0;
}