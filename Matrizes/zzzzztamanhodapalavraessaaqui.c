#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX];
    char maiorPalavra[MAX];
    char palavra[MAX];
    int tamanhoFrase, tamanhoPalavra = 0;
    int tamanhoMaiorPalavra = 0;

    printf("Escreva uma string: ");
    fgets(frase, MAX, stdin);

    tamanhoFrase = strlen(frase);
    if (frase[tamanhoFrase - 1] == '\n') {
        frase[tamanhoFrase - 1] = '\0';
        tamanhoFrase--;
    }

    for (int i = 0, k = 0; i <= tamanhoFrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            palavra[k] = '\0';
            if (tamanhoPalavra > tamanhoMaiorPalavra) {
                tamanhoMaiorPalavra = tamanhoPalavra;
                strcpy(maiorPalavra, palavra);
            }
            k = 0;
            tamanhoPalavra = 0;
        } else {
            palavra[k] = frase[i];
            k++;
            tamanhoPalavra++;
        }
    }

    printf("Maior palavra: %s\n", maiorPalavra);

    return 0;
}