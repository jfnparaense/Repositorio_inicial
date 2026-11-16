#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um vetor dinâmico
typedef struct {
    int *elementos; // Ponteiro para o array dinâmico
    int n;          // Contador de elementos inseridos
} Vetor;

int main() {
    // 1. Alocando a estrutura na memória
    Vetor *v = (Vetor *) malloc(sizeof(Vetor));
    
    // 2. Alocando espaço para 5 números inteiros e iniciando o contador
    v->elementos = (int *) malloc(5 * sizeof(int));
    v->n = 0; 

    // 3. Inserindo dados (complexidade O(1) no final)
    v->elementos[0] = 42;
    v->n++; 
    
    v->elementos[1] = 84;
    v->n++;

    // 4. Imprimindo os resultados
    printf("Compilador funcionando perfeitamente no Codespaces!\n");
    printf("Tamanho atual do vetor (v->n): %d\n", v->n);
    printf("Valor no índice 0: %d\n", v->elementos[0]);
    printf("Valor no índice 1: %d\n", v->elementos[1]);

    // 5. Liberando a memória (boa prática)
    free(v->elementos);
    free(v);

    return 0;
}
