#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX 100

void Le(char frase[MAX]);
void MaiorPalavra(char frase[MAX], char palavra[MAX]);
void MenorPalavra(char frase[MAX], char menorpalavra[MAX]);

int main() {
    char frase[MAX], maiorpalavra[MAX], menorpalavra[MAX];
     
    Le(frase);
   
    //printf("\n%s", frase);
    MaiorPalavra(frase, maiorpalavra); 
    MenorPalavra(frase, menorpalavra);

    printf("\nMenor palavra: %s", menorpalavra);
    printf("\nMaior palavra: %s", maiorpalavra);
    return 0;
}

void MenorPalavra(char frase[MAX], char menorpalavra[MAX]){
    int tamanho = strlen(frase) - 1;
    int k = 0, menor = INT_MAX; 
    char palavra[MAX];

    for (int i = 0; i < tamanho ; i++)
    {

       
        if(i == 0 || frase[i] == ' '){
            if (frase[i] == ' ')
            {
                i++;
            }
            
            k = i;
            for (int j = 0; frase[k] !=  ' '; j++, k++)
            {
                palavra[j] = frase[k];
                palavra[j + 1] = '\0';
            }
            
            
        }
        printf("\n%s", palavra);
        if (strlen(palavra) < menor)
        {
            menor = strlen(palavra);
            strcpy(menorpalavra, palavra);
        }
        
    }
    
    //  printf("\nMaior palavra: %s", maiorpalavra);


}



void MaiorPalavra(char frase[MAX], char maiorpalavra[MAX]){
    int tamanho = strlen(frase) - 1;
    int k = 0, maior = 0; 
    char palavra[MAX];

    for (int i = 0; i < tamanho ; i++)
    {

       
        if(i == 0 || frase[i] == ' '){
            if (frase[i] == ' ')
            {
                i++;
            }
            
            k = i;
            for (int j = 0; frase[k] !=  ' '; j++, k++)
            {
                palavra[j] = frase[k];
                palavra[j + 1] = '\0';
            }
            
            
        }
        printf("\n%s", palavra);
        if (strlen(palavra) > maior)
        {
            maior = strlen(palavra);
            strcpy(maiorpalavra, palavra);
        }
        
    }
    
    //  printf("\nMaior palavra: %s", maiorpalavra);


}

void Le(char frase[MAX]){
    printf("\nInforme uma frase: "); 
    fgets(frase, MAX, stdin);
    int tamanhodafrase;
    tamanhodafrase = strlen(frase);
    frase[tamanhodafrase - 1] = ' ';
}