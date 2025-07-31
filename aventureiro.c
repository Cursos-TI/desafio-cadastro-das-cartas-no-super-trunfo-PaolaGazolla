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
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int escolhaJogo;

    // Dados da carta 1 (inseridos pelo usuário)
    printf("Informe o estado da carta 1: ");
    scanf(" %c", &carta1.estado);
    printf("Informe o código da carta 1: ");
    scanf("%3s", carta1.codigo);
    printf("Informe a cidade da carta 1: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Informe a população da carta 1: ");
    scanf("%d", &carta1.populacao);
    printf("Informe a área da carta 1: ");
    scanf("%f", &carta1.area);
    printf("Informe o PIB da carta 1 (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Informe o número de pontos turísticos da carta 1: ");
    scanf("%d", &carta1.turistico);

    // Dados da carta 2 (inseridos pelo usuário)
    printf("\nInforme o estado da carta 2: ");
    scanf(" %c", &carta2.estado);
    printf("Informe o código da carta 2: ");
    scanf("%3s", carta2.codigo);
    printf("Informe a cidade da carta 2: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Informe a população da carta 2: ");
    scanf("%d", &carta2.populacao);
    printf("Informe a área da carta 2: ");
    scanf("%f", &carta2.area);
    printf("Informe o PIB da carta 2 (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Informe o número de pontos turísticos da carta 2: ");
    scanf("%d", &carta2.turistico);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição dos valores calculados
    printf("\n--- Dados calculados ---\n");
    printf("Carta 1 - PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Carta 2 - PIB per capita: R$ %.2f\n", pibPerCapita2);


    if (pibPerCapita1 == pibPerCapita2) {
        printf("Empate! Ambas as cartas têm PIB per capita de R$ %.2f\n", pibPerCapita1);
    } else {
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Carta 1 vence com maior PIB per capita!\n");
        } else {
            printf("Carta 2 vence com maior PIB per capita!\n");
        }
    }

    // Menu
    printf("Escolha a opção que deseja comparar: ");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &escolhaJogo);

    switch (escolhaJogo) {
        case 1:
            printf("População: %d contra %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao){
                printf("Carta 1 venceu!\n");
            }else if (carta1.populacao < carta2.populacao){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
            
        case 2:
            printf("Área: %.2f km² contra %.2f km²\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area){
                printf("Carta 1 venceu!\n");
            }else if (carta1.area < carta2.area){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB: R$ %.2f bi contra R$ %.2f bi\n", carta1.pib, carta2.pib);
            if (carta1.pib>carta2.pib){
                printf("Carta 1 venceu!\n");
            }else if(carta1.pib < carta2.pib){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Pontos Turisticos: R$ %.2f bi contra R$ %.2f bi\n", carta1.turistico, carta2.turistico);
            if (carta1.turistico>carta2.turistico){
                printf("Carta 1 venceu!\n");
            }else if(carta1.turistico < carta2.turistico){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade: R$ %.2f bi contra R$ %.2f bi\n", densidade1, densidade2 );
            if (densidade1>densidade2){
                printf("Carta 1 venceu!\n");
            }else if(densidade1 < densidade2){
                printf("Carta 2 venceu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção Invalida\n");
            break;
    }
    return 0;
}
    
