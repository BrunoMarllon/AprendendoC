#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], maiorpalavra[MAX], palavra[MAX], tamanhodapalavra[MAX];
    int tamanhodafrase, tamanhodamaiorpalavra = 0;

    printf("\nDigite uma frase"); 
    fgets(frase, MAX, stdin);
    tamanhodafrase = strlen(frase);
    if (frase[tamanhodafrase - 1] == '\n' )
    {
        frase[tamanhodafrase -1] == '\0';
        tamanhodafrase--;
    }
    for (int i = 0, k = 0; i < tamanhodafrase; i++)
    {
        if (frase[i] == ' ' || frase[i] =='\0')
        {
            palavra[k] = '\0';
            if (tamanhodamaiorpalavra < )
            {
                /* code */
            }
            
        }
        
    }
    
    
    
    return 0;
}