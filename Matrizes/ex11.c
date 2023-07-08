#include <stdio.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], tamanho = 3, soma = 0;
    printf("digite 9 numeros"); 
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    printf("\n a matriz escrita:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (i==j)
            {
                soma = soma + mat[i][j];
            }
            
        }
        
    }
    printf("a soma dos elementos da diagonal principal: %d", soma);
    
    
    return 0;
}