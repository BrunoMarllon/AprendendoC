#include <stdio.h>
#define MAX 100

int main(){
    int vet[MAX], numero, tamanho=10;
    printf("escreva um numero\n");
    scanf("%d", &numero);

    printf("escreva 10 numeros");

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("\nesses são os numeros multiplos de %d\n", numero);
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i]%numero==0)
        {
            printf("%d ", vet[i]);
        }  
    }
    

    

    return 0;
}