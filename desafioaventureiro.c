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
    // Exibe o tabuleiro com posicionamento dos navios preenchido
    printf("\nA matriz preenchida é:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }
    return 0;
}