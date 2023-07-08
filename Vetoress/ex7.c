#include <stdio.h>
#define MAX 100

int main(){
    
    int x, vet[MAX], position;
    printf("\nescreva 10 numeros\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }


    x=vet[99];

    for (int i = 0; i < 10; i++)
    {
        if (x<vet[i])
        {
            x=vet[i];
            position = i;
            
        }
        printf("%d ", i);
    }
    printf("\no maior numero do vetor: %d\n", x);
    printf("a vetor esta na posicao: %d", position);


    return 0;
}