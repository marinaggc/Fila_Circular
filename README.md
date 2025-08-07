# Atividade de Estrutura de Dados: Fila Circular

Este projeto é uma implementação de uma **Fila de Inteiros** utilizando um vetor com a técnica de incremento circular. A atividade foi desenvolvida para a disciplina de Estrutura de Dados do Centro de Informática da Universidade Federal da Paraíba.

---

## 📜 Descrição

O objetivo deste trabalho é implementar as operações fundamentais de uma estrutura de dados do tipo Fila, garantindo o correto funcionamento do enfileiramento e desenfileiramento de elementos em um vetor de tamanho fixo, de forma eficiente e circular.

### Funcionalidades Implementadas

Conforme solicitado, as seguintes operações estão disponíveis:
* **Inserir**: Adiciona um elemento no fim da fila.
* **Remover**: Retira o elemento do início da fila.
* **Consultar**: Exibe o elemento no início da fila sem removê-lo.
* **Verificar se Vazia**: Indica se a fila não possui elementos.
* **Verificar se Cheia**: Indica se a fila atingiu sua capacidade máxima.

---

## 📂 Estrutura do Projeto

O código está organizado nos seguintes arquivos:

* `fila.h`: O arquivo de cabeçalho que define a estrutura `Fila` e os protótipos das funções.
* `fila.c`: Contém a implementação das funções que manipulam a estrutura da fila.
* `main.c`: Um programa principal utilizado para testar todas as funcionalidades da fila.
* `Makefile`: Arquivo de automação que compila, testa e limpa o projeto.
* `saida.txt`: Um arquivo de texto com a saída gerada pelos casos de teste para facilitar a correção.

---

## ⚙️ Como Compilar e Executar

Este projeto utiliza um `Makefile` para automatizar a compilação e execução. Certifique-se de ter o `gcc` e o `make` instalados.

### Comandos

* **Para compilar o projeto:**
    ```bash
    make
    ```
    Este comando gera o executável `programa_fila`.

* **Para compilar e executar os testes (gerando o `saida.txt`):**
    ```bash
    make test
    ```

* **Para limpar os arquivos gerados (executável e arquivos objeto):**
    ```bash
    make clean
    ```

---

## ✅ Saída dos Testes

O arquivo `saida.txt` contém o resultado da execução dos casos de teste presentes no `main.c`. O conteúdo esperado é:

```text
--- Testando Fila Circular ---

A fila está vazia? Sim

Inserindo os valores 10, 20, 30...
Elemento no início da fila: 10
A fila está vazia? Não

Elemento removido: 10
Novo elemento no início da fila: 20

Inserindo mais elementos para encher a fila...
A fila está cheia? Sim

Tentando inserir o valor 120 em uma fila cheia...
Erro: A fila está cheia!
Inserção falhou como esperado.

Esvaziando a fila...
Removido: 20
Removido: 30
Removido: 40
Removido: 50
Removido: 60
Removido: 70
Removido: 80
Removido: 90
Removido: 100
Removido: 110
A fila está vazia? Sim

Tentando remover de uma fila vazia...
Erro: A fila está vazia!
Remoção falhou como esperado.
