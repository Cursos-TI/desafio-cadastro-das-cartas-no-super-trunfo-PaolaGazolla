#include <stdio.h>

void Torre(int casa, int limite) {
    if(casa > limite) return;
    printf("Casa %d: Direita\n", casa);
    Torre(casa + 1, limite);
}

void Bispo(int vertical, int limite) {
    if(vertical > limite) return;

    for(int horizontal = 1; horizontal <= 1; horizontal++) {
        printf("Casa %d: Cima, Direita\n", vertical);
    }

    Bispo(vertical + 1, limite);
}

void Rainha(int casa, int limite) {
    if(casa > limite) return;
    printf("Casa %d: Esquerda\n", casa);
    Rainha(casa + 1, limite);
}

void Cavalo() {
    int movimento = 1;
    for(int i = 1; i <= 2; i++) {
        for(int j = 1; j <= 1; j++) { 
            if(i == 2 && j == 1) {
                printf("Casa %d: Cima\n", movimento++);
                printf("Casa %d: Cima\n", movimento++);
                printf("Casa %d: Direita\n", movimento++);
                break;
            }

            if(i == j) continue;
        }
    }
}

int main() {
    printf("Torre:\n");
    Torre(1, 5);

    printf("\nBispo:\n");
    Bispo(1, 5);

    printf("\nRainha:\n");
    Rainha(1, 8);

    printf("\nCavalo:\n");
    Cavalo();

    return 0;
}
