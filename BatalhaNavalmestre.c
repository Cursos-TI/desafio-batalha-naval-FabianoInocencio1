#include <stdio.h>

#define vertical 3   // Define a quantidade de linhas no tabuleiro
#define horizontal 5 // Define a quantidade de colunas no tabuleiro

int main(){
    
    // Imprime o título do tabuleiro em formato de cone
    printf ("Tabuleiro em cone:\n");
    
    // Inicializa o tabuleiro1 com valores específicos para o formato de cone
    int tabuleiro1[vertical][horizontal] = {
        {0, 0, 1, 0, 0},  // Linha 1 do tabuleiro (formato de cone)
        {0, 1, 1, 1, 0},  // Linha 2 do tabuleiro (formato de cone)
        {1, 1, 1, 1, 1}   // Linha 3 do tabuleiro (formato de cone)
    };

    // Imprime o tabuleiro1
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf ("%d", tabuleiro1[i][j]);  // Imprime cada elemento do tabuleiro
        }
        printf ("\n");  // Nova linha após imprimir cada linha do tabuleiro
    }  
    
    // Inicializa o tabuleiro com todos os valores zerados
    int tabuleiro[vertical][horizontal] = {0}; 
    
    // Preenche o tabuleiro para o formato cruz
    for (int i = 0; i < vertical; i++){
        for (int j = 0; j < horizontal; j++){
            // Condição para a coluna 2, onde o valor será 1 dependendo de outras condições
            if (j == 2){
                if (j <= 3 && j <= 2){
                    tabuleiro[i][j] = 1;  // Coloca 1 na coluna 2
                } else {
                    tabuleiro[i][j] = 0;  // Coloca 0 nas outras colunas
                }
            } else {
                // Preenche a segunda linha (linha 1) com 1 até a coluna 4
                if (i == 1){
                    if (j <= 4 && j <= 4){
                        tabuleiro[i][j] = 1;
                    } else {
                        tabuleiro[i][j] = 0;
                    }
                }
            }
        }
    }      
    
    // Imprime o tabuleiro com o formato de cruz
    printf("\n");
    printf ("Tabuleiro cruz:\n");
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf ("%d", tabuleiro[i][j]);  // Imprime cada elemento do tabuleiro
        }
        printf ("\n");  // Nova linha após imprimir cada linha do tabuleiro
    }   

    // Imprime o título do tabuleiro em formato octaedro
    printf ("\n");
    printf ("Tabuleiro octaedro:\n");

    // Inicializa o tabuleiro2 com todos os valores zerados
    int tabuleiro2[vertical][horizontal] = {0};

    // Preenche o tabuleiro2 com o formato de octaedro
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            if (i == 1) {  // Na segunda linha (índice 1)
                if (j >= 1 && j <= 3) {  // Preenche as colunas 2, 3 e 4 com 1
                    tabuleiro2[i][j] = 1; 
                } else {
                    tabuleiro2[i][j] = 0;  // Preenche as outras colunas com 0
                }
            } else {  // Para as outras linhas (primeira e terceira)
                if (j == 2) {  // Coluna central (coluna 3)
                    tabuleiro2[i][j] = 1;
                } else {
                    tabuleiro2[i][j] = 0;  // Outras colunas recebem 0
                }
            }
        }
    }

    // Imprime o tabuleiro2 (octaedro)
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("%d ", tabuleiro2[i][j]);  // Imprime com um espaço entre os números
        }
        printf("\n");  // Nova linha após imprimir cada linha do tabuleiro
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}