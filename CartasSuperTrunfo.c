#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
        float codigo_da_cidade;
    char nome[25];
    float populacao;
    float area;
    float PIB;
    int n_pontos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Digite o código da cidade: \n");
    scanf("%f", codigo_da_cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite o número da população: \n");
    scanf("%f", populacao);

    printf("Digite area da cidade: \n");
    scanf("%f", area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", PIB);

    printf("Digite o numero de pontos da cidade: \n");
    scanf("%d", n_pontos);

    return 0;
}
