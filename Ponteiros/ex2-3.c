#include <stdio.h>
#define MAX 100

int main() {
    int y,x;

    printf("\nInforme x: ");
    scanf("%d", &x);
    printf("\nInforme y");
    scanf("%d", &y);

    printf("\nEndereço de x: %d", &x);
    printf("\nEndereço de y: %d", &y);
    if (&x > &y)
    {
        printf("\nO endereço de %d eh maior\n", x);
    } else 
    printf("\nO endereço de %d eh maior\n", y);
    

    return 0;
}