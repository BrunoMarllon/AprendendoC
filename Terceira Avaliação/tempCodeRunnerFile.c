#include <stdio.h>
#include <string.h>
#define MAX 100
void Le(char frase[MAX]);
void Substitui(char frase[MAX]);
int main() {
    char frase[MAX];

    Le(frase);
    Substitui(frase);
    return 0;
}

void Substitui(char frase[MAX]){
    char palavra[MAX];
    for (int i = 0, j = 0; i < strlen(frase); i++)
    {
        palavra[j] = frase[i];
        j++;
        if(frase[i] == ' ' || frase[i] == '\n'){
            
            palavra[j - 1] = '\0';
            j = 0;
            printf("\n\n");
            for (int x = 0, y = strlen(palavra); x < strlen(palavra); x++, y--)
            {
                printf("%c", palavra[x]);
            }
            printf("\n\n");
            for (int x = 0, y = strlen(palavra); x < strlen(palavra); x++, y--)
            {
                printf("%c", palavra[y]);
            }
            
        }
    }
    
}

void Le(char frase[MAX]){

    printf("\nDigite uma frase: ");
    fgets(frase, MAX, stdin);

}