#include <stdio.h>
#define MAX 100
int Triangulo(int );
int main() {
    int linhas;
    printf("\nDigite a quantidade de linhas do triangulo\n"); 
    scanf("%d", &linhas);
    Triangulo(linhas);
    return 0;
}

int Triangulo(int linhas){

    for (int i = 0, z = 0, espacos = linhas; i < linhas; i++, z++, espacos--)
    {
       
        for (int k = espacos; k >= 0; k--)
        {
             printf(" ");
        }
        
        for (int j = 0; j <= z; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}