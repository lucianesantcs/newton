#include <stdio.h>
#include <string.h>


float densidadePopulacional(float quantidadePopulacao, float areaKM) {
    return quantidadePopulacao / areaKM;
};

float pibPerCapita(float pib, float quantidadePopulacao) {
    return pib / quantidadePopulacao;
}

int main()
{
    char siglaEstado;
    char codigoCarta[3];
    char nomeCidade[50];
    int quantidadePopulacao;
    float areaKM;
    float pib;
    int quantidadePontosTuristicos;
    // float densidadePopulacional;
    // float pibPerCapita;

    printf("Digite a letra de um Estado: ");
    scanf(" %c", &siglaEstado);

    printf("Digite o código da carta com 3 caracteres: ");
    scanf(" %s", codigoCarta);
    getchar(); // Limpa '\n' deixado no buffer após enter do codigoCarta

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; 

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
    printf("População: %.2f\n", densidadePopulacional(quantidadePopulacao, areaKM));
    printf("Área: %f km²\n", areaKM);
    printf("PIB: %2.f bilhões de reais \n", pibPerCapita(pib, quantidadePopulacao));
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos);

    return 0;
}