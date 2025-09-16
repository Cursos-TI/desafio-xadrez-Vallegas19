#include <stdio.h>


int main(){
    //Carta 1

    char Estado1;         
    char Codigo1;         
    char NomeDaCidade1[50];
    int Populacao1; 
    float Area1; 
    float PIB1;
    int NumerodePontosTurísticos1;

    //Carta2

    char Estado2;         
    char Codigo2;
    char NomeDaCidade2[20];
    int populacao2;
    float Area2;
    float PIB2;
    int NumerodePontosTurísticos2;


    //Dados da Carta 1
    printf("Carta1\n");
    printf("Digite seu Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite seu Codigo: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &NomeDaCidade1);

    printf("Digite a população: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumerodePontosTurísticos1);

    //Dados da Carta 2
    printf("Carta 2\n");
    printf("Digite seu Estado: \n");
    scanf("%c", &Estado2);

    printf("Digite seu Codigo: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da sua Cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos Turisticos: \n");
    scanf("%d", &NumerodePontosTurísticos2);

    //Exibição dos dados
    printf("\n-----Dados das Cartas Cadastradas-----\n");

    printf("\n Dados da Carta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f km²\n");
    printf("PIB: %f", PIB1);
    printf("Número de Pontos Turisticos: %d\n", NumerodePontosTurísticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n");
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", NumerodePontosTurísticos2);

return 0;
}