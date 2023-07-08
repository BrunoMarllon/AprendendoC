#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], palavra[MAX];
    int count=0, ocorrencia=0;
    printf("escreva uma frase\n");
    gets(frase);
    printf("digite uma palavra\n");
    gets(palavra);

    for (int i = 0; i <strlen(frase);i++)
    {
        for (int j = 0; j <strlen(palavra); j++, i++)
        {
            if (frase[i]==palavra[j])
            {
                count++;
                if (count==strlen(palavra))
                {
                    ocorrencia++;
                    i--;
                    break;
                }
                
            }else{
                break;
            }
            
        }
        count=0;
    }
    printf("a palavra %s se repete %d vezes dentro da frase %s", palavra, ocorrencia, frase);
    return 0;
}