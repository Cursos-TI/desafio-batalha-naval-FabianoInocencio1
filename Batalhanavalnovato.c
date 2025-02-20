#include <stdio.h>

// Definição das dimensões do tabuleiro
#define vertical 5
#define horizontal 5

int main() {
    
    // Inicialização de um tabuleiro de 5x5 com todos os valores como 0
    int tamanho_tabueiro[vertical][horizontal] = {0};
    
    printf("**Projeto Tabuleiro Naval**\n");

    // Coordenadas iniciais para o navio vertical
    int xVertical = 1, yVertical = 1;
    
    // Coloca um navio vertical (representado por 3) no tabuleiro, começando da posição (1,1)
    for (int i = 0; i < 4; i++) {
        tamanho_tabueiro[yVertical + i][xVertical] = 3; // Preenche as 4 posições verticais com '3'
    }
    
    // Coordenadas iniciais para o navio horizontal
    int xhorizontal = 0, yhorizontal = 2;
    
    // Coloca um navio horizontal (representado por 3) no tabuleiro, começando da posição (0,2)
    for (int j = 0; j < 3; j++) {
        tamanho_tabueiro[xhorizontal][yhorizontal + j] = 3; // Preenche as 3 posições horizontais com '3'
    }
    
    // Exibe a mensagem indicando o tabuleiro
    printf("Tabuleiro\n");
    printf("\n");
    
    // Exibe o tabuleiro no formato de uma matriz de números
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("%d", tamanho_tabueiro[i][j]); // Imprime cada valor do tabuleiro
        }    
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }
    printf("\n");
    
    // Exibe as coordenadas do navio vertical
    for (int i = 0; i < 1; i++) {
        printf("Coordenadas vertical: (%d, %d)\n", xVertical, yVertical); // Exibe as coordenadas de início do navio vertical
    }
    
    // Exibe as coordenadas do navio horizontal
    for (int j = 0; j < 1; j++) {
        printf("Coordenadas horizontal: (%d, %d)\n", xhorizontal, yhorizontal); // Exibe as coordenadas de início do navio horizontal
    }
        
    return 0;    
}