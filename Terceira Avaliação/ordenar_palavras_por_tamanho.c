#include <stdio.h>
#include <string.h>
#define MAX 500
void Le(char frase[MAX]);
void Ordena(char frase[MAX]);
int main() {
   // printf(""); 
    char frase[MAX];
    Le(frase);
    printf("\nFrase: %s",frase);
    Ordena(frase);
    printf("\nFrase ordenada: %s", frase);
    return 0;
}
void Ordena(char frase[MAX]){
char palavra[MAX], matriz[MAX][MAX], novafrase[MAX];
    int x = 0;
    for (int i = 0, j = 0; i < strlen(frase) + 1 ; i++)
    {
        palavra[j] = frase[i];
        j++;
        if (frase[i] == ' ' || frase[i] == '\0')
        {
            palavra[j] = '\0';
             
            strcpy(matriz[x], palavra);
            x++;
         
           // printf("%s\n", palavra);
            j = 0;
        }
    }
    char aux[MAX];  
    //printf("\nPalavras escritas\n");
    for (int m = 0; m < x; m++)
        {
            ///printf("%s\n", matriz[m]);
        }  
    for (int g = 0; g < MAX; g++)
    {
    


        for (int i = 0; i < x; i++)
        {
            if (strlen(matriz[i]) < strlen(matriz[i+1]))
            {
                strcpy(aux, matriz[i]);
                strcpy(matriz[i], matriz[i + 1]);
                strcpy(matriz[i + 1], aux);
            }
        }
    }
    
    //printf("\nPalavras em ordem crescente: \n");
    for (int m = 0; m < x; m++)
        {
            //printf("%s\n", matriz[m]);
        }

    for (int i = 0; i < x; i++)
    {
        strcat(novafrase, matriz[i]);
        
        
    
    }
    //printf("\nNova frase: %s", novafrase);
    strcpy(frase, novafrase);
    
        
}
void Le(char frase[MAX]){

    printf("\nInforme uma frase: ");
    gets(frase);
    frase[strlen(frase)] = ' ';
    frase[strlen(frase) + 1] = '\0';
}