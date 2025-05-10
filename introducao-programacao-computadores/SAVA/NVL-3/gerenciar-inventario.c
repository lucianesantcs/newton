#include <stdio.h>

int main()
{
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorProdutoA = 10.50;
    float valorPorudtoB = 20.40;

    unsigned int estoqueMinA = 500;
    unsigned int estoqueMinB = 2500;

    double valorTotalA;
    double valorTotalB;

    int tamanhoMinEstoqueA, tamanhoMinEstoqueB;
    int verificaEstoque;
    float calculaEstoqueA, calculaEstoqueB;

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoA, estoqueA, valorProdutoA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f \n", produtoB, estoqueB, valorPorudtoB);

    tamanhoMinEstoqueA = estoqueA > estoqueMinA;
    tamanhoMinEstoqueB = estoqueB > estoqueMinB;

    printf("O produto %s tem estoque mínimo? %d \n", produtoA, tamanhoMinEstoqueA);
    printf("O produto %s tem estoque mínimo? %d \n", produtoB, tamanhoMinEstoqueB);

    calculaEstoqueA = (estoqueA * valorProdutoA);
    calculaEstoqueB = (estoqueB * valorPorudtoB);
    verificaEstoque = calculaEstoqueA > calculaEstoqueB;

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d \n", calculaEstoqueA, calculaEstoqueB, verificaEstoque);

    return 0;
}