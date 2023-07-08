#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX];
    printf("\nEscreva uma frase"); 
    gets(frase);
    return 0;
}

void MaiorPalavra(char frase[MAX]){
    int count = 0;
    char menorpalavra[MAX];
    for (int i = 0; i < strlen(frase); i++)
    {
        count++;
        if (frase[i] ==  ' ' || frase[i] == '\0')
        {
        
            for (int i = 0; i < count; i++)
            {
                /* code */
            }
            
        }
        
    }
    
}