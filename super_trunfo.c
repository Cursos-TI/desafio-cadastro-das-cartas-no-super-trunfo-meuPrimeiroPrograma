#include<stdio.h>

                             // criando uma estrutura para armazenar os dados da carta

    int main(){
        char estado;            // Letra do estado (A-H)
        char codigo[5];         // Código da carta (ex: A01)
        char NomeDaCidade[20];  // Nome da cidade
        int populacao;          // População
        float area;             // Área em km²
        float pib;              // Produto Interno Bruto 
        int turisticos;         // Número de pontos turísticos

    printf("Digite o nome do Estado:(A-H) \n");
    scanf("%c", &estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomeDaCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &turisticos);

    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", NomeDaCidade);
    printf("População: %d \n", populacao);
    printf("Àrea: %f\n", area);
    printf("PIB: %f bilhões de pessoas\n", pib);
    printf("Número de Pontos Turísticos: %d pontos turísticos. \n", turisticos);
    
    }

