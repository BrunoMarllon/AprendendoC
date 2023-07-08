#include <stdio.h>
#define MAX 100

float doublenumber(float x );

int main() {
    int n, dobro;
    printf("\nEscreva um numero inteiro\n"); 
    scanf("%d", &n);
    dobro = doublenumber(n);
    printf("\nO dobro do seu numero: %d", dobro);
    return 0;
}

float doublenumber(float x ){
    return x*2;

}