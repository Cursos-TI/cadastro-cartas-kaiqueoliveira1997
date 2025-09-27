#include <stdio.h>

int main() {
    // ===== Declaração das variáveis =====
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // ===== Entrada de dados da Carta 1 =====
    printf("Super Trunfo \n");
    printf("Vamos Cadastrar a Sua Primeira Carta \n");
    printf("Informe um Estado (apenas a inicial entre A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Codigo da Carta (A letra do estado seguido de um número de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade Dentro Desse Estado: ");
    scanf(" %[^\n]", cidade1);

    printf("Informe a População Dessa Cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a Área Dessa Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB Dessa Cidade: ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos dessa Cidade: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Entrada de dados da Carta 2 =====
    printf("\nAgora Vamos Cadastrar a Sua Segunda Carta \n");
    printf("Informe um Estado (apenas a inicial entre A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta (A letra do estado seguido de um número de 01 a 04): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade Dentro Desse Estado: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe a População Dessa Cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a Área Dessa Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB Dessa Cidade: ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos dessa Cidade: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Exibição dos dados =====
    printf("\n===== CARTAS CADASTRADAS =====\n");
    printf("Carta 1:\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n\n",
            estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("Carta 2:\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n",
            estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}

                                                                                                                        
