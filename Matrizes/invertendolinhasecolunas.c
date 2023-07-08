#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main (){
    int mat[MAX][MAX], matcomlinhasinvertidas[MAX][MAX],matcomcolunasinvertidas[MAX][MAX], linhas, colunas, n, aux = 0;
    srand(time(NULL));
    printf("\nDigite o numero de linhas da matriz\n");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas da matriz\n");
    scanf("%d", &colunas);

    //Gerando matriz aleatoria
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }

    //Imprimindo a matriz
    printf("\nA matriz criada:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    
    //Invertendo as linhas matriz
    for (int i = linhas-1, k = 0; i >= 0; i--, k++)
    {
        for (int j = 0, l = 0; j < colunas; j++, l++)
        {
            matcomlinhasinvertidas[k][l] = mat[i][j];
        }
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat[i][j] = matcomlinhasinvertidas[i][j];
        }
        
    }
    //Imprimindo a matriz com as linhas invertidas
    printf("\nMatriz com as linhas invertidas\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    //Ordenando uma linha na matriz em ordem crescente
    for(int i = 0; i == 0;){
    printf("escolha uma linha para ser ordenada em ordem crescente");
    scanf("%d", &n);
        if (n >=0 && n <= linhas - 1)
        {
            i++;
        }
    }
    for (int i = 0; i < colunas * 2; i++)
    {
        for (int j = 0; j < colunas-1; j++)
        {
            if (mat[n][j] > mat[n][j+1]){
            aux = mat[n][j];
            mat[n][j] = mat[n][j+1];
            mat[n][j+1] = aux;
            }
        }
    }

    //Imprimindo a matriz com uma linha ordenada
    printf("\nA matriz com a linha %d ordenada:\n", n);
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    //Invertendo as colunas da matriz 
    for (int i = 0, k=0; i < linhas; i++, k++)
    {
        for (int j = colunas-1, l=0; j >=0; j--, l++)
        {
            matcomcolunasinvertidas[k][l] = mat[i][j];
        }
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat[i][j] = matcomcolunasinvertidas[i][j];
        }
        
    }
    
    //Imprimindo a matriz com as colunas invertidas
    printf("\nMatriz com as colunas invertidas\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    //Ordenando uma linha da coluna em ordem crescente
    for (int i = 0; i == 0;)
    {
        printf("\nEscolha uma coluna para ser ordenado em ordem crescente\n");
        scanf("%d", &n);
        if (n>=0 && n<=linhas - 1)
        {
            i++;
        }
    }
    for (int j = 0; j < linhas * 2; j++)
    {
        for (int i = 0; i < linhas-1; i++)
        {
        if(mat[i][n] > mat[i+1][n]){
            aux = mat[i][n];
            mat[i][n] = mat[i+1][n];
            mat[i+1][n] = aux;
        }
        }
    }

    //Imprimindo a matriz com a coluna em ordem crescente
    printf("\nMatriz com a coluna %d em ordem crescente\n", n);
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}