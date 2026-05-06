#include <stdio.h>

/**
 * DESAFIO MATECHECK - NÍVEL NOVATO
 * Objetivo: Demonstrar movimentação de peças usando loops.
 * 
 * Regras de Negócio:
 * - Bispo: 5 casas na diagonal superior direita (Cima + Direita)
 * - Torre: 5 casas para a direita
 * - Rainha: 8 casas para a esquerda
 */

/* int main() {
    // Definição de constantes para os limites de movimento
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // --- MOVIMENTAÇÃO DO BISPO ---
    // Utilizando a estrutura FOR
    // A diagonal superior direita é composta por um passo para Cima e um para Direita
    printf("Movimentação do Bispo (5 casas na Diagonal Superior Direita):\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Passo %d: Cima, Direita\n", i);
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA TORRE ---
    // Utilizando a estrutura WHILE
    printf("Movimentação da Torre (5 casas para a Direita):\n");
    int contadorTorre = 1;
    while (contadorTorre <= MOV_TORRE) {
        printf("Direita\n");
        contadorTorre++;
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Utilizando a estrutura DO-WHILE
    printf("Movimentação da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOV_RAINHA);
    printf("\n");

    return 0;
}  */ 


#include <stdio.h>

int main() {
    // Definimos as constantes para o movimento em "L"
    // 2 casas para baixo e 1 para a esquerda
    const int BAIXO = 2;
    const int ESQUERDA = 1;

    printf("Movimentação do Cavalo (Em L - Baixo e Esquerda):\n");

    // Loop Externo (FOR): Controla o movimento vertical (para baixo)
    for (int i = 1; i <= BAIXO; i++) {
        
        // Loop Interno (WHILE): Controla o movimento horizontal (para esquerda)
        // Ele só executa completamente após o loop externo finalizar sua lógica
        int j = 1;
        while (j <= ESQUERDA) {
            // Se for a última iteração do movimento para baixo, 
            // fazemos o movimento para a esquerda para completar o "L"
            if (i == BAIXO) {
                printf("Baixo\n");
                printf("Esquerda\n");
            } else {
                printf("Baixo\n");
            }
            j++;
        }
    }

    return 0;
}
