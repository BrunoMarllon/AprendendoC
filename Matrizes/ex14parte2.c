#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], tamanho = 5, randomico,vet[MAX];
    srand( time(NULL) );
    printf("\n\n"); 
    for (int i = 0; i < 50; i++)
    {
        randomico = 1 + (rand() % 99);
        for (int j = 0; j < i; j++)
        {
            if (randomico==vet[j])
            {
                i--;
                break;
            }
              
        }
      vet[i]=randomico;
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vet[i]);
    }
    
    for (int i = 0, K = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++, K++)
        {
            mat[i][j]=vet[K];
        }
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

