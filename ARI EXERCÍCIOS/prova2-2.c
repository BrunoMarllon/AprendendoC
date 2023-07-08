#include <stdio.h>
#include <string.h>
#define MAX 100
void Le(char frase[MAX]);
void Palindromo(char frase[MAX]);
int main() {
    char frase[MAX];
    Le(frase);
    Palindromo(frase);
    return 0;
}

void Le(char frase[MAX]){
    printf("\nDigite uma frase\n"); 
    fgets(frase, MAX, stdin);
    frase[strlen(frase)] = ' ';
    frase[strlen(frase) + 1] = '\0';
}

void Palindromo(char frase[MAX]){
    char palavra[MAX], mat[MAX][MAX];
    int linhas = 0;
    for (int i = 0, j = 0; i < strlen(frase); i++)
    {
        
        
        if (frase[i] != ' ' && frase[j] != '\0')
        {
            palavra[j] = frase[i];
            j++;
        } else {
            palavra[j] = '\0';
            for (size_t i = 0; i < count; i++)
            {
                /* code */
            }
            
            
            
            strcpy(mat[linhas], palavra);
            linhas++;

            j = 0;

        }
        
    }
    
    for (int i = 0; i < linhas; i++)
    {
        printf("\n%s", mat[i]);
    }
    

}