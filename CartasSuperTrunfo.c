#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1[1], estado2[1];
    char codCarta1[4], codCarta2[4];
    char cidade1[30], cidade2[30];
    int popul1, popul2;
    float area1, area2;
    float pib1, pib2;
    int touristPoint1, touristPoint2;

    printf("\n############\n");
    printf("\nInforme os dados da carta 1: \n");
    printf("Informe o Estado: \n");
    scanf("%1s", estado1);
    printf("\n");
    getchar(); 
    printf("Informe o Código da Carta: \n");
    scanf("%3s", codCarta1);
    printf("\n");
    getchar(); 
    printf("Informe a Cidade: \n");
    scanf(" %29[^\n]", cidade1);
    printf("\n");
    getchar(); 
    printf("Informe a quantidade de População: \n");
    scanf("%d", &popul1);
    printf("\n");
    printf("Informe a Area: \n");
    scanf("%f", &area1);
    printf("\n");
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("\n");
    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &touristPoint1);
    printf("\n");

    printf("\n############\n");
    printf("\nInforme os dados da carta 2: \n");
    printf("Informe o Estado: \n");
    scanf("%1s", estado2);
    printf("\n");
    getchar(); 
    printf("Informe o Código da Carta: \n");
    scanf("%3s", codCarta2);
    printf("\n");
    getchar(); 
    printf("Informe a Cidade: \n");
    scanf("%29[^\n]", cidade2);
    printf("\n");
    getchar(); 
    printf("Informe a quantidade de População: \n");
    scanf("%d", &popul2);
    printf("\n");
    printf("Informe a Area: \n");
    scanf("%f", &area2);
    printf("\n");
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("\n");
    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &touristPoint2);
    printf("\n");

    printf("\n############\n");
    printf("Dados da carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", popul1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", touristPoint1);

    printf("\n############\n");
    printf("Dados da carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", popul2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", touristPoint2);

    return 0;
}
