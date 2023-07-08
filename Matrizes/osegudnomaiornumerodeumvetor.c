#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {    
    char vet[MAX], position, tamanho;
    //recebendo o vetor
    printf("\nescreva um numero\n");
    fgets(vet, MAX, stdin);
    tamanho = strlen(vet) - 1;
    
    //organizando o vetor
    
   
      //Tirando numeros repetidos do vetor
    for (int h = 0; h < tamanho; h++)
    {
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = i+1; j < tamanho ; j++)
            {
                if (vet[i] == vet[j])
                {
                    vet[j] = vet[tamanho];
                    tamanho--;
                }
                
            }
            
        }
    }
    //Imprimindo o vetor sem numeros repetidos
    printf("\n vetor sem os numeros repetidos\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c ", vet[i]);
    }
    
    for (int j = 0; j < tamanho; j++)
    {    
        for (int i = 0; i < tamanho-1; i++)
        {
            if (vet[i]<vet[i+1])
            {
                position = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = position;
            }
            
        }
    }
    //imprimindo o vetor organizado

    printf("\n  vetor organizado\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c ", vet[i]);
    } 
    //imprimindo o segundo maior numero do vetor
    printf("o segundo maior numero do vetor:\n %c", vet[1]);
    return 0;
}