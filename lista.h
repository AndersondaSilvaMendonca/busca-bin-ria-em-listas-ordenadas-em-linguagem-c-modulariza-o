#ifndef LISTA_H
#define LISTA_H

#define MAX 100

typedef int tipo_elem;

typedef struct {
    tipo_elem elementos[MAX];
    int tamanho;
} Lista;

void Definir(Lista *L);
int Vazia(Lista *L);
void Destruir(Lista *L);
int Inserir_ordenado(Lista *L, tipo_elem v);
int Cheia(Lista *L);
int Tamanho(Lista *L);
void Exibir(Lista *L);
int Busca_binaria(Lista *L, tipo_elem v);

#endif

