#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
 
int main() {
    char estado1[2];
    char codigo_cidade1[5];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    char estado2[2];
    char codigo_cidade2[5];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Digite a sigla do Estado: ");
    scanf("%s", &estado1);

    printf("Digite o código da Cidade: ");
    scanf ("%s", &codigo_cidade1);

    printf("Digite o nome da cidade: ");
    scanf ("%s", &nome_cidade1);

    printf("Informe a população da Cidade: ");
    scanf ("%d", &populacao1);

    printf("Informe a área da Cidade em KM: ");
    scanf ("%f", &area1);

    printf("Informe é o PIB (em bilhões) da cidade: ");
    scanf ("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf ("%d", &pontos_turisticos1);

    printf(" \n");
    printf(" *** Próximo Cadastro ***\n");

   
    printf("Digite a sigla do próximo Estado: ");
    scanf("%s", &estado2);

    printf("Digite o código da Cidade: ");
    scanf ("%s", &codigo_cidade2);

    printf("Digite o nome da Cidade: ");
    scanf ("%s", &nome_cidade2);

    printf("Informe a população da Cidade: ");
    scanf ("%d", &populacao2);

    printf("Informe a área da cidade em KM: ");
    scanf (" %f", &area2);

    printf("Informe é o PIB (em bilhões) da cidade: ");
    scanf ("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf ("%d", &pontos_turisticos2);

    printf(" \n");
    printf("Carta 1\n");

    printf("Estado: %s \n", estado1);
    printf("Código da cidade: %s \n", codigo_cidade1);
    printf("Nome da cidade: %s \n", nome_cidade1);
    printf("Area da cidade: %f km\n", area1);
    printf("PIB da cidade: R$ %f bilhões\n", pib1);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos1);

    printf(" \n");
    printf("Carta 2\n");
    
    printf("Estado: %s \n", estado2);
    printf("Código da cidade: %s \n", codigo_cidade2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População da cidade: %d \n", populacao2);
    printf("Area da cidade: %f km\n", area2);
    printf("PIB da cidade: R$ %f bilhões\n", pib2);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos2);

    printf(" \n");
    printf("Cadastro com Sucesso!");

return 0;

}