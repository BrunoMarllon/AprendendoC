#include <stdio.h>
#include <string.h>
#define MAX 200

void Imprime(char mat[MAX][MAX], int linhas, int colunas);
void Resultado(int contador);
void Padrao(char mat[MAX][MAX], int linhas, int colunas, int *contador);
void Tamanho(int* linhas, int* colunas);
void Ler(char mat[MAX][MAX], int linhas, int colunas);

int main() {
    int linhas, colunas, contador;
    char mat[MAX][MAX];
    Tamanho(&linhas, &colunas);
    
    Ler(mat, linhas, colunas);
    Imprime(mat, linhas, colunas);
    Padrao(mat, linhas, colunas, &contador);
    Resultado(contador);
    return 0;
}



void Resultado(int contador){
    printf("\nO padrao ocorre %d vezes", contador);
}
void Padrao(char mat[MAX][MAX], int linhas, int colunas, int *contador){

   int ocorrencias = 0;
   for (int i = 0; i < linhas; i++)
   {
        for (int j = 0; j < colunas - 1; j++)
        {
           if (mat[i][j] == '*' && mat[i - 1][j] == '*' && mat[i][j + 1] == '*')
           {
            ocorrencias++;
           }
           
        }   
   }
   
   *contador = ocorrencias;


}

void Tamanho(int* linhas, int* colunas){
    printf("\nInforme a quantidade de linhas");
    scanf("%d", linhas);
    getchar();
    printf("\nInforme a quantidade colunas");
    scanf("%d", colunas);
    getchar();
}
void Ler(char mat[MAX][MAX], int linhas, int colunas){
    printf("\ndigite os elementos\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            
            scanf("%c", &mat[i][j]);
            getchar();
        }
        
    }
    
}
void Imprime(char mat[MAX][MAX], int linhas, int colunas){
    
    
    printf("\nmatriz\n");

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}


