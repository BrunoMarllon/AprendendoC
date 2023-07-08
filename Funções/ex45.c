#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int MaioresQueDez(int [][MAX]);
int AcimaDaDiagonalPrincipal(int [][MAX]);
int AbaixoDaDiagonalPrincipal(int [][MAX]);
int SomaDaDiagonalPrincipal(int [][MAX]);

int main() {
    int mat[MAX][MAX], linhas = 4, colunas = 4, resultado, somaacima, somaabaixo, somadadiagonalprincipal;

    srand(time(NULL));
    //Gerando a matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat[i][j] = rand( ) % 10;
        }
        
    }
    //Imprimindo a matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    //Imprimindo os numeros maiores que 10
    resultado = MaioresQueDez(mat);
    printf("\nQuantidade de numeros maiores que 10 existentes na função: %d", resultado);
    //imprimindo a soma dos elementos acima da diagonal principal
    somaacima = AcimaDaDiagonalPrincipal(mat);
    printf("\nA soma dos numeros acima da diagonal principal: %d", somaacima);
    //Imprimindo a soma dos elementos abaixo da diagonal principal
    somaabaixo = AbaixoDaDiagonalPrincipal( mat);
    printf("\nA soma dos numeros abaixo da diagonal principal: %d\n", somaabaixo);
    //Imprimindo a soma dos elementos da diagonal principal
    somadadiagonalprincipal = SomaDaDiagonalPrincipal(mat);
    printf("\nA soma dos numeros da diagonal principal: %d", somadadiagonalprincipal);


    return 0;
}

int MaioresQueDez(int mat[MAX][MAX]){
    int linhas = 4, colunas = 4, count = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (mat[i][j] > 10)
            {
                count++;
            }
            
        }
        
    }

     return count;
    }
   

  int AcimaDaDiagonalPrincipal(int mat[MAX][MAX]){

    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < j)
            {
                soma += mat[i][j];
            }
            
        }
        
    }
    
    return soma;

}

int AbaixoDaDiagonalPrincipal(int mat[MAX][MAX]){

    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                soma += mat[i][j];
            }
            
        }
        
    }
    }
    int SomaDaDiagonalPrincipal(int mat[MAX][MAX]){

    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                soma += mat[i][j];
            }
            
        }
        
    }
    return soma;

}