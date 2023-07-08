#include <stdio.h>
#define MAX 100

int main() {
    int tamanho = 5;
    int vet1[MAX];
    int *vet = vet1;
    printf("\nEscreva 10 numeros\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", vet + i);
    }

      for (int i = 0; i < tamanho; i++)
    {
        printf("%p ", (vet + i));
    }
     
    return 0;
}