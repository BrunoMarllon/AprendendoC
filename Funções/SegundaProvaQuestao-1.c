#include <stdio.h>
#define MAX 100
/*Considerações sobre o código:
    letra b) Em vez de retornar os máximos locais juntamente com 
    as suas posições, eu apenas os imprimi, pois não sei como se 
    retorna mais de um valor em uma função.

    letra c) Em vez de retornar o máximo global e a sua posição,
    apenas fiz uma função que os imprime. 
    
    Cada função tem 2 parametros
*/
int LerMatriz(int [][MAX], int );
int MaximoLocal(int [][MAX], int );
int MaximoGlobal(int mat[][MAX], int );
void ImprimeMatriz(int [][MAX], int);

int main() {
    int tamanho, mat[MAX][MAX];

    printf("\nInforme o tamanho da matriz\n"); 
    scanf("%d", &tamanho);

    //Lê a da matriz
    LerMatriz(mat, tamanho);
    //Imprime o maximo local
    MaximoLocal(mat, tamanho);
    //Imprime o maximo global
    MaximoGlobal( mat, tamanho);
    //Imprime a matriz
    ImprimeMatriz(mat, tamanho);

    return 0;
}

//Função para ler a matriz
int LerMatriz(int mat[MAX][MAX], int tamanho){

    printf("\nInforme os elementos da matriz\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("\nInforme o elemento da posicao [%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }    
    }
}

int MaximoLocal(int mat[MAX][MAX], int tamanho){
    
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {   
            
            if ((mat[i][j] > mat[i][j - 1]) && (mat[i][j] > mat[i - 1][j - 1]) && (mat[i][j] > mat[i - 1][j]) && (mat[i][j] > mat[i - 1][j + 1]) && (mat[i][j] > mat[i ][j + 1]) && (mat[i][j] > mat[i  + 1][j + 1]) && (mat[i][j] > mat[i + 1][j]) && (mat[i][j] > mat[i + 1][j - 1]))
            {
                printf("\nO elemento %d, na posicao [%d][%d] eh um maximo local", mat[i][j], i, j);
            }
            
        }
        
    }
    printf("\n");

}

int MaximoGlobal(int mat[MAX][MAX], int tamanho){
    int maximoglobal = mat[tamanho/2][tamanho/2];
    int linhadomaximo, colunadomaximo;

    for (int i = 1; i < tamanho - 1; i++)
    {
        for (int j = 1; j < tamanho - 1; j++)
        {   
            
            if ((mat[i][j] > mat[i][j - 1]) && (mat[i][j] > mat[i - 1][j - 1]) && (mat[i][j] > mat[i - 1][j]) && (mat[i][j] > mat[i - 1][j + 1]) && (mat[i][j] > mat[i ][j + 1]) && (mat[i][j] > mat[i  + 1][j + 1]) && (mat[i][j] > mat[i + 1][j]) && (mat[i][j] > mat[i + 1][j - 1]))
            {                
                if (mat[i][j] > maximoglobal)
                {
                    maximoglobal = mat[i][j];
                    linhadomaximo = i;
                    colunadomaximo = j;
                }
                
                
            }
            
        }

    }
    
    // printf("\nMaximo global '%d' esta na posicao [%d][%d] da matriz", maximoglobal, linhadomaximo, colunadomaximo);
    return printf("\n%d (%d, %d)\n", maximoglobal, linhadomaximo, colunadomaximo);
}

void ImprimeMatriz(int mat[MAX][MAX], int tamanho){
    
    printf("\nOs elementos da matriz: \n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    


}