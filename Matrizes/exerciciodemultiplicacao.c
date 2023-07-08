#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define MAX 20

int main() {
    int mat[MAX][MAX], tamanho = 20;
    int direita =0, maiordireita = INT_MIN, linhadireita, colunadireita;
    int cima = 0, maiorcima = INT_MIN, linhacima = 0, colunacima = 0;
    int diagonal = 0, maiordiagonal = INT_MIN, linhadiagonal = 0, colunadiagonal = 0;
    int baixo = 0, maiorbaixo = INT_MIN, linhabaixo = 0, colunabaixo = 0;
    int esquerda = 0, maioresquerda = INT_MIN, linhaesquerda = 0, colunaesquerda = 0;

    //Gerando uma matriz
    srand( time(NULL) );
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            mat[i][j] = 1 + (rand() % 9);
        } 
    }

    //Produto dos quatro numeros consecutivos na direita
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho - 3; j++) {
            direita = mat[i][j] * mat[i][j+1] * mat[i][j+2] * mat[i][j+3];
            if (direita > maiordireita) {
                maiordireita = direita;
                linhadireita = i;
                colunadireita = j;
            }
        }
    }
    //Imprimindo a matriz
    printf("Matriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
     //Imprimindo o maior produto de quatro numeros na direita e a sua localização
    printf("\nO maior produto de quatro numeros para a direita: %d\n", maiordireita);
    printf("A sequencia do maior produto começa em [%d][%d]\n\n", linhadireita, colunadireita);

    //Produto de quatro numeros consecutivos para cima
    for(int i = tamanho-1; i > 2; i--){
        for (int j = 0; j < tamanho; j++)
        {
            cima = mat[i][j]*mat[i-1][j]* mat[i-2][j]*mat[i-3][j];
            if (cima > maiorcima)
            {
                maiorcima = cima;
                linhacima = i;
                colunacima = j;
            }
            
        }
    }
    //Imprimindo a matriz
    printf("Matriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    //imprimindo o maior produto de quatro numeros consecutivos para cima
        printf("\nO maior produto de quatro numeros consecutivos para cima: %d\n", maiorcima);
        printf("A sequencia do maior produto de quatro numeros começa em [%d][%d]\n\n", linhacima, colunacima);

    //Produto de quatro numeros consecutivos na diagonal
    for(int i = 0; i < tamanho - 3; i++){
        for (int j = 0; j < tamanho - 3; j++)
        {
            diagonal = mat[i][j] * mat[i+1][j+1] * mat[i+2][j+2] * mat[i+3][j+3];
            if(diagonal > maiordiagonal){
                maiordiagonal = diagonal;
                linhadiagonal = i;
                colunadiagonal = j;
            }
        }

    }
    //Imprimindo a matriz
    printf("Matriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    //Imprimindo o maior produto de quatro numeros consecutivos na diagonal
    printf("\nO maior produto de quatro numeros consecutivos na diagonal\n: %d", maiordiagonal);
    printf("\nO maior produto de quatro numeros consecutivos na diagonal começa em: [%d][%d]\n", linhadiagonal, colunadiagonal);

     //Imprimindo a matriz
    printf("Matriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    //Produto de quatro numeros consecutivos para baixo 
    for (int i = 0; i < tamanho -3; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            baixo = mat[i][j] * mat[i+1][j] * mat[i+2][j] * mat[i+3][j];
            if (baixo > maiorbaixo)
            {
                maiorbaixo = baixo;
                linhabaixo = i;
                colunabaixo = j;
            }
            
        }
        
    }
    
    //Imprimindo o maior produto de quatro numeros consecutivos para baixo
    printf("\nO maior produto de quatro numeros consecutivos para baixo: %d\n", maiorbaixo);
    printf("O maior produto de quatro numeros consecutivos começa em: [%d][%d]\n", linhabaixo, colunabaixo);

    //Imprimindo a matriz
    printf("\nMatriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //Produto de quatro numeros conecutivos para a esquerda
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = tamanho-1; j > 2; j--)
        {
          esquerda = mat[i][j] * mat[i][j-1] * mat[i][j-2] * mat[i][j-3]; 
          if(esquerda > maioresquerda){

            maioresquerda = esquerda;
            linhaesquerda = i;
            colunaesquerda = j;
          }
        }
    }
    
    //Imprimindo o maior produto de quatro numeros consecutivos a esquerda
    printf("\nO maior produto de numeros consecutivos a esquerda: %d\n", maioresquerda);
    printf("O maior produto de quatro numeros consecutivos começa em [%d][%d]\n", linhaesquerda, colunaesquerda);

     //Imprimindo a matriz
    printf("\nMatriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}