#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int populacao, pontosTuristicos;
char estado;
char codigoCarta[20];
char nomeCidade[20];
float area, pib;
  // Área para entrada de dados

  // Área para exibição dos dados da cidade

int populacao2, pontosTuristicos2;
char estado2;
char codigoCarta2[20];
char nomeCidade2[20];
float area2, pib2;
  // Área para entrada de dados
printf("Cadastro da Carta 1\n");

printf("Digite o nome do Estado: ");
scanf(" %c", &estado);
printf("Digite o Código da Carta: ");
scanf("%s", codigoCarta);
printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade);
printf("Digite a população do estado: ");
scanf("%d", &populacao);
printf("Digite o número dos pontos turísticos: ");
scanf("%d", &pontosTuristicos);
printf("Digite uma área: ");
scanf("%f", &area);
printf("Digite o PIB: ");
scanf("%f", &pib);


printf("Carta 1:\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigoCarta);
printf("Nome da Cidade: %s\n", nomeCidade);
printf("População: %d\n", populacao);
printf("Pontos Turísticos: %d\n", pontosTuristicos);
printf("Área: %.2f Km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);

printf("Cadastro da Carta 2\n");
  // Área para exibição dos dados da cidade
printf("Digite o nome do Estado: ");
scanf(" %c", &estado2);
printf("Digite o Código da Carta: ");
scanf("%s", codigoCarta2);
printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);
printf("Digite a população do estado: ");
scanf("%d", &populacao2);
printf("Digite o número dos pontos turísticos: ");
scanf("%d", &pontosTuristicos2);
printf("Digite uma área: ");
scanf("%f", &area2);
printf("Digite o PIB: ");
scanf("%f", &pib2);


printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigoCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);






return 0;
} 
