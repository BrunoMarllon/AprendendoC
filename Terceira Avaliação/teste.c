#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void Le(char frase[MAX]);
void AoContrario(char frase[MAX]);
int main() {
    char frase[MAX];
    Le(frase);
    AoContrario(frase);



    
    return 0;
}   

void AoContrario(char frase[MAX]){
    char palavra[MAX];
    for (int i = 0, j = 0; i < strlen(frase); i++)
    {
        palavra[j] = frase[i];
        j++;
        if (frase[i] == ' ')
        {
            for (i = 0; i < count; i++)
            {
                /* code */
            }
            
            j = 0;
        }
    }
    


}

void Le(char frase[MAX]){

    printf("Digite uma frase: ");
    gets(frase);    
}