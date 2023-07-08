#include <stdio.h> 
#define MAX 10

int main(){
    int vet[MAX], count=0;
    printf("escreva 10 numeros\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("\nvalores pares do vetor: \n");
    
    for (int i = 0; i < 10; i++)
    {
        if (vet[i]%2==0)
        {
            
            printf("%d ", vet[i]);
            count++;
        }
        
    }
    
    




    return 0;
}