#include <stdio.h>
#include <string.h>
#define MAX 100

void Le(char frase[MAX], char substring[MAX], char substituta[MAX]);
void Imprime(char frase[MAX], char substring[MAX], char substituta[MAX]);
void Substitui(char frase[MAX], char novafrase[MAX], char substring[MAX], char substituta[MAX]);

int main() {
    char frase[MAX], novafrase[MAX], substring[MAX], substituta[MAX];
    Le(frase, substring, substituta);
    Imprime(frase, substring, substituta);
    Substitui(frase, novafrase, substring, substituta);
    printf("\nNova frase: %s", novafrase);
    return 0;
}

void Substitui(char frase[MAX], char novafrase[MAX], char substring[MAX], char substituta[MAX]) {
  int q = 0;
  
  for (int i = 0; i < strlen(frase); i++)
  {
        int igual = 1;
        for (int j = 0; j < strlen(substring); j++)
        {
            if (frase[i + j] != substring[j])
            {
                igual = 0;
                break;
            }
        }
        if (igual){

            printf("\nEncontrado");

            for (int x = 0; x < strlen(substituta); x++)
                {
                    novafrase[q] = substituta[x];
                    q++; 
                }

            i = i + strlen(substring) - 1;
                }

            if (igual != 1){
                novafrase[q] = frase[i];
                q++;
            }  
    }
        novafrase[q] = '\0';
  }
  


void Le(char frase[MAX], char substring[MAX], char substituta[MAX]) {
    printf("Informe a frase: ");
    gets(frase);
    printf("Informe a substring: ");
    gets(substring);
    printf("Informe a substituta: ");
    gets(substituta);
}

void Imprime(char frase[MAX], char substring[MAX], char substituta[MAX]) {
    printf("\nFrase: %s", frase);
    printf("\nSubstring: %s", substring);
    printf("\nSubstituta: %s", substituta);
}
