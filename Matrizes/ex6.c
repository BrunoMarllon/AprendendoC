#include <stdio.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], mat2[MAX][MAX], matfinal[MAX][MAX], tamanho=4;
    printf("\nescreva 16 numeros\n"); 
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }       

    
    printf("\na primeira matriz escrita:\n");

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n escreva mais 16 numeros\n");
    for (int i = 0; i < tamanho ; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        
    }
    
    printf("\na segunda matriz escrita:\n");

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (mat[i][j]>=mat2[i][j])
            {
                matfinal[i][j]=mat[i][j];
            }else{
                matfinal[i][j]=mat2[i][j];
            }
            
        }
        
    }
    




    printf("\nresultado da matriz final:\n");

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", matfinal[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}