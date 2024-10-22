#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //CARTAS TRUNFO NIVEL NOVATO

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /*Para cada carta, o usuário deverá inserir:
    Estado (char)
    Código da carta (char[])
    Nome da cidade (char[])
    População (int)
    Área em km² (float)
    PIB (float)
    Número de pontos turísticos (int*/

    char estado, codigo[3], cidade[8];
    int populacao, num_pontos_turisticos;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("\nSuper Trunfo Paises\n\nVamos começar o cadastro das cartas,\npense em um estado e digite a primeira letra do estado que escolheu: (Ex. São Paulo, digite S)\n");
    scanf("%c", &estado);

    printf("\nPerfeito, Ele será representado pela letra: %c", estado);

    printf("\n\nAgora sim, vamos cadastrar os dados da sua carta!\nComece digitando o nome de uma cidade: \n");
    scanf("%s", &cidade);

    printf("Preciso que defina um código para essa cidade: (Ex. 01, 02, 03..)\n");
    scanf("%s", &codigo);

    printf("\nMaravilha, %s foi definida como a primeira cidade desse estado e será representada pelo código %c%s!", cidade, estado, codigo);

    printf("\n\nNos informe a população dessa cidade: ");
    scanf("%d", &populacao);

    printf("Ótimo, agora digite área em km²: ");
    scanf("%f", &area);

    printf("Quase lá, qual PIB da cidade? ");
    scanf("%f", &pib);

    printf("E para finalizar, quantos pontos turisticos existem nessa cidade? ");
    scanf("%d", &num_pontos_turisticos);

    printf("\nCartas cadastradas!\nAqui estão os dados:\n\nEstado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, num_pontos_turisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
