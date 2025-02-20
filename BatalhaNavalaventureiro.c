#include <stdio.h>

#define vertical 10  // Define a altura do tabuleiro
#define horizontal 10 // Define a largura do tabuleiro

int main() {
    // Inicializa o tabuleiro com zeros
    int tamanho_tabuleiro[vertical][horizontal] = {0};

    // Variáveis para a posição inicial da linha 1 (diagonal positiva)
    int linhax = 2, linhay = 0; 

    // Preenche a primeira diagonal (de cima para baixo à direita)
    for (int i = 0; i < 10; i++) {
        tamanho_tabuleiro[linhax + i][linhay + i] = 3;
    }

    // Variáveis para a posição inicial da linha 2 (diagonal negativa)
    int linha1x = 2, linha1y = 0;

    // Preenche a segunda diagonal (de cima para baixo à esquerda)
    for (int j = 0; j < 10; j++) {
        tamanho_tabuleiro[linha1x + j][linha1y - j] = 3;
    }

    // Variáveis para a posição inicial da linha 3 (horizontal)
    int linha2x = 1, linha2y = 0;

    // Preenche a terceira linha (horizontal)
    for (int i = 0; i < 10; i++) {
        tamanho_tabuleiro[linha2x + i][linha2y] = 3;
    }

    // Variáveis para a posição inicial da linha 4 (vertical)
    int linha3x = 0, linha3y = 0;

    // Preenche a quarta linha (vertical)
    for (int i = 0; i < 10; i++) {
        tamanho_tabuleiro[linha3x][linha3y + i] = 3;
    }

    // Exibe o título do jogo
    printf("Projeto Batalha Naval\n");
    printf("\n");

    // Imprime o tabuleiro final
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("%d", tamanho_tabuleiro[i][j]);    
        }
        printf("\n");
    }

    return 0;
}