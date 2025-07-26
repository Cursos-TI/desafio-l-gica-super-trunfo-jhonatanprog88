#include <stdio.h>

int main(){
    char letra1='A', letra2='B';
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int atracao1, atracao2;

    printf("Super trunfo - Estados\n\n");
    printf("Digite as informações para a carta 1\n\n");

    printf("Digite uma letra de um dos 8 estados de A a H:\n");
    scanf(" %c", &letra1);
    printf("Digite um número de 01 a 04:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite a quantidade de habitantes da cidade escolhida:\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade escolhida:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade escolhida:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade escolhida\n");
    scanf("%d", &atracao1);
    printf("\n");

    printf("Muito bem! Agora digite as informações para a carta 2\n\n");
    
    printf("Digite uma letra de um dos 8 estados de A a H:\n");
    scanf(" %c", &letra2);
    printf("Digite um número de 01 a 04:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite a quantidade de habitantes da cidade escolhida:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade escolhida:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade escolhida:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade escolhida\n");
    scanf("%d", &atracao2);
    printf("\n\n");
    
    //Atualização
    float densidade1 = (float) populacao1 / area1; 
    float densidade2 = (float) populacao2 / area2;
    float percapita1 = (float) pib1 / populacao1;
    float percapita2 = (float) pib2 / populacao2;

    printf("Carta1:\n");
    printf("Estado: %c\n", letra1);
    printf("Código: %c%s\n",letra1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", atracao1);
    printf("Densidade polupacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n\n", percapita1);


    printf("Carta2:\n");
    printf("Estado: %c\n", letra2);
    printf("Código: %c%s\n",letra2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", atracao2);
    printf("Densidade polupacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n\n", percapita2);


    return 0;

}