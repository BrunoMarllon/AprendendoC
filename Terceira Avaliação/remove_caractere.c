#include <stdio.h>
#include <string.h>
#define MAX 100


void Le(char *ptr);
void RemoveCaractere(char *ptr, char caractere);
int main() {
    char frase[MAX], *ptr = frase, caractere;
    Le(ptr);
    printf("%s", ptr);
    printf("\nInforme o caractere que deseja remover: ");
    scanf("%c", &caractere);
    getchar();
    RemoveCaractere(ptr, caractere);
    printf("%s", ptr);
    return 0;
}
void RemoveCaractere(char *ptr, char caractere){
    for (int i = 0; i < strlen(ptr); (*ptr)++)
    {

        if (*ptr == caractere)
        {
           *ptr = (*ptr) + 1; 
           (*ptr)++;
        }
        
    }
    

}
void Le(char *ptr){

    printf("Digite uma frase: ");
    gets(ptr);  
    ptr[strlen(ptr) ] = ' ';  
    ptr[strlen(ptr) ] = '\0';

}