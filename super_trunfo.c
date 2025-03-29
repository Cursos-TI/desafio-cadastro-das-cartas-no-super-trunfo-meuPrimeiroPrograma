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
        
        // Variáveis para armazenamento de dados da carta 2

         char estado2;            // Letra do estado (A-H)
         char codigo2[5];         // Código da carta (ex: A01)
         char NomeDaCidade2[20];  // Nome da cidade
         int populacao2;          // População
         float area2;             // Área em km²
         float pib2;              // Produto Interno Bruto 
         int turisticos2;         // Número de pontos turísticos

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

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área de Cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turísticos: \n");
    scanf("%d", &turisticos2);
                 
                             // Dados da carta 1.
    
    printf("Carta 01: \n");
    printf("Estado:%c \n", estado);
    printf("Código:%s \n", codigo);
    printf("Nome da Cidade:%s \n", NomeDaCidade);
    printf("População:%d \n", populacao);
    printf("Àrea: %f\n", area);
    printf("PIB:%f bilhões de pessoas \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turisticos);

                            // Dados da carta 2.

    printf("Carta 02: \n");
    printf("Estado:%c \n", estado2);
    printf("Código:%s \n", codigo2);
    printf("Nome da Cidade:%s \n", NomeDaCidade2);
    printf("População:%d \n", populacao2);
    printf("Àrea: %f\n", area2);
    printf("PIB:%f bilhões de pessoas \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turisticos2);

     return 0;
    
    }
