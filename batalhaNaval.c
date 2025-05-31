#include <stdio.h>

int main() {
    // Declara uma matriz bidimensional para representar o tabuleiro 5x5.
    // Usando 0 para água e 1 para uma parte de navio.
    int tabuleiro[5][5] = {0}; 

    printf("***** Bem-vindo ao Batalha Naval - Nível Novato! *****\n");
   

    // --- Posicionando o primeiro navio (Vertical) ---
    // Partes: (0,1), (1,1), (2,1)
    
    // Marca as posições do navio no tabulero
    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;
    
    // --- Posicionando o segundo navio (Horizontal) ---

    // Exemplo: Navio de 2 partes, começando em (3, 3) e indo para a direita.
    // Partes: (3,3), (3,4)

    // Marca as posições do navio no tabuleiro
    tabuleiro[3][3] = 1;
    tabuleiro[3][4] = 1;

    // --- Exibindo o tabuleiro completo ---
    printf("Estado atual do tabuleiro:\n");
    printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 

    return 0;
}