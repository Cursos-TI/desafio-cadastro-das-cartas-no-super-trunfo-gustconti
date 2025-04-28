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
    float atributoSelecionado1;   // Atributo selecionado 1: O primeiro atributo selecionado para comparação. Tipo: float
    float atributoSelecionado2;   // Atributo selecionado 2: O segundo atributo selecionado para comparação. Tipo: float
} Cidade;

Cidade cadastrarCarta(Cidade cidade)
{
    printf("Cadastre a carta!\n");
    printf("\n");

    // Entrada de dados para a cidade
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", cidade.codigoDaCarta); // Limita a entrada a 3 caracteres
    while (getchar() != '\n'); // Limpa o buffer

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade.nomeDaCidade); // Lê o nome da cidade (inclui espaços)
    while (getchar() != '\n'); // Limpa o buffer

    printf("Digite o estado (A-H): ");
    scanf(" %c", &cidade.estado); // Lê o estado
    while (getchar() != '\n'); // Limpa o buffer

    printf("Digite a população: ");
    if (scanf("%d", &cidade.populacao) != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer
    }

    printf("Digite a área (em km²): ");
    if (scanf("%f", &cidade.area) != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer
    }

    printf("Digite o PIB: ");
    if (scanf("%f", &cidade.pib) != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer
    }

    printf("Digite o número de pontos turísticos: ");
    if (scanf("%d", &cidade.numeroDePontosTuristicos) != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer
    }

    printf("\n");
    printf("Carta cadastrada com sucesso!\n");
    printf("\n");

    // Cálculo dos atributos derivados
    if (cidade.area != 0) {
        cidade.densidadeDemografica = cidade.populacao / cidade.area;
    } else {
        cidade.densidadeDemografica = 0;
    }

    if (cidade.populacao != 0) {
        cidade.pibPerCapita = cidade.pib / cidade.populacao;
    } else {
        cidade.pibPerCapita = 0;
    }

    if (cidade.densidadeDemografica != 0) {
        cidade.superPoder = (float)cidade.populacao + cidade.area + cidade.pib + (float)cidade.numeroDePontosTuristicos + cidade.pibPerCapita + 1 / cidade.densidadeDemografica;
    } else {
        cidade.superPoder = 0;
    }

    return cidade;
}

