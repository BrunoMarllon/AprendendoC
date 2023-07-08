#include <stdio.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], tamanho = 4;
    printf("digite 16 numeros no intervalo [1,20]"); 
    for (int i = 0; i < tamanho; i++)
    {
       for (int j = 0; j < tamanho; j++)
       {
        scanf("%d", &mat[i][j]);
        if(mat[i][j]>20 || mat[i][j]<1){
            j--;
            printf("\npor favor, escreva um numero dentro do intervalo[1,20]\n");
        }
       }
    }
    printf("\n a matriz escrita:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("a matriz com o triangulo inferior\n");

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (i<j)
            {
                printf("%c ", 0);
            }
            else if(i>=j){
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");   
    }
    
    return 0;
}