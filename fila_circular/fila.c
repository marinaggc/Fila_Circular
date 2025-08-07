#include <stdio.h>
#include "fila.h"

// Inicializa a fila, deixando-a pronta para uso
void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->quantidade = 0;
}

// Retorna true se a fila atingiu sua capacidade máxima, false caso contrário [cite: 11]
bool estaCheia(Fila *f) {
    return f->quantidade == TAMANHO_MAX;
}

// Retorna true se a fila não contém elementos, false caso contrário [cite: 10]
bool estaVazia(Fila *f) {
    return f->quantidade == 0;
}

// Insere um novo elemento no final da fila [cite: 7]
bool inserir(Fila *f, int valor) {
    if (estaCheia(f)) {
        printf("Erro: A fila está cheia!\n");
        return false;
    }
    f->itens[f->fim] = valor;
    f->fim = (f->fim + 1) % TAMANHO_MAX; // Incremento circular
    f->quantidade++;
    return true;
}

// Remove o elemento do início da fila [cite: 8]
bool remover(Fila *f, int *valorRemovido) {
    if (estaVazia(f)) {
        printf("Erro: A fila está vazia!\n");
        return false;
    }
    *valorRemovido = f->itens[f->inicio];
    f->inicio = (f->inicio + 1) % TAMANHO_MAX; // Incremento circular
    f->quantidade--;
    return true;
}

// Obtém o valor do elemento no início da fila sem removê-lo [cite: 9]
bool consultarInicio(Fila *f, int *valorConsultado) {
    if (estaVazia(f)) {
        printf("Erro: A fila está vazia!\n");
        return false;
    }
    *valorConsultado = f->itens[f->inicio];
    return true;
}