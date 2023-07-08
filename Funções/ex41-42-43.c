#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int MaiorNumero(int[], int);
int MenorNumero(int [], int);
float MediaDoVetor(int [], float);
void VetorAleatorio(int [], int);
void ImprimeOVetor(int [], int);

int main() {
    int vet[MAX], maiornumero, menornumero;
    float mediadovetor, tamanho = 10;
    VetorAleatorio(vet, tamanho);
    ImprimeOVetor(vet, tamanho);
    maiornumero = MaiorNumero(vet, tamanho);
    printf("\nO maior numero do vetor:%d\n", maiornumero);

    menornumero = MenorNumero(vet, tamanho);
    printf("\nO menor numero do vetor: %d", menornumero);

    mediadovetor = MediaDoVetor(vet, tamanho);
    printf("\nA media do vetor: %f\n", mediadovetor);

    return 0;
}






int MaiorNumero(int vet[], int tamanho){
    int  maiornumero;
    maiornumero = vet[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] > maiornumero)
        {
            maiornumero = vet[i];
        }
        
    }
    return maiornumero;
}
int MenorNumero(int vet[], int tamanho){
    int menornumero;
    menornumero = vet[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] < menornumero)
        {
            menornumero = vet[i];
        }
        
    }
    
 return menornumero;
}

float MediaDoVetor(int vet[], float tamanho){
        float media = 0;
        for (int  i = 0; i < tamanho; i++)
        {
            media = media + vet[i];
        }
        media = media/tamanho;
        return media;
    }
   
void VetorAleatorio(int vet[], int tamanho){
    
    srand(time (NULL));
    //Cria o vetor aleatorio
    for (int i = 0; i < tamanho; i++)
    {
        vet[i] = rand () % 9 + 1;        
    }
    //Tira os numeros aleatorios do vetor
    for (int k = 0; k < 10; k++)
    {
    
    
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                if (vet [i] == vet[j])
                {
                    vet[i] = rand () % 10 + 1;
                }
                
            }
            
        }
    }
}

void ImprimeOVetor(int vet[], int tamanho){

    printf("\nVetor a ser usado: ");
    for (int i = 0; i < tamanho; i++)
    {
        
        printf("%d ", vet[i]);

    }
    
}