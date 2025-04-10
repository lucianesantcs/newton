#include <stdio.h>
#include <string.h>

int main()
{
    char siglaEstado;
    char codigoCarta[3];
    char nomeCidade[50];
    int quantidadePopulacao;
    float areaKM;
    float pib;
    int quantidadePontosTuristicos;

    printf("Digite a letra de um Estado: ");
    scanf(" %c", &siglaEstado);

    printf("Digite o código da carta com 3 caracteres: ");
    scanf(" %s", codigoCarta);

    printf("Digite o nome da cidade: ");
    while (getchar() != '\n')
        ;
    fgets(nomeCidade, 50, stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &quantidadePopulacao);

    printf("Digite a área em quilômetros quadrados da cidade: ");
    scanf("%f", &areaKM);

    printf("Digite qual o Produto Interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib);

    printf("Qual a quantidade de Pontos Turísticos da cidade? ");
    scanf("%d", &quantidadePontosTuristicos);

    printf("\n");
    printf("Carta \n \n");

    printf("Estado: %c\n", siglaEstado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", quantidadePopulacao);
    printf("Área: %f km²\n", areaKM);
    printf("PIB: %2.f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos);

    return 0;
}