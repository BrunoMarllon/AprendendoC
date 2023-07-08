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
    char palavra[MAX], novafrase[MAX];
    int n = 0;
    for (int i = 0, j = 0; i < strlen(frase); i++)
    {
        palavra[j] = frase[i];
        j++;
        if(frase[i] == ' ' || frase[i] == '\n'){
            
            palavra[j - 1] = '\0';
            j = 0;
            //printf("\n\n");
            int palindromo = 1;
            for (int x = 0, y = strlen(palavra) - 1; x < strlen(palavra); x++, y--)
            {
                //printf("%c", palavra[y]);
                 if (palavra[x] != palavra[y])
                {
                    palindromo = 0;
                }
                if (palindromo)
                {
                    palavra[0]  = '*';
                    palavra[1]  =  '\0';
                    


                } 
            
                
            }

            for (int m = 0; m < strlen(palavra); m++)
            {
                novafrase[n] = palavra[m];
                n++;
            }
            novafrase[n] = ' ';
            n++;
            novafrase[n] = '\0';
            
        }
    }
    printf("\n%s", novafrase);
}

void Le(char frase[MAX]){

    printf("\nDigite uma frase: ");
    fgets(frase, MAX, stdin);

}