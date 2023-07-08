#include <stdio.h>
#define MAX 100

void LeVetor(int vetor[MAX], int tamanho);
int Negativos(int* vet, int tamanho);

int main() {
    int vetor[MAX], tamanho = 10;

    LeVetor(vetor, tamanho);
    Negativos(vetor, tamanho);

    printf("\nO vetor fornecido possui %d numeros negativos",  Negativos(vetor, tamanho));

    return 0;
}

void LeVetor(int vetor[MAX], int tamanho){
    printf("\nEscreva %d numeros\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

int Negativos(int* vet, int tamanho){
    int n = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (*vet < 0)
        {
            n++;
        }
        vet++;
    }
    
    return n;
}