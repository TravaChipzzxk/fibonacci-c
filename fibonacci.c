#include <stdio.h>
#include "function_fibonacci.c"

int calcular_fibonacci(int n);

int main(int argc, char *argv[])
{
    int posicao, resultado;

    printf("Digite a posicao de Fibonacci: ");
    scanf("%d", &posicao);

    resultado = calcular_fibonacci(posicao);
    printf("O numero de Fibonacci nessa posicao eh: %d\n", resultado);

    printf("Criado por Allyson Rodolfo da Silva (https://github.com/TravaChipzzxk)\n");

    return 0;
}