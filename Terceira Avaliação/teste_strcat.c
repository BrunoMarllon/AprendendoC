#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char frase[MAX] = "Eu gosto de ";
    char palavra[MAX];

    printf("Digite uma palavra: ");
    fgets(palavra, MAX, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; // Remove o caractere de nova linha do final da palavra

    strcat(frase, palavra);

    printf("Frase modificada: %s\n", frase);

    return 0;
}