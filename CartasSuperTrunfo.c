#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dados
  // Entrada de dados da carta 1 

  printf("Super Trunfo \n");
  printf("Vamos Cadastrar a Sua Primeira Carta \n");
  printf("Informe um Estado (apenas a inicial entre A-H): ");
  scanf("%c", &estado1);

  printf("Informe o Codigo da Carta (A letra do estado seguido de um número de 01 a 04): ");
  scanf("%s", &codigo1);

  printf("Informe o Nome da Cidade Dentro Desse Estado: ");
  scanf("%s", &cidade1);

  printf("Informe a População Dessa Cidade: ");
  scanf("%d", &populacao1);

  printf("Informe a Área Dessa Cidade (em km²): ");
  scanf("%f", &area1);

  printf("Informe o PIB Dessa Cidade: ");
  scanf("%f", &pib1);

  printf("Informe o Numero de Pontos Turisticos dessa Cidade: ");
  scanf("%d", &pontosTuristicos1);

  





  // Área para exibição dos dados da cidade

return 0;
} 
