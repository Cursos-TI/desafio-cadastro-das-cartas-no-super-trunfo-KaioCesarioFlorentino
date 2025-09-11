#include <stdio.h>

int main() {

    //Declarando as variáveis

    char estado1[2];
    char codigo1[4];
    char nomedacidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2[2];
    char codigo2[4];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Instruindo o usuário sobre como criar as cartas de acordo com as regras do jogo

    printf("Seja muito bem-vindo(a) ao Jogo Cartas Super Trunfo!\n");
    printf("O jogo é bem simples e possui algumas regras que você deve seguir, segue as regras abaixo:\n");
    printf("\nRegra número 1: O Estado deve ser somente uma letra de A à H.\n");
    printf("Regra número 2: O Código da carta deve ser a letra do estado em que ela se encontra juntamente com 01, 02, 03 ou 04. Exemplo: A01.\n");
    printf("Regra número 3: A cidade não pode ter nome composto, somente nome único.\n");
    printf("\nTenha um bom jogo e divirta-se!\n");

    //Adicionado a Carta 1

    printf("\nAdicione a Carta 1:\n");

    //Adicionando o Estado
 
    printf("\nDigite o Estado: "); 
    scanf(" %c", estado1);

    //Adicionando o Código da carta

    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo1);

    //Adicionando o nome da Cidade

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade1);

    //Adicionando a população da Cidade

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    //Adicionando a área da Cidade

    printf("Digite a Área em Km²: ");
    scanf("%f", &area1);

    //Adicionando o PIB da Cidade

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    //Adicionando o número de pontos turísticos da Cidade

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &pontosturisticos1);

     //Adicionando a Carta 2

    printf("\nAdicione a Carta 2:\n");

    //Adicionando o Estado

    printf("Digite o Estado: ");
    scanf(" %c", estado2);
 
    //Adicionando o Código da carta

    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo2);

    //Adicionando o nome da Cidade
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade2);

    //Adicionando a população da Cidade

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    //Adicionando a área da Cidade

    printf("Digite a Área em Km²: ");
    scanf("%f", &area2);

    //Adicionando o PIB da Cidade

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    //Adicionando o número de pontos turísticos da Cidade

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &pontosturisticos2);

    //Demonstrando as Cartas 1 e 2

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1[0]);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2", area1);
    printf("\nPIB: %.2f reais", pib1);
    printf("\nNúmeros de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2[0]);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²", area2);
    printf("\nPIB: %.2f reais", pib2);
    printf("\nNúmeros de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
