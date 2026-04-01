#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // as variáveis estão bem descritivas para cada caracteristica das cartas, c1 se refere a carta 1 e c2 se refere a carta 2
  char c1_estado[2], c2_estado[2], c1_codigo_carta[4], c2_codigo_carta[4], c1_nome_cidade[30], c2_nome_cidade[30];
  int c1_populacao, c2_populacao, c1_numero_pontos_turisticos, c2_numero_pontos_turisticos;
  float c1_area, c2_area, c1_pib, c2_pib;
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
  scanf("%f", &c1_pib);
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
  scanf("%f", &c2_pib);
  //Quantidade de pontos turísticos
  printf("Informe a número de pontos turísticos: ");
  scanf("%d", &c2_numero_pontos_turisticos);

  // Área para exibição dos dados da cidade
  //Exibindo os dados da carta 1
  printf("\n Carta 1\n");
  printf("Estado: %s \n", c1_estado);
  printf("Código: %s \n", c1_codigo_carta);
  printf("Nome da cidade: %s \n", c1_nome_cidade);
  printf("População: %d \n", c1_populacao);
  printf("Área: %.3f \n", c1_area);
  printf("PIB: %.2f \n", c1_pib);
  printf("Quantidade de pontos turísticos: %d \n", c1_numero_pontos_turisticos);

  //Exibindo os dados da carta 2
  printf("\n Carta 2\n");
  printf("Estado: %s \n", c2_estado);
  printf("Código: %s \n", c2_codigo_carta);
  printf("Nome da cidade: %s \n", c2_nome_cidade);
  printf("População: %d \n", c2_populacao);
  printf("Área: %.3f \n", c2_area);
  printf("PIB: %.2f \n", c2_pib);
  printf("Quantidade de pontos turísticos: %d \n", c2_numero_pontos_turisticos);

return 0;
} 
