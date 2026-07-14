#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // as variáveis estão bem descritivas para cada caracteristica das cartas, c1 se refere a carta 1 e c2 se refere a carta 2
  char c1_estado[2], c2_estado[2], c1_codigo_carta[4], c2_codigo_carta[4], c1_nome_cidade[30], c2_nome_cidade[30];
  int c1_numero_pontos_turisticos, c2_numero_pontos_turisticos, resultadoSuperPoder, resultadoPibPerCapita, resultadoPopulação, resultadoDensidadePopulacional, resultadoArea, resultadoPIB, resultadoPontosTuristicos;
  unsigned long int c1_populacao, c2_populacao;
  float c1_area, c2_area, c1_densidade_populacional, c2_densidade_populacional, c1_pib_capita, c2_pib_capita;
  double c1_pib, c2_pib, c1_superPoder, c2_superPoder;
  // Área para entrada de dados
  //Coletar dados da carta 1
  printf("Olá, vamos criar a carta 1? \n");

  //Estado
  printf("Informe o nome do estado: ");
  scanf(" %c", c1_estado);

  //código do estado
  printf("Informe o código da carta: ");
  scanf("%s", c1_codigo_carta);

  //nome da cidade
  printf("Informe o nome da cidade: ");
  getchar();
  fgets(c1_nome_cidade, 30, stdin);
  c1_nome_cidade[strcspn(c1_nome_cidade, "\n")] = '\0';

  //população
  printf("Informe a população: ");
  scanf("%d", &c1_populacao);

  //Área
  printf("informe a área(Km²): ");
  scanf("%f", &c1_area);

  //PIB
  printf("Informe o PIB: ");
  scanf("%lf", &c1_pib);

  //Quantidade de pontos turísticos
  printf("Informe a número de pontos turísticos: ");
  scanf("%d", &c1_numero_pontos_turisticos);

  //Coletar dados da carta 2
  printf("Agora vamos criar a carta 2? \n");

  //Estado
  printf("Informe a sigla do estado: ");
  scanf(" %c", c2_estado);

  //código do estado
  printf("Informe o código da carta: ");
  scanf("%s", c2_codigo_carta);

  //nome da cidade
  printf("Informe o nome da cidade: ");
  getchar();
  fgets(c2_nome_cidade, 30, stdin);
  c2_nome_cidade[strcspn(c2_nome_cidade, "\n")] = '\0';

  //população
  printf("Informe a população: ");
  scanf("%d", &c2_populacao);

  //Área
  printf("informe a área(Km²): ");
  scanf("%f", &c2_area);

  //PIB
  printf("Informe o PIB: ");
  scanf("%lf", &c2_pib);

  //Quantidade de pontos turísticos
  printf("Informe a número de pontos turísticos: ");
  scanf("%d", &c2_numero_pontos_turisticos);

  //Calcular densidade populacional, pib per capita das cartas e superpoder
  //Carta 1
  c1_densidade_populacional = (float)c1_populacao/c1_area;
  c1_pib_capita = (float)c1_pib/c1_populacao;
  c1_superPoder = c1_area + (float)(1.0 / c1_densidade_populacional) + c1_numero_pontos_turisticos + c1_pib + c1_pib_capita + c1_populacao;

  //Carta 2
  c2_densidade_populacional = (float)c2_populacao/c2_area;
  c2_pib_capita = c2_pib/(float)c2_populacao;
  c2_superPoder = c2_area + (float)(1.0 / c2_densidade_populacional) + c2_numero_pontos_turisticos + c2_pib + c2_pib_capita + c2_populacao;

  // Área para exibição dos dados da cidade
  //Exibindo os dados da carta 1
  printf("\n Carta 1\n");
  printf("Estado: %s \n", c1_estado);
  printf("Código: %s \n", c1_codigo_carta);
  printf("Nome da cidade: %s \n", c1_nome_cidade);
  printf("População: %d \n", c1_populacao);
  printf("Área: %.3f \n", c1_area);
  printf("PIB: %.2f Bilhões de reais\n", c1_pib);
  printf("Quantidade de pontos turísticos: %d \n", c1_numero_pontos_turisticos);
  printf("Densidade populacional: %.2f hab/km²\n", c1_densidade_populacional);
  printf("PIB per capita: %.2f reais\n", c1_pib_capita);
  

  //Exibindo os dados da carta 2
  


  //Comparar cartas
  resultadoPopulação = c1_populacao > c2_populacao;
  resultadoArea = c1_area > c2_area;
  resultadoPIB = c1_pib > c2_pib;
  resultadoPontosTuristicos = c1_numero_pontos_turisticos > c2_numero_pontos_turisticos;
  resultadoDensidadePopulacional = c1_densidade_populacional < c2_densidade_populacional;
  resultadoPibPerCapita = c1_pib_capita > c2_pib_capita;
  resultadoSuperPoder = c1_superPoder > c2_superPoder;

  //Resultados da comparação das cartas
  printf("\n Resultados\n");
  printf("População: %d \n", resultadoPopulação);
  printf("Área: %d \n", resultadoArea);
  printf("PIB: %d\n", resultadoPIB);
  printf("Quantidade de pontos turísticos: %d\n", resultadoPontosTuristicos);
  printf("Densidade populacional: %d\n", resultadoDensidadePopulacional);
  printf("PIB per capita: %.d\n", resultadoPibPerCapita);
  printf("Super Poder: %d\n", resultadoSuperPoder);

return 0;
} 
