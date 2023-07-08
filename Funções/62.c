#include <stdio.h>
#define MAX 100

void Tamanho(char*  , int*  );

int main() {
    char string[MAX];
    int tamanho;
    printf("\nInforme a string\n");
    fgets(string, MAX, stdin);

    Tamanho(string, &tamanho);

    printf("\nTamanho da string: %d", tamanho);


    return 0;
}

void Tamanho(char *string, int *tamanho){
    *tamanho = 0;
    for (; *string != '\0'; string++ )
    {   
        
        (*tamanho)++;
    }
    
}