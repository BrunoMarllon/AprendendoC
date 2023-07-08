#include <stdio.h>
#define MAX 100

int main() {
   int A[MAX], B[MAX], tamanho=3;
    printf("digite 3 numeros");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("digite 3 numeros");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        A[tamanho+i]= B[i];
    }
    printf("os numeros digitados:");
    for (int i = 0; i < tamanho+tamanho; i++)
    {
        printf("%d ", A[i]);
    }
    for (int i = 0; i < tamanho+tamanho; i++)
    {
        for (int j = i+1; j < tamanho+tamanho; j++)
        {
           if (A[i]==A[j])
           {
            for (int k = j; k < tamanho+tamanho-1; k++)
            {
                A[k]=A[k+1];
               
            }
                j--;
                tamanho--;
           }
           
        }
        
    }
    printf("\nos numeros digitados sem repetições:");
    for (int i = 0; i < tamanho+tamanho; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}