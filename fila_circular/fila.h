#ifndef FILA_H
#define FILA_H

#include <stdbool.h> // Para usar os tipos bool, true e false

#define TAMANHO_MAX 10 // Define a capacidade máxima da fila

// Estrutura da Fila
typedef struct {
    int itens[TAMANHO_MAX]; // Vetor para armazenar os elementos
    int inicio;             // Índice do primeiro elemento
    int fim;                // Índice do próximo espaço livre
    int quantidade;         // Número de elementos na fila
} Fila;

// --- Protótipos das Funções ---

// Inicializa a fila
void inicializar(Fila *f);

// Verifica se a fila está cheia [cite: 11]
bool estaCheia(Fila *f);

// Verifica se a fila está vazia [cite: 10]
bool estaVazia(Fila *f);

// Insere um elemento no fim da fila [cite: 7]
bool inserir(Fila *f, int valor);

// Remove um elemento do início da fila [cite: 8]
bool remover(Fila *f, int *valorRemovido);

// Consulta o elemento no início da fila [cite: 9]
bool consultarInicio(Fila *f, int *valorConsultado);

#endif // FILA_H