#include <stdio.h>
#define MAX 100

void LeMatriz(int [][MAX], int );
void ImprimeMatriz(int [][MAX], int );
void Transposta(int mat[MAX][MAX], int [][MAX], int );


int main() {
    int mat[MAX][MAX], ordem, transposta[MAX][MAX];
    printf("\nEscreva a ordem da matriz quadrada\n");
    scanf("%d", &ordem);
    LeMatriz(mat, ordem);
    ImprimeMatriz(mat, ordem);
    Transposta(mat, transposta, ordem);
    ImprimeMatriz(transposta, ordem);
    
    return 0;
}

void LeMatriz(int mat[MAX][MAX], int ordem){

    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            printf("\nEscreva o elemento[%d][%d] da matriz", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    
}

void ImprimeMatriz(int mat[MAX][MAX], int ordem){
    printf("\nA matriz:\n");
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void Transposta(int mat[MAX][MAX], int transposta[MAX][MAX], int ordem){

    for (int i = 0; i < ordem; i++)
    {
        for (int j  = 0; j < ordem; j ++)
        {
            transposta[j][i] = mat[i][j];
        } 
    }
}

