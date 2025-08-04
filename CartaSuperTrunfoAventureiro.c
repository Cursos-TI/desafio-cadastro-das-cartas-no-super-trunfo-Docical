#include <stdio.h>

int main(){
    char estado[20], code[5], cidade[50];
    int populacao, PontosTuristicos;
    float area, pib;

    char estado2[20], code2[5], cidade2[50];
    int populacao2, PontosTuristicos2;
    float area2, pib2;

    // Carta 1
    printf("Escreva o Estado da Carta 1: ");
    scanf(" %[^\n]", estado);       //utilizei o  "%[^\n]"ao inves de "%s" pra ele conseguir ler os espaços
    printf("Agora, escreva o codigo da Carta 1 (ex: A01, B02): ");
    scanf("%s", code);
    printf("Qual o nome da cidade da Carta 1? ");
    scanf(" %[^\n]", cidade);
    printf("me fale o numero da populacao da Carta 1: ");
    scanf("%d", &populacao);
    printf("Digite a Area da Carta 1: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Qual a quantidade de Pontos Turisticos da Carta 1? ");
    scanf("%d", &PontosTuristicos);

    // Carta 2
    printf("\nEscreva o Estado da Carta 2: ");
    scanf(" %[^\n]", estado2);
    printf("Agora, escreva o codigo da Carta 2: ");
    scanf("%s", code2);
    printf("Qual o nome da cidade da Carta 2? ");
    scanf(" %[^\n]", cidade2);
    printf("me fale o numero da populacao da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a Area da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Qual a quantidade de Pontos Turisticos da Carta 2? ");
    scanf("%d", &PontosTuristicos2);

    //Densidade Populacional
    float densidadep = (float) populacao / area;
    float densidadep2 = (float) populacao2 / area2;

    float pibc = (float) (pib * 1000000000) / populacao;
    float pibc2 = (float) (pib2 * 1000000000) / populacao2;

    //Resultado Carta 1
    printf("\n-Passando as Informacoes das Cartas-\n\nCARTA 1:\n");
    printf("Estado: %s", estado);
    printf("\nCodigo: %s\n", code);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2fkm2\n", area);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2fhab/km2\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibc);

    //Resultado Carta 2
    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", code2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibc2);
    

    return 0;
}
