#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int tamanho;
    char *string;

    printf("\nInforme o tamanho da string ");
    scanf("%d", &tamanho); 
    getchar();
    string = (char*)malloc(tamanho * sizeof(char));
    printf("\nInforme o conteudo da string ");
    fgets(string, tamanho, stdin);
    printf("\nString digitada: %s", string);
    printf("\nString sem as vogais: ");
    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string [i] != 'o' && string[i] != 'u'){
            printf("%c", string[i]);
        }else{
            tamanho--;
        }
        
       
        
    }
    
    free(string);
    string = NULL;

    return 0;
}