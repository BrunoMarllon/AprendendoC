#include <stdio.h>

int main(){

    int x, n, maior;
    printf("informe quantos numeros voce deseja fornecer: \n");
    scanf("%d", &n);
    printf("\ninforme os %d numeros: ", n);
    scanf("%d", &x);
    maior=x;
    
    for (int i = 0; i < (n-1); i++)
    {
        scanf("%d", &x);
        if(maior<x){
            maior = x;
        }
    }
    
    printf("\no maior numero escrito foi %d", maior);



    return 0;
}