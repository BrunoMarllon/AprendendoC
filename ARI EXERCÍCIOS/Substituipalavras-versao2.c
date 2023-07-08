#include <stdio.h>
#include <string.h>
#define MAX 500

void Substitui(char string[MAX], char substring[MAX], char palavra[MAX], char stringfinal[MAX]);

int main() {
    char string[MAX], substring[MAX], palavra[MAX], stringfinal[MAX];
    printf("\nEscreva uma string\n"); 
    gets(string);
    printf("\nEscreva a substring\n");
    gets(substring);
    printf("\nEscreva uma palavra\n");
    gets(palavra);
    Substitui(string, substring, palavra, stringfinal);
    printf("\nfrase final: %s\n", stringfinal);
    return 0;
}

void Substitui(char string[MAX], char substring[MAX], char palavra[MAX], char stringfinal[MAX]){
    for (int i = 0; i < strlen(string) + 1; i++) {
        stringfinal[i] = string[i];
    }
    
    for (int i = 0; i < strlen(string); i++) {
        int ocorrencia = 1;
        for (int j = 0; j < strlen(substring); j++) {
            if (string[i + j] != substring[j]) {
                ocorrencia = 0;
                break;
            }   
        }
        
        if (ocorrencia) {
            for (int j = 0; j < strlen(palavra); j++) {
                stringfinal[i + j] = palavra[j];
            }
            
            for (int j = i + strlen(substring), k = i + strlen(palavra); j < MAX; j++, k++) {
                stringfinal[k] = string[j];
            }
           
        }
    }
}
