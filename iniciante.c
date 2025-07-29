#include <stdio.h>

struct carta {
    char estado;
    char codigo[4];
    char cidade[100];
    int populacao;
    float area;
    float pib;
    int turistico;
};

int main() {
    struct carta carta1, carta2;

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("\nInforme o código da carta (ex: A01): ");
    scanf("%3s", &carta1.codigo);

    printf("\nInforme o nome da cidade: ");
    scanf(" %[^\n]", &carta1.cidade);//string com espaço "%[^\n]"

    printf("\nInforme a população: ");
    scanf("%d", &carta1.populacao);

    printf("\nInforme a área em km²: ");
    scanf("%f", &carta1.area);

    printf("\nInforme o PIB em bilhões de reais: ");
    scanf("%f", &carta1.pib);

    printf("\nInforme o número de pontos turísticos: ");
    scanf("%d", &carta1.turistico);




    printf("\nInforme o estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("\nInforme o código da carta (ex: A01): ");
    scanf("%3s", &carta2.codigo);

    printf("\nInforme o nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade); 

    printf("\nInforme a população: ");
    scanf("%d", &carta2.populacao);

    printf("\nInforme a área em km²: ");
    scanf("%f", &carta2.area);

    printf("\nInforme o PIB em bilhões de reais: ");
    scanf("%f", &carta2.pib);

    printf("\nInforme o número de pontos turísticos: ");
    scanf("%d", &carta2.turistico);

    

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.turistico);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.turistico);

    return 0;
}
