#include <stdio.h>
#include <string.h>
#define MAX 10000

int main() {
     char vet[MAX];
    printf("A multiplicação de todos os numeros de "); 
    for (int i = 100, k = 0; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++, k++)
        {
            vet[k] = i*j;
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
    }

    
    
    
    return 0;
}