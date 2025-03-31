#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Dados da carta 1 - DF
    printf("Estado: DF\n");
    printf("Código: D1\n");
    printf("Cidade: Brasilia\n");
    printf("Populacao: 2817381\n");
    printf("Area: 5779\n");
    printf("Pib: 266000000000\n");
    printf("Numero de pontos turísticos: 10\n\n");

    // Dados da carta 2 - Bahia
    printf("Estado: Bahia\n");
    printf("Código: B2\n");
    printf("Cidade: Salvador\n");
    printf("Populacao: 2900319\n");
    printf("Area: 694\n");
    printf("Pib: 28000000\n");
    printf("Numero de pontos turísticos: 14\n\n");

    char estado[3];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo: \n");
    scanf("%s", codigo);

    printf("Digite a cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("\nDados da nova carta:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);

    return 0;

}
