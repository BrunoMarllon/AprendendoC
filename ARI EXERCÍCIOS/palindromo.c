#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], subfrase[MAX];
    int tamanhodafrase;
    printf("\nEscreva uma frase:\n");
    fgets(frase, MAX, stdin);
    tamanhodafrase = strlen(frase) - 1;

    for (int i = 0; i < tamanhodafrase; i++) {
        for (int j = 3; j <= tamanhodafrase - i; j++) {
            // Copia a subfrase atual para a variável subfrase
            for (int k = 0; k < j; k++) {
                subfrase[k] = frase[i + k];
            }
            subfrase[j] = '\0';

            // Verifica se a subfrase é um palíndromo
            int ehPalindromo = 1;
            for (int k = 0, l = j - 1; k < l; k++, l--) {
                if (subfrase[k] != subfrase[l]) {
                    ehPalindromo = 0;
                    break;
                }
            }

            // Se for um palíndromo, imprime a subfrase
            if (ehPalindromo) {
                printf("%s eh um palindromo\n", subfrase);
            }
        }
    }

    return 0;
}