#include <stdio.h>
#include "ajuda.h"
#define MAX 100


int main() {
    int n1, n2, rets, retm;
    mensagem();
    printf("\nInforme o primeiro numero\n"); 
    scanf("%d", &n1);

    printf("\nInforme o segundo numero\n");
    scanf("%d", &n2);

    rets = soma(n1, n2);
    printf("\nA soma de %d e %d: %d ", n1, n2, rets);
    
    retm = mult(n1, n2);
    printf("\nA multiplicacao de %d e %d: %d", n1, n2, retm);
    
    return 0;
}