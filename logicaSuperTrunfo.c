#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:'
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // INICIANDO O DESAFIO
    // Iniciando a codificação será impresso o Título: 
    
    printf ("*** Desafio: Cartas Super Trunfo - Países ***\n\n\n");

    /* Na sequencia será informando ao usuário que o cadastramento das cidades e suas respectivas informações 
    será efetuado pelo próprio usuário, e as cartas serão divididas por Estados, cada um com quatro cidades. 
    Cada país será dividido em oito estados, identificados pelas letras de A a H. 
    Cada estado terá quatro cidades, numeradas de 01 a 04. 
    A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
    */

    printf ("Vamos iniciar o cadastro das cidades do nosso Jogo Super Trunfo Países?\n\n\n");
    
    // Solicita ao usuário inserir as informações conforme sequencia dos dados

    printf ("Comece a informar os dados conforme solicitado, para cadastramento das cidades e suas respectivas informações.\nAs cartas serão divididas por estados, cada um com quatro cidades.\nCada país será dividido em oito estados, identificados pelas letras de A a H.\nCada estado terá quatro cidades, numeradas de 01 a 04.\nA combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n\nProntos???\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código A01:

    char estadoA01[15], codigoA01[3], nomeA01[25];
    int populacaoA01, N_Pontos_TuristicosA01;
    float areaA01, PIBA01;
    
    // Solicitando ao usuário os dados das cartas Código A 

   printf ("\nEntre com o nome do primeiro Estado, com Código A:\nNome Estado:\n");
   scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código A01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA01);
    printf ("Nome:\n");
    scanf (" %s", &nomeA01);
    printf ("População:\n");
    scanf (" %d", &populacaoA01);
    printf ("Área:\n");
    scanf (" %f", &areaA01);
    printf ("PIB:\n");
    scanf (" %f", &PIBA01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopA01 = populacaoA01 / areaA01;
    float PIBpercapitaA01 = PIBA01 / populacaoA01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A01: %s", nomeA01);
    printf ("\nPopulação: %d", populacaoA01);
    printf ("\nArea: %.2f", areaA01);
    printf ("\nPIB: %.2f", PIBA01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosA01);
    printf ("\nDensidade Populacional: %.2f", densidadepopA01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaA01);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderA01 = (float)populacaoA01 + areaA01 + PIBA01 + (float)N_Pontos_TuristicosA01 + (100 - densidadepopA01) + PIBpercapitaA01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderA01);
    printf ("...\n\n\n");

    // Aqui deste trecho em diante é efetuada a repetição dos códigos de forma que todas as cartas recebam as informações pelo usuário

    // Definindo variáveis separadas para cada atributo da cidade código A02:

    char estadoA02[20], codigoA02[3], nomeA02[25];
    int populacaoA02, N_Pontos_TuristicosA02;
    float areaA02, PIBA02;

    // Solicita ao usuário os dados das cartas Código A02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA02);
    printf ("Nome:\n");
    scanf (" %s", &nomeA02);
    printf ("População:\n");
    scanf (" %d", &populacaoA02);
    printf ("Área:\n");
    scanf (" %f", &areaA02);
    printf ("PIB:\n");
    scanf (" %f", &PIBA02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopA02 = populacaoA02 / areaA02;
    float PIBpercapitaA02 = PIBA02 / populacaoA02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A02: %s", nomeA02);
    printf ("\nPopulação: %d", populacaoA02);
    printf ("\nArea: %.2f", areaA02);
    printf ("\nPIB: %.2f", PIBA02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosA02);
    printf ("\nDensidade Populacional: %.2f", densidadepopA02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaA02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderA02 = (float)populacaoA02 + areaA02 + PIBA02 + (float)N_Pontos_TuristicosA02 + (100 - densidadepopA02) + PIBpercapitaA02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderA02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código A03:

    char estadoA03[20], codigoA03[3], nomeA03[25];
    int populacaoA03, N_Pontos_TuristicosA03;
    float areaA03, PIBA03;

    // Solicita ao usuário os dados das cartas Código A03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA03);
    printf ("Nome:\n");
    scanf (" %s", &nomeA03);
    printf ("População:\n");
    scanf (" %d", &populacaoA03);
    printf ("Área:\n");
    scanf (" %f", &areaA03);
    printf ("PIB:\n");
    scanf (" %f", &PIBA03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopA03 = populacaoA03 / areaA03;
    float PIBpercapitaA03 = PIBA03 / populacaoA03;


    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A03: %s", nomeA03);
    printf ("\nPopulação: %d", populacaoA03);
    printf ("\nArea: %.2f", areaA03);
    printf ("\nPIB: %.2f", PIBA03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosA03);
    printf ("\nDensidade Populacional: %.2f", densidadepopA03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaA03);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderA03 = (float)populacaoA03 + areaA03 + PIBA03 + (float)N_Pontos_TuristicosA03 + (100 - densidadepopA03) + PIBpercapitaA03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderA03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código A04:

    char estadoA04[20], codigoA04[3], nomeA04[25];
    int populacaoA04, N_Pontos_TuristicosA04;
    float areaA04, PIBA04;

    // Solicita ao usuário os dados das cartas Código A04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA04);
    printf ("Nome:\n");
    scanf (" %s", &nomeA04);
    printf ("População:\n");
    scanf (" %d", &populacaoA04);
    printf ("Área:\n");
    scanf (" %f", &areaA04);
    printf ("PIB:\n");
    scanf (" %f", &PIBA04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopA04 = populacaoA04 / areaA04;
    float PIBpercapitaA04 = PIBA04 / populacaoA04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A04: %s", nomeA04);
    printf ("\nPopulação: %d", populacaoA04);
    printf ("\nArea: %.2f", areaA04);
    printf ("\nPIB: %.2f", PIBA04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosA04);
    printf ("\nDensidade Populacional: %.2f", densidadepopA04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaA04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderA04 = (float)populacaoA04 + areaA04 + PIBA04 + (float)N_Pontos_TuristicosA04 + (100 - densidadepopA04) + PIBpercapitaA04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderA04);
    printf ("...\n\n\n");

   /* Deixando as linhas das demais cidades de B01 até o final (H4) comentadas para facilitar os testes com a inclusão de apenas 04 cidades

    // Definindo variáveis separadas para cada atributo da cidade código B01:

    char estadoB01[20], codigoB01[3], nomeB01[25];
    int populacaoB01, N_Pontos_TuristicosB01;
    float areaB01, PIBB01;
   
    // Solicitando ao usuário os dados das cartas Código B 

    printf ("\nEntre com o nome do Segundo Estado, com Código B:\nNome Estado:\n");
    scanf (" %s", &estadoB01);

    // Solicita ao usuário os dados das cartas Código B01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoB01);
    printf ("Nome:\n");
    scanf (" %s", &nomeB01);
    printf ("População:\n");
    scanf (" %d", &populacaoB01);
    printf ("Área:\n");
    scanf (" %f", &areaB01);
    printf ("PIB:\n");
    scanf (" %f", &PIBB01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosB01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopB01 = populacaoB01 / areaB01;
    float PIBpercapitaB01 = PIBB01 / populacaoB01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código B01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade B01: %s", nomeB01);
    printf ("\nPopulação: %d", populacaoB01);
    printf ("\nArea: %.2f", areaB01);
    printf ("\nPIB: %.2f", PIBB01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosB01);
    printf ("\nDensidade Populacional: %.2f", densidadepopB01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaB01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderB01 = (float)populacaoB01 + areaB01 + PIBB01 + (float)N_Pontos_TuristicosB01 + (100 - densidadepopB01) + PIBpercapitaB01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderB01);
    printf ("...\n\n\n");

     // Definindo variáveis separadas para cada atributo da cidade código B02:

    char estadoB02[20], codigoB02[3], nomeB02[25];
    int populacaoB02, N_Pontos_TuristicosB02;
    float areaB02, PIBB02;

    // Solicita ao usuário os dados das cartas Código B02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoB02);
    printf ("Nome:\n");
    scanf (" %s", &nomeB02);
    printf ("População:\n");
    scanf (" %d", &populacaoB02);
    printf ("Área:\n");
    scanf (" %f", &areaB02);
    printf ("PIB:\n");
    scanf (" %f", &PIBB02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosB02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopB02 = populacaoB02 / areaB02;
    float PIBpercapitaB02 = PIBB02 / populacaoB02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código B02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade B02: %s", nomeB02);
    printf ("\nPopulação: %d", populacaoB02);
    printf ("\nArea: %.2f", areaB02);
    printf ("\nPIB: %.2f", PIBB02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosB02);
    printf ("\nDensidade Populacional: %.2f", densidadepopB02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaB02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderB02 = (float)populacaoB02 + areaB02 + PIBB02 + (float)N_Pontos_TuristicosB02 + (100 - densidadepopB02) + PIBpercapitaB02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderB02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código B03:

    char estadoB03[20], codigoB03[3], nomeB03[25];
    int populacaoB03, N_Pontos_TuristicosB03;
    float areaB03, PIBB03;

    // Solicita ao usuário os dados das cartas Código B03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoB03);
    printf ("Nome:\n");
    scanf (" %s", &nomeB03);
    printf ("População:\n");
    scanf (" %d", &populacaoB03);
    printf ("Área:\n");
    scanf (" %f", &areaB03);
    printf ("PIB:\n");
    scanf (" %f", &PIBB03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosB03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopB03 = populacaoB03 / areaB03;
    float PIBpercapitaB03 = PIBB03 / populacaoB03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código B03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade B03: %s", nomeB03);
    printf ("\nPopulação: %d", populacaoB03);
    printf ("\nArea: %.2f", areaB03);
    printf ("\nPIB: %.2f", PIBB03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosB03);
    printf ("\nDensidade Populacional: %.2f", densidadepopB03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaB03);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderB03 = (float)populacaoB03 + areaB03 + PIBB03 + (float)N_Pontos_TuristicosB03 + (100 - densidadepopB03) + PIBpercapitaB03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderB03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código B04:

    char estadoB04[20], codigoB04[3], nomeB04[25];
    int populacaoB04, N_Pontos_TuristicosB04;
    float areaB04, PIBB04;

    // Solicita ao usuário os dados das cartas Código B04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoB04);
    printf ("Nome:\n");
    scanf (" %s", &nomeB04);
    printf ("População:\n");
    scanf (" %d", &populacaoB04);
    printf ("Área:\n");
    scanf (" %f", &areaB04);
    printf ("PIB:\n");
    scanf (" %f", &PIBB04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosB04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopB04 = populacaoB04 / areaB04;
    float PIBpercapitaB04 = PIBB04 / populacaoB04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código B04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade B04: %s", nomeB04);
    printf ("\nPopulação: %d", populacaoB04);
    printf ("\nArea: %.2f", areaB04);
    printf ("\nPIB: %.2f", PIBB04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosB04);
    printf ("\nDensidade Populacional: %.2f", densidadepopB04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaB04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderB04 = (float)populacaoB04 + areaB04 + PIBB04 + (float)N_Pontos_TuristicosB04 + (100 - densidadepopB04) + PIBpercapitaB04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderB04);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código C01:

    char estadoC01[20], codigoC01[3], nomeC01[25];
    int populacaoC01, N_Pontos_TuristicosC01;
    float areaC01, PIBC01;

    // Solicitando ao usuário os dados das cartas Código C 

    printf ("\nEntre com o nome do terceiro Estado, com Código C:\nNome Estado:\n");
    scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código C01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoC01);
    printf ("Nome:\n");
    scanf (" %s", &nomeC01);
    printf ("População:\n");
    scanf (" %d", &populacaoC01);
    printf ("Área:\n");
    scanf (" %f", &areaC01);
    printf ("PIB:\n");
    scanf (" %f", &PIBC01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosC01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopC01 = populacaoC01 / areaC01;
    float PIBpercapitaC01 = PIBC01 / populacaoC01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código C01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade C01: %s", nomeC01);
    printf ("\nPopulação: %d", populacaoC01);
    printf ("\nArea: %.2f", areaC01);
    printf ("\nPIB: %.2f", PIBC01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosC01);
    printf ("\nDensidade Populacional: %.2f", densidadepopC01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaC01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderC01 = (float)populacaoC01 + areaC01 + PIBC01 + (float)N_Pontos_TuristicosC01 + (100 - densidadepopC01) + PIBpercapitaC01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderC01);
    printf ("...\n\n\n");

     // Definindo variáveis separadas para cada atributo da cidade código C02:

    char estadoC02[20], codigoC02[3], nomeC02[25];
    int populacaoC02, N_Pontos_TuristicosC02;
    float areaC02, PIBC02;

    // Solicita ao usuário os dados das cartas Código C02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoC02);
    printf ("Nome:\n");
    scanf (" %s", &nomeC02);
    printf ("População:\n");
    scanf (" %d", &populacaoC02);
    printf ("Área:\n");
    scanf (" %f", &areaC02);
    printf ("PIB:\n");
    scanf (" %f", &PIBC02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosC02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopC02 = populacaoC02 / areaC02;
    float PIBpercapitaC02 = PIBC02 / populacaoC02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código C02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade C02: %s", nomeC02);
    printf ("\nPopulação: %d", populacaoC02);
    printf ("\nArea: %.2f", areaC02);
    printf ("\nPIB: %.2f", PIBC02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosC02);
    printf ("\nDensidade Populacional: %.2f", densidadepopC02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaC02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderC02 = (float)populacaoC02 + areaC02 + PIBC02 + (float)N_Pontos_TuristicosC02 + (100 - densidadepopC02) + PIBpercapitaC02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderC02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código C03:

    char estadoC03[20], codigoC03[3], nomeC03[25];
    int populacaoC03, N_Pontos_TuristicosC03;
    float areaC03, PIBC03;

    // Solicita ao usuário os dados das cartas Código C03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoC03);
    printf ("Nome:\n");
    scanf (" %s", &nomeC03);
    printf ("População:\n");
    scanf (" %d", &populacaoC03);
    printf ("Área:\n");
    scanf (" %f", &areaC03);
    printf ("PIB:\n");
    scanf (" %f", &PIBC03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosC03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopC03 = populacaoC03 / areaC03;
    float PIBpercapitaC03 = PIBC03 / populacaoC03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código C03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade C03: %s", nomeC03);
    printf ("\nPopulação: %d", populacaoC03);
    printf ("\nArea: %.2f", areaC03);
    printf ("\nPIB: %.2f", PIBC03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosC03);
    printf ("\nDensidade Populacional: %.2f", densidadepopC03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaC03);
    printf ("\n");
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderC03 = (float)populacaoC03 + areaC03 + PIBC03 + (float)N_Pontos_TuristicosC03 + (100 - densidadepopC03) + PIBpercapitaC03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderC03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código C04:

    char estadoC04[20], codigoC04[3], nomeC04[25];
    int populacaoC04, N_Pontos_TuristicosC04;
    float areaC04, PIBC04;

    // Solicita ao usuário os dados das cartas Código C04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoC04);
    printf ("Nome:\n");
    scanf (" %s", &nomeC04);
    printf ("População:\n");
    scanf (" %d", &populacaoC04);
    printf ("Área:\n");
    scanf (" %f", &areaC04);
    printf ("PIB:\n");
    scanf (" %f", &PIBC04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosC04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopC04 = populacaoC04 / areaC04;
    float PIBpercapitaC04 = PIBC04 / populacaoC04;


    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código C04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade C04: %s", nomeC04);
    printf ("\nPopulação: %d", populacaoC04);
    printf ("\nArea: %.2f", areaC04);
    printf ("\nPIB: %.2f", PIBC04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosC04);
    printf ("\nDensidade Populacional: %.2f", densidadepopC04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaC04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderC04 = (float)populacaoC04 + areaC04 + PIBC04 + (float)N_Pontos_TuristicosC04 + (100 - densidadepopC04) + PIBpercapitaC04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderC04);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código D01:

    char estadoD01[20], codigoD01[3], nomeD01[25];
    int populacaoD01, N_Pontos_TuristicosD01;
    float areaD01, PIBD01;

    // Solicitando ao usuário os dados das cartas Código C 

    printf ("\nEntre com o nome do terceiro Estado, com Código C:\nNome Estado:\n");
    scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código D01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoD01);
    printf ("Nome:\n");
    scanf (" %s", &nomeD01);
    printf ("População:\n");
    scanf (" %d", &populacaoD01);
    printf ("Área:\n");
    scanf (" %f", &areaD01);
    printf ("PIB:\n");
    scanf (" %f", &PIBD01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosD01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopD01 = populacaoD01 / areaD01;
    float PIBpercapitaD01 = PIBD01 / populacaoD01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código D01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade D01: %s", nomeD01);
    printf ("\nPopulação: %d", populacaoD01);
    printf ("\nArea: %.2f", areaD01);
    printf ("\nPIB: %.2f", PIBD01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosD01);
    printf ("\nDensidade Populacional: %.2f", densidadepopD01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaD01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderD01 = (float)populacaoD01 + areaD01 + PIBD01 + (float)N_Pontos_TuristicosD01 + (100 - densidadepopD01) + PIBpercapitaD01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderD01);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código D02:

    char estadoD02[20], codigoD02[3], nomeD02[25];
    int populacaoD02, N_Pontos_TuristicosD02;
    float areaD02, PIBD02;

    // Solicita ao usuário os dados das cartas Código D02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoD02);
    printf ("Nome:\n");
    scanf (" %s", &nomeD02);
    printf ("População:\n");
    scanf (" %d", &populacaoD02);
    printf ("Área:\n");
    scanf (" %f", &areaD02);
    printf ("PIB:\n");
    scanf (" %f", &PIBD02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosD02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopD02 = populacaoD02 / areaD02;
    float PIBpercapitaD02 = PIBD02 / populacaoD02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código D02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade D02: %s", nomeD02);
    printf ("\nPopulação: %d", populacaoD02);
    printf ("\nArea: %.2f", areaD02);
    printf ("\nPIB: %.2f", PIBD02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosD02);
    printf ("\nDensidade Populacional: %.2f", densidadepopD02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaD02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderD02 = (float)populacaoD02 + areaD02 + PIBD02 + (float)N_Pontos_TuristicosD02 + (100 - densidadepopD02) + PIBpercapitaD02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderD02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código D03:

    char estadoD03[20], codigoD03[3], nomeD03[25];
    int populacaoD03, N_Pontos_TuristicosD03;
    float areaD03, PIBD03;

    // Solicita ao usuário os dados das cartas Código D03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoD03);
    printf ("Nome:\n");
    scanf (" %s", &nomeD03);
    printf ("População:\n");
    scanf (" %d", &populacaoD03);
    printf ("Área:\n");
    scanf (" %f", &areaD03);
    printf ("PIB:\n");
    scanf (" %f", &PIBD03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosD03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopD03 = populacaoD03 / areaD03;
    float PIBpercapitaD03 = PIBD03 / populacaoD03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código D03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade D03: %s", nomeD03);
    printf ("\nPopulação: %d", populacaoD03);
    printf ("\nArea: %.2f", areaD03);
    printf ("\nPIB: %.2f", PIBD03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosD03);
    printf ("\nDensidade Populacional: %.2f", densidadepopD03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaD03);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderD03 = (float)populacaoD03 + areaD03 + PIBD03 + (float)N_Pontos_TuristicosD03 + (100 - densidadepopD03) + PIBpercapitaD03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderD03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código D04:

    char estadoD04[20], codigoD04[3], nomeD04[25];
    int populacaoD04, N_Pontos_TuristicosD04;
    float areaD04, PIBD04;

    // Solicita ao usuário os dados das cartas Código D04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoD04);
    printf ("Nome:\n");
    scanf (" %s", &nomeD04);
    printf ("População:\n");
    scanf (" %d", &populacaoD04);
    printf ("Área:\n");
    scanf (" %f", &areaD04);
    printf ("PIB:\n");
    scanf (" %f", &PIBD04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosD04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopD04 = populacaoD04 / areaD04;
    float PIBpercapitaD04 = PIBD04 / populacaoD04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código D04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade D04: %s", nomeD04);
    printf ("\nPopulação: %d", populacaoD04);
    printf ("\nArea: %.2f", areaD04);
    printf ("\nPIB: %.2f", PIBD04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosD04);
    printf ("\nDensidade Populacional: %.2f", densidadepopD04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaD04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderD04 = (float)populacaoD04 + areaD04 + PIBD04 + (float)N_Pontos_TuristicosD04 + (100 - densidadepopD04) + PIBpercapitaD04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderD04);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código E01:

    char estadoE01[20], codigoE01[3], nomeE01[25];
    int populacaoE01, N_Pontos_TuristicosE01;
    float areaE01, PIBE01;

    // Solicitando ao usuário os dados das cartas Código C 

    printf ("\nEntre com o nome do terceiro Estado, com Código C:\nNome Estado:\n");
    scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código E01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoE01);
    printf ("Nome:\n");
    scanf (" %s", &nomeE01);
    printf ("População:\n");
    scanf (" %d", &populacaoE01);
    printf ("Área:\n");
    scanf (" %f", &areaE01);
    printf ("PIB:\n");
    scanf (" %f", &PIBE01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosE01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopE01 = populacaoE01 / areaE01;
    float PIBpercapitaE01 = PIBE01 / populacaoE01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código E01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade E01: %s", nomeE01);
    printf ("\nPopulação: %d", populacaoE01);
    printf ("\nArea: %.2f", areaE01);
    printf ("\nPIB: %.2f", PIBE01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosE01);
    printf ("\nDensidade Populacional: %.2f", densidadepopE01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaE01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderE01 = (float)populacaoE01 + areaE01 + PIBE01 + (float)N_Pontos_TuristicosE01 + (100 - densidadepopE01) + PIBpercapitaE01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderE01);
    printf ("...\n\n\n");

     // Definindo variáveis separadas para cada atributo da cidade código E02:

    char estadoE02[20], codigoE02[3], nomeE02[25];
    int populacaoE02, N_Pontos_TuristicosE02;
    float areaE02, PIBE02;

    // Solicita ao usuário os dados das cartas Código E02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoE02);
    printf ("Nome:\n");
    scanf (" %s", &nomeE02);
    printf ("População:\n");
    scanf (" %d", &populacaoE02);
    printf ("Área:\n");
    scanf (" %f", &areaE02);
    printf ("PIB:\n");
    scanf (" %f", &PIBE02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosE02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopE02 = populacaoE02 / areaE02;
    float PIBpercapitaE02 = PIBE02 / populacaoE02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código E02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade E02: %s", nomeE02);
    printf ("\nPopulação: %d", populacaoE02);
    printf ("\nArea: %.2f", areaE02);
    printf ("\nPIB: %.2f", PIBE02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosE02);
    printf ("\nDensidade Populacional: %.2f", densidadepopE02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaE02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderE02 = (float)populacaoE02 + areaE02 + PIBE02 + (float)N_Pontos_TuristicosE02 + (100 - densidadepopE02) + PIBpercapitaE02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderE02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código E03:

    char estadoE03[20], codigoE03[3], nomeE03[25];
    int populacaoE03, N_Pontos_TuristicosE03;
    float areaE03, PIBE03;

    // Solicita ao usuário os dados das cartas Código E03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoE03);
    printf ("Nome:\n");
    scanf (" %s", &nomeE03);
    printf ("População:\n");
    scanf (" %d", &populacaoE03);
    printf ("Área:\n");
    scanf (" %f", &areaE03);
    printf ("PIB:\n");
    scanf (" %f", &PIBE03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosE03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopE03 = populacaoE03 / areaE03;
    float PIBpercapitaE03 = PIBE03 / populacaoE03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código E03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade E03: %s", nomeE03);
    printf ("\nPopulação: %d", populacaoE03);
    printf ("\nArea: %.2f", areaE03);
    printf ("\nPIB: %.2f", PIBE03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosE03);
    printf ("\nDensidade Populacional: %.2f", densidadepopE03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaE03);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderE03 = (float)populacaoE03 + areaE03 + PIBE03 + (float)N_Pontos_TuristicosE03 + (100 - densidadepopE03) + PIBpercapitaE03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderE03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código E04:

    char estadoE04[20], codigoE04[3], nomeE04[25];
    int populacaoE04, N_Pontos_TuristicosE04;
    float areaE04, PIBE04;

    // Solicita ao usuário os dados das cartas Código E04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoE04);
    printf ("Nome:\n");
    scanf (" %s", &nomeE04);
    printf ("População:\n");
    scanf (" %d", &populacaoE04);
    printf ("Área:\n");
    scanf (" %f", &areaE04);
    printf ("PIB:\n");
    scanf (" %f", &PIBE04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosE04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopE04 = populacaoE04 / areaE04;
    float PIBpercapitaE04 = PIBE04 / populacaoE04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código E04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade E04: %s", nomeE04);
    printf ("\nPopulação: %d", populacaoE04);
    printf ("\nArea: %.2f", areaE04);
    printf ("\nPIB: %.2f", PIBE04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosE04);
    printf ("\nDensidade Populacional: %.2f", densidadepopE04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaE04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderE04 = (float)populacaoE04 + areaE04 + PIBE04 + (float)N_Pontos_TuristicosE04 + (100 - densidadepopE04) + PIBpercapitaE04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderE04);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código F01:

    char estadoF01[20], codigoF01[3], nomeF01[25];
    int populacaoF01, N_Pontos_TuristicosF01;
    float areaF01, PIBF01;

    // Solicitando ao usuário os dados das cartas Código C 

    printf ("\nEntre com o nome do terceiro Estado, com Código C:\nNome Estado:\n");
    scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código F01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoF01);
    printf ("Nome:\n");
    scanf (" %s", &nomeF01);
    printf ("População:\n");
    scanf (" %d", &populacaoF01);
    printf ("Área:\n");
    scanf (" %f", &areaF01);
    printf ("PIB:\n");
    scanf (" %f", &PIBF01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosF01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopF01 = populacaoF01 / areaF01;
    float PIBpercapitaF01 = PIBF01 / populacaoF01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código F01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade F01: %s", nomeF01);
    printf ("\nPopulação: %d", populacaoF01);
    printf ("\nArea: %.2f", areaF01);
    printf ("\nPIB: %.2f", PIBF01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosF01);
    printf ("\nDensidade Populacional: %.2f", densidadepopF01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaF01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderF01 = (float)populacaoF01 + areaF01 + PIBF01 + (float)N_Pontos_TuristicosF01 + (100 - densidadepopF01) + PIBpercapitaF01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderF01);
    printf ("...\n\n\n");

     // Definindo variáveis separadas para cada atributo da cidade código F02:

    char estadoF02[20], codigoF02[3], nomeF02[25];
    int populacaoF02, N_Pontos_TuristicosF02;
    float areaF02, PIBF02;

    // Solicita ao usuário os dados das cartas Código F02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoF02);
    printf ("Nome:\n");
    scanf (" %s", &nomeF02);
    printf ("População:\n");
    scanf (" %d", &populacaoF02);
    printf ("Área:\n");
    scanf (" %f", &areaF02);
    printf ("PIB:\n");
    scanf (" %f", &PIBF02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosF02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopF02 = populacaoF02 / areaF02;
    float PIBpercapitaF02 = PIBF02 / populacaoF02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código F02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade F02: %s", nomeF02);
    printf ("\nPopulação: %d", populacaoF02);
    printf ("\nArea: %.2f", areaF02);
    printf ("\nPIB: %.2f", PIBF02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosF02);
    printf ("\nDensidade Populacional: %.2f", densidadepopF02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaF02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderF02 = (float)populacaoF02 + areaF02 + PIBF02 + (float)N_Pontos_TuristicosF02 + (100 - densidadepopF02) + PIBpercapitaF02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderF02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código F03:

    char estadoF03[20], codigoF03[3], nomeF03[25];
    int populacaoF03, N_Pontos_TuristicosF03;
    float areaF03, PIBF03;

    // Solicita ao usuário os dados das cartas Código F03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoF03);
    printf ("Nome:\n");
    scanf (" %s", &nomeF03);
    printf ("População:\n");
    scanf (" %d", &populacaoF03);
    printf ("Área:\n");
    scanf (" %f", &areaF03);
    printf ("PIB:\n");
    scanf (" %f", &PIBF03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosF03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopF03 = populacaoF03 / areaF03;
    float PIBpercapitaF03 = PIBF03 / populacaoF03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código F03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade F03: %s", nomeF03);
    printf ("\nPopulação: %d", populacaoF03);
    printf ("\nArea: %.2f", areaF03);
    printf ("\nPIB: %.2f", PIBF03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosF03);
    printf ("\nDensidade Populacional: %.2f", densidadepopF03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaF03);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderF03 = (float)populacaoF03 + areaF03 + PIBF03 + (float)N_Pontos_TuristicosF03 + (100 - densidadepopF03) + PIBpercapitaF03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderF03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código F04:

    char estadoF04[20], codigoF04[3], nomeF04[25];
    int populacaoF04, N_Pontos_TuristicosF04;
    float areaF04, PIBF04;

    // Solicita ao usuário os dados das cartas Código F04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoF04);
    printf ("Nome:\n");
    scanf (" %s", &nomeF04);
    printf ("População:\n");
    scanf (" %d", &populacaoF04);
    printf ("Área:\n");
    scanf (" %f", &areaF04);
    printf ("PIB:\n");
    scanf (" %f", &PIBF04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosF04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopF04 = populacaoF04 / areaF04;
    float PIBpercapitaF04 = PIBF04 / populacaoF04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código F04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade F04: %s", nomeF04);
    printf ("\nPopulação: %d", populacaoF04);
    printf ("\nArea: %.2f", areaF04);
    printf ("\nPIB: %.2f", PIBF04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosF04);
    printf ("\nDensidade Populacional: %.2f", densidadepopF04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaF04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderF04 = (float)populacaoF04 + areaF04 + PIBF04 + (float)N_Pontos_TuristicosF04 + (100 - densidadepopF04) + PIBpercapitaF04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderF04);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código G01:

    char estadoG01[20], codigoG01[3], nomeG01[25];
    int populacaoG01, N_Pontos_TuristicosG01;
    float areaG01, PIBG01;

    // Solicitando ao usuário os dados das cartas Código C 

    printf ("\nEntre com o nome do terceiro Estado, com Código C:\nNome Estado:\n");
    scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código G01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoG01);
    printf ("Nome:\n");
    scanf (" %s", &nomeG01);
    printf ("População:\n");
    scanf (" %d", &populacaoG01);
    printf ("Área:\n");
    scanf (" %f", &areaG01);
    printf ("PIB:\n");
    scanf (" %f", &PIBG01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosG01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopG01 = populacaoG01 / areaG01;
    float PIBpercapitaG01 = PIBG01 / populacaoG01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código G01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade G01: %s", nomeG01);
    printf ("\nPopulação: %d", populacaoG01);
    printf ("\nArea: %.2f", areaG01);
    printf ("\nPIB: %.2f", PIBG01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosG01);
    printf ("\nDensidade Populacional: %.2f", densidadepopG01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaG01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderG01 = (float)populacaoG01 + areaG01 + PIBG01 + (float)N_Pontos_TuristicosG01 + (100 - densidadepopG01) + PIBpercapitaG01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderG01);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código G02:

    char estadoG02[20], codigoG02[3], nomeG02[25];
    int populacaoG02, N_Pontos_TuristicosG02;
    float areaG02, PIBG02;

    // Solicita ao usuário os dados das cartas Código G02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoG02);
    printf ("Nome:\n");
    scanf (" %s", &nomeG02);
    printf ("População:\n");
    scanf (" %d", &populacaoG02);
    printf ("Área:\n");
    scanf (" %f", &areaG02);
    printf ("PIB:\n");
    scanf (" %f", &PIBG02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosG02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopG02 = populacaoG02 / areaG02;
    float PIBpercapitaG02 = PIBG02 / populacaoG02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código G02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade G02: %s", nomeG02);
    printf ("\nPopulação: %d", populacaoG02);
    printf ("\nArea: %.2f", areaG02);
    printf ("\nPIB: %.2f", PIBG02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosG02);
    printf ("\nDensidade Populacional: %.2f", densidadepopG02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaG02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderG02 = (float)populacaoG02 + areaG02 + PIBG02 + (float)N_Pontos_TuristicosG02 + (100 - densidadepopG02) + PIBpercapitaG02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderG02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código G03:

    char estadoG03[20], codigoG03[3], nomeG03[25];
    int populacaoG03, N_Pontos_TuristicosG03;
    float areaG03, PIBG03;

    // Solicita ao usuário os dados das cartas Código G03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoG03);
    printf ("Nome:\n");
    scanf (" %s", &nomeG03);
    printf ("População:\n");
    scanf (" %d", &populacaoG03);
    printf ("Área:\n");
    scanf (" %f", &areaG03);
    printf ("PIB:\n");
    scanf (" %f", &PIBG03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosG03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopG03 = populacaoG03 / areaG03;
    float PIBpercapitaG03 = PIBG03 / populacaoG03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código G03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade G03: %s", nomeG03);
    printf ("\nPopulação: %d", populacaoG03);
    printf ("\nArea: %.2f", areaG03);
    printf ("\nPIB: %.2f", PIBG03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosG03);
    printf ("\nDensidade Populacional: %.2f", densidadepopG03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaG03);
    printf ("\n");

    // Definindo variáveis separadas para cada atributo da cidade código G04:

    char estadoG04[20], codigoG04[3], nomeG04[25];
    int populacaoG04, N_Pontos_TuristicosG04;
    float areaG04, PIBG04;

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderG03 = (float)populacaoG03 + areaG03 + PIBG03 + (float)N_Pontos_TuristicosG03 + (100 - densidadepopG03) + PIBpercapitaG03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderG03);
    printf ("...\n\n\n");

    // Solicita ao usuário os dados das cartas Código G04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoG04);
    printf ("Nome:\n");
    scanf (" %s", &nomeG04);
    printf ("População:\n");
    scanf (" %d", &populacaoG04);
    printf ("Área:\n");
    scanf (" %f", &areaG04);
    printf ("PIB:\n");
    scanf (" %f", &PIBG04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosG04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopG04 = populacaoG04 / areaG04;
    float PIBpercapitaG04 = PIBG04 / populacaoG04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código G04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade G04: %s", nomeG04);
    printf ("\nPopulação: %d", populacaoG04);
    printf ("\nArea: %.2f", areaG04);
    printf ("\nPIB: %.2f", PIBG04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosG04);
    printf ("\nDensidade Populacional: %.2f", densidadepopG04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaG04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderG04 = (float)populacaoG04 + areaG04 + PIBG04 + (float)N_Pontos_TuristicosG04 + (100 - densidadepopG04) + PIBpercapitaG04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderG04);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código H01:

    char estadoH01[20], codigoH01[3], nomeH01[25];
    int populacaoH01, N_Pontos_TuristicosH01;
    float areaH01, PIBH01;

    // Solicitando ao usuário os dados das cartas Código C 

    printf ("\nEntre com o nome do terceiro Estado, com Código C:\nNome Estado:\n");
    scanf (" %s", &estadoA01);

    // Solicita ao usuário os dados das cartas Código H01

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoH01);
    printf ("Nome:\n");
    scanf (" %s", &nomeH01);
    printf ("População:\n");
    scanf (" %d", &populacaoH01);
    printf ("Área:\n");
    scanf (" %f", &areaH01);
    printf ("PIB:\n");
    scanf (" %f", &PIBH01);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosH01);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopH01 = populacaoH01 / areaH01;
    float PIBpercapitaH01 = PIBH01 / populacaoH01;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código H01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade H01: %s", nomeH01);
    printf ("\nPopulação: %d", populacaoH01);
    printf ("\nArea: %.2f", areaH01);
    printf ("\nPIB: %.2f", PIBH01);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosH01);
    printf ("\nDensidade Populacional: %.2f", densidadepopH01);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaH01);
    printf ("\n");
    
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderH01 = (float)populacaoH01 + areaH01 + PIBH01 + (float)N_Pontos_TuristicosH01 + (100 - densidadepopH01) + PIBpercapitaH01;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderH01);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código H02:

    char estadoH02[20], codigoH02[3], nomeH02[25];
    int populacaoH02, N_Pontos_TuristicosH02;
    float areaH02, PIBH02;

    // Solicita ao usuário os dados das cartas Código H02

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoH02);
    printf ("Nome:\n");
    scanf (" %s", &nomeH02);
    printf ("População:\n");
    scanf (" %d", &populacaoH02);
    printf ("Área:\n");
    scanf (" %f", &areaH02);
    printf ("PIB:\n");
    scanf (" %f", &PIBH02);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosH02);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopH02 = populacaoH02 / areaH02;
    float PIBpercapitaH02 = PIBH02 / populacaoH02;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código H02
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade H02: %s", nomeH02);
    printf ("\nPopulação: %d", populacaoH02);
    printf ("\nArea: %.2f", areaH02);
    printf ("\nPIB: %.2f", PIBH02);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosH02);
    printf ("\nDensidade Populacional: %.2f", densidadepopH02);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaH02);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderH02 = (float)populacaoH02 + areaH02 + PIBH02 + (float)N_Pontos_TuristicosH02 + (100 - densidadepopH02) + PIBpercapitaH02;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderH02);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código H03:

    char estadoH03[20], codigoH03[3], nomeH03[25];
    int populacaoH03, N_Pontos_TuristicosH03;
    float areaH03, PIBH03;

    // Solicita ao usuário os dados das cartas Código H03

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoH03);
    printf ("Nome:\n");
    scanf (" %s", &nomeH03);
    printf ("População:\n");
    scanf (" %d", &populacaoH03);
    printf ("Área:\n");
    scanf (" %f", &areaH03);
    printf ("PIB:\n");
    scanf (" %f", &PIBH03);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosH03);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopH03 = populacaoH03 / areaH03;
    float PIBpercapitaH03 = PIBH03 / populacaoH03;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código H03
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade H03: %s", nomeH03);
    printf ("\nPopulação: %d", populacaoH03);
    printf ("\nArea: %.2f", areaH03);
    printf ("\nPIB: %.2f", PIBH03);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosH03);
    printf ("\nDensidade Populacional: %.2f", densidadepopH03);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaH03);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderH03 = (float)populacaoH03 + areaH03 + PIBH03 + (float)N_Pontos_TuristicosH03 + (100 - densidadepopH03) + PIBpercapitaH03;
    printf ("\nSuper Poder da carta: %.2f\n\n", SuperPoderH03);
    printf ("...\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código H04:

    char estadoH04[20], codigoH04[3], nomeH04[25];
    int populacaoH04, N_Pontos_TuristicosH04;
    float areaH04, PIBH04;

    // Solicita ao usuário os dados das cartas Código H04

    printf ("\nEntre com os dados da cidade, do primeiro Estado:\nCódigo Cidade:\n");
    scanf (" %s", &codigoH04);
    printf ("Nome:\n");
    scanf (" %s", &nomeH04);
    printf ("População:\n");
    scanf (" %d", &populacaoH04);
    printf ("Área:\n");
    scanf (" %f", &areaH04);
    printf ("PIB:\n");
    scanf (" %f", &PIBH04);
    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosH04);

    // Calculando a Densidade Populacional e o PIB Per Capita

    float densidadepopH04 = populacaoH04 / areaH04;
    float PIBpercapitaH04 = PIBH04 / populacaoH04;

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código H04
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade H04: %s", nomeH04);
    printf ("\nPopulação: %d", populacaoH04);
    printf ("\nArea: %.2f", areaH04);
    printf ("\nPIB: %.2f", PIBH04);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosH04);
    printf ("\nDensidade Populacional: %.2f", densidadepopH04);
    printf ("\nPIB Per Capita: %.2f", PIBpercapitaH04);
    printf ("\n");

    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
    
    float SuperPoderH04 = (float)populacaoH04 + areaH04 + PIBH04 + (float)N_Pontos_TuristicosH04 + (100 - densidadepopH04) + PIBpercapitaH04;
    printf ("\nSuper Poder da carta: %.2f", SuperPoderH04);
    printf ("...\n\n\n");

    //Finalizando o trecho marcado como comentário desde cidade B01
    */

   /* Comparação das cartas
      A parte da comparação acontecerá da seguinte maneira:
      O sistema permitirá ao usuário comparar duas cartas, exibindo todas as propriedades de cada uma.
      O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades selecionadas.
      A propriedade de densidade populacional será considerada vencedora quando tiver o menor valor, enquanto as outras propriedades vencerão quando tiverem o maior valor.
      Cada carta terá um super poder que é a soma de todas as propriedades (população, área, PIB, PIB per capta e densidade populacional invertida para comparação e número de pontos turísticos).
      A saída da comparação será 1 ou 0, caso a relação seja verdadeira ou falsa. Se o resultado da comparação for 1, a carta 1 ganhou; se o resultado for 0, a carta 2 ganhou.
      O sistema deve imprimir o resultado das comparações para cada propriedade.
   */

    // O primeiro usuário escolhe as suas cartas e será impressa a confirmação dos dados

   printf("*** Vamos começar o Jogo***\n\n");
    int cartaescolhida1, cartaescolhida2;
    printf("Escolha uma carta pelo código (disponíveis no momento apenas: A01, A02, A03 e A04):\n");
    printf("1. Carta Código A01\n");
    printf("2. Carta Código A02\n");
    printf("3. Carta Código A03\n"); 
    printf("4. Carta Código A04\n");
    scanf("%d", &cartaescolhida1);

    switch (cartaescolhida1)
    {
    case 1:
        printf("\nA Carta escolhida foi da Cidade: %s\n", nomeA01);
        printf("População: %d\n", populacaoA01);
        printf("Área: %.2f\n", areaA01);
        printf("PIB: %.2f\n", PIBA01);
        printf("Número de Pontos Turísticos: %d\n", N_Pontos_TuristicosA01);
        printf("Densidade Populacional: %.2f\n", densidadepopA01);
        printf("PIB Per Capita: %.2f\n", PIBpercapitaA01);
        break;
    case 2:
        printf("\nA Carta escolhida foi da Cidade: %s\n", nomeA02);
        printf("População: %d\n", populacaoA02);
        printf("Área: %.2f\n", areaA02);
        printf("PIB: %.2f\n", PIBA02);
        printf("Número de Pontos Turísticos: %d\n", N_Pontos_TuristicosA02);
        printf("Densidade Populacional: %.2f\n", densidadepopA02);
        printf("PIB Per Capita: %.2f\n", PIBpercapitaA02);
        break;
    case 3:
        printf("\nA Carta escolhida foi da Cidade: %s\n", nomeA03);
        printf("População: %d\n", populacaoA03);
        printf("Área: %.2f\n", areaA03);
        printf("PIB: %.2f\n", PIBA03);
        printf("Número de Pontos Turísticos: %d\n", N_Pontos_TuristicosA03);
        printf("Densidade Populacional: %.2f\n", densidadepopA03);
        printf("PIB Per Capita: %.2f\n", PIBpercapitaA03);
        break;
    case 4:
        printf("\nA Carta escolhida foi da Cidade: %s\n", nomeA04);
        printf("População: %d\n", populacaoA04);
        printf("Área: %.2f\n", areaA04);
        printf("PIB: %.2f\n", PIBA04);
        printf("Número de Pontos Turísticos: %d\n", N_Pontos_TuristicosA04);
        printf("Densidade Populacional: %.2f\n", densidadepopA04);
        printf("PIB Per Capita: %.2f\n", PIBpercapitaA04);
        break;
    default:
        printf("Opção inválida");
        break;
    }
    
    // O segundo usuário escolhe sua carta e não haverá a impressão com a confirmação dos dados neste momento
    printf("\n\nO segundo usuário pode agora escolher a sua carta:\n");
    printf("Escolha uma carta diferente do primeiro usuário, também pelo código (disponíveis no momento apenas: A0... :\n");
    printf("1. Carta Código A01\n");
    printf("2. Carta Código A02\n");
    printf("3. Carta Código A03\n"); 
    printf("4. Carta Código A04\n");
    scanf("%d", &cartaescolhida2);
    
    // verifica se a escolha do segundo usuário não é idêntica à do primeiro
    if (cartaescolhida2 == cartaescolhida1) {
        printf("Você não pode escolher a mesma carta do usuário anterior. Faça uma nova escolha diferente:\n");
        scanf("%s", &cartaescolhida2);
    } 

    // O primeiro usuário escolhe o atributo desejado e é efetuada a comparação das cartas, determinando o vencedor

    int atributoescolhido1, atributoescolhido2;
    printf("\n\n\nPrimeiro Jogador, escolha 02 atributos da sua carta para iniciar a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n"); 
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional (ganha o menor)\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder (somatório de todos os dados\n");
    scanf("%d", &atributoescolhido1);
    scanf("%d", &atributoescolhido2);

    // Comparação das cartas com base no atributo 01 escolhido

    switch (atributoescolhido1) {
case 1: // População
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (populacaoA01 > populacaoA02) ? printf("A carta A01 venceu com a População de %d contra %d da carta A02\n", populacaoA01, populacaoA02) 
            : (populacaoA01 < populacaoA02) ? printf("A carta A02 venceu com a População de %d contra %d da carta A01\n", populacaoA02, populacaoA01) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (populacaoA01 > populacaoA03) ? printf("A carta A01 venceu com a População de %d contra %d da carta A03\n", populacaoA01, populacaoA03) 
            : (populacaoA01 < populacaoA03) ? printf("A carta A03 venceu com a População de %d contra %d da carta A01\n", populacaoA03, populacaoA01) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (populacaoA01 > populacaoA04) ? printf("A carta A01 venceu com a População de %d contra %d da carta A04\n", populacaoA01, populacaoA04) 
            : (populacaoA01 < populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A01\n", populacaoA04, populacaoA01) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (populacaoA02 > populacaoA01) ? printf("A carta A02 venceu com a População de %d contra %d da carta A01\n", populacaoA02, populacaoA01) 
            : (populacaoA02 < populacaoA01) ? printf("A carta A01 venceu com a População de %d contra %d da carta A02\n", populacaoA01, populacaoA02) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (populacaoA02 > populacaoA03) ? printf("A carta A02 venceu com a População de %d contra %d da carta A03\n", populacaoA02, populacaoA03) 
            : (populacaoA02 < populacaoA03) ? printf("A carta A03 venceu com a População de %d contra %d da carta A02\n", populacaoA03, populacaoA02) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (populacaoA02 > populacaoA04) ? printf("A carta A02 venceu com a População de %d contra %d da carta A04\n", populacaoA02, populacaoA04) 
            : (populacaoA02 < populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A02\n", populacaoA04, populacaoA02) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (populacaoA03 > populacaoA01) ? printf("A carta A03 venceu com a População de %d contra %d da carta A01\n", populacaoA03, populacaoA01) 
            : (populacaoA03 < populacaoA01) ? printf("A carta A01 venceu com a População de %d contra %d da carta A03\n", populacaoA01, populacaoA03) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (populacaoA03 > populacaoA02) ? printf("A carta A03 venceu com a População de %d contra %d da carta A02\n", populacaoA03, populacaoA02) 
            : (populacaoA03 < populacaoA02) ? printf("A carta A02 venceu com a População de %d contra %d da carta A03\n", populacaoA02, populacaoA03) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (populacaoA03 > populacaoA04) ? printf("A carta A03 venceu com a População de %d contra %d da carta A04\n", populacaoA03, populacaoA04) 
            : (populacaoA03 < populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A03\n", populacaoA04, populacaoA03) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (populacaoA04 > populacaoA01) ? printf("A carta A04 venceu com a População de %d contra %d da carta A01\n", populacaoA04, populacaoA01) 
            : (populacaoA04 < populacaoA01) ? printf("A carta A01 venceu com a População de %d contra %d da carta A04\n", populacaoA01, populacaoA04) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (populacaoA04 > populacaoA02) ? printf("A carta A04 venceu com a População de %d contra %d da carta A02\n", populacaoA04, populacaoA02) 
            : (populacaoA04 < populacaoA02) ? printf("A carta A02 venceu com a População de %d contra %d da carta A04\n", populacaoA02, populacaoA04) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (populacaoA04 > populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A03\n", populacaoA04, populacaoA03) 
            : (populacaoA04 < populacaoA03) ? printf("A carta A03 venceu com a População de %d contra %d da carta A04\n", populacaoA03, populacaoA04) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 2: // Área
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (areaA01 > areaA02) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA01, areaA02) 
            : (areaA01 < areaA02) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA02, areaA01) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (areaA01 > areaA03) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA01, areaA03) 
            : (areaA01 < areaA03) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA03, areaA01) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (areaA01 > areaA04) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA01, areaA04) 
            : (areaA01 < areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA04, areaA01) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (areaA02 > areaA01) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA02, areaA01) 
            : (areaA02 < areaA01) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA01, areaA02) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (areaA02 > areaA03) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA02, areaA03) 
            : (areaA02 < areaA03) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA03, areaA02) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (areaA02 > areaA04) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA02, areaA04) 
            : (areaA02 < areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA04, areaA02) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (areaA03 > areaA01) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA03, areaA01) 
            : (areaA03 < areaA01) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA01, areaA03) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (areaA03 > areaA02) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA03, areaA02) 
            : (areaA03 < areaA02) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA02, areaA03) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (areaA03 > areaA04) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA03, areaA04) 
            : (areaA03 < areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA04, areaA03) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (areaA04 > areaA01) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA04, areaA01) 
            : (areaA04 < areaA01) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA01, areaA04) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (areaA04 > areaA02) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA04, areaA02) 
            : (areaA04 < areaA02) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA02, areaA04) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (areaA04 > areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA04, areaA03) 
            : (areaA04 < areaA03) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA03, areaA04) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 3: // P.I.B.
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (PIBA01 > PIBA02) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA01, PIBA02) 
            : (PIBA01 < PIBA02) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA02, PIBA01) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (PIBA01 > PIBA03) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA01, PIBA03) 
            : (PIBA01 < PIBA03) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA03, PIBA01) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (PIBA01 > PIBA04) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA01, PIBA04) 
            : (PIBA01 < PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA04, PIBA01) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (PIBA02 > PIBA01) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA02, PIBA01) 
            : (PIBA02 < PIBA01) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA01, PIBA02) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (PIBA02 > PIBA03) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA02, PIBA03) 
            : (PIBA02 < PIBA03) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA03, PIBA02) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (PIBA02 > PIBA04) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA02, PIBA04) 
            : (PIBA02 < PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA04, PIBA02) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (PIBA03 > PIBA01) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA03, PIBA01) 
            : (PIBA03 < PIBA01) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA01, PIBA03) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (PIBA03 > PIBA02) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA03, PIBA02) 
            : (PIBA03 < PIBA02) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA02, PIBA03) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (PIBA03 > PIBA04) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA03, PIBA04) 
            : (PIBA03 < PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA04, PIBA03) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (PIBA04 > PIBA01) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA04, PIBA01) 
            : (PIBA04 < PIBA01) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA01, PIBA04) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (PIBA04 > PIBA02) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA04, PIBA02) 
            : (PIBA04 < PIBA02) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA02, PIBA04) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (PIBA04 > PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA04, PIBA03) 
            : (PIBA04 < PIBA03) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA03, PIBA04) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 4: // Número de Pontos Turísticos
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (N_Pontos_TuristicosA01 > N_Pontos_TuristicosA02) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA02) 
            : (N_Pontos_TuristicosA01 < N_Pontos_TuristicosA02) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (N_Pontos_TuristicosA01 > N_Pontos_TuristicosA03) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA03) 
            : (N_Pontos_TuristicosA01 < N_Pontos_TuristicosA03) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (N_Pontos_TuristicosA01 > N_Pontos_TuristicosA04) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA04) 
            : (N_Pontos_TuristicosA01 < N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (N_Pontos_TuristicosA02 > N_Pontos_TuristicosA01) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA01) 
            : (N_Pontos_TuristicosA02 < N_Pontos_TuristicosA01) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (N_Pontos_TuristicosA02 > N_Pontos_TuristicosA03) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA03) 
            : (N_Pontos_TuristicosA02 < N_Pontos_TuristicosA03) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (N_Pontos_TuristicosA02 > N_Pontos_TuristicosA04) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA04) 
            : (N_Pontos_TuristicosA02 < N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (N_Pontos_TuristicosA03 > N_Pontos_TuristicosA01) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA01) 
            : (N_Pontos_TuristicosA03 < N_Pontos_TuristicosA01) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (N_Pontos_TuristicosA03 > N_Pontos_TuristicosA02) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA02) 
            : (N_Pontos_TuristicosA03 < N_Pontos_TuristicosA02) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (N_Pontos_TuristicosA03 > N_Pontos_TuristicosA04) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA04) 
            : (N_Pontos_TuristicosA03 < N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (N_Pontos_TuristicosA04 > N_Pontos_TuristicosA01) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA01) 
            : (N_Pontos_TuristicosA04 < N_Pontos_TuristicosA01) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (N_Pontos_TuristicosA04 > N_Pontos_TuristicosA02) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA02) 
            : (N_Pontos_TuristicosA04 < N_Pontos_TuristicosA02) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (N_Pontos_TuristicosA04 > N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA03) 
            : (N_Pontos_TuristicosA04 < N_Pontos_TuristicosA03) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 5: // Densidade Populacional
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (densidadepopA01 < densidadepopA02) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA01, densidadepopA02) 
            : (densidadepopA01 > densidadepopA02) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA02, densidadepopA01) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (densidadepopA01 < densidadepopA03) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA01, densidadepopA03) 
            : (densidadepopA01 > densidadepopA03) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA03, densidadepopA01) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (densidadepopA01 < densidadepopA04) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA01, densidadepopA04) 
            : (densidadepopA01 > densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA04, densidadepopA01) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (densidadepopA02 < densidadepopA01) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA02, densidadepopA01) 
            : (densidadepopA02 > densidadepopA01) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA01, densidadepopA02) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (densidadepopA02 < densidadepopA03) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA02, densidadepopA03) 
            : (densidadepopA02 > densidadepopA03) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA03, densidadepopA02) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (densidadepopA02 < densidadepopA04) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA02, densidadepopA04) 
            : (densidadepopA02 > densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA04, densidadepopA02) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (densidadepopA03 < densidadepopA01) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA03, densidadepopA01) 
            : (densidadepopA03 > densidadepopA01) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA01, densidadepopA03) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (densidadepopA03 < densidadepopA02) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA03, densidadepopA02) 
            : (densidadepopA03 > densidadepopA02) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA02, densidadepopA03) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (densidadepopA03 < densidadepopA04) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA03, densidadepopA04) 
            : (densidadepopA03 > densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA04, densidadepopA03) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (densidadepopA04 < densidadepopA01) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA04, densidadepopA01) 
            : (densidadepopA04 > densidadepopA01) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA01, densidadepopA04) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (densidadepopA04 < densidadepopA02) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA04, densidadepopA02) 
            : (densidadepopA04 > densidadepopA02) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA02, densidadepopA04) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (densidadepopA04 < densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA04, densidadepopA03) 
            : (densidadepopA04 > densidadepopA03) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA03, densidadepopA04) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 6: // PIB Per Capita
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (PIBpercapitaA01 > PIBpercapitaA02) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA01, PIBpercapitaA02) 
            : (PIBpercapitaA01 < PIBpercapitaA02) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA02, PIBpercapitaA01) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (PIBpercapitaA01 > PIBpercapitaA03) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA01, PIBpercapitaA03) 
            : (PIBpercapitaA01 < PIBpercapitaA03) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA03, PIBpercapitaA01) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (PIBpercapitaA01 > PIBpercapitaA04) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA01, PIBpercapitaA04) 
            : (PIBpercapitaA01 < PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA04, PIBpercapitaA01) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (PIBpercapitaA02 > PIBpercapitaA01) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA02, PIBpercapitaA01) 
            : (PIBpercapitaA02 < PIBpercapitaA01) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA01, PIBpercapitaA02) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (PIBpercapitaA02 > PIBpercapitaA03) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA02, PIBpercapitaA03) 
            : (PIBpercapitaA02 < PIBpercapitaA03) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA03, PIBpercapitaA02) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (PIBpercapitaA02 > PIBpercapitaA04) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA02, PIBpercapitaA04) 
            : (PIBpercapitaA02 < PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA04, PIBpercapitaA02) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (PIBpercapitaA03 > PIBpercapitaA01) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA03, PIBpercapitaA01) 
            : (PIBpercapitaA03 < PIBpercapitaA01) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA01, PIBpercapitaA03) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (PIBpercapitaA03 > PIBpercapitaA02) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA03, PIBpercapitaA02) 
            : (PIBpercapitaA03 < PIBpercapitaA02) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA02, PIBpercapitaA03) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (PIBpercapitaA03 > PIBpercapitaA04) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA03, PIBpercapitaA04) 
            : (PIBpercapitaA03 < PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA04, PIBpercapitaA03) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (PIBpercapitaA04 > PIBpercapitaA01) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA04, PIBpercapitaA01) 
            : (PIBpercapitaA04 < PIBpercapitaA01) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA01, PIBpercapitaA04) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (PIBpercapitaA04 > PIBpercapitaA02) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA04, PIBpercapitaA02) 
            : (PIBpercapitaA04 < PIBpercapitaA02) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA02, PIBpercapitaA04) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (PIBpercapitaA04 > PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA04, PIBpercapitaA03) 
            : (PIBpercapitaA04 < PIBpercapitaA03) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA03, PIBpercapitaA04) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 7: // Super Poder
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (SuperPoderA01 > SuperPoderA02) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA01, SuperPoderA02) 
            : (SuperPoderA01 < SuperPoderA02) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA02, SuperPoderA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (SuperPoderA01 > SuperPoderA03) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA01, SuperPoderA03) 
            : (SuperPoderA01 < SuperPoderA03) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA03, SuperPoderA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (SuperPoderA01 > SuperPoderA04) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA01, SuperPoderA04) 
            : (SuperPoderA01 < SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA04, SuperPoderA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (SuperPoderA02 > SuperPoderA01) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA02, SuperPoderA01) 
            : (SuperPoderA02 < SuperPoderA01) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA01, SuperPoderA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (SuperPoderA02 > SuperPoderA03) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA02, SuperPoderA03) 
            : (SuperPoderA02 < SuperPoderA03) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA03, SuperPoderA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (SuperPoderA02 > SuperPoderA04) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA02, SuperPoderA04) 
            : (SuperPoderA02 < SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA04, SuperPoderA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (SuperPoderA03 > SuperPoderA01) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA03, SuperPoderA01) 
            : (SuperPoderA03 < SuperPoderA01) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA01, SuperPoderA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (SuperPoderA03 > SuperPoderA02) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA03, SuperPoderA02) 
            : (SuperPoderA03 < SuperPoderA02) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA02, SuperPoderA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (SuperPoderA03 > SuperPoderA04) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA03, SuperPoderA04) 
            : (SuperPoderA03 < SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA04, SuperPoderA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (SuperPoderA04 > SuperPoderA01) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA04, SuperPoderA01) 
            : (SuperPoderA04 < SuperPoderA01) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA01, SuperPoderA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (SuperPoderA04 > SuperPoderA02) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA04, SuperPoderA02) 
            : (SuperPoderA04 < SuperPoderA02) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA02, SuperPoderA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (SuperPoderA04 > SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA04, SuperPoderA03) 
            : (SuperPoderA04 < SuperPoderA03) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA03, SuperPoderA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA04);
	}
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

    default:
        printf("Atributo inválido\n");
        break;  
    }

