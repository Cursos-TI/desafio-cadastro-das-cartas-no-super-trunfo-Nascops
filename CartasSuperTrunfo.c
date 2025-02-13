#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <string.h> // Biblioteca de manipulação de strings (strlen, strcpy, strcat, etc.)

int main(){
    char estado, codigo[4], nome[50];
    int populacao, turismo;
    float area;
    
    printf("Estado (Letra do Estado):\n");
    scanf(" %c", &estado);  // Adiciona espaço antes do %c para ignorar espaços em branco e limita a um caractere

    printf("Código (ex: A01, B02):\n");
    scanf("%3s", codigo);  // Remove o & e limita a entrada e garante que lê até 3 caracteres

    getchar(); // Limpa o buffer do teclado ante sdo scanf e faz funcionar o fgets

    printf("Nome da Cidade:\n");
    fgets(nome, sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o '\n' do final da string

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &turismo);

    printf("\n=== Dados da Cidade ===\n");
    printf("Estado: %c \nCódigo da Carta: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nNúmero de Pontos Turisticos: %d\n", estado, codigo, nome, populacao, area, turismo);

    return 0;
}
