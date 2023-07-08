#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], subfrase[MAX], subfraseaocontrario[MAX];
    int count = 0, tamanhodafrase; 
    printf("\nEscreva uma frase\n");
    fgets(frase, MAX, stdin);
    tamanhodafrase = strlen(frase) -1;
    for (int i = 0; i < tamanhodafrase; i++)
    {
        for (int j = 3; j < tamanhodafrase - i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                subfrase[k] = frase[k];
                
            }
            for (int l = 0, m = j-1; i < j ; l++, m--)
            {
                if (subfrase[l] != subfrase[m] )
                {
                    printf("\n%s eh um palindromo\n", subfrase);
                }
                
            }
            
        }
        
    }
    

    return 0;
}