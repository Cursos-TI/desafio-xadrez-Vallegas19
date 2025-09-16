#include <stdio.h>


int main(){
    printf("Desafio Xadrez!\n");

    //Carta 1
    printf("Carta1\n");

    char Estado1;         
    char Codigo1;         
    char NomeDaCidade1[20];
    int Populacao1; 
    float Area1; 
    float PIB1;
    int NumerodePontosTurísticos1;

    //Carta2
    printf("Carta2\n");

    char Estado2;         
    char Codigo2;
    char NomeDaCidade2[20];
    int populacao2;
    float Area2;
    float PIB2;
    int NumerodePontosTurísticos2;


    //Dados da carta1
    printf("Carta1\n");

    printf("Digite seu Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite seu Codigo: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &NomeDaCidade1);

    printf("Digite a população: \n");
    scanf("%d", Populacao1);

    printf("Digite a Área: \n");
    scanf("%f", Area1);

    printf("Digite o PIB \n");
    scanf("%f", PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumerodePontosTurísticos1);

    //Carta 2
    printf("Carta 1\n");

    printf("Digite seu Estado: \n");
    scanf("%c", &Estado2);

    printf("Digite seu Codigo: \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da sua Cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("Digite a população: \n");
    scanf("%d", populacao2);

    printf("Digite a Área: \n");
    scanf("%f", Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos Turisticos: \n");
    scanf("%d", NumerodePontosTurísticos2);

}