#include <stdio.h>


int main() {
  #include <stdio.h>

int main() {

//variantes da primeira carta
  
char Codigo1[4];
char Estado1[20];
int populacao1;
float area1;
float PIB1;
int pontosTuristicos1;
char NomedaCidade1[30];

//variantes da segunda carta

char Codigo2[4];
char Estado2[20];
int populacao2;
float area2;
float PIB2;
int pontosTuristicos2;
char NomedaCidade2[30];

// Primeira carta

printf("Qual será o Estado escolhido?\n");
scanf("%s", Estado1);

printf("Cadastro da primeira carta\n"); 
printf("O código deve ter até 4 caracteres\n"); 
scanf("%s", Codigo1);

printf("Qual o nome da cidade?\n"); 
scanf("%s", NomedaCidade1);

printf("Qual a população da cidade?\n"); 
scanf("%d", &populacao1);

printf("Qual seria o PIB da mesma?\n"); 
scanf("%f", &PIB1);

printf("Qual seria a área da cidade?\n"); 
scanf("%f", &area1);

printf("Quantos pontos turísticos existem na cidade?\n"); 
scanf("%d", &pontosTuristicos1);

//Segunda carta

printf("Qual será o Estado escolhido?\n"); 
scanf("%s", Estado2);

printf("Cadastro da segunda carta\n");
printf("O código deve ter até 4 caracteres\n"); 
scanf("%s", Codigo2);

printf("Qual o nome da cidade?\n"); 
scanf("%s", NomedaCidade2);

printf("Qual a população da cidade?\n"); 
scanf("%d", &populacao2);

printf("Qual seria o PIB da mesma?\n"); 
scanf("%f", &PIB2);

printf("Qual seria a área da cidade?\n"); 
scanf("%f", &area2);

printf("Quantos pontos turísticos existem na cidade?\n"); 
scanf("%d", &pontosTuristicos2);

// Exibição do Cadastro1

printf("\n---- Carta 1 ----\n");
printf("Estado: %s\n", Estado1);
printf("Código da carta: %s\n", Codigo1);
printf("Cidade: %s\n", NomedaCidade1);
printf("População: %d habitantes\n", populacao1);
printf("PIB: %.2f bilhões\n", PIB1); 
printf("Área: %.2f km²\n", area1);
printf("Pontos turísticos: %d\n", pontosTuristicos1);

// Exibição do Cadastro2

printf("\n---- Carta 2 ----\n");
printf("Estado: %s\n", Estado2);
printf("Código da carta: %s\n", Codigo2);
printf("Cidade: %s\n", NomedaCidade2);
printf("População: %d habitantes\n", populacao2);
printf("PIB: %.2f bilhões\n", PIB2); 
printf("Área: %.2f km²\n", area2); 
printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
 
