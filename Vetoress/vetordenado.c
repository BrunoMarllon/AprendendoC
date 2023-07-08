#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX], numero,tamanho=5;
    printf("digite 5 numeros"); 

    for (int i = 0; i < tamanho; i++)
    {
       scanf("%d", &vet[i]);
        
    }
    for (int j = 0; j < tamanho; j++)
    {
        
    
    
         for (int i = 0; i < tamanho; i++)
        {
             if (vet[i]>vet[i+1])
             {
                 numero=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=numero;

             }
        
        }
    }
    printf("o vetor ordenado: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    
    
    
    return 0;
}