#include <stdio.h>
#include <string.h>
#define MAX 100

void Tamanho (int* linhas, int* colunas);
void LeMatriz(char mat[MAX][MAX], int linhas, int colunas);
void Imprime(char mat[MAX][MAX], int linhas, int colunas);
void ProcuraLinha(char mat[MAX][MAX], char palavra[MAX], int linhas, int colunas, int quantidade);
void QuantidadeDeStrings(int* quantidade);

int main() {
    int quantidade, linhas, colunas;
    char mat[MAX][MAX], palavra[MAX];
    QuantidadeDeStrings(&quantidade);
    Tamanho (&linhas, &colunas);
    LeMatriz(mat, linhas, colunas);
    Imprime(mat, linhas, colunas);
    ProcuraLinha(mat, palavra, linhas, colunas, quantidade);
    Imprime(mat, linhas, colunas);
    printf("\nQuantidade de strings %d", quantidade);
    return 0;
}


void ProcuraLinha(char mat[MAX][MAX], char palavra[MAX], int linhas, int colunas, int quantidade){
    printf("\n\t\t\t\tNa linha\n");
    int contador = 0, ocorrencia = 1;
    for (int a = 0; a < quantidade; a++)
    {
        printf("\nInforme a palavra %d", a + 1);
        gets(palavra);
        
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
                        for (int k = 0; k < strlen(palavra); k++)
                            {
                                mat[i][j + k] = '*';
                            }
                    }        
            }
        }
    }
}

void QuantidadeDeStrings(int* quantidade){
    printf("\nInforme quantas strings voce deseja procurar: ");
    scanf("%d", quantidade);



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
