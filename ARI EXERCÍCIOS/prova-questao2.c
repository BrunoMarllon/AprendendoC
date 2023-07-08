#include <stdio.h>
#include <string.h>
#define MAX 100

void Ler(char string[MAX]);
void Palindromo(char frase[MAX]);

int main() {
    char frase[MAX];
    Ler(frase);
    Palindromo(frase);
    return 0;
}

void Ler(char string[MAX]){
    printf("\nInforme uma string: ");
    fgets(string, MAX, stdin);
    // Remover o caractere de nova linha do final da string
    string[strcspn(string, "\n")] = '\0';
}

void Palindromo(char frase[MAX]){
    char palavra[MAX];
    int Ehpalindromo;

    for (int i = 0, j = 0; i <= strlen(frase); i++) {
        if (frase[i] != ' ' && frase[i] != '\0') {
            palavra[j] = frase[i];
            j++;
        } else {
            palavra[j] = '\0';
            j = 0;

            if (strlen(palavra) >= 3 && strlen(palavra) <= 5) {
                Ehpalindromo = 1;
                for (int x = 0, y = strlen(palavra) - 1; x < y; x++, y--) {
                    if (palavra[x] != palavra[y]) {
                        Ehpalindromo = 0;
                        break;
                    }
                }

                if (Ehpalindromo) {
                 for (int k = 0, t = i; k < strlen(palavra) ; k++, t++)
                 {
                    frase[t - strlen(palavra)] = '*';
            
                 }
                 
                }
            }
        }
    }

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] = )
        {
            /* code */
        }
        
    }
    
    printf("%s", frase);
}







