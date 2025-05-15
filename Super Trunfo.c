#include <stdio.h>
#include <stdlib.h>

int main() {

 char estado1[50], cidade1[50], codigo1[3];
 int populacao1, pontos_turisticos1;
 float area1, pib1, densidade1, pib_per_capita1;

 char estado2[50], cidade2[50], codigo2[3];
 int populacao2, pontos_turisticos2;
 float area2, pib2, densidade2, pib_per_capita2;
 
 int opcao;

 // Inserindo os dados da primeira carta

 printf("Digite o Estado da primeira carta: \n");
 scanf("%s", estado1);

 printf("Digite a Cidade da primeira carta: \n");
 scanf("%s", cidade1);

 printf("Digite o Codigo da primeira carta: \n");
 scanf("%s", codigo1);

 printf("Digite a Populacao primeira carta: \n");
 scanf("%d", &populacao1);

 printf("Digite o Numero de pontos turisticos primeira carta: \n");
 scanf("%d", &pontos_turisticos1);

 printf("Digite a Area da primeira carta: \n");
 scanf("%f", &area1);

 printf("Digite o PIB da primeira carta: \n");
 scanf("%f", &pib1);

 //Exibindo os resultados da primeira carta
 
 printf("Os dados da primeira carta sao:\n Estado: %s\n Cidade: %s\n Codigo: %s\n Populacao: %d\n Numero de pontos turisticos: %d\n Area: %.3f\n PIB: %.3f\n", estado1, cidade1, codigo1, populacao1, pontos_turisticos1, area1, pib1);

 // Calculando densidade populacional da primeira carta
 if(area1 != 0){
 densidade1 = populacao1/area1;
 } else { 
    printf(" A area nao pode ser zero\n");
 }
 printf(" Densidade Populacional : %d / %.3f = %.3f\n", populacao1, area1, densidade1);

 // Calculando PIB per capita da primeira carta
 if(populacao1 != 0){
 pib_per_capita1 = pib1/populacao1;
 } else {
 printf(" A pipulacao nao pode ser zero\n");
 }
 printf(" PIB per capita : %.3f / %d = %.3f\n", pib1, populacao1, pib_per_capita1);

 // Inserindo os dados da segunda carta

 printf("Digite o Estado da segunda carta: \n");
 scanf("%s", estado2);

 printf("Digite a Cidade da segunda carta: \n");
 scanf("%s", cidade2);

 printf("Digite o Codigo da segunda carta: \n");
 scanf("%s", codigo2);

 printf("Digite a Populacao da segunda carta: \n");
 scanf("%d", &populacao2);

 printf("Digite o Numero de pontos  turisticos da segunda carta: \n");
 scanf("%d", &pontos_turisticos2);
 
 printf("Digite a Area da segunda carta: \n");
 scanf("%f", &area2);

 printf("Digite o PIB da segunda carta: \n");
 scanf("%f", &pib2);

 //Exibindo os resultados da segunda carta
 
 printf("Os dados da segunda carta sao:\n Estado: %s\n Cidade: %s\n Codigo: %s\n Populacao: %d\n Numero de pontos turisticos: %d\n Area: %.3f\n PIB: %.3f\n", estado2, cidade2, codigo2, populacao2, pontos_turisticos2, area2, pib2);

 // Calculando densidade populacional da segunda carta
  if(area2 != 0){
  densidade2 = populacao2/area2;
  } else { 
  printf(" A area nao pode ser zero\n");
  }
  printf(" Densidade Populacional : %d / %.3f = %.3f\n", populacao2, area2, densidade2);

 // Calculando PIB per capita da segunda carta
  if(populacao2 != 0){
    pib_per_capita2 = pib2 / populacao2;
    } else {
    printf(" A pipulacao nao pode ser zero\n");
    }
    printf(" PIB per capita : %.3f / %d = %.3f\n", pib2, populacao2, pib_per_capita2);


 // ***Comparando atributos das cartas***

printf("Menu de comparacao:\n Escolha um atributo para comparar:\n");
printf("1. Populacao\n 2. PIB\n 3. Area\n 4. Numero de pontos turisticos\n 5. Densidade demografica\n");
scanf("%d", &opcao);


switch (opcao){
   case 1:
   printf("Atributo: Populacao\n");
   break;
   case 2:
   printf("Atributo: PIB\n");
   break;
   case 3:
   printf("Atributo: Area\n");
   break;
   case 4:
   printf("Atributo: Numero de pontos turisticos\n");
   break;
   case 5:
   printf("Atributo: Densidade demogrfica\n");
   break;
   default:
   printf("Opcao invalida! Tente novamente.\n");
   break;
}

if ((populacao1 > populacao2) || (pib1 > pib2) || (area1 > area2) || (pontos_turisticos1 > pontos_turisticos2) ||
(densidade1 < densidade2)){
printf("A primeira carta cujo estado e %s, e a vencedora!\n", estado1);
} else if((populacao1 < populacao2) || (pib1 < pib2) || (area1 < area2) || (pontos_turisticos1 < pontos_turisticos2) ||
(densidade1 > densidade2)){
printf("A segunda carta cujo estado e %s, e a vencedora!\n", estado2);
} else {
printf("Empate! Os atributos das cartas sao iguais!\n");
}

return 0;

}