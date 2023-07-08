#include <stdio.h>
#include <string.h>
#define MAX 100

void Le(char frase[MAX]);
void Palindromo(char frase[MAX], char fraseb[MAX]);

int main() {
    char frase[MAX], fraseb[MAX];
    Le(frase);
    Palindromo(frase, fraseb);
    return 0;
}
void Palindromo(char frase[MAX], char fraseb[MAX]){
    int tamanhodafrase = strlen(frase);
    char palavra[MAX];
    int a = 0, c = 0;
    for (int i = 0; i < tamanhodafrase + 1; i++)
    {
        
        if (frase[i] == ' ' || i == 0)
        {   
            int j = 0;
            int k = i;
            if (frase[i] == ' ')
            {
                k++;
            }
            
            for (; frase[k] != ' '; j++, k++)
            {
                palavra[j] = frase[k];
            }
            palavra[j] = '\0';
           //printf("\n%s", palavra);
 //////////////////////////////////////////////////////////////////////////////////////
           if (strlen(palavra) >= 3 && strlen(palavra) <=5)
           {
            int ehpalindromo = 1;
            for (int x = 0, y = strlen(palavra) - 1 ; x < strlen(palavra); x++, y--)
            {
                if (palavra[x] != palavra[y])
                {
                    ehpalindromo = 0;
                }
                
               
            }
            if (ehpalindromo)
            {
                palavra[0] = '*';
                palavra[1] = '\0';
            }
        
            
           }
        
            
        int b = 0;
           for (; b < strlen(palavra); a++, b++, c++)
           {
                fraseb[a] = palavra[b];
                
           }
           fraseb[a] = ' ';
            a++;
            
        fraseb[a ] = '\0';
        printf("\nvalor de 'a': %d\n", a);
        
        
           
          
        }
       printf("\n\n%s", fraseb); 
    }
}


void Le(char frase[MAX]){

    printf("\nDIgite uma frase\n");

    fgets(frase, MAX, stdin);
    int tamanho = strlen(frase);
    frase[tamanho - 1 ] = ' ';
    frase[tamanho] = '\0';

}