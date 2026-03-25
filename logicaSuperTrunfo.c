#include <stdio.h>

int main()
{
    char estado1, codigo1[10], cidade1[50];
    char estado2, codigo2[10], cidade2[50];

    int populacao1, pontos1;
    int populacao2, pontos2;

    float area1, pib1, densidade1, pibpc1, super1;
    float area2, pib2, densidade2, pibpc2, super2;

    int op1, op2;

    // Entrada Carta 1
    printf("Digite o Primeiro Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo: ");
    scanf(" %s", codigo1);

    printf("Digite a Cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos1);

    // Carta 2
    printf("\n--- CARTA 2 ---\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo: ");
    scanf(" %s", codigo2);

    printf("Digite a Cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpc1 = (pib1 * 1000000000) / populacao1;
    pibpc2 = (pib2 * 1000000000) / populacao2;

    super1 = populacao1 + area1 + pib1 + pibpc1 + (area1 / populacao1);
    super2 = populacao2 + area2 + pib2 + pibpc2 + (area2 / populacao2);

    // MENU 1
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%d", &op1);

    // MENU 2 
    printf("\nEscolha o SEGUNDO atributo:\n");

    switch (op1)
    {
    case 1:
        printf("2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 2:
        printf("1 - Populacao\n3 - PIB\n4 - Pontos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 3:
        printf("1 - Populacao\n2 - Area\n4 - Pontos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 4:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 5:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 6:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n7 - Super Poder\n");
        break;
    case 7:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n6 - PIB per Capita\n");
        break;
    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    scanf("%d", &op2);

    if (op1 == op2)
    {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float v1_c1, v1_c2, v2_c1, v2_c2;

    // Atributo 1
    switch (op1)
    {
    case 1:
        v1_c1 = populacao1;
        v1_c2 = populacao2;
        break;
    case 2:
        v1_c1 = area1;
        v1_c2 = area2;
        break;
    case 3:
        v1_c1 = pib1;
        v1_c2 = pib2;
        break;
    case 4:
        v1_c1 = pontos1;
        v1_c2 = pontos2;
        break;
    case 5:
        v1_c1 = densidade1;
        v1_c2 = densidade2;
        break;
    case 6:
        v1_c1 = pibpc1;
        v1_c2 = pibpc2;
        break;
    case 7:
        v1_c1 = super1;
        v1_c2 = super2;
        break;
    default:
        printf("Erro\n");
        return 0;
    }

    // Atributo 2
    switch (op2)
    {
    case 1:
        v2_c1 = populacao1;
        v2_c2 = populacao2;
        break;
    case 2:
        v2_c1 = area1;
        v2_c2 = area2;
        break;
    case 3:
        v2_c1 = pib1;
        v2_c2 = pib2;
        break;
    case 4:
        v2_c1 = pontos1;
        v2_c2 = pontos2;
        break;
    case 5:
        v2_c1 = densidade1;
        v2_c2 = densidade2;
        break;
    case 6:
        v2_c1 = pibpc1;
        v2_c2 = pibpc2;
        break;
    case 7:
        v2_c1 = super1;
        v2_c2 = super2;
        break;
    default:
        printf("Erro\n");
        return 0;
    }

    // Soma
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // Resultado
    printf("\n--- RESULTADO ---\n");
    printf("%s: %.2f + %.2f = %.2f\n", cidade1, v1_c1, v2_c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, v1_c2, v2_c2, soma2);

    if (soma1 > soma2)
    {
        printf("Vencedor: %s\n", cidade1);
    }
    else if (soma2 > soma1)
    {
        printf("Vencedor: %s\n", cidade2);
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}