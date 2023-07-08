#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], palavra[MAX], maiorpalavra[MAX];
    int tamanhodafrase, tamanhodapalavra = 0, count = 0, ocorrencia =0, count2 = 0, tamanhodamaiorpalavra;
    printf("\nEscreva uma string\n"); 
    fgets(frase, MAX, stdin);
    tamanhodafrase = strlen(frase) - 1;
    maiorpalavra[1] = '\0';
    tamanhodamaiorpalavra = strlen(maiorpalavra ) - 1;
    frase[tamanhodafrase] = '\0';
    for (int i =0; i < tamanhodafrase+1; i++)
    {
        count++;
        count2++;
        if(frase[i] == ' ' || frase[i] == '\0'){
            
          
            ocorrencia++;
            printf("\nO tamanho da %d palavra: %d ",ocorrencia, count2 -1 );
            count2 = 0;
            if (tamanhodamaiorpalavra < count - count2)
            {
                printf("\nOcorre\n");
                for (int j = count - count2, k=0; j < count ; j++, k++)
                {
                    maiorpalavra [k] = frase[j];
                    maiorpalavra[k+1] = '\0';
                }
                
            }
            
        }
    }

    printf("\n");

    for (int i = 0; maiorpalavra[i] != '\0'; i++)
    {
        printf("%c", maiorpalavra[i]);
    }
    
      printf("\nA maior palavra %s\n", maiorpalavra);
      
    return 0;
}