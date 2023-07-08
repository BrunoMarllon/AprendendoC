#include <stdio.h>

int main() {
    int A, *B, **C, ***D;

    printf("Informe um valor inteiro: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    *B = A * 2;
    **C = A * 3;
    ***D = A * 4;

    printf("Dobro: %d\n", *B);
    printf("Triplo: %d\n", **C);
    printf("Quádruplo: %d\n", ***D);

    return 0;
}