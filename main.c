#include <stdio.h>
#include "lista.h"

int main() {
    Lista lista;
    int opcao, valor, posicao;
    
    do {
        printf("\nMenu de opções:\n");
        printf("1. Definir lista\n");
        printf("2. Verificar se a lista está vazia\n");
        printf("3. Destruir lista\n");
        printf("4. Inserir valor de forma ordenada\n");
        printf("5. Verificar se a lista está cheia\n");
        printf("6. Mostrar tamanho da lista\n");
        printf("7. Exibir lista\n");
        printf("8. Busca binária\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                Definir(&lista);
                printf("Lista definida (inicializada).\n");
                break;
                
            case 2:
                if (Vazia(&lista)) {
                    printf("A lista está vazia.\n");
                } else {
                    printf("A lista não está vazia.\n");
                }
                break;
                
            case 3:
                Destruir(&lista);
                printf("Lista destruída.\n");
                break;
                
            case 4:
                printf("Digite o valor para inserir de forma ordenada: ");
                scanf("%d", &valor);
                if (Inserir_ordenado(&lista, valor)) {
                    printf("Valor %d inserido de forma ordenada.\n", valor);
                } else {
                    printf("Erro: Lista cheia.\n");
                }
                break;
                
            case 5:
                if (Cheia(&lista)) {
                    printf("A lista está cheia.\n");
                } else {
                    printf("A lista não está cheia.\n");
                }
                break;
                
            case 6:
                printf("Tamanho atual da lista: %d\n", Tamanho(&lista));
                break;
                
            case 7:
                printf("Lista atual: ");
                Exibir(&lista);
                break;
                
            case 8:
                printf("Digite o valor para buscar (busca binária): ");
                scanf("%d", &valor);
                posicao = Busca_binaria(&lista, valor);
                if (posicao != -1) {
                    printf("Elemento %d encontrado na posição %d.\n", valor, posicao);
                } else {
                    printf("Elemento %d não encontrado.\n", valor);
                }
                break;
                
            case 0:
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);
    
    return 0;
}

