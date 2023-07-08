#include <stdio.h>
#define MAX 100

int main() {
    int a, *b, **c, ***d;
    printf("\nInforme um numero\n");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    *b = a * 2;
    **c = a * 3;
    ***d = a * 4;
    printf("\nValor de b: %d", *b);
    printf("\nValor de b: %d", **c);
    printf("\nValor de b: %d", ***d);
    return 0;
}