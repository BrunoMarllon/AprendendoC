#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int qtd, *p;
    printf("\nInforme a quantidade de elementos do vetor");
    scanf("%d", &qtd);
    p = (int*)malloc(qtd * sizeof(int)); 
    
    for (int i = 0; i < qtd; i++)
    {
        printf("\nInforme a posicao %d do vetor", i);
        scanf("%d", &p[i]);
    }
    
    for (int i = 0; i < qtd; i++)
    {
        printf("\nNo vetor p[%d] esta o valor: %d \n", i, p[i]);
    }
    


    printf("A variavel 'p' ocupa %d bytes em memoria \n " , p);

    free(p);
    p = NULL;

    return 0;
}