#include <stdio.h>
#define MAX 100

int main(){
    int vet[MAX];
    printf("\n digite 6 numeros \n");

    for (int i = 0; i < 6; i++)
    {
        
        if (vet[i]%2==0)
        {
          scanf("%d ", &vet[i]);

        }else i=i-1;
        
    }

    printf("\n os numeros pares digitados:  ");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}