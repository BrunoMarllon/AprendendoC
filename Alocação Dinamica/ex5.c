#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int tamanho, *vetor, numero;
    printf("\nInforme o tamanho do vetor");
    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho * sizeof(int));
    printf("\nInforme os elementos do vetor");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("\nInforme um numero");
    scanf("%d", &numero);

    printf("\nElementos do vetor divisivel por %d: ", numero);

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % numero == 0)
        {
            printf("%d ", vetor[i]);
        }
        
    }
    
    free(vetor);
    vetor = NULL;

     
    return 0;
}