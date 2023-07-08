#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], palavra[MAX];
    int count=0, ocorrencia=0;
    printf("escreva uma frase\n");
    fgets(frase, MAX, stdin);
    printf("digite uma palavra\n");
    fgets(palavra, MAX, stdin);
    frase[strcspn(frase, "\n")] = '\0'; // remove newline character
    palavra[strcspn(palavra, "\n")] = '\0'; // remove newline character

    for (int i = 0; i < strlen(frase); i++)
    {
        int j;
        for (j = 0; j < strlen(palavra); j++)
        {
            if (frase[i+j] != palavra[j])
            {
                break;
            }
        }
        if (j == strlen(palavra))
        {
            ocorrencia++;
        }
    }
    printf("a palavra %s se repete %d vezes dentro da frase %s\n", palavra, ocorrencia, frase);
    return 0;
}