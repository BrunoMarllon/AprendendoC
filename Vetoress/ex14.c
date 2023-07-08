#include <stdio.h>
#define MAX 100

int main (){
    int vet[MAX],numero;
    printf("escreva 10 numeros\n");
     for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        
    }

    for (int i = 0; i < 10; i++)
    {
        numero=vet[i];
        for (int j = 1+i; j < 10; j++)
        {
            
            if (numero==vet[j])
            {
                printf("\nos valores na posicao %d e %d sao iguais\n", i, j);

            }
            
        }
        
    }
    


    return 0;
}