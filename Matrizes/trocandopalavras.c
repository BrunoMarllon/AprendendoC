#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char frase[MAX], palavra[MAX], maiorpalavra[MAX], menorpalavra[MAX], frasesubstituta[MAX], frasesubstituta2[MAX];
    int tamanhodafrase, tamanhodapalavra = 0;
    int tamanhodamaiorpalavra = 0, ocorrencia = 0, comecodamaior, comecodamenor;
    int tamanhodamenorpalavra = MAX;

    printf("Escreva uma string: ");
    fgets(frase, MAX, stdin);

    tamanhodafrase = strlen(frase);
    if (frase[tamanhodafrase - 1] == '\n') {
        frase[tamanhodafrase - 1] = '\0';
        tamanhodafrase--;
    }

    for (int i = 0, k = 0; i <= tamanhodafrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
           
            palavra[k] = '\0';
            ocorrencia++;
            /*printf("\na posicao final da %d palavra: %d\n", ocorrencia, k );*/
            if (tamanhodapalavra > tamanhodamaiorpalavra) {
                comecodamaior = i-k;
                printf("\nComeco da maior palavra: %d", comecodamaior);
                tamanhodamaiorpalavra = tamanhodapalavra;
                strcpy(maiorpalavra, palavra);
            }
            if (tamanhodapalavra < tamanhodamenorpalavra)
            {
               /* printf("\n--------------No comando menoor:---------------");
                printf("\nfinal da menor palavra: %d\n tamanho de k: %d \n tamanhodapalavra: %d", k, i, tamanhodapalavra);*/
                comecodamenor = i-k;
                printf("\nComeco da menor palavra: %d", comecodamenor);
                tamanhodamenorpalavra = tamanhodapalavra;
                strcpy(menorpalavra, palavra);
            }
            
            k = 0;
            tamanhodapalavra = 0;
        } else {
             /*printf("\npara i = %d, temos a letra %c", i, frase[i]);*/
            palavra[k] = frase[i];
            k++;
            tamanhodapalavra++;
        }
    }
//substituindo as palavras
   for (int i = 0; i < strlen(frase) - 1; i++)
   {
        
   }
   

    printf("frase: %s", frasesubstituta2);

    

    
    
    /*printf("\nMaior palavra: %s\n", maiorpalavra);
     printf("Menor palavra: %s\n", menorpalavra);*/
     printf("\nFrase: %s", frasesubstituta);
    return 0;
}