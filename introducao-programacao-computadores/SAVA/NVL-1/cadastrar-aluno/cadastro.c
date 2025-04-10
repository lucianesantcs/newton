#include <stdio.h>
#include <string.h>

int main()
{
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    // printf("Digite seu nome completo: ");
    // fgets(nome, 50, stdin);
    // nome[strcspn(nome, "\n")] = 0;

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("\n");
    printf("Cadastro do aluno: \n");
    printf("Primeiro nome do aluno: %s\n", nome);
    printf("Idade do aluno: %d\n", idade);
    printf("Altura do aluno: %f\n", altura);
    printf("Matrícula do aluno: %d\n", matricula);

    return 0;
}