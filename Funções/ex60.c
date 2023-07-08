#include <stdio.h>
#include <string.h>
#define MAX 100

void LeString(char [MAX]);
void LeSubstring(char [MAX]);
int PosicaoDaSubstring(char [MAX], char [MAX]);

int main() {
    char string[MAX], substring[MAX], count = 0, posicaoinicial, resultado;

    LeString(string);
    LeSubstring(substring);
    resultado = PosicaoDaSubstring(string, substring);
    if (resultado != -1)
    {
        printf("\nPosicao incial da substring: %d", resultado );
    }else if(resultado == -1)
    {
       printf("\nEssa substring nao existe\n");
    }    

    return 0;
}

void LeString(char string[MAX]){

    printf("\nDigite a string\n");
    fgets(string, MAX, stdin);
}
void LeSubstring(char substring[MAX]){

    printf("\nDigite a substring\n");
    fgets(substring, MAX, stdin);
}
int PosicaoDaSubstring(char string[MAX], char substring[MAX]){
    int count = 0, posicaoinicial;
    for (int i = 0; i < strlen(string) - strlen(substring)+2; i++)
    {
        for (int j = 0, k = i; j < strlen(substring) - 1; j++, k++)
        {
            if (string[k] == substring[j])
            {
                count++;
                if (count == strlen(substring) - 1)
                {
                    
                    return i;
                }
                
            } else{
                count = 0;
            }
        }
    }
    if (count == 0)
    {
        return -1;
    }

    
}