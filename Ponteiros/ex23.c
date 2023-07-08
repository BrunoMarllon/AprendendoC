#include <stdio.h>
#define MAX 100

void LeVetor(int vetor[MAX], int tamanho);
int MaiorValor(int vetor[MAX], int tamanho);

int main() {
    int vetor[MAX], tamanho = 20, maiorvalor;
    LeVetor(vetor, tamanho);
    maiorvalor = MaiorValor(vetor, tamanho);
     for (int i = 0; i < tamanho; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d", vetor[i]);
        }
        printf("\n");
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

int MaiorValor(int vetor[MAX], int tamanho){
    int maiorvalor = vetor[0];

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maiorvalor)
        {
            maiorvalor = vetor[i];
        }
        
    }
    return maiorvalor;
}