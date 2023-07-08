#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX], tamanho=15;
    printf("escreva 15 numeros: \n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i]==0)
        {
            for (int j = i; j < tamanho; j++)
            {
                vet[j]= vet[j+1];
            }
            tamanho--;
        }   
        }
        printf("os numeros digitados: \n");
        printf("o tamanho do vetor ficou: %d\n", tamanho);
        for (int i = 0; i < tamanho; i++)
        {
            printf("%d ", vet[i]);
        }
        
        return 0;
    }
    

