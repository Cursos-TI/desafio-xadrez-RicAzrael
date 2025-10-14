#include <stdio.h>

// Constantes para as direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"

// Constantes para os limites de movimentação
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

/**
 * @brief Função principal que executa a simulação de movimento das peças.
 * O programa simula o movimento de um Bispo, uma Torre e uma Rainha,
 * utilizando diferentes estruturas de repetição (while, for, do-while)
 * para demonstrar seu uso, conforme as regras especificadas.
 */
int main() {
    printf("\n--- Simulação de Movimentação de Peças de Xadrez ---\n");

    // Movimentação do Bispo: 5 casas na diagonal superior direita
    // Utiliza um loop `while` para repetir o movimento.
    printf("\nMovimentação do Bispo (%d casas na Diagonal Superior Direita):\n", MOV_BISPO);
    int i = 0;
    while (i < MOV_BISPO) {
        // A cada iteração, imprime a combinação de movimentos que representa a diagonal.
        printf("Movimento %d: ", i + 1);
        printf(CIMA);   // Movimento para cima
        printf(DIREITA); // Movimento para a direita
        i++;
    }

    // Movimentação da Torre: 5 casas para a direita
    // Utiliza um loop `for` para um número fixo de repetições.
    printf("\nMovimentação da Torre (%d casas para a Direita):\n", MOV_TORRE);
    for (int j = 0; j < MOV_TORRE; j++) {
        printf("Movimento %d: ", j + 1);
        printf(DIREITA);
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    // Utiliza um loop `do-while`, que executa o bloco de código pelo menos uma vez.
    printf("\nMovimentação da Rainha (%d casas para a Esquerda):\n", MOV_RAINHA);
    int k = 0;
    do {
        printf("Movimento %d: ", k + 1);
        printf(ESQUERDA);
        k++;
    } while (k < MOV_RAINHA);

    printf("\n--- Fim da Simulação ---\n\n");

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}



