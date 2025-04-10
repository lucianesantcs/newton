#include <stdio.h>

int main()
{
    int idade = 28;
    float altura = 1.61;
    char opcao = 'S';
    char nome[50] = "Fer";
    char sobrenome[50] = "Gomes";

    printf("Nome: %c\n", nome);
    printf("Sobrenome: %c\n", sobrenome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Opcao: %c\n", opcao);
    printf("Nome completo: %s %s\n", nome, sobrenome);

    return 0;
}