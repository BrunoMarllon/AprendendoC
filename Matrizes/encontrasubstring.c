#include <stdio.h> 
#include <string.h>
#define MAX 100

int main() {
    char primeirastring[MAX], segundastring[MAX], stringconcatenada[MAX]; //Declarando as strings
    int tamanhodaprimeirastring, tamanhodasegundastring, count = 0;
    //Recebe as duas strings
    printf("\nEscreva a primeira string\n");
    fgets(primeirastring, MAX, stdin);
    printf("\nEscreva a segunda string\n");
    fgets(segundastring, MAX, stdin);
    //Determina o tamanho das duas strings
    tamanhodaprimeirastring = strlen(primeirastring) - 1;
    tamanhodasegundastring = strlen(segundastring) - 1;

    //Concatena a primeira string com a segunda string
    for (int i = 0; i < tamanhodaprimeirastring; i++)
    {
        stringconcatenada[i] = primeirastring[i];
    }

    for (int i = tamanhodaprimeirastring + 2, j = 0; i < tamanhodaprimeirastring + tamanhodasegundastring + 2; i++, j++)
    {
        stringconcatenada[tamanhodaprimeirastring + 1]= ' ';
        stringconcatenada[i] = segundastring[j];
    }
    
    
    
    //Verifica se a segunda string é uma substring da primeira string
    for (int i = 0; i < tamanhodaprimeirastring; i++)
    {
        count = 0;
        for (int j = 0, k=i; j < tamanhodaprimeirastring; j++, k++)
        {
            if (primeirastring[k] == segundastring[j])
            {
                count++;
            }
             if (count == tamanhodasegundastring)
                {
                    printf("\nA string %s eh uma substring da string %s\n", segundastring, primeirastring);
                    printf("\nAs duas string concatenadas: \n" );
                    for (int i = 0; i < tamanhodaprimeirastring + tamanhodasegundastring +2; i++)
                    {
                        printf("%c", stringconcatenada[i]);
                    }
                    
                    break;
                }
        }
        
        if (count == tamanhodasegundastring)
        {
            break;
        } else {
            printf("\nA string %s nao eh uma substring da string %s", primeirastring, segundastring);
            break;
        }
        
    }
    


    return 0;
}