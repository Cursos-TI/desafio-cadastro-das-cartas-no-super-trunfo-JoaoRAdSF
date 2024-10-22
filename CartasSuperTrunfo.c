#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char pais[50], A[50], c1[50], c2[50], c3[50];
    int nPontosTuristicos;
    double pib;
    float populacao, area;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("\nSuper Trunfo\n\nCadastre suas cartas!\n");

    printf("Por favor, digite o nome de um país e tecle enter:\n");
    scanf("%s", &pais);

    printf("Muito bem, agora digite o nome de um estado e após uma cidade:\n");
    scanf("%s %s", &A, &c1);

    printf("Nos informe a população, a quantidade de pontos turisticos e a área da região por favor:\n");
    scanf("%f %d %f", &populacao, &nPontosTuristicos, &area);

    printf("Ótimo, agora digite o nome de outra cidade:\n");
    scanf("%s", &c2);

    printf("Nos informe a população, a quantidade de pontos turisticos e a área da região por favor:\n");
    scanf("%f %d %f", &populacao, &nPontosTuristicos, &area);

    printf("Processando...\n\nCartas cadastradas!\n\nForam cadastradas quatro cidades para o estado estado: %s - %s\n\nCidade 01: %s\nPopulação: %f\nNúmeros de pontos turisticos: %d\nÁrea total do lugar é de: %f\n", A, pais, c1, populacao, nPontosTuristicos, area);
    printf("\nCidade 02: %s\nPopulação: %f\nNúmeros de pontos turisticos: %d\nÁrea total do lugar é de: %f\n", c2, populacao, nPontosTuristicos, area);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
