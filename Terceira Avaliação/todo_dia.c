#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], novafrase[MAX], substring[MAX], substituta[MAX];
    printf("\nInforme uma frase:\n");
    fgets(frase, sizeof(frase), stdin);
    printf("\nInforme uma substring:\n");
    fgets(substring, sizeof(substring), stdin);
    printf("\nInforme uma string que irá substituir a substring:\n");
    fgets(substituta, sizeof(substituta), stdin);

    int frase_len = strlen(frase);
    int substring_len = strlen(substring);
    int substituta_len = strlen(substituta);

    int i, j, k;
    int match_found = 0;

    for (i = 0, j = 0; i < frase_len; i++) {
        match_found = 0;

        if (frase[i] == substring[0]) {
            match_found = 1;

            for (k = 1; k < substring_len - 1; k++) {
                if (frase[i + k] != substring[k]) {
                    match_found = 0;
                    break;
                }
            }
        }

        if (match_found) {
            for (k = 0; k < substituta_len - 1; k++) {
                novafrase[j++] = substituta[k];
            }
            i += substring_len - 2;
        } else {
            novafrase[j++] = frase[i];
        }
    }

    novafrase[j] = '\0';  // Add

    printf("\nNova frase: %s", novafrase);
    return 0;
}