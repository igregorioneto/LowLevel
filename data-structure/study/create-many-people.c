#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#define alturaMaxima 255
#define nomeSize 100
#define maxPessoas 5

typedef struct {
    char nome[nomeSize];
    int idade;
    int peso;
    int altura;
} Pessoa;

int main() {
    Pessoa pessoas[maxPessoas];
    int countPessoa = 0;

    while (countPessoa < maxPessoas)
    {
        prinf("Cadastro da pessoa %d\n", countPessoa + 1);

        printf("Nome: ");
        fgets(pessoas[countPessoa].nome, nomeSize, stdin);
        pessoas[countPessoa].nome[strcspn(pessoas[countPessoa].nome, "\n")] = "\0";

        printf("Idade: ");
        scanf("%d", &pessoas[countPessoa].idade);

        printf("Peso: ");
        scanf("%d", &pessoas[countPessoa].peso);

        printf("Altura: ");
        scanf("%d", &pessoas[countPessoa].altura);

        if (pessoas[countPessoa].altura > alturaMaxima) {
            printf("Aviso: Altura acima da máxima permitida (%d cm).\n", alturaMaxima);
        }
        countPessoa++;
        // Limpar o buffer do stdin para a próxima iteração
        getchar();
        printf("\n");
    }

    // Listando as informações
    printf("Pessoas cadastradas:\n");
    for (int i = 0; i < maxPessoas; i++)
    {
        printf("Pessoa %d - Nome: %s, Idade: %d, Peso: %d, Altura: %d",
            i+1, pessoas[i].nome, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura);
    }
    
    return 0;
}