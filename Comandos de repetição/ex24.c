#include <stdio.h>

int main(){
    int x, soma=0;
    printf("escreva um numero: \n");
    scanf("%d", &x);

    for (int i = 1; i < x; i++)
    {
        if (x%i==0)
        {
            soma = soma + i;
        }     
    }
    printf("\na soma dos divisores de %d eh: %d\n", x, soma);
    


    return 0;
}