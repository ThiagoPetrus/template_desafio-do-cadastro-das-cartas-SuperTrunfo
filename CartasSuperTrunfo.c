#include <stdio.h>

/* Remove o ENTER lido pelo fgets */
void limparEnter(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {

    /* ===== CARTA 1 ===== */
    char estado1;
    char codigo1[10];
    char cidade1[50];

    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    /* ===== CARTA 2 ===== */
    char estado2;
    char codigo2[10];
    char cidade2[50];

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    /* ===== LEITURA CARTA 1 ===== */
    printf("Digite o estado da Carta 1 (A-Z): ");
    fgets(cidade1, sizeof(cidade1), stdin);
    estado1 = cidade1[0];

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    limparEnter(codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    limparEnter(cidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da Carta 1 (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da Carta 1: ");
    scanf("%d", &pontos1);

    /* ===== CALCULOS CARTA 1 ===== */
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    super_poder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontos1 +
        pib_per_capita1 +
        (1.0f / densidade1);

    getchar(); /* limpa ENTER */

    /* ===== LEITURA CARTA 2 ===== */
    printf("\nDigite o estado da Carta 2 (A-Z): ");
    fgets(cidade2, sizeof(cidade2), stdin);
    estado2 = cidade2[0];

    printf("Digite o codigo da Carta 2 (ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    limparEnter(codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    limparEnter(cidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da Carta 2 (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da Carta 2: ");
    scanf("%d", &pontos2);

    /* ===== CALCULOS CARTA 2 ===== */
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    super_poder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontos2 +
        pib_per_capita2 +
        (1.0f / densidade2);

    /* ===== RESULTADOS DAS COMPARACOES ===== */
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    /* menor densidade vence */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
