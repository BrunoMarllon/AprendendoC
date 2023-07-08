#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char vet[MAX], count=0, palindromo1[MAX], palindromomaior[MAX], count2=0;
    printf("escreva um numero\n"); 
    fgets(vet, MAX, stdin);
    for(int j=0; j<strlen(vet)-1; j++){
        for (int i = 0, j = strlen(vet) - 2; i < (strlen(vet)); i++, j--)
        {
            printf("posicao de j = %d\n posicao de i = %d\n vet[j] = %d \n vet [i] : %d \n\n", j, i, vet[j], vet[i]);
            if (vet[i]==vet[j])
            {
                count++;
            }
            if (count == strlen(vet)-1)
            {
                printf("\no numero eh um palindromo\n");
                break;
            } else{
                printf("\n o numero nao eh um palindromo\n");
            }
            
        }
}
    return 0;
}