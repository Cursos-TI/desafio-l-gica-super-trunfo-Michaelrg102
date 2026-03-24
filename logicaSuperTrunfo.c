#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main()
{
  // Área para definição das variáveis
  char estado1, codigo1[10], cidade1[50];
  char estado2, codigo2[10], cidade2[50];

  int populacao1, pontos1;
  int populacao2, pontos2;

  float area1, pib1, calculodensidade1, calculoPib1, superPoder1;
  float area2, pib2, calculodensidade2, calculoPib2, superPoder2;

  int opcao;

  // Área para entrada de dados
  printf("Digite o Primeiro Estado: ");
  scanf(" %c", &estado1);

  printf("Digite o Primeiro Codigo: ");
  scanf(" %s", codigo1);

  printf("Digite a Primeira Cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a Primeira Populacao: ");
  scanf(" %d", &populacao1);

  printf("Digite a Primeira Area: ");
  scanf(" %f", &area1);

  printf("Digite o Primeiro PIB: ");
  scanf(" %f", &pib1);

  printf("Digite os Pontos Turisticos da Carta 1: ");
  scanf(" %d", &pontos1);

  
  //Carta 2

  printf("Digite o Segundo Estado: ");
  scanf(" %c", &estado2);

  printf("Digite o Segundo Codigo: ");
  scanf(" %s", codigo2);

  printf("Digite a Segunda Cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a Segunda Populacao: ");
  scanf(" %d", &populacao2);

  printf("Digite a Segunda Area: ");
  scanf(" %f", &area2);

  printf("Digite o Segundo PIB: ");
  scanf(" %f", &pib2);

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
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
         estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, calculodensidade1, calculoPib1, superPoder1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
         estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, calculodensidade2, calculoPib2, superPoder2);

// Área para decisão
  printf("\nEscolha uma opcao:\n");
  printf("1 - Comparar Populacao\n");
  printf("2 - Comparar Area\n");
  printf("3 - Comparar PIB\n");
  printf("4 - Comparar Pontos Turisticos\n");
  printf("5 - Comparar Densidade Populacional\n");
  printf("6 - Comparar PIB per Capita\n");
  printf("7 - Comparar Super Poder\n");
  printf("Opcao: ");
  scanf(" %d", &opcao);

/*Lógica*/
  switch (opcao)
  {
  case 1:
    if (populacao1 > populacao2) {
    printf("A Carta %s tem %d pessoas e %s tem %d pessoas\n", cidade1, populacao1, cidade2, populacao2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (populacao2 > populacao1) {
    printf("A Carta %s tem mais pessoas que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem a mesma populacao\n");
  }
    break;

  case 2:
    if (area1 > area2) {
    printf("A Carta %s tem %f km2 e %s tem %f km2\n", cidade1, area1, cidade2, area2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (area2 > area1) {
    printf("A Carta %s tem mais area que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem a mesma area\n");
  }
    break;

  case 3:
    if (pib1 > pib2) {
    printf("A Carta %s tem %f R$ e %s tem %f R$\n", cidade1, pib1, cidade2, pib2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (pib2 > pib1) {
    printf("A Carta %s tem mais PIB que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem o mesmo PIB\n");
  }
    break;

  case 4:
    if (pontos1 > pontos2) {
    printf("A Carta %s tem %d pontos e %s tem %d pontos\n", cidade1, pontos1, cidade2, pontos2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (pontos2 > pontos1) {
    printf("A Carta %s tem mais pontos turisticos que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem o mesmo numero de pontos turisticos\n");
  }
    break;

  case 5:
    if (calculodensidade1 < calculodensidade2) {
    printf("A Carta %s tem %f pessoas por km2 e %s tem %f pessoas por km2\n", cidade1, calculodensidade1, cidade2, calculodensidade2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (calculodensidade2 < calculodensidade1) {
    printf("A Carta %s tem mais pessoas por km2 que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem a mesma densidade populacional\n");
  }
    break;

  case 6:
    if (calculoPib1 > calculoPib2) {
    printf("A Carta %s tem %f R$ por pessoa e %s tem %f R$ por pessoa\n", cidade1, calculoPib1, cidade2, calculoPib2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (calculoPib2 > calculoPib1) {
    printf("A Carta %s tem mais PIB per Capita que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem o mesmo PIB per Capita\n");
  }
    break;

  case 7:
    if (superPoder1 > superPoder2) {
    printf("A Carta %s tem %f e %s tem %f\n", cidade1, superPoder1, cidade2, superPoder2);
    printf("%s Ganhou\n", cidade1);
  } 

  else if (superPoder2 > superPoder1) {
    printf("A Carta %s tem mais Super Poder que %s\n", cidade2, cidade1);
    printf("%s Ganhou\n", cidade2);
  }
  
  else {
    printf("As duas cidades tem o mesmo Super Poder\n");
  }
    break;
  
  default:
    break;
  }

  return 0;
}