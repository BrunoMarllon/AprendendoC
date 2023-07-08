#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char s[MAX], S[MAX], string[MAX];
    int tamanho, tamanho2, tamanho3;
    //Recebendo as duas primeiras strings
    printf("\n Digite uma frase \n");
    fgets(s, MAX, stdin);
    tamanho = strlen(s) - 1; //Define o tamanho da primeira string
    printf("\n Digite outra frase \n");
    fgets(S, MAX, stdin);
    tamanho2 = strlen(S) - 1; // Define o tamanho da Segunda string
    //Concatena as duas strings
    for (int i = tamanho + 1, j = 0; i < tamanho2 + tamanho + 1; i++, j++)
    {
        s[tamanho] = ' '; //Substitui o caractere '\0' por ' '
        s[i] = S[j];
    }
    //Imprime as duas strings
    printf("\nAs duas frases digitadas\n");
    for (int i = 0; i < tamanho + tamanho2 + 1; i++)
    {
        printf("%c", s[i]);
    }
    //Recebe outra string
    printf("\nEscreva outra frase\n");
    fgets(string, MAX, stdin);
    tamanho3 = strlen(string) - 1;
    //Concatena a string recebida
    for (int i = tamanho + tamanho2 + 2, j = 0; i < tamanho + tamanho2 + tamanho3 + 2; i++, j++)
    {
        s[tamanho + tamanho2 + 1] = ' ';
        s[i] = string[j];
    }

    //Imprime a string concatenada 
    printf("\n A frases digitadas: \n");
    for (int i = 0; i < tamanho + tamanho2 + tamanho3 + 2; i++)
    {
        printf("%c", s[i]);
    }
    
    return 0;
}