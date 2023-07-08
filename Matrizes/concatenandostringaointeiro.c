#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    int n, tamanho;
    char string[MAX];
    printf("\nDigite uma frase\n");
    fgets(string, MAX, stdin);
    printf("\nescreva um numero\n"); 
    scanf("%d", &n);
   
    tamanho = strlen(string) - 1;
    sprintf(string+ tamanho, "%d", n);
    string[tamanho+1] = '\0';

    printf("\nA string concatenada: %s\n", string);
    
    



    return 0;
}