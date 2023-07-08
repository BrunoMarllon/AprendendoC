#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX];
    char maiorPalavra[MAX];
    char menorPalavra[MAX];
    int tamanhoFrase, tamanhoPalavra, tamanhoMaiorPalavra = 0, tamanhoMenorPalavra = MAX;
    int i, j, k, inicioPalavra;

    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    tamanhoFrase = strlen(frase);
    if (frase[tamanhoFrase - 1] == '\n') {
        frase[tamanhoFrase - 1] = '\0';
        tamanhoFrase--;
    }

    inicioPalavra = 0;
    for (i = 0; i <= tamanhoFrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            tamanhoPalavra = i - inicioPalavra;
            if (tamanhoPalavra > tamanhoMaiorPalavra) {
                for (j = 0, k = inicioPalavra; j < tamanhoPalavra; j++, k++) {
                    maiorPalavra[j] = frase[k];
                }
                maiorPalavra[tamanhoPalavra] = '\0';
                tamanhoMaiorPalavra = tamanhoPalavra;
            }
            if (tamanhoPalavra < tamanhoMenorPalavra) {
                for (j = 0, k = inicioPalavra; j < tamanhoPalavra; j++, k++) {
                    menorPalavra[j] = frase[k];
                }
                menorPalavra[tamanhoPalavra] = '\0';
                tamanhoMenorPalavra = tamanhoPalavra;
            }
            inicioPalavra = i + 1;
        }
    }

    printf("Maior palavra: %s\n", maiorPalavra);
    printf("Menor palavra: %s\n", menorPalavra);

    return 0;
}