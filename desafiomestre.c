#include <stdio.h>

#define TAMANHO 10  // Define o tamanho do tabuleiro 10x10

//função para exibir o tabuleiro após a habilidade
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidadeCone(int tabuleiro[TAMANHO][TAMANHO]) {
    // Limpa o tabuleiro da habilidade anterior
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    // Preenche o formato de cone
    tabuleiro[1][2] = 1;
    tabuleiro[2][1] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[2][3] = 1;
    tabuleiro[3][0] = 1;
    tabuleiro[3][1] = 1;
    tabuleiro[3][2] = 1;
    tabuleiro[3][3] = 1;
    tabuleiro[3][4] = 1;
    tabuleiro[8][4] = 1;
    tabuleiro[9][3] = 1;
    tabuleiro[9][4] = 1;
    tabuleiro[9][5] = 1;
    }

void habilidadeCruz(int tabuleiro[TAMANHO][TAMANHO]) {
    // Limpa o tabuleiro da habilidade anterior
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    // Preenche o formato de cruz
        tabuleiro[0][2] = 1; // Coluna central
        tabuleiro[1][2] = 1; // Coluna central
        tabuleiro[2][2] = 1;
        tabuleiro[3][2] = 1; // Coluna central
        tabuleiro[4][2] = 1; // Coluna central
        tabuleiro[2][0] = 1; // linha central
        tabuleiro[2][1] = 1; // linha central
        tabuleiro[2][3] = 1; // linha central
        tabuleiro[2][4] = 1; // linha central

        tabuleiro[3][6] = 1; // Coluna central
        tabuleiro[4][6] = 1; // Coluna central
        tabuleiro[5][6] = 1; // Coluna central
        tabuleiro[6][6] = 1; 
        tabuleiro[7][6] = 1;// Coluna central
        tabuleiro[5][4] = 1; // linha central
        tabuleiro[5][5] = 1; 
        tabuleiro[5][7] = 1; // linha central
        tabuleiro[5][8] = 1; // linha central
   }

void habilidadeOctaedro(int tabuleiro[TAMANHO][TAMANHO]) {
    // Limpa o tabuleiro
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    // Preenche o formato de octaedro
        tabuleiro[3][4] = 1; // Coluna central
        tabuleiro[4][4] = 1;
        tabuleiro[5][4] = 1; // Coluna central
        tabuleiro[4][3] = 1; // linha central
        tabuleiro[4][5] = 1; // linha central
        
        tabuleiro[6][8] = 1; // Coluna central
        tabuleiro[7][8] = 1;
        tabuleiro[8][8] = 1; // Coluna central
        tabuleiro[7][7] = 1; // linha central
        tabuleiro[7][9] = 1; // linha central
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    //aplica a habilidade cone e exibe o tabuleiro
    printf("Habilidade em Cone:\n");
    habilidadeCone(tabuleiro);
    exibirTabuleiro(tabuleiro);

    //aplica a habilidade cruz e exibe o tabuleiro
    printf("Habilidade em Cruz:\n");
    habilidadeCruz(tabuleiro);
    exibirTabuleiro(tabuleiro);


    //aplica a habilidade octaedro e exibe o tabuleiro
    printf("Habilidade em Octaedro:\n");
    habilidadeOctaedro(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}