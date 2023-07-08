#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int loteria[6], bilhete[6], count = 0, *p;
    printf("\nInforme os numeros gerado pela loteria");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &loteria[i]);
        for (int j = 0; j < i ; j++)
        {
            if (loteria[i] == loteria[j])
            {
                printf("\nPor favor, nao escreva numeros repetidos");
                i--;
                break;
            }
            
        } 
    }
    printf("\nInforme os numeros do seu bilhete");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &bilhete[i]);
        for (int j = 0; j < i ; j++)
        {
            if (bilhete[i] == bilhete[j])
            {
                printf("\nPor favor, nao escreva numeros repetidos");
                i--;
                break;
            }
            
        } 
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (bilhete[j] == loteria[i])
            {
                count++;
            }
            
        }
        
    }

    p = (int*)malloc(sizeof(int)*count);

    for (int i = 0, k = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (bilhete[j] == loteria[i])
            {
                p[k] = loteria[i];
                k++;
            }
            
        }
        
    }
    printf("\nNumeros sorteados: ");
    if (count > 0)
    {
        for (int i = 0; i < count; i++)
        {
            printf("%d ", p[i]);
        }
    }else printf("\nNao ha numeros sorteados");
    
    free(p);
    
    return 0;
}