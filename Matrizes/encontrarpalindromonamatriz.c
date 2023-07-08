#include <stdio.h>
#define MAX 100

int main() {
    //Declarando variáveis
    char mat[MAX][MAX];
    int linhas, colunas;
    //Recebendo o tamanho da matriz
    printf("\nInforme a quantidade de linhas da matriz\n");
    scanf("%d", &linhas);
    printf("\nInforme a quantidade de colunas da matriz\n");
    scanf("%d", &colunas);
    printf("\nEscreva os elementos da matriz\n"); 
    getchar();
    //Recebendo os elementos da matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%c", &mat[j][i]);
            getchar();
        }
        
    }
   
    //Imprimindo a matriz recebida
    printf("\nMatriz escrita:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%c  ", mat[i][j]);
        }
        printf("\n");
    }
    //Encontra os palindromos nas colunas da matriz
     for (int q = 0; q < colunas; q++){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 3; j <= linhas - i; j++)
        {
            int ehPalindromo = 1;
           
                for (int k = 0, l = j - 1; k < j; k++, l--)
                {
                    if (mat[k][q] != mat[l][q])
                    {
                        ehPalindromo = 0;
                        mat[k][q] = '*';
                        
                    }
                    
                    
                }
               
                
            }
           
            
        }
        
    }
    //Imprime a matriz com os asteriscos

    for (int i = 0; i < linhas; i++)
    {
       for (int j = 0; j < colunas; j++)
       {
        printf("%c  ", mat[i][j]);
       }
       printf("\n");
    }
    
    return 0;
}