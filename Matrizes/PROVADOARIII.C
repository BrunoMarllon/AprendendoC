#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], palavra[MAX], maiorpalavra[MAX], menorpalavra[MAX];
    int tamanhodafrase, tamanhodapalavra = 0;
    int tamanhodamaiorpalavra = 0;
    int tamanhodamenorpalavra = MAX;

    printf("Escreva uma string: ");
    fgets(frase, MAX, stdin);

    tamanhodafrase = strlen(frase);
    if (frase[tamanhodafrase - 1] == '\n') {
        frase[tamanhodafrase - 1] = '\0';
        tamanhodafrase--;
    }

    for (int i = 0, k = 0; i <= tamanhodafrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            palavra[k] = '\0';
            if (tamanhodapalavra > tamanhodamaiorpalavra) {
                tamanhodamaiorpalavra = tamanhodapalavra;
                strcpy(maiorpalavra, palavra);
            }
            if (tamanhodapalavra < tamanhodamenorpalavra)
            {
                tamanhodamenorpalavra = tamanhodapalavra;
                strcpy(menorpalavra, palavra);
            }
            
            k = 0;
            tamanhodapalavra = 0;
        } else {
            palavra[k] = frase[i];
            k++;
            tamanhodapalavra++;
        }
    }

    printf("Maior palavra: %s\n", maiorpalavra);
     printf("Maior palavra: %s\n", menorpalavra);
    return 0;
}