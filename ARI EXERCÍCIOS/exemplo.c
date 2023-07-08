#include <stdio.h>
#define MAX 100

int main() {
    int numero;
    int *ponteiro = &numero;
    numero = 5;
    
    printf("%d", *ponteiro);
    *ponteiro = 10;
    printf("\n%d", *ponteiro);
    printf("\n%d", numero);
    return 0;
}

