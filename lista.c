#include <stdio.h>
#include "lista.h"

void Definir(Lista *L) {
    L->tamanho = 0;
}

int Vazia(Lista *L) {
    return L->tamanho == 0;
}

void Destruir(Lista *L) {
    L->tamanho = 0;
}

int Cheia(Lista *L) {
    return L->tamanho == MAX;
}

int Tamanho(Lista *L) {
    return L->tamanho;
}

void Exibir(Lista *L) {
    if (Vazia(L)) {
        printf("A lista está vazia.\n");
        return;
    }
    for (int i = 0; i < L->tamanho; i++) {
        printf("%d ", L->elementos[i]);
    }
    printf("\n");
}

// Insere o valor de forma ordenada na lista
int Inserir_ordenado(Lista *L, tipo_elem v) {
    if (Cheia(L)) return 0;

    int i;
    // Encontrar a posição onde o elemento deve ser inserido
    for (i = L->tamanho - 1; (i >= 0 && L->elementos[i] > v); i--) {
        L->elementos[i + 1] = L->elementos[i];
    }

    L->elementos[i + 1] = v;  // Insere o elemento na posição correta
    L->tamanho++;
    return 1;
}

// Algoritmo de busca binária em lista ordenada
int Busca_binaria(Lista *L, tipo_elem v) {
    int esquerda = 0;
    int direita = L->tamanho - 1;
    
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (L->elementos[meio] == v) {
            return meio;  // Retorna o índice onde o elemento foi encontrado
        } else if (L->elementos[meio] < v) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;  // Retorna -1 se o elemento não foi encontrado
}

