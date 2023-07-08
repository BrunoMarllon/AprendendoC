#include <stdio.h>
#define MAX 100

int Triangulo(int );

int main() {
    int linhas, resultado;
    printf("\nEscreva quantidade de linhas do triangulo\n"); 
    scanf("%d", &linhas);
    Triangulo(linhas);
    return 0;
}

int Triangulo(int linhas){

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("!  ");
        }
        printf("\n");
    }
    
}

