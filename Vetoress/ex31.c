#include <stdio.h>
#define MAX 100
#include <string.h>
int main() {
    int vet[MAX], vet2[MAX], tamanho=5, tamanho2=5;
    printf("escreva 10 numeros\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("escreva 10 numeros\n ");
    for (int i = 0; i < tamanho2; i++)
    {
        scanf("%d", &vet2[i]);
    }
   
    for (int i = 0; i < tamanho2; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vet2[i]==vet[j])
            {
                tamanho2--;
                break;
            }
            if (vet2[i]!=vet[j])
            {
                vet[tamanho++]= vet2[j];
            }
        }
        
    }
    





    printf("a uniao dos dois vetores: \n");
    for (int i = 0; i < tamanho+tamanho2; i++)
    {
        printf("%d ", vet[i]);
    }
    
   

    
    return 0;
}