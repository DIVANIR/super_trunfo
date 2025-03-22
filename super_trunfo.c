#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a Carta 1
    float densidade1 = populacao1 / area1; // Densidade populacional
    float pib_per_capita1 = (pib1 * 1000) / populacao1; // PIB per capita (convertendo bilhões para milhões)

    // Cálculos para a Carta 2
    float densidade2 = populacao2 / area2; // Densidade populacional
    float pib_per_capita2 = (pib2 * 1000) / populacao2; // PIB per capita (convertendo bilhões para milhões)

    // Escolha do atributo para comparação (definido diretamente no código)
    char atributo_escolhido[] = "População"; // Pode ser "População", "Área", "PIB", "Densidade Populacional" ou "PIB per capita"

    // Comparação das cartas
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_escolhido);

    if (strcmp(atributo_escolhido, "População") == 0) {
        // Comparação por População
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    } else if (strcmp(atributo_escolhido, "Área") == 0) {
        // Comparação por Área
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    } else if (strcmp(atributo_escolhido, "PIB") == 0) {
        // Comparação por PIB
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    } else if (strcmp(atributo_escolhido, "Densidade Populacional") == 0) {
        // Comparação por Densidade Populacional (menor valor vence)
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    } else if (strcmp(atributo_escolhido, "PIB per capita") == 0) {
        // Comparação por PIB per capita
        printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    } else {
        printf("Atributo inválido para comparação.\n");
    }

    return 0;
}