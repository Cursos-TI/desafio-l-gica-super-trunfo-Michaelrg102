#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main()
{
  // Área para definição das variáveis
  char estado1, estado2, codigo1[10], codigo2[10], cidade1[50], cidade2[50];
  int populacao1, populacao2, pontos1, pontos2;
  float area1, area2, pib1, pib2, calculodensidade1, calculodensidade2, calculoPib1, calculoPib2, superPoder1, superPoder2;

  // Área para entrada de dados
  printf("Digite o Primeiro Estado: ");
  scanf(" %c", &estado1);

  printf("Digite o Segundo Estado: ");
  scanf(" %c", &estado2);

  printf("Digite o Primeiro Codigo: ");
  scanf(" %s", codigo1);

  printf("Digite o Segundo Codigo: ");
  scanf(" %s", codigo2);

  printf("Digite a Primeira Cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a Segunda Cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a Primeira Populacao: ");
  scanf(" %d", &populacao1);

  printf("Digite a Segunda Populacao: ");
  scanf(" %d", &populacao2);

  printf("Digite a Primeira Area: ");
  scanf(" %f", &area1);

  printf("Digite a Segunda Area: ");
  scanf(" %f", &area2);

  printf("Digite o Primeiro PIB: ");
  scanf(" %f", &pib1);

  printf("Digite o Segundo PIB: ");
  scanf(" %f", &pib2);

  printf("Digite os Pontos Turisticos da Carta 1: ");
  scanf(" %d", &pontos1);

  printf("Digite os Pontos Turisticos da Carta 2: ");
  scanf(" %d", &pontos2);

  // Área para cálculos
  calculodensidade1 = (float)populacao1 / area1;
  calculodensidade2 = (float)populacao2 / area2;

  calculoPib1 = (pib1 * 1000000000) / populacao1;
  calculoPib2 = (pib2 * 1000000000) / populacao2;

  superPoder1 = populacao1 + area1 + pib1 + calculoPib1 + (area1 / populacao1);
  superPoder2 = populacao2 + area2 + pib2 + calculoPib2 + (area2 / populacao2);

  // Área para exibição dos dados
  printf("\nCarta 1:\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n",
         estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, calculodensidade1, calculoPib1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n",
         estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, calculodensidade2, calculoPib2);

  int resultado1 = 0;
  int resultado2 = 0;

  if (populacao1 > populacao2) {
    printf("A Carta %s tem mais pessoas que %s\n", cidade1, cidade2);
    resultado1++;
    printf("%d", resultado1);
  } else if (populacao2 > populacao1) {
    printf("A Carta %s tem mais pessoas que %s\n", cidade2, cidade1);
    resultado2++;
    printf("%d", resultado2);
  } else {
    printf("As duas cidades tem a mesma populacao\n");
  }

  return 0;
}