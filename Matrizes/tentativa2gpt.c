#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX];
    char maiorPalavra[MAX];
    char menorPalavra[MAX];
    char palavra[MAX];
    int tamanhodafrase, tamanhodapalavra = 0;
    int tamanhoMaiorPalavra = 0, tamanhoMenorPalavra = MAX;

    printf("Escreva uma string: ");
    fgets(frase, MAX, stdin);

    tamanhodafrase = strlen(frase);
    if (frase[tamanhodafrase - 1] == '\n') {
        frase[tamanhodafrase - 1] = '\0';
        tamanhodafrase--;
    }

    for (int  i = 0, k = 0; i < tamanhodafrase; i++, k++)
    {
        frase[i] = palavra[k];
        if (frase[i] == ' ' || frase [i] == '\0')
        {
            palavra[k] = frase[i];
            palavra[i+1] = '\0';
            k=0;
        }
        printf("\nA palavra %s tem tamanho%d", palavra, strlen(palavra));
        
    }
    

    

    return 0;
}