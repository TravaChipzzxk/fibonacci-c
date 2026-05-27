#include <stdio.h>

int calcular_fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int penultimo = 0;
    int ultimo = 1;
    int atual = 0;
    int i;
    
    for (i = 2; i <= n; i++) {
        atual = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = atual;
    }
    return atual;
}