// Comparação das cartas com base no atributo 02 escolhido

switch (atributoescolhido2) {
case 1: // População
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (populacaoA01 > populacaoA02) ? printf("A carta A01 venceu com a População de %d contra %d da carta A02\n", populacaoA01, populacaoA02) 
            : (populacaoA01 < populacaoA02) ? printf("A carta A02 venceu com a População de %d contra %d da carta A01\n", populacaoA02, populacaoA01) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (populacaoA01 > populacaoA03) ? printf("A carta A01 venceu com a População de %d contra %d da carta A03\n", populacaoA01, populacaoA03) 
            : (populacaoA01 < populacaoA03) ? printf("A carta A03 venceu com a População de %d contra %d da carta A01\n", populacaoA03, populacaoA01) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (populacaoA01 > populacaoA04) ? printf("A carta A01 venceu com a População de %d contra %d da carta A04\n", populacaoA01, populacaoA04) 
            : (populacaoA01 < populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A01\n", populacaoA04, populacaoA01) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (populacaoA02 > populacaoA01) ? printf("A carta A02 venceu com a População de %d contra %d da carta A01\n", populacaoA02, populacaoA01) 
            : (populacaoA02 < populacaoA01) ? printf("A carta A01 venceu com a População de %d contra %d da carta A02\n", populacaoA01, populacaoA02) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (populacaoA02 > populacaoA03) ? printf("A carta A02 venceu com a População de %d contra %d da carta A03\n", populacaoA02, populacaoA03) 
            : (populacaoA02 < populacaoA03) ? printf("A carta A03 venceu com a População de %d contra %d da carta A02\n", populacaoA03, populacaoA02) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (populacaoA02 > populacaoA04) ? printf("A carta A02 venceu com a População de %d contra %d da carta A04\n", populacaoA02, populacaoA04) 
            : (populacaoA02 < populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A02\n", populacaoA04, populacaoA02) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (populacaoA03 > populacaoA01) ? printf("A carta A03 venceu com a População de %d contra %d da carta A01\n", populacaoA03, populacaoA01) 
            : (populacaoA03 < populacaoA01) ? printf("A carta A01 venceu com a População de %d contra %d da carta A03\n", populacaoA01, populacaoA03) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (populacaoA03 > populacaoA02) ? printf("A carta A03 venceu com a População de %d contra %d da carta A02\n", populacaoA03, populacaoA02) 
            : (populacaoA03 < populacaoA02) ? printf("A carta A02 venceu com a População de %d contra %d da carta A03\n", populacaoA02, populacaoA03) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (populacaoA03 > populacaoA04) ? printf("A carta A03 venceu com a População de %d contra %d da carta A04\n", populacaoA03, populacaoA04) 
            : (populacaoA03 < populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A03\n", populacaoA04, populacaoA03) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (populacaoA04 > populacaoA01) ? printf("A carta A04 venceu com a População de %d contra %d da carta A01\n", populacaoA04, populacaoA01) 
            : (populacaoA04 < populacaoA01) ? printf("A carta A01 venceu com a População de %d contra %d da carta A04\n", populacaoA01, populacaoA04) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (populacaoA04 > populacaoA02) ? printf("A carta A04 venceu com a População de %d contra %d da carta A02\n", populacaoA04, populacaoA02) 
            : (populacaoA04 < populacaoA02) ? printf("A carta A02 venceu com a População de %d contra %d da carta A04\n", populacaoA02, populacaoA04) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (populacaoA04 > populacaoA04) ? printf("A carta A04 venceu com a População de %d contra %d da carta A03\n", populacaoA04, populacaoA03) 
            : (populacaoA04 < populacaoA03) ? printf("A carta A03 venceu com a População de %d contra %d da carta A04\n", populacaoA03, populacaoA04) 
            : printf("Empate! Ambas as cartas têm a mesma População de %d\n", populacaoA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 2: // Área
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (areaA01 > areaA02) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA01, areaA02) 
            : (areaA01 < areaA02) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA02, areaA01) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (areaA01 > areaA03) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA01, areaA03) 
            : (areaA01 < areaA03) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA03, areaA01) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (areaA01 > areaA04) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA01, areaA04) 
            : (areaA01 < areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA04, areaA01) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (areaA02 > areaA01) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA02, areaA01) 
            : (areaA02 < areaA01) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA01, areaA02) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (areaA02 > areaA03) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA02, areaA03) 
            : (areaA02 < areaA03) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA03, areaA02) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (areaA02 > areaA04) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA02, areaA04) 
            : (areaA02 < areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA04, areaA02) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (areaA03 > areaA01) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA03, areaA01) 
            : (areaA03 < areaA01) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA01, areaA03) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (areaA03 > areaA02) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA03, areaA02) 
            : (areaA03 < areaA02) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA02, areaA03) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (areaA03 > areaA04) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA03, areaA04) 
            : (areaA03 < areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA04, areaA03) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (areaA04 > areaA01) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A01\n", areaA04, areaA01) 
            : (areaA04 < areaA01) ? printf("A carta A01 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA01, areaA04) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (areaA04 > areaA02) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A02\n", areaA04, areaA02) 
            : (areaA04 < areaA02) ? printf("A carta A02 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA02, areaA04) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (areaA04 > areaA04) ? printf("A carta A04 venceu com a Área de %.2f contra %.2f da carta A03\n", areaA04, areaA03) 
            : (areaA04 < areaA03) ? printf("A carta A03 venceu com a Área de %.2f contra %.2f da carta A04\n", areaA03, areaA04) 
            : printf("Empate! Ambas as cartas têm a mesma Área de %.2f\n", areaA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 3: // P.I.B.
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (PIBA01 > PIBA02) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA01, PIBA02) 
            : (PIBA01 < PIBA02) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA02, PIBA01) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (PIBA01 > PIBA03) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA01, PIBA03) 
            : (PIBA01 < PIBA03) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA03, PIBA01) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (PIBA01 > PIBA04) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA01, PIBA04) 
            : (PIBA01 < PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA04, PIBA01) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (PIBA02 > PIBA01) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA02, PIBA01) 
            : (PIBA02 < PIBA01) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA01, PIBA02) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (PIBA02 > PIBA03) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA02, PIBA03) 
            : (PIBA02 < PIBA03) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA03, PIBA02) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (PIBA02 > PIBA04) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA02, PIBA04) 
            : (PIBA02 < PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA04, PIBA02) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (PIBA03 > PIBA01) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA03, PIBA01) 
            : (PIBA03 < PIBA01) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA01, PIBA03) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (PIBA03 > PIBA02) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA03, PIBA02) 
            : (PIBA03 < PIBA02) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA02, PIBA03) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (PIBA03 > PIBA04) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA03, PIBA04) 
            : (PIBA03 < PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA04, PIBA03) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (PIBA04 > PIBA01) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A01\n", PIBA04, PIBA01) 
            : (PIBA04 < PIBA01) ? printf("A carta A01 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA01, PIBA04) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (PIBA04 > PIBA02) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A02\n", PIBA04, PIBA02) 
            : (PIBA04 < PIBA02) ? printf("A carta A02 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA02, PIBA04) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (PIBA04 > PIBA04) ? printf("A carta A04 venceu com o P.I.B. de %.2f contra %.2f da carta A03\n", PIBA04, PIBA03) 
            : (PIBA04 < PIBA03) ? printf("A carta A03 venceu com o P.I.B. de %.2f contra %.2f da carta A04\n", PIBA03, PIBA04) 
            : printf("Empate! Ambas as cartas têm o mesmo P.I.B. de %.2f\n", PIBA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 4: // Número de Pontos Turísticos
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (N_Pontos_TuristicosA01 > N_Pontos_TuristicosA02) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA02) 
            : (N_Pontos_TuristicosA01 < N_Pontos_TuristicosA02) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (N_Pontos_TuristicosA01 > N_Pontos_TuristicosA03) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA03) 
            : (N_Pontos_TuristicosA01 < N_Pontos_TuristicosA03) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (N_Pontos_TuristicosA01 > N_Pontos_TuristicosA04) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA04) 
            : (N_Pontos_TuristicosA01 < N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (N_Pontos_TuristicosA02 > N_Pontos_TuristicosA01) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA01) 
            : (N_Pontos_TuristicosA02 < N_Pontos_TuristicosA01) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (N_Pontos_TuristicosA02 > N_Pontos_TuristicosA03) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA03) 
            : (N_Pontos_TuristicosA02 < N_Pontos_TuristicosA03) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (N_Pontos_TuristicosA02 > N_Pontos_TuristicosA04) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA04) 
            : (N_Pontos_TuristicosA02 < N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (N_Pontos_TuristicosA03 > N_Pontos_TuristicosA01) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA01) 
            : (N_Pontos_TuristicosA03 < N_Pontos_TuristicosA01) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (N_Pontos_TuristicosA03 > N_Pontos_TuristicosA02) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA02) 
            : (N_Pontos_TuristicosA03 < N_Pontos_TuristicosA02) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (N_Pontos_TuristicosA03 > N_Pontos_TuristicosA04) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA04) 
            : (N_Pontos_TuristicosA03 < N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (N_Pontos_TuristicosA04 > N_Pontos_TuristicosA01) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A01\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA01) 
            : (N_Pontos_TuristicosA04 < N_Pontos_TuristicosA01) ? printf("A carta A01 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA01, N_Pontos_TuristicosA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (N_Pontos_TuristicosA04 > N_Pontos_TuristicosA02) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A02\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA02) 
            : (N_Pontos_TuristicosA04 < N_Pontos_TuristicosA02) ? printf("A carta A02 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA02, N_Pontos_TuristicosA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (N_Pontos_TuristicosA04 > N_Pontos_TuristicosA04) ? printf("A carta A04 venceu com o Número de Pontos Turísticos de %d contra %d da carta A03\n", N_Pontos_TuristicosA04, N_Pontos_TuristicosA03) 
            : (N_Pontos_TuristicosA04 < N_Pontos_TuristicosA03) ? printf("A carta A03 venceu com o Número de Pontos Turísticos de %d contra %d da carta A04\n", N_Pontos_TuristicosA03, N_Pontos_TuristicosA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Número de Pontos Turísticos de %d\n", N_Pontos_TuristicosA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 5: // Densidade Populacional
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (densidadepopA01 < densidadepopA02) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA01, densidadepopA02) 
            : (densidadepopA01 > densidadepopA02) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA02, densidadepopA01) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (densidadepopA01 < densidadepopA03) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA01, densidadepopA03) 
            : (densidadepopA01 > densidadepopA03) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA03, densidadepopA01) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (densidadepopA01 < densidadepopA04) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA01, densidadepopA04) 
            : (densidadepopA01 > densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA04, densidadepopA01) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (densidadepopA02 < densidadepopA01) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA02, densidadepopA01) 
            : (densidadepopA02 > densidadepopA01) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA01, densidadepopA02) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (densidadepopA02 < densidadepopA03) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA02, densidadepopA03) 
            : (densidadepopA02 > densidadepopA03) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA03, densidadepopA02) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (densidadepopA02 < densidadepopA04) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA02, densidadepopA04) 
            : (densidadepopA02 > densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA04, densidadepopA02) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (densidadepopA03 < densidadepopA01) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA03, densidadepopA01) 
            : (densidadepopA03 > densidadepopA01) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA01, densidadepopA03) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (densidadepopA03 < densidadepopA02) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA03, densidadepopA02) 
            : (densidadepopA03 > densidadepopA02) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA02, densidadepopA03) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (densidadepopA03 < densidadepopA04) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA03, densidadepopA04) 
            : (densidadepopA03 > densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA04, densidadepopA03) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (densidadepopA04 < densidadepopA01) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A01\n", densidadepopA04, densidadepopA01) 
            : (densidadepopA04 > densidadepopA01) ? printf("A carta A01 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA01, densidadepopA04) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (densidadepopA04 < densidadepopA02) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A02\n", densidadepopA04, densidadepopA02) 
            : (densidadepopA04 > densidadepopA02) ? printf("A carta A02 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA02, densidadepopA04) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (densidadepopA04 < densidadepopA04) ? printf("A carta A04 venceu com a Densidade Populacional de %.2f contra %.2f da carta A03\n", densidadepopA04, densidadepopA03) 
            : (densidadepopA04 > densidadepopA03) ? printf("A carta A03 venceu com a Densidade Populacional de %.2f contra %.2f da carta A04\n", densidadepopA03, densidadepopA04) 
            : printf("Empate! Ambas as cartas têm a mesma Densidade Populacional de %.2f\n", densidadepopA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 6: // PIB Per Capita
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (PIBpercapitaA01 > PIBpercapitaA02) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA01, PIBpercapitaA02) 
            : (PIBpercapitaA01 < PIBpercapitaA02) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA02, PIBpercapitaA01) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (PIBpercapitaA01 > PIBpercapitaA03) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA01, PIBpercapitaA03) 
            : (PIBpercapitaA01 < PIBpercapitaA03) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA03, PIBpercapitaA01) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (PIBpercapitaA01 > PIBpercapitaA04) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA01, PIBpercapitaA04) 
            : (PIBpercapitaA01 < PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA04, PIBpercapitaA01) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (PIBpercapitaA02 > PIBpercapitaA01) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA02, PIBpercapitaA01) 
            : (PIBpercapitaA02 < PIBpercapitaA01) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA01, PIBpercapitaA02) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (PIBpercapitaA02 > PIBpercapitaA03) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA02, PIBpercapitaA03) 
            : (PIBpercapitaA02 < PIBpercapitaA03) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA03, PIBpercapitaA02) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (PIBpercapitaA02 > PIBpercapitaA04) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA02, PIBpercapitaA04) 
            : (PIBpercapitaA02 < PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA04, PIBpercapitaA02) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (PIBpercapitaA03 > PIBpercapitaA01) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA03, PIBpercapitaA01) 
            : (PIBpercapitaA03 < PIBpercapitaA01) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA01, PIBpercapitaA03) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (PIBpercapitaA03 > PIBpercapitaA02) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA03, PIBpercapitaA02) 
            : (PIBpercapitaA03 < PIBpercapitaA02) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA02, PIBpercapitaA03) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (PIBpercapitaA03 > PIBpercapitaA04) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA03, PIBpercapitaA04) 
            : (PIBpercapitaA03 < PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA04, PIBpercapitaA03) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (PIBpercapitaA04 > PIBpercapitaA01) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A01\n", PIBpercapitaA04, PIBpercapitaA01) 
            : (PIBpercapitaA04 < PIBpercapitaA01) ? printf("A carta A01 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA01, PIBpercapitaA04) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (PIBpercapitaA04 > PIBpercapitaA02) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A02\n", PIBpercapitaA04, PIBpercapitaA02) 
            : (PIBpercapitaA04 < PIBpercapitaA02) ? printf("A carta A02 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA02, PIBpercapitaA04) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (PIBpercapitaA04 > PIBpercapitaA04) ? printf("A carta A04 venceu com o PIB Per Capita de %.2f contra %.2f da carta A03\n", PIBpercapitaA04, PIBpercapitaA03) 
            : (PIBpercapitaA04 < PIBpercapitaA03) ? printf("A carta A03 venceu com o PIB Per Capita de %.2f contra %.2f da carta A04\n", PIBpercapitaA03, PIBpercapitaA04) 
            : printf("Empate! Ambas as cartas têm o mesmo PIB Per Capita de %.2f\n", PIBpercapitaA04);
    } 
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

