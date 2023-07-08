#include <stdio.h>
#define MAX 100
void Dobro(int* numero);

int main() {
    int inteiro = 3;
    float real = 5;
    char caractere = 'B';

    int* ptrinteiro = &inteiro;
    float * ptrreal = &real;
    char* ptrcaractere = &caractere;

    printf("\nValores antes da modificação:\n");
    printf("\ninteiro: %d", inteiro);
    printf("\nreal: %.7f", real);
    printf("\ncaractere: %c\n", caractere);

    printf("\nponteiros:\n");
    printf("\ninteiro: %d", *ptrinteiro);
    printf("\nreal: %.7f", *ptrreal);
    printf("\ncaractere: %c", *ptrcaractere);

    *ptrinteiro = 20;
    *ptrreal = 2.71;
    *ptrcaractere = 'B';

    printf("\n\nValores depois da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);




    return 0;
}

