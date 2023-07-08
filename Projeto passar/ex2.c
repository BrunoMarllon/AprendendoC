#include <stdio.h>
#include <math.h>
int main(){
    float nmr;
    printf("Escreva um numero maior ou igual a zero \n");
    scanf("%f", &nmr);
    if(nmr >= 0){
        printf("a raiz quadrada do seu numero eh %f", sqrt(nmr));
    } else {
        printf("\n numero invalido");
    } 
    



    


    return 0;
}