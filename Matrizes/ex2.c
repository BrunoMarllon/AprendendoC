#include <stdio.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], tamanho=5, diagonal=0;
    printf("escreva 25 numeros\n"); 
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (mat[i][j]==mat[i][diagonal])
            {
                mat[i][j] = 1;
                
            }
            else if(mat[i][j]!=mat[i][diagonal] || mat[j][i]!=mat[i][diagonal]  ){
                mat[i][j]=0;
            }
            
        }
        diagonal++;
    }
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf(" [%d] ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}