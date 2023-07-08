#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX], numero, tamanho = 11;
    printf("escreva 11 numeros\n");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < tamanho-1; i++)
    {
        for (int j = 0; j < tamanho-1; j++)
        {
            if (vet[j]>vet[j+1])
            {
                numero=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=numero;
            }
            
        }
        
    }
    printf("o vetor na ordem crescente: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\no vetor na ordem crescente da posicao 0 a 5 e crescente da 5 a 11\n");
    
    for (int i = 0; i < tamanho-1; i++)
    {
        for (int j = 5; j < tamanho-1; j++)
        {
            if (vet[j]<vet[j+1])
            {
                numero = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = numero;
            }
            
        }
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);       
    }  

    return 0;
}