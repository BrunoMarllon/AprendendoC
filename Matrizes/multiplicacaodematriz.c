#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(){
    int mat[MAX][MAX], MAT[MAX][MAX], produto[MAX][MAX], soma=0;
    int linhas, colunas, LINHAS, COLUNAS;
    srand( time( NULL ));
    //Recebendo o tamanho da matriz
    for (int i = 0; i == 0;){  
        printf("\nescreva a quantidade de LINHAS da PRIMEIRA matriz\n");
        scanf("%d", &linhas);
        printf("\nescreva a quantidade de COLUNAS da PRIMEIRA matriz\n");
        scanf("%d", &colunas);
        printf("\n escreva a quantidade de LINHAS da SEGUNDA matriz\n");
        scanf("%d", &LINHAS);
        printf("\n escreva a quantidade de COLUNAS da SEGUNDA matriz\n");
        scanf("%d", &COLUNAS);
        if (colunas == LINHAS)
        {
            i = 1;
            break;
        }else {
            printf("\n por favor escreva matrizes que possam ser multiplicadas\n");
        }
    
    }

    

    //Criando a primeira matriz aleatoria
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat[i][j] = rand() % 10;
        } 
    }
    //Criando a segunda matriz aleatória
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            MAT[i][j] = rand() % 10;
        }
        
    }
    printf("\nA primeira matriz:\n");
    //Imprimindo a primeira matriz aleatória
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nA segunda matriz:\n");
    //Imprimindo a segunda matriz aleatória
    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d  ", MAT[i][j]);
        }
        printf("\n");
    }

    //Multiplicando as matrizes
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            for (int k = 0; k < colunas; k++)
            {
                soma += mat[j][k] * MAT[k][i];
            }
            produto[i][j] = soma;
            soma = 0;
        }
        
    }

    //Imprimindo o resultado
    printf("\n produto das matrizes: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ",produto[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}