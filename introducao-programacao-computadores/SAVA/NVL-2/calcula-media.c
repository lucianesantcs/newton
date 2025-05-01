#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float media;

    printf("PROGRAMA DE CÁLCULO DE MÉDIA\n \n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média dos valores %.2f, %.2f, %.2f é: %.2f \n", nota1, nota2, nota3, media);

    return 0;
}