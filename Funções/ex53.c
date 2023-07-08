#include <stdio.h>
#define MAX 100

void LeMatriz(int [][MAX], int );
int Identidade(int [][MAX], int );

int main() {
    int mat[MAX][MAX], tamanho = 3;
    LeMatriz(mat, tamanho);
    Identidade(mat, tamanho);

    if (Identidade(mat, tamanho) == 1)
    {
        printf("\nEh uma matriz identidade");
    }else{

        printf("\nNao eh uma matriz identidade");
    }
    
    return 0;
}

void LeMatriz(int mat[MAX][MAX], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("\nEscreva o elemento [%d][%d] da matriz", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int Identidade(int mat[MAX][MAX], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (i != j)
            {
                if (mat[i][j] != 0)
                {
                return 0;
                break;
                }

            } else if (j == i ){
                if (mat[i][j] != 1)
                
                    {
                        return 0;
                        break;
                    } else{
                        return 1;
                    }
            
        } 
        }
    }
}