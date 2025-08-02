#include <stdio.h>

#define TAM_TAB 10
#define TAM_HAB 5

int main() {
    int tabuleiro[TAM_TAB][TAM_TAB];
    int habilidade[TAM_HAB][TAM_HAB];
    int i, j;
    int meio = TAM_HAB / 2;

    for(i=0; i<TAM_TAB; i++) {
        for(j=0; j<TAM_TAB; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for(i=0; i<TAM_HAB; i++) {
        for(j=0; j<TAM_HAB; j++) {
            habilidade[i][j] = (i == meio) || (j == meio);
        }
    }

    int origemLinha = 4;
    int origemColuna = 4;

    for(i=0; i<TAM_HAB; i++) {
        for(j=0; j<TAM_HAB; j++) {
            int linhaTab = origemLinha - meio + i;
            int colTab = origemColuna - meio + j;
            int dentroLinha = (linhaTab >= 0) && (linhaTab < TAM_TAB);
            int dentroCol = (colTab >= 0) && (colTab < TAM_TAB);
            int afeta = habilidade[i][j] && dentroLinha && dentroCol;

            tabuleiro[linhaTab * afeta + (!afeta) * 0][colTab * afeta + (!afeta) * 0] = tabuleiro[linhaTab * afeta + (!afeta) * 0][colTab * afeta + (!afeta) * 0] + 5 * afeta;
        }
    }

    for(i=0; i<TAM_TAB; i++) {
        for(j=0; j<TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}