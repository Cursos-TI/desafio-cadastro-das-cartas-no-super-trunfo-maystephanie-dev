#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
 
// NIVEL NOVATO E INTERMEDIARIO - MAYARA
//duvida: existe algum codigo que permita que transforme, por exemplo, o 699.28 em 699.280.000.000?

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int população1, população2, turismo1, turismo2;
    float área1, área2, PIB1, PIB2, densidade1, densidade2, percapita1, percapita2;
    char estado1[50], estado2[50], cidade1[50], cidade2[50], código1[50], código2[50];


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    // inserçao dos dados da primeira carta
    printf("Dados da primeira carta: \n");
    
    printf("Estado:  \n");
    scanf("%s", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &código1);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("População:  \n");
    scanf("%d", &população1);

    printf("Área em Km2:  \n");
    scanf("%f", &área1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo1);

    // inserção de dados da segunda carta
    printf("Dados da segunda carta: \n");
    
    printf("Estado:  \n");
    scanf("%s", &estado2);

    printf("Código da carta: \n");
    scanf("%s", &código2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População:  \n");
    scanf("%d", &população2);

    printf("Área em Km2:  \n");
    scanf("%f", &área2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    // Calculo populacional e PIB per capita
    densidade1 = população1 / área1;
    percapita1 = PIB1 / população1;

    densidade2 = população2 / área2;
    percapita2 = PIB2 / população2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Exibindo informações da primeira caarta
    printf("Carta 1\n");
    printf("Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n", estado1, código1, cidade1);
    printf("População: %d \n Área por km2: %.2f \nPIB: %.2f \n", população1, área1, PIB1);
    printf("Número de pontos turísticos: %d \n", turismo1);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf("PIB per capita: %.2f \n", percapita1);

    // Exibindo informações da segunda carta
    printf("Carta 2 \n");
    printf("Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n", estado2, código2, cidade2);
    printf("População: %d \n Área por km2: %.2f \n PIB: %.2f \n", população2, área2, PIB2);
    printf("Número de pontos turísticos: %d \n", turismo2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", percapita2);
    

    return 0;
}
