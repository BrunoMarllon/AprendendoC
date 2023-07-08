#include <stdio.h>
#include <string.h>
#define MAX 100

void Ordena(char string[MAX], char uniao[MAX], char crescente[MAX], char decrescente[MAX]);

int main() {
    char string[MAX], uniao[MAX], crescente[MAX], decrescente[MAX];
    printf("Informe uma string"); 
    gets(string);
    Ordena(string, uniao, crescente, decrescente);
    printf("\nuniao: %s", uniao);
    printf("\nCrescente: %s", crescente);
    printf("\nDecrescente: %s", decrescente);
    return 0;
}

void Ordena(char string[MAX], char uniao[MAX], char crescente[MAX], char decrescente[MAX]){
    char maiusculas[MAX], minusculas[MAX], numeros[MAX], caracteres[MAX];
    for (int i = 0, x = 0; i < strlen(string); i++)
    {
        //Preenche o vetor maiusculas
        if (string[i] >= 65 && string[i] <= 90)
        {
            maiusculas[x] = string[i];
            maiusculas[x + 1] = '\0';
            x++;
        }
    }
    //Preenche o vetor minusculas
    for (int i = 0, x = 0; i < strlen(string); i++)
    {
        
        
        if (string[i] >= 97 && string[i] <= 122)
            {
                minusculas[x] = string[i];
                minusculas[x + 1] = '\0';
                x++;
            }
    }

    //Preenche o vetor numeros
    for (int i = 0, x = 0; i < strlen(string); i++)
    {
        if (string [i] >= 48 && string[i] <= 57)
        {
            numeros[x] = string[i];
            numeros[x + 1] = '\0';
            x++;
        }
        
    }
    //Preenche o vetor caracteres
    for (int i = 0, x = 0; i < strlen(string); i++)
    {
        if ((string[i] >= 32 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126))
        {
            caracteres[x] = string[i];
            caracteres[x + 1] = '\0';
            x++;
        }
        
    }
    
    //Junta todas as strings
            //maiusculas
            int i = 0;
            int j = 0;
    for (i = 0, j = 0; i < strlen(maiusculas) + 1; i++, j++)
    {
        uniao[i] = maiusculas[j];
    }
    int tamanhouniao = strlen(uniao);
    uniao[tamanhouniao] = ' ';
            //minusculas
    for (i = tamanhouniao + 1, j =0; i < strlen(minusculas) + tamanhouniao + 2; i++, j++)
    {
        uniao[i] = minusculas[j];
    }
    tamanhouniao = strlen(uniao);
    uniao[tamanhouniao] = ' ';
        //numeros
    for (i = tamanhouniao + 1, j = 0; i < strlen(numeros) + tamanhouniao + 2; i++, j++)
    {
        uniao[i] = numeros[j];
    }
    tamanhouniao = strlen(uniao);
    uniao[tamanhouniao] = ' ';
        //caracteres
    for (i = tamanhouniao + 1, j = 0; i < strlen(caracteres) + tamanhouniao + 2; i++, j++)
    {
        uniao[i] = caracteres[j];
    }
    ////////////////////////////////ORDEM CRESCENTE/////////////////////////////////
    for (i = 0; i < strlen(uniao) + 1; i++)
    {
        crescente[i] = uniao[i];
    }
    char aux;
    for (j = 0; j < MAX; j++)
    {
        for (i = 0; i < strlen(maiusculas) - 1; i++)
        {
            if (crescente[i] > crescente[i + 1])
            {
                aux = crescente[i];
                crescente[i] = crescente[i + 1];
                crescente[i + 1] = aux;
            }
            
        }
    }
    
    for (j = 0; j < MAX; j++)
    {
        for (i = strlen(maiusculas) + 1; i < strlen(maiusculas) + strlen(minusculas) ; i++)
        {
            if (crescente[i] > crescente[i + 1])
            {
                aux = crescente[i];
                crescente[i] = crescente[i + 1];
                crescente[i + 1] = aux;
            }
            
        }
    }

    for (j = 0; j < MAX; j++)
    {
        for (i = strlen(maiusculas) + strlen(minusculas) + 2; i < strlen(maiusculas) + strlen(minusculas) + strlen(numeros) + 1; i++)
        {
            if (crescente[i] > crescente[i + 1])
            {
                aux = crescente[i];
                crescente[i] = crescente[i + 1];
                crescente[i + 1] = aux;
            }
            
        }
    }
    
    for (j = 0; j < MAX; j++)
    {
        for (i = strlen(maiusculas) + strlen(minusculas) + strlen(numeros) + 3; i < strlen(maiusculas) + strlen(minusculas) + strlen(numeros) + strlen(caracteres) + 2 ; i++)
        {
            if (crescente[i] > crescente[i + 1])
            {
                aux = crescente[i];
                crescente[i] = crescente[i + 1];
                crescente[i + 1] = aux;
            }
            
        }
    }

    ////////////////////////////////ORDEM DECRESCENTE/////////////////////////////////
    for (i = 0; i < strlen(uniao) + 1; i++)
    {
        decrescente[i] = uniao[i];
    }
    aux;
    for (j = 0; j < MAX; j++)
    {
        for (i = 0; i < strlen(maiusculas) - 1; i++)
        {
            if (decrescente[i] < decrescente[i + 1])
            {
                aux = decrescente[i];
                decrescente[i] = decrescente[i + 1];
                decrescente[i + 1] = aux;
            }
            
        }
    }
    
    for (j = 0; j < MAX; j++)
    {
        for (i = strlen(maiusculas) + 1; i < strlen(maiusculas) + strlen(minusculas) ; i++)
        {
            if (decrescente[i] < decrescente[i + 1])
            {
                aux = decrescente[i];
                decrescente[i] = decrescente[i + 1];
                decrescente[i + 1] = aux;
            }
            
        }
    }

    for (j = 0; j < MAX; j++)
    {
        for (i = strlen(maiusculas) + strlen(minusculas) + 2; i < strlen(maiusculas) + strlen(minusculas) + strlen(numeros) + 1; i++)
        {
            if (decrescente[i] < decrescente[i + 1])
            {
                aux = decrescente[i];
                decrescente[i] = decrescente[i + 1];
                decrescente[i + 1] = aux;
            }
            
        }
    }
    
    for (j = 0; j < MAX; j++)
    {
        for (i = strlen(maiusculas) + strlen(minusculas) + strlen(numeros) + 3; i < strlen(maiusculas) + strlen(minusculas) + strlen(numeros) + strlen(caracteres) + 2 ; i++)
        {
            if (decrescente[i] < decrescente[i + 1])
            {
                aux = decrescente[i];
                decrescente[i] = decrescente[i + 1];
                decrescente[i + 1] = aux;
            }
            
        }
    }



   
    printf("\nmaisuculas %s", maiusculas);
    printf("\nminusculas %s", minusculas);
    printf("\nnumeros %s", numeros);
    printf("\ncaracteres %s", caracteres);
}