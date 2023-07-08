#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], destino[MAX];
    printf("\nDigite uma frase\n");
    fgets(frase, MAX, stdin);
    strncpy(destino, frase, 12);

    printf("A frase digitada: %s\n", destino);
    return 0;
}