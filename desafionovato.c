#include <stdio.h>

int main(){
    int tabuleiro [5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    }; // Declaração de uma matriz 5x5 de inteiros
    
    //exibição da posição do navio horizontalmente
    printf("Parte do navio na casa %d\n", tabuleiro[1][2]);
    printf("Parte do navio na casa %d\n", tabuleiro[1][3]);
    printf("Parte do navio na casa %d\n", tabuleiro[1][4]);

    //exibição da posição do navio verticalmente
    printf("Parte do navio na casa %d\n", tabuleiro[2][2]);
    printf("Parte do navio na casa %d\n", tabuleiro[3][2]);
    printf("Parte do navio na casa %d\n", tabuleiro[4][2]);
    
    return 0;
}