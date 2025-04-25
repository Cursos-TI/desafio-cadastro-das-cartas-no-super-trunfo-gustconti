#include <stdio.h>

typedef struct {
    char codigoDaCarta[4];        // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nomeDaCidade[40];        // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    char estado;                  // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    int populacao;                // População: O número de habitantes da cidade. Tipo: int
    float area;                   // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float pib;                    // PIB: O Produto Interno Bruto da cidade. Tipo: float
    int numeroDePontosTuristicos; // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
} Cidade;

int main()
{

    // Declaração de variáveis
    Cidade cidade1, cidade2;

    printf("Cadastre a primeira carta!\n");
    printf("\n");

    // Entrada de dados para a cidade 1
    printf("Digite o código da carta (ex: A01):");
    scanf("%s", cidade1.codigoDaCarta); // Lê o código da carta
    printf("Digite o nome da cidade:");
    getchar(); // Limpa o buffer do teclado
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
    printf("Carta 1 cadastrada com sucesso!\n");
    printf("\n");                        

    // Exibir os dados da cidade 1
    printf("Carta 1:\n");                        
    printf("Código da Carta: %s\n", cidade1.codigoDaCarta);                        // Exibe o código da carta
    printf("Nome da Cidade: %s\n", cidade1.nomeDaCidade);                          // Exibe o nome da cidade
    printf("Estado: %c\n", cidade1.estado);                                        // Exibe o estado
    printf("População: %d\n", cidade1.populacao);                                  // Exibe a população
    printf("Área: %.2f km²\n", cidade1.area);                                      // Exibe a área com duas casas decimais
    printf("PIB: %.2f\n", cidade1.pib);                                            // Exibe o PIB com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", cidade1.numeroDePontosTuristicos); // Exibe o número de pontos turísticos
    printf("\n");

    printf("\n");                        
    printf("Cadastre a segunda carta:\n"); // Exibe o número de pontos turísticos
    printf("\n");                        
    
    // Entrada de dados para a cidade 2
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade2.codigoDaCarta); // Lê o código da carta
    printf("Digite o nome da cidade: ");
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
    printf("Carta 2 cadastrada com sucesso!\n");
    printf("\n");                        
 
    // Exibir os dados da cidade 2
    printf("Carta 2:\n");                        
    printf("Código da Carta: %s\n", cidade2.codigoDaCarta);                        // Exibe o código da carta
    printf("Nome da Cidade: %s\n", cidade2.nomeDaCidade);                          // Exibe o nome da cidade
    printf("Estado: %c\n", cidade2.estado);                                        // Exibe o estado
    printf("População: %d\n", cidade2.populacao);                                  // Exibe a população
    printf("Área: %.2f km²\n", cidade2.area);                                      // Exibe a área com duas casas decimais
    printf("PIB: %.2f\n", cidade2.pib);                                            // Exibe o PIB com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", cidade2.numeroDePontosTuristicos); // Exibe o número de pontos turísticos    

}
