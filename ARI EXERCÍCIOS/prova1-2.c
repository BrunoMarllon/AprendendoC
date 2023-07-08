#include <stdio.h>
#include <string.h>
#define MAX 500

void MaiorMenor(char string[MAX], char mat[MAX][MAX], char maior[MAX], char menor[MAX]);
void Switch(char string[MAX], char mat[MAX][MAX]);
int main() {
    char string[MAX], mat[MAX][MAX], maior[MAX], menor[MAX];
    char mat2[MAX][MAX];
    int n;
    printf("\nEscreva uma frase:\n");
    fgets(string, MAX, stdin);
    MaiorMenor(string, mat, maior, menor);
    printf("\nMaior palavra: %s", maior);
    printf("\nMenor palavra: %s", menor);
    Switch(string, mat2);
  
    return 0;
}
void Switch(char string[MAX], char mat[MAX][MAX]){
    int i = 0;
    int k = 0;
    int linhas =0, tamanhodastring = strlen(string);
        for (int j = 0; string[i] != '\0' ; j++, linhas++)
        {
            
            for (k = 0; string[i] != ' '; k++)
            {
                mat[j][k] = string [i];
                i++;
                printf("%d ", i);
            }
            mat[j][k] = '\0';
            i++;
        }
        int j = 0;
        for ( i = 0; mat[i][j] != '\0'; i++)
        {
            for (j = 0; mat[i][j] != '\n'; j++)
            {
                printf("%c", mat[i][j]);
            }
           
        }
        int maiorlinha, menorlinha;
        maiorlinha = strlen(mat[0]);
        menorlinha = strlen(mat[0]);
        int maior, menor;
        for (i = 0; i < linhas; i++)
        {
            if (strlen(mat[linhas]) > maiorlinha)
            {
                maiorlinha = strlen(mat[linhas]);
                maior = linhas;
            }
            if (strlen(mat[linhas])  < maiorlinha)
            {
                menorlinha = strlen(mat[linhas]);
                menor = linhas;
            }
            
        }
        char temp[MAX];

        strcpy(temp, mat[maior]);
        strcpy(mat[maior], mat[menor]);
        strcpy(mat[menor], temp);
       int x = 0;
        for (i = 0; ; i++)
        {
            for (j = 0; mat[i][j] != '\0'; j++, x++)
            {
                string[x] = mat[i][j];
            }
            mat[i][j] = ' ';
            if (x == tamanhodastring)
            {
                break;
            }
            
        }
        string[x] = '\0';
        printf("\nstring trocada:\n");
            printf("%s ", string);
        
        
        
        
}
void MaiorMenor(char string[MAX], char mat[MAX][MAX], char maior[MAX], char menor[MAX]){
    char palavras[MAX], aux[MAX];
    string[strlen(string)] = '\0';
    string[strlen(string) + 1] = '\0';
    int maiortamanho, menortamanho;
    int tamanhodastring = strlen(string);
    int i = 0;
    int n, j;
    // Palavras para a matriz
    for (n = 0; string[i] != '\0'; n++)
    {
        for (j = 0; string[i] != ' '; i++, j++)
        {
            palavras[j] = string[i];
        }

        palavras[j] = '\0';

        strcpy(mat[n], palavras);
        i++;
    }
   

    //determina a maior e menor palavra
    for (int j = 0; j < MAX; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (strlen(mat[i]) < strlen(mat[i + 1]))
            {
                strcpy(aux, mat[i]);
                strcpy(mat[i], mat[i + 1]);
                strcpy(mat[i + 1], aux);
            }
            
        }
    }
    strcpy(maior, mat[0]);
    strcpy(menor, mat[n-1]);
}
