#include <stdio.h>

int main()
{
    char nome[50];
    char sobrenome[50];
    int idade;
    float altura;
    char opcao;

    printf("Digite o seu nome: ");
    scanf(" %s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite seu sobrenome: ");
    scanf(" %s", sobrenome);
    printf("Seu sobrenome é: %s\n", sobrenome);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %2f\n", altura);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);

    return 0;
}