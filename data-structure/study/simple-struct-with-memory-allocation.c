#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 255

typedef struct {
    int peso;
    int altura;
} PesoAltura;

int main() {
    PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura)); // pessoa1 -> 7406
    pessoa1->peso = 80; // 7406[80]
    pessoa1-> altura = 185; // 7406[185]
    printf("Peso: %i, Altura: %i. ", pessoa1->peso, pessoa1->altura);
    if (pessoa1->altura > alturaMaxima) printf("Altura acima da máxima.\n");
    else printf("Altura abaixo da máxima.\n");
    return 0;
}
