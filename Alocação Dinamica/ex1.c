#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int* a = malloc( sizeof(int) * 5);
    printf("\nInforme 5 numeros\n"); 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Os numeros informados: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    a = NULL;
    

    
    return 0;
}