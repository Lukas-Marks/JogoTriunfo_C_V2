#include <stdio.h>
// teste
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

// Cartas 1
char estado[30];
char codCarta[3];
char nomeCidade[30];
float populacao;
float area;
float pib;
int numPontosTuristicos;
float densidadePopulacional;
float pibPerCapita;

// Cartas 2
char estado2[30];
char codCarta2[3];
char nomeCidade2[30];
float populacao2;
float area2;
float pib2;
int numPontosTuristicos2;
float densidadePopulacional2;
float pibPerCapita2;

  // Área para entrada de dados

//Estado
printf("Digite seu primeiro Estado:\n ");
scanf("%s", estado);

printf("Digite seu segudo Estado:\n ");
scanf("%s", estado2);

// Codigo
printf("Digite codigo da sua primeira Carta:\n ");
scanf("%s", codCarta);

printf("Digite codigo da sua segunda Carta: \n");
scanf("%s", codCarta2);

//Cidade

printf("Digite o nome da Cidade da primeira carta:\n ");
scanf("%s", nomeCidade);

printf("Digite o nome da Cidade da segunda carta:\n ");
scanf("%s", nomeCidade2);

// População

printf("Digite o tamanho da populacao da primeira carta:\n ");
scanf("%f", &populacao);

printf("Digite o tamanho da populacao da segunda carta:\n ");
scanf("%f", &populacao2);

// Area
printf("Digite tamanho da area da primeira carta:\n ");
scanf("%f", &area);

printf("Digite tamanho da area da segunda carta:\n ");
scanf("%f", &area2);

// PIB
printf("Digite o PIB da primeira carta:\n ");
scanf("%f", &pib);

printf("Digite o PIB da segunda carta:\n ");
scanf("%f", &pib2);

//Numero Pontos Artisticos

printf("Digite o numero de pontos turisticos da carta 1:\n ");
scanf("%d", &numPontosTuristicos);

printf("Digite o numero de pontos turisticos da carta 2:\n ");
scanf("%d", &numPontosTuristicos2);


// Após ler todos os dados:
densidadePopulacional = populacao / area;
pibPerCapita = pib / populacao;

densidadePopulacional2 = populacao2 / area2;
pibPerCapita2 = pib2 / populacao2;


  // Área para exibição dos dados da cidade
printf("------------------------------------------- \n");
printf("Carta1 \n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codCarta);
printf("Nome da Cidade: %s\n", nomeCidade);
printf("Populacao: %f\n", populacao);
printf("Area: %f\n", area);
printf("PIB: %f\n", pib);
printf("Numero de Ponto Turisticos: %d \n", numPontosTuristicos);
printf("Sua densidade populacional e: %.2f \n", densidadePopulacional);
printf("O PIB per Capita e: %.2f \n", pibPerCapita);
printf("------------------------------------------- \n");



printf("------------------------------------------- \n");
printf("Carta2 \n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %f\n", populacao2);
printf("Area: %f\n", area2);
printf("PIB: %f\n", pib2); // Em Bilhões
printf("Numero de Ponto Turisticos: %d\n", numPontosTuristicos2);
printf("Sua densidade populacional e: %.2f \n", densidadePopulacional2);
printf("O PIB per Capita e: %.2f \n", pibPerCapita2);
printf("------------------------------------------- \n");

// Cidade Com maior população

printf("Comparando as cartas com base na populacao: \n");

if (populacao > populacao2) {
    printf("Carta 1 - Cidade: %s Sua populacao e %2.f \n", nomeCidade, populacao);
    printf("Carta 2 - Cidade: %s Sua populacao e %2.f \n", nomeCidade2, populacao2);
    printf("A carta Vencedora e: %s \n", nomeCidade);
} else if (populacao < populacao2) {

    printf("Carta 1 - Cidade: %s Sua populacao e %2.f \n", nomeCidade, populacao);
    printf("Carta 2 - Cidade: %s Sua populacao e %2.f \n", nomeCidade2, populacao2);
    printf("A carta Vencedora e: %s \n", nomeCidade2);

} else {
    printf("As duas cartas tem a mesma populacao. \n");
}


} 