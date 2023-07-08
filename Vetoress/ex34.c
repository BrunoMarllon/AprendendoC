#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX],tamanho=15;
    printf("escreva 15 numeros diferentes\n"); 
    for(int i=0; i<tamanho; i++){                
        scanf("%d", &vet[i]);
        for (int j = 0; j<i; j++)
        {
            if (vet[i]==vet[j])
            {
                printf("\npor favor, escreva outro valor\n");
                i--;
                break;
        
            }   
        }
    }
    printf("os 15 numeros digitados foram\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;
}