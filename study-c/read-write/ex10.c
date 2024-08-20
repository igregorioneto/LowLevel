#include <stdio.h>
int main() {
    int d, m, y;
    printf("Digite o dia, mes e ano (d m y): ");
    scanf("%d %d %d", &d, &m, &y);
    printf("%d/%d/%d\n", d, m, y);
    return 0;
}