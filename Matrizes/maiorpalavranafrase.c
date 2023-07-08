#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], palavra[MAX];
    int tamanhodafrase, tamanhodapalavra = 0, count = 0;
    printf("\nEscreva uma string\n"); 
    fgets(frase, MAX, stdin);
    tamanhodafrase = strlen(frase) - 1;
    for (int i = 0; i <= tamanhodafrase; i++)
    {
        if (frase[i] == ' ' || frase[i] == '\0' )
        {
            
        } else {
            count++;
        }
        
    }
    
    
    return 0;
}