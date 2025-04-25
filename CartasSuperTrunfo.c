#include <stdio.h>

typedef struct
{
    char codigoDaCarta[4];        // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nomeDaCidade[40];        // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    char estado;                  // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    int populacao;                // População: O número de habitantes da cidade. Tipo: int
    float area;                   // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float pib;                    // PIB: O Produto Interno Bruto da cidade. Tipo: float
    int numeroDePontosTuristicos; // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    float densidadeDemografica;   // Densidade Demográfica: A densidade demográfica da cidade (população/área). Tipo: float
    float pibPerCapita;           // PIB per capita: O PIB dividido pela população. Tipo: float
    float superPoder;             // Super Poder: Um valor que representa o super poder da cidade. Tipo: float
} Cidade;

int main()
{
    // Declaração de variáveis
    Cidade cidade1, cidade2;

    printf("Cadastre a primeira carta!\n");
    printf("\n");

    // Entrada de dados para a carta 1
    printf("Digite o código da carta (ex: A01):");
    scanf("%s", cidade1.codigoDaCarta); // Lê o código da carta
    printf("Digite o nome da cidade:");
    getchar();                              // Limpa o buffer do teclado para eviter bug de input em scanf aceitando espaços
    scanf(" %[^\n]", cidade1.nomeDaCidade); // Lê o nome da cidade (inclui espaços)
    printf("Digite o estado (A-H):");
    scanf(" %c", &cidade1.estado); // Lê o estado
    printf("Digite a população:");
    scanf("%d", &cidade1.populacao); // Lê a população
    printf("Digite a área (em km²):");
    scanf("%f", &cidade1.area); // Lê a área
    printf("Digite o PIB:");
    scanf("%f", &cidade1.pib); // Lê o PIB
    printf("Digite o número de pontos turísticos:");
    scanf("%d", &cidade1.numeroDePontosTuristicos); // Lê o número de pontos turísticos
    printf("\n");

    // Cálculo dos atributos derivados da carta 1
    cidade1.densidadeDemografica = cidade1.populacao / cidade1.area;                                                                                                                // Calcula a densidade demográfica
    cidade1.pibPerCapita = cidade1.pib / cidade1.populacao;                                                                                                                         // Calcula o PIB per capita
    cidade1.superPoder = (float)cidade1.populacao + cidade1.area + cidade1.pib + (float)cidade1.numeroDePontosTuristicos + cidade1.pibPerCapita + 1 / cidade1.densidadeDemografica; // Calcula o super poder

    printf("Carta 1 cadastrada com sucesso!\n");
    printf("\n");

    // Exibir os dados da carta 1
    printf("Carta 1:\n");
    printf("Código da Carta: %s\n", cidade1.codigoDaCarta);                               // Exibe o código da carta
    printf("Nome da Cidade: %s\n", cidade1.nomeDaCidade);                                 // Exibe o nome da cidade
    printf("Estado: %c\n", cidade1.estado);                                               // Exibe o estado
    printf("População: %d\n", cidade1.populacao);                                         // Exibe a população
    printf("Área: %.2f km²\n", cidade1.area);                                             // Exibe a área com duas casas decimais
    printf("PIB: %.2f\n", cidade1.pib);                                                   // Exibe o PIB com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", cidade1.numeroDePontosTuristicos);        // Exibe o número de pontos turísticos
    printf("Densidade Demográfica: %.2f habitantes/km²\n", cidade1.densidadeDemografica); // Exibe a densidade demográfica
    printf("PIB per Capita: %.2f\n", cidade1.pibPerCapita);                               // Exibe o PIB per capita com duas casas decimais
    printf("\n");

    printf("Cadastre a segunda carta:\n"); // Exibe o número de pontos turísticos
    printf("\n");

    // Entrada de dados para a carta 2
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade2.codigoDaCarta); // Lê o código da carta
    printf("Digite o nome da cidade: ");
    getchar();                              // Limpa o buffer do teclado para eviter bug de input em scanf aceitando espaços
    scanf(" %[^\n]", cidade2.nomeDaCidade); // Lê o nome da cidade (inclui espaços)
    printf("Digite o estado (A-H): ");
    scanf(" %c", &cidade2.estado); // Lê o estado
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao); // Lê a população
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade2.area); // Lê a área
    printf("Digite o PIB: ");
    scanf("%f", &cidade2.pib); // Lê o PIB
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade2.numeroDePontosTuristicos); // Lê o número de pontos turísticos
    printf("\n");

    // Cálculo dos atributos derivados da carta 2
    cidade2.densidadeDemografica = cidade2.populacao / cidade2.area;                                                                                                                // Calcula a densidade demográfica
    cidade2.pibPerCapita = cidade2.pib / cidade2.populacao;                                                                                                                         // Calcula o PIB per capita
    cidade2.superPoder = (float)cidade2.populacao + cidade2.area + cidade2.pib + (float)cidade2.numeroDePontosTuristicos + cidade2.pibPerCapita + 1 / cidade2.densidadeDemografica; // Calcula o super poder

    printf("Carta 2 cadastrada com sucesso!\n");
    printf("\n");

    // Exibir os dados da carta 2
    printf("Carta 2:\n");
    printf("Código da Carta: %s\n", cidade2.codigoDaCarta);                               // Exibe o código da carta
    printf("Nome da Cidade: %s\n", cidade2.nomeDaCidade);                                 // Exibe o nome da cidade
    printf("Estado: %c\n", cidade2.estado);                                               // Exibe o estado
    printf("População: %d\n", cidade2.populacao);                                         // Exibe a população
    printf("Área: %.2f km²\n", cidade2.area);                                             // Exibe a área com duas casas decimais
    printf("PIB: %.2f\n", cidade2.pib);                                                   // Exibe o PIB com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", cidade2.numeroDePontosTuristicos);        // Exibe o número de pontos turísticos
    printf("Densidade Demográfica: %.2f habitantes/km²\n", cidade2.densidadeDemografica); // Exibe a densidade demográfica
    printf("PIB per Capita: %.2f\n", cidade2.pibPerCapita);                               // Exibe o PIB per capita com duas casas decimais
    printf("\n");

    // Comparar Cartas
    int cidade1VenceuPopulacao = cidade1.populacao > cidade2.populacao;
    int cidade1VenceuArea = cidade1.area > cidade2.area;
    int cidade1VenceuPib = cidade1.pib > cidade2.pib;
    int cidade1VenceuPontosTuristicos = cidade1.numeroDePontosTuristicos > cidade2.numeroDePontosTuristicos;
    int cidade1VenceuDensidade = cidade1.densidadeDemografica < cidade2.densidadeDemografica; // Menor valor ganha
    int cidade1VenceuPibPerCapita = cidade1.pibPerCapita > cidade2.pibPerCapita;
    int cidade1VenceuSuperPoder = cidade1.superPoder > cidade2.superPoder;

    // Exibir resultados das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %i venceu (%i)\n", cidade1VenceuPopulacao ? 1 : 2, cidade1VenceuPopulacao);
    printf("Área: Carta %i venceu (%i)\n", cidade1VenceuArea ? 1 : 2, cidade1VenceuArea);
    printf("PIB: Carta %i venceu (%i)\n", cidade1VenceuPib ? 1 : 2, cidade1VenceuPib);
    printf("Pontos Turísticos: Carta %i venceu (%i)\n", cidade1VenceuPontosTuristicos ? 1 : 2, cidade1VenceuPontosTuristicos);
    printf("Densidade Populacional: Carta %i venceu (%i)\n", cidade1VenceuDensidade ? 1 : 2, cidade1VenceuDensidade);
    printf("PIB per Capita: Carta %i venceu (%i)\n", cidade1VenceuPibPerCapita ? 1 : 2, cidade1VenceuPibPerCapita);
    printf("Super Poder: Carta %i venceu (%i)\n", cidade1VenceuSuperPoder ? 1 : 2, cidade1VenceuSuperPoder);
    printf("\n");
}
