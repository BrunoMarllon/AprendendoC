#include <stdio.h>
#define MAX 100

int positiveornegative(int);

int main() {
    int n, resultado;
    printf("\nDigite um numero\n"); 
    scanf("%d", &n);

    printf("\n Retorno: %d", positiveornegative(n));
    resultado = positiveornegative(n);

    if (resultado == 1)
    {
        printf("\nO numero eh positivo\n");
    }
    if (resultado == 0)
    {
        printf("\nO numero eh igual a 0\n");
    }
     if (resultado == -1)
    {
        printf("\nO numero eh negativo\n");
    }
    return 0;
}

int positiveornegative(int x){
    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return -1;
    }
    if(x > 0){
        return 1;
    }
}