#include <stdio.h>

int main(){
    int soma=0;
    printf("\na soma dos numeros pares eh: \n");
    for (int i = 0; i < 50; i++)
    {
        if(i%2==0){
            soma = i+soma;
        } 
    }
    printf("%d", soma);


    return 0;
}