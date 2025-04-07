#include <stdio.h>
int main(){

char carta1[30]; //codigo_carta
char estado1[50]; //nome_estado
char cidade1[50]; //nome_cidade
int pontos1; //quantidade_pontosTuristicos
unsigned int populacao1; //quantidade_habitantes
float area1; //area_Total
float PIB1; //valor_PIB
float densidade_populacional1; //densidade_populacional
float PIB_perCapita1; //PIB_perCapita
float superPoder1; //soma de todos os atributos

printf("Bem vindos ao jogo super trunfo,preencha o valor de cada card: \n");

printf("digite o codigo da carta: \n");
scanf("%s", carta1);

printf("digite o nome do estado: \n");
scanf("%s", estado1);

printf("digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &pontos1);

printf("digite a quantidade de habitantes: \n");
scanf("%lu", &populacao1);

printf("digite a area em km quadrados: \n");
scanf("%e", &area1);

printf("digite o PIB: \n");
scanf("%f", &PIB1);

densidade_populacional1 = (populacao1 / area1);
printf("a densidade populacional da cidade é: %.2f \n", densidade_populacional1);

PIB_perCapita1 = (PIB1 / populacao1);
printf("o PIB per capita da cidade é: %.2f \n", PIB_perCapita1);
 
superPoder1 = (pontos1 + populacao1 + area1 + PIB1 + PIB_perCapita1 + 1/densidade_populacional1);
printf("o super poder da carta 1 é: %.2f \n", superPoder1);

char carta2[30];//codigo_carta2
char estado2[30];//codigo_carta2
char cidade2[30];//nome_cidade2
int pontos2;//quantidade_pontosTuristicos
unsigned int populacao2;//quantidade_habitantes
float area2;//areaTotal
float PIB2;//valor_PIB
float densidade_populacional2; //densidade_populacional
float PIB_perCapita2; //PIB_perCapita2
float superPoder2; //soma de todos os atributos

printf("agora preecha o segundo card: \n");
printf("digite o codigo ds carta2: \n");
scanf("%s", carta2);

printf("digite o nome do estado2: \n");
scanf("%s", estado2);

printf("digite o nome da cidade2: \n");
scanf("%s", cidade2);

printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &pontos2);

printf("digite a quantidade de habitantes: \n");
scanf("%d", &populacao2);

printf("digite a area em km quadrados: \n");
scanf("%f", &area2);

printf("digite o PIB: \n ");
scanf("%f", &PIB2);

densidade_populacional2 = (populacao2 / area2);
printf("a densidade populacional da cidade 2 é: %.2f \n", densidade_populacional2);

PIB_perCapita2 = (PIB2 / populacao2);
printf("O PIB percapita da cidade 2 é: %.2f \n", PIB_perCapita2);

superPoder2 = (pontos2 + populacao2 + area2 + PIB2 + PIB_perCapita2 + 1/densidade_populacional2);
printf("o super poder da carta 2 é: %.2f \n", superPoder2);

//Comparando cartas
printf("Comparando atributos das cartas\n");
printf("Carta1 - %s: %f \n", cidade1, area1);
printf("carta2 - %s: %f \n", cidade2,area2);
printf("no atributo area, a carta vencedora foi \n");

if (area1 > area2) {
    printf("a carta 1 venceu");
 } else {
    printf("carta 2 venceu");
 }





 










return 0;
}








