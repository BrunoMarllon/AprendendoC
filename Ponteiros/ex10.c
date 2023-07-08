#include <stdio.h>
#define MAX 100

int main() {
    int vet[MAX];
    int *ptr = vet;
    printf("Escreva 5 numeros"); 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;

    }
    for (int i = 0; i <5 ; i++)
    {
        ptr--;
        printf("%d ", (*ptr ) * 2);
        
    }
    
    
    return 0;
}