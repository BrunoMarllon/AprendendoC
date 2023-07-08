#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase1[MAX], frase2[MAX];
    int tamanho1;

    printf("Digite a primeira frase: ");
    fgets(frase1, MAX, stdin);
    tamanho1 = strlen(frase1) - 1;

    printf("Frase digitada: %s\n", frase1);

    printf("Digite a segunda frase: ");
    fgets(frase2, MAX, stdin);

    // Posiciona a segunda frase onde a primeira parou
    strncpy(frase1 + tamanho1, frase2, MAX - tamanho1 - 1);

    printf("Frase final: %s\n", frase1);

    return 0;
}