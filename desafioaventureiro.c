#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

    int matriz [LINHAS] [COLUNAS]= {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 3, 3, 3, 3, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
    }; // Declara a matriz com o tamanho definido nas constantes

    // Exibe o tabuleiro com posicionamento dos navios preenchido
    printf("\nVeja como ficou o tabuleiro:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }
    return 0;
}