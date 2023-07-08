#include <stdio.h>
#define MAX 100

int main (){
    int tamanho=20, vet[MAX];
    printf("digite 20 numeros");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
       for (int j = 0; j < tamanho; j++)
       {
            if (vet[j]==vet[i])
            {
                for (int k = j; k < tamanho-1; k++)
                {
                    vet[k] = vet[k+1];
                }  
                tamanho=tamanho-1;
              
            }
            
       }
    }
       printf("\n os numeros digitados\n");

       for (int i = 0; i < tamanho; i++)
       {
            printf("%d ", vet[i]);
       }
       
    
    
    return 0;
}