#include <stdio.h>
#include <limits.h>
#define MAX 100

void LeVetor(int vetor[MAX], int tamanho);
int SomaVetor(int *vet1, int *vet2, int *vet3, int tamanho1, int tamanho2);

int main() {
    int vet1[MAX], vet2[MAX], vet3[MAX], tamanho1 = 5, tamanho2= 5;
    int* ptr = vet3;
    LeVetor(vet1, tamanho1);
    LeVetor(vet2, tamanho2);
    SomaVetor(vet1, vet2, vet3, tamanho1, tamanho2);
   if(SomaVetor(vet1, vet2, vet3, tamanho1, tamanho2)){
    printf("\nVetores somados: ");
    for (int i = 0; i < tamanho1; i++)
    {
        printf("%d", *ptr);
        ptr++;
    }
    }else printf("\nO tamanho dos vetores devem ser iguais\n");
    
    return 0;
}

int SomaVetor(int *vet1, int *vet2, int *vet3, int tamanho1, int tamanho2){
    if (tamanho1 != tamanho2)
    {
        return 0;
    }
    for (int i = 0; i < tamanho1; i++)
    {
        *vet3 = *vet2 + *vet1;
        *vet3++;
        *vet2++;
        *vet1++;

    }
    
    return 1;
}

void LeVetor(int vetor[MAX], int tamanho){
    printf("\nEscreva %d numeros\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
}