#include <stdio.h>

int main (){

    int x, soma;

    for (int i = 0; i < 1000; i++)
    {
        if((i%3==0)||(i%5==0)){
            soma = soma + i;
        }
    }
    printf("soma dos numeros naturais multiplos de 3 e 5  abaixo de 1000 eh: %d", soma);


    return 0;
}