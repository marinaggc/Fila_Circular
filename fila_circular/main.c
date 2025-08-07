#include <stdio.h>
#include "fila.h"

int main() {
    Fila minhaFila;
    int valor;

    // Inicializa a fila
    inicializar(&minhaFila);
    printf("--- Testando Fila Circular ---\n");

    // 1. Testar se a fila está vazia no início [cite: 10]
    printf("\nA fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");

    // 2. Inserir elementos na fila [cite: 7]
    printf("\nInserindo os valores 10, 20, 30...\n");
    inserir(&minhaFila, 10);
    inserir(&minhaFila, 20);
    inserir(&minhaFila, 30);

    // 3. Consultar o início [cite: 9]
    if (consultarInicio(&minhaFila, &valor)) {
        printf("Elemento no início da fila: %d\n", valor);
    }

    // 4. Verificar se a fila não está mais vazia
    printf("A fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");

    // 5. Remover um elemento [cite: 8]
    if (remover(&minhaFila, &valor)) {
        printf("\nElemento removido: %d\n", valor);
    }

    // 6. Consultar o novo início
    if (consultarInicio(&minhaFila, &valor)) {
        printf("Novo elemento no início da fila: %d\n", valor);
    }

    // 7. Encher a fila para testar se está cheia [cite: 11]
    printf("\nInserindo mais elementos para encher a fila...\n");
    for (int i = 40; i <= 110; i += 10) {
        inserir(&minhaFila, i);
    }

    printf("A fila está cheia? %s\n", estaCheia(&minhaFila) ? "Sim" : "Não");

    // 8. Tentar inserir em uma fila cheia
    printf("\nTentando inserir o valor 120 em uma fila cheia...\n");
    if (!inserir(&minhaFila, 120)) {
        printf("Inserção falhou como esperado.\n");
    }

    // 9. Esvaziar a fila
    printf("\nEsvaziando a fila...\n");
    while (remover(&minhaFila, &valor)) {
        printf("Removido: %d\n", valor);
    }

    // 10. Testar se a fila está vazia novamente
    printf("A fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");

    // 11. Tentar remover de uma fila vazia
    printf("\nTentando remover de uma fila vazia...\n");
    if (!remover(&minhaFila, &valor)) {
        printf("Remoção falhou como esperado.\n");
    }

    return 0;
}