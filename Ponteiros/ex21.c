#include <stdio.h>
#define MAX 100

void LeVetor(int vetor[MAX], int tamanho);

int main() {
    int vetor[MAX], tamanho = 5;
    int* ptr = vetor;
    LeVetor(vetor, tamanho);
    
    for (int i = 0; i < tamanho; i++)
    {
        (*ptr)++;
        ptr++;

    }
    ptr = ptr - tamanho;
    printf("\nVetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", *ptr);
        ptr++;
    }
    
    return 0;
}
void LeVetor(int vetor[MAX], int tamanho){
    printf("\nEscreva %d numeros\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
}