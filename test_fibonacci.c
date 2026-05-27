#include <stdio.h>]
#include "function_fibonacci.c"

int calcular_fibonacci(int n);

int main()
{
    printf("F(0) = %d (Esperado: 0)\n", calcular_fibonacci(0));
    printf("F(1) = %d (Esperado: 1)\n", calcular_fibonacci(1));
    printf("F(6) = %d (Esperado: 8)\n", calcular_fibonacci(6));
    printf("F(9) = %d (Esperado: 34)\n", calcular_fibonacci(9));

    printf("Criado por Allyson Rodolfo da Silva (https://github.com/TravaChipzzxk)\n");
    return 0;
}