#include <stdio.h>
#define MAX 100

int main(){
    int vet[MAX], menor, maior, maiorposition, menorposition;
    printf("escreva 5 numeros\n\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
    }
   maior = vet[0];
   menor = vet[0];
    for (int i = 0; i < 5; i++)
    {
        if (vet[i]>maior)
        {
            maior = vet[i];
            maiorposition= i;
        }
        if (vet[i]<menor)
        {
            menor = vet[i];
            menorposition= i;
        }
        
    }

    printf("\n o menor numero digitado foi %d", menor);
    printf("\no maior numero digitado foi %d", maior);
    printf("\n a posiao do menor numero: %d", menorposition);
    printf("\n a posicao do maior numero: %d", maiorposition);
    
    



    return 0;
}