#include <stdio.h>
#include <string.h>
#define MAX 100
void Le(char frase[MAX]);
void Palindromo(char frase[MAX], char palindromo[MAX]);

int main() {
    char frase[MAX], palindromo[MAX];


    Le(frase);
    Palindromo(frase, palindromo);
    return 0;
}

void Palindromo(char frase[MAX], char palindromo[MAX]){
    char palavra[MAX];
    int comeco = 0, final = 0;
    for (int i = 0, j = 0; i < strlen(frase); i++)
    {
        palavra[j] = frase[i];
        palavra[j + 1] = '\0';
        j++;

        comeco = i;
        if (frase[i] == ' ' || frase[i] == '\n')
        {
            
            //printf("\npalavra: %s", palavra);
            j = 0;
            printf("\n");
            int ehpalindromo = 1;
            for (int x = 0, y = strlen(palavra) - 2; x < strlen(palavra) - 1; x++, y--)
            {
                final = i;
            
                if (palavra[x] != palavra[y])
                {
                    ehpalindromo = 0;
                }
                if (ehpalindromo)
                {
                    printf("\nPalindromo: %s", palavra);
                    for (int m = comeco; m < final; m++)
                    {
                        frase[m] = '*';
                    }
                }
                
            }
        }
        
        
        
        
    }
    
    printf("\n\n%s", frase);

}

void Le(char frase[MAX]){

    printf("\nInforme uma frase: ");
    fgets(frase, MAX, stdin);
}

