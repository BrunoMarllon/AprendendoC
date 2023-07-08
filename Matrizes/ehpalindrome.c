#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char vet[MAX],vetinverso[MAX], numero,count=0;
    printf("\nescreva um numero\n");

    fgets(vet, MAX, stdin);
    printf("\nnumero escrito: \n");
    for (int i = 0; i < strlen(vet)-1; i++)
    {
        printf("%c", vet[i]);
    }
    printf("\n");
    for (int i = 0, j=strlen(vet)-2; i < strlen(vet)-1; i++, j--)
    {
        printf("%c == %c?", vet[i], vet[j]);
        printf("\nposicao do j : %d\n", j);
        printf("\nposicao do i : %d", i);
        if (vet[i]==vet[j])
        {
            count++;
        }
        printf("\nvalor do contador: %d\n", count);
    }
    if (count==strlen(vet)-1)
    {
        printf("\no numero escrito eh um palindromo\n");
    }else{
        printf("\n o numero nao eh um palindromo\n");
    }
    
    
    
    
   return 0;
}