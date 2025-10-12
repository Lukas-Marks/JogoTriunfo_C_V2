#include <stdio.h>
// teste
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

int pEscolha;
int sEscolha;

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
float resultado;

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
float resultado2;


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

printf("Vai comecar a comparacao das cartas \n");
printf("Escolha uma das duas cartas para iniciar Primeira comparacao \n");

  // Área para comparação das cartas

  printf("Escolha a categoria para comparar as cartas:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Numero de Pontos Turisticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  scanf("%d", &pEscolha);

  switch (pEscolha) {
    case 1:
      if (populacao > populacao2) {
        printf("Carta 1 venceu na categoria Populacao com %2.f \n", populacao);
      } else if (populacao < populacao2) {
        printf("Carta 2 venceu na categoria Populacao com %2.f\n", populacao2);
      } else {
        printf("Empate na categoria Populacao!\n");
      }
      break;

    case 2:
      if (area > area2) {
        printf("Carta 1 venceu na categoria area com %2.f\n", area);
      } else if (area < area2) {
        printf("Carta 2 venceu na categoria area com %2.f\n", area2);
      } else {
        printf("Empate na categoria Area!\n");
      }
      break;

    case 3:
      if (pib > pib2) {
        printf("Carta 1 venceu na categoria PIB %2.f\n", pib);
      } else if (pib < pib2) {
        printf("Carta 2 venceu na categoria PIB %2.f\n", pib2);
      } else {
        printf("Empate na categoria PIB!\n");
      }
      break;

    case 4:
      if (numPontosTuristicos > numPontosTuristicos2) {
        printf("Carta 1 venceu na categoria Numero de Pontos Turisticos %d\n", numPontosTuristicos);
      } else if (numPontosTuristicos < numPontosTuristicos2) {
        printf("Carta 2 venceu na categoria Numero de Pontos Turisticos %d\n", numPontosTuristicos2);
      } else {
        printf("Empate na categoria Numero de Pontos Turisticos!\n");
      }
      break;

    case 5:
      if (densidadePopulacional > densidadePopulacional2) {
        printf("Carta 1 vence na categoria Densidade Populacional %2.f \n", densidadePopulacional);
      } else if (densidadePopulacional < densidadePopulacional2) {
        printf("Carta 2 vence na categoria Numero de Pontos Turisticos %2.f \n", densidadePopulacional);
      } else {
        printf("Empate na categoria Numero de Pontos Turisticos!\n");
      }
      break;
    
    case 6:
      if (pibPerCapita > pibPerCapita2) {
        printf("Carta 1 vence na categoria PIB per Capita %2.f \n", pibPerCapita);
      } else if (pibPerCapita < pibPerCapita2) {
        printf("Carta 2 vence na categoria PIB per Capita %2.f \n", pibPerCapita2);
      } else {
        printf("Empate na categoria PIB per Capita!\n");
      }
      break;

    default: 
        printf("Escolha invalida!\n");
  }



printf("Escolha outra categoria para iniciar a comparacao da Segunda comparacao\n");
scanf("%d", &sEscolha);

  if ( sEscolha == pEscolha ){
    printf("******************** Erro ************************ \n");
    printf("** Essa comparacao ja foi feita digite outra que nao seja %d** \n", pEscolha);
    printf("Escolha a categoria para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &sEscolha);
  } 

  switch (sEscolha) {
    case 1:
      if (populacao > populacao2) {
        printf("Carta 1 venceu na categoria Populacao com %2.f \n", populacao);
      } else if (populacao < populacao2) {
        printf("Carta 2 venceu na categoria Populacao com %2.f\n", populacao2);
      } else {
        printf("Empate na categoria Populacao!\n");
      }
      break;

    case 2:
      if (area > area2) {
        printf("Carta 1 venceu na categoria area com %2.f\n", area);
      } else if (area < area2) {
        printf("Carta 2 venceu na categoria area com %2.f\n", area2);
      } else {
        printf("Empate na categoria Area!\n");
      }
      break;

    case 3:
      if (pib > pib2) {
        printf("Carta 1 venceu na categoria PIB %2.f\n", pib);
      } else if (pib < pib2) {
        printf("Carta 2 venceu na categoria PIB %2.f\n", pib2);
      } else {
        printf("Empate na categoria PIB!\n");
      }
      break;

    case 4:
      if (numPontosTuristicos > numPontosTuristicos2) {
        printf("Carta 1 venceu na categoria Numero de Pontos Turisticos %d\n", numPontosTuristicos);
      } else if (numPontosTuristicos < numPontosTuristicos2) {
        printf("Carta 2 venceu na categoria Numero de Pontos Turisticos %d\n", numPontosTuristicos2);
      } else {
        printf("Empate na categoria Numero de Pontos Turisticos!\n");
      }
      break;

    case 5:
      if (densidadePopulacional > densidadePopulacional2) {
        printf("Carta 1 vence na categoria Densidade Populacional %2.f \n", densidadePopulacional);
      } else if (densidadePopulacional < densidadePopulacional2) {
        printf("Carta 2 vence na categoria Numero de Pontos Turisticos %2.f \n", densidadePopulacional);
      } else {
        printf("Empate na categoria Numero de Pontos Turisticos!\n");
      }
      break;
    
    case 6:
      if (pibPerCapita > pibPerCapita2) {
        printf("Carta 1 vence na categoria PIB per Capita %2.f \n", pibPerCapita);
      } else if (pibPerCapita < pibPerCapita2) {
        printf("Carta 2 vence na categoria PIB per Capita %2.f \n", pibPerCapita2);
      } else {
        printf("Empate na categoria PIB per Capita!\n");
      }
      break;

    default: 
        printf("Escolha invalida!\n");
  }



printf("------------ Resultado Final ------------\n");
printf("Carta 1 - Nome da cidade: %s \n", nomeCidade);
printf("Carta 2 - Nome da cidade : %s \n", nomeCidade2);

resultado = populacao + area + pib + numPontosTuristicos + densidadePopulacional + pibPerCapita;
resultado2 = populacao2 + area2 + pib2 + numPontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

printf("Soma dos atributos da Carta 1 : %.2f \n", resultado);
printf("Soma dos atributos da Carta 2 : %.2f \n", resultado2);

if (resultado == resultado2){
  printf("Empate na soma dos atributos das cartas!\n");
} else if (resultado > resultado2){
  printf("Carta 1 venceu pela soma dos atributos!\n");
} else {
  printf("[[Carta 2]] **venceu** pela soma dos atributos!\n");
}

printf("------------ Fim do Jogo ------------\n");

}
