#include <stdio.h>
#define MAX 100

void LeVetor(int vetor[MAX], int tamanho);
void MaiorNumero(int vetor[MAX], int tamanho, int* ocorrencias, int *maiorelemento);

int main() {
    int vetor[MAX], tamanho = 10, ocorrencias, maiorelemento;
    printf("\nEscreva %d numeros\n", tamanho);
    LeVetor(vetor, tamanho);
    MaiorNumero(vetor, tamanho, &ocorrencias, &maiorelemento);
    printf("\nO maior elemento do vetor: %d", maiorelemento);
    printf("\nO numero %d aparece %d vezes no vetor", maiorelemento, ocorrencias);

    return 0;
}

void LeVetor(int vetor[MAX], int tamanho){
    printf("\nEscreva %d numeros\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

void MaiorNumero(int vetor[MAX], int tamanho, int* ocorrencias, int* maiorelemento){
    *maiorelemento = vetor[0];
    *ocorrencias = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > *maiorelemento)
        {
            *maiorelemento = vetor[i];
        }
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == *maiorelemento)
        {
            (*ocorrencias)++;
        }
        
    }
    
    

}