#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 6

int main() {
    int mat[MAX][MAX], tamanho = 6, direita=0, maiordireita = 0, colunadireita, linhadireita;

    //Gerando uma matriz
    srand( time(NULL) );
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            mat[i][j] = 1 + (rand() % 9);
        }
        
    }
    //Produto dos quatro numeros na direita
    for (int i = 0; i < tamanho-3; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            direita = mat[i][j] * mat[i+1][j] * mat[i+2][j] * mat[i+3][j];
            if(direita>maiordireita){
                maiordireita = direita;
                colunadireita = i;
                linhadireita = j; 
            }
        }
    }
    //Imprimindo o maior produto de quatro numeros a direita e a sua localização
    printf("\no maior produto de quatro numeros na direita: %d\n\n", maiordireita);
    printf("a sequencia d maior produto começa em [%d][%d]\n", colunadireita, linhadireita);
    
    //Imprimindo a matriz
    printf("\nmatriz gerada\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    
    

    return 0;
}