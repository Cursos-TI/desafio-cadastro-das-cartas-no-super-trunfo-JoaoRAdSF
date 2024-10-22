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

    char estado, cidade[8];
    int populacao, num_pontos_turisticos, codigo=1;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("\nSuper Trunfo Paises\n\nVamos começar o cadastro das cartas,\npense em um estado e digite a primeira letra do estado que escolheu: (Ex. São Paulo, digite S)\n");
    scanf("%c", &estado); //Solicitando ao usuario que digite apenas a primeira letra do estado que escolheu.

    printf("\nPerfeito, Ele será representado pela letra: %c", estado); //Imprimindo a letra e definindo para ele que aquela letra representa o estado.

    printf("\n\nAgora sim, vamos cadastrar os dados da sua carta!\nComece digitando o nome de uma cidade: \n");
    scanf("%s", &cidade); //Recebendo o nome da cidade atraves de uma string.

    /*printf("Preciso que defina um código para essa cidade: (Ex. 01, 02, 03..)\n");
    scanf("%s", &codigo); //O usuario escolhe qual o codigo que vai ser atribuido a sua carta.*/
  
    printf("\nMaravilha, %s foi definida como a primeira cidade desse estado e será representada pelo código %c%d!", cidade, estado, codigo); //Imprimindo a cidade que ele digitou e logo após a letra que ele colocou no estado junto do código deixando-os juntos (Ex: A37, C14, ..).

    printf("\n\nNos informe a população dessa cidade: ");
    scanf("%d", &populacao); //Recebendo a população através de uma variavel inteira.

    printf("Ótimo, agora digite área em km²: ");
    scanf("%f", &area); //Recebendo a população através de uma variavel float.

    printf("Quase lá, qual PIB da cidade? ");
    scanf("%f", &pib); //Recebendo a população através de uma variavel float.

    printf("E para finalizar, quantos pontos turisticos existem nessa cidade? ");
    scanf("%d", &num_pontos_turisticos); //Recebendo a população através de uma variavel inteira.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta cadastrada com sucesso!\nAqui estão os dados:\n\nEstado: %c\nCódigo da Carta: %c%d\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %d\n", estado, estado, codigo, cidade, populacao, area, pib, num_pontos_turisticos);
    // Imprimindo os dados fornecidos pelo usuario de forma alinhada, linha apos linha.


    /*
    //SEGUNDA CIDADE
    
    char cidade2[8];
    int populacao2, num_pontos_turisticos2;
    float area2, pib2;

    printf("\n\nAgora vamos cadastrar a segunda cidade!\nDigite o nome de outra cidade: \n");
    scanf("%s", &cidade2); //Recebendo o nome da cidade atraves de uma string.
  
    codigo += 1;
    printf("\nMaravilha, %s foi definida como a primeira cidade desse estado e será representada pelo código %c%d!", cidade2, estado, codigo); //Imprimindo a cidade que ele digitou e logo após a letra que ele colocou no estado junto do código deixando-os juntos (Ex: A37, C14, ..).

    printf("\n\nNos informe a população dessa cidade: ");
    scanf("%d", &populacao2); //Recebendo a população através de uma variavel inteira.

    printf("Ótimo, agora digite área em km²: ");
    scanf("%f", &area2); //Recebendo a população através de uma variavel float.

    printf("Quase lá, qual PIB da cidade? ");
    scanf("%f", &pib2); //Recebendo a população através de uma variavel float.

    printf("E para finalizar, quantos pontos turisticos existem nessa cidade? ");
    scanf("%d", &num_pontos_turisticos2); //Recebendo a população através de uma variavel inteira.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta cadastrada com sucesso!\nAqui estão os dados:\n\nEstado: %c\nCódigo da Carta: %c%d\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %d\n", estado, estado, codigo, cidade2, populacao2, area2, pib2, num_pontos_turisticos2);
    // Imprimindo os dados fornecidos pelo usuario de forma alinhada, linha apos linha.
    */

    return 0;
}