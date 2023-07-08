#include <stdio.h>
#include <string.h>
#define MAX 100
void Strings(char mat[MAX][MAX], int n, char ordenada[MAX]);
int main() {
    int n;
    char mat[MAX][MAX], ordenada[MAX];

    printf("\nInforme quantas strings voce deseja escrever\n"); 
    scanf("%d", &n);
    getchar();
    Strings(mat, n, ordenada);
    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", mat[i]);
    }
    printf("\nstring ordenada\n");
    printf("%s", ordenada);

    return 0;
}

void Strings(char mat[MAX][MAX], int n, char ordenada[MAX]){
    char string[MAX];

    for (int i = 0; i < n; i++)
    {
        printf("\nInforme a string %d", i + 1);
        gets(string);
        
        
            int k = 0;
            for (k = 0; string[k] != '\0'; k++)
            {
                mat[i][k] = string[k];
            }
            mat[i][k] = '\0'; 
    }

    char aux[MAX];

    for (int k = 0; k < n * 2; k++){ 
        for (int j = 0; j < n; j++)
        {
            if (strlen(mat[j]) < strlen(mat[j + 1]))
            {
                strcpy(aux, mat[j]);
                strcpy(mat[j], mat[j+1]);
                strcpy(mat[j+1], aux);
                
            }
            
        }
        }

        int  z = 0;

       for (int x = 0; x < n; x++)
       {
            for (int y = 0; mat[x][y] != '\0'; y++, z++)
            {
                ordenada[z] = mat[x][y];
                
            }
            ordenada[z] = ',';
            z++;
            ordenada[z] = ' ';
            z++;
       }
       ordenada[z - 2] = '\0';

    

}