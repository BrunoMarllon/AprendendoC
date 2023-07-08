#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX], tamanho=50;
    printf("elementos do vetor\n");
    for (int i = 0; i < tamanho; i++)
    {
        vet[i] = ((i+5)*i)%(i+1);
    }
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vet[i]);
    }
    
    



    return 0;
}