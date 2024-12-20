#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX+1]; // acrescentando +1 no valor final devido a busca por elementos
    int nroElem;
} LISTA;

// Iniciar a estrutura
void inicializarLista(LISTA* l) {
    l->nroElem = 0;
}
// Retornar a quantidade de elementos válidos
int tamanho(LISTA* l) {
    return l->nroElem;
}
// Exibir os elementos da estrutura
void exibirLista(LISTA* l) {
    int i;
    printf("Lista: \" ");
    for (i = 0; i < l->nroElem; i++)
        printf("%i ", l->A[i].chave);
    printf("\"\n");    
}
// Buscar um elemento na estrutura
int buscaSequencial(LISTA* l, TIPOCHAVE ch) {
    int i = 0;
    while (i < l->nroElem) {
        if (ch == l->A[i].chave) return i;
        else i++;
    }    
    return -1;
}
// Busca de elementos (sentinela)
int buscaSentinela(LISTA* l, TIPOCHAVE ch) {
    int i = 0;
    l->A[l->nroElem].chave = ch;
    while(l->A[i].chave != ch) i++;
    if (i == l->nroElem) return -1;
    else return i;
}
// Busca Binária
int buscaBinaria(LISTA*l, TIPOCHAVE ch) {
    int esq, dir, meio;
    esq = 0;
    dir = l->nroElem-1;
    while(esq <= dir) {
        meio = ((esq + dir) / 2);
        if (l->A[meio].chave == ch) return meio;
        else {
            if (l->A[meio].chave < ch) esq = meio + 1;
            else dir = meio - 1;
        }
    }
    return -1;
}
// Inserir elementos na estrutura
bool inserirElemLista(LISTA* l, REGISTRO reg, int i) {
    int j;
    if ((l->nroElem == MAX) || (i < 0) || (i > l->nroElem))
        return false;
    for(j = l->nroElem; j > i; j--) l->A[j] = l->A[j-1];
    l->A[i] = reg;
    l->nroElem++;
    return true;
}
// Inserir elementos - ordenada
bool inserirElemOrd(LISTA* l, REGISTRO reg) {
    if (l->nroElem >= MAX) return false;
    int pos = l->nroElem;
    while (pos > 0 && l->A[pos-1].chave > reg.chave) {
        l->A[pos] = l->A[pos-1];
        pos--;
    }   
    l->A[pos] = reg;
    l->nroElem++; 
}
// Excluir elementos da estrutura
bool excluirElemLista(TIPOCHAVE ch, LISTA* l) {
    int pos, j;
    pos = buscaSequencial(l, ch);   
    if (pos == -1) return false;
    for (j = pos; j < l->nroElem; j++)
        l->A[j] = l->A[j+1];
    l->nroElem--;
    return true;
}
// Reinicializar a estrutura
void reinicializarLista(LISTA* l) {
    l->nroElem = 0;
}

int main() {
    LISTA lista;
    REGISTRO reg;
    int pos;

    // Inicializando a lista
    inicializarLista(&lista);
    // Inserindo elementos
    reg.chave = 10;
    inserirElemLista(&lista, reg, 0);
    reg.chave = 20;
    inserirElemLista(&lista, reg, 1);
    reg.chave = 40;
    inserirElemLista(&lista, reg, 2);
    reg.chave = 30;
    inserirElemOrd(&lista, reg);
    // Exibindo lista
    exibirLista(&lista);
    // Buscando elemento da lista
    pos = buscaSequencial(&lista, 20);
    pos = buscaSentinela(&lista, 30);
    printf("Busca sentinela: %i\n", pos);
    pos = buscaBinaria(&lista, 20);
    printf("Busca binária: %i\n", pos);
    if (pos != -1) 
        printf("Elemento %i encontrado na posição %i\n", 20, pos);
    else
        printf("Elemento %i não encontrado\n", 20);
    // Excluir elemento da lista
    if (excluirElemLista(20, &lista)) 
        printf("Elemento %i excluido com sucesso!\n", 20);
    else
        printf("Elemento %i não encontrado na lista\n", 20);
    // Exibir novamente a lista
    exibirLista(&lista);
    // Reinicializar lista
    reinicializarLista(&lista);
    // Exibir lista após a reinicialização
    exibirLista(&lista);
    return 0;
}

