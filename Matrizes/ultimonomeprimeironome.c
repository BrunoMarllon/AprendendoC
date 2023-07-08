#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    //Declarando Variáveis
    char nome[MAX], ultimonome[MAX];
    int tamanhodonome, tamanhodoultimonome;
    printf("\nDigite o seu nome\n"); 
    fgets(nome, MAX, stdin); // Lê o nome
    tamanhodonome = strlen(nome) - 1;
    //Coloca o ultimo nome no vetor ultimonome[]
    for (int i = tamanhodonome - 1, j = 0; ; i--, j++)
    {
        if (nome[i] == ' ')
        {
            ultimonome[j] = '\0';
            break;
        }
        ultimonome[j] = nome[i];
        
    }
    tamanhodoultimonome = strlen(ultimonome)-1;
    printf("\nO tamanho do ultimo nome: %d \n", tamanhodoultimonome);
    //Imprime os dois nomes
     printf("\n O seu ultimo e primero nome: ");
     for (int i = tamanhodoultimonome; i >= 0; i--)
    {
        printf("%c", ultimonome[i]);
    }
     printf(", ");
    for (int i = 0; ; i++)
    {
        if (nome[i] == ' ')
        {
            break;
        }
        printf("%c", nome[i]);
    }
   
   
    

    return 0;
}