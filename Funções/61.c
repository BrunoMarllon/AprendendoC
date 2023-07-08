#include <stdio.h>
#include <string.h>
#define MAX 100

void Palavra(char []);
void Anagrama(char []);
int ProcuraAnagrama(char [], char []);
int main() {
    char palavra[MAX], anagrama[MAX], resultado;
    Palavra(palavra);
    Anagrama(anagrama);
    
    resultado = ProcuraAnagrama(palavra, anagrama);
    if (resultado == 1)
    {
        printf("%s eh um anagrama de %s", anagrama, palavra);
    }else if (resultado == 0){
        printf("%s nao eh um anagrama de %s", anagrama, palavra);
    }
    
    return 0;
}

void Palavra(char palavra[MAX]){
    printf("\nInforme a palavra\n");
    fgets(palavra, MAX, stdin);
}

void Anagrama(char anagrama[MAX]){
    printf("\nInforme o anagrama\n");
    fgets(anagrama, MAX, stdin);
}

int ProcuraAnagrama(char palavra[MAX], char anagrama[MAX]){
    int count = 0;
    if (strlen(palavra) -1 != strlen(anagrama) - 1)
    {
        return 0;
    }
    for (int i = 0; i < strlen(palavra) - 1; i++)
    {
        for (int j = 0; j < strlen(anagrama) - 1; j++)
        {
            if (anagrama[j] == palavra[i])
            {
                count++;
                break;
            }
            
        }
    
    }
     
     if (count == strlen(palavra) - 1)
        {
            return 1;
        } else {
            return 0;
        }

}