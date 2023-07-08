#include <stdio.h>
#define MAX 100

void Troca(int* , int* );

int main() {
    int x, y;
    printf("\nEscreva dois numeros\n"); 
    scanf("%d %d", &x, &y);
    Troca(&x, &y);
    printf("\nValor de x: %d\n valor de y: %d", x, y);
    return 0;
}

void Troca(int* x, int* y){
    int z = *x;

    *x = *y;
    *y = z;
}