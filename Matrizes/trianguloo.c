#include <stdio.h>
#define MAX 100

int main() {
    int altura;
    printf("\nInforme a altura\n");
    scanf("%d", &altura);
    for ( int linha = 1; linha <= altura; linha++)
    {
        for (int espaco = 1; espaco <= altura - linha; espaco++)
        {
            printf(" ");
        }

        for (int asterisco = 1; asterisco <= 2 * linha - 1; asterisco++) {
            printf("*");
        }
        printf("\n");
        
    }
     
    return 0;
}