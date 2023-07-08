#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int tamanho;
    int *vet;

    printf("\nInforme a quantidade de elementos do vetor");
    scanf("%d", &tamanho);

    vet = (int*) malloc(sizeof(int) * tamanho);

    printf("\nInforme os elementos do vetor\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("\nVetor lido: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    
    free(vet);
    vet = NULL;

    return 0;
}