case 7: // Super Poder
    if (cartaescolhida1 == 1 && cartaescolhida2 == 2) {
        (SuperPoderA01 > SuperPoderA02) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA01, SuperPoderA02) 
            : (SuperPoderA01 < SuperPoderA02) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA02, SuperPoderA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 3) {
        (SuperPoderA01 > SuperPoderA03) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA01, SuperPoderA03) 
            : (SuperPoderA01 < SuperPoderA03) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA03, SuperPoderA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA01);
    } else if (cartaescolhida1 == 1 && cartaescolhida2 == 4) {
        (SuperPoderA01 > SuperPoderA04) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA01, SuperPoderA04) 
            : (SuperPoderA01 < SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA04, SuperPoderA01) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA01);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 1) {
        (SuperPoderA02 > SuperPoderA01) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA02, SuperPoderA01) 
            : (SuperPoderA02 < SuperPoderA01) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA01, SuperPoderA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 3) {
        (SuperPoderA02 > SuperPoderA03) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA02, SuperPoderA03) 
            : (SuperPoderA02 < SuperPoderA03) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA03, SuperPoderA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA02);
    } else if (cartaescolhida1 == 2 && cartaescolhida2 == 4) {
        (SuperPoderA02 > SuperPoderA04) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA02, SuperPoderA04) 
            : (SuperPoderA02 < SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA04, SuperPoderA02) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA02);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 1) {
        (SuperPoderA03 > SuperPoderA01) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA03, SuperPoderA01) 
            : (SuperPoderA03 < SuperPoderA01) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA01, SuperPoderA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 2) {
        (SuperPoderA03 > SuperPoderA02) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA03, SuperPoderA02) 
            : (SuperPoderA03 < SuperPoderA02) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA02, SuperPoderA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA03);
    } else if (cartaescolhida1 == 3 && cartaescolhida2 == 4) {
        (SuperPoderA03 > SuperPoderA04) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA03, SuperPoderA04) 
            : (SuperPoderA03 < SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA04, SuperPoderA03) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA03);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 1) {
        (SuperPoderA04 > SuperPoderA01) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A01\n", SuperPoderA04, SuperPoderA01) 
            : (SuperPoderA04 < SuperPoderA01) ? printf("A carta A01 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA01, SuperPoderA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 2) {
        (SuperPoderA04 > SuperPoderA02) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A02\n", SuperPoderA04, SuperPoderA02) 
            : (SuperPoderA04 < SuperPoderA02) ? printf("A carta A02 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA02, SuperPoderA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA04);
    } else if (cartaescolhida1 == 4 && cartaescolhida2 == 3) {
        (SuperPoderA04 > SuperPoderA04) ? printf("A carta A04 venceu com o Super Poder de %.2f contra %.2f da carta A03\n", SuperPoderA04, SuperPoderA03) 
            : (SuperPoderA04 < SuperPoderA03) ? printf("A carta A03 venceu com o Super Poder de %.2f contra %.2f da carta A04\n", SuperPoderA03, SuperPoderA04) 
            : printf("Empate! Ambas as cartas têm o mesmo Super Poder de %.2f\n", SuperPoderA04);
	}
    if (cartaescolhida1 == 1 || cartaescolhida1 == 2 ||cartaescolhida1 == 3 ||cartaescolhida1 == 4 && cartaescolhida2 == 1 || cartaescolhida2 == 2 ||cartaescolhida2 == 3 ||cartaescolhida2 == 4) {printf("\n");}
        else {
        printf("Opção inválida\n");}
        break;

    default:
        printf("Atributo inválido\n");
        break;  
    }

return 0;
}