#include <stdio.h>

int main(){
    char nomeEstado1[30], nomeCidade1[30], codigo1[5];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char nomeEstado2[30], nomeCidade2[30], codigo2[5];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", nomeEstado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", nomeEstado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n===== Cartas Cadastradas =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", nomeEstado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", nomeEstado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
