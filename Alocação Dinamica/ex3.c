#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int *vetor, tamanho;
    printf("\nInforme o tamanho do vetor\n");
    scanf("%d", &tamanho);
    vetor = (int*)malloc(tamanho * sizeof(int));
    printf("\nInforme os elementos do vetor\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor lido: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nElementos impares: ");
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("%d ", vetor[i]);
        }
        
    }

    printf("\nElementos pares: ");
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
        }
        
    }
    
    free(vetor);
    vetor = NULL;
    
    return 0;
}