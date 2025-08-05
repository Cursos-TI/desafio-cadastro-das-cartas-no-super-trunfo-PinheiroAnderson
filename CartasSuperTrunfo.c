#include <stdio.h>
#define BILHOES 1000000000

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main()
{
    // Variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Cadastro da primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade demográfica e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * BILHOES) / populacao1;

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica e PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * BILHOES) / populacao2;

    // Exibindo os dados da primeira carta
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da cidade: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo os dados da segunda carta
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
