#include <stdio.h>
#include <string.h>
#define MAX 100

void Le(char frase[MAX]);
void AoContrario(char frase[MAX]);

int main() {
    char frase[MAX];
    
    Le(frase);
    AoContrario(frase);
    printf("\nFrase invertida: %s", frase);
    
    return 0;
}

void AoContrario(char frase[MAX]){

    char palavra[MAX], aocontrario[MAX];
    int x = 0;
    for (int i = 0, j = 0; i < strlen(frase) + 1; i++)
    {
        palavra[j] = frase[i];
        j++;
        if (frase[i] == ' ' || frase[i] == '\0')
        {
            palavra[j] = '\0';
            //printf("\n%s", palavra);
            j = 0;

            
            for (int y = strlen(palavra) - 2  ; palavra[y] != '\0';  y--)
            {
                //printf("\n%s", palavra);
                aocontrario[x] = palavra[y];
                x++;
            }
            aocontrario[x] = ' ';
            x++;
            aocontrario[x] = '\0';
           
            printf("\n%s", aocontrario);
        }
        
    }
    strcpy(frase, aocontrario);
    }

void Le(char frase[MAX]){

    printf("Digite uma frase: ");
    gets(frase);  
    frase[strlen(frase) ] = ' ';  
    frase[strlen(frase) ] = '\0';  
}