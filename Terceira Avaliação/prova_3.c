#include <stdio.h>
#include <string.h>
#define MAX 100
void Tamanho (int* linhas, int* colunas);
void LeMatriz(char mat[MAX][MAX], int linhas, int colunas);
void Imprime(char mat[MAX][MAX], int linhas, int colunas);
void LePalavra(char palavra[MAX]);
void ImprimePalavra(char palavra[MAX]);
int ProcuraLinha(char mat[MAX][MAX], char palavra[MAX], int linhas, int colunas);
int ProcuraColuna(char mat[MAX][MAX], char palavra[MAX], int linhas, int colunas);
void QuantasVezes(int vezes);
int main() {
    char mat[MAX][MAX], palavra[MAX];
    int linhas, colunas, vezes;
    Tamanho (&linhas, &colunas);
    LeMatriz(mat, linhas, colunas);
    Imprime(mat, linhas, colunas);
    LePalavra(palavra);
    ImprimePalavra(palavra);
    ProcuraLinha(mat, palavra, linhas, colunas);
    ProcuraColuna(mat, palavra, linhas, colunas);
    vezes = ProcuraLinha(mat, palavra, linhas, colunas) + ProcuraColuna(mat, palavra, linhas, colunas);
    QuantasVezes(vezes);
    return 0;
}

void QuantasVezes(int vezes){
    printf("\nA frase aparece na matriz %d vezes", vezes);
}

int ProcuraColuna(char mat[MAX][MAX], char palavra[MAX], int linhas, int colunas){
    printf("\n\t\t\tNa coluna\n");
    int contador = 0, ocorrencia = 1;
    for (int i = 0; i < linhas - 1 ; i++)
    {
        for (int j = 0; j < colunas ; j++)
        {
            ocorrencia = 1;
            for (int k = 0; k < strlen(palavra); k++)
            {
                if (palavra[k] != mat[i + k][j])
                {
                    ocorrencia = 0;
                    break;
                }             
            }     
            if (ocorrencia == 1)
                {
                    contador++;
                    printf("\nA palavra aparece na matriz: ");
                }        
        }
    }
    printf("\nContador: %d", contador);
    return contador;
    //printf("\nOcorrencia: %d", ocorrencia);
}

int ProcuraLinha(char mat[MAX][MAX], char palavra[MAX], int linhas, int colunas){
    printf("\n\t\t\t\tNa linha\n");
    int contador = 0, ocorrencia = 1;
    for (int i = 0; i < linhas ; i++)
    {
        for (int j = 0; j < colunas - 1; j++)
        {
            ocorrencia = 1;
            for (int k = 0; k < strlen(palavra); k++)
            {
                if (palavra[k] != mat[i][j + k])
                {
                    ocorrencia = 0;
                    break;
                }             
            }     
            if (ocorrencia == 1)
                {
                    contador++;
                    printf("\nA palavra aparece na matriz: ");
                }        
        }
    }
    printf("\nContador: %d", contador);
    return contador;
    //printf("\nOcorrencia: %d", ocorrencia);
}









void ImprimePalavra(char palavra[MAX]){
    printf("\nPalavra informada: %s", palavra);
}

void LePalavra(char palavra[MAX]){

    printf("\nInforme uma palavra: ");
    gets(palavra);
}

void Imprime(char mat[MAX][MAX], int linhas, int colunas){

    printf("\nMatriz informada:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
        
    }
}

void LeMatriz(char mat[MAX][MAX], int linhas, int colunas){
    printf("\nInforme os elemento da matriz: ");
    for (int i = 0; i < linhas ; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%c", &mat[i][j]);
            getchar();
        }
        
    }
}
void Tamanho (int* linhas, int* colunas){
    printf("\nInforme o numero de linhas: ");
    scanf("%d", linhas);
    getchar();
    printf("\nInforme o numero de colunas: ");
    scanf("%d", colunas);
    getchar();
}