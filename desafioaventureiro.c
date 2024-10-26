#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

    int matriz [LINHAS] [COLUNAS]; // Declara a matriz com o tamanho definido nas constantes

    //Solicita ao usuário montar o tabuleiro com posicionamento dos navios
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}