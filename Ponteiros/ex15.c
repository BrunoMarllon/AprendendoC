#include <stdio.h>
#define MAX 100

void LeVetor(int []);
void ImprimeVetor(int []);
int main() {
    int vetor[MAX];
    printf("\nDigite 5 numeros");
    LeVetor(vetor);
    ImprimeVetor(vetor);

    return 0;
}

void LeVetor(int vetor[MAX]){
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
}

void ImprimeVetor(int vetor[MAX]){

    int* ptr = vetor;
    printf("\nVetor escrito: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    
    
    
}