int menuEscolhaAtributos() {
    int atributo;

    printf("Escolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo);

    if(atributo < 1 || atributo > 7) {
        printf("Atributo inválido! Tente novamente.\n");
        return menuEscolhaAtributos(); // Chama a função novamente se o atributo for inválido
    }

    return atributo;
}

float buscarAtributo(int opcao, Cidade cidade) {
    switch (opcao)
    {
    case 1:
        return (float)cidade.populacao;
        break;
    case 2:
        return (float)cidade.area;
        break;
    case 3:
        return (float)cidade.pib;
        break;
    case 4:
        return (float)cidade.numeroDePontosTuristicos;
        break;
    case 5:
        return (float)cidade.densidadeDemografica;
        break;
    case 6: 
        return (float)cidade.pibPerCapita;
        break;
    case 7:
        return (float)cidade.superPoder;
        break;
    default:
        break;
    }
}

char* buscarNomeAtributo(int opcao) {
    switch (opcao)
    {
    case 1:
        return "População";
        break;
    case 2:
        return "Área";
        break;
    case 3:
        return "PIB";
        break;
    case 4:
        return "Número de Pontos Turísticos";
        break;
    case 5:
        return "Densidade Demográfica";
        break;
    case 6: 
        return "PIB per Capita";
        break;
    case 7:
        return "Super Poder";
        break;
    default:
        break;
    }
}

int compararAtributos(float atributoCidade1, float atributoCidade2)
{
    if (atributoCidade1 == atributoCidade2) {
        return -1; // Empate
    }
    return atributoCidade1 > atributoCidade2;
}

void iniciarJogo()
{
    // Declaração de variáveis
    Cidade cidade1, cidade2;
    cidade1 = cadastrarCarta(cidade1); // Chama a função para cadastrar a primeira carta
    cidade2 = cadastrarCarta(cidade2); // Chama a função para cadastrar a segunda carta

    // Escolher atributos a comparar
    int opcao1, opcao2;
    printf("Escolha o primeiro atributo para comparar:\n");
    opcao1 = menuEscolhaAtributos();
    printf("Escolha o primeiro atributo para comparar:\n");
    opcao2 = menuEscolhaAtributos();

    cidade1.atributoSelecionado1 = buscarAtributo(opcao1, cidade1);
    cidade1.atributoSelecionado2 = buscarAtributo(opcao2, cidade1);
    cidade2.atributoSelecionado1 = buscarAtributo(opcao1, cidade2);
    cidade2.atributoSelecionado2 = buscarAtributo(opcao2, cidade2);
    float somaAtributosCidade1 = cidade1.atributoSelecionado1 + cidade1.atributoSelecionado2;
    float somaAtributosCidade2 = cidade2.atributoSelecionado1 + cidade2.atributoSelecionado2;    
    char* nomeAtributo1 = buscarNomeAtributo(opcao1);
    char* nomeAtributo2 = buscarNomeAtributo(opcao2);
    int comparacao1 = compararAtributos(cidade1.atributoSelecionado1, cidade2.atributoSelecionado1);
    int comparacao2 = compararAtributos(cidade1.atributoSelecionado2, cidade2.atributoSelecionado2);
    int comparacaoSoma = compararAtributos(somaAtributosCidade1, somaAtributosCidade2);

    printf("\n=====================================================\n");

    printf("Comparação de cartas:\n");
    printf("Comparando %s\n", nomeAtributo1);
    
    if (comparacao1 == -1)
    {
        printf("%s: Empate!\n");
    }
    else {
        printf("%s: Carta %i venceu (%i)\n", nomeAtributo1, comparacao1 ? 1 : 2, comparacao1);
    }
    
    printf("Comparando %s\n", nomeAtributo2);
    if (comparacao2 == -1)
    {
        printf("%s: Empate!\n");
    }
    else {
        printf("%s: Carta %i venceu (%i)\n", nomeAtributo2, comparacao2 ? 1 : 2, comparacao2);
    }
    if (comparacaoSoma == -1)
    {
        printf("Soma dos Atributos: Empate!\n");
    }
    else {
        printf("Soma dos Atributos: Carta %i venceu (%i)\n", comparacaoSoma ? 1 : 2, comparacaoSoma);
    }

    printf("=====================================================\n");

    if (comparacaoSoma == 1) {
        printf("RESULTADO FINAL: A carta 1 venceu!\n", cidade1.codigoDaCarta);
    }
    else if (comparacaoSoma == 0) {
        printf("RESULTADO FINAL: A carta 2 venceu!\n", cidade2.codigoDaCarta);
    }
    else {
        printf("RESULTADO FINAL: Empate!\n");
    }
}

void exibirRegras()
{
    printf("Regras do Jogo:\n");
    printf("1. O jogador cadastra duas cartas.\n");
    printf("2. O jogador escolhe dois atributos a serem comparados.\n");
    printf("3. O jogador com a maior soma dos atributos vence a rodada.\n");
}

void sair()
{
    printf("Saindo do jogo...\n");
    printf("Obrigado por jogar!\n");
    printf("\n");
}

void menu()
{
    int opcao;
    printf("Escolha uma opção:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Exibir Regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        iniciarJogo(); // Chama a função para iniciar o jogo
        break;
    case 2:
        exibirRegras(); // Chama a função para exibir as regras
        return menu(); // Chama a função menu novamente
        break;
    case 3:
        sair(); // Chama a função para sair do jogo
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
        return menu(); // Chama a função novamente se a opção for inválida
        break;
    }
}

void main()
{
    // introducao
    printf("Super Trunfo!\n");
    printf("\n");

    menu(); // Chama a função menu para exibir as opções disponíveis
}