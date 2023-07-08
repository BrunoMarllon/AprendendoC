#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], tamanho = 5, randomico, vet[50];
    srand( time(NULL) );
    printf("\ndigite 25 numeros\n"); 
   
    for (int i = 0; i < 50; i++)
    {
         randomico = 1 + (rand () % 99);
        
        for (int j = 0; j < 50; j++)
        {
            if (randomico==vet[j])
            {
                i--;
            }
            
        }
    }
    

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            
            
            mat[i][j] = randomico;
            
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