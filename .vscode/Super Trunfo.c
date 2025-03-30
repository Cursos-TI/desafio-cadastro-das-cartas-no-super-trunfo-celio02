#include <stdio.h>
int main(){

char carta1[30]; //codigo_carta
char estado1[50]; //nome_estado
char cidade1[50]; //nome_cidade
int pontos; //quantidade_pontosTuristicos
int populacao; //quantidade_habitantes
float area; //area_Total
float PIB; //valor_PIB
float densidade_populacional; //densidade_populacional
float PIB_perCapita; //PIB_perCapita

printf("Bem vindos ao jogo super trunfo,preencha o valor de cada card: \n");

printf("digite o codigo da carta: \n");
scanf("%s", carta1);

printf("digite o nome do estado: \n");
scanf("%s", estado1);

printf("digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &pontos);

printf("digite a quantidade de habitantes: \n");
scanf("%d", &populacao);

printf("digite a area em km quadrados: \n");
scanf("%e", &area);

printf("digite o PIB: \n");
scanf("%f", &PIB);

densidade_populacional = (populacao / area);
printf("a densidade populacional da cidade é: %.2f; \n", densidade_populacional);

PIB_perCapita = (PIB / populacao);
printf("o PIB per capita da cidade é: %.2f; \n", PIB_perCapita);

char carta2[30];//codigo_carta2
char estado2[30];//codigo_carta2
char cidade2[30];//nome_cidade2
int pontos2;//quantidade_pontosTuristicos
int populacao2;//quantidade_habitantes
float area2;//areaTotal
float PIB2;//valor_PIB
float densidade_populacional2; //densidade_populacional
float PIB_perCapita2; //PIB_perCapita2

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

return 0;








}