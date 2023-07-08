#include <stdio.h>
#define MAX 100
int Triangulo(int);
int main() {
    int altura;
    printf("\nEscreva a altura do triangulo\n"); 
    scanf("%d", &altura);
    Triangulo(altura);
    return 0;
}
int Triangulo(int altura){

    for (int i = 0; i < altura - 1; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = altura - 1 ; i >= 0 ; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    
}