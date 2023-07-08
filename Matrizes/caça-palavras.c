#include <stdio.h>
#include <string.h>
#define MAX 100

int main (){
    char mat[MAX][MAX], string[MAX], tamanhodapalavra;
    int linhas, colunas, count = 0;
    printf("\nEscreva a quantidade de linhas da matriz\n");
    scanf("%d", &linhas);
    printf("\nEscreva a quantidade de colunas da matriz\n");
    scanf("%d", &colunas);
    printf("\nEscreva os elementos da matriz");
    getchar();
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%c", &mat[i][j]);
            getchar();
        }
        
    }
    printf("\nA matriz digitada: \n");

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEscreva a palavra que deseja procurar na matriz\n");
    fgets(string, MAX, stdin);
    getchar();
    tamanhodapalavra = strlen(string) - 1;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            for (int l = j, k = 0; l < colunas - tamanhodapalavra; l++, k++)
            {
                //Procura a palavra da esquerda para a direita
                if (string [k] == mat[i][l])
                {
                    count++;
                }
                
            }
            
        }
        
    }
    if (count == tamanhodapalavra)
    {
        printf("\nA palavra %s existe na matriz\n", string);
    }else{
        printf("\nA palavra digitada nao existe na matriz\n");
    }
    
    



    return 0;
}