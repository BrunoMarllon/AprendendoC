#include <stdio.h>
#include <string.h>
#define MAX 100

int main (){
    char vet[MAX], posicao;
    //lendo os caracteres e numeros
    printf("\nescreva 3 numeros, 3 letras maiusculas, 3 letras minusculas\n");
    fgets(vet, 100, stdin);
    while (strlen(vet)!=10){
        printf("\npor favor escreva 3 numeros, tres letras minusculas e 3 letras maiusculas");
        fgets(vet, 100, stdin);
    }
   
    // organizando os numeros

    for (int i = 0, M = 0, contador = 0; i < 9; i++)
    {
        
        if(vet[i]>=48 && vet[i]<= 57){
            posicao = vet[i];
            vet[i] = vet[M];
            vet[M] = posicao;
            M++;
        }
        if(M==3){
            break;
        }
}
    // imprimindo o vetor com os numeros organizados
    printf("\no vetor com os numeros organizados:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%c ", vet[i]);
    }

    //organizando as letras minusculas
    for (int i = 0, M = 3; i < 9; i++)
    {
        
        if(vet[i] >= 97 && vet[i]<=122){
            posicao = vet[M];
            vet[M] = vet[i];
            vet[i] = posicao;
            M++;
        }
    
    }
    // imprimindo o vetor com numeros e letras minusculas organizados
    printf("\n vetor organizado \n");
    for (int i = 0; i < 9; i++)
    {
        printf("%c ", vet[i]);
    }
    

    
    






    return 0;
}