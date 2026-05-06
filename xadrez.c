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

int main() {
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
}
