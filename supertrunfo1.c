#include <stdio.h>

int main(){
    char letra1='A', letra2='B';
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
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
    scanf("%u", &populacao1);
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
    scanf("%u", &populacao2);
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
    
    //Atualização.2
    float superPoder1, superpoder2;
    int resultPop, resultArea, resultPib, resultAtracao, resultDens, resultPercapta, resultSuper;

    superPoder1 = (float)populacao1+area1+pib1+atracao1+percapita1+(1/densidade1);
    superpoder2 = (float)populacao2+area2+pib2+atracao2+percapita2+(1/densidade2);
    
    resultPop = populacao1 > populacao2;
    resultArea = area1 > area2;
    resultPib = pib1 > pib2;
    resultAtracao = atracao1 > atracao2;
    resultDens = densidade1 < densidade2;
    resultPercapta = percapita1 > percapita2;
    resultSuper = superPoder1 > superpoder2;
    
    printf("Comparação de cartas:\n");
    printf("População: Carta %d venceu (%d)\n", resultPop, resultPop);
    printf("Área: Carta %d venceu (%d)\n", resultArea, resultArea);
    printf("PIB: Carta %d venceu (%d)\n", resultPib, resultPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultAtracao, resultAtracao);
    printf("Densidade Populacional: Carta (%d) venceu (%d)\n", resultDens, resultDens);
    printf("PIB per Capta: Carta %d venceu (%d)\n", resultPercapta, resultPercapta);
    printf("Super Poder: Carta %d venceu (%d)\n", resultSuper, resultSuper);
    
    return 0;

}