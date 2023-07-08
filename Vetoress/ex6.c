#include <stdio.h>
#define MAX 100 //usei o #define para transformar o termo MAX em uma constante que vale o numero 100

int main(){
    int vet[MAX], menor, maior;

    printf("\nescreva 10 numeros\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("\no menor valor do vetor: \n");
    menor= vet[0];
    for (int i = 0; i < 10; i++)
    {
        if (menor>vet[i])
        {
            menor = vet[i];
        }  
    }
    printf("%d\n", menor);

    printf("\no maior valor do vetor:\n");
    maior=vet[0];
    for (int i = 0; i < 10; i++)
    {
        if (maior<vet[i])
        {
            maior = vet[i];
        }
    }
    printf("%d\n", maior);
    
    return 0;
}