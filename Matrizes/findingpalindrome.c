#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], subfrase[MAX], maiorpalindromo[MAX];
    int tamanhodafrase, tamanhodomaiorpalindromo;
    maiorpalindromo[1] = '\0';
    printf("\nTamanho do maior palindromo: %d\n", tamanhodomaiorpalindromo);
    printf("\nDigite uma frase\n"); 
    fgets(frase, MAX, stdin);
    tamanhodafrase = strlen(frase) - 1;

    for (int i = 0; i < tamanhodafrase; i++)
    {
        for (int j = 3; j <= tamanhodafrase - i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                subfrase[k] = frase[i + k];
                
            }
            subfrase[j] = '\0';

            int ehPalindromo = 1;
            for (int k = 0, l =  j - 1; k < j; k++, l--)
            {
                if (subfrase[k] != subfrase[l])
                {
                    ehPalindromo = 0;
                    break;
                }
                if (ehPalindromo == 1)
                {
                    printf("\n%s eh um palindromo", subfrase);
                    if (strlen(subfrase) - 1 > strlen(maiorpalindromo) - 1)
                    {
                        for (int z  = 0; z < strlen(subfrase); z++)
                        {
                            maiorpalindromo[z] = subfrase[z];
                        }
                        
                    }
                    
                    break;
                }
                
                
            }
            
            
        }
        
    }
    printf("\nO maior palindromo eh %s", maiorpalindromo);
    return 0;
}