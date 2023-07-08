#include <stdio.h>
#define MAX 100
int main (){
    int vet[MAX];
    printf("\n digite as 6 posicoes do vetor\n");
    for (int i = 0; i < 6; i++)
    {
       scanf("%d", &vet[i]);
    }
    printf("\nos valores digitados foram: ");
    for (int i = 0; i < 6; i++)
    {
       printf("%d ", vet[i]);
    }
    
    


    return 0;
}