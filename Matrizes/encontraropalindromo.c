#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char vet[MAX];
    int n, count=0;
    printf("\ndigite um numero\n"); 
    fgets(vet, MAX, stdin);
    printf("\ndigite o tamanho do palindromo que deseja encontrar\n");
    scanf("%d", &n);

    for (int i = 0; i < strlen(vet)-1; i++)
    {
        count=0;
        for (int j = i, k=strlen(vet)-2; j < strlen(vet)-1; j++, k--)
        {
            if(vet[i]==vet[k]){
                count++;
            }
            if (count==n)
            {
                printf("\no palindromo encontrado foi: \n");
                for (int l = k; l >= k; l--)
                {
                    printf("%c", vet[l]);
                    
                }
                
            }
            
        }
        
        
    }
    
    return 0;
}