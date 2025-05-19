#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    int i;
    int turismo[2], area[2];
    char nome[2][30], codigo[2][4];
    long int populacao[2], pib[2];
    float densidade[2], pper_capita[2], poder[2];
    printf("+++ Bem-vindo ao Trunfo! +++\n");
    printf("=== Cadastro de Cidades ===\n");
    printf("\n");
    
    // Vai repetir a imformação duas vezes, para armazenar as duas informações e possivelmente fazer uma comparação
    for (i = 0; i < 2; i++) {
        printf("=== Cidade %d ===\n", i + 1);
        printf("Estado: ");
        scanf("%s", nome[i]);
        printf("Código: ");
        scanf("%s", codigo[i]);
        printf("População: ");
        scanf("%d", &populacao[i]);
        printf("Área(km²): ");
        scanf("%d", &area[i]);
        printf("PIB: ");
        scanf("%ld", &pib[i]);
        printf("Pontos Turisticos: ");
        scanf("%d", &turismo[i]);

        densidade[i] = (float) populacao[i] / area[i];
        pper_capita[i] = (float) pib[i] / populacao[i];
        poder[i] = (float) populacao[i] + pib[i] + area[i] + turismo[i] + pper_capita[i] - densidade[i];
    }

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", nome[0]);
    printf("Código: %s\n", codigo[0]);
    printf("População: %ld\n", populacao[0]);
    printf("Área(km²): %d km²\n", area[0]);
    printf("PIB: %ld bilhões de reais\n", pib[0]);
    printf("Pontos Turisticos: %d\n", turismo[0]);
    printf("Densidade: %.2f hab/km²\n", densidade[0]);
    printf("PIB per capita: %.2f\n", pper_capita[0]);
    printf("Super Poder: %.2f\n", poder[0]);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", nome[1]);
    printf("Código: %s\n", codigo[1]);
    printf("População: %ld Hab\n", populacao[1]);
    printf("Área(km²): %d km²\n", area[1]);
    printf("PIB: %ld bilhões de reais\n", pib[1]);
    printf("Pontos Turisticos: %d\n", turismo[1]);
    printf("Densidade: %.2f hab/km²\n", densidade[1]);
    printf("PIB per capita: %.2f\n", pper_capita[1]);
    printf("Super Poder: %.2f\n", poder[1]);
    printf("\n");

    printf("--- Comparação das Cartas ---\n");

    printf("População: %s\n", (populacao[0] > populacao[1]) ? "Carta 1 Ganhou" : (populacao[0] < populacao[1]) ? "Carta 2 Ganhou" : "Empate");
    printf("Área: %s\n", (area[0] > area[1]) ? "Carta 1 Ganhou" : (area[0] < area[1]) ? "Carta 2 Ganhou" : "Empate");
    printf("PIB: %s\n", (pib[0] > pib[1]) ? "Carta 1 Ganhou" : (pib[0] < pib[1]) ? "Carta 2 Ganhou" : "Empate");
    printf("Pontos Turisticos: %s\n", (turismo[0] > turismo[1]) ? "Carta 1 Ganhou" : (turismo[0] < turismo[1]) ? "Carta 2 Ganhou" : "Empate");
    printf("Densidade: %s\n", (densidade[0] < densidade[1]) ? "Carta 1 Ganhou" : (densidade[0] > densidade[1]) ? "Carta 2 Ganhou" : "Empate");
    printf("PIB per capita: %s\n", (pper_capita[0] > pper_capita[1]) ? "Carta 1 Ganhou" : (pper_capita[0] < pper_capita[1]) ? "Carta 2 Ganhou" : "Empate");
    printf("Super Poder: %s\n", (poder[0] > poder[1]) ? "Carta 1 Ganhou" : (poder[0] < poder[1]) ? "Carta 2 Ganhou" : "Empate");

    printf("Novo Comit\n");
    return 0;
}