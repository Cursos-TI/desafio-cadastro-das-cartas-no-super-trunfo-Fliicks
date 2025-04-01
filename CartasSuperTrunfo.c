#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Dados da carta 1 - DF
    printf("Dados da carta 1\n");
    printf("Estado: DF\n");
    printf("Código: D1\n");
    printf("Cidade: Brasilia\n");
    printf("Populacao: 2817381\n");
    printf("Area: 5779\n");
    printf("Pib: 266000000000\n");
    printf("Numero de pontos turísticos: 10\n\n");

    // variáveis para armazenar os dados da carta
    char estado[3];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade_populacional;
    float pib_per_capita;

    printf("Digite os dados da carta 1:\n");

    // Entrada de dados para o estado
    printf("Digite o estado: \n");
    scanf("%s", estado);

    // Entrada de dados para o código da carta
    printf("Digite o codigo: \n");
    scanf("%s", codigo);

    // Entrada de dados para o nome da cidade
    printf("Digite a cidade: \n");
    scanf(" %s", cidade);

    // Entrada de dados para a população
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    // Entrada de dados para a área
    printf("Digite a area: \n");
    scanf("%f", &area);

    // Entrada de dados para o PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Entrada de dados para o número de pontos turísticos
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    // Cálculos
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    //pulo de linha antes de exibir os dados
    printf("\n"); 

    printf("Dados da nova carta:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n");

    //pulo de linha antes de exibir os dados
    printf("\n");

    // Dados da carta 2 - Bahia
    printf("Dados da carta 2\n");
    printf("Estado: Bahia\n");
    printf("Código: B2\n");
    printf("Cidade: Salvador\n");
    printf("Populacao: 2900319\n");
    printf("Area: 694\n");
    printf("Pib: 28000000\n");
    printf("Numero de pontos turísticos: 14\n\n");

    // Carta 2
    printf("\nDigite os dados da carta 2:\n");

     // Entrada de dados para o estado
    printf("Digite o estado: \n");
    scanf("%s", estado);

     // Entrada de dados para o código da carta
    printf("Digite o codigo: \n");
    scanf("%s", codigo);

     // Entrada de dados para o nome da cidade
    printf("Digite a cidade: \n");
    scanf(" %s", cidade);

     // Entrada de dados para a população
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    // Entrada de dados para a área
    printf("Digite a area: \n");
    scanf("%f", &area);

    // Entrada de dados para o PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

     // Entrada de dados para o número de pontos turístico
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    // Cálculos para carta 2
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Exibindo os resultados para a segunda carta
    printf("\nDados da carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib / 1000000000);  // Exibindo em bilhões
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita); // Exibindo o PIB per capita


    return 0; // Finalizando o programa

}
